// functions/0091d — 3 functions
#include "libGameKindred.h"




void FUN_0091df90(undefined4 param_1)

{
  DAT_02c09f60 = param_1;
  return;
}




void FUN_0091dfa0(byte param_1,undefined4 param_2,byte param_3)

{
  DAT_02c09f58 = param_1 & 1;
  DAT_02c09f5c = param_2;
  DAT_02c09f64 = param_3 & 1;
  return;
}




void FUN_0091dfc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = 0;
  lVar9 = param_1 + 0x300;
  puVar8 = &DAT_02c093e4;
  do {
    uVar4 = *(uint *)(param_1 + lVar5 * 4);
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (uVar4 != 0xffffffff) {
      lVar1 = param_1 + lVar5;
      (&DAT_02c093d8)[lVar5 * 0x1c] = uVar4;
      lVar2 = param_1 + lVar5 * 4;
      lVar10 = 0;
      (&DAT_02c093dc)[lVar5 * 0x70] = *(undefined1 *)(lVar1 + 0x40);
      (&DAT_02c093e0)[lVar5 * 0x1c] = (uint)*(byte *)(lVar1 + 0x50);
      uVar4 = (*(uint *)(lVar2 + 0x60) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x60) & 0xff00ff) << 8;
      (&DAT_02c0940c)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0xa0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0xa0) & 0xff00ff) << 8;
      (&DAT_02c09410)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0xe0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0xe0) & 0xff00ff) << 8;
      (&DAT_02c09414)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x120) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x120) & 0xff00ff) << 8;
      (&DAT_02c09418)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x160) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x160) & 0xff00ff) << 8;
      (&DAT_02c0941c)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x1a0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x1a0) & 0xff00ff) << 8;
      (&DAT_02c09420)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      lVar3 = param_1 + lVar5 * 2;
      (&DAT_02c09424)[lVar5 * 0x1c] =
           (uint)(*(ushort *)(lVar3 + 0x1e0) >> 8) | (*(ushort *)(lVar3 + 0x1e0) & 0xff00ff) << 8;
      (&DAT_02c09428)[lVar5 * 0x1c] =
           (uint)(*(ushort *)(lVar3 + 0x200) >> 8) | (*(ushort *)(lVar3 + 0x200) & 0xff00ff) << 8;
      (&DAT_02c0942c)[lVar5 * 0x1c] =
           (uint)(*(ushort *)(lVar3 + 0x220) >> 8) | (*(ushort *)(lVar3 + 0x220) & 0xff00ff) << 8;
      (&DAT_02c09430)[lVar5 * 0x1c] =
           (uint)(*(ushort *)(lVar3 + 0x240) >> 8) | (*(ushort *)(lVar3 + 0x240) & 0xff00ff) << 8;
      (&DAT_02c09434)[lVar5 * 0x1c] = (uint)*(byte *)(lVar1 + 0x260);
      (&DAT_02c09438)[lVar5 * 0x1c] = (uint)*(byte *)(lVar1 + 0x270);
      uVar4 = (*(uint *)(lVar2 + 0x280) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x280) & 0xff00ff) << 8;
      (&DAT_02c0943c)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x2c0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x2c0) & 0xff00ff) << 8;
      (&DAT_02c09440)[lVar5 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_02c09444)[lVar5 * 0x70] = *(undefined1 *)(lVar1 + 0x580);
      do {
        uVar4 = (*(uint *)(lVar9 + lVar10) & 0xff00ff00) >> 8 |
                (*(uint *)(lVar9 + lVar10) & 0xff00ff) << 8;
        *(uint *)((long)puVar8 + lVar10) = uVar4 >> 0x10 | uVar4 << 0x10;
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x28);
    }
    lVar5 = lVar5 + 1;
    lVar9 = lVar9 + 0x28;
    puVar8 = puVar8 + 0x1c;
  } while (lVar5 != 0x10);
  puVar6 = (uint *)(param_1 + 0x624);
  puVar7 = &DAT_02c09afc;
  lVar9 = -2;
  do {
    lVar5 = param_1 + 0x5dc + lVar9;
    if (*(char *)(lVar5 + 0x52) != -1) {
      *(char *)(puVar7 + -9) = *(char *)(lVar5 + 0x52);
      uVar4 = (puVar6[-0x12] & 0xff00ff00) >> 8 | (puVar6[-0x12] & 0xff00ff) << 8;
      puVar7[-8] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-0x10] & 0xff00ff00) >> 8 | (puVar6[-0x10] & 0xff00ff) << 8;
      puVar7[-7] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-0xe] & 0xff00ff00) >> 8 | (puVar6[-0xe] & 0xff00ff) << 8;
      puVar7[-4] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-0xc] & 0xff00ff00) >> 8 | (puVar6[-0xc] & 0xff00ff) << 8;
      puVar7[-3] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-10] & 0xff00ff00) >> 8 | (puVar6[-10] & 0xff00ff) << 8;
      *puVar7 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-8] & 0xff00ff00) >> 8 | (puVar6[-8] & 0xff00ff) << 8;
      puVar7[1] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-6] & 0xff00ff00) >> 8 | (puVar6[-6] & 0xff00ff) << 8;
      puVar7[4] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-4] & 0xff00ff00) >> 8 | (puVar6[-4] & 0xff00ff) << 8;
      puVar7[5] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (puVar6[-2] & 0xff00ff00) >> 8 | (puVar6[-2] & 0xff00ff) << 8;
      puVar7[6] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      puVar7[7] = uVar4 >> 0x10 | uVar4 << 0x10;
      puVar7[-6] = (uint)*(byte *)(lVar5 + 0x54);
      puVar7[-5] = (uint)*(byte *)(lVar5 + 0x56);
      puVar7[-2] = (uint)*(byte *)(lVar5 + 0x58);
      puVar7[-1] = (uint)*(byte *)(lVar5 + 0x5a);
      puVar7[2] = (uint)*(byte *)(lVar5 + 0x5c);
      puVar7[3] = (uint)*(byte *)(lVar5 + 0x5e);
      puVar7[8] = (uint)*(byte *)(lVar5 + 0x60);
    }
    lVar9 = lVar9 + 1;
    puVar7 = puVar7 + 0x12;
    puVar6 = puVar6 + 1;
  } while (lVar9 != 0);
  uVar4 = (*(uint *)(param_1 + 0x63c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x63c) & 0xff00ff) << 8;
  DAT_02c09f6c = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (*(uint *)(param_1 + 0x640) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x640) & 0xff00ff) << 8;
  DAT_02c09f68 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (*(uint *)(param_1 + 0x644) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x644) & 0xff00ff) << 8;
  DAT_02c09f74 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (*(uint *)(param_1 + 0x648) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x648) & 0xff00ff) << 8;
  DAT_02c09f70 = uVar4 >> 0x10 | uVar4 << 0x10;
  lVar9 = 0;
  do {
    uVar4 = *(uint *)(param_1 + 0x590 + lVar9);
    lVar5 = lVar9 + 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    *(uint *)((long)&DAT_02c09f78 + lVar9) = uVar4 >> 0x10 | uVar4 << 0x10;
    lVar9 = lVar5;
  } while (lVar5 != 0x4c);
  return;
}

