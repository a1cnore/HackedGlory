// functions/019a5 — 19 functions
#include "libGameKindred.h"




undefined8 FUN_019a512c(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x26);
  if ((lVar3 != 0) && (iVar1 = param_1[4], 0 < iVar1)) {
    iVar4 = 0;
    iVar5 = 0;
    while( true ) {
      iVar1 = FUN_019b789c(param_2 + 0x168,iVar1 - iVar5,lVar3 + *param_1 * iVar5);
      iVar5 = iVar1 + iVar5;
      iVar2 = (**(code **)(param_2 + 0x1e8))(param_2,iVar4);
      iVar1 = param_1[4];
      if (iVar1 <= iVar5) break;
      lVar3 = *(long *)(param_1 + 0x26);
      iVar4 = iVar2 + iVar4;
    }
  }
  return 0;
}




int FUN_019a51c4(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  byte *pbVar10;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34)) {
    piVar8 = (int *)*param_1;
    uVar2 = *(uint *)((long)param_1 + 0x19c);
    iVar7 = 0;
    iVar3 = *piVar8;
    pbVar1 = (byte *)(*(long *)(piVar8 + 4) + (long)((*(int *)(param_1 + 4) + param_2) * piVar8[6]))
    ;
    bVar9 = 0xf;
    pbVar10 = pbVar1;
    do {
      if (0 < *(int *)(param_1 + 0x30)) break;
      FUN_019b7490(param_1 + 0x2d);
      if (0 < (int)uVar2) {
        uVar5 = 0;
        pbVar6 = pbVar10;
        do {
          bVar4 = *(byte *)(param_1[0x36] + uVar5);
          uVar5 = uVar5 + 1;
          *pbVar6 = *pbVar6 & 0xf0 | bVar4 >> 4;
          bVar9 = bVar9 & bVar4 >> 4;
          pbVar6 = pbVar6 + 2;
        } while (uVar2 != uVar5);
      }
      iVar7 = iVar7 + 1;
      pbVar10 = pbVar10 + piVar8[6];
    } while (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34));
    if ((iVar3 - 7U < 4) && (bVar9 != 0xf)) {
      (*DAT_0321a740)(pbVar1,(ulong)uVar2,iVar7);
    }
  }
  return iVar7;
}




int FUN_019a52e4(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  long lVar11;
  
  piVar9 = (int *)*param_1;
  iVar3 = *piVar9;
  iVar8 = 0;
  if (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34)) {
    uVar4 = *(uint *)((long)param_1 + 0x19c);
    lVar11 = 0;
    if (iVar3 != 4 && iVar3 != 9) {
      lVar11 = 3;
    }
    lVar2 = *(long *)(piVar9 + 4) + (long)((*(int *)(param_1 + 4) + param_2) * piVar9[6]);
    iVar8 = 0;
    lVar11 = lVar2 + lVar11;
    bVar10 = 0xff;
    do {
      if (0 < *(int *)(param_1 + 0x30)) break;
      FUN_019b7490(param_1 + 0x2d);
      if (0 < (int)uVar4) {
        uVar5 = 0;
        uVar6 = 0;
        do {
          uVar7 = uVar5 & 0xfffffffc;
          uVar5 = uVar5 + 4;
          pbVar1 = (byte *)(param_1[0x36] + uVar6);
          uVar6 = uVar6 + 1;
          bVar10 = bVar10 & *pbVar1;
          *(byte *)(lVar11 + uVar7) = *pbVar1;
        } while (uVar4 != uVar6);
      }
      iVar8 = iVar8 + 1;
      lVar11 = lVar11 + piVar9[6];
    } while (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34));
    if ((iVar3 - 7U < 4) && (bVar10 != 0xff)) {
      (*DAT_0321a748)(lVar2,iVar3 == 4 || iVar3 == 9,(ulong)uVar4,iVar8);
    }
  }
  return iVar8;
}




