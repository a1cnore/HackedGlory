// functions/1005b — 262 functions
#include "GameKindred.h"




undefined8 FUN_1005b0088(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
    _bzero(*(void **)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 0x1fc));
  }
  fVar2 = *(float *)(param_1 + 0x822c);
  *(float *)(param_1 + 0x1cc) = fVar2;
  fVar1 = 200.0 / (fVar2 + 200.0);
  *(float *)(param_1 + 0x1d0) = fVar1;
  fVar3 = fVar2 + fVar2;
  if (0.0 <= fVar3) {
    fVar4 = 100.0;
    if (fVar3 <= 100.0) {
      fVar4 = fVar3;
    }
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x1d4) = (fVar4 / 100.0) * fVar1;
  fVar3 = fVar2 * 4.0 + -200.0;
  if (0.0 <= fVar3) {
    fVar4 = 100.0;
    if (fVar3 <= 100.0) {
      fVar4 = fVar3;
    }
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x1d8) = (fVar4 / 100.0) * fVar1;
  fVar2 = fVar2 * 4.0 + -300.0;
  if (0.0 <= fVar2) {
    fVar3 = 100.0;
    if (fVar2 <= 100.0) {
      fVar3 = fVar2;
    }
  }
  else {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x1dc) = (fVar3 / 100.0) * fVar1;
  *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x8230);
  fVar1 = *(float *)(param_1 + 0x8228);
  *(float *)(param_1 + 0x1c8) = fVar1;
  *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0x8230) / (float)*(int *)(param_1 + 0x20c);
  fVar1 = (((fVar1 * fVar1 * (float)*(int *)(param_1 + 0x20c)) / 10000.0) / 1000.0) * 100.0;
  *(float *)(param_1 + 0x214) = fVar1;
  *(float *)(param_1 + 0x218) = fVar1;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x224) = 0x3f000000;
  return 0;
}




undefined8 FUN_1005b0200(long param_1)

{
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_chorus.cpp"
                  ,0xcf);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  return 0;
}




undefined8 FUN_1005b024c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_24;
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_chorus.cpp"
                  ,0x10f);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  FUN_1005f696c(*(undefined8 *)(param_1 + 0x90),&local_24,0);
  uVar1 = 0;
  if (local_24 != 0) {
    uVar1 = (uint)((int)((float)*(int *)(param_1 + 0x20c) * 120.0) / 1000) / local_24;
  }
  iVar4 = 2;
  if (1 < uVar1 + 1) {
    iVar4 = uVar1 + 1;
  }
  *(uint *)(param_1 + 0x1f8) = iVar4 * local_24;
  iVar4 = *(int *)(param_1 + 0x210) * iVar4 * local_24 * 2;
  *(int *)(param_1 + 0x1fc) = iVar4;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 + 0x10,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_chorus.cpp"
                        ,0x129,0);
  *(long *)(param_1 + 0x1f0) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  else {
    *(ulong *)(param_1 + 0x1e8) = lVar2 + 0xfU & 0xfffffffffffffff0;
    FUN_1005b0088(param_1);
    uVar3 = 0;
  }
  return uVar3;
}




undefined8
FUN_1005b0360(long param_1,long param_2,long param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(int *)(param_1 + 0x210) != param_5) {
    *(int *)(param_1 + 0x210) = param_5;
    uVar5 = FUN_1005b024c(param_1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x1f8);
  fVar19 = *(float *)(param_1 + 0x1c8);
  fVar18 = *(float *)(param_1 + 0x8228);
  if (fVar19 == fVar18) {
    fVar21 = *(float *)(param_1 + 0x822c);
    if ((*(float *)(param_1 + 0x1cc) == fVar21) &&
       (*(float *)(param_1 + 0x1e0) == *(float *)(param_1 + 0x8230))) goto LAB_1005b0530;
  }
  else {
    fVar21 = *(float *)(param_1 + 0x822c);
  }
  *(float *)(param_1 + 0x1c8) = fVar18;
  *(float *)(param_1 + 0x1cc) = fVar21;
  fVar20 = 200.0 / (fVar21 + 200.0);
  *(float *)(param_1 + 0x1d0) = fVar20;
  fVar22 = fVar21 + fVar21;
  if (0.0 <= fVar22) {
    fVar23 = 100.0;
    if (fVar22 <= 100.0) {
      fVar23 = fVar22;
    }
  }
  else {
    fVar23 = 0.0;
  }
  *(float *)(param_1 + 0x1d4) = (fVar23 / 100.0) * fVar20;
  fVar22 = fVar21 * 4.0 + -200.0;
  if (0.0 <= fVar22) {
    fVar23 = 100.0;
    if (fVar22 <= 100.0) {
      fVar23 = fVar22;
    }
  }
  else {
    fVar23 = 0.0;
  }
  *(float *)(param_1 + 0x1d8) = (fVar23 / 100.0) * fVar20;
  fVar21 = fVar21 * 4.0 + -300.0;
  if (0.0 <= fVar21) {
    fVar22 = 100.0;
    if (fVar21 <= 100.0) {
      fVar22 = fVar21;
    }
  }
  else {
    fVar22 = 0.0;
  }
  *(float *)(param_1 + 0x1dc) = (fVar22 / 100.0) * fVar20;
  *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x8230);
  if (fVar18 != fVar19) {
    *(float *)(param_1 + 0x214) =
         (((fVar18 * fVar18 * (float)*(int *)(param_1 + 0x20c)) / 10000.0) / 1000.0) * 100.0;
  }
  *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0x8230) / (float)*(int *)(param_1 + 0x20c);
LAB_1005b0530:
  if (param_4 != 0) {
    uVar14 = *(uint *)(param_1 + 0x200);
    uVar4 = ~uVar3;
    fVar18 = (float)((int)(float)uVar3 + -1);
    do {
      uVar1 = uVar14 + param_4;
      iVar2 = uVar3 - uVar14;
      if (uVar1 <= uVar3) {
        iVar2 = param_4;
      }
      if (iVar2 * param_5 != 0) {
        lVar15 = *(long *)(param_1 + 0x1e8);
        uVar8 = uVar4;
        if (uVar4 <= ~uVar1) {
          uVar8 = ~uVar1;
        }
        uVar16 = (ulong)((~uVar14 - uVar8) * param_5 - 1) + 1;
        uVar17 = uVar16 & 0x1fffffffe;
        if (uVar17 == 0) {
          uVar17 = 0;
        }
        else {
          uVar8 = uVar4;
          if (uVar4 <= ~(uVar14 + param_4)) {
            uVar8 = ~(uVar14 + param_4);
          }
          uVar7 = (ulong)(param_5 * (~uVar14 - uVar8) - 1) + 1 & 0xfffffffffffffffe;
          uVar8 = param_5 * uVar14;
          pfVar13 = (float *)(param_2 + 4);
          do {
            fVar19 = *pfVar13;
            *(short *)(lVar15 + (ulong)uVar8 * 2) = (short)(int)(pfVar13[-1] * 16384.0);
            *(short *)(lVar15 + (ulong)(uVar8 + 1) * 2) = (short)(int)(fVar19 * 16384.0);
            uVar7 = uVar7 - 2;
            uVar8 = uVar8 + 2;
            pfVar13 = pfVar13 + 2;
          } while (uVar7 != 0);
        }
        if (uVar16 != uVar17) {
          uVar8 = uVar4;
          if (uVar4 <= ~(uVar14 + param_4)) {
            uVar8 = ~(uVar14 + param_4);
          }
          iVar6 = param_5 * (~uVar14 - uVar8) - (int)uVar17;
          uVar8 = (int)uVar17 + param_5 * uVar14;
          pfVar13 = (float *)(param_2 + uVar17 * 4);
          do {
            *(short *)(lVar15 + (ulong)uVar8 * 2) = (short)(int)(*pfVar13 * 16384.0);
            iVar6 = iVar6 + -1;
            uVar8 = uVar8 + 1;
            pfVar13 = pfVar13 + 1;
          } while (iVar6 != 0);
        }
      }
      if (iVar2 != 0) {
        uVar16 = 0;
        uVar8 = 0;
        uVar1 = ~uVar1;
        if (uVar1 < ~uVar3) {
          uVar1 = ~uVar3;
        }
        do {
          fVar21 = *(float *)(param_1 + 0x218);
          fVar19 = *(float *)(param_1 + 0x214);
          if (fVar19 + -0.03125 <= fVar21) {
            if (fVar19 + 0.03125 < fVar21) {
              fVar19 = fVar21 + -0.03125;
            }
          }
          else {
            fVar19 = fVar21 + 0.03125;
          }
          *(float *)(param_1 + 0x218) = fVar19;
          if (0 < param_5) {
            iVar6 = 0;
            uVar17 = uVar16;
            iVar9 = 0;
            do {
              uVar10 = (uint)((*(float *)(param_1 + 0x204) +
                              *(float *)(param_1 + (long)iVar9 * 4 + 0x21c)) * 32768.0);
              uVar11 = -uVar10;
              if (-1 < (int)uVar10) {
                uVar11 = uVar10;
              }
              uVar10 = uVar11 >> 0xd & 3;
              if (uVar10 < 4) {
                uVar11 = uVar11 & 0x7fff;
                switch(uVar10) {
                case 1:
                  fVar19 = -*(float *)(param_1 + (long)(int)(0x3fff - uVar11) * 4 + 0x228);
                  break;
                case 2:
                  fVar19 = -*(float *)(param_1 + (long)(int)uVar11 * 4 + -0xfdd8);
                  break;
                case 3:
                  uVar11 = uVar11 ^ 0x7fff;
                case 0:
                  fVar19 = *(float *)(param_1 + (ulong)uVar11 * 4 + 0x228);
                }
              }
              else {
                fVar19 = 0.0;
              }
              fVar19 = (float)uVar8 +
                       (float)uVar14 + *(float *)(param_1 + 0x218) * (fVar19 + -1.0) * 0.5;
              if (0.0 <= fVar19) {
                if (fVar18 < fVar19) {
                  fVar19 = fVar19 - fVar18;
                }
              }
              else {
                fVar19 = fVar18 + fVar19;
              }
              iVar12 = (int)fVar19;
              uVar11 = 0;
              if (uVar3 != 0) {
                uVar11 = (iVar12 + 1U) / uVar3;
              }
              uVar7 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
              *(float *)(param_3 + uVar7) =
                   *(float *)(param_2 + uVar7) * *(float *)(param_1 + 0x1d0) +
                   *(float *)(param_1 + (long)iVar9 * 4 + 0x1d4) *
                   ((1.0 - (fVar19 - (float)iVar12)) *
                    (float)(int)*(short *)(*(long *)(param_1 + 0x1e8) +
                                          (long)(iVar6 + param_5 * iVar12) * 2) * 6.1035156e-05 +
                   (fVar19 - (float)iVar12) *
                   (float)(int)*(short *)(*(long *)(param_1 + 0x1e8) +
                                         (long)(int)(iVar6 + param_5 * ((iVar12 + 1U) -
                                                                       uVar11 * uVar3)) * 2) *
                   6.1035156e-05);
              iVar12 = 0;
              if (iVar9 < 2) {
                iVar12 = iVar9 + 1;
              }
              iVar6 = iVar6 + 1;
              uVar17 = (ulong)((int)uVar17 + 1);
              iVar9 = iVar12;
            } while (param_5 != iVar6);
          }
          fVar19 = *(float *)(param_1 + 0x208) + *(float *)(param_1 + 0x204);
          if (1.0 < fVar19) {
            fVar19 = fVar19 + -1.0;
          }
          *(float *)(param_1 + 0x204) = fVar19;
          uVar8 = uVar8 + 1;
          uVar16 = (ulong)(uint)((int)uVar16 + param_5);
        } while (uVar8 != ~uVar14 - uVar1);
      }
      uVar14 = uVar14 + iVar2;
      *(uint *)(param_1 + 0x200) = uVar14;
      param_2 = param_2 + (ulong)(uint)(iVar2 * param_5) * 4;
      param_3 = param_3 + (ulong)(uint)(*param_6 * iVar2) * 4;
      if (uVar3 <= uVar14) {
        uVar14 = 0;
      }
      *(uint *)(param_1 + 0x200) = uVar14;
      param_4 = param_4 - iVar2;
    } while (param_4 != 0);
  }
  return 0;
}




undefined8 FUN_1005b0898(undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 2) {
    lVar1 = 0x8228;
  }
  else if (param_3 == 1) {
    lVar1 = 0x8230;
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    lVar1 = 0x822c;
  }
  *(undefined4 *)(param_2 + lVar1) = param_1;
  return 0;
}




undefined8 FUN_1005b08cc(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  long lVar1;
  
  if (param_2 == 2) {
    lVar1 = 0x8228;
  }
  else if (param_2 == 1) {
    lVar1 = 0x8230;
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    lVar1 = 0x822c;
  }
  *param_3 = *(undefined4 *)(param_1 + lVar1);
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005b093c(undefined8 *param_1)

{
  FUN_1005aff34(*param_1);
  return;
}




undefined8 FUN_1005b0944(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_chorus.cpp"
                  ,0xcf);
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
  }
  return 0;
}




undefined8 FUN_1005b0990(undefined8 *param_1)

{
  FUN_1005b0088(*param_1);
  return 0;
}




void FUN_1005b09ac(undefined8 *param_1)

{
  FUN_1005b0360(*param_1);
  return;
}




undefined8 FUN_1005b09b4(undefined4 param_1,long *param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 2) {
    lVar1 = 0x8228;
  }
  else if (param_3 == 1) {
    lVar1 = 0x8230;
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    lVar1 = 0x822c;
  }
  *(undefined4 *)(*param_2 + lVar1) = param_1;
  return 0;
}




undefined8 FUN_1005b09ec(undefined8 *param_1)

{
  FUN_1005b08cc(*param_1);
  return 0;
}




undefined8 FUN_1005b0a08(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
  }
  *(long *)(lVar1 + 0x250) = lVar1 + 0x5d0;
  FUN_1005c1574(lVar1);
  lVar2 = *(long *)(lVar1 + 0x250);
  *(undefined4 *)(lVar1 + 0x264) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x268) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x26c) = 0;
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x3b8) = 0;
  return 0;
}




undefined8 FUN_1005b0a6c(void)

{
  return 0;
}




undefined8 FUN_1005b0a74(void)

{
  return 0;
}




undefined8 FUN_1005b0a7c(long *param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x248);
  *(undefined4 *)(lVar1 + 0xc) = param_2;
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  return 0;
}




void FUN_1005b0a9c(void)

{
  DAT_101da1f00 = &DAT_10186c2c8;
  DAT_101da1f18 = 0x3f2;
  DAT_101da1f10 = 0x600;
  return;
}




undefined8 FUN_1005b0ac4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  
  iVar1 = *(int *)(param_1 + 0x37c);
  iVar2 = *(int *)(param_1 + 0x378);
  local_48 = 0;
  local_44 = 0;
  local_4c = 0;
  lVar10 = *(long *)(param_1 + 600);
  lVar4 = *(long *)(param_1 + 0x3a8);
  if ((*(code **)(lVar4 + 0x128) != (code *)0x0) && ((*(byte *)(lVar4 + 0x55) >> 1 & 1) != 0)) {
    (**(code **)(lVar4 + 0x128))(lVar4,*(undefined8 *)(lVar10 + 2000));
    *(uint *)(*(long *)(param_1 + 0x3a8) + 0x54) =
         *(uint *)(*(long *)(param_1 + 0x3a8) + 0x54) & 0xfffffdff;
  }
  uVar5 = (**(code **)(*(long *)(param_2 + 0x58) + 0xa8))
                    (*(long *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0xb8),param_1 + 0x278);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  *(uint *)(*(long *)(param_1 + 0x3a8) + 0x54) = *(uint *)(*(long *)(param_2 + 0x58) + 0x54) | 0x100
  ;
  *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0xc) = 0xffffffff;
  uVar5 = FUN_1005d21f8(param_1 + 0x3c0,*(undefined8 *)(param_1 + 0x98),
                        *(undefined4 *)(param_2 + 0x40),0,*(undefined8 *)(param_2 + 0x158));
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  lVar4 = *(long *)(param_2 + 0x58);
  pcVar6 = *(code **)(lVar4 + 0x118);
  if (pcVar6 == (code *)0x0) {
    lVar4 = *(long *)(param_1 + 0x3a8);
    pcVar6 = *(code **)(lVar4 + 0x118);
    if (pcVar6 == (code *)0x0) goto LAB_1005b0bb8;
  }
  uVar5 = (*pcVar6)(lVar4,*(undefined4 *)(param_1 + 0x37c),&local_44,&local_48,&local_4c,
                    *(undefined8 *)(*(long *)(param_1 + 600) + 2000));
  if ((int)uVar5 != 0) {
    return uVar5;
  }
LAB_1005b0bb8:
  if (local_48 < 2) {
    uVar5 = FUN_1005f696c(*(undefined8 *)(param_1 + 0x98),&local_48,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else if (local_48 == 0xffffffff) {
    local_48 = 0;
  }
  if (local_44 != *(int *)(param_1 + 0x3b8)) {
    *(int *)(param_1 + 0x3b8) = local_44;
    if (*(long *)(param_1 + 0x3b0) != 0) {
      FUN_1005d7f1c(lVar10 + 0x120,*(long *)(param_1 + 0x3b0),"",0);
      *(undefined8 *)(param_1 + 0x3b0) = 0;
    }
    if (local_44 != 0) {
      lVar4 = FUN_1005d7a5c(lVar10 + 0x120,*(undefined4 *)(param_1 + 0x3b8),"",0,0);
      *(long *)(param_1 + 0x3b0) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x37c);
  if (((*(uint *)(param_1 + 0x1fc) != local_48) || (iVar7 != iVar1)) ||
     (iVar7 = iVar1, *(int *)(param_1 + 0x378) != iVar2)) {
    *(uint *)(param_1 + 0x1fc) = local_48;
    uVar9 = local_48 + 8;
    uVar3 = *(int *)(param_1 + 0x378) - 1;
    if (uVar3 < 5) {
      uVar9 = *(int *)(&DAT_10115ef00 + (long)(int)uVar3 * 4) * uVar9 >> 3;
    }
    *(uint *)(param_1 + 0x200) = uVar9 * iVar7 + 0xf & 0xfffffff0;
    if (*(long *)(param_1 + 0x1e8) != 0) {
      FUN_1005d7f1c(lVar10 + 0x120,*(long *)(param_1 + 0x1e8),"",0);
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    if (local_48 != 0) {
      lVar4 = FUN_1005d7a5c(lVar10 + 0x120,*(int *)(param_1 + 0x200) + 0x10,"",0,0);
      *(long *)(param_1 + 0x1e8) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      *(ulong *)(param_1 + 0x1f0) = lVar4 + 0xfU & 0xfffffffffffffff0;
    }
  }
  pcVar6 = *(code **)(*(long *)(param_1 + 0x3a8) + 0x120);
  if (pcVar6 != (code *)0x0) {
    uVar5 = (*pcVar6)(*(long *)(param_1 + 0x3a8),*(undefined4 *)(param_1 + 0x37c),
                      *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_2 + 0xb8),
                      *(undefined8 *)(param_1 + 0x3b0),*(undefined8 *)(param_2 + 0x58),
                      *(undefined8 *)(*(long *)(param_1 + 600) + 2000));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(uint *)(*(long *)(param_1 + 0x3a8) + 0x54) =
         *(uint *)(*(long *)(param_1 + 0x3a8) + 0x54) | 0x200;
  }
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x37c);
  *(code **)(param_1 + 0x218) = FUN_1005b0dd8;
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x250);
  puVar8[1] = *(undefined4 *)(param_2 + 0x44);
  puVar8[2] = *(undefined4 *)(param_2 + 0x48);
  *puVar8 = *(undefined4 *)(param_2 + 0x2c);
  puVar8[5] = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return 0;
}




void FUN_1005b0dd8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
  }
  FUN_1005b0f10(lVar1);
  return;
}




undefined8 FUN_1005b0df0(long param_1)

{
  long lVar1;
  
  *(long *)(param_1 + 0x250) = param_1 + 0x5d0;
  FUN_1005c1574();
  lVar1 = *(long *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  return 0;
}




undefined8 FUN_1005b0e40(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x3a8);
  if (lVar1 != 0) {
    if ((*(code **)(lVar1 + 0x128) != (code *)0x0) && ((*(byte *)(lVar1 + 0x55) >> 1 & 1) != 0)) {
      (**(code **)(lVar1 + 0x128))(lVar1,*(undefined8 *)(*(long *)(param_1 + 600) + 2000));
      lVar1 = *(long *)(param_1 + 0x3a8);
      *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffdff;
    }
    if ((*(code **)(lVar1 + 0x78) != (code *)0x0) &&
       (uVar2 = (**(code **)(lVar1 + 0x78))(), (int)uVar2 != 0)) {
      return uVar2;
    }
  }
  uVar2 = FUN_1005cdc44(param_1 + 8,0,0);
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x118) == 0) {
      uVar3 = 0x147;
    }
    else {
      uVar3 = 0x143;
      param_1 = *(long *)(param_1 + 0x118);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_codec.cpp"
                  ,uVar3);
  }
  return uVar2;
}




undefined8 FUN_1005b0f00(void)

{
  return 0;
}




undefined8 FUN_1005b0f08(void)

{
  return 0;
}




undefined8 FUN_1005b0f10(long param_1,void *param_2,undefined8 param_3,uint *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  uVar12 = *param_4;
  uVar10 = *(int *)(param_1 + 0x24c) - 1;
  if (uVar10 < 5) {
    uVar10 = *(uint *)(&DAT_10115ef00 + (long)(int)uVar10 * 4) >> 3;
  }
  else {
    uVar10 = 1;
  }
  iVar2 = uVar10 * *(int *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0x46) != '\0') {
    _bzero(param_2,(ulong)(uVar12 * iVar2));
    return 0;
  }
  *param_5 = *(int *)(param_1 + 0x108);
  lVar7 = *(long *)(param_1 + 0x250);
  if ((*(uint *)(param_1 + 0x268) < *(uint *)(lVar7 + 0x10)) && (*(int *)(lVar7 + 0xc) != -1)) {
    uVar10 = *(uint *)(param_1 + 0x264);
    if (uVar10 == 0xffffffff) {
      uVar10 = *(uint *)(lVar7 + 0xc);
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x264);
    if (uVar10 == 0xffffffff) goto LAB_1005b108c;
  }
  local_64 = 0;
  *(uint *)(param_1 + 0x260) = uVar10;
  pcVar8 = *(code **)(*(long *)(param_1 + 0x3a8) + 0x118);
  if ((pcVar8 != (code *)0x0) &&
     ((*pcVar8)(*(long *)(param_1 + 0x3a8),0,0,&local_64,0,0), local_64 != 0)) {
    uVar6 = 0;
    if (local_64 != 0) {
      uVar6 = uVar10 / local_64;
    }
    uVar10 = uVar6 * local_64;
  }
  lVar7 = *(long *)(param_1 + 0x3a8);
  *(undefined4 *)(lVar7 + 0x178) = 0;
  if (*(void **)(lVar7 + 0x160) != (void *)0x0) {
    _bzero(*(void **)(lVar7 + 0x160),(ulong)*(uint *)(lVar7 + 0x174));
  }
  if (*(code **)(lVar7 + 0xd0) != (code *)0x0) {
    (**(code **)(lVar7 + 0xd0))(lVar7);
  }
  FUN_100586284(*(undefined8 *)(param_1 + 0x3a8),0,uVar10,2);
  if (local_64 != 0) {
    uVar6 = 0;
    if (local_64 != 0) {
      uVar6 = *(uint *)(param_1 + 0x260) / local_64;
    }
    *(uint *)(param_1 + 0x1e4) =
         *(int *)(param_1 + 0x1e4) + (*(uint *)(param_1 + 0x260) - uVar6 * local_64);
  }
  *(uint *)(param_1 + 0x260) = uVar10;
  lVar7 = *(long *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(lVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
LAB_1005b108c:
  if ((-2 < *(int *)(lVar7 + 0x14)) &&
     (uVar10 = *(uint *)(lVar7 + 0x18), *(uint *)(param_1 + 0x26c) < uVar10)) {
    *(int *)(param_1 + 0x244) = *(int *)(lVar7 + 0x14);
    *(undefined4 *)(lVar7 + 0x14) = 0xfffffffe;
    *(uint *)(param_1 + 0x26c) = uVar10;
  }
  uVar10 = 0;
  if (uVar12 == 0) {
    uVar4 = 0;
  }
  else {
    do {
      local_68 = 0;
      pbVar9 = *(byte **)(param_1 + 0x250);
      if (((*pbVar9 >> 1 & 1) == 0) || (*(int *)(param_1 + 0x244) == 0)) {
        if ((*(byte *)(*(long *)(param_1 + 0x3a8) + 0x54) & 1) != 0) {
          iVar5 = *(int *)(param_1 + 0x240);
          goto LAB_1005b1100;
        }
        uVar6 = *(uint *)(param_1 + 0x260);
        uVar13 = 0xffffffff;
LAB_1005b1110:
        uVar11 = uVar12;
        if ((uVar13 < uVar6 + uVar12) && (uVar11 = (uVar13 - uVar6) + 1, uVar11 == 0))
        goto LAB_1005b1180;
        uVar4 = FUN_100585ec4(*(undefined8 *)(param_1 + 0x3a8),param_2,uVar11,&local_68);
        if (((uint)uVar4 | 0x10) != 0x10) {
          return uVar4;
        }
        param_2 = (void *)((long)param_2 + (ulong)(local_68 * iVar2));
        uVar6 = *(int *)(param_1 + 0x260) + local_68;
        *(uint *)(param_1 + 0x260) = uVar6;
        uVar1 = local_68;
        if (uVar11 <= local_68) {
          uVar1 = uVar11;
        }
        uVar10 = uVar1 + uVar10;
        bVar3 = local_68 <= uVar12;
        uVar11 = uVar12 - local_68;
        uVar12 = 0;
        if (bVar3) {
          uVar12 = uVar11;
        }
      }
      else {
        iVar5 = *(int *)(pbVar9 + 8) + *(int *)(pbVar9 + 4);
LAB_1005b1100:
        uVar13 = iVar5 - 1;
        uVar6 = *(uint *)(param_1 + 0x260);
        if (uVar6 <= uVar13) goto LAB_1005b1110;
LAB_1005b1180:
        uVar4 = 0x10;
      }
      if (*(int *)(param_1 + 0x220) == 1) {
        if (((int)uVar4 != 0x10) && (uVar6 != local_68)) goto LAB_1005b11b0;
LAB_1005b11cc:
        if (((**(byte **)(param_1 + 0x250) >> 1 & 1) == 0) ||
           (iVar5 = *(int *)(param_1 + 0x244), iVar5 == 0)) {
          if (uVar12 != 0) {
            _bzero(param_2,(ulong)(uVar12 * iVar2));
          }
          uVar4 = 0x10;
        }
        else {
          uVar12 = *(uint *)(*(byte **)(param_1 + 0x250) + 4);
          *(uint *)(param_1 + 0x260) = uVar12;
          if (0 < iVar5) {
            *(int *)(param_1 + 0x244) = iVar5 + -1;
          }
          pcVar8 = *(code **)(*(long *)(param_1 + 0x3a8) + 0x118);
          if (pcVar8 != (code *)0x0) {
            local_6c = 0;
            (*pcVar8)(*(long *)(param_1 + 0x3a8),0,0,&local_6c,0,0);
            if (local_6c != 0) {
              uVar6 = 0;
              if (local_6c != 0) {
                uVar6 = uVar12 / local_6c;
              }
              uVar12 = uVar6 * local_6c;
            }
          }
          FUN_100586284(*(undefined8 *)(param_1 + 0x3a8),0,uVar12,2);
          *(uint *)(param_1 + 0x260) = uVar12;
        }
        break;
      }
      if ((int)uVar4 == 0x10) {
        uVar4 = 0x10;
        goto LAB_1005b11cc;
      }
LAB_1005b11b0:
      if (uVar13 < uVar6) goto LAB_1005b11cc;
    } while (uVar12 != 0);
  }
  *param_4 = uVar10;
  return uVar4;
}




undefined8 FUN_1005b1284(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x250);
  *(undefined4 *)(lVar1 + 0xc) = param_2;
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  return 0;
}




undefined8 FUN_1005b12a0(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x250) + 0xc);
  if (*(uint *)(*(long *)(param_1 + 0x250) + 0x10) <= *(uint *)(param_1 + 0x268)) {
    puVar1 = (undefined4 *)(param_1 + 0x260);
  }
  *param_2 = *puVar1;
  return 0;
}




ulong FUN_1005b12cc(long *param_1,undefined4 param_2,void *param_3,int param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  long *local_b8;
  undefined4 local_ac;
  int local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint *puStack_78;
  undefined8 local_70;
  
  local_a8 = 0;
  local_a4 = 0;
  local_ac = 0;
  if (0x100 < param_4) {
    return 0x1f;
  }
  if (*(long *)((long)param_3 + 0xc0) == 0) {
    return 0x35;
  }
  lVar11 = *param_1;
  if (lVar11 != 0) {
    FUN_10057097c(lVar11,4);
  }
  if (0 < (int)param_1[1]) {
    lVar12 = 0;
    uVar3 = 0;
    if ((int)param_1[1] != param_4) {
      uVar3 = 0x1c;
    }
    uVar13 = (ulong)uVar3;
    bVar5 = true;
    param_4 = 0;
    goto LAB_1005b170c;
  }
  param_1[0xfa] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  puVar7 = (undefined8 *)FUN_1005b0a9c();
  local_70 = puVar7[6];
  puStack_78 = (uint *)puVar7[5];
  local_80 = puVar7[4];
  uStack_88 = puVar7[3];
  local_90 = puVar7[2];
  uStack_98 = puVar7[1];
  local_a0 = *puVar7;
  uVar13 = (**(code **)((long)param_3 + 0xc0))
                     (0,param_5,&local_a8,&local_a4,&local_ac,param_1[0xfa]);
  if ((int)uVar13 == 0) {
    if (local_a4 < 2) {
      uVar13 = FUN_1005f696c(*param_1,&local_a4,0);
      if ((int)uVar13 != 0) goto LAB_1005b13e8;
    }
    else if (local_a4 == 0xffffffff) {
      local_a4 = 0;
    }
    iVar4 = *(int *)((long)param_3 + 0x5c);
    iVar6 = (int)local_90;
    plVar1 = param_1 + 0x24;
    bVar5 = true;
    uVar13 = FUN_1005d82c0(plVar1,0,(param_4 * 8 + 0x44fU & 0xfffffff0) +
                                    (((int)local_90 + 0x2fU & 0xfffffff0) +
                                     (iVar4 + 0x2fU & 0xfffffff0) + (local_a8 + 0x1fU & 0xfffffff0)
                                    + ((local_a4 * 2 + 0x10) * (int)param_5 + 0x2f & 0xfffffff0)) *
                                    param_4,1,local_ac);
    if ((int)uVar13 == 0) {
      lVar12 = FUN_1005d7a5c(plVar1,param_4 * 8,"",0,0);
      param_1[2] = lVar12;
      if (lVar12 == 0) {
        param_4 = 0;
        lVar12 = 0;
        uVar13 = 0x26;
        bVar5 = true;
      }
      else {
        if (0 < param_4) {
          lVar10 = 0;
          puVar2 = PTR_DAT_1014441e0 + 0x10;
          do {
            puStack_78 = &local_c8;
            local_c8 = local_a4;
            local_c0 = 2;
            local_bc = 0;
            iStack_c4 = (int)param_5;
            lVar8 = FUN_1005d7a5c(plVar1,iVar6 + 0x10,"",0,0);
            if (lVar8 == 0) {
LAB_1005b16f8:
              uVar13 = 0x26;
              bVar5 = true;
              goto LAB_1005b170c;
            }
            plVar14 = (long *)(lVar8 + 0xfU & 0xfffffffffffffff0);
            FUN_1005c14ac(plVar14);
            *plVar14 = (long)puVar2;
            FUN_1005d0c24();
            plVar14[0x78] = (long)&PTR_FUN_1014a2940;
            *(undefined4 *)(plVar14 + 0x7f) = 1;
            if (plVar14 == (long *)0x0) {
              local_b8 = (long *)0x0;
            }
            else {
              local_b8 = plVar14 + 1;
            }
            uVar13 = FUN_10056b4fc(*param_1,&local_a0,0,&local_b8,0);
            if ((int)uVar13 != 0) {
              bVar5 = true;
              goto LAB_1005b170c;
            }
            puVar9 = (undefined4 *)FUN_1005d7a5c(plVar1,iVar4 + 0x10,"",0,0);
            plVar14[0x75] = (long)puVar9;
            if (puVar9 == (undefined4 *)0x0) goto LAB_1005b16f8;
            puVar9[0x14] = puVar9[0x2c];
            *(undefined8 *)(puVar9 + 0x5a) = 0;
            *(undefined8 *)(puVar9 + 0x62) = 0;
            *puVar9 = 0;
            *(undefined8 *)(puVar9 + 2) = 0;
            *(undefined8 *)(puVar9 + 0x54) = 0;
            *(undefined8 *)(puVar9 + 0x56) = 0;
            *(undefined8 *)(puVar9 + 0x50) = 0;
            *(undefined8 *)(puVar9 + 0x52) = 0;
            puVar9[0x10] = 2;
            *(undefined **)(puVar9 + 10) = PTR_defaultFileRead_101444158;
            *(undefined **)(puVar9 + 0xc) = PTR_defaultFileSeek_101444160;
            *(undefined **)(puVar9 + 0xe) = PTR_defaultMetaData_101444168;
            plVar14[0x3e] = 0;
            plVar14[0x76] = 0;
            _memcpy((void *)(plVar14[0x75] + 0x58),param_3,0xd8);
            lVar8 = plVar14[0x75];
            *(undefined4 *)(lVar8 + 0xc4) = param_2;
            *(undefined **)(lVar8 + 0xa8) = PTR_defaultGetWaveFormat_101444170;
            *(long **)(lVar8 + 8) = plVar14 + 0x4f;
            *(long **)(lVar8 + 400) = plVar14 + 0x78;
            *(long **)(lVar8 + 0x18) = plVar14 + 0x78;
            *(undefined4 *)(lVar8 + 0x130) = 0;
            *(long *)(lVar8 + 0x48) = *param_1;
            plVar14[0x4b] = (long)param_1;
            *(int *)(plVar14 + 0x4e) = (int)lVar10;
            *(undefined4 *)((long)plVar14 + 0x274) = param_2;
            (**(code **)(*plVar14 + 8))(plVar14,1,1,0);
            *(undefined1 *)((long)param_1 + lVar10 + 0x18) = 0;
            *(long **)(param_1[2] + lVar10 * 8) = plVar14;
            lVar10 = lVar10 + 1;
          } while (lVar10 < param_4);
        }
        bVar5 = false;
        uVar13 = 0;
        *(int *)(param_1 + 1) = param_4;
      }
    }
    else {
      param_4 = 0;
      lVar12 = 0;
    }
  }
  else {
LAB_1005b13e8:
    param_4 = 0;
    lVar12 = 0;
    bVar5 = true;
  }
LAB_1005b170c:
  if ((lVar11 != 0) && (lVar11 != 0)) {
    FUN_100570990(lVar11,4);
  }
  if (((0 < param_4) && (bVar5)) && (lVar12 != 0)) {
    lVar11 = 0;
    do {
      lVar10 = *(long *)(lVar12 + lVar11 * 8);
      if (lVar10 != 0) {
        FUN_1005b0e40(lVar10,1);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < param_4);
  }
  return uVar13;
}




undefined8 FUN_1005b1774(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (0 < iVar2) {
      lVar5 = 0;
      while( true ) {
        lVar4 = *(long *)(lVar3 + lVar5 * 8);
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x3a8);
          *(undefined8 *)(lVar4 + 400) = 0;
          *(undefined8 *)(lVar4 + 0x158) = 0;
          FUN_1005b0e40(*(undefined8 *)(lVar3 + lVar5 * 8),0);
          iVar2 = *(int *)(param_1 + 8);
        }
        lVar5 = lVar5 + 1;
        if (iVar2 <= lVar5) break;
        lVar3 = *(long *)(param_1 + 0x10);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar1 = FUN_1005d8100(param_1 + 0x120);
  if ((int)uVar1 == 0) {
    if (*(long *)(param_1 + 0x118) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x118),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_codecpool.cpp"
                    ,0x13f);
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_1005b182c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char local_32;
  char local_31;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar2 = 0;
    do {
      if (*(char *)(param_1 + 0x18 + lVar2) == '\0') {
        local_31 = '\0';
        FUN_1005c21b4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),&local_31);
        if (local_31 != '\0') {
          local_32 = '\0';
          plVar1 = *(long **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_32);
          if (local_32 != '\0') {
            *(undefined1 *)(param_1 + 0x18 + lVar2) = 1;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8);
            return 0;
          }
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 8));
  }
  return 2;
}




undefined8 FUN_1005b18f4(long param_1)

{
  long *plVar1;
  long lVar2;
  char local_32;
  char local_31;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar2 = 0;
    do {
      if (*(char *)(param_1 + 0x18 + lVar2) == '\0') {
        local_31 = '\0';
        FUN_1005c21b4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),&local_31);
        if (local_31 != '\0') {
          local_32 = '\0';
          plVar1 = *(long **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_32);
          if (local_32 != '\0') {
            return 0;
          }
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 8));
  }
  return 2;
}




undefined8 FUN_1005b1994(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  char local_32;
  char local_31;
  
  *param_2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    lVar2 = 0;
    do {
      if (*(char *)(param_1 + 0x18 + lVar2) == '\0') {
        local_31 = '\0';
        FUN_1005c21b4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),&local_31);
        if (local_31 != '\0') {
          local_32 = '\0';
          plVar1 = *(long **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_32);
          if (local_32 != '\0') {
            *param_2 = *param_2 + 1;
          }
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}




undefined8 FUN_1005b1a44(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 8);
  }
  return 0;
}




void FUN_1005b1a64(void)

{
  _memset(&DAT_101e997e8,0,0x60);
  FUN_1005ecc98(&DAT_101e997ec,"Threshold",0x10);
  FUN_1005ecc98(&DAT_101e997fc,"dB",0x10);
  DAT_101e99810 = "Compressor threshold [-60dB, 0dB]  Default = 0dB.";
  DAT_101e99818 = 0xc2700000;
  DAT_101e9981c = 0;
  DAT_101e99820 = 0;
  DAT_101e99828 = 1;
  _memset(&DAT_101e99848,0,0x60);
  FUN_1005ecc98(&DAT_101e9984c,"Ratio",0x10);
  FUN_1005ecc98(&DAT_101e9985c,"",0x10);
  DAT_101e99870 = "Compressor ratio. [1,50]  Default = 2.5.";
  DAT_101e99878 = 0x3f800000;
  DAT_101e9987c = 0x42480000;
  DAT_101e99880 = 0x40200000;
  DAT_101e99888 = 1;
  _memset(&DAT_101e998a8,0,0x60);
  FUN_1005ecc98(&DAT_101e998ac,"Attack",0x10);
  FUN_1005ecc98(&DAT_101e998bc,"ms",0x10);
  DAT_101e998d0 = "Compressor attack time. [0.1ms,500ms]  Default = 20ms.";
  DAT_101e998d8 = 0x3dcccccd;
  DAT_101e998dc = 0x43fa0000;
  DAT_101e998e0 = 0x41a00000;
  DAT_101e998e8 = 1;
  _memset(&DAT_101e99908,0,0x60);
  FUN_1005ecc98(&DAT_101e9990c,"Release",0x10);
  FUN_1005ecc98(&DAT_101e9991c,"ms",0x10);
  DAT_101e99930 = "Compressor release time. [10ms,5000ms]  Default = 200ms.";
  DAT_101e99938 = 0x41200000;
  DAT_101e9993c = 0x459c4000;
  DAT_101e99940 = 0x43480000;
  DAT_101e99948 = 1;
  _memset(&DAT_101e99968,0,0x60);
  FUN_1005ecc98(&DAT_101e9996c,"Make up gain",0x10);
  FUN_1005ecc98(&DAT_101e9997c,"dB",0x10);
  DAT_101e99990 = "Compressor make up gain [-30dB, 30dB]  Default = 0dB.";
  DAT_101e99998 = 0xc1f00000;
  DAT_101e9999c = 0x41f00000;
  DAT_101e999a0 = 0;
  DAT_101e999a8 = 1;
  _memset(&DAT_101e999c8,0,0x60);
  DAT_101e999c8 = 3;
  FUN_1005ecc98(&DAT_101e999cc,"Use sidechain",0x10);
  FUN_1005ecc98(&DAT_101e999dc,"",0x10);
  DAT_101e999f0 = "Analyse the sidechain signal instead of the input signal.";
  DAT_101e999f8 = 0xfffffffd;
  _memset(&DAT_101e99a28,0,0x60);
  DAT_101e99a28 = 2;
  FUN_1005ecc98(&DAT_101e99a2c,"Linked",0x10);
  FUN_1005ecc98(&DAT_101e99a3c,"",0x10);
  DAT_101e99a58 = 1;
  DAT_101e99a60 = 0;
  DAT_101e99a50 =
       "input signal [TRUE = summed together, FALSE = use each channel separately].  Default = TRUE."
  ;
  DAT_101e99a88 = &DAT_10186c3d8;
  DAT_101e99aa0 = 0x12;
  DAT_101e99a98 = 0x318;
  return;
}




undefined8 FUN_1005b1d58(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar1 + 0x60)) {
    lVar3 = 0;
    do {
      piVar2 = *(int **)(*(long *)(lVar1 + 0x68) + lVar3 * 8);
      if (*piVar2 == 2) {
        FUN_1005ceffc(param_1,lVar3,piVar2[0xc] != 0);
      }
      else if (*piVar2 == 0) {
        FUN_1005cef0c(piVar2[0xe],param_1,lVar3);
      }
      lVar3 = lVar3 + 1;
      lVar1 = *(long *)(param_1 + 0xd0);
    } while (lVar3 < *(int *)(lVar1 + 0x60));
  }
  _memset((void *)(param_1 + 0x1dc),0,0x100);
  *(undefined1 *)(param_1 + 0x2f4) = 1;
  return 0;
}




undefined8 FUN_1005b1dfc(long param_1)

{
  _memset((void *)(param_1 + 0x1dc),0,0x100);
  return 0;
}




undefined8 FUN_1005b1e20(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  float *pfVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  float *pfVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  ulong local_68;
  
  if (param_2 == 0) {
    return 0;
  }
  local_78 = param_2;
  if ((*(int *)(param_1 + 0x2fc) != 0) && (local_78 = param_2, *(long *)(param_1 + 0xb0) != 0)) {
    local_78 = *(long *)(param_1 + 0xb0);
  }
  fVar27 = *(float *)(param_1 + 0x304);
  local_70 = param_3;
  local_68 = param_5;
  if ((*(float *)(param_1 + 0x1c8) != fVar27) || (*(char *)(param_1 + 0x2f4) != '\0')) {
    *(float *)(param_1 + 0x1c8) = fVar27;
    fVar27 = (float)_powf(0x41200000,fVar27 / 10.0);
    *(float *)(param_1 + 0x1cc) = fVar27;
    *(float *)(param_1 + 0x1d0) = 1.0 / fVar27;
  }
  fVar27 = *(float *)(param_1 + 0x308);
  if ((*(float *)(param_1 + 0x1d4) != fVar27) || (*(char *)(param_1 + 0x2f4) != '\0')) {
    *(float *)(param_1 + 0x1d4) = fVar27;
    *(float *)(param_1 + 0x1d8) = (1.0 / fVar27 + -1.0) * 0.5;
  }
  iVar23 = *(int *)(param_1 + 0x314);
  if ((*(int *)(param_1 + 0x2f8) != iVar23) ||
     (iVar19 = *(int *)(param_1 + 0x2f8), *(char *)(param_1 + 0x2f4) != '\0')) {
    *(int *)(param_1 + 0x2f8) = iVar23;
    iVar19 = iVar23;
  }
  fVar27 = *(float *)(param_1 + 0x300);
  if ((*(float *)(param_1 + 0x2dc) != fVar27) || (*(char *)(param_1 + 0x2f4) != '\0')) {
    *(float *)(param_1 + 0x2dc) = fVar27;
    fVar27 = (float)_expf(-3.11127 /
                          ((fVar27 / 1000.0) * (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708)));
    *(float *)(param_1 + 0x2e0) = 1.0 - fVar27;
  }
  fVar27 = *(float *)(param_1 + 0x30c);
  if ((*(float *)(param_1 + 0x2e4) != fVar27) || (*(char *)(param_1 + 0x2f4) != '\0')) {
    *(float *)(param_1 + 0x2e4) = fVar27;
    fVar27 = (float)_expf(-3.11127 /
                          ((fVar27 / 1000.0) * (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708)));
    *(float *)(param_1 + 0x2e8) = 1.0 - fVar27;
  }
  fVar27 = *(float *)(param_1 + 0x310);
  if ((*(float *)(param_1 + 0x2ec) != fVar27) || (*(char *)(param_1 + 0x2f4) != '\0')) {
    *(float *)(param_1 + 0x2ec) = fVar27;
    if (fVar27 <= -80.0) {
      uVar26 = 0;
    }
    else {
      uVar26 = _powf(0x41200000,fVar27 / 20.0);
    }
    *(undefined4 *)(param_1 + 0x2f0) = uVar26;
  }
  *(undefined1 *)(param_1 + 0x2f4) = 0;
  iVar24 = (int)param_5;
  uVar14 = (ulong)(iVar24 - 1);
  iVar23 = (int)param_4;
  switch(uVar14) {
  case 0:
    pcVar5 = DAT_101d91a00;
    break;
  case 1:
    pcVar5 = DAT_101d91a08;
    break;
  default:
    if (iVar19 != 0) {
      if (iVar23 == 0) {
        return 0;
      }
      uVar7 = 0;
      iVar19 = 0;
      local_80 = param_1 + 0x2e0;
      local_88 = param_1 + 0x2e8;
      uVar22 = uVar14 + 1;
      lVar9 = local_70 + 0x10;
      do {
        lVar20 = uVar7 * 4;
        fVar27 = 0.0;
        if (0 < iVar24) {
          pfVar8 = (float *)(local_78 + lVar20);
          uVar11 = param_5;
          do {
            fVar27 = fVar27 + *pfVar8 * *pfVar8;
            uVar2 = (int)uVar11 - 1;
            uVar11 = (ulong)uVar2;
            pfVar8 = pfVar8 + 1;
          } while (uVar2 != 0);
        }
        fVar28 = *(float *)(param_1 + 0x1dc);
        plVar4 = &local_80;
        if (fVar27 <= fVar28) {
          plVar4 = &local_88;
        }
        fVar29 = *(float *)*plVar4;
        fVar27 = *(float *)(param_1 + 0x25c) + fVar29 * (fVar27 - *(float *)(param_1 + 0x25c));
        *(float *)(param_1 + 0x25c) = fVar27;
        fVar28 = fVar28 + fVar29 * (fVar27 - fVar28);
        *(float *)(param_1 + 0x1dc) = fVar28;
        if (fVar28 <= *(float *)(param_1 + 0x1cc)) {
          fVar27 = *(float *)(param_1 + 0x2f0);
        }
        else {
          fVar27 = (float)_powf(fVar28 * *(float *)(param_1 + 0x1d0),
                                *(undefined4 *)(param_1 + 0x1d8));
          fVar27 = fVar27 * *(float *)(param_1 + 0x2f0);
        }
        if (0 < iVar24) {
          uVar11 = uVar22 & 0x1fffffff8;
          if (uVar11 == 0) {
            uVar11 = 0;
          }
          else {
            lVar15 = (ulong)(uint)(iVar24 * iVar19) * 4;
            lVar12 = (uVar14 + (uint)(iVar24 * iVar19)) * 4;
            if ((ulong)(param_2 + lVar12) < (ulong)(local_70 + lVar15) ||
                (ulong)(local_70 + lVar12) < (ulong)(param_2 + lVar15)) {
              puVar13 = (undefined8 *)(lVar9 + lVar20);
              puVar16 = (undefined8 *)(param_2 + 0x10 + lVar20);
              uVar18 = uVar22 & 0xfffffffffffffff8;
              do {
                auVar30._0_8_ =
                     CONCAT44(fVar27 * *(float *)((long)puVar16 + -0xc),
                              fVar27 * *(float *)(puVar16 + -2));
                auVar30._8_4_ = fVar27 * *(float *)(puVar16 + -1);
                auVar30._12_4_ = fVar27 * *(float *)((long)puVar16 + -4);
                fVar28 = fVar27 * (float)*puVar16;
                fVar29 = fVar27 * (float)((ulong)*puVar16 >> 0x20);
                fVar32 = fVar27 * (float)puVar16[1];
                fVar33 = fVar27 * (float)((ulong)puVar16[1] >> 0x20);
                puVar13[-2] = auVar30._0_8_;
                auVar31 = NEON_ext(auVar30,auVar30,8,1);
                puVar13[-1] = auVar31._0_8_;
                *puVar13 = CONCAT44(fVar29,fVar28);
                auVar31._4_4_ = fVar29;
                auVar31._0_4_ = fVar28;
                auVar31._8_4_ = fVar32;
                auVar31._12_4_ = fVar33;
                auVar3._4_4_ = fVar29;
                auVar3._0_4_ = fVar28;
                auVar3._8_4_ = fVar32;
                auVar3._12_4_ = fVar33;
                auVar31 = NEON_ext(auVar31,auVar3,8,1);
                puVar13[1] = auVar31._0_8_;
                uVar18 = uVar18 - 8;
                puVar13 = puVar13 + 4;
                puVar16 = puVar16 + 4;
              } while (uVar18 != 0);
            }
            else {
              uVar11 = 0;
            }
          }
          if (uVar22 != uVar11) {
            iVar10 = iVar24 - (int)uVar11;
            lVar20 = (uVar11 + uVar7) * 4;
            pfVar8 = (float *)(local_70 + lVar20);
            pfVar17 = (float *)(param_2 + lVar20);
            do {
              *pfVar8 = fVar27 * *pfVar17;
              iVar10 = iVar10 + -1;
              pfVar8 = pfVar8 + 1;
              pfVar17 = pfVar17 + 1;
            } while (iVar10 != 0);
          }
        }
        uVar7 = (ulong)(uint)((int)uVar7 + iVar24);
        bVar6 = iVar19 != iVar23 + -1;
        iVar19 = iVar19 + 1;
      } while (bVar6);
      return 0;
    }
    goto LAB_1005b2270;
  case 5:
    pcVar5 = DAT_101d91a10;
    break;
  case 7:
    pcVar5 = DAT_101d91a18;
  }
  if (iVar19 == 0) {
LAB_1005b2270:
    if (iVar23 != 0) {
      uVar14 = 0;
      iVar19 = 0;
      local_80 = CONCAT44(local_80._4_4_,iVar23 + -1);
      local_88 = param_2;
      do {
        if (0 < (int)param_5) {
          lVar9 = uVar14 * 4;
          pfVar17 = (float *)(local_78 + lVar9);
          pfVar21 = (float *)(local_70 + lVar9);
          uVar22 = local_68;
          pfVar8 = (float *)(param_1 + 0x25c);
          pfVar25 = (float *)(local_88 + lVar9);
          do {
            fVar27 = *pfVar17 * *pfVar17;
            fVar28 = pfVar8[-0x20];
            pfVar1 = (float *)(param_1 + 0x2e0);
            if (fVar27 <= fVar28) {
              pfVar1 = (float *)(param_1 + 0x2e8);
            }
            fVar29 = *pfVar1;
            fVar27 = *pfVar8 + fVar29 * (fVar27 - *pfVar8);
            *pfVar8 = fVar27;
            fVar28 = fVar28 + fVar29 * (fVar27 - fVar28);
            pfVar8[-0x20] = fVar28;
            if (fVar28 <= *(float *)(param_1 + 0x1cc)) {
              fVar27 = *(float *)(param_1 + 0x2f0);
            }
            else {
              fVar27 = (float)_powf(fVar28 * *(float *)(param_1 + 0x1d0),
                                    *(undefined4 *)(param_1 + 0x1d8));
              fVar27 = fVar27 * *(float *)(param_1 + 0x2f0);
            }
            *pfVar21 = fVar27 * *pfVar25;
            uVar2 = (int)uVar22 - 1;
            uVar22 = (ulong)uVar2;
            pfVar8 = pfVar8 + 1;
            pfVar17 = pfVar17 + 1;
            pfVar21 = pfVar21 + 1;
            pfVar25 = pfVar25 + 1;
          } while (uVar2 != 0);
        }
        uVar14 = (ulong)(uint)((int)uVar14 + (int)local_68);
        bVar6 = iVar19 != (int)local_80;
        iVar19 = iVar19 + 1;
        param_5 = local_68;
      } while (bVar6);
    }
  }
  else {
    (*pcVar5)(*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x2f0),
              *(undefined4 *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2e8),
              *(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0),param_2,local_70,
              local_78,param_4,param_1 + 0x25c,param_1 + 0x1dc);
  }
  return 0;
}




undefined8 FUN_1005b23a8(undefined4 param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    *(undefined4 *)(param_2 + 0x304) = param_1;
    return 0;
  case 1:
    *(undefined4 *)(param_2 + 0x308) = param_1;
    return 0;
  case 2:
    *(undefined4 *)(param_2 + 0x300) = param_1;
    return 0;
  case 3:
    *(undefined4 *)(param_2 + 0x30c) = param_1;
    return 0;
  case 4:
    *(undefined4 *)(param_2 + 0x310) = param_1;
    return 0;
  default:
    return 0x1f;
  }
}




undefined8 FUN_1005b2438(long param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  switch(param_2) {
  case 0:
    *param_3 = *(undefined4 *)(param_1 + 0x304);
    break;
  case 1:
    *param_3 = *(undefined4 *)(param_1 + 0x308);
    break;
  case 2:
    *param_3 = *(undefined4 *)(param_1 + 0x300);
    break;
  case 3:
    *param_3 = *(undefined4 *)(param_1 + 0x30c);
    break;
  case 4:
    *param_3 = *(undefined4 *)(param_1 + 0x310);
    break;
  default:
    return 0x1f;
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




undefined8 FUN_1005b2508(long param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 6) {
    *(undefined4 *)(param_1 + 0x314) = param_3;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b252c(long param_1,int param_2,undefined4 *param_3,void *param_4)

{
  size_t sVar1;
  char *pcVar2;
  bool bVar3;
  
  if (param_2 == 6) {
    *param_3 = *(undefined4 *)(param_1 + 0x314);
    if (param_4 != (void *)0x0) {
      bVar3 = *(int *)(param_1 + 0x314) == 0;
      pcVar2 = "TRUE";
      if (bVar3) {
        pcVar2 = "FALSE";
      }
      sVar1 = 5;
      if (bVar3) {
        sVar1 = 6;
      }
      _memcpy(param_4,pcVar2,sVar1);
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b258c(long param_1,int param_2,undefined4 *param_3)

{
  if (param_2 == 5) {
    *(undefined4 *)(param_1 + 0x2fc) = *param_3;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b25b4(long param_1,int param_2,long *param_3,undefined4 *param_4,void *param_5)

{
  size_t sVar1;
  char *pcVar2;
  bool bVar3;
  
  if (param_2 == 5) {
    *param_3 = param_1 + 0x2fc;
    *param_4 = 4;
    if (param_5 != (void *)0x0) {
      bVar3 = *(int *)(param_1 + 0x2fc) == 0;
      pcVar2 = "true";
      if (bVar3) {
        pcVar2 = "false";
      }
      sVar1 = 5;
      if (bVar3) {
        sVar1 = 6;
      }
      _memcpy(param_5,pcVar2,sVar1);
    }
  }
  return 0;
}




undefined8 FUN_1005b2610(long *param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(lVar3 + 0xd0);
  if (0 < *(int *)(lVar1 + 0x60)) {
    lVar4 = 0;
    do {
      piVar2 = *(int **)(*(long *)(lVar1 + 0x68) + lVar4 * 8);
      if (*piVar2 == 2) {
        FUN_1005ceffc(lVar3,lVar4,piVar2[0xc] != 0);
      }
      else if (*piVar2 == 0) {
        FUN_1005cef0c(piVar2[0xe],lVar3,lVar4);
      }
      lVar4 = lVar4 + 1;
      lVar1 = *(long *)(lVar3 + 0xd0);
    } while (lVar4 < *(int *)(lVar1 + 0x60));
  }
  _memset((void *)(lVar3 + 0x1dc),0,0x100);
  *(undefined1 *)(lVar3 + 0x2f4) = 1;
  return 0;
}




undefined8 FUN_1005b26b4(long *param_1)

{
  _memset((void *)(*param_1 + 0x1dc),0,0x100);
  return 0;
}




undefined8 FUN_1005b26dc(undefined8 *param_1)

{
  FUN_1005b1e20(*param_1);
  return 0;
}




undefined8 FUN_1005b26f8(undefined4 param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  if (4 < param_3) {
    return 0x1f;
  }
  lVar1 = *param_2;
  switch(param_3) {
  case 0:
    *(undefined4 *)(lVar1 + 0x304) = param_1;
    return 0;
  case 1:
    *(undefined4 *)(lVar1 + 0x308) = param_1;
    return 0;
  case 2:
    *(undefined4 *)(lVar1 + 0x300) = param_1;
    return 0;
  case 3:
    *(undefined4 *)(lVar1 + 0x30c) = param_1;
    return 0;
  case 4:
    *(undefined4 *)(lVar1 + 0x310) = param_1;
    return 0;
  }
}




void FUN_1005b2774(undefined8 *param_1)

{
  FUN_1005b2438(*param_1);
  return;
}




undefined8 FUN_1005b277c(long *param_1,int param_2,undefined4 *param_3)

{
  if (param_2 == 5) {
    *(undefined4 *)(*param_1 + 0x2fc) = *param_3;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b27a8(long *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 6) {
    *(undefined4 *)(*param_1 + 0x314) = param_3;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b27d0(long *param_1,int param_2,undefined4 *param_3,void *param_4)

{
  size_t sVar1;
  char *pcVar2;
  bool bVar3;
  long lVar4;
  
  if (param_2 == 6) {
    lVar4 = *param_1;
    *param_3 = *(undefined4 *)(lVar4 + 0x314);
    if (param_4 != (void *)0x0) {
      bVar3 = *(int *)(lVar4 + 0x314) == 0;
      pcVar2 = "TRUE";
      if (bVar3) {
        pcVar2 = "FALSE";
      }
      sVar1 = 5;
      if (bVar3) {
        sVar1 = 6;
      }
      _memcpy(param_4,pcVar2,sVar1);
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b2834(long *param_1,int param_2,long *param_3,undefined4 *param_4,void *param_5)

{
  size_t sVar1;
  char *pcVar2;
  bool bVar3;
  long lVar4;
  
  if (param_2 == 5) {
    lVar4 = *param_1;
    *param_3 = lVar4 + 0x2fc;
    *param_4 = 4;
    if (param_5 != (void *)0x0) {
      bVar3 = *(int *)(lVar4 + 0x2fc) == 0;
      pcVar2 = "true";
      if (bVar3) {
        pcVar2 = "false";
      }
      sVar1 = 5;
      if (bVar3) {
        sVar1 = 6;
      }
      _memcpy(param_5,pcVar2,sVar1);
    }
  }
  return 0;
}




undefined8 FUN_1005b2894(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_100612734(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_100612900(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,8,param_1,"DSPConnection::getInput",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005b2978(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_100612734(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_10061292c(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,8,param_1,"DSPConnection::getOutput",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005b2a5c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar2 = FUN_100612734(param_2,&local_160,&local_168);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1006149c8(param_1,local_160,0x40,1,0);
    uVar3 = 0;
    if ((int)uVar2 == 0) goto LAB_1005b2b10;
  }
  uVar3 = uVar2;
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_158,0x100);
    FUN_1005acff8(uVar2,8,param_2,"DSPConnection::setMix",auStack_158);
  }
LAB_1005b2b10:
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




undefined8 FUN_1005b2b54(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_100612734(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_100614be0(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,8,param_1,"DSPConnection::getMix",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005b2c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_100612734(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_100614548(local_170,param_2,param_3,param_4,param_5,0x40,1), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,8,param_1,"DSPConnection::setMixMatrix",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005b2dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_100612734(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_10061495c(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,8,param_1,"DSPConnection::getMixMatrix",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005b2f68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_100612734(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_100614964(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,8,param_1,"DSPConnection::getType",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005b304c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_100612734(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_100614c04(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,8,param_1,"DSPConnection::setUserData",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005b3130(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_100612734(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_100614c10(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,8,param_1,"DSPConnection::getUserData",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005b3214(void)

{
  _memset(&DAT_101e99ac0,0,0x60);
  FUN_1005ecc98(&DAT_101e99ac4,"Level",0x10);
  FUN_1005ecc98(&DAT_101e99ad4,"",0x10);
  DAT_101e99af0 = 0;
  DAT_101e99af4 = 0x3f800000;
  DAT_101e99af8 = 0x3f000000;
  DAT_101e99b00 = 1;
  DAT_101e99ae8 = "Distortion value.  0.0 to 1.0.  Default = 0.5.";
  DAT_101e99b20 = &DAT_10186c4b8;
  DAT_101e99b38 = 9;
  DAT_101e99b30 = 0x1d8;
  return;
}




undefined8 FUN_1005b32b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar3 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x68) + lVar3 * 8) + 0x38),
                            param_1,lVar3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 0xd0);
    } while (lVar3 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}




undefined8 FUN_1005b3324(void)

{
  return 0;
}




undefined8 FUN_1005b332c(void)

{
  return 0;
}




undefined8 FUN_1005b3334(long param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar12 = *(float *)(param_1 + 0x1d0);
  fVar13 = *(float *)(param_1 + 0x1c8);
  if (*(float *)(param_1 + 0x1c8) != fVar12) {
    *(float *)(param_1 + 0x1c8) = fVar12;
    fVar13 = fVar12;
  }
  if (param_2 != (float *)0x0) {
    if (1.0 <= fVar13) {
      fVar13 = 19994.682;
    }
    else {
      fVar13 = (fVar13 + fVar13) / (1.0 - fVar13);
    }
    fVar12 = fVar13 + 1.0;
    uVar2 = param_5 * param_4;
    if (uVar2 >> 3 != 0) {
      lVar1 = (ulong)((uVar2 >> 3) - 1) * 8 + 8;
      pfVar5 = param_3 + lVar1;
      iVar8 = -(uVar2 >> 3);
      pfVar4 = param_2;
      do {
        *param_3 = (fVar12 * *pfVar4) / (fVar13 * ABS(*pfVar4) + 1.0);
        param_3[1] = (fVar12 * pfVar4[1]) / (fVar13 * ABS(pfVar4[1]) + 1.0);
        param_3[2] = (fVar12 * pfVar4[2]) / (fVar13 * ABS(pfVar4[2]) + 1.0);
        param_3[3] = (fVar12 * pfVar4[3]) / (fVar13 * ABS(pfVar4[3]) + 1.0);
        param_3[4] = (fVar12 * pfVar4[4]) / (fVar13 * ABS(pfVar4[4]) + 1.0);
        param_3[5] = (fVar12 * pfVar4[5]) / (fVar13 * ABS(pfVar4[5]) + 1.0);
        param_3[6] = (fVar12 * pfVar4[6]) / (fVar13 * ABS(pfVar4[6]) + 1.0);
        param_3[7] = (fVar12 * pfVar4[7]) / (fVar13 * ABS(pfVar4[7]) + 1.0);
        iVar8 = iVar8 + 1;
        pfVar4 = pfVar4 + 8;
        param_3 = param_3 + 8;
      } while (iVar8 != 0);
      param_2 = param_2 + lVar1;
      param_3 = pfVar5;
    }
    uVar6 = uVar2 & 7;
    if (uVar6 != 0) {
      uVar10 = (ulong)(uVar6 - 1);
      uVar9 = uVar10 + 1 & 0x1fffffff8;
      pfVar4 = param_2;
      pfVar5 = param_3;
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else if (param_2 + uVar10 < param_3 || param_3 + uVar10 < param_2) {
        uVar6 = uVar6 - (int)uVar9;
        pfVar4 = param_2 + uVar9;
        pfVar5 = param_3 + uVar9;
        uVar7 = (ulong)((uVar2 & 7) - 1) + 1 & 0xfffffffffffffff8;
        param_3 = param_3 + 4;
        auVar14 = NEON_fmov(0x3f800000,4);
        pfVar11 = param_2 + 4;
        do {
          fVar19 = (float)*(undefined8 *)(pfVar11 + 2);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
          fVar17 = (float)*(undefined8 *)pfVar11;
          fVar18 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
          auVar15._0_8_ =
               CONCAT44((fVar12 * pfVar11[-3]) / (fVar13 * ABS(pfVar11[-3]) + auVar14._4_4_),
                        (fVar12 * pfVar11[-4]) / (fVar13 * ABS(pfVar11[-4]) + auVar14._0_4_));
          auVar15._8_4_ = (fVar12 * pfVar11[-2]) / (fVar13 * ABS(pfVar11[-2]) + auVar14._8_4_);
          auVar15._12_4_ = (fVar12 * pfVar11[-1]) / (fVar13 * ABS(pfVar11[-1]) + auVar14._12_4_);
          fVar17 = (fVar12 * fVar17) / (fVar13 * ABS(fVar17) + auVar14._0_4_);
          fVar18 = (fVar12 * fVar18) / (fVar13 * ABS(fVar18) + auVar14._4_4_);
          fVar19 = (fVar12 * fVar19) / (fVar13 * ABS(fVar19) + auVar14._8_4_);
          fVar20 = (fVar12 * fVar20) / (fVar13 * ABS(fVar20) + auVar14._12_4_);
          *(undefined8 *)(param_3 + -4) = auVar15._0_8_;
          auVar16 = NEON_ext(auVar15,auVar15,8,1);
          *(long *)(param_3 + -2) = auVar16._0_8_;
          *(ulong *)param_3 = CONCAT44(fVar18,fVar17);
          auVar16._4_4_ = fVar18;
          auVar16._0_4_ = fVar17;
          auVar16._8_4_ = fVar19;
          auVar16._12_4_ = fVar20;
          auVar3._4_4_ = fVar18;
          auVar3._0_4_ = fVar17;
          auVar3._8_4_ = fVar19;
          auVar3._12_4_ = fVar20;
          auVar16 = NEON_ext(auVar16,auVar3,8,1);
          *(long *)(param_3 + 2) = auVar16._0_8_;
          uVar7 = uVar7 - 8;
          param_3 = param_3 + 8;
          pfVar11 = pfVar11 + 8;
        } while (uVar7 != 0);
      }
      else {
        uVar9 = 0;
      }
      if (uVar10 + 1 != uVar9) {
        do {
          *pfVar5 = (fVar12 * *pfVar4) / (fVar13 * ABS(*pfVar4) + 1.0);
          uVar6 = uVar6 - 1;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        } while (uVar6 != 0);
      }
    }
  }
  return 0;
}




undefined8 FUN_1005b359c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1d0) = param_1;
  return 0;
}




undefined8 FUN_1005b35a8(long param_1,undefined8 param_2,undefined4 *param_3,char *param_4)

{
  *param_3 = *(undefined4 *)(param_1 + 0x1d0);
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




undefined8 FUN_1005b35ec(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar4 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x68) + lVar4 * 8) + 0x38),
                            lVar3,lVar4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar4 = lVar4 + 1;
      lVar2 = *(long *)(lVar3 + 0xd0);
    } while (lVar4 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}




undefined8 FUN_1005b3658(void)

{
  return 0;
}




undefined8 FUN_1005b3660(void)

{
  return 0;
}




undefined8 FUN_1005b3668(undefined8 *param_1)

{
  FUN_1005b3334(*param_1);
  return 0;
}




undefined8 FUN_1005b3684(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(*param_2 + 0x1d0) = param_1;
  return 0;
}




undefined8 FUN_1005b3694(long *param_1,undefined8 param_2,undefined4 *param_3,char *param_4)

{
  *param_3 = *(undefined4 *)(*param_1 + 0x1d0);
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005b36dc(void)

{
  _memset(&DAT_101e99b58,0,0x60);
  FUN_1005ecc98(&DAT_101e99b5c,"Delay",0x10);
  FUN_1005ecc98(&DAT_101e99b6c,"ms",0x10);
  DAT_101e99b88 = 0x40a00000;
  DAT_101e99b80 = "Echo delay in ms.  5 to 5000.  Default = 500.";
  DAT_101e99b8c = 0x459c4000;
  DAT_101e99b90 = 0x43fa0000;
  DAT_101e99b98 = 1;
  _memset(&DAT_101e99bb8,0,0x60);
  FUN_1005ecc98(&DAT_101e99bbc,"Feedback",0x10);
  FUN_1005ecc98(&DAT_101e99bcc,"%",0x10);
  DAT_101e99be0 =
       "Echo decay per delay.  0 to 100.  100.0 = No decay, 0.0 = total decay.  Default = 50.0";
  DAT_101e99be8 = 0;
  DAT_101e99bec = 0x42c80000;
  DAT_101e99bf0 = 0x42480000;
  DAT_101e99bf8 = 1;
  _memset(&DAT_101e99c18,0,0x60);
  FUN_1005ecc98(&DAT_101e99c1c,"DryLevel",0x10);
  FUN_1005ecc98(&DAT_101e99c2c,"dB",0x10);
  DAT_101e99c40 = "Volume of original signal to pass to output.  -80.0f to 10.0f. Default = 0.0.";
  DAT_101e99c48 = 0xc2a00000;
  DAT_101e99c4c = 0x41200000;
  DAT_101e99c50 = 0;
  DAT_101e99c58 = 1;
  _memset(&DAT_101e99c78,0,0x60);
  FUN_1005ecc98(&DAT_101e99c7c,"WetLevel",0x10);
  FUN_1005ecc98(&DAT_101e99c8c,"dB",0x10);
  DAT_101e99ca8 = 0xc2a00000;
  DAT_101e99cac = 0x41200000;
  DAT_101e99cb0 = 0;
  DAT_101e99cb8 = 1;
  DAT_101e99ca0 = "Volume of echo delay signal to pass to output.  -80.0f to 10.0f. Default = 0.0.";
  DAT_101e99cd8 = &DAT_10186c5b0;
  DAT_101e99cf8 = FUN_1005b38bc;
  DAT_101e99cf0 = 6;
  DAT_101e99ce8 = 0x240;
  return;
}




void FUN_1005b38bc(undefined8 *param_1)

{
  FUN_1005b4654(*param_1);
  return;
}




void FUN_1005b38c4(long param_1,uint param_2,int param_3,long param_4,uint param_5,int param_6,
                  int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (param_7 != 0) {
    uVar7 = ~param_5;
    uVar8 = ~param_2;
    do {
      uVar1 = param_6 + param_7;
      uVar6 = uVar1;
      if ((int)param_5 <= (int)uVar1) {
        uVar6 = param_5;
      }
      uVar2 = param_3 + param_7;
      uVar3 = uVar2;
      if ((int)param_2 <= (int)uVar2) {
        uVar3 = param_2;
      }
      iVar4 = uVar6 - param_6;
      if ((int)(uVar3 - param_3) <= (int)(uVar6 - param_6)) {
        iVar4 = uVar3 - param_3;
      }
      _memcpy((void *)(param_1 + param_3),(void *)(param_4 + param_6),(long)iVar4);
      uVar6 = uVar7;
      if ((int)uVar7 <= (int)~uVar1) {
        uVar6 = ~uVar1;
      }
      uVar1 = uVar8;
      if ((int)uVar8 <= (int)~uVar2) {
        uVar1 = ~uVar2;
      }
      iVar5 = param_6 + uVar6;
      if ((int)(param_6 + uVar6) <= (int)(param_3 + uVar1)) {
        iVar5 = param_3 + uVar1;
      }
      iVar10 = (uVar7 + param_6) - iVar5;
      iVar5 = ((param_5 - 1) + param_6) - iVar5;
      do {
        iVar9 = iVar5;
        iVar10 = iVar10 + param_5;
        iVar5 = iVar9 + param_5;
      } while (iVar10 < 0);
      do {
        iVar9 = iVar9 - param_5;
      } while ((int)param_5 <= iVar9);
      uVar1 = uVar7;
      if ((int)uVar7 <= ~(param_6 + param_7)) {
        uVar1 = ~(param_6 + param_7);
      }
      uVar6 = uVar8;
      if ((int)uVar8 <= ~(param_3 + param_7)) {
        uVar6 = ~(param_3 + param_7);
      }
      iVar5 = param_6 + uVar1;
      if ((int)(param_6 + uVar1) <= (int)(param_3 + uVar6)) {
        iVar5 = param_3 + uVar6;
      }
      iVar10 = (uVar8 + param_3) - iVar5;
      iVar5 = ((param_2 - 1) + param_3) - iVar5;
      do {
        param_3 = iVar5;
        iVar10 = iVar10 + param_2;
        iVar5 = param_3 + param_2;
      } while (iVar10 < 0);
      do {
        param_3 = param_3 - param_2;
      } while ((int)param_2 <= param_3);
      param_7 = param_7 - iVar4;
      param_6 = iVar9;
    } while (param_7 != 0);
  }
  return;
}




void FUN_1005b3a3c(short *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  ulong uVar12;
  ulong *puVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  ulong uVar31;
  ulong uVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  
  if (param_5 != 0) {
    fVar14 = 1.0 / (float)(param_5 + 1);
    uVar1 = (ulong)(param_2 - 1) + 1;
    auVar15 = NEON_fmov(0x3f800000,4);
    auVar16 = NEON_fmov(0xbf800000,4);
    psVar8 = param_1 + param_4 * param_2;
    fVar17 = fVar14;
    do {
      iVar3 = param_4 + param_5;
      if (param_3 <= param_4 + param_5) {
        iVar3 = param_3;
      }
      iVar3 = iVar3 - param_4;
      iVar2 = iVar3;
      while (iVar2 != 0) {
        iVar2 = iVar2 + -1;
        if (0 < param_2) {
          fVar18 = fVar17 * 3.051851e-05;
          uVar12 = uVar1 & 0x1fffffff8;
          if (uVar12 == 0) {
            uVar12 = 0;
            psVar9 = psVar8;
          }
          else {
            psVar9 = psVar8 + uVar12;
            uVar7 = uVar1 & 0xfffffffffffffff8;
            puVar13 = (ulong *)(psVar8 + 4);
            do {
              uVar20 = puVar13[-1];
              uVar26 = *puVar13;
              auVar21._0_4_ = (int)(short)uVar20;
              auVar21._4_4_ = (int)(short)(uVar20 >> 0x10);
              auVar21._8_4_ = (int)(short)(uVar20 >> 0x20);
              auVar21._12_4_ = (int)(short)(uVar20 >> 0x30);
              auVar21 = NEON_scvtf(auVar21,4);
              auVar27._0_4_ = (int)(short)uVar26;
              auVar27._4_4_ = (int)(short)(uVar26 >> 0x10);
              auVar27._8_4_ = (int)(short)(uVar26 >> 0x20);
              auVar27._12_4_ = (int)(short)(uVar26 >> 0x30);
              auVar27 = NEON_scvtf(auVar27,4);
              fVar19 = fVar18 * auVar21._0_4_;
              fVar22 = fVar18 * auVar21._4_4_;
              fVar23 = fVar18 * auVar21._8_4_;
              fVar24 = fVar18 * auVar21._12_4_;
              fVar25 = fVar18 * auVar27._0_4_;
              fVar28 = fVar18 * auVar27._4_4_;
              fVar29 = fVar18 * auVar27._8_4_;
              fVar30 = fVar18 * auVar27._12_4_;
              sVar11 = -(ushort)(fVar19 < auVar16._0_4_);
              cVar4 = -(fVar22 < auVar16._4_4_);
              cVar33 = -(fVar23 < auVar16._8_4_);
              cVar34 = -(fVar24 < auVar16._12_4_);
              sVar5 = -(ushort)(fVar25 < auVar16._0_4_);
              cVar6 = -(fVar28 < auVar16._4_4_);
              cVar35 = -(fVar29 < auVar16._8_4_);
              cVar36 = -(fVar30 < auVar16._12_4_);
              uVar31 = (ulong)CONCAT16(-(auVar15._12_4_ < fVar24),
                                       (uint6)CONCAT14(-(auVar15._8_4_ < fVar23),
                                                       (uint)CONCAT12(-(auVar15._4_4_ < fVar22),
                                                                      -(ushort)(auVar15._0_4_ <
                                                                               fVar19)))) ^
                       0x1000100010001;
              uVar32 = (ulong)CONCAT16(-(auVar15._12_4_ < fVar30),
                                       (uint6)CONCAT14(-(auVar15._8_4_ < fVar29),
                                                       (uint)CONCAT12(-(auVar15._4_4_ < fVar28),
                                                                      -(ushort)(auVar15._0_4_ <
                                                                               fVar25)))) ^
                       0x1000100010001;
              uVar20 = ((ulong)CONCAT16(cVar34,(uint6)CONCAT14(cVar33,(uint)CONCAT12(cVar4,sVar11)))
                       ^ 0x1000100010001) & uVar31;
              uVar26 = ((ulong)CONCAT16(cVar36,(uint6)CONCAT14(cVar35,(uint)CONCAT12(cVar6,sVar5)))
                       ^ 0x1000100010001) & uVar32;
              uVar31 = CONCAT16(cVar34,(uint6)CONCAT14(cVar33,(uint)CONCAT12(cVar4,sVar11))) &
                       uVar31;
              uVar32 = CONCAT16(cVar36,(uint6)CONCAT14(cVar35,(uint)CONCAT12(cVar6,sVar5))) & uVar32
              ;
              uVar20 = (CONCAT26((short)(int)(fVar24 * 32767.0),
                                 CONCAT24((short)(int)(fVar23 * 32767.0),
                                          CONCAT22((short)(int)(fVar22 * 32767.0),
                                                   (short)(int)(fVar19 * 32767.0)))) ^
                       0x7fff7fff7fff7fff) &
                       CONCAT26((short)((short)(uVar20 >> 0x30) << 0xf) >> 0xf,
                                CONCAT24((short)((short)(uVar20 >> 0x20) << 0xf) >> 0xf,
                                         CONCAT22((short)((short)(uVar20 >> 0x10) << 0xf) >> 0xf,
                                                  (short)((short)uVar20 << 0xf) >> 0xf)));
              uVar26 = (CONCAT26((short)(int)(fVar30 * 32767.0),
                                 CONCAT24((short)(int)(fVar29 * 32767.0),
                                          CONCAT22((short)(int)(fVar28 * 32767.0),
                                                   (short)(int)(fVar25 * 32767.0)))) ^
                       0x7fff7fff7fff7fff) &
                       CONCAT26((short)((short)(uVar26 >> 0x30) << 0xf) >> 0xf,
                                CONCAT24((short)((short)(uVar26 >> 0x20) << 0xf) >> 0xf,
                                         CONCAT22((short)((short)(uVar26 >> 0x10) << 0xf) >> 0xf,
                                                  (short)((short)uVar26 << 0xf) >> 0xf)));
              puVar13[-1] = uVar20 ^ 0x7fff7fff7fff7fff ^
                            (uVar20 ^ 0xffffffffffffffff) &
                            CONCAT26((short)((short)(uVar31 >> 0x30) << 0xf) >> 0xf,
                                     CONCAT24((short)((short)(uVar31 >> 0x20) << 0xf) >> 0xf,
                                              CONCAT22((short)((short)(uVar31 >> 0x10) << 0xf) >>
                                                       0xf,(short)((short)uVar31 << 0xf) >> 0xf)));
              *puVar13 = uVar26 ^ 0x7fff7fff7fff7fff ^
                         (uVar26 ^ 0xffffffffffffffff) &
                         CONCAT26((short)((short)(uVar32 >> 0x30) << 0xf) >> 0xf,
                                  CONCAT24((short)((short)(uVar32 >> 0x20) << 0xf) >> 0xf,
                                           CONCAT22((short)((short)(uVar32 >> 0x10) << 0xf) >> 0xf,
                                                    (short)((short)uVar32 << 0xf) >> 0xf)));
              uVar7 = uVar7 - 8;
              puVar13 = puVar13 + 2;
            } while (uVar7 != 0);
          }
          if ((ulong)(param_2 - 1) + 1 != uVar12) {
            iVar10 = param_2 - (int)uVar12;
            do {
              fVar19 = fVar18 * (float)(int)*psVar9;
              if (fVar19 <= 1.0) {
                if (-1.0 <= fVar19) {
                  sVar11 = (short)(int)(fVar19 * 32767.0);
                }
                else {
                  sVar11 = -0x8000;
                }
              }
              else {
                sVar11 = 0x7fff;
              }
              *psVar9 = sVar11;
              iVar10 = iVar10 + -1;
              psVar9 = psVar9 + 1;
            } while (iVar10 != 0);
          }
          psVar8 = psVar8 + uVar1;
        }
        fVar17 = fVar14 + fVar17;
      }
      param_4 = 0;
      param_5 = param_5 - iVar3;
      psVar8 = param_1;
    } while (param_5 != 0);
  }
  return;
}




undefined8 FUN_1005b3c1c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *(undefined4 *)(param_1 + 0x21c) = 1;
  *(undefined4 *)(param_1 + 0x180) = 1;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar3 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x68) + lVar3 * 8) + 0x38),
                            param_1,lVar3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 0xd0);
    } while (lVar3 < *(int *)(lVar2 + 0x60));
  }
  fVar6 = *(float *)(param_1 + 0x228);
  *(float *)(param_1 + 0x1c8) = fVar6;
  *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x22c);
  fVar7 = *(float *)(param_1 + 0x22c) / 100.0;
  *(float *)(param_1 + 0x1d0) = fVar7;
  fVar4 = *(float *)(param_1 + 0x234);
  *(float *)(param_1 + 0x1d4) = fVar4;
  fVar8 = -80.0;
  if (fVar4 <= -80.0) {
    uVar5 = 0;
  }
  else {
    uVar5 = _powf(0x41200000,fVar4 / 20.0);
  }
  *(undefined4 *)(param_1 + 0x1d8) = uVar5;
  fVar4 = *(float *)(param_1 + 0x238);
  *(float *)(param_1 + 0x1dc) = fVar4;
  if (fVar4 <= -80.0) {
    uVar5 = 0;
  }
  else {
    uVar5 = _powf(0x41200000,fVar4 / 20.0);
  }
  *(undefined4 *)(param_1 + 0x1e0) = uVar5;
  if (1.0 <= fVar7) {
    fVar6 = -1.0;
  }
  else {
    if (0.0 < fVar7) {
      fVar8 = (float)_log10f(fVar7);
      fVar8 = fVar8 * 20.0;
    }
    fVar6 = ((1.0 - (fVar4 + 100.0) / fVar8) * fVar6) / 1000.0;
  }
  *(float *)(param_1 + 0x224) = fVar6;
  return 0;
}




undefined8 FUN_1005b3d84(long param_1)

{
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_echo.cpp"
                  ,0x158);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  return 0;
}




undefined8 FUN_1005b3dd0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x200);
  if (uVar1 == 0) {
    uVar1 = (int)((float)*(int *)(*(long *)(param_1 + 0x90) + 0x708) *
                  (*(float *)(param_1 + 0x1c8) / 1000.0) + 0.5) + 7U & 0xfffffff8;
    *(uint *)(param_1 + 0x200) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x204) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
    _bzero(*(void **)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 0x1f8));
  }
  return 0;
}




undefined8 FUN_1005b3e44(long param_1)

{
  *(uint *)(param_1 + 0x200) =
       (int)((float)*(int *)(*(long *)(param_1 + 0x90) + 0x708) *
             (*(float *)(param_1 + 0x1c8) / 1000.0) + 0.5) + 7U & 0xfffffff8;
  return 0;
}




undefined8 FUN_1005b3e84(long param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(float *)(param_1 + 0x224) < 0.0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = (uint)(*(float *)(param_1 + 0x224) * (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708))
    ;
    *(uint *)(param_1 + 0x220) = uVar2;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x220);
    if (uVar2 == 0) {
      return 0xb;
    }
  }
  iVar1 = uVar2 - param_3;
  if (uVar2 < param_3 || iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x220) = iVar1;
  return 0;
}




undefined8
FUN_1005b3ee4(float param_1,float param_2,float param_3,undefined8 param_4,ulong *param_5,
             ulong *param_6,long param_7,int *param_8,int *param_9,uint param_10,int *param_11,
             int param_12,uint *param_13,int *param_14)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  ulong *puVar18;
  short *psVar19;
  uint uVar20;
  int iVar21;
  short *psVar22;
  ulong uVar23;
  ulong *puVar24;
  uint uVar25;
  float *pfVar26;
  float *pfVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  short *psVar31;
  float *pfVar32;
  short *psVar33;
  ulong uVar34;
  int iVar35;
  short *psVar36;
  ulong *puVar37;
  short *psVar38;
  short sVar39;
  short sVar41;
  short sVar42;
  short sVar43;
  undefined1 auVar40 [16];
  ulong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar58;
  ulong uVar55;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  
  iVar16 = *param_11;
  uVar20 = *param_13;
  iVar28 = *param_8;
  iVar29 = *param_9;
  iVar30 = *param_14;
  pfVar13 = (float *)*param_6;
  pfVar32 = (float *)*param_5;
  if (uVar20 != 0 && iVar16 != 0) {
    uVar9 = ~param_10;
    iVar1 = param_10 + 1;
    iVar10 = 1 - param_10;
    uVar14 = (ulong)(param_12 - 1);
    uVar2 = uVar14 + 1;
    auVar45 = NEON_fmov(0x3f800000,4);
    auVar46 = NEON_fmov(0xbf800000,4);
    do {
      uVar25 = iVar16 + iVar30;
      uVar8 = uVar25;
      if (param_10 <= uVar25) {
        uVar8 = param_10;
      }
      uVar3 = iVar16 + iVar28;
      uVar5 = uVar3;
      if (param_10 <= uVar3) {
        uVar5 = param_10;
      }
      uVar4 = iVar16 + iVar29;
      uVar6 = uVar4;
      if (param_10 <= uVar4) {
        uVar6 = param_10;
      }
      uVar7 = uVar8 - iVar30;
      if (uVar5 - iVar28 <= uVar8 - iVar30) {
        uVar7 = uVar5 - iVar28;
      }
      uVar8 = uVar6 - iVar29;
      if (uVar20 <= uVar6 - iVar29) {
        uVar8 = uVar20;
      }
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) {
        iVar35 = 0;
        psVar31 = (short *)(param_7 + (ulong)(uint)(iVar30 * param_12) * 2);
        puVar24 = (ulong *)(param_7 + (ulong)(uint)(iVar29 * param_12) * 2);
        psVar33 = (short *)(param_7 + (ulong)(uint)(iVar28 * param_12) * 2);
        uVar8 = uVar9;
        if (uVar9 <= ~uVar25) {
          uVar8 = ~uVar25;
        }
        uVar25 = uVar9;
        if (uVar9 <= ~uVar3) {
          uVar25 = ~uVar3;
        }
        uVar3 = iVar30 + uVar8;
        if (iVar30 + uVar8 <= iVar28 + uVar25) {
          uVar3 = iVar28 + uVar25;
        }
        uVar25 = uVar9;
        if (uVar9 <= ~uVar4) {
          uVar25 = ~uVar4;
        }
        if (uVar3 <= iVar29 + uVar25) {
          uVar3 = iVar29 + uVar25;
        }
        if (uVar3 <= ~uVar20) {
          uVar3 = ~uVar20;
        }
        uVar25 = uVar20;
        do {
          if (0 < param_12) {
            fVar47 = (float)uVar25 * 0.00048828125;
            fVar48 = 1.0 - fVar47;
            uVar34 = uVar2 & 0x1fffffffc;
            pfVar26 = pfVar13;
            pfVar27 = pfVar32;
            psVar36 = psVar31;
            puVar37 = puVar24;
            psVar38 = psVar33;
            if (uVar34 == 0) {
LAB_1005b4234:
              uVar44 = 0;
            }
            else {
              psVar19 = (short *)((long)puVar24 + uVar14 * 2);
              if ((pfVar32 <= pfVar13 + uVar14 && pfVar13 <= pfVar32 + uVar14) ||
                 (puVar24 <= psVar33 + uVar14 && psVar33 <= psVar19)) goto LAB_1005b4234;
              uVar44 = 0;
              if (psVar31 + uVar14 < puVar24 || psVar19 < psVar31) {
                psVar36 = psVar31 + uVar34;
                pfVar27 = pfVar32 + uVar34;
                pfVar26 = pfVar13 + uVar34;
                psVar38 = psVar33 + uVar34;
                puVar37 = (ulong *)((long)puVar24 + uVar34 * 2);
                pfVar15 = pfVar13;
                pfVar17 = pfVar32;
                puVar18 = puVar24;
                psVar19 = psVar33;
                psVar22 = psVar31;
                uVar23 = uVar2 & 0xfffffffffffffffc;
                do {
                  uVar54 = *(undefined8 *)psVar19;
                  auVar56._0_4_ = (int)(short)uVar54;
                  auVar56._4_4_ = (int)(short)((ulong)uVar54 >> 0x10);
                  auVar56._8_4_ = (int)(short)((ulong)uVar54 >> 0x20);
                  auVar56._12_4_ = (int)(short)((ulong)uVar54 >> 0x30);
                  auVar57 = NEON_scvtf(auVar56,4);
                  uVar54 = *(undefined8 *)psVar22;
                  auVar40._0_4_ = (int)(short)uVar54;
                  auVar40._4_4_ = (int)(short)((ulong)uVar54 >> 0x10);
                  auVar40._8_4_ = (int)(short)((ulong)uVar54 >> 0x20);
                  auVar40._12_4_ = (int)(short)((ulong)uVar54 >> 0x30);
                  auVar40 = NEON_scvtf(auVar40,4);
                  fVar53 = (fVar48 * auVar57._0_4_ + fVar47 * auVar40._0_4_) * 3.051851e-05;
                  fVar58 = (fVar48 * auVar57._4_4_ + fVar47 * auVar40._4_4_) * 3.051851e-05;
                  fVar59 = (fVar48 * auVar57._8_4_ + fVar47 * auVar40._8_4_) * 3.051851e-05;
                  fVar60 = (fVar48 * auVar57._12_4_ + fVar47 * auVar40._12_4_) * 3.051851e-05;
                  fVar49 = (float)*(undefined8 *)pfVar15;
                  fVar50 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
                  fVar51 = (float)*(undefined8 *)(pfVar15 + 2);
                  fVar52 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
                  auVar57._0_8_ =
                       CONCAT44(fVar50 * param_2 + fVar58 * param_1,
                                fVar49 * param_2 + fVar53 * param_1);
                  auVar57._8_4_ = fVar51 * param_2 + fVar59 * param_1;
                  auVar57._12_4_ = fVar52 * param_2 + fVar60 * param_1;
                  *(undefined8 *)pfVar17 = auVar57._0_8_;
                  auVar40 = NEON_ext(auVar57,auVar57,8,1);
                  *(long *)(pfVar17 + 2) = auVar40._0_8_;
                  fVar49 = fVar49 + fVar53 * param_3;
                  fVar50 = fVar50 + fVar58 * param_3;
                  fVar51 = fVar51 + fVar59 * param_3;
                  fVar52 = fVar52 + fVar60 * param_3;
                  sVar39 = -(ushort)(fVar49 < auVar46._0_4_);
                  sVar41 = -(ushort)(fVar50 < auVar46._4_4_);
                  sVar42 = -(ushort)(fVar51 < auVar46._8_4_);
                  sVar43 = -(ushort)(fVar52 < auVar46._12_4_);
                  uVar55 = (ulong)CONCAT16(-(auVar45._12_4_ < fVar52),
                                           (uint6)CONCAT14(-(auVar45._8_4_ < fVar51),
                                                           (uint)CONCAT12(-(auVar45._4_4_ < fVar50),
                                                                          -(ushort)(auVar45._0_4_ <
                                                                                   fVar49)))) ^
                           0x1000100010001;
                  uVar44 = ((ulong)CONCAT16((char)sVar43,
                                            (uint6)CONCAT14((char)sVar42,
                                                            (uint)CONCAT12((char)sVar41,sVar39))) ^
                           0x1000100010001) & uVar55;
                  uVar55 = CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar39))) & uVar55;
                  uVar44 = (CONCAT26((short)(int)(fVar52 * 32767.0),
                                     CONCAT24((short)(int)(fVar51 * 32767.0),
                                              CONCAT22((short)(int)(fVar50 * 32767.0),
                                                       (short)(int)(fVar49 * 32767.0)))) ^
                           0x7fff7fff7fff7fff) &
                           CONCAT26((short)((short)(uVar44 >> 0x30) << 0xf) >> 0xf,
                                    CONCAT24((short)((short)(uVar44 >> 0x20) << 0xf) >> 0xf,
                                             CONCAT22((short)((short)(uVar44 >> 0x10) << 0xf) >> 0xf
                                                      ,(short)((short)uVar44 << 0xf) >> 0xf)));
                  uVar23 = uVar23 - 4;
                  pfVar17 = pfVar17 + 4;
                  *puVar18 = uVar44 ^ 0x7fff7fff7fff7fff ^
                             (uVar44 ^ 0xffffffffffffffff) &
                             CONCAT26((short)((short)(uVar55 >> 0x30) << 0xf) >> 0xf,
                                      CONCAT24((short)((short)(uVar55 >> 0x20) << 0xf) >> 0xf,
                                               CONCAT22((short)((short)(uVar55 >> 0x10) << 0xf) >>
                                                        0xf,(short)((short)uVar55 << 0xf) >> 0xf)));
                  pfVar15 = pfVar15 + 4;
                  puVar18 = puVar18 + 1;
                  psVar19 = psVar19 + 4;
                  uVar44 = uVar34;
                  psVar22 = psVar22 + 4;
                } while (uVar23 != 0);
              }
            }
            pfVar32 = pfVar32 + uVar2;
            psVar33 = psVar33 + uVar2;
            if (uVar2 != uVar44) {
              iVar21 = param_12 - (int)uVar44;
              do {
                fVar49 = *pfVar26;
                fVar50 = (fVar48 * (float)(int)*psVar38 + fVar47 * (float)(int)*psVar36) *
                         3.051851e-05;
                *pfVar27 = fVar49 * param_2 + fVar50 * param_1;
                fVar49 = fVar49 + fVar50 * param_3;
                if (fVar49 <= 1.0) {
                  if (-1.0 <= fVar49) {
                    sVar39 = (short)(int)(fVar49 * 32767.0);
                  }
                  else {
                    sVar39 = -0x8000;
                  }
                }
                else {
                  sVar39 = 0x7fff;
                }
                *(short *)puVar37 = sVar39;
                iVar21 = iVar21 + -1;
                pfVar26 = pfVar26 + 1;
                pfVar27 = pfVar27 + 1;
                psVar36 = psVar36 + 1;
                puVar37 = (ulong *)((long)puVar37 + 2);
                psVar38 = psVar38 + 1;
              } while (iVar21 != 0);
            }
            puVar24 = (ulong *)((long)puVar24 + uVar2 * 2);
            psVar31 = psVar31 + uVar2;
            pfVar13 = pfVar13 + uVar2;
          }
          iVar21 = iVar10 + iVar30;
          iVar11 = iVar1 + iVar30;
          do {
            iVar30 = iVar11;
            iVar21 = iVar21 + param_10;
            iVar11 = iVar30 + param_10;
          } while (iVar21 < 0);
          do {
            iVar30 = iVar30 - param_10;
          } while ((int)param_10 <= iVar30);
          iVar21 = iVar10 + iVar28;
          iVar11 = iVar1 + iVar28;
          do {
            iVar28 = iVar11;
            iVar21 = iVar21 + param_10;
            iVar11 = iVar28 + param_10;
          } while (iVar21 < 0);
          do {
            iVar28 = iVar28 - param_10;
          } while ((int)param_10 <= iVar28);
          iVar21 = iVar10 + iVar29;
          iVar11 = iVar1 + iVar29;
          do {
            iVar29 = iVar11;
            iVar21 = iVar21 + param_10;
            iVar11 = iVar29 + param_10;
          } while (iVar21 < 0);
          do {
            iVar29 = iVar29 - param_10;
          } while ((int)param_10 <= iVar29);
          uVar25 = uVar25 - 1;
          bVar12 = iVar35 != -2 - uVar3;
          iVar35 = iVar35 + 1;
        } while (bVar12);
        uVar20 = uVar20 + uVar3 + 1;
      }
      iVar16 = iVar16 - uVar7;
    } while ((uVar20 != 0) && (iVar16 != 0));
  }
  *param_8 = iVar28;
  *param_9 = iVar29;
  *param_14 = iVar30;
  *param_13 = uVar20;
  *param_6 = (ulong)pfVar13;
  *param_5 = (ulong)pfVar32;
  *param_11 = iVar16;
  return 0;
}




undefined8 FUN_1005b43d4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if (*(int *)(param_1 + 0x21c) != param_5) {
    *(int *)(param_1 + 0x21c) = param_5;
    if ((*(int *)(param_1 + 0x180) < param_5) &&
       (uVar2 = FUN_1005b4538(param_1,*(undefined4 *)(param_1 + 0x200)), (int)uVar2 != 0)) {
      return uVar2;
    }
    uVar3 = *(uint *)(param_1 + 0x200);
    if (uVar3 == 0) {
      uVar3 = (int)((float)*(int *)(*(long *)(param_1 + 0x90) + 0x708) *
                    (*(float *)(param_1 + 0x1c8) / 1000.0) + 0.5) + 7U & 0xfffffff8;
      *(uint *)(param_1 + 0x200) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(uint *)(param_1 + 0x204) = uVar3;
    *(undefined4 *)(param_1 + 0x210) = 0;
    if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
      _bzero(*(void **)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 0x1f8));
    }
  }
  if (iVar1 != 0) {
    FUN_1005b3ee4(*(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1d8),
                  *(undefined4 *)(param_1 + 0x1d0));
  }
  if (param_4 != 0) {
    (*DAT_101d919f8)(*(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1d8),
                     *(undefined4 *)(param_1 + 0x1d0),param_3,param_2,
                     *(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x208),
                     *(undefined4 *)(param_1 + 0x204),param_1 + 0x208,param_1 + 0x204,
                     *(undefined4 *)(param_1 + 0x1fc),param_4);
  }
  *(int *)(param_1 + 0x210) = iVar1;
  return 0;
}




undefined8 FUN_1005b4538(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(long *)(param_1 + 0x90) + 0x708);
  if (param_2 == 0) {
    param_2 = (int)((float)iVar5 * (*(float *)(param_1 + 0x1c8) / 1000.0) + 0.5) + 7U & 0xfffffff8;
  }
  *(uint *)(param_1 + 0x200) = param_2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  uVar1 = iVar5 >> 1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (param_2 + uVar1 + 0x7f) / uVar1;
  }
  uVar1 = uVar2 * uVar1 + 7 & 0xfffffff8;
  *(uint *)(param_1 + 0x1fc) = uVar1;
  iVar5 = uVar1 * *(int *)(param_1 + 0x21c);
  *(int *)(param_1 + 0x1f8) = iVar5;
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_echo.cpp"
                  ,0x2de);
    iVar5 = *(int *)(param_1 + 0x1f8);
  }
  *(int *)(param_1 + 0x1f8) = iVar5 * 2;
  lVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar5 * 2 + 0x10,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_echo.cpp"
                        ,0x2e7,0);
  *(long *)(param_1 + 0x1f0) = lVar3;
  *(ulong *)(param_1 + 0x1e8) = lVar3 + 0xfU & 0xfffffffffffffff0;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    uVar4 = 0x26;
  }
  else {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x21c);
  }
  return uVar4;
}




undefined8 FUN_1005b4654(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  short sVar14;
  char cVar15;
  bool bVar16;
  undefined8 uVar17;
  short sVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  short *psVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  short *psVar30;
  short *psVar31;
  int iVar32;
  uint uVar33;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 uVar34;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar35;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar36;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  ulong uVar43;
  float fVar45;
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  ulong uVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  ulong uVar54;
  ulong uVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  
  if (param_2 == 0) {
    iVar26 = *(int *)(param_1 + 0x210);
    fVar41 = *(float *)(param_1 + 0x228);
    bVar16 = true;
    if ((iVar26 == 0) && (bVar16 = false, !NAN(*(float *)(param_1 + 0x1c8)) && !NAN(fVar41))) {
      bVar16 = *(float *)(param_1 + 0x1c8) == fVar41;
    }
    if (!bVar16) {
      *(float *)(param_1 + 0x1c8) = fVar41;
      if (1.0 <= *(float *)(param_1 + 0x1d0)) {
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0x80;
        uVar37 = 0xbf;
      }
      else {
        fVar38 = *(float *)(param_1 + 0x1dc);
        if (*(float *)(param_1 + 0x1d0) <= 0.0) {
          uVar34 = 0;
          uVar35 = 0;
          uVar36 = 0xa0;
          uVar37 = 0xc2;
        }
        else {
          _log10f();
          fVar42 = (float)CONCAT13(extraout_var_07,
                                   CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0))) *
                   20.0;
          uVar34 = SUB41(fVar42,0);
          uVar35 = (undefined1)((uint)fVar42 >> 8);
          uVar36 = (undefined1)((uint)fVar42 >> 0x10);
          uVar37 = (undefined1)((uint)fVar42 >> 0x18);
        }
        fVar38 = ((1.0 - (fVar38 + 100.0) /
                         (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)))) * fVar41)
                 / 1000.0;
        uVar34 = SUB41(fVar38,0);
        uVar35 = (undefined1)((uint)fVar38 >> 8);
        uVar36 = (undefined1)((uint)fVar38 >> 0x10);
        uVar37 = (undefined1)((uint)fVar38 >> 0x18);
      }
      *(uint *)(param_1 + 0x224) = CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
      if (*(int *)(param_1 + 0x21c) == *(int *)(param_1 + 0x180)) {
        uVar28 = (int)((float)*(int *)(*(long *)(param_1 + 0x90) + 0x708) * (fVar41 / 1000.0) + 0.5)
                 + 7U & 0xfffffff8;
        *(uint *)(param_1 + 0x200) = uVar28;
        uVar9 = *(uint *)(param_1 + 0x1fc);
        if (uVar9 < uVar28 + 0x80) {
          if (uVar9 == 0) {
            iVar26 = 0;
          }
          else {
            iVar26 = *(int *)(param_1 + 0x204) - *(int *)(param_1 + 0x208);
            do {
              iVar26 = iVar26 + uVar9;
            } while ((int)(iVar26 - uVar9) < 0);
            do {
              iVar26 = iVar26 - uVar9;
            } while ((int)uVar9 <= iVar26);
          }
          lVar7 = *(long *)(param_1 + 0x1e8);
          lVar8 = *(long *)(param_1 + 0x1f0);
          uVar28 = *(uint *)(param_1 + 0x1f8);
          *(undefined8 *)(param_1 + 0x1f0) = 0;
          uVar17 = FUN_1005b4538(param_1);
          if ((int)uVar17 != 0) {
            return uVar17;
          }
          if (lVar8 == 0) {
            iVar23 = 0;
            *(undefined4 *)(param_1 + 0x208) = 0;
            *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x200);
            iVar32 = 0;
            if (iVar26 != 0) {
              iVar32 = *(int *)(param_1 + 0x200) - iVar26;
            }
            *(int *)(param_1 + 0x20c) = iVar32;
          }
          else {
            iVar10 = *(int *)(param_1 + 0x200);
            iVar25 = *(int *)(param_1 + 0x1fc);
            iVar23 = (iVar10 - uVar9) - iVar25;
            do {
              iVar23 = iVar23 + iVar25;
            } while (iVar23 < 0);
            iVar32 = 0;
            if (iVar26 != 0) {
              iVar32 = iVar10 - iVar26;
            }
            iVar23 = iVar23 + iVar25;
            do {
              iVar23 = iVar23 - iVar25;
            } while (iVar25 <= iVar23);
            psVar22 = *(short **)(param_1 + 0x1e8);
            iVar26 = *(int *)(param_1 + 0x21c);
            if (uVar28 != 0) {
              iVar25 = iVar23 * iVar26 * 2;
              uVar9 = *(uint *)(param_1 + 0x1f8);
              uVar11 = ~uVar28;
              uVar12 = ~uVar9;
              uVar33 = uVar28;
              iVar26 = *(int *)(param_1 + 0x204) * iVar26 * 2;
              do {
                uVar2 = uVar33 + iVar26;
                uVar6 = uVar2;
                if ((int)uVar28 <= (int)uVar2) {
                  uVar6 = uVar28;
                }
                uVar3 = uVar33 + iVar25;
                uVar5 = uVar3;
                if ((int)uVar9 <= (int)uVar3) {
                  uVar5 = uVar9;
                }
                iVar29 = uVar6 - iVar26;
                if ((int)(uVar5 - iVar25) <= (int)(uVar6 - iVar26)) {
                  iVar29 = uVar5 - iVar25;
                }
                _memcpy((void *)((long)psVar22 + (long)iVar25),(void *)(lVar7 + iVar26),(long)iVar29
                       );
                uVar6 = uVar11;
                if ((int)uVar11 <= (int)~uVar2) {
                  uVar6 = ~uVar2;
                }
                iVar4 = iVar26 + uVar6;
                uVar2 = uVar12;
                if ((int)uVar12 <= (int)~uVar3) {
                  uVar2 = ~uVar3;
                }
                iVar24 = iVar25 + uVar2;
                iVar27 = iVar4;
                if (iVar4 <= iVar24) {
                  iVar27 = iVar24;
                }
                iVar27 = (uVar11 + iVar26) - iVar27;
                if (iVar24 <= iVar4) {
                  iVar24 = iVar4;
                }
                iVar4 = ((uVar28 - 1) + iVar26) - iVar24;
                do {
                  iVar24 = iVar4;
                  iVar27 = iVar27 + uVar28;
                  iVar4 = iVar24 + uVar28;
                } while (iVar27 < 0);
                do {
                  iVar24 = iVar24 - uVar28;
                } while ((int)uVar28 <= iVar24);
                uVar2 = uVar11;
                if ((int)uVar11 <= (int)~(uVar33 + iVar26)) {
                  uVar2 = ~(uVar33 + iVar26);
                }
                iVar26 = iVar26 + uVar2;
                uVar2 = uVar12;
                if ((int)uVar12 <= (int)~(uVar33 + iVar25)) {
                  uVar2 = ~(uVar33 + iVar25);
                }
                iVar4 = iVar25 + uVar2;
                iVar27 = iVar26;
                if (iVar26 <= iVar4) {
                  iVar27 = iVar4;
                }
                iVar27 = (uVar12 + iVar25) - iVar27;
                if (iVar4 <= iVar26) {
                  iVar4 = iVar26;
                }
                iVar26 = ((uVar9 - 1) + iVar25) - iVar4;
                do {
                  iVar25 = iVar26;
                  iVar27 = iVar27 + uVar9;
                  iVar26 = iVar25 + uVar9;
                } while (iVar27 < 0);
                do {
                  iVar25 = iVar25 - uVar9;
                } while ((int)uVar9 <= iVar25);
                uVar33 = uVar33 - iVar29;
                iVar26 = iVar24;
              } while (uVar33 != 0);
              psVar22 = *(short **)(param_1 + 0x1e8);
              iVar26 = *(int *)(param_1 + 0x21c);
              iVar25 = *(int *)(param_1 + 0x1fc);
            }
            uVar1 = (ulong)(iVar26 - 1) + 1;
            iVar29 = 0x80;
            fVar41 = 0.007751938;
            auVar39 = NEON_fmov(0x3f800000,4);
            auVar40 = NEON_fmov(0xbf800000,4);
            psVar30 = psVar22 + iVar26 * iVar23;
            do {
              iVar4 = iVar29 + iVar23;
              if (iVar25 <= iVar29 + iVar23) {
                iVar4 = iVar25;
              }
              iVar4 = iVar4 - iVar23;
              iVar23 = iVar4;
              while (iVar23 != 0) {
                iVar23 = iVar23 + -1;
                if (0 < iVar26) {
                  fVar38 = fVar41 * 3.051851e-05;
                  uVar19 = uVar1 & 0x1fffffff8;
                  if (uVar19 == 0) {
                    uVar19 = 0;
                    psVar31 = psVar30;
                  }
                  else {
                    psVar31 = psVar30 + uVar19;
                    puVar20 = (ulong *)(psVar30 + 4);
                    uVar21 = uVar1 & 0xfffffffffffffff8;
                    do {
                      uVar43 = puVar20[-1];
                      uVar49 = *puVar20;
                      auVar44._0_4_ = (int)(short)uVar43;
                      auVar44._4_4_ = (int)(short)(uVar43 >> 0x10);
                      auVar44._8_4_ = (int)(short)(uVar43 >> 0x20);
                      auVar44._12_4_ = (int)(short)(uVar43 >> 0x30);
                      auVar44 = NEON_scvtf(auVar44,4);
                      auVar50._0_4_ = (int)(short)uVar49;
                      auVar50._4_4_ = (int)(short)(uVar49 >> 0x10);
                      auVar50._8_4_ = (int)(short)(uVar49 >> 0x20);
                      auVar50._12_4_ = (int)(short)(uVar49 >> 0x30);
                      auVar50 = NEON_scvtf(auVar50,4);
                      fVar42 = fVar38 * auVar44._0_4_;
                      fVar45 = fVar38 * auVar44._4_4_;
                      fVar46 = fVar38 * auVar44._8_4_;
                      fVar47 = fVar38 * auVar44._12_4_;
                      fVar48 = fVar38 * auVar50._0_4_;
                      fVar51 = fVar38 * auVar50._4_4_;
                      fVar52 = fVar38 * auVar50._8_4_;
                      fVar53 = fVar38 * auVar50._12_4_;
                      sVar18 = -(ushort)(fVar42 < auVar40._0_4_);
                      cVar13 = -(fVar45 < auVar40._4_4_);
                      cVar56 = -(fVar46 < auVar40._8_4_);
                      cVar57 = -(fVar47 < auVar40._12_4_);
                      sVar14 = -(ushort)(fVar48 < auVar40._0_4_);
                      cVar15 = -(fVar51 < auVar40._4_4_);
                      cVar58 = -(fVar52 < auVar40._8_4_);
                      cVar59 = -(fVar53 < auVar40._12_4_);
                      uVar54 = (ulong)CONCAT16(-(auVar39._12_4_ < fVar47),
                                               (uint6)CONCAT14(-(auVar39._8_4_ < fVar46),
                                                               (uint)CONCAT12(-(auVar39._4_4_ <
                                                                               fVar45),-(ushort)(
                                                  auVar39._0_4_ < fVar42)))) ^ 0x1000100010001;
                      uVar55 = (ulong)CONCAT16(-(auVar39._12_4_ < fVar53),
                                               (uint6)CONCAT14(-(auVar39._8_4_ < fVar52),
                                                               (uint)CONCAT12(-(auVar39._4_4_ <
                                                                               fVar51),-(ushort)(
                                                  auVar39._0_4_ < fVar48)))) ^ 0x1000100010001;
                      uVar43 = ((ulong)CONCAT16(cVar57,(uint6)CONCAT14(cVar56,(uint)CONCAT12(cVar13,
                                                  sVar18))) ^ 0x1000100010001) & uVar54;
                      uVar49 = ((ulong)CONCAT16(cVar59,(uint6)CONCAT14(cVar58,(uint)CONCAT12(cVar15,
                                                  sVar14))) ^ 0x1000100010001) & uVar55;
                      uVar54 = CONCAT16(cVar57,(uint6)CONCAT14(cVar56,(uint)CONCAT12(cVar13,sVar18))
                                       ) & uVar54;
                      uVar55 = CONCAT16(cVar59,(uint6)CONCAT14(cVar58,(uint)CONCAT12(cVar15,sVar14))
                                       ) & uVar55;
                      uVar43 = (CONCAT26((short)(int)(fVar47 * 32767.0),
                                         CONCAT24((short)(int)(fVar46 * 32767.0),
                                                  CONCAT22((short)(int)(fVar45 * 32767.0),
                                                           (short)(int)(fVar42 * 32767.0)))) ^
                               0x7fff7fff7fff7fff) &
                               CONCAT26((short)((short)(uVar43 >> 0x30) << 0xf) >> 0xf,
                                        CONCAT24((short)((short)(uVar43 >> 0x20) << 0xf) >> 0xf,
                                                 CONCAT22((short)((short)(uVar43 >> 0x10) << 0xf) >>
                                                          0xf,(short)((short)uVar43 << 0xf) >> 0xf))
                                       );
                      uVar49 = (CONCAT26((short)(int)(fVar53 * 32767.0),
                                         CONCAT24((short)(int)(fVar52 * 32767.0),
                                                  CONCAT22((short)(int)(fVar51 * 32767.0),
                                                           (short)(int)(fVar48 * 32767.0)))) ^
                               0x7fff7fff7fff7fff) &
                               CONCAT26((short)((short)(uVar49 >> 0x30) << 0xf) >> 0xf,
                                        CONCAT24((short)((short)(uVar49 >> 0x20) << 0xf) >> 0xf,
                                                 CONCAT22((short)((short)(uVar49 >> 0x10) << 0xf) >>
                                                          0xf,(short)((short)uVar49 << 0xf) >> 0xf))
                                       );
                      puVar20[-1] = uVar43 ^ 0x7fff7fff7fff7fff ^
                                    (uVar43 ^ 0xffffffffffffffff) &
                                    CONCAT26((short)((short)(uVar54 >> 0x30) << 0xf) >> 0xf,
                                             CONCAT24((short)((short)(uVar54 >> 0x20) << 0xf) >> 0xf
                                                      ,CONCAT22((short)((short)(uVar54 >> 0x10) <<
                                                                       0xf) >> 0xf,
                                                                (short)((short)uVar54 << 0xf) >> 0xf
                                                               )));
                      *puVar20 = uVar49 ^ 0x7fff7fff7fff7fff ^
                                 (uVar49 ^ 0xffffffffffffffff) &
                                 CONCAT26((short)((short)(uVar55 >> 0x30) << 0xf) >> 0xf,
                                          CONCAT24((short)((short)(uVar55 >> 0x20) << 0xf) >> 0xf,
                                                   CONCAT22((short)((short)(uVar55 >> 0x10) << 0xf)
                                                            >> 0xf,(short)((short)uVar55 << 0xf) >>
                                                                   0xf)));
                      uVar21 = uVar21 - 8;
                      puVar20 = puVar20 + 2;
                    } while (uVar21 != 0);
                  }
                  if ((ulong)(iVar26 - 1) + 1 != uVar19) {
                    iVar24 = iVar26 - (int)uVar19;
                    do {
                      fVar42 = fVar38 * (float)(int)*psVar31;
                      if (fVar42 <= 1.0) {
                        if (-1.0 <= fVar42) {
                          sVar18 = (short)(int)(fVar42 * 32767.0);
                        }
                        else {
                          sVar18 = -0x8000;
                        }
                      }
                      else {
                        sVar18 = 0x7fff;
                      }
                      *psVar31 = sVar18;
                      iVar24 = iVar24 + -1;
                      psVar31 = psVar31 + 1;
                    } while (iVar24 != 0);
                  }
                  psVar30 = psVar30 + uVar1;
                }
                fVar41 = fVar41 + 0.007751938;
              }
              iVar23 = 0;
              iVar29 = iVar29 - iVar4;
              psVar30 = psVar22;
            } while (iVar29 != 0);
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar8,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_echo.cpp"
                          ,0x34b);
            iVar23 = 0;
            *(undefined4 *)(param_1 + 0x208) = 0;
            *(int *)(param_1 + 0x204) = iVar10;
            *(int *)(param_1 + 0x20c) = iVar32;
          }
        }
        else {
          iVar32 = *(int *)(param_1 + 0x208);
          *(int *)(param_1 + 0x20c) = iVar32;
          iVar23 = *(int *)(param_1 + 0x204) - uVar28;
          do {
            iVar23 = iVar23 + uVar9;
          } while ((int)(iVar23 - uVar9) < 0);
          do {
            iVar23 = iVar23 - uVar9;
          } while ((int)uVar9 <= iVar23);
          *(int *)(param_1 + 0x208) = iVar23;
        }
        iVar26 = 0;
        if (iVar32 != iVar23) {
          iVar26 = 0x800;
        }
      }
      else {
        iVar26 = 0;
      }
    }
    if ((*(int *)(param_1 + 0x21c) != *(int *)(param_1 + 0x180)) ||
       (*(long *)(param_1 + 0x1e8) == 0)) {
      *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x180);
      uVar17 = FUN_1005b4538(param_1,*(undefined4 *)(param_1 + 0x200));
      if ((int)uVar17 != 0) {
        return uVar17;
      }
      uVar28 = *(uint *)(param_1 + 0x200);
      if (uVar28 == 0) {
        uVar28 = (int)((float)*(int *)(*(long *)(param_1 + 0x90) + 0x708) *
                       (*(float *)(param_1 + 0x1c8) / 1000.0) + 0.5) + 7U & 0xfffffff8;
        *(uint *)(param_1 + 0x200) = uVar28;
      }
      iVar26 = 0;
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(uint *)(param_1 + 0x204) = uVar28;
      *(undefined4 *)(param_1 + 0x210) = 0;
      if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
        _bzero(*(void **)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 0x1f8));
        iVar26 = 0;
      }
    }
    *(int *)(param_1 + 0x210) = iVar26;
  }
  else if (param_2 == 1) {
    fVar41 = *(float *)(param_1 + 0x22c);
    if (*(float *)(param_1 + 0x1cc) != fVar41) {
      *(float *)(param_1 + 0x1cc) = fVar41;
      fVar41 = fVar41 / 100.0;
      *(float *)(param_1 + 0x1d0) = fVar41;
      if (1.0 <= fVar41) {
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0x80;
        uVar37 = 0xbf;
      }
      else {
        fVar38 = *(float *)(param_1 + 0x1dc);
        if (fVar41 <= 0.0) {
          uVar34 = 0;
          uVar35 = 0;
          uVar36 = 0xa0;
          uVar37 = 0xc2;
        }
        else {
          _log10f();
          fVar41 = (float)CONCAT13(extraout_var_08,
                                   CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00)
                                           )) * 20.0;
          uVar34 = SUB41(fVar41,0);
          uVar35 = (undefined1)((uint)fVar41 >> 8);
          uVar36 = (undefined1)((uint)fVar41 >> 0x10);
          uVar37 = (undefined1)((uint)fVar41 >> 0x18);
        }
        fVar41 = ((1.0 - (fVar38 + 100.0) /
                         (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)))) *
                 *(float *)(param_1 + 0x1c8)) / 1000.0;
        uVar34 = SUB41(fVar41,0);
        uVar35 = (undefined1)((uint)fVar41 >> 8);
        uVar36 = (undefined1)((uint)fVar41 >> 0x10);
        uVar37 = (undefined1)((uint)fVar41 >> 0x18);
      }
      *(uint *)(param_1 + 0x224) = CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
    }
    fVar41 = *(float *)(param_1 + 0x234);
    if (*(float *)(param_1 + 0x1d4) != fVar41) {
      *(float *)(param_1 + 0x1d4) = fVar41;
      if (fVar41 <= -80.0) {
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
      }
      else {
        _powf(0,fVar41 / 20.0);
        uVar34 = extraout_b0_01;
        uVar35 = extraout_var_01;
        uVar36 = extraout_var_05;
        uVar37 = extraout_var_09;
      }
      *(uint *)(param_1 + 0x1d8) = CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
    }
    fVar41 = *(float *)(param_1 + 0x238);
    if (*(float *)(param_1 + 0x1dc) != fVar41) {
      *(float *)(param_1 + 0x1dc) = fVar41;
      if (fVar41 <= -80.0) {
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
      }
      else {
        _powf(0,fVar41 / 20.0);
        uVar34 = extraout_b0_02;
        uVar35 = extraout_var_02;
        uVar36 = extraout_var_06;
        uVar37 = extraout_var_10;
      }
      *(uint *)(param_1 + 0x1e0) = CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
    }
  }
  return 0;
}




undefined8 FUN_1005b4ddc(undefined4 param_1,long param_2,undefined4 param_3)

{
  undefined4 local_38 [2];
  long local_30;
  
  switch(param_3) {
  case 0:
    *(undefined4 *)(param_2 + 0x228) = param_1;
    break;
  case 1:
    *(undefined4 *)(param_2 + 0x22c) = param_1;
    break;
  case 2:
    *(undefined4 *)(param_2 + 0x234) = param_1;
    break;
  case 3:
    *(undefined4 *)(param_2 + 0x238) = param_1;
    break;
  default:
    return 0x1f;
  }
  local_38[0] = 8;
  local_30 = param_2;
  FUN_10056be4c(*(undefined8 *)(param_2 + 0x90),local_38,1);
  return 0;
}




undefined8 FUN_1005b4e68(long param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    *param_3 = *(undefined4 *)(param_1 + 0x228);
    if (param_4 == (char *)0x0) {
      return 0;
    }
    pcVar1 = "%.02f";
    goto LAB_1005b4f00;
  case 1:
    *param_3 = *(undefined4 *)(param_1 + 0x22c);
    if (param_4 == (char *)0x0) {
      return 0;
    }
    goto LAB_1005b4ef0;
  case 2:
    *param_3 = *(undefined4 *)(param_1 + 0x234);
    break;
  case 3:
    *param_3 = *(undefined4 *)(param_1 + 0x238);
    break;
  default:
    goto switchD_1005b4e90_default;
  }
  if (param_4 != (char *)0x0) {
LAB_1005b4ef0:
    pcVar1 = "%.1f";
LAB_1005b4f00:
    _sprintf(param_4,pcVar1);
  }
switchD_1005b4e90_default:
  return 0;
}




void FUN_1005b4f28(undefined8 *param_1)

{
  FUN_1005b3c1c(*param_1);
  return;
}




undefined8 FUN_1005b4f30(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_echo.cpp"
                  ,0x158);
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
  }
  return 0;
}




undefined8 FUN_1005b4f7c(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(uint *)(lVar1 + 0x200);
  if (uVar2 == 0) {
    uVar2 = (int)((float)*(int *)(*(long *)(lVar1 + 0x90) + 0x708) *
                  (*(float *)(lVar1 + 0x1c8) / 1000.0) + 0.5) + 7U & 0xfffffff8;
    *(uint *)(lVar1 + 0x200) = uVar2;
  }
  *(undefined4 *)(lVar1 + 0x208) = 0;
  *(uint *)(lVar1 + 0x204) = uVar2;
  *(undefined4 *)(lVar1 + 0x210) = 0;
  if (*(void **)(lVar1 + 0x1e8) != (void *)0x0) {
    _bzero(*(void **)(lVar1 + 0x1e8),(ulong)*(uint *)(lVar1 + 0x1f8));
  }
  return 0;
}




undefined8 FUN_1005b4ff0(long *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(float *)(lVar3 + 0x224) < 0.0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = (uint)(*(float *)(lVar3 + 0x224) * (float)*(int *)(*(long *)(lVar3 + 0x90) + 0x708));
    *(uint *)(lVar3 + 0x220) = uVar2;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x220);
    if (uVar2 == 0) {
      return 0xb;
    }
  }
  iVar1 = uVar2 - param_3;
  if (uVar2 < param_3 || iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)(lVar3 + 0x220) = iVar1;
  return 0;
}




void FUN_1005b5054(undefined8 *param_1)

{
  FUN_1005b43d4(*param_1);
  return;
}




undefined8 FUN_1005b505c(undefined4 param_1,long *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  long local_30;
  
  if (param_3 < 4) {
    local_30 = *param_2;
    switch(param_3) {
    case 0:
      *(undefined4 *)(local_30 + 0x228) = param_1;
      break;
    case 1:
      *(undefined4 *)(local_30 + 0x22c) = param_1;
      break;
    case 2:
      *(undefined4 *)(local_30 + 0x234) = param_1;
      break;
    case 3:
      *(undefined4 *)(local_30 + 0x238) = param_1;
    }
    local_38[0] = 8;
    FUN_10056be4c(*(undefined8 *)(local_30 + 0x90),local_38,1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8 FUN_1005b50ec(undefined8 *param_1)

{
  FUN_1005b4e68(*param_1);
  return 0;
}




void FUN_1005b5108(void)

{
  _memset(&DAT_101e99d10,0,0x60);
  DAT_101e99d10 = 1;
  FUN_1005ecc98(&DAT_101e99d14,"Size",0x10);
  FUN_1005ecc98(&DAT_101e99d24,"",0x10);
  DAT_101e99d40 = 0x80;
  DAT_101e99d38 = "FFT Window size. 128, 256, 512, 1024, 2048, 4096, 8192, 16384.  Default = ";
  DAT_101e99d44 = 0x4000;
  DAT_101e99d48 = 0x800;
  DAT_101e99d4c = 0;
  DAT_101e99d50 = 0;
  _memset(&DAT_101e99d70,0,0x60);
  DAT_101e99d70 = 1;
  FUN_1005ecc98(&DAT_101e99d74,"Type",0x10);
  FUN_1005ecc98(&DAT_101e99d84,"",0x10);
  DAT_101e99da0 = 0;
  DAT_101e99d98 =
       "FFT window shape. 0 = rect, 1 = tri, 2 = hamming, 3 = hanning, 4 = blackman, 5 = blackman harris.  Default = 2."
  ;
  DAT_101e99da4 = 5;
  DAT_101e99da8 = 2;
  DAT_101e99dac = 0;
  DAT_101e99db0 = 0;
  _memset(&DAT_101e99dd0,0,0x60);
  DAT_101e99dd0 = 3;
  FUN_1005ecc98(&DAT_101e99dd4,"Spectrum Data",0x10);
  FUN_1005ecc98(&DAT_101e99de4,"",0x10);
  DAT_101e99df8 = "Spectrum data";
  DAT_101e99e00 = 0xfffffffc;
  _memset(&DAT_101e99e30,0,0x60);
  FUN_1005ecc98(&DAT_101e99e34,"Dominant Freq",0x10);
  FUN_1005ecc98(&DAT_101e99e44,"",0x10);
  DAT_101e99e60 = 0;
  DAT_101e99e70 = 1;
  DAT_101e99e64 = 0x40a00000;
  DAT_101e99e68 = 0x40000000;
  DAT_101e99e58 = "Dominant frequency.";
  DAT_101e99e90 = &DAT_10186c6a8;
  DAT_101e99ea8 = 0x1d;
  DAT_101e99ea0 = 0x8488;
  return;
}




undefined8 FUN_1005b52dc(long param_1,uint param_2)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0 < (int)param_2) {
    iVar12 = 0;
    iVar13 = 1 << (ulong)(param_2 & 0x1f);
    fVar15 = (float)iVar13;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 1;
    }
    uVar2 = iVar13 >> 1;
    iVar13 = 1;
    do {
      if (0 < iVar13) {
        iVar14 = 0;
        uVar5 = 0;
        uVar6 = uVar2;
        do {
          uVar8 = 0;
          uVar9 = 0;
          iVar4 = (int)uVar5;
          uVar10 = param_2;
          if (uVar2 != 0) {
            uVar9 = iVar4 / (int)uVar2;
          }
          do {
            uVar10 = uVar10 - 1;
            uVar8 = uVar8 << 1 | uVar9 & 1;
            uVar9 = uVar9 >> 1;
          } while (uVar10 != 0);
          fVar17 = (1.0 / fVar15) * (float)(int)uVar8;
          uVar9 = (uint)(fVar17 * 32768.0);
          uVar8 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          uVar9 = uVar8 >> 0xd & 3;
          if (uVar9 < 4) {
            uVar8 = uVar8 & 0x7fff;
            switch(uVar9) {
            case 1:
              fVar16 = -*(float *)(param_1 + (long)(int)(0x3fff - uVar8) * 4 + 0x47c);
              break;
            case 2:
              fVar16 = -*(float *)(param_1 + (long)(int)uVar8 * 4 + -0xfb84);
              break;
            case 3:
              uVar8 = uVar8 ^ 0x7fff;
            case 0:
              fVar16 = *(float *)(param_1 + (ulong)uVar8 * 4 + 0x47c);
            }
          }
          else {
            fVar16 = 0.0;
          }
          uVar9 = (uint)((fVar17 + -0.25) * 32768.0);
          uVar8 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          uVar9 = uVar8 >> 0xd & 3;
          if (uVar9 < 4) {
            uVar8 = uVar8 & 0x7fff;
            switch(uVar9) {
            case 1:
              fVar17 = -*(float *)(param_1 + (long)(int)(0x3fff - uVar8) * 4 + 0x47c);
              break;
            case 2:
              fVar17 = -*(float *)(param_1 + (long)(int)uVar8 * 4 + -0xfb84);
              break;
            case 3:
              uVar8 = uVar8 ^ 0x7fff;
            case 0:
              fVar17 = *(float *)(param_1 + (ulong)uVar8 * 4 + 0x47c);
            }
          }
          else {
            fVar17 = 0.0;
          }
          if (iVar4 < (int)uVar6) {
            uVar8 = 0;
            lVar11 = *(long *)(param_1 + 0x1c8);
            pfVar7 = (float *)(lVar11 + (-(uVar5 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1) * 4 + 4
                              );
            do {
              fVar18 = pfVar7[-1];
              fVar19 = *pfVar7;
              pfVar1 = (float *)(lVar11 + (ulong)(uVar2 + iVar4 + uVar8) * 8);
              fVar21 = fVar16 * *pfVar1 - pfVar1[1] * -fVar17;
              fVar20 = *pfVar1 * -fVar17 + fVar16 * pfVar1[1];
              pfVar7[-1] = fVar18 + fVar21;
              *pfVar7 = fVar19 + fVar20;
              *pfVar1 = fVar18 - fVar21;
              pfVar1[1] = fVar19 - fVar20;
              uVar8 = uVar8 + 1;
              pfVar7 = pfVar7 + 2;
            } while (uVar2 != uVar8);
          }
          uVar5 = (ulong)(iVar4 + uVar2 * 2);
          uVar6 = uVar6 + uVar2 * 2;
          bVar3 = iVar14 != iVar13 + -1;
          iVar14 = iVar14 + 1;
        } while (bVar3);
      }
      uVar2 = uVar2 >> 1;
      iVar13 = iVar13 << 1;
      bVar3 = iVar12 != param_2 - 1;
      iVar12 = iVar12 + 1;
    } while (bVar3);
  }
  return 0;
}




float FUN_1005b5500(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1 + -1.0;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  return 1.0 - fVar1;
}




float FUN_1005b5524(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = (uint)(param_1 * 32768.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 >> 0xd & 3;
  if (uVar1 < 4) {
    uVar2 = uVar2 & 0x7fff;
    switch(uVar1) {
    case 1:
      fVar3 = -*(float *)(param_2 + (long)(int)(0x3fff - uVar2) * 4 + 0x47c);
      break;
    case 2:
      fVar3 = -*(float *)(param_2 + (long)(int)uVar2 * 4 + -0xfb84);
      break;
    case 3:
      uVar2 = uVar2 ^ 0x7fff;
    case 0:
      fVar3 = *(float *)(param_2 + (ulong)uVar2 * 4 + 0x47c);
    }
  }
  else {
    fVar3 = 0.0;
  }
  return fVar3 * -0.46 + 0.54;
}




float FUN_1005b55c0(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = (uint)(param_1 * 32768.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 >> 0xd & 3;
  if (uVar1 < 4) {
    uVar2 = uVar2 & 0x7fff;
    switch(uVar1) {
    case 1:
      fVar3 = -*(float *)(param_2 + (long)(int)(0x3fff - uVar2) * 4 + 0x47c);
      break;
    case 2:
      fVar3 = -*(float *)(param_2 + (long)(int)uVar2 * 4 + -0xfb84);
      break;
    case 3:
      uVar2 = uVar2 ^ 0x7fff;
    case 0:
      fVar3 = *(float *)(param_2 + (ulong)uVar2 * 4 + 0x47c);
    }
  }
  else {
    fVar3 = 0.0;
  }
  return (1.0 - fVar3) * 0.5;
}




float FUN_1005b5654(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = (uint)(param_1 * 32768.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 >> 0xd & 3;
  if (uVar1 < 4) {
    uVar2 = uVar2 & 0x7fff;
    switch(uVar1) {
    case 1:
      fVar4 = -*(float *)(param_2 + (long)(int)(0x3fff - uVar2) * 4 + 0x47c);
      break;
    case 2:
      fVar4 = -*(float *)(param_2 + (long)(int)uVar2 * 4 + -0xfb84);
      break;
    case 3:
      uVar2 = uVar2 ^ 0x7fff;
    case 0:
      fVar4 = *(float *)(param_2 + (ulong)uVar2 * 4 + 0x47c);
    }
  }
  else {
    fVar4 = 0.0;
  }
  uVar1 = (uint)((param_1 + param_1) * 32768.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 >> 0xd & 3;
  if (uVar1 < 4) {
    uVar2 = uVar2 & 0x7fff;
    switch(uVar1) {
    case 1:
      fVar3 = -*(float *)(param_2 + (long)(int)(0x3fff - uVar2) * 4 + 0x47c);
      break;
    case 2:
      fVar3 = -*(float *)(param_2 + (long)(int)uVar2 * 4 + -0xfb84);
      break;
    case 3:
      uVar2 = uVar2 ^ 0x7fff;
    case 0:
      fVar3 = *(float *)(param_2 + (ulong)uVar2 * 4 + 0x47c);
    }
  }
  else {
    fVar3 = 0.0;
  }
  return fVar4 * -0.5 + 0.42 + fVar3 * 0.08;
}




float FUN_1005b5780(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = (uint)(param_1 * 32768.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 >> 0xd & 3;
  if (uVar1 < 4) {
    uVar2 = uVar2 & 0x7fff;
    switch(uVar1) {
    case 1:
      fVar4 = -*(float *)(param_2 + (long)(int)(0x3fff - uVar2) * 4 + 0x47c);
      break;
    case 2:
      fVar4 = -*(float *)(param_2 + (long)(int)uVar2 * 4 + -0xfb84);
      break;
    case 3:
      uVar2 = uVar2 ^ 0x7fff;
    case 0:
      fVar4 = *(float *)(param_2 + (ulong)uVar2 * 4 + 0x47c);
    }
  }
  else {
    fVar4 = 0.0;
  }
  uVar1 = (uint)((param_1 + param_1) * 32768.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 >> 0xd & 3;
  if (uVar1 < 4) {
    uVar2 = uVar2 & 0x7fff;
    switch(uVar1) {
    case 1:
      fVar5 = -*(float *)(param_2 + (long)(int)(0x3fff - uVar2) * 4 + 0x47c);
      break;
    case 2:
      fVar5 = -*(float *)(param_2 + (long)(int)uVar2 * 4 + -0xfb84);
      break;
    case 3:
      uVar2 = uVar2 ^ 0x7fff;
    case 0:
      fVar5 = *(float *)(param_2 + (ulong)uVar2 * 4 + 0x47c);
    }
  }
  else {
    fVar5 = 0.0;
  }
  uVar1 = (uint)(param_1 * 3.0 * 32768.0);
  uVar2 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 >> 0xd & 3;
  if (uVar1 < 4) {
    uVar2 = uVar2 & 0x7fff;
    switch(uVar1) {
    case 1:
      fVar3 = -*(float *)(param_2 + (long)(int)(0x3fff - uVar2) * 4 + 0x47c);
      break;
    case 2:
      fVar3 = -*(float *)(param_2 + (long)(int)uVar2 * 4 + -0xfb84);
      break;
    case 3:
      uVar2 = uVar2 ^ 0x7fff;
    case 0:
      fVar3 = *(float *)(param_2 + (ulong)uVar2 * 4 + 0x47c);
    }
  }
  else {
    fVar3 = 0.0;
  }
  return fVar4 * -0.48829 + 0.35875 + fVar5 * 0.14128 + fVar3 * -0.01168;
}




undefined1  [16] FUN_1005b5948(void)

{
  return ZEXT816(0x3f800000);
}




undefined8
FUN_1005b5950(long param_1,long param_2,uint param_3,uint param_4,long param_5,int param_6,
             ulong param_7,int param_8,float *param_9)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar4 = 0;
  for (iVar9 = param_6; 1 < iVar9; iVar9 = iVar9 >> 1) {
    iVar4 = iVar4 + 1;
  }
  if (param_6 != 0) {
    pfVar10 = *(float **)(param_1 + 0x1c8);
    uVar6 = ~param_4;
    fVar15 = 0.0;
    iVar9 = param_6;
    do {
      uVar12 = param_3 + iVar9;
      iVar7 = param_4 - param_3;
      if (uVar12 <= param_4) {
        iVar7 = iVar9;
      }
      if (0 < iVar7) {
        pcVar13 = (code *)(&PTR_FUN_1014a2870)[param_7 & 0xffffffff];
        uVar1 = uVar6;
        if (uVar6 <= ~uVar12) {
          uVar1 = ~uVar12;
        }
        uVar2 = uVar6;
        if (uVar6 <= ~uVar12) {
          uVar2 = ~uVar12;
        }
        pfVar11 = pfVar10;
        uVar12 = param_3;
        do {
          fVar16 = *(float *)(param_2 + (ulong)uVar12 * 4);
          fVar14 = (float)(*pcVar13)(fVar15,param_1);
          *pfVar11 = (1.0 / (float)param_6) * fVar16 * fVar14;
          pfVar11[1] = 1e-08;
          fVar15 = 1.0 / (float)param_6 + fVar15;
          uVar12 = uVar12 + 1;
          pfVar11 = pfVar11 + 2;
        } while (~uVar2 != uVar12);
        pfVar10 = pfVar10 + (ulong)((-2 - param_3) - uVar1) * 2 + 2;
      }
      uVar12 = iVar7 + param_3;
      param_3 = 0;
      if (uVar12 < param_4) {
        param_3 = uVar12;
      }
      iVar9 = iVar9 - iVar7;
    } while (iVar9 != 0);
  }
  FUN_1005b52dc(param_1,iVar4);
  iVar9 = param_6;
  if (param_6 < 0) {
    iVar9 = param_6 + 1;
  }
  iVar9 = (iVar9 >> 1) + -1;
  if (3 < param_6) {
    uVar3 = 0;
    lVar5 = *(long *)(param_1 + 0x1c8);
    do {
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        uVar8 = uVar3;
        iVar7 = iVar4;
        do {
          iVar7 = iVar7 + -1;
          uVar6 = uVar6 << 1 | (uint)uVar8 & 1;
          uVar8 = (ulong)((uint)uVar8 >> 1);
        } while (iVar7 != 0);
      }
      pfVar10 = (float *)(lVar5 + (long)(int)uVar6 * 8);
      fVar15 = *pfVar10;
      fVar14 = pfVar10[1];
      fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14) * 2.5;
      fVar15 = 1.0;
      if (fVar14 <= 1.0) {
        fVar15 = fVar14;
      }
      *(float *)(param_5 + uVar3 * 4) = fVar15;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)iVar9);
  }
  if (param_9 != (float *)0x0) {
    if (3 < param_6) {
      lVar5 = 0;
      fVar15 = 0.0;
      fVar14 = 0.0;
      do {
        fVar16 = *(float *)(param_5 + lVar5 * 4);
        if (0.0001 < fVar16) {
          fVar14 = fVar14 + fVar16 * (((float)param_8 * 0.5 * (float)(int)lVar5) / (float)iVar9);
          fVar15 = fVar15 + fVar16;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar9);
      if (0.001 < fVar15) {
        *param_9 = fVar14 / fVar15;
        return 0;
      }
    }
    *param_9 = 0.0;
  }
  return 0;
}




undefined8 FUN_1005b5c10(long param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint local_64;
  
  iVar2 = *(int *)(param_1 + 0x3f8);
  uVar3 = *(uint *)(param_1 + 0x3f4);
  if (0 < param_2) {
    lVar6 = 0;
    do {
      lVar1 = param_1 + lVar6 * 8;
      if (*(long *)(lVar1 + 0x1d8) == 0) {
        lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x10010,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                              ,500,0);
        *(long *)(lVar1 + 0x1d8) = lVar4;
        if (lVar4 == 0) {
          return 0x26;
        }
        *(ulong *)(param_1 + lVar6 * 8 + 0x2e8) = lVar4 + 0xfU & 0xfffffffffffffff0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_2);
  }
  if (iVar2 != param_2 || uVar3 != param_3) {
    local_64 = 0;
    FUN_1005f696c(*(undefined8 *)(param_1 + 0x90),&local_64,0);
    if (local_64 <= param_3) {
      local_64 = param_3;
    }
    if (*(long *)(param_1 + 0x2d8) != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2d8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                    ,0x205);
      *(undefined8 *)(param_1 + 0x2d8) = 0;
    }
    lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2 * local_64 * 4 + 0x10,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                          ,0x207,0);
    *(long *)(param_1 + 0x2d8) = lVar6;
    if (lVar6 == 0) {
      return 0x26;
    }
    *(ulong *)(param_1 + 1000) = lVar6 + 0xfU & 0xfffffffffffffff0;
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    *(uint *)(param_1 + 0x3f4) = local_64;
    *(int *)(param_1 + 0x3f8) = param_2;
  }
  if (uVar3 == param_3) {
    uVar5 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1d0) != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1d0),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                    ,0x218);
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3 * 8 + 0x10,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                          ,0x21a,0);
    *(long *)(param_1 + 0x1d0) = lVar6;
    if (lVar6 == 0) {
      uVar5 = 0x26;
    }
    else {
      uVar5 = 0;
      *(ulong *)(param_1 + 0x1c8) = lVar6 + 0xfU & 0xfffffffffffffff0;
    }
  }
  return uVar5;
}




undefined8 FUN_1005b5e24(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar6 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x47c);
  do {
    iVar5 = (int)lVar6;
    auVar11._4_4_ = iVar5 + 1;
    auVar11._0_4_ = iVar5;
    auVar11._8_4_ = iVar5 + 2;
    auVar11._12_4_ = iVar5 + 3;
    auVar12 = NEON_scvtf(auVar11,4);
    uVar9 = _cosf();
    auVar2._4_4_ = auVar12._4_4_ * 1.5707964 * 0.00012207031;
    auVar2._0_4_ = auVar12._0_4_ * 1.5707964 * 0.00012207031;
    auVar2._8_4_ = auVar12._8_4_ * 1.5707964 * 0.00012207031;
    auVar2._12_4_ = auVar12._12_4_ * 1.5707964 * 0.00012207031;
    uVar10 = _cosf(auVar2);
    uVar3 = CONCAT44(uVar9,uVar10);
    uVar9 = _cosf();
    uVar10 = _cosf();
    auVar1._8_4_ = uVar9;
    auVar1._0_8_ = uVar3;
    auVar12._8_4_ = uVar9;
    auVar12._0_8_ = uVar3;
    *puVar8 = uVar3;
    auVar12._12_4_ = uVar10;
    auVar1._12_4_ = uVar10;
    auVar12 = NEON_ext(auVar12,auVar1,8,1);
    puVar8[1] = auVar12._0_8_;
    lVar6 = lVar6 + 4;
    puVar8 = puVar8 + 2;
  } while (lVar6 != 0x2000);
  lVar6 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar6 + 0x60)) {
    lVar7 = 0;
    do {
      piVar4 = *(int **)(*(long *)(lVar6 + 0x68) + lVar7 * 8);
      if (*piVar4 == 1) {
        uVar3 = FUN_1005cef94(param_1,lVar7,piVar4[0xe]);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        lVar6 = *(long *)(param_1 + 0xd0);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar6 + 0x60));
  }
  return 0;
}




undefined8 FUN_1005b5f5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x2d8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2d8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                  ,600);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  *(undefined8 *)(param_1 + 1000) = 0;
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1d0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                  ,0x25c);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  lVar2 = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  do {
    lVar1 = param_1 + lVar2;
    if (*(long *)(lVar1 + 0x1d8) != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x1d8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_fft.cpp"
                    ,0x262);
      *(undefined8 *)(lVar1 + 0x1d8) = 0;
    }
    *(undefined8 *)(lVar1 + 0x2e8) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x100);
  return 0;
}




undefined8 FUN_1005b6034(void)

{
  return 0;
}




undefined8
FUN_1005b603c(long param_1,void *param_2,void *param_3,uint param_4,ulong param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  uint uVar17;
  int iVar18;
  undefined4 local_64;
  
  iVar4 = *(int *)(param_1 + 0x847c);
  uVar5 = *(undefined4 *)(param_1 + 0x8480);
  iVar18 = (int)param_5;
  _memcpy(param_3,param_2,(ulong)(iVar18 * param_4) << 2);
  uVar8 = FUN_1005b5c10(param_1,param_5,iVar4);
  if ((int)uVar8 == 0) {
    iVar12 = *(int *)(param_1 + 0x3f0);
    if (0 < iVar18) {
      lVar14 = 0;
      do {
        iVar13 = (int)lVar14;
        if (param_4 != 0) {
          lVar15 = *(long *)(param_1 + 1000);
          uVar2 = *(uint *)(param_1 + 0x3f4);
          pvVar16 = param_2;
          uVar17 = param_4;
          iVar7 = iVar12;
          do {
            uVar1 = uVar17;
            if ((int)(uVar2 - iVar7) <= (int)uVar17) {
              uVar1 = uVar2 - iVar7;
            }
            if (0 < (int)uVar1) {
              uVar9 = ~uVar2 + iVar7;
              if ((int)uVar9 <= (int)~uVar17) {
                uVar9 = ~uVar17;
              }
              uVar9 = ~uVar9;
              puVar11 = (undefined4 *)((long)pvVar16 + lVar14 * 4);
              puVar10 = (undefined4 *)(lVar15 + (long)(int)(uVar2 * iVar13 + iVar7) * 4);
              do {
                *puVar10 = *puVar11;
                uVar9 = uVar9 - 1;
                puVar11 = (undefined4 *)
                          ((long)puVar11 +
                          (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2
                          ));
                puVar10 = puVar10 + 1;
              } while (uVar9 != 0);
            }
            iVar6 = 0;
            if (uVar2 != 0) {
              iVar6 = (int)(uVar1 + iVar7) / (int)uVar2;
            }
            iVar7 = (uVar1 + iVar7) - iVar6 * uVar2;
            uVar17 = uVar17 - uVar1;
            pvVar16 = (void *)((long)pvVar16 + (long)(int)(uVar1 * iVar18) * 4);
          } while (uVar17 != 0);
        }
        lVar14 = lVar14 + 1;
      } while (iVar13 != iVar18 + -1);
    }
    iVar12 = iVar12 + param_4;
    *(int *)(param_1 + 0x3f0) = iVar12;
    uVar2 = *(uint *)(param_1 + 0x3f4);
    if ((int)uVar2 <= iVar12) {
      *(uint *)(param_1 + 0x3f0) = iVar12 - uVar2;
      iVar12 = iVar12 - uVar2;
    }
    if (0 < iVar18) {
      lVar14 = 0;
      uVar17 = uVar2 & iVar12 - iVar4 >> 0x1f;
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x708);
      while( true ) {
        local_64 = 0;
        FUN_1005b5950(param_1,*(long *)(param_1 + 1000) + (long)(int)(uVar2 * (int)lVar14) * 4,
                      (iVar12 - iVar4) + uVar17,uVar2,*(undefined8 *)(param_1 + lVar14 * 8 + 0x2e8),
                      iVar4,uVar5,uVar3,&local_64);
        *(undefined4 *)(param_1 + lVar14 * 4 + 0x3fc) = local_64;
        if (iVar18 + -1 == (int)lVar14) break;
        lVar14 = lVar14 + 1;
        uVar2 = *(uint *)(param_1 + 0x3f4);
      }
    }
    uVar8 = 0;
    *(int *)(param_1 + 0x2e0) = iVar4;
    *(int *)(param_1 + 0x2e4) = iVar18;
    *param_6 = iVar18;
  }
  return uVar8;
}




undefined8 FUN_1005b6218(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  if (param_2 == 1) {
    lVar1 = 0x8480;
  }
  else {
    if (param_2 != 0) {
      return 0x1f;
    }
    if (param_3 < 0x800) {
      if (param_3 < 0x200) {
        if ((param_3 != 0x80) && (param_3 != 0x100)) {
          return 0x1f;
        }
      }
      else if ((param_3 != 0x200) && (param_3 != 0x400)) {
        return 0x1f;
      }
    }
    else if (param_3 < 0x2000) {
      if ((param_3 != 0x800) && (param_3 != 0x1000)) {
        return 0x1f;
      }
    }
    else if ((param_3 != 0x2000) && (param_3 != 0x4000)) {
      return 0x1f;
    }
    lVar1 = 0x847c;
  }
  *(int *)(param_1 + lVar1) = param_3;
  return 0;
}




undefined8 FUN_1005b62b4(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x8480);
  }
  else {
    if (param_2 != 0) {
      return 0x1f;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x847c);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%d");
  }
  return 0;
}




undefined8 FUN_1005b6324(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 3) {
    *param_3 = *(undefined4 *)(param_1 + 0x3fc);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8 FUN_1005b6378(long param_1,int param_2,long *param_3,undefined4 *param_4,char *param_5)

{
  if (param_2 == 2) {
    *param_3 = param_1 + 0x2e0;
    *param_4 = 0x108;
    if (param_5 != (char *)0x0) {
      builtin_strncpy(param_5,"spectrum data",0xe);
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b63bc(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar7 = 0;
  lVar5 = *param_1;
  puVar9 = (undefined8 *)(lVar5 + 0x47c);
  do {
    iVar6 = (int)lVar7;
    auVar12._4_4_ = iVar6 + 1;
    auVar12._0_4_ = iVar6;
    auVar12._8_4_ = iVar6 + 2;
    auVar12._12_4_ = iVar6 + 3;
    auVar13 = NEON_scvtf(auVar12,4);
    uVar10 = _cosf();
    auVar2._4_4_ = auVar13._4_4_ * 1.5707964 * 0.00012207031;
    auVar2._0_4_ = auVar13._0_4_ * 1.5707964 * 0.00012207031;
    auVar2._8_4_ = auVar13._8_4_ * 1.5707964 * 0.00012207031;
    auVar2._12_4_ = auVar13._12_4_ * 1.5707964 * 0.00012207031;
    uVar11 = _cosf(auVar2);
    uVar3 = CONCAT44(uVar10,uVar11);
    uVar10 = _cosf();
    uVar11 = _cosf();
    auVar1._8_4_ = uVar10;
    auVar1._0_8_ = uVar3;
    auVar13._8_4_ = uVar10;
    auVar13._0_8_ = uVar3;
    *puVar9 = uVar3;
    auVar13._12_4_ = uVar11;
    auVar1._12_4_ = uVar11;
    auVar13 = NEON_ext(auVar13,auVar1,8,1);
    puVar9[1] = auVar13._0_8_;
    lVar7 = lVar7 + 4;
    puVar9 = puVar9 + 2;
  } while (lVar7 != 0x2000);
  lVar7 = *(long *)(lVar5 + 0xd0);
  if (0 < *(int *)(lVar7 + 0x60)) {
    lVar8 = 0;
    do {
      piVar4 = *(int **)(*(long *)(lVar7 + 0x68) + lVar8 * 8);
      if (*piVar4 == 1) {
        uVar3 = FUN_1005cef94(lVar5,lVar8,piVar4[0xe]);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        lVar7 = *(long *)(lVar5 + 0xd0);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar7 + 0x60));
  }
  return 0;
}




undefined8 FUN_1005b64f4(undefined8 *param_1)

{
  FUN_1005b5f5c(*param_1);
  return 0;
}




undefined8 FUN_1005b6510(void)

{
  return 0;
}




void FUN_1005b6518(undefined8 *param_1)

{
  FUN_1005b603c(*param_1);
  return;
}




undefined8 FUN_1005b6520(long *param_1,int param_2,int param_3)

{
  long lVar1;
  
  if (param_2 == 1) {
    lVar1 = 0x8480;
  }
  else {
    if (param_2 != 0) {
      return 0x1f;
    }
    if (param_3 < 0x800) {
      if (param_3 < 0x200) {
        if ((param_3 != 0x80) && (param_3 != 0x100)) {
          return 0x1f;
        }
      }
      else if ((param_3 != 0x200) && (param_3 != 0x400)) {
        return 0x1f;
      }
    }
    else if (param_3 < 0x2000) {
      if ((param_3 != 0x800) && (param_3 != 0x1000)) {
        return 0x1f;
      }
    }
    else if ((param_3 != 0x2000) && (param_3 != 0x4000)) {
      return 0x1f;
    }
    lVar1 = 0x847c;
  }
  *(int *)(*param_1 + lVar1) = param_3;
  return 0;
}




undefined8 FUN_1005b65b8(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(*param_1 + 0x8480);
  }
  else {
    if (param_2 != 0) {
      return 0x1f;
    }
    *param_3 = *(undefined4 *)(*param_1 + 0x847c);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%d");
  }
  return 0;
}




undefined8 FUN_1005b662c(long *param_1,int param_2,long *param_3,undefined4 *param_4,char *param_5)

{
  if (param_2 == 2) {
    *param_3 = *param_1 + 0x2e0;
    *param_4 = 0x108;
    if (param_5 != (char *)0x0) {
      builtin_strncpy(param_5,"spectrum data",0xe);
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005b6674(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 3) {
    *param_3 = *(undefined4 *)(*param_1 + 0x3fc);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




void FUN_1005b66cc(void)

{
  _memset(&DAT_101e99ec8,0,0x60);
  FUN_1005ecc98(&DAT_101e99ecc,"Mix",0x10);
  FUN_1005ecc98(&DAT_101e99edc,"%",0x10);
  DAT_101e99ef8 = 0;
  DAT_101e99ef0 = "Percentage of wet signal in mix.  0.0 to 100.0. Default = 50.0.";
  DAT_101e99efc = 0x42c80000;
  DAT_101e99f00 = 0x42480000;
  DAT_101e99f08 = 1;
  _memset(&DAT_101e99f28,0,0x60);
  FUN_1005ecc98(&DAT_101e99f2c,"Depth",0x10);
  FUN_1005ecc98(&DAT_101e99f3c,"",0x10);
  DAT_101e99f50 = "Flange depth in ms.  0.01 to 1.0.  Default = 1.0.";
  DAT_101e99f58 = 0x3c23d70a;
  DAT_101e99f5c = 0x3f800000;
  DAT_101e99f60 = 0x3f800000;
  DAT_101e99f68 = 1;
  _memset(&DAT_101e99f88,0,0x60);
  FUN_1005ecc98(&DAT_101e99f8c,"Rate",0x10);
  FUN_1005ecc98(&DAT_101e99f9c,"Hz",0x10);
  DAT_101e99fb8 = 0;
  DAT_101e99fc8 = 1;
  DAT_101e99fbc = 0x41a00000;
  DAT_101e99fc0 = 0x3dcccccd;
  DAT_101e99fb0 = "Flange speed in Hz.  0.0 to 20.0.  Default = 0.1.";
  DAT_101e99fe8 = &DAT_10186c798;
  DAT_101e9a000 = 8;
  DAT_101e99ff8 = 0x8220;
  return;
}




undefined8 FUN_1005b683c(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar5 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x214);
  do {
    iVar4 = (int)lVar5;
    auVar11._4_4_ = iVar4 + 1;
    auVar11._0_4_ = iVar4;
    auVar11._8_4_ = iVar4 + 2;
    auVar11._12_4_ = iVar4 + 3;
    auVar12 = NEON_scvtf(auVar11,4);
    uVar7 = _cosf();
    auVar2._4_4_ = auVar12._4_4_ * 1.5707964 * 0.00012207031;
    auVar2._0_4_ = auVar12._0_4_ * 1.5707964 * 0.00012207031;
    auVar2._8_4_ = auVar12._8_4_ * 1.5707964 * 0.00012207031;
    auVar2._12_4_ = auVar12._12_4_ * 1.5707964 * 0.00012207031;
    uVar8 = _cosf(auVar2);
    uVar3 = CONCAT44(uVar7,uVar8);
    uVar7 = _cosf();
    uVar8 = _cosf();
    auVar1._8_4_ = uVar7;
    auVar1._0_8_ = uVar3;
    auVar12._8_4_ = uVar7;
    auVar12._0_8_ = uVar3;
    *puVar6 = uVar3;
    auVar12._12_4_ = uVar8;
    auVar1._12_4_ = uVar8;
    auVar12 = NEON_ext(auVar12,auVar1,8,1);
    puVar6[1] = auVar12._0_8_;
    lVar5 = lVar5 + 4;
    puVar6 = puVar6 + 2;
  } while (lVar5 != 0x2000);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x708);
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(*(long *)(param_1 + 0xd0) + 0x60) < 1) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  else {
    lVar5 = 0;
    do {
      uVar3 = FUN_1005cef0c(param_1,lVar5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(*(long *)(param_1 + 0xd0) + 0x60));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
      _bzero(*(void **)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 500));
    }
  }
  fVar10 = *(float *)(param_1 + 0x8214);
  *(float *)(param_1 + 0x1c8) = fVar10;
  *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x8218);
  fVar9 = *(float *)(param_1 + 0x8218) * 0.01;
  *(float *)(param_1 + 0x1d0) = fVar9;
  *(float *)(param_1 + 0x1d4) = 1.0 - fVar9;
  *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x821c);
  fVar9 = fVar10 * 0.5 * ((fVar10 * 40.0 * (float)*(int *)(param_1 + 0x20c)) / 1000.0);
  fVar10 = 4.0;
  if (4.0 <= fVar9) {
    fVar10 = fVar9;
  }
  *(float *)(param_1 + 0x204) = fVar10;
  *(float *)(param_1 + 0x208) = fVar10;
  *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x821c) / (float)*(int *)(param_1 + 0x20c);
  return 0;
}




undefined8 FUN_1005b6a2c(long param_1)

{
  float fVar1;
  float fVar2;
  
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
    _bzero(*(void **)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 500));
  }
  fVar2 = *(float *)(param_1 + 0x8214);
  *(float *)(param_1 + 0x1c8) = fVar2;
  *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x8218);
  fVar1 = *(float *)(param_1 + 0x8218) * 0.01;
  *(float *)(param_1 + 0x1d0) = fVar1;
  *(float *)(param_1 + 0x1d4) = 1.0 - fVar1;
  *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x821c);
  fVar1 = ((fVar2 * 40.0 * (float)*(int *)(param_1 + 0x20c)) / 1000.0) * fVar2 * 0.5;
  fVar2 = 4.0;
  if (4.0 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x204) = fVar2;
  *(float *)(param_1 + 0x208) = fVar2;
  *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x821c) / (float)*(int *)(param_1 + 0x20c);
  return 0;
}




undefined8 FUN_1005b6af4(long param_1)

{
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1e0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_flange.cpp"
                  ,0xca);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return 0;
}




undefined8 FUN_1005b6b40(long param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint local_34;
  
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1e0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_flange.cpp"
                  ,0x110);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  FUN_1005f696c(*(undefined8 *)(param_1 + 0x90),&local_34,0);
  uVar1 = 0;
  if (local_34 != 0) {
    uVar1 = (uint)((int)((float)*(int *)(param_1 + 0x20c) * 40.0) / 1000) / local_34;
  }
  iVar5 = 2;
  if (1 < uVar1 + 1) {
    iVar5 = uVar1 + 1;
  }
  *(uint *)(param_1 + 0x1f0) = iVar5 * local_34;
  iVar5 = *(int *)(param_1 + 0x210) * iVar5 * local_34 * 2;
  *(int *)(param_1 + 500) = iVar5;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar5 + 0x10,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_flange.cpp"
                        ,0x12a,0);
  *(long *)(param_1 + 0x1e0) = lVar2;
  if (lVar2 == 0) {
    uVar4 = 0x26;
  }
  else {
    pvVar3 = (void *)(lVar2 + 0xfU & 0xfffffffffffffff0);
    *(void **)(param_1 + 0x1e8) = pvVar3;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    if (pvVar3 != (void *)0x0) {
      _bzero(pvVar3,(ulong)*(uint *)(param_1 + 500));
    }
    uVar4 = 0;
    fVar7 = *(float *)(param_1 + 0x8214);
    *(float *)(param_1 + 0x1c8) = fVar7;
    *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x8218);
    fVar6 = *(float *)(param_1 + 0x8218) * 0.01;
    *(float *)(param_1 + 0x1d0) = fVar6;
    *(float *)(param_1 + 0x1d4) = 1.0 - fVar6;
    *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x821c);
    fVar6 = fVar7 * 0.5 * ((fVar7 * 40.0 * (float)*(int *)(param_1 + 0x20c)) / 1000.0);
    fVar7 = 4.0;
    if (4.0 <= fVar6) {
      fVar7 = fVar6;
    }
    *(float *)(param_1 + 0x204) = fVar7;
    *(float *)(param_1 + 0x208) = fVar7;
    *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x821c) / (float)*(int *)(param_1 + 0x20c);
  }
  return uVar4;
}




undefined8
FUN_1005b6cf4(long param_1,long param_2,long param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  ulong uVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (*(int *)(param_1 + 0x210) != param_5) {
    *(int *)(param_1 + 0x210) = param_5;
    uVar4 = FUN_1005b6b40(param_1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x1f0);
  fVar20 = *(float *)(param_1 + 0x1c8);
  fVar19 = *(float *)(param_1 + 0x8214);
  if (fVar20 == fVar19) {
    fVar21 = *(float *)(param_1 + 0x8218);
    if ((*(float *)(param_1 + 0x1cc) == fVar21) &&
       (*(float *)(param_1 + 0x1d8) == *(float *)(param_1 + 0x821c))) goto LAB_1005b6e34;
  }
  else {
    fVar21 = *(float *)(param_1 + 0x8218);
  }
  *(float *)(param_1 + 0x1c8) = fVar19;
  *(float *)(param_1 + 0x1cc) = fVar21;
  *(float *)(param_1 + 0x1d0) = fVar21 * 0.01;
  *(float *)(param_1 + 0x1d4) = 1.0 - fVar21 * 0.01;
  *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x821c);
  if (fVar19 == fVar20) {
    iVar14 = *(int *)(param_1 + 0x20c);
  }
  else {
    iVar14 = *(int *)(param_1 + 0x20c);
    fVar19 = ((fVar19 * 40.0 * (float)iVar14) / 1000.0) * fVar19 * 0.5;
    *(float *)(param_1 + 0x204) = fVar19;
    if (fVar19 < 4.0) {
      *(undefined4 *)(param_1 + 0x204) = 0x40800000;
    }
  }
  *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x821c) / (float)iVar14;
LAB_1005b6e34:
  if (param_4 != 0) {
    uVar15 = *(uint *)(param_1 + 0x1f8);
    uVar3 = ~uVar2;
    fVar19 = (float)((int)(float)uVar2 + -1);
    do {
      uVar1 = uVar15 + param_4;
      iVar14 = uVar2 - uVar15;
      if (uVar1 <= uVar2) {
        iVar14 = param_4;
      }
      if (iVar14 * param_5 != 0) {
        lVar16 = *(long *)(param_1 + 0x1e8);
        uVar11 = uVar3;
        if (uVar3 <= ~uVar1) {
          uVar11 = ~uVar1;
        }
        uVar17 = (ulong)((~uVar15 - uVar11) * param_5 - 1) + 1;
        uVar18 = uVar17 & 0x1fffffffe;
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar11 = uVar3;
          if (uVar3 <= ~(uVar15 + param_4)) {
            uVar11 = ~(uVar15 + param_4);
          }
          uVar9 = (ulong)(param_5 * (~uVar15 - uVar11) - 1) + 1 & 0xfffffffffffffffe;
          uVar11 = param_5 * uVar15;
          pfVar13 = (float *)(param_2 + 4);
          do {
            fVar20 = *pfVar13;
            *(short *)(lVar16 + (ulong)uVar11 * 2) = (short)(int)(pfVar13[-1] * 16384.0);
            *(short *)(lVar16 + (ulong)(uVar11 + 1) * 2) = (short)(int)(fVar20 * 16384.0);
            uVar9 = uVar9 - 2;
            uVar11 = uVar11 + 2;
            pfVar13 = pfVar13 + 2;
          } while (uVar9 != 0);
        }
        if (uVar17 != uVar18) {
          uVar11 = uVar3;
          if (uVar3 <= ~(uVar15 + param_4)) {
            uVar11 = ~(uVar15 + param_4);
          }
          iVar8 = param_5 * (~uVar15 - uVar11) - (int)uVar18;
          uVar11 = (int)uVar18 + param_5 * uVar15;
          pfVar13 = (float *)(param_2 + uVar18 * 4);
          do {
            *(short *)(lVar16 + (ulong)uVar11 * 2) = (short)(int)(*pfVar13 * 16384.0);
            iVar8 = iVar8 + -1;
            uVar11 = uVar11 + 1;
            pfVar13 = pfVar13 + 1;
          } while (iVar8 != 0);
        }
      }
      if (iVar14 != 0) {
        uVar17 = 0;
        uVar11 = 0;
        uVar1 = ~uVar1;
        if (uVar1 < ~uVar2) {
          uVar1 = ~uVar2;
        }
        do {
          fVar20 = *(float *)(param_1 + 0x208);
          fVar21 = *(float *)(param_1 + 0x204);
          if (fVar21 + -0.015625 <= fVar20) {
            if (fVar21 + 0.015625 < fVar20) {
              fVar21 = fVar20 + -0.015625;
            }
          }
          else {
            fVar21 = fVar20 + 0.015625;
          }
          *(float *)(param_1 + 0x208) = fVar21;
          fVar20 = *(float *)(param_1 + 0x1fc);
          uVar5 = (uint)(fVar20 * 32768.0);
          uVar6 = -uVar5;
          if (-1 < (int)uVar5) {
            uVar6 = uVar5;
          }
          uVar5 = uVar6 >> 0xd & 3;
          if (uVar5 < 4) {
            uVar6 = uVar6 & 0x7fff;
            switch(uVar5) {
            case 1:
              fVar22 = -*(float *)(param_1 + (long)(int)(0x3fff - uVar6) * 4 + 0x214);
              break;
            case 2:
              fVar22 = -*(float *)(param_1 + (long)(int)uVar6 * 4 + -0xfdec);
              break;
            case 3:
              uVar6 = uVar6 ^ 0x7fff;
            case 0:
              fVar22 = *(float *)(param_1 + (ulong)uVar6 * 4 + 0x214);
            }
          }
          else {
            fVar22 = 0.0;
          }
          fVar21 = (float)uVar11 + (float)uVar15 + fVar21 * (fVar22 + -1.0) * 0.5;
          if (0.0 <= fVar21) {
            if (fVar19 < fVar21) {
              fVar21 = fVar21 - fVar19;
            }
          }
          else {
            fVar21 = fVar19 + fVar21;
          }
          if (0 < param_5) {
            iVar8 = (int)fVar21;
            uVar6 = 0;
            if (uVar2 != 0) {
              uVar6 = (iVar8 + 1U) / uVar2;
            }
            psVar7 = (short *)(*(long *)(param_1 + 0x1e8) +
                              (long)(int)(param_5 * ((iVar8 + 1U) - uVar6 * uVar2)) * 2);
            psVar10 = (short *)(*(long *)(param_1 + 0x1e8) + (long)(param_5 * iVar8) * 2);
            uVar18 = uVar17;
            iVar12 = param_5;
            do {
              uVar9 = -(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2;
              *(float *)(param_3 + uVar9) =
                   *(float *)(param_2 + uVar9) * *(float *)(param_1 + 0x1d4) +
                   *(float *)(param_1 + 0x1d0) *
                   ((1.0 - (fVar21 - (float)iVar8)) * (float)(int)*psVar10 * 6.1035156e-05 +
                   (fVar21 - (float)iVar8) * (float)(int)*psVar7 * 6.1035156e-05);
              iVar12 = iVar12 + -1;
              uVar18 = (ulong)((int)uVar18 + 1);
              psVar7 = psVar7 + 1;
              psVar10 = psVar10 + 1;
            } while (iVar12 != 0);
            fVar20 = *(float *)(param_1 + 0x1fc);
          }
          fVar20 = *(float *)(param_1 + 0x200) + fVar20;
          if (1.0 < fVar20) {
            fVar20 = fVar20 + -1.0;
          }
          *(float *)(param_1 + 0x1fc) = fVar20;
          uVar11 = uVar11 + 1;
          uVar17 = (ulong)(uint)((int)uVar17 + param_5);
        } while (uVar11 != ~uVar15 - uVar1);
      }
      uVar15 = uVar15 + iVar14;
      *(uint *)(param_1 + 0x1f8) = uVar15;
      param_2 = param_2 + (ulong)(uint)(iVar14 * param_5) * 4;
      param_3 = param_3 + (ulong)(uint)(*param_6 * iVar14) * 4;
      if (uVar2 <= uVar15) {
        uVar15 = 0;
      }
      *(uint *)(param_1 + 0x1f8) = uVar15;
      param_4 = param_4 - iVar14;
    } while (param_4 != 0);
  }
  return 0;
}




undefined8 FUN_1005b7174(undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 2) {
    lVar1 = 0x821c;
  }
  else if (param_3 == 1) {
    lVar1 = 0x8214;
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    lVar1 = 0x8218;
  }
  *(undefined4 *)(param_2 + lVar1) = param_1;
  return 0;
}




undefined8 FUN_1005b71a8(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  char *pcVar1;
  long lVar2;
  
  if (param_2 == 2) {
    lVar2 = 0x821c;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return 0;
      }
      *param_3 = *(undefined4 *)(param_1 + 0x8218);
      if (param_4 == (char *)0x0) {
        return 0;
      }
      pcVar1 = "%.1f";
      goto LAB_1005b7224;
    }
    lVar2 = 0x8214;
  }
  *param_3 = *(undefined4 *)(param_1 + lVar2);
  if (param_4 == (char *)0x0) {
    return 0;
  }
  pcVar1 = "%.02f";
LAB_1005b7224:
  _sprintf(param_4,pcVar1);
  return 0;
}




void FUN_1005b723c(undefined8 *param_1)

{
  FUN_1005b683c(*param_1);
  return;
}




undefined8 FUN_1005b7244(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x1e0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x1e0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_flange.cpp"
                  ,0xca);
    *(undefined8 *)(lVar1 + 0x1e0) = 0;
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
  }
  return 0;
}




undefined8 FUN_1005b7294(long *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x1fc) = 0;
  *(undefined4 *)(lVar1 + 0x1f8) = 0;
  if (*(void **)(lVar1 + 0x1e8) != (void *)0x0) {
    _bzero(*(void **)(lVar1 + 0x1e8),(ulong)*(uint *)(lVar1 + 500));
  }
  fVar3 = *(float *)(lVar1 + 0x8214);
  *(float *)(lVar1 + 0x1c8) = fVar3;
  *(float *)(lVar1 + 0x1cc) = *(float *)(lVar1 + 0x8218);
  fVar2 = *(float *)(lVar1 + 0x8218) * 0.01;
  *(float *)(lVar1 + 0x1d0) = fVar2;
  *(float *)(lVar1 + 0x1d4) = 1.0 - fVar2;
  *(float *)(lVar1 + 0x1d8) = *(float *)(lVar1 + 0x821c);
  fVar2 = fVar3 * 0.5 * ((fVar3 * 40.0 * (float)*(int *)(lVar1 + 0x20c)) / 1000.0);
  fVar3 = 4.0;
  if (4.0 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(lVar1 + 0x204) = fVar3;
  *(float *)(lVar1 + 0x208) = fVar3;
  *(float *)(lVar1 + 0x200) = *(float *)(lVar1 + 0x821c) / (float)*(int *)(lVar1 + 0x20c);
  return 0;
}




void FUN_1005b7360(undefined8 *param_1)

{
  FUN_1005b6cf4(*param_1);
  return;
}




undefined8 FUN_1005b7368(undefined4 param_1,long *param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 2) {
    lVar1 = 0x821c;
  }
  else if (param_3 == 1) {
    lVar1 = 0x8214;
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    lVar1 = 0x8218;
  }
  *(undefined4 *)(*param_2 + lVar1) = param_1;
  return 0;
}




undefined8 FUN_1005b73a0(undefined8 *param_1)

{
  FUN_1005b71a8(*param_1);
  return 0;
}




void FUN_1005b73bc(void)

{
  _memset(&DAT_101e9a020,0,0x60);
  FUN_1005ecc98(&DAT_101e9a024,"Cutoff freq",0x10);
  FUN_1005ecc98(&DAT_101e9a034,"hz",0x10);
  DAT_101e9a050 = 0x41200000;
  DAT_101e9a048 = "Highpass cutoff frequency in hz.   10.0 to 22000.0.  Default = 5000.0.";
  DAT_101e9a054 = 0x46abe000;
  DAT_101e9a058 = 0x459c4000;
  DAT_101e9a060 = 1;
  _memset(&DAT_101e9a080,0,0x60);
  FUN_1005ecc98(&DAT_101e9a084,"Resonance",0x10);
  FUN_1005ecc98(&DAT_101e9a094,"",0x10);
  DAT_101e9a0b4 = 0x41200000;
  DAT_101e9a0c0 = 1;
  DAT_101e9a0b0 = 0x3f800000;
  DAT_101e9a0b8 = 0x3f800000;
  DAT_101e9a0a8 = "Highpass resonance Q value. 1.0 to 10.0.  Default = 1.0.";
  DAT_101e9a0e0 = &DAT_10186c880;
  DAT_101e9a0f8 = 5;
  DAT_101e9a0f0 = 0x3f8;
  return;
}




undefined8 FUN_1005b74d4(long param_1)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  *(float *)(param_1 + 0x1cc) = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708) * 0.5 + -10.0;
  lVar3 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar4 = 0;
    do {
      uVar2 = FUN_1005cef0c((char)*(undefined4 *)
                                   (*(long *)(*(long *)(lVar3 + 0x68) + lVar4 * 8) + 0x38),param_1,
                            lVar4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar4 = lVar4 + 1;
      lVar3 = *(long *)(param_1 + 0xd0);
    } while (lVar4 < *(int *)(lVar3 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x254) = 0;
  auVar6 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
  uVar2 = auVar6._0_8_;
  *(undefined8 *)(param_1 + 0x25c) = uVar2;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = uVar2;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined8 *)(param_1 + 0x35c) = uVar2;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined8 *)(param_1 + 0x2dc) = uVar2;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x26c) = uVar2;
  *(undefined8 *)(param_1 + 0x1e4) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = uVar2;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x36c) = uVar2;
  *(undefined8 *)(param_1 + 0x2e4) = 0;
  *(undefined8 *)(param_1 + 0x2ec) = uVar2;
  *(undefined8 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x27c) = uVar2;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = uVar2;
  *(undefined8 *)(param_1 + 0x374) = 0;
  *(undefined8 *)(param_1 + 0x37c) = uVar2;
  *(undefined8 *)(param_1 + 0x2f4) = 0;
  *(undefined8 *)(param_1 + 0x2fc) = uVar2;
  *(undefined8 *)(param_1 + 0x284) = 0;
  *(undefined8 *)(param_1 + 0x28c) = uVar2;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 0x20c) = uVar2;
  *(undefined8 *)(param_1 + 900) = 0;
  *(undefined8 *)(param_1 + 0x38c) = uVar2;
  *(undefined8 *)(param_1 + 0x304) = 0;
  *(undefined8 *)(param_1 + 0x30c) = uVar2;
  *(undefined8 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x29c) = uVar2;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined8 *)(param_1 + 0x21c) = uVar2;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined8 *)(param_1 + 0x39c) = uVar2;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined8 *)(param_1 + 0x31c) = uVar2;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x2ac) = uVar2;
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x22c) = uVar2;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = uVar2;
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x32c) = uVar2;
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  *(undefined8 *)(param_1 + 700) = uVar2;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x23c) = uVar2;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = uVar2;
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x33c) = uVar2;
  *(undefined8 *)(param_1 + 0x2c4) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = uVar2;
  *(undefined8 *)(param_1 + 0x244) = 0;
  *(undefined8 *)(param_1 + 0x24c) = uVar2;
  *(undefined8 *)(param_1 + 0x3c4) = 0;
  *(undefined8 *)(param_1 + 0x3cc) = uVar2;
  *(undefined8 *)(param_1 + 0x344) = 0;
  *(undefined8 *)(param_1 + 0x34c) = uVar2;
  fVar1 = *(float *)(param_1 + 0x3f0);
  *(float *)(param_1 + 0x1d0) = fVar1;
  fVar5 = *(float *)(param_1 + 0x3ec) * 6.2831855;
  auVar6 = ZEXT416((uint)fVar5);
  *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x3ec);
  ___sincosf_stret(SUB41(fVar5 / (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708),0));
  fVar1 = (float)CONCAT13(extraout_var_01,
                          CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) /
          (fVar1 + fVar1);
  fVar5 = auVar6._0_4_ + 1.0;
  fVar7 = fVar5 * 0.5;
  *(float *)(param_1 + 0x3e0) = fVar7;
  *(float *)(param_1 + 0x3e4) = -fVar5;
  *(float *)(param_1 + 1000) = fVar7;
  *(float *)(param_1 + 0x3d4) = fVar1 + 1.0;
  *(float *)(param_1 + 0x3d8) = auVar6._0_4_ * -2.0;
  *(float *)(param_1 + 0x3dc) = 1.0 - fVar1;
  return 0;
}




undefined8 FUN_1005b77dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x254) = 0;
  auVar2 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
  uVar1 = auVar2._0_8_;
  *(undefined8 *)(param_1 + 0x25c) = uVar1;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = uVar1;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined8 *)(param_1 + 0x35c) = uVar1;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined8 *)(param_1 + 0x2dc) = uVar1;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x26c) = uVar1;
  *(undefined8 *)(param_1 + 0x1e4) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = uVar1;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x36c) = uVar1;
  *(undefined8 *)(param_1 + 0x2e4) = 0;
  *(undefined8 *)(param_1 + 0x2ec) = uVar1;
  *(undefined8 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x27c) = uVar1;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = uVar1;
  *(undefined8 *)(param_1 + 0x374) = 0;
  *(undefined8 *)(param_1 + 0x37c) = uVar1;
  *(undefined8 *)(param_1 + 0x2f4) = 0;
  *(undefined8 *)(param_1 + 0x2fc) = uVar1;
  *(undefined8 *)(param_1 + 0x284) = 0;
  *(undefined8 *)(param_1 + 0x28c) = uVar1;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 0x20c) = uVar1;
  *(undefined8 *)(param_1 + 900) = 0;
  *(undefined8 *)(param_1 + 0x38c) = uVar1;
  *(undefined8 *)(param_1 + 0x304) = 0;
  *(undefined8 *)(param_1 + 0x30c) = uVar1;
  *(undefined8 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x29c) = uVar1;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined8 *)(param_1 + 0x21c) = uVar1;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined8 *)(param_1 + 0x39c) = uVar1;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined8 *)(param_1 + 0x31c) = uVar1;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x2ac) = uVar1;
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x22c) = uVar1;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = uVar1;
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x32c) = uVar1;
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  *(undefined8 *)(param_1 + 700) = uVar1;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x23c) = uVar1;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = uVar1;
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x33c) = uVar1;
  *(undefined8 *)(param_1 + 0x2c4) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = uVar1;
  *(undefined8 *)(param_1 + 0x244) = 0;
  *(undefined8 *)(param_1 + 0x24c) = uVar1;
  *(undefined8 *)(param_1 + 0x3c4) = 0;
  *(undefined8 *)(param_1 + 0x3cc) = uVar1;
  *(undefined8 *)(param_1 + 0x344) = 0;
  *(undefined8 *)(param_1 + 0x34c) = uVar1;
  return 0;
}




undefined8 FUN_1005b79ec(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)*(int *)(*(long *)(param_3 + 0x90) + 0x708);
  fVar1 = (float)___sincosf_stret((param_2 * 6.2831855) / fVar2);
  fVar1 = fVar1 / (param_1 + param_1);
  fVar3 = (fVar2 + 1.0) * 0.5;
  *(float *)(param_3 + 0x3e4) = -(fVar2 + 1.0);
  *(float *)(param_3 + 0x3e0) = fVar3;
  *(float *)(param_3 + 1000) = fVar3;
  *(float *)(param_3 + 0x3d4) = fVar1 + 1.0;
  *(float *)(param_3 + 0x3d8) = fVar2 * -2.0;
  *(float *)(param_3 + 0x3dc) = 1.0 - fVar1;
  return 0;
}




undefined8 FUN_1005b7a7c(long param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar18;
  
  switch(param_5) {
  case 1:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      fVar11 = *param_2 + DAT_10186c958;
      fVar14 = (((*(float *)(param_1 + 0x3e0) * fVar11 +
                  *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x1d4) +
                 *(float *)(param_1 + 1000) * *(float *)(param_1 + 0x254)) -
                *(float *)(param_1 + 0x3d8) * *(float *)(param_1 + 0x2d4)) -
               *(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x354)) /
               *(float *)(param_1 + 0x3d4);
      *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x1d4);
      *(float *)(param_1 + 0x1d4) = fVar11;
      *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x2d4);
      *(float *)(param_1 + 0x2d4) = fVar14;
      *param_3 = fVar14;
      DAT_10186c958 = -DAT_10186c958;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    }
    break;
  case 2:
    if (param_4 != 0) {
      uVar9 = 0;
      do {
        uVar1 = (int)uVar9 + 1;
        fVar14 = param_2[uVar9] + DAT_10186c958;
        fVar11 = DAT_10186c958 + param_2[uVar1];
        fVar23 = (((fVar14 * *(float *)(param_1 + 0x3e0) +
                    *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x1d4) +
                   *(float *)(param_1 + 1000) * *(float *)(param_1 + 0x254)) -
                  *(float *)(param_1 + 0x3d8) * *(float *)(param_1 + 0x2d4)) -
                 *(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x354)) /
                 *(float *)(param_1 + 0x3d4);
        fVar21 = (((*(float *)(param_1 + 0x3e0) * fVar11 +
                    *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x1d8) +
                   *(float *)(param_1 + 1000) * *(float *)(param_1 + 600)) -
                  *(float *)(param_1 + 0x3d8) * *(float *)(param_1 + 0x2d8)) -
                 *(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x358)) /
                 *(float *)(param_1 + 0x3d4);
        *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x1d4);
        *(float *)(param_1 + 0x1d4) = fVar14;
        *(float *)(param_1 + 600) = *(float *)(param_1 + 0x1d8);
        *(float *)(param_1 + 0x1d8) = fVar11;
        *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x2d4);
        *(float *)(param_1 + 0x2d4) = fVar23;
        *(float *)(param_1 + 0x358) = *(float *)(param_1 + 0x2d8);
        *(float *)(param_1 + 0x2d8) = fVar21;
        param_3[uVar9] = fVar23;
        param_3[uVar1] = fVar21;
        DAT_10186c958 = -DAT_10186c958;
        param_4 = param_4 + -1;
        uVar9 = (ulong)((int)uVar9 + 2);
      } while (param_4 != 0);
    }
    break;
  default:
    if (0 < param_5) {
      uVar9 = 0;
      do {
        if (param_4 != 0) {
          lVar3 = param_1 + uVar9 * 4;
          uVar10 = uVar9;
          iVar8 = param_4;
          do {
            fVar11 = param_2[uVar10 & 0xffffffff] + DAT_10186c958;
            fVar21 = *(float *)(lVar3 + 0x1d4);
            fVar23 = *(float *)(lVar3 + 0x2d4);
            fVar14 = (((*(float *)(param_1 + 0x3e0) * fVar11 + *(float *)(param_1 + 0x3e4) * fVar21
                       + *(float *)(param_1 + 1000) * *(float *)(lVar3 + 0x254)) -
                      *(float *)(param_1 + 0x3d8) * fVar23) -
                     *(float *)(param_1 + 0x3dc) * *(float *)(lVar3 + 0x354)) /
                     *(float *)(param_1 + 0x3d4);
            *(float *)(lVar3 + 0x254) = fVar21;
            *(float *)(lVar3 + 0x1d4) = fVar11;
            *(float *)(lVar3 + 0x354) = fVar23;
            *(float *)(lVar3 + 0x2d4) = fVar14;
            param_3[uVar10 & 0xffffffff] = fVar14;
            DAT_10186c958 = -DAT_10186c958;
            iVar8 = iVar8 + -1;
            uVar10 = (ulong)(uint)((int)uVar10 + param_5);
          } while (iVar8 != 0);
        }
        iVar8 = (int)uVar9;
        uVar9 = uVar9 + 1;
      } while (iVar8 != param_5 + -1);
    }
    break;
  case 6:
    if (param_4 != 0) {
      uVar9 = 0;
      do {
        fVar11 = param_2[uVar9] + DAT_10186c958;
        iVar8 = (int)uVar9;
        fVar14 = DAT_10186c958 + param_2[iVar8 + 1U];
        fVar21 = param_2[iVar8 + 2U] + DAT_10186c958;
        fVar23 = param_2[iVar8 + 3U] + DAT_10186c958;
        fVar18 = param_2[iVar8 + 4U] + DAT_10186c958;
        fVar19 = param_2[iVar8 + 5U] + DAT_10186c958;
        fVar22 = *(float *)(param_1 + 0x3e0);
        fVar28 = *(float *)(param_1 + 0x3e4);
        fVar31 = *(float *)(param_1 + 1000);
        fVar33 = *(float *)(param_1 + 0x3d8);
        fVar36 = *(float *)(param_1 + 0x3dc);
        fVar38 = *(float *)(param_1 + 0x3d4);
        fVar20 = (((fVar11 * fVar22 + fVar28 * *(float *)(param_1 + 0x1d4) +
                   fVar31 * *(float *)(param_1 + 0x254)) - fVar33 * *(float *)(param_1 + 0x2d4)) -
                 fVar36 * *(float *)(param_1 + 0x354)) / fVar38;
        fVar39 = (((fVar14 * fVar22 + fVar28 * *(float *)(param_1 + 0x1d8) +
                   fVar31 * *(float *)(param_1 + 600)) - fVar33 * *(float *)(param_1 + 0x2d8)) -
                 fVar36 * *(float *)(param_1 + 0x358)) / fVar38;
        uVar24 = *(undefined8 *)(param_1 + 0x1dc);
        fVar40 = (float)uVar24;
        fVar41 = (float)((ulong)uVar24 >> 0x20);
        fVar42 = (float)*(undefined8 *)(param_1 + 0x1e4);
        fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x1e4) >> 0x20);
        uVar24 = *(undefined8 *)(param_1 + 0x25c);
        uVar30 = *(undefined8 *)(param_1 + 0x2dc);
        fVar25 = (float)uVar30;
        fVar26 = (float)((ulong)uVar30 >> 0x20);
        fVar27 = (float)*(undefined8 *)(param_1 + 0x2e4);
        fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x2e4) >> 0x20);
        uVar30 = *(undefined8 *)(param_1 + 0x35c);
        *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x1d4);
        *(float *)(param_1 + 0x1d4) = fVar11;
        *(float *)(param_1 + 600) = *(float *)(param_1 + 0x1d8);
        *(float *)(param_1 + 0x1d8) = fVar14;
        *(float *)(param_1 + 0x25c) = fVar40;
        *(float *)(param_1 + 0x1dc) = fVar21;
        fVar11 = (((fVar21 * fVar22 + fVar40 * fVar28 + (float)uVar24 * fVar31) - fVar25 * fVar33) -
                 (float)uVar30 * fVar36) / fVar38;
        fVar14 = (((fVar23 * fVar22 + fVar41 * fVar28 + (float)((ulong)uVar24 >> 0x20) * fVar31) -
                  fVar26 * fVar33) - (float)((ulong)uVar30 >> 0x20) * fVar36) / fVar38;
        auVar12._0_8_ = CONCAT44(fVar14,fVar11);
        auVar12._8_4_ =
             (((fVar18 * fVar22 + fVar42 * fVar28 + (float)*(undefined8 *)(param_1 + 0x264) * fVar31
               ) - fVar27 * fVar33) - (float)*(undefined8 *)(param_1 + 0x364) * fVar36) / fVar38;
        auVar12._12_4_ =
             (((fVar19 * fVar22 + fVar43 * fVar28 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x264) >> 0x20) * fVar31) - fVar29 * fVar33)
             - (float)((ulong)*(undefined8 *)(param_1 + 0x364) >> 0x20) * fVar36) / fVar38;
        *(float *)(param_1 + 0x260) = fVar41;
        *(float *)(param_1 + 0x1e0) = fVar23;
        *(float *)(param_1 + 0x264) = fVar42;
        *(float *)(param_1 + 0x1e4) = fVar18;
        *(float *)(param_1 + 0x268) = fVar43;
        *(float *)(param_1 + 0x1e8) = fVar19;
        *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x2d4);
        *(float *)(param_1 + 0x2d4) = fVar20;
        *(float *)(param_1 + 0x358) = *(float *)(param_1 + 0x2d8);
        *(float *)(param_1 + 0x2d8) = fVar39;
        *(float *)(param_1 + 0x35c) = fVar25;
        *(float *)(param_1 + 0x360) = fVar26;
        *(float *)(param_1 + 0x364) = fVar27;
        *(float *)(param_1 + 0x368) = fVar29;
        *(undefined8 *)(param_1 + 0x2dc) = auVar12._0_8_;
        auVar16 = NEON_ext(auVar12,auVar12,8,1);
        *(long *)(param_1 + 0x2e4) = auVar16._0_8_;
        param_3[uVar9] = fVar20;
        param_3[iVar8 + 1U] = fVar39;
        param_3[iVar8 + 2U] = fVar11;
        param_3[iVar8 + 3U] = fVar14;
        param_3[iVar8 + 4U] = auVar12._8_4_;
        param_3[iVar8 + 5U] = auVar12._12_4_;
        DAT_10186c958 = -DAT_10186c958;
        param_4 = param_4 + -1;
        uVar9 = (ulong)(iVar8 + 6);
      } while (param_4 != 0);
    }
    break;
  case 8:
    if (param_4 != 0) {
      uVar9 = 0;
      pauVar2 = (undefined1 (*) [12])(param_1 + 0x2e4);
      do {
        iVar8 = (int)uVar9;
        fVar19 = *(float *)(param_1 + 0x3e0);
        fVar22 = *(float *)(param_1 + 0x3e4);
        fVar23 = param_2[uVar9] + DAT_10186c958;
        fVar18 = param_2[iVar8 + 1U] + DAT_10186c958;
        auVar15._0_8_ = CONCAT44(fVar18,fVar23);
        auVar15._8_4_ = param_2[iVar8 + 2U] + DAT_10186c958;
        auVar15._12_4_ = param_2[iVar8 + 3U] + DAT_10186c958;
        fVar29 = *(float *)(param_1 + 1000);
        fVar31 = *(float *)(param_1 + 0x3d8);
        fVar33 = *(float *)(param_1 + 0x3dc);
        fVar14 = param_2[iVar8 + 4U] + DAT_10186c958;
        fVar21 = param_2[iVar8 + 5U] + DAT_10186c958;
        auVar13._0_8_ = CONCAT44(fVar21,fVar14);
        auVar13._8_4_ = param_2[iVar8 + 6U] + DAT_10186c958;
        auVar13._12_4_ = param_2[iVar8 + 7U] + DAT_10186c958;
        uVar24 = *(undefined8 *)(param_1 + 0x1d4);
        fVar20 = (float)uVar24;
        fVar25 = (float)((ulong)uVar24 >> 0x20);
        fVar26 = (float)*(undefined8 *)(param_1 + 0x1dc);
        fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x1dc) >> 0x20);
        uVar35 = *(undefined8 *)(param_1 + 0x25c);
        uVar34 = *(undefined8 *)(param_1 + 0x254);
        uVar37 = *(undefined8 *)(param_1 + 0x2d4);
        fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0x2dc) >> 0x20);
        uVar24 = *(undefined8 *)(param_1 + 0x1e4);
        fVar38 = (float)uVar24;
        fVar39 = (float)((ulong)uVar24 >> 0x20);
        fVar40 = (float)*(undefined8 *)(param_1 + 0x1ec);
        fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x1ec) >> 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x26c);
        uVar24 = *(undefined8 *)(param_1 + 0x264);
        fVar11 = *(float *)(param_1 + 0x3d4);
        fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x2ec) >> 0x20);
        uVar30 = *(undefined8 *)*pauVar2;
        uVar32 = *(undefined8 *)(param_1 + 0x364);
        *(float *)(param_1 + 0x254) = fVar20;
        *(float *)(param_1 + 600) = fVar25;
        *(float *)(param_1 + 0x25c) = fVar26;
        *(float *)(param_1 + 0x260) = fVar27;
        *(undefined8 *)(param_1 + 0x1d4) = auVar15._0_8_;
        auVar16 = NEON_ext(auVar15,auVar15,8,1);
        *(long *)(param_1 + 0x1dc) = auVar16._0_8_;
        *(float *)(param_1 + 0x264) = fVar38;
        *(float *)(param_1 + 0x268) = fVar39;
        *(float *)(param_1 + 0x26c) = fVar40;
        fVar23 = (((fVar23 * fVar19 + fVar20 * fVar22 + (float)uVar34 * fVar29) -
                  (float)uVar37 * fVar31) - (float)*(undefined8 *)(param_1 + 0x354) * fVar33) /
                 fVar11;
        fVar18 = (((fVar18 * fVar19 + fVar25 * fVar22 + (float)((ulong)uVar34 >> 0x20) * fVar29) -
                  (float)((ulong)uVar37 >> 0x20) * fVar31) -
                 (float)((ulong)*(undefined8 *)(param_1 + 0x354) >> 0x20) * fVar33) / fVar11;
        auVar17._0_8_ = CONCAT44(fVar18,fVar23);
        auVar17._8_4_ =
             (((auVar15._8_4_ * fVar19 + fVar26 * fVar22 + (float)uVar35 * fVar29) -
              (float)*(undefined8 *)(param_1 + 0x2dc) * fVar31) -
             (float)*(undefined8 *)(param_1 + 0x35c) * fVar33) / fVar11;
        auVar17._12_4_ =
             (((auVar15._12_4_ * fVar19 + fVar27 * fVar22 + (float)((ulong)uVar35 >> 0x20) * fVar29)
              - fVar36 * fVar31) - (float)((ulong)*(undefined8 *)(param_1 + 0x35c) >> 0x20) * fVar33
             ) / fVar11;
        *(float *)(param_1 + 0x270) = fVar41;
        *(undefined8 *)(param_1 + 0x1e4) = auVar13._0_8_;
        auVar16 = NEON_ext(auVar13,auVar13,8,1);
        fVar14 = (((fVar14 * fVar19 + fVar38 * fVar22 + (float)uVar24 * fVar29) -
                  (float)uVar30 * fVar31) - (float)uVar32 * fVar33) / fVar11;
        fVar21 = (((fVar21 * fVar19 + fVar39 * fVar22 + (float)((ulong)uVar24 >> 0x20) * fVar29) -
                  (float)((ulong)uVar30 >> 0x20) * fVar31) - (float)((ulong)uVar32 >> 0x20) * fVar33
                 ) / fVar11;
        fVar20 = (((auVar13._8_4_ * fVar19 + fVar40 * fVar22 + (float)uVar7 * fVar29) -
                  (float)*(undefined8 *)(param_1 + 0x2ec) * fVar31) -
                 (float)*(undefined8 *)(param_1 + 0x36c) * fVar33) / fVar11;
        fVar11 = (((auVar13._12_4_ * fVar19 + fVar41 * fVar22 +
                   (float)((ulong)uVar7 >> 0x20) * fVar29) - fVar28 * fVar31) -
                 (float)((ulong)*(undefined8 *)(param_1 + 0x36c) >> 0x20) * fVar33) / fVar11;
        *(long *)(param_1 + 0x1ec) = auVar16._0_8_;
        *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x2d4);
        *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x2d8);
        *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x2dc);
        *(float *)(param_1 + 0x360) = fVar36;
        *(undefined8 *)(param_1 + 0x2d4) = auVar17._0_8_;
        auVar16 = NEON_ext(auVar17,auVar17,8,1);
        *(long *)(param_1 + 0x2dc) = auVar16._0_8_;
        *(undefined8 *)(param_1 + 0x364) = uVar30;
        auVar5._12_4_ = fVar28;
        auVar5._0_12_ = *pauVar2;
        auVar6._12_4_ = fVar28;
        auVar6._0_12_ = *pauVar2;
        auVar16 = NEON_ext(auVar5,auVar6,8,1);
        *(long *)(param_1 + 0x36c) = auVar16._0_8_;
        auVar16._4_4_ = fVar21;
        auVar16._0_4_ = fVar14;
        auVar16._8_4_ = fVar20;
        auVar16._12_4_ = fVar11;
        auVar4._4_4_ = fVar21;
        auVar4._0_4_ = fVar14;
        auVar4._8_4_ = fVar20;
        auVar4._12_4_ = fVar11;
        auVar16 = NEON_ext(auVar16,auVar4,8,1);
        *(ulong *)*pauVar2 = CONCAT44(fVar21,fVar14);
        *(long *)(param_1 + 0x2ec) = auVar16._0_8_;
        param_3[uVar9] = fVar23;
        param_3[iVar8 + 1U] = fVar18;
        param_3[iVar8 + 2U] = auVar17._8_4_;
        param_3[iVar8 + 3U] = auVar17._12_4_;
        param_3[iVar8 + 4U] = fVar14;
        param_3[iVar8 + 5U] = fVar21;
        param_3[iVar8 + 6U] = fVar20;
        param_3[iVar8 + 7U] = fVar11;
        DAT_10186c958 = -DAT_10186c958;
        param_4 = param_4 + -1;
        uVar9 = (ulong)(iVar8 + 8);
      } while (param_4 != 0);
    }
  }
  return 0;
}




undefined8 FUN_1005b8178(long param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 extraout_b0;
  undefined1 uVar11;
  undefined1 extraout_var;
  undefined1 uVar12;
  undefined1 extraout_var_00;
  undefined1 uVar13;
  undefined1 extraout_var_01;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  
  if (param_2 != 0) {
    lVar9 = 0;
    iVar8 = (int)param_5;
    do {
      fVar19 = *(float *)(param_1 + 0x1d0);
      fVar14 = *(float *)(param_1 + 0x3f0);
      fVar16 = *(float *)(param_1 + 0x1c8);
      uVar10 = SUB41(fVar16,0);
      uVar11 = (undefined1)((uint)fVar16 >> 8);
      uVar12 = (undefined1)((uint)fVar16 >> 0x10);
      uVar13 = (undefined1)((uint)fVar16 >> 0x18);
      if ((fVar19 == fVar14) && (fVar16 == *(float *)(param_1 + 0x3ec))) {
LAB_1005b8310:
        pvVar2 = (void *)(param_3 + lVar9);
        if (fVar16 < 2.0) {
          _memcpy(pvVar2,(void *)(param_2 + lVar9),(long)iVar8 * (param_4 & 0xffffffff) * 4);
          return 0;
        }
        if (fVar16 < *(float *)(param_1 + 0x1cc)) {
          FUN_1005b7a7c(param_1,(void *)(param_2 + lVar9),pvVar2,param_4,param_5);
          return 0;
        }
        _bzero(pvVar2,(long)iVar8 * (param_4 & 0xffffffff) * 4);
        if (iVar8 < 1) {
          return 0;
        }
        uVar1 = (ulong)(iVar8 - 1) + 1;
        uVar4 = uVar1 & 0x1fffffffc;
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          uVar6 = (ulong)(iVar8 - 1) + 1 & 0xfffffffffffffffc;
          puVar7 = (undefined8 *)(param_1 + 0x354);
          auVar18 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
          do {
            puVar7[-0x20] = 0;
            uVar17 = auVar18._0_8_;
            puVar7[-0x1f] = uVar17;
            puVar7[-0x30] = 0;
            puVar7[-0x2f] = uVar17;
            *puVar7 = 0;
            puVar7[1] = uVar17;
            puVar7[-0x10] = 0;
            puVar7[-0xf] = uVar17;
            uVar6 = uVar6 - 4;
            puVar7 = puVar7 + 2;
          } while (uVar6 != 0);
        }
        if (uVar1 == uVar4) {
          return 0;
        }
        iVar8 = iVar8 - (int)uVar4;
        puVar5 = (undefined4 *)(param_1 + uVar4 * 4 + 0x1d4);
        do {
          puVar5[0x20] = 0;
          *puVar5 = 0;
          puVar5[0x60] = 0;
          iVar8 = iVar8 + -1;
          puVar5[0x40] = 0;
          puVar5 = puVar5 + 1;
        } while (iVar8 != 0);
        return 0;
      }
      if ((int)param_4 == 0) {
        param_4 = 0;
        goto LAB_1005b8310;
      }
      if (fVar14 <= fVar19) {
        if (fVar14 < fVar19) {
          fVar19 = fVar19 + -1.0;
          *(float *)(param_1 + 0x1d0) = fVar19;
          if (fVar19 <= fVar14) goto LAB_1005b824c;
        }
      }
      else {
        fVar19 = fVar19 + 1.0;
        *(float *)(param_1 + 0x1d0) = fVar19;
        if (fVar14 <= fVar19) {
LAB_1005b824c:
          *(float *)(param_1 + 0x1d0) = fVar14;
          fVar19 = fVar14;
        }
      }
      fVar14 = fVar16 / 100.0 + 10.0;
      fVar15 = *(float *)(param_1 + 0x3ec);
      if (fVar15 <= fVar16) {
        if (fVar15 < fVar16) {
          fVar16 = fVar16 - fVar14;
          uVar10 = SUB41(fVar16,0);
          uVar11 = (undefined1)((uint)fVar16 >> 8);
          uVar12 = (undefined1)((uint)fVar16 >> 0x10);
          uVar13 = (undefined1)((uint)fVar16 >> 0x18);
          *(float *)(param_1 + 0x1c8) = fVar16;
          if (fVar16 <= fVar15) goto LAB_1005b828c;
        }
      }
      else {
        fVar14 = fVar14 + fVar16;
        uVar10 = SUB41(fVar14,0);
        uVar11 = (undefined1)((uint)fVar14 >> 8);
        uVar12 = (undefined1)((uint)fVar14 >> 0x10);
        uVar13 = (undefined1)((uint)fVar14 >> 0x18);
        *(float *)(param_1 + 0x1c8) = fVar14;
        if (fVar15 <= fVar14) {
LAB_1005b828c:
          *(float *)(param_1 + 0x1c8) = fVar15;
          uVar10 = SUB41(fVar15,0);
          uVar11 = (undefined1)((uint)fVar15 >> 8);
          uVar12 = (undefined1)((uint)fVar15 >> 0x10);
          uVar13 = (undefined1)((uint)fVar15 >> 0x18);
        }
      }
      fVar16 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
      auVar18 = ZEXT416((uint)fVar16);
      ___sincosf_stret(SUB41(((float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) *
                             6.2831855) / fVar16,0));
      fVar16 = (float)CONCAT13(extraout_var_01,
                               CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) /
               (fVar19 + fVar19);
      fVar19 = auVar18._0_4_ + 1.0;
      fVar14 = fVar19 * 0.5;
      *(float *)(param_1 + 0x3e0) = fVar14;
      *(float *)(param_1 + 0x3e4) = -fVar19;
      *(float *)(param_1 + 1000) = fVar14;
      *(float *)(param_1 + 0x3d4) = fVar16 + 1.0;
      *(float *)(param_1 + 0x3d8) = auVar18._0_4_ * -2.0;
      *(float *)(param_1 + 0x3dc) = 1.0 - fVar16;
      FUN_1005b7a7c(param_1,param_2 + lVar9,param_3 + lVar9,1,param_5);
      uVar3 = (int)param_4 - 1;
      param_4 = (ulong)uVar3;
      lVar9 = lVar9 + (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
    } while (uVar3 != 0);
  }
  return 0;
}




undefined8 FUN_1005b8430(float param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(float *)(param_2 + 0x3f0) = param_1;
  }
  else if (param_3 == 0) {
    *(float *)(param_2 + 0x3ec) = param_1;
    if (*(float *)(param_2 + 0x1cc) <= param_1) {
      *(float *)(param_2 + 0x3ec) = *(float *)(param_2 + 0x1cc);
      return 0;
    }
  }
  return 0;
}




undefined8 FUN_1005b8468(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x3f0);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x3ec);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005b84cc(undefined8 *param_1)

{
  FUN_1005b74d4(*param_1);
  return;
}




undefined8 FUN_1005b84d4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x254) = 0;
  auVar3 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
  uVar2 = auVar3._0_8_;
  *(undefined8 *)(lVar1 + 0x25c) = uVar2;
  *(undefined8 *)(lVar1 + 0x1d4) = 0;
  *(undefined8 *)(lVar1 + 0x1dc) = uVar2;
  *(undefined8 *)(lVar1 + 0x354) = 0;
  *(undefined8 *)(lVar1 + 0x35c) = uVar2;
  *(undefined8 *)(lVar1 + 0x2d4) = 0;
  *(undefined8 *)(lVar1 + 0x2dc) = uVar2;
  *(undefined8 *)(lVar1 + 0x264) = 0;
  *(undefined8 *)(lVar1 + 0x26c) = uVar2;
  *(undefined8 *)(lVar1 + 0x1e4) = 0;
  *(undefined8 *)(lVar1 + 0x1ec) = uVar2;
  *(undefined8 *)(lVar1 + 0x364) = 0;
  *(undefined8 *)(lVar1 + 0x36c) = uVar2;
  *(undefined8 *)(lVar1 + 0x2e4) = 0;
  *(undefined8 *)(lVar1 + 0x2ec) = uVar2;
  *(undefined8 *)(lVar1 + 0x274) = 0;
  *(undefined8 *)(lVar1 + 0x27c) = uVar2;
  *(undefined8 *)(lVar1 + 500) = 0;
  *(undefined8 *)(lVar1 + 0x1fc) = uVar2;
  *(undefined8 *)(lVar1 + 0x374) = 0;
  *(undefined8 *)(lVar1 + 0x37c) = uVar2;
  *(undefined8 *)(lVar1 + 0x2f4) = 0;
  *(undefined8 *)(lVar1 + 0x2fc) = uVar2;
  *(undefined8 *)(lVar1 + 0x284) = 0;
  *(undefined8 *)(lVar1 + 0x28c) = uVar2;
  *(undefined8 *)(lVar1 + 0x204) = 0;
  *(undefined8 *)(lVar1 + 0x20c) = uVar2;
  *(undefined8 *)(lVar1 + 900) = 0;
  *(undefined8 *)(lVar1 + 0x38c) = uVar2;
  *(undefined8 *)(lVar1 + 0x304) = 0;
  *(undefined8 *)(lVar1 + 0x30c) = uVar2;
  *(undefined8 *)(lVar1 + 0x294) = 0;
  *(undefined8 *)(lVar1 + 0x29c) = uVar2;
  *(undefined8 *)(lVar1 + 0x214) = 0;
  *(undefined8 *)(lVar1 + 0x21c) = uVar2;
  *(undefined8 *)(lVar1 + 0x394) = 0;
  *(undefined8 *)(lVar1 + 0x39c) = uVar2;
  *(undefined8 *)(lVar1 + 0x314) = 0;
  *(undefined8 *)(lVar1 + 0x31c) = uVar2;
  *(undefined8 *)(lVar1 + 0x2a4) = 0;
  *(undefined8 *)(lVar1 + 0x2ac) = uVar2;
  *(undefined8 *)(lVar1 + 0x224) = 0;
  *(undefined8 *)(lVar1 + 0x22c) = uVar2;
  *(undefined8 *)(lVar1 + 0x3a4) = 0;
  *(undefined8 *)(lVar1 + 0x3ac) = uVar2;
  *(undefined8 *)(lVar1 + 0x324) = 0;
  *(undefined8 *)(lVar1 + 0x32c) = uVar2;
  *(undefined8 *)(lVar1 + 0x2b4) = 0;
  *(undefined8 *)(lVar1 + 700) = uVar2;
  *(undefined8 *)(lVar1 + 0x234) = 0;
  *(undefined8 *)(lVar1 + 0x23c) = uVar2;
  *(undefined8 *)(lVar1 + 0x3b4) = 0;
  *(undefined8 *)(lVar1 + 0x3bc) = uVar2;
  *(undefined8 *)(lVar1 + 0x334) = 0;
  *(undefined8 *)(lVar1 + 0x33c) = uVar2;
  *(undefined8 *)(lVar1 + 0x2c4) = 0;
  *(undefined8 *)(lVar1 + 0x2cc) = uVar2;
  *(undefined8 *)(lVar1 + 0x244) = 0;
  *(undefined8 *)(lVar1 + 0x24c) = uVar2;
  *(undefined8 *)(lVar1 + 0x3c4) = 0;
  *(undefined8 *)(lVar1 + 0x3cc) = uVar2;
  *(undefined8 *)(lVar1 + 0x344) = 0;
  *(undefined8 *)(lVar1 + 0x34c) = uVar2;
  return 0;
}




undefined8 FUN_1005b86e8(undefined8 *param_1)

{
  FUN_1005b8178(*param_1);
  return 0;
}




undefined8 FUN_1005b8704(float param_1,long *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (param_3 == 1) {
    *(float *)(lVar1 + 0x3f0) = param_1;
  }
  else if (param_3 == 0) {
    *(float *)(lVar1 + 0x3ec) = param_1;
    if (*(float *)(lVar1 + 0x1cc) <= param_1) {
      *(float *)(lVar1 + 0x3ec) = *(float *)(lVar1 + 0x1cc);
      return 0;
    }
  }
  return 0;
}




undefined8 FUN_1005b8740(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(*param_1 + 0x3f0);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(*param_1 + 0x3ec);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005b87a8(void)

{
  _memset(&DAT_101e9a118,0,0x60);
  FUN_1005ecc98(&DAT_101e9a11c,"WetDryMix",0x10);
  FUN_1005ecc98(&DAT_101e9a12c,"",0x10);
  DAT_101e9a148 = 0;
  DAT_101e9a140 =
       "Ratio of wet (processed) signal to dry (unprocessed) signal. Must be in the range from 0.0 through 100.0 (all wet). The default value is 50."
  ;
  DAT_101e9a14c = 0x42c80000;
  DAT_101e9a150 = 0x42480000;
  DAT_101e9a158 = 1;
  _memset(&DAT_101e9a178,0,0x60);
  FUN_1005ecc98(&DAT_101e9a17c,"Feedback",0x10);
  FUN_1005ecc98(&DAT_101e9a18c,"%",0x10);
  DAT_101e9a1a0 =
       "Percentage of output fed back into input, in the range from 0.0 through 100.0. The default value is 50."
  ;
  DAT_101e9a1a8 = 0;
  DAT_101e9a1ac = 0x42c80000;
  DAT_101e9a1b0 = 0x42480000;
  DAT_101e9a1b8 = 1;
  _memset(&DAT_101e9a1d8,0,0x60);
  FUN_1005ecc98(&DAT_101e9a1dc,"LeftDelay",0x10);
  FUN_1005ecc98(&DAT_101e9a1ec,"ms",0x10);
  DAT_101e9a200 =
       "Delay for left channel, in milliseconds, in the range from 1.0 through 2000.0. The default value is 500 ms."
  ;
  DAT_101e9a208 = 0x3f800000;
  DAT_101e9a20c = 0x44fa0000;
  DAT_101e9a210 = 0x43fa0000;
  DAT_101e9a218 = 1;
  _memset(&DAT_101e9a238,0,0x60);
  FUN_1005ecc98(&DAT_101e9a23c,"RightDelay",0x10);
  FUN_1005ecc98(&DAT_101e9a24c,"ms",0x10);
  DAT_101e9a260 =
       "Delay for right channel, in milliseconds, in the range from 1.0 through 2000.0. The default value is 500 ms."
  ;
  DAT_101e9a268 = 0x3f800000;
  DAT_101e9a26c = 0x44fa0000;
  DAT_101e9a270 = 0x43fa0000;
  DAT_101e9a278 = 1;
  _memset(&DAT_101e9a298,0,0x60);
  FUN_1005ecc98(&DAT_101e9a29c,"PanDelay",0x10);
  FUN_1005ecc98(&DAT_101e9a2ac,"",0x10);
  DAT_101e9a2c8 = 0;
  DAT_101e9a2cc = 0x3f800000;
  DAT_101e9a2d0 = 0;
  DAT_101e9a2d8 = 1;
  DAT_101e9a2c0 =
       "Value that specifies whether to swap left and right delays with each successive echo. The default value is zero, meaning no swap. Possible values are defined as 0.0 (equivalent to FALSE) and 1.0 (equivalent to TRUE)."
  ;
  DAT_101e9a2f8 = &DAT_10186c988;
  DAT_101e9a310 = 0x11;
  DAT_101e9a308 = 0x238;
  DAT_101e9a318 = FUN_1005b89d8;
  return;
}




void FUN_1005b89d8(undefined8 *param_1)

{
  FUN_1005b8b40(*param_1);
  return;
}




void FUN_1005b89e0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0xd0) + 0x60);
  if (0 < iVar1) {
    uVar2 = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68);
    do {
      if ((uint)uVar2 < 5) {
        fVar4 = *(float *)(*(long *)(lVar3 + uVar2 * 8) + 0x38);
        switch(uVar2 & 0xffffffff) {
        case 0:
          *(float *)(param_1 + 0x220) = fVar4 / 100.0;
          break;
        case 1:
          *(float *)(param_1 + 0x224) = fVar4 / 100.0;
          break;
        case 2:
          *(float *)(param_1 + 0x228) = fVar4;
          break;
        case 3:
          *(float *)(param_1 + 0x22c) = fVar4;
          break;
        case 4:
          *(uint *)(param_1 + 0x230) = (uint)(0.5 <= fVar4);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)iVar1);
  }
  FUN_1005b8b40(param_1,1);
  return;
}




undefined8 FUN_1005b8a88(float param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined4 local_38 [2];
  long local_30;
  
  switch(param_3) {
  case 0:
    *(float *)(param_2 + 0x220) = param_1 / 100.0;
    break;
  case 1:
    *(float *)(param_2 + 0x224) = param_1 / 100.0;
    break;
  case 2:
    *(float *)(param_2 + 0x228) = param_1;
    break;
  case 3:
    *(float *)(param_2 + 0x22c) = param_1;
    break;
  case 4:
    *(uint *)(param_2 + 0x230) = (uint)(0.5 <= param_1);
    break;
  default:
    goto switchD_1005b8ab0_default;
  }
  if (param_4 != 0) {
    local_38[0] = 8;
    local_30 = param_2;
    FUN_10056be4c(*(undefined8 *)(param_2 + 0x90),local_38,1);
  }
switchD_1005b8ab0_default:
  return 0;
}




undefined8 FUN_1005b8b40(long param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == 1) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x90) + 0x708);
    if (*(float *)(param_1 + 0x1c8) != *(float *)(param_1 + 0x220)) {
      *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x220);
    }
    if (*(float *)(param_1 + 0x1cc) != *(float *)(param_1 + 0x224)) {
      *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x224);
    }
    fVar6 = *(float *)(param_1 + 0x1d0);
    fVar7 = *(float *)(param_1 + 0x228);
    bVar1 = fVar6 != fVar7;
    if (bVar1) {
      *(float *)(param_1 + 0x1d0) = fVar7;
      fVar6 = fVar7;
    }
    fVar7 = *(float *)(param_1 + 0x22c);
    bVar2 = *(float *)(param_1 + 0x1d4) != fVar7;
    if (bVar2) {
      *(float *)(param_1 + 0x1d4) = fVar7;
    }
    if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x230)) {
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x230);
    }
    fVar7 = (float)iVar5;
    if ((bVar1) || (*(long *)(param_1 + 0x1e0) == 0)) {
      iVar5 = (int)(fVar7 * fVar6) / 1000;
      *(int *)(param_1 + 0x210) = iVar5;
      if (*(long *)(param_1 + 0x1f0) != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f0),
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                      ,0x213);
        *(undefined8 *)(param_1 + 0x1f0) = 0;
        *(undefined8 *)(param_1 + 0x1e0) = 0;
        iVar5 = *(int *)(param_1 + 0x210);
      }
      *(int *)(param_1 + 0x200) = iVar5 * 4;
      lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar5 * 4 + 0x80,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                            ,0x21a,0);
      *(long *)(param_1 + 0x1f0) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      *(ulong *)(param_1 + 0x1e0) = lVar4 + 0x7fU & 0xffffffffffffff80;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar2) || (pvVar3 = *(void **)(param_1 + 0x1e8), pvVar3 == (void *)0x0)) {
      iVar5 = (int)(fVar7 * *(float *)(param_1 + 0x1d4)) / 1000;
      *(int *)(param_1 + 0x214) = iVar5;
      if (*(long *)(param_1 + 0x1f8) != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f8),
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                      ,0x213);
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined8 *)(param_1 + 0x1e8) = 0;
        iVar5 = *(int *)(param_1 + 0x214);
      }
      *(int *)(param_1 + 0x204) = iVar5 * 4;
      lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar5 * 4 + 0x80,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                            ,0x21a,0);
      *(long *)(param_1 + 0x1f8) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      pvVar3 = (void *)(lVar4 + 0x7fU & 0xffffffffffffff80);
      *(void **)(param_1 + 0x1e8) = pvVar3;
    }
    else if (!bVar1) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (*(void **)(param_1 + 0x1e0) != (void *)0x0) {
      _bzero(*(void **)(param_1 + 0x1e0),(ulong)*(uint *)(param_1 + 0x200));
      pvVar3 = *(void **)(param_1 + 0x1e8);
    }
    if (pvVar3 != (void *)0x0) {
      _bzero(pvVar3,(ulong)*(uint *)(param_1 + 0x204));
    }
  }
  return 0;
}




undefined8 FUN_1005b8da4(long param_1)

{
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                  ,0xb9);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1f8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                  ,0xb9);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return 0;
}




undefined8 FUN_1005b8e24(long param_1)

{
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (*(void **)(param_1 + 0x1e0) != (void *)0x0) {
    _bzero(*(void **)(param_1 + 0x1e0),(ulong)*(uint *)(param_1 + 0x200));
  }
  if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
    _bzero(*(void **)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 0x204));
  }
  return 0;
}




undefined8
FUN_1005b8e68(long param_1,int param_2,long param_3,long param_4,undefined8 param_5,int param_6)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  long lVar19;
  void *pvVar20;
  void *pvVar21;
  float fVar22;
  
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(undefined4 **)(param_4 + 8) = **(undefined4 **)(param_3 + 8);
    }
  }
  else {
    pvVar20 = (void *)**(undefined8 **)(param_3 + 0x18);
    if (pvVar20 != (void *)0x0) {
      iVar6 = **(int **)(param_3 + 8);
      pvVar21 = (void *)**(undefined8 **)(param_4 + 0x18);
      if (iVar6 < 3) {
        if (iVar6 < 1) {
          return 0;
        }
      }
      else {
        _memcpy(pvVar21,pvVar20,(ulong)(uint)(iVar6 * param_2) << 2);
      }
      lVar14 = 0;
      iVar8 = iVar6 + -1;
      if (1 < iVar6) {
        iVar8 = 1;
      }
      do {
        if (param_2 != 0) {
          lVar19 = lVar14 * 4;
          lVar2 = param_1 + lVar19;
          uVar9 = *(uint *)(lVar2 + 0x208);
          uVar5 = *(uint *)(lVar2 + 0x210);
          pvVar15 = (void *)((long)pvVar21 + lVar19);
          pvVar17 = (void *)((long)pvVar20 + lVar19);
          iVar13 = param_2;
          do {
            uVar1 = uVar9 + iVar13;
            iVar3 = uVar5 - uVar9;
            if (uVar1 <= uVar5) {
              iVar3 = iVar13;
            }
            pvVar16 = pvVar15;
            pvVar18 = pvVar17;
            if (iVar3 != 0) {
              lVar19 = 0;
              uVar7 = ~uVar1;
              uVar4 = uVar7;
              if (uVar7 < ~uVar5) {
                uVar4 = ~uVar5;
              }
              lVar11 = (long)iVar6 * ((ulong)((-2 - uVar9) - uVar4) * 4 + 4);
              pvVar16 = (void *)((long)pvVar15 + lVar11);
              pvVar18 = (void *)((long)pvVar17 + lVar11);
              uVar4 = ~uVar5;
              if (~uVar5 <= uVar7) {
                uVar4 = ~uVar1;
              }
              iVar12 = ~uVar9 - uVar4;
              pfVar10 = (float *)(*(long *)(param_1 + lVar14 * 8 + 0x1e0) + (ulong)uVar9 * 4);
              do {
                fVar22 = *(float *)((long)pvVar17 + lVar19);
                *(float *)((long)pvVar15 + lVar19) =
                     fVar22 * (1.0 - *(float *)(param_1 + 0x1c8)) +
                     *(float *)(param_1 + 0x1c8) * *pfVar10;
                *pfVar10 = fVar22 + *pfVar10 * *(float *)(param_1 + 0x1cc);
                lVar19 = lVar19 + (long)iVar6 * 4;
                iVar12 = iVar12 + -1;
                pfVar10 = pfVar10 + 1;
              } while (iVar12 != 0);
            }
            uVar9 = uVar9 + iVar3;
            if (uVar5 <= uVar9) {
              uVar9 = 0;
            }
            *(uint *)(lVar2 + 0x208) = uVar9;
            iVar13 = iVar13 - iVar3;
            pvVar15 = pvVar16;
            pvVar17 = pvVar18;
          } while (iVar13 != 0);
        }
        iVar13 = (int)lVar14;
        lVar14 = lVar14 + 1;
      } while (iVar13 != iVar8);
    }
  }
  return 0;
}




undefined8 FUN_1005b9018(long param_1,undefined4 param_2,float *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  float fVar4;
  
  switch(param_2) {
  case 0:
    *param_3 = *(float *)(param_1 + 0x220) * 100.0;
    break;
  case 1:
    *param_3 = *(float *)(param_1 + 0x224) * 100.0;
    break;
  case 2:
    *param_3 = *(float *)(param_1 + 0x228);
    goto joined_r0x0001005b90b4;
  case 3:
    *param_3 = *(float *)(param_1 + 0x22c);
joined_r0x0001005b90b4:
    if (param_4 == (char *)0x0) {
      return 0;
    }
    pcVar2 = "%.02f";
    goto LAB_1005b90cc;
  case 4:
    iVar1 = *(int *)(param_1 + 0x230);
    fVar4 = 1.0;
    if (iVar1 == 0) {
      fVar4 = 0.0;
    }
    *param_3 = fVar4;
    if (param_4 != (char *)0x0) {
      pcVar2 = "on";
      if (iVar1 == 0) {
        pcVar2 = "off";
      }
      sVar3 = 3;
      if (iVar1 == 0) {
        sVar3 = 4;
      }
      _memcpy(param_4,pcVar2,sVar3);
    }
  default:
    goto switchD_1005b9040_default;
  }
  if (param_4 != (char *)0x0) {
    pcVar2 = "%.1f";
LAB_1005b90cc:
    _sprintf(param_4,pcVar2);
  }
switchD_1005b9040_default:
  return 0;
}




void FUN_1005b9140(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(*(long *)(lVar2 + 0xd0) + 0x60);
  if (0 < iVar1) {
    uVar3 = 0;
    lVar4 = *(long *)(*(long *)(lVar2 + 0xd0) + 0x68);
    do {
      if ((uint)uVar3 < 5) {
        fVar5 = *(float *)(*(long *)(lVar4 + uVar3 * 8) + 0x38);
        switch(uVar3 & 0xffffffff) {
        case 0:
          *(float *)(lVar2 + 0x220) = fVar5 / 100.0;
          break;
        case 1:
          *(float *)(lVar2 + 0x224) = fVar5 / 100.0;
          break;
        case 2:
          *(float *)(lVar2 + 0x228) = fVar5;
          break;
        case 3:
          *(float *)(lVar2 + 0x22c) = fVar5;
          break;
        case 4:
          *(uint *)(lVar2 + 0x230) = (uint)(0.5 <= fVar5);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((long)iVar1 != uVar3);
  }
  FUN_1005b8b40(lVar2,1);
  return;
}




undefined8 FUN_1005b91ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x1f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x1f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                  ,0xb9);
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1e0) = 0;
  }
  if (*(long *)(lVar1 + 0x1f8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x1f8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_itecho.cpp"
                  ,0xb9);
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
  }
  return 0;
}




undefined8 FUN_1005b926c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x208) = 0;
  *(undefined4 *)(lVar1 + 0x20c) = 0;
  if (*(void **)(lVar1 + 0x1e0) != (void *)0x0) {
    _bzero(*(void **)(lVar1 + 0x1e0),(ulong)*(uint *)(lVar1 + 0x200));
  }
  if (*(void **)(lVar1 + 0x1e8) != (void *)0x0) {
    _bzero(*(void **)(lVar1 + 0x1e8),(ulong)*(uint *)(lVar1 + 0x204));
  }
  return 0;
}




undefined8 FUN_1005b92b4(undefined8 *param_1)

{
  FUN_1005b8e68(*param_1);
  return 0;
}




undefined8 FUN_1005b92d0(float param_1,long *param_2,uint param_3)

{
  undefined4 local_38 [2];
  long local_30;
  
  if (param_3 < 5) {
    local_30 = *param_2;
    switch(param_3) {
    case 0:
      *(float *)(local_30 + 0x220) = param_1 / 100.0;
      break;
    case 1:
      *(float *)(local_30 + 0x224) = param_1 / 100.0;
      break;
    case 2:
      *(float *)(local_30 + 0x228) = param_1;
      break;
    case 3:
      *(float *)(local_30 + 0x22c) = param_1;
      break;
    case 4:
      *(uint *)(local_30 + 0x230) = (uint)(0.5 <= param_1);
    }
    local_38[0] = 8;
    FUN_10056be4c(*(undefined8 *)(local_30 + 0x90),local_38,1);
  }
  return 0;
}




undefined8 FUN_1005b9388(undefined8 *param_1)

{
  FUN_1005b9018(*param_1);
  return 0;
}




void FUN_1005b93a4(void)

{
  _memset(&DAT_101e9a330,0,0x60);
  FUN_1005ecc98(&DAT_101e9a334,"Cutoff freq",0x10);
  FUN_1005ecc98(&DAT_101e9a344,"hz",0x10);
  DAT_101e9a360 = 0x41200000;
  DAT_101e9a358 = "Lowpass cutoff frequency in hz.   1.0 to output 22000.0.  Default = 5000.0.";
  DAT_101e9a364 = 0x46abe000;
  DAT_101e9a368 = 0x459c4000;
  DAT_101e9a370 = 1;
  _memset(&DAT_101e9a390,0,0x60);
  FUN_1005ecc98(&DAT_101e9a394,"Resonance",0x10);
  FUN_1005ecc98(&DAT_101e9a3a4,"",0x10);
  DAT_101e9a3c4 = 0x41200000;
  DAT_101e9a3d0 = 1;
  DAT_101e9a3c0 = 0x3f800000;
  DAT_101e9a3c8 = 0x3f800000;
  DAT_101e9a3b8 = "Lowpass resonance Q value. 1.0 to 10.0.  Default = 1.0.";
  DAT_101e9a3f0 = &DAT_10186ca70;
  DAT_101e9a408 = 3;
  DAT_101e9a400 = 0x440;
  return;
}




undefined8 FUN_1005b94bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x410) = 0x3f43ef17;
  *(undefined4 *)(param_1 + 0x414) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x418) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x428) = 0x3fec835e;
  *(undefined4 *)(param_1 + 0x42c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(float *)(param_1 + 0x1d0) = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708) * 0.5 + -10.0;
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar3 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x68) + lVar3 * 8) + 0x38),
                            param_1,lVar3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 0xd0);
    } while (lVar3 < *(int *)(lVar2 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x434);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x438);
  FUN_1005b95ac(*(undefined4 *)(param_1 + 0x434),param_1);
  return 0;
}




undefined8 FUN_1005b95ac(float param_1,float param_2,long param_3)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_70 [2];
  long local_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  fVar12 = 1.0;
  local_68 = lVar6;
  if (1.0 <= param_1) {
    local_70[0] = 1.0;
    local_70[1] = 1.0;
    pfVar7 = (float *)(param_3 + 0x3e0);
    fVar15 = (float)*(int *)(*(long *)(param_3 + 0x90) + 0x708);
    if (fVar15 * 0.5 < param_2) {
      param_2 = fVar15 * 0.5 + -10.0;
    }
    fVar8 = (float)_atanf(0x3f800000);
    fVar9 = (float)_tanf((param_2 * fVar8 * 4.0) / fVar15);
    lVar1 = 0;
    fVar9 = (fVar15 + fVar15) * fVar9;
    pfVar2 = (float *)(param_3 + 0x1dc);
    fVar8 = fVar12;
    while( true ) {
      lVar3 = param_3 + lVar1 * 0x18;
      fVar10 = *(float *)(lVar3 + 0x400);
      fVar14 = *(float *)(lVar3 + 0x40c);
      fVar13 = *(float *)(lVar3 + 0x408) / (fVar9 * fVar9);
      fVar11 = *(float *)(lVar3 + 0x404) / fVar9;
      fVar17 = *(float *)(lVar3 + 0x414) / (fVar9 * fVar9);
      fVar16 = (*(float *)(lVar3 + 0x410) / param_1) / fVar9;
      fVar18 = fVar15 * fVar15 * fVar13 * 4.0;
      fVar11 = fVar15 * (fVar11 + fVar11);
      fVar19 = fVar10 + fVar11 + fVar18;
      fVar20 = fVar15 * fVar15 * fVar17 * 4.0;
      fVar16 = fVar15 * (fVar16 + fVar16);
      fVar21 = fVar14 + fVar16 + fVar20;
      local_70[lVar1] = (fVar19 / fVar21) * fVar12;
      *pfVar7 = ((fVar14 + fVar14) - fVar15 * fVar15 * fVar17 * 8.0) / fVar21;
      pfVar7[1] = (fVar14 + (fVar20 - fVar16)) / fVar21;
      pfVar7[2] = ((fVar10 + fVar10) - fVar15 * fVar15 * fVar13 * 8.0) / fVar19;
      pfVar7[3] = (fVar10 + (fVar18 - fVar11)) / fVar19;
      lVar3 = param_3 + lVar1 * 4;
      fVar12 = *(float *)(lVar3 + 0x1d4);
      if (fVar12 == 0.0) {
        fVar10 = local_70[lVar1];
      }
      else {
        fVar10 = local_70[lVar1];
        lVar5 = 0x20;
        pfVar4 = pfVar2;
        do {
          *pfVar4 = (fVar10 / fVar12) * *pfVar4;
          lVar5 = lVar5 + -1;
          pfVar4 = pfVar4 + 4;
        } while (lVar5 != 0);
      }
      *(float *)(lVar3 + 0x1d4) = fVar10;
      fVar8 = fVar8 * fVar10;
      lVar1 = lVar1 + 1;
      if (lVar1 == 2) break;
      pfVar7 = pfVar7 + 4;
      fVar12 = local_70[lVar1];
      pfVar2 = pfVar2 + 1;
    }
    *(float *)(param_3 + 0x3dc) = fVar8;
  }
  if (lVar6 == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005b97d0(long param_1,float *param_2,float *param_3,uint param_4,ulong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  puVar7 = PTR_dc_1014441f8;
  uVar9 = (uint)param_5;
  switch(param_5 & 0xffffffff) {
  case 0:
    break;
  case 1:
    for (; param_4 != 0; param_4 = param_4 - 1) {
      fVar24 = *(float *)(param_1 + 0x1dc);
      fVar25 = *(float *)(param_1 + 0x1e0);
      fVar22 = ((*param_2 + DAT_10186cb48) * *(float *)(param_1 + 0x3dc) -
               fVar24 * *(float *)(param_1 + 0x3e0)) - fVar25 * *(float *)(param_1 + 0x3e4);
      fVar28 = *(float *)(param_1 + 0x1e4);
      fVar29 = *(float *)(param_1 + 0x1e8);
      *(float *)(param_1 + 0x1e0) = fVar24;
      *(float *)(param_1 + 0x1e8) = fVar28;
      DAT_10186cb48 = -DAT_10186cb48;
      *(float *)(param_1 + 0x1dc) = fVar22;
      fVar22 = fVar22 + (((fVar24 * *(float *)(param_1 + 1000) +
                          fVar25 * *(float *)(param_1 + 0x3ec)) -
                         fVar28 * *(float *)(param_1 + 0x3f0)) -
                        fVar29 * *(float *)(param_1 + 0x3f4));
      *(float *)(param_1 + 0x1e4) = fVar22;
      *param_3 = fVar22 + fVar28 * *(float *)(param_1 + 0x3f8) +
                          fVar29 * *(float *)(param_1 + 0x3fc);
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    }
    break;
  case 2:
    for (; param_4 != 0; param_4 = param_4 - 1) {
      fVar28 = *(float *)(param_1 + 0x1dc);
      fVar35 = *(float *)(param_1 + 0x1e0);
      fVar22 = ((*param_2 + DAT_10186cb48) * *(float *)(param_1 + 0x3dc) -
               fVar28 * *(float *)(param_1 + 0x3e0)) - fVar35 * *(float *)(param_1 + 0x3e4);
      fVar25 = *(float *)(param_1 + 0x1ec);
      fVar29 = *(float *)(param_1 + 0x1f0);
      fVar24 = (*(float *)(param_1 + 0x3dc) * (DAT_10186cb48 + param_2[1]) -
               *(float *)(param_1 + 0x3e0) * fVar25) - *(float *)(param_1 + 0x3e4) * fVar29;
      fVar31 = *(float *)(param_1 + 0x1e4);
      fVar34 = *(float *)(param_1 + 0x1e8);
      fVar30 = *(float *)(param_1 + 500);
      fVar36 = *(float *)(param_1 + 0x1f8);
      fVar32 = *(float *)(param_1 + 0x3f8);
      fVar33 = *(float *)(param_1 + 0x3fc);
      DAT_10186cb48 = -DAT_10186cb48;
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1e4);
      *(float *)(param_1 + 0x1dc) = fVar22;
      fVar22 = fVar22 + (((fVar28 * *(float *)(param_1 + 1000) +
                          fVar35 * *(float *)(param_1 + 0x3ec)) -
                         fVar31 * *(float *)(param_1 + 0x3f0)) -
                        fVar34 * *(float *)(param_1 + 0x3f4));
      *(float *)(param_1 + 0x1e4) = fVar22;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 500);
      *(float *)(param_1 + 0x1ec) = fVar24;
      fVar24 = fVar24 + (((fVar25 * *(float *)(param_1 + 1000) +
                          fVar29 * *(float *)(param_1 + 0x3ec)) -
                         *(float *)(param_1 + 0x3f0) * fVar30) -
                        *(float *)(param_1 + 0x3f4) * fVar36);
      *(float *)(param_1 + 500) = fVar24;
      *param_3 = fVar22 + fVar31 * fVar32 + fVar34 * fVar33;
      param_3[1] = fVar24 + fVar30 * fVar32 + fVar36 * fVar33;
      param_2 = param_2 + 2;
      param_3 = param_3 + 2;
    }
    break;
  default:
    lVar13 = 0;
    uVar15 = 0;
    uVar6 = param_4 >> 2;
    uVar5 = uVar9 << 2;
    uVar16 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
    uVar12 = -(ulong)(uVar9 * 2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar9 * 2) << 2;
    uVar17 = -(ulong)(uVar9 * 3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar9 * 3) << 2;
    lVar10 = ((ulong)(uVar6 - 1) * 4 + 4) * (long)(int)uVar5;
    pfVar8 = (float *)((long)param_2 + lVar10);
    pfVar11 = (float *)((long)param_3 + lVar10);
    do {
      iVar14 = (int)uVar15;
      if (uVar6 == 0) {
        pfVar18 = param_2 + uVar15;
        pfVar19 = param_3 + uVar15;
      }
      else {
        lVar10 = param_1 + (long)iVar14 * 0x10;
        pfVar1 = (float *)(lVar10 + 0x1dc);
        pfVar2 = (float *)(lVar10 + 0x1e0);
        pfVar3 = (float *)(lVar10 + 0x1e4);
        pfVar4 = (float *)(lVar10 + 0x1e8);
        lVar10 = lVar13;
        iVar21 = -uVar6;
        do {
          fVar22 = *(float *)((long)param_2 + lVar10);
          fVar24 = *(float *)puVar7;
          *(float *)puVar7 = -fVar24;
          fVar25 = *pfVar1;
          fVar28 = *pfVar2;
          fVar22 = ((fVar22 + fVar24) * *(float *)(param_1 + 0x3dc) -
                   fVar25 * *(float *)(param_1 + 0x3e0)) - fVar28 * *(float *)(param_1 + 0x3e4);
          fVar30 = *(float *)(param_1 + 1000);
          fVar35 = *(float *)(param_1 + 0x3ec);
          *pfVar2 = fVar25;
          *pfVar1 = fVar22;
          fVar24 = *pfVar3;
          fVar29 = *pfVar4;
          fVar22 = ((fVar22 + fVar25 * fVar30 + fVar28 * fVar35) -
                   fVar24 * *(float *)(param_1 + 0x3f0)) - fVar29 * *(float *)(param_1 + 0x3f4);
          fVar25 = *(float *)(param_1 + 0x3f8);
          fVar28 = *(float *)(param_1 + 0x3fc);
          *pfVar4 = fVar24;
          *pfVar3 = fVar22;
          *(float *)((long)param_3 + lVar10) = fVar22 + fVar24 * fVar25 + fVar29 * fVar28;
          fVar22 = *(float *)((long)param_2 + lVar10 + uVar16);
          fVar24 = *(float *)puVar7;
          *(float *)puVar7 = -fVar24;
          fVar25 = *pfVar1;
          fVar28 = *pfVar2;
          fVar22 = ((fVar22 + fVar24) * *(float *)(param_1 + 0x3dc) -
                   fVar25 * *(float *)(param_1 + 0x3e0)) - fVar28 * *(float *)(param_1 + 0x3e4);
          fVar30 = *(float *)(param_1 + 1000);
          fVar35 = *(float *)(param_1 + 0x3ec);
          *pfVar2 = fVar25;
          *pfVar1 = fVar22;
          fVar24 = *pfVar3;
          fVar29 = *pfVar4;
          fVar22 = ((fVar22 + fVar25 * fVar30 + fVar28 * fVar35) -
                   fVar24 * *(float *)(param_1 + 0x3f0)) - fVar29 * *(float *)(param_1 + 0x3f4);
          fVar25 = *(float *)(param_1 + 0x3f8);
          fVar28 = *(float *)(param_1 + 0x3fc);
          *pfVar4 = fVar24;
          *pfVar3 = fVar22;
          *(float *)((long)param_3 + lVar10 + uVar16) = fVar22 + fVar24 * fVar25 + fVar29 * fVar28;
          fVar22 = *(float *)((long)param_2 + lVar10 + uVar12);
          fVar24 = *(float *)puVar7;
          *(float *)puVar7 = -fVar24;
          fVar25 = *pfVar1;
          fVar28 = *pfVar2;
          fVar22 = ((fVar22 + fVar24) * *(float *)(param_1 + 0x3dc) -
                   fVar25 * *(float *)(param_1 + 0x3e0)) - fVar28 * *(float *)(param_1 + 0x3e4);
          fVar30 = *(float *)(param_1 + 1000);
          fVar35 = *(float *)(param_1 + 0x3ec);
          *pfVar2 = fVar25;
          *pfVar1 = fVar22;
          fVar24 = *pfVar3;
          fVar29 = *pfVar4;
          fVar22 = ((fVar22 + fVar25 * fVar30 + fVar28 * fVar35) -
                   fVar24 * *(float *)(param_1 + 0x3f0)) - fVar29 * *(float *)(param_1 + 0x3f4);
          fVar25 = *(float *)(param_1 + 0x3f8);
          fVar28 = *(float *)(param_1 + 0x3fc);
          *pfVar4 = fVar24;
          *pfVar3 = fVar22;
          *(float *)((long)param_3 + lVar10 + uVar12) = fVar22 + fVar24 * fVar25 + fVar29 * fVar28;
          fVar22 = *(float *)((long)param_2 + lVar10 + uVar17);
          fVar24 = *(float *)puVar7;
          *(float *)puVar7 = -fVar24;
          fVar25 = *pfVar1;
          fVar28 = *pfVar2;
          fVar22 = ((fVar22 + fVar24) * *(float *)(param_1 + 0x3dc) -
                   fVar25 * *(float *)(param_1 + 0x3e0)) - fVar28 * *(float *)(param_1 + 0x3e4);
          fVar30 = *(float *)(param_1 + 1000);
          fVar35 = *(float *)(param_1 + 0x3ec);
          *pfVar2 = fVar25;
          *pfVar1 = fVar22;
          fVar24 = *pfVar3;
          fVar29 = *pfVar4;
          fVar22 = ((fVar22 + fVar25 * fVar30 + fVar28 * fVar35) -
                   fVar24 * *(float *)(param_1 + 0x3f0)) - fVar29 * *(float *)(param_1 + 0x3f4);
          fVar25 = *(float *)(param_1 + 0x3f8);
          fVar28 = *(float *)(param_1 + 0x3fc);
          *pfVar4 = fVar24;
          *pfVar3 = fVar22;
          *(float *)((long)param_3 + lVar10 + uVar17) = fVar22 + fVar24 * fVar25 + fVar29 * fVar28;
          lVar10 = lVar10 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
          iVar21 = iVar21 + 1;
          pfVar18 = pfVar8;
          pfVar19 = pfVar11;
        } while (iVar21 != 0);
      }
      if ((param_4 & 3) != 0) {
        lVar20 = 0;
        lVar10 = param_1 + (long)iVar14 * 0x10;
        iVar21 = -(param_4 & 3);
        do {
          fVar22 = *(float *)((long)pfVar18 + lVar20);
          fVar24 = *(float *)puVar7;
          *(float *)puVar7 = -fVar24;
          fVar25 = *(float *)(lVar10 + 0x1dc);
          fVar28 = *(float *)(lVar10 + 0x1e0);
          fVar22 = ((fVar22 + fVar24) * *(float *)(param_1 + 0x3dc) -
                   fVar25 * *(float *)(param_1 + 0x3e0)) - fVar28 * *(float *)(param_1 + 0x3e4);
          fVar30 = *(float *)(param_1 + 1000);
          fVar35 = *(float *)(param_1 + 0x3ec);
          *(float *)(lVar10 + 0x1e0) = fVar25;
          *(float *)(lVar10 + 0x1dc) = fVar22;
          fVar24 = *(float *)(lVar10 + 0x1e4);
          fVar29 = *(float *)(lVar10 + 0x1e8);
          fVar22 = ((fVar22 + fVar25 * fVar30 + fVar28 * fVar35) -
                   fVar24 * *(float *)(param_1 + 0x3f0)) - fVar29 * *(float *)(param_1 + 0x3f4);
          fVar25 = *(float *)(param_1 + 0x3f8);
          fVar28 = *(float *)(param_1 + 0x3fc);
          *(float *)(lVar10 + 0x1e8) = fVar24;
          *(float *)(lVar10 + 0x1e4) = fVar22;
          *(float *)((long)pfVar19 + lVar20) = fVar22 + fVar24 * fVar25 + fVar29 * fVar28;
          lVar20 = lVar20 + uVar16;
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0);
      }
      uVar15 = (ulong)(iVar14 + 1U);
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
      lVar13 = lVar13 + 4;
    } while (iVar14 + 1U != uVar9);
    break;
  case 6:
    while (param_4 != 0) {
      fVar33 = *(float *)(param_1 + 0x3dc);
      fVar25 = *(float *)(param_1 + 0x1dc);
      fVar41 = *(float *)(param_1 + 0x3e0);
      fVar24 = *(float *)(param_1 + 0x1e0);
      fVar39 = *(float *)(param_1 + 0x3e4);
      fVar28 = *(float *)(param_1 + 0x1ec);
      fVar36 = *(float *)(param_1 + 0x1e4);
      fVar32 = *(float *)(param_1 + 500);
      fVar22 = (((float)*(undefined8 *)param_2 + DAT_10186cb48) * fVar33 - fVar25 * fVar41) -
               fVar24 * fVar39;
      fVar30 = (((float)((ulong)*(undefined8 *)param_2 >> 0x20) + DAT_10186cb48) * fVar33 -
               fVar28 * fVar41) - *(float *)(param_1 + 0x1f0) * fVar39;
      fVar35 = (((float)*(undefined8 *)(param_2 + 2) + DAT_10186cb48) * fVar33 -
               *(float *)(param_1 + 0x1fc) * fVar41) - *(float *)(param_1 + 0x200) * fVar39;
      fVar31 = (((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) + DAT_10186cb48) * fVar33 -
               *(float *)(param_1 + 0x20c) * fVar41) - *(float *)(param_1 + 0x210) * fVar39;
      fVar43 = *(float *)(param_1 + 0x21c);
      fVar46 = *(float *)(param_1 + 0x220);
      fVar42 = *(float *)(param_1 + 0x22c);
      fVar49 = *(float *)(param_1 + 0x230);
      fVar50 = *(float *)(param_1 + 1000);
      fVar44 = *(float *)(param_1 + 0x3ec);
      fVar51 = *(float *)(param_1 + 0x3f0);
      fVar52 = *(float *)(param_1 + 0x1e8);
      fVar54 = *(float *)(param_1 + 0x3f4);
      fVar37 = *(float *)(param_1 + 0x204);
      fVar55 = *(float *)(param_1 + 0x208);
      fVar38 = *(float *)(param_1 + 0x214);
      fVar53 = *(float *)(param_1 + 0x1f8);
      fVar34 = *(float *)(param_1 + 0x218);
      fVar29 = (fVar33 * (DAT_10186cb48 + param_2[4]) - fVar41 * fVar43) - fVar39 * fVar46;
      fVar40 = *(float *)(param_1 + 0x224);
      fVar33 = (fVar33 * (DAT_10186cb48 + param_2[5]) - fVar41 * fVar42) - fVar39 * fVar49;
      fVar41 = *(float *)(param_1 + 0x228);
      fVar39 = *(float *)(param_1 + 0x234);
      fVar45 = *(float *)(param_1 + 0x238);
      fVar47 = *(float *)(param_1 + 0x3f8);
      fVar48 = *(float *)(param_1 + 0x3fc);
      DAT_10186cb48 = -DAT_10186cb48;
      param_4 = param_4 - 1;
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1e4);
      *(float *)(param_1 + 0x1dc) = fVar22;
      fVar22 = fVar22 + (((fVar25 * fVar50 + fVar24 * fVar44) - fVar36 * fVar51) - fVar52 * fVar54);
      fVar24 = fVar30 + (((fVar28 * fVar50 + *(float *)(param_1 + 0x1f0) * fVar44) - fVar32 * fVar51
                         ) - fVar53 * fVar54);
      fVar25 = fVar35 + (((*(float *)(param_1 + 0x1fc) * fVar50 +
                          *(float *)(param_1 + 0x200) * fVar44) - fVar37 * fVar51) - fVar55 * fVar54
                        );
      fVar28 = fVar31 + (((*(float *)(param_1 + 0x20c) * fVar50 +
                          *(float *)(param_1 + 0x210) * fVar44) - fVar38 * fVar51) - fVar34 * fVar54
                        );
      *(float *)(param_1 + 0x1e4) = fVar22;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 500);
      *(float *)(param_1 + 0x1ec) = fVar30;
      *(float *)(param_1 + 500) = fVar24;
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x204);
      *(float *)(param_1 + 0x1fc) = fVar35;
      *(float *)(param_1 + 0x204) = fVar25;
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x20c);
      *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x214);
      *(float *)(param_1 + 0x20c) = fVar31;
      *(float *)(param_1 + 0x214) = fVar28;
      *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x21c);
      *(float *)(param_1 + 0x21c) = fVar29;
      fVar29 = fVar29 + (((fVar43 * fVar50 + fVar46 * fVar44) - fVar51 * fVar40) - fVar54 * fVar41);
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x224);
      *(float *)(param_1 + 0x224) = fVar29;
      *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x22c);
      *(float *)(param_1 + 0x22c) = fVar33;
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x234);
      fVar33 = fVar33 + (((fVar42 * fVar50 + fVar49 * fVar44) - fVar51 * fVar39) - fVar54 * fVar45);
      *(float *)(param_1 + 0x234) = fVar33;
      auVar23._0_8_ =
           CONCAT44(fVar24 + fVar32 * fVar47 + fVar53 * fVar48,
                    fVar22 + fVar36 * fVar47 + fVar52 * fVar48);
      auVar23._8_4_ = fVar25 + fVar37 * fVar47 + fVar55 * fVar48;
      auVar23._12_4_ = fVar28 + fVar38 * fVar47 + fVar34 * fVar48;
      *(undefined8 *)param_3 = auVar23._0_8_;
      auVar27 = NEON_ext(auVar23,auVar23,8,1);
      *(long *)(param_3 + 2) = auVar27._0_8_;
      param_3[4] = fVar29 + fVar40 * fVar47 + fVar41 * fVar48;
      param_3[5] = fVar33 + fVar39 * fVar47 + fVar45 * fVar48;
      param_2 = param_2 + 6;
      param_3 = param_3 + 6;
    }
    break;
  case 8:
    while (param_4 != 0) {
      fVar41 = *(float *)(param_1 + 0x3dc);
      fVar22 = *(float *)(param_1 + 0x1dc);
      fVar36 = *(float *)(param_1 + 0x3e0);
      fVar35 = *(float *)(param_1 + 0x1e0);
      fVar31 = *(float *)(param_1 + 0x3e4);
      fVar24 = *(float *)(param_1 + 0x1ec);
      fVar38 = *(float *)(param_1 + 0x220);
      fVar37 = *(float *)(param_1 + 0x22c);
      fVar50 = *(float *)(param_1 + 1000);
      fVar52 = *(float *)(param_1 + 0x3ec);
      fVar42 = *(float *)(param_1 + 0x1e4);
      fVar54 = *(float *)(param_1 + 0x3f0);
      fVar44 = *(float *)(param_1 + 0x1e8);
      fVar46 = *(float *)(param_1 + 0x3f4);
      fVar55 = *(float *)(param_1 + 0x204);
      fVar43 = *(float *)(param_1 + 500);
      fVar56 = *(float *)(param_1 + 0x214);
      fVar57 = *(float *)(param_1 + 0x208);
      fVar45 = *(float *)(param_1 + 0x1f8);
      fVar53 = *(float *)(param_1 + 0x218);
      fVar58 = *(float *)(param_1 + 0x224);
      fVar60 = *(float *)(param_1 + 0x228);
      fVar29 = (((float)*(undefined8 *)param_2 + DAT_10186cb48) * fVar41 - fVar22 * fVar36) -
               fVar35 * fVar31;
      fVar25 = (((float)((ulong)*(undefined8 *)param_2 >> 0x20) + DAT_10186cb48) * fVar41 -
               fVar24 * fVar36) - *(float *)(param_1 + 0x1f0) * fVar31;
      fVar28 = (((float)*(undefined8 *)(param_2 + 2) + DAT_10186cb48) * fVar41 -
               *(float *)(param_1 + 0x1fc) * fVar36) - *(float *)(param_1 + 0x200) * fVar31;
      fVar30 = (((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) + DAT_10186cb48) * fVar41 -
               *(float *)(param_1 + 0x20c) * fVar36) - *(float *)(param_1 + 0x210) * fVar31;
      fVar48 = *(float *)(param_1 + 0x244);
      fVar51 = *(float *)(param_1 + 0x248);
      fVar59 = *(float *)(param_1 + 0x234);
      fVar49 = *(float *)(param_1 + 0x254);
      fVar61 = *(float *)(param_1 + 0x238);
      fVar39 = *(float *)(param_1 + 600);
      fVar32 = ((DAT_10186cb48 + (float)*(undefined8 *)(param_2 + 4)) * fVar41 -
               *(float *)(param_1 + 0x21c) * fVar36) - fVar38 * fVar31;
      fVar33 = ((DAT_10186cb48 + (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20)) * fVar41 -
               fVar37 * fVar36) - *(float *)(param_1 + 0x230) * fVar31;
      fVar34 = ((DAT_10186cb48 + (float)*(undefined8 *)(param_2 + 6)) * fVar41 -
               *(float *)(param_1 + 0x23c) * fVar36) - *(float *)(param_1 + 0x240) * fVar31;
      fVar41 = ((DAT_10186cb48 + (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20)) * fVar41 -
               *(float *)(param_1 + 0x24c) * fVar36) - *(float *)(param_1 + 0x250) * fVar31;
      fVar40 = *(float *)(param_1 + 0x3f8);
      fVar47 = *(float *)(param_1 + 0x3fc);
      DAT_10186cb48 = -DAT_10186cb48;
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1e4);
      *(float *)(param_1 + 0x1dc) = fVar29;
      fVar29 = fVar29 + (((fVar22 * fVar50 + fVar35 * fVar52) - fVar42 * fVar54) - fVar44 * fVar46);
      fVar35 = fVar25 + (((fVar24 * fVar50 + *(float *)(param_1 + 0x1f0) * fVar52) - fVar43 * fVar54
                         ) - fVar45 * fVar46);
      fVar31 = fVar28 + (((*(float *)(param_1 + 0x1fc) * fVar50 +
                          *(float *)(param_1 + 0x200) * fVar52) - fVar55 * fVar54) - fVar57 * fVar46
                        );
      fVar36 = fVar30 + (((*(float *)(param_1 + 0x20c) * fVar50 +
                          *(float *)(param_1 + 0x210) * fVar52) - fVar56 * fVar54) - fVar53 * fVar46
                        );
      *(float *)(param_1 + 0x1e4) = fVar29;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 500);
      *(float *)(param_1 + 0x1ec) = fVar25;
      *(float *)(param_1 + 500) = fVar35;
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x204);
      *(float *)(param_1 + 0x1fc) = fVar28;
      param_4 = param_4 - 1;
      *(float *)(param_1 + 0x204) = fVar31;
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x20c);
      *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x214);
      *(float *)(param_1 + 0x20c) = fVar30;
      *(float *)(param_1 + 0x214) = fVar36;
      *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x21c);
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x224);
      fVar22 = fVar32 + (((*(float *)(param_1 + 0x21c) * fVar50 + fVar38 * fVar52) - fVar58 * fVar54
                         ) - fVar60 * fVar46);
      fVar24 = fVar33 + (((fVar37 * fVar50 + *(float *)(param_1 + 0x230) * fVar52) - fVar59 * fVar54
                         ) - fVar61 * fVar46);
      fVar25 = fVar34 + (((*(float *)(param_1 + 0x23c) * fVar50 +
                          *(float *)(param_1 + 0x240) * fVar52) - fVar48 * fVar54) - fVar51 * fVar46
                        );
      fVar28 = fVar41 + (((*(float *)(param_1 + 0x24c) * fVar50 +
                          *(float *)(param_1 + 0x250) * fVar52) - fVar49 * fVar54) - fVar39 * fVar46
                        );
      *(float *)(param_1 + 0x21c) = fVar32;
      *(float *)(param_1 + 0x224) = fVar22;
      *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x22c);
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x234);
      *(float *)(param_1 + 0x22c) = fVar33;
      *(float *)(param_1 + 0x234) = fVar24;
      *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x23c);
      *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x244);
      *(float *)(param_1 + 0x23c) = fVar34;
      *(float *)(param_1 + 0x244) = fVar25;
      *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x24c);
      *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x254);
      *(float *)(param_1 + 0x24c) = fVar41;
      *(float *)(param_1 + 0x254) = fVar28;
      auVar26._0_8_ =
           CONCAT44(fVar35 + fVar43 * fVar40 + fVar45 * fVar47,
                    fVar29 + fVar42 * fVar40 + fVar44 * fVar47);
      auVar26._8_4_ = fVar31 + fVar55 * fVar40 + fVar57 * fVar47;
      auVar26._12_4_ = fVar36 + fVar56 * fVar40 + fVar53 * fVar47;
      *(undefined8 *)param_3 = auVar26._0_8_;
      auVar27 = NEON_ext(auVar26,auVar26,8,1);
      *(long *)(param_3 + 2) = auVar27._0_8_;
      auVar27._0_8_ =
           CONCAT44(fVar24 + fVar59 * fVar40 + fVar61 * fVar47,
                    fVar22 + fVar58 * fVar40 + fVar60 * fVar47);
      auVar27._8_4_ = fVar25 + fVar48 * fVar40 + fVar51 * fVar47;
      auVar27._12_4_ = fVar28 + fVar49 * fVar40 + fVar39 * fVar47;
      *(undefined8 *)(param_3 + 4) = auVar27._0_8_;
      auVar27 = NEON_ext(auVar27,auVar27,8,1);
      *(long *)(param_3 + 6) = auVar27._0_8_;
      param_2 = param_2 + 8;
      param_3 = param_3 + 8;
    }
  }
  return 0;
}




undefined8 FUN_1005ba3a0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x430);
    if (uVar1 == 0) {
      return 0xb;
    }
    iVar2 = uVar1 - param_3;
    if (uVar1 < param_3 || iVar2 == 0) {
      iVar2 = 0;
    }
  }
  *(int *)(param_1 + 0x430) = iVar2;
  return 0;
}




undefined8 FUN_1005ba3dc(long param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 != 0) {
    lVar4 = 0;
    iVar3 = (int)param_5;
    do {
      fVar5 = *(float *)(param_1 + 0x1c8);
      fVar7 = *(float *)(param_1 + 0x434);
      fVar6 = *(float *)(param_1 + 0x1cc);
      if ((fVar5 == fVar7) && (fVar6 == *(float *)(param_1 + 0x438))) {
LAB_1005ba514:
        pvVar1 = (void *)(param_3 + lVar4);
        if (*(float *)(param_1 + 0x1d0) <= fVar6) {
          _memcpy(pvVar1,(void *)(param_2 + lVar4),(long)iVar3 * (param_4 & 0xffffffff) * 4);
          return 0;
        }
        if (fVar6 < 10.0) {
          _bzero(pvVar1,(long)iVar3 * (param_4 & 0xffffffff) * 4);
          if (iVar3 < 1) {
            return 0;
          }
          _bzero((void *)(param_1 + 0x1dc),(ulong)(iVar3 - 1) * 0x10 + 0x10);
          return 0;
        }
        FUN_1005b97d0(param_1,(void *)(param_2 + lVar4),pvVar1,param_4,param_5);
        return 0;
      }
      if ((int)param_4 == 0) {
        param_4 = 0;
        goto LAB_1005ba514;
      }
      if (fVar7 <= fVar5) {
        if (fVar7 < fVar5) {
          fVar5 = fVar5 + -1.0;
          *(float *)(param_1 + 0x1c8) = fVar5;
          if (fVar5 <= fVar7) goto LAB_1005ba498;
        }
      }
      else {
        fVar5 = fVar5 + 1.0;
        *(float *)(param_1 + 0x1c8) = fVar5;
        if (fVar7 <= fVar5) {
LAB_1005ba498:
          *(float *)(param_1 + 0x1c8) = fVar7;
          fVar5 = fVar7;
        }
      }
      fVar8 = fVar6 / 100.0 + 10.0;
      fVar7 = *(float *)(param_1 + 0x438);
      if (fVar7 <= fVar6) {
        if (fVar7 < fVar6) {
          fVar6 = fVar6 - fVar8;
          *(float *)(param_1 + 0x1cc) = fVar6;
          if (fVar6 <= fVar7) goto LAB_1005ba4d8;
        }
      }
      else {
        fVar6 = fVar8 + fVar6;
        *(float *)(param_1 + 0x1cc) = fVar6;
        if (fVar7 <= fVar6) {
LAB_1005ba4d8:
          *(float *)(param_1 + 0x1cc) = fVar7;
          fVar6 = fVar7;
        }
      }
      FUN_1005b95ac(fVar5,fVar6,param_1);
      FUN_1005b97d0(param_1,param_2 + lVar4,param_3 + lVar4,1,param_5);
      uVar2 = (int)param_4 - 1;
      param_4 = (ulong)uVar2;
      lVar4 = lVar4 + (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
    } while (uVar2 != 0);
  }
  return 0;
}




undefined8 FUN_1005ba5b4(long param_1)

{
  _bzero((void *)(param_1 + 0x1dc),0x200);
  return 0;
}




undefined8
FUN_1005ba5d4(float param_1,float param_2,undefined8 param_3,undefined8 param_4,float *param_5,
             float *param_6)

{
  float fVar1;
  
  fVar1 = (float)_atanf(0x3f800000);
  fVar1 = (float)_tanf((fVar1 * 4.0 * param_1) / param_2);
  fVar1 = (param_2 + param_2) * fVar1;
  *param_6 = *param_6 / (fVar1 * fVar1);
  *param_5 = *param_5 / fVar1;
  return 0;
}




undefined8
FUN_1005ba650(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,undefined8 param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_2 + param_2) * param_7;
  fVar2 = (param_5 + param_5) * param_7;
  fVar5 = param_3 * 4.0 * param_7 * param_7;
  fVar4 = param_6 * 4.0 * param_7 * param_7;
  fVar3 = fVar1 + fVar5 + param_1;
  fVar6 = fVar2 + fVar4 + param_4;
  *param_9 = (fVar3 / fVar6) * *param_9;
  *param_10 = ((param_4 + param_4) - param_6 * 8.0 * param_7 * param_7) / fVar6;
  param_10[1] = ((fVar4 - fVar2) + param_4) / fVar6;
  param_10[2] = ((param_1 + param_1) - param_3 * 8.0 * param_7 * param_7) / fVar3;
  param_10[3] = ((fVar5 - fVar1) + param_1) / fVar3;
  return 0;
}




undefined8
FUN_1005ba6f8(float param_1,float param_2,undefined8 param_3,float *param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
             float *param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (float)_atanf(0x3f800000);
  fVar1 = (float)_tanf((fVar1 * 4.0 * param_1) / param_2);
  fVar1 = (param_2 + param_2) * fVar1;
  *param_6 = *param_6 / (fVar1 * fVar1);
  *param_5 = *param_5 / fVar1;
  *param_9 = *param_9 / (fVar1 * fVar1);
  fVar1 = *param_8 / fVar1;
  *param_8 = fVar1;
  fVar2 = *param_9;
  fVar4 = *param_6;
  fVar5 = *param_4;
  fVar7 = *param_7;
  fVar1 = (fVar1 + fVar1) * param_2;
  fVar6 = (*param_5 + *param_5) * param_2;
  fVar3 = fVar4 * 4.0 * param_2 * param_2;
  fVar8 = fVar2 * 4.0 * param_2 * param_2;
  fVar9 = fVar5 + fVar6 + fVar3;
  fVar10 = fVar7 + fVar1 + fVar8;
  *param_10 = (fVar9 / fVar10) * *param_10;
  *param_11 = ((fVar7 + fVar7) - fVar2 * 8.0 * param_2 * param_2) / fVar10;
  param_11[1] = (fVar7 + (fVar8 - fVar1)) / fVar10;
  param_11[2] = ((fVar5 + fVar5) - fVar4 * 8.0 * param_2 * param_2) / fVar9;
  param_11[3] = (fVar5 + (fVar3 - fVar6)) / fVar9;
  return 0;
}




undefined8 FUN_1005ba86c(float param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(float *)(param_2 + 0x434) = param_1;
  }
  else if (param_3 == 0) {
    *(float *)(param_2 + 0x438) = param_1;
    if (*(float *)(param_2 + 0x1d0) <= param_1) {
      *(float *)(param_2 + 0x438) = *(float *)(param_2 + 0x1d0);
      return 0;
    }
  }
  return 0;
}




undefined8 FUN_1005ba8a4(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x434);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x438);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005ba908(undefined8 *param_1)

{
  FUN_1005b94bc(*param_1);
  return;
}




undefined8 FUN_1005ba910(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (param_2 == 0) {
    *(undefined4 *)(lVar3 + 0x430) = 4;
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x430);
  if (uVar1 != 0) {
    iVar2 = uVar1 - param_3;
    if (uVar1 < param_3 || iVar2 == 0) {
      iVar2 = 0;
    }
    *(int *)(lVar3 + 0x430) = iVar2;
    return 0;
  }
  return 0xb;
}




undefined8 FUN_1005ba94c(undefined8 *param_1)

{
  FUN_1005ba3dc(*param_1);
  return 0;
}




undefined8 FUN_1005ba968(long *param_1)

{
  _bzero((void *)(*param_1 + 0x1dc),0x200);
  return 0;
}




undefined8 FUN_1005ba98c(float param_1,long *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (param_3 == 1) {
    *(float *)(lVar1 + 0x434) = param_1;
  }
  else if (param_3 == 0) {
    *(float *)(lVar1 + 0x438) = param_1;
    if (*(float *)(lVar1 + 0x1d0) <= param_1) {
      *(float *)(lVar1 + 0x438) = *(float *)(lVar1 + 0x1d0);
      return 0;
    }
  }
  return 0;
}




undefined8 FUN_1005ba9c8(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(*param_1 + 0x434);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(*param_1 + 0x438);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005baa30(void)

{
  _memset(&DAT_101e9a428,0,0x60);
  FUN_1005ecc98(&DAT_101e9a42c,"Cutoff freq",0x10);
  FUN_1005ecc98(&DAT_101e9a43c,"hz",0x10);
  DAT_101e9a458 = 0x3f800000;
  DAT_101e9a450 = "Lowpass cutoff frequency in hz.  1.0 to 22000.0.  Default = 5000.0";
  DAT_101e9a45c = 0x46abe000;
  DAT_101e9a460 = 0x459c4000;
  DAT_101e9a468 = 1;
  _memset(&DAT_101e9a488,0,0x60);
  FUN_1005ecc98(&DAT_101e9a48c,"Resonance",0x10);
  FUN_1005ecc98(&DAT_101e9a49c,"",0x10);
  DAT_101e9a4b8 = 0x3f800000;
  DAT_101e9a4c0 = 0x3f800000;
  DAT_101e9a4c8 = 1;
  DAT_101e9a4bc = 0x42fe0000;
  DAT_101e9a4b0 = "Lowpass resonance Q value. 0.0 to 127.0.  Default = 1.0";
  DAT_101e9a4e8 = &DAT_10186cb60;
  DAT_101e9a500 = 4;
  DAT_101e9a4f8 = 0x2e8;
  return;
}




undefined8 FUN_1005bab48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  if (*(int *)(lVar3 + 0x60) < 1) {
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar3 + 0x68) + lVar4 * 8) + 0x38),
                            param_1,lVar4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar2 = 0;
      lVar4 = lVar4 + 1;
      lVar3 = *(long *)(param_1 + 0xd0);
    } while (lVar4 < *(int *)(lVar3 + 0x60));
  }
  do {
    *(undefined8 *)(param_1 + lVar2 + 0x1d0) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x100);
  *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x2dc);
  *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x2e0);
  fVar9 = *(float *)(param_1 + 0x2e0) *
          (6.2831855 / (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708));
  fVar5 = (float)_powf(0x41200000,(*(float *)(param_1 + 0x2dc) * 0.1875) / -20.0);
  fVar7 = fVar9 * (1.0 - (fVar5 + fVar5));
  fVar6 = 2.0;
  if (fVar7 <= 2.0) {
    fVar6 = fVar7;
  }
  fVar6 = ((fVar5 + fVar5) - fVar6) / fVar9;
  fVar9 = 1.0 / fVar9;
  fVar5 = fVar9 * fVar9;
  fVar8 = fVar6 + 1.0 + fVar5;
  fVar5 = (fVar5 + fVar6 + fVar5) / fVar8;
  fVar7 = -(fVar9 * fVar9) / fVar8;
  fVar6 = 0.0;
  if (1e-05 <= 1.0 / fVar8) {
    fVar6 = 1.0 / fVar8;
  }
  fVar9 = 2.0;
  if (fVar5 <= 1.999 || -0.999 <= fVar7) {
    fVar9 = fVar5;
  }
  fVar8 = -1.0;
  if (fVar5 <= 1.999 || -0.999 <= fVar7) {
    fVar8 = fVar7;
  }
  *(float *)(param_1 + 0x2d0) = fVar6;
  *(float *)(param_1 + 0x2d4) = fVar9;
  *(float *)(param_1 + 0x2d8) = fVar8;
  return 0;
}




undefined8 FUN_1005bacb8(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 + 0x1d0) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x100);
  return 0;
}




undefined8 FUN_1005bacd8(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_2 = (6.2831855 / (float)*(int *)(*(long *)(param_3 + 0x90) + 0x708)) * param_2;
  fVar1 = (float)_powf(0x41200000,(param_1 * 0.1875) / -20.0);
  fVar3 = param_2 * (1.0 - (fVar1 + fVar1));
  fVar2 = 2.0;
  if (fVar3 <= 2.0) {
    fVar2 = fVar3;
  }
  fVar2 = ((fVar1 + fVar1) - fVar2) / param_2;
  param_2 = 1.0 / param_2;
  fVar1 = param_2 * param_2;
  fVar5 = fVar2 + 1.0 + fVar1;
  fVar1 = (fVar1 + fVar2 + fVar1) / fVar5;
  fVar3 = -(param_2 * param_2) / fVar5;
  fVar2 = 0.0;
  if (1e-05 <= 1.0 / fVar5) {
    fVar2 = 1.0 / fVar5;
  }
  fVar5 = 2.0;
  if (fVar1 <= 1.999 || -0.999 <= fVar3) {
    fVar5 = fVar1;
  }
  fVar4 = -1.0;
  if (fVar1 <= 1.999 || -0.999 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)(param_3 + 0x2d0) = fVar2;
  *(float *)(param_3 + 0x2d4) = fVar5;
  *(float *)(param_3 + 0x2d8) = fVar4;
  return 0;
}




undefined8 FUN_1005badd0(long param_1,float *param_2,float *param_3,uint param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float *pfVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  fVar12 = *(float *)(param_1 + 0x2dc);
  if (*(float *)(param_1 + 0x1c8) == fVar12) {
    fVar15 = *(float *)(param_1 + 0x2e0);
    if (*(float *)(param_1 + 0x1cc) == fVar15) {
      fVar12 = *(float *)(param_1 + 0x2d0);
      goto LAB_1005baf04;
    }
  }
  else {
    fVar15 = *(float *)(param_1 + 0x2e0);
  }
  *(float *)(param_1 + 0x1c8) = fVar12;
  *(float *)(param_1 + 0x1cc) = fVar15;
  fVar15 = fVar15 * (6.2831855 / (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708));
  fVar13 = (float)_powf(ZEXT816(0x41200000),(fVar12 * 0.1875) / -20.0);
  fVar17 = fVar15 * (1.0 - (fVar13 + fVar13));
  fVar12 = 2.0;
  if (fVar17 <= 2.0) {
    fVar12 = fVar17;
  }
  fVar12 = ((fVar13 + fVar13) - fVar12) / fVar15;
  fVar15 = 1.0 / fVar15;
  fVar13 = fVar15 * fVar15;
  fVar17 = fVar12 + 1.0 + fVar13;
  fVar13 = (fVar13 + fVar12 + fVar13) / fVar17;
  fVar15 = -(fVar15 * fVar15) / fVar17;
  fVar12 = 0.0;
  if (1e-05 <= 1.0 / fVar17) {
    fVar12 = 1.0 / fVar17;
  }
  fVar17 = 2.0;
  if (fVar13 <= 1.999 || -0.999 <= fVar15) {
    fVar17 = fVar13;
  }
  fVar21 = -1.0;
  if (fVar13 <= 1.999 || -0.999 <= fVar15) {
    fVar21 = fVar15;
  }
  *(float *)(param_1 + 0x2d0) = fVar12;
  *(float *)(param_1 + 0x2d4) = fVar17;
  *(float *)(param_1 + 0x2d8) = fVar21;
LAB_1005baf04:
  pfVar7 = (float *)(param_1 + 0x2d0);
  iVar11 = (int)param_5;
  if (((fVar12 == 0.0) && (*(float *)(param_1 + 0x2d4) == 2.0)) &&
     (*(float *)(param_1 + 0x2d8) == -1.0)) {
    _bzero(param_3,(ulong)param_4 * (long)iVar11 * 4);
    if (0 < iVar11) {
      param_1 = param_1 + 0x1d4;
      do {
        *(undefined8 *)(param_1 + -4) = 0;
        uVar3 = (int)param_5 - 1;
        param_5 = (ulong)uVar3;
        param_1 = param_1 + 8;
      } while (uVar3 != 0);
    }
  }
  else {
    switch(iVar11) {
    case 1:
      fVar15 = *(float *)(param_1 + 0x1d0);
      fVar13 = fVar15;
      fVar17 = *(float *)(param_1 + 0x1d4);
      if (param_4 != 0) {
        fVar13 = (*param_2 + DAT_10186cc38) * fVar12 + fVar15 * *(float *)(param_1 + 0x2d4) +
                 *(float *)(param_1 + 0x1d4) * *(float *)(param_1 + 0x2d8);
        *param_3 = fVar13;
        DAT_10186cc38 = -DAT_10186cc38;
        fVar17 = fVar15;
        if (param_4 != 1) {
          iVar11 = 1 - param_4;
          do {
            fVar17 = fVar13;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
            fVar13 = (*param_2 + DAT_10186cc38) * *(float *)(param_1 + 0x2d0) +
                     fVar17 * *(float *)(param_1 + 0x2d4) + fVar15 * *(float *)(param_1 + 0x2d8);
            *param_3 = fVar13;
            DAT_10186cc38 = -DAT_10186cc38;
            iVar11 = iVar11 + 1;
            fVar15 = fVar17;
          } while (iVar11 != 0);
        }
      }
      *(float *)(param_1 + 0x1d0) = fVar13;
      *(float *)(param_1 + 0x1d4) = fVar17;
      break;
    case 2:
      fVar15 = *(float *)(param_1 + 0x1d0);
      fVar18 = *(float *)(param_1 + 0x1d4);
      fVar17 = *(float *)(param_1 + 0x1d8);
      fVar25 = *(float *)(param_1 + 0x1dc);
      fVar13 = fVar18;
      fVar21 = fVar25;
      if (param_4 != 0) {
        while( true ) {
          fVar25 = fVar17;
          fVar18 = fVar15;
          fVar15 = (*param_2 + DAT_10186cc38) * fVar12 + fVar18 * *(float *)(param_1 + 0x2d4) +
                   fVar13 * *(float *)(param_1 + 0x2d8);
          fVar17 = fVar21 * *(float *)(param_1 + 0x2d8) +
                   fVar25 * *(float *)(param_1 + 0x2d4) + fVar12 * (DAT_10186cc38 + param_2[1]);
          *param_3 = fVar15;
          param_3[1] = fVar17;
          DAT_10186cc38 = -DAT_10186cc38;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          fVar12 = *pfVar7;
          param_2 = param_2 + 2;
          param_3 = param_3 + 2;
          fVar13 = fVar18;
          fVar21 = fVar25;
        }
      }
      *(float *)(param_1 + 0x1d0) = fVar15;
      *(float *)(param_1 + 0x1d4) = fVar18;
      *(float *)(param_1 + 0x1d8) = fVar17;
      *(float *)(param_1 + 0x1dc) = fVar25;
      break;
    default:
      if (0 < iVar11) {
        lVar8 = 0;
        lVar10 = 0;
        do {
          lVar1 = param_1 + lVar10 * 8;
          fVar15 = *(float *)(lVar1 + 0x1d0);
          fVar12 = *(float *)(lVar1 + 0x1d4);
          lVar2 = lVar8;
          for (uVar3 = param_4; fVar13 = fVar15, uVar3 != 0; uVar3 = uVar3 - 1) {
            fVar15 = (*(float *)((long)param_2 + lVar2) + DAT_10186cc38) *
                     *(float *)(param_1 + 0x2d0) + fVar13 * *(float *)(param_1 + 0x2d4) +
                     fVar12 * *(float *)(param_1 + 0x2d8);
            *(float *)((long)param_3 + lVar2) = fVar15;
            DAT_10186cc38 = -DAT_10186cc38;
            lVar2 = lVar2 + (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 |
                            (param_5 & 0xffffffff) << 2);
            fVar12 = fVar13;
          }
          *(float *)(lVar1 + 0x1d0) = fVar13;
          *(float *)(lVar1 + 0x1d4) = fVar12;
          iVar9 = (int)lVar10;
          lVar10 = lVar10 + 1;
          lVar8 = lVar8 + 4;
        } while (iVar9 != iVar11 + -1);
      }
      break;
    case 6:
      fVar15 = *(float *)(param_1 + 0x1d0);
      fVar13 = *(float *)(param_1 + 0x1d4);
      fVar18 = *(float *)(param_1 + 0x1d8);
      fVar22 = *(float *)(param_1 + 0x1dc);
      fVar26 = *(float *)(param_1 + 0x1e0);
      fVar35 = *(float *)(param_1 + 0x1e4);
      fVar27 = *(float *)(param_1 + 0x1e8);
      fVar31 = *(float *)(param_1 + 0x1ec);
      fVar29 = *(float *)(param_1 + 0x1f0);
      fVar30 = *(float *)(param_1 + 500);
      fVar21 = *(float *)(param_1 + 0x1f8);
      fVar36 = *(float *)(param_1 + 0x1fc);
      fVar17 = fVar13;
      fVar25 = fVar36;
      fVar16 = fVar35;
      fVar34 = fVar22;
      fVar24 = fVar31;
      fVar32 = fVar30;
      if (param_4 != 0) {
        while( true ) {
          fVar30 = fVar29;
          fVar31 = fVar27;
          fVar35 = fVar26;
          fVar34 = fVar18;
          fVar36 = fVar21;
          fVar17 = fVar15;
          fVar21 = *(float *)(param_1 + 0x2d8);
          fVar37 = *(float *)(param_1 + 0x2d4);
          fVar15 = (*param_2 + DAT_10186cc38) * fVar12 + fVar17 * fVar37 + fVar13 * fVar21;
          fVar18 = fVar22 * fVar21 +
                   fVar34 * fVar37 + ((float)*(undefined8 *)(param_2 + 1) + DAT_10186cc38) * fVar12;
          fVar26 = fVar16 * fVar21 +
                   fVar35 * fVar37 +
                   ((float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) + DAT_10186cc38) * fVar12;
          fVar27 = fVar24 * fVar21 +
                   fVar31 * fVar37 + ((float)*(undefined8 *)(param_2 + 3) + DAT_10186cc38) * fVar12;
          fVar29 = fVar32 * fVar21 +
                   fVar30 * fVar37 +
                   ((float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20) + DAT_10186cc38) * fVar12;
          fVar21 = fVar25 * fVar21 + fVar36 * fVar37 + fVar12 * (DAT_10186cc38 + param_2[5]);
          *param_3 = fVar15;
          *(ulong *)(param_3 + 1) = CONCAT44(fVar26,fVar18);
          auVar4._4_4_ = fVar26;
          auVar4._0_4_ = fVar18;
          auVar4._8_4_ = fVar27;
          auVar4._12_4_ = fVar29;
          auVar5._4_4_ = fVar26;
          auVar5._0_4_ = fVar18;
          auVar5._8_4_ = fVar27;
          auVar5._12_4_ = fVar29;
          auVar14 = NEON_ext(auVar4,auVar5,8,1);
          *(long *)(param_3 + 3) = auVar14._0_8_;
          param_3[5] = fVar21;
          DAT_10186cc38 = -DAT_10186cc38;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          param_2 = param_2 + 6;
          fVar12 = *pfVar7;
          param_3 = param_3 + 6;
          fVar13 = fVar17;
          fVar25 = fVar36;
          fVar22 = fVar34;
          fVar16 = fVar35;
          fVar24 = fVar31;
          fVar32 = fVar30;
        }
      }
      *(float *)(param_1 + 0x1d0) = fVar15;
      *(float *)(param_1 + 0x1d4) = fVar17;
      *(float *)(param_1 + 0x1d8) = fVar18;
      *(float *)(param_1 + 0x1dc) = fVar34;
      *(float *)(param_1 + 0x1e0) = fVar26;
      *(float *)(param_1 + 0x1e4) = fVar35;
      *(float *)(param_1 + 0x1e8) = fVar27;
      *(float *)(param_1 + 0x1ec) = fVar31;
      *(float *)(param_1 + 0x1f0) = fVar29;
      *(float *)(param_1 + 500) = fVar30;
      *(float *)(param_1 + 0x1f8) = fVar21;
      *(float *)(param_1 + 0x1fc) = fVar36;
      break;
    case 8:
      fVar15 = *(float *)(param_1 + 0x1d0);
      fVar28 = *(float *)(param_1 + 0x1d4);
      fVar16 = *(float *)(param_1 + 0x1d8);
      fVar27 = *(float *)(param_1 + 0x1dc);
      fVar34 = *(float *)(param_1 + 0x1e0);
      fVar36 = *(float *)(param_1 + 0x1e4);
      fVar32 = *(float *)(param_1 + 0x1e8);
      fVar37 = *(float *)(param_1 + 0x1ec);
      fVar35 = *(float *)(param_1 + 0x1f0);
      fVar38 = *(float *)(param_1 + 500);
      fVar17 = *(float *)(param_1 + 0x1f8);
      fVar23 = *(float *)(param_1 + 0x1fc);
      fVar25 = *(float *)(param_1 + 0x200);
      fVar20 = *(float *)(param_1 + 0x204);
      fVar26 = *(float *)(param_1 + 0x208);
      fVar19 = *(float *)(param_1 + 0x20c);
      fVar13 = fVar28;
      fVar21 = fVar23;
      fVar18 = fVar20;
      fVar22 = fVar19;
      fVar29 = fVar36;
      fVar24 = fVar27;
      fVar31 = fVar37;
      fVar30 = fVar38;
      if (param_4 != 0) {
        while( true ) {
          fVar38 = fVar35;
          fVar37 = fVar32;
          fVar36 = fVar34;
          fVar24 = fVar16;
          fVar19 = fVar26;
          fVar20 = fVar25;
          fVar23 = fVar17;
          fVar28 = fVar15;
          fVar26 = *(float *)(param_1 + 0x2d4);
          fVar33 = *(float *)(param_1 + 0x2d8);
          fVar15 = (*param_2 + DAT_10186cc38) * fVar12 + fVar28 * fVar26 + fVar13 * fVar33;
          fVar16 = fVar27 * fVar33 +
                   fVar24 * fVar26 + ((float)*(undefined8 *)(param_2 + 1) + DAT_10186cc38) * fVar12;
          fVar34 = fVar29 * fVar33 +
                   fVar36 * fVar26 +
                   ((float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) + DAT_10186cc38) * fVar12;
          fVar32 = fVar31 * fVar33 +
                   fVar37 * fVar26 + ((float)*(undefined8 *)(param_2 + 3) + DAT_10186cc38) * fVar12;
          fVar35 = fVar30 * fVar33 +
                   fVar38 * fVar26 +
                   ((float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20) + DAT_10186cc38) * fVar12;
          fVar17 = fVar21 * fVar33 + fVar23 * fVar26 + fVar12 * (DAT_10186cc38 + param_2[5]);
          fVar25 = fVar18 * fVar33 + fVar20 * fVar26 + fVar12 * (DAT_10186cc38 + param_2[6]);
          fVar26 = fVar22 * fVar33 + fVar19 * fVar26 + fVar12 * (DAT_10186cc38 + param_2[7]);
          *param_3 = fVar15;
          *(ulong *)(param_3 + 1) = CONCAT44(fVar34,fVar16);
          auVar14._4_4_ = fVar34;
          auVar14._0_4_ = fVar16;
          auVar14._8_4_ = fVar32;
          auVar14._12_4_ = fVar35;
          auVar6._4_4_ = fVar34;
          auVar6._0_4_ = fVar16;
          auVar6._8_4_ = fVar32;
          auVar6._12_4_ = fVar35;
          auVar14 = NEON_ext(auVar14,auVar6,8,1);
          *(long *)(param_3 + 3) = auVar14._0_8_;
          param_3[5] = fVar17;
          param_3[6] = fVar25;
          param_3[7] = fVar26;
          DAT_10186cc38 = -DAT_10186cc38;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          param_2 = param_2 + 8;
          param_3 = param_3 + 8;
          fVar12 = *pfVar7;
          fVar13 = fVar28;
          fVar21 = fVar23;
          fVar18 = fVar20;
          fVar22 = fVar19;
          fVar27 = fVar24;
          fVar29 = fVar36;
          fVar31 = fVar37;
          fVar30 = fVar38;
        }
      }
      *(float *)(param_1 + 0x1d0) = fVar15;
      *(float *)(param_1 + 0x1d4) = fVar28;
      *(float *)(param_1 + 0x1d8) = fVar16;
      *(float *)(param_1 + 0x1dc) = fVar24;
      *(float *)(param_1 + 0x1e0) = fVar34;
      *(float *)(param_1 + 0x1e4) = fVar36;
      *(float *)(param_1 + 0x1e8) = fVar32;
      *(float *)(param_1 + 0x1ec) = fVar37;
      *(float *)(param_1 + 0x1f0) = fVar35;
      *(float *)(param_1 + 500) = fVar38;
      *(float *)(param_1 + 0x1f8) = fVar17;
      *(float *)(param_1 + 0x1fc) = fVar23;
      *(float *)(param_1 + 0x200) = fVar25;
      *(float *)(param_1 + 0x204) = fVar20;
      *(float *)(param_1 + 0x208) = fVar26;
      *(float *)(param_1 + 0x20c) = fVar19;
    }
  }
  return 0;
}




undefined8 FUN_1005bb51c(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(param_2 + 0x2dc) = param_1;
  }
  else if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x2e0) = param_1;
    return 0;
  }
  return 0;
}




undefined8 FUN_1005bb544(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x2dc);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x2e0);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005bb5a8(undefined8 *param_1)

{
  FUN_1005bab48(*param_1);
  return;
}




undefined8 FUN_1005bb5b0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = *param_1;
  do {
    *(undefined8 *)(lVar2 + lVar1 + 0x1d0) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x100);
  return 0;
}




undefined8 FUN_1005bb5d4(undefined8 *param_1)

{
  FUN_1005badd0(*param_1);
  return 0;
}




undefined8 FUN_1005bb5f0(undefined4 param_1,long *param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(*param_2 + 0x2dc) = param_1;
  }
  else if (param_3 == 0) {
    *(undefined4 *)(*param_2 + 0x2e0) = param_1;
    return 0;
  }
  return 0;
}




undefined8 FUN_1005bb61c(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(*param_1 + 0x2dc);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(*param_1 + 0x2e0);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005bb684(void)

{
  _memset(&DAT_101e9a520,0,0x60);
  FUN_1005ecc98(&DAT_101e9a524,"Cutoff freq",0x10);
  FUN_1005ecc98(&DAT_101e9a534,"hz",0x10);
  DAT_101e9a550 = 0x41200000;
  DAT_101e9a554 = 0x46abe000;
  DAT_101e9a558 = 0x459c4000;
  DAT_101e9a560 = 1;
  DAT_101e9a548 = "Lowpass cutoff frequency in hz.  1.0 to 22000.0.  Default = 5000.0";
  DAT_101e9a580 = &DAT_10186cc48;
  DAT_101e9a598 = 0x14;
  DAT_101e9a590 = 0x2d8;
  return;
}




undefined8 FUN_1005bb734(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  if (*(int *)(lVar3 + 0x60) < 1) {
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar3 + 0x68) + lVar4 * 8) + 0x38),
                            param_1,lVar4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar2 = 0;
      lVar4 = lVar4 + 1;
      lVar3 = *(long *)(param_1 + 0xd0);
    } while (lVar4 < *(int *)(lVar3 + 0x60));
  }
  do {
    *(undefined8 *)(param_1 + lVar2 + 0x1cc) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x100);
  fVar5 = *(float *)(param_1 + 0x2d0);
  *(float *)(param_1 + 0x1c8) = fVar5;
  if (22000.0 <= fVar5) {
    *(undefined4 *)(param_1 + 0x2cc) = 0x3f800000;
  }
  else {
    fVar6 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
    fVar7 = fVar6 / 3.1415927;
    if (fVar5 <= fVar7) {
      fVar6 = 1.0 / fVar6;
      fVar6 = fVar6 / (fVar6 + 1.0 / (fVar5 * 6.2831855));
    }
    else {
      fVar6 = (fVar5 - fVar7) / ((22000.0 - fVar7) * 3.0) + 0.6666667;
    }
    *(float *)(param_1 + 0x2cc) = fVar6;
  }
  return 0;
}




undefined8 FUN_1005bb84c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 + 0x1cc) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x100);
  return 0;
}




undefined8 FUN_1005bb870(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1 < 22000.0) {
    fVar1 = (float)*(int *)(*(long *)(param_2 + 0x90) + 0x708);
    fVar2 = fVar1 / 3.1415927;
    if (param_1 <= fVar2) {
      fVar1 = 1.0 / fVar1;
      fVar1 = fVar1 / (fVar1 + 1.0 / (param_1 * 6.2831855));
    }
    else {
      fVar1 = (param_1 - fVar2) / ((22000.0 - fVar2) * 3.0) + 0.6666667;
    }
    *(float *)(param_2 + 0x2cc) = fVar1;
    return 0;
  }
  *(undefined4 *)(param_2 + 0x2cc) = 0x3f800000;
  return 0;
}




undefined8 FUN_1005bb900(long param_1,float *param_2,float *param_3,uint param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  fVar19 = *(float *)(param_1 + 0x2d0);
  iVar14 = (int)param_5;
  if (*(float *)(param_1 + 0x1c8) == fVar19) {
    uVar5 = *(undefined4 *)(param_1 + 0x2cc);
    uVar15 = (undefined1)uVar5;
    uVar16 = (undefined1)((uint)uVar5 >> 8);
    uVar17 = (undefined1)((uint)uVar5 >> 0x10);
    uVar18 = (undefined1)((uint)uVar5 >> 0x18);
  }
  else {
    *(float *)(param_1 + 0x1c8) = fVar19;
    if (22000.0 <= fVar19) {
      *(undefined4 *)(param_1 + 0x2cc) = 0x3f800000;
      goto LAB_1005bb9cc;
    }
    fVar21 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
    fVar22 = fVar21 / 3.1415927;
    if (fVar19 <= fVar22) {
      fVar21 = 1.0 / fVar21;
      fVar21 = fVar21 / (fVar21 + 1.0 / (fVar19 * 6.2831855));
      uVar15 = SUB41(fVar21,0);
      uVar16 = (undefined1)((uint)fVar21 >> 8);
      uVar17 = (undefined1)((uint)fVar21 >> 0x10);
      uVar18 = (undefined1)((uint)fVar21 >> 0x18);
    }
    else {
      fVar19 = (fVar19 - fVar22) / ((22000.0 - fVar22) * 3.0) + 0.6666667;
      uVar15 = SUB41(fVar19,0);
      uVar16 = (undefined1)((uint)fVar19 >> 8);
      uVar17 = (undefined1)((uint)fVar19 >> 0x10);
      uVar18 = (undefined1)((uint)fVar19 >> 0x18);
    }
    *(uint *)(param_1 + 0x2cc) = CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
  }
  pfVar7 = (float *)(param_1 + 0x2cc);
  if ((float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) != 1.0) {
    if (NAN((float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))) ||
        (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) != 0.0) {
      switch(iVar14) {
      case 1:
        fVar21 = *(float *)(param_1 + 0x1cc);
        fVar19 = *(float *)(param_1 + 0x1d0);
        if (param_4 != 0) {
          fVar21 = fVar21 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                            ((*param_2 + DAT_10186cd20) - fVar21);
          fVar19 = fVar19 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                            (fVar21 - fVar19);
          *param_3 = fVar19;
          DAT_10186cd20 = -DAT_10186cd20;
          uVar15 = SUB41(DAT_10186cd20,0);
          uVar16 = (undefined1)((uint)DAT_10186cd20 >> 8);
          uVar17 = (undefined1)((uint)DAT_10186cd20 >> 0x10);
          uVar18 = (undefined1)((uint)DAT_10186cd20 >> 0x18);
          if (param_4 != 1) {
            iVar14 = 1 - param_4;
            do {
              param_3 = param_3 + 1;
              param_2 = param_2 + 1;
              fVar21 = fVar21 + *pfVar7 * ((*param_2 +
                                           (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))) - fVar21);
              fVar19 = fVar19 + *pfVar7 * (fVar21 - fVar19);
              *param_3 = fVar19;
              DAT_10186cd20 = -DAT_10186cd20;
              uVar15 = SUB41(DAT_10186cd20,0);
              uVar16 = (undefined1)((uint)DAT_10186cd20 >> 8);
              uVar17 = (undefined1)((uint)DAT_10186cd20 >> 0x10);
              uVar18 = (undefined1)((uint)DAT_10186cd20 >> 0x18);
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0);
          }
        }
        *(float *)(param_1 + 0x1cc) = fVar21;
        *(float *)(param_1 + 0x1d0) = fVar19;
        return 0;
      case 2:
        fVar23 = *(float *)(param_1 + 0x1cc);
        fVar22 = *(float *)(param_1 + 0x1d0);
        fVar21 = *(float *)(param_1 + 0x1d4);
        fVar19 = *(float *)(param_1 + 0x1d8);
        if (param_4 != 0) {
          while( true ) {
            fVar23 = fVar23 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((*param_2 + DAT_10186cd20) - fVar23);
            fVar21 = fVar21 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[1] + DAT_10186cd20) - fVar21);
            fVar22 = fVar22 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              (fVar23 - fVar22);
            fVar19 = fVar19 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              (fVar21 - fVar19);
            *param_3 = fVar22;
            param_3[1] = fVar19;
            DAT_10186cd20 = -DAT_10186cd20;
            param_4 = param_4 - 1;
            if (param_4 == 0) break;
            fVar24 = *pfVar7;
            uVar15 = SUB41(fVar24,0);
            uVar16 = (undefined1)((uint)fVar24 >> 8);
            uVar17 = (undefined1)((uint)fVar24 >> 0x10);
            uVar18 = (undefined1)((uint)fVar24 >> 0x18);
            param_2 = param_2 + 2;
            param_3 = param_3 + 2;
          }
        }
        *(float *)(param_1 + 0x1cc) = fVar23;
        *(float *)(param_1 + 0x1d0) = fVar22;
        *(float *)(param_1 + 0x1d4) = fVar21;
        *(float *)(param_1 + 0x1d8) = fVar19;
        return 0;
      case 6:
        fVar31 = *(float *)(param_1 + 0x1cc);
        fVar30 = *(float *)(param_1 + 0x1d0);
        fVar29 = *(float *)(param_1 + 0x1d4);
        fVar28 = *(float *)(param_1 + 0x1d8);
        fVar27 = *(float *)(param_1 + 0x1dc);
        fVar26 = *(float *)(param_1 + 0x1e0);
        fVar25 = *(float *)(param_1 + 0x1e4);
        fVar24 = *(float *)(param_1 + 0x1e8);
        fVar23 = *(float *)(param_1 + 0x1ec);
        fVar22 = *(float *)(param_1 + 0x1f0);
        fVar21 = *(float *)(param_1 + 500);
        fVar19 = *(float *)(param_1 + 0x1f8);
        if (param_4 != 0) {
          while( true ) {
            fVar31 = fVar31 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((*param_2 + DAT_10186cd20) - fVar31);
            fVar29 = fVar29 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[1] + DAT_10186cd20) - fVar29);
            fVar27 = fVar27 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[2] + DAT_10186cd20) - fVar27);
            fVar25 = fVar25 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[3] + DAT_10186cd20) - fVar25);
            fVar23 = fVar23 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[4] + DAT_10186cd20) - fVar23);
            fVar21 = fVar21 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[5] + DAT_10186cd20) - fVar21);
            fVar30 = fVar30 + (fVar31 - fVar30) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar28 = fVar28 + (fVar29 - fVar28) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar26 = fVar26 + (fVar27 - fVar26) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar24 = fVar24 + (fVar25 - fVar24) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar22 = fVar22 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              (fVar23 - fVar22);
            fVar19 = fVar19 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              (fVar21 - fVar19);
            *param_3 = fVar30;
            param_3[1] = fVar28;
            param_3[2] = fVar26;
            param_3[3] = fVar24;
            param_3[4] = fVar22;
            param_3[5] = fVar19;
            DAT_10186cd20 = -DAT_10186cd20;
            param_4 = param_4 - 1;
            if (param_4 == 0) break;
            fVar32 = *pfVar7;
            uVar15 = SUB41(fVar32,0);
            uVar16 = (undefined1)((uint)fVar32 >> 8);
            uVar17 = (undefined1)((uint)fVar32 >> 0x10);
            uVar18 = (undefined1)((uint)fVar32 >> 0x18);
            param_2 = param_2 + 6;
            param_3 = param_3 + 6;
          }
        }
        *(float *)(param_1 + 0x1cc) = fVar31;
        *(float *)(param_1 + 0x1d0) = fVar30;
        *(float *)(param_1 + 0x1d4) = fVar29;
        *(float *)(param_1 + 0x1d8) = fVar28;
        *(float *)(param_1 + 0x1dc) = fVar27;
        *(float *)(param_1 + 0x1e0) = fVar26;
        *(float *)(param_1 + 0x1e4) = fVar25;
        *(float *)(param_1 + 0x1e8) = fVar24;
        *(float *)(param_1 + 0x1ec) = fVar23;
        *(float *)(param_1 + 0x1f0) = fVar22;
        *(float *)(param_1 + 500) = fVar21;
        *(float *)(param_1 + 0x1f8) = fVar19;
        return 0;
      case 8:
        fVar35 = *(float *)(param_1 + 0x1cc);
        fVar34 = *(float *)(param_1 + 0x1d0);
        fVar33 = *(float *)(param_1 + 0x1d4);
        fVar32 = *(float *)(param_1 + 0x1d8);
        fVar31 = *(float *)(param_1 + 0x1dc);
        fVar30 = *(float *)(param_1 + 0x1e0);
        fVar29 = *(float *)(param_1 + 0x1e4);
        fVar28 = *(float *)(param_1 + 0x1e8);
        fVar27 = *(float *)(param_1 + 0x1ec);
        fVar26 = *(float *)(param_1 + 0x1f0);
        fVar25 = *(float *)(param_1 + 500);
        fVar24 = *(float *)(param_1 + 0x1f8);
        fVar23 = *(float *)(param_1 + 0x1fc);
        fVar22 = *(float *)(param_1 + 0x200);
        fVar21 = *(float *)(param_1 + 0x204);
        fVar19 = *(float *)(param_1 + 0x208);
        if (param_4 != 0) {
          while( true ) {
            fVar35 = fVar35 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((*param_2 + DAT_10186cd20) - fVar35);
            fVar33 = fVar33 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[1] + DAT_10186cd20) - fVar33);
            fVar31 = fVar31 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[2] + DAT_10186cd20) - fVar31);
            fVar29 = fVar29 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[3] + DAT_10186cd20) - fVar29);
            fVar27 = fVar27 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[4] + DAT_10186cd20) - fVar27);
            fVar25 = fVar25 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[5] + DAT_10186cd20) - fVar25);
            fVar23 = fVar23 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[6] + DAT_10186cd20) - fVar23);
            fVar21 = fVar21 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              ((param_2[7] + DAT_10186cd20) - fVar21);
            fVar34 = fVar34 + (fVar35 - fVar34) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar32 = fVar32 + (fVar33 - fVar32) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar30 = fVar30 + (fVar31 - fVar30) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar28 = fVar28 + (fVar29 - fVar28) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar26 = fVar26 + (fVar27 - fVar26) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar24 = fVar24 + (fVar25 - fVar24) *
                              (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
            fVar22 = fVar22 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              (fVar23 - fVar22);
            fVar19 = fVar19 + (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) *
                              (fVar21 - fVar19);
            *param_3 = fVar34;
            param_3[1] = fVar32;
            param_3[2] = fVar30;
            param_3[3] = fVar28;
            param_3[4] = fVar26;
            param_3[5] = fVar24;
            param_3[6] = fVar22;
            param_3[7] = fVar19;
            DAT_10186cd20 = -DAT_10186cd20;
            param_4 = param_4 - 1;
            if (param_4 == 0) break;
            fVar6 = *pfVar7;
            uVar15 = SUB41(fVar6,0);
            uVar16 = (undefined1)((uint)fVar6 >> 8);
            uVar17 = (undefined1)((uint)fVar6 >> 0x10);
            uVar18 = (undefined1)((uint)fVar6 >> 0x18);
            param_2 = param_2 + 8;
            param_3 = param_3 + 8;
          }
        }
        *(float *)(param_1 + 0x1cc) = fVar35;
        *(float *)(param_1 + 0x1d0) = fVar34;
        *(float *)(param_1 + 0x1d4) = fVar33;
        *(float *)(param_1 + 0x1d8) = fVar32;
        *(float *)(param_1 + 0x1dc) = fVar31;
        *(float *)(param_1 + 0x1e0) = fVar30;
        *(float *)(param_1 + 0x1e4) = fVar29;
        *(float *)(param_1 + 0x1e8) = fVar28;
        *(float *)(param_1 + 0x1ec) = fVar27;
        *(float *)(param_1 + 0x1f0) = fVar26;
        *(float *)(param_1 + 500) = fVar25;
        *(float *)(param_1 + 0x1f8) = fVar24;
        *(float *)(param_1 + 0x1fc) = fVar23;
        *(float *)(param_1 + 0x200) = fVar22;
        *(float *)(param_1 + 0x204) = fVar21;
        *(float *)(param_1 + 0x208) = fVar19;
        return 0;
      }
      if (iVar14 < 1) {
        return 0;
      }
      lVar10 = 0;
      lVar13 = 0;
      do {
        lVar2 = param_1 + lVar13 * 8;
        uVar5 = *(undefined4 *)(lVar2 + 0x1cc);
        uVar15 = (undefined1)uVar5;
        uVar16 = (undefined1)((uint)uVar5 >> 8);
        uVar17 = (undefined1)((uint)uVar5 >> 0x10);
        uVar18 = (undefined1)((uint)uVar5 >> 0x18);
        fVar19 = *(float *)(lVar2 + 0x1d0);
        lVar3 = lVar10;
        for (uVar4 = param_4; uVar4 != 0; uVar4 = uVar4 - 1) {
          fVar21 = (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) +
                   *pfVar7 * ((*(float *)((long)param_2 + lVar3) + DAT_10186cd20) -
                             (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))));
          uVar15 = SUB41(fVar21,0);
          uVar16 = (undefined1)((uint)fVar21 >> 8);
          uVar17 = (undefined1)((uint)fVar21 >> 0x10);
          uVar18 = (undefined1)((uint)fVar21 >> 0x18);
          fVar19 = fVar19 + *pfVar7 * (fVar21 - fVar19);
          *(float *)((long)param_3 + lVar3) = fVar19;
          DAT_10186cd20 = -DAT_10186cd20;
          lVar3 = lVar3 + (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2
                          );
        }
        *(uint *)(lVar2 + 0x1cc) = CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
        *(float *)(lVar2 + 0x1d0) = fVar19;
        iVar12 = (int)lVar13;
        lVar13 = lVar13 + 1;
        lVar10 = lVar10 + 4;
      } while (iVar12 != iVar14 + -1);
      return 0;
    }
    _bzero(param_3,(ulong)param_4 * (long)iVar14 * 4);
    if (iVar14 < 1) {
      return 0;
    }
    uVar1 = (ulong)(iVar14 - 1) + 1;
    uVar8 = uVar1 & 0x1fffffffe;
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (ulong)(iVar14 - 1) + 1 & 0xfffffffffffffffe;
      puVar11 = (undefined8 *)(param_1 + 0x1cc);
      auVar20 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
      do {
        *puVar11 = 0;
        puVar11[1] = auVar20._0_8_;
        uVar9 = uVar9 - 2;
        puVar11 = puVar11 + 2;
      } while (uVar9 != 0);
    }
    if (uVar1 == uVar8) {
      return 0;
    }
    iVar14 = iVar14 - (int)uVar8;
    lVar13 = param_1 + uVar8 * 8 + 0x1d0;
    do {
      *(undefined8 *)(lVar13 + -4) = 0;
      iVar14 = iVar14 + -1;
      lVar13 = lVar13 + 8;
    } while (iVar14 != 0);
    return 0;
  }
LAB_1005bb9cc:
  _memcpy(param_3,param_2,(ulong)param_4 * (long)iVar14 * 4);
  return 0;
}




undefined8 FUN_1005bbfdc(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x2d0) = param_1;
  }
  return 0;
}




undefined8 FUN_1005bbfec(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x2d0);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
  }
  return 0;
}




void FUN_1005bc034(undefined8 *param_1)

{
  FUN_1005bb734(*param_1);
  return;
}




undefined8 FUN_1005bc03c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = *param_1;
  do {
    *(undefined8 *)(lVar2 + lVar1 + 0x1cc) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x100);
  return 0;
}




undefined8 FUN_1005bc064(undefined8 *param_1)

{
  FUN_1005bb900(*param_1);
  return 0;
}




undefined8 FUN_1005bc080(undefined4 param_1,long *param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(*param_2 + 0x2d0) = param_1;
  }
  return 0;
}




undefined8 FUN_1005bc094(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(*param_1 + 0x2d0);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
  }
  return 0;
}




void FUN_1005bc0e0(void)

{
  _memset(&DAT_101e9a5b8,0,0x60);
  FUN_1005ecc98(&DAT_101e9a5bc,"Fade in time",0x10);
  FUN_1005ecc98(&DAT_101e9a5cc,"seconds",0x10);
  DAT_101e9a5e8 = 0;
  DAT_101e9a5e0 = "Time to ramp the silence to full in ms.  0.0 to 20000.0. Default = 5000.0.";
  DAT_101e9a5ec = 0x469c4000;
  DAT_101e9a5f0 = 0x459c4000;
  DAT_101e9a5f8 = 1;
  _memset(&DAT_101e9a618,0,0x60);
  FUN_1005ecc98(&DAT_101e9a61c,"Lowest volume",0x10);
  FUN_1005ecc98(&DAT_101e9a62c,"",0x10);
  DAT_101e9a640 =
       "Lower volume range threshold to ignore.  0.0 to 1.0.  Default = 0.1.  Raise higher to stop amplification of very quiet signals."
  ;
  DAT_101e9a648 = 0;
  DAT_101e9a64c = 0x3f800000;
  DAT_101e9a650 = 0x3dcccccd;
  DAT_101e9a658 = 1;
  _memset(&DAT_101e9a678,0,0x60);
  FUN_1005ecc98(&DAT_101e9a67c,"Maximum amp",0x10);
  FUN_1005ecc98(&DAT_101e9a68c,"x",0x10);
  DAT_101e9a6a8 = 0;
  DAT_101e9a6b8 = 1;
  DAT_101e9a6ac = 0x47c35000;
  DAT_101e9a6b0 = 0x41a00000;
  DAT_101e9a6a0 =
       "Maximum amplification allowed.  1.0 to 100000.0.  Default = 20.0.  1.0 = no amplifaction, higher values allow more boost."
  ;
  DAT_101e9a6d8 = &DAT_10186cd40;
  DAT_101e9a6f0 = 10;
  DAT_101e9a6e8 = 0x1e8;
  return;
}




undefined8 FUN_1005bc25c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x1c8) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x708);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar3 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x68) + lVar3 * 8) + 0x38),
                            param_1,lVar3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 0xd0);
    } while (lVar3 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}




undefined8 FUN_1005bc2dc(void)

{
  return 0;
}




undefined8 FUN_1005bc2e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x1c8) = 0x3f8000003f800000;
  return 0;
}




undefined8 FUN_1005bc2f4(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    uVar2 = 0;
    iVar3 = 0;
    fVar6 = *(float *)(param_1 + 0x1e0);
    fVar7 = *(float *)(param_1 + 0x1d8);
    fVar8 = *(float *)(param_1 + 0x1dc);
    do {
      fVar9 = *(float *)(param_1 + 0x1c8) - fVar6;
      fVar10 = fVar7;
      if (fVar7 <= fVar9) {
        fVar10 = fVar9;
      }
      *(float *)(param_1 + 0x1c8) = fVar10;
      iVar1 = (int)uVar2;
      iVar4 = param_5;
      if (param_5 != 0) {
        do {
          fVar9 = ABS(*(float *)(param_2 + uVar2 * 4));
          if (fVar10 < fVar9) {
            *(float *)(param_1 + 0x1c8) = fVar9;
            fVar10 = fVar9;
          }
          iVar4 = iVar4 + -1;
          uVar2 = (ulong)((int)uVar2 + 1);
        } while (iVar4 != 0);
        fVar9 = fVar8;
        if (1.0 / fVar10 <= fVar8) {
          fVar9 = 1.0 / fVar10;
        }
        if (param_5 != 0) {
          iVar4 = 0;
          do {
            lVar5 = (ulong)(uint)(iVar1 + iVar4) * 4;
            *(float *)(param_3 + lVar5) = fVar9 * *(float *)(param_2 + lVar5);
            iVar4 = iVar4 + 1;
          } while (param_5 != iVar4);
        }
      }
      iVar3 = iVar3 + 1;
      uVar2 = (ulong)(uint)(iVar1 + param_5);
    } while (iVar3 != param_4);
  }
  return 0;
}




undefined8 FUN_1005bc3a4(undefined4 param_1,long param_2,int param_3)

{
  float fVar1;
  
  if (param_3 == 2) {
    *(undefined4 *)(param_2 + 0x1dc) = param_1;
  }
  else if (param_3 == 1) {
    *(undefined4 *)(param_2 + 0x1d8) = param_1;
  }
  else if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x1d4) = param_1;
  }
  if (*(float *)(param_2 + 0x1d4) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = 1.0 / ((*(float *)(param_2 + 0x1d4) * (float)*(int *)(param_2 + 0x1d0)) / 1000.0);
  }
  *(float *)(param_2 + 0x1e0) = fVar1;
  return 0;
}




undefined8 FUN_1005bc40c(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 2) {
    *param_3 = *(undefined4 *)(param_1 + 0x1dc);
  }
  else if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x1d8);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x1d4);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




undefined8 FUN_1005bc48c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x1c8) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x1d0) = *(undefined4 *)(*(long *)(lVar3 + 0x90) + 0x708);
  lVar2 = *(long *)(lVar3 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar4 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x68) + lVar4 * 8) + 0x38),
                            lVar3,lVar4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar4 = lVar4 + 1;
      lVar2 = *(long *)(lVar3 + 0xd0);
    } while (lVar4 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}




undefined8 FUN_1005bc510(void)

{
  return 0;
}




undefined8 FUN_1005bc518(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x1c8) = 0x3f800000;
  return 0;
}




undefined8 FUN_1005bc530(long *param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    uVar2 = 0;
    iVar3 = 0;
    lVar4 = *param_1;
    fVar7 = *(float *)(lVar4 + 0x1e0);
    fVar8 = *(float *)(lVar4 + 0x1d8);
    fVar9 = *(float *)(lVar4 + 0x1dc);
    do {
      fVar10 = *(float *)(lVar4 + 0x1c8) - fVar7;
      fVar11 = fVar8;
      if (fVar8 <= fVar10) {
        fVar11 = fVar10;
      }
      *(float *)(lVar4 + 0x1c8) = fVar11;
      iVar1 = (int)uVar2;
      iVar5 = param_5;
      if (param_5 != 0) {
        do {
          fVar10 = ABS(*(float *)(param_2 + uVar2 * 4));
          if (fVar11 < fVar10) {
            *(float *)(lVar4 + 0x1c8) = fVar10;
            fVar11 = fVar10;
          }
          iVar5 = iVar5 + -1;
          uVar2 = (ulong)((int)uVar2 + 1);
        } while (iVar5 != 0);
        iVar5 = 0;
        fVar10 = fVar9;
        if (1.0 / fVar11 <= fVar9) {
          fVar10 = 1.0 / fVar11;
        }
        do {
          lVar6 = (ulong)(uint)(iVar1 + iVar5) * 4;
          *(float *)(param_3 + lVar6) = fVar10 * *(float *)(param_2 + lVar6);
          iVar5 = iVar5 + 1;
        } while (param_5 != iVar5);
      }
      iVar3 = iVar3 + 1;
      uVar2 = (ulong)(uint)(iVar1 + param_5);
    } while (iVar3 != param_4);
  }
  return 0;
}




undefined8 FUN_1005bc5e0(undefined4 param_1,long *param_2,int param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *param_2;
  if (param_3 == 2) {
    *(undefined4 *)(lVar1 + 0x1dc) = param_1;
  }
  else if (param_3 == 1) {
    *(undefined4 *)(lVar1 + 0x1d8) = param_1;
  }
  else if (param_3 == 0) {
    *(undefined4 *)(lVar1 + 0x1d4) = param_1;
  }
  if (*(float *)(lVar1 + 0x1d4) == 0.0) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = 1.0 / ((*(float *)(lVar1 + 0x1d4) * (float)*(int *)(lVar1 + 0x1d0)) / 1000.0);
  }
  *(float *)(lVar1 + 0x1e0) = fVar2;
  return 0;
}




undefined8 FUN_1005bc64c(undefined8 *param_1)

{
  FUN_1005bc40c(*param_1);
  return 0;
}




void FUN_1005bc668(void)

{
  _memset(&DAT_101e9a710,0,0x60);
  DAT_101e9a710 = 1;
  FUN_1005ecc98(&DAT_101e9a714,"Oscillator type",0x10);
  FUN_1005ecc98(&DAT_101e9a724,"",0x10);
  DAT_101e9a740 = 0;
  DAT_101e9a738 = "Select a waveform type";
  DAT_101e9a744 = 5;
  DAT_101e9a748 = 0;
  DAT_101e9a74c = 0;
  DAT_101e9a750 = &PTR_s_Sine_10186ce18;
  _memset(&DAT_101e9a770,0,0x60);
  FUN_1005ecc98(&DAT_101e9a774,"Frequency",0x10);
  FUN_1005ecc98(&DAT_101e9a784,"hz",0x10);
  DAT_101e9a7b0 = 1;
  DAT_101e9a7a0 = 0x3f800000;
  DAT_101e9a7a4 = 0x46abe000;
  DAT_101e9a7a8 = 0x435c0000;
  DAT_101e9a798 = "Playback frequency of tone, for example music note A above middle C is 440.0.";
  DAT_101e9a7d0 = &DAT_10186ce58;
  DAT_101e9a7e8 = 2;
  DAT_101e9a7e0 = 0x1f0;
  return;
}




undefined8 FUN_1005bc780(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 0x1cc) = 1;
  lVar5 = *(long *)(param_1 + 0x90);
  uVar1 = *(uint *)(lVar5 + 0x15de8);
  *(undefined4 *)(lVar5 + 0x15de8) = *(undefined4 *)(lVar5 + 0x15dec);
  *(undefined4 *)(lVar5 + 0x15dec) = *(undefined4 *)(lVar5 + 0x15df0);
  uVar2 = *(uint *)(lVar5 + 0x15df4);
  *(uint *)(lVar5 + 0x15df0) = uVar2;
  uVar1 = uVar1 ^ uVar1 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  *(uint *)(lVar5 + 0x15df4) = uVar1;
  *(uint *)(param_1 + 0x1d4) = uVar1;
  *(uint *)(param_1 + 0x1d8) = ~uVar1;
  *(uint *)(param_1 + 0x1dc) = uVar1 * 0x2220c267;
  *(uint *)(param_1 + 0x1e0) = ~uVar1 * -0x57dea137;
  lVar5 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar5 + 0x60)) {
    lVar7 = 0;
    do {
      piVar6 = *(int **)(*(long *)(lVar5 + 0x68) + lVar7 * 8);
      if (*piVar6 == 1) {
        uVar4 = FUN_1005cef94(param_1,lVar7,piVar6[0xe]);
        iVar3 = (int)uVar4;
joined_r0x0001005bc86c:
        if (iVar3 != 0) {
          return uVar4;
        }
      }
      else if (*piVar6 == 0) {
        uVar4 = FUN_1005cef0c(piVar6[0xe],param_1,lVar7);
        iVar3 = (int)uVar4;
        goto joined_r0x0001005bc86c;
      }
      lVar7 = lVar7 + 1;
      lVar5 = *(long *)(param_1 + 0xd0);
    } while (lVar7 < *(int *)(lVar5 + 0x60));
  }
  return 0;
}




undefined8
FUN_1005bc894(long param_1,int param_2,undefined8 param_3,long param_4,undefined8 param_5,
             int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(undefined4 **)(param_4 + 8) = 1;
    }
  }
  else {
    uVar2 = **(uint **)(param_4 + 8);
    pfVar12 = (float *)**(undefined8 **)(param_4 + 0x18);
    fVar14 = *(float *)(param_1 + 0x1ec);
    iVar8 = *(int *)(param_1 + 0x1e4);
    iVar3 = *(int *)(param_1 + 0x1c8);
    if (*(int *)(param_1 + 0x1c8) != iVar8) {
      *(int *)(param_1 + 0x1c8) = iVar8;
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      iVar3 = iVar8;
    }
    if (1 < uVar2) {
      _bzero(pfVar12,(ulong)(uVar2 * param_2) << 2);
      iVar3 = *(int *)(param_1 + 0x1c8);
    }
    switch(iVar3) {
    case 0:
      if (param_2 != 0) {
        fVar13 = *(float *)(param_1 + 0x1d0);
        do {
          fVar13 = (float)_sinf(fVar13);
          *pfVar12 = fVar13;
          fVar13 = fVar14 * 6.2831855 + *(float *)(param_1 + 0x1d0);
          if (6.2831855 <= fVar13) {
            fVar13 = fVar13 + -6.2831855;
          }
          *(float *)(param_1 + 0x1d0) = fVar13;
          pfVar12 = pfVar12 + uVar2;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_2 != 0) {
        iVar8 = *(int *)(param_1 + 0x1cc);
        do {
          *pfVar12 = (float)iVar8;
          fVar13 = fVar14 + *(float *)(param_1 + 0x1d0);
          *(float *)(param_1 + 0x1d0) = fVar13;
          if (1.0 <= fVar13) {
            *(float *)(param_1 + 0x1d0) = fVar13 + -1.0;
            iVar8 = -iVar8;
            *(int *)(param_1 + 0x1cc) = iVar8;
          }
          pfVar12 = pfVar12 + uVar2;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      break;
    case 2:
      if (param_2 != 0) {
        fVar13 = *(float *)(param_1 + 0x1d0);
        do {
          *pfVar12 = fVar13 + fVar13 + -1.0;
          fVar13 = fVar14 + *(float *)(param_1 + 0x1d0);
          if (1.0 <= fVar13) {
            fVar13 = fVar13 + -1.0;
          }
          *(float *)(param_1 + 0x1d0) = fVar13;
          pfVar12 = pfVar12 + uVar2;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      break;
    case 3:
      if (param_2 != 0) {
        fVar13 = *(float *)(param_1 + 0x1d0);
        do {
          *pfVar12 = fVar13 * -2.0 + 1.0;
          fVar13 = fVar14 + *(float *)(param_1 + 0x1d0);
          if (1.0 <= fVar13) {
            fVar13 = fVar13 + -1.0;
          }
          *(float *)(param_1 + 0x1d0) = fVar13;
          pfVar12 = pfVar12 + uVar2;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      break;
    case 4:
      if (param_2 != 0) {
        fVar13 = *(float *)(param_1 + 0x1d0);
        iVar8 = *(int *)(param_1 + 0x1cc);
        do {
          *pfVar12 = fVar13;
          fVar13 = *(float *)(param_1 + 0x1d0) + fVar14 * (float)iVar8 + fVar14 * (float)iVar8;
          *(float *)(param_1 + 0x1d0) = fVar13;
          bVar7 = true;
          if ((fVar13 <= 1.0) && (bVar7 = false, !NAN(fVar13))) {
            bVar7 = fVar13 < -1.0;
          }
          if (bVar7) {
            iVar8 = -iVar8;
            *(int *)(param_1 + 0x1cc) = iVar8;
            fVar13 = fVar13 + fVar14 * (float)iVar8 + fVar14 * (float)iVar8;
            *(float *)(param_1 + 0x1d0) = fVar13;
          }
          pfVar12 = pfVar12 + uVar2;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      break;
    case 5:
      if (param_2 != 0) {
        uVar9 = *(uint *)(param_1 + 0x1d4);
        uVar5 = *(uint *)(param_1 + 0x1d8);
        uVar6 = *(uint *)(param_1 + 0x1dc);
        uVar1 = *(uint *)(param_1 + 0x1e0);
        do {
          uVar4 = uVar1;
          uVar11 = uVar6;
          uVar10 = uVar5;
          uVar9 = uVar9 ^ uVar9 << 0xb;
          uVar1 = uVar9 ^ uVar9 >> 8 ^ uVar4 ^ uVar4 >> 0x13;
          fVar14 = (float)(uVar1 & 0x7fffffff) * 4.656613e-10;
          *pfVar12 = fVar14 + fVar14 + -1.0;
          pfVar12 = pfVar12 + uVar2;
          param_2 = param_2 + -1;
          uVar9 = uVar10;
          uVar5 = uVar11;
          uVar6 = uVar4;
        } while (param_2 != 0);
        *(uint *)(param_1 + 0x1d4) = uVar10;
        *(uint *)(param_1 + 0x1d8) = uVar11;
        *(uint *)(param_1 + 0x1dc) = uVar4;
        *(uint *)(param_1 + 0x1e0) = uVar1;
      }
    }
  }
  return 0;
}




undefined8 FUN_1005bcb88(long param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1e4) = param_3;
  }
  return 0;
}




undefined8 FUN_1005bcb98(long param_1,int param_2,uint *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    return 0x1f;
  }
  uVar3 = *(uint *)(param_1 + 0x1e4);
  uVar1 = 6;
  if ((int)uVar3 < 7) {
    uVar1 = uVar3;
  }
  uVar2 = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar2 = uVar1;
  }
  *param_3 = uVar2;
  if (param_4 != 0) {
    FUN_1005ecc98(param_4,(&PTR_s_Sine_10186ce18)[*(int *)(param_1 + 0x1c8)],0x20);
  }
  return 0;
}




undefined8 FUN_1005bcbfc(float param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(float *)(param_2 + 0x1e8) = param_1;
  }
  else {
    param_1 = *(float *)(param_2 + 0x1e8);
  }
  *(float *)(param_2 + 0x1ec) = param_1 / (float)*(int *)(*(long *)(param_2 + 0x90) + 0x708);
  return 0;
}




undefined8 FUN_1005bcc2c(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x1e8);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
  }
  return 0;
}




void FUN_1005bcc78(undefined8 *param_1)

{
  FUN_1005bc780(*param_1);
  return;
}




undefined8 FUN_1005bcc80(undefined8 *param_1)

{
  FUN_1005bc894(*param_1);
  return 0;
}




undefined8 FUN_1005bcc9c(float param_1,long *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (param_3 == 1) {
    *(float *)(lVar1 + 0x1e8) = param_1;
  }
  else {
    param_1 = *(float *)(lVar1 + 0x1e8);
  }
  *(float *)(lVar1 + 0x1ec) = param_1 / (float)*(int *)(*(long *)(lVar1 + 0x90) + 0x708);
  return 0;
}




undefined8 FUN_1005bccd0(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(*param_1 + 0x1e8);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
  }
  return 0;
}




undefined8 FUN_1005bcd20(long *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(*param_1 + 0x1e4) = param_3;
  }
  return 0;
}




undefined8 FUN_1005bcd34(long *param_1,int param_2,int *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x1e4);
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 6;
      if (iVar1 < 7) {
        iVar3 = iVar1;
      }
    }
    *param_3 = iVar3;
    if (param_4 != 0) {
      FUN_1005ecc98(param_4,(&PTR_s_Sine_10186ce18)[*(int *)(lVar2 + 0x1c8)],0x20);
    }
    return 0;
  }
  return 0x1f;
}




void FUN_1005bcd9c(void)

{
  _memset(&DAT_101e9a808,0,0x60);
  FUN_1005ecc98(&DAT_101e9a80c,"Center freq",0x10);
  FUN_1005ecc98(&DAT_101e9a81c,"Hz",0x10);
  DAT_101e9a838 = 0x41a00000;
  DAT_101e9a830 = "Frequency center.  20.0 to 22000.0.  Default = 8000.0.";
  DAT_101e9a83c = 0x46abe000;
  DAT_101e9a840 = 0x45fa0000;
  DAT_101e9a848 = 1;
  _memset(&DAT_101e9a868,0,0x60);
  FUN_1005ecc98(&DAT_101e9a86c,"Octave range",0x10);
  FUN_1005ecc98(&DAT_101e9a87c,"Octaves",0x10);
  DAT_101e9a890 = "Octave range around the center frequency to filter.  0.2 to 5.0.  Default = 1.0."
  ;
  DAT_101e9a898 = 0x3e4ccccd;
  DAT_101e9a89c = 0x40a00000;
  DAT_101e9a8a0 = 0x3f800000;
  DAT_101e9a8a8 = 1;
  _memset(&DAT_101e9a8c8,0,0x60);
  FUN_1005ecc98(&DAT_101e9a8cc,"Frequency gain",0x10);
  FUN_1005ecc98(&DAT_101e9a8dc,"dB",0x10);
  DAT_101e9a900 = 0;
  DAT_101e9a908 = 1;
  DAT_101e9a8f8 = 0xc1f00000;
  DAT_101e9a8fc = 0x41f00000;
  DAT_101e9a8f0 = "Frequency Gain.  -30.0 to 30.0.  Default = 1.0.";
  DAT_101e9a928 = &DAT_10186cf48;
  DAT_101e9a940 = 0xc;
  DAT_101e9a938 = 0x400;
  return;
}




undefined8 FUN_1005bcf14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *(undefined4 *)(param_1 + 0x1cc) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x1d0) = 0x3f80000000000000;
  lVar3 = *(long *)(param_1 + 0xd0);
  if (*(int *)(lVar3 + 0x60) < 1) {
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar3 + 0x68) + lVar4 * 8) + 0x38),
                            param_1,lVar4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar2 = 0;
      lVar4 = lVar4 + 1;
      lVar3 = *(long *)(param_1 + 0xd0);
    } while (lVar4 < *(int *)(lVar3 + 0x60));
  }
  do {
    lVar3 = param_1 + lVar2;
    *(undefined4 *)(lVar3 + 0x1dc) = 0;
    *(undefined4 *)(lVar3 + 0x1d8) = 0;
    *(undefined8 *)(lVar3 + 0x2d8) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x100);
  fVar6 = *(float *)(param_1 + 0x3f0);
  *(float *)(param_1 + 0x1c8) = fVar6;
  fVar7 = *(float *)(param_1 + 0x3f4);
  *(float *)(param_1 + 0x1cc) = fVar7;
  *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x3f8);
  fVar5 = (float)_powf(0x41200000,*(float *)(param_1 + 0x3f8) / 20.0);
  *(float *)(param_1 + 0x1d4) = fVar5;
  fVar8 = 1.0 / fVar7;
  fVar6 = (float)___sincosf_stret((fVar6 * 6.2831855) /
                                  (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708));
  fVar6 = fVar6 / (fVar8 + fVar8);
  fVar8 = fVar5 * fVar6;
  *(float *)(param_1 + 0x3e4) = fVar8 + 1.0;
  *(float *)(param_1 + 1000) = fVar7 * -2.0;
  *(float *)(param_1 + 0x3ec) = 1.0 - fVar8;
  fVar6 = fVar6 / fVar5;
  *(float *)(param_1 + 0x3d8) = fVar6 + 1.0;
  *(float *)(param_1 + 0x3dc) = fVar7 * -2.0;
  *(float *)(param_1 + 0x3e0) = 1.0 - fVar6;
  return 0;
}




undefined8 FUN_1005bd06c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x1dc) = 0;
    *(undefined4 *)(lVar1 + 0x1d8) = 0;
    *(undefined8 *)(lVar1 + 0x2d8) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x100);
  return 0;
}




undefined8 FUN_1005bd094(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 / param_2;
  fVar1 = (float)___sincosf_stret((param_1 * 6.2831855) /
                                  (float)*(int *)(*(long *)(param_4 + 0x90) + 0x708));
  fVar1 = fVar1 / (fVar2 + fVar2);
  fVar2 = fVar1 * param_3;
  *(float *)(param_4 + 0x3e4) = fVar2 + 1.0;
  *(float *)(param_4 + 1000) = param_2 * -2.0;
  *(float *)(param_4 + 0x3ec) = 1.0 - fVar2;
  fVar1 = fVar1 / param_3;
  *(float *)(param_4 + 0x3d8) = fVar1 + 1.0;
  *(float *)(param_4 + 0x3dc) = param_2 * -2.0;
  *(float *)(param_4 + 0x3e0) = 1.0 - fVar1;
  return 0;
}




undefined8 FUN_1005bd130(long param_1,float *param_2,float *param_3,int param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  fVar49 = *(float *)(param_1 + 0x3f0);
  if (*(float *)(param_1 + 0x1c8) == fVar49) {
    fVar35 = *(float *)(param_1 + 0x3f4);
    if ((*(float *)(param_1 + 0x1cc) == fVar35) &&
       (*(float *)(param_1 + 0x1d0) == *(float *)(param_1 + 0x3f8))) {
      fVar33 = *(float *)(param_1 + 0x3d8);
      fVar49 = *(float *)(param_1 + 0x3dc);
      fVar34 = *(float *)(param_1 + 0x3e0);
      fVar50 = *(float *)(param_1 + 0x3e4);
      fVar35 = *(float *)(param_1 + 1000);
      fVar36 = *(float *)(param_1 + 0x3ec);
      goto LAB_1005bd24c;
    }
  }
  else {
    fVar35 = *(float *)(param_1 + 0x3f4);
  }
  *(float *)(param_1 + 0x1c8) = fVar49;
  *(float *)(param_1 + 0x1cc) = fVar35;
  *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x3f8);
  fVar33 = (float)_powf(0x41200000,*(float *)(param_1 + 0x3f8) / 20.0);
  *(float *)(param_1 + 0x1d4) = fVar33;
  fVar50 = 1.0 / fVar35;
  fVar34 = (float)___sincosf_stret((fVar49 * 6.2831855) /
                                   (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708));
  fVar34 = fVar34 / (fVar50 + fVar50);
  fVar36 = fVar33 * fVar34;
  fVar50 = fVar36 + 1.0;
  *(float *)(param_1 + 0x3e4) = fVar50;
  fVar35 = fVar35 * -2.0;
  *(float *)(param_1 + 1000) = fVar35;
  fVar36 = 1.0 - fVar36;
  *(float *)(param_1 + 0x3ec) = fVar36;
  fVar34 = fVar34 / fVar33;
  fVar33 = fVar34 + 1.0;
  *(float *)(param_1 + 0x3d8) = fVar33;
  *(float *)(param_1 + 0x3dc) = fVar35;
  fVar34 = 1.0 - fVar34;
  *(float *)(param_1 + 0x3e0) = fVar34;
  fVar49 = fVar35;
LAB_1005bd24c:
  iVar32 = (int)param_5;
  fVar33 = 1.0 / fVar33;
  switch(iVar32) {
  case 1:
    fVar51 = *(float *)(param_1 + 0x1d8);
    fVar7 = *(float *)(param_1 + 0x1dc);
    fVar42 = *(float *)(param_1 + 0x2d8);
    fVar8 = *(float *)(param_1 + 0x2dc);
    for (; fVar43 = fVar42, fVar37 = fVar51, param_4 != 0; param_4 = param_4 + -1) {
      fVar51 = *param_2;
      fVar42 = fVar33 * (((fVar36 * fVar7 + fVar35 * fVar37 + fVar50 * fVar51) - fVar49 * fVar43) -
                        fVar34 * fVar8);
      *param_3 = fVar42;
      fVar7 = fVar37;
      fVar8 = fVar43;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    }
    *(float *)(param_1 + 0x1d8) = fVar37;
    *(float *)(param_1 + 0x1dc) = fVar7;
    *(float *)(param_1 + 0x2d8) = fVar43;
    *(float *)(param_1 + 0x2dc) = fVar8;
    break;
  case 2:
    fVar37 = *(float *)(param_1 + 0x1d8);
    fVar43 = *(float *)(param_1 + 0x1e0);
    fVar7 = *(float *)(param_1 + 0x1dc);
    fVar8 = *(float *)(param_1 + 0x1e4);
    fVar52 = *(float *)(param_1 + 0x2d8);
    fVar54 = *(float *)(param_1 + 0x2e0);
    fVar51 = *(float *)(param_1 + 0x2dc);
    fVar42 = *(float *)(param_1 + 0x2e4);
    for (; fVar28 = fVar54, fVar27 = fVar52, fVar26 = fVar43, fVar25 = fVar37, param_4 != 0;
        param_4 = param_4 + -1) {
      fVar37 = *param_2;
      fVar43 = param_2[1];
      param_2 = param_2 + 2;
      fVar52 = fVar33 * (((fVar36 * fVar7 + fVar35 * fVar25 + fVar50 * fVar37) - fVar49 * fVar27) -
                        fVar34 * fVar51);
      fVar54 = fVar33 * (((fVar36 * fVar8 + fVar35 * fVar26 + fVar50 * fVar43) - fVar49 * fVar28) -
                        fVar34 * fVar42);
      *param_3 = fVar52;
      param_3[1] = fVar54;
      param_3 = param_3 + 2;
      fVar7 = fVar25;
      fVar8 = fVar26;
      fVar51 = fVar27;
      fVar42 = fVar28;
    }
    *(float *)(param_1 + 0x1d8) = fVar25;
    *(float *)(param_1 + 0x1e0) = fVar26;
    *(float *)(param_1 + 0x1dc) = fVar7;
    *(float *)(param_1 + 0x1e4) = fVar8;
    *(float *)(param_1 + 0x2d8) = fVar27;
    *(float *)(param_1 + 0x2e0) = fVar28;
    *(float *)(param_1 + 0x2dc) = fVar51;
    *(float *)(param_1 + 0x2e4) = fVar42;
    break;
  default:
    if (0 < iVar32) {
      lVar29 = 0;
      lVar31 = 0;
      do {
        lVar1 = param_1 + lVar31 * 8;
        fVar51 = *(float *)(lVar1 + 0x1d8);
        fVar7 = *(float *)(lVar1 + 0x1dc);
        fVar42 = *(float *)(lVar1 + 0x2d8);
        fVar8 = *(float *)(lVar1 + 0x2dc);
        lVar2 = lVar29;
        for (iVar30 = param_4; fVar43 = fVar42, fVar37 = fVar51, iVar30 != 0; iVar30 = iVar30 + -1)
        {
          fVar51 = *(float *)((long)param_2 + lVar2);
          fVar42 = fVar33 * (((fVar36 * fVar7 + fVar35 * fVar37 + fVar50 * fVar51) - fVar49 * fVar43
                             ) - fVar34 * fVar8);
          *(float *)((long)param_3 + lVar2) = fVar42;
          lVar2 = lVar2 + (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2
                          );
          fVar7 = fVar37;
          fVar8 = fVar43;
        }
        *(float *)(lVar1 + 0x1d8) = fVar37;
        *(float *)(lVar1 + 0x1dc) = fVar7;
        *(float *)(lVar1 + 0x2d8) = fVar43;
        *(float *)(lVar1 + 0x2dc) = fVar8;
        iVar30 = (int)lVar31;
        lVar31 = lVar31 + 1;
        lVar29 = lVar29 + 4;
      } while (iVar30 != iVar32 + -1);
    }
    break;
  case 6:
    fVar38 = *(float *)(param_1 + 0x1d8);
    fVar39 = *(float *)(param_1 + 0x1e0);
    fVar40 = *(float *)(param_1 + 0x1e8);
    fVar41 = *(float *)(param_1 + 0x1f0);
    fVar44 = *(float *)(param_1 + 0x1f8);
    fVar53 = *(float *)(param_1 + 0x200);
    fVar7 = *(float *)(param_1 + 0x1dc);
    fVar8 = *(float *)(param_1 + 0x1e4);
    fVar51 = *(float *)(param_1 + 0x1ec);
    fVar42 = *(float *)(param_1 + 500);
    fVar37 = *(float *)(param_1 + 0x1fc);
    fVar43 = *(float *)(param_1 + 0x204);
    fVar55 = *(float *)(param_1 + 0x2d8);
    fVar56 = *(float *)(param_1 + 0x2e0);
    fVar57 = *(float *)(param_1 + 0x2e8);
    fVar58 = *(float *)(param_1 + 0x2f0);
    fVar64 = *(float *)(param_1 + 0x2f8);
    fVar63 = *(float *)(param_1 + 0x300);
    fVar52 = *(float *)(param_1 + 0x2dc);
    fVar54 = *(float *)(param_1 + 0x2e4);
    fVar25 = *(float *)(param_1 + 0x2ec);
    fVar26 = *(float *)(param_1 + 0x2f4);
    fVar27 = *(float *)(param_1 + 0x2fc);
    fVar28 = *(float *)(param_1 + 0x304);
    while (fVar12 = fVar63, fVar11 = fVar64, fVar10 = fVar58, fVar9 = fVar57, fVar48 = fVar56,
          fVar47 = fVar55, fVar46 = fVar53, fVar45 = fVar44, fVar62 = fVar41, fVar61 = fVar40,
          fVar60 = fVar39, fVar59 = fVar38, param_4 != 0) {
      fVar44 = param_2[4];
      fVar53 = param_2[5];
      fVar40 = param_2[2];
      fVar41 = param_2[3];
      fVar38 = *param_2;
      fVar39 = param_2[1];
      param_4 = param_4 + -1;
      fVar55 = (((fVar36 * fVar7 + fVar35 * fVar59 + fVar38 * fVar50) - fVar49 * fVar47) -
               fVar34 * fVar52) * fVar33;
      fVar56 = (((fVar36 * fVar8 + fVar35 * fVar60 + fVar39 * fVar50) - fVar49 * fVar48) -
               fVar34 * fVar54) * fVar33;
      fVar57 = (((fVar36 * fVar51 + fVar35 * fVar61 + fVar40 * fVar50) - fVar49 * fVar9) -
               fVar34 * fVar25) * fVar33;
      fVar58 = (((fVar36 * fVar42 + fVar35 * fVar62 + fVar41 * fVar50) - fVar49 * fVar10) -
               fVar34 * fVar26) * fVar33;
      *(ulong *)param_3 = CONCAT44(fVar56,fVar55);
      fVar64 = fVar33 * (((fVar36 * fVar37 + fVar35 * fVar45 + fVar50 * fVar44) - fVar49 * fVar11) -
                        fVar34 * fVar27);
      fVar63 = fVar33 * (((fVar36 * fVar43 + fVar35 * fVar46 + fVar50 * fVar53) - fVar49 * fVar12) -
                        fVar34 * fVar28);
      auVar3._4_4_ = fVar56;
      auVar3._0_4_ = fVar55;
      auVar3._8_4_ = fVar57;
      auVar3._12_4_ = fVar58;
      auVar4._4_4_ = fVar56;
      auVar4._0_4_ = fVar55;
      auVar4._8_4_ = fVar57;
      auVar4._12_4_ = fVar58;
      auVar65 = NEON_ext(auVar3,auVar4,8,1);
      *(long *)(param_3 + 2) = auVar65._0_8_;
      param_3[4] = fVar64;
      param_3[5] = fVar63;
      param_3 = param_3 + 6;
      fVar7 = fVar59;
      fVar8 = fVar60;
      fVar51 = fVar61;
      fVar42 = fVar62;
      fVar37 = fVar45;
      fVar43 = fVar46;
      fVar52 = fVar47;
      fVar54 = fVar48;
      fVar25 = fVar9;
      fVar26 = fVar10;
      fVar27 = fVar11;
      fVar28 = fVar12;
      param_2 = param_2 + 6;
    }
    *(float *)(param_1 + 0x1d8) = fVar59;
    *(float *)(param_1 + 0x1e0) = fVar60;
    *(float *)(param_1 + 0x1e8) = fVar61;
    *(float *)(param_1 + 0x1f0) = fVar62;
    *(float *)(param_1 + 0x1f8) = fVar45;
    *(float *)(param_1 + 0x200) = fVar46;
    *(float *)(param_1 + 0x1dc) = fVar7;
    *(float *)(param_1 + 0x1e4) = fVar8;
    *(float *)(param_1 + 0x1ec) = fVar51;
    *(float *)(param_1 + 500) = fVar42;
    *(float *)(param_1 + 0x1fc) = fVar37;
    *(float *)(param_1 + 0x204) = fVar43;
    *(float *)(param_1 + 0x2d8) = fVar47;
    *(float *)(param_1 + 0x2e0) = fVar48;
    *(float *)(param_1 + 0x2e8) = fVar9;
    *(float *)(param_1 + 0x2f0) = fVar10;
    *(float *)(param_1 + 0x2f8) = fVar11;
    *(float *)(param_1 + 0x300) = fVar12;
    *(float *)(param_1 + 0x2dc) = fVar52;
    *(float *)(param_1 + 0x2e4) = fVar54;
    *(float *)(param_1 + 0x2ec) = fVar25;
    *(float *)(param_1 + 0x2f4) = fVar26;
    *(float *)(param_1 + 0x2fc) = fVar27;
    *(float *)(param_1 + 0x304) = fVar28;
    break;
  case 8:
    fVar44 = *(float *)(param_1 + 0x1d8);
    fVar53 = *(float *)(param_1 + 0x1e0);
    fVar55 = *(float *)(param_1 + 0x1e8);
    fVar56 = *(float *)(param_1 + 0x1f0);
    fVar57 = *(float *)(param_1 + 0x1f8);
    fVar58 = *(float *)(param_1 + 0x200);
    fVar64 = *(float *)(param_1 + 0x208);
    fVar63 = *(float *)(param_1 + 0x210);
    fVar7 = *(float *)(param_1 + 0x1dc);
    fVar8 = *(float *)(param_1 + 0x1e4);
    fVar51 = *(float *)(param_1 + 0x1ec);
    fVar42 = *(float *)(param_1 + 500);
    fVar37 = *(float *)(param_1 + 0x1fc);
    fVar43 = *(float *)(param_1 + 0x204);
    fVar52 = *(float *)(param_1 + 0x20c);
    fVar54 = *(float *)(param_1 + 0x214);
    fVar59 = *(float *)(param_1 + 0x2d8);
    fVar60 = *(float *)(param_1 + 0x2e0);
    fVar61 = *(float *)(param_1 + 0x2e8);
    fVar62 = *(float *)(param_1 + 0x2f0);
    fVar45 = *(float *)(param_1 + 0x2f8);
    fVar46 = *(float *)(param_1 + 0x300);
    fVar47 = *(float *)(param_1 + 0x308);
    fVar48 = *(float *)(param_1 + 0x310);
    fVar25 = *(float *)(param_1 + 0x2dc);
    fVar26 = *(float *)(param_1 + 0x2e4);
    fVar27 = *(float *)(param_1 + 0x2ec);
    fVar28 = *(float *)(param_1 + 0x2f4);
    fVar38 = *(float *)(param_1 + 0x2fc);
    fVar39 = *(float *)(param_1 + 0x304);
    fVar40 = *(float *)(param_1 + 0x30c);
    fVar41 = *(float *)(param_1 + 0x314);
    for (; fVar24 = fVar48, fVar23 = fVar47, fVar22 = fVar46, fVar21 = fVar45, fVar20 = fVar62,
        fVar19 = fVar61, fVar18 = fVar60, fVar17 = fVar59, fVar16 = fVar63, fVar15 = fVar64,
        fVar14 = fVar58, fVar13 = fVar57, fVar12 = fVar56, fVar11 = fVar55, fVar10 = fVar53,
        fVar9 = fVar44, param_4 != 0; param_4 = param_4 + -1) {
      fVar55 = param_2[2];
      fVar56 = param_2[3];
      fVar44 = *param_2;
      fVar53 = param_2[1];
      fVar64 = (float)*(undefined8 *)(param_2 + 6);
      fVar63 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
      fVar57 = (float)*(undefined8 *)(param_2 + 4);
      fVar58 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar59 = (((fVar36 * fVar7 + fVar35 * fVar9 + fVar44 * fVar50) - fVar49 * fVar17) -
               fVar34 * fVar25) * fVar33;
      fVar60 = (((fVar36 * fVar8 + fVar35 * fVar10 + fVar53 * fVar50) - fVar49 * fVar18) -
               fVar34 * fVar26) * fVar33;
      fVar61 = (((fVar36 * fVar51 + fVar35 * fVar11 + fVar55 * fVar50) - fVar49 * fVar19) -
               fVar34 * fVar27) * fVar33;
      fVar62 = (((fVar36 * fVar42 + fVar35 * fVar12 + fVar56 * fVar50) - fVar49 * fVar20) -
               fVar34 * fVar28) * fVar33;
      fVar45 = (((fVar36 * fVar37 + fVar35 * fVar13 + fVar57 * fVar50) - fVar49 * fVar21) -
               fVar34 * fVar38) * fVar33;
      fVar46 = (((fVar36 * fVar43 + fVar35 * fVar14 + fVar58 * fVar50) - fVar49 * fVar22) -
               fVar34 * fVar39) * fVar33;
      fVar47 = (((fVar36 * fVar52 + fVar35 * fVar15 + fVar64 * fVar50) - fVar49 * fVar23) -
               fVar34 * fVar40) * fVar33;
      fVar48 = (((fVar36 * fVar54 + fVar35 * fVar16 + fVar63 * fVar50) - fVar49 * fVar24) -
               fVar34 * fVar41) * fVar33;
      *(ulong *)param_3 = CONCAT44(fVar60,fVar59);
      auVar65._4_4_ = fVar46;
      auVar65._0_4_ = fVar45;
      auVar65._8_4_ = fVar47;
      auVar65._12_4_ = fVar48;
      auVar66._4_4_ = fVar46;
      auVar66._0_4_ = fVar45;
      auVar66._8_4_ = fVar47;
      auVar66._12_4_ = fVar48;
      auVar65 = NEON_ext(auVar65,auVar66,8,1);
      auVar5._4_4_ = fVar60;
      auVar5._0_4_ = fVar59;
      auVar5._8_4_ = fVar61;
      auVar5._12_4_ = fVar62;
      auVar6._4_4_ = fVar60;
      auVar6._0_4_ = fVar59;
      auVar6._8_4_ = fVar61;
      auVar6._12_4_ = fVar62;
      auVar66 = NEON_ext(auVar5,auVar6,8,1);
      *(long *)(param_3 + 2) = auVar66._0_8_;
      *(ulong *)(param_3 + 4) = CONCAT44(fVar46,fVar45);
      *(long *)(param_3 + 6) = auVar65._0_8_;
      param_2 = param_2 + 8;
      param_3 = param_3 + 8;
      fVar7 = fVar9;
      fVar8 = fVar10;
      fVar51 = fVar11;
      fVar42 = fVar12;
      fVar37 = fVar13;
      fVar43 = fVar14;
      fVar52 = fVar15;
      fVar54 = fVar16;
      fVar25 = fVar17;
      fVar26 = fVar18;
      fVar27 = fVar19;
      fVar28 = fVar20;
      fVar38 = fVar21;
      fVar39 = fVar22;
      fVar40 = fVar23;
      fVar41 = fVar24;
    }
    *(float *)(param_1 + 0x1d8) = fVar9;
    *(float *)(param_1 + 0x1e0) = fVar10;
    *(float *)(param_1 + 0x1e8) = fVar11;
    *(float *)(param_1 + 0x1f0) = fVar12;
    *(float *)(param_1 + 0x1f8) = fVar13;
    *(float *)(param_1 + 0x200) = fVar14;
    *(float *)(param_1 + 0x208) = fVar15;
    *(float *)(param_1 + 0x210) = fVar16;
    *(float *)(param_1 + 0x1dc) = fVar7;
    *(float *)(param_1 + 0x1e4) = fVar8;
    *(float *)(param_1 + 0x1ec) = fVar51;
    *(float *)(param_1 + 500) = fVar42;
    *(float *)(param_1 + 0x1fc) = fVar37;
    *(float *)(param_1 + 0x204) = fVar43;
    *(float *)(param_1 + 0x20c) = fVar52;
    *(float *)(param_1 + 0x214) = fVar54;
    *(float *)(param_1 + 0x2d8) = fVar17;
    *(float *)(param_1 + 0x2e0) = fVar18;
    *(float *)(param_1 + 0x2e8) = fVar19;
    *(float *)(param_1 + 0x2f0) = fVar20;
    *(float *)(param_1 + 0x2f8) = fVar21;
    *(float *)(param_1 + 0x300) = fVar22;
    *(float *)(param_1 + 0x308) = fVar23;
    *(float *)(param_1 + 0x310) = fVar24;
    *(float *)(param_1 + 0x2dc) = fVar25;
    *(float *)(param_1 + 0x2e4) = fVar26;
    *(float *)(param_1 + 0x2ec) = fVar27;
    *(float *)(param_1 + 0x2f4) = fVar28;
    *(float *)(param_1 + 0x2fc) = fVar38;
    *(float *)(param_1 + 0x304) = fVar39;
    *(float *)(param_1 + 0x30c) = fVar40;
    *(float *)(param_1 + 0x314) = fVar41;
  }
  return 0;
}




undefined8 FUN_1005bd9bc(float param_1,long param_2,int param_3)

{
  float fVar1;
  
  if (param_3 == 2) {
    *(float *)(param_2 + 0x3f8) = param_1;
  }
  else {
    if (param_3 == 1) {
      *(float *)(param_2 + 0x3f4) = param_1;
      return 0;
    }
    if (param_3 == 0) {
      fVar1 = (float)*(int *)(*(long *)(param_2 + 0x90) + 0x708) * 0.5 + -100.0;
      if (param_1 < fVar1) {
        fVar1 = param_1;
      }
      *(float *)(param_2 + 0x3f0) = fVar1;
      return 0;
    }
  }
  return 0;
}




undefined8 FUN_1005bda20(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 2) {
    *param_3 = *(undefined4 *)(param_1 + 0x3f8);
  }
  else if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x3f4);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x3f0);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1005bdaa0(undefined8 *param_1)

{
  FUN_1005bcf14(*param_1);
  return;
}




undefined8 FUN_1005bdaa8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = *param_1;
  do {
    lVar1 = lVar3 + lVar2;
    *(undefined4 *)(lVar1 + 0x1dc) = 0;
    *(undefined4 *)(lVar1 + 0x1d8) = 0;
    *(undefined8 *)(lVar1 + 0x2d8) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x100);
  return 0;
}




undefined8 FUN_1005bdad4(undefined8 *param_1)

{
  FUN_1005bd130(*param_1);
  return 0;
}




undefined8 FUN_1005bdaf0(float param_1,long *param_2,int param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *param_2;
  if (param_3 == 2) {
    *(float *)(lVar1 + 0x3f8) = param_1;
  }
  else {
    if (param_3 == 1) {
      *(float *)(lVar1 + 0x3f4) = param_1;
      return 0;
    }
    if (param_3 == 0) {
      fVar2 = (float)*(int *)(*(long *)(lVar1 + 0x90) + 0x708) * 0.5 + -100.0;
      if (param_1 < fVar2) {
        fVar2 = param_1;
      }
      *(float *)(lVar1 + 0x3f0) = fVar2;
      return 0;
    }
  }
  return 0;
}




undefined8 FUN_1005bdb58(undefined8 *param_1)

{
  FUN_1005bda20(*param_1);
  return 0;
}




undefined8 FUN_1005bdb74(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar6 = 0;
  lVar4 = *param_1;
  puVar7 = (undefined8 *)(lVar4 + 0x1c8);
  do {
    iVar5 = (int)lVar6;
    auVar10._4_4_ = iVar5 + 1;
    auVar10._0_4_ = iVar5;
    auVar10._8_4_ = iVar5 + 2;
    auVar10._12_4_ = iVar5 + 3;
    auVar11 = NEON_scvtf(auVar10,4);
    uVar8 = _cosf();
    auVar2._4_4_ = auVar11._4_4_ * 1.5707964 * 0.00012207031;
    auVar2._0_4_ = auVar11._0_4_ * 1.5707964 * 0.00012207031;
    auVar2._8_4_ = auVar11._8_4_ * 1.5707964 * 0.00012207031;
    auVar2._12_4_ = auVar11._12_4_ * 1.5707964 * 0.00012207031;
    uVar9 = _cosf(auVar2);
    uVar3 = CONCAT44(uVar8,uVar9);
    uVar8 = _cosf();
    uVar9 = _cosf();
    auVar1._8_4_ = uVar8;
    auVar1._0_8_ = uVar3;
    auVar11._8_4_ = uVar8;
    auVar11._0_8_ = uVar3;
    *puVar7 = uVar3;
    auVar11._12_4_ = uVar9;
    auVar1._12_4_ = uVar9;
    auVar11 = NEON_ext(auVar11,auVar1,8,1);
    puVar7[1] = auVar11._0_8_;
    lVar6 = lVar6 + 4;
    puVar7 = puVar7 + 2;
  } while (lVar6 != 0x2000);
  *(undefined4 *)(lVar4 + 0xc1d0) = 4;
  *(undefined8 *)(lVar4 + 0xc1d8) = 0;
  *(undefined4 *)(lVar4 + 0xc1c8) = 0x3f800000;
  if (0 < *(int *)(*(long *)(lVar4 + 0xd0) + 0x60)) {
    lVar6 = 0;
    do {
      uVar3 = FUN_1005cef0c(lVar4,lVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(*(long *)(lVar4 + 0xd0) + 0x60));
  }
  return 0;
}




undefined8 FUN_1005bdcc8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(lVar2 + 0xc1d8);
  if (lVar1 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_pitchshift.cpp"
                  ,0x324);
    *(long *)(lVar2 + 0xc1d8) = 0;
  }
  return 0;
}




undefined8 FUN_1005bdd1c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0xc1d8);
  if ((lVar3 != 0) && (0 < *(int *)(lVar1 + 0xc1e4))) {
    lVar4 = 0;
    lVar5 = 0;
    lVar2 = 0x14038;
    do {
      _bzero((void *)(lVar3 + lVar4),0x14020);
      _bzero(&DAT_101da1f70,0x8000);
      _bzero(&DAT_101db4078,0x4000);
      _bzero(&DAT_101db8078,0x4000);
      _bzero(&DAT_101dac078,0x4000);
      _bzero(&DAT_101db0078,0x4000);
      *(undefined4 *)(lVar3 + lVar2 + -0x10) = 0;
      lVar3 = *(long *)(lVar1 + 0xc1d8);
      *(long *)(lVar3 + lVar2) = lVar1 + 0x1c8;
      lVar5 = lVar5 + 1;
      lVar2 = lVar2 + 0x14048;
      lVar4 = lVar4 + 0x14048;
    } while (lVar5 < *(int *)(lVar1 + 0xc1e4));
  }
  return 0;
}




undefined8
FUN_1005bde28(long *param_1,void *param_2,void *param_3,undefined8 param_4,undefined8 param_5,
             int *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 != (void *)0x0) {
    lVar2 = *param_1;
    iVar3 = (int)param_5;
    if (iVar3 <= *(int *)(lVar2 + 0xc1e4)) {
      lVar1 = *(long *)(lVar2 + 0xc1d8);
      if (lVar1 != 0) {
        if (iVar3 < 1) {
          return 0;
        }
        lVar5 = 0;
        iVar4 = 0;
        while( true ) {
          lVar1 = lVar1 + lVar5;
          *(undefined4 *)(lVar1 + 0x14030) = *(undefined4 *)(lVar2 + 0xc1cc);
          *(undefined4 *)(lVar1 + 0x14034) = *(undefined4 *)(lVar2 + 0xc1e8);
          FUN_1005bf7d0(*(undefined4 *)(lVar2 + 0xc1c8),(float)*(int *)(lVar2 + 0xc1e0),lVar1,
                        param_4,*(undefined4 *)(lVar2 + 0xc1d0),param_2,param_3,iVar4,param_5);
          if (iVar3 + -1 == iVar4) break;
          lVar1 = *(long *)(lVar2 + 0xc1d8);
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 0x14048;
        }
        return 0;
      }
    }
    _memcpy(param_3,param_2,(ulong)(uint)(*param_6 * (int)param_4) << 2);
  }
  return 0;
}




void FUN_1005bdf74(undefined8 *param_1)

{
  FUN_1005c0bec(*param_1);
  return;
}




undefined8 FUN_1005bdf7c(undefined8 *param_1)

{
  FUN_1005c1308(*param_1);
  return 0;
}




void FUN_1005bdf98(void)

{
  _memset(&DAT_101e9a960,0,0x60);
  FUN_1005ecc98(&DAT_101e9a964,"Pitch",0x10);
  FUN_1005ecc98(&DAT_101e9a974,"x",0x10);
  DAT_101e9a990 = 0x3f000000;
  DAT_101e9a988 =
       "Pitch value.  0.5 to 2.0.  Default = 1.0. 0.5 = one octave down, 2.0 = one octave up.  1.0 does not change the pitch."
  ;
  DAT_101e9a994 = 0x40000000;
  DAT_101e9a998 = 0x3f800000;
  DAT_101e9a9a0 = 1;
  _memset(&DAT_101e9a9c0,0,0x60);
  FUN_1005ecc98(&DAT_101e9a9c4,"FFT size",0x10);
  FUN_1005ecc98(&DAT_101e9a9d4,"",0x10);
  DAT_101e9a9e8 =
       "FFT window size.  256, 512, 1024, 2048, 4096.  Default = 1024.  Increase this to reduce \'smearing\'.  This effect is a warbling sound similar to when an mp3 is encoded at very low bitrates."
  ;
  DAT_101e9a9f0 = 0x43800000;
  DAT_101e9a9f4 = 0x45800000;
  DAT_101e9a9f8 = 0x44800000;
  DAT_101e9aa00 = 1;
  _memset(&DAT_101e9aa20,0,0x60);
  FUN_1005ecc98(&DAT_101e9aa24,"Overlap",0x10);
  FUN_1005ecc98(&DAT_101e9aa34,"",0x10);
  DAT_101e9aa48 =
       "Window overlap.  1 to 32.  Default = 4.  Increase this to reduce \'tremolo\' effect.  Increasing it by a factor of 2 doubles the CPU usage."
  ;
  DAT_101e9aa50 = 0x3f800000;
  DAT_101e9aa54 = 0x42000000;
  DAT_101e9aa58 = 0x40800000;
  DAT_101e9aa60 = 1;
  _memset(&DAT_101e9aa80,0,0x60);
  FUN_1005ecc98(&DAT_101e9aa84,"Max channels",0x10);
  FUN_1005ecc98(&DAT_101e9aa94,"channels",0x10);
  DAT_101e9aab0 = 0;
  DAT_101e9aac0 = 1;
  DAT_101e9aab4 = 0x41800000;
  DAT_101e9aab8 = 0;
  DAT_101e9aaa8 =
       "Maximum channels supported.  0 to 16.  0 = same as fmod\'s default output polyphony, 1 = mono, 2 = stereo etc.  See remarks for more.  Default = 0.  It is suggested to leave at 0!"
  ;
  DAT_101da1f38 = &DAT_10186d040;
  DAT_101da1f50 = 0xd;
  DAT_101da1f48 = 0xc1f0;
  return;
}




void FUN_1005be164(ulong param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = param_2 >> 1;
  DAT_101dabf74 = 1;
  param_2 = param_2 >> 2;
  DAT_101da9f70 = 0x3f800000;
  lVar5 = *(long *)(param_1 + 0x14038);
  uVar1 = *(undefined4 *)(lVar5 + 0x4000);
  DAT_101dabf70 = iVar3;
  *(undefined4 *)((long)&DAT_101da9f70 + (long)param_2 * 4) = uVar1;
  *(undefined4 *)((long)&DAT_101da9f70 + (long)param_2 * 4 + 4) = uVar1;
  if (2 < param_2) {
    iVar6 = iVar3 + -1;
    pfVar7 = (float *)((long)&DAT_101da9f70 + (long)iVar3 * 4);
    lVar9 = 2;
    pfVar8 = (float *)&DAT_101da9f7c;
    do {
      pfVar7 = pfVar7 + -2;
      fVar11 = (1.0 / ((float)param_2 * 8.0)) * (float)(int)lVar9;
      uVar2 = (uint)(fVar11 * 32768.0);
      uVar4 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar4 = uVar2;
      }
      uVar2 = uVar4 >> 0xd & 3;
      if (uVar2 < 4) {
        uVar4 = uVar4 & 0x7fff;
        switch(uVar2) {
        case 1:
          iVar3 = 0x3fff - uVar4;
          break;
        case 2:
          iVar3 = uVar4 - 0x4000;
          break;
        case 3:
          uVar4 = uVar4 ^ 0x7fff;
        case 0:
          fVar10 = *(float *)(lVar5 + (ulong)uVar4 * 4);
          goto LAB_1005be24c;
        }
        fVar10 = -*(float *)(lVar5 + (long)iVar3 * 4);
      }
      else {
        fVar10 = 0.0;
      }
LAB_1005be24c:
      uVar2 = (uint)((fVar11 + -0.25) * 32768.0);
      uVar4 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar4 = uVar2;
      }
      param_1 = (ulong)uVar4;
      uVar2 = uVar4 >> 0xd & 3;
      if (uVar2 < 4) {
        uVar4 = uVar4 & 0x7fff;
        switch(uVar2) {
        case 1:
          uVar4 = 0x3fff - uVar4;
          break;
        case 2:
          uVar4 = uVar4 - 0x4000;
          break;
        case 3:
          uVar4 = uVar4 ^ 0x7fff;
        case 0:
          param_1 = (ulong)uVar4;
          fVar11 = *(float *)(lVar5 + param_1 * 4);
          goto LAB_1005be2a0;
        }
        param_1 = (ulong)uVar4;
        fVar11 = -*(float *)(lVar5 + (long)(int)uVar4 * 4);
      }
      else {
        fVar11 = 0.0;
      }
LAB_1005be2a0:
      pfVar8[-1] = fVar10;
      *pfVar8 = fVar11;
      *pfVar7 = fVar11;
      *(float *)((long)&DAT_101da9f70 + (long)iVar6 * 4) = fVar10;
      lVar9 = lVar9 + 2;
      iVar6 = iVar6 + -2;
      pfVar8 = pfVar8 + 2;
    } while (lVar9 < param_2);
  }
  FUN_1005be2ec(param_1,&DAT_101da9f70);
  return;
}




void FUN_1005be2ec(undefined8 param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  DAT_101dabf78 = 0;
  uVar13 = 1;
  if (param_3 < 9) {
    iVar8 = 8;
  }
  else {
    uVar9 = 1;
    do {
      param_3 = param_3 >> 1;
      iVar8 = (int)uVar9;
      uVar14 = (ulong)(iVar8 - 1);
      if (0 < iVar8) {
        uVar10 = uVar14 + 1 & 0x1fffffff8;
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else if ((&DAT_101dabf78 + uVar14 < &DAT_101dabf78 + iVar8) ||
                (&DAT_101dabf78 + (long)iVar8 + uVar14 < &DAT_101dabf78)) {
          uVar15 = uVar14 + 1 & 0xfffffffffffffff8;
          uVar9 = -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2;
          puVar17 = &DAT_101dabf70;
          do {
            auVar20._0_8_ = CONCAT44(puVar17[3] + param_3,puVar17[2] + param_3);
            auVar20._8_4_ = puVar17[4] + param_3;
            auVar20._12_4_ = puVar17[5] + param_3;
            iVar22 = (int)*(undefined8 *)(puVar17 + 6) + param_3;
            iVar23 = (int)((ulong)*(undefined8 *)(puVar17 + 6) >> 0x20) + param_3;
            iVar24 = (int)*(undefined8 *)(puVar17 + 8) + param_3;
            iVar25 = (int)((ulong)*(undefined8 *)(puVar17 + 8) >> 0x20) + param_3;
            *(undefined8 *)((long)puVar17 + uVar9 + 8) = auVar20._0_8_;
            auVar21 = NEON_ext(auVar20,auVar20,8,1);
            *(long *)((long)puVar17 + uVar9 + 0x10) = auVar21._0_8_;
            *(ulong *)((long)puVar17 + uVar9 + 0x18) = CONCAT44(iVar23,iVar22);
            auVar21._4_4_ = iVar23;
            auVar21._0_4_ = iVar22;
            auVar21._8_4_ = iVar24;
            auVar21._12_4_ = iVar25;
            auVar7._4_4_ = iVar23;
            auVar7._0_4_ = iVar22;
            auVar7._8_4_ = iVar24;
            auVar7._12_4_ = iVar25;
            auVar21 = NEON_ext(auVar21,auVar7,8,1);
            *(long *)((long)puVar17 + uVar9 + 0x20) = auVar21._0_8_;
            uVar15 = uVar15 - 8;
            puVar17 = puVar17 + 8;
          } while (uVar15 != 0);
        }
        else {
          uVar10 = 0;
        }
        if (uVar14 + 1 != uVar10) {
          iVar22 = iVar8 - (int)uVar10;
          piVar11 = &DAT_101dabf78 + uVar10;
          piVar16 = &DAT_101dabf78 + uVar10 + (long)iVar8;
          do {
            *piVar16 = *piVar11 + param_3;
            iVar22 = iVar22 + -1;
            piVar11 = piVar11 + 1;
            piVar16 = piVar16 + 1;
          } while (iVar22 != 0);
        }
      }
      uVar13 = iVar8 << 1;
      uVar9 = (ulong)uVar13;
      iVar8 = iVar8 * 0x10;
    } while (iVar8 < param_3);
  }
  iVar22 = uVar13 * 2;
  if (iVar8 == param_3) {
    if (0 < (int)uVar13) {
      lVar12 = 0;
      iVar8 = uVar13 * 4;
      do {
        iVar23 = (int)lVar12;
        if (lVar12 < 1) {
          puVar18 = &DAT_101dabf78 + lVar12;
        }
        else {
          lVar19 = 0;
          puVar18 = &DAT_101dabf78 + lVar12;
          uVar4 = *puVar18;
          do {
            uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
            uVar5 = *(undefined4 *)(param_2 + uVar9);
            iVar24 = (&DAT_101dabf78)[lVar19] + iVar23 * 2;
            uVar14 = -(ulong)(uVar4 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar4 + 1) << 2;
            uVar6 = *(undefined4 *)(param_2 + uVar14);
            puVar17 = (undefined4 *)(param_2 + (long)iVar24 * 4);
            uVar3 = puVar17[1];
            *(undefined4 *)(param_2 + uVar9) = *puVar17;
            *(undefined4 *)(param_2 + uVar14) = uVar3;
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
            uVar2 = iVar22 + uVar4;
            uVar14 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            uVar5 = *(undefined4 *)(param_2 + uVar14);
            iVar24 = iVar24 + iVar8;
            uVar9 = -(ulong)(uVar2 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar2 + 1) << 2;
            uVar6 = *(undefined4 *)(param_2 + uVar9);
            puVar17 = (undefined4 *)(param_2 + (long)iVar24 * 4);
            uVar3 = puVar17[1];
            *(undefined4 *)(param_2 + uVar14) = *puVar17;
            *(undefined4 *)(param_2 + uVar9) = uVar3;
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
            uVar2 = iVar8 + uVar4;
            uVar14 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            uVar5 = *(undefined4 *)(param_2 + uVar14);
            iVar24 = iVar24 + uVar13 * -2;
            uVar9 = -(ulong)(uVar2 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar2 + 1) << 2;
            uVar6 = *(undefined4 *)(param_2 + uVar9);
            puVar17 = (undefined4 *)(param_2 + (long)iVar24 * 4);
            uVar3 = puVar17[1];
            *(undefined4 *)(param_2 + uVar14) = *puVar17;
            *(undefined4 *)(param_2 + uVar9) = uVar3;
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
            uVar2 = uVar13 * 6 + uVar4;
            uVar14 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            uVar5 = *(undefined4 *)(param_2 + uVar14);
            uVar9 = -(ulong)(uVar2 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar2 + 1) << 2;
            uVar6 = *(undefined4 *)(param_2 + uVar9);
            puVar17 = (undefined4 *)(param_2 + (long)(iVar24 + iVar8) * 4);
            uVar3 = puVar17[1];
            *(undefined4 *)(param_2 + uVar14) = *puVar17;
            *(undefined4 *)(param_2 + uVar9) = uVar3;
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
            lVar19 = lVar19 + 1;
            uVar4 = uVar4 + 2;
          } while (iVar23 != (int)lVar19);
        }
        iVar24 = iVar23 * 2 + iVar22 + *puVar18;
        puVar17 = (undefined4 *)(param_2 + (long)iVar24 * 4);
        uVar3 = *puVar17;
        uVar5 = puVar17[1];
        puVar1 = (undefined4 *)(param_2 + (long)(iVar24 + iVar22) * 4);
        uVar6 = puVar1[1];
        *puVar17 = *puVar1;
        puVar17[1] = uVar6;
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        lVar12 = lVar12 + 1;
      } while (iVar23 != uVar13 - 1);
    }
  }
  else if (1 < (int)uVar13) {
    lVar12 = 1;
    do {
      lVar19 = 0;
      uVar4 = (&DAT_101dabf78)[lVar12];
      iVar8 = (int)lVar12;
      do {
        uVar14 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        uVar5 = *(undefined4 *)(param_2 + uVar14);
        iVar23 = (&DAT_101dabf78)[lVar19] + iVar8 * 2;
        uVar9 = -(ulong)(uVar4 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar4 + 1) << 2;
        uVar6 = *(undefined4 *)(param_2 + uVar9);
        puVar17 = (undefined4 *)(param_2 + (long)iVar23 * 4);
        uVar3 = puVar17[1];
        *(undefined4 *)(param_2 + uVar14) = *puVar17;
        *(undefined4 *)(param_2 + uVar9) = uVar3;
        *puVar17 = uVar5;
        puVar17[1] = uVar6;
        uVar2 = iVar22 + uVar4;
        uVar14 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
        uVar5 = *(undefined4 *)(param_2 + uVar14);
        uVar9 = -(ulong)(uVar2 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar2 + 1) << 2;
        uVar6 = *(undefined4 *)(param_2 + uVar9);
        puVar17 = (undefined4 *)(param_2 + (long)(iVar23 + iVar22) * 4);
        uVar3 = puVar17[1];
        *(undefined4 *)(param_2 + uVar14) = *puVar17;
        *(undefined4 *)(param_2 + uVar9) = uVar3;
        *puVar17 = uVar5;
        puVar17[1] = uVar6;
        lVar19 = lVar19 + 1;
        uVar4 = uVar4 + 2;
      } while (iVar8 != (int)lVar19);
      lVar12 = lVar12 + 1;
    } while (iVar8 != uVar13 - 1);
  }
  return;
}




void FUN_1005be604(undefined8 param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  
  DAT_101dabf78 = 0;
  uVar16 = 1;
  if (param_3 < 9) {
    iVar8 = 8;
  }
  else {
    uVar9 = 1;
    do {
      param_3 = param_3 >> 1;
      iVar8 = (int)uVar9;
      uVar13 = (ulong)(iVar8 - 1);
      if (0 < iVar8) {
        uVar10 = uVar13 + 1 & 0x1fffffff8;
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else if ((&DAT_101dabf78 + uVar13 < &DAT_101dabf78 + iVar8) ||
                (&DAT_101dabf78 + (long)iVar8 + uVar13 < &DAT_101dabf78)) {
          uVar14 = uVar13 + 1 & 0xfffffffffffffff8;
          uVar9 = -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2;
          puVar17 = &DAT_101dabf70;
          do {
            auVar22._0_8_ = CONCAT44(puVar17[3] + param_3,puVar17[2] + param_3);
            auVar22._8_4_ = puVar17[4] + param_3;
            auVar22._12_4_ = puVar17[5] + param_3;
            iVar24 = (int)*(undefined8 *)(puVar17 + 6) + param_3;
            iVar25 = (int)((ulong)*(undefined8 *)(puVar17 + 6) >> 0x20) + param_3;
            iVar26 = (int)*(undefined8 *)(puVar17 + 8) + param_3;
            iVar27 = (int)((ulong)*(undefined8 *)(puVar17 + 8) >> 0x20) + param_3;
            *(undefined8 *)((long)puVar17 + uVar9 + 8) = auVar22._0_8_;
            auVar23 = NEON_ext(auVar22,auVar22,8,1);
            *(long *)((long)puVar17 + uVar9 + 0x10) = auVar23._0_8_;
            *(ulong *)((long)puVar17 + uVar9 + 0x18) = CONCAT44(iVar25,iVar24);
            auVar23._4_4_ = iVar25;
            auVar23._0_4_ = iVar24;
            auVar23._8_4_ = iVar26;
            auVar23._12_4_ = iVar27;
            auVar7._4_4_ = iVar25;
            auVar7._0_4_ = iVar24;
            auVar7._8_4_ = iVar26;
            auVar7._12_4_ = iVar27;
            auVar23 = NEON_ext(auVar23,auVar7,8,1);
            *(long *)((long)puVar17 + uVar9 + 0x20) = auVar23._0_8_;
            uVar14 = uVar14 - 8;
            puVar17 = puVar17 + 8;
          } while (uVar14 != 0);
        }
        else {
          uVar10 = 0;
        }
        if (uVar13 + 1 != uVar10) {
          iVar24 = iVar8 - (int)uVar10;
          piVar11 = &DAT_101dabf78 + uVar10;
          piVar15 = &DAT_101dabf78 + uVar10 + (long)iVar8;
          do {
            *piVar15 = *piVar11 + param_3;
            iVar24 = iVar24 + -1;
            piVar11 = piVar11 + 1;
            piVar15 = piVar15 + 1;
          } while (iVar24 != 0);
        }
      }
      uVar16 = iVar8 << 1;
      uVar9 = (ulong)uVar16;
      iVar8 = iVar8 * 0x10;
    } while (iVar8 < param_3);
  }
  uVar6 = uVar16 * 2;
  if (iVar8 == param_3) {
    if (0 < (int)uVar16) {
      lVar12 = 0;
      iVar8 = uVar16 * 4;
      do {
        iVar24 = (int)lVar12;
        if (lVar12 < 1) {
          puVar18 = &DAT_101dabf78 + lVar12;
        }
        else {
          lVar19 = 0;
          puVar18 = &DAT_101dabf78 + lVar12;
          uVar4 = *puVar18;
          do {
            uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
            uVar5 = *(undefined4 *)(param_2 + uVar9);
            iVar25 = (&DAT_101dabf78)[lVar19] + iVar24 * 2;
            uVar13 = -(ulong)(uVar4 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar4 + 1) << 2;
            fVar20 = *(float *)(param_2 + uVar13);
            puVar17 = (undefined4 *)(param_2 + (long)iVar25 * 4);
            fVar21 = (float)puVar17[1];
            *(undefined4 *)(param_2 + uVar9) = *puVar17;
            *(float *)(param_2 + uVar13) = -fVar21;
            *puVar17 = uVar5;
            iVar25 = iVar25 + iVar8;
            uVar2 = uVar6 + uVar4;
            uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            puVar17[1] = -fVar20;
            uVar5 = *(undefined4 *)(param_2 + uVar13);
            uVar9 = -(ulong)(uVar2 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar2 + 1) << 2;
            fVar20 = *(float *)(param_2 + uVar9);
            puVar17 = (undefined4 *)(param_2 + (long)iVar25 * 4);
            fVar21 = (float)puVar17[1];
            *(undefined4 *)(param_2 + uVar13) = *puVar17;
            *(float *)(param_2 + uVar9) = -fVar21;
            *puVar17 = uVar5;
            iVar25 = iVar25 + uVar16 * -2;
            puVar17[1] = -fVar20;
            uVar2 = iVar8 + uVar4;
            uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            uVar9 = -(ulong)(uVar2 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar2 + 1) << 2;
            uVar5 = *(undefined4 *)(param_2 + uVar13);
            fVar20 = *(float *)(param_2 + uVar9);
            puVar17 = (undefined4 *)(param_2 + (long)iVar25 * 4);
            fVar21 = (float)puVar17[1];
            *(undefined4 *)(param_2 + uVar13) = *puVar17;
            *(float *)(param_2 + uVar9) = -fVar21;
            *puVar17 = uVar5;
            puVar17[1] = -fVar20;
            uVar2 = uVar16 * 6 + uVar4;
            uVar13 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            uVar5 = *(undefined4 *)(param_2 + uVar13);
            uVar9 = -(ulong)(uVar2 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar2 + 1) << 2;
            fVar20 = *(float *)(param_2 + uVar9);
            puVar17 = (undefined4 *)(param_2 + (long)(iVar25 + iVar8) * 4);
            fVar21 = (float)puVar17[1];
            *(undefined4 *)(param_2 + uVar13) = *puVar17;
            *(float *)(param_2 + uVar9) = -fVar21;
            *puVar17 = uVar5;
            lVar19 = lVar19 + 1;
            uVar4 = uVar4 + 2;
            puVar17[1] = -fVar20;
          } while (iVar24 != (int)lVar19);
        }
        iVar25 = *puVar18 + iVar24 * 2;
        uVar4 = iVar25 + 1;
        uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        *(float *)(param_2 + uVar9) = -*(float *)(param_2 + uVar9);
        iVar25 = iVar25 + uVar6;
        iVar26 = iVar25 + uVar6;
        puVar17 = (undefined4 *)(param_2 + (long)iVar25 * 4);
        uVar5 = *puVar17;
        fVar20 = (float)puVar17[1];
        puVar1 = (undefined4 *)(param_2 + (long)iVar26 * 4);
        fVar21 = (float)puVar1[1];
        *puVar17 = *puVar1;
        puVar17[1] = -fVar21;
        *puVar1 = uVar5;
        puVar1[1] = -fVar20;
        uVar4 = (uVar6 | 1) + iVar26;
        uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        *(float *)(param_2 + uVar9) = -*(float *)(param_2 + uVar9);
        lVar12 = lVar12 + 1;
      } while (iVar24 != uVar16 - 1);
    }
  }
  else {
    *(float *)(param_2 + 4) = -*(float *)(param_2 + 4);
    uVar9 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar6 | 1) << 2;
    *(float *)(param_2 + uVar9) = -*(float *)(param_2 + uVar9);
    if (1 < (int)uVar16) {
      lVar12 = 1;
      do {
        lVar19 = 0;
        uVar2 = (&DAT_101dabf78)[lVar12];
        iVar8 = (int)lVar12;
        uVar4 = uVar2;
        do {
          iVar24 = (&DAT_101dabf78)[lVar19] + iVar8 * 2;
          uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
          uVar5 = *(undefined4 *)(param_2 + uVar9);
          uVar13 = -(ulong)(uVar4 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar4 + 1) << 2;
          fVar20 = *(float *)(param_2 + uVar13);
          puVar17 = (undefined4 *)(param_2 + (long)iVar24 * 4);
          fVar21 = (float)puVar17[1];
          *(undefined4 *)(param_2 + uVar9) = *puVar17;
          *(float *)(param_2 + uVar13) = -fVar21;
          *puVar17 = uVar5;
          puVar17[1] = -fVar20;
          uVar3 = uVar6 + uVar4;
          uVar13 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
          uVar5 = *(undefined4 *)(param_2 + uVar13);
          uVar9 = -(ulong)(uVar3 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar3 + 1) << 2;
          fVar20 = *(float *)(param_2 + uVar9);
          puVar17 = (undefined4 *)(param_2 + (long)(int)(iVar24 + uVar6) * 4);
          fVar21 = (float)puVar17[1];
          *(undefined4 *)(param_2 + uVar13) = *puVar17;
          *(float *)(param_2 + uVar9) = -fVar21;
          *puVar17 = uVar5;
          puVar17[1] = -fVar20;
          lVar19 = lVar19 + 1;
          uVar4 = uVar4 + 2;
        } while (iVar8 != (int)lVar19);
        iVar24 = uVar2 + iVar8 * 2;
        uVar4 = iVar24 + 1;
        uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        *(float *)(param_2 + uVar9) = -*(float *)(param_2 + uVar9);
        uVar4 = (uVar6 | 1) + iVar24;
        uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        *(float *)(param_2 + uVar9) = -*(float *)(param_2 + uVar9);
        lVar12 = lVar12 + 1;
      } while (iVar8 != uVar16 - 1);
    }
  }
  return;
}




void FUN_1005bea08(long param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar9 = *param_2 + param_2[2];
  fVar10 = param_2[1] + param_2[3];
  fVar5 = *param_2 - param_2[2];
  fVar6 = param_2[1] - param_2[3];
  fVar16 = param_2[4] - param_2[6];
  fVar7 = param_2[4] + param_2[6];
  fVar11 = param_2[5] + param_2[7];
  fVar8 = param_2[5] - param_2[7];
  fVar12 = param_2[8] - param_2[10];
  fVar13 = param_2[8] + param_2[10];
  fVar15 = param_2[9] - param_2[0xb];
  fVar14 = param_2[9] + param_2[0xb];
  param_2[7] = fVar6 - fVar16;
  *param_2 = fVar9 + fVar7;
  param_2[1] = fVar10 + fVar11;
  param_2[4] = fVar9 - fVar7;
  param_2[5] = fVar10 - fVar11;
  param_2[2] = fVar5 - fVar8;
  param_2[3] = fVar6 + fVar16;
  param_2[6] = fVar5 + fVar8;
  fVar5 = DAT_101da9f78;
  fVar8 = param_2[0xc] + param_2[0xe];
  fVar9 = param_2[0xd] + param_2[0xf];
  fVar6 = param_2[0xc] - param_2[0xe];
  fVar7 = param_2[0xd] - param_2[0xf];
  param_2[8] = fVar13 + fVar8;
  param_2[9] = fVar14 + fVar9;
  param_2[0xc] = fVar9 - fVar14;
  param_2[0xd] = fVar13 - fVar8;
  fVar8 = fVar12 - fVar7;
  fVar9 = fVar15 + fVar6;
  param_2[10] = fVar5 * (fVar8 - fVar9);
  param_2[0xb] = fVar5 * (fVar9 + fVar8);
  fVar12 = fVar12 + fVar7;
  fVar6 = fVar6 - fVar15;
  param_2[0xe] = fVar5 * (fVar6 - fVar12);
  param_2[0xf] = fVar5 * (fVar6 + fVar12);
  iVar1 = *(int *)(param_1 + 0x14030);
  if (8 < (iVar1 << 1) >> 1) {
    lVar4 = 0x10;
    pfVar2 = (float *)&DAT_101da9f7c;
    pfVar3 = param_2 + 0x1f;
    do {
      fVar5 = pfVar2[-1];
      fVar6 = *pfVar2;
      fVar12 = *(float *)((long)&DAT_101da9f70 + lVar4);
      fVar7 = *(float *)((long)&DAT_101da9f70 + lVar4 + 4);
      fVar22 = pfVar3[-0xf] + pfVar3[-0xd];
      fVar23 = pfVar3[-0xe] + pfVar3[-0xc];
      fVar8 = pfVar3[-0xf] - pfVar3[-0xd];
      fVar10 = pfVar3[-0xe] - pfVar3[-0xc];
      fVar9 = pfVar3[-0xb] + pfVar3[-9];
      fVar11 = pfVar3[-0xb] - pfVar3[-9];
      fVar14 = pfVar3[-10] - pfVar3[-8];
      fVar16 = pfVar3[-6] + pfVar3[-4];
      fVar18 = pfVar3[-6] - pfVar3[-4];
      fVar19 = pfVar3[-2] + *pfVar3;
      fVar24 = pfVar3[-3] - pfVar3[-1];
      fVar13 = pfVar3[-10] + pfVar3[-8];
      fVar15 = pfVar3[-2] - *pfVar3;
      fVar17 = fVar22 - fVar9;
      fVar21 = fVar8 - fVar14;
      fVar8 = fVar8 + fVar14;
      fVar14 = fVar16 - fVar19;
      fVar20 = fVar18 + fVar24;
      fVar18 = fVar18 - fVar24;
      fVar25 = fVar10 + fVar11;
      fVar26 = fVar12 - (fVar6 + fVar6) * fVar7;
      fVar24 = (fVar6 + fVar6) * fVar12 - fVar7;
      fVar10 = fVar10 - fVar11;
      fVar11 = fVar23 - fVar13;
      pfVar3[-0xf] = fVar22 + fVar9;
      pfVar3[-0xe] = fVar23 + fVar13;
      fVar9 = pfVar3[-7] - pfVar3[-5];
      fVar23 = pfVar3[-7] + pfVar3[-5];
      fVar13 = pfVar3[-3] + pfVar3[-1];
      fVar22 = fVar23 - fVar13;
      pfVar3[-0xb] = fVar5 * fVar17 - fVar6 * fVar11;
      pfVar3[-10] = fVar6 * fVar17 + fVar5 * fVar11;
      fVar11 = fVar9 + fVar15;
      pfVar3[-0xd] = fVar12 * fVar21 - fVar7 * fVar25;
      pfVar3[-0xc] = fVar12 * fVar25 + fVar7 * fVar21;
      pfVar3[-8] = fVar26 * fVar10 + fVar24 * fVar8;
      pfVar3[-9] = fVar26 * fVar8 - fVar24 * fVar10;
      fVar7 = *(float *)((long)&DAT_101da9f78 + lVar4);
      fVar12 = *(float *)((long)&DAT_101da9f7c + lVar4);
      pfVar3[-7] = fVar23 + fVar13;
      pfVar3[-6] = fVar16 + fVar19;
      pfVar3[-3] = fVar22 * -fVar6 - fVar5 * fVar14;
      pfVar3[-2] = fVar5 * fVar22 - fVar14 * fVar6;
      fVar9 = fVar9 - fVar15;
      fVar6 = fVar7 - (fVar5 + fVar5) * fVar12;
      fVar5 = (fVar5 + fVar5) * fVar7 - fVar12;
      pfVar3[-5] = fVar7 * fVar9 - fVar12 * fVar20;
      pfVar3[-4] = fVar7 * fVar20 + fVar12 * fVar9;
      pfVar3[-1] = fVar6 * fVar11 - fVar5 * fVar18;
      *pfVar3 = fVar6 * fVar18 + fVar5 * fVar11;
      lVar4 = lVar4 + 0x10;
      pfVar2 = pfVar2 + 2;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar4 < iVar1 << 1);
  }
  return;
}




void FUN_1005becf4(long param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  int iVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  iVar6 = param_3 * 4;
  if (0 < (int)param_3) {
    lVar12 = 0;
    pfVar15 = (float *)(param_2 + 4);
    do {
      pfVar18 = (float *)((long)pfVar15 +
                         (-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2));
      pfVar3 = (float *)((long)pfVar15 +
                        (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3));
      pfVar4 = pfVar15 + (long)(int)param_3 * 3;
      fVar34 = pfVar15[-1] + pfVar18[-1];
      fVar35 = *pfVar15 + *pfVar18;
      fVar28 = pfVar15[-1] - pfVar18[-1];
      fVar29 = *pfVar15 - *pfVar18;
      fVar30 = pfVar3[-1] + pfVar4[-1];
      fVar31 = *pfVar3 + *pfVar4;
      fVar32 = pfVar3[-1] - pfVar4[-1];
      fVar33 = *pfVar3 - *pfVar4;
      pfVar15[-1] = fVar34 + fVar30;
      *pfVar15 = fVar35 + fVar31;
      pfVar3[-1] = fVar34 - fVar30;
      *pfVar3 = fVar35 - fVar31;
      pfVar18[-1] = fVar28 - fVar33;
      *pfVar18 = fVar29 + fVar32;
      pfVar4[-1] = fVar28 + fVar33;
      *pfVar4 = fVar29 - fVar32;
      lVar12 = lVar12 + 2;
      pfVar15 = pfVar15 + 2;
    } while (lVar12 < (int)param_3);
  }
  fVar28 = DAT_101da9f78;
  if (iVar6 < (int)(param_3 * 5)) {
    lVar12 = (long)iVar6;
    pfVar15 = (float *)(param_2 + (long)iVar6 * 4 + 4);
    pfVar18 = (float *)(param_2 + ((int)param_3 + lVar12) * 4 + 4);
    do {
      pfVar3 = pfVar15 + (long)(int)param_3 * 3;
      pfVar4 = (float *)((long)pfVar15 +
                        (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3));
      fVar33 = *pfVar15 + *pfVar18;
      fVar34 = pfVar15[-1] - pfVar18[-1];
      fVar29 = *pfVar15 - *pfVar18;
      fVar31 = pfVar4[-1] - pfVar3[-1];
      fVar30 = *pfVar4 - *pfVar3;
      fVar39 = fVar34 - fVar30;
      fVar34 = fVar34 + fVar30;
      fVar35 = fVar29 + fVar31;
      fVar31 = fVar31 - fVar29;
      fVar29 = pfVar15[-1] + pfVar18[-1];
      fVar30 = pfVar4[-1] + pfVar3[-1];
      fVar32 = *pfVar4 + *pfVar3;
      pfVar15[-1] = fVar29 + fVar30;
      *pfVar15 = fVar33 + fVar32;
      pfVar4[-1] = fVar32 - fVar33;
      *pfVar4 = fVar29 - fVar30;
      pfVar18[-1] = fVar28 * (fVar39 - fVar35);
      *pfVar18 = fVar28 * (fVar35 + fVar39);
      pfVar3[-1] = fVar28 * (fVar31 - fVar34);
      *pfVar3 = fVar28 * (fVar31 + fVar34);
      lVar12 = lVar12 + 2;
      pfVar15 = pfVar15 + 2;
      pfVar18 = pfVar18 + 2;
    } while (lVar12 < (int)(param_3 * 5));
  }
  uVar7 = param_3 * 8;
  iVar8 = *(int *)(param_1 + 0x14030) * 2;
  if ((int)uVar7 < iVar8) {
    lVar16 = (long)(int)uVar7;
    iVar17 = param_3 * 0xc;
    lVar19 = (long)(int)param_3;
    lVar20 = (lVar19 + lVar16) * 4;
    uVar21 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
    uVar22 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
    lVar11 = lVar19 * 0xc;
    uVar5 = param_3 << 3 | 1;
    lVar12 = lVar16;
    lVar13 = 0;
    uVar10 = uVar22;
    do {
      lVar11 = lVar11 + uVar21;
      uVar10 = uVar10 + uVar21;
      lVar1 = lVar13 + 2;
      uVar9 = (int)lVar1 << 1;
      fVar28 = *(float *)((long)&DAT_101da9f70 + lVar1 * 4);
      fVar29 = (float)(&DAT_101da9f7c)[lVar13];
      if (0 < (int)param_3) {
        uVar24 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        fVar30 = *(float *)((long)&DAT_101da9f70 + (long)(int)uVar9 * 4);
        fVar31 = *(float *)((long)&DAT_101da9f70 + (long)(int)((int)lVar1 << 1 | 1) * 4);
        fVar32 = fVar30 - (fVar29 + fVar29) * fVar31;
        fVar33 = (fVar29 + fVar29) * fVar30 - fVar31;
        lVar25 = lVar11;
        uVar26 = uVar10;
        lVar27 = lVar20;
        lVar13 = lVar12;
        do {
          lVar14 = lVar13 * 4;
          pfVar15 = (float *)(param_2 + lVar27);
          pfVar18 = (float *)(param_2 + uVar26);
          pfVar3 = (float *)(param_2 + lVar25);
          lVar13 = lVar13 + 2;
          fVar35 = *(float *)(param_2 + lVar14);
          fVar42 = *(float *)(param_2 + uVar24) + pfVar15[1];
          fVar34 = *(float *)(param_2 + uVar24) - pfVar15[1];
          fVar36 = *pfVar18 + *pfVar3;
          fVar44 = pfVar18[1] + pfVar3[1];
          fVar39 = *pfVar18 - *pfVar3;
          fVar38 = pfVar18[1] - pfVar3[1];
          fVar40 = fVar35 - *pfVar15;
          fVar35 = fVar35 + *pfVar15;
          fVar41 = fVar42 - fVar44;
          fVar43 = fVar34 + fVar39;
          fVar34 = fVar34 - fVar39;
          fVar39 = fVar35 - fVar36;
          fVar37 = fVar40 + fVar38;
          *(float *)(param_2 + lVar14) = fVar35 + fVar36;
          *(float *)(param_2 + uVar24) = fVar42 + fVar44;
          fVar40 = fVar40 - fVar38;
          *pfVar18 = fVar28 * fVar39 - fVar29 * fVar41;
          pfVar18[1] = fVar29 * fVar39 + fVar28 * fVar41;
          *pfVar15 = fVar30 * fVar40 - fVar31 * fVar43;
          pfVar15[1] = fVar30 * fVar43 + fVar31 * fVar40;
          *pfVar3 = fVar32 * fVar37 - fVar33 * fVar34;
          pfVar3[1] = fVar32 * fVar34 + fVar33 * fVar37;
          lVar27 = lVar27 + 8;
          uVar26 = uVar26 + 8;
          lVar25 = lVar25 + 8;
          uVar24 = uVar24 + 8;
        } while ((int)lVar13 < (int)((int)lVar12 + param_3));
      }
      if (0 < (int)param_3) {
        fVar30 = *(float *)((long)&DAT_101da9f70 + (long)(int)(uVar9 | 2) * 4);
        fVar31 = *(float *)((long)&DAT_101da9f70 + (long)(int)(uVar9 | 3) * 4);
        fVar32 = fVar30 - (fVar28 + fVar28) * fVar31;
        fVar33 = (fVar28 + fVar28) * fVar30 - fVar31;
        iVar23 = (int)lVar12 + iVar6;
        iVar2 = iVar23 + param_3;
        pfVar15 = (float *)(param_2 + 4 + (long)iVar17 * 4);
        pfVar18 = (float *)(param_2 + 4 + (lVar19 + iVar17) * 4);
        do {
          pfVar3 = pfVar15 + lVar19 * 3;
          pfVar4 = (float *)((long)pfVar15 + uVar22);
          fVar42 = pfVar15[-1] + pfVar18[-1];
          fVar43 = *pfVar15 + *pfVar18;
          fVar34 = pfVar15[-1] - pfVar18[-1];
          fVar35 = *pfVar15 - *pfVar18;
          fVar39 = pfVar4[-1] + pfVar3[-1];
          fVar40 = *pfVar4 + *pfVar3;
          fVar37 = pfVar4[-1] - pfVar3[-1];
          fVar38 = *pfVar4 - *pfVar3;
          fVar41 = fVar42 - fVar39;
          fVar36 = fVar43 - fVar40;
          fVar44 = fVar34 - fVar38;
          fVar34 = fVar34 + fVar38;
          fVar38 = fVar35 + fVar37;
          fVar35 = fVar35 - fVar37;
          pfVar15[-1] = fVar42 + fVar39;
          *pfVar15 = fVar43 + fVar40;
          pfVar4[-1] = fVar41 * -fVar29 - fVar28 * fVar36;
          *pfVar4 = fVar28 * fVar41 + fVar36 * -fVar29;
          pfVar18[-1] = fVar30 * fVar44 - fVar31 * fVar38;
          *pfVar18 = fVar30 * fVar38 + fVar31 * fVar44;
          pfVar3[-1] = fVar32 * fVar34 - fVar33 * fVar35;
          *pfVar3 = fVar32 * fVar35 + fVar33 * fVar34;
          iVar23 = iVar23 + 2;
          pfVar15 = pfVar15 + 2;
          pfVar18 = pfVar18 + 2;
        } while (iVar23 < iVar2);
      }
      lVar12 = lVar12 + lVar16;
      iVar17 = iVar17 + uVar7;
      lVar20 = lVar20 + uVar21;
      uVar5 = uVar5 + uVar7;
      lVar13 = lVar1;
    } while ((int)lVar12 < iVar8);
  }
  return;
}




void FUN_1005bf1cc(long param_1,long param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  piVar1 = (int *)(param_1 + 0x14030);
  iVar8 = *piVar1;
  if ((iVar8 << 1) >> 1 < 5) {
    uVar12 = 2;
  }
  else {
    FUN_1005bea08(param_1,param_2);
    iVar8 = *piVar1;
    if ((iVar8 << 1) >> 1 < 0x11) {
      uVar12 = 8;
    }
    else {
      uVar7 = 8;
      uVar6 = 0x20;
      do {
        uVar12 = uVar6;
        FUN_1005becf4(param_1,param_2,uVar7);
        uVar5 = (int)uVar12 * 4;
        iVar8 = *piVar1;
        uVar7 = uVar12;
        uVar6 = (ulong)uVar5;
      } while ((int)uVar5 < iVar8 * 2);
    }
  }
  iVar11 = (int)uVar12;
  if (iVar11 << 2 == iVar8 * 2) {
    if (0 < iVar11) {
      lVar9 = 0;
      pfVar10 = (float *)(param_2 + 4);
      do {
        pfVar2 = (float *)((long)pfVar10 + (-(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2));
        pfVar3 = (float *)((long)pfVar10 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
        pfVar4 = pfVar10 + (long)iVar11 * 3;
        fVar19 = pfVar10[-1] + pfVar2[-1];
        fVar20 = *pfVar10 + *pfVar2;
        fVar13 = pfVar10[-1] - pfVar2[-1];
        fVar14 = *pfVar10 - *pfVar2;
        fVar15 = pfVar3[-1] + pfVar4[-1];
        fVar16 = *pfVar3 + *pfVar4;
        fVar17 = pfVar3[-1] - pfVar4[-1];
        fVar18 = *pfVar3 - *pfVar4;
        pfVar10[-1] = fVar19 + fVar15;
        *pfVar10 = fVar20 + fVar16;
        pfVar3[-1] = fVar19 - fVar15;
        *pfVar3 = fVar20 - fVar16;
        pfVar2[-1] = fVar13 - fVar18;
        *pfVar2 = fVar14 + fVar17;
        pfVar4[-1] = fVar13 + fVar18;
        *pfVar4 = fVar14 - fVar17;
        lVar9 = lVar9 + 2;
        pfVar10 = pfVar10 + 2;
      } while (lVar9 < iVar11);
    }
  }
  else if (0 < iVar11) {
    lVar9 = 0;
    do {
      pfVar10 = (float *)(param_2 + lVar9 * 4);
      pfVar2 = (float *)(param_2 + (long)iVar11 * 4 + lVar9 * 4);
      fVar13 = *pfVar10;
      fVar14 = pfVar10[1];
      fVar15 = *pfVar2;
      fVar16 = pfVar2[1];
      *pfVar10 = fVar13 + fVar15;
      pfVar10[1] = pfVar2[1] + fVar14;
      *pfVar2 = fVar13 - fVar15;
      pfVar2[1] = fVar14 - fVar16;
      lVar9 = lVar9 + 2;
    } while (lVar9 < iVar11);
  }
  return;
}




void FUN_1005bf388(long param_1,long param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  piVar1 = (int *)(param_1 + 0x14030);
  iVar8 = *piVar1;
  if ((iVar8 << 1) >> 1 < 5) {
    uVar12 = 2;
  }
  else {
    FUN_1005bea08(param_1,param_2);
    iVar8 = *piVar1;
    if ((iVar8 << 1) >> 1 < 0x11) {
      uVar12 = 8;
    }
    else {
      uVar7 = 8;
      uVar6 = 0x20;
      do {
        uVar12 = uVar6;
        FUN_1005becf4(param_1,param_2,uVar7);
        uVar5 = (int)uVar12 * 4;
        iVar8 = *piVar1;
        uVar7 = uVar12;
        uVar6 = (ulong)uVar5;
      } while ((int)uVar5 < iVar8 * 2);
    }
  }
  iVar11 = (int)uVar12;
  if (iVar11 << 2 == iVar8 * 2) {
    if (0 < iVar11) {
      lVar9 = 0;
      pfVar10 = (float *)(param_2 + 4);
      do {
        pfVar2 = (float *)((long)pfVar10 + (-(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2));
        pfVar3 = pfVar10 + (long)iVar11 * 3;
        pfVar4 = (float *)((long)pfVar10 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
        fVar20 = pfVar10[-1] + pfVar2[-1];
        fVar13 = pfVar10[-1] - pfVar2[-1];
        fVar14 = *pfVar2 - *pfVar10;
        fVar15 = pfVar4[-1] + pfVar3[-1];
        fVar17 = pfVar4[-1] - pfVar3[-1];
        fVar18 = *pfVar4 + *pfVar3;
        fVar19 = *pfVar4 - *pfVar3;
        fVar16 = -*pfVar10 - *pfVar2;
        pfVar10[-1] = fVar20 + fVar15;
        *pfVar10 = fVar16 - fVar18;
        pfVar4[-1] = fVar20 - fVar15;
        *pfVar4 = fVar16 + fVar18;
        pfVar2[-1] = fVar13 - fVar19;
        *pfVar2 = fVar14 - fVar17;
        pfVar3[-1] = fVar13 + fVar19;
        *pfVar3 = fVar14 + fVar17;
        lVar9 = lVar9 + 2;
        pfVar10 = pfVar10 + 2;
      } while (lVar9 < iVar11);
    }
  }
  else if (0 < iVar11) {
    lVar9 = 0;
    do {
      pfVar10 = (float *)(param_2 + lVar9 * 4);
      pfVar2 = (float *)(param_2 + (long)iVar11 * 4 + lVar9 * 4);
      fVar13 = *pfVar10;
      fVar14 = pfVar10[1];
      fVar15 = *pfVar2;
      fVar16 = pfVar2[1];
      *pfVar10 = fVar13 + fVar15;
      pfVar10[1] = -fVar14 - pfVar2[1];
      *pfVar2 = fVar13 - fVar15;
      pfVar2[1] = fVar16 - fVar14;
      lVar9 = lVar9 + 2;
    } while (lVar9 < iVar11);
  }
  return;
}




void FUN_1005bf54c(long param_1,undefined8 param_2,int param_3)

{
  if (-1 < param_3) {
    FUN_1005be2ec();
    FUN_1005bf1cc(param_1,param_2);
    return;
  }
  FUN_1005be604(param_1,param_2,*(int *)(param_1 + 0x14030) << 1);
  FUN_1005bf388(param_1,param_2);
  return;
}




void FUN_1005bf5a8(void *param_1)

{
  _bzero(param_1,0x14020);
  _bzero(&DAT_101da1f70,0x8000);
  _bzero(&DAT_101db4078,0x4000);
  _bzero(&DAT_101db8078,0x4000);
  _bzero(&DAT_101dac078,0x4000);
  _bzero(&DAT_101db0078,0x4000);
  *(undefined4 *)((long)param_1 + 0x14028) = 0;
  return;
}




undefined8 FUN_1005bf62c(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar5 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x1c8);
  do {
    iVar4 = (int)lVar5;
    auVar9._4_4_ = iVar4 + 1;
    auVar9._0_4_ = iVar4;
    auVar9._8_4_ = iVar4 + 2;
    auVar9._12_4_ = iVar4 + 3;
    auVar10 = NEON_scvtf(auVar9,4);
    uVar7 = _cosf();
    auVar2._4_4_ = auVar10._4_4_ * 1.5707964 * 0.00012207031;
    auVar2._0_4_ = auVar10._0_4_ * 1.5707964 * 0.00012207031;
    auVar2._8_4_ = auVar10._8_4_ * 1.5707964 * 0.00012207031;
    auVar2._12_4_ = auVar10._12_4_ * 1.5707964 * 0.00012207031;
    uVar8 = _cosf(auVar2);
    uVar3 = CONCAT44(uVar7,uVar8);
    uVar7 = _cosf();
    uVar8 = _cosf();
    auVar1._8_4_ = uVar7;
    auVar1._0_8_ = uVar3;
    auVar10._8_4_ = uVar7;
    auVar10._0_8_ = uVar3;
    *puVar6 = uVar3;
    auVar10._12_4_ = uVar8;
    auVar1._12_4_ = uVar8;
    auVar10 = NEON_ext(auVar10,auVar1,8,1);
    puVar6[1] = auVar10._0_8_;
    lVar5 = lVar5 + 4;
    puVar6 = puVar6 + 2;
  } while (lVar5 != 0x2000);
  *(undefined4 *)(param_1 + 0xc1d0) = 4;
  *(undefined8 *)(param_1 + 0xc1d8) = 0;
  *(undefined4 *)(param_1 + 0xc1c8) = 0x3f800000;
  if (0 < *(int *)(*(long *)(param_1 + 0xd0) + 0x60)) {
    lVar5 = 0;
    do {
      uVar3 = FUN_1005cef0c(param_1,lVar5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(*(long *)(param_1 + 0xd0) + 0x60));
  }
  return 0;
}




undefined8 FUN_1005bf780(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xc1d8);
  if (lVar1 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_pitchshift.cpp"
                  ,0x324);
    *(long *)(param_1 + 0xc1d8) = 0;
  }
  return 0;
}




void FUN_1005bf7d0(float param_1,float param_2,undefined4 *param_3,int param_4,int param_5,
                  long param_6,long param_7,int param_8,ulong param_9)

{
  ulong uVar1;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  undefined4 *puVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
  ulong uVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  undefined8 *puVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if (0 < param_4) {
    fVar36 = 0.0;
    pfVar21 = (float *)(param_6 + (long)param_8 * 4);
    iVar22 = param_4;
    do {
      fVar36 = fVar36 + ABS(*pfVar21);
      iVar22 = iVar22 + -1;
      pfVar21 = (float *)((long)pfVar21 +
                         (-(param_9 >> 0x1f & 1) & 0xfffffffc00000000 | (param_9 & 0xffffffff) << 2)
                         );
    } while (iVar22 != 0);
    if (0.001 <= fVar36) {
      piVar2 = param_3 + 0x500c;
      iVar8 = *piVar2;
      iVar22 = iVar8;
      if (iVar8 < 0) {
        iVar22 = iVar8 + 1;
      }
      uVar10 = 0;
      if (param_5 != 0) {
        uVar10 = iVar8 / param_5;
      }
      uVar11 = iVar8 - uVar10;
      uVar26 = (ulong)uVar11;
      puVar3 = param_3 + 0x500a;
      uVar30 = (ulong)*puVar3;
      if (*puVar3 == 0) {
        *puVar3 = uVar11;
        uVar30 = uVar26;
      }
      if (*(char *)(param_3 + 0x5010) != '\0') {
        *(char *)(param_3 + 0x5010) = '\0';
        _bzero(param_3 + 0x2000,0x4020);
      }
      if (0 < param_4) {
        param_2 = param_2 / (float)iVar8;
        fVar38 = ((float)(int)uVar10 * 6.2831855) / (float)iVar8;
        fVar40 = ((float)param_5 * param_2) / 6.2831855;
        puVar16 = param_3 + 0x3008;
        plVar4 = (long *)(param_3 + 0x500e);
        lVar34 = (long)(iVar22 >> 1);
        lVar33 = 0;
        uVar1 = (ulong)(uVar10 - 1) + 1;
        fVar36 = 6.2831855 / (float)param_5;
        do {
          lVar17 = ((long)param_8 + lVar33 * (int)param_9) * 4;
          param_3[(int)uVar30] = *(undefined4 *)(param_6 + lVar17);
          uVar25 = *puVar3;
          *(undefined4 *)(param_7 + lVar17) = param_3[(long)(int)(uVar25 - uVar11) + 0x1000];
          uVar25 = uVar25 + 1;
          *puVar3 = uVar25;
          iVar32 = *piVar2;
          if (iVar32 <= (int)uVar25) {
            *puVar3 = uVar11;
            if (0 < iVar32) {
              iVar20 = 0;
              lVar17 = 0;
              lVar27 = *(long *)(param_3 + 0x5008);
              do {
                (&DAT_101da1f70)[iVar20] = *(float *)(lVar27 + lVar17 * 4) * (float)param_3[lVar17];
                (&DAT_101da1f70)[iVar20 + 1] = 0;
                lVar17 = lVar17 + 1;
                iVar20 = iVar20 + 2;
              } while (lVar17 < iVar32);
            }
            FUN_1005be604();
            FUN_1005bf388(param_3,&DAT_101da1f70);
            if (iVar8 < -1) {
              _bzero(&DAT_101db0078,(long)*piVar2 << 2);
              _bzero(&DAT_101dac078,(long)*piVar2 << 2);
            }
            else {
              lVar17 = 0;
              pfVar21 = (float *)&DAT_101db4080;
              pfVar23 = (float *)&DAT_101da1f80;
              puVar35 = (undefined8 *)&DAT_101db8078;
              pfVar28 = (float *)(param_3 + 0x2002);
              do {
                fVar48 = pfVar23[-4];
                fVar41 = pfVar23[-3];
                fVar46 = pfVar23[-2];
                fVar47 = pfVar23[-1];
                fVar44 = *pfVar23;
                fVar45 = pfVar23[1];
                fVar42 = pfVar23[2];
                fVar43 = pfVar23[3];
                if (fVar41 == 0.0) {
                  fVar49 = 0.0;
                }
                else if (fVar48 == 0.0) {
                  fVar49 = *(float *)(&DAT_10115db20 + (ulong)(0.0 < fVar41) * 4);
                }
                else {
                  fVar49 = (float)_atan2f(fVar41,fVar48);
                }
                if (fVar47 == 0.0) {
                  fVar50 = 0.0;
                }
                else if (fVar46 == 0.0) {
                  fVar50 = *(float *)(&DAT_10115db20 + (ulong)(0.0 < fVar47) * 4);
                }
                else {
                  fVar50 = (float)_atan2f(fVar47,fVar46);
                }
                uVar25 = (uint)lVar17;
                if (fVar45 == 0.0) {
                  fVar51 = 0.0;
                }
                else if (fVar44 == 0.0) {
                  fVar51 = *(float *)(&DAT_10115db20 + (ulong)(0.0 < fVar45) * 4);
                }
                else {
                  fVar51 = (float)_atan2f(fVar45,fVar44);
                }
                if (fVar43 == 0.0) {
                  fVar37 = 0.0;
                }
                else if (fVar42 == 0.0) {
                  fVar37 = *(float *)(&DAT_10115db20 + (ulong)(0.0 < fVar43) * 4);
                }
                else {
                  fVar37 = (float)_atan2f(fVar43,fVar42);
                }
                fVar41 = SQRT(fVar48 * fVar48 + fVar41 * fVar41 + 0.0);
                fVar46 = SQRT(fVar46 * fVar46 + fVar47 * fVar47 + 0.0);
                fVar44 = SQRT(fVar44 * fVar44 + fVar45 * fVar45 + 0.0);
                fVar42 = SQRT(fVar42 * fVar42 + fVar43 * fVar43 + 0.0);
                auVar39._0_8_ = CONCAT44(fVar46 + fVar46,fVar41 + fVar41);
                auVar39._8_4_ = fVar44 + fVar44;
                auVar39._12_4_ = fVar42 + fVar42;
                *puVar35 = auVar39._0_8_;
                auVar39 = NEON_ext(auVar39,auVar39,8,1);
                puVar35[1] = auVar39._0_8_;
                fVar41 = fVar49 - (fVar38 * (float)(int)uVar25 + pfVar28[-2]);
                fVar42 = fVar50 - (fVar38 * (float)(int)(uVar25 | 1) + pfVar28[-1]);
                pfVar28[-2] = fVar49;
                pfVar28[-1] = fVar50;
                fVar43 = fVar51 - (fVar38 * (float)(int)(uVar25 | 2) + *pfVar28);
                fVar44 = fVar37 - (fVar38 * (float)(int)(uVar25 | 3) + pfVar28[1]);
                *pfVar28 = fVar51;
                pfVar28[1] = fVar37;
                uVar12 = (uint)(fVar41 * 0.31830987);
                uVar31 = -(uVar12 & 1);
                if (-1 < (int)uVar12) {
                  uVar31 = uVar12 & 1;
                }
                uVar13 = (uint)(fVar42 * 0.31830987);
                uVar5 = -(uVar13 & 1);
                if (-1 < (int)uVar13) {
                  uVar5 = uVar13 & 1;
                }
                uVar14 = (uint)(fVar43 * 0.31830987);
                uVar6 = -(uVar14 & 1);
                if (-1 < (int)uVar14) {
                  uVar6 = uVar14 & 1;
                }
                uVar15 = (uint)(fVar44 * 0.31830987);
                uVar7 = -(uVar15 & 1);
                if (-1 < (int)uVar15) {
                  uVar7 = uVar15 & 1;
                }
                pfVar21[-2] = param_2 * (float)(int)uVar25 +
                              fVar40 * (fVar41 - (float)(int)(uVar31 + uVar12) * 3.1415927);
                pfVar21[-1] = param_2 * (float)(int)(uVar25 | 1) +
                              fVar40 * (fVar42 - (float)(int)(uVar5 + uVar13) * 3.1415927);
                *pfVar21 = param_2 * (float)(int)(uVar25 | 2) +
                           fVar40 * (fVar43 - (float)(int)(uVar6 + uVar14) * 3.1415927);
                lVar17 = lVar17 + 4;
                pfVar21[1] = param_2 * (float)(int)(uVar25 | 3) +
                             fVar40 * (fVar44 - (float)(int)(uVar7 + uVar15) * 3.1415927);
                pfVar21 = pfVar21 + 4;
                pfVar28 = pfVar28 + 4;
                puVar35 = puVar35 + 2;
                pfVar23 = pfVar23 + 8;
              } while (lVar17 <= lVar34);
              _bzero(&DAT_101db0078,(long)*piVar2 << 2);
              _bzero(&DAT_101dac078,(long)*piVar2 << 2);
              if (-2 < iVar8) {
                lVar17 = -1;
                pfVar21 = (float *)&DAT_101db4078;
                pfVar23 = (float *)&DAT_101db8078;
                do {
                  uVar25 = (uint)((float)((int)lVar17 + 1) * param_1 + 0.5);
                  if ((int)uVar25 <= iVar22 >> 1) {
                    uVar30 = -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2;
                    *(float *)((long)&DAT_101dac078 + uVar30) = *pfVar21 * param_1;
                    *(float *)((long)&DAT_101db0078 + uVar30) =
                         *pfVar23 + *(float *)((long)&DAT_101db0078 + uVar30);
                  }
                  lVar17 = lVar17 + 1;
                  pfVar23 = pfVar23 + 1;
                  pfVar21 = pfVar21 + 1;
                } while (lVar17 < lVar34);
                if (-2 < iVar8) {
                  lVar17 = 0;
                  pfVar21 = (float *)&DAT_101da1f80;
                  pfVar23 = (float *)&DAT_101db0080;
                  pfVar28 = (float *)&DAT_101dac080;
                  pfVar29 = (float *)(param_3 + 0x2806);
                  do {
                    uVar25 = (uint)lVar17;
                    fVar44 = pfVar29[-2] +
                             fVar38 * (float)(int)uVar25 +
                             fVar36 * (pfVar28[-2] / param_2 - (float)(int)uVar25);
                    pfVar29[-2] = fVar44;
                    fVar43 = pfVar29[-1] +
                             fVar38 * (float)(int)(uVar25 | 1) +
                             fVar36 * (pfVar28[-1] / param_2 - (float)(int)(uVar25 | 1));
                    pfVar29[-1] = fVar43;
                    fVar42 = *pfVar29 +
                             fVar38 * (float)(int)(uVar25 | 2) +
                             fVar36 * (*pfVar28 / param_2 - (float)(int)(uVar25 | 2));
                    *pfVar29 = fVar42;
                    fVar41 = pfVar29[1] +
                             fVar38 * (float)(int)(uVar25 | 3) +
                             fVar36 * (pfVar28[1] / param_2 - (float)(int)(uVar25 | 3));
                    pfVar29[1] = fVar41;
                    if ((3.1415927 < fVar44) || (fVar44 < -3.1415927)) {
                      fVar44 = fVar44 + (float)(int)(fVar44 * 0.15915494) * -6.2831855;
                      pfVar29[-2] = fVar44;
                    }
                    if ((3.1415927 < fVar43) || (fVar43 < -3.1415927)) {
                      fVar43 = fVar43 + (float)(int)(fVar43 * 0.15915494) * -6.2831855;
                      pfVar29[-1] = fVar43;
                    }
                    if ((3.1415927 < fVar42) || (fVar42 < -3.1415927)) {
                      fVar42 = fVar42 + (float)(int)(fVar42 * 0.15915494) * -6.2831855;
                      *pfVar29 = fVar42;
                    }
                    if ((3.1415927 < fVar41) || (fVar41 < -3.1415927)) {
                      fVar41 = fVar41 + (float)(int)(fVar41 * 0.15915494) * -6.2831855;
                      pfVar29[1] = fVar41;
                    }
                    fVar45 = pfVar23[-2];
                    uVar31 = (uint)(fVar44 * 0.15915494 * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar46 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c01ac;
                      }
                      fVar46 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar46 = 0.0;
                    }
LAB_1005c01ac:
                    pfVar21[-4] = fVar45 * fVar46;
                    uVar31 = (uint)((fVar44 * 0.15915494 + -0.25) * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar44 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c021c;
                      }
                      fVar44 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar44 = 0.0;
                    }
LAB_1005c021c:
                    pfVar21[-3] = fVar45 * fVar44;
                    fVar44 = pfVar23[-1];
                    uVar31 = (uint)(fVar43 * 0.15915494 * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar45 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c0288;
                      }
                      fVar45 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar45 = 0.0;
                    }
LAB_1005c0288:
                    pfVar21[-2] = fVar44 * fVar45;
                    uVar31 = (uint)((fVar43 * 0.15915494 + -0.25) * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar43 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c02f8;
                      }
                      fVar43 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar43 = 0.0;
                    }
LAB_1005c02f8:
                    pfVar21[-1] = fVar44 * fVar43;
                    fVar43 = *pfVar23;
                    uVar31 = (uint)(fVar42 * 0.15915494 * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar44 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c0364;
                      }
                      fVar44 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar44 = 0.0;
                    }
LAB_1005c0364:
                    *pfVar21 = fVar43 * fVar44;
                    uVar31 = (uint)((fVar42 * 0.15915494 + -0.25) * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar42 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c03cc;
                      }
                      fVar42 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar42 = 0.0;
                    }
LAB_1005c03cc:
                    pfVar21[1] = fVar43 * fVar42;
                    fVar42 = pfVar23[1];
                    uVar31 = (uint)(fVar41 * 0.15915494 * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar43 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c0430;
                      }
                      fVar43 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar43 = 0.0;
                    }
LAB_1005c0430:
                    pfVar21[2] = fVar42 * fVar43;
                    uVar31 = (uint)((fVar41 * 0.15915494 + -0.25) * 32768.0);
                    uVar25 = -uVar31;
                    if (-1 < (int)uVar31) {
                      uVar25 = uVar31;
                    }
                    uVar31 = uVar25 >> 0xd & 3;
                    if (uVar31 < 4) {
                      uVar25 = uVar25 & 0x7fff;
                      switch(uVar31) {
                      case 1:
                        iVar32 = 0x3fff - uVar25;
                        break;
                      case 2:
                        iVar32 = uVar25 - 0x4000;
                        break;
                      case 3:
                        uVar25 = uVar25 ^ 0x7fff;
                      case 0:
                        fVar41 = *(float *)(*plVar4 + (ulong)uVar25 * 4);
                        goto LAB_1005c0494;
                      }
                      fVar41 = -*(float *)(*plVar4 + (long)iVar32 * 4);
                    }
                    else {
                      fVar41 = 0.0;
                    }
LAB_1005c0494:
                    lVar17 = lVar17 + 4;
                    pfVar21[3] = fVar42 * fVar41;
                    pfVar21 = pfVar21 + 8;
                    pfVar23 = pfVar23 + 4;
                    pfVar29 = pfVar29 + 4;
                    pfVar28 = pfVar28 + 4;
                  } while (lVar17 <= lVar34);
                }
              }
            }
            uVar25 = *piVar2 - 2;
            _bzero(&DAT_101da1f78 + *piVar2,
                   -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2);
            FUN_1005be2ec();
            FUN_1005bf1cc(param_3,&DAT_101da1f70);
            if (0 < *piVar2) {
              iVar32 = 0;
              lVar17 = 0;
              do {
                puVar16[lVar17] =
                     (float)puVar16[lVar17] +
                     *(float *)(*(long *)(param_3 + 0x5008) + lVar17 * 4) *
                     (float)(&DAT_101da1f70)[iVar32];
                lVar17 = lVar17 + 1;
                iVar32 = iVar32 + 2;
              } while (lVar17 < *piVar2);
            }
            if (0 < (int)uVar10) {
              uVar18 = uVar1 & 0x1fffffffe;
              puVar19 = param_3 + 0x3009;
              puVar24 = param_3 + 0x1000;
              uVar30 = uVar1 & 0xfffffffffffffffe;
              if (uVar18 == 0) {
                uVar18 = 0;
              }
              else {
                do {
                  uVar9 = *puVar19;
                  *puVar24 = puVar19[-1];
                  puVar24[1] = uVar9;
                  uVar30 = uVar30 - 2;
                  puVar19 = puVar19 + 2;
                  puVar24 = puVar24 + 2;
                } while (uVar30 != 0);
              }
              if ((ulong)(uVar10 - 1) + 1 != uVar18) {
                iVar32 = uVar10 - (int)uVar18;
                puVar19 = param_3 + 0x1000 + uVar18;
                puVar24 = puVar16 + uVar18;
                do {
                  *puVar19 = *puVar24;
                  iVar32 = iVar32 + -1;
                  puVar19 = puVar19 + 1;
                  puVar24 = puVar24 + 1;
                } while (iVar32 != 0);
              }
            }
            _memmove(puVar16,puVar16 + (int)uVar10,
                     -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar26 << 2);
            _bzero(puVar16 + (int)uVar11,
                   -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2);
            puVar19 = param_3;
            uVar30 = uVar26;
            if (0 < (int)uVar11) {
              do {
                *puVar19 = puVar19[(int)uVar10];
                uVar25 = (int)uVar30 - 1;
                uVar30 = (ulong)uVar25;
                puVar19 = puVar19 + 1;
              } while (uVar25 != 0);
            }
          }
          if ((int)lVar33 == param_4 + -1) {
            return;
          }
          lVar33 = lVar33 + 1;
          uVar30 = (ulong)*puVar3;
        } while( true );
      }
    }
    else if (0 < param_4) {
      puVar16 = (undefined4 *)(param_7 + (long)param_8 * 4);
      do {
        *puVar16 = 0;
        param_4 = param_4 + -1;
        puVar16 = (undefined4 *)
                  ((long)puVar16 +
                  (-(param_9 >> 0x1f & 1) & 0xfffffffc00000000 | (param_9 & 0xffffffff) << 2));
      } while (param_4 != 0);
    }
  }
  return;
}

