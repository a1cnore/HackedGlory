// functions/019ad — 9 functions
#include "libGameKindred.h"




void FUN_019ad044(long param_1,uint param_2,byte param_3)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  puVar4 = (ulong *)(param_1 + (long)(int)param_2 * 4);
  iVar5 = -3;
  do {
    auVar7 = *(undefined1 (*) [16])((long)puVar4 - (long)(int)(param_2 << 1));
    auVar22 = *(undefined1 (*) [16])((long)puVar4 + -(long)(int)param_2);
    uVar3 = puVar4[1];
    bVar14 = (byte)(uVar3 >> 8);
    bVar15 = (byte)(uVar3 >> 0x10);
    bVar16 = (byte)(uVar3 >> 0x18);
    bVar17 = (byte)(uVar3 >> 0x20);
    bVar18 = (byte)(uVar3 >> 0x28);
    bVar19 = (byte)(uVar3 >> 0x30);
    bVar20 = (byte)(uVar3 >> 0x38);
    auVar2 = *(undefined1 (*) [16])((long)puVar4 + (long)(int)param_2);
    iVar5 = iVar5 + 1;
    auVar24[9] = bVar14;
    auVar24._0_9_ = *(unkbyte9 *)puVar4;
    auVar24[10] = bVar15;
    auVar24[0xb] = bVar16;
    auVar24[0xc] = bVar17;
    auVar24[0xd] = bVar18;
    auVar24[0xe] = bVar19;
    auVar24[0xf] = bVar20;
    auVar24 = NEON_uabd(auVar22,auVar24,1);
    auVar25 = NEON_uabd(auVar7,auVar2,1);
    auVar6._0_8_ = auVar7._0_8_ ^ 0x8080808080808080;
    auVar6[8] = auVar7[8] ^ 0x80;
    auVar6[9] = auVar7[9] ^ 0x80;
    auVar6[10] = auVar7[10] ^ 0x80;
    auVar6[0xb] = auVar7[0xb] ^ 0x80;
    auVar6[0xc] = auVar7[0xc] ^ 0x80;
    auVar6[0xd] = auVar7[0xd] ^ 0x80;
    auVar6[0xe] = auVar7[0xe] ^ 0x80;
    auVar6[0xf] = auVar7[0xf] ^ 0x80;
    auVar11._0_8_ = auVar22._0_8_ ^ 0x8080808080808080;
    auVar11[8] = auVar22[8] ^ 0x80;
    auVar11[9] = auVar22[9] ^ 0x80;
    auVar11[10] = auVar22[10] ^ 0x80;
    auVar11[0xb] = auVar22[0xb] ^ 0x80;
    auVar11[0xc] = auVar22[0xc] ^ 0x80;
    auVar11[0xd] = auVar22[0xd] ^ 0x80;
    auVar11[0xe] = auVar22[0xe] ^ 0x80;
    auVar11[0xf] = auVar22[0xf] ^ 0x80;
    bVar13 = (byte)uVar3 ^ 0x80;
    bVar14 = bVar14 ^ 0x80;
    bVar15 = bVar15 ^ 0x80;
    bVar16 = bVar16 ^ 0x80;
    bVar17 = bVar17 ^ 0x80;
    bVar18 = bVar18 ^ 0x80;
    bVar19 = bVar19 ^ 0x80;
    bVar20 = bVar20 ^ 0x80;
    auVar21._0_8_ = auVar2._0_8_ ^ 0x8080808080808080;
    auVar21[8] = auVar2[8] ^ 0x80;
    auVar21[9] = auVar2[9] ^ 0x80;
    auVar21[10] = auVar2[10] ^ 0x80;
    auVar21[0xb] = auVar2[0xb] ^ 0x80;
    auVar21[0xc] = auVar2[0xc] ^ 0x80;
    auVar21[0xd] = auVar2[0xd] ^ 0x80;
    auVar21[0xe] = auVar2[0xe] ^ 0x80;
    auVar21[0xf] = auVar2[0xf] ^ 0x80;
    auVar7 = NEON_sqsub(auVar6,auVar21,1);
    auVar2[8] = bVar13;
    auVar2._0_8_ = *puVar4 ^ 0x8080808080808080;
    auVar2[9] = bVar14;
    auVar2[10] = bVar15;
    auVar2[0xb] = bVar16;
    auVar2[0xc] = bVar17;
    auVar2[0xd] = bVar18;
    auVar2[0xe] = bVar19;
    auVar2[0xf] = bVar20;
    auVar22 = NEON_sqsub(auVar2,auVar11,1);
    auVar24 = NEON_uqadd(auVar24,auVar24,1);
    auVar26[0] = auVar25[0] >> 1;
    auVar26[1] = auVar25[1] >> 1;
    auVar26[2] = auVar25[2] >> 1;
    auVar26[3] = auVar25[3] >> 1;
    auVar26[4] = auVar25[4] >> 1;
    auVar26[5] = auVar25[5] >> 1;
    auVar26[6] = auVar25[6] >> 1;
    auVar26[7] = auVar25[7] >> 1;
    auVar26[8] = auVar25[8] >> 1;
    auVar26[9] = auVar25[9] >> 1;
    auVar26[10] = auVar25[10] >> 1;
    auVar26[0xb] = auVar25[0xb] >> 1;
    auVar26[0xc] = auVar25[0xc] >> 1;
    auVar26[0xd] = auVar25[0xd] >> 1;
    auVar26[0xe] = auVar25[0xe] >> 1;
    auVar26[0xf] = auVar25[0xf] >> 1;
    auVar7 = NEON_sqadd(auVar7,auVar22,1);
    auVar24 = NEON_uqadd(auVar24,auVar26,1);
    auVar7 = NEON_sqadd(auVar22,auVar7,1);
    auVar7 = NEON_sqadd(auVar22,auVar7,1);
    auVar8[0] = auVar7[0] & ~-(param_3 < auVar24[0]);
    auVar8[1] = auVar7[1] & ~-(param_3 < auVar24[1]);
    auVar8[2] = auVar7[2] & ~-(param_3 < auVar24[2]);
    auVar8[3] = auVar7[3] & ~-(param_3 < auVar24[3]);
    auVar8[4] = auVar7[4] & ~-(param_3 < auVar24[4]);
    auVar8[5] = auVar7[5] & ~-(param_3 < auVar24[5]);
    auVar8[6] = auVar7[6] & ~-(param_3 < auVar24[6]);
    auVar8[7] = auVar7[7] & ~-(param_3 < auVar24[7]);
    auVar8[8] = auVar7[8] & ~-(param_3 < auVar24[8]);
    auVar8[9] = auVar7[9] & ~-(param_3 < auVar24[9]);
    auVar8[10] = auVar7[10] & ~-(param_3 < auVar24[10]);
    auVar8[0xb] = auVar7[0xb] & ~-(param_3 < auVar24[0xb]);
    auVar8[0xc] = auVar7[0xc] & ~-(param_3 < auVar24[0xc]);
    auVar8[0xd] = auVar7[0xd] & ~-(param_3 < auVar24[0xd]);
    auVar8[0xe] = auVar7[0xe] & ~-(param_3 < auVar24[0xe]);
    auVar8[0xf] = auVar7[0xf] & ~-(param_3 < auVar24[0xf]);
    auVar7[8] = 3;
    auVar7._0_8_ = 0x303030303030303;
    auVar7[9] = 3;
    auVar7[10] = 3;
    auVar7[0xb] = 3;
    auVar7[0xc] = 3;
    auVar7[0xd] = 3;
    auVar7[0xe] = 3;
    auVar7[0xf] = 3;
    auVar24 = NEON_sqadd(auVar8,auVar7,1);
    auVar22[8] = 4;
    auVar22._0_8_ = 0x404040404040404;
    auVar22[9] = 4;
    auVar22[10] = 4;
    auVar22[0xb] = 4;
    auVar22[0xc] = 4;
    auVar22[0xd] = 4;
    auVar22[0xe] = 4;
    auVar22[0xf] = 4;
    auVar7 = NEON_sqadd(auVar8,auVar22,1);
    auVar23[0] = auVar24[0] >> 3;
    auVar23[1] = auVar24[1] >> 3;
    auVar23[2] = auVar24[2] >> 3;
    auVar23[3] = auVar24[3] >> 3;
    auVar23[4] = auVar24[4] >> 3;
    auVar23[5] = auVar24[5] >> 3;
    auVar23[6] = auVar24[6] >> 3;
    auVar23[7] = auVar24[7] >> 3;
    auVar23[8] = auVar24[8] >> 3;
    auVar23[9] = auVar24[9] >> 3;
    auVar23[10] = auVar24[10] >> 3;
    auVar23[0xb] = auVar24[0xb] >> 3;
    auVar23[0xc] = auVar24[0xc] >> 3;
    auVar23[0xd] = auVar24[0xd] >> 3;
    auVar23[0xe] = auVar24[0xe] >> 3;
    auVar23[0xf] = auVar24[0xf] >> 3;
    auVar9[0] = auVar7[0] >> 3;
    auVar9[1] = auVar7[1] >> 3;
    auVar9[2] = auVar7[2] >> 3;
    auVar9[3] = auVar7[3] >> 3;
    auVar9[4] = auVar7[4] >> 3;
    auVar9[5] = auVar7[5] >> 3;
    auVar9[6] = auVar7[6] >> 3;
    auVar9[7] = auVar7[7] >> 3;
    auVar9[8] = auVar7[8] >> 3;
    auVar9[9] = auVar7[9] >> 3;
    auVar9[10] = auVar7[10] >> 3;
    auVar9[0xb] = auVar7[0xb] >> 3;
    auVar9[0xc] = auVar7[0xc] >> 3;
    auVar9[0xd] = auVar7[0xd] >> 3;
    auVar9[0xe] = auVar7[0xe] >> 3;
    auVar9[0xf] = auVar7[0xf] >> 3;
    auVar22 = NEON_sqadd(auVar11,auVar23,1);
    auVar25[8] = bVar13;
    auVar25._0_8_ = *puVar4 ^ 0x8080808080808080;
    auVar25[9] = bVar14;
    auVar25[10] = bVar15;
    auVar25[0xb] = bVar16;
    auVar25[0xc] = bVar17;
    auVar25[0xd] = bVar18;
    auVar25[0xe] = bVar19;
    auVar25[0xf] = bVar20;
    auVar7 = NEON_sqsub(auVar25,auVar9,1);
    auVar12._0_8_ = auVar22._0_8_ ^ 0x8080808080808080;
    auVar12[8] = auVar22[8] ^ 0x80;
    auVar12[9] = auVar22[9] ^ 0x80;
    auVar12[10] = auVar22[10] ^ 0x80;
    auVar12[0xb] = auVar22[0xb] ^ 0x80;
    auVar12[0xc] = auVar22[0xc] ^ 0x80;
    auVar12[0xd] = auVar22[0xd] ^ 0x80;
    auVar12[0xe] = auVar22[0xe] ^ 0x80;
    auVar12[0xf] = auVar22[0xf] ^ 0x80;
    auVar10._0_8_ = auVar7._0_8_ ^ 0x8080808080808080;
    auVar10[8] = auVar7[8] ^ 0x80;
    auVar10[9] = auVar7[9] ^ 0x80;
    auVar10[10] = auVar7[10] ^ 0x80;
    auVar10[0xb] = auVar7[0xb] ^ 0x80;
    auVar10[0xc] = auVar7[0xc] ^ 0x80;
    auVar10[0xd] = auVar7[0xd] ^ 0x80;
    auVar10[0xe] = auVar7[0xe] ^ 0x80;
    auVar10[0xf] = auVar7[0xf] ^ 0x80;
    puVar1 = (ulong *)((long)puVar4 + -(long)(int)param_2);
    puVar1[1] = auVar12._8_8_;
    *puVar1 = auVar12._0_8_;
    puVar4[1] = auVar10._8_8_;
    *puVar4 = auVar10._0_8_;
    puVar4 = (ulong *)((long)puVar4 +
                      (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2));
  } while (iVar5 != 0);
  return;
}




