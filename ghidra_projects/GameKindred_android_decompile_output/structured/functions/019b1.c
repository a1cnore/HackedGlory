// functions/019b1 — 3 functions
#include "libGameKindred.h"




void FUN_019b11d8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
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
  iVar6 = (uint)*param_1 * 0x4a85;
  uVar15 = uVar3 * 3 + uVar4 + 0x20002;
  uVar8 = uVar15 >> 2 & 0xff;
  uVar18 = (iVar6 + uVar8 * 0x811a) - 0x451550;
  uVar15 = uVar15 >> 0x12;
  if (uVar18 >> 0x16 == 0) {
    cVar14 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar18 = iVar6 + uVar15 * -0x3408 + uVar8 * -0x1913 + 0x220530;
  *param_7 = cVar14;
  if (uVar18 >> 0x16 == 0) {
    cVar14 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar15 = (iVar6 + uVar15 * 0x6625) - 0x379ad0;
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
    uVar8 = uVar15 >> 2 & 0xff;
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar18 = uVar8 * 0x811a + -0x451550 + iVar6;
    uVar15 = uVar15 >> 0x12;
    if (uVar18 >> 0x16 == 0) {
      cVar14 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar15 * -0x3408 + 0x220530 + uVar8 * -0x1913 + iVar6;
    *param_8 = cVar14;
    if (uVar18 >> 0x16 == 0) {
      cVar14 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar15 = uVar15 * 0x6625 + -0x379ad0 + iVar6;
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
      iVar6 = uVar3 + uVar15 + uVar18 + uVar4 + 0x80008;
      uVar8 = iVar6 + (uVar3 + uVar15) * 2;
      iVar7 = (uint)pbVar11[1] * 0x4a85;
      uVar1 = uVar18 + (uVar8 >> 3);
      uVar9 = uVar1 >> 1 & 0xff;
      uVar5 = iVar7 + -0x451550 + uVar9 * 0x811a;
      uVar1 = uVar1 >> 0x11;
      if (uVar5 >> 0x16 == 0) {
        cVar14 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar18 = iVar6 + (uVar4 + uVar18) * 2;
      uVar5 = iVar7 + 0x220530 + uVar1 * -0x3408 + uVar9 * -0x1913;
      param_7[lVar17 + 3] = cVar14;
      if (uVar5 >> 0x16 == 0) {
        cVar14 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar7 + -0x379ad0 + uVar1 * 0x6625;
      uVar1 = uVar3 + (uVar18 >> 3);
      param_7[lVar17 + 4] = cVar14;
      if (uVar5 >> 0x16 == 0) {
        cVar14 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      param_7[lVar17 + 5] = cVar14;
      uVar5 = (int)lVar17 + 6;
      uVar10 = uVar1 >> 1 & 0xff;
      uVar1 = uVar1 >> 0x11;
      iVar6 = (uint)pbVar11[2] * 0x4a85;
      uVar9 = uVar10 * 0x811a + -0x451550 + iVar6;
      pcVar2 = param_7 + uVar5;
      if (uVar9 >> 0x16 == 0) {
        cVar14 = (char)(uVar9 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar9 >> 0x1f) & 1) - 1;
      }
      uVar9 = uVar1 * -0x3408 + 0x220530 + uVar10 * -0x1913 + iVar6;
      *pcVar2 = cVar14;
      if (uVar9 >> 0x16 == 0) {
        cVar14 = (char)(uVar9 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar9 >> 0x1f) & 1) - 1;
      }
      uVar1 = uVar1 * 0x6625 + -0x379ad0 + iVar6;
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
        uVar1 = uVar15 >> 1 & 0xff;
        uVar15 = uVar15 >> 0x11;
        iVar6 = (uint)pbVar12[1] * 0x4a85;
        uVar18 = uVar1 * 0x811a + -0x451550 + iVar6;
        if (uVar18 >> 0x16 == 0) {
          cVar14 = (char)(uVar18 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        uVar18 = uVar15 * -0x3408 + 0x220530 + uVar1 * -0x1913 + iVar6;
        param_8[lVar17 + 3] = cVar14;
        if (uVar18 >> 0x16 == 0) {
          cVar14 = (char)(uVar18 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        uVar15 = uVar15 * 0x6625 + -0x379ad0 + iVar6;
        uVar18 = (uVar8 >> 3) + uVar4;
        param_8[lVar17 + 4] = cVar14;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        param_8[lVar17 + 5] = cVar14;
        uVar8 = uVar18 >> 1 & 0xff;
        uVar18 = uVar18 >> 0x11;
        iVar6 = (uint)pbVar12[2] * 0x4a85;
        uVar15 = uVar8 * 0x811a + -0x451550 + iVar6;
        pcVar2 = param_8 + uVar5;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        uVar15 = uVar18 * -0x3408 + 0x220530 + uVar8 * -0x1913 + iVar6;
        *pcVar2 = cVar14;
        if (uVar15 >> 0x16 == 0) {
          cVar14 = (char)(uVar15 >> 0xe);
        }
        else {
          cVar14 = ((byte)((int)uVar15 >> 0x1f) & 1) - 1;
        }
        uVar15 = uVar18 * 0x6625 + -0x379ad0 + iVar6;
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
    uVar8 = uVar15 >> 2 & 0xff;
    uVar15 = uVar15 >> 0x12;
    iVar6 = (uint)param_1[lVar13] * 0x4a85;
    iVar7 = (int)lVar13 * 3;
    uVar18 = uVar8 * 0x811a + -0x451550 + iVar6;
    param_7 = param_7 + iVar7;
    if (uVar18 >> 0x16 == 0) {
      cVar14 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar15 * -0x3408 + 0x220530 + uVar8 * -0x1913 + iVar6;
    *param_7 = cVar14;
    if (uVar18 >> 0x16 == 0) {
      cVar14 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar15 = uVar15 * 0x6625 + -0x379ad0 + iVar6;
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
      uVar3 = uVar15 >> 2 & 0xff;
      uVar15 = uVar15 >> 0x12;
      iVar6 = (uint)param_2[lVar13] * 0x4a85;
      uVar18 = uVar3 * 0x811a + -0x451550 + iVar6;
      param_8 = param_8 + iVar7;
      if (uVar18 >> 0x16 == 0) {
        cVar14 = (char)(uVar18 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
      }
      uVar18 = uVar15 * -0x3408 + 0x220530 + uVar3 * -0x1913 + iVar6;
      *param_8 = cVar14;
      if (uVar18 >> 0x16 == 0) {
        cVar14 = (char)(uVar18 >> 0xe);
      }
      else {
        cVar14 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
      }
      uVar15 = uVar15 * 0x6625 + -0x379ad0 + iVar6;
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




void FUN_019b189c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
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
  uVar9 = uVar14 >> 2 & 0xff;
  uVar18 = (iVar6 + uVar9 * 0x811a) - 0x451550;
  uVar14 = uVar14 >> 0x12 & 0xff;
  if (uVar18 >> 0x16 == 0) {
    cVar13 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar18 = iVar6 + uVar9 * -0x1913 + uVar14 * -0x3408 + 0x220530;
  *param_7 = cVar13;
  if (uVar18 >> 0x16 == 0) {
    cVar13 = (char)(uVar18 >> 0xe);
  }
  else {
    cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
  }
  uVar14 = (iVar6 + uVar14 * 0x6625) - 0x379ad0;
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
    uVar9 = uVar14 >> 2 & 0xff;
    iVar6 = (uint)*param_2 * 0x4a85;
    uVar18 = uVar9 * 0x811a + -0x451550 + iVar6;
    uVar14 = uVar14 >> 0x12 & 0xff;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar9 * -0x1913 + 0x220530 + uVar14 * -0x3408 + iVar6;
    *param_8 = cVar13;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar14 = uVar14 * 0x6625 + -0x379ad0 + iVar6;
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
      uVar10 = uVar2 >> 1 & 0xff;
      iVar8 = (int)uVar17 + -4;
      uVar5 = iVar7 + -0x451550 + uVar10 * 0x811a;
      pcVar1 = param_7 + iVar8;
      uVar2 = uVar2 >> 0x11 & 0xff;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar18 = iVar6 + (uVar4 + uVar18) * 2;
      uVar5 = iVar7 + 0x220530 + uVar10 * -0x1913 + uVar2 * -0x3408;
      *pcVar1 = cVar13;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar7 + -0x379ad0 + uVar2 * 0x6625;
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
      uVar10 = uVar2 >> 1 & 0xff;
      iVar6 = (uint)pbVar12[2] * 0x4a85;
      uVar5 = uVar10 * 0x811a + -0x451550 + iVar6;
      pcVar1 = param_7 + (uVar17 & 0xfffffff8);
      uVar2 = uVar2 >> 0x11 & 0xff;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = uVar10 * -0x1913 + 0x220530 + uVar2 * -0x3408 + iVar6;
      *pcVar1 = cVar13;
      if (uVar5 >> 0x16 == 0) {
        cVar13 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar2 = uVar2 * 0x6625 + -0x379ad0 + iVar6;
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
        uVar2 = uVar14 >> 1 & 0xff;
        pcVar1 = param_8 + iVar8;
        iVar6 = (uint)pbVar11[1] * 0x4a85;
        uVar18 = uVar2 * 0x811a + -0x451550 + iVar6;
        uVar14 = uVar14 >> 0x11 & 0xff;
        if (uVar18 >> 0x16 == 0) {
          cVar13 = (char)(uVar18 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        uVar18 = uVar2 * -0x1913 + 0x220530 + uVar14 * -0x3408 + iVar6;
        *pcVar1 = cVar13;
        if (uVar18 >> 0x16 == 0) {
          cVar13 = (char)(uVar18 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
        }
        uVar18 = (uVar9 >> 3) + uVar4;
        uVar14 = uVar14 * 0x6625 + -0x379ad0 + iVar6;
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
        uVar9 = uVar18 >> 1 & 0xff;
        iVar6 = (uint)pbVar11[2] * 0x4a85;
        uVar14 = uVar9 * 0x811a + -0x451550 + iVar6;
        uVar18 = uVar18 >> 0x11 & 0xff;
        if (uVar14 >> 0x16 == 0) {
          cVar13 = (char)(uVar14 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        uVar14 = uVar9 * -0x1913 + 0x220530 + uVar18 * -0x3408 + iVar6;
        *pcVar1 = cVar13;
        if (uVar14 >> 0x16 == 0) {
          cVar13 = (char)(uVar14 >> 0xe);
        }
        else {
          cVar13 = ((byte)((int)uVar14 >> 0x1f) & 1) - 1;
        }
        uVar14 = uVar18 * 0x6625 + -0x379ad0 + iVar6;
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
    uVar9 = uVar14 >> 2 & 0xff;
    iVar7 = (uint)param_1[lVar16] * 0x4a85;
    iVar6 = (int)lVar16 << 2;
    uVar18 = uVar9 * 0x811a + -0x451550 + iVar7;
    param_7 = param_7 + iVar6;
    uVar14 = uVar14 >> 0x12 & 0xff;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar18 = uVar9 * -0x1913 + 0x220530 + uVar14 * -0x3408 + iVar7;
    *param_7 = cVar13;
    if (uVar18 >> 0x16 == 0) {
      cVar13 = (char)(uVar18 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
    }
    uVar14 = uVar14 * 0x6625 + -0x379ad0 + iVar7;
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
      uVar3 = uVar14 >> 2 & 0xff;
      iVar6 = (uint)param_2[lVar16] * 0x4a85;
      uVar18 = uVar3 * 0x811a + -0x451550 + iVar6;
      uVar14 = uVar14 >> 0x12 & 0xff;
      if (uVar18 >> 0x16 == 0) {
        cVar13 = (char)(uVar18 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
      }
      uVar18 = uVar3 * -0x1913 + 0x220530 + uVar14 * -0x3408 + iVar6;
      *param_8 = cVar13;
      if (uVar18 >> 0x16 == 0) {
        cVar13 = (char)(uVar18 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar18 >> 0x1f) & 1) - 1;
      }
      uVar14 = uVar14 * 0x6625 + -0x379ad0 + iVar6;
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




void FUN_019b1fa4(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,undefined1 *param_7,undefined1 *param_8,int param_9)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  
  uVar3 = (uint)*param_3 | (uint)*param_4 << 0x10;
  uVar4 = (uint)*param_5 | (uint)*param_6 << 0x10;
  iVar7 = (uint)*param_1 * 0x4a85;
  uVar17 = uVar3 * 3 + uVar4 + 0x20002;
  *param_7 = 0xff;
  uVar9 = uVar17 >> 0x12 & 0xff;
  uVar16 = (iVar7 + uVar9 * 0x6625) - 0x379ad0;
  uVar17 = uVar17 >> 2 & 0xff;
  if (uVar16 >> 0x16 == 0) {
    cVar15 = (char)(uVar16 >> 0xe);
  }
  else {
    cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
  }
  uVar16 = iVar7 + uVar17 * -0x1913 + uVar9 * -0x3408 + 0x220530;
  param_7[1] = cVar15;
  if (uVar16 >> 0x16 == 0) {
    cVar15 = (char)(uVar16 >> 0xe);
  }
  else {
    cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
  }
  uVar17 = (iVar7 + uVar17 * 0x811a) - 0x451550;
  param_7[2] = cVar15;
  if (uVar17 >> 0x16 == 0) {
    cVar15 = (char)(uVar17 >> 0xe);
  }
  else {
    cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
  }
  uVar14 = (long)param_9 - 1;
  param_7[3] = cVar15;
  if (param_2 != (byte *)0x0) {
    uVar17 = uVar3 + 0x20002 + uVar4 * 3;
    bVar5 = *param_2;
    *param_8 = 0xff;
    uVar9 = uVar17 >> 0x12 & 0xff;
    iVar7 = (uint)bVar5 * 0x4a85;
    uVar16 = uVar9 * 0x6625 + -0x379ad0 + iVar7;
    uVar17 = uVar17 >> 2 & 0xff;
    if (uVar16 >> 0x16 == 0) {
      cVar15 = (char)(uVar16 >> 0xe);
    }
    else {
      cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar16 = uVar17 * -0x1913 + 0x220530 + uVar9 * -0x3408 + iVar7;
    param_8[1] = cVar15;
    if (uVar16 >> 0x16 == 0) {
      cVar15 = (char)(uVar16 >> 0xe);
    }
    else {
      cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar17 = uVar17 * 0x811a + -0x451550 + iVar7;
    param_8[2] = cVar15;
    if (uVar17 >> 0x16 == 0) {
      cVar15 = (char)(uVar17 >> 0xe);
    }
    else {
      cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    param_8[3] = cVar15;
  }
  if (2 < param_9) {
    lVar18 = 0;
    lVar19 = 0;
    uVar16 = uVar3;
    uVar17 = uVar4;
    pbVar12 = param_2;
    pbVar13 = param_1;
    do {
      uVar3 = (uint)param_3[lVar18 + 1] | (uint)param_4[lVar18 + 1] << 0x10;
      uVar4 = (uint)param_5[lVar18 + 1] | (uint)param_6[lVar18 + 1] << 0x10;
      iVar7 = uVar3 + uVar17 + uVar16 + uVar4 + 0x80008;
      uVar9 = iVar7 + (uVar3 + uVar17) * 2;
      iVar8 = (uint)pbVar13[1] * 0x4a85;
      uVar1 = uVar16 + (uVar9 >> 3);
      uVar10 = uVar1 >> 0x11 & 0xff;
      uVar6 = iVar8 + -0x379ad0 + uVar10 * 0x6625;
      uVar1 = uVar1 >> 1 & 0xff;
      param_7[lVar19 + 4] = 0xff;
      if (uVar6 >> 0x16 == 0) {
        cVar15 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar6 = iVar8 + 0x220530 + uVar1 * -0x1913 + uVar10 * -0x3408;
      uVar16 = iVar7 + (uVar4 + uVar16) * 2;
      param_7[lVar19 + 5] = cVar15;
      if (uVar6 >> 0x16 == 0) {
        cVar15 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      uVar6 = iVar8 + -0x451550 + uVar1 * 0x811a;
      uVar1 = uVar3 + (uVar16 >> 3);
      param_7[lVar19 + 6] = cVar15;
      if (uVar6 >> 0x16 == 0) {
        cVar15 = (char)(uVar6 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar6 >> 0x1f) & 1) - 1;
      }
      param_7[lVar19 + 7] = cVar15;
      uVar6 = (int)lVar19 + 8;
      iVar7 = (uint)pbVar13[2] * 0x4a85;
      uVar11 = uVar1 >> 0x11 & 0xff;
      uVar10 = uVar11 * 0x6625 + -0x379ad0 + iVar7;
      puVar2 = param_7 + uVar6;
      uVar1 = uVar1 >> 1 & 0xff;
      *puVar2 = 0xff;
      if (uVar10 >> 0x16 == 0) {
        cVar15 = (char)(uVar10 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar10 >> 0x1f) & 1) - 1;
      }
      uVar10 = uVar1 * -0x1913 + 0x220530 + uVar11 * -0x3408 + iVar7;
      puVar2[1] = cVar15;
      if (uVar10 >> 0x16 == 0) {
        cVar15 = (char)(uVar10 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar10 >> 0x1f) & 1) - 1;
      }
      uVar1 = uVar1 * 0x811a + -0x451550 + iVar7;
      puVar2[2] = cVar15;
      if (uVar1 >> 0x16 == 0) {
        cVar15 = (char)(uVar1 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar1 >> 0x1f) & 1) - 1;
      }
      puVar2[3] = cVar15;
      if (param_2 != (byte *)0x0) {
        uVar17 = (uVar16 >> 3) + uVar17;
        uVar1 = uVar17 >> 0x11 & 0xff;
        iVar7 = (uint)pbVar12[1] * 0x4a85;
        uVar16 = uVar1 * 0x6625 + -0x379ad0 + iVar7;
        uVar17 = uVar17 >> 1 & 0xff;
        param_8[lVar19 + 4] = 0xff;
        if (uVar16 >> 0x16 == 0) {
          cVar15 = (char)(uVar16 >> 0xe);
        }
        else {
          cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
        }
        uVar16 = uVar17 * -0x1913 + 0x220530 + uVar1 * -0x3408 + iVar7;
        param_8[lVar19 + 5] = cVar15;
        if (uVar16 >> 0x16 == 0) {
          cVar15 = (char)(uVar16 >> 0xe);
        }
        else {
          cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
        }
        uVar16 = (uVar9 >> 3) + uVar4;
        uVar17 = uVar17 * 0x811a + -0x451550 + iVar7;
        param_8[lVar19 + 6] = cVar15;
        if (uVar17 >> 0x16 == 0) {
          cVar15 = (char)(uVar17 >> 0xe);
        }
        else {
          cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        param_8[lVar19 + 7] = cVar15;
        puVar2 = param_8 + uVar6;
        uVar9 = uVar16 >> 0x11 & 0xff;
        iVar7 = (uint)pbVar12[2] * 0x4a85;
        uVar17 = uVar9 * 0x6625 + -0x379ad0 + iVar7;
        uVar16 = uVar16 >> 1 & 0xff;
        *puVar2 = 0xff;
        if (uVar17 >> 0x16 == 0) {
          cVar15 = (char)(uVar17 >> 0xe);
        }
        else {
          cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = uVar16 * -0x1913 + 0x220530 + uVar9 * -0x3408 + iVar7;
        puVar2[1] = cVar15;
        if (uVar17 >> 0x16 == 0) {
          cVar15 = (char)(uVar17 >> 0xe);
        }
        else {
          cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        uVar17 = uVar16 * 0x811a + -0x451550 + iVar7;
        puVar2[2] = cVar15;
        if (uVar17 >> 0x16 == 0) {
          cVar15 = (char)(uVar17 >> 0xe);
        }
        else {
          cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
        }
        puVar2[3] = cVar15;
      }
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 8;
      uVar16 = uVar3;
      uVar17 = uVar4;
      pbVar12 = pbVar12 + 2;
      pbVar13 = pbVar13 + 2;
    } while (lVar18 < (int)uVar14 >> 1);
  }
  if (((long)param_9 & 1U) == 0) {
    uVar17 = uVar4 + 0x20002 + uVar3 * 3;
    iVar7 = (uint)param_1[uVar14] * 0x4a85;
    uVar9 = uVar17 >> 0x12 & 0xff;
    param_7 = param_7 + (long)(int)uVar14 * 4;
    *param_7 = 0xff;
    uVar16 = uVar9 * 0x6625 + -0x379ad0 + iVar7;
    uVar17 = uVar17 >> 2 & 0xff;
    if (uVar16 >> 0x16 == 0) {
      cVar15 = (char)(uVar16 >> 0xe);
    }
    else {
      cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar16 = uVar17 * -0x1913 + 0x220530 + uVar9 * -0x3408 + iVar7;
    param_7[1] = cVar15;
    if (uVar16 >> 0x16 == 0) {
      cVar15 = (char)(uVar16 >> 0xe);
    }
    else {
      cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
    }
    uVar17 = uVar17 * 0x811a + -0x451550 + iVar7;
    param_7[2] = cVar15;
    if (uVar17 >> 0x16 == 0) {
      cVar15 = (char)(uVar17 >> 0xe);
    }
    else {
      cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
    }
    param_7[3] = cVar15;
    if (param_2 != (byte *)0x0) {
      uVar17 = uVar3 + 0x20002 + uVar4 * 3;
      bVar5 = param_2[uVar14];
      param_8 = param_8 + (-(uVar14 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar14 & 0xffffffff) << 2);
      *param_8 = 0xff;
      uVar3 = uVar17 >> 0x12 & 0xff;
      iVar7 = (uint)bVar5 * 0x4a85;
      uVar16 = uVar3 * 0x6625 + -0x379ad0 + iVar7;
      uVar17 = uVar17 >> 2 & 0xff;
      if (uVar16 >> 0x16 == 0) {
        cVar15 = (char)(uVar16 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
      }
      uVar16 = uVar17 * -0x1913 + 0x220530 + uVar3 * -0x3408 + iVar7;
      param_8[1] = cVar15;
      if (uVar16 >> 0x16 == 0) {
        cVar15 = (char)(uVar16 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar16 >> 0x1f) & 1) - 1;
      }
      uVar17 = uVar17 * 0x811a + -0x451550 + iVar7;
      param_8[2] = cVar15;
      if (uVar17 >> 0x16 == 0) {
        cVar15 = (char)(uVar17 >> 0xe);
      }
      else {
        cVar15 = ((byte)((int)uVar17 >> 0x1f) & 1) - 1;
      }
      param_8[3] = cVar15;
    }
  }
  return;
}

