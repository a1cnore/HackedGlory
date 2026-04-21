// functions/016aa — 80 functions
#include "libGameKindred.h"




undefined8 FUN_016aa008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_016aa01c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aa058(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016aa094(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < (int)param_2) {
    uVar4 = (uint)((param_1 / 0.85) * 64.0);
    uVar1 = uVar4 + 1;
    fVar6 = (param_1 / 0.85) * 64.0;
    bVar3 = param_1 < 0.85;
    fVar7 = 1.0;
    if (bVar3) {
      fVar7 = 3.0;
    }
    uVar5 = (ulong)param_2;
    if (bVar3 && 0.0 < param_1) {
      fVar7 = 1.0;
    }
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar8 = fVar7;
      if ((bVar3 && 0.0 < param_1) && uVar1 < 0x40) {
        fVar8 = *(float *)(&DAT_01d8ad50 + (ulong)uVar4 * 4) +
                (fVar6 - (float)(int)fVar6) *
                (*(float *)(&DAT_01d8ad50 + (ulong)uVar1 * 4) -
                *(float *)(&DAT_01d8ad50 + (ulong)uVar4 * 4));
      }
      fVar10 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
               *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar9 = 0.0;
      if ((fVar10 < 1.0) && (0.0 < fVar10)) {
        uVar2 = (int)(fVar10 * 64.0) + 1;
        if (uVar2 < 0x40) {
          fVar9 = *(float *)(&DAT_01d8ae50 + (ulong)(uint)(int)(fVar10 * 64.0) * 4) +
                  (fVar10 * 64.0 - (float)(int)(fVar10 * 64.0)) *
                  (*(float *)(&DAT_01d8ae50 + (ulong)uVar2 * 4) -
                  *(float *)(&DAT_01d8ae50 + (ulong)(uint)(int)(fVar10 * 64.0) * 4));
        }
      }
      param_4 = param_4 + 1;
      uVar5 = uVar5 - 1;
      *(float *)((long)param_3 + 0xc) = fVar8 * fVar9;
      param_3 = param_3 + 2;
    } while (uVar5 != 0);
  }
  return;
}