void FUN_019ad0fc(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = 4;
  do {
    FUN_019ace88(param_1 + lVar1,param_2,param_3);
    lVar1 = lVar1 + 4;
  } while ((int)lVar1 != 0x10);
  return;
}




void FUN_019ad148(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
                 undefined1 param_7 [16],undefined1 param_8 [16],ulong *param_9,ulong *param_10,
                 ulong *param_11,ulong *param_12,ulong *param_13,ulong *param_14)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  byte bVar15;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar30;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  auVar10._0_8_ = param_2._0_8_ ^ 0x8080808080808080;
  auVar10[8] = param_2[8] ^ 0x80;
  auVar10[9] = param_2[9] ^ 0x80;
  auVar10[10] = param_2[10] ^ 0x80;
  auVar10[0xb] = param_2[0xb] ^ 0x80;
  auVar10[0xc] = param_2[0xc] ^ 0x80;
  auVar10[0xd] = param_2[0xd] ^ 0x80;
  auVar10[0xe] = param_2[0xe] ^ 0x80;
  auVar10[0xf] = param_2[0xf] ^ 0x80;
  auVar53._0_8_ = param_3._0_8_ ^ 0x8080808080808080;
  auVar53[8] = param_3[8] ^ 0x80;
  auVar53[9] = param_3[9] ^ 0x80;
  auVar53[10] = param_3[10] ^ 0x80;
  auVar53[0xb] = param_3[0xb] ^ 0x80;
  auVar53[0xc] = param_3[0xc] ^ 0x80;
  auVar53[0xd] = param_3[0xd] ^ 0x80;
  auVar53[0xe] = param_3[0xe] ^ 0x80;
  auVar53[0xf] = param_3[0xf] ^ 0x80;
  auVar4._0_8_ = param_4._0_8_ ^ 0x8080808080808080;
  auVar4[8] = param_4[8] ^ 0x80;
  auVar4[9] = param_4[9] ^ 0x80;
  auVar4[10] = param_4[10] ^ 0x80;
  auVar4[0xb] = param_4[0xb] ^ 0x80;
  auVar4[0xc] = param_4[0xc] ^ 0x80;
  auVar4[0xd] = param_4[0xd] ^ 0x80;
  auVar4[0xe] = param_4[0xe] ^ 0x80;
  auVar4[0xf] = param_4[0xf] ^ 0x80;
  auVar7._0_8_ = param_5._0_8_ ^ 0x8080808080808080;
  auVar7[8] = param_5[8] ^ 0x80;
  auVar7[9] = param_5[9] ^ 0x80;
  auVar7[10] = param_5[10] ^ 0x80;
  auVar7[0xb] = param_5[0xb] ^ 0x80;
  auVar7[0xc] = param_5[0xc] ^ 0x80;
  auVar7[0xd] = param_5[0xd] ^ 0x80;
  auVar7[0xe] = param_5[0xe] ^ 0x80;
  auVar7[0xf] = param_5[0xf] ^ 0x80;
  auVar58 = NEON_sqsub(auVar4,auVar53,1);
  auVar60 = NEON_sqsub(auVar10,auVar7,1);
  auVar60 = NEON_sqadd(auVar60,auVar58,1);
  bVar30 = param_8[0] & param_7[0];
  bVar33 = param_8[1] & param_7[1];
  bVar34 = param_8[2] & param_7[2];
  bVar35 = param_8[3] & param_7[3];
  bVar36 = param_8[4] & param_7[4];
  bVar37 = param_8[5] & param_7[5];
  bVar38 = param_8[6] & param_7[6];
  bVar39 = param_8[7] & param_7[7];
  bVar40 = param_8[8] & param_7[8];
  bVar41 = param_8[9] & param_7[9];
  bVar42 = param_8[10] & param_7[10];
  bVar43 = param_8[0xb] & param_7[0xb];
  bVar44 = param_8[0xc] & param_7[0xc];
  bVar45 = param_8[0xd] & param_7[0xd];
  bVar46 = param_8[0xe] & param_7[0xe];
  bVar47 = param_8[0xf] & param_7[0xf];
  auVar60 = NEON_sqadd(auVar58,auVar60,1);
  auVar48[8] = 0x1b;
  auVar48._0_8_ = 0x1b1b1b1b1b1b1b1b;
  auVar48[9] = 0x1b;
  auVar48[10] = 0x1b;
  auVar48[0xb] = 0x1b;
  auVar48[0xc] = 0x1b;
  auVar48[0xd] = 0x1b;
  auVar48[0xe] = 0x1b;
  auVar48[0xf] = 0x1b;
  auVar60 = NEON_sqadd(auVar58,auVar60,1);
  auVar54[8] = 0x12;
  auVar54._0_8_ = 0x1212121212121212;
  auVar54[9] = 0x12;
  auVar54[10] = 0x12;
  auVar54[0xb] = 0x12;
  auVar54[0xc] = 0x12;
  auVar54[0xd] = 0x12;
  auVar54[0xe] = 0x12;
  auVar54[0xf] = 0x12;
  auVar58 = NEON_ext(auVar48,auVar48,8,1);
  bVar12 = auVar60[0] & (bVar30 ^ param_7[0]);
  bVar15 = auVar60[1] & (bVar33 ^ param_7[1]);
  bVar16 = auVar60[2] & (bVar34 ^ param_7[2]);
  bVar17 = auVar60[3] & (bVar35 ^ param_7[3]);
  bVar18 = auVar60[4] & (bVar36 ^ param_7[4]);
  bVar19 = auVar60[5] & (bVar37 ^ param_7[5]);
  bVar20 = auVar60[6] & (bVar38 ^ param_7[6]);
  bVar21 = auVar60[7] & (bVar39 ^ param_7[7]);
  bVar22 = auVar60[8] & (bVar40 ^ param_7[8]);
  bVar23 = auVar60[9] & (bVar41 ^ param_7[9]);
  bVar24 = auVar60[10] & (bVar42 ^ param_7[10]);
  bVar25 = auVar60[0xb] & (bVar43 ^ param_7[0xb]);
  bVar26 = auVar60[0xc] & (bVar44 ^ param_7[0xc]);
  bVar27 = auVar60[0xd] & (bVar45 ^ param_7[0xd]);
  bVar28 = auVar60[0xe] & (bVar46 ^ param_7[0xe]);
  bVar29 = auVar60[0xf] & (bVar47 ^ param_7[0xf]);
  auVar51._0_8_ =
       CONCAT26((short)auVar58[3] * (short)(char)bVar17 + 0x3f,
                CONCAT24((short)auVar58[2] * (short)(char)bVar16 + 0x3f,
                         CONCAT22((short)auVar58[1] * (short)(char)bVar15 + 0x3f,
                                  (short)auVar58[0] * (short)(char)bVar12 + 0x3f)));
  auVar51._8_2_ = (short)auVar58[4] * (short)(char)bVar18 + 0x3f;
  auVar51._10_2_ = (short)auVar58[5] * (short)(char)bVar19 + 0x3f;
  auVar51._12_2_ = (short)auVar58[6] * (short)(char)bVar20 + 0x3f;
  auVar51._14_2_ = (short)auVar58[7] * (short)(char)bVar21 + 0x3f;
  auVar61[8] = 9;
  auVar61._0_8_ = 0x909090909090909;
  auVar61[9] = 9;
  auVar61[10] = 9;
  auVar61[0xb] = 9;
  auVar61[0xc] = 9;
  auVar61[0xd] = 9;
  auVar61[0xe] = 9;
  auVar61[0xf] = 9;
  auVar58 = NEON_ext(auVar54,auVar54,8,1);
  auVar56._0_8_ =
       CONCAT26((short)auVar58[3] * (short)(char)bVar17 + 0x3f,
                CONCAT24((short)auVar58[2] * (short)(char)bVar16 + 0x3f,
                         CONCAT22((short)auVar58[1] * (short)(char)bVar15 + 0x3f,
                                  (short)auVar58[0] * (short)(char)bVar12 + 0x3f)));
  auVar56._8_2_ = (short)auVar58[4] * (short)(char)bVar18 + 0x3f;
  auVar56._10_2_ = (short)auVar58[5] * (short)(char)bVar19 + 0x3f;
  auVar56._12_2_ = (short)auVar58[6] * (short)(char)bVar20 + 0x3f;
  auVar56._14_2_ = (short)auVar58[7] * (short)(char)bVar21 + 0x3f;
  auVar58 = NEON_ext(auVar61,auVar61,8,1);
  auVar49._0_8_ =
       CONCAT26((short)auVar58[3] * (short)(char)bVar17 + 0x3f,
                CONCAT24((short)auVar58[2] * (short)(char)bVar16 + 0x3f,
                         CONCAT22((short)auVar58[1] * (short)(char)bVar15 + 0x3f,
                                  (short)auVar58[0] * (short)(char)bVar12 + 0x3f)));
  auVar49._8_2_ = (short)auVar58[4] * (short)(char)bVar18 + 0x3f;
  auVar49._10_2_ = (short)auVar58[5] * (short)(char)bVar19 + 0x3f;
  auVar49._12_2_ = (short)auVar58[6] * (short)(char)bVar20 + 0x3f;
  auVar49._14_2_ = (short)auVar58[7] * (short)(char)bVar21 + 0x3f;
  auVar55._0_2_ = (char)bVar22 * 9 + 0x3f;
  auVar55._2_2_ = (char)bVar23 * 9 + 0x3f;
  auVar55._4_2_ = (char)bVar24 * 9 + 0x3f;
  auVar55._6_2_ = (char)bVar25 * 9 + 0x3f;
  auVar55._8_2_ = (char)bVar26 * 9 + 0x3f;
  auVar55._10_2_ = (char)bVar27 * 9 + 0x3f;
  auVar55._12_2_ = (char)bVar28 * 9 + 0x3f;
  auVar55._14_2_ = (char)bVar29 * 9 + 0x3f;
  auVar13[8] = 3;
  auVar13._0_8_ = 0x303030303030303;
  auVar13[9] = 3;
  auVar13[10] = 3;
  auVar13[0xb] = 3;
  auVar13[0xc] = 3;
  auVar13[0xd] = 3;
  auVar13[0xe] = 3;
  auVar13[0xf] = 3;
  auVar31[0] = auVar60[0] & bVar30;
  auVar31[1] = auVar60[1] & bVar33;
  auVar31[2] = auVar60[2] & bVar34;
  auVar31[3] = auVar60[3] & bVar35;
  auVar31[4] = auVar60[4] & bVar36;
  auVar31[5] = auVar60[5] & bVar37;
  auVar31[6] = auVar60[6] & bVar38;
  auVar31[7] = auVar60[7] & bVar39;
  auVar31[8] = auVar60[8] & bVar40;
  auVar31[9] = auVar60[9] & bVar41;
  auVar31[10] = auVar60[10] & bVar42;
  auVar31[0xb] = auVar60[0xb] & bVar43;
  auVar31[0xc] = auVar60[0xc] & bVar44;
  auVar31[0xd] = auVar60[0xd] & bVar45;
  auVar31[0xe] = auVar60[0xe] & bVar46;
  auVar31[0xf] = auVar60[0xf] & bVar47;
  auVar59[8] = 4;
  auVar59._0_8_ = 0x404040404040404;
  auVar59[9] = 4;
  auVar59[10] = 4;
  auVar59[0xb] = 4;
  auVar59[0xc] = 4;
  auVar59[0xd] = 4;
  auVar59[0xe] = 4;
  auVar59[0xf] = 4;
  auVar58 = NEON_sqadd(auVar31,auVar13,1);
  auVar60 = NEON_sqadd(auVar31,auVar59,1);
  auVar14[0] = auVar58[0] >> 3;
  auVar14[1] = auVar58[1] >> 3;
  auVar14[2] = auVar58[2] >> 3;
  auVar14[3] = auVar58[3] >> 3;
  auVar14[4] = auVar58[4] >> 3;
  auVar14[5] = auVar58[5] >> 3;
  auVar14[6] = auVar58[6] >> 3;
  auVar14[7] = auVar58[7] >> 3;
  auVar14[8] = auVar58[8] >> 3;
  auVar14[9] = auVar58[9] >> 3;
  auVar14[10] = auVar58[10] >> 3;
  auVar14[0xb] = auVar58[0xb] >> 3;
  auVar14[0xc] = auVar58[0xc] >> 3;
  auVar14[0xd] = auVar58[0xd] >> 3;
  auVar14[0xe] = auVar58[0xe] >> 3;
  auVar14[0xf] = auVar58[0xf] >> 3;
  auVar32[0] = auVar60[0] >> 3;
  auVar32[1] = auVar60[1] >> 3;
  auVar32[2] = auVar60[2] >> 3;
  auVar32[3] = auVar60[3] >> 3;
  auVar32[4] = auVar60[4] >> 3;
  auVar32[5] = auVar60[5] >> 3;
  auVar32[6] = auVar60[6] >> 3;
  auVar32[7] = auVar60[7] >> 3;
  auVar32[8] = auVar60[8] >> 3;
  auVar32[9] = auVar60[9] >> 3;
  auVar32[10] = auVar60[10] >> 3;
  auVar32[0xb] = auVar60[0xb] >> 3;
  auVar32[0xc] = auVar60[0xc] >> 3;
  auVar32[0xd] = auVar60[0xd] >> 3;
  auVar32[0xe] = auVar60[0xe] >> 3;
  auVar32[0xf] = auVar60[0xf] >> 3;
  auVar52._8_8_ = auVar51._8_8_;
  auVar52._0_8_ = NEON_sqshrn(auVar51._0_8_,auVar51,7,2);
  auVar57._8_8_ = auVar56._8_8_;
  auVar57._0_8_ = NEON_sqshrn(auVar56._0_8_,auVar56,7,2);
  auVar50._8_8_ = auVar49._8_8_;
  auVar50._0_8_ = NEON_sqshrn(auVar49._0_8_,auVar49,7,2);
  auVar1._0_8_ = param_1._0_8_ ^ 0x8080808080808080;
  auVar1[8] = param_1[8] ^ 0x80;
  auVar1[9] = param_1[9] ^ 0x80;
  auVar1[10] = param_1[10] ^ 0x80;
  auVar1[0xb] = param_1[0xb] ^ 0x80;
  auVar1[0xc] = param_1[0xc] ^ 0x80;
  auVar1[0xd] = param_1[0xd] ^ 0x80;
  auVar1[0xe] = param_1[0xe] ^ 0x80;
  auVar1[0xf] = param_1[0xf] ^ 0x80;
  auVar9._0_8_ = param_6._0_8_ ^ 0x8080808080808080;
  auVar9[8] = param_6[8] ^ 0x80;
  auVar9[9] = param_6[9] ^ 0x80;
  auVar9[10] = param_6[10] ^ 0x80;
  auVar9[0xb] = param_6[0xb] ^ 0x80;
  auVar9[0xc] = param_6[0xc] ^ 0x80;
  auVar9[0xd] = param_6[0xd] ^ 0x80;
  auVar9[0xe] = param_6[0xe] ^ 0x80;
  auVar9[0xf] = param_6[0xf] ^ 0x80;
  auVar2 = NEON_sqadd(auVar53,auVar14,1);
  auVar5 = NEON_sqsub(auVar4,auVar32,1);
  auVar58._2_2_ = (char)bVar23 * 0x1b + 0x3f;
  auVar58._0_2_ = (char)bVar22 * 0x1b + 0x3f;
  auVar58._4_2_ = (char)bVar24 * 0x1b + 0x3f;
  auVar58._6_2_ = (char)bVar25 * 0x1b + 0x3f;
  auVar58._8_2_ = (char)bVar26 * 0x1b + 0x3f;
  auVar58._10_2_ = (char)bVar27 * 0x1b + 0x3f;
  auVar58._12_2_ = (char)bVar28 * 0x1b + 0x3f;
  auVar58._14_2_ = (char)bVar29 * 0x1b + 0x3f;
  auVar53 = NEON_sqshrn2(auVar52,auVar58,7,2);
  auVar60._2_2_ = (char)bVar23 * 0x12 + 0x3f;
  auVar60._0_2_ = (char)bVar22 * 0x12 + 0x3f;
  auVar60._4_2_ = (char)bVar24 * 0x12 + 0x3f;
  auVar60._6_2_ = (char)bVar25 * 0x12 + 0x3f;
  auVar60._8_2_ = (char)bVar26 * 0x12 + 0x3f;
  auVar60._10_2_ = (char)bVar27 * 0x12 + 0x3f;
  auVar60._12_2_ = (char)bVar28 * 0x12 + 0x3f;
  auVar60._14_2_ = (char)bVar29 * 0x12 + 0x3f;
  auVar60 = NEON_sqshrn2(auVar57,auVar60,7,2);
  auVar58 = NEON_sqshrn2(auVar50,auVar55,7,2);
  auVar2 = NEON_sqadd(auVar2,auVar53,1);
  auVar5 = NEON_sqsub(auVar5,auVar53,1);
  auVar53 = NEON_sqsub(auVar7,auVar60,1);
  auVar60 = NEON_sqadd(auVar10,auVar60,1);
  auVar10 = NEON_sqsub(auVar9,auVar58,1);
  auVar58 = NEON_sqadd(auVar1,auVar58,1);
  auVar3._0_8_ = auVar2._0_8_ ^ 0x8080808080808080;
  auVar3[8] = auVar2[8] ^ 0x80;
  auVar3[9] = auVar2[9] ^ 0x80;
  auVar3[10] = auVar2[10] ^ 0x80;
  auVar3[0xb] = auVar2[0xb] ^ 0x80;
  auVar3[0xc] = auVar2[0xc] ^ 0x80;
  auVar3[0xd] = auVar2[0xd] ^ 0x80;
  auVar3[0xe] = auVar2[0xe] ^ 0x80;
  auVar3[0xf] = auVar2[0xf] ^ 0x80;
  auVar6._0_8_ = auVar5._0_8_ ^ 0x8080808080808080;
  auVar6[8] = auVar5[8] ^ 0x80;
  auVar6[9] = auVar5[9] ^ 0x80;
  auVar6[10] = auVar5[10] ^ 0x80;
  auVar6[0xb] = auVar5[0xb] ^ 0x80;
  auVar6[0xc] = auVar5[0xc] ^ 0x80;
  auVar6[0xd] = auVar5[0xd] ^ 0x80;
  auVar6[0xe] = auVar5[0xe] ^ 0x80;
  auVar6[0xf] = auVar5[0xf] ^ 0x80;
  auVar8._0_8_ = auVar53._0_8_ ^ 0x8080808080808080;
  auVar8[8] = auVar53[8] ^ 0x80;
  auVar8[9] = auVar53[9] ^ 0x80;
  auVar8[10] = auVar53[10] ^ 0x80;
  auVar8[0xb] = auVar53[0xb] ^ 0x80;
  auVar8[0xc] = auVar53[0xc] ^ 0x80;
  auVar8[0xd] = auVar53[0xd] ^ 0x80;
  auVar8[0xe] = auVar53[0xe] ^ 0x80;
  auVar8[0xf] = auVar53[0xf] ^ 0x80;
  auVar5._0_8_ = auVar60._0_8_ ^ 0x8080808080808080;
  auVar5[8] = auVar60[8] ^ 0x80;
  auVar5[9] = auVar60[9] ^ 0x80;
  auVar5[10] = auVar60[10] ^ 0x80;
  auVar5[0xb] = auVar60[0xb] ^ 0x80;
  auVar5[0xc] = auVar60[0xc] ^ 0x80;
  auVar5[0xd] = auVar60[0xd] ^ 0x80;
  auVar5[0xe] = auVar60[0xe] ^ 0x80;
  auVar5[0xf] = auVar60[0xf] ^ 0x80;
  auVar11._0_8_ = auVar10._0_8_ ^ 0x8080808080808080;
  auVar11[8] = auVar10[8] ^ 0x80;
  auVar11[9] = auVar10[9] ^ 0x80;
  auVar11[10] = auVar10[10] ^ 0x80;
  auVar11[0xb] = auVar10[0xb] ^ 0x80;
  auVar11[0xc] = auVar10[0xc] ^ 0x80;
  auVar11[0xd] = auVar10[0xd] ^ 0x80;
  auVar11[0xe] = auVar10[0xe] ^ 0x80;
  auVar11[0xf] = auVar10[0xf] ^ 0x80;
  auVar2._0_8_ = auVar58._0_8_ ^ 0x8080808080808080;
  auVar2[8] = auVar58[8] ^ 0x80;
  auVar2[9] = auVar58[9] ^ 0x80;
  auVar2[10] = auVar58[10] ^ 0x80;
  auVar2[0xb] = auVar58[0xb] ^ 0x80;
  auVar2[0xc] = auVar58[0xc] ^ 0x80;
  auVar2[0xd] = auVar58[0xd] ^ 0x80;
  auVar2[0xe] = auVar58[0xe] ^ 0x80;
  auVar2[0xf] = auVar58[0xf] ^ 0x80;
  param_11[1] = auVar3._8_8_;
  *param_11 = auVar3._0_8_;
  param_12[1] = auVar6._8_8_;
  *param_12 = auVar6._0_8_;
  param_13[1] = auVar8._8_8_;
  *param_13 = auVar8._0_8_;
  param_10[1] = auVar5._8_8_;
  *param_10 = auVar5._0_8_;
  param_14[1] = auVar11._8_8_;
  *param_14 = auVar11._0_8_;
  param_9[1] = auVar2._8_8_;
  *param_9 = auVar2._0_8_;
  return;
}




