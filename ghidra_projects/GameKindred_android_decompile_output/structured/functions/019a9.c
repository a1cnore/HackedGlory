// functions/019a9 — 22 functions
#include "libGameKindred.h"




void FUN_019a9248(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 < param_2) {
    FUN_019ae0ec(param_1 + 0xc0,iVar1,param_2,
                 *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x60) * (long)iVar1,
                 *(long *)(*(int **)(param_1 + 0x10) + 0xe) +
                 (long)**(int **)(param_1 + 0x10) * (long)iVar1);
  }
  *(int *)(param_1 + 0x70) = param_2;
  *(int *)(param_1 + 0x68) = param_2;
  return;
}




void FUN_019a92ac(long param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  
  __dest = *(void **)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0xb8);
  iVar1 = *(int *)(param_1 + 0x68);
  uVar3 = *(int *)(param_1 + 0x60) * param_2;
  memcpy(__dest,param_3,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
  if (0 < iVar2) {
    lVar5 = (long)iVar2 + 1;
    lVar4 = param_1 + (long)iVar2 * 0x18 + 0xa8;
    do {
      FUN_019ae1cc(lVar4,iVar1,iVar1 + param_2,param_3,__dest);
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + -0x18;
      param_3 = __dest;
    } while (1 < lVar5);
  }
  return;
}




