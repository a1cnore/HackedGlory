// functions/1005c — 164 functions
#include "GameKindred.h"




void FUN_1005c06d4(long param_1,float *param_2,int param_3)

{
  long *plVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar3 = *(int *)(param_1 + 0x14030);
  iVar4 = iVar3 * 2;
  if (2 < iVar4 + -2) {
    uVar10 = 2;
    do {
      uVar11 = 0;
      if (1 < (iVar3 << 1) >> 1) {
        uVar13 = 2;
        do {
          uVar11 = ((uVar13 & (uint)uVar10) != 0 | uVar11) << 1;
          uVar13 = uVar13 * 2;
        } while ((int)uVar13 < iVar4);
      }
      uVar12 = (ulong)(int)uVar11;
      if ((long)uVar10 < (long)uVar12) {
        fVar17 = param_2[uVar10];
        param_2[uVar10] = param_2[uVar12];
        param_2[uVar12] = fVar17;
        fVar17 = param_2[uVar10 | 1];
        param_2[uVar10 | 1] = param_2[uVar12 | 1];
        param_2[uVar12 | 1] = fVar17;
      }
      uVar10 = uVar10 + 2;
    } while ((long)uVar10 < (long)(iVar4 + -2));
  }
  iVar3 = *(int *)(param_1 + 0x14034);
  if (0 < iVar3) {
    iVar9 = 0;
    plVar1 = (long *)(param_1 + 0x14038);
    uVar10 = 2;
    do {
      iVar15 = (int)uVar10;
      fVar17 = 0.5 / (float)((iVar15 << 1) >> 2);
      uVar13 = (uint)(fVar17 * 32768.0);
      uVar11 = -uVar13;
      if (-1 < (int)uVar13) {
        uVar11 = uVar13;
      }
      uVar13 = uVar11 >> 0xd & 3;
      if (uVar13 < 4) {
        uVar11 = uVar11 & 0x7fff;
        switch(uVar13) {
        case 1:
          iVar14 = 0x3fff - uVar11;
          break;
        case 2:
          iVar14 = uVar11 - 0x4000;
          break;
        case 3:
          uVar11 = uVar11 ^ 0x7fff;
        case 0:
          fVar16 = *(float *)(*plVar1 + (ulong)uVar11 * 4);
          goto LAB_1005c082c;
        }
        fVar16 = -*(float *)(*plVar1 + (long)iVar14 * 4);
      }
      else {
        fVar16 = 0.0;
      }
LAB_1005c082c:
      uVar13 = iVar15 * 2;
      uVar5 = (uint)((fVar17 + -0.25) * 32768.0);
      uVar11 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar11 = uVar5;
      }
      uVar5 = uVar11 >> 0xd & 3;
      if (uVar5 < 4) {
        uVar11 = uVar11 & 0x7fff;
        switch(uVar5) {
        case 1:
          iVar14 = 0x3fff - uVar11;
          break;
        case 2:
          iVar14 = uVar11 - 0x4000;
          break;
        case 3:
          uVar11 = uVar11 ^ 0x7fff;
        case 0:
          fVar17 = *(float *)(*plVar1 + (ulong)uVar11 * 4);
          goto LAB_1005c088c;
        }
        fVar17 = -*(float *)(*plVar1 + (long)iVar14 * 4);
      }
      else {
        fVar17 = 0.0;
      }
LAB_1005c088c:
      if (0 < (int)uVar13) {
        uVar12 = 0;
        fVar18 = 0.0;
        fVar20 = 1.0;
        pfVar6 = param_2;
        do {
          pfVar7 = pfVar6;
          uVar8 = uVar12;
          if ((long)uVar12 < (long)iVar4) {
            do {
              pfVar2 = pfVar7 + ((long)(uVar10 << 0x21) >> 0x21);
              fVar21 = fVar20 * *pfVar2 - fVar18 * pfVar2[1];
              fVar19 = fVar18 * *pfVar2 + fVar20 * pfVar2[1];
              *pfVar2 = *pfVar7 - fVar21;
              pfVar2[1] = pfVar7[1] - fVar19;
              *pfVar7 = fVar21 + *pfVar7;
              pfVar7[1] = fVar19 + pfVar7[1];
              uVar11 = (int)uVar8 + uVar13;
              pfVar7 = (float *)((long)pfVar7 +
                                (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2)
                                );
              uVar8 = (ulong)uVar11;
            } while ((int)uVar11 < iVar4);
          }
          fVar19 = (float)param_3 * fVar17 * fVar20;
          fVar20 = fVar16 * fVar20 - (float)param_3 * fVar17 * fVar18;
          fVar18 = fVar19 + fVar16 * fVar18;
          uVar12 = uVar12 + 2;
          pfVar6 = pfVar6 + 2;
        } while ((long)uVar12 < (long)((iVar15 << 1) >> 1));
      }
      iVar9 = iVar9 + 1;
      uVar10 = (ulong)uVar13;
    } while (iVar9 < iVar3);
  }
  return;
}




void FUN_1005c0988(long param_1)

{
  *(undefined1 *)(param_1 + 0x14040) = 1;
  return;
}




undefined8 FUN_1005c099c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0xc1d8);
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0xc1e4))) {
    lVar3 = 0;
    lVar4 = 0;
    lVar1 = 0x14038;
    do {
      _bzero((void *)(lVar2 + lVar3),0x14020);
      _bzero(&DAT_101da1f70,0x8000);
      _bzero(&DAT_101db4078,0x4000);
      _bzero(&DAT_101db8078,0x4000);
      _bzero(&DAT_101dac078,0x4000);
      _bzero(&DAT_101db0078,0x4000);
      *(undefined4 *)(lVar2 + lVar1 + -0x10) = 0;
      lVar2 = *(long *)(param_1 + 0xc1d8);
      *(long *)(lVar2 + lVar1) = param_1 + 0x1c8;
      lVar4 = lVar4 + 1;
      lVar1 = lVar1 + 0x14048;
      lVar3 = lVar3 + 0x14048;
    } while (lVar4 < *(int *)(param_1 + 0xc1e4));
  }
  return 0;
}




undefined8
FUN_1005c0aa4(long param_1,void *param_2,void *param_3,undefined8 param_4,undefined8 param_5,
             int *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_2 != (void *)0x0) {
    iVar2 = (int)param_5;
    if (iVar2 <= *(int *)(param_1 + 0xc1e4)) {
      lVar1 = *(long *)(param_1 + 0xc1d8);
      if (lVar1 != 0) {
        if (iVar2 < 1) {
          return 0;
        }
        lVar4 = 0;
        iVar3 = 0;
        while( true ) {
          lVar1 = lVar1 + lVar4;
          *(undefined4 *)(lVar1 + 0x14030) = *(undefined4 *)(param_1 + 0xc1cc);
          *(undefined4 *)(lVar1 + 0x14034) = *(undefined4 *)(param_1 + 0xc1e8);
          FUN_1005bf7d0(*(undefined4 *)(param_1 + 0xc1c8),(float)*(int *)(param_1 + 0xc1e0),lVar1,
                        param_4,*(undefined4 *)(param_1 + 0xc1d0),param_2,param_3,iVar3,param_5);
          if (iVar2 + -1 == iVar3) break;
          lVar1 = *(long *)(param_1 + 0xc1d8);
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 0x14048;
        }
        return 0;
      }
    }
    _memcpy(param_3,param_2,(ulong)(uint)(*param_6 * (int)param_4) << 2);
  }
  return 0;
}




undefined8 FUN_1005c0bec(float param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  float *pfVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  lVar28 = *(long *)(param_2 + 0x90);
  piVar2 = (int *)(param_2 + 0xc1e4);
  piVar3 = (int *)(param_2 + 0xc1cc);
  iVar25 = *piVar2;
  iVar32 = *piVar3;
  pfVar4 = (float *)(param_2 + 0xc1c8);
  fVar35 = *pfVar4;
  piVar5 = (int *)(param_2 + 0xc1d0);
  iVar22 = *piVar5;
  switch(param_3) {
  case 0:
    *pfVar4 = param_1;
    if (param_1 != 0.0) goto switchD_1005c0c68_default;
    bVar6 = false;
    *pfVar4 = 1.0;
    break;
  case 1:
    if (param_1 <= 4096.0) {
      if (param_1 <= 256.0) {
        iVar27 = 0x100;
      }
      else if (param_1 <= 512.0) {
        iVar27 = 0x200;
      }
      else if (param_1 <= 1024.0) {
        iVar27 = 0x400;
      }
      else if (param_1 <= 2048.0) {
        iVar27 = 0x800;
      }
      else {
        iVar27 = iVar32;
        if (param_1 <= 4096.0) {
          iVar27 = 0x1000;
        }
      }
    }
    else {
      iVar27 = 0x1000;
    }
    if (iVar32 == iVar27) {
      bVar6 = false;
    }
    else if (lVar28 == 0) {
      bVar6 = false;
      *piVar3 = iVar27;
    }
    else {
      FUN_100570c5c(lVar28);
      bVar6 = true;
      *piVar3 = iVar27;
    }
    break;
  case 2:
    if (iVar22 == 4) goto switchD_1005c0c68_default;
    bVar6 = lVar28 != 0;
    if (bVar6) {
      FUN_100570c5c(lVar28);
    }
    *piVar5 = 4;
    break;
  case 3:
    bVar6 = false;
    *(int *)(param_2 + 0xc1d4) = (int)param_1;
    break;
  default:
switchD_1005c0c68_default:
    bVar6 = false;
  }
  *(undefined4 *)(param_2 + 0xc1e0) = *(undefined4 *)(*(long *)(param_2 + 0x90) + 0x708);
  iVar27 = *(int *)(param_2 + 0xc1d4);
  if (iVar27 == 0) {
    iVar27 = *(int *)(*(long *)(param_2 + 0x90) + 0x70c);
  }
  if (iVar27 != iVar25) {
    if ((lVar28 != 0) && (!bVar6)) {
      FUN_100570c5c(lVar28);
      bVar6 = true;
    }
    *piVar2 = iVar27;
  }
  iVar27 = iVar32;
  if (iVar32 != *piVar3) {
    if (*(long *)(param_2 + 0xc1d8) != 0) {
      FUN_1005be164();
      iVar27 = *piVar3;
      goto LAB_1005c0e2c;
    }
LAB_1005c0ee0:
    uVar26 = 0x1e;
    goto LAB_1005c12bc;
  }
LAB_1005c0e2c:
  if ((iVar32 != iVar27) || (iVar22 != *piVar5)) {
    if (*(long *)(param_2 + 0xc1d8) == 0) goto LAB_1005c0ee0;
    if (iVar27 < 0x1000) {
      puVar1 = &UNK_10115ef14;
      uVar17 = 0x201;
      if (iVar27 != 0x800) {
        uVar17 = 0;
        puVar1 = (undefined *)0x0;
      }
      puVar13 = &UNK_10115ef14;
      uVar11 = 0x201;
      if (iVar27 != 0x400) {
        puVar13 = puVar1;
        uVar11 = uVar17;
      }
      puVar1 = &UNK_10115ef14;
      uVar17 = 0x201;
      if (iVar27 != 0x200) {
        uVar17 = 0;
        puVar1 = (undefined *)0x0;
      }
      puVar7 = &UNK_10115ef14;
      uVar8 = 0x201;
      if (iVar27 != 0x100) {
        puVar7 = puVar1;
        uVar8 = uVar17;
      }
      if (iVar27 < 0x400) {
        puVar13 = puVar7;
        uVar11 = uVar8;
      }
      bVar9 = iVar27 == 0x400;
    }
    else {
      puVar13 = &UNK_10115ef14;
      uVar11 = 0x201;
      if (iVar27 != 0x1000) {
        uVar11 = 0;
      }
      bVar9 = false;
      if (iVar27 != 0x1000) {
        puVar13 = (undefined *)0x0;
      }
    }
    if (0 < iVar27) {
      lVar16 = 0;
      fVar31 = (float)(int)((uVar11 - 1) * 2);
      iVar32 = *piVar5;
      pfVar19 = (float *)(param_2 + 0x81c8);
      uVar17 = uVar11 * 2 - 2;
      uVar20 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
      do {
        if (bVar9) {
          if (lVar16 < (long)(ulong)uVar11) {
            fVar33 = *(float *)(puVar13 + lVar16 * 4);
          }
          else {
            fVar33 = *(float *)(puVar13 + uVar20);
          }
          *pfVar19 = fVar33;
          pfVar23 = (float *)(param_2 + lVar16 * 4 + 0x81c8);
        }
        else {
          fVar34 = (fVar31 / (float)iVar27) * (float)(int)lVar16;
          if (fVar34 <= (float)(int)(uVar11 - 1)) {
            iVar22 = 1;
          }
          else {
            fVar34 = fVar31 - fVar34;
            iVar22 = -1;
          }
          iVar24 = (int)fVar34;
          fVar33 = *(float *)(puVar13 + (long)iVar24 * 4);
          if (((float)iVar24 == fVar34) || (iVar24 + iVar22 < 0)) {
            *pfVar19 = fVar33;
            pfVar23 = pfVar19;
          }
          else {
            fVar33 = fVar33 + (fVar34 - (float)iVar24) *
                              (*(float *)(puVar13 + (long)(iVar24 + iVar22) * 4) - fVar33);
            *pfVar19 = fVar33;
            pfVar23 = (float *)(param_2 + lVar16 * 4 + 0x81c8);
          }
        }
        *pfVar23 = fVar33 / SQRT((float)iVar27 * 0.25 * (float)iVar32);
        lVar16 = lVar16 + 1;
        pfVar19 = pfVar19 + 1;
        uVar20 = uVar20 - 4;
      } while (lVar16 < *piVar3);
    }
    iVar32 = *piVar2;
    uVar20 = (ulong)iVar32;
    if (0 < iVar32) {
      lVar16 = param_2 + 0x81c8;
      lVar14 = *(long *)(param_2 + 0xc1d8);
      if (iVar32 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar20 & 0xfffffffffffffffe;
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else {
          plVar15 = (long *)(lVar14 + 0x14020);
          plVar18 = (long *)(lVar14 + 0x28068);
          uVar21 = uVar10;
          do {
            *plVar15 = lVar16;
            *plVar18 = lVar16;
            uVar21 = uVar21 - 2;
            plVar15 = plVar15 + 0x5012;
            plVar18 = plVar18 + 0x5012;
          } while (uVar21 != 0);
        }
        if (uVar20 == uVar10) goto LAB_1005c10b4;
      }
      plVar15 = (long *)(lVar14 + uVar10 * 0x14048 + 0x14020);
      do {
        *plVar15 = lVar16;
        uVar10 = uVar10 + 1;
        plVar15 = plVar15 + 0x2809;
      } while ((long)uVar10 < (long)uVar20);
    }
LAB_1005c10b4:
    FUN_1005cede0(param_2);
  }
  iVar32 = *piVar2;
  plVar15 = (long *)(param_2 + 0xc1d8);
  lVar16 = *plVar15;
  if (iVar32 == iVar25) {
    if (lVar16 == 0) goto LAB_1005c1114;
LAB_1005c121c:
    if (0 < iVar25) {
      lVar14 = 0;
      fVar31 = *pfVar4;
      puVar12 = (undefined1 *)(lVar16 + 0x14040);
      do {
        *(float *)(puVar12 + -0x14) = fVar31 / fVar35;
        if (fVar35 != fVar31) {
          *puVar12 = 1;
        }
        lVar14 = lVar14 + 1;
        puVar12 = puVar12 + 0x14048;
      } while (lVar14 < iVar25);
    }
  }
  else {
    if (lVar16 != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar16,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_pitchshift.cpp"
                    ,0x898);
      iVar32 = *piVar2;
    }
LAB_1005c1114:
    lVar16 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar32 * 0x14048,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_pitchshift.cpp"
                           ,0x89b,0,0);
    *plVar15 = lVar16;
    if (lVar16 == 0) {
      uVar26 = 0x26;
      goto LAB_1005c12bc;
    }
    if (0 < *piVar2) {
      lVar30 = 0;
      lVar14 = 0;
      lVar29 = 0x14038;
      do {
        _bzero((void *)(lVar16 + lVar30),0x14020);
        _bzero(&DAT_101da1f70,0x8000);
        _bzero(&DAT_101db4078,0x4000);
        _bzero(&DAT_101db8078,0x4000);
        _bzero(&DAT_101dac078,0x4000);
        _bzero(&DAT_101db0078,0x4000);
        *(undefined4 *)(lVar16 + lVar29 + -0x10) = 0;
        lVar16 = *plVar15;
        ((long *)(lVar16 + lVar29))[-3] = param_2 + 0x81c8;
        *(long *)(lVar16 + lVar29) = param_2 + 0x1c8;
        lVar14 = lVar14 + 1;
        iVar25 = *piVar2;
        lVar29 = lVar29 + 0x14048;
        lVar30 = lVar30 + 0x14048;
      } while (lVar14 < iVar25);
      goto LAB_1005c121c;
    }
  }
  iVar25 = 0;
  iVar32 = *piVar3;
  *(int *)(param_2 + 0xc1e8) = 0;
  if (1 < iVar32) {
    do {
      iVar32 = iVar32 >> 1;
      iVar25 = iVar25 + 1;
    } while (1 < iVar32);
    *(int *)(param_2 + 0xc1e8) = iVar25;
  }
  uVar26 = 0;
LAB_1005c12bc:
  if ((lVar28 != 0) && (bVar6)) {
    FUN_100570c9c(lVar28);
  }
  return uVar26;
}




undefined8 FUN_1005c1308(long param_1,undefined4 param_2,float *param_3,char *param_4)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    if (param_3 != (float *)0x0) {
      *param_3 = *(float *)(param_1 + 0xc1c8);
    }
    if (param_4 == (char *)0x0) {
      return 0;
    }
    pcVar1 = "%.02f";
    goto LAB_1005c13d0;
  case 1:
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(param_1 + 0xc1cc);
    }
    if (param_4 == (char *)0x0) {
      return 0;
    }
    goto LAB_1005c13c0;
  case 2:
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(param_1 + 0xc1d0);
    }
    break;
  case 3:
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(param_1 + 0xc1d4);
    }
    break;
  default:
    goto switchD_1005c1330_default;
  }
  if (param_4 != (char *)0x0) {
LAB_1005c13c0:
    pcVar1 = "%d";
LAB_1005c13d0:
    _sprintf(param_4,pcVar1);
  }
switchD_1005c1330_default:
  return 0;
}




void FUN_1005c13f8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
  }
  FUN_1005c1574(lVar1);
  return;
}




undefined8 FUN_1005c1410(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
  }
  if (*(long *)(lVar1 + 0x1e8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x1e8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_resampler.cpp"
                  ,0xfd);
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
  }
  return 0;
}




void FUN_1005c146c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
  }
  FUN_1005c1764(lVar1);
  return;
}




void FUN_1005c1484(void)

{
  DAT_101dbc078 = &DAT_10186d118;
  DAT_101dbc090 = 0x3e9;
  DAT_101dbc088 = 600;
  return;
}




undefined8 * FUN_1005c14ac(undefined8 *param_1)

{
  FUN_1005cd400(param_1 + 1);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x7fffffff;
  *(undefined4 *)((long)param_1 + 0x204) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  *param_1 = &PTR_FUN_1014a28b0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x49) = 2;
  return param_1;
}




undefined8 * FUN_1005c1510(undefined8 *param_1)

{
  FUN_1005cd400(param_1 + 1);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x7fffffff;
  *(undefined4 *)((long)param_1 + 0x204) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  *param_1 = &PTR_FUN_1014a28b0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x49) = 2;
  return param_1;
}




undefined8 FUN_1005c1574(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_24;
  
  piVar6 = *(int **)(param_1 + 0x100);
  if (*(long *)(param_1 + 0x118) == 0) {
    *(long *)(param_1 + 0x118) = param_1;
  }
  *(float *)(param_1 + 0x1d8) = (float)*(int *)(*(long *)(param_1 + 0x98) + 0x708);
  iVar3 = *(int *)(param_1 + 0x1f8);
  if (iVar3 == 0) {
    if (((piVar6 == (int *)0x0) || (iVar3 = *piVar6, *piVar6 == 0)) &&
       (uVar1 = FUN_1005f696c(*(long *)(param_1 + 0x98),&local_24,0), iVar3 = local_24,
       (int)uVar1 != 0)) {
      return uVar1;
    }
    *(int *)(param_1 + 0x1f8) = iVar3;
  }
  if (iVar3 < 8) {
    return 0x1c;
  }
  *(int *)(param_1 + 0x1fc) = iVar3;
  if (piVar6 == (int *)0x0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x98) + 0x70c);
    *(undefined4 *)(param_1 + 0x24c) = 0;
LAB_1005c1644:
    *(undefined4 *)(param_1 + 0x24c) = 5;
    uVar5 = 4;
  }
  else {
    iVar4 = piVar6[1];
    if (iVar4 == 0) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x98) + 0x70c);
    }
    uVar5 = piVar6[2];
    *(uint *)(param_1 + 0x24c) = uVar5;
    if (5 < uVar5) {
      return 0x13;
    }
    if (uVar5 == 0) goto LAB_1005c1644;
    uVar5 = uVar5 - 1;
    if (4 < uVar5) {
      uVar5 = 1;
      goto LAB_1005c1660;
    }
  }
  uVar5 = *(uint *)(&DAT_10115f770 + (long)(int)uVar5 * 4) >> 3;
LAB_1005c1660:
  uVar5 = uVar5 * iVar4 * (iVar3 + 8) + 0xf & 0xfffffff0;
  *(uint *)(param_1 + 0x200) = uVar5;
  if (((piVar6 != (int *)0x0) && (*(long *)(param_1 + 0x1f0) == 0)) && ((char)piVar6[3] != '\0')) {
    lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar5 + 0x10,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_resampler.cpp"
                          ,0xce,0);
    *(long *)(param_1 + 0x1e8) = lVar2;
    if (lVar2 == 0) {
      return 0x26;
    }
    *(ulong *)(param_1 + 0x1f0) = lVar2 + 0xfU & 0xfffffffffffffff0;
    iVar3 = *(int *)(param_1 + 0x1f8);
  }
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(short *)(param_1 + 0x8e) = (short)iVar3;
  *(undefined4 *)(param_1 + 0x230) = 1;
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x1c) = 0;
  return 0;
}




undefined8 FUN_1005c1718(long param_1)

{
  if (*(long *)(param_1 + 0x1e8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1e8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_resampler.cpp"
                  ,0xfd);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return 0;
}




ulong FUN_1005c1764(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                   int param_6)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined4 local_24;
  
  if (param_6 == 1) {
    if (((int)param_2 == 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
      (**(code **)(*param_1 + 8))(param_1,1,0,1);
      uVar2 = 9;
    }
    else {
      uVar2 = 0;
      if ((param_3 != 0) && (param_4 != 0)) {
        if (param_1[0x43] == 0) {
          if (param_1[0x45] == 0) {
            return 6;
          }
          lVar6 = *(long *)(param_1[0x45] + 0x58);
          if (*(code **)(lVar6 + 0x108) == (code *)0x0) {
            return 6;
          }
          *(long *)(lVar6 + 0x98) = lVar6;
          uVar1 = (**(code **)(lVar6 + 0x108))(lVar6 + 0x98,param_2,param_3,param_4,param_5,1);
          iVar3 = **(int **)(param_4 + 8);
          iVar5 = (int)param_1[0x21];
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_1[0x13] + 0x70c);
          }
          if (iVar3 != iVar5) {
            uVar1 = 6;
          }
          uVar2 = (ulong)uVar1;
        }
        else {
          iVar3 = (int)param_1[0x21];
          **(int **)(param_4 + 8) = iVar3;
          uVar1 = (int)param_1[0x21] - 1;
          if (uVar1 < 8) {
            if (((long)(int)uVar1 & 0xfffffffffffffffbU) == 2) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0;
              *(undefined4 *)(param_4 + 0x20) =
                   *(undefined4 *)(&DAT_10115f750 + (long)(int)uVar1 * 4);
            }
          }
          else {
            uVar2 = 0;
          }
        }
        if (iVar3 < 2) {
          uVar4 = 0;
        }
        else if (iVar3 < 9) {
          uVar4 = *(undefined4 *)((long)&PTR___mh_execute_header_10115f720 + (long)iVar3 * 4);
        }
        else {
          uVar4 = 0xffffffff;
        }
        **(undefined4 **)(param_4 + 0x10) = uVar4;
      }
    }
  }
  else {
    local_24 = **(undefined4 **)(param_4 + 8);
    uVar2 = FUN_1005c1934(param_1,**(undefined8 **)(param_4 + 0x18),&local_24,param_2);
  }
  return uVar2;
}




undefined8 FUN_1005c18f0(long *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 == 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    *(undefined1 *)((long)param_1 + 0x31) = 0;
    (**(code **)(*param_1 + 8))(param_1,1,0,1);
    uVar1 = 9;
  }
  return uVar1;
}




undefined8 FUN_1005c1934(long *param_1,long param_2,int *param_3,ulong param_4)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  ulong local_80;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  long local_68;
  
  local_68 = 0;
  iVar2 = (int)param_1[0x21];
  if (iVar2 == 0) {
    iVar2 = *param_3;
  }
  uVar16 = *(int *)((long)param_1 + 0x24c) - 1;
  if (uVar16 < 5) {
    uVar16 = *(uint *)(&DAT_10115f770 + (long)(int)uVar16 * 4) >> 3;
  }
  else {
    uVar16 = 1;
  }
  fVar19 = (float)(**(code **)(*param_1 + 0x10))(param_1);
  fVar20 = *(float *)(param_1 + 0x3b);
  if (fVar19 == fVar20) {
    local_80 = 0;
    uVar9 = 1;
    local_68 = 0x100000000;
  }
  else {
    local_68 = (long)((fVar19 / fVar20) * 4.2949673e+09);
    uVar9 = 0xffffffff;
    local_80 = 0xffffffff;
    if (0x100 < local_68) {
      local_80 = (ulong)((fVar20 / fVar19) * 4.2949673e+09);
      uVar9 = local_80 >> 0x20;
      local_80 = local_80 & 0xffffffff;
    }
  }
  if (0 < (int)param_4) {
    iVar10 = 0;
    iVar4 = uVar16 * iVar2;
    uVar17 = param_4;
    do {
      iVar7 = *(int *)((long)param_1 + 0x20c);
      if (*(int *)((long)param_1 + 0x1e4) < iVar7) {
        if (local_68 < 0x101) {
          bVar18 = false;
          uVar11 = (ulong)*(uint *)(param_1 + 0x3c);
          uVar15 = uVar17;
LAB_1005c1ae8:
          local_6c = *(int *)((long)param_1 + 0x1e4) + 8;
          local_70 = (undefined4)uVar11;
          FUN_1005c1db0(param_2 + (long)(iVar10 * iVar2) * 4,uVar15,param_1[0x3e],
                        *(undefined4 *)((long)param_1 + 0x24c),&local_70,&local_68,iVar2,
                        (int)param_1[0x49]);
          *(int *)((long)param_1 + 0x1e4) = local_6c + -8;
          *(undefined4 *)(param_1 + 0x3c) = local_70;
          iVar10 = (int)uVar15 + iVar10;
          uVar16 = (int)uVar17 - (int)uVar15;
          uVar17 = (ulong)uVar16;
          if (!bVar18) {
            if (0 < (int)uVar16) {
              iVar7 = *(int *)((long)param_1 + 0x20c);
              goto LAB_1005c1b44;
            }
            break;
          }
        }
        else {
          uVar5 = iVar7 - 4;
          uVar8 = *(uint *)(param_1 + 0x41);
          uVar16 = uVar5;
          if ((int)uVar8 <= (int)uVar5) {
            uVar16 = uVar8;
          }
          bVar18 = (int)uVar8 <= (int)uVar5;
          uVar11 = param_1[0x3c];
          uVar15 = ((ulong)uVar16 << 0x20) - uVar11;
          if ((long)uVar15 < 1) {
            uVar15 = 0;
          }
          else {
            uVar15 = (uVar15 & 0xffffffff) * (long)(int)uVar9 +
                     ((long)uVar15 >> 0x20) * (local_80 | uVar9 << 0x20) +
                     ((uVar15 & 0xffffffff) * local_80 >> 0x20) + 0xffffffff >> 0x20;
          }
          if ((int)uVar17 < (int)uVar15) {
            bVar18 = false;
            uVar15 = uVar17;
            goto LAB_1005c1ae8;
          }
          if (0 < (int)uVar15) goto LAB_1005c1ae8;
          if ((int)uVar5 < (int)uVar8) goto LAB_1005c1b44;
        }
        uVar16 = (int)uVar17 * iVar2;
        _bzero((void *)(param_2 + (long)(iVar10 * iVar2) * 4),
               -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2);
        (**(code **)(*param_1 + 8))(param_1,1,0,1);
        *(undefined4 *)((long)param_1 + 0x20c) = 0;
        param_1[0x3c] = 0;
        *(undefined4 *)(param_1 + 0x41) = 0;
        break;
      }
LAB_1005c1b44:
      if (iVar7 == 0) {
        iVar7 = (int)param_1[0x41];
      }
      else {
        _memmove((void *)param_1[0x3e],(void *)(param_1[0x3e] + (ulong)(uint)(iVar7 * iVar4)),
                 (long)(iVar4 * 8));
        *(int *)((long)param_1 + 0x1e4) =
             *(int *)((long)param_1 + 0x1e4) - *(int *)((long)param_1 + 0x20c);
        iVar7 = 0x7fffffff;
        if ((int)param_1[0x41] != 0x7fffffff) {
          iVar7 = (int)param_1[0x41] - *(int *)((long)param_1 + 0x20c);
          *(int *)(param_1 + 0x41) = iVar7;
        }
        *(undefined4 *)((long)param_1 + 0x20c) = 0;
      }
      local_74 = *(uint *)((long)param_1 + 0x1fc);
      pvVar1 = (void *)(param_1[0x3e] + (long)(iVar4 * 8));
      if (iVar7 == 0x7fffffff) {
        uVar6 = FUN_1005c1e14(param_1,pvVar1,&local_74,iVar2);
        if (((uint)uVar6 | 0x10) != 0x10) {
          return uVar6;
        }
      }
      else {
        _bzero(pvVar1,(ulong)(local_74 * iVar4));
        uVar6 = 0;
      }
      *(uint *)((long)param_1 + 0x184) = *(uint *)((long)param_1 + 0x184) | 0x20;
      if (*(uint *)((long)param_1 + 0x1fc) < local_74) {
        return 0x1c;
      }
      *(uint *)((long)param_1 + 0x20c) = local_74;
      if (((int)uVar6 == 0x10) && ((int)param_1[0x41] == 0x7fffffff)) {
        *(uint *)(param_1 + 0x41) = local_74;
      }
    } while (0 < (int)uVar17);
  }
  uVar5 = *(uint *)(param_1 + 0x48);
  puVar13 = (uint *)param_1[0x4a];
  uVar16 = puVar13[1];
  uVar8 = puVar13[2];
  if (uVar5 < uVar8 + uVar16) {
    uVar8 = uVar5 - uVar16;
    puVar13[2] = uVar8;
  }
  if ((int)param_1[0x44] == 1) {
    uVar3 = *puVar13;
    if ((uVar3 >> 1 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if (*(int *)((long)param_1 + 0x244) != 0) {
        uVar14 = uVar16;
      }
    }
    lVar12 = param_1[0x3a] - local_68 * (param_4 & 0xffffffff);
    param_1[0x3a] = lVar12;
    iVar10 = (int)((ulong)lVar12 >> 0x20);
    if (iVar10 <= (int)uVar14) {
      if ((uVar5 == 0xffffffff) || ((uVar3 & 2) != 0)) {
        *(uint *)((long)param_1 + 0x1d4) = iVar10 + uVar8;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x1d4) = 0;
      }
    }
  }
  else {
    if (uVar5 < uVar8 + uVar16) {
      uVar8 = uVar5 - uVar16;
      puVar13[2] = uVar8;
    }
    uVar3 = *puVar13;
    uVar14 = uVar5;
    if (((uVar3 >> 1 & 1) != 0) && (*(int *)((long)param_1 + 0x244) != 0)) {
      uVar14 = uVar8 + uVar16;
    }
    uVar9 = param_1[0x3a] + local_68 * (param_4 & 0xffffffff);
    param_1[0x3a] = uVar9;
    if (((ulong)(uVar14 - 1) << 0x20 | 0xffffffff) < uVar9) {
      if ((uVar5 == 0xffffffff) || ((uVar3 & 2) != 0)) {
        *(uint *)((long)param_1 + 0x1d4) = (int)(uVar9 >> 0x20) - uVar8;
      }
      else {
        *(uint *)((long)param_1 + 0x1d4) = uVar5;
      }
    }
  }
  *param_3 = iVar2;
  return 0;
}




undefined8 FUN_1005c1db0(void)

{
  int *in_x5;
  int in_w7;
  
  if ((in_x5[1] == 1) && (*in_x5 == 0)) {
    FUN_1005c351c();
  }
  else if (in_w7 == 4) {
    FUN_1005c3d08();
  }
  else if (in_w7 == 3) {
    FUN_1005c2284();
  }
  else if (in_w7 == 1) {
    FUN_1005c351c();
  }
  else {
    FUN_10063b95c();
  }
  return 0;
}




void FUN_1005c1e14(long param_1,void *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int local_13c;
  undefined8 local_138;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [136];
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  *(long *)(param_1 + 0xa0) = param_1 + 8;
  lVar4 = *(long *)(param_1 + 0x228);
  lVar9 = lVar8;
  if (lVar4 == 0) {
    if (*(code **)(param_1 + 0x218) == (code *)0x0) {
      lVar4 = 0;
    }
    else {
      local_13c = (int)param_4;
      lVar4 = (**(code **)(param_1 + 0x218))(param_1 + 0xa0,param_2,0,param_3,&local_13c);
      if ((int)lVar4 == 0x10) {
        if ((**(byte **)(param_1 + 0x250) >> 1 & 1) == 0) {
          lVar4 = 0x10;
        }
        else {
          lVar4 = (ulong)(*(int *)(param_1 + 0x244) == 0) << 4;
        }
      }
    }
  }
  else {
    iVar1 = *param_3;
    local_138 = *(undefined8 *)(param_1 + 0x98);
    local_12c = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_130 = 0x10;
    local_128 = 0;
    local_120 = local_f8;
    iVar3 = *(int *)(param_1 + 0x230);
    *(int *)(param_1 + 0x230) = iVar3 + 1;
    local_118 = local_120;
    FUN_1005cb484(lVar4,&local_138,lVar4,iVar1,0,iVar1,iVar3,0);
    if (0 < local_12c) {
      lVar10 = 0;
      uVar2 = (int)param_4 - 1;
      do {
        lVar7 = *(long *)(*(long *)(local_118 + lVar10 * 8) + 0x58);
        while( true ) {
          if (uVar2 < 8) {
            uVar6 = *(undefined4 *)(&DAT_10115f750 + (long)(int)uVar2 * 4);
          }
          else {
            uVar6 = 1;
          }
          iVar3 = FUN_1005ca05c(lVar7,iVar1,uVar6,param_4);
          if (iVar3 == 0) break;
          lVar4 = FUN_10056b5f8(*(undefined8 *)(param_1 + 0x98));
          if ((int)lVar4 != 0) goto LAB_1005c201c;
        }
        if ((int)lVar10 == local_12c + -1) {
          lVar9 = lVar7 + 0x118;
          lVar4 = FUN_1005c8da0(lVar9);
          if (lVar4 == 0) {
            _bzero(param_2,(ulong)(uint)(*(int *)(lVar7 + 0x128) * iVar1) << 2);
          }
          else {
            uVar5 = FUN_1005c8da0(lVar9);
            FUN_10063a2fc(0x3f800000,param_2,uVar5,*(undefined4 *)(param_1 + 0x24c),5,
                          *(int *)(lVar7 + 0x128) * iVar1,1,1,0);
          }
          FUN_1005c8d10(lVar9);
          lVar9 = *(long *)PTR____stack_chk_guard_101444218;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < local_12c);
    }
    FUN_1005c8d10(param_1 + 0x120);
    lVar4 = 0;
  }
LAB_1005c201c:
  if (lVar9 != lVar8) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(lVar4);
  }
  return;
}




float FUN_1005c2050(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
  fVar2 = *(float *)(*(long *)(param_1 + 0x250) + 0x24) * fVar2 * 9.536743e-07;
  if (fVar2 < 0.0) {
    return 0.0;
  }
  fVar1 = 1e+06;
  if (fVar2 <= 1e+06) {
    fVar1 = fVar2;
  }
  return fVar1;
}




undefined8 FUN_1005c2094(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    *(undefined4 *)(param_2 + 0x220) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x220) = 1;
    param_1 = -param_1;
  }
  *(float *)(*(long *)(param_2 + 0x250) + 0x24) = param_1;
  return 0;
}




undefined8 FUN_1005c20c0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1005cc16c(param_1 + 8);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
    *(undefined4 *)(param_1 + 0x208) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = param_2;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  return uVar1;
}




undefined8 FUN_1005c210c(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x250);
    iVar1 = -1;
  }
  else {
    if (param_3 != 0) {
      lVar2 = *(long *)(param_1 + 0x98);
      if (lVar2 != 0) {
        FUN_10057097c(lVar2,3);
        *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x1c) = 0;
        FUN_100570990(lVar2,3);
        return 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x1c) = 0;
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x250);
    if (1 < *(int *)(lVar2 + 0x1c) + 1U) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0) {
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      return 0;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x15d10) + 1;
  }
  *(int *)(lVar2 + 0x1c) = iVar1;
  return 0;
}




undefined8 FUN_1005c21b4(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x98) + 0x15d10);
  }
  else {
    uVar2 = 0;
  }
  if ((uVar2 < *(uint *)(*(long *)(param_1 + 0x250) + 0x1c)) || (*(char *)(param_1 + 0x46) != '\0'))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  return 0;
}




void FUN_1005c2204(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005c2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_3,param_6);
  return;
}




undefined8 FUN_1005c222c(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  plVar1 = (long *)0x0;
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + -8);
  }
  if ((param_3 == 0) && (*(char *)((long)plVar1 + 0x31) != '\0')) {
    *(undefined1 *)((long)plVar1 + 0x31) = 0;
    (**(code **)(*plVar1 + 8))(plVar1,1,0,1);
    uVar2 = 9;
  }
  return uVar2;
}




void FUN_1005c2284(float *param_1,uint param_2,long param_3,int param_4,ulong *param_5,long *param_6
                  ,int param_7)

{
  short *psVar1;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  float *pfVar27;
  ulong uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  char *pcVar36;
  long lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  short sVar44;
  float fVar45;
  short sVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  short sVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  short sVar57;
  float fVar58;
  short sVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar59 [16];
  short sVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar67;
  short sVar68;
  float fVar69;
  short sVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar70 [16];
  short sVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar77;
  short sVar78;
  float fVar79;
  short sVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar80 [16];
  short sVar84;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  
  if (param_4 - 1U < 5) {
    iVar30 = (int)param_2 >> 2;
    switch(param_4) {
    case 1:
      if (param_7 - 1U == 0) {
        if (iVar30 != 0) {
          uVar26 = iVar30 - 1;
          uVar28 = (ulong)(uint)*param_5;
          uVar35 = (ulong)*(uint *)((long)param_5 + 4);
          auVar38 = NEON_fmov(0x40400000,4);
          auVar39 = NEON_fmov(0x40a00000,4);
          pfVar27 = param_1;
          uVar25 = *param_5;
          do {
            cVar21 = ((char *)(param_3 + uVar35))[-1];
            cVar15 = *(char *)(param_3 + (ulong)((int)uVar35 + 1));
            cVar12 = *(char *)(param_3 + uVar35);
            cVar16 = *(char *)(param_3 + (ulong)((int)uVar35 + 2));
            uVar25 = uVar25 + *param_6;
            *param_5 = uVar25;
            pcVar36 = (char *)(param_3 + (uVar25 >> 0x20));
            cVar22 = pcVar36[-1];
            iVar24 = (int)(uVar25 >> 0x20);
            cVar17 = *(char *)(param_3 + (ulong)(iVar24 + 1));
            cVar13 = *pcVar36;
            cVar18 = *(char *)(param_3 + (ulong)(iVar24 + 2));
            uVar35 = *param_6 + uVar25;
            *param_5 = uVar35;
            pcVar36 = (char *)(param_3 + (uVar35 >> 0x20));
            cVar23 = pcVar36[-1];
            iVar24 = (int)(uVar35 >> 0x20);
            cVar14 = *pcVar36;
            cVar19 = *(char *)(param_3 + (ulong)(iVar24 + 1));
            cVar20 = *(char *)(param_3 + (ulong)(iVar24 + 2));
            auVar46._4_4_ = (int)uVar25;
            auVar46._0_4_ = (int)uVar28;
            auVar46._8_4_ = (int)uVar35;
            uVar35 = *param_6 + uVar35;
            *param_5 = uVar35;
            auVar46._12_4_ = (int)uVar35;
            pcVar36 = (char *)(param_3 + (uVar35 >> 0x20));
            auVar83 = NEON_ucvtf(auVar46,4);
            fVar40 = auVar83._0_4_ * 2.3283064e-10;
            fVar41 = auVar83._4_4_ * 2.3283064e-10;
            fVar42 = auVar83._8_4_ * 2.3283064e-10;
            fVar43 = auVar83._12_4_ * 2.3283064e-10;
            auVar59._0_4_ = (int)(short)cVar21;
            auVar59._4_4_ = (int)(short)cVar22;
            auVar59._8_4_ = (int)(short)cVar23;
            auVar59._12_4_ = (int)(short)pcVar36[-1];
            iVar24 = (int)(uVar35 >> 0x20);
            auVar83 = NEON_scvtf(auVar59,4);
            auVar70._0_4_ = (int)(short)cVar12;
            auVar70._4_4_ = (int)(short)cVar13;
            auVar70._8_4_ = (int)(short)cVar14;
            auVar70._12_4_ = (int)(short)*pcVar36;
            auVar62 = NEON_scvtf(auVar70,4);
            auVar80._0_4_ = (int)(short)cVar15;
            auVar80._4_4_ = (int)(short)cVar17;
            auVar80._8_4_ = (int)(short)cVar19;
            auVar80._12_4_ = (int)(short)*(char *)(param_3 + (ulong)(iVar24 + 1));
            fVar45 = auVar83._0_4_ * 0.0078125;
            fVar54 = auVar83._4_4_ * 0.0078125;
            fVar55 = auVar83._8_4_ * 0.0078125;
            fVar56 = auVar83._12_4_ * 0.0078125;
            fVar58 = auVar62._0_4_ * 0.0078125;
            fVar65 = auVar62._4_4_ * 0.0078125;
            fVar66 = auVar62._8_4_ * 0.0078125;
            fVar67 = auVar62._12_4_ * 0.0078125;
            auVar83 = NEON_scvtf(auVar80,4);
            fVar69 = auVar83._0_4_ * 0.0078125;
            fVar75 = auVar83._4_4_ * 0.0078125;
            fVar76 = auVar83._8_4_ * 0.0078125;
            fVar77 = auVar83._12_4_ * 0.0078125;
            auVar89._0_4_ = (int)(short)cVar16;
            auVar89._4_4_ = (int)(short)cVar18;
            auVar89._8_4_ = (int)(short)cVar20;
            auVar89._12_4_ = (int)(short)*(char *)(param_3 + (ulong)(iVar24 + 2));
            auVar83 = NEON_scvtf(auVar89,4);
            fVar79 = auVar83._0_4_ * 0.0078125;
            fVar86 = auVar83._4_4_ * 0.0078125;
            fVar87 = auVar83._8_4_ * 0.0078125;
            fVar88 = auVar83._12_4_ * 0.0078125;
            auVar47._0_8_ =
                 CONCAT44(fVar65 + fVar41 * ((fVar75 - fVar54) * 0.5 +
                                            fVar41 * (((fVar54 + fVar75 + fVar75) -
                                                      (fVar65 * auVar39._4_4_ + fVar86) * 0.5) +
                                                     fVar41 * (fVar86 + ((fVar65 - fVar75) *
                                                                         auVar38._4_4_ - fVar54)) *
                                                              0.5)),
                          fVar58 + fVar40 * ((fVar69 - fVar45) * 0.5 +
                                            fVar40 * (((fVar45 + fVar69 + fVar69) -
                                                      (fVar58 * auVar39._0_4_ + fVar79) * 0.5) +
                                                     fVar40 * (fVar79 + ((fVar58 - fVar69) *
                                                                         auVar38._0_4_ - fVar45)) *
                                                              0.5)));
            auVar47._8_4_ =
                 fVar66 + fVar42 * ((fVar76 - fVar55) * 0.5 +
                                   fVar42 * (((fVar55 + fVar76 + fVar76) -
                                             (fVar66 * auVar39._8_4_ + fVar87) * 0.5) +
                                            fVar42 * (fVar87 + ((fVar66 - fVar76) * auVar38._8_4_ -
                                                               fVar55)) * 0.5));
            auVar47._12_4_ =
                 fVar67 + fVar43 * ((fVar77 - fVar56) * 0.5 +
                                   fVar43 * (((fVar56 + fVar77 + fVar77) -
                                             (fVar67 * auVar39._12_4_ + fVar88) * 0.5) +
                                            fVar43 * (fVar88 + ((fVar67 - fVar77) * auVar38._12_4_ -
                                                               fVar56)) * 0.5));
            uVar28 = *param_6 + uVar35;
            *param_5 = uVar28;
            *(undefined8 *)pfVar27 = auVar47._0_8_;
            auVar83 = NEON_ext(auVar47,auVar47,8,1);
            *(long *)(pfVar27 + 2) = auVar83._0_8_;
            iVar30 = iVar30 + -1;
            uVar35 = uVar28 >> 0x20;
            pfVar27 = pfVar27 + 4;
            uVar25 = uVar28;
          } while (iVar30 != 0);
          param_1 = param_1 + (ulong)uVar26 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar28 = (ulong)*(uint *)((long)param_5 + 4);
          iVar30 = -(param_2 & 3);
          uVar25 = *param_5;
          uVar35 = (ulong)(uint)*param_5;
          do {
            fVar40 = (float)(uVar35 & 0xffffffff) * 2.3283064e-10;
            fVar41 = (float)(int)(short)((char *)(param_3 + uVar28))[-1] * 0.0078125;
            fVar42 = (float)(int)(short)*(char *)(param_3 + uVar28) * 0.0078125;
            fVar43 = (float)(int)(short)*(char *)(param_3 + (ulong)((int)uVar28 + 1)) * 0.0078125;
            fVar45 = (float)(int)(short)*(char *)(param_3 + (ulong)((int)uVar28 + 2)) * 0.0078125;
            *param_1 = fVar42 + fVar40 * ((fVar43 - fVar41) * 0.5 +
                                         fVar40 * (((fVar41 + fVar43 + fVar43) -
                                                   (fVar42 * 5.0 + fVar45) * 0.5) +
                                                  fVar40 * (fVar45 + ((fVar42 - fVar43) * 3.0 -
                                                                     fVar41)) * 0.5));
            uVar25 = uVar25 + *param_6;
            *param_5 = uVar25;
            uVar28 = uVar25 >> 0x20;
            iVar30 = iVar30 + 1;
            param_1 = param_1 + 1;
            uVar35 = uVar25;
          } while (iVar30 != 0);
        }
      }
      else if (param_2 != 0) {
        uVar25 = (ulong)(uint)*param_5;
        do {
          if (0 < param_7) {
            fVar40 = (float)(uVar25 & 0xffffffff) * 2.3283064e-10;
            uVar8 = *(uint *)((long)param_5 + 4);
            uVar26 = param_7 * (uVar8 + 2);
            uVar29 = param_7 * (uVar8 + 1);
            uVar33 = param_7 * uVar8;
            pcVar36 = (char *)(param_3 + (long)param_7 * ((ulong)uVar8 - 1));
            pfVar27 = param_1;
            iVar30 = param_7;
            do {
              fVar42 = (float)(int)*pcVar36 * 0.0078125;
              fVar41 = (float)(int)(short)*(char *)(param_3 + (ulong)uVar33) * 0.0078125;
              fVar43 = (float)(int)(short)*(char *)(param_3 + (ulong)uVar29) * 0.0078125;
              fVar45 = (float)(int)(short)*(char *)(param_3 + (ulong)uVar26) * 0.0078125;
              iVar30 = iVar30 + -1;
              uVar26 = uVar26 + 1;
              uVar29 = uVar29 + 1;
              uVar33 = uVar33 + 1;
              *pfVar27 = fVar41 + fVar40 * ((fVar43 - fVar42) * 0.5 +
                                           fVar40 * (((fVar42 + fVar43 + fVar43) -
                                                     (fVar41 * 5.0 + fVar45) * 0.5) +
                                                    fVar40 * (fVar45 + ((fVar41 - fVar43) * 3.0 -
                                                                       fVar42)) * 0.5));
              pcVar36 = pcVar36 + 1;
              pfVar27 = pfVar27 + 1;
            } while (iVar30 != 0);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          uVar25 = *param_5 + *param_6;
          *param_5 = uVar25;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 2:
      if (param_7 - 1U == 0) {
        if (iVar30 != 0) {
          uVar26 = iVar30 - 1;
          uVar28 = (ulong)(uint)*param_5;
          uVar35 = (ulong)*(uint *)((long)param_5 + 4);
          auVar38 = NEON_fmov(0x40400000,4);
          auVar39 = NEON_fmov(0x40a00000,4);
          pfVar27 = param_1;
          uVar25 = *param_5;
          do {
            psVar1 = (short *)(param_3 + uVar35 * 2);
            uVar25 = uVar25 + *param_6;
            sVar68 = *psVar1;
            sVar57 = *(short *)(param_3 + (ulong)((int)uVar35 + 1) * 2);
            sVar44 = *(short *)(param_3 + (ulong)((int)uVar35 + 2) * 2);
            sVar78 = psVar1[-1];
            *param_5 = uVar25;
            psVar1 = (short *)(param_3 + (uVar25 >> 0x20) * 2);
            iVar24 = (int)(uVar25 >> 0x20);
            uVar35 = *param_6 + uVar25;
            sVar84 = psVar1[-1];
            sVar73 = *psVar1;
            sVar63 = *(short *)(param_3 + (ulong)(iVar24 + 1) * 2);
            sVar52 = *(short *)(param_3 + (ulong)(iVar24 + 2) * 2);
            *param_5 = uVar35;
            psVar1 = (short *)(param_3 + (uVar35 >> 0x20) * 2);
            iVar24 = (int)(uVar35 >> 0x20);
            uVar6 = *param_6 + uVar35;
            sVar85 = psVar1[-1];
            sVar74 = *psVar1;
            sVar64 = *(short *)(param_3 + (ulong)(iVar24 + 1) * 2);
            sVar53 = *(short *)(param_3 + (ulong)(iVar24 + 2) * 2);
            auVar90._4_4_ = (int)uVar25;
            auVar90._0_4_ = (int)uVar28;
            auVar90._8_4_ = (int)uVar35;
            *param_5 = uVar6;
            auVar90._12_4_ = (int)uVar6;
            auVar83 = NEON_ucvtf(auVar90,4);
            psVar1 = (short *)(param_3 + (uVar6 >> 0x20) * 2);
            fVar79 = auVar83._0_4_ * 2.3283064e-10;
            fVar86 = auVar83._4_4_ * 2.3283064e-10;
            fVar87 = auVar83._8_4_ * 2.3283064e-10;
            fVar88 = auVar83._12_4_ * 2.3283064e-10;
            auVar81._0_4_ = (int)sVar78;
            auVar81._4_4_ = (int)sVar84;
            auVar81._8_4_ = (int)sVar85;
            auVar81._12_4_ = (int)psVar1[-1];
            auVar62 = NEON_scvtf(auVar81,4);
            auVar71._0_4_ = (int)sVar68;
            auVar71._4_4_ = (int)sVar73;
            auVar71._8_4_ = (int)sVar74;
            auVar71._12_4_ = (int)*psVar1;
            auVar83 = NEON_scvtf(auVar71,4);
            fVar58 = auVar83._0_4_ * 3.0517578e-05;
            fVar65 = auVar83._4_4_ * 3.0517578e-05;
            fVar66 = auVar83._8_4_ * 3.0517578e-05;
            fVar67 = auVar83._12_4_ * 3.0517578e-05;
            iVar24 = (int)(uVar6 >> 0x20);
            fVar69 = auVar62._0_4_ * 3.0517578e-05;
            fVar75 = auVar62._4_4_ * 3.0517578e-05;
            fVar76 = auVar62._8_4_ * 3.0517578e-05;
            fVar77 = auVar62._12_4_ * 3.0517578e-05;
            auVar60._0_4_ = (int)sVar57;
            auVar60._4_4_ = (int)sVar63;
            auVar60._8_4_ = (int)sVar64;
            auVar60._12_4_ = (int)*(short *)(param_3 + (ulong)(iVar24 + 1) * 2);
            auVar83 = NEON_scvtf(auVar60,4);
            fVar45 = auVar83._0_4_ * 3.0517578e-05;
            fVar54 = auVar83._4_4_ * 3.0517578e-05;
            fVar55 = auVar83._8_4_ * 3.0517578e-05;
            fVar56 = auVar83._12_4_ * 3.0517578e-05;
            auVar48._0_4_ = (int)sVar44;
            auVar48._4_4_ = (int)sVar52;
            auVar48._8_4_ = (int)sVar53;
            auVar48._12_4_ = (int)*(short *)(param_3 + (ulong)(iVar24 + 2) * 2);
            auVar83 = NEON_scvtf(auVar48,4);
            fVar40 = auVar83._0_4_ * 3.0517578e-05;
            fVar41 = auVar83._4_4_ * 3.0517578e-05;
            fVar42 = auVar83._8_4_ * 3.0517578e-05;
            fVar43 = auVar83._12_4_ * 3.0517578e-05;
            auVar49._0_8_ =
                 CONCAT44(fVar65 + fVar86 * ((fVar54 - fVar75) * 0.5 +
                                            fVar86 * (((fVar75 + fVar54 + fVar54) -
                                                      (fVar65 * auVar39._4_4_ + fVar41) * 0.5) +
                                                     fVar86 * (fVar41 + ((fVar65 - fVar54) *
                                                                         auVar38._4_4_ - fVar75)) *
                                                              0.5)),
                          fVar58 + fVar79 * ((fVar45 - fVar69) * 0.5 +
                                            fVar79 * (((fVar69 + fVar45 + fVar45) -
                                                      (fVar58 * auVar39._0_4_ + fVar40) * 0.5) +
                                                     fVar79 * (fVar40 + ((fVar58 - fVar45) *
                                                                         auVar38._0_4_ - fVar69)) *
                                                              0.5)));
            auVar49._8_4_ =
                 fVar66 + fVar87 * ((fVar55 - fVar76) * 0.5 +
                                   fVar87 * (((fVar76 + fVar55 + fVar55) -
                                             (fVar66 * auVar39._8_4_ + fVar42) * 0.5) +
                                            fVar87 * (fVar42 + ((fVar66 - fVar55) * auVar38._8_4_ -
                                                               fVar76)) * 0.5));
            auVar49._12_4_ =
                 fVar67 + fVar88 * ((fVar56 - fVar77) * 0.5 +
                                   fVar88 * (((fVar77 + fVar56 + fVar56) -
                                             (fVar67 * auVar39._12_4_ + fVar43) * 0.5) +
                                            fVar88 * (fVar43 + ((fVar67 - fVar56) * auVar38._12_4_ -
                                                               fVar77)) * 0.5));
            uVar28 = *param_6 + uVar6;
            *param_5 = uVar28;
            *(undefined8 *)pfVar27 = auVar49._0_8_;
            auVar83 = NEON_ext(auVar49,auVar49,8,1);
            *(long *)(pfVar27 + 2) = auVar83._0_8_;
            iVar30 = iVar30 + -1;
            uVar35 = uVar28 >> 0x20;
            pfVar27 = pfVar27 + 4;
            uVar25 = uVar28;
          } while (iVar30 != 0);
          param_1 = param_1 + (ulong)uVar26 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar28 = (ulong)*(uint *)((long)param_5 + 4);
          iVar30 = -(param_2 & 3);
          uVar25 = *param_5;
          uVar35 = (ulong)(uint)*param_5;
          do {
            fVar40 = (float)(uVar35 & 0xffffffff) * 2.3283064e-10;
            psVar1 = (short *)(param_3 + uVar28 * 2);
            fVar41 = (float)(int)psVar1[-1] * 3.0517578e-05;
            fVar42 = (float)(int)*psVar1 * 3.0517578e-05;
            fVar43 = (float)(int)*(short *)(param_3 + (ulong)((int)uVar28 + 1) * 2) * 3.0517578e-05;
            fVar45 = (float)(int)*(short *)(param_3 + (ulong)((int)uVar28 + 2) * 2) * 3.0517578e-05;
            *param_1 = fVar42 + fVar40 * ((fVar43 - fVar41) * 0.5 +
                                         fVar40 * (((fVar41 + fVar43 + fVar43) -
                                                   (fVar42 * 5.0 + fVar45) * 0.5) +
                                                  fVar40 * (fVar45 + ((fVar42 - fVar43) * 3.0 -
                                                                     fVar41)) * 0.5));
            uVar25 = uVar25 + *param_6;
            *param_5 = uVar25;
            uVar28 = uVar25 >> 0x20;
            iVar30 = iVar30 + 1;
            param_1 = param_1 + 1;
            uVar35 = uVar25;
          } while (iVar30 != 0);
        }
      }
      else if (param_2 != 0) {
        uVar25 = (ulong)(uint)*param_5;
        do {
          if (0 < param_7) {
            lVar32 = 0;
            fVar40 = (float)(uVar25 & 0xffffffff) * 2.3283064e-10;
            uVar8 = *(uint *)((long)param_5 + 4);
            uVar26 = param_7 * (uVar8 + 2);
            uVar29 = param_7 * (uVar8 + 1);
            uVar33 = param_7 * uVar8;
            pfVar27 = param_1;
            iVar30 = param_7;
            do {
              fVar41 = (float)(int)*(short *)(param_3 + (ulong)uVar33 * 2) * 3.0517578e-05;
              fVar42 = (float)(int)*(short *)(param_3 +
                                             (((ulong)uVar8 - 1) * (long)param_7 + (lVar32 >> 0x20))
                                             * 2) * 3.0517578e-05;
              fVar43 = (float)(int)*(short *)(param_3 + (ulong)uVar29 * 2) * 3.0517578e-05;
              fVar45 = (float)(int)*(short *)(param_3 + (ulong)uVar26 * 2) * 3.0517578e-05;
              lVar32 = lVar32 + 0x100000000;
              iVar30 = iVar30 + -1;
              uVar26 = uVar26 + 1;
              uVar29 = uVar29 + 1;
              uVar33 = uVar33 + 1;
              *pfVar27 = fVar41 + fVar40 * ((fVar43 - fVar42) * 0.5 +
                                           fVar40 * (((fVar42 + fVar43 + fVar43) -
                                                     (fVar41 * 5.0 + fVar45) * 0.5) +
                                                    fVar40 * (fVar45 + ((fVar41 - fVar43) * 3.0 -
                                                                       fVar42)) * 0.5));
              pfVar27 = pfVar27 + 1;
            } while (iVar30 != 0);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          uVar25 = *param_5 + *param_6;
          *param_5 = uVar25;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 3:
      if (param_7 - 1U == 0) {
        if (param_2 != 0) {
          uVar25 = (ulong)(uint)*param_5;
          uVar28 = (ulong)*(uint *)((long)param_5 + 4);
          do {
            fVar40 = (float)(uVar25 & 0xffffffff) * 2.3283064e-10;
            pbVar5 = (byte *)(param_3 + uVar28 * 3);
            fVar41 = (float)((int)((uint)pbVar5[-3] << 8 | (uint)pbVar5[-2] << 0x10 |
                                  (uint)pbVar5[-1] << 0x18) >> 8) * 1.1920929e-07;
            fVar42 = (float)((int)((uint)*pbVar5 << 8 | (uint)pbVar5[1] << 0x10 |
                                  (uint)pbVar5[2] << 0x18) >> 8) * 1.1920929e-07;
            pbVar5 = (byte *)(param_3 + (ulong)((int)uVar28 + 1) * 3);
            fVar43 = (float)((int)((uint)*pbVar5 << 8 | (uint)pbVar5[1] << 0x10 |
                                  (uint)pbVar5[2] << 0x18) >> 8) * 1.1920929e-07;
            pbVar5 = (byte *)(param_3 + (ulong)((int)uVar28 + 2) * 3);
            fVar45 = (float)((int)((uint)*pbVar5 << 8 | (uint)pbVar5[1] << 0x10 |
                                  (uint)pbVar5[2] << 0x18) >> 8) * 1.1920929e-07;
            *param_1 = fVar42 + fVar40 * ((fVar43 - fVar41) * 0.5 +
                                         fVar40 * (fVar40 * (((fVar42 - fVar43) * 3.0 - fVar41) +
                                                            fVar45) * 0.5 +
                                                  ((fVar41 + fVar43 + fVar43) -
                                                  (fVar42 * 5.0 + fVar45) * 0.5)));
            uVar25 = *param_5 + *param_6;
            *param_5 = uVar25;
            param_2 = param_2 - 1;
            uVar28 = uVar25 >> 0x20;
            param_1 = param_1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (param_2 != 0) {
        uVar25 = (ulong)(uint)*param_5;
        lVar32 = (long)param_7 + (long)param_7 * 2;
        do {
          if (0 < param_7) {
            lVar31 = 0;
            fVar40 = (float)(uVar25 & 0xffffffff) * 2.3283064e-10;
            lVar34 = param_3;
            do {
              uVar26 = *(uint *)((long)param_5 + 4);
              iVar30 = (int)lVar31;
              lVar37 = lVar34 + lVar32 * ((ulong)uVar26 - 1);
              fVar41 = (float)((int)((uint)*(byte *)(lVar34 + lVar32 * ((ulong)uVar26 - 1)) << 8 |
                                     (uint)*(byte *)(lVar37 + 1) << 0x10 |
                                    (uint)*(byte *)(lVar37 + 2) << 0x18) >> 8) * 1.1920929e-07;
              pbVar5 = (byte *)(param_3 + (ulong)(iVar30 + param_7 * uVar26) * 3);
              fVar42 = (float)((int)((uint)*pbVar5 << 8 | (uint)pbVar5[1] << 0x10 |
                                    (uint)pbVar5[2] << 0x18) >> 8) * 1.1920929e-07;
              pbVar5 = (byte *)(param_3 + (ulong)(iVar30 + param_7 * (uVar26 + 1)) * 3);
              fVar43 = (float)((int)((uint)*pbVar5 << 8 | (uint)pbVar5[1] << 0x10 |
                                    (uint)pbVar5[2] << 0x18) >> 8) * 1.1920929e-07;
              pbVar5 = (byte *)(param_3 + (ulong)(iVar30 + param_7 * (uVar26 + 2)) * 3);
              fVar45 = (float)((int)((uint)*pbVar5 << 8 | (uint)pbVar5[1] << 0x10 |
                                    (uint)pbVar5[2] << 0x18) >> 8) * 1.1920929e-07;
              param_1[lVar31] =
                   fVar42 + fVar40 * ((fVar43 - fVar41) * 0.5 +
                                     fVar40 * (fVar40 * (((fVar42 - fVar43) * 3.0 - fVar41) + fVar45
                                                        ) * 0.5 +
                                              ((fVar41 + fVar43 + fVar43) -
                                              (fVar42 * 5.0 + fVar45) * 0.5)));
              lVar31 = lVar31 + 1;
              lVar34 = lVar34 + 3;
            } while (param_7 != (int)lVar31);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          uVar25 = *param_5 + *param_6;
          *param_5 = uVar25;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 4:
      if (param_7 - 1U == 0) {
        if (iVar30 != 0) {
          uVar26 = iVar30 - 1;
          uVar28 = (ulong)(uint)*param_5;
          uVar35 = (ulong)*(uint *)((long)param_5 + 4);
          auVar38 = NEON_fmov(0x40400000,4);
          auVar39 = NEON_fmov(0x40a00000,4);
          pfVar27 = param_1;
          uVar25 = *param_5;
          do {
            puVar2 = (undefined4 *)(param_3 + uVar35 * 4);
            uVar10 = *(undefined4 *)(param_3 + (ulong)((int)uVar35 + 1) * 4);
            uVar9 = puVar2[-1];
            uVar11 = *(undefined4 *)(param_3 + (ulong)((int)uVar35 + 2) * 4);
            uVar25 = uVar25 + *param_6;
            uVar7 = *puVar2;
            *param_5 = uVar25;
            puVar2 = (undefined4 *)(param_3 + (uVar25 >> 0x20) * 4);
            iVar24 = (int)(uVar25 >> 0x20);
            auVar50._4_4_ = puVar2[-1];
            auVar50._0_4_ = uVar9;
            auVar61._4_4_ = *puVar2;
            auVar61._0_4_ = uVar7;
            auVar72._4_4_ = *(undefined4 *)(param_3 + (ulong)(iVar24 + 1) * 4);
            auVar72._0_4_ = uVar10;
            uVar35 = *param_6 + uVar25;
            auVar82._4_4_ = *(undefined4 *)(param_3 + (ulong)(iVar24 + 2) * 4);
            auVar82._0_4_ = uVar11;
            *param_5 = uVar35;
            puVar2 = (undefined4 *)(param_3 + (uVar35 >> 0x20) * 4);
            iVar24 = (int)(uVar35 >> 0x20);
            uVar6 = *param_6 + uVar35;
            auVar50._8_4_ = puVar2[-1];
            auVar61._8_4_ = *puVar2;
            auVar72._8_4_ = *(undefined4 *)(param_3 + (ulong)(iVar24 + 1) * 4);
            auVar82._8_4_ = *(undefined4 *)(param_3 + (ulong)(iVar24 + 2) * 4);
            *param_5 = uVar6;
            auVar91._4_4_ = (int)uVar25;
            auVar91._0_4_ = (int)uVar28;
            auVar91._8_4_ = (int)uVar35;
            auVar91._12_4_ = (int)uVar6;
            puVar2 = (undefined4 *)(param_3 + (uVar6 >> 0x20) * 4);
            auVar50._12_4_ = puVar2[-1];
            auVar83 = NEON_ucvtf(auVar91,4);
            fVar79 = auVar83._0_4_ * 2.3283064e-10;
            fVar86 = auVar83._4_4_ * 2.3283064e-10;
            fVar87 = auVar83._8_4_ * 2.3283064e-10;
            fVar88 = auVar83._12_4_ * 2.3283064e-10;
            auVar83 = NEON_scvtf(auVar50,4);
            auVar61._12_4_ = *puVar2;
            auVar62 = NEON_scvtf(auVar61,4);
            fVar45 = auVar62._0_4_ * 4.656613e-10;
            fVar54 = auVar62._4_4_ * 4.656613e-10;
            fVar55 = auVar62._8_4_ * 4.656613e-10;
            fVar56 = auVar62._12_4_ * 4.656613e-10;
            iVar24 = (int)(uVar6 >> 0x20);
            auVar72._12_4_ = *(undefined4 *)(param_3 + (ulong)(iVar24 + 1) * 4);
            auVar62 = NEON_scvtf(auVar72,4);
            fVar40 = auVar83._0_4_ * 4.656613e-10;
            fVar41 = auVar83._4_4_ * 4.656613e-10;
            fVar42 = auVar83._8_4_ * 4.656613e-10;
            fVar43 = auVar83._12_4_ * 4.656613e-10;
            fVar58 = auVar62._0_4_ * 4.656613e-10;
            fVar65 = auVar62._4_4_ * 4.656613e-10;
            fVar66 = auVar62._8_4_ * 4.656613e-10;
            fVar67 = auVar62._12_4_ * 4.656613e-10;
            auVar82._12_4_ = *(undefined4 *)(param_3 + (ulong)(iVar24 + 2) * 4);
            auVar83 = NEON_scvtf(auVar82,4);
            fVar69 = auVar83._0_4_ * 4.656613e-10;
            fVar75 = auVar83._4_4_ * 4.656613e-10;
            fVar76 = auVar83._8_4_ * 4.656613e-10;
            fVar77 = auVar83._12_4_ * 4.656613e-10;
            auVar51._0_8_ =
                 CONCAT44(fVar54 + fVar86 * ((fVar65 - fVar41) * 0.5 +
                                            fVar86 * (((fVar41 + fVar65 + fVar65) -
                                                      (fVar54 * auVar39._4_4_ + fVar75) * 0.5) +
                                                     fVar86 * (fVar75 + ((fVar54 - fVar65) *
                                                                         auVar38._4_4_ - fVar41)) *
                                                              0.5)),
                          fVar45 + fVar79 * ((fVar58 - fVar40) * 0.5 +
                                            fVar79 * (((fVar40 + fVar58 + fVar58) -
                                                      (fVar45 * auVar39._0_4_ + fVar69) * 0.5) +
                                                     fVar79 * (fVar69 + ((fVar45 - fVar58) *
                                                                         auVar38._0_4_ - fVar40)) *
                                                              0.5)));
            auVar51._8_4_ =
                 fVar55 + fVar87 * ((fVar66 - fVar42) * 0.5 +
                                   fVar87 * (((fVar42 + fVar66 + fVar66) -
                                             (fVar55 * auVar39._8_4_ + fVar76) * 0.5) +
                                            fVar87 * (fVar76 + ((fVar55 - fVar66) * auVar38._8_4_ -
                                                               fVar42)) * 0.5));
            auVar51._12_4_ =
                 fVar56 + fVar88 * ((fVar67 - fVar43) * 0.5 +
                                   fVar88 * (((fVar43 + fVar67 + fVar67) -
                                             (fVar56 * auVar39._12_4_ + fVar77) * 0.5) +
                                            fVar88 * (fVar77 + ((fVar56 - fVar67) * auVar38._12_4_ -
                                                               fVar43)) * 0.5));
            uVar28 = *param_6 + uVar6;
            *param_5 = uVar28;
            *(undefined8 *)pfVar27 = auVar51._0_8_;
            auVar83 = NEON_ext(auVar51,auVar51,8,1);
            *(long *)(pfVar27 + 2) = auVar83._0_8_;
            iVar30 = iVar30 + -1;
            uVar35 = uVar28 >> 0x20;
            pfVar27 = pfVar27 + 4;
            uVar25 = uVar28;
          } while (iVar30 != 0);
          param_1 = param_1 + (ulong)uVar26 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar28 = (ulong)*(uint *)((long)param_5 + 4);
          iVar30 = -(param_2 & 3);
          uVar25 = *param_5;
          uVar35 = (ulong)(uint)*param_5;
          do {
            fVar40 = (float)(uVar35 & 0xffffffff) * 2.3283064e-10;
            piVar3 = (int *)(param_3 + uVar28 * 4);
            fVar41 = (float)piVar3[-1] * 4.656613e-10;
            fVar42 = (float)*piVar3 * 4.656613e-10;
            fVar43 = (float)*(int *)(param_3 + (ulong)((int)uVar28 + 1) * 4) * 4.656613e-10;
            fVar45 = (float)*(int *)(param_3 + (ulong)((int)uVar28 + 2) * 4) * 4.656613e-10;
            *param_1 = fVar42 + fVar40 * ((fVar43 - fVar41) * 0.5 +
                                         fVar40 * (((fVar41 + fVar43 + fVar43) -
                                                   (fVar42 * 5.0 + fVar45) * 0.5) +
                                                  fVar40 * (fVar45 + ((fVar42 - fVar43) * 3.0 -
                                                                     fVar41)) * 0.5));
            uVar25 = uVar25 + *param_6;
            *param_5 = uVar25;
            uVar28 = uVar25 >> 0x20;
            iVar30 = iVar30 + 1;
            param_1 = param_1 + 1;
            uVar35 = uVar25;
          } while (iVar30 != 0);
        }
      }
      else if (param_2 != 0) {
        uVar25 = (ulong)(uint)*param_5;
        do {
          if (0 < param_7) {
            lVar32 = 0;
            fVar40 = (float)(uVar25 & 0xffffffff) * 2.3283064e-10;
            uVar8 = *(uint *)((long)param_5 + 4);
            uVar26 = param_7 * (uVar8 + 2);
            uVar29 = param_7 * (uVar8 + 1);
            uVar33 = param_7 * uVar8;
            pfVar27 = param_1;
            iVar30 = param_7;
            do {
              fVar41 = (float)*(int *)(param_3 + (ulong)uVar33 * 4) * 4.656613e-10;
              fVar43 = (float)*(int *)(param_3 + (ulong)uVar29 * 4) * 4.656613e-10;
              fVar42 = (float)*(int *)(param_3 +
                                      (((ulong)uVar8 - 1) * (long)param_7 + (lVar32 >> 0x20)) * 4) *
                       4.656613e-10;
              fVar45 = (float)*(int *)(param_3 + (ulong)uVar26 * 4) * 4.656613e-10;
              lVar32 = lVar32 + 0x100000000;
              iVar30 = iVar30 + -1;
              uVar26 = uVar26 + 1;
              uVar29 = uVar29 + 1;
              uVar33 = uVar33 + 1;
              *pfVar27 = fVar41 + fVar40 * ((fVar43 - fVar42) * 0.5 +
                                           fVar40 * (((fVar42 + fVar43 + fVar43) -
                                                     (fVar41 * 5.0 + fVar45) * 0.5) +
                                                    fVar40 * (fVar45 + ((fVar41 - fVar43) * 3.0 -
                                                                       fVar42)) * 0.5));
              pfVar27 = pfVar27 + 1;
            } while (iVar30 != 0);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          uVar25 = *param_5 + *param_6;
          *param_5 = uVar25;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 5:
      if (param_7 - 1U == 0) {
        if (iVar30 != 0) {
          uVar26 = iVar30 - 1;
          uVar28 = (ulong)(uint)*param_5;
          uVar35 = (ulong)*(uint *)((long)param_5 + 4);
          auVar38 = NEON_fmov(0x40400000,4);
          auVar39 = NEON_fmov(0x40a00000,4);
          pfVar27 = param_1;
          uVar25 = *param_5;
          do {
            pfVar4 = (float *)(param_3 + uVar35 * 4);
            fVar45 = *(float *)(param_3 + (ulong)((int)uVar35 + 1) * 4);
            fVar58 = pfVar4[-1];
            fVar69 = *(float *)(param_3 + (ulong)((int)uVar35 + 2) * 4);
            uVar25 = uVar25 + *param_6;
            fVar40 = *pfVar4;
            *param_5 = uVar25;
            pfVar4 = (float *)(param_3 + (uVar25 >> 0x20) * 4);
            iVar24 = (int)(uVar25 >> 0x20);
            uVar35 = *param_6 + uVar25;
            fVar41 = *pfVar4;
            fVar54 = *(float *)(param_3 + (ulong)(iVar24 + 1) * 4);
            fVar65 = pfVar4[-1];
            fVar75 = *(float *)(param_3 + (ulong)(iVar24 + 2) * 4);
            *param_5 = uVar35;
            pfVar4 = (float *)(param_3 + (uVar35 >> 0x20) * 4);
            iVar24 = (int)(uVar35 >> 0x20);
            uVar6 = *param_6 + uVar35;
            fVar42 = *pfVar4;
            fVar55 = *(float *)(param_3 + (ulong)(iVar24 + 1) * 4);
            fVar66 = pfVar4[-1];
            fVar76 = *(float *)(param_3 + (ulong)(iVar24 + 2) * 4);
            auVar62._4_4_ = (int)uVar25;
            auVar62._0_4_ = (int)uVar28;
            auVar62._8_4_ = (int)uVar35;
            *param_5 = uVar6;
            auVar62._12_4_ = (int)uVar6;
            pfVar4 = (float *)(param_3 + (uVar6 >> 0x20) * 4);
            auVar83 = NEON_ucvtf(auVar62,4);
            iVar24 = (int)(uVar6 >> 0x20);
            fVar43 = *pfVar4;
            fVar79 = auVar83._0_4_ * 2.3283064e-10;
            fVar86 = auVar83._4_4_ * 2.3283064e-10;
            fVar87 = auVar83._8_4_ * 2.3283064e-10;
            fVar88 = auVar83._12_4_ * 2.3283064e-10;
            fVar56 = *(float *)(param_3 + (ulong)(iVar24 + 1) * 4);
            fVar67 = pfVar4[-1];
            fVar77 = *(float *)(param_3 + (ulong)(iVar24 + 2) * 4);
            auVar83._0_8_ =
                 CONCAT44(fVar41 + fVar86 * ((fVar54 - fVar65) * 0.5 +
                                            fVar86 * (((fVar65 + fVar54 + fVar54) -
                                                      (fVar41 * auVar39._4_4_ + fVar75) * 0.5) +
                                                     fVar86 * (fVar75 + ((fVar41 - fVar54) *
                                                                         auVar38._4_4_ - fVar65)) *
                                                              0.5)),
                          fVar40 + fVar79 * ((fVar45 - fVar58) * 0.5 +
                                            fVar79 * (((fVar58 + fVar45 + fVar45) -
                                                      (fVar40 * auVar39._0_4_ + fVar69) * 0.5) +
                                                     fVar79 * (fVar69 + ((fVar40 - fVar45) *
                                                                         auVar38._0_4_ - fVar58)) *
                                                              0.5)));
            auVar83._8_4_ =
                 fVar42 + fVar87 * ((fVar55 - fVar66) * 0.5 +
                                   fVar87 * (((fVar66 + fVar55 + fVar55) -
                                             (fVar42 * auVar39._8_4_ + fVar76) * 0.5) +
                                            fVar87 * (fVar76 + ((fVar42 - fVar55) * auVar38._8_4_ -
                                                               fVar66)) * 0.5));
            auVar83._12_4_ =
                 fVar43 + fVar88 * ((fVar56 - fVar67) * 0.5 +
                                   fVar88 * (((fVar67 + fVar56 + fVar56) -
                                             (fVar43 * auVar39._12_4_ + fVar77) * 0.5) +
                                            fVar88 * (fVar77 + ((fVar43 - fVar56) * auVar38._12_4_ -
                                                               fVar67)) * 0.5));
            uVar28 = *param_6 + uVar6;
            *param_5 = uVar28;
            *(undefined8 *)pfVar27 = auVar83._0_8_;
            auVar83 = NEON_ext(auVar83,auVar83,8,1);
            *(long *)(pfVar27 + 2) = auVar83._0_8_;
            iVar30 = iVar30 + -1;
            uVar35 = uVar28 >> 0x20;
            pfVar27 = pfVar27 + 4;
            uVar25 = uVar28;
          } while (iVar30 != 0);
          param_1 = param_1 + (ulong)uVar26 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar28 = (ulong)*(uint *)((long)param_5 + 4);
          uVar25 = *param_5;
          iVar30 = -(param_2 & 3);
          uVar35 = (ulong)(uint)*param_5;
          do {
            fVar40 = (float)(uVar35 & 0xffffffff) * 2.3283064e-10;
            pfVar27 = (float *)(param_3 + uVar28 * 4);
            fVar41 = pfVar27[-1];
            fVar42 = *pfVar27;
            fVar43 = *(float *)(param_3 + (ulong)((int)uVar28 + 1) * 4);
            fVar45 = *(float *)(param_3 + (ulong)((int)uVar28 + 2) * 4);
            *param_1 = fVar42 + fVar40 * ((fVar43 - fVar41) * 0.5 +
                                         fVar40 * (((fVar41 + fVar43 + fVar43) -
                                                   (fVar42 * 5.0 + fVar45) * 0.5) +
                                                  fVar40 * (fVar45 + ((fVar42 - fVar43) * 3.0 -
                                                                     fVar41)) * 0.5));
            uVar25 = uVar25 + *param_6;
            *param_5 = uVar25;
            uVar28 = uVar25 >> 0x20;
            iVar30 = iVar30 + 1;
            param_1 = param_1 + 1;
            uVar35 = uVar25;
          } while (iVar30 != 0);
        }
      }
      else if (param_2 != 0) {
        uVar25 = (ulong)(uint)*param_5;
        do {
          if (0 < param_7) {
            lVar32 = 0;
            fVar40 = (float)(uVar25 & 0xffffffff) * 2.3283064e-10;
            uVar8 = *(uint *)((long)param_5 + 4);
            uVar26 = param_7 * (uVar8 + 2);
            uVar29 = param_7 * (uVar8 + 1);
            uVar33 = param_7 * uVar8;
            pfVar27 = param_1;
            iVar30 = param_7;
            do {
              fVar41 = *(float *)(param_3 + (ulong)uVar33 * 4);
              fVar42 = *(float *)(param_3 +
                                 (((ulong)uVar8 - 1) * (long)param_7 + (lVar32 >> 0x20)) * 4);
              fVar43 = *(float *)(param_3 + (ulong)uVar29 * 4);
              fVar45 = *(float *)(param_3 + (ulong)uVar26 * 4);
              lVar32 = lVar32 + 0x100000000;
              iVar30 = iVar30 + -1;
              uVar26 = uVar26 + 1;
              uVar29 = uVar29 + 1;
              uVar33 = uVar33 + 1;
              *pfVar27 = fVar41 + fVar40 * ((fVar43 - fVar42) * 0.5 +
                                           fVar40 * (((fVar42 + fVar43 + fVar43) -
                                                     (fVar41 * 5.0 + fVar45) * 0.5) +
                                                    fVar40 * (fVar45 + ((fVar41 - fVar43) * 3.0 -
                                                                       fVar42)) * 0.5));
              pfVar27 = pfVar27 + 1;
            } while (iVar30 != 0);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          uVar25 = *param_5 + *param_6;
          *param_5 = uVar25;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
  }
  return;
}




void FUN_1005c351c(float *param_1,uint param_2,long param_3,int param_4,ulong *param_5,long *param_6
                  ,int param_7)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  int3 iVar14;
  uint3 uVar15;
  code *UNRECOVERED_JUMPTABLE;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  float *pfVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  short sVar28;
  int iVar29;
  undefined1 auVar30 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar31 [16];
  
  if (param_4 - 1U < 5) {
    iVar16 = (int)param_2 >> 2;
    switch(param_4) {
    case 1:
      if (param_7 - 1U == 0) {
        if (iVar16 != 0) {
          uVar17 = iVar16 - 1;
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          pfVar18 = param_1;
          do {
            cVar11 = *(char *)(param_3 + uVar20);
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            cVar12 = *(char *)(param_3 + (uVar19 >> 0x20));
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            cVar13 = *(char *)(param_3 + (uVar19 >> 0x20));
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            auVar24._0_4_ = (int)(short)cVar11;
            auVar24._4_4_ = (int)(short)cVar12;
            auVar24._8_4_ = (int)(short)cVar13;
            auVar24._12_4_ = (int)(short)*(char *)(param_3 + (uVar19 >> 0x20));
            auVar26 = NEON_scvtf(auVar24,4);
            auVar25._0_8_ = CONCAT44(auVar26._4_4_ * 0.0078125,auVar26._0_4_ * 0.0078125);
            auVar25._8_4_ = auVar26._8_4_ * 0.0078125;
            auVar25._12_4_ = auVar26._12_4_ * 0.0078125;
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            *(undefined8 *)pfVar18 = auVar25._0_8_;
            auVar26 = NEON_ext(auVar25,auVar25,8,1);
            *(long *)(pfVar18 + 2) = auVar26._0_8_;
            iVar16 = iVar16 + -1;
            pfVar18 = pfVar18 + 4;
            uVar20 = uVar19 >> 0x20;
          } while (iVar16 != 0);
          param_1 = param_1 + (ulong)uVar17 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          iVar16 = -(param_2 & 3);
          do {
            *param_1 = (float)(int)(short)*(char *)(param_3 + uVar20) * 0.0078125;
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            uVar20 = uVar19 >> 0x20;
            iVar16 = iVar16 + 1;
            param_1 = param_1 + 1;
          } while (iVar16 != 0);
        }
      }
      else if (param_2 != 0) {
        do {
          if (0 < param_7) {
            uVar17 = param_7 * *(int *)((long)param_5 + 4);
            pfVar18 = param_1;
            iVar16 = param_7;
            do {
              *pfVar18 = (float)(int)(short)*(char *)(param_3 + (ulong)uVar17) * 0.0078125;
              iVar16 = iVar16 + -1;
              uVar17 = uVar17 + 1;
              pfVar18 = pfVar18 + 1;
            } while (iVar16 != 0);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 2:
      uVar17 = param_7 - 1;
      UNRECOVERED_JUMPTABLE = DAT_101d91998;
      if ((uVar17 == 0) || (UNRECOVERED_JUMPTABLE = DAT_101d919a0, param_7 == 2)) {
                    /* WARNING: Could not recover jumptable at 0x0001005c3a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (param_2 != 0) {
        uVar19 = (ulong)uVar17 + 1;
        do {
          if (0 < param_7) {
            iVar16 = *(int *)((long)param_5 + 4);
            uVar20 = uVar19 & 0x1fffffffe;
            if (uVar20 == 0) {
              uVar20 = 0;
              pfVar18 = param_1;
            }
            else {
              uVar21 = param_7 * iVar16;
              pfVar18 = param_1 + uVar20;
              pfVar22 = param_1 + 1;
              uVar23 = uVar19 & 0xfffffffffffffffe;
              do {
                sVar28 = *(short *)(param_3 + (ulong)(uVar21 + 1) * 2);
                pfVar22[-1] = (float)(int)*(short *)(param_3 + (ulong)uVar21 * 2) * 3.0517578e-05;
                *pfVar22 = (float)(int)sVar28 * 3.0517578e-05;
                uVar23 = uVar23 - 2;
                uVar21 = uVar21 + 2;
                pfVar22 = pfVar22 + 2;
              } while (uVar23 != 0);
            }
            if ((ulong)uVar17 + 1 != uVar20) {
              iVar29 = param_7 - (int)uVar20;
              uVar21 = (int)uVar20 + param_7 * iVar16;
              do {
                *pfVar18 = (float)(int)*(short *)(param_3 + (ulong)uVar21 * 2) * 3.0517578e-05;
                iVar29 = iVar29 + -1;
                uVar21 = uVar21 + 1;
                pfVar18 = pfVar18 + 1;
              } while (iVar29 != 0);
            }
            param_1 = param_1 + uVar19;
          }
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 3:
      if (param_7 - 1U == 0) {
        if (iVar16 != 0) {
          uVar17 = iVar16 - 1;
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          pfVar18 = param_1;
          do {
            iVar14 = *(int3 *)(param_3 + uVar20 * 3);
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            uVar15 = *(uint3 *)(param_3 + (uVar19 >> 0x20) * 3);
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            puVar1 = (undefined1 *)(param_3 + (uVar19 >> 0x20) * 3);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            puVar1 = (undefined1 *)(param_3 + (uVar19 >> 0x20) * 3);
            auVar30._0_9_ = (unkuint9)uVar15 << 0x28;
            auVar30[9] = uVar8;
            auVar30[10] = uVar9;
            auVar30[0xb] = uVar10;
            auVar31[0xc] = 0;
            auVar31._0_12_ = auVar30;
            auVar31[0xd] = *puVar1;
            auVar31[0xe] = puVar1[1];
            auVar31[0xf] = puVar1[2];
            auVar32._0_4_ = (int)iVar14;
            auVar32._4_4_ = (int)((long)((ulong)uVar15 << 0x28) >> 0x28);
            auVar32._8_4_ = auVar30._8_4_ >> 8;
            auVar32._12_4_ = auVar31._12_4_ >> 8;
            auVar26 = NEON_scvtf(auVar32,4);
            auVar33._0_8_ = CONCAT44(auVar26._4_4_ * 1.1920929e-07,auVar26._0_4_ * 1.1920929e-07);
            auVar33._8_4_ = auVar26._8_4_ * 1.1920929e-07;
            auVar33._12_4_ = auVar26._12_4_ * 1.1920929e-07;
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            *(undefined8 *)pfVar18 = auVar33._0_8_;
            auVar26 = NEON_ext(auVar33,auVar33,8,1);
            *(long *)(pfVar18 + 2) = auVar26._0_8_;
            pfVar18 = pfVar18 + 4;
            iVar16 = iVar16 + -1;
            uVar20 = uVar19 >> 0x20;
          } while (iVar16 != 0);
          param_1 = param_1 + (ulong)uVar17 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          iVar16 = -(param_2 & 3);
          do {
            pbVar2 = (byte *)(param_3 + uVar20 * 3);
            *param_1 = (float)((int)((uint)*pbVar2 << 8 | (uint)pbVar2[1] << 0x10 |
                                    (uint)pbVar2[2] << 0x18) >> 8) * 1.1920929e-07;
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            uVar20 = uVar19 >> 0x20;
            iVar16 = iVar16 + 1;
            param_1 = param_1 + 1;
          } while (iVar16 != 0);
        }
      }
      else if (param_2 != 0) {
        do {
          if (0 < param_7) {
            uVar17 = param_7 * *(int *)((long)param_5 + 4);
            pfVar18 = param_1;
            iVar16 = param_7;
            do {
              pbVar2 = (byte *)(param_3 + (ulong)uVar17 * 3);
              *pfVar18 = (float)((int)((uint)*pbVar2 << 8 | (uint)pbVar2[1] << 0x10 |
                                      (uint)pbVar2[2] << 0x18) >> 8) * 1.1920929e-07;
              iVar16 = iVar16 + -1;
              uVar17 = uVar17 + 1;
              pfVar18 = pfVar18 + 1;
            } while (iVar16 != 0);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 4:
      uVar17 = param_7 - 1;
      if (uVar17 == 0) {
        if (iVar16 != 0) {
          uVar17 = iVar16 - 1;
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          pfVar18 = param_1;
          do {
            uVar3 = *(undefined4 *)(param_3 + uVar20 * 4);
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            uVar20 = *param_6 + uVar19;
            auVar26._4_4_ = *(undefined4 *)(param_3 + (uVar19 >> 0x1e & 0x3fffffffc));
            auVar26._0_4_ = uVar3;
            *param_5 = uVar20;
            uVar19 = *param_6 + uVar20;
            auVar26._8_4_ = *(undefined4 *)(param_3 + (uVar20 >> 0x1e & 0x3fffffffc));
            *param_5 = uVar19;
            auVar26._12_4_ = *(undefined4 *)(param_3 + (uVar19 >> 0x1e & 0x3fffffffc));
            auVar26 = NEON_scvtf(auVar26,4);
            auVar27._0_8_ = CONCAT44(auVar26._4_4_ * 4.656613e-10,auVar26._0_4_ * 4.656613e-10);
            auVar27._8_4_ = auVar26._8_4_ * 4.656613e-10;
            auVar27._12_4_ = auVar26._12_4_ * 4.656613e-10;
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            *(undefined8 *)pfVar18 = auVar27._0_8_;
            auVar26 = NEON_ext(auVar27,auVar27,8,1);
            *(long *)(pfVar18 + 2) = auVar26._0_8_;
            iVar16 = iVar16 + -1;
            pfVar18 = pfVar18 + 4;
            uVar20 = uVar19 >> 0x20;
          } while (iVar16 != 0);
          param_1 = param_1 + (ulong)uVar17 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          iVar16 = -(param_2 & 3);
          do {
            *param_1 = (float)*(int *)(param_3 + uVar20 * 4) * 4.656613e-10;
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            uVar20 = uVar19 >> 0x20;
            iVar16 = iVar16 + 1;
            param_1 = param_1 + 1;
          } while (iVar16 != 0);
        }
      }
      else if (param_2 != 0) {
        uVar19 = (ulong)uVar17 + 1;
        do {
          if (0 < param_7) {
            iVar16 = *(int *)((long)param_5 + 4);
            uVar20 = uVar19 & 0x1fffffffe;
            if (uVar20 == 0) {
              uVar20 = 0;
              pfVar18 = param_1;
            }
            else {
              uVar21 = param_7 * iVar16;
              pfVar18 = param_1 + uVar20;
              pfVar22 = param_1 + 1;
              uVar23 = uVar19 & 0xfffffffffffffffe;
              do {
                iVar29 = *(int *)(param_3 + (ulong)(uVar21 + 1) * 4);
                pfVar22[-1] = (float)*(int *)(param_3 + (ulong)uVar21 * 4) * 4.656613e-10;
                *pfVar22 = (float)iVar29 * 4.656613e-10;
                uVar23 = uVar23 - 2;
                uVar21 = uVar21 + 2;
                pfVar22 = pfVar22 + 2;
              } while (uVar23 != 0);
            }
            if ((ulong)uVar17 + 1 != uVar20) {
              iVar29 = param_7 - (int)uVar20;
              uVar21 = (int)uVar20 + param_7 * iVar16;
              do {
                *pfVar18 = (float)*(int *)(param_3 + (ulong)uVar21 * 4) * 4.656613e-10;
                iVar29 = iVar29 + -1;
                uVar21 = uVar21 + 1;
                pfVar18 = pfVar18 + 1;
              } while (iVar29 != 0);
            }
            param_1 = param_1 + uVar19;
          }
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      break;
    case 5:
      if (param_7 - 1U == 0) {
        if (iVar16 != 0) {
          uVar17 = iVar16 - 1;
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          pfVar18 = param_1;
          do {
            fVar4 = *(float *)(param_3 + uVar20 * 4);
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            fVar5 = *(float *)(param_3 + (uVar19 >> 0x1e & 0x3fffffffc));
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            fVar6 = *(float *)(param_3 + (uVar19 >> 0x1e & 0x3fffffffc));
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            fVar7 = *(float *)(param_3 + (uVar19 >> 0x1e & 0x3fffffffc));
            uVar19 = *param_6 + uVar19;
            *param_5 = uVar19;
            *pfVar18 = fVar4;
            pfVar18[1] = fVar5;
            pfVar18[2] = fVar6;
            pfVar18[3] = fVar7;
            iVar16 = iVar16 + -1;
            uVar20 = uVar19 >> 0x20;
            pfVar18 = pfVar18 + 4;
          } while (iVar16 != 0);
          param_1 = param_1 + (ulong)uVar17 * 4 + 4;
        }
        if ((param_2 & 3) != 0) {
          uVar20 = (ulong)*(uint *)((long)param_5 + 4);
          uVar19 = *param_5;
          iVar16 = -(param_2 & 3);
          do {
            *param_1 = *(float *)(param_3 + uVar20 * 4);
            uVar19 = uVar19 + *param_6;
            *param_5 = uVar19;
            uVar20 = uVar19 >> 0x20;
            iVar16 = iVar16 + 1;
            param_1 = param_1 + 1;
          } while (iVar16 != 0);
        }
      }
      else if (param_2 != 0) {
        do {
          if (0 < param_7) {
            uVar17 = param_7 * *(int *)((long)param_5 + 4);
            pfVar18 = param_1;
            iVar16 = param_7;
            do {
              *pfVar18 = *(float *)(param_3 + (ulong)uVar17 * 4);
              iVar16 = iVar16 + -1;
              uVar17 = uVar17 + 1;
              pfVar18 = pfVar18 + 1;
            } while (iVar16 != 0);
            param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
          }
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005c3d08(float *param_1,int param_2,long param_3,undefined4 param_4,ulong *param_5,
                  long *param_6,int param_7)

{
  char *pcVar1;
  short *psVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  int iVar27;
  int iVar28;
  undefined1 auVar26 [16];
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar40;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar43;
  float fVar49;
  float fVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  float fVar79;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  
  auVar26 = _DAT_10114ce20;
  switch(param_4) {
  case 1:
    if (param_7 - 1U == 0) {
      if (param_2 != 0) {
        uVar10 = (ulong)(uint)*param_5;
        uVar12 = (ulong)*(uint *)((long)param_5 + 4);
        uVar19 = *param_5;
        do {
          param_2 = param_2 + -1;
          pcVar1 = (char *)(param_3 + uVar12);
          iVar11 = (int)uVar12;
          fVar76 = (float)(int)(short)pcVar1[-2] * 0.0078125;
          fVar79 = (float)(int)(short)pcVar1[-1] * 0.0078125;
          fVar53 = (float)(int)(short)*pcVar1 * 0.0078125;
          fVar75 = (float)(int)(short)*(char *)(param_3 + (ulong)(iVar11 + 1)) * 0.0078125;
          fVar77 = (float)(int)(short)*(char *)(param_3 + (ulong)(iVar11 + 2)) * 0.0078125;
          fVar74 = (float)(int)(short)*(char *)(param_3 + (ulong)(iVar11 + 3)) * 0.0078125;
          fVar52 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
          *param_1 = fVar53 + fVar52 * 0.041666668 *
                              ((fVar75 - fVar79) * 16.0 + (fVar76 - fVar77) + (fVar76 - fVar77) +
                              fVar52 * (((((fVar79 + fVar75) * 16.0 - fVar76) + fVar53 * -30.0) -
                                        fVar77) +
                                       fVar52 * (fVar74 * 7.0 +
                                                 fVar79 * 39.0 +
                                                 fVar75 * 66.0 + fVar53 * -70.0 + fVar77 * -33.0 +
                                                 fVar76 * -9.0 +
                                                fVar52 * (fVar76 * 13.0 +
                                                          fVar53 * 126.0 + fVar75 * -124.0 +
                                                          fVar77 * 61.0 + fVar79 * -64.0 +
                                                          fVar74 * -12.0 +
                                                         fVar52 * ((fVar75 - fVar53) * 50.0 +
                                                                   (fVar79 - fVar77) * 25.0 +
                                                                  (fVar74 - fVar76) * 5.0)))));
          uVar10 = uVar19 + *param_6;
          *param_5 = uVar10;
          uVar12 = uVar10 >> 0x20;
          param_1 = param_1 + 1;
          uVar19 = uVar10;
        } while (param_2 != 0);
      }
    }
    else if (param_2 != 0) {
      uVar10 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          lVar13 = 0;
          fVar75 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
          do {
            uVar14 = *(uint *)((long)param_5 + 4);
            fVar77 = (float)(int)(short)*(char *)(param_3 + (long)param_7 * ((ulong)uVar14 - 2) +
                                                 lVar13) * 0.0078125;
            iVar11 = (int)lVar13;
            fVar52 = (float)(int)(short)*(char *)(param_3 + (long)param_7 * ((ulong)uVar14 - 1) +
                                                 lVar13) * 0.0078125;
            fVar79 = (float)(int)(short)*(char *)(param_3 + (ulong)(iVar11 + param_7 * uVar14)) *
                     0.0078125;
            fVar53 = (float)(int)(short)*(char *)(param_3 + (ulong)(iVar11 + param_7 * (uVar14 + 1))
                                                 ) * 0.0078125;
            fVar74 = (float)(int)(short)*(char *)(param_3 + (ulong)(iVar11 + param_7 * (uVar14 + 2))
                                                 ) * 0.0078125;
            fVar76 = (float)(int)(short)*(char *)(param_3 + (ulong)(iVar11 + param_7 * (uVar14 + 3))
                                                 ) * 0.0078125;
            param_1[lVar13] =
                 fVar79 + fVar75 * 0.041666668 *
                          ((fVar53 - fVar52) * 16.0 + (fVar77 - fVar74) + (fVar77 - fVar74) +
                          fVar75 * (((((fVar52 + fVar53) * 16.0 - fVar77) + fVar79 * -30.0) - fVar74
                                    ) + fVar75 * (fVar76 * 7.0 +
                                                  fVar52 * 39.0 +
                                                  fVar53 * 66.0 + fVar79 * -70.0 + fVar74 * -33.0 +
                                                  fVar77 * -9.0 +
                                                 fVar75 * (fVar77 * 13.0 +
                                                           fVar79 * 126.0 + fVar53 * -124.0 +
                                                           fVar74 * 61.0 + fVar52 * -64.0 +
                                                           fVar76 * -12.0 +
                                                          fVar75 * ((fVar53 - fVar79) * 50.0 +
                                                                    (fVar52 - fVar74) * 25.0 +
                                                                   (fVar76 - fVar77) * 5.0)))));
            lVar13 = lVar13 + 1;
          } while (param_7 != (int)lVar13);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar10 = *param_5 + *param_6;
        *param_5 = uVar10;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    break;
  case 2:
    uVar14 = param_7 - 1;
    if (uVar14 == 0) {
      if (param_2 != 0) {
        uVar10 = (ulong)(uint)*param_5;
        uVar12 = (ulong)*(uint *)((long)param_5 + 4);
        uVar19 = *param_5;
        do {
          param_2 = param_2 + -1;
          psVar2 = (short *)(param_3 + uVar12 * 2);
          iVar11 = (int)uVar12;
          fVar76 = (float)(int)psVar2[-2] * 3.0517578e-05;
          fVar79 = (float)(int)psVar2[-1] * 3.0517578e-05;
          fVar53 = (float)(int)*psVar2 * 3.0517578e-05;
          fVar75 = (float)(int)*(short *)(param_3 + (ulong)(iVar11 + 1) * 2) * 3.0517578e-05;
          fVar77 = (float)(int)*(short *)(param_3 + (ulong)(iVar11 + 2) * 2) * 3.0517578e-05;
          fVar74 = (float)(int)*(short *)(param_3 + (ulong)(iVar11 + 3) * 2) * 3.0517578e-05;
          fVar52 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
          *param_1 = fVar53 + fVar52 * 0.041666668 *
                              ((fVar75 - fVar79) * 16.0 + (fVar76 - fVar77) + (fVar76 - fVar77) +
                              fVar52 * (((((fVar79 + fVar75) * 16.0 - fVar76) + fVar53 * -30.0) -
                                        fVar77) +
                                       fVar52 * (fVar74 * 7.0 +
                                                 fVar79 * 39.0 +
                                                 fVar75 * 66.0 + fVar53 * -70.0 + fVar77 * -33.0 +
                                                 fVar76 * -9.0 +
                                                fVar52 * (fVar76 * 13.0 +
                                                          fVar53 * 126.0 + fVar75 * -124.0 +
                                                          fVar77 * 61.0 + fVar79 * -64.0 +
                                                          fVar74 * -12.0 +
                                                         fVar52 * ((fVar75 - fVar53) * 50.0 +
                                                                   (fVar79 - fVar77) * 25.0 +
                                                                  (fVar74 - fVar76) * 5.0)))));
          uVar10 = uVar19 + *param_6;
          *param_5 = uVar10;
          uVar12 = uVar10 >> 0x20;
          param_1 = param_1 + 1;
          uVar19 = uVar10;
        } while (param_2 != 0);
      }
    }
    else if (param_2 != 0) {
      uVar10 = (ulong)uVar14 + 1;
      uVar12 = (ulong)(uint)*param_5;
      auVar26 = NEON_fmov(0x41800000,4);
      auVar54 = NEON_fmov(0x41f00000,4);
      auVar73 = NEON_fmov(0x40e00000,4);
      auVar78 = NEON_fmov(0x41100000,4);
      do {
        if (0 < param_7) {
          fVar52 = (float)(uVar12 & 0xffffffff) * 2.3283064e-10;
          uVar16 = *(uint *)((long)param_5 + 4);
          lVar13 = ((ulong)uVar16 - 2) * (long)param_7;
          lVar8 = ((ulong)uVar16 - 1) * (long)param_7;
          fVar75 = fVar52 * 0.041666668;
          uVar12 = uVar10 & 0x1fffffffc;
          if (uVar12 == 0) {
            uVar12 = 0;
            pfVar9 = param_1;
          }
          else {
            uVar19 = 0;
            iVar11 = uVar16 * param_7;
            iVar17 = (uVar16 + 1) * param_7;
            iVar5 = (uVar16 + 2) * param_7;
            iVar6 = (uVar16 + 3) * param_7;
            pfVar9 = param_1 + uVar12;
            local_250 = auVar78._0_4_;
            fStack_24c = auVar78._4_4_;
            fStack_248 = auVar78._8_4_;
            fStack_244 = auVar78._12_4_;
            pfVar21 = param_1;
            do {
              iVar18 = (int)uVar19;
              iVar27 = iVar18 + 1;
              iVar28 = iVar18 + 2;
              iVar29 = iVar18 + 3;
              auVar30._0_4_ = iVar11 + iVar18;
              auVar30._4_4_ = iVar11 + iVar27;
              auVar30._8_4_ = iVar11 + iVar28;
              auVar30._12_4_ = iVar11 + iVar29;
              auVar63._0_4_ = iVar17 + iVar18;
              auVar63._4_4_ = iVar17 + iVar27;
              auVar63._8_4_ = iVar17 + iVar28;
              auVar63._12_4_ = iVar17 + iVar29;
              auVar31._0_4_ = (int)*(short *)(param_3 + (ulong)auVar30._0_4_ * 2);
              auVar31._4_4_ = (int)*(short *)(param_3 + (ulong)auVar30._4_4_ * 2);
              auVar31._8_4_ = (int)*(short *)(param_3 + (auVar30._8_8_ & 0xffffffff) * 2);
              auVar31._12_4_ = (int)*(short *)(param_3 + (auVar30._8_8_ >> 0x20) * 2);
              auVar44._0_4_ = (int)*(short *)(param_3 + (lVar13 + iVar18) * 2);
              auVar44._4_4_ = (int)*(short *)(param_3 + (lVar13 + (iVar18 + 1)) * 2);
              auVar44._8_4_ = (int)*(short *)(param_3 + (lVar13 + (iVar18 + 2)) * 2);
              auVar44._12_4_ = (int)*(short *)(param_3 + (lVar13 + (iVar18 + 3)) * 2);
              auVar64._0_4_ = (int)*(short *)(param_3 + (ulong)auVar63._0_4_ * 2);
              auVar64._4_4_ = (int)*(short *)(param_3 + (ulong)auVar63._4_4_ * 2);
              auVar64._8_4_ = (int)*(short *)(param_3 + (auVar63._8_8_ & 0xffffffff) * 2);
              auVar64._12_4_ = (int)*(short *)(param_3 + (auVar63._8_8_ >> 0x20) * 2);
              auVar56._0_4_ = (int)*(short *)(param_3 + (lVar8 + iVar18) * 2);
              auVar56._4_4_ = (int)*(short *)(param_3 + (lVar8 + (iVar18 + 1)) * 2);
              auVar56._8_4_ = (int)*(short *)(param_3 + (lVar8 + (iVar18 + 2)) * 2);
              auVar56._12_4_ = (int)*(short *)(param_3 + (lVar8 + (iVar18 + 3)) * 2);
              auVar48 = NEON_scvtf(auVar31,4);
              auVar39 = NEON_scvtf(auVar64,4);
              auVar58 = NEON_scvtf(auVar44,4);
              auVar33 = NEON_scvtf(auVar56,4);
              auVar45._0_4_ = (int)*(short *)(param_3 + (ulong)(uint)(iVar5 + iVar18) * 2);
              auVar45._4_4_ =
                   (int)*(short *)(param_3 +
                                  (CONCAT26((short)((uint)(iVar5 + iVar27) >> 0x10),
                                            CONCAT24((short)(iVar5 + iVar27),iVar5 + iVar18)) >>
                                  0x20) * 2);
              auVar45._8_4_ = (int)*(short *)(param_3 + (ulong)(uint)(iVar5 + iVar28) * 2);
              auVar45._12_4_ = (int)*(short *)(param_3 + (ulong)(uint)(iVar5 + iVar29) * 2);
              auVar59 = NEON_scvtf(auVar45,4);
              auVar38._0_4_ = iVar6 + iVar18;
              auVar38._4_4_ = iVar6 + iVar27;
              auVar38._8_4_ = iVar6 + iVar28;
              auVar38._12_4_ = iVar6 + iVar29;
              fVar35 = auVar48._0_4_ * 3.0517578e-05;
              fVar36 = auVar48._4_4_ * 3.0517578e-05;
              fVar37 = auVar48._8_4_ * 3.0517578e-05;
              fVar40 = auVar48._12_4_ * 3.0517578e-05;
              fVar76 = auVar39._0_4_ * 3.0517578e-05;
              fVar77 = auVar39._4_4_ * 3.0517578e-05;
              fVar79 = auVar39._8_4_ * 3.0517578e-05;
              fVar34 = auVar39._12_4_ * 3.0517578e-05;
              fVar41 = auVar59._0_4_ * 3.0517578e-05;
              fVar42 = auVar59._4_4_ * 3.0517578e-05;
              fVar43 = auVar59._8_4_ * 3.0517578e-05;
              fVar49 = auVar59._12_4_ * 3.0517578e-05;
              fVar53 = auVar58._0_4_ * 3.0517578e-05;
              fVar74 = auVar58._4_4_ * 3.0517578e-05;
              fVar71 = auVar58._8_4_ * 3.0517578e-05;
              fVar72 = auVar58._12_4_ * 3.0517578e-05;
              auVar65._0_4_ = (int)*(short *)(param_3 + (ulong)auVar38._0_4_ * 2);
              auVar65._4_4_ = (int)*(short *)(param_3 + (ulong)auVar38._4_4_ * 2);
              auVar65._8_4_ = (int)*(short *)(param_3 + (auVar38._8_8_ & 0xffffffff) * 2);
              auVar65._12_4_ = (int)*(short *)(param_3 + (auVar38._8_8_ >> 0x20) * 2);
              auVar48 = NEON_scvtf(auVar65,4);
              fVar50 = auVar33._0_4_ * 3.0517578e-05;
              fVar51 = auVar33._4_4_ * 3.0517578e-05;
              fVar55 = auVar33._8_4_ * 3.0517578e-05;
              fVar60 = auVar33._12_4_ * 3.0517578e-05;
              fVar61 = auVar48._0_4_ * 3.0517578e-05;
              fVar62 = auVar48._4_4_ * 3.0517578e-05;
              fVar66 = auVar48._8_4_ * 3.0517578e-05;
              fVar70 = auVar48._12_4_ * 3.0517578e-05;
              auVar59 = NEON_fmov(0x41400000,4);
              auVar33 = NEON_fmov(0x41c80000,4);
              auVar39 = NEON_fmov(0x41500000,4);
              auVar48 = NEON_fmov(0x40a00000,4);
              auVar32._0_8_ =
                   CONCAT44(fVar36 + fVar75 * ((fVar77 - fVar51) * auVar26._4_4_ +
                                               (fVar74 - fVar42) + (fVar74 - fVar42) +
                                              fVar52 * (((((fVar51 + fVar77) * auVar26._4_4_ -
                                                          fVar74) - fVar36 * auVar54._4_4_) - fVar42
                                                        ) + fVar52 * (((fVar62 * auVar73._4_4_ +
                                                                       fVar51 * 39.0 +
                                                                       ((fVar77 * 66.0 -
                                                                        fVar36 * 70.0) -
                                                                       fVar42 * 33.0)) -
                                                                      fVar74 * fStack_24c) +
                                                                     fVar52 * (fVar74 * auVar39.
                                                  _4_4_ + ((((fVar36 * 126.0 - fVar77 * 124.0) +
                                                            fVar42 * 61.0) - fVar51 * 64.0) -
                                                          fVar62 * auVar59._4_4_) +
                                                  fVar52 * ((fVar77 - fVar36) * 50.0 +
                                                            (fVar51 - fVar42) * auVar33._4_4_ +
                                                           (fVar62 - fVar74) * auVar48._4_4_))))),
                            fVar35 + fVar75 * ((fVar76 - fVar50) * auVar26._0_4_ +
                                               (fVar53 - fVar41) + (fVar53 - fVar41) +
                                              fVar52 * (((((fVar50 + fVar76) * auVar26._0_4_ -
                                                          fVar53) - fVar35 * auVar54._0_4_) - fVar41
                                                        ) + fVar52 * (((fVar61 * auVar73._0_4_ +
                                                                       fVar50 * 39.0 +
                                                                       ((fVar76 * 66.0 -
                                                                        fVar35 * 70.0) -
                                                                       fVar41 * 33.0)) -
                                                                      fVar53 * local_250) +
                                                                     fVar52 * (fVar53 * auVar39.
                                                  _0_4_ + ((((fVar35 * 126.0 - fVar76 * 124.0) +
                                                            fVar41 * 61.0) - fVar50 * 64.0) -
                                                          fVar61 * auVar59._0_4_) +
                                                  fVar52 * ((fVar76 - fVar35) * 50.0 +
                                                            (fVar50 - fVar41) * auVar33._0_4_ +
                                                           (fVar61 - fVar53) * auVar48._0_4_))))));
              auVar32._8_4_ =
                   fVar37 + fVar75 * ((fVar79 - fVar55) * auVar26._8_4_ +
                                      (fVar71 - fVar43) + (fVar71 - fVar43) +
                                     fVar52 * (((((fVar55 + fVar79) * auVar26._8_4_ - fVar71) -
                                                fVar37 * auVar54._8_4_) - fVar43) +
                                              fVar52 * (((fVar66 * auVar73._8_4_ +
                                                         fVar55 * 39.0 +
                                                         ((fVar79 * 66.0 - fVar37 * 70.0) -
                                                         fVar43 * 33.0)) - fVar71 * fStack_248) +
                                                       fVar52 * (fVar71 * auVar39._8_4_ +
                                                                 ((((fVar37 * 126.0 - fVar79 * 124.0
                                                                    ) + fVar43 * 61.0) -
                                                                  fVar55 * 64.0) -
                                                                 fVar66 * auVar59._8_4_) +
                                                                fVar52 * ((fVar79 - fVar37) * 50.0 +
                                                                          (fVar55 - fVar43) *
                                                                          auVar33._8_4_ +
                                                                         (fVar66 - fVar71) *
                                                                         auVar48._8_4_)))));
              auVar32._12_4_ =
                   fVar40 + fVar75 * ((fVar34 - fVar60) * auVar26._12_4_ +
                                      (fVar72 - fVar49) + (fVar72 - fVar49) +
                                     fVar52 * (((((fVar60 + fVar34) * auVar26._12_4_ - fVar72) -
                                                fVar40 * auVar54._12_4_) - fVar49) +
                                              fVar52 * (((fVar70 * auVar73._12_4_ +
                                                         fVar60 * 39.0 +
                                                         ((fVar34 * 66.0 - fVar40 * 70.0) -
                                                         fVar49 * 33.0)) - fVar72 * fStack_244) +
                                                       fVar52 * (fVar72 * auVar39._12_4_ +
                                                                 ((((fVar40 * 126.0 - fVar34 * 124.0
                                                                    ) + fVar49 * 61.0) -
                                                                  fVar60 * 64.0) -
                                                                 fVar70 * auVar59._12_4_) +
                                                                fVar52 * ((fVar34 - fVar40) * 50.0 +
                                                                          (fVar60 - fVar49) *
                                                                          auVar33._12_4_ +
                                                                         (fVar70 - fVar72) *
                                                                         auVar48._12_4_)))));
              *(undefined8 *)pfVar21 = auVar32._0_8_;
              auVar48 = NEON_ext(auVar32,auVar32,8,1);
              *(long *)(pfVar21 + 2) = auVar48._0_8_;
              uVar19 = uVar19 + 4;
              pfVar21 = pfVar21 + 4;
            } while ((uVar10 & 0xfffffffffffffffc) != uVar19);
          }
          if ((ulong)uVar14 + 1 != uVar12) {
            lVar24 = uVar12 << 0x20;
            iVar17 = (int)uVar12;
            iVar11 = param_7 - iVar17;
            uVar20 = iVar17 + param_7 * (uVar16 + 3);
            uVar22 = iVar17 + param_7 * (uVar16 + 2);
            uVar23 = iVar17 + param_7 * (uVar16 + 1);
            uVar16 = iVar17 + param_7 * uVar16;
            do {
              fVar53 = (float)(int)*(short *)(param_3 + (ulong)uVar16 * 2) * 3.0517578e-05;
              fVar77 = (float)(int)*(short *)(param_3 + (ulong)uVar23 * 2) * 3.0517578e-05;
              fVar74 = (float)(int)*(short *)(param_3 + (lVar13 + (lVar24 >> 0x20)) * 2) *
                       3.0517578e-05;
              fVar79 = (float)(int)*(short *)(param_3 + (ulong)uVar22 * 2) * 3.0517578e-05;
              fVar76 = (float)(int)*(short *)(param_3 + (lVar8 + (lVar24 >> 0x20)) * 2) *
                       3.0517578e-05;
              fVar34 = (float)(int)*(short *)(param_3 + (ulong)uVar20 * 2) * 3.0517578e-05;
              lVar24 = lVar24 + 0x100000000;
              iVar11 = iVar11 + -1;
              uVar20 = uVar20 + 1;
              uVar22 = uVar22 + 1;
              uVar23 = uVar23 + 1;
              uVar16 = uVar16 + 1;
              *pfVar9 = fVar53 + fVar75 * ((fVar77 - fVar76) * 16.0 +
                                           (fVar74 - fVar79) + (fVar74 - fVar79) +
                                          fVar52 * (((((fVar76 + fVar77) * 16.0 - fVar74) +
                                                     fVar53 * -30.0) - fVar79) +
                                                   fVar52 * (fVar34 * 7.0 +
                                                             fVar76 * 39.0 +
                                                             fVar77 * 66.0 + fVar53 * -70.0 +
                                                             fVar79 * -33.0 + fVar74 * -9.0 +
                                                            fVar52 * (fVar74 * 13.0 +
                                                                      fVar53 * 126.0 +
                                                                      fVar77 * -124.0 +
                                                                      fVar79 * 61.0 + fVar76 * -64.0
                                                                      + fVar34 * -12.0 +
                                                                     fVar52 * ((fVar77 - fVar53) *
                                                                               50.0 + (fVar76 - 
                                                  fVar79) * 25.0 + (fVar34 - fVar74) * 5.0)))));
              pfVar9 = pfVar9 + 1;
            } while (iVar11 != 0);
          }
          param_1 = param_1 + uVar10;
        }
        uVar12 = *param_5 + *param_6;
        *param_5 = uVar12;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    break;
  case 3:
    if (param_7 - 1U == 0) {
      if (param_2 != 0) {
        uVar10 = (ulong)(uint)*param_5;
        uVar12 = (ulong)*(uint *)((long)param_5 + 4);
        do {
          pbVar4 = (byte *)(param_3 + uVar12 * 3);
          iVar11 = (int)uVar12;
          fVar75 = (float)((int)((uint)pbVar4[-6] << 8 | (uint)pbVar4[-5] << 0x10 |
                                (uint)pbVar4[-4] << 0x18) >> 8) * 1.1920929e-07;
          fVar76 = (float)((int)((uint)pbVar4[-3] << 8 | (uint)pbVar4[-2] << 0x10 |
                                (uint)pbVar4[-1] << 0x18) >> 8) * 1.1920929e-07;
          fVar74 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
          pbVar4 = (byte *)(param_3 + (ulong)(iVar11 + 1) * 3);
          fVar79 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
          pbVar4 = (byte *)(param_3 + (ulong)(iVar11 + 2) * 3);
          fVar52 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
          pbVar4 = (byte *)(param_3 + (ulong)(iVar11 + 3) * 3);
          fVar53 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
          fVar77 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
          *param_1 = fVar74 + fVar77 * 0.041666668 *
                              ((fVar79 - fVar76) * 16.0 + (fVar75 - fVar52) + (fVar75 - fVar52) +
                              fVar77 * (((((fVar76 + fVar79) * 16.0 - fVar75) + fVar74 * -30.0) -
                                        fVar52) +
                                       fVar77 * (fVar76 * 39.0 +
                                                 fVar79 * 66.0 + fVar74 * -70.0 + fVar52 * -33.0 +
                                                 fVar53 * 7.0 + fVar75 * -9.0 +
                                                fVar77 * (fVar75 * 13.0 +
                                                          fVar74 * 126.0 + fVar79 * -124.0 +
                                                          fVar52 * 61.0 + fVar76 * -64.0 +
                                                          fVar53 * -12.0 +
                                                         fVar77 * ((fVar79 - fVar74) * 50.0 +
                                                                   (fVar76 - fVar52) * 25.0 +
                                                                  (fVar53 - fVar75) * 5.0)))));
          uVar10 = *param_5 + *param_6;
          *param_5 = uVar10;
          param_2 = param_2 + -1;
          uVar12 = uVar10 >> 0x20;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (param_2 != 0) {
      lVar13 = (long)param_7 + (long)param_7 * 2;
      uVar10 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          lVar8 = 0;
          fVar75 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
          lVar24 = param_3 + 1;
          do {
            uVar14 = *(uint *)((long)param_5 + 4);
            iVar11 = (int)lVar8;
            lVar25 = (ulong)uVar14 - 2;
            lVar15 = lVar24 + lVar13 * lVar25;
            fVar77 = (float)((int)((uint)*(byte *)(lVar15 + -1) << 8 |
                                   (uint)*(byte *)(lVar24 + lVar13 * lVar25) << 0x10 |
                                  (uint)*(byte *)(lVar15 + 1) << 0x18) >> 8) * 1.1920929e-07;
            lVar15 = (ulong)uVar14 - 1;
            lVar25 = lVar24 + lVar13 * lVar15;
            fVar52 = (float)((int)((uint)*(byte *)(lVar25 + -1) << 8 |
                                   (uint)*(byte *)(lVar24 + lVar13 * lVar15) << 0x10 |
                                  (uint)*(byte *)(lVar25 + 1) << 0x18) >> 8) * 1.1920929e-07;
            pbVar4 = (byte *)(param_3 + (ulong)(iVar11 + param_7 * uVar14) * 3);
            fVar79 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                  (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
            pbVar4 = (byte *)(param_3 + (ulong)(iVar11 + param_7 * (uVar14 + 1)) * 3);
            fVar53 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                  (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
            pbVar4 = (byte *)(param_3 + (ulong)(iVar11 + param_7 * (uVar14 + 2)) * 3);
            fVar74 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                  (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
            pbVar4 = (byte *)(param_3 + (ulong)(iVar11 + param_7 * (uVar14 + 3)) * 3);
            fVar76 = (float)((int)((uint)*pbVar4 << 8 | (uint)pbVar4[1] << 0x10 |
                                  (uint)pbVar4[2] << 0x18) >> 8) * 1.1920929e-07;
            param_1[lVar8] =
                 fVar79 + fVar75 * 0.041666668 *
                          ((fVar53 - fVar52) * 16.0 + (fVar77 - fVar74) + (fVar77 - fVar74) +
                          fVar75 * (((((fVar52 + fVar53) * 16.0 - fVar77) + fVar79 * -30.0) - fVar74
                                    ) + fVar75 * (fVar52 * 39.0 +
                                                  fVar53 * 66.0 + fVar79 * -70.0 + fVar74 * -33.0 +
                                                  fVar76 * 7.0 + fVar77 * -9.0 +
                                                 fVar75 * (fVar77 * 13.0 +
                                                           fVar79 * 126.0 + fVar53 * -124.0 +
                                                           fVar74 * 61.0 + fVar52 * -64.0 +
                                                           fVar76 * -12.0 +
                                                          fVar75 * ((fVar53 - fVar79) * 50.0 +
                                                                    (fVar52 - fVar74) * 25.0 +
                                                                   (fVar76 - fVar77) * 5.0)))));
            lVar8 = lVar8 + 1;
            lVar24 = lVar24 + 3;
          } while (param_7 != (int)lVar8);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar10 = *param_5 + *param_6;
        *param_5 = uVar10;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    break;
  case 4:
    uVar14 = param_7 - 1;
    if (uVar14 == 0) {
      if (param_2 != 0) {
        uVar10 = (ulong)(uint)*param_5;
        uVar12 = (ulong)*(uint *)((long)param_5 + 4);
        uVar19 = *param_5;
        do {
          param_2 = param_2 + -1;
          piVar3 = (int *)(param_3 + uVar12 * 4);
          iVar11 = (int)uVar12;
          fVar76 = (float)piVar3[-2] * 4.656613e-10;
          fVar79 = (float)piVar3[-1] * 4.656613e-10;
          fVar53 = (float)*piVar3 * 4.656613e-10;
          fVar75 = (float)*(int *)(param_3 + (ulong)(iVar11 + 1) * 4) * 4.656613e-10;
          fVar77 = (float)*(int *)(param_3 + (ulong)(iVar11 + 2) * 4) * 4.656613e-10;
          fVar74 = (float)*(int *)(param_3 + (ulong)(iVar11 + 3) * 4) * 4.656613e-10;
          fVar52 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
          *param_1 = fVar53 + fVar52 * 0.041666668 *
                              ((fVar75 - fVar79) * 16.0 + (fVar76 - fVar77) + (fVar76 - fVar77) +
                              fVar52 * (((((fVar79 + fVar75) * 16.0 - fVar76) + fVar53 * -30.0) -
                                        fVar77) +
                                       fVar52 * (fVar74 * 7.0 +
                                                 fVar79 * 39.0 +
                                                 fVar75 * 66.0 + fVar53 * -70.0 + fVar77 * -33.0 +
                                                 fVar76 * -9.0 +
                                                fVar52 * (fVar76 * 13.0 +
                                                          fVar53 * 126.0 + fVar75 * -124.0 +
                                                          fVar77 * 61.0 + fVar79 * -64.0 +
                                                          fVar74 * -12.0 +
                                                         fVar52 * ((fVar75 - fVar53) * 50.0 +
                                                                   (fVar79 - fVar77) * 25.0 +
                                                                  (fVar74 - fVar76) * 5.0)))));
          uVar10 = uVar19 + *param_6;
          *param_5 = uVar10;
          uVar12 = uVar10 >> 0x20;
          param_1 = param_1 + 1;
          uVar19 = uVar10;
        } while (param_2 != 0);
      }
    }
    else if (param_2 != 0) {
      uVar10 = (ulong)uVar14 + 1;
      uVar12 = (ulong)(uint)*param_5;
      auVar78 = NEON_fmov(0x41800000,4);
      auVar54 = NEON_fmov(0x41f00000,4);
      auVar73 = NEON_fmov(0x40e00000,4);
      do {
        if (0 < param_7) {
          fVar52 = (float)(uVar12 & 0xffffffff) * 2.3283064e-10;
          uVar16 = *(uint *)((long)param_5 + 4);
          lVar13 = ((ulong)uVar16 - 2) * (long)param_7;
          lVar8 = ((ulong)uVar16 - 1) * (long)param_7;
          fVar75 = fVar52 * 0.041666668;
          uVar12 = uVar10 & 0x1fffffffc;
          if (uVar12 == 0) {
            uVar12 = 0;
            pfVar9 = param_1;
          }
          else {
            uVar19 = 0;
            iVar11 = uVar16 * param_7;
            iVar17 = (uVar16 + 1) * param_7;
            iVar5 = (uVar16 + 2) * param_7;
            iVar6 = (uVar16 + 3) * param_7;
            pfVar9 = param_1 + uVar12;
            pfVar21 = param_1;
            do {
              iVar18 = (int)uVar19;
              iVar27 = iVar18 + 1;
              iVar28 = iVar18 + 2;
              iVar29 = iVar18 + 3;
              lVar24 = (long)(iVar18 + auVar26._0_4_);
              lVar25 = (long)(iVar18 + auVar26._8_4_);
              auVar58._0_4_ = iVar11 + iVar18;
              auVar58._4_4_ = iVar11 + iVar27;
              auVar58._8_4_ = iVar11 + iVar28;
              auVar58._12_4_ = iVar11 + iVar29;
              auVar67._4_4_ = *(undefined4 *)(param_3 + (ulong)auVar58._4_4_ * 4);
              auVar67._0_4_ = *(undefined4 *)(param_3 + (ulong)auVar58._0_4_ * 4);
              auVar46._0_4_ = iVar17 + iVar18;
              auVar46._4_4_ = iVar17 + iVar27;
              auVar46._8_4_ = iVar17 + iVar28;
              auVar46._12_4_ = iVar17 + iVar29;
              auVar57._4_4_ = *(undefined4 *)(param_3 + (lVar13 + lVar25) * 4);
              auVar57._0_4_ = *(undefined4 *)(param_3 + (lVar13 + lVar24) * 4);
              auVar68._4_4_ = *(undefined4 *)(param_3 + (lVar8 + lVar25) * 4);
              auVar68._0_4_ = *(undefined4 *)(param_3 + (lVar8 + lVar24) * 4);
              auVar67._8_4_ = *(undefined4 *)(param_3 + (auVar58._8_8_ & 0xffffffff) * 4);
              uVar7 = *(undefined4 *)(param_3 + (ulong)auVar46._4_4_ * 4);
              auVar57._8_4_ = *(undefined4 *)(param_3 + (lVar13 + (iVar18 + 2)) * 4);
              auVar68._8_4_ = *(undefined4 *)(param_3 + (lVar8 + (iVar18 + 2)) * 4);
              auVar67._12_4_ = *(undefined4 *)(param_3 + (auVar58._8_8_ >> 0x20) * 4);
              auVar39._0_4_ = iVar5 + iVar18;
              auVar39._4_4_ = iVar5 + iVar27;
              auVar39._8_4_ = iVar5 + iVar28;
              auVar39._12_4_ = iVar5 + iVar29;
              auVar57._12_4_ = *(undefined4 *)(param_3 + (lVar13 + (iVar18 + 3)) * 4);
              auVar68._12_4_ = *(undefined4 *)(param_3 + (lVar8 + (iVar18 + 3)) * 4);
              auVar33 = NEON_scvtf(auVar67,4);
              auVar47._4_4_ = *(undefined4 *)(param_3 + (ulong)auVar39._4_4_ * 4);
              auVar47._0_4_ = *(undefined4 *)(param_3 + (ulong)auVar39._0_4_ * 4);
              auVar58 = NEON_scvtf(auVar57,4);
              auVar47._8_4_ = *(undefined4 *)(param_3 + (auVar39._8_8_ & 0xffffffff) * 4);
              auVar47._12_4_ = *(undefined4 *)(param_3 + (auVar39._8_8_ >> 0x20) * 4);
              auVar39 = NEON_scvtf(auVar68,4);
              auVar48._4_2_ = (short)uVar7;
              auVar48._0_4_ = *(undefined4 *)(param_3 + (ulong)auVar46._0_4_ * 4);
              auVar48._6_2_ = (short)((uint)uVar7 >> 0x10);
              auVar48._8_4_ = *(undefined4 *)(param_3 + (auVar46._8_8_ & 0xffffffff) * 4);
              auVar48._12_4_ = *(undefined4 *)(param_3 + (auVar46._8_8_ >> 0x20) * 4);
              auVar68 = NEON_scvtf(auVar48,4);
              auVar48 = NEON_scvtf(auVar47,4);
              auVar59._0_4_ = iVar6 + iVar18;
              auVar59._4_4_ = iVar6 + iVar27;
              auVar59._8_4_ = iVar6 + iVar28;
              auVar59._12_4_ = iVar6 + iVar29;
              fVar53 = auVar33._0_4_ * 4.656613e-10;
              fVar74 = auVar33._4_4_ * 4.656613e-10;
              fVar76 = auVar33._8_4_ * 4.656613e-10;
              fVar77 = auVar33._12_4_ * 4.656613e-10;
              fVar79 = auVar68._0_4_ * 4.656613e-10;
              fVar34 = auVar68._4_4_ * 4.656613e-10;
              fVar35 = auVar68._8_4_ * 4.656613e-10;
              fVar36 = auVar68._12_4_ * 4.656613e-10;
              fVar43 = auVar48._0_4_ * 4.656613e-10;
              fVar49 = auVar48._4_4_ * 4.656613e-10;
              fVar50 = auVar48._8_4_ * 4.656613e-10;
              fVar51 = auVar48._12_4_ * 4.656613e-10;
              auVar69._4_4_ = *(undefined4 *)(param_3 + (ulong)auVar59._4_4_ * 4);
              auVar69._0_4_ = *(undefined4 *)(param_3 + (ulong)auVar59._0_4_ * 4);
              auVar69._8_4_ = *(undefined4 *)(param_3 + (auVar59._8_8_ & 0xffffffff) * 4);
              fVar55 = auVar58._0_4_ * 4.656613e-10;
              fVar60 = auVar58._4_4_ * 4.656613e-10;
              fVar61 = auVar58._8_4_ * 4.656613e-10;
              fVar62 = auVar58._12_4_ * 4.656613e-10;
              auVar69._12_4_ = *(undefined4 *)(param_3 + (auVar59._8_8_ >> 0x20) * 4);
              auVar48 = NEON_scvtf(auVar69,4);
              fVar66 = auVar48._0_4_ * 4.656613e-10;
              fVar70 = auVar48._4_4_ * 4.656613e-10;
              fVar71 = auVar48._8_4_ * 4.656613e-10;
              fVar72 = auVar48._12_4_ * 4.656613e-10;
              fVar37 = auVar39._0_4_ * 4.656613e-10;
              fVar40 = auVar39._4_4_ * 4.656613e-10;
              fVar41 = auVar39._8_4_ * 4.656613e-10;
              fVar42 = auVar39._12_4_ * 4.656613e-10;
              auVar48 = NEON_fmov(0x41100000,4);
              auVar39 = NEON_fmov(0x41400000,4);
              auVar58 = NEON_fmov(0x41c80000,4);
              auVar68 = NEON_fmov(0x41500000,4);
              auVar59 = NEON_fmov(0x40a00000,4);
              auVar33._0_8_ =
                   CONCAT44(fVar74 + fVar75 * ((fVar34 - fVar40) * auVar78._4_4_ +
                                               (fVar60 - fVar49) + (fVar60 - fVar49) +
                                              fVar52 * (((((fVar40 + fVar34) * auVar78._4_4_ -
                                                          fVar60) - fVar74 * auVar54._4_4_) - fVar49
                                                        ) + fVar52 * (((fVar70 * auVar73._4_4_ +
                                                                       fVar40 * 39.0 +
                                                                       ((fVar34 * 66.0 -
                                                                        fVar74 * 70.0) -
                                                                       fVar49 * 33.0)) -
                                                                      fVar60 * auVar48._4_4_) +
                                                                     fVar52 * (fVar60 * auVar68.
                                                  _4_4_ + ((((fVar74 * 126.0 - fVar34 * 124.0) +
                                                            fVar49 * 61.0) - fVar40 * 64.0) -
                                                          fVar70 * auVar39._4_4_) +
                                                  fVar52 * ((fVar34 - fVar74) * 50.0 +
                                                            (fVar40 - fVar49) * auVar58._4_4_ +
                                                           (fVar70 - fVar60) * auVar59._4_4_))))),
                            fVar53 + fVar75 * ((fVar79 - fVar37) * auVar78._0_4_ +
                                               (fVar55 - fVar43) + (fVar55 - fVar43) +
                                              fVar52 * (((((fVar37 + fVar79) * auVar78._0_4_ -
                                                          fVar55) - fVar53 * auVar54._0_4_) - fVar43
                                                        ) + fVar52 * (((fVar66 * auVar73._0_4_ +
                                                                       fVar37 * 39.0 +
                                                                       ((fVar79 * 66.0 -
                                                                        fVar53 * 70.0) -
                                                                       fVar43 * 33.0)) -
                                                                      fVar55 * auVar48._0_4_) +
                                                                     fVar52 * (fVar55 * auVar68.
                                                  _0_4_ + ((((fVar53 * 126.0 - fVar79 * 124.0) +
                                                            fVar43 * 61.0) - fVar37 * 64.0) -
                                                          fVar66 * auVar39._0_4_) +
                                                  fVar52 * ((fVar79 - fVar53) * 50.0 +
                                                            (fVar37 - fVar43) * auVar58._0_4_ +
                                                           (fVar66 - fVar55) * auVar59._0_4_))))));
              auVar33._8_4_ =
                   fVar76 + fVar75 * ((fVar35 - fVar41) * auVar78._8_4_ +
                                      (fVar61 - fVar50) + (fVar61 - fVar50) +
                                     fVar52 * (((((fVar41 + fVar35) * auVar78._8_4_ - fVar61) -
                                                fVar76 * auVar54._8_4_) - fVar50) +
                                              fVar52 * (((fVar71 * auVar73._8_4_ +
                                                         fVar41 * 39.0 +
                                                         ((fVar35 * 66.0 - fVar76 * 70.0) -
                                                         fVar50 * 33.0)) - fVar61 * auVar48._8_4_) +
                                                       fVar52 * (fVar61 * auVar68._8_4_ +
                                                                 ((((fVar76 * 126.0 - fVar35 * 124.0
                                                                    ) + fVar50 * 61.0) -
                                                                  fVar41 * 64.0) -
                                                                 fVar71 * auVar39._8_4_) +
                                                                fVar52 * ((fVar35 - fVar76) * 50.0 +
                                                                          (fVar41 - fVar50) *
                                                                          auVar58._8_4_ +
                                                                         (fVar71 - fVar61) *
                                                                         auVar59._8_4_)))));
              auVar33._12_4_ =
                   fVar77 + fVar75 * ((fVar36 - fVar42) * auVar78._12_4_ +
                                      (fVar62 - fVar51) + (fVar62 - fVar51) +
                                     fVar52 * (((((fVar42 + fVar36) * auVar78._12_4_ - fVar62) -
                                                fVar77 * auVar54._12_4_) - fVar51) +
                                              fVar52 * (((fVar72 * auVar73._12_4_ +
                                                         fVar42 * 39.0 +
                                                         ((fVar36 * 66.0 - fVar77 * 70.0) -
                                                         fVar51 * 33.0)) - fVar62 * auVar48._12_4_)
                                                       + fVar52 * (fVar62 * auVar68._12_4_ +
                                                                   ((((fVar77 * 126.0 -
                                                                      fVar36 * 124.0) +
                                                                     fVar51 * 61.0) - fVar42 * 64.0)
                                                                   - fVar72 * auVar39._12_4_) +
                                                                  fVar52 * ((fVar36 - fVar77) * 50.0
                                                                            + (fVar42 - fVar51) *
                                                                              auVar58._12_4_ +
                                                                           (fVar72 - fVar62) *
                                                                           auVar59._12_4_)))));
              *(undefined8 *)pfVar21 = auVar33._0_8_;
              auVar48 = NEON_ext(auVar33,auVar33,8,1);
              *(long *)(pfVar21 + 2) = auVar48._0_8_;
              uVar19 = uVar19 + 4;
              pfVar21 = pfVar21 + 4;
            } while ((uVar10 & 0xfffffffffffffffc) != uVar19);
          }
          if ((ulong)uVar14 + 1 != uVar12) {
            lVar24 = uVar12 << 0x20;
            iVar17 = (int)uVar12;
            iVar11 = param_7 - iVar17;
            uVar20 = iVar17 + param_7 * (uVar16 + 3);
            uVar22 = iVar17 + param_7 * (uVar16 + 2);
            uVar23 = iVar17 + param_7 * (uVar16 + 1);
            uVar16 = iVar17 + param_7 * uVar16;
            do {
              fVar53 = (float)*(int *)(param_3 + (ulong)uVar16 * 4) * 4.656613e-10;
              fVar77 = (float)*(int *)(param_3 + (ulong)uVar23 * 4) * 4.656613e-10;
              fVar74 = (float)*(int *)(param_3 + (lVar13 + (lVar24 >> 0x20)) * 4) * 4.656613e-10;
              fVar79 = (float)*(int *)(param_3 + (ulong)uVar22 * 4) * 4.656613e-10;
              fVar76 = (float)*(int *)(param_3 + (lVar8 + (lVar24 >> 0x20)) * 4) * 4.656613e-10;
              fVar34 = (float)*(int *)(param_3 + (ulong)uVar20 * 4) * 4.656613e-10;
              lVar24 = lVar24 + 0x100000000;
              iVar11 = iVar11 + -1;
              uVar20 = uVar20 + 1;
              uVar22 = uVar22 + 1;
              uVar23 = uVar23 + 1;
              uVar16 = uVar16 + 1;
              *pfVar9 = fVar53 + fVar75 * ((fVar77 - fVar76) * 16.0 +
                                           (fVar74 - fVar79) + (fVar74 - fVar79) +
                                          fVar52 * (((((fVar76 + fVar77) * 16.0 - fVar74) +
                                                     fVar53 * -30.0) - fVar79) +
                                                   fVar52 * (fVar34 * 7.0 +
                                                             fVar76 * 39.0 +
                                                             fVar77 * 66.0 + fVar53 * -70.0 +
                                                             fVar79 * -33.0 + fVar74 * -9.0 +
                                                            fVar52 * (fVar74 * 13.0 +
                                                                      fVar53 * 126.0 +
                                                                      fVar77 * -124.0 +
                                                                      fVar79 * 61.0 + fVar76 * -64.0
                                                                      + fVar34 * -12.0 +
                                                                     fVar52 * ((fVar77 - fVar53) *
                                                                               50.0 + (fVar76 - 
                                                  fVar79) * 25.0 + (fVar34 - fVar74) * 5.0)))));
              pfVar9 = pfVar9 + 1;
            } while (iVar11 != 0);
          }
          param_1 = param_1 + uVar10;
        }
        uVar12 = *param_5 + *param_6;
        *param_5 = uVar12;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    break;
  case 5:
    if (param_7 - 1U == 0) {
      if (param_2 != 0) {
        uVar12 = (ulong)*(uint *)((long)param_5 + 4);
        uVar10 = *param_5;
        uVar19 = (ulong)(uint)*param_5;
        do {
          fVar74 = (float)(uVar19 & 0xffffffff) * 2.3283064e-10;
          pfVar9 = (float *)(param_3 + uVar12 * 4);
          fVar76 = pfVar9[-2];
          fVar75 = pfVar9[-1];
          fVar77 = *pfVar9;
          iVar11 = (int)uVar12;
          fVar79 = *(float *)(param_3 + (ulong)(iVar11 + 1) * 4);
          fVar52 = *(float *)(param_3 + (ulong)(iVar11 + 2) * 4);
          fVar53 = *(float *)(param_3 + (ulong)(iVar11 + 3) * 4);
          *param_1 = fVar77 + fVar74 * 0.041666668 *
                              ((fVar79 - fVar75) * 16.0 + (fVar76 - fVar52) + (fVar76 - fVar52) +
                              fVar74 * (((((fVar75 + fVar79) * 16.0 - fVar76) + fVar77 * -30.0) -
                                        fVar52) +
                                       fVar74 * (fVar53 * 7.0 +
                                                 fVar75 * 39.0 +
                                                 fVar79 * 66.0 + fVar77 * -70.0 + fVar52 * -33.0 +
                                                 fVar76 * -9.0 +
                                                fVar74 * (fVar76 * 13.0 +
                                                          fVar77 * 126.0 + fVar79 * -124.0 +
                                                          fVar52 * 61.0 + fVar75 * -64.0 +
                                                          fVar53 * -12.0 +
                                                         fVar74 * ((fVar79 - fVar77) * 50.0 +
                                                                   (fVar75 - fVar52) * 25.0 +
                                                                  (fVar53 - fVar76) * 5.0)))));
          uVar10 = uVar10 + *param_6;
          *param_5 = uVar10;
          param_2 = param_2 + -1;
          uVar12 = uVar10 >> 0x20;
          param_1 = param_1 + 1;
          uVar19 = uVar10;
        } while (param_2 != 0);
      }
    }
    else if (param_2 != 0) {
      uVar10 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          lVar13 = 0;
          fVar75 = (float)(uVar10 & 0xffffffff) * 2.3283064e-10;
          uVar23 = *(uint *)((long)param_5 + 4);
          uVar14 = param_7 * (uVar23 + 3);
          uVar16 = param_7 * (uVar23 + 2);
          uVar20 = param_7 * (uVar23 + 1);
          uVar22 = param_7 * uVar23;
          pfVar9 = param_1;
          iVar11 = param_7;
          do {
            fVar52 = *(float *)(param_3 + (ulong)uVar22 * 4);
            fVar77 = *(float *)(param_3 + (ulong)uVar20 * 4);
            fVar79 = *(float *)(param_3 +
                               (((ulong)uVar23 - 2) * (long)param_7 + (lVar13 >> 0x20)) * 4);
            fVar53 = *(float *)(param_3 + (ulong)uVar16 * 4);
            fVar74 = *(float *)(param_3 + (ulong)uVar14 * 4);
            fVar76 = *(float *)(param_3 +
                               (((ulong)uVar23 - 1) * (long)param_7 + (lVar13 >> 0x20)) * 4);
            lVar13 = lVar13 + 0x100000000;
            iVar11 = iVar11 + -1;
            uVar14 = uVar14 + 1;
            uVar16 = uVar16 + 1;
            uVar20 = uVar20 + 1;
            uVar22 = uVar22 + 1;
            *pfVar9 = fVar52 + fVar75 * 0.041666668 *
                               ((fVar77 - fVar76) * 16.0 + (fVar79 - fVar53) + (fVar79 - fVar53) +
                               fVar75 * (((((fVar76 + fVar77) * 16.0 - fVar79) + fVar52 * -30.0) -
                                         fVar53) +
                                        fVar75 * (fVar74 * 7.0 +
                                                  fVar76 * 39.0 +
                                                  fVar77 * 66.0 + fVar52 * -70.0 + fVar53 * -33.0 +
                                                  fVar79 * -9.0 +
                                                 fVar75 * (fVar79 * 13.0 +
                                                           fVar52 * 126.0 + fVar77 * -124.0 +
                                                           fVar53 * 61.0 + fVar76 * -64.0 +
                                                           fVar74 * -12.0 +
                                                          fVar75 * ((fVar77 - fVar52) * 50.0 +
                                                                    (fVar76 - fVar53) * 25.0 +
                                                                   (fVar74 - fVar79) * 5.0)))));
            pfVar9 = pfVar9 + 1;
          } while (iVar11 != 0);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar10 = *param_5 + *param_6;
        *param_5 = uVar10;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}




void FUN_1005c5da8(void)

{
  _memset(&DAT_101e9aae0,0,0x60);
  FUN_1005ecc98(&DAT_101e9aae4,"Decay Time",0x10);
  FUN_1005ecc98(&DAT_101e9aaf4,"ms",0x10);
  DAT_101e9ab08 = "Decay Time";
  DAT_101e9ab10 = 0x42c80000;
  DAT_101e9ab14 = 0x469c4000;
  DAT_101e9ab18 = 0x44bb8000;
  DAT_101e9ab20 = 1;
  _memset(&DAT_101e9ab40,0,0x60);
  FUN_1005ecc98(&DAT_101e9ab44,"Early Delay",0x10);
  FUN_1005ecc98(&DAT_101e9ab54,"ms",0x10);
  DAT_101e9ab68 = "Early Delay";
  DAT_101e9ab70 = 0;
  DAT_101e9ab74 = 0x43960000;
  DAT_101e9ab78 = 0x41a00000;
  DAT_101e9ab80 = 1;
  _memset(&DAT_101e9aba0,0,0x60);
  FUN_1005ecc98(&DAT_101e9aba4,"Late Delay",0x10);
  FUN_1005ecc98(&DAT_101e9abb4,"ms",0x10);
  DAT_101e9abc8 = "Late Delay";
  DAT_101e9abd0 = 0;
  DAT_101e9abd4 = 0x42c80000;
  DAT_101e9abd8 = 0x42200000;
  DAT_101e9abe0 = 1;
  _memset(&DAT_101e9ac00,0,0x60);
  FUN_1005ecc98(&DAT_101e9ac04,"HF Reference",0x10);
  FUN_1005ecc98(&DAT_101e9ac14,"Hz",0x10);
  DAT_101e9ac28 = "HF Reference";
  DAT_101e9ac30 = 0x41a00000;
  DAT_101e9ac34 = 0x469c4000;
  DAT_101e9ac38 = 0x459c4000;
  DAT_101e9ac40 = 1;
  _memset(&DAT_101e9ac60,0,0x60);
  FUN_1005ecc98(&DAT_101e9ac64,"HF Decay Ratio",0x10);
  FUN_1005ecc98(&DAT_101e9ac74,"%",0x10);
  DAT_101e9ac88 = "HF Decay Ratio";
  DAT_101e9ac90 = 0x41200000;
  DAT_101e9ac94 = 0x43480000;
  DAT_101e9ac98 = 0x42480000;
  DAT_101e9aca0 = 1;
  _memset(&DAT_101e9acc0,0,0x60);
  FUN_1005ecc98(&DAT_101e9acc4,"Diffusion",0x10);
  FUN_1005ecc98(&DAT_101e9acd4,"%",0x10);
  DAT_101e9ace8 = "Diffusion";
  DAT_101e9acf0 = 0;
  DAT_101e9acf4 = 0x42c80000;
  DAT_101e9acf8 = 0x42c80000;
  DAT_101e9ad00 = 1;
  _memset(&DAT_101e9ad20,0,0x60);
  FUN_1005ecc98(&DAT_101e9ad24,"Density",0x10);
  FUN_1005ecc98(&DAT_101e9ad34,"%",0x10);
  DAT_101e9ad48 = "Density";
  DAT_101e9ad50 = 0;
  DAT_101e9ad54 = 0x42c80000;
  DAT_101e9ad58 = 0x42c80000;
  DAT_101e9ad60 = 1;
  _memset(&DAT_101e9ad80,0,0x60);
  FUN_1005ecc98(&DAT_101e9ad84,"Low Shelf Frequency",0x10);
  FUN_1005ecc98(&DAT_101e9ad94,"Hz",0x10);
  DAT_101e9ada8 = "Low Shelf Frequency";
  DAT_101e9adb0 = 0x41a00000;
  DAT_101e9adb4 = 0x447a0000;
  DAT_101e9adb8 = 0x437a0000;
  DAT_101e9adc0 = 1;
  _memset(&DAT_101e9ade0,0,0x60);
  FUN_1005ecc98(&DAT_101e9ade4,"Low Shelf Gain",0x10);
  FUN_1005ecc98(&DAT_101e9adf4,"dB",0x10);
  DAT_101e9ae08 = "Low Shelf Gain";
  DAT_101e9ae10 = 0xc2400000;
  DAT_101e9ae14 = 0x41400000;
  DAT_101e9ae18 = 0;
  DAT_101e9ae20 = 1;
  _memset(&DAT_101e9ae40,0,0x60);
  FUN_1005ecc98(&DAT_101e9ae44,"High Cut",0x10);
  FUN_1005ecc98(&DAT_101e9ae54,"Hz",0x10);
  DAT_101e9ae68 = "High Cut";
  DAT_101e9ae70 = 0x41a00000;
  DAT_101e9ae74 = 0x469c4000;
  DAT_101e9ae78 = 0x469c4000;
  DAT_101e9ae80 = 1;
  _memset(&DAT_101e9aea0,0,0x60);
  FUN_1005ecc98(&DAT_101e9aea4,"Early/Late Mix",0x10);
  FUN_1005ecc98(&DAT_101e9aeb4,"%",0x10);
  DAT_101e9aec8 = "Early/Late Mix";
  DAT_101e9aed0 = 0;
  DAT_101e9aed4 = 0x42c80000;
  DAT_101e9aed8 = 0x42480000;
  DAT_101e9aee0 = 1;
  _memset(&DAT_101e9af00,0,0x60);
  FUN_1005ecc98(&DAT_101e9af04,"Wet Level",0x10);
  FUN_1005ecc98(&DAT_101e9af14,"dB",0x10);
  DAT_101e9af28 = "Wet Level";
  DAT_101e9af30 = 0xc2a00000;
  DAT_101e9af34 = 0x41a00000;
  DAT_101e9af38 = 0xc0c00000;
  DAT_101e9af40 = 1;
  _memset(&DAT_101e9af60,0,0x60);
  FUN_1005ecc98(&DAT_101e9af64,"Dry Level",0x10);
  FUN_1005ecc98(&DAT_101e9af74,"dB",0x10);
  DAT_101e9af88 = "Dry Level";
  DAT_101e9af90 = 0xc2a00000;
  DAT_101e9af94 = 0x41a00000;
  DAT_101e9af98 = 0;
  DAT_101e9afa0 = 1;
  DAT_101e9afc0 = &DAT_10186d258;
  DAT_101e9afd0 = 0x840;
  DAT_101e9afe0 = FUN_1005c6290;
  DAT_101e9afd8 = 0x13;
  return;
}




undefined8 FUN_1005c6290(undefined8 *param_1)

{
  FUN_1005c7200(*param_1);
  return 0;
}




undefined8 FUN_1005c62ac(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x90) + 0x708);
  *(int *)(param_1 + 0x800) = iVar2;
  *(undefined4 *)(param_1 + 0x804) = 0;
  lVar1 = param_1 + 0x1c8;
  iVar2 = FUN_1005575c4((float)iVar2,lVar1);
  if (iVar2 == 0) {
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x90);
    iVar2 = FUN_100558748(lVar1,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x710));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4b4) = 8;
      fVar6 = (float)_logf(0x41000000);
      fVar7 = (float)_logf(0x40000000);
      *(int *)(param_1 + 0x7c8) = (int)(fVar6 / fVar7 + 0.5);
      FUN_1005587fc(lVar1);
      iVar2 = *(int *)(*(long *)(param_1 + 0xd0) + 0x60);
      if (0 < iVar2) {
        uVar4 = 0;
        lVar5 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68);
        do {
          if (0xc < (uint)uVar4) {
            return 0x1f;
          }
          fVar6 = *(float *)(*(long *)(lVar5 + uVar4 * 8) + 0x38);
          switch(uVar4 & 0xffffffff) {
          case 0:
            *(float *)(param_1 + 0x808) = fVar6;
            break;
          case 1:
            *(float *)(param_1 + 0x80c) = fVar6;
            break;
          case 2:
            *(float *)(param_1 + 0x810) = fVar6;
            break;
          case 3:
            *(float *)(param_1 + 0x814) = fVar6;
            break;
          case 4:
            *(float *)(param_1 + 0x818) = fVar6;
            break;
          case 5:
            *(float *)(param_1 + 0x81c) = fVar6;
            break;
          case 6:
            *(float *)(param_1 + 0x820) = fVar6;
            break;
          case 7:
            *(float *)(param_1 + 0x824) = fVar6;
            break;
          case 8:
            *(float *)(param_1 + 0x828) = fVar6;
            break;
          case 9:
            *(float *)(param_1 + 0x82c) = fVar6;
            break;
          case 10:
            *(float *)(param_1 + 0x830) = fVar6;
            break;
          case 0xb:
            *(float *)(param_1 + 0x834) = fVar6;
            break;
          case 0xc:
            *(float *)(param_1 + 0x838) = fVar6;
            if (fVar6 <= -80.0) {
              uVar8 = 0;
            }
            else {
              uVar8 = _powf(0x41200000,fVar6 / 20.0);
            }
            *(undefined4 *)(param_1 + 0x83c) = uVar8;
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar2);
      }
      lVar5 = param_1 + 2000;
      *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_1 + 0x830);
      *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(param_1 + 0x828);
      *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_1 + 0x820);
      *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_1 + 0x818);
      *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_1 + 0x810);
      *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_1 + 0x808);
      FUN_1005c69d0(param_1,lVar5);
      fVar7 = *(float *)(param_1 + 0x7d4);
      fVar6 = DAT_101e9ab70;
      if ((fVar7 < DAT_101e9ab70) || (fVar6 = DAT_101e9ab74, DAT_101e9ab74 < fVar7)) {
        fVar7 = fVar6;
        *(float *)(param_1 + 0x7d4) = fVar7;
      }
      *(float *)(param_1 + 0x7d4) = fVar7;
      *(float *)(param_1 + 0x650) = fVar7 * 0.001;
      iVar2 = (int)(fVar7 * (float)*(int *)(param_1 + 0x800) * 0.001);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x674) = iVar2;
      fVar9 = *(float *)(param_1 + 0x7d8);
      fVar6 = DAT_101e9abd0;
      if ((fVar9 < DAT_101e9abd0) || (fVar6 = DAT_101e9abd4, DAT_101e9abd4 < fVar9)) {
        fVar9 = fVar6;
        *(float *)(param_1 + 0x7d8) = fVar9;
      }
      *(float *)(param_1 + 0x7d8) = fVar9;
      FUN_100557b14((fVar7 + fVar9) * 0.001,0x3c9930be,0x3fa51eb8,lVar1);
      fVar7 = *(float *)(param_1 + 0x7d8);
      fVar6 = DAT_101e9abd0;
      if ((fVar7 < DAT_101e9abd0) || (fVar6 = DAT_101e9abd4, DAT_101e9abd4 < fVar7)) {
        fVar7 = fVar6;
        *(float *)(param_1 + 0x7d8) = fVar7;
      }
      *(float *)(param_1 + 0x7d8) = fVar7;
      FUN_100557b14((fVar7 + *(float *)(param_1 + 0x7d4)) * 0.001,0x3c9930be,0x3fa51eb8,
                    (float)*(int *)(param_1 + 0x800),lVar1);
      fVar6 = *(float *)(param_1 + 0x7dc);
      fVar7 = DAT_101e9ac30;
      if ((fVar6 < DAT_101e9ac30) || (fVar7 = DAT_101e9ac34, DAT_101e9ac34 < fVar6)) {
        fVar6 = fVar7;
        *(float *)(param_1 + 0x7dc) = fVar6;
      }
      *(float *)(param_1 + 0x7dc) = fVar6;
      FUN_1005c69d0(param_1,lVar5);
      fVar6 = *(float *)(param_1 + 0x7e0);
      fVar7 = DAT_101e9ac90;
      if ((fVar6 < DAT_101e9ac90) || (fVar7 = DAT_101e9ac94, DAT_101e9ac94 < fVar6)) {
        fVar6 = fVar7;
        *(float *)(param_1 + 0x7e0) = fVar6;
      }
      *(float *)(param_1 + 0x7e0) = fVar6;
      FUN_1005c69d0(param_1,lVar5);
      fVar7 = *(float *)(param_1 + 0x7e4);
      fVar6 = DAT_101e9acf0;
      if ((fVar7 < DAT_101e9acf0) || (fVar6 = DAT_101e9acf4, DAT_101e9acf4 < fVar7)) {
        fVar7 = fVar6;
        *(float *)(param_1 + 0x7e4) = fVar7;
      }
      *(float *)(param_1 + 0x7e4) = fVar7;
      fVar6 = fVar7 * 0.01 * 3.1415927 * 0.25;
      uVar8 = _tanf(fVar6);
      *(undefined4 *)(param_1 + 0x460) = uVar8;
      uVar3 = _cosf(fVar6);
      uVar8 = _powf(uVar3,(float)*(int *)(param_1 + 0x7c8));
      *(undefined4 *)(param_1 + 0x49c) = uVar8;
      fVar7 = *(float *)(param_1 + 0x7e8);
      fVar6 = DAT_101e9ad50;
      if ((fVar7 < DAT_101e9ad50) || (fVar6 = DAT_101e9ad54, DAT_101e9ad54 < fVar7)) {
        fVar7 = fVar6;
        *(float *)(param_1 + 0x7e8) = fVar7;
      }
      *(float *)(param_1 + 0x7e8) = fVar7;
      fVar7 = fVar7 * 0.01;
      fVar7 = fVar7 * fVar7 * fVar7 * 0.9 + 0.1;
      fVar6 = 0.1;
      if ((0.1 <= fVar7) && (fVar6 = fVar7, 1.0 < fVar7)) {
        fVar6 = 1.0;
      }
      FUN_100557cec(fVar6 * 0.061,0x3fa8f5c3,0x3ac49ba6,0x3fbc28f6,(float)*(int *)(param_1 + 0x800),
                    lVar1);
      FUN_1005c69d0(param_1,lVar5);
      fVar6 = *(float *)(param_1 + 0x7ec);
      fVar7 = DAT_101e9adb0;
      if ((fVar6 < DAT_101e9adb0) || (fVar7 = DAT_101e9adb4, DAT_101e9adb4 < fVar6)) {
        fVar6 = fVar7;
        *(float *)(param_1 + 0x7ec) = fVar6;
      }
      *(float *)(param_1 + 0x7ec) = fVar6;
      FUN_1005c7724(param_1,lVar5);
      fVar7 = *(float *)(param_1 + 0x7f4);
      fVar6 = DAT_101e9ae70;
      if ((fVar7 < DAT_101e9ae70) || (fVar6 = DAT_101e9ae74, DAT_101e9ae74 < fVar7)) {
        fVar7 = fVar6;
        *(float *)(param_1 + 0x7f4) = fVar7;
      }
      *(float *)(param_1 + 0x7f4) = fVar7;
      fVar6 = (float)_cosf((fVar7 * 6.2831855) / (float)*(int *)(param_1 + 0x800));
      fVar7 = fVar6 * -0.70794576 + 1.0;
      fVar7 = fVar7 + fVar7;
      fVar9 = fVar7 * fVar7 + -0.3411827;
      fVar6 = 0.0;
      if (0.0 <= fVar9) {
        fVar6 = fVar9;
      }
      fVar7 = (SQRT(fVar6) - fVar7) / -0.5841085;
      fVar6 = 0.0;
      if ((0.0 <= fVar7) && (fVar6 = fVar7, 0.99 < fVar7)) {
        fVar6 = 0.99;
      }
      *(float *)(param_1 + 0x1e8) = 1.0 - fVar6;
      fVar6 = *(float *)(param_1 + 0x7fc);
      fVar7 = DAT_101e9af30;
      if ((fVar6 < DAT_101e9af30) || (fVar7 = DAT_101e9af34, DAT_101e9af34 < fVar6)) {
        fVar6 = fVar7;
        *(float *)(param_1 + 0x7fc) = fVar6;
      }
      *(float *)(param_1 + 0x7fc) = fVar6;
      FUN_1005c7844(param_1,lVar5);
      uVar3 = 0;
    }
    else {
      uVar3 = 0x26;
    }
  }
  else {
    uVar3 = 0x26;
  }
  return uVar3;
}




undefined8 FUN_1005c6894(float param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  long local_40;
  
  switch(param_3) {
  case 0:
    *(float *)(param_2 + 0x808) = param_1;
    break;
  case 1:
    *(float *)(param_2 + 0x80c) = param_1;
    break;
  case 2:
    *(float *)(param_2 + 0x810) = param_1;
    break;
  case 3:
    *(float *)(param_2 + 0x814) = param_1;
    break;
  case 4:
    *(float *)(param_2 + 0x818) = param_1;
    break;
  case 5:
    *(float *)(param_2 + 0x81c) = param_1;
    break;
  case 6:
    *(float *)(param_2 + 0x820) = param_1;
    break;
  case 7:
    *(float *)(param_2 + 0x824) = param_1;
    break;
  case 8:
    *(float *)(param_2 + 0x828) = param_1;
    break;
  case 9:
    *(float *)(param_2 + 0x82c) = param_1;
    break;
  case 10:
    *(float *)(param_2 + 0x830) = param_1;
    break;
  case 0xb:
    *(float *)(param_2 + 0x834) = param_1;
    break;
  case 0xc:
    *(float *)(param_2 + 0x838) = param_1;
    if (param_1 <= -80.0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _powf(0x41200000,param_1 / 20.0);
    }
    *(undefined4 *)(param_2 + 0x83c) = uVar2;
    break;
  default:
    return 0x1f;
  }
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    local_48[0] = 8;
    local_40 = param_2;
    uVar1 = FUN_10056be4c(*(undefined8 *)(param_2 + 0x90),local_48,1);
  }
  return uVar1;
}




undefined8 FUN_1005c69d0(long param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  
  fVar4 = *param_2;
  fVar7 = DAT_101e9ab10;
  if ((fVar4 < DAT_101e9ab10) || (fVar7 = DAT_101e9ab14, DAT_101e9ab14 < fVar4)) {
    *param_2 = fVar7;
    fVar4 = fVar7;
  }
  *(float *)(param_1 + 2000) = fVar4;
  iVar2 = *(int *)(param_1 + 0x4b4);
  if (0 < iVar2) {
    lVar3 = 0;
    local_88 = 0.99;
    do {
      if (*param_2 != 0.0) {
        lVar1 = param_1 + lVar3 * 4;
        fVar7 = *(float *)(lVar1 + 0x4f8);
        fVar4 = (-60.0 / (*param_2 / 1000.0)) * fVar7;
        uVar5 = _powf(0x41200000,fVar4 / 20.0);
        *(undefined4 *)(lVar1 + 0x3e0) = uVar5;
        fVar7 = (float)_powf(0x41200000,
                             ((-60.0 / ((param_2[4] / 100.0) * (*param_2 / 1000.0))) * fVar7 - fVar4
                             ) / 20.0);
        fVar4 = 1.0;
        if (fVar7 <= 1.0) {
          fVar4 = fVar7;
        }
        if (fVar4 == 1.0) {
          fVar4 = 0.0;
        }
        else {
          fVar8 = fVar4 * fVar4 + -1.0;
          fVar7 = (float)_cosf((param_2[3] * 6.2831855) / (float)*(int *)(param_1 + 0x800));
          fVar7 = 1.0 - fVar4 * fVar4 * fVar7;
          fVar7 = fVar7 + fVar7;
          fVar6 = fVar7 * fVar7 + fVar8 * fVar8 * -4.0;
          fVar4 = 0.0;
          if (0.0 <= fVar6) {
            fVar4 = fVar6;
          }
          fVar7 = (SQRT(fVar4) - fVar7) / (fVar8 + fVar8);
          fVar4 = 0.0;
          if ((0.0 <= fVar7) && (fVar4 = fVar7, 0.99 < fVar7)) {
            fVar4 = local_88;
          }
        }
        *(float *)(lVar1 + 0x224) = 1.0 - fVar4;
        iVar2 = *(int *)(param_1 + 0x4b4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  FUN_1005c7844(param_1,param_1 + 2000);
  return 0;
}




undefined8 FUN_1005c6bc4(long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = DAT_101e9ab70;
  if ((fVar2 < DAT_101e9ab70) || (fVar3 = DAT_101e9ab74, DAT_101e9ab74 < fVar2)) {
    *(float *)(param_2 + 4) = fVar3;
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x7d4) = fVar2;
  *(float *)(param_1 + 0x650) = fVar2 * 0.001;
  iVar1 = (int)((float)*(int *)(param_1 + 0x800) * fVar2 * 0.001);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x674) = iVar1;
  fVar4 = *(float *)(param_1 + 0x7d8);
  fVar3 = DAT_101e9abd0;
  if ((fVar4 < DAT_101e9abd0) || (fVar3 = DAT_101e9abd4, DAT_101e9abd4 < fVar4)) {
    *(float *)(param_1 + 0x7d8) = fVar3;
    fVar4 = fVar3;
  }
  *(float *)(param_1 + 0x7d8) = fVar4;
  FUN_100557b14((fVar4 + fVar2) * 0.001,0x3c9930be,0x3fa51eb8,param_1 + 0x1c8);
  return 0;
}




undefined8 FUN_1005c6c88(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = DAT_101e9abd0;
  if ((fVar1 < DAT_101e9abd0) || (fVar2 = DAT_101e9abd4, DAT_101e9abd4 < fVar1)) {
    *(float *)(param_2 + 8) = fVar2;
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x7d8) = fVar1;
  FUN_100557b14((fVar1 + *(float *)(param_1 + 0x7d4)) * 0.001,0x3c9930be,0x3fa51eb8,
                (float)*(int *)(param_1 + 0x800),param_1 + 0x1c8);
  return 0;
}




undefined8 FUN_1005c6d04(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0xc);
  fVar2 = DAT_101e9ac30;
  if ((fVar1 < DAT_101e9ac30) || (fVar2 = DAT_101e9ac34, DAT_101e9ac34 < fVar1)) {
    *(float *)(param_2 + 0xc) = fVar2;
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x7dc) = fVar1;
  FUN_1005c69d0(param_1,param_1 + 2000);
  return 0;
}




undefined8 FUN_1005c6d50(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = DAT_101e9ac90;
  if ((fVar1 < DAT_101e9ac90) || (fVar2 = DAT_101e9ac94, DAT_101e9ac94 < fVar1)) {
    *(float *)(param_2 + 0x10) = fVar2;
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x7e0) = fVar1;
  FUN_1005c69d0();
  return 0;
}




undefined8 FUN_1005c6d98(long param_1,long param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x14);
  fVar4 = DAT_101e9acf0;
  if ((fVar1 < DAT_101e9acf0) || (fVar4 = DAT_101e9acf4, DAT_101e9acf4 < fVar1)) {
    *(float *)(param_2 + 0x14) = fVar4;
    fVar1 = fVar4;
  }
  *(float *)(param_1 + 0x7e4) = fVar1;
  fVar4 = *(float *)(param_2 + 0x14) * 0.01 * 3.1415927 * 0.25;
  uVar2 = _tanf(fVar4);
  *(undefined4 *)(param_1 + 0x460) = uVar2;
  uVar3 = _cosf(fVar4);
  uVar2 = _powf(uVar3,(float)*(int *)(param_1 + 0x7c8));
  *(undefined4 *)(param_1 + 0x49c) = uVar2;
  return 0;
}




undefined8 FUN_1005c6e38(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x18);
  fVar2 = DAT_101e9ad50;
  if ((fVar1 < DAT_101e9ad50) || (fVar2 = DAT_101e9ad54, DAT_101e9ad54 < fVar1)) {
    *(float *)(param_2 + 0x18) = fVar2;
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x7e8) = fVar1;
  fVar2 = *(float *)(param_2 + 0x18) * 0.01;
  fVar1 = fVar2 * fVar2 * fVar2 * 0.9 + 0.1;
  fVar2 = 0.1;
  if ((0.1 <= fVar1) && (fVar2 = fVar1, 1.0 < fVar1)) {
    fVar2 = 1.0;
  }
  FUN_100557cec(fVar2 * 0.061,0x3fa8f5c3,0x3ac49ba6,0x3fbc28f6,(float)*(int *)(param_1 + 0x800),
                param_1 + 0x1c8);
  FUN_1005c69d0(param_1,param_2);
  return 0;
}




undefined8 FUN_1005c6f18(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar2 = DAT_101e9adb0;
  if ((fVar1 < DAT_101e9adb0) || (fVar2 = DAT_101e9adb4, DAT_101e9adb4 < fVar1)) {
    *(float *)(param_2 + 0x1c) = fVar2;
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x7ec) = fVar1;
  FUN_1005c7724();
  return 0;
}




undefined8 FUN_1005c6f60(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x24);
  fVar2 = DAT_101e9ae70;
  if ((fVar1 < DAT_101e9ae70) || (fVar2 = DAT_101e9ae74, DAT_101e9ae74 < fVar1)) {
    fVar1 = fVar2;
    *(float *)(param_2 + 0x24) = fVar1;
  }
  *(float *)(param_1 + 0x7f4) = fVar1;
  fVar2 = (float)_cosf((*(float *)(param_2 + 0x24) * 6.2831855) / (float)*(int *)(param_1 + 0x800));
  fVar1 = fVar2 * -0.70794576 + 1.0;
  fVar1 = fVar1 + fVar1;
  fVar3 = fVar1 * fVar1 + -0.3411827;
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar1 = (SQRT(fVar2) - fVar1) / -0.5841085;
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 0.99 < fVar1)) {
    fVar2 = 0.99;
  }
  *(float *)(param_1 + 0x1e8) = 1.0 - fVar2;
  return 0;
}




undefined8 FUN_1005c7040(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x2c);
  fVar2 = DAT_101e9af30;
  if ((fVar1 < DAT_101e9af30) || (fVar2 = DAT_101e9af34, DAT_101e9af34 < fVar1)) {
    *(float *)(param_2 + 0x2c) = fVar2;
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x7fc) = fVar1;
  FUN_1005c7844();
  return 0;
}




undefined8 FUN_1005c7088(long param_1)

{
  FUN_100558388(param_1 + 0x1c8);
  return 0;
}




undefined8 FUN_1005c70a4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100558748(param_1 + 0x1c8,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x710));
  if (iVar1 == 0) {
    FUN_1005587fc(param_1 + 0x1c8);
    uVar2 = 0;
  }
  else {
    uVar2 = 0x26;
  }
  return uVar2;
}




undefined8 FUN_1005c70e8(long param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    if (*(float *)(param_1 + 0x7fc) <= -80.0) {
      uVar2 = *(uint *)(param_1 + 0x804);
    }
    else {
      uVar2 = (uint)((*(float *)(param_1 + 0x7fc) + 100.0) * *(float *)(param_1 + 2000) *
                     1.6666667e-05 * (float)*(int *)(param_1 + 0x800));
      *(uint *)(param_1 + 0x804) = uVar2;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x804);
    if (uVar2 == 0) {
      return 0xb;
    }
  }
  iVar1 = uVar2 - param_3;
  if (uVar2 < param_3 || iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x804) = iVar1;
  return 0;
}




undefined8
FUN_1005c7170(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x804) == 0) {
    iVar2 = (int)param_5;
    if (0 < iVar2) {
      uVar4 = 0;
      do {
        uVar3 = (uint)uVar4;
        uVar1 = uVar3;
        while (uVar1 < (uint)(iVar2 * (int)param_4)) {
          *(float *)(param_3 + uVar4 * 4) =
               *(float *)(param_2 + uVar4 * 4) * *(float *)(param_1 + 0x83c);
          uVar1 = (int)uVar4 + iVar2;
          uVar4 = (ulong)uVar1;
        }
        uVar4 = (ulong)(uVar3 + 1);
      } while (uVar3 != iVar2 - 1U);
    }
  }
  else {
    FUN_100558880((float)*(int *)(param_1 + 0x800),*(undefined4 *)(param_1 + 0x83c),param_1 + 0x1c8,
                  param_2,param_3,param_5,param_4);
  }
  return 0;
}




undefined8 FUN_1005c7200(long param_1,int param_2)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 == 1) {
    lVar2 = param_1 + 2000;
    if (*(float *)(param_1 + 2000) != *(float *)(param_1 + 0x808)) {
      *(float *)(param_1 + 2000) = *(float *)(param_1 + 0x808);
      FUN_1005c69d0(param_1,lVar2);
    }
    fVar4 = *(float *)(param_1 + 0x80c);
    if (*(float *)(param_1 + 0x7d4) != fVar4) {
      *(float *)(param_1 + 0x7d4) = fVar4;
      fVar7 = DAT_101e9ab70;
      if ((fVar4 < DAT_101e9ab70) || (fVar7 = DAT_101e9ab74, DAT_101e9ab74 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7d4) = fVar4;
      }
      *(float *)(param_1 + 0x7d4) = fVar4;
      *(float *)(param_1 + 0x650) = fVar4 * 0.001;
      iVar3 = (int)(fVar4 * (float)*(int *)(param_1 + 0x800) * 0.001);
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      *(int *)(param_1 + 0x674) = iVar3;
      fVar8 = *(float *)(param_1 + 0x7d8);
      fVar7 = DAT_101e9abd0;
      if ((fVar8 < DAT_101e9abd0) || (fVar7 = DAT_101e9abd4, DAT_101e9abd4 < fVar8)) {
        *(float *)(param_1 + 0x7d8) = fVar7;
        fVar8 = fVar7;
      }
      *(float *)(param_1 + 0x7d8) = fVar8;
      FUN_100557b14((fVar4 + fVar8) * 0.001,0x3c9930be,0x3fa51eb8,param_1 + 0x1c8);
    }
    pfVar1 = (float *)(param_1 + 0x7d8);
    fVar4 = *(float *)(param_1 + 0x810);
    if (*pfVar1 != fVar4) {
      *pfVar1 = fVar4;
      fVar7 = DAT_101e9abd0;
      if ((fVar4 < DAT_101e9abd0) || (fVar7 = DAT_101e9abd4, DAT_101e9abd4 < fVar4)) {
        fVar4 = fVar7;
        *pfVar1 = fVar4;
      }
      *(float *)(param_1 + 0x7d8) = fVar4;
      FUN_100557b14((fVar4 + *(float *)(param_1 + 0x7d4)) * 0.001,0x3c9930be,0x3fa51eb8,
                    (float)*(int *)(param_1 + 0x800),param_1 + 0x1c8);
    }
    fVar4 = *(float *)(param_1 + 0x814);
    if (*(float *)(param_1 + 0x7dc) != fVar4) {
      *(float *)(param_1 + 0x7dc) = fVar4;
      fVar7 = DAT_101e9ac30;
      if ((fVar4 < DAT_101e9ac30) || (fVar7 = DAT_101e9ac34, DAT_101e9ac34 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7dc) = fVar4;
      }
      *(float *)(param_1 + 0x7dc) = fVar4;
      FUN_1005c69d0(param_1,lVar2);
    }
    fVar4 = *(float *)(param_1 + 0x818);
    if (*(float *)(param_1 + 0x7e0) != fVar4) {
      *(float *)(param_1 + 0x7e0) = fVar4;
      fVar7 = DAT_101e9ac90;
      if ((fVar4 < DAT_101e9ac90) || (fVar7 = DAT_101e9ac94, DAT_101e9ac94 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7e0) = fVar4;
      }
      *(float *)(param_1 + 0x7e0) = fVar4;
      FUN_1005c69d0(param_1,lVar2);
    }
    fVar4 = *(float *)(param_1 + 0x81c);
    if (*(float *)(param_1 + 0x7e4) != fVar4) {
      *(float *)(param_1 + 0x7e4) = fVar4;
      fVar7 = DAT_101e9acf0;
      if ((fVar4 < DAT_101e9acf0) || (fVar7 = DAT_101e9acf4, DAT_101e9acf4 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7e4) = fVar4;
      }
      *(float *)(param_1 + 0x7e4) = fVar4;
      fVar4 = fVar4 * 0.01 * 3.1415927 * 0.25;
      uVar5 = _tanf(fVar4);
      *(undefined4 *)(param_1 + 0x460) = uVar5;
      uVar6 = _cosf(fVar4);
      uVar5 = _powf(uVar6,(float)*(int *)(param_1 + 0x7c8));
      *(undefined4 *)(param_1 + 0x49c) = uVar5;
    }
    fVar4 = *(float *)(param_1 + 0x820);
    if (*(float *)(param_1 + 0x7e8) != fVar4) {
      *(float *)(param_1 + 0x7e8) = fVar4;
      fVar7 = DAT_101e9ad50;
      if ((fVar4 < DAT_101e9ad50) || (fVar7 = DAT_101e9ad54, DAT_101e9ad54 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7e8) = fVar4;
      }
      *(float *)(param_1 + 0x7e8) = fVar4;
      fVar4 = fVar4 * 0.01;
      fVar7 = fVar4 * fVar4 * fVar4 * 0.9 + 0.1;
      fVar4 = 0.1;
      if ((0.1 <= fVar7) && (fVar4 = fVar7, 1.0 < fVar7)) {
        fVar4 = 1.0;
      }
      FUN_100557cec(fVar4 * 0.061,0x3fa8f5c3,0x3ac49ba6,0x3fbc28f6,(float)*(int *)(param_1 + 0x800),
                    param_1 + 0x1c8);
      FUN_1005c69d0(param_1,lVar2);
    }
    fVar4 = *(float *)(param_1 + 0x824);
    if (*(float *)(param_1 + 0x7ec) != fVar4) {
      *(float *)(param_1 + 0x7ec) = fVar4;
      fVar7 = DAT_101e9adb0;
      if ((fVar4 < DAT_101e9adb0) || (fVar7 = DAT_101e9adb4, DAT_101e9adb4 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7ec) = fVar4;
      }
      *(float *)(param_1 + 0x7ec) = fVar4;
      FUN_1005c7724(param_1,lVar2);
    }
    if (*(float *)(param_1 + 0x7f0) != *(float *)(param_1 + 0x828)) {
      *(float *)(param_1 + 0x7f0) = *(float *)(param_1 + 0x828);
      FUN_1005c7724(param_1,lVar2);
    }
    fVar4 = *(float *)(param_1 + 0x82c);
    if (*(float *)(param_1 + 0x7f4) != fVar4) {
      *(float *)(param_1 + 0x7f4) = fVar4;
      fVar7 = DAT_101e9ae70;
      if ((fVar4 < DAT_101e9ae70) || (fVar7 = DAT_101e9ae74, DAT_101e9ae74 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7f4) = fVar4;
      }
      *(float *)(param_1 + 0x7f4) = fVar4;
      fVar4 = (float)_cosf((fVar4 * 6.2831855) / (float)*(int *)(param_1 + 0x800));
      fVar7 = fVar4 * -0.70794576 + 1.0;
      fVar7 = fVar7 + fVar7;
      fVar8 = fVar7 * fVar7 + -0.3411827;
      fVar4 = 0.0;
      if (0.0 <= fVar8) {
        fVar4 = fVar8;
      }
      fVar7 = (SQRT(fVar4) - fVar7) / -0.5841085;
      fVar4 = 0.0;
      if ((0.0 <= fVar7) && (fVar4 = fVar7, 0.99 < fVar7)) {
        fVar4 = 0.99;
      }
      *(float *)(param_1 + 0x1e8) = 1.0 - fVar4;
    }
    if (*(float *)(param_1 + 0x7f8) != *(float *)(param_1 + 0x830)) {
      *(float *)(param_1 + 0x7f8) = *(float *)(param_1 + 0x830);
      FUN_1005c7844(param_1,lVar2);
    }
    fVar4 = *(float *)(param_1 + 0x834);
    if (*(float *)(param_1 + 0x7fc) != fVar4) {
      *(float *)(param_1 + 0x7fc) = fVar4;
      fVar7 = DAT_101e9af30;
      if ((fVar4 < DAT_101e9af30) || (fVar7 = DAT_101e9af34, DAT_101e9af34 < fVar4)) {
        fVar4 = fVar7;
        *(float *)(param_1 + 0x7fc) = fVar4;
      }
      *(float *)(param_1 + 0x7fc) = fVar4;
      FUN_1005c7844(param_1,lVar2);
    }
  }
  return 0;
}




undefined8 FUN_1005c7724(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x20);
  fVar1 = DAT_101e9ae10;
  if ((fVar4 < DAT_101e9ae10) || (fVar1 = DAT_101e9ae14, DAT_101e9ae14 < fVar4)) {
    *(float *)(param_2 + 0x20) = fVar1;
    fVar4 = fVar1;
  }
  *(float *)(param_1 + 0x218) = fVar4;
  fVar1 = (float)_tanf((*(float *)(param_2 + 0x1c) * 3.1415927) / (float)*(int *)(param_1 + 0x800));
  fVar4 = (float)_expf(fVar4 * 0.057564627);
  fVar4 = fVar1 / fVar4;
  fVar3 = 1.0 / (fVar4 * (fVar4 + 1.4142135) + 1.0);
  *(float *)(param_1 + 0x204) = (fVar1 * (fVar1 + 1.4142135) + 1.0) * fVar3;
  fVar2 = (fVar1 * fVar1 + -1.0) * fVar3;
  *(float *)(param_1 + 0x20c) = (fVar1 * (fVar1 + -1.4142135) + 1.0) * fVar3;
  *(float *)(param_1 + 0x210) = fVar3 * (fVar4 * fVar4 + -1.0) * -2.0;
  *(float *)(param_1 + 0x208) = fVar2 + fVar2;
  *(float *)(param_1 + 0x214) = -(fVar3 * (fVar4 * (fVar4 + -1.4142135) + 1.0));
  return 0;
}




undefined8 FUN_1005c7844(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *(float *)(param_2 + 0x28);
  fVar4 = DAT_101e9aed0;
  if ((fVar3 < DAT_101e9aed0) || (fVar4 = DAT_101e9aed4, DAT_101e9aed4 < fVar3)) {
    *(float *)(param_2 + 0x28) = fVar4;
    fVar3 = fVar4;
  }
  *(float *)(param_1 + 0x7f8) = fVar3;
  if (*(float *)(param_2 + 0x2c) <= -80.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)_powf(0x41200000,*(float *)(param_2 + 0x2c) / 20.0);
  }
  fVar3 = *(float *)(param_2 + 0x28) / 100.0;
  fVar5 = 1.0;
  fVar7 = 1.0 - fVar3;
  fVar6 = SQRT(2.0 / (fVar3 * fVar3 + fVar7 * fVar7));
  *(float *)(param_1 + 0x474) = fVar4 * fVar7 * fVar6 * 0.35355338;
  iVar1 = *(int *)(param_1 + 0x4b4);
  if (iVar1 < 1) {
    fVar7 = 0.0;
  }
  else {
    lVar2 = 0;
    fVar7 = 0.0;
    do {
      fVar8 = *(float *)(param_1 + 0x3e0 + lVar2 * 4);
      fVar7 = fVar7 + fVar8 * fVar8;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  fVar4 = fVar4 * fVar3 * fVar6;
  fVar7 = fVar7 / (float)iVar1;
  if ((fVar7 == 1.0) || (fVar5 = fVar7 / (1.0 - fVar7) + 1.0, 0.0 < fVar5)) {
    fVar4 = fVar4 / SQRT(fVar5);
  }
  *(float *)(param_1 + 0x478) = fVar4 * 0.35355338;
  return 0;
}




undefined8 FUN_1005c7984(long param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 2000);
    }
    break;
  case 1:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7d4);
    }
    break;
  case 2:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7d8);
    }
    break;
  case 3:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7dc);
    }
    break;
  case 4:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7e0);
    }
    break;
  case 5:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7e4);
    }
    break;
  case 6:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7e8);
    }
    break;
  case 7:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7ec);
    }
    break;
  case 8:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7f0);
    }
    break;
  case 9:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7f4);
    }
    break;
  case 10:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7f8);
    }
    goto joined_r0x0001005c7acc;
  case 0xb:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x7fc);
    }
joined_r0x0001005c7acc:
    if (param_4 == (char *)0x0) {
      return 0;
    }
    pcVar1 = "%d";
    goto LAB_1005c7b0c;
  case 0xc:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x838);
    }
    break;
  default:
    return 0x1f;
  }
  if (param_4 != (char *)0x0) {
    pcVar1 = "%f";
LAB_1005c7b0c:
    _sprintf(param_4,pcVar1);
  }
  return 0;
}




undefined8
FUN_1005c7b58(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  if (fVar2 == 1.0) {
    *param_5 = 0.0;
  }
  else {
    fVar4 = fVar2 * fVar2 + -1.0;
    fVar1 = (float)_cosf((param_2 * 6.2831855) / param_3);
    fVar1 = 1.0 - fVar2 * fVar2 * fVar1;
    fVar1 = fVar1 + fVar1;
    fVar3 = fVar1 * fVar1 + fVar4 * fVar4 * -4.0;
    fVar2 = 0.0;
    if (0.0 <= fVar3) {
      fVar2 = fVar3;
    }
    fVar2 = (SQRT(fVar2) - fVar1) / (fVar4 + fVar4);
    *param_5 = fVar2;
    if (0.0 <= fVar2) {
      if (0.99 < fVar2) {
        *param_5 = 0.99;
      }
    }
    else {
      *param_5 = 0.0;
    }
  }
  return 0;
}




undefined8
FUN_1005c7c30(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)_tanf((param_2 * 3.1415927) / param_3);
  fVar2 = (float)_expf(param_1 * 0.057564627);
  fVar2 = fVar1 / fVar2;
  fVar4 = 1.0 / (fVar2 * (fVar2 + 1.4142135) + 1.0);
  *param_5 = (fVar1 * (fVar1 + 1.4142135) + 1.0) * fVar4;
  fVar3 = (fVar1 * fVar1 + -1.0) * fVar4;
  *param_6 = fVar3 + fVar3;
  *param_7 = (fVar1 * (fVar1 + -1.4142135) + 1.0) * fVar4;
  *param_8 = fVar4 * (fVar2 * fVar2 + -1.0) * -2.0;
  *param_9 = -(fVar4 * (fVar2 * (fVar2 + -1.4142135) + 1.0));
  return 0;
}




undefined8
FUN_1005c7d38(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)_tanf(((param_3 * 0.5 - param_2) * 3.1415927) / param_3);
  fVar2 = (float)_expf(param_1 * 0.057564627);
  fVar2 = fVar1 / fVar2;
  fVar3 = 1.0 / (fVar2 * (fVar2 + 1.4142135) + 1.0);
  *param_5 = (fVar1 * (fVar1 + 1.4142135) + 1.0) * fVar3;
  *param_7 = (fVar1 * (fVar1 + -1.4142135) + 1.0) * fVar3;
  fVar4 = fVar2 * fVar2 + -1.0;
  *param_9 = -(fVar3 * (fVar2 * (fVar2 + -1.4142135) + 1.0));
  *param_6 = (fVar1 * fVar1 + -1.0) * fVar3 * -2.0;
  *param_8 = fVar3 * (fVar4 + fVar4);
  return 0;
}




undefined8 FUN_1005c7e4c(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x18) * 0.01;
  fVar2 = fVar1 * fVar1 * fVar1 * 0.9 + 0.1;
  fVar1 = 0.1;
  if ((0.1 <= fVar2) && (fVar1 = fVar2, 1.0 < fVar2)) {
    fVar1 = 1.0;
  }
  FUN_100557cec(fVar1 * 0.061,0x3fa8f5c3,0x3ac49ba6,0x3fbc28f6,(float)*(int *)(param_1 + 0x800),
                param_1 + 0x1c8);
  FUN_1005c69d0(param_1,param_2);
  return 0;
}




void FUN_1005c7efc(undefined8 *param_1)

{
  FUN_1005c62ac(*param_1);
  return;
}




undefined8 FUN_1005c7f04(long *param_1)

{
  FUN_100558388(*param_1 + 0x1c8);
  return 0;
}




undefined8 FUN_1005c7f24(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1 + 0x1c8;
  iVar2 = FUN_100558748(lVar1,*(undefined4 *)(*(long *)(*param_1 + 0x90) + 0x710));
  if (iVar2 == 0) {
    FUN_1005587fc(lVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x26;
  }
  return uVar3;
}




undefined8 FUN_1005c7f6c(long *param_1,int param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *param_1;
  if (param_2 == 0) {
    if (*(float *)(lVar2 + 0x7fc) <= -80.0) {
      uVar3 = *(uint *)(lVar2 + 0x804);
    }
    else {
      uVar3 = (uint)((*(float *)(lVar2 + 0x7fc) + 100.0) * *(float *)(lVar2 + 2000) * 1.6666667e-05
                    * (float)*(int *)(lVar2 + 0x800));
      *(uint *)(lVar2 + 0x804) = uVar3;
    }
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0x804);
    if (uVar3 == 0) {
      return 0xb;
    }
  }
  iVar1 = uVar3 - param_3;
  if (uVar3 < param_3 || iVar1 == 0) {
    iVar1 = 0;
  }
  *(int *)(lVar2 + 0x804) = iVar1;
  return 0;
}




undefined8
FUN_1005c7ff8(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x804) == 0) {
    iVar2 = (int)param_5;
    if (0 < iVar2) {
      uVar5 = 0;
      do {
        uVar4 = (uint)uVar5;
        uVar1 = uVar4;
        while (uVar1 < (uint)(iVar2 * (int)param_4)) {
          *(float *)(param_3 + uVar5 * 4) =
               *(float *)(param_2 + uVar5 * 4) * *(float *)(lVar3 + 0x83c);
          uVar1 = (int)uVar5 + iVar2;
          uVar5 = (ulong)uVar1;
        }
        uVar5 = (ulong)(uVar4 + 1);
      } while (uVar4 != iVar2 - 1U);
    }
  }
  else {
    FUN_100558880((float)*(int *)(lVar3 + 0x800),*(undefined4 *)(lVar3 + 0x83c),lVar3 + 0x1c8,
                  param_2,param_3,param_5,param_4);
  }
  return 0;
}




undefined8 FUN_1005c8088(float param_1,long *param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_48 [2];
  long local_40;
  
  if (param_3 < 0xd) {
    lVar2 = *param_2;
    switch(param_3) {
    case 0:
      *(float *)(lVar2 + 0x808) = param_1;
      break;
    case 1:
      *(float *)(lVar2 + 0x80c) = param_1;
      break;
    case 2:
      *(float *)(lVar2 + 0x810) = param_1;
      break;
    case 3:
      *(float *)(lVar2 + 0x814) = param_1;
      break;
    case 4:
      *(float *)(lVar2 + 0x818) = param_1;
      break;
    case 5:
      *(float *)(lVar2 + 0x81c) = param_1;
      break;
    case 6:
      *(float *)(lVar2 + 0x820) = param_1;
      break;
    case 7:
      *(float *)(lVar2 + 0x824) = param_1;
      break;
    case 8:
      *(float *)(lVar2 + 0x828) = param_1;
      break;
    case 9:
      *(float *)(lVar2 + 0x82c) = param_1;
      break;
    case 10:
      *(float *)(lVar2 + 0x830) = param_1;
      break;
    case 0xb:
      *(float *)(lVar2 + 0x834) = param_1;
      break;
    case 0xc:
      *(float *)(lVar2 + 0x838) = param_1;
      if (param_1 <= -80.0) {
        uVar3 = 0;
      }
      else {
        uVar3 = _powf(0x41200000,param_1 / 20.0);
      }
      *(undefined4 *)(lVar2 + 0x83c) = uVar3;
    }
    local_48[0] = 8;
    local_40 = lVar2;
    uVar1 = FUN_10056be4c(*(undefined8 *)(lVar2 + 0x90),local_48,1);
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




void FUN_1005c81b4(undefined8 *param_1)

{
  FUN_1005c7984(*param_1);
  return;
}




undefined8 FUN_1005c81bc(long *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x1cc) = 0;
  iVar2 = *(int *)(*(long *)(lVar1 + 0x90) + 0x708);
  *(undefined4 *)(lVar1 + 0x1c8) = 0;
  *(float *)(lVar1 + 0x1e4) = (float)iVar2;
  *(undefined4 *)(lVar1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x1e8) = 2;
  return 0;
}




undefined8 FUN_1005c81f4(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x86) = 0;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0x100000;
  *(undefined4 *)((long)param_1 + 0x24) = 0x100000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  param_1[6] = 0;
  return 0;
}




void FUN_1005c8240(undefined8 *param_1)

{
  FUN_1005c82d0(*param_1);
  return;
}




undefined8 FUN_1005c8248(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 0x1d8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x3c);
    if (uVar1 <= param_2) {
      param_2 = uVar1;
    }
    *(uint *)(*param_1 + 0x1f8) = param_2;
    return 0;
  }
  return 0x1f;
}




void FUN_1005c8274(void)

{
  DAT_101dbc0b0 = &DAT_10186d330;
  DAT_101dbc0c8 = 1000;
  DAT_101dbc0c0 = 0x200;
  return;
}




undefined8 FUN_1005c829c(long param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x708);
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(float *)(param_1 + 0x1e4) = (float)iVar1;
  *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 2;
  return 0;
}




undefined8
FUN_1005c82d0(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
             int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  void *pvVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  float fVar19;
  ulong local_80;
  ulong local_70;
  ulong local_68;
  
  if (param_6 == 1) {
    if (param_4 != 0) {
      lVar7 = *(long *)(param_1 + 0x1d8);
      **(undefined4 **)(param_4 + 8) = *(undefined4 *)(lVar7 + 0x60);
      iVar18 = *(int *)(lVar7 + 0x60);
      uVar3 = iVar18 - 1;
      if (uVar3 < 8 && ((long)(int)uVar3 & 0xfffffffffffffffbU) != 2) {
        *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(&DAT_10115f7c0 + (long)(int)uVar3 * 4);
      }
      iVar16 = *(int *)(lVar7 + 0x6c);
      if (iVar16 == 0) {
        if (iVar18 < 2) {
          iVar16 = 0;
        }
        else if (iVar18 < 9) {
          iVar16 = *(int *)((long)&PTR___mh_execute_header_10115f790 + (long)iVar18 * 4);
        }
        else {
          iVar16 = -1;
        }
      }
      **(int **)(param_4 + 0x10) = iVar16;
    }
    uVar4 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x29) != '\0')) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(int *)(param_1 + 0x1e0) + 1U < 2) {
        if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) {
          iVar18 = *(int *)(*(long *)(param_1 + 0x90) + 0x15d10) + 1;
        }
        else {
          iVar18 = 0;
        }
        *(int *)(param_1 + 0x1e0) = iVar18;
        uVar4 = 0xb;
      }
      else {
        uVar4 = 0xb;
      }
    }
  }
  else {
    pvVar14 = (void *)**(undefined8 **)(param_4 + 0x18);
    if (*(int *)(param_1 + 0x1f8) != -1) {
      *(int *)(param_1 + 500) = *(int *)(param_1 + 0x1f8);
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
    }
    lVar7 = *(long *)(param_1 + 0x1d8);
    if (lVar7 == 0) {
      uVar4 = 0x1f;
    }
    else {
      lVar15 = *(long *)(lVar7 + 0x158);
      if (lVar15 == 0) {
        _bzero(pvVar14,(param_2 & 0xffffffff) * (long)*(int *)(lVar7 + 0x60) * 4);
        if (*(int *)(param_1 + 0x1e0) + 1U < 2) {
          if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) {
LAB_1005c87c0:
            iVar18 = *(int *)(*(long *)(param_1 + 0x90) + 0x15d10) + 1;
          }
          else {
            iVar18 = 0;
          }
LAB_1005c884c:
          uVar4 = 0;
          *(int *)(param_1 + 0x1e0) = iVar18;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar3 = *(uint *)(lVar7 + 0x3c);
        fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x24));
        fVar19 = *(float *)(param_1 + 0x1cc) * fVar19 * 9.536743e-07;
        uVar17 = (ulong)((fVar19 / *(float *)(param_1 + 0x1e4)) * 4.2949673e+09);
        uVar5 = 0xffffffff;
        local_80 = 0xffffffff;
        if (0x100 < (long)uVar17) {
          local_80 = (ulong)((*(float *)(param_1 + 0x1e4) / fVar19) * 4.2949673e+09);
          uVar5 = local_80 >> 0x20;
          local_80 = local_80 & 0xffffffff;
        }
        if ((int)param_2 == 0) {
          uVar4 = 0;
        }
        else {
          iVar18 = 0;
          do {
            bVar1 = false;
            lVar9 = *(long *)(param_1 + 0x1d0);
            uVar11 = *(uint *)(lVar9 + 0x58);
            local_70 = *(ulong *)(param_1 + 0x1f0);
            iVar16 = (int)-uVar17;
            local_68 = -uVar17;
            if (*(int *)(param_1 + 0x1c8) != 1) {
              iVar16 = (int)uVar17;
              local_68 = uVar17;
            }
            uVar13 = (uint)param_2;
            if (0x100 < (long)uVar17) {
              uVar6 = (uint)(local_70 >> 0x20);
              if (*(int *)(param_1 + 0x1c8) == 1) {
                uVar8 = uVar6;
                if (((uVar11 & 6) == 0) || (*(int *)(lVar9 + 0x6c) == 0)) {
                  uVar10 = 0;
                }
                else {
                  uVar2 = *(uint *)(lVar9 + 0x70);
                  uVar12 = local_70 - ((ulong)uVar2 << 0x20);
                  if (uVar2 <= uVar6) {
                    uVar8 = (uint)(uVar12 >> 0x20);
                  }
                  uVar10 = 0;
                  if (uVar2 <= uVar6) {
                    uVar10 = uVar12;
                  }
                }
                uVar12 = local_70;
                uVar2 = uVar6;
                if (uVar8 <= uVar3) {
                  uVar12 = uVar10;
                  uVar2 = uVar8;
                }
              }
              else {
                if (((uVar11 & 6) == 0) || (*(int *)(lVar9 + 0x6c) == 0)) {
                  uVar2 = *(uint *)(*(long *)(param_1 + 0x1d8) + 0x3c);
                }
                else {
                  uVar2 = *(int *)(lVar9 + 0x74) + *(int *)(lVar9 + 0x70);
                }
                uVar12 = ((ulong)uVar2 << 0x20) - local_70;
                if ((ulong)uVar2 << 0x20 < local_70 || uVar12 == 0) {
                  uVar12 = 0;
                }
                uVar8 = (uint)(uVar12 >> 0x20);
                uVar2 = uVar3 - uVar6;
                if (uVar8 + uVar6 <= uVar3) {
                  uVar2 = uVar8;
                }
              }
              uVar12 = (ulong)uVar2 * (local_80 | uVar5 << 0x20) +
                       (uVar12 & 0xffffffff) * (long)(int)uVar5 +
                       ((uVar12 & 0xffffffff) * local_80 >> 0x20) + 0xffffffff;
              bVar1 = uVar12 >> 0x20 <= (param_2 & 0xffffffff);
              uVar6 = uVar13;
              if (bVar1) {
                uVar6 = (uint)(uVar12 >> 0x20);
              }
              param_2 = (ulong)uVar6;
            }
            if (((uVar17 & 0xffffffff00000000) == 0x100000000) && (iVar16 == 0)) {
switchD_1005c8568_caseD_1:
              FUN_1005c351c((void *)((long)pvVar14 +
                                    (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x1d8) + 0x60) *
                                                 iVar18) * 4),param_2,lVar15,
                            *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x28),&local_70,&local_68);
            }
            else {
              switch(*(undefined4 *)(param_1 + 0x1e8)) {
              case 1:
                goto switchD_1005c8568_caseD_1;
              default:
                FUN_10063b95c((void *)((long)pvVar14 +
                                      (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x1d8) + 0x60) *
                                                   iVar18) * 4),param_2,lVar15,
                              *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x28),&local_70,&local_68
                             );
                break;
              case 3:
                FUN_1005c2284((void *)((long)pvVar14 +
                                      (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x1d8) + 0x60) *
                                                   iVar18) * 4),param_2,lVar15,
                              *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x28),&local_70,&local_68
                             );
                break;
              case 4:
                FUN_1005c3d08((void *)((long)pvVar14 +
                                      (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x1d8) + 0x60) *
                                                   iVar18) * 4),param_2,lVar15,
                              *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x28),&local_70,&local_68
                             );
              }
            }
            *(ulong *)(param_1 + 0x1f0) = local_70;
            uVar6 = (uint)param_2;
            param_2 = (ulong)(uVar13 - uVar6);
            iVar18 = uVar6 + iVar18;
            if (bVar1) {
              if (((uVar11 >> 2 & 1) == 0) ||
                 (lVar9 = *(long *)(param_1 + 0x1d0), *(int *)(lVar9 + 0x6c) == 0)) {
                if ((uVar11 >> 1 & 1) != 0) {
                  lVar9 = *(long *)(param_1 + 0x1d0);
                  iVar16 = *(int *)(lVar9 + 0x6c);
                  if (iVar16 != 0) {
                    uVar2 = *(uint *)(lVar9 + 0x74);
                    uVar11 = (uint)(local_70 >> 0x20);
                    if (*(int *)(param_1 + 0x1c8) == 1) {
                      *(uint *)(param_1 + 500) = uVar11 + uVar2;
                      if (uVar11 + uVar2 < *(uint *)(lVar9 + 0x70)) {
                        uVar11 = uVar2 + uVar11;
                        do {
                          uVar11 = uVar11 + uVar2;
                        } while (uVar11 < *(uint *)(lVar9 + 0x70));
                        *(uint *)(param_1 + 500) = uVar11;
                      }
                      if (0 < iVar16) {
                        *(int *)(lVar9 + 0x6c) = iVar16 + -1;
                      }
                    }
                    else {
                      uVar8 = 0;
                      if (uVar2 <= uVar11) {
                        uVar8 = uVar11 - uVar2;
                      }
                      *(uint *)(param_1 + 500) = uVar8;
                      uVar11 = uVar2 + *(int *)(lVar9 + 0x70);
                      if (uVar11 <= uVar8) {
                        do {
                          uVar8 = uVar8 - uVar2;
                        } while (uVar11 <= uVar8);
                        *(uint *)(param_1 + 500) = uVar8;
                      }
                      if (0 < iVar16) {
                        *(int *)(lVar9 + 0x6c) = iVar16 + -1;
                      }
                    }
                    goto LAB_1005c8714;
                  }
                }
                *(undefined4 *)(param_1 + 500) = *(undefined4 *)(lVar7 + 0x3c);
                *(undefined4 *)(param_1 + 0x1f0) = 0;
                iVar16 = *(int *)(*(long *)(param_1 + 0x1d8) + 0x60);
                _bzero((void *)((long)pvVar14 + (ulong)(uint)(iVar16 * iVar18) * 4),
                       (ulong)(iVar16 * (uVar13 - uVar6)) << 2);
                if (1 < *(int *)(param_1 + 0x1e0) + 1U) {
                  return 0;
                }
                if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) goto LAB_1005c87c0;
                iVar18 = 0;
                goto LAB_1005c884c;
              }
              uVar11 = *(uint *)(lVar9 + 0x70);
              bVar1 = *(int *)(param_1 + 0x1c8) == 0;
              if (bVar1) {
                uVar11 = *(int *)(lVar9 + 0x74) + uVar11;
              }
              lVar9 = ((ulong)uVar11 << 0x21) - local_70;
              *(long *)(param_1 + 0x1f0) = lVar9;
              *(uint *)(param_1 + 0x1c8) = (uint)bVar1;
              if (lVar9 < 0) {
                *(undefined4 *)(param_1 + 500) = 0;
              }
            }
LAB_1005c8714:
          } while (uVar13 != uVar6);
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}




undefined8 FUN_1005c8884(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    iVar1 = -1;
  }
  else {
    if (param_3 != 0) {
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 != 0) {
        FUN_10057097c(lVar2,3);
        *(undefined4 *)(param_1 + 0x1e0) = 0;
        FUN_100570990(lVar2,3);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      return 0;
    }
    if (1 < *(int *)(param_1 + 0x1e0) + 1U) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x15d10) + 1;
    }
    else {
      iVar1 = 0;
    }
  }
  *(int *)(param_1 + 0x1e0) = iVar1;
  return 0;
}




undefined8 FUN_1005c891c(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x1d8) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x1d8) + 0x3c);
    if (uVar1 <= param_2) {
      param_2 = uVar1;
    }
    *(uint *)(param_1 + 0x1f8) = param_2;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005c894c(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x86) = 0;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0x100000;
  *(undefined4 *)((long)param_1 + 0x24) = 0x100000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  param_1[6] = 0;
  return 0;
}




undefined8 FUN_1005c8994(float param_1,long param_2)

{
  if (0.0 <= param_1) {
    if ((*(long *)(param_2 + 0x1d8) != 0) &&
       ((*(byte *)(*(long *)(param_2 + 0x1d0) + 0x58) >> 2 & 1) == 0)) {
      *(undefined4 *)(param_2 + 0x1c8) = 0;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c8) = 1;
    param_1 = -param_1;
  }
  *(float *)(param_2 + 0x1cc) = param_1;
  return 0;
}




undefined8 FUN_1005c89d0(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1cc);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005c89f4(long param_1,undefined8 param_2)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) {
    bVar1 = *(uint *)(param_1 + 0x1e0) <= *(uint *)(*(long *)(param_1 + 0x90) + 0x15d10);
  }
  else {
    bVar1 = *(uint *)(param_1 + 0x1e0) == 0;
  }
  *(bool *)param_2 = bVar1;
  return 0;
}




undefined8 FUN_1005c8a30(long param_1,long param_2)

{
  long lVar1;
  
  *(long *)(param_1 + 0x1d0) = param_2;
  lVar1 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x1d8) = lVar1;
  FUN_1005c9948(param_1,0,*(undefined4 *)(lVar1 + 0x60),0);
  return 0;
}




undefined8
FUN_1005c8a60(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             int param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int local_44;
  
  lVar5 = *param_1;
  if (param_3 == 0) {
    local_44 = 0;
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 0x20);
    local_44 = **(int **)(param_3 + 8);
    iVar4 = **(int **)(param_3 + 0x10);
  }
  if (param_6 == 1) {
    pcVar2 = *(code **)(*(long *)(lVar5 + 0xd0) + 0xb0);
    if (pcVar2 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*pcVar2)(param_1,param_5,param_2,iVar4,local_44,iVar3);
    }
    if (param_4 != 0) {
      if (*(int **)(param_4 + 8) != (int *)0x0) {
        if (*(int *)(lVar5 + 0x100) != 0) {
          local_44 = *(int *)(lVar5 + 0x100);
        }
        **(int **)(param_4 + 8) = local_44;
      }
      if (*(int **)(param_4 + 0x10) != (int *)0x0) {
        if (*(int *)(lVar5 + 0xa8) != 0) {
          iVar4 = *(int *)(lVar5 + 0xa8);
        }
        **(int **)(param_4 + 0x10) = iVar4;
      }
      if (*(int *)(lVar5 + 0xac) != 0) {
        iVar3 = *(int *)(lVar5 + 0xac);
      }
      *(int *)(param_4 + 0x20) = iVar3;
    }
  }
  else {
    pcVar2 = *(code **)(*(long *)(lVar5 + 0xd0) + 0x48);
    if (pcVar2 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*pcVar2)(param_1,**(undefined8 **)(param_3 + 0x18),**(undefined8 **)(param_4 + 0x18),
                        param_2,local_44,&local_44);
      **(int **)(param_4 + 8) = local_44;
    }
  }
  return uVar1;
}




undefined8
FUN_1005c8b7c(long *param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
             int param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  param_1[1] = param_2;
  iVar1 = *(int *)(param_2 + 0x710);
  puVar5 = (undefined8 *)*param_1;
  lVar3 = param_2;
  if (puVar5 != (undefined8 *)0x0) {
    iVar7 = *(int *)(puVar5 + 1);
    if (0 < iVar7) {
      *(int *)(puVar5 + 1) = iVar7 + -1;
      iVar7 = iVar7 + -1;
    }
    if (iVar7 == 0) {
      if (puVar5[3] == 0) {
        *puVar5 = *(undefined8 *)(param_2 + 0x14818);
        *(undefined8 **)(param_2 + 0x14818) = puVar5;
      }
      else {
        FUN_1005d7f1c(param_2 + 0x14f68,puVar5[3],"",0);
        lVar3 = param_1[1];
      }
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  uVar2 = iVar1 * param_3;
  if (*(int *)(lVar3 + 84000) < param_3) {
    lVar3 = FUN_1005d7708(lVar3 + 0x14f68,uVar2 * 4 + 0x30,"",0,0,0);
    if (lVar3 == 0) {
      return 0x26;
    }
    puVar6 = (undefined8 *)(lVar3 + 0xfU & 0xfffffffffffffff0);
    *param_1 = (long)puVar6;
    puVar6[2] = puVar6 + 4;
    puVar6[3] = lVar3;
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = 0;
  }
  else {
    puVar5 = (undefined8 *)(param_2 + 0x14818);
    puVar6 = (undefined8 *)*puVar5;
    if (puVar6 == (undefined8 *)0x0) {
      uVar4 = FUN_10056b5f8();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      puVar6 = (undefined8 *)*puVar5;
    }
    *param_1 = (long)puVar6;
    *puVar5 = *puVar6;
  }
  *(int *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 3) = param_4;
  if (param_6 != 0) {
    _bzero((void *)puVar6[2],-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
    puVar6 = (undefined8 *)*param_1;
  }
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
  return 0;
}




undefined8 FUN_1005c8d10(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar1 + 1);
    if (0 < iVar2) {
      *(int *)(puVar1 + 1) = iVar2 + -1;
      iVar2 = iVar2 + -1;
    }
    if (iVar2 == 0) {
      lVar3 = param_1[1];
      if (puVar1[3] == 0) {
        *puVar1 = *(undefined8 *)(lVar3 + 0x14818);
        *(undefined8 **)(lVar3 + 0x14818) = puVar1;
      }
      else {
        FUN_1005d7f1c(lVar3 + 0x14f68,puVar1[3],"",0);
      }
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  return 0;
}




undefined8 FUN_1005c8da0(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined8 *)(*param_1 + 0x10);
  }
  return 0;
}




long * FUN_1005c8db8(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar1 + 1);
    if (0 < iVar2) {
      *(int *)(puVar1 + 1) = iVar2 + -1;
      iVar2 = iVar2 + -1;
    }
    if (iVar2 == 0) {
      lVar3 = param_1[1];
      if (puVar1[3] == 0) {
        *puVar1 = *(undefined8 *)(lVar3 + 0x14818);
        *(undefined8 **)(lVar3 + 0x14818) = puVar1;
      }
      else {
        FUN_1005d7f1c(lVar3 + 0x14f68,puVar1[3],"",0);
      }
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  return param_1;
}




long * FUN_1005c8e48(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar1 + 1);
    if (0 < iVar2) {
      *(int *)(puVar1 + 1) = iVar2 + -1;
      iVar2 = iVar2 + -1;
    }
    if (iVar2 == 0) {
      lVar3 = param_1[1];
      if (puVar1[3] == 0) {
        *puVar1 = *(undefined8 *)(lVar3 + 0x14818);
        *(undefined8 **)(lVar3 + 0x14818) = puVar1;
      }
      else {
        FUN_1005d7f1c(lVar3 + 0x14f68,puVar1[3],"",0);
      }
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  return param_1;
}




undefined8 FUN_1005c8ed8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar1 + 1);
    if (0 < iVar2) {
      *(int *)(puVar1 + 1) = iVar2 + -1;
      iVar2 = iVar2 + -1;
    }
    if (iVar2 == 0) {
      lVar3 = param_2[1];
      if (puVar1[3] == 0) {
        *puVar1 = *(undefined8 *)(lVar3 + 0x14818);
        *(undefined8 **)(lVar3 + 0x14818) = puVar1;
      }
      else {
        FUN_1005d7f1c(lVar3 + 0x14f68,puVar1[3],"",0);
      }
    }
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = -0x100000000;
  }
  *param_2 = *param_1;
  *(int *)(param_2 + 2) = (int)param_1[2];
  param_2[1] = param_1[1];
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *(int *)(param_2 + 3) = (int)param_1[3];
  *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  return 0;
}




undefined8 FUN_1005c8fac(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar1 + 1);
    if (0 < iVar2) {
      *(int *)(puVar1 + 1) = iVar2 + -1;
      iVar2 = iVar2 + -1;
    }
    if (iVar2 == 0) {
      lVar3 = param_2[1];
      if (puVar1[3] == 0) {
        *puVar1 = *(undefined8 *)(lVar3 + 0x14818);
        *(undefined8 **)(lVar3 + 0x14818) = puVar1;
      }
      else {
        FUN_1005d7f1c(lVar3 + 0x14f68,puVar1[3],"",0);
      }
    }
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = -0x100000000;
  }
  *param_2 = *param_1;
  *(int *)(param_2 + 2) = (int)param_1[2];
  param_2[1] = param_1[1];
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *(int *)(param_2 + 3) = (int)param_1[3];
  *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return 0;
}




undefined8 FUN_1005c9078(long param_1,long param_2,ulong param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long local_48;
  
  if (param_1 == param_2) {
LAB_1005c9134:
    uVar3 = 0;
  }
  else {
    if ((param_3 & 1) == 0) {
      sVar1 = *(short *)(param_1 + 0x170);
    }
    else {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
      sVar1 = *(short *)(param_1 + 0x170);
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    if (sVar1 < 1) {
      uVar3 = 0x1f;
    }
    else {
      iVar4 = 0;
      do {
        uVar3 = FUN_1005c91e4(param_1,iVar4,0,&local_48,0,param_3);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar2 = FUN_1005c9078(*(undefined8 *)(local_48 + 0x58),param_2,param_3);
        if (iVar2 == 0) goto LAB_1005c9134;
        iVar4 = iVar4 + 1;
      } while (iVar4 < sVar1);
      uVar3 = 0x1f;
    }
  }
  return uVar3;
}




undefined8 FUN_1005c9158(long param_1,int *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_4 != 0) {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
    }
    if (param_3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 0x174);
    }
    *param_2 = *(short *)(param_1 + 0x170) - iVar2;
    if (param_4 != 0) {
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined4
FUN_1005c91e4(long param_1,int param_2,undefined8 *param_3,long *param_4,int param_5,uint param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x90);
  if (param_6 == 0) {
    bVar1 = false;
  }
  else {
    FUN_10056ba8c(lVar7,1,0);
    if (lVar7 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_10057097c(lVar7,1);
    }
  }
  if (param_5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 0x174);
  }
  if (param_2 < *(short *)(param_1 + 0x170) - iVar4) {
    plVar6 = *(long **)(param_1 + 0x40);
    if (plVar6 == (long *)(param_1 + 0x40)) {
      lVar2 = 0;
      uVar5 = 0x1c;
    }
    else {
      iVar4 = 0;
      lVar2 = plVar6[2];
      while( true ) {
        if (iVar4 < param_2) {
          plVar6 = (long *)*plVar6;
          lVar2 = plVar6[2];
          if (param_5 != 0) goto LAB_1005c92c4;
          goto LAB_1005c9294;
        }
        if ((param_5 == 0) || ((*(byte *)(lVar2 + 0x78) & 1) == 0)) break;
        plVar6 = (long *)*plVar6;
        lVar2 = plVar6[2];
LAB_1005c92c4:
        if ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
LAB_1005c9294:
          iVar4 = iVar4 + 1;
        }
      }
      uVar5 = 9;
      if (lVar2 != 0) {
        uVar5 = 0;
      }
    }
  }
  else {
    lVar2 = 0;
    uVar5 = 9;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x58);
    }
    *param_3 = uVar3;
  }
  if ((((lVar7 != 0) && (((param_6 ^ 1) & 1) == 0)) || (lVar7 != 0)) && (bVar1)) {
    FUN_100570990(lVar7,1);
  }
  return uVar5;
}




undefined8 FUN_1005c934c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x1f;
  }
  *(undefined8 *)(param_1 + 0x100) = param_2[6];
  uVar2 = param_2[4];
  *(undefined8 *)(param_1 + 0xf8) = param_2[5];
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0xe8) = param_2[3];
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0xd8) = param_2[1];
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(long *)(param_1 + 0x58) = param_1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  uVar1 = *(ushort *)(param_1 + 0x3c) & 0xfef7;
  if (*(long *)(param_1 + 0xf0) != 0) {
    uVar1 = uVar1 | 8;
  }
  *(ushort *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  if ((*(byte *)(*(long *)(param_1 + 0x90) + 0x4a) >> 5 & 1) != 0) {
    FUN_1005c9498(param_1,0,1);
  }
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 == 0) {
    lVar3 = 0;
    goto LAB_1005c9430;
  }
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar3 + 0xb8);
  pcVar4 = *(code **)(lVar3 + 0x50);
  if (pcVar4 == (code *)0x0) {
    if (*(long *)(lVar3 + 0x48) != 0) {
      pcVar4 = FUN_1005c8a60;
      goto LAB_1005c9400;
    }
  }
  else {
LAB_1005c9400:
    *(code **)(param_1 + 0x108) = pcVar4;
  }
  pcVar4 = *(code **)(lVar3 + 0x30);
  if (pcVar4 != (code *)0x0) {
    *(long *)(param_1 + 0x98) = param_1;
    uVar2 = (*pcVar4)(param_1 + 0x98);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = *(long *)(param_1 + 0xd0);
  }
LAB_1005c9430:
  lVar5 = 0;
  while( true ) {
    if (lVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x60);
    }
    if (iVar6 <= lVar5) break;
    piVar7 = *(int **)(*(long *)(lVar3 + 0x68) + lVar5 * 8);
    if ((*piVar7 == 3) && (piVar7[0xc] == -3)) {
      *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 0x10;
      return 0;
    }
    lVar5 = lVar5 + 1;
  }
  return 0;
}




undefined8 FUN_1005c9498(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x90);
  pvVar2 = *(void **)(param_1 + 0x1c0);
  if (((pvVar2 == (void *)0x0) && ((param_2 & 1) == 0)) && (param_3 == 0)) {
    return 0;
  }
  if (lVar6 != 0) {
    FUN_10057097c(lVar6,6);
    pvVar2 = *(void **)(param_1 + 0x1c0);
  }
  if (pvVar2 == (void *)0x0) {
    bVar1 = false;
LAB_1005c9524:
    if ((!bVar1) && ((((param_2 | param_3) ^ 1) & 1) == 0)) {
      uVar3 = FUN_1005cfc1c(param_1);
      if ((int)uVar3 != 0) goto LAB_1005c961c;
      bVar1 = false;
      pvVar2 = *(void **)(param_1 + 0x1c0);
    }
    if (pvVar2 != (void *)0x0) goto LAB_1005c9550;
  }
  else {
    if (*(char *)((long)pvVar2 + 0x212) == '\0') {
      bVar1 = *(char *)((long)pvVar2 + 0x426) != '\0';
      goto LAB_1005c9524;
    }
    bVar1 = true;
LAB_1005c9550:
    if (param_2 == 0) {
      if (*(char *)((long)pvVar2 + 0x212) != '\0') {
        _bzero(pvVar2,0x214);
        *(int *)(*(long *)(param_1 + 0x90) + 0x15668) =
             *(int *)(*(long *)(param_1 + 0x90) + 0x15668) + -1;
        pvVar2 = *(void **)(param_1 + 0x1c0);
      }
    }
    else if (*(char *)((long)pvVar2 + 0x212) == '\0') {
      *(undefined1 *)((long)pvVar2 + 0x212) = 1;
      *(int *)(*(long *)(param_1 + 0x90) + 0x15668) =
           *(int *)(*(long *)(param_1 + 0x90) + 0x15668) + 1;
    }
    if (param_3 == 0) {
      if (*(char *)((long)pvVar2 + 0x426) != '\0') {
        _bzero((void *)((long)pvVar2 + 0x214),0x214);
        lVar4 = *(long *)(param_1 + 0x90);
        iVar5 = *(int *)(lVar4 + 0x15668) + -1;
        goto LAB_1005c95f8;
      }
    }
    else if (*(char *)((long)pvVar2 + 0x426) == '\0') {
      *(undefined1 *)((long)pvVar2 + 0x426) = 1;
      lVar4 = *(long *)(param_1 + 0x90);
      iVar5 = *(int *)(lVar4 + 0x15668) + 1;
LAB_1005c95f8:
      *(int *)(lVar4 + 0x15668) = iVar5;
    }
  }
  if (((((param_2 | param_3) & 1) != 0) || ((bool)(bVar1 ^ 1))) ||
     (uVar3 = FUN_1005cdba0(param_1), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
LAB_1005c961c:
  if ((lVar6 != 0) && (lVar6 != 0)) {
    FUN_100570990(lVar6,6);
  }
  return uVar3;
}




undefined8 FUN_1005c964c(long param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  lVar1 = 0;
  lVar2 = *(long *)(param_1 + 0xd0);
  while( true ) {
    if (lVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar2 + 0x60);
    }
    if (iVar3 <= lVar1) break;
    piVar4 = *(int **)(*(long *)(lVar2 + 0x68) + lVar1 * 8);
    if ((*piVar4 == 3) && (piVar4[0xc] == param_2)) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (int)lVar1;
        return 0;
      }
      return 0;
    }
    lVar1 = lVar1 + 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xffffffff;
  }
  return 0x1f;
}




undefined4
FUN_1005c96c0(long param_1,int param_2,undefined8 *param_3,long *param_4,int param_5,uint param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x90);
  if (param_6 == 0) {
    bVar1 = false;
  }
  else {
    FUN_10056ba8c(lVar7,1,0);
    if (lVar7 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_10057097c(lVar7,1);
    }
  }
  if (param_5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 0x176);
  }
  if (param_2 < *(short *)(param_1 + 0x172) - iVar4) {
    plVar6 = *(long **)(param_1 + 0x158);
    if (plVar6 == (long *)(param_1 + 0x158)) {
      lVar2 = 0;
      uVar5 = 0x1c;
    }
    else {
      iVar4 = 0;
      lVar2 = plVar6[2];
      while( true ) {
        if (iVar4 < param_2) {
          plVar6 = (long *)*plVar6;
          lVar2 = plVar6[2];
          if (param_5 != 0) goto LAB_1005c97a4;
          goto LAB_1005c9774;
        }
        if ((param_5 == 0) || ((*(byte *)(lVar2 + 0x78) & 1) == 0)) break;
        plVar6 = (long *)*plVar6;
        lVar2 = plVar6[2];
LAB_1005c97a4:
        if ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
LAB_1005c9774:
          iVar4 = iVar4 + 1;
        }
      }
      uVar5 = 9;
      if (lVar2 != 0) {
        uVar5 = 0;
      }
    }
  }
  else {
    lVar2 = 0;
    uVar5 = 9;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
    }
    *param_3 = uVar3;
  }
  if ((((lVar7 != 0) && (((param_6 ^ 1) & 1) == 0)) || (lVar7 != 0)) && (bVar1)) {
    FUN_100570990(lVar7,1);
  }
  return uVar5;
}




undefined8 FUN_1005c982c(long param_1,uint param_2,uint param_3)

{
  if (((param_3 & 1) != 0) && (param_2 != *(byte *)(param_1 + 0x3f))) {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x14828) + 0x30) = 1;
  }
  *(char *)(param_1 + 0x3f) = (char)param_2;
  return 0;
}




undefined8 FUN_1005c986c(long param_1,uint param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 local_48 [2];
  long local_40;
  undefined1 local_38;
  
  uVar2 = *(ushort *)(param_1 + 0x3c);
  if ((param_2 ^ (uVar2 & 0x200) >> 9) == 1) {
    local_38 = (undefined1)param_2;
    if ((uVar2 >> 10 & 1) == 0) {
      local_48[0] = 0x10;
      local_40 = param_1;
      uVar1 = FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_48);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar2 = *(ushort *)(param_1 + 0x3c);
    }
    else {
      *(undefined1 *)(param_1 + 0x3f) = local_38;
    }
    if (param_2 == 0) {
      uVar2 = uVar2 & 0xfdff;
    }
    else {
      uVar2 = uVar2 | 0x200;
    }
    *(ushort *)(param_1 + 0x3c) = uVar2;
  }
  return 0;
}




undefined8 FUN_1005c9900(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x3c);
  if ((uVar2 & 1 ^ param_2) == 1) {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x14828) + 0x30) = 1;
  }
  uVar1 = uVar2 | 1;
  if (param_2 == 0) {
    uVar1 = uVar2 & 0xfffe;
  }
  *(ushort *)(param_1 + 0x3c) = uVar1;
  return 0;
}




undefined8 FUN_1005c9948(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint5 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint5 uVar31;
  undefined1 auVar32 [16];
  
  if (0x20 < param_3) {
    return 0x1f;
  }
  if ((param_2 != 0) && (param_4 == 0 && param_3 == 0)) {
    *(uint *)(param_1 + 0xa8) = param_2;
    return 0;
  }
  if ((0 < (int)param_3) && (param_4 == 0 && param_2 == 0)) {
    *(uint *)(param_1 + 0xa8) = param_2;
LAB_1005c99d8:
    *(uint *)(param_1 + 0x100) = param_3;
    return 0;
  }
  *(uint *)(param_1 + 0xa8) = param_2;
  *(uint *)(param_1 + 0xac) = param_4;
  if ((param_3 != 0) || (param_4 == 0)) goto LAB_1005c99d8;
  if ((int)param_4 < 1000) {
    uVar5 = 1;
    switch(param_4) {
    case 2:
      break;
    case 3:
      uVar5 = 2;
      break;
    case 4:
    case 5:
    case 6:
      uVar5 = param_4;
      break;
    case 7:
      uVar5 = 8;
      break;
    default:
      goto switchD_1005c99c8_default;
    }
  }
  else {
    if (param_4 == 1000) {
      uVar5 = 2;
      goto switchD_1005c99c8_caseD_2;
    }
switchD_1005c99c8_default:
    uVar5 = 0;
  }
switchD_1005c99c8_caseD_2:
  *(uint *)(param_1 + 0x100) = uVar5;
  if (param_2 == 0) {
    return 0;
  }
  if (uVar5 == 0) {
    iVar24 = 0;
  }
  else {
    uVar6 = uVar5 & 0xfffffff8;
    if (uVar6 == 0) {
      uVar6 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      do {
        auVar32._4_4_ = uVar7 + 1;
        auVar32._0_4_ = uVar7;
        auVar32._8_4_ = uVar7 + 2;
        auVar32._12_4_ = uVar7 + 3;
        auVar29._0_4_ = uVar7 + 4;
        auVar29._4_4_ = uVar7 + 5;
        auVar29._8_4_ = uVar7 + 6;
        auVar29._12_4_ = uVar7 + 7;
        auVar30[8] = 1;
        auVar30._0_8_ = 0x100000001;
        auVar30._9_3_ = 0;
        auVar30[0xc] = 1;
        auVar30._13_3_ = 0;
        auVar32 = NEON_ushl(auVar30,auVar32,4);
        auVar4[8] = 1;
        auVar4._0_8_ = 0x100000001;
        auVar4._9_3_ = 0;
        auVar4[0xc] = 1;
        auVar4._13_3_ = 0;
        auVar30 = NEON_ushl(auVar4,auVar29,4);
        uVar31 = CONCAT14(-((auVar32._4_4_ & param_2) != 0),
                          (uint)(-((auVar32._0_4_ & param_2) != 0) & 1)) & 0x1ffffffff;
        uVar28 = CONCAT14(-((auVar30._4_4_ & param_2) != 0),
                          (uint)(-((auVar30._0_4_ & param_2) != 0) & 1)) & 0x1ffffffff;
        iVar3 = (int)uVar31 + CONCAT13(uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
        uVar8 = (undefined1)iVar3;
        uVar9 = (undefined1)((uint)iVar3 >> 8);
        uVar10 = (undefined1)((uint)iVar3 >> 0x10);
        uVar11 = (undefined1)((uint)iVar3 >> 0x18);
        iVar3 = (uint)(byte)(uVar31 >> 0x20) +
                CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)));
        uVar12 = (undefined1)iVar3;
        uVar13 = (undefined1)((uint)iVar3 >> 8);
        uVar14 = (undefined1)((uint)iVar3 >> 0x10);
        uVar15 = (undefined1)((uint)iVar3 >> 0x18);
        iVar3 = (uint)(-((auVar32._8_4_ & param_2) != 0) & 1) +
                CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
        uVar16 = (undefined1)iVar3;
        uVar17 = (undefined1)((uint)iVar3 >> 8);
        uVar18 = (undefined1)((uint)iVar3 >> 0x10);
        uVar19 = (undefined1)((uint)iVar3 >> 0x18);
        iVar3 = (uint)(-((auVar32._12_4_ & param_2) != 0) & 1) +
                CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
        uVar20 = (undefined1)iVar3;
        uVar21 = (undefined1)((uint)iVar3 >> 8);
        uVar22 = (undefined1)((uint)iVar3 >> 0x10);
        uVar23 = (undefined1)((uint)iVar3 >> 0x18);
        iVar24 = (int)uVar28 + iVar24;
        iVar25 = (uint)(byte)(uVar28 >> 0x20) + iVar25;
        iVar26 = (uint)(-((auVar30._8_4_ & param_2) != 0) & 1) + iVar26;
        iVar27 = (uint)(-((auVar30._12_4_ & param_2) != 0) & 1) + iVar27;
        uVar7 = uVar7 + 8;
      } while (uVar6 != uVar7);
    }
    iVar24 = iVar24 + CONCAT13(uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
    iVar25 = iVar25 + CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)));
    uVar8 = (undefined1)((uint)iVar25 >> 8);
    uVar9 = (undefined1)((uint)iVar25 >> 0x10);
    uVar10 = (undefined1)((uint)iVar25 >> 0x18);
    iVar26 = iVar26 + CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)));
    uVar11 = (undefined1)((uint)iVar26 >> 8);
    uVar12 = (undefined1)((uint)iVar26 >> 0x10);
    uVar13 = (undefined1)((uint)iVar26 >> 0x18);
    iVar27 = iVar27 + CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)));
    uVar14 = (undefined1)((uint)iVar27 >> 8);
    uVar15 = (undefined1)((uint)iVar27 >> 0x10);
    uVar16 = (undefined1)((uint)iVar27 >> 0x18);
    auVar1[4] = (char)iVar25;
    auVar1._0_4_ = iVar24;
    auVar1[5] = uVar8;
    auVar1[6] = uVar9;
    auVar1[7] = uVar10;
    auVar1[8] = (char)iVar26;
    auVar1[9] = uVar11;
    auVar1[10] = uVar12;
    auVar1[0xb] = uVar13;
    auVar1[0xc] = (char)iVar27;
    auVar1[0xd] = uVar14;
    auVar1[0xe] = uVar15;
    auVar1[0xf] = uVar16;
    auVar2[4] = (char)iVar25;
    auVar2._0_4_ = iVar24;
    auVar2[5] = uVar8;
    auVar2[6] = uVar9;
    auVar2[7] = uVar10;
    auVar2[8] = (char)iVar26;
    auVar2[9] = uVar11;
    auVar2[10] = uVar12;
    auVar2[0xb] = uVar13;
    auVar2[0xc] = (char)iVar27;
    auVar2[0xd] = uVar14;
    auVar2[0xe] = uVar15;
    auVar2[0xf] = uVar16;
    auVar30 = NEON_ext(auVar1,auVar2,8,1);
    iVar24 = iVar24 + auVar30._0_4_ + iVar25 + auVar30._4_4_;
    if (uVar5 != uVar6) {
      do {
        if ((1 << (ulong)(uVar6 & 0x1f) & param_2) != 0) {
          iVar24 = iVar24 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  *(int *)(param_1 + 0x100) = iVar24;
  return 0;
}




undefined8 FUN_1005c9b00(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x100);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xac);
  }
  return 0;
}




undefined8 FUN_1005c9b2c(long param_1,ulong param_2,ulong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  long local_30;
  ulong uStack_28;
  ulong local_20;
  undefined1 local_18;
  
  if ((param_3 < param_2) && (param_3 != 0)) {
    uVar1 = 0x1f;
  }
  else {
    local_38[0] = 0x11;
    local_30 = param_1;
    uStack_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    uVar1 = FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,1);
  }
  return uVar1;
}




undefined8 FUN_1005c9b7c(long param_1,ulong param_2,ulong param_3,int param_4)

{
  if ((param_3 < param_2) && (param_3 != 0)) {
    return 0x1f;
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  *(ulong *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return 0;
}




undefined8 FUN_1005c9bb8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x18);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = *(undefined1 *)(param_1 + 0x28);
  }
  return 0;
}




undefined8
FUN_1005c9be4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 *local_138;
  long local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 ****local_110;
  undefined8 ****ppppuStack_108;
  undefined8 local_100;
  undefined8 ****local_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined2 local_de;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_78;
  undefined2 local_76;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  if ((*(byte *)(*param_1 + 0x4a) & 1) == 0) {
    bVar1 = PTR_DAT_10186d408[0x88] != '\0';
  }
  else {
    bVar1 = true;
  }
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar10 = 0;
    do {
      lVar8 = *(long *)(param_1[4] + lVar10 * 8);
      lVar9 = *(long *)(lVar8 + 0x58);
      if (bVar1) {
        FUN_1005db9a0(&uStack_64);
      }
      while (iVar2 = FUN_1005ca05c(lVar9,param_2,param_3), iVar2 != 0) {
        uVar3 = FUN_10056b5f8(*param_1);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      puVar5 = (undefined8 *)*param_5;
      if (puVar5 != (undefined8 *)0x0) {
        iVar2 = *(int *)(puVar5 + 1);
        if (0 < iVar2) {
          *(int *)(puVar5 + 1) = iVar2 + -1;
          iVar2 = iVar2 + -1;
        }
        if (iVar2 == 0) {
          lVar7 = param_5[1];
          if (puVar5[3] == 0) {
            *puVar5 = *(undefined8 *)(lVar7 + 0x14818);
            *(undefined8 **)(lVar7 + 0x14818) = puVar5;
          }
          else {
            FUN_1005d7f1c(lVar7 + 0x14f68,puVar5[3],"",0);
          }
        }
        *param_5 = 0;
        param_5[2] = 0;
        param_5[3] = -0x100000000;
      }
      *param_5 = *(long *)(lVar9 + 0x118);
      param_5[1] = *(long *)(lVar9 + 0x120);
      auVar11 = *(undefined1 (*) [16])(lVar9 + 0x128);
      param_5[2] = auVar11._0_8_;
      auVar11 = NEON_ext(auVar11,auVar11,8,1);
      param_5[3] = auVar11._0_8_;
      *(undefined8 *)(lVar9 + 0x128) = 0;
      *(undefined8 *)(lVar9 + 0x130) = 0;
      *(undefined8 *)(lVar9 + 0x118) = 0;
      *(undefined8 *)(lVar9 + 0x120) = 0;
      if (bVar1) {
        FUN_1005db9a0(&local_68);
        iVar2 = local_68 - uStack_64;
        if (uStack_64 <= local_68) {
          *(int *)(lVar9 + 0x19c) = iVar2;
          *(int *)(lVar9 + 0x1a0) = iVar2;
          if (*(short *)(lVar9 + 0x174) < *(short *)(lVar9 + 0x170)) {
            if (*(long *)(lVar8 + 0x60) == 0) {
              puVar5 = *(undefined8 **)(lVar8 + 0x40);
              while (puVar5 != (undefined8 *)(lVar8 + 0x40)) {
                if ((*(byte *)(puVar5[2] + 0x78) >> 2 & 1) == 0) {
                  iVar2 = iVar2 + *(int *)(*(long *)(puVar5[2] + 0x58) + 0x1a0);
                  *(int *)(lVar9 + 0x1a0) = iVar2;
                  puVar5 = (undefined8 *)*puVar5;
                }
                else {
                  puVar5 = (undefined8 *)*puVar5;
                }
              }
            }
            else {
              *(int *)(lVar9 + 0x1a0) = *(int *)(*(long *)(lVar8 + 0x60) + 0x1a0) + iVar2;
            }
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((long)param_1 + 0xc));
  }
  if ((*param_5 != 0) ||
     (uVar3 = FUN_1005c8b7c(param_5,*param_1,param_4,0,param_3,1), (int)uVar3 == 0)) {
    if ((int)param_5[2] != (int)param_4) {
      local_120 = 0;
      local_110 = &local_110;
      local_100 = 0;
      local_f8 = &local_f8;
      local_e8 = 0;
      local_d8 = 0;
      local_e0 = 0;
      local_de = 0;
      local_d0 = 0;
      local_ce = 0;
      local_70 = 0;
      local_78 = 0;
      local_76 = 0;
      local_118 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_c8 = 0;
      local_130 = 0;
      local_128 = 0;
      local_138 = (undefined8 *)0x0;
      uStack_11c = 0xffffffff;
      ppppuStack_108 = local_110;
      ppppuStack_f0 = local_f8;
      uVar3 = FUN_1005c8b7c(&local_138,*param_1,param_4,0,0,0);
      if ((int)uVar3 == 0) {
        uVar3 = FUN_1006127a0(&local_118,*param_1);
        puVar5 = local_138;
        if ((int)uVar3 == 0) {
          if (local_138 == (undefined8 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = local_138[2];
          }
          if (*param_5 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(*param_5 + 0x10);
          }
          uVar3 = FUN_100613a18(&local_118,uVar3,uVar4,
                                (int)param_3 == 1 || *(int *)((long)param_5 + 0x14) == 1,param_4,
                                (int)param_5[2],0,param_2,1);
          if ((int)uVar3 == 0) {
            puVar6 = (undefined8 *)*param_5;
            if (puVar6 != (undefined8 *)0x0) {
              iVar2 = *(int *)(puVar6 + 1);
              if (0 < iVar2) {
                *(int *)(puVar6 + 1) = iVar2 + -1;
                iVar2 = iVar2 + -1;
              }
              if (iVar2 == 0) {
                lVar10 = param_5[1];
                if (puVar6[3] == 0) {
                  *puVar6 = *(undefined8 *)(lVar10 + 0x14818);
                  *(undefined8 **)(lVar10 + 0x14818) = puVar6;
                }
                else {
                  FUN_1005d7f1c(lVar10 + 0x14f68,puVar6[3],"",0);
                }
              }
              *param_5 = 0;
              param_5[2] = 0;
              param_5[3] = -0x100000000;
            }
            *param_5 = (long)puVar5;
            *(int *)(param_5 + 2) = (int)local_128;
            param_5[1] = local_130;
            *(int *)((long)param_5 + 0x14) = (int)((ulong)local_128 >> 0x20);
            *(undefined4 *)(param_5 + 3) = local_120;
            *(undefined4 *)((long)param_5 + 0x1c) = uStack_11c;
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
      if (local_138 != (undefined8 *)0x0) {
        iVar2 = *(int *)(local_138 + 1);
        if (0 < iVar2) {
          *(int *)(local_138 + 1) = iVar2 + -1;
          iVar2 = iVar2 + -1;
        }
        if (iVar2 == 0) {
          if (local_138[3] == 0) {
            *local_138 = *(undefined8 *)(local_130 + 0x14818);
            *(undefined8 **)(local_130 + 0x14818) = local_138;
          }
          else {
            FUN_1005d7f1c(local_130 + 0x14f68,local_138[3],"",0);
          }
        }
      }
      if (!bVar1) {
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005ca05c(long param_1,uint param_2,int param_3)

{
  undefined8 **ppuVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  int local_244;
  int local_240;
  undefined4 local_23c;
  int local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228 [2];
  int *local_220;
  undefined4 *local_218;
  void **local_210;
  undefined4 local_208;
  int local_200 [2];
  undefined4 *local_1f8;
  undefined4 *puStack_1f0;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 *local_1a8;
  long local_1a0;
  ulong local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  int local_17c;
  ulong local_178;
  undefined8 ****local_170;
  undefined8 ****local_168;
  undefined8 uStack_160;
  undefined8 ****local_158;
  undefined8 ****ppppuStack_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined2 local_13e;
  undefined8 local_138;
  undefined2 local_130;
  undefined2 local_12e;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined8 local_d0;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  local_17c = 0;
  ppuVar1 = (undefined8 **)(param_1 + 0x118);
  FUN_1005cbba4(param_1,*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x128),
                *(undefined4 *)(param_1 + 300),&local_184,&local_180,&local_188,&local_17c);
  iVar28 = local_17c;
  bVar6 = local_17c == 0xb;
  if (*(long *)(param_1 + 0x1c0) != 0) {
    lVar26 = *(long *)(param_1 + 0x90);
    if (lVar26 != 0) {
      FUN_10057097c(lVar26,6);
    }
    if (*ppuVar1 == (undefined8 *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (*ppuVar1)[2];
    }
    lVar27 = *(long *)(param_1 + 0x1c0);
    if ((lVar27 != 0) && (*(char *)(lVar27 + 0x212) != '\0')) {
      iVar18 = *(int *)(param_1 + 0x128);
      *(short *)(lVar27 + 0x210) = (short)iVar18;
      *(undefined4 *)(lVar27 + 0x208) = *(undefined4 *)(param_1 + 0x38);
      if (lVar7 == 0) {
        if (iVar18 != 0) {
          uVar29 = (ulong)(iVar18 - 1) + 1;
          uVar14 = uVar29 & 0x1fffffffc;
          if (uVar14 == 0) {
            uVar14 = 0;
          }
          else {
            uVar20 = (ulong)(iVar18 - 1) + 1 & 0xfffffffffffffffc;
            puVar16 = (undefined8 *)(lVar27 + 0x80);
            auVar32 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
            do {
              puVar16[-0x10] = 0;
              puVar16[-0xf] = auVar32._0_8_;
              *puVar16 = 0;
              uVar20 = uVar20 - 4;
              puVar16[1] = auVar32._0_8_;
              puVar16 = puVar16 + 2;
            } while (uVar20 != 0);
          }
          if (uVar29 != uVar14) {
            iVar18 = iVar18 - (int)uVar14;
            puVar15 = (undefined4 *)(lVar27 + uVar14 * 4 + 0x80);
            do {
              puVar15[-0x20] = 0;
              *puVar15 = 0;
              iVar18 = iVar18 + -1;
              puVar15 = puVar15 + 1;
            } while (iVar18 != 0);
          }
        }
      }
      else {
        (*DAT_101d919f0)(lVar7,param_2,iVar18,lVar27 + 0x80,lVar27);
      }
      *(uint *)(lVar27 + 0x20c) = *(int *)(lVar27 + 0x20c) + param_2;
    }
    if ((lVar26 != 0) && (lVar26 != 0)) {
      FUN_100570990(lVar26,6);
    }
  }
  if (param_2 == 0) {
    iVar28 = 0;
    uVar25 = 0;
LAB_1005ca2f4:
    if ((bVar6) && (puVar16 = *ppuVar1, puVar16 != (undefined8 *)0x0)) {
      iVar18 = *(int *)(puVar16 + 1);
      if (0 < iVar18) {
        *(int *)(puVar16 + 1) = iVar18 + -1;
        iVar18 = iVar18 + -1;
      }
      if (iVar18 == 0) {
        lVar26 = *(long *)(param_1 + 0x120);
        if (puVar16[3] == 0) {
          *puVar16 = *(undefined8 *)(lVar26 + 0x14818);
          *(undefined8 **)(lVar26 + 0x14818) = puVar16;
        }
        else {
          FUN_1005d7f1c(lVar26 + 0x14f68,puVar16[3],"",0);
        }
      }
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0xffffffff00000000;
    }
  }
  else {
    uVar25 = param_2;
    if (((*(byte *)(param_1 + 0x3c) & 1) != 0) || ((*(byte *)(param_1 + 0x17c) >> 2 & 1) != 0)) {
LAB_1005ca2e0:
      iVar28 = 0;
      goto LAB_1005ca2f4;
    }
    if (iVar28 == 0) {
      local_1a0 = 0;
      local_198 = 0;
      local_1a8 = (undefined8 *)0x0;
      local_190 = 0xffffffff00000000;
      local_1b0 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1c8 = (undefined8 *)0x0;
      local_1ac = 0xffffffff;
      if (*(long *)(param_1 + 0xd0) == 0) {
        iVar28 = 1;
      }
      else {
        iVar28 = *(int *)(*(long *)(param_1 + 0xd0) + 0x28);
      }
      if ((iVar28 == 0) || (*(long *)(param_1 + 0x118) != 0)) {
LAB_1005ca4a4:
        uVar9 = FUN_1005c8b7c(&local_1a8,*(undefined8 *)(param_1 + 0x90),local_180,local_184,
                              local_188,0);
        if ((int)uVar9 == 0) {
          if (((*(byte *)(param_1 + 0x3c) >> 4 & 1) == 0) ||
             ((((*(long *)(param_1 + 0x138) != 0 &&
                (*(long *)(*(long *)(param_1 + 0x138) + 0x10) != 0)) &&
               (*(int *)(param_1 + 0x148) == *(int *)(param_1 + 0x128))) ||
              (uVar9 = FUN_1005c8b7c(param_1 + 0x138,*(undefined8 *)(param_1 + 0x90),
                                     *(undefined4 *)(param_1 + 0x128),
                                     *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac)
                                     ,1), (int)uVar9 == 0)))) {
            if (*ppuVar1 == (undefined8 *)0x0) {
              local_1d0 = 0;
            }
            else {
              local_1d0 = (*ppuVar1)[2];
            }
            if (local_1a8 == (undefined8 *)0x0) {
              local_1d8 = (void *)0x0;
            }
            else {
              local_1d8 = (void *)local_1a8[2];
            }
            if (*(long *)(param_1 + 0x138) == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x10);
            }
            *(undefined8 *)(param_1 + 0xb0) = uVar9;
            *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x148);
            if (iVar28 == 0) {
              uVar25 = (uint)*(ushort *)(param_1 + 0x86);
            }
            if ((*(float *)(param_1 + 0x184) == 1.0) && (*(float *)(param_1 + 400) == 1.0)) {
              puVar16 = (undefined8 *)0x0;
LAB_1005cac10:
              if (*(code **)(param_1 + 0x108) != (code *)0x0) {
                uStack_22c = *(undefined4 *)(param_1 + 0x130);
                puStack_1f0 = &uStack_22c;
                local_230 = (undefined4)local_190;
                local_1f8 = &uStack_234;
                uStack_234 = *(undefined4 *)(param_1 + 0x128);
                local_1e8 = &local_1d0;
                local_218 = &local_230;
                local_238 = (int)local_198;
                local_1e0 = *(undefined4 *)(param_1 + 300);
                local_228[0] = 1;
                local_220 = &local_238;
                local_210 = &local_1d8;
                local_208 = (undefined4)(local_198 >> 0x20);
                *(long *)(param_1 + 0x98) = param_1;
                local_200[0] = iVar28;
                uVar9 = (**(code **)(param_1 + 0x108))
                                  (param_1 + 0x98,uVar25,local_200,local_228,0,0);
                bVar5 = true;
                if ((((int)uVar9 != 0xb) && (bVar5 = bVar6, (int)uVar9 != 0)) &&
                   ((char)PTR_DAT_10186d408[0x10] < '\0')) {
                  local_178 = local_178 & 0xffffffffffffff00;
                  FUN_1005acff8(uVar9,7,param_1,"DSPI::RunJob",&local_178);
                }
                bVar6 = bVar5;
                if ((((*(long *)(param_1 + 0xd0) != 0) &&
                     (*(long *)(*(long *)(param_1 + 0xd0) + 0x48) != 0)) &&
                    ((int)local_198 != local_238)) &&
                   ((local_238 != 0 && (local_238 <= *(int *)(*(long *)(param_1 + 0x90) + 84000)))))
                {
                  local_198 = CONCAT44(local_198._4_4_,local_238);
                }
              }
              if (iVar28 == 0) {
                iVar18 = (int)local_198;
                lVar26 = (long)(int)local_198;
                uVar4 = *(ushort *)(param_1 + 0x84);
                uVar29 = (ulong)uVar4;
                if (uVar4 == 0) {
                  uVar29 = 0;
                  lVar26 = lVar26 << 2;
                }
                else {
                  _memmove((void *)((long)local_1d8 + (ulong)((uint)uVar4 * (int)local_198) * 4),
                           local_1d8,(ulong)((int)local_198 * uVar25) << 2);
                  lVar26 = lVar26 * 4;
                  _bzero(local_1d8,lVar26 * uVar29);
                }
                iVar28 = (int)uVar29;
                _bzero((void *)((long)local_1d8 + (ulong)((iVar28 + uVar25) * iVar18) * 4),
                       lVar26 * (ulong)((param_2 - uVar25) - iVar28));
              }
              else {
                iVar28 = 0;
              }
              if ((*(float *)(param_1 + 0x188) != 1.0) || (*(float *)(param_1 + 0x194) != 1.0)) {
                local_170 = &local_170;
                uStack_160 = 0;
                local_158 = &local_158;
                local_148 = 0;
                local_138 = 0;
                local_140 = 0;
                local_13e = 0;
                local_130 = 0;
                local_12e = 0;
                local_d0 = 0;
                local_d8 = 0;
                local_d6 = 0;
                local_178 = 0;
                local_120 = 0;
                uStack_118 = 0;
                local_128 = 0;
                local_168 = local_170;
                ppppuStack_150 = local_158;
                FUN_1006127a0(&local_178,*(undefined8 *)(param_1 + 0x90));
                uVar9 = 0;
                local_f0 = *(undefined4 *)(param_1 + 0x188);
                local_f8 = 0x40;
                if (local_1a8 != (undefined8 *)0x0) {
                  uVar9 = local_1a8[2];
                }
                FUN_100613a18(&local_178,uVar9,uVar9,0,local_198 & 0xffffffff,local_198 & 0xffffffff
                              ,0,uVar25,1);
              }
              fVar31 = *(float *)(param_1 + 0x18c);
              if ((fVar31 != 0.0) || (*(float *)(param_1 + 0x198) != 0.0)) {
                local_170 = &local_170;
                uStack_160 = 0;
                local_158 = &local_158;
                local_148 = 0;
                local_138 = 0;
                local_140 = 0;
                local_13e = 0;
                local_130 = 0;
                local_12e = 0;
                local_d0 = 0;
                local_d8 = 0;
                local_d6 = 0;
                local_178 = 0;
                local_120 = 0;
                uStack_118 = 0;
                local_128 = 0;
                ppuVar3 = &local_1c8;
                if (puVar16 == (undefined8 *)0x0) {
                  ppuVar3 = ppuVar1;
                }
                local_168 = local_170;
                ppppuStack_150 = local_158;
                FUN_1006127a0(&local_178,*(undefined8 *)(param_1 + 0x90));
                uVar9 = 0;
                local_f0 = *(undefined4 *)(param_1 + 0x18c);
                local_f8 = 0x40;
                if (local_1a8 != (undefined8 *)0x0) {
                  uVar9 = local_1a8[2];
                }
                if (*ppuVar3 == (undefined8 *)0x0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (*ppuVar3)[2];
                }
                FUN_100613a18(&local_178,uVar9,uVar11,0,local_198 & 0xffffffff,
                              *(undefined4 *)(ppuVar3 + 2),0,uVar25,0);
                if (puVar16 != (undefined8 *)0x0) {
                  iVar18 = *(int *)(puVar16 + 1);
                  if (0 < iVar18) {
                    *(int *)(puVar16 + 1) = iVar18 + -1;
                    iVar18 = iVar18 + -1;
                  }
                  if (iVar18 == 0) {
                    if (puVar16[3] == 0) {
                      *puVar16 = *(undefined8 *)(local_1c0 + 0x14818);
                      *(undefined8 **)(local_1c0 + 0x14818) = puVar16;
                    }
                    else {
                      FUN_1005d7f1c(local_1c0 + 0x14f68,puVar16[3],"",0);
                    }
                  }
                  puVar16 = (undefined8 *)0x0;
                  local_1c8 = (undefined8 *)0x0;
                  local_1b8 = 0;
                  local_1b0 = 0;
                  local_1ac = 0xffffffff;
                }
                fVar31 = *(float *)(param_1 + 0x18c);
              }
              *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x184);
              *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x188);
              *(float *)(param_1 + 0x198) = fVar31;
              puVar17 = *(undefined8 **)(param_1 + 0x138);
              if (puVar17 != (undefined8 *)0x0) {
                iVar18 = *(int *)(puVar17 + 1);
                if (0 < iVar18) {
                  *(int *)(puVar17 + 1) = iVar18 + -1;
                  iVar18 = iVar18 + -1;
                }
                if (iVar18 == 0) {
                  lVar26 = *(long *)(param_1 + 0x140);
                  if (puVar17[3] == 0) {
                    *puVar17 = *(undefined8 *)(lVar26 + 0x14818);
                    *(undefined8 **)(lVar26 + 0x14818) = puVar17;
                  }
                  else {
                    FUN_1005d7f1c(lVar26 + 0x14f68,puVar17[3],"",0);
                  }
                }
                *(undefined8 *)(param_1 + 0x138) = 0;
                *(undefined4 *)(param_1 + 0x148) = 0;
                *(undefined8 *)(param_1 + 0x14c) = 0;
                *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
              }
              puVar17 = *ppuVar1;
              if (puVar17 != (undefined8 *)0x0) {
                iVar18 = *(int *)(puVar17 + 1);
                if (0 < iVar18) {
                  *(int *)(puVar17 + 1) = iVar18 + -1;
                  iVar18 = iVar18 + -1;
                }
                if (iVar18 == 0) {
                  lVar26 = *(long *)(param_1 + 0x120);
                  if (puVar17[3] == 0) {
                    *puVar17 = *(undefined8 *)(lVar26 + 0x14818);
                    *(undefined8 **)(lVar26 + 0x14818) = puVar17;
                  }
                  else {
                    FUN_1005d7f1c(lVar26 + 0x14f68,puVar17[3],"",0);
                  }
                }
                *(undefined8 *)(param_1 + 0x118) = 0;
                *(undefined8 *)(param_1 + 0x128) = 0;
                *(undefined8 *)(param_1 + 0x130) = 0xffffffff00000000;
              }
              *(undefined8 **)(param_1 + 0x118) = local_1a8;
              uVar13 = (undefined4)local_198;
              *(undefined4 *)(param_1 + 0x128) = uVar13;
              *(long *)(param_1 + 0x120) = local_1a0;
              *(int *)(param_1 + 300) = (int)(local_198 >> 0x20);
              *(int *)(param_1 + 0x130) = (int)local_190;
              *(int *)(param_1 + 0x134) = (int)((ulong)local_190 >> 0x20);
              local_198 = 0;
              local_190 = 0;
              local_1a8 = (undefined8 *)0x0;
              local_1a0 = 0;
              *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) | 4;
              if ((*(float *)(param_1 + 0x188) == 0.0) && (*(float *)(param_1 + 0x18c) == 0.0)) {
                bVar6 = true;
              }
              bVar5 = false;
              uVar9 = 0;
              *(undefined4 *)(param_1 + 0x180) = uVar13;
            }
            else {
              puVar16 = (undefined8 *)0x0;
              local_170 = &local_170;
              uStack_160 = 0;
              local_158 = &local_158;
              local_148 = 0;
              local_138 = 0;
              local_140 = 0;
              local_13e = 0;
              local_130 = 0;
              local_12e = 0;
              local_d0 = 0;
              local_d8 = 0;
              local_d6 = 0;
              local_178 = 0;
              local_120 = 0;
              uStack_118 = 0;
              local_128 = 0;
              local_168 = local_170;
              ppppuStack_150 = local_158;
              if (*(float *)(param_1 + 0x18c) == 0.0) {
LAB_1005cabac:
                FUN_1006127a0((char)*(undefined4 *)(param_1 + 400),&local_178,
                              *(undefined8 *)(param_1 + 0x90));
                local_f0 = *(undefined4 *)(param_1 + 0x184);
                local_f8 = 0x40;
                if (*(long *)(param_1 + 0x118) == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x118) + 0x10);
                }
                FUN_100613a18(&local_178,uVar9,uVar9,0,*(undefined4 *)(param_1 + 0x128),
                              *(undefined4 *)(param_1 + 0x128),0,param_2,1);
                *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x184);
                goto LAB_1005cac10;
              }
              uVar9 = FUN_1005c8b7c(&local_1c8,*(undefined8 *)(param_1 + 0x90),
                                    *(undefined4 *)(param_1 + 0x128),
                                    *(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 300),
                                    0);
              puVar16 = local_1c8;
              if ((int)uVar9 == 0) {
                if (local_1c8 == (undefined8 *)0x0) {
                  pvVar8 = (void *)0x0;
                }
                else {
                  pvVar8 = (void *)local_1c8[2];
                }
                if (*ppuVar1 == (undefined8 *)0x0) {
                  pvVar10 = (void *)0x0;
                }
                else {
                  pvVar10 = (void *)(*ppuVar1)[2];
                }
                _memcpy(pvVar8,pvVar10,(ulong)(*(int *)(param_1 + 0x128) * uVar25) << 2);
                goto LAB_1005cabac;
              }
              iVar28 = 0;
              bVar5 = true;
            }
            if (puVar16 != (undefined8 *)0x0) {
              iVar18 = *(int *)(puVar16 + 1);
              if (0 < iVar18) {
                *(int *)(puVar16 + 1) = iVar18 + -1;
                iVar18 = iVar18 + -1;
              }
              if (iVar18 == 0) {
                if (puVar16[3] == 0) {
                  *puVar16 = *(undefined8 *)(local_1c0 + 0x14818);
                  *(undefined8 **)(local_1c0 + 0x14818) = puVar16;
                }
                else {
                  FUN_1005d7f1c(local_1c0 + 0x14f68,puVar16[3],"",0);
                }
              }
              local_1c8 = (undefined8 *)0x0;
              local_1b8 = 0;
              local_1b0 = 0;
              local_1ac = 0xffffffff;
            }
            goto LAB_1005cb1b0;
          }
          if (local_1a8 != (undefined8 *)0x0) {
            iVar28 = *(int *)(local_1a8 + 1);
            if (0 < iVar28) {
              *(int *)(local_1a8 + 1) = iVar28 + -1;
              iVar28 = iVar28 + -1;
            }
            if (iVar28 == 0) {
              if (local_1a8[3] == 0) {
                *local_1a8 = *(undefined8 *)(local_1a0 + 0x14818);
                *(undefined8 **)(local_1a0 + 0x14818) = local_1a8;
              }
              else {
                FUN_1005d7f1c(local_1a0 + 0x14f68,local_1a8[3],"",0);
              }
            }
            iVar28 = 0;
            local_1a8 = (undefined8 *)0x0;
            local_198 = 0;
            bVar5 = true;
            local_190 = 0xffffffff00000000;
            goto LAB_1005cb1b0;
          }
        }
        iVar28 = 0;
        bVar5 = true;
      }
      else {
        bVar5 = true;
        uVar9 = FUN_1005c8b7c(ppuVar1,*(undefined8 *)(param_1 + 0x90),local_180,local_184,local_188,
                              1);
        if ((int)uVar9 == 0) goto LAB_1005ca4a4;
        iVar28 = 0;
      }
LAB_1005cb1b0:
      if (local_1a8 != (undefined8 *)0x0) {
        iVar18 = *(int *)(local_1a8 + 1);
        if (0 < iVar18) {
          *(int *)(local_1a8 + 1) = iVar18 + -1;
          iVar18 = iVar18 + -1;
        }
        if (iVar18 == 0) {
          if (local_1a8[3] == 0) {
            *local_1a8 = *(undefined8 *)(local_1a0 + 0x14818);
            *(undefined8 **)(local_1a0 + 0x14818) = local_1a8;
          }
          else {
            FUN_1005d7f1c(local_1a0 + 0x14f68,local_1a8[3],"",0);
          }
        }
        local_1a8 = (undefined8 *)0x0;
        local_198 = 0;
        local_190 = 0xffffffff00000000;
      }
      if (bVar5) goto LAB_1005caa24;
      goto LAB_1005ca2f4;
    }
    if (((*(float *)(param_1 + 0x18c) == 0.0) && (*(float *)(param_1 + 0x198) == 0.0)) ||
       (*ppuVar1 == (undefined8 *)0x0)) goto LAB_1005ca2e0;
    local_170 = &local_170;
    uStack_160 = 0;
    local_158 = &local_158;
    local_148 = 0;
    local_138 = 0;
    local_140 = 0;
    local_13e = 0;
    local_130 = 0;
    local_12e = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_d6 = 0;
    local_178 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_128 = 0;
    local_168 = local_170;
    ppppuStack_150 = local_158;
    FUN_1006127a0((char)*(undefined4 *)(param_1 + 0x198),&local_178,*(undefined8 *)(param_1 + 0x90))
    ;
    uVar9 = 0;
    local_f0 = *(undefined4 *)(param_1 + 0x18c);
    local_f8 = 0x40;
    if (*(long *)(param_1 + 0x118) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x118) + 0x10);
    }
    FUN_100613a18(&local_178,uVar9,uVar9,0,*(undefined4 *)(param_1 + 0x128),
                  *(undefined4 *)(param_1 + 0x128),0,param_2,1);
    iVar28 = 0;
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x128);
  }
  if (*(long *)(param_1 + 0x1c0) != 0) {
    lVar26 = *(long *)(param_1 + 0x90);
    if (lVar26 != 0) {
      FUN_10057097c(lVar26,6);
    }
    if (*ppuVar1 == (undefined8 *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (*ppuVar1)[2];
    }
    lVar27 = *(long *)(param_1 + 0x1c0);
    if ((lVar27 != 0) && (*(char *)(lVar27 + 0x426) != '\0')) {
      iVar18 = *(int *)(param_1 + 0x128);
      *(short *)(lVar27 + 0x424) = (short)iVar18;
      *(undefined4 *)(lVar27 + 0x41c) = *(undefined4 *)(param_1 + 0x38);
      if (lVar7 == 0) {
        if (iVar18 != 0) {
          uVar29 = (ulong)(iVar18 - 1) + 1;
          uVar14 = uVar29 & 0x1fffffffc;
          if (uVar14 == 0) {
            uVar14 = 0;
          }
          else {
            uVar20 = (ulong)(iVar18 - 1) + 1 & 0xfffffffffffffffc;
            puVar16 = (undefined8 *)(lVar27 + 0x294);
            auVar32 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
            do {
              puVar16[-0x10] = 0;
              puVar16[-0xf] = auVar32._0_8_;
              *puVar16 = 0;
              uVar20 = uVar20 - 4;
              puVar16[1] = auVar32._0_8_;
              puVar16 = puVar16 + 2;
            } while (uVar20 != 0);
          }
          if (uVar29 != uVar14) {
            iVar18 = iVar18 - (int)uVar14;
            puVar15 = (undefined4 *)(lVar27 + uVar14 * 4 + 0x294);
            do {
              puVar15[-0x20] = 0;
              *puVar15 = 0;
              iVar18 = iVar18 + -1;
              puVar15 = puVar15 + 1;
            } while (iVar18 != 0);
          }
        }
      }
      else {
        (*DAT_101d919f0)(lVar7,param_2,iVar18,lVar27 + 0x294,lVar27 + 0x214);
      }
      *(uint *)(lVar27 + 0x420) = *(int *)(lVar27 + 0x420) + param_2;
    }
    if ((lVar26 != 0) && (lVar26 != 0)) {
      FUN_100570990(lVar26,6);
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x118);
  uVar12 = *(uint *)(param_1 + 0x17c) & 0xfffffffe;
  if (puVar16 == (undefined8 *)0x0) {
    uVar12 = *(uint *)(param_1 + 0x17c) | 1;
  }
  *(uint *)(param_1 + 0x17c) = uVar12;
  if (*(short *)(param_1 + 0x172) != 0) {
    lVar26 = *(long *)(param_1 + 0x158);
    if (lVar26 != param_1 + 0x158) {
      do {
        lVar26 = *(long *)(lVar26 + 0x10);
        lVar7 = *(long *)(lVar26 + 0x60);
        if (*(short *)(lVar7 + 0x86) != 0 || (*(uint *)(lVar26 + 0x78) & 1) != 0) {
          plVar2 = (long *)(lVar7 + 0x138);
          if ((*(uint *)(lVar26 + 0x78) & 1) == 0) {
            plVar2 = (long *)(lVar7 + 0x118);
          }
          local_23c = local_184;
          local_244 = 0;
          local_240 = param_3;
          FUN_1005cbf4c(lVar7,&local_23c,&local_244,&local_240,lVar26);
          if (uVar25 != 0 && *ppuVar1 != (undefined8 *)0x0) {
            lVar27 = *plVar2;
            if (lVar27 == 0) {
              if (*(long *)(lVar26 + 0x40) == 0) {
                fVar31 = *(float *)(lVar26 + 0x7c);
                fVar30 = *(float *)(lVar26 + 0x88);
                bVar6 = false;
                if ((fVar30 == 1.0) && (bVar6 = false, !NAN(fVar31))) {
                  bVar6 = fVar31 == 1.0;
                }
                bVar5 = false;
                if ((bVar6) && (bVar5 = false, !NAN(fVar31) && !NAN(fVar30))) {
                  bVar5 = fVar31 == fVar30;
                }
                if (bVar5) {
                  if (*(short *)(lVar7 + 0x170) < 2) {
                    iVar18 = *(int *)(param_1 + 0x128);
                    iVar23 = *(int *)(param_1 + 300);
                    if ((iVar18 == local_244) && (iVar23 == local_240)) {
                      bVar6 = false;
                    }
                    else {
                      if ((iVar23 == 0) && (iVar23 = param_3, 0 < iVar18)) {
                        if (iVar18 - 1U < 8) {
                          iVar23 = *(int *)(&DAT_10115f7e0 + (long)(int)(iVar18 - 1U) * 4);
                          goto LAB_1005ca720;
                        }
                        iVar22 = 1;
                      }
                      else {
LAB_1005ca720:
                        if (iVar23 < 1000) {
                          iVar18 = 1;
                          iVar22 = 2;
                          switch(iVar23) {
                          case 3:
switchD_1005ca74c_caseD_3:
                            iVar18 = 2;
                            iVar22 = iVar23;
                            break;
                          case 4:
                          case 5:
                          case 6:
                            iVar18 = iVar23;
                            iVar22 = iVar23;
                            break;
                          case 7:
                            iVar18 = 8;
                            iVar22 = iVar23;
                          }
                        }
                        else {
                          iVar22 = iVar23;
                          if (iVar23 == 1000) goto switchD_1005ca74c_caseD_3;
                        }
                      }
                      iVar23 = local_240;
                      iVar21 = local_244;
                      if ((local_240 == 0) && (iVar23 = param_3, 0 < local_244)) {
                        if (local_244 - 1U < 8) {
                          iVar23 = *(int *)(&DAT_10115f7e0 + (long)(int)(local_244 - 1U) * 4);
                          goto LAB_1005ca7a0;
                        }
                        iVar24 = 1;
                      }
                      else {
LAB_1005ca7a0:
                        if (iVar23 < 1000) {
                          iVar21 = 1;
                          iVar24 = 2;
                          switch(iVar23) {
                          case 3:
switchD_1005ca7cc_caseD_3:
                            iVar21 = 2;
                            iVar24 = iVar23;
                            break;
                          case 4:
                          case 5:
                          case 6:
                            iVar21 = iVar23;
                            iVar24 = iVar23;
                            break;
                          case 7:
                            iVar21 = 8;
                            iVar24 = iVar23;
                          }
                        }
                        else {
                          iVar24 = iVar23;
                          if (iVar23 == 1000) goto switchD_1005ca7cc_caseD_3;
                        }
                      }
                      bVar6 = iVar22 != iVar24 || iVar18 != iVar21;
                    }
                  }
                  else {
                    bVar6 = true;
                  }
                }
                else {
                  bVar6 = true;
                }
              }
              else {
                bVar6 = true;
              }
            }
            else {
              bVar6 = true;
            }
            if ((1 < *(short *)(lVar7 + 0x170) && lVar27 != 0) &&
               (*(int *)(param_1 + 0x130) != (int)plVar2[3])) {
              local_23c = 0;
              *(undefined4 *)(plVar2 + 3) = 0;
            }
            if (local_244 < *(int *)(param_1 + 0x128)) {
              local_23c = 0;
              *(undefined4 *)(param_1 + 0x130) = 0;
            }
            if (bVar6) {
              if (lVar27 == 0) {
                uVar9 = FUN_1005c8b7c(plVar2,*(undefined8 *)(param_1 + 0x90),local_244,0,0,0);
                if ((int)uVar9 != 0) goto LAB_1005caa24;
                *(int *)((long)plVar2 + 0x14) = local_240;
                *(undefined4 *)(plVar2 + 3) = local_23c;
                uVar12 = 1;
LAB_1005ca8c8:
                if ((iVar28 != 0 || iVar28 + uVar25 < param_2) ||
                   ((*(long *)(lVar26 + 0x40) != 0 &&
                    ((int)*(short *)(lVar26 + 0x3a) != (int)plVar2[2])))) {
                  if (*plVar2 == 0) {
                    pvVar8 = (void *)0x0;
                  }
                  else {
                    pvVar8 = *(void **)(*plVar2 + 0x10);
                  }
                  _bzero(pvVar8,(ulong)((int)plVar2[2] * param_2) << 2);
                  goto LAB_1005ca90c;
                }
              }
              else {
                uVar12 = *(uint *)(lVar7 + 0x17c) & 2;
                if (uVar12 != 0) goto LAB_1005ca8c8;
LAB_1005ca90c:
                uVar12 = 0;
              }
              if (*(int *)((long)plVar2 + 0x14) == 1) {
                bVar6 = true;
              }
              else {
                bVar6 = *(int *)(param_1 + 300) == 1;
              }
              if (*plVar2 == 0) {
                lVar27 = 0;
              }
              else {
                lVar27 = *(long *)(*plVar2 + 0x10);
              }
              if (*ppuVar1 == (undefined8 *)0x0) {
                lVar19 = 0;
              }
              else {
                lVar19 = (*ppuVar1)[2];
              }
              FUN_100613a18(lVar26,lVar27 + (ulong)(uint)((int)plVar2[2] * iVar28) * 4,
                            lVar19 + (ulong)(uint)(*(int *)(param_1 + 0x128) * iVar28) * 4,bVar6,
                            (int)plVar2[2],*(int *)(param_1 + 0x128),
                            *(undefined4 *)(param_1 + 0x130),uVar25,uVar12);
              goto LAB_1005ca984;
            }
            FUN_1005c8ed8(ppuVar1,plVar2);
            *(undefined4 *)(plVar2 + 3) = local_23c;
          }
          if (*(int *)(lVar26 + 0x68) != 0) {
            FUN_100612a50(lVar26);
          }
        }
LAB_1005ca984:
        *(uint *)(lVar7 + 0x17c) = *(uint *)(lVar7 + 0x17c) & 0xfffffffd;
        lVar26 = *(long *)(lVar26 + 0x20);
      } while (lVar26 != param_1 + 0x158);
      puVar16 = *ppuVar1;
    }
    if (puVar16 != (undefined8 *)0x0) {
      iVar28 = *(int *)(puVar16 + 1);
      if (0 < iVar28) {
        *(int *)(puVar16 + 1) = iVar28 + -1;
        iVar28 = iVar28 + -1;
      }
      if (iVar28 == 0) {
        lVar26 = *(long *)(param_1 + 0x120);
        if (puVar16[3] == 0) {
          *puVar16 = *(undefined8 *)(lVar26 + 0x14818);
          *(undefined8 **)(lVar26 + 0x14818) = puVar16;
        }
        else {
          FUN_1005d7f1c(lVar26 + 0x14f68,puVar16[3],"",0);
        }
      }
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0xffffffff00000000;
    }
  }
  uVar9 = 0;
  *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
LAB_1005caa24:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}




undefined8 FUN_1005cb268(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x88) == 0) {
    FUN_1005cb2bc(param_1,param_2);
  }
  if (*(int *)(param_2 + 0x8c) == 0) {
    *(undefined4 *)(param_2 + 0x8c) = 1;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  return 0;
}




undefined8 FUN_1005cb2bc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  lVar7 = *(long *)(param_1 + 0x20);
  *(long *)(lVar7 + (long)iVar1 * 8) = param_2;
  *(undefined4 *)(param_2 + 0x88) = 1;
  iVar1 = iVar1 + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (*(int *)(param_1 + 8) <= iVar1) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0x26;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1;
    lVar2 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar6,iVar1 * 8 + 0x10,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dspi.cpp"
                          ,0x504,0);
    if (lVar2 == 0) {
      return 0x26;
    }
    uVar5 = (int)lVar7 - (int)uVar6;
    *(long *)(param_1 + 0x18) = lVar2;
    uVar4 = lVar2 + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_1 + 0x20) = uVar4;
    uVar3 = (int)uVar4 - (int)lVar2;
    if (uVar5 != uVar3) {
      _memmove((void *)(lVar2 + (ulong)uVar3),(void *)(lVar2 + (ulong)uVar5),
               (long)*(int *)(param_1 + 8) << 3);
    }
  }
  return 0;
}




undefined8 FUN_1005cb39c(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x88) == 0) {
    FUN_1005cb2bc();
  }
  return 0;
}




undefined8 FUN_1005cb3bc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 local_21;
  
  local_21 = 0;
  *(undefined2 *)(param_2 + 0x84) = 0;
  *(short *)(param_2 + 0x86) = (short)param_3;
  *(undefined4 *)(param_2 + 0x24) = 0x100000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_1005cb484(param_2,param_1,param_2,param_3,0,param_3,param_4,&local_21);
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x3c) < iVar1) {
    if (iVar1 < 1) {
      iVar2 = 0;
    }
    else {
      lVar3 = 0;
      iVar2 = 0;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar3 * 8);
        if (*(int *)(lVar4 + 0x8c) == 0) {
          *(undefined4 *)(lVar4 + 0x88) = 0;
        }
        else {
          *(long *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8) = lVar4;
          iVar2 = iVar2 + 1;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
    *(int *)(param_1 + 0xc) = iVar2;
  }
  return 0;
}




undefined8
FUN_1005cb484(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
             undefined4 param_6,undefined8 param_7,byte *param_8)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  char local_171;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [264];
  
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = lVar10;
  local_170 = param_6;
  local_16c = param_5;
  if (*(int *)(param_1 + 0x38) == (int)param_7) {
    if (param_8 != (byte *)0x0) {
      *param_8 = ((byte)(*(uint *)(*(long *)(param_1 + 0x58) + 0x17c) >> 3) ^ 0xff) & 1;
    }
    goto LAB_1005cb734;
  }
  if (*(char *)(param_1 + 0x3f) == '\0') {
    local_170 = 0;
  }
  FUN_1005cb840(param_1,param_2,param_3,param_4,&local_16c,&local_170);
  uVar4 = local_16c;
  uVar3 = local_170;
  *(short *)(param_1 + 0x86) = (short)local_170;
  *(short *)(param_1 + 0x84) = (short)local_16c;
  lVar8 = *(long *)(param_1 + 0x58);
  *(uint *)(lVar8 + 0x17c) = *(uint *)(lVar8 + 0x17c) | 2;
  if ((*(byte *)(param_1 + 0x3c) >> 3 & 1) != 0) {
    *(long *)(lVar8 + 0x98) = lVar8;
    uVar7 = (**(code **)(lVar8 + 0xf0))(lVar8 + 0x98,0,0,0);
    if (((int)uVar7 != 0) && ((char)PTR_DAT_10186d408[0x10] < '\0')) {
      local_168[0] = 0;
      FUN_1005acff8(uVar7,7,param_1,"DSPI::RunJob",local_168);
    }
  }
  if ((*(short *)(param_1 + 0x86) == 0) && (*(char *)(param_1 + 0x29) == '\0')) goto LAB_1005cb734;
  *(int *)(param_1 + 0x38) = (int)param_7;
  local_171 = '\0';
  if (*(long *)(param_1 + 0x60) == 0) {
    plVar12 = (long *)(param_1 + 0x40);
    plVar9 = (long *)*plVar12;
    if (plVar9 != plVar12) {
      bVar5 = false;
      do {
        bVar2 = bVar5;
        uVar7 = *(undefined8 *)(plVar9[2] + 0x58);
        if ((*(byte *)(plVar9[2] + 0x78) >> 2 & 1) == 0) {
          FUN_1005cb484(uVar7,param_2,param_1,param_4,uVar4,uVar3,param_7,&local_171);
        }
        else {
          FUN_1005cdd18(uVar7,param_2,param_4,uVar4,uVar3,param_7,&local_171);
        }
        plVar9 = (long *)*plVar9;
        bVar5 = local_171 != '\0' || bVar2;
      } while (plVar9 != plVar12);
      lVar11 = *(long *)PTR____stack_chk_guard_101444218;
      if (local_171 != '\0' || bVar2) goto LAB_1005cb670;
    }
LAB_1005cb67c:
    if ((*(byte *)(param_1 + 0x3c) & 0x21) == 0) {
      lVar8 = *(long *)(param_1 + 0x58);
      if (*(code **)(lVar8 + 0x108) == (code *)0x0) {
        bVar5 = false;
      }
      else {
        *(long *)(lVar8 + 0x98) = lVar8;
        iVar6 = (**(code **)(lVar8 + 0x108))(lVar8 + 0x98,*(undefined2 *)(param_1 + 0x86),0,0,1,1);
        bVar5 = iVar6 != 6;
      }
    }
    else {
      bVar5 = false;
    }
  }
  else {
    FUN_1005cb484(*(long *)(param_1 + 0x60),param_2,param_1,param_4,uVar4,uVar3,param_7,&local_171);
    if (local_171 == '\0') goto LAB_1005cb67c;
LAB_1005cb670:
    bVar5 = true;
  }
  lVar8 = *(long *)(param_1 + 0x58);
  uVar1 = *(uint *)(lVar8 + 0x17c) & 0xfffffff7;
  if (!bVar5) {
    uVar1 = *(uint *)(lVar8 + 0x17c) | 8;
  }
  *(uint *)(lVar8 + 0x17c) = uVar1;
  if (param_8 != (byte *)0x0) {
    *param_8 = bVar5;
  }
  if (*(int *)(lVar8 + 0xe0) != 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      FUN_1005cb2bc(param_2,param_1);
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      *(undefined4 *)(param_1 + 0x8c) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
  }
LAB_1005cb734:
  if (lVar11 != lVar10) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}




undefined8 FUN_1005cb768(long param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  lVar4 = (long)iVar1;
  if (iVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x20);
    *(undefined4 *)(*plVar2 + 0x24) = 0x100000;
    if (0 < iVar1) {
      while( true ) {
        lVar5 = plVar2[lVar4 + -1];
        FUN_1005cb840(lVar5,param_1,0);
        *(undefined2 *)(lVar5 + 0x84) = 0;
        *(undefined2 *)(lVar5 + 0x86) = param_2;
        lVar3 = *(long *)(lVar5 + 0x58);
        *(uint *)(lVar3 + 0x17c) = *(uint *)(lVar3 + 0x17c) | 2;
        if ((*(byte *)(lVar5 + 0x3c) >> 3 & 1) != 0) {
          *(long *)(lVar3 + 0x98) = lVar3;
          (**(code **)(lVar3 + 0xf0))(lVar3 + 0x98,0,0,0);
        }
        *(undefined4 *)(lVar5 + 0x38) = param_3;
        if (lVar4 < 2) break;
        plVar2 = *(long **)(param_1 + 0x20);
        lVar4 = lVar4 + -1;
      }
    }
  }
  return 0;
}




undefined8
FUN_1005cb840(long *param_1,long param_2,ulong *param_3,undefined8 param_4,uint *param_5,
             uint *param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  if (param_3 == (ulong *)0x0) {
    param_3 = (ulong *)param_1[6];
  }
  else {
    param_1[6] = (long)param_3;
  }
  lVar5 = param_1[1];
  *param_1 = lVar5;
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_3 + 0x29);
  if (*(int *)((long)param_3 + 0x24) == 0) {
    *param_6 = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  uVar4 = *param_6;
  if (uVar4 != 0) {
    uVar1 = *param_5;
    uVar7 = (ulong)*(uint *)(param_1 + 4) * (ulong)*(uint *)((long)param_3 + 0x24);
    uVar6 = 0xffffffff;
    if (uVar7 >> 0x34 == 0) {
      uVar6 = (undefined4)(uVar7 >> 0x14);
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar6;
    uVar7 = param_1[2];
    if (uVar7 != 0) {
      if (*param_3 <= uVar7) {
        uVar3 = 0;
        if ((ulong)*(uint *)((long)param_3 + 0x24) != 0) {
          uVar3 = (uVar7 - *param_3) / (ulong)*(uint *)((long)param_3 + 0x24);
        }
        if (uVar3 < uVar4) {
          *param_5 = *param_5 + (int)uVar3;
          *param_6 = *param_6 - (int)uVar3;
        }
        else {
          *param_5 = uVar4;
          *param_6 = 0;
        }
      }
      *(undefined4 *)(param_2 + 0x30) = 1;
    }
    uVar7 = param_1[3];
    if (uVar7 != 0) {
      if (uVar7 < param_3[1]) {
        uVar3 = uVar7 - *param_3;
        if (uVar7 < *param_3 || uVar3 == 0) {
          uVar4 = 0;
        }
        else {
          iVar2 = 0;
          if ((ulong)*(uint *)((long)param_3 + 0x24) != 0) {
            iVar2 = (int)(uVar3 / *(uint *)((long)param_3 + 0x24));
          }
          uVar4 = (iVar2 + uVar1) - *param_5;
          if (*param_6 < uVar4) {
            return 0x1c;
          }
        }
        *param_6 = uVar4;
        if ((char)param_1[5] != '\0') {
          *(undefined1 *)((long)param_1 + 0x29) = 1;
        }
      }
      *(undefined4 *)(param_2 + 0x30) = 1;
    }
    param_1[1] = lVar5 + (ulong)*(uint *)((long)param_1 + 0x24) * (ulong)*param_6;
    return 0;
  }
  return 0;
}




void FUN_1005cb984(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (iVar3 == 0) {
    uVar1 = *param_1 - 1;
    iVar3 = param_3;
    if (0 < *param_1) {
      if (uVar1 < 8) {
        iVar3 = *(int *)(&DAT_10115f7e0 + (long)(int)uVar1 * 4);
      }
      else {
        iVar3 = 1;
      }
    }
    *param_2 = iVar3;
  }
  if (iVar3 < 1000) {
    iVar2 = 1;
    switch(iVar3) {
    case 2:
switchD_1005cb9e4_caseD_2:
      *param_1 = iVar2;
      return;
    case 3:
      *param_1 = 2;
      return;
    case 4:
    case 5:
    case 6:
      *param_1 = iVar3;
      return;
    case 7:
      *param_1 = 8;
      return;
    }
  }
  else if (iVar3 == 1000) {
    *param_1 = 2;
    return;
  }
  iVar2 = *param_1;
  goto switchD_1005cb9e4_caseD_2;
}




bool FUN_1005cba44(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return false;
  }
  if ((param_2 == 0) && (param_2 = param_5, 0 < param_1)) {
    if (param_1 - 1U < 8) {
      param_2 = *(int *)(&DAT_10115f7e0 + (long)(int)(param_1 - 1U) * 4);
      goto LAB_1005cba80;
    }
    iVar1 = 1;
  }
  else {
LAB_1005cba80:
    if (param_2 < 1000) {
      param_1 = 1;
      iVar1 = 2;
      switch(param_2) {
      case 3:
switchD_1005cbaac_caseD_3:
        param_1 = 2;
        iVar1 = param_2;
        break;
      case 4:
      case 5:
      case 6:
        param_1 = param_2;
        iVar1 = param_2;
        break;
      case 7:
        param_1 = 8;
        iVar1 = param_2;
      }
    }
    else {
      iVar1 = param_2;
      if (param_2 == 1000) goto switchD_1005cbaac_caseD_3;
    }
  }
  if ((param_4 == 0) && (param_4 = param_5, 0 < param_3)) {
    if (7 < param_3 - 1U) {
      iVar2 = 1;
      goto switchD_1005cbb2c_caseD_2;
    }
    param_4 = *(int *)(&DAT_10115f7e0 + (long)(int)(param_3 - 1U) * 4);
  }
  if (param_4 < 1000) {
    param_3 = 1;
    iVar2 = 2;
    switch(param_4) {
    case 3:
      goto switchD_1005cbb2c_caseD_3;
    case 4:
    case 5:
    case 6:
      param_3 = param_4;
      iVar2 = param_4;
      break;
    case 7:
      param_3 = 8;
      iVar2 = param_4;
    }
  }
  else {
    iVar2 = param_4;
    if (param_4 != 1000) goto switchD_1005cbb2c_caseD_2;
switchD_1005cbb2c_caseD_3:
    param_3 = 2;
    iVar2 = param_4;
  }
switchD_1005cbb2c_caseD_2:
  return iVar1 != iVar2 || param_1 != param_3;
}




undefined8
FUN_1005cbba4(long param_1,int param_2,uint param_3,uint param_4,int *param_5,uint *param_6,
             uint *param_7,undefined4 *param_8)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  ulong local_90;
  uint *local_88;
  int *local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong local_68;
  uint *local_60;
  int *local_58;
  undefined8 local_50;
  ulong local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  int iStack_34;
  
  local_70._0_4_ = param_4;
  local_38 = param_3;
  iStack_34 = param_2;
  if (((param_3 != 0 || param_2 != 0) || param_4 != 0) ||
     ((((lVar4 = *(long *)(param_1 + 0xd0), lVar4 != 0 && (*(int *)(lVar4 + 0x28) == 0)) &&
       (*(long *)(lVar4 + 0x48) == 0)) && (*(int *)(param_1 + 0xe8) != 0x3e9)))) goto LAB_1005cbcdc;
  local_38 = *(uint *)(param_1 + 0x100);
  if (local_38 != 0) {
    local_70._0_4_ = *(uint *)(param_1 + 0xac);
    if (*(int *)(param_1 + 0xa8) != 0) {
      iStack_34 = *(int *)(param_1 + 0xa8);
    }
    goto switchD_1005cbca4_caseD_2;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    iStack_34 = *(int *)(param_1 + 0x130);
    local_38 = *(uint *)(param_1 + 0x128);
    local_70._0_4_ = *(uint *)(param_1 + 300);
    goto switchD_1005cbca4_caseD_2;
  }
  if ((int)*(short *)(param_1 + 0x170) - (int)*(short *)(param_1 + 0x174) < 2) {
    uVar3 = *(uint *)(param_1 + 0x180);
    local_70._0_4_ = (uint)(uVar3 == 0) << 1;
    iStack_34 = 0;
    local_38 = 1;
    if (uVar3 != 0) {
      local_38 = uVar3;
    }
    goto switchD_1005cbca4_caseD_2;
  }
  if (param_4 == 0) {
    param_4 = *(uint *)(*(long *)(param_1 + 0x90) + 0x160b0);
  }
  if (999 < (int)param_4) {
    if (param_4 != 1000) goto switchD_1005cbca4_default;
switchD_1005cbca4_caseD_3:
    local_38 = 2;
    goto LAB_1005cbcd0;
  }
  iStack_34 = 0;
  local_38 = 1;
  local_70._0_4_ = 2;
  switch(param_4) {
  case 1:
    local_70._0_4_ = 1;
    iStack_34 = 0;
    local_38 = *(uint *)(*(long *)(param_1 + 0x90) + 0x70c);
  case 2:
    goto switchD_1005cbca4_caseD_2;
  case 3:
    goto switchD_1005cbca4_caseD_3;
  case 4:
  case 5:
  case 6:
    local_38 = param_4;
    break;
  case 7:
    local_38 = 8;
    break;
  default:
switchD_1005cbca4_default:
    local_38 = 0;
  }
LAB_1005cbcd0:
  iStack_34 = 0;
  local_70._0_4_ = param_4;
switchD_1005cbca4_caseD_2:
LAB_1005cbcdc:
  pcVar5 = *(code **)(param_1 + 0x108);
  local_40 = local_38;
  local_3c = iStack_34;
  if (pcVar5 == (code *)0x0) {
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = 6;
    }
  }
  else {
    local_50 = 0;
    uStack_78 = 0;
    bVar1 = *(long *)(param_1 + 0x118) == 0;
    if ((ABS(*(float *)(param_1 + 0x184)) < 2e-05) &&
       (*(float *)(param_1 + 0x184) == *(float *)(param_1 + 400))) {
      bVar1 = true;
    }
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 == 0) {
      uVar3 = 1;
      local_68 = 1;
    }
    else {
      local_68 = (ulong)*(uint *)(lVar4 + 0x28);
      uVar3 = *(uint *)(lVar4 + 0x2c);
    }
    local_58 = &iStack_34;
    local_60 = &local_38;
    local_48 = (ulong)(uint)local_70;
    local_90 = (ulong)uVar3;
    local_80 = &local_3c;
    local_88 = &local_40;
    local_70 = (ulong)(uint)local_70;
    *(long *)(param_1 + 0x98) = param_1;
    if (param_8 == (undefined4 *)0x0) {
      (*pcVar5)(param_1 + 0x98,0,&local_68,&local_90,0,1);
    }
    else {
      uVar2 = (*pcVar5)(param_1 + 0x98,*(undefined2 *)(param_1 + 0x86),&local_68,&local_90,bVar1,1);
      *param_8 = uVar2;
    }
    if (0x1f < (int)local_40) {
      local_40 = 0x20;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = local_3c;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = local_40;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = (uint)local_70;
  }
  return 0;
}




undefined8
FUN_1005cbe70(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  if (param_5 != 0) {
    iVar2 = (int)param_4;
    *(short *)(param_5 + 0x210) = (short)param_4;
    *(undefined4 *)(param_5 + 0x208) = *(undefined4 *)(param_1 + 0x38);
    if (param_2 == 0) {
      if (iVar2 != 0) {
        uVar1 = (ulong)(iVar2 - 1) + 1;
        uVar3 = uVar1 & 0x1fffffffc;
        if (uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar5 = (ulong)(iVar2 - 1) + 1 & 0xfffffffffffffffc;
          puVar6 = (undefined8 *)(param_5 + 0x80);
          auVar7 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
          do {
            puVar6[-0x10] = 0;
            puVar6[-0xf] = auVar7._0_8_;
            *puVar6 = 0;
            uVar5 = uVar5 - 4;
            puVar6[1] = auVar7._0_8_;
            puVar6 = puVar6 + 2;
          } while (uVar5 != 0);
        }
        if (uVar1 != uVar3) {
          iVar2 = iVar2 - (int)uVar3;
          puVar4 = (undefined4 *)(param_5 + uVar3 * 4 + 0x80);
          do {
            puVar4[-0x20] = 0;
            *puVar4 = 0;
            iVar2 = iVar2 + -1;
            puVar4 = puVar4 + 1;
          } while (iVar2 != 0);
        }
      }
    }
    else {
      (*DAT_101d919f0)(param_2,param_3,param_4,param_5 + 0x80,param_5);
    }
    *(int *)(param_5 + 0x20c) = *(int *)(param_5 + 0x20c) + (int)param_3;
  }
  return 0;
}




undefined8 FUN_1005cbf4c(long param_1,int *param_2,int *param_3,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if ((param_5 == 0) || ((*(byte *)(param_5 + 0x78) & 1) == 0)) {
    iVar2 = (int)*(short *)(param_1 + 0x170) - (int)*(short *)(param_1 + 0x174);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x174);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xac);
    if (iVar4 != 0) goto switchD_1005cc00c_caseD_2;
    iVar4 = *param_2;
    goto LAB_1005cc07c;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    iVar4 = *(int *)(param_1 + 0x130);
    iVar1 = *(int *)(param_1 + 0x128);
    iVar3 = *(int *)(param_1 + 300);
    goto switchD_1005cc00c_caseD_2;
  }
  if (iVar2 < 2) {
    if (param_5 == 0) {
LAB_1005cc05c:
      iVar4 = 0;
      iVar2 = *(int *)(param_1 + 0x180);
      iVar3 = (uint)(iVar2 == 0) << 1;
      iVar1 = 1;
      if (iVar2 != 0) {
        iVar1 = iVar2;
      }
    }
    else if (*(long *)(param_5 + 0x40) == 0) {
      lVar5 = *(long *)(param_5 + 0x58);
      if (*(int *)(lVar5 + 0x128) == 0) goto LAB_1005cc05c;
      iVar4 = *(int *)(lVar5 + 0x130);
      iVar1 = *(int *)(lVar5 + 0x128);
      iVar3 = *(int *)(lVar5 + 300);
    }
    else {
      if (*(short *)(param_5 + 0x3a) == 0) goto LAB_1005cc05c;
      iVar4 = 0;
      iVar1 = (int)*(short *)(param_5 + 0x3a);
      iVar3 = 0;
    }
    goto switchD_1005cc00c_caseD_2;
  }
  iVar2 = *param_4;
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x90) + 0x160b0);
  }
  if (999 < iVar2) {
    if (iVar2 != 1000) goto switchD_1005cc00c_default;
switchD_1005cc00c_caseD_3:
    iVar1 = 2;
    goto LAB_1005cc03c;
  }
  iVar4 = 0;
  iVar1 = 1;
  iVar3 = 2;
  switch(iVar2) {
  case 1:
    iVar4 = 0;
    iVar3 = 1;
    iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x70c);
    break;
  case 2:
    break;
  case 3:
    goto switchD_1005cc00c_caseD_3;
  case 4:
  case 5:
  case 6:
    iVar4 = 0;
    iVar1 = iVar2;
    iVar3 = iVar2;
    break;
  case 7:
    iVar1 = 8;
    goto LAB_1005cc03c;
  default:
switchD_1005cc00c_default:
    iVar1 = 0;
LAB_1005cc03c:
    iVar4 = 0;
    iVar3 = iVar2;
  }
switchD_1005cc00c_caseD_2:
  if (param_2 != (int *)0x0) {
LAB_1005cc07c:
    *param_2 = iVar4;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar3;
  }
  return 0;
}




undefined8 FUN_1005cc0d4(ulong param_1,ulong *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == (ulong *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    *param_2 = param_1;
    if (param_1 == 0) {
      uVar1 = 0x1e;
    }
    else if ((param_1 & 3) == 0) {
      if (*(int *)(param_1 + 0x80) == -0x5331aa13) {
        if (param_3 == (long *)0x0) {
          uVar1 = 0;
        }
        else {
          lVar2 = *(long *)(param_1 + 0x90);
          uVar1 = 0x1c;
          if (((lVar2 != 0) && (*param_3 == 0)) && (uVar1 = FUN_100570b94(lVar2), (int)uVar1 == 0))
          {
            uVar1 = 0;
            *param_3 = lVar2;
          }
        }
      }
      else {
        uVar1 = 0x1e;
      }
    }
    else {
      uVar1 = 0x1e;
    }
  }
  return uVar1;
}




undefined8 FUN_1005cc16c(long param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_38 [2];
  long local_30;
  undefined4 local_28;
  
  if (param_3 == 0) {
    if ((*(long *)(param_1 + 0xd0) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x58),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      *(long *)(param_1 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001005cc1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1 + 0x98);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    local_38[0] = 0xe;
    local_30 = param_1;
    local_28 = param_2;
    uVar1 = FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,1);
  }
  return uVar1;
}




undefined8 FUN_1005cc1d8(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  short sVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  undefined4 local_58;
  
  if (param_3 != 0) {
    if ((param_4 & 1) == 0) {
      sVar1 = *(short *)(param_1 + 0x170);
    }
    else {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
      sVar1 = *(short *)(param_1 + 0x170);
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    if (0 < sVar1) {
      iVar4 = 0;
      do {
        local_70 = 0;
        FUN_1005c91e4(param_1,iVar4,&local_70,0,0,param_4);
        local_68[0] = 0xe;
        local_60 = local_70;
        local_58 = (undefined4)param_2;
        FUN_10056be4c(*(undefined8 *)(local_70 + 0x90),local_68,1);
        iVar4 = iVar4 + 1;
      } while (sVar1 != iVar4);
    }
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar2 = 0;
  }
  else {
    pcVar3 = *(code **)(*(long *)(param_1 + 0xd0) + 0x58);
    if (pcVar3 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      *(long *)(param_1 + 0x98) = param_1;
      uVar2 = (*pcVar3)(param_1 + 0x98,param_2);
    }
  }
  return uVar2;
}




undefined8
FUN_1005cc2dc(float param_1,float param_2,float param_3,float param_4,float param_5,
             undefined8 param_6,float param_7,float param_8,int param_9,ulong param_10,int param_11,
             float *param_12,int *param_13)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  int iVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar30 = (float)param_6;
  *param_13 = 0;
  iVar16 = (int)param_10;
  if (param_9 < 1000) {
    uVar18 = (undefined1)param_6;
    uVar20 = (undefined1)((ulong)param_6 >> 8);
    uVar22 = (undefined1)((ulong)param_6 >> 0x10);
    uVar24 = (undefined1)((ulong)param_6 >> 0x18);
    uVar17 = SUB41(param_3,0);
    uVar19 = (undefined1)((uint)param_3 >> 8);
    uVar21 = (undefined1)((uint)param_3 >> 0x10);
    uVar23 = (undefined1)((uint)param_3 >> 0x18);
    switch(param_9) {
    case 2:
      switch(iVar16) {
      case 1:
        *param_12 = SQRT(param_1 * param_1 + param_3 * param_3 * 0.5 + param_5 * param_5 * 0.25);
        iVar16 = 1;
        break;
      case 2:
        fVar30 = param_3 * param_3 * 0.5;
        fVar25 = param_5 * param_5 * 0.25;
        *param_12 = SQRT(param_1 * param_1 + fVar30 + fVar25);
        param_12[1] = SQRT(param_2 * param_2 + fVar30 + fVar25);
        iVar16 = 2;
        break;
      default:
        goto switchD_1005cc330_default;
      case 4:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = param_5 * 0.5;
        param_12[3] = 0.0;
        iVar16 = 4;
        break;
      case 6:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = fVar30;
        iVar16 = 6;
        break;
      case 8:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = fVar30;
        param_12[6] = param_7;
        param_12[7] = param_8;
        goto LAB_1005cd1c8;
      }
      break;
    case 3:
      goto switchD_1005cc330_caseD_3;
    case 4:
      if (param_11 == 3) {
        _bzero(param_12,-(ulong)((uint)(iVar16 << 2) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 << 2) << 2);
        uVar13 = (ulong)(iVar16 - 1);
        if (0 < iVar16) {
          param_3 = param_3 * 0.707;
          uVar10 = uVar13 + 1 & 0x1fffffff8;
          if (uVar10 == 0) {
            uVar10 = 0;
          }
          else if ((param_12 + (long)iVar16 + uVar13 < param_12) ||
                  (param_12 + uVar13 < param_12 + iVar16)) {
            auVar27._0_8_ = CONCAT44(param_3,param_3);
            auVar27._8_4_ = param_3;
            auVar27._12_4_ = param_3;
            uVar14 = uVar13 + 1 & 0xfffffffffffffff8;
            auVar29 = NEON_ext(auVar27,auVar27,8,1);
            pfVar11 = param_12;
            do {
              *(undefined8 *)pfVar11 = auVar27._0_8_;
              uVar28 = auVar29._0_8_;
              *(undefined8 *)(pfVar11 + 2) = uVar28;
              *(undefined8 *)(pfVar11 + 4) = auVar27._0_8_;
              *(undefined8 *)(pfVar11 + 6) = uVar28;
              puVar1 = (undefined8 *)
                       ((-(param_10 >> 0x1f & 1) & 0xfffffffc00000000 | (param_10 & 0xffffffff) << 2
                        ) + (long)pfVar11);
              *puVar1 = auVar27._0_8_;
              puVar1[1] = uVar28;
              puVar1[2] = auVar27._0_8_;
              uVar14 = uVar14 - 8;
              pfVar11 = pfVar11 + 8;
              puVar1[3] = uVar28;
            } while (uVar14 != 0);
          }
          else {
            uVar10 = 0;
          }
          if (uVar13 + 1 != uVar10) {
            iVar12 = iVar16 - (int)uVar10;
            pfVar11 = param_12 + uVar10;
            pfVar15 = param_12 + uVar10 + (long)iVar16;
            do {
              *pfVar11 = param_3;
              *pfVar15 = param_3;
              iVar12 = iVar12 + -1;
              pfVar11 = pfVar11 + 1;
              pfVar15 = pfVar15 + 1;
            } while (iVar12 != 0);
          }
        }
        *param_13 = iVar16;
        return 0;
      }
      if ((8 < iVar16) || (param_11 == 4)) {
        _bzero(param_12,-(ulong)((uint)(iVar16 << 2) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 << 2) << 2);
        if (0 < iVar16) {
          uVar13 = 0;
          do {
            if ((uVar13 & 1) == 0) {
              param_12[uVar13] = param_1;
            }
            else {
              param_12[(long)iVar16 + uVar13] = param_2;
            }
            uVar13 = uVar13 + 1;
          } while (iVar16 != (int)uVar13);
        }
        *param_13 = iVar16;
        return 0;
      }
      switch(iVar16) {
      case 1:
        *param_12 = param_1 + param_3;
        param_12[1] = param_2 + param_3;
        param_12[2] = param_5;
        param_12[3] = fVar30;
        iVar16 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_5;
        param_12[5] = 0.0;
        param_12[6] = 0.0;
        param_12[7] = fVar30;
        iVar16 = 2;
        break;
      default:
        goto switchD_1005cc330_default;
      case 4:
        *param_12 = param_1;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[9] = 0.0;
        param_12[10] = param_5 * 0.5;
        param_12[0xd] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xf] = fVar30 * 0.5;
        iVar16 = 4;
        break;
      case 6:
        param_3 = param_3 * 0.5;
        param_4 = param_4 * 0.25;
        uVar17 = SUB41(param_4,0);
        uVar7 = (uint)param_4 >> 8;
        uVar8 = (uint)param_4 >> 0x10;
        uVar9 = (uint)param_4 >> 0x18;
        *param_12 = param_1;
        if (param_11 == 2) {
          param_12[1] = param_3;
          param_12[2] = 0.0;
          param_12[3] = 0.0;
          param_12[4] = 0.0;
          param_12[5] = param_4;
          param_12[6] = 0.0;
          param_12[7] = param_3;
          param_12[8] = param_2;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xb] = param_4;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[0xe] = 0.0;
          param_12[0xf] = param_5;
          param_12[0x10] = 0.0;
          param_12[0x11] = param_4;
          param_4 = 0.0;
          param_12[0x12] = 0.0;
          uVar18 = uVar17;
          uVar20 = (char)uVar7;
          uVar22 = (char)uVar8;
          uVar24 = (char)uVar9;
        }
        else {
          param_12[1] = 0.0;
          param_12[2] = param_3;
          param_12[3] = param_4;
          param_12[4] = 0.0;
          param_12[5] = 0.0;
          param_12[6] = 0.0;
          param_12[7] = param_2;
          param_12[8] = param_3;
          param_12[9] = param_4;
          param_12[0xe] = 0.0;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[0xf] = param_4;
          param_12[0x10] = param_5;
          fVar30 = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
        }
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x15] = param_4;
        param_12[0x16] = fVar30;
        param_12[0x17] = (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar18)));
        iVar16 = 6;
        break;
      case 8:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[9] = param_2;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_4 = param_4 * 0.25;
        param_12[2] = param_3 * 0.5;
        param_12[3] = param_4;
        param_12[6] = param_7 * 0.5;
        param_12[10] = param_3 * 0.5;
        param_12[0xb] = param_4;
        param_12[0xe] = 0.0;
        param_12[0xf] = param_8 * 0.5;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[0x12] = 0.0;
        param_12[0x13] = param_4;
        param_12[0x14] = param_5;
        param_12[0x15] = 0.0;
        param_12[0x16] = param_7 * 0.5;
        param_12[0x19] = 0.0;
        param_12[0x1a] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x1b] = param_4;
        param_12[0x1c] = 0.0;
        param_12[0x1d] = fVar30;
        param_12[0x1e] = 0.0;
        param_12[0x1f] = param_8 * 0.5;
        goto LAB_1005cd1c8;
      }
      break;
    case 5:
      if (param_11 == 3) {
        _bzero(param_12,-(ulong)((uint)(iVar16 * 5) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 * 5) << 2);
        if (0 < iVar16) {
          uVar13 = (ulong)(iVar16 - 1) + 1;
          uVar10 = uVar13 & 0x1fffffff8;
          if (uVar10 == 0) {
            uVar10 = 0;
          }
          else {
            uVar14 = (ulong)(iVar16 - 1) + 1 & 0xfffffffffffffff8;
            pfVar11 = param_12 + (long)(iVar16 << 1) + 4;
            auVar5[4] = uVar17;
            auVar5._0_4_ = param_3;
            auVar5[5] = uVar19;
            auVar5[6] = uVar21;
            auVar5[7] = uVar23;
            auVar5[8] = uVar17;
            auVar5[9] = uVar19;
            auVar5[10] = uVar21;
            auVar5[0xb] = uVar23;
            auVar5[0xc] = uVar17;
            auVar5[0xd] = uVar19;
            auVar5[0xe] = uVar21;
            auVar5[0xf] = uVar23;
            auVar6[4] = uVar17;
            auVar6._0_4_ = param_3;
            auVar6[5] = uVar19;
            auVar6[6] = uVar21;
            auVar6[7] = uVar23;
            auVar6[8] = uVar17;
            auVar6[9] = uVar19;
            auVar6[10] = uVar21;
            auVar6[0xb] = uVar23;
            auVar6[0xc] = uVar17;
            auVar6[0xd] = uVar19;
            auVar6[0xe] = uVar21;
            auVar6[0xf] = uVar23;
            auVar29 = NEON_ext(auVar5,auVar6,8,1);
            do {
              *(ulong *)(pfVar11 + -4) =
                   CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,param_3))));
              *(long *)(pfVar11 + -2) = auVar29._0_8_;
              *(ulong *)pfVar11 =
                   CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,param_3))));
              uVar14 = uVar14 - 8;
              *(long *)(pfVar11 + 2) = auVar29._0_8_;
              pfVar11 = pfVar11 + 8;
            } while (uVar14 != 0);
          }
          if (uVar13 != uVar10) {
            iVar12 = iVar16 - (int)uVar10;
            pfVar11 = param_12 + uVar10 + (long)(iVar16 << 1);
            do {
              *pfVar11 = param_3;
              iVar12 = iVar12 + -1;
              pfVar11 = pfVar11 + 1;
            } while (iVar12 != 0);
          }
        }
        *param_13 = iVar16;
        return 0;
      }
      if ((8 < iVar16) || (param_11 == 4)) {
        _bzero(param_12,-(ulong)((uint)(iVar16 * 5) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 * 5) << 2);
        if (0 < iVar16) {
          uVar13 = 0;
          do {
            if ((uVar13 & 1) == 0) {
              param_12[uVar13] = param_1;
            }
            else {
              param_12[(long)iVar16 + uVar13] = param_2;
            }
            uVar13 = uVar13 + 1;
          } while (iVar16 != (int)uVar13);
        }
        *param_13 = iVar16;
        return 0;
      }
      switch(iVar16) {
      case 1:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_5;
        param_12[4] = fVar30;
        iVar16 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_3 * 0.5;
        param_12[5] = param_3 * 0.5;
        param_12[6] = param_5;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[9] = fVar30;
        iVar16 = 2;
        break;
      default:
        goto switchD_1005cc330_default;
      case 4:
        *param_12 = param_1;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_12[8] = param_3 * 0.5;
        param_12[9] = param_3 * 0.5;
        param_12[0xe] = param_5;
        param_12[0x11] = 0.0;
        param_12[0x12] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x13] = fVar30;
        iVar16 = 4;
        break;
      case 6:
        *param_12 = param_1;
        param_12[5] = 0.0;
        param_12[6] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        if (param_11 == 2) {
          param_12[7] = 0.0;
          param_12[8] = param_2;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xd] = param_3;
          param_12[0x14] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0xe] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x15] = param_5;
          param_12[0x16] = 0.0;
          fVar30 = 0.0;
        }
        else {
          param_12[7] = param_2;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[8] = 0.0;
          param_12[9] = 0.0;
          param_12[0xe] = param_3;
          param_12[0x15] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x16] = param_5;
          uVar18 = 0;
          uVar20 = 0;
          uVar22 = 0;
          uVar24 = 0;
        }
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        param_12[0x1a] = 0.0;
        param_12[0x1b] = 0.0;
        param_12[0x1c] = (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar18)));
        param_12[0x1d] = fVar30;
        iVar16 = 6;
        break;
      case 8:
        *param_12 = param_1;
        param_12[5] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[9] = param_2;
        param_12[0xe] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[6] = param_7 * 0.5;
        param_12[0xf] = param_8 * 0.5;
        param_12[0x12] = param_3;
        param_12[0x1b] = 0.0;
        param_12[0x19] = 0.0;
        param_12[0x1a] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x1c] = param_5;
        param_12[0x1d] = 0.0;
        param_12[0x1e] = param_7 * 0.5;
        param_12[0x23] = 0.0;
        param_12[0x24] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x1f] = 0.0;
        param_12[0x20] = 0.0;
        param_12[0x25] = fVar30;
        param_12[0x26] = 0.0;
        param_12[0x27] = param_8 * 0.5;
        goto LAB_1005cd1c8;
      }
      break;
    case 6:
      if (param_11 == 3) {
        _bzero(param_12,-(ulong)((uint)(iVar16 * 6) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 * 6) << 2);
        if (0 < iVar16) {
          uVar13 = (ulong)(iVar16 - 1) + 1;
          uVar10 = uVar13 & 0x1fffffff8;
          if (uVar10 == 0) {
            uVar10 = 0;
          }
          else {
            uVar14 = (ulong)(iVar16 - 1) + 1 & 0xfffffffffffffff8;
            pfVar11 = param_12 + (long)(iVar16 << 1) + 4;
            auVar3[4] = uVar17;
            auVar3._0_4_ = param_3;
            auVar3[5] = uVar19;
            auVar3[6] = uVar21;
            auVar3[7] = uVar23;
            auVar3[8] = uVar17;
            auVar3[9] = uVar19;
            auVar3[10] = uVar21;
            auVar3[0xb] = uVar23;
            auVar3[0xc] = uVar17;
            auVar3[0xd] = uVar19;
            auVar3[0xe] = uVar21;
            auVar3[0xf] = uVar23;
            auVar4[4] = uVar17;
            auVar4._0_4_ = param_3;
            auVar4[5] = uVar19;
            auVar4[6] = uVar21;
            auVar4[7] = uVar23;
            auVar4[8] = uVar17;
            auVar4[9] = uVar19;
            auVar4[10] = uVar21;
            auVar4[0xb] = uVar23;
            auVar4[0xc] = uVar17;
            auVar4[0xd] = uVar19;
            auVar4[0xe] = uVar21;
            auVar4[0xf] = uVar23;
            auVar29 = NEON_ext(auVar3,auVar4,8,1);
            do {
              *(ulong *)(pfVar11 + -4) =
                   CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,param_3))));
              *(long *)(pfVar11 + -2) = auVar29._0_8_;
              *(ulong *)pfVar11 =
                   CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,param_3))));
              uVar14 = uVar14 - 8;
              *(long *)(pfVar11 + 2) = auVar29._0_8_;
              pfVar11 = pfVar11 + 8;
            } while (uVar14 != 0);
          }
          if (uVar13 != uVar10) {
            iVar12 = iVar16 - (int)uVar10;
            pfVar11 = param_12 + uVar10 + (long)(iVar16 << 1);
            do {
              *pfVar11 = param_3;
              iVar12 = iVar12 + -1;
              pfVar11 = pfVar11 + 1;
            } while (iVar12 != 0);
          }
        }
        *param_13 = iVar16;
        return 0;
      }
      if ((8 < iVar16) || (param_11 == 4)) {
        _bzero(param_12,-(ulong)((uint)(iVar16 * 6) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 * 6) << 2);
        if (0 < iVar16) {
          uVar13 = 0;
          do {
            if ((uVar13 & 1) == 0) {
              param_12[uVar13] = param_1;
            }
            else {
              param_12[(long)iVar16 + uVar13] = param_2;
            }
            uVar13 = uVar13 + 1;
          } while (iVar16 != (int)uVar13);
        }
        *param_13 = iVar16;
        return 0;
      }
      switch(iVar16) {
      case 1:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = fVar30;
        iVar16 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_3 * 0.5;
        param_12[5] = param_3 * 0.5;
        param_12[6] = param_4 * 0.5;
        param_12[7] = param_4 * 0.5;
        param_12[8] = param_5;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = fVar30;
        iVar16 = 2;
        break;
      default:
        goto switchD_1005cc330_default;
      case 4:
        *param_12 = param_1;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[8] = param_3 * 0.5;
        param_12[9] = param_3 * 0.5;
        param_12[0xc] = param_4 * 0.5;
        param_12[0xd] = param_4 * 0.5;
        param_12[0x12] = param_5;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x17] = fVar30;
        iVar16 = 4;
        break;
      case 6:
        *param_12 = param_1;
        param_12[5] = 0.0;
        param_12[6] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        if (param_11 == 2) {
          param_12[7] = 0.0;
          param_12[8] = param_2;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xd] = param_3;
          param_12[0x16] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = 0.0;
          param_12[0xe] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x17] = param_4;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = param_5;
          param_12[0x1c] = 0.0;
          param_12[0x1d] = 0.0;
          param_12[0x1e] = 0.0;
          param_12[0x1f] = 0.0;
          fVar30 = 0.0;
        }
        else {
          param_12[7] = param_2;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[8] = 0.0;
          param_12[9] = 0.0;
          param_12[0xe] = param_3;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x15] = param_4;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = 0.0;
          param_12[0x16] = 0.0;
          param_12[0x17] = 0.0;
          param_12[0x1c] = param_5;
          param_12[0x1d] = 0.0;
          uVar18 = 0;
          uVar20 = 0;
          uVar22 = 0;
          uVar24 = 0;
          param_12[0x1e] = 0.0;
          param_12[0x1f] = 0.0;
        }
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar18)));
        param_12[0x23] = fVar30;
        iVar16 = 6;
        break;
      case 8:
        *param_12 = param_1;
        param_12[5] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[9] = param_2;
        param_12[0xe] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[6] = param_7 * 0.5;
        param_12[0xf] = param_8 * 0.5;
        param_12[0x12] = param_3;
        param_12[0x19] = 0.0;
        param_12[0x1a] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x1b] = param_4;
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x23] = 0.0;
        param_12[0x1c] = 0.0;
        param_12[0x1d] = 0.0;
        param_12[0x1e] = 0.0;
        param_12[0x1f] = 0.0;
        param_12[0x24] = param_5;
        param_12[0x25] = 0.0;
        param_12[0x26] = param_7 * 0.5;
        param_12[0x2b] = 0.0;
        param_12[0x2c] = 0.0;
        param_12[0x29] = 0.0;
        param_12[0x2a] = 0.0;
        param_12[0x27] = 0.0;
        param_12[0x28] = 0.0;
        param_12[0x2d] = fVar30;
        param_12[0x2e] = 0.0;
        param_12[0x2f] = param_8 * 0.5;
        goto LAB_1005cd1c8;
      }
      break;
    case 7:
      if (param_11 == 3) {
        _bzero(param_12,-(ulong)((uint)(iVar16 << 3) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 << 3) << 2);
        if (0 < iVar16) {
          uVar13 = (ulong)(iVar16 - 1) + 1;
          uVar10 = uVar13 & 0x1fffffff8;
          if (uVar10 == 0) {
            uVar10 = 0;
          }
          else {
            uVar14 = (ulong)(iVar16 - 1) + 1 & 0xfffffffffffffff8;
            pfVar11 = param_12 + (long)(iVar16 << 1) + 4;
            auVar29[4] = uVar17;
            auVar29._0_4_ = param_3;
            auVar29[5] = uVar19;
            auVar29[6] = uVar21;
            auVar29[7] = uVar23;
            auVar29[8] = uVar17;
            auVar29[9] = uVar19;
            auVar29[10] = uVar21;
            auVar29[0xb] = uVar23;
            auVar29[0xc] = uVar17;
            auVar29[0xd] = uVar19;
            auVar29[0xe] = uVar21;
            auVar29[0xf] = uVar23;
            auVar2[4] = uVar17;
            auVar2._0_4_ = param_3;
            auVar2[5] = uVar19;
            auVar2[6] = uVar21;
            auVar2[7] = uVar23;
            auVar2[8] = uVar17;
            auVar2[9] = uVar19;
            auVar2[10] = uVar21;
            auVar2[0xb] = uVar23;
            auVar2[0xc] = uVar17;
            auVar2[0xd] = uVar19;
            auVar2[0xe] = uVar21;
            auVar2[0xf] = uVar23;
            auVar29 = NEON_ext(auVar29,auVar2,8,1);
            do {
              *(ulong *)(pfVar11 + -4) =
                   CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,param_3))));
              *(long *)(pfVar11 + -2) = auVar29._0_8_;
              *(ulong *)pfVar11 =
                   CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,param_3))));
              uVar14 = uVar14 - 8;
              *(long *)(pfVar11 + 2) = auVar29._0_8_;
              pfVar11 = pfVar11 + 8;
            } while (uVar14 != 0);
          }
          if (uVar13 != uVar10) {
            iVar12 = iVar16 - (int)uVar10;
            pfVar11 = param_12 + uVar10 + (long)(iVar16 << 1);
            do {
              *pfVar11 = param_3;
              iVar12 = iVar12 + -1;
              pfVar11 = pfVar11 + 1;
            } while (iVar12 != 0);
          }
        }
        *param_13 = iVar16;
        return 0;
      }
      if ((8 < iVar16) || (param_11 == 4)) {
        _bzero(param_12,-(ulong)((uint)(iVar16 << 3) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar16 << 3) << 2);
        if (0 < iVar16) {
          uVar13 = 0;
          do {
            if ((uVar13 & 1) == 0) {
              param_12[uVar13] = param_1;
            }
            else {
              param_12[(long)iVar16 + uVar13] = param_2;
            }
            uVar13 = uVar13 + 1;
          } while (iVar16 != (int)uVar13);
        }
        *param_13 = iVar16;
        return 0;
      }
      switch(iVar16) {
      case 1:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = fVar30;
        param_12[6] = param_7;
        param_12[7] = param_8;
        iVar16 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[8] = param_5;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = fVar30;
        param_12[4] = param_3 * 0.5;
        param_12[5] = param_3 * 0.5;
        param_12[6] = param_4 * 0.5;
        param_12[7] = param_4 * 0.5;
        param_12[0xc] = param_7;
        param_12[0xd] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xf] = param_8;
        iVar16 = 2;
        break;
      default:
        goto switchD_1005cc330_default;
      case 4:
        *param_12 = param_1;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[8] = param_3 * 0.5;
        param_12[9] = param_3 * 0.5;
        param_12[0xc] = param_4 * 0.5;
        param_12[0xd] = param_4 * 0.5;
        param_12[0x12] = param_5 * 0.5;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x17] = fVar30 * 0.5;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        param_12[0x1a] = param_7 * 0.5;
        param_12[0x1d] = 0.0;
        param_12[0x1e] = 0.0;
        param_12[0x1b] = 0.0;
        param_12[0x1c] = 0.0;
        param_12[0x1f] = param_8 * 0.5;
        iVar16 = 4;
        break;
      case 6:
        param_7 = param_7 * 0.5;
        *param_12 = param_1;
        param_8 = param_8 * 0.5;
        uVar18 = SUB41(param_8,0);
        uVar20 = (undefined1)((uint)param_8 >> 8);
        uVar22 = (undefined1)((uint)param_8 >> 0x10);
        uVar24 = (undefined1)((uint)param_8 >> 0x18);
        param_12[5] = 0.0;
        param_12[6] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        if (param_11 == 2) {
          param_12[7] = 0.0;
          param_12[8] = param_2;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xd] = param_3;
          param_12[0x16] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = 0.0;
          param_12[0xe] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x17] = param_4;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = param_5;
          param_12[0x1e] = 0.0;
          param_12[0x1f] = 0.0;
          param_12[0x20] = 0.0;
          param_12[0x21] = 0.0;
          param_12[0x1c] = 0.0;
          param_12[0x1d] = 0.0;
          param_12[0x22] = fVar30;
          param_12[0x23] = 0.0;
          param_12[0x24] = param_7;
          param_12[0x25] = 0.0;
          param_12[0x26] = 0.0;
          param_12[0x27] = param_7;
          param_12[0x2a] = 0.0;
          param_12[0x2b] = 0.0;
          param_12[0x2c] = param_8;
          uVar18 = 0;
          uVar20 = 0;
          uVar22 = 0;
          uVar24 = 0;
          param_12[0x28] = 0.0;
          param_12[0x29] = 0.0;
        }
        else {
          param_12[7] = param_2;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[8] = 0.0;
          param_12[9] = 0.0;
          param_12[0xe] = param_3;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x15] = param_4;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = 0.0;
          param_12[0x16] = 0.0;
          param_12[0x17] = 0.0;
          param_12[0x1c] = param_5;
          param_12[0x21] = 0.0;
          param_12[0x22] = 0.0;
          param_12[0x1f] = 0.0;
          param_12[0x20] = 0.0;
          param_12[0x1d] = 0.0;
          param_12[0x1e] = 0.0;
          param_12[0x23] = fVar30;
          param_12[0x24] = param_7;
          param_12[0x25] = 0.0;
          param_12[0x26] = 0.0;
          param_12[0x27] = 0.0;
          param_12[0x28] = param_7;
          param_12[0x29] = 0.0;
          param_12[0x2a] = 0.0;
          param_12[0x2b] = param_8;
          param_8 = 0.0;
          param_12[0x2c] = 0.0;
        }
        param_12[0x2d] = 0.0;
        param_12[0x2e] = param_8;
        param_12[0x2f] = (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar18)));
        iVar16 = 6;
        break;
      case 8:
        *param_12 = param_1;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[5] = 0.0;
        param_12[6] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[9] = param_2;
        param_12[0xe] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_12[0x12] = param_3;
        param_12[0x19] = 0.0;
        param_12[0x1a] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x1b] = param_4;
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x23] = 0.0;
        param_12[0x1c] = 0.0;
        param_12[0x1d] = 0.0;
        param_12[0x1e] = 0.0;
        param_12[0x1f] = 0.0;
        param_12[0x24] = param_5;
        param_12[0x2b] = 0.0;
        param_12[0x2c] = 0.0;
        param_12[0x29] = 0.0;
        param_12[0x2a] = 0.0;
        param_12[0x27] = 0.0;
        param_12[0x28] = 0.0;
        param_12[0x25] = 0.0;
        param_12[0x26] = 0.0;
        param_12[0x2d] = fVar30;
        param_12[0x32] = 0.0;
        param_12[0x33] = 0.0;
        param_12[0x34] = 0.0;
        param_12[0x35] = 0.0;
        param_12[0x2e] = 0.0;
        param_12[0x2f] = 0.0;
        param_12[0x30] = 0.0;
        param_12[0x31] = 0.0;
        param_12[0x36] = param_7;
        param_12[0x3d] = 0.0;
        param_12[0x3e] = 0.0;
        param_12[0x3b] = 0.0;
        param_12[0x3c] = 0.0;
        param_12[0x39] = 0.0;
        param_12[0x3a] = 0.0;
        param_12[0x37] = 0.0;
        param_12[0x38] = 0.0;
        param_12[0x3f] = param_8;
        goto LAB_1005cd1c8;
      }
      break;
    default:
      goto switchD_1005cc330_default;
    }
  }
  else {
    if (param_9 != 1000) {
      return 0;
    }
switchD_1005cc330_caseD_3:
    if (param_11 == 3) {
      _bzero(param_12,-(ulong)((uint)(iVar16 << 1) >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(uint)(iVar16 << 1) << 2);
      uVar13 = (ulong)(iVar16 - 1);
      if (0 < iVar16) {
        param_3 = param_3 * 0.707;
        uVar10 = uVar13 + 1 & 0x1fffffff8;
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else if ((param_12 + (long)iVar16 + uVar13 < param_12) ||
                (param_12 + uVar13 < param_12 + iVar16)) {
          auVar26._0_8_ = CONCAT44(param_3,param_3);
          auVar26._8_4_ = param_3;
          auVar26._12_4_ = param_3;
          uVar14 = uVar13 + 1 & 0xfffffffffffffff8;
          auVar29 = NEON_ext(auVar26,auVar26,8,1);
          pfVar11 = param_12;
          do {
            *(undefined8 *)pfVar11 = auVar26._0_8_;
            uVar28 = auVar29._0_8_;
            *(undefined8 *)(pfVar11 + 2) = uVar28;
            *(undefined8 *)(pfVar11 + 4) = auVar26._0_8_;
            *(undefined8 *)(pfVar11 + 6) = uVar28;
            puVar1 = (undefined8 *)
                     ((-(param_10 >> 0x1f & 1) & 0xfffffffc00000000 | (param_10 & 0xffffffff) << 2)
                     + (long)pfVar11);
            *puVar1 = auVar26._0_8_;
            puVar1[1] = uVar28;
            puVar1[2] = auVar26._0_8_;
            uVar14 = uVar14 - 8;
            pfVar11 = pfVar11 + 8;
            puVar1[3] = uVar28;
          } while (uVar14 != 0);
        }
        else {
          uVar10 = 0;
        }
        if (uVar13 + 1 != uVar10) {
          iVar12 = iVar16 - (int)uVar10;
          pfVar11 = param_12 + uVar10;
          pfVar15 = param_12 + uVar10 + (long)iVar16;
          do {
            *pfVar11 = param_3;
            *pfVar15 = param_3;
            iVar12 = iVar12 + -1;
            pfVar11 = pfVar11 + 1;
            pfVar15 = pfVar15 + 1;
          } while (iVar12 != 0);
        }
      }
      *param_13 = iVar16;
      return 0;
    }
    if ((8 < iVar16) || (param_11 == 4)) {
      _bzero(param_12,-(ulong)((uint)(iVar16 << 1) >> 0x1f) & 0xfffffffc00000000 |
                      (ulong)(uint)(iVar16 << 1) << 2);
      if (0 < iVar16) {
        uVar13 = 0;
        do {
          if ((uVar13 & 1) == 0) {
            param_12[uVar13] = param_1;
          }
          else {
            param_12[(long)iVar16 + uVar13] = param_2;
          }
          uVar13 = uVar13 + 1;
        } while (iVar16 != (int)uVar13);
      }
      *param_13 = iVar16;
      return 0;
    }
    switch(iVar16) {
    case 1:
      fVar25 = param_3 * param_3 * 0.5;
      *param_12 = SQRT(param_1 * param_1 + fVar25 + param_5 * param_5 * 0.25);
      param_12[1] = SQRT(param_2 * param_2 + fVar25 + fVar30 * fVar30 * 0.25);
      iVar16 = 1;
      break;
    case 2:
      fVar25 = param_3 * param_3 * 0.5;
      *param_12 = SQRT(param_1 * param_1 + fVar25 + param_5 * param_5 * 0.25);
      param_12[1] = 0.0;
      param_12[2] = 0.0;
      param_12[3] = SQRT(param_2 * param_2 + fVar25 + fVar30 * fVar30 * 0.25);
      iVar16 = 2;
      break;
    default:
      goto switchD_1005cc330_default;
    case 4:
      *param_12 = param_1;
      param_12[1] = 0.0;
      param_12[3] = 0.0;
      param_12[2] = param_5 * 0.5;
      param_12[4] = 0.0;
      param_12[5] = param_2;
      param_12[6] = 0.0;
      param_12[7] = fVar30 * 0.5;
      iVar16 = 4;
      break;
    case 6:
      param_3 = param_3 * 0.5;
      if (param_11 == 2) {
        param_5 = param_5 * 0.5;
        uVar18 = SUB41(param_5,0);
        uVar20 = (undefined1)((uint)param_5 >> 8);
        uVar22 = (undefined1)((uint)param_5 >> 0x10);
        uVar24 = (undefined1)((uint)param_5 >> 0x18);
        param_4 = param_4 * 0.5;
        fVar30 = fVar30 * 0.5;
        *param_12 = param_1;
        param_12[1] = param_3;
        param_12[2] = 0.0;
        param_5 = 0.0;
        fVar25 = 0.0;
        fVar32 = param_3;
        param_3 = param_2;
        fVar31 = param_4;
      }
      else {
        fVar25 = param_4 * 0.5;
        uVar18 = SUB41(fVar25,0);
        uVar20 = (undefined1)((uint)fVar25 >> 8);
        uVar22 = (undefined1)((uint)fVar25 >> 0x10);
        uVar24 = (undefined1)((uint)fVar25 >> 0x18);
        param_5 = param_5 * 0.5;
        fVar31 = fVar30 * 0.5;
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = param_3;
        param_4 = 0.0;
        fVar30 = 0.0;
        fVar32 = param_2;
      }
      param_12[3] = (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar18)));
      param_12[4] = param_5;
      param_12[5] = param_4;
      param_12[6] = 0.0;
      param_12[7] = fVar32;
      param_12[8] = param_3;
      param_12[9] = fVar25;
      param_12[10] = fVar30;
      param_12[0xb] = fVar31;
      iVar16 = 6;
      break;
    case 8:
      *param_12 = param_1;
      param_12[1] = 0.0;
      param_12[5] = 0.0;
      param_12[7] = 0.0;
      param_12[8] = 0.0;
      param_12[9] = param_2;
      param_12[2] = param_3 * 0.5;
      param_12[3] = param_4 * 0.5;
      param_12[4] = param_5 * 0.5;
      param_12[6] = param_7 * 0.75;
      param_12[10] = param_3 * 0.5;
      param_12[0xb] = param_4 * 0.5;
      param_12[0xc] = 0.0;
      param_12[0xd] = fVar30 * 0.5;
      param_12[0xe] = 0.0;
      param_12[0xf] = param_8 * 0.75;
LAB_1005cd1c8:
      iVar16 = 8;
    }
  }
  *param_13 = iVar16;
switchD_1005cc330_default:
  return 0;
}




void FUN_1005cd400(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x100000;
  *(undefined4 *)((long)param_1 + 0x24) = 0x100000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  param_1[6] = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  param_1[10] = 0;
  param_1[0xd] = param_1 + 0xd;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0xffffffff;
  param_1[0x2b] = param_1 + 0x2b;
  param_1[0x2c] = param_1 + 0x2b;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xacce55ed;
  *(undefined4 *)((long)param_1 + 0x17c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)((long)param_1 + 0x172) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0;
  return;
}




void FUN_1005cd4b0(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x100000;
  *(undefined4 *)((long)param_1 + 0x24) = 0x100000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  param_1[6] = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  param_1[10] = 0;
  param_1[0xd] = param_1 + 0xd;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0xffffffff;
  param_1[0x2b] = param_1 + 0x2b;
  param_1[0x2c] = param_1 + 0x2b;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xacce55ed;
  *(undefined4 *)((long)param_1 + 0x17c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)((long)param_1 + 0x172) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0;
  return;
}




undefined8 FUN_1005cd560(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long local_28;
  
  uVar1 = FUN_1005cd788(param_1,0,0,1,param_3);
  if ((int)uVar1 == 0) {
    if ((*(long *)(param_1 + 0xd0) != 0) &&
       (pcVar2 = *(code **)(*(long *)(param_1 + 0xd0) + 0x38), pcVar2 != (code *)0x0)) {
      *(long *)(param_1 + 0x98) = param_1;
      (*pcVar2)(param_1 + 0x98);
    }
    if (((*(long *)(param_1 + 0x1c0) == 0) || (*(long *)(param_1 + 0x1b8) == 0)) ||
       (uVar1 = FUN_1005cdba0(param_1), (int)uVar1 == 0)) {
      if ((*(byte *)(param_1 + 0x3c) >> 2 & 1) != 0) {
        uVar1 = FUN_1005e1720(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x15a58),
                              *(undefined4 *)(param_1 + 0xe4),&local_28);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (0 < *(int *)(local_28 + 0x3c)) {
          *(int *)(local_28 + 0x3c) = *(int *)(local_28 + 0x3c) + -1;
        }
      }
      lVar3 = *(long *)(param_1 + 0x90);
      *(long *)(param_1 + 0x120) = lVar3;
      puVar4 = *(undefined8 **)(param_1 + 0x118);
      if (puVar4 != (undefined8 *)0x0) {
        iVar5 = *(int *)(puVar4 + 1);
        if (0 < iVar5) {
          *(int *)(puVar4 + 1) = iVar5 + -1;
          iVar5 = iVar5 + -1;
        }
        if (iVar5 == 0) {
          if (puVar4[3] == 0) {
            *puVar4 = *(undefined8 *)(lVar3 + 0x14818);
            *(undefined8 **)(lVar3 + 0x14818) = puVar4;
          }
          else {
            FUN_1005d7f1c(lVar3 + 0x14f68,puVar4[3],"",0);
            lVar3 = *(long *)(param_1 + 0x90);
          }
        }
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0xffffffff00000000;
      }
      *(long *)(param_1 + 0x140) = lVar3;
      puVar4 = *(undefined8 **)(param_1 + 0x138);
      if (puVar4 != (undefined8 *)0x0) {
        iVar5 = *(int *)(puVar4 + 1);
        if (0 < iVar5) {
          *(int *)(puVar4 + 1) = iVar5 + -1;
          iVar5 = iVar5 + -1;
        }
        if (iVar5 == 0) {
          if (puVar4[3] == 0) {
            *puVar4 = *(undefined8 *)(lVar3 + 0x14818);
            *(undefined8 **)(lVar3 + 0x14818) = puVar4;
          }
          else {
            FUN_1005d7f1c(lVar3 + 0x14f68,puVar4[3],"",0);
          }
        }
        *(undefined8 *)(param_1 + 0x138) = 0;
        *(undefined8 *)(param_1 + 0x148) = 0;
        *(undefined8 *)(param_1 + 0x150) = 0xffffffff00000000;
      }
      if ((*(byte *)(param_1 + 0x3c) >> 1 & 1) != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0xd0),
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dspi.cpp"
                      ,0xba9);
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffd;
      }
      if (param_2 != 0) {
        *(undefined4 *)(param_1 + 0x80) = 0xdeadbead;
        if (*(long *)(param_1 + 0x110) == 0) {
          uVar1 = 3000;
        }
        else {
          uVar1 = 0xbb4;
          param_1 = *(long *)(param_1 + 0x110);
        }
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dspi.cpp"
                      ,uVar1);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_1005cd788(long param_1,long param_2,long param_3,int param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  int iVar11;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar9 = *(long *)(param_1 + 0x90);
  if (param_2 == 0) {
    if ((param_5 & 1) == 0) {
      sVar10 = *(short *)(param_1 + 0x170);
    }
    else {
      FUN_10056ba8c(lVar9,1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
      sVar10 = *(short *)(param_1 + 0x170);
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    while (sVar10 != 0) {
      while( true ) {
        uVar5 = FUN_1005c91e4(param_1,0,&local_68,&local_70,0,param_5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        FUN_1005cd788(param_1,local_68,local_70,1,param_5);
        if ((param_5 & 1) == 0) break;
        FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
        FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
        sVar10 = *(short *)(param_1 + 0x170);
        FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
        if (sVar10 == 0) goto LAB_1005cd930;
      }
      sVar10 = *(short *)(param_1 + 0x170);
    }
LAB_1005cd930:
    if ((param_5 & 1) == 0) {
      sVar10 = *(short *)(param_1 + 0x172);
    }
    else {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
      sVar10 = *(short *)(param_1 + 0x172);
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    while (sVar10 != 0) {
      while( true ) {
        uVar5 = FUN_1005c96c0(param_1,0,&local_78,&local_80,0,param_5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        FUN_1005cd788(local_78,param_1,local_80,1,param_5);
        if ((param_5 & 1) == 0) break;
        FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
        FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
        sVar10 = *(short *)(param_1 + 0x172);
        FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
        if (sVar10 == 0) goto LAB_1005cdb50;
      }
      sVar10 = *(short *)(param_1 + 0x172);
    }
LAB_1005cdb50:
    uVar5 = 0;
  }
  else {
    uVar1 = (uint)param_5 ^ 1;
    bVar4 = lVar9 != 0;
    bVar3 = (uVar1 & 1) == 0;
    if (bVar4 && bVar3) {
      FUN_10057097c(lVar9,1);
      FUN_10057097c(lVar9,3);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(short *)(param_1 + 0x170) == 0) {
      uVar5 = 0;
    }
    else if (*(short *)(param_2 + 0x172) == 0) {
      uVar5 = 0;
    }
    else if (param_3 == 0) {
      if (*(short *)(param_1 + 0x170) < 1) {
        uVar5 = 9;
      }
      else {
        iVar11 = 0;
        do {
          uVar5 = FUN_1005c91e4(param_1,iVar11,0,&local_88,0,param_5);
          if ((int)uVar5 != 0) goto LAB_1005cdb5c;
          if (*(long *)(local_88 + 0x58) == param_2) {
            param_3 = local_88;
            if (local_88 != 0) goto LAB_1005cda04;
            uVar5 = 9;
            goto LAB_1005cdb5c;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(short *)(param_1 + 0x170));
        uVar5 = 9;
      }
    }
    else {
LAB_1005cda04:
      if (*(long *)(param_3 + 0x58) == param_2) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        plVar6 = (long *)(param_3 + 8);
        plVar8 = *(long **)(param_3 + 0x10);
        *plVar8 = *plVar6;
        *(long **)(*plVar6 + 8) = plVar8;
        *plVar6 = (long)plVar6;
        *(long **)(param_3 + 0x10) = plVar6;
        *(short *)(param_1 + 0x170) = *(short *)(param_1 + 0x170) + -1;
        uVar2 = *(uint *)(param_3 + 0x78);
        if ((uVar2 & 1) != 0) {
          *(short *)(param_1 + 0x174) = *(short *)(param_1 + 0x174) + -1;
        }
        plVar6 = (long *)(param_3 + 0x20);
        plVar8 = *(long **)(param_3 + 0x28);
        *plVar8 = *plVar6;
        *(long **)(*plVar6 + 8) = plVar8;
        *plVar6 = (long)plVar6;
        *(long **)(param_3 + 0x28) = plVar6;
        sVar10 = *(short *)(param_2 + 0x172) + -1;
        *(short *)(param_2 + 0x172) = sVar10;
        if ((uVar2 & 1) != 0) {
          *(short *)(param_2 + 0x176) = *(short *)(param_2 + 0x176) + -1;
        }
        if (sVar10 < 2) {
          *(ushort *)(param_2 + 0x3c) = *(ushort *)(param_2 + 0x3c) & 0xffbf;
        }
        if (param_4 == 0) {
          FUN_10061280c(param_3);
        }
        else {
          uVar5 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                            ((DSPConnectionI *)(*(long *)(param_1 + 0x90) + 0x790),SUB81(param_3,0))
          ;
          if ((int)uVar5 != 0) goto LAB_1005cdb5c;
        }
        if (*(short *)(param_1 + 0x170) == 1) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
          if ((*(byte *)(lVar7 + 0x78) >> 2 & 1) == 0) {
            uVar5 = *(undefined8 *)(lVar7 + 0x58);
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
        *(undefined8 *)(param_1 + 0x60) = uVar5;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x14828) + 0x30) = 1;
        if (bVar4 && (uVar1 & 1) == 0) {
          if (bVar4 && bVar3) {
            FUN_100570990(lVar9,3);
            FUN_100570990(lVar9,1);
          }
          goto LAB_1005cdb50;
        }
        uVar5 = 0;
      }
      else {
        uVar5 = 9;
      }
    }
LAB_1005cdb5c:
    if ((lVar9 != 0) && (bVar4 && bVar3)) {
      FUN_100570990(lVar9,1);
      FUN_100570990(lVar9,3);
    }
  }
  return uVar5;
}




undefined8 FUN_1005cdba0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 != 0) {
    FUN_10057097c(lVar3,6);
  }
  if ((*(long *)(param_1 + 0x1c0) == 0) ||
     (uVar1 = FUN_100571edc(*(undefined8 *)(param_1 + 0x90)), (int)uVar1 == 0)) {
    lVar2 = *(long *)(param_1 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (lVar2 != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dspi.cpp"
                    ,0x17ba);
    }
    uVar1 = 0;
  }
  if ((lVar3 != 0) && (lVar3 != 0)) {
    FUN_100570990(lVar3,6);
  }
  return uVar1;
}




undefined8 FUN_1005cdc44(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 local_48 [2];
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    if ((*(ushort *)(param_1 + 0x3c) >> 7 & 1) != 0) {
      return 10;
    }
    if (((*(ushort *)(param_1 + 0x3c) >> 8 & 1) != 0) && (param_3 == 0)) {
      return 8;
    }
    uVar1 = FUN_10056b560(*(long *)(param_1 + 0x90),param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (param_2 == 0) {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      uVar1 = FUN_1005cd560(param_1,0,1);
      return uVar1;
    }
    local_48[0] = 9;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = param_1;
    FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_48,1);
  }
  return 0;
}




undefined8 FUN_1005cdcf4(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x90);
    return 0;
  }
  return 0x1f;
}




undefined8
FUN_1005cdd18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined8 *puVar1;
  undefined1 local_61;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    if (*(char *)(param_1 + 0x3f) == '\0') {
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 0;
      }
    }
    else {
      local_61 = 0;
      if (*(long *)(param_1 + 0x60) == 0) {
        for (puVar1 = *(undefined8 **)(param_1 + 0x40); puVar1 != (undefined8 *)(param_1 + 0x40);
            puVar1 = (undefined8 *)*puVar1) {
          FUN_1005cdd18(*(undefined8 *)(puVar1[2] + 0x58),param_2,param_3,param_4,param_5,param_6,
                        &local_61);
        }
      }
      else {
        FUN_1005cdd18(*(long *)(param_1 + 0x60),param_2,param_3,param_4,param_5,param_6,&local_61);
      }
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 1;
      }
      if ((*(int *)(*(long *)(param_1 + 0x58) + 0xe0) != 0) && (*(int *)(param_1 + 0x88) == 0)) {
        FUN_1005cb2bc(param_2,param_1);
      }
    }
  }
  return 0;
}




undefined8
FUN_1005cde28(long param_1,long param_2,long *param_3,uint param_4,int param_5,long param_6,
             undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  lVar14 = *(long *)(param_1 + 0x90);
  uVar12 = param_4 & 0xfffffffd;
  if ((uVar12 == 1) || (param_5 != 0)) {
    iVar8 = FUN_1005c9078(param_2,param_1,param_7);
    bVar6 = iVar8 == 0;
    if ((iVar8 == 0) && (param_5 != 0)) {
      lVar14 = *(long *)(param_1 + 0x90);
      if (*(code **)(lVar14 + 0x15e48) == (code *)0x0) {
        return 5;
      }
      if ((*(byte *)(lVar14 + 0x15e50) >> 4 & 1) == 0) {
        return 5;
      }
      (**(code **)(lVar14 + 0x15e48))(lVar14,0x10,param_1,param_2,*(undefined8 *)(lVar14 + 0x15c98))
      ;
      return 5;
    }
  }
  else {
    bVar6 = false;
  }
  uVar2 = (uint)param_7 ^ 1;
  bVar7 = lVar14 != 0;
  bVar5 = (uVar2 & 1) == 0;
  bVar1 = bVar7 && bVar5;
  if (bVar1) {
    FUN_10057097c(lVar14,3);
    FUN_10057097c(lVar14,1);
  }
  if (param_6 == 0) {
    uVar11 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc
                       ((DSPConnectionI **)(*(long *)(param_1 + 0x90) + 0x790),true);
    if ((int)uVar11 != 0) goto LAB_1005ce0dc;
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  *(undefined8 *)(param_6 + 0x10) = *(undefined8 *)(param_1 + 0x48);
  plVar13 = (long *)(param_6 + 8);
  *plVar13 = param_1 + 0x40;
  *(long **)(param_1 + 0x48) = plVar13;
  **(undefined8 **)(param_6 + 0x10) = plVar13;
  *(short *)(param_1 + 0x170) = *(short *)(param_1 + 0x170) + 1;
  sVar3 = *(short *)(param_1 + 0x174);
  if (uVar12 == 1) {
    sVar3 = sVar3 + 1;
  }
  *(short *)(param_1 + 0x174) = sVar3;
  *(undefined8 *)(param_6 + 0x28) = *(undefined8 *)(param_2 + 0x160);
  plVar13 = (long *)(param_6 + 0x20);
  *plVar13 = param_2 + 0x158;
  *(long **)(param_2 + 0x160) = plVar13;
  **(undefined8 **)(param_6 + 0x28) = plVar13;
  sVar3 = *(short *)(param_2 + 0x172) + 1;
  *(short *)(param_2 + 0x172) = sVar3;
  sVar4 = *(short *)(param_2 + 0x176);
  if (uVar12 == 1) {
    sVar4 = sVar4 + 1;
  }
  *(short *)(param_2 + 0x176) = sVar4;
  if (1 < sVar3) {
    *(ushort *)(param_2 + 0x3c) = *(ushort *)(param_2 + 0x3c) | 0x40;
  }
  *(long *)(param_6 + 0x58) = param_2;
  *(long *)(param_6 + 0x60) = param_1;
  if (bVar9) {
    FUN_100612958(param_6,1);
  }
  if (param_4 == 3) {
    uVar12 = *(uint *)(param_6 + 0x78) | 5;
LAB_1005ce03c:
    *(uint *)(param_6 + 0x78) = uVar12;
  }
  else {
    if (param_4 == 2) {
      uVar12 = *(uint *)(param_6 + 0x78) | 4;
      goto LAB_1005ce03c;
    }
    if (param_4 == 1) {
      uVar12 = *(uint *)(param_6 + 0x78) | 1;
      goto LAB_1005ce03c;
    }
  }
  if (bVar6) {
    *(uint *)(param_6 + 0x78) = *(uint *)(param_6 + 0x78) | 2;
  }
  if (*(short *)(param_1 + 0x170) == 1) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
    if ((*(byte *)(lVar10 + 0x78) >> 2 & 1) == 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0x58);
    }
    else {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = uVar11;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x14828) + 0x30) = 1;
  if (bVar7 && (uVar2 & 1) == 0) {
    if (bVar7 && bVar5) {
      FUN_100570990(lVar14,3);
      FUN_100570990(lVar14,1);
    }
    bVar1 = false;
  }
  if (param_3 == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    *param_3 = param_6;
  }
LAB_1005ce0dc:
  if ((lVar14 != 0) && (bVar1)) {
    FUN_100570990(lVar14,1);
    FUN_100570990(lVar14,3);
  }
  return uVar11;
}




undefined8 FUN_1005ce14c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_1 + 0x170) == 1) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
    if ((*(byte *)(lVar1 + 0x78) >> 2 & 1) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  return 0;
}




undefined8
FUN_1005ce188(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_70 [2];
  long local_68;
  long lStack_60;
  long local_58;
  int local_50;
  long local_48;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(int *)(*(long *)(param_1 + 0xd0) + 0x28) == 0)) {
    return 5;
  }
  if ((*(long *)(param_2 + 0xd0) != 0) && (*(int *)(*(long *)(param_2 + 0xd0) + 0x2c) == 0)) {
    return 5;
  }
  uVar1 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc
                    ((DSPConnectionI **)(*(long *)(param_1 + 0x90) + 0x790),SUB81(&local_48,0));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  iVar3 = (int)param_4;
  if (param_6 == 0) {
    FUN_100612958(local_48,1);
    if (iVar3 == 3) {
      uVar2 = *(uint *)(local_48 + 0x78) | 5;
    }
    else if (iVar3 == 2) {
      uVar2 = *(uint *)(local_48 + 0x78) | 4;
    }
    else {
      if (iVar3 != 1) goto LAB_1005ce278;
      uVar2 = *(uint *)(local_48 + 0x78) | 1;
    }
    *(uint *)(local_48 + 0x78) = uVar2;
  }
  else {
    FUN_100614c34(local_48,param_6,1);
  }
LAB_1005ce278:
  if (((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) && ((*(byte *)(param_2 + 0x3d) >> 2 & 1) == 0)) {
    local_70[0] = (undefined4)param_5;
    local_58 = local_48;
    local_68 = param_1;
    lStack_60 = param_2;
    local_50 = iVar3;
    uVar1 = FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_70,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    FUN_1005cde28(param_1,param_2,param_3,param_4,param_5,local_48,0);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_48;
  }
  return 0;
}




undefined8
FUN_1005ce304(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  long local_30;
  long lStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if ((*(long *)(param_1 + 0xd0) == 0) || (*(int *)(*(long *)(param_1 + 0xd0) + 0x28) != 0)) {
    if ((*(long *)(param_2 + 0xd0) == 0) || (*(int *)(*(long *)(param_2 + 0xd0) + 0x2c) != 0)) {
      if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) != 0) {
        uVar1 = FUN_1005ce38c();
        return uVar1;
      }
      local_38[0] = 2;
      local_30 = param_1;
      lStack_28 = param_2;
      local_20 = param_3;
      uStack_1c = param_4;
      local_18 = param_5;
      FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,param_6);
      uVar1 = 0;
    }
    else {
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}




undefined8
FUN_1005ce38c(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
             undefined8 param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  local_60 = (undefined8 *)0x0;
  puVar6 = param_2;
  local_58 = param_1;
  if (1 < param_5) {
    iVar7 = 1;
    while (iVar3 = FUN_1005c91e4(puVar6,0,&local_68,0,1,param_6), iVar3 != 9) {
      if (((local_68 != (undefined8 *)0x0) && ((*(byte *)((long)local_68 + 0x3d) & 1) == 0)) ||
         (iVar7 = iVar7 + 1, puVar6 = local_68, param_5 <= iVar7)) break;
    }
  }
  if (param_5 == 1) {
    if ((param_1 != param_2) && (param_3 == 0)) {
      return 0x1c;
    }
    if ((param_1 == param_2) && (param_3 != 0)) {
      return 0x1c;
    }
  }
  if (((param_3 != 0) || (uVar5 = FUN_1005c91e4(param_1,0,&local_58,0,1,param_6), (int)uVar5 == 0))
     && (uVar5 = FUN_1005ce754(param_2,puVar6,param_6), (int)uVar5 == 0)) {
    iVar7 = (int)param_6;
    if (param_4 == 0) {
      if (iVar7 != 0) {
        FUN_10056ba8c(param_1[0x12],1,param_1);
        FUN_10057097c(param_1[0x12],1);
      }
      iVar3 = (int)*(short *)((long)param_1 + 0x172) - (int)*(short *)((long)param_1 + 0x176);
      if (iVar7 != 0) {
        FUN_100570990(param_1[0x12],1);
      }
      if (0 < iVar3) {
        iVar7 = 0;
        do {
          uVar5 = FUN_1005c96c0(param_1,0,&local_70,&local_78,1,param_6);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = FUN_1005cd788(local_70,param_1,local_78,0,param_6);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = FUN_1005cde28(local_70,param_2,0,0,0,local_78,param_6);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
      uVar5 = FUN_1005cde28(puVar6,param_1,0,0,0,0,param_6);
      if ((int)uVar5 == 0) {
        uVar5 = 0;
        *param_2 = *param_1;
        param_2[1] = param_1[1];
      }
    }
    else {
      local_60 = local_58;
      iVar3 = FUN_1005c91e4(local_58,0,&local_60,0,1,param_6);
      if (iVar3 != 9) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          if (param_4 <= iVar3) break;
          local_58 = local_60;
          iVar4 = FUN_1005c91e4(local_60,0,&local_60,0,1,param_6);
        } while (iVar4 != 9);
      }
      puVar2 = local_58;
      if (local_60 != (undefined8 *)0x0) {
        if (iVar7 != 0) {
          FUN_10056ba8c(local_58[0x12],1,local_58);
          FUN_10057097c(puVar2[0x12],1);
        }
        iVar3 = (int)*(short *)(puVar2 + 0x2e) - (int)*(short *)((long)puVar2 + 0x174);
        if (iVar7 != 0) {
          FUN_100570990(puVar2[0x12],1);
        }
        if (0 < iVar3) {
          iVar7 = 0;
          do {
            uVar5 = FUN_1005c91e4(local_58,0,&local_80,&local_88,1,param_6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            uVar5 = FUN_1005cd788(local_58,local_80,local_88,0,param_6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            uVar5 = FUN_1005cde28(puVar6,local_80,0,0,0,local_88,param_6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar3);
        }
      }
      uVar5 = FUN_1005cde28(local_58,param_2,0,0,0,0,param_6);
      if ((int)uVar5 == 0) {
        if (param_3 < 0) {
          if (param_5 < 1) {
            uVar5 = 0;
          }
          else {
            iVar7 = 1;
            local_90 = param_2;
            do {
              *local_90 = *local_58;
              local_90[1] = local_58[1];
              uVar5 = FUN_1005c91e4(local_90,0,&local_90,0,1,param_6);
              if (((int)uVar5 != 0) && ((int)uVar5 != 9)) {
                return uVar5;
              }
              uVar5 = 0;
              bVar1 = iVar7 < param_5;
              iVar7 = iVar7 + 1;
            } while (local_90 != (undefined8 *)0x0 && bVar1);
          }
        }
        else {
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}




ulong FUN_1005ce754(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  iVar8 = (int)param_3;
  if (iVar8 != 0) {
    FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
    FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
  }
  sVar2 = *(short *)(param_1 + 0x172);
  sVar3 = *(short *)(param_1 + 0x176);
  if (iVar8 != 0) {
    FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    FUN_10056ba8c(*(undefined8 *)(param_2 + 0x90),1,param_2);
    FUN_10057097c(*(undefined8 *)(param_2 + 0x90),1);
  }
  iVar7 = (int)sVar2 - (int)sVar3;
  sVar4 = *(short *)(param_2 + 0x170);
  sVar5 = *(short *)(param_2 + 0x174);
  iVar6 = (int)sVar4 - (int)sVar5;
  if (iVar8 != 0) {
    FUN_100570990(*(undefined8 *)(param_2 + 0x90),1);
  }
  if (iVar7 < 2 || iVar6 < 2) {
    if ((int)sVar4 == (int)sVar5 && (int)sVar2 == (int)sVar3) {
      uVar9 = 0;
    }
    else if ((iVar6 < 2) && (sVar2 != sVar3 || iVar6 != 1)) {
      if (sVar2 == sVar3) {
        uVar9 = 0;
      }
      else {
        local_70 = 0;
        uVar9 = FUN_1005c91e4(param_2,0,&local_70,0,1,param_3);
        if (((((int)uVar9 == 0) || ((int)uVar9 == 9)) &&
            ((local_70 == 0 ||
             (uVar9 = FUN_1005cd788(param_2,local_70,0,1,param_3), (int)uVar9 == 0)))) &&
           (uVar9 = 0, uVar10 = uVar9, 0 < iVar7)) {
          do {
            uVar9 = FUN_1005c96c0(param_1,0,&local_78,&local_80,1,param_3);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            uVar9 = FUN_1005cd788(local_78,param_1,local_80,0,param_3);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            if (local_70 == 0) {
              uVar9 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                                ((DSPConnectionI *)(*(long *)(param_1 + 0x90) + 0x790),
                                 SUB81(local_80,0));
              iVar8 = (int)uVar9;
            }
            else {
              uVar9 = FUN_1005cde28(local_78,local_70,0,0,0,local_80,param_3);
              iVar8 = (int)uVar9;
            }
            if (iVar8 != 0) {
              return uVar9;
            }
            uVar9 = 0;
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar1;
          } while ((int)uVar1 < iVar7);
        }
      }
    }
    else {
      local_58 = 0;
      uVar9 = FUN_1005c96c0(param_1,0,&local_58,0,1,param_3);
      if ((((int)uVar9 == 0) || ((int)uVar9 == 9)) &&
         ((local_58 == 0 || (uVar9 = FUN_1005cd788(local_58,param_1,0,1,param_3), (int)uVar9 == 0)))
         ) {
        iVar8 = 0;
        if (iVar6 < 1) {
          uVar9 = 0;
        }
        else {
          do {
            uVar9 = FUN_1005c91e4(param_2,0,&local_60,&local_68,1,param_3);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            uVar9 = FUN_1005cd788(param_2,local_60,local_68,0,param_3);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            if (local_58 == 0) {
              uVar9 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                                ((DSPConnectionI *)(*(long *)(param_1 + 0x90) + 0x790),
                                 SUB81(local_68,0));
              iVar7 = (int)uVar9;
            }
            else {
              uVar9 = FUN_1005cde28(local_58,local_60,0,0,0,local_68,param_3);
              iVar7 = (int)uVar9;
            }
            if (iVar7 != 0) {
              return uVar9;
            }
            uVar9 = 0;
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar6);
        }
      }
    }
  }
  else {
    uVar9 = 0x1c;
  }
  return uVar9;
}




undefined8 FUN_1005cea38(long param_1,int *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_4 != 0) {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
    }
    if (param_3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 0x176);
    }
    *param_2 = *(short *)(param_1 + 0x172) - iVar2;
    if (param_4 != 0) {
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1005ceac4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  long local_30;
  long lStack_28;
  undefined8 local_20;
  
  if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) {
    local_38[0] = 3;
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x3e) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x3e) = 1;
    }
    local_30 = param_1;
    lStack_28 = param_2;
    local_20 = param_3;
    FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,1);
    return 0;
  }
  uVar1 = FUN_1005cd788();
  return uVar1;
}




undefined8 FUN_1005ceb30(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  iVar3 = (int)param_5;
  iVar4 = (int)param_4;
  if (param_2 != 0) {
    if (iVar3 != 0) {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
    }
    if (iVar4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 0x174);
    }
    iVar2 = *(short *)(param_1 + 0x170) - iVar2;
    if (iVar3 != 0) {
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    if (0 < iVar2) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        uVar1 = FUN_1005c91e4(param_1,iVar5,&local_58,&local_60,param_4,param_5);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((iVar4 == 0) || ((*(byte *)(local_60 + 0x78) & 1) == 0)) {
          uVar1 = FUN_1005cd788(param_1,local_58,local_60,1,param_5);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        else {
          iVar5 = iVar5 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
  }
  if (param_3 != 0) {
    if (iVar3 != 0) {
      FUN_10056ba8c(*(undefined8 *)(param_1 + 0x90),1,param_1);
      FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
    }
    if (iVar4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 0x176);
    }
    iVar2 = *(short *)(param_1 + 0x172) - iVar2;
    if (iVar3 != 0) {
      FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    }
    iVar3 = 0;
    if (iVar2 < 1) {
      return 0;
    }
    iVar5 = 0;
    do {
      uVar1 = FUN_1005c96c0(param_1,iVar5,&local_68,&local_70,param_4,param_5);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((iVar4 == 0) || ((*(byte *)(local_70 + 0x78) & 1) == 0)) {
        uVar1 = FUN_1005cd788(local_68,param_1,local_70,1,param_5);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
}




undefined8 FUN_1005cecf4(long param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  long local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (((param_2 & 1) == 0) && (param_3 == 0)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) != 0) {
    uVar1 = FUN_1005ceb30();
    return uVar1;
  }
  local_28 = 0;
  uStack_20 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    if (param_2 != 0) {
      local_38[0] = 4;
      goto LAB_1005ced5c;
    }
    local_38[0] = 5;
  }
  else {
    local_38[0] = 6;
  }
  *(undefined1 *)(param_1 + 0x3e) = 1;
LAB_1005ced5c:
  local_30 = param_1;
  FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,1);
  return 0;
}




undefined8 FUN_1005ced7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  long local_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    if (param_2 == 0) {
      return 0x1f;
    }
    if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) != 0) {
      uVar1 = FUN_1005ce754(param_1,param_2,0);
      return uVar1;
    }
    local_38[0] = 7;
    local_30 = param_1;
    lStack_28 = param_2;
    FUN_10056be4c(*(long *)(param_1 + 0x90),local_38);
  }
  return 0;
}




void FUN_1005cede0(long param_1)

{
  undefined4 local_38 [2];
  long local_30;
  
  if ((*(byte *)(param_1 + 0x3d) >> 2 & 1) == 0) {
    local_38[0] = 0x13;
    local_30 = param_1;
    FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,1);
    return;
  }
  FUN_1005cee28();
  return;
}




undefined8 FUN_1005cee28(long param_1)

{
  void *pvVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 != 0) {
    FUN_10057097c(lVar5,6);
  }
  pvVar3 = *(void **)(param_1 + 0x1c0);
  if (pvVar3 != (void *)0x0) {
    cVar2 = *(char *)((long)pvVar3 + 0x426);
    pvVar1 = (void *)0x0;
    if (cVar2 != '\0') {
      pvVar1 = (void *)((long)pvVar3 + 0x214);
    }
    if (*(char *)((long)pvVar3 + 0x212) != '\0' && pvVar3 != (void *)0x0) {
      *(undefined4 *)((long)pvVar3 + 0x20c) = 0;
      *(undefined2 *)((long)pvVar3 + 0x210) = 0;
      _bzero(pvVar3,0x208);
    }
    if (cVar2 != '\0') {
      *(undefined4 *)((long)pvVar1 + 0x20c) = 0;
      *(undefined2 *)((long)pvVar1 + 0x210) = 0;
      _bzero(pvVar1,0x208);
    }
  }
  if (lVar5 != 0) {
    FUN_100570990(lVar5,6);
  }
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x40),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    *(long *)(param_1 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001005ceef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1 + 0x98);
    return uVar4;
  }
  return 0;
}




undefined8 FUN_1005cef0c(ulong param_1,long param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  int *piVar4;
  float fVar5;
  
  if (((param_3 < 0) || (lVar3 = *(long *)(param_2 + 0xd0), lVar3 == 0)) ||
     (*(int *)(lVar3 + 0x60) <= param_3)) {
    return 0x1f;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0x44;
  }
  if (*(long *)(lVar3 + 0x68) != 0) {
    piVar4 = *(int **)(*(long *)(lVar3 + 0x68) + (long)param_3 * 8);
    if (*piVar4 != 0) {
      return 0x1f;
    }
    fVar5 = (float)param_1;
    if (((uint)fVar5 & 0x7f800000) == 0x7f800000) {
      return 0x1d;
    }
    fVar1 = (float)piVar4[0xc];
    if ((float)piVar4[0xc] <= fVar5) {
      fVar1 = fVar5;
    }
    param_1 = (ulong)(uint)fVar1;
    if ((float)piVar4[0xd] < fVar1) {
      param_1 = (ulong)(uint)piVar4[0xd];
    }
  }
  *(long *)(param_2 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001005cef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 0x98);
  return uVar2;
}




undefined8 FUN_1005cef94(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  int *piVar5;
  
  if (((-1 < param_2) && (lVar4 = *(long *)(param_1 + 0xd0), lVar4 != 0)) &&
     (param_2 < *(int *)(lVar4 + 0x60))) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x78);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return 0x44;
    }
    piVar5 = *(int **)(*(long *)(lVar4 + 0x68) + (long)param_2 * 8);
    if (*piVar5 == 1) {
      iVar1 = piVar5[0xc];
      if (piVar5[0xc] <= param_3) {
        iVar1 = param_3;
      }
      iVar2 = piVar5[0xd];
      if (iVar1 <= piVar5[0xd]) {
        iVar2 = iVar1;
      }
      *(long *)(param_1 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001005cefe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1 + 0x98,param_2,iVar2);
      return uVar3;
    }
  }
  return 0x1f;
}




undefined8 FUN_1005ceffc(long param_1,int param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if (((-1 < param_2) && (lVar2 = *(long *)(param_1 + 0xd0), lVar2 != 0)) &&
     (param_2 < *(int *)(lVar2 + 0x60))) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x80);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return 0x44;
    }
    if (**(int **)(*(long *)(lVar2 + 0x68) + (long)param_2 * 8) == 2) {
      *(long *)(param_1 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001005cf03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1 + 0x98);
      return uVar1;
    }
  }
  return 0x1f;
}




undefined8 FUN_1005cf050(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  
  iVar1 = (int)param_2;
  if (iVar1 < 0) {
    uVar2 = 0x1f;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xd0);
    if (lVar4 == 0) {
      uVar2 = 0x1f;
    }
    else if (iVar1 < *(int *)(lVar4 + 0x60)) {
      if (*(long *)(lVar4 + 0x88) == 0) {
        uVar2 = 0x44;
      }
      else if (**(int **)(*(long *)(lVar4 + 0x68) + (long)iVar1 * 8) == 3) {
        if (((int)param_4 != 0) &&
           (iVar1 = FUN_1005ed0c8("AudioGaming AudioWeather v1.1 b",lVar4 + 4),
           param_3 != 0 && (int)param_4 != 0 || iVar1 == 0)) {
          pcVar3 = *(code **)(*(long *)(param_1 + 0xd0) + 0x88);
          *(long *)(param_1 + 0x98) = param_1;
          uVar2 = (*pcVar3)(param_1 + 0x98,param_2,param_3,param_4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
        uVar2 = 0;
      }
      else {
        uVar2 = 0x1f;
      }
    }
    else {
      uVar2 = 0x1f;
    }
  }
  return uVar2;
}




void FUN_1005cf150(long param_1,undefined8 param_2,undefined4 *param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined4 local_6c;
  undefined1 local_68 [32];
  long local_48;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_6c = 0;
  iVar2 = (int)param_2;
  local_48 = lVar5;
  if (iVar2 < 0) {
    uVar1 = 0x1f;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == 0) {
      uVar1 = 0x1f;
    }
    else if (iVar2 < *(int *)(lVar3 + 0x60)) {
      if (*(long *)(lVar3 + 0x90) == 0) {
        uVar1 = 0x44;
      }
      else if (**(int **)(*(long *)(lVar3 + 0x68) + (long)iVar2 * 8) == 0) {
        *(long *)(param_1 + 0x98) = param_1;
        local_68[0] = 0;
        if ((param_4 == 0) && (*(int *)(param_1 + 0xe8) != 0)) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = local_68;
        }
        uVar1 = (**(code **)(lVar3 + 0x90))(param_1 + 0x98,param_2,&local_6c,puVar4);
        if ((int)uVar1 == 0) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = local_6c;
          }
          if (param_4 != 0) {
            FUN_1005ecc98(param_4,puVar4,param_5);
          }
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0x1f;
      }
    }
    else {
      uVar1 = 0x1f;
    }
  }
  if (lVar5 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




void FUN_1005cf268(long param_1,undefined8 param_2,undefined4 *param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined4 local_6c;
  undefined1 local_68 [32];
  long local_48;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_6c = 0;
  iVar2 = (int)param_2;
  local_48 = lVar5;
  if (iVar2 < 0) {
    uVar1 = 0x1f;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == 0) {
      uVar1 = 0x1f;
    }
    else if (iVar2 < *(int *)(lVar3 + 0x60)) {
      if (*(long *)(lVar3 + 0x98) == 0) {
        uVar1 = 0x44;
      }
      else if (**(int **)(*(long *)(lVar3 + 0x68) + (long)iVar2 * 8) == 1) {
        *(long *)(param_1 + 0x98) = param_1;
        local_68[0] = 0;
        if ((param_4 == 0) && (*(int *)(param_1 + 0xe8) != 0)) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = local_68;
        }
        uVar1 = (**(code **)(lVar3 + 0x98))(param_1 + 0x98,param_2,&local_6c,puVar4);
        if ((int)uVar1 == 0) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = local_6c;
          }
          if (param_4 != 0) {
            FUN_1005ecc98(param_4,puVar4,param_5);
          }
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0x1f;
      }
    }
    else {
      uVar1 = 0x1f;
    }
  }
  if (lVar5 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




void FUN_1005cf384(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  int local_6c;
  undefined1 local_68 [32];
  long local_48;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_6c = 0;
  iVar2 = (int)param_2;
  local_48 = lVar5;
  if (iVar2 < 0) {
    uVar1 = 0x1f;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == 0) {
      uVar1 = 0x1f;
    }
    else if (iVar2 < *(int *)(lVar3 + 0x60)) {
      if (*(long *)(lVar3 + 0xa0) == 0) {
        uVar1 = 0x44;
      }
      else if (**(int **)(*(long *)(lVar3 + 0x68) + (long)iVar2 * 8) == 2) {
        *(long *)(param_1 + 0x98) = param_1;
        local_68[0] = 0;
        if ((param_4 == 0) && (*(int *)(param_1 + 0xe8) != 0)) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = local_68;
        }
        uVar1 = (**(code **)(lVar3 + 0xa0))(param_1 + 0x98,param_2,&local_6c,puVar4);
        if ((int)uVar1 == 0) {
          if (param_3 != 0) {
            *(bool *)param_3 = local_6c != 0;
          }
          if (param_4 != 0) {
            FUN_1005ecc98(param_4,puVar4,param_5);
          }
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0x1f;
      }
    }
    else {
      uVar1 = 0x1f;
    }
  }
  if (lVar5 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




void FUN_1005cf4a8(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [32];
  long local_48;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_70 = 0;
  local_74 = 0;
  iVar2 = (int)param_2;
  local_48 = lVar5;
  if (iVar2 < 0) {
    uVar1 = 0x1f;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == 0) {
      uVar1 = 0x1f;
    }
    else if (iVar2 < *(int *)(lVar3 + 0x60)) {
      if (*(long *)(lVar3 + 0xa8) == 0) {
        uVar1 = 0x44;
      }
      else if (**(int **)(*(long *)(lVar3 + 0x68) + (long)iVar2 * 8) == 3) {
        *(long *)(param_1 + 0x98) = param_1;
        local_68[0] = 0;
        if ((param_5 == 0) && (*(int *)(param_1 + 0xe8) != 0)) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = local_68;
        }
        uVar1 = (**(code **)(lVar3 + 0xa8))(param_1 + 0x98,param_2,&local_70,&local_74,puVar4);
        if ((int)uVar1 == 0) {
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = local_70;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = local_74;
          }
          if (param_5 != 0) {
            FUN_1005ecc98(param_5,puVar4,param_6);
          }
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0x1f;
      }
    }
    else {
      uVar1 = 0x1f;
    }
  }
  if (lVar5 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




undefined8 FUN_1005cf5dc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 0xd0) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x60);
    }
    *param_2 = uVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005cf608(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 < 0) {
    return 0x1f;
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    uVar1 = 0x1f;
    if ((param_3 != (undefined8 *)0x0) && (param_2 < *(int *)(lVar2 + 0x60))) {
      if (*(long *)(lVar2 + 0x68) == 0) {
        return 0x35;
      }
      uVar1 = 0;
      *param_3 = *(undefined8 *)(*(long *)(lVar2 + 0x68) + (long)param_2 * 8);
    }
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_1005cf658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
    *(long *)(param_1 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001005cf680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xf0))(param_1 + 0x98,3,param_2,param_3);
    return uVar1;
  }
  return 0x44;
}




undefined8
FUN_1005cf68c(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    pcVar3 = *(char **)(param_1 + 0xd8);
    if (*(char **)(param_1 + 0xd8) == (char *)0x0) {
      pcVar3 = "";
      if (*(long *)(param_1 + 0xd0) != 0) {
        pcVar3 = (char *)(*(long *)(param_1 + 0xd0) + 4);
      }
    }
    FUN_1005ecc98(param_2,pcVar3,0x20);
  }
  if (param_3 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 0xd0) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x24);
    }
    *param_3 = uVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 0xd0) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x100);
    }
    *param_4 = uVar2;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if ((*(code **)(param_1 + 0xf0) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_1 + 0xf0))(param_1 + 0x98,5,param_5,param_6), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1005cf768(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xe8);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005cf78c(long param_1,byte *param_2)

{
  if (param_2 != (byte *)0x0) {
    *param_2 = (byte)*(undefined4 *)(param_1 + 0x17c) & 1;
    return 0;
  }
  return 0x1f;
}




undefined8
FUN_1005cf7b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if ((*(byte *)(param_1 + 0x3c) >> 3 & 1) != 0) {
    FUN_100570c5c(*(undefined8 *)(param_1 + 0x90));
    *(long *)(param_1 + 0x98) = param_1;
    (**(code **)(param_1 + 0xf0))(param_1 + 0x98,0,0,0);
    FUN_100570c9c(*(undefined8 *)(param_1 + 0x90));
  }
  FUN_1005cbba4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return 0;
}




undefined8 FUN_1005cf85c(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if (((uint)param_3 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  fVar1 = 1.0;
  if (1.00001 <= param_1) {
    fVar1 = param_1;
  }
  if (param_1 <= 0.99999) {
    fVar1 = param_1;
  }
  *(float *)(param_4 + 0x184) = fVar1;
  fVar1 = 1.0;
  if (1.00001 <= param_2) {
    fVar1 = param_2;
  }
  if (param_2 <= 0.99999) {
    fVar1 = param_2;
  }
  *(float *)(param_4 + 0x188) = fVar1;
  fVar1 = 1.0;
  if (1.00001 <= param_3) {
    fVar1 = param_3;
  }
  if (param_3 <= 0.99999) {
    fVar1 = param_3;
  }
  *(float *)(param_4 + 0x18c) = fVar1;
  return 0;
}




undefined8 FUN_1005cf914(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x184);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x188);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x18c);
  }
  return 0;
}




undefined8 FUN_1005cf940(float param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x1f;
  if ((0.0 <= param_1) && (param_1 <= 256.0)) {
    FUN_10057097c(*(undefined8 *)(param_2 + 0x90),1);
    iVar1 = *(int *)(param_2 + 0x20);
    *(int *)(param_2 + 0x20) = (int)(param_1 * 1048576.0);
    lVar3 = *(long *)(param_2 + 0x90);
    if (((int)(param_1 * 1048576.0) == 0) != (iVar1 == 0)) {
      *(undefined4 *)(*(long *)(lVar3 + 0x14828) + 0x30) = 1;
    }
    FUN_100570990(lVar3,1);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1005cf9d8(long param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  if (param_2 == (float *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    FUN_10057097c(*(undefined8 *)(param_1 + 0x90),1);
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x20));
    *param_2 = fVar2 * 9.536743e-07;
    FUN_100570990(*(undefined8 *)(param_1 + 0x90),1);
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1005cfa38(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1a8) = param_2;
  return 0;
}




undefined8 FUN_1005cfa44(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x1a8);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005cfa68(long param_1,void *param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 != 0) {
    FUN_10057097c(lVar3,6);
  }
  lVar2 = *(long *)(param_1 + 0x1c0);
  if (lVar2 == 0) {
    lVar1 = 0;
    lVar5 = 0;
  }
  else {
    lVar1 = 0;
    if (*(char *)(lVar2 + 0x212) != '\0') {
      lVar1 = lVar2;
    }
    lVar5 = 0;
    if (*(char *)(lVar2 + 0x426) != '\0') {
      lVar5 = lVar2 + 0x214;
    }
  }
  if (param_2 == (void *)0x0 && param_3 == (void *)0x0) {
    uVar4 = 0x1f;
  }
  else if ((param_2 == (void *)0x0) || (lVar1 != 0)) {
    if ((param_3 == (void *)0x0) || (lVar5 != 0)) {
      if (param_2 != (void *)0x0) {
        _memcpy(param_2,(void *)(lVar1 + 0x100),0x108);
      }
      if (param_3 != (void *)0x0) {
        _memcpy(param_3,(void *)(lVar5 + 0x100),0x108);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  if ((lVar3 != 0) && (lVar3 != 0)) {
    FUN_100570990(lVar3,6);
  }
  return uVar4;
}




undefined8 FUN_1005cfb60(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    FUN_10057097c(lVar2,6);
  }
  if (param_2 == (undefined1 *)0x0 && param_3 == (undefined1 *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x1c0) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x1c0) + 0x212);
      }
      *param_2 = uVar1;
    }
    if (param_3 == (undefined1 *)0x0) {
      uVar3 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x1c0) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x1c0) + 0x426);
      }
      uVar3 = 0;
      *param_3 = uVar1;
    }
  }
  if (lVar2 != 0) {
    FUN_100570990(lVar2,6);
  }
  return uVar3;
}




undefined8 FUN_1005cfc1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 != 0) {
    FUN_10057097c(lVar4,6);
  }
  lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x450,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dspi.cpp"
                        ,0x1792,0);
  *(long *)(param_1 + 0x1b8) = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  else {
    uVar3 = lVar1 + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(uVar3 + 0x430) = uVar3 + 0x428;
    *(ulong *)(uVar3 + 0x428) = uVar3 + 0x428;
    *(ulong *)(uVar3 + 0x438) = uVar3;
    *(ulong *)(param_1 + 0x1c0) = uVar3;
    uVar2 = FUN_100571ea4(*(undefined8 *)(param_1 + 0x90));
  }
  if ((lVar4 != 0) && (lVar4 != 0)) {
    FUN_100570990(lVar4,6);
  }
  return uVar2;
}




undefined8 FUN_1005cfcd8(long param_1,void *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_3 == 0) {
    if (*(char *)((long)param_2 + 0x212) == '\0') {
      return 0;
    }
    _bzero(param_2,0x214);
    lVar1 = *(long *)(param_1 + 0x90);
    iVar2 = *(int *)(lVar1 + 0x15668) + -1;
  }
  else {
    if (*(char *)((long)param_2 + 0x212) != '\0') {
      return 0;
    }
    *(undefined1 *)((long)param_2 + 0x212) = 1;
    lVar1 = *(long *)(param_1 + 0x90);
    iVar2 = *(int *)(lVar1 + 0x15668) + 1;
  }
  *(int *)(lVar1 + 0x15668) = iVar2;
  return 0;
}




void FUN_1005cfd50(float *param_1,uint param_2,int param_3,float *param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
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
  
  if (param_3 - 1U < 8) {
    iVar2 = (int)param_2 >> 2;
    switch(param_3) {
    case 1:
      fVar6 = *param_4;
      fVar5 = *param_5;
      if (iVar2 != 0) {
        uVar1 = iVar2 - 1;
        pfVar4 = param_1;
        do {
          fVar10 = ABS(*pfVar4);
          fVar9 = fVar10;
          if (fVar10 <= fVar6) {
            fVar9 = fVar6;
          }
          fVar11 = ABS(pfVar4[1]);
          fVar6 = fVar11;
          if (fVar11 <= fVar9) {
            fVar6 = fVar9;
          }
          fVar15 = ABS(pfVar4[2]);
          fVar9 = fVar15;
          if (fVar15 <= fVar6) {
            fVar9 = fVar6;
          }
          fVar16 = ABS(pfVar4[3]);
          fVar6 = fVar16;
          if (fVar16 <= fVar9) {
            fVar6 = fVar9;
          }
          fVar5 = fVar5 + fVar10 * fVar10 + fVar11 * fVar11 + fVar15 * fVar15 + fVar16 * fVar16;
          iVar2 = iVar2 + -1;
          pfVar4 = pfVar4 + 4;
        } while (iVar2 != 0);
        param_1 = param_1 + (ulong)uVar1 * 4 + 4;
      }
      if ((param_2 & 3) != 0) {
        iVar2 = -(param_2 & 3);
        fVar9 = fVar6;
        do {
          fVar10 = ABS(*param_1);
          fVar6 = fVar10;
          if (fVar10 <= fVar9) {
            fVar6 = fVar9;
          }
          fVar5 = fVar5 + fVar10 * fVar10;
          iVar2 = iVar2 + 1;
          param_1 = param_1 + 1;
          fVar9 = fVar6;
        } while (iVar2 != 0);
      }
      *param_5 = fVar5;
      *param_4 = fVar6;
      return;
    case 2:
      fVar6 = *param_4;
      fVar5 = param_4[1];
      fVar10 = *param_5;
      fVar9 = param_5[1];
      if (iVar2 != 0) {
        uVar1 = iVar2 - 1;
        pfVar4 = param_1;
        do {
          fVar15 = ABS(*pfVar4);
          fVar16 = ABS(pfVar4[1]);
          fVar11 = fVar15;
          if (fVar15 <= fVar6) {
            fVar11 = fVar6;
          }
          fVar6 = fVar16;
          if (fVar16 <= fVar5) {
            fVar6 = fVar5;
          }
          fVar17 = ABS(pfVar4[2]);
          fVar18 = ABS(pfVar4[3]);
          fVar5 = fVar17;
          if (fVar17 <= fVar11) {
            fVar5 = fVar11;
          }
          fVar11 = fVar18;
          if (fVar18 <= fVar6) {
            fVar11 = fVar6;
          }
          fVar12 = ABS(pfVar4[4]);
          fVar13 = ABS(pfVar4[5]);
          fVar7 = fVar12;
          if (fVar12 <= fVar5) {
            fVar7 = fVar5;
          }
          fVar8 = fVar13;
          if (fVar13 <= fVar11) {
            fVar8 = fVar11;
          }
          fVar11 = ABS(pfVar4[6]);
          fVar14 = ABS(pfVar4[7]);
          fVar6 = fVar11;
          if (fVar11 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = fVar14;
          if (fVar14 <= fVar8) {
            fVar5 = fVar8;
          }
          fVar10 = fVar10 + fVar15 * fVar15 + fVar17 * fVar17 + fVar12 * fVar12 + fVar11 * fVar11;
          fVar9 = fVar9 + fVar16 * fVar16 + fVar18 * fVar18 + fVar13 * fVar13 + fVar14 * fVar14;
          iVar2 = iVar2 + -1;
          pfVar4 = pfVar4 + 8;
        } while (iVar2 != 0);
        param_1 = param_1 + (ulong)uVar1 * 8 + 8;
      }
      if ((param_2 & 3) != 0) {
        iVar2 = -(param_2 & 3);
        fVar11 = fVar6;
        fVar15 = fVar5;
        do {
          fVar16 = ABS(*param_1);
          fVar17 = ABS(param_1[1]);
          fVar6 = fVar16;
          if (fVar16 <= fVar11) {
            fVar6 = fVar11;
          }
          fVar5 = fVar17;
          if (fVar17 <= fVar15) {
            fVar5 = fVar15;
          }
          fVar10 = fVar10 + fVar16 * fVar16;
          fVar9 = fVar9 + fVar17 * fVar17;
          iVar2 = iVar2 + 1;
          param_1 = param_1 + 2;
          fVar11 = fVar6;
          fVar15 = fVar5;
        } while (iVar2 != 0);
      }
      *param_4 = fVar6;
      param_4[1] = fVar5;
      *param_5 = fVar10;
      param_5[1] = fVar9;
      return;
    default:
      goto switchD_1005cfd6c_caseD_3;
    case 6:
      for (; param_2 != 0; param_2 = param_2 - 1) {
        fVar5 = ABS(*param_1);
        fVar9 = ABS(param_1[1]);
        fVar10 = ABS(param_1[2]);
        fVar11 = ABS(param_1[3]);
        fVar15 = ABS(param_1[4]);
        fVar16 = ABS(param_1[5]);
        fVar6 = fVar5;
        if (fVar5 <= *param_4) {
          fVar6 = *param_4;
        }
        *param_4 = fVar6;
        fVar6 = fVar9;
        if (fVar9 <= param_4[1]) {
          fVar6 = param_4[1];
        }
        param_4[1] = fVar6;
        fVar6 = fVar10;
        if (fVar10 <= param_4[2]) {
          fVar6 = param_4[2];
        }
        param_4[2] = fVar6;
        fVar6 = fVar11;
        if (fVar11 <= param_4[3]) {
          fVar6 = param_4[3];
        }
        param_4[3] = fVar6;
        fVar6 = fVar15;
        if (fVar15 <= param_4[4]) {
          fVar6 = param_4[4];
        }
        param_4[4] = fVar6;
        fVar6 = fVar16;
        if (fVar16 <= param_4[5]) {
          fVar6 = param_4[5];
        }
        param_4[5] = fVar6;
        *param_5 = fVar5 * fVar5 + *param_5;
        param_5[1] = fVar9 * fVar9 + param_5[1];
        param_5[2] = fVar10 * fVar10 + param_5[2];
        param_5[3] = fVar11 * fVar11 + param_5[3];
        param_5[4] = fVar15 * fVar15 + param_5[4];
        param_1 = param_1 + 6;
        param_5[5] = fVar16 * fVar16 + param_5[5];
      }
      break;
    case 8:
      for (; param_2 != 0; param_2 = param_2 - 1) {
        fVar5 = ABS(*param_1);
        fVar9 = ABS(param_1[1]);
        fVar10 = ABS(param_1[2]);
        fVar11 = ABS(param_1[3]);
        fVar15 = ABS(param_1[4]);
        fVar16 = ABS(param_1[5]);
        fVar17 = ABS(param_1[6]);
        fVar18 = ABS(param_1[7]);
        fVar6 = fVar5;
        if (fVar5 <= *param_4) {
          fVar6 = *param_4;
        }
        *param_4 = fVar6;
        fVar6 = fVar9;
        if (fVar9 <= param_4[1]) {
          fVar6 = param_4[1];
        }
        param_4[1] = fVar6;
        fVar6 = fVar10;
        if (fVar10 <= param_4[2]) {
          fVar6 = param_4[2];
        }
        param_4[2] = fVar6;
        fVar6 = fVar11;
        if (fVar11 <= param_4[3]) {
          fVar6 = param_4[3];
        }
        param_4[3] = fVar6;
        fVar6 = fVar15;
        if (fVar15 <= param_4[4]) {
          fVar6 = param_4[4];
        }
        param_4[4] = fVar6;
        fVar6 = fVar16;
        if (fVar16 <= param_4[5]) {
          fVar6 = param_4[5];
        }
        param_4[5] = fVar6;
        fVar6 = fVar17;
        if (fVar17 <= param_4[6]) {
          fVar6 = param_4[6];
        }
        param_4[6] = fVar6;
        fVar6 = fVar18;
        if (fVar18 <= param_4[7]) {
          fVar6 = param_4[7];
        }
        param_4[7] = fVar6;
        *param_5 = fVar5 * fVar5 + *param_5;
        param_5[1] = fVar9 * fVar9 + param_5[1];
        param_5[2] = fVar10 * fVar10 + param_5[2];
        param_5[3] = fVar11 * fVar11 + param_5[3];
        param_5[4] = fVar15 * fVar15 + param_5[4];
        param_5[5] = fVar16 * fVar16 + param_5[5];
        param_5[6] = fVar17 * fVar17 + param_5[6];
        param_1 = param_1 + 8;
        param_5[7] = fVar18 * fVar18 + param_5[7];
      }
    }
  }
  else {
switchD_1005cfd6c_caseD_3:
    if (param_3 * param_2 != 0) {
      uVar3 = 0;
      iVar2 = -(param_3 * param_2);
      do {
        fVar5 = ABS(*param_1);
        fVar6 = fVar5;
        if (fVar5 <= param_4[uVar3]) {
          fVar6 = param_4[uVar3];
        }
        param_4[uVar3] = fVar6;
        param_5[uVar3] = fVar5 * fVar5 + param_5[uVar3];
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulong)(uVar1 & (int)(uVar1 - param_3) >> 0x1f);
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  return;
}

