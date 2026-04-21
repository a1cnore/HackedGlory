// functions/019ab — 11 functions
#include "libGameKindred.h"




void FUN_019ab110(byte *param_1,ulong param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (0 < param_4) {
    iVar6 = (int)param_2;
    lVar7 = (long)iVar6;
    uVar8 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
    lVar5 = -(long)iVar6;
    lVar9 = lVar7 + (long)iVar6 * -4;
    param_4 = param_4 + 1;
    do {
      uVar13 = (ulong)param_1[(long)iVar6 * -2];
      uVar11 = (ulong)param_1[lVar5];
      uVar10 = (ulong)*param_1;
      uVar12 = (ulong)param_1[lVar7];
      if ((((((int)((uint)(byte)(&DAT_01e1d560)[uVar13 - uVar12] +
                   (uint)(byte)(&DAT_01e1d560)[uVar11 - uVar10] * 4) <= (int)(param_5 << 1 | 1U)) &&
            (uVar14 = (ulong)param_1[lVar9],
            (int)(uint)(byte)(&DAT_01e1d560)[param_1[(long)iVar6 * -4] - uVar14] <= param_6)) &&
           ((int)(uint)(byte)(&DAT_01e1d560)[uVar14 - uVar13] <= param_6)) &&
          (((int)(uint)(byte)(&DAT_01e1d560)[uVar13 - uVar11] <= param_6 &&
           (uVar15 = (ulong)param_1[uVar8],
           (int)(uint)(byte)(&DAT_01e1d560)[param_1[uVar8 + (long)iVar6] - uVar15] <= param_6)))) &&
         (((int)(uint)(byte)(&DAT_01e1d560)[uVar15 - uVar12] <= param_6 &&
          ((int)(uint)(byte)(&DAT_01e1d560)[uVar12 - uVar10] <= param_6)))) {
        if ((param_7 < (int)(uint)(byte)(&DAT_01e1d560)[uVar13 - uVar11]) ||
           (param_7 < (int)(uint)(byte)(&DAT_01e1d560)[uVar12 - uVar10])) {
          iVar1 = ((uint)*param_1 - (uint)param_1[lVar5]) * 3 +
                  (int)(char)(&DAT_01e1cc84)[uVar13 - uVar12];
          cVar4 = (&DAT_01e1d0f1)[iVar1 + 4 >> 3];
          param_1[lVar5] = (&DAT_01e1d261)[(long)(char)(&DAT_01e1d0f1)[iVar1 + 3 >> 3] + uVar11];
          *param_1 = (&DAT_01e1d261)[uVar10 - (long)cVar4];
        }
        else {
          cVar4 = (&DAT_01e1cc84)
                  [(uVar10 - uVar11) * 3 + (long)(char)(&DAT_01e1cc84)[uVar13 - uVar12]];
          iVar1 = cVar4 * 9 + 0x3f >> 7;
          iVar2 = cVar4 * 0x12 + 0x3f >> 7;
          param_1[lVar9] = (&DAT_01e1d261)[uVar14 + (long)iVar1];
          iVar3 = cVar4 * 0x1b + 0x3f >> 7;
          param_1[(long)iVar6 * -2] = (&DAT_01e1d261)[uVar13 + (long)iVar2];
          param_1[lVar5] = (&DAT_01e1d261)[uVar11 + (long)iVar3];
          *param_1 = (&DAT_01e1d261)[uVar10 - (long)iVar3];
          param_1[lVar7] = (&DAT_01e1d261)[uVar12 - (long)iVar2];
          param_1[uVar8] = (&DAT_01e1d261)[uVar15 - (long)iVar1];
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + param_3;
    } while (1 < param_4);
  }
  return;
}




void FUN_019ab33c(byte *param_1,ulong param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (0 < param_4) {
    iVar7 = (int)param_2;
    uVar10 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
    lVar6 = -(long)iVar7;
    param_4 = param_4 + 1;
    do {
      uVar12 = (ulong)param_1[(long)iVar7 * -2];
      bVar3 = param_1[lVar6];
      uVar9 = (ulong)bVar3;
      bVar2 = *param_1;
      uVar8 = (ulong)bVar2;
      uVar11 = (ulong)param_1[iVar7];
      if ((((((int)((uint)(byte)(&DAT_01e1d560)[uVar12 - uVar11] +
                   (uint)(byte)(&DAT_01e1d560)[uVar9 - uVar8] * 4) <= (int)(param_5 << 1 | 1U)) &&
            ((int)(uint)(byte)(&DAT_01e1d560)
                              [(ulong)param_1[(long)iVar7 * -4] -
                               (ulong)param_1[(long)iVar7 + (long)iVar7 * -4]] <= param_6)) &&
           ((int)(uint)(byte)(&DAT_01e1d560)[param_1[(long)iVar7 + (long)iVar7 * -4] - uVar12] <=
            param_6)) &&
          (((int)(uint)(byte)(&DAT_01e1d560)[uVar12 - uVar9] <= param_6 &&
           ((int)(uint)(byte)(&DAT_01e1d560)
                             [(ulong)param_1[uVar10 + (long)iVar7] - (ulong)param_1[uVar10]] <=
            param_6)))) &&
         (((int)(uint)(byte)(&DAT_01e1d560)[param_1[uVar10] - uVar11] <= param_6 &&
          ((int)(uint)(byte)(&DAT_01e1d560)[uVar11 - uVar8] <= param_6)))) {
        if ((param_7 < (int)(uint)(byte)(&DAT_01e1d560)[uVar12 - uVar9]) ||
           (param_7 < (int)(uint)(byte)(&DAT_01e1d560)[uVar11 - uVar8])) {
          iVar1 = ((uint)bVar2 - (uint)bVar3) * 3 + (int)(char)(&DAT_01e1cc84)[uVar12 - uVar11];
          cVar4 = (&DAT_01e1d0f1)[iVar1 + 4 >> 3];
          param_1[lVar6] = (&DAT_01e1d261)[(long)(char)(&DAT_01e1d0f1)[iVar1 + 3 >> 3] + uVar9];
          *param_1 = (&DAT_01e1d261)[uVar8 - (long)cVar4];
        }
        else {
          iVar1 = ((uint)bVar2 - (uint)bVar3) * 3;
          cVar4 = (&DAT_01e1d0f1)[iVar1 + 4 >> 3];
          cVar5 = (&DAT_01e1d0f1)[iVar1 + 3 >> 3];
          iVar1 = cVar4 + 1 >> 1;
          param_1[(long)iVar7 * -2] = (&DAT_01e1d261)[uVar12 + (long)iVar1];
          param_1[lVar6] = (&DAT_01e1d261)[(long)cVar5 + uVar9];
          *param_1 = (&DAT_01e1d261)[uVar8 - (long)cVar4];
          param_1[iVar7] = (&DAT_01e1d261)[uVar11 - (long)iVar1];
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + param_3;
    } while (1 < param_4);
  }
  return;
}




void FUN_019ab52c(void)

{
  return;
}




void FUN_019ab530(void)

{
  DAT_0321a780 = FUN_019ab674;
  DAT_0321a7b8 = FUN_019ab880;
  DAT_0321a7d0 = FUN_019ab940;
  DAT_0321a790 = FUN_019ab98c;
  DAT_0321a7c8 = FUN_019aba98;
  DAT_0321a758 = FUN_019abbd4;
  DAT_0321a7a8 = FUN_019abd48;
  DAT_0321a778 = FUN_019ac12c;
  DAT_0321a7b0 = FUN_019ac548;
  DAT_0321a798 = FUN_019ac72c;
  DAT_0321a7e0 = FUN_019ac8ec;
  DAT_0321a768 = FUN_019acb8c;
  DAT_0321a770 = FUN_019acdf0;
  DAT_0321a7c0 = FUN_019ace88;
  DAT_0321a7d8 = FUN_019ad044;
  DAT_0321a760 = FUN_019ad0fc;
  return;
}




void FUN_019ab674(undefined1 (*param_1) [16],undefined4 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined2 uVar17;
  short sVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar64 [16];
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  ushort uVar75;
  ushort uVar76;
  undefined4 uVar77;
  undefined4 uVar88;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined8 uVar101;
  undefined1 auVar26 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar24 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar51 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar36 [16];
  undefined1 auVar42 [16];
  undefined1 auVar47 [16];
  undefined1 auVar55 [16];
  undefined1 auVar61 [16];
  undefined1 auVar37 [16];
  undefined1 auVar43 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar62 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [16];
  undefined1 auVar49 [16];
  undefined1 auVar57 [16];
  undefined1 auVar63 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  
  auVar33 = *param_1;
  auVar66 = param_1[1];
  auVar19._8_2_ = 0x4e7b;
  auVar19._0_8_ = 0x4e7b4e7b4e7b4e7b;
  auVar19._10_2_ = 0x4e7b;
  auVar19._12_2_ = 0x4e7b;
  auVar19._14_2_ = 0x4e7b;
  auVar89 = NEON_ext(auVar33,auVar33,8,1);
  uVar101 = NEON_sqadd(auVar33._0_8_,auVar66._0_8_,2);
  uVar32 = NEON_sqsub(auVar33._0_8_,auVar66._0_8_,2);
  auVar66 = NEON_ext(auVar66,auVar66,8,1);
  auVar28._8_2_ = 0x4546;
  auVar28._0_8_ = 0x4546454645464546;
  auVar28._10_2_ = 0x4546;
  auVar28._12_2_ = 0x4546;
  auVar28._14_2_ = 0x4546;
  auVar90._0_8_ = auVar89._0_8_;
  auVar90._8_8_ = auVar66._0_8_;
  auVar33 = NEON_sqdmulh(auVar90,auVar19,2);
  auVar67 = NEON_sqdmulh(auVar90,auVar28,2);
  auVar91._0_8_ =
       CONCAT26(auVar89._6_2_ + (auVar33._6_2_ >> 1),
                CONCAT24(auVar89._4_2_ + (auVar33._4_2_ >> 1),
                         CONCAT22(auVar89._2_2_ + (auVar33._2_2_ >> 1),
                                  auVar89._0_2_ + (auVar33._0_2_ >> 1))));
  auVar91._8_2_ = auVar66._0_2_ + (auVar33._8_2_ >> 1);
  auVar91._10_2_ = auVar66._2_2_ + (auVar33._10_2_ >> 1);
  auVar91._12_2_ = auVar66._4_2_ + (auVar33._12_2_ >> 1);
  auVar91._14_2_ = auVar66._6_2_ + (auVar33._14_2_ >> 1);
  auVar33 = NEON_ext(auVar67,auVar67,8,1);
  auVar34._0_8_ = NEON_sqadd(auVar91._0_8_,auVar33._0_8_,2);
  auVar33 = NEON_ext(auVar91,auVar91,8,1);
  uVar65 = NEON_sqsub(auVar67._0_8_,auVar33._0_8_,2);
  auVar34._8_8_ = uVar65;
  auVar66._8_8_ = uVar32;
  auVar66._0_8_ = uVar101;
  auVar66 = NEON_sqadd(auVar66,auVar34,2);
  auVar67._8_8_ = uVar32;
  auVar67._0_8_ = uVar101;
  auVar33 = NEON_sqsub(auVar67,auVar34,2);
  auVar67 = NEON_ext(auVar33,auVar33,8,1);
  auVar92._0_8_ = auVar67._0_8_;
  auVar92._8_8_ = auVar33._0_8_;
  auVar35._0_8_ = auVar33._6_8_ << 0x30;
  auVar35._10_6_ = auVar33._10_6_;
  auVar35._8_2_ = auVar66._4_2_;
  auVar37._14_2_ = auVar33._14_2_;
  auVar37._0_12_ = auVar35._0_12_;
  auVar37._12_2_ = auVar66._6_2_;
  auVar36._0_10_ = CONCAT82(auVar37._8_8_,auVar67._2_2_) << 0x30;
  auVar36._12_4_ = auVar37._12_4_;
  auVar36._10_2_ = auVar67._4_2_;
  uVar17 = auVar67._6_2_;
  auVar38._0_14_ = auVar36._0_14_;
  auVar38._14_2_ = uVar17;
  auVar4._2_10_ = auVar92._6_10_;
  auVar4._0_2_ = auVar67._0_2_;
  auVar95._0_8_ = auVar4._0_8_ << 0x20;
  auVar95._10_6_ = auVar33._2_6_;
  auVar95._8_2_ = auVar66._2_2_;
  auVar97._0_12_ = auVar95._0_12_;
  auVar97._12_2_ = auVar67._2_2_;
  auVar97._14_2_ = auVar33._6_2_;
  auVar93._4_12_ = auVar97._4_12_;
  auVar93._2_2_ = auVar66._8_2_;
  auVar93._0_2_ = auVar66._0_2_;
  auVar94._8_8_ = auVar97._8_8_;
  auVar94._0_8_ = CONCAT26(auVar33._0_2_,auVar93._0_6_);
  auVar96._12_4_ = auVar97._12_4_;
  auVar96._0_10_ = auVar94._0_10_;
  auVar96._10_2_ = auVar66._10_2_;
  auVar98._0_14_ = auVar96._0_14_;
  auVar98._14_2_ = auVar33._2_2_;
  auVar5._2_10_ = auVar38._6_10_;
  auVar5._0_2_ = auVar67._4_2_;
  auVar41._0_8_ = auVar5._0_8_ << 0x20;
  auVar41._10_6_ = auVar38._10_6_;
  auVar41._8_2_ = auVar66._6_2_;
  auVar43._0_12_ = auVar41._0_12_;
  auVar43._12_2_ = uVar17;
  auVar43._14_2_ = uVar17;
  auVar39._4_12_ = auVar43._4_12_;
  auVar39._2_2_ = auVar66._12_2_;
  auVar39._0_2_ = auVar66._4_2_;
  auVar40._8_8_ = auVar43._8_8_;
  auVar40._0_8_ = CONCAT26(auVar33._4_2_,auVar39._0_6_);
  auVar42._12_4_ = auVar43._12_4_;
  auVar42._0_10_ = auVar40._0_10_;
  auVar42._10_2_ = auVar66._14_2_;
  auVar44._0_14_ = auVar42._0_14_;
  auVar44._14_2_ = auVar33._6_2_;
  auVar67 = NEON_ext(auVar98,auVar98,8,1);
  uVar101 = NEON_sqadd(auVar94._0_8_,auVar40._0_8_,2);
  uVar65 = NEON_sqsub(auVar94._0_8_,auVar40._0_8_,2);
  auVar33 = NEON_ext(auVar44,auVar44,8,1);
  auVar68._0_8_ = auVar67._0_8_;
  auVar68._8_8_ = auVar33._0_8_;
  auVar66 = NEON_sqdmulh(auVar68,auVar19,2);
  auVar89 = NEON_sqdmulh(auVar68,auVar28,2);
  uVar2 = *param_2;
  uVar77 = param_2[0x10];
  auVar69._0_8_ =
       CONCAT26(auVar67._6_2_ + (auVar66._6_2_ >> 1),
                CONCAT24(auVar67._4_2_ + (auVar66._4_2_ >> 1),
                         CONCAT22(auVar67._2_2_ + (auVar66._2_2_ >> 1),
                                  auVar67._0_2_ + (auVar66._0_2_ >> 1))));
  auVar69._8_2_ = auVar33._0_2_ + (auVar66._8_2_ >> 1);
  auVar69._10_2_ = auVar33._2_2_ + (auVar66._10_2_ >> 1);
  auVar69._12_2_ = auVar33._4_2_ + (auVar66._12_2_ >> 1);
  auVar69._14_2_ = auVar33._6_2_ + (auVar66._14_2_ >> 1);
  auVar33 = NEON_ext(auVar89,auVar89,8,1);
  auVar45._0_8_ = NEON_sqadd(auVar69._0_8_,auVar33._0_8_,2);
  auVar33 = NEON_ext(auVar69,auVar69,8,1);
  uVar32 = NEON_sqsub(auVar89._0_8_,auVar33._0_8_,2);
  auVar45._8_8_ = uVar32;
  uVar88 = param_2[8];
  uVar75 = (ushort)uVar88;
  uVar76 = (ushort)((uint)uVar88 >> 0x10);
  uVar88 = param_2[0x18];
  auVar89._8_8_ = uVar65;
  auVar89._0_8_ = uVar101;
  auVar67 = NEON_sqadd(auVar89,auVar45,2);
  auVar3._8_8_ = uVar65;
  auVar3._0_8_ = uVar101;
  auVar66 = NEON_sqsub(auVar3,auVar45,2);
  auVar89 = NEON_ext(auVar66,auVar66,8,1);
  auVar46._0_8_ = auVar66._6_8_ << 0x30;
  sVar12 = auVar67._4_2_;
  auVar46._10_6_ = auVar66._10_6_;
  auVar46._8_2_ = sVar12;
  sVar13 = auVar67._6_2_;
  auVar48._14_2_ = auVar66._14_2_;
  auVar48._0_12_ = auVar46._0_12_;
  auVar48._12_2_ = sVar13;
  auVar47._0_10_ = CONCAT82(auVar48._8_8_,auVar89._2_2_) << 0x30;
  sVar16 = auVar89._4_2_;
  auVar47._12_4_ = auVar48._12_4_;
  auVar47._10_2_ = sVar16;
  sVar18 = auVar89._6_2_;
  auVar49._0_14_ = auVar47._0_14_;
  auVar49._14_2_ = sVar18;
  auVar6._2_10_ = auVar67._6_10_;
  auVar6._0_2_ = auVar67._10_2_;
  auVar71._0_8_ = auVar6._0_8_ << 0x20;
  sVar14 = auVar67._12_2_;
  auVar71._10_6_ = auVar67._10_6_;
  auVar71._8_2_ = sVar14;
  sVar15 = auVar67._14_2_;
  auVar72._0_12_ = auVar71._0_12_;
  auVar72._12_2_ = sVar15;
  auVar72._14_2_ = sVar15;
  auVar70._4_12_ = auVar72._4_12_;
  auVar70._2_2_ = auVar66._0_2_;
  auVar70._0_2_ = auVar67._8_2_;
  auVar7._2_10_ = auVar49._6_10_;
  auVar7._0_2_ = sVar16;
  auVar51._0_8_ = auVar7._0_8_ << 0x20;
  auVar51._10_6_ = auVar49._10_6_;
  auVar51._8_2_ = sVar13;
  auVar52._0_12_ = auVar51._0_12_;
  auVar52._12_2_ = sVar18;
  auVar52._14_2_ = sVar18;
  auVar50._4_12_ = auVar52._4_12_;
  auVar50._2_2_ = sVar14;
  auVar50._0_2_ = sVar12;
  auVar78._0_2_ = (ushort)(byte)uVar77 + (sVar12 >> 3);
  auVar78._2_2_ = (ushort)(byte)((uint)uVar77 >> 8) + (sVar14 >> 3);
  auVar78._4_2_ = (ushort)(byte)((uint)uVar77 >> 0x10) + (sVar16 >> 3);
  auVar78._6_2_ = (ushort)(byte)((uint)uVar77 >> 0x18) + (auVar66._4_2_ >> 3);
  auVar78._8_2_ = (ushort)(byte)uVar88 + (sVar13 >> 3);
  auVar78._10_2_ = (ushort)(byte)((uint)uVar88 >> 8) + (sVar15 >> 3);
  auVar78._12_2_ = (ushort)(byte)((uint)uVar88 >> 0x10) + (sVar18 >> 3);
  auVar78._14_2_ = (ushort)(byte)((uint)uVar88 >> 0x18) + (auVar66._6_2_ >> 3);
  auVar33._2_2_ = (ushort)(byte)((uint)uVar2 >> 8) + (auVar67._8_2_ >> 3);
  auVar33._0_2_ = (ushort)(byte)uVar2 + (auVar67._0_2_ >> 3);
  auVar33._4_2_ = (ushort)(byte)((uint)uVar2 >> 0x10) + (auVar89._0_2_ >> 3);
  auVar33._6_2_ = (ushort)(byte)((uint)uVar2 >> 0x18) + (auVar66._0_2_ >> 3);
  auVar33._8_2_ = (uVar75 & 0xff) + (auVar67._2_2_ >> 3);
  auVar33._10_2_ = (uVar75 >> 8) + (auVar67._10_2_ >> 3);
  auVar33._12_2_ = (uVar76 & 0xff) + (auVar89._2_2_ >> 3);
  auVar33._14_2_ = (uVar76 >> 8) + (auVar66._2_2_ >> 3);
  uVar32 = NEON_sqxtun(CONCAT26(auVar66._4_2_,auVar50._0_6_),auVar33,2);
  uVar65 = NEON_sqxtun(CONCAT26(auVar66._2_2_,auVar70._0_6_),auVar78,2);
  *param_2 = (int)uVar32;
  param_2[8] = (int)((ulong)uVar32 >> 0x20);
  param_2[0x10] = (int)uVar65;
  param_2[0x18] = (int)((ulong)uVar65 >> 0x20);
  if (param_3 != 0) {
    auVar33 = param_1[2];
    auVar66 = param_1[3];
    uVar2 = param_2[1];
    auVar89 = NEON_ext(auVar33,auVar33,8,1);
    auVar99._0_8_ = NEON_sqadd(auVar33._0_8_,auVar66._0_8_,2);
    uVar32 = NEON_sqsub(auVar33._0_8_,auVar66._0_8_,2);
    auVar66 = NEON_ext(auVar66,auVar66,8,1);
    auVar79._0_8_ = auVar89._0_8_;
    auVar79._8_8_ = auVar66._0_8_;
    auVar99._8_8_ = uVar32;
    auVar33 = NEON_sqdmulh(auVar79,auVar19,2);
    auVar67 = NEON_sqdmulh(auVar79,auVar28,2);
    auVar80._0_8_ =
         CONCAT26(auVar89._6_2_ + (auVar33._6_2_ >> 1),
                  CONCAT24(auVar89._4_2_ + (auVar33._4_2_ >> 1),
                           CONCAT22(auVar89._2_2_ + (auVar33._2_2_ >> 1),
                                    auVar89._0_2_ + (auVar33._0_2_ >> 1))));
    auVar80._8_2_ = auVar66._0_2_ + (auVar33._8_2_ >> 1);
    auVar80._10_2_ = auVar66._2_2_ + (auVar33._10_2_ >> 1);
    auVar80._12_2_ = auVar66._4_2_ + (auVar33._12_2_ >> 1);
    auVar80._14_2_ = auVar66._6_2_ + (auVar33._14_2_ >> 1);
    auVar33 = NEON_ext(auVar67,auVar67,8,1);
    auVar53._0_8_ = NEON_sqadd(auVar80._0_8_,auVar33._0_8_,2);
    auVar33 = NEON_ext(auVar80,auVar80,8,1);
    uVar32 = NEON_sqsub(auVar67._0_8_,auVar33._0_8_,2);
    auVar53._8_8_ = uVar32;
    auVar66 = NEON_sqadd(auVar99,auVar53,2);
    auVar33 = NEON_sqsub(auVar99,auVar53,2);
    auVar67 = NEON_ext(auVar33,auVar33,8,1);
    auVar81._0_8_ = auVar67._0_8_;
    auVar81._8_8_ = auVar33._0_8_;
    auVar54._0_8_ = auVar33._6_8_ << 0x30;
    auVar54._10_6_ = auVar33._10_6_;
    auVar54._8_2_ = auVar66._4_2_;
    auVar56._14_2_ = auVar33._14_2_;
    auVar56._0_12_ = auVar54._0_12_;
    auVar56._12_2_ = auVar66._6_2_;
    auVar55._0_10_ = CONCAT82(auVar56._8_8_,auVar67._2_2_) << 0x30;
    auVar55._12_4_ = auVar56._12_4_;
    auVar55._10_2_ = auVar67._4_2_;
    uVar17 = auVar67._6_2_;
    auVar57._0_14_ = auVar55._0_14_;
    auVar57._14_2_ = uVar17;
    auVar8._2_10_ = auVar81._6_10_;
    auVar8._0_2_ = auVar67._0_2_;
    auVar84._0_8_ = auVar8._0_8_ << 0x20;
    auVar84._10_6_ = auVar33._2_6_;
    auVar84._8_2_ = auVar66._2_2_;
    auVar86._0_12_ = auVar84._0_12_;
    auVar86._12_2_ = auVar67._2_2_;
    auVar86._14_2_ = auVar33._6_2_;
    auVar82._4_12_ = auVar86._4_12_;
    auVar82._2_2_ = auVar66._8_2_;
    auVar82._0_2_ = auVar66._0_2_;
    auVar83._8_8_ = auVar86._8_8_;
    auVar83._0_8_ = CONCAT26(auVar33._0_2_,auVar82._0_6_);
    auVar85._12_4_ = auVar86._12_4_;
    auVar85._0_10_ = auVar83._0_10_;
    auVar85._10_2_ = auVar66._10_2_;
    auVar87._0_14_ = auVar85._0_14_;
    auVar87._14_2_ = auVar33._2_2_;
    auVar9._2_10_ = auVar57._6_10_;
    auVar9._0_2_ = auVar67._4_2_;
    auVar60._0_8_ = auVar9._0_8_ << 0x20;
    auVar60._10_6_ = auVar57._10_6_;
    auVar60._8_2_ = auVar66._6_2_;
    auVar62._0_12_ = auVar60._0_12_;
    auVar62._12_2_ = uVar17;
    auVar62._14_2_ = uVar17;
    auVar58._4_12_ = auVar62._4_12_;
    auVar58._2_2_ = auVar66._12_2_;
    auVar58._0_2_ = auVar66._4_2_;
    auVar59._8_8_ = auVar62._8_8_;
    auVar59._0_8_ = CONCAT26(auVar33._4_2_,auVar58._0_6_);
    auVar61._12_4_ = auVar62._12_4_;
    auVar61._0_10_ = auVar59._0_10_;
    auVar61._10_2_ = auVar66._14_2_;
    auVar63._0_14_ = auVar61._0_14_;
    auVar63._14_2_ = auVar33._6_2_;
    auVar89 = NEON_ext(auVar87,auVar87,8,1);
    auVar100._0_8_ = NEON_sqadd(auVar83._0_8_,auVar59._0_8_,2);
    uVar32 = NEON_sqsub(auVar83._0_8_,auVar59._0_8_,2);
    auVar67 = NEON_ext(auVar63,auVar63,8,1);
    auVar73._0_8_ = auVar89._0_8_;
    auVar73._8_8_ = auVar67._0_8_;
    auVar33 = NEON_sqdmulh(auVar73,auVar19,2);
    uVar77 = param_2[0x11];
    auVar66 = NEON_sqdmulh(auVar73,auVar28,2);
    auVar74._0_8_ =
         CONCAT26(auVar89._6_2_ + (auVar33._6_2_ >> 1),
                  CONCAT24(auVar89._4_2_ + (auVar33._4_2_ >> 1),
                           CONCAT22(auVar89._2_2_ + (auVar33._2_2_ >> 1),
                                    auVar89._0_2_ + (auVar33._0_2_ >> 1))));
    auVar74._8_2_ = auVar67._0_2_ + (auVar33._8_2_ >> 1);
    auVar74._10_2_ = auVar67._2_2_ + (auVar33._10_2_ >> 1);
    auVar74._12_2_ = auVar67._4_2_ + (auVar33._12_2_ >> 1);
    auVar74._14_2_ = auVar67._6_2_ + (auVar33._14_2_ >> 1);
    auVar100._8_8_ = uVar32;
    auVar33 = NEON_ext(auVar66,auVar66,8,1);
    auVar67 = NEON_ext(auVar74,auVar74,8,1);
    auVar20._0_8_ = NEON_sqadd(auVar74._0_8_,auVar33._0_8_,2);
    uVar32 = NEON_sqsub(auVar66._0_8_,auVar67._0_8_,2);
    auVar20._8_8_ = uVar32;
    uVar88 = param_2[9];
    uVar75 = (ushort)uVar88;
    uVar76 = (ushort)((uint)uVar88 >> 0x10);
    uVar88 = param_2[0x19];
    auVar66 = NEON_sqadd(auVar100,auVar20,2);
    auVar33 = NEON_sqsub(auVar100,auVar20,2);
    auVar67 = NEON_ext(auVar33,auVar33,8,1);
    auVar21._0_8_ = auVar33._6_8_ << 0x30;
    sVar12 = auVar66._4_2_;
    auVar21._10_6_ = auVar33._10_6_;
    auVar21._8_2_ = sVar12;
    sVar13 = auVar66._6_2_;
    auVar23._14_2_ = auVar33._14_2_;
    auVar23._0_12_ = auVar21._0_12_;
    auVar23._12_2_ = sVar13;
    auVar22._0_10_ = CONCAT82(auVar23._8_8_,auVar67._2_2_) << 0x30;
    sVar16 = auVar67._4_2_;
    auVar22._12_4_ = auVar23._12_4_;
    auVar22._10_2_ = sVar16;
    sVar18 = auVar67._6_2_;
    auVar24._0_14_ = auVar22._0_14_;
    auVar24._14_2_ = sVar18;
    auVar10._2_10_ = auVar66._6_10_;
    auVar10._0_2_ = auVar66._10_2_;
    auVar30._0_8_ = auVar10._0_8_ << 0x20;
    sVar14 = auVar66._12_2_;
    auVar30._10_6_ = auVar66._10_6_;
    auVar30._8_2_ = sVar14;
    sVar15 = auVar66._14_2_;
    auVar31._0_12_ = auVar30._0_12_;
    auVar31._12_2_ = sVar15;
    auVar31._14_2_ = sVar15;
    auVar29._4_12_ = auVar31._4_12_;
    auVar29._2_2_ = auVar33._0_2_;
    auVar29._0_2_ = auVar66._8_2_;
    auVar11._2_10_ = auVar24._6_10_;
    auVar11._0_2_ = sVar16;
    auVar26._0_8_ = auVar11._0_8_ << 0x20;
    auVar26._10_6_ = auVar24._10_6_;
    auVar26._8_2_ = sVar13;
    auVar27._0_12_ = auVar26._0_12_;
    auVar27._12_2_ = sVar18;
    auVar27._14_2_ = sVar18;
    auVar25._4_12_ = auVar27._4_12_;
    auVar25._2_2_ = sVar14;
    auVar25._0_2_ = sVar12;
    auVar64._0_2_ = (ushort)(byte)uVar77 + (sVar12 >> 3);
    auVar64._2_2_ = (ushort)(byte)((uint)uVar77 >> 8) + (sVar14 >> 3);
    auVar64._4_2_ = (ushort)(byte)((uint)uVar77 >> 0x10) + (sVar16 >> 3);
    auVar64._6_2_ = (ushort)(byte)((uint)uVar77 >> 0x18) + (auVar33._4_2_ >> 3);
    auVar64._8_2_ = (ushort)(byte)uVar88 + (sVar13 >> 3);
    auVar64._10_2_ = (ushort)(byte)((uint)uVar88 >> 8) + (sVar15 >> 3);
    auVar64._12_2_ = (ushort)(byte)((uint)uVar88 >> 0x10) + (sVar18 >> 3);
    auVar64._14_2_ = (ushort)(byte)((uint)uVar88 >> 0x18) + (auVar33._6_2_ >> 3);
    auVar1._2_2_ = (ushort)(byte)((uint)uVar2 >> 8) + (auVar66._8_2_ >> 3);
    auVar1._0_2_ = (ushort)(byte)uVar2 + (auVar66._0_2_ >> 3);
    auVar1._4_2_ = (ushort)(byte)((uint)uVar2 >> 0x10) + (auVar67._0_2_ >> 3);
    auVar1._6_2_ = (ushort)(byte)((uint)uVar2 >> 0x18) + (auVar33._0_2_ >> 3);
    auVar1._8_2_ = (uVar75 & 0xff) + (auVar66._2_2_ >> 3);
    auVar1._10_2_ = (uVar75 >> 8) + (auVar66._10_2_ >> 3);
    auVar1._12_2_ = (uVar76 & 0xff) + (auVar67._2_2_ >> 3);
    auVar1._14_2_ = (uVar76 >> 8) + (auVar33._2_2_ >> 3);
    uVar32 = NEON_sqxtun(CONCAT26(auVar33._4_2_,auVar25._0_6_),auVar1,2);
    uVar65 = NEON_sqxtun(CONCAT26(auVar33._2_2_,auVar29._0_6_),auVar64,2);
    param_2[1] = (int)uVar32;
    param_2[9] = (int)((ulong)uVar32 >> 0x20);
    param_2[0x11] = (int)uVar65;
    param_2[0x19] = (int)((ulong)uVar65 >> 0x20);
  }
  return;
}




void FUN_019ab880(undefined2 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar3 = *param_1;
  uVar2 = (short)param_1[1] * 0x8a8c;
  uVar9 = (undefined2)((uint)((short)param_1[4] * 0x8a8c) >> 0x10);
  uVar11 = CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9)));
  uVar1 = (short)param_1[1] * 0x14e7b >> 0x10;
  uVar9 = (undefined2)((uint)((short)param_1[4] * 0x14e7b) >> 0x10);
  uVar10 = NEON_sqadd(CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3))),
                      (ulong)-uVar1 << 0x30 |
                      CONCAT44(-(uVar2 >> 0x10),uVar2 & 0xffff0000 | uVar1 & 0xffff) &
                      0xffffffffffff,2);
  uVar5 = *param_2;
  uVar17 = NEON_sqadd(uVar10,CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9))),2);
  uVar18 = NEON_sqadd(uVar10,uVar11,2);
  uVar12 = NEON_sqsub(uVar10,uVar11,2);
  uVar10 = NEON_sqsub(uVar10,CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9))),2);
  uVar8 = param_2[0x10];
  uVar6 = param_2[8];
  uVar13 = (ushort)uVar6;
  uVar14 = (ushort)((uint)uVar6 >> 0x10);
  uVar6 = param_2[0x18];
  uVar15 = (ushort)uVar6;
  uVar16 = (ushort)((uint)uVar6 >> 0x10);
  auVar4._2_2_ = (ushort)(byte)((uint)uVar5 >> 8) + ((short)((ulong)uVar17 >> 0x10) >> 3);
  auVar4._0_2_ = (ushort)(byte)uVar5 + ((short)uVar17 >> 3);
  auVar4._4_2_ = (ushort)(byte)((uint)uVar5 >> 0x10) + ((short)((ulong)uVar17 >> 0x20) >> 3);
  auVar4._6_2_ = (ushort)(byte)((uint)uVar5 >> 0x18) + (short)((long)uVar17 >> 0x33);
  auVar4._8_2_ = (uVar13 & 0xff) + ((short)uVar18 >> 3);
  auVar4._10_2_ = (uVar13 >> 8) + ((short)((ulong)uVar18 >> 0x10) >> 3);
  auVar4._12_2_ = (uVar14 & 0xff) + ((short)((ulong)uVar18 >> 0x20) >> 3);
  auVar4._14_2_ = (uVar14 >> 8) + (short)((long)uVar18 >> 0x33);
  uVar11 = NEON_sqxtun(uVar10,auVar4,2);
  auVar7._2_2_ = (ushort)(byte)((uint)uVar8 >> 8) + ((short)((ulong)uVar12 >> 0x10) >> 3);
  auVar7._0_2_ = (ushort)(byte)uVar8 + ((short)uVar12 >> 3);
  auVar7._4_2_ = (ushort)(byte)((uint)uVar8 >> 0x10) + ((short)((ulong)uVar12 >> 0x20) >> 3);
  auVar7._6_2_ = (ushort)(byte)((uint)uVar8 >> 0x18) + (short)((long)uVar12 >> 0x33);
  auVar7._8_2_ = (uVar15 & 0xff) + ((short)uVar10 >> 3);
  auVar7._10_2_ = (uVar15 >> 8) + ((short)((ulong)uVar10 >> 0x10) >> 3);
  auVar7._12_2_ = (uVar16 & 0xff) + ((short)((ulong)uVar10 >> 0x20) >> 3);
  auVar7._14_2_ = (uVar16 >> 8) + (short)((long)uVar10 >> 0x33);
  uVar10 = NEON_sqxtun(uVar12,auVar7,2);
  *param_2 = (int)uVar11;
  param_2[8] = (int)((ulong)uVar11 >> 0x20);
  param_2[0x10] = (int)uVar10;
  param_2[0x18] = (int)((ulong)uVar10 >> 0x20);
  return;
}