void FUN_019a934c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  
  if (0 < (int)param_2) {
    uVar11 = (ulong)param_2;
    puVar12 = (undefined1 *)
              (*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x30) * (long)(int)param_3);
    puVar16 = param_1;
    do {
      uVar17 = *puVar16;
      uVar11 = uVar11 - 1;
      *puVar12 = (char)((uVar17 >> 0x10 & 0xff) * 0x41c7 + (uVar17 & 0xff) * 0x1914 +
                        (uVar17 >> 8 & 0xff) * 0x8123 + 0x108000 >> 0x10);
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    } while (uVar11 != 0);
  }
  lVar13 = (long)((ulong)param_3 << 0x20) >> 0x21;
  uVar11 = 0;
  lVar14 = *(long *)(param_4 + 0x18) + *(int *)(param_4 + 0x34) * lVar13;
  lVar13 = *(long *)(param_4 + 0x20) + *(int *)(param_4 + 0x38) * lVar13;
  if (1 < (int)param_2) {
    uVar11 = 0;
    puVar16 = param_1 + 1;
    uVar17 = 0xff;
    do {
      uVar6 = puVar16[-1];
      uVar7 = *puVar16;
      iVar2 = (uVar7 & 0xff) * 2 + (uVar6 & 0xff) * 2;
      iVar3 = (uVar7 >> 0xf & 0x1fe) + (uVar6 >> 0xf & 0x1fe);
      iVar4 = (uVar7 >> 7 & 0x1fe) + (uVar6 >> 7 & 0x1fe);
      iVar9 = iVar3 * -0x25f7 + iVar4 * -0x4a89 + iVar2 * 0x7080;
      uVar6 = iVar9 + 0x2020000 >> 0x12;
      uVar7 = 0;
      if (-0x2020001 < iVar9) {
        uVar7 = uVar17;
      }
      if (0xff < uVar6) {
        uVar6 = uVar7;
      }
      if ((param_3 & 1) == 0) {
        *(char *)(lVar14 + uVar11) = (char)uVar6;
        iVar2 = iVar3 * 0x7080 + iVar4 * -0x5e34 + iVar2 * -0x124c;
        uVar6 = iVar2 + 0x2020000 >> 0x12;
        uVar7 = 0;
        if (-0x2020001 < iVar2) {
          uVar7 = uVar17;
        }
        if (0xff < uVar6) {
          uVar6 = uVar7;
        }
        uVar10 = (undefined1)uVar6;
      }
      else {
        iVar2 = iVar3 * 0x7080 + iVar4 * -0x5e34 + iVar2 * -0x124c;
        *(char *)(lVar14 + uVar11) = (char)(uVar6 + *(byte *)(lVar14 + uVar11) + 1 >> 1);
        uVar6 = iVar2 + 0x2020000 >> 0x12;
        uVar7 = 0;
        if (-0x2020001 < iVar2) {
          uVar7 = uVar17;
        }
        if (0xff < uVar6) {
          uVar6 = uVar7;
        }
        uVar10 = (undefined1)(uVar6 + *(byte *)(lVar13 + uVar11) + 1 >> 1);
      }
      *(undefined1 *)(lVar13 + uVar11) = uVar10;
      uVar11 = uVar11 + 1;
      puVar16 = puVar16 + 2;
    } while (uVar11 < param_2 >> 1);
  }
  if ((param_2 & 1) != 0) {
    uVar8 = param_1[(uint)((int)uVar11 << 1)];
    uVar17 = uVar8 >> 0xe & 0x3fc;
    uVar6 = uVar8 >> 6 & 0x3fc;
    uVar8 = uVar8 & 0xff;
    iVar2 = uVar17 * -0x25f7 + uVar6 * -0x4a89 + uVar8 * 0x1c200;
    uVar15 = 0xff;
    uVar7 = iVar2 + 0x2020000 >> 0x12;
    uVar5 = 0;
    if (-0x2020001 < iVar2) {
      uVar5 = uVar15;
    }
    if (0xff < uVar7) {
      uVar7 = uVar5;
    }
    if ((param_3 & 1) == 0) {
      *(char *)(lVar14 + (uVar11 & 0xffffffff)) = (char)uVar7;
      iVar2 = uVar17 * 0x7080 + uVar6 * -0x5e34 + uVar8 * -0x4930;
      uVar17 = iVar2 + 0x2020000 >> 0x12;
      uVar6 = 0;
      if (-0x2020001 < iVar2) {
        uVar6 = uVar15;
      }
      if (0xff < uVar17) {
        uVar17 = uVar6;
      }
      uVar10 = (undefined1)uVar17;
    }
    else {
      iVar2 = uVar17 * 0x7080 + uVar6 * -0x5e34 + uVar8 * -0x4930;
      uVar17 = iVar2 + 0x2020000 >> 0x12;
      *(char *)(lVar14 + (uVar11 & 0xffffffff)) =
           (char)(uVar7 + *(byte *)(lVar14 + (uVar11 & 0xffffffff)) + 1 >> 1);
      uVar6 = 0;
      if (-0x2020001 < iVar2) {
        uVar6 = uVar15;
      }
      if (0xff < uVar17) {
        uVar17 = uVar6;
      }
      uVar10 = (undefined1)(uVar17 + *(byte *)(lVar13 + (uVar11 & 0xffffffff)) + 1 >> 1);
    }
    *(undefined1 *)(lVar13 + (uVar11 & 0xffffffff)) = uVar10;
  }
  if ((*(long *)(param_4 + 0x28) != 0) && (0 < (int)param_2)) {
    uVar11 = (ulong)param_2;
    puVar12 = (undefined1 *)
              (*(long *)(param_4 + 0x28) + (long)*(int *)(param_4 + 0x3c) * (long)(int)param_3);
    do {
      puVar1 = (undefined1 *)((long)param_1 + 3);
      uVar11 = uVar11 - 1;
      param_1 = param_1 + 1;
      *puVar12 = *puVar1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
  }
  return;
}




void FUN_019a9604(long param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  if (0 < param_4) {
    do {
      (*DAT_0321a730)(param_1,param_3,param_5);
      param_4 = param_4 + -1;
      param_1 = param_1 + param_2;
    } while (param_4 != 0);
  }
  return;
}




void FUN_019a966c(long param_1,int param_2,long param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7)

{
  if (0 < param_6) {
    do {
      (*DAT_0321a738)(param_1,param_3,param_5,param_7);
      param_1 = param_1 + param_2;
      param_6 = param_6 + -1;
      param_3 = param_3 + param_4;
    } while (param_6 != 0);
  }
  return;
}




void FUN_019a96ec(void)

