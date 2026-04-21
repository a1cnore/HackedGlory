// functions/10055 — 254 functions
#include "GameKindred.h"




long thunk_FUN_100550ef4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_100553e90();
  }
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x48));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x50));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x58));
  return param_1;
}




long thunk_FUN_100550ef4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_100553e90();
  }
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x48));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x50));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x58));
  return param_1;
}




uint FUN_100550034(long param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float local_29c;
  float fStack_298;
  float local_294;
  uint local_290 [128];
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  local_84 = *param_3 - *param_4;
  fStack_80 = param_3[1] - param_4[1];
  local_7c = param_3[2] - param_4[2];
  local_90 = *param_4 + *param_3;
  fStack_8c = param_4[1] + param_3[1];
  local_88 = param_4[2] + param_3[2];
  uVar1 = FUN_1005507c8(param_1,param_2,&local_84,&local_90,local_290,0x80);
  if ((int)uVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar4 = uVar1 & 0xffffffff;
    puVar5 = local_290;
    fVar7 = 3.4028235e+38;
    uVar2 = 0;
    do {
      uVar3 = *puVar5;
      uVar1 = FUN_100550490(uVar1,param_2,
                            uVar3 & (-1 << (ulong)(*(uint *)(param_1 + 0x60) & 0x1f) ^ 0xffffffffU),
                            param_3,&local_29c);
      fVar6 = (local_29c - *param_3) * (local_29c - *param_3) +
              (fStack_298 - param_3[1]) * (fStack_298 - param_3[1]) +
              (local_294 - param_3[2]) * (local_294 - param_3[2]);
      if (fVar6 < fVar7) {
        uVar2 = uVar3;
      }
      if (fVar6 < fVar7 && param_5 != (float *)0x0) {
        *param_5 = local_29c;
        param_5[1] = fStack_298;
        param_5[2] = local_294;
      }
      else {
        fVar6 = (float)NEON_fminnm(fVar6,fVar7);
        uVar3 = uVar2;
      }
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
      fVar7 = fVar6;
      uVar2 = uVar3;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




void FUN_1005501ac(long param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  if ((param_2 != (int *)0x0) && (uVar5 = *(uint *)(*(long *)(param_2 + 2) + 0x18), 0 < (int)uVar5))
  {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x50);
    iVar6 = *param_2;
    iVar3 = *(int *)(param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 0x60);
    lVar13 = *(long *)(param_2 + 4);
    lVar14 = lVar13 + 0xe;
    do {
      puVar2 = (uint *)(lVar13 + uVar11 * 0x20);
      *puVar2 = 0xffffffff;
      if (((*(byte *)((long)puVar2 + 0x1f) & 0xc0) != 0x40) &&
         ((ulong)*(byte *)((long)puVar2 + 0x1e) != 0)) {
        uVar9 = 0xffffffff;
        uVar15 = (ulong)*(byte *)((long)puVar2 + 0x1e);
        do {
          uVar8 = *(ushort *)(lVar14 + uVar15 * 2);
          if (0 < (short)uVar8) {
            uVar7 = param_2[1];
            if (uVar7 != 0xffffffff) {
              puVar10 = (uint *)(*(long *)(param_2 + 8) + (ulong)uVar7 * 0xc);
              param_2[1] = puVar10[1];
              *(char *)(puVar10 + 2) = (char)(uVar15 - 1);
              *(undefined2 *)((long)puVar10 + 9) = 0xff;
              *(undefined1 *)((long)puVar10 + 0xb) = 0;
              *puVar10 = (int)((ulong)((long)param_2 - lVar12) >> 3) * -0x3b13b13b <<
                         (ulong)(uVar4 & 0x1f) | iVar6 << (ulong)(iVar3 + uVar4 & 0x1f) | uVar8 - 1;
              puVar10[1] = (uint)uVar9;
              *puVar2 = uVar7;
              uVar9 = (ulong)uVar7;
            }
          }
          bVar1 = 1 < (long)uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x20;
    } while (uVar11 != uVar5);
  }
  return;
}




void FUN_10055029c(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_2 != (int *)0x0) && (lVar9 = *(long *)(param_2 + 2), 0 < *(int *)(lVar9 + 0x34))) {
    lVar14 = 0;
    lVar15 = 0;
    lVar11 = *(long *)(param_1 + 0x50);
    iVar4 = *param_2;
    iVar2 = *(int *)(param_1 + 0x5c);
    uVar3 = *(uint *)(param_1 + 0x60);
    do {
      lVar16 = *(long *)(param_2 + 4);
      pfVar1 = (float *)(*(long *)(param_2 + 0x12) + lVar14);
      uVar7 = *(ushort *)(pfVar1 + 7);
      local_74 = pfVar1[6];
      uStack_70 = *(undefined4 *)(lVar9 + 0x44);
      local_6c = local_74;
      uVar8 = FUN_100550034(param_1,param_2,pfVar1,&local_74,&local_80);
      if ((uVar8 != 0) &&
         ((local_80 - *pfVar1) * (local_80 - *pfVar1) +
          (local_78 - pfVar1[2]) * (local_78 - pfVar1[2]) <= pfVar1[6] * pfVar1[6])) {
        pfVar10 = (float *)(*(long *)(param_2 + 6) +
                           (ulong)*(ushort *)(lVar16 + (ulong)uVar7 * 0x20 + 4) * 0xc);
        *pfVar10 = local_80;
        pfVar10[1] = local_7c;
        pfVar10[2] = local_78;
        uVar5 = param_2[1];
        if (uVar5 != 0xffffffff) {
          lVar9 = *(long *)(param_2 + 8);
          puVar12 = (uint *)(lVar9 + (ulong)uVar5 * 0xc);
          uVar6 = puVar12[1];
          param_2[1] = uVar6;
          *puVar12 = uVar8;
          puVar12[2] = 0xff00;
          lVar13 = (ulong)uVar7 * 0x20;
          puVar12[1] = *(uint *)(lVar16 + lVar13);
          *(uint *)(lVar16 + lVar13) = uVar5;
          if (uVar6 != 0xffffffff) {
            puVar12 = (uint *)(lVar9 + (ulong)uVar6 * 0xc);
            param_2[1] = puVar12[1];
            uVar5 = *(uint *)(param_1 + 0x60);
            lVar16 = *(long *)(param_2 + 4);
            *puVar12 = (int)((ulong)((long)param_2 - lVar11) >> 3) * -0x3b13b13b <<
                       (ulong)(uVar3 & 0x1f) | iVar4 << (ulong)(iVar2 + uVar3 & 0x1f) |
                       (uint)*(ushort *)(pfVar1 + 7);
            puVar12[2] = 0xffff;
            lVar9 = (ulong)(uVar8 & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) & 0xffff) * 0x20;
            puVar12[1] = *(uint *)(lVar16 + lVar9);
            *(uint *)(lVar16 + lVar9) = uVar6;
          }
        }
      }
      lVar15 = lVar15 + 1;
      lVar9 = *(long *)(param_2 + 2);
      lVar14 = lVar14 + 0x24;
    } while (lVar15 < *(int *)(lVar9 + 0x34));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100550490(undefined8 param_1,long param_2,ulong param_3,float *param_4,float *param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float local_114;
  long local_110 [3];
  float afStack_f8 [6];
  float local_e0 [6];
  undefined8 local_c8;
  float afStack_c0 [16];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  lVar16 = *(long *)(param_2 + 0x10);
  param_3 = param_3 & 0xffffffff;
  lVar1 = lVar16 + param_3 * 0x20;
  if ((*(byte *)(lVar1 + 0x1f) & 0xc0) == 0x40) {
    pfVar12 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(lVar1 + 4) * 0xc);
    pfVar13 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(lVar1 + 6) * 0xc);
    fVar17 = (float)FUN_10054ec38((*pfVar12 - *param_4) * (*pfVar12 - *param_4) +
                                  (pfVar12[1] - param_4[1]) * (pfVar12[1] - param_4[1]) +
                                  (pfVar12[2] - param_4[2]) * (pfVar12[2] - param_4[2]));
    fVar18 = (float)FUN_10054ec38((*pfVar13 - *param_4) * (*pfVar13 - *param_4) +
                                  (pfVar13[1] - param_4[1]) * (pfVar13[1] - param_4[1]) +
                                  (pfVar13[2] - param_4[2]) * (pfVar13[2] - param_4[2]));
    fVar17 = fVar17 / (fVar18 + fVar17);
    *param_5 = *pfVar12 + fVar17 * (*pfVar13 - *pfVar12);
    param_5[1] = pfVar12[1] + fVar17 * (pfVar13[1] - pfVar12[1]);
    param_5[2] = pfVar12[2] + fVar17 * (pfVar13[2] - pfVar12[2]);
  }
  else {
    bVar2 = *(byte *)(lVar1 + 0x1e);
    if (bVar2 != 0) {
      lVar7 = *(long *)(param_2 + 0x18);
      pfVar12 = afStack_c0;
      puVar9 = (ushort *)(lVar16 + param_3 * 0x20 + 4);
      uVar4 = (ulong)bVar2;
      do {
        pfVar13 = (float *)(lVar7 + (ulong)*puVar9 * 0xc);
        pfVar12[-2] = *pfVar13;
        pfVar12[-1] = pfVar13[1];
        *pfVar12 = pfVar13[2];
        uVar4 = uVar4 - 1;
        pfVar12 = pfVar12 + 3;
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    lVar7 = *(long *)(param_2 + 0x28);
    *param_5 = *param_4;
    param_5[1] = param_4[1];
    param_5[2] = param_4[2];
    uVar4 = FUN_10054ef7c(param_4,&local_c8,(ulong)bVar2,local_e0,afStack_f8);
    if ((uVar4 & 1) == 0) {
      uVar14 = (uint)bVar2;
      if (bVar2 == 0) {
        iVar6 = -1;
      }
      else {
        uVar4 = 0;
        fVar18 = 3.4028235e+38;
        iVar5 = -1;
        do {
          iVar6 = (int)uVar4;
          if (fVar18 <= local_e0[uVar4]) {
            iVar6 = iVar5;
          }
          fVar18 = (float)NEON_fminnm(local_e0[uVar4],fVar18);
          uVar4 = uVar4 + 1;
          iVar5 = iVar6;
        } while (uVar14 != uVar4);
      }
      iVar5 = 0;
      if (uVar14 != 0) {
        iVar5 = (iVar6 + 1) / (int)uVar14;
      }
      lVar10 = (long)(int)((iVar6 + 1) - iVar5 * uVar14);
      fVar18 = local_e0[(long)iVar6 + -6];
      uVar19 = *(undefined8 *)((long)&local_c8 + (long)iVar6 * 0xc);
      uVar21 = *(undefined8 *)((long)&local_c8 + lVar10 * 0xc);
      fVar17 = (float)uVar19;
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      *(ulong *)param_5 =
           CONCAT44(fVar20 + ((float)((ulong)uVar21 >> 0x20) - fVar20) * fVar18,
                    fVar17 + ((float)uVar21 - fVar17) * fVar18);
      param_5[2] = afStack_c0[(long)iVar6 * 3] +
                   fVar18 * (afStack_c0[lVar10 * 3] - afStack_c0[(long)iVar6 * 3]);
    }
    piVar15 = (int *)(lVar7 + param_3 * 0xc);
    if (*(byte *)((long)piVar15 + 9) != 0) {
      uVar14 = 0;
      do {
        lVar7 = 0;
        lVar10 = *(long *)(param_2 + 0x38);
        iVar6 = piVar15[1];
        bVar2 = *(byte *)(lVar1 + 0x1e);
        do {
          bVar3 = *(byte *)(lVar10 + (ulong)((iVar6 + uVar14) * 4) + lVar7);
          uVar8 = (uint)bVar2;
          if (bVar3 < uVar8) {
            lVar11 = *(long *)(param_2 + 0x18) +
                     (ulong)*(ushort *)(lVar16 + param_3 * 0x20 + (ulong)bVar3 * 2 + 4) * 0xc;
          }
          else {
            lVar11 = *(long *)(param_2 + 0x30) + (ulong)(((bVar3 - uVar8) + *piVar15) * 3) * 4;
          }
          local_110[lVar7] = lVar11;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        uVar4 = FUN_10054edf8(param_4,local_110[0],local_110[1],local_110[2],&local_114);
        if ((uVar4 & 1) != 0) {
          param_5[1] = local_114;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(byte *)((long)piVar15 + 9));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_1005507c8(long param_1,int *param_2,float *param_3,float *param_4,long param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  float *pfVar11;
  ushort *puVar12;
  ushort *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
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
  
  puVar13 = *(ushort **)(param_2 + 0x10);
  if (puVar13 == (ushort *)0x0) {
    lVar15 = *(long *)(param_2 + 2);
    iVar14 = *(int *)(lVar15 + 0x18);
    if (iVar14 < 1) {
      return 0;
    }
    lVar9 = 0;
    iVar8 = 0;
    lVar16 = *(long *)(param_1 + 0x50);
    iVar3 = *param_2;
    iVar2 = *(int *)(param_1 + 0x5c);
    uVar1 = *(uint *)(param_1 + 0x60);
    lVar17 = *(long *)(param_2 + 4);
    puVar13 = (ushort *)(lVar17 + 6);
    do {
      lVar18 = lVar17 + lVar9 * 0x20;
      if ((*(byte *)(lVar18 + 0x1f) & 0xc0) != 0x40) {
        pfVar11 = (float *)(*(long *)(param_2 + 6) + (ulong)*(ushort *)(lVar18 + 4) * 0xc);
        fVar21 = *pfVar11;
        fVar19 = pfVar11[1];
        fVar20 = pfVar11[2];
        fVar22 = fVar21;
        fVar23 = fVar19;
        fVar24 = fVar20;
        if (1 < (ulong)*(byte *)(lVar18 + 0x1e)) {
          lVar18 = (ulong)*(byte *)(lVar18 + 0x1e) - 1;
          puVar12 = puVar13;
          do {
            pfVar11 = (float *)(*(long *)(param_2 + 6) + (ulong)*puVar12 * 0xc);
            fVar28 = *pfVar11;
            fVar25 = pfVar11[1];
            fVar22 = (float)NEON_fminnm(fVar22,fVar28);
            fVar23 = (float)NEON_fminnm(fVar23,fVar25);
            fVar26 = pfVar11[2];
            fVar24 = (float)NEON_fminnm(fVar24,fVar26);
            if (fVar21 <= fVar28) {
              fVar21 = fVar28;
            }
            if (fVar19 <= fVar25) {
              fVar19 = fVar25;
            }
            if (fVar20 <= fVar26) {
              fVar20 = fVar26;
            }
            lVar18 = lVar18 + -1;
            puVar12 = puVar12 + 1;
          } while (lVar18 != 0);
        }
        if (*param_3 <= fVar21) {
          bVar7 = fVar22 <= *param_4;
        }
        else {
          bVar7 = false;
        }
        if (param_3[1] <= fVar19) {
          bVar6 = false;
          if (fVar23 <= param_4[1]) {
            bVar6 = bVar7;
          }
        }
        else {
          bVar6 = false;
        }
        if (((param_3[2] <= fVar20) && (fVar24 <= param_4[2])) && ((bool)(bVar6 & iVar8 < param_6)))
        {
          *(uint *)(param_5 + (long)iVar8 * 4) =
               (int)((ulong)((long)param_2 - lVar16) >> 3) * -0x3b13b13b << (ulong)(uVar1 & 0x1f) |
               iVar3 << (ulong)(iVar2 + uVar1 & 0x1f) | (uint)lVar9;
          iVar8 = iVar8 + 1;
          iVar14 = *(int *)(lVar15 + 0x18);
        }
      }
      lVar9 = lVar9 + 1;
      puVar13 = puVar13 + 0x10;
    } while (lVar9 < iVar14);
  }
  else {
    lVar15 = *(long *)(param_2 + 2);
    fVar19 = *(float *)(lVar15 + 0x50);
    fVar23 = (float)NEON_fminnm(*param_3,*(undefined4 *)(lVar15 + 0x54));
    fVar22 = *(float *)(lVar15 + 0x48);
    fVar21 = *(float *)(lVar15 + 0x4c);
    fVar20 = fVar22;
    if (fVar22 <= *param_3) {
      fVar20 = fVar23;
    }
    fVar24 = (float)NEON_fminnm(param_3[1],*(undefined4 *)(lVar15 + 0x58));
    fVar23 = fVar21;
    if (fVar21 <= param_3[1]) {
      fVar23 = fVar24;
    }
    fVar28 = (float)NEON_fminnm(param_3[2],*(undefined4 *)(lVar15 + 0x5c));
    fVar24 = fVar19;
    if (fVar19 <= param_3[2]) {
      fVar24 = fVar28;
    }
    fVar25 = (float)NEON_fminnm(*param_4,*(undefined4 *)(lVar15 + 0x54));
    fVar28 = fVar22;
    if (fVar22 <= *param_4) {
      fVar28 = fVar25;
    }
    fVar26 = (float)NEON_fminnm(param_4[1],*(undefined4 *)(lVar15 + 0x58));
    fVar25 = fVar21;
    if (fVar21 <= param_4[1]) {
      fVar25 = fVar26;
    }
    fVar27 = (float)NEON_fminnm(param_4[2],*(undefined4 *)(lVar15 + 0x5c));
    fVar26 = fVar19;
    if (fVar19 <= param_4[2]) {
      fVar26 = fVar27;
    }
    if (*(int *)(lVar15 + 0x30) < 1) {
      return 0;
    }
    iVar8 = 0;
    puVar12 = puVar13 + (long)*(int *)(lVar15 + 0x30) * 8;
    fVar27 = *(float *)(lVar15 + 0x60);
    lVar15 = *(long *)(param_1 + 0x50);
    iVar2 = *param_2;
    iVar14 = *(int *)(param_1 + 0x5c);
    uVar1 = *(uint *)(param_1 + 0x60);
    do {
      if ((uint)puVar13[3] < ((int)((fVar20 - fVar22) * fVar27) & 0xfffeU)) {
        bVar7 = false;
      }
      else {
        bVar7 = (uint)*puVar13 <= ((int)(fVar27 * (fVar28 - fVar22) + 1.0) | 1U);
      }
      if ((uint)puVar13[4] < ((int)((fVar23 - fVar21) * fVar27) & 0xfffeU)) {
        bVar5 = 0;
      }
      else {
        bVar5 = (uint)puVar13[1] <= ((int)(fVar27 * (fVar25 - fVar21) + 1.0) | 1U) & bVar7;
      }
      if ((uint)puVar13[5] < ((int)((fVar24 - fVar19) * fVar27) & 0xfffeU)) {
        bVar7 = false;
        uVar10 = ~*(uint *)(puVar13 + 6) >> 0x1f;
      }
      else {
        uVar4 = *(uint *)(puVar13 + 6);
        bVar7 = (bool)((uint)puVar13[2] <= ((int)(fVar27 * (fVar26 - fVar19) + 1.0) | 1U) & bVar5);
        uVar10 = ~uVar4 >> 0x1f;
        if ((-1 < (int)uVar4) && (bVar7 && iVar8 < param_6)) {
          *(uint *)(param_5 + (long)iVar8 * 4) =
               (int)((ulong)((long)param_2 - lVar15) >> 3) * -0x3b13b13b << (ulong)(uVar1 & 0x1f) |
               iVar2 << (ulong)(iVar14 + uVar1 & 0x1f) | uVar4;
          iVar8 = iVar8 + 1;
          uVar10 = 1;
          bVar7 = true;
        }
      }
      if (bVar7) {
        lVar9 = 1;
      }
      else {
        lVar9 = 1;
        if (uVar10 == 0) {
          lVar9 = -(long)*(int *)(puVar13 + 6);
        }
      }
      puVar13 = puVar13 + lVar9 * 8;
    } while (puVar13 < puVar12);
  }
  return iVar8;
}




void FUN_100550b34(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) +
                   (long)(int)(*(uint *)(param_1 + 0x38) &
                              param_2 * -0x72594cbd + param_3 * -0x27e9c7bf) * 8);
  while ((lVar1 != 0 &&
         ((((lVar2 = *(long *)(lVar1 + 8), lVar2 == 0 || (*(int *)(lVar2 + 8) != param_2)) ||
           (*(int *)(lVar2 + 0xc) != param_3)) || (*(int *)(lVar2 + 0x10) != param_4))))) {
    lVar1 = *(long *)(lVar1 + 0x60);
  }
  return;
}




int FUN_100550b98(long param_1,int param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) +
                   (long)(int)(*(uint *)(param_1 + 0x38) &
                              param_2 * -0x72594cbd + param_3 * -0x27e9c7bf) * 8);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      lVar3 = *(long *)(lVar2 + 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 8) == param_2)) &&
         (*(int *)(lVar3 + 0xc) == param_3 && iVar1 < param_5)) {
        *(long *)(param_4 + (long)iVar1 * 8) = lVar2;
        iVar1 = iVar1 + 1;
      }
      lVar2 = *(long *)(lVar2 + 0x60);
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_100550c08(undefined8 param_1,ulong param_2,ulong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  switch(param_4) {
  case 0:
    param_2 = (ulong)(iVar1 + 1);
    goto switchD_100550c28_default;
  case 1:
    param_2 = (ulong)(iVar1 + 1);
    break;
  case 2:
    break;
  case 3:
    param_2 = (ulong)(iVar1 - 1);
    break;
  case 4:
    param_2 = (ulong)(iVar1 - 1);
    goto switchD_100550c28_default;
  case 5:
    param_2 = (ulong)(iVar1 - 1);
  case 6:
    goto switchD_100550c28_caseD_6;
  case 7:
    param_2 = (ulong)(iVar1 + 1);
    goto switchD_100550c28_caseD_6;
  default:
    goto switchD_100550c28_default;
  }
  param_3 = (ulong)((int)param_3 + 1);
switchD_100550c28_default:
  FUN_100550b98(param_1,param_2,param_3,param_5,param_6);
  return;
switchD_100550c28_caseD_6:
  param_3 = (ulong)((int)param_3 - 1);
  goto switchD_100550c28_default;
}




int FUN_100550c6c(long param_1,int param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) +
                   (long)(int)(*(uint *)(param_1 + 0x38) &
                              param_2 * -0x72594cbd + param_3 * -0x27e9c7bf) * 8);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      lVar3 = *(long *)(lVar2 + 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 8) == param_2)) &&
         (*(int *)(lVar3 + 0xc) == param_3 && iVar1 < param_5)) {
        *(long *)(param_4 + (long)iVar1 * 8) = lVar2;
        iVar1 = iVar1 + 1;
      }
      lVar2 = *(long *)(lVar2 + 0x60);
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_100550cdc(long param_1,float *param_2,int *param_3,int *param_4)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x24);
  *param_3 = (int)((*param_2 - *(float *)(param_1 + 0x1c)) / *(float *)(param_1 + 0x28));
  *param_4 = (int)((param_2[2] - fVar1) / *(float *)(param_1 + 0x2c));
  return;
}




undefined8 FUN_100550d14(long param_1,uint param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  
  if (param_2 != 0) {
    uVar3 = 0x80000008;
    uVar1 = *(uint *)(param_1 + 0x60);
    uVar2 = param_2 >> ((ulong)uVar1 & 0x3f) & ~(-1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f));
    uVar4 = (ulong)uVar2;
    if (uVar2 < *(uint *)(param_1 + 0x30)) {
      puVar5 = (uint *)(*(long *)(param_1 + 0x50) + uVar4 * 0x68);
      if (((*puVar5 ==
            (param_2 >> (ulong)(uVar1 + *(uint *)(param_1 + 0x5c) & 0x1f) &
            (-1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f) ^ 0xffffffffU))) &&
          (lVar6 = *(long *)(*(long *)(param_1 + 0x50) + uVar4 * 0x68 + 8), lVar6 != 0)) &&
         (param_2 = param_2 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU),
         param_2 < *(uint *)(lVar6 + 0x18))) {
        *param_3 = puVar5;
        *param_4 = *(long *)(*(long *)(param_1 + 0x50) + uVar4 * 0x68 + 0x10) +
                   (ulong)param_2 * 0x20;
        uVar3 = 0x40000000;
      }
    }
    return uVar3;
  }
  return 0x80000000;
}




void FUN_100550dcc(long param_1,uint param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  lVar2 = (ulong)(param_2 >> ((ulong)uVar1 & 0x3f) &
                 ~(-1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f))) * 0x68;
  *param_3 = *(long *)(param_1 + 0x50) + lVar2;
  *param_4 = *(long *)(*(long *)(param_1 + 0x50) + lVar2 + 0x10) +
             (ulong)(param_2 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) * 0x20;
  return;
}




bool FUN_100550e1c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x60);
    uVar2 = param_2 >> ((ulong)uVar1 & 0x3f) & ~(-1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f));
    if (((uVar2 < *(uint *)(param_1 + 0x30)) &&
        (*(uint *)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 0x68) ==
         (param_2 >> (ulong)(uVar1 + *(uint *)(param_1 + 0x5c) & 0x1f) &
         (-1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f) ^ 0xffffffffU)))) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 0x68 + 8), lVar3 != 0)) {
      return (param_2 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) < *(uint *)(lVar3 + 0x18);
    }
  }
  return false;
}




void * FUN_100550ea4(void *param_1)

{
  *(undefined4 *)((long)param_1 + 0x100) = 0xffff;
  _memset_pattern16(param_1,&DAT_101180690,0x100);
  return param_1;
}




void FUN_100550edc(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




long thunk_FUN_100550ef4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_100553e90();
  }
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x48));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x50));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x58));
  return param_1;
}




long FUN_100550ef4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    thunk_FUN_100553d14();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_100553e90();
  }
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x48));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x50));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x58));
  return param_1;
}




undefined8 FUN_100550f50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  *param_1 = param_2;
  iVar5 = (int)param_3;
  if (param_1[10] != 0) {
    if (iVar5 <= *(int *)(param_1[10] + 0x18)) {
      FUN_100553d50();
      goto LAB_100550fe8;
    }
    thunk_FUN_100553d14();
    FUN_10054ec24(param_1[10]);
    param_1[10] = 0;
  }
  uVar3 = thunk_FUN_10054ec0c(0x28,0);
  iVar1 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar1 = iVar5;
  }
  uVar2 = (iVar1 >> 2) - 1;
  uVar2 = uVar2 | uVar2 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  lVar4 = thunk_FUN_100553c80(uVar3,param_3,(uVar2 | uVar2 >> 0x10) + 1);
  param_1[10] = lVar4;
  if (lVar4 == 0) {
    return 0x80000004;
  }
LAB_100550fe8:
  if (param_1[9] == 0) {
    uVar3 = thunk_FUN_10054ec0c(0x28,0);
    lVar4 = thunk_FUN_100553c80(uVar3,0x40,0x20);
    param_1[9] = lVar4;
    if (lVar4 == 0) {
      return 0x80000004;
    }
  }
  else {
    FUN_100553d50();
  }
  lVar4 = param_1[0xb];
  if (lVar4 != 0) {
    if (iVar5 <= *(int *)(lVar4 + 8)) {
      *(undefined4 *)(lVar4 + 0xc) = 0;
      return 0x40000000;
    }
    FUN_100553e90();
    FUN_10054ec24(param_1[0xb]);
    param_1[0xb] = 0;
  }
  uVar3 = thunk_FUN_10054ec0c(0x10,0);
  lVar4 = FUN_100553e54(uVar3,param_3);
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    return 0x40000000;
  }
  return 0x80000004;
}




undefined8 FUN_100551078(undefined8 *param_1,undefined8 param_2,float *param_3,float *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float local_a4;
  long local_a0;
  long local_98;
  long local_90 [4];
  
  local_90[3] = *(long *)PTR____stack_chk_guard_101444218;
  uVar8 = 0x80000008;
  local_a0 = 0;
  local_98 = 0;
  iVar3 = FUN_100550d14(*param_1,param_2,&local_98,&local_a0);
  if (-1 < iVar3) {
    if ((*(byte *)(local_a0 + 0x1f) & 0xc0) == 0x40) {
      pfVar9 = (float *)(*(long *)(local_98 + 0x18) + (ulong)*(ushort *)(local_a0 + 4) * 0xc);
      pfVar10 = (float *)(*(long *)(local_98 + 0x18) + (ulong)*(ushort *)(local_a0 + 6) * 0xc);
      fVar13 = (float)FUN_10054ec38((*pfVar9 - *param_3) * (*pfVar9 - *param_3) +
                                    (pfVar9[1] - param_3[1]) * (pfVar9[1] - param_3[1]) +
                                    (pfVar9[2] - param_3[2]) * (pfVar9[2] - param_3[2]));
      fVar14 = (float)FUN_10054ec38((*pfVar10 - *param_3) * (*pfVar10 - *param_3) +
                                    (pfVar10[1] - param_3[1]) * (pfVar10[1] - param_3[1]) +
                                    (pfVar10[2] - param_3[2]) * (pfVar10[2] - param_3[2]));
      if (param_4 != (float *)0x0) {
        local_a4 = ((pfVar10[1] - pfVar9[1]) * fVar13) / (fVar14 + fVar13) + pfVar9[1];
LAB_100551254:
        *param_4 = local_a4;
      }
LAB_100551258:
      uVar8 = 0x40000000;
    }
    else {
      piVar11 = (int *)(*(long *)(local_98 + 0x28) +
                       ((ulong)(local_a0 - *(long *)(local_98 + 0x10)) >> 5 & 0xffffffff) * 0xc);
      if (*(byte *)((long)piVar11 + 9) != 0) {
        uVar12 = 0;
        do {
          lVar5 = 0;
          lVar6 = *(long *)(local_98 + 0x38);
          iVar3 = piVar11[1];
          bVar1 = *(byte *)(local_a0 + 0x1e);
          do {
            bVar2 = *(byte *)(lVar6 + (ulong)((iVar3 + uVar12) * 4) + lVar5);
            if ((uint)bVar2 < (uint)bVar1) {
              lVar7 = *(long *)(local_98 + 0x18) +
                      (ulong)*(ushort *)(local_a0 + (ulong)bVar2 * 2 + 4) * 0xc;
            }
            else {
              lVar7 = *(long *)(local_98 + 0x30) +
                      (ulong)((((uint)bVar2 - (uint)bVar1) + *piVar11) * 3) * 4;
            }
            local_90[lVar5] = lVar7;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 3);
          uVar4 = FUN_10054edf8(param_3,local_90[0],local_90[1],local_90[2],&local_a4);
          if ((uVar4 & 1) != 0) {
            if (param_4 != (float *)0x0) goto LAB_100551254;
            goto LAB_100551258;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(byte *)((long)piVar11 + 9));
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_90[3]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}




undefined8
FUN_1005512a0(undefined8 param_1,int param_2,uint *param_3,long param_4,int param_5,uint *param_6,
             long param_7,float *param_8,float *param_9)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  
  uVar4 = 0x80000008;
  uVar7 = *param_3;
  if (uVar7 == 0xffffffff) {
    return uVar4;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  uVar11 = uVar7;
  while (uVar8 = (ulong)uVar11, *(int *)(lVar5 + (ulong)uVar11 * 0xc) != param_5) {
    uVar11 = *(uint *)(lVar5 + uVar8 * 0xc + 4);
    if (uVar11 == 0xffffffff) {
      return uVar4;
    }
  }
  if ((*(byte *)((long)param_3 + 0x1f) & 0xc0) == 0x40) {
    while (*(int *)(lVar5 + (ulong)uVar7 * 0xc) != param_5) {
      uVar7 = *(uint *)(lVar5 + (ulong)uVar7 * 0xc + 4);
      if (uVar7 == 0xffffffff) {
        return uVar4;
      }
    }
    lVar9 = *(long *)(param_4 + 0x18);
    lVar5 = (long)param_3 + (ulong)*(byte *)(lVar5 + (ulong)uVar7 * 0xc + 8) * 2;
  }
  else {
    if ((*(byte *)((long)param_6 + 0x1f) & 0xc0) != 0x40) {
      lVar9 = lVar5 + uVar8 * 0xc;
      bVar1 = *(byte *)(lVar9 + 8);
      uVar7 = bVar1 + 1;
      bVar2 = *(byte *)((long)param_3 + 0x1e);
      uVar11 = 0;
      if (bVar2 != 0) {
        uVar11 = uVar7 / bVar2;
      }
      uVar3 = *(ushort *)((long)param_3 + (ulong)(uVar7 - uVar11 * bVar2) * 2 + 4);
      lVar12 = *(long *)(param_4 + 0x18);
      pfVar6 = (float *)(lVar12 + (ulong)*(ushort *)((long)param_3 + (ulong)bVar1 * 2 + 4) * 0xc);
      *param_8 = *pfVar6;
      param_8[1] = pfVar6[1];
      param_8[2] = pfVar6[2];
      pfVar10 = (float *)(lVar12 + (ulong)uVar3 * 0xc);
      *param_9 = *pfVar10;
      param_9[1] = pfVar10[1];
      param_9[2] = pfVar10[2];
      if (*(char *)(lVar9 + 9) == -1) {
        return 0x40000000;
      }
      lVar5 = lVar5 + uVar8 * 0xc;
      bVar1 = *(byte *)(lVar5 + 10);
      bVar2 = *(byte *)(lVar5 + 0xb);
      if ((bVar1 == 0) && (bVar2 == 0xff)) {
        return 0x40000000;
      }
      fVar13 = (float)bVar1 * 0.003921569;
      fVar14 = (float)bVar2 * 0.003921569;
      *param_8 = *pfVar6 + fVar13 * (*pfVar10 - *pfVar6);
      param_8[1] = pfVar6[1] + fVar13 * (pfVar10[1] - pfVar6[1]);
      param_8[2] = pfVar6[2] + fVar13 * (pfVar10[2] - pfVar6[2]);
      *param_9 = *pfVar6 + fVar14 * (*pfVar10 - *pfVar6);
      param_9[1] = pfVar6[1] + fVar14 * (pfVar10[1] - pfVar6[1]);
      fVar13 = pfVar6[2] + fVar14 * (pfVar10[2] - pfVar6[2]);
      goto LAB_1005514f0;
    }
    uVar7 = *param_6;
    if (uVar7 == 0xffffffff) {
      return uVar4;
    }
    lVar5 = *(long *)(param_7 + 0x20);
    while (*(int *)(lVar5 + (ulong)uVar7 * 0xc) != param_2) {
      uVar7 = *(uint *)(lVar5 + (ulong)uVar7 * 0xc + 4);
      if (uVar7 == 0xffffffff) {
        return uVar4;
      }
    }
    lVar9 = *(long *)(param_7 + 0x18);
    lVar5 = (long)param_6 + (ulong)*(byte *)(lVar5 + (ulong)uVar7 * 0xc + 8) * 2;
  }
  pfVar6 = (float *)(lVar9 + (ulong)*(ushort *)(lVar5 + 4) * 0xc);
  *param_8 = *pfVar6;
  param_8[1] = pfVar6[1];
  param_8[2] = pfVar6[2];
  *param_9 = *pfVar6;
  param_9[1] = pfVar6[1];
  fVar13 = pfVar6[2];
LAB_1005514f0:
  param_9[2] = fVar13;
  return 0x40000000;
}




undefined8
FUN_1005514fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  iVar1 = FUN_100550d14(*param_1,param_2,&local_28,&local_30);
  uVar2 = 0x80000008;
  if ((-1 < iVar1) && (local_28 != 0)) {
    FUN_100551564(0x80000008,local_28,local_30,param_3,param_4);
    uVar2 = 0x40000000;
  }
  return uVar2;
}




void FUN_100551564(undefined8 param_1,long param_2,long param_3,float *param_4,float *param_5)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float local_114;
  long local_110 [3];
  float afStack_f8 [6];
  float local_e0 [6];
  undefined8 local_c8;
  float afStack_c0 [16];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(byte *)(param_3 + 0x1f) & 0xc0) == 0x40) {
    pfVar11 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(param_3 + 4) * 0xc);
    pfVar10 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(param_3 + 6) * 0xc);
    fVar14 = (float)FUN_10054ec38((*pfVar11 - *param_4) * (*pfVar11 - *param_4) +
                                  (pfVar11[1] - param_4[1]) * (pfVar11[1] - param_4[1]) +
                                  (pfVar11[2] - param_4[2]) * (pfVar11[2] - param_4[2]));
    fVar15 = (float)FUN_10054ec38((*pfVar10 - *param_4) * (*pfVar10 - *param_4) +
                                  (pfVar10[1] - param_4[1]) * (pfVar10[1] - param_4[1]) +
                                  (pfVar10[2] - param_4[2]) * (pfVar10[2] - param_4[2]));
    fVar14 = fVar14 / (fVar15 + fVar14);
    *param_5 = *pfVar11 + fVar14 * (*pfVar10 - *pfVar11);
    param_5[1] = pfVar11[1] + fVar14 * (pfVar10[1] - pfVar11[1]);
    param_5[2] = pfVar11[2] + fVar14 * (pfVar10[2] - pfVar11[2]);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10);
    bVar1 = *(byte *)(param_3 + 0x1e);
    if (bVar1 != 0) {
      lVar7 = *(long *)(param_2 + 0x18);
      pfVar10 = afStack_c0;
      puVar8 = (ushort *)(param_3 + 4);
      uVar3 = (ulong)bVar1;
      do {
        pfVar11 = (float *)(lVar7 + (ulong)*puVar8 * 0xc);
        pfVar10[-2] = *pfVar11;
        pfVar10[-1] = pfVar11[1];
        *pfVar10 = pfVar11[2];
        uVar3 = uVar3 - 1;
        pfVar10 = pfVar10 + 3;
        puVar8 = puVar8 + 1;
      } while (uVar3 != 0);
    }
    lVar7 = *(long *)(param_2 + 0x28);
    *param_5 = *param_4;
    param_5[1] = param_4[1];
    param_5[2] = param_4[2];
    uVar3 = FUN_10054ef7c(param_4,&local_c8,(ulong)bVar1,local_e0,afStack_f8);
    if ((uVar3 & 1) == 0) {
      uVar12 = (uint)bVar1;
      if (bVar1 == 0) {
        iVar5 = -1;
      }
      else {
        uVar3 = 0;
        fVar15 = 3.4028235e+38;
        iVar4 = -1;
        do {
          iVar5 = (int)uVar3;
          if (fVar15 <= local_e0[uVar3]) {
            iVar5 = iVar4;
          }
          fVar15 = (float)NEON_fminnm(local_e0[uVar3],fVar15);
          uVar3 = uVar3 + 1;
          iVar4 = iVar5;
        } while (uVar12 != uVar3);
      }
      iVar4 = 0;
      if (uVar12 != 0) {
        iVar4 = (iVar5 + 1) / (int)uVar12;
      }
      lVar9 = (long)(int)((iVar5 + 1) - iVar4 * uVar12);
      fVar15 = local_e0[(long)iVar5 + -6];
      uVar16 = *(undefined8 *)((long)&local_c8 + (long)iVar5 * 0xc);
      uVar18 = *(undefined8 *)((long)&local_c8 + lVar9 * 0xc);
      fVar14 = (float)uVar16;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      *(ulong *)param_5 =
           CONCAT44(fVar17 + ((float)((ulong)uVar18 >> 0x20) - fVar17) * fVar15,
                    fVar14 + ((float)uVar18 - fVar14) * fVar15);
      param_5[2] = afStack_c0[(long)iVar5 * 3] +
                   fVar15 * (afStack_c0[lVar9 * 3] - afStack_c0[(long)iVar5 * 3]);
    }
    piVar13 = (int *)(lVar7 + ((ulong)(param_3 - lVar6) >> 5 & 0xffffffff) * 0xc);
    if (*(byte *)((long)piVar13 + 9) != 0) {
      uVar12 = 0;
      do {
        lVar6 = 0;
        lVar7 = *(long *)(param_2 + 0x38);
        iVar5 = piVar13[1];
        bVar1 = *(byte *)(param_3 + 0x1e);
        do {
          bVar2 = *(byte *)(lVar7 + (ulong)((iVar5 + uVar12) * 4) + lVar6);
          if ((uint)bVar2 < (uint)bVar1) {
            lVar9 = *(long *)(param_2 + 0x18) +
                    (ulong)*(ushort *)(param_3 + (ulong)bVar2 * 2 + 4) * 0xc;
          }
          else {
            lVar9 = *(long *)(param_2 + 0x30) +
                    (ulong)((((uint)bVar2 - (uint)bVar1) + *piVar13) * 3) * 4;
          }
          local_110[lVar6] = lVar9;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        uVar3 = FUN_10054edf8(param_4,local_110[0],local_110[1],local_110[2],&local_114);
        if ((uVar3 & 1) != 0) {
          param_5[1] = local_114;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(byte *)((long)piVar13 + 9));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100551888(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ushort *puVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  long local_c0;
  long local_b8;
  float afStack_b0 [6];
  float local_98 [6];
  undefined8 local_80;
  float afStack_78 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_c0 = 0;
  local_b8 = 0;
  iVar3 = FUN_100550d14(*param_1,param_2,&local_b8,&local_c0);
  if (iVar3 < 0) {
    uVar5 = 0x80000008;
  }
  else {
    bVar1 = *(byte *)(local_c0 + 0x1e);
    if (bVar1 != 0) {
      lVar7 = *(long *)(local_b8 + 0x18);
      puVar8 = (ushort *)(local_c0 + 4);
      pfVar9 = afStack_78;
      uVar4 = (ulong)bVar1;
      do {
        pfVar10 = (float *)(lVar7 + (ulong)*puVar8 * 0xc);
        pfVar9[-2] = *pfVar10;
        pfVar9[-1] = pfVar10[1];
        *pfVar9 = pfVar10[2];
        uVar4 = uVar4 - 1;
        puVar8 = puVar8 + 1;
        pfVar9 = pfVar9 + 3;
      } while (uVar4 != 0);
    }
    uVar4 = FUN_10054ef7c(param_3,&local_80,(ulong)bVar1,local_98,afStack_b0);
    if ((uVar4 & 1) == 0) {
      uVar11 = (uint)bVar1;
      if (bVar1 == 0) {
        iVar3 = -1;
      }
      else {
        uVar4 = 0;
        fVar12 = 3.4028235e+38;
        iVar6 = -1;
        do {
          bVar2 = fVar12 <= local_98[uVar4];
          fVar12 = (float)NEON_fminnm(local_98[uVar4],fVar12);
          iVar3 = (int)uVar4;
          if (bVar2) {
            iVar3 = iVar6;
          }
          uVar4 = uVar4 + 1;
          iVar6 = iVar3;
        } while (uVar11 != uVar4);
      }
      iVar6 = 0;
      if (uVar11 != 0) {
        iVar6 = (iVar3 + 1) / (int)uVar11;
      }
      lVar7 = (long)(int)((iVar3 + 1) - iVar6 * uVar11);
      fVar12 = local_98[(long)iVar3 + -6];
      uVar5 = *(undefined8 *)((long)&local_80 + (long)iVar3 * 0xc);
      uVar15 = *(undefined8 *)((long)&local_80 + lVar7 * 0xc);
      fVar13 = (float)uVar5;
      fVar14 = (float)((ulong)uVar5 >> 0x20);
      *param_4 = CONCAT44(fVar14 + ((float)((ulong)uVar15 >> 0x20) - fVar14) * fVar12,
                          fVar13 + ((float)uVar15 - fVar13) * fVar12);
      fVar12 = afStack_78[(long)iVar3 * 3] +
               fVar12 * (afStack_78[lVar7 * 3] - afStack_78[(long)iVar3 * 3]);
    }
    else {
      *(undefined4 *)param_4 = *param_3;
      *(undefined4 *)((long)param_4 + 4) = param_3[1];
      fVar12 = (float)param_3[2];
    }
    *(float *)(param_4 + 1) = fVar12;
    uVar5 = 0x40000000;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}




void FUN_100551b68(undefined8 *param_1,float *param_2,float *param_3,undefined8 param_4,long param_5
                  ,int *param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188 [32];
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  local_7c = *param_2 - *param_3;
  fStack_78 = param_2[1] - param_3[1];
  local_74 = param_2[2] - param_3[2];
  local_88 = *param_3 + *param_2;
  fStack_84 = param_3[1] + param_2[1];
  local_80 = param_3[2] + param_2[2];
  FUN_100550cdc(*param_1,&local_7c,&local_18c,&local_190);
  FUN_100550cdc(*param_1,&local_88,&local_194,&local_198);
  if (local_198 < local_190) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    iVar4 = local_194;
    iVar2 = local_190;
    iVar6 = local_198;
    do {
      iVar7 = local_18c;
      if (local_18c <= iVar4) {
        do {
          uVar3 = FUN_100550c6c(*param_1,iVar7,iVar2,local_188,0x20);
          if (0 < (int)uVar3) {
            uVar9 = (ulong)uVar3;
            puVar10 = local_188;
            do {
              iVar4 = FUN_100551d14(param_1,*puVar10,&local_7c,&local_88,param_4,
                                    param_5 + (long)iVar8 * 4,param_7 - iVar8);
              iVar8 = iVar4 + iVar8;
              if (param_7 <= iVar8) {
                uVar5 = 0x40000010;
                goto LAB_100551cd4;
              }
              puVar10 = puVar10 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          bVar1 = iVar7 < local_194;
          iVar4 = local_194;
          iVar6 = local_198;
          iVar7 = iVar7 + 1;
        } while (bVar1);
      }
      bVar1 = iVar2 < iVar6;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  uVar5 = 0x40000000;
LAB_100551cd4:
  *param_6 = iVar8;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar5);
  }
  return;
}




int FUN_100551d14(undefined8 *param_1,long param_2,float *param_3,float *param_4,long param_5,
                 long param_6,int param_7)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
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
  
  puVar17 = *(ushort **)(param_2 + 0x40);
  if (puVar17 == (ushort *)0x0) {
    uVar6 = FUN_10054fb48(*param_1,param_2);
    lVar11 = *(long *)(param_2 + 8);
    iVar14 = *(int *)(lVar11 + 0x18);
    if (0 < iVar14) {
      lVar12 = 0;
      iVar7 = 0;
      lVar13 = *(long *)(param_2 + 0x10);
      puVar17 = (ushort *)(lVar13 + 6);
      do {
        lVar16 = lVar13 + lVar12 * 0x20;
        if ((((*(byte *)(lVar16 + 0x1f) & 0xc0) != 0x40) &&
            (uVar2 = *(ushort *)(lVar16 + 0x1c), (*(ushort *)(param_5 + 0x100) & uVar2) != 0)) &&
           ((*(ushort *)(param_5 + 0x102) & uVar2) == 0)) {
          lVar16 = lVar13 + lVar12 * 0x20;
          pfVar8 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(lVar16 + 4) * 0xc);
          fVar26 = *pfVar8;
          fVar22 = pfVar8[1];
          fVar19 = pfVar8[2];
          uVar15 = (ulong)*(byte *)(lVar16 + 0x1e);
          fVar27 = fVar26;
          fVar28 = fVar22;
          fVar23 = fVar19;
          if (1 < uVar15) {
            lVar16 = uVar15 - 1;
            puVar9 = puVar17;
            do {
              pfVar8 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*puVar9 * 0xc);
              fVar24 = *pfVar8;
              fVar21 = pfVar8[1];
              fVar27 = (float)NEON_fminnm(fVar27,fVar24);
              fVar28 = (float)NEON_fminnm(fVar28,fVar21);
              fVar25 = pfVar8[2];
              fVar23 = (float)NEON_fminnm(fVar23,fVar25);
              if (fVar26 <= fVar24) {
                fVar26 = fVar24;
              }
              if (fVar22 <= fVar21) {
                fVar22 = fVar21;
              }
              if (fVar19 <= fVar25) {
                fVar19 = fVar25;
              }
              lVar16 = lVar16 + -1;
              puVar9 = puVar9 + 1;
            } while (lVar16 != 0);
          }
          if (*param_3 <= fVar26) {
            bVar5 = fVar27 <= *param_4;
          }
          else {
            bVar5 = false;
          }
          if (param_3[1] <= fVar22) {
            bVar4 = false;
            if (fVar28 <= param_4[1]) {
              bVar4 = bVar5;
            }
          }
          else {
            bVar4 = false;
          }
          if (((param_3[2] <= fVar19) && (fVar23 <= param_4[2])) &&
             ((bool)(bVar4 & iVar7 < param_7))) {
            *(uint *)(param_6 + (long)iVar7 * 4) = uVar6 | (uint)lVar12;
            iVar7 = iVar7 + 1;
            iVar14 = *(int *)(lVar11 + 0x18);
          }
        }
        lVar12 = lVar12 + 1;
        puVar17 = puVar17 + 0x10;
      } while (lVar12 < iVar14);
      return iVar7;
    }
  }
  else {
    lVar11 = *(long *)(param_2 + 8);
    iVar14 = *(int *)(lVar11 + 0x30);
    fVar26 = *(float *)(lVar11 + 0x50);
    fVar22 = (float)NEON_fminnm(*param_3,*(undefined4 *)(lVar11 + 0x54));
    fVar28 = *(float *)(lVar11 + 0x48);
    fVar27 = *(float *)(lVar11 + 0x4c);
    fVar19 = fVar28;
    if (fVar28 <= *param_3) {
      fVar19 = fVar22;
    }
    fVar23 = (float)NEON_fminnm(param_3[1],*(undefined4 *)(lVar11 + 0x58));
    fVar22 = fVar27;
    if (fVar27 <= param_3[1]) {
      fVar22 = fVar23;
    }
    fVar24 = (float)NEON_fminnm(param_3[2],*(undefined4 *)(lVar11 + 0x5c));
    fVar23 = fVar26;
    if (fVar26 <= param_3[2]) {
      fVar23 = fVar24;
    }
    fVar21 = (float)NEON_fminnm(*param_4,*(undefined4 *)(lVar11 + 0x54));
    fVar25 = *(float *)(lVar11 + 0x60);
    fVar24 = fVar28;
    if (fVar28 <= *param_4) {
      fVar24 = fVar21;
    }
    fVar18 = (float)NEON_fminnm(param_4[1],*(undefined4 *)(lVar11 + 0x58));
    fVar21 = fVar27;
    if (fVar27 <= param_4[1]) {
      fVar21 = fVar18;
    }
    fVar20 = (float)NEON_fminnm(param_4[2],*(undefined4 *)(lVar11 + 0x5c));
    fVar18 = fVar26;
    if (fVar26 <= param_4[2]) {
      fVar18 = fVar20;
    }
    uVar6 = FUN_10054fb48(*param_1,param_2);
    if (0 < iVar14) {
      iVar7 = 0;
      puVar9 = puVar17 + (long)iVar14 * 8;
      do {
        if ((uint)puVar17[3] < ((int)((fVar19 - fVar28) * fVar25) & 0xfffeU)) {
          bVar5 = false;
        }
        else {
          bVar5 = (uint)*puVar17 <= ((int)(fVar25 * (fVar24 - fVar28) + 1.0) | 1U);
        }
        if ((uint)puVar17[4] < ((int)((fVar22 - fVar27) * fVar25) & 0xfffeU)) {
          bVar3 = 0;
        }
        else {
          bVar3 = (uint)puVar17[1] <= ((int)(fVar25 * (fVar21 - fVar27) + 1.0) | 1U) & bVar5;
        }
        if ((uint)puVar17[5] < ((int)((fVar23 - fVar26) * fVar25) & 0xfffeU)) {
          bVar5 = false;
          uVar10 = ~*(uint *)(puVar17 + 6) >> 0x1f;
LAB_100551ec0:
          if ((bVar5) || (uVar10 != 0)) goto LAB_100551f34;
          lVar11 = -(long)*(int *)(puVar17 + 6);
        }
        else {
          uVar1 = *(uint *)(puVar17 + 6);
          bVar5 = (bool)((uint)puVar17[2] <= ((int)(fVar25 * (fVar18 - fVar26) + 1.0) | 1U) & bVar3)
          ;
          uVar10 = ~uVar1 >> 0x1f;
          if (((int)uVar1 < 0) || (!bVar5)) goto LAB_100551ec0;
          uVar2 = *(ushort *)(*(long *)(param_2 + 0x10) + (ulong)uVar1 * 0x20 + 0x1c);
          if (((*(ushort *)(param_5 + 0x100) & uVar2) != 0) &&
             ((*(ushort *)(param_5 + 0x102) & uVar2) == 0 && iVar7 < param_7)) {
            *(uint *)(param_6 + (long)iVar7 * 4) = uVar1 | uVar6;
            iVar7 = iVar7 + 1;
          }
LAB_100551f34:
          lVar11 = 1;
        }
        puVar17 = puVar17 + lVar11 * 8;
        if (puVar9 <= puVar17) {
          return iVar7;
        }
      } while( true );
    }
  }
  return 0;
}




uint FUN_1005520e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5,long param_6,float *param_7,int *param_8,int param_9)

{
  uint uVar1;
  float fVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  ulong uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_cc;
  float *local_c8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint *local_90;
  long local_88;
  
  *param_8 = 0;
  local_cc = 0x80000008;
  fVar20 = (float)param_2;
  if ((((fVar20 != 0.0) && (fVar10 = (float)param_3, fVar10 != 0.0)) && (param_9 != 0)) &&
     ((iVar5 = FUN_100550e1c(*param_1), iVar5 != 0 &&
      (iVar5 = FUN_100550e1c(*param_1,param_3), iVar5 != 0)))) {
    if (fVar20 == fVar10) {
      *param_7 = fVar20;
      local_cc = 0x40000000;
      iVar5 = 1;
    }
    else {
      FUN_100553d50(param_1[10]);
      *(undefined4 *)(param_1[0xb] + 0xc) = 0;
      local_c8 = (float *)FUN_100553d84(param_1[10],param_2);
      *local_c8 = *param_4;
      local_c8[1] = param_4[1];
      local_c8[2] = param_4[2];
      local_c8[5] = (float)((uint)local_c8[5] & 0xc0000000);
      local_c8[3] = 0.0;
      fVar16 = (float)FUN_10054ec38((*param_5 - *param_4) * (*param_5 - *param_4) +
                                    (param_5[1] - param_4[1]) * (param_5[1] - param_4[1]) +
                                    (param_5[2] - param_4[2]) * (param_5[2] - param_4[2]));
      local_c8[4] = fVar16 * 0.999;
      local_c8[5] = (float)((uint)local_c8[5] & 0x3fffffff | 0x40000000);
      local_c8[6] = fVar20;
      lVar6 = param_1[0xb];
      iVar5 = *(int *)(lVar6 + 0xc);
      *(int *)(lVar6 + 0xc) = iVar5 + 1;
      FUN_100553eb8(lVar6,iVar5,local_c8);
      plVar7 = (long *)param_1[0xb];
      iVar5 = *(int *)((long)plVar7 + 0xc);
      if (iVar5 == 0) {
        local_cc = 0x40000000;
        pfVar14 = local_c8;
      }
      else {
        local_cc = 0x40000000;
        fVar20 = local_c8[4];
        do {
          pfVar14 = *(float **)*plVar7;
          *(int *)((long)plVar7 + 0xc) = iVar5 + -1;
          FUN_100553f0c(plVar7,0,((long *)*plVar7)[iVar5 + -1]);
          fVar16 = pfVar14[6];
          pfVar14[5] = (float)((uint)pfVar14[5] & 0x3fffffff | 0x80000000);
          if (fVar16 == fVar10) break;
          local_90 = (uint *)0x0;
          local_88 = 0;
          FUN_100550dcc(*param_1,fVar16,&local_88,&local_90);
          local_a0 = 0;
          uStack_98 = 0;
          if (((uint)pfVar14[5] & 0x3fffffff) == 0) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = *(float *)(*(long *)param_1[10] +
                                (ulong)(((uint)pfVar14[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
            if (fVar15 != 0.0) {
              FUN_100550dcc(*param_1,fVar15,&uStack_98,&local_a0);
            }
          }
          uVar12 = *local_90;
          if (uVar12 != 0xffffffff) {
            lVar6 = *(long *)(local_88 + 0x20);
            do {
              fVar2 = *(float *)(lVar6 + (ulong)uVar12 * 0xc);
              if (fVar2 != 0.0 && fVar2 != fVar15) {
                local_b0 = 0;
                uStack_a8 = 0;
                FUN_100550dcc(*param_1,fVar2,&uStack_a8,&local_b0);
                pfVar11 = local_c8;
                if (((*(ushort *)(param_6 + 0x100) & *(ushort *)(local_b0 + 0x1c)) != 0) &&
                   ((*(ushort *)(param_6 + 0x102) & *(ushort *)(local_b0 + 0x1c)) == 0)) {
                  pfVar8 = (float *)FUN_100553d84(param_1[10],fVar2);
                  if (pfVar8 == (float *)0x0) {
                    local_cc = local_cc | 0x20;
                  }
                  else {
                    if ((uint)pfVar8[5] >> 0x1e == 0) {
                      FUN_1005526a8(pfVar8,fVar16,local_90,local_88,fVar2,local_b0,uStack_a8,pfVar8)
                      ;
                    }
                    puVar3 = local_90;
                    fVar17 = (*pfVar8 - *pfVar14) * (*pfVar8 - *pfVar14) +
                             (pfVar8[1] - pfVar14[1]) * (pfVar8[1] - pfVar14[1]) +
                             (pfVar8[2] - pfVar14[2]) * (pfVar8[2] - pfVar14[2]);
                    if (fVar2 == fVar10) {
                      fVar17 = (float)FUN_10054ec38(fVar17);
                      lVar6 = local_b0;
                      fVar21 = *(float *)(param_6 +
                                         ((ulong)*(byte *)((long)puVar3 + 0x1f) & 0x3f) * 4);
                      fVar18 = (float)*(undefined8 *)(param_5 + 1) -
                               (float)*(undefined8 *)(pfVar8 + 1);
                      fVar19 = (float)((ulong)*(undefined8 *)(param_5 + 1) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
                      fVar18 = (float)FUN_10054ec38(fVar18 * fVar18 +
                                                    (*param_5 - *pfVar8) * (*param_5 - *pfVar8) +
                                                    fVar19 * fVar19);
                      fVar19 = pfVar14[3] + fVar17 * fVar21 +
                               fVar18 * *(float *)(param_6 +
                                                  ((ulong)*(byte *)(lVar6 + 0x1f) & 0x3f) * 4);
                      fVar17 = 0.0;
                    }
                    else {
                      fVar17 = (float)FUN_10054ec38(fVar17);
                      fVar19 = pfVar14[3] +
                               fVar17 * *(float *)(param_6 +
                                                  ((ulong)*(byte *)((long)puVar3 + 0x1f) & 0x3f) * 4
                                                  );
                      fVar17 = (float)*(undefined8 *)(param_5 + 1) -
                               (float)*(undefined8 *)(pfVar8 + 1);
                      fVar18 = (float)((ulong)*(undefined8 *)(param_5 + 1) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
                      fVar17 = (float)FUN_10054ec38(fVar17 * fVar17 +
                                                    (*param_5 - *pfVar8) * (*param_5 - *pfVar8) +
                                                    fVar18 * fVar18);
                      fVar17 = fVar17 * 0.999;
                    }
                    fVar21 = fVar17 + fVar19;
                    fVar18 = pfVar8[5];
                    if (((((uint)fVar18 >> 0x1e & 1) == 0) || (fVar21 < pfVar8[4])) &&
                       ((-1 < (int)fVar18 || (fVar21 < pfVar8[4])))) {
                      iVar5 = *(int *)param_1[10];
                      pfVar8[3] = fVar19;
                      pfVar8[4] = fVar21;
                      uVar1 = ((uint)((int)pfVar14 - iVar5) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      pfVar8[5] = (float)(uVar1 | (uint)fVar18 & 0x40000000);
                      pfVar8[6] = fVar2;
                      if (((uint)fVar18 & 0x40000000) == 0) {
                        pfVar8[5] = (float)(uVar1 | 0x40000000);
                        plVar7 = (long *)param_1[0xb];
                        uVar9 = (ulong)*(uint *)((long)plVar7 + 0xc);
                        *(uint *)((long)plVar7 + 0xc) = *(uint *)((long)plVar7 + 0xc) + 1;
LAB_100552554:
                        FUN_100553eb8(plVar7,uVar9,pfVar8);
                      }
                      else {
                        plVar7 = (long *)param_1[0xb];
                        if (0 < (int)*(uint *)((long)plVar7 + 0xc)) {
                          uVar9 = 0;
                          do {
                            if (*(float **)(*plVar7 + uVar9 * 8) == pfVar8) goto LAB_100552554;
                            uVar9 = uVar9 + 1;
                          } while (*(uint *)((long)plVar7 + 0xc) != uVar9);
                        }
                      }
                      bVar4 = fVar20 <= fVar17;
                      fVar20 = (float)NEON_fminnm(fVar17,fVar20);
                      pfVar11 = pfVar8;
                      if (bVar4) {
                        pfVar11 = local_c8;
                      }
                    }
                  }
                }
                local_c8 = pfVar11;
                lVar6 = *(long *)(local_88 + 0x20);
              }
              uVar12 = *(uint *)(lVar6 + (ulong)uVar12 * 0xc + 4);
            } while (uVar12 != 0xffffffff);
          }
          plVar7 = (long *)param_1[0xb];
          iVar5 = *(int *)((long)plVar7 + 0xc);
          pfVar14 = local_c8;
        } while (iVar5 != 0);
      }
      local_c8 = pfVar14;
      fVar20 = local_c8[6];
      pfVar14 = (float *)0x0;
      do {
        pfVar11 = local_c8;
        uVar12 = (uint)pfVar11[5] & 0x3fffffff;
        if (uVar12 == 0) {
          local_c8 = (float *)0x0;
        }
        else {
          local_c8 = (float *)(*(long *)param_1[10] + (ulong)(uVar12 - 1) * 0x1c);
        }
        uVar12 = 0;
        if (pfVar14 != (float *)0x0) {
          uVar12 = (int)((ulong)((long)pfVar14 - *(long *)param_1[10]) >> 2) * -0x49249249 + 1;
        }
        pfVar11[5] = (float)((uint)pfVar11[5] & 0xc0000000 | uVar12 & 0x3fffffff);
        pfVar14 = pfVar11;
      } while (local_c8 != (float *)0x0);
      if (fVar20 != fVar10) {
        local_cc = local_cc | 0x40;
      }
      if (param_9 < 2) {
        param_9 = 1;
      }
      uVar9 = 0;
      do {
        uVar13 = uVar9;
        param_7[uVar13] = pfVar11[6];
        if (param_9 - 1 == uVar13) {
          local_cc = local_cc | 0x10;
          break;
        }
        if (((uint)pfVar11[5] & 0x3fffffff) == 0) break;
        pfVar11 = (float *)(*(long *)param_1[10] +
                           (ulong)(((uint)pfVar11[5] & 0x3fffffff) - 1) * 0x1c);
        uVar9 = uVar13 + 1;
      } while (*(long *)param_1[10] != 0);
      iVar5 = (int)uVar13 + 1;
    }
    *param_8 = iVar5;
  }
  return local_cc;
}




void FUN_1005526a8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x7;
  long lVar3;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_1005512a0();
  if (iVar1 < 0) {
    uVar2 = 0x80000008;
  }
  else {
    *in_x7 = CONCAT44(((float)((ulong)local_48 >> 0x20) + (float)((ulong)local_38 >> 0x20)) * 0.5,
                      ((float)local_48 + (float)local_38) * 0.5);
    *(float *)(in_x7 + 1) = (local_40 + local_30) * 0.5;
    uVar2 = 0x40000000;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




undefined4
FUN_10055274c(undefined8 param_1,float *param_2,int param_3,undefined4 param_4,long param_5,
             long param_6,long param_7,int *param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  iVar3 = *param_8;
  if (iVar3 < 1) {
    fVar5 = *param_2;
  }
  else {
    pfVar4 = (float *)(param_5 + (long)(iVar3 * 3 + -3) * 4);
    if (((DAT_1018677a8 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_1018677a8), iVar3 != 0)) {
      DAT_1018677a0 = 3.7252903e-09;
      ___cxa_guard_release(&DAT_1018677a8);
    }
    fVar5 = *param_2;
    fVar6 = fVar5 - *pfVar4;
    uVar9 = *(undefined8 *)(pfVar4 + 1);
    fVar7 = (float)*(undefined8 *)(param_2 + 1) - (float)uVar9;
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) - (float)((ulong)uVar9 >> 0x20);
    if (fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 < DAT_1018677a0) {
      if (param_6 != 0) {
        *(char *)(*param_8 + param_6 + -1) = (char)param_3;
      }
      if (param_7 != 0) {
        *(undefined4 *)(param_7 + (long)*param_8 * 4 + -4) = param_4;
      }
      return 0x20000000;
    }
    iVar3 = *param_8;
  }
  pfVar4 = (float *)(param_5 + (long)iVar3 * 0xc);
  *pfVar4 = fVar5;
  pfVar4[1] = param_2[1];
  pfVar4[2] = param_2[2];
  if (param_6 != 0) {
    *(char *)(param_6 + iVar3) = (char)param_3;
  }
  if (param_7 != 0) {
    *(undefined4 *)(param_7 + (long)*param_8 * 4) = param_4;
  }
  iVar3 = *param_8 + 1;
  uVar1 = 0x40000000;
  if (param_9 <= iVar3) {
    uVar1 = 0x40000010;
  }
  *param_8 = iVar3;
  uVar2 = 0x20000000;
  if (param_9 <= iVar3 || param_3 == 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}




ulong FUN_100552ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                   int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int *param_9
                   ,ulong param_10)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float extraout_s0;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar12;
  undefined8 uVar10;
  int *piVar11;
  int local_104;
  int local_100;
  int local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [6];
  undefined2 local_e2;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  long local_80;
  
  uVar12 = (undefined4)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  uVar9 = 0x80000008;
  *param_9 = 0;
  uVar6 = uVar9;
  if ((((int)param_10 != 0) && (*param_4 != 0)) &&
     (iVar4 = FUN_100551888(param_1,*param_4,param_2,&local_8c), -1 < iVar4)) {
    uVar5 = FUN_100551888(param_1,param_4[param_5 + -1],param_3,&local_98);
    if ((int)uVar5 < 0) {
      uVar6 = 0x80000008;
    }
    else {
      uVar10 = CONCAT44(uVar12,(int)param_10);
      uVar6 = FUN_10055274c(uVar5,&local_8c,1,*param_4,param_6,param_7,param_8,param_9,uVar10);
      uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
      if ((int)uVar6 == 0x20000000) {
        if (1 < param_5) {
          iVar4 = 0;
          cVar2 = '\0';
          cVar3 = '\0';
          local_f0 = 0;
          local_104 = 0;
          local_a8 = local_8c;
          fStack_a4 = fStack_88;
          local_a0 = local_84;
          local_b8 = local_8c;
          fStack_b4 = fStack_88;
          local_b0 = local_84;
          local_c8 = local_8c;
          fStack_c4 = fStack_88;
          local_100 = *param_4;
          local_c0 = local_84;
          local_f8 = local_100;
          do {
            lVar8 = (long)iVar4;
            iVar7 = (int)(lVar8 + 1);
            if (iVar7 < param_5) {
              uVar6 = FUN_1005531c4(param_1,param_4[lVar8],param_4[lVar8 + 1],&local_d4,&local_e0,
                                    (long)&local_e2 + 1,&local_e2);
              uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
              if ((int)uVar6 < 0) {
                uVar5 = FUN_100551888(param_1,param_4[lVar8],param_3,&local_98);
                uVar6 = uVar9;
                if (-1 < (int)uVar5) {
                  if ((param_10 & 0x300000000) != 0) {
                    piVar11 = param_9;
                    uVar5 = FUN_1005528d8(param_1,local_104,iVar4,&local_98,param_4,param_6,param_7,
                                          param_8,param_9,(int)param_10);
                    uVar12 = (undefined4)((ulong)piVar11 >> 0x20);
                  }
                  FUN_10055274c(uVar5,&local_98,0,param_4[lVar8],param_6,param_7,param_8,param_9,
                                CONCAT44(uVar12,(int)param_10));
                  uVar1 = 0x40000040;
                  if ((int)param_10 <= *param_9) {
                    uVar1 = 0x40000050;
                  }
                  uVar6 = (ulong)uVar1;
                }
                goto LAB_100553180;
              }
              if ((iVar4 != 0) ||
                 (uVar6 = FUN_10054ed64(&local_a8,&local_d4,&local_e0,auStack_e8),
                 1.0000001e-06 <= extraout_s0)) goto LAB_100552c78;
              iVar4 = 0;
            }
            else {
              local_d4 = local_98;
              local_d0 = fStack_94;
              local_cc = local_90;
              local_e0 = local_98;
              local_dc = fStack_94;
              local_d8 = local_90;
              local_e2 = 0;
LAB_100552c78:
              if ((local_a0 - local_d8) * (local_c8 - local_a8) +
                  (local_c0 - local_a0) * (local_e0 - local_a8) <= 0.0) {
                if (((DAT_1018677a8 & 1) == 0) &&
                   (uVar6 = ___cxa_guard_acquire(&DAT_1018677a8), (int)uVar6 != 0)) {
                  DAT_1018677a0 = 3.7252903e-09;
                  uVar6 = ___cxa_guard_release(&DAT_1018677a8);
                }
                uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
                if ((DAT_1018677a0 <=
                     (local_c8 - local_a8) * (local_c8 - local_a8) +
                     (fStack_c4 - fStack_a4) * (fStack_c4 - fStack_a4) +
                     (local_c0 - local_a0) * (local_c0 - local_a0)) &&
                   ((local_a0 - local_d8) * (local_b8 - local_a8) +
                    (local_b0 - local_a0) * (local_e0 - local_a8) <= 0.0)) {
                  if ((param_10 & 0x300000000) != 0) {
                    piVar11 = param_9;
                    uVar6 = FUN_1005528d8(param_1,local_104,local_f0 & 0xffffffff,&local_b8,param_4,
                                          param_6,param_7,param_8,param_9,(int)param_10);
                    uVar12 = (undefined4)((ulong)piVar11 >> 0x20);
                    if ((int)uVar6 != 0x20000000) goto LAB_100553180;
                  }
                  local_a8 = local_b8;
                  fStack_a4 = fStack_b4;
                  local_a0 = local_b0;
                  iVar4 = 2;
                  if (local_100 != 0) {
                    iVar4 = (uint)(cVar3 == '\x01') << 2;
                  }
                  uVar10 = CONCAT44(uVar12,(int)param_10);
                  uVar6 = FUN_10055274c(uVar6,&local_a8,iVar4,local_100,param_6,param_7,param_8,
                                        param_9,uVar10);
                  if ((int)uVar6 == 0x20000000) {
                    local_f0 = CONCAT44((int)local_f0,(int)local_f0);
                    local_104 = (int)local_f0;
                    local_c8 = local_a8;
                    fStack_c4 = fStack_a4;
                    local_c0 = local_a0;
                    local_b8 = local_a8;
                    fStack_b4 = fStack_a4;
                    local_b0 = local_a0;
                    iVar4 = (int)local_f0;
                    goto LAB_100552fe0;
                  }
                  goto LAB_100553180;
                }
                local_c8 = local_e0;
                fStack_c4 = local_dc;
                local_c0 = local_d8;
                if (iVar7 < param_5) {
                  local_f8 = param_4[iVar7];
                }
                else {
                  local_f8 = 0;
                }
                local_f0 = CONCAT44(iVar4,(int)local_f0);
                cVar2 = (char)local_e2;
              }
              if (0.0 <= (local_a0 - local_cc) * (local_b8 - local_a8) +
                         (local_b0 - local_a0) * (local_d4 - local_a8)) {
                if (((DAT_1018677a8 & 1) == 0) &&
                   (uVar6 = ___cxa_guard_acquire(&DAT_1018677a8), (int)uVar6 != 0)) {
                  DAT_1018677a0 = 3.7252903e-09;
                  uVar6 = ___cxa_guard_release(&DAT_1018677a8);
                }
                uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
                if (((local_b8 - local_a8) * (local_b8 - local_a8) +
                     (fStack_b4 - fStack_a4) * (fStack_b4 - fStack_a4) +
                     (local_b0 - local_a0) * (local_b0 - local_a0) < DAT_1018677a0) ||
                   ((local_a0 - local_cc) * (local_c8 - local_a8) +
                    (local_c0 - local_a0) * (local_d4 - local_a8) < 0.0)) {
                  local_b8 = local_d4;
                  fStack_b4 = local_d0;
                  local_b0 = local_cc;
                  if (iVar7 < param_5) {
                    local_100 = param_4[iVar7];
                  }
                  else {
                    local_100 = 0;
                  }
                  local_f0 = CONCAT44(local_f0._4_4_,iVar4);
                  cVar3 = (char)local_e2;
                }
                else {
                  if ((param_10 & 0x300000000) != 0) {
                    piVar11 = param_9;
                    uVar6 = FUN_1005528d8(param_1,local_104,local_f0._4_4_,&local_c8,param_4,param_6
                                          ,param_7,param_8,param_9,(int)param_10);
                    uVar12 = (undefined4)((ulong)piVar11 >> 0x20);
                    if ((int)uVar6 != 0x20000000) goto LAB_100553180;
                  }
                  local_a8 = local_c8;
                  fStack_a4 = fStack_c4;
                  local_a0 = local_c0;
                  iVar4 = 2;
                  if (local_f8 != 0) {
                    iVar4 = (uint)(cVar2 == '\x01') << 2;
                  }
                  uVar10 = CONCAT44(uVar12,(int)param_10);
                  uVar6 = FUN_10055274c(uVar6,&local_a8,iVar4,local_f8,param_6,param_7,param_8,
                                        param_9,uVar10);
                  if ((int)uVar6 != 0x20000000) goto LAB_100553180;
                  local_f0 = CONCAT44(local_f0._4_4_,local_f0._4_4_);
                  local_104 = local_f0._4_4_;
                  local_c8 = local_a8;
                  fStack_c4 = fStack_a4;
                  local_c0 = local_a0;
                  local_b8 = local_a8;
                  fStack_b4 = fStack_a4;
                  local_b0 = local_a0;
                  iVar4 = local_f0._4_4_;
                }
              }
            }
LAB_100552fe0:
            uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_5);
          if ((param_10 & 0x300000000) != 0) {
            piVar11 = param_9;
            uVar6 = FUN_1005528d8(param_1,local_104,param_5 + -1,&local_98,param_4,param_6,param_7,
                                  param_8,param_9,(int)param_10);
            uVar12 = (undefined4)((ulong)piVar11 >> 0x20);
            if ((int)uVar6 != 0x20000000) goto LAB_100553180;
          }
        }
        FUN_10055274c(uVar6,&local_98,2,0,param_6,param_7,param_8,param_9,
                      CONCAT44(uVar12,(int)param_10));
        uVar1 = 0x40000000;
        if ((int)param_10 <= *param_9) {
          uVar1 = 0x40000010;
        }
        uVar6 = (ulong)uVar1;
      }
    }
  }
LAB_100553180:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005531c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte *param_6,byte *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  uVar3 = 0x80000008;
  local_60 = 0;
  uStack_58 = 0;
  iVar1 = FUN_100550d14(*param_1,param_2,&uStack_58,&local_60);
  if (-1 < iVar1) {
    *param_6 = *(byte *)(local_60 + 0x1f) >> 6;
    local_70 = 0;
    uStack_68 = 0;
    uVar2 = FUN_100550d14(*param_1,param_3,&uStack_68,&local_70);
    if (-1 < (int)uVar2) {
      *param_7 = *(byte *)(local_70 + 0x1f) >> 6;
      uVar3 = FUN_1005512a0(uVar2,param_2,local_60,uStack_58,param_3,local_70,uStack_68,param_4,
                            param_5);
    }
  }
  return uVar3;
}




undefined8
FUN_100553294(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             long param_5,undefined8 *param_6,long param_7,undefined4 *param_8,uint param_9)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  ulong local_2c0;
  long local_2a8;
  undefined8 local_2a0;
  uint *local_298;
  long local_290;
  uint local_288 [8];
  undefined8 local_268;
  float afStack_260 [16];
  undefined8 local_220;
  float local_218;
  ulong local_210;
  undefined1 auStack_208 [376];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  uVar17 = 0x80000008;
  *param_8 = 0;
  if (((int)param_2 != 0) && (iVar5 = FUN_100550e1c(*param_1), iVar5 != 0)) {
    FUN_100553d50(param_1[9]);
    local_210 = FUN_100553d84(param_1[9],param_2);
    *(undefined4 *)(local_210 + 0xc) = 0;
    *(undefined4 *)(local_210 + 0x10) = 0;
    *(undefined4 *)(local_210 + 0x14) = 0x80000000;
    *(int *)(local_210 + 0x18) = (int)param_2;
    uVar24 = *param_3;
    fVar25 = *(float *)(param_3 + 1);
    fVar21 = (float)*param_4 - (float)uVar24;
    fVar23 = (float)((ulong)uVar24 >> 0x20);
    fVar22 = (float)((ulong)*param_4 >> 0x20) - fVar23;
    local_220 = CONCAT44(fVar23 + fVar22 * 0.5,(float)uVar24 + fVar21 * 0.5);
    fVar23 = *(float *)(param_4 + 1) - fVar25;
    local_218 = fVar25 + fVar23 * 0.5;
    fVar21 = (float)FUN_10054ec38(fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23);
    local_2c0 = 0;
    fVar22 = fVar21 * 0.5 + 0.001;
    fVar21 = 3.4028235e+38;
    uVar6 = 1;
    do {
      uVar11 = local_210;
      uVar15 = uVar6 - 1;
      if (1 < (int)uVar6) {
        _memmove(&local_210,auStack_208,(ulong)uVar15 << 3);
      }
      local_298 = (uint *)0x0;
      local_290 = 0;
      FUN_100550dcc(*param_1,*(undefined4 *)(uVar11 + 0x18),&local_290,&local_298);
      if (*(byte *)((long)local_298 + 0x1e) != 0) {
        lVar8 = *(long *)(local_290 + 0x18);
        uVar10 = (ulong)(uint)*(byte *)((long)local_298 + 0x1e);
        puVar16 = local_298 + 1;
        pfVar13 = afStack_260;
        do {
          pfVar14 = (float *)(lVar8 + (ulong)(ushort)*puVar16 * 0xc);
          pfVar13[-2] = *pfVar14;
          pfVar13[-1] = pfVar14[1];
          *pfVar13 = pfVar14[2];
          uVar10 = uVar10 - 1;
          puVar16 = (uint *)((long)puVar16 + 2);
          pfVar13 = pfVar13 + 3;
        } while (uVar10 != 0);
      }
      uVar10 = FUN_10054eee0(param_4,&local_268);
      if ((uVar10 & 1) != 0) {
        uVar24 = *param_4;
        fVar25 = *(float *)(param_4 + 1);
        local_2c0 = uVar11;
        break;
      }
      if (*(byte *)((long)local_298 + 0x1e) != 0) {
        uVar10 = (ulong)(*(byte *)((long)local_298 + 0x1e) - 1);
        uVar12 = 0;
        do {
          uVar6 = (uint)uVar10;
          lVar8 = (long)(int)uVar6;
          uVar3 = *(ushort *)((long)local_298 + (long)(int)uVar6 * 2 + 0x10);
          if ((short)uVar3 < 0) {
            uVar9 = *local_298;
            if (uVar9 != 0xffffffff) {
              uVar19 = 0;
              lVar7 = *(long *)(local_290 + 0x20);
              do {
                if (uVar6 == *(byte *)(lVar7 + (ulong)uVar9 * 0xc + 8)) {
                  puVar16 = (uint *)(lVar7 + (ulong)uVar9 * 0xc);
                  uVar2 = *puVar16;
                  if (uVar2 != 0) {
                    local_2a8 = 0;
                    local_2a0 = 0;
                    FUN_100550dcc(*param_1,uVar2,&local_2a0,&local_2a8);
                    if (((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_2a8 + 0x1c)) != 0) &&
                       ((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_2a8 + 0x1c)) == 0 &&
                        (int)uVar19 < 8)) {
                      local_288[(int)uVar19] = *puVar16;
                      uVar19 = uVar19 + 1;
                    }
                    lVar7 = *(long *)(local_290 + 0x20);
                  }
                }
                uVar9 = *(uint *)(lVar7 + (ulong)uVar9 * 0xc + 4);
              } while (uVar9 != 0xffffffff);
              if (uVar19 != 0) {
                if (0 < (int)uVar19) goto LAB_100553568;
                goto LAB_100553674;
              }
            }
LAB_10055361c:
            puVar18 = (undefined8 *)((long)&local_268 + lVar8 * 0xc);
            puVar20 = (undefined8 *)((long)&local_268 + uVar12 * 0xc);
            fVar23 = (float)FUN_10054ed64(param_4,puVar18,puVar20,&local_2a0);
            if (fVar23 < fVar21) {
              uVar24 = *puVar18;
              uVar17 = *puVar20;
              fVar21 = (float)uVar24;
              fVar25 = (float)((ulong)uVar24 >> 0x20);
              uVar24 = CONCAT44(fVar25 + ((float)((ulong)uVar17 >> 0x20) - fVar25) *
                                         (float)local_2a0,
                                fVar21 + ((float)uVar17 - fVar21) * (float)local_2a0);
              fVar25 = afStack_260[lVar8 * 3] +
                       (float)local_2a0 * (afStack_260[uVar12 * 3] - afStack_260[lVar8 * 3]);
              local_2c0 = uVar11;
              fVar21 = fVar23;
            }
          }
          else {
            if (uVar3 == 0) goto LAB_10055361c;
            uVar6 = FUN_10054fb48(*param_1,local_290);
            uVar4 = *(ushort *)(*(long *)(local_290 + 0x10) + (ulong)(uVar3 - 1) * 0x20 + 0x1c);
            if (((*(ushort *)(param_5 + 0x100) & uVar4) == 0) ||
               ((*(ushort *)(param_5 + 0x102) & uVar4) != 0)) goto LAB_10055361c;
            local_288[0] = uVar6 | uVar3 - 1;
            uVar19 = 1;
LAB_100553568:
            uVar10 = (ulong)uVar19;
            puVar16 = local_288;
            do {
              lVar7 = FUN_100553d84(param_1[9],*puVar16);
              if ((((lVar7 != 0) && (-1 < *(int *)(lVar7 + 0x14))) &&
                  (fVar23 = (float)FUN_10054ed64(&local_220,(long)&local_268 + lVar8 * 0xc,
                                                 (long)&local_268 + uVar12 * 0xc,&local_2a0),
                  fVar23 <= fVar22 * fVar22)) && ((int)uVar15 < 0x30)) {
                if (uVar11 == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (int)(uVar11 - *(long *)param_1[9] >> 2) * -0x49249249 + 1;
                }
                *(uint *)(lVar7 + 0x14) =
                     *(uint *)(lVar7 + 0x14) & 0x40000000 | uVar6 & 0x3fffffff | 0x80000000;
                *(long *)(auStack_208 + (long)(int)uVar15 * 8 + -8) = lVar7;
                uVar15 = uVar15 + 1;
              }
              puVar16 = puVar16 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
LAB_100553674:
          uVar1 = uVar12 + 1;
          uVar10 = uVar12;
          uVar12 = uVar1;
        } while (uVar1 < *(byte *)((long)local_298 + 0x1e));
      }
      uVar6 = uVar15;
    } while (uVar15 != 0);
    if (local_2c0 == 0) {
      uVar11 = 0;
      uVar17 = 0x40000000;
    }
    else {
      uVar11 = 0;
      do {
        uVar10 = local_2c0;
        uVar6 = *(uint *)(uVar10 + 0x14) & 0x3fffffff;
        if (uVar6 == 0) {
          local_2c0 = 0;
        }
        else {
          local_2c0 = *(long *)param_1[9] + (ulong)(uVar6 - 1) * 0x1c;
        }
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = (int)(uVar11 - *(long *)param_1[9] >> 2) * -0x49249249 + 1;
        }
        *(uint *)(uVar10 + 0x14) = *(uint *)(uVar10 + 0x14) & 0xc0000000 | uVar6 & 0x3fffffff;
        uVar11 = uVar10;
      } while (local_2c0 != 0);
      uVar12 = 0;
      if ((int)param_9 < 2) {
        param_9 = 1;
      }
      uVar11 = (ulong)param_9;
      do {
        *(undefined4 *)(param_7 + uVar12 * 4) = *(undefined4 *)(uVar10 + 0x18);
        if (param_9 - 1 == uVar12) {
          uVar17 = 0x40000010;
          goto LAB_1005537a0;
        }
        uVar6 = *(uint *)(uVar10 + 0x14) & 0x3fffffff;
        if (uVar6 == 0) {
          uVar11 = (ulong)((int)uVar12 + 1);
          uVar17 = 0x40000000;
          goto LAB_1005537a0;
        }
        uVar10 = *(long *)param_1[9] + (ulong)(uVar6 - 1) * 0x1c;
        uVar12 = uVar12 + 1;
      } while (*(long *)param_1[9] != 0);
      uVar17 = 0x40000000;
      uVar11 = uVar12;
    }
LAB_1005537a0:
    *param_6 = uVar24;
    *(float *)(param_6 + 1) = fVar25;
    *param_8 = (int)uVar11;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 * FUN_100553c80(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int *)(param_1 + 3) = param_2;
  *(int *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = thunk_FUN_10054ec0c(param_2 * 0x1c,0);
  *param_1 = uVar1;
  uVar1 = thunk_FUN_10054ec0c(*(int *)(param_1 + 3) << 1,0);
  param_1[2] = uVar1;
  pvVar2 = (void *)thunk_FUN_10054ec0c(param_3 << 1,0);
  param_1[1] = pvVar2;
  _memset(pvVar2,0xff,(long)*(int *)((long)param_1 + 0x1c) << 1);
  _memset((void *)param_1[2],0xff,(long)*(int *)(param_1 + 3) << 1);
  return param_1;
}




undefined8 * thunk_FUN_100553c80(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int *)(param_1 + 3) = param_2;
  *(int *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = thunk_FUN_10054ec0c(param_2 * 0x1c,0);
  *param_1 = uVar1;
  uVar1 = thunk_FUN_10054ec0c(*(int *)(param_1 + 3) << 1,0);
  param_1[2] = uVar1;
  pvVar2 = (void *)thunk_FUN_10054ec0c(param_3 << 1,0);
  param_1[1] = pvVar2;
  _memset(pvVar2,0xff,(long)*(int *)((long)param_1 + 0x1c) << 1);
  _memset((void *)param_1[2],0xff,(long)*(int *)(param_1 + 3) << 1);
  return param_1;
}




undefined8 * FUN_100553d14(undefined8 *param_1)

{
  FUN_10054ec24(*param_1);
  FUN_10054ec24(param_1[2]);
  FUN_10054ec24(param_1[1]);
  return param_1;
}




undefined8 * thunk_FUN_100553d14(undefined8 *param_1)

{
  FUN_10054ec24(*param_1);
  FUN_10054ec24(param_1[2]);
  FUN_10054ec24(param_1[1]);
  return param_1;
}




void FUN_100553d50(long param_1)

{
  _memset(*(void **)(param_1 + 8),0xff,(long)*(int *)(param_1 + 0x1c) << 1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}




long FUN_100553d84(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = (param_2 << 0xf ^ 0xffffffffU) + param_2;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar5 = (ulong)(*(int *)((long)param_1 + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10));
  uVar3 = *(ushort *)(param_1[1] + uVar5 * 2);
  if (uVar3 != 0xffff) {
    do {
      uVar6 = (ulong)uVar3;
      if (*(int *)(*param_1 + uVar6 * 0x1c + 0x18) == param_2) {
        return *param_1 + uVar6 * 0x1c;
      }
      uVar3 = *(ushort *)(param_1[2] + uVar6 * 2);
    } while (uVar3 != 0xffff);
  }
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < (int)param_1[3]) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
    lVar4 = *param_1 + ((ulong)uVar1 & 0xffff) * 0x1c;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 0xc) = 0;
    *(int *)(lVar4 + 0x18) = param_2;
    lVar2 = param_1[1];
    *(undefined2 *)(param_1[2] + ((ulong)uVar1 & 0xffff) * 2) = *(undefined2 *)(lVar2 + uVar5 * 2);
    *(short *)(lVar2 + uVar5 * 2) = (short)uVar1;
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}




undefined8 * FUN_100553e54(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(int *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar1 = thunk_FUN_10054ec0c(param_2 * 8 + 8,0);
  *param_1 = uVar1;
  return param_1;
}




undefined8 * FUN_100553e90(undefined8 *param_1)

{
  FUN_10054ec24(*param_1);
  return param_1;
}




void FUN_100553eb8(long *param_1,uint param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    fVar4 = *(float *)(param_3 + 0x10);
    do {
      uVar2 = param_2;
      if (-1 < (int)(param_2 - 1)) {
        uVar2 = param_2 - 1;
      }
      uVar2 = (int)uVar2 >> 1;
      lVar3 = *(long *)(*param_1 + (long)(int)uVar2 * 8);
    } while ((fVar4 < *(float *)(lVar3 + 0x10)) &&
            (*(long *)(*param_1 + (ulong)param_2 * 8) = lVar3, bVar1 = 2 < (int)param_2,
            param_2 = uVar2, bVar1));
  }
  *(long *)(*param_1 + (long)(int)param_2 * 8) = param_3;
  return;
}




void FUN_100553f0c(long *param_1,uint param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  while (uVar4 = param_2 << 1 | 1, (int)uVar4 < iVar3) {
    uVar2 = param_2 * 2 + 2;
    lVar5 = *param_1;
    lVar6 = (long)(int)uVar4;
    if (((int)uVar2 < iVar3) &&
       (*(float *)(*(long *)(lVar5 + (long)(int)uVar2 * 8) + 0x10) <
        *(float *)(*(long *)(lVar5 + lVar6 * 8) + 0x10))) {
      lVar6 = (long)(int)uVar2;
      uVar4 = uVar2;
    }
    *(undefined8 *)(lVar5 + (long)(int)param_2 * 8) = *(undefined8 *)(lVar5 + lVar6 * 8);
    param_2 = uVar4;
  }
  if (0 < (int)param_2) {
    fVar7 = *(float *)(param_3 + 0x10);
    do {
      uVar4 = param_2;
      if (-1 < (int)(param_2 - 1)) {
        uVar4 = param_2 - 1;
      }
      uVar4 = (int)uVar4 >> 1;
      lVar5 = *(long *)(*param_1 + (long)(int)uVar4 * 8);
    } while ((fVar7 < *(float *)(lVar5 + 0x10)) &&
            (*(long *)(*param_1 + (ulong)param_2 * 8) = lVar5, bVar1 = 2 < (int)param_2,
            param_2 = uVar4, bVar1));
  }
  *(long *)(*param_1 + (long)(int)param_2 * 8) = param_3;
  return;
}




char * FUN_100553fd8(void)

{
  return "animData";
}




undefined8 FUN_100553fe4(long *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  void *pvVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 local_8c;
  undefined8 **local_88;
  undefined8 uStack_80;
  long local_78;
  
  uVar3 = FUN_10065bb60(param_2);
  local_88 = (undefined8 ***)0x0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_1006581d8(uVar3,&local_88);
  local_8c = 0;
  pppuVar1 = (undefined8 ***)local_88;
  if (-1 < local_78) {
    pppuVar1 = &local_88;
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0x40))(param_1,pppuVar1,&local_8c);
  if (piVar4 != (int *)0x0) {
    iVar8 = *piVar4;
    if (iVar8 != 0) {
      piVar7 = piVar4 + 1;
      do {
        uVar3 = FUN_10065bb7c(param_2,0);
        iVar9 = *piVar7;
        iVar2 = piVar7[1];
        uVar6 = (ulong)(uint)piVar7[2];
        pvVar5 = (void *)FUN_1010a8c7c(param_1[1],uVar6,uVar3);
        _memmove(pvVar5,piVar7 + 3,uVar6);
        piVar7 = (int *)((long)(piVar7 + 3) + uVar6);
        FUN_1010a9430(iVar9,uVar3,pvVar5,uVar6,(char)iVar2);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    (**(code **)(*param_1 + 0x48))(param_1,piVar4,local_8c);
  }
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  return 0;
}




void FUN_10055411c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10065b658(*(undefined8 *)(param_1 + 8),"animData",param_2,param_3,0);
  return;
}




char * FUN_100554138(void)

{
  return "meshData";
}




void FUN_100554144(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 extraout_x1;
  uint uVar4;
  char cVar5;
  undefined8 local_78;
  void *local_70 [2];
  char local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = FUN_10065bb88(param_2);
  uVar2 = FUN_10065bb7c(param_2,0);
  pcVar3 = (char *)FUN_10065bb60(param_2);
  FUN_10001549c(local_70,pcVar3);
  FUN_10065c048(&local_58,local_70,uVar1 ^ 1,1);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *pcVar3;
    if (cVar5 == '\0') {
      uVar4 = 0x811c9dc5;
    }
    else {
      uVar4 = 0x811c9dc5;
      do {
        pcVar3 = pcVar3 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar3;
      } while (cVar5 != '\0');
    }
  }
  FUN_1010a5b7c(uVar4,uVar2,*(undefined8 *)(param_1 + 8),uVar1 ^ 1,local_50,uStack_48);
  uVar2 = DAT_101d91740;
  if ((uVar1 & 1) == 0) {
    local_78 = FUN_1004e68dc();
    uVar2 = FUN_1004e7710(&local_78,1);
    FUN_1004e76b8(uVar2,extraout_x1);
    uVar2 = FUN_1004e777c();
  }
  FUN_10065b8ec(param_2,uVar2,1);
  FUN_1004e68e8(local_58);
  return;
}




undefined8 FUN_10055428c(void)

{
  return 0;
}




void FUN_100554294(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_10065bb88(param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10065bb7c(param_2,1);
  thunk_FUN_1004e68fc();
  return;
}




void FUN_1005542d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10065b66c(*(undefined8 *)(param_1 + 8),"meshData",param_2,param_3,0);
  return;
}




void FUN_1005542f0(undefined4 param_1,undefined1 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x70);
  puVar2 = (undefined8 *)FUN_1004e83c4(pvVar1,4);
  *puVar2 = &PTR_FUN_1014a1628;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[3] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = param_3;
  *(undefined4 *)(puVar2 + 0xb) = param_1;
  *(undefined1 *)(puVar2 + 0xd) = param_2;
  FUN_1004e82c0();
  FUN_1004e8330(pvVar1);
  return;
}




void FUN_10055435c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a1628;
  return;
}




void FUN_100554370(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar3 = operator_new(0x30);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  puVar3[10] = 0;
  *(undefined4 **)(param_1 + 0x28) = puVar3;
  if (*(uint *)(param_1 + 0x58) == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = operator_new__((ulong)*(uint *)(param_1 + 0x58));
  }
  *(void **)(param_1 + 0x60) = pvVar4;
  FUN_1010b47e0();
  FUN_1010b2bf8(*(undefined8 *)(param_1 + 0x28));
  FUN_10066399c();
  if (*(code **)(param_1 + 0x50) == (code *)0x0) {
    uVar2 = 2;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x50))();
    uVar6 = 1;
    if (iVar1 != 1) {
      uVar6 = 2;
    }
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = uVar6;
    }
  }
  FUN_1010afda0(uVar2);
  FUN_100641258(*(undefined8 *)(param_1 + 0x28));
  FUN_1010a87b0();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1010b004c();
  FUN_1010a423c(uVar7,uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1010b004c();
  FUN_10066ab74(uVar7,uVar5,*(undefined1 *)(param_1 + 0x69));
  FUN_10065f31c(*(undefined8 *)(param_1 + 0x28),1);
  FUN_10052c164(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x58),
                *(undefined1 *)(param_1 + 0x68));
  FUN_10052f9c4();
  return;
}




void FUN_100554454(long param_1)

{
  void *pvVar1;
  long lVar2;
  
  thunk_FUN_10052f9f4();
  FUN_10052c1e8();
  FUN_10065f374();
  FUN_10066ac28();
  FUN_1010a4348();
  FUN_1010a87d8();
  FUN_1006412e0();
  FUN_1010aff5c();
  FUN_100663a58();
  FUN_1010b2d08();
  FUN_1010b4830();
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    lVar2 = 0x18;
    do {
      FUN_100554cc4((long)pvVar1 + lVar2,0);
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != -8);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_1005544e4(void)

{
  FUN_1010a4568();
  FUN_1010a5670();
  return;
}




void FUN_1005544f8(void)

{
  return;
}




undefined8 FUN_1005544fc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = FUN_1004e8338(2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_1004e8338(1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  plVar2 = (long *)FUN_10063ee94();
  puVar3 = operator_new(0x10);
  FUN_1010b004c();
  *puVar3 = &PTR_FUN_1014a16d8;
  puVar3[1] = plVar2;
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  puVar3 = operator_new(0x10);
  FUN_1010af6e0();
  *puVar3 = &PTR_FUN_1014a1770;
  puVar3[1] = plVar2;
  *(undefined8 **)(param_1 + 0x38) = puVar3;
  puVar3 = operator_new(0x10);
  FUN_1010a4568();
  *puVar3 = &PTR_FUN_1014a15f0;
  puVar3[1] = plVar2;
  *(undefined8 **)(param_1 + 0x40) = puVar3;
  puVar3 = operator_new(0x10);
  FUN_1010a8710();
  *puVar3 = &PTR_FUN_1014a1568;
  puVar3[1] = plVar2;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  uVar1 = FUN_1010b004c();
  FUN_1010aef2c(uVar1,*(undefined8 *)(param_1 + 0x30));
  uVar1 = FUN_1010af6e0();
  FUN_1010b071c(uVar1,*(undefined8 *)(param_1 + 0x38));
  uVar1 = FUN_1010a4568();
  FUN_1010a56bc(uVar1,*(undefined8 *)(param_1 + 0x40));
  uVar1 = FUN_1010a8710();
  FUN_1010a88bc(uVar1,*(undefined8 *)(param_1 + 0x48));
  puVar3 = operator_new(0x10);
  uVar1 = FUN_1010a8710();
  *puVar3 = &PTR_FUN_1014a1508;
  puVar3[1] = uVar1;
  puVar4 = operator_new(0x10);
  uVar1 = FUN_1010a4568();
  *puVar4 = &PTR_FUN_1014a1590;
  puVar4[1] = uVar1;
  puVar5 = operator_new(0x10);
  uVar1 = FUN_1010b004c();
  *puVar5 = &PTR_FUN_1014a1678;
  puVar5[1] = uVar1;
  puVar6 = operator_new(0x10);
  uVar1 = FUN_1010af6e0();
  *puVar6 = &PTR_FUN_1014a1710;
  puVar6[1] = uVar1;
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar3);
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar4);
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar5);
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar6);
  return 1;
}




void FUN_1005546bc(long param_1)

{
  FUN_1010a8710();
  FUN_1010a88c4();
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 8))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1010a4568();
  FUN_1010a56c4();
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1010af6e0();
  FUN_1010b072c();
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 8))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1010b004c();
  FUN_1010aef34();
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




char * FUN_100554760(void)

{
  return "shaderData";
}




void FUN_10055476c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 extraout_x1;
  uint uVar4;
  char cVar5;
  undefined8 local_78;
  void *local_70 [2];
  char local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = FUN_10065bb88(param_2);
  uVar2 = FUN_10065bb7c(param_2,0);
  pcVar3 = (char *)FUN_10065bb60(param_2);
  FUN_10001549c(local_70,pcVar3);
  FUN_10065c048(&local_58,local_70,uVar1 ^ 1,1);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *pcVar3;
    if (cVar5 == '\0') {
      uVar4 = 0x811c9dc5;
    }
    else {
      uVar4 = 0x811c9dc5;
      do {
        pcVar3 = pcVar3 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar3;
      } while (cVar5 != '\0');
    }
  }
  FUN_1010afb04(uVar4,uVar2,*(undefined8 *)(param_1 + 8),uVar1 ^ 1,local_50,uStack_48);
  uVar2 = DAT_101d91740;
  if ((uVar1 & 1) == 0) {
    local_78 = FUN_1004e68dc();
    uVar2 = FUN_1004e7710(&local_78,1);
    FUN_1004e76b8(uVar2,extraout_x1);
    uVar2 = FUN_1004e777c();
  }
  FUN_10065b8ec(param_2,uVar2,1);
  FUN_1004e68e8(local_58);
  return;
}




undefined8 FUN_1005548b4(void)

{
  return 0;
}




void FUN_1005548bc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_10065bb88(param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10065bb7c(param_2,1);
  thunk_FUN_1004e68fc();
  return;
}




void FUN_1005548fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = _pthread_getspecific(DAT_101dbd528);
  if ((puVar2 != (undefined4 *)0x0) && (iVar1 = FUN_10065bb88(), iVar1 != 0)) {
    FUN_10065bc94(puVar2);
    FUN_10065b66c(*(undefined8 *)(param_1 + 8),"shaderData",param_2,param_3,*puVar2);
    return;
  }
  FUN_10065b658(*(undefined8 *)(param_1 + 8),"shaderData",param_2,param_3,0);
  return;
}




char * FUN_100554990(void)

{
  return "texData";
}




void FUN_10055499c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  uint uVar7;
  char cVar8;
  string *this;
  undefined8 *local_78 [2];
  char local_61;
  
  uVar1 = FUN_10065bb88(param_2);
  uVar2 = FUN_10065bb7c(param_2,0);
  pcVar3 = (char *)FUN_10065bb60(param_2);
  uVar4 = FUN_1004e6cb8(0x38);
  puVar5 = (undefined8 *)FUN_1004e6bb8();
  this = (string *)(puVar5 + 2);
  puVar5[3] = 0;
  *(undefined8 *)this = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  *puVar5 = &PTR_thunk_FUN_100554d78_1014a1798;
  uVar6 = FUN_10065bb60(param_2);
  FUN_10001549c(local_78,uVar6);
  std::string::operator=(this,(string *)local_78);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  local_78[0] = (undefined8 *)FUN_1004e68dc();
  *local_78[0] = this;
  local_78[0][1] = thunk_FUN_100554da8;
  uVar6 = FUN_1004e6858();
  uVar6 = FUN_1004e76a0(local_78,uVar6);
  uVar6 = FUN_1004e7744(uVar6,uVar4);
  FUN_1004e76ac(uVar6,0x78e80dd7);
  uVar6 = FUN_1004e777c();
  local_78[0] = (undefined8 *)FUN_1004e68dc();
  *local_78[0] = this;
  local_78[0][1] = FUN_100554e54;
  uVar4 = FUN_1004e7744(local_78,uVar4);
  FUN_1004e76ac(uVar4,0xe46639f2);
  uVar4 = FUN_1004e777c();
  if (pcVar3 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar8 = *pcVar3;
    if (cVar8 == '\0') {
      uVar7 = 0x811c9dc5;
    }
    else {
      uVar7 = 0x811c9dc5;
      do {
        pcVar3 = pcVar3 + 1;
        uVar7 = (uVar7 ^ (int)cVar8) * 0x1000193;
        cVar8 = *pcVar3;
      } while (cVar8 != '\0');
    }
  }
  FUN_1010b0748(uVar7,uVar2,*(undefined8 *)(param_1 + 8),uVar1 ^ 1,uVar6,uVar4);
  uVar2 = DAT_101d91740;
  if ((uVar1 & 1) == 0) {
    local_78[0] = (undefined8 *)FUN_1004e68dc();
    uVar2 = FUN_1004e7710(local_78,1);
    uVar2 = FUN_1004e76b8(uVar2,extraout_x1);
    FUN_1004e76ac(uVar2,0xeb0cbd62);
    uVar2 = FUN_1004e777c();
  }
  FUN_10065b8ec(param_2,uVar2,1);
  FUN_1004e68e8(uVar6);
  return;
}




undefined8 FUN_100554ba0(void)

{
  return 0;
}




void FUN_100554ba8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_10065bb88(param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10065bb7c(param_2,1);
  thunk_FUN_1004e68fc();
  return;
}




void FUN_100554be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = _pthread_getspecific(DAT_101dbd528);
  if ((puVar2 != (undefined4 *)0x0) && (iVar1 = FUN_10065bb88(), iVar1 != 0)) {
    FUN_10065bc94(puVar2);
    FUN_10065b66c(*(undefined8 *)(param_1 + 8),"texData",param_2,param_3,*puVar2);
    return;
  }
  FUN_10065b658(*(undefined8 *)(param_1 + 8),"texData",param_2,param_3,0);
  return;
}




void FUN_100554c7c(void)

{
  return;
}




void FUN_100554c84(void)

{
  return;
}




void FUN_100554c88(void)

{
  return;
}




void FUN_100554c8c(void)

{
  return;
}




void FUN_100554c94(void)

{
  return;
}




void FUN_100554c9c(void)

{
  return;
}




void FUN_100554ca4(void)

{
  return;
}




void FUN_100554cac(void)

{
  return;
}




void FUN_100554cb4(void)

{
  return;
}




void FUN_100554cbc(void)

{
  return;
}




void FUN_100554cc4(long *param_1,uint param_2)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  if ((param_2 & 1) == 0) {
    pvVar1 = (void *)*param_1;
    while (pvVar1 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar1 + 0x20008);
      operator_delete(pvVar1);
      pvVar1 = pvVar4;
    }
    pvVar1 = (void *)param_1[1];
    while (pvVar1 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar1 + 0x20008);
      operator_delete(pvVar1);
      pvVar1 = pvVar4;
    }
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x20008);
      lVar3 = *plVar2;
    }
    *plVar2 = *param_1;
  }
  *param_1 = 0;
  return;
}




void thunk_FUN_100554d78(void)

{
  FUN_100554d78();
  return;
}




void FUN_100554d64(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100554d78();
  operator_delete(pvVar1);
  return;
}




void FUN_100554d78(long param_1)

{
  if (*(char *)(param_1 + 0x27) < '\0') {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  FUN_1004e6bc8(param_1);
  return;
}




void FUN_100554da8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_40;
  long lStack_38;
  
  plVar3 = param_1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    plVar3 = (long *)*param_1;
  }
  FUN_10065c1dc(&local_40,plVar3);
  param_1[4] = lStack_38;
  param_1[3] = local_40;
  uVar4 = FUN_1004e6948();
  lVar1 = param_1[3];
  lVar2 = param_1[4];
  uVar5 = FUN_1004e6cb8(0x20);
  puVar6 = (undefined8 *)FUN_1004e6bb8();
  puVar6[2] = lVar1;
  puVar6[3] = lVar2;
  *puVar6 = &PTR_thunk_FUN_1004e6bc8_1014a17b8;
  FUN_1004e69d4(uVar4,uVar5,0x815f1c7b);
  return;
}




void FUN_100554e3c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_100554da8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lStack_40;
  long lStack_38;
  
  plVar3 = param_1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    plVar3 = (long *)*param_1;
  }
  FUN_10065c1dc(&lStack_40,plVar3);
  param_1[4] = lStack_38;
  param_1[3] = lStack_40;
  uVar4 = FUN_1004e6948();
  lVar1 = param_1[3];
  lVar2 = param_1[4];
  uVar5 = FUN_1004e6cb8(0x20);
  puVar6 = (undefined8 *)FUN_1004e6bb8();
  puVar6[2] = lVar1;
  puVar6[3] = lVar2;
  *puVar6 = &PTR_thunk_FUN_1004e6bc8_1014a17b8;
  FUN_1004e69d4(uVar4,uVar5,0x815f1c7b);
  return;
}




void FUN_100554e54(long param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 0x18);
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  FUN_10065c248(&local_20);
  return;
}




undefined8 FUN_100554e7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x58,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile_dsp.cpp"
                         ,0x14,0,0);
  FUN_1005570a4();
  *puVar1 = &PTR_FUN_1014a17d8;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  *(undefined4 *)((long)puVar1 + 0x4c) = 300;
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0x26;
  }
  else {
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    *(undefined4 *)(puVar1 + 10) = 0;
    uVar2 = FUN_100554fa0(puVar1);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_100556b34(param_1,puVar1);
      return uVar2;
    }
  }
  return uVar2;
}




void FUN_100554f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005570a4();
  *(undefined4 *)(puVar1 + 9) = 0;
  *puVar1 = &PTR_FUN_1014a17d8;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  *(undefined4 *)((long)puVar1 + 0x4c) = 300;
  return;
}




void FUN_100554f68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005570a4();
  *(undefined4 *)(puVar1 + 9) = 0;
  *puVar1 = &PTR_FUN_1014a17d8;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  *(undefined4 *)((long)puVar1 + 0x4c) = 300;
  return;
}




undefined8 FUN_100554fa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                        *(int *)(param_1 + 0x4c) * 0xc3 + 0x11,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile_dsp.cpp"
                        ,0x35,0);
  *(long *)(param_1 + 0x30) = lVar1;
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x30),
                    "../../src/fmod_autocleanup.h",0xbe);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar2 = 0x26;
  }
  else {
    uVar2 = 0;
    *(long *)(param_1 + 0x38) = lVar1;
    *(long *)(param_1 + 0x40) = lVar1 + 0x11;
  }
  return uVar2;
}




undefined8 FUN_100555038(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile_dsp.cpp"
                  ,0x47);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(long *)(param_1 + 0x30) = 0;
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile_dsp.cpp"
                ,0x4d);
  return 0;
}




undefined8 FUN_1005550b0(long param_1,undefined8 param_2,short *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  ushort uVar7;
  ushort local_62;
  undefined8 local_60;
  int local_54;
  
  bVar1 = false;
  lVar5 = *(long *)(param_1 + 0x28);
  if ((lVar5 != 0) && ((((uint)param_4 ^ 1) & 1) == 0)) {
    FUN_10057097c(lVar5,3);
    bVar1 = true;
  }
  uVar3 = FUN_1005cea38(param_2,&local_54,0,0);
  if ((int)uVar3 == 0) {
    if (local_54 == 0) {
      uVar4 = 0;
    }
    else {
      iVar6 = 0;
      *param_3 = *param_3 + 1;
      if (local_54 < 1) {
        uVar4 = 0;
      }
      else {
        uVar7 = 0;
        do {
          local_60 = 0;
          local_62 = 0;
          iVar2 = FUN_1005c96c0(param_2,iVar6,&local_60,0,0,param_4);
          uVar4 = 0;
          if (iVar2 == 0) {
            FUN_1005550b0(param_1,local_60,&local_62,0);
            uVar4 = local_62;
          }
          if (uVar4 <= uVar7) {
            uVar4 = uVar7;
          }
          iVar6 = iVar6 + 1;
          uVar7 = uVar4;
        } while (iVar6 < local_54);
      }
    }
    uVar3 = 0;
    *param_3 = *param_3 + uVar4;
  }
  if ((lVar5 != 0) && (bVar1)) {
    FUN_100570990(lVar5,3);
  }
  return uVar3;
}




/* WARNING: Type propagation algorithm not settling */

ulong FUN_1005551f0(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined2 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  int *piVar20;
  undefined1 *puVar21;
  float local_2c8 [33];
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined1 local_1c4;
  char local_1bb;
  undefined2 local_1ba;
  long local_1b8;
  int local_1b0 [2];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  long *local_178;
  long local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar16 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined4 *)(param_1 + 9) = 0;
  local_68 = lVar16;
  FUN_1005fa010(param_1[5],&local_178);
  uVar9 = (**(code **)(*local_178 + 0x118))(local_178,0,&local_170);
  if ((int)uVar9 == 0) {
    if (local_170 == 0) {
      uVar9 = 0x1c;
    }
    else {
      iVar2 = *(int *)(local_170 + 0x38);
      FUN_1006374bc(auStack_190,param_1[5] + 0x15630,1);
      FUN_100637534(auStack_1a8,param_1[5] + 0x15630);
      uVar10 = FUN_1006373a0(auStack_190,auStack_1a8);
      FUN_1006371fc(auStack_1a8);
      if ((int)uVar10 != 0) {
        puVar19 = (undefined8 *)((ulong)local_2c8 | 4);
        do {
          lVar16 = FUN_10063736c(auStack_190);
          uVar8 = *(uint *)(param_1 + 9);
          uVar7 = *(uint *)((long)param_1 + 0x4c);
          if (uVar8 + 1 < uVar7) {
            lVar18 = param_1[8];
          }
          else {
            *(uint *)((long)param_1 + 0x4c) = uVar7 << 1;
            lVar18 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[6],
                                   uVar7 * 0x186 + 0x11,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile_dsp.cpp"
                                   ,0x158,0);
            param_1[6] = lVar18;
            if (lVar18 == 0) {
              uVar9 = 0x26;
              lVar16 = *(long *)PTR____stack_chk_guard_101444218;
              goto LAB_100555898;
            }
            param_1[7] = lVar18;
            lVar18 = lVar18 + 0x11;
            param_1[8] = lVar18;
            uVar8 = *(uint *)(param_1 + 9);
          }
          uVar17 = (ulong)uVar8;
          *(uint *)(param_1 + 9) = uVar8 + 1;
          uVar9 = FUN_1005cf68c(lVar16,auStack_168,0,0,0,0);
          if ((int)uVar9 != 0) {
LAB_10055588c:
            lVar16 = *(long *)PTR____stack_chk_guard_101444218;
            goto LAB_100555898;
          }
          plVar11 = *(long **)(lVar16 + 0x1b0);
          if (plVar11 == (long *)0x0 || *(int *)(param_1 + 10) != 1) {
            if ((plVar11 == (long *)0x0) || (*(int *)(param_1 + 10) != 2)) {
              lVar12 = lVar18 + uVar17 * 0xc3 + 0x10;
              pcVar14 = "%s";
            }
            else {
              local_1b0[1] = 0xbf800000;
              (**(code **)(*plVar11 + 0x40))(plVar11,local_1b0 + 1);
              lVar12 = lVar18 + uVar17 * 0xc3 + 0x10;
              pcVar14 = "%s [%.3f]";
            }
          }
          else {
            lVar12 = lVar18 + uVar17 * 0xc3 + 0x10;
            pcVar14 = "%s [%llu %llu]";
          }
          puVar21 = auStack_168;
          FUN_1005ed550(lVar12,0x20,pcVar14);
          local_1b0[0] = 0;
          uVar9 = FUN_1005c9158(lVar16,local_1b0,1,1);
          if ((int)uVar9 != 0) goto LAB_10055588c;
          piVar20 = (int *)(lVar18 + uVar17 * 0xc3 + 0x30);
          *piVar20 = local_1b0[0];
          if (0 < local_1b0[0]) {
            iVar6 = 0;
            do {
              iVar5 = FUN_1005c91e4(lVar16,iVar6,0,&local_1b8,0,1,in_x6,in_x7,puVar21);
              if ((iVar5 == 0) && ((*(byte *)(local_1b8 + 0x78) >> 1 & 1) != 0)) {
                *piVar20 = *piVar20 + -1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < local_1b0[0]);
          }
          uVar3 = *(ushort *)(lVar16 + 0x3c);
          uVar1 = 0;
          if (iVar2 - *(int *)(lVar16 + 0x38) < 3) {
            uVar1 = uVar3 >> 9 & 1;
          }
          local_1ba = 0;
          uVar9 = FUN_1005550b0(param_1,lVar16,&local_1ba,1);
          if ((int)uVar9 != 0) goto LAB_10055588c;
          plVar11 = (long *)(lVar18 + uVar17 * 0xc3);
          *plVar11 = lVar16;
          plVar11[1] = *(long *)(lVar16 + 0x1b0);
          *(char *)((long)plVar11 + 0x34) = (char)uVar1;
          *(byte *)((long)plVar11 + 0x35) = (byte)uVar3 & 1;
          *(undefined2 *)((long)plVar11 + 0x36) = local_1ba;
          if (uVar1 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (undefined2)*(undefined4 *)(lVar16 + 0x19c);
          }
          lVar12 = lVar18 + uVar17 * 0xc3;
          *(undefined2 *)(lVar12 + 0x38) = uVar15;
          *(undefined1 *)(lVar12 + 0x3a) = 0;
          *(undefined8 *)(lVar12 + 0xbb) = 0;
          if ((*(long *)(lVar16 + 0xd0) != 0) &&
             (iVar6 = FUN_1005ed0c8(*(long *)(lVar16 + 0xd0) + 4,"FMOD Send"), iVar6 == 0)) {
            uVar13 = FUN_100632688(lVar16);
            *(undefined8 *)(lVar12 + 0xbb) = uVar13;
          }
          local_1bb = '\0';
          uVar9 = FUN_1005cfb60(lVar16,0,&local_1bb);
          if ((int)uVar9 != 0) goto LAB_10055588c;
          if (local_1bb != '\0') {
            uVar9 = FUN_1005cfa68(lVar16,0,local_2c8);
            if ((int)uVar9 != 0) goto LAB_10055588c;
            uVar13 = puVar19[6];
            lVar18 = lVar18 + uVar17 * 0xc3;
            *(undefined8 *)(lVar18 + 0x73) = puVar19[7];
            *(undefined8 *)(lVar18 + 0x6b) = uVar13;
            uVar13 = puVar19[4];
            *(undefined8 *)(lVar18 + 99) = puVar19[5];
            *(undefined8 *)(lVar18 + 0x5b) = uVar13;
            uVar13 = puVar19[2];
            *(undefined8 *)(lVar18 + 0x53) = puVar19[3];
            *(undefined8 *)(lVar18 + 0x4b) = uVar13;
            uVar13 = *puVar19;
            *(undefined8 *)(lVar18 + 0x43) = puVar19[1];
            *(undefined8 *)(lVar18 + 0x3b) = uVar13;
            *(undefined8 *)(lVar18 + 0xb3) = uStack_20c;
            *(undefined8 *)(lVar18 + 0xab) = local_214;
            *(undefined8 *)(lVar18 + 0xa3) = uStack_21c;
            *(undefined8 *)(lVar18 + 0x9b) = local_224;
            *(undefined8 *)(lVar18 + 0x93) = uStack_22c;
            *(undefined8 *)(lVar18 + 0x8b) = local_234;
            *(undefined8 *)(lVar18 + 0x83) = uStack_23c;
            *(undefined8 *)(lVar18 + 0x7b) = local_244;
            *(undefined1 *)(lVar12 + 0x3a) = local_1c4;
            uVar8 = (*(uint *)(lVar18 + 0x3b) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x3b) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x3b) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x7b) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x7b) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x7b) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x3f) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x3f) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x3f) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x7f) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x7f) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x7f) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x43) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x43) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x43) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x83) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x83) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x83) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x47) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x47) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x47) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x87) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x87) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x87) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x4b) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x4b) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x4b) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x8b) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x8b) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x8b) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x4f) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x4f) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x4f) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x8f) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x8f) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x8f) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x53) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x53) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x53) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x93) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x93) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x93) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x57) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x57) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x57) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x97) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x97) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x97) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x5b) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x5b) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x5b) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x9b) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x9b) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x9b) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x5f) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x5f) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x5f) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x9f) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x9f) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x9f) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 99) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 99) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 99) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0xa3) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0xa3) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0xa3) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x67) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x67) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x67) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0xa7) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0xa7) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0xa7) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x6b) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x6b) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x6b) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0xab) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0xab) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0xab) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x6f) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x6f) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x6f) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0xaf) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0xaf) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0xaf) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x73) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x73) & 0xff00ff) << 8;
            uVar7 = (*(uint *)(lVar18 + 0xb3) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0xb3) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x73) = uVar8 >> 0x10 | uVar8 << 0x10;
            *(uint *)(lVar18 + 0xb3) = uVar7 >> 0x10 | uVar7 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0x77) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0x77) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0x77) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(lVar18 + 0xb7) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar18 + 0xb7) & 0xff00ff) << 8;
            *(uint *)(lVar18 + 0xb7) = uVar8 >> 0x10 | uVar8 << 0x10;
          }
          uVar7 = FUN_100637238(auStack_190);
          uVar8 = (uint)uVar10;
          if (uVar7 != 0) {
            uVar8 = uVar7;
          }
          uVar10 = (ulong)uVar8;
          uVar9 = uVar10;
          if (uVar7 != 0) goto LAB_10055588c;
          FUN_100637534(auStack_1a8,param_1[5] + 0x15630);
          uVar9 = FUN_1006373a0(auStack_190,auStack_1a8);
          FUN_1006371fc(auStack_1a8);
        } while ((uVar9 & 1) != 0);
      }
      local_2c8[0] = 0.0;
      uVar8 = FUN_1005fbcb8(param_1[5] + 0x754,local_2c8);
      lVar16 = *(long *)PTR____stack_chk_guard_101444218;
      if (uVar8 == 0) {
        puVar19 = (undefined8 *)param_1[7];
        *(undefined1 *)(puVar19 + 2) = 0;
        *puVar19 = 0;
        puVar19[1] = 0;
        *(int *)param_1[7] = *(int *)(param_1 + 9) * 0xc3 + 0x11;
        uVar4 = (**(code **)*param_1)(param_1);
        lVar18 = param_1[7];
        *(undefined1 *)(lVar18 + 8) = uVar4;
        *(undefined1 *)(lVar18 + 10) = 5;
        *(float *)(lVar18 + 0xc) = local_2c8[0] / 100.0;
        *(undefined1 *)(lVar18 + 0x10) = 0x20;
        if (*(int *)(param_2 + 1) < 1) {
          *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
          uVar8 = FUN_100556bb8(*param_2,lVar18,0);
        }
        else {
          uVar8 = 0x1c;
        }
      }
      uVar7 = 0;
      if (uVar8 != 0x2d) {
        uVar7 = uVar8;
      }
      uVar9 = (ulong)uVar7;
LAB_100555898:
      FUN_1006371fc(auStack_190);
    }
  }
  if (lVar16 == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005558e8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar1 << 1;
  lVar2 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x30),
                        iVar1 * 0x186 + 0x11,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile_dsp.cpp"
                        ,0x158,0);
  *(long *)(param_1 + 0x30) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  else {
    uVar3 = 0;
    *(long *)(param_1 + 0x38) = lVar2;
    *(long *)(param_1 + 0x40) = lVar2 + 0x11;
  }
  return uVar3;
}




undefined8 FUN_100555968(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float local_24;
  
  local_24 = 0.0;
  uVar2 = FUN_1005fbcb8(param_1[5] + 0x754,&local_24);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined8 *)param_1[7];
    *(undefined1 *)(puVar4 + 2) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(int *)param_1[7] = *(int *)(param_1 + 9) * 0xc3 + 0x11;
    uVar1 = (**(code **)*param_1)(param_1);
    lVar3 = param_1[7];
    *(undefined1 *)(lVar3 + 8) = uVar1;
    *(undefined1 *)(lVar3 + 10) = 5;
    *(float *)(lVar3 + 0xc) = local_24 / 100.0;
    *(undefined1 *)(lVar3 + 0x10) = 0x20;
    if (*(int *)(param_2 + 1) < 1) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
      uVar2 = FUN_100556bb8(*param_2,lVar3,0);
    }
    else {
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}




undefined8 FUN_100555a30(long param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_1006374bc(auStack_58,*(long *)(param_1 + 0x28) + 0x15630,1);
  while( true ) {
    FUN_100637534(auStack_70,*(long *)(param_1 + 0x28) + 0x15630);
    iVar1 = FUN_1006373a0(auStack_58,auStack_70);
    FUN_1006371fc(auStack_70);
    if (iVar1 == 0) {
      uVar3 = 9;
      goto LAB_100555ad0;
    }
    lVar2 = FUN_10063736c(auStack_58);
    if (lVar2 == param_2) break;
    uVar3 = FUN_100637238(auStack_58);
    if ((int)uVar3 != 0) {
LAB_100555ad0:
      FUN_1006371fc(auStack_58);
      return uVar3;
    }
  }
  uVar3 = 0;
  *param_3 = param_2;
  goto LAB_100555ad0;
}




undefined8 FUN_100555af4(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(char *)(param_2 + 10) != '\x05') {
    return 0;
  }
  cVar1 = *(char *)(param_2 + 9);
  if (cVar1 == '\x03') {
    local_30 = 0;
    iVar2 = FUN_100555a30(param_1,*(undefined8 *)(param_2 + 0xc),&local_30);
    if (iVar2 != 0) {
      return 0;
    }
    uVar3 = FUN_1005c9900(local_30,*(char *)(param_2 + 0x14) != '\0');
    iVar2 = (int)uVar3;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') {
        return 0;
      }
      param_2 = param_2 + 0xc;
      iVar2 = FUN_1005ed12c(param_2,"Show Delays");
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x50) = 1;
        return 0;
      }
      iVar2 = FUN_1005ed12c(param_2,"Show Audibility");
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x50) = 2;
        return 0;
      }
      iVar2 = FUN_1005ed12c(param_2,"Show Off");
      if ((iVar2 != 0) && (iVar2 = FUN_1005ed12c(param_2,"Show None"), iVar2 != 0)) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      return 0;
    }
    local_28 = 0;
    iVar2 = FUN_100555a30(param_1,*(undefined8 *)(param_2 + 0xc),&local_28);
    if (iVar2 != 0) {
      return 0;
    }
    uVar3 = FUN_1005c986c(local_28,*(char *)(param_2 + 0x14) != '\0',1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 0) {
    return 0;
  }
  return uVar3;
}




undefined8 FUN_100555c24(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x48) == 1) {
    return 0;
  }
  uVar1 = 0;
  plVar2 = *(long **)(param_1 + 0x40);
  do {
    if (*plVar2 == param_2) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    plVar2 = (long *)((long)plVar2 + 0xc3);
  } while (uVar1 < *(int *)(param_1 + 0x48) - 1U);
  return 0;
}




undefined8 FUN_100555c6c(undefined8 *param_1,undefined1 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    puVar1 = (undefined8 *)
             FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x48,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                           ,0x17,0,0);
    puVar1[1] = puVar1 + 1;
    puVar1[2] = puVar1 + 1;
    puVar1[3] = 0;
    puVar1[4] = puVar1 + 4;
    puVar1[5] = puVar1 + 4;
    puVar1[6] = 0;
    *puVar1 = 0xffffffffffffffff;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined1 *)((long)puVar1 + 0x44) = 1;
    *(undefined2 *)((long)puVar1 + 0x46) = 0x2430;
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 0x26;
    }
    else {
      *(undefined1 *)((long)puVar1 + 0x44) = param_2;
      if (param_3 != 0) {
        *(short *)((long)puVar1 + 0x46) = (short)param_3;
      }
      uVar2 = FUN_1005d9d40();
      if ((((int)uVar2 == 0) && (uVar2 = FUN_1005dbd48(puVar1 + 7,0), (int)uVar2 == 0)) &&
         (uVar2 = FUN_1005dba24(puVar1 + 8), (int)uVar2 == 0)) {
        uVar2 = 0;
        *param_1 = puVar1;
      }
      else {
        FUN_100555e04(puVar1);
      }
    }
  }
  return uVar2;
}




void FUN_100555d7c(undefined8 *param_1)

{
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[1] = param_1 + 1;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  param_1[6] = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 1;
  *(undefined2 *)((long)param_1 + 0x46) = 0x2430;
  return;
}




void FUN_100555db8(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(short *)(param_1 + 0x46) = (short)param_2;
  }
  iVar1 = FUN_1005d9d40();
  if ((iVar1 == 0) && (iVar1 = FUN_1005dbd48(param_1 + 0x38,0), iVar1 == 0)) {
    FUN_1005dba24(param_1 + 0x40);
    return;
  }
  return;
}




undefined8 FUN_100555e04(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*param_1 != -1) {
    FUN_100617cc0();
  }
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1 + 1) {
    plVar1 = (long *)*plVar3;
    puVar2 = (undefined8 *)plVar3[1];
    *puVar2 = plVar1;
    *(undefined8 **)(*plVar3 + 8) = puVar2;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    FUN_1005563fc();
    plVar3 = plVar1;
  }
  plVar3 = (long *)param_1[4];
  while (plVar3 != param_1 + 4) {
    plVar1 = (long *)*plVar3;
    puVar2 = (undefined8 *)plVar3[1];
    *puVar2 = plVar1;
    *(undefined8 **)(*plVar3 + 8) = puVar2;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    uVar4 = (**(code **)(plVar3[-1] + 8))();
    plVar3 = plVar1;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if (param_1[7] != 0) {
    FUN_1005dbe84(param_1[7],0);
  }
  uVar4 = FUN_1005d9d7c();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                ,0xe5);
  return 0;
}




void FUN_100555ef4(undefined8 *param_1)

{
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[1] = param_1 + 1;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  param_1[6] = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 1;
  *(undefined2 *)((long)param_1 + 0x46) = 0x2430;
  return;
}




undefined8 FUN_100555f30(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long local_38;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    iVar1 = 0x2430;
    if (param_2 != 0) {
      iVar1 = param_2;
    }
    local_38 = 0;
    uVar3 = FUN_100617810(param_3,iVar1,1,&local_38);
    if ((int)uVar3 == 0) {
      plVar4 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x440,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                                     ,0x5a,0,0);
      *plVar4 = (long)plVar4;
      plVar4[1] = (long)plVar4;
      plVar4[2] = 0;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
      plVar4[3] = -1;
      plVar4[4] = 0;
      *(undefined4 *)(plVar4 + 5) = 0;
      _bzero(plVar4 + 6,0x40c);
      *(undefined1 *)(plVar4 + 6) = 0xff;
      *(undefined1 *)(plVar4 + 10) = 0xff;
      *(undefined1 *)(plVar4 + 0xe) = 0xff;
      *(undefined1 *)(plVar4 + 0x12) = 0xff;
      *(undefined1 *)(plVar4 + 0x16) = 0xff;
      *(undefined1 *)(plVar4 + 0x1a) = 0xff;
      *(undefined1 *)(plVar4 + 0x1e) = 0xff;
      *(undefined1 *)(plVar4 + 0x22) = 0xff;
      *(undefined1 *)(plVar4 + 0x26) = 0xff;
      *(undefined1 *)(plVar4 + 0x2a) = 0xff;
      *(undefined1 *)(plVar4 + 0x2e) = 0xff;
      *(undefined1 *)(plVar4 + 0x32) = 0xff;
      *(undefined1 *)(plVar4 + 0x36) = 0xff;
      *(undefined1 *)(plVar4 + 0x3a) = 0xff;
      *(undefined1 *)(plVar4 + 0x3e) = 0xff;
      *(undefined1 *)(plVar4 + 0x42) = 0xff;
      *(undefined1 *)(plVar4 + 0x46) = 0xff;
      *(undefined1 *)(plVar4 + 0x4a) = 0xff;
      *(undefined1 *)(plVar4 + 0x4e) = 0xff;
      *(undefined1 *)(plVar4 + 0x52) = 0xff;
      *(undefined1 *)(plVar4 + 0x56) = 0xff;
      *(undefined1 *)(plVar4 + 0x5a) = 0xff;
      *(undefined1 *)(plVar4 + 0x5e) = 0xff;
      *(undefined1 *)(plVar4 + 0x62) = 0xff;
      *(undefined1 *)(plVar4 + 0x66) = 0xff;
      *(undefined1 *)(plVar4 + 0x6a) = 0xff;
      *(undefined1 *)(plVar4 + 0x6e) = 0xff;
      *(undefined1 *)(plVar4 + 0x72) = 0xff;
      *(undefined1 *)(plVar4 + 0x76) = 0xff;
      *(undefined1 *)(plVar4 + 0x7a) = 0xff;
      *(undefined1 *)(plVar4 + 0x7e) = 0xff;
      *(undefined1 *)(plVar4 + 0x82) = 0xff;
      if (plVar4 == (long *)0x0) {
        uVar3 = 0x26;
      }
      else {
        plVar4[3] = local_38;
        plVar4[4] = param_1;
        *(undefined4 *)(plVar4 + 0x87) = 0x1000;
        lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x1000,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                              ,0x1ff,0,0);
        plVar4[0x86] = lVar5;
        if (lVar5 == 0) {
          uVar3 = 0x26;
        }
        else {
          uVar6 = 0;
          pcVar7 = (char *)((long)plVar4 + 0x31);
          do {
            if ((pcVar7[-1] == '\0') && (*pcVar7 == '\0')) {
              *(undefined4 *)((long)plVar4 + uVar6 * 0x20 + 0x34) = 0xffffffff;
              goto LAB_100556124;
            }
            uVar6 = uVar6 + 1;
            pcVar7 = pcVar7 + 0x20;
          } while (uVar6 < 0x20);
          uVar6 = 0;
          plVar8 = plVar4 + 6;
          do {
            if ((char)*plVar8 == -1) {
              *(undefined1 *)plVar8 = 0;
              *(undefined1 *)((long)plVar4 + uVar6 * 0x20 + 0x31) = 0;
              *(undefined4 *)((long)plVar4 + uVar6 * 0x20 + 0x34) = 0xffffffff;
              plVar4[uVar6 * 4 + 8] = 0;
              plVar4[uVar6 * 4 + 9] = 0;
              plVar4[uVar6 * 4 + 7] = 0;
              break;
            }
            uVar6 = uVar6 + 1;
            plVar8 = plVar8 + 4;
          } while (uVar6 < 0x20);
LAB_100556124:
          lVar5 = *(long *)(param_1 + 0x10);
          *plVar4 = param_1 + 8;
          plVar4[1] = lVar5;
          *(long **)(param_1 + 0x10) = plVar4;
          *(long **)plVar4[1] = plVar4;
          plVar8 = (long *)(param_1 + 0x20);
          do {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)(param_1 + 0x20)) {
              return 0;
            }
            plVar2 = (long *)0x0;
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + -1;
            }
            uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,plVar4);
          } while ((int)uVar3 == 0);
        }
      }
    }
  }
  else {
    uVar3 = 0x1c;
  }
  return uVar3;
}




long FUN_100556190(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  _bzero((void *)(param_1 + 0x30),0x40c);
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined1 *)(param_1 + 0x50) = 0xff;
  *(undefined1 *)(param_1 + 0x70) = 0xff;
  *(undefined1 *)(param_1 + 0x90) = 0xff;
  *(undefined1 *)(param_1 + 0xb0) = 0xff;
  *(undefined1 *)(param_1 + 0xd0) = 0xff;
  *(undefined1 *)(param_1 + 0xf0) = 0xff;
  *(undefined1 *)(param_1 + 0x110) = 0xff;
  *(undefined1 *)(param_1 + 0x130) = 0xff;
  *(undefined1 *)(param_1 + 0x150) = 0xff;
  *(undefined1 *)(param_1 + 0x170) = 0xff;
  *(undefined1 *)(param_1 + 400) = 0xff;
  *(undefined1 *)(param_1 + 0x1b0) = 0xff;
  *(undefined1 *)(param_1 + 0x1d0) = 0xff;
  *(undefined1 *)(param_1 + 0x1f0) = 0xff;
  *(undefined1 *)(param_1 + 0x210) = 0xff;
  *(undefined1 *)(param_1 + 0x230) = 0xff;
  *(undefined1 *)(param_1 + 0x250) = 0xff;
  *(undefined1 *)(param_1 + 0x270) = 0xff;
  *(undefined1 *)(param_1 + 0x290) = 0xff;
  *(undefined1 *)(param_1 + 0x2b0) = 0xff;
  *(undefined1 *)(param_1 + 0x2d0) = 0xff;
  *(undefined1 *)(param_1 + 0x2f0) = 0xff;
  *(undefined1 *)(param_1 + 0x310) = 0xff;
  *(undefined1 *)(param_1 + 0x330) = 0xff;
  *(undefined1 *)(param_1 + 0x350) = 0xff;
  *(undefined1 *)(param_1 + 0x370) = 0xff;
  *(undefined1 *)(param_1 + 0x390) = 0xff;
  *(undefined1 *)(param_1 + 0x3b0) = 0xff;
  *(undefined1 *)(param_1 + 0x3d0) = 0xff;
  *(undefined1 *)(param_1 + 0x3f0) = 0xff;
  *(undefined1 *)(param_1 + 0x410) = 0xff;
  return param_1;
}




undefined8 FUN_100556258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x438) = 0x1000;
  lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x1000,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                        ,0x1ff,0,0);
  *(long *)(param_1 + 0x430) = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  else {
    uVar3 = 0;
    pcVar4 = (char *)(param_1 + 0x31);
    do {
      if ((pcVar4[-1] == '\0') && (*pcVar4 == '\0')) {
        *(undefined4 *)(param_1 + uVar3 * 0x20 + 0x34) = 0xffffffff;
        return 0;
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x20;
    } while (uVar3 < 0x20);
    uVar3 = 0;
    pcVar4 = (char *)(param_1 + 0x30);
    do {
      if (*pcVar4 == -1) {
        *pcVar4 = '\0';
        param_1 = param_1 + uVar3 * 0x20;
        *(undefined1 *)(param_1 + 0x31) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 0;
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x20;
    } while (uVar3 < 0x20);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_100556344(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 1;
    return 0;
  }
  return 0x1c;
}




undefined8 FUN_100556364(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  if ((long *)*plVar5 == plVar5) {
LAB_1005563e8:
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x20);
    plVar6 = plVar1;
    plVar4 = (long *)*plVar5;
    do {
      while (plVar6 = (long *)*plVar6, plVar6 == plVar1) {
        plVar2 = (long *)*plVar4;
        plVar6 = (long *)plVar4[1];
        *plVar6 = (long)plVar2;
        *(long **)(*plVar4 + 8) = plVar6;
        *plVar4 = (long)plVar4;
        plVar4[1] = (long)plVar4;
        FUN_1005563fc(plVar4);
        plVar6 = plVar1;
        plVar4 = plVar2;
        if (plVar2 == plVar5) goto LAB_1005563e8;
      }
      plVar2 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + -1;
      }
      uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,plVar4);
    } while ((int)uVar3 == 0);
  }
  return uVar3;
}




undefined8 FUN_1005563fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_100617cc0(*(undefined8 *)(param_1 + 0x18));
  lVar2 = 0;
  do {
    lVar1 = *(long *)(param_1 + 0x40 + lVar2);
    if (lVar1 != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                    ,0x214);
    }
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x400);
  if (*(long *)(param_1 + 0x430) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x430),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                  ,0x21a);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                ,0x21d);
  return 0;
}




bool FUN_1005564b0(long param_1,char *param_2,int param_3)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  if (plVar4 == plVar2) {
    return false;
  }
  iVar3 = 0;
  plVar5 = plVar4;
  do {
    uVar8 = 0;
    pcVar9 = (char *)((long)plVar5 + 0x31);
    do {
      if ((pcVar9[-1] == *param_2) && (*pcVar9 == param_2[1])) {
        iVar6 = 1;
        goto LAB_100556508;
      }
      uVar8 = uVar8 + 1;
      pcVar9 = pcVar9 + 0x20;
    } while (uVar8 < 0x20);
    iVar6 = 0;
LAB_100556508:
    iVar3 = iVar6 + iVar3;
    plVar5 = (long *)*plVar5;
  } while (plVar5 != plVar2);
  if (iVar3 == 0) {
    return false;
  }
  if (plVar4 == plVar2) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      uVar8 = 0;
      plVar5 = plVar4 + 6;
      do {
        if ((char)*plVar5 == *param_2) {
          bVar1 = *(char *)((long)plVar5 + 1) == param_2[1];
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar7 = (int)plVar5[3] - *(int *)((long)plVar5 + 0x1c);
          if (*(uint *)((long)plVar5 + 4) == 0xffffffff) {
            if (iVar7 < 0x100000) {
              iVar7 = 1;
              goto LAB_1005565bc;
            }
          }
          else if ((*(uint *)((long)plVar5 + 4) < (uint)(param_3 - (int)plVar5[1]) &&
                    (int)plVar5[3] == 0) && (iVar7 < 0x100000)) {
            iVar7 = 1;
            goto LAB_1005565bc;
          }
        }
        uVar8 = uVar8 + 1;
        plVar5 = plVar5 + 4;
      } while (uVar8 < 0x20);
      iVar7 = 0;
LAB_1005565bc:
      iVar6 = iVar7 + iVar6;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != plVar2);
  }
  return iVar6 == iVar3;
}




undefined8 FUN_1005565f0(long param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x31);
  while ((pcVar2[-1] != *param_2 || (*pcVar2 != param_2[1]))) {
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0x20;
    if (0x1f < uVar1) {
      return 0;
    }
  }
  return 1;
}




undefined8 FUN_100556638(long param_1,char *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  pcVar4 = (char *)(param_1 + 0x30);
  do {
    if (*pcVar4 == *param_2) {
      bVar2 = pcVar4[1] == param_2[1];
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      iVar1 = *(int *)(pcVar4 + 0x18) - *(int *)(pcVar4 + 0x1c);
      if (*(uint *)(pcVar4 + 4) == 0xffffffff) {
        if (iVar1 < 0x100000) {
          return 1;
        }
      }
      else if ((*(uint *)(pcVar4 + 4) < (uint)(param_3 - *(int *)(pcVar4 + 8)) &&
                *(int *)(pcVar4 + 0x18) == 0) && (iVar1 < 0x100000)) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 0x20;
    if (0x1f < uVar3) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_1005566d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_60;
  undefined4 local_58;
  undefined2 local_50 [2];
  int local_4c;
  undefined8 local_48;
  
  if (*(char *)((long)param_1 + 0x44) != '\0') {
    lVar4 = *param_1;
    if (lVar4 == -1) {
      uVar5 = FUN_100617aa4(*(undefined2 *)((long)param_1 + 0x46),1,param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar4 = *param_1;
    }
    local_48 = 0;
    iVar3 = FUN_100617c04(lVar4,1,&local_48);
    if (iVar3 != 0x2d) {
      if (iVar3 == 0) {
        puVar6 = (undefined8 *)
                 FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x440,
                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                               ,0x100,0,0);
        *puVar6 = puVar6;
        puVar6[1] = puVar6;
        puVar6[2] = 0;
        *(undefined4 *)((long)puVar6 + 0x2c) = 0;
        puVar6[3] = 0xffffffffffffffff;
        puVar6[4] = 0;
        *(undefined4 *)(puVar6 + 5) = 0;
        _bzero(puVar6 + 6,0x40c);
        *(undefined1 *)(puVar6 + 6) = 0xff;
        *(undefined1 *)(puVar6 + 10) = 0xff;
        *(undefined1 *)(puVar6 + 0xe) = 0xff;
        *(undefined1 *)(puVar6 + 0x12) = 0xff;
        *(undefined1 *)(puVar6 + 0x16) = 0xff;
        *(undefined1 *)(puVar6 + 0x1a) = 0xff;
        *(undefined1 *)(puVar6 + 0x1e) = 0xff;
        *(undefined1 *)(puVar6 + 0x22) = 0xff;
        *(undefined1 *)(puVar6 + 0x26) = 0xff;
        *(undefined1 *)(puVar6 + 0x2a) = 0xff;
        *(undefined1 *)(puVar6 + 0x2e) = 0xff;
        *(undefined1 *)(puVar6 + 0x32) = 0xff;
        *(undefined1 *)(puVar6 + 0x36) = 0xff;
        *(undefined1 *)(puVar6 + 0x3a) = 0xff;
        *(undefined1 *)(puVar6 + 0x3e) = 0xff;
        *(undefined1 *)(puVar6 + 0x42) = 0xff;
        *(undefined1 *)(puVar6 + 0x46) = 0xff;
        *(undefined1 *)(puVar6 + 0x4a) = 0xff;
        *(undefined1 *)(puVar6 + 0x4e) = 0xff;
        *(undefined1 *)(puVar6 + 0x52) = 0xff;
        *(undefined1 *)(puVar6 + 0x56) = 0xff;
        *(undefined1 *)(puVar6 + 0x5a) = 0xff;
        *(undefined1 *)(puVar6 + 0x5e) = 0xff;
        *(undefined1 *)(puVar6 + 0x62) = 0xff;
        *(undefined1 *)(puVar6 + 0x66) = 0xff;
        *(undefined1 *)(puVar6 + 0x6a) = 0xff;
        *(undefined1 *)(puVar6 + 0x6e) = 0xff;
        *(undefined1 *)(puVar6 + 0x72) = 0xff;
        *(undefined1 *)(puVar6 + 0x76) = 0xff;
        *(undefined1 *)(puVar6 + 0x7a) = 0xff;
        *(undefined1 *)(puVar6 + 0x7e) = 0xff;
        *(undefined1 *)(puVar6 + 0x82) = 0xff;
        if (puVar6 == (undefined8 *)0x0) {
          return 0x26;
        }
        puVar6[3] = local_48;
        puVar6[4] = param_1;
        *(undefined4 *)(puVar6 + 0x87) = 0x1000;
        lVar4 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x1000,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                              ,0x1ff,0,0);
        puVar6[0x86] = lVar4;
        if (lVar4 == 0) {
          return 0x26;
        }
        uVar7 = 0;
        pcVar8 = (char *)((long)puVar6 + 0x31);
        do {
          if ((pcVar8[-1] == '\0') && (*pcVar8 == '\0')) {
            *(undefined4 *)((long)puVar6 + uVar7 * 0x20 + 0x34) = 0xffffffff;
            goto LAB_1005568ec;
          }
          uVar7 = uVar7 + 1;
          pcVar8 = pcVar8 + 0x20;
        } while (uVar7 < 0x20);
        uVar7 = 0;
        pcVar8 = (char *)(puVar6 + 6);
        do {
          if (*pcVar8 == -1) {
            *pcVar8 = '\0';
            *(undefined1 *)((long)puVar6 + uVar7 * 0x20 + 0x31) = 0;
            *(undefined4 *)((long)puVar6 + uVar7 * 0x20 + 0x34) = 0xffffffff;
            puVar6[uVar7 * 4 + 8] = 0;
            puVar6[uVar7 * 4 + 9] = 0;
            puVar6[uVar7 * 4 + 7] = 0;
            break;
          }
          uVar7 = uVar7 + 1;
          pcVar8 = pcVar8 + 0x20;
        } while (uVar7 < 0x20);
LAB_1005568ec:
        FUN_1005dbee4(param_1[7]);
        lVar4 = param_1[2];
        *puVar6 = param_1 + 1;
        puVar6[1] = lVar4;
        param_1[2] = (long)puVar6;
        *(undefined8 **)puVar6[1] = puVar6;
        FUN_1005dbf14(param_1[7]);
        plVar9 = param_1 + 4;
        while (plVar9 = (long *)*plVar9, plVar9 != param_1 + 4) {
          plVar10 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + -1;
          }
          uVar5 = (**(code **)(*plVar10 + 0x28))(plVar10,puVar6);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
      }
      else {
        FUN_100617cc0(*param_1);
        *param_1 = -1;
      }
    }
  }
  local_4c = 0;
  uVar5 = FUN_1005dba24(&local_4c);
  if ((int)uVar5 == 0) {
    local_4c = local_4c - (int)param_1[8];
    plVar9 = param_1 + 4;
    for (plVar10 = (long *)*plVar9; plVar10 != plVar9; plVar10 = (long *)*plVar10) {
      plVar1 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + -1;
      }
      local_50[0] = 0;
      while( true ) {
        uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,local_50);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (((char)local_50[0] == -1) ||
           (iVar3 = FUN_1005564b0(param_1,local_50,local_4c), iVar3 == 0)) break;
        local_58 = 0;
        local_60 = param_1;
        uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_60);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
    }
    FUN_1005dbee4(param_1[7]);
    plVar10 = (long *)param_1[1];
    while (plVar1 = plVar10, plVar1 != param_1 + 1) {
      plVar10 = (long *)*plVar1;
      uVar5 = FUN_100557190(plVar1);
      if ((int)uVar5 != 0) {
LAB_100556ab0:
        *(uint *)((long)plVar1 + 0x2c) = *(uint *)((long)plVar1 + 0x2c) | 1;
        return uVar5;
      }
      uVar5 = FUN_100557478(plVar1);
      if (((int)uVar5 != 0) && ((int)uVar5 != 0x2d)) goto LAB_100556ab0;
      if ((*(byte *)((long)plVar1 + 0x2c) & 1) != 0) {
        for (plVar11 = (long *)*plVar9; plVar11 != plVar9; plVar11 = (long *)*plVar11) {
          plVar2 = (long *)0x0;
          if (plVar11 != (long *)0x0) {
            plVar2 = plVar11 + -1;
          }
          uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        plVar11 = (long *)plVar1[1];
        *plVar11 = *plVar1;
        *(long **)(*plVar1 + 8) = plVar11;
        *plVar1 = (long)plVar1;
        plVar1[1] = (long)plVar1;
        FUN_1005563fc(plVar1);
      }
    }
    FUN_1005dbf14(param_1[7]);
    uVar5 = 0;
  }
  return uVar5;
}




undefined8 FUN_100556ad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100557190();
  if ((int)uVar1 == 0) {
    uVar2 = FUN_100557478(param_1);
    uVar1 = 0;
    if (((int)uVar2 != 0) && ((int)uVar2 != 0x2d)) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
      uVar1 = uVar2;
    }
  }
  else {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  }
  return uVar1;
}




undefined8 FUN_100556b34(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_2 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    param_2[2] = *(long *)(param_1 + 0x28);
    plVar2 = param_2 + 1;
    *plVar2 = param_1 + 0x20;
    *(long **)(param_1 + 0x28) = plVar2;
    *(long **)param_2[2] = plVar2;
    plVar2 = (long *)(param_1 + 8);
    do {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)(param_1 + 8)) {
        return 0;
      }
      uVar1 = (**(code **)(*param_2 + 0x28))(param_2,plVar2);
    } while ((int)uVar1 == 0);
  }
  return uVar1;
}




undefined8 FUN_100556bb8(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  int local_44;
  
  local_44 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_1005dbee4(uVar2);
  uVar1 = FUN_1005dba24(&local_44);
  if ((int)uVar1 == 0) {
    *(int *)(param_2 + 4) = local_44 - *(int *)(param_1 + 0x40);
    plVar3 = (long *)(param_1 + 8);
    plVar4 = (long *)*plVar3;
    if (plVar4 == plVar3) {
      uVar1 = 0;
    }
    else {
      do {
        if (((param_3 == (long *)0x0) || (plVar4 == param_3)) &&
           (uVar1 = FUN_100556c74(plVar4,param_2), (int)uVar1 != 0)) goto LAB_100556c50;
        plVar4 = (long *)*plVar4;
      } while (plVar4 != plVar3);
      uVar1 = 0;
    }
  }
LAB_100556c50:
  FUN_1005dbf14(uVar2);
  return uVar1;
}




undefined8 FUN_100556c74(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  long *plVar8;
  uint *puVar9;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    uVar4 = 0;
    pcVar7 = (char *)(param_1 + 0x30);
    do {
      if (*pcVar7 == (char)param_2[2]) {
        bVar3 = pcVar7[1] == *(char *)((long)param_2 + 9);
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (((*(uint *)(pcVar7 + 4) == 0xffffffff) ||
            (*(uint *)(pcVar7 + 4) < param_2[1] - *(int *)(pcVar7 + 8) &&
             *(int *)(pcVar7 + 0x18) == 0)) &&
           (*(int *)(pcVar7 + 0x18) - *(int *)(pcVar7 + 0x1c) < 0x100000)) {
          lVar1 = param_1 + (uVar4 & 0xffffffff) * 0x20;
          plVar8 = (long *)(lVar1 + 0x40);
          lVar5 = *plVar8;
          if (lVar5 == 0) {
            uVar6 = *param_2;
            *(uint *)(lVar1 + 0x3c) = uVar6;
            lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar6,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                                  ,0x255,0,0);
            *plVar8 = lVar5;
            if (lVar5 == 0) {
              return 0x26;
            }
          }
          param_1 = param_1 + (uVar4 & 0xffffffff) * 0x20;
          puVar9 = (uint *)(param_1 + 0x48);
          uVar6 = *puVar9;
          uVar2 = *param_2;
          if (*(uint *)(lVar1 + 0x3c) < uVar2 + uVar6) {
            uVar6 = (uVar2 + uVar6) * 2;
            *(uint *)(lVar1 + 0x3c) = uVar6;
            lVar5 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar5,uVar6,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                                  ,0x263,0);
            *plVar8 = lVar5;
            if (lVar5 == 0) {
              return 0x26;
            }
            uVar6 = *puVar9;
            uVar2 = *param_2;
          }
          _memcpy((void *)(lVar5 + (ulong)uVar6),param_2,(ulong)uVar2);
          *puVar9 = *puVar9 + *param_2;
          *(uint *)(param_1 + 0x38) = param_2[1];
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
      pcVar7 = pcVar7 + 0x20;
    } while (uVar4 < 0x20);
  }
  return 0;
}




undefined8 FUN_100556e2c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x20);
  while( true ) {
    if (plVar4 == (long *)(param_1 + 0x20)) {
      return 0;
    }
    plVar1 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + -1;
    }
    uVar2 = (**(code **)*plVar1)(plVar1);
    if ((uVar2 == *(byte *)(param_2 + 8)) &&
       (uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3), (int)uVar3 != 0)) break;
    plVar4 = (long *)*plVar4;
  }
  return uVar3;
}




undefined8 FUN_100556ecc(long param_1,uint param_2,uint param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 uStack_5d;
  char local_5c;
  undefined1 local_5b;
  undefined2 local_5a;
  undefined2 uStack_58;
  
  uStack_5d = 0;
  local_68 = 0x12;
  local_60 = 0;
  local_5f = 0;
  local_5e = 0;
  local_5a = (undefined2)param_4;
  uStack_58 = (undefined2)((uint)param_4 >> 0x10);
  plVar5 = *(long **)(param_1 + 8);
  local_5c = (char)param_2;
  local_5b = (char)param_3;
  do {
    if (plVar5 == (long *)(param_1 + 8)) {
      return 0;
    }
    if ((param_5 == 0) || (plVar5 == (long *)param_5)) {
      uVar1 = FUN_100556c74(plVar5,&local_68);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar2 = 0;
      pbVar3 = (byte *)(plVar5 + 6);
      do {
        if ((*pbVar3 == param_2) && (pbVar3[1] == param_3)) {
          if (param_4 == 0) {
            *pbVar3 = 0xff;
          }
          else {
            *(int *)((long)plVar5 + uVar2 * 0x20 + 0x34) = param_4;
          }
          goto LAB_100556fdc;
        }
        uVar2 = uVar2 + 1;
        pbVar3 = pbVar3 + 0x20;
      } while (uVar2 < 0x20);
      uVar2 = 0;
      pcVar4 = (char *)(plVar5 + 6);
      do {
        if (*pcVar4 == -1) {
          *pcVar4 = (char)param_2;
          *(char *)((long)plVar5 + uVar2 * 0x20 + 0x31) = (char)param_3;
          *(int *)((long)plVar5 + uVar2 * 0x20 + 0x34) = param_4;
          plVar5[uVar2 * 4 + 8] = 0;
          plVar5[uVar2 * 4 + 9] = 0;
          plVar5[uVar2 * 4 + 7] = 0;
          break;
        }
        uVar2 = uVar2 + 1;
        pcVar4 = pcVar4 + 0x20;
      } while (uVar2 < 0x20);
    }
LAB_100556fdc:
    plVar5 = (long *)*plVar5;
  } while( true );
}




undefined8 FUN_100557008(long param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  pbVar1 = (byte *)(param_1 + 0x30);
  while ((*pbVar1 != param_2 || (pbVar1[1] != param_3))) {
    uVar3 = uVar3 + 1;
    pbVar1 = pbVar1 + 0x20;
    if (0x1f < uVar3) {
      lVar2 = 0;
      pcVar4 = (char *)(param_1 + 0x30);
      do {
        if (*pcVar4 == -1) {
          *pcVar4 = (char)param_2;
          param_1 = param_1 + lVar2 * 0x20;
          *(char *)(param_1 + 0x31) = (char)param_3;
          *(int *)(param_1 + 0x34) = param_4;
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          return 0;
        }
        lVar2 = lVar2 + 1;
        pcVar4 = pcVar4 + 0x20;
      } while ((uint)lVar2 < 0x20);
      return 0;
    }
  }
  if (param_4 != 0) {
    *(int *)(param_1 + uVar3 * 0x20 + 0x34) = param_4;
    return 0;
  }
  *pbVar1 = 0xff;
  return 0;
}




void FUN_1005570a4(long *param_1)

{
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_1014441b8 + 0x10);
  param_1[4] = 0;
  return;
}




long FUN_1005570c8(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  _bzero((void *)(param_1 + 0x30),0x40c);
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined1 *)(param_1 + 0x50) = 0xff;
  *(undefined1 *)(param_1 + 0x70) = 0xff;
  *(undefined1 *)(param_1 + 0x90) = 0xff;
  *(undefined1 *)(param_1 + 0xb0) = 0xff;
  *(undefined1 *)(param_1 + 0xd0) = 0xff;
  *(undefined1 *)(param_1 + 0xf0) = 0xff;
  *(undefined1 *)(param_1 + 0x110) = 0xff;
  *(undefined1 *)(param_1 + 0x130) = 0xff;
  *(undefined1 *)(param_1 + 0x150) = 0xff;
  *(undefined1 *)(param_1 + 0x170) = 0xff;
  *(undefined1 *)(param_1 + 400) = 0xff;
  *(undefined1 *)(param_1 + 0x1b0) = 0xff;
  *(undefined1 *)(param_1 + 0x1d0) = 0xff;
  *(undefined1 *)(param_1 + 0x1f0) = 0xff;
  *(undefined1 *)(param_1 + 0x210) = 0xff;
  *(undefined1 *)(param_1 + 0x230) = 0xff;
  *(undefined1 *)(param_1 + 0x250) = 0xff;
  *(undefined1 *)(param_1 + 0x270) = 0xff;
  *(undefined1 *)(param_1 + 0x290) = 0xff;
  *(undefined1 *)(param_1 + 0x2b0) = 0xff;
  *(undefined1 *)(param_1 + 0x2d0) = 0xff;
  *(undefined1 *)(param_1 + 0x2f0) = 0xff;
  *(undefined1 *)(param_1 + 0x310) = 0xff;
  *(undefined1 *)(param_1 + 0x330) = 0xff;
  *(undefined1 *)(param_1 + 0x350) = 0xff;
  *(undefined1 *)(param_1 + 0x370) = 0xff;
  *(undefined1 *)(param_1 + 0x390) = 0xff;
  *(undefined1 *)(param_1 + 0x3b0) = 0xff;
  *(undefined1 *)(param_1 + 0x3d0) = 0xff;
  *(undefined1 *)(param_1 + 0x3f0) = 0xff;
  *(undefined1 *)(param_1 + 0x410) = 0xff;
  return param_1;
}




undefined8 FUN_100557190(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  int local_68;
  int local_64;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    puVar11 = *(uint **)(param_1 + 0x430);
    while( true ) {
      uVar7 = 0;
      bVar4 = true;
      while (uVar7 < 0xc) {
        iVar5 = FUN_100617d9c(*(undefined8 *)(param_1 + 0x18),(long)puVar11 + (ulong)uVar7,
                              0xc - uVar7,&local_64);
        if ((iVar5 != 0) && (iVar5 != 0x2d)) goto LAB_100557430;
        uVar7 = local_64 + uVar7;
        if (uVar7 == 0) {
          return 0;
        }
        if (iVar5 == 0x2d) {
          FUN_1005dbaa8(1);
          bVar4 = false;
        }
      }
      uVar7 = *puVar11;
      if (0x100000 < uVar7) break;
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x438);
        if (((int)uVar7 <= iVar5) || (0xfffff < iVar5)) break;
        *(int *)(param_1 + 0x438) = iVar5 << 1;
        puVar11 = (uint *)FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                        *(undefined8 *)(param_1 + 0x430),iVar5 << 1,
                                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                                        ,0x322,0);
        *(uint **)(param_1 + 0x430) = puVar11;
        if (puVar11 == (uint *)0x0) {
          return 0x26;
        }
        uVar7 = *puVar11;
      }
      if (iVar5 < (int)uVar7) {
        return 0x1c;
      }
      uVar12 = 0;
      iVar5 = 1000;
      while( true ) {
        iVar6 = (uVar7 - 0xc) - uVar12;
        if (uVar7 - 0xc < uVar12 || iVar6 == 0) break;
        local_68 = 0;
        iVar6 = FUN_100617d9c(*(undefined8 *)(param_1 + 0x18),(long)puVar11 + (ulong)uVar12 + 0xc,
                              iVar6,&local_68);
        uVar12 = local_68 + uVar12;
        if (iVar6 == 0x2d) {
          FUN_1005dbaa8(1);
          bVar4 = false;
          iVar5 = iVar5 + -1;
        }
        else if ((iVar5 < 2) || (iVar5 = iVar5 + -1, iVar6 != 0)) goto LAB_100557430;
      }
      if ((char)puVar11[2] == '\0') {
        if (*(char *)((long)puVar11 + 9) == '\0') {
          uVar9 = 0;
          cVar3 = *(char *)((long)puVar11 + 0xd);
          iVar5 = *(int *)((long)puVar11 + 0xe);
          pcVar10 = (char *)(param_1 + 0x30);
          do {
            if ((*pcVar10 == (char)puVar11[3]) && (pcVar10[1] == cVar3)) {
              if (iVar5 == 0) {
                *pcVar10 = -1;
              }
              else {
                *(int *)(param_1 + uVar9 * 0x20 + 0x34) = iVar5;
              }
              goto LAB_100557418;
            }
            uVar9 = uVar9 + 1;
            pcVar10 = pcVar10 + 0x20;
          } while (uVar9 < 0x20);
          uVar9 = 0;
          pcVar10 = (char *)(param_1 + 0x30);
          do {
            if (*pcVar10 == -1) {
              *pcVar10 = (char)puVar11[3];
              lVar1 = param_1 + uVar9 * 0x20;
              *(char *)(lVar1 + 0x31) = cVar3;
              *(int *)(lVar1 + 0x34) = iVar5;
              *(undefined8 *)(lVar1 + 0x40) = 0;
              *(undefined8 *)(lVar1 + 0x48) = 0;
              *(undefined8 *)(lVar1 + 0x38) = 0;
              break;
            }
            uVar9 = uVar9 + 1;
            pcVar10 = pcVar10 + 0x20;
          } while (uVar9 < 0x20);
        }
      }
      else {
        plVar13 = (long *)(*(long *)(param_1 + 0x20) + 0x20);
        for (plVar14 = (long *)*plVar13; plVar14 != plVar13; plVar14 = (long *)*plVar14) {
          plVar2 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            plVar2 = plVar14 + -1;
          }
          uVar7 = (**(code **)*plVar2)(plVar2);
          if ((uVar7 == (byte)puVar11[2]) &&
             (uVar8 = (**(code **)(*plVar2 + 0x20))(plVar2,puVar11,param_1), (int)uVar8 != 0)) {
            return uVar8;
          }
        }
      }
LAB_100557418:
      if (!bVar4) {
        return 0;
      }
    }
LAB_100557430:
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  }
  return 0;
}




undefined8 FUN_100557478(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int local_34;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    uVar7 = 0;
    uVar2 = *(uint *)(param_1 + 0x28);
    do {
      local_34 = 0;
      lVar1 = param_1 + (ulong)uVar2 * 0x20;
      puVar8 = (uint *)(lVar1 + 0x4c);
      uVar3 = *puVar8;
      uVar4 = *(uint *)(lVar1 + 0x48);
      uVar6 = uVar2;
      if (uVar4 != uVar3) {
        uVar5 = FUN_100617d0c(*(undefined8 *)(param_1 + 0x18),*(long *)(lVar1 + 0x40) + (ulong)uVar3
                              ,uVar4 - uVar3,&local_34);
        *puVar8 = *puVar8 + local_34;
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(uint *)(lVar1 + 0x48) = 0;
        *puVar8 = 0;
        uVar6 = *(uint *)(param_1 + 0x28);
      }
      uVar2 = 0;
      if (uVar6 + 1 < 0x20) {
        uVar2 = uVar6 + 1;
      }
      *(uint *)(param_1 + 0x28) = uVar2;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x20);
  }
  return 0;
}




undefined8 FUN_100557538(long param_1,long param_2,undefined4 *param_3)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = (char *)(param_1 + 0x30);
  do {
    if (*pcVar3 == *(char *)(param_2 + 8)) {
      bVar1 = pcVar3[1] == *(char *)(param_2 + 9);
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (((*(uint *)(pcVar3 + 4) == 0xffffffff) ||
          (*(uint *)(pcVar3 + 4) < (uint)(*(int *)(param_2 + 4) - *(int *)(pcVar3 + 8)) &&
           *(int *)(pcVar3 + 0x18) == 0)) &&
         (*(int *)(pcVar3 + 0x18) - *(int *)(pcVar3 + 0x1c) < 0x100000)) {
        *param_3 = (int)uVar2;
        return 1;
      }
    }
    uVar2 = uVar2 + 1;
    pcVar3 = pcVar3 + 0x20;
    if (0x1f < uVar2) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_1005575c4(undefined1 param_1 [16],undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  
  lVar4 = 0;
  uVar5 = 0;
  param_2[0x8f] = 0;
  param_2[0xab] = 0;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  *(undefined4 *)(param_2 + 0x91) = 0x3d23d70a;
  *(undefined4 *)((long)param_2 + 0x48c) = 0x3d75c28f;
  *(undefined4 *)(param_2 + 0x92) = 0x3da12d77;
  *(undefined4 *)((long)param_2 + 0x494) = 0x3dac48ae;
  *(undefined4 *)(param_2 + 0x93) = 0x3dba9c6c;
  *(undefined4 *)(param_2 + 0xa1) = 0;
  param_2[0xbe] = 0;
  param_2[0x82] = 0;
  param_2[0x81] = 0;
  param_2[0x80] = 0;
  param_2[0x7f] = 0;
  *(undefined4 *)((long)param_2 + 0x49c) = 0x3dcd17d0;
  *(undefined4 *)(param_2 + 0x94) = 0x3de4ef4f;
  *(undefined4 *)((long)param_2 + 0x4a4) = 0x3e01d868;
  *(undefined4 *)(param_2 + 0x95) = 0x3e15aed2;
  fVar14 = param_1._0_4_;
  auVar13._0_8_ = CONCAT44((int)(fVar14 * 0.11178457),(int)(fVar14 * 0.100143075));
  auVar13._8_4_ = (int)(fVar14 * 0.12680209);
  auVar13._12_4_ = (int)(fVar14 * 0.1461747);
  iVar6 = (int)(fVar14 * 0.06);
  param_2[0x98] = auVar13._0_8_;
  auVar12 = NEON_ext(auVar13,auVar13,8,1);
  param_2[0x99] = auVar12._0_8_;
  *(int *)((long)param_2 + 0x4ac) = (int)(fVar14 * 0.04);
  *(int *)(param_2 + 0x9a) = (int)(fVar14 * 0.04);
  *(int *)((long)param_2 + 0x4b4) = (int)(fVar14 * 0.0787);
  *(int *)(param_2 + 0x97) = (int)(fVar14 * 0.084123);
  *(int *)((long)param_2 + 0x4bc) = (int)(fVar14 * 0.09111866);
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  *(int *)(param_2 + 0x96) = iVar6;
  *(int *)((long)param_2 + 0x4d4) = iVar6;
  *(int *)(param_2 + 0x9b) = (int)(fVar14 * 0.0787);
  *(int *)((long)param_2 + 0x4dc) = (int)(fVar14 * 0.084123);
  *(int *)(param_2 + 0x9c) = (int)(fVar14 * 0.09111866);
  *(undefined8 *)((long)param_2 + 0x4e4) = auVar13._0_8_;
  *(long *)((long)param_2 + 0x4ec) = auVar12._0_8_;
  param_2[0x7e] = 0;
  param_2[0x7d] = 0;
  param_2[0x7c] = 0;
  param_2[0x7b] = 0;
  *(undefined4 *)(param_2 + 0xac) = 0x3ba3d70a;
  auVar12._0_8_ = CONCAT44((int)(fVar14 * 0.0079499995),(int)(fVar14 * 0.005));
  auVar12._8_4_ = (int)(fVar14 * 0.0126404995);
  auVar12._12_4_ = (int)(fVar14 * 0.020098394);
  *(undefined4 *)((long)param_2 + 0x564) = 0x3c0240b7;
  *(undefined4 *)(param_2 + 0xad) = 0x3c4f1a19;
  *(undefined4 *)((long)param_2 + 0x56c) = 0x3ca4a563;
  *(undefined8 *)((long)param_2 + 0x57c) = auVar12._0_8_;
  auVar13 = NEON_ext(auVar12,auVar12,8,1);
  *(long *)((long)param_2 + 0x584) = auVar13._0_8_;
  auVar9._0_8_ = CONCAT44((int)(fVar14 * 0.0079499995) + -1,(int)(fVar14 * 0.005) + -1);
  auVar9._8_4_ = auVar12._8_4_ + -1;
  auVar9._12_4_ = auVar12._12_4_ + -1;
  *(undefined8 *)((long)param_2 + 0x5a4) = auVar9._0_8_;
  auVar13 = NEON_ext(auVar9,auVar9,8,1);
  *(long *)((long)param_2 + 0x5ac) = auVar13._0_8_;
  *(undefined4 *)(param_2 + 0xae) = 0x3d02e4c3;
  *(int *)((long)param_2 + 0x58c) = (int)(fVar14 * 0.031956445);
  *(int *)((long)param_2 + 0x5b4) = (int)(fVar14 * 0.031956445) + -1;
  *(undefined4 *)((long)param_2 + 0x574) = 0x3d501eef;
  *(int *)(param_2 + 0xb2) = (int)(fVar14 * 0.05081075);
  *(int *)(param_2 + 0xb7) = (int)(fVar14 * 0.05081075) + -1;
  *(undefined4 *)(param_2 + 0xaf) = 0x3da574c1;
  *(int *)((long)param_2 + 0x594) = (int)(fVar14 * 0.0807891);
  *(int *)((long)param_2 + 0x5bc) = (int)(fVar14 * 0.0807891) + -1;
  *(undefined4 *)(param_2 + 0xba) = 0x3bc154ca;
  *(undefined4 *)((long)param_2 + 0x5d4) = 0x3bfc5048;
  *(int *)(param_2 + 0xbb) = (int)(fVar14 * 0.0059);
  *(int *)(param_2 + 0xbf) = (int)(fVar14 * 0.0059) + -1;
  *(int *)((long)param_2 + 0x5dc) = (int)(fVar14 * 0.0077);
  *(int *)((long)param_2 + 0x5fc) = (int)(fVar14 * 0.0077) + -1;
  fVar8 = fVar14 * 0.0015;
  fVar11 = 0.061;
  while( true ) {
    iVar7 = (int)(fVar11 * fVar14 + 0.5);
    iVar6 = *(int *)((long)param_2 + lVar4 + 0x3f8) + -1;
    *(int *)((long)param_2 + lVar4 + 0x350) = iVar7;
    *(uint *)((long)param_2 + lVar4 + 0x418) = iVar6 + iVar7 & uVar5;
    *(float *)((long)param_2 + lVar4 + 0x330) = fVar11;
    *(int *)((long)param_2 + lVar4 + 0x390) = (int)(fVar8 + 0.5);
    *(uint *)((long)param_2 + lVar4 + 0x458) = iVar6 + (int)(fVar8 + 0.5) & uVar5;
    if (lVar4 == 0x1c) break;
    fVar8 = fVar8 * 1.47;
    fVar11 = fVar11 * 1.32;
    uVar5 = *(uint *)((long)param_2 + lVar4 + 0x3dc);
    lVar4 = lVar4 + 4;
  }
  *(undefined1 *)(param_2 + 0x7a) = 0;
  *(undefined1 *)((long)param_2 + 0x7c) = 0;
  *(undefined1 *)((long)param_2 + 0x3d1) = 0;
  *(undefined1 *)((long)param_2 + 0x7d) = 0;
  *(undefined1 *)((long)param_2 + 0x3d2) = 0;
  *(undefined1 *)((long)param_2 + 0x7e) = 0;
  auVar13 = *(undefined1 (*) [16])(param_2 + 0x6a);
  *(undefined1 *)((long)param_2 + 0x3d3) = 0;
  *(undefined1 *)((long)param_2 + 0x7f) = 0;
  *(undefined1 *)((long)param_2 + 0x3d4) = 0;
  param_2[0x6e] = auVar13._0_8_;
  auVar13 = NEON_ext(auVar13,auVar13,8,1);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x6c);
  param_2[0x6f] = auVar13._0_8_;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined4 *)((long)param_2 + 900) = *(undefined4 *)((long)param_2 + 0x364);
  *(undefined1 *)((long)param_2 + 0x3d5) = 0;
  *(undefined1 *)((long)param_2 + 0x81) = 0;
  *(undefined4 *)(param_2 + 0x71) = *(undefined4 *)(param_2 + 0x6d);
  *(undefined1 *)((long)param_2 + 0x3d6) = 0;
  *(undefined1 *)((long)param_2 + 0x82) = 0;
  *(undefined4 *)((long)param_2 + 0x38c) = *(undefined4 *)((long)param_2 + 0x36c);
  *(undefined1 *)((long)param_2 + 0x3d7) = 0;
  *(undefined1 *)((long)param_2 + 0x83) = 0;
  uVar3 = FUN_100557d64(param_1,param_2,param_3,param_2 + 0x66);
  if (((((int)uVar3 == 0) &&
       (auVar13 = FUN_100557e4c(param_1,param_2,param_2 + 0x91), uVar3 = auVar13._0_8_,
       auVar13._0_4_ == 0)) &&
      (uVar3 = FUN_100557f30(param_1,param_2,auVar13._8_8_,param_2 + 0xba), (int)uVar3 == 0)) &&
     (uVar3 = FUN_1005580a8(*(undefined4 *)(param_2 + 0xaf),param_1,param_2), (int)uVar3 == 0)) {
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    lVar4 = (long)param_2 + 0x113;
    uVar2 = (long)param_2 + 0x1b3U & 0xfffffffffffffff0;
    auVar10[8] = (byte)lVar4 & 0xf0;
    auVar10._0_8_ = uVar2;
    auVar10[9] = (undefined1)((ulong)lVar4 >> 8);
    auVar10[10] = (undefined1)((ulong)lVar4 >> 0x10);
    auVar10[0xb] = (undefined1)((ulong)lVar4 >> 0x18);
    auVar10[0xc] = (undefined1)((ulong)lVar4 >> 0x20);
    auVar10[0xd] = (undefined1)((ulong)lVar4 >> 0x28);
    auVar10[0xe] = (undefined1)((ulong)lVar4 >> 0x30);
    auVar10[0xf] = (undefined1)((ulong)lVar4 >> 0x38);
    param_2[0x42] = auVar10._8_8_;
    param_2[0x41] = uVar2;
    lVar4 = 0;
    do {
      *(undefined4 *)((long)param_2 + lVar4 + 0x218) = 0x3ea3d70a;
      *(undefined4 *)((long)param_2 + lVar4 + 0x238) = 0x3ea3d70a;
      *(undefined4 *)((long)param_2 + lVar4 + 0x278) = 0x3ea3d70a;
      *(undefined4 *)((long)param_2 + lVar4 + 600) = 0x3ea3d70a;
      *(undefined4 *)((long)param_2 + lVar4 + 0x5c) = 0x3ecccccd;
      *(undefined4 *)((long)param_2 + lVar4 + 0xe4) = 0x3ecccccd;
      *(undefined4 *)((long)param_2 + lVar4 + 0xc4) = 0x3ecccccd;
      *(undefined4 *)((long)param_2 + lVar4 + 0x84) = 0x3ecccccd;
      lVar1 = lVar4 + 4;
      *(undefined4 *)((long)param_2 + lVar4 + 0xa4) = 0x3f19999a;
      lVar4 = lVar1;
    } while (lVar1 != 0x20);
    *(undefined1 *)((long)param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x53) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x54) = 0x3f800000;
    *(undefined4 *)((long)param_2 + 0x2a4) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x55) = 0x3f800000;
    *(undefined4 *)((long)param_2 + 0x2dc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x5c) = 0x3f800000;
    *(undefined4 *)((long)param_2 + 0x2e4) = 0x3f800000;
    *(undefined4 *)(param_2 + 4) = 0x3f7ae148;
    *(undefined4 *)(param_2 + 5) = 0x3f7ae148;
    *(undefined4 *)((long)param_2 + 0x2c) = 0x3f7ae148;
    *(undefined4 *)(param_2 + 6) = 0x3f7ae148;
    *(undefined4 *)((long)param_2 + 0x4c) = 0;
    *(undefined8 *)((long)param_2 + 0x44) = 0;
    *(undefined8 *)((long)param_2 + 0x3c) = 0;
    *(undefined4 *)((long)param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 10) = 0;
    *(undefined4 *)((long)param_2 + 0x2d4) = 0x3e800000;
    *(undefined4 *)(param_2 + 0x5d) = 0x3f2147ae;
    *(undefined4 *)(param_2 + 0x56) = 0;
    *(undefined1 *)((long)param_2 + 0x2b4) = 0;
    *(undefined4 *)((long)param_2 + 0x2ac) = 0;
    *(undefined4 *)(param_2 + 0x59) = 0;
    *(undefined8 *)((long)param_2 + 0x2cc) = 0;
    *(undefined8 *)((long)param_2 + 0x2bd) = 0;
    param_2[0x57] = 0;
    FUN_100558174(param_2);
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_100557af4(long param_1)

{
  *(undefined4 *)(param_1 + 0x5a0) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  return;
}




void FUN_100557b14(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  float fVar5;
  float fVar6;
  
  *(float *)(param_5 + 0x48c) = param_1;
  iVar1 = (int)(param_1 * param_4);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(int *)(param_5 + 0x4b0) = iVar1;
  fVar5 = param_2 * param_3 * param_3;
  fVar6 = fVar5 * param_3;
  fVar3 = param_2 * param_3 + param_1;
  fVar5 = fVar5 + param_1;
  fVar4 = fVar6 + param_1;
  *(float *)(param_5 + 0x490) = param_2 + param_1;
  *(float *)(param_5 + 0x494) = fVar3;
  *(float *)(param_5 + 0x498) = fVar5;
  *(float *)(param_5 + 0x49c) = fVar4;
  auVar2._0_8_ = CONCAT44((int)(fVar3 * param_4),(int)((param_2 + param_1) * param_4));
  auVar2._8_4_ = (int)(fVar5 * param_4);
  auVar2._12_4_ = (int)(fVar4 * param_4);
  *(undefined8 *)(param_5 + 0x4b4) = auVar2._0_8_;
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  *(long *)(param_5 + 0x4bc) = auVar2._0_8_;
  fVar6 = fVar6 * param_3;
  fVar3 = fVar6 + param_1;
  *(float *)(param_5 + 0x4a0) = fVar3;
  *(int *)(param_5 + 0x4c4) = (int)(fVar3 * param_4);
  fVar6 = fVar6 * param_3;
  fVar3 = fVar6 + param_1;
  *(float *)(param_5 + 0x4a4) = fVar3;
  *(int *)(param_5 + 0x4c8) = (int)(fVar3 * param_4);
  param_1 = fVar6 * param_3 + param_1;
  *(float *)(param_5 + 0x4a8) = param_1;
  *(int *)(param_5 + 0x4cc) = (int)(param_1 * param_4);
  return;
}




void FUN_100557bd4(float param_1,float param_2,float param_3,long param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(float *)(param_4 + 0x560) = param_1;
  fVar3 = param_1 * param_2;
  fVar5 = fVar3 * param_2;
  fVar6 = fVar5 * param_2;
  *(int *)(param_4 + 0x57c) = (int)(param_1 * param_3);
  *(float *)(param_4 + 0x564) = fVar3;
  *(int *)(param_4 + 0x580) = (int)(fVar3 * param_3);
  *(float *)(param_4 + 0x568) = fVar5;
  *(int *)(param_4 + 0x584) = (int)(fVar5 * param_3);
  *(float *)(param_4 + 0x56c) = fVar6;
  *(int *)(param_4 + 0x588) = (int)(fVar6 * param_3);
  fVar4 = fVar6 * param_2;
  auVar2._0_8_ = CONCAT44((int)(fVar3 * param_3) + -1,(int)(param_1 * param_3) + -1);
  auVar2._8_4_ = (int)(fVar5 * param_3) + -1;
  auVar2._12_4_ = (int)(fVar6 * param_3) + -1;
  *(undefined8 *)(param_4 + 0x5a4) = auVar2._0_8_;
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  *(long *)(param_4 + 0x5ac) = auVar2._0_8_;
  *(float *)(param_4 + 0x570) = fVar4;
  *(int *)(param_4 + 0x58c) = (int)(fVar4 * param_3);
  fVar3 = fVar4 * param_2;
  *(int *)(param_4 + 0x5b4) = (int)(fVar4 * param_3) + -1;
  *(float *)(param_4 + 0x574) = fVar3;
  *(int *)(param_4 + 0x590) = (int)(fVar3 * param_3);
  *(int *)(param_4 + 0x5b8) = (int)(fVar3 * param_3) + -1;
  *(float *)(param_4 + 0x578) = fVar3 * param_2;
  iVar1 = (int)(fVar3 * param_2 * param_3);
  *(int *)(param_4 + 0x594) = iVar1;
  *(int *)(param_4 + 0x5bc) = iVar1 + -1;
  return;
}




void FUN_100557c98(float param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x5d0) = 0x3bc154ca;
  *(undefined4 *)(param_2 + 0x5d4) = 0x3bfc5048;
  *(int *)(param_2 + 0x5d8) = (int)(param_1 * 0.0059);
  *(int *)(param_2 + 0x5f8) = (int)(param_1 * 0.0059) + -1;
  *(int *)(param_2 + 0x5dc) = (int)(param_1 * 0.0077);
  *(int *)(param_2 + 0x5fc) = (int)(param_1 * 0.0077) + -1;
  return;
}




void FUN_100557cec(float param_1,float param_2,float param_3,float param_4,float param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  lVar2 = 0;
  fVar4 = param_3 * param_5;
  do {
    lVar1 = param_6 + lVar2;
    iVar3 = (int)(param_1 * param_5 + 0.5);
    *(float *)(lVar1 + 0x330) = param_1;
    param_1 = param_1 * param_2;
    *(int *)(lVar1 + 0x350) = iVar3;
    *(uint *)(lVar1 + 0x418) = (iVar3 + *(int *)(lVar1 + 0x3f8)) - 1U & *(uint *)(lVar1 + 0x3d8);
    *(int *)(lVar1 + 0x390) = (int)(fVar4 + 0.5);
    *(uint *)(lVar1 + 0x458) =
         ((int)(fVar4 + 0.5) + *(int *)(lVar1 + 0x3f8)) - 1U & *(uint *)(lVar1 + 0x3d8);
    lVar2 = lVar2 + 4;
    fVar4 = fVar4 * param_4;
  } while (lVar2 != 0x20);
  return;
}




undefined8 FUN_100557d64(float param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float extraout_s0;
  float fVar5;
  
  FUN_100558488();
  uVar2 = _logf(0x40000000);
  lVar4 = 0;
  do {
    fVar5 = (float)_logf((float)((int)(*(float *)(param_4 + lVar4 * 4) * param_1) + 1),uVar2);
    iVar1 = 1 << (ulong)((int)(fVar5 / extraout_s0) + 1U & 0x1f);
    lVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 << 2,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                          ,0x8c,0);
    *(long *)(param_2 + 0x2f0 + lVar4 * 8) = lVar3;
    if (lVar3 == 0) {
      return 0x1197;
    }
    uVar2 = 0;
    lVar3 = param_2 + 0x2f0 + lVar4 * 4;
    *(int *)(lVar3 + 0xc0) = iVar1;
    *(int *)(lVar3 + 0xe8) = iVar1 + -1;
    *(undefined4 *)(lVar3 + 0x108) = 0;
    lVar4 = lVar4 + 1;
  } while (lVar4 < 8);
  return 0;
}




undefined8 FUN_100557e4c(float param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)_logf((float)((int)(((*(float *)(param_3 + 0x20) + 0.4) - *(float *)(param_3 + 4))
                                    * param_1) + 1));
  fVar5 = (float)_logf(0x40000000);
  iVar1 = 1 << (ulong)((int)(fVar4 / fVar5) + 1U & 0x1f);
  if (*(long *)(param_2 + 0x478) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_2 + 0x478),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0x10f);
  }
  *(undefined8 *)(param_2 + 0x478) = 0;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 << 2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                        ,0xa7,0);
  *(long *)(param_2 + 0x478) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1195;
  }
  else {
    uVar3 = 0;
    *(int *)(param_2 + 0x500) = iVar1;
    *(int *)(param_2 + 0x504) = iVar1 + -1;
  }
  return uVar3;
}




undefined8 FUN_100557f30(float param_1,long param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_2 + 0x5c0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_2 + 0x5c0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xfa);
  }
  *(undefined8 *)(param_2 + 0x5c0) = 0;
  if (*(long *)(param_2 + 0x5c8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_2 + 0x5c8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xfa);
  }
  *(undefined8 *)(param_2 + 0x5c8) = 0;
  fVar3 = (float)_logf(0x40000000);
  fVar4 = (float)_logf((float)((int)(*param_4 * param_1) + 1));
  iVar1 = 1 << (ulong)((int)(fVar4 / fVar3) + 1U & 0x1f);
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 << 2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                        ,0xbf,0);
  *(long *)(param_2 + 0x5c0) = lVar2;
  if (lVar2 != 0) {
    *(int *)(param_2 + 0x5e0) = iVar1;
    *(int *)(param_2 + 0x5e8) = iVar1 + -1;
    *(undefined4 *)(param_2 + 0x5f0) = 0;
    fVar4 = (float)_logf((float)((int)(param_4[1] * param_1) + 1));
    iVar1 = 1 << (ulong)((int)(fVar4 / fVar3) + 1U & 0x1f);
    lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 << 2,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                          ,0xbf,0);
    *(long *)(param_2 + 0x5c8) = lVar2;
    if (lVar2 != 0) {
      *(int *)(param_2 + 0x5e4) = iVar1;
      *(int *)(param_2 + 0x5ec) = iVar1 + -1;
      *(undefined4 *)(param_2 + 0x5f4) = 0;
      return 0;
    }
  }
  return 0x1194;
}




undefined8 FUN_1005580a8(float param_1,float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)_logf((float)((int)(param_1 * param_2) + 1));
  fVar5 = (float)_logf(0x40000000);
  iVar1 = 1 << (ulong)((int)(fVar4 / fVar5) + 1U & 0x1f);
  if (*(long *)(param_3 + 0x558) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_3 + 0x558),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0x105);
  }
  *(undefined8 *)(param_3 + 0x558) = 0;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 << 2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                        ,0xd6,0);
  *(long *)(param_3 + 0x558) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1196;
  }
  else {
    uVar3 = 0;
    *(int *)(param_3 + 0x598) = iVar1;
    *(int *)(param_3 + 0x59c) = iVar1 + -1;
  }
  return uVar3;
}




void FUN_100558174(long param_1)

{
  size_t sVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(void **)(param_1 + 0x2f0) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3b0);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 0x2f0),sVar1);
    }
  }
  if (*(void **)(param_1 + 0x2f8) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3b4);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 0x2f8),sVar1);
    }
  }
  if (*(void **)(param_1 + 0x300) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3b8);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 0x300),sVar1);
    }
  }
  if (*(void **)(param_1 + 0x308) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3bc);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 0x308),sVar1);
    }
  }
  if (*(void **)(param_1 + 0x310) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3c0);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 0x310),sVar1);
    }
  }
  if (*(void **)(param_1 + 0x318) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3c4);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 0x318),sVar1);
    }
  }
  if (*(void **)(param_1 + 800) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3c8);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 800),sVar1);
    }
  }
  if (*(void **)(param_1 + 0x328) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x3cc);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 0x328),sVar1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x500);
  if (0 < iVar2) {
    sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
    if (iVar2 - 1U == 0 || iVar2 < 1) {
      sVar1 = 4;
    }
    _bzero(*(void **)(param_1 + 0x478),sVar1);
  }
  iVar2 = *(int *)(param_1 + 0x598);
  if (0 < iVar2) {
    sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
    if (iVar2 - 1U == 0 || iVar2 < 1) {
      sVar1 = 4;
    }
    _bzero(*(void **)(param_1 + 0x558),sVar1);
  }
  iVar2 = *(int *)(param_1 + 0x5e0);
  if (0 < iVar2) {
    sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
    if (iVar2 - 1U == 0 || iVar2 < 1) {
      sVar1 = 4;
    }
    _bzero(*(void **)(param_1 + 0x5c0),sVar1);
  }
  iVar2 = *(int *)(param_1 + 0x5e4);
  if (0 < iVar2) {
    sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
    if (iVar2 - 1U == 0 || iVar2 < 1) {
      sVar1 = 4;
    }
    _bzero(*(void **)(param_1 + 0x5c8),sVar1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x208);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  _memset(*(void **)(param_1 + 0x210),0,0x60);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  return;
}




void FUN_100558388(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0x73);
    *param_1 = 0;
    param_1[1] = 0;
  }
  FUN_100558488(param_1);
  if (param_1[0x8f] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x8f],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0x10f);
  }
  param_1[0x8f] = 0;
  if (param_1[0xb8] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xb8],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xfa);
  }
  param_1[0xb8] = 0;
  if (param_1[0xb9] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xb9],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xfa);
  }
  param_1[0xb9] = 0;
  if (param_1[0xab] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xab],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0x105);
  }
  param_1[0xab] = 0;
  return;
}




void FUN_100558488(long param_1)

{
  if (*(long *)(param_1 + 0x2f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (*(long *)(param_1 + 0x2f8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2f8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  if (*(long *)(param_1 + 0x300) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x300),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  if (*(long *)(param_1 + 0x308) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x308),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (*(long *)(param_1 + 0x310) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x310),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 0x310) = 0;
  if (*(long *)(param_1 + 0x318) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x318),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 0x318) = 0;
  if (*(long *)(param_1 + 800) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 800),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(long *)(param_1 + 0x328) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x328),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xed);
  }
  *(undefined8 *)(param_1 + 0x328) = 0;
  return;
}




void FUN_100558604(long param_1)

{
  if (*(long *)(param_1 + 0x478) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x478),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0x10f);
  }
  *(undefined8 *)(param_1 + 0x478) = 0;
  return;
}




void FUN_10055864c(long param_1)

{
  if (*(long *)(param_1 + 0x5c0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x5c0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xfa);
  }
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  if (*(long *)(param_1 + 0x5c8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x5c8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0xfa);
  }
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  return;
}




void FUN_1005586c0(long param_1)

{
  if (*(long *)(param_1 + 0x558) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x558),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                  ,0x105);
  }
  *(undefined8 *)(param_1 + 0x558) = 0;
  return;
}




int FUN_100558708(undefined8 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)_logf((float)param_2);
  fVar2 = (float)_logf(0x40000000);
  return 1 << (ulong)((int)(fVar1 / fVar2) + 1U & 0x1f);
}




undefined8 FUN_100558748(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((int)param_1[2] == param_2) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 2) = param_2;
    if (*param_1 != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                    ,0x125);
    }
    lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2 * 4 + 0x10,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/external/dsps/sfx/foreverb/aSfxDsp.cpp"
                          ,0x128,0,0);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x1199;
    }
    else {
      uVar2 = 0;
      param_1[1] = lVar1 + 0xfU & 0xfffffffffffffff0;
    }
  }
  return uVar2;
}




void FUN_1005587fc(long param_1)

{
  size_t sVar1;
  int iVar2;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 8),sVar1);
    }
  }
  FUN_100558174(param_1);
  return;
}




void FUN_100558844(long param_1)

{
  size_t sVar1;
  int iVar2;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (0 < iVar2) {
      sVar1 = (ulong)(iVar2 - 1U) * 4 + 4;
      if (iVar2 - 1U == 0 || iVar2 < 1) {
        sVar1 = 4;
      }
      _bzero(*(void **)(param_1 + 8),sVar1);
    }
  }
  return;
}




void FUN_100558880(undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  uint *puVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  int iVar34;
  int iVar37;
  int iVar38;
  undefined1 auVar35 [12];
  int iVar39;
  undefined1 auVar36 [16];
  byte bVar40;
  byte bVar42;
  byte bVar43;
  float fVar41;
  byte bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float local_88 [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar25 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar25;
  FUN_100559330(param_3,param_7,param_6,param_4);
  lVar19 = 0;
  piVar22 = (int *)(param_3 + 0x4ac);
  do {
    piVar22[0x18] = (*piVar22 + *(int *)(param_3 + 0x508)) - 1U & *(uint *)(param_3 + 0x504);
    if (*piVar22 == piVar22[9]) {
      *(undefined1 *)(param_3 + 0x4f4 + lVar19) = 0;
    }
    else {
      *(undefined1 *)(param_3 + 0x4f4 + lVar19) = 1;
      piVar22[0x21] = (piVar22[9] + *(int *)(param_3 + 0x508)) - 1U & *(uint *)(param_3 + 0x504);
      piVar22[9] = *piVar22;
    }
    lVar19 = lVar19 + 1;
    piVar22 = piVar22 + 1;
  } while (lVar19 != 9);
  lVar20 = 0;
  lVar19 = 0;
  fVar26 = 1.0 / (float)(param_7 & 0xffffffff);
  do {
    lVar2 = param_3 + lVar20;
    *(uint *)(lVar2 + 0x418) =
         (*(int *)(lVar2 + 0x350) + *(int *)(lVar2 + 0x3f8)) - 1U & *(uint *)(lVar2 + 0x3d8);
    *(uint *)(lVar2 + 0x458) =
         (*(int *)(lVar2 + 0x390) + *(int *)(lVar2 + 0x3f8)) - 1U & *(uint *)(lVar2 + 0x3d8);
    lVar3 = param_3 + lVar19;
    if (*(int *)(lVar2 + 0x350) == *(int *)(lVar2 + 0x370)) {
      *(undefined1 *)(lVar3 + 0x3d0) = 0;
    }
    else {
      *(undefined1 *)(lVar3 + 0x3d0) = 1;
      *(uint *)(lVar2 + 0x438) =
           (*(int *)(lVar2 + 0x370) + *(int *)(lVar2 + 0x3f8)) - 1U & *(uint *)(lVar2 + 0x3d8);
      *(undefined4 *)(lVar2 + 0x370) = *(undefined4 *)(lVar2 + 0x350);
    }
    lVar4 = param_3 + lVar20;
    fVar27 = *(float *)(lVar4 + 0x218);
    *(float *)(lVar4 + 0x238) = fVar27;
    fVar28 = *(float *)(lVar4 + 600);
    if (fVar27 == fVar28) {
      *(float *)(lVar4 + 0x278) = fVar27;
    }
    else {
      if (*(char *)(lVar3 + 0x3d0) == '\0') {
        *(undefined1 *)(lVar3 + 0x3d0) = 1;
        lVar3 = param_3 + lVar20;
        *(uint *)(lVar3 + 0x438) =
             (*(int *)(lVar2 + 0x370) + *(int *)(lVar2 + 0x3f8)) - 1U & *(uint *)(lVar2 + 0x3d8);
        fVar28 = *(float *)(lVar3 + 600);
        fVar27 = *(float *)(lVar3 + 0x238);
      }
      else {
        lVar3 = param_3 + lVar19 * 4;
      }
      *(float *)(param_3 + lVar20 + 0x278) = fVar28;
      *(float *)(lVar3 + 600) = fVar27;
    }
    lVar2 = param_3 + lVar20;
    fVar28 = *(float *)(lVar2 + 0x5c);
    *(float *)(lVar2 + 0x84) = fVar28;
    *(float *)(lVar2 + 0xa4) = 1.0 - fVar28;
    if (fVar28 == *(float *)(lVar2 + 0xe4)) {
      *(undefined1 *)(param_3 + lVar19 + 0x7c) = 0;
    }
    else {
      *(undefined1 *)(param_3 + lVar19 + 0x7c) = 1;
      *(undefined4 *)(lVar2 + 0xc4) = *(undefined4 *)(lVar2 + 0xe4);
      *(undefined4 *)(lVar2 + 0xe4) = *(undefined4 *)(lVar2 + 0x84);
    }
    lVar19 = lVar19 + 1;
    lVar20 = lVar20 + 4;
  } while (lVar20 != 0x20);
  fVar28 = *(float *)(param_3 + 0x2b0);
  *(float *)(param_3 + 0x2b8) = fVar28;
  if (fVar28 == *(float *)(param_3 + 0x2c0)) {
    *(undefined1 *)(param_3 + 0x2b4) = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0x2b4) = 1;
    *(float *)(param_3 + 700) = *(float *)(param_3 + 0x2c0);
    *(float *)(param_3 + 0x2c0) = fVar28;
  }
  fVar28 = *(float *)(param_3 + 0x2ac);
  *(float *)(param_3 + 0x2c8) = fVar28;
  if (fVar28 == *(float *)(param_3 + 0x2d0)) {
    *(undefined1 *)(param_3 + 0x2c4) = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0x2c4) = 1;
    *(float *)(param_3 + 0x2cc) = *(float *)(param_3 + 0x2d0);
    *(float *)(param_3 + 0x2d0) = fVar28;
  }
  fVar28 = *(float *)(param_3 + 0x20);
  *(float *)(param_3 + 0x28) = fVar28;
  cVar10 = fVar28 != *(float *)(param_3 + 0x30);
  if ((bool)cVar10) {
    *(undefined1 *)(param_3 + 0x24) = 1;
    *(float *)(param_3 + 0x2c) = *(float *)(param_3 + 0x30);
    *(float *)(param_3 + 0x30) = fVar28;
  }
  else {
    *(undefined1 *)(param_3 + 0x24) = 0;
  }
  fVar28 = *(float *)(param_3 + 0x298);
  *(float *)(param_3 + 0x2a0) = fVar28;
  if (fVar28 == *(float *)(param_3 + 0x2a8)) {
    *(undefined1 *)(param_3 + 0x29c) = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0x29c) = 1;
    *(float *)(param_3 + 0x2a4) = *(float *)(param_3 + 0x2a8);
    *(float *)(param_3 + 0x2a8) = fVar28;
  }
  fVar28 = *(float *)(param_3 + 0x2d4);
  *(float *)(param_3 + 0x2dc) = fVar28;
  if (fVar28 == *(float *)(param_3 + 0x2e4)) {
    *(undefined1 *)(param_3 + 0x2d8) = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0x2d8) = 1;
    *(float *)(param_3 + 0x2e0) = *(float *)(param_3 + 0x2e4);
    *(float *)(param_3 + 0x2e4) = fVar28;
  }
  iVar23 = (int)param_7;
  if (iVar23 != 0) {
    uVar21 = 0;
    iVar24 = (int)param_6;
    iVar7 = 0;
    if (iVar24 != 0) {
      iVar7 = 8 / iVar24;
    }
    while( true ) {
      iVar18 = (int)uVar21;
      uVar8 = iVar23 - iVar18;
      if (cVar10 == '\0') {
        fVar28 = *(float *)(param_3 + 0x28);
      }
      else {
        fVar28 = fVar26 * ((float)uVar8 * *(float *)(param_3 + 0x2c) +
                          (float)(uVar21 & 0xffffffff) * *(float *)(param_3 + 0x28));
      }
      if (*(char *)(param_3 + 0x29c) == '\0') {
        fVar27 = *(float *)(param_3 + 0x2a0);
      }
      else {
        fVar27 = fVar26 * ((float)uVar8 * *(float *)(param_3 + 0x2a4) +
                          (float)(uVar21 & 0xffffffff) * *(float *)(param_3 + 0x2a0));
      }
      if (*(char *)(param_3 + 0x2d8) == '\0') {
        fVar29 = *(float *)(param_3 + 0x2dc);
      }
      else {
        fVar29 = fVar26 * ((float)uVar8 * *(float *)(param_3 + 0x2e0) +
                          (float)(uVar21 & 0xffffffff) * *(float *)(param_3 + 0x2dc));
      }
      fVar31 = *(float *)(*(long *)(param_3 + 8) + uVar21 * 4) * fVar28 +
               (1.0 - fVar28) * *(float *)(param_3 + 0x34);
      *(float *)(param_3 + 0x34) = fVar31;
      fVar28 = (1.0 - fVar28) * *(float *)(param_3 + 0x38) + fVar28 * fVar31;
      *(float *)(param_3 + 0x38) = fVar28;
      if (*(float *)(param_3 + 0x50) != 0.0) {
        fVar41 = fVar28 * *(float *)(param_3 + 0x40);
        fVar31 = fVar28 * *(float *)(param_3 + 0x44);
        fVar28 = fVar28 * *(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x54);
        *(float *)(param_3 + 0x54) =
             fVar41 + *(float *)(param_3 + 0x58) + fVar28 * *(float *)(param_3 + 0x48);
        *(float *)(param_3 + 0x58) = fVar31 + fVar28 * *(float *)(param_3 + 0x4c);
      }
      uVar6 = *(uint *)(param_3 + 0x504);
      uVar5 = *(int *)(param_3 + 0x508) - 1U & uVar6;
      *(uint *)(param_3 + 0x508) = uVar5;
      lVar19 = *(long *)(param_3 + 0x478);
      *(float *)(lVar19 + (long)(int)uVar5 * 4) = fVar28;
      uVar5 = *(int *)(param_3 + 0x50c) - 1U & uVar6;
      *(uint *)(param_3 + 0x50c) = uVar5;
      if (*(char *)(param_3 + 0x2c4) == '\0') {
        fVar28 = *(float *)(param_3 + 0x2c8);
      }
      else {
        fVar28 = fVar26 * ((float)uVar8 * *(float *)(param_3 + 0x2cc) +
                          (float)(uVar21 & 0xffffffff) * *(float *)(param_3 + 0x2c8));
      }
      fVar31 = fVar28 * *(float *)(lVar19 + (long)(int)uVar5 * 4);
      if (*(char *)(param_3 + 0x4f4) != '\0') {
        uVar6 = *(int *)(param_3 + 0x530) - 1U & uVar6;
        *(uint *)(param_3 + 0x530) = uVar6;
        fVar31 = fVar26 * ((float)(uVar21 & 0xffffffff) * fVar31 +
                          (float)uVar8 * fVar28 * *(float *)(lVar19 + (long)(int)uVar6 * 4));
      }
      uVar5 = *(int *)(param_3 + 0x5f0) - 1U & *(uint *)(param_3 + 0x5e8);
      *(uint *)(param_3 + 0x5f0) = uVar5;
      uVar6 = *(int *)(param_3 + 0x5f8) - 1U & *(uint *)(param_3 + 0x5e8);
      *(uint *)(param_3 + 0x5f8) = uVar6;
      fVar28 = *(float *)(*(long *)(param_3 + 0x5c0) + (long)(int)uVar6 * 4) -
               (fVar31 + 1e-20) * *(float *)(param_3 + 0x2e8);
      *(float *)(*(long *)(param_3 + 0x5c0) + (long)(int)uVar5 * 4) =
           fVar31 + 1e-20 + *(float *)(param_3 + 0x2e8) * fVar28;
      uVar5 = *(int *)(param_3 + 0x5f4) - 1U & *(uint *)(param_3 + 0x5ec);
      *(uint *)(param_3 + 0x5f4) = uVar5;
      uVar6 = *(int *)(param_3 + 0x5fc) - 1U & *(uint *)(param_3 + 0x5ec);
      *(uint *)(param_3 + 0x5fc) = uVar6;
      local_88[0] = *(float *)(*(long *)(param_3 + 0x5c8) + (long)(int)uVar6 * 4) -
                    fVar28 * *(float *)(param_3 + 0x2e8);
      *(float *)(*(long *)(param_3 + 0x5c8) + (long)(int)uVar5 * 4) =
           fVar28 + *(float *)(param_3 + 0x2e8) * local_88[0];
      uVar9 = *(undefined4 *)(param_3 + 0x59c);
      iVar34 = *(int *)(param_3 + 0x5a0) + -1;
      iVar37 = *(int *)(param_3 + 0x5a4) + -1;
      iVar38 = *(int *)(param_3 + 0x5a8) + -1;
      iVar39 = *(int *)(param_3 + 0x5ac) + -1;
      bVar40 = (byte)uVar9;
      bVar42 = (byte)((uint)uVar9 >> 8);
      bVar43 = (byte)((uint)uVar9 >> 0x10);
      bVar44 = (byte)((uint)uVar9 >> 0x18);
      iVar34 = CONCAT13((byte)((uint)iVar34 >> 0x18) & bVar44,
                        CONCAT12((byte)((uint)iVar34 >> 0x10) & bVar43,
                                 CONCAT11((byte)((uint)iVar34 >> 8) & bVar42,(byte)iVar34 & bVar40))
                       );
      auVar35._0_8_ =
           CONCAT17((byte)((uint)iVar37 >> 0x18) & bVar44,
                    CONCAT16((byte)((uint)iVar37 >> 0x10) & bVar43,
                             CONCAT15((byte)((uint)iVar37 >> 8) & bVar42,
                                      CONCAT14((byte)iVar37 & bVar40,iVar34))));
      auVar35[8] = (byte)iVar38 & bVar40;
      auVar35[9] = (byte)((uint)iVar38 >> 8) & bVar42;
      auVar35[10] = (byte)((uint)iVar38 >> 0x10) & bVar43;
      auVar35[0xb] = (byte)((uint)iVar38 >> 0x18) & bVar44;
      auVar36[0xc] = (byte)iVar39 & bVar40;
      auVar36._0_12_ = auVar35;
      auVar36[0xd] = (byte)((uint)iVar39 >> 8) & bVar42;
      auVar36[0xe] = (byte)((uint)iVar39 >> 0x10) & bVar43;
      auVar36[0xf] = (byte)((uint)iVar39 >> 0x18) & bVar44;
      lVar19 = *(long *)(param_3 + 0x558);
      *(float *)(lVar19 + (long)iVar34 * 4) = local_88[0];
      local_88[1] = (float)*(undefined4 *)(lVar19 + (long)(int)((ulong)auVar35._0_8_ >> 0x20) * 4);
      local_88[2] = (float)*(undefined4 *)(lVar19 + (long)auVar35._8_4_ * 4);
      *(undefined8 *)(param_3 + 0x5a0) = auVar35._0_8_;
      auVar33 = NEON_ext(auVar36,auVar36,8,1);
      *(long *)(param_3 + 0x5a8) = auVar33._0_8_;
      local_88[3] = (float)*(undefined4 *)(lVar19 + (long)auVar36._12_4_ * 4);
      iVar34 = *(int *)(param_3 + 0x5b0) + -1;
      iVar37 = *(int *)(param_3 + 0x5b4) + -1;
      iVar38 = *(int *)(param_3 + 0x5b8) + -1;
      iVar39 = *(int *)(param_3 + 0x5bc) + -1;
      iVar34 = CONCAT13((byte)((uint)iVar34 >> 0x18) & bVar44,
                        CONCAT12((byte)((uint)iVar34 >> 0x10) & bVar43,
                                 CONCAT11((byte)((uint)iVar34 >> 8) & bVar42,(byte)iVar34 & bVar40))
                       );
      auVar32._0_8_ =
           CONCAT17((byte)((uint)iVar37 >> 0x18) & bVar44,
                    CONCAT16((byte)((uint)iVar37 >> 0x10) & bVar43,
                             CONCAT15((byte)((uint)iVar37 >> 8) & bVar42,
                                      CONCAT14((byte)iVar37 & bVar40,iVar34))));
      auVar32[8] = (byte)iVar38 & bVar40;
      auVar32[9] = (byte)((uint)iVar38 >> 8) & bVar42;
      auVar32[10] = (byte)((uint)iVar38 >> 0x10) & bVar43;
      auVar32[0xb] = (byte)((uint)iVar38 >> 0x18) & bVar44;
      auVar33[0xc] = (byte)iVar39 & bVar40;
      auVar33._0_12_ = auVar32;
      auVar33[0xd] = (byte)((uint)iVar39 >> 8) & bVar42;
      auVar33[0xe] = (byte)((uint)iVar39 >> 0x10) & bVar43;
      auVar33[0xf] = (byte)((uint)iVar39 >> 0x18) & bVar44;
      local_78 = *(undefined4 *)(lVar19 + (long)iVar34 * 4);
      local_74 = *(undefined4 *)(lVar19 + (long)(int)((ulong)auVar32._0_8_ >> 0x20) * 4);
      local_70 = *(undefined4 *)(lVar19 + (long)auVar32._8_4_ * 4);
      *(undefined8 *)(param_3 + 0x5b0) = auVar32._0_8_;
      auVar36 = NEON_ext(auVar33,auVar33,8,1);
      *(long *)(param_3 + 0x5b8) = auVar36._0_8_;
      local_6c = *(undefined4 *)(lVar19 + (long)auVar33._12_4_ * 4);
      if (0 < *(int *)(param_3 + 0x2ec)) {
        fVar28 = (float)uVar8;
        fVar31 = (float)(uVar21 & 0xffffffff);
        puVar12 = (uint *)(param_3 + 0x534);
        uVar14 = 0;
        do {
          uVar8 = puVar12[-9] - 1 & *(uint *)(param_3 + 0x504);
          puVar12[-9] = uVar8;
          fVar41 = *(float *)(*(long *)(param_3 + 0x478) + (long)(int)uVar8 * 4);
          if (*(char *)(param_3 + uVar14 + 0x4f5) != '\0') {
            uVar8 = *puVar12 - 1 & *(uint *)(param_3 + 0x504);
            *puVar12 = uVar8;
            fVar41 = fVar26 * (fVar31 * fVar41 +
                              fVar28 * *(float *)(*(long *)(param_3 + 0x478) + (long)(int)uVar8 * 4)
                              );
          }
          if (*(char *)(param_3 + 0x2b4) == '\0') {
            fVar45 = *(float *)(param_3 + 0x2b8);
          }
          else {
            fVar45 = fVar26 * (fVar28 * *(float *)(param_3 + 700) +
                              fVar31 * *(float *)(param_3 + 0x2b8));
          }
          uVar5 = puVar12[-0x57];
          uVar8 = puVar12[-0x47] - 1 & uVar5;
          puVar12[-0x47] = uVar8;
          lVar19 = param_3 + uVar14 * 4;
          fVar46 = *(float *)(lVar19 + 0x238);
          if (*(char *)(param_3 + uVar14 + 0x3d0) == '\0') {
            fVar46 = fVar46 * *(float *)(*(long *)(param_3 + uVar14 * 8 + 0x2f0) +
                                        (long)(int)uVar8 * 4);
          }
          else {
            uVar6 = puVar12[-0x3f] - 1 & uVar5;
            puVar12[-0x3f] = uVar6;
            lVar20 = *(long *)(param_3 + uVar14 * 8 + 0x2f0);
            fVar46 = fVar26 * (fVar28 * *(float *)(lVar19 + 0x278) *
                                        *(float *)(lVar20 + (long)(int)uVar6 * 4) +
                              fVar31 * fVar46 * *(float *)(lVar20 + (long)(int)uVar8 * 4));
          }
          uVar1 = uVar14 + 1;
          fVar47 = *(float *)(param_3 + uVar14 * 4 + 0x84);
          if (*(char *)(param_3 + uVar14 + 0x7c) == '\0') {
            lVar19 = *(long *)(param_3 + 0x208);
            fVar48 = *(float *)(lVar19 + uVar14 * 4);
            fVar49 = *(float *)(param_3 + uVar14 * 4 + 0xa4);
          }
          else {
            fVar47 = fVar26 * (fVar28 * *(float *)(param_3 + uVar14 * 4 + 0xc4) + fVar31 * fVar47);
            fVar49 = 1.0 - fVar47;
            lVar19 = *(long *)(param_3 + 0x208);
            fVar48 = *(float *)(lVar19 + uVar14 * 4);
          }
          *(float *)(lVar19 + uVar14 * 4) =
               ((float)(&DAT_10115db00)[uVar14 & 1] + fVar29 * (fVar41 * fVar45 + fVar46)) * fVar47
               + fVar48 * fVar49;
          puVar12[-0x4f] = puVar12[-0x4f] - 1 & uVar5;
          puVar12 = puVar12 + 1;
          uVar14 = uVar1;
        } while ((long)uVar1 < (long)*(int *)(param_3 + 0x2ec));
      }
      pfVar15 = *(float **)(param_3 + 0x208);
      fVar28 = *pfVar15 + fVar27 * pfVar15[1];
      pfVar13 = *(float **)(param_3 + 0x210);
      *pfVar13 = fVar28;
      fVar31 = pfVar15[1] - fVar27 * *pfVar15;
      pfVar13[1] = fVar31;
      fVar29 = pfVar15[2] + fVar27 * pfVar15[3];
      pfVar13[2] = fVar29;
      fVar41 = pfVar15[3] - fVar27 * pfVar15[2];
      pfVar13[3] = fVar41;
      fVar45 = pfVar15[4] + fVar27 * pfVar15[5];
      pfVar13[4] = fVar45;
      fVar47 = pfVar15[5] - fVar27 * pfVar15[4];
      pfVar13[5] = fVar47;
      fVar46 = pfVar15[6] + fVar27 * pfVar15[7];
      pfVar13[6] = fVar46;
      fVar48 = pfVar15[7] - fVar27 * pfVar15[6];
      pfVar13[7] = fVar48;
      fVar49 = fVar28 + fVar27 * fVar29;
      pfVar13[8] = fVar49;
      fVar50 = fVar31 + fVar27 * fVar41;
      pfVar13[9] = fVar50;
      fVar29 = fVar29 - fVar27 * fVar28;
      pfVar13[10] = fVar29;
      fVar41 = fVar41 - fVar27 * fVar31;
      pfVar13[0xb] = fVar41;
      fVar28 = fVar45 + fVar27 * fVar46;
      pfVar13[0xc] = fVar28;
      fVar31 = fVar47 + fVar27 * fVar48;
      pfVar13[0xd] = fVar31;
      fVar46 = fVar46 - fVar27 * fVar45;
      pfVar13[0xe] = fVar46;
      fVar48 = fVar48 - fVar27 * fVar47;
      pfVar13[0xf] = fVar48;
      auVar30._0_8_ = CONCAT44(fVar50 + fVar31 * fVar27,fVar49 + fVar28 * fVar27);
      auVar30._8_4_ = fVar29 + fVar46 * fVar27;
      auVar30._12_4_ = fVar41 + fVar48 * fVar27;
      *(undefined8 *)(pfVar13 + 0x10) = auVar30._0_8_;
      auVar33 = NEON_ext(auVar30,auVar30,8,1);
      *(long *)(pfVar13 + 0x12) = auVar33._0_8_;
      pfVar13[0x14] = fVar28 - fVar27 * fVar49;
      lVar19 = *(long *)(param_3 + 0x210);
      *(float *)(lVar19 + 0x54) = *(float *)(lVar19 + 0x34) - fVar27 * *(float *)(lVar19 + 0x24);
      *(float *)(lVar19 + 0x58) = *(float *)(lVar19 + 0x38) - fVar27 * *(float *)(lVar19 + 0x28);
      *(float *)(lVar19 + 0x5c) = *(float *)(lVar19 + 0x3c) - fVar27 * *(float *)(lVar19 + 0x2c);
      *(undefined4 *)(*(long *)(param_3 + 0x2f0) + (long)*(int *)(param_3 + 0x3f8) * 4) =
           *(undefined4 *)(lVar19 + 0x44);
      *(undefined4 *)(*(long *)(param_3 + 0x2f8) + (long)*(int *)(param_3 + 0x3fc) * 4) =
           *(undefined4 *)(lVar19 + 0x48);
      *(undefined4 *)(*(long *)(param_3 + 0x300) + (long)*(int *)(param_3 + 0x400) * 4) =
           *(undefined4 *)(lVar19 + 0x4c);
      *(undefined4 *)(*(long *)(param_3 + 0x308) + (long)*(int *)(param_3 + 0x404) * 4) =
           *(undefined4 *)(lVar19 + 0x50);
      *(undefined4 *)(*(long *)(param_3 + 0x310) + (long)*(int *)(param_3 + 0x408) * 4) =
           *(undefined4 *)(lVar19 + 0x54);
      *(undefined4 *)(*(long *)(param_3 + 0x318) + (long)*(int *)(param_3 + 0x40c) * 4) =
           *(undefined4 *)(lVar19 + 0x58);
      *(undefined4 *)(*(long *)(param_3 + 800) + (long)*(int *)(param_3 + 0x410) * 4) =
           *(undefined4 *)(lVar19 + 0x5c);
      *(undefined4 *)(*(long *)(param_3 + 0x328) + (long)*(int *)(param_3 + 0x414) * 4) =
           *(undefined4 *)(lVar19 + 0x40);
      if (0 < iVar24) {
        lVar19 = 0;
        plVar16 = (long *)(param_3 + 0x2f0);
        iVar34 = 0;
        do {
          fVar28 = 0.0;
          fVar27 = 0.0;
          plVar17 = plVar16;
          lVar20 = lVar19;
          iVar37 = iVar7;
          if (0 < iVar7) {
            do {
              lVar2 = param_3 + lVar20;
              uVar8 = *(int *)(lVar2 + 0x458) - 1U & *(uint *)(lVar2 + 0x3d8);
              *(uint *)(lVar2 + 0x458) = uVar8;
              fVar27 = fVar27 + *(float *)(*plVar17 + (long)(int)uVar8 * 4);
              fVar28 = fVar28 + *(float *)((long)local_88 + lVar20);
              lVar20 = lVar20 + (-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 |
                                (param_6 & 0xffffffff) << 2);
              plVar17 = (long *)((long)plVar17 +
                                (-(param_6 >> 0x1f & 1) & 0xfffffff800000000 |
                                (param_6 & 0xffffffff) << 3));
              iVar37 = iVar37 + -1;
            } while (iVar37 != 0);
          }
          if (param_2 == 0.0) {
            *(float *)(param_5 + (ulong)(uint)(iVar34 + iVar18 * iVar24) * 4) = fVar27 + fVar28;
          }
          else {
            lVar20 = (ulong)(uint)(iVar34 + iVar18 * iVar24) * 4;
            *(float *)(param_5 + lVar20) = fVar27 + fVar28 + *(float *)(param_4 + lVar20) * param_2;
          }
          lVar19 = lVar19 + 4;
          plVar16 = plVar16 + 1;
          bVar11 = iVar34 != iVar24 + -1;
          iVar34 = iVar34 + 1;
        } while (bVar11);
      }
      if (iVar18 == iVar23 + -1) break;
      uVar21 = uVar21 + 1;
      cVar10 = *(char *)(param_3 + 0x24);
    }
  }
  if (lVar25 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100559330(long param_1,ulong param_2,int param_3,float *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  
  if (param_3 == 1) {
    _memmove(*(void **)(param_1 + 8),param_4,(param_2 & 0xffffffff) << 2);
    return;
  }
  if (param_3 == 6) {
    if ((param_2 >> 2 & 0x3fffffff) != 0) {
      uVar2 = 0;
      pfVar4 = *(float **)(param_1 + 8);
      do {
        *pfVar4 = *param_4 + param_4[1] + param_4[2] + param_4[3] + param_4[4] + param_4[5];
        pfVar4[1] = param_4[6] + param_4[7] + param_4[8] + param_4[9] + param_4[10] + param_4[0xb];
        pfVar4[2] = param_4[0xc] + param_4[0xd] + param_4[0xe] + param_4[0xf] + param_4[0x10] +
                    param_4[0x11];
        pfVar4[3] = param_4[0x12] + param_4[0x13] + param_4[0x14] + param_4[0x15] + param_4[0x16] +
                    param_4[0x17];
        uVar2 = uVar2 + 1;
        param_4 = param_4 + 0x18;
        pfVar4 = pfVar4 + 4;
      } while (uVar2 < ((uint)(param_2 >> 2) & 0x3fffffff));
    }
  }
  else if (param_3 == 8) {
    if ((param_2 >> 2 & 0x3fffffff) != 0) {
      uVar2 = 0;
      pfVar4 = *(float **)(param_1 + 8);
      do {
        *pfVar4 = *param_4 + param_4[1] + param_4[2] + param_4[3] + param_4[4] + param_4[5] +
                  param_4[6] + param_4[7];
        pfVar4[1] = param_4[8] + param_4[9] + param_4[10] + param_4[0xb] + param_4[0xc] +
                    param_4[0xd] + param_4[0xe] + param_4[0xf];
        pfVar4[2] = param_4[0x10] + param_4[0x11] + param_4[0x12] + param_4[0x13] + param_4[0x14] +
                    param_4[0x15] + param_4[0x16] + param_4[0x17];
        pfVar4[3] = param_4[0x18] + param_4[0x19] + param_4[0x1a] + param_4[0x1b] + param_4[0x1c] +
                    param_4[0x1d] + param_4[0x1e] + param_4[0x1f];
        uVar2 = uVar2 + 1;
        param_4 = param_4 + 0x20;
        pfVar4 = pfVar4 + 4;
      } while (uVar2 < ((uint)(param_2 >> 2) & 0x3fffffff));
    }
  }
  else if ((int)param_2 != 0) {
    uVar1 = 0;
    lVar6 = 0;
    lVar3 = *(long *)(param_1 + 8);
    do {
      *(undefined4 *)(lVar3 + lVar6 * 4) = 0;
      if (0 < param_3) {
        fVar8 = 0.0;
        uVar7 = uVar1;
        iVar5 = param_3;
        do {
          fVar8 = param_4[uVar7] + fVar8;
          *(float *)(lVar3 + lVar6 * 4) = fVar8;
          iVar5 = iVar5 + -1;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (iVar5 != 0);
      }
      uVar1 = (ulong)(uint)((int)uVar1 + param_3);
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar5 != (int)param_2 + -1);
  }
  return;
}




int FUN_100559568(ulong param_1)

{
  int iVar1;
  
  iVar1 = -1;
  do {
    param_1 = param_1 >> 1 & 0x7fffffff;
    iVar1 = iVar1 + 1;
  } while ((int)param_1 != 0);
  return iVar1;
}




int FUN_100559580(ulong param_1)

{
  int iVar1;
  
  iVar1 = -1;
  do {
    param_1 = param_1 >> 1;
    iVar1 = iVar1 + 1;
  } while (param_1 != 0);
  return iVar1;
}




int FUN_100559598(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((int)param_1 < 1) {
    iVar2 = 0;
    do {
      if (param_1 == 0xffffffff) {
        return 2;
      }
      uVar3 = ~param_1;
      bVar1 = -2 < (int)param_1;
      param_1 = uVar3;
    } while (bVar1);
  }
  else {
    iVar2 = 0;
    uVar3 = param_1;
  }
  do {
    iVar2 = iVar2 + 1;
    bVar1 = uVar3 != 0;
    uVar3 = (int)uVar3 >> 1;
  } while (bVar1);
  return iVar2;
}




int FUN_1005595f4(ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((long)param_1 < 1) {
    iVar2 = 0;
    do {
      if (param_1 == 0xffffffffffffffff) {
        return 2;
      }
      uVar3 = ~param_1;
      bVar1 = -2 < (long)param_1;
      param_1 = uVar3;
    } while (bVar1);
  }
  else {
    iVar2 = 0;
    uVar3 = param_1;
  }
  do {
    iVar2 = iVar2 + 1;
    bVar1 = uVar3 != 0;
    uVar3 = (long)uVar3 >> 1;
  } while (bVar1);
  return iVar2;
}




undefined8 FUN_100559650(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  undefined1 auVar16 [16];
  ulong local_38;
  
  uVar8 = *(uint *)((long)param_2 + 0x14);
  uVar6 = *(uint *)((long)param_2 + 0xc);
  if (uVar8 != 0) {
    iVar4 = uVar6 - uVar8;
    if ((int)param_2[2] != 0) {
      iVar4 = iVar4 + 1;
    }
    _memmove((void *)*param_2,(void *)(*param_2 + (ulong)uVar8 * 4),(ulong)(uint)(iVar4 << 2));
    uVar6 = *(int *)((long)param_2 + 0xc) - uVar8;
    *(uint *)((long)param_2 + 0xc) = uVar6;
    *(undefined4 *)((long)param_2 + 0x14) = 0;
  }
  uVar8 = *(uint *)(param_2 + 2);
  uVar3 = ((int)param_2[1] - uVar6) * 4 - uVar8;
  local_38 = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    puVar11 = (uint *)(*param_2 + (ulong)uVar6 * 4);
    if (uVar8 != 0) {
      uVar6 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
      *puVar11 = uVar6 >> 0x10 | uVar6 << 0x10;
    }
    iVar4 = (*(code *)param_2[5])(param_1,(long)puVar11 + (ulong)uVar8,&local_38,param_2[6]);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar8 = *(uint *)((long)param_2 + 0xc);
      uVar2 = (ulong)uVar8;
      iVar15 = (int)param_2[2];
      iVar4 = iVar15 + uVar8 * 4;
      iVar7 = (int)local_38;
      uVar6 = iVar4 + iVar7 + 3U >> 2;
      if (uVar8 < uVar6) {
        lVar14 = *param_2;
        uVar1 = (ulong)(((iVar4 + iVar7 + 3U >> 2) - 1) - uVar8) + 1;
        uVar12 = uVar1 & 0x1fffffffc;
        uVar10 = uVar2;
        uVar13 = uVar2;
        if (uVar12 != 0) {
          uVar10 = uVar12 + uVar2;
          uVar13 = (ulong)(uVar8 + (int)uVar12);
          uVar12 = (ulong)(((iVar15 + uVar8 * 4 + iVar7 + 3 >> 2) - 1) - uVar8) + 1 &
                   0xfffffffffffffffc;
          pauVar9 = (undefined1 (*) [16])(lVar14 + uVar2 * 4);
          do {
            auVar16 = NEON_rev32(*pauVar9,1);
            *(long *)*pauVar9 = auVar16._0_8_;
            auVar16 = NEON_ext(auVar16,auVar16,8,1);
            *(long *)(*pauVar9 + 8) = auVar16._0_8_;
            uVar12 = uVar12 - 4;
            pauVar9 = pauVar9 + 1;
          } while (uVar12 != 0);
        }
        if (uVar1 + uVar2 != uVar10) {
          puVar11 = (uint *)(lVar14 + uVar10 * 4);
          do {
            uVar8 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
            *puVar11 = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (int)uVar13 + 1;
            uVar13 = (ulong)uVar8;
            puVar11 = puVar11 + 1;
          } while (uVar8 < uVar6);
        }
        uVar8 = *(uint *)((long)param_2 + 0xc);
        iVar15 = (int)param_2[2];
      }
      uVar8 = iVar15 + uVar8 * 4 + iVar7;
      *(uint *)((long)param_2 + 0xc) = uVar8 >> 2;
      *(uint *)(param_2 + 2) = uVar8 & 3;
      uVar5 = 1;
    }
  }
  return uVar5;
}




void FUN_1005597f8(void)

{
  _calloc(1,0x70);
  return;
}




void FUN_100559804(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
  }
  _free(param_1);
  return;
}




void FUN_100559830(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




bool FUN_100559868(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 1) = 0x800;
  pvVar1 = _malloc(0x2000);
  *param_2 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    param_2[5] = param_4;
    param_2[6] = param_5;
    param_2[0xd] = param_3[6];
    uVar2 = param_3[4];
    param_2[0xc] = param_3[5];
    param_2[0xb] = uVar2;
    uVar2 = param_3[2];
    param_2[10] = param_3[3];
    param_2[9] = uVar2;
    uVar2 = *param_3;
    param_2[8] = param_3[1];
    param_2[7] = uVar2;
  }
  return pvVar1 != (void *)0x0;
}




undefined8 FUN_1005598e8(long param_1)

{
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return 1;
}




ulong FUN_1005598f8(long param_1,FILE *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar2 = _fwrite("bitreader is NULL\n",0x12,1,param_2);
    return uVar2;
  }
  uVar1 = _fprintf(param_2,"bitreader: capacity=%u words=%u bytes=%u consumed: words=%u, bits=%u\n")
  ;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      _fprintf(param_2,"%08X: ");
      uVar1 = 0;
      do {
        if ((uVar3 < *(uint *)(param_1 + 0x14)) ||
           ((uVar3 == *(uint *)(param_1 + 0x14) && (uVar1 < *(uint *)(param_1 + 0x18))))) {
          _fputc(0x2e,param_2);
        }
        else {
          _fprintf(param_2,"%01u");
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0x20);
      uVar1 = _fputc(10,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return (ulong)uVar1;
  }
  _fprintf(param_2,"%08X: ");
  if ((*(uint *)(param_1 + 0x10) & 0x1fffffff) != 0) {
    uVar1 = 0;
    do {
      if ((uVar3 < *(uint *)(param_1 + 0x14)) ||
         ((uVar3 == *(uint *)(param_1 + 0x14) && (uVar1 < *(uint *)(param_1 + 0x18))))) {
        _fputc(0x2e,param_2);
      }
      else {
        _fprintf(param_2,"%01u");
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x10) << 3));
  }
  uVar1 = _fputc(10,param_2);
  return (ulong)uVar1;
}




void FUN_100559b24(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  return;
}




undefined2 FUN_100559b34(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_1 + 4);
    if (uVar3 < uVar1) {
      uVar2 = *(uint *)(*param_1 + (ulong)*(uint *)((long)param_1 + 0x14) * 4);
      uVar4 = *(uint *)((long)param_1 + 0x1c);
      uVar5 = 0x18 - uVar3;
      do {
        uVar4 = (uVar4 & 0xff) << 8 ^
                *(uint *)(&DAT_101867918 +
                         (ulong)(uVar2 >> (ulong)(uVar5 & 0x1f) & 0xff ^ uVar4 >> 8) * 4);
        uVar3 = uVar3 + 8;
        *(uint *)((long)param_1 + 0x1c) = uVar4;
        *(uint *)(param_1 + 4) = uVar3;
        uVar5 = uVar5 - 8;
      } while (uVar3 < uVar1);
    }
  }
  return *(undefined2 *)((long)param_1 + 0x1c);
}




bool FUN_100559ba0(long param_1)

{
  return (*(byte *)(param_1 + 0x18) & 7) == 0;
}




int FUN_100559bb0(long param_1)

{
  return 8 - (*(uint *)(param_1 + 0x18) & 7);
}




int FUN_100559bc4(long param_1)

{
  return ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14)) * 0x20 + *(int *)(param_1 + 0x10) * 8
         ) - *(int *)(param_1 + 0x18);
}




undefined8 FUN_100559be0(undefined8 param_1,long *param_2,uint *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_4 == 0) {
    *param_3 = 0;
LAB_100559ce8:
    uVar4 = 1;
  }
  else {
    do {
      uVar6 = *(uint *)((long)param_2 + 0x14);
      uVar1 = (ulong)uVar6;
      uVar5 = *(uint *)(param_2 + 3);
      if (param_4 <= ((*(uint *)((long)param_2 + 0xc) - uVar6) * 0x20 + (int)param_2[2] * 8) - uVar5
         ) {
        if (uVar6 < *(uint *)((long)param_2 + 0xc)) {
          if (uVar5 == 0) {
            uVar6 = *(uint *)(*param_2 + uVar1 * 4);
            if (param_4 < 0x20) {
              *param_3 = uVar6 >> (ulong)(0x20 - param_4 & 0x1f);
              *(uint *)(param_2 + 3) = param_4;
            }
            else {
              *param_3 = uVar6;
              FUN_100559d6c(param_2);
              *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
            }
            goto LAB_100559ce8;
          }
          uVar2 = 0x20 - uVar5;
          uVar6 = *(uint *)(*param_2 + uVar1 * 4) & 0xffffffffU >> (ulong)(uVar5 & 0x1f);
          if (param_4 <= uVar2 && uVar2 - param_4 != 0) {
            uVar6 = uVar6 >> (ulong)(uVar2 - param_4 & 0x1f);
            goto LAB_100559cd8;
          }
          *param_3 = uVar6;
          FUN_100559d6c(param_2);
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
          *(undefined4 *)(param_2 + 3) = 0;
          if (uVar2 == param_4) goto LAB_100559ce8;
          param_4 = param_4 - uVar2;
          uVar6 = *param_3 << (ulong)(param_4 & 0x1f);
          *param_3 = uVar6;
          *param_3 = *(uint *)(*param_2 + (ulong)*(uint *)((long)param_2 + 0x14) * 4) >>
                     (ulong)(0x20 - param_4 & 0x1f) | uVar6;
        }
        else {
          uVar6 = *(uint *)(*param_2 + uVar1 * 4);
          if (uVar5 == 0) {
            uVar5 = 0x20 - param_4;
          }
          else {
            uVar6 = uVar6 & 0xffffffffU >> (ulong)(uVar5 & 0x1f);
            uVar5 = (0x20 - param_4) - uVar5;
          }
          uVar6 = uVar6 >> (ulong)(uVar5 & 0x1f);
LAB_100559cd8:
          *param_3 = uVar6;
          param_4 = (int)param_2[3] + param_4;
        }
        *(uint *)(param_2 + 3) = param_4;
        goto LAB_100559ce8;
      }
      iVar3 = FUN_100559650(param_1,param_2);
    } while (iVar3 != 0);
    uVar4 = 0;
  }
  return uVar4;
}




void FUN_100559d6c(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0x10) {
    if (iVar1 == 0) {
      uVar2 = *(uint *)(&DAT_101867918 + (ulong)(uVar2 >> 8 ^ param_2 >> 0x18) * 4) ^
              (uVar2 & 0xff) << 8;
    }
    else if (iVar1 != 8) goto LAB_100559e20;
    uVar2 = (uVar2 & 0xff) << 8 ^
            *(uint *)(&DAT_101867918 + (ulong)(param_2 >> 0x10 & 0xff ^ uVar2 >> 8) * 4);
LAB_100559ddc:
    uVar2 = (uVar2 & 0xff) << 8 ^
            *(uint *)(&DAT_101867918 + (ulong)(param_2 >> 8 & 0xff ^ uVar2 >> 8) * 4);
  }
  else {
    if (iVar1 == 0x10) goto LAB_100559ddc;
    if (iVar1 != 0x18) goto LAB_100559e20;
  }
  *(uint *)(param_1 + 0x1c) =
       (uVar2 & 0xff) << 8 ^ *(uint *)(&DAT_101867918 + (ulong)(param_2 & 0xff ^ uVar2 >> 8) * 4);
LAB_100559e20:
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}




bool FUN_100559e28(undefined8 param_1,undefined8 param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_100559be0();
  if (iVar1 != 0) {
    *param_3 = (*param_3 << (ulong)(0x20U - param_4 & 0x1f)) >> (0x20U - param_4 & 0x1f);
  }
  return iVar1 != 0;
}




undefined8 FUN_100559e74(undefined8 param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  uint local_38;
  uint local_34;
  
  if (param_4 < 0x21) {
    iVar1 = FUN_100559be0(param_1,param_2,&local_38);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = (ulong)local_38;
  }
  else {
    iVar1 = FUN_100559be0(param_1,param_2,&local_34,param_4 - 0x20);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_100559be0(param_1,param_2,&local_38,0x20);
    if (iVar1 == 0) {
      return 0;
    }
    *param_3 = (ulong)local_34 << 0x20;
    uVar2 = CONCAT44(local_34,local_38);
  }
  *param_3 = uVar2;
  return 1;
}




undefined8 FUN_100559f30(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_38;
  int local_34;
  
  local_38 = 0;
  iVar2 = FUN_100559be0(param_1,param_2,&local_38,8);
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_100559be0(param_1,param_2,&local_34,8);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = local_38 | local_34 << 8;
      local_38 = uVar1;
      iVar2 = FUN_100559be0(param_1,param_2,&local_34,8);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar1 = uVar1 | local_34 << 0x10;
        local_38 = uVar1;
        iVar2 = FUN_100559be0(param_1,param_2,&local_34,8);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          *param_3 = uVar1 | local_34 << 0x18;
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}




undefined8 FUN_10055a00c(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_34 [4];
  
  uVar3 = (uint)param_3;
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18) & 7;
    if (uVar1 != 0) {
      uVar1 = 8 - uVar1;
      if (uVar3 <= uVar1) {
        uVar1 = uVar3;
      }
      iVar2 = FUN_100559be0(param_1,param_2,auStack_34,uVar1);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = (ulong)(uVar3 - uVar1);
    }
    if ((param_3 >> 3 & 0x1fffffff) != 0) {
      iVar2 = FUN_10055a0d0(param_1,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = (ulong)((uint)param_3 & 7);
    }
    if (((int)param_3 != 0) &&
       (iVar2 = FUN_100559be0(param_1,param_2,auStack_34,param_3), iVar2 == 0)) {
      return 0;
    }
  }
  return 1;
}




undefined8 FUN_10055a0d0(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_34 [4];
  
  if (param_3 == 0) {
    return 1;
  }
  do {
    if (*(int *)(param_2 + 0x18) == 0) {
      do {
        while( true ) {
          if (param_3 < 4) {
            if (param_3 == 0) {
              return 1;
            }
            do {
              iVar1 = FUN_100559be0(param_1,param_2,auStack_34,8);
              if (iVar1 == 0) {
                return 0;
              }
              param_3 = param_3 - 1;
            } while (param_3 != 0);
            return 1;
          }
          if (*(uint *)(param_2 + 0xc) <= *(uint *)(param_2 + 0x14)) break;
          *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) + 1;
          param_3 = param_3 - 4;
        }
        iVar1 = FUN_100559650(param_1,param_2);
      } while (iVar1 != 0);
      return 0;
    }
    iVar1 = FUN_100559be0(param_1,param_2,auStack_34,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return 1;
}




undefined8 FUN_10055a1b4(undefined8 param_1,long *param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_34;
  
  while( true ) {
    if (param_4 == 0) {
      return 1;
    }
    if ((int)param_2[3] == 0) break;
    iVar3 = FUN_100559be0(param_1,param_2,&local_34,8);
    if (iVar3 == 0) {
      return 0;
    }
    *param_3 = (char)local_34;
    param_4 = param_4 - 1;
    param_3 = param_3 + 1;
  }
  while (3 < param_4) {
    uVar1 = *(uint *)((long)param_2 + 0x14);
    if (uVar1 < *(uint *)((long)param_2 + 0xc)) {
      *(uint *)((long)param_2 + 0x14) = uVar1 + 1;
      uVar2 = *(undefined4 *)(*param_2 + (ulong)uVar1 * 4);
      *param_3 = (char)((uint)uVar2 >> 0x18);
      param_3[1] = (char)((uint)uVar2 >> 0x10);
      param_3[2] = (char)((uint)uVar2 >> 8);
      param_3[3] = (char)uVar2;
      param_3 = param_3 + 4;
      param_4 = param_4 - 4;
    }
    else {
      iVar3 = FUN_100559650(param_1,param_2);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  while( true ) {
    if (param_4 == 0) {
      return 1;
    }
    iVar3 = FUN_100559be0(param_1,param_2,&local_34,8);
    if (iVar3 == 0) break;
    *param_3 = (char)local_34;
    param_4 = param_4 - 1;
    param_3 = param_3 + 1;
  }
  return 0;
}




undefined8 FUN_10055a2c8(undefined8 param_1,long *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  *param_3 = 0;
  do {
    while (uVar3 = *(uint *)((long)param_2 + 0x14), uVar3 < *(uint *)((long)param_2 + 0xc)) {
      lVar2 = *param_2;
      uVar3 = *(int *)(lVar2 + (ulong)uVar3 * 4) << (ulong)(*(uint *)(param_2 + 3) & 0x1f);
      if (uVar3 != 0) {
        if (uVar3 >> 0x10 == 0) {
          if (uVar3 < 0x100) {
            uVar3 = (byte)(&DAT_10115db50)[uVar3] + 0x18;
          }
          else {
            uVar3 = (byte)(&DAT_10115db50)[uVar3 >> 8] + 0x10;
          }
        }
        else if (uVar3 >> 0x18 == 0) {
          uVar3 = (byte)(&DAT_10115db50)[uVar3 >> 0x10] + 8;
        }
        else {
          uVar3 = (uint)(byte)(&DAT_10115db50)[uVar3 >> 0x18];
        }
        *param_3 = *param_3 + uVar3;
        uVar3 = uVar3 + (int)param_2[3] + 1;
        *(uint *)(param_2 + 3) = uVar3;
        if (0x1f < uVar3) {
          FUN_100559d6c(param_2,*(undefined4 *)(lVar2 + (ulong)*(uint *)((long)param_2 + 0x14) * 4))
          ;
          *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
          *(undefined4 *)(param_2 + 3) = 0;
          return 1;
        }
        return 1;
      }
      *param_3 = (0x20 - *(uint *)(param_2 + 3)) + *param_3;
      FUN_100559d6c(param_2,*(undefined4 *)(lVar2 + (ulong)*(uint *)((long)param_2 + 0x14) * 4));
      *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
      *(undefined4 *)(param_2 + 3) = 0;
    }
    iVar1 = (int)param_2[2];
    if (iVar1 != 0) {
      uVar3 = (*(uint *)(*param_2 + (ulong)uVar3 * 4) & -1 << (ulong)(iVar1 * -8 + 0x20U & 0x1f)) <<
              (ulong)(*(uint *)(param_2 + 3) & 0x1f);
      if (uVar3 != 0) {
        if (uVar3 >> 0x10 == 0) {
          if (uVar3 < 0x100) {
            uVar3 = (byte)(&DAT_10115db50)[uVar3] + 0x18;
          }
          else {
            uVar3 = (byte)(&DAT_10115db50)[uVar3 >> 8] + 0x10;
          }
        }
        else if (uVar3 >> 0x18 == 0) {
          uVar3 = (byte)(&DAT_10115db50)[uVar3 >> 0x10] + 8;
        }
        else {
          uVar3 = (uint)(byte)(&DAT_10115db50)[uVar3 >> 0x18];
        }
        *param_3 = *param_3 + uVar3;
        *(uint *)(param_2 + 3) = uVar3 + (int)param_2[3] + 1;
        return 1;
      }
      *param_3 = (iVar1 * 8 - *(uint *)(param_2 + 3)) + *param_3;
      *(int *)(param_2 + 3) = (int)param_2[3] + iVar1 * 8;
    }
    iVar1 = FUN_100559650(param_1,param_2);
  } while (iVar1 != 0);
  return 0;
}




undefined8 FUN_10055a4f8(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_38;
  uint uStack_34;
  
  local_38 = 0;
  uStack_34 = 0;
  iVar1 = FUN_10055a2c8(param_1,param_2,&local_38);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_100559be0(param_1,param_2,&uStack_34,param_4);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_34 = local_38 << (ulong)((uint)param_4 & 0x1f) | uStack_34;
      *param_3 = -(uStack_34 & 1) ^ uStack_34 >> 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined8 FUN_10055a584(undefined8 param_1,long *param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar11 = (ulong)*(uint *)((long)param_2 + 0x14);
  uVar7 = *(uint *)(param_2 + 3);
  uVar5 = *(uint *)((long)param_2 + 0xc);
  iVar3 = ((int)param_2[2] * 8 - uVar7) + (uVar5 - *(uint *)((long)param_2 + 0x14)) * 0x20;
  uVar2 = 0x20 - param_5;
LAB_10055a5ec:
  iVar8 = 0;
  do {
    iVar6 = -uVar7;
    if ((uint)uVar11 < uVar5) {
      uVar11 = uVar11 & 0xffffffff;
      do {
        uVar5 = *(int *)(*param_2 + uVar11 * 4) << (ulong)(uVar7 & 0x1f);
        if (uVar5 != 0) {
          if (uVar5 >> 0x10 == 0) {
            if (uVar5 < 0x100) {
              uVar5 = (byte)(&DAT_10115db50)[uVar5] + 0x18;
            }
            else {
              uVar5 = (byte)(&DAT_10115db50)[uVar5 >> 8] + 0x10;
            }
          }
          else if (uVar5 >> 0x18 == 0) {
            uVar5 = (byte)(&DAT_10115db50)[uVar5 >> 0x10] + 8;
          }
          else {
            uVar5 = (uint)(byte)(&DAT_10115db50)[uVar5 >> 0x18];
          }
          uVar9 = uVar5 + iVar8;
          uVar5 = uVar7 + uVar5 + 1;
          if (0x1f < uVar5) {
            FUN_100559d6c(param_2);
            uVar5 = 0;
            uVar11 = (ulong)((int)uVar11 + 1);
          }
          goto LAB_10055a730;
        }
        iVar8 = iVar6 + iVar8 + 0x20;
        FUN_100559d6c(param_2);
        iVar6 = 0;
        uVar7 = 0;
        uVar11 = uVar11 + 1;
      } while ((uint)uVar11 < *(uint *)((long)param_2 + 0xc));
      iVar6 = 0;
      uVar7 = 0;
    }
    if ((int)param_2[2] != 0) {
      uVar9 = (int)param_2[2] * 8;
      uVar5 = (*(uint *)(*param_2 + (uVar11 & 0xffffffff) * 4) &
              (0xffffffffU >> (ulong)(uVar9 & 0x1f) ^ 0xffffffff)) << (ulong)(uVar7 & 0x1f);
      if (uVar5 != 0) break;
      iVar8 = iVar8 + iVar6 + uVar9;
      uVar7 = uVar9 + uVar7;
    }
    *(int *)((long)param_2 + 0x14) = (int)uVar11;
    *(uint *)(param_2 + 3) = uVar7;
    iVar3 = FUN_100559650(param_1,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    uVar11 = (ulong)*(uint *)((long)param_2 + 0x14);
    uVar5 = *(uint *)((long)param_2 + 0xc);
    iVar3 = (iVar8 - uVar7) + (int)param_2[2] * 8 + (uVar5 - *(uint *)((long)param_2 + 0x14)) * 0x20
    ;
  } while( true );
  if (uVar5 >> 0x10 == 0) {
    if (uVar5 < 0x100) {
      uVar5 = (byte)(&DAT_10115db50)[uVar5] + 0x18;
    }
    else {
      uVar5 = (byte)(&DAT_10115db50)[uVar5 >> 8] + 0x10;
    }
  }
  else if (uVar5 >> 0x18 == 0) {
    uVar5 = (byte)(&DAT_10115db50)[uVar5 >> 0x10] + 8;
  }
  else {
    uVar5 = (uint)(byte)(&DAT_10115db50)[uVar5 >> 0x18];
  }
  uVar9 = uVar5 + iVar8;
  uVar5 = uVar7 + uVar5 + 1;
LAB_10055a730:
  uVar10 = (iVar3 - uVar9) - 1;
  uVar7 = uVar5;
  if (param_5 != 0) {
    if (uVar10 < param_5) {
      do {
        *(int *)((long)param_2 + 0x14) = (int)uVar11;
        *(uint *)(param_2 + 3) = uVar5;
        iVar3 = FUN_100559650(param_1,param_2);
        if (iVar3 == 0) {
          return 0;
        }
        uVar11 = (ulong)*(uint *)((long)param_2 + 0x14);
        uVar4 = *(uint *)((long)param_2 + 0xc);
        uVar10 = ((int)param_2[2] * 8 - uVar5) + (uVar4 - *(uint *)((long)param_2 + 0x14)) * 0x20;
      } while (uVar10 < param_5);
    }
    else {
      uVar4 = *(uint *)((long)param_2 + 0xc);
    }
    uVar7 = param_5;
    if ((uint)uVar11 < uVar4) {
      if (uVar5 == 0) {
        uVar9 = *(uint *)(*param_2 + (uVar11 & 0xffffffff) * 4) >> (ulong)(uVar2 & 0x1f) |
                uVar9 << (ulong)(param_5 & 0x1f);
      }
      else {
        uVar4 = 0x20 - uVar5;
        uVar7 = *(uint *)(*param_2 + (uVar11 & 0xffffffff) * 4);
        if (uVar4 < param_5 || uVar4 - param_5 == 0) {
          uVar9 = uVar7 & 0xffffffffU >> (ulong)(uVar5 & 0x1f) | uVar9 << (ulong)(uVar4 & 0x1f);
          FUN_100559d6c(param_2);
          uVar11 = (ulong)((uint)uVar11 + 1);
          uVar7 = param_5 - uVar4;
          if (uVar4 != param_5) {
            uVar9 = *(uint *)(*param_2 + uVar11 * 4) >> (ulong)(0x20 - uVar7 & 0x1f) |
                    uVar9 << (ulong)(uVar7 & 0x1f);
          }
        }
        else {
          uVar9 = (uVar7 & 0xffffffffU >> (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar4 - param_5 & 0x1f)
                  | uVar9 << (ulong)(param_5 & 0x1f);
          uVar7 = uVar5 + param_5;
        }
      }
    }
    else {
      uVar4 = *(uint *)(*param_2 + (uVar11 & 0xffffffff) * 4);
      uVar11 = uVar11 & 0xffffffff;
      uVar1 = uVar4 >> (ulong)(uVar2 & 0x1f);
      if (uVar5 != 0) {
        uVar1 = (uVar4 & 0xffffffffU >> (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar2 - uVar5 & 0x1f);
        uVar7 = uVar5 + param_5;
      }
      uVar9 = uVar1 | uVar9 << (ulong)(param_5 & 0x1f);
    }
  }
  *param_3 = -(uVar9 & 1) ^ uVar9 >> 1;
  param_4 = param_4 + -1;
  if (param_4 == 0) {
    *(int *)((long)param_2 + 0x14) = (int)uVar11;
    *(uint *)(param_2 + 3) = uVar7;
    return 1;
  }
  iVar3 = uVar10 - param_5;
  param_3 = param_3 + 1;
  uVar5 = *(uint *)((long)param_2 + 0xc);
  goto LAB_10055a5ec;
}




undefined8
FUN_10055a94c(undefined8 param_1,undefined8 param_2,uint *param_3,long param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_54;
  
  iVar2 = FUN_100559be0(param_1,param_2,&local_54,8);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    uVar4 = *param_5;
    *param_5 = uVar4 + 1;
    *(char *)(param_4 + (ulong)uVar4) = (char)local_54;
  }
  uVar4 = local_54;
  if ((local_54 >> 7 & 1) != 0) {
    if (((local_54 & 0xc0) == 0) || ((local_54 & 0x20) != 0)) {
      if (((local_54 & 0xe0) == 0) || ((local_54 & 0x10) != 0)) {
        if (((local_54 & 0xf0) == 0) || ((local_54 & 8) != 0)) {
          if (((local_54 & 0xf8) == 0) || ((local_54 & 4) != 0)) {
            if (((local_54 & 0xfc) == 0) || ((local_54 & 2) != 0)) {
LAB_10055aa8c:
              *param_3 = 0xffffffff;
              return 1;
            }
            uVar4 = local_54 & 1;
            iVar2 = 5;
          }
          else {
            uVar4 = local_54 & 3;
            iVar2 = 4;
          }
        }
        else {
          uVar4 = local_54 & 7;
          iVar2 = 3;
        }
      }
      else {
        uVar4 = local_54 & 0xf;
        iVar2 = 2;
      }
    }
    else {
      uVar4 = local_54 & 0x1f;
      iVar2 = 1;
    }
    do {
      iVar3 = FUN_100559be0(param_1,param_2,&local_54,8);
      if (iVar3 == 0) {
        return 0;
      }
      if (param_4 != 0) {
        uVar1 = *param_5;
        *param_5 = uVar1 + 1;
        *(char *)(param_4 + (ulong)uVar1) = (char)local_54;
      }
      if ((local_54 & 0xc0) != 0x80) goto LAB_10055aa8c;
      uVar4 = uVar4 << 6 | local_54 & 0x3f;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_3 = uVar4;
  return 1;
}




undefined8
FUN_10055aabc(undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint local_54;
  
  iVar2 = FUN_100559be0(param_1,param_2,&local_54,8);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = (ulong)local_54;
  if (param_4 != 0) {
    uVar1 = *param_5;
    *param_5 = uVar1 + 1;
    *(char *)(param_4 + (ulong)uVar1) = (char)local_54;
  }
  if ((local_54 >> 7 & 1) != 0) {
    if ((local_54 & 0xc0) == 0 || (local_54 & 0x20) != 0) {
      if (((local_54 & 0xe0) == 0) || ((local_54 & 0x10) != 0)) {
        if (((local_54 & 0xf0) == 0) || ((local_54 & 8) != 0)) {
          if (((local_54 & 0xf8) == 0) || ((local_54 & 4) != 0)) {
            if (((local_54 & 0xfc) == 0) || ((local_54 & 2) != 0)) {
              if (((local_54 & 0xfe) == 0) || ((local_54 & 1) != 0)) {
LAB_10055ac20:
                uVar4 = 0xffffffffffffffff;
                goto LAB_10055ac24;
              }
              uVar4 = 0;
              iVar2 = 6;
            }
            else {
              uVar4 = (ulong)(local_54 & 1);
              iVar2 = 5;
            }
          }
          else {
            uVar4 = (ulong)(local_54 & 3);
            iVar2 = 4;
          }
        }
        else {
          uVar4 = (ulong)(local_54 & 7);
          iVar2 = 3;
        }
      }
      else {
        uVar4 = (ulong)(local_54 & 0xf);
        iVar2 = 2;
      }
    }
    else {
      uVar4 = (ulong)(local_54 & 0x1f);
      iVar2 = 1;
    }
    do {
      iVar3 = FUN_100559be0(param_1,param_2,&local_54,8);
      if (iVar3 == 0) {
        return 0;
      }
      if (param_4 != 0) {
        uVar1 = *param_5;
        *param_5 = uVar1 + 1;
        *(char *)(param_4 + (ulong)uVar1) = (char)local_54;
      }
      if ((local_54 & 0xc0) != 0x80) goto LAB_10055ac20;
      uVar4 = (ulong)(local_54 & 0x3f) | uVar4 << 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_10055ac24:
  *param_3 = uVar4;
  return 1;
}




void FUN_10055ac48(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    param_1[2] = (undefined1 *)param_1[1];
    *(undefined1 *)param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}




void FUN_10055ac64(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    param_1[2] = (undefined1 *)param_1[1];
    *(undefined1 *)param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}




void FUN_10055ac80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  return;
}




void FUN_10055ac94(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  return;
}




uint FUN_10055aca8(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (0x20 < param_2) {
    return 0xffffffff;
  }
  uVar2 = param_1[1];
  iVar1 = uVar2 + param_2;
  if (param_1[6] + -4 <= *param_1) {
    if (param_1[6] - (iVar1 + 7 >> 3) < *param_1) {
      return 0xffffffff;
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  pbVar4 = *(byte **)(param_1 + 4);
  uVar3 = (uint)(*pbVar4 >> (ulong)(uVar2 & 0x1f));
  if ((((8 < iVar1) && (uVar3 = (uint)pbVar4[1] << (ulong)(8 - uVar2 & 0x1f) | uVar3, 0x10 < iVar1))
      && (uVar3 = (uint)pbVar4[2] << (ulong)(0x10 - uVar2 & 0x1f) | uVar3, 0x18 < iVar1)) &&
     ((uVar3 = (uint)pbVar4[3] << (ulong)(0x18 - uVar2 & 0x1f) | uVar3, 0x20 < iVar1 && (uVar2 != 0)
      ))) {
    uVar3 = (uint)pbVar4[4] << (ulong)(0x20 - uVar2 & 0x1f) | uVar3;
  }
  return uVar3 & *(uint *)((long)&PTR___mh_execute_header_10115dc50 + (long)(int)param_2 * 4);
}




uint FUN_10055ad88(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar3 = -param_2 + 0x20;
  if ((int)(uVar3 | param_2) < 0) {
    return 0xffffffff;
  }
  uVar2 = param_1[1];
  iVar1 = uVar2 + param_2;
  if (param_1[6] + -4 <= *param_1) {
    if (param_1[6] - (iVar1 + 7 >> 3) < *param_1) {
      return 0xffffffff;
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  pbVar5 = *(byte **)(param_1 + 4);
  uVar4 = (uint)*pbVar5 << (ulong)(uVar2 + 0x18 & 0x1f);
  if ((((8 < iVar1) &&
       (uVar4 = (uint)pbVar5[1] << (ulong)(uVar2 + 0x10 & 0x1f) | uVar4, 0x10 < iVar1)) &&
      (uVar4 = (uint)pbVar5[2] << (ulong)(uVar2 + 8 & 0x1f) | uVar4, 0x18 < iVar1)) &&
     ((uVar4 = (uint)pbVar5[3] << (ulong)(uVar2 & 0x1f) | uVar4, 0x20 < iVar1 && (uVar2 != 0)))) {
    uVar4 = pbVar5[4] >> (ulong)(8 - uVar2 & 0x1f) | uVar4;
  }
  return (uVar4 >> (ulong)((int)uVar3 >> 1 & 0x1f)) >> (ulong)((int)(-param_2 + 0x21) >> 1 & 0x1f);
}




uint FUN_10055ae68(int *param_1)

{
  if (*param_1 < param_1[6]) {
    return **(byte **)(param_1 + 4) >> (ulong)(param_1[1] & 0x1f) & 1;
  }
  return 0xffffffff;
}




uint FUN_10055ae98(int *param_1)

{
  if (*param_1 < param_1[6]) {
    return **(byte **)(param_1 + 4) >> (ulong)(7U - param_1[1] & 0x1f) & 1;
  }
  return 0xffffffff;
}




void FUN_10055aed0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1] + param_2;
  if (param_1[6] - ((int)(uVar1 + 7) >> 3) < *param_1) {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_1[6];
    param_1[1] = 1;
    return;
  }
  uVar2 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (long)((int)uVar2 >> 3);
  *param_1 = *param_1 + ((int)uVar2 >> 3);
  param_1[1] = uVar1 & 7;
  return;
}




void FUN_10055af24(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1] + param_2;
  if (param_1[6] - ((int)(uVar1 + 7) >> 3) < *param_1) {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_1[6];
    param_1[1] = 1;
    return;
  }
  uVar2 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (long)((int)uVar2 >> 3);
  *param_1 = ((int)uVar2 >> 3) + *param_1;
  param_1[1] = uVar1 & 7;
  return;
}




void FUN_10055af78(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  if (6 < iVar1) {
    param_1[1] = 0;
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
    *param_1 = *param_1 + 1;
  }
  return;
}




void FUN_10055afac(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  if (6 < iVar1) {
    param_1[1] = 0;
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
    *param_1 = *param_1 + 1;
  }
  return;
}




uint FUN_10055afe0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  if (0x20 < param_2) {
    iVar5 = param_1[6];
LAB_10055b018:
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = iVar5;
    param_1[1] = 1;
    return 0xffffffff;
  }
  iVar2 = *param_1;
  uVar3 = param_1[1];
  uVar1 = uVar3 + param_2;
  iVar5 = param_1[6];
  if (iVar5 + -4 <= iVar2) {
    if (iVar5 - ((int)(uVar1 + 7) >> 3) < iVar2) goto LAB_10055b018;
    if (uVar1 == 0) {
      return 0;
    }
  }
  uVar4 = *(uint *)((long)&PTR___mh_execute_header_10115dc50 + (long)(int)param_2 * 4);
  pbVar6 = *(byte **)(param_1 + 4);
  uVar7 = (uint)(*pbVar6 >> (ulong)(uVar3 & 0x1f));
  if ((((8 < (int)uVar1) &&
       (uVar7 = (uint)pbVar6[1] << (ulong)(8 - uVar3 & 0x1f) | uVar7, 0x10 < (int)uVar1)) &&
      (uVar7 = (uint)pbVar6[2] << (ulong)(0x10 - uVar3 & 0x1f) | uVar7, 0x18 < (int)uVar1)) &&
     ((uVar7 = (uint)pbVar6[3] << (ulong)(0x18 - uVar3 & 0x1f) | uVar7, 0x20 < (int)uVar1 &&
      (uVar3 != 0)))) {
    uVar7 = (uint)pbVar6[4] << (ulong)(0x20 - uVar3 & 0x1f) | uVar7;
  }
  uVar3 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  *(byte **)(param_1 + 4) = pbVar6 + ((int)uVar3 >> 3);
  *param_1 = iVar2 + ((int)uVar3 >> 3);
  param_1[1] = uVar1 & 7;
  return uVar7 & uVar4;
}




uint FUN_10055b0fc(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  uVar4 = -param_2 + 0x20;
  if (-1 < (int)(uVar4 | param_2)) {
    iVar2 = *param_1;
    uVar3 = param_1[1];
    uVar1 = uVar3 + param_2;
    iVar5 = param_1[6];
    if (iVar5 <= iVar2 + 4) {
      if (iVar5 - ((int)(uVar1 + 7) >> 3) < iVar2) goto LAB_10055b1f0;
      if (uVar1 == 0) {
        return 0;
      }
    }
    pbVar6 = *(byte **)(param_1 + 4);
    uVar7 = (uint)*pbVar6 << (ulong)(uVar3 + 0x18 & 0x1f);
    if ((((8 < (int)uVar1) &&
         (uVar7 = (uint)pbVar6[1] << (ulong)(uVar3 + 0x10 & 0x1f) | uVar7, 0x10 < (int)uVar1)) &&
        (uVar7 = (uint)pbVar6[2] << (ulong)(uVar3 + 8 & 0x1f) | uVar7, 0x18 < (int)uVar1)) &&
       ((uVar7 = (uint)pbVar6[3] << (ulong)(uVar3 & 0x1f) | uVar7, 0x20 < (int)uVar1 && (uVar3 != 0)
        ))) {
      uVar7 = pbVar6[4] >> (ulong)(8 - uVar3 & 0x1f) | uVar7;
    }
    uVar3 = uVar1 + 7;
    if (-1 < (int)uVar1) {
      uVar3 = uVar1;
    }
    *(byte **)(param_1 + 4) = pbVar6 + ((int)uVar3 >> 3);
    *param_1 = iVar2 + ((int)uVar3 >> 3);
    param_1[1] = uVar1 & 7;
    return (uVar7 >> (ulong)((int)uVar4 >> 1 & 0x1f)) >> (ulong)((int)(-param_2 + 0x21) >> 1 & 0x1f)
    ;
  }
  iVar5 = param_1[6];
LAB_10055b1f0:
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = iVar5;
  param_1[1] = 1;
  return 0xffffffff;
}




uint FUN_10055b214(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 < param_1[6]) {
    uVar1 = param_1[1];
    uVar2 = **(byte **)(param_1 + 4) >> (ulong)(uVar1 & 0x1f) & 1;
    param_1[1] = uVar1 + 1;
    if (6 < (int)uVar1) {
      param_1[1] = 0;
      *(byte **)(param_1 + 4) = *(byte **)(param_1 + 4) + 1;
      *param_1 = *param_1 + 1;
      return uVar2;
    }
  }
  else {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_1[6];
    param_1[1] = 1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




uint FUN_10055b280(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 < param_1[6]) {
    iVar1 = param_1[1];
    uVar2 = **(byte **)(param_1 + 4) >> (ulong)(7U - iVar1 & 0x1f) & 1;
    param_1[1] = iVar1 + 1;
    if (6 < iVar1) {
      param_1[1] = 0;
      *(byte **)(param_1 + 4) = *(byte **)(param_1 + 4) + 1;
      *param_1 = *param_1 + 1;
      return uVar2;
    }
  }
  else {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_1[6];
    param_1[1] = 1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




int FUN_10055b2f4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1] + 7;
  iVar2 = param_1[1] + 0xe;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return *param_1 + (iVar2 >> 3);
}




int FUN_10055b310(int *param_1)

{
  return param_1[1] + *param_1 * 8;
}




int FUN_10055b31c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1] + 7;
  iVar2 = param_1[1] + 0xe;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return *param_1 + (iVar2 >> 3);
}




int FUN_10055b338(int *param_1)

{
  return param_1[1] + *param_1 * 8;
}




undefined8 FUN_10055b344(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_10055b34c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_10055b354(undefined8 param_1,undefined8 param_2,void *param_3)

{
  _memset(param_3,0,0x88);
  *(undefined8 *)((long)param_3 + 0x50) = param_2;
  *(undefined4 *)((long)param_3 + 100) = 0;
  *(undefined8 *)((long)param_3 + 0x58) = 0;
  return 0;
}




long FUN_10055b394(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar1 = param_3 + 7U & 0xfffffff8;
  iVar4 = *(int *)(param_2 + 0x60);
  lVar2 = *(long *)(param_2 + 0x58);
  if (*(int *)(param_2 + 100) < (int)(iVar4 + uVar1)) {
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_1005a03d8(param_1,0x10);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + *(int *)(param_2 + 0x60);
      puVar3[1] = *(undefined8 *)(param_2 + 0x70);
      *puVar3 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 **)(param_2 + 0x70) = puVar3;
    }
    *(uint *)(param_2 + 100) = uVar1;
    lVar2 = FUN_1005a03d8(param_1,uVar1);
    *(long *)(param_2 + 0x58) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    iVar4 = 0;
    *(undefined4 *)(param_2 + 0x60) = 0;
  }
  *(uint *)(param_2 + 0x60) = iVar4 + uVar1;
  return lVar2 + iVar4;
}




undefined4 FUN_10055b44c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined8 **)(param_2 + 0x70);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[1];
    FUN_1005a04e8(param_1,*puVar2);
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_1005a04e8(param_1,puVar2);
    puVar2 = puVar1;
  }
  if (*(int *)(param_2 + 0x68) == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_1005a0490(param_1,*(undefined8 *)(param_2 + 0x58),
                          *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68));
    *(long *)(param_2 + 0x58) = lVar3;
    uVar4 = 0xffffff75;
    if (lVar3 != 0) {
      uVar4 = 0;
    }
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68);
    *(undefined4 *)(param_2 + 0x68) = 0;
  }
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  return uVar4;
}




undefined8 FUN_10055b4e8(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10055b44c();
  if ((int)uVar1 == 0) {
    if (*(long *)((long)param_2 + 0x58) != 0) {
      FUN_1005a04e8(param_1);
    }
    _memset(param_2,0,0x88);
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_10055b534(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar5 + 0x20);
    }
    lVar4 = param_2[0xe];
    if (lVar4 != 0) {
      if (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0) {
        FUN_100602f5c(param_1,**(undefined8 **)(lVar4 + 8));
        FUN_1005a04e8(param_1,**(undefined8 **)(lVar4 + 8));
        FUN_1005a04e8(param_1,*(undefined8 *)(lVar4 + 8));
      }
      if (*(undefined8 **)(lVar4 + 0x10) != (undefined8 *)0x0) {
        FUN_100602f5c(param_1,**(undefined8 **)(lVar4 + 0x10));
        FUN_1005a04e8(param_1,**(undefined8 **)(lVar4 + 0x10));
        FUN_1005a04e8(param_1,*(undefined8 *)(lVar4 + 0x10));
      }
      puVar2 = *(undefined8 **)(lVar4 + 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x10))) {
          (**(code **)(*(long *)(&DAT_1014a3460 + (long)*(int *)(lVar6 + 0x520) * 8) + 0x20))
                    (param_1,*puVar2);
          if (1 < *(int *)(lVar6 + 0x10)) {
            lVar7 = 0;
            do {
              (**(code **)(*(long *)(&DAT_1014a3460 + (long)*(int *)(lVar6 + 0x524 + lVar7 * 4) * 8)
                          + 0x20))(param_1,*(undefined8 *)(*(long *)(lVar4 + 0x20) + lVar7 * 8 + 8))
              ;
              lVar1 = lVar7 + 2;
              lVar7 = lVar7 + 1;
            } while (lVar1 < *(int *)(lVar6 + 0x10));
          }
          puVar2 = *(undefined8 **)(lVar4 + 0x20);
        }
        FUN_1005a04e8(param_1,puVar2);
      }
      puVar2 = *(undefined8 **)(lVar4 + 0x28);
      if (puVar2 != (undefined8 *)0x0) {
        if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x14))) {
          (**(code **)((&PTR_DAT_1014a3470)[*(int *)(lVar6 + 0x820)] + 0x20))(param_1,*puVar2);
          if (1 < *(int *)(lVar6 + 0x14)) {
            lVar7 = 0;
            do {
              (**(code **)((&PTR_DAT_1014a3470)[*(int *)(lVar6 + 0x824 + lVar7 * 4)] + 0x20))
                        (param_1,*(undefined8 *)(*(long *)(lVar4 + 0x28) + lVar7 * 8 + 8));
              lVar1 = lVar7 + 2;
              lVar7 = lVar7 + 1;
            } while (lVar1 < *(int *)(lVar6 + 0x14));
          }
          puVar2 = *(undefined8 **)(lVar4 + 0x28);
        }
        FUN_1005a04e8(param_1,puVar2);
      }
    }
    lVar6 = param_2[1];
    if (lVar6 != 0) {
      if ((lVar5 != 0) && (iVar3 = *(int *)(lVar5 + 4), 0 < iVar3)) {
        lVar7 = 0;
        while( true ) {
          if (*(long *)(lVar6 + lVar7 * 8) != 0) {
            FUN_1005a04e8(param_1);
            iVar3 = *(int *)(lVar5 + 4);
          }
          lVar7 = lVar7 + 1;
          if (iVar3 <= lVar7) break;
          lVar6 = param_2[1];
        }
        lVar6 = param_2[1];
      }
      FUN_1005a04e8(param_1,lVar6);
      if (param_2[2] != 0) {
        FUN_1005a04e8(param_1);
      }
    }
    if (lVar4 != 0) {
      FUN_1005a04e8(param_1,lVar4);
    }
    _memset(param_2,0,0x78);
  }
  return;
}




undefined8 FUN_10055b784(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*param_1 != 0 && param_1[0xe] != 0) {
    lVar4 = *(long *)(*param_1 + 0x20);
    uVar3 = 0xffffffff;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x1328);
      iVar2 = *(int *)(lVar4 + 4);
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      iVar2 = iVar2 >> (uVar1 + 1 & 0x1f);
      *(int *)(param_1 + 7) = iVar2;
      *(int *)((long)param_1 + 0x1c) = iVar2 >> (uVar1 & 0x1f);
      param_1[8] = -1;
      param_1[9] = -1;
      *(undefined4 *)(param_1 + 5) = 0;
      *(undefined8 *)(param_1[0xe] + 0x30) = 0xffffffffffffffff;
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0xffffffff;
}




undefined8 FUN_10055b7ec(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  
  piVar8 = *(int **)(param_3 + 0x20);
  if (piVar8 == (int *)0x0) {
    uVar5 = 1;
  }
  else {
    uVar6 = piVar8[0x4ca];
    _memset(param_2,0,0x78);
    piVar3 = (int *)FUN_1005a0434(param_1,1,0x38);
    param_2[0xe] = (long)piVar3;
    if (piVar3 == (int *)0x0) {
      uVar5 = 0xffffff75;
    }
    else {
      iVar2 = 0;
      *param_2 = param_3;
      uVar7 = piVar8[2] - 1;
      if (piVar8[2] != 0 && uVar7 != 0) {
        do {
          iVar2 = iVar2 + 1;
          uVar7 = uVar7 >> 1;
        } while (uVar7 != 0);
      }
      piVar3[6] = iVar2;
      lVar4 = FUN_1005a0434(param_1,1,8);
      *(long *)(piVar3 + 2) = lVar4;
      if (lVar4 == 0) {
        uVar5 = 0xffffff75;
      }
      else {
        lVar4 = FUN_1005a0434(param_1,1,8);
        *(long *)(piVar3 + 4) = lVar4;
        if (lVar4 == 0) {
          uVar5 = 0xffffff75;
        }
        else {
          uVar5 = FUN_1005a0434(param_1,1,0x20);
          **(undefined8 **)(piVar3 + 2) = uVar5;
          if (**(long **)(piVar3 + 2) == 0) {
            uVar5 = 0xffffff75;
          }
          else {
            uVar5 = FUN_1005a0434(param_1,1,0x20);
            **(undefined8 **)(piVar3 + 4) = uVar5;
            if (**(long **)(piVar3 + 4) == 0) {
              uVar5 = 0xffffff75;
            }
            else {
              iVar2 = FUN_100602cf0(param_1,**(undefined8 **)(piVar3 + 2),*piVar8 >> (uVar6 & 0x1f))
              ;
              if (iVar2 == 0) {
                iVar2 = FUN_100602cf0(param_1,**(undefined8 **)(piVar3 + 4),
                                      piVar8[1] >> (uVar6 & 0x1f));
                if (iVar2 == 0) {
                  iVar2 = -6;
                  if ((*piVar8 != 0) && (uVar6 = *piVar8 - 1, uVar6 != 0)) {
                    iVar1 = -1;
                    do {
                      iVar2 = iVar1;
                      uVar6 = uVar6 >> 1;
                      iVar1 = iVar2 + 1;
                    } while (uVar6 != 0);
                    iVar2 = iVar2 + -4;
                  }
                  *piVar3 = iVar2;
                  uVar6 = piVar8[1] - 1;
                  if (piVar8[1] == 0 || uVar6 == 0) {
                    iVar2 = -6;
                  }
                  else {
                    iVar1 = -1;
                    do {
                      iVar2 = iVar1;
                      uVar6 = uVar6 >> 1;
                      iVar1 = iVar2 + 1;
                    } while (uVar6 != 0);
                    iVar2 = iVar2 + -4;
                  }
                  piVar3[1] = iVar2;
                  if (*(long *)(piVar8 + 0x4c8) == 0) {
                    lVar4 = FUN_1005a0434(param_1,piVar8[6],0x48);
                    *(long *)(piVar8 + 0x4c8) = lVar4;
                    if (lVar4 == 0) {
                      uVar5 = 0xffffff75;
                      goto LAB_10055b960;
                    }
                    if (0 < piVar8[6]) {
                      iVar2 = FUN_1006059a0(param_1,lVar4,*(undefined8 *)(piVar8 + 0x2c8));
                      lVar4 = 0x48;
                      if (iVar2 == 0) {
                        lVar9 = 0;
                        do {
                          FUN_1006058b4(param_1,*(undefined8 *)(piVar8 + lVar9 * 2 + 0x2c8));
                          (piVar8 + lVar9 * 2 + 0x2c8)[0] = 0;
                          (piVar8 + lVar9 * 2 + 0x2c8)[1] = 0;
                          if ((long)piVar8[6] <= lVar9 + 1) goto LAB_10055ba8c;
                          iVar2 = FUN_1006059a0(param_1,*(long *)(piVar8 + 0x4c8) + lVar4,
                                                *(undefined8 *)(piVar8 + lVar9 * 2 + 0x2ca));
                          lVar4 = lVar4 + 0x48;
                          uVar5 = 0xffffff75;
                          lVar9 = lVar9 + 1;
                        } while (iVar2 == 0);
                      }
                      else {
                        uVar5 = 0xffffff75;
                      }
                      goto LAB_10055b960;
                    }
                  }
LAB_10055ba8c:
                  *(int *)(param_2 + 3) = piVar8[1];
                  lVar4 = FUN_1005a03d8(param_1,*(int *)(param_3 + 4) << 3);
                  param_2[1] = lVar4;
                  if (lVar4 == 0) {
                    uVar5 = 0xffffff75;
                  }
                  else {
                    lVar4 = FUN_1005a03d8(param_1,*(int *)(param_3 + 4) << 3);
                    param_2[2] = lVar4;
                    if (lVar4 == 0) {
                      uVar5 = 0xffffff75;
                    }
                    else {
                      if (0 < *(int *)(param_3 + 4)) {
                        lVar4 = 0;
                        do {
                          uVar5 = FUN_1005a0434(param_1,(int)param_2[3],4);
                          *(undefined8 *)(param_2[1] + lVar4 * 8) = uVar5;
                          if (*(long *)(param_2[1] + lVar4 * 8) == 0) {
                            uVar5 = 0xffffff75;
                            goto LAB_10055b960;
                          }
                          lVar4 = lVar4 + 1;
                        } while (lVar4 < *(int *)(param_3 + 4));
                      }
                      *(undefined8 *)((long)param_2 + 0x2c) = 0;
                      iVar2 = piVar8[1];
                      if (iVar2 < 0) {
                        iVar2 = iVar2 + 1;
                      }
                      *(int *)(param_2 + 7) = iVar2 >> 1;
                      *(int *)((long)param_2 + 0x1c) = iVar2 >> 1;
                      lVar4 = FUN_1005a0434(param_1,piVar8[4],8);
                      *(long *)(piVar3 + 8) = lVar4;
                      if (lVar4 == 0) {
                        uVar5 = 0xffffff75;
                      }
                      else {
                        lVar4 = FUN_1005a0434(param_1,piVar8[5],8);
                        *(long *)(piVar3 + 10) = lVar4;
                        if (lVar4 != 0) {
                          if (0 < piVar8[4]) {
                            lVar4 = 0;
                            do {
                              uVar5 = (**(code **)(*(long *)(&DAT_1014a3460 +
                                                            (long)piVar8[lVar4 + 0x148] * 8) + 0x10)
                                      )(param_1,param_2,*(undefined8 *)(piVar8 + lVar4 * 2 + 0x188))
                              ;
                              *(undefined8 *)(*(long *)(piVar3 + 8) + lVar4 * 8) = uVar5;
                              lVar4 = lVar4 + 1;
                            } while (lVar4 < piVar8[4]);
                          }
                          if (0 < piVar8[5]) {
                            lVar4 = 0;
                            do {
                              uVar5 = (**(code **)((&PTR_DAT_1014a3470)[piVar8[lVar4 + 0x208]] +
                                                  0x10))(param_1,param_2,
                                                         *(undefined8 *)(piVar8 + lVar4 * 2 + 0x248)
                                                        );
                              *(undefined8 *)(*(long *)(piVar3 + 10) + lVar4 * 8) = uVar5;
                              lVar4 = lVar4 + 1;
                            } while (lVar4 < piVar8[5]);
                          }
                          if (*param_2 == 0) {
                            return 0;
                          }
                          if (param_2[0xe] == 0) {
                            return 0;
                          }
                          lVar4 = *(long *)(*param_2 + 0x20);
                          if (lVar4 != 0) {
                            uVar6 = *(uint *)(lVar4 + 0x1328);
                            iVar2 = *(int *)(lVar4 + 4) >> (uVar6 + 1 & 0x1f);
                            *(int *)(param_2 + 7) = iVar2;
                            *(int *)((long)param_2 + 0x1c) = iVar2 >> (uVar6 & 0x1f);
                            *(undefined4 *)(param_2 + 4) = 0xffffffff;
                            param_2[8] = -1;
                            param_2[9] = -1;
                            *(undefined4 *)(param_2 + 5) = 0;
                            *(undefined8 *)(param_2[0xe] + 0x30) = 0xffffffffffffffff;
                            return 0;
                          }
                          return 0;
                        }
                        uVar5 = 0xffffff75;
                      }
                    }
                  }
                }
                else {
                  uVar5 = 0xffffff75;
                }
              }
              else {
                uVar5 = 0xffffff75;
              }
            }
          }
        }
      }
    }
  }
LAB_10055b960:
  FUN_10055b534(param_1,param_2);
  return uVar5;
}




undefined8 FUN_10055bc8c(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  long lVar28;
  int iVar29;
  
  lVar28 = *param_1;
  piVar26 = *(int **)(lVar28 + 0x20);
  uVar6 = piVar26[0x4ca];
  if (param_2 == (long *)0x0) {
    return 0xffffff7d;
  }
  iVar25 = *(int *)((long)param_1 + 0x1c);
  iVar11 = (int)param_1[4];
  if (iVar11 < iVar25 && iVar11 != -1) {
    return 0xffffff7d;
  }
  piVar27 = (int *)param_1[0xe];
  iVar15 = (int)param_1[6];
  *(int *)((long)param_1 + 0x2c) = iVar15;
  iVar29 = *(int *)((long)param_2 + 0x2c);
  *(int *)(param_1 + 6) = iVar29;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  if (param_1[9] == -1) {
    lVar18 = param_2[9];
  }
  else {
    lVar12 = param_1[9] + 1;
    lVar18 = param_2[9];
    if (lVar12 == lVar18) goto LAB_10055bd30;
  }
  param_1[8] = -1;
  piVar27[0xc] = -1;
  piVar27[0xd] = -1;
  lVar12 = lVar18;
LAB_10055bd30:
  param_1[9] = lVar12;
  if (*param_2 != 0) {
    iVar7 = piVar26[iVar29];
    uVar1 = uVar6 + 1;
    iVar5 = *piVar26;
    iVar3 = piVar26[1] >> (uVar1 & 0x1f);
    param_1[10] = param_1[10] + (long)(int)param_2[0xf];
    param_1[0xb] = param_1[0xb] + (long)*(int *)((long)param_2 + 0x7c);
    param_1[0xc] = param_1[0xc] + (long)(int)param_2[0x10];
    param_1[0xd] = param_1[0xd] + (long)*(int *)((long)param_2 + 0x84);
    iVar23 = (int)param_1[7];
    iVar4 = iVar3;
    if (iVar23 != 0) {
      iVar4 = 0;
    }
    iVar25 = 0;
    if (iVar23 != 0) {
      iVar25 = iVar3;
    }
    if (0 < *(int *)(lVar28 + 4)) {
      lVar18 = 0;
      iVar7 = iVar7 >> (uVar1 & 0x1f);
      iVar5 = iVar5 >> (uVar1 & 0x1f);
      iVar11 = iVar3;
      if (iVar3 < 0) {
        iVar11 = iVar3 + 1;
      }
      iVar11 = iVar11 >> 1;
      iVar23 = iVar5;
      if (iVar5 < 0) {
        iVar23 = iVar5 + 1;
      }
      iVar23 = iVar23 >> 1;
      iVar8 = iVar5 + -1;
      lVar21 = (long)iVar4;
      lVar12 = (long)iVar11 - (long)iVar23;
      while( true ) {
        if (iVar15 == 0) {
          pfVar10 = (float *)FUN_100612380(*piVar27 - uVar6);
          lVar13 = *(long *)(param_1[1] + lVar18 * 8);
          lVar16 = *(long *)(*param_2 + lVar18 * 8);
          if (iVar29 == 0) {
            if (0 < iVar5) {
              lVar9 = 0;
              lVar19 = lVar13 + lVar21 * 4;
              iVar15 = iVar8;
              do {
                *(float *)(lVar19 + lVar9) =
                     *(float *)(lVar19 + lVar9) * pfVar10[iVar15] +
                     *(float *)(lVar16 + lVar9) * *(float *)((long)pfVar10 + lVar9);
                lVar9 = lVar9 + 4;
                iVar15 = iVar15 + -1;
              } while (iVar15 != -1);
            }
          }
          else {
            if (iVar5 < 1) {
              iVar15 = 0;
            }
            else {
              pfVar20 = (float *)(lVar16 + lVar12 * 4);
              pfVar22 = pfVar10;
              pfVar24 = (float *)(lVar13 + lVar21 * 4);
              iVar29 = iVar8;
              do {
                *pfVar24 = *pfVar24 * pfVar10[iVar29] + *pfVar20 * *pfVar22;
                iVar29 = iVar29 + -1;
                pfVar20 = pfVar20 + 1;
                pfVar22 = pfVar22 + 1;
                pfVar24 = pfVar24 + 1;
                iVar15 = iVar5;
              } while (iVar29 != -1);
            }
            if (iVar15 < iVar23 + iVar11) {
              iVar29 = (iVar23 + iVar11) - iVar15;
              puVar14 = (undefined4 *)(lVar13 + (lVar21 + iVar15) * 4);
              puVar17 = (undefined4 *)(lVar16 + (lVar12 + iVar15) * 4);
              do {
                *puVar14 = *puVar17;
                iVar29 = iVar29 + -1;
                puVar14 = puVar14 + 1;
                puVar17 = puVar17 + 1;
              } while (iVar29 != 0);
            }
          }
        }
        else if (iVar29 == 0) {
          lVar9 = FUN_100612380(*piVar27 - uVar6);
          lVar13 = *(long *)(param_1[1] + lVar18 * 8);
          lVar16 = *(long *)(*param_2 + lVar18 * 8);
          if (0 < iVar5) {
            lVar19 = 0;
            lVar2 = lVar13 + ((lVar21 + iVar11) - (long)iVar23) * 4;
            iVar15 = iVar8;
            do {
              *(float *)(lVar2 + lVar19) =
                   *(float *)(lVar2 + lVar19) * *(float *)(lVar9 + (long)iVar15 * 4) +
                   *(float *)(lVar16 + lVar19) * *(float *)(lVar9 + lVar19);
              lVar19 = lVar19 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != -1);
          }
        }
        else {
          lVar9 = FUN_100612380(piVar27[1] - uVar6);
          lVar13 = *(long *)(param_1[1] + lVar18 * 8);
          lVar16 = *(long *)(*param_2 + lVar18 * 8);
          if (0 < iVar3) {
            lVar19 = 0;
            lVar2 = lVar13 + lVar21 * 4;
            iVar15 = iVar3 + -1;
            do {
              *(float *)(lVar2 + lVar19) =
                   *(float *)(lVar2 + lVar19) * *(float *)(lVar9 + (long)iVar15 * 4) +
                   *(float *)(lVar16 + lVar19) * *(float *)(lVar9 + lVar19);
              lVar19 = lVar19 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != -1);
          }
        }
        if (0 < iVar7) {
          puVar14 = (undefined4 *)(lVar13 + (long)iVar25 * 4);
          puVar17 = (undefined4 *)(lVar16 + (long)iVar7 * 4);
          iVar15 = iVar7;
          do {
            *puVar14 = *puVar17;
            iVar15 = iVar15 + -1;
            puVar14 = puVar14 + 1;
            puVar17 = puVar17 + 1;
          } while (iVar15 != 0);
        }
        lVar18 = lVar18 + 1;
        if (*(int *)(lVar28 + 4) <= lVar18) break;
        iVar15 = *(int *)((long)param_1 + 0x2c);
        iVar29 = (int)param_1[6];
      }
      iVar23 = (int)param_1[7];
      iVar11 = (int)param_1[4];
    }
    if (iVar23 != 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 7) = iVar3;
    if (iVar11 == -1) {
      *(int *)((long)param_1 + 0x1c) = iVar25;
      *(int *)(param_1 + 4) = iVar25;
      iVar11 = iVar25;
    }
    else {
      *(int *)(param_1 + 4) = iVar4;
      iVar11 = piVar26[*(int *)((long)param_1 + 0x2c)];
      iVar25 = iVar11 + 3;
      if (-1 < iVar11) {
        iVar25 = iVar11;
      }
      iVar15 = piVar26[(int)param_1[6]];
      iVar11 = iVar15 + 3;
      if (-1 < iVar15) {
        iVar11 = iVar15;
      }
      iVar25 = ((iVar11 >> 2) + (iVar25 >> 2) >> (uVar6 & 0x1f)) + iVar4;
      *(int *)((long)param_1 + 0x1c) = iVar25;
      iVar11 = iVar4;
    }
  }
  if (*(long *)(piVar27 + 0xc) == -1) {
    lVar28 = 0;
  }
  else {
    iVar29 = piVar26[*(int *)((long)param_1 + 0x2c)];
    iVar15 = iVar29 + 3;
    if (-1 < iVar29) {
      iVar15 = iVar29;
    }
    iVar3 = piVar26[(int)param_1[6]];
    iVar29 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar29 = iVar3;
    }
    lVar28 = *(long *)(piVar27 + 0xc) + (long)((iVar29 >> 2) + (iVar15 >> 2));
  }
  *(long *)(piVar27 + 0xc) = lVar28;
  if (param_1[8] == -1) {
    lVar18 = param_2[8];
    if (lVar18 != -1) {
      param_1[8] = lVar18;
      if (lVar28 - lVar18 != 0 && lVar18 <= lVar28) {
        iVar15 = (int)(lVar28 - lVar18 >> ((ulong)uVar6 & 0x3f));
        if (*(int *)((long)param_2 + 0x3c) == 0) {
          iVar11 = iVar11 + iVar15;
          if (iVar11 <= iVar25) {
            iVar25 = iVar11;
          }
          *(int *)(param_1 + 4) = iVar25;
        }
        else {
          *(int *)((long)param_1 + 0x1c) = iVar25 - iVar15;
        }
      }
    }
  }
  else {
    iVar15 = piVar26[*(int *)((long)param_1 + 0x2c)];
    iVar11 = iVar15 + 3;
    if (-1 < iVar15) {
      iVar11 = iVar15;
    }
    iVar29 = piVar26[(int)param_1[6]];
    iVar15 = iVar29 + 3;
    if (-1 < iVar29) {
      iVar15 = iVar29;
    }
    lVar28 = param_1[8] + (long)((iVar15 >> 2) + (iVar11 >> 2));
    param_1[8] = lVar28;
    lVar18 = param_2[8];
    if ((lVar18 != -1) && (lVar28 != lVar18)) {
      if ((lVar18 < lVar28) &&
         ((iVar11 = (int)lVar28 - (int)lVar18, iVar11 != 0 && (*(int *)((long)param_2 + 0x3c) != 0))
         )) {
        *(int *)((long)param_1 + 0x1c) = iVar25 - (iVar11 >> (uVar6 & 0x1f));
      }
      param_1[8] = lVar18;
    }
  }
  if (*(int *)((long)param_2 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 5) = 1;
  }
  return 0;
}




int FUN_10055c21c(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = (int)param_1[4];
  if (iVar2 < 0) {
    return 0;
  }
  iVar1 = *(int *)((long)param_1 + 0x1c);
  if (iVar1 <= iVar2) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
    iVar3 = *(int *)(*param_1 + 4);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        *(long *)(param_1[2] + lVar4 * 8) = *(long *)(param_1[1] + lVar4 * 8) + (long)iVar2 * 4;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    *param_2 = param_1[2];
  }
  return iVar1 - iVar2;
}




undefined8 FUN_10055c294(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x20) + param_2)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_2;
  return 0;
}




int FUN_10055c2cc(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  
  iVar14 = (int)param_1[4];
  if (iVar14 < 0) {
    return 0;
  }
  lVar16 = *param_1;
  piVar15 = *(int **)(lVar16 + 0x20);
  uVar8 = *(uint *)(param_1 + 6);
  iVar7 = piVar15[(int)uVar8];
  uVar2 = piVar15[0x4ca] + 1;
  iVar5 = *piVar15;
  iVar3 = piVar15[1] >> (uVar2 & 0x1f);
  if ((int)param_1[7] == iVar3) {
    iVar17 = *(int *)(lVar16 + 4);
    if (0 < iVar17) {
      lVar18 = 0;
      lVar19 = param_1[1];
      do {
        if (0 < iVar3) {
          puVar10 = *(undefined4 **)(lVar19 + lVar18 * 8);
          iVar11 = iVar3;
          do {
            uVar6 = *puVar10;
            *puVar10 = puVar10[iVar3];
            puVar10[iVar3] = uVar6;
            iVar11 = iVar11 + -1;
            puVar10 = puVar10 + 1;
          } while (iVar11 != 0);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar17);
    }
    iVar14 = iVar14 - iVar3;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) - iVar3;
    *(int *)(param_1 + 4) = iVar14;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  iVar5 = iVar5 >> (uVar2 & 0x1f);
  if ((uVar8 ^ *(uint *)((long)param_1 + 0x2c)) == 1) {
    iVar11 = *(int *)(lVar16 + 4);
    if (iVar11 < 1) {
      iVar5 = iVar3 - iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      iVar17 = iVar5 >> 1;
    }
    else {
      lVar18 = 0;
      lVar19 = param_1[1];
      iVar17 = iVar3 - iVar5;
      if (iVar17 < 0) {
        iVar17 = iVar17 + 1;
      }
      iVar17 = iVar17 >> 1;
      iVar5 = iVar3 + iVar5;
      iVar4 = iVar5;
      if (iVar5 < 0) {
        iVar4 = iVar5 + 1;
      }
      do {
        if (1 < iVar5) {
          lVar12 = *(long *)(lVar19 + lVar18 * 8);
          lVar13 = (long)(iVar4 >> 1);
          do {
            *(undefined4 *)(lVar12 + ((long)iVar17 + -1) * 4 + lVar13 * 4) =
                 *(undefined4 *)(lVar12 + -4 + lVar13 * 4);
            lVar9 = lVar13 + -1;
            bVar1 = 0 < lVar13;
            lVar13 = lVar9;
          } while (lVar9 != 0 && bVar1);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar11);
    }
    iVar14 = iVar14 + iVar17;
    *(int *)(param_1 + 4) = iVar14;
    iVar17 = *(int *)((long)param_1 + 0x1c) + iVar17;
  }
  else {
    if (*(uint *)((long)param_1 + 0x2c) != 0) goto LAB_10055c4a4;
    iVar17 = *(int *)(lVar16 + 4);
    if (0 < iVar17) {
      lVar18 = 0;
      lVar19 = param_1[1];
      do {
        if (0 < iVar5) {
          lVar12 = *(long *)(lVar19 + lVar18 * 8);
          puVar10 = (undefined4 *)(lVar12 + ((long)iVar3 + -1) * 4);
          lVar13 = (long)iVar5;
          do {
            *puVar10 = *(undefined4 *)(lVar12 + (lVar13 + -1) * 4);
            bVar1 = 1 < lVar13;
            puVar10 = puVar10 + -1;
            lVar13 = lVar13 + -1;
          } while (bVar1);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar17);
    }
    iVar14 = iVar14 + (iVar3 - iVar5);
    *(int *)(param_1 + 4) = iVar14;
    iVar17 = *(int *)((long)param_1 + 0x1c) + (iVar3 - iVar5);
  }
  *(int *)((long)param_1 + 0x1c) = iVar17;
LAB_10055c4a4:
  if (param_2 != (long *)0x0) {
    iVar5 = *(int *)(lVar16 + 4);
    if (0 < iVar5) {
      lVar16 = 0;
      do {
        *(long *)(param_1[2] + lVar16 * 8) = *(long *)(param_1[1] + lVar16 * 8) + (long)iVar14 * 4;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar5);
    }
    *param_2 = param_1[2];
  }
  return (iVar3 + (iVar7 >> (uVar2 & 0x1f))) - iVar14;
}




undefined8 FUN_10055c504(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1[0xe] + (long)param_2 * 4);
  if (0 < iVar1) {
    uVar2 = FUN_100612380(iVar1 - *(int *)(*(long *)(*param_1 + 0x20) + 0x1328));
    return uVar2;
  }
  return 0;
}




undefined8 FUN_10055c530(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[0xc] = 1;
  iVar1 = FUN_10055afe0(param_2,0x18);
  if (iVar1 == 0x564342) {
    iVar1 = FUN_10055afe0(param_2,0x10);
    *param_3 = iVar1;
    iVar1 = FUN_10055afe0(param_2,0x18);
    param_3[1] = iVar1;
    if (iVar1 != -1) {
      iVar1 = FUN_100605098(*param_3);
      iVar2 = FUN_100605098(param_3[1]);
      if (iVar2 + iVar1 < 0x19) {
        iVar1 = FUN_10055afe0(param_2,1);
        if (iVar1 == 1) {
          iVar1 = FUN_10055afe0(param_2,5);
          lVar4 = FUN_1005a03d8(param_1,param_3[1] << 2);
          *(long *)(param_3 + 2) = lVar4;
          if (lVar4 == 0) {
            uVar5 = 0xffffff75;
            goto LAB_10055c878;
          }
          iVar2 = param_3[1];
          if (0 < iVar2) {
            lVar4 = 0;
            do {
              uVar5 = FUN_100605098(iVar2 - (int)lVar4);
              iVar2 = FUN_10055afe0(param_2,uVar5);
              if (iVar2 == -1) goto LAB_10055c874;
              iVar1 = iVar1 + 1;
              if (0 < iVar2) {
                iVar6 = 0;
                lVar4 = (long)(int)lVar4;
                do {
                  if (param_3[1] <= lVar4) break;
                  *(int *)(*(long *)(param_3 + 2) + lVar4 * 4) = iVar1;
                  iVar6 = iVar6 + 1;
                  lVar4 = lVar4 + 1;
                } while (iVar6 < iVar2);
              }
              iVar2 = param_3[1];
            } while ((int)lVar4 < iVar2);
          }
        }
        else {
          if (iVar1 != 0) {
            return 0xffffffff;
          }
          lVar4 = FUN_1005a03d8(param_1,param_3[1] << 2);
          *(long *)(param_3 + 2) = lVar4;
          if (lVar4 == 0) {
            uVar5 = 0xffffff75;
            goto LAB_10055c878;
          }
          iVar1 = FUN_10055afe0(param_2,1);
          if (iVar1 == 0) {
            if (0 < param_3[1]) {
              lVar4 = 0;
              do {
                iVar1 = FUN_10055afe0(param_2,5);
                if (iVar1 == -1) goto LAB_10055c874;
                *(int *)(*(long *)(param_3 + 2) + lVar4 * 4) = iVar1 + 1;
                lVar4 = lVar4 + 1;
              } while (lVar4 < param_3[1]);
            }
          }
          else if (0 < param_3[1]) {
            lVar4 = 0;
            do {
              iVar1 = FUN_10055afe0(param_2,1);
              if (iVar1 == 0) {
                *(undefined4 *)(*(long *)(param_3 + 2) + lVar4 * 4) = 0;
              }
              else {
                iVar1 = FUN_10055afe0(param_2,5);
                if (iVar1 == -1) goto LAB_10055c874;
                *(int *)(*(long *)(param_3 + 2) + lVar4 * 4) = iVar1 + 1;
              }
              lVar4 = lVar4 + 1;
            } while (lVar4 < param_3[1]);
          }
        }
        iVar1 = FUN_10055afe0(param_2,4);
        param_3[4] = iVar1;
        if (iVar1 == 0) {
          return 0;
        }
        if (iVar1 - 1U < 2) {
          iVar1 = FUN_10055afe0(param_2,0x20);
          param_3[5] = iVar1;
          iVar1 = FUN_10055afe0(param_2,0x20);
          param_3[6] = iVar1;
          iVar1 = FUN_10055afe0(param_2,4);
          param_3[7] = iVar1 + 1;
          iVar1 = FUN_10055afe0(param_2,1);
          param_3[8] = iVar1;
          if (iVar1 != -1) {
            if (param_3[4] == 2) {
              iVar1 = *param_3 * param_3[1];
            }
            else if (param_3[4] == 1) {
              if (*param_3 == 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = FUN_1006053c4(param_3);
              }
            }
            else {
              iVar1 = 0;
            }
            lVar4 = FUN_1005a03d8(param_1,iVar1 << 2);
            *(long *)(param_3 + 10) = lVar4;
            if (lVar4 == 0) {
              uVar5 = 0xffffff75;
              goto LAB_10055c878;
            }
            if (0 < iVar1) {
              lVar7 = 0;
              do {
                uVar3 = FUN_10055afe0(param_2,param_3[7]);
                lVar4 = *(long *)(param_3 + 10);
                *(undefined4 *)(lVar4 + lVar7 * 4) = uVar3;
                lVar7 = lVar7 + 1;
              } while (iVar1 != (int)lVar7);
            }
            if (iVar1 == 0) {
              return 0;
            }
            if (*(int *)(lVar4 + (long)(iVar1 + -1) * 4) != -1) {
              return 0;
            }
          }
        }
      }
    }
  }
LAB_10055c874:
  uVar5 = 0xffffffff;
LAB_10055c878:
  FUN_10060585c(param_1,param_3);
  return uVar5;
}




undefined4 FUN_10055c8b0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_10055c8fc(param_1);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)iVar1 * 4);
    }
  }
  return uVar2;
}




ulong FUN_10055c8fc(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 0x44);
  iVar4 = FUN_10055aca8(param_2,*(undefined4 *)(param_1 + 0x40));
  if (iVar4 < 0) {
    uVar9 = 0;
    iVar4 = *(int *)(param_1 + 8);
LAB_10055c960:
    uVar6 = FUN_10055aca8(param_2,iVar10);
    uVar7 = (uint)(uVar6 >> 0x1f) & 1;
    uVar5 = (uint)uVar6;
    if (((int)uVar5 < 0) && (1 < iVar10)) {
      iVar8 = iVar10 + -1;
      do {
        iVar10 = iVar8;
        uVar5 = FUN_10055aca8(param_2,iVar10);
        if (-1 < (int)uVar5) break;
        iVar8 = iVar10 + -1;
      } while (iVar10 + -1 != 0 && 0 < iVar10);
      uVar7 = uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      iVar8 = iVar4 - (int)uVar9;
      if (1 < iVar8) {
        uVar7 = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar7 = uVar7 >> 8 & 0xff00ff | (uVar7 & 0xff00ff) << 8;
        uVar7 = uVar7 >> 4 & 0xf0f0f0f | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = uVar7 >> 2 & 0x33333333 | (uVar7 & 0x33333333) << 2;
        uVar7 = uVar7 >> 1 & 0x55555555 | (uVar7 & 0x55555555) << 1;
        do {
          iVar8 = iVar8 >> 1;
          uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (long)(iVar8 + (int)uVar9) * 4);
          iVar2 = 0;
          if (uVar5 <= uVar7) {
            iVar2 = iVar8;
          }
          uVar1 = iVar2 + (int)uVar9;
          uVar9 = (ulong)uVar1;
          if (uVar5 <= uVar7) {
            iVar8 = 0;
          }
          iVar4 = iVar4 - iVar8;
          iVar8 = iVar4 - uVar1;
        } while (1 < iVar8);
      }
      cVar3 = *(char *)(*(long *)(param_1 + 0x30) + (long)(int)uVar9);
      if (cVar3 <= iVar10) goto LAB_10055ca58;
      FUN_10055aed0(param_2,iVar10);
    }
    uVar9 = 0xffffffff;
  }
  else {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x38) + (long)iVar4 * 4);
    if ((int)uVar7 < 0) {
      uVar9 = (ulong)(uVar7 >> 0xf & 0x7fff);
      iVar4 = *(int *)(param_1 + 8) - (uVar7 & 0x7fff);
      goto LAB_10055c960;
    }
    uVar9 = (long)(int)uVar7 - 1;
    cVar3 = *(char *)(*(long *)(param_1 + 0x30) + uVar9);
LAB_10055ca58:
    FUN_10055aed0(param_2,(long)cVar3);
  }
  return uVar9;
}




void FUN_10055ca78(int *param_1,float *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long alStack_60 [2];
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  alStack_60[1] = lVar9;
  if (0 < param_1[2]) {
    iVar5 = *param_1;
    uVar1 = 0;
    if (iVar5 != 0) {
      uVar1 = param_4 / iVar5;
    }
    uVar10 = (ulong)uVar1;
    plVar11 = (long *)((long)alStack_60 -
                      ((-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3) + 0xf &
                      0xfffffffffffffff0));
    if (0 < (int)uVar1) {
      lVar12 = 0;
      do {
        iVar3 = FUN_10055c8fc(param_1,param_3);
        if (iVar3 == -1) {
          uVar4 = 0xffffffff;
          goto LAB_10055cb80;
        }
        iVar5 = *param_1;
        plVar11[lVar12] = *(long *)(param_1 + 6) + (long)(iVar5 * iVar3) * 4;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uVar1);
    }
    if (0 < iVar5) {
      lVar12 = 0;
      do {
        plVar6 = plVar11;
        pfVar7 = param_2;
        uVar8 = uVar10;
        if (0 < (int)uVar1) {
          do {
            *pfVar7 = *(float *)(*plVar6 + lVar12 * 4) + *pfVar7;
            uVar2 = (int)uVar8 - 1;
            uVar8 = (ulong)uVar2;
            plVar6 = plVar6 + 1;
            pfVar7 = pfVar7 + 1;
          } while (uVar2 != 0);
        }
        lVar12 = lVar12 + 1;
        param_2 = (float *)((long)param_2 +
                           (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2));
      } while (lVar12 < iVar5);
    }
  }
  uVar4 = 0;
LAB_10055cb80:
  if (lVar9 == alStack_60[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




undefined8 FUN_10055cbac(int *param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0 < param_1[2]) {
    if (*param_1 < 9) {
      uVar5 = 0;
      while ((int)uVar5 < param_4) {
        iVar4 = FUN_10055c8fc(param_1,param_3);
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        if (*param_1 - 1U < 8) {
          lVar9 = *(long *)(param_1 + 6);
          switch(*param_1) {
          case 1:
            iVar7 = 0;
            lVar6 = (long)iVar4;
            goto LAB_10055cd38;
          case 2:
            iVar3 = 0;
            lVar6 = (long)(iVar4 << 1);
            goto LAB_10055cee0;
          case 3:
            iVar7 = 0;
            lVar6 = (long)(iVar4 * 3);
            goto LAB_10055cebc;
          case 4:
            iVar3 = 0;
            lVar6 = (long)(iVar4 << 2);
            goto LAB_10055ce98;
          case 5:
            iVar7 = 0;
            lVar6 = (long)(iVar4 * 5);
            goto LAB_10055ce74;
          case 6:
            iVar3 = 0;
            lVar6 = (long)(iVar4 * 6);
            goto LAB_10055ce50;
          case 7:
            uVar8 = 0;
            iVar4 = iVar4 * 7;
            break;
          case 8:
            iVar4 = iVar4 << 3;
            uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
            uVar5 = (ulong)((int)uVar5 + 1);
            *(float *)(param_2 + uVar11) =
                 *(float *)(lVar9 + (long)iVar4 * 4) + *(float *)(param_2 + uVar11);
            uVar8 = 1;
          }
          lVar6 = (long)iVar4;
          iVar3 = uVar8 + 1;
          uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
          uVar5 = (ulong)((int)uVar5 + 1);
          *(float *)(param_2 + uVar11) =
               *(float *)(lVar9 + (lVar6 + (ulong)uVar8) * 4) + *(float *)(param_2 + uVar11);
LAB_10055ce50:
          iVar7 = iVar3 + 1;
          uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
          uVar5 = (ulong)((int)uVar5 + 1);
          *(float *)(param_2 + uVar11) =
               *(float *)(lVar9 + (lVar6 + iVar3) * 4) + *(float *)(param_2 + uVar11);
LAB_10055ce74:
          iVar3 = iVar7 + 1;
          uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
          uVar5 = (ulong)((int)uVar5 + 1);
          *(float *)(param_2 + uVar11) =
               *(float *)(lVar9 + (lVar6 + iVar7) * 4) + *(float *)(param_2 + uVar11);
LAB_10055ce98:
          iVar7 = iVar3 + 1;
          uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
          uVar5 = (ulong)((int)uVar5 + 1);
          *(float *)(param_2 + uVar11) =
               *(float *)(lVar9 + (lVar6 + iVar3) * 4) + *(float *)(param_2 + uVar11);
LAB_10055cebc:
          iVar3 = iVar7 + 1;
          uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
          uVar5 = (ulong)((int)uVar5 + 1);
          *(float *)(param_2 + uVar11) =
               *(float *)(lVar9 + (lVar6 + iVar7) * 4) + *(float *)(param_2 + uVar11);
LAB_10055cee0:
          iVar7 = iVar3 + 1;
          uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
          uVar5 = (ulong)((int)uVar5 + 1);
          *(float *)(param_2 + uVar11) =
               *(float *)(lVar9 + (lVar6 + iVar3) * 4) + *(float *)(param_2 + uVar11);
LAB_10055cd38:
          uVar11 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
          uVar5 = (ulong)((int)uVar5 + 1);
          *(float *)(param_2 + uVar11) =
               *(float *)(lVar9 + (lVar6 + iVar7) * 4) + *(float *)(param_2 + uVar11);
        }
      }
    }
    else if (0 < param_4) {
      iVar4 = 0;
      do {
        iVar3 = FUN_10055c8fc(param_1,param_3);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        iVar7 = *param_1;
        uVar5 = (ulong)iVar7;
        if (0 < iVar7) {
          lVar6 = *(long *)(param_1 + 6);
          lVar9 = (long)iVar4;
          iVar1 = iVar7 + -1;
          if (iVar7 < 2) {
            iVar1 = 0;
          }
          if (iVar7 == 0) {
            uVar11 = 0;
LAB_10055cce8:
            pfVar10 = (float *)(param_2 + lVar9 * 4);
            do {
              lVar9 = uVar11 * 4;
              uVar11 = uVar11 + 1;
              *pfVar10 = *(float *)(lVar6 + (long)(iVar3 * iVar7) * 4 + lVar9) + *pfVar10;
              pfVar10 = pfVar10 + 1;
            } while ((long)uVar11 < (long)uVar5);
          }
          else {
            uVar11 = uVar5 & 0xfffffffffffffff8;
            if (uVar11 == 0) {
              uVar11 = 0;
            }
            else {
              lVar14 = (long)iVar4;
              if ((lVar6 + (uVar5 + (long)(iVar3 * iVar7)) * 4) - 4 < (ulong)(param_2 + lVar14 * 4)
                  || (param_2 + (lVar14 + uVar5) * 4) - 4 <
                     (ulong)(lVar6 + (long)(iVar3 * iVar7) * 4)) {
                lVar9 = lVar9 + uVar11;
                uVar12 = uVar5 & 0xfffffffffffffff8;
                puVar15 = (undefined8 *)(param_2 + 0x10 + lVar14 * 4);
                puVar13 = (undefined8 *)(lVar6 + (long)(iVar3 * iVar7) * 4 + 0x10);
                do {
                  auVar16._0_8_ =
                       CONCAT44(*(float *)((long)puVar13 + -0xc) +
                                (float)((ulong)puVar15[-2] >> 0x20),
                                *(float *)(puVar13 + -2) + (float)puVar15[-2]);
                  auVar16._8_4_ = *(float *)(puVar13 + -1) + (float)puVar15[-1];
                  auVar16._12_4_ =
                       *(float *)((long)puVar13 + -4) + (float)((ulong)puVar15[-1] >> 0x20);
                  fVar18 = (float)*puVar13 + (float)*puVar15;
                  fVar19 = (float)((ulong)*puVar13 >> 0x20) + (float)((ulong)*puVar15 >> 0x20);
                  fVar20 = (float)puVar13[1] + (float)puVar15[1];
                  fVar21 = (float)((ulong)puVar13[1] >> 0x20) + (float)((ulong)puVar15[1] >> 0x20);
                  puVar15[-2] = auVar16._0_8_;
                  auVar17 = NEON_ext(auVar16,auVar16,8,1);
                  puVar15[-1] = auVar17._0_8_;
                  *puVar15 = CONCAT44(fVar19,fVar18);
                  auVar17._4_4_ = fVar19;
                  auVar17._0_4_ = fVar18;
                  auVar17._8_4_ = fVar20;
                  auVar17._12_4_ = fVar21;
                  auVar2._4_4_ = fVar19;
                  auVar2._0_4_ = fVar18;
                  auVar2._8_4_ = fVar20;
                  auVar2._12_4_ = fVar21;
                  auVar17 = NEON_ext(auVar17,auVar2,8,1);
                  puVar15[1] = auVar17._0_8_;
                  uVar12 = uVar12 - 8;
                  puVar15 = puVar15 + 4;
                  puVar13 = puVar13 + 4;
                } while (uVar12 != 0);
              }
              else {
                uVar11 = 0;
              }
            }
            if (uVar5 != uVar11) goto LAB_10055cce8;
          }
          iVar4 = iVar4 + iVar1 + 1;
        }
      } while (iVar4 < param_4);
    }
  }
  return 0;
}




undefined8 FUN_10055cf54(int *param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  if (param_1[2] < 1) {
    if (0 < param_4) {
      do {
      } while (*param_1 < 1);
      do {
        *param_2 = 0;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  else if (0 < param_4) {
    iVar7 = 0;
    do {
      iVar4 = FUN_10055c8fc(param_1,param_3);
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      iVar2 = *param_1;
      if (0 < iVar2) {
        lVar6 = *(long *)(param_1 + 6);
        iVar3 = iVar2 + -1;
        if (iVar3 == 0 || iVar2 < 1) {
          iVar3 = 0;
        }
        lVar5 = 0;
        do {
          lVar1 = lVar5 + 1;
          param_2[iVar7 + lVar5] = *(undefined4 *)(lVar6 + (long)(iVar4 * iVar2) * 4 + lVar5 * 4);
          lVar5 = lVar1;
        } while (lVar1 < iVar2);
        iVar7 = iVar7 + iVar3 + 1;
      }
    } while (iVar7 < param_4);
  }
  return 0;
}




undefined8
FUN_10055d034(int *param_1,long param_2,int param_3,int param_4,undefined8 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  
  if (0 < param_1[2]) {
    uVar9 = 0;
    if (param_4 != 0) {
      uVar9 = param_3 / param_4;
    }
    uVar10 = (ulong)uVar9;
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = (param_6 + param_3) / param_4;
    }
    if ((int)uVar9 < iVar2) {
      iVar12 = 0;
      do {
        iVar4 = FUN_10055c8fc(param_1,param_5);
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        iVar1 = *param_1;
        if (0 < iVar1) {
          lVar5 = 0;
          lVar6 = *(long *)(param_1 + 6);
          iVar11 = iVar12;
          do {
            lVar7 = *(long *)(param_2 + (long)iVar11 * 8);
            uVar8 = -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
            *(float *)(lVar7 + uVar8) =
                 *(float *)(lVar6 + (long)(iVar4 * iVar1) * 4 + lVar5 * 4) +
                 *(float *)(lVar7 + uVar8);
            bVar3 = iVar11 + 1 == param_4;
            uVar9 = (uint)uVar10;
            if (bVar3) {
              uVar9 = uVar9 + 1;
            }
            uVar10 = (ulong)uVar9;
            iVar12 = 0;
            if (!bVar3) {
              iVar12 = iVar11 + 1;
            }
            lVar5 = lVar5 + 1;
            iVar11 = iVar12;
          } while (lVar5 < iVar1);
        }
      } while ((int)uVar10 < iVar2);
    }
  }
  return 0;
}




void FUN_10055d110(undefined8 *param_1)

{
  *param_1 = 0x200000000;
  return;
}




void FUN_10055d11c(uint param_1,byte *param_2)

{
  *param_2 = (&DAT_10115dcd4)[(ulong)(*param_2 ^ param_1) & 0xff];
  return;
}




void FUN_10055d13c(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  
  if (param_2 != 0) {
    bVar1 = *param_3;
    do {
      param_2 = param_2 + -1;
      bVar1 = (&DAT_10115dcd4)[*param_1 ^ bVar1];
      *param_3 = bVar1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_10055d16c(undefined8 param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}




void FUN_10055d19c(undefined8 param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}




undefined4 FUN_10055d1d0(int *param_1,uint param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  double dVar17;
  
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    iVar8 = param_1[-2];
    iVar10 = param_1[-1] - iVar8;
    iVar9 = (param_1[-3] - iVar8) + iVar10;
    iVar11 = param_1[-1];
    iVar8 = ((param_1[-3] * 2 - iVar8) - param_1[-4]) + iVar9;
    uVar6 = param_2;
    do {
      iVar1 = *param_1;
      iVar2 = -iVar1;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      uVar5 = iVar2 + uVar5;
      iVar2 = iVar1 - iVar11;
      iVar11 = -iVar2;
      if (-1 < iVar2) {
        iVar11 = iVar2;
      }
      uVar15 = iVar11 + uVar15;
      iVar3 = iVar2 - iVar10;
      iVar10 = -iVar3;
      if (-1 < iVar3) {
        iVar10 = iVar3;
      }
      uVar14 = iVar10 + uVar14;
      iVar4 = iVar3 - iVar9;
      iVar9 = -iVar4;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
      uVar13 = iVar9 + uVar13;
      iVar8 = iVar4 - iVar8;
      iVar9 = -iVar8;
      if (-1 < iVar8) {
        iVar9 = iVar8;
      }
      uVar12 = iVar9 + uVar12;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
      iVar11 = iVar1;
      iVar10 = iVar2;
      iVar9 = iVar3;
      iVar8 = iVar4;
    } while (uVar6 != 0);
  }
  uVar6 = uVar15;
  if (uVar14 <= uVar15) {
    uVar6 = uVar14;
  }
  if (uVar13 <= uVar6) {
    uVar6 = uVar13;
  }
  if (uVar12 <= uVar6) {
    uVar6 = uVar12;
  }
  if (uVar5 < uVar6) {
    uVar7 = 0;
  }
  else {
    uVar6 = uVar14;
    if (uVar13 <= uVar14) {
      uVar6 = uVar13;
    }
    if (uVar12 <= uVar6) {
      uVar6 = uVar12;
    }
    if (uVar15 < uVar6) {
      uVar7 = 1;
    }
    else {
      uVar6 = uVar13;
      if (uVar12 <= uVar13) {
        uVar6 = uVar12;
      }
      if (uVar14 < uVar6) {
        uVar7 = 2;
      }
      else {
        uVar7 = 3;
        if (uVar12 <= uVar13) {
          uVar7 = 4;
        }
      }
    }
  }
  if (uVar5 == 0) {
    fVar16 = 0.0;
  }
  else {
    dVar17 = (double)_log(((double)uVar5 * 0.6931471805599453) / (double)param_2);
    fVar16 = (float)(dVar17 / 0.6931471805599453);
  }
  *param_3 = fVar16;
  if (uVar15 == 0) {
    fVar16 = 0.0;
  }
  else {
    dVar17 = (double)_log(((double)uVar15 * 0.6931471805599453) / (double)param_2);
    fVar16 = (float)(dVar17 / 0.6931471805599453);
  }
  param_3[1] = fVar16;
  if (uVar14 == 0) {
    fVar16 = 0.0;
  }
  else {
    dVar17 = (double)_log(((double)uVar14 * 0.6931471805599453) / (double)param_2);
    fVar16 = (float)(dVar17 / 0.6931471805599453);
  }
  param_3[2] = fVar16;
  if (uVar13 == 0) {
    fVar16 = 0.0;
  }
  else {
    dVar17 = (double)_log(((double)uVar13 * 0.6931471805599453) / (double)param_2);
    fVar16 = (float)(dVar17 / 0.6931471805599453);
  }
  param_3[3] = fVar16;
  if (uVar12 == 0) {
    fVar16 = 0.0;
  }
  else {
    dVar17 = (double)_log(((double)uVar12 * 0.6931471805599453) / (double)param_2);
    fVar16 = (float)(dVar17 / 0.6931471805599453);
  }
  param_3[4] = fVar16;
  return uVar7;
}




undefined4 FUN_10055d420(uint *param_1,uint param_2,float *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar6 = 0;
  if (param_2 != 0) {
    uVar7 = param_1[-2];
    uVar11 = param_1[-1] - uVar7;
    uVar10 = (param_1[-3] - uVar7) + uVar11;
    uVar12 = param_1[-1];
    uVar9 = ((param_1[-3] * 2 - uVar7) - param_1[-4]) + uVar10;
    uVar7 = param_2;
    do {
      uVar2 = *param_1;
      uVar3 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      uVar6 = uVar6 + uVar3;
      uVar3 = uVar2 - uVar12;
      uVar12 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar12 = uVar3;
      }
      uVar16 = uVar16 + uVar12;
      uVar4 = uVar3 - uVar11;
      uVar11 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar11 = uVar4;
      }
      uVar15 = uVar15 + uVar11;
      uVar5 = uVar4 - uVar10;
      uVar10 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar10 = uVar5;
      }
      uVar14 = uVar14 + uVar10;
      uVar9 = uVar5 - uVar9;
      uVar10 = -uVar9;
      if (-1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      uVar13 = uVar13 + uVar10;
      uVar7 = uVar7 - 1;
      param_1 = param_1 + 1;
      uVar12 = uVar2;
      uVar11 = uVar3;
      uVar10 = uVar4;
      uVar9 = uVar5;
    } while (uVar7 != 0);
  }
  uVar1 = uVar16;
  if (uVar15 <= uVar16) {
    uVar1 = uVar15;
  }
  if (uVar14 <= uVar1) {
    uVar1 = uVar14;
  }
  if (uVar13 <= uVar1) {
    uVar1 = uVar13;
  }
  if (uVar6 < uVar1) {
    uVar8 = 0;
  }
  else {
    uVar1 = uVar15;
    if (uVar14 <= uVar15) {
      uVar1 = uVar14;
    }
    if (uVar13 <= uVar1) {
      uVar1 = uVar13;
    }
    if (uVar16 < uVar1) {
      uVar8 = 1;
    }
    else {
      uVar1 = uVar14;
      if (uVar13 <= uVar14) {
        uVar1 = uVar13;
      }
      if (uVar15 < uVar1) {
        uVar8 = 2;
      }
      else {
        uVar8 = 3;
        if (uVar13 <= uVar14) {
          uVar8 = 4;
        }
      }
    }
  }
  if (uVar6 == 0) {
    fVar17 = 0.0;
  }
  else {
    dVar18 = (double)_log(((double)uVar6 * 0.6931471805599453) / (double)param_2);
    fVar17 = (float)(dVar18 / 0.6931471805599453);
  }
  *param_3 = fVar17;
  if (uVar16 == 0) {
    fVar17 = 0.0;
  }
  else {
    dVar18 = (double)_log(((double)uVar16 * 0.6931471805599453) / (double)param_2);
    fVar17 = (float)(dVar18 / 0.6931471805599453);
  }
  param_3[1] = fVar17;
  if (uVar15 == 0) {
    fVar17 = 0.0;
  }
  else {
    dVar18 = (double)_log(((double)uVar15 * 0.6931471805599453) / (double)param_2);
    fVar17 = (float)(dVar18 / 0.6931471805599453);
  }
  param_3[2] = fVar17;
  if (uVar14 == 0) {
    fVar17 = 0.0;
  }
  else {
    dVar18 = (double)_log(((double)uVar14 * 0.6931471805599453) / (double)param_2);
    fVar17 = (float)(dVar18 / 0.6931471805599453);
  }
  param_3[3] = fVar17;
  if (uVar13 == 0) {
    fVar17 = 0.0;
  }
  else {
    dVar18 = (double)_log(((double)uVar13 * 0.6931471805599453) / (double)param_2);
    fVar17 = (float)(dVar18 / 0.6931471805599453);
  }
  param_3[4] = fVar17;
  return uVar8;
}




void FUN_10055d670(int *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  switch(param_3) {
  case 0:
    _memcpy(param_4,param_1,(ulong)param_2 << 2);
    break;
  case 1:
    uVar8 = (ulong)(param_2 - 1);
    if (0 < (int)param_2) {
      uVar6 = 0;
      uVar3 = uVar8 + 1 & 0x1fffffff8;
      if (uVar3 != 0) {
        if ((param_1 + uVar8 < param_4 || param_4 + uVar8 < param_1) &&
           (param_1 + uVar8 + -1 < param_4 || param_4 + uVar8 < param_1 + -1)) {
          uVar7 = uVar8 + 1 & 0xfffffffffffffff8;
          piVar4 = param_4 + 4;
          piVar5 = param_1;
          do {
            auVar9._0_8_ = CONCAT44(piVar5[1] - (int)((ulong)*(undefined8 *)(piVar5 + -1) >> 0x20),
                                    *piVar5 - (int)*(undefined8 *)(piVar5 + -1));
            auVar9._8_4_ = piVar5[2] - (int)*(undefined8 *)(piVar5 + 1);
            auVar9._12_4_ = piVar5[3] - (int)((ulong)*(undefined8 *)(piVar5 + 1) >> 0x20);
            auVar11._0_8_ =
                 CONCAT44(piVar5[5] - (int)((ulong)*(undefined8 *)(piVar5 + 3) >> 0x20),
                          piVar5[4] - (int)*(undefined8 *)(piVar5 + 3));
            auVar11._8_4_ = piVar5[6] - (int)*(undefined8 *)(piVar5 + 5);
            auVar11._12_4_ = piVar5[7] - (int)((ulong)*(undefined8 *)(piVar5 + 5) >> 0x20);
            *(undefined8 *)(piVar4 + -4) = auVar9._0_8_;
            auVar14 = NEON_ext(auVar9,auVar9,8,1);
            *(long *)(piVar4 + -2) = auVar14._0_8_;
            *(undefined8 *)piVar4 = auVar11._0_8_;
            auVar14 = NEON_ext(auVar11,auVar11,8,1);
            *(long *)(piVar4 + 2) = auVar14._0_8_;
            uVar7 = uVar7 - 8;
            piVar4 = piVar4 + 8;
            piVar5 = piVar5 + 8;
            uVar6 = uVar3;
          } while (uVar7 != 0);
        }
      }
      if (uVar8 + 1 != uVar6) {
        iVar2 = param_2 - (int)uVar6;
        param_1 = param_1 + uVar6;
        piVar4 = param_4 + uVar6;
        do {
          *piVar4 = *param_1 - param_1[-1];
          iVar2 = iVar2 + -1;
          param_1 = param_1 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 != 0);
      }
    }
    break;
  case 2:
    uVar8 = (ulong)(param_2 - 1);
    if (0 < (int)param_2) {
      uVar6 = 0;
      uVar3 = uVar8 + 1 & 0x1fffffff8;
      if (uVar3 != 0) {
        piVar4 = param_4 + uVar8;
        piVar5 = param_1 + uVar8;
        if (((piVar5 < param_4 || piVar4 < param_1) &&
            (piVar5 + -1 < param_4 || piVar4 < param_1 + -1)) &&
           (piVar5 + -2 < param_4 || piVar4 < param_1 + -2)) {
          uVar7 = uVar8 + 1 & 0xfffffffffffffff8;
          piVar4 = param_4 + 4;
          piVar5 = param_1;
          do {
            auVar10._0_8_ =
                 CONCAT44(piVar5[1] + (int)((ulong)*(undefined8 *)(piVar5 + -1) >> 0x20) * -2 +
                          (int)((ulong)*(undefined8 *)(piVar5 + -2) >> 0x20),
                          *piVar5 + (int)*(undefined8 *)(piVar5 + -1) * -2 +
                          (int)*(undefined8 *)(piVar5 + -2));
            auVar10._8_4_ =
                 piVar5[2] + (int)*(undefined8 *)(piVar5 + 1) * -2 + (int)*(undefined8 *)piVar5;
            auVar10._12_4_ =
                 piVar5[3] + (int)((ulong)*(undefined8 *)(piVar5 + 1) >> 0x20) * -2 +
                 (int)((ulong)*(undefined8 *)piVar5 >> 0x20);
            auVar12._0_8_ =
                 CONCAT44(piVar5[5] + (int)((ulong)*(undefined8 *)(piVar5 + 3) >> 0x20) * -2 +
                          (int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20),
                          piVar5[4] + (int)*(undefined8 *)(piVar5 + 3) * -2 +
                          (int)*(undefined8 *)(piVar5 + 2));
            auVar12._8_4_ =
                 piVar5[6] + (int)*(undefined8 *)(piVar5 + 5) * -2 +
                 (int)*(undefined8 *)(piVar5 + 4);
            auVar12._12_4_ =
                 piVar5[7] + (int)((ulong)*(undefined8 *)(piVar5 + 5) >> 0x20) * -2 +
                 (int)((ulong)*(undefined8 *)(piVar5 + 4) >> 0x20);
            *(undefined8 *)(piVar4 + -4) = auVar10._0_8_;
            auVar14 = NEON_ext(auVar10,auVar10,8,1);
            *(long *)(piVar4 + -2) = auVar14._0_8_;
            *(undefined8 *)piVar4 = auVar12._0_8_;
            auVar14 = NEON_ext(auVar12,auVar12,8,1);
            *(long *)(piVar4 + 2) = auVar14._0_8_;
            uVar7 = uVar7 - 8;
            piVar4 = piVar4 + 8;
            piVar5 = piVar5 + 8;
            uVar6 = uVar3;
          } while (uVar7 != 0);
        }
      }
      if (uVar8 + 1 != uVar6) {
        iVar2 = param_2 - (int)uVar6;
        param_1 = param_1 + uVar6;
        piVar4 = param_4 + uVar6;
        do {
          *piVar4 = *param_1 + param_1[-1] * -2 + param_1[-2];
          iVar2 = iVar2 + -1;
          param_1 = param_1 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 != 0);
      }
    }
    break;
  case 3:
    uVar8 = (ulong)(param_2 - 1);
    if (0 < (int)param_2) {
      uVar6 = 0;
      uVar3 = uVar8 + 1 & 0x1fffffffc;
      if (uVar3 != 0) {
        piVar4 = param_4 + uVar8;
        piVar1 = param_1 + uVar8;
        piVar5 = param_1 + -1;
        if (((piVar1 < param_4 || piVar4 < param_1) && (piVar1 + -1 < param_4 || piVar4 < piVar5))
           && ((piVar1 + -2 < param_4 || piVar4 < param_1 + -2 &&
               (piVar1 + -3 < param_4 || piVar4 < param_1 + -3)))) {
          uVar7 = uVar8 + 1 & 0xfffffffffffffffc;
          piVar4 = param_4;
          do {
            auVar13._0_8_ =
                 CONCAT44((piVar5[2] - (int)((ulong)*(undefined8 *)(piVar5 + -2) >> 0x20)) +
                          ((int)((ulong)*(undefined8 *)piVar5 >> 0x20) -
                          (int)((ulong)*(undefined8 *)(piVar5 + -1) >> 0x20)) * -3,
                          (piVar5[1] - (int)*(undefined8 *)(piVar5 + -2)) +
                          ((int)*(undefined8 *)piVar5 - (int)*(undefined8 *)(piVar5 + -1)) * -3);
            auVar13._8_4_ =
                 (piVar5[3] - (int)*(undefined8 *)piVar5) +
                 ((int)*(undefined8 *)(piVar5 + 2) - (int)*(undefined8 *)(piVar5 + 1)) * -3;
            auVar13._12_4_ =
                 (piVar5[4] - (int)((ulong)*(undefined8 *)piVar5 >> 0x20)) +
                 ((int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) -
                 (int)((ulong)*(undefined8 *)(piVar5 + 1) >> 0x20)) * -3;
            *(undefined8 *)piVar4 = auVar13._0_8_;
            auVar14 = NEON_ext(auVar13,auVar13,8,1);
            *(long *)(piVar4 + 2) = auVar14._0_8_;
            uVar7 = uVar7 - 4;
            piVar4 = piVar4 + 4;
            piVar5 = piVar5 + 4;
            uVar6 = uVar3;
          } while (uVar7 != 0);
        }
      }
      if (uVar8 + 1 != uVar6) {
        iVar2 = param_2 - (int)uVar6;
        param_1 = param_1 + uVar6;
        piVar4 = param_4 + uVar6;
        do {
          *piVar4 = (*param_1 - param_1[-3]) + (param_1[-1] - param_1[-2]) * -3;
          iVar2 = iVar2 + -1;
          param_1 = param_1 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 != 0);
      }
    }
    break;
  case 4:
    uVar8 = (ulong)(param_2 - 1);
    if (0 < (int)param_2) {
      uVar6 = 0;
      uVar3 = uVar8 + 1 & 0x1fffffffc;
      if (uVar3 != 0) {
        piVar4 = param_4 + uVar8;
        piVar1 = param_1 + uVar8;
        piVar5 = param_1 + -2;
        if ((((piVar1 < param_4 || piVar4 < param_1) &&
             (piVar1 + -1 < param_4 || piVar4 < param_1 + -1)) &&
            (piVar1 + -3 < param_4 || piVar4 < param_1 + -3)) &&
           ((piVar1 + -2 < param_4 || piVar4 < piVar5 &&
            (piVar1 + -4 < param_4 || piVar4 < param_1 + -4)))) {
          uVar7 = uVar8 + 1 & 0xfffffffffffffffc;
          piVar4 = param_4;
          do {
            auVar14._0_8_ =
                 CONCAT44(piVar5[3] +
                          ((int)((ulong)*(undefined8 *)(piVar5 + -1) >> 0x20) +
                          (int)((ulong)*(undefined8 *)(piVar5 + 1) >> 0x20)) * -4 +
                          (int)((ulong)*(undefined8 *)piVar5 >> 0x20) * 6 +
                          (int)((ulong)*(undefined8 *)(piVar5 + -2) >> 0x20),
                          piVar5[2] +
                          ((int)*(undefined8 *)(piVar5 + -1) + (int)*(undefined8 *)(piVar5 + 1)) *
                          -4 + (int)*(undefined8 *)piVar5 * 6 + (int)*(undefined8 *)(piVar5 + -2));
            auVar14._8_4_ =
                 piVar5[4] +
                 ((int)*(undefined8 *)(piVar5 + 1) + (int)*(undefined8 *)(piVar5 + 3)) * -4 +
                 (int)*(undefined8 *)(piVar5 + 2) * 6 + (int)*(undefined8 *)piVar5;
            auVar14._12_4_ =
                 piVar5[5] +
                 ((int)((ulong)*(undefined8 *)(piVar5 + 1) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar5 + 3) >> 0x20)) * -4 +
                 (int)((ulong)*(undefined8 *)(piVar5 + 2) >> 0x20) * 6 +
                 (int)((ulong)*(undefined8 *)piVar5 >> 0x20);
            *(undefined8 *)piVar4 = auVar14._0_8_;
            auVar14 = NEON_ext(auVar14,auVar14,8,1);
            *(long *)(piVar4 + 2) = auVar14._0_8_;
            uVar7 = uVar7 - 4;
            piVar4 = piVar4 + 4;
            piVar5 = piVar5 + 4;
            uVar6 = uVar3;
          } while (uVar7 != 0);
        }
      }
      if (uVar8 + 1 != uVar6) {
        iVar2 = param_2 - (int)uVar6;
        param_1 = param_1 + uVar6;
        piVar4 = param_4 + uVar6;
        do {
          *piVar4 = *param_1 + (param_1[-3] + param_1[-1]) * -4 + param_1[-2] * 6 + param_1[-4];
          iVar2 = iVar2 + -1;
          param_1 = param_1 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}




void FUN_10055db68(int *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  switch(param_3) {
  case 0:
    _memcpy(param_4,param_1,(ulong)param_2 << 2);
    return;
  case 1:
    if (0 < (int)param_2) {
      iVar2 = param_4[-1];
      do {
        iVar2 = iVar2 + *param_1;
        *param_4 = iVar2;
        param_2 = param_2 - 1;
        param_4 = param_4 + 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    break;
  case 2:
    if (0 < (int)param_2) {
      iVar2 = param_4[-1];
      do {
        iVar2 = (*param_1 + iVar2 * 2) - param_4[-2];
        *param_4 = iVar2;
        param_2 = param_2 - 1;
        param_4 = param_4 + 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    break;
  case 3:
    if (0 < (int)param_2) {
      iVar2 = param_4[-1];
      iVar3 = param_4[-3];
      do {
        iVar1 = iVar3 + *param_1;
        iVar3 = param_4[-2];
        iVar2 = iVar1 + (iVar2 - iVar3) * 3;
        *param_4 = iVar2;
        param_2 = param_2 - 1;
        param_4 = param_4 + 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    break;
  case 4:
    if (0 < (int)param_2) {
      iVar2 = param_4[-1];
      iVar3 = param_4[-3];
      do {
        iVar2 = iVar3 + iVar2;
        iVar3 = param_4[-2];
        iVar2 = (*param_1 + iVar2 * 4 + iVar3 * -6) - param_4[-4];
        *param_4 = iVar2;
        param_2 = param_2 - 1;
        param_4 = param_4 + 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
  }
  return;
}




int * FUN_10055dc94(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int **ppiVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  size_t sVar15;
  uint uVar16;
  long lVar17;
  int *local_270 [65];
  long local_68;
  
  lVar13 = *(long *)PTR____stack_chk_guard_101444218;
  lVar17 = *(long *)(param_2 + 0x20);
  local_68 = lVar13;
  piVar4 = (int *)FUN_1005a0434(param_1,1,0x460);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
    goto LAB_10055e040;
  }
  iVar2 = FUN_10055afe0(param_3,5);
  *piVar4 = iVar2;
  if (0 < iVar2) {
    lVar13 = 0;
    iVar2 = -1;
    do {
      iVar3 = FUN_10055afe0(param_3,4);
      piVar4[lVar13 + 1] = iVar3;
      if (iVar3 < 0) goto LAB_10055e018;
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      lVar13 = lVar13 + 1;
      iVar2 = iVar3;
    } while (lVar13 < *piVar4);
    if (-1 < iVar3) {
      piVar8 = piVar4 + 0x50;
      lVar13 = 0;
      do {
        iVar2 = FUN_10055afe0(param_3,3);
        piVar4[lVar13 + 0x20] = iVar2 + 1;
        iVar2 = FUN_10055afe0(param_3,2);
        piVar4[lVar13 + 0x30] = iVar2;
        if (iVar2 < 0) goto LAB_10055e018;
        if (iVar2 == 0) {
          iVar2 = piVar4[lVar13 + 0x40];
        }
        else {
          iVar2 = FUN_10055afe0(param_3,8);
          piVar4[lVar13 + 0x40] = iVar2;
        }
        if ((iVar2 < 0) || (*(int *)(lVar17 + 0x18) <= iVar2)) goto LAB_10055e018;
        if (piVar4[lVar13 + 0x30] != 0x1f) {
          lVar14 = 0;
          piVar12 = piVar8;
          do {
            iVar2 = FUN_10055afe0(param_3,8);
            *piVar12 = iVar2 + -1;
            if ((iVar2 < 0) || (*(int *)(lVar17 + 0x18) < iVar2)) goto LAB_10055e018;
            lVar14 = lVar14 + 1;
            piVar12 = piVar12 + 1;
          } while (lVar14 < 1 << (ulong)(piVar4[lVar13 + 0x30] & 0x1f));
        }
        piVar8 = piVar8 + 8;
        bVar1 = lVar13 < iVar3;
        lVar13 = lVar13 + 1;
      } while (bVar1);
    }
  }
  iVar2 = FUN_10055afe0(param_3,2);
  piVar4[0xd0] = iVar2 + 1;
  uVar5 = FUN_10055afe0(param_3,4);
  uVar16 = (uint)uVar5;
  if ((int)uVar16 < 0) {
LAB_10055e018:
    _bzero(piVar4,0x460);
    FUN_1005a04e8(param_1,piVar4);
    piVar4 = (int *)0x0;
  }
  else {
    iVar2 = *piVar4;
    if (iVar2 < 1) {
      lVar13 = 0;
      iVar3 = 1 << (ulong)(uVar16 & 0x1f);
    }
    else {
      lVar14 = 0;
      lVar17 = 0;
      lVar13 = 0;
      iVar3 = 1 << (ulong)(uVar16 & 0x1f);
      do {
        lVar13 = (long)piVar4[(long)piVar4[lVar14 + 1] + 0x20] + (long)(int)lVar13;
        if ((int)lVar17 < (int)lVar13) {
          lVar17 = (long)(int)lVar17;
          do {
            iVar2 = FUN_10055afe0(param_3,uVar5);
            piVar4[lVar17 + 0xd3] = iVar2;
            if ((iVar2 < 0) || (iVar3 <= iVar2)) goto LAB_10055e018;
            lVar17 = lVar17 + 1;
          } while (lVar17 < lVar13);
          iVar2 = *piVar4;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar2);
    }
    piVar8 = piVar4 + 0xd1;
    *piVar8 = 0;
    piVar4[0xd2] = iVar3;
    iVar3 = (int)lVar13;
    iVar2 = iVar3 + 2;
    sVar15 = (size_t)iVar2;
    if (-2 < iVar3) {
      uVar6 = (ulong)iVar2;
      if ((long)uVar6 < 2) {
        uVar6 = 1;
      }
      if (uVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar6 & 0xfffffffffffffffc;
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else {
          uVar9 = 0;
          uVar10 = (ulong)(iVar3 + 2);
          if ((long)uVar10 < 2) {
            uVar10 = 0;
          }
          ppiVar11 = local_270 + 2;
          piVar12 = piVar8;
          do {
            ppiVar11[-1] = piVar12 + 1;
            ppiVar11[-2] = piVar12;
            ppiVar11[1] = piVar8 + uVar9 + 3;
            *ppiVar11 = piVar8 + uVar9 + 2;
            uVar9 = uVar9 + 4;
            piVar12 = piVar12 + 4;
            ppiVar11 = ppiVar11 + 4;
          } while ((uVar10 & 0xfffffffffffffffc) != uVar9);
        }
        if (uVar6 == uVar7) goto LAB_10055dfc4;
      }
      piVar8 = piVar8 + uVar7;
      do {
        local_270[uVar7] = piVar8;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
      } while ((long)uVar7 < (long)sVar15);
    }
LAB_10055dfc4:
    _qsort(local_270,sVar15,8,(int *)FUN_10055e9f4);
    if (1 < iVar2) {
      lVar13 = 1;
      iVar2 = *local_270[0];
      do {
        ppiVar11 = local_270 + lVar13;
        if (iVar2 == **ppiVar11) goto LAB_10055e018;
        lVar13 = lVar13 + 1;
        iVar2 = **ppiVar11;
      } while (lVar13 < (long)sVar15);
    }
  }
  lVar13 = *(long *)PTR____stack_chk_guard_101444218;
LAB_10055e040:
  if (lVar13 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar4;
}




long FUN_10055e074(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined4 uVar19;
  size_t sVar20;
  long lVar21;
  long local_260 [65];
  long local_58;
  
  lVar21 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar21;
  lVar6 = FUN_1005a0434(param_1,1,0x428);
  if (lVar6 == 0) {
    lVar6 = 0;
    goto LAB_10055e400;
  }
  *(int **)(lVar6 + 0x410) = param_3;
  piVar1 = param_3 + 0xd1;
  *(int *)(lVar6 + 0x404) = param_3[0xd2];
  iVar10 = *param_3;
  uVar8 = (ulong)iVar10;
  if (iVar10 < 1) {
    iVar14 = 0;
    iVar10 = 2;
    *(undefined4 *)(lVar6 + 0x400) = 2;
LAB_10055e184:
    sVar20 = (size_t)iVar10;
    uVar8 = sVar20;
    if ((long)sVar20 < 2) {
      uVar8 = 1;
    }
    if (uVar8 == 0) {
      uVar12 = 0;
LAB_10055e240:
      piVar11 = param_3 + uVar12 + 0xd1;
      do {
        local_260[uVar12] = (long)piVar11;
        uVar12 = uVar12 + 1;
        piVar11 = piVar11 + 1;
      } while ((long)uVar12 < (long)sVar20);
    }
    else {
      uVar12 = uVar8 & 0xfffffffffffffffc;
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar17 = 0;
        uVar3 = sVar20;
        if ((long)sVar20 < 2) {
          uVar3 = 0;
        }
        piVar11 = param_3 + 0xd1;
        plVar15 = local_260 + 2;
        do {
          plVar15[-1] = (long)(piVar11 + 1);
          plVar15[-2] = (long)piVar11;
          plVar15[1] = (long)(piVar1 + uVar17 + 3);
          *plVar15 = (long)(piVar1 + uVar17 + 2);
          uVar17 = uVar17 + 4;
          piVar11 = piVar11 + 4;
          plVar15 = plVar15 + 4;
        } while ((uVar3 & 0xfffffffffffffffc) != uVar17);
      }
      if (uVar8 != uVar12) goto LAB_10055e240;
    }
    _qsort(local_260,sVar20,8,(int *)FUN_10055e9f4);
    uVar8 = sVar20;
    if ((long)sVar20 < 2) {
      uVar8 = 1;
    }
    if (uVar8 == 0) {
      uVar12 = 0;
LAB_10055e2f4:
      do {
        *(int *)(lVar6 + uVar12 * 4) = (int)((ulong)(local_260[uVar12] - (long)piVar1) >> 2);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)sVar20);
    }
    else {
      uVar12 = uVar8 & 0xfffffffffffffffc;
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar17 = sVar20;
        if ((long)sVar20 < 2) {
          uVar17 = 0;
        }
        uVar17 = uVar17 & 0xfffffffffffffffc;
        puVar13 = (undefined8 *)(lVar6 + 8);
        plVar15 = local_260 + 2;
        do {
          lVar16 = plVar15[1];
          lVar9 = *plVar15;
          puVar13[-1] = CONCAT44((int)((ulong)(plVar15[-1] - (long)piVar1) >> 2),
                                 (int)((ulong)(plVar15[-2] - (long)piVar1) >> 2));
          *puVar13 = CONCAT44((int)((ulong)(lVar16 - (long)piVar1) >> 2),
                              (int)((ulong)(lVar9 - (long)piVar1) >> 2));
          uVar17 = uVar17 - 4;
          puVar13 = puVar13 + 2;
          plVar15 = plVar15 + 4;
        } while (uVar17 != 0);
      }
      if (uVar8 != uVar12) goto LAB_10055e2f4;
    }
    lVar9 = 0;
    do {
      *(int *)(lVar6 + 0x104 + (long)*(int *)(lVar6 + lVar9 * 4) * 4) = (int)lVar9;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (long)sVar20);
  }
  else {
    if (iVar10 == 0) {
      uVar12 = 0;
      iVar14 = 0;
LAB_10055e158:
      do {
        iVar14 = param_3[(long)param_3[uVar12 + 1] + 0x20] + iVar14;
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)uVar8);
    }
    else {
      uVar12 = uVar8 & 0xfffffffffffffffe;
      if (uVar12 == 0) {
        uVar12 = 0;
        iVar10 = 0;
        iVar14 = 0;
      }
      else {
        iVar10 = 0;
        iVar14 = 0;
        uVar17 = uVar12;
        piVar11 = param_3;
        do {
          iVar10 = param_3[(long)piVar11[1] + 0x20] + iVar10;
          iVar14 = param_3[(long)piVar11[2] + 0x20] + iVar14;
          uVar17 = uVar17 - 2;
          piVar11 = piVar11 + 2;
        } while (uVar17 != 0);
      }
      iVar14 = iVar14 + iVar10;
      if (uVar8 != uVar12) goto LAB_10055e158;
    }
    iVar10 = iVar14 + 2;
    *(int *)(lVar6 + 0x400) = iVar10;
    if (-2 < iVar14) goto LAB_10055e184;
    _qsort(local_260,(long)iVar10,8,(int *)FUN_10055e9f4);
  }
  switch(param_3[0xd0]) {
  case 1:
    uVar7 = 0x100;
    break;
  case 2:
    uVar7 = 0x80;
    break;
  case 3:
    uVar7 = 0x56;
    break;
  case 4:
    uVar7 = 0x40;
    break;
  default:
    goto switchD_10055e34c_default;
  }
  *(undefined4 *)(lVar6 + 0x408) = uVar7;
switchD_10055e34c_default:
  if (0 < iVar14) {
    lVar9 = 0;
    do {
      lVar16 = 0;
      uVar7 = 0;
      uVar19 = 1;
      iVar10 = *(int *)(lVar6 + 0x404);
      iVar18 = 0;
      do {
        iVar4 = param_3[lVar16 + 0xd1];
        iVar2 = iVar4;
        uVar5 = (int)lVar16;
        if (iVar4 <= iVar18 || piVar1[lVar9 + 2] <= iVar4) {
          iVar2 = iVar18;
          uVar5 = uVar7;
        }
        uVar7 = uVar5;
        uVar5 = (int)lVar16;
        if (iVar10 <= iVar4 || iVar4 <= piVar1[lVar9 + 2]) {
          iVar4 = iVar10;
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        lVar16 = lVar16 + 1;
        iVar10 = iVar4;
        iVar18 = iVar2;
      } while (lVar16 < lVar9 + 2);
      *(undefined4 *)(lVar6 + 0x304 + lVar9 * 4) = uVar7;
      *(undefined4 *)(lVar6 + 0x208 + lVar9 * 4) = uVar19;
      iVar10 = (int)lVar9;
      lVar9 = lVar9 + 1;
    } while (iVar10 != iVar14 + -1);
  }
LAB_10055e400:
  if (lVar21 == local_58) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10055e440(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    _bzero(param_2,0x460);
    FUN_1005a04e8(param_1,param_2);
    return;
  }
  return;
}




void FUN_10055e484(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    _bzero(param_2,0x428);
    FUN_1005a04e8(param_1,param_2);
    return;
  }
  return;
}




undefined4 * FUN_10055e4c8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int local_74;
  
  piVar16 = *(int **)(param_3 + 0x410);
  lVar13 = *(long *)(*(long *)(**(long **)(param_2 + 0x50) + 0x20) + 0x1320);
  lVar15 = param_2 + 8;
  iVar7 = FUN_10055afe0(lVar15,1);
  if (iVar7 == 1) {
    puVar11 = (undefined4 *)FUN_10055b394(param_1,param_2,*(int *)(param_3 + 0x400) << 2);
    iVar7 = 0;
    uVar12 = *(int *)(param_3 + 0x408) - 1;
    uVar14 = (ulong)uVar12;
    while (uVar12 != 0) {
      iVar7 = iVar7 + 1;
      uVar14 = uVar14 >> 1;
      uVar12 = (uint)uVar14;
    }
    uVar8 = FUN_10055afe0(lVar15,iVar7);
    iVar7 = 0;
    *puVar11 = uVar8;
    uVar12 = *(int *)(param_3 + 0x408) - 1;
    uVar14 = (ulong)uVar12;
    while (uVar12 != 0) {
      iVar7 = iVar7 + 1;
      uVar14 = uVar14 >> 1;
      uVar12 = (uint)uVar14;
    }
    uVar8 = FUN_10055afe0(lVar15,iVar7);
    puVar11[1] = uVar8;
    if (0 < *piVar16) {
      lVar18 = 0;
      local_74 = 2;
      do {
        lVar19 = (long)piVar16[lVar18 + 1];
        iVar7 = piVar16[lVar19 + 0x20];
        uVar12 = piVar16[lVar19 + 0x30];
        if (uVar12 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_10055c8b0(lVar13 + (long)piVar16[lVar19 + 0x40] * 0x48,lVar15);
          if (uVar9 == 0xffffffff) {
            return (undefined4 *)0x0;
          }
        }
        if (0 < iVar7) {
          lVar17 = 0;
          do {
            if (piVar16[lVar19 * 8 + (long)(int)(uVar9 & (1 << (ulong)(uVar12 & 0x1f)) - 1U) + 0x50]
                < 0) {
              puVar11[local_74 + lVar17] = 0;
            }
            else {
              iVar10 = FUN_10055c8b0(lVar13 + (long)piVar16[lVar19 * 8 +
                                                            (long)(int)(uVar9 & (1 << (ulong)(uVar12
                                                                                             & 0x1f)
                                                                                ) - 1U) + 0x50] *
                                              0x48,lVar15);
              puVar11[local_74 + lVar17] = iVar10;
              if (iVar10 == -1) {
                return (undefined4 *)0x0;
              }
            }
            uVar9 = (int)uVar9 >> (uVar12 & 0x1f);
            lVar17 = lVar17 + 1;
          } while (lVar17 < iVar7);
        }
        local_74 = iVar7 + local_74;
        lVar18 = lVar18 + 1;
      } while (lVar18 < *piVar16);
    }
    if (2 < *(int *)(param_3 + 0x400)) {
      lVar15 = 0;
      do {
        lVar13 = param_3 + lVar15 * 4;
        iVar10 = (puVar11[*(int *)(lVar13 + 0x208)] & 0x7fff) -
                 (puVar11[*(int *)(lVar13 + 0x304)] & 0x7fff);
        iVar4 = piVar16[(long)*(int *)(lVar13 + 0x208) + 0xd1] -
                piVar16[(long)*(int *)(lVar13 + 0x304) + 0xd1];
        iVar7 = -iVar10;
        if (-1 < iVar10) {
          iVar7 = iVar10;
        }
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = (iVar7 * (piVar16[lVar15 + 0xd3] - piVar16[(long)*(int *)(lVar13 + 0x304) + 0xd1])
                  ) / iVar4;
        }
        iVar7 = -iVar3;
        if (-1 < iVar10) {
          iVar7 = iVar3;
        }
        uVar12 = iVar7 + (puVar11[*(int *)(lVar13 + 0x304)] & 0x7fff);
        uVar9 = puVar11[lVar15 + 2];
        if (uVar9 == 0) {
          puVar11[lVar15 + 2] = uVar12 | 0x8000;
        }
        else {
          uVar5 = *(int *)(param_3 + 0x408) - uVar12;
          uVar1 = uVar5;
          if ((int)uVar12 <= (int)uVar5) {
            uVar1 = uVar12;
          }
          uVar2 = (int)uVar9 >> 1;
          if ((uVar9 & 1) != 0) {
            uVar2 = -((int)(uVar9 + 1) >> 1);
          }
          uVar6 = uVar9 - uVar12;
          if ((int)uVar5 <= (int)uVar12) {
            uVar6 = ~(uVar9 - uVar5);
          }
          if ((int)(uVar1 * 2) <= (int)uVar9) {
            uVar2 = uVar6;
          }
          puVar11[lVar15 + 2] = uVar2 + uVar12;
          puVar11[*(int *)(lVar13 + 0x304)] = puVar11[*(int *)(lVar13 + 0x304)] & 0x7fff;
          puVar11[*(int *)(lVar13 + 0x208)] = puVar11[*(int *)(lVar13 + 0x208)] & 0x7fff;
        }
        lVar13 = lVar15 + 3;
        lVar15 = lVar15 + 1;
      } while (lVar13 < *(int *)(param_3 + 0x400));
    }
  }
  else {
    puVar11 = (undefined4 *)0x0;
  }
  return puVar11;
}




undefined8 FUN_10055e7b8(long param_1,long param_2,int *param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  float *pfVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  iVar22 = *(int *)(*(long *)(**(long **)(param_1 + 0x50) + 0x20) +
                   (long)*(int *)(param_1 + 0x2c) * 4);
  if (iVar22 < 0) {
    iVar22 = iVar22 + 1;
  }
  uVar1 = iVar22 >> 1;
  if (param_3 == (int *)0x0) {
    _bzero(param_4,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
    uVar12 = 0;
  }
  else {
    lVar21 = *(long *)(param_2 + 0x410);
    iVar5 = *(int *)(lVar21 + 0x340);
    iVar22 = iVar5 * *param_3;
    iVar7 = *(int *)(param_2 + 0x400);
    if (iVar7 < 2) {
      iVar16 = 0;
    }
    else {
      uVar17 = 0;
      lVar23 = 1;
      uVar25 = 0;
      do {
        lVar15 = (long)*(int *)(param_2 + lVar23 * 4);
        uVar6 = param_3[lVar15];
        uVar18 = uVar25;
        iVar16 = iVar22;
        if ((uVar6 & 0x7fff) == uVar6) {
          iVar16 = iVar5 * uVar6;
          uVar6 = *(uint *)(lVar21 + lVar15 * 4 + 0x344);
          uVar18 = (ulong)uVar6;
          iVar10 = iVar16 - iVar22;
          iVar13 = (int)uVar25;
          iVar9 = uVar6 - iVar13;
          iVar2 = -iVar10;
          if (-1 < iVar10) {
            iVar2 = iVar10;
          }
          iVar8 = 0;
          if (iVar9 != 0) {
            iVar8 = iVar10 / iVar9;
          }
          iVar24 = iVar8 * iVar9;
          iVar3 = -iVar24;
          if (-1 < iVar24) {
            iVar3 = iVar24;
          }
          uVar4 = uVar6;
          if ((int)uVar1 <= (int)uVar6) {
            uVar4 = uVar1;
          }
          if (iVar13 < (int)uVar4) {
            uVar25 = -(uVar25 >> 0x1f) & 0xfffffffc00000000 | uVar25 << 2;
            *(float *)((long)param_4 + uVar25) =
                 *(float *)(&DAT_10115ddd4 + (long)iVar22 * 4) * *(float *)((long)param_4 + uVar25);
          }
          uVar17 = uVar18;
          if (iVar13 + 1 < (int)uVar4) {
            iVar24 = 0;
            uVar4 = ~uVar1;
            if ((int)~uVar1 < (int)~uVar6) {
              uVar4 = ~uVar6;
            }
            iVar14 = (-2 - iVar13) - uVar4;
            pfVar20 = (float *)((long)param_4 + (long)(iVar13 + 1) * 4);
            do {
              iVar24 = iVar24 + (iVar2 - iVar3);
              uVar6 = 0;
              if (iVar9 <= iVar24) {
                uVar6 = iVar10 >> 0x1f | 1;
              }
              iVar13 = 0;
              if (iVar9 <= iVar24) {
                iVar13 = iVar9;
              }
              iVar22 = iVar22 + iVar8 + uVar6;
              iVar24 = iVar24 - iVar13;
              *pfVar20 = *(float *)(&DAT_10115ddd4 + (long)iVar22 * 4) * *pfVar20;
              iVar14 = iVar14 + -1;
              pfVar20 = pfVar20 + 1;
            } while (iVar14 != 0);
          }
        }
        iVar22 = iVar16;
        iVar16 = (int)uVar17;
        lVar23 = lVar23 + 1;
        uVar25 = uVar18;
      } while (lVar23 < iVar7);
    }
    if (iVar16 < (int)uVar1) {
      fVar26 = *(float *)(&DAT_10115ddd4 + (long)iVar22 * 4);
      lVar23 = (long)iVar16;
      uVar17 = (ulong)((uVar1 - 1) - iVar16);
      uVar25 = uVar17 + 1;
      lVar21 = uVar25 + lVar23;
      uVar25 = uVar25 & 0x1fffffff8;
      if (uVar25 != 0) {
        lVar23 = uVar25 + lVar23;
        uVar25 = uVar17 + 1 & 0xfffffffffffffff8;
        puVar19 = (undefined8 *)((long)param_4 + (long)iVar16 * 4 + 0x10);
        do {
          auVar27._0_8_ =
               CONCAT44(fVar26 * *(float *)((long)puVar19 + -0xc),fVar26 * *(float *)(puVar19 + -2))
          ;
          auVar27._8_4_ = fVar26 * *(float *)(puVar19 + -1);
          auVar27._12_4_ = fVar26 * *(float *)((long)puVar19 + -4);
          fVar29 = fVar26 * (float)*puVar19;
          fVar30 = fVar26 * (float)((ulong)*puVar19 >> 0x20);
          fVar31 = fVar26 * (float)puVar19[1];
          fVar32 = fVar26 * (float)((ulong)puVar19[1] >> 0x20);
          puVar19[-2] = auVar27._0_8_;
          auVar28 = NEON_ext(auVar27,auVar27,8,1);
          puVar19[-1] = auVar28._0_8_;
          *puVar19 = CONCAT44(fVar30,fVar29);
          auVar28._4_4_ = fVar30;
          auVar28._0_4_ = fVar29;
          auVar28._8_4_ = fVar31;
          auVar28._12_4_ = fVar32;
          auVar11._4_4_ = fVar30;
          auVar11._0_4_ = fVar29;
          auVar11._8_4_ = fVar31;
          auVar11._12_4_ = fVar32;
          auVar28 = NEON_ext(auVar28,auVar11,8,1);
          puVar19[1] = auVar28._0_8_;
          uVar25 = uVar25 - 8;
          puVar19 = puVar19 + 4;
        } while (uVar25 != 0);
      }
      if (lVar21 == lVar23) {
        uVar12 = 1;
      }
      else {
        iVar22 = uVar1 - (int)lVar23;
        pfVar20 = (float *)((long)param_4 + lVar23 * 4);
        do {
          *pfVar20 = fVar26 * *pfVar20;
          iVar22 = iVar22 + -1;
          pfVar20 = pfVar20 + 1;
        } while (iVar22 != 0);
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 1;
    }
  }
  return uVar12;
}




int FUN_10055e9f4(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}




undefined8
FUN_10055ea0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined4 param_6,int param_7,undefined4 param_8)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_1068 [4096];
  long local_68;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar2;
  _bzero(auStack_1068,0x1000);
  *(undefined8 *)(param_1 + 200) = param_2;
  *(bool *)(param_1 + 0x10) = param_5 == 1 || param_7 == 1;
  *(undefined4 *)(param_1 + 8) = param_6;
  *(undefined4 *)(param_1 + 0xc) = param_8;
  lVar1 = param_1 + 0x18;
  FUN_1006127a0(0x3f800000,lVar1,param_2);
  FUN_100612bb8(0x3f800000,auStack_1068,*(undefined1 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),0);
  FUN_100614548(lVar1,auStack_1068,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),0x20,
                0,0);
  FUN_100614b18(0x3f800000,lVar1,0,0);
  if (lVar2 == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10055eb18(long param_1)

{
  FUN_100612864(param_1 + 0x18);
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_downmix.cpp"
                ,0x3d);
  return 0;
}




void FUN_10055eb64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100613a18(param_1 + 0x18,param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),0,param_4,1);
  return;
}




void FUN_10055ebb0(void)

{
  _memset(&DAT_101e94800,0,0x60);
  DAT_101e94800 = 1;
  FUN_1005ecc98(&DAT_101e94804,"State",0x10);
  FUN_1005ecc98(&DAT_101e94814,"",0x10);
  DAT_101e94828 = "Integration state";
  DAT_101e94830 = 0xfffffffd;
  DAT_101e94834 = 1;
  DAT_101e94838 = 1;
  DAT_101e9483c = 0;
  DAT_101e94840 = 0;
  _memset(&DAT_101e94860,0,0x60);
  DAT_101e94860 = 3;
  FUN_1005ecc98(&DAT_101e94864,"Weights",0x10);
  FUN_1005ecc98(&DAT_101e94874,"",0x10);
  DAT_101e94888 = "Channel weightings for loudness";
  DAT_101e94890 = 0;
  _memset(&DAT_101e948c0,0,0x60);
  DAT_101e948c0 = 3;
  FUN_1005ecc98(&DAT_101e948c4,"Loudness",0x10);
  FUN_1005ecc98(&DAT_101e948d4,"",0x10);
  DAT_101e948f0 = 0xffffff9c;
  DAT_101e948e8 = "Loudness info and maximum true peak level";
  DAT_101e94920 = &DAT_101867d30;
  DAT_101e94938 = 0x1e;
  DAT_101e94930 = 0xdf0;
  return;
}




void FUN_10055ed04(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  _bzero(param_1,0x120);
  auVar1._8_4_ = 0xc2a00000;
  auVar1._0_8_ = 0xc2a00000c2a00000;
  auVar1._12_4_ = 0xc2a00000;
  *param_1 = 0xc2a00000c2a00000;
  auVar1 = NEON_ext(auVar1,auVar1,8,1);
  param_1[1] = auVar1._0_8_;
  *(undefined4 *)(param_1 + 2) = 0xc2a00000;
  _bzero((void *)((long)param_1 + 0x14),0x108);
  *(undefined8 *)((long)param_1 + 0x11c) = 0xc2a00000c2a00000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10055ed5c(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  _bzero(&DAT_101e94960,0x11c);
  uRam0000000101e94968 = 0xc2a00000;
  uRam0000000101e9496c = 0xc2a00000;
  _DAT_101e94960 = 0xc2a00000c2a00000;
  DAT_101e94970 = 0xc2a00000;
  _bzero(&DAT_101e94974,0x108);
  lVar2 = 0;
  DAT_101e94a7c = 0xc2a00000;
  DAT_101e94a80 = 0xc2a00000;
  *(undefined4 *)(param_1 + 0x2fc) = 0x3fc47ef9;
  *(undefined4 *)(param_1 + 0x300) = 0xc02c44c0;
  *(undefined4 *)(param_1 + 0x304) = 0x3f9964f0;
  *(undefined4 *)(param_1 + 0x308) = 0xbfd86786;
  *(undefined4 *)(param_1 + 0x30c) = 0x3f3b83dc;
  *(undefined4 *)(param_1 + 800) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x324) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32c) = 0xbffeb9e0;
  *(undefined4 *)(param_1 + 0x330) = 0x3f7d7560;
  plVar4 = (long *)(param_1 + 0x350);
  do {
    plVar4[-2] = param_1 + 0x2ec;
    *plVar4 = param_1 + 0x310;
    puVar3 = (undefined8 *)(param_1 + 0x738 + lVar2);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    lVar2 = lVar2 + 0x2c;
    *puVar3 = 0;
    plVar4 = plVar4 + 4;
  } while (lVar2 != 0x580);
  _memset((void *)(param_1 + 0xd6c),0,0x80);
  *(undefined4 *)(param_1 + 0xd78) = 0;
  auVar6._8_4_ = 0x3fb47ae1;
  auVar6._0_8_ = 0x3fb47ae13fb47ae1;
  auVar6._12_4_ = 0x3fb47ae1;
  *(undefined4 *)(param_1 + 0xd6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd74) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd7c) = 0x3fb47ae13fb47ae1;
  auVar6 = NEON_ext(auVar6,auVar6,8,1);
  *(long *)(param_1 + 0xd84) = auVar6._0_8_;
  *(undefined4 *)(param_1 + 0xd48) = 0;
  *(undefined8 *)(param_1 + 0xd50) = 0;
  *(undefined4 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined4 *)(param_1 + 0xd30) = 0x12c0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0x1cc) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0x1d0) = 0xc2a00000;
  *(undefined8 *)(param_1 + 0x1d4) = 0xc2a00000c2a00000;
  _bzero((void *)(param_1 + 0x1dc),0x108);
  *(undefined4 *)(param_1 + 0x2e4) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0x2e8) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0xd40) = 0xc2a00000;
  *(undefined8 *)(param_1 + 0xd34) = 0;
  _memset((void *)(param_1 + 0xcb8),0,0x78);
  lVar2 = 0;
  puVar3 = (undefined8 *)(param_1 + 0x738);
  do {
    puVar1 = (undefined4 *)(param_1 + 0x34c + lVar2);
    puVar1[-5] = 0;
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1[-1] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    lVar2 = lVar2 + 0x20;
    *puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 0x2c);
  } while (lVar2 != 0x400);
  lVar2 = *(long *)(param_1 + 0xd50);
  *(undefined8 *)(param_1 + 0xd50) = 0;
  while (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar2 = lVar5;
  }
  lVar2 = *(long *)(param_1 + 0xd60);
  *(undefined8 *)(param_1 + 0xd60) = 0;
  while (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar2 = lVar5;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0xc2a00000;
  *(undefined8 *)(param_1 + 0x1d4) = 0xc2a00000c2a00000;
  _bzero((void *)(param_1 + 0x1dc),0x108);
  *(undefined4 *)(param_1 + 0x2e8) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0xd40) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0xd44) = 0;
  *(undefined4 *)(param_1 + 0xd3c) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0xc2a00000;
  *(undefined1 *)(param_1 + 0xd68) = 1;
  *(undefined1 *)(param_1 + 0xd69) = 1;
  *(undefined1 *)(param_1 + 0xd6a) = 1;
  *(undefined4 *)(param_1 + 0xdec) = 1;
  return 0;
}




void FUN_10055f01c(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  _bzero((void *)(param_1 + 0x1c8),0x11c);
  auVar4._8_4_ = 0xc2a00000;
  auVar4._0_8_ = 0xc2a00000c2a00000;
  auVar4._12_4_ = 0xc2a00000;
  *(undefined8 *)(param_1 + 0x1c8) = 0xc2a00000c2a00000;
  auVar4 = NEON_ext(auVar4,auVar4,8,1);
  *(long *)(param_1 + 0x1d0) = auVar4._0_8_;
  *(undefined4 *)(param_1 + 0x1d8) = 0xc2a00000;
  _bzero((void *)(param_1 + 0x1dc),0x108);
  *(undefined4 *)(param_1 + 0x2e4) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0x2e8) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0xd40) = 0xc2a00000;
  *(undefined8 *)(param_1 + 0xd34) = 0;
  _memset((void *)(param_1 + 0xcb8),0,0x78);
  lVar2 = 0;
  puVar3 = (undefined8 *)(param_1 + 0x738);
  do {
    puVar1 = (undefined4 *)(param_1 + 0x34c + lVar2);
    puVar1[-5] = 0;
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1[-1] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    lVar2 = lVar2 + 0x20;
    *puVar3 = 0;
    puVar3 = (undefined8 *)((long)puVar3 + 0x2c);
  } while (lVar2 != 0x400);
  return;
}




void FUN_10055f0c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xd50);
  *(undefined8 *)(param_1 + 0xd50) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar1 = lVar2;
  }
  lVar1 = *(long *)(param_1 + 0xd60);
  *(undefined8 *)(param_1 + 0xd60) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar1 = lVar2;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0x1d4) = 0xc2a00000;
  *(undefined4 *)(param_1 + 0x1d8) = 0xc2a00000;
  _bzero((void *)(param_1 + 0x1dc),0x108);
  *(undefined4 *)(param_1 + 0x2e8) = 0xc2a00000;
  *(undefined8 *)(param_1 + 0xd40) = 0xc2a00000;
  return;
}




void FUN_10055f184(long param_1)

{
  *(undefined4 *)(param_1 + 0xd3c) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0xc2a00000;
  return;
}




undefined8 FUN_10055f194(long param_1)

{
  *(undefined1 *)(param_1 + 0xd68) = 1;
  *(undefined2 *)(param_1 + 0xd69) = 0x101;
  return 0;
}




undefined8 FUN_10055f1b0(long param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    return 0x1f;
  }
  if (param_3 == -1) {
    *(undefined2 *)(param_1 + 0xd69) = 0x101;
    return 0;
  }
  if (param_3 == -2) {
    *(undefined1 *)(param_1 + 0xd6a) = 1;
    return 0;
  }
  if (param_3 == -3) {
    *(undefined1 *)(param_1 + 0xd69) = 1;
    return 0;
  }
  *(int *)(param_1 + 0xdec) = param_3;
  return 0;
}




undefined8 FUN_10055f228(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xd50);
  *(undefined8 *)(param_1 + 0xd50) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar1 = lVar2;
  }
  lVar1 = *(long *)(param_1 + 0xd60);
  *(undefined8 *)(param_1 + 0xd60) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar1 = lVar2;
  }
  return 0;
}




undefined8 FUN_10055f2c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar1 = lVar2;
  }
  return 0;
}




undefined8 FUN_10055f328(float param_1,float param_2,float *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 extraout_b0;
  undefined1 uVar4;
  undefined1 extraout_var;
  undefined1 uVar5;
  undefined1 extraout_var_00;
  undefined1 uVar6;
  undefined1 extraout_var_01;
  undefined1 uVar7;
  
  if (param_2 + 0.691 <= -80.0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    _powf(0,(param_2 + 0.691) / 10.0);
    uVar4 = extraout_b0;
    uVar5 = extraout_var;
    uVar6 = extraout_var_00;
    uVar7 = extraout_var_01;
  }
  if ((float)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,uVar4))) == param_1 ||
      (float)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,uVar4))) < param_1) {
    do {
      pfVar3 = param_3;
      param_3 = *(float **)(pfVar3 + 2);
      if (param_3 == (float *)0x0) break;
    } while (*param_3 < param_1);
    pfVar1 = (float *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x10,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                                    ,0x12d,0);
    *(float **)(pfVar3 + 2) = pfVar1;
    if (pfVar1 == (float *)0x0) {
      *(float **)(pfVar3 + 2) = param_3;
      uVar2 = 0x26;
    }
    else {
      uVar2 = 0;
      *pfVar1 = param_1;
      *(float **)(pfVar1 + 2) = param_3;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




float FUN_10055f3f4(float param_1,long param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  float fVar9;
  
  pfVar3 = *(float **)(param_2 + 8);
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  if (pfVar3 == (float *)0x0) {
    fVar9 = 0.0;
  }
  else {
    iVar1 = 0;
    pfVar2 = pfVar3;
    do {
      fVar9 = (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) + *pfVar2;
      uVar5 = SUB41(fVar9,0);
      uVar6 = (undefined1)((uint)fVar9 >> 8);
      uVar7 = (undefined1)((uint)fVar9 >> 0x10);
      uVar8 = (undefined1)((uint)fVar9 >> 0x18);
      iVar1 = iVar1 + 1;
      pfVar2 = *(float **)(pfVar2 + 2);
    } while (pfVar2 != (float *)0x0);
    fVar9 = (float)iVar1;
  }
  if (80.0 <= param_1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)_powf(0x41200000,-param_1 / 10.0);
  }
  if (pfVar3 != (float *)0x0) {
    do {
      if (((float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) / fVar9) * fVar4 <= *pfVar3)
      {
        iVar1 = 0;
        fVar9 = 0.0;
        do {
          fVar9 = fVar9 + *pfVar3;
          iVar1 = iVar1 + 1;
          pfVar3 = *(float **)(pfVar3 + 2);
        } while (pfVar3 != (float *)0x0);
        fVar4 = (float)iVar1;
        goto LAB_10055f4bc;
      }
      pfVar3 = *(float **)(pfVar3 + 2);
    } while (pfVar3 != (float *)0x0);
  }
  fVar4 = 0.0;
  fVar9 = 0.0;
LAB_10055f4bc:
  if (fVar9 / fVar4 <= 0.0) {
    fVar9 = -80.691;
  }
  else {
    fVar9 = (float)_log10f();
    fVar9 = fVar9 * 10.0 + -0.691;
  }
  return fVar9;
}




float FUN_10055f4fc(float param_1,float param_2,float param_3,long param_4,float *param_5,
                   float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_b0;
  undefined1 uVar5;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 uVar6;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar7;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 uVar8;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar3 = 0;
  fVar10 = 0.0;
  pfVar2 = *(float **)(param_4 + 8);
  for (pfVar1 = pfVar2; pfVar1 != (float *)0x0; pfVar1 = *(float **)(pfVar1 + 2)) {
    fVar10 = fVar10 + *pfVar1;
    iVar3 = iVar3 + 1;
  }
  if (80.0 <= param_1) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    _powf(0,-param_1 / 10.0);
    uVar5 = extraout_b0;
    uVar6 = extraout_var;
    uVar7 = extraout_var_02;
    uVar8 = extraout_var_05;
  }
  fVar12 = -80.0;
  fVar11 = fVar12;
  if (pfVar2 != (float *)0x0) {
    while (*pfVar2 < (fVar10 / (float)iVar3) *
                     (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)))) {
      pfVar2 = *(float **)(pfVar2 + 2);
      if (pfVar2 == (float *)0x0) goto LAB_10055f730;
    }
    pfVar1 = pfVar2;
    iVar3 = -1;
    do {
      iVar4 = iVar3;
      pfVar1 = *(float **)(pfVar1 + 2);
      iVar3 = iVar4 + 1;
    } while (pfVar1 != (float *)0x0);
    if ((param_2 <= param_3 && iVar4 != -2) && (pfVar2 != (float *)0x0)) {
      iVar4 = 0;
      fVar10 = (float)iVar3;
      fVar9 = (fVar10 * param_2) / 100.0;
      fVar10 = (fVar10 * param_3) / 100.0;
      do {
        if (fVar9 < (float)iVar4 + 1.0) {
          fVar11 = *pfVar2;
          uVar5 = SUB41(fVar11,0);
          uVar6 = (undefined1)((uint)fVar11 >> 8);
          uVar7 = (undefined1)((uint)fVar11 >> 0x10);
          uVar8 = (undefined1)((uint)fVar11 >> 0x18);
          if (*(float **)(pfVar2 + 2) != (float *)0x0) {
            fVar11 = (1.0 - (fVar9 - (float)(int)fVar9)) * fVar11 +
                     (fVar9 - (float)(int)fVar9) * **(float **)(pfVar2 + 2);
            uVar5 = SUB41(fVar11,0);
            uVar6 = (undefined1)((uint)fVar11 >> 8);
            uVar7 = (undefined1)((uint)fVar11 >> 0x10);
            uVar8 = (undefined1)((uint)fVar11 >> 0x18);
          }
          if (!NAN((float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)))) &&
              ((float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) < 0.0 ||
              (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) == 0.0)) {
            fVar11 = -80.691;
          }
          else {
            _log10f();
            fVar11 = (float)CONCAT13(extraout_var_06,
                                     CONCAT12(extraout_var_03,
                                              CONCAT11(extraout_var_00,extraout_b0_00))) * 10.0 +
                     -0.691;
          }
          while( true ) {
            if (pfVar2 == (float *)0x0) goto LAB_10055f730;
            if (fVar10 < (float)iVar4 + 1.0) break;
            iVar4 = iVar4 + 1;
            pfVar2 = *(float **)(pfVar2 + 2);
          }
          fVar12 = *pfVar2;
          uVar5 = SUB41(fVar12,0);
          uVar6 = (undefined1)((uint)fVar12 >> 8);
          uVar7 = (undefined1)((uint)fVar12 >> 0x10);
          uVar8 = (undefined1)((uint)fVar12 >> 0x18);
          if (*(float **)(pfVar2 + 2) != (float *)0x0) {
            fVar10 = (1.0 - (fVar10 - (float)(int)fVar10)) * fVar12 +
                     (fVar10 - (float)(int)fVar10) * **(float **)(pfVar2 + 2);
            uVar5 = SUB41(fVar10,0);
            uVar6 = (undefined1)((uint)fVar10 >> 8);
            uVar7 = (undefined1)((uint)fVar10 >> 0x10);
            uVar8 = (undefined1)((uint)fVar10 >> 0x18);
          }
          if (!NAN((float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)))) &&
              ((float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) < 0.0 ||
              (float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) == 0.0)) {
            fVar12 = -80.691;
            if (-80.691 <= fVar11) {
              fVar12 = fVar11;
            }
          }
          else {
            _log10f();
            fVar12 = (float)CONCAT13(extraout_var_07,
                                     CONCAT12(extraout_var_04,
                                              CONCAT11(extraout_var_01,extraout_b0_01))) * 10.0 +
                     -0.691;
            if (fVar12 <= fVar11) {
              fVar12 = fVar11;
            }
          }
          break;
        }
        iVar4 = iVar4 + 1;
        pfVar2 = *(float **)(pfVar2 + 2);
      } while (pfVar2 != (float *)0x0);
    }
  }
LAB_10055f730:
  if (param_5 != (float *)0x0) {
    *param_5 = fVar11;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar12;
  }
  return fVar12 - fVar11;
}




void FUN_10055f764(float param_1,float param_2,long param_3,int param_4,ulong param_5,float *param_6
                  )

{
  long lVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 + 0.691 <= -80.0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)_powf(0x41200000,(param_1 + 0.691) / 10.0);
  }
  iVar3 = (int)param_5;
  if (((iVar3 != 0) && (param_6 != (float *)0x0)) &&
     (fVar7 = (param_2 - param_1) / (float)iVar3, 0.0 < fVar7)) {
    _bzero(param_6,-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
    pfVar4 = *(float **)(param_3 + 8);
    if ((pfVar4 == (float *)0x0) || (param_4 == 0)) {
LAB_10055f838:
      bVar2 = pfVar4 != (float *)0x0;
      if ((0 < iVar3) && (pfVar4 != (float *)0x0)) {
        lVar5 = 0;
        do {
          lVar1 = lVar5 + 1;
          fVar6 = fVar7 * (float)(int)lVar1 + param_1 + 0.691;
          if (fVar6 <= -80.0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = (float)_powf(0x41200000,fVar6 / 10.0);
          }
          while( true ) {
            if (pfVar4 == (float *)0x0) {
              return;
            }
            if (fVar6 <= *pfVar4) break;
            param_6[lVar5] = param_6[lVar5] + 1.0;
            pfVar4 = *(float **)(pfVar4 + 2);
          }
          lVar5 = lVar1;
        } while (lVar1 < iVar3);
        bVar2 = true;
      }
      if ((bVar2) && (param_4 != 0)) {
        fVar6 = param_6[iVar3 + -1];
        do {
          fVar6 = fVar6 + 1.0;
          pfVar4 = *(float **)(pfVar4 + 2);
        } while (pfVar4 != (float *)0x0);
        param_6[iVar3 + -1] = fVar6;
      }
    }
    else {
      do {
        if (fVar6 <= *pfVar4) goto LAB_10055f838;
        *param_6 = *param_6 + 1.0;
        pfVar4 = *(float **)(pfVar4 + 2);
      } while (pfVar4 != (float *)0x0);
    }
  }
  return;
}




void FUN_10055f914(long param_1)

{
  FUN_10055f4fc(0x41a00000,0x41200000,0x42be0000,param_1 + 0xd58);
  return;
}




void FUN_10055f92c(long param_1,void *param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  
  if (param_2 != (void *)0x0) {
    _bzero(param_2,0x108);
    pfVar2 = *(float **)(param_1 + 0xd50);
    if (pfVar2 != (float *)0x0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 1;
        fVar4 = (float)(int)lVar1 + -60.0 + 0.691;
        if (fVar4 <= -80.0) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = (float)_powf(0x41200000,fVar4 / 10.0);
        }
        while (*pfVar2 < fVar4) {
          *(float *)((long)param_2 + lVar3 * 4) = *(float *)((long)param_2 + lVar3 * 4) + 1.0;
          pfVar2 = *(float **)(pfVar2 + 2);
          if (pfVar2 == (float *)0x0) {
            return;
          }
        }
        lVar3 = lVar1;
      } while (lVar1 < 0x42);
    }
  }
  return;
}




void FUN_10055fa08(long param_1,void *param_2,void *param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 auVar16 [16];
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
  float local_23c;
  float local_224;
  float local_21c;
  float local_210;
  float local_208;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0 [66];
  long local_a8;
  
  lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  local_a8 = lVar15;
  _memcpy(param_3,param_2,(ulong)param_4 * (long)param_5 * 4);
  if (*(char *)(param_1 + 0xd68) != '\0') {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    auVar16._8_4_ = 0xc2a00000;
    auVar16._0_8_ = 0xc2a00000c2a00000;
    auVar16._12_4_ = 0xc2a00000;
    *(undefined8 *)(param_1 + 0x1c8) = 0xc2a00000c2a00000;
    auVar16 = NEON_ext(auVar16,auVar16,8,1);
    *(long *)(param_1 + 0x1d0) = auVar16._0_8_;
    *(undefined4 *)(param_1 + 0x1d8) = 0xc2a00000;
    _bzero((void *)(param_1 + 0x1dc),0x108);
    *(undefined4 *)(param_1 + 0x2e4) = 0xc2a00000;
    *(undefined4 *)(param_1 + 0x2e8) = 0xc2a00000;
    *(undefined4 *)(param_1 + 0xd40) = 0xc2a00000;
    *(undefined8 *)(param_1 + 0xd34) = 0;
    _memset((void *)(param_1 + 0xcb8),0,0x78);
    lVar8 = 0;
    puVar9 = (undefined8 *)(param_1 + 0x738);
    do {
      puVar1 = (undefined4 *)(param_1 + 0x34c + lVar8);
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      *puVar1 = 0;
      puVar1[-1] = 0;
      *(undefined4 *)(puVar9 + 5) = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      lVar8 = lVar8 + 0x20;
      *puVar9 = 0;
      puVar9 = (undefined8 *)((long)puVar9 + 0x2c);
    } while (lVar8 != 0x400);
    *(undefined1 *)(param_1 + 0xd68) = 0;
  }
  if (*(char *)(param_1 + 0xd69) != '\0') {
    lVar8 = *(long *)(param_1 + 0xd50);
    *(undefined8 *)(param_1 + 0xd50) = 0;
    while (lVar8 != 0) {
      lVar13 = *(long *)(lVar8 + 8);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar8,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                    ,0xf9);
      lVar8 = lVar13;
    }
    lVar8 = *(long *)(param_1 + 0xd60);
    *(undefined8 *)(param_1 + 0xd60) = 0;
    while (lVar8 != 0) {
      lVar13 = *(long *)(lVar8 + 8);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar8,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                    ,0xf9);
      lVar8 = lVar13;
    }
    *(undefined4 *)(param_1 + 0x1d0) = 0xc2a00000;
    *(undefined4 *)(param_1 + 0x1d4) = 0xc2a00000;
    *(undefined4 *)(param_1 + 0x1d8) = 0xc2a00000;
    _bzero((void *)(param_1 + 0x1dc),0x108);
    *(undefined4 *)(param_1 + 0x2e8) = 0xc2a00000;
    *(undefined4 *)(param_1 + 0xd40) = 0xc2a00000;
    *(undefined4 *)(param_1 + 0xd44) = 0;
    *(undefined1 *)(param_1 + 0xd69) = 0;
  }
  if (*(char *)(param_1 + 0xd6a) == '\0') {
    fVar18 = *(float *)(param_1 + 0xd3c);
  }
  else {
    *(undefined4 *)(param_1 + 0xd3c) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0xc2a00000;
    *(undefined1 *)(param_1 + 0xd6a) = 0;
    fVar18 = 0.0;
  }
  iVar3 = *(int *)(param_1 + 0xdec);
  local_210 = *(float *)(param_1 + 0x1c8);
  local_21c = *(float *)(param_1 + 0x1cc);
  local_23c = *(float *)(param_1 + 0x1d0);
  local_1b4 = *(undefined4 *)(param_1 + 0x1d4);
  local_1b8 = *(undefined4 *)(param_1 + 0x1d8);
  local_224 = *(float *)(param_1 + 0xd40);
  if (param_4 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = false;
    iVar14 = *(int *)(param_1 + 0xd38);
    local_208 = -80.0;
    pfVar12 = (float *)(param_1 + (long)*(int *)(param_1 + 0xd34) * 4 + 0xcb8);
    do {
      if (iVar14 == *(int *)(param_1 + 0xd30)) {
        iVar4 = *(int *)(param_1 + 0xd34);
        lVar15 = param_1 + 0xcb8;
        fVar24 = (*pfVar12 + *(float *)(lVar15 + (long)((iVar4 + 0x1d) % 0x1e) * 4) +
                  *(float *)(lVar15 + (long)((iVar4 + 0x1c) % 0x1e) * 4) +
                 *(float *)(lVar15 + (long)((iVar4 + 0x1b) % 0x1e) * 4)) / (float)(iVar14 << 2);
        local_210 = local_208;
        if (0.0 < fVar24) {
          local_210 = (float)_log10f(fVar24);
          local_210 = local_210 * 10.0;
        }
        local_210 = local_210 + -0.691;
        if ((iVar3 == 1) && (3 < *(int *)(param_1 + 0xd44))) {
          pfVar12 = (float *)(param_1 + 0xd48);
          if (fVar24 < 1.17246636e-07) {
LAB_10055fe48:
            pfVar12 = *(float **)(param_1 + 0xd50);
            fVar24 = 0.0;
            if (pfVar12 != (float *)0x0) {
              iVar14 = 0;
              pfVar10 = pfVar12;
              do {
                fVar24 = fVar24 + *pfVar10;
                iVar14 = iVar14 + 1;
                pfVar10 = *(float **)(pfVar10 + 2);
              } while (pfVar10 != (float *)0x0);
LAB_10055fe84:
              if (*pfVar12 < (fVar24 / (float)iVar14) * 0.1) goto code_r0x00010055fe90;
              fVar24 = *pfVar12 + 0.0;
              iVar14 = 1;
              for (pfVar12 = *(float **)(pfVar12 + 2); pfVar12 != (float *)0x0;
                  pfVar12 = *(float **)(pfVar12 + 2)) {
                fVar24 = fVar24 + *pfVar12;
                iVar14 = iVar14 + 1;
              }
              fVar17 = (float)iVar14;
              goto LAB_10055fed0;
            }
LAB_10055fe9c:
            fVar17 = 0.0;
            fVar24 = 0.0;
LAB_10055fed0:
            local_23c = -80.691;
            if (0.0 < fVar24 / fVar17) {
              fVar24 = (float)_log10f();
              local_23c = fVar24 * 10.0 + -0.691;
            }
            if (local_224 <= local_210) {
              local_224 = local_210;
            }
            iVar14 = *(int *)(param_1 + 0xd30);
            goto LAB_10055ff14;
          }
          do {
            pfVar10 = pfVar12;
            pfVar12 = *(float **)(pfVar10 + 2);
            if (pfVar12 == (float *)0x0) {
              pfVar12 = (float *)0x0;
              break;
            }
          } while (*pfVar12 < fVar24);
          pfVar6 = (float *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x10,
                                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                                          ,0x12d,0);
          *(float **)(pfVar10 + 2) = pfVar6;
          if (pfVar6 != (float *)0x0) {
            *pfVar6 = fVar24;
            *(float **)(pfVar6 + 2) = pfVar12;
            goto LAB_10055fe48;
          }
LAB_100560780:
          *(float **)(pfVar10 + 2) = pfVar12;
          uVar7 = 0x26;
          lVar15 = *(long *)PTR____stack_chk_guard_101444218;
          goto LAB_100560744;
        }
LAB_10055ff14:
        fVar24 = (*(float *)(param_1 + 0xcb8) + 0.0 + *(float *)(param_1 + 0xcbc) +
                  *(float *)(param_1 + 0xcc0) + *(float *)(param_1 + 0xcc4) +
                  *(float *)(param_1 + 0xcc8) + *(float *)(param_1 + 0xccc) +
                  *(float *)(param_1 + 0xcd0) + *(float *)(param_1 + 0xcd4) +
                  *(float *)(param_1 + 0xcd8) + *(float *)(param_1 + 0xcdc) +
                  *(float *)(param_1 + 0xce0) + *(float *)(param_1 + 0xce4) +
                  *(float *)(param_1 + 0xce8) + *(float *)(param_1 + 0xcec) +
                  *(float *)(param_1 + 0xcf0) + *(float *)(param_1 + 0xcf4) +
                  *(float *)(param_1 + 0xcf8) + *(float *)(param_1 + 0xcfc) +
                  *(float *)(param_1 + 0xd00) + *(float *)(param_1 + 0xd04) +
                  *(float *)(param_1 + 0xd08) + *(float *)(param_1 + 0xd0c) +
                  *(float *)(param_1 + 0xd10) + *(float *)(param_1 + 0xd14) +
                  *(float *)(param_1 + 0xd18) + *(float *)(param_1 + 0xd1c) +
                  *(float *)(param_1 + 0xd20) + *(float *)(param_1 + 0xd24) +
                  *(float *)(param_1 + 0xd28) + *(float *)(param_1 + 0xd2c)) /
                 (float)(iVar14 * 0x1e);
        if ((iVar3 == 1) && (0x1d < *(int *)(param_1 + 0xd44))) {
          pfVar12 = (float *)(param_1 + 0xd58);
          if (1.17246636e-07 <= fVar24) {
            do {
              pfVar10 = pfVar12;
              pfVar12 = *(float **)(pfVar10 + 2);
              if (pfVar12 == (float *)0x0) {
                pfVar12 = (float *)0x0;
                break;
              }
            } while (*pfVar12 < fVar24);
            pfVar6 = (float *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x10,
                                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                                            ,0x12d,0);
            *(float **)(pfVar10 + 2) = pfVar6;
            if (pfVar6 == (float *)0x0) goto LAB_100560780;
            *pfVar6 = fVar24;
            *(float **)(pfVar6 + 2) = pfVar12;
          }
          FUN_10055f4fc(ZEXT816(0x41a00000),ZEXT816(0x41200000),0x42be0000,
                        (float *)(param_1 + 0xd58),&local_1b4,&local_1b8);
        }
        local_21c = local_208;
        if (0.0 < fVar24) {
          local_21c = (float)_log10f(fVar24);
          local_21c = local_21c * 10.0;
        }
        if (iVar3 == 1) {
          _bzero(local_1b0,0x108);
          pfVar12 = *(float **)(param_1 + 0xd50);
          if (pfVar12 == (float *)0x0) {
            bVar5 = true;
          }
          else {
            lVar15 = 0;
            do {
              lVar8 = lVar15 + 1;
              if ((float)(int)lVar8 + -60.0 + 0.691 <= -80.0) {
                fVar24 = 0.0;
              }
              else {
                fVar24 = (float)_powf();
              }
              while (*pfVar12 < fVar24) {
                local_1b0[lVar15] = local_1b0[lVar15] + 1.0;
                pfVar12 = *(float **)(pfVar12 + 2);
                if (pfVar12 == (float *)0x0) {
                  bVar5 = true;
                  goto LAB_1005601bc;
                }
              }
              bVar5 = true;
              lVar15 = lVar8;
            } while (lVar8 < 0x42);
          }
        }
LAB_1005601bc:
        local_21c = local_21c + -0.691;
        iVar14 = (*(int *)(param_1 + 0xd34) + 1) % 0x1e;
        *(int *)(param_1 + 0xd34) = iVar14;
        *(undefined4 *)(param_1 + 0xd38) = 0;
        *(undefined4 *)(param_1 + 0xcb8 + (long)iVar14 * 4) = 0;
        pfVar12 = (float *)(param_1 + 0xcb8 + (long)*(int *)(param_1 + 0xd34) * 4);
        if (*(int *)(param_1 + 0xd44) < 0x1e) {
          *(int *)(param_1 + 0xd44) = *(int *)(param_1 + 0xd44) + 1;
        }
      }
      param_4 = param_4 - 1;
      if (0 < param_5) {
        lVar13 = 0;
        lVar8 = 0;
        lVar15 = 0;
        do {
          lVar2 = param_1 + lVar13;
          fVar19 = *(float *)(lVar2 + 0x338);
          lVar11 = *(long *)(lVar2 + 0x340);
          fVar20 = *(float *)(lVar11 + 0x18);
          fVar21 = *(float *)(lVar2 + 0x33c);
          fVar24 = (*(float *)((long)param_2 + lVar15 * 4) - fVar19 * *(float *)(lVar11 + 0x1c)) -
                   fVar21 * *(float *)(lVar11 + 0x20);
          fVar22 = *(float *)(lVar11 + 0x10);
          fVar23 = *(float *)(lVar11 + 0x14);
          *(float *)(lVar2 + 0x33c) = fVar19;
          *(float *)(lVar2 + 0x338) = fVar24;
          fVar17 = *(float *)(lVar2 + 0x348);
          lVar11 = *(long *)(lVar2 + 0x350);
          fVar19 = ((fVar22 * fVar24 + fVar19 * fVar23 + fVar21 * fVar20) -
                   fVar17 * *(float *)(lVar11 + 0x1c)) -
                   *(float *)(lVar2 + 0x34c) * *(float *)(lVar11 + 0x20);
          fVar24 = *(float *)(lVar11 + 0x10) * fVar19 + fVar17 * *(float *)(lVar11 + 0x14) +
                   *(float *)(lVar2 + 0x34c) * *(float *)(lVar11 + 0x18);
          *(float *)(lVar2 + 0x34c) = fVar17;
          *(float *)(lVar2 + 0x348) = fVar19;
          *pfVar12 = *pfVar12 + *(float *)(param_1 + lVar15 * 4 + 0xd6c) * fVar24 * fVar24;
          if (iVar3 == 1) {
            fVar25 = *(float *)((long)param_2 + lVar15 * 4);
            lVar2 = param_1 + lVar8;
            fVar19 = *(float *)(lVar2 + 0x738);
            fVar20 = *(float *)(lVar2 + 0x73c);
            fVar26 = *(float *)(lVar2 + 0x740);
            fVar27 = *(float *)(lVar2 + 0x744);
            fVar28 = *(float *)(lVar2 + 0x748);
            fVar30 = *(float *)(lVar2 + 0x74c);
            fVar24 = *(float *)(lVar2 + 0x750);
            fVar23 = *(float *)(lVar2 + 0x754);
            fVar29 = *(float *)(lVar2 + 0x758);
            fVar31 = *(float *)(lVar2 + 0x75c);
            fVar32 = *(float *)(lVar2 + 0x760);
            fVar21 = (((((((((fVar25 * 0.0017089844 + fVar19 * 0.010986328) - fVar20 * 0.01965332) +
                           fVar26 * 0.033203125) - fVar27 * 0.059448242) + fVar28 * 0.1373291 +
                         fVar30 * 0.97216797) - fVar24 * 0.10229492) + fVar23 * 0.047607422) -
                      fVar29 * 0.026611328) + fVar31 * 0.014892578) - fVar32 * 0.008300781;
            fVar17 = (((((((((fVar19 * 0.029296875 - fVar25 * 0.029174805) - fVar20 * 0.051757812) +
                           fVar26 * 0.08911133) - fVar27 * 0.1665039) + fVar28 * 0.4650879 +
                         fVar30 * 0.77978516) - fVar24 * 0.20031738) + fVar23 * 0.1015625) -
                      fVar29 * 0.05822754) + fVar31 * 0.033081055) - fVar32 * 0.018920898;
            fVar22 = (((((((((fVar19 * 0.033081055 - fVar25 * 0.018920898) - fVar20 * 0.05822754) +
                           fVar26 * 0.1015625) - fVar27 * 0.20031738) + fVar28 * 0.77978516 +
                         fVar30 * 0.4650879) - fVar24 * 0.1665039) + fVar23 * 0.08911133) -
                      fVar29 * 0.051757812) + fVar31 * 0.029296875) - fVar32 * 0.029174805;
            fVar20 = ((((((((fVar19 * 0.014892578 - fVar25 * 0.008300781) - fVar20 * 0.026611328) +
                          fVar26 * 0.047607422) - fVar27 * 0.10229492) + fVar28 * 0.97216797 +
                        fVar30 * 0.1373291) - fVar24 * 0.059448242) + fVar23 * 0.033203125) -
                     fVar29 * 0.01965332) + fVar31 * 0.010986328 + fVar32 * 0.0017089844;
            *(float *)(lVar2 + 0x760) = fVar31;
            *(float *)(lVar2 + 0x75c) = fVar29;
            *(undefined4 *)(lVar2 + 0x750) = *(undefined4 *)(lVar2 + 0x74c);
            *(undefined4 *)(lVar2 + 0x74c) = *(undefined4 *)(lVar2 + 0x748);
            *(float *)(lVar2 + 0x758) = fVar23;
            *(float *)(lVar2 + 0x754) = fVar24;
            auVar16 = *(undefined1 (*) [16])(lVar2 + 0x738);
            *(long *)(lVar2 + 0x73c) = auVar16._0_8_;
            auVar16 = NEON_ext(auVar16,auVar16,8,1);
            *(long *)(lVar2 + 0x744) = auVar16._0_8_;
            *(float *)(lVar2 + 0x738) = fVar25;
            fVar19 = -fVar21;
            fVar24 = fVar18;
            if (fVar18 <= fVar19) {
              fVar24 = fVar21;
            }
            fVar23 = fVar24;
            if (fVar21 < 0.0) {
              fVar23 = fVar19;
            }
            if (fVar18 <= fVar19) {
              fVar24 = fVar23;
            }
            if (fVar18 <= fVar21) {
              fVar18 = fVar21;
            }
            if (0.0 <= fVar21) {
              fVar24 = fVar18;
            }
            fVar19 = -fVar17;
            fVar18 = fVar24;
            if (fVar24 <= fVar19) {
              fVar18 = fVar17;
            }
            fVar21 = fVar18;
            if (fVar17 < 0.0) {
              fVar21 = fVar19;
            }
            if (fVar24 <= fVar19) {
              fVar18 = fVar21;
            }
            if (fVar24 <= fVar17) {
              fVar24 = fVar17;
            }
            if (0.0 <= fVar17) {
              fVar18 = fVar24;
            }
            fVar17 = -fVar22;
            fVar24 = fVar18;
            if (fVar18 <= fVar17) {
              fVar24 = fVar22;
            }
            fVar19 = fVar24;
            if (fVar22 < 0.0) {
              fVar19 = fVar17;
            }
            if (fVar18 <= fVar17) {
              fVar24 = fVar19;
            }
            if (fVar18 <= fVar22) {
              fVar18 = fVar22;
            }
            if (0.0 <= fVar22) {
              fVar24 = fVar18;
            }
            fVar18 = fVar24;
            if (0.0 <= fVar20) {
              if (fVar24 <= fVar20) {
                fVar18 = fVar20;
              }
            }
            else {
              fVar17 = -fVar20;
              if (fVar24 <= fVar17) {
                fVar18 = fVar20;
              }
              fVar19 = fVar18;
              if (fVar20 < 0.0) {
                fVar19 = fVar17;
              }
              if (fVar24 <= fVar17) {
                fVar18 = fVar19;
              }
            }
          }
          lVar15 = lVar15 + 1;
          lVar8 = lVar8 + 0x2c;
          lVar13 = lVar13 + 0x20;
        } while (param_5 != (int)lVar15);
        param_2 = (void *)((long)param_2 + ((ulong)(param_5 - 1) + 1) * 4);
      }
      iVar14 = *(int *)(param_1 + 0xd38) + 1;
      *(int *)(param_1 + 0xd38) = iVar14;
    } while (param_4 != 0);
    lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  }
  *(float *)(param_1 + 0x1c8) = local_210;
  *(float *)(param_1 + 0x1cc) = local_21c;
  *(float *)(param_1 + 0x1d0) = local_23c;
  *(undefined4 *)(param_1 + 0x1d4) = local_1b4;
  *(undefined4 *)(param_1 + 0x1d8) = local_1b8;
  if (fVar18 <= 0.0) {
    fVar24 = -80.0;
  }
  else {
    fVar24 = (float)_log10f(fVar18);
    fVar24 = fVar24 * 20.0;
  }
  *(float *)(param_1 + 0x2e4) = fVar24;
  *(float *)(param_1 + 0x2e8) = local_224;
  *(float *)(param_1 + 0xd3c) = fVar18;
  *(float *)(param_1 + 0xd40) = local_224;
  if (bVar5) {
    _memcpy((void *)(param_1 + 0x1dc),local_1b0,0x108);
  }
  uVar7 = 0;
LAB_100560744:
  if (lVar15 == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
code_r0x00010055fe90:
  pfVar12 = *(float **)(pfVar12 + 2);
  if (pfVar12 == (float *)0x0) goto LAB_10055fe9c;
  goto LAB_10055fe84;
}