void FUN_019ab940(short *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined8 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  ushort uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  ushort uVar17;
  short sVar18;
  ushort uVar19;
  short sVar20;
  
  uVar2 = *param_2;
  uVar6 = param_2[0x10];
  uVar4 = param_2[8];
  uVar11 = (ushort)uVar4;
  uVar13 = (ushort)((uint)uVar4 >> 0x10);
  uVar4 = param_2[0x18];
  uVar17 = (ushort)uVar4;
  uVar19 = (ushort)((uint)uVar4 >> 0x10);
  sVar8 = *param_1 >> 3;
  sVar9 = (ushort)(byte)uVar2 + sVar8;
  sVar10 = (ushort)(byte)((uint)uVar2 >> 8) + sVar8;
  sVar12 = (ushort)(byte)((uint)uVar2 >> 0x10) + sVar8;
  sVar14 = (ushort)(byte)((uint)uVar2 >> 0x18) + sVar8;
  sVar15 = (ushort)(byte)uVar6 + sVar8;
  sVar16 = (ushort)(byte)((uint)uVar6 >> 8) + sVar8;
  sVar18 = (ushort)(byte)((uint)uVar6 >> 0x10) + sVar8;
  sVar20 = (ushort)(byte)((uint)uVar6 >> 0x18) + sVar8;
  auVar1._2_2_ = sVar10;
  auVar1._0_2_ = sVar9;
  auVar1._4_2_ = sVar12;
  auVar1._6_2_ = sVar14;
  auVar1._8_2_ = (uVar11 & 0xff) + sVar8;
  auVar1._10_2_ = (uVar11 >> 8) + sVar8;
  auVar1._12_2_ = (uVar13 & 0xff) + sVar8;
  auVar1._14_2_ = (uVar13 >> 8) + sVar8;
  uVar3 = NEON_sqxtun(CONCAT26(sVar14,CONCAT24(sVar12,CONCAT22(sVar10,sVar9))),auVar1,2);
  auVar5._2_2_ = sVar16;
  auVar5._0_2_ = sVar15;
  auVar5._4_2_ = sVar18;
  auVar5._6_2_ = sVar20;
  auVar5._8_2_ = (uVar17 & 0xff) + sVar8;
  auVar5._10_2_ = (uVar17 >> 8) + sVar8;
  auVar5._12_2_ = (uVar19 & 0xff) + sVar8;
  auVar5._14_2_ = (uVar19 >> 8) + sVar8;
  uVar7 = NEON_sqxtun(CONCAT26(sVar20,CONCAT24(sVar18,CONCAT22(sVar16,sVar15))),auVar5,2);
  *param_2 = (int)uVar3;
  param_2[8] = (int)((ulong)uVar3 >> 0x20);
  param_2[0x10] = (int)uVar7;
  param_2[0x18] = (int)((ulong)uVar7 >> 0x20);
  return;
}