{
  if (PTR_LOOP_02bf7448 != PTR_FUN_02bf7450) {
    DAT_0321a730 = FUN_019a9760;
    DAT_0321a738 = FUN_019a97f0;
    DAT_0321a748 = FUN_019a9858;
    DAT_0321a740 = FUN_019a9900;
    DAT_0321a750 = FUN_019a9998;
    PTR_LOOP_02bf7448 = PTR_FUN_02bf7450;
  }
  return;
}




void FUN_019a9760(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      uVar2 = uVar1 >> 0x18;
      if (uVar2 < 0xff) {
        uVar4 = 0;
        if (uVar2 != 0) {
          if (param_3 == 0) {
            uVar4 = uVar2 * 0x10101;
          }
          else {
            uVar4 = 0;
            if (uVar2 != 0) {
              uVar4 = 0xff000000 / uVar2;
            }
          }
          uVar4 = uVar1 & 0xff000000 | uVar4 * (uVar1 & 0xff) + 0x800000 >> 0x18 |
                  uVar4 * (uVar1 >> 8 & 0xff) + 0x800000 >> 0x10 & 0xff00 |
                  uVar4 * (uVar1 >> 0x10 & 0xff) + 0x800000 >> 8 & 0xff0000;
        }
        *param_1 = uVar4;
      }
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  return;
}




