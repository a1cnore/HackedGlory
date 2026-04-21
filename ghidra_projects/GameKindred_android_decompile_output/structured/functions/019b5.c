// functions/019b5 — 7 functions
#include "libGameKindred.h"




void FUN_019b5650(void)

{
  return;
}




void FUN_019b5654(long param_1,int param_2,long param_3,long param_4,int param_5,long param_6,
                 int param_7,undefined4 param_8,uint param_9,code *param_10)

{
  uint uVar1;
  uint uVar2;
  
  if (0 < (int)param_9) {
    uVar2 = 0;
    do {
      (*param_10)(param_1,param_3,param_4,param_6,param_8);
      uVar1 = uVar2 & 1;
      uVar2 = uVar2 + 1;
      param_1 = param_1 + param_2;
      if (uVar1 != 0) {
        param_3 = param_3 + param_5;
        param_4 = param_4 + param_5;
      }
      param_6 = param_6 + param_7;
    } while (param_9 != uVar2);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019b5710(void)

{
  if (PTR_LOOP_02bf7470 != PTR_FUN_02bf7450) {
    pcRam000000000321a958 = FUN_019b59cc;
    _DAT_0321a950 = FUN_019b57ac;
    pcRam000000000321a968 = FUN_019b5e74;
    _DAT_0321a960 = FUN_019b5c54;
    pcRam000000000321a988 = FUN_019b59cc;
    _DAT_0321a980 = FUN_019b6610;
    pcRam000000000321a998 = FUN_019b60fc;
    _DAT_0321a990 = FUN_019b5e74;
    DAT_0321a9a0 = FUN_019b6384;
    pcRam000000000321a978 = FUN_019b6384;
    _DAT_0321a970 = FUN_019b60fc;
    PTR_LOOP_02bf7470 = PTR_FUN_02bf7450;
  }
  return;
}




void FUN_019b57ac(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  pcVar1 = param_4;
  if ((param_5 & 0xfffffffe) != 0) {
    pcVar1 = param_4 + (int)((param_5 & 0xfffffffe) * 3);
    do {
      bVar2 = *param_2;
      iVar4 = (uint)*param_1 * 0x4a85;
      uVar3 = iVar4 + -0x379ad0 + (uint)*param_3 * 0x6625;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + 0x220530 + (uint)bVar2 * -0x1913 + (uint)*param_3 * -0x3408;
      *param_4 = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + -0x451550 + (uint)bVar2 * 0x811a;
      param_4[1] = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      param_4[2] = cVar5;
      bVar2 = *param_2;
      iVar4 = (uint)param_1[1] * 0x4a85;
      uVar3 = iVar4 + -0x379ad0 + (uint)*param_3 * 0x6625;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + 0x220530 + (uint)bVar2 * -0x1913 + (uint)*param_3 * -0x3408;
      param_4[3] = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + -0x451550 + (uint)bVar2 * 0x811a;
      param_4[4] = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      param_4[5] = cVar5;
      param_4 = param_4 + 6;
      param_1 = param_1 + 2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != pcVar1);
  }
  if ((param_5 & 1) != 0) {
    bVar2 = *param_2;
    iVar4 = (uint)*param_1 * 0x4a85;
    uVar3 = iVar4 + -0x379ad0 + (uint)*param_3 * 0x6625;
    if (uVar3 >> 0x16 == 0) {
      cVar5 = (char)(uVar3 >> 0xe);
    }
    else {
      cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
    }
    uVar3 = iVar4 + 0x220530 + (uint)bVar2 * -0x1913 + (uint)*param_3 * -0x3408;
    *pcVar1 = cVar5;
    if (uVar3 >> 0x16 == 0) {
      cVar5 = (char)(uVar3 >> 0xe);
    }
    else {
      cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
    }
    uVar3 = iVar4 + -0x451550 + (uint)bVar2 * 0x811a;
    pcVar1[1] = cVar5;
    if (uVar3 >> 0x16 == 0) {
      cVar5 = (char)(uVar3 >> 0xe);
    }
    else {
      cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
    }
    pcVar1[2] = cVar5;
    return;
  }
  return;
}




void FUN_019b59cc(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  char cVar11;
  
  iVar3 = (param_5 & 0x3ffffffe) << 2;
  if ((param_5 & 0x3ffffffe) != 0) {
    uVar7 = (long)iVar3 - 8;
    lVar1 = (uVar7 >> 3) + 1;
    pbVar2 = param_2 + lVar1;
    pbVar8 = param_1;
    pcVar9 = param_4;
    pbVar10 = param_3;
    do {
      bVar4 = *param_2;
      iVar6 = (uint)*pbVar8 * 0x4a85;
      uVar5 = iVar6 + -0x379ad0 + (uint)*pbVar10 * 0x6625;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + 0x220530 + (uint)bVar4 * -0x1913 + (uint)*pbVar10 * -0x3408;
      *pcVar9 = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + -0x451550 + (uint)bVar4 * 0x811a;
      pcVar9[1] = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      pcVar9[2] = cVar11;
      pcVar9[3] = -1;
      bVar4 = *param_2;
      iVar6 = (uint)pbVar8[1] * 0x4a85;
      uVar5 = iVar6 + -0x379ad0 + (uint)*pbVar10 * 0x6625;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + 0x220530 + (uint)bVar4 * -0x1913 + (uint)*pbVar10 * -0x3408;
      pcVar9[4] = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + -0x451550 + (uint)bVar4 * 0x811a;
      pcVar9[5] = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      pcVar9[6] = cVar11;
      pcVar9[7] = -1;
      pcVar9 = pcVar9 + 8;
      param_2 = param_2 + 1;
      pbVar10 = pbVar10 + 1;
      pbVar8 = pbVar8 + 2;
    } while (pcVar9 != param_4 + iVar3);
    param_1 = param_1 + (uVar7 >> 2) + 2;
    param_3 = param_3 + lVar1;
    param_4 = param_4 + iVar3;
    param_2 = pbVar2;
  }
  if ((param_5 & 1) != 0) {
    bVar4 = *param_2;
    iVar3 = (uint)*param_1 * 0x4a85;
    uVar5 = iVar3 + -0x379ad0 + (uint)*param_3 * 0x6625;
    if (uVar5 >> 0x16 == 0) {
      cVar11 = (char)(uVar5 >> 0xe);
    }
    else {
      cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
    }
    uVar5 = iVar3 + 0x220530 + (uint)bVar4 * -0x1913 + (uint)*param_3 * -0x3408;
    *param_4 = cVar11;
    if (uVar5 >> 0x16 == 0) {
      cVar11 = (char)(uVar5 >> 0xe);
    }
    else {
      cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
    }
    uVar5 = iVar3 + -0x451550 + (uint)bVar4 * 0x811a;
    param_4[1] = cVar11;
    if (uVar5 >> 0x16 == 0) {
      cVar11 = (char)(uVar5 >> 0xe);
    }
    else {
      cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
    }
    param_4[2] = cVar11;
    param_4[3] = -1;
    return;
  }
  return;
}




void FUN_019b5c54(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  pcVar1 = param_4;
  if ((param_5 & 0xfffffffe) != 0) {
    pcVar1 = param_4 + (int)((param_5 & 0xfffffffe) * 3);
    do {
      bVar2 = *param_3;
      iVar4 = (uint)*param_1 * 0x4a85;
      uVar3 = iVar4 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)bVar2 * -0x3408;
      *param_4 = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + -0x379ad0 + (uint)bVar2 * 0x6625;
      param_4[1] = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      param_4[2] = cVar5;
      bVar2 = *param_3;
      iVar4 = (uint)param_1[1] * 0x4a85;
      uVar3 = iVar4 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)bVar2 * -0x3408;
      param_4[3] = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      uVar3 = iVar4 + -0x379ad0 + (uint)bVar2 * 0x6625;
      param_4[4] = cVar5;
      if (uVar3 >> 0x16 == 0) {
        cVar5 = (char)(uVar3 >> 0xe);
      }
      else {
        cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
      }
      param_4[5] = cVar5;
      param_4 = param_4 + 6;
      param_1 = param_1 + 2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != pcVar1);
  }
  if ((param_5 & 1) != 0) {
    bVar2 = *param_3;
    iVar4 = (uint)*param_1 * 0x4a85;
    uVar3 = iVar4 + -0x451550 + (uint)*param_2 * 0x811a;
    if (uVar3 >> 0x16 == 0) {
      cVar5 = (char)(uVar3 >> 0xe);
    }
    else {
      cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
    }
    uVar3 = iVar4 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)bVar2 * -0x3408;
    *pcVar1 = cVar5;
    if (uVar3 >> 0x16 == 0) {
      cVar5 = (char)(uVar3 >> 0xe);
    }
    else {
      cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
    }
    uVar3 = iVar4 + -0x379ad0 + (uint)bVar2 * 0x6625;
    pcVar1[1] = cVar5;
    if (uVar3 >> 0x16 == 0) {
      cVar5 = (char)(uVar3 >> 0xe);
    }
    else {
      cVar5 = ((byte)((int)uVar3 >> 0x1f) & 1) - 1;
    }
    pcVar1[2] = cVar5;
    return;
  }
  return;
}




