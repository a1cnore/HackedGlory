// functions/019b6 — 20 functions
#include "libGameKindred.h"




void FUN_019b60fc(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  char cVar13;
  
  iVar3 = (param_5 & 0x3ffffffe) << 2;
  if ((param_5 & 0x3ffffffe) != 0) {
    uVar9 = (long)iVar3 - 8;
    lVar1 = (uVar9 >> 3) + 1;
    pbVar2 = param_2 + lVar1;
    pbVar10 = param_1;
    puVar11 = param_4;
    pbVar12 = param_3;
    do {
      bVar4 = *pbVar10;
      bVar5 = *pbVar12;
      bVar6 = *param_2;
      *puVar11 = 0xff;
      iVar8 = (uint)bVar4 * 0x4a85;
      uVar7 = iVar8 + -0x379ad0 + (uint)bVar5 * 0x6625;
      if (uVar7 >> 0x16 == 0) {
        cVar13 = (char)(uVar7 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      uVar7 = iVar8 + 0x220530 + (uint)bVar6 * -0x1913 + (uint)bVar5 * -0x3408;
      puVar11[1] = cVar13;
      if (uVar7 >> 0x16 == 0) {
        cVar13 = (char)(uVar7 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      uVar7 = iVar8 + -0x451550 + (uint)bVar6 * 0x811a;
      puVar11[2] = cVar13;
      if (uVar7 >> 0x16 == 0) {
        cVar13 = (char)(uVar7 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      puVar11[3] = cVar13;
      bVar4 = pbVar10[1];
      bVar5 = *pbVar12;
      bVar6 = *param_2;
      puVar11[4] = 0xff;
      iVar8 = (uint)bVar4 * 0x4a85;
      uVar7 = iVar8 + -0x379ad0 + (uint)bVar5 * 0x6625;
      if (uVar7 >> 0x16 == 0) {
        cVar13 = (char)(uVar7 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      uVar7 = iVar8 + 0x220530 + (uint)bVar6 * -0x1913 + (uint)bVar5 * -0x3408;
      puVar11[5] = cVar13;
      if (uVar7 >> 0x16 == 0) {
        cVar13 = (char)(uVar7 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      uVar7 = iVar8 + -0x451550 + (uint)bVar6 * 0x811a;
      puVar11[6] = cVar13;
      if (uVar7 >> 0x16 == 0) {
        cVar13 = (char)(uVar7 >> 0xe);
      }
      else {
        cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
      }
      puVar11[7] = cVar13;
      puVar11 = puVar11 + 8;
      param_2 = param_2 + 1;
      pbVar12 = pbVar12 + 1;
      pbVar10 = pbVar10 + 2;
    } while (puVar11 != param_4 + iVar3);
    param_1 = param_1 + (uVar9 >> 2) + 2;
    param_3 = param_3 + lVar1;
    param_4 = param_4 + iVar3;
    param_2 = pbVar2;
  }
  if ((param_5 & 1) != 0) {
    bVar4 = *param_3;
    bVar5 = *param_2;
    iVar3 = (uint)*param_1 * 0x4a85;
    uVar7 = iVar3 + -0x379ad0 + (uint)bVar4 * 0x6625;
    *param_4 = 0xff;
    if (uVar7 >> 0x16 == 0) {
      cVar13 = (char)(uVar7 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
    }
    uVar7 = iVar3 + 0x220530 + (uint)bVar5 * -0x1913 + (uint)bVar4 * -0x3408;
    param_4[1] = cVar13;
    if (uVar7 >> 0x16 == 0) {
      cVar13 = (char)(uVar7 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
    }
    uVar7 = iVar3 + -0x451550 + (uint)bVar5 * 0x811a;
    param_4[2] = cVar13;
    if (uVar7 >> 0x16 == 0) {
      cVar13 = (char)(uVar7 >> 0xe);
    }
    else {
      cVar13 = ((byte)((int)uVar7 >> 0x1f) & 1) - 1;
    }
    param_4[3] = cVar13;
    return;
  }
  return;
}




void FUN_019b6384(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  
  iVar3 = (param_5 & 0x7ffffffe) << 1;
  if ((param_5 & 0x7ffffffe) != 0) {
    uVar7 = (long)iVar3 - 4;
    lVar1 = (uVar7 >> 2) + 1;
    pbVar2 = param_2 + lVar1;
    pbVar6 = param_1;
    pbVar8 = param_4;
    pbVar9 = param_3;
    do {
      iVar5 = (uint)*pbVar6 * 0x4a85;
      uVar12 = iVar5 + -0x379ad0 + (uint)*pbVar9 * 0x6625;
      if (uVar12 >> 0x16 == 0) {
        bVar10 = (byte)(uVar12 >> 0xe);
      }
      else {
        bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
      }
      uVar12 = iVar5 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)*pbVar9 * -0x3408;
      if (uVar12 >> 0x16 == 0) {
        uVar12 = uVar12 >> 0xe;
      }
      else {
        uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar4 = iVar5 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar4 >> 0x16 == 0) {
        bVar11 = (byte)(uVar4 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
      }
      *pbVar8 = bVar11 | 0xf;
      pbVar8[1] = bVar10 & 0xf0 | (byte)(uVar12 >> 4);
      iVar5 = (uint)pbVar6[1] * 0x4a85;
      uVar12 = iVar5 + -0x379ad0 + (uint)*pbVar9 * 0x6625;
      if (uVar12 >> 0x16 == 0) {
        bVar10 = (byte)(uVar12 >> 0xe);
      }
      else {
        bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
      }
      uVar12 = iVar5 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)*pbVar9 * -0x3408;
      if (uVar12 >> 0x16 == 0) {
        uVar12 = uVar12 >> 0xe;
      }
      else {
        uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar4 = iVar5 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar4 >> 0x16 == 0) {
        bVar11 = (byte)(uVar4 >> 0xe);
      }
      else {
        bVar11 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
      }
      pbVar8[2] = bVar11 | 0xf;
      pbVar8[3] = bVar10 & 0xf0 | (byte)(uVar12 >> 4);
      pbVar8 = pbVar8 + 4;
      param_2 = param_2 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar6 = pbVar6 + 2;
    } while (pbVar8 != param_4 + iVar3);
    param_1 = param_1 + (uVar7 >> 1) + 2;
    param_3 = param_3 + lVar1;
    param_4 = param_4 + iVar3;
    param_2 = pbVar2;
  }
  if ((param_5 & 1) != 0) {
    iVar3 = (uint)*param_1 * 0x4a85;
    uVar12 = iVar3 + -0x379ad0 + (uint)*param_3 * 0x6625;
    if (uVar12 >> 0x16 == 0) {
      bVar10 = (byte)(uVar12 >> 0xe);
    }
    else {
      bVar10 = ((byte)((int)uVar12 >> 0x1f) & 1) - 1;
    }
    uVar12 = iVar3 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408;
    if (uVar12 >> 0x16 == 0) {
      uVar12 = uVar12 >> 0xe;
    }
    else {
      uVar12 = ((int)uVar12 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar4 = iVar3 + -0x451550 + (uint)*param_2 * 0x811a;
    if (uVar4 >> 0x16 == 0) {
      bVar11 = (byte)(uVar4 >> 0xe);
    }
    else {
      bVar11 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
    }
    *param_4 = bVar11 | 0xf;
    param_4[1] = bVar10 & 0xf0 | (byte)(uVar12 >> 4);
    return;
  }
  return;
}




void FUN_019b6610(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  iVar3 = (param_5 & 0x7ffffffe) << 1;
  if ((param_5 & 0x7ffffffe) != 0) {
    uVar6 = (long)iVar3 - 4;
    lVar1 = (uVar6 >> 2) + 1;
    pbVar2 = param_2 + lVar1;
    pbVar5 = param_1;
    pbVar7 = param_4;
    pbVar8 = param_3;
    do {
      iVar4 = (uint)*pbVar5 * 0x4a85;
      uVar11 = iVar4 + -0x379ad0 + (uint)*pbVar8 * 0x6625;
      if (uVar11 >> 0x16 == 0) {
        bVar9 = (byte)(uVar11 >> 0xe);
      }
      else {
        bVar9 = ((byte)((int)uVar11 >> 0x1f) & 1) - 1;
      }
      uVar11 = iVar4 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)*pbVar8 * -0x3408;
      if (uVar11 >> 0x16 == 0) {
        uVar11 = uVar11 >> 0xe;
      }
      else {
        uVar11 = ((int)uVar11 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar10 = iVar4 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar10 >> 0x16 == 0) {
        uVar10 = uVar10 >> 0xe;
      }
      else {
        uVar10 = ((int)uVar10 >> 0x1f & 0xffffff01U) + 0xff;
      }
      *pbVar7 = (byte)((uVar11 & 0x1c) << 3) | (byte)(uVar10 >> 3);
      pbVar7[1] = bVar9 & 0xf8 | (byte)(uVar11 >> 5);
      iVar4 = (uint)pbVar5[1] * 0x4a85;
      uVar11 = iVar4 + -0x379ad0 + (uint)*pbVar8 * 0x6625;
      if (uVar11 >> 0x16 == 0) {
        bVar9 = (byte)(uVar11 >> 0xe);
      }
      else {
        bVar9 = ((byte)((int)uVar11 >> 0x1f) & 1) - 1;
      }
      uVar11 = iVar4 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)*pbVar8 * -0x3408;
      if (uVar11 >> 0x16 == 0) {
        uVar11 = uVar11 >> 0xe;
      }
      else {
        uVar11 = ((int)uVar11 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar10 = iVar4 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar10 >> 0x16 == 0) {
        uVar10 = uVar10 >> 0xe;
      }
      else {
        uVar10 = ((int)uVar10 >> 0x1f & 0xffffff01U) + 0xff;
      }
      pbVar7[3] = bVar9 & 0xf8 | (byte)(uVar11 >> 5);
      pbVar7[2] = (byte)((uVar11 & 0x1c) << 3) | (byte)(uVar10 >> 3);
      pbVar7 = pbVar7 + 4;
      param_2 = param_2 + 1;
      pbVar8 = pbVar8 + 1;
      pbVar5 = pbVar5 + 2;
    } while (pbVar7 != param_4 + iVar3);
    param_1 = param_1 + (uVar6 >> 1) + 2;
    param_3 = param_3 + lVar1;
    param_4 = param_4 + iVar3;
    param_2 = pbVar2;
  }
  if ((param_5 & 1) != 0) {
    iVar3 = (uint)*param_1 * 0x4a85;
    uVar11 = iVar3 + -0x379ad0 + (uint)*param_3 * 0x6625;
    if (uVar11 >> 0x16 == 0) {
      bVar9 = (byte)(uVar11 >> 0xe);
    }
    else {
      bVar9 = ((byte)((int)uVar11 >> 0x1f) & 1) - 1;
    }
    uVar11 = iVar3 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)*param_3 * -0x3408;
    if (uVar11 >> 0x16 == 0) {
      uVar11 = uVar11 >> 0xe;
    }
    else {
      uVar11 = ((int)uVar11 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar10 = iVar3 + -0x451550 + (uint)*param_2 * 0x811a;
    if (uVar10 >> 0x16 == 0) {
      uVar10 = uVar10 >> 0xe;
    }
    else {
      uVar10 = ((int)uVar10 >> 0x1f & 0xffffff01U) + 0xff;
    }
    *param_4 = (byte)((uVar11 & 0x1c) << 3) | (byte)(uVar10 >> 3);
    param_4[1] = bVar9 & 0xf8 | (byte)(uVar11 >> 5);
    return;
  }
  return;
}




void FUN_019b68b4(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  *(uint **)(param_1 + 4) = param_2;
  *(uint **)(param_1 + 6) = param_3;
  param_1[2] = 0xfffffff8;
  param_1[0] = 0;
  param_1[1] = 0xfe;
  param_1[8] = 0;
  if (param_3 < param_2 + 1) {
    FUN_019b6920();
    return;
  }
  uVar1 = *param_2;
  param_1[2] = 0x10;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *(long *)(param_1 + 4) = (long)param_2 + 3;
  *param_1 = (uVar1 >> 0x10 | uVar1 << 0x10) >> 8;
  return;
}




void FUN_019b6900(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
  }
  return;
}




void FUN_019b6920(uint *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 4);
  if (pbVar1 < *(byte **)(param_1 + 6)) {
    *(byte **)(param_1 + 4) = pbVar1 + 1;
    param_1[2] = param_1[2] + 8;
    *param_1 = (uint)*pbVar1 | *param_1 << 8;
    return;
  }
  if (param_1[8] != 0) {
    return;
  }
  param_1[8] = 1;
  *param_1 = *param_1 << 8;
  param_1[2] = param_1[2] + 8;
  return;
}




uint FUN_019b6984(uint *param_1,int param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  if (0 < param_2) {
    uVar8 = param_1[1];
    uVar6 = param_1[2];
    param_2 = param_2 + 1;
    do {
      if ((int)uVar6 < 0) {
        puVar2 = *(uint **)(param_1 + 4);
        if (*(uint **)(param_1 + 6) < puVar2 + 1) {
          FUN_019b6920(param_1);
          uVar6 = param_1[2];
        }
        else {
          uVar3 = *puVar2;
          uVar6 = uVar6 + 0x18;
          param_1[2] = uVar6;
          *(long *)(param_1 + 4) = (long)puVar2 + 3;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          *param_1 = (uint)(CONCAT44(*param_1,uVar3 >> 0x10 | uVar3 << 0x10) >> 8);
        }
      }
      uVar5 = uVar8 >> 1 & 0xffffff;
      uVar3 = *param_1 >> (ulong)(uVar6 & 0x1f);
      uVar4 = uVar5;
      if (uVar5 < uVar3) {
        *param_1 = *param_1 - (uVar5 + 1 << (ulong)(uVar6 & 0x1f));
        uVar4 = uVar8 - (uVar5 + 1);
      }
      uVar8 = uVar4;
      uVar4 = param_2 - 2;
      if (uVar8 < 0x7f) {
        uVar1 = (ulong)uVar8;
        uVar8 = *(uint *)(&DAT_01e1e558 + (ulong)uVar8 * 4);
        uVar6 = uVar6 - (byte)(&DAT_01e1e4d8)[uVar1];
        param_1[2] = uVar6;
      }
      param_2 = param_2 + -1;
      uVar7 = (uint)(uVar5 < uVar3) << (ulong)(uVar4 & 0x1f) | uVar7;
      param_1[1] = uVar8;
    } while (1 < param_2);
  }
  return uVar7;
}




int FUN_019b6a88(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_019b6984();
  iVar3 = FUN_019b6984(param_1,1);
  iVar1 = -iVar2;
  if (iVar3 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}




void FUN_019b6ac0(ulong *param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_3;
  if (7 < param_3) {
    uVar2 = 8;
  }
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    do {
      pbVar1 = (byte *)(param_2 + uVar5);
      uVar5 = uVar5 + 1;
      uVar3 = (ulong)*pbVar1 << (uVar4 & 0x3f) | uVar3;
      uVar4 = uVar4 + 8;
    } while (uVar5 < uVar2);
  }
  param_1[3] = uVar2;
  *param_1 = uVar3;
  param_1[1] = param_2;
  return;
}




void FUN_019b6b1c(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = param_2;
  *(ulong *)(param_1 + 0x10) = param_3;
  *(uint *)(param_1 + 0x28) = (uint)(param_3 <= uVar2 && uVar2 != param_3);
  if (param_3 > uVar2 || uVar2 == param_3) {
    uVar1 = 0;
    if (uVar2 == param_3) {
      uVar1 = (uint)(0x40 < *(int *)(param_1 + 0x20));
    }
  }
  else {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  return;
}




void FUN_019b6b5c(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[3];
  if (uVar1 + 8 < param_1[2]) {
    *(int *)(param_1 + 4) = (int)param_1[4] + -0x20;
    uVar2 = *(uint *)(param_1[1] + uVar1);
    param_1[3] = uVar1 + 4;
    *param_1 = *param_1 >> 0x20 | (ulong)uVar2 << 0x20;
    return;
  }
  FUN_019b6b98();
  return;
}




void FUN_019b6b98(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar5 = (int)param_1[4];
  if (iVar5 < 8) {
    uVar6 = param_1[2];
    uVar7 = param_1[3];
  }
  else {
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    iVar4 = iVar5;
    do {
      iVar5 = iVar4;
      if (uVar6 <= uVar7) break;
      uVar2 = *param_1;
      iVar5 = iVar4 + -8;
      *param_1 = uVar2 >> 8;
      bVar3 = *(byte *)(param_1[1] + uVar7);
      uVar7 = uVar7 + 1;
      param_1[3] = uVar7;
      *(int *)(param_1 + 4) = iVar5;
      *param_1 = uVar2 >> 8 | (ulong)bVar3 << 0x38;
      bVar1 = 0xf < iVar4;
      iVar4 = iVar5;
    } while (bVar1);
  }
  *(uint *)((long)param_1 + 0x24) = (uint)(0x40 < iVar5 && uVar7 == uVar6);
  return;
}




uint FUN_019b6c0c(ulong *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 < 0x19) && (*(int *)((long)param_1 + 0x24) == 0)) {
    uVar1 = *(uint *)(&DAT_01e1e758 + (long)param_2 * 4) &
            (uint)(*param_1 >> ((ulong)(uint)param_1[4] & 0x3f));
    *(uint *)(param_1 + 4) = (uint)param_1[4] + param_2;
    FUN_019b6b98();
  }
  else {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 5) = 1;
  }
  return uVar1;
}




bool FUN_019b6c70(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_019a2d64((long)(1 << (ulong)(param_2 & 0x1f)),4);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(uint *)(param_1 + 1) = 0x20 - param_2;
  }
  return lVar1 != 0;
}




void FUN_019b6cbc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_019b6ce8(long param_1)

{
  if (param_1 != 0) {
    free(*(void **)(param_1 + 0x280));
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
  }
  return;
}




void FUN_019b6d18(int param_1)

{
  FUN_019a2d64((long)param_1,0xcd0);
  return;
}




void FUN_019b6d24(void *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1 != (void *)0x0) {
    if (0 < (int)param_2) {
      uVar2 = 0;
      pvVar3 = param_1;
      do {
        lVar4 = 0x280;
        do {
          puVar1 = (undefined8 *)((long)pvVar3 + lVar4);
          free((void *)*puVar1);
          lVar4 = lVar4 + 0x290;
          *puVar1 = 0;
          puVar1[1] = 0;
        } while (lVar4 != 0xf50);
        uVar2 = uVar2 + 1;
        pvVar3 = (void *)((long)pvVar3 + 0xcd0);
      } while (uVar2 != param_2);
    }
    free(param_1);
    return;
  }
  return;
}




undefined8 FUN_019b6db0(int *param_1,uint param_2,int *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int local_98 [16];
  ulong local_58 [9];
  
  lVar1 = tpidr_el0;
  local_58[8] = *(long *)(lVar1 + 0x28);
  local_58[7] = 0;
  local_58[6] = 0;
  local_58[5] = 0;
  local_58[4] = 0;
  local_58[3] = 0;
  local_58[2] = 0;
  local_58[1] = 0;
  local_58[0] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  if ((int)param_2 < 1) {
    local_58[0] = 0;
    local_98[0] = -1;
    local_98[1] = 0;
  }
  else {
    uVar4 = (ulong)param_2;
    uVar2 = uVar4;
    piVar8 = param_1;
    iVar5 = 0;
    do {
      iVar6 = *piVar8;
      if (*piVar8 <= iVar5) {
        iVar6 = iVar5;
      }
      uVar2 = uVar2 - 1;
      piVar8 = piVar8 + 1;
      iVar5 = iVar6;
    } while (uVar2 != 0);
    uVar3 = 0;
    if (0xf < iVar6) goto LAB_019b6ef0;
    uVar2 = uVar4;
    piVar8 = param_1;
    if (0 < (int)param_2) {
      do {
        uVar2 = uVar2 - 1;
        *(int *)((long)local_58 + (long)*piVar8 * 4) =
             *(int *)((long)local_58 + (long)*piVar8 * 4) + 1;
        piVar8 = piVar8 + 1;
      } while (uVar2 != 0);
    }
    local_58[0] = local_58[0] & 0xffffffff00000000;
    local_98[0] = -1;
    local_98[1] = 0;
    if (0 < iVar6) {
      local_98[0] = -1;
      local_98[1] = 0;
      if (iVar6 + 1U != 2) {
        iVar5 = 0;
        lVar7 = (ulong)(iVar6 + 1U) - 2;
        piVar8 = (int *)((ulong)local_58 | 4);
        piVar9 = local_98 + 2;
        do {
          lVar7 = lVar7 + -1;
          iVar5 = (*piVar8 + iVar5) * 2;
          *piVar9 = iVar5;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    local_98[0] = -1;
    local_98[1] = 0;
    if (0 < (int)param_2) {
      do {
        iVar5 = *param_1;
        if (iVar5 < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = local_98[iVar5];
          local_98[iVar5] = iVar6 + 1;
        }
        *param_3 = iVar6;
        uVar4 = uVar4 - 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
      } while (uVar4 != 0);
    }
  }
  uVar3 = 1;
LAB_019b6ef0:
  if (*(long *)(lVar1 + 0x28) == local_58[8]) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_019b6f14(void *param_1,long param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  undefined2 uVar8;
  int iVar9;
  
  uVar7 = (ulong)param_4;
  if ((int)param_4 < 1) {
    iVar2 = 0;
    iVar9 = 0;
  }
  else {
    uVar4 = 0;
    iVar9 = 0;
    iVar2 = 0;
    do {
      if (0 < *(int *)(param_2 + uVar4 * 4)) {
        iVar2 = iVar2 + 1;
        iVar9 = (int)uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
  }
  uVar3 = FUN_019b7098(param_1,iVar2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (iVar2 == 1) {
    if ((-1 < iVar9) && (iVar9 < (int)param_4)) {
      piVar6 = *(int **)((long)param_1 + 0x280);
      memset(param_1,0,0x80);
      lVar5 = 0;
      uVar8 = (undefined2)iVar9;
      do {
        puVar1 = (undefined8 *)((long)param_1 + lVar5 + 0x80);
        puVar1[1] = CONCAT26(uVar8,CONCAT24(uVar8,CONCAT22(uVar8,uVar8)));
        *puVar1 = CONCAT26(uVar8,CONCAT24(uVar8,CONCAT22(uVar8,uVar8)));
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != 0x100);
      if (piVar6[1] < 0) {
        piVar6[1] = 0;
      }
      else if (piVar6[1] != 0) {
        return 0;
      }
      *piVar6 = iVar9;
      return 1;
    }
  }
  else {
    memset(param_3,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
    iVar2 = FUN_019b6db0(param_2,uVar7,param_3);
    if (iVar2 != 0) {
      if (0 < (int)param_4) {
        uVar7 = 0;
        do {
          if ((0 < *(int *)(param_2 + uVar7 * 4)) &&
             (iVar2 = FUN_019b7114(param_1,uVar7 & 0xffffffff,
                                   *(undefined4 *)((long)param_3 + uVar7 * 4)), iVar2 == 0))
          goto LAB_019b7054;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)param_4);
      }
      if (*(int *)((long)param_1 + 0x28c) == *(int *)((long)param_1 + 0x288)) {
        return 1;
      }
      goto LAB_019b7058;
    }
  }
LAB_019b7054:
  if (param_1 == (void *)0x0) {
    return 0;
  }
LAB_019b7058:
  free(*(void **)((long)param_1 + 0x280));
  *(undefined8 *)((long)param_1 + 0x288) = 0;
  *(undefined8 *)((long)param_1 + 0x280) = 0;
  return 0;
}