void FUN_019a97f0(byte *param_1,byte *param_2,uint param_3,int param_4)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      bVar1 = *param_2;
      if (bVar1 != 0xff) {
        if (bVar1 == 0) {
          *param_1 = 0;
        }
        else {
          uVar3 = (uint)bVar1;
          if (param_4 == 0) {
            uVar4 = uVar3 * 0x10101;
          }
          else {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = 0xff000000 / uVar3;
            }
          }
          *param_1 = (byte)(uVar4 * *param_1 + 0x800000 >> 0x18);
        }
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_019a9858(long param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (0 < param_4) {
    lVar3 = 0;
    if (param_2 == 0) {
      lVar3 = 3;
    }
    do {
      if (0 < (int)param_3) {
        lVar2 = param_1 + (ulong)(param_2 != 0);
        uVar6 = 2;
        uVar7 = (ulong)param_3;
        do {
          uVar8 = (ulong)(uVar6 - 2);
          uVar5 = (uint)*(byte *)(param_1 + lVar3 + uVar8);
          if (uVar5 != 0xff) {
            iVar4 = uVar5 * 0x8081;
            *(char *)(lVar2 + uVar8) = (char)(iVar4 * (uint)*(byte *)(lVar2 + uVar8) >> 0x17);
            *(char *)(lVar2 + (ulong)(uVar6 - 1)) =
                 (char)(iVar4 * (uint)*(byte *)(lVar2 + (ulong)(uVar6 - 1)) >> 0x17);
            *(char *)(lVar2 + (ulong)uVar6) =
                 (char)(iVar4 * (uint)*(byte *)(lVar2 + (ulong)uVar6) >> 0x17);
          }
          uVar7 = uVar7 - 1;
          uVar6 = uVar6 + 4;
        } while (uVar7 != 0);
      }
      param_1 = param_1 + param_5;
      bVar1 = 1 < param_4;
      param_4 = param_4 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_019a9900(long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (0 < param_3) {
    pbVar5 = (byte *)(param_1 + 1);
    do {
      pbVar6 = pbVar5;
      uVar7 = (ulong)param_2;
      if (0 < (int)param_2) {
        do {
          bVar3 = pbVar6[-1];
          bVar2 = *pbVar6;
          uVar7 = uVar7 - 1;
          iVar4 = (bVar3 & 0xf) * 0x1111;
          *pbVar6 = (byte)(iVar4 * (bVar2 & 0xf0 | (uint)(bVar2 >> 4)) >> 0x10) & 0xf0 |
                    (byte)(iVar4 * (bVar2 & 0xfffff00f | (bVar2 & 0xf) << 4) >> 0x14) & 0xf;
          pbVar6[-1] = (byte)(iVar4 * (bVar3 & 0xf0 | (uint)(bVar3 >> 4)) >> 0x10) & 0xf0 |
                       bVar3 & 0xf;
          pbVar6 = pbVar6 + 2;
        } while (uVar7 != 0);
      }
      pbVar5 = pbVar5 + param_4;
      bVar1 = 1 < param_3;
      param_3 = param_3 + -1;
    } while (bVar1);
  }
  return;
}




bool FUN_019a9998(long param_1,int param_2,uint param_3,int param_4,long param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_4 < 1) {
    bVar3 = 0xff;
  }
  else {
    iVar2 = 0;
    bVar3 = 0xff;
    do {
      if (0 < (int)param_3) {
        uVar4 = 0;
        uVar5 = 0;
        do {
          bVar1 = *(byte *)(param_1 + (uVar4 & 0xfffffffc));
          uVar4 = uVar4 + 4;
          *(byte *)(param_5 + uVar5) = bVar1;
          uVar5 = uVar5 + 1;
          bVar3 = bVar1 & bVar3;
        } while (param_3 != uVar5);
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
    } while (iVar2 != param_4);
  }
  return bVar3 == 0xff;
}




undefined8 FUN_019a9a10(void)

{
  return 1;
}




void FUN_019a9a18(long param_1)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  
  lVar2 = 0;
  uVar4 = 4;
  pbVar3 = (byte *)(param_1 + -1);
  do {
    pbVar1 = (byte *)(param_1 + -0x20 + lVar2);
    lVar2 = lVar2 + 1;
    uVar4 = uVar4 + *pbVar1 + (uint)*pbVar3;
    pbVar3 = pbVar3 + 0x20;
  } while (lVar2 != 4);
  lVar2 = 0;
  do {
    *(uint *)(param_1 + lVar2) = (uVar4 >> 3 & 0xff) * 0x1010101;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x80);
  return;
}




void FUN_019a9a68(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_1 + -0x21);
  iVar3 = 0;
  lVar4 = param_1 + -0x20;
  do {
    bVar2 = *(byte *)(param_1 + -1);
    lVar5 = 0;
    do {
      *(undefined *)(param_1 + lVar5) =
           (&DAT_01e1d261)[(ulong)*(byte *)(lVar4 + lVar5) + ((ulong)bVar2 - (ulong)bVar1)];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar3 != 4);
  return;
}




void FUN_019a9abc(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  
  bVar4 = *(byte *)(param_1 + -0x1f);
  bVar5 = *(byte *)(param_1 + -0x21);
  bVar6 = *(byte *)(param_1 + -0x1e);
  bVar7 = *(byte *)(param_1 + -0x20);
  bVar8 = *(byte *)(param_1 + -0x1d);
  bVar9 = *(byte *)(param_1 + -0x1c);
  iVar1 = bVar4 + 2;
  iVar2 = bVar6 + 2;
  lVar10 = 0;
  do {
    puVar3 = (undefined1 *)(param_1 + lVar10);
    lVar10 = lVar10 + 0x20;
    *puVar3 = (char)(iVar1 + (uint)bVar5 + (uint)bVar7 * 2 >> 2);
    puVar3[1] = (char)(iVar2 + (uint)bVar7 + (uint)bVar4 * 2 >> 2);
    puVar3[2] = (char)(iVar1 + (uint)bVar6 * 2 + (uint)bVar8 >> 2);
    puVar3[3] = (char)(iVar2 + (uint)bVar8 * 2 + (uint)bVar9 >> 2);
  } while (lVar10 != 0x80);
  return;
}




void FUN_019a9b34(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = *(byte *)((long)param_1 + 0x5f);
  iVar1 = *(byte *)((long)param_1 + 0x1f) + 2;
  iVar2 = *(byte *)((long)param_1 + 0x3f) + 2;
  *param_1 = (iVar1 + (uint)*(byte *)((long)param_1 + -0x21) +
              (uint)*(byte *)((long)param_1 + -1) * 2 >> 2) * 0x1010101;
  param_1[8] = (iVar2 + (uint)*(byte *)((long)param_1 + -1) +
                (uint)*(byte *)((long)param_1 + 0x1f) * 2 >> 2) * 0x1010101;
  param_1[0x10] = (iVar1 + (uint)*(byte *)((long)param_1 + 0x3f) * 2 + (uint)bVar3 >> 2) * 0x1010101
  ;
  param_1[0x18] = (iVar2 + (uint)bVar3 + (uint)bVar3 * 2 >> 2) * 0x1010101;
  return;
}




void FUN_019a9ba8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  
  bVar3 = param_1[-0x20];
  bVar4 = param_1[-0x1f];
  bVar5 = param_1[-0x21];
  iVar1 = (byte)param_1[-1] + 2;
  iVar2 = (byte)param_1[0x1f] + 2;
  param_1[0x60] = (char)(iVar2 + (uint)(byte)param_1[0x3f] * 2 + (uint)(byte)param_1[0x5f] >> 2);
  uVar6 = (undefined1)(iVar1 + (uint)(byte)param_1[0x1f] * 2 + (uint)(byte)param_1[0x3f] >> 2);
  param_1[0x61] = uVar6;
  param_1[0x40] = uVar6;
  uVar6 = (undefined1)(iVar2 + (uint)(byte)param_1[-1] * 2 + (uint)bVar5 >> 2);
  param_1[0x62] = uVar6;
  param_1[0x41] = uVar6;
  param_1[0x20] = uVar6;
  uVar6 = (undefined1)(iVar1 + (uint)bVar3 + (uint)bVar5 * 2 >> 2);
  param_1[99] = uVar6;
  param_1[0x42] = uVar6;
  param_1[0x21] = uVar6;
  *param_1 = uVar6;
  uVar6 = (undefined1)((uint)bVar5 + (uint)bVar4 + (uint)bVar3 * 2 + 2 >> 2);
  param_1[0x43] = uVar6;
  param_1[0x22] = uVar6;
  param_1[1] = uVar6;
  uVar6 = (undefined1)((uint)bVar3 + (uint)(byte)param_1[-0x1e] + (uint)bVar4 * 2 + 2 >> 2);
  param_1[0x23] = uVar6;
  param_1[2] = uVar6;
  param_1[3] = (char)((uint)bVar4 + (uint)(byte)param_1[-0x1d] + (uint)(byte)param_1[-0x1e] * 2 + 2
                     >> 2);
  return;
}




void FUN_019a9c78(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  
  bVar4 = param_1[-0x21];
  bVar5 = param_1[-0x20];
  bVar6 = param_1[-0x1f];
  bVar7 = param_1[-0x1e];
  iVar1 = (byte)param_1[-1] + 2;
  iVar2 = bVar4 + 2;
  iVar3 = bVar5 + 1;
  uVar9 = (uint)bVar6;
  uVar8 = (undefined1)(iVar3 + (uint)bVar4 >> 1);
  param_1[0x41] = uVar8;
  *param_1 = uVar8;
  uVar8 = (undefined1)(iVar3 + uVar9 >> 1);
  param_1[0x42] = uVar8;
  param_1[1] = uVar8;
  uVar8 = (undefined1)(uVar9 + bVar7 + 1 >> 1);
  param_1[0x43] = uVar8;
  param_1[2] = uVar8;
  param_1[3] = (char)((uint)bVar7 + (uint)(byte)param_1[-0x1d] + 1 >> 1);
  param_1[0x60] = (char)(iVar1 + (uint)(byte)param_1[0x3f] + (uint)(byte)param_1[0x1f] * 2 >> 2);
  param_1[0x40] = (char)(iVar2 + (uint)(byte)param_1[0x1f] + (uint)(byte)param_1[-1] * 2 >> 2);
  uVar8 = (undefined1)(iVar1 + (uint)bVar4 * 2 + (uint)bVar5 >> 2);
  param_1[0x61] = uVar8;
  param_1[0x20] = uVar8;
  uVar8 = (undefined1)(iVar2 + (uint)bVar5 * 2 + uVar9 >> 2);
  param_1[0x62] = uVar8;
  param_1[0x21] = uVar8;
  uVar8 = (undefined1)((uint)bVar5 + (uint)bVar6 * 2 + (uint)bVar7 + 2 >> 2);
  param_1[99] = uVar8;
  param_1[0x22] = uVar8;
  param_1[0x23] = (char)((uint)bVar6 + (uint)bVar7 * 2 + (uint)(byte)param_1[-0x1d] + 2 >> 2);
  return;
}




void FUN_019a9d60(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  
  bVar3 = param_1[-0x1c];
  bVar4 = param_1[-0x1b];
  bVar5 = param_1[-0x1a];
  bVar6 = param_1[-0x19];
  iVar1 = (byte)param_1[-0x1e] + 2;
  iVar2 = (byte)param_1[-0x1d] + 2;
  *param_1 = (char)(iVar1 + (uint)(byte)param_1[-0x20] + (uint)(byte)param_1[-0x1f] * 2 >> 2);
  uVar7 = (undefined1)(iVar2 + (uint)(byte)param_1[-0x1f] + (uint)(byte)param_1[-0x1e] * 2 >> 2);
  param_1[0x20] = uVar7;
  param_1[1] = uVar7;
  uVar7 = (undefined1)(iVar1 + (uint)(byte)param_1[-0x1d] * 2 + (uint)bVar3 >> 2);
  param_1[0x40] = uVar7;
  param_1[0x21] = uVar7;
  param_1[2] = uVar7;
  uVar7 = (undefined1)(iVar2 + (uint)bVar3 * 2 + (uint)bVar4 >> 2);
  param_1[0x60] = uVar7;
  param_1[0x41] = uVar7;
  param_1[0x22] = uVar7;
  param_1[3] = uVar7;
  uVar7 = (undefined1)((uint)bVar3 + (uint)bVar4 * 2 + (uint)bVar5 + 2 >> 2);
  param_1[0x61] = uVar7;
  param_1[0x42] = uVar7;
  param_1[0x23] = uVar7;
  uVar7 = (undefined1)((uint)bVar4 + (uint)bVar5 * 2 + (uint)bVar6 + 2 >> 2);
  param_1[0x62] = uVar7;
  param_1[0x43] = uVar7;
  param_1[99] = (char)((uint)bVar5 + (uint)bVar6 + (uint)bVar6 * 2 + 2 >> 2);
  return;
}




void FUN_019a9e2c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  
  bVar4 = param_1[-0x1c];
  bVar5 = param_1[-0x1b];
  bVar6 = param_1[-0x1f];
  bVar7 = param_1[-0x1e];
  bVar8 = param_1[-0x1d];
  iVar1 = bVar6 + 1;
  iVar2 = bVar7 + 2;
  iVar3 = bVar8 + 2;
  uVar9 = (undefined1)((uint)bVar7 + (uint)bVar8 + 1 >> 1);
  param_1[0x41] = uVar9;
  param_1[2] = uVar9;
  uVar9 = (undefined1)((uint)bVar8 + (uint)bVar4 + 1 >> 1);
  param_1[0x42] = uVar9;
  param_1[3] = uVar9;
  *param_1 = (char)(iVar1 + (uint)(byte)param_1[-0x20] >> 1);
  uVar9 = (undefined1)(iVar1 + (uint)bVar7 >> 1);
  param_1[0x40] = uVar9;
  param_1[1] = uVar9;
  param_1[0x20] = (char)(iVar2 + (uint)(byte)param_1[-0x20] + (uint)bVar6 * 2 >> 2);
  uVar9 = (undefined1)(iVar3 + (uint)bVar6 + (uint)bVar7 * 2 >> 2);
  param_1[0x60] = uVar9;
  param_1[0x21] = uVar9;
  uVar9 = (undefined1)(iVar2 + (uint)bVar8 * 2 + (uint)bVar4 >> 2);
  param_1[0x61] = uVar9;
  param_1[0x22] = uVar9;
  uVar9 = (undefined1)(iVar3 + (uint)bVar4 * 2 + (uint)bVar5 >> 2);
  param_1[0x62] = uVar9;
  param_1[0x23] = uVar9;
  param_1[0x43] = (char)((uint)bVar4 + (uint)bVar5 * 2 + (uint)(byte)param_1[-0x1a] + 2 >> 2);
  param_1[99] = (char)((uint)bVar5 + (uint)(byte)param_1[-0x1a] * 2 + (uint)(byte)param_1[-0x19] + 2
                      >> 2);
  return;
}




