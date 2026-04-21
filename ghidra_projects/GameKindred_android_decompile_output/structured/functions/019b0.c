// functions/019b0 — 6 functions
#include "libGameKindred.h"




void FUN_019b0030(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  
  if (0 < (int)param_5) {
    uVar5 = 0;
    uVar6 = (ulong)param_5;
    do {
      bVar3 = *param_3;
      iVar4 = (uint)*param_1 * 0x4a85;
      uVar1 = (iVar4 + (uint)*param_2 * 0x811a) - 0x451550;
      pcVar2 = (char *)(param_4 + (uVar5 & 0xfffffffc));
      if (uVar1 >> 0x16 == 0) {
        cVar7 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar7 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar1 = iVar4 + (uint)*param_2 * -0x1913 + (uint)bVar3 * -0x3408 + 0x220530;
      *pcVar2 = cVar7;
      if (uVar1 >> 0x16 == 0) {
        cVar7 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar7 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar1 = (iVar4 + (uint)bVar3 * 0x6625) - 0x379ad0;
      pcVar2[1] = cVar7;
      if (uVar1 >> 0x16 == 0) {
        cVar7 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar7 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar5 = uVar5 + 4;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
      pcVar2[2] = cVar7;
      pcVar2[3] = -1;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_019b0134(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char cVar8;
  
  if (0 < (int)param_5) {
    uVar6 = 0;
    uVar7 = (ulong)param_5;
    do {
      bVar3 = *param_3;
      bVar4 = *param_2;
      iVar5 = (uint)*param_1 * 0x4a85;
      uVar1 = (iVar5 + (uint)bVar3 * 0x6625) - 0x379ad0;
      puVar2 = (undefined1 *)(param_4 + (uVar6 & 0xfffffffc));
      *puVar2 = 0xff;
      if (uVar1 >> 0x16 == 0) {
        cVar8 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar8 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar1 = iVar5 + (uint)bVar4 * -0x1913 + (uint)bVar3 * -0x3408 + 0x220530;
      puVar2[1] = cVar8;
      if (uVar1 >> 0x16 == 0) {
        cVar8 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar8 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar1 = (iVar5 + (uint)bVar4 * 0x811a) - 0x451550;
      puVar2[2] = cVar8;
      if (uVar1 >> 0x16 == 0) {
        cVar8 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar8 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar6 = uVar6 + 4;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
      param_1 = param_1 + 1;
      puVar2[3] = cVar8;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_019b0230(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  
  if (0 < (int)param_5) {
    uVar5 = (ulong)param_5;
    pbVar6 = (byte *)(param_4 + 1);
    do {
      iVar2 = (uint)*param_1 * 0x4a85;
      uVar3 = (iVar2 + (uint)*param_3 * 0x6625) - 0x379ad0;
      if (uVar3 >> 0x16 == 0) {
        bVar7 = (byte)(uVar3 >> 0xe);
      }
      else {
        bVar7 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar2 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408 + 0x220530;
      if (uVar3 >> 0x16 == 0) {
        uVar3 = uVar3 >> 0xe;
      }
      else {
        uVar3 = ((int)uVar3 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar1 = (iVar2 + (uint)*param_2 * 0x811a) - 0x451550;
      if (uVar1 >> 0x16 == 0) {
        bVar4 = (byte)(uVar1 >> 0xe);
      }
      else {
        bVar4 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      uVar5 = uVar5 - 1;
      pbVar6[-1] = bVar4 | 0xf;
      *pbVar6 = bVar7 & 0xf0 | (byte)(uVar3 >> 4);
      pbVar6 = pbVar6 + 2;
    } while (uVar5 != 0);
  }
  return;
}




void FUN_019b0318(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  
  if (0 < (int)param_5) {
    uVar4 = (ulong)param_5;
    pbVar5 = (byte *)(param_4 + 1);
    do {
      iVar1 = (uint)*param_1 * 0x4a85;
      uVar2 = (iVar1 + (uint)*param_3 * 0x6625) - 0x379ad0;
      if (uVar2 >> 0x16 == 0) {
        bVar6 = (byte)(uVar2 >> 0xe);
      }
      else {
        bVar6 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = iVar1 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408 + 0x220530;
      if (uVar2 >> 0x16 == 0) {
        uVar2 = uVar2 >> 0xe;
      }
      else {
        uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar3 = (iVar1 + (uint)*param_2 * 0x811a) - 0x451550;
      if (uVar3 >> 0x16 == 0) {
        uVar3 = uVar3 >> 0xe;
      }
      else {
        uVar3 = ((int)uVar3 >> 0x1f & 0xffffff01U) + 0xff;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      uVar4 = uVar4 - 1;
      *pbVar5 = bVar6 & 0xf8 | (byte)(uVar2 >> 5);
      pbVar5[-1] = (byte)((uVar2 & 0x1c) << 3) | (byte)(uVar3 >> 3);
      pbVar5 = pbVar5 + 2;
    } while (uVar4 != 0);
  }
  return;
}




void FUN_019b040c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  
  uVar3 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar4 = (uint)*param_5 | (uint)*param_6 << 0x10;
  iVar7 = (uint)*param_1 * 0x4a85;
  uVar15 = uVar3 * 3 + uVar4 + 0x20002;
  uVar5 = uVar15 >> 0x12;
  uVar18 = (iVar7 + uVar5 * 0x6625) - 0x379ad0;
  uVar15 = uVar15 >> 2 & 0xff;
  if (uVar18 >> 0x16 == 0) {
    cVar14 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar18 = iVar7 + uVar5 * -0x3408 + uVar15 * -0x1913 + 0x220530;
  *param_7 = cVar14;
  if (uVar18 >> 0x16 == 0) {
    cVar14 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar15 = (iVar7 + uVar15 * 0x811a) - 0x451550;
  param_7[1] = cVar14;
  if (uVar15 >> 0x16 == 0) {
    cVar14 = (char)(uVar15 >> 0xe);
  }
  else {
    cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
  }
  lVar13 = (long)param_9 - 1;
  param_7[2] = cVar14;
  if (param_2 != (byte *)0x0) {
    uVar15 = uVar3 + 0x20002 + uVar4 * 3;
    uVar5 = uVar15 >> 0x12;
    iVar7 = (uint)*param_2 * 0x4a85;
    uVar18 = uVar5 * 0x6625 + -0x379ad0 + iVar7;
    uVar15 = uVar15 >> 2 & 0xff;
    if (uVar18 >> 0x16 == 0) {
      cVar14 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar5 * -0x3408 + 0x220530 + uVar15 * -0x1913 + iVar7;
    *param_8 = cVar14;
    if (uVar18 >> 0x16 == 0) {
      cVar14 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar15 = uVar15 * 0x811a + -0x451550 + iVar7;
    param_8[1] = cVar14;
    if (uVar15 >> 0x16 == 0) {
      cVar14 = (char)(uVar15 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar14;
  }
  if (2 < param_9) {
    lVar16 = 0;
    lVar17 = 0;
    uVar18 = uVar3;
    uVar15 = uVar4;
    pbVar11 = param_1;
    pbVar12 = param_2;
    do {
      uVar3 = (uint)param_3[lVar16 + 1] | (uint)param_4[lVar16 + 1] << 0x10;
      uVar4 = (uint)param_5[lVar16 + 1] | (uint)param_6[lVar16 + 1] << 0x10;
      iVar7 = uVar3 + uVar15 + uVar18 + uVar4 + 0x80008;
      uVar5 = iVar7 + (uVar3 + uVar15) * 2;
      iVar8 = (uint)pbVar11[1] * 0x4a85;
      uVar1 = uVar18 + (uVar5 >> 3);
      uVar9 = uVar1 >> 1 & 0xff;
      uVar1 = uVar1 >> 0x11;
      uVar6 = iVar8 + -0x379ad0 + uVar1 * 0x6625;
      if (uVar6 >> 0x16 == 0) {
        cVar14 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar18 = iVar7 + (uVar4 + uVar18) * 2;
      uVar1 = iVar8 + 0x220530 + uVar1 * -0x3408 + uVar9 * -0x1913;
      param_7[lVar17 + 3] = cVar14;
      if (uVar1 >> 0x16 == 0) {
        cVar14 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar6 = iVar8 + -0x451550 + uVar9 * 0x811a;
      uVar1 = uVar3 + (uVar18 >> 3);
      param_7[lVar17 + 4] = cVar14;
      if (uVar6 >> 0x16 == 0) {
        cVar14 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      param_7[lVar17 + 5] = cVar14;
      uVar6 = (int)lVar17 + 6;
      uVar10 = uVar1 >> 1 & 0xff;
      uVar1 = uVar1 >> 0x11;
      iVar7 = (uint)pbVar11[2] * 0x4a85;
      uVar9 = uVar1 * 0x6625 + -0x379ad0 + iVar7;
      pcVar2 = param_7 + uVar6;
      if (uVar9 >> 0x16 == 0) {
        cVar14 = (char)(uVar9 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar9 >> 0x1f) & 1) - 1;
      }
      uVar1 = uVar1 * -0x3408 + 0x220530 + uVar10 * -0x1913 + iVar7;
      *pcVar2 = cVar14;
      if (uVar1 >> 0x16 == 0) {
        cVar14 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      uVar1 = uVar10 * 0x811a + -0x451550 + iVar7;
      pcVar2[1] = cVar14;
      if (uVar1 >> 0x16 == 0) {
        cVar14 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      pcVar2[2] = cVar14;
      if (param_2 != (byte *)0x0) {
        uVar15 = (uVar18 >> 3) + uVar15;
        uVar18 = uVar15 >> 0x11;
        uVar1 = uVar15 >> 1 & 0xff;
        iVar7 = (uint)pbVar12[1] * 0x4a85;
        uVar15 = uVar18 * 0x6625 + -0x379ad0 + iVar7;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        uVar15 = uVar18 * -0x3408 + 0x220530 + uVar1 * -0x1913 + iVar7;
        param_8[lVar17 + 3] = cVar14;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        uVar15 = uVar1 * 0x811a + -0x451550 + iVar7;
        uVar18 = (uVar5 >> 3) + uVar4;
        param_8[lVar17 + 4] = cVar14;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        param_8[lVar17 + 5] = cVar14;
        uVar5 = uVar18 >> 1 & 0xff;
        uVar18 = uVar18 >> 0x11;
        iVar7 = (uint)pbVar12[2] * 0x4a85;
        uVar15 = uVar18 * 0x6625 + -0x379ad0 + iVar7;
        pcVar2 = param_8 + uVar6;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        uVar15 = uVar18 * -0x3408 + 0x220530 + uVar5 * -0x1913 + iVar7;
        *pcVar2 = cVar14;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        uVar15 = uVar5 * 0x811a + -0x451550 + iVar7;
        pcVar2[1] = cVar14;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        pcVar2[2] = cVar14;
      }
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 6;
      uVar18 = uVar3;
      uVar15 = uVar4;
      pbVar11 = pbVar11 + 2;
      pbVar12 = pbVar12 + 2;
    } while (lVar16 < (int)lVar13 >> 1);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar15 = uVar4 + 0x20002 + uVar3 * 3;
    uVar18 = uVar15 >> 0x12;
    uVar5 = uVar15 >> 2 & 0xff;
    iVar7 = (uint)param_1[lVar13] * 0x4a85;
    iVar8 = (int)lVar13 * 3;
    uVar15 = uVar18 * 0x6625 + -0x379ad0 + iVar7;
    param_7 = param_7 + iVar8;
    if (uVar15 >> 0x16 == 0) {
      cVar14 = (char)(uVar15 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
    }
    uVar15 = uVar18 * -0x3408 + 0x220530 + uVar5 * -0x1913 + iVar7;
    *param_7 = cVar14;
    if (uVar15 >> 0x16 == 0) {
      cVar14 = (char)(uVar15 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
    }
    uVar15 = uVar5 * 0x811a + -0x451550 + iVar7;
    param_7[1] = cVar14;
    if (uVar15 >> 0x16 == 0) {
      cVar14 = (char)(uVar15 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
    }
    param_7[2] = cVar14;
    if (param_2 != (byte *)0x0) {
      uVar15 = uVar3 + 0x20002 + uVar4 * 3;
      uVar18 = uVar15 >> 0x12;
      uVar3 = uVar15 >> 2 & 0xff;
      iVar7 = (uint)param_2[lVar13] * 0x4a85;
      uVar15 = uVar18 * 0x6625 + -0x379ad0 + iVar7;
      param_8 = param_8 + iVar8;
      if (uVar15 >> 0x16 == 0) {
        cVar14 = (char)(uVar15 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
      }
      uVar15 = uVar18 * -0x3408 + 0x220530 + uVar3 * -0x1913 + iVar7;
      *param_8 = cVar14;
      if (uVar15 >> 0x16 == 0) {
        cVar14 = (char)(uVar15 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
      }
      uVar15 = uVar3 * 0x811a + -0x451550 + iVar7;
      param_8[1] = cVar14;
      if (uVar15 >> 0x16 == 0) {
        cVar14 = (char)(uVar15 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
      }
      param_8[2] = cVar14;
    }
  }
  return;
}




void FUN_019b0ad0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  
  uVar3 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar4 = (uint)*param_5 | (uint)*param_6 << 0x10;
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar14 = uVar3 * 3 + uVar4 + 0x20002;
  uVar9 = uVar14 >> 0x12 & 0xff;
  uVar18 = (iVar6 + uVar9 * 0x6625) - 0x379ad0;
  uVar14 = uVar14 >> 2 & 0xff;
  if (uVar18 >> 0x16 == 0) {
    cVar13 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar18 = iVar6 + uVar14 * -0x1913 + uVar9 * -0x3408 + 0x220530;
  *param_7 = cVar13;
  if (uVar18 >> 0x16 == 0) {
    cVar13 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar14 = (iVar6 + uVar14 * 0x811a) - 0x451550;
  param_7[1] = cVar13;
  if (uVar14 >> 0x16 == 0) {
    cVar13 = (char)(uVar14 >> 0xe);
  }
  else {
    cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
  }
  param_7[2] = cVar13;
  param_7[3] = -1;
  lVar16 = (long)param_9 - 1;
  if (param_2 != (byte *)0x0) {
    uVar14 = uVar3 + 0x20002 + uVar4 * 3;
    uVar9 = uVar14 >> 0x12 & 0xff;
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar18 = uVar9 * 0x6625 + -0x379ad0 + iVar6;
    uVar14 = uVar14 >> 2 & 0xff;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar14 * -0x1913 + 0x220530 + uVar9 * -0x3408 + iVar6;
    *param_8 = cVar13;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar14 = uVar14 * 0x811a + -0x451550 + iVar6;
    param_8[1] = cVar13;
    if (uVar14 >> 0x16 == 0) {
      cVar13 = (char)(uVar14 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar13;
    param_8[3] = -1;
  }
  if (2 < param_9) {
    lVar15 = 0;
    uVar17 = 8;
    uVar18 = uVar3;
    uVar14 = uVar4;
    pbVar11 = param_2;
    pbVar12 = param_1;
    do {
      uVar3 = (uint)param_3[lVar15 + 1] | (uint)param_4[lVar15 + 1] << 0x10;
      uVar4 = (uint)param_5[lVar15 + 1] | (uint)param_6[lVar15 + 1] << 0x10;
      iVar6 = uVar3 + uVar14 + uVar18 + uVar4 + 0x80008;
      uVar9 = iVar6 + (uVar3 + uVar14) * 2;
      iVar7 = (uint)pbVar12[1] * 0x4a85;
      uVar2 = uVar18 + (uVar9 >> 3);
      uVar10 = uVar2 >> 0x11 & 0xff;
      iVar8 = (int)uVar17 + -4;
      uVar5 = iVar7 + -0x379ad0 + uVar10 * 0x6625;
      pcVar1 = param_7 + iVar8;
      uVar2 = uVar2 >> 1 & 0xff;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar7 + 0x220530 + uVar2 * -0x1913 + uVar10 * -0x3408;
      uVar18 = iVar6 + (uVar4 + uVar18) * 2;
      *pcVar1 = cVar13;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar7 + -0x451550 + uVar2 * 0x811a;
      uVar2 = uVar3 + (uVar18 >> 3);
      pcVar1[1] = cVar13;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      pcVar1[2] = cVar13;
      pcVar1[3] = -1;
      uVar10 = uVar2 >> 0x11 & 0xff;
      iVar6 = (uint)pbVar12[2] * 0x4a85;
      uVar5 = uVar10 * 0x6625 + -0x379ad0 + iVar6;
      pcVar1 = param_7 + (uVar17 & 0xfffffff8);
      uVar2 = uVar2 >> 1 & 0xff;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = uVar2 * -0x1913 + 0x220530 + uVar10 * -0x3408 + iVar6;
      *pcVar1 = cVar13;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar2 = uVar2 * 0x811a + -0x451550 + iVar6;
      pcVar1[1] = cVar13;
      if (uVar2 >> 0x16 == 0) {
        cVar13 = (char)(uVar2 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      pcVar1[2] = cVar13;
      pcVar1[3] = -1;
      if (param_2 != (byte *)0x0) {
        uVar14 = (uVar18 >> 3) + uVar14;
        uVar2 = uVar14 >> 0x11 & 0xff;
        pcVar1 = param_8 + iVar8;
        iVar6 = (uint)pbVar11[1] * 0x4a85;
        uVar18 = uVar2 * 0x6625 + -0x379ad0 + iVar6;
        uVar14 = uVar14 >> 1 & 0xff;
        if (uVar18 >> 0x16 == 0) {
          cVar13 = (char)(uVar18 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        uVar18 = uVar14 * -0x1913 + 0x220530 + uVar2 * -0x3408 + iVar6;
        *pcVar1 = cVar13;
        if (uVar18 >> 0x16 == 0) {
          cVar13 = (char)(uVar18 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        uVar18 = (uVar9 >> 3) + uVar4;
        uVar14 = uVar14 * 0x811a + -0x451550 + iVar6;
        pcVar1[1] = cVar13;
        if (uVar14 >> 0x16 == 0) {
          cVar13 = (char)(uVar14 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        pcVar1[2] = cVar13;
        pcVar1[3] = -1;
        pcVar1 = param_8 + (uVar17 & 0xfffffff8);
        uVar9 = uVar18 >> 0x11 & 0xff;
        iVar6 = (uint)pbVar11[2] * 0x4a85;
        uVar14 = uVar9 * 0x6625 + -0x379ad0 + iVar6;
        uVar18 = uVar18 >> 1 & 0xff;
        if (uVar14 >> 0x16 == 0) {
          cVar13 = (char)(uVar14 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        uVar14 = uVar18 * -0x1913 + 0x220530 + uVar9 * -0x3408 + iVar6;
        *pcVar1 = cVar13;
        if (uVar14 >> 0x16 == 0) {
          cVar13 = (char)(uVar14 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        uVar14 = uVar18 * 0x811a + -0x451550 + iVar6;
        pcVar1[1] = cVar13;
        if (uVar14 >> 0x16 == 0) {
          cVar13 = (char)(uVar14 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        pcVar1[2] = cVar13;
        pcVar1[3] = -1;
      }
      lVar15 = lVar15 + 1;
      uVar17 = uVar17 + 8;
      uVar18 = uVar3;
      uVar14 = uVar4;
      pbVar11 = pbVar11 + 2;
      pbVar12 = pbVar12 + 2;
    } while (lVar15 < (int)lVar16 >> 1);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar14 = uVar4 + 0x20002 + uVar3 * 3;
    uVar9 = uVar14 >> 0x12 & 0xff;
    iVar7 = (uint)param_1[lVar16] * 0x4a85;
    iVar6 = (int)lVar16 << 2;
    uVar18 = uVar9 * 0x6625 + -0x379ad0 + iVar7;
    param_7 = param_7 + iVar6;
    uVar14 = uVar14 >> 2 & 0xff;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar14 * -0x1913 + 0x220530 + uVar9 * -0x3408 + iVar7;
    *param_7 = cVar13;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar14 = uVar14 * 0x811a + -0x451550 + iVar7;
    param_7[1] = cVar13;
    if (uVar14 >> 0x16 == 0) {
      cVar13 = (char)(uVar14 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
    }
    param_7[2] = cVar13;
    param_7[3] = -1;
    if (param_2 != (byte *)0x0) {
      uVar14 = uVar3 + 0x20002 + uVar4 * 3;
      param_8 = param_8 + iVar6;
      uVar3 = uVar14 >> 0x12 & 0xff;
      iVar6 = (uint)param_2[lVar16] * 0x4a85;
      uVar18 = uVar3 * 0x6625 + -0x379ad0 + iVar6;
      uVar14 = uVar14 >> 2 & 0xff;
      if (uVar18 >> 0x16 == 0) {
        cVar13 = (char)(uVar18 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
      }
      uVar18 = uVar14 * -0x1913 + 0x220530 + uVar3 * -0x3408 + iVar6;
      *param_8 = cVar13;
      if (uVar18 >> 0x16 == 0) {
        cVar13 = (char)(uVar18 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
      }
      uVar14 = uVar14 * 0x811a + -0x451550 + iVar6;
      param_8[1] = cVar13;
      if (uVar14 >> 0x16 == 0) {
        cVar13 = (char)(uVar14 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
      }
      param_8[2] = cVar13;
      param_8[3] = -1;
    }
  }
  return;
}

