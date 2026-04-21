// functions/00ef5 — 6 functions
#include "libGameKindred.h"




void FUN_00ef5048(undefined8 param_1,long param_2,long param_3,float *param_4,float *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float local_114;
  long local_110 [3];
  float afStack_f8 [6];
  float local_e0 [6];
  undefined8 local_c8;
  float afStack_c0 [20];
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(param_3 + 0x1f) & 0xc0) == 0x40) {
    pfVar11 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(param_3 + 4) * 0xc);
    pfVar12 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(param_3 + 6) * 0xc);
    fVar18 = (float)FUN_00efa36c((*pfVar11 - *param_4) * (*pfVar11 - *param_4) +
                                 (pfVar11[1] - param_4[1]) * (pfVar11[1] - param_4[1]) +
                                 (pfVar11[2] - param_4[2]) * (pfVar11[2] - param_4[2]));
    fVar19 = (float)FUN_00efa36c((*pfVar12 - *param_4) * (*pfVar12 - *param_4) +
                                 (pfVar12[1] - param_4[1]) * (pfVar12[1] - param_4[1]) +
                                 (pfVar12[2] - param_4[2]) * (pfVar12[2] - param_4[2]));
    fVar18 = fVar18 / (fVar18 + fVar19);
    *param_5 = *pfVar11 + fVar18 * (*pfVar12 - *pfVar11);
    param_5[1] = pfVar11[1] + fVar18 * (pfVar12[1] - pfVar11[1]);
    param_5[2] = pfVar11[2] + fVar18 * (pfVar12[2] - pfVar11[2]);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    bVar1 = *(byte *)(param_3 + 0x1e);
    lVar15 = *(long *)(param_2 + 0x28);
    if (bVar1 != 0) {
      lVar9 = *(long *)(param_2 + 0x18);
      pfVar11 = afStack_c0;
      puVar10 = (ushort *)(param_3 + 4);
      uVar5 = (ulong)bVar1;
      do {
        uVar5 = uVar5 - 1;
        pfVar12 = (float *)(lVar9 + (ulong)*puVar10 * 0xc);
        pfVar11[-2] = *pfVar12;
        pfVar11[-1] = pfVar12[1];
        *pfVar11 = pfVar12[2];
        pfVar11 = pfVar11 + 3;
        puVar10 = puVar10 + 1;
      } while (uVar5 != 0);
    }
    *param_5 = *param_4;
    uVar17 = (ulong)(param_3 - lVar8) >> 5 & 0xffffffff;
    param_5[1] = param_4[1];
    param_5[2] = param_4[2];
    uVar5 = FUN_00efaa44(param_4,&local_c8,bVar1,local_e0,afStack_f8);
    if ((uVar5 & 1) == 0) {
      uVar13 = (uint)bVar1;
      if (uVar13 == 0) {
        iVar6 = -1;
      }
      else {
        fVar19 = 3.4028235e+38;
        uVar5 = 0;
        iVar6 = -1;
        do {
          fVar18 = local_e0[uVar5];
          iVar3 = (int)uVar5;
          if (fVar19 <= local_e0[uVar5]) {
            fVar18 = fVar19;
            iVar3 = iVar6;
          }
          iVar6 = iVar3;
          fVar19 = fVar18;
          uVar5 = uVar5 + 1;
        } while (bVar1 != uVar5);
      }
      iVar3 = 0;
      if (uVar13 != 0) {
        iVar3 = (iVar6 + 1) / (int)uVar13;
      }
      lVar8 = (long)(int)((iVar6 + 1) - iVar3 * uVar13);
      uVar20 = *(undefined8 *)((long)&local_c8 + (long)iVar6 * 0xc);
      uVar21 = *(undefined8 *)((long)&local_c8 + lVar8 * 0xc);
      fVar22 = local_e0[(long)iVar6 + -6];
      fVar19 = (float)uVar20;
      fVar18 = (float)((ulong)uVar20 >> 0x20);
      *(ulong *)param_5 =
           CONCAT44(fVar18 + ((float)((ulong)uVar21 >> 0x20) - fVar18) * fVar22,
                    fVar19 + ((float)uVar21 - fVar19) * fVar22);
      param_5[2] = afStack_c0[(long)iVar6 * 3] +
                   fVar22 * (afStack_c0[lVar8 * 3] - afStack_c0[(long)iVar6 * 3]);
    }
    pbVar14 = (byte *)(lVar15 + uVar17 * 0xc + 9);
    if (*pbVar14 != 0) {
      piVar16 = (int *)(lVar15 + uVar17 * 0xc);
      uVar13 = 0;
      do {
        iVar6 = piVar16[1];
        lVar15 = *(long *)(param_2 + 0x38);
        bVar1 = *(byte *)(param_3 + 0x1e);
        lVar8 = 0;
        do {
          bVar2 = *(byte *)(lVar15 + (ulong)((iVar6 + uVar13) * 4) + lVar8);
          if ((uint)bVar2 < (uint)bVar1) {
            lVar9 = *(long *)(param_2 + 0x18) +
                    (ulong)*(ushort *)(param_3 + (ulong)bVar2 * 2 + 4) * 0xc;
          }
          else {
            lVar9 = *(long *)(param_2 + 0x30) +
                    (ulong)((((uint)bVar2 - (uint)bVar1) + *piVar16) * 3) * 4;
          }
          local_110[lVar8] = lVar9;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        uVar5 = FUN_00efa8a0(param_4,local_110[0],local_110[1],local_110[2],&local_114);
        if ((uVar5 & 1) != 0) {
          param_5[1] = local_114;
          break;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *pbVar14);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ef539c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  long local_c0;
  long local_b8;
  float afStack_b0 [6];
  float local_98 [6];
  undefined8 local_80;
  float afStack_78 [16];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_c0 = 0;
  local_b8 = 0;
  iVar5 = FUN_00ef33d4(*param_1,param_2,&local_b8,&local_c0);
  if (iVar5 < 0) {
    uVar7 = 0x80000008;
  }
  else {
    bVar2 = *(byte *)(local_c0 + 0x1e);
    if ((ulong)bVar2 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      lVar9 = *(long *)(local_b8 + 0x18);
      pfVar10 = afStack_78;
      do {
        lVar1 = uVar12 * 2;
        uVar12 = uVar12 + 1;
        pfVar11 = (float *)(lVar9 + (ulong)*(ushort *)(local_c0 + 4 + lVar1) * 0xc);
        pfVar10[-2] = *pfVar11;
        pfVar10[-1] = pfVar11[1];
        *pfVar10 = pfVar11[2];
        pfVar10 = pfVar10 + 3;
      } while (uVar12 < bVar2);
    }
    uVar6 = FUN_00efaa44(param_3,&local_80,uVar12 & 0xffffffff,local_98,afStack_b0);
    if ((uVar6 & 1) == 0) {
      iVar5 = (int)uVar12;
      if (iVar5 == 0) {
        iVar8 = -1;
      }
      else {
        fVar13 = 3.4028235e+38;
        uVar6 = 0;
        iVar8 = -1;
        do {
          fVar14 = local_98[uVar6];
          iVar3 = (int)uVar6;
          if (fVar13 <= local_98[uVar6]) {
            fVar14 = fVar13;
            iVar3 = iVar8;
          }
          iVar8 = iVar3;
          fVar13 = fVar14;
          uVar6 = uVar6 + 1;
        } while ((uVar12 & 0xffffffff) != uVar6);
      }
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = (iVar8 + 1) / iVar5;
      }
      lVar9 = (long)((iVar8 + 1) - iVar3 * iVar5);
      uVar7 = *(undefined8 *)((long)&local_80 + (long)iVar8 * 0xc);
      uVar15 = *(undefined8 *)((long)&local_80 + lVar9 * 0xc);
      fVar16 = local_98[(long)iVar8 + -6];
      fVar13 = (float)uVar7;
      fVar14 = (float)((ulong)uVar7 >> 0x20);
      *param_4 = CONCAT44(fVar14 + ((float)((ulong)uVar15 >> 0x20) - fVar14) * fVar16,
                          fVar13 + ((float)uVar15 - fVar13) * fVar16);
      *(float *)(param_4 + 1) =
           afStack_78[(long)iVar8 * 3] +
           fVar16 * (afStack_78[lVar9 * 3] - afStack_78[(long)iVar8 * 3]);
    }
    else {
      *(undefined4 *)param_4 = *param_3;
      *(undefined4 *)((long)param_4 + 4) = param_3[1];
      *(undefined4 *)(param_4 + 1) = param_3[2];
    }
    uVar7 = 0x40000000;
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}




void FUN_00ef5688(undefined8 *param_1,float *param_2,float *param_3,undefined8 param_4,long param_5,
                 int *param_6,int param_7)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188 [32];
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_7c = *param_2 - *param_3;
  local_88 = *param_2 + *param_3;
  local_78 = param_2[1] - param_3[1];
  fStack_84 = param_2[1] + param_3[1];
  local_74 = param_2[2] - param_3[2];
  local_80 = param_2[2] + param_3[2];
  FUN_00ef3398(*param_1,&local_7c,&local_18c,&local_190);
  FUN_00ef3398(*param_1,&local_88,&local_194,&local_198);
  if (local_198 < local_190) {
    iVar9 = 0;
    uVar6 = 0x40000000;
  }
  else {
    iVar9 = 0;
    iVar8 = local_190;
    iVar4 = local_198;
    iVar5 = local_194;
    do {
      iVar3 = local_18c;
      if (local_18c <= iVar5) {
        do {
          iVar4 = FUN_00ef31f0(*param_1,iVar3,iVar8,local_188,0x20);
          if (0 < iVar4) {
            lVar7 = 0;
            do {
              iVar5 = FUN_00ef59cc(param_1,local_188[lVar7],&local_7c,&local_88,param_4,
                                   param_5 + (long)iVar9 * 4,param_7 - iVar9);
              iVar9 = iVar5 + iVar9;
              if (param_7 <= iVar9) {
                uVar6 = 0x40000010;
                goto LAB_00ef5804;
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar4);
          }
          bVar1 = iVar3 < local_194;
          iVar4 = local_198;
          iVar3 = iVar3 + 1;
          iVar5 = local_194;
        } while (bVar1);
      }
      bVar1 = iVar8 < iVar4;
      iVar8 = iVar8 + 1;
    } while (bVar1);
    uVar6 = 0x40000000;
  }
LAB_00ef5804:
  *param_6 = iVar9;
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




uint FUN_00ef583c(long *param_1,long param_2,float *param_3,float *param_4,undefined8 param_5,
                 float *param_6)

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
  uVar3 = FUN_00ef59cc(param_1,param_2,&local_8c,&local_98,param_5,local_298,0x80);
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
      uVar3 = FUN_00ef5048(uVar3,param_2,
                           *(long *)(param_2 + 0x10) +
                           (ulong)((1 << (ulong)(*(uint *)(*param_1 + 0x60) & 0x1f)) - 1U & uVar1) *
                           0x20,param_3,&local_2a4);
      fVar8 = (local_2a4 - *param_3) * (local_2a4 - *param_3) +
              (fStack_2a0 - param_3[1]) * (fStack_2a0 - param_3[1]) +
              (local_29c - param_3[2]) * (local_29c - param_3[2]);
      if ((fVar8 < fVar9) && (fVar9 = fVar8, uVar5 = uVar1, param_6 != (float *)0x0)) {
        *param_6 = local_2a4;
        param_6[1] = fStack_2a0;
        param_6[2] = local_29c;
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




int FUN_00ef59cc(undefined8 *param_1,long param_2,float *param_3,float *param_4,long param_5,
                long param_6,int param_7)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  ushort *puVar19;
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
  
  puVar19 = *(ushort **)(param_2 + 0x40);
  if (puVar19 == (ushort *)0x0) {
    uVar7 = FUN_00ef1e90(*param_1,param_2);
    lVar12 = *(long *)(param_2 + 8);
    iVar15 = *(int *)(lVar12 + 0x18);
    if (0 < iVar15) {
      lVar14 = *(long *)(param_2 + 0x10);
      lVar13 = 0;
      iVar8 = 0;
      lVar16 = lVar14;
      do {
        lVar11 = lVar14 + lVar13 * 0x20;
        if ((((*(byte *)(lVar11 + 0x1f) & 0xc0) != 0x40) &&
            (uVar2 = *(ushort *)(lVar11 + 0x1c), (*(ushort *)(param_5 + 0x100) & uVar2) != 0)) &&
           ((*(ushort *)(param_5 + 0x102) & uVar2) == 0)) {
          lVar11 = lVar14 + lVar13 * 0x20;
          uVar10 = (ulong)*(byte *)(lVar11 + 0x1e);
          pfVar17 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(lVar11 + 4) * 0xc);
          fVar29 = *pfVar17;
          fVar28 = pfVar17[1];
          fVar27 = pfVar17[2];
          fVar22 = fVar29;
          fVar20 = fVar28;
          fVar23 = fVar27;
          if (1 < uVar10) {
            lVar11 = 3;
            do {
              pfVar17 = (float *)(*(long *)(param_2 + 0x18) +
                                 (ulong)*(ushort *)(lVar16 + lVar11 * 2) * 0xc);
              fVar25 = *pfVar17;
              fVar30 = pfVar17[1];
              fVar31 = pfVar17[2];
              if (fVar25 <= fVar22) {
                fVar22 = fVar25;
              }
              if (fVar30 <= fVar20) {
                fVar20 = fVar30;
              }
              if (fVar31 <= fVar23) {
                fVar23 = fVar31;
              }
              if (fVar29 <= fVar25) {
                fVar29 = fVar25;
              }
              if (fVar28 <= fVar30) {
                fVar28 = fVar30;
              }
              if (fVar27 <= fVar31) {
                fVar27 = fVar31;
              }
              uVar18 = lVar11 - 1;
              lVar11 = lVar11 + 1;
            } while (uVar18 < uVar10);
          }
          bVar5 = 0;
          if ((*param_3 <= fVar29) && (bVar5 = 0, fVar22 <= *param_4)) {
            bVar5 = 1;
          }
          bVar4 = 0;
          if ((param_3[1] <= fVar28) && (bVar4 = 0, fVar20 <= param_4[1])) {
            bVar4 = bVar5;
          }
          if (((param_3[2] <= fVar27) && ((bool)(iVar8 < param_7 & bVar4))) &&
             (fVar23 <= param_4[2])) {
            *(uint *)(param_6 + (long)iVar8 * 4) = uVar7 | (uint)lVar13;
            iVar15 = *(int *)(lVar12 + 0x18);
            iVar8 = iVar8 + 1;
          }
        }
        lVar13 = lVar13 + 1;
        lVar16 = lVar16 + 0x20;
      } while (lVar13 < iVar15);
      return iVar8;
    }
  }
  else {
    lVar12 = *(long *)(param_2 + 8);
    fVar20 = *param_3;
    fVar23 = param_3[1];
    fVar25 = param_3[2];
    fVar30 = *(float *)(lVar12 + 0x50);
    fVar27 = *(float *)(lVar12 + 0x54);
    fVar32 = *(float *)(lVar12 + 0x48);
    fVar31 = *(float *)(lVar12 + 0x4c);
    fVar28 = *(float *)(lVar12 + 0x58);
    fVar29 = *(float *)(lVar12 + 0x5c);
    fVar33 = *(float *)(lVar12 + 0x60);
    fVar22 = fVar27;
    if (fVar20 <= fVar27) {
      fVar22 = fVar20;
    }
    fVar21 = fVar32;
    if (fVar32 <= fVar20) {
      fVar21 = fVar22;
    }
    fVar22 = fVar28;
    if (fVar23 <= fVar28) {
      fVar22 = fVar23;
    }
    fVar20 = fVar31;
    if (fVar31 <= fVar23) {
      fVar20 = fVar22;
    }
    fVar22 = fVar29;
    if (fVar25 <= fVar29) {
      fVar22 = fVar25;
    }
    fVar24 = *param_4;
    fVar26 = param_4[1];
    fVar23 = fVar30;
    if (fVar30 <= fVar25) {
      fVar23 = fVar22;
    }
    if (fVar24 <= fVar27) {
      fVar27 = fVar24;
    }
    fVar25 = param_4[2];
    fVar22 = fVar32;
    if (fVar32 <= fVar24) {
      fVar22 = fVar27;
    }
    iVar15 = *(int *)(lVar12 + 0x30);
    if (fVar26 <= fVar28) {
      fVar28 = fVar26;
    }
    fVar27 = fVar31;
    if (fVar31 <= fVar26) {
      fVar27 = fVar28;
    }
    if (fVar25 <= fVar29) {
      fVar29 = fVar25;
    }
    fVar28 = fVar30;
    if (fVar30 <= fVar25) {
      fVar28 = fVar29;
    }
    uVar7 = FUN_00ef1e90(*param_1,param_2);
    if (0 < iVar15) {
      iVar8 = 0;
      puVar1 = puVar19 + (long)iVar15 * 8;
      do {
        bVar6 = false;
        if (((int)(fVar33 * (fVar21 - fVar32)) & 0xfffeU) <= (uint)puVar19[3]) {
          bVar6 = (uint)*puVar19 <= ((int)(fVar33 * (fVar22 - fVar32) + 1.0) | 1U);
        }
        bVar5 = 0;
        if (((int)(fVar33 * (fVar20 - fVar31)) & 0xfffeU) <= (uint)puVar19[4]) {
          bVar5 = bVar6 & (uint)puVar19[1] <= ((int)(fVar33 * (fVar27 - fVar31) + 1.0) | 1U);
        }
        if ((uint)puVar19[5] < ((int)(fVar33 * (fVar23 - fVar30)) & 0xfffeU)) {
          bVar6 = false;
          uVar9 = *(uint *)(puVar19 + 6) >> 0x1f ^ 1;
LAB_00ef5b94:
          if ((uVar9 != 0) || (bVar6)) goto LAB_00ef5c08;
          lVar12 = -(long)*(int *)(puVar19 + 6);
        }
        else {
          uVar3 = *(uint *)(puVar19 + 6);
          bVar6 = (bool)(bVar5 & (uint)puVar19[2] <= ((int)(fVar33 * (fVar28 - fVar30) + 1.0) | 1U))
          ;
          uVar9 = (uint)((ulong)(long)(int)uVar3 >> 0x1f) & 1 ^ 1;
          if (((int)uVar3 < 0) || (!bVar6)) goto LAB_00ef5b94;
          uVar2 = *(ushort *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 0x20 + 0x1c);
          if (((*(ushort *)(param_5 + 0x100) & uVar2) != 0) &&
             ((iVar8 < param_7 && ((*(ushort *)(param_5 + 0x102) & uVar2) == 0)))) {
            *(uint *)(param_6 + (long)iVar8 * 4) = uVar3 | uVar7;
            iVar8 = iVar8 + 1;
          }
LAB_00ef5c08:
          lVar12 = 1;
        }
        puVar19 = puVar19 + lVar12 * 8;
        if (puVar1 <= puVar19) {
          return iVar8;
        }
      } while( true );
    }
  }
  return 0;
}




uint FUN_00ef5e24(undefined8 *param_1,float param_2,float param_3,float *param_4,float *param_5,
                 long param_6,float *param_7,int *param_8,int param_9)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long *plVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_dc;
  float *local_d8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint *local_a0;
  long local_98;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_dc = 0x80000008;
  *param_8 = 0;
  if ((((param_2 != 0.0) && (param_3 != 0.0)) && (param_9 != 0)) &&
     ((uVar6 = FUN_00ef34e0(*param_1,param_2), local_dc = 0x80000008, (uVar6 & 1) != 0 &&
      (uVar6 = FUN_00ef34e0(*param_1,param_3), (uVar6 & 1) != 0)))) {
    if (param_2 == param_3) {
      *param_7 = param_2;
      *param_8 = 1;
      local_dc = 0x40000000;
    }
    else {
      FUN_00efa084(param_1[10]);
      *(undefined4 *)(param_1[0xb] + 0xc) = 0;
      local_d8 = (float *)FUN_00efa13c(param_1[10],param_2);
      *local_d8 = *param_4;
      local_d8[1] = param_4[1];
      fVar17 = param_4[2];
      local_d8[5] = (float)((uint)local_d8[5] & 0xc0000000);
      local_d8[2] = fVar17;
      local_d8[3] = 0.0;
      fVar17 = (float)FUN_00efa36c((*param_5 - *param_4) * (*param_5 - *param_4) +
                                   (param_5[1] - param_4[1]) * (param_5[1] - param_4[1]) +
                                   (param_5[2] - param_4[2]) * (param_5[2] - param_4[2]));
      local_d8[4] = fVar17 * 0.999;
      local_d8[5] = (float)((uint)local_d8[5] & 0x3fffffff | 0x40000000);
      local_d8[6] = param_2;
      lVar7 = param_1[0xb];
      iVar11 = *(int *)(lVar7 + 0xc);
      *(int *)(lVar7 + 0xc) = iVar11 + 1;
      FUN_00efa24c(lVar7,iVar11,local_d8);
      puVar8 = (undefined8 *)param_1[0xb];
      iVar11 = *(int *)((long)puVar8 + 0xc);
      if (iVar11 == 0) {
        local_dc = 0x40000000;
        pfVar15 = local_d8;
      }
      else {
        fVar17 = local_d8[4];
        local_dc = 0x40000000;
        do {
          pfVar15 = *(float **)*puVar8;
          *(int *)((long)puVar8 + 0xc) = iVar11 + -1;
          FUN_00efa2a0(puVar8,0,((undefined8 *)*puVar8)[iVar11 + -1]);
          fVar2 = pfVar15[6];
          pfVar15[5] = (float)((uint)pfVar15[5] & 0x3fffffff | 0x80000000);
          if (fVar2 == param_3) break;
          local_a0 = (uint *)0x0;
          local_98 = 0;
          FUN_00ef3494(*param_1,fVar2,&local_98,&local_a0);
          local_b0 = 0;
          uStack_a8 = 0;
          if (((uint)pfVar15[5] & 0x3fffffff) == 0) {
            fVar16 = 0.0;
          }
          else {
            fVar16 = *(float *)(*(long *)param_1[10] +
                                (ulong)(((uint)pfVar15[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
            if (fVar16 != 0.0) {
              FUN_00ef3494(*param_1,fVar16,&uStack_a8,&local_b0);
            }
          }
          uVar13 = *local_a0;
          if (uVar13 != 0xffffffff) {
            lVar7 = *(long *)(local_98 + 0x20);
            do {
              fVar3 = *(float *)(lVar7 + (ulong)uVar13 * 0xc);
              if ((fVar3 != 0.0) && (fVar3 != fVar16)) {
                local_c0 = 0;
                uStack_b8 = 0;
                FUN_00ef3494(*param_1,fVar3,&uStack_b8,&local_c0);
                fVar22 = fVar17;
                pfVar12 = local_d8;
                if (((*(ushort *)(param_6 + 0x100) & *(ushort *)(local_c0 + 0x1c)) != 0) &&
                   ((*(ushort *)(param_6 + 0x102) & *(ushort *)(local_c0 + 0x1c)) == 0)) {
                  pfVar9 = (float *)FUN_00efa13c(param_1[10],fVar3);
                  if (pfVar9 == (float *)0x0) {
                    local_dc = local_dc | 0x20;
                  }
                  else {
                    if ((uint)pfVar9[5] >> 0x1e == 0) {
                      FUN_00ef642c(pfVar9,fVar2,local_a0,local_98,fVar3,local_c0,uStack_b8,pfVar9);
                    }
                    puVar5 = local_a0;
                    fVar18 = (float)FUN_00efa36c((*pfVar9 - *pfVar15) * (*pfVar9 - *pfVar15) +
                                                 (pfVar9[1] - pfVar15[1]) * (pfVar9[1] - pfVar15[1])
                                                 + (pfVar9[2] - pfVar15[2]) *
                                                   (pfVar9[2] - pfVar15[2]));
                    lVar7 = local_c0;
                    fVar18 = fVar18 * *(float *)(param_6 +
                                                ((ulong)*(byte *)((long)puVar5 + 0x1f) & 0x3f) * 4);
                    if (fVar3 == param_3) {
                      fVar19 = (float)FUN_00efa36c((*param_5 - *pfVar9) * (*param_5 - *pfVar9) +
                                                   (param_5[1] - pfVar9[1]) *
                                                   (param_5[1] - pfVar9[1]) +
                                                   (param_5[2] - pfVar9[2]) *
                                                   (param_5[2] - pfVar9[2]));
                      fVar20 = 0.0;
                      fVar18 = fVar19 * *(float *)(param_6 +
                                                  ((ulong)*(byte *)(lVar7 + 0x1f) & 0x3f) * 4) +
                               fVar18 + pfVar15[3];
                    }
                    else {
                      fVar18 = fVar18 + pfVar15[3];
                      fVar20 = (float)FUN_00efa36c((*param_5 - *pfVar9) * (*param_5 - *pfVar9) +
                                                   (param_5[1] - pfVar9[1]) *
                                                   (param_5[1] - pfVar9[1]) +
                                                   (param_5[2] - pfVar9[2]) *
                                                   (param_5[2] - pfVar9[2]));
                      fVar20 = fVar20 * 0.999;
                    }
                    fVar19 = pfVar9[5];
                    fVar21 = fVar18 + fVar20;
                    if (((((uint)fVar19 >> 0x1e & 1) == 0) || (fVar21 < pfVar9[4])) &&
                       ((-1 < (int)fVar19 || (fVar21 < pfVar9[4])))) {
                      iVar11 = *(int *)param_1[10];
                      pfVar9[3] = fVar18;
                      pfVar9[4] = fVar21;
                      uVar1 = ((uint)((int)pfVar15 - iVar11) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      pfVar9[5] = (float)(uVar1 | (uint)fVar19 & 0x40000000);
                      pfVar9[6] = fVar3;
                      if (((uint)fVar19 & 0x40000000) == 0) {
                        pfVar9[5] = (float)(uVar1 | 0x40000000);
                        plVar10 = (long *)param_1[0xb];
                        uVar6 = (ulong)*(uint *)((long)plVar10 + 0xc);
                        *(uint *)((long)plVar10 + 0xc) = *(uint *)((long)plVar10 + 0xc) + 1;
LAB_00ef6258:
                        FUN_00efa24c(plVar10,uVar6,pfVar9);
                      }
                      else {
                        plVar10 = (long *)param_1[0xb];
                        if (0 < *(int *)((long)plVar10 + 0xc)) {
                          uVar6 = 0;
                          do {
                            if (*(float **)(*plVar10 + uVar6 * 8) == pfVar9) goto LAB_00ef6258;
                            uVar6 = uVar6 + 1;
                          } while ((long)uVar6 < (long)*(int *)((long)plVar10 + 0xc));
                        }
                      }
                      fVar22 = fVar20;
                      pfVar12 = pfVar9;
                      if (fVar17 <= fVar20) {
                        fVar22 = fVar17;
                        pfVar12 = local_d8;
                      }
                    }
                  }
                }
                local_d8 = pfVar12;
                lVar7 = *(long *)(local_98 + 0x20);
                fVar17 = fVar22;
              }
              uVar13 = *(uint *)(lVar7 + (ulong)uVar13 * 0xc + 4);
            } while (uVar13 != 0xffffffff);
          }
          puVar8 = (undefined8 *)param_1[0xb];
          iVar11 = *(int *)((long)puVar8 + 0xc);
          pfVar15 = local_d8;
        } while (iVar11 != 0);
      }
      local_d8 = pfVar15;
      fVar17 = local_d8[6];
      pfVar15 = (float *)0x0;
      do {
        pfVar12 = local_d8;
        uVar13 = (uint)pfVar12[5] & 0x3fffffff;
        if (uVar13 == 0) {
          local_d8 = (float *)0x0;
        }
        else {
          local_d8 = (float *)(*(long *)param_1[10] + (ulong)(uVar13 - 1) * 0x1c);
        }
        uVar13 = 0;
        if (pfVar15 != (float *)0x0) {
          uVar13 = (int)((ulong)((long)pfVar15 - *(long *)param_1[10]) >> 2) * -0x49249249 + 1;
        }
        pfVar12[5] = (float)((uint)pfVar12[5] & 0xc0000000 | uVar13 & 0x3fffffff);
        pfVar15 = pfVar12;
      } while (local_d8 != (float *)0x0);
      if (fVar17 != param_3) {
        local_dc = local_dc | 0x40;
      }
      lVar7 = 0;
      while( true ) {
        lVar14 = lVar7;
        param_7[lVar14] = pfVar12[6];
        if ((long)param_9 <= lVar14 + 1) break;
        if ((((uint)pfVar12[5] & 0x3fffffff) == 0) ||
           (pfVar12 = (float *)(*(long *)param_1[10] +
                               (ulong)(((uint)pfVar12[5] & 0x3fffffff) - 1) * 0x1c),
           lVar7 = lVar14 + 1, pfVar12 == (float *)0x0)) goto LAB_00ef63e4;
      }
      local_dc = local_dc | 0x10;
LAB_00ef63e4:
      *param_8 = (int)lVar14 + 1;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_dc;
}

