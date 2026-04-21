// functions/10056 — 172 functions
#include "GameKindred.h"




undefined8 FUN_10056079c(long param_1,int param_2,int *param_3,void *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  uVar3 = 0x1f;
  if ((param_2 == 0) && (param_3 != (int *)0x0)) {
    iVar2 = *(int *)(param_1 + 0xdec);
    *param_3 = iVar2;
    if (param_4 != (void *)0x0) {
      pcVar1 = "Paused";
      if (iVar2 != 0) {
        pcVar1 = "Analysing";
      }
      sVar4 = 7;
      if (iVar2 != 0) {
        sVar4 = 10;
      }
      _memcpy(param_4,pcVar1,sVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005607f8(long param_1,int param_2,void *param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if (((param_2 == 1) && (param_3 != (void *)0x0)) && (param_4 == 0x80)) {
    _memcpy((void *)(param_1 + 0xd6c),param_3,0x80);
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0xd68) = 1;
    *(undefined2 *)(param_1 + 0xd69) = 0x101;
  }
  return uVar1;
}




undefined8
FUN_100560858(long param_1,int param_2,long *param_3,undefined4 *param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0xd69) == '\0') {
      puVar2 = (undefined *)(param_1 + 0x1c8);
    }
    else {
      puVar2 = &DAT_101e94960;
    }
    *param_3 = (long)puVar2;
    uVar1 = 0x124;
  }
  else {
    if (param_2 != 1) {
      return 0x1f;
    }
    *param_3 = param_1 + 0xd6c;
    uVar1 = 0x80;
  }
  *param_4 = uVar1;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  return 0;
}




undefined8 FUN_1005608b4(undefined8 *param_1)

{
  FUN_10055ed5c(*param_1);
  return 0;
}




undefined8 FUN_1005608d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(lVar2 + 0xd50);
  *(undefined8 *)(lVar2 + 0xd50) = 0;
  while (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar1 = lVar3;
  }
  lVar1 = *(long *)(lVar2 + 0xd60);
  *(undefined8 *)(lVar2 + 0xd60) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_loudness_meter.cpp"
                  ,0xf9);
    lVar1 = lVar2;
  }
  return 0;
}




undefined8 FUN_100560970(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0xd68) = 1;
  *(undefined2 *)(lVar1 + 0xd69) = 0x101;
  return 0;
}




void FUN_100560990(undefined8 *param_1)

{
  FUN_10055fa08(*param_1);
  return;
}




undefined8 FUN_100560998(long *param_1,int param_2,int param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    return 0x1f;
  }
  lVar1 = *param_1;
  if (param_3 == -1) {
    *(undefined2 *)(lVar1 + 0xd69) = 0x101;
    return 0;
  }
  if (param_3 == -2) {
    *(undefined1 *)(lVar1 + 0xd6a) = 1;
    return 0;
  }
  if (param_3 == -3) {
    *(undefined1 *)(lVar1 + 0xd69) = 1;
    return 0;
  }
  *(int *)(lVar1 + 0xdec) = param_3;
  return 0;
}




undefined8 FUN_100560a00(long *param_1,int param_2,int *param_3,void *param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  uVar3 = 0x1f;
  if ((param_2 == 0) && (param_3 != (int *)0x0)) {
    iVar2 = *(int *)(*param_1 + 0xdec);
    *param_3 = iVar2;
    if (param_4 != (void *)0x0) {
      pcVar1 = "Paused";
      if (iVar2 != 0) {
        pcVar1 = "Analysing";
      }
      sVar4 = 7;
      if (iVar2 != 0) {
        sVar4 = 10;
      }
      _memcpy(param_4,pcVar1,sVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_100560a60(long *param_1,int param_2,void *param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x1f;
  if (((param_2 == 1) && (param_3 != (void *)0x0)) && (param_4 == 0x80)) {
    lVar2 = *param_1;
    _memcpy((void *)(lVar2 + 0xd6c),param_3,0x80);
    uVar1 = 0;
    *(undefined1 *)(lVar2 + 0xd68) = 1;
    *(undefined2 *)(lVar2 + 0xd69) = 0x101;
  }
  return uVar1;
}




undefined8
FUN_100560ac4(long *param_1,int param_2,long *param_3,undefined4 *param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *param_1;
  if (param_2 == 2) {
    if (*(char *)(lVar2 + 0xd69) == '\0') {
      puVar3 = (undefined *)(lVar2 + 0x1c8);
    }
    else {
      puVar3 = &DAT_101e94960;
    }
    *param_3 = (long)puVar3;
    uVar1 = 0x124;
  }
  else {
    if (param_2 != 1) {
      return 0x1f;
    }
    *param_3 = lVar2 + 0xd6c;
    uVar1 = 0x80;
  }
  *param_4 = uVar1;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  return 0;
}




void FUN_100560b24(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                  long param_6,uint param_7,uint param_8,uint *param_9,uint *param_10,uint param_11,
                  undefined8 param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined2 *puVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined2 uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  short *psVar24;
  short *psVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  short sVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar70;
  ulong uVar66;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  short sVar73;
  short sVar76;
  short sVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  
  uVar13 = (ulong)(param_12._4_4_ - 1);
  switch(uVar13) {
  case 0:
    if ((int)param_12 != 0) {
      uVar6 = ~param_11;
      auVar48 = NEON_fmov(0x3f800000,4);
      auVar51 = NEON_fmov(0xbf800000,4);
      uVar35 = param_7;
      do {
        uVar1 = (int)param_12 + uVar35;
        uVar31 = uVar1;
        if (param_11 <= uVar1) {
          uVar31 = param_11;
        }
        uVar2 = (int)param_12 + param_8;
        uVar5 = uVar2;
        if (param_11 <= uVar2) {
          uVar5 = param_11;
        }
        iVar4 = uVar31 - uVar35;
        if ((int)(uVar5 - param_8) <= (int)(uVar31 - uVar35)) {
          iVar4 = uVar5 - param_8;
        }
        if (0 < iVar4) {
          puVar21 = (ulong *)(param_6 + (ulong)param_8 * 2);
          psVar24 = (short *)(param_6 + (ulong)uVar35 * 2);
          uVar31 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar31 = ~uVar1;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar5 = ~uVar2;
          }
          iVar3 = uVar35 + uVar31;
          if ((int)(uVar35 + uVar31) <= (int)(param_8 + uVar5)) {
            iVar3 = param_8 + uVar5;
          }
          uVar31 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar31 = ~uVar2;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar5 = ~uVar1;
          }
          iVar14 = param_8 + uVar31;
          if ((int)(param_8 + uVar31) <= (int)(uVar35 + uVar5)) {
            iVar14 = uVar35 + uVar5;
          }
          uVar13 = (ulong)(-iVar14 - 2);
          uVar15 = uVar13 + 1 & 0x1fffffffc;
          pfVar7 = param_4;
          pfVar11 = param_5;
          puVar22 = puVar21;
          psVar25 = psVar24;
          if (uVar15 == 0) {
            uVar20 = 0;
          }
          else {
            lVar32 = (ulong)param_8 * 2;
            lVar33 = (ulong)uVar35 * 2;
            uVar20 = 0;
            if ((param_5 + uVar13 < param_4 || param_4 + uVar13 < param_5) &&
               (param_6 + lVar33 + uVar13 * 2 < (ulong)(param_6 + lVar32) ||
                param_6 + lVar32 + uVar13 * 2 < (ulong)(param_6 + lVar33))) {
              psVar25 = (short *)(param_6 + (uVar35 + uVar15) * 2);
              puVar22 = (ulong *)(param_6 + (param_8 + uVar15) * 2);
              pfVar7 = param_4 + uVar15;
              pfVar11 = param_5 + uVar15;
              uVar31 = uVar6;
              if (uVar6 <= ~((int)param_12 + uVar35)) {
                uVar31 = ~((int)param_12 + uVar35);
              }
              uVar5 = uVar6;
              if (uVar6 <= ~((int)param_12 + param_8)) {
                uVar5 = ~((int)param_12 + param_8);
              }
              iVar14 = uVar35 + uVar31;
              if ((int)(uVar35 + uVar31) <= (int)(param_8 + uVar5)) {
                iVar14 = param_8 + uVar5;
              }
              uVar27 = (ulong)(-iVar14 - 2) + 1 & 0xfffffffffffffffc;
              pfVar12 = param_5;
              pfVar8 = param_4;
              do {
                uVar58 = *(undefined8 *)psVar24;
                auVar67._0_4_ = (int)(short)uVar58;
                auVar67._4_4_ = (int)(short)((ulong)uVar58 >> 0x10);
                auVar67._8_4_ = (int)(short)((ulong)uVar58 >> 0x20);
                auVar67._12_4_ = (int)(short)((ulong)uVar58 >> 0x30);
                auVar69 = NEON_scvtf(auVar67,4);
                fVar64 = auVar69._0_4_ * 3.051851e-05;
                fVar70 = auVar69._4_4_ * 3.051851e-05;
                fVar71 = auVar69._8_4_ * 3.051851e-05;
                fVar72 = auVar69._12_4_ * 3.051851e-05;
                fVar60 = (float)*(undefined8 *)pfVar12;
                fVar61 = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
                fVar62 = (float)*(undefined8 *)(pfVar12 + 2);
                fVar63 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
                auVar74._0_8_ =
                     CONCAT44(fVar61 * param_2 + fVar70 * param_1,
                              fVar60 * param_2 + fVar64 * param_1);
                auVar74._8_4_ = fVar62 * param_2 + fVar71 * param_1;
                auVar74._12_4_ = fVar63 * param_2 + fVar72 * param_1;
                *(undefined8 *)pfVar8 = auVar74._0_8_;
                auVar69 = NEON_ext(auVar74,auVar74,8,1);
                *(long *)(pfVar8 + 2) = auVar69._0_8_;
                fVar60 = fVar60 + fVar64 * param_3;
                fVar61 = fVar61 + fVar70 * param_3;
                fVar62 = fVar62 + fVar71 * param_3;
                fVar63 = fVar63 + fVar72 * param_3;
                sVar73 = -(ushort)(fVar60 < auVar51._0_4_);
                sVar43 = -(ushort)(fVar61 < auVar51._4_4_);
                sVar76 = -(ushort)(fVar62 < auVar51._8_4_);
                sVar77 = -(ushort)(fVar63 < auVar51._12_4_);
                uVar26 = (ulong)CONCAT16(-(auVar48._12_4_ < fVar63),
                                         (uint6)CONCAT14(-(auVar48._8_4_ < fVar62),
                                                         (uint)CONCAT12(-(auVar48._4_4_ < fVar61),
                                                                        -(ushort)(auVar48._0_4_ <
                                                                                 fVar60)))) ^
                         0x1000100010001;
                uVar20 = ((ulong)CONCAT16((char)sVar77,
                                          (uint6)CONCAT14((char)sVar76,
                                                          (uint)CONCAT12((char)sVar43,sVar73))) ^
                         0x1000100010001) & uVar26;
                uVar26 = CONCAT26(sVar77,CONCAT24(sVar76,CONCAT22(sVar43,sVar73))) & uVar26;
                uVar20 = (CONCAT26((short)(int)(fVar63 * 32767.0),
                                   CONCAT24((short)(int)(fVar62 * 32767.0),
                                            CONCAT22((short)(int)(fVar61 * 32767.0),
                                                     (short)(int)(fVar60 * 32767.0)))) ^
                         0x7fff7fff7fff7fff) &
                         CONCAT26((short)((short)(uVar20 >> 0x30) << 0xf) >> 0xf,
                                  CONCAT24((short)((short)(uVar20 >> 0x20) << 0xf) >> 0xf,
                                           CONCAT22((short)((short)(uVar20 >> 0x10) << 0xf) >> 0xf,
                                                    (short)((short)uVar20 << 0xf) >> 0xf)));
                uVar27 = uVar27 - 4;
                pfVar8 = pfVar8 + 4;
                *puVar21 = uVar20 ^ 0x7fff7fff7fff7fff ^
                           (uVar20 ^ 0xffffffffffffffff) &
                           CONCAT26((short)((short)(uVar26 >> 0x30) << 0xf) >> 0xf,
                                    CONCAT24((short)((short)(uVar26 >> 0x20) << 0xf) >> 0xf,
                                             CONCAT22((short)((short)(uVar26 >> 0x10) << 0xf) >> 0xf
                                                      ,(short)((short)uVar26 << 0xf) >> 0xf)));
                pfVar12 = pfVar12 + 4;
                puVar21 = puVar21 + 1;
                psVar24 = psVar24 + 4;
                uVar20 = uVar15;
              } while (uVar27 != 0);
            }
          }
          if (uVar13 + 1 != uVar20) {
            uVar31 = uVar6;
            if (uVar6 <= ~((int)param_12 + param_8)) {
              uVar31 = ~((int)param_12 + param_8);
            }
            uVar5 = uVar6;
            if (uVar6 <= ~((int)param_12 + uVar35)) {
              uVar5 = ~((int)param_12 + uVar35);
            }
            iVar14 = param_8 + uVar31;
            if ((int)(param_8 + uVar31) <= (int)(uVar35 + uVar5)) {
              iVar14 = uVar35 + uVar5;
            }
            iVar14 = ~(uint)uVar20 - iVar14;
            do {
              fVar60 = *pfVar11;
              sVar73 = *psVar25;
              *pfVar7 = fVar60 * param_2 + (float)(int)sVar73 * 3.051851e-05 * param_1;
              fVar60 = fVar60 + (float)(int)sVar73 * 3.051851e-05 * param_3;
              if (fVar60 <= 1.0) {
                if (-1.0 <= fVar60) {
                  uVar16 = (undefined2)(int)(fVar60 * 32767.0);
                }
                else {
                  uVar16 = 0x8000;
                }
              }
              else {
                uVar16 = 0x7fff;
              }
              *(undefined2 *)puVar22 = uVar16;
              pfVar11 = pfVar11 + 1;
              pfVar7 = pfVar7 + 1;
              psVar25 = psVar25 + 1;
              iVar14 = iVar14 + -1;
              puVar22 = (ulong *)((long)puVar22 + 2);
            } while (iVar14 != 0);
          }
          param_4 = param_4 + (ulong)(-iVar3 - 2) + 1;
          param_5 = param_5 + (ulong)(-iVar3 - 2) + 1;
        }
        uVar31 = uVar6;
        if (uVar6 <= ~uVar1) {
          uVar31 = ~uVar1;
        }
        iVar3 = uVar35 + uVar31;
        uVar1 = uVar6;
        if (uVar6 <= ~uVar2) {
          uVar1 = ~uVar2;
        }
        iVar14 = param_8 + uVar1;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + uVar35) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar1 = ((param_11 - 1) + uVar35) - iVar14;
        do {
          param_7 = uVar1;
          iVar17 = iVar17 + param_11;
          uVar1 = param_7 + param_11;
        } while (iVar17 < 0);
        do {
          param_7 = param_7 - param_11;
        } while ((int)param_11 <= (int)param_7);
        uVar1 = uVar6;
        if (uVar6 <= ~((int)param_12 + uVar35)) {
          uVar1 = ~((int)param_12 + uVar35);
        }
        iVar3 = uVar35 + uVar1;
        uVar35 = uVar6;
        if (uVar6 <= ~((int)param_12 + param_8)) {
          uVar35 = ~((int)param_12 + param_8);
        }
        iVar14 = param_8 + uVar35;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + param_8) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar35 = ((param_11 - 1) + param_8) - iVar14;
        do {
          param_8 = uVar35;
          iVar17 = iVar17 + param_11;
          uVar35 = param_8 + param_11;
        } while (iVar17 < 0);
        do {
          param_8 = param_8 - param_11;
        } while ((int)param_11 <= (int)param_8);
        param_12._0_4_ = (int)param_12 - iVar4;
        uVar35 = param_7;
      } while ((int)param_12 != 0);
    }
    break;
  case 1:
    if ((int)param_12 != 0) {
      uVar6 = ~param_11;
      uVar35 = param_7;
      do {
        uVar1 = (int)param_12 + uVar35;
        uVar31 = uVar1;
        if (param_11 <= uVar1) {
          uVar31 = param_11;
        }
        uVar2 = (int)param_12 + param_8;
        uVar5 = uVar2;
        if (param_11 <= uVar2) {
          uVar5 = param_11;
        }
        iVar4 = uVar31 - uVar35;
        if ((int)(uVar5 - param_8) <= (int)(uVar31 - uVar35)) {
          iVar4 = uVar5 - param_8;
        }
        if (0 < iVar4) {
          uVar31 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar31 = ~uVar1;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar5 = ~uVar2;
          }
          iVar3 = uVar35 + uVar31;
          if ((int)(uVar35 + uVar31) <= (int)(param_8 + uVar5)) {
            iVar3 = param_8 + uVar5;
          }
          psVar24 = (short *)(param_6 + 2 + (ulong)(uVar35 << 1) * 2);
          uVar31 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar31 = ~uVar2;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar5 = ~uVar1;
          }
          uVar10 = param_8 + uVar31;
          if ((int)(param_8 + uVar31) <= (int)(uVar35 + uVar5)) {
            uVar10 = uVar35 + uVar5;
          }
          uVar10 = ~uVar10;
          puVar9 = (undefined2 *)(param_6 + 2 + (ulong)(param_8 << 1) * 2);
          pfVar7 = param_4;
          pfVar11 = param_5;
          do {
            fVar60 = *pfVar11;
            fVar61 = pfVar11[1];
            sVar73 = psVar24[-1];
            sVar43 = *psVar24;
            *pfVar7 = fVar60 * param_2 + (float)(int)sVar73 * 3.051851e-05 * param_1;
            pfVar7[1] = fVar61 * param_2 + (float)(int)sVar43 * 3.051851e-05 * param_1;
            fVar60 = fVar60 + (float)(int)sVar73 * 3.051851e-05 * param_3;
            fVar61 = fVar61 + (float)(int)sVar43 * 3.051851e-05 * param_3;
            if (fVar60 <= 1.0) {
              if (-1.0 <= fVar60) {
                uVar16 = (undefined2)(int)(fVar60 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            puVar9[-1] = uVar16;
            if (fVar61 <= 1.0) {
              if (-1.0 <= fVar61) {
                uVar16 = (undefined2)(int)(fVar61 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            *puVar9 = uVar16;
            psVar24 = psVar24 + 2;
            uVar10 = uVar10 - 1;
            pfVar11 = pfVar11 + 2;
            pfVar7 = pfVar7 + 2;
            puVar9 = puVar9 + 2;
          } while (uVar10 != 0);
          param_4 = param_4 + (ulong)(-iVar3 - 2) * 2 + 2;
          param_5 = param_5 + (ulong)(-iVar3 - 2) * 2 + 2;
        }
        uVar31 = uVar6;
        if (uVar6 <= ~uVar1) {
          uVar31 = ~uVar1;
        }
        iVar3 = uVar35 + uVar31;
        uVar1 = uVar6;
        if (uVar6 <= ~uVar2) {
          uVar1 = ~uVar2;
        }
        iVar14 = param_8 + uVar1;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + uVar35) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar1 = ((param_11 - 1) + uVar35) - iVar14;
        do {
          param_7 = uVar1;
          iVar17 = iVar17 + param_11;
          uVar1 = param_7 + param_11;
        } while (iVar17 < 0);
        do {
          param_7 = param_7 - param_11;
        } while ((int)param_11 <= (int)param_7);
        uVar1 = uVar6;
        if (uVar6 <= ~((int)param_12 + uVar35)) {
          uVar1 = ~((int)param_12 + uVar35);
        }
        iVar3 = uVar35 + uVar1;
        uVar35 = uVar6;
        if (uVar6 <= ~((int)param_12 + param_8)) {
          uVar35 = ~((int)param_12 + param_8);
        }
        iVar14 = param_8 + uVar35;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + param_8) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar35 = ((param_11 - 1) + param_8) - iVar14;
        do {
          param_8 = uVar35;
          iVar17 = iVar17 + param_11;
          uVar35 = param_8 + param_11;
        } while (iVar17 < 0);
        do {
          param_8 = param_8 - param_11;
        } while ((int)param_11 <= (int)param_8);
        param_12._0_4_ = (int)param_12 - iVar4;
        uVar35 = param_7;
      } while ((int)param_12 != 0);
    }
    break;
  default:
    if ((int)param_12 != 0) {
      uVar6 = ~param_11;
      uVar15 = uVar13 + 1;
      uVar20 = -(ulong)(param_12._4_4_ >> 0x1f) & 0xfffffffe00000000 | (ulong)param_12._4_4_ << 1;
      uVar27 = -(ulong)(param_12._4_4_ >> 0x1f) & 0xfffffffc00000000 | (ulong)param_12._4_4_ << 2;
      auVar48 = NEON_fmov(0x3f800000,4);
      auVar51 = NEON_fmov(0xbf800000,4);
      uVar35 = param_7;
      do {
        uVar1 = (int)param_12 + uVar35;
        uVar31 = uVar1;
        if (param_11 <= uVar1) {
          uVar31 = param_11;
        }
        uVar2 = (int)param_12 + param_8;
        uVar5 = uVar2;
        if (param_11 <= uVar2) {
          uVar5 = param_11;
        }
        iVar4 = uVar31 - uVar35;
        if ((int)(uVar5 - param_8) <= (int)(uVar31 - uVar35)) {
          iVar4 = uVar5 - param_8;
        }
        pfVar11 = param_4;
        pfVar7 = param_5;
        if (0 < iVar4) {
          lVar32 = 0;
          uVar31 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar31 = ~uVar1;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar5 = ~uVar2;
          }
          lVar33 = (ulong)(param_8 * param_12._4_4_) * 2;
          iVar3 = uVar35 + uVar31;
          if ((int)(uVar35 + uVar31) <= (int)(param_8 + uVar5)) {
            iVar3 = param_8 + uVar5;
          }
          lVar18 = (long)(int)param_12._4_4_ * ((ulong)(-iVar3 - 2U) * 4 + 4);
          pfVar11 = (float *)((long)param_4 + lVar18);
          pfVar7 = (float *)((long)param_5 + lVar18);
          lVar29 = (ulong)(uVar35 * param_12._4_4_) * 2;
          lVar18 = param_6 + (ulong)(param_8 * param_12._4_4_) * 2;
          lVar23 = param_6 + (ulong)(uVar35 * param_12._4_4_) * 2;
          pfVar8 = param_4;
          pfVar12 = param_5;
          do {
            if (0 < (int)param_12._4_4_) {
              uVar26 = 0;
              if ((uVar15 & 0x1fffffffc) != 0) {
                lVar19 = (int)param_12._4_4_ * lVar32;
                lVar34 = uVar20 * lVar32;
                if ((param_5 + uVar13 + lVar19 < param_4 + lVar19 ||
                     param_4 + uVar13 + lVar19 < param_5 + lVar19) &&
                   (param_6 + uVar13 * 2 + lVar29 + lVar34 < (ulong)(param_6 + lVar33 + lVar34) ||
                    param_6 + uVar13 * 2 + lVar33 + lVar34 < (ulong)(param_6 + lVar29 + lVar34))) {
                  lVar34 = 0;
                  lVar19 = 0;
                  uVar30 = uVar15 & 0xfffffffffffffffc;
                  do {
                    uVar37 = ((undefined8 *)((long)pfVar12 + lVar34))[1];
                    uVar58 = *(undefined8 *)((long)pfVar12 + lVar34);
                    uVar65 = *(undefined8 *)(lVar23 + lVar19);
                    auVar68._0_4_ = (int)(short)uVar65;
                    auVar68._4_4_ = (int)(short)((ulong)uVar65 >> 0x10);
                    auVar68._8_4_ = (int)(short)((ulong)uVar65 >> 0x20);
                    auVar68._12_4_ = (int)(short)((ulong)uVar65 >> 0x30);
                    auVar69 = NEON_scvtf(auVar68,4);
                    fVar64 = auVar69._0_4_ * 3.051851e-05;
                    fVar70 = auVar69._4_4_ * 3.051851e-05;
                    fVar71 = auVar69._8_4_ * 3.051851e-05;
                    fVar72 = auVar69._12_4_ * 3.051851e-05;
                    fVar60 = (float)uVar58;
                    fVar61 = (float)((ulong)uVar58 >> 0x20);
                    fVar62 = (float)uVar37;
                    fVar63 = (float)((ulong)uVar37 >> 0x20);
                    auVar75._0_8_ =
                         CONCAT44(fVar61 * param_2 + fVar70 * param_1,
                                  fVar60 * param_2 + fVar64 * param_1);
                    auVar75._8_4_ = fVar62 * param_2 + fVar71 * param_1;
                    auVar75._12_4_ = fVar63 * param_2 + fVar72 * param_1;
                    *(undefined8 *)((long)pfVar8 + lVar34) = auVar75._0_8_;
                    auVar69 = NEON_ext(auVar75,auVar75,8,1);
                    ((undefined8 *)((long)pfVar8 + lVar34))[1] = auVar69._0_8_;
                    fVar60 = fVar60 + fVar64 * param_3;
                    fVar61 = fVar61 + fVar70 * param_3;
                    fVar62 = fVar62 + fVar71 * param_3;
                    fVar63 = fVar63 + fVar72 * param_3;
                    sVar73 = -(ushort)(fVar60 < auVar51._0_4_);
                    sVar43 = -(ushort)(fVar61 < auVar51._4_4_);
                    sVar76 = -(ushort)(fVar62 < auVar51._8_4_);
                    sVar77 = -(ushort)(fVar63 < auVar51._12_4_);
                    uVar66 = (ulong)CONCAT16(-(auVar48._12_4_ < fVar63),
                                             (uint6)CONCAT14(-(auVar48._8_4_ < fVar62),
                                                             (uint)CONCAT12(-(auVar48._4_4_ < fVar61
                                                                             ),-(ushort)(auVar48.
                                                  _0_4_ < fVar60)))) ^ 0x1000100010001;
                    uVar26 = ((ulong)CONCAT16((char)sVar77,
                                              (uint6)CONCAT14((char)sVar76,
                                                              (uint)CONCAT12((char)sVar43,sVar73)))
                             ^ 0x1000100010001) & uVar66;
                    uVar66 = CONCAT26(sVar77,CONCAT24(sVar76,CONCAT22(sVar43,sVar73))) & uVar66;
                    uVar26 = (CONCAT26((short)(int)(fVar63 * 32767.0),
                                       CONCAT24((short)(int)(fVar62 * 32767.0),
                                                CONCAT22((short)(int)(fVar61 * 32767.0),
                                                         (short)(int)(fVar60 * 32767.0)))) ^
                             0x7fff7fff7fff7fff) &
                             CONCAT26((short)((short)(uVar26 >> 0x30) << 0xf) >> 0xf,
                                      CONCAT24((short)((short)(uVar26 >> 0x20) << 0xf) >> 0xf,
                                               CONCAT22((short)((short)(uVar26 >> 0x10) << 0xf) >>
                                                        0xf,(short)((short)uVar26 << 0xf) >> 0xf)));
                    *(ulong *)(lVar18 + lVar19) =
                         uVar26 ^ 0x7fff7fff7fff7fff ^
                         (uVar26 ^ 0xffffffffffffffff) &
                         CONCAT26((short)((short)(uVar66 >> 0x30) << 0xf) >> 0xf,
                                  CONCAT24((short)((short)(uVar66 >> 0x20) << 0xf) >> 0xf,
                                           CONCAT22((short)((short)(uVar66 >> 0x10) << 0xf) >> 0xf,
                                                    (short)((short)uVar66 << 0xf) >> 0xf)));
                    uVar30 = uVar30 - 4;
                    lVar19 = lVar19 + 8;
                    lVar34 = lVar34 + 0x10;
                    uVar26 = uVar15 & 0x1fffffffc;
                  } while (uVar30 != 0);
                }
              }
              if (uVar15 != uVar26) {
                lVar19 = 0;
                do {
                  fVar60 = pfVar12[uVar26 + lVar19];
                  fVar61 = (float)(int)*(short *)(lVar23 + uVar26 * 2 + lVar19 * 2) * 3.051851e-05;
                  pfVar8[uVar26 + lVar19] = fVar60 * param_2 + fVar61 * param_1;
                  fVar60 = fVar60 + fVar61 * param_3;
                  if (fVar60 <= 1.0) {
                    if (-1.0 <= fVar60) {
                      uVar16 = (undefined2)(int)(fVar60 * 32767.0);
                    }
                    else {
                      uVar16 = 0x8000;
                    }
                  }
                  else {
                    uVar16 = 0x7fff;
                  }
                  *(undefined2 *)(lVar18 + uVar26 * 2 + lVar19 * 2) = uVar16;
                  lVar19 = lVar19 + 1;
                } while (param_12._4_4_ - (int)uVar26 != (int)lVar19);
              }
            }
            lVar18 = lVar18 + uVar20;
            uVar31 = (uint)lVar32;
            lVar32 = lVar32 + 1;
            pfVar8 = (float *)((long)pfVar8 + uVar27);
            lVar23 = lVar23 + uVar20;
            pfVar12 = (float *)((long)pfVar12 + uVar27);
          } while (uVar31 != -iVar3 - 2U);
        }
        uVar31 = uVar6;
        if (uVar6 <= ~uVar1) {
          uVar31 = ~uVar1;
        }
        iVar3 = uVar35 + uVar31;
        uVar1 = uVar6;
        if (uVar6 <= ~uVar2) {
          uVar1 = ~uVar2;
        }
        iVar14 = param_8 + uVar1;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + uVar35) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar1 = ((param_11 - 1) + uVar35) - iVar14;
        do {
          param_7 = uVar1;
          iVar17 = iVar17 + param_11;
          uVar1 = param_7 + param_11;
        } while (iVar17 < 0);
        do {
          param_7 = param_7 - param_11;
        } while ((int)param_11 <= (int)param_7);
        uVar1 = uVar6;
        if (uVar6 <= ~((int)param_12 + uVar35)) {
          uVar1 = ~((int)param_12 + uVar35);
        }
        iVar3 = uVar35 + uVar1;
        uVar35 = uVar6;
        if (uVar6 <= ~((int)param_12 + param_8)) {
          uVar35 = ~((int)param_12 + param_8);
        }
        iVar14 = param_8 + uVar35;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + param_8) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar35 = ((param_11 - 1) + param_8) - iVar14;
        do {
          param_8 = uVar35;
          iVar17 = iVar17 + param_11;
          uVar35 = param_8 + param_11;
        } while (iVar17 < 0);
        do {
          param_8 = param_8 - param_11;
        } while ((int)param_11 <= (int)param_8);
        param_12._0_4_ = (int)param_12 - iVar4;
        param_4 = pfVar11;
        param_5 = pfVar7;
        uVar35 = param_7;
      } while ((int)param_12 != 0);
    }
    break;
  case 5:
    if ((int)param_12 != 0) {
      uVar6 = ~param_11;
      uVar35 = param_7;
      do {
        uVar1 = (int)param_12 + uVar35;
        uVar31 = uVar1;
        if (param_11 <= uVar1) {
          uVar31 = param_11;
        }
        uVar2 = (int)param_12 + param_8;
        uVar5 = uVar2;
        if (param_11 <= uVar2) {
          uVar5 = param_11;
        }
        iVar4 = uVar31 - uVar35;
        if ((int)(uVar5 - param_8) <= (int)(uVar31 - uVar35)) {
          iVar4 = uVar5 - param_8;
        }
        if (0 < iVar4) {
          uVar31 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar31 = ~uVar1;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar5 = ~uVar2;
          }
          iVar3 = uVar35 + uVar31;
          if ((int)(uVar35 + uVar31) <= (int)(param_8 + uVar5)) {
            iVar3 = param_8 + uVar5;
          }
          psVar24 = (short *)(param_6 + 8 + (ulong)(uVar35 * 6) * 2);
          puVar9 = (undefined2 *)(param_6 + 6 + (ulong)(param_8 * 6) * 2);
          uVar31 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar31 = ~uVar2;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar5 = ~uVar1;
          }
          uVar10 = param_8 + uVar31;
          if ((int)(param_8 + uVar31) <= (int)(uVar35 + uVar5)) {
            uVar10 = uVar35 + uVar5;
          }
          uVar10 = ~uVar10;
          pfVar7 = param_4;
          pfVar11 = param_5;
          do {
            fVar62 = pfVar11[1];
            fVar63 = pfVar11[2];
            fVar61 = pfVar11[3];
            fVar64 = pfVar11[4];
            fVar60 = pfVar11[5];
            sVar73 = *psVar24;
            uVar58 = *(undefined8 *)(psVar24 + -4);
            auVar59._0_4_ = (int)(short)uVar58;
            auVar59._4_4_ = (int)(short)((ulong)uVar58 >> 0x10);
            auVar59._8_4_ = (int)(short)((ulong)uVar58 >> 0x20);
            auVar59._12_4_ = (int)(short)((ulong)uVar58 >> 0x30);
            fVar70 = (float)CONCAT13(psVar24[1] >> 0xf,(int3)psVar24[1]) * 3.051851e-05;
            auVar48 = NEON_scvtf(auVar59,4);
            fVar71 = auVar48._0_4_ * 3.051851e-05;
            fVar72 = auVar48._4_4_ * 3.051851e-05;
            fVar36 = auVar48._8_4_ * 3.051851e-05;
            fVar39 = auVar48._12_4_ * 3.051851e-05;
            auVar57._0_8_ =
                 CONCAT44(param_2 * fVar62 + param_1 * fVar72,param_2 * *pfVar11 + param_1 * fVar71)
            ;
            auVar57._8_4_ = param_2 * fVar63 + param_1 * fVar36;
            auVar57._12_4_ = param_2 * fVar61 + param_1 * fVar39;
            fVar71 = *pfVar11 + param_3 * fVar71;
            *(undefined8 *)pfVar7 = auVar57._0_8_;
            auVar48 = NEON_ext(auVar57,auVar57,8,1);
            *(long *)(pfVar7 + 2) = auVar48._0_8_;
            pfVar7[4] = fVar64 * param_2 + (float)(int)sVar73 * 3.051851e-05 * param_1;
            pfVar7[5] = fVar60 * param_2 + fVar70 * param_1;
            fVar62 = fVar62 + param_3 * fVar72;
            if (fVar71 <= 1.0) {
              if (-1.0 <= fVar71) {
                uVar16 = (undefined2)(int)(fVar71 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar63 = fVar63 + param_3 * fVar36;
            puVar9[-3] = uVar16;
            if (fVar62 <= 1.0) {
              if (-1.0 <= fVar62) {
                uVar16 = (undefined2)(int)(fVar62 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar61 = fVar61 + param_3 * fVar39;
            puVar9[-2] = uVar16;
            if (fVar63 <= 1.0) {
              if (-1.0 <= fVar63) {
                uVar16 = (undefined2)(int)(fVar63 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar64 = fVar64 + (float)(int)sVar73 * 3.051851e-05 * param_3;
            puVar9[-1] = uVar16;
            if (fVar61 <= 1.0) {
              if (-1.0 <= fVar61) {
                uVar16 = (undefined2)(int)(fVar61 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar60 = fVar60 + fVar70 * param_3;
            *puVar9 = uVar16;
            if (fVar64 <= 1.0) {
              if (-1.0 <= fVar64) {
                uVar16 = (undefined2)(int)(fVar64 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            puVar9[1] = uVar16;
            if (fVar60 <= 1.0) {
              if (-1.0 <= fVar60) {
                uVar16 = (undefined2)(int)(fVar60 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            psVar24 = psVar24 + 6;
            puVar9[2] = uVar16;
            puVar9 = puVar9 + 6;
            uVar10 = uVar10 - 1;
            pfVar11 = pfVar11 + 6;
            pfVar7 = pfVar7 + 6;
          } while (uVar10 != 0);
          param_4 = param_4 + (ulong)(-iVar3 - 2) * 6 + 6;
          param_5 = param_5 + (ulong)(-iVar3 - 2) * 6 + 6;
        }
        uVar31 = uVar6;
        if (uVar6 <= ~uVar1) {
          uVar31 = ~uVar1;
        }
        iVar3 = uVar35 + uVar31;
        uVar1 = uVar6;
        if (uVar6 <= ~uVar2) {
          uVar1 = ~uVar2;
        }
        iVar14 = param_8 + uVar1;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + uVar35) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar1 = ((param_11 - 1) + uVar35) - iVar14;
        do {
          param_7 = uVar1;
          iVar17 = iVar17 + param_11;
          uVar1 = param_7 + param_11;
        } while (iVar17 < 0);
        do {
          param_7 = param_7 - param_11;
        } while ((int)param_11 <= (int)param_7);
        uVar1 = uVar6;
        if (uVar6 <= ~((int)param_12 + uVar35)) {
          uVar1 = ~((int)param_12 + uVar35);
        }
        iVar3 = uVar35 + uVar1;
        uVar35 = uVar6;
        if (uVar6 <= ~((int)param_12 + param_8)) {
          uVar35 = ~((int)param_12 + param_8);
        }
        iVar14 = param_8 + uVar35;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + param_8) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar35 = ((param_11 - 1) + param_8) - iVar14;
        do {
          param_8 = uVar35;
          iVar17 = iVar17 + param_11;
          uVar35 = param_8 + param_11;
        } while (iVar17 < 0);
        do {
          param_8 = param_8 - param_11;
        } while ((int)param_11 <= (int)param_8);
        param_12._0_4_ = (int)param_12 - iVar4;
        uVar35 = param_7;
      } while ((int)param_12 != 0);
    }
    break;
  case 7:
    if ((int)param_12 != 0) {
      uVar6 = ~param_11;
      uVar35 = param_7;
      do {
        uVar1 = (int)param_12 + uVar35;
        uVar31 = uVar1;
        if (param_11 <= uVar1) {
          uVar31 = param_11;
        }
        uVar2 = (int)param_12 + param_8;
        uVar5 = uVar2;
        if (param_11 <= uVar2) {
          uVar5 = param_11;
        }
        iVar4 = uVar31 - uVar35;
        if ((int)(uVar5 - param_8) <= (int)(uVar31 - uVar35)) {
          iVar4 = uVar5 - param_8;
        }
        if (0 < iVar4) {
          uVar31 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar31 = ~uVar1;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar5 = ~uVar2;
          }
          iVar3 = uVar35 + uVar31;
          if ((int)(uVar35 + uVar31) <= (int)(param_8 + uVar5)) {
            iVar3 = param_8 + uVar5;
          }
          puVar28 = (undefined8 *)(param_6 + 8 + (ulong)(uVar35 << 3) * 2);
          puVar9 = (undefined2 *)(param_6 + 8 + (ulong)(param_8 << 3) * 2);
          uVar31 = uVar6;
          if (uVar6 <= ~uVar2) {
            uVar31 = ~uVar2;
          }
          uVar5 = uVar6;
          if (uVar6 <= ~uVar1) {
            uVar5 = ~uVar1;
          }
          uVar10 = param_8 + uVar31;
          if ((int)(param_8 + uVar31) <= (int)(uVar35 + uVar5)) {
            uVar10 = uVar35 + uVar5;
          }
          uVar10 = ~uVar10;
          pfVar11 = param_5;
          pfVar7 = param_4;
          do {
            uVar37 = puVar28[-1];
            uVar58 = *puVar28;
            auVar38._0_4_ = (int)(short)uVar37;
            auVar38._4_4_ = (int)(short)((ulong)uVar37 >> 0x10);
            auVar38._8_4_ = (int)(short)((ulong)uVar37 >> 0x20);
            auVar38._12_4_ = (int)(short)((ulong)uVar37 >> 0x30);
            fVar50 = (float)*(undefined8 *)pfVar11;
            fVar47 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
            fVar42 = (float)*(undefined8 *)(pfVar11 + 2);
            fVar61 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
            fVar70 = (float)*(undefined8 *)(pfVar11 + 4);
            fVar62 = (float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20);
            fVar71 = (float)*(undefined8 *)(pfVar11 + 6);
            fVar72 = (float)((ulong)*(undefined8 *)(pfVar11 + 6) >> 0x20);
            auVar51 = NEON_scvtf(auVar38,4);
            auVar48._4_4_ = (int)(short)((ulong)uVar58 >> 0x10);
            auVar48._0_4_ = (int)(short)uVar58;
            auVar48._8_4_ = (int)(short)((ulong)uVar58 >> 0x20);
            auVar48._12_4_ = (int)(short)((ulong)uVar58 >> 0x30);
            auVar48 = NEON_scvtf(auVar48,4);
            fVar60 = auVar51._0_4_ * 3.051851e-05;
            fVar44 = auVar51._4_4_ * 3.051851e-05;
            fVar45 = auVar51._8_4_ * 3.051851e-05;
            fVar46 = auVar51._12_4_ * 3.051851e-05;
            fVar36 = auVar48._0_4_ * 3.051851e-05;
            fVar39 = auVar48._4_4_ * 3.051851e-05;
            fVar40 = auVar48._8_4_ * 3.051851e-05;
            fVar41 = auVar48._12_4_ * 3.051851e-05;
            auVar49._0_8_ =
                 CONCAT44(param_2 * fVar47 + param_1 * fVar44,param_2 * fVar50 + param_1 * fVar60);
            auVar49._8_4_ = param_2 * fVar42 + param_1 * fVar45;
            auVar49._12_4_ = param_2 * fVar61 + param_1 * fVar46;
            fVar63 = param_2 * fVar70 + param_1 * fVar36;
            fVar64 = param_2 * fVar62 + param_1 * fVar39;
            uVar52 = SUB41(fVar64,0);
            uVar53 = (undefined1)((uint)fVar64 >> 8);
            uVar54 = (undefined1)((uint)fVar64 >> 0x10);
            uVar55 = (undefined1)((uint)fVar64 >> 0x18);
            fVar64 = param_2 * fVar71 + param_1 * fVar40;
            fVar56 = param_2 * fVar72 + param_1 * fVar41;
            fVar50 = fVar50 + param_3 * fVar60;
            *(undefined8 *)pfVar7 = auVar49._0_8_;
            auVar48 = NEON_ext(auVar49,auVar49,8,1);
            *(long *)(pfVar7 + 2) = auVar48._0_8_;
            *(ulong *)(pfVar7 + 4) =
                 CONCAT17(uVar55,CONCAT16(uVar54,CONCAT15(uVar53,CONCAT14(uVar52,fVar63))));
            auVar51[4] = uVar52;
            auVar51._0_4_ = fVar63;
            auVar51[5] = uVar53;
            auVar51[6] = uVar54;
            auVar51[7] = uVar55;
            auVar51._8_4_ = fVar64;
            auVar51._12_4_ = fVar56;
            auVar69[4] = uVar52;
            auVar69._0_4_ = fVar63;
            auVar69[5] = uVar53;
            auVar69[6] = uVar54;
            auVar69[7] = uVar55;
            auVar69._8_4_ = fVar64;
            auVar69._12_4_ = fVar56;
            auVar48 = NEON_ext(auVar51,auVar69,8,1);
            *(long *)(pfVar7 + 6) = auVar48._0_8_;
            fVar47 = fVar47 + param_3 * fVar44;
            if (fVar50 <= 1.0) {
              if (-1.0 <= fVar50) {
                uVar16 = (undefined2)(int)(fVar50 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar42 = fVar42 + param_3 * fVar45;
            puVar9[-4] = uVar16;
            if (fVar47 <= 1.0) {
              if (-1.0 <= fVar47) {
                uVar16 = (undefined2)(int)(fVar47 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar61 = fVar61 + param_3 * fVar46;
            puVar9[-3] = uVar16;
            if (fVar42 <= 1.0) {
              if (-1.0 <= fVar42) {
                uVar16 = (undefined2)(int)(fVar42 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar70 = fVar70 + param_3 * fVar36;
            puVar9[-2] = uVar16;
            if (fVar61 <= 1.0) {
              if (-1.0 <= fVar61) {
                uVar16 = (undefined2)(int)(fVar61 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar62 = fVar62 + param_3 * fVar39;
            puVar9[-1] = uVar16;
            if (fVar70 <= 1.0) {
              if (-1.0 <= fVar70) {
                uVar16 = (undefined2)(int)(fVar70 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar71 = fVar71 + param_3 * fVar40;
            *puVar9 = uVar16;
            if (fVar62 <= 1.0) {
              if (-1.0 <= fVar62) {
                uVar16 = (undefined2)(int)(fVar62 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            fVar72 = fVar72 + param_3 * fVar41;
            puVar9[1] = uVar16;
            if (fVar71 <= 1.0) {
              if (-1.0 <= fVar71) {
                uVar16 = (undefined2)(int)(fVar71 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            puVar9[2] = uVar16;
            if (fVar72 <= 1.0) {
              if (-1.0 <= fVar72) {
                uVar16 = (undefined2)(int)(fVar72 * 32767.0);
              }
              else {
                uVar16 = 0x8000;
              }
            }
            else {
              uVar16 = 0x7fff;
            }
            puVar28 = puVar28 + 2;
            puVar9[3] = uVar16;
            puVar9 = puVar9 + 8;
            uVar10 = uVar10 - 1;
            pfVar11 = pfVar11 + 8;
            pfVar7 = pfVar7 + 8;
          } while (uVar10 != 0);
          param_4 = param_4 + (ulong)(-iVar3 - 2) * 8 + 8;
          param_5 = param_5 + (ulong)(-iVar3 - 2) * 8 + 8;
        }
        uVar31 = uVar6;
        if (uVar6 <= ~uVar1) {
          uVar31 = ~uVar1;
        }
        iVar3 = uVar35 + uVar31;
        uVar1 = uVar6;
        if (uVar6 <= ~uVar2) {
          uVar1 = ~uVar2;
        }
        iVar14 = param_8 + uVar1;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + uVar35) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar1 = ((param_11 - 1) + uVar35) - iVar14;
        do {
          param_7 = uVar1;
          iVar17 = iVar17 + param_11;
          uVar1 = param_7 + param_11;
        } while (iVar17 < 0);
        do {
          param_7 = param_7 - param_11;
        } while ((int)param_11 <= (int)param_7);
        uVar1 = uVar6;
        if (uVar6 <= ~((int)param_12 + uVar35)) {
          uVar1 = ~((int)param_12 + uVar35);
        }
        iVar3 = uVar35 + uVar1;
        uVar35 = uVar6;
        if (uVar6 <= ~((int)param_12 + param_8)) {
          uVar35 = ~((int)param_12 + param_8);
        }
        iVar14 = param_8 + uVar35;
        iVar17 = iVar3;
        if (iVar3 <= iVar14) {
          iVar17 = iVar14;
        }
        iVar17 = (uVar6 + param_8) - iVar17;
        if (iVar14 <= iVar3) {
          iVar14 = iVar3;
        }
        uVar35 = ((param_11 - 1) + param_8) - iVar14;
        do {
          param_8 = uVar35;
          iVar17 = iVar17 + param_11;
          uVar35 = param_8 + param_11;
        } while (iVar17 < 0);
        do {
          param_8 = param_8 - param_11;
        } while ((int)param_11 <= (int)param_8);
        param_12._0_4_ = (int)param_12 - iVar4;
        uVar35 = param_7;
      } while ((int)param_12 != 0);
    }
  }
  *param_9 = param_7;
  *param_10 = param_8;
  return;
}




void FUN_100561e04(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  short sVar9;
  short sVar10;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar2 = (int)param_2 >> 2;
  if (iVar2 != 0) {
    uVar1 = iVar2 - 1;
    uVar5 = (ulong)*(uint *)((long)param_4 + 4);
    uVar4 = *param_4;
    pfVar3 = param_1;
    do {
      uVar4 = uVar4 + *param_5;
      sVar6 = *(short *)(param_3 + uVar5 * 2);
      *param_4 = uVar4;
      uVar5 = *param_5 + uVar4;
      sVar9 = *(short *)(param_3 + (uVar4 >> 0x1f & 0x1fffffffe));
      *param_4 = uVar5;
      uVar4 = *param_5 + uVar5;
      sVar10 = *(short *)(param_3 + (uVar5 >> 0x1f & 0x1fffffffe));
      *param_4 = uVar4;
      auVar7._0_4_ = (int)sVar6;
      auVar7._4_4_ = (int)sVar9;
      auVar7._8_4_ = (int)sVar10;
      auVar7._12_4_ = (int)*(short *)(param_3 + (uVar4 >> 0x1f & 0x1fffffffe));
      auVar7 = NEON_scvtf(auVar7,4);
      auVar8._0_8_ = CONCAT44(auVar7._4_4_ * 3.0517578e-05,auVar7._0_4_ * 3.0517578e-05);
      auVar8._8_4_ = auVar7._8_4_ * 3.0517578e-05;
      auVar8._12_4_ = auVar7._12_4_ * 3.0517578e-05;
      uVar4 = *param_5 + uVar4;
      *param_4 = uVar4;
      *(undefined8 *)pfVar3 = auVar8._0_8_;
      auVar7 = NEON_ext(auVar8,auVar8,8,1);
      *(long *)(pfVar3 + 2) = auVar7._0_8_;
      iVar2 = iVar2 + -1;
      pfVar3 = pfVar3 + 4;
      uVar5 = uVar4 >> 0x20;
    } while (iVar2 != 0);
    param_1 = param_1 + (ulong)uVar1 * 4 + 4;
  }
  if ((param_2 & 3) != 0) {
    uVar5 = (ulong)*(uint *)((long)param_4 + 4);
    uVar4 = *param_4;
    iVar2 = -(param_2 & 3);
    do {
      *param_1 = (float)(int)*(short *)(param_3 + uVar5 * 2) * 3.0517578e-05;
      uVar4 = uVar4 + *param_5;
      *param_4 = uVar4;
      uVar5 = uVar4 >> 0x20;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 != 0);
  }
  return;
}




void FUN_100561f08(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  short sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar3 = (int)param_2 >> 2;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
    uVar6 = (ulong)*(uint *)((long)param_4 + 4);
    uVar5 = *param_4;
    pfVar4 = param_1;
    do {
      sVar1 = *(short *)(param_3 + (ulong)((int)uVar6 << 1 | 1) * 2);
      uVar5 = uVar5 + *param_5;
      sVar7 = *(short *)(param_3 + (ulong)(uint)((int)uVar6 << 1) * 2);
      *param_4 = uVar5;
      uVar6 = uVar5 >> 0x1f & 0xfffffffe;
      auVar8._0_4_ = (int)sVar7;
      auVar8._4_4_ = (int)sVar1;
      auVar8._8_4_ = (int)*(short *)(param_3 + uVar6 * 2);
      auVar8._12_4_ = (int)*(short *)(param_3 + (uVar6 | 1) * 2);
      auVar8 = NEON_scvtf(auVar8,4);
      uVar5 = *param_5 + uVar5;
      *param_4 = uVar5;
      uVar6 = uVar5 >> 0x1f & 0xfffffffe;
      sVar1 = *(short *)(param_3 + (uVar6 | 1) * 2);
      uVar5 = *param_5 + uVar5;
      sVar7 = *(short *)(param_3 + uVar6 * 2);
      *param_4 = uVar5;
      uVar6 = uVar5 >> 0x1f & 0xfffffffe;
      auVar9._0_8_ = CONCAT44(auVar8._4_4_ * 3.0517578e-05,auVar8._0_4_ * 3.0517578e-05);
      auVar9._8_4_ = auVar8._8_4_ * 3.0517578e-05;
      auVar9._12_4_ = auVar8._12_4_ * 3.0517578e-05;
      auVar10._0_4_ = (int)sVar7;
      auVar10._4_4_ = (int)sVar1;
      auVar10._8_4_ = (int)*(short *)(param_3 + uVar6 * 2);
      auVar10._12_4_ = (int)*(short *)(param_3 + (uVar6 | 1) * 2);
      auVar8 = NEON_scvtf(auVar10,4);
      auVar11._0_8_ = CONCAT44(auVar8._4_4_ * 3.0517578e-05,auVar8._0_4_ * 3.0517578e-05);
      auVar11._8_4_ = auVar8._8_4_ * 3.0517578e-05;
      auVar11._12_4_ = auVar8._12_4_ * 3.0517578e-05;
      uVar5 = *param_5 + uVar5;
      *param_4 = uVar5;
      *(undefined8 *)pfVar4 = auVar9._0_8_;
      auVar8 = NEON_ext(auVar9,auVar9,8,1);
      *(long *)(pfVar4 + 2) = auVar8._0_8_;
      *(undefined8 *)(pfVar4 + 4) = auVar11._0_8_;
      auVar8 = NEON_ext(auVar11,auVar11,8,1);
      *(long *)(pfVar4 + 6) = auVar8._0_8_;
      iVar3 = iVar3 + -1;
      uVar6 = uVar5 >> 0x20;
      pfVar4 = pfVar4 + 8;
    } while (iVar3 != 0);
    param_1 = param_1 + (ulong)uVar2 * 8 + 8;
  }
  if ((param_2 & 3) != 0) {
    uVar6 = (ulong)*(uint *)((long)param_4 + 4);
    uVar5 = *param_4;
    iVar3 = -(param_2 & 3);
    do {
      *param_1 = (float)(int)*(short *)(param_3 + (ulong)(uint)((int)uVar6 << 1) * 2) *
                 3.0517578e-05;
      param_1[1] = (float)(int)*(short *)(param_3 + (ulong)((int)uVar6 << 1 | 1) * 2) *
                   3.0517578e-05;
      uVar5 = uVar5 + *param_5;
      *param_4 = uVar5;
      uVar6 = uVar5 >> 0x20;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 2;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_100562080(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7,float *param_8,float *param_9,int param_10,
                  float *param_11,float *param_12)

{
  float fVar1;
  float fVar2;
  
  if (0 < param_10) {
    do {
      fVar1 = *param_9 * *param_9;
      fVar2 = param_3;
      if (fVar1 <= *param_12) {
        fVar2 = param_4;
      }
      fVar1 = *param_11 + (fVar1 - *param_11) * fVar2;
      *param_11 = fVar1;
      fVar1 = *param_12 + fVar2 * (fVar1 - *param_12);
      *param_12 = fVar1;
      fVar2 = param_2;
      if (param_5 < fVar1) {
        fVar2 = (float)_powf(fVar1 * param_6,param_1);
        fVar2 = fVar2 * param_2;
      }
      *param_8 = fVar2 * *param_7;
      param_9 = param_9 + 1;
      param_10 = param_10 + -1;
      param_8 = param_8 + 1;
      param_7 = param_7 + 1;
    } while (param_10 != 0);
  }
  return;
}




void FUN_100562168(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7,float *param_8,undefined8 *param_9,int param_10,
                  float *param_11,float *param_12)

{
  float fVar1;
  float fVar2;
  
  if (0 < param_10) {
    do {
      fVar2 = (float)*param_9;
      fVar1 = (float)((ulong)*param_9 >> 0x20);
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      fVar2 = param_3;
      if (fVar1 <= *param_12) {
        fVar2 = param_4;
      }
      fVar1 = *param_11 + (fVar1 - *param_11) * fVar2;
      *param_11 = fVar1;
      fVar1 = *param_12 + fVar2 * (fVar1 - *param_12);
      *param_12 = fVar1;
      fVar2 = param_2;
      if (param_5 < fVar1) {
        fVar2 = (float)_powf(fVar1 * param_6,param_1);
        fVar2 = fVar2 * param_2;
      }
      *param_8 = fVar2 * *param_7;
      param_8[1] = fVar2 * param_7[1];
      param_9 = param_9 + 1;
      param_10 = param_10 + -1;
      param_7 = param_7 + 2;
      param_8 = param_8 + 2;
    } while (param_10 != 0);
  }
  return;
}




void FUN_100562268(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7,float *param_8,float *param_9,int param_10,
                  float *param_11,float *param_12)

{
  float fVar1;
  float fVar2;
  
  if (0 < param_10) {
    do {
      fVar1 = *param_9 * *param_9 + param_9[1] * param_9[1] + param_9[2] * param_9[2] +
              param_9[3] * param_9[3] + param_9[4] * param_9[4] + param_9[5] * param_9[5];
      fVar2 = param_3;
      if (fVar1 <= *param_12) {
        fVar2 = param_4;
      }
      fVar1 = *param_11 + (fVar1 - *param_11) * fVar2;
      *param_11 = fVar1;
      fVar1 = *param_12 + fVar2 * (fVar1 - *param_12);
      *param_12 = fVar1;
      fVar2 = param_2;
      if (param_5 < fVar1) {
        fVar2 = (float)_powf(fVar1 * param_6,param_1);
        fVar2 = fVar2 * param_2;
      }
      *param_8 = fVar2 * *param_7;
      param_8[1] = fVar2 * param_7[1];
      param_8[2] = fVar2 * param_7[2];
      param_8[3] = fVar2 * param_7[3];
      param_8[4] = fVar2 * param_7[4];
      param_8[5] = fVar2 * param_7[5];
      param_10 = param_10 + -1;
      param_9 = param_9 + 6;
      param_7 = param_7 + 6;
      param_8 = param_8 + 6;
    } while (param_10 != 0);
  }
  return;
}




void FUN_1005623c4(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7,float *param_8,float *param_9,int param_10,
                  float *param_11,float *param_12)

{
  float fVar1;
  float fVar2;
  
  if (0 < param_10) {
    do {
      fVar1 = *param_9 * *param_9 + param_9[1] * param_9[1] + param_9[2] * param_9[2] +
              param_9[3] * param_9[3] + param_9[4] * param_9[4] + param_9[5] * param_9[5] +
              param_9[6] * param_9[6] + param_9[7] * param_9[7];
      fVar2 = param_3;
      if (fVar1 <= *param_12) {
        fVar2 = param_4;
      }
      fVar1 = *param_11 + (fVar1 - *param_11) * fVar2;
      *param_11 = fVar1;
      fVar1 = *param_12 + fVar2 * (fVar1 - *param_12);
      *param_12 = fVar1;
      fVar2 = param_2;
      if (param_5 < fVar1) {
        fVar2 = (float)_powf(fVar1 * param_6,param_1);
        fVar2 = fVar2 * param_2;
      }
      *param_8 = fVar2 * *param_7;
      param_8[1] = fVar2 * param_7[1];
      param_8[2] = fVar2 * param_7[2];
      param_8[3] = fVar2 * param_7[3];
      param_8[4] = fVar2 * param_7[4];
      param_8[5] = fVar2 * param_7[5];
      param_8[6] = fVar2 * param_7[6];
      param_8[7] = fVar2 * param_7[7];
      param_10 = param_10 + -1;
      param_9 = param_9 + 8;
      param_7 = param_7 + 8;
      param_8 = param_8 + 8;
    } while (param_10 != 0);
  }
  return;
}




void FUN_10056254c(void)

{
  _memset(&DAT_101e94a88,0,0x60);
  FUN_1005ecc98(&DAT_101e94a8c,"Attack",0x10);
  FUN_1005ecc98(&DAT_101e94a9c,"ms",0x10);
  DAT_101e94ab8 = 0x3dcccccd;
  DAT_101e94ab0 = "EnvelopeFollower attack time. [0.1ms,500ms]  Default = 20ms.";
  DAT_101e94abc = 0x43fa0000;
  DAT_101e94ac0 = 0x41a00000;
  DAT_101e94ac8 = 1;
  _memset(&DAT_101e94ae8,0,0x60);
  FUN_1005ecc98(&DAT_101e94aec,"Release",0x10);
  FUN_1005ecc98(&DAT_101e94afc,"ms",0x10);
  DAT_101e94b10 = "EnvelopeFollower release time. [10ms,5000ms]  Default = 200ms.";
  DAT_101e94b18 = 0x41200000;
  DAT_101e94b1c = 0x459c4000;
  DAT_101e94b20 = 0x43480000;
  DAT_101e94b28 = 1;
  _memset(&DAT_101e94b48,0,0x60);
  FUN_1005ecc98(&DAT_101e94b4c,"Envelope",0x10);
  FUN_1005ecc98(&DAT_101e94b5c,"",0x10);
  DAT_101e94b70 = "Envelope level (read-only)";
  DAT_101e94b78 = 0;
  DAT_101e94b7c = 0x3f800000;
  DAT_101e94b80 = 0;
  DAT_101e94b88 = 1;
  _memset(&DAT_101e94ba8,0,0x60);
  DAT_101e94ba8 = 3;
  FUN_1005ecc98(&DAT_101e94bac,"Use sidechain",0x10);
  FUN_1005ecc98(&DAT_101e94bbc,"",0x10);
  DAT_101e94bd8 = 0xfffffffd;
  DAT_101e94bd0 = "Analyse the sidechain signal instead of the input signal.";
  DAT_101e94c08 = &DAT_101867e28;
  DAT_101e94c20 = 0x1f;
  DAT_101e94c18 = 0x1f0;
  return;
}




undefined8 FUN_100562720(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x1e8) = 0;
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
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  return 0;
}




undefined8 FUN_1005627bc(long param_1)

{
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  return 0;
}




undefined8 FUN_1005627c8(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 != 0) {
    lVar9 = param_2;
    if (*(int *)(param_1 + 0x1e8) != 0) {
      lVar9 = *(long *)(param_1 + 0xb0);
    }
    fVar10 = *(float *)(param_1 + 0x1e0);
    if ((*(float *)(param_1 + 0x1c8) != fVar10) || (*(char *)(param_1 + 0x1dc) != '\0')) {
      *(float *)(param_1 + 0x1c8) = fVar10;
      fVar10 = (float)_expf(-2.2 / ((fVar10 / 1000.0) *
                                   (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708)));
      *(float *)(param_1 + 0x1cc) = 1.0 - fVar10;
    }
    fVar10 = *(float *)(param_1 + 0x1e4);
    if ((*(float *)(param_1 + 0x1d0) != fVar10) || (*(char *)(param_1 + 0x1dc) != '\0')) {
      *(float *)(param_1 + 0x1d0) = fVar10;
      fVar10 = (float)_expf(-2.2 / ((fVar10 / 1000.0) *
                                   (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708)));
      *(float *)(param_1 + 0x1d4) = 1.0 - fVar10;
    }
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    if (param_4 != 0) {
      uVar2 = 0;
      iVar3 = 0;
      do {
        if (param_5 < 1) {
          fVar10 = *(float *)(param_1 + 0x1d8);
          pfVar7 = (float *)(param_1 + 0x1cc);
          if (0.0 <= fVar10) {
            pfVar7 = (float *)(param_1 + 0x1d4);
          }
          *(float *)(param_1 + 0x1d8) = fVar10 + (0.0 - fVar10) * *pfVar7;
        }
        else {
          lVar6 = uVar2 * 4;
          fVar10 = 0.0;
          pfVar7 = (float *)(lVar9 + lVar6);
          iVar8 = param_5;
          do {
            fVar10 = fVar10 + (*pfVar7 / (float)param_5) * (*pfVar7 / (float)param_5);
            iVar8 = iVar8 + -1;
            pfVar7 = pfVar7 + 1;
          } while (iVar8 != 0);
          fVar11 = *(float *)(param_1 + 0x1d8);
          pfVar7 = (float *)(param_1 + 0x1cc);
          if (fVar10 <= fVar11) {
            pfVar7 = (float *)(param_1 + 0x1d4);
          }
          *(float *)(param_1 + 0x1d8) = fVar11 + (fVar10 - fVar11) * *pfVar7;
          puVar4 = (undefined4 *)(param_3 + lVar6);
          puVar5 = (undefined4 *)(param_2 + lVar6);
          iVar8 = param_5;
          if (0 < param_5) {
            do {
              *puVar4 = *puVar5;
              iVar8 = iVar8 + -1;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            } while (iVar8 != 0);
          }
        }
        uVar2 = (ulong)(uint)((int)uVar2 + param_5);
        bVar1 = iVar3 != param_4 + -1;
        iVar3 = iVar3 + 1;
      } while (bVar1);
    }
  }
  return 0;
}




undefined8 FUN_100562998(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 2) {
    return 0x44;
  }
  if (param_3 == 1) {
    *(undefined4 *)(param_2 + 0x1e4) = param_1;
    return 0;
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x1e0) = param_1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005629e4(long param_1,int param_2,float *param_3,char *param_4)

{
  if (param_2 == 2) {
    *param_3 = SQRT(*(float *)(param_1 + 0x1d8));
  }
  else if (param_2 == 1) {
    *param_3 = *(float *)(param_1 + 0x1e4);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(float *)(param_1 + 0x1e0);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




undefined8 FUN_100562a68(long param_1,int param_2,int *param_3)

{
  if (param_2 == 3) {
    *(uint *)(param_1 + 0x1e8) = (uint)(*param_3 == 1);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100562a98(long param_1,int param_2,long *param_3,undefined4 *param_4,void *param_5)

{
  size_t sVar1;
  char *pcVar2;
  bool bVar3;
  
  if (param_2 == 3) {
    *param_3 = param_1 + 0x1e8;
    *param_4 = 4;
    if (param_5 != (void *)0x0) {
      bVar3 = *(int *)(param_1 + 0x1e8) == 0;
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




undefined8 FUN_100562af4(long *param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x1e8) = 0;
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
  *(undefined4 *)(lVar3 + 0x1d8) = 0;
  *(undefined1 *)(lVar3 + 0x1dc) = 1;
  return 0;
}




undefined8 FUN_100562b90(long *param_1)

{
  *(undefined4 *)(*param_1 + 0x1d8) = 0;
  return 0;
}




undefined8 FUN_100562ba0(long *param_1,int param_2)

{
  float fVar1;
  
  if ((param_2 != 0) && (*(int *)(*param_1 + 0x1e8) == 0)) {
    fVar1 = *(float *)(*param_1 + 0x1d8);
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.0001) {
      return 6;
    }
  }
  return 0;
}




undefined8 FUN_100562be0(undefined8 *param_1)

{
  FUN_1005627c8(*param_1);
  return 0;
}




undefined8 FUN_100562bfc(undefined4 param_1,long *param_2,int param_3)

{
  if (param_3 == 2) {
    return 0x44;
  }
  if (param_3 == 1) {
    *(undefined4 *)(*param_2 + 0x1e4) = param_1;
    return 0;
  }
  if (param_3 == 0) {
    *(undefined4 *)(*param_2 + 0x1e0) = param_1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100562c3c(undefined8 *param_1)

{
  FUN_1005629e4(*param_1);
  return 0;
}




undefined8 FUN_100562c58(long *param_1,int param_2,int *param_3)

{
  if (param_2 == 3) {
    *(uint *)(*param_1 + 0x1e8) = (uint)(*param_3 == 1);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100562c88(long *param_1,int param_2,long *param_3,undefined4 *param_4,void *param_5)

{
  size_t sVar1;
  char *pcVar2;
  bool bVar3;
  long lVar4;
  
  if (param_2 == 3) {
    lVar4 = *param_1;
    *param_3 = lVar4 + 0x1e8;
    *param_4 = 4;
    if (param_5 != (void *)0x0) {
      bVar3 = *(int *)(lVar4 + 0x1e8) == 0;
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




undefined8 FUN_100562ce8(undefined1 *param_1,undefined8 param_2,undefined1 param_3)

{
  if ((int)param_2 < 2) {
    if ((int)param_2 != 1) {
      return param_2;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = param_3;
    param_1[1] = 0;
  }
  return 1;
}




undefined8 FUN_100562d14(char *param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((param_2 < 2) || (9 < param_3)) {
    uVar1 = FUN_1005ed550(param_1,param_2,"%d");
  }
  else {
    *param_1 = (char)param_3 + '0';
    param_1[1] = '\0';
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_100562d60(char *param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((param_2 < 2) || (9 < param_3)) {
    uVar1 = FUN_1005ed550(param_1,param_2,"%u");
  }
  else {
    *param_1 = (char)param_3 + '0';
    param_1[1] = '\0';
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_100562dac(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ed550(param_1,param_2,"%lld");
  return;
}




void FUN_100562dd4(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ed550(param_1,param_2,"%llu");
  return;
}




undefined8 FUN_100562dfc(int param_1,undefined2 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  
  if (param_3 < 2) {
LAB_100562e3c:
    uVar1 = FUN_1005ed550(param_2,param_3,"%g");
  }
  else {
    if (param_1 == 0x3f800000) {
      uVar2 = 0x31;
    }
    else {
      if (param_1 != 0) goto LAB_100562e3c;
      uVar2 = 0x30;
    }
    *param_2 = uVar2;
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_100562e5c(void *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = "true";
  if (param_3 == 0) {
    pcVar1 = "false";
  }
  uVar2 = FUN_1005ecb6c(pcVar1);
  if ((int)uVar2 < (int)param_2) {
    _memcpy(param_1,pcVar1,(long)((int)uVar2 + 1));
  }
  else {
    uVar2 = FUN_1005ed550(param_1,param_2,"%s");
  }
  return uVar2;
}




undefined8 FUN_100562eec(undefined2 *param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_3 == (void *)0x0) {
    if (1 < (int)param_2) {
      *param_1 = 0x30;
      return 1;
    }
    pcVar2 = "%d";
  }
  else {
    uVar1 = FUN_1005ecb6c(param_3);
    if ((int)uVar1 < (int)param_2) {
      _memcpy(param_1,param_3,(long)((int)uVar1 + 1));
      return uVar1;
    }
    pcVar2 = "%s";
  }
  uVar1 = FUN_1005ed550(param_1,param_2,pcVar2);
  return uVar1;
}




undefined8 FUN_100562f94(undefined1 *param_1,int param_2,float *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_3;
  fVar6 = param_3[1];
  bVar2 = true;
  if ((fVar5 != 0.0) && (bVar2 = false, !NAN(fVar5))) {
    bVar2 = fVar5 == 1.0;
  }
  if (bVar2) {
    bVar2 = true;
    if ((fVar6 != 0.0) && (bVar2 = false, !NAN(fVar6))) {
      bVar2 = fVar6 == 1.0;
    }
    if (bVar2) {
      if (param_3[2] == 0.0) {
        if (7 < param_2) {
LAB_100562fe8:
          *param_1 = 0x7b;
          uVar4 = 0x30;
          uVar1 = uVar4;
          if (*param_3 != 0.0) {
            uVar1 = 0x31;
          }
          param_1[1] = uVar1;
          param_1[2] = 0x2c;
          uVar1 = uVar4;
          if (param_3[1] != 0.0) {
            uVar1 = 0x31;
          }
          param_1[3] = uVar1;
          param_1[4] = 0x2c;
          if (param_3[2] != 0.0) {
            uVar4 = 0x31;
          }
          param_1[5] = uVar4;
          param_1[6] = 0x7d;
          param_1[7] = 0;
          return 7;
        }
      }
      else if ((7 < param_2) && (param_3[2] == 1.0)) goto LAB_100562fe8;
    }
  }
  uVar3 = FUN_1005ed550(param_1,param_2,"{%g,%g,%g}");
  return uVar3;
}




void FUN_10056307c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ed550(param_1,param_2,"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}");
  return;
}




void FUN_1005630e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:%d";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_100563124(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:%u";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_100563164(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:%lld";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_1005631a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:%llu";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_1005631e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:%g";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_10056322c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:%s";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_100563284(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:{%g,%g,%g}";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_1005632dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  
  if (param_3 == 0) {
    pcVar1 = "%p";
  }
  else {
    pcVar1 = "%p:{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}";
  }
  FUN_1005ed550(param_1,param_2,pcVar1);
  return;
}




void FUN_10056335c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ed550(param_1,param_2,"%p");
  return;
}




void FUN_100563384(uint *param_1,ulong param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  while( true ) {
    uVar5 = (uint)param_2;
    uVar4 = (uint)param_5;
    if (param_4 == 2) {
      *param_1 = uVar5 & uVar4;
      param_1[1] = param_3 + uVar5 & uVar4;
      return;
    }
    iVar3 = param_4 + -1;
    if (iVar3 == 0) break;
    iVar1 = param_4;
    if (param_4 < 0) {
      iVar1 = param_4 + 1;
    }
    iVar2 = param_4 + 3;
    if (param_4 >= 0) {
      iVar2 = param_4;
    }
    param_4 = iVar2 >> 2;
    FUN_100563384(param_1,param_2,param_3 << 1,iVar1 >> 1,param_5);
    FUN_100563384(param_1 + (iVar1 >> 1),param_3 + uVar5,param_3 << 2,param_4,param_5);
    param_1 = param_1 + param_4 * 3;
    param_2 = (ulong)(uVar5 + iVar3 * param_3);
    param_3 = param_3 << 2;
  }
  *param_1 = uVar5 & uVar4;
  return;
}




undefined8 FUN_100563458(undefined1 param_1 [16],undefined4 param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  
  *(long *)param_3 = param_3;
  *(long *)(param_3 + 8) = param_3;
  *(undefined8 *)(param_3 + 0x10) = 0;
  if (param_4 - 0x10 < 0xfff1 && *(int *)(param_3 + 0x18) == 0) {
    if ((param_4 - 1 & param_4) == 0) {
      uVar4 = FUN_1005dbd48(param_3 + 0x50,0);
      if ((int)uVar4 == 0) {
        lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_4 * 8 + 0x10,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_fft.cpp"
                              ,0x36,0,0);
        *(long *)(param_3 + 0x38) = lVar5;
        if (lVar5 == 0) {
          uVar4 = 0x26;
        }
        else {
          *(ulong *)(param_3 + 0x20) = lVar5 + 0xfU & 0xfffffffffffffff0;
          uVar2 = param_4 >> 1;
          lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                (uVar2 + (param_4 >> 2)) * 8 + 0x10,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_fft.cpp"
                                ,0x3f,0,0);
          *(long *)(param_3 + 0x40) = lVar5;
          if (lVar5 == 0) {
            uVar4 = 0x26;
          }
          else {
            puVar6 = (undefined4 *)(lVar5 + 0xfU & 0xfffffffffffffff0);
            *(undefined4 **)(param_3 + 0x28) = puVar6;
            uVar1 = param_4;
            if ((int)param_4 < 0) {
              uVar1 = param_4 + 1;
            }
            uVar3 = uVar2;
            if (1 < (int)param_4) {
              iVar8 = 0;
              lVar5 = (ulong)(((int)uVar1 >> 1) - 1) * 2 + 2;
              puVar7 = puVar6;
              if ((int)param_4 < 4) {
                lVar5 = 2;
              }
              do {
                uVar9 = ___sincosf_stret(((float)iVar8 * -6.2831855) / (float)param_4);
                *puVar7 = uVar9;
                puVar7[1] = param_2;
                iVar8 = iVar8 + 1;
                puVar7 = puVar7 + 2;
              } while (iVar8 < (int)uVar1 >> 1);
              puVar6 = puVar6 + lVar5;
            }
            for (; uVar3 != 0; uVar3 = (int)uVar3 >> 1) {
              if (3 < uVar3) {
                iVar8 = 0;
                puVar7 = puVar6;
                do {
                  uVar9 = ___sincosf_stret(((float)iVar8 * 6.2831855) / (float)uVar3);
                  *puVar7 = param_2;
                  puVar7[1] = uVar9;
                  iVar8 = iVar8 + 1;
                  puVar7 = puVar7 + 2;
                } while (iVar8 < (int)uVar3 >> 2);
                lVar5 = (ulong)(((int)uVar3 >> 2) - 1) * 2 + 2;
                if (uVar3 < 8) {
                  lVar5 = 2;
                }
                puVar6 = puVar6 + lVar5;
              }
            }
            uVar4 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar2 << 2,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_fft.cpp"
                                  ,0x5e,0,0);
            *(undefined8 *)(param_3 + 0x48) = uVar4;
            *(undefined8 *)(param_3 + 0x30) = uVar4;
            FUN_100563384(uVar4,0,1,uVar2,uVar2 - 1);
            uVar4 = 0;
            *(uint *)(param_3 + 0x18) = param_4;
          }
        }
      }
    }
    else {
      uVar4 = 0x1f;
    }
  }
  else {
    uVar4 = 0x1f;
  }
  return uVar4;
}




undefined8 FUN_1005636b8(long *param_1)

{
  long *plVar1;
  
  if (param_1[7] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[7],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_fft.cpp",
                  0x68);
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[8],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_fft.cpp",
                  0x69);
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[9],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_fft.cpp",
                  0x6a);
    param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  plVar1 = (long *)param_1[1];
  *plVar1 = *param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  if (param_1[10] != 0) {
    FUN_1005dbe84(param_1[10],0);
    param_1[10] = 0;
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_fft.cpp",
                0x73);
  return 0;
}




undefined8 FUN_1005637ac(long param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar11 = 0x43;
  }
  else if (param_5 == 0) {
    uVar11 = 0x1f;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    FUN_1005dbee4(uVar11);
    lVar12 = *(long *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x18);
    lVar4 = (long)iVar3;
    if ((param_4 == 0) && (param_5 == 1)) {
      if (1 < iVar3) {
        lVar5 = 0;
        lVar6 = *(long *)(param_1 + 0x30);
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 1;
        }
        puVar7 = (undefined4 *)(lVar12 + 4);
        do {
          lVar9 = (long)*(int *)(lVar6 + lVar5 * 4);
          puVar7[-1] = *(undefined4 *)(param_2 + lVar9 * 8);
          *puVar7 = *(undefined4 *)(param_2 + (long)(int)((uint)(lVar9 << 1) | 1) * 4);
          lVar5 = lVar5 + 1;
          puVar7 = puVar7 + 2;
        } while (lVar5 < iVar1 >> 1);
      }
    }
    else if (param_4 == 0) {
      if (1 < iVar3) {
        lVar5 = 0;
        lVar6 = *(long *)(param_1 + 0x30);
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 1;
        }
        puVar7 = (undefined4 *)(lVar12 + 4);
        do {
          iVar2 = *(int *)(lVar6 + lVar5 * 4);
          puVar7[-1] = *(undefined4 *)(param_2 + (long)(param_5 * 2 * iVar2) * 4);
          *puVar7 = *(undefined4 *)(param_2 + (long)(int)((iVar2 << 1 | 1U) * param_5) * 4);
          lVar5 = lVar5 + 1;
          puVar7 = puVar7 + 2;
        } while (lVar5 < iVar1 >> 1);
      }
    }
    else if (1 < iVar3) {
      lVar5 = 0;
      lVar6 = *(long *)(param_1 + 0x30);
      iVar1 = iVar3;
      if (iVar3 < 0) {
        iVar1 = iVar3 + 1;
      }
      pfVar8 = (float *)(lVar12 + 4);
      do {
        lVar9 = (long)*(int *)(lVar6 + lVar5 * 4);
        uVar10 = (uint)(lVar9 << 1);
        pfVar8[-1] = *(float *)(param_2 + (long)(int)(uVar10 * param_5) * 4) *
                     *(float *)(param_4 + lVar9 * 8);
        uVar10 = uVar10 | 1;
        *pfVar8 = *(float *)(param_2 + (long)(int)(uVar10 * param_5) * 4) *
                  *(float *)(param_4 + (long)(int)uVar10 * 4);
        lVar5 = lVar5 + 1;
        pfVar8 = pfVar8 + 2;
      } while (lVar5 < iVar1 >> 1);
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    (*DAT_101d91a20)(lVar12,*(long *)(param_1 + 0x28) + lVar4 * 4,iVar3 >> 1);
    (*DAT_101d91a30)(lVar12,param_3,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18))
    ;
    FUN_1005dbf14(uVar11);
    uVar11 = 0;
  }
  return uVar11;
}




undefined8 FUN_100563994(long param_1,undefined8 param_2,float *param_3,long param_4,int param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar4 = 0x43;
  }
  else if (param_5 == 0) {
    uVar4 = 0x1f;
  }
  else {
    (*DAT_101d91a38)(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    lVar6 = *(long *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar2 = uVar3;
    if ((int)uVar3 < 0) {
      uVar2 = uVar3 + 1;
    }
    iVar5 = (int)uVar2 >> 1;
    if (1 < (int)uVar3) {
      lVar8 = 0;
      do {
        *(undefined8 *)(lVar6 + (long)((int)lVar8 + iVar5) * 8) =
             *(undefined8 *)(lVar6 + (long)*(int *)(*(long *)(param_1 + 0x30) + lVar8 * 4) * 8);
        lVar8 = lVar8 + 1;
        uVar3 = *(uint *)(param_1 + 0x18);
        uVar2 = uVar3;
        if ((int)uVar3 < 0) {
          uVar2 = uVar3 + 1;
        }
        iVar5 = (int)uVar2 >> 1;
      } while (lVar8 < iVar5);
      lVar6 = *(long *)(param_1 + 0x20);
    }
    uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    (*DAT_101d91a28)(lVar6 + uVar7,*(long *)(param_1 + 0x28) + uVar7);
    iVar5 = *(int *)(param_1 + 0x18);
    lVar6 = (long)iVar5;
    if ((param_4 == 0) && (param_5 == 1)) {
      if (0 < iVar5) {
        lVar8 = 0;
        lVar9 = *(long *)(param_1 + 0x20);
        do {
          iVar10 = iVar5 + (int)lVar8;
          pfVar1 = param_3 + lVar8;
          *pfVar1 = *(float *)(lVar9 + (long)iVar10 * 4);
          pfVar1[1] = *(float *)(lVar9 + (long)(iVar10 + 1) * 4);
          pfVar1[2] = *(float *)(lVar9 + (long)(iVar10 + 2) * 4);
          pfVar1[3] = *(float *)(lVar9 + (long)(iVar10 + 3) * 4);
          lVar8 = lVar8 + 4;
        } while (lVar8 < lVar6);
      }
    }
    else if (param_4 == 0) {
      if (0 < iVar5) {
        lVar8 = 0;
        lVar9 = *(long *)(param_1 + 0x20);
        do {
          *param_3 = *(float *)(lVar9 + (long)iVar5 * 4);
          param_3[param_5] = *(float *)(lVar9 + (long)(iVar5 + 1) * 4);
          param_3[param_5 * 2] = *(float *)(lVar9 + (long)(iVar5 + 2) * 4);
          param_3[param_5 * 3] = *(float *)(lVar9 + (long)(iVar5 + 3) * 4);
          lVar8 = lVar8 + 4;
          iVar5 = iVar5 + 4;
          param_3 = (float *)((long)param_3 +
                             (-(ulong)((uint)(param_5 << 2) >> 0x1f) & 0xfffffffc00000000 |
                             (ulong)(uint)(param_5 << 2) << 2));
        } while (lVar8 < lVar6);
      }
    }
    else if (0 < iVar5) {
      lVar8 = 0;
      lVar9 = *(long *)(param_1 + 0x20);
      do {
        pfVar1 = (float *)(param_4 + lVar8 * 4);
        *param_3 = *(float *)(lVar9 + (long)iVar5 * 4) * *pfVar1;
        param_3[param_5] = *(float *)(lVar9 + (long)(iVar5 + 1) * 4) * pfVar1[1];
        param_3[param_5 * 2] = *(float *)(lVar9 + (long)(iVar5 + 2) * 4) * pfVar1[2];
        param_3[param_5 * 3] = *(float *)(lVar9 + (long)(iVar5 + 3) * 4) * pfVar1[3];
        lVar8 = lVar8 + 4;
        iVar5 = iVar5 + 4;
        param_3 = (float *)((long)param_3 +
                           (-(ulong)((uint)(param_5 << 2) >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)(uint)(param_5 << 2) << 2));
      } while (lVar8 < lVar6);
    }
    uVar4 = 0;
  }
  return uVar4;
}




void FUN_100563d28(void)

{
  FUN_100577e54();
  return;
}




int FUN_1005641e0(float param_1)

{
  return (int)(param_1 + 0.5);
}




void FUN_1005641f0(float param_1)

{
  if (-80.0 < param_1) {
    _powf(0x41200000,param_1 / 20.0);
    return;
  }
  return;
}




float FUN_100564218(float param_1)

{
  float fVar1;
  
  if (0.0 < param_1) {
    fVar1 = (float)_log10f();
    return fVar1 * 20.0;
  }
  return -80.0;
}




undefined4 FUN_10056424c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  plVar1 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x28,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                                 ,0x37a,0,0);
  *plVar1 = (long)(PTR_DAT_1014441c8 + 0x10);
  *(undefined1 *)(plVar1 + 1) = 0;
  plVar1[3] = 0;
  plVar1[4] = 0;
  puVar2 = (undefined8 *)
           FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x40,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                         ,0xf5,0,0);
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0x3f800000;
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *(undefined1 *)((long)puVar2 + 0x2c) = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)((long)puVar2 + 0x34) = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  plVar1[2] = (long)puVar2;
  uVar3 = 0x26;
  if (plVar1 != (long *)0x0) {
    uVar3 = 0;
  }
  *(long **)(param_1 + 8) = plVar1;
  return uVar3;
}




undefined8 FUN_100564314(long param_1)

{
  FUN_10063c814(*(undefined8 *)(param_1 + 8));
  return 0;
}




undefined8 FUN_100564330(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(lVar3 + 0x18);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2c) != '\0')) {
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    *(long *)(lVar3 + 0x10) = lVar1;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_10063c900(uVar2);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar2,"../../src/fmod_memory.h",0xd4);
  }
  FUN_100566700(*(undefined8 *)(lVar3 + 0x10));
  return 0;
}




undefined8
FUN_10056439c(long param_1,undefined8 param_2,long param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  
  lVar10 = *(long *)(param_1 + 8);
  if (param_6 != 1) {
    uVar7 = **(undefined8 **)(param_3 + 0x18);
    uVar8 = **(undefined8 **)(param_4 + 0x18);
    uVar3 = **(undefined4 **)(param_3 + 8);
    *(undefined1 *)(lVar10 + 8) = 1;
    lVar6 = *(long *)(lVar10 + 0x18);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x2c) != '\0')) {
      uVar9 = *(undefined8 *)(lVar10 + 0x10);
      *(long *)(lVar10 + 0x10) = lVar6;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      FUN_10063c900(uVar9);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar9,"../../src/fmod_memory.h",0xd4);
    }
    FUN_100565e70(*(undefined8 *)(lVar10 + 0x10),uVar7,uVar8,param_2,uVar3);
    return 0;
  }
  if (param_4 != 0) {
    lVar6 = *(long *)(lVar10 + 0x10);
    puVar4 = *(undefined4 **)(param_4 + 8);
    *puVar4 = *(undefined4 *)(lVar6 + 0x18);
    switch(*(undefined4 *)(lVar6 + 0x18)) {
    case 0:
      *(undefined4 *)(param_4 + 0x20) = 3;
      *puVar4 = 2;
      goto LAB_100564490;
    case 1:
      uVar3 = 2;
      break;
    case 2:
      uVar3 = 3;
      break;
    default:
      uVar3 = 1;
      break;
    case 4:
      uVar3 = 4;
      break;
    case 5:
      uVar3 = 5;
      break;
    case 6:
      uVar3 = 6;
      break;
    case 8:
      uVar3 = 7;
    }
    *(undefined4 *)(param_4 + 0x20) = uVar3;
  }
LAB_100564490:
  if (param_3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_3 + 8);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (param_5 == 0) {
    *(undefined4 *)(lVar10 + 0x34) = *(undefined4 *)(lVar10 + 0x38);
    fVar11 = *(float *)(lVar10 + 0x20);
  }
  else {
    if (*(int *)(lVar10 + 0x34) == 0) {
      return 0xb;
    }
    iVar2 = *(int *)(lVar10 + 0x34) - (int)param_2;
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(lVar10 + 0x34) = iVar1;
    fVar11 = *(float *)(lVar10 + 0x20);
    if ((fVar11 == 0.0) && (*(float *)(lVar10 + 0x1c) == 0.0)) {
      return 0xb;
    }
  }
  if (((fVar11 == 0.0) && (*(float *)(lVar10 + 0x1c) == 0.0)) && (**(int **)(param_4 + 8) == iVar5))
  {
    if ((*(float *)(lVar10 + 0x28) == 0.0) && (*(float *)(lVar10 + 0x24) == 0.0)) {
      return 0xb;
    }
    if ((*(float *)(lVar10 + 0x28) == 1.0) && (*(float *)(lVar10 + 0x24) == 1.0)) {
      return 6;
    }
  }
  return 0;
}




undefined8 FUN_1005645c8(float param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (param_3 == 2) {
    lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10);
    if (param_1 <= -80.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _powf(0x41200000,param_1 / 20.0);
    }
    uVar1 = 0;
    *(undefined4 *)(lVar2 + 0x24) = uVar3;
  }
  else if (param_3 == 1) {
    lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10);
    if (param_1 <= -80.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _powf(0x41200000,param_1 / 20.0);
    }
    uVar1 = 0;
    *(undefined4 *)(lVar2 + 0x1c) = uVar3;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8 FUN_100564668(long param_1,int param_2,short *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(PTR_DAT_10186d408 + (long)*(int *)(param_1 + 0x30) * 8 + 0x98);
    FUN_100570c5c(uVar2);
    FUN_100566820(uVar1,param_3 + 1,param_4 + -2,(long)*param_3,param_1);
    FUN_100570c9c(uVar2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8 FUN_1005646f0(long param_1,int param_2,float *param_3,char *param_4)

{
  float fVar1;
  
  if (param_2 == 2) {
    fVar1 = *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x24);
  }
  else {
    if (param_2 != 1) {
      return 0x1f;
    }
    fVar1 = *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x1c);
  }
  if (fVar1 <= 0.0) {
    fVar1 = -80.0;
  }
  else {
    fVar1 = (float)_log10f();
    fVar1 = fVar1 * 20.0;
  }
  *param_3 = fVar1;
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.1f");
  }
  return 0;
}




undefined8 FUN_10056478c(void)

{
  return 0x1f;
}




void FUN_100564794(void)

{
  _memset(&DAT_101e94c40,0,0x60);
  DAT_101e94c40 = 3;
  uRam0000000101e94c4c = 0x736e6f70736552;
  DAT_101e94c44._0_7_ = 0x65736c75706d49;
  DAT_101e94c44._7_1_ = 0x20;
  uRam0000000101e94c5c = 0;
  DAT_101e94c54._0_7_ = 0;
  DAT_101e94c54._7_1_ = 0;
  DAT_101e94c68 = "";
  DAT_101e94c70 = 0;
  _memset(&DAT_101e94ca0,0,0x60);
  _strncpy(&DAT_101e94ca4,"Wet Level",0xf);
  _strncpy(&DAT_101e94cb4,"dB",0xf);
  DAT_101e94cc8 = "Gain in dB. -80 to 10. Default = 0";
  DAT_101e94cd0 = 0xc2a00000;
  DAT_101e94cd4 = 0x41200000;
  DAT_101e94cd8 = 0;
  DAT_101e94ce0 = 1;
  _memset(&DAT_101e94d00,0,0x60);
  _strncpy(&DAT_101e94d04,"Dry Level",0xf);
  _strncpy(&DAT_101e94d14,"dB",0xf);
  DAT_101e94d30 = 0xc2a00000;
  DAT_101e94d34 = 0x41200000;
  DAT_101e94d38 = 0xc2a00000;
  DAT_101e94d40 = 1;
  DAT_101e94d28 = "Gain in dB. -80 to 10. Default = -80";
  DAT_101d91a40 = &DAT_101867f18;
  DAT_101d91a58 = 0x20;
  DAT_101d91a50 = 0x28;
  return;
}




void FUN_1005648ec(long *param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [12];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  
  iVar9 = 0;
  uVar10 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  fVar15 = (float)param_4;
  uVar5 = ~uVar4;
  do {
    uVar1 = uVar10 + param_3;
    iVar2 = uVar4 - uVar10;
    if ((int)uVar1 <= (int)uVar4) {
      iVar2 = param_3;
    }
    if (0 < iVar2) {
      lVar11 = *param_1;
      uVar3 = uVar5;
      if ((int)uVar5 <= (int)~uVar1) {
        uVar3 = ~uVar1;
      }
      uVar6 = (ulong)((-2 - uVar10) - uVar3);
      uVar13 = uVar6 + 1 & 0x1fffffffc;
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        pfVar12 = (float *)(param_2 + (long)iVar9 * 4);
        puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar10 * 4);
        if ((undefined8 *)(param_2 + ((long)iVar9 + uVar6) * 4) < puVar7 ||
            (float *)(lVar11 + ((long)(int)uVar10 + uVar6) * 4) < pfVar12) {
          uVar1 = uVar5;
          if ((int)uVar5 <= (int)~(uVar10 + param_3)) {
            uVar1 = ~(uVar10 + param_3);
          }
          uVar8 = (ulong)((-2 - uVar10) - uVar1) + 1 & 0xfffffffffffffffc;
          do {
            fVar16 = *pfVar12 / fVar15;
            fVar20 = pfVar12[1] / fVar15;
            fVar21 = pfVar12[2] / fVar15;
            fVar22 = pfVar12[3] / fVar15;
            iVar23 = -(uint)(ABS(fVar16) < 1e-07);
            iVar24 = -(uint)(ABS(fVar20) < 1e-07);
            iVar25 = -(uint)(ABS(fVar21) < 1e-07);
            iVar26 = -(uint)(ABS(fVar22) < 1e-07);
            fVar16 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                     CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                              ~(byte)((uint)iVar23 >> 0x10),
                                              CONCAT11((byte)((uint)fVar16 >> 8) &
                                                       ~(byte)((uint)iVar23 >> 8),
                                                       SUB41(fVar16,0) & ~(byte)iVar23)));
            auVar17._0_8_ =
                 CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                          CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                   CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                            CONCAT14(SUB41(fVar20,0) & ~(byte)iVar24,fVar16))));
            auVar17[8] = SUB41(fVar21,0) & ~(byte)iVar25;
            auVar17[9] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar25 >> 8);
            auVar17[10] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
            auVar17[0xb] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
            auVar19[0xc] = SUB41(fVar22,0) & ~(byte)iVar26;
            auVar19._0_12_ = auVar17;
            auVar19[0xd] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar26 >> 8);
            auVar19[0xe] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
            auVar19[0xf] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
            auVar18._0_8_ =
                 CONCAT44((float)((ulong)auVar17._0_8_ >> 0x20) + (float)((ulong)*puVar7 >> 0x20),
                          fVar16 + (float)*puVar7);
            auVar18._8_4_ = auVar17._8_4_ + (float)puVar7[1];
            auVar18._12_4_ = auVar19._12_4_ + (float)((ulong)puVar7[1] >> 0x20);
            *puVar7 = auVar18._0_8_;
            auVar19 = NEON_ext(auVar18,auVar18,8,1);
            puVar7[1] = auVar19._0_8_;
            uVar8 = uVar8 - 4;
            puVar7 = puVar7 + 2;
            pfVar12 = pfVar12 + 4;
          } while (uVar8 != 0);
        }
        else {
          uVar13 = 0;
        }
      }
      if (uVar6 + 1 != uVar13) {
        uVar1 = uVar5;
        if ((int)uVar5 <= (int)~(uVar10 + param_3)) {
          uVar1 = ~(uVar10 + param_3);
        }
        iVar23 = (~uVar10 - uVar1) - (int)uVar13;
        pfVar12 = (float *)(lVar11 + (uVar13 + (long)(int)uVar10) * 4);
        pfVar14 = (float *)(param_2 + (uVar13 + (long)iVar9) * 4);
        do {
          fVar16 = 0.0;
          if (1e-07 <= ABS(*pfVar14 / fVar15)) {
            fVar16 = *pfVar14 / fVar15;
          }
          *pfVar12 = fVar16 + *pfVar12;
          iVar23 = iVar23 + -1;
          pfVar12 = pfVar12 + 1;
          pfVar14 = pfVar14 + 1;
        } while (iVar23 != 0);
      }
    }
    iVar23 = 0;
    if (uVar4 != 0) {
      iVar23 = (int)(uVar10 + iVar2) / (int)uVar4;
    }
    uVar10 = (uVar10 + iVar2) - iVar23 * uVar4;
    param_3 = param_3 - iVar2;
    iVar9 = iVar2 + iVar9;
  } while (param_3 != 0);
  *(uint *)(param_1 + 1) = uVar10;
  return;
}




void FUN_100564a60(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  iVar4 = (int)param_1[1];
  iVar3 = *(int *)((long)param_1 + 0xc);
  uVar7 = param_3;
  do {
    uVar1 = iVar3 - iVar4;
    if ((int)(iVar4 + param_3) <= iVar3) {
      uVar1 = param_3;
    }
    uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    _memcpy((void *)(param_2 + (long)iVar6 * 4),(void *)(*param_1 + (long)iVar4 * 4),uVar5);
    _bzero((void *)(*param_1 + (long)(int)param_1[1] * 4),uVar5);
    iVar3 = *(int *)((long)param_1 + 0xc);
    iVar4 = (int)param_1[1] + uVar1;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = iVar4 / iVar3;
    }
    iVar4 = iVar4 - iVar2 * iVar3;
    *(int *)(param_1 + 1) = iVar4;
    uVar7 = uVar7 - uVar1;
    iVar6 = uVar1 + iVar6;
  } while (uVar7 != 0);
  return;
}




int * FUN_100564b04(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x16) = param_3;
  uVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2 << 4,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[10] = *param_1;
  param_1[0xe] = 0;
  return param_1;
}




int * FUN_100564b7c(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x16) = param_3;
  uVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2 << 4,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[10] = *param_1;
  param_1[0xe] = 0;
  return param_1;
}




long FUN_100564bf4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar2 = 0;
    do {
      FUN_1005d7f1c(uVar1,*(undefined8 *)(*(long *)(param_1 + 8) + lVar2 * 8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                    ,0x161);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                    *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                    ,0x162);
      lVar2 = lVar2 + 1;
      uVar1 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
    } while (lVar2 < *(int *)(param_1 + 0x50));
  }
  FUN_1005d7f1c(uVar1,*(undefined8 *)(param_1 + 0x20),
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x165);
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 8),
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x166);
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x10),
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x167);
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x30),
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x168);
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x18),
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x169);
  return param_1;
}




void thunk_FUN_100564bf4(void)

{
  FUN_100564bf4();
  return;
}




void FUN_100564d14(int *param_1,long param_2,int param_3,int param_4,ulong param_5,int param_6,
                  undefined8 *param_7)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  short *psVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar3 = *param_7;
  *(undefined8 *)(param_1 + 0x12) = param_7[1];
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  param_1[0x14] = param_6;
  pvVar2 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1 << 3,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                                 ,0x43,0,0);
  *(void **)(param_1 + 8) = pvVar2;
  _bzero(pvVar2,(long)*param_1 << 3);
  uVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x14] << 3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  *(undefined8 *)(param_1 + 2) = uVar3;
  uVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x14] << 3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  *(undefined8 *)(param_1 + 4) = uVar3;
  pvVar2 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1 << 3,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                                 ,0x43,0,0);
  *(void **)(param_1 + 0xc) = pvVar2;
  _bzero(pvVar2,(long)*param_1 << 3);
  pfVar4 = (float *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1 << 3,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                                  ,0x43,0,0);
  _bzero(pfVar4,(long)*param_1 << 3);
  if (0 < param_1[0x14]) {
    lVar10 = 0;
    uVar12 = -(param_5 >> 0x1f & 1) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
    do {
      uVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1 << 4,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                            ,0x43,0,0);
      lVar11 = lVar10 * 8;
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar11) = uVar3;
      _bzero(*(void **)(*(long *)(param_1 + 2) + lVar11),(long)*param_1 << 4);
      uVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1 << 4,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                            ,0x43,0,0);
      *(undefined8 *)(*(long *)(param_1 + 4) + lVar11) = uVar3;
      _bzero(*(void **)(*(long *)(param_1 + 4) + lVar11),(long)*param_1 << 4);
      iVar5 = *param_1;
      lVar11 = param_2;
      if ((int)lVar10 == param_1[0x14] + -1) {
        iVar1 = 0;
        if (iVar5 != 0) {
          iVar1 = param_3 / iVar5;
        }
        iVar1 = param_3 - iVar1 * iVar5;
        if (iVar1 == 0) goto LAB_100564f88;
        if (0 < iVar1) {
          lVar11 = param_2 + (long)(int)param_5 * ((ulong)(iVar1 - 1) * 2 + 2);
          psVar7 = (short *)(param_2 + (long)param_4 * 2);
          pfVar8 = pfVar4;
          iVar9 = iVar1;
          do {
            *pfVar8 = (float)(int)*psVar7 / 32767.0;
            iVar9 = iVar9 + -1;
            psVar7 = (short *)((long)psVar7 + uVar12);
            pfVar8 = pfVar8 + 1;
          } while (iVar9 != 0);
        }
        _bzero(pfVar4 + iVar1,
               -(ulong)((uint)(iVar5 - iVar1) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar5 - iVar1) << 2);
        iVar5 = *param_1;
      }
      else {
LAB_100564f88:
        if (0 < iVar5) {
          lVar6 = 0;
          lVar11 = (ulong)(iVar5 - 1U) * 2 + 2;
          if (iVar5 - 1U == 0 || iVar5 < 1) {
            lVar11 = 2;
          }
          lVar11 = param_2 + (int)param_5 * lVar11;
          psVar7 = (short *)(param_2 + (long)param_4 * 2);
          do {
            pfVar4[lVar6] = (float)(int)*psVar7 / 32767.0;
            lVar6 = lVar6 + 1;
            psVar7 = (short *)((long)psVar7 + uVar12);
          } while (lVar6 < iVar5);
        }
      }
      (**(code **)**(undefined8 **)(param_1 + 0x16))
                (*(undefined8 **)(param_1 + 0x16),iVar5 << 1,pfVar4,
                 *(undefined8 *)(*(long *)(param_1 + 4) + lVar10 * 8));
      lVar10 = lVar10 + 1;
      param_2 = lVar11;
    } while (lVar10 < param_1[0x14]);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pfVar4,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x19a);
  return;
}




void FUN_100565048(int *param_1,void *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  
  while( true ) {
    iVar16 = param_1[10];
    iVar21 = (int)param_3;
    if (iVar16 + iVar21 <= *param_1 * 2) break;
    iVar16 = *param_1 * 2 - iVar16;
    FUN_100565048(param_1,param_2,iVar16);
    param_3 = (ulong)(uint)(iVar21 - iVar16);
    param_2 = (void *)((long)param_2 + (long)iVar16 * 4);
  }
  _memcpy((void *)(*(long *)(param_1 + 8) + (long)iVar16 * 4),param_2,
          -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
  iVar21 = param_1[10] + iVar21;
  param_1[10] = iVar21;
  if (iVar21 == *param_1 * 2) {
    iVar16 = param_1[0x14];
    lVar12 = (long)iVar16;
    puVar13 = *(undefined8 **)(param_1 + 2);
    uVar11 = puVar13[lVar12 + -1];
    if (1 < iVar16) {
      puVar13[lVar12 + -1] = puVar13[lVar12 + -2];
      if (1 < lVar12 + -1) {
        uVar14 = -(ulong)(iVar16 - 3U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar16 - 3U) << 3;
        lVar12 = lVar12 + -2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 2) + lVar12 * 8) =
               *(undefined8 *)(*(long *)(param_1 + 2) + uVar14);
          uVar14 = uVar14 - 8;
          lVar15 = lVar12 + -1;
          bVar1 = 0 < lVar12;
          lVar12 = lVar15;
        } while (lVar15 != 0 && bVar1);
      }
      puVar13 = *(undefined8 **)(param_1 + 2);
    }
    *puVar13 = uVar11;
    (**(code **)**(undefined8 **)(param_1 + 0x16))
              (*(undefined8 **)(param_1 + 0x16),iVar21,*(undefined8 *)(param_1 + 8),
               **(undefined8 **)(param_1 + 2));
    _bzero(*(void **)(param_1 + 6),(long)*param_1 << 4);
    iVar21 = param_1[0x14];
    if (iVar21 < 1) {
      iVar16 = *param_1;
      lVar12 = *(long *)(param_1 + 6);
    }
    else {
      lVar15 = 0;
      lVar20 = *(long *)(param_1 + 2);
      lVar5 = *(long *)(param_1 + 4);
      iVar16 = *param_1;
      lVar12 = *(long *)(param_1 + 6);
      do {
        if (0 < iVar16) {
          pfVar8 = (float *)(*(long *)(lVar5 + lVar15 * 8) + 4);
          pfVar18 = (float *)(*(long *)(lVar20 + lVar15 * 8) + 4);
          pfVar19 = (float *)(lVar12 + 4);
          iVar7 = iVar16 << 1;
          do {
            fVar22 = pfVar18[-1];
            fVar23 = *pfVar18;
            fVar24 = pfVar8[-1];
            fVar25 = *pfVar8;
            pfVar19[-1] = pfVar19[-1] + (fVar22 * fVar24 - fVar23 * fVar25);
            *pfVar19 = *pfVar19 + fVar23 * fVar24 + fVar22 * fVar25;
            iVar7 = iVar7 + -1;
            pfVar8 = pfVar8 + 2;
            pfVar18 = pfVar18 + 2;
            pfVar19 = pfVar19 + 2;
          } while (iVar7 != 0);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar21);
    }
    (**(code **)(**(long **)(param_1 + 0x16) + 8))
              (*(long **)(param_1 + 0x16),iVar16 << 1,lVar12,*(undefined8 *)(param_1 + 0xc));
    iVar21 = 0;
    lVar15 = *(long *)(param_1 + 0xc);
    iVar16 = *param_1;
    lVar12 = (long)iVar16;
    uVar17 = param_1[0x12];
    uVar4 = param_1[0x13];
    fVar22 = (float)(iVar16 << 1);
    uVar6 = ~uVar4;
    do {
      uVar2 = iVar16 + uVar17;
      iVar7 = uVar4 - uVar17;
      if ((int)uVar2 <= (int)uVar4) {
        iVar7 = iVar16;
      }
      if (0 < iVar7) {
        lVar20 = *(long *)(param_1 + 0x10);
        uVar3 = uVar6;
        if ((int)uVar6 <= (int)~uVar2) {
          uVar3 = ~uVar2;
        }
        uVar10 = (ulong)((-2 - uVar17) - uVar3);
        uVar14 = uVar10 + 1 & 0x1fffffffc;
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          pfVar8 = (float *)(lVar15 + (lVar12 + iVar21) * 4);
          puVar13 = (undefined8 *)(lVar20 + (long)(int)uVar17 * 4);
          if (((undefined8 *)(lVar15 + (lVar12 + iVar21 + uVar10) * 4) < puVar13) ||
             ((float *)(lVar20 + ((long)(int)uVar17 + uVar10) * 4) < pfVar8)) {
            uVar2 = uVar6;
            if ((int)uVar6 <= (int)~(iVar16 + uVar17)) {
              uVar2 = ~(iVar16 + uVar17);
            }
            uVar9 = (ulong)((-2 - uVar17) - uVar2) + 1 & 0xfffffffffffffffc;
            do {
              fVar23 = *pfVar8 / fVar22;
              fVar24 = pfVar8[1] / fVar22;
              fVar25 = pfVar8[2] / fVar22;
              fVar29 = pfVar8[3] / fVar22;
              iVar30 = -(uint)(ABS(fVar23) < 1e-07);
              iVar31 = -(uint)(ABS(fVar24) < 1e-07);
              iVar32 = -(uint)(ABS(fVar25) < 1e-07);
              iVar33 = -(uint)(ABS(fVar29) < 1e-07);
              fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                       CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                ~(byte)((uint)iVar30 >> 0x10),
                                                CONCAT11((byte)((uint)fVar23 >> 8) &
                                                         ~(byte)((uint)iVar30 >> 8),
                                                         SUB41(fVar23,0) & ~(byte)iVar30)));
              auVar26._0_8_ =
                   CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                            CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                     CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar31 >> 8)
                                              ,CONCAT14(SUB41(fVar24,0) & ~(byte)iVar31,fVar23))));
              auVar26[8] = SUB41(fVar25,0) & ~(byte)iVar32;
              auVar26[9] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar32 >> 8);
              auVar26[10] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
              auVar26[0xb] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
              auVar28[0xc] = SUB41(fVar29,0) & ~(byte)iVar33;
              auVar28._0_12_ = auVar26;
              auVar28[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar33 >> 8);
              auVar28[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
              auVar28[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
              auVar27._0_8_ =
                   CONCAT44((float)((ulong)*puVar13 >> 0x20) + (float)((ulong)auVar26._0_8_ >> 0x20)
                            ,(float)*puVar13 + fVar23);
              auVar27._8_4_ = (float)puVar13[1] + auVar26._8_4_;
              auVar27._12_4_ = (float)((ulong)puVar13[1] >> 0x20) + auVar28._12_4_;
              *puVar13 = auVar27._0_8_;
              auVar28 = NEON_ext(auVar27,auVar27,8,1);
              puVar13[1] = auVar28._0_8_;
              uVar9 = uVar9 - 4;
              puVar13 = puVar13 + 2;
              pfVar8 = pfVar8 + 4;
            } while (uVar9 != 0);
          }
          else {
            uVar14 = 0;
          }
        }
        if (uVar10 + 1 != uVar14) {
          uVar2 = uVar6;
          if ((int)uVar6 <= (int)~(iVar16 + uVar17)) {
            uVar2 = ~(iVar16 + uVar17);
          }
          iVar30 = (~uVar17 - uVar2) - (int)uVar14;
          pfVar8 = (float *)(lVar15 + (lVar12 + uVar14 + (long)iVar21) * 4);
          pfVar18 = (float *)(lVar20 + (uVar14 + (long)(int)uVar17) * 4);
          do {
            fVar23 = 0.0;
            if (1e-07 <= ABS(*pfVar8 / fVar22)) {
              fVar23 = *pfVar8 / fVar22;
            }
            *pfVar18 = *pfVar18 + fVar23;
            iVar30 = iVar30 + -1;
            pfVar8 = pfVar8 + 1;
            pfVar18 = pfVar18 + 1;
          } while (iVar30 != 0);
        }
      }
      iVar30 = 0;
      if (uVar4 != 0) {
        iVar30 = (int)(iVar7 + uVar17) / (int)uVar4;
      }
      uVar17 = (iVar7 + uVar17) - iVar30 * uVar4;
      iVar16 = iVar16 - iVar7;
      iVar21 = iVar7 + iVar21;
    } while (iVar16 != 0);
    param_1[0x12] = uVar17;
    _memmove(*(void **)(param_1 + 8),(void *)((long)*(void **)(param_1 + 8) + lVar12 * 4),
             lVar12 << 2);
    param_1[10] = *param_1;
  }
  return;
}




void FUN_1005653bc(long param_1,long param_2,int param_3,long param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (0 < param_3) {
    pfVar1 = (float *)(param_4 + 4);
    pfVar2 = (float *)(param_2 + 4);
    pfVar3 = (float *)(param_1 + 4);
    do {
      fVar4 = pfVar3[-1];
      fVar5 = *pfVar3;
      fVar6 = pfVar2[-1];
      fVar7 = *pfVar2;
      pfVar1[-1] = pfVar1[-1] + (fVar4 * fVar6 - fVar5 * fVar7);
      *pfVar1 = *pfVar1 + fVar5 * fVar6 + fVar4 * fVar7;
      param_3 = param_3 + -1;
      pfVar1 = pfVar1 + 2;
      pfVar2 = pfVar2 + 2;
      pfVar3 = pfVar3 + 2;
    } while (param_3 != 0);
  }
  return;
}




void FUN_10056541c(int *param_1)

{
  long lVar1;
  
  _bzero(*(void **)(param_1 + 8),(long)*param_1 << 3);
  _bzero(*(void **)(param_1 + 0xc),(long)*param_1 << 3);
  if (0 < param_1[0x14]) {
    lVar1 = 0;
    do {
      _bzero(*(void **)(*(long *)(param_1 + 2) + lVar1 * 8),(long)*param_1 << 4);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_1[0x14]);
  }
  return;
}




void FUN_10056548c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}




void FUN_1005654a0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}




long * FUN_1005654b4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[2],
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x1db);
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(*param_1 + lVar2 * 8);
      FUN_100564bf4(uVar1);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar1,"../../src/fmod_memory.h",0xd4);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[1]);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                ,0x1e2);
  return param_1;
}




void thunk_FUN_1005654b4(void)

{
  FUN_1005654b4();
  return;
}




void FUN_100565578(long *param_1,long param_2,int param_3,undefined4 param_4,ulong param_5,
                  int *param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long local_70;
  int local_68;
  uint local_64;
  
  if (0 < *param_6) {
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  if (0 < param_6[2]) {
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  iVar13 = (int)param_1[1];
  if (0 < param_6[4]) {
    iVar13 = iVar13 + 1;
    *(int *)(param_1 + 1) = iVar13;
  }
  lVar6 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar13 << 3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  *param_1 = lVar6;
  uVar1 = param_6[5] * param_6[4] + param_6[1] * *param_6 + param_6[3] * param_6[2];
  pvVar7 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar1 * 4,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                                 ,0x43,0,0);
  param_1[2] = (long)pvVar7;
  _bzero(pvVar7,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  param_1[3] = param_1[2];
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    iVar13 = 0;
    uVar10 = -(param_5 >> 0x1f & 1) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = (ulong)(long)param_3 / uVar10;
    }
    do {
      iVar3 = *param_6;
      iVar4 = param_6[1];
      piVar8 = (int *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x60,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                                    ,0x203,0,0);
      *piVar8 = iVar4;
      piVar8[8] = 0;
      piVar8[9] = 0;
      piVar8[0xc] = 0;
      piVar8[0xd] = 0;
      piVar8[2] = 0;
      piVar8[3] = 0;
      piVar8[4] = 0;
      piVar8[5] = 0;
      piVar8[0x14] = 0;
      piVar8[0x10] = 0;
      piVar8[0x11] = 0;
      piVar8[0x12] = 0;
      piVar8[0x13] = 0;
      *(undefined8 *)(piVar8 + 0x16) = param_7;
      uVar9 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 << 4,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                            ,0x43,0,0);
      *(undefined8 *)(piVar8 + 6) = uVar9;
      piVar8[10] = *piVar8;
      piVar8[0xe] = 0;
      *(int **)(*param_1 + lVar6 * 8) = piVar8;
      local_70 = param_1[2];
      iVar5 = 0;
      if (uVar1 != 0) {
        iVar5 = iVar13 / (int)uVar1;
      }
      local_68 = iVar13 - iVar5 * uVar1;
      iVar11 = (int)uVar12;
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = (iVar11 + -1) / iVar4;
      }
      iVar2 = iVar3 * iVar4;
      if (iVar11 < iVar3 * iVar4) {
        iVar3 = iVar5 + 1;
        iVar2 = iVar11;
      }
      iVar4 = 0;
      iVar5 = 0;
      if (iVar11 != 0) {
        iVar4 = iVar2;
        iVar5 = iVar3;
      }
      local_64 = uVar1;
      FUN_100564d14(*(undefined8 *)(*param_1 + lVar6 * 8),param_2,iVar4,param_4,param_5,iVar5,
                    &local_70);
      uVar12 = (ulong)(uint)(iVar11 - iVar4);
      iVar13 = iVar4 + iVar13;
      param_2 = param_2 + (long)(iVar4 * (int)param_5) * 2;
      lVar6 = lVar6 + 1;
      param_6 = param_6 + 2;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}




void FUN_10056580c(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  if (0 < (int)param_1[1]) {
    lVar8 = 0;
    do {
      FUN_100565048(*(undefined8 *)(*param_1 + lVar8 * 8),param_2,param_4);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[1]);
  }
  iVar7 = 0;
  iVar4 = (int)param_1[4];
  iVar5 = *(int *)((long)param_1 + 0x24);
  uVar9 = param_4;
  do {
    uVar1 = iVar5 - iVar4;
    if ((int)(iVar4 + (uint)param_4) <= iVar5) {
      uVar1 = (uint)param_4;
    }
    uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    _memcpy((void *)(param_3 + (long)iVar7 * 4),(void *)(param_1[3] + (long)iVar4 * 4),uVar6);
    _bzero((void *)(param_1[3] + (long)(int)param_1[4] * 4),uVar6);
    iVar5 = *(int *)((long)param_1 + 0x24);
    iVar4 = (int)param_1[4] + uVar1;
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = iVar4 / iVar5;
    }
    iVar4 = iVar4 - iVar2 * iVar5;
    *(int *)(param_1 + 4) = iVar4;
    uVar3 = (int)uVar9 - uVar1;
    uVar9 = (ulong)uVar3;
    iVar7 = uVar1 + iVar7;
  } while (uVar3 != 0);
  return;
}




void FUN_1005658e8(long *param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  _bzero((void *)param_1[3],(long)*(int *)((long)param_1 + 0x24) << 2);
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      piVar2 = *(int **)(*param_1 + lVar1 * 8);
      _bzero(*(void **)(piVar2 + 8),(long)*piVar2 << 3);
      _bzero(*(void **)(piVar2 + 0xc),(long)*piVar2 << 3);
      if (0 < piVar2[0x14]) {
        lVar3 = 0;
        do {
          _bzero(*(void **)(*(long *)(piVar2 + 2) + lVar3 * 8),(long)*piVar2 << 4);
          lVar3 = lVar3 + 1;
        } while (lVar3 < piVar2[0x14]);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  return;
}




int FUN_100565998(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  iVar3 = (int)param_1[1];
  uVar1 = (ulong)iVar3;
  if (iVar3 < 1) {
    return 0;
  }
  if (iVar3 == 0) {
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = uVar1 & 0xfffffffffffffffe;
    if (uVar2 == 0) {
      uVar2 = 0;
      iVar3 = 0;
      iVar4 = 0;
    }
    else {
      iVar3 = 0;
      iVar4 = 0;
      puVar5 = (undefined8 *)(*param_1 + 8);
      uVar6 = uVar2;
      do {
        if (iVar3 <= *(int *)puVar5[-1] * 2) {
          iVar3 = *(int *)puVar5[-1] * 2;
        }
        if (iVar4 <= *(int *)*puVar5 * 2) {
          iVar4 = *(int *)*puVar5 * 2;
        }
        uVar6 = uVar6 - 2;
        puVar5 = puVar5 + 2;
      } while (uVar6 != 0);
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    if (uVar1 == uVar2) {
      return iVar3;
    }
  }
  do {
    iVar4 = **(int **)(*param_1 + uVar2 * 8) * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    uVar2 = uVar2 + 1;
  } while ((long)uVar2 < (long)uVar1);
  return iVar3;
}




void FUN_100565a4c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void FUN_100565a74(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void FUN_100565a9c(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  iVar4 = 3;
  *param_3 = 3;
  param_3[1] = param_1;
  param_3[3] = param_1 << 2;
  piVar1 = param_3 + 2;
  *piVar1 = 3;
  param_3[5] = param_1 << 4;
  param_3[4] = 99999;
  lVar3 = 0;
  while( true ) {
    if (param_2 <= iVar4 * param_1) {
      iVar4 = 0;
      if (param_1 != 0) {
        iVar4 = (param_2 + -1) / param_1;
      }
      iVar4 = iVar4 + 1;
    }
    piVar1[-2] = iVar4;
    param_2 = param_2 - iVar4 * param_1;
    lVar2 = lVar3 + 1;
    if (param_2 < 1 || 2 < lVar2) break;
    iVar4 = *piVar1;
    param_1 = piVar1[1];
    piVar1 = piVar1 + 2;
    lVar3 = lVar2;
  }
  iVar4 = (int)lVar2;
  if (iVar4 < 3) {
    lVar2 = (long)iVar4;
    uVar6 = (ulong)(1 - (int)lVar3);
    uVar7 = uVar6 + 1;
    lVar3 = uVar7 + lVar2;
    uVar7 = uVar7 & 0x1fffffffe;
    if (uVar7 != 0) {
      lVar2 = uVar7 + lVar2;
      uVar7 = uVar6 + 1 & 0xfffffffffffffffe;
      puVar5 = (undefined8 *)(param_3 + (long)iVar4 * 2);
      auVar8 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
      do {
        *puVar5 = 0;
        puVar5[1] = auVar8._0_8_;
        uVar7 = uVar7 - 2;
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
    }
    if (lVar3 != lVar2) {
      iVar4 = 3 - (int)lVar2;
      param_3 = param_3 + lVar2 * 2 + 1;
      do {
        *(undefined8 *)(param_3 + -1) = 0;
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 2;
      } while (iVar4 != 0);
    }
  }
  return;
}




void FUN_100565b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  int local_80 [6];
  long local_68;
  
  lVar12 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined4 *)(param_1 + 6) = param_5;
  *(int *)(param_1 + 3) = (int)param_4;
  local_68 = lVar12;
  uVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),(int)param_4 << 3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  param_1[1] = uVar2;
  iVar4 = *(int *)(param_1 + 6);
  iVar10 = 3;
  local_80[1] = iVar4;
  local_80[0] = 3;
  local_80[3] = iVar4 << 2;
  local_80[2] = 3;
  local_80[5] = iVar4 << 4;
  local_80[4] = 99999;
  uVar9 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
  uVar7 = 0;
  if (uVar9 != 0) {
    uVar7 = (ulong)(long)(int)param_3 / uVar9;
  }
  piVar8 = local_80;
  lVar11 = 0;
  while( true ) {
    piVar8 = piVar8 + 2;
    iVar6 = (int)uVar7;
    if (iVar6 <= iVar4 * iVar10) {
      iVar10 = 0;
      if (iVar4 != 0) {
        iVar10 = (iVar6 + -1) / iVar4;
      }
      iVar10 = iVar10 + 1;
    }
    piVar8[-2] = iVar10;
    lVar5 = lVar11 + 1;
    if ((2 < lVar5) || (uVar1 = iVar6 - iVar10 * iVar4, uVar7 = (ulong)uVar1, (int)uVar1 < 1))
    break;
    iVar10 = *piVar8;
    iVar4 = piVar8[1];
    lVar11 = lVar5;
  }
  iVar10 = (int)lVar5;
  if (iVar10 < 3) {
    lVar5 = (long)iVar10;
    uVar9 = (ulong)(1 - (int)lVar11);
    uVar7 = uVar9 + 1;
    lVar11 = uVar7 + lVar5;
    uVar7 = uVar7 & 0x1fffffffe;
    if (uVar7 != 0) {
      lVar5 = uVar7 + lVar5;
      uVar7 = uVar9 + 1 & 0xfffffffffffffffe;
      piVar8 = local_80 + (long)iVar10 * 2;
      auVar13 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
      do {
        piVar8[0] = 0;
        piVar8[1] = 0;
        *(long *)(piVar8 + 2) = auVar13._0_8_;
        uVar7 = uVar7 - 2;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    if (lVar11 != lVar5) {
      iVar10 = 3 - (int)lVar5;
      uVar7 = (ulong)(local_80 + lVar5 * 2) | 4;
      do {
        *(undefined8 *)(uVar7 - 4) = 0;
        iVar10 = iVar10 + -1;
        uVar7 = uVar7 + 8;
      } while (iVar10 != 0);
    }
  }
  uVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_1 + 3) << 3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  param_1[2] = uVar2;
  if (0 < *(int *)(param_1 + 3)) {
    lVar11 = 0;
    do {
      puVar3 = (undefined8 *)
               FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x28,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                             ,0x287,0,0);
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[2] = 0;
      lVar5 = lVar11 * 8;
      *(undefined8 **)(param_1[2] + lVar5) = puVar3;
      FUN_100565578(*(undefined8 *)(param_1[2] + lVar5),param_2,param_3,lVar11,param_4,local_80,
                    param_6);
      uVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_1 + 6) << 2,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                            ,0x43,0,0);
      *(undefined8 *)(param_1[1] + lVar5) = uVar2;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 3));
  }
  uVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_1 + 6) << 2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                        ,0x43,0,0);
  *param_1 = uVar2;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(int *)(param_1 + 7) =
       local_80[1] * local_80[0] + local_80[3] * local_80[2] + local_80[5] * local_80[4];
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  if (lVar12 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100565e70(long *param_1,void *param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  void *local_90;
  
  if ((*(char *)((long)param_1 + 0x2c) == '\0') ||
     ((fVar20 = *(float *)(param_1 + 4), fVar20 == 0.0 && (*(float *)((long)param_1 + 0x1c) == 0.0))
     )) {
    FUN_100566194(param_1,0,param_2,param_3,param_4,param_5);
    return;
  }
  iVar6 = (int)param_4;
  iVar12 = (int)param_5;
  if ((int)param_1[6] == iVar6) {
    local_90 = (void *)0x0;
    pvVar4 = param_2;
  }
  else {
    pvVar4 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                   iVar12 * (int)param_1[6] * 4,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                                   ,0x43,0,0);
    uVar15 = ((int)param_1[6] - iVar6) * iVar12;
    _bzero(pvVar4,-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2);
    _memcpy((void *)((long)pvVar4 + (long)(int)uVar15 * 4),param_2,
            (ulong)(uint)(iVar12 * iVar6) << 2);
    param_4 = (ulong)*(uint *)(param_1 + 6);
    local_90 = pvVar4;
  }
  fVar18 = (float)iVar12;
  if (5 < iVar12) {
    fVar18 = (float)iVar12 + -1.0;
  }
  uVar15 = (uint)param_4;
  if (uVar15 != 0) {
    uVar5 = 0;
    lVar8 = 0;
    lVar9 = *param_1;
    do {
      *(undefined4 *)(lVar9 + lVar8 * 4) = 0;
      if (0 < iVar12) {
        fVar19 = 0.0;
        uVar10 = uVar5;
        uVar11 = param_5;
        do {
          fVar19 = (1.0 / SQRT(fVar18)) * *(float *)((long)pvVar4 + uVar10 * 4) + fVar19;
          *(float *)(lVar9 + lVar8 * 4) = fVar19;
          uVar2 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar2;
          uVar10 = (ulong)((int)uVar10 + 1);
        } while (uVar2 != 0);
      }
      uVar5 = (ulong)(uint)((int)uVar5 + iVar12);
      iVar6 = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while (iVar6 != uVar15 - 1);
  }
  if (0 < (int)param_1[3]) {
    lVar8 = 0;
    do {
      lVar9 = lVar8 * 8;
      _bzero(*(void **)(param_1[1] + lVar9),(param_4 & 0xffffffff) << 2);
      plVar17 = *(long **)(param_1[2] + lVar9);
      lVar9 = *(long *)(param_1[1] + lVar9);
      if (0 < (int)plVar17[1]) {
        lVar14 = 0;
        lVar16 = *param_1;
        do {
          FUN_100565048(*(undefined8 *)(*plVar17 + lVar14 * 8),lVar16,param_4);
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)plVar17[1]);
      }
      iVar13 = 0;
      iVar6 = (int)plVar17[4];
      iVar7 = *(int *)((long)plVar17 + 0x24);
      uVar5 = param_4;
      do {
        uVar2 = iVar7 - iVar6;
        if ((int)(iVar6 + uVar15) <= iVar7) {
          uVar2 = uVar15;
        }
        uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
        _memcpy((void *)(lVar9 + (long)iVar13 * 4),(void *)(plVar17[3] + (long)iVar6 * 4),uVar10);
        _bzero((void *)(plVar17[3] + (long)(int)plVar17[4] * 4),uVar10);
        iVar7 = *(int *)((long)plVar17 + 0x24);
        iVar6 = (int)plVar17[4] + uVar2;
        iVar1 = 0;
        if (iVar7 != 0) {
          iVar1 = iVar6 / iVar7;
        }
        iVar6 = iVar6 - iVar1 * iVar7;
        *(int *)(plVar17 + 4) = iVar6;
        uVar3 = (int)uVar5 - uVar2;
        uVar5 = (ulong)uVar3;
        iVar13 = uVar2 + iVar13;
      } while (uVar3 != 0);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[3]);
  }
  FUN_100566194(param_1,param_1[1],pvVar4,param_3,param_4,iVar12);
  if (local_90 != (void *)0x0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_90,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                  ,0x2c0);
  }
  if ((fVar20 != 0.0) && (*(float *)(param_1 + 4) == 0.0)) {
    FUN_100566700(param_1);
    return;
  }
  return;
}




void FUN_100566194(long param_1,long *param_2,float *param_3,float *param_4,uint param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  float *pfVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar1 = 2;
  if (*(uint *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  uVar25 = 0x100;
  if ((int)param_5 < 0x101) {
    uVar25 = param_5;
  }
  uVar6 = (uint)param_6;
  uVar2 = uVar1;
  if ((int)uVar6 <= (int)uVar1) {
    uVar2 = uVar6;
  }
  fVar29 = *(float *)(param_1 + 0x20);
  if (fVar29 == *(float *)(param_1 + 0x1c)) {
    fVar36 = *(float *)(param_1 + 0x28);
    fVar35 = *(float *)(param_1 + 0x24);
    if (fVar36 == fVar35) {
      uVar25 = 0;
      goto LAB_100566534;
    }
  }
  else {
    fVar35 = *(float *)(param_1 + 0x24);
    fVar36 = *(float *)(param_1 + 0x28);
  }
  fVar35 = (fVar35 - fVar36) / (float)(int)uVar25;
  if (param_2 == (long *)0x0) {
    if (0 < (int)uVar25) {
      lVar28 = 0;
      lVar22 = 0;
      lVar10 = 0;
      uVar14 = ~uVar6;
      if ((int)uVar14 < (int)~uVar1) {
        uVar14 = ~uVar1;
      }
      uVar4 = ~uVar14;
      iVar15 = param_5 - 1;
      if (0xff < (int)param_5) {
        iVar15 = 0xff;
      }
      uVar5 = (ulong)(-uVar14 - 2);
      pfVar7 = param_4 + 4;
      pfVar8 = param_3 + 4;
      do {
        iVar9 = (int)lVar10;
        if ((int)uVar2 < 1) {
          uVar14 = 0;
        }
        else {
          uVar11 = uVar5 + 1 & 0x1fffffff8;
          if (uVar11 == 0) {
            uVar11 = 0;
          }
          else {
            lVar16 = (int)uVar1 * lVar10;
            lVar19 = (int)uVar6 * lVar10;
            pfVar12 = pfVar8;
            pfVar17 = pfVar7;
            uVar20 = uVar5 + 1 & 0xfffffffffffffff8;
            if (param_3 + uVar5 + lVar19 < param_4 + lVar16 ||
                param_4 + uVar5 + lVar16 < param_3 + lVar19) {
              do {
                auVar31._0_8_ = CONCAT44(fVar36 * pfVar12[-3],fVar36 * pfVar12[-4]);
                auVar31._8_4_ = fVar36 * pfVar12[-2];
                auVar31._12_4_ = fVar36 * pfVar12[-1];
                fVar29 = fVar36 * (float)*(undefined8 *)pfVar12;
                fVar30 = fVar36 * (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
                fVar33 = fVar36 * (float)*(undefined8 *)(pfVar12 + 2);
                fVar34 = fVar36 * (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
                *(undefined8 *)(pfVar17 + -4) = auVar31._0_8_;
                auVar32 = NEON_ext(auVar31,auVar31,8,1);
                *(long *)(pfVar17 + -2) = auVar32._0_8_;
                *(ulong *)pfVar17 = CONCAT44(fVar30,fVar29);
                auVar32._4_4_ = fVar30;
                auVar32._0_4_ = fVar29;
                auVar32._8_4_ = fVar33;
                auVar32._12_4_ = fVar34;
                auVar3._4_4_ = fVar30;
                auVar3._0_4_ = fVar29;
                auVar3._8_4_ = fVar33;
                auVar3._12_4_ = fVar34;
                auVar32 = NEON_ext(auVar32,auVar3,8,1);
                *(long *)(pfVar17 + 2) = auVar32._0_8_;
                uVar20 = uVar20 - 8;
                pfVar12 = pfVar12 + 8;
                pfVar17 = pfVar17 + 8;
              } while (uVar20 != 0);
            }
            else {
              uVar11 = 0;
            }
          }
          uVar14 = uVar4;
          if (uVar5 + 1 != uVar11) {
            iVar13 = uVar4 - (int)uVar11;
            pfVar12 = param_3 + uVar11 + lVar28;
            pfVar17 = param_4 + uVar11 + lVar22;
            do {
              *pfVar17 = fVar36 * *pfVar12;
              iVar13 = iVar13 + -1;
              pfVar12 = pfVar12 + 1;
              pfVar17 = pfVar17 + 1;
            } while (iVar13 != 0);
          }
        }
        if ((int)uVar14 < (int)uVar1) {
          _bzero(param_4 + (long)(int)(uVar1 * iVar9) + (long)(int)uVar14,
                 (ulong)((uVar1 - 1) - uVar14) * 4 + 4);
        }
        fVar36 = fVar35 + fVar36;
        lVar10 = lVar10 + 1;
        pfVar7 = (float *)((long)pfVar7 +
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
        pfVar8 = (float *)((long)pfVar8 +
                          (-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2
                          ));
        lVar22 = lVar22 + (int)uVar1;
        lVar28 = lVar28 + (int)uVar6;
      } while (iVar9 != iVar15);
    }
  }
  else if (0 < (int)uVar25) {
    lVar10 = 0;
    fVar30 = *(float *)(param_1 + 0x1c) - fVar29;
    uVar14 = ~uVar6;
    if ((int)uVar14 < (int)~uVar1) {
      uVar14 = ~uVar1;
    }
    iVar15 = param_5 - 1;
    if (0xff < (int)param_5) {
      iVar15 = 0xff;
    }
    pfVar8 = param_3;
    pfVar7 = param_4;
    do {
      plVar23 = param_2;
      pfVar12 = pfVar8;
      pfVar17 = pfVar7;
      uVar4 = ~uVar14;
      if ((int)uVar2 < 1) {
        uVar24 = 0;
      }
      else {
        do {
          *pfVar17 = fVar29 * *(float *)(*plVar23 + lVar10 * 4) + fVar36 * *pfVar12;
          uVar4 = uVar4 - 1;
          plVar23 = plVar23 + 1;
          pfVar12 = pfVar12 + 1;
          pfVar17 = pfVar17 + 1;
          uVar24 = ~uVar14;
        } while (uVar4 != 0);
      }
      if ((int)uVar24 < (int)uVar1) {
        lVar22 = (long)(int)uVar24;
        iVar9 = uVar1 - uVar24;
        do {
          pfVar7[lVar22] = fVar29 * *(float *)(param_2[lVar22] + lVar10 * 4);
          lVar22 = lVar22 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      fVar29 = fVar30 / (float)(int)uVar25 + fVar29;
      fVar36 = fVar35 + fVar36;
      iVar9 = (int)lVar10;
      lVar10 = lVar10 + 1;
      pfVar7 = (float *)((long)pfVar7 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
      pfVar8 = (float *)((long)pfVar8 +
                        (-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2))
      ;
    } while (iVar9 != iVar15);
  }
  fVar29 = *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x20) = fVar29;
  fVar36 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = fVar36;
LAB_100566534:
  if (param_2 == (long *)0x0) {
    if (uVar25 < param_5) {
      uVar14 = ~uVar6;
      if ((int)uVar14 < (int)~uVar1) {
        uVar14 = ~uVar1;
      }
      uVar4 = uVar1 * uVar25;
      uVar24 = uVar25 * uVar6;
      do {
        uVar27 = ~uVar14;
        uVar26 = uVar4;
        uVar21 = uVar24;
        if ((int)uVar2 < 1) {
          uVar18 = 0;
        }
        else {
          do {
            param_4[uVar26] = fVar36 * param_3[uVar21];
            uVar27 = uVar27 - 1;
            uVar26 = uVar26 + 1;
            uVar21 = uVar21 + 1;
            uVar18 = ~uVar14;
          } while (uVar27 != 0);
        }
        if (uVar1 - uVar18 != 0 && (int)uVar18 <= (int)uVar1) {
          if ((uVar1 - 1) - uVar18 == -1) goto LAB_1005666ac;
          uVar26 = uVar1 - uVar18 & 0xfffffffe;
          if (uVar26 != 0) {
            uVar27 = uVar26 + uVar18;
            uVar21 = uVar18 + uVar4;
            do {
              param_4[uVar21] = 0.0;
              param_4[uVar21 + 1] = 0.0;
              uVar26 = uVar26 - 2;
              uVar21 = uVar21 + 2;
              uVar18 = uVar27;
            } while (uVar26 != 0);
          }
          for (; uVar1 != uVar18; uVar18 = uVar18 + 1) {
LAB_1005666ac:
            param_4[uVar4 + uVar18] = 0.0;
          }
        }
        uVar25 = uVar25 + 1;
        uVar4 = uVar4 + uVar1;
        uVar24 = uVar24 + uVar6;
      } while (uVar25 != param_5);
    }
  }
  else if (uVar25 < param_5) {
    uVar14 = ~uVar6;
    if ((int)uVar14 < (int)~uVar1) {
      uVar14 = ~uVar1;
    }
    uVar5 = (ulong)uVar25;
    uVar4 = uVar1 * uVar25;
    uVar25 = uVar25 * uVar6;
    do {
      if ((int)uVar2 < 1) {
        uVar24 = 0;
      }
      else {
        lVar10 = 0;
        uVar27 = ~uVar14;
        uVar26 = uVar4;
        uVar21 = uVar25;
        do {
          param_4[uVar26] =
               fVar29 * *(float *)(param_2[lVar10 >> 0x20] + uVar5 * 4) + fVar36 * param_3[uVar21];
          lVar10 = lVar10 + 0x100000000;
          uVar27 = uVar27 - 1;
          uVar26 = uVar26 + 1;
          uVar21 = uVar21 + 1;
          uVar24 = ~uVar14;
        } while (uVar27 != 0);
      }
      if ((int)uVar24 < (int)uVar1) {
        plVar23 = param_2 + (int)uVar24;
        do {
          param_4[uVar4 + uVar24] = fVar29 * *(float *)(*plVar23 + uVar5 * 4);
          uVar24 = uVar24 + 1;
          plVar23 = plVar23 + 1;
        } while (uVar1 != uVar24);
      }
      uVar4 = uVar4 + uVar1;
      iVar15 = (int)uVar5;
      uVar5 = uVar5 + 1;
      uVar25 = uVar25 + uVar6;
    } while (iVar15 != param_5 - 1);
  }
  return;
}




void FUN_100566700(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  
  if (0 < *(int *)(param_1 + 3)) {
    lVar1 = 0;
    do {
      plVar2 = *(long **)(param_1[2] + lVar1 * 8);
      _bzero((void *)plVar2[3],(long)*(int *)((long)plVar2 + 0x24) << 2);
      if (0 < (int)plVar2[1]) {
        lVar3 = 0;
        do {
          piVar4 = *(int **)(*plVar2 + lVar3 * 8);
          _bzero(*(void **)(piVar4 + 8),(long)*piVar4 << 3);
          _bzero(*(void **)(piVar4 + 0xc),(long)*piVar4 << 3);
          if (0 < piVar4[0x14]) {
            lVar5 = 0;
            do {
              _bzero(*(void **)(*(long *)(piVar4 + 2) + lVar5 * 8),(long)*piVar4 << 4);
              lVar5 = lVar5 + 1;
            } while (lVar5 < piVar4[0x14]);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < (int)plVar2[1]);
      }
      _bzero(*(void **)(param_1[1] + lVar1 * 8),(ulong)*(uint *)(param_1 + 6) << 2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 3));
  }
  _bzero((void *)*param_1,(ulong)*(uint *)(param_1 + 6) << 2);
  return;
}




bool FUN_100566804(uint param_1)

{
  return param_1 != 0 && (param_1 - 1 & param_1) == 0;
}




void FUN_100566820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  uint local_34;
  
  *(long *)(param_1 + 0x20) = param_5;
  local_34 = 0;
  (**(code **)(*(long *)(param_5 + 0x28) + 0x20))(param_5,&local_34);
  if ((local_34 != 0) && ((local_34 - 1 & local_34) == 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (*(char *)((long)puVar1 + 0x2c) != '\0') {
      puVar1 = (undefined8 *)
               FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x40,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                             ,0x350,0,0);
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0x3f800000;
      *(undefined4 *)(puVar1 + 4) = 0x3f800000;
      *(undefined4 *)((long)puVar1 + 0x24) = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined1 *)((long)puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)((long)puVar1 + 0x34) = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined8 **)(param_1 + 0x18) = puVar1;
    }
    FUN_100565b88(puVar1,param_2,param_3,param_4,local_34,param_1);
  }
  return;
}




void FUN_100566900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 8) = 1;
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2c) != '\0')) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_10063c900(uVar2);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar2,"../../src/fmod_memory.h",0xd4);
  }
  FUN_100565e70(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return;
}




void FUN_10056699c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_10063c900(uVar1);
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar1,"../../src/fmod_memory.h",0xd4);
  return;
}




void FUN_1005669e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2c) != '\0')) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_10063c900(uVar2);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar2,"../../src/fmod_memory.h",0xd4);
  }
  FUN_100566700(*(undefined8 *)(param_1 + 0x10));
  return;
}




undefined8 FUN_100566a48(void)

{
  return 0x1f;
}




undefined8 FUN_100566a50(void)

{
  return 0x1f;
}




void FUN_100566a58(long param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = &DAT_101868035 + (long)*(char *)((long)param_2 * 8 + (long)param_3 + 0x10186810b) * 2;
  do {
    bVar1 = *pbVar2;
    *(undefined4 *)(param_1 + (ulong)pbVar2[-1] * 4) =
         *(undefined4 *)(&DAT_101867ff0 + (ulong)(bVar1 & 0x7f) * 4);
    pbVar2 = pbVar2 + 2;
  } while (-1 < (char)bVar1);
  return;
}




void FUN_100566aa4(float param_1,float param_2,float param_3)

{
  if (param_1 < param_2) {
    do {
      param_1 = (param_3 - param_2) + param_1;
    } while (param_1 < param_2);
  }
  if (param_3 <= param_1) {
    do {
      param_1 = param_1 - (param_3 - param_2);
    } while (param_3 <= param_1);
  }
  return;
}




void FUN_100566ad8(int param_1,int param_2,int param_3)

{
  if (param_1 < param_2) {
    do {
      param_1 = param_1 + (param_3 - param_2);
    } while (param_1 < param_2);
  }
  if (param_3 <= param_1) {
    do {
      param_1 = param_1 + (param_2 - param_3);
    } while (param_3 <= param_1);
  }
  return;
}




void FUN_100566b0c(float param_1,int param_2,ulong param_3,float *param_4,ulong param_5,
                  float *param_6)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  if (0 < param_2) {
    fVar3 = 0.0;
    pfVar1 = param_4;
    iVar2 = param_2;
    do {
      fVar3 = fVar3 + *pfVar1 * *pfVar1;
      iVar2 = iVar2 + -1;
      pfVar1 = (float *)((long)pfVar1 +
                        (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2))
      ;
    } while (iVar2 != 0);
    if ((fVar3 != 0.0) && (0 < param_2)) {
      do {
        *param_6 = *param_6 + (param_1 / SQRT(fVar3)) * *param_4;
        param_2 = param_2 + -1;
        param_6 = (float *)((long)param_6 +
                           (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 |
                           (param_5 & 0xffffffff) << 2));
        param_4 = (float *)((long)param_4 +
                           (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 |
                           (param_3 & 0xffffffff) << 2));
      } while (param_2 != 0);
    }
  }
  return;
}




void FUN_100566b84(float param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_2 = param_3;
  for (; param_1 < -180.0; param_1 = param_1 + 360.0) {
  }
  for (; 180.0 <= param_1; param_1 = param_1 + -360.0) {
  }
  param_2[1] = param_1;
  uVar2 = 0x3c8efa35;
  uVar1 = ___sincosf_stret(param_1 * 0.017453292);
  param_2[2] = uVar1;
  param_2[3] = 0;
  param_2[4] = uVar2;
  return;
}




bool FUN_100566c0c(float param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(*param_2 + 4);
  fVar1 = *(float *)(param_2[1] + 4);
  if (fVar1 <= fVar2) {
    if (0.0 <= param_1) {
      if (param_1 < fVar2) {
        return false;
      }
      fVar1 = fVar1 + 360.0;
    }
    else if (param_1 < fVar2 + -360.0) {
      return false;
    }
  }
  else if (param_1 < fVar2) {
    return false;
  }
  return param_1 <= fVar1;
}




bool FUN_100566c7c(float param_1,float param_2,float param_3)

{
  if (param_3 <= param_2) {
    if (0.0 <= param_1) {
      if (param_1 < param_2) {
        return false;
      }
      return param_1 <= param_3 + 360.0;
    }
    param_2 = param_2 + -360.0;
  }
  return param_2 <= param_1 && param_1 <= param_3;
}




float FUN_100566cd4(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1 + param_2) * 0.5;
  if (param_2 < param_1) {
    if (0.0 <= fVar1) {
      fVar2 = -180.0;
    }
    else {
      fVar2 = 180.0;
    }
    fVar1 = fVar1 + fVar2;
  }
  return fVar1;
}




float FUN_100566d10(float param_1,float param_2)

{
  if (param_2 < param_1) {
    param_1 = param_1 - param_2;
    param_2 = 360.0;
  }
  return param_2 - param_1;
}




float FUN_100566d2c(float param_1,float param_2)

{
  if (param_2 < param_1) {
    param_1 = param_1 - param_2;
    param_2 = 360.0;
  }
  param_2 = param_2 - param_1;
  if (180.0 < param_2) {
    param_2 = 360.0 - param_2;
  }
  return param_2;
}




ulong FUN_100566d64(float param_1,float param_2,long *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *param_3;
  lVar3 = param_3[1];
  fVar10 = *(float *)(lVar2 + 4);
  fVar11 = *(float *)(lVar3 + 4);
  if (fVar10 <= fVar11) {
    if (param_2 <= param_1) {
      bVar4 = false;
      bVar5 = false;
      if (fVar10 < 180.0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar11) && !NAN(param_1)) {
          bVar4 = fVar11 == param_1;
          bVar5 = param_1 <= fVar11;
        }
      }
      if (!bVar5 || bVar4) {
        lVar8 = 0;
      }
      else {
        if (param_4 != (float *)0x0) {
          if (fVar10 <= param_1) {
            fVar10 = param_1;
          }
          *param_4 = fVar10;
        }
        if (param_5 != (float *)0x0) {
          if (180.0 <= fVar11) {
            fVar11 = 180.0;
          }
          *param_5 = fVar11;
        }
        lVar8 = 1;
      }
      iVar9 = 0;
      fVar11 = *(float *)(lVar2 + 4);
      if (fVar11 < param_2) {
        fVar10 = *(float *)(lVar3 + 4);
        if (-180.0 < fVar10) {
          if (param_4 + lVar8 != (float *)0x0) {
            if (fVar11 <= -180.0) {
              fVar11 = -180.0;
            }
            param_4[lVar8] = fVar11;
          }
          if (param_5 + lVar8 != (float *)0x0) {
            if (param_2 <= fVar10) {
              fVar10 = param_2;
            }
            param_5[lVar8] = fVar10;
          }
          iVar9 = 1;
        }
      }
      return (ulong)(uint)(iVar9 + (int)lVar8);
    }
    bVar4 = false;
    bVar5 = false;
    if (fVar10 < param_2) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar11) && !NAN(param_1)) {
        bVar4 = fVar11 == param_1;
        bVar5 = param_1 <= fVar11;
      }
    }
    if (bVar5 && !bVar4) {
      if (param_4 != (float *)0x0) {
        if (fVar10 <= param_1) {
          fVar10 = param_1;
        }
        *param_4 = fVar10;
      }
      if (param_5 != (float *)0x0) {
        if (param_2 <= fVar11) {
          fVar11 = param_2;
        }
        *param_5 = fVar11;
        return 1;
      }
      return 1;
    }
    return 0;
  }
  if (param_1 < param_2) {
    bVar4 = false;
    bVar5 = false;
    if (param_1 < 180.0) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar10) && !NAN(param_2)) {
        bVar4 = fVar10 < param_2;
        bVar5 = false;
      }
    }
    if (bVar4 == bVar5) {
      uVar7 = 0;
    }
    else {
      if (param_4 != (float *)0x0) {
        if (fVar10 <= param_1) {
          fVar10 = param_1;
        }
        *param_4 = fVar10;
      }
      if (param_5 != (float *)0x0) {
        fVar11 = 180.0;
        if (param_2 <= 180.0) {
          fVar11 = param_2;
        }
        *param_5 = fVar11;
      }
      uVar7 = 1;
    }
    fVar11 = *(float *)(lVar3 + 4);
    bVar4 = false;
    bVar5 = false;
    if (-180.0 < param_2) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar11) && !NAN(param_1)) {
        bVar4 = fVar11 == param_1;
        bVar5 = param_1 <= fVar11;
      }
    }
    if (bVar5 && !bVar4) {
      if (param_4 + uVar7 != (float *)0x0) {
        fVar10 = -180.0;
        if (-180.0 <= param_1) {
          fVar10 = param_1;
        }
        param_4[uVar7] = fVar10;
      }
      if (param_5 + uVar7 != (float *)0x0) {
        if (param_2 <= fVar11) {
          fVar11 = param_2;
        }
        param_5[uVar7] = fVar11;
      }
      return (ulong)((int)uVar7 + 1);
    }
    return uVar7;
  }
  bVar4 = false;
  bVar5 = false;
  if (param_2 < fVar10) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar11) && !NAN(param_1)) {
      bVar4 = fVar11 < param_1;
      bVar5 = false;
    }
  }
  if (bVar4 != bVar5) {
    if (param_5 != (float *)0x0) {
      if (param_2 <= fVar11) {
        fVar11 = param_2;
      }
      *param_5 = fVar11;
    }
    if (param_4 != (float *)0x0) {
      if (fVar10 <= param_1) {
        fVar10 = param_1;
      }
      *param_4 = fVar10;
      return 1;
    }
    return 1;
  }
  if (param_1 < fVar11) {
    *param_4 = param_1;
    *param_5 = *(float *)(lVar3 + 4);
    param_4[1] = *(float *)(lVar2 + 4);
    param_5[1] = param_2;
    uVar6 = 1;
    if (param_4[1] != param_2) {
      uVar6 = 2;
    }
    return (ulong)uVar6;
  }
  *param_4 = fVar10;
  *param_5 = param_2;
  bVar4 = *param_4 != param_2;
  param_4[bVar4] = param_1;
  fVar11 = *(float *)(lVar3 + 4);
  param_5[bVar4] = fVar11;
  uVar6 = 2;
  if (!bVar4) {
    uVar6 = 1;
  }
  uVar1 = (uint)bVar4;
  if (param_4[bVar4] != fVar11) {
    uVar1 = uVar6;
  }
  return (ulong)uVar1;
}




undefined8
FUN_100566fb8(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
             float *param_6,float *param_7,float *param_8,float *param_9)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  bVar1 = false;
  bVar2 = false;
  if (param_3 < param_2) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1) && !NAN(param_4)) {
      bVar1 = param_1 < param_4;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    if (param_6 != (float *)0x0) {
      fVar3 = param_1;
      if (param_1 <= param_3) {
        fVar3 = param_3;
      }
      *param_6 = fVar3;
    }
    if (param_7 != (float *)0x0) {
      fVar3 = param_2;
      if (param_4 <= param_2) {
        fVar3 = param_4;
      }
      *param_7 = fVar3;
    }
    if (param_8 != (float *)0x0) {
      if (param_3 <= param_1) {
        param_1 = param_3;
      }
      *param_8 = param_1;
    }
    if (param_9 != (float *)0x0) {
      if (param_2 <= param_4) {
        param_2 = param_4;
      }
      *param_9 = param_2;
    }
    return 1;
  }
  return 0;
}




undefined8 FUN_100567014(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = 0x1f;
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)(param_3 + 4);
    fVar4 = (fVar2 + fVar3) * 0.5;
    if (fVar2 <= fVar3) {
      *(float *)(param_1 + 2) = fVar4;
    }
    else {
      if (0.0 <= fVar4) {
        fVar5 = -180.0;
      }
      else {
        fVar5 = 180.0;
      }
      *(float *)(param_1 + 2) = fVar4 + fVar5;
      fVar2 = fVar2 - fVar3;
      fVar3 = 360.0;
    }
    uVar1 = 0;
    *(float *)((long)param_1 + 0x14) = fVar3 - fVar2;
  }
  return uVar1;
}




undefined8 FUN_10056708c(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = 0x1f;
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    fVar2 = *(float *)(param_2 + 4);
    fVar4 = *(float *)(param_3 + 4);
    fVar5 = (fVar2 + fVar4) * 0.5;
    if (fVar2 <= fVar4) {
      *(float *)(param_1 + 2) = fVar5;
      fVar5 = fVar4 - fVar2;
    }
    else {
      if (0.0 <= fVar5) {
        fVar6 = -180.0;
      }
      else {
        fVar6 = 180.0;
      }
      *(float *)(param_1 + 2) = fVar5 + fVar6;
      fVar5 = 360.0 - (fVar2 - fVar4);
    }
    *(float *)((long)param_1 + 0x14) = fVar5;
    if (181.0 < fVar4 - fVar2) {
      return 0x1f;
    }
    if ((fVar4 < fVar2) && (fVar2 - fVar4 < 179.0)) {
      return 0x1f;
    }
    if ((fVar5 <= 179.0) && (0.0 < fVar5)) {
      fVar2 = 1.0 / (*(float *)(param_2 + 8) * *(float *)(param_3 + 0x10) -
                    *(float *)(param_2 + 0x10) * *(float *)(param_3 + 8));
      *(float *)(param_1 + 3) = fVar2;
      uVar3 = 0x3f800000;
      if (fVar2 <= 0.0) {
        uVar3 = 0xbf800000;
      }
      *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
      return 0;
    }
    uVar1 = 0;
    param_1[3] = 0;
  }
  return uVar1;
}




undefined8 FUN_1005671b4(float param_1,float param_2,long *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    uVar1 = 0x43;
  }
  else {
    lVar3 = param_3[1];
    if (lVar3 == 0) {
      uVar1 = 0x43;
    }
    else {
      fVar6 = *(float *)(param_3 + 3);
      fVar5 = 0.017453292;
      fVar4 = (float)___sincosf_stret(param_1 * 0.017453292);
      uVar1 = 0;
      if (fVar6 == 0.0) {
        fVar4 = fVar4 * *(float *)(lVar2 + 8) + fVar5 * *(float *)(lVar2 + 0x10);
        fVar6 = SQRT(2.0 - fVar4 * fVar4);
        *param_4 = *param_4 + (fVar6 + fVar4) * param_2 * 0.5;
        fVar6 = (fVar6 - fVar4) * param_2 * 0.5;
      }
      else {
        fVar6 = fVar6 * param_2;
        *param_4 = *param_4 +
                   fVar6 * (fVar4 * *(float *)(lVar3 + 0x10) - fVar5 * *(float *)(lVar3 + 8));
        fVar6 = fVar6 * (fVar5 * *(float *)(lVar2 + 8) - fVar4 * *(float *)(lVar2 + 0x10));
      }
      *param_5 = *param_5 + fVar6;
    }
  }
  return uVar1;
}




undefined8 FUN_1005672c4(float param_1,float param_2,long *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.017453292;
  fVar1 = (float)___sincosf_stret(param_1 * 0.017453292);
  fVar1 = fVar1 * *(float *)(*param_3 + 8) + fVar2 * *(float *)(*param_3 + 0x10);
  fVar2 = SQRT(2.0 - fVar1 * fVar1);
  *param_4 = *param_4 + (fVar2 + fVar1) * param_2 * 0.5;
  *param_5 = *param_5 + (fVar2 - fVar1) * param_2 * 0.5;
  return 0;
}




undefined8 FUN_10056736c(float param_1,float param_2,long *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    uVar1 = 0x43;
  }
  else {
    lVar3 = param_3[1];
    if (lVar3 == 0) {
      uVar1 = 0x43;
    }
    else {
      fVar6 = *(float *)(param_3 + 3);
      fVar5 = 0.017453292;
      fVar4 = (float)___sincosf_stret(param_1 * 0.017453292);
      uVar1 = 0;
      if (fVar6 == 0.0) {
        fVar4 = fVar4 * *(float *)(lVar2 + 8) + fVar5 * *(float *)(lVar2 + 0x10);
        fVar5 = SQRT(2.0 - fVar4 * fVar4);
        *param_4 = *param_4 + (fVar5 + fVar4) * param_2 * 0.5;
        fVar4 = (fVar5 - fVar4) * param_2 * 0.5;
      }
      else {
        fVar6 = fVar4 * *(float *)(lVar3 + 0x10) - fVar5 * *(float *)(lVar3 + 8);
        fVar4 = fVar5 * *(float *)(lVar2 + 8) - fVar4 * *(float *)(lVar2 + 0x10);
        param_2 = (*(float *)((long)param_3 + 0x1c) / SQRT(fVar6 * fVar6 + fVar4 * fVar4)) * param_2
        ;
        *param_4 = *param_4 + fVar6 * param_2;
        fVar4 = fVar4 * param_2;
      }
      *param_5 = *param_5 + fVar4;
    }
  }
  return uVar1;
}




float FUN_1005674a0(long param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x14) < 2) {
    return 360.0;
  }
  lVar1 = 0;
  pfVar2 = (float *)(*(long *)(param_1 + 0x28) + 0x14);
  fVar3 = 0.0;
  do {
    fVar4 = *pfVar2;
    if (*pfVar2 <= fVar3) {
      fVar4 = fVar3;
    }
    lVar1 = lVar1 + 1;
    pfVar2 = pfVar2 + 8;
    fVar3 = fVar4;
  } while (lVar1 < *(int *)(param_1 + 0x14));
  return fVar4;
}




void FUN_1005674e4(undefined1 param_1 [16],float param_2,undefined4 *param_3,long *param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  int local_31c;
  float local_318 [160];
  long local_98;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  *param_3 = 0;
  *(undefined8 *)(param_3 + 0x2a) = 0;
  param_3[0x2c] = 0;
  *(undefined8 *)(param_3 + 0x34) = 0;
  *(long *)(param_3 + 2) = 0;
  param_3[8] = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  local_98 = lVar9;
  _memset(param_3 + 10,0,0x7c);
  plVar10 = (long *)(param_3 + 0x2e);
  *plVar10 = 0;
  param_3[0x32] = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  uVar7 = *(uint *)(param_4 + 1);
  if (0x20 < uVar7) {
    uVar4 = 0x1f;
    goto LAB_100567984;
  }
  *param_3 = param_5;
  param_3[4] = uVar7;
  if (*param_4 == 0) {
LAB_1005675e0:
    if ((int)uVar7 < 1) {
      iVar3 = 0;
      param_3[0x2c] = 0;
    }
    else {
      lVar9 = 0;
      local_31c = 0;
      iVar8 = 0;
      iVar3 = 0;
      do {
        fVar12 = (float)lVar9;
        if (param_4[2] != 0) {
          switch(*(undefined4 *)(param_4[2] + lVar9 * 4)) {
          case 0:
            goto switchD_100567730_caseD_0;
          case 1:
            if (*(long *)(param_3 + 0x26) != 0) goto LAB_1005678f8;
            pfVar6 = (float *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),4,
                                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                            ,0x224,0);
            *(float **)(param_3 + 0x26) = pfVar6;
            if (pfVar6 == (float *)0x0) break;
            *pfVar6 = fVar12;
            goto LAB_100567814;
          case 2:
            lVar5 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                  *(undefined8 *)(param_3 + 0x2a),param_3[0x28] * 4 + 4,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                  ,0x231,0);
            *(long *)(param_3 + 0x2a) = lVar5;
            if (lVar5 != 0) {
              iVar2 = param_3[0x28];
              param_3[0x28] = iVar2 + 1;
LAB_100567810:
              *(float *)(lVar5 + (long)iVar2 * 4) = fVar12;
              goto LAB_100567814;
            }
            param_3[0x28] = 0;
            break;
          case 3:
            lVar5 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*plVar10,(iVar8 + 1) * 4
                                  ,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                  ,0x23e,0);
            *plVar10 = lVar5;
            if (lVar5 != 0) {
              *(float *)(lVar5 + (long)iVar8 * 4) = fVar12;
              iVar8 = iVar8 + 1;
              goto LAB_100567814;
            }
            break;
          case 4:
            lVar5 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                  *(undefined8 *)(param_3 + 0x30),(local_31c + 1) * 4,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                  ,0x24a,0);
            *(long *)(param_3 + 0x30) = lVar5;
            if (lVar5 != 0) {
              *(float *)(lVar5 + (long)local_31c * 4) = fVar12;
              local_31c = local_31c + 1;
              goto LAB_100567814;
            }
            break;
          default:
            lVar5 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                  *(undefined8 *)(param_3 + 0x34),param_3[0x32] * 4 + 4,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                  ,0x256,0);
            *(long *)(param_3 + 0x34) = lVar5;
            if (lVar5 != 0) {
              iVar2 = param_3[0x32];
              param_3[0x32] = iVar2 + 1;
              goto LAB_100567810;
            }
            param_3[0x32] = 0;
          }
          param_3[4] = 0;
          uVar4 = 0x26;
          lVar9 = *(long *)PTR____stack_chk_guard_101444218;
          goto LAB_100567984;
        }
switchD_100567730_caseD_0:
        if (param_4[3] == 0) {
LAB_1005678f8:
          param_3[4] = 0;
          uVar4 = 0x1f;
          lVar9 = *(long *)PTR____stack_chk_guard_101444218;
          goto LAB_100567984;
        }
        lVar5 = (long)iVar3;
        fVar11 = *(float *)(param_4[3] + lVar9 * 4);
        local_318[lVar5 * 5] = fVar12;
        for (; fVar11 < -180.0; fVar11 = fVar11 + 360.0) {
        }
        iVar3 = iVar3 + 1;
        for (; 180.0 <= fVar11; fVar11 = fVar11 + -360.0) {
        }
        local_318[lVar5 * 5 + 1] = fVar11;
        fVar12 = (float)___sincosf_stret(fVar11 * 0.017453292);
        local_318[lVar5 * 5 + 2] = fVar12;
        local_318[lVar5 * 5 + 3] = 0.0;
        local_318[lVar5 * 5 + 4] = param_2;
LAB_100567814:
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_3[4]);
      lVar9 = *(long *)PTR____stack_chk_guard_101444218;
      if (iVar8 != local_31c) {
        if (*plVar10 != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*plVar10,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                        ,0x264);
          *plVar10 = 0;
        }
        if (*(long *)(param_3 + 0x30) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_3 + 0x30),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                        ,0x265);
          *(undefined8 *)(param_3 + 0x30) = 0;
        }
        param_3[4] = 0;
        uVar4 = 0x1f;
        goto LAB_100567984;
      }
      param_3[0x2c] = local_31c;
      if ((iVar3 == 0) && (local_31c != 0)) {
        lVar5 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                              ,0x26f,0);
        *(long *)(param_3 + 10) = lVar5;
        if (lVar5 == 0) goto LAB_1005678ec;
        param_3[8] = 1;
        uVar1 = **(undefined4 **)(param_3 + 0x2e);
        param_3[0xd] = 0xc2b40000;
        param_3[0xe] = 0xbf800000;
        param_3[0xc] = uVar1;
        param_3[0xf] = 0;
        param_3[0x10] = 0xb33bbd2e;
        param_3[0x11] = **(undefined4 **)(param_3 + 0x30);
        param_3[0x12] = 0x42b40000;
        param_3[0x13] = 0x3f800000;
        param_3[0x14] = 0;
        param_3[0x15] = 0xb33bbd2e;
        FUN_10056708c(lVar5,param_3 + 0xc,param_3 + 0x11);
      }
    }
    uVar4 = FUN_100567a24(param_3,local_318,iVar3);
  }
  else {
    iVar3 = FUN_1005ecb6c();
    lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar3 + 1,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                          ,0x1fe,0,0);
    *(long *)(param_3 + 2) = lVar5;
    if (lVar5 != 0) {
      FUN_1005ecc98(lVar5,*param_4,iVar3 + 1);
      uVar7 = param_3[4];
      goto LAB_1005675e0;
    }
LAB_1005678ec:
    param_3[4] = 0;
    uVar4 = 0x26;
  }
LAB_100567984:
  if (lVar9 == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_1005679d4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  _memset(param_1 + 10,0,0x7c);
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}




long FUN_100567a24(long param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  float *pfVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3 * 0x14,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                          ,0x307,0);
    *(long *)(param_1 + 0x18) = lVar8;
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      lVar8 = 0x26;
    }
    else {
      *(int *)(param_1 + 0x14) = param_3;
      if (param_3 < 1) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        fVar17 = -360.0;
        do {
          bVar4 = false;
          fVar19 = 360.0;
          puVar12 = param_2;
          iVar13 = param_3;
          do {
            fVar22 = *(float *)((long)puVar12 + 4);
            bVar5 = false;
            bVar6 = true;
            bVar7 = false;
            if (fVar22 < fVar19) {
              bVar5 = false;
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar22) && !NAN(fVar17)) {
                bVar5 = fVar22 < fVar17;
                bVar6 = fVar22 == fVar17;
                bVar7 = false;
              }
            }
            if (!bVar6 && bVar5 == bVar7) {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 0x14);
              *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar12 + 2);
              uVar21 = *puVar12;
              puVar2[1] = puVar12[1];
              *puVar2 = uVar21;
              bVar4 = true;
              fVar19 = fVar22;
            }
            iVar13 = iVar13 + -1;
            puVar12 = (undefined8 *)((long)puVar12 + 0x14);
          } while (iVar13 != 0);
          if (!bVar4) {
            *(undefined4 *)(param_1 + 0x10) = 0;
            return 0x1f;
          }
          lVar8 = lVar8 + 1;
          fVar17 = fVar19;
        } while (lVar8 < param_3);
        iVar13 = *(int *)(param_1 + 0x14);
        if (iVar13 < 2) {
          lVar8 = 0;
        }
        else {
          *(int *)(param_1 + 0x20) = iVar13;
          lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar13 << 5,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                ,0x32e,0);
          *(long *)(param_1 + 0x28) = lVar8;
          if (lVar8 == 0) {
            *(undefined4 *)(param_1 + 0x20) = 0;
            lVar8 = 0x26;
          }
          else {
            uVar9 = (ulong)*(uint *)(param_1 + 0x20);
            if ((int)*(uint *)(param_1 + 0x20) < 1) {
              lVar8 = 0;
            }
            else {
              lVar15 = 0;
              puVar1 = (undefined4 *)(param_1 + 0x30);
              do {
                puVar11 = *(undefined4 **)(param_1 + 0x18);
                puVar14 = puVar11 + lVar15 * 5;
                puVar10 = puVar11;
                if ((int)lVar15 != (int)uVar9 + -1) {
                  puVar10 = puVar11 + lVar15 * 5 + 5;
                }
                pfVar16 = (float *)(puVar11 + lVar15 * 5 + 1);
                fVar17 = *pfVar16;
                fVar19 = (float)puVar10[1];
                if (fVar17 <= fVar19) {
                  fVar22 = fVar19 - fVar17;
                }
                else {
                  fVar22 = 360.0 - (fVar17 - fVar19);
                }
                if (fVar22 <= 180.0) {
                  lVar8 = FUN_10056708c(*(long *)(param_1 + 0x28) + lVar15 * 0x20,puVar14,puVar10);
                  if ((int)lVar8 != 0) {
                    return lVar8;
                  }
                  fVar17 = *pfVar16;
                }
                else {
                  fVar22 = (fVar17 + fVar19) * 0.5;
                  if (fVar19 < fVar17) {
                    if (0.0 <= fVar22) {
                      fVar22 = fVar22 + -180.0;
                    }
                    else {
                      fVar22 = fVar22 + 180.0;
                    }
                  }
                  *puVar1 = *puVar14;
                  for (fVar17 = fVar22 + -90.0; fVar17 < -180.0; fVar17 = fVar17 + 360.0) {
                  }
                  for (; 180.0 <= fVar17; fVar17 = fVar17 + -360.0) {
                  }
                  *(float *)(param_1 + 0x34) = fVar17;
                  uVar20 = 0x3c8efa35;
                  uVar18 = ___sincosf_stret(fVar17 * 0.017453292,lVar8);
                  *(undefined4 *)(param_1 + 0x38) = uVar18;
                  *(undefined4 *)(param_1 + 0x3c) = 0;
                  *(undefined4 *)(param_1 + 0x40) = uVar20;
                  *(undefined4 *)(param_1 + 0x44) = *puVar10;
                  for (fVar22 = fVar22 + 90.0; fVar22 < -180.0; fVar22 = fVar22 + 360.0) {
                  }
                  for (; 180.0 <= fVar22; fVar22 = fVar22 + -360.0) {
                  }
                  *(float *)(param_1 + 0x48) = fVar22;
                  uVar20 = 0x3c8efa35;
                  uVar18 = ___sincosf_stret(fVar22 * 0.017453292);
                  *(undefined4 *)(param_1 + 0x4c) = uVar18;
                  *(undefined4 *)(param_1 + 0x50) = 0;
                  *(undefined4 *)(param_1 + 0x54) = uVar20;
                  lVar8 = FUN_10056708c(*(long *)(param_1 + 0x28) + lVar15 * 0x20,puVar1,
                                        param_1 + 0x44);
                  if ((int)lVar8 != 0) {
                    return lVar8;
                  }
                  if (puVar14 == (undefined4 *)0x0) {
                    return 0x1f;
                  }
                  *(undefined4 **)(param_1 + 0x58) = puVar14;
                  *(undefined4 **)(param_1 + 0x60) = puVar1;
                  fVar17 = *pfVar16;
                  fVar19 = *(float *)(param_1 + 0x34);
                  fVar22 = (fVar17 + fVar19) * 0.5;
                  if (fVar17 <= fVar19) {
                    *(float *)(param_1 + 0x68) = fVar22;
                    fVar19 = fVar19 - fVar17;
                  }
                  else {
                    fVar23 = -180.0;
                    if (fVar22 < 0.0) {
                      fVar23 = 180.0;
                    }
                    *(float *)(param_1 + 0x68) = fVar22 + fVar23;
                    fVar19 = 360.0 - (fVar17 - fVar19);
                  }
                  *(float *)(param_1 + 0x6c) = fVar19;
                  if (puVar10 == (undefined4 *)0x0) {
                    return 0x1f;
                  }
                  *(long *)(param_1 + 0x70) = param_1 + 0x44;
                  *(undefined4 **)(param_1 + 0x78) = puVar10;
                  fVar19 = *(float *)(param_1 + 0x48);
                  fVar22 = (float)puVar10[1];
                  fVar23 = (fVar19 + fVar22) * 0.5;
                  if (fVar19 <= fVar22) {
                    *(float *)(param_1 + 0x80) = fVar23;
                    *(float *)(param_1 + 0x84) = fVar22 - fVar19;
                  }
                  else {
                    fVar3 = -180.0;
                    if (fVar23 < 0.0) {
                      fVar3 = 180.0;
                    }
                    *(float *)(param_1 + 0x80) = fVar23 + fVar3;
                    *(float *)(param_1 + 0x84) = 360.0 - (fVar19 - fVar22);
                  }
                }
                if ((fVar17 < 0.0) && (-90.0 <= fVar17)) {
                  puVar10 = *(undefined4 **)(param_1 + 0x88);
                  if (puVar10 != (undefined4 *)0x0) {
                    if (fVar17 <= -45.0) {
                      fVar19 = -45.0 - fVar17;
                    }
                    else {
                      fVar19 = 360.0 - (fVar17 + 45.0);
                    }
                    if (180.0 < fVar19) {
                      fVar19 = 360.0 - fVar19;
                    }
                    fVar22 = (float)puVar10[1];
                    if (fVar22 <= -45.0) {
                      fVar23 = -45.0 - fVar22;
                    }
                    else {
                      fVar23 = 360.0 - (fVar22 + 45.0);
                    }
                    if (180.0 < fVar23) {
                      fVar23 = 360.0 - fVar23;
                    }
                    if (fVar23 <= fVar19) {
                      if (fVar17 <= -45.0) {
                        fVar19 = -45.0 - fVar17;
                      }
                      else {
                        fVar19 = 360.0 - (fVar17 + 45.0);
                      }
                      if (180.0 < fVar19) {
                        fVar19 = 360.0 - fVar19;
                      }
                      if (fVar22 <= -45.0) {
                        fVar23 = -45.0 - fVar22;
                      }
                      else {
                        fVar23 = 360.0 - (fVar22 + 45.0);
                      }
                      if (180.0 < fVar23) {
                        fVar23 = 360.0 - fVar23;
                      }
                      if (fVar19 == fVar23) {
                        puVar11 = puVar14;
                        if (fVar17 <= fVar22) {
                          puVar11 = puVar10;
                        }
                        *(undefined4 **)(param_1 + 0x88) = puVar11;
                      }
                      goto LAB_100567ed4;
                    }
                  }
                  *(undefined4 **)(param_1 + 0x88) = puVar14;
                }
LAB_100567ed4:
                if ((0.0 < fVar17) && (fVar17 <= 90.0)) {
                  puVar10 = *(undefined4 **)(param_1 + 0x90);
                  if (puVar10 != (undefined4 *)0x0) {
                    if (fVar17 <= 45.0) {
                      fVar19 = 45.0 - fVar17;
                    }
                    else {
                      fVar19 = 360.0 - (fVar17 + -45.0);
                    }
                    if (180.0 < fVar19) {
                      fVar19 = 360.0 - fVar19;
                    }
                    fVar22 = (float)puVar10[1];
                    if (fVar22 <= 45.0) {
                      fVar23 = 45.0 - fVar22;
                    }
                    else {
                      fVar23 = 360.0 - (fVar22 + -45.0);
                    }
                    if (180.0 < fVar23) {
                      fVar23 = 360.0 - fVar23;
                    }
                    if (fVar23 <= fVar19) {
                      if (fVar17 <= 45.0) {
                        fVar19 = 45.0 - fVar17;
                      }
                      else {
                        fVar19 = 360.0 - (fVar17 + -45.0);
                      }
                      if (180.0 < fVar19) {
                        fVar19 = 360.0 - fVar19;
                      }
                      if (fVar22 <= 45.0) {
                        fVar23 = 45.0 - fVar22;
                      }
                      else {
                        fVar23 = 360.0 - (fVar22 + -45.0);
                      }
                      if (180.0 < fVar23) {
                        fVar23 = 360.0 - fVar23;
                      }
                      if (fVar19 == fVar23) {
                        if (fVar17 <= fVar22) {
                          puVar14 = puVar10;
                        }
                        *(undefined4 **)(param_1 + 0x90) = puVar14;
                      }
                      goto LAB_100567fa8;
                    }
                  }
                  *(undefined4 **)(param_1 + 0x90) = puVar14;
                }
LAB_100567fa8:
                lVar8 = 0;
                lVar15 = lVar15 + 1;
                uVar9 = (ulong)*(int *)(param_1 + 0x20);
              } while (lVar15 < (long)uVar9);
            }
          }
        }
      }
    }
  }
  return lVar8;
}




void FUN_100567fe4(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 *param_3,long param_4,
                  long param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  undefined8 *puVar19;
  int iVar20;
  ulong *puVar21;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int local_318;
  float local_314 [159];
  long local_98;
  
  lVar22 = *(long *)PTR____stack_chk_guard_101444218;
  *param_3 = 0;
  *(undefined8 *)(param_3 + 0x2a) = 0;
  param_3[0x2c] = 0;
  *(undefined8 *)(param_3 + 0x34) = 0;
  param_3[8] = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  local_98 = lVar22;
  _memset(param_3 + 10,0,0x7c);
  puVar21 = (ulong *)(param_3 + 0x2e);
  *puVar21 = 0;
  param_3[0x32] = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  if (param_4 == 0) {
    uVar5 = 0x1f;
    goto LAB_10056851c;
  }
  if (*(int *)(param_4 + 0x10) < 1) {
    uVar5 = 0x1f;
    goto LAB_10056851c;
  }
  param_3[4] = *(int *)(param_4 + 0x10);
  if (*(int *)(param_4 + 0xa0) == 0) {
LAB_100568178:
    if (*(int *)(param_4 + 0xb0) == 0) goto LAB_100568334;
    uVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_4 + 0xb0) << 2,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                          ,0x2a7,0,0);
    *puVar21 = uVar3;
    if (uVar3 != 0) {
      uVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_4 + 0xb0) << 2,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                            ,0x2ae,0,0);
      *(ulong *)(param_3 + 0x30) = uVar3;
      if (uVar3 != 0) {
        iVar2 = *(int *)(param_4 + 0xb0);
        uVar8 = (ulong)iVar2;
        param_3[0x2c] = iVar2;
        if (0 < iVar2) {
          uVar11 = *puVar21;
          uVar12 = *(ulong *)(param_4 + 0xb8);
          uVar13 = *(ulong *)(param_4 + 0xc0);
          uVar10 = 0;
          if (iVar2 != 0) {
            if ((uVar8 & 0xfffffffffffffff8) != 0) {
              lVar17 = uVar8 * 4 + -4;
              uVar16 = uVar11 + lVar17;
              uVar6 = (uVar3 + uVar8 * 4) - 4;
              if ((((uVar6 < uVar11 || uVar16 < uVar3) &&
                   (uVar12 + lVar17 < uVar11 || uVar16 < uVar12)) &&
                  (uVar13 + lVar17 < uVar11 || uVar16 < uVar13)) &&
                 ((uVar12 + lVar17 < uVar3 || uVar6 < uVar12 &&
                  (uVar13 + lVar17 < uVar3 || uVar6 < uVar13)))) {
                uVar16 = uVar8 & 0xfffffffffffffff8;
                puVar14 = (undefined8 *)(uVar3 + 0x10);
                puVar19 = (undefined8 *)(uVar11 + 0x10);
                pauVar15 = (undefined1 (*) [16])(uVar12 + 0x10);
                pauVar18 = (undefined1 (*) [16])(uVar13 + 0x10);
                do {
                  auVar24 = *pauVar15;
                  auVar25 = pauVar15[-1];
                  auVar26 = NEON_ext(auVar24,auVar24,8,1);
                  puVar19[1] = auVar26._0_8_;
                  puVar19[-2] = auVar25._0_8_;
                  auVar25 = NEON_ext(auVar25,auVar25,8,1);
                  *puVar19 = auVar24._0_8_;
                  puVar19[-1] = auVar25._0_8_;
                  auVar24 = pauVar18[-1];
                  auVar25 = *pauVar18;
                  puVar14[-2] = auVar24._0_8_;
                  auVar24 = NEON_ext(auVar24,auVar24,8,1);
                  *puVar14 = auVar25._0_8_;
                  param_2 = NEON_ext(auVar25,auVar25,8,1);
                  puVar14[-1] = auVar24._0_8_;
                  puVar14[1] = param_2._0_8_;
                  uVar16 = uVar16 - 8;
                  puVar14 = puVar14 + 4;
                  puVar19 = puVar19 + 4;
                  pauVar15 = pauVar15 + 2;
                  uVar10 = uVar8 & 0xfffffffffffffff8;
                  pauVar18 = pauVar18 + 2;
                } while (uVar16 != 0);
              }
            }
            if (uVar8 == uVar10) goto LAB_100568334;
          }
          do {
            lVar17 = uVar10 * 4;
            *(undefined4 *)(uVar11 + lVar17) = *(undefined4 *)(uVar12 + lVar17);
            *(undefined4 *)(uVar3 + lVar17) = *(undefined4 *)(uVar13 + lVar17);
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)uVar8);
        }
LAB_100568334:
        if (((*(int **)(param_4 + 0x98) != (int *)0x0) &&
            (iVar2 = **(int **)(param_4 + 0x98), -1 < iVar2)) &&
           ((param_5 == 0 || (*(char *)(param_5 + iVar2) != '\0')))) {
          puVar4 = (undefined4 *)
                   FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),4,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                 ,0x2bf,0);
          *(undefined4 **)(param_3 + 0x26) = puVar4;
          if (puVar4 == (undefined4 *)0x0) goto LAB_100568514;
          if (*(undefined4 **)(param_4 + 0x98) == (undefined4 *)0x0) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = **(undefined4 **)(param_4 + 0x98);
          }
          *puVar4 = uVar7;
        }
        iVar2 = *(int *)(param_4 + 0x14);
        if (iVar2 < 1) {
          iVar20 = 0;
        }
        else {
          lVar22 = 0;
          iVar20 = 0;
          lVar17 = *(long *)(param_4 + 0x18);
          do {
            iVar1 = *(int *)(lVar17 + lVar22 * 0x14);
            if ((param_5 == 0) || (*(char *)(param_5 + iVar1) != '\0')) {
              lVar9 = (long)iVar20;
              fVar23 = *(float *)(lVar17 + lVar22 * 0x14 + 4);
              (&local_318)[lVar9 * 5] = iVar1;
              for (; fVar23 < -180.0; fVar23 = fVar23 + 360.0) {
              }
              iVar20 = iVar20 + 1;
              for (; 180.0 <= fVar23; fVar23 = fVar23 + -360.0) {
              }
              local_314[lVar9 * 5] = fVar23;
              fVar23 = (float)___sincosf_stret();
              local_314[lVar9 * 5 + 1] = fVar23;
              local_314[lVar9 * 5 + 2] = 0.0;
              local_314[lVar9 * 5 + 3] = param_2._0_4_;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < iVar2);
        }
        lVar22 = *(long *)PTR____stack_chk_guard_101444218;
        if ((iVar20 == 0) && (param_3[0x2c] != 0)) {
          lVar17 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                                 ,0x2d6,0);
          *(long *)(param_3 + 10) = lVar17;
          if (lVar17 == 0) goto LAB_100568514;
          param_3[8] = 1;
          uVar7 = **(undefined4 **)(param_3 + 0x2e);
          param_3[0xd] = 0xc2b40000;
          param_3[0xe] = 0xbf800000;
          param_3[0xc] = uVar7;
          param_3[0xf] = 0;
          param_3[0x10] = 0xb33bbd2e;
          param_3[0x11] = **(undefined4 **)(param_3 + 0x30);
          param_3[0x12] = 0x42b40000;
          param_3[0x13] = 0x3f800000;
          param_3[0x14] = 0;
          param_3[0x15] = 0xb33bbd2e;
          FUN_10056708c(lVar17,param_3 + 0xc,param_3 + 0x11);
        }
        uVar5 = FUN_100567a24(param_3,&local_318,iVar20);
        goto LAB_10056851c;
      }
    }
  }
  else {
    uVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_4 + 0xa0) << 2,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp"
                          ,0x297,0,0);
    *(ulong *)(param_3 + 0x2a) = uVar3;
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_4 + 0xa0);
      uVar8 = (ulong)iVar2;
      param_3[0x28] = iVar2;
      if (0 < iVar2) {
        uVar10 = *(ulong *)(param_4 + 0xa8);
        if (iVar2 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar8 & 0xfffffffffffffff8;
          if (uVar12 == 0) {
            uVar12 = 0;
          }
          else if ((uVar10 + uVar8 * 4) - 4 < uVar3 || (uVar3 + uVar8 * 4) - 4 < uVar10) {
            uVar13 = uVar8 & 0xfffffffffffffff8;
            puVar14 = (undefined8 *)(uVar3 + 0x10);
            pauVar15 = (undefined1 (*) [16])(uVar10 + 0x10);
            do {
              auVar24 = pauVar15[-1];
              param_2 = *pauVar15;
              puVar14[-2] = auVar24._0_8_;
              auVar24 = NEON_ext(auVar24,auVar24,8,1);
              puVar14[-1] = auVar24._0_8_;
              *puVar14 = param_2._0_8_;
              auVar24 = NEON_ext(param_2,param_2,8,1);
              puVar14[1] = auVar24._0_8_;
              uVar13 = uVar13 - 8;
              puVar14 = puVar14 + 4;
              pauVar15 = pauVar15 + 2;
            } while (uVar13 != 0);
          }
          else {
            uVar12 = 0;
          }
          if (uVar8 == uVar12) goto LAB_100568178;
        }
        do {
          *(undefined4 *)(uVar3 + uVar12 * 4) = *(undefined4 *)(uVar10 + uVar12 * 4);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)uVar8);
      }
      goto LAB_100568178;
    }
  }
LAB_100568514:
  param_3[4] = 0;
  uVar5 = 0x26;
LAB_10056851c:
  if (lVar22 == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}




undefined8 FUN_100568558(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x28),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  0x380);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x18),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  0x381);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x98),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  0x382);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xa8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  899);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xb8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  900);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xc0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  0x385);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xd0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  0x386);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                  0x387);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return 0;
}




undefined8 FUN_1005686f0(undefined8 param_1)

{
  FUN_100568558();
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pan.cpp",
                0x3a4);
  return 0;
}




undefined8 FUN_100568738(int param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      if (0 < param_1) {
        _bzero((void *)(param_4 + (long)iVar1 * 4),(ulong)(param_1 - 1) * 4 + 4);
      }
      param_2 = param_2 + -1;
      iVar1 = iVar1 + param_3;
    } while (param_2 != 0);
  }
  return 0;
}




undefined8 FUN_1005687ac(float param_1,float param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_3 + 0xa0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_3 + 0xb0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_3 + 0x14);
      if ((iVar1 != 0) && (0 < iVar1)) {
        lVar2 = 0;
        piVar4 = *(int **)(param_3 + 0x18);
        do {
          *(float *)(param_4 + (long)*piVar4 * 4) =
               param_2 / SQRT((float)iVar1) + *(float *)(param_4 + (long)*piVar4 * 4);
          lVar2 = lVar2 + 1;
          piVar4 = piVar4 + 5;
        } while (lVar2 < iVar1);
      }
    }
    else if (0 < iVar1) {
      lVar2 = 0;
      lVar3 = *(long *)(param_3 + 0xb8);
      lVar5 = *(long *)(param_3 + 0xc0);
      do {
        lVar6 = (long)*(int *)(lVar3 + lVar2 * 4) * 4;
        *(float *)(param_4 + lVar6) = param_2 / 1.4142135 + *(float *)(param_4 + lVar6);
        lVar6 = (long)*(int *)(lVar5 + lVar2 * 4) * 4;
        *(float *)(param_4 + lVar6) = param_2 / 1.4142135 + *(float *)(param_4 + lVar6);
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  else if (0 < iVar1) {
    lVar2 = 0;
    lVar3 = *(long *)(param_3 + 0xa8);
    do {
      lVar5 = (long)*(int *)(lVar3 + lVar2 * 4) * 4;
      *(float *)(param_4 + lVar5) = *(float *)(param_4 + lVar5) + param_2;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  if ((*(int **)(param_3 + 0x98) != (int *)0x0) && (iVar1 = **(int **)(param_3 + 0x98), -1 < iVar1))
  {
    lVar2 = (long)iVar1 * 4;
    *(float *)(param_4 + lVar2) = param_1 * param_2 + *(float *)(param_4 + lVar2);
  }
  return 0;
}




void FUN_1005688b8(ulong param_1,float param_2,ulong param_3,long param_4,int param_5,int param_6,
                  long param_7)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  float *pfVar16;
  long *plVar17;
  long lVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_138 [36];
  long local_a8;
  
  lVar18 = *(long *)PTR____stack_chk_guard_101444218;
  iVar9 = *(int *)(param_4 + 0x14);
  fVar21 = (float)param_3;
  local_a8 = lVar18;
  if (iVar9 == 1) {
    uVar5 = **(int **)(param_4 + 0x18) * param_6;
    uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    *(float *)(param_7 + uVar10) = *(float *)(param_7 + uVar10) + fVar21;
    goto LAB_10056893c;
  }
  fVar24 = (float)param_1;
  while (fVar25 = (float)param_1, fVar24 < -180.0) {
    fVar24 = fVar25 + 360.0;
    param_1 = (ulong)(uint)fVar24;
  }
  while (fVar24 = (float)param_1, 180.0 <= fVar25) {
    fVar25 = fVar24 + -360.0;
    param_1 = (ulong)(uint)fVar25;
  }
  if (iVar9 == 0) {
    iVar9 = *(int *)(param_4 + 0xb0);
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_4 + 0xa0);
      if (0 < iVar9) {
        lVar11 = 0;
        lVar12 = *(long *)(param_4 + 0xa8);
        do {
          uVar5 = *(int *)(lVar12 + lVar11 * 4) * param_6;
          uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
          *(float *)(param_7 + uVar10) = *(float *)(param_7 + uVar10) + fVar21;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar9);
      }
    }
    else {
      if (param_2 == 0.0) {
        fVar25 = 1.0;
      }
      else {
        fVar20 = (param_2 / 360.0) * 3.1415927;
        fVar25 = (float)_sinf(fVar20);
        fVar25 = fVar25 / fVar20;
      }
      fVar24 = (float)_sinf((fVar24 / 180.0) * 3.1415927);
      plVar17 = *(long **)(param_4 + 0x28);
      fVar24 = (float)_asinf(fVar25 * fVar24);
      lVar11 = *plVar17;
      if ((lVar11 == 0) || (lVar12 = plVar17[1], lVar12 == 0)) {
        fVar24 = 0.0;
        fVar21 = 0.0;
      }
      else {
        fVar22 = *(float *)(plVar17 + 3);
        fVar20 = 0.017453292;
        fVar25 = (float)___sincosf_stret((fVar24 / 3.1415927) * 180.0 * 0.017453292);
        if (fVar22 == 0.0) {
          fVar25 = fVar25 * *(float *)(lVar11 + 8) + fVar20 * *(float *)(lVar11 + 0x10);
          fVar20 = SQRT(2.0 - fVar25 * fVar25);
          fVar24 = (fVar20 + fVar25) * fVar21 * 0.5 + 0.0;
          fVar21 = (fVar20 - fVar25) * fVar21 * 0.5 + 0.0;
        }
        else {
          fVar22 = fVar22 * fVar21;
          fVar24 = fVar22 * (fVar25 * *(float *)(lVar12 + 0x10) - fVar20 * *(float *)(lVar12 + 8)) +
                   0.0;
          fVar21 = fVar22 * (fVar20 * *(float *)(lVar11 + 8) - fVar25 * *(float *)(lVar11 + 0x10)) +
                   0.0;
        }
      }
      if (0 < iVar9) {
        lVar11 = 0;
        lVar12 = *(long *)(param_4 + 0xb8);
        lVar15 = *(long *)(param_4 + 0xc0);
        do {
          uVar5 = *(int *)(lVar12 + lVar11 * 4) * param_6;
          uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
          *(float *)(param_7 + uVar10) = fVar24 + *(float *)(param_7 + uVar10);
          uVar5 = *(int *)(lVar15 + lVar11 * 4) * param_6;
          uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
          lVar11 = lVar11 + 1;
          *(float *)(param_7 + uVar10) = fVar21 + *(float *)(param_7 + uVar10);
        } while (lVar11 < iVar9);
      }
    }
    goto LAB_10056893c;
  }
  if (360.0 <= param_2) {
    if (0 < iVar9) {
      lVar11 = 0;
      piVar13 = *(int **)(param_4 + 0x18);
      do {
        uVar10 = -(ulong)((uint)(*piVar13 * param_6) >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(uint)(*piVar13 * param_6) << 2;
        *(float *)(param_7 + uVar10) = fVar21 / SQRT((float)iVar9) + *(float *)(param_7 + uVar10);
        lVar11 = lVar11 + 1;
        piVar13 = piVar13 + 5;
      } while (lVar11 < iVar9);
    }
    goto LAB_10056893c;
  }
  if (param_2 <= 0.0) {
    if (0 < iVar9) {
      lVar11 = 0;
      puVar14 = (undefined8 *)(*(long *)(param_4 + 0x28) + 8);
      do {
        fVar25 = (float)((int *)puVar14[-1])[1];
        fVar20 = (float)((int *)*puVar14)[1];
        if (fVar20 <= fVar25) {
          if (0.0 <= fVar24) {
            fVar20 = fVar20 + 360.0;
          }
          else {
            fVar25 = fVar25 + -360.0;
          }
        }
        bVar7 = true;
        bVar8 = false;
        if (fVar25 <= fVar24) {
          bVar7 = false;
          bVar8 = true;
          if (!NAN(fVar20) && !NAN(fVar24)) {
            bVar7 = fVar20 < fVar24;
            bVar8 = false;
          }
        }
        if (bVar7 == bVar8) {
          if (param_5 == 0) {
            FUN_1005671b4(param_1,param_3,*(long *)(param_4 + 0x28) + lVar11 * 0x20,
                          param_7 + (long)(*(int *)puVar14[-1] * param_6) * 4,
                          param_7 + (long)(*(int *)*puVar14 * param_6) * 4);
            return;
          }
          FUN_10056736c(param_1,param_3);
          return;
        }
        lVar11 = lVar11 + 1;
        puVar14 = puVar14 + 4;
      } while (lVar11 < iVar9);
    }
    lVar12 = *(long *)(param_4 + 0x58);
    lVar11 = -1;
    plVar17 = (long *)(param_4 + 0x60);
    while( true ) {
      if (lVar12 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = (ulong)(*(long *)(param_4 + 0x60) != 0) << 1;
      }
      lVar11 = lVar11 + 1;
      if (lVar15 <= lVar11) break;
      plVar2 = plVar17 + 3;
      plVar1 = plVar17 + -1;
      fVar25 = (float)((int *)*plVar1)[1];
      fVar20 = *(float *)(*plVar17 + 4);
      if (fVar20 <= fVar25) {
        if (0.0 <= fVar24) {
          fVar20 = fVar20 + 360.0;
        }
        else {
          fVar25 = fVar25 + -360.0;
        }
      }
      bVar7 = true;
      bVar8 = false;
      if (fVar25 <= fVar24) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar20) && !NAN(fVar24)) {
          bVar7 = fVar20 < fVar24;
          bVar8 = false;
        }
      }
      plVar17 = plVar2;
      if (bVar7 == bVar8) {
        uVar5 = *(int *)*plVar1 * param_6;
        uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        *(float *)(param_7 + uVar10) = *(float *)(param_7 + uVar10) + fVar21;
      }
    }
    goto LAB_10056893c;
  }
  _bzero(local_138 + 4,(long)*(int *)(param_4 + 0x10) << 2);
  for (fVar25 = fVar24 - param_2 * 0.5; fVar25 < -180.0; fVar25 = fVar25 + 360.0) {
  }
  for (; 180.0 <= fVar25; fVar25 = fVar25 + -360.0) {
  }
  for (fVar24 = param_2 * 0.5 + fVar24; fVar24 < -180.0; fVar24 = fVar24 + 360.0) {
  }
  for (; 180.0 <= fVar24; fVar24 = fVar24 + -360.0) {
  }
  if (iVar9 < 1) {
LAB_100568b58:
    puVar14 = (undefined8 *)(param_4 + 0x40);
    lVar11 = -1;
    do {
      if (*(long *)(param_4 + 0x58) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (ulong)(*(long *)(param_4 + 0x60) != 0) << 1;
      }
      lVar11 = lVar11 + 1;
      if (lVar12 <= lVar11) goto LAB_100568bcc;
      puVar14 = puVar14 + 3;
      iVar9 = FUN_100566d64(fVar25,fVar24,puVar14,0,0);
    } while (iVar9 == 0);
    local_138[(long)*(int *)*puVar14 + 4] = local_138[(long)*(int *)*puVar14 + 4] + 1.0;
  }
  else {
    lVar18 = 0;
    bVar7 = false;
    do {
      iVar9 = FUN_100566d64(fVar25,fVar24,*(long *)(param_4 + 0x28) + lVar18 * 0x20,local_138 + 2,
                            local_138);
      if ((iVar9 != 0) && (0 < iVar9)) {
        lVar11 = *(long *)(param_4 + 0x28);
        puVar14 = (undefined8 *)(lVar11 + lVar18 * 0x20);
        iVar3 = *(int *)*puVar14;
        iVar4 = *(int *)puVar14[1];
        pfVar19 = local_138;
        pfVar16 = local_138 + 2;
        while( true ) {
          fVar22 = *pfVar16;
          fVar23 = *pfVar19;
          fVar20 = (fVar22 + fVar23) * 0.5;
          if (fVar22 <= fVar23) {
            fVar23 = fVar23 - fVar22;
          }
          else {
            fVar6 = -180.0;
            if (fVar20 < 0.0) {
              fVar6 = 180.0;
            }
            fVar20 = fVar20 + fVar6;
            fVar23 = 360.0 - (fVar22 - fVar23);
          }
          FUN_10056736c(fVar20,fVar23 / *(float *)(lVar11 + lVar18 * 0x20 + 0x14),
                        lVar11 + lVar18 * 0x20,local_138 + (long)iVar3 + 4,
                        local_138 + (long)iVar4 + 4);
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) break;
          pfVar19 = pfVar19 + 1;
          pfVar16 = pfVar16 + 1;
          lVar11 = *(long *)(param_4 + 0x28);
        }
        bVar7 = true;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_4 + 0x14));
    lVar18 = *(long *)PTR____stack_chk_guard_101444218;
    if (!bVar7) goto LAB_100568b58;
  }
LAB_100568bcc:
  if (param_5 != 0) {
    if (*(int *)(param_4 + 0x14) < 1) {
      fVar24 = 0.0;
    }
    else {
      lVar11 = 0;
      fVar24 = 0.0;
      piVar13 = *(int **)(param_4 + 0x18);
      do {
        fVar24 = fVar24 + local_138[(long)*piVar13 + 4] * local_138[(long)*piVar13 + 4];
        lVar11 = lVar11 + 1;
        piVar13 = piVar13 + 5;
      } while (lVar11 < *(int *)(param_4 + 0x14));
    }
    if ((fVar24 < 0.999999) || (1.000001 < fVar24)) {
      param_3 = (ulong)(uint)(fVar21 / SQRT(fVar24));
    }
  }
  fVar21 = (float)param_3;
  iVar9 = *(int *)(param_4 + 0x14);
  if ((fVar21 < 0.999999) || (1.000001 < fVar21)) {
    if (0 < iVar9) {
      lVar11 = 0;
      piVar13 = *(int **)(param_4 + 0x18);
      do {
        uVar5 = *piVar13 * param_6;
        uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        *(float *)(param_7 + uVar10) =
             *(float *)(param_7 + uVar10) + fVar21 * local_138[(long)*piVar13 + 4];
        lVar11 = lVar11 + 1;
        piVar13 = piVar13 + 5;
      } while (lVar11 < iVar9);
    }
  }
  else if (0 < iVar9) {
    lVar11 = 0;
    piVar13 = *(int **)(param_4 + 0x18);
    do {
      uVar5 = *piVar13 * param_6;
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      *(float *)(param_7 + uVar10) = local_138[(long)*piVar13 + 4] + *(float *)(param_7 + uVar10);
      lVar11 = lVar11 + 1;
      piVar13 = piVar13 + 5;
    } while (lVar11 < iVar9);
  }
LAB_10056893c:
  if (lVar18 == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_100569090(float param_1,float param_2,float param_3,long param_4,int param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float local_188 [64];
  long local_88;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  local_88 = lVar9;
  fVar10 = (float)_cosf(((param_1 + 100.0) * 3.1415927) / 400.0);
  fVar10 = fVar10 * param_3;
  fVar11 = (float)_cosf(((100.0 - param_1) * 3.1415927) / 400.0);
  fVar11 = fVar11 * param_3;
  if (*(int **)(param_4 + 0x98) != (int *)0x0) {
    iVar2 = **(int **)(param_4 + 0x98);
    if (-1 < iVar2) {
      *(float *)(param_6 + (long)iVar2 * 4) =
           fVar10 * param_2 + *(float *)(param_6 + (long)iVar2 * 4);
      uVar3 = -(ulong)((uint)(iVar2 + param_5) >> 0x1f) & 0xfffffffc00000000 |
              (ulong)(uint)(iVar2 + param_5) << 2;
      *(float *)(param_6 + uVar3) = fVar11 * param_2 + *(float *)(param_6 + uVar3);
    }
  }
  iVar2 = *(int *)(param_4 + 0xb0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_4 + 0xa0);
    if (iVar2 == 0) {
      if (*(int *)(param_4 + 0x14) == 1) {
        iVar2 = **(int **)(param_4 + 0x18);
        lVar5 = (long)iVar2 * 4;
        *(float *)(param_6 + lVar5) = fVar10 + *(float *)(param_6 + lVar5);
        uVar1 = iVar2 + param_5;
        uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        *(float *)(param_6 + uVar3) = fVar11 + *(float *)(param_6 + uVar3);
      }
      else if (1 < *(int *)(param_4 + 0x14)) {
        _memset(local_188,0,0x100);
        FUN_1005688b8(0xc2b40000,0x43340000,fVar10 * 1.4142135,param_4,1,2,local_188);
        FUN_1005688b8(0x42b40000,0x43340000,fVar11 * 1.4142135,param_4,1,2,local_188 + 1);
        iVar2 = *(int *)(param_4 + 0x10);
        if (0 < iVar2) {
          iVar4 = 0;
          lVar6 = 0;
          lVar5 = param_6 + (long)param_5 * 4;
          do {
            lVar7 = lVar6 * 4;
            *(float *)(param_6 + lVar7) = local_188[iVar4] + *(float *)(param_6 + lVar7);
            *(float *)(lVar5 + lVar7) = local_188[iVar4 + 1] + *(float *)(lVar5 + lVar7);
            lVar6 = lVar6 + 1;
            iVar4 = iVar4 + 2;
          } while (lVar6 < iVar2);
        }
      }
    }
    else if (0 < iVar2) {
      lVar5 = 0;
      lVar6 = *(long *)(param_4 + 0xa8);
      do {
        iVar4 = *(int *)(lVar6 + lVar5 * 4);
        lVar7 = (long)iVar4 * 4;
        *(float *)(param_6 + lVar7) = fVar10 + *(float *)(param_6 + lVar7);
        uVar1 = iVar4 + param_5;
        uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        *(float *)(param_6 + uVar3) = fVar11 + *(float *)(param_6 + uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar5 = 0;
    lVar6 = *(long *)(param_4 + 0xb8);
    lVar7 = *(long *)(param_4 + 0xc0);
    do {
      lVar8 = (long)*(int *)(lVar6 + lVar5 * 4) * 4;
      *(float *)(param_6 + lVar8) = fVar10 * 1.4142135 + *(float *)(param_6 + lVar8);
      uVar1 = *(int *)(lVar7 + lVar5 * 4) + param_5;
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      *(float *)(param_6 + uVar3) = fVar11 * 1.4142135 + *(float *)(param_6 + uVar3);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if (lVar9 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}




undefined8
FUN_100569350(undefined4 param_1,undefined4 param_2,float param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  FUN_1005688b8(param_1,param_2,param_4,param_5,1,param_6,param_7);
  if ((*(int **)(param_5 + 0x98) != (int *)0x0) && (iVar1 = **(int **)(param_5 + 0x98), -1 < iVar1))
  {
    uVar2 = iVar1 * (int)param_6;
    uVar3 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    *(float *)(param_7 + uVar3) = param_3 * (float)param_4 + *(float *)(param_7 + uVar3);
  }
  return 0;
}




void FUN_1005693cc(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  FUN_1005688b8((param_4 / 360.0) * param_1 + param_3,(param_4 / 360.0) * param_2,
                (param_2 / 180.0) * param_5);
  return;
}




undefined8
FUN_1005693f8(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
             long param_6,ulong param_7,float *param_8)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  float fVar15;
  float fVar16;
  float local_108 [32];
  long local_88;
  
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  fVar15 = (float)param_5;
  local_88 = lVar10;
  if ((*(int *)(param_6 + 0x14) == 0) && (*(int *)(param_6 + 0xb0) == 0)) {
    iVar2 = *(int *)(param_6 + 0xa0);
    if (0 < iVar2) {
      lVar8 = 0;
      lVar6 = *(long *)(param_6 + 0xa8);
      do {
        pfVar5 = param_8 + *(int *)(lVar6 + lVar8 * 4) * (int)param_7;
        *pfVar5 = fVar15 / 1.4142135 + *pfVar5;
        pfVar5[1] = fVar15 / 1.4142135 + pfVar5[1];
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar2);
    }
  }
  else {
    for (param_3 = param_3 - param_1; param_3 < -180.0; param_3 = param_3 + 360.0) {
    }
    for (; 180.0 <= param_3; param_3 = param_3 + -360.0) {
    }
    if (0.0 <= param_3) {
      FUN_1005688b8(SUB41((param_3 + -90.0) * (param_2 / 360.0) + param_1,0),
                    (param_2 / 360.0) * 180.0,param_5,param_6,1,param_7,param_8);
    }
    else {
      iVar2 = *(int *)(param_6 + 0x10);
      if (0 < iVar2) {
        uVar1 = (ulong)(iVar2 - 1) + 1;
        uVar4 = uVar1 & 0x1fffffffe;
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          lVar8 = 0;
          uVar9 = (ulong)(iVar2 - 1) + 1 & 0xfffffffffffffffe;
          do {
            local_108[lVar8 >> 0x20] = 0.0;
            *(undefined4 *)((long)local_108 + ((lVar8 >> 0x20) * 4 | 4U)) = 0;
            uVar9 = uVar9 - 2;
            lVar8 = lVar8 + 0x200000000;
          } while (uVar9 != 0);
        }
        if (uVar1 != uVar4) {
          iVar2 = iVar2 - (int)uVar4;
          lVar8 = uVar4 << 0x20;
          do {
            local_108[lVar8 >> 0x20] = 0.0;
            iVar2 = iVar2 + -1;
            lVar8 = lVar8 + 0x100000000;
          } while (iVar2 != 0);
        }
      }
      fVar16 = param_2 / 360.0;
      FUN_1005688b8(SUB41((param_3 + -180.0) * 0.5 * fVar16 + param_1,0),(param_3 + 180.0) * fVar16,
                    ((param_3 + 180.0) / 180.0) * fVar15,param_6,0,1,local_108);
      FUN_1005688b8(SUB41((param_3 * 0.5 + 180.0) * fVar16 + param_1,0),fVar16 * -param_3,
                    (-param_3 / 180.0) * fVar15,param_6,0,1,local_108);
      iVar2 = *(int *)(param_6 + 0x10);
      if (0 < iVar2) {
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        pfVar5 = local_108;
        iVar3 = iVar2;
        do {
          fVar16 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))) +
                   *pfVar5 * *pfVar5;
          uVar11 = SUB41(fVar16,0);
          uVar12 = (undefined1)((uint)fVar16 >> 8);
          uVar13 = (undefined1)((uint)fVar16 >> 0x10);
          uVar14 = (undefined1)((uint)fVar16 >> 0x18);
          iVar3 = iVar3 + -1;
          pfVar5 = pfVar5 + 1;
        } while (iVar3 != 0);
        if (fVar16 != 0.0) {
          pfVar7 = local_108;
          pfVar5 = param_8;
          do {
            *pfVar5 = *pfVar5 + (fVar15 / SQRT(fVar16)) * *pfVar7;
            iVar2 = iVar2 + -1;
            pfVar5 = (float *)((long)pfVar5 +
                              (-(param_7 >> 0x1f & 1) & 0xfffffffc00000000 |
                              (param_7 & 0xffffffff) << 2));
            pfVar7 = pfVar7 + 1;
          } while (iVar2 != 0);
        }
      }
    }
    if (param_3 <= 0.0) {
      FUN_1005688b8(SUB41((param_3 + 90.0) * (param_2 / 360.0) + param_1,0),
                    (param_2 / 360.0) * 180.0,param_5,param_6,1,param_7,param_8 + 1);
    }
    else {
      iVar2 = *(int *)(param_6 + 0x10);
      if (0 < iVar2) {
        uVar1 = (ulong)(iVar2 - 1) + 1;
        uVar4 = uVar1 & 0x1fffffffe;
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          lVar8 = 0;
          uVar9 = (ulong)(iVar2 - 1) + 1 & 0xfffffffffffffffe;
          do {
            local_108[lVar8 >> 0x20] = 0.0;
            *(undefined4 *)((long)local_108 + ((lVar8 >> 0x20) * 4 | 4U)) = 0;
            uVar9 = uVar9 - 2;
            lVar8 = lVar8 + 0x200000000;
          } while (uVar9 != 0);
        }
        if (uVar1 != uVar4) {
          iVar2 = iVar2 - (int)uVar4;
          lVar8 = uVar4 << 0x20;
          do {
            local_108[lVar8 >> 0x20] = 0.0;
            iVar2 = iVar2 + -1;
            lVar8 = lVar8 + 0x100000000;
          } while (iVar2 != 0);
        }
      }
      param_2 = param_2 / 360.0;
      FUN_1005688b8(SUB41((param_3 + 180.0) * 0.5 * param_2 + param_1,0),(180.0 - param_3) * param_2
                    ,((180.0 - param_3) / 180.0) * fVar15,param_6,0,1,local_108);
      FUN_1005688b8(SUB41((param_3 * 0.5 + -180.0) * param_2 + param_1,0),param_3 * param_2,
                    (param_3 / 180.0) * fVar15,param_6,0,1,local_108);
      iVar2 = *(int *)(param_6 + 0x10);
      if (0 < iVar2) {
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        pfVar5 = local_108;
        iVar3 = iVar2;
        do {
          fVar16 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))) +
                   *pfVar5 * *pfVar5;
          uVar11 = SUB41(fVar16,0);
          uVar12 = (undefined1)((uint)fVar16 >> 8);
          uVar13 = (undefined1)((uint)fVar16 >> 0x10);
          uVar14 = (undefined1)((uint)fVar16 >> 0x18);
          iVar3 = iVar3 + -1;
          pfVar5 = pfVar5 + 1;
        } while (iVar3 != 0);
        if (fVar16 != 0.0) {
          pfVar5 = param_8 + 1;
          pfVar7 = local_108;
          do {
            *pfVar5 = *pfVar5 + (fVar15 / SQRT(fVar16)) * *pfVar7;
            iVar2 = iVar2 + -1;
            pfVar5 = (float *)((long)pfVar5 +
                              (-(param_7 >> 0x1f & 1) & 0xfffffffc00000000 |
                              (param_7 & 0xffffffff) << 2));
            pfVar7 = pfVar7 + 1;
          } while (iVar2 != 0);
        }
      }
    }
  }
  if ((*(int **)(param_6 + 0x98) != (int *)0x0) && (iVar2 = **(int **)(param_6 + 0x98), -1 < iVar2))
  {
    fVar15 = (param_4 * fVar15) / 1.4142135;
    param_8 = param_8 + iVar2 * (int)param_7;
    *param_8 = fVar15 + *param_8;
    param_8[1] = fVar15 + param_8[1];
  }
  if (lVar10 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}




undefined8
FUN_1005698c4(undefined8 param_1,ulong param_2,float param_3,float param_4,undefined1 param_5 [16],
             long param_6,long param_7,ulong param_8,long param_9,uint param_10)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  ulong uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float local_128 [4];
  undefined8 auStack_118 [14];
  long local_a8;
  
  uVar43 = param_5._8_8_;
  uVar42 = param_5._0_8_;
  lVar22 = *(long *)PTR____stack_chk_guard_101444218;
  iVar20 = (int)param_8;
  local_a8 = lVar22;
  if ((*(int *)(param_7 + 0x14) == 0) && (*(int *)(param_7 + 0xb0) == 0)) {
    if (0 < *(int *)(param_7 + 0xa0)) {
      lVar15 = 0;
      do {
        FUN_1005687ac(0,uVar42,param_6,
                      param_9 + (long)(*(int *)(*(long *)(param_7 + 0xa8) + lVar15 * 4) * iVar20) *
                                4);
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_7 + 0xa0));
    }
    piVar8 = *(int **)(param_6 + 0x98);
joined_r0x00010056a048:
    if ((((piVar8 == (int *)0x0) || (*piVar8 < 0)) && (*(int **)(param_7 + 0x98) != (int *)0x0)) &&
       (iVar9 = **(int **)(param_7 + 0x98), -1 < iVar9)) {
      FUN_1005687ac(0,param_4 * (float)uVar42,param_6,param_9 + (long)(iVar9 * iVar20) * 4);
    }
  }
  else {
    uVar1 = *(uint *)(param_6 + 0x14);
    uVar7 = (ulong)uVar1;
    if (uVar1 != 0) {
      fVar24 = (float)(int)uVar1 * (param_3 / 360.0);
      fVar25 = 1.0;
      if ((*(int *)(param_7 + 0x14) == 0) && (fVar25 = 1.0, *(int *)(param_7 + 0xb0) != 0)) {
        fVar25 = SQRT((float)*(int *)(param_7 + 0xb0));
      }
      if (0 < (int)uVar1) {
        lVar22 = 0;
        fVar45 = (float)param_2 / 360.0;
        fVar25 = fVar25 * param_5._0_4_;
        iVar9 = (int)(float)(int)fVar24;
        uVar23 = -(param_8 >> 0x1f & 1) & 0xfffffffc00000000 | (param_8 & 0xffffffff) << 2;
        do {
          iVar6 = (int)uVar7;
          fVar27 = (float)param_1;
          if (iVar6 == 1) {
            for (fVar44 = (*(float *)(*(long *)(param_6 + 0x18) + 4) - fVar27) + param_3;
                fVar44 < -180.0; fVar44 = fVar44 + 360.0) {
            }
            for (; 180.0 <= fVar44; fVar44 = fVar44 + -360.0) {
            }
          }
          else if ((param_10 & 1) == 0) {
            uVar7 = lVar22 + iVar9;
            if ((long)uVar7 < 0) {
              do {
                uVar1 = (int)uVar7 + iVar6;
                uVar7 = (ulong)uVar1;
              } while ((int)uVar1 < 0);
            }
            while (iVar10 = (int)uVar7, iVar6 <= iVar10) {
              uVar7 = (ulong)(uint)(iVar10 - iVar6);
            }
            fVar44 = *(float *)(*(long *)(param_6 + 0x18) + (long)iVar10 * 0x14 + 4);
            fVar26 = *(float *)(*(long *)(param_6 + 0x28) + (long)iVar10 * 0x20 + 0x14);
            if (180.0 <= fVar26) {
              iVar14 = iVar10 + 1;
              if (iVar10 < -1) {
                do {
                  iVar14 = iVar14 + iVar6;
                } while (iVar14 < 0);
              }
              for (; iVar6 <= iVar14; iVar14 = iVar14 - iVar6) {
              }
              for (fVar26 = *(float *)(*(long *)(param_6 + 0x18) + (long)iVar14 * 0x14 + 4) - fVar44
                  ; fVar26 < 0.0; fVar26 = fVar26 + 360.0) {
              }
              for (; 360.0 <= fVar26; fVar26 = fVar26 + -360.0) {
              }
            }
            for (fVar44 = (fVar44 - fVar27) + (fVar24 - (float)iVar9) * fVar26; fVar44 < -180.0;
                fVar44 = fVar44 + 360.0) {
            }
            for (; 180.0 <= fVar44; fVar44 = fVar44 + -360.0) {
            }
          }
          else {
            for (fVar44 = (*(float *)(*(long *)(*(long *)(param_6 + 0x28) + lVar22 * 0x20) + 4) -
                          fVar27) + param_3; fVar44 < -180.0; fVar44 = fVar44 + 360.0) {
            }
            for (; 180.0 <= fVar44; fVar44 = fVar44 + -360.0) {
            }
          }
          if (-150.0 <= fVar44) {
            if (fVar44 <= 150.0) {
              FUN_1005688b8(fVar44 * fVar45 + fVar27,param_7,1,param_8,
                            param_9 + (long)*(int *)(*(long *)(param_6 + 0x18) + lVar22 * 0x14) * 4)
              ;
            }
            else {
              iVar6 = *(int *)(param_7 + 0x10);
              if (0 < iVar6) {
                uVar7 = (ulong)(iVar6 - 1) + 1;
                uVar11 = uVar7 & 0x1fffffffe;
                if (uVar11 == 0) {
                  uVar11 = 0;
                }
                else {
                  lVar15 = 0;
                  uVar16 = (ulong)(iVar6 - 1) + 1 & 0xfffffffffffffffe;
                  do {
                    local_128[lVar15 >> 0x20] = 0.0;
                    *(undefined4 *)((long)local_128 + ((lVar15 >> 0x20) * 4 | 4U)) = 0;
                    uVar16 = uVar16 - 2;
                    lVar15 = lVar15 + 0x200000000;
                  } while (uVar16 != 0);
                }
                if (uVar7 != uVar11) {
                  iVar6 = iVar6 - (int)uVar11;
                  lVar15 = uVar11 << 0x20;
                  do {
                    local_128[lVar15 >> 0x20] = 0.0;
                    iVar6 = iVar6 + -1;
                    lVar15 = lVar15 + 0x100000000;
                  } while (iVar6 != 0);
                }
              }
              FUN_1005688b8(fVar44 * fVar45 + fVar27,0,(210.0 - fVar44) / 60.0,param_7,0,1,local_128
                           );
              FUN_1005688b8((fVar44 + -360.0) * fVar45 + fVar27,param_7,0,1,local_128);
              iVar6 = *(int *)(param_7 + 0x10);
              if (0 < iVar6) {
                lVar15 = (long)*(int *)(*(long *)(param_6 + 0x18) + lVar22 * 0x14);
                fVar27 = 0.0;
                pfVar12 = local_128;
                iVar10 = iVar6;
                do {
                  fVar27 = fVar27 + *pfVar12 * *pfVar12;
                  iVar10 = iVar10 + -1;
                  pfVar12 = pfVar12 + 1;
                } while (iVar10 != 0);
                if (fVar27 != 0.0) {
                  fVar27 = fVar25 / SQRT(fVar27);
                  uVar7 = (ulong)(iVar6 - 1) + 1;
                  uVar16 = uVar7 & 0x1fffffff8;
                  uVar11 = 0;
                  if ((uVar16 != 0) && (iVar20 == 1)) {
                    uVar17 = (ulong)(iVar6 - 1) + 1 & 0xfffffffffffffff8;
                    puVar18 = (undefined8 *)(param_9 + 0x10 + lVar15 * 4);
                    puVar19 = auStack_118;
                    do {
                      auVar30._0_8_ =
                           CONCAT44((float)((ulong)puVar18[-2] >> 0x20) +
                                    fVar27 * *(float *)((long)puVar19 + -0xc),
                                    (float)puVar18[-2] + fVar27 * *(float *)(puVar19 + -2));
                      auVar30._8_4_ = (float)puVar18[-1] + fVar27 * *(float *)(puVar19 + -1);
                      auVar30._12_4_ =
                           (float)((ulong)puVar18[-1] >> 0x20) +
                           fVar27 * *(float *)((long)puVar19 + -4);
                      fVar44 = (float)*puVar18 + fVar27 * (float)*puVar19;
                      fVar26 = (float)((ulong)*puVar18 >> 0x20) +
                               fVar27 * (float)((ulong)*puVar19 >> 0x20);
                      uVar32 = SUB41(fVar26,0);
                      uVar33 = (undefined1)((uint)fVar26 >> 8);
                      uVar34 = (undefined1)((uint)fVar26 >> 0x10);
                      uVar35 = (undefined1)((uint)fVar26 >> 0x18);
                      fVar26 = (float)puVar18[1] + fVar27 * (float)puVar19[1];
                      uVar36 = (undefined1)((uint)fVar26 >> 8);
                      uVar37 = (undefined1)((uint)fVar26 >> 0x10);
                      uVar38 = (undefined1)((uint)fVar26 >> 0x18);
                      fVar5 = (float)((ulong)puVar18[1] >> 0x20) +
                              fVar27 * (float)((ulong)puVar19[1] >> 0x20);
                      uVar39 = (undefined1)((uint)fVar5 >> 8);
                      uVar40 = (undefined1)((uint)fVar5 >> 0x10);
                      uVar41 = (undefined1)((uint)fVar5 >> 0x18);
                      puVar18[-2] = auVar30._0_8_;
                      auVar29 = NEON_ext(auVar30,auVar30,8,1);
                      puVar18[-1] = auVar29._0_8_;
                      *puVar18 = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,
                                                  fVar44))));
                      auVar29[4] = uVar32;
                      auVar29._0_4_ = fVar44;
                      auVar29[5] = uVar33;
                      auVar29[6] = uVar34;
                      auVar29[7] = uVar35;
                      auVar29[8] = SUB41(fVar26,0);
                      auVar29[9] = uVar36;
                      auVar29[10] = uVar37;
                      auVar29[0xb] = uVar38;
                      auVar29[0xc] = SUB41(fVar5,0);
                      auVar29[0xd] = uVar39;
                      auVar29[0xe] = uVar40;
                      auVar29[0xf] = uVar41;
                      auVar4[4] = uVar32;
                      auVar4._0_4_ = fVar44;
                      auVar4[5] = uVar33;
                      auVar4[6] = uVar34;
                      auVar4[7] = uVar35;
                      auVar4[8] = SUB41(fVar26,0);
                      auVar4[9] = uVar36;
                      auVar4[10] = uVar37;
                      auVar4[0xb] = uVar38;
                      auVar4[0xc] = SUB41(fVar5,0);
                      auVar4[0xd] = uVar39;
                      auVar4[0xe] = uVar40;
                      auVar4[0xf] = uVar41;
                      auVar29 = NEON_ext(auVar29,auVar4,8,1);
                      puVar18[1] = auVar29._0_8_;
                      uVar17 = uVar17 - 8;
                      puVar18 = puVar18 + 4;
                      uVar11 = uVar16;
                      puVar19 = puVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  if (uVar7 != uVar11) {
                    iVar6 = iVar6 - (int)uVar11;
                    pfVar12 = (float *)(param_9 + (lVar15 + (long)iVar20 * uVar11) * 4);
                    pfVar13 = local_128 + uVar11;
                    do {
                      *pfVar12 = *pfVar12 + fVar27 * *pfVar13;
                      iVar6 = iVar6 + -1;
                      pfVar12 = (float *)((long)pfVar12 + uVar23);
                      pfVar13 = pfVar13 + 1;
                    } while (iVar6 != 0);
                  }
                }
              }
            }
          }
          else {
            iVar6 = *(int *)(param_7 + 0x10);
            if (0 < iVar6) {
              uVar7 = (ulong)(iVar6 - 1) + 1;
              uVar11 = uVar7 & 0x1fffffffe;
              if (uVar11 == 0) {
                uVar11 = 0;
              }
              else {
                lVar15 = 0;
                uVar16 = (ulong)(iVar6 - 1) + 1 & 0xfffffffffffffffe;
                do {
                  local_128[lVar15 >> 0x20] = 0.0;
                  *(undefined4 *)((long)local_128 + ((lVar15 >> 0x20) * 4 | 4U)) = 0;
                  uVar16 = uVar16 - 2;
                  lVar15 = lVar15 + 0x200000000;
                } while (uVar16 != 0);
              }
              if (uVar7 != uVar11) {
                iVar6 = iVar6 - (int)uVar11;
                lVar15 = uVar11 << 0x20;
                do {
                  local_128[lVar15 >> 0x20] = 0.0;
                  iVar6 = iVar6 + -1;
                  lVar15 = lVar15 + 0x100000000;
                } while (iVar6 != 0);
              }
            }
            FUN_1005688b8(fVar44 * fVar45 + fVar27,0,(fVar44 + 210.0) / 60.0,param_7,0,1,local_128);
            FUN_1005688b8((fVar44 + 360.0) * fVar45 + fVar27,param_7,0,1,local_128);
            iVar6 = *(int *)(param_7 + 0x10);
            if (0 < iVar6) {
              lVar15 = (long)*(int *)(*(long *)(param_6 + 0x18) + lVar22 * 0x14);
              fVar27 = 0.0;
              pfVar12 = local_128;
              iVar10 = iVar6;
              do {
                fVar27 = fVar27 + *pfVar12 * *pfVar12;
                iVar10 = iVar10 + -1;
                pfVar12 = pfVar12 + 1;
              } while (iVar10 != 0);
              if (fVar27 != 0.0) {
                fVar27 = fVar25 / SQRT(fVar27);
                uVar7 = (ulong)(iVar6 - 1) + 1;
                uVar16 = uVar7 & 0x1fffffff8;
                uVar11 = 0;
                if ((uVar16 != 0) && (iVar20 == 1)) {
                  uVar17 = (ulong)(iVar6 - 1) + 1 & 0xfffffffffffffff8;
                  puVar18 = (undefined8 *)(param_9 + 0x10 + lVar15 * 4);
                  puVar19 = auStack_118;
                  do {
                    auVar28._0_8_ =
                         CONCAT44((float)((ulong)puVar18[-2] >> 0x20) +
                                  fVar27 * *(float *)((long)puVar19 + -0xc),
                                  (float)puVar18[-2] + fVar27 * *(float *)(puVar19 + -2));
                    auVar28._8_4_ = (float)puVar18[-1] + fVar27 * *(float *)(puVar19 + -1);
                    auVar28._12_4_ =
                         (float)((ulong)puVar18[-1] >> 0x20) +
                         fVar27 * *(float *)((long)puVar19 + -4);
                    fVar44 = (float)*puVar18 + fVar27 * (float)*puVar19;
                    fVar26 = (float)((ulong)*puVar18 >> 0x20) +
                             fVar27 * (float)((ulong)*puVar19 >> 0x20);
                    uVar32 = SUB41(fVar26,0);
                    uVar33 = (undefined1)((uint)fVar26 >> 8);
                    uVar34 = (undefined1)((uint)fVar26 >> 0x10);
                    uVar35 = (undefined1)((uint)fVar26 >> 0x18);
                    fVar26 = (float)puVar18[1] + fVar27 * (float)puVar19[1];
                    uVar36 = (undefined1)((uint)fVar26 >> 8);
                    uVar37 = (undefined1)((uint)fVar26 >> 0x10);
                    uVar38 = (undefined1)((uint)fVar26 >> 0x18);
                    fVar5 = (float)((ulong)puVar18[1] >> 0x20) +
                            fVar27 * (float)((ulong)puVar19[1] >> 0x20);
                    uVar39 = (undefined1)((uint)fVar5 >> 8);
                    uVar40 = (undefined1)((uint)fVar5 >> 0x10);
                    uVar41 = (undefined1)((uint)fVar5 >> 0x18);
                    puVar18[-2] = auVar28._0_8_;
                    auVar29 = NEON_ext(auVar28,auVar28,8,1);
                    puVar18[-1] = auVar29._0_8_;
                    *puVar18 = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,
                                                  fVar44))));
                    auVar2[4] = uVar32;
                    auVar2._0_4_ = fVar44;
                    auVar2[5] = uVar33;
                    auVar2[6] = uVar34;
                    auVar2[7] = uVar35;
                    auVar2[8] = SUB41(fVar26,0);
                    auVar2[9] = uVar36;
                    auVar2[10] = uVar37;
                    auVar2[0xb] = uVar38;
                    auVar2[0xc] = SUB41(fVar5,0);
                    auVar2[0xd] = uVar39;
                    auVar2[0xe] = uVar40;
                    auVar2[0xf] = uVar41;
                    auVar3[4] = uVar32;
                    auVar3._0_4_ = fVar44;
                    auVar3[5] = uVar33;
                    auVar3[6] = uVar34;
                    auVar3[7] = uVar35;
                    auVar3[8] = SUB41(fVar26,0);
                    auVar3[9] = uVar36;
                    auVar3[10] = uVar37;
                    auVar3[0xb] = uVar38;
                    auVar3[0xc] = SUB41(fVar5,0);
                    auVar3[0xd] = uVar39;
                    auVar3[0xe] = uVar40;
                    auVar3[0xf] = uVar41;
                    auVar29 = NEON_ext(auVar2,auVar3,8,1);
                    puVar18[1] = auVar29._0_8_;
                    uVar17 = uVar17 - 8;
                    puVar18 = puVar18 + 4;
                    uVar11 = uVar16;
                    puVar19 = puVar19 + 4;
                  } while (uVar17 != 0);
                }
                if (uVar7 != uVar11) {
                  iVar6 = iVar6 - (int)uVar11;
                  pfVar12 = (float *)(param_9 + (lVar15 + (long)iVar20 * uVar11) * 4);
                  pfVar13 = local_128 + uVar11;
                  do {
                    *pfVar12 = *pfVar12 + fVar27 * *pfVar13;
                    iVar6 = iVar6 + -1;
                    pfVar12 = (float *)((long)pfVar12 + uVar23);
                    pfVar13 = pfVar13 + 1;
                  } while (iVar6 != 0);
                }
              }
            }
          }
          lVar22 = lVar22 + 1;
          uVar7 = (ulong)*(int *)(param_6 + 0x14);
        } while (lVar22 < (long)uVar7);
      }
      piVar8 = *(int **)(param_6 + 0x98);
      lVar22 = *(long *)PTR____stack_chk_guard_101444218;
      param_2 = param_2 & 0xffffffff;
      uVar42 = uVar42 & 0xffffffff;
      goto joined_r0x00010056a048;
    }
    if (*(int *)(param_6 + 0xb0) == 0) {
      if (0 < *(int *)(param_6 + 0xa0)) {
        lVar15 = 0;
        do {
          if ((*(int **)(param_6 + 0x98) == (int *)0x0) || (**(int **)(param_6 + 0x98) < 0)) {
            if (*(int **)(param_7 + 0x98) == (int *)0x0) {
              iVar9 = -1;
            }
            else {
              iVar9 = **(int **)(param_7 + 0x98);
            }
            fVar25 = param_4;
            if (iVar9 < 0) {
              fVar25 = 0.0;
            }
          }
          else {
            fVar25 = 0.0;
          }
          lVar21 = (long)*(int *)(*(long *)(param_6 + 0xa8) + lVar15 * 4);
          auVar31._8_8_ = uVar43;
          auVar31._0_8_ = uVar42;
          FUN_1005688b8(param_1,param_2,auVar31,param_7,1,param_8,param_9 + lVar21 * 4);
          if ((*(int **)(param_7 + 0x98) != (int *)0x0) &&
             (iVar9 = **(int **)(param_7 + 0x98), -1 < iVar9)) {
            lVar21 = (lVar21 + iVar9 * iVar20) * 4;
            *(float *)(param_9 + lVar21) = fVar25 * param_5._0_4_ + *(float *)(param_9 + lVar21);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(param_6 + 0xa0));
      }
    }
    else if (0 < *(int *)(param_6 + 0xb0)) {
      lVar15 = 0;
      do {
        if ((*(int **)(param_6 + 0x98) == (int *)0x0) || (**(int **)(param_6 + 0x98) < 0)) {
          if (*(int **)(param_7 + 0x98) == (int *)0x0) {
            iVar9 = -1;
          }
          else {
            iVar9 = **(int **)(param_7 + 0x98);
          }
          uVar32 = SUB41(param_4,0);
          if (iVar9 < 0) {
            uVar32 = 0;
          }
        }
        else {
          uVar32 = 0;
        }
        iVar9 = *(int *)(*(long *)(param_6 + 0xb8) + lVar15 * 4);
        FUN_1005693f8(param_1,param_2,param_3,uVar32,uVar42,param_7,
                      (*(int *)(*(long *)(param_6 + 0xc0) + lVar15 * 4) - iVar9) * iVar20,
                      param_9 + (long)iVar9 * 4);
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_6 + 0xb0));
    }
  }
  if (*(int **)(param_6 + 0x98) != (int *)0x0) {
    iVar9 = **(int **)(param_6 + 0x98);
    if (-1 < iVar9) {
      if (*(int **)(param_7 + 0x98) != (int *)0x0) {
        iVar6 = **(int **)(param_7 + 0x98);
        if (-1 < iVar6) {
          uVar1 = iVar9 + iVar6 * iVar20;
          uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          *(float *)(param_9 + uVar7) = param_4 * (float)uVar42 + *(float *)(param_9 + uVar7);
          goto LAB_10056a1dc;
        }
      }
      FUN_1005688b8(param_1,param_2,param_7,1,param_8,param_9 + (long)iVar9 * 4);
    }
  }
LAB_10056a1dc:
  if (lVar22 == local_a8) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_10056a220(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  
  iVar10 = (int)param_4;
  fVar12 = (float)param_1;
  if (param_2 == param_3) {
    iVar6 = *(int *)(param_2 + 0x10);
    if (0 < iVar6) {
      uVar9 = 0;
      lVar7 = 0;
      do {
        uVar8 = -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2;
        *(float *)(param_5 + uVar8) = *(float *)(param_5 + uVar8) + fVar12;
        lVar7 = lVar7 + 1;
        uVar9 = (ulong)(uint)((int)uVar9 + iVar10 + 1);
      } while (lVar7 < iVar6);
    }
  }
  else if (*(int *)(param_3 + 0x14) == 0) {
    if (*(int *)(param_3 + 0xb0) == 0) {
      if (0 < *(int *)(param_3 + 0xa0)) {
        lVar7 = 0;
        do {
          FUN_1005687ac(0x3f800000,param_1,param_2,
                        param_5 + (long)(*(int *)(*(long *)(param_3 + 0xa8) + lVar7 * 4) * iVar10) *
                                  4);
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(param_3 + 0xa0));
      }
    }
    else if (0 < *(int *)(param_3 + 0xb0)) {
      lVar7 = 0;
      do {
        iVar6 = *(int *)(*(long *)(param_3 + 0xb8) + lVar7 * 4) * iVar10;
        FUN_100569090(0,0x3f800000,param_1,param_2,
                      *(int *)(*(long *)(param_3 + 0xc0) + lVar7 * 4) * iVar10 - iVar6,
                      param_5 + (long)iVar6 * 4);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_3 + 0xb0));
    }
  }
  else {
    if (*(int *)(param_2 + 0x14) == 0) {
      iVar6 = *(int *)(param_2 + 0xb0);
      if ((((iVar6 != 0) && (*(int **)(param_3 + 0x88) != (int *)0x0)) &&
          (iVar4 = **(int **)(param_3 + 0x88), -1 < iVar4)) &&
         ((*(int **)(param_3 + 0x90) != (int *)0x0 &&
          (iVar5 = **(int **)(param_3 + 0x90), -1 < iVar5)))) {
        if (iVar6 < 1) {
          return 0;
        }
        lVar7 = 0;
        lVar2 = *(long *)(param_2 + 0xb8);
        lVar3 = *(long *)(param_2 + 0xc0);
        do {
          uVar1 = *(int *)(lVar2 + lVar7 * 4) + iVar4 * iVar10;
          uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          *(float *)(param_5 + uVar9) = *(float *)(param_5 + uVar9) + fVar12;
          uVar1 = *(int *)(lVar3 + lVar7 * 4) + iVar5 * iVar10;
          uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          *(float *)(param_5 + uVar9) = *(float *)(param_5 + uVar9) + fVar12;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar6);
        return 0;
      }
    }
    if (*(int **)(param_2 + 0x98) == (int *)0x0) {
      uVar11 = 0;
    }
    else if (**(int **)(param_2 + 0x98) < 0) {
      uVar11 = 0;
    }
    else if (*(int **)(param_3 + 0x98) == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0x3f800000;
      if (**(int **)(param_3 + 0x98) < 0) {
        uVar11 = 0;
      }
    }
    FUN_1005698c4(0,0x43b40000,0,uVar11,param_1,param_2,param_3,param_4,param_5,0);
  }
  return 0;
}




undefined8
FUN_10056a458(float param_1,float param_2,float param_3,float param_4,int param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  
  if (param_6 == (float *)0x0) {
    return 0x1f;
  }
  if ((param_2 < param_1) && (0.0 < param_4)) {
    if (param_4 != 1.0) {
      param_1 = (param_1 - param_2) * param_4 + param_2;
    }
    switch(param_5) {
    case 0:
    case 1:
      if (param_1 < param_3) {
        fVar1 = (param_3 - param_1) / (param_3 - param_2);
        *param_6 = fVar1;
        if (param_5 != 0) {
          return 0;
        }
        *param_6 = fVar1 * fVar1;
        return 0;
      }
      break;
    case 2:
      if (param_3 <= param_1) {
        param_1 = param_3;
      }
      *param_6 = param_2 / param_1;
      return 0;
    case 3:
      if (param_1 < param_3) {
        fVar2 = (param_3 - param_1) / (param_3 - param_2);
        fVar2 = fVar2 * fVar2;
        fVar1 = param_2 / param_1;
        if (fVar2 <= param_2 / param_1) {
          fVar1 = fVar2;
        }
        *param_6 = fVar1;
        return 0;
      }
      break;
    case 4:
      goto switchD_10056a4b0_caseD_4;
    default:
      return 0;
    }
    *param_6 = 0.0;
    return 0;
  }
switchD_10056a4b0_caseD_4:
  *param_6 = 1.0;
  return 0;
}




void FUN_10056a560(long param_1,int param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  long local_50;
  long local_48;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_54 = 0;
  local_50 = 0;
  local_48 = lVar8;
  if (param_4 == (undefined8 *)0x0) {
    uVar4 = 0x1f;
  }
  else {
    uVar4 = (**(code **)(*param_3 + 0x118))(param_3,&local_58);
    if (((int)uVar4 == 0) &&
       (((local_58._2_1_ >> 1 & 1) == 0 || (uVar4 = FUN_10056f2dc(param_1,param_3), (int)uVar4 == 0)
        ))) {
      *param_4 = 0;
      if (param_2 < 0) {
        if ((*(long *)(param_1 + 0x558) == param_1 + 0x558) &&
           (*(long *)(param_1 + 0x560) == param_1 + 0x558)) {
          if ((*(long *)(param_1 + 0x698) == param_1 + 0x698) &&
             (*(long *)(param_1 + 0x6a0) == param_1 + 0x698)) {
            uVar4 = 2;
            goto LAB_10056a614;
          }
          plVar7 = *(long **)(*(long *)(param_1 + 0x6a0) + 0x10);
          FUN_100582560(plVar7,0x1b);
        }
        else {
          plVar7 = (long *)(*(long *)(param_1 + 0x558) + -0x130);
        }
      }
      else {
        if (*(int *)(param_1 + 0x1a8) <= param_2) {
          uVar4 = 0x1f;
          goto LAB_10056a614;
        }
        plVar7 = (long *)(*(long *)(param_1 + 0x1b0) + (long)param_2 * 0x270);
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      plVar1 = plVar7 + 0x26;
      plVar2 = (long *)plVar7[0x27];
      *plVar2 = plVar7[0x26];
      *(long **)(plVar7[0x26] + 8) = plVar2;
      plVar7[0x27] = (long)plVar1;
      lVar5 = *(long *)(param_1 + 0x2f0);
      plVar7[0x26] = param_1 + 0x2e8;
      plVar7[0x27] = lVar5;
      *(long **)(param_1 + 0x2f0) = plVar1;
      *(long **)plVar7[0x27] = plVar1;
      *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
      if ((((((local_58 >> 9 & 1) == 0) ||
            ((iVar3 = FUN_10056c03c(param_1,*(undefined4 *)(param_3[0xb] + 0xc4),&local_60),
             iVar3 == 0 && (iVar3 = FUN_1005b18f4(local_60), iVar3 == 0)))) &&
           (iVar3 = (**(code **)(**(long **)(param_1 + 0x700) + 8))
                              (*(long **)(param_1 + 0x700),local_58,&local_50,1,(int)param_3[0xc],
                               &local_54,0), iVar3 == 0)) && (local_54 == 1)) ||
         (uVar4 = (**(code **)(**(long **)(param_1 + 0x6f8) + 8))
                            (*(long **)(param_1 + 0x6f8),local_58,&local_50,1,(int)param_3[0xc],0,0)
         , (int)uVar4 == 0)) {
        lVar5 = *(long *)(local_50 + 0x20);
        lVar6 = *(long *)(param_1 + 0x6f8);
        if (lVar5 == lVar6) {
          *(uint *)(plVar7 + 9) = *(uint *)(plVar7 + 9) | 0x10000;
        }
        if (((char)local_58 < '\0') && (lVar5 != lVar6)) {
          lVar5 = param_3[0x2e];
          plVar7[0x32] = lVar5;
          *(long *)(lVar5 + 0xd0) = local_50;
        }
        else {
          plVar7[0x32] = local_50;
        }
        uVar4 = 0;
        *param_4 = plVar7;
      }
    }
  }
LAB_10056a614:
  if (lVar8 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
}




void FUN_10056a7bc(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  local_40 = 0;
  local_38 = lVar7;
  if (param_4 == (undefined8 *)0x0) {
    uVar4 = 0x1f;
  }
  else {
    *param_4 = 0;
    if (param_2 < 0) {
      if ((*(long *)(param_1 + 0x558) == param_1 + 0x558) &&
         (*(long *)(param_1 + 0x560) == param_1 + 0x558)) {
        if ((*(long *)(param_1 + 0x698) == param_1 + 0x698) &&
           (*(long *)(param_1 + 0x6a0) == param_1 + 0x698)) {
          uVar4 = 2;
          goto LAB_10056a900;
        }
        plVar6 = *(long **)(*(long *)(param_1 + 0x6a0) + 0x10);
        FUN_100582560(plVar6,0x1b);
      }
      else {
        plVar6 = (long *)(*(long *)(param_1 + 0x558) + -0x130);
      }
    }
    else {
      if (*(int *)(param_1 + 0x1a8) <= param_2) {
        uVar4 = 0x1f;
        goto LAB_10056a900;
      }
      plVar6 = (long *)(*(long *)(param_1 + 0x1b0) + (long)param_2 * 0x270);
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar1 = plVar6 + 0x26;
    plVar2 = (long *)plVar6[0x27];
    *plVar2 = plVar6[0x26];
    *(long **)(plVar6[0x26] + 8) = plVar2;
    plVar6[0x27] = (long)plVar1;
    lVar5 = *(long *)(param_1 + 0x2f0);
    plVar6[0x26] = param_1 + 0x2e8;
    plVar6[0x27] = lVar5;
    *(long **)(param_1 + 0x2f0) = plVar1;
    *(long **)plVar6[0x27] = plVar1;
    *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
    iVar3 = (**(code **)(**(long **)(param_1 + 0x700) + 8))
                      (*(long **)(param_1 + 0x700),0,&local_40,1,1,0,0);
    if ((iVar3 == 0) ||
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x6f8) + 8))
                          (*(long **)(param_1 + 0x6f8),0,&local_40,1,1,0,0), (int)uVar4 == 0)) {
      uVar4 = 0;
      plVar6[0x32] = local_40;
      *param_4 = plVar6;
    }
  }
LAB_10056a900:
  if (lVar7 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




undefined8 FUN_10056a95c(long param_1,char *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long local_188;
  void *local_180;
  char *pcStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 auStack_140 [44];
  undefined4 local_114;
  long local_68;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar9;
  if (param_3 == (long *)0x0) {
    uVar5 = 0x1f;
    goto LAB_10056aba8;
  }
  plVar3 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),600,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_channel.cpp"
                                 ,0x104,0);
  FUN_10057f888();
  if (plVar3 == (long *)0x0) {
    uVar5 = 0x26;
    goto LAB_10056aba8;
  }
  lVar7 = *(long *)(param_1 + 0x15d18);
  plVar3[0x26] = lVar7;
  plVar3[0x27] = param_1 + 0x15d18;
  *(long **)(lVar7 + 8) = plVar3 + 0x26;
  *(long **)plVar3[0x27] = plVar3 + 0x26;
  plVar3[0x28] = (long)plVar3;
  plVar3[1] = param_1;
  plVar3[10] = (long)plVar3;
  *(undefined4 *)(plVar3 + 0x41) = 0;
  plVar3[0x3e] = (long)(plVar3 + 0x3e);
  plVar3[0x3f] = (long)(plVar3 + 0x3e);
  plVar3[0x40] = 0;
  puVar4 = (undefined8 *)FUN_10062ce7c();
  puVar8 = (undefined1 *)0x0;
  local_150 = puVar4[6];
  uStack_158 = puVar4[5];
  local_160 = puVar4[4];
  uStack_168 = puVar4[3];
  local_170 = puVar4[2];
  pcStack_178 = (char *)puVar4[1];
  local_180 = (void *)*puVar4;
  if ((long *)(param_1 + 0x15d08) == param_3) {
    uVar1 = (ulong)local_170 >> 0x20;
    local_170 = CONCAT44((int)uVar1,600);
    puVar8 = auStack_140;
    _memcpy(auStack_140,local_180,0xd8);
    local_114 = 0;
  }
  pcStack_178 = "ChanGroup Fader";
  uVar5 = FUN_10056b4fc(param_1,&local_180,puVar8,&local_188,1);
  if ((int)uVar5 == 0) {
    plVar3[0x48] = local_188;
    plVar3[0x46] = local_188;
    plVar3[0x47] = local_188;
    *(undefined4 *)(plVar3 + 3) = 1;
    plVar3[2] = 0;
    *(ushort *)(local_188 + 0x3c) = *(ushort *)(local_188 + 0x3c) | 0x180;
    *(long **)(local_188 + 0x1b0) = plVar3;
    FUN_1005c986c(local_188,1,1);
    if ((param_2 == (char *)0x0) || ((param_4 & 1) == 0)) {
      plVar3[0x33] = 0;
    }
    else {
      lVar7 = FUN_1005ed2f4(param_2);
      plVar3[0x33] = lVar7;
      if (lVar7 == 0) {
        uVar5 = 0x26;
        goto LAB_10056aaf8;
      }
    }
    if (param_2 != (char *)0x0) {
      iVar2 = FUN_1005ed12c("music",param_2);
      if (iVar2 == 0) {
        *(long **)(*(long *)(param_1 + 0x6b8) + 0x1d0) = plVar3;
      }
      iVar2 = _strncmp(param_2,"ReturnBus",9);
      if (iVar2 == 0) {
        *(uint *)(plVar3 + 9) = *(uint *)(plVar3 + 9) | 0x40;
        uVar5 = (**(code **)(*plVar3 + 0x218))(plVar3);
        if ((int)uVar5 != 0) goto LAB_10056aba8;
      }
    }
    plVar6 = *(long **)(param_1 + 0x15d08);
    if (((plVar6 == (long *)0x0) || (plVar6 == plVar3)) ||
       (uVar5 = FUN_10058030c(plVar6,plVar3,1,0), (int)uVar5 == 0)) {
      uVar5 = 0;
      *param_3 = (long)plVar3;
    }
  }
  else {
LAB_10056aaf8:
    if (plVar3 != (long *)0x0) {
      FUN_10057fe44(plVar3);
    }
  }
LAB_10056aba8:
  if (lVar9 == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10056abdc(long param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  int local_38;
  char local_31;
  
  local_31 = '\0';
  local_38 = 0;
  if (*(int *)(param_1 + 0x15cf0) == 2) {
    return 0;
  }
  FUN_1005dba24(&local_38);
  if ((param_2 == 0) || (999 < (uint)(local_38 - *(int *)(param_1 + 0x15ce8)))) {
    *(int *)(param_1 + 0x15ce8) = local_38;
    uVar2 = FUN_1005dc088(&local_31);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (local_31 != '\0') {
      *(undefined1 *)(param_1 + 0x15cec) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x6b8) + 0x1c8) = 0;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  pcVar1 = (char *)(param_1 + 0x15cec);
  if (*pcVar1 != '\0') {
    if ((*(code **)(param_1 + 0x15e48) == (code *)0x0) || ((*(byte *)(param_1 + 0x15e50) & 1) == 0))
    {
      *pcVar1 = '\0';
    }
    else {
      (**(code **)(param_1 + 0x15e48))(param_1,1,0,0,*(undefined8 *)(param_1 + 0x15c98));
      *pcVar1 = '\0';
      if (param_2 == 0) {
        return 0;
      }
    }
  }
  if (*(char *)(*(long *)(param_1 + 0x6b8) + 0x1ca) != '\0') {
    uVar2 = FUN_10056ad1c(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_10056ae24(param_1,*(undefined4 *)(param_1 + 0x6c8));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}




undefined8 FUN_10056ad1c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = FUN_100570cdc(param_1,0);
  if (((int)uVar2 == 0) && (uVar2 = FUN_10056ba8c(param_1,1,0), (int)uVar2 == 0)) {
    iVar3 = *(int *)(param_1 + 0x6dc);
    if (0 < iVar3) {
      lVar4 = 0;
      lVar5 = 0x30;
      do {
        if (*(long *)(*(long *)(param_1 + 0x6e8) + lVar5) != 0) {
          uVar2 = FUN_1005f5574(param_1,lVar4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar3 = *(int *)(param_1 + 0x6dc);
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x38;
      } while (lVar4 < iVar3);
    }
    FUN_1005de0c8(*(undefined8 *)(param_1 + 0x6b8));
    lVar4 = *(long *)(param_1 + 0x6b8);
    if (*(code **)(lVar4 + 0x268) != (code *)0x0) {
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar4 + 8;
      }
      (**(code **)(lVar4 + 0x268))(lVar5);
    }
    plVar1 = (long *)(param_1 + 0x15678);
    if (*plVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1005cdc44(*plVar1 + 8,0,0);
      if ((int)uVar2 == 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*plVar1,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_driver.cpp"
                      ,0xfc);
        uVar2 = 0;
        *plVar1 = 0;
      }
    }
  }
  return uVar2;
}




undefined8 FUN_10056ae24(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 *puStack_68;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  
  lVar10 = *(long *)(param_1 + 0x6b8);
  if (*(code **)(lVar10 + 0x250) == (code *)0x0) goto LAB_10056af28;
  local_34 = *(undefined4 *)(param_1 + 0x708);
  local_38 = *(int *)(param_1 + 0x160b0);
  local_3c = 2;
  if (local_38 < 1000) {
    local_40 = 1;
    switch(local_38) {
    case 1:
      local_40 = *(int *)(param_1 + 0x70c);
      break;
    case 2:
      break;
    case 3:
      local_40 = 2;
      break;
    case 4:
    case 5:
    case 6:
      local_40 = local_38;
      break;
    case 7:
      local_40 = 8;
      break;
    default:
switchD_10056ae90_default:
      local_40 = 0;
    }
  }
  else {
    if (local_38 != 1000) goto switchD_10056ae90_default;
    local_40 = 2;
  }
  lVar9 = 0;
  if (lVar10 != 0) {
    lVar9 = lVar10 + 8;
  }
  uVar2 = *(uint *)(param_1 + 0x710);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x714) / uVar2;
  }
  uVar6 = (**(code **)(lVar10 + 0x250))
                    (lVar9,param_2,*(undefined4 *)(param_1 + 0x48),&local_34,&local_38,&local_40,
                     &local_3c,uVar2,uVar3,0);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  lVar10 = *(long *)(param_1 + 0x6b8);
  *(undefined4 *)(lVar10 + 0x5c) = local_34;
  *(int *)(lVar10 + 0x4c) = local_38;
  *(undefined4 *)(lVar10 + 0x48) = local_3c;
  *(int *)(lVar10 + 0x50) = local_40;
  *(undefined1 *)(lVar10 + 0x1ca) = 0;
LAB_10056af28:
  puVar11 = (undefined4 *)(param_1 + 0x160b0);
  uVar6 = FUN_10056f548(param_1,*puVar11,*(undefined4 *)(param_1 + 0x70c));
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (long *)(param_1 + 0x15670);
  puVar7 = (undefined8 *)*plVar1;
  if ((puVar7 != (undefined8 *)0x0) &&
     (iVar5 = (**(code **)*puVar7)
                        (puVar7,param_1,*(undefined4 *)(param_1 + 0x710),
                         *(undefined4 *)(param_1 + 0x708),*puVar11,*(undefined4 *)(param_1 + 0x70c),
                         *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x4c),
                         *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x50),0), iVar5 != 0)) {
    uVar6 = (**(code **)(*(long *)*plVar1 + 8))();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    puVar7 = (undefined8 *)
             FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xd0,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_driver.cpp"
                           ,0x134,0);
    puVar7[5] = puVar7 + 4;
    puVar7[6] = 0;
    puVar7[4] = puVar7 + 4;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    *(undefined2 *)(puVar7 + 10) = 0;
    *(undefined2 *)((long)puVar7 + 0x52) = 0;
    *(undefined2 *)(puVar7 + 0xc) = 0;
    *(undefined2 *)((long)puVar7 + 0x62) = 0;
    puVar7[0x18] = 0;
    puVar7[7] = puVar7 + 7;
    puVar7[8] = puVar7 + 7;
    *puVar7 = &PTR_FUN_1014a1878;
    *(undefined2 *)(puVar7 + 0x17) = 0;
    *(undefined2 *)((long)puVar7 + 0xba) = 0;
    puVar7[3] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0xd] = 0;
    *plVar1 = (long)puVar7;
    if (puVar7 == (undefined8 *)0x0) {
      return 0x26;
    }
    uVar6 = FUN_10055ea0c(puVar7,param_1,*(undefined4 *)(param_1 + 0x710),
                          *(undefined4 *)(param_1 + 0x708),*puVar11,*(undefined4 *)(param_1 + 0x70c)
                          ,*(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x4c),
                          *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x50),0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  lVar10 = *(long *)(param_1 + 0x6b8);
  if (*(int *)(lVar10 + 0x5c) != *(int *)(param_1 + 0x708)) {
    local_44 = 1;
    local_50 = *(undefined4 *)(param_1 + 0x710);
    local_4c = *(undefined4 *)(lVar10 + 0x50);
    local_48 = 5;
    puVar7 = (undefined8 *)FUN_1005c1484();
    local_60 = puVar7[6];
    local_70 = puVar7[4];
    uStack_78 = puVar7[3];
    local_80 = puVar7[2];
    uStack_88 = puVar7[1];
    local_90 = *puVar7;
    puStack_68 = &local_50;
    FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x288,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_driver.cpp"
                  ,0x14f,0);
    plVar8 = (long *)FUN_1005c14ac();
    puVar4 = PTR_DAT_1014441c0;
    plVar8[0x50] = 0;
    plVar8[0x4f] = 0;
    plVar8[0x4e] = 0;
    plVar8[0x4a] = (long)(plVar8 + 0x4b);
    *plVar8 = (long)(puVar4 + 0x10);
    plVar8[0x4d] = 0;
    plVar8[0x4c] = 0;
    plVar8[0x4b] = 0;
    plVar1 = (long *)(param_1 + 0x15678);
    *plVar1 = (long)plVar8;
    if (plVar8 == (long *)0x0) {
      return 0x26;
    }
    plVar8[0x13] = param_1;
    uVar6 = FUN_1005c934c(plVar8 + 1,&local_90);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar9 = *(long *)(param_1 + 0x6b8);
    lVar10 = *plVar1;
    *(float *)(lVar10 + 0x1d8) = (float)*(int *)(lVar9 + 0x5c);
    *(undefined4 *)(lVar10 + 0x240) = 0xffffffff;
    *(undefined4 *)(lVar10 + 0x244) = 0;
    *(code **)(lVar10 + 0x218) = FUN_1005dccd8;
    *(long *)(lVar10 + 0x1b0) = lVar9;
    uVar6 = FUN_1005c2094((float)*(int *)(param_1 + 0x708));
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = (**(code **)(*(long *)*plVar1 + 8))((long *)*plVar1,0,0,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1005c986c(*plVar1 + 8,1,1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar10 = *(long *)(param_1 + 0x6b8);
  }
  uVar6 = FUN_1005ddf50(lVar10);
  return uVar6;
}




void FUN_10056b20c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_4c = 0;
  local_38 = lVar4;
  uVar3 = FUN_1005f6588(param_1,&local_4c);
  if ((((int)uVar3 == 0) && (uVar3 = 0x1f, -2 < param_2)) && (param_2 < local_4c)) {
    iVar1 = 0;
    if (param_2 != -1) {
      iVar1 = param_2;
    }
    uVar3 = FUN_1005f6610(param_1,iVar1,0,0,&local_48,0,0,0);
    if ((int)uVar3 == 0) {
      iVar2 = _memcmp(&local_48,(undefined8 *)(param_1 + 0x6cc),0x10);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if (*(char *)(param_1 + 8) != '\0') {
          uVar3 = FUN_10056ad1c(param_1);
          if ((int)uVar3 != 0) goto LAB_10056b2fc;
          if (*(long *)(param_1 + 0x14828) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x14828) + 0x30) = 1;
          }
          uVar3 = FUN_10056ae24(param_1,iVar1);
          if ((int)uVar3 != 0) goto LAB_10056b2fc;
        }
        uVar3 = 0;
        *(int *)(param_1 + 0x6c8) = iVar1;
        *(undefined8 *)(param_1 + 0x6d4) = uStack_40;
        *(undefined8 *)(param_1 + 0x6cc) = local_48;
      }
    }
  }
LAB_10056b2fc:
  if (lVar4 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




undefined8 FUN_10056b320(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_58;
  int local_54;
  long local_50;
  int local_44;
  
  local_50 = 0;
  plVar1 = (long *)(param_1 + 0x6b8);
  puVar2 = *(undefined8 **)(param_1 + 0x6b8);
  local_44 = param_2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar6 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x6c0) == param_2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x6c4) == (int)param_3) {
      return 0;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      FUN_10056ad1c(param_1);
      puVar2 = *(undefined8 **)(param_1 + 0x6b8);
    }
    uVar6 = *(undefined4 *)(puVar2 + 0x3b);
    (**(code **)*puVar2)();
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  if ((*(char *)(param_1 + 9) == '\0') && (uVar3 = FUN_1005f46b0(param_1), (int)uVar3 != 0)) {
    return uVar3;
  }
  puVar2 = (undefined8 *)(param_1 + 0x15a58);
  if ((int)param_3 < 1) {
    uVar3 = FUN_1005e2108(*puVar2,&local_54);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (param_2 == 0) {
      FUN_1005dc0d0(&local_44);
    }
    iVar5 = 0;
    if (0 < local_54) {
      do {
        uVar3 = FUN_1005e2450(*puVar2,iVar5,&local_58);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1005e1690(*puVar2,local_58,&local_50);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      } while ((*(int *)(local_50 + 0xc0) != local_44) && (iVar5 = iVar5 + 1, iVar5 < local_54));
    }
    if (iVar5 == local_54) {
      return 0x36;
    }
  }
  else {
    uVar3 = FUN_1005e1690(*puVar2,param_3,&local_50);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = FUN_1005e2904(*puVar2,local_50 + 0x18,plVar1);
  if ((int)uVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x6b8);
    *(undefined4 *)(lVar4 + 0x1d8) = uVar6;
    if (*(long *)(param_1 + 0x14828) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x14828) + 0x30) = 1;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      uVar3 = FUN_10056ae24(param_1,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar4 = *plVar1;
    }
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(lVar4 + 0x2d0);
    *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(lVar4 + 0x2e0);
  }
  return uVar3;
}




undefined8 FUN_10056b4fc(long param_1,long param_2,undefined8 param_3,long *param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_4 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_5 != 0) {
      *param_4 = 0;
    }
    if (param_2 == 0) {
      uVar1 = 0x1f;
    }
    else {
      uVar1 = FUN_1005e25cc(*(undefined8 *)(param_1 + 0x15a58),param_2,param_3,param_4);
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        *(long *)(*param_4 + 0x90) = param_1;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_10056b560(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long local_38;
  
  if (*(long *)(param_1 + 0x2e8) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x2e8) + -0x130);
    if (plVar2 == (long *)(param_1 + 0x1b8)) {
      return 0;
    }
  }
  do {
    plVar1 = (long *)0x0;
    if (plVar2[0x26] != 0) {
      plVar1 = (long *)(plVar2[0x26] + -0x130);
    }
    FUN_100583600(plVar2,&local_38);
    if (local_38 == param_2) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    plVar2 = plVar1;
  } while (plVar1 != (long *)(param_1 + 0x1b8));
  return 0;
}




undefined8 FUN_10056b5f8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  
  iVar5 = *(int *)(param_1 + 0x15c7c);
  iVar3 = *(int *)(param_1 + 0x710);
  iVar4 = *(int *)(param_1 + 84000);
  iVar6 = iVar4 * iVar3 + 8;
  uVar7 = iVar6 * iVar5 + 0x80;
  uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
  pvVar8 = (void *)FUN_1005d7708(param_1 + 0x14f68,uVar12,"",0,0,0);
  if (pvVar8 == (void *)0x0) {
    uVar10 = 0x26;
  }
  else {
    plVar9 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_dsp.cpp"
                                   ,0x7a,0);
    *plVar9 = (long)plVar9;
    plVar9[1] = (long)plVar9;
    plVar9[2] = 0;
    plVar9[3] = 0;
    if (plVar9 == (long *)0x0) {
      FUN_1005d7f1c(param_1 + 0x14f68,pvVar8,"",0);
      uVar10 = 0x26;
    }
    else {
      plVar13 = (long *)((long)pvVar8 + 0x7fU & 0xffffffffffffff80);
      plVar9[3] = (long)pvVar8;
      plVar9[1] = (long)plVar9;
      lVar11 = *(long *)(param_1 + 0x14800);
      *plVar9 = param_1 + 0x147f8;
      plVar9[1] = lVar11;
      *(long **)(param_1 + 0x14800) = plVar9;
      *(long **)plVar9[1] = plVar9;
      _bzero(pvVar8,uVar12);
      if (1 < iVar5) {
        lVar11 = 0;
        uVar7 = iVar4 * iVar3 + 8;
        plVar9 = plVar13;
        do {
          lVar11 = lVar11 + 1;
          plVar2 = (long *)((long)plVar9 +
                           (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
          *plVar9 = (long)plVar2;
          *(undefined4 *)(plVar9 + 1) = 0;
          plVar9[2] = (long)(plVar9 + 4);
          plVar9 = plVar2;
        } while (lVar11 < (long)iVar5 + -1);
      }
      uVar10 = 0;
      puVar1 = (undefined8 *)((long)plVar13 + (long)(iVar6 * (int)((long)iVar5 + -1)) * 4);
      *puVar1 = *(undefined8 *)(param_1 + 0x14818);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = puVar1 + 4;
      *(long **)(param_1 + 0x14818) = plVar13;
    }
  }
  return uVar10;
}




undefined8 FUN_10056b7a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 0x147f8);
  if ((long *)*plVar1 != plVar1) {
    plVar3 = (long *)*plVar1;
    do {
      plVar4 = (long *)*plVar3;
      FUN_1005d7f1c(param_1 + 0x14f68,plVar3[3],"",0);
      plVar2 = (long *)plVar3[1];
      *plVar2 = *plVar3;
      *(long **)(*plVar3 + 8) = plVar2;
      *plVar3 = (long)plVar3;
      plVar3[1] = (long)plVar3;
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar3,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_dsp.cpp"
                    ,0xb2);
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
  }
  return 0;
}




undefined8 FUN_10056b860(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x18,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_dsp.cpp"
                                 ,0xc9,0,0);
  *plVar2 = (long)plVar2;
  plVar2[1] = (long)plVar2;
  plVar2[2] = 0;
  if (plVar2 == (long *)0x0) {
    uVar5 = 0x26;
  }
  else {
    lVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x2000,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_dsp.cpp"
                          ,0xcf,0);
    if (lVar3 == 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar2,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_memory.h"
                    ,0xd4);
      uVar5 = 0x26;
    }
    else {
      lVar4 = 0;
      do {
        plVar1 = (long *)(lVar3 + lVar4);
        plVar1[3] = -1;
        plVar1[1] = (long)plVar1;
        plVar1[2] = 0;
        lVar6 = *(long *)(param_1 + 0x14888);
        *plVar1 = param_1 + 0x14880;
        plVar1[1] = lVar6;
        *(long *)(param_1 + 0x14888) = (long)plVar1;
        *(long **)plVar1[1] = plVar1;
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != 0x2000);
      uVar5 = 0;
      plVar2[2] = lVar3;
      lVar3 = *(long *)(param_1 + 0x148a8);
      *plVar2 = param_1 + 0x148a0;
      plVar2[1] = lVar3;
      *(long **)(param_1 + 0x148a8) = plVar2;
      *(long **)plVar2[1] = plVar2;
    }
  }
  return uVar5;
}




undefined8 FUN_10056b990(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x14898) = 0xffffffffffffffff;
  lVar1 = param_1 + 0x14880;
  *(long *)lVar1 = lVar1;
  *(long *)(param_1 + 0x14888) = lVar1;
  *(undefined8 *)(param_1 + 0x14890) = 0;
  plVar2 = (long *)(param_1 + 0x148a0);
  plVar3 = (long *)*plVar2;
  while (plVar3 != plVar2) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar3[2],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_dsp.cpp"
                  ,0xf8);
    plVar4 = (long *)*plVar3;
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar3,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_memory.h"
                  ,0xd4);
    plVar3 = plVar4;
  }
  *(long **)(param_1 + 0x148a8) = plVar2;
  *plVar2 = (long)plVar2;
  *(undefined8 *)(param_1 + 0x148b0) = 0;
  return 0;
}




undefined8 FUN_10056ba8c(long param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  
  if (param_1 != 0) {
    FUN_10057097c(param_1,1);
  }
  pcVar1 = (char *)(param_1 + 0x147f4);
  if ((*pcVar1 == '\0') && (piVar2 = (int *)(param_1 + 0x147f0), 0 < *piVar2)) {
    *pcVar1 = '\x01';
    if ((param_2 == 0) || (FUN_10057097c(param_1,3), 0 < *piVar2)) {
      lVar10 = 0;
      puVar11 = (undefined4 *)(param_1 + 0x814);
      do {
        switch(puVar11[-9]) {
        case 0:
          uVar4 = *(undefined8 *)(puVar11 + -7);
          uVar5 = *(undefined8 *)(puVar11 + -5);
          uVar3 = puVar11[-1];
          uVar7 = *(undefined8 *)(puVar11 + -3);
          uVar6 = 0;
          goto LAB_10056bb84;
        case 1:
          uVar4 = *(undefined8 *)(puVar11 + -7);
          uVar5 = *(undefined8 *)(puVar11 + -5);
          uVar3 = puVar11[-1];
          uVar7 = *(undefined8 *)(puVar11 + -3);
          uVar6 = 1;
LAB_10056bb84:
          FUN_1005cde28(uVar4,uVar5,0,uVar3,uVar6,uVar7,0);
          break;
        case 2:
          FUN_1005ce38c(*(undefined8 *)(puVar11 + -7),*(undefined8 *)(puVar11 + -5),puVar11[-3],
                        puVar11[-2],puVar11[-1],0);
          break;
        case 3:
          FUN_1005cd788(*(undefined8 *)(puVar11 + -7),*(undefined8 *)(puVar11 + -5),
                        *(undefined8 *)(puVar11 + -3),1,0);
          if (*(long *)(puVar11 + -5) == 0) goto LAB_10056bd50;
          *(undefined1 *)(*(long *)(puVar11 + -5) + 0x3e) = 0;
          break;
        case 4:
          FUN_1005ceb30(*(undefined8 *)(puVar11 + -7),1,0,0,0);
          break;
        case 5:
          uVar4 = *(undefined8 *)(puVar11 + -7);
          uVar5 = 0;
LAB_10056bd44:
          FUN_1005ceb30(uVar4,uVar5,1,0,0);
LAB_10056bd50:
          *(undefined1 *)(*(long *)(puVar11 + -7) + 0x3e) = 0;
          break;
        case 6:
          lVar9 = *(long *)(puVar11 + -3);
          if (lVar9 == 0) {
            uVar4 = *(undefined8 *)(puVar11 + -7);
            uVar5 = 1;
            goto LAB_10056bd44;
          }
          FUN_1005cd788(*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x58),lVar9,1,0);
          break;
        case 7:
          FUN_1005ce754(*(undefined8 *)(puVar11 + -7),*(undefined8 *)(puVar11 + -5),0);
          break;
        case 8:
          pcVar8 = *(code **)(*(long *)(puVar11 + -7) + 0xf0);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(*(long *)(puVar11 + -7) + 0x98,1,0,0);
          }
          break;
        case 9:
          FUN_1005cd560(*(undefined8 *)(puVar11 + -7),1,0);
          break;
        case 10:
          FUN_100632c30(*(undefined8 *)(puVar11 + -7),*(undefined8 *)(puVar11 + -5));
          break;
        case 0xb:
          FUN_100632690(*(undefined8 *)(puVar11 + -7));
          break;
        case 0xc:
          lVar9 = *(long *)(puVar11 + -3);
          if (*(long *)(puVar11 + -5) == 0) {
            FUN_10062f024(lVar9 + 0x38,*(undefined8 *)(puVar11 + -7),
                          (long)*(short *)((long)puVar11 + -2),(long)*(short *)(puVar11 + -1),0);
            FUN_100614090(lVar9,*puVar11);
            FUN_1005d7f1c(param_1 + 0x14f68,*(undefined8 *)(puVar11 + -7),"",0);
          }
          else {
            FUN_10061445c(lVar9,*(undefined8 *)(puVar11 + -7),*(long *)(puVar11 + -5),
                          (long)*(short *)(puVar11 + -1),(long)*(short *)((long)puVar11 + -2));
          }
          break;
        case 0xd:
          FUN_100612aa8(puVar11[-5],*(undefined8 *)(puVar11 + -7),0);
          break;
        case 0xe:
          FUN_1005cc1d8(*(undefined8 *)(puVar11 + -7),puVar11[-5],1,0);
          break;
        case 0xf:
          FUN_100614b18(puVar11[-5],*(undefined8 *)(puVar11 + -7),puVar11[-4],
                        *(undefined1 *)(puVar11 + -3));
          break;
        case 0x10:
          FUN_1005c982c(*(undefined8 *)(puVar11 + -7),*(undefined1 *)(puVar11 + -5),1);
          break;
        case 0x11:
          FUN_1005c9b7c(*(undefined8 *)(puVar11 + -7),*(undefined8 *)(puVar11 + -5),
                        *(undefined8 *)(puVar11 + -3),*(undefined1 *)(puVar11 + -1));
          break;
        case 0x12:
          *(undefined8 *)(*(long *)(puVar11 + -7) + 0x1d0) = *(undefined8 *)(puVar11 + -5);
          break;
        case 0x13:
          FUN_1005cee28(*(undefined8 *)(puVar11 + -7));
        }
        lVar10 = lVar10 + 1;
        puVar11 = puVar11 + 10;
      } while (lVar10 < *piVar2);
      *piVar2 = 0;
      *pcVar1 = '\0';
      if (param_2 == 0) goto LAB_10056bdcc;
    }
    else {
      *piVar2 = 0;
      *pcVar1 = '\0';
    }
    FUN_100570990(param_1,3);
  }
LAB_10056bdcc:
  if (param_1 != 0) {
    FUN_100570990(param_1,1);
  }
  return 0;
}




undefined8 FUN_10056be4c(long param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  bVar2 = false;
  if ((param_1 != 0) && (((param_3 ^ 1) & 1) == 0)) {
    bVar2 = true;
    FUN_10057097c(param_1,1);
  }
  piVar1 = (int *)(param_1 + 0x147f0);
  iVar3 = *piVar1;
  if (iVar3 == 0x800) {
    FUN_10056ba8c(param_1,1);
    iVar3 = *piVar1;
  }
  lVar4 = param_1 + (long)iVar3 * 0x28;
  *(undefined8 *)(lVar4 + 0x810) = param_2[4];
  uVar5 = param_2[2];
  *(undefined8 *)(lVar4 + 0x808) = param_2[3];
  *(undefined8 *)(lVar4 + 0x800) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar4 + 0x7f8) = param_2[1];
  *(undefined8 *)(lVar4 + 0x7f0) = uVar5;
  *piVar1 = *piVar1 + 1;
  if (bVar2) {
    FUN_100570990(param_1,1);
  }
  return 0;
}




undefined8
FUN_10056bf00(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x15680);
  if (*plVar1 == 0) {
    plVar3 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x7d8,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_dsp.cpp"
                                   ,0x23f,0);
    FUN_1005d8098(plVar3 + 0x24);
    if (plVar3 == (long *)0x0) {
      uVar2 = 0x26;
    }
    else {
      *plVar3 = param_1;
      uVar2 = FUN_1005b12cc(plVar3,param_2,param_3,param_4,param_5);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        *plVar1 = (long)plVar3;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_10056bfcc(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x15680);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1005b1774(lVar3);
    if ((int)uVar2 == 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar3,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_dsp.cpp"
                    ,0x267);
      uVar2 = 0;
      *plVar1 = 0;
    }
  }
  return uVar2;
}




undefined4 FUN_10056c03c(long param_1,uint param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0x1f;
  if ((param_2 < 8) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x15680);
    *param_3 = lVar2;
    uVar1 = 9;
    if (lVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_10056c074(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_6c;
  undefined8 local_68;
  
  iVar6 = (int)param_2;
  lVar4 = param_1 + (long)iVar6 * 0x20;
  plVar1 = (long *)(lVar4 + 0x16658);
  if (*(long *)(param_1 + 0x700) == 0) {
    *plVar1 = param_1;
    *(int *)(lVar4 + 0x16670) = iVar6;
  }
  else {
    plVar8 = (long *)(lVar4 + 0x16660);
    if ((param_3 == 0) && (*plVar8 != 0)) {
      uVar3 = FUN_1005e3398(plVar1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar4 = *(long *)(param_1 + 0x15d08);
      plVar8 = *(long **)(lVar4 + 0x148);
      if (plVar8 != (long *)(lVar4 + 0x148)) {
        do {
          uVar3 = FUN_100581354(plVar8[2],param_2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)(*(long *)(param_1 + 0x15d08) + 0x148));
      }
    }
    else if ((param_3 != 0) && (*plVar8 == 0)) {
      uVar3 = FUN_1005e3154(plVar1,param_2,param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      plVar2 = (long *)(param_1 + 0x15d08);
      uVar3 = (**(code **)(*(long *)*plVar2 + 0x118))((long *)*plVar2,0xfffffffc,&local_68);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1005ce188(local_68,*plVar8,0,0,1,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      for (puVar5 = *(undefined8 **)(param_1 + 0x2e8); plVar7 = puVar5 + -0x26,
          plVar7 != (long *)(param_1 + 0x1b8); puVar5 = (undefined8 *)*puVar5) {
        uVar3 = (**(code **)(*plVar7 + 0x70))(plVar7,param_2,&local_6c);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*plVar7 + 0x68))(local_6c,plVar7,param_2);
        if (((int)uVar3 != 0) && ((int)uVar3 != 0x3a)) {
          return uVar3;
        }
      }
      plVar7 = *(long **)(*plVar2 + 0x148);
      if (plVar7 != (long *)(*plVar2 + 0x148)) {
        do {
          uVar3 = FUN_100581354(plVar7[2],param_2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)(*plVar2 + 0x148));
      }
      FUN_1005c986c(*plVar8,1,1);
    }
  }
  if (*(int *)(param_1 + 0x15c78) == iVar6) {
    plVar8 = (long *)(param_1 + 0x16798);
    if ((long *)*plVar8 == plVar8) {
      if ((*(long **)(param_1 + 0x167a0) != plVar8) && ((param_4 & 1) == 0)) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_1005e343c(plVar1,param_3);
  return uVar3;
}




undefined8
FUN_10056c2d0(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if (param_1 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = 0x1f;
    if (((param_3 != 0) && (param_4 != 0)) &&
       (uVar1 = FUN_10056c4b0(*(undefined8 *)(*param_1 + 0x90),param_2,&local_38), (int)uVar1 == 0))
    {
      uVar1 = FUN_1005637ac(local_38,param_3,param_4,param_5,param_6);
    }
  }
  return uVar1;
}




undefined8
FUN_10056c350(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  uVar1 = 0x1f;
  if (((param_3 != 0) && (param_4 != 0)) &&
     (uVar1 = FUN_10056c4b0(param_1,param_2,&local_38), (int)uVar1 == 0)) {
    uVar1 = FUN_1005637ac(local_38,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}




undefined8
FUN_10056c3c0(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if (param_1 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = 0x1f;
    if (((param_3 != 0) && (param_4 != 0)) &&
       (uVar1 = FUN_10056c4b0(*(undefined8 *)(*param_1 + 0x90),param_2,&local_38), (int)uVar1 == 0))
    {
      uVar1 = FUN_100563994(local_38,param_3,param_4,param_5,param_6);
    }
  }
  return uVar1;
}




undefined8
FUN_10056c440(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  uVar1 = 0x1f;
  if (((param_3 != 0) && (param_4 != 0)) &&
     (uVar1 = FUN_10056c4b0(param_1,param_2,&local_38), (int)uVar1 == 0)) {
    uVar1 = FUN_100563994(local_38,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}




undefined8 FUN_10056c4b0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (param_3 == (long *)0x0) {
    uVar4 = 0x1f;
  }
  else {
    if (param_1 != 0) {
      FUN_10057097c(param_1,0x12);
    }
    plVar1 = (long *)(param_1 + 0x15d90);
    plVar3 = plVar1;
    do {
      plVar3 = (long *)*plVar3;
      if (plVar3 == plVar1) {
        lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x58,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_fft.cpp"
                              ,0x5c,0);
        *param_3 = lVar2;
        if (lVar2 == 0) {
          uVar4 = 0x26;
        }
        else {
          uVar4 = FUN_100563458(lVar2,param_2);
          plVar3 = (long *)*param_3;
          if ((int)uVar4 == 0) {
            uVar4 = 0;
            lVar2 = *plVar1;
            *plVar3 = lVar2;
            plVar3[1] = (long)plVar1;
            *(long **)(lVar2 + 8) = plVar3;
            *(long **)plVar3[1] = plVar3;
          }
          else {
            FUN_1005636b8();
            *param_3 = 0;
          }
        }
        goto LAB_10056c59c;
      }
      *param_3 = (long)plVar3;
    } while (*(int *)(plVar3 + 3) != (int)param_2);
    uVar4 = 0;
LAB_10056c59c:
    if ((param_1 != 0) && (param_1 != 0)) {
      FUN_100570990(param_1,0x12);
    }
  }
  return uVar4;
}




undefined8 FUN_10056c5c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  
  lVar2 = FUN_1005ed214(param_2,0x2e);
  if (lVar2 == 0) {
    uVar3 = 0x12;
  }
  else {
    lVar4 = 0;
    ppuVar5 = &PTR_s_AIF_1014a19c8;
    do {
      lVar6 = 0;
      ppuVar7 = ppuVar5;
      do {
        iVar1 = FUN_1005ed12c(lVar2 + 1,*ppuVar7);
        if (iVar1 == 0) {
          *param_3 = (&DAT_1014a19c0)[lVar4 * 0xc];
          return 0;
        }
        lVar6 = lVar6 + 1;
        ppuVar7 = ppuVar7 + 1;
      } while (lVar6 < (int)(&DAT_1014a19c4)[lVar4 * 0xc]);
      lVar4 = lVar4 + 1;
      ppuVar5 = ppuVar5 + 6;
    } while (lVar4 < 0x12);
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_10056cd50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x210,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                         ,0x1f6,0,0);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0x26;
  }
  else {
    FUN_1005d0c24(puVar1);
    *puVar1 = &PTR_FUN_1014a2940;
    *(undefined4 *)(puVar1 + 7) = 1;
    FUN_1005d21f8(puVar1,param_1,0,0,0);
    uVar2 = 0;
    *param_2 = puVar1;
  }
  return uVar2;
}




undefined8
FUN_10056cdf4(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  
  if (param_3 == 0) {
    bVar7 = false;
    iVar11 = *(int *)(param_1 + 0x15d84);
LAB_10056cf8c:
    if ((*(char *)(param_1 + 0x15d80) == '\0') || ((bVar7 && (*(int *)(param_3 + 0xd0) != 0)))) {
      iVar8 = FUN_1005ed180("http://",param_2,7);
      if ((iVar8 == 0) ||
         ((((iVar8 = FUN_1005ed180("http:\\\\",param_2,7), iVar8 == 0 ||
            (iVar8 = FUN_1005ed180("https://",param_2,8), iVar8 == 0)) ||
           (iVar8 = FUN_1005ed180("https:\\\\",param_2,8), iVar8 == 0)) ||
          ((iVar8 = FUN_1005ed180("mms://",param_2,6), iVar8 == 0 ||
           (iVar8 = FUN_1005ed180("mms:\\\\",param_2,6), iVar8 == 0)))))) {
        puVar10 = (undefined8 *)
                  FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x1698,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                                ,0x232,0,0);
        FUN_1005d23a0();
        puVar9 = (undefined8 *)0x0;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_1005d0c4c(puVar10,param_1,0,iVar11);
          if (param_5 != (undefined1 *)0x0) {
            *param_5 = 1;
          }
          goto LAB_10056d178;
        }
      }
      else {
        puVar10 = (undefined8 *)
                  FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x208,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                                ,0x247,0,0);
        FUN_1005d0c24();
        *puVar10 = &PTR_FUN_1014a28d8;
        *(undefined4 *)(puVar10 + 7) = 4;
        puVar10[0x40] = 0;
        if (puVar10 != (undefined8 *)0x0) goto LAB_10056d164;
        puVar9 = (undefined8 *)0x0;
      }
    }
    else {
      puVar10 = (undefined8 *)
                FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x248,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                              ,0x21e,0,0);
      FUN_1005d0c24();
      *(undefined4 *)(puVar10 + 7) = 0;
      puVar10[0x48] = 0;
      puVar10[0x47] = 0;
      *puVar10 = &PTR_FUN_1014a2a78;
      puVar10[0x46] = 0;
      puVar10[0x45] = 0;
      puVar10[0x44] = 0;
      puVar10[0x43] = 0;
      puVar10[0x42] = 0;
      puVar10[0x41] = 0;
      puVar9 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        if (bVar7) {
LAB_10056d15c:
          puVar10[0x48] = *(undefined8 *)(param_3 + 0xa8);
        }
LAB_10056d164:
        FUN_1005d0c4c(puVar10,param_1,0,iVar11);
LAB_10056d178:
        *param_4 = puVar10;
        return 0;
      }
    }
  }
  else {
    iVar11 = *(int *)(param_3 + 0xb0);
    if (iVar11 == -1) {
      iVar11 = 0;
    }
    else if (iVar11 == 0) {
      iVar11 = *(int *)(param_1 + 0x15d84);
    }
    if (*(long *)(param_3 + 0x78) == 0) {
      bVar7 = true;
      goto LAB_10056cf8c;
    }
    if (*(long *)(param_3 + 0x80) == 0) {
      bVar7 = true;
      goto LAB_10056cf8c;
    }
    if ((*(long *)(param_3 + 0x88) == 0) || (*(long *)(param_3 + 0x90) == 0)) {
      if (*(long *)(param_3 + 0x98) == 0) {
        bVar7 = true;
      }
      else {
        if (*(long *)(param_3 + 0xa0) != 0) goto LAB_10056ce8c;
        bVar7 = true;
      }
      goto LAB_10056cf8c;
    }
LAB_10056ce8c:
    if (*(int *)(param_3 + 0xd0) != 0) {
      bVar7 = true;
      goto LAB_10056cf8c;
    }
    puVar9 = (undefined8 *)
             FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x248,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                           ,0x210,0,0);
    FUN_1005d0c24();
    *(undefined4 *)(puVar9 + 7) = 0;
    puVar9[0x48] = 0;
    puVar9[0x47] = 0;
    *puVar9 = &PTR_FUN_1014a2a78;
    puVar9[0x46] = 0;
    puVar9[0x45] = 0;
    puVar9[0x44] = 0;
    puVar9[0x43] = 0;
    puVar9[0x42] = 0;
    puVar9[0x41] = 0;
    if (puVar9 != (undefined8 *)0x0) {
      lVar1 = *(long *)(param_3 + 0x78);
      lVar4 = *(long *)(param_3 + 0x80);
      lVar2 = *(long *)(param_3 + 0x88);
      lVar5 = *(long *)(param_3 + 0x90);
      lVar3 = *(long *)(param_3 + 0x98);
      lVar6 = *(long *)(param_3 + 0xa0);
      if ((((lVar1 == 0 || lVar4 == 0) || (lVar2 == 0)) || (lVar5 == 0)) &&
         ((uVar12 = 0x1c, (lVar1 == 0 || lVar4 == 0) || lVar3 == 0 || (lVar6 == 0))))
      goto LAB_10056d188;
      puVar9[0x41] = lVar1;
      puVar9[0x42] = lVar4;
      puVar9[0x43] = lVar2;
      puVar9[0x44] = lVar5;
      puVar9[0x45] = lVar3;
      puVar9[0x46] = lVar6;
      puVar10 = puVar9;
      goto LAB_10056d15c;
    }
  }
  uVar12 = 0x26;
LAB_10056d188:
  if (puVar9 != (undefined8 *)0x0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar9,"../../src/fmod_autocleanup.h",
                  0xbe);
  }
  return uVar12;
}




undefined8
FUN_10056d1cc(long param_1,long param_2,ulong param_3,ulong param_4,int param_5,long param_6,
             int param_7,long *param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  long *plVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint uVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined8 uVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  float fVar33;
  long *local_4548;
  long local_4530;
  undefined1 *local_4510;
  ulong local_4508;
  long local_4500;
  undefined8 *local_44f8;
  undefined4 local_44e0;
  int local_44dc;
  undefined8 local_44d8;
  long local_44d0;
  undefined4 local_44c8;
  uint local_44bc;
  long *local_44b8;
  long local_44b0;
  undefined4 local_44a4;
  long local_44a0;
  int local_4498;
  undefined4 local_4494;
  int local_4490;
  char local_4489;
  undefined8 *local_4488;
  int *local_4480;
  undefined1 auStack_4478 [256];
  undefined4 local_4378;
  undefined4 local_4374;
  int local_4370;
  undefined4 local_436c;
  undefined4 local_4368;
  int local_4360;
  int local_435c;
  undefined4 local_4354;
  undefined4 local_4350;
  undefined4 local_434c;
  undefined1 auStack_4348 [40];
  undefined *local_4320;
  undefined *local_4318;
  undefined *local_4310;
  undefined4 local_42f8;
  undefined1 auStack_42f0 [24];
  code *local_42d8;
  undefined4 local_4244;
  uint local_423c;
  uint local_4238;
  undefined4 local_4230;
  int local_422c;
  int local_4224;
  int local_4220;
  undefined8 local_4208;
  undefined8 local_4200;
  undefined8 local_41f8;
  undefined8 local_41f0;
  undefined8 local_41e0;
  long local_41c0;
  undefined8 *local_41b8;
  undefined1 auStack_41a9 [16385];
  undefined1 auStack_1a8 [256];
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  lVar25 = *(long *)PTR____stack_chk_guard_101444218;
  local_4488 = (undefined8 *)0x0;
  local_4480 = (int *)0x0;
  local_4489 = '\0';
  local_4498 = 0;
  local_4494 = 0;
  lVar28 = lVar25;
  if (param_8 == (long *)0x0) {
LAB_10056d340:
    puVar23 = (undefined8 *)0x0;
    uVar8 = 0x1f;
LAB_10056d348:
    piVar31 = (int *)0x0;
    local_4530 = 0;
    goto LAB_10056d350;
  }
  uVar29 = (uint)param_3;
  if ((uVar29 >> 0x10 & 1) == 0) {
    *param_8 = 0;
  }
  uVar24 = uVar29;
  if ((param_3 & 0x200) != 0) {
    uVar24 = uVar29 & 0xfffffeff;
  }
  if ((param_3 & 0x80) != 0) {
    uVar24 = uVar29 & 0xfffffcff;
  }
  if ((uVar24 & 8) != 0) {
    uVar24 = uVar24 & 0xfb83ffff;
  }
  if ((uVar24 & 0x47c0000) != 0) {
    uVar24 = uVar24 | 0x10;
  }
  if ((uVar24 & 0x1400) != 0) {
    if ((((param_6 != 0) && (*(int *)(param_6 + 0x14) != 0)) && (0 < *(int *)(param_6 + 0xc))) &&
       (*(int *)(param_6 + 0x10) != 0)) {
      if ((uVar24 & 0x10000800) != 0) goto LAB_10056d2c4;
      goto LAB_10056d3e4;
    }
    goto LAB_10056d340;
  }
  if ((uVar24 & 0x10000800) == 0) {
LAB_10056d3e4:
    if ((uVar24 >> 10 & 1) == 0) {
      uVar8 = FUN_10056cdf4(param_1,param_2,param_6,&local_4488,&local_4489);
      if ((int)uVar8 == 0) {
        *(uint *)(local_4488 + 8) = uVar24 >> 7 & 1;
        puVar23 = local_4488;
        if ((*param_8 != 0) && (local_4489 != '\0')) {
          *(undefined4 *)(*param_8 + 0x108) = 3;
        }
        goto LAB_10056d510;
      }
      puVar23 = (undefined8 *)0x0;
    }
    else {
      puVar23 = (undefined8 *)
                FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x208,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                              ,0x358,0,0);
      FUN_1005d0c24();
      *puVar23 = &PTR_FUN_1014a2a10;
      local_4488 = puVar23;
      if (puVar23 != (undefined8 *)0x0) {
        if (param_6 == 0) {
LAB_10056d4e4:
          iVar7 = *(int *)(param_1 + 0x15d84);
        }
        else {
          iVar7 = *(int *)(param_6 + 0xb0);
          if (iVar7 == -1) {
            iVar7 = 0;
          }
          else if (iVar7 == 0) goto LAB_10056d4e4;
        }
        FUN_1005d0c4c(puVar23,param_1,0,iVar7);
        uVar29 = uVar24 >> 7;
        uVar24 = uVar24 & 0xffffefff;
        *(uint *)(puVar23 + 8) = uVar29 & 1;
        goto LAB_10056d510;
      }
      uVar8 = 0x26;
    }
    goto LAB_10056d348;
  }
  if ((param_6 == 0) || (*(int *)(param_6 + 4) == 0)) goto LAB_10056d340;
LAB_10056d2c4:
  puVar23 = (undefined8 *)
            FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x210,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                          ,0x1f6,0,0);
  if (puVar23 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
    uVar8 = 0x26;
    goto LAB_10056d348;
  }
  FUN_1005d0c24(puVar23);
  *puVar23 = &PTR_FUN_1014a2940;
  *(undefined4 *)(puVar23 + 7) = 1;
  FUN_1005d21f8(puVar23,param_1,0,0,0);
  local_4488 = puVar23;
LAB_10056d510:
  if ((uVar24 >> 7 & 1) == 0) {
    local_4510 = (undefined1 *)0x0;
    local_44f8 = puVar23;
  }
  else {
    if (*(int *)(puVar23 + 0x2f) - 1U >> 0xe == 0) {
      puVar23[0x3e] = auStack_41a9;
      local_4510 = auStack_41a9;
      puVar19 = local_4488;
    }
    else {
      local_4510 = (undefined1 *)0x0;
      puVar19 = puVar23;
    }
    *(uint *)((long)puVar19 + 0x1a4) = *(uint *)((long)puVar19 + 0x1a4) | 0x800;
    local_44f8 = local_4488;
  }
  if (param_6 == 0) {
    uVar15 = 0;
    uVar14 = 0;
    uVar8 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(param_6 + 4);
    uVar15 = *(undefined4 *)(param_6 + 8);
    uVar8 = *(undefined8 *)(param_6 + 0x58);
  }
  uVar8 = FUN_1005d0d8c(local_44f8,param_2,uVar14,uVar15,uVar8);
  if ((int)uVar8 != 0) goto LAB_10056d348;
  if ((*param_8 != 0) && (local_4489 != '\0')) {
    *(undefined4 *)(*param_8 + 0x108) = 4;
  }
  puVar19 = (undefined8 *)(param_1 + 0x15a58);
  uVar8 = FUN_1005e20a0(*puVar19,&local_4490);
  if ((int)uVar8 != 0) {
LAB_10056d7e0:
    local_4530 = 0;
    piVar31 = (int *)0x0;
    goto LAB_10056d7e8;
  }
  if ((param_6 == 0) || (iVar7 = *(int *)(param_6 + 0x70), iVar7 == 0)) {
    if (((uVar24 & 0x10000c00) != 0) || (lVar11 = FUN_1005ed214(param_2,0x2e), lVar11 == 0))
    goto LAB_10056d73c;
    lVar16 = 0;
    ppuVar20 = &PTR_s_AIF_1014a19c8;
    do {
      lVar28 = 0;
      ppuVar26 = ppuVar20;
      do {
        iVar7 = FUN_1005ed12c(lVar11 + 1,*ppuVar26);
        if (iVar7 == 0) {
          iVar7 = (&DAT_1014a19c0)[lVar16 * 0xc];
          bVar4 = 1;
          lVar28 = *(long *)PTR____stack_chk_guard_101444218;
          goto LAB_10056d6d4;
        }
        lVar28 = lVar28 + 1;
        ppuVar26 = ppuVar26 + 1;
      } while (lVar28 < (int)(&DAT_1014a19c4)[lVar16 * 0xc]);
      iVar32 = 0;
      lVar16 = lVar16 + 1;
      ppuVar20 = ppuVar20 + 6;
      lVar28 = *(long *)PTR____stack_chk_guard_101444218;
    } while (lVar16 < 0x12);
  }
  else {
    bVar4 = 0;
LAB_10056d6d4:
    iVar32 = 0;
    if (0 < local_4490) {
      do {
        iVar6 = FUN_1005e238c(*puVar19,iVar32,&local_44a4);
        if (((iVar6 == 0) && (iVar6 = FUN_1005e16d8(*puVar19,local_44a4,&local_44a0), iVar6 == 0))
           && ((*(int *)(local_44a0 + 0x78) == iVar7 ||
               ((bool)(bVar4 & *(int *)(local_44a0 + 0x78) == 0))))) goto LAB_10056d740;
        iVar32 = iVar32 + 1;
      } while (iVar32 < local_4490);
LAB_10056d73c:
      iVar32 = 0;
    }
  }
LAB_10056d740:
  if ((uVar24 >> 0x19 & 1) == 0) {
    local_42f8 = 0;
    local_41e0 = 0;
    local_41c0 = 0;
    local_41f0 = 0;
    local_41f8 = 0;
    local_4200 = 0;
    local_4208 = 0;
    local_4320 = PTR_defaultFileRead_101444158;
    local_4318 = PTR_defaultFileSeek_101444160;
    local_4310 = PTR_defaultMetaData_101444168;
    local_41b8 = local_44f8;
    pvVar9 = (void *)FUN_1005a5f2c();
    _memcpy(auStack_42f0,pvVar9,0xd8);
    uVar8 = FUN_1005d1d28(local_44f8,0,0);
    if (((int)uVar8 != 0) || (uVar8 = (*local_42d8)(auStack_4348,uVar24,param_6), (int)uVar8 != 0))
    goto LAB_10056d7e0;
    local_4500 = local_41c0;
    local_41c0 = 0;
    local_41b8 = (undefined8 *)0x0;
    FUN_100585d48(auStack_4348,0);
  }
  else {
    local_4500 = 0;
  }
  lVar11 = local_4500;
  uVar8 = FUN_10056c698(param_1,iVar32,uVar24,param_3,local_44f8,param_6,&local_4480,&local_4494,
                        &local_4498);
  if ((int)uVar8 == 0x13) {
    if (0 < local_4490) {
      iVar7 = 0;
      iVar6 = local_4490;
      do {
        if ((iVar32 != iVar7) &&
           (uVar8 = FUN_10056c698(param_1,iVar7,uVar24,param_3,local_44f8,param_6,&local_4480,
                                  &local_4494,&local_4498), iVar6 = local_4490, (int)uVar8 != 0x13))
        goto LAB_10056d8a0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
LAB_10056d8f0:
    local_4530 = 0;
    piVar31 = (int *)0x0;
    uVar8 = 0x13;
    goto LAB_10056d8fc;
  }
LAB_10056d8a0:
  if ((int)uVar8 != 0) {
    local_4530 = 0;
    piVar31 = (int *)0x0;
    goto LAB_10056d8fc;
  }
  if (local_4480 == (int *)0x0) goto LAB_10056d8f0;
  if ((param_6 == 0) || (iVar7 = *(int *)(param_6 + 0x20), iVar7 == 0)) {
    iVar7 = *local_4480;
  }
  if (local_4500 != 0) {
    if (*(long *)(local_4480 + 0x62) == 0) {
      local_4500 = 0;
      *(long *)(local_4480 + 0x62) = lVar11;
    }
    else {
      FUN_1005d8cf8(*(long *)(local_4480 + 0x62),local_4500);
      FUN_1005d8a58(local_4500);
      local_4500 = 0;
    }
  }
  FUN_100586108(local_4480);
  piVar31 = local_4480;
  if (iVar7 < 1) {
    local_4530 = 0;
  }
  else {
    local_4530 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar7 << 3,
                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                               ,0x41b,0);
    if (local_4530 == 0) {
      local_4530 = 0;
      puVar23 = (undefined8 *)0x0;
      local_44f8 = (undefined8 *)0x0;
      uVar8 = 0x26;
      goto LAB_10056d8fc;
    }
  }
  piVar5 = local_4480;
  _bzero(auStack_1a8,0x130);
  uVar8 = (**(code **)(piVar5 + 0x2a))(piVar5,0,auStack_1a8);
  if ((int)uVar8 != 0) {
    puVar23 = (undefined8 *)0x0;
    local_44f8 = (undefined8 *)0x0;
    goto LAB_10056d8fc;
  }
  if (0x20 < local_a4) {
    puVar23 = (undefined8 *)0x0;
    local_44f8 = (undefined8 *)0x0;
    uVar8 = 0x40;
    goto LAB_10056d8fc;
  }
  if (((uVar24 & 0x10300) == 0) && (local_4480[0x19] != 0)) {
    if ((uVar24 & 0x10000800) == 0) {
      *(undefined4 *)(local_44f8 + 8) = 1;
    }
    uVar24 = uVar24 | 0x80;
  }
  lVar28 = local_4530;
  if (local_4480[0x14] == 0xb) {
    if ((uVar24 >> 0x10 & 1) == 0) {
      plVar10 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x158,
                                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                                      ,0x44e,0);
      FUN_1005e7bdc();
      plVar21 = plVar10;
      if (plVar10 != (long *)0x0) goto LAB_10056db34;
LAB_10056de74:
      uVar8 = 0x26;
      goto LAB_10056f00c;
    }
    plVar10 = (long *)0x0;
    plVar21 = (long *)*param_8;
LAB_10056db34:
    if (((uVar24 >> 0x1b & 1) == 0) && (plVar21[6] == 0)) {
      lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                             ,0x458,0);
      plVar21[6] = lVar11;
      if (lVar11 == 0) {
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10,1);
        }
        goto LAB_10056de74;
      }
    }
    plVar21[0x1a] = param_1;
    if (param_6 == 0) {
      lVar11 = 0;
      plVar21[0x28] = 0;
    }
    else {
      plVar21[0x28] = *(long *)(param_6 + 0x38);
      lVar11 = *(long *)(param_6 + 0x40);
    }
    lVar16 = 0;
    plVar21[0x29] = lVar11;
    plVar21[0x2a] = (long)plVar21;
    *(int *)((long)plVar21 + 0x24) = local_4480[0x14];
    plVar21[0xb] = (long)local_4480;
    fVar33 = *(float *)(param_1 + 0x15a44);
    *(float *)((long)plVar21 + 0x74) = fVar33;
    *(float *)(plVar21 + 0xf) = fVar33 * 10000.0;
    plVar21[0x13] = 0;
    *(undefined4 *)(plVar21 + 0x15) = 0;
    *(undefined4 *)(plVar21 + 0x17) = 0xffffffff;
    if (param_6 != 0) {
      lVar16 = *(long *)(param_6 + 0x68);
    }
    piVar31 = (int *)0x0;
    uVar27 = 0;
    plVar21[0x18] = lVar16;
    *param_8 = (long)plVar21;
    goto LAB_10056eaec;
  }
  if ((uVar24 >> 7 & 1) == 0) {
    local_44b8 = (long *)0x0;
    if (iVar7 < 1) {
      local_4548 = (long *)0x0;
      plVar21 = (long *)0x0;
LAB_10056df10:
      iVar32 = 1;
      if (iVar7 != 0) {
        iVar32 = iVar7;
      }
      if (iVar32 < 1) {
        uVar27 = 0;
      }
      else {
        lVar11 = 0;
        uVar27 = 0;
        bVar1 = false;
        do {
          if (iVar7 == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = *local_4480;
          }
          if (iVar6 <= lVar11) break;
          _bzero(auStack_4348,0x130);
          uVar27 = (**(code **)(local_4480 + 0x2a))(local_4480,lVar11,auStack_4348);
          if ((int)uVar27 != 0) {
            bVar1 = true;
            uVar8 = uVar27;
            goto LAB_10056eac8;
          }
          if (iVar7 == 0 && (uVar24 & 0x10000) != 0) {
            local_44b8 = (long *)*param_8;
          }
          else {
            local_44b8 = (long *)0x0;
          }
          iVar6 = (int)lVar11;
          if ((param_6 == 0 || iVar7 < 1) || (*(long *)(param_6 + 0x28) == 0)) {
LAB_10056e04c:
            if (param_6 != 0) {
              if (*(int *)(param_6 + 0xb8) != 0) {
                local_4224 = *(int *)(param_6 + 0xb8);
              }
              if (*(int *)(param_6 + 0xb4) != 0) {
                local_4220 = *(int *)(param_6 + 0xb4);
              }
            }
            uVar29 = uVar24;
            if ((uVar24 & 0x200) == 0) {
LAB_10056e0a0:
              if ((uVar24 & 0x10000000) == 0 || bVar1) goto LAB_10056e0e8;
              if (*(code **)(local_4480 + 0x36) != (code *)0x0) {
                uVar27 = (**(code **)(local_4480 + 0x36))();
                if ((int)uVar27 == 0) {
                  bVar1 = false;
                  goto LAB_10056e0e8;
                }
                bVar1 = true;
                uVar8 = uVar27;
                goto LAB_10056eac8;
              }
              uVar27 = 0x27;
            }
            else {
              if ((uint)local_4480[0x31] < 2) {
                uVar29 = uVar24 & 0xfffffdff;
                if (plVar21 != (long *)0x0) {
                  *(uint *)((long)plVar21 + 0x2c) = *(uint *)((long)plVar21 + 0x2c) & 0xfffffdff;
                }
                goto LAB_10056e0a0;
              }
              bVar1 = true;
LAB_10056e0e8:
              uVar8 = FUN_10056f048(param_1,uVar29,auStack_4348,&local_44b8);
              uVar27 = uVar8;
              if ((int)uVar8 == 0) {
                *(int *)(local_44b8 + 0x17) = iVar6;
                local_44b8[0x16] = (long)plVar21;
                *(int *)((long)local_44b8 + 0x24) = local_4480[0x14];
                local_44b8[0xb] = (long)local_4480;
                fVar33 = *(float *)(param_1 + 0x15a44);
                *(float *)((long)local_44b8 + 0x74) = fVar33;
                *(float *)(local_44b8 + 0xf) = fVar33 * 10000.0;
                if (param_6 == 0) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = *(long *)(param_6 + 0x68);
                }
                local_44b8[0x18] = lVar16;
                if ((local_44b8[0x25] != 0) ||
                   (uVar27 = (**(code **)(*local_44b8 + 0xd0))
                                       (local_44b8,*(undefined8 *)(param_1 + 0x15d48)),
                   (int)uVar27 == 0)) {
                  if (iVar6 == 0 && iVar7 == 0) {
                    if (param_6 == 0) {
                      lVar16 = 0;
                      local_44b8[0x28] = 0;
                    }
                    else {
                      local_44b8[0x28] = *(long *)(param_6 + 0x38);
                      lVar16 = *(long *)(param_6 + 0x40);
                    }
                    local_44b8[0x29] = lVar16;
                    local_44b8[0x2a] = (long)local_44b8;
                  }
                  if ((*(code **)(local_4480 + 0x28) == (code *)0x0) ||
                     (uVar27 = (**(code **)(local_4480 + 0x28))(local_4480,lVar11,local_44b8),
                     (int)uVar27 == 0)) {
                    if ((uVar29 & 0x200) == 0 && iVar6 == 0) {
                      piVar31 = local_4480;
                      if (*(int **)(local_4480 + 0x50) != (int *)0x0) {
                        piVar31 = *(int **)(local_4480 + 0x50);
                      }
                      piVar31[0x60] = piVar31[0x60] & 0xfffffdff;
                      if (*(code **)(piVar31 + 0x48) != (code *)0x0) {
                        uVar27 = (**(code **)(piVar31 + 0x48))
                                           (piVar31,(int)local_44b8[0xc],
                                            (int)*(float *)((long)local_44b8 + 100),lVar11,
                                            *(undefined8 *)(piVar31 + 0x52),local_4480,0);
                        if ((int)uVar27 != 0) goto LAB_10056eabc;
                        piVar31[0x15] = piVar31[0x15] | 0x200;
                      }
                    }
                    piVar31 = local_4480;
                    local_4480[0x5e] = 0;
                    if (*(void **)(local_4480 + 0x58) != (void *)0x0) {
                      _bzero(*(void **)(local_4480 + 0x58),(ulong)(uint)local_4480[0x5d]);
                    }
                    pcVar17 = *(code **)(piVar31 + 0x34);
                    if ((pcVar17 == (code *)0x0) || (uVar27 = (*pcVar17)(piVar31), (int)uVar27 == 0)
                       ) {
                      if ((uVar29 & 0x200) == 0) {
                        uVar27 = 2;
                      }
                      else {
                        uVar27 = 8;
                      }
                      uVar27 = FUN_100586284(local_4480,lVar11,0,uVar27);
                      if ((int)uVar27 == 0) {
                        pcVar17 = (code *)local_44b8[0x29];
                        if (pcVar17 != (code *)0x0) {
                          if (iVar7 < 1) {
                            lVar16 = 0;
                            plVar10 = local_44b8;
                          }
                          else {
                            pcVar17 = (code *)plVar21[0x29];
                            plVar10 = plVar21;
                            lVar16 = lVar11;
                          }
                          (*pcVar17)(plVar10,lVar16,0,2);
                        }
                        if ((uVar29 >> 0x1c & 1) == 0) {
                          if ((uVar29 >> 0xd & 1) != 0) {
                            uVar27 = 0;
LAB_10056e3e4:
                            if (iVar7 < 1) {
                              piVar31 = (int *)0x0;
                            }
                            else {
                              piVar31 = (int *)0x0;
                              *(long **)(local_4530 + lVar11 * 8) = local_44b8;
                              *(int *)((long)plVar21 + 0xac) = *(int *)((long)plVar21 + 0xac) + 1;
                            }
                            goto LAB_10056e410;
                          }
                          uVar22 = local_4238;
                          if (((uVar29 & 0x200) != 0) &&
                             ((0x11 < (uint)local_4480[0x14] ||
                              (uVar22 = local_423c,
                              (1 << (ulong)(local_4480[0x14] & 0x1f) & 0x20220U) == 0)))) {
                            uVar22 = local_423c - local_4480[0x4c];
                          }
                          uVar27 = FUN_1005e9f28(local_44b8,0,uVar22,&local_44bc);
                          if (((uint)uVar27 | 0x10) == 0x10) {
                            if (uVar22 != local_44bc) {
                              uVar8 = 0xd;
                              if ((uVar29 & 0x200) != 0) {
                                piVar31 = (int *)0x0;
                                bVar1 = true;
                                goto LAB_10056eac8;
                              }
                              if (local_44bc == 0) {
                                piVar31 = (int *)0x0;
                                bVar1 = true;
                                goto LAB_10056eac8;
                              }
                              if (*(uint *)((long)local_44b8 + 0x3c) < local_44bc) {
                                piVar31 = (int *)0x0;
                                bVar1 = true;
                                uVar8 = 0xd;
                                goto LAB_10056eac8;
                              }
                              if (*(uint *)(local_44b8 + 9) == *(uint *)((long)local_44b8 + 0x3c)) {
                                *(uint *)(local_44b8 + 9) = local_44bc;
                              }
                            }
                            uVar27 = FUN_1005ea444(local_44b8,0);
                            if (((uint)uVar27 | 0x10) == 0x10) goto LAB_10056e3e4;
                          }
                          else if ((*(byte *)((long)local_44b8 + 0x2e) & 1) == 0)
                          goto joined_r0x00010056ea0c;
                        }
                        else {
                          uVar27 = (**(code **)(*local_44b8 + 0x188))
                                             (local_44b8,
                                              param_2 + (ulong)*(uint *)(*(long *)(local_4480 + 100)
                                                                        + 0x180));
                          if ((int)uVar27 == 0) {
                            uVar27 = 0;
                            goto LAB_10056e3e4;
                          }
joined_r0x00010056ea0c:
                          if ((plVar21 != (long *)0x0) || (local_4480 != (int *)0x0)) {
                            (**(code **)(*local_44b8 + 0x18))(local_44b8,1);
                          }
                        }
                      }
                    }
                  }
                }
LAB_10056eabc:
                piVar31 = (int *)0x0;
                bVar1 = true;
                uVar8 = uVar27;
                goto LAB_10056eac8;
              }
            }
            bVar1 = true;
            uVar8 = uVar27;
            goto LAB_10056eac8;
          }
          if (*(int *)(param_6 + 0x30) < 1) {
            uVar27 = 0;
          }
          else {
            lVar16 = 0;
            do {
              if (*(int *)(*(long *)(param_6 + 0x28) + lVar16 * 4) == iVar6) goto LAB_10056e04c;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)(param_6 + 0x30));
            uVar27 = 0;
          }
LAB_10056e410:
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar32);
      }
      puVar23 = local_4488;
      if (((uVar24 >> 0xd & 1) == 0) &&
         ((((param_6 == 0 || (iVar7 < 1)) || (local_4480[0x14] != 3)) ||
          (*(long *)(param_6 + 0x28) == 0)))) {
        if (local_4488 != (undefined8 *)0x0) {
          FUN_1005d0f74(local_4488);
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar23,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                        ,0x779);
        }
        local_4480[100] = 0;
        local_4480[0x65] = 0;
        if (*(long *)(local_4480 + 0x50) != 0) {
          *(undefined8 *)(*(long *)(local_4480 + 0x50) + 400) = 0;
        }
      }
      if (iVar7 < 1) {
        bVar1 = false;
        *param_8 = (long)local_44b8;
        goto LAB_10056eac8;
      }
      *param_8 = (long)plVar21;
      goto LAB_10056eaec;
    }
    if ((uVar24 >> 0x10 & 1) == 0) {
      FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x158,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                    ,0x663,0);
      plVar21 = (long *)FUN_1005e7bdc();
      local_4548 = plVar21;
      if (plVar21 == (long *)0x0) goto LAB_10056de74;
    }
    else {
      local_4548 = (long *)0x0;
      plVar21 = (long *)*param_8;
    }
    if (((uVar24 >> 0x1b & 1) != 0) || (plVar21[6] != 0)) {
LAB_10056de40:
      plVar21[0x1a] = param_1;
      if (param_6 == 0) {
        lVar28 = 0;
        plVar21[0x28] = 0;
      }
      else {
        plVar21[0x28] = *(long *)(param_6 + 0x38);
        lVar28 = *(long *)(param_6 + 0x40);
      }
      plVar21[0x29] = lVar28;
      plVar21[0x2a] = (long)plVar21;
      *(int *)((long)plVar21 + 0x24) = local_4480[0x14];
      plVar21[0xb] = (long)local_4480;
      fVar33 = *(float *)(param_1 + 0x15a44);
      *(float *)((long)plVar21 + 0x74) = fVar33;
      *(float *)(plVar21 + 0xf) = fVar33 * 10000.0;
      plVar21[0x13] = local_4530;
      *(int *)(plVar21 + 0x15) = iVar7;
      *(undefined4 *)(plVar21 + 0x17) = 0xffffffff;
      if (param_6 == 0) {
        lVar28 = 0;
      }
      else {
        lVar28 = *(long *)(param_6 + 0x68);
      }
      piVar31 = (int *)0x0;
      plVar21[0x18] = lVar28;
      *(uint *)((long)plVar21 + 0x2c) = uVar24;
      *(float *)((long)plVar21 + 100) = (float)local_a0;
      lVar28 = 0;
      goto LAB_10056df10;
    }
    lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                           ,0x66d,0);
    plVar21[6] = lVar11;
    if (lVar11 != 0) goto LAB_10056de40;
    uVar27 = 0;
    uVar8 = 0x26;
    bVar1 = true;
LAB_10056eac8:
    if (local_4548 != (long *)0x0) {
      (**(code **)(*local_4548 + 0x18))(local_4548,1);
    }
    local_4530 = lVar28;
    if (!bVar1) goto LAB_10056eaec;
    goto LAB_10056f00c;
  }
  local_44b0 = 0;
  if ((uVar24 >> 0x10 & 1) == 0) {
    plVar10 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),400,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                                    ,0x489,0);
    FUN_1005e7cdc();
    plVar21 = plVar10;
    if (plVar10 == (long *)0x0) goto LAB_10056de74;
  }
  else {
    plVar10 = (long *)0x0;
    plVar21 = (long *)*param_8;
  }
  if (((uVar24 >> 0x1b & 1) == 0) && (plVar21[6] == 0)) {
    lVar28 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                           ,0x496,0);
    plVar21[6] = lVar28;
    if (lVar28 != 0) goto LAB_10056dc20;
LAB_10056e9b0:
    uVar8 = 0x26;
    goto switchD_10056ed30_caseD_3;
  }
LAB_10056dc20:
  plVar21[0x13] = local_4530;
  *(int *)(plVar21 + 0x15) = iVar7;
  plVar21[0xb] = (long)local_4480;
  plVar21[0x1a] = param_1;
  if ((param_6 == 0) || (uVar29 = *(uint *)(param_6 + 0x18), uVar29 == 0)) {
    uVar29 = (uint)(local_4498 * *(int *)(param_1 + 0x15c68)) / 1000;
  }
  uVar22 = uVar24 & 0x400;
  uVar30 = uVar29;
  if ((uVar24 >> 10 & 1) == 0) {
    uVar30 = 1;
    if (local_94 != 0) {
      uVar30 = local_94;
    }
    if (uVar30 < 0x100) {
      uVar2 = 0;
      if (uVar30 != 0) {
        uVar2 = (uVar30 + 0xff) / uVar30;
      }
      uVar30 = uVar2 * uVar30;
    }
  }
  uVar2 = 0;
  if (uVar30 != 0) {
    uVar2 = uVar29 / uVar30;
  }
  uVar29 = uVar2 * uVar30;
  if (uVar2 * uVar30 <= uVar30) {
    uVar29 = uVar30 << 1;
  }
  if ((uVar22 == 0 && iVar7 == 0) && (local_98 <= uVar29)) {
    uVar29 = local_98;
  }
  _memcpy(auStack_4348,auStack_1a8,0x130);
  uVar14 = local_4494;
  if (param_6 != 0) {
    if (*(int *)(param_6 + 0xb8) != 0) {
      local_4224 = *(int *)(param_6 + 0xb8);
    }
    if (*(int *)(param_6 + 0xb4) != 0) {
      local_4220 = *(int *)(param_6 + 0xb4);
    }
  }
  local_4244 = local_4494;
  local_4230 = 0;
  local_422c = uVar29 - 1;
  local_4238 = uVar29;
  uVar8 = FUN_10056f048(param_1,uVar24 & 0xeffffdf8 | 2,auStack_4348,&local_44b0);
  if ((int)uVar8 != 0) goto LAB_10056efe0;
  if (param_6 == 0) {
    uVar8 = 0;
    *(undefined8 *)(local_44b0 + 0x140) = 0;
    *(undefined8 *)(local_44b0 + 0x148) = 0;
  }
  else {
    *(undefined8 *)(local_44b0 + 0x140) = *(undefined8 *)(param_6 + 0x38);
    *(undefined8 *)(local_44b0 + 0x148) = *(undefined8 *)(param_6 + 0x40);
    uVar8 = *(undefined8 *)(param_6 + 0x68);
  }
  *(undefined8 *)(local_44b0 + 0xc0) = uVar8;
  *(long **)(local_44b0 + 0x150) = plVar21;
  *(int **)(local_44b0 + 0x58) = local_4480;
  plVar21[0x2f] = local_44b0;
  *(undefined4 *)(plVar21 + 0x17) = 0;
  *(uint *)((long)plVar21 + 0x3c) = local_98;
  *(undefined4 *)(plVar21 + 8) = local_9c;
  *(float *)((long)plVar21 + 100) = (float)local_a0;
  if (param_6 != 0) {
    local_80 = *(undefined4 *)(param_6 + 0xb4);
    local_84 = *(undefined4 *)(param_6 + 0xb8);
  }
  *(undefined4 *)((long)plVar21 + 0x6c) = local_84;
  *(undefined4 *)(plVar21 + 0xe) = local_80;
  *(undefined4 *)((long)plVar21 + 0x134) = local_7c;
  *(uint *)((long)plVar21 + 0x2c) = uVar24 & 0xeffffdf8 | 0x20080;
  *(undefined4 *)(plVar21 + 5) = local_a8;
  *(undefined4 *)(plVar21 + 0xc) = uVar14;
  plVar21[0x1a] = param_1;
  if (param_6 == 0) {
    lVar28 = 0;
    plVar21[0x28] = 0;
  }
  else {
    plVar21[0x28] = *(long *)(param_6 + 0x38);
    lVar28 = *(long *)(param_6 + 0x40);
  }
  plVar21[0x29] = lVar28;
  plVar21[0x2a] = (long)plVar21;
  *(uint *)((long)plVar21 + 0x184) = uVar30;
  *(int *)((long)plVar21 + 0x24) = local_4480[0x14];
  fVar33 = *(float *)(param_1 + 0x15a44);
  *(float *)((long)plVar21 + 0x74) = fVar33;
  *(float *)(plVar21 + 0xf) = fVar33 * 10000.0;
  if (param_6 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = *(long *)(param_6 + 0x68);
  }
  plVar21[0x18] = lVar28;
  if (plVar21[6] != 0) {
    FUN_1005ecc98(plVar21[6],auStack_1a8,0x100);
  }
  if (local_44b0 != 0) {
    uVar29 = *(uint *)((long)plVar21 + 0x2c) & 0xffffffe7;
    *(uint *)((long)plVar21 + 0x2c) = uVar29;
    *(uint *)((long)plVar21 + 0x2c) = *(uint *)(local_44b0 + 0x2c) & 0x18 | uVar29;
  }
  if (((local_88 | uVar24) & 1) == 0) {
    if (((local_88 | uVar24) >> 1 & 1) == 0) {
      uVar29 = *(uint *)((long)plVar21 + 0x2c) | 1;
    }
    else {
      uVar29 = *(uint *)((long)plVar21 + 0x2c) | 2;
    }
  }
  else {
    uVar29 = *(uint *)((long)plVar21 + 0x2c) | 1;
  }
  *(uint *)((long)plVar21 + 0x2c) = uVar29;
  (**(code **)(*plVar21 + 0x130))(plVar21,local_90,2,local_8c,2);
  if ((plVar21[0x25] == 0) &&
     (uVar8 = (**(code **)(*plVar21 + 0xd0))(plVar21,*(undefined8 *)(param_1 + 0x15d48)),
     (int)uVar8 != 0)) goto LAB_10056efe0;
  FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xd8,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                ,0x539,0);
  lVar28 = FUN_10057de04();
  plVar21[0x2e] = lVar28;
  if (lVar28 == 0) {
LAB_10056e9a8:
    local_4530 = 0;
    piVar31 = (int *)0x0;
    goto LAB_10056e9b0;
  }
  *(long *)(lVar28 + 8) = param_1;
  FUN_10057097c(param_1,9);
  plVar21[0x2d] = (long)plVar21;
  lVar28 = *(long *)(param_1 + 0x16298);
  plVar21[0x2b] = param_1 + 0x16290;
  plVar21[0x2c] = lVar28;
  *(long **)(param_1 + 0x16298) = plVar21 + 0x2b;
  *(long **)plVar21[0x2c] = plVar21 + 0x2b;
  FUN_100570990(param_1,9);
  if ((uVar22 == 0) && (0 < iVar7)) {
    plVar12 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),400,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                                    ,0x54e,0);
    FUN_1005e7cdc();
    if (plVar12 == (long *)0x0) goto LAB_10056e9a8;
    if (1 < iVar7) {
      plVar21[0x14] = (long)plVar12;
    }
    plVar12[0x1a] = param_1;
    plVar12[0x2f] = local_44b0;
    plVar12[0xb] = (long)local_4480;
    *(undefined4 *)(plVar12 + 0x17) = 0;
    plVar12[0x2e] = plVar21[0x2e];
    *(undefined4 *)((long)plVar12 + 0x2c) = *(undefined4 *)((long)plVar21 + 0x2c);
    *(undefined4 *)((long)plVar12 + 0x24) = *(undefined4 *)((long)plVar21 + 0x24);
    plVar12[0x20] = plVar21[0x20];
    fVar33 = *(float *)(param_1 + 0x15a44);
    *(float *)((long)plVar12 + 0x74) = fVar33;
    *(float *)(plVar12 + 0xf) = fVar33 * 10000.0;
    *(uint *)((long)plVar12 + 0x184) = uVar30;
    plVar12[0x16] = (long)plVar21;
    if (1 < iVar7) {
      plVar12[0x14] = (long)plVar12;
    }
    if ((uVar24 & 0x8000000) == 0) {
      lVar28 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                             ,0x56d,0);
      plVar12[6] = lVar28;
      if (lVar28 != 0) goto LAB_10056e83c;
      uVar8 = 0x26;
    }
    else {
LAB_10056e83c:
      if ((plVar12[0x25] != 0) ||
         (uVar8 = (**(code **)(*plVar12 + 0xd0))(plVar12,*(undefined8 *)(param_1 + 0x15d48)),
         (int)uVar8 == 0)) {
        if (0 < iVar7) {
          lVar28 = 0;
          do {
            piVar31 = local_4480;
            *(long **)(local_4530 + lVar28 * 8) = plVar12;
            if (lVar28 < *local_4480) {
              _bzero(auStack_4478,0x130);
              uVar8 = (**(code **)(piVar31 + 0x2a))(piVar31,lVar28,auStack_4478);
              if ((int)uVar8 != 0) goto LAB_10056ed60;
              if (plVar12[6] != 0) {
                FUN_1005ecc98(plVar12[6],auStack_4478,0x100);
              }
              *(int *)(plVar12 + 0x17) = (int)lVar28;
              *(undefined4 *)(plVar12 + 5) = local_4378;
              *(undefined4 *)(plVar12 + 0xc) = local_4374;
              *(float *)((long)plVar12 + 100) = (float)local_4370;
              *(undefined4 *)((long)plVar12 + 0x6c) = local_4354;
              *(undefined4 *)(plVar12 + 0xe) = local_4350;
              *(undefined4 *)((long)plVar12 + 0x134) = local_434c;
              *(int *)((long)plVar12 + 0x44) = local_4360;
              *(int *)(plVar12 + 9) = (local_435c + 1) - local_4360;
              *(undefined4 *)((long)plVar12 + 0x3c) = local_4368;
              *(undefined4 *)(plVar12 + 8) = local_436c;
              (**(code **)(*plVar12 + 0x130))(plVar12,local_4360,2,local_435c,2);
              if ((*(code **)(local_4480 + 0x28) != (code *)0x0) &&
                 (uVar8 = (**(code **)(local_4480 + 0x28))(local_4480,lVar28,plVar12),
                 (int)uVar8 != 0)) goto LAB_10056ed60;
            }
            *(int *)((long)plVar21 + 0xac) = *(int *)((long)plVar21 + 0xac) + 1;
            lVar28 = lVar28 + 1;
          } while (lVar28 < iVar7);
        }
        if ((*local_4480 != 0) && (plVar12[0x14] != 0)) {
          FUN_1005eb278(plVar12,0,0);
        }
        goto LAB_10056e9d8;
      }
    }
LAB_10056ed60:
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12,1);
    }
    goto LAB_10056efe0;
  }
  if ((*(code **)(local_4480 + 0x28) != (code *)0x0) &&
     (uVar8 = (**(code **)(local_4480 + 0x28))(local_4480,0,plVar21), (int)uVar8 != 0))
  goto LAB_10056efe0;
LAB_10056e9d8:
  piVar31 = local_4480;
  if (*(int **)(local_4480 + 0x50) != (int *)0x0) {
    piVar31 = *(int **)(local_4480 + 0x50);
  }
  if (*(code **)(piVar31 + 0x48) != (code *)0x0) {
    if (param_6 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)(param_6 + 0x1c);
    }
    uVar8 = (**(code **)(piVar31 + 0x48))
                      (piVar31,*(undefined4 *)(local_44b0 + 0x60),(int)*(float *)(local_44b0 + 100),
                       uVar14,*(undefined8 *)(piVar31 + 0x52),local_4480,0);
    if ((int)uVar8 != 0) goto LAB_10056efe0;
    piVar31[0x15] = piVar31[0x15] | 0x200;
  }
  plVar12 = plVar21;
  if (param_6 == 0) {
    uVar14 = 0;
    *(undefined4 *)((long)plVar21 + 0x18c) = 0;
    goto LAB_10056ee58;
  }
  local_4530 = 0;
  uVar8 = 0x1f;
  piVar31 = (int *)0x0;
  switch(*(undefined4 *)(param_6 + 0xcc)) {
  case 0:
  case 2:
    goto switchD_10056ed30_caseD_0;
  case 1:
    fVar33 = (float)NEON_ucvtf(*(undefined4 *)(param_6 + 200));
    *(int *)(param_6 + 200) = (int)((fVar33 / 1000.0) * *(float *)((long)plVar21 + 100));
    goto LAB_10056eddc;
  case 4:
    uVar29 = *(uint *)(param_6 + 200);
    uVar30 = *(uint *)(plVar21 + 0xc);
    if (uVar30 != 0) {
      uVar2 = (int)plVar21[5] - 1;
      if (uVar2 < 5) {
        uVar3 = 0;
        if ((long)*(int *)(&DAT_10115e1e0 + (long)(int)uVar2 * 4) != 0) {
          uVar3 = (uint)(((ulong)uVar29 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115e1e0 + (long)(int)uVar2 * 4));
        }
        uVar29 = 0;
        if (uVar30 != 0) {
          uVar29 = uVar3 / uVar30;
        }
      }
      *(uint *)(param_6 + 200) = uVar29;
    }
LAB_10056eddc:
    *(undefined4 *)(param_6 + 0xcc) = 2;
switchD_10056ed30_caseD_0:
    iVar7 = *(int *)(param_6 + 0x1c);
    if ((iVar7 != 0) && (plVar21[0x13] != 0)) {
      if ((-1 < iVar7) && (iVar7 < (int)plVar21[0x15])) {
        *(int *)(plVar21 + 0x17) = iVar7;
        plVar12 = *(long **)(plVar21[0x13] + (long)iVar7 * 8);
        if (plVar12 == (long *)0x0) goto LAB_10056ee64;
        *(int *)(plVar12 + 0x17) = iVar7;
        if ((plVar12[0x14] == 0) || (uVar8 = FUN_1005eb278(plVar12,iVar7,0), (int)uVar8 == 0)) {
          uVar14 = *(undefined4 *)(param_6 + 200);
          *(undefined4 *)((long)plVar21 + 0x18c) = uVar14;
          goto LAB_10056ee58;
        }
        goto LAB_10056efe0;
      }
      local_4530 = 0;
      piVar31 = (int *)0x0;
      uVar8 = 0x1f;
      goto switchD_10056ed30_caseD_3;
    }
    uVar14 = *(undefined4 *)(param_6 + 200);
    *(undefined4 *)((long)plVar21 + 0x18c) = uVar14;
LAB_10056ee58:
    uVar8 = FUN_1005e8188(plVar12,uVar14,2);
    if ((int)uVar8 != 0) {
LAB_10056efe0:
      local_4530 = 0;
      piVar31 = (int *)0x0;
      goto switchD_10056ed30_caseD_3;
    }
LAB_10056ee64:
    if (((uVar24 >> 0xd & 1) == 0) && (uVar8 = FUN_1005e80f8(plVar21), (int)uVar8 != 0))
    goto LAB_10056efe0;
    if ((uVar22 == 0) &&
       ((0x10 < (uint)local_4480[0x14] || ((1 << (ulong)(local_4480[0x14] & 0x1f) & 0x121c0U) == 0))
       )) {
      local_4508 = param_4;
      if (param_5 != 8) {
        if (param_5 == 4) {
          uVar29 = *(uint *)(plVar21 + 0xc);
          if ((uVar29 != 0) && (uVar22 = (int)plVar21[5] - 1, uVar22 < 5)) {
            uVar30 = 0;
            if ((long)*(int *)(&DAT_10115e1e0 + (long)(int)uVar22 * 4) != 0) {
              uVar30 = (uint)(((param_4 & 0xffffffff) << 3) /
                             (ulong)(long)*(int *)(&DAT_10115e1e0 + (long)(int)uVar22 * 4));
            }
            uVar22 = 0;
            if (uVar29 != 0) {
              uVar22 = uVar30 / uVar29;
            }
            local_4508 = (ulong)uVar22;
          }
        }
        else if (param_5 == 1) {
          local_4508 = (ulong)(uint)((int)*(float *)((long)plVar21 + 100) * (int)param_4) / 1000;
        }
        if ((*(uint *)((long)plVar21 + 0x3c) == 0xffffffff) ||
           (*(uint *)(local_44f8 + 4) == 0xffffffff)) {
          uVar29 = (int)plVar21[5] - 1;
          if (uVar29 < 5) {
            local_4508._0_4_ =
                 *(int *)(&DAT_10115e1e0 + (long)(int)uVar29 * 4) * (uint)local_4508 >> 3;
          }
          local_4508 = (ulong)((uint)local_4508 * (int)plVar21[0xc]);
        }
        else {
          uVar29 = *(uint *)(local_44f8 + 4);
          if (*(uint *)(plVar21 + 8) != 0) {
            uVar29 = *(uint *)(plVar21 + 8);
          }
          local_4508 = (ulong)(uint)(int)((float)(local_4508 & 0xffffffff) *
                                         ((float)uVar29 / (float)*(uint *)((long)plVar21 + 0x3c)));
        }
      }
      uVar8 = FUN_1005d1f2c(local_44f8,local_4508,local_4510);
      if ((int)uVar8 != 0) goto LAB_10056efe0;
    }
    lVar28 = 0;
    piVar31 = (int *)0x0;
    uVar27 = 0;
    *param_8 = (long)plVar21;
LAB_10056eaec:
    lVar11 = *param_8;
    if (param_7 != 0) {
      FUN_1005dbee4(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
      lVar16 = *(long *)(param_1 + 0x58);
      plVar21 = (long *)(lVar11 + 8);
      *plVar21 = lVar16;
      *(long **)(lVar11 + 0x10) = (long *)(param_1 + 0x58);
      *(long **)(lVar16 + 8) = plVar21;
      **(undefined8 **)(lVar11 + 0x10) = plVar21;
      FUN_1005dbf14(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
    }
    local_4530 = lVar28;
    if (((uint)uVar27 | 0x10) == 0x10) {
      if ((*(char **)(lVar11 + 0x30) != (char *)0x0) && (**(char **)(lVar11 + 0x30) == '\0')) {
        if ((*(long *)(local_4480 + 0x62) != 0) &&
           (((iVar7 = FUN_1005d8b80(*(long *)(local_4480 + 0x62),"TIT2",0,&local_44e0), iVar7 == 0
             || (iVar7 = FUN_1005d8b80(*(undefined8 *)(local_4480 + 0x62),"TT2",0,&local_44e0),
                iVar7 == 0)) ||
            (iVar7 = FUN_1005d8b80(*(undefined8 *)(local_4480 + 0x62),"TITLE",0,&local_44e0),
            iVar7 == 0)))) {
          if (local_44dc == 3) {
            FUN_1005ed5bc(*(undefined8 *)(lVar11 + 0x30),0x100,local_44d0);
LAB_10056ec4c:
            bVar1 = false;
          }
          else {
            if (local_44dc == 4) {
              FUN_1005ed65c(*(undefined8 *)(lVar11 + 0x30),local_44d0 + 2,0x80);
              FUN_1005eda48(*(undefined8 *)(lVar11 + 0x30));
              goto LAB_10056ec4c;
            }
            if (local_44dc == 6) {
              FUN_1005ecc98(*(undefined8 *)(lVar11 + 0x30),local_44d0,0x100);
              goto LAB_10056ec4c;
            }
            bVar1 = true;
          }
          FUN_1005d8e44(*(undefined8 *)(local_4480 + 0x62),local_44e0,local_44d8,local_44d0,
                        local_44c8,local_44dc,1);
          if (!bVar1) goto LAB_10056ed08;
        }
        uVar8 = 0;
        if ((param_2 == 0) || ((uVar24 & 0x10000800) != 0)) break;
        uVar13 = FUN_1005ecb6c(param_2);
        if (-1 < (int)uVar13) {
          uVar18 = (long)(int)uVar13;
          do {
            if ((*(char *)(param_2 + uVar18) == '/') || (*(char *)(param_2 + uVar18) == '\\')) {
              uVar13 = (ulong)((int)uVar18 + 1);
              break;
            }
            uVar13 = uVar18 - 1;
            bVar1 = 0 < (long)uVar18;
            uVar18 = uVar13;
          } while (bVar1);
        }
        lVar28 = 0;
        if (-1 < (int)uVar13) {
          lVar28 = (long)(int)uVar13;
        }
        FUN_1005ecc98(*(undefined8 *)(lVar11 + 0x30),param_2 + lVar28,0x100);
      }
LAB_10056ed08:
      uVar8 = 0;
    }
    else {
      uVar8 = uVar27;
      if ((uVar24 >> 0x10 & 1) == 0) {
        *param_8 = 0;
      }
    }
    break;
  default:
    piVar31 = (int *)0x0;
  case 3:
switchD_10056ed30_caseD_3:
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10,1);
    }
  }
LAB_10056f00c:
  local_44f8 = (undefined8 *)0x0;
  puVar23 = (undefined8 *)0x0;
  lVar28 = *(long *)PTR____stack_chk_guard_101444218;
LAB_10056d8fc:
  if (local_4500 != 0) {
    FUN_1005d8a58();
  }
LAB_10056d7e8:
  if (local_44f8 != (undefined8 *)0x0) {
    FUN_1005d0f74();
  }
LAB_10056d350:
  if (puVar23 != (undefined8 *)0x0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar23,"../../src/fmod_autocleanup.h",
                  0xbe);
  }
  if (piVar31 != (int *)0x0) {
    FUN_100585d48(piVar31,1);
  }
  if (local_4530 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_4530,
                  "../../src/fmod_autocleanup.h",0xbe);
  }
  if (lVar28 != lVar25) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}




undefined8 FUN_10056f048(long param_1,uint param_2,void *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *local_1a0;
  undefined1 auStack_198 [260];
  undefined4 local_94;
  long local_68;
  
  lVar11 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar11;
  if (param_4 == (long *)0x0) {
    uVar9 = 0x1f;
    goto LAB_10056f2a8;
  }
  if (*(int *)((long)param_3 + 0x110) == -1) {
LAB_10056f2a4:
    uVar9 = 0x26;
  }
  else {
    uVar4 = *(uint *)((long)param_3 + 0x120);
    param_2 = uVar4 & 0x18 | param_2;
    uVar1 = param_2 | 8;
    if ((param_2 & 0x10) != 0) {
      uVar1 = param_2 & 0xfffffff7;
    }
    if ((uVar1 & 7) == 0) {
      uVar1 = uVar1 | uVar4 & 7;
    }
    uVar2 = uVar1 | 1;
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar1 & 0xfffffffa | 4;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar1 & 0xfffffff8 | 2;
    }
    if ((uVar4 & 0x200) != 0) {
      uVar2 = uVar2 & 0xfffffcff | 0x200;
    }
    uVar5 = *(undefined4 *)((long)param_3 + 0x104);
    local_1a0 = (long *)*param_4;
    _memcpy(auStack_198,param_3,0x130);
    local_94 = uVar5;
    uVar9 = FUN_1005df034(*(undefined8 *)(param_1 + 0x700),uVar2,auStack_198,&local_1a0);
    plVar8 = local_1a0;
    if ((int)uVar9 != 0) {
      if ((local_1a0 != (long *)0x0) && (local_1a0 != (long *)*param_4)) {
        (**(code **)(*local_1a0 + 0x18))(local_1a0,1);
      }
      goto LAB_10056f2a8;
    }
    plVar3 = (long *)0x0;
    if (local_1a0 != (long *)*param_4) {
      plVar3 = local_1a0;
    }
    if (((uVar2 >> 0x1b & 1) == 0) && (local_1a0[6] == 0)) {
      lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_sound.cpp"
                             ,0x86a,0);
      plVar8[6] = lVar10;
      if (lVar10 == 0) {
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,1);
        }
        goto LAB_10056f2a4;
      }
    }
    if (local_1a0[6] != 0) {
      FUN_1005ecc98(local_1a0[6],param_3,0x100);
    }
    *(float *)((long)local_1a0 + 100) = (float)*(int *)((long)param_3 + 0x108);
    *(undefined4 *)((long)local_1a0 + 0x6c) = *(undefined4 *)((long)param_3 + 0x124);
    *(undefined4 *)(local_1a0 + 0xe) = *(undefined4 *)((long)param_3 + 0x128);
    *(undefined4 *)((long)local_1a0 + 0x134) = *(undefined4 *)((long)param_3 + 300);
    *(uint *)((long)local_1a0 + 0x2c) = uVar2;
    *(undefined4 *)((long)local_1a0 + 0x44) = 0;
    *(undefined4 *)(local_1a0 + 9) = *(undefined4 *)((long)local_1a0 + 0x3c);
    *(undefined4 *)(local_1a0 + 5) = *(undefined4 *)((long)param_3 + 0x100);
    *(undefined4 *)(local_1a0 + 0xc) = uVar5;
    local_1a0[0xb] = 0;
    *(undefined4 *)((long)local_1a0 + 0x24) = 0xe;
    local_1a0[0x1a] = param_1;
    fVar7 = *(float *)(param_1 + 0x15a44);
    *(float *)((long)local_1a0 + 0x74) = fVar7;
    *(float *)(local_1a0 + 0xf) = fVar7 * 10000.0;
    iVar6 = *(int *)((long)param_3 + 0x11c);
    if (iVar6 == 0) {
      iVar6 = *(int *)((long)plVar8 + 0x3c) + -1;
    }
    (**(code **)(*plVar8 + 0x130))(plVar8,*(undefined4 *)((long)param_3 + 0x118),2,iVar6,2);
    uVar9 = 0;
    *param_4 = (long)plVar8;
  }
LAB_10056f2a8:
  if (lVar11 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}




undefined8 FUN_10056f2dc(long param_1,long *param_2)

{
  uint *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int local_4c;
  long *local_48;
  
  iVar5 = *(int *)(param_1 + 0x6dc);
  if (0 < iVar5) {
    lVar10 = 0;
    lVar11 = 0x30;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x6e8) + lVar11);
      if ((lVar8 != 0) && (*(long **)(lVar8 + 0x40) == param_2)) {
        uVar6 = FUN_1005f5574(param_1,lVar10);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        iVar5 = *(int *)(param_1 + 0x6dc);
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x38;
    } while (lVar10 < iVar5);
  }
  iVar5 = (**(code **)*param_2)(param_2);
  if (iVar5 == 0) {
    bVar4 = false;
  }
  else {
    FUN_10057097c(param_1,9);
    plVar2 = (long *)(param_1 + 0x16268);
    plVar12 = (long *)*plVar2;
    if (plVar12 == plVar2) {
      bVar4 = false;
    }
    else {
      do {
        lVar10 = plVar12[2];
        plVar9 = *(long **)(lVar10 + 0x28);
        plVar12 = (long *)*plVar12;
        if (plVar9 == (long *)0x0) {
LAB_10056f3e0:
          bVar4 = false;
        }
        else {
          if (plVar9 != param_2) {
            if (plVar9[0x13] == 0) {
              if (plVar9[0x2f] == param_2[0x2f]) goto LAB_10056f3e8;
            }
            else if (0 < (int)plVar9[0x15]) {
              lVar11 = 0;
              do {
                if (*(long **)(plVar9[0x13] + lVar11 * 8) == param_2) goto LAB_10056f3e8;
                lVar11 = lVar11 + 1;
              } while (lVar11 < (int)plVar9[0x15]);
            }
            goto LAB_10056f3e0;
          }
LAB_10056f3e8:
          FUN_100570990(param_1,9);
          (**(code **)(**(long **)(lVar10 + 0x18) + 8))();
          FUN_10057097c(param_1,9);
          bVar4 = true;
        }
      } while (plVar12 != plVar2);
    }
    FUN_100570990(param_1,9);
  }
  puVar1 = (uint *)(param_2 + 10);
  if ((*puVar1 >> 2 & 1) == 0) {
    return 0;
  }
  if (!bVar4 && (int)param_2[0x26] != 0) {
    if (*(long *)(param_1 + 0x2e8) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x2e8) + -0x130;
      if (lVar10 == param_1 + 0x1b8) goto LAB_10056f4c8;
    }
    do {
      lVar11 = 0;
      if (*(long *)(lVar10 + 0x130) != 0) {
        lVar11 = *(long *)(lVar10 + 0x130) + -0x130;
      }
      if (*(long *)(lVar10 + 400) != 0) {
        local_48 = (long *)0x0;
        FUN_1005835d0(lVar10,&local_48);
        if (local_48 == param_2) {
          FUN_100582560(lVar10,0x53);
        }
      }
      lVar10 = lVar11;
    } while (lVar11 != param_1 + 0x1b8);
  }
LAB_10056f4c8:
  (**(code **)(*param_2 + 0xb8))(param_2,&local_4c,0,0,0);
  if ((local_4c == 6) && (uVar6 = FUN_10056ba8c(param_1,1,0), (int)uVar6 != 0)) {
    return uVar6;
  }
  uVar7 = (**(code **)*param_2)(param_2);
  if ((uVar7 & 1) == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 & 0xfffffffb;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return 0;
}




undefined8 FUN_10056f548(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x160b0) = 1;
    *(undefined4 *)(param_1 + 0x70c) = param_3;
    goto switchD_10056f610_default;
  }
  if (param_2 == 0) {
    param_2 = *(int *)(*(long *)(param_1 + 0x6b8) + 0x4c);
    *(int *)(param_1 + 0x160b0) = param_2;
    iVar4 = *(int *)(*(long *)(param_1 + 0x6b8) + 0x50);
  }
  else {
    *(int *)(param_1 + 0x160b0) = param_2;
    if (param_2 < 1000) {
      iVar4 = 1;
      switch(param_2) {
      case 2:
        break;
      case 3:
        iVar4 = 2;
        break;
      case 4:
      case 5:
      case 6:
        iVar4 = param_2;
        break;
      case 7:
        iVar4 = 8;
        break;
      default:
switchD_10056f5d0_default:
        iVar4 = 0;
      }
    }
    else {
      if (param_2 != 1000) goto switchD_10056f5d0_default;
      iVar4 = 2;
    }
  }
  *(int *)(param_1 + 0x70c) = iVar4;
  switch(param_2) {
  case 2:
    uVar5 = 0;
    uVar3 = 0;
    break;
  case 3:
    FUN_1005f889c(0xbf000000,0x3f5db3d7,param_1,0,1);
    uVar5 = 0x3f000000;
    uVar3 = 1;
    break;
  case 4:
    uVar5 = 0x3f3504f3;
    FUN_1005f889c(0xbf3504f3,0x3f3504f3,param_1,0,1);
    FUN_1005f889c(0x3f3504f3,0x3f3504f3,param_1,1,1);
    FUN_1005f889c(0xbf3504f3,0xbf3504f3,param_1,4,1);
    uVar3 = 5;
    break;
  case 5:
    FUN_1005f889c(0xbf000000,0x3f5db3d7,param_1,0,1);
    FUN_1005f889c(0x3f000000,0x3f5db3d7,param_1,1,1);
    FUN_1005f889c(0,0x3f800000,param_1,2,1);
    FUN_1005f889c(0xbf708fb2,0xbeaf1d43,param_1,4,1);
    uVar5 = 0x3f708fb2;
    uVar3 = 5;
    break;
  case 6:
    iVar4 = 0x6e;
    if ((*(int *)(*(long *)(param_1 + 0x6b8) + 0x4c) == 6) &&
       (iVar4 = 0x96, (*(byte *)(*(long *)(param_1 + 0x6b8) + 0x58) & 0xc0) == 0)) {
      iVar4 = 0x6e;
    }
    FUN_1005f889c(0xbf000000,0x3f5db3d7,param_1,0,1);
    FUN_1005f889c(0x3f000000,0x3f5db3d7,param_1,1,1);
    FUN_1005f889c(0,0x3f800000,param_1,2,1);
    FUN_1005f889c(0,0x3f800000,param_1,3,1);
    ___sincosf_stret(((float)-iVar4 * 3.1415927) / 180.0);
    FUN_1005f889c(param_1,4,1);
    uVar5 = ___sincosf_stret(((float)iVar4 * 3.1415927) / 180.0);
    uVar3 = 5;
    break;
  case 7:
    FUN_1005f889c(0xbf000000,0x3f5db3d7,param_1,0,1);
    FUN_1005f889c(0x3f000000,0x3f5db3d7,param_1,1,1);
    FUN_1005f889c(0,0x3f800000,param_1,2,1);
    FUN_1005f889c(0,0x3f800000,param_1,3,1);
    FUN_1005f889c(0xbf800000,0xb33bbd2e,param_1,4,1);
    FUN_1005f889c(0x3f800000,0xb33bbd2e,param_1,5,1);
    FUN_1005f889c(0xbefffffa,0xbf5db3d9,param_1,6,1);
    uVar5 = 0x3efffffa;
    uVar3 = 7;
    break;
  default:
    goto switchD_10056f610_default;
  }
  FUN_1005f889c(uVar5,param_1,uVar3,1);
switchD_10056f610_default:
  plVar1 = (long *)(param_1 + 0x15670);
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 8))();
    *plVar1 = 0;
  }
  if (*(int *)(param_1 + 0x70c) != *(int *)(*(long *)(param_1 + 0x6b8) + 0x50)) {
    puVar2 = (undefined8 *)
             FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xd0,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi_speaker.cpp"
                           ,0x91,0);
    puVar2[6] = 0;
    *puVar2 = &PTR_FUN_1014a1878;
    puVar2[4] = puVar2 + 4;
    puVar2[5] = puVar2 + 4;
    puVar2[7] = puVar2 + 7;
    puVar2[8] = puVar2 + 7;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)((long)puVar2 + 0x52) = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    *(undefined2 *)((long)puVar2 + 0x62) = 0;
    puVar2[0x18] = 0;
    *(undefined2 *)(puVar2 + 0x17) = 0;
    *(undefined2 *)((long)puVar2 + 0xba) = 0;
    puVar2[3] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0xd] = 0;
    *plVar1 = (long)puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0x26;
    }
  }
  uVar3 = FUN_10056fa34(param_1);
  return uVar3;
}




undefined8 FUN_10056fa34(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  char local_38 [8];
  
  iVar5 = *(int *)(param_1 + 0x160b0);
  if (iVar5 == 1) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x16250) = 0;
  *(undefined8 *)(param_1 + 0x16248) = 0;
  *(undefined8 *)(param_1 + 0x16240) = 0;
  *(undefined8 *)(param_1 + 0x16238) = 0;
  *(undefined8 *)(param_1 + 0x16230) = 0;
  *(undefined8 *)(param_1 + 0x16228) = 0;
  *(undefined8 *)(param_1 + 0x16220) = 0;
  *(undefined8 *)(param_1 + 0x16218) = 0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  iVar2 = 6;
  if (iVar5 != 4) {
    iVar2 = *(int *)(param_1 + 0x70c);
  }
  FUN_10056fbc0(param_1);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar6 * 8 + 0x16218);
      fVar8 = 16.0;
      puVar7 = (uint *)(param_1 + 0x160b4);
      iVar5 = iVar2;
      do {
        uVar3 = *puVar7;
        if ((((uVar3 != 3) && ((char)puVar7[9] != '\0')) &&
            (uVar3 != 2 || *(int *)(param_1 + 0x160b0) != 4)) &&
           ((fVar9 = (float)puVar7[7], fVar9 < fVar8 && (local_38[uVar3] == '\0')))) {
          *puVar1 = puVar7;
          fVar8 = fVar9;
        }
        iVar5 = iVar5 + -1;
        puVar7 = puVar7 + 0xb;
      } while (iVar5 != 0);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) {
        local_38[*puVar7] = '\x01';
      }
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar5 != iVar2 + -1);
  }
  FUN_10056fd18(param_1);
  uVar4 = FUN_10057004c(param_1);
  return uVar4;
}




undefined8 FUN_10056fbc0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 extraout_b0;
  undefined1 uVar4;
  undefined1 extraout_var;
  undefined1 uVar5;
  undefined1 extraout_var_00;
  undefined1 uVar6;
  undefined1 extraout_var_01;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar1 = (undefined8 *)(param_1 + 0x160b8);
  lVar2 = 8;
  do {
    if (*(char *)(puVar1 + 4) != '\0') {
      *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)((long)puVar1 + 0xc) = *puVar1;
      *(undefined4 *)(puVar1 + 2) = 0;
      fVar12 = *(float *)((long)puVar1 + 0xc);
      fVar13 = *(float *)((long)puVar1 + 0x14);
      fVar11 = SQRT(fVar12 * fVar12 + 0.0 + fVar13 * fVar13);
      if (fVar11 <= 0.0) {
        *(undefined8 *)((long)puVar1 + 0xc) = 0;
        uVar3 = 0;
        uVar4 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        fVar12 = fVar12 / fVar11;
        uVar3 = SUB41(fVar12,0);
        uVar4 = (undefined1)((uint)fVar12 >> 8);
        uVar5 = (undefined1)((uint)fVar12 >> 0x10);
        uVar6 = (undefined1)((uint)fVar12 >> 0x18);
        *(float *)((long)puVar1 + 0xc) = fVar12;
        *(float *)(puVar1 + 2) = 0.0 / fVar11;
        fVar13 = fVar13 / fVar11;
        uVar7 = SUB41(fVar13,0);
        uVar8 = (undefined1)((uint)fVar13 >> 8);
        uVar9 = (undefined1)((uint)fVar13 >> 0x10);
        uVar10 = (undefined1)((uint)fVar13 >> 0x18);
      }
      *(uint *)((long)puVar1 + 0x14) = CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
      if ((NAN((float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))) ||
           (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) != 0.0) ||
         (NAN((float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3)))) ||
          (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3))) != 0.0)) {
        fVar12 = (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
        if (!NAN((float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))) &&
            (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) < 0.0) {
          fVar12 = -(float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
        }
        fVar13 = (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3)));
        if (!NAN((float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3)))) &&
            (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3))) < 0.0) {
          fVar13 = -(float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3)));
        }
        fVar11 = 3.0 - (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) / fVar13;
        if (!NAN((float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3)))) &&
            (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3))) < 0.0) {
          fVar11 = 10.0 - fVar11;
        }
        fVar14 = (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3))) / fVar12 + 1.0;
        if (!NAN((float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))) &&
            (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) < 0.0) {
          fVar14 = 6.0 - fVar14;
        }
        if (fVar13 <= fVar12) {
          fVar11 = fVar14;
        }
      }
      else {
        fVar11 = 0.0;
      }
      *(float *)(puVar1 + 3) = fVar11;
      _atan2f();
      *(float *)((long)puVar1 + 0x1c) =
           ((float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) * 180.0) /
           3.1415927;
    }
    lVar2 = lVar2 + -1;
    puVar1 = (undefined8 *)((long)puVar1 + 0x2c);
  } while (lVar2 != 0);
  return 0;
}




undefined8 FUN_10056fd18(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 extraout_b0;
  undefined1 uVar7;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 uVar8;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar9;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 uVar10;
  undefined1 extraout_var_04;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  lVar3 = *(long *)(param_1 + 0x16218);
  if (lVar3 != 0) {
    plVar4 = (long *)(param_1 + 0x16220);
    lVar6 = lVar3;
    do {
      lVar5 = *plVar4;
      lVar1 = lVar3;
      if (lVar5 != 0) {
        lVar1 = lVar5;
      }
      fVar11 = *(float *)(lVar6 + 0x1c);
      fVar12 = *(float *)(lVar1 + 0x1c);
      if (fVar11 != fVar12) {
        if (fVar12 - fVar11 <= 4.0) {
          bVar2 = false;
          if ((fVar12 < fVar11) && (bVar2 = false, !NAN(fVar11 - fVar12))) {
            bVar2 = fVar11 - fVar12 < 4.0;
          }
          if (!bVar2) goto LAB_10056fd98;
        }
        fVar11 = *(float *)(lVar6 + 0x10) - *(float *)(lVar1 + 0x10);
        fVar12 = *(float *)(lVar6 + 0x14) - *(float *)(lVar1 + 0x14);
        fVar13 = *(float *)(lVar6 + 0x18) - *(float *)(lVar1 + 0x18);
        fVar15 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13);
        if (fVar15 <= 0.0) {
          uVar7 = 0;
          uVar8 = 0;
          uVar9 = 0;
          uVar10 = 0;
          fVar11 = 0.0;
          fVar13 = 0.0;
        }
        else {
          fVar11 = fVar11 / fVar15;
          fVar12 = fVar12 / fVar15;
          uVar7 = SUB41(fVar12,0);
          uVar8 = (undefined1)((uint)fVar12 >> 8);
          uVar9 = (undefined1)((uint)fVar12 >> 0x10);
          uVar10 = (undefined1)((uint)fVar12 >> 0x18);
          fVar13 = fVar13 / fVar15;
        }
        *(float *)(lVar6 + 0x10) = fVar11;
        *(uint *)(lVar6 + 0x14) = CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
        *(float *)(lVar6 + 0x18) = fVar13;
        fVar18 = -fVar11;
        *(float *)(lVar1 + 0x10) = fVar18;
        *(float *)(lVar1 + 0x14) = -(float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
        fVar19 = -fVar13;
        *(float *)(lVar1 + 0x18) = fVar19;
        fVar12 = *(float *)(lVar6 + 0x10);
        fVar15 = *(float *)(lVar6 + 0x18);
        if ((fVar12 == 0.0) && (fVar15 == 0.0)) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = fVar15;
          if (fVar15 < 0.0) {
            fVar14 = -fVar15;
          }
          fVar16 = fVar12;
          if (fVar12 < 0.0) {
            fVar16 = -fVar12;
          }
          if (fVar16 <= fVar14) {
            fVar14 = fVar12 / fVar14 + 1.0;
            fVar16 = 6.0;
          }
          else {
            fVar14 = 3.0 - fVar15 / fVar16;
            fVar16 = 10.0;
            fVar15 = fVar12;
          }
          if (fVar15 < 0.0) {
            fVar14 = fVar16 - fVar14;
          }
        }
        *(float *)(lVar6 + 0x1c) = fVar14;
        _atan2f();
        *(float *)(lVar6 + 0x20) =
             ((float)CONCAT13(extraout_var_03,
                              CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) * 180.0)
             / 3.1415927;
        if ((fVar11 == -0.0) && (fVar13 == -0.0)) {
          uVar7 = 0;
          uVar8 = 0;
          uVar9 = 0;
          uVar10 = 0;
        }
        else {
          fVar12 = fVar13;
          if (fVar13 <= -0.0) {
            fVar12 = fVar19;
          }
          fVar15 = fVar11;
          if (fVar11 <= -0.0) {
            fVar15 = fVar18;
          }
          if (fVar15 <= fVar12) {
            fVar12 = fVar18 / fVar12 + 1.0;
            uVar7 = 0xc0;
            uVar8 = 0x40;
          }
          else {
            fVar12 = 3.0 - fVar19 / fVar15;
            uVar7 = 0x20;
            uVar8 = 0x41;
            fVar13 = fVar11;
          }
          fVar11 = (float)((uint)CONCAT11(uVar8,uVar7) << 0x10) - fVar12;
          uVar7 = SUB41(fVar12,0);
          uVar8 = (undefined1)((uint)fVar12 >> 8);
          uVar9 = (undefined1)((uint)fVar12 >> 0x10);
          uVar10 = (undefined1)((uint)fVar12 >> 0x18);
          if (-0.0 < fVar13) {
            uVar7 = SUB41(fVar11,0);
            uVar8 = (undefined1)((uint)fVar11 >> 8);
            uVar9 = (undefined1)((uint)fVar11 >> 0x10);
            uVar10 = (undefined1)((uint)fVar11 >> 0x18);
          }
        }
        *(uint *)(lVar1 + 0x1c) = CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
        _atan2f((char)*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18));
        *(float *)(lVar1 + 0x20) =
             ((float)CONCAT13(extraout_var_04,
                              CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
             180.0) / 3.1415927;
        lVar3 = *(long *)(param_1 + 0x16218);
        break;
      }
LAB_10056fd98:
      plVar4 = plVar4 + 1;
      lVar6 = lVar5;
    } while (lVar5 != 0);
    if (lVar3 != 0) {
      plVar4 = (long *)(param_1 + 0x16220);
      lVar6 = lVar3;
      do {
        lVar5 = *plVar4;
        lVar1 = lVar3;
        if (lVar5 != 0) {
          lVar1 = lVar5;
        }
        if (*(float *)(lVar6 + 0x1c) != *(float *)(lVar1 + 0x1c)) {
          fVar12 = *(float *)(lVar1 + 0x1c) - *(float *)(lVar6 + 0x1c);
          fVar11 = fVar12;
          if (fVar12 < 0.0) {
            fVar11 = -fVar12;
          }
          if (0.0 <= fVar11 + -4.0) {
            if (fVar12 < 0.0) {
              fVar12 = -fVar12;
            }
            fVar12 = fVar12 + -4.0;
          }
          else {
            if (fVar12 < 0.0) {
              fVar12 = -fVar12;
            }
            fVar12 = -(fVar12 + -4.0);
          }
          *(bool *)(lVar6 + 0x25) = 0.002 < fVar12;
          if (0.002 < fVar12) {
            uVar17 = 0x3f800000;
            if (*(float *)(lVar6 + 0x10) * *(float *)(lVar1 + 0x18) -
                *(float *)(lVar1 + 0x10) * *(float *)(lVar6 + 0x18) <= 0.0) {
              uVar17 = 0xbf800000;
            }
            *(undefined4 *)(lVar6 + 0x28) = uVar17;
          }
        }
        plVar4 = plVar4 + 1;
        lVar6 = lVar5;
      } while (lVar5 != 0);
    }
  }
  return 0;
}

