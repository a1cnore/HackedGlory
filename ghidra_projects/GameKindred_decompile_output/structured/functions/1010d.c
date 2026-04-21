// functions/1010d — 160 functions
#include "GameKindred.h"




undefined8
FUN_1010d0068(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = (float)*param_1;
  fVar6 = (float)*param_2 - fVar4;
  fVar5 = (float)((ulong)*param_1 >> 0x20);
  fVar7 = (float)((ulong)*param_2 >> 0x20) - fVar5;
  fVar10 = (float)*param_3;
  fVar12 = (float)*param_4 - fVar10;
  fVar11 = (float)((ulong)*param_3 >> 0x20);
  fVar13 = (float)((ulong)*param_4 >> 0x20) - fVar11;
  uVar9 = NEON_rev64(CONCAT44(fVar13,fVar12),4);
  fVar8 = (float)uVar9 * fVar6 - (float)((ulong)uVar9 >> 0x20) * fVar7;
  if (fVar8 != 0.0) {
    fVar10 = fVar10 - fVar4;
    fVar11 = fVar11 - fVar5;
    uVar9 = NEON_rev64(CONCAT44(fVar11,fVar10),4);
    fVar12 = (fVar13 * (float)((ulong)uVar9 >> 0x20) - fVar12 * (float)uVar9) / fVar8;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar12) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar12)) {
        bVar1 = fVar12 < 1.0;
        bVar2 = fVar12 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      uVar9 = NEON_rev64(CONCAT44(fVar7,fVar6),4);
      fVar8 = ((float)uVar9 * fVar10 - (float)((ulong)uVar9 >> 0x20) * fVar11) / fVar8;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 <= fVar8) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar8)) {
          bVar1 = fVar8 < 1.0;
          bVar2 = fVar8 == 1.0;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        *param_5 = CONCAT44(fVar5 + fVar7 * fVar12,fVar4 + fVar6 * fVar12);
        return 1;
      }
    }
  }
  return 0;
}




int FUN_1010d00f8(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 *param_4,long param_5,long param_6,uint param_7,float *param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
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
  
  if (param_7 == 0) {
    if (param_8 != (float *)0x0) {
LAB_1010d02d8:
      *(undefined8 *)param_8 = param_3;
    }
    iVar8 = 1;
  }
  else {
    fVar12 = 3.4028235e+38;
    iVar8 = 1;
    uVar10 = 0;
    fVar17 = fVar12;
    uVar9 = 0;
    do {
      while( true ) {
        uVar14 = *(undefined8 *)(param_5 + uVar10 * 8);
        fVar11 = (float)*param_4;
        fVar13 = fVar11 - (float)uVar14;
        fVar16 = (float)((ulong)*param_4 >> 0x20);
        fVar15 = fVar16 - (float)((ulong)uVar14 >> 0x20);
        uVar14 = *(undefined8 *)(param_6 + uVar10 * 8);
        fVar18 = (float)uVar14;
        fVar21 = fVar18 * fVar13;
        fVar19 = (float)((ulong)uVar14 >> 0x20);
        fVar22 = fVar19 * fVar15;
        fVar20 = fVar22 + fVar21;
        if (0.0 <= fVar21 + fVar22) break;
        iVar8 = 0;
        if (param_8 == (float *)0x0) {
          return 0;
        }
LAB_1010d0170:
        fVar15 = SQRT(fVar13 * fVar13 + fVar15 * fVar15);
        fVar13 = (float)NEON_fminnm(fVar15,fVar17);
        uVar3 = (uint)uVar10;
        if (fVar17 <= fVar15) {
          uVar3 = uVar9;
        }
        uVar14 = param_3;
        fVar17 = fVar12;
        iVar4 = iVar8;
        if (fVar20 < fVar12) {
          iVar4 = 1;
          uVar14 = CONCAT44(fVar16 - fVar19 * fVar20,fVar11 - fVar18 * fVar20);
          fVar17 = fVar20;
        }
        if (iVar8 != 0) {
          param_3 = uVar14;
          fVar12 = fVar17;
          iVar8 = iVar4;
        }
        bVar7 = (ulong)param_7 - 1 == uVar10;
        uVar10 = uVar10 + 1;
        fVar17 = fVar13;
        uVar9 = uVar3;
        if (bVar7) {
          if (param_8 == (float *)0x0) {
            return iVar8;
          }
          if (iVar8 == 0) {
            uVar9 = 0;
            if (uVar3 + 1 != param_7) {
              uVar9 = uVar3 + 1;
            }
            if (uVar3 != 0) {
              param_7 = uVar3;
            }
            pfVar1 = (float *)(param_5 + (ulong)uVar3 * 8);
            pfVar2 = (float *)(param_5 + (ulong)uVar9 * 8);
            fVar20 = *pfVar1;
            fVar21 = pfVar1[1];
            fVar12 = *pfVar2 - fVar20;
            fVar22 = pfVar2[1] - fVar21;
            pfVar2 = (float *)(param_5 + (ulong)(param_7 - 1) * 8);
            fVar17 = fVar20 - *pfVar2;
            fVar23 = fVar21 - pfVar2[1];
            fVar24 = 1.0 / SQRT(fVar12 * fVar12 + fVar22 * fVar22);
            fVar12 = fVar12 * fVar24;
            fVar25 = 1.0 / SQRT(fVar17 * fVar17 + fVar23 * fVar23);
            fVar17 = fVar17 * fVar25;
            fVar26 = -fVar22 * fVar24 * (fVar11 - fVar20) + fVar12 * (fVar16 - fVar21);
            fVar15 = -fVar23 * fVar25 * (fVar11 - fVar20) + (fVar16 - fVar21) * fVar17;
            fVar18 = fVar11 - -fVar22 * fVar24 * fVar26;
            fVar19 = fVar16 - fVar12 * fVar26;
            fVar11 = fVar11 - -fVar23 * fVar25 * fVar15;
            fVar16 = fVar16 - fVar17 * fVar15;
            fVar12 = (fVar19 - fVar21) * fVar22 * fVar24 + fVar12 * (fVar18 - fVar20);
            bVar7 = true;
            if ((fVar26 < fVar13) && (bVar7 = false, !NAN(fVar12))) {
              bVar7 = fVar12 == -0.0;
            }
            bVar5 = true;
            bVar6 = false;
            if (!bVar7) {
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar12)) {
                bVar5 = fVar12 < 0.0;
                bVar6 = false;
              }
            }
            fVar17 = (fVar21 - fVar16) * fVar23 * fVar25 + fVar17 * (fVar20 - fVar11);
            fVar12 = fVar26;
            if (bVar5 != bVar6) {
              fVar12 = fVar13;
            }
            bVar7 = true;
            if ((fVar15 < fVar12) && (bVar7 = false, !NAN(fVar17))) {
              bVar7 = fVar17 == -0.0;
            }
            bVar5 = true;
            bVar6 = false;
            if (!bVar7) {
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar17)) {
                bVar5 = fVar17 < 0.0;
                bVar6 = false;
              }
            }
            fVar17 = fVar15;
            if (bVar5 != bVar6) {
              fVar17 = fVar12;
            }
            if (fVar17 == fVar26) {
              *param_8 = fVar18;
              param_8[1] = fVar19;
              return 0;
            }
            if (fVar17 == fVar15) {
              *param_8 = fVar11;
              param_8[1] = fVar16;
              return 0;
            }
            *(undefined8 *)param_8 = *(undefined8 *)pfVar1;
            return 0;
          }
          goto LAB_1010d02d8;
        }
      }
      if (param_8 != (float *)0x0) goto LAB_1010d0170;
      uVar10 = uVar10 + 1;
    } while (param_7 != uVar10);
  }
  return iVar8;
}




void FUN_1010d0304(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  *param_2 = uVar1;
  *(undefined4 *)((long)param_2 + 0xc) = param_1;
  return;
}




void FUN_1010d031c(long param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = *param_2 ^ *(uint *)(param_1 + lVar4);
    *param_2 = uVar2;
    lVar1 = param_1 + 0x400;
    uVar2 = *param_3 ^
            (*(int *)(lVar1 + (ulong)(uVar2 >> 0x10 & 0xff) * 4 + 0x400) +
             *(int *)(lVar1 + (ulong)(uVar2 >> 0x18) * 4) ^
            *(uint *)(lVar1 + (ulong)(uVar2 >> 8 & 0xff) * 4 + 0x800)) +
            *(int *)(lVar1 + (ulong)(uVar2 & 0xff) * 4 + 0xc00);
    *param_3 = uVar2;
    uVar3 = *param_2;
    *param_2 = uVar2;
    *param_3 = uVar3;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x40);
  uVar2 = *param_2;
  *param_2 = uVar3;
  *param_3 = uVar2;
  *param_3 = *(uint *)(param_1 + 0x40) ^ uVar2;
  *param_2 = *param_2 ^ *(uint *)(param_1 + 0x44);
  return;
}




void FUN_1010d03bc(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0x11;
  do {
    uVar2 = *param_2 ^ param_1[uVar4];
    *param_2 = uVar2;
    uVar2 = *param_3 ^
            (param_1[(ulong)(uVar2 >> 0x10 & 0xff) + 0x200] +
             param_1[(ulong)(uVar2 >> 0x18) + 0x100] ^ param_1[(ulong)(uVar2 >> 8 & 0xff) + 0x300])
            + param_1[(ulong)(uVar2 & 0xff) + 0x400];
    *param_3 = uVar2;
    uVar3 = *param_2;
    *param_2 = uVar2;
    *param_3 = uVar3;
    bVar1 = 2 < uVar4;
    uVar4 = uVar4 - 1;
  } while (bVar1);
  uVar2 = *param_2;
  *param_2 = uVar3;
  *param_3 = uVar2;
  *param_3 = param_1[1] ^ uVar2;
  *param_2 = *param_2 ^ *param_1;
  return;
}




void FUN_1010d0460(undefined8 *param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 local_38;
  
  _memcpy(param_1 + 0x80,&DAT_1013cc1e8,0x1000);
  param_1[1] = 0x370734413198a2e;
  *param_1 = 0x85a308d3243f6a88;
  param_1[3] = 0xec4e6c89082efa98;
  param_1[2] = 0x299f31d0a4093822;
  param_1[8] = 0x8979fb1b9216d5d9;
  param_1[5] = 0x34e90c6cbe5466cf;
  param_1[4] = 0x38d01377452821e6;
  param_1[7] = 0xb54709173f84d5b5;
  param_1[6] = 0xc97c50ddc0ac29b7;
  if (param_3 % 0x39 != 0) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      uVar7 = 0;
      iVar6 = 4;
      iVar5 = iVar4;
      do {
        uVar7 = (uint)*(byte *)(param_2 + iVar5) | uVar7 << 8;
        iVar4 = 0;
        if (iVar5 + 1U != param_3 % 0x39) {
          iVar4 = iVar5 + 1;
        }
        iVar6 = iVar6 + -1;
        iVar5 = iVar4;
      } while (iVar6 != 0);
      *(uint *)((long)param_1 + lVar3 * 4) = *(uint *)((long)param_1 + lVar3 * 4) ^ uVar7;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x12);
  }
  local_38 = 0;
  uVar8 = 0;
  do {
    FUN_1010d031c(param_1,(long)&local_38 + 4,&local_38);
    puVar1 = (undefined4 *)((long)param_1 + uVar8 * 4);
    *puVar1 = local_38._4_4_;
    puVar1[1] = (undefined4)local_38;
    bVar2 = uVar8 < 0x10;
    uVar8 = uVar8 + 2;
  } while (bVar2);
  lVar3 = 0;
  puVar9 = param_1;
  do {
    uVar8 = 0;
    do {
      FUN_1010d031c(param_1,(long)&local_38 + 4,&local_38);
      *(undefined4 *)((long)puVar9 + uVar8 * 4 + 0x400) = local_38._4_4_;
      *(undefined4 *)((long)puVar9 + uVar8 * 4 + 0x404) = (undefined4)local_38;
      bVar2 = uVar8 < 0xfe;
      uVar8 = uVar8 + 2;
    } while (bVar2);
    lVar3 = lVar3 + 1;
    puVar9 = puVar9 + 0x80;
  } while (lVar3 != 4);
  return;
}




void FUN_1010d05bc(undefined8 param_1)

{
  FUN_1010eb66c(param_1,0x40);
  return;
}




undefined4 FUN_1010d05e4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(code *)PTR__calloc_101873640)(1,0x18);
  *(long *)(*param_1 + 0x218) = lVar1;
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




ulong FUN_1010d062c(long *param_1,undefined1 *param_2)

{
  void *pvVar1;
  long *plVar2;
  bool bVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  off_t oVar11;
  ssize_t sVar12;
  void *pvVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  size_t sVar21;
  size_t sVar22;
  ulong uVar23;
  byte *pbVar24;
  undefined1 auVar25 [16];
  stat sStack_188;
  byte *local_f8 [12];
  long local_98;
  int local_68;
  undefined4 uStack_64;
  
  lVar18 = *param_1;
  auVar25 = FUN_1010d0e58();
  *param_2 = 1;
  FUN_1010e91ec(lVar18);
  FUN_1010d2424(lVar18);
  if (*(char *)(lVar18 + 0x501) == '\0') {
    iVar7 = *(int *)(*(long *)(*param_1 + 0x218) + 0x10);
    iVar6 = _fstat(iVar7,&sStack_188);
    oVar11 = sStack_188.st_size;
    if (iVar6 == -1) {
      oVar11 = 0;
      bVar3 = false;
    }
    else {
      *(__darwin_time_t *)(lVar18 + 0x8b38) = sStack_188.st_mtimespec.tv_sec;
      if ((*(long *)(lVar18 + 0x8ac0) == 0) && (*(int *)(lVar18 + 0x410) != 0)) {
        uVar23 = FUN_1010e9b84(lVar18);
        bVar3 = true;
        if ((uVar23 & 1) == 0) {
          *param_2 = 1;
          return 0;
        }
      }
      else {
        bVar3 = true;
      }
    }
    pvVar1 = (void *)(lVar18 + 0x908);
    if (((*(char *)(lVar18 + 0x4ff) != '\0') && (*(char *)(lVar18 + 0x4fc) != '\0')) && (bVar3)) {
      FUN_1010e7270(pvVar1,0x4001,"Content-Length: %ld\r\n");
      uVar23 = FUN_1010d98ec(param_1,3,pvVar1,0);
      if ((int)uVar23 != 0) {
        return uVar23;
      }
      uVar23 = FUN_1010d98ec(param_1,3,"Accept-ranges: bytes\r\n",0);
      if ((int)uVar23 != 0) {
        return uVar23;
      }
      uVar23 = FUN_1010f36dc(sStack_188.st_mtimespec.tv_sec,local_f8);
      if ((int)uVar23 != 0) {
        return uVar23;
      }
      FUN_1010e7270(pvVar1,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n");
      uVar23 = FUN_1010d98ec(param_1,3,pvVar1,0);
      FUN_1010d22cc(lVar18,oVar11);
      return uVar23;
    }
    lVar20 = *param_1;
    if ((*(char *)(lVar20 + 0x8ab9) == '\0') || (*(char **)(lVar20 + 0x8ac0) == (char *)0x0)) {
      *(undefined8 *)(lVar20 + 0x88) = 0xffffffffffffffff;
    }
    else {
      lVar15 = _strtol(*(char **)(lVar20 + 0x8ac0),(char **)local_f8,0);
      puVar4 = PTR___DefaultRuneLocale_101444130;
      uVar14 = (uint)*local_f8[0];
      pbVar24 = local_f8[0];
      if (*local_f8[0] != 0) {
        do {
          pbVar5 = local_f8[0];
          if ((char)(byte)uVar14 < '\0') {
            uVar14 = ___maskrune(uVar14,0x4000);
          }
          else {
            uVar14 = *(uint *)(puVar4 + (ulong)(byte)uVar14 * 4 + 0x3c) & 0x4000;
          }
          if ((uVar14 == 0) && (pbVar24 = pbVar5, *pbVar5 != 0x2d)) break;
          pbVar24 = pbVar5 + 1;
          uVar14 = (uint)pbVar5[1];
          local_f8[0] = pbVar24;
        } while (uVar14 != 0);
      }
      lVar10 = _strtol((char *)pbVar24,(char **)&local_68,0);
      lVar16 = -1;
      if (pbVar24 != (byte *)CONCAT44(uStack_64,local_68)) {
        lVar16 = lVar10;
      }
      if ((lVar15 < 0) || (lVar16 != -1)) {
        if (lVar15 < 0) {
          lVar16 = -lVar15;
        }
        else {
          lVar16 = (1 - lVar15) + lVar16;
        }
        *(long *)(lVar20 + 0x88) = lVar16;
        *(long *)(lVar20 + 0x8ac8) = lVar15;
      }
      else {
        *(long *)(lVar20 + 0x8ac8) = lVar15;
      }
    }
    plVar2 = (long *)(lVar18 + 0x8ac8);
    lVar20 = *plVar2;
    if (lVar20 < 0) {
      if (!bVar3) {
        FUN_1010d9258(lVar18,"Can\'t get the size of file.");
        return 0x1a;
      }
      lVar20 = sStack_188.st_size + lVar20;
      *plVar2 = lVar20;
    }
    if (oVar11 < lVar20) {
      FUN_1010d9258(lVar18,"failed to resume file:// transfer");
    }
    else {
      lVar15 = *(long *)(lVar18 + 0x88);
      if (*(long *)(lVar18 + 0x88) < 1) {
        lVar15 = oVar11 - lVar20;
      }
      if ((bool)(bVar3 & lVar15 == 0)) {
        return 0;
      }
      if (bVar3) {
        FUN_1010d22cc(lVar18,lVar15);
        lVar20 = *plVar2;
      }
      if ((lVar20 == 0) || (oVar11 = _lseek(iVar7,lVar20,0), lVar20 == oVar11)) {
        FUN_1010d231c(lVar18,7);
        lVar20 = 0;
        do {
          sVar22 = 0x3fff;
          if (lVar15 < 0x3fff) {
            sVar22 = FUN_1010feefc(lVar15);
          }
          sVar12 = _read(iVar7,pvVar1,sVar22);
          if (sVar12 < 1) {
            uVar14 = 0;
            break;
          }
          uVar14 = 0;
          *(undefined1 *)(lVar18 + sVar12 + 0x908) = 0;
          if (lVar15 == 0) break;
          uVar23 = FUN_1010d98ec(param_1,1,pvVar1,sVar12);
          if ((int)uVar23 != 0) {
            return uVar23;
          }
          lVar20 = sVar12 + lVar20;
          FUN_1010d2460(lVar18,lVar20);
          iVar6 = FUN_1010d1dac(param_1);
          if (iVar6 != 0) {
            uVar14 = 0x2a;
            break;
          }
          lVar15 = lVar15 - sVar12;
          uVar14 = FUN_1010e5e20(lVar18,auVar25._0_8_,auVar25._8_8_);
        } while (uVar14 == 0);
        iVar7 = FUN_1010d1dac(param_1);
        if (iVar7 != 0) {
          uVar14 = 0x2a;
        }
        return (ulong)uVar14;
      }
    }
    return 0x24;
  }
  lVar18 = *param_1;
  puVar19 = *(undefined8 **)(lVar18 + 0x218);
  pcVar8 = _strchr((char *)*puVar19,0x2f);
  pvVar1 = (void *)(lVar18 + 0x908);
  auVar25 = FUN_1010d0e58();
  param_1[0x77] = *(long *)(lVar18 + 0x2c8);
  param_1[0x78] = *(long *)(lVar18 + 0x248);
  *(void **)(*param_1 + 0x208) = pvVar1;
  if ((pcVar8 == (char *)0x0) || (pcVar8[1] == '\0')) {
    return 0x25;
  }
  plVar2 = (long *)(lVar18 + 0x8ac8);
  uVar17 = 0x601;
  if (*plVar2 != 0) {
    uVar17 = 0x209;
  }
  uVar9 = _open(*puVar19,uVar17);
  iVar7 = (int)uVar9;
  if (iVar7 < 0) {
    pcVar8 = "Can\'t open %s for writing";
LAB_1010d0998:
    FUN_1010d9258(lVar18,pcVar8);
    uVar23 = 0x17;
  }
  else {
    if (*(long *)(lVar18 + 0x8ae8) != -1) {
      FUN_1010d22f4(lVar18);
    }
    if (*plVar2 < 0) {
      iVar6 = _fstat(iVar7,(stat *)local_f8);
      if (iVar6 != 0) {
        _close(uVar9);
        pcVar8 = "Can\'t get the size of %s";
        goto LAB_1010d0998;
      }
      *plVar2 = local_98;
    }
    lVar20 = 0;
    do {
      uVar23 = FUN_1010e9874(param_1,0x4000,&local_68);
      if (((int)uVar23 != 0) || (local_68 < 1)) {
        if ((int)uVar23 == 0) {
          iVar7 = FUN_1010d1dac(param_1);
          uVar14 = 0;
          if (iVar7 != 0) {
            uVar14 = 0x2a;
          }
          uVar23 = (ulong)uVar14;
        }
        break;
      }
      sVar21 = (size_t)local_68;
      lVar15 = *plVar2;
      pvVar13 = pvVar1;
      sVar22 = sVar21;
      if (lVar15 != 0) {
        sVar22 = sVar21 - lVar15;
        if (sVar22 == 0 || (long)sVar21 < lVar15) {
          *plVar2 = lVar15 - sVar21;
          sVar22 = 0;
        }
        else {
          *plVar2 = 0;
          pvVar13 = (void *)(lVar18 + lVar15 + 0x908);
        }
      }
      sVar21 = _write(iVar7,pvVar13,sVar22);
      if (sVar21 != sVar22) {
        uVar23 = 0x37;
        break;
      }
      lVar20 = sVar22 + lVar20;
      FUN_1010d2468(lVar18,lVar20);
      iVar6 = FUN_1010d1dac(param_1);
      if (iVar6 != 0) {
        uVar23 = 0x2a;
        break;
      }
      uVar23 = FUN_1010e5e20(lVar18,auVar25._0_8_,auVar25._8_8_);
    } while ((int)uVar23 == 0);
    _close(uVar9);
  }
  return uVar23;
}




undefined8 FUN_1010d0cac(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      (*(code *)PTR__free_101873628)();
      puVar1[1] = 0;
    }
    *puVar1 = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      _close();
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}




undefined8 FUN_1010d0d0c(long *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int local_44;
  
  lVar4 = *param_1;
  puVar6 = *(undefined8 **)(lVar4 + 0x218);
  pvVar2 = (void *)FUN_1010e5f30(lVar4,*(undefined8 *)(lVar4 + 0x8ab0),0,&local_44);
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0x1b;
  }
  else {
    pvVar3 = _memchr(pvVar2,0,(long)local_44);
    if (pvVar3 == (void *)0x0) {
      iVar1 = _open(pvVar2,0);
      *puVar6 = pvVar2;
      puVar6[1] = pvVar2;
      *(int *)(puVar6 + 2) = iVar1;
      if (iVar1 == -1 && *(char *)(lVar4 + 0x501) == '\0') {
        FUN_1010d9258(lVar4,"Couldn\'t open file %s");
        uVar5 = 0x25;
        FUN_1010d0cac(param_1,0x25,0);
      }
      else {
        uVar5 = 0;
        *param_2 = 1;
      }
    }
    else {
      uVar5 = 3;
    }
  }
  return uVar5;
}




undefined8 FUN_1010d0df8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      (*(code *)PTR__free_101873628)();
      puVar1[1] = 0;
    }
    *puVar1 = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      _close();
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}




timeval FUN_1010d0e58(void)

{
  timeval local_20;
  
  _gettimeofday(&local_20,(void *)0x0);
  return local_20;
}




long FUN_1010d0e80(long param_1,int param_2,long param_3,int param_4)

{
  return (param_1 - param_3) * 1000 + (long)((param_2 - param_4) / 1000);
}




undefined1  [16] FUN_1010d0eb4(long param_1,int param_2,long param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 - param_3 == 0) {
    auVar1._0_8_ = (double)(param_2 - param_4) / 1000000.0;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  auVar2._0_8_ = (double)(param_1 - param_3) + (double)(param_2 - param_4) / 1000000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}




void FUN_1010d0ef4(void)

{
  return;
}




undefined8 FUN_1010d0ef8(char *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  size_t sVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  
  *param_2 = 0;
  *param_3 = 0;
  sVar4 = _strlen(param_1);
  uVar6 = 0x3d;
  if ((sVar4 != 0) && ((sVar4 & 3) == 0)) {
    lVar7 = sVar4 + 1;
    pcVar10 = param_1;
    do {
      pcVar9 = pcVar10 + 1;
      cVar2 = *pcVar10;
      lVar7 = lVar7 + -1;
      if (cVar2 == '\0') break;
      pcVar10 = pcVar9;
    } while (cVar2 != '=');
    if (cVar2 == '=') {
      lVar12 = 1;
      if (*pcVar9 == '=') {
        lVar12 = 2;
      }
    }
    else {
      lVar12 = 0;
    }
    if (lVar12 == lVar7) {
      uVar14 = sVar4 >> 2;
      lVar12 = (uVar14 * 2 + (sVar4 >> 2)) - lVar12;
      puVar5 = (undefined1 *)(*(code *)PTR__malloc_101873620)(lVar12 + 1);
      if (puVar5 == (undefined1 *)0x0) {
        uVar6 = 0x1b;
      }
      else {
        puVar15 = puVar5;
        if (uVar14 != 0) {
          uVar16 = 0;
          do {
            uVar13 = 0;
            uVar8 = 0;
            uVar17 = 0;
            pcVar10 = param_1;
            do {
              cVar2 = *pcVar10;
              if (cVar2 == '=') {
                uVar13 = uVar13 << 6;
                uVar17 = uVar17 + 1;
              }
              else {
                cVar11 = 'A';
                lVar7 = 0;
                do {
                  if (cVar11 == cVar2) {
                    cVar11 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                             [lVar7];
                    goto LAB_1010d1030;
                  }
                  lVar1 = lVar7 + 1;
                  cVar11 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                           [lVar7 + 1];
                  lVar7 = lVar1;
                } while (cVar11 != '\0');
                cVar11 = '\0';
LAB_1010d1030:
                if (cVar11 != cVar2) goto LAB_1010d10c0;
                uVar13 = lVar7 + uVar13 * 0x40;
              }
              uVar8 = uVar8 + 1;
              pcVar10 = pcVar10 + 1;
            } while (uVar8 < 4);
            if (uVar17 == 0) {
              uVar3 = FUN_1010feecc(uVar13 & 0xff);
              puVar15[2] = uVar3;
LAB_1010d1068:
              uVar3 = FUN_1010feecc(uVar13 >> 8 & 0xff);
              puVar15[1] = uVar3;
            }
            else if (uVar17 < 2) goto LAB_1010d1068;
            uVar3 = FUN_1010feecc(uVar13 >> 0x10 & 0xff);
            *puVar15 = uVar3;
            if (3 - uVar17 == 0) {
LAB_1010d10c0:
              (*(code *)PTR__free_101873628)(puVar5);
              goto LAB_1010d10d4;
            }
            puVar15 = puVar15 + (3 - uVar17);
            param_1 = param_1 + 4;
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar14);
        }
        uVar6 = 0;
        *puVar15 = 0;
        *param_2 = puVar5;
        *param_3 = lVar12;
      }
    }
    else {
LAB_1010d10d4:
      uVar6 = 0x3d;
    }
  }
  return uVar6;
}




void FUN_1010d10fc(void)

{
  FUN_1010d1108("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
  return;
}




undefined8
FUN_1010d1108(undefined8 param_1,char *param_2,size_t param_3,undefined8 *param_4,size_t *param_5)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  char *pcVar8;
  char local_63 [3];
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = _strlen(param_2);
  }
  pcVar1 = (char *)(*(code *)PTR__malloc_101873620)((param_3 << 2) / 3 + 4);
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    pcVar8 = pcVar1;
    if (param_3 != 0) {
      do {
        lVar6 = 0;
        iVar5 = 0;
        do {
          if (param_3 == 0) {
            cVar7 = '\0';
            param_3 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
            cVar7 = *param_2;
            param_3 = param_3 - 1;
            param_2 = param_2 + 1;
          }
          local_63[lVar6] = cVar7;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        pcVar4 = "%c%c%c=";
        if (iVar5 != 2) {
          if (iVar5 == 1) {
            pcVar4 = "%c%c==";
          }
          else {
            pcVar4 = "%c%c%c%c";
          }
        }
        FUN_1010e7270(pcVar8,5,pcVar4);
        pcVar8 = pcVar8 + 4;
      } while (param_3 != 0);
    }
    *pcVar8 = '\0';
    *param_4 = pcVar1;
    sVar2 = _strlen(pcVar1);
    uVar3 = 0;
    *param_5 = sVar2;
  }
  return uVar3;
}




undefined * FUN_1010d12d0(void)

{
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_101ea5f60 & 1) == 0) {
    iVar2 = FUN_1010ef1f4(&DAT_101ea5f68,7,FUN_1010ef80c,FUN_1010ef83c,FUN_1010d1344);
    if (iVar2 == 0) {
      iVar2 = 0;
      DAT_101ea5f60 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  puVar1 = (undefined *)0x0;
  if (iVar2 == 0) {
    puVar1 = &DAT_101ea5f68;
  }
  return puVar1;
}




void FUN_1010d1344(undefined8 *param_1)

{
  param_1[1] = 0;
  if (param_1[2] != 0) {
    return;
  }
  FUN_1010f67c8(*param_1);
  (*(code *)PTR__free_101873628)(param_1);
  return;
}




void FUN_1010d1390(void)

{
  if (DAT_101ea5f60 == '\x01') {
    FUN_1010ef71c(&DAT_101ea5f68,0,FUN_1010d1b54);
    FUN_1010ef6a4(&DAT_101ea5f68);
    DAT_101ea5f60 = '\0';
  }
  return;
}




void FUN_1010d13e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1010ef71c(param_2,param_1,FUN_1010d1b54);
  return;
}




int FUN_1010d13f8(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(long *)(param_1 + 0x28)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}




char * FUN_1010d1414(long param_1,char *param_2,socklen_t param_3)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  
  if (*(int *)(param_1 + 4) == 0x1e) {
    pvVar3 = (void *)(*(long *)(param_1 + 0x20) + 8);
    iVar1 = 0x1e;
  }
  else {
    if (*(int *)(param_1 + 4) != 2) {
      return (char *)0x0;
    }
    pvVar3 = (void *)(*(long *)(param_1 + 0x20) + 4);
    iVar1 = 2;
  }
  pcVar2 = _inet_ntop(iVar1,pvVar3,param_2,param_3);
  return pcVar2;
}




void FUN_1010d1460(long param_1)

{
  time_t local_38;
  undefined8 local_30;
  time_t tStack_28;
  
  if ((*(long *)(param_1 + 0x4a8) != -1) && (*(long *)(param_1 + 0x50) != 0)) {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_1010f2820(param_1,3,2);
    }
    _time(&local_38);
    local_30 = *(undefined8 *)(param_1 + 0x4a8);
    tStack_28 = local_38;
    FUN_1010ef71c(*(undefined8 *)(param_1 + 0x50),&local_30,FUN_1010d1d34);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_1010f2868(param_1,3);
    }
  }
  return;
}




long FUN_1010d14ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar4 = *param_1;
  pcVar1 = (char *)FUN_1010d15dc(param_2,param_3);
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    lVar3 = FUN_1010ef618(*(undefined8 *)(lVar4 + 0x50),pcVar1,sVar2 + 1);
    (*(code *)PTR__free_101873628)(pcVar1);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(long *)(lVar4 + 0x4a8) == -1) {
      return lVar3;
    }
    if (*(long *)(lVar4 + 0x50) == 0) {
      return lVar3;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      return lVar3;
    }
    _time(&local_38);
    local_40 = *(long *)(lVar4 + 0x4a8);
    if (*(long *)(lVar3 + 0x10) != 0) {
      return lVar3;
    }
    if (local_38 - *(long *)(lVar3 + 8) < local_40) {
      return lVar3;
    }
    FUN_1010ef71c(*(undefined8 *)(lVar4 + 0x50),&local_40,FUN_1010d1d34);
    FUN_1010d909c(lVar4,"Hostname in DNS cache was stale, zapped\n");
  }
  return 0;
}




byte * FUN_1010d15dc(void)

{
  byte bVar1;
  __darwin_ct_rune_t _Var2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)FUN_1010e7298("%s:%d");
  pbVar4 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    for (; (bVar1 = *pbVar4, bVar1 != 0 && (bVar1 != 0x3a)); pbVar4 = pbVar4 + 1) {
      _Var2 = ___tolower((uint)bVar1);
      *pbVar4 = (byte)_Var2;
    }
  }
  return pbVar3;
}




long FUN_1010d1638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 *puVar3;
  long lVar4;
  
  pcVar1 = (char *)FUN_1010d15dc(param_3,param_4);
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    puVar3 = (undefined8 *)(*(code *)PTR__calloc_101873640)(1,0x18);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      *puVar3 = param_2;
      _time(puVar3 + 1);
      if (puVar3[1] == 0) {
        puVar3[1] = 1;
      }
      lVar4 = FUN_1010ef428(*(undefined8 *)(param_1 + 0x50),pcVar1,sVar2 + 1,puVar3);
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
        (*(code *)PTR__free_101873628)(pcVar1);
        return lVar4;
      }
      (*(code *)PTR__free_101873628)(puVar3);
    }
    (*(code *)PTR__free_101873628)(pcVar1);
  }
  return 0;
}




undefined8 FUN_1010d1744(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int local_54;
  
  lVar5 = *param_1;
  *param_4 = 0;
  if (*(long *)(lVar5 + 0x70) != 0) {
    FUN_1010f2820(lVar5,3,2);
  }
  lVar2 = FUN_1010d14ec(param_1,param_2,param_3);
  if (lVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    FUN_1010d909c(lVar5,"Hostname %s was found in DNS cache\n");
    uVar4 = 0;
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  if (*(long *)(lVar5 + 0x70) != 0) {
    FUN_1010f2868(lVar5,3);
  }
  if (lVar2 == 0) {
    iVar1 = FUN_1010f2e24(param_1);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    lVar3 = FUN_1010f2e4c(param_1,param_2,param_3,&local_54);
    if (lVar3 == 0) {
      if (local_54 != 0) {
        return 0xffffffff;
      }
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_1010f2820(lVar5,3,2);
      }
      lVar2 = FUN_1010d1638(lVar5,lVar3,param_2,param_3);
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_1010f2868(lVar5,3);
      }
      if (lVar2 != 0) {
        uVar4 = 0;
        goto LAB_1010d1880;
      }
      FUN_1010f67c8(lVar3);
    }
    lVar2 = 0;
  }
LAB_1010d1880:
  *param_4 = lVar2;
  return uVar4;
}




ulong FUN_1010d18a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_70;
  __sigaction_u local_68;
  uint uStack_5c;
  byte local_51;
  __sigaction_u local_50 [2];
  
  local_51 = 0;
  lVar6 = *param_1;
  *param_4 = 0;
  if (-1 < param_5) {
    local_70 = param_5;
    if (*(char *)(lVar6 + 0x51c) != '\0') {
      local_70 = 0;
    }
    if (local_70 == 0) {
      uVar5 = FUN_1010d1744(param_1,param_2,param_3,param_4);
      return uVar5;
    }
    if (999 < local_70) {
      _sigaction(0xe,(sigaction *)0x0,(sigaction *)&local_68);
      local_50[0] = local_68;
      local_51 = 1;
      local_68.__sa_handler = FUN_1010d1a8c;
      uStack_5c = uStack_5c & 0xfffffffd;
      _sigaction(0xe,(sigaction *)&local_68,(sigaction *)0x0);
      uVar1 = FUN_1010feee8(local_70 / 1000);
      uVar1 = _alarm(uVar1);
      iVar2 = _sigsetjmp((int *)&DAT_101dc1f58,1);
      if (iVar2 == 0) {
        uVar4 = FUN_1010d1744(param_1,param_2,param_3,param_4);
        uVar5 = uVar4;
      }
      else {
        uVar4 = FUN_1010d9258(lVar6,"name lookup timed out");
        uVar5 = 0xffffffff;
      }
      if (uVar1 == 0) {
        uVar3 = _alarm(0);
        uVar4 = (ulong)uVar3;
      }
      if ((local_51 & 1) != 0) {
        uVar3 = _sigaction(0xe,(sigaction *)local_50,(sigaction *)0x0);
        uVar4 = (ulong)uVar3;
      }
      if (uVar1 == 0) {
        return uVar5;
      }
      auVar7 = FUN_1010d0e58(uVar4);
      uVar4 = FUN_1010d0e80(auVar7._0_8_,auVar7._8_8_,param_1[0x38],param_1[0x39]);
      uVar4 = (ulong)uVar1 - uVar4 / 1000;
      if ((uVar4 != 0) && ((uVar4 >> 0x1f == 0 || ((int)uVar1 < 0)))) {
        _alarm((uint)uVar4);
        return uVar5;
      }
      _alarm(1);
      FUN_1010d9258(lVar6,"Previous alarm fired off!");
    }
  }
  return 0xfffffffe;
}




void FUN_1010d1a8c(void)

{
                    /* WARNING: Subroutine does not return */
  _siglongjmp((int *)&DAT_101dc1f58,1);
}




void FUN_1010d1aa4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    FUN_1010f2820(param_1,3,2);
  }
  lVar1 = param_2[2];
  param_2[2] = lVar1 + -1;
  if ((lVar1 + -1 == 0) && (param_2[1] == 0)) {
    FUN_1010f67c8(*param_2);
    (*(code *)PTR__free_101873628)(param_2);
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    FUN_1010f2868(param_1,3);
    return;
  }
  return;
}




void FUN_1010d1b34(void)

{
  FUN_1010ef388(7,FUN_1010ef80c,FUN_1010ef83c,FUN_1010d1344);
  return;
}




undefined8 FUN_1010d1b54(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) == 1) {
    FUN_1010d1aa4();
  }
  return 1;
}




bool FUN_1010d1d34(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    return false;
  }
  return *param_1 <= param_1[1] - *(long *)(param_2 + 8);
}




undefined8 FUN_1010d1d5c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x770) = 0;
  uVar1 = FUN_1010d1dac();
  if ((int)uVar1 == 0) {
    if (((*(byte *)(lVar2 + 0x7a8) >> 4 & 1) == 0) && (*(char *)(lVar2 + 0x7a0) == '\0')) {
      FUN_1010e74ac(*(undefined8 *)(lVar2 + 0x220),"\n");
    }
    uVar1 = 0;
    *(undefined4 *)(lVar2 + 0x8c8) = 0;
  }
  return uVar1;
}




ulong FUN_1010d1dac(long *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_d2 [10];
  undefined1 auStack_c8 [10];
  undefined1 auStack_be [10];
  undefined1 auStack_b4 [10];
  undefined1 auStack_aa [10];
  undefined1 auStack_a0 [10];
  undefined1 auStack_96 [10];
  undefined1 auStack_8c [10];
  undefined1 auStack_82 [10];
  long local_78;
  
  lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = *param_1;
  iVar3 = *(int *)(lVar11 + 0x8c8);
  local_78 = lVar15;
  auVar18 = FUN_1010d0e58();
  uVar5 = auVar18._0_8_;
  lVar8 = *(long *)(lVar11 + 0x788);
  lVar10 = *(long *)(lVar11 + 0x790);
  dVar17 = (double)(long)(uVar5 - *(long *)(lVar11 + 0x7f8)) +
           (double)(auVar18._8_4_ - *(int *)(lVar11 + 0x800)) / 1000000.0;
  dVar16 = dVar17;
  if (dVar17 <= 0.0) {
    dVar16 = 1.0;
  }
  *(double *)(lVar11 + 0x7b0) = dVar17;
  *(long *)(lVar11 + 0x7b8) = (long)((double)lVar8 / dVar16);
  *(long *)(lVar11 + 0x7c0) = (long)((double)lVar10 / dVar16);
  if (*(ulong *)(lVar11 + 0x770) == uVar5) {
    bVar7 = false;
  }
  else {
    iVar3 = iVar3 % 6;
    lVar9 = lVar11 + 0x770;
    *(ulong *)(lVar11 + 0x770) = uVar5;
    if (lVar8 <= lVar10) {
      lVar8 = lVar10;
    }
    plVar14 = (long *)(lVar9 + (long)iVar3 * 8 + 200);
    *plVar14 = lVar8;
    *(undefined1 (*) [16])(lVar9 + (long)iVar3 * 0x10 + 0xf8) = auVar18;
    iVar3 = *(int *)(lVar11 + 0x8c8);
    *(int *)(lVar11 + 0x8c8) = iVar3 + 1;
    if (iVar3 == 0) {
      lVar8 = *(long *)(lVar11 + 0x7c0);
      if (*(long *)(lVar11 + 0x7c0) <= *(long *)(lVar11 + 0x7b8)) {
        lVar8 = *(long *)(lVar11 + 0x7b8);
      }
    }
    else {
      iVar1 = 0;
      if (4 < iVar3) {
        iVar1 = (iVar3 + 1) % 6;
      }
      lVar8 = lVar9 + (long)iVar1 * 0x10;
      uVar5 = FUN_1010d0e80(uVar5,auVar18._8_8_,*(undefined8 *)(lVar8 + 0xf8),
                            *(undefined8 *)(lVar8 + 0x100));
      uVar6 = 1;
      if (uVar5 != 0) {
        uVar6 = uVar5;
      }
      lVar10 = *plVar14 - *(long *)(lVar9 + (long)iVar1 * 8 + 200);
      if (lVar10 < 0x418938) {
        lVar8 = 0;
        if (uVar6 != 0) {
          lVar8 = (lVar10 * 1000) / (long)uVar6;
        }
      }
      else {
        lVar8 = (long)((double)lVar10 / ((double)(long)uVar6 / 1000.0));
      }
    }
    *(long *)(lVar11 + 0x798) = lVar8;
    bVar7 = true;
  }
  uVar4 = *(uint *)(lVar11 + 0x7a8);
  if ((uVar4 >> 4 & 1) == 0) {
    if (*(code **)(lVar11 + 0x2e0) == (code *)0x0) {
      if (*(code **)(lVar11 + 0x2d8) == (code *)0x0) {
        if (bVar7) {
          if ((uVar4 >> 7 & 1) == 0) {
            if (*(long *)(lVar11 + 0x8ac8) != 0) {
              FUN_1010e74ac(*(undefined8 *)(lVar11 + 0x220),
                            "** Resuming transfer from byte position %ld\n");
            }
            FUN_1010e74ac(*(undefined8 *)(lVar11 + 0x220),
                          "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                         );
            uVar4 = *(uint *)(lVar11 + 0x7a8) | 0x80;
            *(uint *)(lVar11 + 0x7a8) = uVar4;
          }
          if (((uVar4 >> 5 & 1) == 0) || (lVar8 = *(long *)(lVar11 + 0x7c0), lVar8 < 1)) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (lVar8 != 0) {
              lVar10 = *(long *)(lVar11 + 0x780) / lVar8;
            }
          }
          if (((uVar4 >> 6 & 1) == 0) || (lVar8 = *(long *)(lVar11 + 0x7b8), lVar8 < 1)) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (lVar8 != 0) {
              lVar9 = *(long *)(lVar11 + 0x778) / lVar8;
            }
          }
          if (lVar10 <= lVar9) {
            lVar10 = lVar9;
          }
          lVar8 = lVar10 - (long)dVar17;
          if (lVar10 < 1) {
            lVar8 = 0;
          }
          FUN_1010d2470(auStack_be,lVar8);
          FUN_1010d2470(auStack_c8,lVar10);
          FUN_1010d2470(auStack_d2,(long)dVar17);
          plVar14 = (long *)(lVar11 + 0x790);
          if ((*(uint *)(lVar11 + 0x7a8) & 0x20) != 0) {
            plVar14 = (long *)(lVar11 + 0x780);
          }
          plVar2 = (long *)(lVar11 + 0x788);
          if ((*(uint *)(lVar11 + 0x7a8) & 0x40) != 0) {
            plVar2 = (long *)(lVar11 + 0x778);
          }
          uVar12 = *(undefined8 *)(lVar11 + 0x220);
          FUN_1010d2588(*plVar2 + *plVar14,auStack_a0);
          FUN_1010d2588(*(undefined8 *)(lVar11 + 0x788),auStack_b4);
          FUN_1010d2588(*(undefined8 *)(lVar11 + 0x790),auStack_aa);
          FUN_1010d2588(*(undefined8 *)(lVar11 + 0x7b8),auStack_96);
          FUN_1010d2588(*(undefined8 *)(lVar11 + 0x7c0),auStack_8c);
          FUN_1010d2588(*(undefined8 *)(lVar11 + 0x798),auStack_82);
          FUN_1010e74ac(uVar12,"\r%3ld %s  %3ld %s  %3ld %s  %s  %s %s %s %s %s");
          uVar4 = _fflush(*(FILE **)(lVar11 + 0x220));
          uVar5 = (ulong)uVar4;
        }
        goto LAB_1010d2268;
      }
      uVar5 = (**(code **)(lVar11 + 0x2d8))
                        ((double)*(long *)(lVar11 + 0x778),(double)*(long *)(lVar11 + 0x788),
                         (double)*(long *)(lVar11 + 0x780),(double)*(long *)(lVar11 + 0x790),
                         *(undefined8 *)(lVar11 + 0x348));
    }
    else {
      uVar5 = (**(code **)(lVar11 + 0x2e0))
                        (*(undefined8 *)(lVar11 + 0x348),*(undefined8 *)(lVar11 + 0x778),
                         *(undefined8 *)(lVar11 + 0x788),*(undefined8 *)(lVar11 + 0x780),
                         *(undefined8 *)(lVar11 + 0x790));
    }
    if ((int)uVar5 != 0) {
      uVar6 = FUN_1010d9258(lVar11,"Callback aborted");
      uVar13 = uVar5;
      goto LAB_1010d226c;
    }
  }
LAB_1010d2268:
  uVar13 = 0;
  uVar6 = uVar5;
LAB_1010d226c:
  if (lVar15 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return uVar13;
}




void FUN_1010d22a4(long param_1)

{
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(uint *)(param_1 + 0x7a8) = *(uint *)(param_1 + 0x7a8) & 0xffffff9f;
  return;
}




void FUN_1010d22cc(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0x778) = 0;
    uVar1 = *(uint *)(param_1 + 0x7a8) & 0xffffffbf;
  }
  else {
    *(long *)(param_1 + 0x778) = param_2;
    uVar1 = *(uint *)(param_1 + 0x7a8) | 0x40;
  }
  *(uint *)(param_1 + 0x7a8) = uVar1;
  return;
}




void FUN_1010d22f4(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0x780) = 0;
    uVar1 = *(uint *)(param_1 + 0x7a8) & 0xffffffdf;
  }
  else {
    *(long *)(param_1 + 0x780) = param_2;
    uVar1 = *(uint *)(param_1 + 0x7a8) | 0x20;
  }
  *(uint *)(param_1 + 0x7a8) = uVar1;
  return;
}




void FUN_1010d231c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_1010d0e58();
  uVar1 = auVar3._8_8_;
  uVar2 = auVar3._0_8_;
  switch(param_2) {
  case 1:
    *(undefined1 (*) [16])(param_1 + 0x818) = auVar3;
    break;
  case 2:
    *(undefined1 (*) [16])(param_1 + 0x808) = auVar3;
    break;
  case 3:
    uVar2 = FUN_1010d0eb4(uVar2,uVar1,*(undefined8 *)(param_1 + 0x808),
                          *(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(param_1 + 0x7c8) = uVar2;
    break;
  case 4:
    uVar2 = FUN_1010d0eb4(uVar2,uVar1,*(undefined8 *)(param_1 + 0x808),
                          *(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(param_1 + 2000) = uVar2;
    break;
  case 5:
    uVar2 = FUN_1010d0eb4(uVar2,uVar1,*(undefined8 *)(param_1 + 0x808),
                          *(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(param_1 + 0x7d8) = uVar2;
    break;
  case 6:
    uVar2 = FUN_1010d0eb4(uVar2,uVar1,*(undefined8 *)(param_1 + 0x808),
                          *(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(param_1 + 0x7e0) = uVar2;
    break;
  case 7:
    uVar2 = FUN_1010d0eb4(uVar2,uVar1,*(undefined8 *)(param_1 + 0x808),
                          *(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(param_1 + 0x7e8) = uVar2;
    break;
  case 9:
    auVar3 = FUN_1010d0e58();
    *(undefined1 (*) [16])(param_1 + 0x828) = auVar3;
    break;
  case 10:
    uVar2 = FUN_1010d0eb4(uVar2,uVar1,*(undefined8 *)(param_1 + 0x7f8),
                          *(undefined8 *)(param_1 + 0x800));
    *(undefined8 *)(param_1 + 0x7f0) = uVar2;
  }
  return;
}




void FUN_1010d2424(long param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  auVar1 = FUN_1010d0e58();
  *(undefined1 (*) [16])(param_1 + 0x7f8) = auVar1;
  *(uint *)(param_1 + 0x7a8) = *(uint *)(param_1 + 0x7a8) & 0x90;
  return;
}




void FUN_1010d2460(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x788) = param_2;
  return;
}




void FUN_1010d2468(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x790) = param_2;
  return;
}




void FUN_1010d2470(char *param_1,long param_2)

{
  char *pcVar1;
  
  if (param_2 < 1) {
    builtin_strncpy(param_1,"--:--:--",9);
  }
  else {
    if (param_2 < 360000) {
      pcVar1 = "%2ld:%02ld:%02ld";
    }
    else if (param_2 < 86400000) {
      pcVar1 = "%3ldd %02ldh";
    }
    else {
      pcVar1 = "%7ldd";
    }
    FUN_1010e7270(param_1,9,pcVar1);
  }
  return;
}




undefined8 FUN_1010d2588(long param_1,undefined8 param_2)

{
  char *pcVar1;
  
  if (param_1 < 100000) {
    pcVar1 = "%5ld";
  }
  else if (param_1 < 0x9c4000) {
    pcVar1 = "%4ldk";
  }
  else if (param_1 < 0x6400000) {
    pcVar1 = "%2ld.%0ldM";
  }
  else if (param_1 < 0x271000000) {
    pcVar1 = "%4ldM";
  }
  else if (param_1 < 0x1900000000) {
    pcVar1 = "%2ld.%0ldG";
  }
  else if (param_1 < 0x9c400000000) {
    pcVar1 = "%4ldG";
  }
  else if (param_1 < 0x27100000000000) {
    pcVar1 = "%4ldT";
  }
  else {
    pcVar1 = "%4ldP";
  }
  FUN_1010e7270(param_2,6,pcVar1);
  return param_2;
}




void FUN_1010d2774(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar1;
      if (*(uint *)(plVar1 + 1) < 2) {
        (*(code *)PTR__free_101873628)(plVar1[2]);
      }
      (*(code *)PTR__free_101873628)(plVar1);
      plVar1 = plVar2;
    } while (plVar2 != (long *)0x0);
    *param_1 = 0;
  }
  return;
}




undefined8
FUN_1010d27dc(long param_1,undefined8 *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  size_t sVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  FILE *pFVar13;
  long *plVar14;
  long local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined1 auStack_268 [512];
  long local_68;
  
  lVar11 = *(long *)PTR____stack_chk_guard_101444218;
  local_270 = (undefined8 *)0x0;
  local_280 = 0;
  *param_2 = 0;
  local_68 = lVar11;
  if (param_3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_101105054(param_1);
    FUN_101105054(param_1);
    lVar3 = FUN_1010e7298("------------------------%08x%08x");
    if (lVar3 == 0) {
      uVar4 = 0x1b;
    }
    else {
      uVar4 = FUN_1010d2e28(&local_270,0,"%s; boundary=%s\r\n");
      puVar1 = local_270;
      if ((int)uVar4 == 0) {
        lVar10 = 0;
        local_278 = local_270;
        do {
          if (((((local_280 != 0) &&
                (uVar4 = FUN_1010d2e28(&local_270,&local_280,"\r\n"), (int)uVar4 != 0)) ||
               (uVar4 = FUN_1010d2e28(&local_270,&local_280,"--%s\r\n"), (int)uVar4 != 0)) ||
              ((uVar4 = FUN_1010d2e28(&local_270,&local_280,
                                      "Content-Disposition: form-data; name=\""), (int)uVar4 != 0 ||
               (uVar4 = FUN_1010d2eac(&local_270,0,param_3[1],param_3[2],&local_280),
               (int)uVar4 != 0)))) ||
             (uVar4 = FUN_1010d2e28(&local_270,&local_280,"\""), (int)uVar4 != 0))
          goto LAB_1010d2cc4;
          plVar14 = param_3;
          if (param_3[9] != 0) {
            if (lVar10 != 0) {
              (*(code *)PTR__free_101873628)(lVar10);
            }
            FUN_101105054(param_1);
            FUN_101105054(param_1);
            lVar10 = FUN_1010e7298("------------------------%08x%08x");
            if (lVar10 == 0) {
              FUN_1010d2774(&local_278);
              uVar4 = 0x1b;
              goto LAB_1010d2cfc;
            }
            uVar4 = FUN_1010d2e28(&local_270,&local_280,
                                  "\r\nContent-Type: multipart/mixed; boundary=%s\r\n");
            if ((int)uVar4 != 0) {
              FUN_1010d2774(&local_278);
              goto LAB_1010d2cec;
            }
          }
          do {
            if (param_3[9] == 0) {
              if (((param_3[10] & 0x51U) != 0) &&
                 ((plVar6 = param_3, (param_3[10] & 1U) != 0 || (param_3[0xb] != 0))))
              goto LAB_1010d2a64;
            }
            else {
              uVar4 = FUN_1010d2e28(&local_270,&local_280,
                                    "\r\n--%s\r\nContent-Disposition: attachment");
              plVar6 = plVar14;
              if ((int)uVar4 != 0) goto LAB_1010d2cc4;
LAB_1010d2a64:
              uVar4 = FUN_1010d300c(plVar6,&local_270,&local_280);
              if ((int)uVar4 != 0) goto LAB_1010d2cc4;
            }
            if ((plVar14[7] != 0) &&
               (uVar4 = FUN_1010d2e28(&local_270,&local_280,"\r\nContent-Type: %s"), (int)uVar4 != 0
               )) goto LAB_1010d2cc4;
            for (lVar12 = plVar14[8]; lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
              uVar4 = FUN_1010d2e28(&local_270,&local_280,"\r\n%s");
              if ((int)uVar4 != 0) goto LAB_1010d2cc4;
            }
            uVar4 = FUN_1010d2e28(&local_270,&local_280,"\r\n\r\n");
            if ((int)uVar4 != 0) goto LAB_1010d2cc4;
            if ((param_3[10] & 3U) == 0) {
              uVar9 = (uint)param_3[10];
              if ((uVar9 >> 4 & 1) == 0) {
                if ((uVar9 >> 6 & 1) != 0) {
                  lVar8 = param_3[0xc];
                  lVar12 = param_3[4];
                  puVar5 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x20);
                  if (puVar5 != (undefined8 *)0x0) {
                    *puVar5 = 0;
                    puVar5[2] = lVar8;
                    *(undefined4 *)(puVar5 + 1) = 2;
                    if (local_270 != (undefined8 *)0x0) {
                      *local_270 = puVar5;
                    }
                    uVar4 = 0;
                    local_280 = local_280 + lVar12;
                    local_270 = puVar5;
                    goto LAB_1010d2bf8;
                  }
                  uVar4 = 0x1b;
                  goto LAB_1010d2cc4;
                }
                lVar12 = param_3[3];
                lVar8 = param_3[4];
              }
              else {
                lVar12 = param_3[5];
                lVar8 = param_3[6];
              }
              uVar4 = 1;
LAB_1010d2bf0:
              uVar4 = FUN_1010d2eac(&local_270,uVar4,lVar12,lVar8,&local_280);
            }
            else {
              iVar2 = FUN_1010eb4e8("-",plVar14[3]);
              if (iVar2 == 0) {
                pFVar13 = _fopen((char *)plVar14[3],"rb");
              }
              else {
                pFVar13 = *(FILE **)PTR____stdinp_101444228;
              }
              if (pFVar13 == (FILE *)0x0) {
                if (param_1 != 0) {
                  FUN_1010d9258(param_1,"couldn\'t open file \"%s\"");
                }
                *param_2 = 0;
                uVar4 = 0x1a;
                goto LAB_1010d2cc4;
              }
              if (pFVar13 != *(FILE **)PTR____stdinp_101444228) {
                _fclose(pFVar13);
                lVar12 = plVar14[3];
                uVar4 = 3;
                lVar8 = 0;
                goto LAB_1010d2bf0;
              }
              do {
                sVar7 = _fread(auStack_268,1,0x200,pFVar13);
                if (sVar7 == 0) {
                  uVar4 = 0;
                  break;
                }
                uVar4 = FUN_1010d2eac(&local_270,1,auStack_268,sVar7,&local_280);
              } while ((int)uVar4 == 0);
            }
LAB_1010d2bf8:
          } while (((int)uVar4 == 0) &&
                  (plVar6 = plVar14 + 9, plVar14 = (long *)*plVar6, (long *)*plVar6 != (long *)0x0))
          ;
          if (((int)uVar4 != 0) ||
             ((param_3[9] != 0 &&
              (uVar4 = FUN_1010d2e28(&local_270,&local_280,"\r\n--%s--"), (int)uVar4 != 0))))
          goto LAB_1010d2cc4;
          param_3 = (long *)*param_3;
        } while (param_3 != (long *)0x0);
        uVar4 = FUN_1010d2e28(&local_270,&local_280,"\r\n--%s--\r\n");
        if ((int)uVar4 == 0) {
          *param_5 = local_280;
          if (lVar10 != 0) {
            (*(code *)PTR__free_101873628)(lVar10);
          }
          (*(code *)PTR__free_101873628)(lVar3);
          uVar4 = 0;
          *param_2 = puVar1;
          goto LAB_1010d2d04;
        }
LAB_1010d2cc4:
        FUN_1010d2774(&local_278);
        if (lVar10 != 0) {
LAB_1010d2cec:
          (*(code *)PTR__free_101873628)(lVar10);
        }
      }
LAB_1010d2cfc:
      (*(code *)PTR__free_101873628)(lVar3);
    }
  }
LAB_1010d2d04:
  if (lVar11 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}




undefined8 FUN_1010d2d40(long *param_1,long param_2)

{
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    return 0;
  }
  return 1;
}




size_t FUN_1010d2d64(long *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  FILE *pFVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 8) == 2) {
    if ((code *)param_1[3] == (code *)0x0) {
      return 0;
    }
    sVar1 = (*(code *)param_1[3])(param_2,1,param_3,*(undefined8 *)(lVar3 + 0x10));
  }
  else {
    pFVar2 = (FILE *)param_1[2];
    if (pFVar2 == (FILE *)0x0) {
      pFVar2 = _fopen(*(char **)(lVar3 + 0x10),"rb");
      param_1[2] = (long)pFVar2;
      if (pFVar2 == (FILE *)0x0) {
        return 0xffffffffffffffff;
      }
    }
    sVar1 = _fread(param_2,1,param_3,pFVar2);
  }
  if (sVar1 == 0) {
    if ((FILE *)param_1[2] != (FILE *)0x0) {
      _fclose((FILE *)param_1[2]);
      param_1[2] = 0;
    }
    sVar1 = 0;
    *param_1 = *(long *)*param_1;
  }
  return sVar1;
}




void FUN_1010d2e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_1038 [4096];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar1;
  FUN_1010e60fc(auStack_1038,0x1000,param_3,&stack0x00000000);
  FUN_1010d2eac(param_1,0,auStack_1038,0,param_2);
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1010d2eac(undefined8 *param_1,uint param_2,char *param_3,size_t param_4,long *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  stat sStack_e0;
  
  puVar2 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    return 0x1b;
  }
  *puVar2 = 0;
  if (param_2 < 2) {
    if (param_4 == 0) {
      param_4 = _strlen(param_3);
    }
    pvVar3 = (void *)(*(code *)PTR__malloc_101873620)(param_4 + 1);
    puVar2[2] = pvVar3;
    if (pvVar3 == (void *)0x0) {
      (*(code *)PTR__free_101873628)(puVar2);
      return 0x1b;
    }
    _memcpy(pvVar3,param_3,param_4);
    puVar2[3] = param_4;
    *(undefined1 *)(puVar2[2] + param_4) = 0;
  }
  else {
    puVar2[2] = param_3;
  }
  *(uint *)(puVar2 + 1) = param_2;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = puVar2;
  }
  *param_1 = puVar2;
  if (param_5 != (long *)0x0) {
    if (param_2 != 3) {
      *param_5 = *param_5 + param_4;
      return 0;
    }
    iVar1 = FUN_1010eb4e8("-",puVar2[2]);
    if (iVar1 == 0) {
      iVar1 = _stat((char *)puVar2[2],&sStack_e0);
      if ((iVar1 == 0) && ((sStack_e0.st_mode & 0xf000) != 0x4000)) {
        *param_5 = *param_5 + sStack_e0.st_size;
        return 0;
      }
      return 0x2b;
    }
  }
  return 0;
}




undefined8 FUN_1010d300c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  
  if (*(char **)(param_1 + 0x58) == (char *)0x0) {
    pcVar2 = (char *)(*(code *)PTR__strdup_101873638)(*(undefined8 *)(param_1 + 0x18));
    puVar1 = PTR__strdup_101873638;
    if (pcVar2 == (char *)0x0) {
      return 0x1b;
    }
    _basename(pcVar2);
    pcVar9 = (char *)(*(code *)puVar1)();
    (*(code *)PTR__free_101873628)(pcVar2);
    pcVar2 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      return 0x1b;
    }
  }
  else {
    pcVar9 = (char *)0x0;
    pcVar2 = *(char **)(param_1 + 0x58);
  }
  pcVar3 = _strchr(pcVar2,0x5c);
  if ((pcVar3 != (char *)0x0) || (pcVar3 = _strchr(pcVar2,0x22), pcVar3 != (char *)0x0)) {
    puVar1 = PTR__malloc_101873620;
    sVar4 = _strlen(pcVar2);
    pcVar5 = (char *)(*(code *)puVar1)(sVar4 << 1 | 1);
    pcVar3 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      if (pcVar9 != (char *)0x0) {
        (*(code *)PTR__free_101873628)(pcVar9);
      }
      return 0x1b;
    }
    do {
      cVar8 = *pcVar2;
      if (cVar8 == '\"') {
LAB_1010d3100:
        pcVar7 = pcVar3 + 1;
        *pcVar3 = '\\';
        cVar8 = *pcVar2;
      }
      else {
        if (cVar8 == '\0') goto LAB_1010d310c;
        pcVar7 = pcVar3;
        if (cVar8 == '\\') goto LAB_1010d3100;
      }
      pcVar2 = pcVar2 + 1;
      *pcVar7 = cVar8;
      pcVar3 = pcVar7 + 1;
    } while( true );
  }
  uVar6 = FUN_1010d2e28(param_2,param_3,"; filename=\"%s\"");
LAB_1010d3180:
  if (pcVar9 != (char *)0x0) {
    (*(code *)PTR__free_101873628)(pcVar9);
  }
  return uVar6;
LAB_1010d310c:
  *pcVar3 = '\0';
  uVar6 = FUN_1010d2e28(param_2,param_3,"; filename=\"%s\"");
  (*(code *)PTR__free_101873628)(pcVar5);
  goto LAB_1010d3180;
}




long FUN_1010d31b4(long param_1,long param_2,long param_3,long *param_4)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = *param_4;
  if (lVar3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 * param_2;
    if ((*(uint *)(lVar3 + 8) & 0xfffffffe) == 2) {
      lVar3 = FUN_1010d2d64(param_4,param_1,param_3);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar3 = *param_4;
    }
    lVar5 = 0;
    lVar4 = param_4[1];
    while( true ) {
      uVar6 = param_3 - lVar5;
      sVar2 = *(long *)(lVar3 + 0x18) - lVar4;
      pvVar1 = (void *)(*(long *)(lVar3 + 0x10) + lVar4);
      if (uVar6 < sVar2) break;
      _memcpy((void *)(param_1 + lVar5),pvVar1,sVar2);
      lVar5 = (((long *)*param_4)[3] - param_4[1]) + lVar5;
      param_4[1] = 0;
      lVar3 = *(long *)*param_4;
      *param_4 = lVar3;
      if (lVar3 == 0) {
        return lVar5;
      }
      lVar4 = 0;
      if (1 < *(uint *)(lVar3 + 8)) {
        return lVar5;
      }
    }
    _memcpy((void *)(param_1 + lVar5),pvVar1,uVar6);
    param_4[1] = param_4[1] + uVar6;
  }
  return param_3;
}




undefined8 FUN_1010d329c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    uVar1 = plVar2[2];
    *param_2 = plVar2[3];
    *param_1 = *plVar2;
    return uVar1;
  }
  return 0;
}




void FUN_1010d32c4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x758);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1010f2820(param_1,2,2);
    do {
      lVar1 = FUN_1010d3374(param_1,*puVar2,*(undefined8 *)(param_1 + 0x768),
                            *(undefined1 *)(param_1 + 0x3c9));
      if (lVar1 == 0) {
        FUN_1010d909c(param_1,"ignoring failed cookie_init for %s\n");
      }
      else {
        *(long *)(param_1 + 0x768) = lVar1;
      }
      puVar2 = (undefined8 *)puVar2[1];
    } while (puVar2 != (undefined8 *)0x0);
    FUN_1010f6eb4(*(undefined8 *)(param_1 + 0x758));
    *(undefined8 *)(param_1 + 0x758) = 0;
    FUN_1010f2868(param_1,2);
    return;
  }
  return;
}




long FUN_1010d3374(undefined8 param_1,char *param_2,long param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  FILE *pFVar7;
  
  lVar3 = param_3;
  if (param_3 == 0) {
    lVar3 = (*(code *)PTR__calloc_101873640)(1,0x28);
    if (lVar3 != 0) {
      pcVar5 = param_2;
      if (param_2 == (char *)0x0) {
        pcVar5 = "none";
      }
      lVar4 = (*(code *)PTR__strdup_101873638)(pcVar5);
      *(long *)(lVar3 + 8) = lVar4;
      if (lVar4 != 0) goto LAB_1010d33ec;
      pFVar7 = (FILE *)0x0;
      bVar1 = true;
LAB_1010d3528:
      FUN_1010d441c(lVar3);
LAB_1010d3530:
      if (!bVar1) {
        return 0;
      }
      if (pFVar7 == (FILE *)0x0) {
        return 0;
      }
      _fclose(pFVar7);
    }
    lVar3 = 0;
  }
  else {
LAB_1010d33ec:
    *(undefined1 *)(lVar3 + 0x10) = 0;
    if (param_2 == (char *)0x0) {
LAB_1010d3508:
      *(undefined1 *)(lVar3 + 0x20) = param_4;
    }
    else {
      iVar2 = FUN_1010eb4e8(param_2,"-");
      if (iVar2 == 0) {
        if (*param_2 == '\0') goto LAB_1010d3508;
        pFVar7 = _fopen(param_2,"r");
        bVar1 = true;
      }
      else {
        bVar1 = false;
        pFVar7 = *(FILE **)PTR____stdinp_101444228;
      }
      *(undefined1 *)(lVar3 + 0x20) = param_4;
      if (pFVar7 != (FILE *)0x0) {
        pcVar5 = (char *)(*(code *)PTR__malloc_101873620)(5000);
        if (pcVar5 == (char *)0x0) {
          if (param_3 == 0) goto LAB_1010d3528;
          goto LAB_1010d3530;
        }
        pcVar6 = _fgets(pcVar5,5000,pFVar7);
        if (pcVar6 != (char *)0x0) {
          do {
            iVar2 = FUN_1010f6624("Set-Cookie:",pcVar5,0xb);
            pcVar6 = pcVar5;
            if (iVar2 != 0) {
              pcVar6 = pcVar5 + 0xb;
            }
            for (; (*pcVar6 == '\t' || (*pcVar6 == ' ')); pcVar6 = pcVar6 + 1) {
            }
            FUN_1010d3564(param_1,lVar3,iVar2 != 0,pcVar6,0,0);
            pcVar6 = _fgets(pcVar5,5000,pFVar7);
          } while (pcVar6 != (char *)0x0);
        }
        (*(code *)PTR__free_101873628)(pcVar5);
        if (bVar1) {
          _fclose(pFVar7);
        }
      }
    }
    *(undefined1 *)(lVar3 + 0x10) = 1;
  }
  return lVar3;
}




undefined8 *
FUN_1010d3564(undefined8 param_1,undefined8 *param_2,int param_3,char *param_4,char *param_5,
             char *param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  time_t tVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  size_t sVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  void *pvVar14;
  bool bVar15;
  long lVar16;
  undefined8 *puVar17;
  bool bVar18;
  uint uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  long lVar22;
  undefined8 *puVar23;
  char *local_470;
  char local_468 [1024];
  long local_68;
  
  lVar22 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar22;
  tVar5 = _time((time_t *)0x0);
  puVar6 = (undefined8 *)(*(code *)PTR__calloc_101873640)(1,0x60);
  puVar23 = (undefined8 *)0x0;
  if (puVar6 == (void *)0x0) goto LAB_1010d3f98;
  if (param_3 == 0) {
    local_470 = (char *)0x0;
    iVar3 = _strncmp(param_4,"#HttpOnly_",10);
    if (iVar3 == 0) {
      param_4 = param_4 + 10;
      *(undefined1 *)((long)puVar6 + 0x5a) = 1;
    }
    if (*param_4 == '#') goto LAB_1010d3a94;
    pcVar7 = _strchr(param_4,0xd);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = _strchr(param_4,10);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = _strtok_r(param_4,"\t",&local_470);
    if (pcVar7 == (char *)0x0) {
      uVar19 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar19 = 0;
      do {
        switch(uVar4) {
        case 0:
          pcVar8 = pcVar7 + 1;
          if (*pcVar7 != '.') {
            pcVar8 = pcVar7;
          }
          lVar16 = (*(code *)PTR__strdup_101873638)(pcVar8);
          uVar4 = 0;
          puVar6[5] = lVar16;
          uVar19 = uVar19 | lVar16 == 0;
          break;
        case 1:
          iVar3 = FUN_1010f659c(pcVar7,"TRUE");
          *(bool *)(puVar6 + 8) = iVar3 != 0;
          uVar4 = 1;
          break;
        case 2:
          iVar3 = _strcmp("TRUE",pcVar7);
          if ((iVar3 == 0) || (iVar3 = _strcmp("FALSE",pcVar7), iVar3 == 0)) {
            lVar16 = (*(code *)PTR__strdup_101873638)("/");
            puVar6[3] = lVar16;
            lVar13 = (*(code *)PTR__strdup_101873638)("/");
            puVar6[4] = lVar13;
            uVar19 = uVar19 | lVar16 == 0 | (uint)(lVar13 == 0);
            goto switchD_1010d3b8c_caseD_3;
          }
          lVar16 = (*(code *)PTR__strdup_101873638)(pcVar7);
          puVar6[3] = lVar16;
          if (lVar16 == 0) {
            uVar4 = 2;
            uVar19 = 1;
          }
          else {
            lVar16 = FUN_1010d40d0();
            puVar6[4] = lVar16;
            uVar19 = uVar19 | lVar16 == 0;
            uVar4 = 2;
          }
          break;
        case 3:
switchD_1010d3b8c_caseD_3:
          iVar3 = FUN_1010f659c(pcVar7,"TRUE");
          *(bool *)(puVar6 + 0xb) = iVar3 != 0;
          uVar4 = 3;
          break;
        case 4:
          lVar16 = _strtol(pcVar7,(char **)0x0,10);
          puVar6[6] = lVar16;
          uVar4 = 4;
          break;
        case 5:
          lVar16 = (*(code *)PTR__strdup_101873638)(pcVar7);
          puVar6[1] = lVar16;
          uVar19 = uVar19 | lVar16 == 0;
          uVar4 = 5;
          break;
        case 6:
          lVar16 = (*(code *)PTR__strdup_101873638)(pcVar7);
          puVar6[2] = lVar16;
          uVar19 = uVar19 | lVar16 == 0;
          uVar4 = 6;
        }
        pcVar7 = _strtok_r((char *)0x0,"\t",&local_470);
        uVar4 = uVar4 + 1;
      } while ((pcVar7 != (char *)0x0) && (uVar19 != 1));
      if (uVar4 == 6) {
        lVar16 = (*(code *)PTR__strdup_101873638)("");
        puVar6[2] = lVar16;
        uVar19 = uVar19 | lVar16 == 0;
        uVar4 = lVar16 == 0 ^ 7;
      }
    }
    if ((uVar19 != 0) || (uVar4 != 7)) goto LAB_1010d3e54;
LAB_1010d3e80:
    if (((*(char *)(param_2 + 2) != '\0') || (*(char *)(param_2 + 4) == '\0')) || (puVar6[6] != 0))
    {
      *(char *)((long)puVar6 + 0x59) = *(char *)(param_2 + 2);
      FUN_1010d4380(param_2);
      puVar23 = (undefined8 *)*param_2;
      if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
LAB_1010d3eb4:
        puVar17 = puVar23;
        iVar3 = FUN_1010f659c(puVar17[1],puVar6[1]);
        if (iVar3 == 0) goto LAB_1010d3f08;
        if (puVar17[5] != 0) {
          if ((puVar6[5] != 0) && (iVar3 = FUN_1010f659c(), iVar3 != 0)) goto LAB_1010d3ee8;
          goto LAB_1010d3f08;
        }
        if (puVar6[5] != 0) goto LAB_1010d3f08;
LAB_1010d3ee8:
        if (puVar17[4] == 0) {
          if (puVar6[4] != 0) goto LAB_1010d3f08;
        }
        else if ((puVar6[4] == 0) || (iVar3 = FUN_1010f659c(), iVar3 == 0)) goto LAB_1010d3f08;
        if ((*(char *)((long)puVar6 + 0x59) != '\0') || (*(char *)((long)puVar17 + 0x59) == '\0')) {
          *puVar6 = *puVar17;
          (*(code *)PTR__free_101873628)(puVar17[1]);
          if (puVar17[2] != 0) {
            (*(code *)PTR__free_101873628)();
          }
          if (puVar17[5] != 0) {
            (*(code *)PTR__free_101873628)();
          }
          if (puVar17[3] != 0) {
            (*(code *)PTR__free_101873628)();
          }
          if (puVar17[4] != 0) {
            (*(code *)PTR__free_101873628)();
          }
          if (puVar17[7] != 0) {
            (*(code *)PTR__free_101873628)();
          }
          if (puVar17[9] != 0) {
            (*(code *)PTR__free_101873628)();
          }
          if (puVar17[10] != 0) {
            (*(code *)PTR__free_101873628)();
          }
          _memcpy(puVar17,puVar6,0x60);
          (*(code *)PTR__free_101873628)(puVar6);
          puVar6 = puVar17;
          do {
            puVar20 = puVar6;
            puVar6 = (undefined8 *)*puVar20;
          } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
          bVar18 = true;
          puVar6 = puVar17;
          goto LAB_1010d3f30;
        }
        goto LAB_1010d3e54;
      }
      bVar18 = false;
      puVar20 = (undefined8 *)0x0;
      goto LAB_1010d3f30;
    }
  }
  else {
    pcVar7 = (char *)(*(code *)PTR__malloc_101873620)(5000);
    if (pcVar7 == (char *)0x0) {
LAB_1010d3a94:
      (*(code *)PTR__free_101873628)(puVar6);
      puVar23 = (undefined8 *)0x0;
      goto LAB_1010d3f98;
    }
    pcVar8 = _strchr(param_4,0x3b);
    for (; (*param_4 == '\t' || (*param_4 == ' ')); param_4 = param_4 + 1) {
    }
    bVar18 = false;
    do {
      do {
        *pcVar7 = '\0';
        local_468[0] = '\0';
        iVar3 = _sscanf(param_4,"%1023[^;\r\n =]=%4999[^;\r\n]");
        if (0 < iVar3) {
          sVar9 = _strlen(pcVar7);
          sVar10 = _strlen(local_468);
          for (param_4 = param_4 + sVar10; (cVar2 = *param_4, cVar2 == '\t' || (cVar2 == ' '));
              param_4 = param_4 + 1) {
          }
          pcVar21 = pcVar7;
          if (sVar9 == 0) {
            bVar15 = false;
          }
          else {
            do {
              if ((pcVar7[sVar9 - 1] != '\t') && (pcVar7[sVar9 - 1] != ' ')) {
                bVar15 = true;
                break;
              }
              bVar15 = false;
              sVar10 = sVar9 - 1;
              pcVar7[sVar9 - 1] = '\0';
              sVar9 = sVar10;
            } while (sVar10 != 0);
          }
          for (; (*pcVar21 == '\t' || (*pcVar21 == ' ')); pcVar21 = pcVar21 + 1) {
          }
          if (bVar15) {
LAB_1010d3744:
            iVar3 = FUN_1010f659c("path",local_468);
            if (iVar3 != 0) {
              if (puVar6[3] != 0) {
                (*(code *)PTR__free_101873628)();
              }
              lVar22 = (*(code *)PTR__strdup_101873638)(pcVar21);
              puVar6[3] = lVar22;
              if (lVar22 != 0) {
                lVar22 = FUN_1010d40d0();
                puVar6[4] = lVar22;
                if (lVar22 != 0) goto LAB_1010d3798;
              }
LAB_1010d39f8:
              bVar18 = true;
              goto LAB_1010d3a00;
            }
            iVar3 = FUN_1010f659c("domain",local_468);
            if (iVar3 == 0) {
              iVar3 = FUN_1010f659c("version",local_468);
              if (iVar3 == 0) {
                iVar3 = FUN_1010f659c("max-age",local_468);
                if (iVar3 == 0) {
                  iVar3 = FUN_1010f659c("expires",local_468);
                  if (iVar3 != 0) {
                    if (puVar6[7] != 0) {
                      (*(code *)PTR__free_101873628)();
                    }
                    lVar22 = (*(code *)PTR__strdup_101873638)(pcVar21);
                    puVar6[7] = lVar22;
                    goto joined_r0x0001010d39ac;
                  }
                  if (puVar6[1] == 0) {
                    uVar12 = (*(code *)PTR__strdup_101873638)(local_468);
                    puVar6[1] = uVar12;
                    lVar22 = (*(code *)PTR__strdup_101873638)(pcVar21);
                    puVar6[2] = lVar22;
                    if (lVar22 == 0 || puVar6[1] == 0) goto LAB_1010d39f8;
                  }
                }
                else {
                  if (puVar6[10] != 0) {
                    (*(code *)PTR__free_101873628)();
                  }
                  lVar22 = (*(code *)PTR__strdup_101873638)(pcVar21);
                  puVar6[10] = lVar22;
                  if (lVar22 == 0) {
                    bVar18 = true;
                    lVar22 = *(long *)PTR____stack_chk_guard_101444218;
                    goto LAB_1010d3b3c;
                  }
                }
              }
              else {
                if (puVar6[9] != 0) {
                  (*(code *)PTR__free_101873628)();
                }
                lVar22 = (*(code *)PTR__strdup_101873638)(pcVar21);
                puVar6[9] = lVar22;
joined_r0x0001010d39ac:
                if (lVar22 == 0) goto LAB_1010d39f8;
              }
            }
            else {
              pcVar1 = pcVar21 + 1;
              if (*pcVar21 != '.') {
                pcVar1 = pcVar21;
              }
              pcVar21 = param_5;
              if (param_5 == (char *)0x0) {
                pcVar21 = pcVar1;
              }
              uVar4 = FUN_1010d41b8(pcVar21);
              pcVar11 = _strchr(pcVar1,0x2e);
              pcVar21 = ":";
              if (pcVar11 != (char *)0x0) {
                pcVar21 = param_5;
              }
              param_5 = pcVar21;
              if (pcVar21 != (char *)0x0) {
                if (uVar4 == 0) {
                  iVar3 = FUN_1010d4210(pcVar1,pcVar21);
                  if (iVar3 == 0) goto LAB_1010d38fc;
                }
                else {
                  iVar3 = _strcmp(pcVar1,pcVar21);
                  if (iVar3 != 0) {
LAB_1010d38fc:
                    FUN_1010d909c(param_1,"skipped cookie with bad tailmatch domain: %s\n");
                    bVar18 = true;
                    goto LAB_1010d3798;
                  }
                }
              }
              if (puVar6[5] != 0) {
                (*(code *)PTR__free_101873628)();
              }
              lVar22 = (*(code *)PTR__strdup_101873638)(pcVar1);
              puVar6[5] = lVar22;
              if (lVar22 == 0) goto LAB_1010d39f8;
              if ((uVar4 & 1) == 0) {
                *(undefined1 *)(puVar6 + 8) = 1;
              }
            }
          }
          else {
            iVar3 = FUN_1010f659c("secure",local_468);
            if (iVar3 == 0) {
              iVar3 = FUN_1010f659c("httponly",local_468);
              if (iVar3 == 0) {
                if (cVar2 == '=') goto LAB_1010d3744;
              }
              else {
                *(undefined1 *)((long)puVar6 + 0x5a) = 1;
              }
            }
            else {
              *(undefined1 *)(puVar6 + 0xb) = 1;
            }
          }
        }
LAB_1010d3798:
        if ((pcVar8 == (char *)0x0) || (param_4 = pcVar8, *pcVar8 == '\0')) goto LAB_1010d3a00;
        do {
          do {
            param_4 = param_4 + 1;
            cVar2 = *param_4;
          } while (cVar2 == '\t');
        } while (cVar2 == ' ');
        pcVar8 = _strchr(param_4,0x3b);
      } while (pcVar8 != (char *)0x0);
      if (cVar2 == '\0') break;
      sVar9 = _strlen(param_4);
      pcVar8 = param_4 + sVar9;
    } while (pcVar8 != (char *)0x0);
LAB_1010d3a00:
    pcVar8 = (char *)puVar6[10];
    lVar22 = *(long *)PTR____stack_chk_guard_101444218;
    if (pcVar8 == (char *)0x0) {
LAB_1010d3b3c:
      if (puVar6[7] != 0) {
        lVar16 = FUN_1010f2fb4(puVar6[7],0);
        puVar6[6] = lVar16;
        if (lVar16 == 0) {
          puVar6[6] = 1;
        }
        else if (lVar16 < 0) {
          puVar6[6] = 0;
        }
      }
    }
    else {
      pcVar21 = pcVar8 + 1;
      if (*pcVar8 != '\"') {
        pcVar21 = pcVar8;
      }
      lVar13 = _strtol(pcVar21,(char **)0x0,10);
      puVar6[6] = lVar13;
      lVar16 = 0x7fffffffffffffff;
      if (lVar13 <= 0x7fffffffffffffff - tVar5) {
        lVar16 = lVar13 + tVar5;
      }
      puVar6[6] = lVar16;
    }
    if (bVar18) {
LAB_1010d3e40:
      (*(code *)PTR__free_101873628)(pcVar7);
    }
    else {
      if ((param_5 != (char *)0x0) && (puVar6[5] == 0)) {
        lVar16 = (*(code *)PTR__strdup_101873638)(param_5);
        puVar6[5] = lVar16;
        if (lVar16 == 0) goto LAB_1010d3e40;
      }
      if ((param_6 == (char *)0x0) || (puVar6[3] != 0)) {
LAB_1010d3e64:
        (*(code *)PTR__free_101873628)(pcVar7);
      }
      else {
        pcVar8 = _strchr(param_6,0x3f);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = _strrchr(param_6,0x2f);
        }
        else {
          pcVar8 = (char *)FUN_1010f6f60(param_6,0x2f,(long)pcVar8 - (long)param_6);
        }
        if (pcVar8 == (char *)0x0) goto LAB_1010d3e64;
        pvVar14 = (void *)(*(code *)PTR__malloc_101873620)(pcVar8 + (2 - (long)param_6));
        puVar6[3] = pvVar14;
        if (pvVar14 == (void *)0x0) goto LAB_1010d3e40;
        _memcpy(pvVar14,param_6,(size_t)(pcVar8 + (1 - (long)param_6)));
        (pcVar8 + (1 - (long)param_6))[puVar6[3]] = '\0';
        lVar16 = FUN_1010d40d0(puVar6[3]);
        puVar6[4] = lVar16;
        (*(code *)PTR__free_101873628)(pcVar7);
        if (lVar16 == 0) goto LAB_1010d3e54;
      }
      if (puVar6[1] != 0) goto LAB_1010d3e80;
    }
  }
LAB_1010d3e54:
  FUN_1010d4294(puVar6);
  puVar23 = (undefined8 *)0x0;
  goto LAB_1010d3f98;
LAB_1010d3f08:
  puVar23 = (undefined8 *)*puVar17;
  if ((undefined8 *)*puVar17 == (undefined8 *)0x0) goto code_r0x0001010d3f10;
  goto LAB_1010d3eb4;
code_r0x0001010d3f10:
  bVar18 = false;
  puVar20 = puVar17;
LAB_1010d3f30:
  if (*(char *)(param_2 + 2) != '\0') {
    FUN_1010d909c(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n");
  }
  puVar23 = puVar6;
  if (!bVar18) {
    if (puVar20 == (undefined8 *)0x0) {
      *param_2 = puVar6;
    }
    else {
      *puVar20 = puVar6;
    }
    param_2[3] = param_2[3] + 1;
  }
LAB_1010d3f98:
  if (lVar22 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar23;
}




char * FUN_1010d40d0(void)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)(*(code *)PTR__strdup_101873638)();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    if (*pcVar1 == '\"') {
      sVar2 = _strlen(pcVar1);
      _memmove(pcVar1,pcVar1 + 1,sVar2);
    }
    sVar2 = _strlen(pcVar1);
    if (pcVar1[sVar2 - 1] == '\"') {
      pcVar1[sVar2 - 1] = '\0';
    }
    if (*pcVar1 != '/') {
      (*(code *)PTR__free_101873628)(pcVar1);
      pcVar1 = (char *)(*(code *)PTR__strdup_101873638)("/");
      return pcVar1;
    }
    sVar2 = _strlen(pcVar1);
    if ((1 < sVar2) && (pcVar1[sVar2 - 1] == '/')) {
      pcVar1[sVar2 - 1] = '\0';
    }
  }
  return pcVar1;
}




bool FUN_1010d41b8(char *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  iVar2 = _inet_pton(2,param_1,auStack_28);
  if (iVar2 == 0) {
    iVar2 = _inet_pton(0x1e,param_1,auStack_38);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




bool FUN_1010d4210(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  
  sVar3 = _strlen(param_1);
  sVar4 = _strlen(param_2);
  if ((sVar4 < sVar3) || (iVar2 = FUN_1010f659c(param_1,param_2 + (sVar4 - sVar3)), iVar2 == 0)) {
    bVar1 = false;
  }
  else if (sVar4 == sVar3) {
    bVar1 = true;
  }
  else {
    bVar1 = param_2[(sVar4 - sVar3) + -1] == '.';
  }
  return bVar1;
}




void FUN_1010d4294(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(long *)(param_1 + 8) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  (*(code *)PTR__free_101873628)(param_1);
  return;
}




void FUN_1010d4380(long *param_1)

{
  time_t tVar1;
  long *plVar2;
  long *plVar4;
  long *plVar3;
  
  tVar1 = _time((time_t *)0x0);
  if ((long *)*param_1 != (long *)0x0) {
    plVar4 = (long *)*param_1;
    plVar2 = (long *)0x0;
    do {
      while (((plVar3 = plVar4, plVar4 = (long *)*plVar3, plVar3[7] == 0 && (plVar3[10] == 0)) ||
             (tVar1 <= plVar3[6]))) {
        plVar2 = plVar3;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      if (plVar3 == (long *)*param_1) {
        *param_1 = (long)plVar4;
      }
      else {
        *plVar2 = (long)plVar4;
      }
      param_1[3] = param_1[3] + -1;
      FUN_1010d4294();
    } while (plVar4 != (long *)0x0);
  }
  return;
}




void FUN_1010d441c(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_1[1] != 0) {
    (*(code *)PTR__free_101873628)();
  }
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    FUN_1010d4294();
  }
  (*(code *)PTR__free_101873628)(param_1);
  return;
}




long * FUN_1010d4488(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  time_t tVar3;
  ulong uVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  long *plVar9;
  undefined8 *puVar10;
  char cVar11;
  long lVar12;
  long *plVar13;
  size_t sVar14;
  undefined8 *puVar15;
  char *pcVar16;
  
  tVar3 = _time((time_t *)0x0);
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*param_1 != 0) {
    FUN_1010d4380(param_1);
    uVar1 = FUN_1010d41b8(param_2);
    puVar15 = (undefined8 *)*param_1;
    if (puVar15 != (void *)0x0) {
      sVar14 = 0;
      plVar13 = (long *)0x0;
      do {
        if ((puVar15[6] == 0 || tVar3 < (long)puVar15[6]) &&
           (*(char *)(puVar15 + 0xb) == '\0' || param_4 != 0)) {
          if (puVar15[5] != 0) {
            cVar11 = *(char *)(puVar15 + 8);
            if ((uVar1 & 1) == 0 && cVar11 != '\0') {
              uVar4 = FUN_1010d4210(puVar15[5],param_2);
              if ((uVar4 & 1) != 0) goto LAB_1010d456c;
              cVar11 = *(char *)(puVar15 + 8);
            }
            if (((uVar1 | cVar11 == '\0') != 1) ||
               (iVar2 = FUN_1010f659c(param_2,puVar15[5]), iVar2 == 0)) goto LAB_1010d46b8;
          }
LAB_1010d456c:
          pcVar16 = (char *)puVar15[4];
          if ((pcVar16 == (char *)0x0) || (sVar5 = _strlen(pcVar16), sVar5 == 1))
          goto LAB_1010d4680;
          pcVar6 = (char *)(*(code *)PTR__strdup_101873638)(param_3);
          if (pcVar6 != (char *)0x0) {
            pcVar7 = _strchr(pcVar6,0x3f);
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = '\0';
            }
            if (*pcVar6 != '/') {
              (*(code *)PTR__free_101873628)(pcVar6);
              pcVar6 = (char *)(*(code *)PTR__strdup_101873638)("/");
              if (pcVar6 == (char *)0x0) goto LAB_1010d46b8;
            }
            sVar8 = _strlen(pcVar6);
            if ((sVar8 < sVar5) || (iVar2 = _strncmp(pcVar16,pcVar6,sVar5), iVar2 != 0)) {
              (*(code *)PTR__free_101873628)(pcVar6);
            }
            else {
              if (sVar5 == sVar8) {
                (*(code *)PTR__free_101873628)(pcVar6);
              }
              else {
                cVar11 = pcVar6[sVar5];
                (*(code *)PTR__free_101873628)(pcVar6);
                if (cVar11 != '/') goto LAB_1010d46b8;
              }
LAB_1010d4680:
              plVar9 = (long *)(*(code *)PTR__malloc_101873620)(0x60);
              if (plVar9 == (long *)0x0) goto joined_r0x0001010d4760;
              _memcpy(plVar9,puVar15,0x60);
              *plVar9 = (long)plVar13;
              sVar14 = sVar14 + 1;
              plVar13 = plVar9;
            }
          }
        }
LAB_1010d46b8:
        puVar15 = (undefined8 *)*puVar15;
      } while (puVar15 != (void *)0x0);
      if (sVar14 == 0) {
        return plVar13;
      }
      puVar10 = (undefined8 *)(*(code *)PTR__malloc_101873620)(sVar14 << 3);
      puVar15 = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          *puVar15 = plVar13;
          puVar15 = puVar15 + 1;
        }
        _qsort(puVar10,sVar14,8,(int *)FUN_1010d47a4);
        plVar13 = (long *)*puVar10;
        puVar15 = puVar10;
        for (lVar12 = sVar14 - 1; lVar12 != 0; lVar12 = lVar12 + -1) {
          *(undefined8 *)*puVar15 = puVar15[1];
          puVar15 = puVar15 + 1;
        }
        *(undefined8 *)puVar10[sVar14 - 1] = 0;
        (*(code *)PTR__free_101873628)(puVar10);
        return plVar13;
      }
joined_r0x0001010d4760:
      while (plVar13 != (long *)0x0) {
        lVar12 = *plVar13;
        (*(code *)PTR__free_101873628)(plVar13);
        plVar13 = (long *)lVar12;
      }
    }
  }
  return (long *)0x0;
}




int FUN_1010d47a4(long *param_1,long *param_2)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  if (*(char **)(lVar5 + 0x18) == (char *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = _strlen(*(char **)(lVar5 + 0x18));
  }
  if (*(char **)(lVar4 + 0x18) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _strlen(*(char **)(lVar4 + 0x18));
  }
  if (sVar2 == uVar3) {
    if (*(char **)(lVar5 + 0x28) == (char *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = _strlen(*(char **)(lVar5 + 0x28));
    }
    if (*(char **)(lVar4 + 0x28) == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _strlen(*(char **)(lVar4 + 0x28));
    }
    if (sVar2 == uVar3) {
      if ((*(char **)(lVar5 + 8) != (char *)0x0) && (*(char **)(lVar4 + 8) != (char *)0x0)) {
        iVar1 = _strcmp(*(char **)(lVar5 + 8),*(char **)(lVar4 + 8));
        return iVar1;
      }
      return 0;
    }
  }
  iVar1 = -1;
  if (sVar2 < uVar3) {
    iVar1 = 1;
  }
  return iVar1;
}




void FUN_1010d4868(long *param_1)

{
  long *plVar1;
  
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      FUN_1010d4294();
    }
    *param_1 = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_1010d48a8(long *param_1,int param_2)

{
  while (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
    if (param_2 == 0) {
      (*(code *)PTR__free_101873628)();
    }
    else {
      FUN_1010d4294();
    }
  }
  return;
}




void FUN_1010d48f8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (plVar3 = (long *)*param_1, plVar6 = plVar3, plVar5 = plVar3, plVar3 != (long *)0x0)) {
    while (plVar4 = plVar5, plVar2 = plVar6, plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      plVar6 = plVar4;
      if (plVar4[6] == 0) {
        plVar1 = plVar5;
        if (plVar3 != plVar4) {
          plVar1 = plVar3;
        }
        plVar6 = plVar5;
        if (plVar2 != plVar4) {
          *plVar2 = (long)plVar5;
          plVar6 = plVar2;
        }
        FUN_1010d4294();
        param_1[3] = param_1[3] + -1;
        plVar3 = plVar1;
      }
    }
    *param_1 = plVar3;
  }
  return;
}




long FUN_1010d4984(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x768);
  if ((plVar3 == (long *)0x0) || (plVar3[3] == 0)) {
LAB_1010d4a04:
    lVar2 = 0;
  }
  else {
    plVar3 = (long *)*plVar3;
    lVar4 = 0;
    if (plVar3 == (long *)0x0) {
      lVar2 = 0;
    }
    else {
      do {
        lVar1 = FUN_1010d4a18(plVar3);
        if (lVar1 == 0) {
LAB_1010d49fc:
          FUN_1010f6eb4(lVar4);
          goto LAB_1010d4a04;
        }
        lVar2 = FUN_1010f6dc8(lVar4,lVar1);
        if (lVar2 == 0) {
          (*(code *)PTR__free_101873628)(lVar1);
          goto LAB_1010d49fc;
        }
        plVar3 = (long *)*plVar3;
        lVar4 = lVar2;
      } while (plVar3 != (long *)0x0);
    }
  }
  return lVar2;
}




void FUN_1010d4a18(void)

{
  FUN_1010e7298("%s%s%s\t%s\t%s\t%s\t%ld\t%s\t%s");
  return;
}




void FUN_1010d4b00(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  FILE *pFVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x568) == 0) {
    if ((param_2 != 0) && (*(long *)(param_1 + 0x758) != 0)) {
      FUN_1010f6eb4();
      *(undefined8 *)(param_1 + 0x758) = 0;
    }
    FUN_1010f2820(param_1,2,2);
  }
  else {
    if (*(long *)(param_1 + 0x758) != 0) {
      FUN_1010d32c4(param_1);
    }
    FUN_1010f2820(param_1,2,2);
    plVar6 = *(long **)(param_1 + 0x768);
    if ((plVar6 != (long *)0x0) && (plVar6[3] != 0)) {
      pcVar4 = *(char **)(param_1 + 0x568);
      FUN_1010d4380(plVar6);
      iVar2 = FUN_1010eb4e8("-",pcVar4);
      if (iVar2 == 0) {
        pFVar5 = _fopen(pcVar4,"w");
        if (pFVar5 == (FILE *)0x0) {
LAB_1010d4c5c:
          FUN_1010d909c(param_1,"WARNING: failed to save cookies in %s\n");
          goto LAB_1010d4c74;
        }
        bVar1 = false;
      }
      else {
        pFVar5 = *(FILE **)PTR____stdoutp_101444230;
        bVar1 = true;
      }
      _fputs("# Netscape HTTP Cookie File\n# http://curl.haxx.se/docs/http-cookies.html\n# This file was generated by libcurl! Edit at your own risk.\n\n"
             ,pFVar5);
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        lVar3 = FUN_1010d4a18(plVar6);
        if (lVar3 == 0) {
          FUN_1010e74ac(pFVar5,"#\n# Fatal libcurl error\n");
          if (!bVar1) {
            _fclose(pFVar5);
          }
          goto LAB_1010d4c5c;
        }
        FUN_1010e74ac(pFVar5,"%s\n");
        (*(code *)PTR__free_101873628)(lVar3);
      }
      if (!bVar1) {
        _fclose(pFVar5);
      }
    }
  }
LAB_1010d4c74:
  if (param_2 != 0) {
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (*(long *)(param_1 + 0x768) != *(long *)(*(long *)(param_1 + 0x70) + 0x28))) {
      FUN_1010d441c();
    }
  }
  FUN_1010f2868(param_1,2);
  return;
}




undefined4 FUN_1010d4cb8(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(code *)PTR__calloc_101873640)(1,0x88);
  *(long *)(*param_1 + 0x218) = lVar1;
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




ulong FUN_1010d4d00(long *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  size_t sVar11;
  size_t sVar12;
  undefined8 uVar13;
  char *pcVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  char *pcVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  size_t sVar31;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar20 = *(long *)PTR____stack_chk_guard_101444218;
  lVar21 = *param_1;
  puVar1 = (undefined8 *)(lVar21 + 0x8ab0);
  pcVar23 = (char *)*puVar1;
  local_70 = 0;
  local_78 = 0;
  lVar22 = param_1[0x18];
  uVar16 = *(uint *)(lVar21 + 0x420);
  uVar29 = 1;
  *param_2 = 1;
  local_68 = lVar20;
  if (0x13 < *(int *)((long)param_1 + 0x1a4)) goto LAB_1010d5adc;
  if ((int)param_1[0xcd] == 2) {
LAB_1010d5ad8:
    uVar29 = 1;
    goto LAB_1010d5adc;
  }
  plVar30 = *(long **)(lVar21 + 0x218);
  pcVar14 = (char *)(lVar21 + 0x8918);
  if (*pcVar14 == '\0') {
    lVar17 = *(long *)(lVar21 + 0x8920);
    lVar7 = lVar22;
    if (lVar17 != 0) {
      (*(code *)PTR__free_101873628)(lVar17);
      lVar7 = param_1[0x18];
    }
    lVar7 = (*(code *)PTR__strdup_101873638)(lVar7);
    *(long *)(lVar21 + 0x8920) = lVar7;
    if (lVar7 != 0) goto LAB_1010d4dd4;
LAB_1010d5208:
    uVar29 = 0x1b;
    goto LAB_1010d5adc;
  }
LAB_1010d4dd4:
  plVar18 = plVar30 + 5;
  *plVar18 = 0;
  plVar19 = plVar30 + 6;
  *plVar19 = 0;
  if (((*(byte *)(param_1[0x61] + 0x78) & 7) != 0) && (*(char *)(lVar21 + 0x501) != '\0')) {
    uVar16 = 4;
  }
  pcVar26 = *(char **)(lVar21 + 0x570);
  if (pcVar26 == (char *)0x0) {
    if (*(char *)(lVar21 + 0x4ff) == '\0') {
      if (uVar16 - 2 < 4) {
        pcVar26 = (&PTR_s_POST_10182ed40)[(int)(uVar16 - 2)];
      }
      else {
        pcVar26 = "GET";
      }
    }
    else {
      pcVar26 = "HEAD";
    }
  }
  lVar7 = FUN_1010d6790(param_1,"User-Agent:");
  if ((lVar7 != 0) && (param_1[0x66] != 0)) {
    (*(code *)PTR__free_101873628)();
    param_1[0x66] = 0;
  }
  uVar29 = FUN_1010d6dfc(param_1,pcVar26,pcVar23,0);
  if ((int)uVar29 != 0) goto LAB_1010d5adc;
  if (((*(char *)(lVar21 + 0x8a09) == '\0') && (*(char *)(lVar21 + 0x8a29) == '\0')) ||
     ((uVar16 | 4) == 5)) {
    *(undefined1 *)((long)param_1 + 0x2d6) = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x2d6) = 1;
  }
  if (param_1[0x6a] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[0x6a] = 0;
  }
  if ((*(long *)(lVar21 + 0x748) == 0) || (lVar20 = FUN_1010d6790(param_1,"Referer:"), lVar20 != 0))
  {
    param_1[0x6a] = 0;
LAB_1010d4f10:
    if ((*(long *)(lVar21 + 0x560) == 0) || (lVar20 = FUN_1010d6790(param_1,"Cookie:"), lVar20 != 0)
       ) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar21 + 0x560);
    }
    lVar20 = FUN_1010d6790(param_1,"Accept-Encoding:");
    if ((lVar20 == 0) && (*(long *)(lVar21 + 0x580) != 0)) {
      if (param_1[0x67] != 0) {
        (*(code *)PTR__free_101873628)();
        param_1[0x67] = 0;
      }
      lVar20 = FUN_1010e7298("Accept-Encoding: %s\r\n");
      param_1[0x67] = lVar20;
      if (lVar20 == 0) goto LAB_1010d57e8;
    }
    lVar20 = FUN_1010d6790(param_1,"TE:");
    if ((lVar20 == 0) && (*(char *)(lVar21 + 0x4fa) != '\0')) {
      lVar20 = FUN_1010d6790(param_1,"Connection:");
      if (param_1[0x6e] != 0) {
        (*(code *)PTR__free_101873628)();
        param_1[0x6e] = 0;
      }
      if (lVar20 == 0) {
        lVar20 = (*(code *)PTR__strdup_101873638)("Connection: TE\r\nTE: gzip\r\n");
      }
      else {
        lVar20 = FUN_1010e7298("%s, TE\r\nTE: gzip\r\n");
      }
      param_1[0x6e] = lVar20;
      if (lVar20 == 0) goto LAB_1010d57e8;
    }
    if (*(int *)((long)param_1 + 0x1a4) != 0x14) {
      lVar20 = FUN_1010d6790(param_1,"Transfer-Encoding:");
      if (lVar20 == 0) {
        if ((((*(byte *)(param_1[0x61] + 0x78) & 3) == 0) || (*(char *)(lVar21 + 0x501) == '\0')) ||
           (*(long *)(lVar21 + 0x8ae8) != -1)) {
          *(undefined1 *)(lVar21 + 0x211) = 0;
        }
        else if (*(char *)((long)param_1 + 0x2d6) == '\0') {
          if ((*(long *)(lVar21 + 0x428) < 2) &&
             (((*(long *)(lVar21 + 0x428) == 1 || (*(int *)((long)param_1 + 0x1a4) == 10)) ||
              ((*(int *)((long)param_1 + 0x1a4) != 0xb && (*(int *)(lVar21 + 0x8a94) == 10)))))) {
            FUN_1010d9258(lVar21,"Chunky upload is not supported by HTTP 1.0");
            uVar29 = 0x19;
            lVar20 = *(long *)PTR____stack_chk_guard_101444218;
            goto LAB_1010d5adc;
          }
          *(undefined1 *)(lVar21 + 0x211) = 1;
        }
      }
      else {
        uVar5 = FUN_1010d7970(lVar20,"Transfer-Encoding:","chunked");
        *(undefined1 *)(lVar21 + 0x211) = uVar5;
      }
    }
    if (param_1[0x6b] != 0) {
      (*(code *)PTR__free_101873628)();
      param_1[0x6b] = 0;
    }
    lVar20 = FUN_1010d6790(param_1,"Host:");
    if ((lVar20 == 0) ||
       ((*pcVar14 != '\0' &&
        (iVar6 = FUN_1010f659c(*(undefined8 *)(lVar21 + 0x8920),param_1[0x18]), iVar6 == 0)))) {
      if ((((*(uint *)(param_1[0x62] + 0x78) >> 1 & 1) == 0) || ((int)param_1[0x1f] != 0x1bb)) &&
         (((*(uint *)(param_1[0x62] + 0x78) & 1) == 0 || ((int)param_1[0x1f] != 0x50)))) {
        pcVar26 = "Host: %s%s%s:%hu\r\n";
      }
      else {
        pcVar26 = "Host: %s%s%s\r\n";
      }
      lVar17 = FUN_1010e7298(pcVar26);
      param_1[0x6b] = lVar17;
      lVar20 = *(long *)PTR____stack_chk_guard_101444218;
      if (lVar17 == 0) goto LAB_1010d5208;
    }
    else {
      pcVar26 = (char *)FUN_1010d687c(lVar20);
      if (pcVar26 == (char *)0x0) goto LAB_1010d57e8;
      if (*pcVar26 == '[') {
        sVar8 = _strlen(pcVar26);
        _memmove(pcVar26,pcVar26 + 1,sVar8 - 1);
        iVar6 = 0x5d;
LAB_1010d5234:
        pcVar9 = _strchr(pcVar26,iVar6);
        if (pcVar9 != (char *)0x0) {
          *pcVar9 = '\0';
        }
        if (param_1[0x6c] != 0) {
          (*(code *)PTR__free_101873628)();
          param_1[0x6c] = 0;
        }
        param_1[0x6c] = (long)pcVar26;
      }
      else {
        if (*pcVar26 != '\0') {
          iVar6 = 0x3a;
          goto LAB_1010d5234;
        }
        (*(code *)PTR__free_101873628)(pcVar26);
      }
      param_1[0x6b] = 0;
      lVar20 = *(long *)PTR____stack_chk_guard_101444218;
    }
    if ((*(char *)((long)param_1 + 0x2cb) == '\0') || (*(char *)((long)param_1 + 0x2d5) != '\0')) {
LAB_1010d5390:
      bVar4 = false;
    }
    else {
      pcVar26 = (char *)param_1[0x18];
      pcVar9 = (char *)param_1[0x19];
      pcVar23 = *(char **)(lVar21 + 0x738);
      if ((pcVar9 != pcVar26) && (pcVar10 = _strstr(pcVar23,pcVar9), pcVar10 != (char *)0x0)) {
        sVar8 = _strlen(pcVar9);
        sVar11 = _strlen(pcVar26);
        sVar12 = _strlen(pcVar23);
        pcVar26 = (char *)(*(code *)PTR__malloc_101873620)((1 - sVar8) + sVar11 + sVar12);
        if (pcVar26 == (char *)0x0) goto LAB_1010d57e8;
        sVar31 = (long)pcVar10 - (long)pcVar23;
        _memcpy(pcVar26,pcVar23,sVar31);
        _memcpy(pcVar26 + sVar31,(void *)param_1[0x18],sVar11);
        _memcpy(pcVar26 + sVar11 + sVar31,pcVar10 + sVar8,((1 - sVar31) - sVar8) + sVar12);
        if (*(char *)(lVar21 + 0x740) != '\0') {
          if (*(long *)(lVar21 + 0x738) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(lVar21 + 0x738) = 0;
          }
          *(undefined1 *)(lVar21 + 0x740) = 0;
        }
        *(char **)(lVar21 + 0x738) = pcVar26;
        *(undefined1 *)(lVar21 + 0x740) = 1;
        pcVar23 = pcVar26;
      }
      iVar6 = FUN_1010f6624("ftp://",pcVar23,6);
      if (iVar6 == 0) {
        bVar4 = false;
        lVar20 = *(long *)PTR____stack_chk_guard_101444218;
      }
      else {
        if (*(char *)(lVar21 + 0x548) != '\0') {
          pcVar26 = _strstr(pcVar23,";type=");
          if (pcVar26 == (char *)0x0) {
LAB_1010d556c:
            if (*(char *)*puVar1 == '\0') {
              puVar25 = &local_78;
              sVar8 = _strlen(pcVar23);
              if (pcVar23[sVar8 - 1] != '/') {
                puVar25 = (undefined8 *)((ulong)puVar25 | 1);
                local_78 = CONCAT71(local_78._1_7_,0x2f);
              }
            }
            else {
              puVar25 = &local_78;
            }
            FUN_1010e7270(puVar25,8,";type=%c");
          }
          else if ((pcVar26[6] != '\0') && (pcVar26[7] == '\0')) {
            iVar6 = FUN_1010f6448((int)pcVar26[6]);
            if ((8 < iVar6 - 0x41U) || ((1 << (ulong)(iVar6 - 0x41U & 0x1f) & 0x109U) == 0))
            goto LAB_1010d556c;
          }
        }
        lVar20 = *(long *)PTR____stack_chk_guard_101444218;
        if (*(char *)((long)param_1 + 0x2cc) == '\0') goto LAB_1010d5390;
        bVar4 = *(char *)((long)param_1 + 0x2db) == '\0';
      }
    }
    if (uVar16 == 3) {
      uVar24 = *(undefined8 *)(lVar21 + 0x3c0);
      uVar13 = FUN_1010d6790(param_1,"Content-Type:");
      uVar29 = FUN_1010d27dc(lVar21,plVar30,uVar24,uVar13,plVar30 + 1);
      if ((int)uVar29 != 0) goto LAB_1010d5adc;
    }
    lVar20 = FUN_1010d6790(param_1,"Accept:");
    pcVar26 = (char *)0x0;
    if (lVar20 == 0) {
      pcVar26 = "Accept: */*\r\n";
    }
    plVar30[4] = (long)pcVar26;
    if (uVar16 - 2 < 3) {
      plVar27 = (long *)(lVar21 + 0x8ac8);
      lVar20 = *plVar27;
      if (lVar20 != 0) {
        if (lVar20 < 0) {
          *plVar27 = 0;
        }
        else if (*pcVar14 == '\0') {
          if (((code *)param_1[0x75] != (code *)0x0) &&
             (iVar6 = (*(code *)param_1[0x75])(param_1[0x76],lVar20,0), iVar6 != 0)) {
            if (iVar6 != 2) {
              pcVar23 = "Could not seek stream";
LAB_1010d5c24:
              FUN_1010d9258(lVar21,pcVar23);
              uVar29 = 0x1a;
              lVar20 = *(long *)PTR____stack_chk_guard_101444218;
              goto LAB_1010d5adc;
            }
            lVar20 = 0;
            lVar17 = *plVar27;
            do {
              uVar29 = 0x4000;
              if (lVar17 - lVar20 < 0x4001) {
                uVar29 = FUN_1010feefc();
              }
              lVar17 = (**(code **)(lVar21 + 0x2c8))
                                 (lVar21 + 0x908,1,uVar29,*(undefined8 *)(lVar21 + 0x248));
              lVar20 = lVar17 + lVar20;
              if (uVar29 <= lVar17 - 1U) {
                pcVar23 = "Could only read %ld bytes from the input";
                goto LAB_1010d5c24;
              }
              lVar17 = *plVar27;
            } while (lVar20 < lVar17);
          }
          lVar20 = *(long *)(lVar21 + 0x8ae8);
          if ((0 < lVar20) &&
             (lVar20 = lVar20 - *plVar27, *(long *)(lVar21 + 0x8ae8) = lVar20, lVar20 < 1)) {
            FUN_1010d9258(lVar21,"File already completely uploaded");
            uVar29 = 0x12;
            lVar20 = *(long *)PTR____stack_chk_guard_101444218;
            goto LAB_1010d5adc;
          }
        }
      }
    }
    if (*(char *)(lVar21 + 0x8ab9) != '\0') {
      if (((uVar16 & 0xfffffffb) == 1) && (lVar20 = FUN_1010d6790(param_1,"Range:"), lVar20 == 0)) {
        if (param_1[0x69] != 0) {
          (*(code *)PTR__free_101873628)();
        }
        lVar20 = FUN_1010e7298("Range: bytes=%s\r\n");
        param_1[0x69] = lVar20;
      }
      else if ((uVar16 != 1) && (lVar20 = FUN_1010d6790(param_1,"Content-Range:"), lVar20 == 0)) {
        if (param_1[0x69] != 0) {
          (*(code *)PTR__free_101873628)();
        }
        if (*(long *)(lVar21 + 0x3a8) < 0) {
          pcVar14 = "Content-Range: bytes 0-%ld/%ld\r\n";
        }
        else if (*(long *)(lVar21 + 0x8ac8) == 0) {
          pcVar14 = "Content-Range: bytes %s/%ld\r\n";
        }
        else {
          pcVar14 = "Content-Range: bytes %s%ld/%ld\r\n";
        }
        lVar20 = FUN_1010e7298(pcVar14);
        param_1[0x69] = lVar20;
        if (lVar20 == 0) goto LAB_1010d57e8;
      }
    }
    lVar17 = (*(code *)PTR__calloc_101873640)(1,0x18);
    if (lVar17 != 0) {
      uVar29 = FUN_1010d77b0(lVar17,"%s ");
      lVar20 = *(long *)PTR____stack_chk_guard_101444218;
      if ((int)uVar29 != 0) goto LAB_1010d5adc;
      if (bVar4) {
        uVar29 = FUN_1010d77b0(lVar17,"ftp://%s:%s@%s");
      }
      else {
        sVar8 = _strlen(pcVar23);
        uVar29 = FUN_1010d785c(lVar17,pcVar23,sVar8);
      }
      if ((int)uVar29 != 0) goto LAB_1010d5adc;
      if ((*(char *)((long)param_1 + 0x2cb) != '\0') && (*(char *)((long)param_1 + 0x2d5) == '\0'))
      {
        FUN_1010d67f8(param_1,"Proxy-Connection:");
      }
      uVar29 = FUN_1010d77b0(lVar17,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s");
      if (((*(ulong *)(lVar21 + 0x89f8) < 0x21) &&
          ((1L << (*(ulong *)(lVar21 + 0x89f8) & 0x3f) & 0x100000110U) != 0)) &&
         (param_1[0x68] != 0)) {
        (*(code *)PTR__free_101873628)();
        param_1[0x68] = 0;
      }
      if (((*(ulong *)(lVar21 + 0x8a18) < 0x21) &&
          ((1L << (*(ulong *)(lVar21 + 0x8a18) & 0x3f) & 0x100000110U) != 0)) &&
         (param_1[0x65] != 0)) {
        (*(code *)PTR__free_101873628)();
        param_1[0x65] = 0;
      }
      lVar20 = *(long *)PTR____stack_chk_guard_101444218;
      if ((int)uVar29 != 0) goto LAB_1010d5adc;
      if ((((*(byte *)(param_1[0x61] + 0x7c) & 1) == 0) && (*(int *)((long)param_1 + 0x1a4) != 0x14)
          ) && (*(long *)(lVar21 + 0x428) == 3)) goto LAB_1010d5ad8;
      if ((lVar7 != 0) || (*(long *)(lVar21 + 0x768) != 0)) {
        if (*(long *)(lVar21 + 0x768) == 0) {
          iVar6 = 0;
          uVar29 = 0;
        }
        else {
          FUN_1010f2820(lVar21,2,2);
          if (param_1[0x6c] != 0) {
            lVar22 = param_1[0x6c];
          }
          plVar15 = (long *)FUN_1010d4488(*(undefined8 *)(lVar21 + 0x768),lVar22,*puVar1,
                                          *(uint *)(param_1[0x61] + 0x78) >> 1 & 1);
          FUN_1010f2868(lVar21,2);
          iVar6 = 0;
          plVar27 = plVar15;
          if (plVar15 == (long *)0x0) {
            uVar29 = 0;
          }
          else {
            do {
              if (plVar27[2] != 0) {
                if ((iVar6 == 0) && (uVar29 = FUN_1010d77b0(lVar17,"Cookie: "), (int)uVar29 != 0)) {
                  iVar6 = 0;
                  goto LAB_1010d5c58;
                }
                uVar29 = FUN_1010d77b0(lVar17,"%s%s=%s");
                if ((int)uVar29 != 0) goto LAB_1010d5c58;
                iVar6 = iVar6 + 1;
              }
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
            uVar29 = 0;
LAB_1010d5c58:
            FUN_1010d48a8(plVar15,0);
          }
          lVar20 = *(long *)PTR____stack_chk_guard_101444218;
        }
        if ((lVar7 != 0) && ((int)uVar29 == 0)) {
          if ((iVar6 == 0) && (uVar29 = FUN_1010d77b0(lVar17,"Cookie: "), (int)uVar29 != 0))
          goto LAB_1010d5adc;
          uVar29 = FUN_1010d77b0(lVar17,"%s%s");
          iVar6 = iVar6 + 1;
        }
        if ((iVar6 != 0) && ((int)uVar29 == 0)) {
          uVar29 = FUN_1010d785c(lVar17,"\r\n",2);
        }
        if ((int)uVar29 != 0) goto LAB_1010d5adc;
      }
      if (((*(int *)(lVar21 + 0x410) != 0) &&
          (uVar29 = FUN_1010d7cdc(lVar21,lVar17), (int)uVar29 != 0)) ||
         (uVar29 = FUN_1010d7a70(param_1,0,lVar17), (int)uVar29 != 0)) goto LAB_1010d5adc;
      plVar27 = plVar30 + 2;
      *plVar27 = 0;
      FUN_1010d22f4(lVar21,0xffffffffffffffff);
      if (uVar16 == 2) {
        if (*(char *)((long)param_1 + 0x2d6) == '\0') {
          sVar8 = *(size_t *)(lVar21 + 0x2a0);
          if ((sVar8 != 0xffffffffffffffff) ||
             ((*(char **)(lVar21 + 0x290) != (char *)0x0 &&
              (sVar8 = _strlen(*(char **)(lVar21 + 0x290)), sVar8 != 0xffffffffffffffff))))
          goto LAB_1010d5eec;
          sVar8 = 0xffffffffffffffff;
        }
        else {
          sVar8 = 0;
LAB_1010d5eec:
          if (((*(char *)(lVar21 + 0x211) == '\0') &&
              (lVar22 = FUN_1010d6790(param_1,"Content-Length:"), lVar22 == 0)) &&
             (uVar29 = FUN_1010d77b0(lVar17,"Content-Length: %ld\r\n"), (int)uVar29 != 0))
          goto LAB_1010d5adc;
        }
        lVar22 = FUN_1010d6790(param_1,"Content-Type:");
        if ((lVar22 == 0) &&
           (uVar29 = FUN_1010d77b0(lVar17,"Content-Type: application/x-www-form-urlencoded\r\n"),
           (int)uVar29 != 0)) goto LAB_1010d5adc;
        lVar22 = FUN_1010d6790(param_1,"Expect:");
        if (lVar22 == 0) {
          if (sVar8 < 0x401) {
            *(undefined1 *)(lVar21 + 0x8a98) = 0;
          }
          else {
            uVar29 = FUN_1010d7df0(lVar21,param_1,lVar17);
            if ((int)uVar29 != 0) goto LAB_1010d5adc;
          }
        }
        else {
          uVar5 = FUN_1010d7970(lVar22,"Expect:","100-continue");
          *(undefined1 *)(lVar21 + 0x8a98) = uVar5;
        }
        lVar22 = *(long *)(lVar21 + 0x290);
        if (lVar22 == 0) {
          uVar29 = FUN_1010d785c(lVar17,"\r\n",2);
          if ((int)uVar29 != 0) goto LAB_1010d5adc;
          if ((*(char *)(lVar21 + 0x211) != '\0') && (*(char *)((long)param_1 + 0x2d6) != '\0')) {
            uVar29 = FUN_1010d785c(lVar17,"0\r\n\r\n",5);
            iVar6 = (int)uVar29;
            goto joined_r0x0001010d6218;
          }
          if (*(long *)(lVar21 + 0x2a0) != 0) {
            uVar29 = sVar8;
            if (sVar8 == 0) {
              uVar29 = 0xffffffffffffffff;
            }
            FUN_1010d22f4(lVar21,uVar29);
            if (*(char *)((long)param_1 + 0x2d6) == '\0') {
              uVar28 = 0;
              plVar30[1] = sVar8;
              plVar30[2] = (long)plVar27;
              goto LAB_1010d6224;
            }
          }
LAB_1010d6220:
          uVar28 = 0;
        }
        else {
          if (((*(int *)((long)param_1 + 0x1a4) == 0x14) || (0xffff < (long)sVar8)) ||
             (*(char *)(lVar21 + 0x8a98) != '\0')) {
            plVar30[1] = sVar8;
            plVar30[2] = lVar22;
            *(undefined4 *)(plVar30 + 0xf) = 2;
            param_1[0x77] = (long)FUN_1010d76f0;
            param_1[0x78] = (long)param_1;
            FUN_1010d22f4(lVar21,sVar8);
            uVar29 = FUN_1010d785c(lVar17,"\r\n",2);
            iVar6 = (int)uVar29;
joined_r0x0001010d6218:
            if (iVar6 != 0) goto LAB_1010d5adc;
            goto LAB_1010d6220;
          }
          uVar29 = FUN_1010d785c(lVar17,"\r\n",2);
          if ((int)uVar29 != 0) goto LAB_1010d5adc;
          if (*(char *)(lVar21 + 0x211) == '\0') {
            uVar29 = FUN_1010d785c(lVar17,*(undefined8 *)(lVar21 + 0x290),sVar8);
            uVar28 = sVar8;
          }
          else {
            uVar28 = 5;
            if (sVar8 != 0) {
              uVar29 = FUN_1010d77b0(lVar17,"%x\r\n");
              if ((((int)uVar29 != 0) ||
                  (uVar29 = FUN_1010d785c(lVar17,*(undefined8 *)(lVar21 + 0x290),sVar8),
                  (int)uVar29 != 0)) || (uVar29 = FUN_1010d785c(lVar17,"\r\n",2), (int)uVar29 != 0))
              goto LAB_1010d5adc;
              uVar28 = sVar8 + 7;
            }
            uVar29 = FUN_1010d785c(lVar17,"0\r\n\r\n",5);
          }
          if ((int)uVar29 != 0) goto LAB_1010d5adc;
          FUN_1010d22f4(lVar21,sVar8);
        }
LAB_1010d6224:
        uVar29 = FUN_1010d74ec(lVar17,param_1,lVar21 + 0x8b50,uVar28,0);
        if ((int)uVar29 != 0) {
          pcVar23 = "Failed sending HTTP POST request";
LAB_1010d6250:
          FUN_1010d9258(lVar21,pcVar23);
          goto LAB_1010d5adc;
        }
        bVar4 = *plVar27 == 0;
        bVar3 = bVar4;
LAB_1010d62a0:
        plVar30 = plVar19;
        if (bVar4) {
          plVar30 = (long *)0x0;
        }
        FUN_1010eb3d0(param_1,0,0xffffffffffffffff,1,plVar18,-(uint)bVar3,plVar30);
      }
      else {
        if (uVar16 == 4) {
          if (*(char *)((long)param_1 + 0x2d6) == '\0') {
            sVar8 = *(ulong *)(lVar21 + 0x8ae8);
            if (sVar8 != 0xffffffffffffffff) goto LAB_1010d5e68;
            sVar8 = 0xffffffffffffffff;
LAB_1010d5f30:
            uVar29 = FUN_1010d7df0(lVar21,param_1,lVar17);
            if ((int)uVar29 != 0) goto LAB_1010d5adc;
            bVar2 = true;
          }
          else {
            sVar8 = 0;
LAB_1010d5e68:
            if (((*(char *)(lVar21 + 0x211) == '\0') &&
                (lVar22 = FUN_1010d6790(param_1,"Content-Length:"), lVar22 == 0)) &&
               (uVar29 = FUN_1010d77b0(lVar17,"Content-Length: %ld\r\n"), (int)uVar29 != 0))
            goto LAB_1010d5adc;
            if (sVar8 != 0) goto LAB_1010d5f30;
            bVar2 = false;
            sVar8 = 0;
          }
          uVar29 = FUN_1010d785c(lVar17,"\r\n",2);
          if ((int)uVar29 != 0) goto LAB_1010d5adc;
          FUN_1010d22f4(lVar21,sVar8);
          uVar29 = FUN_1010d74ec(lVar17,param_1,lVar21 + 0x8b50,0,0);
          if ((int)uVar29 != 0) {
            pcVar23 = "Failed sending PUT request";
            goto LAB_1010d6250;
          }
          bVar4 = !bVar2;
          bVar3 = ~bVar2;
          goto LAB_1010d62a0;
        }
        plVar15 = plVar19;
        if (uVar16 != 3) {
          uVar29 = FUN_1010d785c(lVar17,"\r\n",2);
          if ((int)uVar29 != 0) goto LAB_1010d5adc;
          uVar29 = FUN_1010d74ec(lVar17,param_1,lVar21 + 0x8b50,0,0);
          if ((int)uVar29 == 0) {
            iVar6 = -(uint)(*plVar27 == 0);
            if (*plVar27 == 0) {
              plVar15 = (long *)0x0;
            }
            goto LAB_1010d62dc;
          }
          pcVar23 = "Failed sending HTTP request";
          goto LAB_1010d6250;
        }
        if ((*plVar30 == 0) || (*(char *)((long)param_1 + 0x2d6) != '\0')) {
          uVar29 = FUN_1010d77b0(lVar17,"Content-Length: 0\r\n\r\n");
          if ((int)uVar29 != 0) goto LAB_1010d5adc;
          uVar29 = FUN_1010d74ec(lVar17,param_1,lVar21 + 0x8b50,0,0);
          if ((int)uVar29 != 0) {
            pcVar23 = "Failed sending POST request";
            goto LAB_1010d6250;
          }
          iVar6 = -1;
          plVar15 = (long *)0x0;
        }
        else {
          plVar27 = plVar30 + 7;
          iVar6 = FUN_1010d2d40(plVar27);
          if (iVar6 != 0) {
            FUN_1010d9258(lVar21,"Internal HTTP POST error!");
            uVar29 = 0x22;
            goto LAB_1010d5adc;
          }
          plVar30[10] = param_1[0x77];
          param_1[0x77] = (long)FUN_1010d31b4;
          param_1[0x78] = (long)plVar27;
          *(undefined4 *)(plVar30 + 0xf) = 2;
          if ((((*(char *)(lVar21 + 0x211) == '\0') &&
               (lVar22 = FUN_1010d6790(param_1,"Content-Length:"), lVar22 == 0)) &&
              (uVar29 = FUN_1010d77b0(lVar17,"Content-Length: %ld\r\n"), (int)uVar29 != 0)) ||
             (uVar29 = FUN_1010d7df0(lVar21,param_1,lVar17), (int)uVar29 != 0)) goto LAB_1010d5adc;
          local_80 = 0;
          lVar22 = FUN_1010d329c(plVar27,&local_80);
          if (lVar22 == 0) {
            FUN_1010d9258(lVar21,"Could not get Content-Type header line!");
            uVar29 = 0x22;
            goto LAB_1010d5adc;
          }
          uVar29 = FUN_1010d785c(lVar17,lVar22,local_80);
          if (((int)uVar29 != 0) || (uVar29 = FUN_1010d785c(lVar17,"\r\n",2), (int)uVar29 != 0))
          goto LAB_1010d5adc;
          FUN_1010d22f4(lVar21,plVar30[1]);
          uVar29 = FUN_1010d74ec(lVar17,param_1,lVar21 + 0x8b50,0,0);
          if ((int)uVar29 != 0) {
            FUN_1010d9258(lVar21,"Failed sending POST request");
            FUN_1010d2774(plVar30);
            goto LAB_1010d5adc;
          }
          iVar6 = 0;
        }
LAB_1010d62dc:
        FUN_1010eb3d0(param_1,0,0xffffffffffffffff,1,plVar18,iVar6,plVar15);
        sVar8 = 0;
      }
      if (*plVar19 == 0) {
        uVar29 = 0;
      }
      else {
        FUN_1010d2468(lVar21);
        iVar6 = FUN_1010d1dac(param_1);
        uVar16 = 0;
        if (iVar6 != 0) {
          uVar16 = 0x2a;
        }
        uVar29 = (ulong)uVar16;
        if ((long)sVar8 <= *plVar19) {
          FUN_1010d909c(lVar21,"upload completely sent off: %ld out of %ld bytes\n");
          *(undefined1 *)(lVar21 + 0x1e8) = 1;
          *(uint *)(lVar21 + 0x1e4) = *(uint *)(lVar21 + 0x1e4) & 0xfffffffd;
          *(undefined4 *)(lVar21 + 0x140) = 0;
        }
      }
      goto LAB_1010d5adc;
    }
  }
  else {
    lVar20 = FUN_1010e7298("Referer: %s\r\n");
    param_1[0x6a] = lVar20;
    if (lVar20 != 0) goto LAB_1010d4f10;
  }
LAB_1010d57e8:
  uVar29 = 0x1b;
  lVar20 = *(long *)PTR____stack_chk_guard_101444218;
LAB_1010d5adc:
  if (lVar20 == local_68) {
    return uVar29;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1010d6540(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x218);
  FUN_1010f27f0();
  param_1[0x77] = *(long *)(lVar1 + 0x2c8);
  param_1[0x78] = *(long *)(lVar1 + 0x248);
  param_1[0x75] = *(long *)(lVar1 + 0x298);
  param_1[0x76] = *(long *)(lVar1 + 0x328);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x80);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)PTR__free_101873628)(*puVar3);
      (*(code *)PTR__free_101873628)(puVar3);
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
    if (*(int *)(lVar1 + 0x420) == 4) {
      *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
    }
    else if (*(int *)(lVar1 + 0x420) == 3) {
      *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
      FUN_1010d2774(lVar2);
      if (*(FILE **)(lVar2 + 0x48) != (FILE *)0x0) {
        _fclose(*(FILE **)(lVar2 + 0x48));
        *(undefined8 *)(lVar2 + 0x48) = 0;
      }
    }
    if ((int)param_2 != 0) {
      return param_2;
    }
    if ((param_3 & 1) != 0) {
      return param_2;
    }
    if (((*(char *)((long)param_1 + 0x2d4) == '\0') && (*(char *)(lVar1 + 0x521) == '\0')) &&
       (*(long *)(lVar1 + 0xa8) + *(long *)(lVar2 + 0x28) <= *(long *)(lVar1 + 0xb0))) {
      FUN_1010d9258(lVar1,"Empty reply from server");
      return 0x34;
    }
  }
  return 0;
}




undefined8 FUN_1010d666c(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  uVar1 = FUN_1010ff3c8();
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x658) == 1) {
      uVar1 = 0;
    }
    else if ((*(byte *)(*(long *)(param_1 + 0x310) + 0x7c) & 1) == 0) {
      *param_2 = 1;
      uVar1 = 0;
    }
    else {
      uVar2 = FUN_1011051a8(param_1,0,param_2);
      uVar1 = 0;
      if ((int)uVar2 != 0) {
        *(undefined1 *)(param_1 + 0x2c8) = 1;
        uVar1 = uVar2;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1010d66f0(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1d0);
  return 0x10000;
}




void FUN_1010d6700(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1011051a8((int)param_1,0,param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2c8) = 1;
  }
  return;
}




undefined8 FUN_1010d6738(long param_1,undefined4 *param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 != 0) && ((*(uint *)(*(long *)(param_1 + 0x308) + 0x7c) & 1) != 0)) {
    if (*(int *)(param_1 + 0x21c) != 2) {
      if (*(int *)(param_1 + 0x21c) == 3) {
        *param_2 = *(undefined4 *)(param_1 + 0x1d0);
        return 0x10000;
      }
      return 0;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x1d0);
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_1010d6790(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = _strlen(param_2);
  puVar3 = *(undefined8 **)(*param_1 + 0x3b0);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_1010f6624(*puVar3,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar3 = (undefined8 *)puVar3[1];
  }
  return *puVar3;
}




undefined8 FUN_1010d67f8(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  sVar2 = _strlen(param_2);
  lVar3 = *param_1;
  if ((*(char *)((long)param_1 + 0x2ca) == '\0') || (*(char *)(lVar3 + 0x3c8) == '\0')) {
    plVar4 = (long *)(lVar3 + 0x3b0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x3b8);
  }
  puVar5 = (undefined8 *)*plVar4;
  while( true ) {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_1010f6624(*puVar5,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar5 = (undefined8 *)puVar5[1];
  }
  return *puVar5;
}




void * FUN_1010d687c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  size_t sVar5;
  void *pvVar6;
  uint uVar7;
  byte *pbVar8;
  
  puVar3 = PTR___DefaultRuneLocale_101444130;
  pbVar8 = (byte *)(param_1 + -1);
  do {
    pbVar4 = pbVar8;
    pbVar8 = pbVar4 + 1;
    bVar1 = *pbVar8;
    if (bVar1 == 0x3a) break;
  } while (bVar1 != 0);
  if (bVar1 != 0) {
    pbVar8 = pbVar4 + 2;
  }
  uVar7 = (uint)*pbVar8;
  if (*pbVar8 != 0) {
    do {
      if ((char)(byte)uVar7 < '\0') {
        uVar7 = ___maskrune(uVar7,0x4000);
      }
      else {
        uVar7 = *(uint *)(puVar3 + (ulong)(byte)uVar7 * 4 + 0x3c) & 0x4000;
      }
      if (uVar7 == 0) break;
      pbVar8 = pbVar8 + 1;
      uVar7 = (uint)*pbVar8;
    } while (uVar7 != 0);
  }
  pbVar4 = (byte *)_strchr((char *)pbVar8,0xd);
  puVar3 = PTR___DefaultRuneLocale_101444130;
  if ((pbVar4 == (byte *)0x0) &&
     (pbVar4 = (byte *)_strchr((char *)pbVar8,10), puVar3 = PTR___DefaultRuneLocale_101444130,
     pbVar4 == (byte *)0x0)) {
    sVar5 = _strlen((char *)pbVar8);
    pbVar4 = pbVar8 + sVar5;
    puVar3 = PTR___DefaultRuneLocale_101444130;
    if (pbVar4 == (byte *)0x0) {
      return (void *)0x0;
    }
  }
  for (; puVar2 = PTR___DefaultRuneLocale_101444130, pbVar8 < pbVar4; pbVar4 = pbVar4 + -1) {
    bVar1 = *pbVar4;
    if ((char)bVar1 < '\0') {
      PTR___DefaultRuneLocale_101444130 = puVar3;
      uVar7 = ___maskrune((uint)bVar1,0x4000);
    }
    else {
      uVar7 = *(uint *)(PTR___DefaultRuneLocale_101444130 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
      PTR___DefaultRuneLocale_101444130 = puVar3;
    }
    puVar3 = PTR___DefaultRuneLocale_101444130;
    if (uVar7 == 0) break;
    PTR___DefaultRuneLocale_101444130 = puVar2;
  }
  PTR___DefaultRuneLocale_101444130 = puVar3;
  pvVar6 = (void *)(*(code *)PTR__malloc_101873620)(pbVar4 + (2 - (long)pbVar8));
  if (pvVar6 == (void *)0x0) {
    return (void *)0x0;
  }
  _memcpy(pvVar6,pbVar8,(size_t)(pbVar4 + (1 - (long)pbVar8)));
  *(byte *)((long)pvVar6 + (long)(pbVar4 + (1 - (long)pbVar8))) = 0;
  return pvVar6;
}




ulong FUN_1010d69c0(long *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  iVar3 = *(int *)(lVar7 + 0x128);
  if (iVar3 - 100U < 100) {
    return 0;
  }
  pcVar1 = (char *)(lVar7 + 0x8a30);
  if (*pcVar1 != '\0') {
    uVar6 = 0x16;
    if (*(char *)(lVar7 + 0x4f8) == '\0') {
      uVar6 = 0;
    }
    return (ulong)uVar6;
  }
  if ((*(char *)((long)param_1 + 0x2cc) == '\0') ||
     ((iVar3 != 0x191 && (299 < iVar3 || *(char *)((long)param_1 + 0x2d6) == '\0')))) {
LAB_1010d6a48:
    bVar2 = false;
  }
  else {
    uVar4 = FUN_1010d6b90(lVar7 + 0x89f0);
    bVar2 = true;
    if ((uVar4 & 1) == 0) {
      *pcVar1 = '\x01';
      goto LAB_1010d6a48;
    }
  }
  if ((*(char *)((long)param_1 + 0x2cd) == '\0') ||
     ((*(int *)(lVar7 + 0x128) != 0x197 &&
      (299 < *(int *)(lVar7 + 0x128) || *(char *)((long)param_1 + 0x2d6) == '\0')))) {
LAB_1010d6a88:
    if (!bVar2) {
      if ((((*(int *)(lVar7 + 0x128) < 300) && (*(char *)(lVar7 + 0x8a08) == '\0')) &&
          (*(char *)((long)param_1 + 0x2d6) != '\0')) && ((*(uint *)(lVar7 + 0x420) | 4) != 5)) {
        lVar5 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(lVar7 + 0x738));
        *(long *)(lVar7 + 0x1f8) = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        *(char *)(lVar7 + 0x8a08) = '\x01';
      }
      goto LAB_1010d6b44;
    }
  }
  else {
    uVar4 = FUN_1010d6b90(lVar7 + 0x8a10);
    if ((uVar4 & 1) == 0) {
      *pcVar1 = '\x01';
      goto LAB_1010d6a88;
    }
  }
  if (*(long *)(lVar7 + 0x1f8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(lVar7 + 0x1f8) = 0;
  }
  lVar5 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(lVar7 + 0x738));
  *(long *)(lVar7 + 0x1f8) = lVar5;
  if (lVar5 == 0) {
    return 0x1b;
  }
  if ((((*(uint *)(lVar7 + 0x420) | 4) != 5) && (*(char *)((long)param_1 + 0x2d7) == '\0')) &&
     (uVar4 = FUN_1010d6bfc(param_1), (int)uVar4 != 0)) {
    return uVar4;
  }
LAB_1010d6b44:
  iVar3 = FUN_1010d6da4(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_1010d9258(lVar7,"The requested URL returned error: %d");
  return 0x16;
}




undefined8 FUN_1010d6b90(ulong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = (uint)(*param_1 & param_1[2]);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 >> 5 & 1) == 0) {
          if ((*param_1 & param_1[2] & 1) == 0) {
            uVar2 = 0;
            param_1[1] = 0x40000000;
          }
          else {
            uVar2 = 1;
            param_1[1] = 1;
          }
          goto LAB_1010d6be4;
        }
        uVar3 = 0x20;
      }
      else {
        uVar3 = 8;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 4;
  }
  param_1[1] = uVar3;
  uVar2 = 1;
LAB_1010d6be4:
  param_1[2] = 0;
  return uVar2;
}




undefined8 FUN_1010d6bfc(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  size_t sVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  lVar7 = *(long *)(lVar8 + 0x218);
  if (lVar7 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar8 + 0x420);
  if ((uVar1 | 4) == 5) {
    return 0;
  }
  lVar9 = *(long *)(lVar7 + 0x30);
  cVar2 = *(char *)((long)param_1 + 0x2d6);
  if ((cVar2 == '\0') && (*(char *)((long)param_1 + 0x2d3) != '\0')) {
    if (uVar1 == 4) {
      sVar5 = *(size_t *)(lVar8 + 0x8ae8);
      goto LAB_1010d6c60;
    }
    if (uVar1 == 3) {
      sVar5 = *(size_t *)(lVar7 + 8);
      goto LAB_1010d6c60;
    }
    if (uVar1 == 2) {
      sVar5 = *(size_t *)(lVar8 + 0x2a0);
      if (sVar5 == 0xffffffffffffffff) {
        if (*(char **)(lVar8 + 0x290) == (char *)0x0) goto LAB_1010d6cac;
        sVar5 = _strlen(*(char **)(lVar8 + 0x290));
      }
      goto LAB_1010d6c60;
    }
LAB_1010d6cac:
    *(undefined1 *)((long)param_1 + 0x2d7) = 0;
    sVar5 = 0xffffffffffffffff;
  }
  else {
    sVar5 = 0;
LAB_1010d6c60:
    *(undefined1 *)((long)param_1 + 0x2d7) = 0;
    if ((sVar5 != 0xffffffffffffffff) && ((long)sVar5 <= lVar9)) goto LAB_1010d6d54;
  }
  if ((char)param_1[0x59] != '\0') {
    return 0;
  }
  if ((*(long *)(lVar8 + 0x8a18) == 8) || (*(long *)(lVar8 + 0x8a18) == 0x20)) {
    bVar4 = (int)param_1[0x7d] != 0;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    bVar4 = false;
  }
  if ((*(long *)(lVar8 + 0x89f8) == 8) || (*(long *)(lVar8 + 0x89f8) == 0x20)) {
    if (bVar4) goto LAB_1010d6d70;
    bVar4 = (int)param_1[0x79] != 0;
LAB_1010d6d24:
    if ((long)(sVar5 - lVar9) < 2000 || bVar4) {
LAB_1010d6d70:
      if (cVar2 != '\0') {
        return 0;
      }
      *(undefined1 *)((long)param_1 + 0x2d7) = 1;
      FUN_1010d909c(lVar8,"Rewind stream after send\n");
      return 0;
    }
    FUN_1010d909c(lVar8,"NTLM/Negotiate send, close instead of sending %ld bytes\n");
  }
  else if (bVar3) goto LAB_1010d6d24;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined8 *)(lVar8 + 0x78) = 0;
LAB_1010d6d54:
  if (lVar9 == 0) {
    return 0;
  }
  uVar6 = FUN_1010e9a6c(param_1);
  return uVar6;
}




undefined1 FUN_1010d6da4(long *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x128);
  if (iVar1 < 400 || *(char *)(lVar3 + 0x4f8) == '\0') {
    return 0;
  }
  if (iVar1 == 0x197) {
    cVar2 = *(char *)((long)param_1 + 0x2cd);
  }
  else {
    if (iVar1 != 0x191) {
      return 1;
    }
    cVar2 = *(char *)((long)param_1 + 0x2cc);
  }
  if (cVar2 == '\0') {
    return 1;
  }
  return *(undefined1 *)(lVar3 + 0x8a30);
}




undefined8 FUN_1010d6dfc(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  cVar1 = *(char *)((long)param_1 + 0x2cb);
  if (((cVar1 == '\0') || (*(char *)((long)param_1 + 0x2cd) == '\0')) &&
     (*(char *)((long)param_1 + 0x2cc) == '\0')) {
    *(undefined1 *)(lVar5 + 0x8a08) = 1;
    lVar4 = 0x8a28;
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x89f0);
    if ((lVar4 != 0) && (*(long *)(lVar5 + 0x89f8) == 0)) {
      *(long *)(lVar5 + 0x89f8) = lVar4;
    }
    lVar4 = *(long *)(lVar5 + 0x8a10);
    if ((lVar4 != 0) && (*(long *)(lVar5 + 0x8a18) == 0)) {
      *(long *)(lVar5 + 0x8a18) = lVar4;
    }
    if ((cVar1 == '\0') || (*(byte *)((long)param_1 + 0x2d5) != param_4)) {
      *(undefined1 *)(lVar5 + 0x8a28) = 1;
    }
    else {
      uVar3 = FUN_1010d6f50(param_1,(long *)(lVar5 + 0x8a10),param_2,param_3,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    if ((((*(char *)(lVar5 + 0x8918) == '\0') || (*(char *)((long)param_1 + 0x2da) != '\0')) ||
        (*(long *)(lVar5 + 0x8920) == 0)) ||
       ((*(char *)(lVar5 + 0x4fb) != '\0' ||
        (iVar2 = FUN_1010f659c(*(long *)(lVar5 + 0x8920),param_1[0x18]), iVar2 != 0)))) {
      uVar3 = FUN_1010d6f50(param_1,(long *)(lVar5 + 0x89f0),param_2,param_3,0);
      return uVar3;
    }
    lVar4 = 0x8a08;
  }
  *(undefined1 *)(lVar5 + lVar4) = 1;
  return 0;
}




undefined8
FUN_1010d6f50(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_60;
  undefined8 uStack_58;
  
  lVar7 = *param_1;
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 < 8) {
    if (lVar6 == 1) {
      if ((int)param_5 == 0) {
        if (*(char *)((long)param_1 + 0x2cc) != '\0') {
          lVar6 = FUN_1010d6790(param_1,"Authorization:");
          goto joined_r0x0001010d7058;
        }
      }
      else if (*(char *)((long)param_1 + 0x2cd) != '\0') {
        lVar6 = FUN_1010d67f8(param_1,"Proxy-authorization:");
joined_r0x0001010d7058:
        if (lVar6 == 0) {
          local_60 = 0;
          uStack_58 = 0;
          lVar6 = *param_1;
          plVar2 = param_1 + 0x68;
          if ((int)param_5 != 0) {
            plVar2 = param_1 + 0x65;
          }
          pcVar1 = (char *)(lVar6 + 0x908);
          FUN_1010e7270(pcVar1,0x4001,"%s:%s");
          sVar4 = _strlen(pcVar1);
          uVar5 = FUN_1010d10fc(lVar6,pcVar1,sVar4,&local_60,&uStack_58);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (local_60 == 0) {
            return 9;
          }
          if (*plVar2 != 0) {
            (*(code *)PTR__free_101873628)();
            *plVar2 = 0;
          }
          lVar6 = FUN_1010e7298("%sAuthorization: Basic %s\r\n");
          *plVar2 = lVar6;
          (*(code *)PTR__free_101873628)(local_60);
          if (*plVar2 == 0) {
            return 0x1b;
          }
          *(undefined1 *)(param_2 + 0x18) = 1;
          goto LAB_1010d701c;
        }
      }
      *(undefined1 *)(param_2 + 0x18) = 1;
    }
    else if (lVar6 == 2) {
      uVar5 = FUN_1010f2964(param_1,param_5);
      iVar3 = (int)uVar5;
      goto joined_r0x0001010d7010;
    }
LAB_1010d7064:
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  else {
    if (lVar6 == 0x20) {
      uVar5 = FUN_101100464(param_1,param_5);
      iVar3 = (int)uVar5;
    }
    else {
      if (lVar6 != 8) goto LAB_1010d7064;
      uVar5 = FUN_101100154(param_1,param_5);
      iVar3 = (int)uVar5;
    }
joined_r0x0001010d7010:
    if (iVar3 != 0) {
      return uVar5;
    }
LAB_1010d701c:
    FUN_1010d909c(lVar7,"%s auth using %s with user \'%s\'\n");
    *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x18) ^ 1;
  }
  return 0;
}




undefined8 FUN_1010d71d4(long *param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  puVar4 = PTR___DefaultRuneLocale_101444130;
  lVar8 = *param_1;
  lVar1 = lVar8 + 0x89f0;
  puVar3 = (ulong *)(lVar8 + 0x8b60);
  if ((int)param_2 != 0) {
    lVar1 = lVar8 + 0x8a10;
    puVar3 = (ulong *)(lVar8 + 0x8b58);
  }
  if (*param_3 != 0) {
    do {
      iVar5 = FUN_1010f6624("NTLM",param_3,4);
      if (iVar5 == 0) {
        iVar5 = FUN_1010f6624("Digest",param_3,6);
        if (iVar5 == 0) {
          iVar5 = FUN_1010f6624("Basic",param_3,5);
          if (iVar5 != 0) {
            *puVar3 = *puVar3 | 1;
            *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 1;
            if (*(long *)(lVar1 + 8) == 1) {
              *(undefined8 *)(lVar1 + 0x10) = 0;
              goto LAB_1010d73f8;
            }
          }
        }
        else if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
          *puVar3 = *puVar3 | 2;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
          iVar5 = FUN_1010f28b0(param_1,param_2,param_3);
          if (iVar5 != 0) {
LAB_1010d73f8:
            FUN_1010d909c(lVar8,"Authentication problem. Ignoring this.\n");
            *(undefined1 *)(lVar8 + 0x8a30) = 1;
          }
        }
        else {
          FUN_1010d909c(lVar8,"Ignoring duplicate digest auth header.\n");
        }
      }
      else {
        *puVar3 = *puVar3 | 8;
        *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 8;
        if ((*(long *)(lVar1 + 8) == 8) || (*(long *)(lVar1 + 8) == 0x20)) {
          iVar5 = FUN_1010ffff0(param_1,param_2,param_3);
          if (iVar5 != 0) goto LAB_1010d73f8;
          *(undefined1 *)(lVar8 + 0x8a30) = 0;
          if (*(long *)(lVar1 + 8) == 0x20) {
            *puVar3 = *puVar3 & 0xfffffffffffffff7;
            *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) & 0xfffffffffffffff7;
            *puVar3 = *puVar3 | 0x20;
            *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 0x20;
            uVar7 = (uint)*param_3;
            if (*param_3 != 0) {
              do {
                if ((char)(byte)uVar7 < '\0') {
                  uVar7 = ___maskrune(uVar7,0x4000);
                }
                else {
                  uVar7 = *(uint *)(puVar4 + (ulong)(byte)uVar7 * 4 + 0x3c) & 0x4000;
                }
                if (uVar7 == 0) break;
                param_3 = param_3 + 1;
                uVar7 = (uint)*param_3;
              } while (uVar7 != 0);
            }
            iVar5 = FUN_1010f6624("NTLM",param_3,4);
            if (iVar5 != 0) {
              param_3 = param_3 + 4;
              uVar7 = (uint)*param_3;
              if (*param_3 != 0) {
                do {
                  if ((char)(byte)uVar7 < '\0') {
                    uVar7 = ___maskrune(uVar7,0x4000);
                  }
                  else {
                    uVar7 = *(uint *)(puVar4 + (ulong)(byte)uVar7 * 4 + 0x3c) & 0x4000;
                  }
                  if (uVar7 == 0) {
                    if (*param_3 != 0) {
                      lVar6 = (*(code *)PTR__strdup_101873638)(param_3);
                      param_1[0x82] = lVar6;
                      if (lVar6 == 0) {
                        return 0x1b;
                      }
                    }
                    break;
                  }
                  param_3 = param_3 + 1;
                  uVar7 = (uint)*param_3;
                } while (uVar7 != 0);
              }
            }
          }
        }
      }
      for (; (bVar2 = *param_3, bVar2 != 0 && (bVar2 != 0x2c)); param_3 = param_3 + 1) {
      }
      if (bVar2 == 0x2c) {
        param_3 = param_3 + 1;
      }
      uVar7 = (uint)*param_3;
      if (*param_3 == 0) {
        return 0;
      }
      while( true ) {
        if ((char)(byte)uVar7 < '\0') {
          uVar7 = ___maskrune(uVar7,0x4000);
        }
        else {
          uVar7 = *(uint *)(puVar4 + (ulong)(byte)uVar7 * 4 + 0x3c) & 0x4000;
        }
        if (uVar7 == 0) break;
        param_3 = param_3 + 1;
        uVar7 = (uint)*param_3;
        if (uVar7 == 0) {
          return 0;
        }
      }
    } while (*param_3 != 0);
  }
  return 0;
}




void FUN_1010d74d4(void)

{
  (*(code *)PTR__calloc_101873640)(1,0x18);
  return;
}




undefined8 FUN_1010d74ec(long *param_1,long *param_2,long *param_3,long param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_68;
  
  lVar8 = *(long *)(*param_2 + 0x218);
  uVar2 = *(undefined4 *)((long)param_2 + (long)param_5 * 4 + 0x1d0);
  pvVar6 = (void *)*param_1;
  uVar9 = param_1[2];
  sVar7 = uVar9;
  if ((*(byte *)(param_2[0x61] + 0x7c) & 1) != 0) {
    sVar7 = 0x4000;
    if (uVar9 < 0x4001) {
      sVar7 = uVar9;
    }
    _memcpy((void *)(*param_2 + 0x4909),pvVar6,sVar7);
    pvVar6 = (void *)(*param_2 + 0x4909);
  }
  uVar4 = FUN_1010d942c(param_2,uVar2,pvVar6,sVar7,&local_68);
  uVar3 = local_68;
  if ((int)uVar4 != 0) goto LAB_1010d76a0;
  uVar10 = uVar9 - param_4;
  uVar1 = uVar10;
  if (local_68 <= uVar10) {
    uVar1 = local_68;
  }
  lVar5 = local_68 - uVar1;
  if (*(char *)(*param_2 + 0x508) == '\0') {
    if (local_68 <= uVar10) goto LAB_1010d7618;
LAB_1010d75f4:
    *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + lVar5;
    *param_3 = *param_3 + local_68;
  }
  else {
    FUN_1010d9130(*param_2,2,pvVar6,uVar1,param_2);
    if (uVar10 < uVar3) {
      FUN_1010d9130(*param_2,4,(long)pvVar6 + uVar1,lVar5,param_2);
      goto LAB_1010d75f4;
    }
LAB_1010d7618:
    *param_3 = *param_3 + local_68;
    if (lVar8 == 0) {
      if (uVar9 != local_68) {
        return 0x37;
      }
      *(undefined1 *)((long)param_2 + 0x379) = 0;
      goto LAB_1010d76a0;
    }
  }
  if (uVar9 != local_68) {
    lVar5 = *param_1;
    *(long *)(lVar8 + 0x58) = param_2[0x77];
    *(long *)(lVar8 + 0x60) = param_2[0x78];
    *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar8 + 8);
    param_2[0x77] = (long)FUN_1010d76f0;
    param_2[0x78] = (long)param_2;
    *(ulong *)(lVar8 + 8) = uVar9 - local_68;
    *(ulong *)(lVar8 + 0x10) = lVar5 + local_68;
    *(long **)(lVar8 + 0x80) = param_1;
    *(undefined4 *)(lVar8 + 0x78) = 1;
    return 0;
  }
  *(undefined4 *)(lVar8 + 0x78) = 2;
LAB_1010d76a0:
  if (*param_1 != 0) {
    (*(code *)PTR__free_101873628)();
  }
  (*(code *)PTR__free_101873628)(param_1);
  return uVar4;
}




size_t FUN_1010d76f0(void *param_1,long param_2,long param_3,long *param_4)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_4 + 0x218);
  sVar1 = *(size_t *)(lVar3 + 8);
  if (sVar1 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = param_3 * param_2;
    *(bool *)(*param_4 + 0x213) = *(int *)(lVar3 + 0x78) == 1;
    if ((long)sVar2 < (long)sVar1) {
      _memcpy(param_1,*(void **)(lVar3 + 0x10),sVar2);
      *(size_t *)(lVar3 + 8) = *(long *)(lVar3 + 8) - sVar2;
      *(size_t *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + sVar2;
    }
    else {
      _memcpy(param_1,*(void **)(lVar3 + 0x10),sVar1);
      sVar2 = *(size_t *)(lVar3 + 8);
      if (*(long *)(lVar3 + 0x70) == 0) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      else {
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 0x70);
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x68);
        param_4[0x77] = *(long *)(lVar3 + 0x58);
        param_4[0x78] = *(long *)(lVar3 + 0x60);
        *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
        *(undefined8 *)(lVar3 + 0x70) = 0;
      }
    }
  }
  return sVar2;
}




undefined8 FUN_1010d77b0(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)FUN_1010e7408(param_2,&stack0x00000000);
  if (pcVar1 == (char *)0x0) {
    if (*param_1 != 0) {
      (*(code *)PTR__free_101873628)();
    }
    (*(code *)PTR__free_101873628)(param_1);
    uVar3 = 0x1b;
  }
  else {
    sVar2 = _strlen(pcVar1);
    uVar3 = FUN_1010d785c(param_1,pcVar1,sVar2);
    (*(code *)PTR__free_101873628)(pcVar1);
  }
  return uVar3;
}




undefined8 FUN_1010d785c(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1[2];
  lVar3 = *param_1;
  if (~param_3 < uVar5) {
LAB_1010d7930:
    if (lVar3 != 0) {
      (*(code *)PTR__free_101873628)();
      *param_1 = 0;
    }
    (*(code *)PTR__free_101873628)(param_1);
    uVar4 = 0x1b;
  }
  else {
    if ((lVar3 == 0) || (param_1[1] - 1U < uVar5 + param_3)) {
      uVar6 = param_3 << 1 ^ 0xffffffffffffffff;
      lVar1 = -1;
      if (uVar5 * 2 < uVar6 || uVar5 * 2 - uVar6 == 0) {
        lVar1 = (uVar5 + param_3) * 2;
      }
      lVar2 = -1;
      if (((uVar5 | param_3) & 0x8000000000000000) == 0) {
        lVar2 = lVar1;
      }
      if (lVar3 == 0) {
        lVar3 = (*(code *)PTR__malloc_101873620)(lVar2);
      }
      else {
        lVar3 = (*(code *)PTR__realloc_101873630)(lVar3,lVar2);
      }
      if (lVar3 == 0) {
        lVar3 = *param_1;
        goto LAB_1010d7930;
      }
      *param_1 = lVar3;
      param_1[1] = lVar2;
      uVar5 = param_1[2];
    }
    _memcpy((void *)(lVar3 + uVar5),param_2,param_3);
    uVar4 = 0;
    param_1[2] = param_1[2] + param_3;
  }
  return uVar4;
}




undefined8 FUN_1010d7970(long param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  sVar3 = _strlen(param_2);
  iVar2 = FUN_1010f6624(param_1,param_2,sVar3);
  puVar1 = PTR___DefaultRuneLocale_101444130;
  if (iVar2 != 0) {
    pbVar6 = (byte *)(param_1 + sVar3);
    uVar5 = (uint)*pbVar6;
    if (*pbVar6 != 0) {
      do {
        if ((char)(byte)uVar5 < '\0') {
          uVar5 = ___maskrune(uVar5,0x4000);
        }
        else {
          uVar5 = *(uint *)(puVar1 + (ulong)(byte)uVar5 * 4 + 0x3c) & 0x4000;
        }
        if (uVar5 == 0) break;
        pbVar6 = pbVar6 + 1;
        uVar5 = (uint)*pbVar6;
      } while (uVar5 != 0);
    }
    pbVar4 = (byte *)_strchr((char *)pbVar6,0xd);
    if ((pbVar4 == (byte *)0x0) &&
       (pbVar4 = (byte *)_strchr((char *)pbVar6,10), pbVar4 == (byte *)0x0)) {
      sVar3 = _strlen((char *)pbVar6);
      pbVar4 = pbVar6 + sVar3;
    }
    sVar3 = _strlen(param_3);
    for (uVar7 = (long)pbVar4 - (long)pbVar6; sVar3 <= uVar7; uVar7 = uVar7 - 1) {
      iVar2 = FUN_1010f6624(pbVar6,param_3,sVar3);
      if (iVar2 != 0) {
        return 1;
      }
      pbVar6 = pbVar6 + 1;
    }
  }
  return 0;
}




void FUN_1010d7a70(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long local_78 [3];
  
  puVar3 = PTR___DefaultRuneLocale_101444130;
  local_78[2] = *(long *)PTR____stack_chk_guard_101444218;
  lVar12 = *param_1;
  if ((param_2 & 1) == 0) {
    if ((*(char *)((long)param_1 + 0x2cb) != '\0') && (*(char *)((long)param_1 + 0x2d5) != '\x01'))
    {
      local_78[0] = *(long *)(lVar12 + 0x3b0);
      lVar11 = 1;
      if (*(char *)(lVar12 + 0x3c8) != '\0') {
        local_78[1] = *(undefined8 *)(lVar12 + 0x3b8);
        lVar11 = 2;
      }
      goto LAB_1010d7b10;
    }
LAB_1010d7b04:
    local_78[0] = *(long *)(lVar12 + 0x3b0);
  }
  else {
    if (*(char *)(lVar12 + 0x3c8) == '\0') goto LAB_1010d7b04;
    local_78[0] = *(long *)(lVar12 + 0x3b8);
  }
  lVar11 = 1;
LAB_1010d7b10:
  lVar8 = 0;
  do {
    for (puVar9 = (undefined8 *)local_78[lVar8]; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)puVar9[1]) {
      pcVar10 = (char *)*puVar9;
      pbVar6 = (byte *)_strchr(pcVar10,0x3a);
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = (byte *)_strchr(pcVar10,0x3b);
        if (pbVar6 != (byte *)0x0) {
          do {
            pbVar2 = pbVar6;
            pbVar6 = pbVar2 + 1;
            bVar1 = *pbVar6;
            if ((ulong)bVar1 == 0) goto LAB_1010d7c5c;
            if ((char)bVar1 < '\0') {
              uVar4 = ___maskrune((uint)bVar1,0x4000);
            }
            else {
              uVar4 = *(uint *)(puVar3 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
            }
          } while (uVar4 != 0);
          if (*pbVar6 == 0) {
LAB_1010d7c5c:
            if (*pbVar2 == 0x3b) {
              *pbVar2 = 0x3a;
              goto LAB_1010d7c70;
            }
          }
        }
      }
      else {
        do {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
          if ((ulong)bVar1 == 0) goto LAB_1010d7c88;
          if ((char)bVar1 < '\0') {
            uVar4 = ___maskrune((uint)bVar1,0x4000);
          }
          else {
            uVar4 = *(uint *)(puVar3 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
          }
        } while (uVar4 != 0);
        if ((((*pbVar6 != 0) &&
             ((param_1[0x6b] == 0 || (iVar5 = FUN_1010f6624("Host:",*puVar9,5), iVar5 == 0)))) &&
            ((*(int *)(lVar12 + 0x420) != 3 ||
             (iVar5 = FUN_1010f6624("Content-Type:",*puVar9,0xd), iVar5 == 0)))) &&
           (((*(char *)((long)param_1 + 0x2d6) == '\0' ||
             (iVar5 = FUN_1010f6624("Content-Length",*puVar9,0xe), iVar5 == 0)) &&
            ((param_1[0x6e] == 0 || (iVar5 = FUN_1010f6624("Connection",*puVar9,10), iVar5 == 0)))))
           ) {
LAB_1010d7c70:
          uVar7 = FUN_1010d77b0(param_3,"%s\r\n");
          if ((int)uVar7 != 0) goto LAB_1010d7ca0;
        }
      }
LAB_1010d7c88:
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < lVar11);
  uVar7 = 0;
LAB_1010d7ca0:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
}




undefined8 FUN_1010d7cdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_68 [56];
  
  uVar1 = FUN_1010f36dc(*(undefined8 *)(param_1 + 0x418),local_68);
  if ((int)uVar1 == 0) {
    FUN_1010e7270(param_1 + 0x908,0x3fff,"%s, %02d %s %4d %02d:%02d:%02d GMT");
    if (*(int *)(param_1 + 0x410) == 2) {
      pcVar2 = "If-Unmodified-Since: %s\r\n";
    }
    else if (*(int *)(param_1 + 0x410) == 3) {
      pcVar2 = "Last-Modified: %s\r\n";
    }
    else {
      pcVar2 = "If-Modified-Since: %s\r\n";
    }
    uVar1 = FUN_1010d77b0(param_2,pcVar2);
  }
  else {
    FUN_1010d9258(param_1,"Invalid TIMEVALUE");
  }
  return uVar1;
}




undefined8 FUN_1010d7df0(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x8a98) = 0;
  if ((1 < *(long *)(param_1 + 0x428)) ||
     (((*(long *)(param_1 + 0x428) != 1 && (*(int *)(param_2 + 0x1a4) != 10)) &&
      ((*(int *)(param_2 + 0x1a4) == 0xb || (*(int *)(param_1 + 0x8a94) != 10)))))) {
    lVar2 = FUN_1010d6790(param_2,"Expect:");
    if (lVar2 == 0) {
      uVar3 = FUN_1010d77b0(param_3,"Expect: 100-continue\r\n");
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1010d7970(lVar2,"Expect:","100-continue");
    }
    *(undefined1 *)(param_1 + 0x8a98) = uVar1;
  }
  return 0;
}




undefined8 FUN_1010d7eac(long param_1,long param_2,size_t *param_3,char *param_4)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  undefined8 uVar14;
  ulong uVar15;
  char *pcVar16;
  undefined4 uVar17;
  long lVar18;
  char cVar19;
  char *pcVar20;
  undefined1 *puVar21;
  long lVar22;
  byte *pbVar23;
  size_t sVar24;
  time_t local_70;
  int local_68;
  int local_64;
  
  plVar1 = (long *)(param_1 + 0x78);
  piVar2 = (int *)(param_1 + 0x128);
  piVar3 = (int *)(param_2 + 0x1a4);
  plVar5 = (long *)(param_1 + 0x8ac8);
  plVar6 = (long *)(param_1 + 0x8b70);
  plVar7 = (long *)(param_1 + 0x8b48);
  pcVar20 = *(char **)(param_1 + 0xf8);
  do {
    *(char **)(param_1 + 0x100) = pcVar20;
    sVar24 = *param_3;
    pvVar13 = _memchr(pcVar20,10,sVar24);
    *(void **)(param_1 + 0x108) = pvVar13;
    if (pvVar13 == (void *)0x0) {
      uVar14 = FUN_1010d8edc(param_1,plVar1,sVar24);
      if ((int)uVar14 != 0) {
        return uVar14;
      }
      if (*(int *)(param_1 + 0xe0) != 0) {
        return 0;
      }
      if (*(ulong *)(param_1 + 0xf0) < 6) {
        return 0;
      }
      uVar15 = FUN_1010d8fdc(param_1,param_2,*(undefined8 *)(param_1 + 0x8f8));
      if ((uVar15 & 1) != 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xdc) = 2;
      return 0;
    }
    sVar4 = (long)pvVar13 + (1 - (long)pcVar20);
    *param_3 = sVar24 - sVar4;
    *(long *)(param_1 + 0xf8) = (long)pvVar13 + 1;
    uVar14 = FUN_1010d8edc(param_1,plVar1,((long)pvVar13 + 1) - (long)pcVar20);
    if ((int)uVar14 != 0) {
      return uVar14;
    }
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xe8);
    pcVar20 = *(char **)(param_1 + 0x8f8);
    *(char **)(param_1 + 0x110) = pcVar20;
    if ((*(int *)(param_1 + 0xe0) == 0) && (5 < *(ulong *)(param_1 + 0xf0))) {
      iVar10 = FUN_1010d8fdc(param_1,param_2);
      if (iVar10 == 0) {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if (*param_3 != 0) {
          *(undefined4 *)(param_1 + 0xdc) = 1;
          return 0;
        }
        *(undefined4 *)(param_1 + 0xdc) = 2;
        *param_3 = sVar4;
        return 0;
      }
      pcVar20 = *(char **)(param_1 + 0x110);
    }
    if (*pcVar20 == '\n') {
LAB_1010d7ff4:
      if (*pcVar20 == '\n') {
        *(char **)(param_1 + 0x110) = pcVar20 + 1;
      }
      iVar10 = *piVar2;
      if (iVar10 - 100U < 100) {
        *(undefined1 *)(param_1 + 0xd8) = 1;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (iVar10 == 0x65) {
          if (*(int *)(param_1 + 0x144) == 1) {
            FUN_1010d909c(param_1,"Received 101\n");
            *(undefined4 *)(param_1 + 0x144) = 2;
            return 1;
          }
        }
        else if ((iVar10 == 100) && (*(int *)(param_1 + 0x140) != 0)) {
          *(undefined4 *)(param_1 + 0x140) = 0;
          *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if (((((*(long *)(param_1 + 0x78) == -1) && (*(char *)(param_1 + 0x210) == '\0')) &&
             (*(char *)(param_2 + 0x2c8) == '\0')) &&
            ((*piVar3 == 0xb && ((*(byte *)(*(long *)(param_2 + 0x308) + 0x7a) >> 2 & 1) == 0)))) &&
           (*(int *)(param_1 + 0x420) != 5)) {
          FUN_1010d909c(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          *(undefined1 *)(param_2 + 0x2c8) = 1;
        }
      }
      iVar10 = FUN_1010d6da4(param_2);
      if (iVar10 != 0) {
LAB_1010d8cfc:
        FUN_1010d9258(param_1,"The requested URL returned error: %d");
        return 0x16;
      }
      uVar17 = 2;
      if (*(char *)(param_1 + 0x4fc) != '\0') {
        uVar17 = 3;
      }
      lVar22 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x8f8);
      uVar14 = FUN_1010d98ec(param_2,uVar17,*(long *)(param_1 + 0x8f8),lVar22);
      if ((int)uVar14 != 0) {
        return uVar14;
      }
      *plVar7 = *plVar7 + lVar22;
      lVar18 = *(long *)(param_1 + 0xa8) + lVar22;
      *(long *)(param_1 + 0xa8) = lVar18;
      if (99 < *(int *)(param_1 + 0x128) - 100U) {
        lVar18 = 0;
      }
      *(long *)(param_1 + 0xb0) = lVar18;
      if (*param_4 == '\0') {
        uVar14 = FUN_1010d69c0(param_2);
        if ((int)uVar14 != 0) {
          return uVar14;
        }
        if (((*piVar2 < 300) || (*(char *)(param_2 + 0x2d6) != '\0')) ||
           (*(char *)(param_2 + 0x2c8) != '\0')) {
LAB_1010d824c:
          if (*(char *)(param_2 + 0x2d7) == '\0') goto LAB_1010d8270;
        }
        else if (*(char *)(param_2 + 0x2d7) == '\0') {
          if ((*(int *)(param_1 + 0x420) - 2U < 3) && (*(char *)(param_1 + 0x1e8) == '\0')) {
            FUN_1010d909c(param_1,"HTTP error before end of send, stop sending\n");
            *(undefined1 *)(param_2 + 0x2c8) = 1;
            *(undefined1 *)(param_1 + 0x1e8) = 1;
            *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffd;
            if (*(char *)(param_1 + 0x8a98) != '\0') {
              *(undefined4 *)(param_1 + 0x140) = 3;
            }
          }
          goto LAB_1010d824c;
        }
        FUN_1010d909c(param_1,"Keep sending data to get tossed away!\n");
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
      }
LAB_1010d8270:
      if (*(char *)(param_1 + 0xd8) == '\0') {
        if (*(char *)(param_1 + 0x4ff) == '\0') {
          if (*(char *)(param_1 + 0x210) != '\0') {
            *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
          }
        }
        else {
          *param_4 = '\x01';
        }
        if (*plVar1 == -1) {
          lVar18 = *(long *)(param_1 + 0x88);
        }
        else {
          FUN_1010d22cc(param_1);
          lVar18 = *(long *)(param_1 + 0x78);
          *(long *)(param_1 + 0x88) = lVar18;
        }
        if (lVar18 == 0) {
          *param_4 = '\x01';
        }
        else if (*param_4 == '\0') goto LAB_1010d8d84;
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
LAB_1010d8d84:
        if (*(char *)(param_1 + 0x508) != '\0') {
          FUN_1010d9130(param_1,1,*(undefined8 *)(param_1 + 0x100),lVar22,param_2);
        }
        return 0;
      }
    }
    else {
      if (*pcVar20 == '\r') {
        pcVar20 = pcVar20 + 1;
        *(char **)(param_1 + 0x110) = pcVar20;
        goto LAB_1010d7ff4;
      }
      iVar10 = *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe0) = iVar10 + 1;
      if (iVar10 == 0) {
        uVar12 = *(uint *)(*(long *)(param_2 + 0x308) + 0x78);
        if ((uVar12 & 3) == 0) {
          if (((uVar12 >> 0x12 & 1) == 0) ||
             (iVar10 = _sscanf(pcVar20," RTSP/%d.%d %3d"), iVar10 != 3)) {
LAB_1010d8e10:
            *(undefined1 *)(param_1 + 0xd8) = 0;
            return 0;
          }
          *(int *)(param_2 + 0x1a8) = *(int *)(param_2 + 0x1a8) + local_68 * 10;
          iVar10 = 0xb;
LAB_1010d8318:
          *piVar3 = iVar10;
        }
        else {
          iVar10 = _sscanf(pcVar20," HTTP/%d.%d %d");
          if (iVar10 == 3) {
            iVar10 = *piVar3 + local_64 * 10;
            *piVar3 = iVar10;
            if ((*(int *)(param_1 + 0x144) == 2) && (iVar10 != 0x14)) {
              FUN_1010d909c(param_1,"Lying server, not serving HTTP/2\n");
              iVar10 = *piVar3;
            }
          }
          else {
            iVar11 = _sscanf(*(char **)(param_1 + 0x110)," HTTP %3d");
            iVar10 = 10;
            *piVar3 = 10;
            if (iVar11 == 0) {
              iVar10 = FUN_1010d9024(param_1,*(undefined8 *)(param_1 + 0x110));
              if (iVar10 == 0) goto LAB_1010d8e10;
              *piVar2 = 200;
              iVar10 = 10;
              goto LAB_1010d8318;
            }
          }
        }
        iVar11 = *piVar2;
        *(int *)(param_1 + 0x8b28) = iVar11;
        *(int *)(param_1 + 0x8b30) = iVar10;
        iVar8 = *(int *)(param_1 + 0x8a94);
        if ((iVar8 == 0) || (iVar10 < iVar8)) {
          *(int *)(param_1 + 0x8a94) = iVar10;
        }
        if ((*(char *)(param_1 + 0x4f8) != '\0') && (399 < iVar11)) {
          if (iVar11 == 0x197) {
            cVar19 = *(char *)(param_2 + 0x2cd);
joined_r0x0001010d837c:
            if (cVar19 != '\0') goto LAB_1010d83a0;
          }
          else if (iVar11 == 0x191) {
            cVar19 = *(char *)(param_2 + 0x2cc);
            goto joined_r0x0001010d837c;
          }
          if (((*plVar5 == 0) || (*(int *)(param_1 + 0x420) != 1)) || (iVar11 != 0x1a0)) {
            pcVar20 = *(char **)(param_1 + 0x110);
            iVar10 = _strncmp(pcVar20,"HTTP",4);
            if (((iVar10 == 0) && (pcVar20 = _strchr(pcVar20,0x20), pcVar20 != (char *)0x0)) &&
               (pcVar20 = pcVar20 + 1, *pcVar20 != '\0')) {
              cVar19 = '\r';
              pcVar16 = _strchr(pcVar20,0xd);
              if (pcVar16 == (char *)0x0) {
                cVar19 = '\n';
                pcVar16 = _strchr(pcVar20,10);
                if (pcVar16 == (char *)0x0) goto LAB_1010d8cfc;
              }
              *pcVar16 = '\0';
              FUN_1010d9258(param_1,"The requested URL returned error: %s");
              *pcVar16 = cVar19;
              return 0x16;
            }
            goto LAB_1010d8cfc;
          }
        }
LAB_1010d83a0:
        if (iVar10 != 0x14) {
          if (iVar10 == 10) {
            FUN_1010d909c(param_1,"HTTP 1.0, assume close after body\n");
            *(undefined1 *)(param_2 + 0x2c8) = 1;
          }
          else {
            if ((*(int *)(param_1 + 0x144) == 1) && (iVar11 == 0x65)) goto LAB_1010d844c;
            if ((10 < iVar10) &&
               (((*(char *)(param_2 + 0x2c8) == '\0' &&
                 (puVar21 = *(undefined1 **)(param_2 + 0x660), puVar21 != (undefined1 *)0x0)) &&
                (uVar15 = FUN_101103794(param_1,param_2), (uVar15 & 1) == 0)))) {
              *puVar21 = 1;
            }
          }
        }
        if ((*piVar2 != 0xcc) && (*piVar2 != 0x130)) goto LAB_1010d844c;
        if (*(int *)(param_1 + 0x410) != 0) {
          *(undefined1 *)(param_1 + 0x8b40) = 1;
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined1 *)(param_1 + 0x1ea) = 1;
LAB_1010d84b8:
        iVar10 = FUN_1010f6624("Content-Type:",*(undefined8 *)(param_1 + 0x110),0xd);
        if (iVar10 == 0) {
          iVar10 = FUN_1010f6624("Server:",*(undefined8 *)(param_1 + 0x110),7);
          if (iVar10 == 0) {
            iVar10 = *piVar3;
            if (iVar10 == 10) {
              if (*(char *)(param_2 + 0x2cb) != '\0') {
                uVar15 = FUN_1010d7970(*(undefined8 *)(param_1 + 0x110),"Proxy-Connection:",
                                       "keep-alive");
                if ((uVar15 & 1) != 0) {
                  *(undefined1 *)(param_2 + 0x2c8) = 0;
                  FUN_1010d909c(param_1,"HTTP/1.0 proxy connection set to keep alive!\n");
                  goto LAB_1010d8584;
                }
                iVar10 = *piVar3;
                goto LAB_1010d8680;
              }
LAB_1010d86dc:
              iVar10 = FUN_1010d7970(*(undefined8 *)(param_1 + 0x110),"Connection:","keep-alive");
              if (iVar10 != 0) {
                *(undefined1 *)(param_2 + 0x2c8) = 0;
                FUN_1010d909c(param_1,"HTTP/1.0 connection set to keep alive!\n");
                goto LAB_1010d8584;
              }
            }
            else {
LAB_1010d8680:
              if (iVar10 == 0xb) {
                if (*(char *)(param_2 + 0x2cb) != '\0') {
                  uVar15 = FUN_1010d7970(*(undefined8 *)(param_1 + 0x110),"Proxy-Connection:",
                                         "close");
                  if ((uVar15 & 1) != 0) {
                    *(undefined1 *)(param_2 + 0x2c8) = 1;
                    FUN_1010d909c(param_1,"HTTP/1.1 proxy connection set close!\n");
                    goto LAB_1010d8584;
                  }
                  iVar10 = *piVar3;
                  goto LAB_1010d86d4;
                }
              }
              else {
LAB_1010d86d4:
                if (iVar10 == 10) goto LAB_1010d86dc;
              }
            }
            iVar10 = FUN_1010d7970(*(undefined8 *)(param_1 + 0x110),"Connection:","close");
            if (iVar10 == 0) {
              iVar10 = FUN_1010f6624("Transfer-Encoding:",*(undefined8 *)(param_1 + 0x110),0x12);
              if (iVar10 == 0) {
                iVar10 = FUN_1010f6624("Content-Encoding:",*(long *)(param_1 + 0x110),0x11);
                if ((iVar10 == 0) || ((*(long *)(param_1 + 0x580) == 0 && (*piVar3 != 0x14)))) {
                  iVar10 = FUN_1010f6624("Content-Range:",*(undefined8 *)(param_1 + 0x110),0xe);
                  if (iVar10 == 0) {
                    if ((*(long *)(param_1 + 0x768) == 0) ||
                       (iVar10 = FUN_1010f6624("Set-Cookie:",*(undefined8 *)(param_1 + 0x110),0xb),
                       iVar10 == 0)) {
                      iVar10 = FUN_1010f6624("Last-Modified:",*(undefined8 *)(param_1 + 0x110),0xe);
                      if ((iVar10 == 0) ||
                         ((*(int *)(param_1 + 0x410) == 0 && (*(char *)(param_1 + 0x4f1) == '\0'))))
                      {
                        iVar10 = FUN_1010f6624("WWW-Authenticate:",*(undefined8 *)(param_1 + 0x110),
                                               0x11);
                        if ((iVar10 == 0) || (*piVar2 != 0x191)) {
                          iVar10 = FUN_1010f6624("Proxy-authenticate:",
                                                 *(undefined8 *)(param_1 + 0x110),0x13);
                          if ((iVar10 != 0) && (*(int *)(param_1 + 0x128) == 0x197)) {
                            iVar10 = 0x197;
                            goto LAB_1010d8b58;
                          }
                          if (((*(int *)(param_1 + 0x128) - 300U < 100) &&
                              (iVar10 = FUN_1010f6624("Location:",*(undefined8 *)(param_1 + 0x110),9
                                                     ), iVar10 != 0)) &&
                             (*(long *)(param_1 + 0x1f0) == 0)) {
                            pcVar20 = (char *)FUN_1010d687c(*(undefined8 *)(param_1 + 0x110));
                            if (pcVar20 == (char *)0x0) {
                              return 0x1b;
                            }
                            if (*pcVar20 == '\0') {
                              (*(code *)PTR__free_101873628)();
                            }
                            else {
                              *(char **)(param_1 + 0x1f0) = pcVar20;
                              if (*(char *)(param_1 + 0x4f9) != '\0') {
                                lVar22 = (*(code *)PTR__strdup_101873638)();
                                *(long *)(param_1 + 0x1f8) = lVar22;
                                if (lVar22 == 0) {
                                  return 0x1b;
                                }
                                uVar14 = FUN_1010d6bfc(param_2);
                                goto LAB_1010d8be0;
                              }
                            }
                            goto LAB_1010d8584;
                          }
                          if ((*(byte *)(*(long *)(param_2 + 0x308) + 0x7a) >> 2 & 1) == 0)
                          goto LAB_1010d8584;
                          uVar14 = FUN_1010fec94(param_2,*(undefined8 *)(param_1 + 0x110));
LAB_1010d8be0:
                          iVar10 = (int)uVar14;
                        }
                        else {
                          iVar10 = 0x191;
LAB_1010d8b58:
                          lVar22 = FUN_1010d687c(*(undefined8 *)(param_1 + 0x110));
                          if (lVar22 == 0) {
                            return 0x1b;
                          }
                          uVar14 = FUN_1010d71d4(param_2,iVar10 == 0x197,lVar22);
                          (*(code *)PTR__free_101873628)(lVar22);
                          iVar10 = (int)uVar14;
                        }
                        if (iVar10 != 0) {
                          return uVar14;
                        }
                      }
                      else {
                        local_70 = _time((time_t *)0x0);
                        uVar14 = FUN_1010f2fb4(*(long *)(param_1 + 0x110) + 0xe,&local_70);
                        *(undefined8 *)(param_1 + 0x1c0) = uVar14;
                        if (*(char *)(param_1 + 0x4f1) != '\0') {
                          *(undefined8 *)(param_1 + 0x8b38) = uVar14;
                        }
                      }
                    }
                    else {
                      FUN_1010f2820(param_1,2,2);
                      lVar22 = *(long *)(param_2 + 0x360);
                      if (lVar22 == 0) {
                        lVar22 = *(long *)(param_2 + 0xc0);
                      }
                      FUN_1010d3564(param_1,*(undefined8 *)(param_1 + 0x768),1,
                                    *(long *)(param_1 + 0x110) + 0xb,lVar22,
                                    *(undefined8 *)(param_1 + 0x8ab0));
                      FUN_1010f2868(param_1,2);
                    }
                  }
                  else {
                    pbVar23 = (byte *)(*(long *)(param_1 + 0x110) + 0xe);
                    uVar12 = (uint)*pbVar23;
                    if (*pbVar23 != 0) {
                      do {
                        if (uVar12 == 0x2a || uVar12 - 0x30 < 10) goto LAB_1010d8994;
                        pbVar23 = pbVar23 + 1;
                        uVar12 = (uint)*pbVar23;
                      } while (uVar12 != 0);
                    }
                    uVar12 = 0;
LAB_1010d8994:
                    if (uVar12 - 0x30 < 10) {
                      lVar22 = _strtol((char *)pbVar23,(char **)0x0,10);
                      *(long *)(param_1 + 0x120) = lVar22;
                      if (*plVar5 == lVar22) {
                        *(undefined1 *)(param_1 + 0x118) = 1;
                      }
                    }
                    else {
                      *plVar5 = 0;
                    }
                  }
                }
                else {
                  pbVar23 = (byte *)(*(long *)(param_1 + 0x110) + 0x11);
                  uVar12 = (uint)*pbVar23;
                  if (*pbVar23 != 0) {
                    do {
                      if ((char)(byte)uVar12 < '\0') {
                        uVar12 = ___maskrune(uVar12,0x4000);
                      }
                      else {
                        uVar12 = *(uint *)(PTR___DefaultRuneLocale_101444130 +
                                          (ulong)(byte)uVar12 * 4 + 0x3c) & 0x4000;
                      }
                      if (uVar12 == 0) break;
                      pbVar23 = pbVar23 + 1;
                      uVar12 = (uint)*pbVar23;
                    } while (uVar12 != 0);
                  }
                  iVar10 = FUN_1010f6624("identity",pbVar23,8);
                  if (iVar10 == 0) {
                    iVar10 = FUN_1010f6624("deflate",pbVar23,7);
                    if (iVar10 == 0) {
                      iVar10 = FUN_1010f6624("gzip",pbVar23,4);
                      if ((iVar10 == 0) && (iVar10 = FUN_1010f6624("x-gzip",pbVar23,6), iVar10 == 0)
                         ) {
                        iVar10 = FUN_1010f6624("compress",pbVar23,8);
                        if ((iVar10 != 0) ||
                           (iVar10 = FUN_1010f6624("x-compress",pbVar23,10), iVar10 != 0)) {
                          *(undefined4 *)(param_1 + 0x148) = 3;
                        }
                      }
                      else {
                        *(undefined4 *)(param_1 + 0x148) = 2;
                      }
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x148) = 1;
                    }
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x148) = 0;
                  }
                }
              }
              else {
                pbVar23 = (byte *)(*(long *)(param_1 + 0x110) + 0x12);
LAB_1010d8760:
                while( true ) {
                  bVar9 = *pbVar23;
                  if ((ulong)bVar9 == 0) break;
                  if ((char)bVar9 < '\0') {
                    uVar12 = ___maskrune((uint)bVar9,0x4000);
                  }
                  else {
                    uVar12 = *(uint *)(PTR___DefaultRuneLocale_101444130 + (ulong)bVar9 * 4 + 0x3c)
                             & 0x4000;
                  }
                  if ((uVar12 == 0) && (*pbVar23 != 0x2c)) break;
                  pbVar23 = pbVar23 + 1;
                }
                iVar10 = FUN_1010f6624("chunked",pbVar23,7);
                if (iVar10 != 0) {
                  *(undefined1 *)(param_1 + 0x210) = 1;
                  FUN_1010ed6a8(param_2);
                  pbVar23 = pbVar23 + 7;
                }
                if (*(int *)(param_1 + 0x148) == 0) {
                  iVar10 = FUN_1010f6624("identity",pbVar23,8);
                  if (iVar10 == 0) {
                    iVar10 = FUN_1010f6624("deflate",pbVar23,7);
                    if (iVar10 == 0) {
                      iVar10 = FUN_1010f6624("gzip",pbVar23,4);
                      if (iVar10 == 0) {
                        iVar10 = FUN_1010f6624("x-gzip",pbVar23,6);
                        if (iVar10 == 0) {
                          iVar10 = FUN_1010f6624("compress",pbVar23,8);
                          if (iVar10 == 0) {
                            iVar10 = FUN_1010f6624("x-compress",pbVar23,10);
                            if (iVar10 == 0) goto LAB_1010d8584;
                            *(undefined4 *)(param_1 + 0x148) = 3;
                            pbVar23 = pbVar23 + 10;
                          }
                          else {
                            *(undefined4 *)(param_1 + 0x148) = 3;
                            pbVar23 = pbVar23 + 8;
                          }
                        }
                        else {
                          *(undefined4 *)(param_1 + 0x148) = 2;
                          pbVar23 = pbVar23 + 6;
                        }
                      }
                      else {
                        *(undefined4 *)(param_1 + 0x148) = 2;
                        pbVar23 = pbVar23 + 4;
                      }
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x148) = 1;
                      pbVar23 = pbVar23 + 7;
                    }
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x148) = 0;
                    pbVar23 = pbVar23 + 8;
                  }
                  goto LAB_1010d8760;
                }
              }
            }
            else {
              *(undefined1 *)(param_2 + 0x2c8) = 1;
            }
          }
          else {
            pcVar20 = (char *)FUN_1010d687c(*(undefined8 *)(param_1 + 0x110));
            if (((*(char **)(param_2 + 0x660) != (char *)0x0) &&
                (**(char **)(param_2 + 0x660) != '\0')) &&
               (iVar10 = FUN_1011039d8(param_1,pcVar20), iVar10 != 0)) {
              **(undefined1 **)(param_2 + 0x660) = 0;
            }
            if (pcVar20 != (char *)0x0) goto LAB_1010d8570;
          }
        }
        else {
          pcVar20 = (char *)FUN_1010d687c(*(undefined8 *)(param_1 + 0x110));
          if (pcVar20 == (char *)0x0) {
            return 0x1b;
          }
          if (*pcVar20 == '\0') {
LAB_1010d8570:
            (*(code *)PTR__free_101873628)(pcVar20);
          }
          else {
            if (*plVar6 != 0) {
              (*(code *)PTR__free_101873628)();
              *plVar6 = 0;
            }
            *plVar6 = (long)pcVar20;
          }
        }
      }
      else {
LAB_1010d844c:
        if (((*(char *)(param_1 + 0x1ea) != '\0') || (*(char *)(param_1 + 0x51f) != '\0')) ||
           (iVar10 = FUN_1010f6624("Content-Length:",*(undefined8 *)(param_1 + 0x110),0xf),
           iVar10 == 0)) goto LAB_1010d84b8;
        lVar22 = _strtol((char *)(*(long *)(param_1 + 0x110) + 0xf),(char **)0x0,10);
        if ((*(long *)(param_1 + 0x4d0) != 0) && (*(long *)(param_1 + 0x4d0) < lVar22)) {
          FUN_1010d9258(param_1,"Maximum file size exceeded");
          return 0x3f;
        }
        if (lVar22 < 0) {
          *(undefined1 *)(param_2 + 0x2c8) = 1;
          FUN_1010d909c(param_1,"Negative content-length: %ld, closing after transfer\n");
        }
        else {
          *(long *)(param_1 + 0x78) = lVar22;
          *(long *)(param_1 + 0x88) = lVar22;
          FUN_1010d22cc(param_1,lVar22);
        }
      }
LAB_1010d8584:
      uVar17 = 2;
      if (*(char *)(param_1 + 0x4fc) != '\0') {
        uVar17 = 3;
      }
      if (*(char *)(param_1 + 0x508) != '\0') {
        FUN_1010d9130(param_1,1,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xf0),
                      param_2);
      }
      uVar14 = FUN_1010d98ec(param_2,uVar17,*(undefined8 *)(param_1 + 0x110),
                             *(undefined8 *)(param_1 + 0xf0));
      if ((int)uVar14 != 0) {
        return uVar14;
      }
      *plVar7 = *plVar7 + *(long *)(param_1 + 0xf0);
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xf0);
    }
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x8f8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (*param_4 != '\0') {
      return 0;
    }
    pcVar20 = *(char **)(param_1 + 0xf8);
    if (*pcVar20 == '\0') {
      return 0;
    }
  } while( true );
}




undefined8 FUN_1010d8edc(long param_1,long param_2,size_t param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar6 = *(long *)(param_2 + 0x78) + param_3;
  uVar5 = *(ulong *)(param_1 + 0x900);
  if (uVar6 < uVar5) {
    pvVar1 = *(void **)(param_2 + 0x70);
LAB_1010d8f88:
    _memcpy(pvVar1,*(void **)(param_2 + 0x88),param_3);
    uVar3 = 0;
    lVar2 = *(long *)(param_2 + 0x70);
    *(size_t *)(param_2 + 0x70) = lVar2 + param_3;
    *(size_t *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + param_3;
    *(undefined1 *)(lVar2 + param_3) = 0;
  }
  else {
    if (uVar6 < 0x19001) {
      uVar6 = uVar6 * 3 >> 1;
      if (uVar6 <= uVar5 * 2) {
        uVar6 = uVar5 << 1;
      }
      lVar8 = *(long *)(param_2 + 0x70);
      lVar7 = *(long *)(param_1 + 0x8f8);
      lVar2 = (*(code *)PTR__realloc_101873630)(lVar7,uVar6);
      if (lVar2 != 0) {
        *(ulong *)(param_1 + 0x900) = uVar6;
        *(long *)(param_1 + 0x8f8) = lVar2;
        pvVar1 = (void *)(lVar2 + (lVar8 - lVar7));
        *(void **)(param_2 + 0x70) = pvVar1;
        goto LAB_1010d8f88;
      }
      pcVar4 = "Failed to alloc memory for big header!";
    }
    else {
      pcVar4 = "Avoided giant realloc for header (max is %d)!";
    }
    FUN_1010d9258(param_1,pcVar4);
    uVar3 = 0x1b;
  }
  return uVar3;
}




ulong FUN_1010d8fdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(byte *)(*(long *)(param_2 + 0x308) + 0x7a) >> 2 & 1) == 0) {
    uVar2 = FUN_1010d9024(param_1,param_3);
  }
  else {
    iVar1 = FUN_1010f6624("RTSP/",param_3,5);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}




bool FUN_1010d9024(long param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x4c0);
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      iVar1 = FUN_1010f6624("HTTP/",param_2,5);
      return iVar1 != 0;
    }
    pcVar3 = (char *)*puVar4;
    sVar2 = _strlen(pcVar3);
    iVar1 = FUN_1010f6624(pcVar3,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar4 = (undefined8 *)puVar4[1];
  }
  return true;
}




void FUN_1010d909c(long param_1,undefined8 param_2)

{
  size_t sVar1;
  long lVar2;
  char acStack_839 [2049];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar2;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x508) != '\0')) {
    FUN_1010e60fc(acStack_839,0x801,param_2,&stack0x00000000);
    sVar1 = _strlen(acStack_839);
    FUN_1010d9c24(param_1,0,acStack_839,sVar1);
  }
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010d9130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char acStack_e8 [160];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar3;
  if (((param_5 == 0) || (*(char *)(param_1 + 0x4f0) == '\0')) || (*(long *)(param_5 + 200) == 0))
  goto switchD_1010d91a8_default;
  switch((int)param_2) {
  case 1:
    break;
  case 2:
  case 4:
    break;
  case 3:
    break;
  default:
    goto switchD_1010d91a8_default;
  }
  FUN_1010e7270(acStack_e8,0xa0,"[%s %s %s]");
  sVar2 = _strlen(acStack_e8);
  iVar1 = FUN_1010d9c24(param_1,0,acStack_e8,sVar2);
  if (iVar1 == 0) {
switchD_1010d91a8_default:
    FUN_1010d9c24(param_1,param_2,param_3,param_4);
  }
  if (lVar3 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1010d9258(long param_1,undefined8 param_2)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)(param_1 + 0x908);
  FUN_1010e60fc(pcVar1,0x4000,param_2,&stack0x00000000);
  if (*(long *)(param_1 + 0x230) != 0) {
    if (*(char *)(param_1 + 0x8958) == '\0') {
      FUN_1010e7270(*(long *)(param_1 + 0x230),0x100,"%s");
      *(char *)(param_1 + 0x8958) = '\x01';
    }
  }
  if (*(char *)(param_1 + 0x508) != '\0') {
    sVar2 = _strlen(pcVar1);
    if (sVar2 < 0x3fff) {
      *(undefined2 *)(param_1 + sVar2 + 0x908) = 10;
      sVar2 = sVar2 + 1;
    }
    FUN_1010d9c24(param_1,0,pcVar1,sVar2);
  }
  return;
}




undefined8 FUN_1010d9320(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long local_58;
  
  lVar6 = *param_2;
  pcVar3 = (char *)FUN_1010e7408(param_3,&stack0x00000000);
  if (pcVar3 == (char *)0x0) {
    uVar5 = 0x1b;
  }
  else {
    local_58 = 0;
    sVar4 = _strlen(pcVar3);
    uVar5 = FUN_1010d942c(param_2,param_1,pcVar3,sVar4,&local_58);
    iVar7 = (int)uVar5;
    pcVar1 = pcVar3;
    lVar2 = local_58;
    while (local_58 = lVar2, iVar7 == 0) {
      if (*(char *)(lVar6 + 0x508) != '\0') {
        FUN_1010d9130(lVar6,4,pcVar1,lVar2,param_2);
      }
      sVar4 = sVar4 - lVar2;
      if (sVar4 == 0) {
        uVar5 = 0;
        break;
      }
      pcVar1 = pcVar1 + lVar2;
      uVar5 = FUN_1010d942c(param_2,param_1,pcVar1,sVar4,&local_58);
      lVar2 = local_58;
      iVar7 = (int)uVar5;
    }
    (*(code *)PTR__free_101873628)(pcVar3);
  }
  return uVar5;
}




ssize_t FUN_1010d94a0(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long lVar4;
  
  sVar2 = _send(*(int *)((long)param_1 + (long)param_2 * 4 + 0x1d0),param_3,param_4,0);
  *param_5 = 0;
  if (sVar2 == -1) {
    piVar3 = ___error();
    iVar1 = *piVar3;
    if ((iVar1 == 4) || (iVar1 == 0x23)) {
      sVar2 = 0;
      *param_5 = 0x51;
    }
    else {
      lVar4 = *param_1;
      FUN_1010f2ce0(param_1,iVar1);
      FUN_1010d9258(lVar4,"Send failure: %s");
      *(int *)(*param_1 + 0x895c) = iVar1;
      *param_5 = 0x37;
      sVar2 = -1;
    }
  }
  return sVar2;
}




undefined4
FUN_1010d955c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  uVar1 = FUN_1010d94a0(param_1,*(int *)(param_1 + 0x1d4) == param_2,param_3,param_4,&local_24);
  *param_5 = uVar1;
  return local_24;
}




ssize_t FUN_1010d959c(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 uVar4;
  long lVar5;
  
  sVar2 = _recv(*(int *)((long)param_1 + (long)param_2 * 4 + 0x1d0),param_3,param_4,0);
  *param_5 = 0;
  if (sVar2 == -1) {
    piVar3 = ___error();
    iVar1 = *piVar3;
    if ((iVar1 == 4) || (iVar1 == 0x23)) {
      uVar4 = 0x51;
    }
    else {
      lVar5 = *param_1;
      FUN_1010f2ce0(param_1,iVar1);
      FUN_1010d9258(lVar5,"Recv failure: %s");
      *(int *)(*param_1 + 0x895c) = iVar1;
      uVar4 = 0x38;
    }
    *param_5 = uVar4;
  }
  return sVar2;
}




undefined8 FUN_1010d965c(long *param_1,ulong param_2,void *param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  
  if (param_4 == 0) {
    return 0;
  }
  lVar8 = *param_1;
  if ((*(byte *)(lVar8 + 0x1e4) >> 4 & 1) != 0) {
    if (*(uint *)(lVar8 + 0x8948) != (uint)param_2) {
      return 0x38;
    }
    plVar1 = (long *)(lVar8 + 0x8940);
    lVar7 = *plVar1;
    lVar3 = (*(code *)PTR__realloc_101873630)(*(long *)(lVar8 + 0x8938),lVar7 + param_4);
    if (lVar3 == 0) {
      return 0x1b;
    }
    _memcpy((void *)(lVar3 + *plVar1),param_3,param_4);
    *(long *)(lVar8 + 0x8938) = lVar3;
    *plVar1 = lVar7 + param_4;
    return 0;
  }
  if ((param_2 & 1) == 0) {
    pcVar9 = (code *)0x0;
  }
  else {
    pcVar9 = *(code **)(lVar8 + 0x2b0);
  }
  if (((uint)param_2 >> 1 & 1) != 0) {
    pcVar10 = *(code **)(lVar8 + 0x2b8);
    if (pcVar10 != (code *)0x0) goto LAB_1010d9744;
    if (*(long *)(lVar8 + 0x250) != 0) {
      pcVar10 = *(code **)(lVar8 + 0x2b0);
      goto LAB_1010d9744;
    }
  }
  pcVar10 = (code *)0x0;
LAB_1010d9744:
  do {
    uVar2 = 0x4000;
    if (param_4 < 0x4001) {
      uVar2 = param_4;
    }
    if (pcVar9 != (code *)0x0) {
      uVar4 = (*pcVar9)(param_3,1,uVar2,*(undefined8 *)(lVar8 + 0x240));
      if (uVar4 == 0x10000001) {
        if ((*(byte *)(param_1[0x61] + 0x7c) >> 4 & 1) != 0) {
          pcVar6 = "Write callback asked for PAUSE when not supported!";
          goto LAB_1010d982c;
        }
        goto LAB_1010d97f0;
      }
      if (uVar4 != uVar2) {
        pcVar6 = "Failed writing body (%zu != %zu)";
        goto LAB_1010d982c;
      }
    }
    if (pcVar10 != (code *)0x0) {
      uVar4 = (*pcVar10)(param_3,1,uVar2,*(undefined8 *)(lVar8 + 0x250));
      if (uVar4 == 0x10000001) {
        param_2 = 2;
LAB_1010d97f0:
        uVar5 = FUN_1010d9858(lVar8,param_2,param_3,param_4);
        return uVar5;
      }
      if (uVar4 != uVar2) {
        pcVar6 = "Failed writing header";
LAB_1010d982c:
        FUN_1010d9258(lVar8,pcVar6);
        return 0x17;
      }
    }
    param_3 = (void *)((long)param_3 + uVar2);
    param_4 = param_4 - uVar2;
    if (param_4 == 0) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_1010d9858(long param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = (void *)(*(code *)PTR__malloc_101873620)(param_4);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0x1b;
  }
  else {
    _memcpy(pvVar1,param_3,param_4);
    uVar2 = 0;
    *(void **)(param_1 + 0x8938) = pvVar1;
    *(size_t *)(param_1 + 0x8940) = param_4;
    *(undefined4 *)(param_1 + 0x8948) = param_2;
    *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 0x10;
  }
  return uVar2;
}




void FUN_1010d98ec(long *param_1,ulong param_2,char *param_3,size_t param_4)

{
  char *pcVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (param_4 == 0) {
    param_4 = _strlen(param_3);
  }
  if ((((param_2 & 1) != 0) && ((*(byte *)(param_1[0x61] + 0x78) & 0xc) != 0)) &&
     (((char)param_1[0xba] == 'A' && param_3 != (char *)0x0) && param_4 != 0)) {
    pcVar1 = (char *)(lVar5 + 0x8a9a);
    if (*pcVar1 != '\0') {
      if (*param_3 == '\n') {
        param_4 = param_4 - 1;
        _memmove(param_3,param_3 + 1,param_4);
        *(long *)(lVar5 + 0x8aa0) = *(long *)(lVar5 + 0x8aa0) + 1;
      }
      *pcVar1 = '\0';
    }
    psVar3 = _memchr(param_3,0xd,param_4);
    if (psVar3 != (short *)0x0) {
      psVar2 = (short *)(param_3 + param_4);
      psVar4 = psVar3;
      if (psVar3 < (short *)((long)psVar2 + -1)) {
        do {
          if (*psVar4 == 0xa0d) {
            psVar4 = (short *)((long)psVar4 + 1);
            *(char *)psVar3 = *(char *)psVar4;
            *(long *)(lVar5 + 0x8aa0) = *(long *)(lVar5 + 0x8aa0) + 1;
          }
          else if ((char)*psVar4 == '\r') {
            *(char *)psVar3 = '\n';
          }
          else {
            *(char *)psVar3 = (char)*psVar4;
          }
          psVar3 = (short *)((long)psVar3 + 1);
          psVar4 = (short *)((long)psVar4 + 1);
        } while (psVar4 < (short *)((long)psVar2 + -1));
      }
      if (psVar4 < psVar2) {
        if ((char)*psVar4 == '\r') {
          *(char *)psVar3 = '\n';
          *pcVar1 = '\x01';
        }
        else {
          *(char *)psVar3 = (char)*psVar4;
        }
        psVar3 = (short *)((long)psVar3 + 1);
      }
      if (psVar3 < psVar2) {
        *(char *)psVar3 = '\0';
      }
      param_4 = (long)psVar3 - (long)param_3;
    }
  }
  FUN_1010d965c(param_1,param_2,param_3,param_4);
  return;
}




undefined8 FUN_1010d9a7c(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined8 uVar2;
  int *piVar3;
  
  sVar1 = _recv(param_1,param_2,param_3,0);
  if (sVar1 == -1) {
    piVar3 = ___error();
    uVar2 = 0x51;
    if ((*piVar3 != 4) && (*piVar3 != 0x23)) {
      uVar2 = 0x38;
    }
  }
  else {
    uVar2 = 0;
    *param_4 = sVar1;
  }
  return uVar2;
}




undefined4 FUN_1010d9ad8(long *param_1,int param_2,void *param_3,ulong param_4,size_t *param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  undefined4 local_54;
  
  local_54 = 0x38;
  iVar3 = FUN_1010f0394(*(undefined8 *)(*param_1 + 0x60));
  iVar2 = *(int *)((long)param_1 + 0x1d4);
  *param_5 = 0;
  if (iVar3 == 0) {
    uVar1 = 0x4000;
    if (*(ulong *)(*param_1 + 0x4b0) != 0) {
      uVar1 = *(ulong *)(*param_1 + 0x4b0);
    }
    pvVar4 = param_3;
    if ((long)uVar1 <= (long)param_4) {
      param_4 = uVar1;
    }
  }
  else {
    sVar5 = param_1[0x74] - param_1[0x73];
    if (param_4 <= sVar5) {
      sVar5 = param_4;
    }
    if (sVar5 != 0) {
      _memcpy(param_3,(void *)(param_1[0x72] + param_1[0x73]),sVar5);
      param_1[0x73] = param_1[0x73] + sVar5;
      *(undefined1 *)((long)param_1 + 0x2dd) = 0;
      *param_5 = sVar5;
      return 0;
    }
    if (0x3fff < param_4) {
      param_4 = 0x4000;
    }
    pvVar4 = (void *)param_1[0x72];
  }
  sVar5 = (*(code *)param_1[(ulong)(iVar2 == param_2) + 0x3d])
                    (param_1,iVar2 == param_2,pvVar4,param_4,&local_54);
  if (-1 < (long)sVar5) {
    if (iVar3 != 0) {
      _memcpy(param_3,(void *)param_1[0x72],sVar5);
      param_1[0x74] = sVar5;
      param_1[0x73] = sVar5;
    }
    local_54 = 0;
    *param_5 = *param_5 + sVar5;
  }
  return local_54;
}




undefined8 FUN_1010d9c24(long param_1,ulong param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x2e8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010d9c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x2e8))
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x228));
    return uVar1;
  }
  if ((uint)param_2 < 3) {
    _fwrite(&UNK_1013cd280 + (param_2 & 0xffffffff) * 2 + (param_2 & 0xffffffff),2,1,
            *(FILE **)(param_1 + 0x220));
    _fwrite(param_3,param_4,1,*(FILE **)(param_1 + 0x220));
  }
  return 0;
}




undefined8 FUN_1010d9cc0(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if ((*(char *)((long)param_1 + 0x2cb) != '\0') && (*(char *)(lVar7 + 0x4f2) == '\0')) {
    ppuVar1 = &PTR_s_FTP_10182ee60;
    if ((undefined **)param_1[0x61] != &PTR_s_FTP_10182ed60) {
      ppuVar1 = &PTR_s_FTPS_10182eee0;
    }
    param_1[0x61] = (long)ppuVar1;
    uVar6 = (*(code *)ppuVar1[1])(param_1);
    return uVar6;
  }
  plVar3 = (long *)(*(code *)PTR__malloc_101873620)(0x28);
  *(long **)(*param_1 + 0x218) = plVar3;
  if (plVar3 == (long *)0x0) {
    uVar6 = 0x1b;
  }
  else {
    pcVar4 = (char *)(*(long *)(lVar7 + 0x8ab0) + 1);
    *(char **)(lVar7 + 0x8ab0) = pcVar4;
    *(undefined1 *)(lVar7 + 0x8ab8) = 1;
    pcVar4 = _strstr(pcVar4,";type=");
    if ((pcVar4 != (char *)0x0) ||
       (pcVar4 = _strstr((char *)param_1[0x16],";type="), pcVar4 != (char *)0x0)) {
      *pcVar4 = '\0';
      iVar2 = FUN_1010f6448((long)pcVar4[6]);
      *(undefined1 *)(param_1 + 0x5c) = 1;
      if (iVar2 == 0x44) {
        *(undefined1 *)(lVar7 + 0x4f5) = 1;
      }
      else if (iVar2 == 0x41) {
        *(undefined1 *)(lVar7 + 0x4f3) = 1;
      }
      else {
        *(undefined1 *)(lVar7 + 0x4f3) = 0;
      }
    }
    *plVar3 = *param_1 + 0x98;
    *(undefined4 *)(plVar3 + 3) = 0;
    plVar3[4] = 0;
    plVar3[1] = param_1[0x2e];
    lVar7 = param_1[0x2f];
    plVar3[2] = lVar7;
    uVar5 = FUN_1010de638();
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_1010de638(lVar7), (uVar5 & 1) == 0)) {
      uVar6 = 0;
      param_1[0xbf] = -1;
    }
    else {
      uVar6 = 3;
    }
  }
  return uVar6;
}




undefined8 FUN_1010d9e2c(long *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  *param_2 = '\0';
  *(undefined1 *)((long)param_1 + 0x5c4) = 0;
  lVar13 = *param_1;
  if (*(char *)(lVar13 + 0x6d8) != '\0') {
    do {
      iVar3 = 2;
      piVar1 = (int *)(lVar13 + 0x8af0);
      switch(*piVar1) {
      case 0:
        goto switchD_1010d9ea4_caseD_0;
      case 1:
        puVar8 = *(undefined8 **)(lVar13 + 0x8b10);
        *(undefined8 *)(lVar13 + 0x2b0) = puVar8[1];
        *(undefined8 *)(lVar13 + 0x240) = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *piVar1 = 2;
        iVar3 = FUN_1010ec498(*puVar8);
        if (iVar3 != 0) {
          iVar3 = 3;
          goto LAB_1010d9fdc;
        }
        if (*(long *)(*(long *)(lVar13 + 0x8b08) + 0x18) == 0) {
          *piVar1 = 3;
          uVar11 = 0x4e;
          goto LAB_1010da318;
        }
        break;
      case 2:
        plVar7 = (long *)(lVar13 + 0x8b08);
        lVar12 = **(long **)*plVar7;
        lVar4 = FUN_1010e7298("%s%s");
        if (lVar4 == 0) {
          uVar11 = 0x1b;
          goto LAB_1010da318;
        }
        lVar5 = *param_1;
        if (*(long *)(lVar5 + 0x8aa8) != 0) {
          (*(code *)PTR__free_101873628)(*(long *)(lVar5 + 0x8aa8));
          lVar5 = *param_1;
          *(undefined8 *)(lVar5 + 0x8aa8) = 0;
        }
        *(long *)(lVar5 + 0x8aa8) = lVar4;
        *(long *)(lVar5 + 0x8ab0) = lVar4;
        FUN_1010d909c(lVar5,"Wildcard - START of \"%s\"\n");
        if (*(code **)(*param_1 + 0x6e0) == (code *)0x0) {
LAB_1010d9fe4:
          if (*(int *)(lVar12 + 8) == 0) {
            if ((*(byte *)(lVar12 + 0x60) >> 6 & 1) != 0) {
              param_1[0xbf] = *(long *)(lVar12 + 0x28);
            }
            uVar11 = FUN_1010de1c0(param_1);
            if ((int)uVar11 != 0) goto LAB_1010da318;
            FUN_1010ef040((undefined8 *)*plVar7,*(undefined8 *)*plVar7,0);
            if (*(long *)(*plVar7 + 0x18) != 0) goto switchD_1010d9ea4_default;
            uVar11 = 0;
            iVar3 = 3;
            goto LAB_1010da314;
          }
        }
        else {
          lVar13 = (**(code **)(*param_1 + 0x6e0))
                             (lVar12,*(undefined8 *)(lVar13 + 0x8b20),
                              *(undefined4 *)(*plVar7 + 0x18));
          if (lVar13 == 1) {
            uVar11 = 0x58;
            goto LAB_1010da318;
          }
          if (lVar13 != 2) goto LAB_1010d9fe4;
          FUN_1010d909c(*param_1,"Wildcard - \"%s\" skipped by user\n");
        }
        *piVar1 = 4;
        break;
      case 3:
        if (*(undefined8 **)(lVar13 + 0x8b10) == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_1010ec498(**(undefined8 **)(lVar13 + 0x8b10));
        }
        iVar3 = 5;
        if ((int)uVar11 == 0) {
          iVar3 = 6;
        }
        goto LAB_1010da314;
      case 4:
        if (*(code **)(lVar13 + 0x6e8) != (code *)0x0) {
          (**(code **)(lVar13 + 0x6e8))(*(undefined8 *)(lVar13 + 0x8b20));
        }
        FUN_1010ef040(*(undefined8 **)(lVar13 + 0x8b08),**(undefined8 **)(lVar13 + 0x8b08),0);
        if (*(long *)(*(long *)(lVar13 + 0x8b08) + 0x18) == 0) {
          iVar3 = 3;
        }
LAB_1010d9fdc:
        *piVar1 = iVar3;
        break;
      default:
switchD_1010d9ea4_default:
        uVar11 = 0;
        goto LAB_1010da318;
      }
      lVar13 = *param_1;
    } while( true );
  }
  uVar11 = FUN_1010de1c0(param_1);
  if ((int)uVar11 != 0) {
    return uVar11;
  }
  lVar13 = *param_1;
  goto LAB_1010da338;
switchD_1010d9ea4_caseD_0:
  pcVar10 = *(char **)(lVar13 + 0x8ab0);
  pcVar6 = _strrchr(pcVar10,0x2f);
  if (pcVar6 == (char *)0x0) {
    if (*pcVar10 != '\0') {
      lVar4 = (*(code *)PTR__strdup_101873638)(pcVar10);
      *(long *)(lVar13 + 0x8b00) = lVar4;
      if (lVar4 != 0) {
        *pcVar10 = '\0';
        goto LAB_1010da120;
      }
      goto LAB_1010da2f4;
    }
LAB_1010da1e0:
    *(undefined4 *)(lVar13 + 0x8af0) = 3;
    uVar11 = FUN_1010de1c0(param_1);
  }
  else {
    pcVar6 = pcVar6 + 1;
    if (*pcVar6 == '\0') goto LAB_1010da1e0;
    lVar4 = (*(code *)PTR__strdup_101873638)(pcVar6);
    *(long *)(lVar13 + 0x8b00) = lVar4;
    if (lVar4 == 0) {
LAB_1010da2f4:
      uVar11 = 0x1b;
    }
    else {
      *pcVar6 = '\0';
LAB_1010da120:
      plVar7 = (long *)(*(code *)PTR__calloc_101873640)(1,0x18);
      if (plVar7 == (long *)0x0) {
        plVar9 = (long *)(lVar13 + 0x8b00);
        if (*plVar9 != 0) {
          (*(code *)PTR__free_101873628)();
LAB_1010da2f0:
          *plVar9 = 0;
        }
        goto LAB_1010da2f4;
      }
      lVar4 = FUN_1010ec448();
      *plVar7 = lVar4;
      if (lVar4 == 0) {
        if (*(long *)(lVar13 + 0x8b00) != 0) {
          (*(code *)PTR__free_101873628)();
          *(long *)(lVar13 + 0x8b00) = 0;
        }
        (*(code *)PTR__free_101873628)(plVar7);
        goto LAB_1010da2f4;
      }
      plVar9 = (long *)(lVar13 + 0x8b10);
      *plVar9 = (long)plVar7;
      puVar8 = (undefined8 *)(lVar13 + 0x8b18);
      *puVar8 = FUN_1010de5f4;
      if (*(int *)(*param_1 + 0x4d8) == 2) {
        *(undefined4 *)(*param_1 + 0x4d8) = 1;
      }
      uVar11 = FUN_1010de1c0(param_1);
      if ((int)uVar11 == 0) {
        lVar4 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(*param_1 + 0x8ab0));
        *(long *)(lVar13 + 0x8af8) = lVar4;
        if (lVar4 == 0) {
          if (*(long *)(lVar13 + 0x8b00) != 0) {
            (*(code *)PTR__free_101873628)();
            *(long *)(lVar13 + 0x8b00) = 0;
          }
          (*(code *)*puVar8)(*plVar9);
          *(undefined8 *)(lVar13 + 0x8b18) = 0;
          goto LAB_1010da2f0;
        }
        lVar13 = *param_1;
        plVar7[1] = *(long *)(lVar13 + 0x2b0);
        *(code **)(lVar13 + 0x2b0) = FUN_1010ec4a0;
        plVar7[2] = *(long *)(lVar13 + 0x240);
        *(long **)(lVar13 + 0x240) = param_1;
        FUN_1010d909c(lVar13,"Wildcard - Parsing started\n");
        uVar11 = 0;
      }
      else {
        if (*(long *)(lVar13 + 0x8b00) != 0) {
          (*(code *)PTR__free_101873628)();
          *(long *)(lVar13 + 0x8b00) = 0;
        }
        (*(code *)*puVar8)(*plVar9);
        *plVar9 = 0;
        *(undefined8 *)(lVar13 + 0x8b18) = 0;
      }
    }
  }
  if (*piVar1 != 3) {
    iVar3 = 5;
    if ((int)uVar11 == 0) {
      iVar3 = 1;
    }
LAB_1010da314:
    *piVar1 = iVar3;
  }
LAB_1010da318:
  lVar13 = *param_1;
  if ((*(uint *)(lVar13 + 0x8af0) | 2) == 6) {
    return 0;
  }
  if ((int)uVar11 != 0) {
    return uVar11;
  }
LAB_1010da338:
  *(undefined8 *)(lVar13 + 0x78) = 0xffffffffffffffff;
  FUN_1010d2468(lVar13,0);
  FUN_1010d2460(lVar13,0);
  FUN_1010d22f4(lVar13,0xffffffffffffffff);
  FUN_1010d22cc(lVar13,0xffffffffffffffff);
  *(undefined1 *)((long)param_1 + 0x5c1) = 1;
  if (*(char *)(*param_1 + 0x4ff) != '\0') {
    *(undefined4 *)(*(long *)(*param_1 + 0x218) + 0x18) = 1;
  }
  *param_2 = '\0';
  uVar11 = FUN_1010dc818(param_1,1,0xc);
  if ((int)uVar11 == 0) {
    uVar11 = FUN_1010fd978(param_1 + 0xa6,0);
    *param_2 = (int)param_1[0xbc] == 0;
    cVar2 = *(char *)((long)param_1 + 0x2d2);
    FUN_1010d909c(*param_1,"ftp_perform ends with SECONDARY: %d\n");
    if ((int)uVar11 == 0) {
      if (*param_2 == '\0') {
        return 0;
      }
      uVar11 = FUN_1010ddbc8(param_1,cVar2 != '\0');
      return uVar11;
    }
  }
  FUN_1010de114(param_1 + 0xa6);
  return uVar11;
}




ulong FUN_1010da460(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  int local_7c;
  long local_78;
  int local_6c;
  undefined1 auStack_68 [8];
  
  lVar8 = *param_1;
  puVar12 = *(undefined8 **)(lVar8 + 0x218);
  if (puVar12 == (undefined8 *)0x0) {
    return 0;
  }
  uVar11 = *(undefined8 *)(lVar8 + 0x8ab0);
  uVar9 = (uint)param_2;
  if ((int)uVar9 < 0x3f) {
    if ((0x24 < uVar9) || ((1L << (param_2 & 0x3f) & 0x10428e3601U) == 0)) goto LAB_1010da4ec;
LAB_1010da4e8:
    if ((param_3 & 1) != 0) goto LAB_1010da4ec;
    param_2 = 0;
    *(undefined1 *)((long)param_1 + 0x5c1) = *(undefined1 *)((long)param_1 + 0x5c1);
  }
  else {
    if ((uVar9 == 0x3f) || (uVar9 == 0x4e)) goto LAB_1010da4e8;
LAB_1010da4ec:
    *(undefined1 *)((long)param_1 + 0x5c1) = 0;
    *(undefined1 *)((long)param_1 + 0x5c3) = 1;
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  if (param_1[0xb9] != 0) {
    (*(code *)PTR__free_101873628)();
  }
  if (*(char *)(lVar8 + 0x6d8) != '\0') {
    if ((*(code **)(lVar8 + 0x6e8) != (code *)0x0) && (param_1[0xb7] != 0)) {
      (**(code **)(lVar8 + 0x6e8))(*(undefined8 *)(lVar8 + 0x8b20));
    }
    param_1[0xbf] = -1;
  }
  pcVar3 = (char *)FUN_1010e5f30(lVar8,uVar11,0,0);
  if (pcVar3 == (char *)0x0) {
    uVar1 = 0x1b;
    if ((uint)param_2 != 0) {
      uVar1 = (uint)param_2;
    }
    param_2 = (ulong)uVar1;
    *(undefined1 *)((long)param_1 + 0x5c1) = 0;
    *(undefined1 *)(param_1 + 0x59) = 1;
    param_1[0xb9] = 0;
  }
  else {
    if ((char *)param_1[0xb7] == (char *)0x0) {
      sVar4 = 0;
    }
    else {
      sVar4 = _strlen((char *)param_1[0xb7]);
    }
    sVar5 = _strlen(pcVar3);
    if (*(char *)((long)param_1 + 0x5c3) == '\0') {
      if ((sVar5 - sVar4 == 0) || (*(int *)(lVar8 + 0x4d8) == 2)) {
        lVar10 = (*(code *)PTR__strdup_101873638)("");
        param_1[0xb9] = lVar10;
        (*(code *)PTR__free_101873628)(pcVar3);
LAB_1010da628:
        pcVar3 = (char *)param_1[0xb9];
      }
      else {
        param_1[0xb9] = (long)pcVar3;
        if (sVar4 != 0) {
          pcVar3[sVar5 - sVar4] = '\0';
          goto LAB_1010da628;
        }
      }
      if (pcVar3 != (char *)0x0) {
        FUN_1010d909c(lVar8,"Remembering we are in dir \"%s\"\n");
      }
    }
    else {
      param_1[0xb9] = 0;
      (*(code *)PTR__free_101873628)(pcVar3);
    }
  }
  FUN_1010de114(param_1 + 0xa6);
  if (*(int *)((long)param_1 + 0x1d4) != -1) {
    if ((int)param_2 == 0) {
      if ((((char)param_1[0xb8] == '\0') || (*(long *)(lVar8 + 0x88) < 1)) ||
         (param_2 = FUN_1010fdc74(param_1 + 0xa6,"%s"), (int)param_2 == 0)) {
        param_2 = 0;
      }
      else {
        FUN_1010f2cbc(param_2);
        FUN_1010d9258(lVar8,"Failure sending ABOR command: %s");
        *(undefined1 *)((long)param_1 + 0x5c1) = 0;
        *(undefined1 *)(param_1 + 0x59) = 1;
      }
    }
    if ((char)param_1[0x46] != '\0') {
      thunk_FUN_1011065c4(param_1,1);
    }
    if (*(int *)((long)param_1 + 0x1d4) != -1) {
      FUN_1010ee3ec(param_1);
      *(undefined4 *)((long)param_1 + 0x1d4) = 0xffffffff;
      *(undefined1 *)((long)param_1 + 0x2d2) = 0;
    }
  }
  if ((int)param_2 != 0) goto LAB_1010da890;
  if (((*(int *)(puVar12 + 3) == 0) && (*(char *)((long)param_1 + 0x5c1) != '\0')) &&
     (((char)param_1[0xaa] != '\0' && ((param_3 & 1) == 0)))) {
    lVar10 = param_1[0xb0];
    param_1[0xb0] = 60000;
    auVar13 = FUN_1010d0e58();
    *(undefined1 (*) [16])(param_1 + 0xae) = auVar13;
    uVar6 = FUN_1010db124(&local_78,param_1,&local_7c);
    param_1[0xb0] = lVar10;
    if ((int)uVar6 == 0x1c && local_78 == 0) {
      FUN_1010d9258(lVar8,"control connection looks dead");
      *(undefined1 *)((long)param_1 + 0x5c1) = 0;
      *(undefined1 *)(param_1 + 0x59) = 1;
    }
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((char)param_1[0xb8] != '\0') {
      if (0 < *(long *)(lVar8 + 0x88)) {
        FUN_1010d909c(lVar8,"partial download completed, closing connection\n");
        *(undefined1 *)(param_1 + 0x59) = 1;
        return 0;
      }
      goto LAB_1010da7c0;
    }
    if ((local_7c == 0xe2) || (local_7c == 0xfa)) goto LAB_1010da7c0;
    pcVar3 = "server did not report OK, got %d";
  }
  else {
LAB_1010da7c0:
    if (param_3 != 0) {
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 0;
      return 0;
    }
    if (*(char *)(lVar8 + 0x501) == '\0') {
      lVar10 = *(long *)(lVar8 + 0x78);
      if ((((lVar10 == -1) || (lVar7 = *(long *)*puVar12, lVar10 == lVar7)) ||
          (*(long *)(lVar8 + 0x8aa0) + lVar10 == lVar7)) || (*(long *)(lVar8 + 0x88) == lVar7)) {
        if (((char)param_1[0xb8] == '\0') && (*(long *)*puVar12 == 0 && 0 < lVar10)) {
          FUN_1010d9258(lVar8,"No data was received!");
          param_2 = 0x13;
          goto LAB_1010da890;
        }
        goto LAB_1010da88c;
      }
      pcVar3 = "Received only partial file: %ld bytes";
    }
    else {
      if (((*(long *)(lVar8 + 0x8ae8) == -1) || (*(long *)(lVar8 + 0x8ae8) == *(long *)*puVar12)) ||
         ((*(char *)(lVar8 + 0x3ca) != '\0' || (*(int *)(puVar12 + 3) != 0)))) {
LAB_1010da88c:
        param_2 = 0;
        goto LAB_1010da890;
      }
      pcVar3 = "Uploaded unaligned file size (%ld out of %ld bytes)";
    }
  }
  FUN_1010d9258(lVar8,pcVar3);
  param_2 = 0x12;
LAB_1010da890:
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if ((int)param_2 != 0 || uVar9 != 0) {
    return param_2;
  }
  if ((param_3 & 1) != 0) {
    return param_2;
  }
  puVar12 = *(undefined8 **)(lVar8 + 0x3d8);
  if (puVar12 == (undefined8 *)0x0) {
    return param_2;
  }
  do {
    if ((char *)*puVar12 != (char *)0x0) {
      cVar2 = *(char *)*puVar12;
      uVar6 = FUN_1010fdc74(param_1 + 0xa6,"%s");
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      auVar13 = FUN_1010d0e58();
      *(undefined1 (*) [16])(param_1 + 0xae) = auVar13;
      uVar6 = FUN_1010db124(auStack_68,param_1,&local_6c);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (399 < local_6c && cVar2 != '*') {
        FUN_1010d9258(*param_1,"QUOT string not accepted: %s");
        return 0x15;
      }
    }
    puVar12 = (undefined8 *)puVar12[1];
    if (puVar12 == (undefined8 *)0x0) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_1010da9a0(long *param_1,uint *param_2)

{
  long *plVar1;
  undefined2 uVar2;
  undefined *puVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 uVar15;
  char local_f2;
  char local_f1;
  byte *local_f0 [17];
  byte *local_68;
  
  uVar11 = 0;
  lVar10 = *param_1;
  local_f1 = '\0';
  lVar14 = *(long *)(lVar10 + 0x218);
  if (*(char *)((long)param_1 + 0x2d2) != '\0') goto LAB_1010dab94;
  if (*(int *)((long)param_1 + 0x65c) == 1) {
    uVar11 = FUN_1010ff44c(param_1,1,0,0);
    return uVar11;
  }
  uVar11 = FUN_1010edf04(param_1,1,&local_f1);
  if (local_f1 == '\0') {
    if ((int)uVar11 == 0) {
      return 0;
    }
    if (*(int *)((long)param_1 + 0x5d4) == 0) {
      *param_2 = 0xffffffff;
      uVar11 = FUN_1010ddb50(param_1);
      return uVar11;
    }
    return uVar11;
  }
  if (*(char *)((long)param_1 + 0x2ca) == '\0') goto LAB_1010dab94;
  FUN_1010d909c(lVar10,"Connection to proxy confirmed\n");
  plVar1 = param_1 + 0xc0;
  uVar2 = (undefined2)param_1[0xc6];
  lVar12 = *param_1;
  local_f1 = '\0';
  uVar11 = 0;
  switch((int)param_1[0x34]) {
  case 0:
  case 1:
    break;
  default:
    FUN_1010d9258(lVar12,"unknown proxytype option given");
    uVar11 = 7;
    break;
  case 4:
    lVar5 = param_1[0x32];
    uVar11 = 0;
    goto LAB_1010dab18;
  case 5:
  case 7:
    uVar11 = FUN_1010f5cc4(param_1[0x32],param_1[0x33],plVar1,uVar2,1,param_1);
    goto LAB_1010dab1c;
  case 6:
    lVar5 = param_1[0x32];
    uVar11 = 1;
LAB_1010dab18:
    uVar11 = FUN_1010f5830(lVar5,plVar1,uVar2,1,param_1,uVar11);
LAB_1010dab1c:
    local_f1 = '\x01';
  }
  if ((*(char *)((long)param_1 + 0x2d5) != '\0') && (*(char *)((long)param_1 + 0x2cb) != '\0')) {
    uVar15 = *(undefined8 *)(lVar12 + 0x218);
    _memset(local_f0,0,0x88);
    *(byte ***)(lVar12 + 0x218) = local_f0;
    uVar11 = FUN_1010ff44c(param_1,1,plVar1,uVar2);
    *(undefined8 *)(lVar12 + 0x218) = uVar15;
    if ((int)uVar11 == 0) {
      if (*(int *)((long)param_1 + 0x65c) == 2) {
        uVar11 = 0;
        local_f1 = '\x01';
      }
      else {
        uVar11 = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
    }
  }
LAB_1010dab94:
  if ((int)param_1[0xbc] != 0) {
    uVar11 = FUN_1010fd978(param_1 + 0xa6,0);
    *param_2 = (uint)((int)param_1[0xbc] == 0);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    if (*(char *)((long)param_1 + 0x5c4) != '\x01') {
      return 0;
    }
    uVar11 = 0;
    *param_2 = 0;
  }
  if (*(uint *)(lVar14 + 0x18) < 2) {
    if (*(char *)((long)param_1 + 0x5c4) == '\0') {
      if (*(char *)(lVar10 + 0x501) == '\0') {
        *(undefined8 *)(lVar14 + 0x20) = 0xffffffffffffffff;
        lVar12 = *param_1;
        if ((*(char *)(lVar12 + 0x8ab9) == '\0') || (*(char **)(lVar12 + 0x8ac0) == (char *)0x0)) {
          *(undefined8 *)(lVar12 + 0x88) = 0xffffffffffffffff;
        }
        else {
          lVar5 = _strtol(*(char **)(lVar12 + 0x8ac0),(char **)local_f0,0);
          puVar3 = PTR___DefaultRuneLocale_101444130;
          uVar8 = (uint)*local_f0[0];
          pbVar13 = local_f0[0];
          if (*local_f0[0] != 0) {
            do {
              pbVar4 = local_f0[0];
              if ((char)(byte)uVar8 < '\0') {
                uVar8 = ___maskrune(uVar8,0x4000);
              }
              else {
                uVar8 = *(uint *)(puVar3 + (ulong)(byte)uVar8 * 4 + 0x3c) & 0x4000;
              }
              if ((uVar8 == 0) && (pbVar13 = pbVar4, *pbVar4 != 0x2d)) break;
              pbVar13 = pbVar4 + 1;
              uVar8 = (uint)pbVar4[1];
              local_f0[0] = pbVar13;
            } while (uVar8 != 0);
          }
          lVar6 = _strtol((char *)pbVar13,(char **)&local_68,0);
          lVar9 = -1;
          if (pbVar13 != local_68) {
            lVar9 = lVar6;
          }
          if ((lVar5 < 0) || (lVar9 != -1)) {
            if (lVar5 < 0) {
              lVar9 = -lVar5;
            }
            else {
              lVar9 = (1 - lVar5) + lVar9;
            }
            *(long *)(lVar12 + 0x88) = lVar9;
          }
          *(long *)(lVar12 + 0x8ac8) = lVar5;
          *(undefined1 *)(param_1 + 0xb8) = 1;
        }
        if ((*(char *)(lVar10 + 0x4f5) == '\0') && (param_1[0xb7] != 0)) {
          uVar7 = *(undefined1 *)(lVar10 + 0x4f3);
          uVar11 = 0x15;
          goto LAB_1010dac7c;
        }
        if (*(int *)(lVar14 + 0x18) == 0) {
          uVar7 = 1;
          uVar11 = 0x14;
          goto LAB_1010dac7c;
        }
      }
      else {
        uVar7 = *(undefined1 *)(lVar10 + 0x4f3);
        uVar11 = 0x16;
LAB_1010dac7c:
        uVar11 = FUN_1010dd1b8(param_1,uVar7,uVar11);
        if ((int)uVar11 != 0) {
          return uVar11;
        }
      }
      uVar11 = FUN_1010fd978(param_1 + 0xa6,0);
      uVar8 = (uint)((int)param_1[0xbc] == 0);
      goto LAB_1010dadc8;
    }
    uVar11 = FUN_1010dde80(param_1,&local_f2);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    if (local_f2 == '\0') {
      return uVar11;
    }
    uVar11 = FUN_1010ddfe0(param_1);
    *(undefined1 *)((long)param_1 + 0x5c4) = 0;
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    uVar11 = FUN_1010ddd44(param_1);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
    uVar11 = 0;
  }
  else {
    if ((int)uVar11 == 0) {
      FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    if (*(char *)((long)param_1 + 0x5c4) != '\0') {
      return uVar11;
    }
  }
  uVar8 = 1;
LAB_1010dadc8:
  *param_2 = uVar8;
  return uVar11;
}




void FUN_1010dae1c(long param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x580) = 1800000;
  *(code **)(param_1 + 0x590) = FUN_1010db2f8;
  *(code **)(param_1 + 0x598) = FUN_1010dc5e8;
  *(long *)(param_1 + 0x588) = param_1;
  if (((*(byte *)(*(long *)(param_1 + 0x308) + 0x7c) & 1) == 0) ||
     (iVar1 = FUN_101105158(param_1,0), iVar1 == 0)) {
    FUN_1010fdaec(param_1 + 0x530);
    *(undefined4 *)(param_1 + 0x5e0) = 1;
    FUN_1010fd978(param_1 + 0x530,0);
    *param_2 = *(int *)(param_1 + 0x5e0) == 0;
  }
  return;
}




void FUN_1010daec0(long param_1,undefined8 param_2)

{
  FUN_1010fd978(param_1 + 0x530,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x5e0) == 0;
  return;
}




void FUN_1010daefc(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_1010fd978(param_1 + 0x530,0);
  bVar1 = *(int *)(param_1 + 0x5e0) == 0;
  *(bool *)param_2 = bVar1;
  if ((iVar2 == 0) && (bVar1)) {
    FUN_1010ddbc8(param_1,0);
    return;
  }
  return;
}




void FUN_1010daf58(long param_1)

{
  FUN_1010fdf54(param_1 + 0x530);
  return;
}




ulong FUN_1010daf60(long *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((int)param_1[0xbc] != 0) {
    uVar3 = FUN_1010fdf54(param_1 + 0xa6);
    return uVar3;
  }
  *param_2 = (int)param_1[0x3a];
  if (*(char *)(*param_1 + 0x4f6) == '\0') {
    lVar4 = 0;
    iVar5 = 1;
    uVar3 = 1;
    do {
      iVar2 = *(int *)((long)param_1 + lVar4 + 0x1d8);
      if (iVar2 != -1) {
        param_2[iVar5] = iVar2;
        uVar1 = iVar5 + 0x10;
        iVar5 = iVar5 + 1;
        uVar3 = (ulong)(1 << (ulong)(uVar1 & 0x1f) | (uint)uVar3);
      }
      lVar4 = lVar4 + 4;
    } while (lVar4 != 8);
  }
  else {
    param_2[1] = *(undefined4 *)((long)param_1 + 0x1d4);
    uVar3 = 0x20001;
  }
  return uVar3;
}




undefined8 FUN_1010dafe8(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    if (*(char *)((long)param_1 + 0x5c1) != '\0') {
      iVar1 = FUN_1010fdc74(param_1 + 0xa6,"%s");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xbc) = 0x22;
        do {
          iVar1 = FUN_1010fd978(param_1 + 0xa6,1);
          if (iVar1 != 0) break;
        } while ((int)param_1[0xbc] != 0);
      }
      else {
        lVar2 = *param_1;
        FUN_1010f2cbc();
        FUN_1010d9258(lVar2,"Failure sending QUIT command: %s");
        *(undefined1 *)((long)param_1 + 0x5c1) = 0;
        *(undefined1 *)(param_1 + 0x59) = 1;
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x5c1) = 0;
  }
  if (param_1[0xb4] != 0) {
    if (*(long *)(*param_1 + 0x8a88) == param_1[0xb4]) {
      *(long *)(*param_1 + 0x8a88) = 0;
    }
    (*(code *)PTR__free_101873628)();
    param_1[0xb4] = 0;
  }
  FUN_1010de114(param_1 + 0xa6);
  if (param_1[0xb9] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[0xb9] = 0;
  }
  if (param_1[0xbe] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[0xbe] = 0;
  }
  FUN_1010fe018(param_1 + 0xa6);
  return 0;
}




undefined8 FUN_1010db124(long *param_1,undefined8 *param_2,int *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int local_5c;
  long local_58;
  
  uVar2 = *(undefined4 *)(param_2 + 0x3a);
  uVar6 = *param_2;
  local_5c = 0;
  if (param_3 == (int *)0x0) {
    param_3 = &local_5c;
  }
  else {
    *param_3 = 0;
  }
  iVar7 = 0;
  plVar1 = param_2 + 0xa6;
  *param_1 = 0;
  do {
    while( true ) {
      if (*param_3 != 0) {
        uVar5 = 0;
        goto LAB_1010db220;
      }
      lVar4 = FUN_1010fd90c(plVar1);
      if (lVar4 < 1) {
        FUN_1010d9258(uVar6,"FTP response timeout");
        return 0x1c;
      }
      if ((1 < iVar7) || (*plVar1 == 0)) break;
LAB_1010db1e4:
      uVar5 = FUN_1010db284(uVar2,plVar1,param_3,&local_58);
      if ((int)uVar5 != 0) {
LAB_1010db220:
        *(undefined1 *)(param_2 + 0xaa) = 0;
        return uVar5;
      }
      if (local_58 == 0) {
        iVar3 = 0;
        if (*plVar1 != 0) {
          iVar3 = iVar7 + 1;
        }
      }
      else {
        iVar3 = 0;
      }
      iVar7 = iVar3;
      *param_1 = *param_1 + local_58;
    }
    if (999 < lVar4) {
      lVar4 = 1000;
    }
    iVar3 = FUN_1010f37c8(uVar2,0xffffffff,0xffffffff,lVar4);
    if (iVar3 != 0) {
      if (iVar3 == -1) {
        ___error();
        FUN_1010d9258(uVar6,"FTP response aborted due to select/poll error: %d");
        return 0x38;
      }
      goto LAB_1010db1e4;
    }
    iVar3 = FUN_1010d1dac(param_2);
    if (iVar3 != 0) {
      return 0x2a;
    }
  } while( true );
}




undefined8 FUN_1010db284(undefined8 param_1,long param_2,int *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int local_34;
  
  plVar3 = *(long **)(param_2 + 0x58);
  lVar2 = *plVar3;
  uVar1 = FUN_1010fdc9c(param_1,param_2,&local_34);
  *(int *)(lVar2 + 0x8b28) = local_34;
  if (param_3 != (int *)0x0) {
    *param_3 = local_34;
  }
  if (local_34 == 0x1a5) {
    FUN_1010d909c(lVar2,"We got a 421 - timeout!\n");
    *(undefined4 *)(plVar3 + 0xbc) = 0;
    uVar1 = 0x1c;
  }
  return uVar1;
}




ulong FUN_1010db2f8(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  char cVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_1b0;
  int local_1a4 [3];
  char local_198 [4];
  uint local_194;
  long local_190;
  int local_188;
  undefined4 uStack_184;
  time_t local_180 [2];
  char local_170 [16];
  undefined8 local_160;
  long local_68;
  
  lVar20 = *(long *)PTR____stack_chk_guard_101444218;
  lVar18 = *param_1;
  plVar1 = param_1 + 0xa6;
  local_1b0 = 0;
  local_68 = lVar20;
  if (param_1[0xac] != 0) {
    uVar6 = FUN_1010fdf84(plVar1);
    return uVar6;
  }
  uVar6 = FUN_1010db284((int)param_1[0x3a],plVar1,local_1a4,&local_1b0);
  if ((int)uVar6 != 0) goto joined_r0x0001010db534;
  if (local_1a4[0] == 0) {
LAB_1010dbda4:
    uVar6 = 0;
    goto joined_r0x0001010db534;
  }
  iVar5 = (int)param_1[0xbc];
  switch(iVar5) {
  case 1:
    if (local_1a4[0] == 0xdc) {
      if ((*(int *)(lVar18 + 0x510) == 0) || ((char)param_1[0x41] != '\0')) {
        uVar6 = FUN_1010dc7a8(param_1);
      }
      else {
        *(undefined4 *)((long)param_1 + 0x5dc) = 0;
        if (*(uint *)(lVar18 + 0x514) == 2) {
          *(undefined8 *)((long)param_1 + 0x5d4) = 0xffffffff00000001;
        }
        else {
          if (1 < *(uint *)(lVar18 + 0x514)) {
            FUN_1010d9258(lVar18,"unsupported parameter to CURLOPT_FTPSSLAUTH: %d");
            uVar6 = 0x30;
            break;
          }
          *(undefined8 *)((long)param_1 + 0x5d4) = 0x100000000;
        }
        uVar6 = FUN_1010fdc74(plVar1,"AUTH %s");
        if ((int)uVar6 == 0) {
          uVar6 = 0;
          *(undefined4 *)(param_1 + 0xbc) = 2;
        }
      }
      break;
    }
    if (local_1a4[0] != 0xe6) {
      FUN_1010d9258(lVar18,"Got a %03d ftp-server response when 220 was expected");
      uVar6 = 8;
      break;
    }
    local_1a4[0] = 0xe6;
    goto LAB_1010db41c;
  case 2:
    if ((local_1a4[0] == 0xea) || (local_1a4[0] == 0x14e)) {
      uVar6 = FUN_101105158(param_1,0);
      if ((int)uVar6 != 0) break;
      *(undefined1 *)(param_1 + 0x46) = 0;
LAB_1010dbdd4:
      uVar6 = FUN_1010dc7a8(param_1);
      break;
    }
    if (0 < *(int *)((long)param_1 + 0x5dc)) {
      if (1 < *(uint *)(lVar18 + 0x510)) goto LAB_1010dbdcc;
      goto LAB_1010dbdd4;
    }
    *(int *)((long)param_1 + 0x5dc) = *(int *)((long)param_1 + 0x5dc) + 1;
    *(int *)((long)param_1 + 0x5d4) = *(int *)((long)param_1 + 0x5d4) + (int)param_1[0xbb];
    pcVar7 = "AUTH %s";
    goto LAB_1010dbb5c;
  case 3:
  case 4:
LAB_1010db41c:
    uVar6 = FUN_1010dc66c(param_1,local_1a4[0]);
    break;
  case 5:
    if (local_1a4[0] == 0xe6) {
      uVar6 = FUN_1010dcd60(param_1);
    }
    else {
      FUN_1010d9258(*param_1,"ACCT rejected by server: %03d");
      uVar6 = 0xb;
    }
    break;
  case 6:
    uVar6 = FUN_1010fdc74(plVar1,"PROT %c");
    if ((int)uVar6 == 0) {
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0xbc) = 7;
    }
    break;
  case 7:
    if (local_1a4[0] - 200U < 100) {
      *(bool *)(param_1 + 0x46) = *(uint *)(lVar18 + 0x510) != 2;
    }
    else if (2 < *(uint *)(lVar18 + 0x510)) {
LAB_1010dbdcc:
      uVar6 = 0x40;
      break;
    }
    if (*(int *)(lVar18 + 0x518) != 0) {
      uVar6 = FUN_1010fdc74(plVar1,"%s");
      if ((int)uVar6 == 0) {
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0xbc) = 8;
      }
      break;
    }
    goto LAB_1010dbaf8;
  case 8:
    if ((local_1a4[0] < 500) && (uVar6 = FUN_1011055d4(param_1,0), (int)uVar6 != 0)) {
      FUN_1010d9258(*param_1,"Failed to clear the command channel (CCC)");
      break;
    }
LAB_1010dbaf8:
    uVar6 = FUN_1010fdc74(plVar1,"%s");
    if ((int)uVar6 == 0) {
LAB_1010dbb1c:
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0xbc) = 9;
    }
    break;
  case 9:
    if (local_1a4[0] == 0x101) {
      pcVar7 = (char *)(*(code *)PTR__malloc_101873620)(local_1b0 + 1);
      if (pcVar7 == (char *)0x0) {
LAB_1010dbdac:
        uVar6 = 0x1b;
        break;
      }
      pcVar10 = (char *)(lVar18 + 0x90c);
      cVar14 = *(char *)(lVar18 + 0x90c);
      do {
        if ((cVar14 == '\0') || (cVar14 == '\n')) goto LAB_1010db678;
        pcVar13 = pcVar7;
        if (cVar14 == '\"') goto LAB_1010dc444;
        pcVar10 = pcVar10 + 1;
        cVar14 = *pcVar10;
      } while (pcVar10 < (char *)(lVar18 + 0x4909U));
      if (cVar14 == '\"') {
LAB_1010dc444:
        do {
          pcVar16 = pcVar10 + 1;
          cVar14 = *pcVar16;
          if (cVar14 == '\0') goto LAB_1010dc47c;
          if (cVar14 == '\"') {
            pcVar16 = pcVar10 + 2;
            if (*pcVar16 != '\"') {
              *pcVar13 = '\0';
              goto LAB_1010dc47c;
            }
            cVar14 = '\"';
          }
          *pcVar13 = cVar14;
          pcVar10 = pcVar16;
          pcVar13 = pcVar13 + 1;
        } while( true );
      }
LAB_1010db678:
      (*(code *)PTR__free_101873628)(pcVar7);
      FUN_1010d909c(lVar18,"Failed to figure out path\n");
    }
  default:
switchD_1010db3b4_default:
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    break;
  case 10:
    if (local_1a4[0] == 0xd7) {
      lVar17 = (*(code *)PTR__malloc_101873620)(local_1b0 + 1);
      if (lVar17 == 0) goto LAB_1010dbdac;
      pbVar9 = (byte *)(lVar18 + 0x90c);
      do {
        pbVar11 = pbVar9 + 1;
        bVar4 = *pbVar9;
        pbVar9 = pbVar11;
      } while (bVar4 == 0x20);
      lVar18 = 0;
      while ((bVar4 | 0x20) != 0x20) {
        *(byte *)(lVar17 + lVar18) = bVar4;
        pbVar9 = pbVar11 + lVar18;
        lVar18 = lVar18 + 1;
        bVar4 = *pbVar9;
      }
      *(undefined1 *)(lVar17 + lVar18) = 0;
      iVar5 = FUN_1010eb4e8(lVar17,"OS/400");
      if (iVar5 != 0) {
        uVar6 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar6 == 0) {
          if (param_1[0xbe] != 0) {
            (*(code *)PTR__free_101873628)();
            param_1[0xbe] = 0;
          }
          uVar6 = 0;
          param_1[0xbe] = lVar17;
          *(undefined4 *)(param_1 + 0xbc) = 0xb;
        }
        else {
          (*(code *)PTR__free_101873628)(lVar17);
        }
        break;
      }
      if (param_1[0xbe] != 0) {
        (*(code *)PTR__free_101873628)();
        param_1[0xbe] = 0;
      }
      param_1[0xbe] = lVar17;
    }
    goto switchD_1010db3b4_default;
  case 0xb:
    if (local_1a4[0] != 0xfa) goto switchD_1010db3b4_default;
    iVar5 = FUN_1010fdc74(plVar1,"%s");
    if (iVar5 != 0) goto LAB_1010dbda4;
    goto LAB_1010dbb1c;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if ((local_1a4[0] < 400) || ((int)param_1[0xbb] != 0)) {
      uVar6 = FUN_1010dc818(param_1,0,iVar5);
    }
    else {
      FUN_1010d9258(*param_1,"QUOT command failed with %03d");
      uVar6 = 0x15;
    }
    break;
  case 0x10:
    if (99 < local_1a4[0] - 200U) {
      if (((*(int *)(*param_1 + 0x4dc) == 0) || (*(int *)((long)param_1 + 0x5d4) == 0)) ||
         ((int)param_1[0xbb] != 0)) {
        FUN_1010d9258(lVar18,"Server denied you to change to the given directory");
        *(undefined1 *)((long)param_1 + 0x5c3) = 1;
        uVar6 = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0xbb) = 1;
        uVar6 = FUN_1010fdc74(plVar1,"MKD %s");
        if ((int)uVar6 == 0) {
          uVar6 = 0;
          *(undefined4 *)(param_1 + 0xbc) = 0x11;
        }
      }
      break;
    }
    *(undefined4 *)(param_1 + 0xbb) = 0;
    iVar5 = *(int *)((long)param_1 + 0x5d4);
    *(int *)((long)param_1 + 0x5d4) = iVar5 + 1;
    if ((int)param_1[0xb6] <= iVar5) {
      uVar6 = FUN_1010dca08(param_1);
      break;
    }
    goto LAB_1010dbb50;
  case 0x11:
    if ((99 < local_1a4[0] - 200U) &&
       (iVar5 = *(int *)((long)param_1 + 0x5dc), *(int *)((long)param_1 + 0x5dc) = iVar5 + -1,
       iVar5 == 0)) {
      FUN_1010d9258(lVar18,"Failed to MKD dir: %03d");
      uVar6 = 9;
      break;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0x10;
LAB_1010dbb50:
    pcVar7 = "CWD %s";
LAB_1010dbb5c:
    uVar6 = FUN_1010fdc74(plVar1,pcVar7);
    break;
  case 0x12:
    lVar18 = *param_1;
    lVar17 = *(long *)(lVar18 + 0x218);
    if (local_1a4[0] == 0x226) {
      FUN_1010d9258(lVar18,"Given file does not exist");
      uVar6 = 0x13;
    }
    else {
      if (local_1a4[0] == 0xd5) {
        lVar19 = lVar18 + 0x908;
        iVar5 = _sscanf((char *)(lVar18 + 0x90c),"%04d%02d%02d%02d%02d%02d");
        if (iVar5 == 6) {
          local_180[0] = _time((time_t *)0x0);
          FUN_1010e7270(lVar19,0x4001,"%04d%02d%02d %02d:%02d:%02d GMT");
          uVar8 = FUN_1010f2fb4(lVar19,local_180);
          *(undefined8 *)(lVar18 + 0x8b38) = uVar8;
        }
        if ((((*(char *)(lVar18 + 0x4ff) != '\0') && (param_1[0xb7] != 0)) &&
            (*(char *)(lVar18 + 0x4f1) != '\0')) && (-1 < *(long *)(lVar18 + 0x8b38))) {
          uVar6 = FUN_1010f36dc(*(long *)(lVar18 + 0x8b38),local_170);
          if ((int)uVar6 != 0) break;
          FUN_1010e7270(lVar19,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n");
          uVar6 = FUN_1010d98ec(param_1,3,lVar19,0);
          if ((int)uVar6 != 0) break;
        }
      }
      else {
        FUN_1010d909c(lVar18,"unsupported MDTM reply format\n");
      }
      uVar6 = 0;
    }
    if (*(int *)(lVar18 + 0x410) != 0) {
      lVar19 = *(long *)(lVar18 + 0x8b38);
      if ((lVar19 < 1) || (lVar15 = *(long *)(lVar18 + 0x418), lVar15 < 1)) {
        FUN_1010d909c(lVar18,"Skipping time comparison\n");
      }
      else if (*(int *)(lVar18 + 0x410) == 2) {
        if (lVar15 < lVar19) {
          pcVar7 = "The requested document is not old enough\n";
LAB_1010dbf80:
          FUN_1010d909c(lVar18,pcVar7);
          uVar6 = 0;
          *(undefined4 *)(lVar17 + 0x18) = 2;
          *(undefined1 *)(lVar18 + 0x8b40) = 1;
          *(undefined4 *)(param_1 + 0xbc) = 0;
          break;
        }
      }
      else if (lVar19 <= lVar15) {
        pcVar7 = "The requested document is not new enough\n";
        goto LAB_1010dbf80;
      }
    }
    if ((int)uVar6 == 0) {
      uVar6 = FUN_1010dd164(param_1);
    }
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    uVar6 = FUN_1010dca80(param_1,local_1a4[0],iVar5);
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    lVar18 = *param_1;
    if (local_1a4[0] == 0xd5) {
      lVar17 = _strtol((char *)(lVar18 + 0x90c),(char **)0x0,0);
    }
    else {
      lVar17 = -1;
    }
    if (iVar5 == 0x19) {
      *(long *)(lVar18 + 0x8ac8) = lVar17;
      uVar6 = FUN_1010dcf70(param_1,1);
      break;
    }
    if (iVar5 == 0x18) {
      FUN_1010d22cc(lVar18,lVar17);
      uVar6 = FUN_1010dcdd8(param_1,lVar17);
      break;
    }
    if (iVar5 == 0x17) {
      if (lVar17 != -1) {
        FUN_1010e7270(lVar18 + 0x908,0x4001,"Content-Length: %ld\r\n");
        uVar6 = FUN_1010d98ec(param_1,3,lVar18 + 0x908,0);
        if ((int)uVar6 != 0) break;
      }
      FUN_1010d22cc(lVar18,lVar17);
      uVar6 = FUN_1010dd2c4(param_1);
      break;
    }
    goto LAB_1010dbda4;
  case 0x1a:
  case 0x1b:
    if (iVar5 == 0x1b) {
      if (local_1a4[0] == 0x15e) {
        uVar6 = FUN_1010fdc74(plVar1,"RETR %s");
        if ((int)uVar6 == 0) {
          uVar6 = 0;
          *(undefined4 *)(param_1 + 0xbc) = 0x20;
        }
      }
      else {
        FUN_1010d9258(*param_1,"Couldn\'t use REST");
        uVar6 = 0x1f;
      }
    }
    else {
      if (local_1a4[0] == 0x15e) {
        local_160 = 0xa0d73657479;
        builtin_strncpy(local_170,"Accept-ranges: b",0x10);
        uVar6 = FUN_1010d98ec(param_1,3,local_170,0);
        if ((int)uVar6 != 0) break;
      }
      uVar6 = FUN_1010dd338(param_1);
    }
    break;
  case 0x1c:
    lVar18 = *param_1;
    if (local_1a4[0] == 200) {
      FUN_1010d909c(lVar18,"Connect data stream actively\n");
      *(undefined4 *)(param_1 + 0xbc) = 0;
      uVar6 = FUN_1010ddbc8(param_1,0);
    }
    else {
      if (*(int *)((long)param_1 + 0x5d4) == 0) {
        FUN_1010d909c(lVar18,"disabling EPRT usage\n");
        *(undefined1 *)((long)param_1 + 0x2d9) = 0;
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)((long)param_1 + 0x5d4) + 1;
        if (iVar5 == 2) {
          FUN_1010d9258(lVar18,"Failed to do PORT");
          uVar6 = 0x1e;
          break;
        }
      }
      uVar6 = FUN_1010dd444(param_1,iVar5);
    }
    break;
  case 0x1d:
    if (local_1a4[0] == 200) {
      uVar6 = FUN_1010dccc0(param_1);
    }
    else {
      FUN_1010d9258(lVar18,"PRET command not accepted: %03d");
      uVar6 = 0x54;
    }
    break;
  case 0x1e:
    lVar18 = *param_1;
    local_190 = 0;
    pcVar7 = (char *)(lVar18 + 0x90c);
    iVar5 = *(int *)((long)param_1 + 0x5d4);
    if ((local_1a4[0] == 0xe5) && (iVar5 == 0)) {
      pcVar7 = _strchr(pcVar7,0x28);
      if (pcVar7 != (char *)0x0) {
        pcVar7 = pcVar7 + 1;
        iVar5 = _sscanf(pcVar7,"%c%c%c%u%c");
        if (iVar5 == 5) {
          lVar17 = 1;
          do {
            if (local_198[lVar17] != local_198[0]) {
              pcVar7 = (char *)0x0;
              break;
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < 4);
          if (0xffff < local_194) {
            pcVar7 = "Illegal port number in EPSV reply";
            goto LAB_1010dc164;
          }
          if (pcVar7 != (char *)0x0) {
            *(short *)(param_1 + 0xc6) = (short)local_194;
            FUN_1010e7270(param_1 + 0xc0,0x30,"%s");
LAB_1010dc2e8:
            if (*(char *)((long)param_1 + 0x2ca) == '\0') {
              FUN_1010d1744(param_1,param_1 + 0xc0,(short)param_1[0xc6],&local_190);
              if (local_190 != 0) goto LAB_1010dc34c;
              pcVar7 = "Can\'t resolve new host %s:%hu";
            }
            else {
              FUN_1010d1744(param_1,param_1[0x1c],(int)param_1[0x1e],&local_190);
              if (local_190 != 0) {
LAB_1010dc34c:
                *(undefined1 *)((long)param_1 + 0x2d2) = 0;
                uVar6 = FUN_1010ee454(param_1);
                FUN_1010d1aa4(lVar18,local_190);
                if ((int)uVar6 == 0) {
                  if (*(char *)(lVar18 + 0x508) != '\0') {
                    FUN_1010d1414(param_1[0xc],local_170,0x100);
                    FUN_1010d909c(*param_1,"Connecting to %s (%s) port %d\n");
                  }
                  uVar6 = 0;
                  *(undefined1 *)(param_1 + 0x5a) = 1;
                  *(undefined4 *)(param_1 + 0xbc) = 0;
                  break;
                }
                if ((local_1a4[0] != 0xe5) || (*(int *)((long)param_1 + 0x5d4) != 0)) break;
                goto LAB_1010dc384;
              }
              pcVar7 = "Can\'t resolve proxy host %s:%hu";
            }
            FUN_1010d9258(lVar18,pcVar7);
            uVar6 = 0xf;
            break;
          }
        }
      }
      pcVar7 = "Weirdly formatted EPSV reply";
    }
    else {
      if ((local_1a4[0] == 0xe3) && (iVar5 == 1)) {
        cVar14 = *pcVar7;
        while (cVar14 != '\0') {
          iVar5 = _sscanf(pcVar7,"%d,%d,%d,%d,%d,%d");
          if (iVar5 == 6) {
            if (*pcVar7 != '\0') {
              if (*(char *)(lVar18 + 0x520) == '\0') {
                pcVar7 = "%d.%d.%d.%d";
              }
              else {
                FUN_1010d909c(lVar18,"Skips %d.%d.%d.%d for data connection, uses %s instead\n");
                pcVar7 = "%s";
              }
              FUN_1010e7270(param_1 + 0xc0,0x30,pcVar7);
              *(short *)(param_1 + 0xc6) = (short)uStack_184 + (short)(local_188 << 8);
              goto LAB_1010dc2e8;
            }
            break;
          }
          pcVar7 = pcVar7 + 1;
          cVar14 = *pcVar7;
        }
        FUN_1010d9258(lVar18,"Couldn\'t interpret the 227-response");
        uVar6 = 0xe;
        break;
      }
      if (iVar5 == 0) {
LAB_1010dc384:
        uVar6 = FUN_1010ddb50(param_1);
        break;
      }
      pcVar7 = "Bad PASV/EPSV response: %03d";
    }
LAB_1010dc164:
    FUN_1010d9258(lVar18,pcVar7);
    uVar6 = 0xd;
    break;
  case 0x1f:
  case 0x20:
    lVar17 = *param_1;
    lVar18 = *(long *)(lVar17 + 0x218);
    if ((local_1a4[0] != 0x7d) && (local_1a4[0] != 0x96)) {
      if ((iVar5 == 0x1f) && (local_1a4[0] == 0x1c2)) {
        uVar6 = 0;
        *(undefined4 *)(lVar18 + 0x18) = 2;
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        FUN_1010d9258(lVar17,"RETR response: %03d");
        uVar2 = 0x4e;
        if (local_1a4[0] != 0x226) {
          uVar2 = 0x13;
        }
        uVar3 = 0x13;
        if (iVar5 == 0x20) {
          uVar3 = uVar2;
        }
        uVar6 = (ulong)uVar3;
      }
      break;
    }
    if (((iVar5 == 0x1f) || (*(char *)(lVar17 + 0x4f3) != '\0')) || (0 < *(long *)(lVar18 + 0x20)))
    {
      lVar18 = *(long *)(lVar18 + 0x20);
      if (lVar18 < 0) {
        lVar18 = -1;
      }
    }
    else {
      pbVar9 = (byte *)_strstr((char *)(lVar17 + 0x908)," bytes");
      if (pbVar9 == (byte *)0x0) {
LAB_1010dc1e4:
        lVar18 = -1;
      }
      else {
        pbVar11 = pbVar9 + -1;
        if ((long)pbVar11 - (lVar17 + 0x908) != 1) {
          lVar18 = (lVar17 + 0x909) - (long)pbVar11;
          pbVar12 = pbVar11;
          do {
            pbVar11 = pbVar12;
            if (*pbVar12 == 0x28) break;
            if (9 < *pbVar12 - 0x30) goto LAB_1010dc1e4;
            pbVar11 = pbVar9 + -2;
            lVar18 = lVar18 + 1;
            pbVar9 = pbVar12;
            pbVar12 = pbVar11;
          } while (lVar18 != 0);
        }
        lVar18 = _strtol((char *)(pbVar11 + 1),(char **)0x0,0);
      }
    }
    lVar19 = *(long *)(lVar17 + 0x88);
    if (lVar19 < lVar18 && 0 < lVar19) {
      *(long *)(lVar17 + 0x78) = lVar19;
      FUN_1010d909c(lVar17,"Maxdownload = %ld\n");
      lVar18 = lVar19;
      if (iVar5 != 0x1f) {
LAB_1010dba6c:
        FUN_1010d909c(lVar17,"Getting file with size: %ld\n");
        lVar18 = lVar19;
      }
    }
    else {
      if (iVar5 != 0x1f) {
        if (*(char *)(lVar17 + 0x4f3) != '\0') {
          lVar18 = -1;
        }
        FUN_1010d909c(lVar17,"Maxdownload = %ld\n");
        lVar19 = lVar18;
        goto LAB_1010dba6c;
      }
      FUN_1010d909c(lVar17,"Maxdownload = %ld\n");
    }
    *(int *)((long)param_1 + 0x5e4) = iVar5;
    param_1[0xbd] = lVar18;
    if (*(char *)(lVar17 + 0x4f6) == '\0') {
LAB_1010dbe78:
      uVar6 = FUN_1010ddd44(param_1);
      break;
    }
    uVar6 = FUN_1010ddc80(param_1,local_170);
    if (((int)uVar6 != 0) || (local_170[0] != '\0')) break;
    FUN_1010d909c(lVar17,"Data conn was not available immediately\n");
    *(undefined4 *)(param_1 + 0xbc) = 0;
    goto LAB_1010dbe6c;
  case 0x21:
    lVar18 = *param_1;
    if (399 < local_1a4[0]) {
      FUN_1010d9258(lVar18,"Failed FTP upload: %0d");
      *(undefined4 *)(param_1 + 0xbc) = 0;
      uVar6 = 0x19;
      break;
    }
    *(undefined4 *)((long)param_1 + 0x5e4) = 0x21;
    if (*(char *)(lVar18 + 0x4f6) == '\0') goto LAB_1010dbe78;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    uVar6 = FUN_1010ddc80(param_1,local_170);
    if ((int)uVar6 != 0) break;
    if (local_170[0] != '\0') goto LAB_1010dbda4;
    FUN_1010d909c(lVar18,"Data conn was not available immediately\n");
LAB_1010dbe6c:
    uVar6 = 0;
    *(undefined1 *)((long)param_1 + 0x5c4) = 1;
  }
joined_r0x0001010db534:
  if (lVar20 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
LAB_1010dc47c:
  if ((param_1[0xbe] == 0) && (*pcVar7 != '/')) {
    uVar6 = FUN_1010fdc74(plVar1,"%s");
    if ((int)uVar6 == 0) {
      if (param_1[0xb4] != 0) {
        (*(code *)PTR__free_101873628)();
        param_1[0xb4] = 0;
      }
      param_1[0xb4] = (long)pcVar7;
      FUN_1010d909c(lVar18,"Entry path is \'%s\'\n");
      uVar6 = 0;
      *(long *)(lVar18 + 0x8a88) = param_1[0xb4];
      *(undefined4 *)(param_1 + 0xbc) = 10;
    }
    else {
      (*(code *)PTR__free_101873628)(pcVar7);
    }
    goto joined_r0x0001010db534;
  }
  if (param_1[0xb4] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[0xb4] = 0;
  }
  param_1[0xb4] = (long)pcVar7;
  FUN_1010d909c(lVar18,"Entry path is \'%s\'\n");
  *(long *)(lVar18 + 0x8a88) = param_1[0xb4];
  goto switchD_1010db3b4_default;
}




undefined8 FUN_1010dc5e8(undefined8 param_1,byte *param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((((param_3 < 4) || (9 < *param_2 - 0x30)) || (9 < param_2[1] - 0x30)) ||
     ((9 < param_2[2] - 0x30 || (param_2[3] != 0x20)))) {
    uVar2 = 0;
  }
  else {
    _strtol((char *)param_2,(char **)0x0,10);
    uVar1 = FUN_1010feee0();
    *param_4 = uVar1;
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_1010dc66c(long *param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *param_1;
  plVar1 = param_1 + 0xa6;
  if (param_2 == 0x14b) {
    if ((int)param_1[0xbc] == 3) {
      uVar2 = FUN_1010fdc74(plVar1,"PASS %s");
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0xbc) = 4;
      return 0;
    }
  }
  else {
    if (param_2 - 200U < 100) {
      uVar2 = FUN_1010dcd60(param_1);
      return uVar2;
    }
    if (param_2 == 0x14c) {
      if (*(long *)(lVar4 + 0x588) != 0) {
        uVar2 = FUN_1010fdc74(plVar1,"ACCT %s");
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(undefined4 *)(param_1 + 0xbc) = 5;
        return 0;
      }
      pcVar3 = "ACCT requested but none available";
      goto LAB_1010dc74c;
    }
  }
  if ((*(long *)(lVar4 + 0x590) != 0) && (*(char *)(lVar4 + 0x8a90) == '\0')) {
    uVar2 = FUN_1010fdc74(plVar1,"%s");
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(undefined1 *)(*param_1 + 0x8a90) = 1;
    *(undefined4 *)(param_1 + 0xbc) = 3;
    return 0;
  }
  pcVar3 = "Access denied: %03d";
LAB_1010dc74c:
  FUN_1010d9258(lVar4,pcVar3);
  return 0x43;
}




undefined8 FUN_1010dc7a8(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010fdc74(param_1 + 0xa6,"USER %s");
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xbc) = 3;
    *(undefined1 *)(*param_1 + 0x8a90) = 0;
  }
  return uVar1;
}




undefined8 FUN_1010dc818(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = *param_1;
  lVar7 = *(long *)(lVar6 + 0x218);
  plVar1 = param_1 + 0xa6;
  puVar2 = (undefined8 *)(lVar6 + 0x3d8);
  if (param_3 != 0xf) {
    puVar2 = (undefined8 *)(lVar6 + 0x3d0);
  }
  puVar8 = (undefined8 *)(lVar6 + 0x3e0);
  if (1 < param_3 - 0xdU) {
    puVar8 = puVar2;
  }
  puVar8 = (undefined8 *)*puVar8;
  if ((param_2 & 1) == 0) {
    iVar9 = *(int *)((long)param_1 + 0x5d4) + 1;
  }
  else {
    iVar9 = 0;
  }
  *(int *)((long)param_1 + 0x5d4) = iVar9;
  if (puVar8 != (undefined8 *)0x0) {
    if (iVar9 < 1) {
LAB_1010dc8a0:
      *(uint *)(param_1 + 0xbb) = (uint)(*(char *)*puVar8 == '*');
      uVar4 = FUN_1010fdc74(plVar1,"%s");
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(int *)(param_1 + 0xbc) = param_3;
      return 0;
    }
    iVar10 = 1;
    do {
      puVar8 = (undefined8 *)puVar8[1];
      bVar3 = iVar10 < iVar9;
      iVar10 = iVar10 + 1;
    } while (puVar8 != (undefined8 *)0x0 && bVar3);
    if (puVar8 != (undefined8 *)0x0) goto LAB_1010dc8a0;
  }
  if (param_3 == 0xd) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return 0;
    }
    if (param_1[0xbf] != -1) {
      FUN_1010d22cc(lVar6);
      uVar4 = FUN_1010dcdd8(param_1,param_1[0xbf]);
      return uVar4;
    }
    uVar4 = FUN_1010fdc74(plVar1,"SIZE %s");
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar5 = 0x18;
  }
  else {
    if (param_3 == 0xe) {
      uVar4 = FUN_1010dcf70(param_1,0);
      return uVar4;
    }
    if (param_3 == 0xf) {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x5c2) != '\0') {
LAB_1010dc9f4:
      uVar4 = FUN_1010dca08(param_1);
      return uVar4;
    }
    *(undefined4 *)(param_1 + 0xbb) = 0;
    *(uint *)((long)param_1 + 0x5dc) = (uint)(*(int *)(lVar6 + 0x4dc) == 2);
    if ((*(char *)((long)param_1 + 0x2c9) == '\0') || (param_1[0xb4] == 0)) {
      if ((int)param_1[0xb6] == 0) goto LAB_1010dc9f4;
      *(undefined4 *)((long)param_1 + 0x5d4) = 1;
    }
    else {
      *(undefined4 *)((long)param_1 + 0x5d4) = 0;
    }
    uVar4 = FUN_1010fdc74(plVar1,"CWD %s");
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar5 = 0x10;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  return 0;
}




undefined8 FUN_1010dca08(long *param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(*param_1 + 0x4f1) != '\0') || (*(int *)(*param_1 + 0x410) != 0)) &&
     (param_1[0xb7] != 0)) {
    uVar1 = FUN_1010fdc74(param_1 + 0xa6,"MDTM %s");
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0x12;
    }
    return uVar1;
  }
  uVar1 = FUN_1010dd164(param_1);
  return uVar1;
}




undefined8 FUN_1010dca80(long *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (99 < param_2 - 200U) {
    FUN_1010d9258(*param_1,"Couldn\'t set desired mode");
    return 0x11;
  }
  if (param_2 != 200) {
    FUN_1010d909c(*param_1,"Got a %03d response code instead of the assumed 200\n");
  }
  switch(param_3) {
  case 0x13:
    uVar4 = FUN_1010dd24c(param_1);
    return uVar4;
  case 0x14:
    if ((((*(int *)(*param_1 + 0x4d8) == 2) &&
         (pcVar5 = *(char **)(*param_1 + 0x8ab0), pcVar5 != (char *)0x0)) && (*pcVar5 != '\0')) &&
       (pcVar1 = _strchr(pcVar5,0x2f), pcVar1 != (char *)0x0)) {
      pcVar5 = (char *)(*(code *)PTR__strdup_101873638)(pcVar5);
      if (pcVar5 == (char *)0x0) {
        return 0x1b;
      }
      sVar2 = _strlen(pcVar5);
      if ((pcVar5[sVar2 - 1] != '/') && (pcVar1 = _strrchr(pcVar5,0x2f), pcVar1 != (char *)0x0)) {
        pcVar1[1] = '\0';
      }
    }
    else {
      pcVar5 = (char *)0x0;
    }
    lVar3 = FUN_1010e7298("%s%s%s");
    if (lVar3 == 0) {
      if (pcVar5 != (char *)0x0) {
        (*(code *)PTR__free_101873628)(pcVar5);
      }
      return 0x1b;
    }
    uVar4 = FUN_1010fdc74(param_1 + 0xa6,"%s");
    if (pcVar5 != (char *)0x0) {
      (*(code *)PTR__free_101873628)(pcVar5);
    }
    (*(code *)PTR__free_101873628)(lVar3);
    if ((int)uVar4 == 0) {
      *(undefined4 *)(param_1 + 0xbc) = 0x1f;
      return 0;
    }
    return uVar4;
  case 0x15:
    uVar4 = 0xd;
    break;
  case 0x16:
    uVar4 = 0xe;
    break;
  default:
    return 0;
  }
  uVar4 = FUN_1010dc818(param_1,1,uVar4);
  return uVar4;
}




undefined8 FUN_1010dccc0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x5b);
  if (*(byte *)(param_1 + 0x5b) == 0) {
    if (*(char *)((long)param_1 + 0x2cf) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x5b) = 1;
    }
  }
  uVar1 = FUN_1010fdc74(param_1 + 0xa6,"%s");
  if ((int)uVar1 == 0) {
    *(uint *)((long)param_1 + 0x5d4) = uVar2 ^ 1;
    *(undefined4 *)(param_1 + 0xbc) = 0x1e;
    FUN_1010d909c(*param_1,"Connect data stream passively\n");
  }
  return uVar1;
}




undefined8 FUN_1010dcd60(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x208) == '\0') {
    uVar1 = FUN_1010fdc74(param_1 + 0x530,"%s");
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = 9;
  }
  else {
    uVar1 = FUN_1010fdc74(param_1 + 0x530,"PBSZ %d");
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = 6;
  }
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  return 0;
}




undefined8 FUN_1010dcdd8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 0x4d0) != 0 && *(long *)(lVar5 + 0x4d0) < param_2) {
    FUN_1010d9258(lVar5,"Maximum file size exceeded");
    return 0x3f;
  }
  lVar6 = *(long *)(lVar5 + 0x218);
  *(long *)(lVar6 + 0x20) = param_2;
  lVar3 = *(long *)(lVar5 + 0x8ac8);
  if (lVar3 == 0) {
    uVar1 = FUN_1010fdc74(param_1 + 0xa6,"RETR %s");
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = 0x20;
  }
  else {
    if (param_2 == -1) {
      FUN_1010d909c(lVar5,"ftp server doesn\'t support SIZE\n");
      lVar4 = *(long *)(lVar6 + 0x20);
    }
    else if (lVar3 < 0) {
      lVar4 = -lVar3;
      if (param_2 < lVar4) goto LAB_1010dcebc;
      *(long *)(lVar6 + 0x20) = lVar4;
      *(long *)(lVar5 + 0x8ac8) = lVar3 + param_2;
    }
    else {
      if (param_2 < lVar3) {
LAB_1010dcebc:
        FUN_1010d9258(lVar5,"Offset (%ld) was beyond file size (%ld)");
        return 0x24;
      }
      lVar4 = param_2 - lVar3;
      *(long *)(lVar6 + 0x20) = lVar4;
    }
    if (lVar4 == 0) {
      FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      FUN_1010d909c(lVar5,"File already completely downloaded\n");
      *(undefined4 *)(lVar6 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return 0;
    }
    FUN_1010d909c(lVar5,"Instructs server to resume from offset %ld\n");
    uVar1 = FUN_1010fdc74(param_1 + 0xa6,"REST %ld");
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = 0x1b;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  return 0;
}




undefined8 FUN_1010dcf70(long *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *param_1;
  lVar10 = *(long *)(lVar8 + 0x218);
  plVar1 = (long *)(lVar8 + 0x8ac8);
  lVar4 = *plVar1;
  if ((lVar4 != 0 && param_2 == 0) || (0 < lVar4 && param_2 == 1)) {
    if (lVar4 < 0) {
      uVar3 = FUN_1010fdc74(param_1 + 0xa6,"SIZE %s");
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar6 = 0x19;
      goto LAB_1010dd120;
    }
    *(undefined1 *)(lVar8 + 0x4f4) = 1;
    if (((code *)param_1[0x75] != (code *)0x0) &&
       (iVar2 = (*(code *)param_1[0x75])(param_1[0x76],lVar4,0), iVar2 != 0)) {
      if (iVar2 != 2) {
        pcVar5 = "Could not seek stream";
LAB_1010dd13c:
        FUN_1010d9258(lVar8,pcVar5);
        return 0x1f;
      }
      lVar4 = 0;
      lVar7 = *plVar1;
      do {
        uVar9 = 0x4000;
        if (lVar7 - lVar4 < 0x4001) {
          uVar9 = FUN_1010feefc();
        }
        lVar7 = (*(code *)param_1[0x77])(lVar8 + 0x908,1,uVar9,param_1[0x78]);
        if (uVar9 <= lVar7 - 1U) {
          pcVar5 = "Failed to read data";
          goto LAB_1010dd13c;
        }
        lVar4 = lVar7 + lVar4;
        lVar7 = *plVar1;
      } while (lVar4 < lVar7);
    }
    lVar4 = *(long *)(lVar8 + 0x8ae8);
    if ((0 < lVar4) && (lVar4 = lVar4 - *plVar1, *(long *)(lVar8 + 0x8ae8) = lVar4, lVar4 < 1)) {
      FUN_1010d909c(lVar8,"File already completely uploaded\n");
      FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      *(undefined4 *)(lVar10 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return 0;
    }
  }
  pcVar5 = "APPE %s";
  if (*(char *)(lVar8 + 0x4f4) == '\0') {
    pcVar5 = "STOR %s";
  }
  uVar3 = FUN_1010fdc74(param_1 + 0xa6,pcVar5);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar6 = 0x21;
LAB_1010dd120:
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  return 0;
}




void FUN_1010dd164(long *param_1)

{
  char cVar1;
  long lVar2;
  char cVar3;
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 0x4ff) != '\0') && (param_1[0xb7] != 0)) {
    cVar1 = *(char *)(lVar2 + 0x4f3);
    cVar3 = 'A';
    if (cVar1 == '\0') {
      cVar3 = 'I';
    }
    if ((char)param_1[0xba] != cVar3) {
      *(undefined4 *)(*(long *)(lVar2 + 0x218) + 0x18) = 1;
      FUN_1010dd1b8(param_1,cVar1 != '\0',0x13);
      return;
    }
  }
  FUN_1010dd24c();
  return;
}




undefined8 FUN_1010dd1b8(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = 'A';
  if (param_2 == 0) {
    cVar2 = 'I';
  }
  if (*(char *)(param_1 + 0x5d0) == cVar2) {
    *(int *)(param_1 + 0x5e0) = (int)param_3;
    uVar1 = FUN_1010dca80(param_1,200,param_3);
    return uVar1;
  }
  uVar1 = FUN_1010fdc74(param_1 + 0x530,"TYPE %c");
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *(int *)(param_1 + 0x5e0) = (int)param_3;
    *(char *)(param_1 + 0x5d0) = cVar2;
  }
  return uVar1;
}




undefined8 FUN_1010dd24c(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(long *)(*param_1 + 0x218) + 0x18) == 1) && (param_1[0xb7] != 0)) {
    uVar1 = FUN_1010fdc74(param_1 + 0xa6,"SIZE %s");
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0x17;
    }
    return uVar1;
  }
  uVar1 = FUN_1010dd2c4(param_1);
  return uVar1;
}




undefined8 FUN_1010dd2c4(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(long *)(*param_1 + 0x218) + 0x18) != 0) && (param_1[0xb7] != 0)) {
    uVar1 = FUN_1010fdc74(param_1 + 0xa6,"REST %d");
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0x1a;
    }
    return uVar1;
  }
  uVar1 = FUN_1010dd338(param_1);
  return uVar1;
}




undefined8 FUN_1010dd338(long *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(int *)(*(long *)(lVar3 + 0x218) + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0xd;
    uVar1 = FUN_1010dc818(param_1,1,0xd);
    return uVar1;
  }
  if (*(char *)(lVar3 + 0x4f6) == '\0') {
    if (*(char *)(lVar3 + 0x50e) == '\0') {
      uVar1 = FUN_1010dccc0(param_1);
      return uVar1;
    }
    if (param_1[0xb7] == 0) {
      pcVar2 = "PRET %s";
    }
    else if (*(char *)(lVar3 + 0x501) == '\0') {
      pcVar2 = "PRET RETR %s";
    }
    else {
      pcVar2 = "PRET STOR %s";
    }
    uVar1 = FUN_1010fdc74(param_1 + 0xa6,pcVar2);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0x1d;
    }
    return uVar1;
  }
  uVar1 = FUN_1010dd444(param_1,0);
  return uVar1;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1010dd444(long *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  char cVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long *local_a00;
  socklen_t local_9f4;
  int local_9f0;
  char acStack_9e9 [1024];
  char acStack_5e9 [1025];
  sockaddr asStack_1e8 [8];
  char local_168 [256];
  long local_68;
  
  lVar16 = *(long *)PTR____stack_chk_guard_101444218;
  lVar12 = *param_1;
  local_9f0 = -1;
  local_68 = lVar16;
  _memset(local_168,0,0x100);
  pcVar13 = *(char **)(lVar12 + 0x598);
  local_a00 = (long *)0x0;
  if ((*(char **)(lVar12 + 0x598) == (char *)0x0) ||
     (sVar5 = _strlen(*(char **)(lVar12 + 0x598)), sVar5 < 2)) {
    uVar15 = 0;
    uVar17 = 0;
    pcVar6 = (char *)0x0;
LAB_1010dd528:
    local_9f4 = 0x80;
    iVar4 = _getsockname((int)param_1[0x3a],asStack_1e8,&local_9f4);
    if (iVar4 == 0) {
      if (asStack_1e8[0].sa_family == 0x1e) {
        pcVar13 = asStack_1e8[0].sa_data + 6;
      }
      else {
        pcVar13 = (char *)((ulong)asStack_1e8 | 4);
      }
      _inet_ntop((uint)asStack_1e8[0].sa_family,pcVar13,acStack_5e9,0x401);
      bVar1 = 0;
      pcVar13 = acStack_5e9;
LAB_1010dd594:
      FUN_1010d1744(param_1,pcVar13,0,&local_a00);
      if (local_a00 != (long *)0x0) {
        lVar14 = *local_a00;
        FUN_1010d1aa4(lVar12);
        if (lVar14 != 0) {
          if (pcVar6 != (char *)0x0) {
            (*(code *)PTR__free_101873628)(pcVar6);
          }
          local_9f0 = -1;
          do {
            iVar4 = FUN_1010eedbc(param_1,lVar14,0,&local_9f0);
            if (iVar4 == 0) {
              ___memcpy_chk(asStack_1e8,*(undefined8 *)(lVar14 + 0x20),
                            *(undefined4 *)(lVar14 + 0x10),0x80);
              local_9f4 = *(socklen_t *)(lVar14 + 0x10);
              uVar3 = uVar15;
              uVar2 = uVar15;
              goto joined_r0x0001010dd6bc;
            }
            piVar8 = ___error();
            lVar14 = *(long *)(lVar14 + 0x28);
          } while (lVar14 != 0);
          FUN_1010f2ce0(param_1,*piVar8);
          FUN_1010d9258(lVar12,"socket failure: %s");
          goto LAB_1010dd658;
        }
      }
      pcVar13 = "failed to resolve the address provided to PORT: %s";
    }
    else {
      piVar8 = ___error();
      FUN_1010f2ce0(param_1,*piVar8);
      pcVar13 = "getsockname() failed: %s";
    }
    FUN_1010d9258(lVar12,pcVar13);
    if (pcVar6 != (char *)0x0) {
      (*(code *)PTR__free_101873628)(pcVar6);
    }
  }
  else {
    sVar5 = _strlen(pcVar13);
    lVar14 = 0x2f;
    if (0x2d < sVar5) {
      lVar14 = sVar5 + 1;
    }
    pcVar6 = (char *)(*(code *)PTR__calloc_101873640)(lVar14,1);
    if (pcVar6 == (char *)0x0) {
      uVar9 = 0x1b;
      goto LAB_1010dd65c;
    }
    pcVar7 = pcVar13;
    if (*pcVar13 == ':') {
LAB_1010dd7c4:
      pcVar13 = _strchr(pcVar7,0x3a);
      if (pcVar13 == (char *)0x0) goto LAB_1010dd818;
      _strtoul(pcVar13 + 1,(char **)0x0,10);
      uVar2 = FUN_1010feec4();
      pcVar13 = _strchr(pcVar13,0x2d);
      uVar3 = uVar2;
      if (pcVar13 != (char *)0x0) {
        _strtoul(pcVar13 + 1,(char **)0x0,10);
        uVar3 = FUN_1010feec4();
      }
    }
    else {
      if (*pcVar13 == '[') {
        pcVar7 = _strchr(pcVar13,0x5d);
        if (pcVar7 != (char *)0x0) {
          pcVar13 = pcVar13 + 1;
          sVar5 = (long)pcVar7 - (long)pcVar13;
LAB_1010dd7bc:
          _strncpy(pcVar6,pcVar13,sVar5);
          goto LAB_1010dd7c4;
        }
      }
      else {
        pcVar7 = _strchr(pcVar13,0x3a);
        if ((pcVar7 != (char *)0x0) && (iVar4 = _inet_pton(0x1e,pcVar13,asStack_1e8), iVar4 != 1)) {
          sVar5 = (long)pcVar7 - (long)pcVar13;
          goto LAB_1010dd7bc;
        }
        _strcpy(pcVar6,pcVar13);
      }
LAB_1010dd818:
      uVar2 = 0;
      uVar3 = 0;
    }
    uVar15 = 0;
    if (uVar2 <= uVar3) {
      uVar15 = uVar2;
    }
    uVar17 = 0;
    if (uVar2 <= uVar3) {
      uVar17 = uVar3;
    }
    if (*pcVar6 == '\0') goto LAB_1010dd528;
    uVar10 = *(undefined4 *)(param_1[0xc] + 4);
    uVar9 = FUN_1010e5b9c(*(undefined8 *)(param_1[0xc] + 0x20));
    iVar4 = FUN_1010e5c70(uVar10,uVar9,(int)param_1[0x15],pcVar6,acStack_5e9,0x401);
    if (iVar4 == 0) {
      bVar1 = 1;
      pcVar13 = pcVar6;
      goto LAB_1010dd594;
    }
    if (iVar4 != 1) {
      if (iVar4 != 2) goto LAB_1010dd528;
      bVar1 = 1;
      pcVar13 = acStack_5e9;
      goto LAB_1010dd594;
    }
  }
LAB_1010dd658:
  uVar9 = 0x1e;
  goto LAB_1010dd65c;
joined_r0x0001010dd6bc:
  if (uVar17 < uVar2) goto LAB_1010dd7a4;
LAB_1010dd6c8:
  asStack_1e8[0].sa_data._0_2_ = (ushort)(uVar2 << 8) | (ushort)(uVar2 >> 8);
  iVar4 = _bind(local_9f0,asStack_1e8,local_9f4);
  if (iVar4 == 0) {
    local_9f4 = 0x80;
    iVar4 = _getsockname(local_9f0,asStack_1e8,&local_9f4);
    if (iVar4 != 0) goto LAB_1010dd8b0;
    iVar4 = _listen(local_9f0,1);
    if (iVar4 == 0) {
      FUN_1010d1414(lVar14,local_168,0x100);
      cVar11 = *(char *)((long)param_1 + 0x2d9);
      if (cVar11 == '\0') {
        if (*(char *)((long)param_1 + 0x2cf) == '\0') {
          cVar11 = '\0';
        }
        else {
          cVar11 = '\x01';
          *(undefined1 *)((long)param_1 + 0x2d9) = 1;
        }
      }
      goto joined_r0x0001010dd984;
    }
    piVar8 = ___error();
    FUN_1010f2ce0(param_1,*piVar8);
    FUN_1010d9258(lVar12,"socket failure: %s");
    FUN_1010ee3ec(param_1,local_9f0);
    goto LAB_1010dd658;
  }
  piVar8 = ___error();
  iVar4 = *piVar8;
  if ((bool)(bVar1 & iVar4 == 0x31)) goto LAB_1010dd724;
  if ((iVar4 != 0xd) && (iVar4 != 0x30)) {
    FUN_1010f2ce0(param_1);
    pcVar13 = "bind(port=%hu) failed: %s";
    goto LAB_1010dd8e4;
  }
  uVar3 = uVar3 + 1;
  uVar2 = uVar3 & 0xffff;
  goto joined_r0x0001010dd6bc;
LAB_1010dd7a4:
  pcVar13 = "bind() failed, we ran out of ports!";
LAB_1010dd8e4:
  FUN_1010d9258(lVar12,pcVar13);
  FUN_1010ee3ec(param_1,local_9f0);
  uVar9 = 0x1e;
  goto LAB_1010dd65c;
joined_r0x0001010dd984:
  if (param_2 == 2) goto LAB_1010dd9dc;
  if ((param_2 != 0) || (cVar11 != '\0')) {
    if ((asStack_1e8[0].sa_family != 2) && (param_2 == 1)) goto LAB_1010dd9dc;
    if ((asStack_1e8[0].sa_family == 0x1e) || (asStack_1e8[0].sa_family == 2)) {
      if (param_2 == 0) {
        uVar9 = FUN_1010fdc74(param_1 + 0xa6,"%s |%d|%s|%hu|");
        if ((int)uVar9 == 0) {
          uVar10 = 0;
          goto LAB_1010dd9e0;
        }
        FUN_1010f2cbc(uVar9);
        FUN_1010d9258(lVar12,"Failure sending EPRT command: %s");
        FUN_1010ee3ec(param_1,local_9f0);
        *(undefined4 *)((long)param_1 + 0x5d4) = 1;
        *(undefined4 *)(param_1 + 0xbc) = 0;
        goto LAB_1010dd65c;
      }
      if (param_2 == 1) {
        pcVar13 = local_168;
        pcVar6 = acStack_9e9;
        goto LAB_1010ddaa4;
      }
    }
  }
  param_2 = param_2 + 1;
  goto joined_r0x0001010dd984;
LAB_1010dd9dc:
  uVar10 = 2;
  goto LAB_1010dd9e0;
LAB_1010ddaa4:
  cVar11 = *pcVar13;
  if (cVar11 == '.') {
    cVar11 = ',';
  }
  else if (cVar11 == '\0') goto code_r0x0001010ddabc;
  *pcVar6 = cVar11;
  pcVar13 = pcVar13 + 1;
  pcVar6 = pcVar6 + 1;
  goto LAB_1010ddaa4;
LAB_1010dd724:
  FUN_1010f2ce0(param_1,0x31);
  FUN_1010d909c(lVar12,"bind(port=%hu) on non-local address failed: %s\n");
  local_9f4 = 0x80;
  iVar4 = _getsockname((int)param_1[0x3a],asStack_1e8,&local_9f4);
  bVar1 = 0;
  uVar2 = uVar15;
  uVar3 = uVar15;
  if (iVar4 != 0) {
LAB_1010dd8b0:
    piVar8 = ___error();
    FUN_1010f2ce0(param_1,*piVar8);
    pcVar13 = "getsockname() failed: %s";
    goto LAB_1010dd8e4;
  }
  goto LAB_1010dd6c8;
code_r0x0001010ddabc:
  *pcVar6 = '\0';
  FUN_1010e7270(pcVar6,0x14,",%d,%d");
  uVar9 = FUN_1010fdc74(param_1 + 0xa6,"%s %s");
  if ((int)uVar9 != 0) {
    FUN_1010f2cbc(uVar9);
    FUN_1010d9258(lVar12,"Failure sending PORT command: %s");
    FUN_1010ee3ec(param_1,local_9f0);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    goto LAB_1010dd65c;
  }
  uVar10 = 1;
LAB_1010dd9e0:
  *(undefined4 *)((long)param_1 + 0x5d4) = uVar10;
  if (*(int *)((long)param_1 + 0x1d4) != -1) {
    FUN_1010ee3ec(param_1);
  }
  uVar9 = 0;
  *(int *)((long)param_1 + 0x1d4) = local_9f0;
  *(undefined1 *)((long)param_1 + 0x2d2) = 1;
  *(undefined4 *)(param_1 + 0xbc) = 0x1c;
LAB_1010dd65c:
  if (lVar16 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}




void FUN_1010ddb50(long *param_1)

{
  int iVar1;
  
  FUN_1010d909c(*param_1,"Failed EPSV attempt. Disabling EPSV\n");
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(*param_1 + 0x8958) = 0;
  iVar1 = FUN_1010fdc74(param_1 + 0xa6,"%s");
  if (iVar1 == 0) {
    *(int *)((long)param_1 + 0x5d4) = *(int *)((long)param_1 + 0x5d4) + 1;
    *(undefined4 *)(param_1 + 0xbc) = 0x1e;
  }
  return;
}




undefined8 FUN_1010ddbc8(long *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_34 [4];
  
  lVar2 = *(long *)(*param_1 + 0x218);
  if ((param_2 == 0) || (uVar1 = FUN_1010da9a0(param_1,auStack_34), (int)uVar1 == 0)) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      if ((param_2 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x5a) = 1;
      }
    }
    else {
      FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    uVar1 = 0;
    *(undefined1 *)((long)param_1 + 0x5c1) = 1;
  }
  else if (*(int *)((long)param_1 + 0x1d4) != -1) {
    FUN_1010ee3ec(param_1);
    *(undefined4 *)((long)param_1 + 0x1d4) = 0xffffffff;
  }
  return uVar1;
}




undefined8 FUN_1010ddc80(long *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = '\0';
  FUN_1010d909c(lVar3,"Preparing for accepting server on data port\n");
  FUN_1010d231c(lVar3,9);
  lVar1 = FUN_1010dde0c(lVar3);
  if (lVar1 < 0) {
    FUN_1010d9258(lVar3,"Accept timeout occurred while waiting server connect");
    uVar2 = 0xc;
  }
  else {
    uVar2 = FUN_1010dde80(param_1,param_2);
    if ((int)uVar2 == 0) {
      if (*param_2 == '\0') {
        lVar1 = *(long *)(lVar3 + 0x368);
        if (lVar1 < 1) {
          lVar1 = 60000;
        }
        FUN_1010efbdc(lVar3,lVar1);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_1010ddfe0(param_1);
        if ((int)uVar2 == 0) {
          uVar2 = FUN_1010ddd44(param_1);
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}




undefined8 FUN_1010ddd44(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *param_1;
  puVar6 = *(undefined8 **)(lVar5 + 0x218);
  if ((char)param_1[0x46] != '\0') {
    FUN_1010d909c(lVar5,"Doing the SSL/TLS handshake on the data stream\n");
    uVar1 = FUN_101105158(param_1,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int *)((long)param_1 + 0x5e4) == 0x21) {
    *(undefined8 *)*puVar6 = 0;
    FUN_1010d22f4(lVar5,*(undefined8 *)(lVar5 + 0x8ae8));
    uVar4 = *puVar6;
    uVar1 = 0xffffffff;
    lVar5 = -1;
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
    lVar5 = param_1[0xbd];
    uVar2 = *puVar6;
    uVar1 = 1;
    uVar3 = 0xffffffff;
    uVar4 = 0;
  }
  FUN_1010eb3d0(param_1,uVar1,lVar5,0,uVar2,uVar3,uVar4);
  *(undefined1 *)(param_1 + 0xaa) = 1;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return 0;
}




long FUN_1010dde0c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 local_30 [16];
  
  lVar2 = *(long *)(param_1 + 0x368);
  if (lVar2 < 1) {
    lVar2 = 60000;
  }
  local_30 = FUN_1010d0e58();
  lVar1 = FUN_1010edb38(param_1,local_30,0);
  if (lVar1 == 0 || lVar2 <= lVar1) {
    lVar1 = FUN_1010d0e80(local_30._0_8_,local_30._8_8_,*(undefined8 *)(param_1 + 0x828),
                          *(undefined8 *)(param_1 + 0x830));
    lVar1 = lVar2 - lVar1;
    if (lVar1 == 0) {
      lVar1 = -1;
    }
  }
  return lVar1;
}




undefined4 FUN_1010dde80(undefined8 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int local_4c;
  undefined1 auStack_48 [8];
  
  uVar5 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x3a);
  uVar1 = *(undefined4 *)((long)param_1 + 0x1d4);
  *param_2 = 0;
  lVar4 = FUN_1010dde0c(uVar5);
  FUN_1010d909c(uVar5,"Checking for server connect\n");
  if (lVar4 < 0) {
    FUN_1010d9258(uVar5,"Accept timeout occurred while waiting server connect");
    uVar3 = 0xc;
  }
  else if (((param_1[0xa7] == 0) || ((char *)param_1[0xa6] == (char *)0x0)) ||
          (*(char *)param_1[0xa6] < '4')) {
    uVar2 = FUN_1010f37c8(uVar3,uVar1,0xffffffff,0);
    if (uVar2 != 0) {
      if (uVar2 == 0xffffffff) {
        FUN_1010d9258(uVar5,"Error while waiting for server connect");
        return 10;
      }
      if ((uVar2 >> 3 & 1) != 0) {
        FUN_1010d909c(uVar5,"Ready to accept data connection from server\n");
        *param_2 = 1;
        return 0;
      }
      if ((uVar2 & 1) != 0) {
        FUN_1010d909c(uVar5,"Ctrl conn has data while waiting for data conn\n");
        FUN_1010db124(auStack_48,param_1,&local_4c);
        if (399 < local_4c) {
          return 10;
        }
        return 8;
      }
    }
    uVar3 = 0;
  }
  else {
    FUN_1010d909c(uVar5,"There is negative response in cache while serv connect\n");
    FUN_1010db124(auStack_48,param_1,&local_4c);
    uVar3 = 10;
  }
  return uVar3;
}




void FUN_1010de114(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x80);
    if (0 < iVar2) {
      lVar3 = 0;
      while( true ) {
        if (*(long *)(lVar1 + lVar3 * 8) != 0) {
          (*(code *)PTR__free_101873628)();
          *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar3 * 8) = 0;
          iVar2 = *(int *)(param_1 + 0x80);
        }
        lVar3 = lVar3 + 1;
        if (iVar2 <= lVar3) break;
        lVar1 = *(long *)(param_1 + 0x78);
      }
      lVar1 = *(long *)(param_1 + 0x78);
    }
    (*(code *)PTR__free_101873628)(lVar1);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}




undefined8 FUN_1010de1c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int local_64;
  
  lVar9 = *param_1;
  lVar13 = *(long *)(lVar9 + 0x218);
  plVar1 = param_1 + 0xa6;
  plVar2 = (long *)(lVar9 + 0x8ab0);
  pcVar10 = (char *)*plVar2;
  *(undefined1 *)((long)param_1 + 0x5c1) = 0;
  *(undefined1 *)((long)param_1 + 0x5c3) = 0;
  if (*(int *)(lVar9 + 0x4d8) == 3) {
    if (*pcVar10 != '\0') {
      pcVar5 = _strrchr(pcVar10,0x2f);
      if (pcVar5 != (char *)0x0) {
        lVar6 = (*(code *)PTR__calloc_101873640)(1,8);
        param_1[0xb5] = lVar6;
        if (lVar6 == 0) {
          return 0x1b;
        }
        lVar6 = (long)pcVar5 - (long)pcVar10;
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        lVar12 = *param_1;
        uVar7 = FUN_1010feed4(lVar6);
        uVar7 = FUN_1010e5f30(lVar12,pcVar10,uVar7,0);
        *(undefined8 *)param_1[0xb5] = uVar7;
        if (*(long *)param_1[0xb5] == 0) goto LAB_1010de5a4;
        *(undefined4 *)(param_1 + 0xb6) = 1;
        pcVar10 = pcVar5 + 1;
      }
      goto LAB_1010de330;
    }
    *(undefined4 *)(param_1 + 0xb6) = 0;
LAB_1010de36c:
    lVar6 = 0;
    param_1[0xb7] = 0;
  }
  else {
    if (*(int *)(lVar9 + 0x4d8) == 2) {
      if (((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) ||
         (sVar8 = _strlen(pcVar10), pcVar10[sVar8 - 1] == '/')) goto LAB_1010de36c;
    }
    else {
      param_1[0xb6] = 0x500000000;
      lVar6 = (*(code *)PTR__calloc_101873640)(5,8);
      param_1[0xb5] = lVar6;
      if (lVar6 == 0) {
        return 0x1b;
      }
      iVar3 = FUN_1010eb4e8(pcVar10,"/");
      if (iVar3 == 0) {
        pcVar5 = _strchr(pcVar10,0x2f);
        if (pcVar5 == (char *)0x0) {
          if (pcVar10 == (char *)0x0) goto LAB_1010de36c;
        }
        else {
          do {
            if ((long)pcVar10 - *plVar2 < 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = (ulong)((int)param_1[0xb6] == 0);
            }
            if ((long)pcVar5 - (long)pcVar10 == 0) {
              if ((int)param_1[0xb6] == 0) {
                uVar7 = (*(code *)PTR__strdup_101873638)("/");
                iVar3 = (int)param_1[0xb6];
                *(undefined8 *)(param_1[0xb5] + (long)iVar3 * 8) = uVar7;
                *(int *)(param_1 + 0xb6) = iVar3 + 1;
                if (*(long *)(param_1[0xb5] + (long)iVar3 * 8) == 0) goto LAB_1010de594;
              }
            }
            else {
              uVar7 = FUN_1010fef00(((long)pcVar5 - (long)pcVar10) + uVar11);
              uVar7 = FUN_1010e5f30(*param_1,(long)pcVar10 - uVar11,uVar7,0);
              iVar3 = (int)param_1[0xb6];
              *(undefined8 *)(param_1[0xb5] + (long)iVar3 * 8) = uVar7;
              lVar12 = param_1[0xb5];
              lVar6 = *(long *)(lVar12 + (long)iVar3 * 8);
              if (lVar6 == 0) {
LAB_1010de594:
                FUN_1010d9258(lVar9,"no memory");
                goto LAB_1010de5a4;
              }
              iVar4 = FUN_1010de638(lVar6);
              if (iVar4 != 0) {
                (*(code *)PTR__free_101873628)(lVar6);
                goto LAB_1010de5e4;
              }
              *(int *)(param_1 + 0xb6) = iVar3 + 1;
              iVar4 = *(int *)((long)param_1 + 0x5b4);
              if (iVar4 <= iVar3 + 1) {
                *(int *)((long)param_1 + 0x5b4) = (int)((long)iVar4 << 1);
                lVar6 = (*(code *)PTR__realloc_101873630)(lVar12,(long)iVar4 << 4);
                if (lVar6 == 0) goto LAB_1010de5a4;
                param_1[0xb5] = lVar6;
              }
            }
            pcVar10 = pcVar5 + 1;
            pcVar5 = _strchr(pcVar10,0x2f);
          } while (pcVar5 != (char *)0x0);
        }
      }
      else {
        pcVar10 = pcVar10 + 1;
        uVar7 = (*(code *)PTR__strdup_101873638)("/");
        *(undefined8 *)param_1[0xb5] = uVar7;
        *(int *)(param_1 + 0xb6) = (int)param_1[0xb6] + 1;
      }
    }
LAB_1010de330:
    if (*pcVar10 == '\0') goto LAB_1010de36c;
    lVar6 = FUN_1010e5f30(*param_1,pcVar10,0,0);
    param_1[0xb7] = lVar6;
    if (lVar6 == 0) {
      FUN_1010de114(plVar1);
      FUN_1010d9258(lVar9,"no memory");
      return 0x1b;
    }
    iVar3 = FUN_1010de638(lVar6);
    if (iVar3 != 0) {
LAB_1010de5e4:
      FUN_1010de114(plVar1);
      return 3;
    }
  }
  if ((*(char *)(lVar9 + 0x501) != '\0' && lVar6 == 0) && (*(int *)(lVar13 + 0x18) == 0)) {
    FUN_1010d9258(lVar9,"Uploading to a URL without a file name!");
    return 3;
  }
  *(undefined1 *)((long)param_1 + 0x5c2) = 0;
  if (param_1[0xb9] == 0) {
    return 0;
  }
  lVar13 = FUN_1010e5f30(*param_1,*plVar2,0,&local_64);
  if (lVar13 != 0) {
    if ((char *)param_1[0xb7] == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      _strlen((char *)param_1[0xb7]);
      iVar3 = FUN_1010feed4();
    }
    iVar3 = local_64 - iVar3;
    local_64 = iVar3;
    _strlen((char *)param_1[0xb9]);
    iVar4 = FUN_1010feed4();
    if ((iVar3 == iVar4) && (iVar3 = FUN_1010eb504(lVar13,param_1[0xb9],(long)local_64), iVar3 != 0)
       ) {
      FUN_1010d909c(lVar9,"Request has same path as previous transfer\n");
      *(undefined1 *)((long)param_1 + 0x5c2) = 1;
    }
    (*(code *)PTR__free_101873628)(lVar13);
    return 0;
  }
LAB_1010de5a4:
  FUN_1010de114(plVar1);
  return 0x1b;
}




void FUN_1010de5f4(long param_1)

{
  if (param_1 != 0) {
    FUN_1010ec460(param_1);
    (*(code *)PTR__free_101873628)(param_1);
    return;
  }
  return;
}




bool FUN_1010de638(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = _strchr(param_1,0xd);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = _strchr(param_1,10);
    bVar1 = pcVar2 != (char *)0x0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




void FUN_1010de67c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x550 + lVar1) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x550 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x158);
  if (*(char *)(param_1 + 0x750) != '\0') {
    if (*(long *)(param_1 + 0x748) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x748) = 0;
    }
    *(undefined1 *)(param_1 + 0x750) = 0;
  }
  *(undefined8 *)(param_1 + 0x748) = 0;
  if (*(char *)(param_1 + 0x740) != '\0') {
    if (*(long *)(param_1 + 0x738) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x738) = 0;
    }
    *(undefined1 *)(param_1 + 0x740) = 0;
  }
  *(undefined8 *)(param_1 + 0x738) = 0;
  return;
}




undefined8 FUN_1010de718(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    FUN_1010efbdc(param_1,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_1010efe70(*(long *)(param_1 + 0x60),param_1);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_1010f19a0();
    }
    lVar1 = *(long *)(param_1 + 0x8a80);
    if (lVar1 != 0) {
      FUN_1010ef0ec(lVar1,0);
      *(long *)(param_1 + 0x8a80) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c10) = 0;
    if (*(char *)(param_1 + 0x8aba) != '\0') {
      (*(code *)PTR__free_101873628)(*(undefined8 *)(param_1 + 0x8ac0));
    }
    if (*(long *)(param_1 + 0x8aa8) != 0) {
      (*(code *)PTR__free_101873628)();
      *(long *)(param_1 + 0x8aa8) = 0;
    }
    *(undefined8 *)(param_1 + 0x8ab0) = 0;
    if (*(long *)(param_1 + 0x218) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x218) = 0;
    }
    if (*(long *)(param_1 + 0x1f8) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
    FUN_101105540(param_1);
    if (*(long *)(param_1 + 0x8920) != 0) {
      (*(code *)PTR__free_101873628)();
      *(long *)(param_1 + 0x8920) = 0;
    }
    if (*(long *)(param_1 + 0x8950) != 0) {
      (*(code *)PTR__free_101873628)();
      *(long *)(param_1 + 0x8950) = 0;
    }
    FUN_1011056ac(param_1);
    if (*(long *)(param_1 + 0x1f8) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
    if (*(char *)(param_1 + 0x750) != '\0') {
      if (*(long *)(param_1 + 0x748) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x748) = 0;
      }
      *(undefined1 *)(param_1 + 0x750) = 0;
    }
    *(undefined8 *)(param_1 + 0x748) = 0;
    if (*(char *)(param_1 + 0x740) != '\0') {
      if (*(long *)(param_1 + 0x738) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x738) = 0;
      }
      *(undefined1 *)(param_1 + 0x740) = 0;
    }
    *(undefined8 *)(param_1 + 0x738) = 0;
    if (*(long *)(param_1 + 0x8f8) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x8f8) = 0;
    }
    FUN_1010d4b00(param_1,1);
    FUN_1010f2b34(param_1);
    if (*(long *)(param_1 + 0x8b70) != 0) {
      (*(code *)PTR__free_101873628)();
      *(long *)(param_1 + 0x8b70) = 0;
    }
    if (*(long *)(param_1 + 0x8b78) != 0) {
      (*(code *)PTR__free_101873628)();
      *(long *)(param_1 + 0x8b78) = 0;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_1010f2820(param_1,1,2);
      *(int *)(*(long *)(param_1 + 0x70) + 4) = *(int *)(*(long *)(param_1 + 0x70) + 4) + -1;
      FUN_1010f2868(param_1,1);
    }
    FUN_1010de67c(param_1);
    (*(code *)PTR__free_101873628)(param_1);
  }
  return 0;
}




undefined8 FUN_1010de9a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__fwrite_101444270;
  puVar2 = PTR____stdinp_101444228;
  param_1[4] = *(undefined8 *)PTR____stdoutp_101444230;
  puVar3 = PTR__fread_101444260;
  puVar1 = PTR____stderrp_101444220;
  param_1[5] = *(undefined8 *)puVar2;
  uVar5 = *(undefined8 *)puVar1;
  param_1[0x12] = puVar4;
  param_1[0x15] = puVar3;
  param_1[0x4c] = 5;
  param_1[3] = 0x438;
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0xf] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x2c] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)((long)param_1 + 0x4ac) = 1;
  *(undefined1 *)((long)param_1 + 0x2ec) = 1;
  *(undefined1 *)((long)param_1 + 0x2ed) = 1;
  *(undefined1 *)((long)param_1 + 0x2ee) = 0;
  *(undefined4 *)(param_1 + 0x57) = 1;
  param_1[0x51] = 0x3c;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[9] = 1;
  param_1[10] = 1;
  *(undefined1 *)((long)param_1 + 0x2d7) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((long)param_1 + 0x221) = 1;
  param_1[0x61] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  param_1[99] = 0x1a4;
  param_1[100] = 0x1ed;
  param_1[0x92] = 0xffffffffffffffff;
  param_1[0x93] = 0xfffffffff3fffbef;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9f] = 0x3c;
  param_1[0x9e] = 0x3c;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  *(undefined1 *)((long)param_1 + 0x509) = 1;
  param_1[0xa2] = 1000;
  return 0;
}




undefined8 FUN_1010deaac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)PTR__calloc_101873640)(1,0x8c18);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x8c10) = 0xc0dedbad;
    lVar2 = (*(code *)PTR__malloc_101873620)(0x100);
    *(long *)(lVar1 + 0x8f8) = lVar2;
    if (lVar2 != 0) {
      FUN_1010de9a4(lVar1 + 0x220);
      *(undefined8 *)(lVar1 + 0x8f0) = 0;
      *(undefined8 *)(lVar1 + 0x900) = 0x100;
      *(uint *)(lVar1 + 0x7a8) = *(uint *)(lVar1 + 0x7a8) | 0x10;
      *(undefined8 *)(lVar1 + 0x8910) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 0x8af0) = 0;
      *(undefined8 *)(lVar1 + 0x8b08) = 0;
      *(undefined8 *)(lVar1 + 0x6f0) = 0;
      *(undefined8 *)(lVar1 + 0x720) = 5;
      *param_1 = lVar1;
      return 0;
    }
    FUN_1010de67c(lVar1);
    (*(code *)PTR__free_101873628)(lVar1);
  }
  return 0x1b;
}




ulong FUN_1010deb88(long param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  char *pcVar14;
  
  if (10000 < param_2) {
    if (0x4e2a < param_2) {
      if (param_2 < 0x75a3) {
        if (param_2 < 0x4ee4) {
          if (0x4ea1 < param_2) {
            if (0x4ec2 < param_2) {
              if (param_2 == 0x4ec3) {
                *(ulong *)(param_1 + 0x308) = *param_3;
                return 0;
              }
              if (param_2 == 0x4ec7) {
                *(ulong *)(param_1 + 0x298) = *param_3;
                return 0;
              }
              return 0x30;
            }
            if (0x4ead < param_2) {
              switch(param_2) {
              case 0x4eae:
                *(ulong *)(param_1 + 0x330) = *param_3;
                return 0;
              case 0x4eaf:
                *(ulong *)(param_1 + 0x338) = *param_3;
                return 0;
              case 0x4eb0:
                *(ulong *)(param_1 + 0x340) = *param_3;
                return 0;
              default:
                return 0x30;
              case 0x4eb4:
                *(ulong *)(param_1 + 0x2f8) = *param_3;
                return 0;
              }
            }
            if (param_2 == 0x4ea2) {
              *(ulong *)(param_1 + 0x2f0) = *param_3;
              return 0;
            }
            return 0x30;
          }
          if (param_2 < 0x4e58) {
            if (param_2 == 0x4e2b) {
              uVar12 = *param_3;
              *(ulong *)(param_1 + 0x2b0) = uVar12;
              if (uVar12 != 0) {
                *(undefined4 *)(param_1 + 0x2d4) = 1;
                return 0;
              }
              *(undefined4 *)(param_1 + 0x2d4) = 0;
              *(undefined **)(param_1 + 0x2b0) = PTR__fwrite_101444270;
              return 0;
            }
            if (param_2 == 0x4e2c) {
              uVar12 = *param_3;
              *(ulong *)(param_1 + 0x2c8) = uVar12;
              if (uVar12 != 0) {
                *(undefined4 *)(param_1 + 0x2d0) = 1;
                return 0;
              }
              *(undefined4 *)(param_1 + 0x2d0) = 0;
              *(undefined **)(param_1 + 0x2c8) = PTR__fread_101444260;
              return 0;
            }
            return 0x30;
          }
          if (0x4e7d < param_2) {
            if (param_2 == 0x4e7e) {
              *(ulong *)(param_1 + 0x2e8) = *param_3;
              return 0;
            }
            if (param_2 == 0x4e8c) {
              return 4;
            }
            return 0x30;
          }
          if (param_2 != 0x4e58) {
            if (param_2 == 0x4e6f) {
              *(ulong *)(param_1 + 0x2b8) = *param_3;
              return 0;
            }
            return 0x30;
          }
          uVar12 = *param_3;
          *(ulong *)(param_1 + 0x2d8) = uVar12;
        }
        else {
          if (param_2 < 0x4ef0) {
            switch(param_2) {
            case 0x4ee4:
              *(ulong *)(param_1 + 0x2c0) = *param_3;
              return 0;
            default:
              return 0x30;
            case 0x4ee6:
              *(ulong *)(param_1 + 0x6e0) = *param_3;
              return 0;
            case 0x4ee7:
              *(ulong *)(param_1 + 0x6e8) = *param_3;
              return 0;
            case 0x4ee8:
              *(ulong *)(param_1 + 0x6f0) = *param_3;
              return 0;
            }
          }
          if (param_2 == 0x4ef0) {
            *(ulong *)(param_1 + 0x318) = *param_3;
            return 0;
          }
          if (param_2 != 0x4efb) {
            return 0x30;
          }
          uVar12 = *param_3;
          *(ulong *)(param_1 + 0x2e0) = uVar12;
        }
        if (uVar12 == 0) {
          *(undefined1 *)(param_1 + 0x7a0) = 0;
          return 0;
        }
        *(undefined1 *)(param_1 + 0x7a0) = 1;
        return 0;
      }
      if (0x75c0 < param_2) {
        if (param_2 == 0x75c1) {
          *(ulong *)(param_1 + 0x398) = *param_3;
          return 0;
        }
        if (param_2 == 0x75c2) {
          *(ulong *)(param_1 + 0x3a0) = *param_3;
          return 0;
        }
        return 0x30;
      }
      switch(param_2) {
      case 0x75a3:
        goto switchD_1010debd0_caseD_e;
      case 0x75a4:
        goto switchD_1010debd0_caseD_15;
      case 0x75a5:
        goto switchD_1010debd0_caseD_72;
      default:
        return 0x30;
      case 0x75a8:
        goto switchD_1010debd0_caseD_3c;
      }
    }
    if (0x2748 < param_2) {
      if (0x27b3 < param_2) {
        switch(param_2) {
        case 0x27b4:
          *(ulong *)(param_1 + 0x310) = *param_3;
          return 0;
        case 0x27b5:
          goto switchD_1010dedd8_caseD_27b5;
        default:
          return 0x30;
        case 0x27b8:
          *(ulong *)(param_1 + 0x328) = *param_3;
          return 0;
        case 0x27b9:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x620) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x620) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x620) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27ba:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x628) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x628) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x628) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27bd:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x630) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x630) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x630) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27be:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x638) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x638) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x638) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27bf:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x648) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x648) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x648) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27c0:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x650) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x650) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x650) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27c1:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x658) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x658) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x658) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27ca:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x678) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x678) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x678) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27cb:
          *(ulong *)(param_1 + 0x6c0) = *param_3;
          return 0;
        case 0x27ce:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x660) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x660) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x660) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27cf:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x668) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x668) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x668) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27d0:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x670) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x670) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x670) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27d3:
          *(ulong *)(param_1 + 600) = *param_3;
          return 0;
        case 0x27d9:
          *(ulong *)(param_1 + 0x8b20) = *param_3;
          return 0;
        case 0x27da:
          *(ulong *)(param_1 + 0x6f8) = *param_3;
          return 0;
        case 0x27db:
          uVar12 = *param_3;
          *(ulong *)(param_1 + 0x408) = uVar12;
          *(ulong *)(param_1 + 0x760) = uVar12;
          return 0;
        case 0x27e1:
          *(ulong *)(param_1 + 800) = *param_3;
          return 0;
        case 0x27e3:
          uVar12 = FUN_1010f2f94(param_1,*param_3);
          return uVar12;
        case 0x27e9:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x680) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x680) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x680) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27ec:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x688) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x688) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x688) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27ed:
          uVar12 = FUN_1010f2f9c(param_1,*param_3);
          return uVar12;
        case 0x27ee:
          uVar12 = FUN_1010f2fa4(param_1,*param_3);
          return uVar12;
        case 0x27ef:
          uVar12 = FUN_1010f2fac(param_1,*param_3);
          return uVar12;
        case 0x27f0:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x640) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x640) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x640) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27f4:
          *(ulong *)(param_1 + 0x3b8) = *param_3;
          return 0;
        case 0x27f6:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x5f8) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x5f8) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x5f8) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x27f7:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x690) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x690) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x690) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        }
      }
      if (0x2792 < param_2) {
        if (param_2 < 0x2796) {
          if (param_2 == 0x2793) {
            *(ulong *)(param_1 + 0x350) = *param_3;
            return 0;
          }
          return 0x30;
        }
        if (0x27a2 < param_2) {
          if (param_2 != 0x27a3) {
            if (param_2 == 0x27a5) {
              *(ulong *)(param_1 + 0x300) = *param_3;
              return 0;
            }
            return 0x30;
          }
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x590) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x590) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x590) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        }
        if (param_2 == 0x2796) {
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x588) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x588) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x588) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        }
        if (param_2 != 0x2797) {
          return 0x30;
        }
        uVar12 = *param_3;
        if (uVar12 != 0) {
          iVar4 = FUN_1010f659c(uVar12,"ALL");
          if (iVar4 == 0) {
            iVar4 = FUN_1010f659c(uVar12,"SESS");
            if (iVar4 == 0) {
              iVar4 = FUN_1010f659c(uVar12,"FLUSH");
              if (iVar4 != 0) {
                FUN_1010d4b00(param_1,0);
                return 0;
              }
              iVar4 = FUN_1010f659c(uVar12,"RELOAD");
              if (iVar4 == 0) {
                if (*(long *)(param_1 + 0x768) == 0) {
                  uVar9 = FUN_1010d3374(param_1,0,0,1);
                  *(undefined8 *)(param_1 + 0x768) = uVar9;
                }
                lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
                if (lVar7 != 0) {
                  if (*(long *)(param_1 + 0x768) != 0) {
                    FUN_1010f2820(param_1,2,2);
                    iVar4 = FUN_1010f6624("Set-Cookie:",lVar7,0xb);
                    lVar11 = lVar7;
                    if (iVar4 != 0) {
                      lVar11 = lVar7 + 0xb;
                    }
                    FUN_1010d3564(param_1,*(undefined8 *)(param_1 + 0x768),iVar4 != 0,lVar11,0,0);
                    FUN_1010f2868(param_1,2);
                    (*(code *)PTR__free_101873628)(lVar7);
                    return 0;
                  }
                  (*(code *)PTR__free_101873628)(lVar7);
                  return 0x1b;
                }
                return 0x1b;
              }
              FUN_1010d32c4(param_1);
              return 0;
            }
            FUN_1010f2820(param_1,2,2);
            FUN_1010d48f8(*(undefined8 *)(param_1 + 0x768));
          }
          else {
            FUN_1010f2820(param_1,2,2);
            FUN_1010d4868(*(undefined8 *)(param_1 + 0x768));
          }
          FUN_1010f2868(param_1,2);
          return 0;
        }
        return 0;
      }
      if (param_2 < 0x2756) {
        switch(param_2) {
        case 0x2749:
          *(ulong *)(param_1 + 0x348) = *param_3;
          return 0;
        default:
          return 0x30;
        case 0x274e:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x578) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x578) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x578) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x274f:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x5b8) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x5b8) = 0;
          }
          if (uVar12 == 0) {
            lVar7 = 0;
            uVar12 = 0;
          }
          else {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 == 0) {
              lVar7 = *(long *)(param_1 + 0x5b8);
              uVar12 = 0x1b;
            }
            else {
              uVar12 = 0;
              *(long *)(param_1 + 0x5b8) = lVar7;
            }
          }
          *(bool *)(param_1 + 0x509) = lVar7 != 0;
          return uVar12;
        case 0x2751:
          goto switchD_1010ded00_caseD_2751;
        }
      }
      if (param_2 < 0x276d) {
        switch(param_2) {
        case 0x2756:
          *(ulong *)(param_1 + 0x400) = *param_3;
          return 0;
        default:
          return 0x30;
        case 0x275c:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x610) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x610) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x610) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x275d:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x608) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x608) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x608) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x2762:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x568) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x568) = 0;
          }
          if (uVar12 == 0) {
            uVar5 = 0;
          }
          else {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 == 0) {
              uVar5 = 0x1b;
            }
            else {
              uVar5 = 0;
              *(long *)(param_1 + 0x568) = lVar7;
            }
          }
          lVar7 = FUN_1010d3374(param_1,0,*(undefined8 *)(param_1 + 0x768),
                                *(undefined1 *)(param_1 + 0x3c9));
          uVar1 = 0x1b;
          if (lVar7 != 0) {
            uVar1 = uVar5;
          }
          *(long *)(param_1 + 0x768) = lVar7;
          return (ulong)uVar1;
        case 0x2763:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x600) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x600) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x600) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x2766:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x558) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x558) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x558) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x2767:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x5a0) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x5a0) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x5a0) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x2768:
          uVar12 = *param_3;
          if (*(long *)(param_1 + 0x5b0) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x5b0) = 0;
          }
          if (uVar12 != 0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x5b0) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x2769:
          goto switchD_1010def44_caseD_2769;
        }
      }
      if (param_2 < 0x2786) {
        switch(param_2) {
        case 0x276d:
          *(ulong *)(param_1 + 0x3e0) = *param_3;
          return 0;
        default:
          return 0x30;
        case 0x276f:
          *(ulong *)(param_1 + 0x228) = *param_3;
          return 0;
        case 0x2771:
        case 0x277d:
          return 4;
        case 0x2774:
          goto switchD_1010df184_caseD_2774;
        case 0x2776:
          pcVar14 = (char *)*param_3;
          if ((pcVar14 != (char *)0x0) && (*pcVar14 == '\0')) {
            pcVar14 = "deflate, gzip";
          }
          if (*(long *)(param_1 + 0x580) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x580) = 0;
          }
          if (pcVar14 != (char *)0x0) {
            lVar7 = (*(code *)PTR__strdup_101873638)(pcVar14);
            if (lVar7 != 0) {
              *(long *)(param_1 + 0x580) = lVar7;
              return 0;
            }
            return 0x1b;
          }
          return 0;
        case 0x2777:
          *(ulong *)(param_1 + 0x4b8) = *param_3;
          return 0;
        case 0x2778:
          *(ulong *)(param_1 + 0x4c0) = *param_3;
          return 0;
        }
      }
      if (param_2 != 0x2786) {
        return 0x30;
      }
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x5c0) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x5c0) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x5c0) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    }
    switch(param_2) {
    case 0x2711:
      *(ulong *)(param_1 + 0x240) = *param_3;
      return 0;
    case 0x2712:
      if (*(char *)(param_1 + 0x740) != '\0') {
        if (*(long *)(param_1 + 0x738) != 0) {
          (*(code *)PTR__free_101873628)();
          *(undefined8 *)(param_1 + 0x738) = 0;
        }
        *(undefined1 *)(param_1 + 0x740) = 0;
      }
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x5e0) != 0) {
        (*(code *)PTR__free_101873628)(*(long *)(param_1 + 0x5e0));
        *(undefined8 *)(param_1 + 0x5e0) = 0;
      }
      lVar7 = 0;
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_1 + 0x5e0);
          uVar12 = 0x1b;
        }
        else {
          uVar12 = 0;
          *(long *)(param_1 + 0x5e0) = lVar7;
        }
      }
      *(long *)(param_1 + 0x738) = lVar7;
      return uVar12;
    default:
      goto switchD_1010debd0_caseD_ac;
    case 0x2714:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x5c8) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x5c8) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x5c8) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    case 0x2715:
      uVar12 = FUN_1010e1bac(*param_3,param_1 + 0x630,param_1 + 0x638);
      return uVar12;
    case 0x2716:
      uVar12 = FUN_1010e1bac(*param_3,param_1 + 0x648,param_1 + 0x650);
      return uVar12;
    case 0x2717:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x5d0) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x5d0) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x5d0) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    case 0x2719:
      *(ulong *)(param_1 + 0x248) = *param_3;
      return 0;
    case 0x271a:
      *(ulong *)(param_1 + 0x230) = *param_3;
      return 0;
    case 0x271f:
      *(ulong *)(param_1 + 0x290) = *param_3;
      if (*(long *)(param_1 + 0x6a0) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x6a0) = 0;
      }
      uVar12 = 0;
      break;
    case 0x2720:
      if (*(char *)(param_1 + 0x750) != '\0') {
        if (*(long *)(param_1 + 0x748) != 0) {
          (*(code *)PTR__free_101873628)();
          *(undefined8 *)(param_1 + 0x748) = 0;
        }
        *(undefined1 *)(param_1 + 0x750) = 0;
      }
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x5d8) != 0) {
        (*(code *)PTR__free_101873628)(*(long *)(param_1 + 0x5d8));
        *(undefined8 *)(param_1 + 0x5d8) = 0;
      }
      lVar7 = 0;
      if (uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_1 + 0x5d8);
          uVar12 = 0x1b;
        }
        else {
          uVar12 = 0;
          *(long *)(param_1 + 0x5d8) = lVar7;
        }
      }
      *(long *)(param_1 + 0x748) = lVar7;
      return uVar12;
    case 0x2721:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x598) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x598) = 0;
      }
      if (uVar12 == 0) {
        lVar7 = 0;
        uVar12 = 0;
      }
      else {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_1 + 0x598);
          uVar12 = 0x1b;
        }
        else {
          uVar12 = 0;
          *(long *)(param_1 + 0x598) = lVar7;
        }
      }
      *(bool *)(param_1 + 0x4f6) = lVar7 != 0;
      return uVar12;
    case 0x2722:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x618) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x618) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x618) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    case 0x2726:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x560) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x560) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x560) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    case 0x2727:
      *(ulong *)(param_1 + 0x3b0) = *param_3;
      return 0;
    case 0x2728:
      *(ulong *)(param_1 + 0x3c0) = *param_3;
      uVar6 = 3;
      goto LAB_1010e0334;
    case 0x2729:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x550) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x550) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x550) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    case 0x272a:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x5a8) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x5a8) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x5a8) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    case 0x272c:
      *(ulong *)(param_1 + 0x3d0) = *param_3;
      return 0;
    case 0x272d:
      *(ulong *)(param_1 + 0x250) = *param_3;
      return 0;
    case 0x272f:
      if (*param_3 == 0) {
        return 0;
      }
      lVar7 = FUN_1010f6e28(*(undefined8 *)(param_1 + 0x758));
      if (lVar7 != 0) {
        *(long *)(param_1 + 0x758) = lVar7;
        return 0;
      }
      FUN_1010f6eb4(*(undefined8 *)(param_1 + 0x758));
      *(undefined8 *)(param_1 + 0x758) = 0;
      return 0x1b;
    case 0x2734:
      uVar12 = *param_3;
      if (*(long *)(param_1 + 0x570) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x570) = 0;
      }
      if (uVar12 != 0) {
        lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x570) = lVar7;
          return 0;
        }
        return 0x1b;
      }
      return 0;
    case 0x2735:
      uVar12 = *param_3;
      *(ulong *)(param_1 + 0x220) = uVar12;
      if (uVar12 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)PTR____stderrp_101444220;
      return 0;
    case 0x2737:
      *(ulong *)(param_1 + 0x3d8) = *param_3;
      return 0;
    }
    goto LAB_1010e123c;
  }
  switch(param_2) {
  case 3:
    *(ulong *)(param_1 + 0x260) = *param_3;
    return 0;
  case 0xd:
    *(ulong *)(param_1 + 0x358) = *param_3 * 1000;
    return 0;
  case 0xe:
switchD_1010debd0_caseD_e:
    *(ulong *)(param_1 + 0x380) = *param_3;
    return 0;
  case 0x13:
    *(ulong *)(param_1 + 0x388) = *param_3;
    return 0;
  case 0x14:
    *(ulong *)(param_1 + 0x390) = *param_3;
    return 0;
  case 0x15:
switchD_1010debd0_caseD_15:
    *(ulong *)(param_1 + 0x3a8) = *param_3;
    return 0;
  case 0x1b:
    *(bool *)(param_1 + 0x3ca) = *param_3 != 0;
    return 0;
  case 0x20:
    *(ulong *)(param_1 + 0x430) = *param_3;
    return 0;
  case 0x21:
    *(int *)(param_1 + 0x410) = (int)*param_3;
    return 0;
  case 0x22:
    *(ulong *)(param_1 + 0x418) = *param_3;
    return 0;
  case 0x29:
    *(bool *)(param_1 + 0x508) = *param_3 != 0;
    return 0;
  case 0x2a:
    *(bool *)(param_1 + 0x4fc) = *param_3 != 0;
    return 0;
  case 0x2b:
    uVar12 = *param_3;
    *(bool *)(param_1 + 0x4f7) = uVar12 != 0;
    if (uVar12 != 0) {
      *(uint *)(param_1 + 0x7a8) = *(uint *)(param_1 + 0x7a8) | 0x10;
      return 0;
    }
    *(uint *)(param_1 + 0x7a8) = *(uint *)(param_1 + 0x7a8) & 0xffffffef;
    return 0;
  case 0x2c:
    *(bool *)(param_1 + 0x4ff) = *param_3 != 0;
    return 0;
  case 0x2d:
    *(bool *)(param_1 + 0x4f8) = *param_3 != 0;
    return 0;
  case 0x2e:
  case 0x36:
    uVar12 = *param_3;
    *(bool *)(param_1 + 0x501) = uVar12 != 0;
    if (uVar12 == 0) {
LAB_1010e0dd4:
      *(undefined4 *)(param_1 + 0x420) = 1;
      return 0;
    }
    uVar6 = 4;
    goto LAB_1010e0334;
  case 0x2f:
    if (*param_3 == 0) goto LAB_1010e0dd4;
    uVar6 = 2;
LAB_1010e0334:
    *(undefined4 *)(param_1 + 0x420) = uVar6;
    *(undefined1 *)(param_1 + 0x4ff) = 0;
    return 0;
  case 0x30:
    *(bool *)(param_1 + 0x4f5) = *param_3 != 0;
    return 0;
  case 0x32:
    *(bool *)(param_1 + 0x4f4) = *param_3 != 0;
    return 0;
  case 0x33:
    *(int *)(param_1 + 0x504) = (int)*param_3;
    return 0;
  case 0x34:
    *(bool *)(param_1 + 0x4f9) = *param_3 != 0;
    return 0;
  case 0x35:
    *(bool *)(param_1 + 0x4f3) = *param_3 != 0;
    return 0;
  case 0x3a:
    *(bool *)(param_1 + 0x4fe) = *param_3 != 0;
    return 0;
  case 0x3b:
    *(ulong *)(param_1 + 0x238) = *param_3;
    return 0;
  case 0x3c:
switchD_1010debd0_caseD_3c:
    uVar12 = *param_3;
    if ((*(long *)(param_1 + 0x2a0) < (long)uVar12) &&
       (*(long *)(param_1 + 0x290) == *(long *)(param_1 + 0x6a0))) {
      if (*(long *)(param_1 + 0x290) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x6a0) = 0;
      }
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
    *(ulong *)(param_1 + 0x2a0) = uVar12;
    return 0;
  case 0x3d:
    *(bool *)(param_1 + 0x4f2) = *param_3 != 0;
    return 0;
  case 0x40:
    *(bool *)(param_1 + 0x440) = *param_3 != 0;
    return 0;
  case 0x44:
    *(ulong *)(param_1 + 0x280) = *param_3;
    return 0;
  case 0x45:
    *(bool *)(param_1 + 0x4f1) = *param_3 != 0;
    return 0;
  case 0x47:
    *(ulong *)(param_1 + 0x720) = *param_3;
    return 0;
  case 0x4a:
    *(bool *)(param_1 + 0x50b) = *param_3 != 0;
    return 0;
  case 0x4b:
    *(bool *)(param_1 + 0x50a) = *param_3 != 0;
    return 0;
  case 0x4e:
    *(ulong *)(param_1 + 0x360) = *param_3 * 1000;
    return 0;
  case 0x50:
    if (*param_3 != 0) {
      *(undefined4 *)(param_1 + 0x420) = 1;
      *(undefined1 *)(param_1 + 0x501) = 0;
      *(undefined1 *)(param_1 + 0x4ff) = 0;
      return 0;
    }
    return 0;
  case 0x51:
    if (*param_3 == 1) {
      FUN_1010d9258(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
      return 0x2b;
    }
    *(bool *)(param_1 + 0x441) = *param_3 != 0;
    return 0;
  case 0x54:
    if (*param_3 == 3) {
      return 1;
    }
    *(ulong *)(param_1 + 0x428) = *param_3;
    return 0;
  case 0x55:
    *(bool *)(param_1 + 0x50c) = *param_3 != 0;
    return 0;
  case 0x5a:
    uVar12 = FUN_101105614(param_1);
    return uVar12;
  case 0x5b:
    *(bool *)(param_1 + 0x51d) = *param_3 != 0;
    return 0;
  case 0x5c:
    *(ulong *)(param_1 + 0x4a8) = *param_3;
    return 0;
  case 0x60:
    *(bool *)(param_1 + 0x3c9) = *param_3 != 0;
    return 0;
  case 0x62:
    uVar12 = 0;
    if (*param_3 - 1 < 0x3fff) {
      uVar12 = *param_3;
    }
    *(ulong *)(param_1 + 0x4b0) = uVar12;
    return 0;
  case 99:
    *(bool *)(param_1 + 0x51c) = *param_3 != 0;
    return 0;
  case 0x65:
    *(int *)(param_1 + 0x4a0) = (int)*param_3;
    return 0;
  case 0x69:
    *(bool *)(param_1 + 0x4fb) = *param_3 != 0;
    return 0;
  case 0x6a:
    *(bool *)(param_1 + 0x50d) = *param_3 != 0;
    return 0;
  case 0x6b:
    uVar12 = *param_3;
    if (uVar12 == 0) {
      *(undefined8 *)(param_1 + 0x268) = 0;
      return 0;
    }
    *(byte *)(param_1 + 0x8a0a) = (byte)((uint)uVar12 >> 4) & 1;
    uVar10 = 0;
    if ((uVar12 & 0x10) != 0) {
      uVar12 = uVar12 & 0xffffffffffffffed | 2;
    }
    do {
      if (0x1e < (int)uVar10) {
        return 4;
      }
      uVar2 = uVar10 & 0x3f;
      uVar10 = uVar10 + 1;
    } while ((1L << uVar2 & uVar12 & 0xfffffffffffffffb) == 0);
    *(ulong *)(param_1 + 0x268) = uVar12 & 0xfffffffffffffffb;
    return 0;
  case 0x6e:
    uVar12 = *param_3;
    if (uVar12 == 2) {
      *(undefined4 *)(param_1 + 0x4dc) = 2;
      return 0;
    }
    if (uVar12 == 1) {
      *(undefined4 *)(param_1 + 0x4dc) = 1;
      return 0;
    }
    if (uVar12 == 0) {
      *(undefined4 *)(param_1 + 0x4dc) = 0;
      return 0;
    }
    break;
  case 0x6f:
    uVar12 = *param_3;
    if (uVar12 == 0) {
      *(undefined8 *)(param_1 + 0x270) = 0;
      return 0;
    }
    *(byte *)(param_1 + 0x8a2a) = (byte)((uint)uVar12 >> 4) & 1;
    uVar10 = 0;
    if ((uVar12 & 0x10) != 0) {
      uVar12 = uVar12 & 0xffffffffffffffed | 2;
    }
    do {
      if (0x1e < (int)uVar10) {
        return 4;
      }
      uVar2 = uVar10 & 0x3f;
      uVar10 = uVar10 + 1;
    } while ((1L << uVar2 & uVar12 & 0xfffffffffffffffb) == 0);
    *(ulong *)(param_1 + 0x270) = uVar12 & 0xfffffffffffffffb;
    return 0;
  case 0x70:
    *(ulong *)(param_1 + 0x370) = *param_3 * 1000;
    return 0;
  case 0x71:
    *(ulong *)(param_1 + 0x4c8) = *param_3;
    return 0;
  case 0x72:
switchD_1010debd0_caseD_72:
    *(ulong *)(param_1 + 0x4d0) = *param_3;
    return 0;
  case 0x77:
    *(int *)(param_1 + 0x510) = (int)*param_3;
    return 0;
  case 0x79:
    *(bool *)(param_1 + 0x51e) = *param_3 != 0;
    return 0;
  case 0x81:
    *(int *)(param_1 + 0x514) = (int)*param_3;
    return 0;
  case 0x88:
    *(bool *)(param_1 + 0x51f) = *param_3 != 0;
    return 0;
  case 0x89:
    *(bool *)(param_1 + 0x520) = *param_3 != 0;
    return 0;
  case 0x8a:
    *(int *)(param_1 + 0x4d8) = (int)*param_3;
    return 0;
  case 0x8b:
    uVar3 = FUN_1010feeec(*param_3);
    *(undefined2 *)(param_1 + 0x2a8) = uVar3;
    return 0;
  case 0x8c:
    uVar6 = FUN_1010feee0(*param_3);
    *(undefined4 *)(param_1 + 0x2ac) = uVar6;
    return 0;
  case 0x8d:
    *(bool *)(param_1 + 0x521) = *param_3 != 0;
    return 0;
  case 0x96:
    *(bool *)(param_1 + 0x498) = *param_3 != 0;
    return 0;
  case 0x9a:
    *(int *)(param_1 + 0x518) = (int)*param_3;
    return 0;
  case 0x9b:
    *(ulong *)(param_1 + 0x358) = *param_3;
    return 0;
  case 0x9c:
    *(ulong *)(param_1 + 0x360) = *param_3;
    return 0;
  case 0x9d:
    *(bool *)(param_1 + 0x530) = *param_3 == 0;
    return 0;
  case 0x9e:
    *(bool *)(param_1 + 0x531) = *param_3 == 0;
    return 0;
  case 0x9f:
    *(ulong *)(param_1 + 0x538) = *param_3;
    return 0;
  case 0xa0:
    *(ulong *)(param_1 + 0x540) = *param_3;
    return 0;
  case 0xa1:
    uVar5 = FUN_1010feee0(*param_3);
    *(uint *)(param_1 + 0x288) = uVar5 & 7;
    return 0;
  case 0xa6:
    if (*param_3 == 1) {
      *(undefined1 *)(param_1 + 0x548) = 1;
      return 0;
    }
    if (*param_3 == 0) {
      *(undefined1 *)(param_1 + 0x548) = 0;
      return 0;
    }
    break;
  case 0xab:
    uVar6 = FUN_1010feee8(*param_3);
    *(undefined4 *)(param_1 + 0x6a8) = uVar6;
    return 0;
  case 0xac:
    return 4;
  case 0xb2:
    *(ulong *)(param_1 + 0x378) = *param_3;
    return 0;
  case 0xb5:
    *(ulong *)(param_1 + 0x6b0) = *param_3;
    return 0;
  case 0xb6:
    *(ulong *)(param_1 + 0x6b8) = *param_3;
    return 0;
  case 0xbc:
    *(bool *)(param_1 + 0x50e) = *param_3 != 0;
    return 0;
  case 0xbd:
    if (*param_3 - 1 < 0xb) {
      iVar4 = (int)(*param_3 - 1) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x6cc) = iVar4;
    return 0;
  case 0xc1:
  case 0xc2:
    *(ulong *)(param_1 + 0x8ad0) = *param_3;
    return 0;
  case 0xc5:
    *(bool *)(param_1 + 0x6d8) = *param_3 != 0;
    return 0;
  case 0xcf:
    *(bool *)(param_1 + 0x4fa) = *param_3 != 0;
    return 0;
  case 0xd2:
    *(ulong *)(param_1 + 0x700) = *param_3;
    return 0;
  case 0xd4:
    *(ulong *)(param_1 + 0x368) = *param_3;
    return 0;
  case 0xd5:
    *(bool *)(param_1 + 0x708) = *param_3 != 0;
    return 0;
  case 0xd6:
    *(ulong *)(param_1 + 0x710) = *param_3;
    return 0;
  case 0xd7:
    *(ulong *)(param_1 + 0x718) = *param_3;
    return 0;
  case 0xd8:
    *(byte *)(param_1 + 0x522) = (byte)(int)*param_3 & 1;
    return 0;
  case 0xda:
    *(bool *)(param_1 + 0x6c8) = *param_3 != 0;
    return 0;
  case 0xe1:
    *(bool *)(param_1 + 0x728) = *param_3 != 0;
    return 0;
  case 0xe2:
    *(bool *)(param_1 + 0x729) = *param_3 != 0;
    return 0;
  case 0xe3:
    *(ulong *)(param_1 + 0x730) = *param_3;
    return 0;
  case 0xe5:
    *(byte *)(param_1 + 0x3c8) = (byte)(int)*param_3 & 1;
    return 0;
  }
switchD_1010debd0_caseD_ac:
  return 0x30;
switchD_1010df184_caseD_2774:
  uVar12 = *param_3;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_1010f2820(param_1,1,2);
    if (*(int *)(param_1 + 0x58) == 3) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    lVar7 = *(long *)(param_1 + 0x70);
    if (*(long *)(lVar7 + 0x28) == *(long *)(param_1 + 0x768)) {
      *(undefined8 *)(param_1 + 0x768) = 0;
    }
    if (*(long *)(lVar7 + 0x30) == *(long *)(param_1 + 0x8928)) {
      *(long *)(param_1 + 0x8928) = 0;
    }
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    FUN_1010f2868(param_1,1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(ulong *)(param_1 + 0x70) = uVar12;
  if (uVar12 != 0) {
    FUN_1010f2820(param_1,1,2);
    *(int *)(*(long *)(param_1 + 0x70) + 4) = *(int *)(*(long *)(param_1 + 0x70) + 4) + 1;
    lVar7 = *(long *)(param_1 + 0x70);
    if (*(long *)(lVar7 + 0x20) != 0) {
      *(long *)(param_1 + 0x50) = *(long *)(lVar7 + 0x20);
      *(undefined4 *)(param_1 + 0x58) = 3;
    }
    if (*(long *)(lVar7 + 0x28) != 0) {
      if (*(long *)(param_1 + 0x768) != 0) {
        FUN_1010d441c();
        lVar7 = *(long *)(param_1 + 0x70);
      }
      *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(lVar7 + 0x28);
    }
    lVar11 = *(long *)(lVar7 + 0x30);
    if (lVar11 != 0) {
      *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(lVar7 + 0x38);
      *(long *)(param_1 + 0x8928) = lVar11;
    }
    FUN_1010f2868(param_1,1);
    return 0;
  }
  return 0;
switchD_1010ded00_caseD_2751:
  uVar12 = *param_3;
  if (*(long *)(param_1 + 0x5f0) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  if (uVar12 != 0) {
    lVar7 = (*(code *)PTR__strdup_101873638)(uVar12);
    if (lVar7 != 0) {
      *(long *)(param_1 + 0x5f0) = lVar7;
      return 0;
    }
    return 0x1b;
  }
  return 0;
switchD_1010def44_caseD_2769:
  if ((char *)*param_3 == (char *)0x0) {
    return 0;
  }
  if (*(char *)*param_3 != '\0') {
    uVar12 = FUN_10110560c(param_1);
    return uVar12;
  }
  return 0;
switchD_1010dedd8_caseD_27b5:
  pvVar13 = (void *)*param_3;
  if ((pvVar13 == (void *)0x0) || (lVar7 = *(long *)(param_1 + 0x2a0), lVar7 == -1)) {
    if (*(long *)(param_1 + 0x6a0) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x6a0) = 0;
    }
    if (pvVar13 != (void *)0x0) {
      pvVar8 = (void *)(*(code *)PTR__strdup_101873638)(pvVar13);
      if (pvVar8 != (void *)0x0) goto LAB_1010e0ee0;
      goto LAB_1010e1210;
    }
    uVar12 = 0;
  }
  else {
    if (-1 < lVar7) {
      if (*(long *)(param_1 + 0x6a0) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(param_1 + 0x6a0) = 0;
        lVar7 = *(long *)(param_1 + 0x2a0);
      }
      lVar11 = 1;
      if (lVar7 != 0) {
        lVar11 = lVar7;
      }
      pvVar8 = (void *)(*(code *)PTR__malloc_101873620)(lVar11);
      if (pvVar8 != (void *)0x0) {
        if (*(size_t *)(param_1 + 0x2a0) != 0) {
          _memcpy(pvVar8,pvVar13,*(size_t *)(param_1 + 0x2a0));
        }
LAB_1010e0ee0:
        uVar12 = 0;
        *(void **)(param_1 + 0x6a0) = pvVar8;
        goto LAB_1010e1234;
      }
    }
LAB_1010e1210:
    uVar12 = 0x1b;
  }
LAB_1010e1234:
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x6a0);
LAB_1010e123c:
  *(undefined4 *)(param_1 + 0x420) = 2;
  return uVar12;
}