void FUN_019a9f14(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  
  bVar6 = param_1[-0x20];
  bVar7 = param_1[-1];
  bVar8 = param_1[-0x21];
  bVar4 = param_1[0x1f];
  bVar5 = param_1[0x3f];
  iVar1 = bVar7 + 2;
  iVar2 = bVar4 + 2;
  iVar3 = bVar7 + 1;
  uVar9 = (undefined1)((uint)bVar4 + (uint)bVar5 + 1 >> 1);
  param_1[0x62] = uVar9;
  param_1[0x40] = uVar9;
  param_1[0x60] = (char)((uint)bVar5 + (uint)(byte)param_1[0x5f] + 1 >> 1);
  uVar9 = (undefined1)(iVar3 + (uint)bVar8 >> 1);
  param_1[0x22] = uVar9;
  *param_1 = uVar9;
  uVar9 = (undefined1)(iVar3 + (uint)bVar4 >> 1);
  param_1[0x42] = uVar9;
  param_1[0x20] = uVar9;
  param_1[3] = (char)((uint)bVar6 + (uint)(byte)param_1[-0x1f] * 2 + (uint)(byte)param_1[-0x1e] + 2
                     >> 2);
  param_1[2] = (char)((uint)bVar8 + (uint)bVar6 * 2 + (uint)(byte)param_1[-0x1f] + 2 >> 2);
  uVar9 = (undefined1)(iVar1 + (uint)bVar8 * 2 + (uint)bVar6 >> 2);
  param_1[0x23] = uVar9;
  param_1[1] = uVar9;
  uVar9 = (undefined1)(iVar2 + (uint)bVar7 * 2 + (uint)bVar8 >> 2);
  param_1[0x43] = uVar9;
  param_1[0x21] = uVar9;
  uVar9 = (undefined1)(iVar1 + (uint)bVar5 + (uint)bVar4 * 2 >> 2);
  param_1[99] = uVar9;
  param_1[0x41] = uVar9;
  param_1[0x61] = (char)(iVar2 + (uint)(byte)param_1[0x5f] + (uint)bVar5 * 2 >> 2);
  return;
}