undefined4 FUN_019a5424(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = param_1[4];
  uVar3 = *(uint *)*param_2;
  iVar1 = iVar2 + 1 >> 1;
  if ((((uVar3 < 0xd) && ((1 << (ulong)(uVar3 & 0x1f) & 0x103aU) != 0)) || (uVar3 - 7 < 4)) &&
     (*(long *)(param_1 + 0x26) != 0)) {
    FUN_019a966c(*(undefined8 *)(param_1 + 6),param_1[0xc],*(long *)(param_1 + 0x26),*param_1,
                 param_1[3],iVar2,0);
  }
  uVar4 = FUN_019a5598(*(undefined8 *)(param_1 + 6),param_1[0xc],iVar2,param_2 + 6);
  FUN_019a5598(*(undefined8 *)(param_1 + 8),param_1[0xd],iVar1,param_2 + 0x13);
  FUN_019a5598(*(undefined8 *)(param_1 + 10),param_1[0xd],iVar1,param_2 + 0x20);
  return uVar4;
}




undefined8 FUN_019a5500(undefined4 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x26) != 0) {
    lVar5 = *param_2;
    lVar3 = param_2[4];
    lVar6 = *(long *)(lVar5 + 0x10);
    iVar1 = *(int *)(lVar5 + 0x30);
    lVar7 = *(long *)(lVar5 + 0x28);
    iVar2 = *(int *)(lVar5 + 0x3c);
    iVar4 = FUN_019a5598(*(long *)(param_1 + 0x26),*param_1,param_1[4],param_2 + 0x2d);
    if (0 < iVar4) {
      FUN_019a966c(lVar6 + (long)iVar1 * (long)(int)lVar3,*(undefined4 *)(lVar5 + 0x30),
                   lVar7 + (long)iVar2 * (long)(int)lVar3,*(undefined4 *)(lVar5 + 0x3c),
                   *(undefined4 *)((long)param_2 + 0x19c),iVar4,1);
    }
  }
  return 0;
}




int FUN_019a5598(long param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; 0 < param_3; param_3 = param_3 - iVar1) {
    iVar1 = FUN_019b789c(param_4,param_3,param_1,param_2);
    param_1 = param_1 + iVar1 * param_2;
    iVar2 = FUN_019b7994(param_4);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}




void FUN_019a5614(int *param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[4];
  iVar2 = param_1[2];
  *param_3 = iVar1;
  if (param_1[0x16] != 0) {
    if (iVar2 == 0) {
      *param_3 = iVar1 + -1;
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -1;
      *param_2 = *param_2 - (long)*param_1;
    }
    iVar1 = param_1[2] + param_1[0x20] + param_1[4];
    if (iVar1 == param_1[0x21]) {
      *param_3 = iVar1 - (param_1[0x20] + iVar2);
    }
  }
  return;
}




undefined8 FUN_019a567c(void)

{
  return 0x404;
}




undefined4 FUN_019a5684(void *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0xffffff00) == 0x200) {
    if (param_1 == (void *)0x0) {
      uVar1 = 1;
    }
    else {
      memset(param_1,0,0xa0);
      uVar1 = 1;
    }
  }
  return uVar1;
}




undefined4 * FUN_019a56c4(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined4 *)FUN_019a2d64(1,0x950);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(char **)(puVar1 + 2) = "OK";
    puVar2 = (undefined8 *)FUN_019b7a58();
    (*(code *)*puVar2)(puVar1 + 0x24);
    puVar1[1] = 0;
    puVar1[0x6a] = 1;
  }
  return puVar1;
}




undefined4 FUN_019a5720(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 2;
}




char * FUN_019a5734(long param_1)

{
  char *pcVar1;
  
  if (param_1 != 0) {
    pcVar1 = "OK";
    if (*(char **)(param_1 + 8) != (char *)0x0) {
      pcVar1 = *(char **)(param_1 + 8);
    }
    return pcVar1;
  }
  return "no object";
}