void FUN_019ad254(int param_1,int param_2,uint param_3,long param_4,void *param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  void *__dest;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  float fVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  code *pcVar21;
  long lVar22;
  size_t __n;
  uint *puVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  void *pvVar29;
  int *piVar30;
  void *pvVar31;
  long lVar32;
  size_t sVar33;
  long lVar34;
  int iVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  long local_20c0;
  int aiStack_20a0 [256];
  int aiStack_1ca0 [256];
  int aiStack_18a0 [512];
  int local_10a0 [1024];
  long local_a0;
  
  lVar16 = tpidr_el0;
  local_a0 = *(long *)(lVar16 + 0x28);
  iVar7 = 1 << (ulong)(param_3 & 0x1f);
  iVar13 = iVar7 + -1;
  uVar10 = (uint)(iVar13 + param_2) >> (ulong)(param_3 & 0x1f);
  memset(aiStack_20a0,0,0x1000);
  if (0 < (int)uVar10) {
    __dest = (void *)((long)param_5 + (long)param_1 * 4);
    uVar11 = (uint)(iVar13 + param_1) >> (ulong)(param_3 & 0x1f);
    uVar27 = 0;
    __n = (long)param_1 * 4;
    do {
      iVar8 = (int)uVar27 << (ulong)(param_3 & 0x1f);
      iVar14 = param_2 - iVar8;
      iVar20 = iVar7;
      if ((long)(int)(uVar10 - 1) <= (long)uVar27) {
        iVar20 = iVar14;
      }
      if (uVar27 != 0) {
        memcpy(param_5,(void *)((long)__dest + (long)(iVar13 * param_1) * 4),__n);
      }
      memcpy(__dest,(void *)(param_4 + (long)(iVar8 * param_1) * 4),
             -(ulong)((uint)(iVar20 * param_1) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar20 * param_1) << 2);
      if (0 < (int)uVar11) {
        uVar25 = 0;
        if (iVar7 <= iVar14) {
          iVar14 = iVar7;
        }
        do {
          iVar9 = (int)uVar25 << (ulong)(param_3 & 0x1f);
          iVar20 = param_1 - iVar9;
          if (iVar7 <= param_1 - iVar9) {
            iVar20 = iVar7;
          }
          lVar26 = 0;
          pvVar31 = (void *)((long)param_5 + (long)iVar9 * 4);
          fVar40 = 1e+30;
          iVar28 = 0;
          do {
            pcVar21 = (code *)(&DAT_0321a7f0)[lVar26];
            memset(local_10a0,0,0x1000);
            if (0 < iVar14) {
              iVar35 = 0;
              pvVar29 = pvVar31;
              do {
                if (0 < iVar20) {
                  lVar34 = 0;
                  lVar32 = 0;
                  do {
                    if (iVar8 == -iVar35) {
                      if (-iVar9 == (int)lVar32) {
                        uVar19 = 0xff000000;
                      }
                      else {
                        uVar19 = *(uint *)((long)pvVar29 + lVar34 + __n + -4);
                      }
                    }
                    else if (-iVar9 == (int)lVar32) {
                      uVar19 = *(uint *)((long)pvVar29 + lVar32 * 4);
                    }
                    else {
                      uVar19 = (*pcVar21)(*(undefined4 *)((long)pvVar29 + lVar34 + __n + -4),
                                          (long)pvVar29 + lVar34);
                    }
                    uVar6 = *(uint *)((long)pvVar29 + lVar34 + __n);
                    lVar32 = lVar32 + 1;
                    uVar15 = (uVar6 | 0xff00ff) - (uVar19 & 0xff00ff00);
                    uVar12 = uVar15 >> 0x18;
                    uVar19 = (uVar6 | 0xff00) - (uVar19 & 0xff00ff);
                    local_10a0[uVar12] = local_10a0[uVar12] + 1;
                    uVar1 = (ulong)(uVar19 >> 0x10 & 0xff);
                    uVar2 = (ulong)(uVar15 >> 8 & 0xff);
                    uVar3 = (ulong)(uVar19 & 0xff);
                    local_10a0[uVar1 + 0x100] = local_10a0[uVar1 + 0x100] + 1;
                    lVar34 = lVar34 + 4;
                    local_10a0[uVar2 + 0x200] = local_10a0[uVar2 + 0x200] + 1;
                    local_10a0[uVar3 + 0x300] = local_10a0[uVar3 + 0x300] + 1;
                  } while (lVar32 < iVar20);
                }
                iVar35 = iVar35 + 1;
                pvVar29 = (void *)((long)pvVar29 + __n);
              } while (iVar35 < iVar14);
            }
            lVar32 = 0;
            fVar17 = 0.0;
            piVar30 = local_10a0;
            do {
              lVar22 = 0x3fc;
              dVar37 = (double)local_10a0[lVar32 * 0x100];
              lVar34 = 4;
              dVar38 = 0.94;
              do {
                piVar4 = (int *)((long)piVar30 + lVar34);
                piVar5 = (int *)((long)piVar30 + lVar22);
                lVar34 = lVar34 + 4;
                lVar22 = lVar22 + -4;
                dVar39 = dVar38 * (double)(*piVar5 + *piVar4);
                dVar38 = dVar38 * 0.6;
                dVar37 = dVar37 + dVar39;
              } while (lVar34 != 0x40);
              fVar36 = (float)FUN_019af18c(local_10a0 + lVar32 * 0x100,aiStack_20a0 + lVar32 * 0x100
                                          );
              lVar32 = lVar32 + 1;
              fVar17 = fVar17 + (float)(dVar37 * -0.1) + fVar36;
              piVar30 = piVar30 + 0x100;
            } while (lVar32 != 4);
            iVar35 = (int)lVar26;
            if (fVar40 <= fVar17) {
              iVar35 = iVar28;
              fVar17 = fVar40;
            }
            fVar40 = fVar17;
            lVar26 = lVar26 + 1;
            iVar28 = iVar35;
          } while (lVar26 != 0xe);
          iVar28 = param_1;
          if (iVar9 + iVar7 <= param_1) {
            iVar28 = iVar9 + iVar7;
          }
          *(uint *)(param_6 + (uVar25 + uVar27 * (long)(int)uVar11) * 4) = iVar35 << 8 | 0xff000000;
          if (0 < iVar14) {
            pcVar21 = (code *)(&DAT_0321a7f0)[iVar35];
            local_20c0 = 0;
            lVar26 = param_4 + (long)param_1 * (long)iVar8 * 4 + (long)iVar9 * 4;
            do {
              if (0 < iVar20) {
                lVar34 = 0;
                lVar32 = 0;
                sVar33 = __n;
                do {
                  bVar18 = -iVar9 != (int)lVar32;
                  if ((int)local_20c0 + iVar8 == 0) {
                    if (bVar18) {
                      uVar19 = *(uint *)((long)pvVar31 + (sVar33 - 4));
                    }
                    else {
                      uVar19 = 0xff000000;
                    }
                  }
                  else if (bVar18) {
                    uVar19 = (*pcVar21)(*(undefined4 *)((long)pvVar31 + (sVar33 - 4)),
                                        (long)pvVar31 + lVar34);
                  }
                  else {
                    uVar19 = *(uint *)((long)pvVar31 + lVar32 * 4);
                  }
                  puVar23 = (uint *)((long)pvVar31 + sVar33);
                  sVar33 = sVar33 + 4;
                  *(uint *)(lVar26 + lVar32 * 4) =
                       (*puVar23 | 0xff00ff) - (uVar19 & 0xff00ff00) & 0xff00ff00 |
                       (*puVar23 | 0xff00) - (uVar19 & 0xff00ff) & 0xff00ff;
                  lVar32 = lVar32 + 1;
                  lVar34 = lVar34 + 4;
                } while (lVar32 < iVar20);
              }
              local_20c0 = local_20c0 + 1;
              lVar26 = lVar26 + __n;
              pvVar31 = (void *)((long)pvVar31 + __n);
            } while (local_20c0 < iVar14);
          }
          if (param_3 != 0x1f) {
            iVar20 = 0;
            iVar35 = iVar8 * param_1 + iVar9;
            do {
              if (param_2 <= iVar20 + iVar8) break;
              if (iVar9 < iVar28) {
                puVar23 = (uint *)(param_4 + (long)iVar35 * 4);
                iVar24 = iVar9;
                do {
                  uVar19 = *puVar23;
                  iVar24 = iVar24 + 1;
                  aiStack_20a0[uVar19 >> 0x18] = aiStack_20a0[uVar19 >> 0x18] + 1;
                  uVar6 = uVar19 >> 0x10 & 0xff;
                  aiStack_1ca0[uVar6] = aiStack_1ca0[uVar6] + 1;
                  uVar6 = uVar19 >> 8 & 0xff;
                  aiStack_18a0[uVar6] = aiStack_18a0[uVar6] + 1;
                  local_10a0[(ulong)(byte)uVar19 - 0x100] =
                       local_10a0[(ulong)(byte)uVar19 - 0x100] + 1;
                  puVar23 = puVar23 + 1;
                } while (iVar24 < iVar28);
              }
              iVar20 = iVar20 + 1;
              iVar35 = iVar35 + param_1;
            } while (iVar20 < iVar7);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar11);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar10);
  }
  if (*(long *)(lVar16 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019ad894(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      uVar2 = uVar2 - 1;
      *param_1 = uVar1 & 0xff00ff00 | uVar1 - (uVar1 >> 8) & 0xff |
                 uVar1 + (uVar1 >> 8) * -0x10000 & 0xff0000;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_019ad8d0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      uVar3 = uVar3 - 1;
      uVar2 = uVar1 >> 8 & 0xff;
      *param_1 = (uVar2 | uVar2 << 0x10) + (uVar1 & 0xff00ff) & 0xff00ff | uVar1 & 0xff00ff00;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  return;
}




void FUN_019ad910(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  
  if (0 < (int)param_3) {
    cVar2 = *param_1;
    cVar3 = param_1[1];
    cVar4 = param_1[2];
    uVar6 = (ulong)param_3;
    do {
      uVar1 = *param_2;
      uVar6 = uVar6 - 1;
      iVar5 = (int)(uVar1 << 0x10) >> 0x18;
      *param_2 = uVar1 & 0xff000000 |
                 uVar1 & 0xff00 | ((uVar1 >> 0x10) - ((uint)(iVar5 * cVar2) >> 5) & 0xff) << 0x10 |
                 (uVar1 - ((uint)(iVar5 * cVar3) >> 5)) -
                 ((uint)(((int)(uVar1 << 8) >> 0x18) * (int)cVar4) >> 5) & 0xff;
      param_2 = param_2 + 1;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_019ad96c(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  
  if (0 < (int)param_3) {
    cVar3 = *param_1;
    cVar4 = param_1[1];
    cVar5 = param_1[2];
    uVar7 = (ulong)param_3;
    do {
      uVar2 = *param_2;
      uVar7 = uVar7 - 1;
      iVar6 = (int)(uVar2 << 0x10) >> 0x18;
      uVar1 = ((uint)(iVar6 * cVar3) >> 5) + (uVar2 >> 0x10);
      *param_2 = uVar2 & 0xff000000 | uVar2 & 0xff00 | (uVar1 & 0xff) << 0x10 |
                 uVar2 + ((uint)(iVar6 * cVar4) >> 5) + ((uint)((int)(char)uVar1 * (int)cVar5) >> 5)
                 & 0xff;
      param_2 = param_2 + 1;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_019ad9c8(uint param_1,int param_2,uint param_3,uint param_4,ulong param_5,long param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  bool bVar15;
  bool bVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  ulong uVar26;
  int *piVar27;
  uint uVar28;
  long lVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulong local_d30;
  ulong local_d28;
  ulong local_d20;
  ulong local_d18;
  undefined8 local_cf0;
  undefined8 local_cd0;
  int aiStack_ca0 [256];
  int aiStack_8a0 [256];
  undefined4 local_4a0;
  long local_a0;
  
  lVar14 = tpidr_el0;
  local_a0 = *(long *)(lVar14 + 0x28);
  uVar8 = 1 << (ulong)(param_3 & 0x1f);
  uVar28 = uVar8 - 1;
  uVar37 = (ulong)uVar28;
  uVar11 = uVar28 + param_2 >> (ulong)(param_3 & 0x1f);
  uVar33 = (ulong)param_4;
  memset(aiStack_8a0,0,0x400);
  memset(aiStack_ca0,0,0x400);
  if (0 < (int)uVar11) {
    lVar1 = (long)(int)param_1;
    uVar12 = uVar28 + param_1 >> (ulong)(param_3 & 0x1f);
    uVar28 = 8;
    if ((int)param_4 < 0x33) {
      uVar28 = 0x10;
    }
    fVar43 = 1e+30;
    uVar3 = 0x20;
    if (0x18 < (int)param_4) {
      uVar3 = uVar28;
    }
    uVar17 = 0;
    uVar21 = 0;
    uVar19 = 0;
    uVar31 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
    local_d30 = 0;
    local_d28 = 0;
    local_d20 = 0;
    local_d18 = 0;
    uVar38 = param_5;
    do {
      if (0 < (int)uVar12) {
        uVar32 = 0;
        iVar9 = (int)local_d30 << (ulong)(param_3 & 0x1f);
        iVar4 = param_2;
        if ((int)(iVar9 + uVar8) <= param_2) {
          iVar4 = iVar9 + uVar8;
        }
        uVar28 = param_2 - iVar9;
        if ((int)uVar8 <= param_2 - iVar9) {
          uVar28 = uVar8;
        }
        do {
          uVar10 = (int)uVar32 << (ulong)(param_3 & 0x1f);
          uVar5 = param_1;
          if ((int)(uVar10 + uVar8) <= (int)param_1) {
            uVar5 = uVar10 + uVar8;
          }
          lVar22 = uVar32 + local_d30 * (long)(int)uVar12;
          if (local_d30 != 0) {
            uVar34 = *(uint *)(param_6 + (lVar22 - (int)uVar12) * 4);
            local_d18 = (ulong)uVar34;
            local_d20 = (ulong)(uVar34 >> 8);
            local_d28 = (ulong)(uVar34 >> 0x10);
          }
          uVar26 = (local_d28 & 0xff) << 0x10 | (local_d20 & 0xff) << 8 | local_d18 & 0xff;
          bVar16 = true;
          uVar17 = uVar19 << 0x10 | uVar21 << 8 | uVar17 & 0xff;
          bVar15 = true;
          fVar39 = fVar43;
          fVar40 = fVar43;
          uVar6 = 0xffffffc0;
          uVar34 = 0x40;
          do {
            uVar23 = uVar34;
            uVar18 = uVar6;
            if (bVar15) {
              uVar38 = uVar38 & 0xffffffffff000000 | uVar17;
              uVar33 = uVar33 & 0xffffffffff000000 | uVar26;
              fVar39 = (float)FUN_019af2d8(uVar10,iVar9,uVar5,iVar4,param_1,uVar38,uVar33,uVar18,
                                           aiStack_8a0,param_5);
            }
            if (bVar16) {
              uVar37 = uVar37 & 0xffffffffff000000 | uVar17;
              local_cd0 = local_cd0 & 0xffffffffff000000 | uVar26;
              fVar40 = (float)FUN_019af2d8(uVar10,iVar9,uVar5,iVar4,param_1,uVar37,local_cd0,uVar23,
                                           aiStack_8a0,param_5);
            }
            iVar2 = uVar18 + uVar23;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            bVar16 = fVar39 < fVar40;
            uVar34 = iVar2 >> 1;
            uVar6 = uVar18;
            if (!bVar16) {
              uVar34 = uVar23;
              uVar6 = iVar2 >> 1;
            }
            bVar15 = !bVar16;
          } while (2 < (int)(uVar34 - uVar6));
          iVar2 = uVar10 + iVar9 * param_1;
          local_cf0 = 0;
          uVar34 = 0;
          if (uVar3 != 0) {
            uVar34 = 0x40 / uVar3;
          }
          uVar6 = ~param_1;
          if ((int)~param_1 <= (int)~(uVar8 + uVar10)) {
            uVar6 = ~(uVar8 + uVar10);
          }
          iVar30 = 0;
          uVar33 = (ulong)(~uVar10 - uVar6);
          iVar35 = ((uVar34 + 1) * (uVar34 + 1) >> 2) + 4;
          uVar37 = 0xffffffe0;
          fVar44 = fVar43;
          do {
            iVar36 = (int)uVar37;
            if (iVar30 < iVar35) {
              uVar34 = 0xffffffe0;
              local_cd0 = CONCAT44(local_cd0._4_4_,iVar36) & 0xffffffff000000f8;
              do {
                memset(&local_4a0,0,0x400);
                if (iVar9 < iVar4) {
                  iVar24 = iVar9;
                  iVar20 = iVar2;
                  do {
                    if ((int)uVar10 < (int)uVar5) {
                      piVar27 = (int *)(param_5 + (long)iVar20 * 4);
                      uVar38 = uVar33;
                      do {
                        iVar7 = *piVar27;
                        uVar13 = (int)uVar38 - 1;
                        uVar38 = (ulong)uVar13;
                        uVar6 = (iVar7 - ((uint)(((iVar7 << 0x10) >> 0x18) * (int)(char)uVar37) >> 5
                                         )) -
                                ((uint)(((iVar7 << 8) >> 0x18) * (int)(char)uVar34) >> 5) & 0xff;
                        (&local_4a0)[uVar6] = (&local_4a0)[uVar6] + 1;
                        piVar27 = piVar27 + 1;
                      } while (uVar13 != 0);
                    }
                    iVar24 = iVar24 + 1;
                    iVar20 = iVar20 + param_1;
                  } while (iVar24 != iVar4);
                }
                fVar41 = (float)FUN_019af410(aiStack_ca0,&local_4a0);
                fVar42 = fVar41 + -3.0;
                if ((uint)local_cd0 != ((uint)uVar17 >> 8 & 0xff)) {
                  fVar42 = fVar41;
                }
                fVar41 = fVar42 + -3.0;
                if ((uint)local_cd0 != ((uint)uVar26 >> 8 & 0xff)) {
                  fVar41 = fVar42;
                }
                fVar42 = fVar41 + -3.0;
                if ((uVar34 & 0xf8) != (uint)uVar17 >> 0x10) {
                  fVar42 = fVar41;
                }
                fVar41 = fVar42 + -3.0;
                if ((uVar34 & 0xf8) != (uint)uVar26 >> 0x10) {
                  fVar41 = fVar42;
                }
                fVar42 = fVar41 + -3.0;
                if (iVar36 != 0) {
                  fVar42 = fVar41;
                }
                fVar41 = fVar42 + -3.0;
                if (uVar34 != 0) {
                  fVar41 = fVar42;
                }
                if (fVar44 <= fVar41) {
                  iVar30 = iVar30 + 1;
                }
                else {
                  iVar30 = 0;
                  local_cf0 = CONCAT44(uVar34,iVar36);
                  fVar44 = fVar41;
                }
                uVar34 = uVar34 + uVar3;
              } while (((int)uVar34 < 0x21) && (iVar30 < iVar35));
            }
            uVar37 = (ulong)(iVar36 + uVar3);
          } while (((int)(iVar36 + uVar3) < 0x21) && (iVar30 < iVar35));
          if (fVar40 <= fVar39) {
            uVar18 = uVar23;
          }
          uVar17 = (ulong)uVar18;
          uVar34 = (local_cf0._4_4_ & 0xff) << 0x10 | ((uint)local_cf0 & 0xff) << 8 | uVar18 & 0xff;
          *(uint *)(param_6 + lVar22 * 4) = uVar34 | 0xff000000;
          local_4a0._2_1_ = (char)((ulong)local_cf0 >> 0x20);
          local_4a0._0_2_ = (short)uVar34;
          uVar34 = param_1 - uVar10;
          if ((int)uVar8 <= (int)(param_1 - uVar10)) {
            uVar34 = uVar8;
          }
          if (0 < (int)uVar28) {
            uVar37 = param_5 + (long)iVar2 * 4;
            iVar35 = uVar28 + 1;
            do {
              uVar33 = (ulong)uVar34;
              (*DAT_0321a8b8)(&local_4a0,uVar37,uVar34);
              iVar35 = iVar35 + -1;
              uVar37 = uVar37 + uVar31;
            } while (1 < iVar35);
          }
          if (iVar9 < iVar4) {
            lVar22 = (long)iVar9;
            do {
              iVar35 = uVar5 + (int)(lVar22 * (int)param_1);
              if (lVar22 * (int)param_1 + (long)(int)uVar10 < (long)iVar35) {
                puVar25 = (uint *)((param_5 - 4) + (long)iVar2 * 4);
                lVar29 = (long)iVar2;
                do {
                  uVar34 = puVar25[1];
                  if ((((lVar29 < 2) || (uVar34 != puVar25[-1])) || (uVar34 != *puVar25)) &&
                     (((lVar29 < (int)(param_1 + 2) || (puVar25[-1] != puVar25[-1 - lVar1])) ||
                      ((*puVar25 != puVar25[-lVar1] || (uVar34 != puVar25[1 - lVar1])))))) {
                    uVar6 = uVar34 >> 0x10 & 0xff;
                    iVar30 = aiStack_ca0[uVar34 & 0xff];
                    aiStack_8a0[uVar6] = aiStack_8a0[uVar6] + 1;
                    aiStack_ca0[uVar34 & 0xff] = iVar30 + 1;
                  }
                  lVar29 = lVar29 + 1;
                  puVar25 = puVar25 + 1;
                } while (lVar29 < iVar35);
              }
              lVar22 = lVar22 + 1;
              iVar2 = iVar2 + param_1;
            } while (lVar22 < iVar4);
          }
          uVar32 = uVar32 + 1;
          uVar19 = (ulong)(local_cf0._4_4_ & 0xff);
          uVar21 = (ulong)((uint)local_cf0 & 0xff);
          uVar38 = uVar31;
        } while (uVar32 != uVar12);
      }
      local_d30 = local_d30 + 1;
    } while (local_d30 != uVar11);
  }
  if (*(long *)(lVar14 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

