// functions/01a96 — 3 functions
#include "libGameKindred.h"




undefined4 FUN_01a965dc(byte *param_1,ulong param_2,byte *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  
  pbVar3 = param_1;
  uVar4 = param_2;
  if ((param_5 >> 0xf & 1) != 0) {
    uVar7 = param_2;
    if (param_4 < param_2) {
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar3 == 0) break;
          uVar7 = uVar7 - 1;
          pbVar3 = pbVar3 + 1;
        } while (param_4 < uVar7);
      }
      else {
        do {
          if ((*pbVar3 == 0) || (*pbVar3 == 0x2e)) break;
          uVar7 = uVar7 - 1;
          pbVar3 = pbVar3 + 1;
        } while (param_4 < uVar7);
      }
    }
    uVar4 = param_4;
    if (uVar7 != param_4) {
      pbVar3 = param_1;
      uVar4 = param_2;
    }
  }
  uVar5 = 0;
  if (uVar4 == param_4) {
    for (; param_4 != 0; param_4 = param_4 - 1) {
      uVar6 = (uint)*pbVar3;
      if (uVar6 == 0) {
        return 0;
      }
      bVar2 = *param_3;
      if (uVar6 != bVar2) {
        uVar1 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar6 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar6 = (uint)bVar2;
        }
        if ((uVar1 & 0xff) != (uVar6 & 0xff)) {
          return 0;
        }
      }
      pbVar3 = pbVar3 + 1;
      param_3 = param_3 + 1;
    }
    uVar5 = 1;
  }
  return uVar5;
}




undefined8 FUN_01a966c0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  long lVar13;
  byte *pbVar14;
  
  if (param_4 < (byte *)0x2) {
    if (param_2 == (byte *)0x0) goto LAB_01a96988;
  }
  else if ((param_2 == (byte *)0x0) || (*param_3 == 0x2e)) goto LAB_01a96988;
  pbVar9 = (byte *)0x0;
  iVar5 = 0;
  pbVar14 = (byte *)0x0;
  bVar12 = 1;
  bVar2 = false;
  pbVar11 = param_2;
  do {
    pbVar10 = param_1 + (long)pbVar14;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      if (param_2 + -1 == pbVar14) {
        bVar3 = true;
      }
      else {
        bVar3 = param_1[(long)(pbVar14 + 1)] == 0x2e;
      }
      if ((pbVar9 != (byte *)0x0) || (bVar2 || iVar5 != 0)) goto LAB_01a96988;
      if (((bVar12 & 1 | bVar3) != 1) || ((param_5 & 4) != 0 && (bVar12 & 1 & bVar3) == 0))
      goto LAB_01a96988;
      bVar12 = bVar12 & 0xfe;
      pbVar9 = pbVar10;
    }
    else if ((bVar1 - 0x30 < 10) || ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) {
      bVar3 = bVar2;
      if (((bVar12 & 1) != 0) && ((byte *)0x3 < pbVar11)) {
        iVar4 = strncasecmp((char *)pbVar10,"xn--",4);
        bVar3 = true;
        if (iVar4 != 0) {
          bVar3 = bVar2;
        }
      }
      bVar12 = 0;
      bVar2 = bVar3;
    }
    else if (bVar1 == 0x2d) {
      if ((bVar12 & 1) != 0) goto LAB_01a96988;
      bVar12 = bVar12 | 4;
    }
    else {
      if ((bVar1 != 0x2e) || (bVar12 != 0)) goto LAB_01a96988;
      iVar5 = iVar5 + 1;
      bVar12 = 1;
      bVar2 = false;
    }
    pbVar11 = pbVar11 + -1;
    pbVar14 = pbVar14 + 1;
  } while (pbVar14 < param_2);
  if (((bVar12 == 0) && (1 < iVar5)) && (pbVar9 != (byte *)0x0)) {
    param_2 = param_1 + (long)param_2;
    lVar13 = (long)pbVar9 - (long)param_1;
    pbVar14 = param_2 + (-1 - (long)pbVar9);
    if (param_4 < pbVar14 + lVar13) {
      return 0;
    }
    if (lVar13 != 0) {
      lVar8 = (long)param_1 - (long)pbVar9;
      pbVar10 = param_3;
      pbVar11 = param_1;
      do {
        bVar12 = *pbVar11;
        if (bVar12 == 0) {
          return 0;
        }
        bVar1 = *pbVar10;
        if ((uint)bVar12 != (uint)bVar1) {
          uVar6 = (uint)bVar12;
          uVar7 = uVar6 + 0x20;
          if (0x19 < uVar6 - 0x41) {
            uVar7 = uVar6;
          }
          uVar6 = bVar1 + 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar6 = (uint)bVar1;
          }
          if ((uVar7 & 0xff) != (uVar6 & 0xff)) {
            return 0;
          }
        }
        pbVar11 = pbVar11 + 1;
        lVar8 = lVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (lVar8 != 0);
    }
    if (pbVar14 != (byte *)0x0) {
      pbVar11 = pbVar9 + (1 - (long)param_2);
      pbVar10 = pbVar9 + 1;
      do {
        bVar12 = param_3[(long)(pbVar11 + (long)param_4)];
        if (bVar12 == 0) {
          return 0;
        }
        bVar1 = *pbVar10;
        if ((uint)bVar12 != (uint)bVar1) {
          uVar6 = (uint)bVar12;
          uVar7 = uVar6 + 0x20;
          if (0x19 < uVar6 - 0x41) {
            uVar7 = uVar6;
          }
          uVar6 = bVar1 + 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar6 = (uint)bVar1;
          }
          if ((uVar7 & 0xff) != (uVar6 & 0xff)) {
            return 0;
          }
        }
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar11 != (byte *)0x0);
    }
    lVar8 = (long)param_4 - (long)pbVar14;
    if ((lVar13 == 0) && (pbVar9[1] == 0x2e)) {
      if (lVar8 == 0) {
        return 0;
      }
      uVar7 = param_5 >> 3 & 1;
    }
    else {
      uVar7 = 0;
      if ((byte *)0x3 < param_4) {
        iVar5 = strncasecmp((char *)param_3,"xn--",4);
        uVar7 = 0;
        if (iVar5 == 0) {
          return 0;
        }
      }
    }
    pbVar14 = param_3 + lVar13;
    if (param_3 + lVar8 == pbVar14 + 1) {
      if (lVar8 == lVar13) {
        return 1;
      }
      if (*pbVar14 == 0x2a) {
        return 1;
      }
    }
    else if (lVar8 == lVar13) {
      return 1;
    }
    if (uVar7 == 0) {
      param_1 = param_1 + (long)(param_4 + (1 - (long)param_2));
      while( true ) {
        bVar12 = *pbVar14;
        if (((9 < bVar12 - 0x30) && (0x19 < (bVar12 - 0x41 & 0xff))) &&
           ((bVar12 != 0x2d && (0x19 < (byte)(bVar12 + 0x9f))))) break;
        pbVar14 = pbVar14 + 1;
        param_1 = param_1 + -1;
        if (param_1 == (byte *)0x0) {
          return 1;
        }
      }
    }
    else {
      param_1 = param_1 + (long)(param_4 + (1 - (long)param_2));
      while( true ) {
        bVar12 = *pbVar14;
        if (((1 < bVar12 - 0x2d) && (9 < (bVar12 - 0x30 & 0xff))) &&
           (0x19 < (byte)((bVar12 & 0xdf) + 0xbf))) break;
        pbVar14 = pbVar14 + 1;
        param_1 = param_1 + -1;
        if (param_1 == (byte *)0x0) {
          return 1;
        }
      }
    }
    return 0;
  }
