// functions/01b01 — 1 functions
#include "libGameKindred.h"




void FUN_01b01c58(uint *param_1,uint *param_2,long param_3)

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
  uint uVar40;
  uint uVar41;
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
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar39;
  uint uVar42;
  
  uVar62 = *param_1;
  uVar65 = param_1[1];
  uVar63 = param_1[2];
  uVar64 = param_1[3];
  uVar61 = param_1[4];
  do {
    uVar52 = uVar65 >> 2 | uVar65 << 0x1e;
    uVar53 = uVar62 >> 2 | uVar62 << 0x1e;
    uVar38 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
    uVar39 = uVar38 >> 0x10 | uVar38 << 0x10;
    uVar38 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar38 = uVar38 >> 0x10 | uVar38 << 0x10;
    uVar40 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    uVar40 = uVar40 >> 0x10 | uVar40 << 0x10;
    uVar61 = uVar61 + 0x5a827999 + ((uVar63 ^ uVar64) & uVar65 ^ uVar64) +
             (uVar62 >> 0x1b | uVar62 << 5) + uVar38;
    uVar65 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    uVar65 = uVar65 >> 0x10 | uVar65 << 0x10;
    uVar41 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    uVar42 = uVar41 >> 0x10 | uVar41 << 0x10;
    uVar41 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
    uVar43 = uVar41 >> 0x10 | uVar41 << 0x10;
    uVar64 = uVar64 + 0x5a827999 + ((uVar52 ^ uVar63) & uVar62 ^ uVar63) + uVar40 +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar63 + 0x5a827999 + uVar65 + (uVar61 & (uVar53 ^ uVar52) ^ uVar52) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    uVar41 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar54 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar52 + 0x5a827999 + uVar41 + (uVar64 & (uVar62 ^ uVar53) ^ uVar53) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar63 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    uVar52 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    uVar44 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
    uVar45 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
    uVar46 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
    uVar47 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
    uVar48 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
    uVar49 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
    uVar50 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar63 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
    uVar51 = uVar63 >> 0x10 | uVar63 << 0x10;
    uVar55 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar53 + 0x5a827999 + uVar42 + (uVar61 & (uVar54 ^ uVar62) ^ uVar62) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar53 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar62 + 0x5a827999 + uVar52 + (uVar64 & (uVar55 ^ uVar54) ^ uVar54) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar63 = uVar65 ^ uVar38 ^ uVar46 ^ uVar50;
    uVar62 = uVar41 ^ uVar40 ^ uVar47 ^ uVar51;
    uVar56 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar54 + 0x5a827999 + uVar44 + (uVar61 & (uVar53 ^ uVar55) ^ uVar55) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar65 = uVar42 ^ uVar65 ^ uVar43 ^ uVar39;
    uVar54 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar55 + 0x5a827999 + uVar45 + (uVar64 & (uVar56 ^ uVar53) ^ uVar53) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar38 = uVar52 ^ uVar41 ^ uVar48 ^ uVar63;
    uVar40 = uVar45 ^ uVar52 ^ uVar50 ^ uVar65;
    uVar41 = uVar43 ^ uVar46 ^ uVar63 ^ uVar40;
    uVar55 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar46 + 0x5a827999 + uVar53 + (uVar61 & (uVar54 ^ uVar56) ^ uVar56) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar42 = uVar44 ^ uVar42 ^ uVar49 ^ uVar62;
    uVar52 = uVar46 ^ uVar44 ^ uVar51 ^ uVar38;
    uVar46 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar47 + 0x5a827999 + uVar56 + (uVar64 & (uVar55 ^ uVar54) ^ uVar54) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar44 = uVar47 ^ uVar45 ^ uVar39 ^ uVar42;
    uVar45 = uVar50 ^ uVar48 ^ uVar38 ^ uVar41;
    uVar57 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar43 + 0x5a827999 + uVar54 + (uVar61 & (uVar46 ^ uVar55) ^ uVar55) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar58 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar48 + 0x5a827999 + uVar55 + (uVar64 & (uVar57 ^ uVar46) ^ uVar46) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar59 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar49 + 0x5a827999 + uVar46 + (uVar61 & (uVar58 ^ uVar57) ^ uVar57) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar46 = uVar48 ^ uVar47 ^ uVar62 ^ uVar52;
    uVar43 = uVar49 ^ uVar43 ^ uVar65 ^ uVar44;
    uVar47 = uVar51 ^ uVar49 ^ uVar42 ^ uVar46;
    uVar48 = uVar39 ^ uVar50 ^ uVar40 ^ uVar43;
    uVar49 = uVar51 ^ uVar63 ^ uVar52 ^ uVar45;
    uVar53 = uVar39 ^ uVar62 ^ uVar44 ^ uVar47;
    uVar54 = uVar65 ^ uVar63 ^ uVar41 ^ uVar48;
    uVar55 = uVar62 ^ uVar38 ^ uVar46 ^ uVar49;
    uVar56 = uVar65 ^ uVar42 ^ uVar43 ^ uVar53;
    uVar1 = uVar40 ^ uVar38 ^ uVar45 ^ uVar54;
    uVar2 = uVar42 ^ uVar52 ^ uVar47 ^ uVar55;
    uVar3 = uVar41 ^ uVar52 ^ uVar49 ^ uVar1;
    uVar4 = uVar44 ^ uVar46 ^ uVar53 ^ uVar2;
    uVar5 = uVar40 ^ uVar44 ^ uVar48 ^ uVar56;
    uVar6 = uVar43 ^ uVar47 ^ uVar56 ^ uVar4;
    uVar7 = uVar41 ^ uVar43 ^ uVar54 ^ uVar5;
    uVar8 = uVar48 ^ uVar53 ^ uVar5 ^ uVar6;
    uVar9 = uVar45 ^ uVar46 ^ uVar55 ^ uVar3;
    uVar10 = uVar45 ^ uVar48 ^ uVar1 ^ uVar7;
    uVar11 = uVar54 ^ uVar56 ^ uVar7 ^ uVar8;
    uVar12 = uVar49 ^ uVar47 ^ uVar2 ^ uVar9;
    uVar13 = uVar49 ^ uVar54 ^ uVar3 ^ uVar10;
    uVar14 = uVar55 ^ uVar53 ^ uVar4 ^ uVar12;
    uVar15 = uVar1 ^ uVar5 ^ uVar10 ^ uVar11;
    uVar16 = uVar2 ^ uVar56 ^ uVar6 ^ uVar14;
    uVar17 = uVar55 ^ uVar1 ^ uVar9 ^ uVar13;
    uVar18 = uVar3 ^ uVar7 ^ uVar13 ^ uVar15;
    uVar19 = uVar2 ^ uVar3 ^ uVar12 ^ uVar17;
    uVar20 = uVar9 ^ uVar10 ^ uVar17 ^ uVar18;
    uVar21 = uVar4 ^ uVar5 ^ uVar8 ^ uVar16;
    uVar22 = uVar4 ^ uVar9 ^ uVar14 ^ uVar19;
    uVar23 = uVar6 ^ uVar7 ^ uVar11 ^ uVar21;
    uVar24 = uVar12 ^ uVar13 ^ uVar19 ^ uVar20;
    uVar25 = uVar6 ^ uVar12 ^ uVar16 ^ uVar22;
    uVar26 = uVar8 ^ uVar10 ^ uVar15 ^ uVar23;
    uVar27 = uVar8 ^ uVar14 ^ uVar21 ^ uVar25;
    uVar28 = uVar11 ^ uVar13 ^ uVar18 ^ uVar26;
    uVar29 = uVar14 ^ uVar17 ^ uVar22 ^ uVar24;
    uVar30 = uVar11 ^ uVar16 ^ uVar23 ^ uVar27;
    uVar31 = uVar15 ^ uVar17 ^ uVar20 ^ uVar28;
    uVar32 = uVar15 ^ uVar21 ^ uVar26 ^ uVar30;
    uVar33 = uVar18 ^ uVar19 ^ uVar24 ^ uVar31;
    uVar34 = uVar18 ^ uVar23 ^ uVar28 ^ uVar32;
    uVar35 = uVar20 ^ uVar22 ^ uVar29 ^ uVar33;
    uVar36 = uVar20 ^ uVar26 ^ uVar31 ^ uVar34;
    uVar37 = uVar24 ^ uVar28 ^ uVar33 ^ uVar36;
    uVar60 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar50 + 0x5a827999 + uVar57 + (uVar64 & (uVar59 ^ uVar58) ^ uVar58) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar50 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar51 + 0x5a827999 + uVar58 + (uVar61 & (uVar60 ^ uVar59) ^ uVar59) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar51 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar39 + 0x5a827999 + uVar59 + (uVar64 & (uVar50 ^ uVar60) ^ uVar60) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar39 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar63 + 0x5a827999 + uVar60 + (uVar61 & (uVar51 ^ uVar50) ^ uVar50) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = uVar62 + 0x5a827999 + uVar50 + (uVar64 & (uVar39 ^ uVar51) ^ uVar51) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar50 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar65 + 0x5a827999 + uVar51 + (uVar61 & (uVar62 ^ uVar39) ^ uVar39) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar64 = uVar38 + 0x5a827999 + uVar39 + (uVar63 & (uVar50 ^ uVar62) ^ uVar62) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar65 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar63 = uVar42 + 0x6ed9eba1 + uVar62 + (uVar65 ^ uVar50 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar62 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar40 + 0x6ed9eba1 + uVar50 + (uVar62 ^ uVar65 ^ uVar64) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar38 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar52 + 0x6ed9eba1 + uVar65 + (uVar38 ^ uVar62 ^ uVar63) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar65 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar40 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar44 + 0x6ed9eba1 + uVar62 + (uVar65 ^ uVar38 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = uVar41 + 0x6ed9eba1 + uVar38 + (uVar40 ^ uVar65 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar46 + 0x6ed9eba1 + uVar65 + (uVar62 ^ uVar40 ^ uVar61) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar38 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar61 = uVar43 + 0x6ed9eba1 + uVar40 + (uVar65 ^ uVar62 ^ uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = uVar45 + 0x6ed9eba1 + uVar62 + (uVar38 ^ uVar65 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar47 + 0x6ed9eba1 + uVar65 + (uVar62 ^ uVar38 ^ uVar61) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar48 + 0x6ed9eba1 + uVar38 + (uVar65 ^ uVar62 ^ uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar38 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar63 = uVar49 + 0x6ed9eba1 + uVar62 + (uVar38 ^ uVar65 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar53 + 0x6ed9eba1 + uVar65 + (uVar62 ^ uVar38 ^ uVar61) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar54 + 0x6ed9eba1 + uVar38 + (uVar65 ^ uVar62 ^ uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar38 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar63 = uVar55 + 0x6ed9eba1 + uVar62 + (uVar38 ^ uVar65 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar56 + 0x6ed9eba1 + uVar65 + (uVar62 ^ uVar38 ^ uVar61) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar1 + 0x6ed9eba1 + uVar38 + (uVar65 ^ uVar62 ^ uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar38 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar63 = uVar2 + 0x6ed9eba1 + uVar62 + (uVar38 ^ uVar65 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar5 + 0x6ed9eba1 + uVar65 + (uVar62 ^ uVar38 ^ uVar61) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar3 + 0x6ed9eba1 + uVar38 + (uVar65 ^ uVar62 ^ uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar38 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar63 = uVar4 + 0x6ed9eba1 + uVar62 + (uVar38 ^ uVar65 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar40 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar7 + 0x8f1bbcdc + uVar65 + ((uVar61 | uVar62) & uVar38 | uVar61 & uVar62) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar64 = uVar9 + 0x8f1bbcdc + uVar38 + ((uVar63 | uVar40) & uVar62 | uVar63 & uVar40) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar65 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar38 = uVar61 >> 2 | uVar61 * 0x40000000;
    param_3 = param_3 + -1;
    uVar61 = uVar6 + 0x8f1bbcdc + uVar62 + ((uVar61 | uVar65) & uVar40 | uVar61 & uVar65) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = uVar10 + 0x8f1bbcdc + uVar40 + ((uVar64 | uVar38) & uVar65 | uVar64 & uVar38) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar40 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar12 + 0x8f1bbcdc + uVar65 + ((uVar61 | uVar62) & uVar38 | uVar61 & uVar62) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar64 = uVar8 + 0x8f1bbcdc + uVar38 + ((uVar63 | uVar40) & uVar62 | uVar63 & uVar40) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar63 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar13 + 0x8f1bbcdc + uVar62 + ((uVar61 | uVar63) & uVar40 | uVar61 & uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar14 + 0x8f1bbcdc + uVar40 + ((uVar64 | uVar65) & uVar63 | uVar64 & uVar65) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar38 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar11 + 0x8f1bbcdc + uVar63 + ((uVar61 | uVar62) & uVar65 | uVar61 & uVar62) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar17 + 0x8f1bbcdc + uVar65 + ((uVar64 | uVar38) & uVar62 | uVar64 & uVar38) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar16 + 0x8f1bbcdc + uVar62 + ((uVar61 | uVar63) & uVar38 | uVar61 & uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar15 + 0x8f1bbcdc + uVar38 + ((uVar64 | uVar65) & uVar63 | uVar64 & uVar65) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar38 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar19 + 0x8f1bbcdc + uVar63 + ((uVar61 | uVar62) & uVar65 | uVar61 & uVar62) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar21 + 0x8f1bbcdc + uVar65 + ((uVar64 | uVar38) & uVar62 | uVar64 & uVar38) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar18 + 0x8f1bbcdc + uVar62 + ((uVar61 | uVar63) & uVar38 | uVar61 & uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar62 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar22 + 0x8f1bbcdc + uVar38 + ((uVar64 | uVar65) & uVar63 | uVar64 & uVar65) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar38 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar23 + 0x8f1bbcdc + uVar63 + ((uVar61 | uVar62) & uVar65 | uVar61 & uVar62) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar40 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar20 + 0x8f1bbcdc + uVar65 + ((uVar64 | uVar38) & uVar62 | uVar64 & uVar38) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar65 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar61 = uVar25 + 0x8f1bbcdc + uVar62 + ((uVar61 | uVar40) & uVar38 | uVar61 & uVar40) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar63 = uVar26 + 0x8f1bbcdc + uVar38 + ((uVar64 | uVar65) & uVar40 | uVar64 & uVar65) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar38 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar24 + 0xca62c1d6 + uVar40 + (uVar38 ^ uVar65 ^ uVar61) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar40 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar62 = uVar16 ^ uVar19 ^ uVar25 ^ uVar29;
    uVar41 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar61 = uVar27 + 0xca62c1d6 + uVar65 + (uVar40 ^ uVar38 ^ uVar63) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar42 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar64 = uVar28 + 0xca62c1d6 + uVar38 + (uVar41 ^ uVar40 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar63 = uVar29 + 0xca62c1d6 + uVar40 + (uVar42 ^ uVar41 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar38 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar65 = uVar21 ^ uVar22 ^ uVar27 ^ uVar62;
    uVar40 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar52 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar61 = uVar30 + 0xca62c1d6 + uVar41 + (uVar38 ^ uVar42 ^ uVar64) +
             (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar41 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar64 = uVar31 + 0xca62c1d6 + uVar42 + (uVar40 ^ uVar38 ^ uVar63) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar63 = uVar23 ^ uVar25 ^ uVar30 ^ uVar65;
    uVar42 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar61 = uVar62 + 0xca62c1d6 + uVar38 + (uVar52 ^ uVar40 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar44 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar64 = uVar32 + 0xca62c1d6 + uVar40 + (uVar41 ^ uVar52 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar40 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar61 = uVar33 + 0xca62c1d6 + uVar52 + (uVar42 ^ uVar41 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar38 = uVar26 ^ uVar27 ^ uVar32 ^ uVar63;
    uVar52 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar64 = uVar65 + 0xca62c1d6 + uVar41 + (uVar44 ^ uVar42 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar41 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar62 = uVar24 ^ uVar25 ^ uVar62 ^ uVar35;
    uVar61 = uVar34 + 0xca62c1d6 + uVar42 + (uVar40 ^ uVar44 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar42 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar64 = uVar35 + 0xca62c1d6 + uVar44 + (uVar52 ^ uVar40 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar44 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar61 = uVar63 + 0xca62c1d6 + uVar40 + (uVar41 ^ uVar52 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar40 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar64 = uVar36 + 0xca62c1d6 + uVar52 + (uVar42 ^ uVar41 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar52 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar61 = uVar62 + 0xca62c1d6 + uVar41 + (uVar44 ^ uVar42 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar41 = uVar61 >> 2 | uVar61 * 0x40000000;
    uVar64 = uVar38 + 0xca62c1d6 + uVar42 + (uVar40 ^ uVar44 ^ uVar64) +
             (uVar61 >> 0x1b | uVar61 * 0x20);
    uVar42 = uVar64 >> 2 | uVar64 * 0x40000000;
    uVar63 = uVar37 + 0xca62c1d6 + uVar44 + (uVar52 ^ uVar40 ^ uVar61) +
             (uVar64 >> 0x1b | uVar64 * 0x20);
    uVar44 = uVar63 >> 2 | uVar63 * 0x40000000;
    uVar61 = uVar42 + param_1[4];
    uVar62 = (uVar29 ^ uVar27 ^ uVar65 ^ uVar62) + 0xca62c1d6 + uVar40 + (uVar41 ^ uVar52 ^ uVar64)
             + (uVar63 >> 0x1b | uVar63 * 0x20);
    uVar64 = uVar44 + param_1[3];
    param_1[3] = uVar64;
    param_1[4] = uVar61;
    uVar65 = (uVar28 ^ uVar30 ^ uVar34 ^ uVar38) + 0xca62c1d6 + uVar52 + (uVar42 ^ uVar41 ^ uVar63)
             + (uVar62 >> 0x1b | uVar62 * 0x20);
    uVar63 = (uVar62 >> 2 | uVar62 * 0x40000000) + param_1[2];
    uVar62 = *param_1 + 0xca62c1d6 + (uVar29 ^ uVar31 ^ uVar35 ^ uVar37) + uVar41 +
             (uVar44 ^ uVar42 ^ uVar62) + (uVar65 >> 0x1b | uVar65 * 0x20);
    param_2 = param_2 + 0x10;
    uVar65 = uVar65 + param_1[1];
    param_1[1] = uVar65;
    param_1[2] = uVar63;
    *param_1 = uVar62;
  } while (param_3 != 0);
  return;
}

