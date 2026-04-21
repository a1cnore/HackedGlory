// functions/01a46 — 1 functions
#include "libGameKindred.h"




void FUN_01a468b0(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  
  uVar53 = *param_1;
  uVar56 = param_1[1];
  uVar54 = param_1[2];
  uVar55 = param_1[3];
  uVar52 = param_1[4];
  do {
    uVar11 = uVar56 >> 2 | uVar56 << 0x1e;
    uVar12 = uVar53 >> 2 | uVar53 << 0x1e;
    uVar1 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar2 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar3 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar4 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar52 = uVar52 + 0x5a827999 + ((uVar54 ^ uVar55) & uVar56 ^ uVar55) +
             (uVar53 >> 0x1b | uVar53 << 5) + uVar3;
    uVar56 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    uVar5 = uVar56 >> 0x10 | uVar56 << 0x10;
    uVar56 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    uVar6 = uVar56 >> 0x10 | uVar56 << 0x10;
    uVar56 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
    uVar7 = uVar56 >> 0x10 | uVar56 << 0x10;
    uVar55 = uVar55 + 0x5a827999 + ((uVar11 ^ uVar54) & uVar53 ^ uVar54) + uVar4 +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar54 + 0x5a827999 + uVar5 + (uVar52 & (uVar12 ^ uVar11) ^ uVar11) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    uVar8 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar53 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar11 + 0x5a827999 + uVar8 + (uVar55 & (uVar56 ^ uVar12) ^ uVar12) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar13 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar12 + 0x5a827999 + uVar6 + (uVar52 & (uVar53 ^ uVar56) ^ uVar56) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar14 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar56 + 0x5a827999 + uVar1 + (uVar55 & (uVar13 ^ uVar53) ^ uVar53) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar54 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    uVar11 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar54 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
    uVar12 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar52 = uVar53 + 0x5a827999 + uVar11 + (uVar52 & (uVar14 ^ uVar13) ^ uVar13) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
    uVar9 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar53 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar13 + 0x5a827999 + uVar9 + (uVar55 & (uVar56 ^ uVar14) ^ uVar14) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar15 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar54 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
    uVar13 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar52 = uVar12 + 0x5a827999 + uVar14 + (uVar52 & (uVar53 ^ uVar56) ^ uVar56) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar16 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar13 + 0x5a827999 + uVar56 + (uVar55 & (uVar15 ^ uVar53) ^ uVar53) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar54 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
    uVar14 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar52 = uVar7 + 0x5a827999 + uVar53 + (uVar52 & (uVar16 ^ uVar15) ^ uVar15) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar17 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar54 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
    uVar10 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar55 = uVar2 + 0x5a827999 + uVar15 + (uVar55 & (uVar56 ^ uVar16) ^ uVar16) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar18 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar54 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
    uVar15 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar52 = uVar14 + 0x5a827999 + uVar16 + (uVar52 & (uVar17 ^ uVar56) ^ uVar56) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar19 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar54 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
    uVar16 = uVar54 >> 0x10 | uVar54 << 0x10;
    uVar55 = uVar10 + 0x5a827999 + uVar56 + (uVar55 & (uVar18 ^ uVar17) ^ uVar17) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar54 = uVar5 ^ uVar3 ^ uVar12 ^ uVar10;
    uVar56 = uVar8 ^ uVar4 ^ uVar13 ^ uVar15;
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar53 = uVar6 ^ uVar5 ^ uVar7 ^ uVar16;
    uVar4 = uVar54 >> 0x1f | uVar54 << 1;
    uVar5 = uVar56 >> 0x1f | uVar56 << 1;
    uVar52 = uVar15 + 0x5a827999 + uVar17 + (uVar52 & (uVar19 ^ uVar18) ^ uVar18) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar17 = uVar53 >> 0x1f | uVar53 << 1;
    uVar54 = uVar1 ^ uVar8 ^ uVar2 ^ uVar4;
    uVar56 = uVar11 ^ uVar6 ^ uVar14 ^ uVar5;
    uVar53 = uVar9 ^ uVar1 ^ uVar10 ^ uVar17;
    uVar6 = uVar54 >> 0x1f | uVar54 << 1;
    uVar8 = uVar56 >> 0x1f | uVar56 << 1;
    uVar20 = uVar53 >> 0x1f | uVar53 << 1;
    uVar54 = uVar12 ^ uVar11 ^ uVar15 ^ uVar6;
    uVar56 = uVar13 ^ uVar9 ^ uVar16 ^ uVar8;
    uVar11 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar53 = uVar7 ^ uVar12 ^ uVar4 ^ uVar20;
    uVar12 = uVar54 >> 0x1f | uVar54 << 1;
    uVar9 = uVar56 >> 0x1f | uVar56 << 1;
    uVar55 = uVar16 + 0x5a827999 + uVar18 + (uVar55 & (uVar3 ^ uVar19) ^ uVar19) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar18 = uVar53 >> 0x1f | uVar53 << 1;
    uVar54 = uVar2 ^ uVar13 ^ uVar5 ^ uVar12;
    uVar56 = uVar14 ^ uVar7 ^ uVar17 ^ uVar9;
    uVar7 = uVar54 >> 0x1f | uVar54 << 1;
    uVar13 = uVar56 >> 0x1f | uVar56 << 1;
    uVar21 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar4 + 0x5a827999 + uVar19 + (uVar52 & (uVar11 ^ uVar3) ^ uVar3) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar10 ^ uVar2 ^ uVar6 ^ uVar18;
    uVar19 = uVar54 >> 0x1f | uVar54 << 1;
    uVar54 = uVar15 ^ uVar14 ^ uVar8 ^ uVar7;
    uVar56 = uVar16 ^ uVar10 ^ uVar20 ^ uVar13;
    uVar53 = uVar4 ^ uVar15 ^ uVar12 ^ uVar19;
    uVar14 = uVar54 >> 0x1f | uVar54 << 1;
    uVar10 = uVar56 >> 0x1f | uVar56 << 1;
    uVar15 = uVar53 >> 0x1f | uVar53 << 1;
    uVar2 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar5 + 0x5a827999 + uVar3 + (uVar55 & (uVar21 ^ uVar11) ^ uVar11) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar5 ^ uVar16 ^ uVar9 ^ uVar14;
    uVar53 = uVar17 ^ uVar4 ^ uVar18 ^ uVar10;
    uVar1 = uVar6 ^ uVar5 ^ uVar7 ^ uVar15;
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar17 + 0x5a827999 + uVar11 + (uVar52 & (uVar2 ^ uVar21) ^ uVar21) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar6 + 0x5a827999 + uVar21 + (uVar55 & (uVar3 ^ uVar2) ^ uVar2) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar4 = uVar56 >> 0x1f | uVar56 << 1;
    uVar5 = uVar53 >> 0x1f | uVar53 << 1;
    uVar11 = uVar1 >> 0x1f | uVar1 << 1;
    uVar56 = uVar8 ^ uVar17 ^ uVar13 ^ uVar4;
    uVar53 = uVar20 ^ uVar6 ^ uVar19 ^ uVar5;
    uVar6 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar16 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar8 + 0x6ed9eba1 + uVar2 + (uVar6 ^ uVar3 ^ uVar52) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar55 = uVar20 + 0x6ed9eba1 + uVar3 + (uVar16 ^ uVar6 ^ uVar54) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar1 = uVar12 ^ uVar8 ^ uVar14 ^ uVar11;
    uVar54 = uVar12 + 0x6ed9eba1 + uVar6 + (uVar3 ^ uVar16 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar6 = uVar56 >> 0x1f | uVar56 << 1;
    uVar8 = uVar53 >> 0x1f | uVar53 << 1;
    uVar1 = uVar1 >> 0x1f | uVar1 << 1;
    uVar17 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar56 = uVar9 ^ uVar20 ^ uVar10 ^ uVar6;
    uVar53 = uVar18 ^ uVar12 ^ uVar15 ^ uVar8;
    uVar52 = uVar9 + 0x6ed9eba1 + uVar16 + (uVar17 ^ uVar3 ^ uVar55) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar12 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar7 ^ uVar9 ^ uVar4 ^ uVar1;
    uVar9 = uVar56 >> 0x1f | uVar56 << 1;
    uVar16 = uVar53 >> 0x1f | uVar53 << 1;
    uVar20 = uVar55 >> 0x1f | uVar55 << 1;
    uVar55 = uVar13 ^ uVar18 ^ uVar5 ^ uVar9;
    uVar56 = uVar19 ^ uVar7 ^ uVar11 ^ uVar16;
    uVar53 = uVar14 ^ uVar13 ^ uVar6 ^ uVar20;
    uVar21 = uVar55 >> 0x1f | uVar55 << 1;
    uVar22 = uVar56 >> 0x1f | uVar56 << 1;
    uVar23 = uVar53 >> 0x1f | uVar53 << 1;
    uVar55 = uVar10 ^ uVar19 ^ uVar8 ^ uVar21;
    uVar56 = uVar15 ^ uVar14 ^ uVar1 ^ uVar22;
    uVar53 = uVar4 ^ uVar10 ^ uVar9 ^ uVar23;
    uVar24 = uVar55 >> 0x1f | uVar55 << 1;
    uVar25 = uVar56 >> 0x1f | uVar56 << 1;
    uVar26 = uVar53 >> 0x1f | uVar53 << 1;
    uVar55 = uVar5 ^ uVar15 ^ uVar16 ^ uVar24;
    uVar56 = uVar6 ^ uVar5 ^ uVar21 ^ uVar26;
    uVar53 = uVar11 ^ uVar4 ^ uVar20 ^ uVar25;
    uVar27 = uVar55 >> 0x1f | uVar55 << 1;
    uVar28 = uVar56 >> 0x1f | uVar56 << 1;
    uVar29 = uVar53 >> 0x1f | uVar53 << 1;
    uVar55 = uVar8 ^ uVar11 ^ uVar22 ^ uVar27;
    uVar56 = uVar1 ^ uVar6 ^ uVar23 ^ uVar29;
    uVar53 = uVar9 ^ uVar8 ^ uVar24 ^ uVar28;
    uVar30 = uVar55 >> 0x1f | uVar55 << 1;
    uVar31 = uVar56 >> 0x1f | uVar56 << 1;
    uVar32 = uVar53 >> 0x1f | uVar53 << 1;
    uVar55 = uVar16 ^ uVar1 ^ uVar25 ^ uVar30;
    uVar56 = uVar20 ^ uVar9 ^ uVar26 ^ uVar31;
    uVar53 = uVar21 ^ uVar16 ^ uVar27 ^ uVar32;
    uVar33 = uVar55 >> 0x1f | uVar55 << 1;
    uVar34 = uVar56 >> 0x1f | uVar56 << 1;
    uVar35 = uVar53 >> 0x1f | uVar53 << 1;
    uVar55 = uVar22 ^ uVar20 ^ uVar29 ^ uVar33;
    uVar56 = uVar23 ^ uVar21 ^ uVar28 ^ uVar34;
    uVar53 = uVar24 ^ uVar22 ^ uVar30 ^ uVar35;
    uVar36 = uVar55 >> 0x1f | uVar55 << 1;
    uVar37 = uVar56 >> 0x1f | uVar56 << 1;
    uVar38 = uVar53 >> 0x1f | uVar53 << 1;
    uVar55 = uVar25 ^ uVar23 ^ uVar31 ^ uVar36;
    uVar56 = uVar26 ^ uVar24 ^ uVar32 ^ uVar37;
    uVar53 = uVar27 ^ uVar25 ^ uVar33 ^ uVar38;
    uVar39 = uVar55 >> 0x1f | uVar55 << 1;
    uVar40 = uVar56 >> 0x1f | uVar56 << 1;
    uVar55 = uVar29 ^ uVar26 ^ uVar34 ^ uVar39;
    uVar56 = uVar28 ^ uVar27 ^ uVar35 ^ uVar40;
    uVar41 = uVar53 >> 0x1f | uVar53 << 1;
    uVar42 = uVar55 >> 0x1f | uVar55 << 1;
    uVar43 = uVar56 >> 0x1f | uVar56 << 1;
    uVar55 = uVar30 ^ uVar29 ^ uVar36 ^ uVar41;
    uVar56 = uVar31 ^ uVar28 ^ uVar37 ^ uVar42;
    uVar53 = uVar32 ^ uVar30 ^ uVar38 ^ uVar43;
    uVar44 = uVar55 >> 0x1f | uVar55 << 1;
    uVar45 = uVar56 >> 0x1f | uVar56 << 1;
    uVar53 = uVar53 >> 0x1f | uVar53 << 1;
    uVar55 = uVar34 ^ uVar32 ^ uVar40 ^ uVar45;
    uVar56 = uVar35 ^ uVar33 ^ uVar41 ^ uVar53;
    uVar46 = uVar55 >> 0x1f | uVar55 << 1;
    uVar47 = uVar56 >> 0x1f | uVar56 << 1;
    uVar55 = uVar37 ^ uVar35 ^ uVar43 ^ uVar46;
    uVar56 = uVar38 ^ uVar36 ^ uVar44 ^ uVar47;
    uVar48 = uVar55 >> 0x1f | uVar55 << 1;
    uVar49 = uVar56 >> 0x1f | uVar56 << 1;
    uVar55 = uVar40 ^ uVar38 ^ uVar53 ^ uVar48;
    uVar50 = uVar55 >> 0x1f | uVar55 << 1;
    uVar55 = uVar43 ^ uVar41 ^ uVar47 ^ uVar50;
    uVar51 = uVar55 >> 0x1f | uVar55 << 1;
    uVar2 = uVar53 ^ uVar44 ^ uVar49 ^ uVar51;
    uVar56 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar55 = uVar18 + 0x6ed9eba1 + uVar3 + (uVar12 ^ uVar17 ^ uVar54) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar54 = uVar7 + 0x6ed9eba1 + uVar17 + (uVar56 ^ uVar12 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar13 + 0x6ed9eba1 + uVar12 + (uVar3 ^ uVar56 ^ uVar55) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar7 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar19 + 0x6ed9eba1 + uVar56 + (uVar7 ^ uVar3 ^ uVar54) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar54 = uVar14 + 0x6ed9eba1 + uVar3 + (uVar56 ^ uVar7 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar10 + 0x6ed9eba1 + uVar7 + (uVar3 ^ uVar56 ^ uVar55) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar7 = uVar55 >> 2 | uVar55 * 0x40000000;
    param_3 = param_3 + -1;
    uVar55 = uVar15 + 0x6ed9eba1 + uVar56 + (uVar7 ^ uVar3 ^ uVar54) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar54 = uVar4 + 0x6ed9eba1 + uVar3 + (uVar56 ^ uVar7 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar5 + 0x6ed9eba1 + uVar7 + (uVar3 ^ uVar56 ^ uVar55) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar4 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar11 + 0x6ed9eba1 + uVar56 + (uVar4 ^ uVar3 ^ uVar54) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar54 = uVar6 + 0x6ed9eba1 + uVar3 + (uVar56 ^ uVar4 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar8 + 0x6ed9eba1 + uVar4 + (uVar3 ^ uVar56 ^ uVar55) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar4 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar1 + 0x6ed9eba1 + uVar56 + (uVar4 ^ uVar3 ^ uVar54) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar54 = uVar9 + 0x6ed9eba1 + uVar3 + (uVar56 ^ uVar4 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar1 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar16 + 0x6ed9eba1 + uVar4 + (uVar1 ^ uVar56 ^ uVar55) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar3 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar20 + 0x6ed9eba1 + uVar56 + (uVar3 ^ uVar1 ^ uVar54) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar54 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar21 + 0x8f1bbcdc + uVar1 + ((uVar52 | uVar54) & uVar3 | uVar52 & uVar54) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar1 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar22 + 0x8f1bbcdc + uVar3 + ((uVar55 | uVar56) & uVar54 | uVar55 & uVar56) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar23 + 0x8f1bbcdc + uVar54 + ((uVar52 | uVar1) & uVar56 | uVar52 & uVar1) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar24 + 0x8f1bbcdc + uVar56 + ((uVar55 | uVar3) & uVar1 | uVar55 & uVar3) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar25 + 0x8f1bbcdc + uVar1 + ((uVar52 | uVar54) & uVar3 | uVar52 & uVar54) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar1 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar26 + 0x8f1bbcdc + uVar3 + ((uVar55 | uVar56) & uVar54 | uVar55 & uVar56) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar27 + 0x8f1bbcdc + uVar54 + ((uVar52 | uVar1) & uVar56 | uVar52 & uVar1) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar29 + 0x8f1bbcdc + uVar56 + ((uVar55 | uVar3) & uVar1 | uVar55 & uVar3) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar28 + 0x8f1bbcdc + uVar1 + ((uVar52 | uVar54) & uVar3 | uVar52 & uVar54) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar1 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar30 + 0x8f1bbcdc + uVar3 + ((uVar55 | uVar56) & uVar54 | uVar55 & uVar56) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar31 + 0x8f1bbcdc + uVar54 + ((uVar52 | uVar1) & uVar56 | uVar52 & uVar1) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar32 + 0x8f1bbcdc + uVar56 + ((uVar55 | uVar3) & uVar1 | uVar55 & uVar3) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar33 + 0x8f1bbcdc + uVar1 + ((uVar52 | uVar54) & uVar3 | uVar52 & uVar54) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar1 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar34 + 0x8f1bbcdc + uVar3 + ((uVar55 | uVar56) & uVar54 | uVar55 & uVar56) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar35 + 0x8f1bbcdc + uVar54 + ((uVar52 | uVar1) & uVar56 | uVar52 & uVar1) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar36 + 0x8f1bbcdc + uVar56 + ((uVar55 | uVar3) & uVar1 | uVar55 & uVar3) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar37 + 0x8f1bbcdc + uVar1 + ((uVar52 | uVar54) & uVar3 | uVar52 & uVar54) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar1 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar38 + 0x8f1bbcdc + uVar3 + ((uVar55 | uVar56) & uVar54 | uVar55 & uVar56) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar39 + 0x8f1bbcdc + uVar54 + ((uVar52 | uVar1) & uVar56 | uVar52 & uVar1) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar40 + 0x8f1bbcdc + uVar56 + ((uVar55 | uVar3) & uVar1 | uVar55 & uVar3) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar55 = uVar41 + 0xca62c1d6 + uVar1 + (uVar56 ^ uVar3 ^ uVar52) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar1 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar52 = uVar42 + 0xca62c1d6 + uVar3 + (uVar1 ^ uVar56 ^ uVar54) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar3 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar4 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar54 = uVar33 ^ uVar31 ^ uVar39 ^ uVar44;
    uVar5 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar55 = uVar43 + 0xca62c1d6 + uVar56 + (uVar3 ^ uVar1 ^ uVar55) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar56 = uVar54 >> 0x1f | uVar54 << 1;
    uVar54 = uVar36 ^ uVar34 ^ uVar42 ^ uVar56;
    uVar6 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar52 = uVar44 + 0xca62c1d6 + uVar1 + (uVar4 ^ uVar3 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar1 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar55 = uVar45 + 0xca62c1d6 + uVar3 + (uVar5 ^ uVar4 ^ uVar55) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar7 = uVar54 >> 0x1f | uVar54 << 1;
    uVar52 = uVar53 + 0xca62c1d6 + uVar4 + (uVar6 ^ uVar5 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar54 = uVar39 ^ uVar37 ^ uVar45 ^ uVar7;
    uVar53 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar55 = uVar56 + 0xca62c1d6 + uVar5 + (uVar1 ^ uVar6 ^ uVar55) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar4 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar52 = uVar46 + 0xca62c1d6 + uVar6 + (uVar3 ^ uVar1 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar56 = uVar41 ^ uVar39 ^ uVar56 ^ uVar49;
    uVar5 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar6 = uVar54 >> 0x1f | uVar54 << 1;
    uVar55 = uVar47 + 0xca62c1d6 + uVar1 + (uVar53 ^ uVar3 ^ uVar55) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar54 = uVar42 ^ uVar40 ^ uVar46 ^ uVar6;
    uVar8 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar52 = uVar7 + 0xca62c1d6 + uVar3 + (uVar4 ^ uVar53 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar3 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar56 = uVar56 >> 0x1f | uVar56 << 1;
    uVar55 = uVar48 + 0xca62c1d6 + uVar53 + (uVar5 ^ uVar4 ^ uVar55) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar54 = uVar54 >> 0x1f | uVar54 << 1;
    uVar53 = uVar44 ^ uVar42 ^ uVar7 ^ uVar56;
    uVar7 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar1 = uVar45 ^ uVar43 ^ uVar48 ^ uVar54;
    uVar52 = uVar49 + 0xca62c1d6 + uVar4 + (uVar8 ^ uVar5 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar4 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar55 = uVar6 + 0xca62c1d6 + uVar5 + (uVar3 ^ uVar8 ^ uVar55) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar5 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar52 = uVar50 + 0xca62c1d6 + uVar8 + (uVar7 ^ uVar3 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar6 = uVar52 >> 2 | uVar52 * 0x40000000;
    uVar55 = uVar56 + 0xca62c1d6 + uVar3 + (uVar4 ^ uVar7 ^ uVar55) +
             (uVar52 >> 0x1b | uVar52 * 0x20);
    uVar3 = uVar55 >> 2 | uVar55 * 0x40000000;
    uVar54 = uVar54 + 0xca62c1d6 + uVar7 + (uVar5 ^ uVar4 ^ uVar52) +
             (uVar55 >> 0x1b | uVar55 * 0x20);
    uVar7 = uVar54 >> 2 | uVar54 * 0x40000000;
    uVar56 = uVar51 + 0xca62c1d6 + uVar4 + (uVar6 ^ uVar5 ^ uVar55) +
             (uVar54 >> 0x1b | uVar54 * 0x20);
    uVar4 = uVar56 >> 2 | uVar56 * 0x40000000;
    uVar52 = uVar7 + param_1[4];
    uVar53 = (uVar53 >> 0x1f | uVar53 << 1) + 0xca62c1d6 + uVar5 + (uVar3 ^ uVar6 ^ uVar54) +
             (uVar56 >> 0x1b | uVar56 * 0x20);
    uVar55 = uVar4 + param_1[3];
    param_1[3] = uVar55;
    param_1[4] = uVar52;
    uVar1 = (uVar1 >> 0x1f | uVar1 << 1) + 0xca62c1d6 + uVar6 + (uVar7 ^ uVar3 ^ uVar56) +
            (uVar53 >> 0x1b | uVar53 * 0x20);
    uVar54 = (uVar53 >> 2 | uVar53 * 0x40000000) + param_1[2];
    uVar56 = uVar1 + param_1[1];
    uVar53 = *param_1 + 0xca62c1d6 + (uVar2 >> 0x1f | uVar2 << 1) + uVar3 + (uVar4 ^ uVar7 ^ uVar53)
             + (uVar1 >> 0x1b | uVar1 * 0x20);
    param_2 = param_2 + 0x10;
    param_1[1] = uVar56;
    param_1[2] = uVar54;
    *param_1 = uVar53;
  } while (param_3 != 0);
  return;
}