void FUN_019a575c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_019a5794(param_1);
    free(param_1);
    return;
  }
  return;
}




void FUN_019a5794(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_019b7a58();
    (**(code **)(lVar1 + 0x28))(param_1 + 0x90);
    FUN_019b7d84(*(undefined8 *)(param_1 + 0x920));
    *(undefined8 *)(param_1 + 0x920) = 0;
    free(*(void **)(param_1 + 0x8d8));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x8e0) = 0;
    *(undefined8 *)(param_1 + 0x8d8) = 0;
  }
  return;
}




undefined8 FUN_019a57f0(int *param_1,int param_2,undefined8 param_3)

{
  if (*param_1 == 0) {
    *(undefined8 *)(param_1 + 2) = param_3;
    *param_1 = param_2;
    param_1[1] = 0;
  }
  return 0;
}




bool FUN_019a5808(char *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((2 < param_2) && (bVar1 = false, *param_1 == -99)) && (bVar1 = false, param_1[1] == '\x01'))
  {
    bVar1 = param_1[2] == '*';
  }
  return bVar1;
}




undefined4 FUN_019a5848(byte *param_1,ulong param_2,ulong param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((((param_1 != (byte *)0x0) && (9 < param_2)) && (uVar3 = 0, param_1[3] == 0x9d)) &&
     ((uVar3 = 0, param_1[4] == 1 && (uVar3 = 0, param_1[5] == 0x2a)))) {
    uVar3 = 0;
    if (((*param_1 & 0x19) == 0x10) &&
       (uVar3 = 0, (uint3)(CONCAT12(param_1[2],CONCAT11(param_1[1],*param_1)) >> 5) < param_3)) {
      uVar1 = (uint)param_1[6] | (param_1[7] & 0x3f) << 8;
      if (uVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar2 = (uint)param_1[8] | (param_1[9] & 0x3f) << 8;
        uVar3 = 0;
        if (uVar2 != 0) {
          if (param_4 != (uint *)0x0) {
            *param_4 = uVar1;
          }
          if (param_5 != (uint *)0x0) {
            *param_5 = uVar2;
          }
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}




undefined4 FUN_019a5908(int *param_1,uint *param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  char *pcVar11;
  uint3 *puVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  int *piVar16;
  byte *pbVar17;
  long lVar18;
  undefined8 uVar19;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *param_1 = 0;
  *(char **)(param_1 + 2) = "OK";
  if (param_2 == (uint *)0x0) {
    uVar19 = 2;
    pcVar11 = "null VP8Io passed to VP8GetHeaders()";
  }
  else {
    uVar10 = *(ulong *)(param_2 + 0x18);
    uVar15 = uVar10 - 3;
    if (uVar10 < 3 || uVar15 == 0) {
      uVar19 = 7;
      pcVar11 = "Truncated header.";
    }
    else {
      puVar12 = *(uint3 **)(param_2 + 0x1a);
      bVar2 = (byte)*puVar12;
      bVar3 = bVar2 >> 1 & 7;
      bVar4 = bVar2 >> 4 & 1;
      uVar13 = (uint)(*puVar12 >> 5);
      *(byte *)((long)param_1 + 0x39) = bVar3;
      *(byte *)((long)param_1 + 0x3a) = bVar4;
      *(byte *)(param_1 + 0xe) = ~bVar2 & 1;
      param_1[0xf] = uVar13;
      if (bVar3 < 4) {
        if (bVar4 == 0) {
          uVar19 = 4;
          pcVar11 = "Frame not displayable.";
        }
        else {
          pbVar14 = (byte *)((long)puVar12 + 3);
          if ((~bVar2 & 1) != 0) {
            if (uVar15 < 7) {
              uVar19 = 7;
              pcVar11 = "cannot parse picture header";
              goto LAB_019a5b0c;
            }
            if (((*pbVar14 != 0x9d) || ((byte)puVar12[1] != 1)) ||
               (*(byte *)((long)puVar12 + 5) != 0x2a)) {
              uVar19 = 3;
              pcVar11 = "Bad code word";
              goto LAB_019a5b0c;
            }
            uVar15 = uVar10 - 10;
            pbVar14 = (byte *)((long)puVar12 + 10);
            uVar13 = (uint)*(byte *)((long)puVar12 + 6) | (*(byte *)((long)puVar12 + 7) & 0x3f) << 8
            ;
            *(short *)(param_1 + 0x10) = (short)uVar13;
            *(byte *)(param_1 + 0x11) = *(byte *)((long)puVar12 + 7) >> 6;
            uVar8 = (uint)(byte)puVar12[2] | (*(byte *)((long)puVar12 + 9) & 0x3f) << 8;
            *(short *)((long)param_1 + 0x42) = (short)uVar8;
            bVar2 = *(byte *)((long)puVar12 + 9);
            param_1[100] = uVar13 + 0xf >> 4;
            param_1[0x65] = uVar8 + 0xf >> 4;
            *(byte *)((long)param_1 + 0x45) = bVar2 >> 6;
            *param_2 = uVar13;
            param_2[1] = uVar8;
            param_2[0x21] = uVar8;
            param_2[0x22] = 0;
            param_2[0x1f] = uVar13;
            param_2[0x20] = 0;
            param_2[0x1d] = 0;
            param_2[0x1e] = 0;
            param_2[3] = uVar13;
            param_2[4] = uVar8;
            FUN_019b820c(param_1 + 0x117);
            uVar13 = param_1[0xf];
            param_1[0x22] = 0;
            param_1[0x20] = 1;
            param_1[0x21] = 0;
            param_1[0x1e] = 0;
            param_1[0x1f] = 0;
          }
          if (uVar15 < uVar13) {
            if (*param_1 != 0) {
              return 0;
            }
            uVar19 = 7;
            pcVar11 = "bad partition length";
          }
          else {
            piVar1 = param_1 + 4;
            FUN_019b68b4(piVar1,pbVar14,pbVar14 + uVar13);
            uVar13 = param_1[0xf];
            if ((char)param_1[0xe] != '\0') {
              uVar5 = FUN_019b6984(piVar1,1);
              *(undefined1 *)((long)param_1 + 0x46) = uVar5;
              uVar5 = FUN_019b6984(piVar1,1);
              *(undefined1 *)((long)param_1 + 0x47) = uVar5;
            }
            iVar6 = FUN_019b6984(piVar1,1);
            param_1[0x1e] = iVar6;
            if (iVar6 == 0) {
              param_1[0x1f] = 0;
            }
            else {
              iVar6 = FUN_019b6984(piVar1,1);
              param_1[0x1f] = iVar6;
              iVar6 = FUN_019b6984(piVar1,1);
              if (iVar6 != 0) {
                iVar6 = FUN_019b6984(piVar1,1);
                lVar18 = 0;
                param_1[0x20] = iVar6;
                do {
                  iVar6 = FUN_019b6984(piVar1,1);
                  uVar5 = 0;
                  if (iVar6 != 0) {
                    uVar5 = FUN_019b6a88(piVar1,7);
                  }
                  *(undefined1 *)((long)param_1 + lVar18 + 0x84) = uVar5;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 4);
                lVar18 = 0;
                do {
                  iVar6 = FUN_019b6984(piVar1,1);
                  uVar5 = 0;
                  if (iVar6 != 0) {
                    uVar5 = FUN_019b6a88(piVar1,6);
                  }
                  *(undefined1 *)((long)param_1 + lVar18 + 0x88) = uVar5;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 4);
              }
              if (param_1[0x1f] != 0) {
                lVar18 = 0;
                do {
                  iVar6 = FUN_019b6984(piVar1,1);
                  if (iVar6 == 0) {
                    uVar5 = 0xff;
                  }
                  else {
                    uVar5 = FUN_019b6984(piVar1,8);
                  }
                  *(undefined1 *)((long)param_1 + lVar18 + 0x45c) = uVar5;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 3);
              }
            }
            if (param_1[0xc] == 0) {
              iVar6 = FUN_019b6984(piVar1,1);
              param_1[0x12] = iVar6;
              iVar6 = FUN_019b6984(piVar1,6);
              param_1[0x13] = iVar6;
              iVar6 = FUN_019b6984(piVar1,3);
              param_1[0x14] = iVar6;
              iVar6 = FUN_019b6984(piVar1,1);
              param_1[0x15] = iVar6;
              if ((iVar6 != 0) && (iVar6 = FUN_019b6984(piVar1,1), iVar6 != 0)) {
                lVar18 = 0;
                do {
                  iVar6 = FUN_019b6984(piVar1,1);
                  if (iVar6 != 0) {
                    uVar7 = FUN_019b6a88(piVar1,6);
                    *(undefined4 *)((long)param_1 + lVar18 + 0x58) = uVar7;
                  }
                  lVar18 = lVar18 + 4;
                } while (lVar18 != 0x10);
                lVar18 = 0;
                do {
                  iVar6 = FUN_019b6984(piVar1,1);
                  if (iVar6 != 0) {
                    uVar7 = FUN_019b6a88(piVar1,6);
                    *(undefined4 *)((long)param_1 + lVar18 + 0x68) = uVar7;
                  }
                  lVar18 = lVar18 + 4;
                } while (lVar18 != 0x10);
              }
              iVar6 = 0;
              if ((param_1[0x13] != 0) && (iVar6 = 1, param_1[0x12] == 0)) {
                iVar6 = 2;
              }
              param_1[0x23e] = iVar6;
              if (param_1[0xc] == 0) {
                uVar8 = FUN_019b6984(piVar1,2);
                iVar6 = 1 << (ulong)(uVar8 & 0x1f);
                uVar8 = iVar6 - 1;
                lVar18 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1) +
                         (long)(int)uVar8;
                param_1[0x6a] = iVar6;
                if ((long)(uVar15 - uVar13) < lVar18) {
                  iVar6 = 7;
                }
                else {
                  puVar12 = (uint3 *)(pbVar14 + uVar13);
                  pbVar14 = pbVar14 + uVar15;
                  pbVar17 = (byte *)((long)puVar12 + lVar18);
                  if (1 < iVar6) {
                    uVar15 = (ulong)uVar8;
                    piVar16 = param_1 + 0x6c;
                    pbVar9 = pbVar17;
                    do {
                      pbVar17 = pbVar14;
                      if (pbVar9 + *puVar12 <= pbVar14) {
                        pbVar17 = pbVar9 + *puVar12;
                      }
                      FUN_019b68b4(piVar16,pbVar9,pbVar17);
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 10;
                      puVar12 = (uint3 *)((long)puVar12 + 3);
                      pbVar9 = pbVar17;
                    } while (uVar15 != 0);
                  }
                  FUN_019b68b4(param_1 + (long)(int)uVar8 * 10 + 0x6c,pbVar17,pbVar14);
                  if (pbVar17 < pbVar14) {
                    FUN_019b7fe4(param_1);
                    if ((char)param_1[0xe] != '\0') {
                      FUN_019b6984(piVar1,1);
                      FUN_019b8d58(piVar1,param_1);
                      param_1[1] = 1;
                      return 1;
                    }
                    if (*param_1 != 0) {
                      return 0;
                    }
                    uVar19 = 4;
                    pcVar11 = "Not a key frame.";
                    goto LAB_019a5b0c;
                  }
                  iVar6 = 5;
                }
                if (*param_1 != 0) {
                  return 0;
                }
                *(char **)(param_1 + 2) = "cannot parse partitions";
                *param_1 = iVar6;
                param_1[1] = 0;
                return 0;
              }
              if (*param_1 != 0) {
                return 0;
              }
              uVar19 = 3;
              pcVar11 = "cannot parse filter header";
            }
            else {
              if (*param_1 != 0) {
                return 0;
              }
              uVar19 = 3;
              pcVar11 = "cannot parse segment header";
            }
          }
        }
      }
      else {
        uVar19 = 3;
        pcVar11 = "Incorrect keyframe parameters.";
      }
    }
  }
LAB_019a5b0c:
  *(char **)(param_1 + 2) = pcVar11;
  *(undefined8 *)param_1 = uVar19;
  return 0;
}




void FUN_019a5edc(long param_1,long param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  void *__s;
  long lVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar24 = *(long *)(param_1 + 0x8a0);
  lVar20 = (long)*(int *)(param_1 + 0x8e8);
  lVar19 = *(long *)(param_1 + 0x8f0);
  pbVar1 = (byte *)(lVar24 + lVar20 * 2);
  if ((*(int *)(param_1 + 0x880) == 0) ||
     (cVar7 = *(char *)(lVar19 + lVar20 * 800 + 0x31d), cVar7 == '\0')) {
    __s = (void *)(lVar19 + lVar20 * 800);
    uVar26 = (ulong)*(byte *)((long)__s + 0x31e);
    memset(__s,0,0x300);
    if (*(char *)((long)__s + 0x300) == '\0') {
      lVar22 = lVar24 + lVar20 * 2;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      iVar8 = FUN_019a6580(param_2,param_1 + 0x567,
                           (uint)*(byte *)(lVar24 + -1) + (uint)*(byte *)(lVar22 + 1),
                           param_1 + uVar26 * 0x20 + 0x3e4,0,&local_88);
      *(bool *)(lVar24 + -1) = 0 < iVar8;
      *(bool *)(lVar22 + 1) = 0 < iVar8;
      if (iVar8 < 2) {
        uVar15 = 0;
        do {
          *(short *)((long)__s + uVar15 * 2) = (short)((int)(short)local_88 + 3U >> 3);
          uVar15 = uVar15 + 0x10;
        } while (uVar15 < 0x100);
      }
      else {
        (*DAT_0321a790)(&local_88,__s);
      }
      lVar22 = param_1 + 0x45f;
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
      lVar22 = param_1 + 0x777;
    }
    iVar10 = 0;
    uVar27 = *pbVar1 & 0xf;
    local_94 = 0;
    uVar12 = *(byte *)(lVar24 + -2) & 0xf;
    do {
      lVar21 = 0;
      uVar25 = 0;
      uVar13 = uVar12 & 1;
      do {
        iVar9 = FUN_019a6580(param_2,lVar22,(uVar27 & 1) + uVar13,param_1 + uVar26 * 0x20 + 0x3dc,
                             iVar8,(short *)((long)__s + lVar21));
        uVar13 = (uint)(iVar8 < iVar9);
        uVar23 = (uint)(iVar8 < iVar9) << 7;
        uVar17 = 2;
        if (iVar9 < 2) {
          uVar17 = (uint)(*(short *)((long)__s + lVar21) != 0);
        }
        uVar18 = 3;
        if (iVar9 < 4) {
          uVar18 = uVar17;
        }
        lVar21 = lVar21 + 0x20;
        uVar27 = uVar23 | uVar27 >> 1;
        uVar25 = uVar18 | uVar25 << 2;
      } while ((int)lVar21 != 0x80);
      uVar27 = uVar27 >> 4;
      __s = (void *)((long)__s + 0x80);
      uVar12 = uVar23 | uVar12 >> 1;
      iVar10 = iVar10 + 1;
      local_94 = uVar25 | local_94 << 8;
    } while (iVar10 != 4);
    uVar12 = uVar12 >> 4;
    uVar25 = 0;
    uVar13 = 0;
    lVar22 = lVar19 + lVar20 * 800 + 0x200;
    do {
      uVar17 = 0;
      iVar8 = 0;
      uVar23 = (uint)(*pbVar1 >> (ulong)(uVar13 + 4 & 0x1f));
      uVar18 = (uint)(*(byte *)(lVar24 + -2) >> (ulong)(uVar13 + 4 & 0x1f));
      lVar21 = lVar22;
      do {
        lVar28 = 0;
        uVar16 = uVar18 & 1;
        do {
          iVar10 = FUN_019a6580(param_2,param_1 + 0x66f,(uVar23 & 1) + uVar16,
                                param_1 + uVar26 * 0x20 + 0x3ec,0,(short *)(lVar21 + lVar28));
          uVar16 = (uint)(0 < iVar10);
          uVar23 = uVar23 >> 1 | uVar16 << 3;
          uVar14 = 2;
          if (iVar10 < 2) {
            uVar14 = (uint)(*(short *)(lVar21 + lVar28) != 0);
          }
          lVar28 = lVar28 + 0x20;
          uVar4 = 3;
          if (iVar10 < 4) {
            uVar4 = uVar14;
          }
          uVar17 = uVar4 | uVar17 << 2;
        } while ((int)lVar28 != 0x40);
        lVar21 = lVar21 + 0x40;
        uVar14 = uVar18 >> 1;
        iVar8 = iVar8 + 1;
        uVar23 = uVar23 >> 2;
        uVar16 = (uint)(0 < iVar10) << 5;
        uVar18 = uVar14 | uVar16;
      } while (iVar8 != 2);
      uVar6 = uVar13 & 7;
      uVar18 = uVar13 & 0x1f;
      uVar4 = uVar13 & 0x1f;
      uVar13 = uVar13 + 2;
      lVar22 = lVar22 + 0x80;
      uVar25 = uVar17 << (ulong)(uVar6 << 2) | uVar25;
      uVar27 = (uVar23 << 4) << (ulong)uVar18 | uVar27;
      uVar12 = (uVar14 & 0x70 | uVar16) << (ulong)uVar4 | uVar12;
    } while (uVar13 < 4);
    *pbVar1 = (byte)uVar27;
    uVar11 = 0;
    *(char *)(lVar24 + -2) = (char)uVar12;
    lVar24 = lVar19 + lVar20 * 800;
    *(uint *)(lVar24 + 0x314) = local_94;
    *(uint *)(lVar24 + 0x318) = uVar25;
    if ((uVar25 & 0xaaaa) == 0) {
      uVar11 = (undefined1)*(undefined4 *)(param_1 + uVar26 * 0x20 + 0x3f8);
    }
    cVar7 = uVar25 == 0 && local_94 == 0;
    *(undefined1 *)(lVar19 + lVar20 * 800 + 0x31c) = uVar11;
  }
  else {
    *pbVar1 = 0;
    *(undefined1 *)(lVar24 + -2) = 0;
    if (*(char *)(lVar19 + lVar20 * 800 + 0x300) == '\0') {
      *(undefined1 *)(lVar24 + lVar20 * 2 + 1) = 0;
      *(undefined1 *)(lVar24 + -1) = 0;
    }
    lVar24 = lVar19 + lVar20 * 800;
    *(undefined1 *)(lVar24 + 0x31c) = 0;
    *(undefined8 *)(lVar24 + 0x314) = 0;
  }
  if (0 < *(int *)(param_1 + 0x8f8)) {
    lVar19 = lVar19 + lVar20 * 800;
    uVar3 = *(undefined4 *)
             (param_1 + (ulong)*(byte *)(lVar19 + 0x31e) * 8 + (ulong)*(byte *)(lVar19 + 0x300) * 4
             + 0x8fc);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x8a8) + (long)*(int *)(param_1 + 0x8e8) * 4);
    *puVar2 = uVar3;
    *(byte *)((long)puVar2 + 2) = (byte)((uint)uVar3 >> 0x10) | cVar7 == '\0';
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(param_2 + 0x20) == 0);
}