void FUN_019ab98c(undefined8 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  short sVar11;
  short sVar12;
  undefined2 uVar13;
  short sVar14;
  undefined2 uVar15;
  int iVar16;
  int iVar17;
  short sVar23;
  int iVar18;
  int iVar19;
  short sVar24;
  undefined8 uVar20;
  short sVar27;
  int iVar25;
  int iVar26;
  int iVar28;
  int iVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  short sVar30;
  short sVar31;
  short sVar32;
  undefined2 uVar33;
  int iVar34;
  int iVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  undefined2 uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined1 auVar47 [16];
  
  uVar2 = param_1[2];
  sVar11 = (short)((ulong)uVar2 >> 0x10);
  sVar12 = (short)((ulong)uVar2 >> 0x20);
  sVar14 = (short)((ulong)uVar2 >> 0x30);
  uVar20 = param_1[3];
  uVar5 = *param_1;
  sVar30 = (short)((ulong)uVar5 >> 0x10);
  sVar31 = (short)((ulong)uVar5 >> 0x20);
  sVar32 = (short)((ulong)uVar5 >> 0x30);
  uVar8 = param_1[1];
  sVar36 = (short)((ulong)uVar8 >> 0x10);
  sVar37 = (short)((ulong)uVar8 >> 0x20);
  sVar38 = (short)((ulong)uVar8 >> 0x30);
  sVar23 = (short)((ulong)uVar20 >> 0x10);
  sVar24 = (short)((ulong)uVar20 >> 0x20);
  sVar27 = (short)((ulong)uVar20 >> 0x30);
  iVar42 = (int)(short)uVar20 + (int)(short)uVar5;
  iVar43 = (int)sVar23 + (int)sVar30;
  iVar44 = (int)sVar24 + (int)sVar31;
  iVar45 = (int)sVar27 + (int)sVar32;
  iVar46 = (int)(short)uVar2 + (int)(short)uVar8;
  iVar48 = (int)sVar11 + (int)sVar36;
  iVar49 = (int)sVar12 + (int)sVar37;
  iVar50 = (int)sVar14 + (int)sVar38;
  iVar1 = (int)(short)uVar8 - (int)(short)uVar2;
  iVar3 = (int)sVar36 - (int)sVar11;
  iVar16 = (int)sVar37 - (int)sVar12;
  iVar17 = (int)sVar38 - (int)sVar14;
  iVar18 = (int)(short)uVar5 - (int)(short)uVar20;
  iVar25 = (int)sVar30 - (int)sVar23;
  iVar28 = (int)sVar31 - (int)sVar24;
  iVar29 = (int)sVar32 - (int)sVar27;
  iVar19 = iVar42 + iVar46;
  iVar6 = iVar43 + iVar48;
  uVar33 = (undefined2)((uint)iVar6 >> 0x10);
  iVar34 = iVar44 + iVar49;
  iVar35 = iVar45 + iVar50;
  iVar26 = iVar18 + iVar1;
  iVar9 = iVar25 + iVar3;
  uVar39 = (undefined2)((uint)iVar9 >> 0x10);
  iVar40 = iVar28 + iVar16;
  iVar41 = iVar29 + iVar17;
  iVar42 = iVar42 - iVar46;
  iVar43 = iVar43 - iVar48;
  iVar18 = iVar18 - iVar1;
  iVar25 = iVar25 - iVar3;
  uVar13 = (undefined2)iVar25;
  uVar15 = (undefined2)((uint)iVar25 >> 0x10);
  auVar21._4_2_ = (short)iVar6;
  auVar21._0_4_ = iVar19;
  auVar21._6_2_ = uVar33;
  auVar21._8_4_ = iVar34;
  auVar21._12_4_ = iVar35;
  auVar10._4_4_ = iVar43;
  auVar10._0_4_ = iVar42;
  auVar10._8_4_ = iVar44 - iVar49;
  auVar10._12_4_ = iVar45 - iVar50;
  auVar21 = NEON_ext(auVar10,auVar21,8,1);
  auVar22._4_2_ = uVar13;
  auVar22._0_4_ = iVar18;
  auVar22._6_2_ = uVar15;
  auVar22._8_4_ = iVar28 - iVar16;
  auVar22._12_4_ = iVar29 - iVar17;
  auVar47._4_2_ = (short)iVar9;
  auVar47._0_4_ = iVar26;
  auVar47._6_2_ = uVar39;
  auVar47._8_4_ = iVar40;
  auVar47._12_4_ = iVar41;
  auVar47 = NEON_ext(auVar22,auVar47,8,1);
  auVar4._4_2_ = (short)iVar6;
  auVar4._0_4_ = iVar19;
  auVar4._6_2_ = uVar33;
  auVar4._8_4_ = iVar34;
  auVar4._12_4_ = iVar35;
  auVar22 = NEON_ext(auVar4,auVar21,8,1);
  auVar7._4_2_ = (short)iVar9;
  auVar7._0_4_ = iVar26;
  auVar7._6_2_ = uVar39;
  auVar7._8_4_ = iVar40;
  auVar7._12_4_ = iVar41;
  auVar21 = NEON_ext(auVar7,auVar47,8,1);
  iVar25 = (int)(CONCAT26(uVar15,CONCAT24(uVar13,iVar18)) >> 0x20);
  iVar42 = iVar42 + 3;
  iVar28 = auVar22._0_4_ + iVar6;
  iVar29 = auVar21._0_4_ + iVar9;
  iVar34 = auVar22._8_4_ + iVar43;
  iVar35 = auVar21._8_4_ + iVar25;
  iVar6 = iVar6 - auVar22._0_4_;
  iVar9 = iVar9 - auVar21._0_4_;
  iVar43 = iVar43 - auVar22._8_4_;
  iVar25 = iVar25 - auVar21._8_4_;
  iVar1 = iVar19 + 3 + auVar22._4_4_;
  iVar3 = iVar26 + 3 + auVar21._4_4_;
  iVar16 = iVar42 + auVar22._12_4_;
  iVar17 = iVar18 + 3 + auVar21._12_4_;
  iVar19 = (iVar19 + 3) - auVar22._4_4_;
  iVar26 = (iVar26 + 3) - auVar21._4_4_;
  iVar42 = iVar42 - auVar22._12_4_;
  iVar18 = (iVar18 + 3) - auVar21._12_4_;
  *param_2 = (short)(iVar1 + iVar28 >> 3);
  param_2[0x10] = (short)(iVar19 + iVar6 >> 3);
  param_2[0x20] = (short)(iVar1 - iVar28 >> 3);
  param_2[0x30] = (short)(iVar19 - iVar6 >> 3);
  param_2[0x40] = (short)(iVar3 + iVar29 >> 3);
  param_2[0x50] = (short)(iVar26 + iVar9 >> 3);
  param_2[0x60] = (short)(iVar3 - iVar29 >> 3);
  param_2[0x70] = (short)(iVar26 - iVar9 >> 3);
  param_2[0x80] = (short)(iVar16 + iVar34 >> 3);
  param_2[0x90] = (short)(iVar42 + iVar43 >> 3);
  param_2[0xa0] = (short)(iVar16 - iVar34 >> 3);
  param_2[0xb0] = (short)(iVar42 - iVar43 >> 3);
  param_2[0xc0] = (short)(iVar17 + iVar35 >> 3);
  param_2[0xd0] = (short)(iVar18 + iVar25 >> 3);
  param_2[0xe0] = (short)(iVar17 - iVar35 >> 3);
  param_2[0xf0] = (short)(iVar18 - iVar25 >> 3);
  return;
}