LAB_01a96988:
  pbVar11 = param_2;
  pbVar14 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    pbVar9 = param_2;
    if (param_4 < param_2) {
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar14 == 0) break;
          pbVar9 = pbVar9 + -1;
          pbVar14 = pbVar14 + 1;
        } while (param_4 < pbVar9);
      }
      else {
        do {
          if ((*pbVar14 == 0) || (*pbVar14 == 0x2e)) break;
          pbVar9 = pbVar9 + -1;
          pbVar14 = pbVar14 + 1;
        } while (param_4 < pbVar9);
      }
    }
    pbVar11 = param_4;
    if (pbVar9 != param_4) {
      pbVar11 = param_2;
      pbVar14 = param_1;
    }
  }
  if (pbVar11 != param_4) {
    return 0;
  }
  while( true ) {
    if (param_4 == (byte *)0x0) {
      return 1;
    }
    bVar12 = *pbVar14;
    if (bVar12 == 0) break;
    bVar1 = *param_3;
    if ((uint)bVar12 != (uint)bVar1) {
      uVar6 = (uint)bVar12;
      uVar7 = uVar6 + 0x20;
      if (0x19 < uVar6 - 0x41) {
        uVar7 = uVar6;
      }
      uVar6 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar6 = (uint)bVar1;
      }
      if ((uVar7 & 0xff) != (uVar6 & 0xff)) {
        return 0;
      }
    }
    pbVar14 = pbVar14 + 1;
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  }
  return 0;
}




undefined8 FUN_01a96c4c(byte *param_1,int param_2,long param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  
  iVar4 = *(int *)(param_3 + 0x10);
  if (iVar4 == 0x10) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x14) == -1) {
      *(int *)(param_3 + 0x14) = iVar4;
    }
    else if (*(int *)(param_3 + 0x14) != iVar4) {
      return 0;
    }
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  else {
    if (param_2 < 5) {
      uVar5 = 0;
      puVar1 = (undefined1 *)(param_3 + iVar4);
      do {
        bVar2 = *param_1;
        if (bVar2 - 0x30 < 10) {
          iVar4 = -0x30;
        }
        else if (bVar2 - 0x41 < 6) {
          iVar4 = -0x37;
        }
        else {
          if (5 < bVar2 - 0x61) {
            return 0;
          }
          iVar4 = -0x57;
        }
        param_2 = param_2 + -1;
        uVar5 = iVar4 + (uint)bVar2 | uVar5 << 4;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      puVar1[1] = (char)uVar5;
      *puVar1 = (char)(uVar5 >> 8);
      iVar4 = *(int *)(param_3 + 0x10) + 2;
    }
    else {
      if (0xc < iVar4) {
        return 0;
      }
      if (param_1[param_2] != 0) {
        return 0;
      }
      iVar3 = sscanf((char *)param_1,"%d.%d.%d.%d",&uStack_24,&local_28,&uStack_2c,&local_30);
      if ((iVar3 != 4) || (0xff < (local_28 | uStack_24 | uStack_2c | local_30))) {
        return 0;
      }
      puVar1 = (undefined1 *)(param_3 + iVar4);
      *puVar1 = (char)uStack_24;
      puVar1[1] = (char)local_28;
      puVar1[2] = (char)uStack_2c;
      puVar1[3] = (char)local_30;
      iVar4 = *(int *)(param_3 + 0x10) + 4;
    }
    *(int *)(param_3 + 0x10) = iVar4;
  }
  return 1;
}

