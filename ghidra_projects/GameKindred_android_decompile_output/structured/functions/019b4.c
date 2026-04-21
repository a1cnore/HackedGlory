// functions/019b4 — 2 functions
#include "libGameKindred.h"




void FUN_019b45d0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined6 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint3 uVar31;
  uint3 uVar32;
  undefined2 uVar33;
  uint3 uVar34;
  long lVar35;
  byte *pbVar36;
  byte *pbVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  char cVar41;
  char *pcVar42;
  size_t __n;
  size_t __n_00;
  int iVar43;
  long lVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
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
  short sVar74;
  short sVar76;
  ushort uVar77;
  ushort uVar78;
  undefined8 uVar75;
  short sVar79;
  short sVar81;
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  short sVar85;
  short sVar92;
  short sVar93;
  undefined8 uVar86;
  short sVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  byte bVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  byte bVar106;
  short sVar100;
  byte bVar107;
  byte bVar109;
  short sVar108;
  byte bVar110;
  byte bVar112;
  short sVar111;
  byte bVar113;
  undefined8 uVar101;
  byte bVar115;
  short sVar114;
  short sVar116;
  short sVar117;
  short sVar118;
  short sVar119;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  undefined8 uVar120;
  byte bVar132;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  short sVar133;
  short sVar134;
  short sVar135;
  short sVar136;
  undefined8 uVar137;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  byte bStack_d8;
  byte abStack_d1 [2];
  undefined7 local_cf;
  byte bStack_c8;
  byte local_c0 [4];
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  byte local_b0 [4];
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  byte local_a0 [4];
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  byte local_90 [4];
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long local_70;
  undefined1 auVar87 [16];
  
  local_e8 = tpidr_el0;
  local_70 = *(long *)(local_e8 + 0x28);
  iVar43 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar5 = (uint)*param_1 * 0x4a85;
  uVar3 = iVar43 + (uint)*param_3 >> 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar2 = (iVar5 + uVar3 * 0x811a) - 0x451550;
  uVar4 = iVar1 + (uint)*param_4 >> 1;
  if (uVar2 >> 0x16 == 0) {
    cVar41 = (char)(uVar2 >> 0xe);
  }
  else {
    cVar41 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
  }
  uVar2 = iVar5 + uVar3 * -0x1913 + uVar4 * -0x3408 + 0x220530;
  uVar3 = ((int)(param_9 + 1U) >> 1) - 1;
  *param_7 = cVar41;
  if (uVar2 >> 0x16 == 0) {
    cVar41 = (char)(uVar2 >> 0xe);
  }
  else {
    cVar41 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
  }
  uVar2 = (iVar5 + uVar4 * 0x6625) - 0x379ad0;
  param_7[1] = cVar41;
  if (uVar2 >> 0x16 == 0) {
    cVar41 = (char)(uVar2 >> 0xe);
  }
  else {
    cVar41 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
  }
  iVar5 = (int)uVar3 >> 3;
  lVar44 = ((long)((ulong)(param_9 + 1U) << 0x20) >> 0x21) - (long)(int)(uVar3 & 0xfffffff8);
  param_7[2] = cVar41;
  if (param_2 != (byte *)0x0) {
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar2 = iVar43 + (uint)*param_5 >> 1;
    uVar4 = iVar6 + -0x451550 + uVar2 * 0x811a;
    uVar3 = iVar1 + (uint)*param_6 >> 1;
    if (uVar4 >> 0x16 == 0) {
      cVar41 = (char)(uVar4 >> 0xe);
    }
    else {
      cVar41 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
    }
    uVar2 = iVar6 + 0x220530 + uVar2 * -0x1913 + uVar3 * -0x3408;
    *param_8 = cVar41;
    if (uVar2 >> 0x16 == 0) {
      cVar41 = (char)(uVar2 >> 0xe);
    }
    else {
      cVar41 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
    }
    uVar2 = iVar6 + -0x379ad0 + uVar3 * 0x6625;
    param_8[1] = cVar41;
    if (uVar2 >> 0x16 == 0) {
      cVar41 = (char)(uVar2 >> 0xe);
    }
    else {
      cVar41 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar41;
  }
  uVar3 = iVar5 << 4;
  uVar2 = uVar3 | 1;
  if (0x10 < param_9) {
    lVar35 = 0;
    pbVar36 = param_1 + 1;
    pbVar37 = param_2 + 1;
    uVar38 = 3;
    auVar80._8_2_ = 0x4a85;
    auVar80._0_8_ = 0x4a854a854a854a85;
    auVar80._10_2_ = 0x4a85;
    auVar80._12_2_ = 0x4a85;
    auVar80._14_2_ = 0x4a85;
    auVar82._8_2_ = 0x4a85;
    auVar82._0_8_ = 0x4a854a854a854a85;
    auVar82._10_2_ = 0x4a85;
    auVar82._12_2_ = 0x4a85;
    auVar82._14_2_ = 0x4a85;
    auVar80 = NEON_ext(auVar80,auVar82,8,1);
    auVar83._8_2_ = 0x6625;
    auVar83._0_8_ = 0x6625662566256625;
    auVar83._10_2_ = 0x6625;
    auVar83._12_2_ = 0x6625;
    auVar83._14_2_ = 0x6625;
    auVar84._8_2_ = 0x6625;
    auVar84._0_8_ = 0x6625662566256625;
    auVar84._10_2_ = 0x6625;
    auVar84._12_2_ = 0x6625;
    auVar84._14_2_ = 0x6625;
    auVar82 = NEON_ext(auVar83,auVar84,8,1);
    auVar89._8_2_ = 0x1913;
    auVar89._0_8_ = 0x1913191319131913;
    auVar89._10_2_ = 0x1913;
    auVar89._12_2_ = 0x1913;
    auVar89._14_2_ = 0x1913;
    auVar123._8_2_ = 0x1913;
    auVar123._0_8_ = 0x1913191319131913;
    auVar123._10_2_ = 0x1913;
    auVar123._12_2_ = 0x1913;
    auVar123._14_2_ = 0x1913;
    auVar83 = NEON_ext(auVar89,auVar123,8,1);
    auVar7._8_2_ = 0x3408;
    auVar7._0_8_ = 0x3408340834083408;
    auVar7._10_2_ = 0x3408;
    auVar7._12_2_ = 0x3408;
    auVar7._14_2_ = 0x3408;
    auVar8._8_2_ = 0x3408;
    auVar8._0_8_ = 0x3408340834083408;
    auVar8._10_2_ = 0x3408;
    auVar8._12_2_ = 0x3408;
    auVar8._14_2_ = 0x3408;
    auVar84 = NEON_ext(auVar7,auVar8,8,1);
    do {
      uVar86 = *(undefined8 *)param_3;
      uVar75 = *(undefined8 *)(param_3 + 1);
      bVar68 = (byte)((ulong)uVar75 >> 8);
      bVar69 = (byte)((ulong)uVar75 >> 0x10);
      bVar70 = (byte)((ulong)uVar75 >> 0x18);
      bVar71 = (byte)((ulong)uVar75 >> 0x20);
      bVar72 = (byte)((ulong)uVar75 >> 0x28);
      bVar73 = (byte)((ulong)uVar75 >> 0x30);
      bVar95 = (byte)((ulong)uVar75 >> 0x38);
      uVar101 = *(undefined8 *)param_5;
      uVar120 = *(undefined8 *)(param_5 + 1);
      bVar61 = (byte)((ulong)uVar86 >> 8);
      bVar62 = (byte)((ulong)uVar86 >> 0x10);
      bVar63 = (byte)((ulong)uVar86 >> 0x18);
      bVar64 = (byte)((ulong)uVar86 >> 0x20);
      bVar65 = (byte)((ulong)uVar86 >> 0x28);
      bVar66 = (byte)((ulong)uVar86 >> 0x30);
      bVar67 = (byte)((ulong)uVar86 >> 0x38);
      uVar31 = CONCAT12(bVar68,(short)uVar75) & 0xff00ff;
      bVar106 = (byte)((ulong)uVar101 >> 8);
      bVar107 = (byte)((ulong)uVar101 >> 0x10);
      bVar109 = (byte)((ulong)uVar101 >> 0x18);
      bVar110 = (byte)((ulong)uVar101 >> 0x20);
      bVar112 = (byte)((ulong)uVar101 >> 0x28);
      bVar113 = (byte)((ulong)uVar101 >> 0x30);
      bVar115 = (byte)((ulong)uVar101 >> 0x38);
      uVar32 = CONCAT12(bVar106,(short)uVar101) & 0xff00ff;
      bVar126 = (byte)((ulong)uVar120 >> 8);
      bVar127 = (byte)((ulong)uVar120 >> 0x10);
      bVar128 = (byte)((ulong)uVar120 >> 0x18);
      bVar129 = (byte)((ulong)uVar120 >> 0x20);
      bVar130 = (byte)((ulong)uVar120 >> 0x28);
      bVar131 = (byte)((ulong)uVar120 >> 0x30);
      bVar132 = (byte)((ulong)uVar120 >> 0x38);
      sVar74 = (short)uVar31 + (ushort)(byte)uVar86 + (short)uVar32 + (ushort)(byte)uVar120;
      sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar61 + (ushort)(byte)(uVar32 >> 0x10) +
               (ushort)bVar126;
      sVar79 = (ushort)bVar69 + (ushort)bVar62 + (ushort)bVar107 + (ushort)bVar127;
      sVar81 = (ushort)bVar70 + (ushort)bVar63 + (ushort)bVar109 + (ushort)bVar128;
      sVar133 = (ushort)bVar71 + (ushort)bVar64 + (ushort)bVar110 + (ushort)bVar129;
      sVar134 = (ushort)bVar72 + (ushort)bVar65 + (ushort)bVar112 + (ushort)bVar130;
      sVar135 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar113 + (ushort)bVar131;
      sVar136 = (ushort)bVar95 + (ushort)bVar67 + (ushort)bVar115 + (ushort)bVar132;
      uVar31 = CONCAT12(bVar126,(short)uVar120) & 0xff00ff;
      uVar45 = (undefined1)
               ((ushort)(((ushort)(byte)uVar101 + (ushort)(byte)uVar75) * 2 + sVar74) >> 3);
      uVar47 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar68) * 2 + sVar76) >> 3);
      uVar49 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar69) * 2 + sVar79) >> 3);
      uVar51 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar70) * 2 + sVar81) >> 3);
      uVar53 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar71) * 2 + sVar133) >> 3);
      uVar55 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar72) * 2 + sVar134) >> 3);
      uVar57 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar73) * 2 + sVar135) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar115 + (ushort)bVar95) * 2 + sVar136) >> 3);
      uVar46 = (undefined1)((ushort)(sVar74 + (ushort)(byte)uVar86 * 2 + (short)uVar31 * 2) >> 3);
      uVar48 = (undefined1)
               ((ushort)(sVar76 + (ushort)bVar61 * 2 + (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
      uVar50 = (undefined1)((ushort)(sVar79 + (ushort)bVar62 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar52 = (undefined1)((ushort)(sVar81 + (ushort)bVar63 * 2 + (ushort)bVar128 * 2) >> 3);
      uVar54 = (undefined1)((ushort)(sVar133 + (ushort)bVar64 * 2 + (ushort)bVar129 * 2) >> 3);
      uVar56 = (undefined1)((ushort)(sVar134 + (ushort)bVar65 * 2 + (ushort)bVar130 * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar135 + (ushort)bVar66 * 2 + (ushort)bVar131 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar136 + (ushort)bVar67 * 2 + (ushort)bVar132 * 2) >> 3);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      uVar137 = NEON_urhadd(uVar75,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar101 = NEON_urhadd(uVar101,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar75 = NEON_urhadd(uVar120,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      local_c0[0] = (byte)uVar86;
      local_c0[1] = (char)uVar137;
      local_c0[2] = (char)((ulong)uVar86 >> 8);
      local_c0[3] = (char)((ulong)uVar137 >> 8);
      uStack_bc = (char)((ulong)uVar86 >> 0x10);
      uStack_bb = (char)((ulong)uVar137 >> 0x10);
      uStack_ba = (char)((ulong)uVar86 >> 0x18);
      uStack_b9 = (char)((ulong)uVar137 >> 0x18);
      uStack_b8 = (char)((ulong)uVar86 >> 0x20);
      uStack_b7 = (char)((ulong)uVar137 >> 0x20);
      uStack_b6 = (char)((ulong)uVar86 >> 0x28);
      uStack_b5 = (char)((ulong)uVar137 >> 0x28);
      uStack_b4 = (char)((ulong)uVar86 >> 0x30);
      uStack_b3 = (char)((ulong)uVar137 >> 0x30);
      uStack_b2 = (char)((ulong)uVar86 >> 0x38);
      uStack_b1 = (char)((ulong)uVar137 >> 0x38);
      local_a0[0] = (byte)uVar101;
      local_a0[1] = (char)uVar75;
      local_a0[2] = (char)((ulong)uVar101 >> 8);
      local_a0[3] = (char)((ulong)uVar75 >> 8);
      uStack_9c = (char)((ulong)uVar101 >> 0x10);
      uStack_9b = (char)((ulong)uVar75 >> 0x10);
      uStack_9a = (char)((ulong)uVar101 >> 0x18);
      uStack_99 = (char)((ulong)uVar75 >> 0x18);
      uStack_98 = (char)((ulong)uVar101 >> 0x20);
      uStack_97 = (char)((ulong)uVar75 >> 0x20);
      uStack_96 = (char)((ulong)uVar101 >> 0x28);
      uStack_95 = (char)((ulong)uVar75 >> 0x28);
      uStack_94 = (char)((ulong)uVar101 >> 0x30);
      uStack_93 = (char)((ulong)uVar75 >> 0x30);
      uStack_92 = (char)((ulong)uVar101 >> 0x38);
      uStack_91 = (char)((ulong)uVar75 >> 0x38);
      uVar86 = *(undefined8 *)param_4;
      uVar75 = *(undefined8 *)(param_4 + 1);
      bVar68 = (byte)((ulong)uVar75 >> 8);
      bVar69 = (byte)((ulong)uVar75 >> 0x10);
      bVar70 = (byte)((ulong)uVar75 >> 0x18);
      bVar71 = (byte)((ulong)uVar75 >> 0x20);
      bVar72 = (byte)((ulong)uVar75 >> 0x28);
      bVar73 = (byte)((ulong)uVar75 >> 0x30);
      bVar95 = (byte)((ulong)uVar75 >> 0x38);
      uVar101 = *(undefined8 *)param_6;
      uVar120 = *(undefined8 *)(param_6 + 1);
      bVar61 = (byte)((ulong)uVar86 >> 8);
      bVar62 = (byte)((ulong)uVar86 >> 0x10);
      bVar63 = (byte)((ulong)uVar86 >> 0x18);
      bVar64 = (byte)((ulong)uVar86 >> 0x20);
      bVar65 = (byte)((ulong)uVar86 >> 0x28);
      bVar66 = (byte)((ulong)uVar86 >> 0x30);
      bVar67 = (byte)((ulong)uVar86 >> 0x38);
      uVar31 = CONCAT12(bVar68,(short)uVar75) & 0xff00ff;
      bVar106 = (byte)((ulong)uVar101 >> 8);
      bVar107 = (byte)((ulong)uVar101 >> 0x10);
      bVar109 = (byte)((ulong)uVar101 >> 0x18);
      bVar110 = (byte)((ulong)uVar101 >> 0x20);
      bVar112 = (byte)((ulong)uVar101 >> 0x28);
      bVar113 = (byte)((ulong)uVar101 >> 0x30);
      bVar115 = (byte)((ulong)uVar101 >> 0x38);
      uVar32 = CONCAT12(bVar106,(short)uVar101) & 0xff00ff;
      bVar126 = (byte)((ulong)uVar120 >> 8);
      bVar127 = (byte)((ulong)uVar120 >> 0x10);
      bVar128 = (byte)((ulong)uVar120 >> 0x18);
      bVar129 = (byte)((ulong)uVar120 >> 0x20);
      bVar130 = (byte)((ulong)uVar120 >> 0x28);
      bVar131 = (byte)((ulong)uVar120 >> 0x30);
      bVar132 = (byte)((ulong)uVar120 >> 0x38);
      sVar74 = (short)uVar31 + (ushort)(byte)uVar86 + (short)uVar32 + (ushort)(byte)uVar120;
      sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar61 + (ushort)(byte)(uVar32 >> 0x10) +
               (ushort)bVar126;
      sVar79 = (ushort)bVar69 + (ushort)bVar62 + (ushort)bVar107 + (ushort)bVar127;
      sVar81 = (ushort)bVar70 + (ushort)bVar63 + (ushort)bVar109 + (ushort)bVar128;
      sVar133 = (ushort)bVar71 + (ushort)bVar64 + (ushort)bVar110 + (ushort)bVar129;
      sVar134 = (ushort)bVar72 + (ushort)bVar65 + (ushort)bVar112 + (ushort)bVar130;
      sVar135 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar113 + (ushort)bVar131;
      sVar136 = (ushort)bVar95 + (ushort)bVar67 + (ushort)bVar115 + (ushort)bVar132;
      uVar31 = CONCAT12(bVar126,(short)uVar120) & 0xff00ff;
      uVar45 = (undefined1)
               ((ushort)(((ushort)(byte)uVar101 + (ushort)(byte)uVar75) * 2 + sVar74) >> 3);
      uVar47 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar68) * 2 + sVar76) >> 3);
      uVar49 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar69) * 2 + sVar79) >> 3);
      uVar51 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar70) * 2 + sVar81) >> 3);
      uVar53 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar71) * 2 + sVar133) >> 3);
      uVar55 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar72) * 2 + sVar134) >> 3);
      uVar57 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar73) * 2 + sVar135) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar115 + (ushort)bVar95) * 2 + sVar136) >> 3);
      uVar46 = (undefined1)((ushort)(sVar74 + (ushort)(byte)uVar86 * 2 + (short)uVar31 * 2) >> 3);
      uVar48 = (undefined1)
               ((ushort)(sVar76 + (ushort)bVar61 * 2 + (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
      uVar50 = (undefined1)((ushort)(sVar79 + (ushort)bVar62 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar52 = (undefined1)((ushort)(sVar81 + (ushort)bVar63 * 2 + (ushort)bVar128 * 2) >> 3);
      uVar54 = (undefined1)((ushort)(sVar133 + (ushort)bVar64 * 2 + (ushort)bVar129 * 2) >> 3);
      uVar56 = (undefined1)((ushort)(sVar134 + (ushort)bVar65 * 2 + (ushort)bVar130 * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar135 + (ushort)bVar66 * 2 + (ushort)bVar131 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar136 + (ushort)bVar67 * 2 + (ushort)bVar132 * 2) >> 3);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      uVar137 = NEON_urhadd(uVar75,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar101 = NEON_urhadd(uVar101,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar39 = 0;
      uVar75 = NEON_urhadd(uVar120,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      local_b0[0] = (byte)uVar86;
      local_b0[1] = (char)uVar137;
      local_b0[2] = (char)((ulong)uVar86 >> 8);
      local_b0[3] = (char)((ulong)uVar137 >> 8);
      uStack_ac = (char)((ulong)uVar86 >> 0x10);
      uStack_ab = (char)((ulong)uVar137 >> 0x10);
      uStack_aa = (char)((ulong)uVar86 >> 0x18);
      uStack_a9 = (char)((ulong)uVar137 >> 0x18);
      uStack_a8 = (char)((ulong)uVar86 >> 0x20);
      uStack_a7 = (char)((ulong)uVar137 >> 0x20);
      uStack_a6 = (char)((ulong)uVar86 >> 0x28);
      uStack_a5 = (char)((ulong)uVar137 >> 0x28);
      uStack_a4 = (char)((ulong)uVar86 >> 0x30);
      uStack_a3 = (char)((ulong)uVar137 >> 0x30);
      uStack_a2 = (char)((ulong)uVar86 >> 0x38);
      uStack_a1 = (char)((ulong)uVar137 >> 0x38);
      local_90[0] = (byte)uVar101;
      local_90[1] = (char)uVar75;
      local_90[2] = (char)((ulong)uVar101 >> 8);
      local_90[3] = (char)((ulong)uVar75 >> 8);
      uStack_8c = (char)((ulong)uVar101 >> 0x10);
      uStack_8b = (char)((ulong)uVar75 >> 0x10);
      uStack_8a = (char)((ulong)uVar101 >> 0x18);
      uStack_89 = (char)((ulong)uVar75 >> 0x18);
      uStack_88 = (char)((ulong)uVar101 >> 0x20);
      uStack_87 = (char)((ulong)uVar75 >> 0x20);
      uStack_86 = (char)((ulong)uVar101 >> 0x28);
      uStack_85 = (char)((ulong)uVar75 >> 0x28);
      uStack_84 = (char)((ulong)uVar101 >> 0x30);
      uStack_83 = (char)((ulong)uVar75 >> 0x30);
      uStack_82 = (char)((ulong)uVar101 >> 0x38);
      uStack_81 = (char)((ulong)uVar75 >> 0x38);
      uVar40 = uVar38;
      do {
        uVar86 = *(undefined8 *)(pbVar36 + uVar39);
        uVar75 = *(undefined8 *)(local_c0 + uVar39);
        uVar101 = *(undefined8 *)(local_b0 + uVar39);
        sVar85 = (byte)uVar86 - 0x10;
        sVar92 = (byte)((ulong)uVar86 >> 8) - 0x10;
        sVar93 = (byte)((ulong)uVar86 >> 0x10) - 0x10;
        sVar94 = (byte)((ulong)uVar86 >> 0x18) - 0x10;
        auVar87._0_8_ = CONCAT26(sVar94,CONCAT24(sVar93,CONCAT22(sVar92,sVar85)));
        auVar87._8_2_ = (byte)((ulong)uVar86 >> 0x20) - 0x10;
        auVar87._10_2_ = (byte)((ulong)uVar86 >> 0x28) - 0x10;
        auVar87._12_2_ = (byte)((ulong)uVar86 >> 0x30) - 0x10;
        auVar87._14_2_ = (byte)((ulong)uVar86 >> 0x38) - 0x10;
        sVar133 = auVar80._0_2_;
        sVar134 = auVar80._2_2_;
        sVar135 = auVar80._4_2_;
        sVar136 = auVar80._6_2_;
        uVar31 = CONCAT12((char)((ulong)uVar75 >> 8),(short)uVar75) & 0xff00ff;
        sVar74 = (short)uVar31 + -0x80;
        sVar76 = (byte)(uVar31 >> 0x10) - 0x80;
        sVar79 = (byte)((ulong)uVar75 >> 0x10) - 0x80;
        sVar81 = (byte)((ulong)uVar75 >> 0x18) - 0x80;
        sVar96 = (byte)((ulong)uVar75 >> 0x20) - 0x80;
        sVar97 = (byte)((ulong)uVar75 >> 0x28) - 0x80;
        sVar98 = (byte)((ulong)uVar75 >> 0x30) - 0x80;
        sVar99 = (byte)((ulong)uVar75 >> 0x38) - 0x80;
        sVar100 = (byte)uVar101 - 0x80;
        sVar108 = (byte)((ulong)uVar101 >> 8) - 0x80;
        sVar111 = (byte)((ulong)uVar101 >> 0x10) - 0x80;
        sVar114 = (byte)((ulong)uVar101 >> 0x18) - 0x80;
        sVar116 = (byte)((ulong)uVar101 >> 0x20) - 0x80;
        sVar117 = (byte)((ulong)uVar101 >> 0x28) - 0x80;
        sVar118 = (byte)((ulong)uVar101 >> 0x30) - 0x80;
        sVar119 = (byte)((ulong)uVar101 >> 0x38) - 0x80;
        auVar88._8_8_ = auVar87._8_8_;
        uVar9 = CONCAT13((char)((ushort)sVar76 >> 8),CONCAT12((char)sVar76,sVar74));
        uVar10 = CONCAT15((char)((ushort)sVar79 >> 8),CONCAT14((char)sVar79,uVar9));
        iVar21 = (int)sVar100 * (int)auVar82._0_2_ + (int)sVar85 * (int)sVar133;
        iVar22 = (int)sVar108 * (int)auVar82._2_2_ + (int)sVar92 * (int)sVar134;
        uVar48 = (undefined1)((uint)iVar22 >> 8);
        uVar49 = (undefined1)((uint)iVar22 >> 0x10);
        uVar50 = (undefined1)((uint)iVar22 >> 0x18);
        iVar23 = (int)sVar111 * (int)auVar82._4_2_ + (int)sVar93 * (int)sVar135;
        iVar24 = (int)sVar114 * (int)auVar82._6_2_ + (int)sVar94 * (int)sVar136;
        auVar121._0_8_ =
             CONCAT44(((int)sVar92 * (int)sVar134 - (int)sVar76 * (int)auVar83._2_2_) -
                      (int)sVar108 * (int)auVar84._2_2_,
                      ((int)sVar85 * (int)sVar133 - (int)sVar74 * (int)auVar83._0_2_) -
                      (int)sVar100 * (int)auVar84._0_2_);
        auVar121._8_4_ =
             ((int)sVar93 * (int)sVar135 - (int)sVar79 * (int)auVar83._4_2_) -
             (int)sVar111 * (int)auVar84._4_2_;
        auVar121._12_4_ =
             ((int)sVar94 * (int)sVar136 - (int)sVar81 * (int)auVar83._6_2_) -
             (int)sVar114 * (int)auVar84._6_2_;
        iVar15 = auVar87._8_2_ * 0x4a85 + sVar96 * -0x1913 + sVar116 * -0x3408;
        iVar16 = auVar87._10_2_ * 0x4a85 + sVar97 * -0x1913 + sVar117 * -0x3408;
        uVar45 = (undefined1)((uint)iVar16 >> 8);
        uVar46 = (undefined1)((uint)iVar16 >> 0x10);
        uVar47 = (undefined1)((uint)iVar16 >> 0x18);
        iVar17 = auVar87._12_2_ * 0x4a85 + sVar98 * -0x1913 + sVar118 * -0x3408;
        iVar18 = auVar87._14_2_ * 0x4a85 + sVar99 * -0x1913 + sVar119 * -0x3408;
        iVar27 = sVar116 * 0x6625 + auVar87._8_2_ * 0x4a85;
        iVar28 = sVar117 * 0x6625 + auVar87._10_2_ * 0x4a85;
        uVar51 = (undefined1)((uint)iVar28 >> 8);
        uVar52 = (undefined1)((uint)iVar28 >> 0x10);
        uVar53 = (undefined1)((uint)iVar28 >> 0x18);
        iVar29 = sVar118 * 0x6625 + auVar87._12_2_ * 0x4a85;
        iVar30 = sVar119 * 0x6625 + auVar87._14_2_ * 0x4a85;
        auVar102._0_8_ =
             CONCAT44((short)((uint)uVar9 >> 0x10) * 0x811a + (int)sVar92 * (int)sVar134,
                      sVar74 * 0x811a + (int)sVar85 * (int)sVar133);
        auVar102._8_4_ = (short)((uint6)uVar10 >> 0x20) * 0x811a + (int)sVar93 * (int)sVar135;
        auVar102._12_4_ =
             (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar10)) >> 0x30) *
             0x811a + (int)sVar94 * (int)sVar136;
        iVar43 = CONCAT13(sVar97 >> 0xf,(int3)sVar97) * 0x811a + auVar87._10_2_ * 0x4a85;
        iVar1 = sVar98 * 0x811a + auVar87._12_2_ * 0x4a85;
        iVar6 = sVar99 * 0x811a + auVar87._14_2_ * 0x4a85;
        auVar19[4] = (char)iVar22;
        auVar19._0_4_ = iVar21;
        auVar19[5] = uVar48;
        auVar19[6] = uVar49;
        auVar19[7] = uVar50;
        auVar19._8_2_ = (short)iVar23;
        auVar19._10_2_ = (short)((uint)iVar23 >> 0x10);
        auVar19._12_2_ = (short)iVar24;
        auVar19._14_2_ = (short)((uint)iVar24 >> 0x10);
        auVar88._0_8_ = NEON_rshrn(auVar87._0_8_,auVar19,0xe,4);
        auVar122._8_8_ = auVar121._8_8_;
        auVar122._0_8_ = NEON_rshrn(auVar121._0_8_,auVar121,0xe,4);
        auVar25[4] = (char)iVar28;
        auVar25._0_4_ = iVar27;
        auVar25[5] = uVar51;
        auVar25[6] = uVar52;
        auVar25[7] = uVar53;
        auVar25._8_2_ = (short)iVar29;
        auVar25._10_2_ = (short)((uint)iVar29 >> 0x10);
        auVar25._12_2_ = (short)iVar30;
        auVar25._14_2_ = (short)((uint)iVar30 >> 0x10);
        auVar89 = NEON_rshrn2(auVar88,auVar25,0xe,4);
        auVar13[4] = (char)iVar16;
        auVar13._0_4_ = iVar15;
        auVar13[5] = uVar45;
        auVar13[6] = uVar46;
        auVar13[7] = uVar47;
        auVar13._8_2_ = (short)iVar17;
        auVar13._10_2_ = (short)((uint)iVar17 >> 0x10);
        auVar13._12_2_ = (short)iVar18;
        auVar13._14_2_ = (short)((uint)iVar18 >> 0x10);
        auVar123 = NEON_rshrn2(auVar122,auVar13,0xe,4);
        auVar103._8_8_ = auVar102._8_8_;
        auVar103._0_8_ = NEON_rshrn(auVar102._0_8_,auVar102,0xe,4);
        uVar101 = NEON_sqxtun(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14((char)iVar28,
                                                                                       iVar27)))),
                              auVar89,2);
        uVar39 = uVar39 + 8;
        auVar11[4] = (char)iVar43;
        auVar11._0_4_ = CONCAT13(sVar96 >> 0xf,(int3)sVar96) * 0x811a + auVar87._8_2_ * 0x4a85;
        auVar11[5] = (char)((uint)iVar43 >> 8);
        auVar11[6] = (char)((uint)iVar43 >> 0x10);
        auVar11[7] = (char)((uint)iVar43 >> 0x18);
        auVar11._8_2_ = (short)iVar1;
        auVar11._10_2_ = (short)((uint)iVar1 >> 0x10);
        auVar11._12_2_ = (short)iVar6;
        auVar11._14_2_ = (short)((uint)iVar6 >> 0x10);
        auVar89 = NEON_rshrn2(auVar103,auVar11,0xe,4);
        uVar86 = NEON_sqxtun(CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14((char)iVar22,
                                                                                      iVar21)))),
                             auVar123,2);
        pcVar42 = param_7 + (uVar40 & 0xfffffffb);
        uVar75 = NEON_sqxtun(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14((char)iVar16,
                                                                                      iVar15)))),
                             auVar89,2);
        uVar40 = uVar40 + 0x18;
        *pcVar42 = (char)uVar75;
        pcVar42[1] = (char)uVar86;
        pcVar42[2] = (char)uVar101;
        pcVar42[3] = (char)((ulong)uVar75 >> 8);
        pcVar42[4] = (char)((ulong)uVar86 >> 8);
        pcVar42[5] = (char)((ulong)uVar101 >> 8);
        pcVar42[6] = (char)((ulong)uVar75 >> 0x10);
        pcVar42[7] = (char)((ulong)uVar86 >> 0x10);
        pcVar42[8] = (char)((ulong)uVar101 >> 0x10);
        pcVar42[9] = (char)((ulong)uVar75 >> 0x18);
        pcVar42[10] = (char)((ulong)uVar86 >> 0x18);
        pcVar42[0xb] = (char)((ulong)uVar101 >> 0x18);
        pcVar42[0xc] = (char)((ulong)uVar75 >> 0x20);
        pcVar42[0xd] = (char)((ulong)uVar86 >> 0x20);
        pcVar42[0xe] = (char)((ulong)uVar101 >> 0x20);
        pcVar42[0xf] = (char)((ulong)uVar75 >> 0x28);
        pcVar42[0x10] = (char)((ulong)uVar86 >> 0x28);
        pcVar42[0x11] = (char)((ulong)uVar101 >> 0x28);
        pcVar42[0x12] = (char)((ulong)uVar75 >> 0x30);
        pcVar42[0x13] = (char)((ulong)uVar86 >> 0x30);
        pcVar42[0x14] = (char)((ulong)uVar101 >> 0x30);
        pcVar42[0x15] = (char)((ulong)uVar75 >> 0x38);
        pcVar42[0x16] = (char)((ulong)uVar86 >> 0x38);
        pcVar42[0x17] = (char)((ulong)uVar101 >> 0x38);
      } while (uVar39 < 0x10);
      if (param_2 != (byte *)0x0) {
        uVar39 = 0;
        uVar40 = uVar38;
        do {
          uVar86 = *(undefined8 *)(pbVar37 + uVar39);
          uVar75 = *(undefined8 *)(local_a0 + uVar39);
          uVar101 = *(undefined8 *)(local_90 + uVar39);
          sVar85 = (byte)uVar86 - 0x10;
          sVar92 = (byte)((ulong)uVar86 >> 8) - 0x10;
          sVar93 = (byte)((ulong)uVar86 >> 0x10) - 0x10;
          sVar94 = (byte)((ulong)uVar86 >> 0x18) - 0x10;
          auVar90._0_8_ = CONCAT26(sVar94,CONCAT24(sVar93,CONCAT22(sVar92,sVar85)));
          auVar90._8_2_ = (byte)((ulong)uVar86 >> 0x20) - 0x10;
          auVar90._10_2_ = (byte)((ulong)uVar86 >> 0x28) - 0x10;
          auVar90._12_2_ = (byte)((ulong)uVar86 >> 0x30) - 0x10;
          auVar90._14_2_ = (byte)((ulong)uVar86 >> 0x38) - 0x10;
          uVar31 = CONCAT12((char)((ulong)uVar75 >> 8),(short)uVar75) & 0xff00ff;
          sVar74 = (short)uVar31 + -0x80;
          sVar76 = (byte)(uVar31 >> 0x10) - 0x80;
          sVar79 = (byte)((ulong)uVar75 >> 0x10) - 0x80;
          sVar81 = (byte)((ulong)uVar75 >> 0x18) - 0x80;
          sVar96 = (byte)((ulong)uVar75 >> 0x20) - 0x80;
          sVar97 = (byte)((ulong)uVar75 >> 0x28) - 0x80;
          sVar98 = (byte)((ulong)uVar75 >> 0x30) - 0x80;
          sVar99 = (byte)((ulong)uVar75 >> 0x38) - 0x80;
          sVar100 = (byte)uVar101 - 0x80;
          sVar108 = (byte)((ulong)uVar101 >> 8) - 0x80;
          sVar111 = (byte)((ulong)uVar101 >> 0x10) - 0x80;
          sVar114 = (byte)((ulong)uVar101 >> 0x18) - 0x80;
          sVar116 = (byte)((ulong)uVar101 >> 0x20) - 0x80;
          sVar117 = (byte)((ulong)uVar101 >> 0x28) - 0x80;
          sVar118 = (byte)((ulong)uVar101 >> 0x30) - 0x80;
          sVar119 = (byte)((ulong)uVar101 >> 0x38) - 0x80;
          auVar91._8_8_ = auVar90._8_8_;
          uVar9 = CONCAT13((char)((ushort)sVar76 >> 8),CONCAT12((char)sVar76,sVar74));
          uVar10 = CONCAT15((char)((ushort)sVar79 >> 8),CONCAT14((char)sVar79,uVar9));
          iVar21 = (int)sVar100 * (int)auVar82._0_2_ + (int)sVar85 * (int)sVar133;
          iVar22 = (int)sVar108 * (int)auVar82._2_2_ + (int)sVar92 * (int)sVar134;
          uVar48 = (undefined1)((uint)iVar22 >> 8);
          uVar49 = (undefined1)((uint)iVar22 >> 0x10);
          uVar50 = (undefined1)((uint)iVar22 >> 0x18);
          iVar23 = (int)sVar111 * (int)auVar82._4_2_ + (int)sVar93 * (int)sVar135;
          iVar24 = (int)sVar114 * (int)auVar82._6_2_ + (int)sVar94 * (int)sVar136;
          auVar124._0_8_ =
               CONCAT44(((int)sVar92 * (int)sVar134 - (int)sVar76 * (int)auVar83._2_2_) -
                        (int)sVar108 * (int)auVar84._2_2_,
                        ((int)sVar85 * (int)sVar133 - (int)sVar74 * (int)auVar83._0_2_) -
                        (int)sVar100 * (int)auVar84._0_2_);
          auVar124._8_4_ =
               ((int)sVar93 * (int)sVar135 - (int)sVar79 * (int)auVar83._4_2_) -
               (int)sVar111 * (int)auVar84._4_2_;
          auVar124._12_4_ =
               ((int)sVar94 * (int)sVar136 - (int)sVar81 * (int)auVar83._6_2_) -
               (int)sVar114 * (int)auVar84._6_2_;
          iVar15 = auVar90._8_2_ * 0x4a85 + sVar96 * -0x1913 + sVar116 * -0x3408;
          iVar16 = auVar90._10_2_ * 0x4a85 + sVar97 * -0x1913 + sVar117 * -0x3408;
          uVar45 = (undefined1)((uint)iVar16 >> 8);
          uVar46 = (undefined1)((uint)iVar16 >> 0x10);
          uVar47 = (undefined1)((uint)iVar16 >> 0x18);
          iVar17 = auVar90._12_2_ * 0x4a85 + sVar98 * -0x1913 + sVar118 * -0x3408;
          iVar18 = auVar90._14_2_ * 0x4a85 + sVar99 * -0x1913 + sVar119 * -0x3408;
          iVar27 = sVar116 * 0x6625 + auVar90._8_2_ * 0x4a85;
          iVar28 = sVar117 * 0x6625 + auVar90._10_2_ * 0x4a85;
          uVar51 = (undefined1)((uint)iVar28 >> 8);
          uVar52 = (undefined1)((uint)iVar28 >> 0x10);
          uVar53 = (undefined1)((uint)iVar28 >> 0x18);
          iVar29 = sVar118 * 0x6625 + auVar90._12_2_ * 0x4a85;
          iVar30 = sVar119 * 0x6625 + auVar90._14_2_ * 0x4a85;
          auVar104._0_8_ =
               CONCAT44((short)((uint)uVar9 >> 0x10) * 0x811a + (int)sVar92 * (int)sVar134,
                        sVar74 * 0x811a + (int)sVar85 * (int)sVar133);
          auVar104._8_4_ = (short)((uint6)uVar10 >> 0x20) * 0x811a + (int)sVar93 * (int)sVar135;
          auVar104._12_4_ =
               (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar10)) >> 0x30)
               * 0x811a + (int)sVar94 * (int)sVar136;
          iVar43 = CONCAT13(sVar97 >> 0xf,(int3)sVar97) * 0x811a + auVar90._10_2_ * 0x4a85;
          iVar1 = sVar98 * 0x811a + auVar90._12_2_ * 0x4a85;
          iVar6 = sVar99 * 0x811a + auVar90._14_2_ * 0x4a85;
          auVar20[4] = (char)iVar22;
          auVar20._0_4_ = iVar21;
          auVar20[5] = uVar48;
          auVar20[6] = uVar49;
          auVar20[7] = uVar50;
          auVar20._8_2_ = (short)iVar23;
          auVar20._10_2_ = (short)((uint)iVar23 >> 0x10);
          auVar20._12_2_ = (short)iVar24;
          auVar20._14_2_ = (short)((uint)iVar24 >> 0x10);
          auVar91._0_8_ = NEON_rshrn(auVar90._0_8_,auVar20,0xe,4);
          auVar125._8_8_ = auVar124._8_8_;
          auVar125._0_8_ = NEON_rshrn(auVar124._0_8_,auVar124,0xe,4);
          auVar26[4] = (char)iVar28;
          auVar26._0_4_ = iVar27;
          auVar26[5] = uVar51;
          auVar26[6] = uVar52;
          auVar26[7] = uVar53;
          auVar26._8_2_ = (short)iVar29;
          auVar26._10_2_ = (short)((uint)iVar29 >> 0x10);
          auVar26._12_2_ = (short)iVar30;
          auVar26._14_2_ = (short)((uint)iVar30 >> 0x10);
          auVar89 = NEON_rshrn2(auVar91,auVar26,0xe,4);
          auVar14[4] = (char)iVar16;
          auVar14._0_4_ = iVar15;
          auVar14[5] = uVar45;
          auVar14[6] = uVar46;
          auVar14[7] = uVar47;
          auVar14._8_2_ = (short)iVar17;
          auVar14._10_2_ = (short)((uint)iVar17 >> 0x10);
          auVar14._12_2_ = (short)iVar18;
          auVar14._14_2_ = (short)((uint)iVar18 >> 0x10);
          auVar123 = NEON_rshrn2(auVar125,auVar14,0xe,4);
          auVar105._8_8_ = auVar104._8_8_;
          auVar105._0_8_ = NEON_rshrn(auVar104._0_8_,auVar104,0xe,4);
          uVar101 = NEON_sqxtun(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14((char)
                                                  iVar28,iVar27)))),auVar89,2);
          uVar39 = uVar39 + 8;
          auVar12[4] = (char)iVar43;
          auVar12._0_4_ = CONCAT13(sVar96 >> 0xf,(int3)sVar96) * 0x811a + auVar90._8_2_ * 0x4a85;
          auVar12[5] = (char)((uint)iVar43 >> 8);
          auVar12[6] = (char)((uint)iVar43 >> 0x10);
          auVar12[7] = (char)((uint)iVar43 >> 0x18);
          auVar12._8_2_ = (short)iVar1;
          auVar12._10_2_ = (short)((uint)iVar1 >> 0x10);
          auVar12._12_2_ = (short)iVar6;
          auVar12._14_2_ = (short)((uint)iVar6 >> 0x10);
          auVar89 = NEON_rshrn2(auVar105,auVar12,0xe,4);
          uVar86 = NEON_sqxtun(CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14((char)iVar22
                                                                                        ,iVar21)))),
                               auVar123,2);
          pcVar42 = param_8 + (uVar40 & 0xfffffffb);
          uVar75 = NEON_sqxtun(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14((char)iVar16
                                                                                        ,iVar15)))),
                               auVar89,2);
          uVar40 = uVar40 + 0x18;
          *pcVar42 = (char)uVar75;
          pcVar42[1] = (char)uVar86;
          pcVar42[2] = (char)uVar101;
          pcVar42[3] = (char)((ulong)uVar75 >> 8);
          pcVar42[4] = (char)((ulong)uVar86 >> 8);
          pcVar42[5] = (char)((ulong)uVar101 >> 8);
          pcVar42[6] = (char)((ulong)uVar75 >> 0x10);
          pcVar42[7] = (char)((ulong)uVar86 >> 0x10);
          pcVar42[8] = (char)((ulong)uVar101 >> 0x10);
          pcVar42[9] = (char)((ulong)uVar75 >> 0x18);
          pcVar42[10] = (char)((ulong)uVar86 >> 0x18);
          pcVar42[0xb] = (char)((ulong)uVar101 >> 0x18);
          pcVar42[0xc] = (char)((ulong)uVar75 >> 0x20);
          pcVar42[0xd] = (char)((ulong)uVar86 >> 0x20);
          pcVar42[0xe] = (char)((ulong)uVar101 >> 0x20);
          pcVar42[0xf] = (char)((ulong)uVar75 >> 0x28);
          pcVar42[0x10] = (char)((ulong)uVar86 >> 0x28);
          pcVar42[0x11] = (char)((ulong)uVar101 >> 0x28);
          pcVar42[0x12] = (char)((ulong)uVar75 >> 0x30);
          pcVar42[0x13] = (char)((ulong)uVar86 >> 0x30);
          pcVar42[0x14] = (char)((ulong)uVar101 >> 0x30);
          pcVar42[0x15] = (char)((ulong)uVar75 >> 0x38);
          pcVar42[0x16] = (char)((ulong)uVar86 >> 0x38);
          pcVar42[0x17] = (char)((ulong)uVar101 >> 0x38);
        } while (uVar39 < 0x10);
      }
      lVar35 = lVar35 + 1;
      param_3 = param_3 + 8;
      param_5 = param_5 + 8;
      param_4 = param_4 + 8;
      param_6 = param_6 + 8;
      pbVar36 = pbVar36 + 0x10;
      uVar38 = uVar38 + 0x30;
      pbVar37 = pbVar37 + 0x10;
    } while (lVar35 < iVar5);
  }
  iVar43 = (int)lVar44;
  __n = (size_t)iVar43;
  memcpy(abStack_d1 + 1,param_3,__n);
  memcpy(&local_e0,param_5,__n);
  __n_00 = (size_t)(9 - iVar43);
  memset(abStack_d1 + (long)iVar43 + 1,(uint)abStack_d1[lVar44],__n_00);
  memset(&local_e0 + iVar43,(uint)*(byte *)((long)&local_e8 + lVar44 + 7),__n_00);
  bVar61 = (byte)local_cf;
  bVar62 = (byte)((uint7)local_cf >> 8);
  bVar63 = (byte)((uint7)local_cf >> 0x10);
  bVar64 = (byte)((uint7)local_cf >> 0x18);
  bVar65 = (byte)((uint7)local_cf >> 0x20);
  bVar66 = (byte)((uint7)local_cf >> 0x28);
  bVar67 = (byte)((uint7)local_cf >> 0x30);
  bVar68 = (byte)((uint7)uStack_df >> 8);
  bVar69 = (byte)((uint7)uStack_df >> 0x10);
  bVar70 = (byte)((uint7)uStack_df >> 0x18);
  bVar71 = (byte)((uint7)uStack_df >> 0x20);
  bVar72 = (byte)((uint7)uStack_df >> 0x28);
  bVar73 = (byte)((uint7)uStack_df >> 0x30);
  uVar31 = CONCAT12((char)uStack_df,(short)CONCAT71(uStack_df,local_e0)) & 0xff00ff;
  sVar74 = (short)uVar31 + (ushort)bVar61;
  sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar62;
  uVar33 = (undefined2)CONCAT71(local_cf,abStack_d1[1]);
  uVar31 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar32 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar34 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  sVar79 = sVar74 + (short)uVar31 + (short)uVar34;
  sVar81 = sVar76 + (ushort)(byte)(uVar31 >> 0x10) + (ushort)(byte)(uVar34 >> 0x10);
  sVar133 = (ushort)bVar68 + (ushort)bVar63 + (ushort)bVar62 + (ushort)bVar69;
  sVar134 = (ushort)bVar69 + (ushort)bVar64 + (ushort)bVar63 + (ushort)bVar70;
  sVar135 = (ushort)bVar70 + (ushort)bVar65 + (ushort)bVar64 + (ushort)bVar71;
  sVar136 = (ushort)bVar71 + (ushort)bVar66 + (ushort)bVar65 + (ushort)bVar72;
  sVar85 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar92 = (ushort)bVar73 + (ushort)bStack_c8 + (ushort)bVar67 + (ushort)bStack_d8;
  uVar31 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  uVar77 = sVar76 * 2 + sVar81;
  uVar78 = ((ushort)bVar68 + (ushort)bVar63) * 2 + sVar133;
  uVar45 = (undefined1)
           (((ulong)CONCAT24(uVar78,CONCAT22(uVar77,sVar74 * 2 + sVar79)) & 0xfff8) >> 3);
  uVar47 = (undefined1)(uVar77 >> 3);
  uVar49 = (undefined1)(uVar78 >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar69 + (ushort)bVar64) * 2 + sVar134) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar70 + (ushort)bVar65) * 2 + sVar135) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar71 + (ushort)bVar66) * 2 + sVar136) >> 3);
  uVar57 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar85) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bStack_c8) * 2 + sVar92) >> 3);
  uVar46 = (undefined1)((ushort)(sVar79 + (short)uVar32 * 2 + (short)uVar31 * 2) >> 3);
  uVar48 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar32 >> 0x10) * 2 +
                    (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar133 + (ushort)bVar62 * 2 + (ushort)bVar69 * 2) >> 3);
  uVar52 = (undefined1)((ushort)(sVar134 + (ushort)bVar63 * 2 + (ushort)bVar70 * 2) >> 3);
  uVar54 = (undefined1)((ushort)(sVar135 + (ushort)bVar64 * 2 + (ushort)bVar71 * 2) >> 3);
  uVar56 = (undefined1)((ushort)(sVar136 + (ushort)bVar65 * 2 + (ushort)bVar72 * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar92 + (ushort)bVar67 * 2 + (ushort)bStack_d8 * 2) >> 3);
  uVar86 = NEON_urhadd(CONCAT71(local_cf,abStack_d1[1]),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  uVar101 = NEON_urhadd(CONCAT17(bStack_c8,local_cf),
                        CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                                )),1);
  uVar75 = NEON_urhadd(CONCAT71(uStack_df,local_e0),
                       CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                               )),1);
  local_a0[0] = (byte)uVar75;
  local_a0[2] = (byte)((ulong)uVar75 >> 8);
  uStack_9c = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_9a = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_98 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_96 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_94 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_92 = (undefined1)((ulong)uVar75 >> 0x38);
  uVar75 = NEON_urhadd(CONCAT17(bStack_d8,uStack_df),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  local_a0[1] = (byte)uVar75;
  local_a0[3] = (byte)((ulong)uVar75 >> 8);
  uStack_9b = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_99 = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_97 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_95 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_93 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_91 = (undefined1)((ulong)uVar75 >> 0x38);
  local_c0[0] = (byte)uVar86;
  local_c0[1] = (byte)uVar101;
  local_c0[2] = (byte)((ulong)uVar86 >> 8);
  local_c0[3] = (byte)((ulong)uVar101 >> 8);
  uStack_bc = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_bb = (undefined1)((ulong)uVar101 >> 0x10);
  uStack_ba = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_b9 = (undefined1)((ulong)uVar101 >> 0x18);
  uStack_b8 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_b7 = (undefined1)((ulong)uVar101 >> 0x20);
  uStack_b6 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_b5 = (undefined1)((ulong)uVar101 >> 0x28);
  uStack_b4 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_b3 = (undefined1)((ulong)uVar101 >> 0x30);
  uStack_b2 = (undefined1)((ulong)uVar86 >> 0x38);
  uStack_b1 = (undefined1)((ulong)uVar101 >> 0x38);
  memcpy(abStack_d1 + 1,param_4,__n);
  memcpy(&local_e0,param_6,__n);
  memset(abStack_d1 + (long)iVar43 + 1,(uint)abStack_d1[lVar44],__n_00);
  memset(&local_e0 + iVar43,(uint)*(byte *)((long)&local_e8 + lVar44 + 7),__n_00);
  bVar61 = (byte)local_cf;
  bVar62 = (byte)((uint7)local_cf >> 8);
  bVar63 = (byte)((uint7)local_cf >> 0x10);
  bVar64 = (byte)((uint7)local_cf >> 0x18);
  bVar65 = (byte)((uint7)local_cf >> 0x20);
  bVar66 = (byte)((uint7)local_cf >> 0x28);
  bVar67 = (byte)((uint7)local_cf >> 0x30);
  bVar68 = (byte)((uint7)uStack_df >> 8);
  bVar69 = (byte)((uint7)uStack_df >> 0x10);
  bVar70 = (byte)((uint7)uStack_df >> 0x18);
  bVar71 = (byte)((uint7)uStack_df >> 0x20);
  bVar72 = (byte)((uint7)uStack_df >> 0x28);
  bVar73 = (byte)((uint7)uStack_df >> 0x30);
  uVar31 = CONCAT12((char)uStack_df,(short)CONCAT71(uStack_df,local_e0)) & 0xff00ff;
  sVar74 = (short)uVar31 + (ushort)bVar61;
  sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar62;
  uVar33 = (undefined2)CONCAT71(local_cf,abStack_d1[1]);
  uVar31 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar32 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar34 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  sVar79 = sVar74 + (short)uVar31 + (short)uVar34;
  sVar81 = sVar76 + (ushort)(byte)(uVar31 >> 0x10) + (ushort)(byte)(uVar34 >> 0x10);
  sVar133 = (ushort)bVar68 + (ushort)bVar63 + (ushort)bVar62 + (ushort)bVar69;
  sVar134 = (ushort)bVar69 + (ushort)bVar64 + (ushort)bVar63 + (ushort)bVar70;
  sVar135 = (ushort)bVar70 + (ushort)bVar65 + (ushort)bVar64 + (ushort)bVar71;
  sVar136 = (ushort)bVar71 + (ushort)bVar66 + (ushort)bVar65 + (ushort)bVar72;
  sVar85 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar92 = (ushort)bVar73 + (ushort)bStack_c8 + (ushort)bVar67 + (ushort)bStack_d8;
  uVar31 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  uVar77 = sVar76 * 2 + sVar81;
  uVar78 = ((ushort)bVar68 + (ushort)bVar63) * 2 + sVar133;
  uVar45 = (undefined1)
           (((ulong)CONCAT24(uVar78,CONCAT22(uVar77,sVar74 * 2 + sVar79)) & 0xfff8) >> 3);
  uVar47 = (undefined1)(uVar77 >> 3);
  uVar49 = (undefined1)(uVar78 >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar69 + (ushort)bVar64) * 2 + sVar134) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar70 + (ushort)bVar65) * 2 + sVar135) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar71 + (ushort)bVar66) * 2 + sVar136) >> 3);
  uVar57 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar85) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bStack_c8) * 2 + sVar92) >> 3);
  uVar46 = (undefined1)((ushort)(sVar79 + (short)uVar32 * 2 + (short)uVar31 * 2) >> 3);
  uVar48 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar32 >> 0x10) * 2 +
                    (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar133 + (ushort)bVar62 * 2 + (ushort)bVar69 * 2) >> 3);
  uVar52 = (undefined1)((ushort)(sVar134 + (ushort)bVar63 * 2 + (ushort)bVar70 * 2) >> 3);
  uVar54 = (undefined1)((ushort)(sVar135 + (ushort)bVar64 * 2 + (ushort)bVar71 * 2) >> 3);
  uVar56 = (undefined1)((ushort)(sVar136 + (ushort)bVar65 * 2 + (ushort)bVar72 * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar92 + (ushort)bVar67 * 2 + (ushort)bStack_d8 * 2) >> 3);
  uVar75 = NEON_urhadd(CONCAT71(local_cf,abStack_d1[1]),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  uVar86 = NEON_urhadd(CONCAT17(bStack_c8,local_cf),
                       CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                               )),1);
  local_b0[0] = (byte)uVar75;
  local_b0[1] = (byte)uVar86;
  local_b0[2] = (byte)((ulong)uVar75 >> 8);
  local_b0[3] = (byte)((ulong)uVar86 >> 8);
  uStack_ac = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_ab = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_aa = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_a9 = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_a8 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_a7 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_a6 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_a5 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_a4 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_a3 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_a2 = (undefined1)((ulong)uVar75 >> 0x38);
  uStack_a1 = (undefined1)((ulong)uVar86 >> 0x38);
  uVar75 = NEON_urhadd(CONCAT71(uStack_df,local_e0),
                       CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                               )),1);
  local_90[0] = (byte)uVar75;
  local_90[2] = (byte)((ulong)uVar75 >> 8);
  uStack_8c = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_8a = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_88 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_86 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_84 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_82 = (undefined1)((ulong)uVar75 >> 0x38);
  uVar75 = NEON_urhadd(CONCAT17(bStack_d8,uStack_df),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  local_90[1] = (byte)uVar75;
  local_90[3] = (byte)((ulong)uVar75 >> 8);
  uStack_8b = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_89 = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_87 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_85 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_83 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_81 = (undefined1)((ulong)uVar75 >> 0x38);
  if ((int)uVar2 < param_9) {
    uVar39 = (ulong)((param_9 + -1) - (uVar2 - 1));
    uVar38 = 0;
    pcVar42 = param_7 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) +
                        (long)(int)uVar2 + 2;
    do {
      bVar61 = local_c0[(int)uVar38 + 0x10];
      iVar43 = (uint)param_1[uVar38 + (long)(int)uVar2] * 0x4a85;
      uVar3 = iVar43 + -0x451550 + (uint)local_c0[uVar38] * 0x811a;
      if (uVar3 >> 0x16 == 0) {
        cVar41 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar41 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar43 + 0x220530 + (uint)local_c0[uVar38] * -0x1913 + (uint)bVar61 * -0x3408;
      pcVar42[-2] = cVar41;
      if (uVar3 >> 0x16 == 0) {
        cVar41 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar41 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar43 + -0x379ad0 + (uint)bVar61 * 0x6625;
      pcVar42[-1] = cVar41;
      if (uVar3 >> 0x16 == 0) {
        cVar41 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar41 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar38 = uVar38 + 1;
      *pcVar42 = cVar41;
      pcVar42 = pcVar42 + 3;
    } while (uVar39 != uVar38);
    if ((param_2 != (byte *)0x0) && ((int)uVar2 < param_9)) {
      uVar38 = 0;
      pcVar42 = param_8 + (long)(int)uVar2 * 3 + 2;
      do {
        bVar61 = local_a0[(int)uVar38 + 0x10];
        iVar43 = (uint)param_2[uVar38 + (long)(int)uVar2] * 0x4a85;
        uVar3 = iVar43 + -0x451550 + (uint)local_a0[uVar38] * 0x811a;
        if (uVar3 >> 0x16 == 0) {
          cVar41 = (char)(uVar3 >> 0xe);
        }
        else {
          cVar41 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
        }
        uVar3 = iVar43 + 0x220530 + (uint)local_a0[uVar38] * -0x1913 + (uint)bVar61 * -0x3408;
        pcVar42[-2] = cVar41;
        if (uVar3 >> 0x16 == 0) {
          cVar41 = (char)(uVar3 >> 0xe);
        }
        else {
          cVar41 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
        }
        uVar3 = iVar43 + -0x379ad0 + (uint)bVar61 * 0x6625;
        pcVar42[-1] = cVar41;
        if (uVar3 >> 0x16 == 0) {
          cVar41 = (char)(uVar3 >> 0xe);
        }
        else {
          cVar41 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
        }
        uVar38 = uVar38 + 1;
        *pcVar42 = cVar41;
        pcVar42 = pcVar42 + 3;
      } while (uVar39 != uVar38);
    }
  }
  if (*(long *)(local_e8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019b4df8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined6 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint3 uVar31;
  uint3 uVar32;
  undefined2 uVar33;
  uint3 uVar34;
  long lVar35;
  uint uVar36;
  byte *pbVar37;
  byte *pbVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  char cVar42;
  size_t __n;
  size_t __n_00;
  int iVar43;
  long lVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
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
  short sVar74;
  short sVar76;
  ushort uVar77;
  ushort uVar78;
  undefined8 uVar75;
  short sVar79;
  short sVar81;
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  short sVar85;
  short sVar92;
  short sVar93;
  undefined8 uVar86;
  short sVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  byte bVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  byte bVar106;
  short sVar100;
  byte bVar107;
  byte bVar109;
  short sVar108;
  byte bVar110;
  byte bVar112;
  short sVar111;
  byte bVar113;
  undefined8 uVar101;
  byte bVar115;
  short sVar114;
  short sVar116;
  short sVar117;
  short sVar118;
  short sVar119;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  undefined8 uVar120;
  byte bVar132;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  short sVar133;
  short sVar134;
  short sVar135;
  short sVar136;
  undefined8 uVar137;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  byte bStack_d8;
  byte abStack_d1 [2];
  undefined7 local_cf;
  byte bStack_c8;
  byte local_c0 [4];
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  byte local_b0 [4];
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  byte local_a0 [4];
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  byte local_90 [4];
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long local_70;
  undefined1 auVar87 [16];
  
  local_e8 = tpidr_el0;
  local_70 = *(long *)(local_e8 + 0x28);
  iVar43 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar4 = (uint)*param_1 * 0x4a85;
  uVar36 = iVar43 + (uint)*param_3 >> 1 & 0xff;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar2 = (iVar4 + uVar36 * 0x811a) - 0x451550;
  uVar6 = iVar1 + (uint)*param_4 >> 1 & 0xff;
  if (uVar2 >> 0x16 == 0) {
    cVar42 = (char)(uVar2 >> 0xe);
  }
  else {
    cVar42 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
  }
  uVar2 = iVar4 + uVar36 * -0x1913 + uVar6 * -0x3408 + 0x220530;
  uVar36 = ((int)(param_9 + 1U) >> 1) - 1;
  *param_7 = cVar42;
  if (uVar2 >> 0x16 == 0) {
    cVar42 = (char)(uVar2 >> 0xe);
  }
  else {
    cVar42 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
  }
  uVar2 = (iVar4 + uVar6 * 0x6625) - 0x379ad0;
  param_7[1] = cVar42;
  if (uVar2 >> 0x16 == 0) {
    cVar42 = (char)(uVar2 >> 0xe);
  }
  else {
    cVar42 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
  }
  iVar4 = (int)uVar36 >> 3;
  lVar44 = ((long)((ulong)(param_9 + 1U) << 0x20) >> 0x21) - (long)(int)(uVar36 & 0xfffffff8);
  param_7[2] = cVar42;
  param_7[3] = -1;
  if (param_2 != (byte *)0x0) {
    iVar5 = (uint)*param_2 * 0x4a85;
    uVar36 = iVar43 + (uint)*param_5 >> 1 & 0xff;
    uVar2 = iVar5 + -0x451550 + uVar36 * 0x811a;
    uVar6 = iVar1 + (uint)*param_6 >> 1 & 0xff;
    if (uVar2 >> 0x16 == 0) {
      cVar42 = (char)(uVar2 >> 0xe);
    }
    else {
      cVar42 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
    }
    uVar2 = iVar5 + 0x220530 + uVar36 * -0x1913 + uVar6 * -0x3408;
    *param_8 = cVar42;
    if (uVar2 >> 0x16 == 0) {
      cVar42 = (char)(uVar2 >> 0xe);
    }
    else {
      cVar42 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
    }
    uVar2 = iVar5 + -0x379ad0 + uVar6 * 0x6625;
    param_8[1] = cVar42;
    if (uVar2 >> 0x16 == 0) {
      cVar42 = (char)(uVar2 >> 0xe);
    }
    else {
      cVar42 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar42;
    param_8[3] = -1;
  }
  uVar2 = iVar4 << 4 | 1;
  if (0x10 < param_9) {
    lVar35 = 0;
    pbVar37 = param_1 + 1;
    pbVar38 = param_2 + 1;
    uVar39 = 4;
    auVar80._8_2_ = 0x4a85;
    auVar80._0_8_ = 0x4a854a854a854a85;
    auVar80._10_2_ = 0x4a85;
    auVar80._12_2_ = 0x4a85;
    auVar80._14_2_ = 0x4a85;
    auVar82._8_2_ = 0x4a85;
    auVar82._0_8_ = 0x4a854a854a854a85;
    auVar82._10_2_ = 0x4a85;
    auVar82._12_2_ = 0x4a85;
    auVar82._14_2_ = 0x4a85;
    auVar80 = NEON_ext(auVar80,auVar82,8,1);
    auVar83._8_2_ = 0x6625;
    auVar83._0_8_ = 0x6625662566256625;
    auVar83._10_2_ = 0x6625;
    auVar83._12_2_ = 0x6625;
    auVar83._14_2_ = 0x6625;
    auVar84._8_2_ = 0x6625;
    auVar84._0_8_ = 0x6625662566256625;
    auVar84._10_2_ = 0x6625;
    auVar84._12_2_ = 0x6625;
    auVar84._14_2_ = 0x6625;
    auVar82 = NEON_ext(auVar83,auVar84,8,1);
    auVar89._8_2_ = 0x1913;
    auVar89._0_8_ = 0x1913191319131913;
    auVar89._10_2_ = 0x1913;
    auVar89._12_2_ = 0x1913;
    auVar89._14_2_ = 0x1913;
    auVar123._8_2_ = 0x1913;
    auVar123._0_8_ = 0x1913191319131913;
    auVar123._10_2_ = 0x1913;
    auVar123._12_2_ = 0x1913;
    auVar123._14_2_ = 0x1913;
    auVar83 = NEON_ext(auVar89,auVar123,8,1);
    auVar7._8_2_ = 0x3408;
    auVar7._0_8_ = 0x3408340834083408;
    auVar7._10_2_ = 0x3408;
    auVar7._12_2_ = 0x3408;
    auVar7._14_2_ = 0x3408;
    auVar8._8_2_ = 0x3408;
    auVar8._0_8_ = 0x3408340834083408;
    auVar8._10_2_ = 0x3408;
    auVar8._12_2_ = 0x3408;
    auVar8._14_2_ = 0x3408;
    auVar84 = NEON_ext(auVar7,auVar8,8,1);
    do {
      uVar86 = *(undefined8 *)param_3;
      uVar75 = *(undefined8 *)(param_3 + 1);
      bVar68 = (byte)((ulong)uVar75 >> 8);
      bVar69 = (byte)((ulong)uVar75 >> 0x10);
      bVar70 = (byte)((ulong)uVar75 >> 0x18);
      bVar71 = (byte)((ulong)uVar75 >> 0x20);
      bVar72 = (byte)((ulong)uVar75 >> 0x28);
      bVar73 = (byte)((ulong)uVar75 >> 0x30);
      bVar95 = (byte)((ulong)uVar75 >> 0x38);
      uVar101 = *(undefined8 *)param_5;
      uVar120 = *(undefined8 *)(param_5 + 1);
      bVar61 = (byte)((ulong)uVar86 >> 8);
      bVar62 = (byte)((ulong)uVar86 >> 0x10);
      bVar63 = (byte)((ulong)uVar86 >> 0x18);
      bVar64 = (byte)((ulong)uVar86 >> 0x20);
      bVar65 = (byte)((ulong)uVar86 >> 0x28);
      bVar66 = (byte)((ulong)uVar86 >> 0x30);
      bVar67 = (byte)((ulong)uVar86 >> 0x38);
      uVar31 = CONCAT12(bVar68,(short)uVar75) & 0xff00ff;
      bVar106 = (byte)((ulong)uVar101 >> 8);
      bVar107 = (byte)((ulong)uVar101 >> 0x10);
      bVar109 = (byte)((ulong)uVar101 >> 0x18);
      bVar110 = (byte)((ulong)uVar101 >> 0x20);
      bVar112 = (byte)((ulong)uVar101 >> 0x28);
      bVar113 = (byte)((ulong)uVar101 >> 0x30);
      bVar115 = (byte)((ulong)uVar101 >> 0x38);
      uVar32 = CONCAT12(bVar106,(short)uVar101) & 0xff00ff;
      bVar126 = (byte)((ulong)uVar120 >> 8);
      bVar127 = (byte)((ulong)uVar120 >> 0x10);
      bVar128 = (byte)((ulong)uVar120 >> 0x18);
      bVar129 = (byte)((ulong)uVar120 >> 0x20);
      bVar130 = (byte)((ulong)uVar120 >> 0x28);
      bVar131 = (byte)((ulong)uVar120 >> 0x30);
      bVar132 = (byte)((ulong)uVar120 >> 0x38);
      sVar74 = (short)uVar31 + (ushort)(byte)uVar86 + (short)uVar32 + (ushort)(byte)uVar120;
      sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar61 + (ushort)(byte)(uVar32 >> 0x10) +
               (ushort)bVar126;
      sVar79 = (ushort)bVar69 + (ushort)bVar62 + (ushort)bVar107 + (ushort)bVar127;
      sVar81 = (ushort)bVar70 + (ushort)bVar63 + (ushort)bVar109 + (ushort)bVar128;
      sVar133 = (ushort)bVar71 + (ushort)bVar64 + (ushort)bVar110 + (ushort)bVar129;
      sVar134 = (ushort)bVar72 + (ushort)bVar65 + (ushort)bVar112 + (ushort)bVar130;
      sVar135 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar113 + (ushort)bVar131;
      sVar136 = (ushort)bVar95 + (ushort)bVar67 + (ushort)bVar115 + (ushort)bVar132;
      uVar31 = CONCAT12(bVar126,(short)uVar120) & 0xff00ff;
      uVar45 = (undefined1)
               ((ushort)(((ushort)(byte)uVar101 + (ushort)(byte)uVar75) * 2 + sVar74) >> 3);
      uVar47 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar68) * 2 + sVar76) >> 3);
      uVar49 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar69) * 2 + sVar79) >> 3);
      uVar51 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar70) * 2 + sVar81) >> 3);
      uVar53 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar71) * 2 + sVar133) >> 3);
      uVar55 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar72) * 2 + sVar134) >> 3);
      uVar57 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar73) * 2 + sVar135) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar115 + (ushort)bVar95) * 2 + sVar136) >> 3);
      uVar46 = (undefined1)((ushort)(sVar74 + (ushort)(byte)uVar86 * 2 + (short)uVar31 * 2) >> 3);
      uVar48 = (undefined1)
               ((ushort)(sVar76 + (ushort)bVar61 * 2 + (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
      uVar50 = (undefined1)((ushort)(sVar79 + (ushort)bVar62 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar52 = (undefined1)((ushort)(sVar81 + (ushort)bVar63 * 2 + (ushort)bVar128 * 2) >> 3);
      uVar54 = (undefined1)((ushort)(sVar133 + (ushort)bVar64 * 2 + (ushort)bVar129 * 2) >> 3);
      uVar56 = (undefined1)((ushort)(sVar134 + (ushort)bVar65 * 2 + (ushort)bVar130 * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar135 + (ushort)bVar66 * 2 + (ushort)bVar131 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar136 + (ushort)bVar67 * 2 + (ushort)bVar132 * 2) >> 3);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      uVar137 = NEON_urhadd(uVar75,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar101 = NEON_urhadd(uVar101,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar75 = NEON_urhadd(uVar120,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      local_c0[0] = (byte)uVar86;
      local_c0[1] = (char)uVar137;
      local_c0[2] = (char)((ulong)uVar86 >> 8);
      local_c0[3] = (char)((ulong)uVar137 >> 8);
      uStack_bc = (char)((ulong)uVar86 >> 0x10);
      uStack_bb = (char)((ulong)uVar137 >> 0x10);
      uStack_ba = (char)((ulong)uVar86 >> 0x18);
      uStack_b9 = (char)((ulong)uVar137 >> 0x18);
      uStack_b8 = (char)((ulong)uVar86 >> 0x20);
      uStack_b7 = (char)((ulong)uVar137 >> 0x20);
      uStack_b6 = (char)((ulong)uVar86 >> 0x28);
      uStack_b5 = (char)((ulong)uVar137 >> 0x28);
      uStack_b4 = (char)((ulong)uVar86 >> 0x30);
      uStack_b3 = (char)((ulong)uVar137 >> 0x30);
      uStack_b2 = (char)((ulong)uVar86 >> 0x38);
      uStack_b1 = (char)((ulong)uVar137 >> 0x38);
      local_a0[0] = (byte)uVar101;
      local_a0[1] = (char)uVar75;
      local_a0[2] = (char)((ulong)uVar101 >> 8);
      local_a0[3] = (char)((ulong)uVar75 >> 8);
      uStack_9c = (char)((ulong)uVar101 >> 0x10);
      uStack_9b = (char)((ulong)uVar75 >> 0x10);
      uStack_9a = (char)((ulong)uVar101 >> 0x18);
      uStack_99 = (char)((ulong)uVar75 >> 0x18);
      uStack_98 = (char)((ulong)uVar101 >> 0x20);
      uStack_97 = (char)((ulong)uVar75 >> 0x20);
      uStack_96 = (char)((ulong)uVar101 >> 0x28);
      uStack_95 = (char)((ulong)uVar75 >> 0x28);
      uStack_94 = (char)((ulong)uVar101 >> 0x30);
      uStack_93 = (char)((ulong)uVar75 >> 0x30);
      uStack_92 = (char)((ulong)uVar101 >> 0x38);
      uStack_91 = (char)((ulong)uVar75 >> 0x38);
      uVar86 = *(undefined8 *)param_4;
      uVar75 = *(undefined8 *)(param_4 + 1);
      bVar68 = (byte)((ulong)uVar75 >> 8);
      bVar69 = (byte)((ulong)uVar75 >> 0x10);
      bVar70 = (byte)((ulong)uVar75 >> 0x18);
      bVar71 = (byte)((ulong)uVar75 >> 0x20);
      bVar72 = (byte)((ulong)uVar75 >> 0x28);
      bVar73 = (byte)((ulong)uVar75 >> 0x30);
      bVar95 = (byte)((ulong)uVar75 >> 0x38);
      uVar101 = *(undefined8 *)param_6;
      uVar120 = *(undefined8 *)(param_6 + 1);
      bVar61 = (byte)((ulong)uVar86 >> 8);
      bVar62 = (byte)((ulong)uVar86 >> 0x10);
      bVar63 = (byte)((ulong)uVar86 >> 0x18);
      bVar64 = (byte)((ulong)uVar86 >> 0x20);
      bVar65 = (byte)((ulong)uVar86 >> 0x28);
      bVar66 = (byte)((ulong)uVar86 >> 0x30);
      bVar67 = (byte)((ulong)uVar86 >> 0x38);
      uVar31 = CONCAT12(bVar68,(short)uVar75) & 0xff00ff;
      bVar106 = (byte)((ulong)uVar101 >> 8);
      bVar107 = (byte)((ulong)uVar101 >> 0x10);
      bVar109 = (byte)((ulong)uVar101 >> 0x18);
      bVar110 = (byte)((ulong)uVar101 >> 0x20);
      bVar112 = (byte)((ulong)uVar101 >> 0x28);
      bVar113 = (byte)((ulong)uVar101 >> 0x30);
      bVar115 = (byte)((ulong)uVar101 >> 0x38);
      uVar32 = CONCAT12(bVar106,(short)uVar101) & 0xff00ff;
      bVar126 = (byte)((ulong)uVar120 >> 8);
      bVar127 = (byte)((ulong)uVar120 >> 0x10);
      bVar128 = (byte)((ulong)uVar120 >> 0x18);
      bVar129 = (byte)((ulong)uVar120 >> 0x20);
      bVar130 = (byte)((ulong)uVar120 >> 0x28);
      bVar131 = (byte)((ulong)uVar120 >> 0x30);
      bVar132 = (byte)((ulong)uVar120 >> 0x38);
      sVar74 = (short)uVar31 + (ushort)(byte)uVar86 + (short)uVar32 + (ushort)(byte)uVar120;
      sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar61 + (ushort)(byte)(uVar32 >> 0x10) +
               (ushort)bVar126;
      sVar79 = (ushort)bVar69 + (ushort)bVar62 + (ushort)bVar107 + (ushort)bVar127;
      sVar81 = (ushort)bVar70 + (ushort)bVar63 + (ushort)bVar109 + (ushort)bVar128;
      sVar133 = (ushort)bVar71 + (ushort)bVar64 + (ushort)bVar110 + (ushort)bVar129;
      sVar134 = (ushort)bVar72 + (ushort)bVar65 + (ushort)bVar112 + (ushort)bVar130;
      sVar135 = (ushort)bVar73 + (ushort)bVar66 + (ushort)bVar113 + (ushort)bVar131;
      sVar136 = (ushort)bVar95 + (ushort)bVar67 + (ushort)bVar115 + (ushort)bVar132;
      uVar31 = CONCAT12(bVar126,(short)uVar120) & 0xff00ff;
      uVar45 = (undefined1)
               ((ushort)(((ushort)(byte)uVar101 + (ushort)(byte)uVar75) * 2 + sVar74) >> 3);
      uVar47 = (undefined1)((ushort)(((ushort)bVar106 + (ushort)bVar68) * 2 + sVar76) >> 3);
      uVar49 = (undefined1)((ushort)(((ushort)bVar107 + (ushort)bVar69) * 2 + sVar79) >> 3);
      uVar51 = (undefined1)((ushort)(((ushort)bVar109 + (ushort)bVar70) * 2 + sVar81) >> 3);
      uVar53 = (undefined1)((ushort)(((ushort)bVar110 + (ushort)bVar71) * 2 + sVar133) >> 3);
      uVar55 = (undefined1)((ushort)(((ushort)bVar112 + (ushort)bVar72) * 2 + sVar134) >> 3);
      uVar57 = (undefined1)((ushort)(((ushort)bVar113 + (ushort)bVar73) * 2 + sVar135) >> 3);
      uVar59 = (undefined1)((ushort)(((ushort)bVar115 + (ushort)bVar95) * 2 + sVar136) >> 3);
      uVar46 = (undefined1)((ushort)(sVar74 + (ushort)(byte)uVar86 * 2 + (short)uVar31 * 2) >> 3);
      uVar48 = (undefined1)
               ((ushort)(sVar76 + (ushort)bVar61 * 2 + (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
      uVar50 = (undefined1)((ushort)(sVar79 + (ushort)bVar62 * 2 + (ushort)bVar127 * 2) >> 3);
      uVar52 = (undefined1)((ushort)(sVar81 + (ushort)bVar63 * 2 + (ushort)bVar128 * 2) >> 3);
      uVar54 = (undefined1)((ushort)(sVar133 + (ushort)bVar64 * 2 + (ushort)bVar129 * 2) >> 3);
      uVar56 = (undefined1)((ushort)(sVar134 + (ushort)bVar65 * 2 + (ushort)bVar130 * 2) >> 3);
      uVar58 = (undefined1)((ushort)(sVar135 + (ushort)bVar66 * 2 + (ushort)bVar131 * 2) >> 3);
      uVar60 = (undefined1)((ushort)(sVar136 + (ushort)bVar67 * 2 + (ushort)bVar132 * 2) >> 3);
      uVar86 = NEON_urhadd(uVar86,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      uVar137 = NEON_urhadd(uVar75,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar101 = NEON_urhadd(uVar101,CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,
                                                  uVar46))))))),1);
      uVar40 = 0;
      uVar75 = NEON_urhadd(uVar120,CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,
                                                  CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,
                                                  uVar45))))))),1);
      local_b0[0] = (byte)uVar86;
      local_b0[1] = (char)uVar137;
      local_b0[2] = (char)((ulong)uVar86 >> 8);
      local_b0[3] = (char)((ulong)uVar137 >> 8);
      uStack_ac = (char)((ulong)uVar86 >> 0x10);
      uStack_ab = (char)((ulong)uVar137 >> 0x10);
      uStack_aa = (char)((ulong)uVar86 >> 0x18);
      uStack_a9 = (char)((ulong)uVar137 >> 0x18);
      uStack_a8 = (char)((ulong)uVar86 >> 0x20);
      uStack_a7 = (char)((ulong)uVar137 >> 0x20);
      uStack_a6 = (char)((ulong)uVar86 >> 0x28);
      uStack_a5 = (char)((ulong)uVar137 >> 0x28);
      uStack_a4 = (char)((ulong)uVar86 >> 0x30);
      uStack_a3 = (char)((ulong)uVar137 >> 0x30);
      uStack_a2 = (char)((ulong)uVar86 >> 0x38);
      uStack_a1 = (char)((ulong)uVar137 >> 0x38);
      local_90[0] = (byte)uVar101;
      local_90[1] = (char)uVar75;
      local_90[2] = (char)((ulong)uVar101 >> 8);
      local_90[3] = (char)((ulong)uVar75 >> 8);
      uStack_8c = (char)((ulong)uVar101 >> 0x10);
      uStack_8b = (char)((ulong)uVar75 >> 0x10);
      uStack_8a = (char)((ulong)uVar101 >> 0x18);
      uStack_89 = (char)((ulong)uVar75 >> 0x18);
      uStack_88 = (char)((ulong)uVar101 >> 0x20);
      uStack_87 = (char)((ulong)uVar75 >> 0x20);
      uStack_86 = (char)((ulong)uVar101 >> 0x28);
      uStack_85 = (char)((ulong)uVar75 >> 0x28);
      uStack_84 = (char)((ulong)uVar101 >> 0x30);
      uStack_83 = (char)((ulong)uVar75 >> 0x30);
      uStack_82 = (char)((ulong)uVar101 >> 0x38);
      uStack_81 = (char)((ulong)uVar75 >> 0x38);
      uVar41 = uVar39;
      do {
        uVar86 = *(undefined8 *)(pbVar37 + uVar40);
        uVar75 = *(undefined8 *)(local_c0 + uVar40);
        uVar101 = *(undefined8 *)(local_b0 + uVar40);
        sVar85 = (byte)uVar86 - 0x10;
        sVar92 = (byte)((ulong)uVar86 >> 8) - 0x10;
        sVar93 = (byte)((ulong)uVar86 >> 0x10) - 0x10;
        sVar94 = (byte)((ulong)uVar86 >> 0x18) - 0x10;
        auVar87._0_8_ = CONCAT26(sVar94,CONCAT24(sVar93,CONCAT22(sVar92,sVar85)));
        auVar87._8_2_ = (byte)((ulong)uVar86 >> 0x20) - 0x10;
        auVar87._10_2_ = (byte)((ulong)uVar86 >> 0x28) - 0x10;
        auVar87._12_2_ = (byte)((ulong)uVar86 >> 0x30) - 0x10;
        auVar87._14_2_ = (byte)((ulong)uVar86 >> 0x38) - 0x10;
        sVar133 = auVar80._0_2_;
        sVar134 = auVar80._2_2_;
        sVar135 = auVar80._4_2_;
        sVar136 = auVar80._6_2_;
        uVar31 = CONCAT12((char)((ulong)uVar75 >> 8),(short)uVar75) & 0xff00ff;
        sVar74 = (short)uVar31 + -0x80;
        sVar76 = (byte)(uVar31 >> 0x10) - 0x80;
        sVar79 = (byte)((ulong)uVar75 >> 0x10) - 0x80;
        sVar81 = (byte)((ulong)uVar75 >> 0x18) - 0x80;
        sVar96 = (byte)((ulong)uVar75 >> 0x20) - 0x80;
        sVar97 = (byte)((ulong)uVar75 >> 0x28) - 0x80;
        sVar98 = (byte)((ulong)uVar75 >> 0x30) - 0x80;
        sVar99 = (byte)((ulong)uVar75 >> 0x38) - 0x80;
        sVar100 = (byte)uVar101 - 0x80;
        sVar108 = (byte)((ulong)uVar101 >> 8) - 0x80;
        sVar111 = (byte)((ulong)uVar101 >> 0x10) - 0x80;
        sVar114 = (byte)((ulong)uVar101 >> 0x18) - 0x80;
        sVar116 = (byte)((ulong)uVar101 >> 0x20) - 0x80;
        sVar117 = (byte)((ulong)uVar101 >> 0x28) - 0x80;
        sVar118 = (byte)((ulong)uVar101 >> 0x30) - 0x80;
        sVar119 = (byte)((ulong)uVar101 >> 0x38) - 0x80;
        auVar88._8_8_ = auVar87._8_8_;
        uVar9 = CONCAT13((char)((ushort)sVar76 >> 8),CONCAT12((char)sVar76,sVar74));
        uVar10 = CONCAT15((char)((ushort)sVar79 >> 8),CONCAT14((char)sVar79,uVar9));
        iVar20 = (int)sVar108 * (int)auVar82._2_2_ + (int)sVar92 * (int)sVar134;
        iVar21 = (int)sVar111 * (int)auVar82._4_2_ + (int)sVar93 * (int)sVar135;
        iVar22 = (int)sVar114 * (int)auVar82._6_2_ + (int)sVar94 * (int)sVar136;
        auVar121._0_8_ =
             CONCAT44(((int)sVar92 * (int)sVar134 - (int)sVar76 * (int)auVar83._2_2_) -
                      (int)sVar108 * (int)auVar84._2_2_,
                      ((int)sVar85 * (int)sVar133 - (int)sVar74 * (int)auVar83._0_2_) -
                      (int)sVar100 * (int)auVar84._0_2_);
        auVar121._8_4_ =
             ((int)sVar93 * (int)sVar135 - (int)sVar79 * (int)auVar83._4_2_) -
             (int)sVar111 * (int)auVar84._4_2_;
        auVar121._12_4_ =
             ((int)sVar94 * (int)sVar136 - (int)sVar81 * (int)auVar83._6_2_) -
             (int)sVar114 * (int)auVar84._6_2_;
        iVar15 = auVar87._10_2_ * 0x4a85 + sVar97 * -0x1913 + sVar117 * -0x3408;
        iVar16 = auVar87._12_2_ * 0x4a85 + sVar98 * -0x1913 + sVar118 * -0x3408;
        iVar17 = auVar87._14_2_ * 0x4a85 + sVar99 * -0x1913 + sVar119 * -0x3408;
        iVar25 = sVar117 * 0x6625 + auVar87._10_2_ * 0x4a85;
        iVar27 = sVar118 * 0x6625 + auVar87._12_2_ * 0x4a85;
        iVar29 = sVar119 * 0x6625 + auVar87._14_2_ * 0x4a85;
        auVar102._0_8_ =
             CONCAT44((short)((uint)uVar9 >> 0x10) * 0x811a + (int)sVar92 * (int)sVar134,
                      sVar74 * 0x811a + (int)sVar85 * (int)sVar133);
        auVar102._8_4_ = (short)((uint6)uVar10 >> 0x20) * 0x811a + (int)sVar93 * (int)sVar135;
        auVar102._12_4_ =
             (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar10)) >> 0x30) *
             0x811a + (int)sVar94 * (int)sVar136;
        iVar43 = CONCAT13(sVar97 >> 0xf,(int3)sVar97) * 0x811a + auVar87._10_2_ * 0x4a85;
        iVar1 = sVar98 * 0x811a + auVar87._12_2_ * 0x4a85;
        iVar5 = sVar99 * 0x811a + auVar87._14_2_ * 0x4a85;
        auVar18[4] = (char)iVar20;
        auVar18._0_4_ = (int)sVar100 * (int)auVar82._0_2_ + (int)sVar85 * (int)sVar133;
        auVar18[5] = (char)((uint)iVar20 >> 8);
        auVar18[6] = (char)((uint)iVar20 >> 0x10);
        auVar18[7] = (char)((uint)iVar20 >> 0x18);
        auVar18._8_2_ = (short)iVar21;
        auVar18._10_2_ = (short)((uint)iVar21 >> 0x10);
        auVar18._12_2_ = (short)iVar22;
        auVar18._14_2_ = (short)((uint)iVar22 >> 0x10);
        auVar88._0_8_ = NEON_rshrn(auVar87._0_8_,auVar18,0xe,4);
        auVar122._8_8_ = auVar121._8_8_;
        auVar122._0_8_ = NEON_rshrn(auVar121._0_8_,auVar121,0xe,4);
        auVar23[4] = (char)iVar25;
        auVar23._0_4_ = sVar116 * 0x6625 + auVar87._8_2_ * 0x4a85;
        auVar23[5] = (char)((uint)iVar25 >> 8);
        auVar23[6] = (char)((uint)iVar25 >> 0x10);
        auVar23[7] = (char)((uint)iVar25 >> 0x18);
        auVar23._8_2_ = (short)iVar27;
        auVar23._10_2_ = (short)((uint)iVar27 >> 0x10);
        auVar23._12_2_ = (short)iVar29;
        auVar23._14_2_ = (short)((uint)iVar29 >> 0x10);
        auVar89 = NEON_rshrn2(auVar88,auVar23,0xe,4);
        auVar13[4] = (char)iVar15;
        auVar13._0_4_ = auVar87._8_2_ * 0x4a85 + sVar96 * -0x1913 + sVar116 * -0x3408;
        auVar13[5] = (char)((uint)iVar15 >> 8);
        auVar13[6] = (char)((uint)iVar15 >> 0x10);
        auVar13[7] = (char)((uint)iVar15 >> 0x18);
        auVar13._8_2_ = (short)iVar16;
        auVar13._10_2_ = (short)((uint)iVar16 >> 0x10);
        auVar13._12_2_ = (short)iVar17;
        auVar13._14_2_ = (short)((uint)iVar17 >> 0x10);
        auVar123 = NEON_rshrn2(auVar122,auVar13,0xe,4);
        auVar103._8_8_ = auVar102._8_8_;
        auVar103._0_8_ = NEON_rshrn(auVar102._0_8_,auVar102,0xe,4);
        in_d21 = NEON_sqxtun(in_d21,auVar89,2);
        uVar40 = uVar40 + 8;
        auVar11[4] = (char)iVar43;
        auVar11._0_4_ = CONCAT13(sVar96 >> 0xf,(int3)sVar96) * 0x811a + auVar87._8_2_ * 0x4a85;
        auVar11[5] = (char)((uint)iVar43 >> 8);
        auVar11[6] = (char)((uint)iVar43 >> 0x10);
        auVar11[7] = (char)((uint)iVar43 >> 0x18);
        auVar11._8_2_ = (short)iVar1;
        auVar11._10_2_ = (short)((uint)iVar1 >> 0x10);
        auVar11._12_2_ = (short)iVar5;
        auVar11._14_2_ = (short)((uint)iVar5 >> 0x10);
        auVar89 = NEON_rshrn2(auVar103,auVar11,0xe,4);
        in_d20 = NEON_sqxtun(in_d20,auVar123,2);
        pcVar3 = param_7 + (uVar41 & 0xffffffe4);
        in_d19 = NEON_sqxtun(in_d19,auVar89,2);
        uVar41 = uVar41 + 0x20;
        *pcVar3 = (char)in_d19;
        pcVar3[1] = (char)in_d20;
        pcVar3[2] = (char)in_d21;
        pcVar3[3] = -1;
        pcVar3[4] = (char)((ulong)in_d19 >> 8);
        pcVar3[5] = (char)((ulong)in_d20 >> 8);
        pcVar3[6] = (char)((ulong)in_d21 >> 8);
        pcVar3[7] = -1;
        pcVar3[8] = (char)((ulong)in_d19 >> 0x10);
        pcVar3[9] = (char)((ulong)in_d20 >> 0x10);
        pcVar3[10] = (char)((ulong)in_d21 >> 0x10);
        pcVar3[0xb] = -1;
        pcVar3[0xc] = (char)((ulong)in_d19 >> 0x18);
        pcVar3[0xd] = (char)((ulong)in_d20 >> 0x18);
        pcVar3[0xe] = (char)((ulong)in_d21 >> 0x18);
        pcVar3[0xf] = -1;
        pcVar3[0x10] = (char)((ulong)in_d19 >> 0x20);
        pcVar3[0x11] = (char)((ulong)in_d20 >> 0x20);
        pcVar3[0x12] = (char)((ulong)in_d21 >> 0x20);
        pcVar3[0x13] = -1;
        pcVar3[0x14] = (char)((ulong)in_d19 >> 0x28);
        pcVar3[0x15] = (char)((ulong)in_d20 >> 0x28);
        pcVar3[0x16] = (char)((ulong)in_d21 >> 0x28);
        pcVar3[0x17] = -1;
        pcVar3[0x18] = (char)((ulong)in_d19 >> 0x30);
        pcVar3[0x19] = (char)((ulong)in_d20 >> 0x30);
        pcVar3[0x1a] = (char)((ulong)in_d21 >> 0x30);
        pcVar3[0x1b] = -1;
        pcVar3[0x1c] = (char)((ulong)in_d19 >> 0x38);
        pcVar3[0x1d] = (char)((ulong)in_d20 >> 0x38);
        pcVar3[0x1e] = (char)((ulong)in_d21 >> 0x38);
        pcVar3[0x1f] = -1;
      } while (uVar40 < 0x10);
      if (param_2 != (byte *)0x0) {
        uVar40 = 0;
        uVar41 = uVar39;
        do {
          uVar86 = *(undefined8 *)(pbVar38 + uVar40);
          uVar75 = *(undefined8 *)(local_a0 + uVar40);
          uVar101 = *(undefined8 *)(local_90 + uVar40);
          sVar85 = (byte)uVar86 - 0x10;
          sVar92 = (byte)((ulong)uVar86 >> 8) - 0x10;
          sVar93 = (byte)((ulong)uVar86 >> 0x10) - 0x10;
          sVar94 = (byte)((ulong)uVar86 >> 0x18) - 0x10;
          auVar90._0_8_ = CONCAT26(sVar94,CONCAT24(sVar93,CONCAT22(sVar92,sVar85)));
          auVar90._8_2_ = (byte)((ulong)uVar86 >> 0x20) - 0x10;
          auVar90._10_2_ = (byte)((ulong)uVar86 >> 0x28) - 0x10;
          auVar90._12_2_ = (byte)((ulong)uVar86 >> 0x30) - 0x10;
          auVar90._14_2_ = (byte)((ulong)uVar86 >> 0x38) - 0x10;
          uVar31 = CONCAT12((char)((ulong)uVar75 >> 8),(short)uVar75) & 0xff00ff;
          sVar74 = (short)uVar31 + -0x80;
          sVar76 = (byte)(uVar31 >> 0x10) - 0x80;
          sVar79 = (byte)((ulong)uVar75 >> 0x10) - 0x80;
          sVar81 = (byte)((ulong)uVar75 >> 0x18) - 0x80;
          sVar96 = (byte)((ulong)uVar75 >> 0x20) - 0x80;
          sVar97 = (byte)((ulong)uVar75 >> 0x28) - 0x80;
          sVar98 = (byte)((ulong)uVar75 >> 0x30) - 0x80;
          sVar99 = (byte)((ulong)uVar75 >> 0x38) - 0x80;
          sVar100 = (byte)uVar101 - 0x80;
          sVar108 = (byte)((ulong)uVar101 >> 8) - 0x80;
          sVar111 = (byte)((ulong)uVar101 >> 0x10) - 0x80;
          sVar114 = (byte)((ulong)uVar101 >> 0x18) - 0x80;
          sVar116 = (byte)((ulong)uVar101 >> 0x20) - 0x80;
          sVar117 = (byte)((ulong)uVar101 >> 0x28) - 0x80;
          sVar118 = (byte)((ulong)uVar101 >> 0x30) - 0x80;
          sVar119 = (byte)((ulong)uVar101 >> 0x38) - 0x80;
          auVar91._8_8_ = auVar90._8_8_;
          uVar9 = CONCAT13((char)((ushort)sVar76 >> 8),CONCAT12((char)sVar76,sVar74));
          uVar10 = CONCAT15((char)((ushort)sVar79 >> 8),CONCAT14((char)sVar79,uVar9));
          iVar21 = (int)sVar100 * (int)auVar82._0_2_ + (int)sVar85 * (int)sVar133;
          iVar22 = (int)sVar108 * (int)auVar82._2_2_ + (int)sVar92 * (int)sVar134;
          uVar48 = (undefined1)((uint)iVar22 >> 8);
          uVar49 = (undefined1)((uint)iVar22 >> 0x10);
          uVar50 = (undefined1)((uint)iVar22 >> 0x18);
          iVar25 = (int)sVar111 * (int)auVar82._4_2_ + (int)sVar93 * (int)sVar135;
          iVar27 = (int)sVar114 * (int)auVar82._6_2_ + (int)sVar94 * (int)sVar136;
          auVar124._0_8_ =
               CONCAT44(((int)sVar92 * (int)sVar134 - (int)sVar76 * (int)auVar83._2_2_) -
                        (int)sVar108 * (int)auVar84._2_2_,
                        ((int)sVar85 * (int)sVar133 - (int)sVar74 * (int)auVar83._0_2_) -
                        (int)sVar100 * (int)auVar84._0_2_);
          auVar124._8_4_ =
               ((int)sVar93 * (int)sVar135 - (int)sVar79 * (int)auVar83._4_2_) -
               (int)sVar111 * (int)auVar84._4_2_;
          auVar124._12_4_ =
               ((int)sVar94 * (int)sVar136 - (int)sVar81 * (int)auVar83._6_2_) -
               (int)sVar114 * (int)auVar84._6_2_;
          iVar15 = auVar90._8_2_ * 0x4a85 + sVar96 * -0x1913 + sVar116 * -0x3408;
          iVar16 = auVar90._10_2_ * 0x4a85 + sVar97 * -0x1913 + sVar117 * -0x3408;
          uVar45 = (undefined1)((uint)iVar16 >> 8);
          uVar46 = (undefined1)((uint)iVar16 >> 0x10);
          uVar47 = (undefined1)((uint)iVar16 >> 0x18);
          iVar17 = auVar90._12_2_ * 0x4a85 + sVar98 * -0x1913 + sVar118 * -0x3408;
          iVar20 = auVar90._14_2_ * 0x4a85 + sVar99 * -0x1913 + sVar119 * -0x3408;
          iVar29 = sVar116 * 0x6625 + auVar90._8_2_ * 0x4a85;
          iVar26 = sVar117 * 0x6625 + auVar90._10_2_ * 0x4a85;
          uVar51 = (undefined1)((uint)iVar26 >> 8);
          uVar52 = (undefined1)((uint)iVar26 >> 0x10);
          uVar53 = (undefined1)((uint)iVar26 >> 0x18);
          iVar28 = sVar118 * 0x6625 + auVar90._12_2_ * 0x4a85;
          iVar30 = sVar119 * 0x6625 + auVar90._14_2_ * 0x4a85;
          auVar104._0_8_ =
               CONCAT44((short)((uint)uVar9 >> 0x10) * 0x811a + (int)sVar92 * (int)sVar134,
                        sVar74 * 0x811a + (int)sVar85 * (int)sVar133);
          auVar104._8_4_ = (short)((uint6)uVar10 >> 0x20) * 0x811a + (int)sVar93 * (int)sVar135;
          auVar104._12_4_ =
               (short)(CONCAT17((char)((ushort)sVar81 >> 8),CONCAT16((char)sVar81,uVar10)) >> 0x30)
               * 0x811a + (int)sVar94 * (int)sVar136;
          iVar43 = CONCAT13(sVar97 >> 0xf,(int3)sVar97) * 0x811a + auVar90._10_2_ * 0x4a85;
          iVar1 = sVar98 * 0x811a + auVar90._12_2_ * 0x4a85;
          iVar5 = sVar99 * 0x811a + auVar90._14_2_ * 0x4a85;
          auVar19[4] = (char)iVar22;
          auVar19._0_4_ = iVar21;
          auVar19[5] = uVar48;
          auVar19[6] = uVar49;
          auVar19[7] = uVar50;
          auVar19._8_2_ = (short)iVar25;
          auVar19._10_2_ = (short)((uint)iVar25 >> 0x10);
          auVar19._12_2_ = (short)iVar27;
          auVar19._14_2_ = (short)((uint)iVar27 >> 0x10);
          auVar91._0_8_ = NEON_rshrn(auVar90._0_8_,auVar19,0xe,4);
          auVar125._8_8_ = auVar124._8_8_;
          auVar125._0_8_ = NEON_rshrn(auVar124._0_8_,auVar124,0xe,4);
          auVar24[4] = (char)iVar26;
          auVar24._0_4_ = iVar29;
          auVar24[5] = uVar51;
          auVar24[6] = uVar52;
          auVar24[7] = uVar53;
          auVar24._8_2_ = (short)iVar28;
          auVar24._10_2_ = (short)((uint)iVar28 >> 0x10);
          auVar24._12_2_ = (short)iVar30;
          auVar24._14_2_ = (short)((uint)iVar30 >> 0x10);
          auVar89 = NEON_rshrn2(auVar91,auVar24,0xe,4);
          auVar14[4] = (char)iVar16;
          auVar14._0_4_ = iVar15;
          auVar14[5] = uVar45;
          auVar14[6] = uVar46;
          auVar14[7] = uVar47;
          auVar14._8_2_ = (short)iVar17;
          auVar14._10_2_ = (short)((uint)iVar17 >> 0x10);
          auVar14._12_2_ = (short)iVar20;
          auVar14._14_2_ = (short)((uint)iVar20 >> 0x10);
          auVar123 = NEON_rshrn2(auVar125,auVar14,0xe,4);
          auVar105._8_8_ = auVar104._8_8_;
          auVar105._0_8_ = NEON_rshrn(auVar104._0_8_,auVar104,0xe,4);
          uVar101 = NEON_sqxtun(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14((char)
                                                  iVar26,iVar29)))),auVar89,2);
          auVar12[4] = (char)iVar43;
          auVar12._0_4_ = CONCAT13(sVar96 >> 0xf,(int3)sVar96) * 0x811a + auVar90._8_2_ * 0x4a85;
          auVar12[5] = (char)((uint)iVar43 >> 8);
          auVar12[6] = (char)((uint)iVar43 >> 0x10);
          auVar12[7] = (char)((uint)iVar43 >> 0x18);
          auVar12._8_2_ = (short)iVar1;
          auVar12._10_2_ = (short)((uint)iVar1 >> 0x10);
          auVar12._12_2_ = (short)iVar5;
          auVar12._14_2_ = (short)((uint)iVar5 >> 0x10);
          auVar89 = NEON_rshrn2(auVar105,auVar12,0xe,4);
          uVar86 = NEON_sqxtun(CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14((char)iVar22
                                                                                        ,iVar21)))),
                               auVar123,2);
          uVar40 = uVar40 + 8;
          uVar75 = NEON_sqxtun(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14((char)iVar16
                                                                                        ,iVar15)))),
                               auVar89,2);
          pcVar3 = param_8 + (uVar41 & 0xffffffe4);
          uVar41 = uVar41 + 0x20;
          *pcVar3 = (char)uVar75;
          pcVar3[1] = (char)uVar86;
          pcVar3[2] = (char)uVar101;
          pcVar3[3] = -1;
          pcVar3[4] = (char)((ulong)uVar75 >> 8);
          pcVar3[5] = (char)((ulong)uVar86 >> 8);
          pcVar3[6] = (char)((ulong)uVar101 >> 8);
          pcVar3[7] = -1;
          pcVar3[8] = (char)((ulong)uVar75 >> 0x10);
          pcVar3[9] = (char)((ulong)uVar86 >> 0x10);
          pcVar3[10] = (char)((ulong)uVar101 >> 0x10);
          pcVar3[0xb] = -1;
          pcVar3[0xc] = (char)((ulong)uVar75 >> 0x18);
          pcVar3[0xd] = (char)((ulong)uVar86 >> 0x18);
          pcVar3[0xe] = (char)((ulong)uVar101 >> 0x18);
          pcVar3[0xf] = -1;
          pcVar3[0x10] = (char)((ulong)uVar75 >> 0x20);
          pcVar3[0x11] = (char)((ulong)uVar86 >> 0x20);
          pcVar3[0x12] = (char)((ulong)uVar101 >> 0x20);
          pcVar3[0x13] = -1;
          pcVar3[0x14] = (char)((ulong)uVar75 >> 0x28);
          pcVar3[0x15] = (char)((ulong)uVar86 >> 0x28);
          pcVar3[0x16] = (char)((ulong)uVar101 >> 0x28);
          pcVar3[0x17] = -1;
          pcVar3[0x18] = (char)((ulong)uVar75 >> 0x30);
          pcVar3[0x19] = (char)((ulong)uVar86 >> 0x30);
          pcVar3[0x1a] = (char)((ulong)uVar101 >> 0x30);
          pcVar3[0x1b] = -1;
          pcVar3[0x1c] = (char)((ulong)uVar75 >> 0x38);
          pcVar3[0x1d] = (char)((ulong)uVar86 >> 0x38);
          pcVar3[0x1e] = (char)((ulong)uVar101 >> 0x38);
          pcVar3[0x1f] = -1;
        } while (uVar40 < 0x10);
      }
      lVar35 = lVar35 + 1;
      param_3 = param_3 + 8;
      param_5 = param_5 + 8;
      param_4 = param_4 + 8;
      param_6 = param_6 + 8;
      pbVar37 = pbVar37 + 0x10;
      uVar39 = uVar39 + 0x40;
      pbVar38 = pbVar38 + 0x10;
    } while (lVar35 < iVar4);
  }
  iVar43 = (int)lVar44;
  __n = (size_t)iVar43;
  memcpy(abStack_d1 + 1,param_3,__n);
  memcpy(&local_e0,param_5,__n);
  __n_00 = (size_t)(9 - iVar43);
  memset(abStack_d1 + (long)iVar43 + 1,(uint)abStack_d1[lVar44],__n_00);
  memset(&local_e0 + iVar43,(uint)*(byte *)((long)&local_e8 + lVar44 + 7),__n_00);
  bVar61 = (byte)local_cf;
  bVar62 = (byte)((uint7)local_cf >> 8);
  bVar63 = (byte)((uint7)local_cf >> 0x10);
  bVar64 = (byte)((uint7)local_cf >> 0x18);
  bVar65 = (byte)((uint7)local_cf >> 0x20);
  bVar66 = (byte)((uint7)local_cf >> 0x28);
  bVar67 = (byte)((uint7)local_cf >> 0x30);
  bVar68 = (byte)((uint7)uStack_df >> 8);
  bVar69 = (byte)((uint7)uStack_df >> 0x10);
  bVar70 = (byte)((uint7)uStack_df >> 0x18);
  bVar71 = (byte)((uint7)uStack_df >> 0x20);
  bVar72 = (byte)((uint7)uStack_df >> 0x28);
  bVar73 = (byte)((uint7)uStack_df >> 0x30);
  uVar31 = CONCAT12((char)uStack_df,(short)CONCAT71(uStack_df,local_e0)) & 0xff00ff;
  sVar74 = (short)uVar31 + (ushort)bVar61;
  sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar62;
  uVar33 = (undefined2)CONCAT71(local_cf,abStack_d1[1]);
  uVar31 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar32 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar34 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  sVar79 = sVar74 + (short)uVar31 + (short)uVar34;
  sVar81 = sVar76 + (ushort)(byte)(uVar31 >> 0x10) + (ushort)(byte)(uVar34 >> 0x10);
  sVar133 = (ushort)bVar68 + (ushort)bVar63 + (ushort)bVar62 + (ushort)bVar69;
  sVar134 = (ushort)bVar69 + (ushort)bVar64 + (ushort)bVar63 + (ushort)bVar70;
  sVar135 = (ushort)bVar70 + (ushort)bVar65 + (ushort)bVar64 + (ushort)bVar71;
  sVar136 = (ushort)bVar71 + (ushort)bVar66 + (ushort)bVar65 + (ushort)bVar72;
  sVar85 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar92 = (ushort)bVar73 + (ushort)bStack_c8 + (ushort)bVar67 + (ushort)bStack_d8;
  uVar31 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  uVar77 = sVar76 * 2 + sVar81;
  uVar78 = ((ushort)bVar68 + (ushort)bVar63) * 2 + sVar133;
  uVar45 = (undefined1)
           (((ulong)CONCAT24(uVar78,CONCAT22(uVar77,sVar74 * 2 + sVar79)) & 0xfff8) >> 3);
  uVar47 = (undefined1)(uVar77 >> 3);
  uVar49 = (undefined1)(uVar78 >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar69 + (ushort)bVar64) * 2 + sVar134) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar70 + (ushort)bVar65) * 2 + sVar135) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar71 + (ushort)bVar66) * 2 + sVar136) >> 3);
  uVar57 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar85) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bStack_c8) * 2 + sVar92) >> 3);
  uVar46 = (undefined1)((ushort)(sVar79 + (short)uVar32 * 2 + (short)uVar31 * 2) >> 3);
  uVar48 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar32 >> 0x10) * 2 +
                    (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar133 + (ushort)bVar62 * 2 + (ushort)bVar69 * 2) >> 3);
  uVar52 = (undefined1)((ushort)(sVar134 + (ushort)bVar63 * 2 + (ushort)bVar70 * 2) >> 3);
  uVar54 = (undefined1)((ushort)(sVar135 + (ushort)bVar64 * 2 + (ushort)bVar71 * 2) >> 3);
  uVar56 = (undefined1)((ushort)(sVar136 + (ushort)bVar65 * 2 + (ushort)bVar72 * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar92 + (ushort)bVar67 * 2 + (ushort)bStack_d8 * 2) >> 3);
  uVar86 = NEON_urhadd(CONCAT71(local_cf,abStack_d1[1]),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  uVar101 = NEON_urhadd(CONCAT17(bStack_c8,local_cf),
                        CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                                )),1);
  uVar75 = NEON_urhadd(CONCAT71(uStack_df,local_e0),
                       CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                               )),1);
  local_a0[0] = (byte)uVar75;
  local_a0[2] = (byte)((ulong)uVar75 >> 8);
  uStack_9c = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_9a = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_98 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_96 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_94 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_92 = (undefined1)((ulong)uVar75 >> 0x38);
  uVar75 = NEON_urhadd(CONCAT17(bStack_d8,uStack_df),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  local_a0[1] = (byte)uVar75;
  local_a0[3] = (byte)((ulong)uVar75 >> 8);
  uStack_9b = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_99 = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_97 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_95 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_93 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_91 = (undefined1)((ulong)uVar75 >> 0x38);
  local_c0[0] = (byte)uVar86;
  local_c0[1] = (byte)uVar101;
  local_c0[2] = (byte)((ulong)uVar86 >> 8);
  local_c0[3] = (byte)((ulong)uVar101 >> 8);
  uStack_bc = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_bb = (undefined1)((ulong)uVar101 >> 0x10);
  uStack_ba = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_b9 = (undefined1)((ulong)uVar101 >> 0x18);
  uStack_b8 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_b7 = (undefined1)((ulong)uVar101 >> 0x20);
  uStack_b6 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_b5 = (undefined1)((ulong)uVar101 >> 0x28);
  uStack_b4 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_b3 = (undefined1)((ulong)uVar101 >> 0x30);
  uStack_b2 = (undefined1)((ulong)uVar86 >> 0x38);
  uStack_b1 = (undefined1)((ulong)uVar101 >> 0x38);
  memcpy(abStack_d1 + 1,param_4,__n);
  memcpy(&local_e0,param_6,__n);
  memset(abStack_d1 + (long)iVar43 + 1,(uint)abStack_d1[lVar44],__n_00);
  memset(&local_e0 + iVar43,(uint)*(byte *)((long)&local_e8 + lVar44 + 7),__n_00);
  bVar61 = (byte)local_cf;
  bVar62 = (byte)((uint7)local_cf >> 8);
  bVar63 = (byte)((uint7)local_cf >> 0x10);
  bVar64 = (byte)((uint7)local_cf >> 0x18);
  bVar65 = (byte)((uint7)local_cf >> 0x20);
  bVar66 = (byte)((uint7)local_cf >> 0x28);
  bVar67 = (byte)((uint7)local_cf >> 0x30);
  bVar68 = (byte)((uint7)uStack_df >> 8);
  bVar69 = (byte)((uint7)uStack_df >> 0x10);
  bVar70 = (byte)((uint7)uStack_df >> 0x18);
  bVar71 = (byte)((uint7)uStack_df >> 0x20);
  bVar72 = (byte)((uint7)uStack_df >> 0x28);
  bVar73 = (byte)((uint7)uStack_df >> 0x30);
  uVar31 = CONCAT12((char)uStack_df,(short)CONCAT71(uStack_df,local_e0)) & 0xff00ff;
  sVar74 = (short)uVar31 + (ushort)bVar61;
  sVar76 = (ushort)(byte)(uVar31 >> 0x10) + (ushort)bVar62;
  uVar33 = (undefined2)CONCAT71(local_cf,abStack_d1[1]);
  uVar31 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar32 = CONCAT12(bVar61,uVar33) & 0xff00ff;
  uVar34 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  sVar79 = sVar74 + (short)uVar31 + (short)uVar34;
  sVar81 = sVar76 + (ushort)(byte)(uVar31 >> 0x10) + (ushort)(byte)(uVar34 >> 0x10);
  sVar133 = (ushort)bVar68 + (ushort)bVar63 + (ushort)bVar62 + (ushort)bVar69;
  sVar134 = (ushort)bVar69 + (ushort)bVar64 + (ushort)bVar63 + (ushort)bVar70;
  sVar135 = (ushort)bVar70 + (ushort)bVar65 + (ushort)bVar64 + (ushort)bVar71;
  sVar136 = (ushort)bVar71 + (ushort)bVar66 + (ushort)bVar65 + (ushort)bVar72;
  sVar85 = (ushort)bVar72 + (ushort)bVar67 + (ushort)bVar66 + (ushort)bVar73;
  sVar92 = (ushort)bVar73 + (ushort)bStack_c8 + (ushort)bVar67 + (ushort)bStack_d8;
  uVar31 = CONCAT12(bVar68,(short)uStack_df) & 0xff00ff;
  uVar77 = sVar76 * 2 + sVar81;
  uVar78 = ((ushort)bVar68 + (ushort)bVar63) * 2 + sVar133;
  uVar45 = (undefined1)
           (((ulong)CONCAT24(uVar78,CONCAT22(uVar77,sVar74 * 2 + sVar79)) & 0xfff8) >> 3);
  uVar47 = (undefined1)(uVar77 >> 3);
  uVar49 = (undefined1)(uVar78 >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar69 + (ushort)bVar64) * 2 + sVar134) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar70 + (ushort)bVar65) * 2 + sVar135) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar71 + (ushort)bVar66) * 2 + sVar136) >> 3);
  uVar57 = (undefined1)((ushort)(((ushort)bVar72 + (ushort)bVar67) * 2 + sVar85) >> 3);
  uVar59 = (undefined1)((ushort)(((ushort)bVar73 + (ushort)bStack_c8) * 2 + sVar92) >> 3);
  uVar46 = (undefined1)((ushort)(sVar79 + (short)uVar32 * 2 + (short)uVar31 * 2) >> 3);
  uVar48 = (undefined1)
           ((ushort)(sVar81 + (ushort)(byte)(uVar32 >> 0x10) * 2 +
                    (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar133 + (ushort)bVar62 * 2 + (ushort)bVar69 * 2) >> 3);
  uVar52 = (undefined1)((ushort)(sVar134 + (ushort)bVar63 * 2 + (ushort)bVar70 * 2) >> 3);
  uVar54 = (undefined1)((ushort)(sVar135 + (ushort)bVar64 * 2 + (ushort)bVar71 * 2) >> 3);
  uVar56 = (undefined1)((ushort)(sVar136 + (ushort)bVar65 * 2 + (ushort)bVar72 * 2) >> 3);
  uVar58 = (undefined1)((ushort)(sVar85 + (ushort)bVar66 * 2 + (ushort)bVar73 * 2) >> 3);
  uVar60 = (undefined1)((ushort)(sVar92 + (ushort)bVar67 * 2 + (ushort)bStack_d8 * 2) >> 3);
  uVar75 = NEON_urhadd(CONCAT71(local_cf,abStack_d1[1]),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  uVar86 = NEON_urhadd(CONCAT17(bStack_c8,local_cf),
                       CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                               )),1);
  local_b0[0] = (byte)uVar75;
  local_b0[1] = (byte)uVar86;
  local_b0[2] = (byte)((ulong)uVar75 >> 8);
  local_b0[3] = (byte)((ulong)uVar86 >> 8);
  uStack_ac = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_ab = (undefined1)((ulong)uVar86 >> 0x10);
  uStack_aa = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_a9 = (undefined1)((ulong)uVar86 >> 0x18);
  uStack_a8 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_a7 = (undefined1)((ulong)uVar86 >> 0x20);
  uStack_a6 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_a5 = (undefined1)((ulong)uVar86 >> 0x28);
  uStack_a4 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_a3 = (undefined1)((ulong)uVar86 >> 0x30);
  uStack_a2 = (undefined1)((ulong)uVar75 >> 0x38);
  uStack_a1 = (undefined1)((ulong)uVar86 >> 0x38);
  uVar75 = NEON_urhadd(CONCAT71(uStack_df,local_e0),
                       CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))
                                               )),1);
  local_90[0] = (byte)uVar75;
  local_90[2] = (byte)((ulong)uVar75 >> 8);
  uStack_8c = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_8a = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_88 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_86 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_84 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_82 = (undefined1)((ulong)uVar75 >> 0x38);
  uVar75 = NEON_urhadd(CONCAT17(bStack_d8,uStack_df),
                       CONCAT17(uVar59,CONCAT16(uVar57,CONCAT15(uVar55,CONCAT14(uVar53,CONCAT13(
                                                  uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45)))))
                                               )),1);
  local_90[1] = (byte)uVar75;
  local_90[3] = (byte)((ulong)uVar75 >> 8);
  uStack_8b = (undefined1)((ulong)uVar75 >> 0x10);
  uStack_89 = (undefined1)((ulong)uVar75 >> 0x18);
  uStack_87 = (undefined1)((ulong)uVar75 >> 0x20);
  uStack_85 = (undefined1)((ulong)uVar75 >> 0x28);
  uStack_83 = (undefined1)((ulong)uVar75 >> 0x30);
  uStack_81 = (undefined1)((ulong)uVar75 >> 0x38);
  if ((int)uVar2 < param_9) {
    uVar39 = 0;
    uVar40 = (ulong)((param_9 + -1) - (uVar2 - 1));
    uVar36 = iVar4 << 6 | 4;
    do {
      bVar61 = local_c0[(int)uVar39 + 0x10];
      iVar43 = (uint)param_1[uVar39 + (long)(int)uVar2] * 0x4a85;
      uVar6 = iVar43 + -0x451550 + (uint)local_c0[uVar39] * 0x811a;
      pcVar3 = param_7 + (int)uVar36;
      if (uVar6 >> 0x16 == 0) {
        cVar42 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar42 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar6 = iVar43 + 0x220530 + (uint)local_c0[uVar39] * -0x1913 + (uint)bVar61 * -0x3408;
      *pcVar3 = cVar42;
      if (uVar6 >> 0x16 == 0) {
        cVar42 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar42 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar6 = iVar43 + -0x379ad0 + (uint)bVar61 * 0x6625;
      pcVar3[1] = cVar42;
      if (uVar6 >> 0x16 == 0) {
        cVar42 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar42 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar39 = uVar39 + 1;
      uVar36 = uVar36 + 4;
      pcVar3[2] = cVar42;
      pcVar3[3] = -1;
    } while (uVar40 != uVar39);
    if ((param_2 != (byte *)0x0) && ((int)uVar2 < param_9)) {
      uVar39 = 0;
      uVar36 = iVar4 << 6 | 4;
      do {
        bVar61 = local_a0[(int)uVar39 + 0x10];
        iVar43 = (uint)param_2[uVar39 + (long)(int)uVar2] * 0x4a85;
        uVar6 = iVar43 + -0x451550 + (uint)local_a0[uVar39] * 0x811a;
        pcVar3 = param_8 + (int)uVar36;
        if (uVar6 >> 0x16 == 0) {
          cVar42 = (char)(uVar6 >> 0xe);
        }
        else {
          cVar42 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
        }
        uVar6 = iVar43 + 0x220530 + (uint)local_a0[uVar39] * -0x1913 + (uint)bVar61 * -0x3408;
        *pcVar3 = cVar42;
        if (uVar6 >> 0x16 == 0) {
          cVar42 = (char)(uVar6 >> 0xe);
        }
        else {
          cVar42 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
        }
        uVar6 = iVar43 + -0x379ad0 + (uint)bVar61 * 0x6625;
        pcVar3[1] = cVar42;
        if (uVar6 >> 0x16 == 0) {
          cVar42 = (char)(uVar6 >> 0xe);
        }
        else {
          cVar42 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
        }
        uVar39 = uVar39 + 1;
        uVar36 = uVar36 + 4;
        pcVar3[2] = cVar42;
        pcVar3[3] = -1;
      } while (uVar40 != uVar39);
    }
  }
  if (*(long *)(local_e8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