undefined8 FUN_016aa1b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aa1c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa1d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa1dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aa1ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa1f8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016aa208(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_016aa218(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016aa228(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_016aa23c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_016aa24c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa258(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_016aa26c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aa2a8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aa2e4(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aa320(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016aa35c(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (0 < param_2) {
    fVar15 = (param_1 + -0.125) / 0.575;
    uVar10 = (uint)((param_1 / 0.3) * 64.0);
    uVar1 = uVar10 + 1;
    bVar5 = 0.0 < param_1;
    uVar11 = (uint)(fVar15 * 64.0);
    uVar12 = (uint)((param_1 / 0.36) * 64.0);
    uVar2 = uVar11 + 1;
    uVar3 = uVar12 + 1;
    uVar4 = (int)(param_1 * 64.0) + 1;
    bVar6 = param_1 < 0.3;
    fVar14 = 0.5;
    if (bVar6) {
      fVar14 = 0.1;
    }
    if (bVar6 && bVar5) {
      fVar14 = 0.5;
    }
    bVar7 = param_1 < 0.7;
    fVar15 = fVar15 * 64.0;
    fVar21 = 1.0;
    fVar20 = fVar21;
    if (bVar7) {
      fVar20 = 3.0;
    }
    if (bVar7 && 0.125 < param_1) {
      fVar20 = 1.0;
    }
    bVar8 = param_1 < 0.36;
    fVar13 = 0.0;
    if (bVar8) {
      fVar21 = 0.0;
    }
    if (bVar8 && bVar5) {
      fVar21 = 1.0;
    }
    bVar9 = param_1 < 1.0;
    fVar19 = (param_1 / 0.3) * 64.0;
    fVar22 = (param_1 / 0.36) * 64.0;
    if (bVar9) {
      fVar13 = 3.0;
    }
    if (bVar9 && bVar5) {
      fVar13 = 0.0;
    }
    do {
      fVar16 = fVar14;
      if ((bVar6 && bVar5) && uVar1 < 0x40) {
        fVar16 = *(float *)(&DAT_01d8af50 + (ulong)uVar10 * 4) +
                 (fVar19 - (float)(int)fVar19) *
                 (*(float *)(&DAT_01d8af50 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01d8af50 + (ulong)uVar10 * 4));
      }
      fVar17 = fVar20;
      if ((bVar7 && 0.125 < param_1) && uVar2 < 0x40) {
        fVar17 = *(float *)(&DAT_01d8b050 + (ulong)uVar11 * 4) +
                 (fVar15 - (float)(int)fVar15) *
                 (*(float *)(&DAT_01d8b050 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01d8b050 + (ulong)uVar11 * 4));
      }
      fVar18 = fVar21;
      if ((bVar8 && bVar5) && uVar3 < 0x40) {
        fVar18 = *(float *)(&DAT_01d8b250 + (ulong)uVar12 * 4) +
                 (fVar22 - (float)(int)fVar22) *
                 (*(float *)(&DAT_01d8b250 + (ulong)uVar3 * 4) -
                 *(float *)(&DAT_01d8b250 + (ulong)uVar12 * 4));
      }
      *param_3 = fVar16;
      param_3[1] = fVar17;
      param_3[2] = fVar18;
      fVar16 = fVar13;
      if ((bVar9 && bVar5) && uVar4 < 0x40) {
        fVar16 = *(float *)(&DAT_01d8b150 + (ulong)(uint)(int)(param_1 * 64.0) * 4) +
                 (param_1 * 64.0 - (float)(int)(param_1 * 64.0)) *
                 (*(float *)(&DAT_01d8b150 + (ulong)uVar4 * 4) -
                 *(float *)(&DAT_01d8b150 + (ulong)(uint)(int)(param_1 * 64.0) * 4));
      }
      param_3[3] = fVar16;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_016aa564(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aa574(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa580(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa58c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aa59c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa5a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016aa5b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_016aa5c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016aa5d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016aa5e4(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41051eb8409c624d;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016aa608(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016aa644(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return 1;
}




uint FUN_016aa658(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aa694(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016aa6d0(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < param_2) {
    uVar6 = (uint)((param_1 / 0.36) * 64.0);
    uVar7 = (uint)((param_1 / 0.9) * 64.0);
    uVar1 = uVar6 + 1;
    bVar3 = 0.0 < param_1;
    uVar2 = uVar7 + 1;
    fVar8 = (param_1 / 0.36) * 64.0;
    fVar12 = (param_1 / 0.9) * 64.0;
    bVar4 = param_1 < 0.36;
    fVar9 = 1.0;
    if (bVar4) {
      fVar9 = 0.0;
    }
    if (bVar4 && bVar3) {
      fVar9 = 1.0;
    }
    bVar5 = param_1 < 0.9;
    fVar10 = 1.0;
    if (bVar5) {
      fVar10 = 0.7;
    }
    if (bVar5 && bVar3) {
      fVar10 = 1.0;
    }
    do {
      fVar11 = fVar9;
      if ((bVar4 && bVar3) && uVar1 < 0x40) {
        fVar11 = *(float *)(&DAT_01d8b250 + (ulong)uVar6 * 4) +
                 (fVar8 - (float)(int)fVar8) *
                 (*(float *)(&DAT_01d8b250 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01d8b250 + (ulong)uVar6 * 4));
      }
      *param_3 = param_1;
      param_3[1] = fVar11;
      param_3[2] = 1.0;
      fVar11 = fVar10;
      if ((bVar5 && bVar3) && uVar2 < 0x40) {
        fVar11 = *(float *)(&DAT_01d8b350 + (ulong)uVar7 * 4) +
                 (fVar12 - (float)(int)fVar12) *
                 (*(float *)(&DAT_01d8b350 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01d8b350 + (ulong)uVar7 * 4));
      }
      param_3[3] = fVar11;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_016aa7ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aa7fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa808(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa814(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aa824(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa830(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016aa840(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aa84c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016aa85c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016aa868(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x4115c28f40bf22d1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016aa88c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016aa8c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_016aa8d8(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aa914(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016aa950(float param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < param_2) {
    uVar6 = (uint)((param_1 / 0.36) * 64.0);
    uVar7 = (uint)((param_1 / 0.9) * 64.0);
    uVar1 = uVar6 + 1;
    bVar3 = 0.0 < param_1;
    uVar2 = uVar7 + 1;
    fVar8 = (param_1 / 0.36) * 64.0;
    fVar12 = (param_1 / 0.9) * 64.0;
    bVar4 = param_1 < 0.36;
    fVar9 = 1.0;
    if (bVar4) {
      fVar9 = 0.0;
    }
    if (bVar4 && bVar3) {
      fVar9 = 1.0;
    }
    bVar5 = param_1 < 0.9;
    fVar10 = 1.0;
    if (bVar5) {
      fVar10 = 0.7;
    }
    if (bVar5 && bVar3) {
      fVar10 = 1.0;
    }
    do {
      fVar11 = fVar9;
      if ((bVar4 && bVar3) && uVar1 < 0x40) {
        fVar11 = *(float *)(&DAT_01d8b250 + (ulong)uVar6 * 4) +
                 (fVar8 - (float)(int)fVar8) *
                 (*(float *)(&DAT_01d8b250 + (ulong)uVar1 * 4) -
                 *(float *)(&DAT_01d8b250 + (ulong)uVar6 * 4));
      }
      *param_3 = param_1;
      param_3[1] = fVar11;
      param_3[2] = 1.0;
      fVar11 = fVar10;
      if ((bVar5 && bVar3) && uVar2 < 0x40) {
        fVar11 = *(float *)(&DAT_01d8b350 + (ulong)uVar7 * 4) +
                 (fVar12 - (float)(int)fVar12) *
                 (*(float *)(&DAT_01d8b350 + (ulong)uVar2 * 4) -
                 *(float *)(&DAT_01d8b350 + (ulong)uVar7 * 4));
      }
      param_3[3] = fVar11;
      param_2 = param_2 + -1;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  return;
}




undefined8 FUN_016aaa6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aaa7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aaa88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aaa94(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aaaa4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aaab0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016aaac0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_016aaacc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_016aaadc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




void FUN_016aaae8(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41051eb8409c624d;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_016aab0c(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




undefined8 FUN_016aab48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




uint FUN_016aab58(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_016aab94(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_016aabd0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -0.0;
      if ((fVar6 < 1.0) && (fVar5 = 2.0, 0.1 < fVar6)) {
        fVar6 = (fVar6 + -0.1) / 0.9;
        uVar3 = (uint)(fVar6 * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar6 = fVar6 * 64.0;
          fVar5 = *(float *)(&DAT_01d8b450 + (ulong)uVar3 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_01d8b450 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01d8b450 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_016aacac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_016aacbc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_016aaccc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




int FUN_016aacd8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar2 = rand();
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 20.0 + -10.0,
                          (float)uVar4 * 4.656613e-10 * 30.0 + -15.0);
      iVar1 = iVar1 + -1;
      *(float *)(param_2 + 1) = (float)iVar2 * 4.656613e-10 * 20.0 + -10.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_016aada0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_016aadb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_016aadc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41c80000;
  return 1;
}




undefined8 FUN_016aadd0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_016aade0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 5.0 + 5.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016aae4c(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar1 = iVar1 + -1;
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 * 0.5 + 0.5,
                          (float)uVar4 * 4.656613e-10 * 0.5 + 0.5);
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016aaec4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_016aaf40(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.6 + 0.4;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_016aafc0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43340000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_016aafe0(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x408dc28f;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}