void FUN_019a9ffc(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  
  bVar3 = param_1[0x3f];
  bVar4 = param_1[0x1f];
  bVar5 = param_1[0x5f];
  iVar1 = bVar3 + 2;
  iVar2 = bVar4 + 1;
  *param_1 = (char)(iVar2 + (uint)(byte)param_1[-1] >> 1);
  param_1[0x42] = bVar5;
  param_1[0x43] = bVar5;
  uVar6 = (undefined1)(iVar2 + (uint)bVar3 >> 1);
  param_1[0x20] = uVar6;
  param_1[2] = uVar6;
  uVar6 = (undefined1)((uint)bVar3 + (uint)bVar5 + 1 >> 1);
  param_1[0x40] = uVar6;
  param_1[0x22] = uVar6;
  param_1[1] = (char)(iVar1 + (uint)(byte)param_1[-1] + (uint)bVar4 * 2 >> 2);
  uVar6 = (undefined1)((uint)bVar5 + (uint)bVar4 + (uint)bVar3 * 2 + 2 >> 2);
  param_1[0x21] = uVar6;
  param_1[3] = uVar6;
  uVar6 = (undefined1)(iVar1 + (uint)bVar5 + (uint)bVar5 * 2 >> 2);
  param_1[0x41] = uVar6;
  param_1[0x23] = uVar6;
  *(uint *)(param_1 + 0x60) = (uint)bVar5 * 0x1010101;
  return;
}