void FUN_019aba98(undefined1 (*param_1) [16],int param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pauVar3 = (undefined1 (*) [16])((long)param_1 + (long)param_2 * -2);
  pauVar1 = (undefined1 (*) [16])(*param_1 + (long)param_2 * 2);
  pauVar4 = (undefined1 (*) [16])((long)pauVar3 - (long)param_2);
  pauVar5 = (undefined1 (*) [16])((long)pauVar1 - (long)param_2);
  auVar6 = NEON_uabd(*(undefined1 (*) [16])((long)pauVar3 + (long)param_2 * -2),*pauVar4,1);
  auVar8 = NEON_uabd(*pauVar4,*pauVar3,1);
  auVar9 = NEON_uabd(*pauVar3,*(undefined1 (*) [16])(*pauVar3 + param_2),1);
  auVar7 = NEON_uabd(*(undefined1 (*) [16])(*pauVar1 + param_2),*pauVar1,1);
  auVar10 = NEON_uabd(*pauVar1,*pauVar5,1);
  auVar6 = NEON_umax(auVar6,auVar8,1);
  auVar8 = NEON_uabd(*pauVar5,*param_1,1);
  auVar7 = NEON_umax(auVar9,auVar7,1);
  auVar10 = NEON_umax(auVar10,auVar8,1);
  auVar8 = NEON_uabd(*(undefined1 (*) [16])(*pauVar3 + param_2),*param_1,1);
  auVar6 = NEON_umax(auVar6,auVar7,1);
  auVar7 = NEON_uabd(*pauVar3,*pauVar5,1);
  auVar9 = NEON_uqadd(auVar8,auVar8,1);
  auVar8[0] = auVar7[0] >> 1;
  auVar8[1] = auVar7[1] >> 1;
  auVar8[2] = auVar7[2] >> 1;
  auVar8[3] = auVar7[3] >> 1;
  auVar8[4] = auVar7[4] >> 1;
  auVar8[5] = auVar7[5] >> 1;
  auVar8[6] = auVar7[6] >> 1;
  auVar8[7] = auVar7[7] >> 1;
  auVar8[8] = auVar7[8] >> 1;
  auVar8[9] = auVar7[9] >> 1;
  auVar8[10] = auVar7[10] >> 1;
  auVar8[0xb] = auVar7[0xb] >> 1;
  auVar8[0xc] = auVar7[0xc] >> 1;
  auVar8[0xd] = auVar7[0xd] >> 1;
  auVar8[0xe] = auVar7[0xe] >> 1;
  auVar8[0xf] = auVar7[0xf] >> 1;
  NEON_uqadd(auVar9,auVar8,1);
  NEON_umax(auVar6,auVar10,1);
  FUN_019ad148(&uStack_70,&local_80,&uStack_90,&local_a0,&uStack_b0,&local_c0);
  *(undefined8 *)(*pauVar4 + 8) = uStack_68;
  *(undefined8 *)*pauVar4 = uStack_70;
  *(undefined8 *)(*pauVar3 + 8) = uStack_78;
  *(undefined8 *)*pauVar3 = local_80;
  ((undefined8 *)((long)param_1 - (long)param_2))[1] = uStack_88;
  *(undefined8 *)((long)param_1 - (long)param_2) = uStack_90;
  *(undefined8 *)(*param_1 + 8) = uStack_98;
  *(undefined8 *)*param_1 = local_a0;
  *(undefined8 *)(*pauVar5 + 8) = uStack_a8;
  *(undefined8 *)*pauVar5 = uStack_b0;
  *(undefined8 *)(*pauVar1 + 8) = uStack_b8;
  *(undefined8 *)*pauVar1 = local_c0;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019abbd4(undefined1 (*param_1) [16],uint param_2,byte param_3,byte param_4,byte param_5)

{
  undefined1 (*pauVar1) [16];
  ulong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  byte bVar10;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar35;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar36 [16];
  byte bVar52;
  undefined1 auVar37 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined1 auVar76 [16];
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  undefined1 auVar85 [16];
  
  pauVar1 = (undefined1 (*) [16])(*param_1 + (long)(int)param_2 * 2);
  auVar11 = *param_1;
  auVar31 = *(undefined1 (*) [16])((long)pauVar1 - (long)(int)param_2);
  uVar7 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  pauVar8 = (undefined1 (*) [16])(*param_1 + (long)(int)param_2 * 4);
  iVar9 = -3;
  auVar55 = *pauVar1;
  auVar57 = *(undefined1 (*) [16])(*pauVar1 + (int)param_2);
  do {
    auVar85 = *pauVar8;
    auVar15 = *(undefined1 (*) [16])((long)pauVar8 + (uVar7 - (long)(int)param_2));
    auVar36 = NEON_uabd(auVar11,auVar31,1);
    auVar53 = NEON_uabd(auVar31,auVar55,1);
    auVar58 = NEON_uabd(auVar55,auVar57,1);
    bVar60 = auVar55[8] ^ 0x80;
    bVar61 = auVar55[9] ^ 0x80;
    bVar62 = auVar55[10] ^ 0x80;
    bVar63 = auVar55[0xb] ^ 0x80;
    bVar64 = auVar55[0xc] ^ 0x80;
    bVar65 = auVar55[0xd] ^ 0x80;
    bVar66 = auVar55[0xe] ^ 0x80;
    bVar67 = auVar55[0xf] ^ 0x80;
    bVar68 = auVar57[8] ^ 0x80;
    bVar69 = auVar57[9] ^ 0x80;
    bVar70 = auVar57[10] ^ 0x80;
    bVar71 = auVar57[0xb] ^ 0x80;
    bVar72 = auVar57[0xc] ^ 0x80;
    bVar73 = auVar57[0xd] ^ 0x80;
    bVar74 = auVar57[0xe] ^ 0x80;
    bVar75 = auVar57[0xf] ^ 0x80;
    auVar11 = NEON_uabd(auVar55,auVar15,1);
    auVar31 = NEON_uabd(auVar57,auVar85,1);
    auVar76 = NEON_uabd(auVar15,auVar85,1);
    auVar36 = NEON_umax(auVar36,auVar53,1);
    pauVar1 = (undefined1 (*) [16])(*pauVar8 + uVar7);
    auVar5 = *pauVar1;
    auVar6 = *(undefined1 (*) [16])(*pauVar8 + (long)(int)param_2 + (long)(int)param_2 * 2);
    auVar56._0_8_ = auVar85._0_8_ ^ 0x8080808080808080;
    auVar56[8] = auVar85[8] ^ 0x80;
    auVar56[9] = auVar85[9] ^ 0x80;
    auVar56[10] = auVar85[10] ^ 0x80;
    auVar56[0xb] = auVar85[0xb] ^ 0x80;
    auVar56[0xc] = auVar85[0xc] ^ 0x80;
    auVar56[0xd] = auVar85[0xd] ^ 0x80;
    auVar56[0xe] = auVar85[0xe] ^ 0x80;
    auVar56[0xf] = auVar85[0xf] ^ 0x80;
    bVar77 = auVar15[8] ^ 0x80;
    bVar78 = auVar15[9] ^ 0x80;
    bVar79 = auVar15[10] ^ 0x80;
    bVar80 = auVar15[0xb] ^ 0x80;
    bVar81 = auVar15[0xc] ^ 0x80;
    bVar82 = auVar15[0xd] ^ 0x80;
    bVar83 = auVar15[0xe] ^ 0x80;
    bVar84 = auVar15[0xf] ^ 0x80;
    auVar31 = NEON_uqadd(auVar31,auVar31,1);
    auVar12[0] = auVar11[0] >> 1;
    auVar12[1] = auVar11[1] >> 1;
    auVar12[2] = auVar11[2] >> 1;
    auVar12[3] = auVar11[3] >> 1;
    auVar12[4] = auVar11[4] >> 1;
    auVar12[5] = auVar11[5] >> 1;
    auVar12[6] = auVar11[6] >> 1;
    auVar12[7] = auVar11[7] >> 1;
    auVar12[8] = auVar11[8] >> 1;
    auVar12[9] = auVar11[9] >> 1;
    auVar12[10] = auVar11[10] >> 1;
    auVar12[0xb] = auVar11[0xb] >> 1;
    auVar12[0xc] = auVar11[0xc] >> 1;
    auVar12[0xd] = auVar11[0xd] >> 1;
    auVar12[0xe] = auVar11[0xe] >> 1;
    auVar12[0xf] = auVar11[0xf] >> 1;
    auVar11 = NEON_uqadd(auVar31,auVar12,1);
    auVar3[8] = bVar68;
    auVar3._0_8_ = auVar57._0_8_ ^ 0x8080808080808080;
    auVar3[9] = bVar69;
    auVar3[10] = bVar70;
    auVar3[0xb] = bVar71;
    auVar3[0xc] = bVar72;
    auVar3[0xd] = bVar73;
    auVar3[0xe] = bVar74;
    auVar3[0xf] = bVar75;
    auVar31 = NEON_sqsub(auVar56,auVar3,1);
    auVar59[8] = bVar60;
    auVar59._0_8_ = auVar55._0_8_ ^ 0x8080808080808080;
    auVar59[9] = bVar61;
    auVar59[10] = bVar62;
    auVar59[0xb] = bVar63;
    auVar59[0xc] = bVar64;
    auVar59[0xd] = bVar65;
    auVar59[0xe] = bVar66;
    auVar59[0xf] = bVar67;
    auVar4[8] = bVar77;
    auVar4._0_8_ = auVar15._0_8_ ^ 0x8080808080808080;
    auVar4[9] = bVar78;
    auVar4[10] = bVar79;
    auVar4[0xb] = bVar80;
    auVar4[0xc] = bVar81;
    auVar4[0xd] = bVar82;
    auVar4[0xe] = bVar83;
    auVar4[0xf] = bVar84;
    auVar85 = NEON_sqsub(auVar59,auVar4,1);
    auVar85 = NEON_sqadd(auVar85,auVar31,1);
    auVar85 = NEON_sqadd(auVar31,auVar85,1);
    auVar31 = NEON_sqadd(auVar31,auVar85,1);
    auVar85 = NEON_uabd(*(undefined1 (*) [16])
                         (*pauVar8 + (long)(int)param_2 + (long)(int)param_2 * 2),*pauVar1,1);
    auVar59 = NEON_umax(auVar58,auVar85,1);
    auVar85 = NEON_uabd(*pauVar1,auVar15,1);
    auVar53 = NEON_umax(auVar85,auVar76,1);
    auVar85 = NEON_umax(auVar36,auVar59,1);
    auVar85 = NEON_umax(auVar85,auVar53,1);
    bVar10 = -(auVar11[0] <= param_3) & -(auVar85[0] <= param_4);
    bVar16 = -(auVar11[1] <= param_3) & -(auVar85[1] <= param_4);
    bVar17 = -(auVar11[2] <= param_3) & -(auVar85[2] <= param_4);
    bVar18 = -(auVar11[3] <= param_3) & -(auVar85[3] <= param_4);
    bVar19 = -(auVar11[4] <= param_3) & -(auVar85[4] <= param_4);
    bVar20 = -(auVar11[5] <= param_3) & -(auVar85[5] <= param_4);
    bVar21 = -(auVar11[6] <= param_3) & -(auVar85[6] <= param_4);
    bVar22 = -(auVar11[7] <= param_3) & -(auVar85[7] <= param_4);
    bVar23 = -(auVar11[8] <= param_3) & -(auVar85[8] <= param_4);
    bVar24 = -(auVar11[9] <= param_3) & -(auVar85[9] <= param_4);
    bVar25 = -(auVar11[10] <= param_3) & -(auVar85[10] <= param_4);
    bVar26 = -(auVar11[0xb] <= param_3) & -(auVar85[0xb] <= param_4);
    bVar27 = -(auVar11[0xc] <= param_3) & -(auVar85[0xc] <= param_4);
    bVar28 = -(auVar11[0xd] <= param_3) & -(auVar85[0xd] <= param_4);
    bVar29 = -(auVar11[0xe] <= param_3) & -(auVar85[0xe] <= param_4);
    bVar30 = -(auVar11[0xf] <= param_3) & -(auVar85[0xf] <= param_4);
    bVar35 = bVar10 & (-(param_5 < auVar76[0]) | -(param_5 < auVar58[0]));
    bVar38 = bVar16 & (-(param_5 < auVar76[1]) | -(param_5 < auVar58[1]));
    bVar39 = bVar17 & (-(param_5 < auVar76[2]) | -(param_5 < auVar58[2]));
    bVar40 = bVar18 & (-(param_5 < auVar76[3]) | -(param_5 < auVar58[3]));
    bVar41 = bVar19 & (-(param_5 < auVar76[4]) | -(param_5 < auVar58[4]));
    bVar42 = bVar20 & (-(param_5 < auVar76[5]) | -(param_5 < auVar58[5]));
    bVar43 = bVar21 & (-(param_5 < auVar76[6]) | -(param_5 < auVar58[6]));
    bVar44 = bVar22 & (-(param_5 < auVar76[7]) | -(param_5 < auVar58[7]));
    bVar45 = bVar23 & (-(param_5 < auVar76[8]) | -(param_5 < auVar58[8]));
    bVar46 = bVar24 & (-(param_5 < auVar76[9]) | -(param_5 < auVar58[9]));
    bVar47 = bVar25 & (-(param_5 < auVar76[10]) | -(param_5 < auVar58[10]));
    bVar48 = bVar26 & (-(param_5 < auVar76[0xb]) | -(param_5 < auVar58[0xb]));
    bVar49 = bVar27 & (-(param_5 < auVar76[0xc]) | -(param_5 < auVar58[0xc]));
    bVar50 = bVar28 & (-(param_5 < auVar76[0xd]) | -(param_5 < auVar58[0xd]));
    bVar51 = bVar29 & (-(param_5 < auVar76[0xe]) | -(param_5 < auVar58[0xe]));
    bVar52 = bVar30 & (-(param_5 < auVar76[0xf]) | -(param_5 < auVar58[0xf]));
    auVar32[0] = auVar31[0] & bVar35;
    auVar32[1] = auVar31[1] & bVar38;
    auVar32[2] = auVar31[2] & bVar39;
    auVar32[3] = auVar31[3] & bVar40;
    auVar32[4] = auVar31[4] & bVar41;
    auVar32[5] = auVar31[5] & bVar42;
    auVar32[6] = auVar31[6] & bVar43;
    auVar32[7] = auVar31[7] & bVar44;
    auVar32[8] = auVar31[8] & bVar45;
    auVar32[9] = auVar31[9] & bVar46;
    auVar32[10] = auVar31[10] & bVar47;
    auVar32[0xb] = auVar31[0xb] & bVar48;
    auVar32[0xc] = auVar31[0xc] & bVar49;
    auVar32[0xd] = auVar31[0xd] & bVar50;
    auVar32[0xe] = auVar31[0xe] & bVar51;
    auVar32[0xf] = auVar31[0xf] & bVar52;
    auVar85[8] = 3;
    auVar85._0_8_ = 0x303030303030303;
    auVar85[9] = 3;
    auVar85[10] = 3;
    auVar85[0xb] = 3;
    auVar85[0xc] = 3;
    auVar85[0xd] = 3;
    auVar85[0xe] = 3;
    auVar85[0xf] = 3;
    auVar31 = NEON_sqadd(auVar32,auVar85,1);
    auVar36[8] = 4;
    auVar36._0_8_ = 0x404040404040404;
    auVar36[9] = 4;
    auVar36[10] = 4;
    auVar36[0xb] = 4;
    auVar36[0xc] = 4;
    auVar36[0xd] = 4;
    auVar36[0xe] = 4;
    auVar36[0xf] = 4;
    auVar11 = NEON_sqadd(auVar32,auVar36,1);
    auVar37[0] = auVar31[0] >> 3;
    auVar37[1] = auVar31[1] >> 3;
    auVar37[2] = auVar31[2] >> 3;
    auVar37[3] = auVar31[3] >> 3;
    auVar37[4] = auVar31[4] >> 3;
    auVar37[5] = auVar31[5] >> 3;
    auVar37[6] = auVar31[6] >> 3;
    auVar37[7] = auVar31[7] >> 3;
    auVar37[8] = auVar31[8] >> 3;
    auVar37[9] = auVar31[9] >> 3;
    auVar37[10] = auVar31[10] >> 3;
    auVar37[0xb] = auVar31[0xb] >> 3;
    auVar37[0xc] = auVar31[0xc] >> 3;
    auVar37[0xd] = auVar31[0xd] >> 3;
    auVar37[0xe] = auVar31[0xe] >> 3;
    auVar37[0xf] = auVar31[0xf] >> 3;
    auVar33[0] = auVar11[0] >> 3;
    auVar33[1] = auVar11[1] >> 3;
    auVar33[2] = auVar11[2] >> 3;
    auVar33[3] = auVar11[3] >> 3;
    auVar33[4] = auVar11[4] >> 3;
    auVar33[5] = auVar11[5] >> 3;
    auVar33[6] = auVar11[6] >> 3;
    auVar33[7] = auVar11[7] >> 3;
    auVar33[8] = auVar11[8] >> 3;
    auVar33[9] = auVar11[9] >> 3;
    auVar33[10] = auVar11[10] >> 3;
    auVar33[0xb] = auVar11[0xb] >> 3;
    auVar33[0xc] = auVar11[0xc] >> 3;
    auVar33[0xd] = auVar11[0xd] >> 3;
    auVar33[0xe] = auVar11[0xe] >> 3;
    auVar33[0xf] = auVar11[0xf] >> 3;
    auVar76[8] = bVar68;
    auVar76._0_8_ = auVar57._0_8_ ^ 0x8080808080808080;
    auVar76[9] = bVar69;
    auVar76[10] = bVar70;
    auVar76[0xb] = bVar71;
    auVar76[0xc] = bVar72;
    auVar76[0xd] = bVar73;
    auVar76[0xe] = bVar74;
    auVar76[0xf] = bVar75;
    auVar85 = NEON_sqadd(auVar76,auVar37,1);
    auVar31 = NEON_sqsub(auVar56,auVar33,1);
    auVar11 = NEON_sqsub(auVar31,auVar85,1);
    auVar57 = NEON_sqadd(auVar11,auVar11,1);
    auVar11 = NEON_sqadd(auVar11,auVar57,1);
    auVar13[0] = auVar11[0] & (bVar35 ^ bVar10);
    auVar13[1] = auVar11[1] & (bVar38 ^ bVar16);
    auVar13[2] = auVar11[2] & (bVar39 ^ bVar17);
    auVar13[3] = auVar11[3] & (bVar40 ^ bVar18);
    auVar13[4] = auVar11[4] & (bVar41 ^ bVar19);
    auVar13[5] = auVar11[5] & (bVar42 ^ bVar20);
    auVar13[6] = auVar11[6] & (bVar43 ^ bVar21);
    auVar13[7] = auVar11[7] & (bVar44 ^ bVar22);
    auVar13[8] = auVar11[8] & (bVar45 ^ bVar23);
    auVar13[9] = auVar11[9] & (bVar46 ^ bVar24);
    auVar13[10] = auVar11[10] & (bVar47 ^ bVar25);
    auVar13[0xb] = auVar11[0xb] & (bVar48 ^ bVar26);
    auVar13[0xc] = auVar11[0xc] & (bVar49 ^ bVar27);
    auVar13[0xd] = auVar11[0xd] & (bVar50 ^ bVar28);
    auVar13[0xe] = auVar11[0xe] & (bVar51 ^ bVar29);
    auVar13[0xf] = auVar11[0xf] & (bVar52 ^ bVar30);
    auVar53[8] = 4;
    auVar53._0_8_ = 0x404040404040404;
    auVar53[9] = 4;
    auVar53[10] = 4;
    auVar53[0xb] = 4;
    auVar53[0xc] = 4;
    auVar53[0xd] = 4;
    auVar53[0xe] = 4;
    auVar53[0xf] = 4;
    auVar36 = NEON_sqadd(auVar13,auVar53,1);
    auVar57[8] = 3;
    auVar57._0_8_ = 0x303030303030303;
    auVar57[9] = 3;
    auVar57[10] = 3;
    auVar57[0xb] = 3;
    auVar57[0xc] = 3;
    auVar57[0xd] = 3;
    auVar57[0xe] = 3;
    auVar57[0xf] = 3;
    auVar11 = NEON_sqadd(auVar13,auVar57,1);
    auVar54[0] = auVar36[0] >> 3;
    auVar54[1] = auVar36[1] >> 3;
    auVar54[2] = auVar36[2] >> 3;
    auVar54[3] = auVar36[3] >> 3;
    auVar54[4] = auVar36[4] >> 3;
    auVar54[5] = auVar36[5] >> 3;
    auVar54[6] = auVar36[6] >> 3;
    auVar54[7] = auVar36[7] >> 3;
    auVar54[8] = auVar36[8] >> 3;
    auVar54[9] = auVar36[9] >> 3;
    auVar54[10] = auVar36[10] >> 3;
    auVar54[0xb] = auVar36[0xb] >> 3;
    auVar54[0xc] = auVar36[0xc] >> 3;
    auVar54[0xd] = auVar36[0xd] >> 3;
    auVar54[0xe] = auVar36[0xe] >> 3;
    auVar54[0xf] = auVar36[0xf] >> 3;
    auVar14[0] = auVar11[0] >> 3;
    auVar14[1] = auVar11[1] >> 3;
    auVar14[2] = auVar11[2] >> 3;
    auVar14[3] = auVar11[3] >> 3;
    auVar14[4] = auVar11[4] >> 3;
    auVar14[5] = auVar11[5] >> 3;
    auVar14[6] = auVar11[6] >> 3;
    auVar14[7] = auVar11[7] >> 3;
    auVar14[8] = auVar11[8] >> 3;
    auVar14[9] = auVar11[9] >> 3;
    auVar14[10] = auVar11[10] >> 3;
    auVar14[0xb] = auVar11[0xb] >> 3;
    auVar14[0xc] = auVar11[0xc] >> 3;
    auVar14[0xd] = auVar11[0xd] >> 3;
    auVar14[0xe] = auVar11[0xe] >> 3;
    auVar14[0xf] = auVar11[0xf] >> 3;
    auVar36 = NEON_srshr(auVar54,1,1);
    auVar57 = NEON_sqsub(auVar31,auVar54,1);
    auVar31 = NEON_sqadd(auVar85,auVar14,1);
    auVar11._0_8_ = auVar57._0_8_ ^ 0x8080808080808080;
    auVar11[8] = auVar57[8] ^ 0x80;
    auVar11[9] = auVar57[9] ^ 0x80;
    auVar11[10] = auVar57[10] ^ 0x80;
    auVar11[0xb] = auVar57[0xb] ^ 0x80;
    auVar11[0xc] = auVar57[0xc] ^ 0x80;
    auVar11[0xd] = auVar57[0xd] ^ 0x80;
    auVar11[0xe] = auVar57[0xe] ^ 0x80;
    auVar11[0xf] = auVar57[0xf] ^ 0x80;
    auVar58[8] = bVar60;
    auVar58._0_8_ = auVar55._0_8_ ^ 0x8080808080808080;
    auVar58[9] = bVar61;
    auVar58[10] = bVar62;
    auVar58[0xb] = bVar63;
    auVar58[0xc] = bVar64;
    auVar58[0xd] = bVar65;
    auVar58[0xe] = bVar66;
    auVar58[0xf] = bVar67;
    auVar57 = NEON_sqadd(auVar58,auVar36,1);
    auVar55[8] = bVar77;
    auVar55._0_8_ = auVar15._0_8_ ^ 0x8080808080808080;
    auVar55[9] = bVar78;
    auVar55[10] = bVar79;
    auVar55[0xb] = bVar80;
    auVar55[0xc] = bVar81;
    auVar55[0xd] = bVar82;
    auVar55[0xe] = bVar83;
    auVar55[0xf] = bVar84;
    auVar55 = NEON_sqsub(auVar55,auVar36,1);
    auVar15._0_8_ = auVar31._0_8_ ^ 0x8080808080808080;
    auVar15[8] = auVar31[8] ^ 0x80;
    auVar15[9] = auVar31[9] ^ 0x80;
    auVar15[10] = auVar31[10] ^ 0x80;
    auVar15[0xb] = auVar31[0xb] ^ 0x80;
    auVar15[0xc] = auVar31[0xc] ^ 0x80;
    auVar15[0xd] = auVar31[0xd] ^ 0x80;
    auVar15[0xe] = auVar31[0xe] ^ 0x80;
    auVar15[0xf] = auVar31[0xf] ^ 0x80;
    auVar34._0_8_ = auVar57._0_8_ ^ 0x8080808080808080;
    auVar34[8] = auVar57[8] ^ 0x80;
    auVar34[9] = auVar57[9] ^ 0x80;
    auVar34[10] = auVar57[10] ^ 0x80;
    auVar34[0xb] = auVar57[0xb] ^ 0x80;
    auVar34[0xc] = auVar57[0xc] ^ 0x80;
    auVar34[0xd] = auVar57[0xd] ^ 0x80;
    auVar34[0xe] = auVar57[0xe] ^ 0x80;
    auVar34[0xf] = auVar57[0xf] ^ 0x80;
    auVar31._0_8_ = auVar55._0_8_ ^ 0x8080808080808080;
    auVar31[8] = auVar55[8] ^ 0x80;
    auVar31[9] = auVar55[9] ^ 0x80;
    auVar31[10] = auVar55[10] ^ 0x80;
    auVar31[0xb] = auVar55[0xb] ^ 0x80;
    auVar31[0xc] = auVar55[0xc] ^ 0x80;
    auVar31[0xd] = auVar55[0xd] ^ 0x80;
    auVar31[0xe] = auVar55[0xe] ^ 0x80;
    auVar31[0xf] = auVar55[0xf] ^ 0x80;
    iVar9 = iVar9 + 1;
    puVar2 = (ulong *)((long)pauVar8 + (long)(int)param_2 * -2);
    puVar2[1] = auVar34._8_8_;
    *puVar2 = auVar34._0_8_;
    ((ulong *)((long)pauVar8 - (long)(int)param_2))[1] = auVar15._8_8_;
    *(ulong *)((long)pauVar8 - (long)(int)param_2) = auVar15._0_8_;
    *(long *)(*pauVar8 + 8) = auVar11._8_8_;
    *(ulong *)*pauVar8 = auVar11._0_8_;
    *(ulong *)((long)(*pauVar8 + (int)param_2) + 8) = auVar31._8_8_;
    *(ulong *)(*pauVar8 + (int)param_2) = auVar31._0_8_;
    pauVar8 = (undefined1 (*) [16])
              (*pauVar8 + (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2));
    auVar55 = auVar5;
    auVar57 = auVar6;
  } while (iVar9 != 0);
  return;
}




void FUN_019abd48(undefined1 *param_1,uint param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar18 = tpidr_el0;
  local_58 = *(long *)(lVar18 + 0x28);
  uVar44 = (ulong)param_2;
  puVar41 = param_1 + -4;
  uVar45 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | uVar44 << 3;
  auVar75[0] = *puVar41;
  uVar47 = param_1[-2];
  auVar55[0] = param_1[-1];
  puVar37 = puVar41 + uVar45;
  puVar39 = puVar41 + (int)param_2;
  lVar46 = uVar45 - (long)(int)param_2;
  auVar75[1] = *puVar39;
  uVar48 = puVar39[2];
  auVar55[1] = puVar39[3];
  puVar40 = puVar41 + (long)(int)param_2 * 2;
  auVar75[2] = *puVar40;
  uVar49 = puVar40[2];
  auVar55[2] = puVar40[3];
  lVar1 = (-(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | uVar44 << 1) + (long)(int)param_2;
  puVar7 = puVar41 + lVar1;
  auVar75[3] = *puVar7;
  uVar50 = puVar7[2];
  auVar55[3] = puVar7[3];
  puVar2 = puVar41 + (long)(int)param_2 * 4;
  auVar75[4] = *puVar2;
  uVar51 = puVar2[2];
  auVar55[4] = puVar2[3];
  lVar3 = (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | uVar44 << 2) + (long)(int)param_2;
  puVar8 = puVar41 + lVar3;
  auVar75[5] = *puVar8;
  uVar52 = puVar8[2];
  auVar55[5] = puVar8[3];
  puVar9 = puVar41 + lVar1 * 2;
  auVar75[6] = *puVar9;
  uVar53 = puVar9[2];
  auVar55[6] = puVar9[3];
  puVar41 = puVar41 + lVar46;
  auVar75[7] = *puVar41;
  uVar54 = puVar41[2];
  auVar55[7] = puVar41[3];
  puVar42 = puVar37 + lVar46;
  puVar4 = puVar37 + (int)param_2;
  auVar75[9] = *puVar4;
  auVar75[8] = *puVar37;
  auVar55[9] = puVar4[3];
  auVar55[8] = puVar37[3];
  puVar5 = puVar37 + (long)(int)param_2 * 2;
  auVar75[10] = *puVar5;
  auVar55[10] = puVar5[3];
  puVar10 = puVar37 + lVar1;
  auVar75[0xb] = *puVar10;
  auVar55[0xb] = puVar10[3];
  puVar6 = puVar37 + (long)(int)param_2 * 4;
  auVar75[0xc] = *puVar6;
  auVar55[0xc] = puVar6[3];
  puVar11 = puVar37 + lVar3;
  puVar12 = puVar37 + lVar1 * 2;
  auVar75[0xd] = *puVar11;
  auVar55[0xd] = puVar11[3];
  puVar13 = param_1 + lVar46;
  auVar75[0xe] = *puVar12;
  auVar55[0xe] = puVar12[3];
  auVar75[0xf] = *puVar42;
  uVar71 = CONCAT17(puVar42[1],
                    CONCAT16(puVar12[1],
                             CONCAT15(puVar11[1],
                                      CONCAT14(puVar6[1],
                                               CONCAT13(puVar10[1],
                                                        CONCAT12(puVar5[1],
                                                                 CONCAT11(puVar4[1],puVar37[1]))))))
                   );
  uVar74 = CONCAT17(puVar42[2],
                    CONCAT16(puVar12[2],
                             CONCAT15(puVar11[2],
                                      CONCAT14(puVar6[2],
                                               CONCAT13(puVar10[2],
                                                        CONCAT12(puVar5[2],
                                                                 CONCAT11(puVar4[2],puVar37[2]))))))
                   );
  auVar55[0xf] = puVar42[3];
  auVar56[0] = *param_1;
  uVar57 = param_1[1];
  puVar38 = param_1 + uVar45;
  puVar4 = param_1 + (int)param_2;
  auVar56[1] = *puVar4;
  uVar58 = puVar4[1];
  puVar5 = param_1 + (long)(int)param_2 * 2;
  auVar56[2] = *puVar5;
  uVar59 = puVar5[1];
  puVar37 = param_1 + lVar1;
  auVar56[3] = *puVar37;
  uVar60 = puVar37[1];
  puVar6 = param_1 + (long)(int)param_2 * 4;
  auVar65[1] = puVar39[1];
  auVar65[0] = param_1[-3];
  auVar65[2] = puVar40[1];
  auVar65[3] = puVar7[1];
  auVar65[4] = puVar2[1];
  auVar65[5] = puVar8[1];
  auVar65[6] = puVar9[1];
  auVar65[7] = puVar41[1];
  auVar65._8_8_ = uVar71;
  auVar72 = NEON_uabd(auVar75,auVar65,1);
  auVar56[4] = *puVar6;
  uVar61 = puVar6[1];
  puVar42 = param_1 + lVar3;
  auVar56[5] = *puVar42;
  uVar62 = puVar42[1];
  puVar14 = param_1 + lVar1 * 2;
  auVar56[6] = *puVar14;
  uVar63 = puVar14[1];
  auVar56[7] = *puVar13;
  uVar64 = puVar13[1];
  puVar43 = puVar38 + lVar46;
  puVar10 = puVar38 + (int)param_2;
  auVar56[9] = *puVar10;
  auVar56[8] = *puVar38;
  auVar24[9] = puVar10[3];
  auVar24[8] = puVar38[3];
  puVar11 = puVar38 + (long)(int)param_2 * 2;
  auVar56[10] = *puVar11;
  auVar24[10] = puVar11[3];
  puVar15 = puVar38 + lVar1;
  auVar56[0xb] = *puVar15;
  auVar24[0xb] = puVar15[3];
  puVar12 = puVar38 + (long)(int)param_2 * 4;
  auVar56[0xc] = *puVar12;
  auVar24[0xc] = puVar12[3];
  puVar16 = puVar38 + lVar3;
  puVar17 = puVar38 + lVar1 * 2;
  auVar56[0xd] = *puVar16;
  auVar24[0xd] = puVar16[3];
  auVar56[0xe] = *puVar17;
  auVar24[0xe] = puVar17[3];
  auVar56[0xf] = *puVar43;
  uVar66 = CONCAT17(puVar43[1],
                    CONCAT16(puVar17[1],
                             CONCAT15(puVar16[1],
                                      CONCAT14(puVar12[1],
                                               CONCAT13(puVar15[1],
                                                        CONCAT12(puVar11[1],
                                                                 CONCAT11(puVar10[1],puVar38[1])))))
                            ));
  uVar69 = CONCAT17(puVar43[2],
                    CONCAT16(puVar17[2],
                             CONCAT15(puVar16[2],
                                      CONCAT14(puVar12[2],
                                               CONCAT13(puVar15[2],
                                                        CONCAT12(puVar11[2],
                                                                 CONCAT11(puVar10[2],puVar38[2])))))
                            ));
  auVar24[0xf] = puVar43[3];
  auVar67[1] = puVar39[1];
  auVar67[0] = param_1[-3];
  auVar67[2] = puVar40[1];
  auVar67[3] = puVar7[1];
  auVar67[4] = puVar2[1];
  auVar67[5] = puVar8[1];
  auVar67[6] = puVar9[1];
  auVar67[7] = puVar41[1];
  auVar67._8_8_ = uVar71;
  auVar70[1] = uVar48;
  auVar70[0] = uVar47;
  auVar70[2] = uVar49;
  auVar70[3] = uVar50;
  auVar70[4] = uVar51;
  auVar70[5] = uVar52;
  auVar70[6] = uVar53;
  auVar70[7] = uVar54;
  auVar70._8_8_ = uVar74;
  auVar65 = NEON_uabd(auVar67,auVar70,1);
  auVar73[1] = uVar48;
  auVar73[0] = uVar47;
  auVar73[2] = uVar49;
  auVar73[3] = uVar50;
  auVar73[4] = uVar51;
  auVar73[5] = uVar52;
  auVar73[6] = uVar53;
  auVar73[7] = uVar54;
  auVar73._8_8_ = uVar74;
  auVar67 = NEON_uabd(auVar73,auVar55,1);
  auVar22[1] = puVar4[2];
  auVar22[0] = param_1[2];
  auVar22[2] = puVar5[2];
  auVar22[3] = puVar37[2];
  auVar22[4] = puVar6[2];
  auVar22[5] = puVar42[2];
  auVar22[6] = puVar14[2];
  auVar22[7] = puVar13[2];
  auVar22._8_8_ = uVar69;
  auVar24[1] = puVar4[3];
  auVar24[0] = param_1[3];
  auVar24[2] = puVar5[3];
  auVar24[3] = puVar37[3];
  auVar24[4] = puVar6[3];
  auVar24[5] = puVar42[3];
  auVar24[6] = puVar14[3];
  auVar24[7] = puVar13[3];
  auVar70 = NEON_uabd(auVar24,auVar22,1);
  auVar65 = NEON_umax(auVar72,auVar65,1);
  auVar19[1] = uVar58;
  auVar19[0] = uVar57;
  auVar19[2] = uVar59;
  auVar19[3] = uVar60;
  auVar19[4] = uVar61;
  auVar19[5] = uVar62;
  auVar19[6] = uVar63;
  auVar19[7] = uVar64;
  auVar19._8_8_ = uVar66;
  auVar23[1] = puVar4[2];
  auVar23[0] = param_1[2];
  auVar23[2] = puVar5[2];
  auVar23[3] = puVar37[2];
  auVar23[4] = puVar6[2];
  auVar23[5] = puVar42[2];
  auVar23[6] = puVar14[2];
  auVar23[7] = puVar13[2];
  auVar23._8_8_ = uVar69;
  auVar73 = NEON_uabd(auVar23,auVar19,1);
  auVar67 = NEON_umax(auVar67,auVar70,1);
  auVar20[1] = uVar58;
  auVar20[0] = uVar57;
  auVar20[2] = uVar59;
  auVar20[3] = uVar60;
  auVar20[4] = uVar61;
  auVar20[5] = uVar62;
  auVar20[6] = uVar63;
  auVar20[7] = uVar64;
  auVar20._8_8_ = uVar66;
  auVar70 = NEON_uabd(auVar20,auVar56,1);
  auVar73 = NEON_umax(auVar73,auVar70,1);
  auVar70 = NEON_uabd(auVar55,auVar56,1);
  auVar65 = NEON_umax(auVar65,auVar67,1);
  auVar72[1] = uVar48;
  auVar72[0] = uVar47;
  auVar72[2] = uVar49;
  auVar72[3] = uVar50;
  auVar72[4] = uVar51;
  auVar72[5] = uVar52;
  auVar72[6] = uVar53;
  auVar72[7] = uVar54;
  auVar72._8_8_ = uVar74;
  auVar21[1] = uVar58;
  auVar21[0] = uVar57;
  auVar21[2] = uVar59;
  auVar21[3] = uVar60;
  auVar21[4] = uVar61;
  auVar21[5] = uVar62;
  auVar21[6] = uVar63;
  auVar21[7] = uVar64;
  auVar21._8_8_ = uVar66;
  auVar67 = NEON_uabd(auVar72,auVar21,1);
  auVar70 = NEON_uqadd(auVar70,auVar70,1);
  auVar68[0] = auVar67[0] >> 1;
  auVar68[1] = auVar67[1] >> 1;
  auVar68[2] = auVar67[2] >> 1;
  auVar68[3] = auVar67[3] >> 1;
  auVar68[4] = auVar67[4] >> 1;
  auVar68[5] = auVar67[5] >> 1;
  auVar68[6] = auVar67[6] >> 1;
  auVar68[7] = auVar67[7] >> 1;
  auVar68[8] = auVar67[8] >> 1;
  auVar68[9] = auVar67[9] >> 1;
  auVar68[10] = auVar67[10] >> 1;
  auVar68[0xb] = auVar67[0xb] >> 1;
  auVar68[0xc] = auVar67[0xc] >> 1;
  auVar68[0xd] = auVar67[0xd] >> 1;
  auVar68[0xe] = auVar67[0xe] >> 1;
  auVar68[0xf] = auVar67[0xf] >> 1;
  NEON_uqadd(auVar70,auVar68,1);
  NEON_umax(auVar65,auVar73,1);
  FUN_019ad148(&uStack_70,&local_80,&uStack_90,&local_a0,&uStack_b0,&local_c0);
  auVar34._8_8_ = uStack_78;
  auVar34._0_8_ = local_80;
  auVar33._8_8_ = uStack_78;
  auVar33._0_8_ = local_80;
  auVar36._8_8_ = uStack_68;
  auVar36._0_8_ = uStack_70;
  auVar35._8_8_ = uStack_68;
  auVar35._0_8_ = uStack_70;
  puVar39 = param_1 + -3;
  auVar65 = NEON_ext(auVar35,auVar36,8,1);
  *puVar39 = (char)uStack_70;
  param_1[-2] = (char)local_80;
  puVar40 = puVar39 + uVar45;
  auVar67 = NEON_ext(auVar33,auVar34,8,1);
  puVar39[(int)param_2] = (char)((ulong)uStack_70 >> 8);
  (puVar39 + (int)param_2)[1] = (char)((ulong)local_80 >> 8);
  puVar39[(long)(int)param_2 * 2] = (char)((ulong)uStack_70 >> 0x10);
  (puVar39 + (long)(int)param_2 * 2)[1] = (char)((ulong)local_80 >> 0x10);
  puVar39[lVar1] = (char)((ulong)uStack_70 >> 0x18);
  (puVar39 + lVar1)[1] = (char)((ulong)local_80 >> 0x18);
  puVar39[(long)(int)param_2 * 4] = (char)((ulong)uStack_70 >> 0x20);
  (puVar39 + (long)(int)param_2 * 4)[1] = (char)((ulong)local_80 >> 0x20);
  puVar39[lVar3] = (char)((ulong)uStack_70 >> 0x28);
  (puVar39 + lVar3)[1] = (char)((ulong)local_80 >> 0x28);
  puVar39[lVar1 * 2] = (char)((ulong)uStack_70 >> 0x30);
  (puVar39 + lVar1 * 2)[1] = (char)((ulong)local_80 >> 0x30);
  puVar39[lVar46] = (char)((ulong)uStack_70 >> 0x38);
  (puVar39 + lVar46)[1] = (char)((ulong)local_80 >> 0x38);
  *puVar40 = auVar65[0];
  puVar40[1] = auVar67[0];
  puVar40[(int)param_2] = auVar65[1];
  (puVar40 + (int)param_2)[1] = auVar67[1];
  puVar40[(long)(int)param_2 * 2] = auVar65[2];
  (puVar40 + (long)(int)param_2 * 2)[1] = auVar67[2];
  puVar40[lVar1] = auVar65[3];
  (puVar40 + lVar1)[1] = auVar67[3];
  puVar40[(long)(int)param_2 * 4] = auVar65[4];
  (puVar40 + (long)(int)param_2 * 4)[1] = auVar67[4];
  puVar40[lVar3] = auVar65[5];
  (puVar40 + lVar3)[1] = auVar67[5];
  puVar40[lVar1 * 2] = auVar65[6];
  (puVar40 + lVar1 * 2)[1] = auVar67[6];
  puVar40[lVar46] = auVar65[7];
  (puVar40 + lVar46)[1] = auVar67[7];
  auVar30._8_8_ = uStack_98;
  auVar30._0_8_ = local_a0;
  auVar29._8_8_ = uStack_98;
  auVar29._0_8_ = local_a0;
  auVar32._8_8_ = uStack_88;
  auVar32._0_8_ = uStack_90;
  auVar31._8_8_ = uStack_88;
  auVar31._0_8_ = uStack_90;
  puVar39 = param_1 + -1;
  auVar65 = NEON_ext(auVar31,auVar32,8,1);
  *puVar39 = (char)uStack_90;
  *param_1 = (char)local_a0;
  puVar40 = puVar39 + uVar45;
  auVar67 = NEON_ext(auVar29,auVar30,8,1);
  puVar39[(int)param_2] = (char)((ulong)uStack_90 >> 8);
  (puVar39 + (int)param_2)[1] = (char)((ulong)local_a0 >> 8);
  puVar39[(long)(int)param_2 * 2] = (char)((ulong)uStack_90 >> 0x10);
  (puVar39 + (long)(int)param_2 * 2)[1] = (char)((ulong)local_a0 >> 0x10);
  puVar39[lVar1] = (char)((ulong)uStack_90 >> 0x18);
  (puVar39 + lVar1)[1] = (char)((ulong)local_a0 >> 0x18);
  puVar39[(long)(int)param_2 * 4] = (char)((ulong)uStack_90 >> 0x20);
  (puVar39 + (long)(int)param_2 * 4)[1] = (char)((ulong)local_a0 >> 0x20);
  puVar39[lVar3] = (char)((ulong)uStack_90 >> 0x28);
  (puVar39 + lVar3)[1] = (char)((ulong)local_a0 >> 0x28);
  puVar39[lVar1 * 2] = (char)((ulong)uStack_90 >> 0x30);
  (puVar39 + lVar1 * 2)[1] = (char)((ulong)local_a0 >> 0x30);
  puVar39[lVar46] = (char)((ulong)uStack_90 >> 0x38);
  (puVar39 + lVar46)[1] = (char)((ulong)local_a0 >> 0x38);
  *puVar40 = auVar65[0];
  puVar40[1] = auVar67[0];
  puVar40[(int)param_2] = auVar65[1];
  (puVar40 + (int)param_2)[1] = auVar67[1];
  puVar40[(long)(int)param_2 * 2] = auVar65[2];
  (puVar40 + (long)(int)param_2 * 2)[1] = auVar67[2];
  puVar40[lVar1] = auVar65[3];
  (puVar40 + lVar1)[1] = auVar67[3];
  puVar40[(long)(int)param_2 * 4] = auVar65[4];
  (puVar40 + (long)(int)param_2 * 4)[1] = auVar67[4];
  puVar40[lVar3] = auVar65[5];
  (puVar40 + lVar3)[1] = auVar67[5];
  puVar40[lVar1 * 2] = auVar65[6];
  (puVar40 + lVar1 * 2)[1] = auVar67[6];
  puVar40[lVar46] = auVar65[7];
  (puVar40 + lVar46)[1] = auVar67[7];
  auVar26._8_8_ = uStack_b8;
  auVar26._0_8_ = local_c0;
  auVar25._8_8_ = uStack_b8;
  auVar25._0_8_ = local_c0;
  auVar28._8_8_ = uStack_a8;
  auVar28._0_8_ = uStack_b0;
  auVar27._8_8_ = uStack_a8;
  auVar27._0_8_ = uStack_b0;
  puVar39 = param_1 + 1;
  auVar65 = NEON_ext(auVar27,auVar28,8,1);
  *puVar39 = (char)uStack_b0;
  param_1[2] = (char)local_c0;
  puVar40 = puVar39 + uVar45;
  auVar67 = NEON_ext(auVar25,auVar26,8,1);
  puVar39[(int)param_2] = (char)((ulong)uStack_b0 >> 8);
  (puVar39 + (int)param_2)[1] = (char)((ulong)local_c0 >> 8);
  puVar39[(long)(int)param_2 * 2] = (char)((ulong)uStack_b0 >> 0x10);
  (puVar39 + (long)(int)param_2 * 2)[1] = (char)((ulong)local_c0 >> 0x10);
  puVar39[lVar1] = (char)((ulong)uStack_b0 >> 0x18);
  (puVar39 + lVar1)[1] = (char)((ulong)local_c0 >> 0x18);
  puVar39[(long)(int)param_2 * 4] = (char)((ulong)uStack_b0 >> 0x20);
  (puVar39 + (long)(int)param_2 * 4)[1] = (char)((ulong)local_c0 >> 0x20);
  puVar39[lVar3] = (char)((ulong)uStack_b0 >> 0x28);
  (puVar39 + lVar3)[1] = (char)((ulong)local_c0 >> 0x28);
  puVar39[lVar1 * 2] = (char)((ulong)uStack_b0 >> 0x30);
  (puVar39 + lVar1 * 2)[1] = (char)((ulong)local_c0 >> 0x30);
  puVar39[lVar46] = (char)((ulong)uStack_b0 >> 0x38);
  (puVar39 + lVar46)[1] = (char)((ulong)local_c0 >> 0x38);
  *puVar40 = auVar65[0];
  puVar40[1] = auVar67[0];
  puVar40[(int)param_2] = auVar65[1];
  (puVar40 + (int)param_2)[1] = auVar67[1];
  puVar40[(long)(int)param_2 * 2] = auVar65[2];
  (puVar40 + (long)(int)param_2 * 2)[1] = auVar67[2];
  puVar40[lVar1] = auVar65[3];
  (puVar40 + lVar1)[1] = auVar67[3];
  puVar40[(long)(int)param_2 * 4] = auVar65[4];
  (puVar40 + (long)(int)param_2 * 4)[1] = auVar67[4];
  puVar40[lVar3] = auVar65[5];
  (puVar40 + lVar3)[1] = auVar67[5];
  puVar40[lVar1 * 2] = auVar65[6];
  (puVar40 + lVar1 * 2)[1] = auVar67[6];
  puVar40[lVar46] = auVar65[7];
  (puVar40 + lVar46)[1] = auVar67[7];
  if (*(long *)(lVar18 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

