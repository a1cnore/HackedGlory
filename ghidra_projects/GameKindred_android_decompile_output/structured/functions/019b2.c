// functions/019b2 — 2 functions
#include "libGameKindred.h"




void FUN_019b26d4(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar1 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar2 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar12 = uVar1 * 3 + uVar2 + 0x20002;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar4 = uVar12 >> 0x12;
  uVar18 = (iVar6 + uVar4 * 0x6625) - 0x379ad0;
  uVar12 = uVar12 >> 2 & 0xff;
  if (uVar18 >> 0x16 == 0) {
    bVar11 = (byte)(uVar18 >> 0xe);
  }
  else {
    bVar11 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar18 = iVar6 + uVar4 * -0x3408 + uVar12 * -0x1913 + 0x220530;
  if (uVar18 >> 0x16 == 0) {
    uVar18 = uVar18 >> 0xe;
  }
  else {
    uVar18 = ((int)uVar18 >> 0x1f & 0xffffff01U) + 0xff;
  }
  uVar12 = (iVar6 + uVar12 * 0x811a) - 0x451550;
  if (uVar12 >> 0x16 == 0) {
    bVar10 = (byte)(uVar12 >> 0xe);
  }
  else {
    bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
  }
  param_7[1] = bVar11 & 0xf0 | (byte)(uVar18 >> 4);
  lVar14 = (long)param_9 - 1;
  *param_7 = bVar10 | 0xf;
  if (param_2 != (byte *)0x0) {
    uVar12 = uVar1 + 0x20002 + uVar2 * 3;
    uVar4 = uVar12 >> 0x12;
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar18 = uVar4 * 0x6625 + -0x379ad0 + iVar6;
    uVar12 = uVar12 >> 2 & 0xff;
    if (uVar18 >> 0x16 == 0) {
      bVar11 = (byte)(uVar18 >> 0xe);
    }
    else {
      bVar11 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar4 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
    if (uVar18 >> 0x16 == 0) {
      uVar18 = uVar18 >> 0xe;
    }
    else {
      uVar18 = ((int)uVar18 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
    if (uVar12 >> 0x16 == 0) {
      bVar10 = (byte)(uVar12 >> 0xe);
    }
    else {
      bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
    }
    *param_8 = bVar10 | 0xf;
    param_8[1] = bVar11 & 0xf0 | (byte)(uVar18 >> 4);
  }
  if (2 < param_9) {
    lVar13 = 0;
    lVar15 = 5;
    uVar18 = uVar1;
    uVar12 = uVar2;
    pbVar8 = param_1;
    pbVar9 = param_2;
    do {
      uVar1 = (uint)param_3[lVar13 + 1] | (uint)param_4[lVar13 + 1] << 0x10;
      uVar2 = (uint)param_5[lVar13 + 1] | (uint)param_6[lVar13 + 1] << 0x10;
      iVar6 = uVar1 + uVar12 + uVar18 + uVar2 + 0x80008;
      uVar4 = iVar6 + (uVar1 + uVar12) * 2;
      iVar3 = (uint)pbVar8[1] * 0x4a85;
      uVar17 = uVar18 + (uVar4 >> 3);
      uVar16 = uVar17 >> 0x11;
      uVar5 = iVar3 + -0x379ad0 + uVar16 * 0x6625;
      uVar17 = uVar17 >> 1 & 0xff;
      if (uVar5 >> 0x16 == 0) {
        bVar11 = (byte)(uVar5 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar16 = iVar3 + 0x220530 + uVar16 * -0x3408 + uVar17 * -0x1913;
      iVar7 = (int)lVar15 + -3;
      uVar18 = iVar6 + (uVar2 + uVar18) * 2;
      if (uVar16 >> 0x16 == 0) {
        uVar16 = uVar16 >> 0xe;
      }
      else {
        uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar5 = iVar3 + -0x451550 + uVar17 * 0x811a;
      uVar17 = uVar1 + (uVar18 >> 3);
      if (uVar5 >> 0x16 == 0) {
        bVar10 = (byte)(uVar5 >> 0xe);
      }
      else {
        bVar10 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      param_7[iVar7] = bVar10 | 0xf;
      (param_7 + iVar7)[1] = bVar11 & 0xf0 | (byte)(uVar16 >> 4);
      uVar16 = uVar17 >> 0x11;
      uVar5 = uVar17 >> 1 & 0xff;
      iVar6 = (uint)pbVar8[2] * 0x4a85;
      uVar17 = uVar16 * 0x6625 + -0x379ad0 + iVar6;
      if (uVar17 >> 0x16 == 0) {
        bVar11 = (byte)(uVar17 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
      }
      uVar17 = uVar16 * -0x3408 + 0x220530 + uVar5 * -0x1913 + iVar6;
      if (uVar17 >> 0x16 == 0) {
        uVar17 = uVar17 >> 0xe;
      }
      else {
        uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar16 = uVar5 * 0x811a + -0x451550 + iVar6;
      if (uVar16 >> 0x16 == 0) {
        bVar10 = (byte)(uVar16 >> 0xe);
      }
      else {
        bVar10 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
      }
      param_7[lVar15 + -1] = bVar10 | 0xf;
      param_7[lVar15] = bVar11 & 0xf0 | (byte)(uVar17 >> 4);
      if (param_2 != (byte *)0x0) {
        uVar12 = (uVar18 >> 3) + uVar12;
        uVar17 = uVar12 >> 0x11;
        iVar6 = (uint)pbVar9[1] * 0x4a85;
        uVar18 = uVar17 * 0x6625 + -0x379ad0 + iVar6;
        uVar12 = uVar12 >> 1 & 0xff;
        if (uVar18 >> 0x16 == 0) {
          bVar11 = (byte)(uVar18 >> 0xe);
        }
        else {
          bVar11 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        uVar18 = uVar17 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
        if (uVar18 >> 0x16 == 0) {
          uVar18 = uVar18 >> 0xe;
        }
        else {
          uVar18 = ((int)uVar18 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
        uVar4 = (uVar4 >> 3) + uVar2;
        if (uVar12 >> 0x16 == 0) {
          bVar10 = (byte)(uVar12 >> 0xe);
        }
        else {
          bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
        }
        param_8[iVar7] = bVar10 | 0xf;
        (param_8 + iVar7)[1] = bVar11 & 0xf0 | (byte)(uVar18 >> 4);
        uVar18 = uVar4 >> 0x11;
        uVar4 = uVar4 >> 1 & 0xff;
        iVar6 = (uint)pbVar9[2] * 0x4a85;
        uVar12 = uVar18 * 0x6625 + -0x379ad0 + iVar6;
        if (uVar12 >> 0x16 == 0) {
          bVar11 = (byte)(uVar12 >> 0xe);
        }
        else {
          bVar11 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
        }
        uVar12 = uVar18 * -0x3408 + 0x220530 + uVar4 * -0x1913 + iVar6;
        if (uVar12 >> 0x16 == 0) {
          uVar12 = uVar12 >> 0xe;
        }
        else {
          uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar18 = uVar4 * 0x811a + -0x451550 + iVar6;
        if (uVar18 >> 0x16 == 0) {
          bVar10 = (byte)(uVar18 >> 0xe);
        }
        else {
          bVar10 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        param_8[lVar15 + -1] = bVar10 | 0xf;
        param_8[lVar15] = bVar11 & 0xf0 | (byte)(uVar12 >> 4);
      }
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 4;
      uVar18 = uVar1;
      uVar12 = uVar2;
      pbVar8 = pbVar8 + 2;
      pbVar9 = pbVar9 + 2;
    } while (lVar13 < (int)lVar14 >> 1);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar12 = uVar2 + 0x20002 + uVar1 * 3;
    uVar4 = uVar12 >> 0x12;
    iVar6 = (uint)param_1[lVar14] * 0x4a85;
    uVar18 = uVar4 * 0x6625 + -0x379ad0 + iVar6;
    uVar12 = uVar12 >> 2 & 0xff;
    if (uVar18 >> 0x16 == 0) {
      bVar11 = (byte)(uVar18 >> 0xe);
    }
    else {
      bVar11 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar4 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
    iVar3 = (int)lVar14 << 1;
    if (uVar18 >> 0x16 == 0) {
      uVar18 = uVar18 >> 0xe;
    }
    else {
      uVar18 = ((int)uVar18 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
    if (uVar12 >> 0x16 == 0) {
      bVar10 = (byte)(uVar12 >> 0xe);
    }
    else {
      bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
    }
    (param_7 + iVar3)[1] = bVar11 & 0xf0 | (byte)(uVar18 >> 4);
    param_7[iVar3] = bVar10 | 0xf;
    if (param_2 != (byte *)0x0) {
      uVar12 = uVar1 + 0x20002 + uVar2 * 3;
      uVar1 = uVar12 >> 0x12;
      iVar6 = (uint)param_2[lVar14] * 0x4a85;
      uVar18 = uVar1 * 0x6625 + -0x379ad0 + iVar6;
      uVar12 = uVar12 >> 2 & 0xff;
      if (uVar18 >> 0x16 == 0) {
        bVar11 = (byte)(uVar18 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
      }
      uVar18 = uVar1 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
      if (uVar18 >> 0x16 == 0) {
        uVar18 = uVar18 >> 0xe;
      }
      else {
        uVar18 = ((int)uVar18 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
      if (uVar12 >> 0x16 == 0) {
        bVar10 = (byte)(uVar12 >> 0xe);
      }
      else {
        bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
      }
      param_8[iVar3] = bVar10 | 0xf;
      (param_8 + iVar3)[1] = bVar11 & 0xf0 | (byte)(uVar18 >> 4);
    }
  }
  return;
}




void FUN_019b2dcc(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  
  uVar1 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar2 = (uint)*param_5 | (uint)*param_6 << 0x10;
  uVar12 = uVar1 * 3 + uVar2 + 0x20002;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar4 = uVar12 >> 0x12;
  uVar17 = (iVar6 + uVar4 * 0x6625) - 0x379ad0;
  uVar12 = uVar12 >> 2 & 0xff;
  if (uVar17 >> 0x16 == 0) {
    bVar11 = (byte)(uVar17 >> 0xe);
  }
  else {
    bVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
  }
  uVar17 = iVar6 + uVar4 * -0x3408 + uVar12 * -0x1913 + 0x220530;
  if (uVar17 >> 0x16 == 0) {
    uVar17 = uVar17 >> 0xe;
  }
  else {
    uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
  }
  uVar12 = (iVar6 + uVar12 * 0x811a) - 0x451550;
  if (uVar12 >> 0x16 == 0) {
    uVar12 = uVar12 >> 0xe;
  }
  else {
    uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_7[1] = bVar11 & 0xf8 | (byte)(uVar17 >> 5);
  lVar14 = (long)param_9 - 1;
  *param_7 = (byte)((uVar17 & 0x1c) << 3) | (byte)(uVar12 >> 3);
  if (param_2 != (byte *)0x0) {
    uVar12 = uVar1 + 0x20002 + uVar2 * 3;
    uVar4 = uVar12 >> 0x12;
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar17 = uVar4 * 0x6625 + -0x379ad0 + iVar6;
    uVar12 = uVar12 >> 2 & 0xff;
    if (uVar17 >> 0x16 == 0) {
      bVar11 = (byte)(uVar17 >> 0xe);
    }
    else {
      bVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    uVar17 = uVar4 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
    if (uVar17 >> 0x16 == 0) {
      uVar17 = uVar17 >> 0xe;
    }
    else {
      uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
    if (uVar12 >> 0x16 == 0) {
      uVar12 = uVar12 >> 0xe;
    }
    else {
      uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
    }
    *param_8 = (byte)((uVar17 & 0x1c) << 3) | (byte)(uVar12 >> 3);
    param_8[1] = bVar11 & 0xf8 | (byte)(uVar17 >> 5);
  }
  if (2 < param_9) {
    lVar13 = 0;
    lVar15 = 5;
    uVar17 = uVar1;
    uVar12 = uVar2;
    pbVar8 = param_1;
    pbVar9 = param_2;
    do {
      uVar1 = (uint)param_3[lVar13 + 1] | (uint)param_4[lVar13 + 1] << 0x10;
      uVar2 = (uint)param_5[lVar13 + 1] | (uint)param_6[lVar13 + 1] << 0x10;
      iVar6 = uVar1 + uVar12 + uVar17 + uVar2 + 0x80008;
      uVar4 = iVar6 + (uVar1 + uVar12) * 2;
      iVar3 = (uint)pbVar8[1] * 0x4a85;
      uVar10 = uVar17 + (uVar4 >> 3);
      uVar16 = uVar10 >> 0x11;
      uVar5 = iVar3 + -0x379ad0 + uVar16 * 0x6625;
      uVar10 = uVar10 >> 1 & 0xff;
      if (uVar5 >> 0x16 == 0) {
        bVar11 = (byte)(uVar5 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar16 = iVar3 + 0x220530 + uVar16 * -0x3408 + uVar10 * -0x1913;
      iVar7 = (int)lVar15 + -3;
      uVar17 = iVar6 + (uVar2 + uVar17) * 2;
      if (uVar16 >> 0x16 == 0) {
        uVar16 = uVar16 >> 0xe;
      }
      else {
        uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar10 = iVar3 + -0x451550 + uVar10 * 0x811a;
      uVar5 = uVar1 + (uVar17 >> 3);
      if (uVar10 >> 0x16 == 0) {
        uVar10 = uVar10 >> 0xe;
      }
      else {
        uVar10 = ((int)uVar10 >> 0x1f & 0xffffff01U) + 0xff;
      }
      (param_7 + iVar7)[1] = bVar11 & 0xf8 | (byte)(uVar16 >> 5);
      param_7[iVar7] = (byte)((uVar16 & 0x1c) << 3) | (byte)(uVar10 >> 3);
      uVar16 = uVar5 >> 0x11;
      uVar5 = uVar5 >> 1 & 0xff;
      iVar6 = (uint)pbVar8[2] * 0x4a85;
      uVar10 = uVar16 * 0x6625 + -0x379ad0 + iVar6;
      if (uVar10 >> 0x16 == 0) {
        bVar11 = (byte)(uVar10 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar10 >> 0x1f) & 1) - 1;
      }
      uVar10 = uVar16 * -0x3408 + 0x220530 + uVar5 * -0x1913 + iVar6;
      if (uVar10 >> 0x16 == 0) {
        uVar10 = uVar10 >> 0xe;
      }
      else {
        uVar10 = ((int)uVar10 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar16 = uVar5 * 0x811a + -0x451550 + iVar6;
      if (uVar16 >> 0x16 == 0) {
        uVar16 = uVar16 >> 0xe;
      }
      else {
        uVar16 = ((int)uVar16 >> 0x1f & 0xffffff01U) + 0xff;
      }
      param_7[lVar15 + -1] = (byte)((uVar10 & 0x1c) << 3) | (byte)(uVar16 >> 3);
      param_7[lVar15] = bVar11 & 0xf8 | (byte)(uVar10 >> 5);
      if (param_2 != (byte *)0x0) {
        uVar12 = (uVar17 >> 3) + uVar12;
        uVar10 = uVar12 >> 0x11;
        iVar6 = (uint)pbVar9[1] * 0x4a85;
        uVar17 = uVar10 * 0x6625 + -0x379ad0 + iVar6;
        uVar12 = uVar12 >> 1 & 0xff;
        if (uVar17 >> 0x16 == 0) {
          bVar11 = (byte)(uVar17 >> 0xe);
        }
        else {
          bVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = uVar10 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
        if (uVar17 >> 0x16 == 0) {
          uVar17 = uVar17 >> 0xe;
        }
        else {
          uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
        uVar4 = (uVar4 >> 3) + uVar2;
        if (uVar12 >> 0x16 == 0) {
          uVar12 = uVar12 >> 0xe;
        }
        else {
          uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
        }
        (param_8 + iVar7)[1] = bVar11 & 0xf8 | (byte)(uVar17 >> 5);
        param_8[iVar7] = (byte)((uVar17 & 0x1c) << 3) | (byte)(uVar12 >> 3);
        uVar17 = uVar4 >> 0x11;
        uVar4 = uVar4 >> 1 & 0xff;
        iVar6 = (uint)pbVar9[2] * 0x4a85;
        uVar12 = uVar17 * 0x6625 + -0x379ad0 + iVar6;
        if (uVar12 >> 0x16 == 0) {
          bVar11 = (byte)(uVar12 >> 0xe);
        }
        else {
          bVar11 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
        }
        uVar12 = uVar17 * -0x3408 + 0x220530 + uVar4 * -0x1913 + iVar6;
        if (uVar12 >> 0x16 == 0) {
          uVar12 = uVar12 >> 0xe;
        }
        else {
          uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar17 = uVar4 * 0x811a + -0x451550 + iVar6;
        if (uVar17 >> 0x16 == 0) {
          uVar17 = uVar17 >> 0xe;
        }
        else {
          uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
        }
        param_8[lVar15 + -1] = (byte)((uVar12 & 0x1c) << 3) | (byte)(uVar17 >> 3);
        param_8[lVar15] = bVar11 & 0xf8 | (byte)(uVar12 >> 5);
      }
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 4;
      uVar17 = uVar1;
      uVar12 = uVar2;
      pbVar8 = pbVar8 + 2;
      pbVar9 = pbVar9 + 2;
    } while (lVar13 < (int)lVar14 >> 1);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar12 = uVar2 + 0x20002 + uVar1 * 3;
    uVar4 = uVar12 >> 0x12;
    iVar6 = (uint)param_1[lVar14] * 0x4a85;
    uVar17 = uVar4 * 0x6625 + -0x379ad0 + iVar6;
    uVar12 = uVar12 >> 2 & 0xff;
    if (uVar17 >> 0x16 == 0) {
      bVar11 = (byte)(uVar17 >> 0xe);
    }
    else {
      bVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    uVar17 = uVar4 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
    iVar3 = (int)lVar14 << 1;
    if (uVar17 >> 0x16 == 0) {
      uVar17 = uVar17 >> 0xe;
    }
    else {
      uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
    if (uVar12 >> 0x16 == 0) {
      uVar12 = uVar12 >> 0xe;
    }
    else {
      uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
    }
    (param_7 + iVar3)[1] = bVar11 & 0xf8 | (byte)(uVar17 >> 5);
    param_7[iVar3] = (byte)((uVar17 & 0x1c) << 3) | (byte)(uVar12 >> 3);
    if (param_2 != (byte *)0x0) {
      uVar12 = uVar1 + 0x20002 + uVar2 * 3;
      uVar1 = uVar12 >> 0x12;
      iVar6 = (uint)param_2[lVar14] * 0x4a85;
      uVar17 = uVar1 * 0x6625 + -0x379ad0 + iVar6;
      uVar12 = uVar12 >> 2 & 0xff;
      if (uVar17 >> 0x16 == 0) {
        bVar11 = (byte)(uVar17 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
      }
      uVar17 = uVar1 * -0x3408 + 0x220530 + uVar12 * -0x1913 + iVar6;
      if (uVar17 >> 0x16 == 0) {
        uVar17 = uVar17 >> 0xe;
      }
      else {
        uVar17 = ((int)uVar17 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar12 = uVar12 * 0x811a + -0x451550 + iVar6;
      if (uVar12 >> 0x16 == 0) {
        uVar12 = uVar12 >> 0xe;
      }
      else {
        uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
      }
      param_8[iVar3] = (byte)((uVar17 & 0x1c) << 3) | (byte)(uVar12 >> 3);
      (param_8 + iVar3)[1] = bVar11 & 0xf8 | (byte)(uVar17 >> 5);
    }
  }
  return;
}