void FUN_019b5e74(byte *param_1,byte *param_2,byte *param_3,char *param_4,uint param_5)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  char cVar11;
  
  iVar3 = (param_5 & 0x3ffffffe) << 2;
  if ((param_5 & 0x3ffffffe) != 0) {
    uVar7 = (long)iVar3 - 8;
    lVar1 = (uVar7 >> 3) + 1;
    pbVar2 = param_2 + lVar1;
    pbVar8 = param_1;
    pcVar9 = param_4;
    pbVar10 = param_3;
    do {
      bVar4 = *pbVar10;
      iVar6 = (uint)*pbVar8 * 0x4a85;
      uVar5 = iVar6 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)bVar4 * -0x3408;
      *pcVar9 = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + -0x379ad0 + (uint)bVar4 * 0x6625;
      pcVar9[1] = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      pcVar9[2] = cVar11;
      pcVar9[3] = -1;
      bVar4 = *pbVar10;
      iVar6 = (uint)pbVar8[1] * 0x4a85;
      uVar5 = iVar6 + -0x451550 + (uint)*param_2 * 0x811a;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)bVar4 * -0x3408;
      pcVar9[4] = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      uVar5 = iVar6 + -0x379ad0 + (uint)bVar4 * 0x6625;
      pcVar9[5] = cVar11;
      if (uVar5 >> 0x16 == 0) {
        cVar11 = (char)(uVar5 >> 0xe);
      }
      else {
        cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      pcVar9[6] = cVar11;
      pcVar9[7] = -1;
      pcVar9 = pcVar9 + 8;
      param_2 = param_2 + 1;
      pbVar10 = pbVar10 + 1;
      pbVar8 = pbVar8 + 2;
    } while (pcVar9 != param_4 + iVar3);
    param_1 = param_1 + (uVar7 >> 2) + 2;
    param_3 = param_3 + lVar1;
    param_4 = param_4 + iVar3;
    param_2 = pbVar2;
  }
  if ((param_5 & 1) != 0) {
    bVar4 = *param_3;
    iVar3 = (uint)*param_1 * 0x4a85;
    uVar5 = iVar3 + -0x451550 + (uint)*param_2 * 0x811a;
    if (uVar5 >> 0x16 == 0) {
      cVar11 = (char)(uVar5 >> 0xe);
    }
    else {
      cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
    }
    uVar5 = iVar3 + 0x220530 + (uint)*param_2 * -0x1913 + (uint)bVar4 * -0x3408;
    *param_4 = cVar11;
    if (uVar5 >> 0x16 == 0) {
      cVar11 = (char)(uVar5 >> 0xe);
    }
    else {
      cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
    }
    uVar5 = iVar3 + -0x379ad0 + (uint)bVar4 * 0x6625;
    param_4[1] = cVar11;
    if (uVar5 >> 0x16 == 0) {
      cVar11 = (char)(uVar5 >> 0xe);
    }
    else {
      cVar11 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
    }
    param_4[2] = cVar11;
    param_4[3] = -1;
    return;
  }
  return;
}

