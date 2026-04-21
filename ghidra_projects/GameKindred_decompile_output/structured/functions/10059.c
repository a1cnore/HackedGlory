// functions/10059 — 99 functions
#include "GameKindred.h"




void FUN_100590054(void)

{
  DAT_101e97440 = "FMOD MIDI Codec";
  DAT_101e97448 = 0x10100;
  DAT_101e97450 = 2;
  DAT_101e9744c = 1;
  DAT_101e97458 = thunk_FUN_100593094;
  DAT_101e97460 = FUN_100590108;
  DAT_101e97468 = thunk_FUN_100593d18;
  DAT_101e97478 = FUN_100590124;
  DAT_101e974c8 = thunk_FUN_1005940f4;
  DAT_101e974d0 = thunk_FUN_1005941dc;
  DAT_101e974d8 = thunk_FUN_100594398;
  DAT_101e974e8 = FUN_1005901b0;
  DAT_101e974f0 = FUN_100590240;
  DAT_101e97498 = 7;
  DAT_101e9749c = 0x44a0;
  return;
}




void thunk_FUN_100593094(undefined4 *param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  uint uStack_294;
  undefined1 auStack_290 [4];
  uint uStack_28c;
  undefined *puStack_288;
  undefined4 uStack_27c;
  undefined4 auStack_278 [10];
  undefined4 *puStack_250;
  undefined4 uStack_248;
  undefined1 auStack_190 [4];
  uint uStack_18c;
  ushort uStack_188;
  ushort uStack_186;
  ushort uStack_184;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_78;
  
  puVar5 = PTR_defaultFileSeek_101444160;
  puVar12 = PTR_defaultFileRead_101444158;
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_17c = 0;
  param_1[0x14] = 7;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = puVar12;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar5;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  *(undefined8 *)(param_1 + 0x50) = 0;
  lStack_78 = lVar14;
  FUN_10057f888(param_1 + 0xba);
  uVar9 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),&uStack_17c);
  if (((int)uVar9 != 0) ||
     (uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_190,1,0xe,0), (int)uVar9 != 0))
  goto LAB_1005931c0;
  uVar7 = (uStack_18c & 0xff00ff00) >> 8 | (uStack_18c & 0xff00ff) << 8;
  uStack_18c = uVar7 >> 0x10 | uVar7 << 0x10;
  uStack_188 = uStack_188 >> 8 | uStack_188 << 8;
  uStack_184 = uStack_184 >> 8 | uStack_184 << 8;
  uStack_186 = uStack_186 >> 8 | uStack_186 << 8;
  iVar6 = FUN_1005ed0f8(auStack_190,"MThd",4);
  if (iVar6 != 0) {
    uVar9 = 0x13;
    goto LAB_1005931c0;
  }
  puVar1 = param_1 + 0x103a;
  puVar2 = param_1 + 0x103c;
  puVar3 = param_1 + 0x1042;
  *puVar1 = uStack_186 + 1;
  param_1[0x103b] = (uint)uStack_188;
  *puVar2 = (uint)uStack_184;
  *puVar3 = 500000;
  param_1[0x1046] = 1.0;
  if (param_3 == 0) {
    param_1[0xb8] = 0x40;
    uVar7 = 0x200;
  }
  else {
    iVar6 = 0x40;
    if (*(int *)(param_3 + 0x60) != 0) {
      iVar6 = *(int *)(param_3 + 0x60);
    }
    param_1[0xb8] = iVar6;
    uVar7 = 0x200;
    if (*(uint *)(param_3 + 0xd8) != 0) {
      uVar7 = *(uint *)(param_3 + 0xd8);
    }
  }
  piVar19 = param_1 + 0xb8;
  param_1[0x1036] = uVar7;
  uStack_27c = 0xffffffff;
  _memset(&uStack_178,0,0x100);
  if ((param_3 != 0) && (*(char **)(param_3 + 0x50) != (char *)0x0)) {
    _strncpy((char *)&uStack_178,*(char **)(param_3 + 0x50),0x100);
  }
  _memset(auStack_278,0,0xe8);
  auStack_278[0] = 0xe8;
  puStack_250 = &uStack_27c;
  uStack_248 = 1;
  *(undefined8 *)(param_1 + 0x1048) = 0;
  ppuVar17 = (undefined **)PTR_LOOP_101868668;
  if ((undefined **)PTR_LOOP_101868668 == &PTR_LOOP_101868668) {
LAB_100593350:
    puStack_288 = (undefined *)0x0;
    uVar7 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),&uStack_178,8,auStack_278,&puStack_288);
    if (uVar7 != 0) {
      uVar11 = 0x37;
      if (uVar7 != 0x12) {
        uVar11 = uVar7;
      }
      uVar9 = (ulong)uVar11;
      goto LAB_1005931c0;
    }
    lVar10 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x128,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                           ,0xba2,0,0);
    *(long *)lVar10 = lVar10;
    *(long *)(lVar10 + 8) = lVar10;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    *(long *)(param_1 + 0x1048) = lVar10;
    if (lVar10 == 0) {
      uVar9 = 0x26;
      goto LAB_1005931c0;
    }
    FUN_1005ecc98(lVar10 + 0x18,&uStack_178,0x100);
    puVar13 = *(undefined8 **)(param_1 + 0x1048);
    *(undefined4 *)(puVar13 + 0x24) = 1;
    puVar13[0x23] = puStack_288;
    *puVar13 = &PTR_LOOP_101868668;
    puVar13[1] = PTR_LOOP_101868670;
    PTR_LOOP_101868670 = (undefined *)puVar13;
    *(undefined8 **)puVar13[1] = puVar13;
    puVar12 = puStack_288;
  }
  else {
    do {
      iVar6 = FUN_1005ed0f8(ppuVar17 + 3,&uStack_178,0x100);
      if (iVar6 == 0) {
        *(undefined ***)(param_1 + 0x1048) = ppuVar17;
        *(int *)(ppuVar17 + 0x24) = *(int *)(ppuVar17 + 0x24) + 1;
        goto LAB_100593344;
      }
      ppuVar17 = (undefined **)*ppuVar17;
    } while (ppuVar17 != &PTR_LOOP_101868668);
    ppuVar17 = *(undefined ***)(param_1 + 0x1048);
LAB_100593344:
    if (ppuVar17 == (undefined **)0x0) goto LAB_100593350;
    puVar12 = ppuVar17[0x23];
  }
  *(undefined **)(param_1 + 0x104a) = puVar12;
  *(undefined8 *)(param_1 + 0x104c) = *(undefined8 *)(puVar12 + 0x58);
  lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*puVar1 * 0x28,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                         ,0xbb5,0);
  *(long *)(param_1 + 0x1040) = lVar10;
  if (lVar10 == 0) {
    uVar9 = 0x26;
  }
  else {
    lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xb8] * 0x360,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                           ,0xbbb,0);
    *(long *)(param_1 + 0x150) = lVar10;
    if (lVar10 == 0) {
      uVar9 = 0x26;
    }
    else {
      if (0 < *piVar19) {
        lVar16 = 0;
        lVar18 = 0;
        do {
          lVar10 = lVar10 + lVar16;
          *(long *)lVar10 = lVar10;
          *(long *)(lVar10 + 8) = lVar10;
          *(undefined8 *)(lVar10 + 0x10) = 0;
          FUN_100583c48(lVar10 + 0x20);
          FUN_100583b48(*(long *)(param_1 + 0x150) + lVar16 + 0x20);
          lVar10 = *(long *)(param_1 + 0x150);
          lVar4 = lVar10 + lVar16;
          *(undefined4 *)(lVar4 + 0x200) = 1000;
          *(undefined4 **)(lVar4 + 0x40) = param_1 + 0xba;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x12);
          *(undefined4 **)(lVar4 + 0x18) = param_1;
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + 0x360;
        } while (lVar18 < (int)param_1[0xb8]);
      }
      _bzero(param_1 + 0x66,0x130);
      iVar6 = 0;
      *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
      param_1[0xa9] = uStack_17c;
      iVar15 = 6;
      do {
        uVar9 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iVar15 + 8,0);
        if (((int)uVar9 != 0) ||
           (uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_290,1,8,0), (int)uVar9 != 0
           )) goto LAB_1005931c0;
        uVar7 = (uStack_28c & 0xff00ff00) >> 8 | (uStack_28c & 0xff00ff) << 8;
        uStack_28c = uVar7 >> 0x10 | uVar7 << 0x10;
        iVar8 = FUN_1005ed0f8(auStack_290,"MTrk",4);
        if (iVar8 == 0) {
          lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uStack_28c,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                                 ,0xbf5,0);
          *(long *)(*(long *)(param_1 + 0x1040) + (long)iVar6 * 0x28 + 8) = lVar10;
          if (lVar10 == 0) {
            uVar9 = 0x26;
            goto LAB_1005931c0;
          }
          uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),lVar10,1,uStack_28c,0);
          if (((uint)uVar9 | 0x10) != 0x10) goto LAB_1005931c0;
          puVar13 = (undefined8 *)(*(long *)(param_1 + 0x1040) + (long)iVar6 * 0x28);
          *(int *)(puVar13 + 3) = iVar6;
          *(undefined4 *)(puVar13 + 2) = 0;
          *(uint *)((long)puVar13 + 0x14) = uStack_28c;
          *puVar13 = param_1;
          iVar6 = iVar6 + 1;
        }
        else {
          FUN_1005d1d28(*(undefined8 *)(param_1 + 100),uStack_28c,1);
        }
        uVar7 = uStack_28c + 8 + iVar15;
        iVar15 = uStack_28c + 8 + iVar15;
        lVar10 = *(long *)(param_1 + 2);
      } while ((ulong)uVar7 < (ulong)*(uint *)(lVar10 + 0x10c) - 0x10 && iVar15 != 0);
      if ((param_3 == 0) || (iVar6 = *(int *)(param_3 + 0x14), iVar6 == 0)) {
        iVar6 = 5;
      }
      *(int *)(lVar10 + 0x100) = iVar6;
      *(undefined4 *)(lVar10 + 0x104) = 2;
      iVar6 = *(int *)(*(long *)(param_1 + 0x12) + 0x708);
      *(int *)(lVar10 + 0x108) = iVar6;
      fVar20 = (float)NEON_ucvtf(*puVar3);
      fVar20 = ((fVar20 / (float)param_1[0x1046]) / (float)(int)*puVar2) / 1000.0;
      fVar21 = (fVar20 / 1000.0) * (float)iVar6;
      uVar11 = (uint)(fVar21 + 0.5);
      uVar7 = param_1[0x1036];
      if (uVar7 <= uVar11) {
        uVar7 = uVar11;
      }
      param_1[0x1035] = uVar7;
      fVar21 = (float)uVar7 / fVar21;
      param_1[0x1037] = fVar21;
      param_1[0x1044] = fVar20 * fVar21;
      FUN_100592ee4(param_1,1);
      lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                             *(undefined4 *)(*(long *)(param_1 + 0x104a) + 0xa8),
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                             ,0xc34,0);
      *(long *)(param_1 + 0x104e) = lVar10;
      if (lVar10 == 0) {
        uVar9 = 0x26;
      }
      else {
        *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
        uVar9 = (ulong)*puVar1;
        if (*puVar1 != 0) {
          do {
            if ((int)uVar9 < 1) {
              iVar6 = 0;
            }
            else {
              lVar18 = 0;
              lVar10 = 0;
              iVar6 = 0;
              lVar16 = *(long *)(param_1 + 0x1040);
              do {
                FUN_1005924d8(lVar16 + lVar18,1);
                lVar16 = *(long *)(param_1 + 0x1040);
                if ((*(char *)(lVar16 + lVar18 + 0x24) != '\0') ||
                   (*(long *)(lVar16 + lVar18 + 8) == 0)) {
                  iVar6 = iVar6 + 1;
                }
                lVar10 = lVar10 + 1;
                uVar9 = (ulong)(int)*puVar1;
                lVar18 = lVar18 + 0x28;
              } while (lVar10 < (long)uVar9);
            }
            fVar20 = (float)NEON_ucvtf(*puVar3);
            param_1[0x1045] =
                 (float)param_1[0x1045] + ((fVar20 / (float)(int)*puVar2) / 1000.0) * 10.0;
            param_1[0x1043] = (float)param_1[0x1043] + 10.0;
          } while (iVar6 != (int)uVar9);
        }
        if ((param_3 == 0) || (*(int *)(param_3 + 4) != -1)) {
          lVar10 = *(long *)(param_1 + 2);
          iVar6 = (int)(((float)param_1[0x1045] / 1000.0) * (float)*(int *)(lVar10 + 0x108));
        }
        else {
          lVar10 = *(long *)(param_1 + 2);
          iVar6 = -1;
        }
        *(int *)(lVar10 + 0x110) = iVar6;
        uStack_294 = (uint)(*(long *)(param_1 + 0x158) != 0);
        if (*(long *)(param_1 + 0x246) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x334) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x422) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x510) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x5fe) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x6ec) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x7da) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x8c8) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0x9b6) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0xaa4) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0xb92) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0xc80) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0xd6e) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0xe5c) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        if (*(long *)(param_1 + 0xf4a) != 0) {
          uStack_294 = uStack_294 + 1;
        }
        uVar9 = FUN_100586684(param_1,9,"Number of channels",&uStack_294,4,1,0);
        if ((int)uVar9 == 0) {
          lVar10 = *(long *)(param_1 + 0x104a);
          if (0 < *(int *)(lVar10 + 0xa8)) {
            lVar18 = 0;
            do {
              if ((*(char *)(*(long *)(param_1 + 0x104e) + lVar18) != '\0') &&
                 (*(long *)(*(long *)(lVar10 + 0x98) + lVar18 * 8) == 0)) {
                uVar9 = FUN_1005e9d94(lVar10,lVar18,8);
                if ((int)uVar9 != 0) goto LAB_1005931c0;
                lVar10 = *(long *)(param_1 + 0x104a);
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < *(int *)(lVar10 + 0xa8));
          }
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x104e),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                        ,0xc88);
          *(undefined8 *)(param_1 + 0x104e) = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_168 = 0;
          uStack_178 = 0;
          pcStack_170 = "FMOD MIDI Target Unit";
          uVar9 = FUN_10056b4fc(*(undefined8 *)(param_1 + 0x12),&uStack_178,0,param_1 + 0xb2,1);
          if ((int)uVar9 == 0) {
            FUN_1005c9948(*(undefined8 *)(param_1 + 0xb2),0,
                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
            FUN_1005c982c(*(undefined8 *)(param_1 + 0xb2),1,0);
            *(undefined8 *)(param_1 + 0x146) = *(undefined8 *)(param_1 + 0xb2);
            *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0xb2);
            *(undefined8 *)(param_1 + 0x14c) = 0;
            *(undefined8 *)(param_1 + 0x14a) = 0;
            param_1[0xc6] = 0x3f800000;
            FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                          ,0xca7,0);
            lVar10 = FUN_100585974();
            *(long *)(param_1 + 0xb4) = lVar10;
            if (lVar10 == 0) {
              uVar9 = 0x26;
            }
            else {
              uVar9 = FUN_100585980(lVar10,*(undefined8 *)(param_1 + 0x12),0,param_1[0xb8]);
              if ((int)uVar9 == 0) {
                lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                       param_1[0xb8] * 0x2b8,
                                       "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                                       ,0xcbb,0);
                *(long *)(param_1 + 0xb6) = lVar10;
                if (lVar10 == 0) {
                  uVar9 = 0x26;
                }
                else if (*piVar19 < 1) {
LAB_100593b3c:
                  FUN_100592ee4(param_1,0);
                  uVar9 = 0;
                  *param_1 = 0;
                  param_1[0x1039] = 1;
                }
                else {
                  FUN_10057bd44();
                  uVar9 = FUN_100585cc0(*(undefined8 *)(param_1 + 0xb4),0,
                                        *(undefined8 *)(param_1 + 0xb6));
                  lVar10 = 1;
                  lVar18 = 0x2b8;
                  iVar6 = (int)uVar9;
                  while (iVar6 == 0) {
                    if (*piVar19 <= lVar10) goto LAB_100593b3c;
                    FUN_10057bd44(*(long *)(param_1 + 0xb6) + lVar18);
                    uVar9 = FUN_100585cc0(*(undefined8 *)(param_1 + 0xb4),lVar10,
                                          *(long *)(param_1 + 0xb6) + lVar18);
                    lVar10 = lVar10 + 1;
                    lVar18 = lVar18 + 0x2b8;
                    iVar6 = (int)uVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1005931c0:
  if (lVar14 == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar9);
}




undefined8 FUN_100590108(void)

{
  FUN_100593b64();
  return 0;
}




int thunk_FUN_100593d18(long param_1,void *param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  long lVar15;
  int iStack_10ec;
  long lStack_10e8;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  long lStack_10b8;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined4 uStack_10a8;
  undefined1 *puStack_10a0;
  undefined1 *puStack_1098;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1078 [4096];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar14 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  uVar11 = param_3;
  if (uVar14 < 5) {
    uVar11 = *(int *)(&DAT_10115e8c0 + (long)(int)uVar14 * 4) * param_3 >> 3;
  }
  _bzero(param_2,(ulong)(uVar11 * *(int *)(*(long *)(param_1 + 8) + 0x104)));
  uVar11 = *(uint *)(param_1 + 0x40d0);
  iVar9 = 0;
  if (param_3 != 0) {
    uVar14 = 0;
    piVar1 = (int *)(param_1 + 0x40e4);
    iStack_10ec = (int)piVar1;
    pvVar13 = param_2;
    iVar9 = 0;
    do {
      if (uVar11 == 0) {
        FUN_100592d58(param_1,1);
        iVar9 = 0;
        uVar11 = *(uint *)(param_1 + 0x40d4);
      }
      uVar12 = param_3 - uVar14;
      if (uVar11 + uVar14 <= param_3) {
        uVar12 = uVar11;
      }
      lVar15 = *(long *)(param_1 + 0x48);
      uVar2 = *(uint *)(lVar15 + 0x710);
      if (uVar12 <= *(uint *)(lVar15 + 0x710)) {
        uVar2 = uVar12;
      }
      if (param_2 != (void *)0x0) {
        uStack_10ac = 0;
        uStack_1088 = 0;
        uStack_1080 = 0;
        uStack_10b0 = 0x200;
        uStack_10a8 = 0;
        puStack_10a0 = auStack_1078;
        lStack_10b8 = lVar15;
        puStack_1098 = puStack_10a0;
        if (lVar15 == 0) {
          bVar7 = false;
          lStack_10e8 = 0;
          bVar4 = false;
          bVar6 = true;
        }
        else {
          bVar6 = true;
          FUN_10057097c(lVar15,1);
          lStack_10e8 = *(long *)(param_1 + 0x48);
          if (lStack_10e8 == 0) {
            lStack_10e8 = 0;
            bVar4 = false;
            bVar7 = true;
          }
          else {
            FUN_10057097c(lStack_10e8,3);
            bVar6 = false;
            bVar7 = true;
            bVar4 = true;
          }
        }
        if (*(char *)(*(long *)(param_1 + 0x2c8) + 0x3f) == '\0') {
LAB_100593ef0:
          uStack_10c0 = 0;
          uStack_10d0 = 0;
          uStack_10c8 = 0;
          uStack_10d8 = 0;
          uStack_10bc = 0xffffffff;
          iVar9 = FUN_1005c9be4(&lStack_10b8,uVar2,3,2,&uStack_10d8);
          if (iVar9 == 0) {
            uVar10 = FUN_1005c8da0(&uStack_10d8);
            bVar5 = true;
            iVar9 = FUN_10063a2fc(0x3f800000,pvVar13,uVar10,
                                  *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar2 << 1,1,1,1
                                 );
            iVar8 = iVar9;
            if (iVar9 == 0) {
              FUN_1005c8d10(&uStack_10d8);
              bVar5 = false;
              iVar9 = 0;
              iVar8 = iStack_10ec;
            }
          }
          else {
            bVar5 = true;
            iVar8 = iVar9;
          }
          iStack_10ec = iVar8;
          FUN_1005c8e48(&uStack_10d8);
        }
        else {
          *piVar1 = *piVar1 + 1;
          iVar9 = FUN_1005cb3bc(&lStack_10b8,*(long *)(param_1 + 0x2c8),uVar2);
          if (iVar9 == 0) goto LAB_100593ef0;
          bVar5 = true;
          iStack_10ec = iVar9;
        }
        if (!bVar6 && bVar4) {
          FUN_100570990(lStack_10e8,3);
        }
        if ((lVar15 != 0) && (bVar7)) {
          FUN_100570990(lVar15,1);
        }
        if (bVar5) goto LAB_100594030;
      }
      uVar3 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
      uVar12 = uVar2;
      if (uVar3 < 5) {
        uVar12 = *(int *)(&DAT_10115e8c0 + (long)(int)uVar3 * 4) * uVar2 >> 3;
      }
      uVar14 = uVar2 + uVar14;
      pvVar13 = (void *)((long)pvVar13 + (ulong)(uVar12 * *(int *)(*(long *)(param_1 + 8) + 0x104)))
      ;
      uVar11 = uVar11 - uVar2;
    } while (uVar14 < param_3);
  }
  *(uint *)(param_1 + 0x40d0) = uVar11;
  iStack_10ec = iVar9;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_100594030:
  if (*(long *)PTR____stack_chk_guard_101444218 != lStack_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iStack_10ec;
}




undefined8 FUN_100590124(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x40e0);
  if (uVar2 != param_3) {
    if (uVar2 <= param_3) goto LAB_100590184;
    uVar1 = *(undefined4 *)(param_1 + 0x4118);
    FUN_100592ee4(param_1,0);
    *(undefined4 *)(param_1 + 0x4118) = uVar1;
    while( true ) {
      uVar2 = *(uint *)(param_1 + 0x40e0);
LAB_100590184:
      if (param_3 <= uVar2) break;
      FUN_100592d58(param_1,1);
    }
  }
  return 0;
}




undefined8 thunk_FUN_1005940f4(long param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 != (uint *)0x0) {
    bVar2 = *(long *)(param_1 + 0x560) != 0;
    uVar3 = 1;
    if (bVar2) {
      uVar3 = 2;
    }
    uVar1 = (uint)bVar2;
    if (*(long *)(param_1 + 0x918) != 0) {
      uVar1 = uVar3;
    }
    if (*(long *)(param_1 + 0xcd0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1088) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1440) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x17f8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1bb0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1f68) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x2320) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x26d8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x2a90) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x2e48) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x3200) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x35b8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x3970) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x3d28) != 0) {
      uVar1 = uVar1 + 1;
    }
    *param_2 = uVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 thunk_FUN_1005941dc(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  if (1.0 < param_1 || 0xf < param_3) {
    return 0x1f;
  }
  if (param_1 < 0.0) {
    return 0x1f;
  }
  if (*(long *)(param_2 + 0x560) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      lVar2 = 0;
      goto LAB_100594380;
    }
    uVar1 = 1;
  }
  if (*(long *)(param_2 + 0x918) != 0) {
    lVar2 = 1;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0xcd0) != 0) {
    lVar2 = 2;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1088) != 0) {
    lVar2 = 3;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1440) != 0) {
    lVar2 = 4;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x17f8) != 0) {
    lVar2 = 5;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1bb0) != 0) {
    lVar2 = 6;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1f68) != 0) {
    lVar2 = 7;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x2320) != 0) {
    lVar2 = 8;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x26d8) != 0) {
    lVar2 = 9;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x2a90) != 0) {
    lVar2 = 10;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x2e48) != 0) {
    lVar2 = 0xb;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x3200) != 0) {
    lVar2 = 0xc;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x35b8) != 0) {
    lVar2 = 0xd;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x3970) != 0) {
    lVar2 = 0xe;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  lVar2 = 0xf;
  if (*(long *)(param_2 + 0x3d28) == 0) {
    return 0;
  }
  if (uVar1 != param_3) {
    return 0;
  }
LAB_100594380:
  *(float *)(param_2 + lVar2 * 0x3b8 + 0x8e0) = param_1;
  return 0;
}




undefined8 thunk_FUN_100594398(long param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  
  if (0xf < param_2) {
    return 0x1f;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0x560) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      lVar2 = 0;
      goto LAB_100594530;
    }
    uVar1 = 1;
  }
  if (*(long *)(param_1 + 0x918) != 0) {
    lVar2 = 1;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0xcd0) != 0) {
    lVar2 = 2;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1088) != 0) {
    lVar2 = 3;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1440) != 0) {
    lVar2 = 4;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x17f8) != 0) {
    lVar2 = 5;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1bb0) != 0) {
    lVar2 = 6;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1f68) != 0) {
    lVar2 = 7;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x2320) != 0) {
    lVar2 = 8;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x26d8) != 0) {
    lVar2 = 9;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x2a90) != 0) {
    lVar2 = 10;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x2e48) != 0) {
    lVar2 = 0xb;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x3200) != 0) {
    lVar2 = 0xc;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x35b8) != 0) {
    lVar2 = 0xd;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x3970) != 0) {
    lVar2 = 0xe;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  lVar2 = 0xf;
  if (*(long *)(param_1 + 0x3d28) == 0) {
    return 0;
  }
  if (uVar1 != param_2) {
    return 0;
  }
LAB_100594530:
  *param_3 = *(undefined4 *)(param_1 + lVar2 * 0x3b8 + 0x8e0);
  return 0;
}




undefined8 FUN_1005901b0(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  *(float *)(param_2 + 0x4118) = param_1;
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x4108));
  fVar3 = ((fVar3 / param_1) / (float)*(int *)(param_2 + 0x40f0)) / 1000.0;
  fVar4 = (fVar3 / 1000.0) * (float)*(int *)(*(long *)(param_2 + 8) + 0x108);
  uVar2 = (uint)(fVar4 + 0.5);
  uVar1 = *(uint *)(param_2 + 0x40d8);
  if (*(uint *)(param_2 + 0x40d8) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_2 + 0x40d4) = uVar1;
  fVar4 = (float)uVar1 / fVar4;
  *(float *)(param_2 + 0x40dc) = fVar4;
  *(float *)(param_2 + 0x4110) = fVar3 * fVar4;
  return 0;
}




undefined8 FUN_100590240(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x4118);
  return 0;
}




undefined8 FUN_100590254(void)

{
  return 0;
}




undefined8 FUN_10059025c(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  ushort *puVar2;
  
  if (0 < *(int *)(param_1 + 0x32c)) {
    lVar1 = 0;
    puVar2 = (ushort *)(*(long *)(param_1 + 0x330) + 4);
    do {
      if ((puVar2[-2] == param_2) && (*puVar2 == param_3)) {
        return 0;
      }
      lVar1 = lVar1 + 1;
      puVar2 = puVar2 + 6;
    } while (lVar1 < *(int *)(param_1 + 0x32c));
  }
  return 0x1f;
}




undefined4 FUN_1005902ac(long param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  bVar8 = false;
  *param_4 = 0;
  iVar7 = *(int *)(param_1 + 0x32c);
  if (0 < iVar7) {
    iVar5 = 0;
    lVar6 = 0;
    bVar8 = false;
    puVar4 = (ushort *)(*(long *)(param_1 + 0x330) + 4);
    do {
      if (*puVar4 != param_3) goto LAB_1005904c0;
      uVar3 = puVar4[-2];
      fVar10 = 1.0;
      if (0x80 < uVar3) {
        if (uVar3 < 0x8a) {
          uVar1 = param_2 & 0x80;
          if ((uVar3 == 0x81) || (uVar1 = param_2 & 0x100, uVar3 == 0x87))
          goto joined_r0x000100590378;
        }
        else {
          uVar1 = param_2 & 0x200;
          if ((uVar3 == 0x8a) || (uVar1 = param_2 & 0x400, uVar3 == 0x8b))
          goto joined_r0x000100590378;
        }
        goto switchD_100590348_default;
      }
      fVar10 = 1.0;
      switch(uVar3) {
      case 0:
        fVar10 = 1.0;
        if ((param_2 & 1) == 0) goto LAB_1005904c0;
        goto switchD_100590348_default;
      case 1:
        uVar1 = param_2 & 2;
        break;
      case 2:
        bVar9 = *(byte *)(param_1 + 0x328);
        uVar1 = param_2 & 4;
        goto joined_r0x0001005903c4;
      case 3:
        bVar9 = *(byte *)(param_1 + 800);
        uVar1 = param_2 & 8;
joined_r0x0001005903c4:
        if (uVar1 != 0) {
          fVar10 = (float)NEON_ucvtf((uint)bVar9);
          fVar10 = fVar10 * 0.0078125;
          goto switchD_100590348_default;
        }
        goto LAB_1005904c0;
      case 4:
        uVar1 = param_2 & 0x10;
        break;
      case 5:
        uVar1 = param_2 & 0x20;
        break;
      case 6:
        uVar1 = param_2 & 0x40;
        break;
      default:
        goto switchD_100590348_default;
      }
joined_r0x000100590378:
      fVar10 = 1.0;
      if (uVar1 != 0) {
switchD_100590348_default:
        uVar3 = puVar4[-1];
        if (uVar3 < 0x81) {
          if (uVar3 == 2) {
            fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x328));
          }
          else {
            fVar11 = 1.0;
            if (uVar3 != 3) goto LAB_100590490;
            fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 800));
          }
LAB_10059048c:
          fVar11 = fVar11 * 0.0078125;
        }
        else {
          if (0x89 < uVar3) {
            if (uVar3 == 0x8a) {
              iVar12 = *(int *)(*(long *)(param_1 + 0x358) + 0x3b0);
            }
            else {
              fVar11 = 1.0;
              if (uVar3 != 0x8b) goto LAB_100590490;
              iVar12 = *(int *)(*(long *)(param_1 + 0x358) + 0x3b4);
            }
LAB_100590488:
            fVar11 = (float)iVar12;
            goto LAB_10059048c;
          }
          if (uVar3 == 0x81) {
            iVar12 = *(int *)(*(long *)(param_1 + 0x358) + 0x3a8);
            goto LAB_100590488;
          }
          fVar11 = 1.0;
          if (uVar3 == 0x87) {
            iVar12 = *(int *)(*(long *)(param_1 + 0x358) + 0x3ac);
            goto LAB_100590488;
          }
        }
LAB_100590490:
        if (puVar4[1] != 1) {
          iVar5 = (int)(fVar10 * fVar11 * (float)*(int *)(puVar4 + 2)) + iVar5;
          *param_4 = iVar5;
          iVar7 = *(int *)(param_1 + 0x32c);
        }
        bVar8 = true;
      }
LAB_1005904c0:
      lVar6 = lVar6 + 1;
      puVar4 = puVar4 + 6;
    } while (lVar6 < iVar7);
  }
  uVar2 = 0;
  if (!bVar8) {
    uVar2 = 0x1f;
  }
  return uVar2;
}




undefined4 FUN_100590504(undefined8 param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 == -0x80000000) {
    return 0;
  }
  fVar2 = ((float)param_2 / 7.86432e+07 + 10.0) * 8.533334;
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar2;
  }
  lVar1 = (long)(int)fVar3;
  if (128.0 <= fVar3) {
    lVar1 = 0x7f;
  }
  return *(undefined4 *)(&DAT_10115e3b0 + lVar1 * 4);
}




undefined8 FUN_100590574(long param_1)

{
  int iVar1;
  long lVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  int local_24;
  
  *(undefined1 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0x3200;
  auVar7._0_14_ = ZEXT214(0);
  auVar7._14_2_ = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0xc2c00000;
  *(undefined8 *)(param_1 + 0x298) = 0;
  auVar7 = NEON_ext(auVar7,auVar7,8,1);
  *(long *)(param_1 + 0x2a0) = auVar7._0_8_;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0xc2c00000;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0xc2c00000;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  iVar1 = FUN_1005902ac(param_1,2,1,&local_24);
  if (iVar1 == 0) {
    fVar4 = (float)_powf(ZEXT816(0x41200000),((float)local_24 / 655360.0) / -20.0);
    *(float *)(param_1 + 0x338) = 1.0 - fVar4;
  }
  iVar1 = FUN_1005902ac(param_1,2,3,&local_24);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x33c) = (float)local_24 * 1.5258789e-05;
  }
  iVar1 = FUN_1005902ac(param_1,2,4,&local_24);
  if (iVar1 == 0) {
    if (local_24 == 0x8000000) {
      fVar4 = -96.0;
    }
    else {
      fVar4 = ((float)local_24 / -6.5536e+07 + 1.0) * -96.0;
    }
    *(float *)(param_1 + 0x340) = fVar4;
  }
  iVar1 = FUN_1005902ac(param_1,0x7cd,0x104,&local_24);
  if (iVar1 == 0) {
    fVar4 = (float)_exp2f(((float)local_24 * 1.5258789e-05 + -6900.0) / 1200.0,0x44960000);
    *(float *)(param_1 + 0x2a0) = fVar4 * 440.0;
  }
  iVar1 = FUN_1005902ac(param_1,0x7cd,0x105,&local_24);
  if (iVar1 == 0) {
    if (local_24 == -0x80000000) {
      uVar6 = 0;
    }
    else {
      fVar5 = ((float)local_24 / 7.86432e+07 + 10.0) * 8.533334;
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      lVar2 = (long)(int)fVar4;
      if (128.0 <= fVar4) {
        lVar2 = 0x7f;
      }
      uVar6 = *(undefined4 *)(&DAT_10115e3b0 + lVar2 * 4);
    }
    *(undefined4 *)(param_1 + 0x298) = uVar6;
  }
  if (0 < *(int *)(param_1 + 0x32c)) {
    lVar2 = 0;
    psVar3 = (short *)(*(long *)(param_1 + 0x330) + 4);
    do {
      if ((psVar3[-2] == 0) && (*psVar3 == 0x206)) {
        iVar1 = FUN_1005902ac(param_1,0x7cd,0x206,&local_24);
        if (iVar1 == 0) {
          if (local_24 == -0x80000000) {
            uVar6 = 0;
          }
          else {
            fVar5 = ((float)local_24 / 7.86432e+07 + 10.0) * 8.533334;
            fVar4 = 0.0;
            if (0.0 <= fVar5) {
              fVar4 = fVar5;
            }
            lVar2 = (long)(int)fVar4;
            if (128.0 <= fVar4) {
              lVar2 = 0x7f;
            }
            uVar6 = *(undefined4 *)(&DAT_10115e3b0 + lVar2 * 4);
          }
          *(undefined4 *)(param_1 + 0x2a4) = uVar6;
        }
        break;
      }
      lVar2 = lVar2 + 1;
      psVar3 = psVar3 + 6;
    } while (lVar2 < *(int *)(param_1 + 0x32c));
    if (0 < *(int *)(param_1 + 0x32c)) {
      lVar2 = 0;
      psVar3 = (short *)(*(long *)(param_1 + 0x330) + 4);
      do {
        if ((psVar3[-2] == 0) && (*psVar3 == 0x207)) {
          iVar1 = FUN_1005902ac(param_1,0x7cd,0x207,&local_24);
          if (iVar1 == 0) {
            if (local_24 == -0x80000000) {
              uVar6 = 0;
            }
            else {
              fVar5 = ((float)local_24 / 7.86432e+07 + 10.0) * 8.533334;
              fVar4 = 0.0;
              if (0.0 <= fVar5) {
                fVar4 = fVar5;
              }
              lVar2 = (long)(int)fVar4;
              if (128.0 <= fVar4) {
                lVar2 = 0x7f;
              }
              uVar6 = *(undefined4 *)(&DAT_10115e3b0 + lVar2 * 4);
            }
            *(undefined4 *)(param_1 + 0x2b0) = uVar6;
          }
          break;
        }
        lVar2 = lVar2 + 1;
        psVar3 = psVar3 + 6;
      } while (lVar2 < *(int *)(param_1 + 0x32c));
      if (0 < *(int *)(param_1 + 0x32c)) {
        lVar2 = 0;
        psVar3 = (short *)(*(long *)(param_1 + 0x330) + 4);
        do {
          if ((psVar3[-2] == 0) && (*psVar3 == 0x209)) {
            iVar1 = FUN_1005902ac(param_1,0x7cd,0x209,&local_24);
            if (iVar1 == 0) {
              if (local_24 == -0x80000000) {
                uVar6 = 0;
              }
              else {
                fVar5 = ((float)local_24 / 7.86432e+07 + 10.0) * 8.533334;
                fVar4 = 0.0;
                if (0.0 <= fVar5) {
                  fVar4 = fVar5;
                }
                lVar2 = (long)(int)fVar4;
                if (128.0 <= fVar4) {
                  lVar2 = 0x7f;
                }
                uVar6 = *(undefined4 *)(&DAT_10115e3b0 + lVar2 * 4);
              }
              *(undefined4 *)(param_1 + 700) = uVar6;
            }
            break;
          }
          lVar2 = lVar2 + 1;
          psVar3 = psVar3 + 6;
        } while (lVar2 < *(int *)(param_1 + 0x32c));
      }
    }
  }
  iVar1 = FUN_1005902ac(param_1,0x7cd,0x20a,&local_24);
  if (iVar1 == 0) {
    if (local_24 == 0x8000000) {
      fVar4 = -96.0;
    }
    else {
      fVar4 = ((float)local_24 / -6.5536e+07 + 1.0) * -96.0;
    }
    *(float *)(param_1 + 0x2d0) = fVar4;
  }
  iVar1 = FUN_1005902ac(param_1,0x20,3,&local_24);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x310) = 1;
    *(float *)(param_1 + 0x30c) = (float)local_24 * 1.5258789e-05;
    if (0 < *(int *)(param_1 + 0x32c)) {
      lVar2 = 0;
      psVar3 = (short *)(*(long *)(param_1 + 0x330) + 4);
      do {
        if ((psVar3[-2] == 0) && (*psVar3 == 0x30a)) {
          iVar1 = FUN_1005902ac(param_1,1,0x30a,&local_24);
          if (iVar1 == 0) {
            if (local_24 == -0x80000000) {
              uVar6 = 0;
            }
            else {
              fVar5 = ((float)local_24 / 7.86432e+07 + 10.0) * 8.533334;
              fVar4 = 0.0;
              if (0.0 <= fVar5) {
                fVar4 = fVar5;
              }
              lVar2 = (long)(int)fVar4;
              if (128.0 <= fVar4) {
                lVar2 = 0x7f;
              }
              uVar6 = *(undefined4 *)(&DAT_10115e3b0 + lVar2 * 4);
            }
            *(undefined4 *)(param_1 + 0x2dc) = uVar6;
          }
          break;
        }
        lVar2 = lVar2 + 1;
        psVar3 = psVar3 + 6;
      } while (lVar2 < *(int *)(param_1 + 0x32c));
      if (0 < *(int *)(param_1 + 0x32c)) {
        lVar2 = 0;
        psVar3 = (short *)(*(long *)(param_1 + 0x330) + 4);
        do {
          if ((psVar3[-2] == 0) && (*psVar3 == 0x30b)) {
            iVar1 = FUN_1005902ac(param_1,1,0x30b,&local_24);
            if (iVar1 == 0) {
              if (local_24 == -0x80000000) {
                uVar6 = 0;
              }
              else {
                fVar5 = ((float)local_24 / 7.86432e+07 + 10.0) * 8.533334;
                fVar4 = 0.0;
                if (0.0 <= fVar5) {
                  fVar4 = fVar5;
                }
                lVar2 = (long)(int)fVar4;
                if (128.0 <= fVar4) {
                  lVar2 = 0x7f;
                }
                uVar6 = *(undefined4 *)(&DAT_10115e3b0 + lVar2 * 4);
              }
              *(undefined4 *)(param_1 + 0x2e8) = uVar6;
            }
            break;
          }
          lVar2 = lVar2 + 1;
          psVar3 = psVar3 + 6;
        } while (lVar2 < *(int *)(param_1 + 0x32c));
        if (0 < *(int *)(param_1 + 0x32c)) {
          lVar2 = 0;
          psVar3 = (short *)(*(long *)(param_1 + 0x330) + 4);
          do {
            if ((psVar3[-2] == 0) && (*psVar3 == 0x30d)) {
              iVar1 = FUN_1005902ac(param_1,1,0x30d,&local_24);
              if (iVar1 == 0) {
                if (local_24 == -0x80000000) {
                  uVar6 = 0;
                }
                else {
                  fVar5 = ((float)local_24 / 7.86432e+07 + 10.0) * 8.533334;
                  fVar4 = 0.0;
                  if (0.0 <= fVar5) {
                    fVar4 = fVar5;
                  }
                  lVar2 = (long)(int)fVar4;
                  if (128.0 <= fVar4) {
                    lVar2 = 0x7f;
                  }
                  uVar6 = *(undefined4 *)(&DAT_10115e3b0 + lVar2 * 4);
                }
                *(undefined4 *)(param_1 + 0x2f4) = uVar6;
              }
              break;
            }
            lVar2 = lVar2 + 1;
            psVar3 = psVar3 + 6;
          } while (lVar2 < *(int *)(param_1 + 0x32c));
        }
      }
    }
    iVar1 = FUN_1005902ac(param_1,1,0x30e,&local_24);
    if (iVar1 == 0) {
      if (local_24 == 0x8000000) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)local_24 / 6.5536e+07;
      }
      *(float *)(param_1 + 0x308) = fVar4;
    }
  }
  FUN_1005902ac(param_1,0x20,4,&local_24);
  if (*(float *)(param_1 + 700) < 50.0) {
    *(undefined4 *)(param_1 + 700) = 0x42480000;
  }
  return 0;
}




undefined8 FUN_100590da8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_100582560(param_1 + 4,0);
  param_1[0x52] = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  *(undefined4 *)((long)param_1 + 0x314) = 0xffffffff;
  plVar1 = (long *)param_1[1];
  *plVar1 = *param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = (long)param_1;
  lVar2 = *(long *)(param_1[3] + 0x4140);
  *param_1 = lVar2;
  param_1[1] = param_1[3] + 0x4140;
  *(long **)(lVar2 + 8) = param_1;
  *(long **)param_1[1] = param_1;
  return 0;
}




undefined8 FUN_100590e18(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char local_55;
  int local_54;
  
  if ((char)param_1[0x5b] == '\0') {
    fVar12 = 1.0;
  }
  else {
    cVar3 = *(char *)((long)param_1 + 0x344);
    if ((cVar3 != '\0') && (*(char *)(param_1[0x6b] + 0x3a4) == '\0')) {
      uVar1 = *(uint *)(param_1 + 0x59);
      uVar8 = (ulong)uVar1;
      if (uVar1 != 2) {
        fVar12 = *(float *)((long)param_1 + 0x2cc);
        fVar13 = *(float *)((long)param_1 + uVar8 * 0xc + 0x2a4);
        if (fVar13 <= fVar12) {
          lVar9 = uVar8 * 0xc;
          uVar8 = (ulong)(uVar1 + 1);
          *(uint *)(param_1 + 0x59) = uVar1 + 1;
          fVar12 = fVar12 - *(float *)((long)param_1 + lVar9 + 0x2a4);
          *(float *)((long)param_1 + 0x2cc) = fVar12;
          fVar13 = *(float *)((long)param_1 + uVar8 * 0xc + 0x2a4);
        }
        fVar11 = *(float *)((long)param_1 + uVar8 * 0xc + 0x2a8);
        bVar5 = false;
        bVar6 = true;
        if (0.0 < fVar13) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar12) && !NAN(fVar13)) {
            bVar5 = fVar12 == fVar13;
            bVar6 = fVar13 <= fVar12;
          }
        }
        if (!bVar6 || bVar5) {
          fVar11 = fVar11 + fVar12 * ((*(float *)((long)param_1 + uVar8 * 0xc + 0x2ac) - fVar11) /
                                     fVar13);
        }
        if ((int)uVar8 == 1) {
          if (fVar11 < *(float *)(param_1 + 0x5a)) {
            fVar11 = *(float *)(param_1 + 0x5a);
          }
        }
        else if (((int)uVar8 == 0) && (-96.0 < fVar11)) {
          fVar12 = (float)_log10f(fVar11 / 96.0 + 1.0);
          fVar11 = fVar12 * 20.0;
        }
        *(undefined4 *)(param_1 + 0x59) = 2;
        fVar12 = *(float *)((long)param_1 + 0x2c4) - *(float *)(param_1 + 0x58);
        if ((fVar12 == 0.0) || (*(float *)((long)param_1 + 700) == 0.0)) {
          *(undefined4 *)((long)param_1 + 0x2cc) = 0;
        }
        else {
          *(float *)((long)param_1 + 0x2cc) =
               (fVar11 - *(float *)(param_1 + 0x58)) / (fVar12 / *(float *)((long)param_1 + 700));
        }
      }
    }
    uVar8 = (ulong)*(uint *)(param_1 + 0x59);
    fVar12 = *(float *)((long)param_1 + 0x2cc);
    if (((int)*(uint *)(param_1 + 0x59) < 3) &&
       (fVar13 = *(float *)((long)param_1 + uVar8 * 0xc + 0x2a4), fVar13 <= fVar12)) {
      do {
        if (((int)uVar8 == 1) && ((cVar3 == '\0' || (*(char *)(param_1[0x6b] + 0x3a4) != '\0')))) {
          fVar12 = *(float *)(param_1 + 0x56);
          *(float *)((long)param_1 + 0x2cc) = fVar12;
          uVar8 = 1;
          goto LAB_100590ff0;
        }
        fVar12 = fVar12 - fVar13;
        *(float *)((long)param_1 + 0x2cc) = fVar12;
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        *(uint *)(param_1 + 0x59) = uVar1;
      } while (((int)uVar1 < 3) &&
              (fVar13 = *(float *)((long)param_1 + uVar8 * 0xc + 0x2a4), fVar13 <= fVar12));
    }
    if (2 < (int)uVar8) goto LAB_1005911d4;
LAB_100590ff0:
    fVar11 = *(float *)((long)param_1 + uVar8 * 0xc + 0x2a4);
    fVar13 = *(float *)((long)param_1 + uVar8 * 0xc + 0x2a8);
    if (0.0 < fVar11) {
      fVar13 = fVar13 + ((*(float *)((long)param_1 + uVar8 * 0xc + 0x2ac) - fVar13) / fVar11) *
                        fVar12;
    }
    if ((int)uVar8 == 0) {
      fVar12 = fVar13 / 96.0 + 1.0;
    }
    else {
      fVar12 = fVar13;
      if (((int)uVar8 == 1) &&
         (fVar12 = *(float *)(param_1 + 0x5a), *(float *)(param_1 + 0x5a) <= fVar13)) {
        fVar12 = fVar13;
      }
      fVar12 = *(float *)(&DAT_10115e5b0 + (long)(0xc0 - (int)(fVar12 * -2.0)) * 4);
    }
  }
  iVar7 = FUN_1005902ac(param_1,2,1,&local_54);
  if (iVar7 == 0) {
    fVar13 = (float)_powf(0x41200000,((float)local_54 / 655360.0) / -20.0);
    *(float *)(param_1 + 0x67) = 1.0 - fVar13;
  }
  bVar4 = *(byte *)(param_1 + 0x65);
  lVar9 = param_1[0x6b];
  iVar7 = *(int *)(lVar9 + 0x3ac);
  iVar2 = *(int *)(lVar9 + 0x3b4);
  if (*(float *)(param_1 + 0x53) <= *(float *)((long)param_1 + 0x29c)) {
    fVar13 = (float)_sinf(((*(float *)((long)param_1 + 0x29c) - *(float *)(param_1 + 0x53)) / 1000.0
                          ) * 6.2831855 * *(float *)(param_1 + 0x54));
    fVar11 = fVar13 * *(float *)(param_1 + 0x67) + 1.0;
    fVar13 = 0.0;
    if (0.0 <= fVar11) {
      fVar13 = fVar11;
    }
    if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
  }
  else {
    fVar13 = 1.0;
  }
  fVar13 = fVar13 * fVar12 * ((float)((uint)bVar4 * (uint)bVar4) / 16129.0) *
                    ((float)(iVar7 * iVar7) / 16129.0) * ((float)(iVar2 * iVar2) / 16129.0) *
                    *(float *)(param_1 + 0x6a);
  if (((int)param_1[0x59] != 2) || (0.0009765625 <= fVar13)) {
    FUN_1005847b8(fVar13 * *(float *)(lVar9 + 0x398),param_1 + 4,0);
    local_55 = '\x01';
    FUN_1005852c4(param_1 + 4,&local_55);
    if (local_55 != '\0') {
      return 0;
    }
  }
LAB_1005911d4:
  FUN_100582560(param_1 + 4,0);
  param_1[0x52] = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  *(undefined4 *)((long)param_1 + 0x314) = 0xffffffff;
  plVar10 = (long *)param_1[1];
  *plVar10 = *param_1;
  *(long **)(*param_1 + 8) = plVar10;
  *param_1 = (long)param_1;
  lVar9 = *(long *)(param_1[3] + 0x4140);
  *param_1 = lVar9;
  param_1[1] = param_1[3] + 0x4140;
  *(long **)(lVar9 + 8) = param_1;
  *(long **)param_1[1] = param_1;
  return 0;
}




undefined8 FUN_100591244(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  float fVar19;
  float fVar20;
  int iVar21;
  float local_48;
  int local_44;
  
  if (*(char *)(param_1 + 0x310) == '\0') {
    uVar11 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar17 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x344) != '\0') &&
       (*(char *)(*(long *)(param_1 + 0x358) + 0x3a4) == '\0')) {
      uVar1 = *(uint *)(param_1 + 0x300);
      uVar9 = (ulong)uVar1;
      if (uVar1 != 2) {
        lVar10 = param_1 + uVar9 * 0xc;
        fVar19 = *(float *)(param_1 + 0x304);
        uVar11 = SUB41(fVar19,0);
        uVar13 = (undefined1)((uint)fVar19 >> 8);
        uVar15 = (undefined1)((uint)fVar19 >> 0x10);
        uVar17 = (undefined1)((uint)fVar19 >> 0x18);
        fVar20 = *(float *)(lVar10 + 0x2dc);
        if (fVar20 <= fVar19) {
          uVar9 = (ulong)(uVar1 + 1);
          *(uint *)(param_1 + 0x300) = uVar1 + 1;
          fVar19 = fVar19 - *(float *)(lVar10 + 0x2dc);
          uVar11 = SUB41(fVar19,0);
          uVar13 = (undefined1)((uint)fVar19 >> 8);
          uVar15 = (undefined1)((uint)fVar19 >> 0x10);
          uVar17 = (undefined1)((uint)fVar19 >> 0x18);
          *(float *)(param_1 + 0x304) = fVar19;
          fVar20 = *(float *)(param_1 + uVar9 * 0xc + 0x2dc);
        }
        fVar19 = *(float *)(param_1 + uVar9 * 0xc + 0x2e0);
        bVar6 = false;
        bVar7 = true;
        if (0.0 < fVar20) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN((float)CONCAT13(uVar17,CONCAT12(uVar15,CONCAT11(uVar13,uVar11)))) && !NAN(fVar20)
             ) {
            bVar6 = (float)CONCAT13(uVar17,CONCAT12(uVar15,CONCAT11(uVar13,uVar11))) == fVar20;
            bVar7 = fVar20 <= (float)CONCAT13(uVar17,CONCAT12(uVar15,CONCAT11(uVar13,uVar11)));
          }
        }
        if (!bVar7 || bVar6) {
          fVar19 = fVar19 + (float)CONCAT13(uVar17,CONCAT12(uVar15,CONCAT11(uVar13,uVar11))) *
                            ((*(float *)(param_1 + uVar9 * 0xc + 0x2e4) - fVar19) / fVar20);
        }
        if (((int)uVar9 == 1) && (fVar19 < *(float *)(param_1 + 0x308))) {
          fVar19 = *(float *)(param_1 + 0x308);
        }
        *(undefined4 *)(param_1 + 0x300) = 2;
        fVar20 = *(float *)(param_1 + 0x2fc) - *(float *)(param_1 + 0x2f8);
        if ((fVar20 == 0.0) || (*(float *)(param_1 + 0x2f4) == 0.0)) {
          *(undefined4 *)(param_1 + 0x304) = 0;
        }
        else {
          *(float *)(param_1 + 0x304) =
               (fVar19 - *(float *)(param_1 + 0x2f8)) / (fVar20 / *(float *)(param_1 + 0x2f4));
        }
      }
    }
    uVar9 = (ulong)*(uint *)(param_1 + 0x300);
    fVar19 = *(float *)(param_1 + 0x304);
    uVar11 = SUB41(fVar19,0);
    uVar13 = (undefined1)((uint)fVar19 >> 8);
    uVar15 = (undefined1)((uint)fVar19 >> 0x10);
    uVar17 = (undefined1)((uint)fVar19 >> 0x18);
    if (((int)*(uint *)(param_1 + 0x300) < 3) &&
       (fVar20 = *(float *)(param_1 + uVar9 * 0xc + 0x2dc), fVar20 <= fVar19)) {
      do {
        if ((((int)uVar9 == 1) && (0.0 < *(float *)(param_1 + 0x308))) &&
           ((*(char *)(param_1 + 0x344) == '\0' ||
            (*(char *)(*(long *)(param_1 + 0x358) + 0x3a4) != '\0')))) {
          uVar2 = *(undefined4 *)(param_1 + 0x2e8);
          *(undefined4 *)(param_1 + 0x304) = uVar2;
          uVar11 = (undefined1)uVar2;
          uVar13 = (undefined1)((uint)uVar2 >> 8);
          uVar15 = (undefined1)((uint)uVar2 >> 0x10);
          uVar17 = (undefined1)((uint)uVar2 >> 0x18);
          uVar9 = 1;
          goto LAB_1005913ec;
        }
        fVar19 = (float)CONCAT13(uVar17,CONCAT12(uVar15,CONCAT11(uVar13,uVar11))) - fVar20;
        uVar11 = SUB41(fVar19,0);
        uVar13 = (undefined1)((uint)fVar19 >> 8);
        uVar15 = (undefined1)((uint)fVar19 >> 0x10);
        uVar17 = (undefined1)((uint)fVar19 >> 0x18);
        *(float *)(param_1 + 0x304) = fVar19;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        *(uint *)(param_1 + 0x300) = uVar1;
      } while (((int)uVar1 < 3) &&
              (fVar20 = *(float *)(param_1 + uVar9 * 0xc + 0x2dc), fVar20 <= fVar19));
    }
    if ((int)uVar9 < 3) {
LAB_1005913ec:
      lVar10 = param_1 + uVar9 * 0xc;
      fVar20 = *(float *)(lVar10 + 0x2dc);
      fVar19 = *(float *)(lVar10 + 0x2e0);
      if (0.0 < fVar20) {
        fVar19 = fVar19 + ((*(float *)(param_1 + uVar9 * 0xc + 0x2e4) - fVar19) / fVar20) *
                          (float)CONCAT13(uVar17,CONCAT12(uVar15,CONCAT11(uVar13,uVar11)));
      }
      if (((int)uVar9 == 1) && (fVar19 < *(float *)(param_1 + 0x308))) {
        fVar19 = *(float *)(param_1 + 0x308);
      }
      fVar19 = fVar19 * *(float *)(param_1 + 0x30c);
      uVar11 = SUB41(fVar19,0);
      uVar13 = (undefined1)((uint)fVar19 >> 8);
      uVar15 = (undefined1)((uint)fVar19 >> 0x10);
      uVar17 = (undefined1)((uint)fVar19 >> 0x18);
    }
    else {
      *(undefined1 *)(param_1 + 0x310) = 0;
      uVar11 = 0;
      uVar13 = 0;
      uVar15 = 0;
      uVar17 = 0;
    }
  }
  iVar8 = FUN_1005902ac(param_1,2,3,&local_44);
  if (iVar8 == 0) {
    *(float *)(param_1 + 0x33c) = (float)local_44 * 1.5258789e-05;
  }
  iVar8 = *(int *)(*(long *)(param_1 + 0x358) + 0x3a0);
  iVar21 = *(int *)(*(long *)(param_1 + 0x358) + 0x39c);
  iVar3 = *(int *)(param_1 + 0x348);
  fVar20 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 800));
  iVar4 = *(int *)(param_1 + 0x324);
  fVar19 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x321));
  if (*(float *)(param_1 + 0x298) <= *(float *)(param_1 + 0x29c)) {
    _sinf(SUB41(((*(float *)(param_1 + 0x29c) - *(float *)(param_1 + 0x298)) / 1000.0) * 6.2831855 *
                *(float *)(param_1 + 0x2a0),0));
    fVar5 = (float)CONCAT13(extraout_var_03,
                            CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) *
            *(float *)(param_1 + 0x33c);
    uVar12 = SUB41(fVar5,0);
    uVar14 = (undefined1)((uint)fVar5 >> 8);
    uVar16 = (undefined1)((uint)fVar5 >> 0x10);
    uVar18 = (undefined1)((uint)fVar5 >> 0x18);
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar18 = 0;
  }
  _exp2f(SUB41(((((float)iVar4 +
                 (float)CONCAT13(uVar17,CONCAT12(uVar15,CONCAT11(uVar13,uVar11))) +
                 (float)iVar8 * 0.00390625 * 100.0 * (float)iVar21 * 0.00012207031 +
                 (float)iVar3 * fVar20 * 0.0078125) - fVar19 * 100.0) +
               (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar12)))) / 1200.0,0));
  (**(code **)(**(long **)(param_1 + 0x318) + 0x40))(*(long **)(param_1 + 0x318),&local_48,0);
  FUN_100581c98(SUB41((float)CONCAT13(extraout_var_04,
                                      CONCAT12(extraout_var_02,
                                               CONCAT11(extraout_var_00,extraout_b0_00))) * local_48
                      ,0),param_1 + 0x20);
  return 0;
}




undefined8 FUN_1005915a0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0xa8))
            ((float)*(int *)(*(long *)(param_1 + 0x358) + 0x3b0) * 0.015625 + -1.0);
  return 0;
}




undefined8
FUN_1005915e0(long param_1,int param_2,long *param_3,long *param_4,uint *param_5,int *param_6,
             undefined4 *param_7,undefined8 param_8,uint *param_9,int *param_10,long *param_11)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = *(long *)(**(long **)(param_1 + 0x18) + 0x4130);
  if (0 < *(int *)(lVar5 + 0x198)) {
    lVar12 = 0;
    lVar13 = *(long *)(lVar5 + 0x1a0);
    puVar8 = (uint *)(lVar13 + 0x108);
    do {
      if ((puVar8[-1] == *(uint *)(param_1 + 0x388)) &&
         (*puVar8 == (uint)*(byte *)(param_1 + 0x38c))) {
        lVar6 = lVar13 + lVar12 * 0x128;
        *param_4 = lVar6;
        uVar1 = *(uint *)(lVar6 + 0x100);
        if (uVar1 == 0) {
          return 0xd;
        }
        lVar6 = 0;
        lVar7 = *(long *)(lVar13 + lVar12 * 0x128 + 0x110);
        puVar10 = (ushort *)(lVar7 + 2);
        while ((param_2 < (int)(uint)puVar10[-1] || ((int)(uint)*puVar10 < param_2))) {
          lVar6 = lVar6 + 1;
          puVar10 = puVar10 + 0x24;
          if (uVar1 <= (uint)lVar6) {
            return 0xd;
          }
        }
        lVar9 = lVar7 + lVar6 * 0x48;
        iVar2 = *(int *)(lVar9 + 0x38);
        lVar11 = (long)iVar2;
        if (*(int *)(lVar9 + 0xc) == 0) {
          if ((iVar2 < 0) || (*(int *)(lVar5 + 0x1a8) <= iVar2)) {
            *param_5 = 0x3c;
            *param_6 = 0;
            *param_7 = 0;
          }
          else {
            lVar5 = *(long *)(lVar5 + 0x1b0) + lVar11 * 0x128;
            *param_5 = (uint)*(ushort *)(lVar5 + 0x108);
            *param_6 = (int)*(short *)(lVar5 + 0x10a);
            *param_7 = *(undefined4 *)(lVar5 + 0x10c);
          }
        }
        else {
          lVar5 = lVar7 + lVar6 * 0x48;
          *param_5 = (uint)*(ushort *)(lVar5 + 0x10);
          *param_6 = (int)*(short *)(lVar5 + 0x12);
          *param_7 = *(undefined4 *)(lVar5 + 0x14);
        }
        lVar7 = lVar7 + lVar6 * 0x48;
        *param_9 = (uint)*(ushort *)(lVar7 + 10);
        *param_10 = *(int *)(lVar7 + 0x3c);
        *param_11 = *(long *)(lVar7 + 0x40);
        if (iVar2 == -1) {
          return 0xd;
        }
        plVar3 = *(long **)(**(long **)(param_1 + 0x18) + 0x4128);
        uVar4 = (**(code **)(*plVar3 + 0x78))(plVar3,lVar11,param_3);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        lVar5 = *(long *)(**(long **)(param_1 + 0x18) + 0x4138);
        if ((lVar5 != 0) && (*param_3 == 0)) {
          *(undefined1 *)(lVar5 + lVar11) = 1;
        }
        iVar2 = *(int *)(lVar13 + lVar12 * 0x128 + 0x118);
        if (iVar2 == 0) {
          return 0;
        }
        lVar5 = *(long *)(lVar13 + lVar12 * 0x128 + 0x120);
        if (lVar5 == 0) {
          return 0;
        }
        *param_10 = iVar2;
        *param_11 = lVar5;
        return 0;
      }
      lVar12 = lVar12 + 1;
      puVar8 = puVar8 + 0x4a;
    } while (lVar12 < *(int *)(lVar5 + 0x198));
  }
  return 0;
}




undefined8
FUN_100591800(long param_1,uint param_2,uint param_3,ulong param_4,ulong param_5,undefined8 param_6,
             undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float local_ac;
  long local_a8;
  long local_a0;
  undefined4 local_94;
  long local_90;
  long local_88;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  cVar1 = *(char *)(param_1 + 0x380);
  if ((cVar1 == '\n') && (*(int *)(param_1 + 0x388) != -0x80000000)) {
    *(undefined4 *)(param_1 + 0x388) = 0x80000000;
  }
  param_2 = param_2 & 0xf0;
  if (param_2 < 0xb0) {
    if (param_2 == 0x80) {
      lVar7 = *(long *)(param_1 + 0x18);
      uVar14 = *(uint *)(lVar7 + 0x10);
      uVar11 = (ulong)uVar14;
      if ((param_3 & 1) == 0) {
        if (*(uint *)(lVar7 + 0x14) <= uVar14) goto LAB_100591be4;
        uVar11 = (ulong)(uVar14 + 1);
        *(uint *)(lVar7 + 0x10) = uVar14 + 1;
        param_4 = (ulong)*(byte *)(*(long *)(lVar7 + 8) + (ulong)uVar14);
      }
      if ((uint)uVar11 < *(uint *)(lVar7 + 0x14)) {
        *(uint *)(lVar7 + 0x10) = (uint)uVar11 + 1;
        *(undefined1 *)(param_1 + 0x381) = *(undefined1 *)(*(long *)(lVar7 + 8) + uVar11);
        if ((param_5 & 1) != 0) {
          return 0;
        }
        plVar15 = (long *)(param_1 + 0x20);
        plVar8 = (long *)*plVar15;
        if (plVar8 == plVar15) {
          return 0;
        }
        do {
          if ((int)param_4 == *(int *)((long)plVar8 + 0x314)) {
            *(undefined1 *)((long)plVar8 + 0x344) = 1;
            *(undefined4 *)((long)plVar8 + 0x314) = 0xffffffff;
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != plVar15);
        return 0;
      }
    }
    else if (param_2 == 0x90) {
      local_78 = 0;
      local_74 = 0;
      local_80 = 0;
      local_7c = 0;
      local_90 = 0;
      local_88 = 0;
      local_94 = 0;
      local_a0 = 0;
      lVar7 = *(long *)(param_1 + 0x18);
      uVar14 = *(uint *)(lVar7 + 0x10);
      uVar11 = (ulong)uVar14;
      if ((param_3 & 1) == 0) {
        if (*(uint *)(lVar7 + 0x14) <= uVar14) goto LAB_100591be4;
        uVar11 = (ulong)(uVar14 + 1);
        *(uint *)(lVar7 + 0x10) = uVar14 + 1;
        param_4 = (ulong)*(byte *)(*(long *)(lVar7 + 8) + (ulong)uVar14);
      }
      if ((uint)uVar11 < *(uint *)(lVar7 + 0x14)) {
        *(uint *)(lVar7 + 0x10) = (uint)uVar11 + 1;
        *(undefined1 *)(param_1 + 0x382) = *(undefined1 *)(*(long *)(lVar7 + 8) + uVar11);
        iVar4 = FUN_1005915e0(param_1,param_4,&local_88,&local_90,&local_74,&local_78,&local_7c,
                              param_8,&local_80,&local_94,&local_a0);
        iVar5 = local_80;
        uVar6 = 0;
        if ((param_5 & 1) != 0) {
          return 0;
        }
        if (iVar4 != 0) {
          return 0;
        }
        if (local_88 == 0) {
          return 0;
        }
        plVar17 = (long *)(param_1 + 0x20);
        plVar15 = (long *)*plVar17;
        plVar8 = plVar15;
        do {
          if (plVar8 == plVar17) {
            if (*(char *)(param_1 + 0x382) == '\0') {
              return 0;
            }
joined_r0x000100591d64:
            while (plVar8 = plVar15, plVar8 != plVar17) {
              plVar15 = (long *)*plVar8;
              if ((iVar5 != 0) && (iVar5 == *(int *)((long)plVar8 + 0x34c))) {
                uVar6 = FUN_100582560(plVar8 + 4,0);
                plVar8[0x52] = 0;
                *(undefined1 *)((long)plVar8 + 0x344) = 0;
                *(undefined4 *)((long)plVar8 + 0x314) = 0xffffffff;
                plVar16 = (long *)plVar8[1];
                *plVar16 = *plVar8;
                *(long **)(*plVar8 + 8) = plVar16;
                *plVar8 = (long)plVar8;
                lVar7 = *(long *)(plVar8[3] + 0x4140);
                *plVar8 = lVar7;
                plVar8[1] = plVar8[3] + 0x4140;
                *(long **)(lVar7 + 8) = plVar8;
                *(long **)plVar8[1] = plVar8;
              }
            }
            lVar7 = **(long **)(param_1 + 0x18);
            if ((*(long *)(lVar7 + 0x4140) == lVar7 + 0x4140) &&
               (*(long *)(lVar7 + 0x4148) == lVar7 + 0x4140)) {
              lVar19 = 0;
              plVar15 = (long *)0x0;
              plVar8 = (long *)0x0;
              fVar22 = 9999.0;
              fVar23 = fVar22;
              do {
                lVar10 = lVar7 + lVar19 * 0x3b8;
                plVar20 = *(long **)(lVar10 + 0x568);
                plVar16 = plVar15;
                plVar18 = plVar8;
                if (plVar20 != (long *)(lVar10 + 0x568)) {
                  do {
                    FUN_10058486c(plVar20 + 4,&local_ac);
                    plVar8 = plVar20;
                    fVar3 = local_ac;
                    if ((int)plVar20[0x59] != 2 || fVar22 <= local_ac) {
                      plVar8 = plVar18;
                      fVar3 = fVar22;
                    }
                    fVar22 = fVar3;
                    plVar15 = plVar20;
                    fVar3 = local_ac;
                    if (fVar23 <= local_ac) {
                      plVar15 = plVar16;
                      fVar3 = fVar23;
                    }
                    fVar23 = fVar3;
                    plVar20 = (long *)*plVar20;
                    lVar7 = **(long **)(param_1 + 0x18);
                    plVar16 = plVar15;
                    plVar18 = plVar8;
                  } while (plVar20 != (long *)(lVar7 + lVar19 * 0x3b8 + 0x568));
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 != 0x10);
              if (plVar8 == (long *)0x0) {
                uVar6 = FUN_100582560(plVar15 + 4,0);
                plVar15[0x52] = 0;
                *(undefined1 *)((long)plVar15 + 0x344) = 0;
                *(undefined4 *)((long)plVar15 + 0x314) = 0xffffffff;
                plVar8 = (long *)plVar15[1];
                *plVar8 = *plVar15;
                *(long **)(*plVar15 + 8) = plVar8;
                *plVar15 = (long)plVar15;
                lVar7 = *(long *)(plVar15[3] + 0x4140);
                *plVar15 = lVar7;
                plVar15[1] = plVar15[3] + 0x4140;
                *(long **)(lVar7 + 8) = plVar15;
                *(long **)plVar15[1] = plVar15;
              }
              else {
                uVar6 = FUN_100582560(plVar8 + 4,0);
                plVar8[0x52] = 0;
                *(undefined1 *)((long)plVar8 + 0x344) = 0;
                *(undefined4 *)((long)plVar8 + 0x314) = 0xffffffff;
                plVar15 = (long *)plVar8[1];
                *plVar15 = *plVar8;
                *(long **)(*plVar8 + 8) = plVar15;
                *plVar8 = (long)plVar8;
                lVar7 = *(long *)(plVar8[3] + 0x4140);
                *plVar8 = lVar7;
                plVar8[1] = plVar8[3] + 0x4140;
                *(long **)(lVar7 + 8) = plVar8;
                *(long **)plVar8[1] = plVar8;
              }
            }
            plVar15 = *(long **)(**(long **)(param_1 + 0x18) + 0x4140);
            plVar8 = (long *)plVar15[1];
            *plVar8 = *plVar15;
            *(long **)(*plVar15 + 8) = plVar8;
            *plVar15 = (long)plVar15;
            lVar7 = *(long *)(param_1 + 0x20);
            *plVar15 = lVar7;
            plVar15[1] = (long)plVar17;
            *(long **)(lVar7 + 8) = plVar15;
            *(long **)plVar15[1] = plVar15;
            *(int *)((long)plVar15 + 0x314) = (int)param_4;
            plVar15[0x6b] = param_1;
            plVar15[99] = local_88;
            *(char *)(plVar15 + 100) = (char)param_4;
            *(char *)((long)plVar15 + 0x321) = (char)local_74;
            *(undefined4 *)((long)plVar15 + 0x324) = local_78;
            *(undefined1 *)(plVar15 + 0x65) = *(undefined1 *)(param_1 + 0x382);
            plVar15[0x52] = local_90;
            *(int *)((long)plVar15 + 0x34c) = local_80;
            uVar21 = _powf(0x41200000,(float)local_7c / 1.31072e+07,uVar6);
            *(undefined4 *)(plVar15 + 0x6a) = uVar21;
            *(undefined4 *)((long)plVar15 + 0x32c) = local_94;
            plVar15[0x66] = local_a0;
            FUN_100590574(plVar15);
            iVar5 = FUN_100585ab0(*(undefined8 *)(**(long **)(param_1 + 0x18) + 0x2d0),&local_a8,
                                  0xffffffff,1,0,0);
            if (iVar5 == 0) {
              plVar8 = plVar15 + 4;
              plVar15[0x36] = local_a8;
              *(uint *)(local_a8 + 0x5c) = *(uint *)(local_a8 + 0x5c) | 0x10000;
              uVar6 = FUN_1005828e0(plVar8,local_88,0,1,1,0);
              if ((int)uVar6 == 0) {
                FUN_100591244(plVar15);
                FUN_100590e18(plVar15);
                (**(code **)(plVar15[4] + 0xa8))
                          ((float)*(int *)(plVar15[0x6b] + 0x3b0) * 0.015625 + -1.0,plVar8);
                FUN_100584678(plVar8,0);
                return 0;
              }
              return uVar6;
            }
            return 0;
          }
          if ((int)param_4 == *(int *)((long)plVar8 + 0x314)) {
            *(undefined1 *)((long)plVar8 + 0x344) = 1;
            *(undefined4 *)((long)plVar8 + 0x314) = 0xffffffff;
            if (*(char *)(param_1 + 0x382) == '\0') {
              return 0;
            }
            goto joined_r0x000100591d64;
          }
          plVar8 = (long *)*plVar8;
        } while( true );
      }
    }
    else {
      if (param_2 != 0xa0) {
        return 0;
      }
      if (param_3 == 0) {
        lVar7 = *(long *)(param_1 + 0x18);
        uVar14 = *(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x14) <= uVar14) goto LAB_100591be4;
        *(uint *)(lVar7 + 0x10) = uVar14 + 1;
        *(undefined1 *)(param_1 + 899) = *(undefined1 *)(*(long *)(lVar7 + 8) + (ulong)uVar14);
      }
      else {
        *(char *)(param_1 + 899) = (char)param_4;
        lVar7 = *(long *)(param_1 + 0x18);
      }
      uVar14 = *(uint *)(lVar7 + 0x10);
      if (uVar14 < *(uint *)(lVar7 + 0x14)) {
        *(uint *)(lVar7 + 0x10) = uVar14 + 1;
        *(undefined1 *)(param_1 + 900) = *(undefined1 *)(*(long *)(lVar7 + 8) + (ulong)uVar14);
        return 0;
      }
    }
LAB_100591be4:
    *(undefined1 *)(lVar7 + 0x24) = 1;
    return 0;
  }
  if (0xcf < param_2) {
    if (param_2 == 0xd0) {
      if (param_3 != 0) {
        *(char *)(param_1 + 0x394) = (char)param_4;
        return 0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      uVar14 = *(uint *)(lVar7 + 0x10);
      if (uVar14 < *(uint *)(lVar7 + 0x14)) {
        *(uint *)(lVar7 + 0x10) = uVar14 + 1;
        *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(*(long *)(lVar7 + 8) + (ulong)uVar14);
        return 0;
      }
    }
    else {
      if (param_2 != 0xe0) {
        return 0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      uVar14 = *(uint *)(lVar7 + 0x10);
      uVar11 = (ulong)uVar14;
      if ((param_3 & 1) == 0) {
        if (*(uint *)(lVar7 + 0x14) <= uVar14) goto LAB_100591be4;
        uVar11 = (ulong)(uVar14 + 1);
        *(uint *)(lVar7 + 0x10) = uVar14 + 1;
        param_4 = (ulong)*(byte *)(*(long *)(lVar7 + 8) + (ulong)uVar14);
      }
      if ((uint)uVar11 < *(uint *)(lVar7 + 0x14)) {
        *(uint *)(lVar7 + 0x10) = (uint)uVar11 + 1;
        *(uint *)(param_1 + 0x39c) =
             (uint)*(byte *)(*(long *)(lVar7 + 8) + uVar11) * 0x80 - 0x2000 | (uint)param_4;
        return 0;
      }
    }
    goto LAB_100591be4;
  }
  if (param_2 != 0xb0) {
    if (param_2 != 0xc0) {
      return 0;
    }
    if (param_3 == 0) {
      lVar7 = *(long *)(param_1 + 0x18);
      uVar14 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x14) <= uVar14) {
        *(undefined1 *)(lVar7 + 0x24) = 1;
        return 0;
      }
      *(uint *)(lVar7 + 0x10) = uVar14 + 1;
      param_4 = (ulong)*(byte *)(*(long *)(lVar7 + 8) + (ulong)uVar14);
    }
    *(char *)(param_1 + 0x38c) = (char)param_4;
    if (cVar1 != '\n') {
      return 0;
    }
    lVar7 = *(long *)(**(long **)(param_1 + 0x18) + 0x4130);
    iVar5 = *(int *)(lVar7 + 0x198);
    if (0 < iVar5) {
      lVar19 = 0;
      bVar2 = false;
      piVar12 = (int *)(*(long *)(lVar7 + 0x1a0) + 0x108);
      do {
        if (piVar12[-1] == *(int *)(param_1 + 0x388)) {
          bVar2 = (bool)(bVar2 | *piVar12 == (int)param_4);
        }
        lVar19 = lVar19 + 1;
        piVar12 = piVar12 + 0x4a;
      } while (lVar19 < iVar5);
      if (bVar2) {
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 0x38c) = 0;
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x18);
  uVar14 = *(uint *)(plVar8 + 2);
  uVar11 = (ulong)uVar14;
  if ((param_3 & 1) == 0) {
    if (*(uint *)((long)plVar8 + 0x14) <= uVar14) goto LAB_100591b5c;
    uVar11 = (ulong)(uVar14 + 1);
    *(uint *)(plVar8 + 2) = uVar14 + 1;
    param_4 = (ulong)*(byte *)(plVar8[1] + (ulong)uVar14);
  }
  if ((uint)uVar11 < *(uint *)((long)plVar8 + 0x14)) {
    *(uint *)(plVar8 + 2) = (uint)uVar11 + 1;
    uVar14 = (uint)param_4;
    if ((int)uVar14 < 0x20) {
      if (uVar14 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0001005919c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&DAT_100592180 + *(int *)(&DAT_100592180 + param_4 * 4)))(0);
        return uVar6;
      }
      return 0;
    }
    if ((int)uVar14 < 0x26) {
      if (uVar14 != 0x20) {
        return 0;
      }
      uVar14 = *(uint *)(param_1 + 0x388) | (uint)*(byte *)(plVar8[1] + uVar11);
      *(uint *)(param_1 + 0x388) = uVar14;
      if (uVar14 == 0) {
        return 0;
      }
      iVar5 = *(int *)(*(long *)(*plVar8 + 0x4130) + 0x198);
      if (0 < iVar5) {
        lVar7 = 0;
        bVar2 = false;
        puVar13 = (uint *)(*(long *)(*(long *)(*plVar8 + 0x4130) + 0x1a0) + 0x108);
        do {
          if (puVar13[-1] == uVar14) {
            bVar2 = (bool)(bVar2 | *puVar13 == (uint)*(byte *)(param_1 + 0x38c));
          }
          lVar7 = lVar7 + 1;
          puVar13 = puVar13 + 0x4a;
        } while (lVar7 < iVar5);
        if (bVar2) {
          return 0;
        }
      }
      *(undefined4 *)(param_1 + 0x388) = 0;
      return 0;
    }
    uVar9 = (uint)*(byte *)(plVar8[1] + uVar11);
    if ((int)uVar14 < 100) {
      if (uVar14 == 0x26) {
        if (*(int *)(param_1 + 0x390) == 0) {
          *(uint *)(param_1 + 0x3a0) = *(uint *)(param_1 + 0x3a0) | uVar9;
          return 0;
        }
        return 0;
      }
      if (uVar14 == 0x40) {
        if (uVar9 == 0) {
          *(undefined1 *)(param_1 + 0x3a4) = 0;
          return 0;
        }
        *(undefined1 *)(param_1 + 0x3a4) = 1;
        return 0;
      }
      return 0;
    }
    if (uVar14 == 100) {
      *(uint *)(param_1 + 0x390) = *(uint *)(param_1 + 0x390) | uVar9;
      return 0;
    }
    if (uVar14 == 0x65) {
      *(uint *)(param_1 + 0x390) = uVar9 << 8;
      return 0;
    }
    return 0;
  }
LAB_100591b5c:
  *(undefined1 *)((long)plVar8 + 0x24) = 1;
  return 0;
}




undefined8 FUN_1005921b0(long param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    *(uint *)(param_1 + 0x10) = uVar1 + 1;
    *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + (ulong)uVar1);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  return 0x10;
}




undefined8 FUN_1005921f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*(long *)(param_1 + 0x20);
  while (plVar1 = plVar2, plVar1 != (long *)(param_1 + 0x20)) {
    plVar2 = (long *)*plVar1;
    if (plVar1[0x52] != 0) {
      FUN_100590e18(plVar1);
      *(float *)((long)plVar1 + 0x2cc) =
           *(float *)(**(long **)(param_1 + 0x18) + 0x4110) + *(float *)((long)plVar1 + 0x2cc);
      FUN_100591244(plVar1);
      *(float *)((long)plVar1 + 0x304) =
           *(float *)(**(long **)(param_1 + 0x18) + 0x4110) + *(float *)((long)plVar1 + 0x304);
      (**(code **)(plVar1[4] + 0xa8))
                ((float)*(int *)(plVar1[0x6b] + 0x3b0) * 0.015625 + -1.0,plVar1 + 4);
      *(float *)((long)plVar1 + 0x29c) =
           *(float *)(**(long **)(param_1 + 0x18) + 0x4110) + *(float *)((long)plVar1 + 0x29c);
    }
  }
  return 0;
}




undefined8 FUN_1005922e4(long param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0;
  cVar3 = '\0';
  uVar4 = *(uint *)(param_1 + 0x10);
  do {
    if (cVar3 == '\x04' || *(uint *)(param_1 + 0x14) <= uVar4) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      return 0x10;
    }
    *(uint *)(param_1 + 0x10) = uVar4 + 1;
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + (ulong)uVar4);
    uVar2 = uVar2 << 7 | bVar1 & 0x7f;
    cVar3 = cVar3 + '\x01';
    uVar4 = uVar4 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar2;
  return 0;
}




undefined8 FUN_100592340(long param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    uVar3 = 0x10;
  }
  else {
    iVar1 = uVar2 - uVar4;
    if (uVar4 + param_3 <= uVar2) {
      iVar1 = param_3;
    }
    if (param_2 != (void *)0x0) {
      _memcpy(param_2,(void *)(*(long *)(param_1 + 8) + (ulong)uVar4),(long)iVar1);
      uVar4 = *(uint *)(param_1 + 0x10);
    }
    uVar3 = 0;
    *(uint *)(param_1 + 0x10) = uVar4 + iVar1;
  }
  return uVar3;
}




undefined8 FUN_1005923b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = (int)param_3;
  if ((param_4 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 2);
    uVar3 = *(uint *)((long)param_1 + 0x14);
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      iVar1 = uVar3 - uVar2;
      if (uVar2 + iVar6 <= uVar3) {
        iVar1 = iVar6;
      }
      *(uint *)(param_1 + 2) = iVar1 + uVar2;
      return 0;
    }
  }
  else {
    pvVar4 = (void *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                                   ,0x913,0);
    if (pvVar4 == (void *)0x0) {
      return 0x26;
    }
    uVar2 = *(uint *)(param_1 + 2);
    uVar3 = *(uint *)((long)param_1 + 0x14);
    if (uVar2 < uVar3) {
      iVar1 = uVar3 - uVar2;
      if (uVar2 + iVar6 <= uVar3) {
        iVar1 = iVar6;
      }
      _memcpy(pvVar4,(void *)(param_1[1] + (ulong)uVar2),(long)iVar1);
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar1;
      uVar5 = FUN_100586684(*param_1,7,param_2,pvVar4,param_3,3,0);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pvVar4,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                    ,0x921);
      return uVar5;
    }
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return 0x10;
}




undefined8 FUN_100592cc8(long param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x4108));
  fVar3 = ((fVar3 / *(float *)(param_1 + 0x4118)) / (float)*(int *)(param_1 + 0x40f0)) / 1000.0;
  fVar4 = (fVar3 / 1000.0) * (float)*(int *)(*(long *)(param_1 + 8) + 0x108);
  uVar2 = (uint)(fVar4 + 0.5);
  uVar1 = *(uint *)(param_1 + 0x40d8);
  if (*(uint *)(param_1 + 0x40d8) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x40d4) = uVar1;
  fVar4 = (float)uVar1 / fVar4;
  *(float *)(param_1 + 0x40dc) = fVar4;
  *(float *)(param_1 + 0x4110) = fVar4 * fVar3;
  return 0;
}




undefined8 FUN_100592d58(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  bVar1 = false;
  lVar2 = *(long *)(param_1 + 0x48);
  if ((lVar2 != 0) && (((param_2 ^ 1) & 1) == 0)) {
    bVar1 = true;
    FUN_10057097c(lVar2,1);
  }
  if (0 < *(int *)(param_1 + 0x40e8)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_1005924d8(*(long *)(param_1 + 0x4100) + lVar3,0);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (lVar4 < *(int *)(param_1 + 0x40e8));
  }
  FUN_1005921f0(param_1 + 0x548);
  FUN_1005921f0(param_1 + 0x900);
  FUN_1005921f0(param_1 + 0xcb8);
  FUN_1005921f0(param_1 + 0x1070);
  FUN_1005921f0(param_1 + 0x1428);
  FUN_1005921f0(param_1 + 0x17e0);
  FUN_1005921f0(param_1 + 0x1b98);
  FUN_1005921f0(param_1 + 0x1f50);
  FUN_1005921f0(param_1 + 0x2308);
  FUN_1005921f0(param_1 + 0x26c0);
  FUN_1005921f0(param_1 + 0x2a78);
  FUN_1005921f0(param_1 + 0x2e30);
  FUN_1005921f0(param_1 + 0x31e8);
  FUN_1005921f0(param_1 + 0x35a0);
  FUN_1005921f0(param_1 + 0x3958);
  FUN_1005921f0(param_1 + 0x3d10);
  *(float *)(param_1 + 0x410c) = *(float *)(param_1 + 0x40dc) + *(float *)(param_1 + 0x410c);
  *(int *)(param_1 + 0x40e0) = *(int *)(param_1 + 0x40e0) + *(int *)(param_1 + 0x40d4);
  if ((lVar2 != 0) && (bVar1)) {
    FUN_100570990(lVar2,1);
  }
  return 0;
}




undefined8 FUN_100592ee4(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  iVar3 = *(int *)(param_1 + 0x40e8);
  if (0 < iVar3) {
    lVar6 = 0;
    puVar7 = (undefined1 *)(*(long *)(param_1 + 0x4100) + 0x26);
    do {
      *(undefined4 *)(puVar7 + -0x16) = 0;
      *(undefined4 *)(puVar7 + -6) = 0;
      puVar7[-2] = 0;
      *puVar7 = 0;
      lVar6 = lVar6 + 1;
      puVar7[-10] = 0;
      puVar7 = puVar7 + 0x28;
    } while (lVar6 < iVar3);
  }
  *(long *)(param_1 + 0x4148) = param_1 + 0x4140;
  *(long *)(param_1 + 0x4140) = param_1 + 0x4140;
  *(undefined8 *)(param_1 + 0x4150) = 0;
  if (0 < *(int *)(param_1 + 0x2e0)) {
    lVar8 = 0;
    lVar6 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x540) + lVar8);
      *plVar1 = (long)plVar1;
      plVar1[1] = (long)plVar1;
      plVar1[2] = 0;
      FUN_100582560(plVar1 + 4,0);
      plVar1[0x52] = 0;
      *(undefined1 *)((long)plVar1 + 0x344) = 0;
      *(undefined4 *)((long)plVar1 + 0x314) = 0xffffffff;
      plVar2 = (long *)plVar1[1];
      *plVar2 = *plVar1;
      *(long **)(*plVar1 + 8) = plVar2;
      *plVar1 = (long)plVar1;
      lVar4 = *(long *)(plVar1[3] + 0x4140);
      *plVar1 = lVar4;
      plVar1[1] = plVar1[3] + 0x4140;
      *(long **)(lVar4 + 8) = plVar1;
      *(long **)plVar1[1] = plVar1;
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x360;
    } while (lVar6 < *(int *)(param_1 + 0x2e0));
  }
  puVar5 = (undefined8 *)(param_1 + 0x560);
  lVar6 = 1;
  do {
    puVar5[3] = 0;
    *(char *)(puVar5 + 0x6d) = (char)lVar6;
    puVar5[1] = puVar5 + 1;
    puVar5[2] = puVar5 + 1;
    *(undefined4 *)(puVar5 + 0x73) = 0x40;
    *(undefined4 *)((long)puVar5 + 0x394) = 100;
    *(undefined4 *)((long)puVar5 + 0x39c) = 0x7f;
    *(undefined4 *)(puVar5 + 0x72) = 0;
    *(undefined4 *)(puVar5 + 0x6e) = 0;
    *(undefined1 *)((long)puVar5 + 0x374) = 0;
    *(undefined4 *)(puVar5 + 0x71) = 0x200;
    *(undefined4 *)(puVar5 + 0x6f) = 0xffffffff;
    if ((param_2 & 1) != 0) {
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 0x70) = 0x3f800000;
    }
    puVar5 = puVar5 + 0x77;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x11);
  *(undefined4 *)(param_1 + 0x410c) = 0;
  *(undefined4 *)(param_1 + 0x40e0) = 0;
  *(undefined4 *)(param_1 + 0x40d0) = 0;
  *(undefined4 *)(param_1 + 0x4114) = 0;
  *(undefined4 *)(param_1 + 0x4118) = 0x3f800000;
  return 0;
}




void FUN_100593094(undefined4 *param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  uint local_294;
  undefined1 auStack_290 [4];
  uint local_28c;
  undefined *local_288;
  undefined4 local_27c;
  undefined4 local_278 [10];
  undefined4 *local_250;
  undefined4 local_248;
  undefined1 auStack_190 [4];
  uint local_18c;
  ushort local_188;
  ushort local_186;
  ushort local_184;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_78;
  
  puVar5 = PTR_defaultFileSeek_101444160;
  puVar12 = PTR_defaultFileRead_101444158;
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  local_17c = 0;
  param_1[0x14] = 7;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = puVar12;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar5;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_78 = lVar14;
  FUN_10057f888(param_1 + 0xba);
  uVar9 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),&local_17c);
  if (((int)uVar9 != 0) ||
     (uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_190,1,0xe,0), (int)uVar9 != 0))
  goto LAB_1005931c0;
  uVar7 = (local_18c & 0xff00ff00) >> 8 | (local_18c & 0xff00ff) << 8;
  local_18c = uVar7 >> 0x10 | uVar7 << 0x10;
  local_188 = local_188 >> 8 | local_188 << 8;
  local_184 = local_184 >> 8 | local_184 << 8;
  local_186 = local_186 >> 8 | local_186 << 8;
  iVar6 = FUN_1005ed0f8(auStack_190,"MThd",4);
  if (iVar6 != 0) {
    uVar9 = 0x13;
    goto LAB_1005931c0;
  }
  puVar1 = param_1 + 0x103a;
  puVar2 = param_1 + 0x103c;
  puVar3 = param_1 + 0x1042;
  *puVar1 = local_186 + 1;
  param_1[0x103b] = (uint)local_188;
  *puVar2 = (uint)local_184;
  *puVar3 = 500000;
  param_1[0x1046] = 1.0;
  if (param_3 == 0) {
    param_1[0xb8] = 0x40;
    uVar7 = 0x200;
  }
  else {
    iVar6 = 0x40;
    if (*(int *)(param_3 + 0x60) != 0) {
      iVar6 = *(int *)(param_3 + 0x60);
    }
    param_1[0xb8] = iVar6;
    uVar7 = 0x200;
    if (*(uint *)(param_3 + 0xd8) != 0) {
      uVar7 = *(uint *)(param_3 + 0xd8);
    }
  }
  piVar19 = param_1 + 0xb8;
  param_1[0x1036] = uVar7;
  local_27c = 0xffffffff;
  _memset(&local_178,0,0x100);
  if ((param_3 != 0) && (*(char **)(param_3 + 0x50) != (char *)0x0)) {
    _strncpy((char *)&local_178,*(char **)(param_3 + 0x50),0x100);
  }
  _memset(local_278,0,0xe8);
  local_278[0] = 0xe8;
  local_250 = &local_27c;
  local_248 = 1;
  *(undefined8 *)(param_1 + 0x1048) = 0;
  ppuVar17 = (undefined **)PTR_LOOP_101868668;
  if ((undefined **)PTR_LOOP_101868668 == &PTR_LOOP_101868668) {
LAB_100593350:
    local_288 = (undefined *)0x0;
    uVar7 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),&local_178,8,local_278,&local_288);
    if (uVar7 != 0) {
      uVar11 = 0x37;
      if (uVar7 != 0x12) {
        uVar11 = uVar7;
      }
      uVar9 = (ulong)uVar11;
      goto LAB_1005931c0;
    }
    lVar10 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x128,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                           ,0xba2,0,0);
    *(long *)lVar10 = lVar10;
    *(long *)(lVar10 + 8) = lVar10;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    *(long *)(param_1 + 0x1048) = lVar10;
    if (lVar10 == 0) {
      uVar9 = 0x26;
      goto LAB_1005931c0;
    }
    FUN_1005ecc98(lVar10 + 0x18,&local_178,0x100);
    puVar13 = *(undefined8 **)(param_1 + 0x1048);
    *(undefined4 *)(puVar13 + 0x24) = 1;
    puVar13[0x23] = local_288;
    *puVar13 = &PTR_LOOP_101868668;
    puVar13[1] = PTR_LOOP_101868670;
    PTR_LOOP_101868670 = (undefined *)puVar13;
    *(undefined8 **)puVar13[1] = puVar13;
    puVar12 = local_288;
  }
  else {
    do {
      iVar6 = FUN_1005ed0f8(ppuVar17 + 3,&local_178,0x100);
      if (iVar6 == 0) {
        *(undefined ***)(param_1 + 0x1048) = ppuVar17;
        *(int *)(ppuVar17 + 0x24) = *(int *)(ppuVar17 + 0x24) + 1;
        goto LAB_100593344;
      }
      ppuVar17 = (undefined **)*ppuVar17;
    } while (ppuVar17 != &PTR_LOOP_101868668);
    ppuVar17 = *(undefined ***)(param_1 + 0x1048);
LAB_100593344:
    if (ppuVar17 == (undefined **)0x0) goto LAB_100593350;
    puVar12 = ppuVar17[0x23];
  }
  *(undefined **)(param_1 + 0x104a) = puVar12;
  *(undefined8 *)(param_1 + 0x104c) = *(undefined8 *)(puVar12 + 0x58);
  lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*puVar1 * 0x28,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                         ,0xbb5,0);
  *(long *)(param_1 + 0x1040) = lVar10;
  if (lVar10 == 0) {
    uVar9 = 0x26;
  }
  else {
    lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xb8] * 0x360,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                           ,0xbbb,0);
    *(long *)(param_1 + 0x150) = lVar10;
    if (lVar10 == 0) {
      uVar9 = 0x26;
    }
    else {
      if (0 < *piVar19) {
        lVar16 = 0;
        lVar18 = 0;
        do {
          lVar10 = lVar10 + lVar16;
          *(long *)lVar10 = lVar10;
          *(long *)(lVar10 + 8) = lVar10;
          *(undefined8 *)(lVar10 + 0x10) = 0;
          FUN_100583c48(lVar10 + 0x20);
          FUN_100583b48(*(long *)(param_1 + 0x150) + lVar16 + 0x20);
          lVar10 = *(long *)(param_1 + 0x150);
          lVar4 = lVar10 + lVar16;
          *(undefined4 *)(lVar4 + 0x200) = 1000;
          *(undefined4 **)(lVar4 + 0x40) = param_1 + 0xba;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x12);
          *(undefined4 **)(lVar4 + 0x18) = param_1;
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + 0x360;
        } while (lVar18 < (int)param_1[0xb8]);
      }
      _bzero(param_1 + 0x66,0x130);
      iVar6 = 0;
      *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
      param_1[0xa9] = local_17c;
      iVar15 = 6;
      do {
        uVar9 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iVar15 + 8,0);
        if (((int)uVar9 != 0) ||
           (uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_290,1,8,0), (int)uVar9 != 0
           )) goto LAB_1005931c0;
        uVar7 = (local_28c & 0xff00ff00) >> 8 | (local_28c & 0xff00ff) << 8;
        local_28c = uVar7 >> 0x10 | uVar7 << 0x10;
        iVar8 = FUN_1005ed0f8(auStack_290,"MTrk",4);
        if (iVar8 == 0) {
          lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_28c,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                                 ,0xbf5,0);
          *(long *)(*(long *)(param_1 + 0x1040) + (long)iVar6 * 0x28 + 8) = lVar10;
          if (lVar10 == 0) {
            uVar9 = 0x26;
            goto LAB_1005931c0;
          }
          uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),lVar10,1,local_28c,0);
          if (((uint)uVar9 | 0x10) != 0x10) goto LAB_1005931c0;
          puVar13 = (undefined8 *)(*(long *)(param_1 + 0x1040) + (long)iVar6 * 0x28);
          *(int *)(puVar13 + 3) = iVar6;
          *(undefined4 *)(puVar13 + 2) = 0;
          *(uint *)((long)puVar13 + 0x14) = local_28c;
          *puVar13 = param_1;
          iVar6 = iVar6 + 1;
        }
        else {
          FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_28c,1);
        }
        uVar7 = local_28c + 8 + iVar15;
        iVar15 = local_28c + 8 + iVar15;
        lVar10 = *(long *)(param_1 + 2);
      } while ((ulong)uVar7 < (ulong)*(uint *)(lVar10 + 0x10c) - 0x10 && iVar15 != 0);
      if ((param_3 == 0) || (iVar6 = *(int *)(param_3 + 0x14), iVar6 == 0)) {
        iVar6 = 5;
      }
      *(int *)(lVar10 + 0x100) = iVar6;
      *(undefined4 *)(lVar10 + 0x104) = 2;
      iVar6 = *(int *)(*(long *)(param_1 + 0x12) + 0x708);
      *(int *)(lVar10 + 0x108) = iVar6;
      fVar20 = (float)NEON_ucvtf(*puVar3);
      fVar20 = ((fVar20 / (float)param_1[0x1046]) / (float)(int)*puVar2) / 1000.0;
      fVar21 = (fVar20 / 1000.0) * (float)iVar6;
      uVar11 = (uint)(fVar21 + 0.5);
      uVar7 = param_1[0x1036];
      if (uVar7 <= uVar11) {
        uVar7 = uVar11;
      }
      param_1[0x1035] = uVar7;
      fVar21 = (float)uVar7 / fVar21;
      param_1[0x1037] = fVar21;
      param_1[0x1044] = fVar20 * fVar21;
      FUN_100592ee4(param_1,1);
      lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                             *(undefined4 *)(*(long *)(param_1 + 0x104a) + 0xa8),
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                             ,0xc34,0);
      *(long *)(param_1 + 0x104e) = lVar10;
      if (lVar10 == 0) {
        uVar9 = 0x26;
      }
      else {
        *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
        uVar9 = (ulong)*puVar1;
        if (*puVar1 != 0) {
          do {
            if ((int)uVar9 < 1) {
              iVar6 = 0;
            }
            else {
              lVar18 = 0;
              lVar10 = 0;
              iVar6 = 0;
              lVar16 = *(long *)(param_1 + 0x1040);
              do {
                FUN_1005924d8(lVar16 + lVar18,1);
                lVar16 = *(long *)(param_1 + 0x1040);
                if ((*(char *)(lVar16 + lVar18 + 0x24) != '\0') ||
                   (*(long *)(lVar16 + lVar18 + 8) == 0)) {
                  iVar6 = iVar6 + 1;
                }
                lVar10 = lVar10 + 1;
                uVar9 = (ulong)(int)*puVar1;
                lVar18 = lVar18 + 0x28;
              } while (lVar10 < (long)uVar9);
            }
            fVar20 = (float)NEON_ucvtf(*puVar3);
            param_1[0x1045] =
                 (float)param_1[0x1045] + ((fVar20 / (float)(int)*puVar2) / 1000.0) * 10.0;
            param_1[0x1043] = (float)param_1[0x1043] + 10.0;
          } while (iVar6 != (int)uVar9);
        }
        if ((param_3 == 0) || (*(int *)(param_3 + 4) != -1)) {
          lVar10 = *(long *)(param_1 + 2);
          iVar6 = (int)(((float)param_1[0x1045] / 1000.0) * (float)*(int *)(lVar10 + 0x108));
        }
        else {
          lVar10 = *(long *)(param_1 + 2);
          iVar6 = -1;
        }
        *(int *)(lVar10 + 0x110) = iVar6;
        local_294 = (uint)(*(long *)(param_1 + 0x158) != 0);
        if (*(long *)(param_1 + 0x246) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x334) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x422) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x510) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x5fe) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x6ec) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x7da) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x8c8) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0x9b6) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0xaa4) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0xb92) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0xc80) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0xd6e) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0xe5c) != 0) {
          local_294 = local_294 + 1;
        }
        if (*(long *)(param_1 + 0xf4a) != 0) {
          local_294 = local_294 + 1;
        }
        uVar9 = FUN_100586684(param_1,9,"Number of channels",&local_294,4,1,0);
        if ((int)uVar9 == 0) {
          lVar10 = *(long *)(param_1 + 0x104a);
          if (0 < *(int *)(lVar10 + 0xa8)) {
            lVar18 = 0;
            do {
              if ((*(char *)(*(long *)(param_1 + 0x104e) + lVar18) != '\0') &&
                 (*(long *)(*(long *)(lVar10 + 0x98) + lVar18 * 8) == 0)) {
                uVar9 = FUN_1005e9d94(lVar10,lVar18,8);
                if ((int)uVar9 != 0) goto LAB_1005931c0;
                lVar10 = *(long *)(param_1 + 0x104a);
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 < *(int *)(lVar10 + 0xa8));
          }
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x104e),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                        ,0xc88);
          *(undefined8 *)(param_1 + 0x104e) = 0;
          local_150 = 0;
          uStack_148 = 0;
          local_160 = 0;
          uStack_158 = 0;
          uStack_168 = 0;
          local_178 = 0;
          local_170 = "FMOD MIDI Target Unit";
          uVar9 = FUN_10056b4fc(*(undefined8 *)(param_1 + 0x12),&local_178,0,param_1 + 0xb2,1);
          if ((int)uVar9 == 0) {
            FUN_1005c9948(*(undefined8 *)(param_1 + 0xb2),0,
                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
            FUN_1005c982c(*(undefined8 *)(param_1 + 0xb2),1,0);
            *(undefined8 *)(param_1 + 0x146) = *(undefined8 *)(param_1 + 0xb2);
            *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0xb2);
            *(undefined8 *)(param_1 + 0x14c) = 0;
            *(undefined8 *)(param_1 + 0x14a) = 0;
            param_1[0xc6] = 0x3f800000;
            FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                          ,0xca7,0);
            lVar10 = FUN_100585974();
            *(long *)(param_1 + 0xb4) = lVar10;
            if (lVar10 == 0) {
              uVar9 = 0x26;
            }
            else {
              uVar9 = FUN_100585980(lVar10,*(undefined8 *)(param_1 + 0x12),0,param_1[0xb8]);
              if ((int)uVar9 == 0) {
                lVar10 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                       param_1[0xb8] * 0x2b8,
                                       "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                                       ,0xcbb,0);
                *(long *)(param_1 + 0xb6) = lVar10;
                if (lVar10 == 0) {
                  uVar9 = 0x26;
                }
                else if (*piVar19 < 1) {
LAB_100593b3c:
                  FUN_100592ee4(param_1,0);
                  uVar9 = 0;
                  *param_1 = 0;
                  param_1[0x1039] = 1;
                }
                else {
                  FUN_10057bd44();
                  uVar9 = FUN_100585cc0(*(undefined8 *)(param_1 + 0xb4),0,
                                        *(undefined8 *)(param_1 + 0xb6));
                  lVar10 = 1;
                  lVar18 = 0x2b8;
                  iVar6 = (int)uVar9;
                  while (iVar6 == 0) {
                    if (*piVar19 <= lVar10) goto LAB_100593b3c;
                    FUN_10057bd44(*(long *)(param_1 + 0xb6) + lVar18);
                    uVar9 = FUN_100585cc0(*(undefined8 *)(param_1 + 0xb4),lVar10,
                                          *(long *)(param_1 + 0xb6) + lVar18);
                    lVar10 = lVar10 + 1;
                    lVar18 = lVar18 + 0x2b8;
                    iVar6 = (int)uVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1005931c0:
  if (lVar14 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar9);
}




undefined8 FUN_100593b64(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x2d0) != 0) {
    FUN_100585a04();
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_1005cdc44(*(long *)(param_1 + 0x2c8),1,0);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x4120);
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0x120) + -1;
    *(int *)(lVar4 + 0x120) = iVar3;
    if (iVar3 == 0) {
      (**(code **)(**(long **)(lVar4 + 0x118) + 0x18))(*(long **)(lVar4 + 0x118),1);
      plVar2 = *(long **)(param_1 + 0x4120);
      plVar1 = (long *)plVar2[1];
      *plVar1 = *plVar2;
      *(long **)(*plVar2 + 8) = plVar1;
      *plVar2 = (long)plVar2;
      plVar2[1] = (long)plVar2;
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar2,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                    ,0xcff);
    }
    *(undefined8 *)(param_1 + 0x4128) = 0;
    *(undefined8 *)(param_1 + 0x4130) = 0;
    *(undefined8 *)(param_1 + 0x4120) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x4100);
  if (lVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x40e8);
    lVar5 = 8;
    if (0 < iVar3) {
      lVar6 = 0;
      while( true ) {
        if (*(long *)(lVar4 + lVar5) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar4 + lVar5),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                        ,0xd0c);
          iVar3 = *(int *)(param_1 + 0x40e8);
        }
        lVar6 = lVar6 + 1;
        if (iVar3 <= lVar6) break;
        lVar5 = lVar5 + 0x28;
        lVar4 = *(long *)(param_1 + 0x4100);
      }
      lVar4 = *(long *)(param_1 + 0x4100);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar4,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                  ,0xd0f);
  }
  if (*(long *)(param_1 + 0x540) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x540),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                  ,0xd14);
    *(undefined8 *)(param_1 + 0x540) = 0;
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2d8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_midi.cpp"
                  ,0xd1a);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  return 0;
}




int FUN_100593d18(long param_1,void *param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  long lVar15;
  int local_10ec;
  long local_10e8;
  undefined8 local_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined4 local_10c0;
  undefined4 local_10bc;
  long local_10b8;
  undefined4 local_10b0;
  undefined4 local_10ac;
  undefined4 local_10a8;
  undefined1 *local_10a0;
  undefined1 *puStack_1098;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1078 [4096];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar14 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  uVar11 = param_3;
  if (uVar14 < 5) {
    uVar11 = *(int *)(&DAT_10115e8c0 + (long)(int)uVar14 * 4) * param_3 >> 3;
  }
  _bzero(param_2,(ulong)(uVar11 * *(int *)(*(long *)(param_1 + 8) + 0x104)));
  uVar11 = *(uint *)(param_1 + 0x40d0);
  iVar9 = 0;
  if (param_3 != 0) {
    uVar14 = 0;
    piVar1 = (int *)(param_1 + 0x40e4);
    local_10ec = (int)piVar1;
    pvVar13 = param_2;
    iVar9 = 0;
    do {
      if (uVar11 == 0) {
        FUN_100592d58(param_1,1);
        iVar9 = 0;
        uVar11 = *(uint *)(param_1 + 0x40d4);
      }
      uVar12 = param_3 - uVar14;
      if (uVar11 + uVar14 <= param_3) {
        uVar12 = uVar11;
      }
      lVar15 = *(long *)(param_1 + 0x48);
      uVar2 = *(uint *)(lVar15 + 0x710);
      if (uVar12 <= *(uint *)(lVar15 + 0x710)) {
        uVar2 = uVar12;
      }
      if (param_2 != (void *)0x0) {
        local_10ac = 0;
        local_1088 = 0;
        uStack_1080 = 0;
        local_10b0 = 0x200;
        local_10a8 = 0;
        local_10a0 = auStack_1078;
        local_10b8 = lVar15;
        puStack_1098 = local_10a0;
        if (lVar15 == 0) {
          bVar7 = false;
          local_10e8 = 0;
          bVar4 = false;
          bVar6 = true;
        }
        else {
          bVar6 = true;
          FUN_10057097c(lVar15,1);
          local_10e8 = *(long *)(param_1 + 0x48);
          if (local_10e8 == 0) {
            local_10e8 = 0;
            bVar4 = false;
            bVar7 = true;
          }
          else {
            FUN_10057097c(local_10e8,3);
            bVar6 = false;
            bVar7 = true;
            bVar4 = true;
          }
        }
        if (*(char *)(*(long *)(param_1 + 0x2c8) + 0x3f) == '\0') {
LAB_100593ef0:
          local_10c0 = 0;
          local_10d0 = 0;
          uStack_10c8 = 0;
          local_10d8 = 0;
          local_10bc = 0xffffffff;
          iVar9 = FUN_1005c9be4(&local_10b8,uVar2,3,2,&local_10d8);
          if (iVar9 == 0) {
            uVar10 = FUN_1005c8da0(&local_10d8);
            bVar5 = true;
            iVar9 = FUN_10063a2fc(0x3f800000,pvVar13,uVar10,
                                  *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar2 << 1,1,1,1
                                 );
            iVar8 = iVar9;
            if (iVar9 == 0) {
              FUN_1005c8d10(&local_10d8);
              bVar5 = false;
              iVar9 = 0;
              iVar8 = local_10ec;
            }
          }
          else {
            bVar5 = true;
            iVar8 = iVar9;
          }
          local_10ec = iVar8;
          FUN_1005c8e48(&local_10d8);
        }
        else {
          *piVar1 = *piVar1 + 1;
          iVar9 = FUN_1005cb3bc(&local_10b8,*(long *)(param_1 + 0x2c8),uVar2);
          if (iVar9 == 0) goto LAB_100593ef0;
          bVar5 = true;
          local_10ec = iVar9;
        }
        if (!bVar6 && bVar4) {
          FUN_100570990(local_10e8,3);
        }
        if ((lVar15 != 0) && (bVar7)) {
          FUN_100570990(lVar15,1);
        }
        if (bVar5) goto LAB_100594030;
      }
      uVar3 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
      uVar12 = uVar2;
      if (uVar3 < 5) {
        uVar12 = *(int *)(&DAT_10115e8c0 + (long)(int)uVar3 * 4) * uVar2 >> 3;
      }
      uVar14 = uVar2 + uVar14;
      pvVar13 = (void *)((long)pvVar13 + (ulong)(uVar12 * *(int *)(*(long *)(param_1 + 8) + 0x104)))
      ;
      uVar11 = uVar11 - uVar2;
    } while (uVar14 < param_3);
  }
  *(uint *)(param_1 + 0x40d0) = uVar11;
  local_10ec = iVar9;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_100594030:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_10ec;
}




undefined8 FUN_100594074(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x40e0);
  if (uVar2 != param_3) {
    if (uVar2 <= param_3) goto LAB_1005940d4;
    uVar1 = *(undefined4 *)(param_1 + 0x4118);
    FUN_100592ee4(param_1,0);
    *(undefined4 *)(param_1 + 0x4118) = uVar1;
    while( true ) {
      uVar2 = *(uint *)(param_1 + 0x40e0);
LAB_1005940d4:
      if (param_3 <= uVar2) break;
      FUN_100592d58(param_1,1);
    }
  }
  return 0;
}




undefined8 FUN_1005940f4(long param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 != (uint *)0x0) {
    bVar2 = *(long *)(param_1 + 0x560) != 0;
    uVar3 = 1;
    if (bVar2) {
      uVar3 = 2;
    }
    uVar1 = (uint)bVar2;
    if (*(long *)(param_1 + 0x918) != 0) {
      uVar1 = uVar3;
    }
    if (*(long *)(param_1 + 0xcd0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1088) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1440) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x17f8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1bb0) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x1f68) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x2320) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x26d8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x2a90) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x2e48) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x3200) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x35b8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x3970) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x3d28) != 0) {
      uVar1 = uVar1 + 1;
    }
    *param_2 = uVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005941dc(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  if (1.0 < param_1 || 0xf < param_3) {
    return 0x1f;
  }
  if (param_1 < 0.0) {
    return 0x1f;
  }
  if (*(long *)(param_2 + 0x560) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      lVar2 = 0;
      goto LAB_100594380;
    }
    uVar1 = 1;
  }
  if (*(long *)(param_2 + 0x918) != 0) {
    lVar2 = 1;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0xcd0) != 0) {
    lVar2 = 2;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1088) != 0) {
    lVar2 = 3;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1440) != 0) {
    lVar2 = 4;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x17f8) != 0) {
    lVar2 = 5;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1bb0) != 0) {
    lVar2 = 6;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x1f68) != 0) {
    lVar2 = 7;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x2320) != 0) {
    lVar2 = 8;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x26d8) != 0) {
    lVar2 = 9;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x2a90) != 0) {
    lVar2 = 10;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x2e48) != 0) {
    lVar2 = 0xb;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x3200) != 0) {
    lVar2 = 0xc;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x35b8) != 0) {
    lVar2 = 0xd;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_2 + 0x3970) != 0) {
    lVar2 = 0xe;
    if (uVar1 == param_3) goto LAB_100594380;
    uVar1 = uVar1 + 1;
  }
  lVar2 = 0xf;
  if (*(long *)(param_2 + 0x3d28) == 0) {
    return 0;
  }
  if (uVar1 != param_3) {
    return 0;
  }
LAB_100594380:
  *(float *)(param_2 + lVar2 * 0x3b8 + 0x8e0) = param_1;
  return 0;
}




undefined8 FUN_100594398(long param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  
  if (0xf < param_2) {
    return 0x1f;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0x560) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      lVar2 = 0;
      goto LAB_100594530;
    }
    uVar1 = 1;
  }
  if (*(long *)(param_1 + 0x918) != 0) {
    lVar2 = 1;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0xcd0) != 0) {
    lVar2 = 2;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1088) != 0) {
    lVar2 = 3;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1440) != 0) {
    lVar2 = 4;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x17f8) != 0) {
    lVar2 = 5;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1bb0) != 0) {
    lVar2 = 6;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x1f68) != 0) {
    lVar2 = 7;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x2320) != 0) {
    lVar2 = 8;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x26d8) != 0) {
    lVar2 = 9;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x2a90) != 0) {
    lVar2 = 10;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x2e48) != 0) {
    lVar2 = 0xb;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x3200) != 0) {
    lVar2 = 0xc;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x35b8) != 0) {
    lVar2 = 0xd;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x3970) != 0) {
    lVar2 = 0xe;
    if (uVar1 == param_2) goto LAB_100594530;
    uVar1 = uVar1 + 1;
  }
  lVar2 = 0xf;
  if (*(long *)(param_1 + 0x3d28) == 0) {
    return 0;
  }
  if (uVar1 != param_2) {
    return 0;
  }
LAB_100594530:
  *param_3 = *(undefined4 *)(param_1 + lVar2 * 0x3b8 + 0x8e0);
  return 0;
}




undefined8 FUN_10059454c(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  *(float *)(param_2 + 0x4118) = param_1;
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x4108));
  fVar3 = ((fVar3 / param_1) / (float)*(int *)(param_2 + 0x40f0)) / 1000.0;
  fVar4 = (fVar3 / 1000.0) * (float)*(int *)(*(long *)(param_2 + 8) + 0x108);
  uVar2 = (uint)(fVar4 + 0.5);
  uVar1 = *(uint *)(param_2 + 0x40d8);
  if (*(uint *)(param_2 + 0x40d8) <= uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_2 + 0x40d4) = uVar1;
  fVar4 = (float)uVar1 / fVar4;
  *(float *)(param_2 + 0x40dc) = fVar4;
  *(float *)(param_2 + 0x4110) = fVar3 * fVar4;
  return 0;
}




undefined8 FUN_1005945dc(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x4118);
  return 0;
}




void FUN_1005945f0(void)

{
  DAT_101e97518 = "FMOD MOD Codec";
  DAT_101e97520 = 0x10100;
  DAT_101e97528 = 0x702;
  DAT_101e97524 = 1;
  DAT_101e97530 = thunk_FUN_100595794;
  DAT_101e97538 = FUN_1005946b8;
  DAT_101e97540 = thunk_FUN_100596788;
  DAT_101e97548 = FUN_1005d9ba8;
  DAT_101e97550 = thunk_FUN_100596ac0;
  DAT_101e97558 = FUN_1005d9bf4;
  DAT_101e975a0 = FUN_1005d9c34;
  DAT_101e975a8 = FUN_1005d9c58;
  DAT_101e975b0 = FUN_1005d9c94;
  DAT_101e975c0 = FUN_1005d9cd4;
  DAT_101e975c8 = FUN_1005d9d30;
  DAT_101e97570 = 8;
  DAT_101e97574 = 0x1400;
  return;
}




ulong thunk_FUN_100595794(undefined4 *param_1,uint param_2,long param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 in_x7;
  long lVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  long lStack_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  undefined8 uStack_1b0;
  long lStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  undefined1 uStack_195;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined4 uStack_188;
  byte bStack_184;
  byte bStack_183;
  byte bStack_182;
  undefined1 uStack_181;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char acStack_7e [22];
  long lStack_68;
  
  lVar18 = *(long *)PTR____stack_chk_guard_101444218;
  plVar6 = *(long **)(param_1 + 100);
  lStack_68 = lVar18;
  if ((*(uint *)((long)plVar6 + 0x1a4) & 1) == 0) {
    uVar7 = 0x13;
    goto LAB_100596084;
  }
  param_1[0x14] = 8;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&uStack_188);
  if ((int)uVar7 != 0) goto LAB_100596084;
  *(uint *)(*(long *)(param_1 + 100) + 0x1a4) = *(uint *)(*(long *)(param_1 + 100) + 0x1a4) | 8;
  iVar4 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x438,0);
  lVar8 = *(long *)(param_1 + 100);
  if (iVar4 != 0) {
    *(uint *)(lVar8 + 0x1a4) = *(uint *)(lVar8 + 0x1a4) & 0xfffffff7;
    uVar7 = 0x13;
    goto LAB_100596084;
  }
  iVar4 = FUN_1005d148c(lVar8,&bStack_184,1,4,0);
  if ((iVar4 != 0) ||
     ((((iVar4 = FUN_1005ed0f8(&bStack_184,"M.K.",4), iVar4 != 0 &&
        (iVar4 = FUN_1005ed0f8(&bStack_184,"M!K!",4), iVar4 != 0)) &&
       (iVar4 = FUN_1005ed0f8(&bStack_184,"6CHN",4), iVar4 != 0)) &&
      (((iVar4 = FUN_1005ed0f8(&bStack_184,"8CHN",4), iVar4 != 0 &&
        (iVar4 = FUN_1005ed0f8(&bStack_182,"CH",2), iVar4 != 0)) &&
       (iVar4 = FUN_1005ed0f8(&bStack_183,"CHN",3), iVar4 != 0)))))) {
LAB_100596070:
    *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
         *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
    uVar7 = 0x13;
    goto LAB_100596084;
  }
  iVar4 = FUN_1005ed0f8(&bStack_184,"M.K.",4);
  if (((iVar4 == 0) || (iVar4 = FUN_1005ed0f8(&bStack_184,"M!K!",4), iVar4 == 0)) ||
     (iVar4 = FUN_1005ed0f8(&bStack_184,"FLT4",4), iVar4 == 0)) {
    param_1[0x138] = 4;
  }
  else {
    iVar4 = FUN_1005ed0f8(&bStack_184,"6CHN",4);
    if (iVar4 == 0) {
      param_1[0x138] = 6;
    }
    else {
      iVar4 = FUN_1005ed0f8(&bStack_184,"8CHN",4);
      if (iVar4 == 0) {
        param_1[0x138] = 8;
      }
      else {
        iVar4 = FUN_1005ed0f8(&bStack_182,"CH",2);
        if (iVar4 == 0) {
          uStack_181 = 0;
          iVar4 = _atoi((char *)&bStack_184);
        }
        else {
          iVar4 = FUN_1005ed0f8(&bStack_183,"CHN",3);
          if (iVar4 != 0) {
            param_1[0x138] = 0;
            goto LAB_100596070;
          }
          iVar4 = (char)bStack_184 + -0x30;
        }
        param_1[0x138] = iVar4;
        if (0x1f < iVar4 - 1U) goto LAB_100596070;
      }
    }
  }
  piVar16 = param_1 + 0x138;
  uVar7 = FUN_100586684(param_1,9,"Number of channels",piVar16,4,1,0);
  if ((int)uVar7 != 0) goto LAB_100596084;
  uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
  if ((int)uVar7 == 0) {
    _bzero(param_1 + 0x13a,0x200);
    *(undefined8 *)(param_1 + 0xa6) = 0;
    param_1[0x33c] = 0x3f4ccccd;
    param_1[0x33b] = 0x3f800000;
    *(undefined1 *)((long)param_1 + 0xd02) = 1;
    param_1[0x285] = 0x1f;
    *(undefined8 *)(param_1 + 0x25e) = 0x7d00000006;
    param_1[0x282] = 0;
    param_1[0x33a] = 0;
    uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x14,0);
    if ((int)uVar7 == 0) {
      if (0 < (int)param_1[0x285]) {
        lVar8 = 0;
        uVar17 = uVar7;
        do {
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x35a) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x358) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x356) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x354) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x352) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x350) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x34e) = 0;
          uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),acStack_7e,1,0x16,0);
          if ((int)uVar7 != 0) {
LAB_10059603c:
            *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
                 *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
            goto LAB_100596084;
          }
          lVar13 = 0;
          do {
            if (acStack_7e[lVar13] < ' ') {
              acStack_7e[lVar13] = '\0';
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0x16);
          lVar13 = lVar8;
          _sprintf((char *)&uStack_180,"Sample name %d");
          uVar5 = FUN_100586684(param_1,9,&uStack_180,acStack_7e,0x16,3,0,in_x7,lVar13);
          uVar14 = (uint)uVar17;
          if (uVar5 != 0) {
            uVar14 = uVar5;
          }
          uVar17 = (ulong)uVar14;
          uVar7 = uVar17;
          if (uVar5 != 0) goto LAB_100596084;
          uVar7 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),&uStack_18c);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          uStack_18c = uStack_18c << 1;
          puVar2 = param_1 + lVar8 * 0xe + 0x350;
          uVar7 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),puVar2);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          FUN_1005d977c(param_1,*(undefined1 *)puVar2,puVar2);
          uVar7 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&uStack_195);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          *(undefined1 *)(param_1 + lVar8 * 0xe + 0x351) = uStack_195;
          uVar7 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),&uStack_190);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          if (uStack_190 << 1 < uStack_18c) {
            uStack_190 = uStack_190 << 1;
          }
          uVar7 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),&uStack_194);
          uVar14 = uStack_18c;
          if ((int)uVar7 != 0) goto LAB_10059603c;
          uStack_194 = uStack_194 * 2;
          if (uStack_18c < uStack_190 + uStack_194) {
            uStack_194 = uStack_18c - uStack_190;
          }
          if (uStack_194 < 3) {
            uStack_194 = uStack_18c;
            uStack_190 = 0;
            uVar5 = 9;
          }
          else {
            uVar5 = 10;
          }
          if (uStack_18c != 0) {
            _memset(&uStack_180,0,0xe8);
            uStack_180 = CONCAT44(uVar14,0xe8);
            uStack_178 = (char *)CONCAT44(1,(undefined4)uStack_178);
            uStack_170 = CONCAT44(1,*puVar2);
            uVar7 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,uVar5 | 0x400,&uStack_180,
                                  param_1 + lVar8 * 0xe + 0x34e);
            if (((int)uVar7 != 0) ||
               (((uVar5 >> 1 & 1) != 0 &&
                (plVar6 = *(long **)(param_1 + lVar8 * 0xe + 0x34e),
                uVar7 = (**(code **)(*plVar6 + 0x130))
                                  (plVar6,uStack_190,2,uStack_190 + uStack_194 + -1,2),
                (int)uVar7 != 0)))) goto LAB_10059603c;
            param_1[lVar8 * 0xe + 0x352] = uStack_190;
            param_1[lVar8 * 0xe + 0x353] = uStack_194;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)param_1[0x285]);
      }
      uVar7 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),param_1 + 0x281);
      plVar6 = *(long **)(param_1 + 100);
      if ((int)uVar7 != 0) {
LAB_1005960cc:
        *(uint *)((long)plVar6 + 0x1a4) = *(uint *)((long)plVar6 + 0x1a4) & 0xfffffff7;
        goto LAB_100596084;
      }
      uVar7 = FUN_1005d19f8(plVar6,0);
      if ((int)uVar7 == 0) {
        _memset(param_1 + 0xac,0,0x100);
        uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,1,0x80,0);
        if ((int)uVar7 == 0) {
          uVar14 = param_1[0x282];
          lVar8 = 0x2b0;
          do {
            uVar5 = (uint)*(byte *)((long)param_1 + lVar8);
            if ((int)uVar14 < (int)uVar5) {
              param_1[0x282] = uVar5;
              uVar14 = uVar5;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x330);
          param_1[0x282] = uVar14 + 1;
          uVar7 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),0);
          if ((int)uVar7 == 0) {
            if (0 < *piVar16) {
              lVar8 = 0;
              do {
                puVar9 = (undefined8 *)
                         FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x398,
                                       "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                       ,0x609,0);
                puVar9[1] = puVar9 + 1;
                puVar9[2] = puVar9 + 1;
                puVar9[3] = 0;
                FUN_100583c48(puVar9 + 5);
                *(undefined8 **)(param_1 + lVar8 * 2 + 0x13a) = puVar9;
                if (puVar9 == (undefined8 *)0x0) goto LAB_100595ff4;
                *puVar9 = param_1;
                lVar8 = lVar8 + 1;
              } while (lVar8 < (int)param_1[0x138]);
              if (0 < (int)param_1[0x138]) {
                lVar8 = 0;
                iVar4 = 0x40000000;
                do {
                  *(char *)((long)param_1 + lVar8 + 0x980) = (char)(iVar4 >> 0x1f);
                  lVar8 = lVar8 + 1;
                  iVar4 = iVar4 + 0x40000000;
                } while (lVar8 < *piVar16);
              }
            }
            param_1[0x283] = param_1[0x282];
            piVar10 = (int *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                           param_1[0x282] << 4,
                                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                           ,0x61e,0);
            *(int **)(param_1 + 0xa6) = piVar10;
            if (piVar10 != (int *)0x0) {
              if ((int)param_1[0x282] < 1) {
LAB_1005960b4:
                uVar7 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&iStack_19c);
                plVar6 = *(long **)(param_1 + 100);
                if ((int)uVar7 != 0) goto LAB_1005960cc;
                uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&uStack_1a0);
                if ((int)uVar7 == 0) {
                  iVar4 = param_1[0x285];
                  if (iVar4 < 1) {
                    iVar15 = 0;
                  }
                  else {
                    lVar8 = 0;
                    iVar15 = 0;
                    plVar6 = (long *)(param_1 + 0x34e);
                    do {
                      if (*plVar6 != 0) {
                        iVar15 = *(int *)(*plVar6 + 0x3c) + iVar15;
                      }
                      lVar8 = lVar8 + 1;
                      plVar6 = plVar6 + 7;
                    } while (lVar8 < iVar4);
                  }
                  if ((0x438 < uStack_1a0 - iVar15) && (uStack_1a0 < (uint)(iStack_19c + iVar15))) {
                    uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),uStack_1a0 - iVar15,0);
                    if ((int)uVar7 != 0) goto LAB_10059649c;
                    iVar4 = param_1[0x285];
                  }
                  if (0 < iVar4) {
                    lVar8 = 0;
                    plVar6 = (long *)(param_1 + 0x34e);
                    do {
                      plVar12 = (long *)*plVar6;
                      if (plVar12 != (long *)0x0) {
                        uVar14 = *(uint *)((long)plVar12 + 0x3c);
                        uVar5 = (int)plVar12[5] - 1;
                        if (uVar5 < 5) {
                          uVar14 = *(int *)(&DAT_10115e8e0 + (long)(int)uVar5 * 4) * uVar14 >> 3;
                        }
                        uVar7 = (**(code **)(*plVar12 + 0x28))
                                          (plVar12,0,uVar14 * (int)plVar12[0xc],&lStack_1a8,
                                           &uStack_1b0,&iStack_1b4,&uStack_1b8);
                        if (((int)uVar7 != 0) ||
                           ((((lStack_1a8 != 0 && (iStack_1b4 != 0)) &&
                             (uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),lStack_1a8,1,
                                                    iStack_1b4,0), ((uint)uVar7 | 0x10) != 0x10)) ||
                            (uVar7 = (**(code **)(*(long *)*plVar6 + 0x30))
                                               ((long *)*plVar6,lStack_1a8,uStack_1b0,iStack_1b4,
                                                uStack_1b8), (int)uVar7 != 0)))) goto LAB_10059649c;
                        iVar4 = param_1[0x285];
                      }
                      lVar8 = lVar8 + 1;
                      plVar6 = plVar6 + 7;
                    } while (lVar8 < iVar4);
                  }
                  *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
                       *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
                  puVar2 = param_1 + 0xec;
                  _bzero(puVar2,0x130);
                  *(undefined4 **)(param_1 + 2) = puVar2;
                  param_1[0x12f] = uStack_188;
                  if ((param_3 == 0) || (iVar4 = *(int *)(param_3 + 0x14), iVar4 == 0)) {
                    iVar4 = 5;
                  }
                  param_1[300] = iVar4;
                  param_1[0x12d] = 2;
                  FUN_1005ecc98(puVar2,param_1 + 0x66,0x100);
                  lVar8 = *(long *)(param_1 + 0x12);
                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x108) = *(undefined4 *)(lVar8 + 0x708);
                  param_1[0x4c] = 0;
                  uStack_158 = 0;
                  uStack_150 = 0;
                  uStack_168 = 0;
                  uStack_160 = 0;
                  uStack_170 = 0;
                  uStack_180 = 0;
                  uStack_178 = "FMOD MOD Target Unit";
                  uVar7 = FUN_10056b4fc(lVar8,&uStack_180,0,param_1 + 0xa8,1);
                  if ((int)uVar7 == 0) {
                    FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
                    FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                    param_1[0x1ba] = param_1[0x138];
                    lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                          param_1[0x138] * 0x330,
                                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                          ,0x709,0);
                    *(long *)(param_1 + 0x1bc) = lVar8;
                    if (lVar8 == 0) {
                      uVar7 = 0x26;
                    }
                    else {
                      iVar4 = param_1[0x1ba];
                      if (0 < iVar4) {
                        *(long *)lVar8 = lVar8;
                        *(long *)(lVar8 + 8) = lVar8;
                        *(undefined8 *)(lVar8 + 0x10) = 0;
                        FUN_100583c48(lVar8 + 0x20);
                        iVar4 = param_1[0x1ba];
                        lVar8 = 1;
                        lVar13 = 0x330;
                        if (1 < iVar4) {
                          do {
                            lVar3 = *(long *)(param_1 + 0x1bc) + lVar13;
                            *(long *)lVar3 = lVar3;
                            *(long *)(lVar3 + 8) = lVar3;
                            *(undefined8 *)(lVar3 + 0x10) = 0;
                            FUN_100583c48(lVar3 + 0x20);
                            lVar8 = lVar8 + 1;
                            iVar4 = param_1[0x1ba];
                            lVar13 = lVar13 + 0x330;
                          } while (lVar8 < iVar4);
                        }
                      }
                      FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                    ,0x72d,0);
                      lVar8 = FUN_100585974();
                      *(long *)(param_1 + 0x1be) = lVar8;
                      if (lVar8 == 0) {
                        uVar7 = 0x26;
                      }
                      else {
                        uVar7 = FUN_100585980(lVar8,*(undefined8 *)(param_1 + 0x12),0,iVar4 << 1);
                        if ((int)uVar7 == 0) {
                          lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                iVar4 * 0x570,
                                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                                ,0x739,0);
                          *(long *)(param_1 + 0x1c0) = lVar8;
                          if (lVar8 == 0) {
                            uVar7 = 0x26;
                          }
                          else if (iVar4 < 1) {
LAB_1005964c8:
                            if ((param_2 & 0x4100) == 0) {
                              *(undefined8 *)(param_1 + 0xaa) = 0;
                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0xffffffff;
                            }
                            else {
                              lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                    param_1[0x281] << 8,
                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                                  ,0x748,0);
                              *(long *)(param_1 + 0xaa) = lVar8;
                              if (lVar8 == 0) {
                                uVar7 = 0x26;
                                goto LAB_100596084;
                              }
                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
                              FUN_1005d8fe8(param_1,0);
                              while (*(char *)((long)param_1 + 0xd01) == '\0') {
                                FUN_10059473c(param_1,0);
                                *(int *)(*(long *)(param_1 + 2) + 0x110) =
                                     *(int *)(*(long *)(param_1 + 2) + 0x110) + param_1[0x25b];
                              }
                              FUN_1005d9258(param_1);
                            }
                            *param_1 = 0;
                            FUN_1005d8fe8(param_1,1);
                            uVar7 = 0;
                          }
                          else {
                            FUN_10057bd44();
                            uVar7 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,
                                                  *(undefined8 *)(param_1 + 0x1c0));
                            lVar8 = 1;
                            lVar13 = 0x2b8;
                            if ((int)uVar7 == 0) {
                              do {
                                if (iVar4 << 1 <= lVar8) goto LAB_1005964c8;
                                FUN_10057bd44(*(long *)(param_1 + 0x1c0) + lVar13);
                                uVar7 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),lVar8,
                                                      *(long *)(param_1 + 0x1c0) + lVar13);
                                lVar8 = lVar8 + 1;
                                lVar13 = lVar13 + 0x2b8;
                              } while ((int)uVar7 == 0);
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_100596084;
                }
                goto LAB_10059649c;
              }
              iVar4 = *piVar16;
              *piVar10 = 0x40;
              puVar11 = (undefined1 *)
                        FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 * 0x140,
                                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                      ,0x635,0);
              *(undefined1 **)(piVar10 + 2) = puVar11;
              if (puVar11 != (undefined1 *)0x0) {
                lStack_1c0 = 0;
                do {
                  iVar4 = *piVar16;
                  if (0 < *piVar10 * iVar4) {
                    iVar15 = 0;
                    do {
                      uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&bStack_184,1,4,0);
                      if ((int)uVar7 != 0) goto LAB_10059649c;
                      uVar7 = 0;
                      puVar11[1] = bStack_184 & 0xf0 | bStack_182 >> 4;
                      *puVar11 = 0;
                      do {
                        if (0x6b < uVar7) goto LAB_100595f5c;
                        puVar1 = &DAT_10186d590 + uVar7;
                        uVar7 = uVar7 + 1;
                      } while (((uint)bStack_183 | (bStack_184 & 0xf) << 8) < *puVar1);
                      *puVar11 = (char)uVar7;
LAB_100595f5c:
                      puVar11[2] = 0;
                      puVar11[3] = bStack_182 & 0xf;
                      puVar11[4] = uStack_181;
                      puVar11 = puVar11 + 5;
                      iVar15 = iVar15 + 1;
                      iVar4 = *piVar16;
                    } while (iVar15 < *piVar10 * iVar4);
                  }
                  lStack_1c0 = lStack_1c0 + 1;
                  if ((int)param_1[0x282] <= lStack_1c0) goto LAB_1005960b4;
                  piVar10 = (int *)(*(long *)(param_1 + 0xa6) + lStack_1c0 * 0x10);
                  *piVar10 = 0x40;
                  puVar11 = (undefined1 *)
                            FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 * 0x140,
                                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                          ,0x635,0);
                  *(undefined1 **)(piVar10 + 2) = puVar11;
                } while (puVar11 != (undefined1 *)0x0);
              }
            }
LAB_100595ff4:
            *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
                 *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
            uVar7 = 0x26;
            goto LAB_100596084;
          }
        }
      }
    }
  }
LAB_10059649c:
  *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
       *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
LAB_100596084:
  if (lVar18 != lStack_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}




undefined8 FUN_1005946b8(void)

{
  FUN_100596584();
  return 0;
}




int thunk_FUN_100596788(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iStack_10e8;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  long lStack_10b8;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined4 uStack_10a8;
  undefined1 *puStack_10a0;
  undefined1 *puStack_1098;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1078 [4096];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0xd00) == '\0') {
    iVar9 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar9 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x968);
    iVar9 = 0;
    if (param_3 != 0) {
      uVar13 = 0;
      iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x104);
      iStack_10e8 = (int)&uStack_1088;
      lVar14 = param_2;
      iVar9 = 0;
      do {
        if (uVar12 == 0) {
          FUN_10059473c(param_1,1);
          iVar9 = 0;
          uVar12 = *(uint *)(param_1 + 0x96c);
        }
        uVar11 = param_3 - uVar13;
        if (uVar12 + uVar13 <= param_3) {
          uVar11 = uVar12;
        }
        lVar15 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar15 + 0x710);
        if (uVar11 <= *(uint *)(lVar15 + 0x710)) {
          uVar1 = uVar11;
        }
        if (param_2 != 0) {
          uStack_10ac = 0;
          uStack_1088 = 0;
          uStack_1080 = 0;
          uStack_10b0 = 0x200;
          uStack_10a8 = 0;
          puStack_10a0 = auStack_1078;
          lStack_10b8 = lVar15;
          puStack_1098 = puStack_10a0;
          if (lVar15 == 0) {
            lVar16 = 0;
            bVar7 = false;
            bVar5 = false;
            bVar6 = true;
          }
          else {
            bVar6 = true;
            FUN_10057097c(lVar15,1);
            lVar16 = *(long *)(param_1 + 0x48);
            if (lVar16 == 0) {
              lVar16 = 0;
              bVar5 = false;
              bVar7 = true;
            }
            else {
              FUN_10057097c(lVar16,3);
              bVar6 = false;
              bVar7 = true;
              bVar5 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x2a0) + 0x3f) == '\0') {
LAB_100596920:
            uStack_10c0 = 0;
            uStack_10d0 = 0;
            uStack_10c8 = 0;
            uStack_10d8 = 0;
            uStack_10bc = 0xffffffff;
            iVar9 = FUN_1005c9be4(&lStack_10b8,uVar1,1000,2,&uStack_10d8);
            if (iVar9 == 0) {
              uVar10 = FUN_1005c8da0(&uStack_10d8);
              bVar4 = true;
              iVar9 = FUN_10063a2fc(0x3f800000,lVar14,uVar10,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar8 = iVar9;
              if (iVar9 == 0) {
                FUN_1005c8d10(&uStack_10d8);
                bVar4 = false;
                iVar9 = 0;
                iVar8 = iStack_10e8;
              }
            }
            else {
              bVar4 = true;
              iVar8 = iVar9;
            }
            iStack_10e8 = iVar8;
            FUN_1005c8e48(&uStack_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar9 = FUN_1005cb3bc(&lStack_10b8,*(long *)(param_1 + 0x2a0),uVar1);
            if (iVar9 == 0) goto LAB_100596920;
            bVar4 = true;
            iStack_10e8 = iVar9;
          }
          if (!bVar6 && bVar5) {
            FUN_100570990(lVar16,3);
          }
          if ((lVar15 != 0) && (bVar7)) {
            FUN_100570990(lVar15,1);
          }
          if (bVar4) goto LAB_100596a7c;
        }
        uVar3 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar11 = uVar1;
        if (uVar3 < 5) {
          uVar11 = *(int *)(&DAT_10115e8e0 + (long)(int)uVar3 * 4) * uVar1 >> 3;
        }
        uVar13 = uVar1 + uVar13;
        lVar14 = lVar14 + (ulong)(uVar11 * iVar2);
        uVar12 = uVar12 - uVar1;
      } while (uVar13 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar12;
  }
  iStack_10e8 = iVar9;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_100596a7c:
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_78) {
    return iStack_10e8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 thunk_FUN_100596ac0(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_4 == 2) {
    uVar4 = *(uint *)(param_1 + 0x970);
    if (uVar4 == param_3) {
      uVar3 = 0;
    }
    else {
      if (param_3 < uVar4) {
        FUN_1005d8fe8(param_1,0);
        uVar4 = *(uint *)(param_1 + 0x970);
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      while (uVar4 < param_3) {
        FUN_10059473c(param_1,1);
        uVar4 = *(uint *)(param_1 + 0x970);
      }
      if (bVar2) {
        uVar1 = *(undefined2 *)(param_1 + 0xd00);
        FUN_1005d9258(param_1);
        uVar3 = 0;
        *(undefined2 *)(param_1 + 0xd00) = uVar1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else if (param_4 == 0x100) {
    FUN_1005d8fe8(param_1,0);
    uVar3 = 0;
    *(uint *)(param_1 + 0xd14) = param_3;
    *(uint *)(param_1 + 0xd24) = param_3;
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}




undefined8 FUN_1005946d8(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0;
  FUN_1005d8fe8(param_1,0);
  while (*(char *)(param_1 + 0xd01) == '\0') {
    FUN_10059473c(param_1,0);
    *(int *)(*(long *)(param_1 + 8) + 0x110) =
         *(int *)(*(long *)(param_1 + 8) + 0x110) + *(int *)(param_1 + 0x96c);
  }
  FUN_1005d9258(param_1);
  return 0;
}




undefined8 FUN_10059473c(long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  bVar2 = false;
  lVar3 = *(long *)(param_1 + 0x48);
  if ((lVar3 != 0) && ((((uint)param_2 ^ 1) & 1) == 0)) {
    bVar2 = true;
    FUN_10057097c(lVar3,1);
  }
  if (*(int *)(param_1 + 0xd04) == 0) {
    if ((*(char *)(param_1 + 0xd01) == '\0') || (*(char *)(param_1 + 0xd02) != '\0')) {
      if (-1 < *(int *)(param_1 + 0xd24)) {
        *(int *)(param_1 + 0xd14) = *(int *)(param_1 + 0xd24);
        *(undefined4 *)(param_1 + 0xd24) = 0xffffffff;
      }
      if (-1 < *(int *)(param_1 + 0xd20)) {
        *(int *)(param_1 + 0xd10) = *(int *)(param_1 + 0xd20);
        *(undefined4 *)(param_1 + 0xd20) = 0xffffffff;
      }
      FUN_100594ad0(param_1,param_2);
      if ((*(int *)(param_1 + 0xd20) == -1) &&
         (*(int *)(param_1 + 0xd20) = *(int *)(param_1 + 0xd10) + 1,
         0x3e < *(int *)(param_1 + 0xd10))) {
        iVar1 = *(int *)(param_1 + 0xd14) + 1;
        *(int *)(param_1 + 0xd24) = iVar1;
        if (*(int *)(param_1 + 0xa04) <= iVar1) {
          *(undefined4 *)(param_1 + 0xd24) = *(undefined4 *)(param_1 + 0xce8);
        }
        *(undefined4 *)(param_1 + 0xd20) = 0;
      }
    }
    else {
      FUN_1005d9258(param_1);
    }
  }
  else if ((uint)param_2 != 0) {
    FUN_1005951dc(param_1);
  }
  if (*(int *)(param_1 + 0xd08) == 0) {
    *(undefined1 *)(param_1 + 0xd01) = 1;
    *(undefined4 *)(param_1 + 0xd04) = 0xffffffff;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd04) + 1;
    *(int *)(param_1 + 0xd04) = iVar1;
    if (*(int *)(param_1 + 0xd18) + *(int *)(param_1 + 0xd08) <= iVar1) {
      *(undefined4 *)(param_1 + 0xd18) = 0;
      *(undefined4 *)(param_1 + 0xd04) = 0;
    }
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + *(int *)(param_1 + 0x96c);
  if ((lVar3 != 0) && (bVar2)) {
    FUN_100570990(lVar3,1);
  }
  return 0;
}




undefined8 FUN_10059489c(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x2a8);
  iVar3 = *(int *)(param_1 + 0x368);
  if (iVar1 < iVar3) {
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x36c) * 4;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  else {
    if (iVar1 <= iVar3) goto LAB_1005948dc;
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x36c) * -4;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  *(int *)(lVar2 + 0x2a8) = iVar3;
LAB_1005948dc:
  *(byte *)(lVar2 + 0x2a4) = *(byte *)(lVar2 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_1005948f0(long *param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  lVar6 = param_1[1];
  bVar5 = *(byte *)((long)param_1 + 0x36e);
  bVar2 = *(byte *)((long)param_1 + 0x38e) & 3;
  if (bVar2 < 4) {
    uVar7 = 0xff;
    switch(bVar2) {
    case 0:
      uVar7 = (uint)(byte)(&DAT_10186d410)[bVar5 & 0x1f];
      break;
    case 1:
      uVar7 = (bVar5 & 0x1f) << 3;
      if ((char)bVar5 < '\0') {
        uVar7 = ~uVar7;
      }
      uVar7 = uVar7 & 0xff;
      break;
    case 3:
      lVar8 = *param_1;
      uVar7 = *(uint *)(lVar8 + 0xd28) ^ *(uint *)(lVar8 + 0xd28) << 0xb;
      *(undefined4 *)(lVar8 + 0xd28) = *(undefined4 *)(lVar8 + 0xd2c);
      *(undefined4 *)(lVar8 + 0xd2c) = *(undefined4 *)(lVar8 + 0xd30);
      uVar4 = *(uint *)(lVar8 + 0xd34);
      *(uint *)(lVar8 + 0xd30) = uVar4;
      uVar7 = uVar7 ^ uVar7 >> 8 ^ uVar4 ^ uVar4 >> 0x13;
      *(uint *)(lVar8 + 0xd34) = uVar7;
      uVar7 = uVar7 & 0xff;
    }
  }
  else {
    uVar7 = 0;
  }
  uVar7 = *(byte *)(param_1 + 0x6e) * uVar7 >> 5 & 0x7fc;
  if ((char)bVar5 < '\0') {
    uVar7 = -uVar7;
  }
  *(uint *)(lVar6 + 0x2b8) = uVar7;
  cVar1 = bVar5 + *(char *)((long)param_1 + 0x36f);
  cVar3 = cVar1 + -0x40;
  if (cVar1 < ' ') {
    cVar3 = cVar1;
  }
  *(char *)((long)param_1 + 0x36e) = cVar3;
  *(byte *)(lVar6 + 0x2a4) = *(byte *)(lVar6 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_1005949ec(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(param_1 + 8);
  bVar5 = *(byte *)(param_1 + 0x372);
  bVar7 = *(byte *)(param_1 + 0x38e) >> 4 & 3;
  if (bVar7 < 4) {
    uVar9 = 0xff;
    switch(bVar7) {
    default:
      uVar9 = (uint)(byte)(&DAT_10186d410)[bVar5 & 0x1f];
      break;
    case 1:
      uVar9 = (bVar5 & 0x1f) << 3;
      if ((char)bVar5 < 0) {
        uVar9 = ~uVar9;
      }
      uVar9 = uVar9 & 0xff;
      break;
    case 2:
      break;
    }
  }
  else {
    uVar9 = 0;
  }
  uVar6 = *(byte *)(param_1 + 0x374) * uVar9 >> 6;
  uVar4 = *(uint *)(lVar8 + 0x2ac);
  uVar9 = uVar6;
  if ((uVar4 - uVar6 & 0x8000) != 0) {
    uVar9 = uVar4;
  }
  uVar3 = 0x40 - uVar4;
  if ((int)(uVar6 + uVar4) < 0x41) {
    uVar3 = uVar6;
  }
  if (((int)(char)bVar5 & 0x80000000U) == 0) {
    uVar9 = uVar3;
  }
  *(uint *)(lVar8 + 0x2b4) = uVar9;
  cVar1 = *(char *)(param_1 + 0x372) + *(char *)(param_1 + 0x373);
  cVar2 = cVar1 + -0x40;
  if (cVar1 < ' ') {
    cVar2 = cVar1;
  }
  *(char *)(param_1 + 0x372) = cVar2;
  *(byte *)(lVar8 + 0x2a4) = *(byte *)(lVar8 + 0x2a4) | 2;
  return 0;
}




undefined8 FUN_100594ad0(long param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  long *local_88;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x298) +
                    (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10 + 8);
  iVar9 = *(int *)(param_1 + 0x4e0);
  iVar6 = iVar9 * *(int *)(param_1 + 0xd10);
  if (lVar7 + (long)iVar6 + (long)iVar6 * 4 != 0) {
    lVar14 = *(long *)(param_1 + 0x2a8);
    if (lVar14 != 0) {
      lVar13 = (long)(*(int *)(param_1 + 0xd10) + *(int *)(param_1 + 0xd14) * 0x100);
      if (*(char *)(lVar14 + lVar13) != '\0') {
        *(undefined1 *)(param_1 + 0xd01) = 1;
        return 0;
      }
      *(undefined1 *)(lVar14 + lVar13) = 1;
    }
    if (0 < iVar9) {
      lVar14 = 0;
      bVar5 = false;
      pbVar16 = (byte *)(lVar7 + (long)iVar6 + (long)iVar6 * 4 + 4);
      do {
        bVar8 = *pbVar16;
        lVar7 = *(long *)(param_1 + 0x4e8 + lVar14 * 8);
        plVar15 = (long *)(lVar7 + 8);
        local_88 = (long *)*plVar15;
        if ((local_88 == plVar15) && (*(long **)(lVar7 + 0x10) == plVar15)) {
          local_88 = (long *)&DAT_101dbc130;
          DAT_101dbc3c0 = &DAT_101dbc0f0;
        }
        bVar11 = pbVar16[-3];
        if (bVar11 == 0) {
          bVar10 = *(byte *)(lVar7 + 0x338);
        }
        else {
          bVar10 = bVar11 - 1;
          *(byte *)(lVar7 + 0x338) = bVar10;
        }
        puVar2 = &DAT_101dbc0f0;
        if ((int)(uint)bVar10 < *(int *)(param_1 + 0xa14)) {
          puVar2 = (undefined8 *)(param_1 + (ulong)bVar10 * 0x38 + 0xd38);
        }
        iVar9 = *(int *)((long)local_88 + 0x2ac);
        lVar13 = local_88[0x55];
        uVar12 = (uint)pbVar16[-1];
        if (*(char *)(lVar7 + 0x340) == '\a') {
          if (pbVar16[-1] == 7) {
            uVar12 = 7;
          }
          else {
            *(int *)((long)local_88 + 0x2ac) = *(int *)((long)local_88 + 0x2b4) + iVar9;
          }
        }
        *(char *)(lVar7 + 0x340) = (char)uVar12;
        *(undefined4 *)((long)local_88 + 0x2b4) = 0;
        *(undefined1 *)((long)local_88 + 0x2a4) = 0;
        if (pbVar16[-4] != 0) {
          *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) | 0x20;
          if ((local_88 == (long *)&DAT_101dbc130) &&
             (iVar6 = FUN_1005d9420(param_1,lVar7,puVar2,&local_88), iVar6 != 0)) {
            local_88 = (long *)&DAT_101dbc130;
            DAT_101dbc3c0 = &DAT_101dbc0f0;
          }
          bVar11 = pbVar16[-4];
          *(byte *)(lVar7 + 0x339) = bVar11;
          uVar4 = 0;
          if ((long)*(int *)(puVar2 + 1) != 0) {
            uVar4 = (undefined4)
                    ((long)((ulong)*(uint *)(&DAT_10186d52c + (ulong)bVar11 * 4) * 0x20ab) /
                    (long)*(int *)(puVar2 + 1));
          }
          *(undefined4 *)(lVar7 + 0x33c) = uVar4;
          *(uint *)(local_88 + 0x56) = (uint)*(byte *)(param_1 + 0x4e8 + lVar14 + 0x498);
          if ((*(byte *)(lVar7 + 0x38e) & 0xc) < 4) {
            *(undefined1 *)(lVar7 + 0x36e) = 0;
          }
          if (*(byte *)(lVar7 + 0x38e) < 0x40) {
            *(undefined1 *)(lVar7 + 0x372) = 0;
          }
          uVar12 = (uint)pbVar16[-1];
          if ((uVar12 != 3) && (uVar12 != 5)) {
            *(undefined4 *)(local_88 + 0x55) = uVar4;
          }
          *(undefined1 *)((long)local_88 + 0x2a4) = 8;
          bVar11 = pbVar16[-3];
        }
        if (bVar11 != 0) {
          *(uint *)((long)local_88 + 0x2ac) = (uint)*(byte *)((long)puVar2 + 0xc);
        }
        *(undefined4 *)(local_88 + 0x57) = 0;
        *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) | 7;
        if (0xc < uVar12 - 3) goto switchD_100594e94_caseD_6;
        bVar10 = bVar8 >> 4;
        uVar3 = (uint)bVar10;
        uVar1 = bVar8 & 0xf;
        bVar11 = (byte)uVar1;
        switch(uVar12) {
        case 3:
          if (*pbVar16 != 0) {
            *(byte *)(lVar7 + 0x36c) = *pbVar16;
          }
        case 5:
          *(undefined4 *)(lVar7 + 0x368) = *(undefined4 *)(lVar7 + 0x33c);
          bVar8 = *(byte *)((long)local_88 + 0x2a4);
          bVar11 = 0xf6;
LAB_100594ef4:
          *(byte *)((long)local_88 + 0x2a4) = bVar8 & bVar11;
          break;
        case 4:
          if (uVar3 != 0) {
            *(byte *)(lVar7 + 0x36f) = bVar10;
          }
          if ((bVar8 & 0xf) != 0) {
            *(byte *)(lVar7 + 0x370) = bVar11;
          }
          break;
        case 7:
          if (uVar3 != 0) {
            *(byte *)(lVar7 + 0x373) = bVar10;
          }
          if ((bVar8 & 0xf) != 0) {
            *(byte *)(lVar7 + 0x374) = bVar11;
          }
          bVar8 = *(byte *)((long)local_88 + 0x2a4);
          bVar11 = 0xfd;
          goto LAB_100594ef4;
        case 8:
          iVar9 = (uint)*pbVar16 << 1;
LAB_100594f08:
          *(int *)(local_88 + 0x56) = iVar9;
          *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) | 4;
          break;
        case 9:
          bVar8 = *pbVar16;
          uVar12 = (uint)bVar8;
          if (bVar8 == 0) {
            uVar12 = *(uint *)(lVar7 + 0x350);
          }
          else {
            *(uint *)(lVar7 + 0x350) = (uint)bVar8;
          }
          uVar12 = uVar12 << 8;
          uVar1 = *(int *)((long)puVar2 + 0x14) + *(int *)(puVar2 + 2);
          if (uVar1 <= uVar12) {
            uVar12 = uVar1 - 1;
          }
          *(uint *)(local_88 + 0x58) = uVar12;
          break;
        case 0xb:
          bVar8 = *pbVar16;
          *(uint *)(param_1 + 0xd24) = (uint)bVar8;
          *(undefined4 *)(param_1 + 0xd20) = 0;
          if (*(int *)(param_1 + 0xa04) <= (int)(uint)bVar8) {
            *(undefined4 *)(param_1 + 0xd24) = 0;
          }
          bVar5 = true;
          break;
        case 0xc:
          *(uint *)((long)local_88 + 0x2ac) = (uint)*pbVar16;
          break;
        case 0xd:
          uVar1 = uVar1 + uVar3 * 10;
          uVar12 = 0;
          if (uVar1 < 0x40) {
            uVar12 = uVar1;
          }
          *(uint *)(param_1 + 0xd20) = uVar12;
          if (bVar5) {
            iVar9 = *(int *)(param_1 + 0xd24);
          }
          else {
            iVar9 = *(int *)(param_1 + 0xd14) + 1;
            *(int *)(param_1 + 0xd24) = iVar9;
          }
          if (*(int *)(param_1 + 0xa04) <= iVar9) {
            *(undefined4 *)(param_1 + 0xd24) = 0;
          }
          break;
        case 0xe:
          switch(uVar3) {
          case 1:
            *(uint *)(local_88 + 0x55) = (int)local_88[0x55] + uVar1 * -4;
            break;
          case 2:
            *(uint *)(local_88 + 0x55) = (int)local_88[0x55] + uVar1 * 4;
            break;
          case 4:
            *(byte *)(lVar7 + 0x38e) = *(byte *)(lVar7 + 0x38e) & 0xf0 | bVar11;
            break;
          case 5:
            FUN_1005d977c(param_1,uVar1,puVar2 + 1);
            break;
          case 6:
            if ((bVar8 & 0xf) == 0) {
              *(undefined4 *)(lVar7 + 900) = *(undefined4 *)(param_1 + 0xd10);
            }
            else {
              if (*(int *)(lVar7 + 0x388) != 0) {
                uVar1 = *(int *)(lVar7 + 0x388) - 1;
              }
              *(uint *)(lVar7 + 0x388) = uVar1;
              if (uVar1 != 0) {
                iVar9 = *(int *)(lVar7 + 900);
                *(int *)(param_1 + 0xd20) = iVar9;
                if ((*(long *)(param_1 + 0x2a8) != 0) && (iVar9 <= *(int *)(param_1 + 0xd10))) {
                  _bzero((void *)(*(long *)(param_1 + 0x2a8) +
                                 (long)iVar9 + (long)(*(int *)(param_1 + 0xd14) << 8)),
                         (ulong)(uint)(*(int *)(param_1 + 0xd10) - iVar9) + 1);
                }
              }
            }
            break;
          case 7:
            *(byte *)(lVar7 + 0x38e) = bVar8 << 4 | *(byte *)(lVar7 + 0x38e) & 0xf;
            break;
          case 8:
            iVar9 = uVar1 << 4;
            goto LAB_100594f08;
          case 10:
            iVar9 = *(int *)((long)local_88 + 0x2ac) + uVar1;
            *(int *)((long)local_88 + 0x2ac) = iVar9;
            if (0x40 < iVar9) {
              *(undefined4 *)((long)local_88 + 0x2ac) = 0x40;
            }
            break;
          case 0xb:
            iVar9 = *(int *)((long)local_88 + 0x2ac) - uVar1;
            *(int *)((long)local_88 + 0x2ac) = iVar9;
            if (iVar9 < 0) {
              *(undefined4 *)((long)local_88 + 0x2ac) = 0;
            }
            break;
          case 0xd:
            *(int *)((long)local_88 + 0x2ac) = iVar9;
            *(int *)(local_88 + 0x55) = (int)lVar13;
            *(undefined1 *)((long)local_88 + 0x2a4) = 0;
            break;
          case 0xe:
            *(uint *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd08) * uVar1;
          }
          break;
        case 0xf:
          bVar8 = *pbVar16;
          if (bVar8 < 0x20) {
            if (bVar8 != 0) {
              *(uint *)(param_1 + 0xd08) = (uint)bVar8;
            }
          }
          else {
            FUN_1005d93c8(param_1);
          }
        }
switchD_100594e94_caseD_6:
        if (param_2 != 0) {
          local_88 = (long *)*plVar15;
          if ((int)local_88[0x55] + (int)local_88[0x57] == 0) {
            *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) & 0xfe;
          }
          bVar8 = *(byte *)((long)local_88 + 0x2a4);
          if ((bVar8 >> 3 & 1) != 0) {
            FUN_1005d95a4(param_1,puVar2,local_88,0,0);
            bVar8 = *(byte *)((long)local_88 + 0x2a4);
          }
          if ((bVar8 >> 1 & 1) != 0) {
            FUN_1005847b8(*(float *)(lVar7 + 0x358) *
                          (float)(*(int *)((long)local_88 + 0x2b4) +
                                 *(int *)((long)local_88 + 0x2ac)) * 0.015625 * 0.5,local_88 + 4,0);
          }
          if ((*(byte *)((long)local_88 + 0x2a4) >> 2 & 1) != 0) {
            (**(code **)(local_88[4] + 0xa8))
                      (*(float *)(param_1 + 0xcf0) * ((float)(int)local_88[0x56] + -128.0) *
                       0.0078125,local_88 + 4);
          }
          if ((*(byte *)((long)local_88 + 0x2a4) & 1) != 0) {
            iVar9 = (int)local_88[0x57] + (int)local_88[0x55];
            iVar6 = 1;
            if (0 < iVar9) {
              iVar6 = iVar9;
            }
            iVar9 = 0;
            if (iVar6 != 0) {
              iVar9 = 0xda7600 / iVar6;
            }
            FUN_100581c98((float)iVar9,local_88 + 4);
          }
          if ((*(byte *)((long)local_88 + 0x2a4) >> 5 & 1) != 0) {
            FUN_100582560(local_88 + 4,0);
            *(undefined4 *)(local_88 + 0x58) = 0;
          }
        }
        lVar14 = lVar14 + 1;
        pbVar16 = pbVar16 + 5;
      } while (lVar14 < *(int *)(param_1 + 0x4e0));
    }
  }
  return 0;
}




undefined8 FUN_1005951dc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long *local_88;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x298) +
                    (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10 + 8);
  iVar6 = *(int *)(param_1 + 0x4e0) * *(int *)(param_1 + 0xd10);
  if (lVar7 + (long)iVar6 + (long)iVar6 * 4 != 0 && 0 < *(int *)(param_1 + 0x4e0)) {
    lVar12 = 0;
    pbVar13 = (byte *)(lVar7 + (long)iVar6 + (long)iVar6 * 4 + 4);
    do {
      lVar7 = *(long *)(param_1 + 0x4e8 + lVar12 * 8);
      puVar2 = &DAT_101dbc0f0;
      if ((int)(uint)*(byte *)(lVar7 + 0x338) < *(int *)(param_1 + 0xa14)) {
        puVar2 = (undefined8 *)(param_1 + (ulong)*(byte *)(lVar7 + 0x338) * 0x38 + 0xd38);
      }
      plVar11 = (long *)(lVar7 + 8);
      local_88 = (long *)*plVar11;
      if ((local_88 == plVar11) && (*(long **)(lVar7 + 0x10) == plVar11)) {
        local_88 = (long *)&DAT_101dbc130;
      }
      bVar3 = pbVar13[-1];
      bVar8 = *pbVar13;
      *(undefined4 *)((long)local_88 + 0x2b4) = 0;
      *(undefined4 *)(local_88 + 0x57) = 0;
      *(undefined1 *)((long)local_88 + 0x2a4) = 0;
      if (0xe < bVar3) goto switchD_100595338_caseD_8;
      bVar4 = bVar8 >> 4;
      uVar5 = (uint)bVar4;
      uVar1 = bVar8 & 0xf;
      switch(bVar3) {
      case 0:
        if (bVar8 != 0) {
          iVar6 = *(int *)(param_1 + 0xd04) % 3;
          if (iVar6 == 2) {
            bVar8 = *(byte *)(lVar7 + 0x339);
            iVar6 = uVar1 + bVar8;
          }
          else {
            if (iVar6 != 1) goto LAB_100595604;
            bVar8 = *(byte *)(lVar7 + 0x339);
            iVar6 = bVar8 + uVar5;
          }
          lVar9 = (long)*(int *)(puVar2 + 1);
          iVar10 = 0;
          if (lVar9 != 0) {
            iVar10 = (int)((long)((ulong)*(uint *)(&DAT_10186d530 + (long)(iVar6 + -1) * 4) * 0x20ab
                                 ) / lVar9);
          }
          iVar6 = 0;
          if (lVar9 != 0) {
            iVar6 = (int)((long)((ulong)*(uint *)(&DAT_10186d52c + (ulong)bVar8 * 4) * 0x20ab) /
                         lVar9);
          }
          *(int *)(local_88 + 0x57) = iVar10 - iVar6;
          goto LAB_100595604;
        }
        break;
      case 1:
        iVar6 = (int)local_88[0x55] + (uint)bVar8 * -4;
        *(int *)(local_88 + 0x55) = iVar6;
        if (iVar6 < 0x38) {
          *(undefined4 *)(local_88 + 0x55) = 0x38;
        }
        goto LAB_100595604;
      case 2:
        *(uint *)(local_88 + 0x55) = (int)local_88[0x55] + (uint)bVar8 * 4;
        goto LAB_100595604;
      case 3:
        local_88 = *(long **)(lVar7 + 8);
        iVar6 = (int)local_88[0x55];
        iVar10 = *(int *)(lVar7 + 0x368);
        if (iVar6 < iVar10) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar7 + 0x36c) * 4;
          if (iVar6 <= iVar10) {
            iVar10 = iVar6;
          }
          *(int *)(local_88 + 0x55) = iVar10;
        }
        else if (iVar10 < iVar6) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar7 + 0x36c) * -4;
          if (iVar10 <= iVar6) {
            iVar10 = iVar6;
          }
          *(int *)(local_88 + 0x55) = iVar10;
        }
LAB_100595604:
        bVar8 = *(byte *)((long)local_88 + 0x2a4) | 1;
LAB_10059560c:
        *(byte *)((long)local_88 + 0x2a4) = bVar8;
        break;
      case 4:
        FUN_1005948f0(lVar7);
        break;
      case 5:
        lVar9 = *(long *)(lVar7 + 8);
        iVar6 = *(int *)(lVar9 + 0x2a8);
        iVar10 = *(int *)(lVar7 + 0x368);
        if (iVar6 < iVar10) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar7 + 0x36c) * 4;
          if (iVar6 <= iVar10) {
            iVar10 = iVar6;
          }
LAB_1005954fc:
          *(int *)(lVar9 + 0x2a8) = iVar10;
        }
        else if (iVar10 < iVar6) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar7 + 0x36c) * -4;
          if (iVar10 <= iVar6) {
            iVar10 = iVar6;
          }
          goto LAB_1005954fc;
        }
        *(byte *)(lVar9 + 0x2a4) = *(byte *)(lVar9 + 0x2a4) | 1;
      case 10:
        if (bVar4 == 0) {
          if (((bVar8 & 0xf) != 0) &&
             (iVar6 = *(int *)((long)local_88 + 0x2ac) - uVar1,
             *(int *)((long)local_88 + 0x2ac) = iVar6, iVar6 < 0)) {
LAB_1005955ac:
            *(undefined4 *)((long)local_88 + 0x2ac) = 0;
          }
        }
        else {
          iVar6 = *(int *)((long)local_88 + 0x2ac) + uVar5;
          *(int *)((long)local_88 + 0x2ac) = iVar6;
          if (0x40 < iVar6) {
            *(undefined4 *)((long)local_88 + 0x2ac) = 0x40;
          }
        }
LAB_1005955b0:
        bVar8 = *(byte *)((long)local_88 + 0x2a4) | 2;
        goto LAB_10059560c;
      case 6:
        FUN_1005948f0(lVar7);
        if (bVar4 == 0) {
          if ((bVar8 & 0xf) != 0) {
            iVar10 = *(int *)((long)local_88 + 0x2ac) - uVar1;
            iVar6 = 0;
            if (-1 < iVar10) {
              iVar6 = iVar10;
            }
            *(int *)((long)local_88 + 0x2ac) = iVar6;
          }
        }
        else {
          iVar6 = *(int *)((long)local_88 + 0x2ac) + uVar5;
          iVar10 = 0x40;
          if (iVar6 < 0x41) {
            iVar10 = iVar6;
          }
          *(int *)((long)local_88 + 0x2ac) = iVar10;
        }
        goto LAB_1005955b0;
      case 7:
        FUN_1005949ec(lVar7);
        break;
      case 0xe:
        if (uVar5 == 9) {
          if ((bVar8 & 0xf) != 0) {
            iVar6 = 0;
            if ((bVar8 & 0xf) != 0) {
              iVar6 = *(int *)(param_1 + 0xd04) / (int)uVar1;
            }
            if (*(int *)(param_1 + 0xd04) == iVar6 * uVar1) {
              bVar8 = *(byte *)((long)local_88 + 0x2a4) | 0xe;
              goto LAB_10059560c;
            }
          }
          break;
        }
        if (uVar5 != 0xd) {
          if ((uVar5 != 0xc) || (*(uint *)(param_1 + 0xd04) != uVar1)) break;
          goto LAB_1005955ac;
        }
        if (*(uint *)(param_1 + 0xd04) == uVar1) {
          if ((local_88 == (long *)&DAT_101dbc130) &&
             (iVar6 = FUN_1005d9420(param_1,lVar7,puVar2,&local_88), iVar6 != 0)) {
            local_88 = (long *)&DAT_101dbc130;
            DAT_101dbc3c0 = &DAT_101dbc0f0;
          }
          if (pbVar13[-3] == 0) {
            bVar8 = *(byte *)((long)local_88 + 0x2a4);
          }
          else {
            *(uint *)((long)local_88 + 0x2ac) = (uint)*(byte *)((long)puVar2 + 0xc);
            bVar8 = *(byte *)((long)local_88 + 0x2a4) | 2;
            *(byte *)((long)local_88 + 0x2a4) = bVar8;
          }
          *(uint *)(local_88 + 0x56) = (uint)*(byte *)(param_1 + 0x4e8 + lVar12 + 0x498);
          *(undefined4 *)(local_88 + 0x55) = *(undefined4 *)(lVar7 + 0x33c);
          bVar8 = bVar8 | 0xd;
        }
        else {
          bVar8 = *(byte *)((long)local_88 + 0x2a4) & 0xf4;
        }
        goto LAB_10059560c;
      }
switchD_100595338_caseD_8:
      local_88 = (long *)*plVar11;
      if ((int)local_88[0x55] + (int)local_88[0x57] == 0) {
        *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) & 0xfe;
      }
      bVar8 = *(byte *)((long)local_88 + 0x2a4);
      if ((bVar8 >> 3 & 1) != 0) {
        FUN_1005d95a4(param_1,puVar2,local_88,0,0);
        bVar8 = *(byte *)((long)local_88 + 0x2a4);
      }
      if ((bVar8 >> 1 & 1) != 0) {
        FUN_1005847b8(*(float *)(lVar7 + 0x358) *
                      (float)(*(int *)((long)local_88 + 0x2b4) + *(int *)((long)local_88 + 0x2ac)) *
                      0.015625 * 0.5,local_88 + 4,0);
      }
      if ((*(byte *)((long)local_88 + 0x2a4) >> 2 & 1) != 0) {
        (**(code **)(local_88[4] + 0xa8))
                  (*(float *)(param_1 + 0xcf0) * ((float)(int)local_88[0x56] + -128.0) * 0.0078125,
                   local_88 + 4);
      }
      if ((*(byte *)((long)local_88 + 0x2a4) & 1) != 0) {
        iVar6 = (int)local_88[0x57] + (int)local_88[0x55];
        iVar10 = 1;
        if (0 < iVar6) {
          iVar10 = iVar6;
        }
        iVar6 = 0;
        if (iVar10 != 0) {
          iVar6 = 0xda7600 / iVar10;
        }
        FUN_100581c98((float)iVar6,local_88 + 4);
      }
      if ((*(byte *)((long)local_88 + 0x2a4) >> 5 & 1) != 0) {
        FUN_100582560(local_88 + 4,0);
        *(undefined4 *)(local_88 + 0x58) = 0;
      }
      lVar12 = lVar12 + 1;
      pbVar13 = pbVar13 + 5;
    } while (lVar12 < *(int *)(param_1 + 0x4e0));
  }
  return 0;
}




ulong FUN_100595794(undefined4 *param_1,uint param_2,long param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 in_x7;
  long lVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  long local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  long local_1a8;
  uint local_1a0;
  int local_19c;
  undefined1 local_195;
  uint local_194;
  uint local_190;
  uint local_18c;
  undefined4 local_188;
  byte local_184;
  byte local_183;
  byte local_182;
  undefined1 local_181;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  char local_7e [22];
  long local_68;
  
  lVar18 = *(long *)PTR____stack_chk_guard_101444218;
  plVar6 = *(long **)(param_1 + 100);
  local_68 = lVar18;
  if ((*(uint *)((long)plVar6 + 0x1a4) & 1) == 0) {
    uVar7 = 0x13;
    goto LAB_100596084;
  }
  param_1[0x14] = 8;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_188);
  if ((int)uVar7 != 0) goto LAB_100596084;
  *(uint *)(*(long *)(param_1 + 100) + 0x1a4) = *(uint *)(*(long *)(param_1 + 100) + 0x1a4) | 8;
  iVar4 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x438,0);
  lVar8 = *(long *)(param_1 + 100);
  if (iVar4 != 0) {
    *(uint *)(lVar8 + 0x1a4) = *(uint *)(lVar8 + 0x1a4) & 0xfffffff7;
    uVar7 = 0x13;
    goto LAB_100596084;
  }
  iVar4 = FUN_1005d148c(lVar8,&local_184,1,4,0);
  if ((iVar4 != 0) ||
     ((((iVar4 = FUN_1005ed0f8(&local_184,"M.K.",4), iVar4 != 0 &&
        (iVar4 = FUN_1005ed0f8(&local_184,"M!K!",4), iVar4 != 0)) &&
       (iVar4 = FUN_1005ed0f8(&local_184,"6CHN",4), iVar4 != 0)) &&
      (((iVar4 = FUN_1005ed0f8(&local_184,"8CHN",4), iVar4 != 0 &&
        (iVar4 = FUN_1005ed0f8(&local_182,"CH",2), iVar4 != 0)) &&
       (iVar4 = FUN_1005ed0f8(&local_183,"CHN",3), iVar4 != 0)))))) {
LAB_100596070:
    *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
         *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
    uVar7 = 0x13;
    goto LAB_100596084;
  }
  iVar4 = FUN_1005ed0f8(&local_184,"M.K.",4);
  if (((iVar4 == 0) || (iVar4 = FUN_1005ed0f8(&local_184,"M!K!",4), iVar4 == 0)) ||
     (iVar4 = FUN_1005ed0f8(&local_184,"FLT4",4), iVar4 == 0)) {
    param_1[0x138] = 4;
  }
  else {
    iVar4 = FUN_1005ed0f8(&local_184,"6CHN",4);
    if (iVar4 == 0) {
      param_1[0x138] = 6;
    }
    else {
      iVar4 = FUN_1005ed0f8(&local_184,"8CHN",4);
      if (iVar4 == 0) {
        param_1[0x138] = 8;
      }
      else {
        iVar4 = FUN_1005ed0f8(&local_182,"CH",2);
        if (iVar4 == 0) {
          local_181 = 0;
          iVar4 = _atoi((char *)&local_184);
        }
        else {
          iVar4 = FUN_1005ed0f8(&local_183,"CHN",3);
          if (iVar4 != 0) {
            param_1[0x138] = 0;
            goto LAB_100596070;
          }
          iVar4 = (char)local_184 + -0x30;
        }
        param_1[0x138] = iVar4;
        if (0x1f < iVar4 - 1U) goto LAB_100596070;
      }
    }
  }
  piVar16 = param_1 + 0x138;
  uVar7 = FUN_100586684(param_1,9,"Number of channels",piVar16,4,1,0);
  if ((int)uVar7 != 0) goto LAB_100596084;
  uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
  if ((int)uVar7 == 0) {
    _bzero(param_1 + 0x13a,0x200);
    *(undefined8 *)(param_1 + 0xa6) = 0;
    param_1[0x33c] = 0x3f4ccccd;
    param_1[0x33b] = 0x3f800000;
    *(undefined1 *)((long)param_1 + 0xd02) = 1;
    param_1[0x285] = 0x1f;
    *(undefined8 *)(param_1 + 0x25e) = 0x7d00000006;
    param_1[0x282] = 0;
    param_1[0x33a] = 0;
    uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x14,0);
    if ((int)uVar7 == 0) {
      if (0 < (int)param_1[0x285]) {
        lVar8 = 0;
        uVar17 = uVar7;
        do {
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x35a) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x358) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x356) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x354) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x352) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x350) = 0;
          *(undefined8 *)(param_1 + lVar8 * 0xe + 0x34e) = 0;
          uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),local_7e,1,0x16,0);
          if ((int)uVar7 != 0) {
LAB_10059603c:
            *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
                 *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
            goto LAB_100596084;
          }
          lVar13 = 0;
          do {
            if (local_7e[lVar13] < ' ') {
              local_7e[lVar13] = '\0';
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0x16);
          lVar13 = lVar8;
          _sprintf((char *)&local_180,"Sample name %d");
          uVar5 = FUN_100586684(param_1,9,&local_180,local_7e,0x16,3,0,in_x7,lVar13);
          uVar14 = (uint)uVar17;
          if (uVar5 != 0) {
            uVar14 = uVar5;
          }
          uVar17 = (ulong)uVar14;
          uVar7 = uVar17;
          if (uVar5 != 0) goto LAB_100596084;
          uVar7 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),&local_18c);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          local_18c = local_18c << 1;
          puVar2 = param_1 + lVar8 * 0xe + 0x350;
          uVar7 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),puVar2);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          FUN_1005d977c(param_1,*(undefined1 *)puVar2,puVar2);
          uVar7 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_195);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          *(undefined1 *)(param_1 + lVar8 * 0xe + 0x351) = local_195;
          uVar7 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),&local_190);
          if ((int)uVar7 != 0) goto LAB_10059603c;
          if (local_190 << 1 < local_18c) {
            local_190 = local_190 << 1;
          }
          uVar7 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),&local_194);
          uVar14 = local_18c;
          if ((int)uVar7 != 0) goto LAB_10059603c;
          local_194 = local_194 * 2;
          if (local_18c < local_190 + local_194) {
            local_194 = local_18c - local_190;
          }
          if (local_194 < 3) {
            local_194 = local_18c;
            local_190 = 0;
            uVar5 = 9;
          }
          else {
            uVar5 = 10;
          }
          if (local_18c != 0) {
            _memset(&local_180,0,0xe8);
            local_180 = CONCAT44(uVar14,0xe8);
            local_178 = (char *)CONCAT44(1,(undefined4)local_178);
            local_170 = CONCAT44(1,*puVar2);
            uVar7 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,uVar5 | 0x400,&local_180,
                                  param_1 + lVar8 * 0xe + 0x34e);
            if (((int)uVar7 != 0) ||
               (((uVar5 >> 1 & 1) != 0 &&
                (plVar6 = *(long **)(param_1 + lVar8 * 0xe + 0x34e),
                uVar7 = (**(code **)(*plVar6 + 0x130))
                                  (plVar6,local_190,2,local_190 + local_194 + -1,2), (int)uVar7 != 0
                )))) goto LAB_10059603c;
            param_1[lVar8 * 0xe + 0x352] = local_190;
            param_1[lVar8 * 0xe + 0x353] = local_194;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)param_1[0x285]);
      }
      uVar7 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),param_1 + 0x281);
      plVar6 = *(long **)(param_1 + 100);
      if ((int)uVar7 != 0) {
LAB_1005960cc:
        *(uint *)((long)plVar6 + 0x1a4) = *(uint *)((long)plVar6 + 0x1a4) & 0xfffffff7;
        goto LAB_100596084;
      }
      uVar7 = FUN_1005d19f8(plVar6,0);
      if ((int)uVar7 == 0) {
        _memset(param_1 + 0xac,0,0x100);
        uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,1,0x80,0);
        if ((int)uVar7 == 0) {
          uVar14 = param_1[0x282];
          lVar8 = 0x2b0;
          do {
            uVar5 = (uint)*(byte *)((long)param_1 + lVar8);
            if ((int)uVar14 < (int)uVar5) {
              param_1[0x282] = uVar5;
              uVar14 = uVar5;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x330);
          param_1[0x282] = uVar14 + 1;
          uVar7 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),0);
          if ((int)uVar7 == 0) {
            if (0 < *piVar16) {
              lVar8 = 0;
              do {
                puVar9 = (undefined8 *)
                         FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x398,
                                       "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                       ,0x609,0);
                puVar9[1] = puVar9 + 1;
                puVar9[2] = puVar9 + 1;
                puVar9[3] = 0;
                FUN_100583c48(puVar9 + 5);
                *(undefined8 **)(param_1 + lVar8 * 2 + 0x13a) = puVar9;
                if (puVar9 == (undefined8 *)0x0) goto LAB_100595ff4;
                *puVar9 = param_1;
                lVar8 = lVar8 + 1;
              } while (lVar8 < (int)param_1[0x138]);
              if (0 < (int)param_1[0x138]) {
                lVar8 = 0;
                iVar4 = 0x40000000;
                do {
                  *(char *)((long)param_1 + lVar8 + 0x980) = (char)(iVar4 >> 0x1f);
                  lVar8 = lVar8 + 1;
                  iVar4 = iVar4 + 0x40000000;
                } while (lVar8 < *piVar16);
              }
            }
            param_1[0x283] = param_1[0x282];
            piVar10 = (int *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                           param_1[0x282] << 4,
                                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                           ,0x61e,0);
            *(int **)(param_1 + 0xa6) = piVar10;
            if (piVar10 != (int *)0x0) {
              if ((int)param_1[0x282] < 1) {
LAB_1005960b4:
                uVar7 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_19c);
                plVar6 = *(long **)(param_1 + 100);
                if ((int)uVar7 != 0) goto LAB_1005960cc;
                uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_1a0);
                if ((int)uVar7 == 0) {
                  iVar4 = param_1[0x285];
                  if (iVar4 < 1) {
                    iVar15 = 0;
                  }
                  else {
                    lVar8 = 0;
                    iVar15 = 0;
                    plVar6 = (long *)(param_1 + 0x34e);
                    do {
                      if (*plVar6 != 0) {
                        iVar15 = *(int *)(*plVar6 + 0x3c) + iVar15;
                      }
                      lVar8 = lVar8 + 1;
                      plVar6 = plVar6 + 7;
                    } while (lVar8 < iVar4);
                  }
                  if ((0x438 < local_1a0 - iVar15) && (local_1a0 < (uint)(local_19c + iVar15))) {
                    uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_1a0 - iVar15,0);
                    if ((int)uVar7 != 0) goto LAB_10059649c;
                    iVar4 = param_1[0x285];
                  }
                  if (0 < iVar4) {
                    lVar8 = 0;
                    plVar6 = (long *)(param_1 + 0x34e);
                    do {
                      plVar12 = (long *)*plVar6;
                      if (plVar12 != (long *)0x0) {
                        uVar14 = *(uint *)((long)plVar12 + 0x3c);
                        uVar5 = (int)plVar12[5] - 1;
                        if (uVar5 < 5) {
                          uVar14 = *(int *)(&DAT_10115e8e0 + (long)(int)uVar5 * 4) * uVar14 >> 3;
                        }
                        uVar7 = (**(code **)(*plVar12 + 0x28))
                                          (plVar12,0,uVar14 * (int)plVar12[0xc],&local_1a8,
                                           &local_1b0,&local_1b4,&local_1b8);
                        if (((int)uVar7 != 0) ||
                           ((((local_1a8 != 0 && (local_1b4 != 0)) &&
                             (uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),local_1a8,1,
                                                    local_1b4,0), ((uint)uVar7 | 0x10) != 0x10)) ||
                            (uVar7 = (**(code **)(*(long *)*plVar6 + 0x30))
                                               ((long *)*plVar6,local_1a8,local_1b0,local_1b4,
                                                local_1b8), (int)uVar7 != 0)))) goto LAB_10059649c;
                        iVar4 = param_1[0x285];
                      }
                      lVar8 = lVar8 + 1;
                      plVar6 = plVar6 + 7;
                    } while (lVar8 < iVar4);
                  }
                  *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
                       *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
                  puVar2 = param_1 + 0xec;
                  _bzero(puVar2,0x130);
                  *(undefined4 **)(param_1 + 2) = puVar2;
                  param_1[0x12f] = local_188;
                  if ((param_3 == 0) || (iVar4 = *(int *)(param_3 + 0x14), iVar4 == 0)) {
                    iVar4 = 5;
                  }
                  param_1[300] = iVar4;
                  param_1[0x12d] = 2;
                  FUN_1005ecc98(puVar2,param_1 + 0x66,0x100);
                  lVar8 = *(long *)(param_1 + 0x12);
                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x108) = *(undefined4 *)(lVar8 + 0x708);
                  param_1[0x4c] = 0;
                  local_158 = 0;
                  uStack_150 = 0;
                  local_168 = 0;
                  uStack_160 = 0;
                  local_170 = 0;
                  local_180 = 0;
                  local_178 = "FMOD MOD Target Unit";
                  uVar7 = FUN_10056b4fc(lVar8,&local_180,0,param_1 + 0xa8,1);
                  if ((int)uVar7 == 0) {
                    FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
                    FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                    param_1[0x1ba] = param_1[0x138];
                    lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                          param_1[0x138] * 0x330,
                                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                          ,0x709,0);
                    *(long *)(param_1 + 0x1bc) = lVar8;
                    if (lVar8 == 0) {
                      uVar7 = 0x26;
                    }
                    else {
                      iVar4 = param_1[0x1ba];
                      if (0 < iVar4) {
                        *(long *)lVar8 = lVar8;
                        *(long *)(lVar8 + 8) = lVar8;
                        *(undefined8 *)(lVar8 + 0x10) = 0;
                        FUN_100583c48(lVar8 + 0x20);
                        iVar4 = param_1[0x1ba];
                        lVar8 = 1;
                        lVar13 = 0x330;
                        if (1 < iVar4) {
                          do {
                            lVar3 = *(long *)(param_1 + 0x1bc) + lVar13;
                            *(long *)lVar3 = lVar3;
                            *(long *)(lVar3 + 8) = lVar3;
                            *(undefined8 *)(lVar3 + 0x10) = 0;
                            FUN_100583c48(lVar3 + 0x20);
                            lVar8 = lVar8 + 1;
                            iVar4 = param_1[0x1ba];
                            lVar13 = lVar13 + 0x330;
                          } while (lVar8 < iVar4);
                        }
                      }
                      FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                    ,0x72d,0);
                      lVar8 = FUN_100585974();
                      *(long *)(param_1 + 0x1be) = lVar8;
                      if (lVar8 == 0) {
                        uVar7 = 0x26;
                      }
                      else {
                        uVar7 = FUN_100585980(lVar8,*(undefined8 *)(param_1 + 0x12),0,iVar4 << 1);
                        if ((int)uVar7 == 0) {
                          lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                iVar4 * 0x570,
                                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                                ,0x739,0);
                          *(long *)(param_1 + 0x1c0) = lVar8;
                          if (lVar8 == 0) {
                            uVar7 = 0x26;
                          }
                          else if (iVar4 < 1) {
LAB_1005964c8:
                            if ((param_2 & 0x4100) == 0) {
                              *(undefined8 *)(param_1 + 0xaa) = 0;
                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0xffffffff;
                            }
                            else {
                              lVar8 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                    param_1[0x281] << 8,
                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                                  ,0x748,0);
                              *(long *)(param_1 + 0xaa) = lVar8;
                              if (lVar8 == 0) {
                                uVar7 = 0x26;
                                goto LAB_100596084;
                              }
                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
                              FUN_1005d8fe8(param_1,0);
                              while (*(char *)((long)param_1 + 0xd01) == '\0') {
                                FUN_10059473c(param_1,0);
                                *(int *)(*(long *)(param_1 + 2) + 0x110) =
                                     *(int *)(*(long *)(param_1 + 2) + 0x110) + param_1[0x25b];
                              }
                              FUN_1005d9258(param_1);
                            }
                            *param_1 = 0;
                            FUN_1005d8fe8(param_1,1);
                            uVar7 = 0;
                          }
                          else {
                            FUN_10057bd44();
                            uVar7 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,
                                                  *(undefined8 *)(param_1 + 0x1c0));
                            lVar8 = 1;
                            lVar13 = 0x2b8;
                            if ((int)uVar7 == 0) {
                              do {
                                if (iVar4 << 1 <= lVar8) goto LAB_1005964c8;
                                FUN_10057bd44(*(long *)(param_1 + 0x1c0) + lVar13);
                                uVar7 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),lVar8,
                                                      *(long *)(param_1 + 0x1c0) + lVar13);
                                lVar8 = lVar8 + 1;
                                lVar13 = lVar13 + 0x2b8;
                              } while ((int)uVar7 == 0);
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_100596084;
                }
                goto LAB_10059649c;
              }
              iVar4 = *piVar16;
              *piVar10 = 0x40;
              puVar11 = (undefined1 *)
                        FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 * 0x140,
                                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                      ,0x635,0);
              *(undefined1 **)(piVar10 + 2) = puVar11;
              if (puVar11 != (undefined1 *)0x0) {
                local_1c0 = 0;
                do {
                  iVar4 = *piVar16;
                  if (0 < *piVar10 * iVar4) {
                    iVar15 = 0;
                    do {
                      uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_184,1,4,0);
                      if ((int)uVar7 != 0) goto LAB_10059649c;
                      uVar7 = 0;
                      puVar11[1] = local_184 & 0xf0 | local_182 >> 4;
                      *puVar11 = 0;
                      do {
                        if (0x6b < uVar7) goto LAB_100595f5c;
                        puVar1 = &DAT_10186d590 + uVar7;
                        uVar7 = uVar7 + 1;
                      } while (((uint)local_183 | (local_184 & 0xf) << 8) < *puVar1);
                      *puVar11 = (char)uVar7;
LAB_100595f5c:
                      puVar11[2] = 0;
                      puVar11[3] = local_182 & 0xf;
                      puVar11[4] = local_181;
                      puVar11 = puVar11 + 5;
                      iVar15 = iVar15 + 1;
                      iVar4 = *piVar16;
                    } while (iVar15 < *piVar10 * iVar4);
                  }
                  local_1c0 = local_1c0 + 1;
                  if ((int)param_1[0x282] <= local_1c0) goto LAB_1005960b4;
                  piVar10 = (int *)(*(long *)(param_1 + 0xa6) + local_1c0 * 0x10);
                  *piVar10 = 0x40;
                  puVar11 = (undefined1 *)
                            FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 * 0x140,
                                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                                          ,0x635,0);
                  *(undefined1 **)(piVar10 + 2) = puVar11;
                } while (puVar11 != (undefined1 *)0x0);
              }
            }
LAB_100595ff4:
            *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
                 *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
            uVar7 = 0x26;
            goto LAB_100596084;
          }
        }
      }
    }
  }
LAB_10059649c:
  *(uint *)(*(long *)(param_1 + 100) + 0x1a4) =
       *(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 0xfffffff7;
LAB_100596084:
  if (lVar18 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}




undefined8 FUN_100596584(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  FUN_1005d9258();
  if (*(long *)(param_1 + 0x6f8) != 0) {
    FUN_100585a04();
    *(undefined8 *)(param_1 + 0x6f8) = 0;
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    FUN_1005cdc44(*(long *)(param_1 + 0x2a0),1,0);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xa14);
  if (0 < iVar2) {
    lVar3 = 0;
    plVar4 = (long *)(param_1 + 0xd38);
    do {
      plVar1 = (long *)*plVar4;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
        *plVar4 = 0;
        iVar2 = *(int *)(param_1 + 0xa14);
      }
      lVar3 = lVar3 + 1;
      plVar4 = plVar4 + 7;
    } while (lVar3 < iVar2);
  }
  if (*(long *)(param_1 + 0x6f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x6f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                  ,0x792);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  if (*(long *)(param_1 + 0x700) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x700),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                  ,0x798);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x298);
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0xa0c);
    lVar5 = 8;
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        if (*(long *)(lVar3 + lVar5) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar3 + lVar5),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                        ,0x7a2);
          lVar3 = *(long *)(param_1 + 0x298);
          *(undefined8 *)(lVar3 + lVar5) = 0;
          iVar2 = *(int *)(param_1 + 0xa0c);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < iVar2);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar3,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                  ,0x7a7);
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x4e0);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x4e8 + lVar3 * 8);
      if (lVar5 != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar5,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                      ,0x7af);
        *(undefined8 *)(param_1 + 0x4e8 + lVar3 * 8) = 0;
        iVar2 = *(int *)(param_1 + 0x4e0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2a8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mod.cpp"
                  ,0x7b6);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  return 0;
}




int FUN_100596788(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int local_10e8;
  undefined8 local_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined4 local_10c0;
  undefined4 local_10bc;
  long local_10b8;
  undefined4 local_10b0;
  undefined4 local_10ac;
  undefined4 local_10a8;
  undefined1 *local_10a0;
  undefined1 *puStack_1098;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1078 [4096];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0xd00) == '\0') {
    iVar9 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar9 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x968);
    iVar9 = 0;
    if (param_3 != 0) {
      uVar13 = 0;
      iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x104);
      local_10e8 = (int)&local_1088;
      lVar14 = param_2;
      iVar9 = 0;
      do {
        if (uVar12 == 0) {
          FUN_10059473c(param_1,1);
          iVar9 = 0;
          uVar12 = *(uint *)(param_1 + 0x96c);
        }
        uVar11 = param_3 - uVar13;
        if (uVar12 + uVar13 <= param_3) {
          uVar11 = uVar12;
        }
        lVar15 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar15 + 0x710);
        if (uVar11 <= *(uint *)(lVar15 + 0x710)) {
          uVar1 = uVar11;
        }
        if (param_2 != 0) {
          local_10ac = 0;
          local_1088 = 0;
          uStack_1080 = 0;
          local_10b0 = 0x200;
          local_10a8 = 0;
          local_10a0 = auStack_1078;
          local_10b8 = lVar15;
          puStack_1098 = local_10a0;
          if (lVar15 == 0) {
            lVar16 = 0;
            bVar7 = false;
            bVar5 = false;
            bVar6 = true;
          }
          else {
            bVar6 = true;
            FUN_10057097c(lVar15,1);
            lVar16 = *(long *)(param_1 + 0x48);
            if (lVar16 == 0) {
              lVar16 = 0;
              bVar5 = false;
              bVar7 = true;
            }
            else {
              FUN_10057097c(lVar16,3);
              bVar6 = false;
              bVar7 = true;
              bVar5 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x2a0) + 0x3f) == '\0') {
LAB_100596920:
            local_10c0 = 0;
            local_10d0 = 0;
            uStack_10c8 = 0;
            local_10d8 = 0;
            local_10bc = 0xffffffff;
            iVar9 = FUN_1005c9be4(&local_10b8,uVar1,1000,2,&local_10d8);
            if (iVar9 == 0) {
              uVar10 = FUN_1005c8da0(&local_10d8);
              bVar4 = true;
              iVar9 = FUN_10063a2fc(0x3f800000,lVar14,uVar10,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar8 = iVar9;
              if (iVar9 == 0) {
                FUN_1005c8d10(&local_10d8);
                bVar4 = false;
                iVar9 = 0;
                iVar8 = local_10e8;
              }
            }
            else {
              bVar4 = true;
              iVar8 = iVar9;
            }
            local_10e8 = iVar8;
            FUN_1005c8e48(&local_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar9 = FUN_1005cb3bc(&local_10b8,*(long *)(param_1 + 0x2a0),uVar1);
            if (iVar9 == 0) goto LAB_100596920;
            bVar4 = true;
            local_10e8 = iVar9;
          }
          if (!bVar6 && bVar5) {
            FUN_100570990(lVar16,3);
          }
          if ((lVar15 != 0) && (bVar7)) {
            FUN_100570990(lVar15,1);
          }
          if (bVar4) goto LAB_100596a7c;
        }
        uVar3 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar11 = uVar1;
        if (uVar3 < 5) {
          uVar11 = *(int *)(&DAT_10115e8e0 + (long)(int)uVar3 * 4) * uVar1 >> 3;
        }
        uVar13 = uVar1 + uVar13;
        lVar14 = lVar14 + (ulong)(uVar11 * iVar2);
        uVar12 = uVar12 - uVar1;
      } while (uVar13 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar12;
  }
  local_10e8 = iVar9;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_100596a7c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return local_10e8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100596ac0(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_4 == 2) {
    uVar4 = *(uint *)(param_1 + 0x970);
    if (uVar4 == param_3) {
      uVar3 = 0;
    }
    else {
      if (param_3 < uVar4) {
        FUN_1005d8fe8(param_1,0);
        uVar4 = *(uint *)(param_1 + 0x970);
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      while (uVar4 < param_3) {
        FUN_10059473c(param_1,1);
        uVar4 = *(uint *)(param_1 + 0x970);
      }
      if (bVar2) {
        uVar1 = *(undefined2 *)(param_1 + 0xd00);
        FUN_1005d9258(param_1);
        uVar3 = 0;
        *(undefined2 *)(param_1 + 0xd00) = uVar1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else if (param_4 == 0x100) {
    FUN_1005d8fe8(param_1,0);
    uVar3 = 0;
    *(uint *)(param_1 + 0xd14) = param_3;
    *(uint *)(param_1 + 0xd24) = param_3;
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}




void FUN_100596b8c(void)

{
  DAT_101e975f0 = "FMOD MPEG Codec";
  DAT_101e975f8 = 0x10100;
  DAT_101e97600 = 10;
  DAT_101e97608 = thunk_FUN_1005973d0;
  DAT_101e97610 = FUN_100596c2c;
  DAT_101e97618 = thunk_FUN_100597af8;
  DAT_101e97628 = thunk_FUN_100597e44;
  DAT_101e97638 = FUN_100596c80;
  DAT_101e97668 = thunk_FUN_100598a40;
  DAT_101e97648 = 9;
  DAT_101e9765c = 3;
  DAT_101e9764c = 0x358;
  DAT_101e976b0 = FUN_100596c9c;
  DAT_101e976b8 = FUN_100596d48;
  return;
}




undefined8 thunk_FUN_1005973d0(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined1 auStack_4a8c [4];
  undefined1 auStack_4a88 [4];
  undefined4 uStack_4a84;
  uint uStack_4a7c;
  int iStack_4a78;
  int iStack_4a74;
  uint uStack_4a70;
  undefined1 auStack_4a6c [4];
  undefined1 auStack_4a68 [8];
  undefined1 *puStack_4a60;
  undefined *puStack_4a40;
  undefined *puStack_4a38;
  undefined *puStack_4a30;
  undefined4 uStack_4a18;
  int iStack_4938;
  undefined4 uStack_4934;
  undefined4 uStack_4930;
  undefined8 uStack_4928;
  undefined8 uStack_4920;
  undefined8 uStack_4918;
  undefined8 uStack_4910;
  undefined8 uStack_4900;
  undefined8 uStack_48e0;
  undefined8 uStack_48d8;
  undefined4 uStack_4778;
  undefined8 uStack_4770;
  short *psStack_4728;
  undefined1 auStack_3860 [4664];
  undefined1 *puStack_2628;
  undefined4 uStack_1c4;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [304];
  long lStack_68;
  
  puStack_4a38 = PTR_defaultFileSeek_101444160;
  puStack_4a40 = PTR_defaultFileRead_101444158;
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_4a7c = 0;
  param_1[0x14] = 9;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = puStack_4a40;
  *(undefined **)(param_1 + 0xc) = puStack_4a38;
  puStack_4a30 = PTR_defaultMetaData_101444168;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  param_1[0x4c] = 0;
  uStack_4a18 = 0;
  uStack_4900 = 0;
  uStack_48e0 = 0;
  uStack_4918 = 0;
  uStack_4910 = 0;
  uStack_4928 = 0;
  uStack_4920 = 0;
  lStack_68 = lVar10;
  _bzero(auStack_198,0x130);
  uStack_48d8 = *(undefined8 *)(param_1 + 100);
  iStack_4938 = -1;
  uStack_4770 = 0;
  puStack_4a60 = auStack_198;
  uVar7 = FUN_1005d148c(uStack_48d8,auStack_4a88,1,8,0);
  if ((int)uVar7 != 0) goto LAB_100597774;
  iVar5 = FUN_1005ed0f8(auStack_4a88,"RIFF",4);
  if (iVar5 == 0) {
    uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4a8c,1,4,0);
    if ((int)uVar7 != 0) goto LAB_100597774;
    iVar5 = FUN_1005ed0f8(auStack_4a8c,"WAVE",4);
    if (iVar5 == 0) {
      iVar5 = FUN_1005a8c04(auStack_4a68,uStack_4a84);
      if (iVar5 == 0) {
        if (psStack_4728 != (short *)0x0) {
          if (iStack_4938 == -1) goto LAB_100597590;
          if ((*psStack_4728 == 0x50) || (*psStack_4728 == 0x55)) {
            uVar7 = 0;
            param_1[0x4c] = iStack_4938;
            uStack_4a7c = *(uint *)(puStack_4a60 + 0x10c);
            param_1[0x4d] = uStack_4934;
            param_1[0x4e] = uStack_4930;
            *(undefined8 *)(param_1 + 0xb4) = uStack_4770;
            param_1[0xb6] = uStack_4778;
          }
          else {
            uVar7 = 0x13;
          }
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),psStack_4728,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                        ,0x18e);
          psStack_4728 = (short *)0x0;
          if ((int)uVar7 != 0) goto LAB_100597774;
        }
      }
      else if (psStack_4728 != (short *)0x0) {
LAB_100597590:
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),psStack_4728,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                      ,0x198);
        psStack_4728 = (short *)0x0;
      }
    }
  }
  if (uStack_4a7c == 0) {
    uVar7 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),&uStack_4a7c)
    ;
    if ((int)uVar7 != 0) goto LAB_100597774;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar9 = uStack_4a7c;
  _bzero(auStack_4a68,0x48d0);
  *(undefined1 **)(param_1 + 0x66) = auStack_4a68;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((long)param_1 + 0x355) = 0;
  uStack_1a0 = 0xffffffff;
  uStack_1c4 = 1;
  puStack_2628 = auStack_3860;
  uVar11 = 0x1000;
  if (uVar9 < 0x1001) {
    uVar11 = uVar9;
  }
  if ((param_2 & 0x8000) != 0) {
    uVar11 = uVar9;
  }
  if (uVar11 != 0) {
    uVar9 = 0;
    iVar5 = param_1[0x4c];
    do {
      uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iVar5,0);
      if ((int)uVar7 == 0) {
        uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4a6c,1,4,0);
        if ((int)uVar7 != 0) goto LAB_100597774;
        *(undefined4 *)(*(long *)(param_1 + 0x66) + 0x48c0) = 0;
        iVar5 = FUN_100598328(param_1,auStack_4a6c,&iStack_4a78,&iStack_4a74,&uStack_4a70);
        if (iVar5 != 0) goto LAB_10059774c;
        uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),uStack_4a70,1);
        if ((int)uVar7 != 0) goto LAB_100597774;
        uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4a6c,1,4,0);
        iVar4 = iStack_4a74;
        iVar5 = iStack_4a78;
        if ((int)uVar7 != 0) {
          if ((int)uVar7 != 0x10) {
            *(undefined8 *)(param_1 + 0x66) = 0;
            goto LAB_100597774;
          }
LAB_1005977dc:
          lVar8 = *(long *)(param_1 + 0x66);
          *(undefined4 *)(lVar8 + 0x48c8) = 0xffffffff;
          *(undefined4 *)(lVar8 + 0x48a4) = 1;
          *(undefined4 *)(lVar8 + 0x48c0) = 0;
          _bzero(param_1 + 0x68,0x130);
          *(undefined4 **)(param_1 + 2) = param_1 + 0x68;
          param_1[0xaa] = iStack_4a78;
          param_1[0xab] = uStack_4a7c;
          param_1[0xa9] = iStack_4a74;
          uStack_4a70 = uStack_4a70 + 4;
          if (DAT_101d91b40 == '\0') {
            DAT_101d91b38 = &DAT_101d91b50;
            FUN_100596d5c(1);
            iVar5 = FUN_1005996ac();
            if (iVar5 == 0) {
              FUN_10059a5f4(0x20);
            }
            DAT_101d91b40 = '\x01';
          }
          uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
          if ((int)uVar7 != 0) {
            *(undefined8 *)(param_1 + 0x66) = 0;
            goto LAB_100597774;
          }
          uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e976c8,1,uStack_4a70,0);
          if ((int)uVar7 != 0) {
            *(undefined8 *)(param_1 + 0x66) = 0;
            goto LAB_100597774;
          }
          iVar5 = FUN_1005987c0(param_1,&DAT_101e976c8,param_1 + 0xbc,param_1 + 0xb9);
          if (iVar5 == 0) {
            param_1[0x4c] = param_1[0x4c] + uStack_4a70;
            uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e976c8,1,uStack_4a70,0);
            if ((int)uVar7 != 0) {
              *(undefined8 *)(param_1 + 0x66) = 0;
              goto LAB_100597774;
            }
          }
          uVar2 = *(undefined4 *)(*(long *)(param_1 + 2) + 0x100);
          *(undefined4 *)(*(long *)(param_1 + 2) + 0x100) = 2;
          piVar1 = param_1 + 0xb7;
          FUN_100598910(param_1,&DAT_101e976c8,&DAT_101e97dc8,piVar1);
          *(undefined4 *)(*(long *)(param_1 + 2) + 0x100) = uVar2;
          uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
          if ((int)uVar7 != 0) goto LAB_100597774;
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            iVar5 = 0x480;
            *piVar1 = 0x480;
          }
          uStack_4a70 = uStack_4a70 + 1 & 0xfffffffe;
          if (((param_2 >> 0xe & 1) == 0) ||
             ((*(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 1) == 0)) {
            lVar8 = *(long *)(param_1 + 2);
            if (*(int *)(lVar8 + 0x10c) == -1) {
              *(undefined4 *)(lVar8 + 0x110) = 0xffffffff;
            }
            else if (*(char *)(param_1 + 0xd5) == '\0') {
              uVar11 = 0;
              if (uStack_4a70 != 0) {
                uVar11 = ((*(int *)(lVar8 + 0x10c) + uStack_4a70) - 1) / uStack_4a70;
              }
              *(uint *)(lVar8 + 0x110) = iVar5 * (uVar11 + 1);
              param_1[0x15] = param_1[0x15] & 0xfffffffe;
            }
            else {
              *(int *)(lVar8 + 0x110) = param_1[0xb9] * 0x480;
            }
          }
          else {
            FUN_1005d1d28(*(long *)(param_1 + 100),param_1[0x4c],0);
            uVar7 = FUN_100597230(param_1);
            if ((int)uVar7 != 0) goto LAB_100597774;
          }
          if (bVar3) {
            iVar5 = *(int *)(*(long *)(param_1 + 2) + 0x10c);
            if (iVar5 != -1) {
              *(int *)(*(long *)(param_1 + 2) + 0x10c) = iVar5 - param_1[0x4c];
            }
          }
          if (((param_2 & 0x4000) == 0) && (*(long *)(param_1 + 0xba) != 0)) {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xba),
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                          ,0x28e);
            *(undefined8 *)(param_1 + 0xba) = 0;
            param_1[0xb9] = 0;
          }
          *(undefined8 *)(param_1 + 0x66) = 0;
          lVar8 = *(long *)(param_1 + 2);
          *(undefined4 *)(lVar8 + 0x100) = 2;
          *(undefined4 *)(lVar8 + 0x114) = 0x480;
          uVar7 = FUN_100598a40(param_1);
          goto LAB_100597774;
        }
        iVar6 = FUN_100598328(param_1,auStack_4a6c,&iStack_4a78,&iStack_4a74,0);
        if ((iVar6 == 0 && iStack_4a78 == iVar5) && (iStack_4a74 == iVar4)) goto LAB_1005977dc;
        iVar5 = param_1[0x4c] + 1;
        param_1[0x4c] = iVar5;
        uVar11 = 0x1000;
        if (uStack_4a7c < 0x1001) {
          uVar11 = uStack_4a7c;
        }
        if ((param_2 & 0x8000) != 0) {
          uVar11 = uStack_4a7c;
        }
      }
      else {
        if ((int)uVar7 != 0xe) {
          *(undefined8 *)(param_1 + 0x66) = 0;
          goto LAB_100597774;
        }
LAB_10059774c:
        iVar5 = param_1[0x4c] + 1;
        param_1[0x4c] = iVar5;
        uVar9 = uVar9 + 1;
      }
    } while (uVar9 < uVar11);
  }
  *(undefined8 *)(param_1 + 0x66) = 0;
  uVar7 = 0x13;
LAB_100597774:
  if (lVar10 == lStack_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100596c2c(long param_1)

{
  if (*(long *)(param_1 + 0x2e8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2e8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                  ,0x2ab);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  return 0;
}




undefined8 thunk_FUN_100597af8(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fStack_784;
  uint uStack_780;
  uint uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  int iStack_770;
  int iStack_76c;
  undefined1 auStack_768 [4];
  undefined1 auStack_764 [1796];
  
  iVar12 = 0;
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x104);
  lVar11 = *(long *)(param_1 + 0x198);
  *param_4 = 0;
  iVar2 = iVar3 + 2;
  if (-1 < iVar3 + 1) {
    iVar2 = iVar3 + 1;
  }
  do {
    iStack_770 = 0;
    iStack_76c = 0;
    uStack_774 = 0;
    _bzero(auStack_768,0x700);
    if (2 < iVar3) {
      iVar8 = iVar12;
      if (iVar12 < 0) {
        iVar8 = iVar12 + 1;
      }
      *(long *)(param_1 + 0x198) = lVar11 + (long)(iVar8 >> 1) * 0x48d0;
    }
    uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_768,1,4,0);
    if ((int)uVar9 == 0) {
      iVar8 = 0;
      do {
        if (iVar8 != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x48c0) = 0;
        }
        iVar7 = FUN_100598328(param_1,auStack_768,&iStack_770,&iStack_76c,&uStack_774);
        if (iVar7 == 0) {
          if ((iVar8 != 0) || ((*(byte *)(param_1 + 0x54) >> 2 & 1) != 0)) {
            uVar9 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&uStack_778);
            if (((int)uVar9 != 0) ||
               ((uVar9 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uStack_774,1), (int)uVar9 != 0
                || (uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&uStack_77c,1,4,0),
                   (int)uVar9 != 0)))) break;
            uVar4 = (uStack_77c & 0xff00ff00) >> 8 | (uStack_77c & 0xff00ff) << 8;
            uVar5 = uVar4 << 0x10;
            uVar4 = uVar4 >> 0x10 | uVar5;
            if (((uStack_77c & 0xe0ff) == 0xe0ff) &&
               (4 - (uVar5 >> 0x11 & 3) == *(int *)(*(long *)(param_1 + 0x198) + 0x4868))) {
              iVar7 = 0;
            }
            else {
              iVar7 = 0xd;
            }
            uStack_77c = uVar4;
            if ((*(uint *)(*(long *)(param_1 + 400) + 0x1a4) & 1) != 0) {
              FUN_1005d1d28(*(long *)(param_1 + 400),uStack_778,0);
            }
            if (iVar7 != 0) goto LAB_100597cbc;
          }
          uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_764,1,uStack_774,0);
          if ((int)uVar9 != 0) goto LAB_100597dfc;
          iVar8 = FUN_100598910(param_1,auStack_768,param_2,&uStack_780);
          if (iVar8 != 0) {
            iStack_76c = *(int *)(*(long *)(param_1 + 8) + 0x104);
          }
          uVar9 = 0;
          uVar4 = 0;
          if (iVar2 >> 1 != 0) {
            uVar4 = uStack_780 / (uint)(iVar2 >> 1);
          }
          *param_4 = *param_4 + uVar4;
          break;
        }
LAB_100597cbc:
        iVar7 = FUN_1005ed0f8(auStack_768,"TAG",3);
        if (iVar7 == 0) {
          uVar9 = 0x7c;
        }
        else {
          uVar9 = 0xfffffffd;
        }
        FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar9,1);
        uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_768,1,4,0);
        iVar8 = iVar8 + -1;
      } while ((int)uVar9 == 0);
    }
    if ((iStack_770 != 0) && (iStack_770 != *(int *)(*(long *)(param_1 + 8) + 0x108))) {
      fStack_784 = (float)iStack_770;
      FUN_100586684(param_1,9,"Sample Rate Change",&fStack_784,4,2,1);
      *(int *)(*(long *)(param_1 + 8) + 0x108) = iStack_770;
    }
    if (iStack_76c == 0) {
      iStack_76c = 1;
    }
    iVar12 = iStack_76c + iVar12;
    lVar1 = param_2 + (long)iStack_76c * 2;
    bVar6 = param_2 != 0;
    param_2 = 0;
    if (bVar6) {
      param_2 = lVar1;
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x104) <= iVar12) {
LAB_100597dfc:
      *(long *)(param_1 + 0x198) = lVar11;
      if (*(long *)PTR____stack_chk_guard_101444218 != lVar10) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar9;
    }
  } while( true );
}




undefined8 thunk_FUN_100597e44(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uStack_34;
  
  if (param_4 == 8) {
    uVar5 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x130) + param_3,0);
    return uVar5;
  }
  lVar6 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x2dc);
  uVar7 = 0;
  if (uVar10 != 0) {
    uVar7 = param_3 / uVar10;
  }
  if (param_3 == 0) {
    uVar9 = 0;
    param_3 = 0;
  }
  else {
    uVar9 = 3;
    if ((*(byte *)(param_1 + 0x54) & 2) == 0) {
      uVar9 = 9;
    }
    iVar8 = uVar7 * uVar10;
    uVar2 = uVar7;
    if (uVar9 <= uVar7) {
      uVar2 = uVar9;
    }
    uVar7 = uVar7 - uVar2;
    uVar9 = (param_3 - iVar8) + uVar2 * uVar10;
  }
  if (((*(byte *)(param_1 + 0x181) >> 6 & 1) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
    if (*(char *)(param_1 + 0x355) == '\0') {
      if (uVar9 < param_3) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x110) / uVar10;
        }
        iVar8 = uVar2 - 1;
        if ((*(byte *)(param_1 + 0x54) & 2) != 0) {
          iVar8 = 0;
        }
        uVar10 = 0;
        if (uVar2 != 0) {
          uVar10 = (uint)(iVar8 + *(int *)(lVar6 + 0x10c)) / uVar2;
        }
        iVar8 = uVar10 * uVar7;
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      if (param_3 < uVar9 || param_3 - uVar9 == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x110));
        fVar11 = ((float)(param_3 - uVar9) / fVar11) * 100.0;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar11) {
        fVar12 = fVar11;
      }
      fVar11 = 100.0;
      if (fVar12 <= 100.0) {
        fVar11 = fVar12;
      }
      iVar1 = 99;
      if ((int)fVar11 < 100) {
        iVar1 = (int)fVar11;
      }
      fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + iVar1 + 0x2f0));
      if (iVar1 < 99) {
        fVar13 = (float)NEON_ucvtf((uint)*(byte *)(iVar1 + param_1 + 0x2f1));
      }
      else {
        fVar13 = 256.0;
      }
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x10c));
      iVar8 = (int)(fVar3 * (fVar12 + (fVar11 - (float)iVar1) * (fVar13 - fVar12)) * 0.00390625);
      if (0 < iVar1) {
        iVar8 = *(int *)(lVar6 + 0x104) * 2 * uVar10 + iVar8;
      }
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x2e4) - 1;
    if (uVar7 <= *(uint *)(param_1 + 0x2e4)) {
      uVar10 = uVar7;
    }
    iVar8 = *(int *)(*(long *)(param_1 + 0x2e8) + (ulong)uVar10 * 4);
  }
  uVar10 = *(uint *)(param_1 + 0x130);
  if (uVar10 + iVar8 <= *(int *)(lVar6 + 0x10c) + uVar10) {
    uVar10 = uVar10 + iVar8;
  }
  uVar5 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar10,0);
  if ((int)uVar5 == 0) {
    if ((*(uint *)(param_1 + 0x54) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 4;
    }
    if (uVar9 != 0) {
      do {
        while( true ) {
          uStack_34 = 0;
          uVar10 = uVar9;
          if (0x47f < uVar9) {
            uVar10 = 0x480;
          }
          uVar5 = FUN_100585ec4(param_1,0,uVar10,&uStack_34);
          if ((int)uVar5 != 0) goto LAB_1005980d8;
          if (uStack_34 == 0) {
            uStack_34 = uVar10;
          }
          bVar4 = uStack_34 <= uVar9;
          uVar10 = uVar9 - uStack_34;
          uVar9 = 0;
          if (bVar4) {
            uVar9 = uVar10;
          }
          if (*(long *)(param_1 + 0x160) == 0) break;
          uVar5 = 0;
          if ((uVar9 < uStack_34 && *(int *)(param_1 + 0x170) == 0) || (uVar9 == 0))
          goto LAB_1005980d8;
        }
      } while (uStack_34 <= uVar9 && uVar9 != 0);
    }
    uVar5 = 0;
LAB_1005980d8:
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffffb;
  }
  return uVar5;
}




undefined8 FUN_100596c80(void)

{
  FUN_1005981b8();
  return 0;
}




void thunk_FUN_100598a40(void)

{
  FUN_100598a40();
  return;
}




undefined8 FUN_100596c9c(undefined8 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (DAT_101d91b40 == '\0') {
    DAT_101d91b38 = &DAT_101d91b50;
    FUN_100596d5c(1);
    iVar1 = FUN_1005996ac();
    if (iVar1 == 0) {
      FUN_10059a5f4(0x20);
    }
    DAT_101d91b40 = '\x01';
  }
  if (param_3 != (int *)0x0) {
    iVar1 = param_2 + 2;
    if (-1 < param_2 + 1) {
      iVar1 = param_2 + 1;
    }
    *param_3 = (iVar1 >> 1) * 0x48d0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x480;
  }
  return 0;
}




void FUN_100596d48(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x198) = param_5;
  *(undefined4 *)(param_1 + 0x2dc) = 0x480;
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  FUN_100598a40();
  return;
}




undefined8 FUN_100596d5c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  float fStack_48;
  float fStack_44;
  
  puVar2 = PTR_DAT_101868b90;
  fVar9 = (float)_cosf();
  fVar10 = (float)_cosf();
  fVar11 = (float)_cosf();
  fVar12 = (float)_cosf();
  auVar17 = NEON_fmov(0x3f800000,4);
  fStack_48 = auVar17._8_4_;
  fStack_44 = auVar17._12_4_;
  fVar16 = auVar17._0_4_;
  fVar18 = auVar17._4_4_;
  auVar17._0_8_ = CONCAT44(fVar18 / (fVar9 + fVar9),fVar16 / (fVar10 + fVar10));
  auVar17._8_4_ = fStack_48 / (fVar11 + fVar11);
  auVar17._12_4_ = fStack_44 / (fVar12 + fVar12);
  *(undefined8 *)puVar2 = auVar17._0_8_;
  auVar17 = NEON_ext(auVar17,auVar17,8,1);
  *(long *)(puVar2 + 8) = auVar17._0_8_;
  fVar9 = (float)_cosf();
  fVar10 = (float)_cosf();
  fVar11 = (float)_cosf();
  fVar12 = (float)_cosf();
  auVar13._0_8_ = CONCAT44(fVar18 / (fVar9 + fVar9),fVar16 / (fVar10 + fVar10));
  auVar13._8_4_ = fStack_48 / (fVar11 + fVar11);
  auVar13._12_4_ = fStack_44 / (fVar12 + fVar12);
  *(undefined8 *)(puVar2 + 0x10) = auVar13._0_8_;
  auVar17 = NEON_ext(auVar13,auVar13,8,1);
  *(long *)(puVar2 + 0x18) = auVar17._0_8_;
  fVar9 = (float)_cosf();
  fVar10 = (float)_cosf();
  fVar11 = (float)_cosf();
  fVar12 = (float)_cosf();
  auVar14._0_8_ = CONCAT44(fVar18 / (fVar9 + fVar9),fVar16 / (fVar10 + fVar10));
  auVar14._8_4_ = fStack_48 / (fVar11 + fVar11);
  auVar14._12_4_ = fStack_44 / (fVar12 + fVar12);
  *(undefined8 *)(puVar2 + 0x20) = auVar14._0_8_;
  auVar17 = NEON_ext(auVar14,auVar14,8,1);
  *(long *)(puVar2 + 0x28) = auVar17._0_8_;
  fVar9 = (float)_cosf();
  fVar10 = (float)_cosf();
  fVar11 = (float)_cosf();
  fVar12 = (float)_cosf();
  auVar15._0_8_ = CONCAT44(fVar18 / (fVar9 + fVar9),fVar16 / (fVar10 + fVar10));
  auVar15._8_4_ = fStack_48 / (fVar11 + fVar11);
  auVar15._12_4_ = fStack_44 / (fVar12 + fVar12);
  *(undefined8 *)(puVar2 + 0x30) = auVar15._0_8_;
  auVar17 = NEON_ext(auVar15,auVar15,8,1);
  *(long *)(puVar2 + 0x38) = auVar17._0_8_;
  puVar2 = PTR_DAT_101868b98;
  fVar9 = (float)_cosf();
  *(float *)puVar2 = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 4) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 8) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 0xc) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 0x10) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 0x14) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 0x18) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 0x1c) = 1.0 / (fVar9 + fVar9);
  puVar2 = PTR_DAT_101868ba0;
  fVar9 = (float)_cosf();
  *(float *)puVar2 = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 4) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 8) = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  *(float *)(puVar2 + 0xc) = 1.0 / (fVar9 + fVar9);
  puVar2 = PTR_DAT_101868ba8;
  fVar9 = (float)_cosf();
  *(float *)puVar2 = 1.0 / (fVar9 + fVar9);
  fVar9 = (float)_cosf();
  lVar6 = 0;
  *(float *)(puVar2 + 4) = 1.0 / (fVar9 + fVar9);
  *(undefined4 *)PTR_DAT_101868bb0 = 0x3f3504f3;
  pfVar8 = (float *)&DAT_101d91b50;
  DAT_101d91b38 = &DAT_101d91b50;
  iVar3 = -param_1;
  do {
    if (pfVar8 < (float *)0x101d92390) {
      fVar9 = (float)iVar3 * (float)(int)(&DAT_101868bb8)[lVar6] * 1.5258789e-05;
      *pfVar8 = fVar9;
      pfVar8[0x10] = fVar9;
    }
    pfVar5 = pfVar8 + -0x3ff;
    if ((int)lVar6 % 0x20 != 0x1f) {
      pfVar5 = pfVar8;
    }
    iVar4 = -iVar3;
    if ((int)lVar6 % 0x40 != 0x3f) {
      iVar4 = iVar3;
    }
    lVar6 = lVar6 + 1;
    pfVar8 = pfVar5 + 0x20;
    iVar3 = iVar4;
  } while (lVar6 != 0x100);
  piVar7 = &DAT_101868fb8;
  iVar3 = 0x100;
  do {
    if (pfVar8 < (float *)0x101d92390) {
      fVar9 = (float)iVar4 * (float)*piVar7 * 1.5258789e-05;
      *pfVar8 = fVar9;
      pfVar5[0x30] = fVar9;
    }
    pfVar5 = pfVar5 + -0x3df;
    if (iVar3 % 0x20 != 0x1f) {
      pfVar5 = pfVar8;
    }
    iVar1 = -iVar4;
    if (iVar3 % 0x40 != 0x3f) {
      iVar1 = iVar4;
    }
    iVar3 = iVar3 + 1;
    pfVar8 = pfVar5 + 0x20;
    piVar7 = piVar7 + -1;
    iVar4 = iVar1;
  } while (iVar3 != 0x200);
  return 0;
}




void FUN_1005971ec(void)

{
  int iVar1;
  
  DAT_101d91b38 = &DAT_101d91b50;
  FUN_100596d5c(1);
  iVar1 = FUN_1005996ac();
  if (iVar1 != 0) {
    return;
  }
  FUN_10059a5f4(0x20);
  return;
}




undefined8 FUN_100597230(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int local_5c;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  
  iVar1 = *(int *)(param_1 + 0x2dc);
  uVar4 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_54);
  if ((int)uVar4 == 0) {
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    lVar6 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar6 + 0x110) = 0;
    if (*(int *)(lVar6 + 0x10c) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        iVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_58,1,4,0);
        if (iVar3 != 0) break;
        iVar3 = FUN_100598328(param_1,auStack_58,0,0,&local_5c);
        if ((iVar3 == 0) &&
           (lVar6 = *(long *)(param_1 + 8), local_5c + uVar8 < *(uint *)(lVar6 + 0x10c))) {
          if (uVar7 < *(uint *)(param_1 + 0x2e4)) {
            lVar5 = *(long *)(param_1 + 0x2e8);
          }
          else {
            iVar3 = *(uint *)(param_1 + 0x2e4) + 1000;
            *(int *)(param_1 + 0x2e4) = iVar3;
            lVar5 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                  *(undefined8 *)(param_1 + 0x2e8),iVar3 * 4,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                                  ,0x118,0);
            *(long *)(param_1 + 0x2e8) = lVar5;
            if (lVar5 == 0) {
              return 0x26;
            }
            lVar6 = *(long *)(param_1 + 8);
          }
          iVar3 = local_5c;
          *(uint *)(lVar5 + (ulong)uVar7 * 4) = uVar8;
          *(int *)(lVar6 + 0x110) = *(int *)(lVar6 + 0x110) + iVar1;
          uVar7 = uVar7 + 1;
          iVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_5c,1);
          if (iVar2 != 0) break;
          uVar8 = uVar8 + iVar3 + 4;
        }
        else {
          FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xfffffffd,1);
        }
      } while (uVar8 < *(uint *)(*(long *)(param_1 + 8) + 0x10c));
    }
    uVar4 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_54,0);
    if ((int)uVar4 == 0) {
      uVar4 = 0;
      *(uint *)(param_1 + 0x2e4) = uVar7;
    }
  }
  return uVar4;
}




undefined8 FUN_1005973d0(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined1 auStack_4a8c [4];
  undefined1 auStack_4a88 [4];
  undefined4 local_4a84;
  uint local_4a7c;
  int local_4a78;
  int local_4a74;
  uint local_4a70;
  undefined1 auStack_4a6c [4];
  undefined1 auStack_4a68 [8];
  undefined1 *local_4a60;
  undefined *local_4a40;
  undefined *puStack_4a38;
  undefined *local_4a30;
  undefined4 local_4a18;
  int local_4938;
  undefined4 local_4934;
  undefined4 local_4930;
  undefined8 local_4928;
  undefined8 uStack_4920;
  undefined8 local_4918;
  undefined8 uStack_4910;
  undefined8 local_4900;
  undefined8 local_48e0;
  undefined8 local_48d8;
  undefined4 local_4778;
  undefined8 local_4770;
  short *local_4728;
  undefined1 auStack_3860 [4664];
  undefined1 *local_2628;
  undefined4 uStack_1c4;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [304];
  long local_68;
  
  puStack_4a38 = PTR_defaultFileSeek_101444160;
  local_4a40 = PTR_defaultFileRead_101444158;
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  local_4a7c = 0;
  param_1[0x14] = 9;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = local_4a40;
  *(undefined **)(param_1 + 0xc) = puStack_4a38;
  local_4a30 = PTR_defaultMetaData_101444168;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  param_1[0x4c] = 0;
  local_4a18 = 0;
  local_4900 = 0;
  local_48e0 = 0;
  local_4918 = 0;
  uStack_4910 = 0;
  local_4928 = 0;
  uStack_4920 = 0;
  local_68 = lVar10;
  _bzero(auStack_198,0x130);
  local_48d8 = *(undefined8 *)(param_1 + 100);
  local_4938 = -1;
  local_4770 = 0;
  local_4a60 = auStack_198;
  uVar7 = FUN_1005d148c(local_48d8,auStack_4a88,1,8,0);
  if ((int)uVar7 != 0) goto LAB_100597774;
  iVar5 = FUN_1005ed0f8(auStack_4a88,"RIFF",4);
  if (iVar5 == 0) {
    uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4a8c,1,4,0);
    if ((int)uVar7 != 0) goto LAB_100597774;
    iVar5 = FUN_1005ed0f8(auStack_4a8c,"WAVE",4);
    if (iVar5 == 0) {
      iVar5 = FUN_1005a8c04(auStack_4a68,local_4a84);
      if (iVar5 == 0) {
        if (local_4728 != (short *)0x0) {
          if (local_4938 == -1) goto LAB_100597590;
          if ((*local_4728 == 0x50) || (*local_4728 == 0x55)) {
            uVar7 = 0;
            param_1[0x4c] = local_4938;
            local_4a7c = *(uint *)(local_4a60 + 0x10c);
            param_1[0x4d] = local_4934;
            param_1[0x4e] = local_4930;
            *(undefined8 *)(param_1 + 0xb4) = local_4770;
            param_1[0xb6] = local_4778;
          }
          else {
            uVar7 = 0x13;
          }
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_4728,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                        ,0x18e);
          local_4728 = (short *)0x0;
          if ((int)uVar7 != 0) goto LAB_100597774;
        }
      }
      else if (local_4728 != (short *)0x0) {
LAB_100597590:
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_4728,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                      ,0x198);
        local_4728 = (short *)0x0;
      }
    }
  }
  if (local_4a7c == 0) {
    uVar7 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),&local_4a7c);
    if ((int)uVar7 != 0) goto LAB_100597774;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar9 = local_4a7c;
  _bzero(auStack_4a68,0x48d0);
  *(undefined1 **)(param_1 + 0x66) = auStack_4a68;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((long)param_1 + 0x355) = 0;
  uStack_1a0 = 0xffffffff;
  uStack_1c4 = 1;
  local_2628 = auStack_3860;
  uVar11 = 0x1000;
  if (uVar9 < 0x1001) {
    uVar11 = uVar9;
  }
  if ((param_2 & 0x8000) != 0) {
    uVar11 = uVar9;
  }
  if (uVar11 != 0) {
    uVar9 = 0;
    iVar5 = param_1[0x4c];
    do {
      uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iVar5,0);
      if ((int)uVar7 == 0) {
        uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4a6c,1,4,0);
        if ((int)uVar7 != 0) goto LAB_100597774;
        *(undefined4 *)(*(long *)(param_1 + 0x66) + 0x48c0) = 0;
        iVar5 = FUN_100598328(param_1,auStack_4a6c,&local_4a78,&local_4a74,&local_4a70);
        if (iVar5 != 0) goto LAB_10059774c;
        uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_4a70,1);
        if ((int)uVar7 != 0) goto LAB_100597774;
        uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4a6c,1,4,0);
        iVar4 = local_4a74;
        iVar5 = local_4a78;
        if ((int)uVar7 != 0) {
          if ((int)uVar7 != 0x10) {
            *(undefined8 *)(param_1 + 0x66) = 0;
            goto LAB_100597774;
          }
LAB_1005977dc:
          lVar8 = *(long *)(param_1 + 0x66);
          *(undefined4 *)(lVar8 + 0x48c8) = 0xffffffff;
          *(undefined4 *)(lVar8 + 0x48a4) = 1;
          *(undefined4 *)(lVar8 + 0x48c0) = 0;
          _bzero(param_1 + 0x68,0x130);
          *(undefined4 **)(param_1 + 2) = param_1 + 0x68;
          param_1[0xaa] = local_4a78;
          param_1[0xab] = local_4a7c;
          param_1[0xa9] = local_4a74;
          local_4a70 = local_4a70 + 4;
          if (DAT_101d91b40 == '\0') {
            DAT_101d91b38 = &DAT_101d91b50;
            FUN_100596d5c(1);
            iVar5 = FUN_1005996ac();
            if (iVar5 == 0) {
              FUN_10059a5f4(0x20);
            }
            DAT_101d91b40 = '\x01';
          }
          uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
          if ((int)uVar7 != 0) {
            *(undefined8 *)(param_1 + 0x66) = 0;
            goto LAB_100597774;
          }
          uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e976c8,1,local_4a70,0);
          if ((int)uVar7 != 0) {
            *(undefined8 *)(param_1 + 0x66) = 0;
            goto LAB_100597774;
          }
          iVar5 = FUN_1005987c0(param_1,&DAT_101e976c8,param_1 + 0xbc,param_1 + 0xb9);
          if (iVar5 == 0) {
            param_1[0x4c] = param_1[0x4c] + local_4a70;
            uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e976c8,1,local_4a70,0);
            if ((int)uVar7 != 0) {
              *(undefined8 *)(param_1 + 0x66) = 0;
              goto LAB_100597774;
            }
          }
          uVar2 = *(undefined4 *)(*(long *)(param_1 + 2) + 0x100);
          *(undefined4 *)(*(long *)(param_1 + 2) + 0x100) = 2;
          piVar1 = param_1 + 0xb7;
          FUN_100598910(param_1,&DAT_101e976c8,&DAT_101e97dc8,piVar1);
          *(undefined4 *)(*(long *)(param_1 + 2) + 0x100) = uVar2;
          uVar7 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
          if ((int)uVar7 != 0) goto LAB_100597774;
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            iVar5 = 0x480;
            *piVar1 = 0x480;
          }
          local_4a70 = local_4a70 + 1 & 0xfffffffe;
          if (((param_2 >> 0xe & 1) == 0) ||
             ((*(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 1) == 0)) {
            lVar8 = *(long *)(param_1 + 2);
            if (*(int *)(lVar8 + 0x10c) == -1) {
              *(undefined4 *)(lVar8 + 0x110) = 0xffffffff;
            }
            else if (*(char *)(param_1 + 0xd5) == '\0') {
              uVar11 = 0;
              if (local_4a70 != 0) {
                uVar11 = ((*(int *)(lVar8 + 0x10c) + local_4a70) - 1) / local_4a70;
              }
              *(uint *)(lVar8 + 0x110) = iVar5 * (uVar11 + 1);
              param_1[0x15] = param_1[0x15] & 0xfffffffe;
            }
            else {
              *(int *)(lVar8 + 0x110) = param_1[0xb9] * 0x480;
            }
          }
          else {
            FUN_1005d1d28(*(long *)(param_1 + 100),param_1[0x4c],0);
            uVar7 = FUN_100597230(param_1);
            if ((int)uVar7 != 0) goto LAB_100597774;
          }
          if (bVar3) {
            iVar5 = *(int *)(*(long *)(param_1 + 2) + 0x10c);
            if (iVar5 != -1) {
              *(int *)(*(long *)(param_1 + 2) + 0x10c) = iVar5 - param_1[0x4c];
            }
          }
          if (((param_2 & 0x4000) == 0) && (*(long *)(param_1 + 0xba) != 0)) {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xba),
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                          ,0x28e);
            *(undefined8 *)(param_1 + 0xba) = 0;
            param_1[0xb9] = 0;
          }
          *(undefined8 *)(param_1 + 0x66) = 0;
          lVar8 = *(long *)(param_1 + 2);
          *(undefined4 *)(lVar8 + 0x100) = 2;
          *(undefined4 *)(lVar8 + 0x114) = 0x480;
          uVar7 = FUN_100598a40(param_1);
          goto LAB_100597774;
        }
        iVar6 = FUN_100598328(param_1,auStack_4a6c,&local_4a78,&local_4a74,0);
        if ((iVar6 == 0 && local_4a78 == iVar5) && (local_4a74 == iVar4)) goto LAB_1005977dc;
        iVar5 = param_1[0x4c] + 1;
        param_1[0x4c] = iVar5;
        uVar11 = 0x1000;
        if (local_4a7c < 0x1001) {
          uVar11 = local_4a7c;
        }
        if ((param_2 & 0x8000) != 0) {
          uVar11 = local_4a7c;
        }
      }
      else {
        if ((int)uVar7 != 0xe) {
          *(undefined8 *)(param_1 + 0x66) = 0;
          goto LAB_100597774;
        }
LAB_10059774c:
        iVar5 = param_1[0x4c] + 1;
        param_1[0x4c] = iVar5;
        uVar9 = uVar9 + 1;
      }
    } while (uVar9 < uVar11);
  }
  *(undefined8 *)(param_1 + 0x66) = 0;
  uVar7 = 0x13;
LAB_100597774:
  if (lVar10 == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100597aac(long param_1)

{
  if (*(long *)(param_1 + 0x2e8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2e8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                  ,0x2ab);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  return 0;
}




undefined8 FUN_100597af8(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float local_784;
  uint local_780;
  uint local_77c;
  undefined4 local_778;
  undefined4 local_774;
  int local_770;
  int local_76c;
  undefined1 auStack_768 [4];
  undefined1 auStack_764 [1796];
  
  iVar12 = 0;
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x104);
  lVar11 = *(long *)(param_1 + 0x198);
  *param_4 = 0;
  iVar2 = iVar3 + 2;
  if (-1 < iVar3 + 1) {
    iVar2 = iVar3 + 1;
  }
  do {
    local_770 = 0;
    local_76c = 0;
    local_774 = 0;
    _bzero(auStack_768,0x700);
    if (2 < iVar3) {
      iVar8 = iVar12;
      if (iVar12 < 0) {
        iVar8 = iVar12 + 1;
      }
      *(long *)(param_1 + 0x198) = lVar11 + (long)(iVar8 >> 1) * 0x48d0;
    }
    uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_768,1,4,0);
    if ((int)uVar9 == 0) {
      iVar8 = 0;
      do {
        if (iVar8 != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x48c0) = 0;
        }
        iVar7 = FUN_100598328(param_1,auStack_768,&local_770,&local_76c,&local_774);
        if (iVar7 == 0) {
          if ((iVar8 != 0) || ((*(byte *)(param_1 + 0x54) >> 2 & 1) != 0)) {
            uVar9 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_778);
            if (((int)uVar9 != 0) ||
               ((uVar9 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_774,1), (int)uVar9 != 0
                || (uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_77c,1,4,0),
                   (int)uVar9 != 0)))) break;
            uVar4 = (local_77c & 0xff00ff00) >> 8 | (local_77c & 0xff00ff) << 8;
            uVar5 = uVar4 << 0x10;
            uVar4 = uVar4 >> 0x10 | uVar5;
            if (((local_77c & 0xe0ff) == 0xe0ff) &&
               (4 - (uVar5 >> 0x11 & 3) == *(int *)(*(long *)(param_1 + 0x198) + 0x4868))) {
              iVar7 = 0;
            }
            else {
              iVar7 = 0xd;
            }
            local_77c = uVar4;
            if ((*(uint *)(*(long *)(param_1 + 400) + 0x1a4) & 1) != 0) {
              FUN_1005d1d28(*(long *)(param_1 + 400),local_778,0);
            }
            if (iVar7 != 0) goto LAB_100597cbc;
          }
          uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_764,1,local_774,0);
          if ((int)uVar9 != 0) goto LAB_100597dfc;
          iVar8 = FUN_100598910(param_1,auStack_768,param_2,&local_780);
          if (iVar8 != 0) {
            local_76c = *(int *)(*(long *)(param_1 + 8) + 0x104);
          }
          uVar9 = 0;
          uVar4 = 0;
          if (iVar2 >> 1 != 0) {
            uVar4 = local_780 / (uint)(iVar2 >> 1);
          }
          *param_4 = *param_4 + uVar4;
          break;
        }
LAB_100597cbc:
        iVar7 = FUN_1005ed0f8(auStack_768,"TAG",3);
        if (iVar7 == 0) {
          uVar9 = 0x7c;
        }
        else {
          uVar9 = 0xfffffffd;
        }
        FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar9,1);
        uVar9 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_768,1,4,0);
        iVar8 = iVar8 + -1;
      } while ((int)uVar9 == 0);
    }
    if ((local_770 != 0) && (local_770 != *(int *)(*(long *)(param_1 + 8) + 0x108))) {
      local_784 = (float)local_770;
      FUN_100586684(param_1,9,"Sample Rate Change",&local_784,4,2,1);
      *(int *)(*(long *)(param_1 + 8) + 0x108) = local_770;
    }
    if (local_76c == 0) {
      local_76c = 1;
    }
    iVar12 = local_76c + iVar12;
    lVar1 = param_2 + (long)local_76c * 2;
    bVar6 = param_2 != 0;
    param_2 = 0;
    if (bVar6) {
      param_2 = lVar1;
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x104) <= iVar12) {
LAB_100597dfc:
      *(long *)(param_1 + 0x198) = lVar11;
      if (*(long *)PTR____stack_chk_guard_101444218 != lVar10) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar9;
    }
  } while( true );
}




undefined8 FUN_100597e44(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint local_34;
  
  if (param_4 == 8) {
    uVar5 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x130) + param_3,0);
    return uVar5;
  }
  lVar6 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x2dc);
  uVar7 = 0;
  if (uVar10 != 0) {
    uVar7 = param_3 / uVar10;
  }
  if (param_3 == 0) {
    uVar9 = 0;
    param_3 = 0;
  }
  else {
    uVar9 = 3;
    if ((*(byte *)(param_1 + 0x54) & 2) == 0) {
      uVar9 = 9;
    }
    iVar8 = uVar7 * uVar10;
    uVar2 = uVar7;
    if (uVar9 <= uVar7) {
      uVar2 = uVar9;
    }
    uVar7 = uVar7 - uVar2;
    uVar9 = (param_3 - iVar8) + uVar2 * uVar10;
  }
  if (((*(byte *)(param_1 + 0x181) >> 6 & 1) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
    if (*(char *)(param_1 + 0x355) == '\0') {
      if (uVar9 < param_3) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x110) / uVar10;
        }
        iVar8 = uVar2 - 1;
        if ((*(byte *)(param_1 + 0x54) & 2) != 0) {
          iVar8 = 0;
        }
        uVar10 = 0;
        if (uVar2 != 0) {
          uVar10 = (uint)(iVar8 + *(int *)(lVar6 + 0x10c)) / uVar2;
        }
        iVar8 = uVar10 * uVar7;
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      if (param_3 < uVar9 || param_3 - uVar9 == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x110));
        fVar11 = ((float)(param_3 - uVar9) / fVar11) * 100.0;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar11) {
        fVar12 = fVar11;
      }
      fVar11 = 100.0;
      if (fVar12 <= 100.0) {
        fVar11 = fVar12;
      }
      iVar1 = 99;
      if ((int)fVar11 < 100) {
        iVar1 = (int)fVar11;
      }
      fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + iVar1 + 0x2f0));
      if (iVar1 < 99) {
        fVar13 = (float)NEON_ucvtf((uint)*(byte *)(iVar1 + param_1 + 0x2f1));
      }
      else {
        fVar13 = 256.0;
      }
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x10c));
      iVar8 = (int)(fVar3 * (fVar12 + (fVar11 - (float)iVar1) * (fVar13 - fVar12)) * 0.00390625);
      if (0 < iVar1) {
        iVar8 = *(int *)(lVar6 + 0x104) * 2 * uVar10 + iVar8;
      }
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x2e4) - 1;
    if (uVar7 <= *(uint *)(param_1 + 0x2e4)) {
      uVar10 = uVar7;
    }
    iVar8 = *(int *)(*(long *)(param_1 + 0x2e8) + (ulong)uVar10 * 4);
  }
  uVar10 = *(uint *)(param_1 + 0x130);
  if (uVar10 + iVar8 <= *(int *)(lVar6 + 0x10c) + uVar10) {
    uVar10 = uVar10 + iVar8;
  }
  uVar5 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar10,0);
  if ((int)uVar5 == 0) {
    if ((*(uint *)(param_1 + 0x54) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 4;
    }
    if (uVar9 != 0) {
      do {
        while( true ) {
          local_34 = 0;
          uVar10 = uVar9;
          if (0x47f < uVar9) {
            uVar10 = 0x480;
          }
          uVar5 = FUN_100585ec4(param_1,0,uVar10,&local_34);
          if ((int)uVar5 != 0) goto LAB_1005980d8;
          if (local_34 == 0) {
            local_34 = uVar10;
          }
          bVar4 = local_34 <= uVar9;
          uVar10 = uVar9 - local_34;
          uVar9 = 0;
          if (bVar4) {
            uVar9 = uVar10;
          }
          if (*(long *)(param_1 + 0x160) == 0) break;
          uVar5 = 0;
          if ((uVar9 < local_34 && *(int *)(param_1 + 0x170) == 0) || (uVar9 == 0))
          goto LAB_1005980d8;
        }
      } while (local_34 <= uVar9 && uVar9 != 0);
    }
    uVar5 = 0;
LAB_1005980d8:
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffffb;
  }
  return uVar5;
}




undefined8 FUN_1005980f8(undefined8 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (DAT_101d91b40 == '\0') {
    DAT_101d91b38 = &DAT_101d91b50;
    FUN_100596d5c(1);
    iVar1 = FUN_1005996ac();
    if (iVar1 == 0) {
      FUN_10059a5f4(0x20);
    }
    DAT_101d91b40 = '\x01';
  }
  if (param_3 != (int *)0x0) {
    iVar1 = param_2 + 2;
    if (-1 < param_2 + 1) {
      iVar1 = param_2 + 1;
    }
    *param_3 = (iVar1 >> 1) * 0x48d0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x480;
  }
  return 0;
}




void FUN_1005981a4(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x198) = param_5;
  *(undefined4 *)(param_1 + 0x2dc) = 0x480;
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  FUN_100598a40();
  return;
}




undefined8 FUN_1005981b8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(param_1 + 0x2d8) != 0) && (lVar1 = *(long *)(param_1 + 0x2d0), lVar1 != 0)) {
    if (0 < *(int *)(param_1 + 0x2d8)) {
      lVar2 = 0;
      lVar3 = 0;
      while( true ) {
        (**(code **)(*param_3 + 0x100))
                  (param_3,*(undefined4 *)(lVar1 + lVar2 + 0x2c),2,
                   *(undefined8 *)(lVar1 + lVar2 + 0x1c),0,0,0);
        lVar3 = lVar3 + 1;
        if (*(int *)(param_1 + 0x2d8) <= lVar3) break;
        lVar2 = lVar2 + 0x138;
        lVar1 = *(long *)(param_1 + 0x2d0);
      }
    }
    FUN_1005ec374(param_3);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x2d0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_mpeg.cpp"
                  ,0x48b);
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  return 0;
}




uint FUN_10059827c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined1 *puVar7;
  
  if (param_2 != 0) {
    lVar6 = *(long *)(param_1 + 0x198);
    puVar7 = *(undefined1 **)(lVar6 + 0x48b0);
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar2 = *(uint *)(lVar6 + 0x48a8);
    uVar1 = uVar2 + param_2;
    *(undefined1 **)(lVar6 + 0x48b0) = puVar7 + ((int)uVar1 >> 3);
    *(uint *)(lVar6 + 0x48a8) = uVar1 & 7;
    return ((uint)CONCAT21(CONCAT11(uVar3,uVar4),uVar5) << (ulong)(uVar2 & 0x1f) & 0xffffff) >>
           (ulong)(0x18U - param_2 & 0x1f);
  }
  return 0;
}




uint FUN_1005982dc(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  lVar5 = *(long *)(param_1 + 0x198);
  puVar6 = *(undefined1 **)(lVar5 + 0x48b0);
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  uVar2 = *(uint *)(lVar5 + 0x48a8);
  uVar1 = uVar2 + param_2;
  *(undefined1 **)(lVar5 + 0x48b0) = puVar6 + ((int)uVar1 >> 3);
  *(uint *)(lVar5 + 0x48a8) = uVar1 & 7;
  return ((uint)CONCAT11(uVar3,uVar4) << (ulong)(uVar2 & 0x1f) & 0xffff) >>
         (ulong)(0x10U - param_2 & 0x1f);
}




undefined8
FUN_100598328(long param_1,undefined1 *param_2,undefined4 *param_3,int *param_4,uint *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  ushort uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  uVar8 = CONCAT11(*param_2,bVar2);
  uVar13 = (uint)CONCAT21(uVar8,bVar3) << 8;
  bVar4 = param_2[3];
  lVar10 = *(long *)(param_1 + 0x198);
  *(uint *)(lVar10 + 0x4898) = CONCAT31(CONCAT21(CONCAT11(*param_2,bVar2),bVar3),bVar4);
  if (uVar13 < 0xffe00000) {
    return 0x13;
  }
  if ((uVar13 >> 0x14 & 1) == 0) {
    if ((bVar2 & 8) != 0) {
      return 0x13;
    }
    *(undefined8 *)(lVar10 + 0x485c) = 0x100000001;
    bVar6 = true;
    uVar13 = 3;
  }
  else {
    bVar6 = false;
    uVar13 = ((uVar8 & 8) << 0x10) >> 0x13 ^ 1;
    *(uint *)(lVar10 + 0x485c) = uVar13;
    *(undefined4 *)(lVar10 + 0x4860) = 0;
    uVar13 = -uVar13 & 3;
  }
  uVar5 = 4 - (bVar2 >> 1 & 3);
  *(uint *)(lVar10 + 0x4868) = uVar5;
  if ((uVar5 & 6) != 2) {
    return 0x13;
  }
  uVar14 = *(uint *)(lVar10 + 0x48c0);
  if (uVar14 == 0) {
    *(uint *)(lVar10 + 0x48c0) = uVar5;
    uVar14 = uVar5;
  }
  if (uVar5 != uVar14) {
    return 0x13;
  }
  uVar5 = bVar3 >> 2 & 3;
  if (uVar5 == 3) {
    return 0x13;
  }
  if (bVar6) {
    uVar13 = 6;
  }
  *(uint *)(lVar10 + 0x4874) = uVar5 + uVar13;
  lVar10 = *(long *)(param_1 + 0x198);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_10186913c + (long)*(int *)(lVar10 + 0x4874) * 4);
  }
  bVar7 = bVar3 >> 4;
  *(uint *)(lVar10 + 0x486c) = ~(uint)bVar2 & 1;
  *(uint *)(lVar10 + 0x4870) = (uint)bVar7;
  *(uint *)(lVar10 + 0x4878) = bVar3 >> 1 & 1;
  *(uint *)(lVar10 + 0x487c) = bVar3 & 1;
  uVar13 = (uint)(bVar4 >> 6);
  *(uint *)(lVar10 + 0x4880) = uVar13;
  bVar2 = bVar4 >> 4;
  *(uint *)(lVar10 + 0x4884) = bVar2 & 3;
  *(uint *)(lVar10 + 0x4888) = bVar4 >> 3 & 1;
  *(uint *)(lVar10 + 0x488c) = bVar4 >> 2 & 1;
  *(uint *)(lVar10 + 0x4890) = bVar4 & 3;
  iVar11 = 1;
  if (uVar13 != 3) {
    iVar11 = 2;
  }
  *(int *)(lVar10 + 0x4850) = iVar11;
  if (bVar7 == 0) {
    return 0x13;
  }
  if (bVar7 == 0xf) {
    return 0x13;
  }
  iVar12 = *(int *)(lVar10 + 0x4868);
  if (iVar12 == 2) {
    if ((*(byte *)(param_1 + 0x54) >> 1 & 1) == 0) {
      iVar1 = *(int *)((long)*(int *)(lVar10 + 0x485c) * 0xc0 + (ulong)(uint)bVar7 * 4 + 0x101868ffc
                      );
      if (uVar13 == 3) {
        if (0xdf < iVar1) {
          return 0x13;
        }
        if ((bVar2 & 3) != 0) {
          return 0x13;
        }
        goto LAB_1005985ac;
      }
      uVar5 = iVar1 - 0x20;
      if ((uVar5 < 0x31) && ((1L << ((ulong)uVar5 & 0x3f) & 0x1000001010001U) != 0)) {
        return 0x13;
      }
    }
    if ((uVar13 != 1) && ((bVar2 & 3) != 0)) {
      return 0x13;
    }
  }
LAB_1005985ac:
  if (param_4 == (int *)0x0) {
    if ((iVar11 != *(int *)(*(long *)(param_1 + 8) + 0x104)) && (*(int *)(param_1 + 0x2e0) == 0)) {
      return 0x13;
    }
  }
  else {
    *param_4 = iVar11;
    iVar12 = *(int *)(lVar10 + 0x4868);
  }
  if (iVar12 == 3) {
    iVar12 = *(int *)((long)(int)*(uint *)(lVar10 + 0x485c) * 0xc0 +
                      (long)(int)*(uint *)(lVar10 + 0x4870) * 4 + 0x10186903c) * 0x23280;
    *(int *)(lVar10 + 0x4894) = iVar12;
    iVar11 = *(int *)(&DAT_10186913c + (long)*(int *)(lVar10 + 0x4874) * 4) <<
             (ulong)(*(uint *)(lVar10 + 0x485c) & 0x1f);
    iVar1 = 0;
    if (iVar11 != 0) {
      iVar1 = iVar12 / iVar11;
    }
    uVar13 = (iVar1 + *(uint *)(lVar10 + 0x4878)) - 4;
    *(uint *)(lVar10 + 0x4894) = uVar13;
  }
  else {
    if (iVar12 != 2) {
      return 0x44;
    }
    FUN_10059a380(param_1);
    lVar10 = *(long *)(param_1 + 0x198);
    if (*(int *)(lVar10 + 0x4880) == 1) {
      iVar11 = *(int *)(lVar10 + 0x4884) * 4 + 4;
    }
    else {
      iVar11 = *(int *)(lVar10 + 0x4858);
    }
    *(int *)(lVar10 + 0x4854) = iVar11;
    iVar11 = *(int *)((long)*(int *)(lVar10 + 0x485c) * 0xc0 + (long)*(int *)(lVar10 + 0x4870) * 4 +
                     0x101868ffc) * 0x23280;
    *(int *)(lVar10 + 0x4894) = iVar11;
    iVar12 = 0;
    if (*(int *)(&DAT_10186913c + (long)*(int *)(lVar10 + 0x4874) * 4) != 0) {
      iVar12 = iVar11 / *(int *)(&DAT_10186913c + (long)*(int *)(lVar10 + 0x4874) * 4);
    }
    uVar13 = (*(int *)(lVar10 + 0x4878) + iVar12) - 4;
    *(uint *)(lVar10 + 0x4894) = uVar13;
  }
  if (uVar13 - 0x10 < 0x6f1) {
    *(uint *)(lVar10 + 0x48c4) = uVar13;
    if (param_5 == (uint *)0x0) {
      uVar9 = 0;
    }
    else {
      *param_5 = uVar13;
      if ((*(byte *)(param_1 + 0x54) >> 1 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        if ((*(long *)(param_1 + 8) == 0) || (*(int *)(*(long *)(param_1 + 8) + 0x104) < 3)) {
          if (*(int *)(lVar10 + 0x4868) != 3) {
            return 0;
          }
          uVar13 = uVar13 + 3 & 0xfffffffc;
        }
        else {
          uVar5 = *(uint *)(lVar10 + 0x48c8);
          if (*(int *)(lVar10 + 0x4894) < (int)uVar5) {
            *param_5 = uVar5;
            uVar13 = uVar5;
          }
          uVar13 = (uVar13 + 0x13 & 0xfffffff0) - 4;
        }
        uVar9 = 0;
        *param_5 = uVar13;
      }
    }
  }
  else {
    uVar9 = 0x13;
  }
  return uVar9;
}




undefined8 FUN_1005987c0(long param_1,long param_2,undefined8 *param_3,int *param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint3 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar10 = param_2 + 0x15;
  lVar1 = param_2 + 0xd;
  if (*(byte *)(param_2 + 3) < 0xc0) {
    lVar10 = param_2 + 0x24;
    lVar1 = param_2 + 0x15;
  }
  if ((*(byte *)(param_2 + 1) & 8) != 0) {
    lVar1 = lVar10;
  }
  iVar6 = FUN_1005ed0f8(lVar1,"Xing",4);
  if (iVar6 == 0) {
    puVar8 = (undefined8 *)(lVar1 + 8);
    bVar2 = *(byte *)(lVar1 + 7);
    if ((bVar2 & 1) != 0) {
      if (param_4 != (int *)0x0) {
        bVar3 = *(byte *)(lVar1 + 8);
        *param_4 = (uint)bVar3 << 8;
        uVar4 = CONCAT11(bVar3,*(undefined1 *)(lVar1 + 9));
        *param_4 = (uint)uVar4 << 8;
        uVar5 = CONCAT21(uVar4,*(undefined1 *)(lVar1 + 10));
        *param_4 = (uint)uVar5 << 8;
        puVar8 = (undefined8 *)(lVar1 + 0xc);
        *param_4 = CONCAT31(uVar5,*(undefined1 *)(lVar1 + 0xb));
      }
      *(undefined1 *)(param_1 + 0x354) = 1;
    }
    if ((bVar2 >> 2 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      if (param_3 != (undefined8 *)0x0) {
        if (((undefined8 *)((long)puVar8 + 99U) < param_3) ||
           ((undefined8 *)((long)param_3 + 99U) < puVar8)) {
          uVar7 = *puVar8;
          param_3[1] = puVar8[1];
          *param_3 = uVar7;
          uVar7 = puVar8[2];
          param_3[3] = puVar8[3];
          param_3[2] = uVar7;
          uVar7 = puVar8[4];
          param_3[5] = puVar8[5];
          param_3[4] = uVar7;
          uVar7 = puVar8[6];
          param_3[7] = puVar8[7];
          param_3[6] = uVar7;
          uVar7 = puVar8[8];
          param_3[9] = puVar8[9];
          param_3[8] = uVar7;
          uVar7 = puVar8[10];
          puVar9 = puVar8 + 0xc;
          param_3[0xb] = puVar8[0xb];
          param_3[10] = uVar7;
          lVar10 = 0x60;
        }
        else {
          lVar10 = 0;
          puVar9 = puVar8;
        }
        do {
          *(undefined1 *)((long)param_3 + lVar10) = *(undefined1 *)puVar9;
          lVar10 = lVar10 + 1;
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (lVar10 != 100);
      }
      uVar7 = 0;
      *(undefined1 *)(param_1 + 0x355) = 1;
    }
  }
  else {
    uVar7 = 0x13;
  }
  return uVar7;
}




undefined8 FUN_100598910(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(param_1 + 0x198);
  iVar5 = *(int *)(lVar4 + 0x48c4);
  if (iVar5 == 0) {
    uVar3 = FUN_100598328(param_1,param_2,0,0,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar4 = *(long *)(param_1 + 0x198);
    iVar5 = *(int *)(lVar4 + 0x48c4);
  }
  pvVar2 = (void *)(lVar4 + (long)(int)*(uint *)(lVar4 + 0x48a0) * 0x900 + 0x200);
  *(void **)(lVar4 + 0x48b0) = pvVar2;
  *(uint *)(lVar4 + 0x48a0) = ~*(uint *)(lVar4 + 0x48a0) & 1;
  *(undefined4 *)(lVar4 + 0x48a8) = 0;
  _memcpy(pvVar2,(void *)(param_2 + 4),(long)iVar5);
  lVar4 = *(long *)(param_1 + 0x198);
  if (*(int *)(lVar4 + 0x486c) != 0) {
    uVar1 = *(int *)(lVar4 + 0x48a8) + 0x10;
    *(long *)(lVar4 + 0x48b0) = *(long *)(lVar4 + 0x48b0) + (long)((int)uVar1 >> 3);
    *(uint *)(lVar4 + 0x48a8) = uVar1 & 7;
  }
  if (*(int *)(lVar4 + 0x4868) == 3) {
    uVar3 = FUN_10059ff90(param_1,param_3,param_4);
  }
  else if (*(int *)(lVar4 + 0x4868) == 2) {
    uVar3 = FUN_10059a468(param_1,param_3,param_4);
  }
  else {
    uVar3 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x198);
  *(undefined4 *)(lVar4 + 0x48c8) = *(undefined4 *)(lVar4 + 0x48c4);
  *(undefined4 *)(lVar4 + 0x48c4) = 0;
  return uVar3;
}




undefined8 FUN_100598a40(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x198);
  if ((lVar4 != 0) && (iVar3 = *(int *)(param_1 + 0x2e0), 0 < iVar3)) {
    lVar5 = 0;
    lVar6 = 0;
    iVar1 = iVar3 + 2;
    if (-1 < iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
    do {
      _bzero((void *)(lVar4 + lVar5),0x48d0);
      lVar4 = *(long *)(param_1 + 0x198);
      lVar2 = lVar4 + lVar5;
      *(undefined4 *)(lVar2 + 0x48c8) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x48a4) = 1;
      *(ulong *)(lVar2 + 0x2440) = lVar2 + 0x120fU & 0xfffffffffffffff0;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48d0;
    } while (lVar6 < iVar1 >> 1);
  }
  return 0;
}




void FUN_100598b04(float *param_1,float *param_2,float *param_3)

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
  
  fVar37 = *param_3 + param_3[0x1f];
  fVar1 = (*param_3 - param_3[0x1f]) * *(float *)PTR_DAT_101868b90;
  fVar39 = param_3[1] + param_3[0x1e];
  fVar2 = (param_3[1] - param_3[0x1e]) * *(float *)(PTR_DAT_101868b90 + 4);
  fVar3 = param_3[2] + param_3[0x1d];
  fVar4 = (param_3[2] - param_3[0x1d]) * *(float *)(PTR_DAT_101868b90 + 8);
  fVar40 = param_3[3] + param_3[0x1c];
  fVar5 = (param_3[3] - param_3[0x1c]) * *(float *)(PTR_DAT_101868b90 + 0xc);
  fVar19 = param_3[4] + param_3[0x1b];
  fVar6 = (param_3[4] - param_3[0x1b]) * *(float *)(PTR_DAT_101868b90 + 0x10);
  fVar35 = param_3[5] + param_3[0x1a];
  fVar7 = (param_3[5] - param_3[0x1a]) * *(float *)(PTR_DAT_101868b90 + 0x14);
  fVar38 = param_3[6] + param_3[0x19];
  fVar18 = param_3[7] + param_3[0x18];
  fVar30 = param_3[0xe] + param_3[0x11];
  fVar33 = param_3[0xc] + param_3[0x13];
  fVar27 = param_3[0xf] + param_3[0x10];
  fVar25 = fVar37 + fVar27;
  fVar28 = fVar39 + fVar30;
  fVar31 = fVar40 + fVar33;
  fVar50 = (param_3[7] - param_3[0x18]) * *(float *)(PTR_DAT_101868b90 + 0x1c);
  fVar53 = (param_3[8] - param_3[0x17]) * *(float *)(PTR_DAT_101868b90 + 0x20);
  fVar51 = (param_3[9] - param_3[0x16]) * *(float *)(PTR_DAT_101868b90 + 0x24);
  fVar17 = (param_3[10] - param_3[0x15]) * *(float *)(PTR_DAT_101868b90 + 0x28);
  fVar16 = (param_3[0xb] - param_3[0x14]) * *(float *)(PTR_DAT_101868b90 + 0x2c);
  fVar15 = (param_3[0xc] - param_3[0x13]) * *(float *)(PTR_DAT_101868b90 + 0x30);
  fVar14 = (param_3[0xd] - param_3[0x12]) * *(float *)(PTR_DAT_101868b90 + 0x34);
  fVar41 = (param_3[0xe] - param_3[0x11]) * *(float *)(PTR_DAT_101868b90 + 0x38);
  fVar8 = (param_3[0xf] - param_3[0x10]) * *(float *)(PTR_DAT_101868b90 + 0x3c);
  fVar49 = (param_3[6] - param_3[0x19]) * *(float *)(PTR_DAT_101868b90 + 0x18);
  fVar44 = param_3[8] + param_3[0x17];
  fVar42 = param_3[9] + param_3[0x16];
  fVar45 = param_3[10] + param_3[0x15];
  fVar9 = param_3[0xb] + param_3[0x14];
  fVar47 = param_3[0xd] + param_3[0x12];
  fVar48 = fVar3 + fVar47;
  fVar21 = fVar19 + fVar9;
  fVar22 = fVar35 + fVar45;
  fVar46 = fVar38 + fVar42;
  fVar20 = fVar18 + fVar44;
  fVar10 = fVar20 + fVar25;
  fVar11 = fVar46 + fVar28;
  fVar12 = fVar22 + fVar48;
  fVar13 = fVar21 + fVar31;
  fVar23 = fVar1 + fVar8;
  fVar24 = fVar2 + fVar41;
  fVar26 = fVar4 + fVar14;
  fVar29 = fVar5 + fVar15;
  fVar32 = fVar6 + fVar16;
  fVar34 = fVar7 + fVar17;
  fVar36 = fVar49 + fVar51;
  fVar52 = fVar50 + fVar53;
  fVar27 = (fVar37 - fVar27) * *(float *)PTR_DAT_101868b98;
  fVar44 = (fVar18 - fVar44) * *(float *)(PTR_DAT_101868b98 + 0x1c);
  fVar18 = fVar27 + fVar44;
  fVar43 = (fVar39 - fVar30) * *(float *)(PTR_DAT_101868b98 + 4);
  fVar42 = (fVar38 - fVar42) * *(float *)(PTR_DAT_101868b98 + 0x18);
  fVar37 = fVar43 + fVar42;
  fVar30 = (fVar3 - fVar47) * *(float *)(PTR_DAT_101868b98 + 8);
  fVar3 = (fVar35 - fVar45) * *(float *)(PTR_DAT_101868b98 + 0x14);
  fVar47 = fVar30 + fVar3;
  fVar33 = (fVar40 - fVar33) * *(float *)(PTR_DAT_101868b98 + 0xc);
  fVar9 = (fVar19 - fVar9) * *(float *)(PTR_DAT_101868b98 + 0x10);
  fVar35 = fVar33 + fVar9;
  fVar1 = (fVar1 - fVar8) * *(float *)PTR_DAT_101868b98;
  fVar8 = (fVar2 - fVar41) * *(float *)(PTR_DAT_101868b98 + 4);
  fVar19 = (fVar4 - fVar14) * *(float *)(PTR_DAT_101868b98 + 8);
  fVar5 = (fVar5 - fVar15) * *(float *)(PTR_DAT_101868b98 + 0xc);
  fVar2 = (fVar6 - fVar16) * *(float *)(PTR_DAT_101868b98 + 0x10);
  fVar6 = (fVar7 - fVar17) * *(float *)(PTR_DAT_101868b98 + 0x14);
  fVar7 = (fVar49 - fVar51) * *(float *)(PTR_DAT_101868b98 + 0x18);
  fVar14 = (fVar50 - fVar53) * *(float *)(PTR_DAT_101868b98 + 0x1c);
  fVar38 = fVar52 + fVar23;
  fVar40 = fVar36 + fVar24;
  fVar41 = fVar34 + fVar26;
  fVar45 = fVar32 + fVar29;
  fVar50 = fVar1 + fVar14;
  fVar4 = *(float *)PTR_DAT_101868ba0;
  fVar49 = *(float *)(PTR_DAT_101868ba0 + 4);
  fVar51 = (fVar25 - fVar20) * fVar4;
  fVar15 = (fVar27 - fVar44) * fVar4;
  fVar39 = (fVar23 - fVar52) * fVar4;
  fVar4 = (fVar1 - fVar14) * fVar4;
  fVar14 = fVar8 + fVar7;
  fVar27 = (fVar28 - fVar46) * fVar49;
  fVar17 = (fVar43 - fVar42) * fVar49;
  fVar25 = (fVar24 - fVar36) * fVar49;
  fVar49 = (fVar8 - fVar7) * fVar49;
  fVar46 = fVar19 + fVar6;
  fVar7 = *(float *)(PTR_DAT_101868ba0 + 8);
  fVar20 = *(float *)(PTR_DAT_101868ba0 + 0xc);
  fVar22 = (fVar48 - fVar22) * fVar7;
  fVar30 = (fVar30 - fVar3) * fVar7;
  fVar36 = (fVar26 - fVar34) * fVar7;
  fVar7 = (fVar19 - fVar6) * fVar7;
  fVar34 = fVar5 + fVar2;
  fVar6 = (fVar31 - fVar21) * fVar20;
  fVar1 = (fVar33 - fVar9) * fVar20;
  fVar28 = (fVar29 - fVar32) * fVar20;
  fVar20 = (fVar5 - fVar2) * fVar20;
  fVar23 = fVar13 + fVar10;
  fVar24 = fVar12 + fVar11;
  fVar29 = fVar51 + fVar6;
  fVar8 = fVar27 + fVar22;
  fVar48 = fVar35 + fVar18;
  fVar9 = fVar47 + fVar37;
  fVar33 = fVar15 + fVar1;
  fVar16 = fVar17 + fVar30;
  fVar19 = fVar45 + fVar38;
  fVar42 = fVar41 + fVar40;
  fVar32 = fVar39 + fVar28;
  fVar44 = fVar25 + fVar36;
  fVar26 = fVar34 + fVar50;
  fVar43 = fVar46 + fVar14;
  fVar2 = fVar4 + fVar20;
  fVar21 = *(float *)PTR_DAT_101868ba8;
  fVar3 = *(float *)(PTR_DAT_101868ba8 + 4);
  fVar5 = (fVar10 - fVar13) * fVar21;
  fVar6 = (fVar51 - fVar6) * fVar21;
  fVar13 = (fVar18 - fVar35) * fVar21;
  fVar18 = (fVar15 - fVar1) * fVar21;
  fVar15 = (fVar38 - fVar45) * fVar21;
  fVar28 = (fVar39 - fVar28) * fVar21;
  fVar31 = (fVar50 - fVar34) * fVar21;
  fVar21 = (fVar4 - fVar20) * fVar21;
  fVar10 = fVar49 + fVar7;
  fVar34 = (fVar11 - fVar12) * fVar3;
  fVar1 = (fVar27 - fVar22) * fVar3;
  fVar20 = (fVar37 - fVar47) * fVar3;
  fVar11 = (fVar17 - fVar30) * fVar3;
  fVar12 = (fVar40 - fVar41) * fVar3;
  fVar30 = (fVar25 - fVar36) * fVar3;
  fVar14 = (fVar14 - fVar46) * fVar3;
  fVar3 = (fVar49 - fVar7) * fVar3;
  fVar27 = *(float *)PTR_DAT_101868bb0;
  param_1[0x100] = fVar24 + fVar23;
  fVar4 = (fVar6 - fVar1) * fVar27;
  fVar6 = fVar6 + fVar1 + fVar4;
  param_1[0xc0] = fVar8 + fVar29 + fVar6;
  fVar1 = (fVar5 - fVar34) * fVar27;
  param_1[0x80] = fVar5 + fVar34 + fVar1;
  fVar5 = (fVar29 - fVar8) * fVar27;
  param_1[0x40] = fVar5 + fVar6;
  fVar6 = (fVar23 - fVar24) * fVar27;
  *param_1 = fVar6;
  *param_2 = fVar6;
  param_2[0x40] = fVar5 + fVar4;
  param_2[0x80] = fVar1;
  param_2[0xc0] = fVar4;
  fVar1 = (fVar18 - fVar11) * fVar27;
  fVar5 = fVar18 + fVar11 + fVar1;
  fVar6 = fVar16 + fVar33 + fVar5;
  param_1[0xe0] = fVar9 + fVar48 + fVar6;
  fVar4 = (fVar13 - fVar20) * fVar27;
  fVar7 = fVar13 + fVar20 + fVar4;
  param_1[0xa0] = fVar7 + fVar6;
  fVar6 = (fVar33 - fVar16) * fVar27;
  fVar5 = fVar6 + fVar5;
  param_1[0x60] = fVar7 + fVar5;
  fVar7 = (fVar48 - fVar9) * fVar27;
  param_1[0x20] = fVar7 + fVar5;
  fVar6 = fVar6 + fVar1;
  param_2[0x20] = fVar7 + fVar6;
  param_2[0x60] = fVar4 + fVar6;
  param_2[0xa0] = fVar4 + fVar1;
  param_2[0xe0] = fVar1;
  fVar1 = (fVar21 - fVar3) * fVar27;
  fVar3 = fVar21 + fVar3 + fVar1;
  fVar4 = fVar10 + fVar2 + fVar3;
  fVar5 = fVar43 + fVar26 + fVar4;
  param_1[0xf0] = fVar42 + fVar19 + fVar5;
  fVar6 = (fVar28 - fVar30) * fVar27;
  fVar7 = fVar28 + fVar30 + fVar6;
  fVar8 = fVar44 + fVar32 + fVar7;
  param_1[0xd0] = fVar8 + fVar5;
  fVar5 = (fVar31 - fVar14) * fVar27;
  fVar11 = fVar31 + fVar14 + fVar5;
  fVar4 = fVar11 + fVar4;
  param_1[0xb0] = fVar8 + fVar4;
  fVar9 = (fVar15 - fVar12) * fVar27;
  fVar8 = fVar15 + fVar12 + fVar9;
  param_1[0x90] = fVar8 + fVar4;
  fVar2 = (fVar2 - fVar10) * fVar27;
  fVar3 = fVar2 + fVar3;
  fVar11 = fVar11 + fVar3;
  param_1[0x70] = fVar8 + fVar11;
  fVar8 = (fVar32 - fVar44) * fVar27;
  fVar7 = fVar8 + fVar7;
  param_1[0x50] = fVar7 + fVar11;
  fVar4 = (fVar26 - fVar43) * fVar27;
  fVar3 = fVar4 + fVar3;
  param_1[0x30] = fVar7 + fVar3;
  fVar27 = (fVar19 - fVar42) * fVar27;
  param_1[0x10] = fVar27 + fVar3;
  fVar2 = fVar2 + fVar1;
  fVar4 = fVar4 + fVar2;
  param_2[0x10] = fVar27 + fVar4;
  fVar8 = fVar8 + fVar6;
  param_2[0x30] = fVar8 + fVar4;
  fVar2 = fVar5 + fVar2;
  param_2[0x50] = fVar8 + fVar2;
  param_2[0x70] = fVar9 + fVar2;
  param_2[0x90] = fVar9 + fVar5 + fVar1;
  param_2[0xb0] = fVar6 + fVar5 + fVar1;
  param_2[0xd0] = fVar6 + fVar1;
  param_2[0xf0] = fVar1;
  return;
}




undefined8
FUN_1005991ac(undefined8 param_1,float *param_2,int param_3,uint param_4,undefined2 *param_5)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  float fVar9;
  
  lVar3 = DAT_101d91b38;
  lVar6 = 0;
  lVar7 = (long)param_3;
  pfVar4 = param_2 + 8;
  fVar9 = *(float *)(DAT_101d91b38 + (0x10 - lVar7) * 4) * *param_2;
  lVar1 = DAT_101d91b38 + (0x18 - lVar7) * 4;
  puVar8 = param_5;
  do {
    pfVar2 = (float *)(lVar1 + lVar6);
    fVar9 = (((((((((((((((fVar9 - pfVar2[-7] * pfVar4[-7]) + pfVar2[-6] * pfVar4[-6]) -
                        pfVar2[-5] * pfVar4[-5]) + pfVar2[-4] * pfVar4[-4]) -
                      pfVar2[-3] * pfVar4[-3]) + pfVar2[-2] * pfVar4[-2]) - pfVar2[-1] * pfVar4[-1])
                   + *pfVar2 * *pfVar4) - pfVar2[1] * pfVar4[1]) + pfVar2[2] * pfVar4[2]) -
                pfVar2[3] * pfVar4[3]) + pfVar2[4] * pfVar4[4]) - pfVar2[5] * pfVar4[5]) +
             pfVar2[6] * pfVar4[6]) - pfVar2[7] * pfVar4[7]) * 32767.0;
    if (fVar9 <= 32767.0) {
      if (-32768.0 <= fVar9) {
        *puVar8 = (short)(int)fVar9;
      }
      else {
        *puVar8 = 0x8000;
      }
    }
    else {
      *puVar8 = 0x7fff;
    }
    fVar9 = *(float *)(lVar1 + lVar6 + 0x60) * pfVar4[8];
    lVar6 = lVar6 + 0x80;
    puVar8 = (undefined2 *)
             ((long)puVar8 + (-(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_4 << 1))
    ;
    pfVar4 = pfVar4 + 0x10;
  } while ((int)lVar6 != 0x800);
  lVar6 = lVar3 + (0x1f0 - lVar7) * 4;
  fVar9 = (fVar9 + *(float *)(lVar6 + 0x88) * param_2[0x102] +
           *(float *)(lVar6 + 0x90) * param_2[0x104] + *(float *)(lVar6 + 0x98) * param_2[0x106] +
           *(float *)(lVar6 + 0xa0) * param_2[0x108] + *(float *)(lVar6 + 0xa8) * param_2[0x10a] +
           *(float *)(lVar6 + 0xb0) * param_2[0x10c] + *(float *)(lVar6 + 0xb8) * param_2[0x10e]) *
          32767.0;
  if (fVar9 <= 32767.0) {
    if (-32768.0 <= fVar9) {
      uVar5 = (undefined2)(int)fVar9;
    }
    else {
      uVar5 = 0x8000;
    }
  }
  else {
    uVar5 = 0x7fff;
  }
  param_5[-(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4] = uVar5;
  param_5 = param_5 + (long)(int)param_4 + (long)(int)param_4 * 0x10;
  pfVar4 = (float *)(lVar3 + (((long)(param_3 << 1) + 0x1ef) - (long)param_3) * 4);
  lVar6 = 0x3c0;
  do {
    pfVar2 = (float *)((long)param_2 + lVar6);
    fVar9 = (((((((((((((((-(*pfVar4 * *pfVar2) - pfVar4[-1] * pfVar2[1]) - pfVar4[-2] * pfVar2[2])
                        - pfVar4[-3] * pfVar2[3]) - pfVar4[-4] * pfVar2[4]) - pfVar4[-5] * pfVar2[5]
                      ) - pfVar4[-6] * pfVar2[6]) - pfVar4[-7] * pfVar2[7]) - pfVar4[-8] * pfVar2[8]
                   ) - pfVar4[-9] * pfVar2[9]) - pfVar4[-10] * pfVar2[10]) -
                pfVar4[-0xb] * pfVar2[0xb]) - pfVar4[-0xc] * pfVar2[0xc]) -
              pfVar4[-0xd] * pfVar2[0xd]) - pfVar4[-0xe] * pfVar2[0xe]) - pfVar4[-0xf] * pfVar2[0xf]
            ) * 32767.0;
    if (fVar9 <= 32767.0) {
      if (-32768.0 <= fVar9) {
        *param_5 = (short)(int)fVar9;
      }
      else {
        *param_5 = 0x8000;
      }
    }
    else {
      *param_5 = 0x7fff;
    }
    lVar6 = lVar6 + -0x40;
    param_5 = (undefined2 *)
              ((long)param_5 +
              (-(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_4 << 1));
    pfVar4 = pfVar4 + -0x20;
  } while ((int)lVar6 != 0);
  return 0;
}




undefined8 FUN_100599528(long param_1,long param_2,long param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  lVar4 = *(long *)(param_1 + 0x198);
  uVar2 = *(int *)(lVar4 + 0x48a4) - 1;
  uVar1 = uVar2 & 0xf;
  *(uint *)(lVar4 + 0x48a4) = uVar1;
  if (0 < param_4) {
    iVar11 = 0;
    lVar12 = 0;
    uVar2 = uVar2 & 1;
    uVar9 = (ulong)((uVar2 ^ 1) + uVar1);
    uVar6 = (ulong)(-(uVar2 ^ 1) & 0x120);
    uVar7 = (ulong)(-uVar2 & 0x120);
    lVar8 = uVar6 << 2;
    lVar3 = param_1;
    lVar10 = param_2;
    while( true ) {
      lVar13 = *(long *)(lVar4 + 0x2440);
      iVar5 = *(int *)(lVar4 + 0x4868);
      if (iVar5 == 2) {
        lVar3 = FUN_100598b04(lVar13 + (*(int *)(lVar4 + 0x48a4) + uVar2 & 0xf | uVar7) * 4,
                              lVar13 + (uVar6 | uVar9) * 4,param_3 + (long)iVar11 * 4);
        lVar4 = *(long *)(param_1 + 0x198);
        iVar5 = *(int *)(lVar4 + 0x4868);
      }
      if (iVar5 == 3) {
        lVar3 = FUN_100598b04(lVar13 + (*(int *)(lVar4 + 0x48a4) + uVar2 & 0xf | uVar7) * 4,
                              lVar13 + (uVar6 | uVar9) * 4,param_3 + (lVar12 >> 0x20) * 4);
      }
      if (param_2 != 0) {
        lVar3 = FUN_1005991ac(lVar3,lVar13 + lVar8,uVar9,param_5,lVar10);
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) break;
      lVar10 = lVar10 + 2;
      lVar12 = lVar12 + 0x24000000000;
      iVar11 = iVar11 + 0x80;
      uVar7 = uVar7 + 0x240;
      uVar6 = uVar6 + 0x240;
      lVar4 = *(long *)(param_1 + 0x198);
      lVar8 = lVar8 + 0x900;
    }
  }
  return 0;
}




undefined8 FUN_1005996ac(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  
  lVar5 = 0;
  DAT_101d92480 = 0x102010100010101;
  DAT_101d92488 = 0x201000001000101;
  DAT_101d92490 = 0x102000102010100;
  DAT_101d92498 = 0x100000101010202;
  DAT_101d924a0 = FUN_100010200;
  DAT_101d924a8 = 0x2010000020000;
  DAT_101d924b0 = 0x101000202000200;
  DAT_101d924b8 = 0x102010202010002;
  puVar6 = &DAT_101d924e0;
  DAT_101d924c0 = 0x200020200000200;
  DAT_101d924c8 = 0x202020200020201;
  DAT_101d924d0 = 2;
  puVar4 = &DAT_101d92660;
  do {
    *puVar6 = 0x11;
    puVar6[1] = 0x11;
    puVar6[3] = 0x12;
    puVar6[4] = 0x11;
    puVar6[6] = 0;
    puVar6[7] = 0x11;
    puVar6[9] = 0x13;
    puVar6[10] = 0x11;
    uVar1 = (&DAT_10115e969)[lVar5];
    puVar6[2] = uVar1;
    puVar6[5] = uVar1;
    puVar6[8] = uVar1;
    puVar6[0xb] = uVar1;
    puVar6[0xc] = 0x14;
    puVar6[0xd] = 0x11;
    puVar6[0xe] = uVar1;
    puVar6[0xf] = 0x11;
    puVar6[0x10] = 0x12;
    puVar6[0x11] = uVar1;
    puVar6[0x12] = 0x12;
    puVar6[0x13] = 0x12;
    puVar6[0x14] = uVar1;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0x12;
    puVar6[0x17] = uVar1;
    puVar6[0x18] = 0x13;
    puVar6[0x19] = 0x12;
    puVar6[0x1a] = uVar1;
    puVar6[0x1b] = 0x14;
    puVar6[0x1c] = 0x12;
    puVar6[0x1d] = uVar1;
    puVar6[0x1e] = 0x11;
    puVar6[0x1f] = 0;
    puVar6[0x20] = uVar1;
    puVar6[0x21] = 0x12;
    puVar6[0x22] = 0;
    puVar6[0x23] = uVar1;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = uVar1;
    puVar6[0x27] = 0x13;
    puVar6[0x28] = 0;
    puVar6[0x29] = uVar1;
    puVar6[0x2a] = 0x14;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = uVar1;
    puVar6[0x2d] = 0x11;
    puVar6[0x2e] = 0x13;
    puVar6[0x2f] = uVar1;
    puVar6[0x30] = 0x12;
    puVar6[0x31] = 0x13;
    puVar6[0x32] = uVar1;
    puVar6[0x33] = 0;
    puVar6[0x34] = 0x13;
    puVar6[0x35] = uVar1;
    puVar6[0x36] = 0x13;
    puVar6[0x37] = 0x13;
    puVar6[0x38] = uVar1;
    puVar6[0x39] = 0x14;
    puVar6[0x3a] = 0x13;
    puVar6[0x3b] = uVar1;
    puVar6[0x3c] = 0x11;
    puVar6[0x3d] = 0x14;
    puVar6[0x3e] = uVar1;
    puVar6[0x3f] = 0x12;
    puVar6[0x40] = 0x14;
    puVar6[0x41] = uVar1;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0x14;
    puVar6[0x44] = uVar1;
    puVar6[0x45] = 0x13;
    puVar6[0x46] = 0x14;
    puVar6[0x47] = uVar1;
    puVar6[0x48] = 0x14;
    lVar5 = lVar5 + 1;
    puVar6[0x49] = 0x14;
    puVar6[0x4a] = uVar1;
    puVar6 = puVar6 + 0x4b;
  } while (lVar5 < 5);
  lVar5 = 0;
  do {
    lVar3 = 0;
    do {
      uVar1 = (&DAT_10115e972)[lVar5];
      *puVar4 = 0x15;
      puVar4[3] = 1;
      puVar4[6] = 0x16;
      puVar4[9] = 0x17;
      uVar2 = (&DAT_10115e972)[lVar3];
      puVar4[2] = uVar1;
      puVar4[5] = uVar1;
      puVar4[8] = uVar1;
      puVar4[1] = uVar2;
      puVar4[4] = uVar2;
      puVar4[7] = uVar2;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar1;
      puVar4[0xc] = 0;
      puVar4[0xd] = uVar2;
      puVar4[0xe] = uVar1;
      puVar4[0xf] = 0x18;
      puVar4[0x10] = uVar2;
      puVar4[0x11] = uVar1;
      puVar4[0x12] = 0x19;
      puVar4[0x13] = uVar2;
      puVar4[0x14] = uVar1;
      puVar4[0x15] = 2;
      puVar4[0x16] = uVar2;
      puVar4[0x17] = uVar1;
      puVar4[0x18] = 0x1a;
      puVar4[0x19] = uVar2;
      puVar4[0x1a] = uVar1;
      puVar4 = puVar4 + 0x1b;
      lVar3 = lVar3 + 1;
    } while (lVar3 < 9);
    lVar5 = lVar5 + 1;
  } while (lVar5 < 9);
  lVar5 = 0;
  puVar8 = &DAT_101d93260;
  puVar7 = &DAT_101d9335c;
  uVar21 = 0;
  auVar16 = NEON_fmov(0x40400000,4);
  do {
    lVar3 = 0;
    fVar11 = (float)(&DAT_10115e8f4)[lVar5];
    puVar10 = puVar8;
    do {
      iVar9 = (int)lVar3;
      auVar17._0_4_ = 3 - iVar9;
      auVar17._4_4_ = 2 - iVar9;
      auVar17._8_4_ = 1 - iVar9;
      auVar17._12_4_ = -iVar9;
      auVar17 = NEON_scvtf(auVar17,4);
      fVar12 = (float)_exp2f();
      auVar19._4_4_ = auVar17._4_4_ / auVar16._4_4_;
      auVar19._0_4_ = auVar17._0_4_ / auVar16._0_4_;
      auVar19._8_4_ = auVar17._8_4_ / auVar16._8_4_;
      auVar19._12_4_ = auVar17._12_4_ / auVar16._12_4_;
      fVar13 = (float)_exp2f(auVar19);
      fVar14 = (float)_exp2f();
      fVar15 = (float)_exp2f();
      auVar18._0_8_ = CONCAT44(fVar11 * fVar12,fVar11 * fVar13);
      auVar18._8_4_ = fVar11 * fVar14;
      auVar18._12_4_ = fVar11 * fVar15;
      *puVar10 = auVar18._0_8_;
      auVar19 = NEON_ext(auVar18,auVar18,8,1);
      puVar10[1] = auVar19._0_8_;
      lVar3 = lVar3 + 4;
      puVar10 = puVar10 + 2;
    } while (lVar3 != 0x3c);
    auVar20._8_8_ = uVar21;
    auVar20._0_8_ = 0xc1980000;
    fVar12 = (float)_exp2f(auVar20);
    (&DAT_101d93350)[lVar5 * 0x40] = fVar11 * fVar12;
    fVar12 = (float)_exp2f(0xc19aaaab);
    (&DAT_101d93354)[lVar5 * 0x40] = fVar11 * fVar12;
    fVar12 = (float)_exp2f(0xc19d5555);
    (&DAT_101d93358)[lVar5 * 0x40] = fVar11 * fVar12;
    *puVar7 = 0;
    lVar5 = lVar5 + 1;
    puVar7 = puVar7 + 0x40;
    puVar8 = puVar8 + 0x20;
  } while (lVar5 != 0x1b);
  return 0;
}




void FUN_100599b14(long param_1,int *param_2,undefined4 *param_3)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int aiStack_168 [64];
  long local_68;
  
  lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar15;
  lVar6 = *(long *)(param_1 + 0x198);
  uVar2 = *(int *)(lVar6 + 0x4850) - 1;
  iVar11 = *(int *)(lVar6 + 0x4858);
  iVar10 = iVar11 << (ulong)(uVar2 & 0x1f);
  psVar12 = *(short **)(lVar6 + 0x4848);
  if (uVar2 == 0) {
    piVar7 = param_2;
    iVar14 = iVar11;
    if (iVar11 != 0) {
      do {
        sVar1 = *psVar12;
        cVar3 = FUN_10059827c(param_1,(long)sVar1);
        *piVar7 = (int)cVar3;
        iVar14 = iVar14 + -1;
        psVar12 = psVar12 + (long)(1 << (ulong)((int)sVar1 & 0x1f)) * 2;
        piVar7 = piVar7 + 1;
      } while (iVar14 != 0);
      lVar15 = *(long *)PTR____stack_chk_guard_101444218;
      if (iVar11 != 0) {
        piVar7 = param_2;
        piVar8 = aiStack_168;
        do {
          piVar9 = piVar8;
          if (*piVar7 != 0) {
            cVar3 = FUN_1005982dc(param_1,2);
            piVar9 = piVar8 + 1;
            *piVar8 = (int)cVar3;
          }
          iVar11 = iVar11 + -1;
          piVar7 = piVar7 + 1;
          piVar8 = piVar9;
        } while (iVar11 != 0);
      }
    }
  }
  else {
    iVar14 = *(int *)(lVar6 + 0x4854);
    piVar7 = param_2;
    if (iVar14 != 0) {
      iVar13 = iVar14;
      do {
        sVar1 = *psVar12;
        cVar3 = FUN_10059827c(param_1,(long)sVar1);
        *piVar7 = (int)cVar3;
        cVar3 = FUN_10059827c(param_1,(long)sVar1);
        piVar7[1] = (int)cVar3;
        iVar13 = iVar13 + -1;
        psVar12 = psVar12 + (long)(1 << (ulong)((int)sVar1 & 0x1f)) * 2;
        piVar7 = piVar7 + 2;
      } while (iVar13 != 0);
      piVar7 = param_2 + (ulong)(iVar14 - 1) * 2 + 2;
    }
    if (iVar11 != iVar14) {
      iVar14 = iVar14 - iVar11;
      do {
        sVar1 = *psVar12;
        cVar3 = FUN_10059827c(param_1,(long)sVar1);
        *piVar7 = (int)cVar3;
        piVar7[1] = (int)cVar3;
        if (sVar1 < 0) {
          uVar5 = 0xd;
          lVar15 = *(long *)PTR____stack_chk_guard_101444218;
          goto LAB_100599dc8;
        }
        psVar12 = psVar12 + (long)(1 << (ulong)((int)sVar1 & 0x1f)) * 2;
        iVar14 = iVar14 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar14 != 0);
    }
    if (iVar10 == 0) {
      uVar5 = 0;
      lVar15 = *(long *)PTR____stack_chk_guard_101444218;
      goto LAB_100599dc8;
    }
    lVar15 = *(long *)PTR____stack_chk_guard_101444218;
    piVar7 = param_2;
    piVar8 = aiStack_168;
    iVar11 = iVar10;
    do {
      piVar9 = piVar8;
      if (*piVar7 != 0) {
        cVar3 = FUN_1005982dc(param_1,2);
        piVar9 = piVar8 + 1;
        *piVar8 = (int)cVar3;
      }
      iVar11 = iVar11 + -1;
      piVar7 = piVar7 + 1;
      piVar8 = piVar9;
    } while (iVar11 != 0);
  }
  if (iVar10 != 0) {
    piVar7 = aiStack_168;
    do {
      piVar8 = piVar7;
      if (*param_2 != 0) {
        piVar8 = piVar7 + 1;
        iVar11 = *piVar7;
        if (iVar11 == 2) {
          uVar4 = FUN_1005982dc(param_1,6);
          *param_3 = uVar4;
LAB_100599d88:
          param_3[1] = uVar4;
        }
        else {
          if (iVar11 == 1) {
            uVar4 = FUN_1005982dc(param_1,6);
            *param_3 = uVar4;
          }
          else {
            if (iVar11 != 0) {
              uVar4 = FUN_1005982dc(param_1,6);
              *param_3 = uVar4;
              uVar4 = FUN_1005982dc(param_1,6);
              goto LAB_100599d88;
            }
            uVar4 = FUN_1005982dc(param_1,6);
            *param_3 = uVar4;
            uVar4 = FUN_1005982dc(param_1,6);
          }
          param_3[1] = uVar4;
          uVar4 = FUN_1005982dc(param_1,6);
        }
        param_3[2] = uVar4;
        param_3 = param_3 + 3;
      }
      iVar10 = iVar10 + -1;
      piVar7 = piVar8;
      param_2 = param_2 + 1;
    } while (iVar10 != 0);
  }
  uVar5 = 0;
LAB_100599dc8:
  if (lVar15 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar5);
  }
  return;
}




undefined8 FUN_100599df8(long param_1,int *param_2,long param_3,long param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  short *psVar27;
  float fVar28;
  float fVar29;
  long alStack_c8 [3];
  undefined8 *local_b0;
  undefined1 *local_a0;
  undefined1 *local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  lVar13 = *(long *)(param_1 + 0x198);
  iVar2 = *(int *)(lVar13 + 0x4850);
  iVar12 = *(int *)(lVar13 + 0x4858);
  iVar25 = *(int *)(lVar13 + 0x4854);
  psVar27 = *(short **)(lVar13 + 0x4848);
  if (0 < iVar25) {
    iVar23 = 0;
    pfVar21 = (float *)(param_3 + 0x80);
    do {
      sVar5 = *psVar27;
      piVar20 = param_2;
      pfVar24 = pfVar21;
      iVar10 = iVar2;
      if (0 < iVar2) {
        do {
          if (*piVar20 == 0) {
            pfVar24[0x20] = 0.0;
            *pfVar24 = 0.0;
            pfVar24[-0x20] = 0.0;
          }
          else {
            sVar6 = psVar27[(long)*piVar20 * 2];
            lVar13 = (long)sVar6;
            sVar7 = (psVar27 + (long)*piVar20 * 2)[1];
            iVar26 = (int)sVar7;
            if (sVar7 < 0) {
              fVar28 = *(float *)((long)&DAT_101d93260 +
                                 (long)*(int *)(param_4 + (long)param_5 * 4) * 4 +
                                 (long)(int)sVar6 * 0x100);
              iVar9 = FUN_10059827c(param_1,lVar13);
              pfVar24[-0x20] = fVar28 * (float)(iVar9 + sVar7);
              iVar9 = FUN_10059827c(param_1,lVar13);
              *pfVar24 = fVar28 * (float)(iVar9 + iVar26);
              iVar9 = FUN_10059827c(param_1,lVar13);
              pfVar24[0x20] = fVar28 * (float)(iVar9 + iVar26);
              param_4 = param_4 + 0xc;
            }
            else {
              _memset(alStack_c8,0,0x48);
              local_b0 = &DAT_101d92480;
              local_a0 = &DAT_101d924e0;
              local_80 = &DAT_101d92660;
              uVar3 = *(uint *)(param_4 + (long)param_5 * 4);
              uVar11 = FUN_10059827c(param_1,lVar13);
              pbVar1 = (byte *)(alStack_c8[iVar26] +
                               (uVar11 & 0xffffffff) + (uVar11 & 0xffffffff) * 2);
              lVar13 = (ulong)uVar3 * 4;
              pfVar24[-0x20] = *(float *)((long)&DAT_101d93260 + lVar13 + (ulong)*pbVar1 * 0x100);
              *pfVar24 = *(float *)((long)&DAT_101d93260 + lVar13 + (ulong)pbVar1[1] * 0x100);
              pfVar24[0x20] = *(float *)((long)&DAT_101d93260 + lVar13 + (ulong)pbVar1[2] * 0x100);
              param_4 = param_4 + 0xc;
            }
          }
          iVar10 = iVar10 + -1;
          pfVar24 = pfVar24 + 0x80;
          piVar20 = piVar20 + 1;
        } while (iVar10 != 0);
        param_2 = param_2 + (ulong)(iVar2 - 1) + 1;
      }
      bVar8 = iVar23 != iVar25 + -1;
      iVar23 = iVar23 + 1;
      psVar27 = psVar27 + (long)(1 << (ulong)((int)sVar5 & 0x1f)) * 2;
      pfVar21 = pfVar21 + 1;
    } while (bVar8);
  }
  if (iVar25 < iVar12) {
    lVar13 = (long)param_5;
    iVar23 = iVar12 - iVar25;
    param_2 = param_2 + 1;
    pfVar21 = (float *)(param_3 + (long)iVar25 * 4 + 0x200);
    do {
      sVar5 = *psVar27;
      if (*param_2 == 0) {
        pfVar21[0x40] = 0.0;
        pfVar21[0x20] = 0.0;
        *pfVar21 = 0.0;
        pfVar21[-0x40] = 0.0;
        pfVar21[-0x60] = 0.0;
        pfVar21[-0x80] = 0.0;
      }
      else {
        sVar6 = psVar27[(long)*param_2 * 2];
        lVar19 = (long)sVar6;
        sVar7 = (psVar27 + (long)*param_2 * 2)[1];
        iVar25 = (int)sVar7;
        if (sVar7 < 0) {
          fVar29 = *(float *)((long)&DAT_101d93260 +
                             (long)*(int *)(param_4 + (lVar13 + 3) * 4) * 4 +
                             (long)(int)sVar6 * 0x100);
          iVar10 = FUN_10059827c(param_1,lVar19);
          fVar28 = (float)(iVar10 + sVar7);
          pfVar22 = pfVar21 + -0x80;
          *pfVar22 = fVar28;
          *pfVar21 = fVar29 * fVar28;
          iVar10 = FUN_10059827c(param_1,lVar19);
          pfVar24 = pfVar21 + -0x60;
          *pfVar24 = (float)(iVar10 + iVar25);
          pfVar21[0x20] = fVar29 * (float)(iVar10 + iVar25);
          iVar10 = FUN_10059827c(param_1,lVar19);
          fVar28 = (float)(iVar10 + iVar25);
          pfVar21[-0x40] = fVar28;
          pfVar21[0x40] = fVar29 * fVar28;
          fVar29 = *(float *)((long)&DAT_101d93260 +
                             (long)*(int *)(param_4 + lVar13 * 4) * 4 + (long)(int)sVar6 * 0x100);
          *pfVar22 = fVar29 * *pfVar22;
          *pfVar24 = fVar29 * *pfVar24;
          pfVar21[-0x40] = fVar29 * fVar28;
        }
        else {
          _memset(alStack_c8,0,0x48);
          local_b0 = &DAT_101d92480;
          local_a0 = &DAT_101d924e0;
          local_80 = &DAT_101d92660;
          uVar3 = *(uint *)(param_4 + lVar13 * 4);
          uVar4 = *(uint *)(param_4 + (lVar13 + 3) * 4);
          uVar11 = FUN_10059827c(param_1,lVar19);
          pbVar1 = (byte *)(alStack_c8[iVar25] + (uVar11 & 0xffffffff) + (uVar11 & 0xffffffff) * 2);
          lVar19 = (ulong)uVar3 * 4;
          pfVar21[-0x80] = *(float *)((long)&DAT_101d93260 + lVar19 + (ulong)*pbVar1 * 0x100);
          lVar14 = (ulong)uVar4 * 4;
          *pfVar21 = *(float *)((long)&DAT_101d93260 + lVar14 + (ulong)*pbVar1 * 0x100);
          pfVar21[-0x60] = *(float *)((long)&DAT_101d93260 + lVar19 + (ulong)pbVar1[1] * 0x100);
          pfVar21[0x20] = *(float *)((long)&DAT_101d93260 + lVar14 + (ulong)pbVar1[1] * 0x100);
          pfVar21[-0x40] = *(float *)((long)&DAT_101d93260 + lVar19 + (ulong)pbVar1[2] * 0x100);
          pfVar21[0x40] = *(float *)((long)&DAT_101d93260 + lVar14 + (ulong)pbVar1[2] * 0x100);
        }
        param_4 = param_4 + 0x18;
      }
      psVar27 = psVar27 + (long)(1 << (ulong)((int)sVar5 & 0x1f)) * 2;
      iVar23 = iVar23 + -1;
      pfVar21 = pfVar21 + 1;
      param_2 = param_2 + 2;
    } while (iVar23 != 0);
  }
  if (iVar12 < 0x20) {
    uVar11 = (ulong)(iVar2 - 1) + 1;
    param_3 = param_3 + (long)iVar12 * 4;
    puVar15 = (undefined4 *)(param_3 + 0x200);
    lVar13 = (long)iVar12;
    do {
      if (0 < iVar2) {
        uVar16 = uVar11 & 0x1fffffffe;
        puVar17 = puVar15;
        uVar18 = uVar11 & 0xfffffffffffffffe;
        if (uVar16 == 0) {
          uVar16 = 0;
        }
        else {
          do {
            puVar17[-0x40] = 0;
            puVar17[0x40] = 0;
            puVar17[-0x60] = 0;
            puVar17[0x20] = 0;
            puVar17[-0x80] = 0;
            uVar18 = uVar18 - 2;
            *puVar17 = 0;
            puVar17 = puVar17 + 0x100;
          } while (uVar18 != 0);
        }
        if ((ulong)(iVar2 - 1) + 1 != uVar16) {
          lVar19 = 0;
          iVar12 = iVar2 - (int)uVar16;
          do {
            puVar17 = (undefined4 *)(param_3 + uVar16 * 0x200 + lVar19);
            puVar17[0x40] = 0;
            puVar17[0x20] = 0;
            *puVar17 = 0;
            iVar12 = iVar12 + -1;
            lVar19 = lVar19 + 0x200;
          } while (iVar12 != 0);
        }
      }
      puVar15 = puVar15 + 1;
      param_3 = param_3 + 4;
      iVar12 = (int)lVar13;
      lVar13 = lVar13 + 1;
    } while (iVar12 != 0x1f);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}




void FUN_10059a468(long param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_858 [768];
  undefined1 auStack_558 [256];
  undefined1 auStack_458 [128];
  undefined1 auStack_3d8 [128];
  undefined1 auStack_358 [768];
  long local_58;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  iVar2 = *(int *)(*(long *)(param_1 + 0x198) + 0x4850);
  local_58 = lVar5;
  uVar3 = FUN_100599b14(param_1,auStack_558,auStack_858);
  if ((int)uVar3 == 0) {
    iVar6 = 0;
    *param_3 = 0;
    do {
      FUN_100599df8(param_1,auStack_558,auStack_458,auStack_858,iVar6 >> 2);
      iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x104);
      if (iVar1 < 3) {
        iVar1 = iVar2;
      }
      FUN_100599528(param_1,param_2,auStack_458,iVar2,iVar1);
      if (param_2 == 0) {
        param_2 = 0;
        lVar4 = *(long *)(param_1 + 8);
      }
      else {
        lVar4 = *(long *)(param_1 + 8);
        param_2 = param_2 + (long)*(int *)(lVar4 + 0x104) * 0x40;
      }
      *param_3 = *param_3 + 0x20;
      iVar1 = *(int *)(lVar4 + 0x104);
      if (*(int *)(lVar4 + 0x104) < 3) {
        iVar1 = iVar2;
      }
      FUN_100599528(param_1,param_2,auStack_3d8,iVar2,iVar1);
      if (param_2 == 0) {
        param_2 = 0;
        lVar4 = *(long *)(param_1 + 8);
      }
      else {
        lVar4 = *(long *)(param_1 + 8);
        param_2 = param_2 + (long)*(int *)(lVar4 + 0x104) * 0x40;
      }
      *param_3 = *param_3 + 0x20;
      iVar1 = *(int *)(lVar4 + 0x104);
      if (*(int *)(lVar4 + 0x104) < 3) {
        iVar1 = iVar2;
      }
      FUN_100599528(param_1,param_2,auStack_358,iVar2,iVar1);
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        param_2 = param_2 + (long)*(int *)(*(long *)(param_1 + 8) + 0x104) * 0x40;
      }
      *param_3 = *param_3 + 0x20;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xc);
    uVar3 = 0;
  }
  if (lVar5 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10059a5f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  uint *puVar27;
  uint uVar28;
  int *piVar29;
  undefined4 *puVar30;
  ulong *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  uint *puVar34;
  long lVar35;
  undefined8 *puVar36;
  float *pfVar37;
  float *pfVar38;
  ulong uVar39;
  float *pfVar40;
  float *pfVar41;
  int *piVar42;
  int iVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  long lVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  byte bVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar78;
  byte bVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  
  lVar35 = -0x17a;
  uVar78 = NEON_fmov(0xbe800000,4);
  puVar36 = &DAT_101d9d25c;
  do {
    uVar50 = NEON_scvtf(CONCAT44((int)lVar35 + 0x14d,(int)lVar35 + 0x14c),4);
    uVar44 = _exp2f();
    auVar53._4_4_ = (float)((ulong)uVar50 >> 0x20) * (float)((ulong)uVar78 >> 0x20);
    auVar53._0_4_ = (float)uVar50 * (float)uVar78;
    auVar53._8_8_ = 0;
    uVar45 = _exp2f(auVar53);
    *puVar36 = CONCAT44(uVar44,uVar45);
    lVar35 = lVar35 + 2;
    puVar36 = puVar36 + 1;
  } while (lVar35 != 0);
  lVar35 = 0;
  do {
    uVar44 = _powf((float)(int)lVar35,0x3faaaaab);
    uVar45 = _powf((float)((int)lVar35 + 1),0x3faaaaab);
    (&DAT_101d94d60)[lVar35] = uVar44;
    (&DAT_101d94d64)[lVar35] = uVar45;
    lVar35 = lVar35 + 2;
  } while (lVar35 != 0x200e);
  lVar35 = 0;
  DAT_101d9cd98 = 0x4821a335;
  DAT_101d9cdbc = 0x3f5b84a8;
  DAT_101d9cdc0 = 0x3f61b9d7;
  DAT_101d9cdc4 = 0x3f731adc;
  DAT_101d9cdc8 = 0x3f7bba82;
  DAT_101d9cdcc = 0x3f7eda43;
  DAT_101d9cdd0 = 0x3f7fc8fc;
  DAT_101d9cdd4 = 0x3f7ff966;
  DAT_101d9cdd8 = 0x3f7fff8e;
  DAT_101d9cd9c = 0xbf03b5ff;
  DAT_101d9cda0 = 0xbef186da;
  DAT_101d9cda4 = 0xbea07303;
  DAT_101d9cda8 = 0xbe3a4775;
  DAT_101d9cdac = 0xbdc1b01e;
  DAT_101d9cdb0 = 0xbd27cb87;
  DAT_101d9cdb4 = 0xbc68a11e;
  DAT_101d9cdb8 = 0xbb727b47;
  puVar36 = (undefined8 *)&DAT_101d9cddc;
  do {
    iVar24 = (int)lVar35;
    iVar43 = (iVar24 + 1) * 2;
    uVar78 = NEON_scvtf(CONCAT44(iVar43,iVar24 * 2) | 0x100000001,4);
    auVar69._4_4_ = (float)((ulong)uVar78 >> 0x20) * 0.043633234;
    auVar69._0_4_ = (float)uVar78 * 0.043633234;
    fVar46 = (float)_sinf();
    auVar69._8_8_ = 0;
    fVar47 = (float)_sinf(auVar69);
    uVar78 = NEON_scvtf(CONCAT44(iVar43 + 0x13,iVar24 * 2 + 0x13),4);
    fVar48 = (float)_cosf();
    auVar75._4_4_ = ((float)((ulong)uVar78 >> 0x20) * 3.1415927) / 72.0;
    auVar75._0_4_ = ((float)uVar78 * 3.1415927) / 72.0;
    auVar75._8_8_ = 0;
    fVar49 = (float)_cosf(auVar75);
    uVar78 = CONCAT44((fVar46 * 0.5) / fVar48,(fVar47 * 0.5) / fVar49);
    puVar36[0x12] = uVar78;
    *puVar36 = uVar78;
    lVar51 = lVar35 + 0x12;
    iVar43 = (int)lVar51 * 2;
    iVar24 = (iVar24 + 0x13) * 2;
    uVar78 = NEON_scvtf(CONCAT44(iVar24,iVar43) | 0x100000001,4);
    auVar73._4_4_ = (float)((ulong)uVar78 >> 0x20) * 0.043633234;
    auVar73._0_4_ = (float)uVar78 * 0.043633234;
    fVar46 = (float)_sinf();
    auVar73._8_8_ = 0;
    fVar47 = (float)_sinf(auVar73);
    uVar78 = NEON_scvtf(CONCAT44(iVar24 + 0x13,iVar43 + 0x13),4);
    fVar48 = (float)_cosf();
    auVar77._4_4_ = ((float)((ulong)uVar78 >> 0x20) * 3.1415927) / 72.0;
    auVar77._0_4_ = ((float)uVar78 * 3.1415927) / 72.0;
    auVar77._8_8_ = 0;
    fVar49 = (float)_cosf(auVar77);
    uVar78 = CONCAT44((fVar46 * 0.5) / fVar48,(fVar47 * 0.5) / fVar49);
    *(undefined8 *)(&DAT_101d9cf8c + lVar51) = uVar78;
    *(undefined8 *)(&DAT_101d9cddc + lVar51) = uVar78;
    lVar35 = lVar35 + 2;
    puVar36 = puVar36 + 1;
  } while (lVar35 != 0x12);
  lVar35 = 0;
  pfVar37 = (float *)&DAT_101d9cfbc;
  do {
    fVar46 = (float)_cosf();
    pfVar37[-0x42] = 0.5 / fVar46;
    fVar46 = (float)_cosf();
    *pfVar37 = 0.5 / fVar46;
    fVar46 = (float)_sinf();
    fVar47 = (float)_cosf();
    pfVar37[-0x3c] = (fVar46 * 0.5) / fVar47;
    pfVar37[-0xc] = 0.0;
    pfVar37[-0x36] = 0.0;
    fVar46 = (float)_sinf();
    fVar47 = (float)_cosf();
    pfVar37[-6] = (fVar46 * 0.5) / fVar47;
    lVar35 = lVar35 + 2;
    pfVar37 = pfVar37 + 1;
  } while (lVar35 != 0xc);
  DAT_101d9d84c = 0x3f007d2b;
  DAT_101d9d854 = 0x3f0d3b7d;
  DAT_101d9d858 = 0x3f1c4258;
  DAT_101d9d860 = 0x3f5f2945;
  DAT_101d9d850 = 0x3f0483ee;
  DAT_101d9d85c = 0x3f3504f3;
  DAT_101d9d864 = 0x3f976fd9;
  DAT_101d9d868 = 0x3ff746e8;
  DAT_101d9d86c = 0x40b7945c;
  DAT_101d9d870 = 0x3f0483ee;
  DAT_101d9d874 = 0x3f3504f3;
  DAT_101d9d878 = 0x3ff746f0;
  DAT_101d9d844 = 0x3f5db3d7;
  DAT_101d9d848 = 0x3effffff;
  DAT_101d9d87c = 0x3f708fb2;
  DAT_101d9d880 = 0xbe31d0dc;
  DAT_101d9d884 = 0xbf441b80;
  DAT_101d9d888 = 0x3f7c1c5c;
  lVar35 = -0x18;
  _DAT_101d9d88c = 0xbf248dbbbeaf1d47;
  pfVar37 = (float *)&DAT_101d9cefc;
  do {
    fVar46 = (float)_sinf();
    fVar47 = (float)_cosf();
    *pfVar37 = (fVar46 * 0.5) / fVar47;
    lVar35 = lVar35 + 2;
    pfVar37 = pfVar37 + 1;
  } while (lVar35 != 0);
  uVar39 = 0;
  DAT_101d9d01c = DAT_101d9cddc;
  DAT_101d9d024 = DAT_101d9cde4;
  DAT_101d9d02c = DAT_101d9cdec;
  DAT_101d9d034 = DAT_101d9cdf4;
  DAT_101d9d03c = DAT_101d9cdfc;
  DAT_101d9d044 = DAT_101d9ce04;
  DAT_101d9d04c = DAT_101d9ce0c;
  DAT_101d9d054 = DAT_101d9ce14;
  DAT_101d9d05c = DAT_101d9ce1c;
  DAT_101d9d064 = DAT_101d9ce24;
  DAT_101d9d06c = DAT_101d9ce2c;
  DAT_101d9d074 = DAT_101d9ce34;
  DAT_101d9d07c = DAT_101d9ce3c;
  DAT_101d9d084 = DAT_101d9ce44;
  DAT_101d9d08c = DAT_101d9ce4c;
  DAT_101d9d094 = DAT_101d9ce54;
  DAT_101d9d09c = DAT_101d9ce5c;
  DAT_101d9d0a4 = DAT_101d9ce64;
  DAT_101d9d020 = -DAT_101d9cde0;
  DAT_101d9d028 = -DAT_101d9cde8;
  DAT_101d9d030 = -DAT_101d9cdf0;
  DAT_101d9d038 = -DAT_101d9cdf8;
  DAT_101d9d040 = -DAT_101d9ce00;
  DAT_101d9d048 = -DAT_101d9ce08;
  DAT_101d9d050 = -DAT_101d9ce10;
  DAT_101d9d058 = -DAT_101d9ce18;
  DAT_101d9d060 = -DAT_101d9ce20;
  DAT_101d9d068 = -DAT_101d9ce28;
  DAT_101d9d070 = -DAT_101d9ce30;
  DAT_101d9d078 = -DAT_101d9ce38;
  DAT_101d9d080 = -DAT_101d9ce40;
  DAT_101d9d088 = -DAT_101d9ce48;
  DAT_101d9d090 = -DAT_101d9ce50;
  DAT_101d9d098 = -DAT_101d9ce58;
  DAT_101d9d0a0 = -DAT_101d9ce60;
  DAT_101d9d0a8 = -DAT_101d9ce68;
  DAT_101d9d0ac = DAT_101d9ce6c;
  DAT_101d9d0b4 = DAT_101d9ce74;
  DAT_101d9d0bc = DAT_101d9ce7c;
  DAT_101d9d0c4 = DAT_101d9ce84;
  DAT_101d9d0cc = DAT_101d9ce8c;
  DAT_101d9d0d4 = DAT_101d9ce94;
  DAT_101d9d0dc = DAT_101d9ce9c;
  DAT_101d9d0e4 = DAT_101d9cea4;
  DAT_101d9d0ec = DAT_101d9ceac;
  DAT_101d9d0f4 = DAT_101d9ceb4;
  DAT_101d9d0fc = DAT_101d9cebc;
  DAT_101d9d104 = DAT_101d9cec4;
  DAT_101d9d10c = DAT_101d9cecc;
  DAT_101d9d114 = DAT_101d9ced4;
  DAT_101d9d11c = DAT_101d9cedc;
  DAT_101d9d124 = DAT_101d9cee4;
  DAT_101d9d12c = DAT_101d9ceec;
  DAT_101d9d134 = DAT_101d9cef4;
  DAT_101d9d0b0 = -DAT_101d9ce70;
  DAT_101d9d0b8 = -DAT_101d9ce78;
  DAT_101d9d0c0 = -DAT_101d9ce80;
  DAT_101d9d0c8 = -DAT_101d9ce88;
  DAT_101d9d0d0 = -DAT_101d9ce90;
  DAT_101d9d0d8 = -DAT_101d9ce98;
  DAT_101d9d0e0 = -DAT_101d9cea0;
  DAT_101d9d0e8 = -DAT_101d9cea8;
  DAT_101d9d0f0 = -DAT_101d9ceb0;
  DAT_101d9d0f8 = -DAT_101d9ceb8;
  DAT_101d9d100 = -DAT_101d9cec0;
  DAT_101d9d108 = -DAT_101d9cec8;
  DAT_101d9d110 = -DAT_101d9ced0;
  DAT_101d9d118 = -DAT_101d9ced8;
  DAT_101d9d120 = -DAT_101d9cee0;
  DAT_101d9d128 = -DAT_101d9cee8;
  DAT_101d9d130 = -DAT_101d9cef0;
  DAT_101d9d138 = -DAT_101d9cef8;
  DAT_101d9d13c = DAT_101d9cefc;
  DAT_101d9d144 = DAT_101d9cf04;
  DAT_101d9d14c = DAT_101d9cf0c;
  DAT_101d9d154 = DAT_101d9cf14;
  DAT_101d9d15c = DAT_101d9cf1c;
  DAT_101d9d164 = DAT_101d9cf24;
  DAT_101d9d140 = -DAT_101d9cf00;
  DAT_101d9d148 = -DAT_101d9cf08;
  DAT_101d9d150 = -DAT_101d9cf10;
  DAT_101d9d158 = -DAT_101d9cf18;
  DAT_101d9d160 = -DAT_101d9cf20;
  DAT_101d9d168 = -DAT_101d9cf28;
  DAT_101d9d1cc = DAT_101d9cf8c;
  DAT_101d9d1d4 = DAT_101d9cf94;
  DAT_101d9d1dc = DAT_101d9cf9c;
  DAT_101d9d1e4 = DAT_101d9cfa4;
  DAT_101d9d1ec = DAT_101d9cfac;
  DAT_101d9d1f4 = DAT_101d9cfb4;
  DAT_101d9d1fc = DAT_101d9cfbc;
  DAT_101d9d204 = DAT_101d9cfc4;
  DAT_101d9d20c = DAT_101d9cfcc;
  DAT_101d9d214 = DAT_101d9cfd4;
  DAT_101d9d21c = DAT_101d9cfdc;
  DAT_101d9d224 = DAT_101d9cfe4;
  DAT_101d9d22c = DAT_101d9cfec;
  DAT_101d9d234 = DAT_101d9cff4;
  DAT_101d9d23c = DAT_101d9cffc;
  DAT_101d9d244 = DAT_101d9d004;
  DAT_101d9d1d0 = -DAT_101d9cf90;
  DAT_101d9d1d8 = -DAT_101d9cf98;
  DAT_101d9d1e0 = -DAT_101d9cfa0;
  DAT_101d9d1e8 = -DAT_101d9cfa8;
  DAT_101d9d1f0 = -DAT_101d9cfb0;
  DAT_101d9d1f8 = -DAT_101d9cfb8;
  DAT_101d9d200 = -DAT_101d9cfc0;
  DAT_101d9d208 = -DAT_101d9cfc8;
  DAT_101d9d210 = -DAT_101d9cfd0;
  DAT_101d9d218 = -DAT_101d9cfd8;
  DAT_101d9d220 = -DAT_101d9cfe0;
  DAT_101d9d228 = -DAT_101d9cfe8;
  DAT_101d9d230 = -DAT_101d9cff0;
  DAT_101d9d238 = -DAT_101d9cff8;
  DAT_101d9d240 = -DAT_101d9d000;
  DAT_101d9d248 = -DAT_101d9d008;
  DAT_101d9d250 = -DAT_101d9d010;
  DAT_101d9d258 = -DAT_101d9d018;
  DAT_101d9d24c = DAT_101d9d00c;
  uVar78 = 0;
  uVar50 = 0;
  DAT_101d9d254 = DAT_101d9d014;
  pfVar37 = (float *)&DAT_101da1eb8;
  pfVar38 = (float *)&DAT_101da1e38;
  pfVar40 = (float *)&DAT_101da1db8;
  pfVar41 = (float *)&DAT_101da1d38;
  do {
    fVar48 = (float)(int)uVar39 * 0.5;
    fVar49 = ((float)(int)uVar39 + 1.0) * 0.5;
    auVar52._8_8_ = uVar78;
    auVar52._0_8_ = 0xbe800000;
    auVar53 = _exp2f(auVar52);
    fVar47 = 1.0;
    fVar46 = 1.0;
    if (0 < (long)uVar39) {
      if ((uVar39 & 1) == 0) {
        fVar47 = (float)_powf(auVar53,fVar48);
        fVar46 = 1.0;
      }
      else {
        fVar46 = (float)_powf(auVar53,fVar49);
        fVar47 = 1.0;
      }
    }
    pfVar41[-0x10] = fVar46;
    pfVar40[-0x10] = fVar47;
    pfVar38[-0x10] = fVar46 * 1.4142135;
    pfVar37[-0x10] = fVar47 * 1.4142135;
    auVar54._8_8_ = uVar50;
    auVar54._0_8_ = 0xbf000000;
    auVar53 = _exp2f(auVar54);
    fVar47 = 1.0;
    fVar46 = 1.0;
    if (0 < (long)uVar39) {
      if ((uVar39 & 1) == 0) {
        fVar47 = (float)_powf(auVar53,fVar48);
        fVar46 = 1.0;
      }
      else {
        fVar46 = (float)_powf(auVar53,fVar49);
        fVar47 = 1.0;
      }
    }
    *pfVar41 = fVar46;
    *pfVar40 = fVar47;
    *pfVar38 = fVar46 * 1.4142135;
    *pfVar37 = fVar47 * 1.4142135;
    uVar39 = uVar39 + 1;
    pfVar37 = pfVar37 + 1;
    pfVar38 = pfVar38 + 1;
    pfVar40 = pfVar40 + 1;
    pfVar41 = pfVar41 + 1;
  } while (uVar39 != 0x10);
  piVar29 = &DAT_101d9de48;
  puVar30 = &DAT_101d9e028;
  puVar32 = &DAT_101d9f598;
  puVar33 = &DAT_101da09c8;
  lVar35 = 0;
  do {
    (&DAT_101da0f48)[lVar35 * 3] = &DAT_101d9ddc8 + lVar35 * 0x98;
    iVar5 = (&DAT_10186a0fc)[lVar35 * 0x48];
    (&DAT_101d9ddc8)[lVar35 * 0x98] = iVar5 >> 1;
    (&DAT_101d9ddcc)[lVar35 * 0x98] = 0;
    (&DAT_101d9ddd0)[lVar35 * 0x98] = 3;
    (&DAT_101d9ddd4)[lVar35 * 0x98] = 0;
    iVar43 = (&DAT_10186a100)[lVar35 * 0x48];
    (&DAT_101d9ddd8)[lVar35 * 0x98] = iVar43 >> 1;
    (&DAT_101d9dddc)[lVar35 * 0x98] = iVar5;
    (&DAT_101d9dde0)[lVar35 * 0x98] = 3;
    (&DAT_101d9dde4)[lVar35 * 0x98] = 1;
    iVar24 = (&DAT_10186a104)[lVar35 * 0x48];
    iVar43 = iVar43 + iVar5;
    (&DAT_101d9dde8)[lVar35 * 0x98] = iVar24 >> 1;
    (&DAT_101d9ddec)[lVar35 * 0x98] = iVar43;
    (&DAT_101d9ddf0)[lVar35 * 0x98] = 3;
    (&DAT_101d9ddf4)[lVar35 * 0x98] = 2;
    iVar5 = (&DAT_10186a108)[lVar35 * 0x48];
    iVar24 = iVar24 + iVar43;
    (&DAT_101d9ddf8)[lVar35 * 0x98] = iVar5 >> 1;
    (&DAT_101d9ddfc)[lVar35 * 0x98] = iVar24;
    (&DAT_101d9de00)[lVar35 * 0x98] = 3;
    (&DAT_101d9de04)[lVar35 * 0x98] = 3;
    iVar43 = (&DAT_10186a10c)[lVar35 * 0x48];
    iVar5 = iVar5 + iVar24;
    (&DAT_101d9de08)[lVar35 * 0x98] = iVar43 >> 1;
    (&DAT_101d9de0c)[lVar35 * 0x98] = iVar5;
    (&DAT_101d9de10)[lVar35 * 0x98] = 3;
    (&DAT_101d9de14)[lVar35 * 0x98] = 4;
    iVar24 = (&DAT_10186a110)[lVar35 * 0x48];
    iVar43 = iVar43 + iVar5;
    (&DAT_101d9de18)[lVar35 * 0x98] = iVar24 >> 1;
    (&DAT_101d9de1c)[lVar35 * 0x98] = iVar43;
    (&DAT_101d9de20)[lVar35 * 0x98] = 3;
    (&DAT_101d9de24)[lVar35 * 0x98] = 5;
    iVar5 = (&DAT_10186a114)[lVar35 * 0x48];
    iVar24 = iVar24 + iVar43;
    (&DAT_101d9de28)[lVar35 * 0x98] = iVar5 >> 1;
    (&DAT_101d9de2c)[lVar35 * 0x98] = iVar24;
    (&DAT_101d9de30)[lVar35 * 0x98] = 3;
    (&DAT_101d9de34)[lVar35 * 0x98] = 6;
    iVar25 = (&DAT_10186a118)[lVar35 * 0x48];
    iVar5 = iVar5 + iVar24;
    (&DAT_101d9de38)[lVar35 * 0x98] = iVar25 >> 1;
    (&DAT_101d9de3c)[lVar35 * 0x98] = iVar5;
    (&DAT_101d9de40)[lVar35 * 0x98] = 3;
    (&DAT_101d9de44)[lVar35 * 0x98] = 7;
    iVar25 = iVar25 + iVar5;
    iVar43 = 3;
    piVar42 = &DAT_10186a198 + lVar35 * 0x48;
    piVar26 = piVar29;
    do {
      iVar5 = *piVar42 >> 1;
      *piVar26 = iVar5;
      piVar26[1] = iVar25;
      piVar26[2] = 0;
      piVar26[3] = iVar43;
      piVar26[4] = iVar5;
      piVar26[5] = iVar25 + 1;
      piVar26[6] = 1;
      piVar26[7] = iVar43;
      piVar26[8] = iVar5;
      iVar24 = iVar25 + 2;
      piVar26[0xb] = iVar43;
      iVar25 = iVar25 + iVar5 * 6;
      iVar43 = iVar43 + 1;
      piVar26[9] = iVar24;
      piVar26[10] = 2;
      piVar26 = piVar26 + 0xc;
      piVar42 = piVar42 + 1;
    } while (iVar43 != 0xd);
    iVar43 = 0;
    uVar28 = 0;
    (&DAT_101da1020)[lVar35 * 3] = puVar30;
    piVar26 = &DAT_101d9f328 + lVar35 * 0x9c;
    (&DAT_101da0f50)[lVar35 * 3] = piVar26;
    piVar42 = &DAT_10186a18c + lVar35 * 0x48;
    do {
      iVar5 = *piVar42 >> 1;
      *piVar26 = iVar5;
      piVar26[1] = uVar28;
      piVar26[2] = 0;
      piVar26[3] = iVar43;
      piVar26[4] = iVar5;
      piVar26[5] = uVar28 | 1;
      piVar26[6] = 1;
      piVar26[7] = iVar43;
      piVar26[8] = iVar5;
      iVar24 = uVar28 + 2;
      piVar26[0xb] = iVar43;
      uVar28 = uVar28 + iVar5 * 6;
      iVar43 = iVar43 + 1;
      piVar26[9] = iVar24;
      piVar26[10] = 2;
      piVar26 = piVar26 + 0xc;
      piVar42 = piVar42 + 1;
    } while (iVar43 != 0xd);
    iVar43 = (&DAT_10186a100)[lVar35 * 0x48];
    (&DAT_101da0918)[lVar35 * 0x2c] = (int)(&DAT_10186a0fc)[lVar35 * 0x48] >> 1;
    (&DAT_101da0920)[lVar35 * 0x2c] = iVar43 >> 1;
    iVar43 = (&DAT_10186a108)[lVar35 * 0x48];
    iVar24 = (&DAT_10186a10c)[lVar35 * 0x48];
    iVar5 = (&DAT_10186a110)[lVar35 * 0x48];
    iVar25 = (&DAT_10186a114)[lVar35 * 0x48];
    (&DAT_101da0928)[lVar35 * 0x2c] = (int)(&DAT_10186a104)[lVar35 * 0x48] >> 1;
    iVar2 = (&DAT_10186a118)[lVar35 * 0x48];
    (&DAT_101da0930)[lVar35 * 0x2c] = iVar43 >> 1;
    (&DAT_101da0938)[lVar35 * 0x2c] = iVar24 >> 1;
    (&DAT_101da0940)[lVar35 * 0x2c] = iVar5 >> 1;
    (&DAT_101da0948)[lVar35 * 0x2c] = iVar25 >> 1;
    (&DAT_101da0950)[lVar35 * 0x2c] = iVar2 >> 1;
    iVar43 = (&DAT_10186a11c)[lVar35 * 0x48];
    iVar24 = (&DAT_10186a120)[lVar35 * 0x48];
    (&DAT_101da1028)[lVar35 * 3] = puVar32;
    (&DAT_101da0f58)[lVar35 * 3] = &DAT_101da0918 + lVar35 * 0x2c;
    (&DAT_101da0958)[lVar35 * 0x2c] = iVar43 >> 1;
    (&DAT_101da0960)[lVar35 * 0x2c] = iVar24 >> 1;
    iVar43 = (&DAT_10186a128)[lVar35 * 0x48];
    (&DAT_101da0968)[lVar35 * 0x2c] = (int)(&DAT_10186a124)[lVar35 * 0x48] >> 1;
    (&DAT_101da0970)[lVar35 * 0x2c] = iVar43 >> 1;
    iVar43 = (&DAT_10186a130)[lVar35 * 0x48];
    (&DAT_101da0978)[lVar35 * 0x2c] = (int)(&DAT_10186a12c)[lVar35 * 0x48] >> 1;
    (&DAT_101da0980)[lVar35 * 0x2c] = iVar43 >> 1;
    iVar43 = (&DAT_10186a138)[lVar35 * 0x48];
    (&DAT_101da0988)[lVar35 * 0x2c] = (int)(&DAT_10186a134)[lVar35 * 0x48] >> 1;
    (&DAT_101da0990)[lVar35 * 0x2c] = iVar43 >> 1;
    iVar43 = (&DAT_10186a140)[lVar35 * 0x48];
    (&DAT_101da0998)[lVar35 * 0x2c] = (int)(&DAT_10186a13c)[lVar35 * 0x48] >> 1;
    (&DAT_101da09a0)[lVar35 * 0x2c] = iVar43 >> 1;
    iVar43 = (&DAT_10186a148)[lVar35 * 0x48];
    (&DAT_101da09a8)[lVar35 * 0x2c] = (int)(&DAT_10186a144)[lVar35 * 0x48] >> 1;
    (&DAT_101da09b0)[lVar35 * 0x2c] = iVar43 >> 1;
    iVar43 = (&DAT_10186a150)[lVar35 * 0x48];
    (&DAT_101da09b8)[lVar35 * 0x2c] = (int)(&DAT_10186a14c)[lVar35 * 0x48] >> 1;
    (&DAT_101da09c0)[lVar35 * 0x2c] = iVar43 >> 1;
    (&DAT_101da1030)[lVar35 * 3] = puVar33;
    (&DAT_101da091c)[lVar35 * 0x2c] = 0;
    (&DAT_101da0924)[lVar35 * 0x2c] = 1;
    (&DAT_101da092c)[lVar35 * 0x2c] = 2;
    (&DAT_101da0934)[lVar35 * 0x2c] = 3;
    (&DAT_101da093c)[lVar35 * 0x2c] = 4;
    (&DAT_101da0944)[lVar35 * 0x2c] = 5;
    (&DAT_101da094c)[lVar35 * 0x2c] = 6;
    (&DAT_101da0954)[lVar35 * 0x2c] = 7;
    (&DAT_101da095c)[lVar35 * 0x2c] = 8;
    (&DAT_101da0964)[lVar35 * 0x2c] = 9;
    (&DAT_101da096c)[lVar35 * 0x2c] = 10;
    (&DAT_101da0974)[lVar35 * 0x2c] = 0xb;
    (&DAT_101da097c)[lVar35 * 0x2c] = 0xc;
    (&DAT_101da0984)[lVar35 * 0x2c] = 0xd;
    (&DAT_101da098c)[lVar35 * 0x2c] = 0xe;
    (&DAT_101da0994)[lVar35 * 0x2c] = 0xf;
    (&DAT_101da099c)[lVar35 * 0x2c] = 0x10;
    (&DAT_101da09a4)[lVar35 * 0x2c] = 0x11;
    (&DAT_101da09ac)[lVar35 * 0x2c] = 0x12;
    lVar51 = lVar35 + 1;
    (&DAT_101da09b4)[lVar35 * 0x2c] = 0x13;
    piVar29 = piVar29 + 0x98;
    puVar30 = puVar30 + 0x98;
    (&DAT_101da09bc)[lVar35 * 0x2c] = 0x14;
    puVar32 = puVar32 + 0x270;
    puVar33 = puVar33 + 0xb0;
    (&DAT_101da09c4)[lVar35 * 0x2c] = 0x15;
    lVar35 = lVar51;
  } while (lVar51 != 9);
  lVar35 = 0;
  piVar29 = &DAT_10186a188;
  piVar26 = &DAT_101d9d8ec;
  auVar55._4_4_ = param_1;
  auVar55._0_4_ = param_1;
  auVar55._8_4_ = param_1;
  auVar55._12_4_ = param_1;
  do {
    iVar24 = (piVar29[-0x39] + 7) / 0x12;
    iVar5 = (piVar29[-0x3a] + 7) / 0x12;
    iVar25 = (piVar29[-0x38] + 7) / 0x12;
    iVar2 = (piVar29[-0x37] + 7) / 0x12;
    iVar3 = (piVar29[-0x35] + 7) / 0x12;
    iVar4 = (piVar29[-0x36] + 7) / 0x12;
    iVar11 = (piVar29[-0x34] + 7) / 0x12;
    iVar12 = (piVar29[-0x33] + 7) / 0x12;
    iVar13 = (piVar29[-0x31] + 7) / 0x12;
    iVar14 = (piVar29[-0x32] + 7) / 0x12;
    iVar15 = (piVar29[-0x30] + 7) / 0x12;
    iVar16 = (piVar29[-0x2f] + 7) / 0x12;
    iVar17 = (piVar29[-0x2d] + 7) / 0x12;
    iVar18 = (piVar29[-0x2e] + 7) / 0x12;
    iVar19 = (piVar29[-0x2c] + 7) / 0x12;
    iVar20 = (piVar29[-0x2b] + 7) / 0x12;
    iVar21 = (piVar29[-0x29] + 7) / 0x12;
    iVar22 = (piVar29[-0x2a] + 7) / 0x12;
    iVar1 = (piVar29[-0x26] + 7) / 0x12;
    iVar43 = param_1;
    if (iVar1 < param_1) {
      iVar43 = iVar1 + 1;
    }
    iVar23 = (piVar29[-0x25] + 7) / 0x12;
    iVar1 = param_1;
    if (iVar23 < param_1) {
      iVar1 = iVar23 + 1;
    }
    auVar66._0_4_ = -(uint)(iVar5 < param_1);
    auVar66._4_4_ = -(uint)(iVar24 < param_1);
    auVar66._8_4_ = -(uint)(iVar25 < param_1);
    auVar66._12_4_ = -(uint)(iVar2 < param_1);
    auVar6._4_4_ = iVar24 + 1;
    auVar6._0_4_ = iVar5 + 1;
    auVar6._8_4_ = iVar25 + 1;
    auVar6._12_4_ = iVar2 + 1;
    auVar53 = auVar55 ^ (auVar55 ^ auVar6) & auVar66;
    auVar68._0_4_ = -(uint)(iVar4 < param_1);
    auVar68._4_4_ = -(uint)(iVar3 < param_1);
    auVar68._8_4_ = -(uint)(iVar11 < param_1);
    auVar68._12_4_ = -(uint)(iVar12 < param_1);
    iVar5 = (piVar29[-0x28] + 7) / 0x12;
    iVar25 = (piVar29[-0x27] + 7) / 0x12;
    auVar7._4_4_ = iVar3 + 1;
    auVar7._0_4_ = iVar4 + 1;
    auVar7._8_4_ = iVar11 + 1;
    auVar7._12_4_ = iVar12 + 1;
    auVar69 = auVar55 ^ (auVar55 ^ auVar7) & auVar68;
    auVar72._0_4_ = -(uint)(iVar14 < param_1);
    auVar72._4_4_ = -(uint)(iVar13 < param_1);
    auVar72._8_4_ = -(uint)(iVar15 < param_1);
    auVar72._12_4_ = -(uint)(iVar16 < param_1);
    auVar74._0_4_ = -(uint)(iVar18 < param_1);
    auVar74._4_4_ = -(uint)(iVar17 < param_1);
    auVar74._8_4_ = -(uint)(iVar19 < param_1);
    auVar74._12_4_ = -(uint)(iVar20 < param_1);
    auVar9._4_4_ = iVar13 + 1;
    auVar9._0_4_ = iVar14 + 1;
    auVar9._8_4_ = iVar15 + 1;
    auVar9._12_4_ = iVar16 + 1;
    auVar73 = auVar55 ^ (auVar55 ^ auVar9) & auVar72;
    auVar8._4_4_ = iVar17 + 1;
    auVar8._0_4_ = iVar18 + 1;
    auVar8._8_4_ = iVar19 + 1;
    auVar8._12_4_ = iVar20 + 1;
    auVar75 = auVar55 ^ (auVar55 ^ auVar8) & auVar74;
    auVar76._0_4_ = -(uint)(iVar22 < param_1);
    auVar76._4_4_ = -(uint)(iVar21 < param_1);
    auVar76._8_4_ = -(uint)(iVar5 < param_1);
    auVar76._12_4_ = -(uint)(iVar25 < param_1);
    iVar2 = (piVar29[-0x24] + 7) / 0x12;
    iVar24 = param_1;
    if (iVar2 < param_1) {
      iVar24 = iVar2 + 1;
    }
    iVar2 = piVar29[-0xd];
    auVar10._4_4_ = iVar21 + 1;
    auVar10._0_4_ = iVar22 + 1;
    auVar10._8_4_ = iVar5 + 1;
    auVar10._12_4_ = iVar25 + 1;
    auVar77 = auVar55 ^ (auVar55 ^ auVar10) & auVar76;
    *(long *)(piVar26 + -0x16) = auVar53._0_8_;
    auVar53 = NEON_ext(auVar53,auVar53,8,1);
    piVar26[-2] = iVar43;
    piVar26[-1] = iVar1;
    *piVar26 = iVar24;
    iVar24 = (iVar2 + -1) / 0x12;
    *(long *)(piVar26 + -0x12) = auVar69._0_8_;
    iVar43 = param_1;
    if (iVar24 < param_1) {
      iVar43 = iVar24 + 1;
    }
    *(int *)((long)&DAT_101d9dbd0 + lVar35) = iVar43;
    iVar43 = piVar29[-0xc];
    auVar69 = NEON_ext(auVar69,auVar69,8,1);
    *(long *)(piVar26 + -0xe) = auVar73._0_8_;
    iVar24 = (iVar43 + -1) / 0x12;
    iVar43 = param_1;
    if (iVar24 < param_1) {
      iVar43 = iVar24 + 1;
    }
    auVar73 = NEON_ext(auVar73,auVar73,8,1);
    iVar5 = (piVar29[-0xb] + -1) / 0x12;
    *(long *)(piVar26 + -10) = auVar75._0_8_;
    iVar24 = param_1;
    if (iVar5 < param_1) {
      iVar24 = iVar5 + 1;
    }
    auVar75 = NEON_ext(auVar75,auVar75,8,1);
    iVar25 = (piVar29[-10] + -1) / 0x12;
    *(long *)(piVar26 + -6) = auVar77._0_8_;
    iVar5 = param_1;
    if (iVar25 < param_1) {
      iVar5 = iVar25 + 1;
    }
    auVar77 = NEON_ext(auVar77,auVar77,8,1);
    iVar2 = (piVar29[-9] + -1) / 0x12;
    iVar25 = param_1;
    if (iVar2 < param_1) {
      iVar25 = iVar2 + 1;
    }
    *(long *)(piVar26 + -0x14) = auVar53._0_8_;
    iVar2 = piVar29[-8];
    *(long *)(piVar26 + -0x10) = auVar69._0_8_;
    iVar3 = (iVar2 + -1) / 0x12;
    iVar2 = param_1;
    if (iVar3 < param_1) {
      iVar2 = iVar3 + 1;
    }
    iVar3 = piVar29[-7];
    *(long *)(piVar26 + -0xc) = auVar73._0_8_;
    *(long *)(piVar26 + -8) = auVar75._0_8_;
    iVar4 = (iVar3 + -1) / 0x12;
    iVar3 = piVar29[-6];
    *(long *)(piVar26 + -4) = auVar77._0_8_;
    iVar11 = (iVar3 + -1) / 0x12;
    iVar3 = param_1;
    if (iVar4 < param_1) {
      iVar3 = iVar4 + 1;
    }
    *(int *)((long)&DAT_101d9dbd4 + lVar35) = iVar43;
    iVar43 = param_1;
    if (iVar11 < param_1) {
      iVar43 = iVar11 + 1;
    }
    iVar4 = piVar29[-5];
    *(int *)((long)&DAT_101d9dbd8 + lVar35) = iVar24;
    *(int *)((long)&DAT_101d9dbdc + lVar35) = iVar5;
    iVar5 = (iVar4 + -1) / 0x12;
    iVar24 = param_1;
    if (iVar5 < param_1) {
      iVar24 = iVar5 + 1;
    }
    iVar5 = piVar29[-4];
    *(int *)((long)&DAT_101d9dbe0 + lVar35) = iVar25;
    *(int *)((long)&DAT_101d9dbe4 + lVar35) = iVar2;
    iVar25 = (iVar5 + -1) / 0x12;
    iVar5 = param_1;
    if (iVar25 < param_1) {
      iVar5 = iVar25 + 1;
    }
    iVar25 = piVar29[-3];
    *(int *)((long)&DAT_101d9dbe8 + lVar35) = iVar3;
    iVar2 = (iVar25 + -1) / 0x12;
    iVar25 = param_1;
    if (iVar2 < param_1) {
      iVar25 = iVar2 + 1;
    }
    iVar2 = piVar29[-2];
    *(int *)((long)&DAT_101d9dbec + lVar35) = iVar43;
    *(int *)((long)&DAT_101d9dbf0 + lVar35) = iVar24;
    iVar24 = (iVar2 + -1) / 0x12;
    iVar43 = piVar29[-1];
    *(int *)((long)&DAT_101d9dbf4 + lVar35) = iVar5;
    *(int *)((long)&DAT_101d9dbf8 + lVar35) = iVar25;
    iVar5 = (iVar43 + -1) / 0x12;
    iVar43 = param_1;
    if (iVar24 < param_1) {
      iVar43 = iVar24 + 1;
    }
    iVar24 = param_1;
    if (iVar5 < param_1) {
      iVar24 = iVar5 + 1;
    }
    iVar5 = *piVar29;
    *(int *)((long)&DAT_101d9dbfc + lVar35) = iVar43;
    *(int *)((long)&DAT_101d9dc00 + lVar35) = iVar24;
    iVar24 = (iVar5 + -1) / 0x12;
    iVar43 = param_1;
    if (iVar24 < param_1) {
      iVar43 = iVar24 + 1;
    }
    *(int *)((long)&DAT_101d9dc04 + lVar35) = iVar43;
    lVar35 = lVar35 + 0x38;
    piVar29 = piVar29 + 0x48;
    piVar26 = piVar26 + 0x17;
  } while (lVar35 != 0x1f8);
  lVar35 = 0;
  puVar31 = &DAT_101da1940;
  do {
    uVar28 = (uint)lVar35;
    *(uint *)(puVar31 + -7) = uVar28 | 0x3100;
    *(uint *)((long)puVar31 + -0x34) = uVar28 | 0x3140;
    bVar65 = (byte)lVar35;
    bVar62 = (byte)((ulong)lVar35 >> 8);
    uVar63 = (undefined1)((ulong)lVar35 >> 0x10);
    uVar64 = (undefined1)((ulong)lVar35 >> 0x18);
    auVar56._0_8_ =
         CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14(bVar65,uVar28)))) | 0x304000003000
    ;
    auVar56[8] = bVar65 | 0x80;
    auVar56[9] = bVar62 | 0x30;
    auVar56[10] = uVar63;
    auVar56[0xb] = uVar64;
    auVar56[0xc] = bVar65 | 0xc0;
    auVar56[0xd] = bVar62 | 0x30;
    auVar56[0xe] = uVar63;
    auVar56[0xf] = uVar64;
    puVar31[-9] = auVar56._0_8_;
    auVar53 = NEON_ext(auVar56,auVar56,8,1);
    puVar31[-8] = auVar53._0_8_;
    uVar39 = CONCAT44(uVar28,uVar28) | 0x800000008;
    *(uint *)(puVar31 + -4) = uVar28 | 0x3108;
    *(uint *)((long)puVar31 + -0x1c) = uVar28 | 0x3148;
    auVar57._0_8_ =
         CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14((char)(uVar39 >> 0x20),
                                                                  CONCAT13(uVar64,CONCAT12(uVar63,
                                                  CONCAT11(bVar62,(char)uVar39))))))) |
         0x304000003000;
    auVar57[8] = bVar65 | 0x88;
    auVar57[9] = bVar62 | 0x30;
    auVar57[10] = uVar63;
    auVar57[0xb] = uVar64;
    auVar57[0xc] = bVar65 | 200;
    auVar57[0xd] = bVar62 | 0x30;
    auVar57[0xe] = uVar63;
    auVar57[0xf] = uVar64;
    puVar31[-6] = auVar57._0_8_;
    auVar53 = NEON_ext(auVar57,auVar57,8,1);
    puVar31[-5] = auVar53._0_8_;
    uVar39 = CONCAT44(uVar28,uVar28) | 0x1000000010;
    *(uint *)(puVar31 + -1) = uVar28 | 0x3110;
    *(uint *)((long)puVar31 + -4) = uVar28 | 0x3150;
    auVar58._0_8_ =
         CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14((char)(uVar39 >> 0x20),
                                                                  CONCAT13(uVar64,CONCAT12(uVar63,
                                                  CONCAT11(bVar62,(char)uVar39))))))) |
         0x304000003000;
    auVar58[8] = bVar65 | 0x90;
    auVar58[9] = bVar62 | 0x30;
    auVar58[10] = uVar63;
    auVar58[0xb] = uVar64;
    auVar58[0xc] = bVar65 | 0xd0;
    auVar58[0xd] = bVar62 | 0x30;
    auVar58[0xe] = uVar63;
    auVar58[0xf] = uVar64;
    puVar31[-3] = auVar58._0_8_;
    auVar53 = NEON_ext(auVar58,auVar58,8,1);
    puVar31[-2] = auVar53._0_8_;
    uVar39 = CONCAT44(uVar28,uVar28) | 0x1800000018;
    *(uint *)(puVar31 + 2) = uVar28 | 0x3118;
    *(uint *)((long)puVar31 + 0x14) = uVar28 | 0x3158;
    auVar59._0_8_ =
         CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14((char)(uVar39 >> 0x20),
                                                                  CONCAT13(uVar64,CONCAT12(uVar63,
                                                  CONCAT11(bVar62,(char)uVar39))))))) |
         0x304000003000;
    auVar59[8] = bVar65 | 0x98;
    auVar59[9] = bVar62 | 0x30;
    auVar59[10] = uVar63;
    auVar59[0xb] = uVar64;
    auVar59[0xc] = bVar65 | 0xd8;
    auVar59[0xd] = bVar62 | 0x30;
    auVar59[0xe] = uVar63;
    auVar59[0xf] = uVar64;
    *puVar31 = auVar59._0_8_;
    auVar53 = NEON_ext(auVar59,auVar59,8,1);
    puVar31[1] = auVar53._0_8_;
    uVar39 = CONCAT44(uVar28,uVar28) | 0x2000000020;
    *(uint *)(puVar31 + 5) = uVar28 | 0x3120;
    auVar60._0_8_ =
         CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14((char)(uVar39 >> 0x20),
                                                                  CONCAT13(uVar64,CONCAT12(uVar63,
                                                  CONCAT11(bVar62,(char)uVar39))))))) |
         0x304000003000;
    auVar60[8] = bVar65 | 0xa0;
    auVar60[9] = bVar62 | 0x30;
    auVar60[10] = uVar63;
    auVar60[0xb] = uVar64;
    auVar60[0xc] = bVar65 | 0xe0;
    auVar60[0xd] = bVar62 | 0x30;
    auVar60[0xe] = uVar63;
    auVar60[0xf] = uVar64;
    puVar31[3] = auVar60._0_8_;
    auVar53 = NEON_ext(auVar60,auVar60,8,1);
    puVar31[4] = auVar53._0_8_;
    uVar39 = CONCAT44(uVar28,uVar28) | 0x2800000028;
    *(uint *)((long)puVar31 + 0x2c) = uVar28 | 0x3160;
    auVar61._0_8_ =
         CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14((char)(uVar39 >> 0x20),
                                                                  CONCAT13(uVar64,CONCAT12(uVar63,
                                                  CONCAT11(bVar62,(char)uVar39))))))) |
         0x304000003000;
    auVar61[8] = bVar65 | 0xa8;
    auVar61[9] = bVar62 | 0x30;
    auVar61[10] = uVar63;
    auVar61[0xb] = uVar64;
    auVar61[0xc] = bVar65 | 0xe8;
    auVar61[0xd] = bVar62 | 0x30;
    auVar61[0xe] = uVar63;
    auVar61[0xf] = uVar64;
    puVar31[6] = auVar61._0_8_;
    auVar53 = NEON_ext(auVar61,auVar61,8,1);
    *(uint *)(puVar31 + 8) = uVar28 | 0x3128;
    lVar35 = lVar35 + 1;
    puVar31[7] = auVar53._0_8_;
    *(uint *)((long)puVar31 + 0x44) = uVar28 | 0x3168;
    puVar31 = puVar31 + 0x12;
  } while (lVar35 != 5);
  lVar35 = 0;
  DAT_101da1bc8 = (undefined8)DAT_10115d800;
  auVar53 = NEON_ext(_DAT_10115d800,_DAT_10115d800,8,1);
  DAT_101da1bd0 = auVar53._0_8_;
  DAT_101da1bd8 = (undefined8)DAT_10115d810;
  auVar53 = NEON_ext(_DAT_10115d810,_DAT_10115d810,8,1);
  DAT_101da1be0 = auVar53._0_8_;
  DAT_101da1be8 = (undefined8)DAT_10115d820;
  auVar53 = NEON_ext(_DAT_10115d820,_DAT_10115d820,8,1);
  DAT_101da1bf0 = auVar53._0_8_;
  DAT_101da1bf8 = (undefined8)DAT_10115d830;
  auVar53 = NEON_ext(_DAT_10115d830,_DAT_10115d830,8,1);
  DAT_101da1c08 = (undefined8)DAT_10115d840;
  auVar69 = NEON_ext(_DAT_10115d840,_DAT_10115d840,8,1);
  DAT_101da1c00 = auVar53._0_8_;
  DAT_101da1c10 = auVar69._0_8_;
  DAT_101da1c18 = (undefined8)DAT_10115d850;
  auVar53 = NEON_ext(_DAT_10115d850,_DAT_10115d850,8,1);
  DAT_101da1c20 = auVar53._0_8_;
  DAT_101da1c28 = (undefined8)DAT_10115d860;
  auVar53 = NEON_ext(_DAT_10115d860,_DAT_10115d860,8,1);
  DAT_101da1c30 = auVar53._0_8_;
  DAT_101da1c38 = (undefined8)DAT_10115d870;
  auVar53 = NEON_ext(_DAT_10115d870,_DAT_10115d870,8,1);
  DAT_101da1c40 = auVar53._0_8_;
  DAT_101da1c48 = (undefined8)DAT_10115d880;
  auVar53 = NEON_ext(_DAT_10115d880,_DAT_10115d880,8,1);
  DAT_101da1c50 = auVar53._0_8_;
  DAT_101da1c58 = (undefined8)DAT_10115d890;
  auVar53 = NEON_ext(_DAT_10115d890,_DAT_10115d890,8,1);
  DAT_101da1c60 = auVar53._0_8_;
  DAT_101da1c68 = (undefined8)DAT_10115d8a0;
  auVar53 = NEON_ext(_DAT_10115d8a0,_DAT_10115d8a0,8,1);
  DAT_101da1c70 = auVar53._0_8_;
  DAT_101da1c78 = (undefined8)DAT_10115d8b0;
  auVar53 = NEON_ext(_DAT_10115d8b0,_DAT_10115d8b0,8,1);
  DAT_101da1c80 = auVar53._0_8_;
  DAT_101da1c88 = (undefined8)DAT_10115d8c0;
  auVar53 = NEON_ext(_DAT_10115d8c0,_DAT_10115d8c0,8,1);
  DAT_101da1c90 = auVar53._0_8_;
  DAT_101da1c98 = (undefined8)DAT_10115d8d0;
  auVar53 = NEON_ext(_DAT_10115d8d0,_DAT_10115d8d0,8,1);
  DAT_101da1ca0 = auVar53._0_8_;
  DAT_101da1ca8 = (undefined8)DAT_10115d8e0;
  auVar53 = NEON_ext(_DAT_10115d8e0,_DAT_10115d8e0,8,1);
  DAT_101da1cb0 = auVar53._0_8_;
  DAT_101da1cb8 = (undefined8)DAT_10115d8f0;
  auVar53 = NEON_ext(_DAT_10115d8f0,_DAT_10115d8f0,8,1);
  DAT_101da1cc0 = auVar53._0_8_;
  DAT_101da1cc8 = 0x5000;
  DAT_101da18c8 = 0xa000;
  DAT_101da1ccc = 0x5008;
  DAT_101da18cc = 0xa008;
  DAT_101da1cd0 = 0x5010;
  DAT_101da18d0 = 0xa010;
  DAT_101da1cd4 = 0x5001;
  DAT_101da18d4 = 0xa001;
  DAT_101da1cd8 = 0x5009;
  DAT_101da18d8 = 0xa009;
  DAT_101da1cdc = 0x5011;
  DAT_101da18dc = 0xa011;
  DAT_101da1ce0 = 0x5002;
  DAT_101da18e0 = 0xa002;
  DAT_101da1ce4 = 0x500a;
  DAT_101da18e4 = 0xa00a;
  DAT_101da1ce8 = 0x5012;
  DAT_101da18e8 = 0xa012;
  DAT_101da1cec = 0x5003;
  DAT_101da18ec = 0xa003;
  DAT_101da1cf0 = 0x500b;
  DAT_101da18f0 = 0xa00b;
  DAT_101da1cf4 = 0x5013;
  DAT_101da18f4 = 0xa013;
  puVar27 = &DAT_101da1134;
  do {
    lVar51 = 0;
    puVar34 = puVar27;
    do {
      uVar28 = (uint)lVar51 | (uint)lVar35;
      puVar34[-0xf] = uVar28;
      puVar34[-2] = uVar28 | 0x2c0;
      bVar65 = (byte)uVar28;
      bVar62 = (byte)(uVar28 >> 8);
      uVar63 = (undefined1)(uVar28 >> 0x10);
      uVar64 = (undefined1)(uVar28 >> 0x18);
      auVar70._0_8_ =
           CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14(bVar65,uVar28)))) |
           0x40000000200;
      auVar70[8] = bVar65;
      auVar70[9] = bVar62 | 6;
      auVar70[10] = uVar63;
      auVar70[0xb] = uVar64;
      auVar70[0xc] = bVar65 | 0x40;
      auVar70[0xd] = bVar62;
      auVar70[0xe] = uVar63;
      auVar70[0xf] = uVar64;
      *(ulong *)(puVar34 + -0xe) = auVar70._0_8_;
      auVar53 = NEON_ext(auVar70,auVar70,8,1);
      *(long *)(puVar34 + -0xc) = auVar53._0_8_;
      auVar71._0_8_ =
           CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14(bVar65,uVar28)))) |
           0x44000000240;
      auVar71[8] = bVar65 | 0x40;
      auVar71[9] = bVar62 | 6;
      auVar71[10] = uVar63;
      auVar71[0xb] = uVar64;
      auVar71[0xc] = bVar65 | 0x80;
      auVar71[0xd] = bVar62;
      auVar71[0xe] = uVar63;
      auVar71[0xf] = uVar64;
      auVar67._0_8_ =
           CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(bVar62,CONCAT14(bVar65,uVar28)))) |
           0x48000000280;
      auVar67[8] = bVar65 | 0x80;
      auVar67[9] = bVar62 | 6;
      auVar67[10] = uVar63;
      auVar67[0xb] = uVar64;
      auVar67[0xc] = bVar65 | 0xc0;
      auVar67[0xd] = bVar62;
      auVar67[0xe] = uVar63;
      auVar67[0xf] = uVar64;
      *(ulong *)(puVar34 + -10) = auVar71._0_8_;
      auVar53 = NEON_ext(auVar71,auVar71,8,1);
      *(long *)(puVar34 + -8) = auVar53._0_8_;
      *(ulong *)(puVar34 + -6) = auVar67._0_8_;
      auVar53 = NEON_ext(auVar67,auVar67,8,1);
      *(long *)(puVar34 + -4) = auVar53._0_8_;
      puVar34[-1] = uVar28 | 0x4c0;
      *puVar34 = uVar28 | 0x6c0;
      lVar51 = lVar51 + 8;
      puVar34 = puVar34 + 0x10;
    } while (lVar51 != 0x28);
    lVar35 = lVar35 + 1;
    puVar27 = puVar27 + 0x50;
  } while (lVar35 != 5);
  DAT_101da1738 = (long)DAT_10115d930;
  auVar53 = NEON_ext(_DAT_10115d930,_DAT_10115d930,8,1);
  DAT_101da1740 = auVar53._0_8_;
  DAT_101da1748 = (long)DAT_10115d940;
  auVar53 = NEON_ext(_DAT_10115d940,_DAT_10115d940,8,1);
  DAT_101da1750 = auVar53._0_8_;
  DAT_101da1758 = (long)DAT_10115d950;
  auVar53 = NEON_ext(_DAT_10115d950,_DAT_10115d950,8,1);
  DAT_101da1760 = auVar53._0_8_;
  DAT_101da1768 = (long)DAT_10115d960;
  auVar53 = NEON_ext(_DAT_10115d960,_DAT_10115d960,8,1);
  DAT_101da1770 = auVar53._0_8_;
  DAT_101da1778 = (long)DAT_10115d970;
  auVar53 = NEON_ext(_DAT_10115d970,_DAT_10115d970,8,1);
  DAT_101da1780 = auVar53._0_8_;
  DAT_101da1788 = (long)DAT_10115d980;
  auVar53 = NEON_ext(_DAT_10115d980,_DAT_10115d980,8,1);
  DAT_101da1790 = auVar53._0_8_;
  DAT_101da1798 = (long)DAT_10115d990;
  auVar53 = NEON_ext(_DAT_10115d990,_DAT_10115d990,8,1);
  DAT_101da17a0 = auVar53._0_8_;
  DAT_101da17a8 = (long)DAT_10115d9a0;
  auVar53 = NEON_ext(_DAT_10115d9a0,_DAT_10115d9a0,8,1);
  DAT_101da17b0 = auVar53._0_8_;
  DAT_101da17b8 = (long)DAT_10115d9b0;
  auVar53 = NEON_ext(_DAT_10115d9b0,_DAT_10115d9b0,8,1);
  DAT_101da17c0 = auVar53._0_8_;
  DAT_101da17c8 = (long)DAT_10115d9c0;
  auVar53 = NEON_ext(_DAT_10115d9c0,_DAT_10115d9c0,8,1);
  DAT_101da17d0 = auVar53._0_8_;
  DAT_101da17d8 = (long)DAT_10115d9d0;
  auVar53 = NEON_ext(_DAT_10115d9d0,_DAT_10115d9d0,8,1);
  DAT_101da17e0 = auVar53._0_8_;
  DAT_101da17e8 = (long)DAT_10115d9e0;
  auVar53 = NEON_ext(_DAT_10115d9e0,_DAT_10115d9e0,8,1);
  DAT_101da17f0 = auVar53._0_8_;
  DAT_101da17f8 = (long)DAT_10115d9f0;
  auVar53 = NEON_ext(_DAT_10115d9f0,_DAT_10115d9f0,8,1);
  DAT_101da1800 = auVar53._0_8_;
  DAT_101da1808 = (long)DAT_10115da00;
  auVar53 = NEON_ext(_DAT_10115da00,_DAT_10115da00,8,1);
  DAT_101da1810 = auVar53._0_8_;
  DAT_101da1818 = (long)DAT_10115da10;
  auVar53 = NEON_ext(_DAT_10115da10,_DAT_10115da10,8,1);
  DAT_101da1820 = auVar53._0_8_;
  DAT_101da1828 = (long)DAT_10115da20;
  auVar53 = NEON_ext(_DAT_10115da20,_DAT_10115da20,8,1);
  DAT_101da1830 = auVar53._0_8_;
  DAT_101da1838 = (long)DAT_10115da30;
  auVar53 = NEON_ext(_DAT_10115da30,_DAT_10115da30,8,1);
  DAT_101da1840 = auVar53._0_8_;
  DAT_101da1848 = (long)DAT_10115da40;
  auVar53 = NEON_ext(_DAT_10115da40,_DAT_10115da40,8,1);
  DAT_101da1850 = auVar53._0_8_;
  DAT_101da1858 = (long)DAT_10115da50;
  auVar53 = NEON_ext(_DAT_10115da50,_DAT_10115da50,8,1);
  DAT_101da1860 = auVar53._0_8_;
  DAT_101da1868 = (long)DAT_10115da60;
  auVar53 = NEON_ext(_DAT_10115da60,_DAT_10115da60,8,1);
  DAT_101da1870 = auVar53._0_8_;
  DAT_101da1878 = (long)DAT_10115da70;
  auVar53 = NEON_ext(_DAT_10115da70,_DAT_10115da70,8,1);
  DAT_101da1880 = auVar53._0_8_;
  DAT_101da1888 = (long)DAT_10115da80;
  auVar53 = NEON_ext(_DAT_10115da80,_DAT_10115da80,8,1);
  DAT_101da1890 = auVar53._0_8_;
  DAT_101da1898 = (long)DAT_10115da90;
  auVar53 = NEON_ext(_DAT_10115da90,_DAT_10115da90,8,1);
  DAT_101da18a0 = auVar53._0_8_;
  DAT_101da18a8 = (long)DAT_10115daa0;
  auVar53 = NEON_ext(_DAT_10115daa0,_DAT_10115daa0,8,1);
  DAT_101da18b0 = auVar53._0_8_;
  DAT_101da18b8 = (long)DAT_10115dab0;
  auVar53 = NEON_ext(_DAT_10115dab0,_DAT_10115dab0,8,1);
  DAT_101da18c0 = auVar53._0_8_;
  return 0;
}




undefined8 FUN_10059c098(long param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  int *piVar14;
  undefined4 *puVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  
  uVar5 = FUN_10059827c(param_1,9);
  *param_2 = uVar5;
  if (param_3 == 1) {
    uVar5 = FUN_1005982dc(param_1,5);
    param_2[1] = uVar5;
  }
  else {
    uVar5 = FUN_1005982dc(param_1,3);
    param_2[1] = uVar5;
    if (param_3 < 1) {
      bVar4 = false;
      goto LAB_10059c144;
    }
  }
  puVar15 = param_2 + 0x20;
  iVar6 = param_3;
  do {
    puVar15[-0x1e] = 0xffffffff;
    uVar5 = FUN_1005982dc(param_1,4);
    *puVar15 = uVar5;
    iVar6 = iVar6 + -1;
    puVar15 = puVar15 + 0x3c;
  } while (iVar6 != 0);
  bVar4 = true;
LAB_10059c144:
  lVar16 = 0;
  piVar14 = param_2 + 0x13;
  do {
    if (bVar4) {
      lVar18 = 0;
      piVar17 = piVar14;
      do {
        iVar6 = FUN_10059827c(param_1,0xc);
        piVar17[-0x10] = iVar6;
        uVar7 = FUN_1005982dc(param_1,9);
        piVar17[-0xf] = uVar7;
        if (0x120 < uVar7) {
          return 0xd;
        }
        if (0x1000 < (uint)piVar17[-0x10]) {
          return 0xd;
        }
        uVar9 = FUN_1005982dc(param_1,8);
        lVar11 = 0x100 - (uVar9 & 0xffffffff);
        if (param_4 != 0) {
          lVar11 = 0x102 - (uVar9 & 0xffffffff);
        }
        *(long *)(piVar17 + 0xb) = (long)&DAT_101d9d25c + lVar11 * 4;
        iVar6 = FUN_1005982dc(param_1,4);
        piVar17[-0xe] = iVar6;
        lVar11 = *(long *)(param_1 + 0x198);
        bVar3 = **(byte **)(lVar11 + 0x48b0);
        uVar1 = *(uint *)(lVar11 + 0x48a8);
        uVar7 = uVar1 + 1;
        *(byte **)(lVar11 + 0x48b0) = *(byte **)(lVar11 + 0x48b0) + ((int)uVar7 >> 3);
        *(uint *)(lVar11 + 0x48a8) = uVar7 & 7;
        if ((0x80U >> (ulong)(uVar1 & 0x1f) & (uint)bVar3) == 0) {
          iVar6 = FUN_1005982dc(param_1,5);
          piVar17[-0xb] = iVar6;
          iVar6 = FUN_1005982dc(param_1,5);
          piVar17[-10] = iVar6;
          iVar6 = FUN_1005982dc(param_1,5);
          piVar17[-9] = iVar6;
          iVar8 = FUN_1005982dc(param_1,4);
          iVar6 = FUN_1005982dc(param_1,3);
          iVar10 = 0x120;
          *piVar17 = *(int *)(&DAT_10186a0a0 + (long)(iVar8 + 1) * 4 + (long)param_5 * 0x120) >> 1;
          iVar6 = iVar8 + 1 + iVar6;
          if (iVar6 < 0x16) {
            iVar10 = *(int *)((long)param_5 * 0x120 + (long)iVar6 * 4 + 0x10186a0a4) >> 1;
          }
          piVar17[1] = iVar10;
          piVar17[-0xd] = 0;
          piVar17[-0xc] = 0;
        }
        else {
          iVar6 = FUN_1005982dc(param_1,2);
          piVar17[-0xd] = iVar6;
          lVar11 = *(long *)(param_1 + 0x198);
          bVar3 = **(byte **)(lVar11 + 0x48b0);
          uVar1 = *(uint *)(lVar11 + 0x48a8);
          uVar7 = uVar1 + 1;
          *(byte **)(lVar11 + 0x48b0) = *(byte **)(lVar11 + 0x48b0) + ((int)uVar7 >> 3);
          *(uint *)(lVar11 + 0x48a8) = uVar7 & 7;
          piVar17[-0xc] = ((uint)bVar3 << (ulong)(uVar1 & 0x1f)) >> 7 & 1;
          iVar6 = FUN_1005982dc(param_1,5);
          piVar17[-0xb] = iVar6;
          iVar6 = FUN_1005982dc(param_1,5);
          piVar17[-10] = iVar6;
          piVar17[-9] = 0;
          lVar11 = *(long *)(piVar17 + 0xb);
          iVar6 = FUN_1005982dc(param_1,3);
          *(ulong *)(piVar17 + 5) = lVar11 + (ulong)(uint)(iVar6 << 3) * 4;
          lVar11 = *(long *)(piVar17 + 0xb);
          iVar6 = FUN_1005982dc(param_1,3);
          *(ulong *)(piVar17 + 7) = lVar11 + (ulong)(uint)(iVar6 << 3) * 4;
          lVar11 = *(long *)(piVar17 + 0xb);
          iVar6 = FUN_1005982dc(param_1,3);
          *(ulong *)(piVar17 + 9) = lVar11 + (ulong)(uint)(iVar6 << 3) * 4;
          if (piVar17[-0xd] == 0) {
            return 0xd;
          }
          piVar17[0] = 0x12;
          piVar17[1] = 0x120;
        }
        lVar12 = *(long *)(param_1 + 0x198);
        pbVar13 = *(byte **)(lVar12 + 0x48b0);
        bVar3 = *pbVar13;
        uVar2 = *(uint *)(lVar12 + 0x48a8);
        lVar11 = (long)((int)(uVar2 + 1) >> 3);
        *(byte **)(lVar12 + 0x48b0) = pbVar13 + lVar11;
        uVar7 = uVar2 + 1 & 7;
        *(uint *)(lVar12 + 0x48a8) = uVar7;
        piVar17[2] = ((uint)bVar3 << (ulong)(uVar2 & 0x1f)) >> 7 & 1;
        bVar3 = pbVar13[lVar11];
        lVar11 = lVar11 + (ulong)(uVar7 + 1 >> 3);
        *(byte **)(lVar12 + 0x48b0) = pbVar13 + lVar11;
        uVar1 = uVar2 + 2 & 7;
        *(uint *)(lVar12 + 0x48a8) = uVar1;
        piVar17[3] = ((uint)bVar3 << (ulong)uVar7) >> 7 & 1;
        bVar3 = pbVar13[lVar11];
        *(byte **)(lVar12 + 0x48b0) = pbVar13 + lVar11 + (ulong)(uVar1 + 1 >> 3);
        *(uint *)(lVar12 + 0x48a8) = uVar2 + 3 & 7;
        piVar17[4] = ((uint)bVar3 << (ulong)uVar1) >> 7 & 1;
        lVar18 = lVar18 + 1;
        piVar17 = piVar17 + 0x3c;
      } while (lVar18 < param_3);
    }
    lVar16 = lVar16 + 1;
    piVar14 = piVar14 + 0x1e;
    if (1 < lVar16) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_10059c48c(long param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  int *piVar12;
  
  uVar3 = FUN_10059827c(param_1,8);
  *param_2 = uVar3;
  if (param_3 == 1) {
    lVar8 = *(long *)(param_1 + 0x198);
    bVar2 = **(byte **)(lVar8 + 0x48b0);
    uVar1 = *(uint *)(lVar8 + 0x48a8);
    uVar5 = uVar1 + 1;
    *(byte **)(lVar8 + 0x48b0) = *(byte **)(lVar8 + 0x48b0) + ((int)uVar5 >> 3);
    *(uint *)(lVar8 + 0x48a8) = uVar5 & 7;
    param_2[1] = ((uint)bVar2 << (ulong)(uVar1 & 0x1f)) >> 7 & 1;
  }
  else {
    uVar3 = FUN_1005982dc(param_1,2);
    param_2[1] = uVar3;
    if (param_3 < 1) {
      return 0;
    }
  }
  lVar8 = 0;
  piVar12 = param_2 + 0x13;
  do {
    iVar4 = FUN_10059827c(param_1,0xc);
    piVar12[-0x10] = iVar4;
    uVar5 = FUN_1005982dc(param_1,9);
    piVar12[-0xf] = uVar5;
    if (0x120 < uVar5) {
      return 0xd;
    }
    uVar7 = FUN_1005982dc(param_1,8);
    lVar9 = 0x100 - (uVar7 & 0xffffffff);
    if (param_4 != 0) {
      lVar9 = 0x102 - (uVar7 & 0xffffffff);
    }
    *(long *)(piVar12 + 0xb) = (long)&DAT_101d9d25c + lVar9 * 4;
    iVar4 = FUN_10059827c(param_1,9);
    piVar12[-0xe] = iVar4;
    lVar9 = *(long *)(param_1 + 0x198);
    bVar2 = **(byte **)(lVar9 + 0x48b0);
    uVar1 = *(uint *)(lVar9 + 0x48a8);
    uVar5 = uVar1 + 1;
    *(byte **)(lVar9 + 0x48b0) = *(byte **)(lVar9 + 0x48b0) + ((int)uVar5 >> 3);
    *(uint *)(lVar9 + 0x48a8) = uVar5 & 7;
    if ((0x80U >> (ulong)(uVar1 & 0x1f) & (uint)bVar2) == 0) {
      iVar4 = FUN_1005982dc(param_1,5);
      piVar12[-0xb] = iVar4;
      iVar4 = FUN_1005982dc(param_1,5);
      piVar12[-10] = iVar4;
      iVar4 = FUN_1005982dc(param_1,5);
      piVar12[-9] = iVar4;
      iVar4 = FUN_1005982dc(param_1,4);
      iVar6 = FUN_1005982dc(param_1,3);
      *piVar12 = *(int *)(&DAT_10186a0a0 + (long)(iVar4 + 1) * 4 + (long)param_5 * 0x120) >> 1;
      piVar12[1] = *(int *)(&DAT_10186a0a0 +
                           (long)(iVar6 + iVar4 + 1 + 1) * 4 + (long)param_5 * 0x120) >> 1;
      piVar12[-0xd] = 0;
      piVar12[-0xc] = 0;
    }
    else {
      iVar4 = FUN_1005982dc(param_1,2);
      piVar12[-0xd] = iVar4;
      lVar9 = *(long *)(param_1 + 0x198);
      bVar2 = **(byte **)(lVar9 + 0x48b0);
      uVar1 = *(uint *)(lVar9 + 0x48a8);
      uVar5 = uVar1 + 1;
      *(byte **)(lVar9 + 0x48b0) = *(byte **)(lVar9 + 0x48b0) + ((int)uVar5 >> 3);
      *(uint *)(lVar9 + 0x48a8) = uVar5 & 7;
      piVar12[-0xc] = ((uint)bVar2 << (ulong)(uVar1 & 0x1f)) >> 7 & 1;
      iVar4 = FUN_1005982dc(param_1,5);
      piVar12[-0xb] = iVar4;
      iVar4 = FUN_1005982dc(param_1,5);
      piVar12[-10] = iVar4;
      piVar12[-9] = 0;
      lVar9 = *(long *)(piVar12 + 0xb);
      iVar4 = FUN_1005982dc(param_1,3);
      *(ulong *)(piVar12 + 5) = lVar9 + (ulong)(uint)(iVar4 << 3) * 4;
      lVar9 = *(long *)(piVar12 + 0xb);
      iVar4 = FUN_1005982dc(param_1,3);
      *(ulong *)(piVar12 + 7) = lVar9 + (ulong)(uint)(iVar4 << 3) * 4;
      lVar9 = *(long *)(piVar12 + 0xb);
      iVar4 = FUN_1005982dc(param_1,3);
      *(ulong *)(piVar12 + 9) = lVar9 + (ulong)(uint)(iVar4 << 3) * 4;
      if (piVar12[-0xd] == 0) {
        return 0xd;
      }
      if (piVar12[-0xd] == 2) {
        iVar4 = 0x12;
      }
      else if (param_5 == 8) {
        iVar4 = 0x36;
      }
      else {
        iVar4 = 0x1b;
      }
      *piVar12 = iVar4;
      piVar12[1] = 0x120;
    }
    lVar9 = *(long *)(param_1 + 0x198);
    pbVar10 = *(byte **)(lVar9 + 0x48b0);
    bVar2 = *pbVar10;
    uVar1 = *(uint *)(lVar9 + 0x48a8);
    lVar11 = (long)((int)(uVar1 + 1) >> 3);
    *(byte **)(lVar9 + 0x48b0) = pbVar10 + lVar11;
    uVar5 = uVar1 + 1 & 7;
    *(uint *)(lVar9 + 0x48a8) = uVar5;
    piVar12[3] = ((uint)bVar2 << (ulong)(uVar1 & 0x1f)) >> 7 & 1;
    bVar2 = pbVar10[lVar11];
    *(byte **)(lVar9 + 0x48b0) = pbVar10 + lVar11 + (ulong)(uVar5 + 1 >> 3);
    *(uint *)(lVar9 + 0x48a8) = uVar1 + 2 & 7;
    piVar12[4] = ((uint)bVar2 << (ulong)uVar5) >> 7 & 1;
    lVar8 = lVar8 + 1;
    piVar12 = piVar12 + 0x3c;
  } while (lVar8 < param_3);
  return 0;
}




undefined8 FUN_10059c810(undefined8 param_1,undefined4 *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  bVar2 = (&DAT_10115eb10)[param_3[3]];
  bVar3 = (&DAT_10115eb20)[param_3[3]];
  *param_4 = 0;
  uVar6 = (uint)bVar2;
  if (param_3[4] == 2) {
    iVar7 = 0x12;
    *param_4 = (bVar3 + uVar6) * 0x12;
    if (param_3[5] != 0) {
      uVar4 = FUN_1005982dc(param_1,bVar2);
      *param_2 = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[1] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[2] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[3] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[4] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[5] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[6] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[7] = uVar4;
      param_2 = param_2 + 8;
      *param_4 = *param_4 - uVar6;
      iVar7 = 9;
    }
    uVar6 = iVar7 - 1;
    puVar8 = param_2;
    do {
      uVar4 = FUN_1005982dc(param_1,bVar2);
      *puVar8 = uVar4;
      iVar7 = iVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (iVar7 != 0);
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[(ulong)uVar6 + 1] = uVar4;
    param_2 = param_2 + uVar6;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[2] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[3] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[4] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[5] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[6] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[7] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[8] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[9] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[10] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0xb] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0xc] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0xd] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0xe] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0xf] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0x10] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0x11] = uVar4;
    uVar4 = FUN_1005982dc(param_1,bVar3);
    param_2[0x12] = uVar4;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
  }
  else {
    uVar1 = *param_3;
    uVar5 = (uint)bVar3;
    if ((int)uVar1 < 0) {
      uVar4 = FUN_1005982dc(param_1,bVar2);
      *param_2 = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[1] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[2] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[3] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[4] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[5] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[6] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[7] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[8] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[9] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar2);
      param_2[10] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0xb] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0xc] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0xd] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0xe] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0xf] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x10] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x11] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x12] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x13] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x14] = uVar4;
      iVar7 = uVar5 * 10 + uVar6 * 0xb;
    }
    else {
      *param_4 = 0;
      if ((uVar1 >> 3 & 1) == 0) {
        uVar4 = FUN_1005982dc(param_1,bVar2);
        *param_2 = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[1] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[2] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[3] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[4] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[5] = uVar4;
        *param_4 = *param_4 + uVar6 * 6;
      }
      if ((uVar1 >> 2 & 1) == 0) {
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[6] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[7] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[8] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[9] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar2);
        param_2[10] = uVar4;
        *param_4 = *param_4 + uVar6 * 5;
      }
      if ((uVar1 >> 1 & 1) == 0) {
        uVar4 = FUN_1005982dc(param_1,bVar3);
        param_2[0xb] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar3);
        param_2[0xc] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar3);
        param_2[0xd] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar3);
        param_2[0xe] = uVar4;
        uVar4 = FUN_1005982dc(param_1,bVar3);
        param_2[0xf] = uVar4;
        *param_4 = *param_4 + uVar5 * 5;
      }
      if ((uVar1 & 1) != 0) goto LAB_10059cd64;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x10] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x11] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x12] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x13] = uVar4;
      uVar4 = FUN_1005982dc(param_1,bVar3);
      param_2[0x14] = uVar4;
      iVar7 = *param_4 + (uint)bVar3 + uVar5 * 4;
    }
    *param_4 = iVar7;
  }
LAB_10059cd64:
  param_2[0x15] = 0;
  return 0;
}




undefined8 FUN_10059cd84(undefined8 param_1,void *param_2,long param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar6;
  
  *param_5 = 0;
  puVar2 = &DAT_101da10f8 + *(uint *)(param_3 + 0xc);
  if (param_4 != 0) {
    puVar2 = (uint *)((long)&DAT_101da18f8 + (ulong)(*(uint *)(param_3 + 0xc) >> 1) * 4);
  }
  uVar8 = *puVar2;
  *(uint *)(param_3 + 0x4c) = uVar8 >> 0xf & 1;
  if (*(int *)(param_3 + 0x10) == 2) {
    uVar5 = 1;
    if (*(int *)(param_3 + 0x14) != 0) {
      uVar5 = 2;
    }
    uVar6 = (ulong)uVar5;
  }
  else {
    uVar6 = 0;
  }
  lVar9 = 0;
  uVar5 = uVar8 >> 0xc;
  do {
    uVar1 = uVar8 & 7;
    uVar8 = uVar8 >> 3;
    bVar3 = (&DAT_10115eb30)[lVar9 + (ulong)(uVar5 & 7) * 4 + uVar6 * 0x18];
    uVar11 = (uint)bVar3;
    if (uVar1 == 0) {
      if (uVar11 != 0) {
        uVar7 = (ulong)(uVar11 - 1);
        if (uVar11 < 2) {
          uVar7 = 0;
        }
        _bzero(param_2,uVar7 * 4 + 4);
        param_2 = (void *)((long)param_2 + uVar7 * 4 + 4);
      }
    }
    else {
      if (bVar3 != 0) {
        lVar10 = 0;
        do {
          uVar4 = FUN_1005982dc(param_1,uVar1);
          *(undefined4 *)((long)param_2 + lVar10 * 4) = uVar4;
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < (int)(uint)bVar3);
        lVar10 = 1;
        if (1 < bVar3) {
          lVar10 = (ulong)(bVar3 - 1) + 1;
        }
        param_2 = (void *)((long)param_2 + lVar10 * 4);
      }
      *param_5 = *param_5 + uVar11 * uVar1;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  _bzero(param_2,(ulong)(((int)uVar6 << 1 | 1U) - 1) << 2 | 4);
  return 0;
}




void FUN_10059cf04(long param_1,float *param_2,int *param_3,long param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  short *psVar20;
  uint uVar21;
  float *pfVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  long *plVar26;
  uint *puVar27;
  uint *puVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  byte *pbVar33;
  uint uVar34;
  int *piVar35;
  short *psVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 auVar42 [16];
  uint local_90 [7];
  int local_74 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  iVar40 = *(int *)(param_4 + 0x50);
  iVar41 = *(int *)(param_4 + 4);
  uVar34 = -*(int *)(*(long *)(param_1 + 0x198) + 0x48a8) & 7;
  iVar7 = FUN_10059827c(param_1,uVar34);
  iVar14 = *(int *)(param_4 + 0x44);
  iVar39 = *(int *)(param_4 + 0x48);
  if (iVar39 < iVar14) {
LAB_10059da1c:
    uVar10 = 0xd;
    lVar12 = *(long *)PTR____stack_chk_guard_101444218;
  }
  else {
    iVar11 = *(int *)(param_4 + 8);
    if (iVar11 - iVar14 == 0 || iVar11 < iVar14) {
      local_74[1] = 0;
      local_74[2] = 0;
      local_74[0] = iVar11;
    }
    else {
      local_74[0] = iVar14;
      if (iVar11 - iVar39 == 0 || iVar11 < iVar39) {
        local_74[1] = iVar11 - iVar14;
        local_74[2] = 0;
      }
      else {
        local_74[1] = iVar39 - iVar14;
        local_74[2] = iVar11 - iVar39;
      }
    }
    if (local_74[0] < 0) {
      local_74[0] = 0;
    }
    if (local_74[1] < 0) {
      local_74[1] = 0;
    }
    uVar21 = iVar7 << (ulong)(0x20 - uVar34 & 0x1f);
    iVar14 = (iVar41 - param_6) - uVar34;
    if (local_74[2] < 0) {
      local_74[2] = 0;
    }
    uVar1 = iVar40 + 1;
    iVar39 = 0x120 - iVar11 >> 1;
    pfVar22 = param_2;
    if (*(int *)(param_4 + 0x10) == 2) {
      local_90[0] = 0xffffffff;
      local_90[3] = -1;
      if (*(int *)(param_4 + 0x14) == 0) {
        local_90[2] = 0xffffffff;
        plVar26 = &DAT_101da0f50 + (long)param_5 * 3;
        puVar18 = &DAT_101da1028 + (long)param_5 * 3;
      }
      else {
        local_90[0] = 2;
        local_90[2] = 2;
        plVar26 = &DAT_101da0f48 + (long)param_5 * 3;
        puVar18 = &DAT_101da1020 + (long)param_5 * 3;
      }
      lVar12 = 0;
      uVar23 = 0;
      uVar13 = 0;
      iVar41 = 0;
      uVar17 = 3;
      puVar15 = (uint *)*puVar18;
      fVar37 = 0.0;
      puVar27 = (uint *)*plVar26;
      iVar40 = local_74[0];
      local_90[1] = local_90[0];
      while( true ) {
        uVar16 = *(uint *)(param_4 + lVar12 * 4 + 0x18);
        if (iVar40 != 0) {
          psVar36 = (short *)(&PTR_DAT_1014a2638)[(ulong)uVar16 * 2];
          puVar28 = puVar27;
          piVar25 = param_3;
          do {
            puVar27 = puVar28;
            param_3 = piVar25;
            if (uVar23 == 0) {
              uVar23 = *puVar28;
              pfVar22 = param_2 + (int)puVar28[1];
              puVar27 = puVar28 + 4;
              uVar17 = puVar28[2];
              uVar13 = puVar28[3];
              param_3 = piVar25 + 1;
              lVar19 = (long)(*piVar25 << (ulong)(uVar1 & 0x1f));
              if (uVar17 == 3) {
                fVar37 = *(float *)(*(long *)(param_4 + 0x70) + lVar19 * 4);
                uVar17 = 3;
                iVar41 = 1;
              }
              else {
                fVar37 = *(float *)(*(long *)(param_4 + (long)(int)uVar17 * 8 + 0x58) + lVar19 * 4);
                iVar41 = 3;
              }
            }
            if ((int)uVar34 < 0x18) {
              uVar8 = 0x17 - uVar34 & 0xfffffff8;
              iVar7 = uVar34 + 8;
              uVar30 = 0x18 - uVar34;
              do {
                pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
                *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
                uVar21 = (uint)*pbVar33 << (ulong)(uVar30 & 0x1f) | uVar21;
                uVar34 = uVar34 + 8;
                uVar30 = uVar30 - 8;
              } while ((int)uVar34 < 0x18);
              iVar14 = (iVar14 + -8) - uVar8;
              uVar34 = iVar7 + uVar8;
            }
            sVar5 = *psVar36;
            uVar8 = (uint)sVar5;
            psVar20 = psVar36;
            if (sVar5 < 0) {
              do {
                psVar3 = psVar20 + (1 - (long)(short)uVar8);
                psVar20 = psVar20 + 1;
                if ((uVar21 & 0x80000000) != 0) {
                  psVar20 = psVar3;
                }
                uVar34 = uVar34 - 1;
                uVar21 = uVar21 << 1;
                uVar8 = (uint)*psVar20;
              } while ((int)uVar8 < 0);
            }
            iVar7 = (int)uVar8 >> 4;
            uVar8 = uVar8 & 0xf;
            if (iVar7 == 0) {
              *pfVar22 = 0.0;
            }
            else if ((iVar7 == 0xf) && (0xf < uVar16)) {
              uVar30 = *(uint *)(&DAT_1014a2630 + (ulong)uVar16 * 0x10);
              local_90[(int)uVar17] = uVar13;
              if ((int)uVar34 < 0x18) {
                uVar32 = 0x17 - uVar34 & 0xfffffff8;
                iVar7 = uVar34 + 8;
                uVar31 = 0x18 - uVar34;
                do {
                  pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
                  *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
                  uVar21 = (uint)*pbVar33 << (ulong)(uVar31 & 0x1f) | uVar21;
                  uVar34 = uVar34 + 8;
                  uVar31 = uVar31 - 8;
                } while ((int)uVar34 < 0x18);
                iVar14 = (iVar14 + -8) - uVar32;
                uVar34 = iVar7 + uVar32;
              }
              uVar34 = (uVar34 - 1) - uVar30;
              uVar32 = uVar21 << (ulong)(uVar30 & 0x1f);
              fVar38 = (float)(&DAT_101d94d60)
                              [(int)((uVar21 >> (ulong)(0x20 - uVar30 & 0x1f)) + 0xf)];
              if ((uVar32 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)
                                 [(int)((uVar21 >> (ulong)(0x20 - uVar30 & 0x1f)) + 0xf)];
              }
              *pfVar22 = fVar37 * fVar38;
              uVar21 = uVar32 << 1;
            }
            else {
              local_90[(int)uVar17] = uVar13;
              fVar38 = (float)(&DAT_101d94d60)[iVar7];
              if ((uVar21 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)[iVar7];
              }
              *pfVar22 = fVar37 * fVar38;
              uVar34 = uVar34 - 1;
              uVar21 = uVar21 << 1;
            }
            lVar19 = (long)iVar41;
            if (uVar8 == 0) {
              pfVar22[lVar19] = 0.0;
            }
            else if ((uVar8 == 0xf) && (0xf < uVar16)) {
              uVar8 = *(uint *)(&DAT_1014a2630 + (ulong)uVar16 * 0x10);
              local_90[(int)uVar17] = uVar13;
              if ((int)uVar34 < 0x18) {
                uVar30 = 0x17 - uVar34 & 0xfffffff8;
                iVar7 = uVar34 + 8;
                uVar32 = 0x18 - uVar34;
                do {
                  pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
                  *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
                  uVar21 = (uint)*pbVar33 << (ulong)(uVar32 & 0x1f) | uVar21;
                  uVar34 = uVar34 + 8;
                  uVar32 = uVar32 - 8;
                } while ((int)uVar34 < 0x18);
                iVar14 = (iVar14 + -8) - uVar30;
                uVar34 = iVar7 + uVar30;
              }
              uVar34 = (uVar34 - 1) - uVar8;
              uVar30 = uVar21 << (ulong)(uVar8 & 0x1f);
              fVar38 = (float)(&DAT_101d94d60)
                              [(int)((uVar21 >> (ulong)(0x20 - uVar8 & 0x1f)) + 0xf)];
              if ((uVar30 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)
                                 [(int)((uVar21 >> (ulong)(0x20 - uVar8 & 0x1f)) + 0xf)];
              }
              pfVar22[lVar19] = fVar37 * fVar38;
              uVar21 = uVar30 << 1;
            }
            else {
              local_90[(int)uVar17] = uVar13;
              fVar38 = (float)(&DAT_101d94d60)[uVar8];
              if ((uVar21 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)[uVar8];
              }
              pfVar22[lVar19] = fVar37 * fVar38;
              uVar34 = uVar34 - 1;
              uVar21 = uVar21 << 1;
            }
            pfVar22 = pfVar22 + lVar19 * 2;
            iVar40 = iVar40 + -1;
            uVar23 = uVar23 - 1;
            puVar28 = puVar27;
            piVar25 = param_3;
          } while (iVar40 != 0);
        }
        lVar12 = lVar12 + 1;
        if (lVar12 == 2) break;
        iVar40 = local_74[lVar12];
      }
      if ((iVar39 != 0) && (0 < (int)(iVar14 + uVar34))) {
        while( true ) {
          if (param_2 + 0x245 <= pfVar22) goto LAB_10059da1c;
          psVar36 = (short *)(&PTR_DAT_1014a2838)[(ulong)*(uint *)(param_4 + 0x54) * 2];
          if ((int)uVar34 < 0x18) {
            uVar16 = 0x17 - uVar34 & 0xfffffff8;
            iVar40 = uVar34 + 8;
            uVar8 = 0x18 - uVar34;
            do {
              pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
              *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
              uVar21 = (uint)*pbVar33 << (ulong)(uVar8 & 0x1f) | uVar21;
              uVar34 = uVar34 + 8;
              uVar8 = uVar8 - 8;
            } while ((int)uVar34 < 0x18);
            iVar14 = (iVar14 + -8) - uVar16;
            uVar34 = iVar40 + uVar16;
          }
          while( true ) {
            sVar5 = *psVar36;
            if (-1 < sVar5) break;
            psVar20 = psVar36 + (1 - (long)sVar5);
            psVar36 = psVar36 + 1;
            if ((uVar21 & 0x80000000) != 0) {
              psVar36 = psVar20;
            }
            uVar34 = uVar34 - 1;
            uVar21 = uVar21 << 1;
          }
          if ((int)(uVar34 + iVar14) < 1) break;
          uVar16 = 0;
          do {
            if ((uVar16 & 1) == 0) {
              if (uVar23 == 0) {
                uVar23 = *puVar27;
                pfVar22 = param_2 + (int)puVar27[1];
                uVar17 = puVar27[2];
                uVar13 = puVar27[3];
                lVar12 = (long)(*param_3 << (ulong)(uVar1 & 0x1f));
                if (uVar17 == 3) {
                  fVar37 = *(float *)(*(long *)(param_4 + 0x70) + lVar12 * 4);
                  uVar17 = 3;
                  iVar41 = 1;
                  puVar27 = puVar27 + 4;
                  param_3 = param_3 + 1;
                }
                else {
                  fVar37 = *(float *)(*(long *)(param_4 + (long)(int)uVar17 * 8 + 0x58) + lVar12 * 4
                                     );
                  iVar41 = 3;
                  puVar27 = puVar27 + 4;
                  param_3 = param_3 + 1;
                }
              }
              uVar23 = uVar23 - 1;
            }
            if ((8U >> (ulong)(uVar16 & 0x1f) & (int)sVar5) == 0) {
              *pfVar22 = 0.0;
            }
            else {
              local_90[(int)uVar17] = uVar13;
              if ((int)(uVar34 + iVar14) < 1) break;
              fVar38 = fVar37;
              if ((uVar21 & 0x80000000) != 0) {
                fVar38 = -fVar37;
              }
              *pfVar22 = fVar38;
              uVar34 = uVar34 - 1;
              uVar21 = uVar21 << 1;
            }
            pfVar22 = pfVar22 + iVar41;
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < 4);
          iVar39 = iVar39 + -1;
          if ((iVar39 == 0) || ((int)(iVar14 + uVar34) < 1)) goto LAB_10059da68;
        }
        uVar34 = -iVar14;
      }
LAB_10059da68:
      if ((int)uVar17 < 3) {
        while( true ) {
          if (0 < (int)uVar23) {
            iVar39 = uVar23 + 1;
            uVar21 = 0xfffffffe;
            if (-2 < (int)~uVar23) {
              uVar21 = ~uVar23;
            }
            uVar21 = iVar39 + uVar21;
            pfVar9 = pfVar22;
            do {
              *pfVar9 = 0.0;
              pfVar9[3] = 0.0;
              iVar39 = iVar39 + -1;
              pfVar9 = pfVar9 + 6;
            } while (1 < iVar39);
            pfVar22 = pfVar22 + (ulong)uVar21 * 6 + 6;
          }
          if ((puVar15 <= puVar27) || (pfVar22 = param_2 + (int)puVar27[1], puVar27[2] == 0)) break;
          uVar23 = *puVar27;
          puVar27 = puVar27 + 4;
        }
      }
      iVar39 = local_90[0] + 1;
      iVar40 = local_90[1] + 1;
      iVar41 = local_90[3] + 1;
      *(ulong *)(param_4 + 0x30) = CONCAT44(iVar40,iVar39);
      auVar42._4_4_ = iVar40;
      auVar42._0_4_ = iVar39;
      auVar42._8_4_ = local_90[2] + 1;
      auVar42._12_4_ = iVar41;
      auVar6._4_4_ = iVar40;
      auVar6._0_4_ = iVar39;
      auVar6._8_4_ = local_90[2] + 1;
      auVar6._12_4_ = iVar41;
      auVar42 = NEON_ext(auVar42,auVar6,8,1);
      *(long *)(param_4 + 0x38) = auVar42._0_8_;
      uVar21 = local_90[0];
      if ((int)local_90[0] <= (int)local_90[1]) {
        uVar21 = local_90[1];
      }
      if ((int)uVar21 <= (int)local_90[2]) {
        uVar21 = local_90[2];
      }
      puVar4 = (undefined4 *)((long)&DAT_101d9d894 + (long)iVar41 * 4 + (long)param_5 * 0x5c);
      if (uVar21 + 1 != 0) {
        puVar4 = &DAT_101d9dbd0 + (long)param_5 * 0xe + (long)(int)(uVar21 + 1);
      }
      *(undefined4 *)(param_4 + 0x40) = *puVar4;
    }
    else {
      lVar12 = 0;
      iVar40 = 0;
      iVar41 = 0;
      piVar25 = (int *)&DAT_10115eb78;
      if (*(int *)(param_4 + 0x4c) == 0) {
        piVar25 = &DAT_10115ebd0;
      }
      piVar29 = (int *)(&DAT_101da0f58)[(long)param_5 * 3];
      iVar11 = -1;
      fVar37 = 0.0;
      iVar7 = local_74[0];
      while( true ) {
        uVar23 = *(uint *)(param_4 + lVar12 * 4 + 0x18);
        if (iVar7 != 0) {
          psVar36 = (short *)(&PTR_DAT_1014a2638)[(ulong)uVar23 * 2];
          uVar17 = iVar7 - 1;
          pfVar9 = pfVar22;
          piVar24 = piVar25;
          piVar35 = param_3;
          do {
            piVar25 = piVar24;
            param_3 = piVar35;
            if (iVar40 == 0) {
              iVar40 = *piVar29;
              iVar41 = piVar29[1];
              piVar29 = piVar29 + 2;
              if (iVar41 == 0x15) {
                iVar41 = 0x15;
                fVar37 = 0.0;
              }
              else {
                param_3 = piVar35 + 1;
                piVar25 = piVar24 + 1;
                fVar37 = *(float *)(*(long *)(param_4 + 0x70) +
                                   (long)(*piVar24 + *piVar35 << (ulong)(uVar1 & 0x1f)) * 4);
              }
            }
            if ((int)uVar34 < 0x18) {
              uVar13 = 0x17 - uVar34 & 0xfffffff8;
              iVar2 = uVar34 + 8;
              uVar16 = 0x18 - uVar34;
              do {
                pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
                *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
                uVar21 = (uint)*pbVar33 << (ulong)(uVar16 & 0x1f) | uVar21;
                uVar34 = uVar34 + 8;
                uVar16 = uVar16 - 8;
              } while ((int)uVar34 < 0x18);
              iVar14 = (iVar14 + -8) - uVar13;
              uVar34 = iVar2 + uVar13;
            }
            sVar5 = *psVar36;
            uVar13 = (uint)sVar5;
            psVar20 = psVar36;
            if (sVar5 < 0) {
              do {
                psVar3 = psVar20 + (1 - (long)(short)uVar13);
                psVar20 = psVar20 + 1;
                if ((uVar21 & 0x80000000) != 0) {
                  psVar20 = psVar3;
                }
                uVar34 = uVar34 - 1;
                uVar21 = uVar21 << 1;
                uVar13 = (uint)*psVar20;
              } while ((int)uVar13 < 0);
            }
            iVar2 = (int)uVar13 >> 4;
            uVar13 = uVar13 & 0xf;
            if (iVar2 == 0) {
              *pfVar9 = 0.0;
            }
            else if ((iVar2 == 0xf) && (0xf < uVar23)) {
              uVar16 = *(uint *)(&DAT_1014a2630 + (ulong)uVar23 * 0x10);
              if ((int)uVar34 < 0x18) {
                uVar8 = 0x17 - uVar34 & 0xfffffff8;
                iVar11 = uVar34 + 8;
                uVar30 = 0x18 - uVar34;
                do {
                  pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
                  *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
                  uVar21 = (uint)*pbVar33 << (ulong)(uVar30 & 0x1f) | uVar21;
                  uVar34 = uVar34 + 8;
                  uVar30 = uVar30 - 8;
                } while ((int)uVar34 < 0x18);
                iVar14 = (iVar14 + -8) - uVar8;
                uVar34 = iVar11 + uVar8;
              }
              uVar34 = (uVar34 - 1) - uVar16;
              uVar8 = uVar21 << (ulong)(uVar16 & 0x1f);
              fVar38 = (float)(&DAT_101d94d60)
                              [(int)((uVar21 >> (ulong)(0x20 - uVar16 & 0x1f)) + 0xf)];
              if ((uVar8 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)
                                 [(int)((uVar21 >> (ulong)(0x20 - uVar16 & 0x1f)) + 0xf)];
              }
              *pfVar9 = fVar37 * fVar38;
              uVar21 = uVar8 << 1;
              iVar11 = iVar41;
            }
            else {
              fVar38 = (float)(&DAT_101d94d60)[iVar2];
              if ((uVar21 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)[iVar2];
              }
              *pfVar9 = fVar37 * fVar38;
              uVar34 = uVar34 - 1;
              uVar21 = uVar21 << 1;
              iVar11 = iVar41;
            }
            if (uVar13 == 0) {
              pfVar9[1] = 0.0;
            }
            else if ((uVar13 == 0xf) && (0xf < uVar23)) {
              uVar13 = *(uint *)(&DAT_1014a2630 + (ulong)uVar23 * 0x10);
              if ((int)uVar34 < 0x18) {
                uVar16 = 0x17 - uVar34 & 0xfffffff8;
                iVar11 = uVar34 + 8;
                uVar8 = 0x18 - uVar34;
                do {
                  pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
                  *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
                  uVar21 = (uint)*pbVar33 << (ulong)(uVar8 & 0x1f) | uVar21;
                  uVar34 = uVar34 + 8;
                  uVar8 = uVar8 - 8;
                } while ((int)uVar34 < 0x18);
                iVar14 = (iVar14 + -8) - uVar16;
                uVar34 = iVar11 + uVar16;
              }
              uVar34 = (uVar34 - 1) - uVar13;
              uVar16 = uVar21 << (ulong)(uVar13 & 0x1f);
              fVar38 = (float)(&DAT_101d94d60)
                              [(int)((uVar21 >> (ulong)(0x20 - uVar13 & 0x1f)) + 0xf)];
              if ((uVar16 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)
                                 [(int)((uVar21 >> (ulong)(0x20 - uVar13 & 0x1f)) + 0xf)];
              }
              pfVar9[1] = fVar37 * fVar38;
              uVar21 = uVar16 << 1;
              iVar11 = iVar41;
            }
            else {
              fVar38 = (float)(&DAT_101d94d60)[uVar13];
              if ((uVar21 & 0x80000000) != 0) {
                fVar38 = -(float)(&DAT_101d94d60)[uVar13];
              }
              pfVar9[1] = fVar37 * fVar38;
              uVar34 = uVar34 - 1;
              uVar21 = uVar21 << 1;
              iVar11 = iVar41;
            }
            pfVar9 = pfVar9 + 2;
            iVar7 = iVar7 + -1;
            iVar40 = iVar40 + -1;
            piVar24 = piVar25;
            piVar35 = param_3;
          } while (iVar7 != 0);
          pfVar22 = pfVar22 + (ulong)uVar17 * 2 + 2;
        }
        lVar12 = lVar12 + 1;
        if (lVar12 == 3) break;
        iVar7 = local_74[lVar12];
      }
      if ((iVar39 != 0) && (0 < (int)(iVar14 + uVar34))) {
        while( true ) {
          psVar36 = (short *)(&PTR_DAT_1014a2838)[(ulong)*(uint *)(param_4 + 0x54) * 2];
          if ((int)uVar34 < 0x18) {
            uVar23 = 0x17 - uVar34 & 0xfffffff8;
            iVar7 = uVar34 + 8;
            uVar17 = 0x18 - uVar34;
            do {
              pbVar33 = *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0);
              *(byte **)(*(long *)(param_1 + 0x198) + 0x48b0) = pbVar33 + 1;
              uVar21 = (uint)*pbVar33 << (ulong)(uVar17 & 0x1f) | uVar21;
              uVar34 = uVar34 + 8;
              uVar17 = uVar17 - 8;
            } while ((int)uVar34 < 0x18);
            iVar14 = (iVar14 + -8) - uVar23;
            uVar34 = iVar7 + uVar23;
          }
          while( true ) {
            sVar5 = *psVar36;
            if (-1 < sVar5) break;
            psVar20 = psVar36 + (1 - (long)sVar5);
            psVar36 = psVar36 + 1;
            if ((uVar21 & 0x80000000) != 0) {
              psVar36 = psVar20;
            }
            uVar34 = uVar34 - 1;
            uVar21 = uVar21 << 1;
          }
          if ((int)(uVar34 + iVar14) < 1) break;
          uVar23 = 0;
          piVar24 = piVar25;
          piVar35 = param_3;
          do {
            piVar25 = piVar24;
            param_3 = piVar35;
            if ((uVar23 & 1) == 0) {
              if (iVar40 == 0) {
                iVar40 = *piVar29;
                iVar41 = piVar29[1];
                piVar29 = piVar29 + 2;
                if (iVar41 == 0x15) {
                  iVar41 = 0x15;
                  fVar37 = 0.0;
                }
                else {
                  param_3 = piVar35 + 1;
                  piVar25 = piVar24 + 1;
                  fVar37 = *(float *)(*(long *)(param_4 + 0x70) +
                                     (long)(*piVar24 + *piVar35 << (ulong)(uVar1 & 0x1f)) * 4);
                }
              }
              iVar40 = iVar40 + -1;
            }
            if ((8U >> (ulong)(uVar23 & 0x1f) & (int)sVar5) == 0) {
              *pfVar22 = 0.0;
            }
            else {
              iVar11 = iVar41;
              if ((int)(uVar34 + iVar14) < 1) break;
              fVar38 = fVar37;
              if ((uVar21 & 0x80000000) != 0) {
                fVar38 = -fVar37;
              }
              *pfVar22 = fVar38;
              uVar34 = uVar34 - 1;
              uVar21 = uVar21 << 1;
            }
            pfVar22 = pfVar22 + 1;
            uVar23 = uVar23 + 1;
            piVar24 = piVar25;
            piVar35 = param_3;
          } while ((int)uVar23 < 4);
          iVar39 = iVar39 + -1;
          if ((iVar39 == 0) || ((int)(iVar14 + uVar34) < 1)) goto LAB_10059da34;
        }
        uVar34 = -iVar14;
      }
LAB_10059da34:
      *(uint *)(param_4 + 0x3c) = iVar11 + 1U;
      *(undefined4 *)(param_4 + 0x40) =
           *(undefined4 *)((long)&DAT_101d9d894 + (ulong)(iVar11 + 1U) * 4 + (long)param_5 * 0x5c);
    }
    iVar14 = iVar14 + uVar34;
    lVar12 = *(long *)(param_1 + 0x198);
    uVar34 = *(int *)(lVar12 + 0x48a8) - uVar34;
    *(long *)(lVar12 + 0x48b0) = *(long *)(lVar12 + 0x48b0) + (long)((int)uVar34 >> 3);
    *(uint *)(lVar12 + 0x48a8) = uVar34 & 7;
    if (pfVar22 < param_2 + 0x240) {
      _bzero(pfVar22,(long)param_2 + (0x903 - (long)pfVar22) & 0xfffffffffffffffc);
    }
    if (0x10 < iVar14) {
      iVar39 = iVar14;
      do {
        FUN_10059827c(param_1,0x10);
        iVar39 = iVar39 + -0x10;
      } while (0x10 < iVar39);
      iVar14 = (iVar14 + -0x10) - (iVar14 - 0x11U & 0xfffffff0);
    }
    if (iVar14 < 1) {
      lVar12 = *(long *)PTR____stack_chk_guard_101444218;
      if (iVar14 < 0) {
        uVar10 = 0xd;
        goto LAB_10059dc24;
      }
    }
    else {
      FUN_10059827c(param_1,iVar14);
      lVar12 = *(long *)PTR____stack_chk_guard_101444218;
    }
    uVar10 = 0;
  }
LAB_10059dc24:
  if (lVar12 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar10);
  }
  return;
}




void FUN_10059dc5c(long param_1,float *param_2,int *param_3,long param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  short *psVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  short *psVar17;
  long lVar18;
  undefined8 *puVar19;
  int *piVar20;
  long lVar21;
  uint uVar22;
  float *pfVar23;
  int *piVar24;
  int iVar25;
  float *pfVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  undefined1 auVar34 [16];
  int *local_d8;
  int *local_c8;
  int *local_c0;
  int *local_a0;
  int local_90 [7];
  int local_74 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  iVar30 = *(int *)(param_4 + 8);
  local_74[0] = *(int *)(param_4 + 0x44);
  if (iVar30 - local_74[0] == 0 || iVar30 < local_74[0]) {
    local_74[0] = iVar30;
    local_74[1] = 0;
    local_74[2] = 0;
  }
  else {
    iVar31 = *(int *)(param_4 + 0x48);
    if (iVar30 - iVar31 == 0 || iVar30 < iVar31) {
      local_74[1] = iVar30 - local_74[0];
      local_74[2] = 0;
    }
    else {
      local_74[1] = iVar31 - local_74[0];
      local_74[2] = iVar30 - iVar31;
    }
  }
  if (local_74[0] < 0) {
    local_74[0] = 0;
  }
  if (local_74[1] < 0) {
    local_74[1] = 0;
  }
  pfVar26 = param_2 + 0x240;
  param_6 = *(int *)(param_4 + 4) - param_6;
  if (local_74[2] < 0) {
    local_74[2] = 0;
  }
  uVar14 = *(int *)(param_4 + 0x50) + 1;
  iVar30 = 0x120 - iVar30 >> 1;
  local_a0 = param_3;
  if (*(int *)(param_4 + 0x10) != 2) {
    lVar21 = 0;
    iVar31 = 0;
    iVar32 = 0;
    local_c0 = (int *)&DAT_10115eb78;
    if (*(int *)(param_4 + 0x4c) == 0) {
      local_c0 = &DAT_10115ebd0;
    }
    local_c8 = (int *)(&DAT_101da0f58)[(long)param_5 * 3];
    iVar7 = -1;
    fVar33 = 0.0;
    pfVar23 = param_2;
    iVar25 = local_74[0];
    do {
      uVar27 = (ulong)*(uint *)(param_4 + lVar21 * 4 + 0x18);
      if (iVar25 != 0) {
        do {
          if (iVar31 == 0) {
            iVar31 = *local_c8;
            iVar32 = local_c8[1];
            piVar20 = local_a0 + 1;
            local_c8 = local_c8 + 2;
            piVar24 = local_c0 + 1;
            iVar8 = *local_c0 + *local_a0 << (ulong)(uVar14 & 0x1f);
            local_c0 = piVar24;
            local_a0 = piVar20;
            if (0x179 < iVar8) break;
            fVar33 = *(float *)(*(long *)(param_4 + 0x70) + (long)iVar8 * 4);
          }
          psVar10 = (short *)(&PTR_DAT_1014a2638)[uVar27 * 2];
          while( true ) {
            sVar5 = *psVar10;
            uVar11 = (uint)sVar5;
            if (-1 < (int)uVar11) break;
            lVar16 = *(long *)(param_1 + 0x198);
            bVar4 = **(byte **)(lVar16 + 0x48b0);
            uVar22 = *(uint *)(lVar16 + 0x48a8);
            uVar11 = uVar22 + 1;
            *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar11 >> 3);
            *(uint *)(lVar16 + 0x48a8) = uVar11 & 7;
            if ((0x80U >> (ulong)(uVar22 & 0x1f) & (uint)bVar4) == 0) {
              psVar10 = psVar10 + 1;
              param_6 = param_6 + -1;
            }
            else {
              psVar10 = psVar10 + (1 - (long)sVar5);
              param_6 = param_6 + -1;
            }
          }
          iVar8 = (int)uVar11 >> 4;
          uVar11 = uVar11 & 0xf;
          if (iVar8 == 0) {
            *pfVar26 = *pfVar23;
          }
          else if (iVar8 == 0xf) {
            param_6 = (param_6 + -1) - *(int *)(&DAT_1014a2630 + uVar27 * 0x10);
            iVar7 = FUN_10059827c(param_1);
            lVar16 = *(long *)(param_1 + 0x198);
            bVar4 = **(byte **)(lVar16 + 0x48b0);
            uVar2 = *(uint *)(lVar16 + 0x48a8);
            uVar22 = uVar2 + 1;
            *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar22 >> 3);
            *(uint *)(lVar16 + 0x48a8) = uVar22 & 7;
            fVar28 = fVar33 * (float)(&DAT_101d94d60)[iVar7 + 0xf];
            fVar29 = *pfVar23;
            if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
              *pfVar26 = fVar29 - fVar28;
              fVar29 = fVar28 + fVar29;
            }
            else {
              *pfVar26 = fVar29 + fVar28;
              fVar29 = fVar29 - fVar28;
            }
            *pfVar23 = fVar29;
            iVar7 = iVar32;
          }
          else {
            lVar16 = *(long *)(param_1 + 0x198);
            bVar4 = **(byte **)(lVar16 + 0x48b0);
            uVar2 = *(uint *)(lVar16 + 0x48a8);
            uVar22 = uVar2 + 1;
            *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar22 >> 3);
            *(uint *)(lVar16 + 0x48a8) = uVar22 & 7;
            fVar28 = fVar33 * (float)(&DAT_101d94d60)[iVar8];
            fVar29 = *pfVar23;
            if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
              *pfVar26 = fVar29 - fVar28;
              fVar29 = fVar28 + fVar29;
            }
            else {
              *pfVar26 = fVar29 + fVar28;
              fVar29 = fVar29 - fVar28;
            }
            *pfVar23 = fVar29;
            param_6 = param_6 + -1;
            iVar7 = iVar32;
          }
          if (uVar11 == 0) {
            pfVar26[1] = pfVar23[1];
          }
          else if (uVar11 == 0xf) {
            param_6 = (param_6 + -1) - *(int *)(&DAT_1014a2630 + uVar27 * 0x10);
            iVar7 = FUN_10059827c(param_1);
            lVar16 = *(long *)(param_1 + 0x198);
            bVar4 = **(byte **)(lVar16 + 0x48b0);
            uVar22 = *(uint *)(lVar16 + 0x48a8);
            uVar11 = uVar22 + 1;
            *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar11 >> 3);
            *(uint *)(lVar16 + 0x48a8) = uVar11 & 7;
            fVar28 = fVar33 * (float)(&DAT_101d94d60)[iVar7 + 0xf];
            fVar29 = pfVar23[1];
            if ((0x80U >> (ulong)(uVar22 & 0x1f) & (uint)bVar4) == 0) {
              pfVar26[1] = fVar29 - fVar28;
              fVar29 = fVar28 + fVar29;
            }
            else {
              pfVar26[1] = fVar29 + fVar28;
              fVar29 = fVar29 - fVar28;
            }
            pfVar23[1] = fVar29;
            iVar7 = iVar32;
          }
          else {
            lVar16 = *(long *)(param_1 + 0x198);
            bVar4 = **(byte **)(lVar16 + 0x48b0);
            uVar2 = *(uint *)(lVar16 + 0x48a8);
            uVar22 = uVar2 + 1;
            *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar22 >> 3);
            *(uint *)(lVar16 + 0x48a8) = uVar22 & 7;
            fVar28 = fVar33 * (float)(&DAT_101d94d60)[uVar11];
            fVar29 = pfVar23[1];
            if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
              pfVar26[1] = fVar29 - fVar28;
              fVar29 = fVar28 + fVar29;
            }
            else {
              pfVar26[1] = fVar29 + fVar28;
              fVar29 = fVar29 - fVar28;
            }
            pfVar23[1] = fVar29;
            param_6 = param_6 + -1;
            iVar7 = iVar32;
          }
          pfVar23 = pfVar23 + 2;
          pfVar26 = pfVar26 + 2;
          iVar25 = iVar25 + -1;
          iVar31 = iVar31 + -1;
        } while (iVar25 != 0);
      }
      lVar21 = lVar21 + 1;
      if (lVar21 == 3) goto code_r0x00010059e13c;
      iVar25 = local_74[lVar21];
    } while( true );
  }
  local_90[0] = -1;
  local_90[3] = -1;
  if (*(int *)(param_4 + 0x14) == 0) {
    local_90[2] = -1;
    plVar15 = &DAT_101da0f50 + (long)param_5 * 3;
    puVar19 = &DAT_101da1028 + (long)param_5 * 3;
  }
  else {
    local_90[0] = 2;
    local_90[2] = 2;
    plVar15 = &DAT_101da0f48 + (long)param_5 * 3;
    puVar19 = &DAT_101da1020 + (long)param_5 * 3;
  }
  lVar21 = 0;
  uVar27 = 0;
  iVar31 = 0;
  iVar25 = 0;
  iVar32 = 0;
  piVar20 = (int *)*puVar19;
  local_d8 = (int *)*plVar15;
  fVar33 = 0.0;
  pfVar23 = param_2;
  iVar7 = local_74[0];
  local_90[1] = local_90[0];
  while( true ) {
    uVar13 = (ulong)*(uint *)(param_4 + lVar21 * 4 + 0x18);
    if (iVar7 != 0) {
      psVar10 = (short *)(&PTR_DAT_1014a2638)[uVar13 * 2];
      do {
        if (iVar32 == 0) {
          iVar32 = *local_d8;
          pfVar23 = param_2 + local_d8[1];
          pfVar26 = pfVar23 + 0x240;
          iVar31 = local_d8[2];
          iVar25 = local_d8[3];
          lVar16 = (long)(*local_a0 << (ulong)(uVar14 & 0x1f));
          if (iVar31 == 3) {
            fVar33 = *(float *)(*(long *)(param_4 + 0x70) + lVar16 * 4);
            uVar27 = 1;
            iVar31 = 3;
            local_d8 = local_d8 + 4;
            local_a0 = local_a0 + 1;
          }
          else {
            fVar33 = *(float *)(*(long *)(param_4 + (long)iVar31 * 8 + 0x58) + lVar16 * 4);
            uVar27 = 3;
            local_d8 = local_d8 + 4;
            local_a0 = local_a0 + 1;
          }
        }
        sVar5 = *psVar10;
        uVar11 = (uint)sVar5;
        psVar17 = psVar10;
        if (sVar5 < 0) {
          do {
            lVar16 = *(long *)(param_1 + 0x198);
            bVar4 = **(byte **)(lVar16 + 0x48b0);
            uVar2 = *(uint *)(lVar16 + 0x48a8);
            uVar22 = uVar2 + 1;
            *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar22 >> 3);
            *(uint *)(lVar16 + 0x48a8) = uVar22 & 7;
            if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
              psVar17 = psVar17 + 1;
            }
            else {
              psVar17 = psVar17 + (1 - (long)(short)uVar11);
            }
            param_6 = param_6 + -1;
            uVar11 = (uint)*psVar17;
          } while ((int)uVar11 < 0);
        }
        iVar8 = (int)uVar11 >> 4;
        uVar11 = uVar11 & 0xf;
        if (iVar8 == 0) {
          *pfVar26 = *pfVar23;
        }
        else if (iVar8 == 0xf) {
          local_90[iVar31] = iVar25;
          param_6 = (param_6 + -1) - *(int *)(&DAT_1014a2630 + uVar13 * 0x10);
          iVar8 = FUN_10059827c(param_1);
          lVar16 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar16 + 0x48b0);
          uVar2 = *(uint *)(lVar16 + 0x48a8);
          uVar22 = uVar2 + 1;
          *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar22 >> 3);
          *(uint *)(lVar16 + 0x48a8) = uVar22 & 7;
          fVar28 = fVar33 * (float)(&DAT_101d94d60)[iVar8 + 0xf];
          if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
            *pfVar26 = *pfVar23 - fVar28;
            fVar28 = fVar28 + *pfVar23;
          }
          else {
            *pfVar26 = *pfVar23 + fVar28;
            fVar28 = *pfVar23 - fVar28;
          }
          *pfVar23 = fVar28;
        }
        else {
          local_90[iVar31] = iVar25;
          lVar16 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar16 + 0x48b0);
          uVar2 = *(uint *)(lVar16 + 0x48a8);
          uVar22 = uVar2 + 1;
          *(byte **)(lVar16 + 0x48b0) = *(byte **)(lVar16 + 0x48b0) + ((int)uVar22 >> 3);
          *(uint *)(lVar16 + 0x48a8) = uVar22 & 7;
          fVar28 = fVar33 * (float)(&DAT_101d94d60)[iVar8];
          if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
            *pfVar26 = *pfVar23 - fVar28;
            fVar28 = fVar28 + *pfVar23;
          }
          else {
            *pfVar26 = *pfVar23 + fVar28;
            fVar28 = *pfVar23 - fVar28;
          }
          *pfVar23 = fVar28;
          param_6 = param_6 + -1;
        }
        lVar16 = (long)(int)uVar27;
        if (uVar11 == 0) {
          pfVar26[lVar16] = pfVar23[lVar16];
        }
        else if (uVar11 == 0xf) {
          local_90[iVar31] = iVar25;
          param_6 = (param_6 + -1) - *(int *)(&DAT_1014a2630 + uVar13 * 0x10);
          iVar8 = FUN_10059827c(param_1);
          lVar18 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar18 + 0x48b0);
          uVar22 = *(uint *)(lVar18 + 0x48a8);
          uVar11 = uVar22 + 1;
          *(byte **)(lVar18 + 0x48b0) = *(byte **)(lVar18 + 0x48b0) + ((int)uVar11 >> 3);
          *(uint *)(lVar18 + 0x48a8) = uVar11 & 7;
          fVar28 = fVar33 * (float)(&DAT_101d94d60)[iVar8 + 0xf];
          if ((0x80U >> (ulong)(uVar22 & 0x1f) & (uint)bVar4) == 0) {
            pfVar26[lVar16] = pfVar23[lVar16] - fVar28;
            fVar28 = fVar28 + pfVar23[lVar16];
          }
          else {
            pfVar26[lVar16] = pfVar23[lVar16] + fVar28;
            fVar28 = pfVar23[lVar16] - fVar28;
          }
          pfVar23[lVar16] = fVar28;
        }
        else {
          local_90[iVar31] = iVar25;
          lVar18 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar18 + 0x48b0);
          uVar2 = *(uint *)(lVar18 + 0x48a8);
          uVar22 = uVar2 + 1;
          *(byte **)(lVar18 + 0x48b0) = *(byte **)(lVar18 + 0x48b0) + ((int)uVar22 >> 3);
          *(uint *)(lVar18 + 0x48a8) = uVar22 & 7;
          fVar28 = fVar33 * (float)(&DAT_101d94d60)[uVar11];
          if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
            pfVar26[lVar16] = pfVar23[lVar16] - fVar28;
            fVar28 = fVar28 + pfVar23[lVar16];
          }
          else {
            pfVar26[lVar16] = pfVar23[lVar16] + fVar28;
            fVar28 = pfVar23[lVar16] - fVar28;
          }
          pfVar23[lVar16] = fVar28;
          param_6 = param_6 + -1;
        }
        pfVar26 = pfVar26 + lVar16 * 2;
        pfVar23 = pfVar23 + lVar16 * 2;
        iVar7 = iVar7 + -1;
        iVar32 = iVar32 + -1;
      } while (iVar7 != 0);
    }
    lVar21 = lVar21 + 1;
    if (lVar21 == 2) break;
    iVar7 = local_74[lVar21];
  }
  if (0 < param_6) {
    for (; iVar30 != 0; iVar30 = iVar30 + -1) {
      psVar10 = (short *)(&PTR_DAT_1014a2838)[(ulong)*(uint *)(param_4 + 0x54) * 2];
      uVar11 = (uint)*psVar10;
      iVar7 = param_6;
      if (*psVar10 < 0) {
        do {
          param_6 = iVar7 + -1;
          if (iVar7 < 1) {
            uVar11 = 0;
            param_6 = iVar7;
            break;
          }
          lVar21 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar21 + 0x48b0);
          uVar2 = *(uint *)(lVar21 + 0x48a8);
          uVar22 = uVar2 + 1;
          *(byte **)(lVar21 + 0x48b0) = *(byte **)(lVar21 + 0x48b0) + ((int)uVar22 >> 3);
          *(uint *)(lVar21 + 0x48a8) = uVar22 & 7;
          if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
            psVar10 = psVar10 + 1;
          }
          else {
            psVar10 = psVar10 + (1 - (long)(short)uVar11);
          }
          uVar11 = (uint)*psVar10;
          iVar7 = param_6;
        } while ((int)uVar11 < 0);
      }
      uVar22 = 0;
      do {
        if ((uVar22 & 1) == 0) {
          if (iVar32 == 0) {
            iVar32 = *local_d8;
            pfVar23 = param_2 + local_d8[1];
            pfVar26 = pfVar23 + 0x240;
            iVar31 = local_d8[2];
            iVar25 = local_d8[3];
            lVar21 = (long)(*local_a0 << (ulong)(uVar14 & 0x1f));
            if (iVar31 == 3) {
              fVar33 = *(float *)(*(long *)(param_4 + 0x70) + lVar21 * 4);
              uVar27 = 1;
              iVar31 = 3;
              local_a0 = local_a0 + 1;
              local_d8 = local_d8 + 4;
            }
            else {
              fVar33 = *(float *)(*(long *)(param_4 + (long)iVar31 * 8 + 0x58) + lVar21 * 4);
              uVar27 = 3;
              local_a0 = local_a0 + 1;
              local_d8 = local_d8 + 4;
            }
          }
          iVar32 = iVar32 + -1;
        }
        if ((8U >> (ulong)(uVar22 & 0x1f) & uVar11) == 0) {
          *pfVar26 = *pfVar23;
        }
        else {
          local_90[iVar31] = iVar25;
          if (param_6 < 1) goto joined_r0x00010059e9b0;
          lVar21 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar21 + 0x48b0);
          uVar3 = *(uint *)(lVar21 + 0x48a8);
          uVar2 = uVar3 + 1;
          *(byte **)(lVar21 + 0x48b0) = *(byte **)(lVar21 + 0x48b0) + ((int)uVar2 >> 3);
          *(uint *)(lVar21 + 0x48a8) = uVar2 & 7;
          if ((0x80U >> (ulong)(uVar3 & 0x1f) & (uint)bVar4) == 0) {
            *pfVar26 = *pfVar23 - fVar33;
            fVar28 = fVar33 + *pfVar23;
          }
          else {
            *pfVar26 = fVar33 + *pfVar23;
            fVar28 = *pfVar23 - fVar33;
          }
          *pfVar23 = fVar28;
          param_6 = param_6 + -1;
        }
        pfVar26 = pfVar26 + uVar27;
        pfVar23 = pfVar23 + uVar27;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < 4);
      if (param_6 < 1) break;
    }
  }
joined_r0x00010059e9b0:
  while (local_d8 < piVar20) {
    if (iVar32 == 0) {
      iVar32 = *local_d8;
      pfVar23 = param_2 + local_d8[1];
      pfVar26 = pfVar23 + 0x240;
      uVar14 = 1;
      if (local_d8[2] != 3) {
        uVar14 = 3;
      }
      uVar27 = (ulong)uVar14;
      local_d8 = local_d8 + 4;
    }
    iVar32 = iVar32 + -1;
    *pfVar26 = *pfVar23;
    pfVar26[uVar27] = pfVar23[uVar27];
    pfVar26 = pfVar26 + uVar27 * 2;
    pfVar23 = pfVar23 + uVar27 * 2;
  }
  iVar30 = local_90[0] + 1;
  iVar31 = local_90[1] + 1;
  iVar32 = local_90[3] + 1;
  *(ulong *)(param_4 + 0x30) = CONCAT44(iVar31,iVar30);
  auVar34._4_4_ = iVar31;
  auVar34._0_4_ = iVar30;
  auVar34._8_4_ = local_90[2] + 1;
  auVar34._12_4_ = iVar32;
  auVar6._4_4_ = iVar31;
  auVar6._0_4_ = iVar30;
  auVar6._8_4_ = local_90[2] + 1;
  auVar6._12_4_ = iVar32;
  auVar34 = NEON_ext(auVar34,auVar6,8,1);
  *(long *)(param_4 + 0x38) = auVar34._0_8_;
  iVar30 = local_90[0];
  if (local_90[0] <= local_90[1]) {
    iVar30 = local_90[1];
  }
  if (iVar30 <= local_90[2]) {
    iVar30 = local_90[2];
  }
  puVar1 = (undefined4 *)((long)&DAT_101d9d894 + (long)iVar32 * 4 + (long)param_5 * 0x5c);
  if (iVar30 + 1 != 0) {
    puVar1 = &DAT_101d9dbd0 + (long)param_5 * 0xe + (long)(iVar30 + 1);
  }
  uVar12 = *puVar1;
LAB_10059ea88:
  *(undefined4 *)(param_4 + 0x40) = uVar12;
  if (0x10 < param_6) {
    iVar30 = param_6;
    do {
      FUN_10059827c(param_1,0x10);
      iVar30 = iVar30 + -0x10;
    } while (0x10 < iVar30);
    param_6 = (param_6 + -0x10) - (param_6 - 0x11U & 0xfffffff0);
  }
  if (param_6 < 1) {
    if (param_6 < 0) {
      uVar9 = 0xd;
      goto LAB_10059eadc;
    }
  }
  else {
    FUN_10059827c(param_1,param_6);
  }
  uVar9 = 0;
LAB_10059eadc:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar9);
code_r0x00010059e13c:
  if (0 < param_6) {
    for (; iVar30 != 0; iVar30 = iVar30 + -1) {
      psVar10 = (short *)(&PTR_DAT_1014a2838)[(ulong)*(uint *)(param_4 + 0x54) * 2];
      uVar11 = (uint)*psVar10;
      iVar25 = param_6;
      if (*psVar10 < 0) {
        do {
          param_6 = iVar25 + -1;
          if (iVar25 < 1) {
            uVar11 = 0;
            param_6 = iVar25;
            break;
          }
          lVar21 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar21 + 0x48b0);
          uVar2 = *(uint *)(lVar21 + 0x48a8);
          uVar22 = uVar2 + 1;
          *(byte **)(lVar21 + 0x48b0) = *(byte **)(lVar21 + 0x48b0) + ((int)uVar22 >> 3);
          *(uint *)(lVar21 + 0x48a8) = uVar22 & 7;
          if ((0x80U >> (ulong)(uVar2 & 0x1f) & (uint)bVar4) == 0) {
            psVar10 = psVar10 + 1;
          }
          else {
            psVar10 = psVar10 + (1 - (long)(short)uVar11);
          }
          uVar11 = (uint)*psVar10;
          iVar25 = param_6;
        } while ((int)uVar11 < 0);
      }
      uVar22 = 0;
      piVar20 = local_a0;
      piVar24 = local_c0;
      do {
        local_a0 = piVar20;
        local_c0 = piVar24;
        if ((uVar22 & 1) == 0) {
          if (iVar31 == 0) {
            iVar31 = *local_c8;
            iVar32 = local_c8[1];
            local_c8 = local_c8 + 2;
            local_a0 = piVar20 + 1;
            local_c0 = piVar24 + 1;
            fVar33 = *(float *)(*(long *)(param_4 + 0x70) +
                               (long)(*piVar24 + *piVar20 << (ulong)(uVar14 & 0x1f)) * 4);
          }
          iVar31 = iVar31 + -1;
        }
        if ((8U >> (ulong)(uVar22 & 0x1f) & uVar11) == 0) {
          *pfVar26 = *pfVar23;
        }
        else {
          iVar7 = iVar32;
          if (param_6 + -1 == 0 || param_6 < 1) break;
          lVar21 = *(long *)(param_1 + 0x198);
          bVar4 = **(byte **)(lVar21 + 0x48b0);
          uVar3 = *(uint *)(lVar21 + 0x48a8);
          uVar2 = uVar3 + 1;
          *(byte **)(lVar21 + 0x48b0) = *(byte **)(lVar21 + 0x48b0) + ((int)uVar2 >> 3);
          *(uint *)(lVar21 + 0x48a8) = uVar2 & 7;
          if ((0x80U >> (ulong)(uVar3 & 0x1f) & (uint)bVar4) == 0) {
            *pfVar26 = *pfVar23 - fVar33;
            fVar28 = fVar33 + *pfVar23;
          }
          else {
            *pfVar26 = fVar33 + *pfVar23;
            fVar28 = *pfVar23 - fVar33;
          }
          *pfVar23 = fVar28;
          param_6 = param_6 + -1;
        }
        pfVar23 = pfVar23 + 1;
        pfVar26 = pfVar26 + 1;
        uVar22 = uVar22 + 1;
        piVar20 = local_a0;
        piVar24 = local_c0;
      } while ((int)uVar22 < 4);
      if (param_6 < 1) break;
    }
  }
  for (iVar30 = (int)((ulong)((long)param_2 + (0x1200 - (long)pfVar26)) >> 2) >> 1; iVar30 != 0;
      iVar30 = iVar30 + -1) {
    *pfVar26 = *pfVar23;
    pfVar26[1] = pfVar23[1];
    pfVar23 = pfVar23 + 2;
    pfVar26 = pfVar26 + 2;
  }
  *(uint *)(param_4 + 0x3c) = iVar7 + 1U;
  uVar12 = *(undefined4 *)((long)&DAT_101d9d894 + (ulong)(iVar7 + 1U) * 4 + (long)param_5 * 0x5c);
  goto LAB_10059ea88;
}




undefined8
FUN_10059eb20(undefined8 param_1,long param_2,long param_3,long param_4,int param_5,int param_6,
             int param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  if (param_7 == 0) {
    puVar12 = (undefined4 *)&UNK_10115ece8;
    if (param_6 != 0) {
      puVar12 = (undefined4 *)&UNK_10115ec68;
    }
    puVar13 = (undefined4 *)&UNK_10115eca8;
    if (param_6 != 0) {
      puVar13 = (undefined4 *)&UNK_10115ec28;
    }
  }
  else {
    uVar11 = (ulong)*(uint *)(param_4 + 0xc) & 1;
    puVar12 = &DAT_101da1d78 + uVar11 * 0x10;
    puVar13 = &DAT_101da1cf8 + uVar11 * 0x10;
    if (param_6 != 0) {
      puVar12 = &DAT_101da1e78 + uVar11 * 0x10;
      puVar13 = &DAT_101da1df8 + uVar11 * 0x10;
    }
  }
  lVar15 = (long)param_5;
  if (*(int *)(param_4 + 0x10) == 2) {
    lVar18 = 0;
    iVar17 = *(int *)(param_4 + 0x14);
    bVar5 = iVar17 != 0;
    do {
      iVar16 = (int)lVar18;
      iVar19 = *(int *)(param_4 + (long)iVar16 * 4 + 0x30);
      lVar8 = (long)iVar19;
      bVar4 = false;
      if (iVar19 < 4) {
        bVar4 = bVar5;
      }
      if (iVar19 < 0xc) {
        do {
          iVar7 = (int)lVar8;
          iVar19 = *(int *)(param_3 + (ulong)(uint)((iVar7 * 3 + iVar16) - iVar17) * 4);
          if ((iVar19 != 7) && (0 < (int)(&DAT_10186a18c)[lVar8 + lVar15 * 0x48])) {
            fVar20 = (float)puVar13[iVar19];
            fVar21 = (float)puVar12[iVar19];
            pfVar9 = (float *)(param_2 +
                              (long)(iVar16 + (&DAT_10186a154)[lVar8 + lVar15 * 0x48]) * 4);
            iVar19 = (&DAT_10186a18c)[lVar8 + lVar15 * 0x48] + 1;
            do {
              fVar22 = *pfVar9;
              *pfVar9 = fVar20 * fVar22;
              pfVar9[0x240] = fVar21 * fVar22;
              pfVar9 = pfVar9 + 3;
              iVar19 = iVar19 + -1;
            } while (1 < iVar19);
          }
          lVar8 = lVar8 + 1;
        } while (iVar7 != 0xb);
      }
      iVar19 = *(int *)(param_3 + (ulong)(uint)((iVar16 + 0x21) - iVar17) * 4);
      if ((iVar19 != 7) && (0 < *(int *)(&DAT_10186a1bc + lVar15 * 0x120))) {
        fVar20 = (float)puVar13[iVar19];
        fVar21 = (float)puVar12[iVar19];
        pfVar9 = (float *)(param_2 + (long)((&DAT_10186a184)[lVar15 * 0x48] + iVar16) * 4);
        iVar19 = *(int *)(&DAT_10186a1bc + lVar15 * 0x120) + 1;
        do {
          fVar22 = *pfVar9;
          *pfVar9 = fVar20 * fVar22;
          pfVar9[0x240] = fVar21 * fVar22;
          pfVar9 = pfVar9 + 3;
          iVar19 = iVar19 + -1;
        } while (1 < iVar19);
      }
      lVar18 = lVar18 + 1;
      bVar5 = bVar4;
    } while (lVar18 != 3);
    if ((bVar4) && (iVar17 = *(int *)(param_4 + 0x3c), iVar17 < 8)) {
      iVar19 = *(int *)(&DAT_10186a0a0 + (long)iVar17 * 4 + lVar15 * 0x120);
      lVar18 = (long)iVar17;
      do {
        uVar3 = (&DAT_10186a0fc)[lVar18 + lVar15 * 0x48];
        iVar17 = *(int *)(param_3 + lVar18 * 4);
        if (iVar17 == 7) {
          iVar19 = uVar3 + iVar19;
        }
        else if (0 < (int)uVar3) {
          fVar20 = (float)puVar13[iVar17];
          fVar21 = (float)puVar12[iVar17];
          lVar8 = (long)iVar19;
          uVar14 = 0xfffffffe;
          if (-2 < (int)~uVar3) {
            uVar14 = ~uVar3;
          }
          uVar14 = uVar3 + uVar14 + 1;
          uVar11 = (ulong)uVar14 + 1;
          lVar1 = uVar11 + lVar8;
          uVar11 = uVar11 & 0x1fffffffc;
          uVar10 = uVar3;
          if (uVar11 != 0) {
            lVar8 = uVar11 + lVar8;
            uVar10 = uVar3 - (int)uVar11;
            uVar2 = 0xfffffffe;
            if (-2 < (int)~uVar3) {
              uVar2 = ~uVar3;
            }
            uVar11 = (ulong)(uVar3 + uVar2 + 1) + 1 & 0xfffffffffffffffc;
            pfVar9 = (float *)(param_2 + (long)iVar19 * 4);
            do {
              fVar22 = *pfVar9;
              fVar6 = pfVar9[2];
              auVar25._0_8_ = CONCAT44(fVar20 * pfVar9[1],fVar20 * fVar22);
              auVar25._8_4_ = fVar20 * fVar6;
              auVar25._12_4_ = fVar20 * pfVar9[3];
              *(undefined8 *)pfVar9 = auVar25._0_8_;
              auVar26 = NEON_ext(auVar25,auVar25,8,1);
              *(long *)(pfVar9 + 2) = auVar26._0_8_;
              auVar23._0_8_ = CONCAT44(fVar21 * pfVar9[1],fVar21 * fVar22);
              auVar23._8_4_ = fVar21 * fVar6;
              auVar23._12_4_ = fVar21 * pfVar9[3];
              *(undefined8 *)(pfVar9 + 0x240) = auVar23._0_8_;
              auVar26 = NEON_ext(auVar23,auVar23,8,1);
              *(long *)(pfVar9 + 0x242) = auVar26._0_8_;
              uVar11 = uVar11 - 4;
              pfVar9 = pfVar9 + 4;
            } while (uVar11 != 0);
          }
          if (lVar1 != lVar8) {
            pfVar9 = (float *)(param_2 + lVar8 * 4);
            iVar17 = uVar10 + 1;
            do {
              fVar22 = *pfVar9;
              *pfVar9 = fVar20 * fVar22;
              pfVar9[0x240] = fVar21 * fVar22;
              pfVar9 = pfVar9 + 1;
              iVar17 = iVar17 + -1;
            } while (1 < iVar17);
          }
          iVar19 = iVar19 + uVar14 + 1;
        }
        iVar17 = (int)lVar18;
        lVar18 = lVar18 + 1;
      } while (iVar17 != 7);
    }
  }
  else {
    iVar19 = *(int *)(param_4 + 0x3c);
    iVar17 = *(int *)(&DAT_10186a0a0 + (long)iVar19 * 4 + lVar15 * 0x120);
    if (iVar19 < 0x15) {
      lVar18 = (long)iVar19;
      do {
        uVar3 = (&DAT_10186a0fc)[lVar18 + lVar15 * 0x48];
        iVar19 = *(int *)(param_3 + lVar18 * 4);
        if (iVar19 == 7) {
          iVar17 = uVar3 + iVar17;
        }
        else if (0 < (int)uVar3) {
          fVar20 = (float)puVar13[iVar19];
          fVar21 = (float)puVar12[iVar19];
          lVar8 = (long)iVar17;
          uVar14 = 0xfffffffe;
          if (-2 < (int)~uVar3) {
            uVar14 = ~uVar3;
          }
          uVar14 = uVar3 + uVar14 + 1;
          uVar11 = (ulong)uVar14 + 1;
          lVar1 = uVar11 + lVar8;
          uVar11 = uVar11 & 0x1fffffffc;
          uVar10 = uVar3;
          if (uVar11 != 0) {
            lVar8 = uVar11 + lVar8;
            uVar10 = uVar3 - (int)uVar11;
            uVar2 = 0xfffffffe;
            if (-2 < (int)~uVar3) {
              uVar2 = ~uVar3;
            }
            uVar11 = (ulong)(uVar3 + uVar2 + 1) + 1 & 0xfffffffffffffffc;
            pfVar9 = (float *)(param_2 + (long)iVar17 * 4);
            do {
              fVar22 = *pfVar9;
              fVar6 = pfVar9[2];
              auVar27._0_8_ = CONCAT44(fVar20 * pfVar9[1],fVar20 * fVar22);
              auVar27._8_4_ = fVar20 * fVar6;
              auVar27._12_4_ = fVar20 * pfVar9[3];
              *(undefined8 *)pfVar9 = auVar27._0_8_;
              auVar26 = NEON_ext(auVar27,auVar27,8,1);
              *(long *)(pfVar9 + 2) = auVar26._0_8_;
              auVar26._0_8_ = CONCAT44(fVar21 * pfVar9[1],fVar21 * fVar22);
              auVar26._8_4_ = fVar21 * fVar6;
              auVar26._12_4_ = fVar21 * pfVar9[3];
              *(undefined8 *)(pfVar9 + 0x240) = auVar26._0_8_;
              auVar26 = NEON_ext(auVar26,auVar26,8,1);
              *(long *)(pfVar9 + 0x242) = auVar26._0_8_;
              uVar11 = uVar11 - 4;
              pfVar9 = pfVar9 + 4;
            } while (uVar11 != 0);
          }
          if (lVar1 != lVar8) {
            pfVar9 = (float *)(param_2 + lVar8 * 4);
            iVar19 = uVar10 + 1;
            do {
              fVar22 = *pfVar9;
              *pfVar9 = fVar20 * fVar22;
              pfVar9[0x240] = fVar21 * fVar22;
              pfVar9 = pfVar9 + 1;
              iVar19 = iVar19 + -1;
            } while (1 < iVar19);
          }
          iVar17 = iVar17 + uVar14 + 1;
        }
        iVar19 = (int)lVar18;
        lVar18 = lVar18 + 1;
      } while (iVar19 != 0x14);
    }
    if (((iVar17 < 0x240) && (iVar19 = *(int *)(param_3 + 0x50), iVar19 != 7)) &&
       (uVar3 = (&DAT_10186a150)[lVar15 * 0x48], 0 < (int)uVar3)) {
      fVar20 = (float)puVar13[iVar19];
      fVar21 = (float)puVar12[iVar19];
      lVar15 = (long)iVar17;
      uVar10 = 0xfffffffe;
      uVar14 = uVar10;
      if (-2 < (int)~uVar3) {
        uVar14 = ~uVar3;
      }
      uVar11 = (ulong)(uVar3 + uVar14 + 1) + 1;
      lVar18 = uVar11 + lVar15;
      uVar11 = uVar11 & 0x1fffffffc;
      uVar14 = uVar3;
      if (uVar11 != 0) {
        lVar15 = uVar11 + lVar15;
        uVar14 = uVar3 - (int)uVar11;
        if (-2 < (int)~uVar3) {
          uVar10 = ~uVar3;
        }
        uVar11 = (ulong)(uVar3 + uVar10 + 1) + 1 & 0xfffffffffffffffc;
        pfVar9 = (float *)(param_2 + (long)iVar17 * 4);
        do {
          fVar22 = *pfVar9;
          fVar6 = pfVar9[2];
          auVar28._0_8_ = CONCAT44(fVar20 * pfVar9[1],fVar20 * fVar22);
          auVar28._8_4_ = fVar20 * fVar6;
          auVar28._12_4_ = fVar20 * pfVar9[3];
          *(undefined8 *)pfVar9 = auVar28._0_8_;
          auVar26 = NEON_ext(auVar28,auVar28,8,1);
          *(long *)(pfVar9 + 2) = auVar26._0_8_;
          auVar24._0_8_ = CONCAT44(fVar21 * pfVar9[1],fVar21 * fVar22);
          auVar24._8_4_ = fVar21 * fVar6;
          auVar24._12_4_ = fVar21 * pfVar9[3];
          *(undefined8 *)(pfVar9 + 0x240) = auVar24._0_8_;
          auVar26 = NEON_ext(auVar24,auVar24,8,1);
          *(long *)(pfVar9 + 0x242) = auVar26._0_8_;
          uVar11 = uVar11 - 4;
          pfVar9 = pfVar9 + 4;
        } while (uVar11 != 0);
      }
      if (lVar18 != lVar15) {
        pfVar9 = (float *)(param_2 + lVar15 * 4);
        iVar17 = uVar14 + 1;
        do {
          fVar22 = *pfVar9;
          *pfVar9 = fVar20 * fVar22;
          pfVar9[0x240] = fVar21 * fVar22;
          pfVar9 = pfVar9 + 1;
          iVar17 = iVar17 + -1;
        } while (1 < iVar17);
      }
    }
  }
  return 0;
}




undefined8 FUN_10059f058(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  if (*(int *)(param_3 + 0x10) == 2) {
    if (*(int *)(param_3 + 0x14) == 0) {
      return 0xd;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x40) + -1;
    if (iVar1 < 0) {
      return 0xd;
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  pfVar2 = (float *)(param_2 + 100);
  do {
    fVar3 = pfVar2[-8];
    pfVar2[-8] = fVar3 * DAT_101d9cdbc - pfVar2[-7] * DAT_101d9cd9c;
    pfVar2[-7] = pfVar2[-7] * DAT_101d9cdbc + fVar3 * DAT_101d9cd9c;
    fVar3 = pfVar2[-9];
    pfVar2[-9] = fVar3 * DAT_101d9cdc0 - pfVar2[-6] * DAT_101d9cda0;
    pfVar2[-6] = pfVar2[-6] * DAT_101d9cdc0 + fVar3 * DAT_101d9cda0;
    fVar3 = pfVar2[-10];
    pfVar2[-10] = fVar3 * DAT_101d9cdc4 - pfVar2[-5] * DAT_101d9cda4;
    pfVar2[-5] = pfVar2[-5] * DAT_101d9cdc4 + fVar3 * DAT_101d9cda4;
    fVar3 = pfVar2[-0xb];
    pfVar2[-0xb] = fVar3 * DAT_101d9cdc8 - pfVar2[-4] * DAT_101d9cda8;
    pfVar2[-4] = pfVar2[-4] * DAT_101d9cdc8 + fVar3 * DAT_101d9cda8;
    fVar3 = pfVar2[-0xc];
    pfVar2[-0xc] = fVar3 * DAT_101d9cdcc - pfVar2[-3] * DAT_101d9cdac;
    pfVar2[-3] = pfVar2[-3] * DAT_101d9cdcc + fVar3 * DAT_101d9cdac;
    fVar3 = pfVar2[-0xd];
    pfVar2[-0xd] = fVar3 * DAT_101d9cdd0 - pfVar2[-2] * DAT_101d9cdb0;
    pfVar2[-2] = pfVar2[-2] * DAT_101d9cdd0 + fVar3 * DAT_101d9cdb0;
    fVar3 = pfVar2[-0xe];
    pfVar2[-0xe] = fVar3 * DAT_101d9cdd4 - pfVar2[-1] * DAT_101d9cdb4;
    pfVar2[-1] = pfVar2[-1] * DAT_101d9cdd4 + fVar3 * DAT_101d9cdb4;
    fVar3 = pfVar2[-0xf];
    pfVar2[-0xf] = fVar3 * DAT_101d9cdd8 - *pfVar2 * DAT_101d9cdb8;
    *pfVar2 = *pfVar2 * DAT_101d9cdd8 + fVar3 * DAT_101d9cdb8;
    iVar1 = iVar1 + -1;
    pfVar2 = pfVar2 + 0x12;
  } while (iVar1 != 0);
  return 0;
}




void FUN_10059f274(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar1 = param_1[0x10];
  fVar12 = param_1[0xf] + fVar1;
  param_1[0x10] = fVar12;
  fVar14 = *param_1;
  fVar20 = param_1[2] + param_1[3];
  fVar13 = fVar14 + param_1[1];
  fVar22 = param_1[0xe] + param_1[0xf];
  fVar23 = param_1[0xc] + param_1[0xd];
  fVar24 = param_1[10] + param_1[0xb];
  fVar7 = param_1[8] + param_1[9];
  fVar8 = param_1[6] + param_1[7];
  fVar9 = param_1[4] + param_1[5];
  fVar5 = fVar13 + fVar20;
  fVar3 = param_1[0xd] + param_1[0xe];
  fVar10 = param_1[0xb] + param_1[0xc];
  fVar4 = param_1[9] + param_1[10];
  fVar15 = param_1[7] + param_1[8];
  fVar2 = param_1[5] + param_1[6];
  fVar17 = param_1[3] + param_1[4];
  fVar6 = param_1[1] + param_1[2];
  fVar11 = fVar22 + fVar1 + param_1[0x11];
  fVar22 = fVar23 + fVar22;
  fVar23 = fVar24 + fVar23;
  fVar24 = fVar7 + fVar24;
  fVar7 = fVar8 + fVar7;
  fVar8 = fVar9 + fVar8;
  fVar20 = fVar20 + fVar9;
  param_1[0xe] = fVar3;
  param_1[0xc] = fVar10;
  param_1[10] = fVar4;
  param_1[8] = fVar15;
  param_1[6] = fVar2;
  param_1[4] = fVar17;
  param_1[2] = fVar6;
  param_1[1] = fVar13;
  param_1[0x11] = fVar11;
  param_1[0xf] = fVar22;
  param_1[0xd] = fVar23;
  param_1[0xb] = fVar24;
  param_1[9] = fVar7;
  param_1[7] = fVar8;
  param_1[5] = fVar20;
  param_1[3] = fVar5;
  fVar10 = DAT_101d9d848 * fVar10;
  fVar19 = DAT_101d9d848 * ((fVar15 + fVar12) - fVar17);
  fVar21 = fVar10 + fVar14;
  fVar10 = (fVar14 - fVar10) - fVar10;
  fVar14 = fVar10 - fVar19;
  fVar9 = (fVar15 + fVar17) * DAT_101d9d87c;
  fVar15 = (fVar15 - fVar12) * DAT_101d9d880;
  fVar19 = fVar19 + fVar19 + fVar10;
  fVar1 = (fVar12 + fVar17) * DAT_101d9d884;
  fVar10 = (fVar21 - fVar9) - fVar1;
  fVar9 = fVar9 + fVar21 + fVar15;
  fVar21 = fVar21 + (fVar1 - fVar15);
  fVar15 = DAT_101d9d888 * (fVar6 + fVar4);
  fVar12 = DAT_101d9d88c * (fVar4 - fVar3);
  fVar2 = DAT_101d9d844 * fVar2;
  fVar1 = fVar15 + fVar12 + fVar2;
  fVar16 = fVar9 + fVar1;
  fVar9 = fVar9 - fVar1;
  fVar18 = (fVar6 + fVar3) * DAT_101d9d890;
  fVar15 = fVar15 + (fVar18 - fVar2);
  fVar17 = fVar21 + fVar15;
  fVar1 = DAT_101d9d844 * ((fVar4 + fVar3) - fVar6);
  fVar21 = fVar21 - fVar15;
  fVar12 = fVar12 - (fVar2 + fVar18);
  fVar6 = fVar14 - fVar1;
  fVar14 = fVar14 + fVar1;
  fVar15 = fVar10 + fVar12;
  fVar10 = fVar10 - fVar12;
  fVar23 = DAT_101d9d848 * fVar23;
  fVar3 = DAT_101d9d848 * ((fVar7 + fVar11) - fVar20);
  fVar2 = fVar23 + fVar13;
  fVar23 = (fVar13 - fVar23) - fVar23;
  fVar18 = fVar23 - fVar3;
  fVar1 = DAT_101d9d87c * (fVar7 + fVar20);
  fVar4 = DAT_101d9d880 * (fVar7 - fVar11);
  fVar13 = DAT_101d9d85c * (fVar3 + fVar3 + fVar23);
  fVar3 = DAT_101d9d884 * (fVar11 + fVar20);
  fVar7 = (fVar2 - fVar1) - fVar3;
  fVar1 = fVar1 + fVar4 + fVar2;
  fVar2 = fVar2 + (fVar3 - fVar4);
  fVar11 = DAT_101d9d888 * (fVar5 + fVar24);
  fVar3 = DAT_101d9d88c * (fVar24 - fVar22);
  fVar8 = DAT_101d9d844 * fVar8;
  fVar4 = fVar8 + fVar11 + fVar3;
  fVar25 = DAT_101d9d84c * (fVar1 + fVar4);
  fVar12 = DAT_101d9d86c * (fVar1 - fVar4);
  fVar20 = DAT_101d9d890 * (fVar5 + fVar22);
  fVar11 = fVar11 + (fVar20 - fVar8);
  fVar23 = DAT_101d9d858 * (fVar2 + fVar11);
  fVar1 = DAT_101d9d844 * ((fVar24 + fVar22) - fVar5);
  fVar4 = (fVar2 - fVar11) * DAT_101d9d860;
  fVar3 = fVar3 - (fVar20 + fVar8);
  fVar5 = (fVar18 - fVar1) * DAT_101d9d850;
  fVar2 = (fVar18 + fVar1) * DAT_101d9d868;
  fVar22 = (fVar7 + fVar3) * DAT_101d9d854;
  fVar3 = (fVar7 - fVar3) * DAT_101d9d864;
  fVar1 = fVar16 + fVar25;
  param_3[9] = fVar1 * param_4[0x1b];
  param_3[8] = fVar1 * param_4[0x1a];
  fVar16 = fVar16 - fVar25;
  param_5[0x100] = param_2[8] + fVar16 * param_4[8];
  param_5[0x120] = param_2[9] + fVar16 * param_4[9];
  fVar1 = fVar6 + fVar5;
  param_3[10] = fVar1 * param_4[0x1c];
  param_3[7] = fVar1 * param_4[0x19];
  fVar6 = fVar6 - fVar5;
  param_5[0xe0] = param_2[7] + fVar6 * param_4[7];
  param_5[0x140] = param_2[10] + fVar6 * param_4[10];
  fVar1 = fVar15 + fVar22;
  param_3[0xb] = fVar1 * param_4[0x1d];
  param_3[6] = fVar1 * param_4[0x18];
  fVar15 = fVar15 - fVar22;
  param_5[0xc0] = param_2[6] + fVar15 * param_4[6];
  param_5[0x160] = param_2[0xb] + fVar15 * param_4[0xb];
  fVar1 = fVar17 + fVar23;
  param_3[0xc] = fVar1 * param_4[0x1e];
  param_3[5] = fVar1 * param_4[0x17];
  fVar17 = fVar17 - fVar23;
  param_5[0xa0] = param_2[5] + fVar17 * param_4[5];
  param_5[0x180] = param_2[0xc] + fVar17 * param_4[0xc];
  fVar1 = fVar19 + fVar13;
  param_3[0xd] = fVar1 * param_4[0x1f];
  param_3[4] = fVar1 * param_4[0x16];
  fVar19 = fVar19 - fVar13;
  param_5[0x80] = param_2[4] + fVar19 * param_4[4];
  param_5[0x1a0] = param_2[0xd] + fVar19 * param_4[0xd];
  fVar1 = fVar21 + fVar4;
  param_3[0xe] = fVar1 * param_4[0x20];
  param_3[3] = fVar1 * param_4[0x15];
  fVar21 = fVar21 - fVar4;
  param_5[0x60] = param_2[3] + fVar21 * param_4[3];
  param_5[0x1c0] = param_2[0xe] + fVar21 * param_4[0xe];
  fVar1 = fVar10 + fVar3;
  param_3[0xf] = fVar1 * param_4[0x21];
  param_3[2] = fVar1 * param_4[0x14];
  fVar10 = fVar10 - fVar3;
  param_5[0x40] = param_2[2] + fVar10 * param_4[2];
  param_5[0x1e0] = param_2[0xf] + fVar10 * param_4[0xf];
  fVar1 = fVar14 + fVar2;
  param_3[0x10] = fVar1 * param_4[0x22];
  param_3[1] = fVar1 * param_4[0x13];
  fVar14 = fVar14 - fVar2;
  param_5[0x20] = param_2[1] + fVar14 * param_4[1];
  param_5[0x200] = param_2[0x10] + fVar14 * param_4[0x10];
  fVar1 = fVar9 + fVar12;
  param_3[0x11] = fVar1 * param_4[0x23];
  *param_3 = fVar1 * param_4[0x12];
  fVar9 = fVar9 - fVar12;
  *param_5 = *param_2 + fVar9 * *param_4;
  param_5[0x220] = param_2[0x11] + fVar9 * param_4[0x11];
  return;
}




void FUN_10059f7cc(float *param_1,undefined4 *param_2,float *param_3,float *param_4,
                  undefined4 *param_5)

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
  
  *param_5 = *param_2;
  param_5[0x20] = param_2[1];
  param_5[0x40] = param_2[2];
  param_5[0x60] = param_2[3];
  param_5[0x80] = param_2[4];
  param_5[0xa0] = param_2[5];
  fVar2 = param_1[0xc] + param_1[9];
  fVar3 = param_1[9] + param_1[6];
  fVar6 = *param_1;
  fVar5 = param_1[3] + fVar6;
  fVar1 = param_1[0xf] + param_1[0xc] + fVar3;
  fVar4 = (param_1[6] + param_1[3]) * DAT_101d9d844;
  fVar3 = DAT_101d9d844 * (fVar3 + fVar5);
  fVar7 = fVar6 - fVar2;
  fVar8 = (fVar5 - fVar1) * DAT_101d9d874;
  fVar9 = fVar7 + fVar8;
  fVar7 = fVar7 - fVar8;
  param_5[0x200] = (float)param_2[0x10] + fVar9 * param_4[10];
  param_5[0x1a0] = (float)param_2[0xd] + fVar9 * param_4[7];
  param_5[0xe0] = (float)param_2[7] + fVar7 * param_4[1];
  param_5[0x140] = (float)param_2[10] + fVar7 * param_4[4];
  fVar6 = fVar6 + fVar2 * DAT_101d9d848;
  fVar7 = fVar4 + fVar6;
  fVar6 = fVar6 - fVar4;
  fVar5 = fVar5 + fVar1 * DAT_101d9d848;
  fVar2 = DAT_101d9d870 * (fVar3 + fVar5);
  fVar1 = DAT_101d9d878 * (fVar5 - fVar3);
  fVar5 = fVar7 + fVar2;
  fVar7 = fVar7 - fVar2;
  fVar2 = fVar6 + fVar1;
  fVar6 = fVar6 - fVar1;
  param_5[0x220] = (float)param_2[0x11] + param_4[0xb] * fVar2;
  param_5[0x180] = (float)param_2[0xc] + fVar2 * param_4[6];
  param_5[0x1c0] = (float)param_2[0xe] + fVar5 * param_4[8];
  param_5[0x1e0] = (float)param_2[0xf] + fVar5 * param_4[9];
  param_5[0xc0] = (float)param_2[6] + fVar6 * *param_4;
  param_5[0x160] = (float)param_2[0xb] + fVar6 * param_4[5];
  param_5[0x100] = (float)param_2[8] + fVar7 * param_4[2];
  param_5[0x120] = (float)param_2[9] + fVar7 * param_4[3];
  fVar2 = param_1[0xd] + param_1[10];
  fVar3 = param_1[10] + param_1[7];
  fVar6 = param_1[1];
  fVar5 = param_1[4] + fVar6;
  fVar1 = param_1[0x10] + param_1[0xd] + fVar3;
  fVar4 = (param_1[7] + param_1[4]) * DAT_101d9d844;
  fVar3 = DAT_101d9d844 * (fVar3 + fVar5);
  fVar7 = fVar6 - fVar2;
  fVar8 = (fVar5 - fVar1) * DAT_101d9d874;
  fVar9 = fVar7 + fVar8;
  fVar7 = fVar7 - fVar8;
  param_3[4] = param_4[10] * fVar9;
  param_3[1] = fVar9 * param_4[7];
  param_5[0x1a0] = (float)param_5[0x1a0] + fVar7 * param_4[1];
  param_5[0x200] = (float)param_5[0x200] + fVar7 * param_4[4];
  fVar6 = fVar6 + fVar2 * DAT_101d9d848;
  fVar7 = fVar4 + fVar6;
  fVar6 = fVar6 - fVar4;
  fVar5 = fVar5 + fVar1 * DAT_101d9d848;
  fVar2 = DAT_101d9d870 * (fVar3 + fVar5);
  fVar1 = DAT_101d9d878 * (fVar5 - fVar3);
  fVar5 = fVar7 + fVar2;
  fVar7 = fVar7 - fVar2;
  fVar2 = fVar6 + fVar1;
  fVar6 = fVar6 - fVar1;
  param_3[5] = param_4[0xb] * fVar2;
  *param_3 = param_4[6] * fVar2;
  param_3[2] = fVar5 * param_4[8];
  param_3[3] = fVar5 * param_4[9];
  param_5[0x180] = (float)param_5[0x180] + fVar6 * *param_4;
  param_5[0x220] = (float)param_5[0x220] + fVar6 * param_4[5];
  param_5[0x1c0] = (float)param_5[0x1c0] + fVar7 * param_4[2];
  param_5[0x1e0] = (float)param_5[0x1e0] + fVar7 * param_4[3];
  param_3[0xe] = 0.0;
  param_3[0xf] = 0.0;
  param_3[0x10] = 0.0;
  param_3[0x11] = 0.0;
  param_3[0xc] = 0.0;
  param_3[0xd] = 0.0;
  fVar2 = param_1[0xe] + param_1[0xb];
  fVar3 = param_1[0xb] + param_1[8];
  fVar6 = param_1[2];
  fVar5 = param_1[5] + fVar6;
  fVar1 = param_1[0x11] + param_1[0xe] + fVar3;
  fVar4 = (param_1[8] + param_1[5]) * DAT_101d9d844;
  fVar3 = DAT_101d9d844 * (fVar3 + fVar5);
  fVar7 = fVar6 - fVar2;
  fVar8 = (fVar5 - fVar1) * DAT_101d9d874;
  fVar9 = fVar7 + fVar8;
  fVar7 = fVar7 - fVar8;
  param_3[10] = param_4[10] * fVar9;
  param_3[7] = fVar9 * param_4[7];
  param_3[1] = param_3[1] + fVar7 * param_4[1];
  param_3[4] = param_3[4] + fVar7 * param_4[4];
  fVar6 = fVar6 + fVar2 * DAT_101d9d848;
  fVar7 = fVar4 + fVar6;
  fVar6 = fVar6 - fVar4;
  fVar5 = fVar5 + fVar1 * DAT_101d9d848;
  fVar2 = DAT_101d9d870 * (fVar3 + fVar5);
  fVar1 = DAT_101d9d878 * (fVar5 - fVar3);
  fVar5 = fVar7 + fVar2;
  fVar7 = fVar7 - fVar2;
  fVar2 = fVar6 + fVar1;
  fVar6 = fVar6 - fVar1;
  param_3[0xb] = param_4[0xb] * fVar2;
  param_3[6] = param_4[6] * fVar2;
  param_3[8] = fVar5 * param_4[8];
  param_3[9] = fVar5 * param_4[9];
  *param_3 = *param_3 + fVar6 * *param_4;
  param_3[5] = param_3[5] + fVar6 * param_4[5];
  param_3[2] = param_3[2] + fVar7 * param_4[2];
  param_3[3] = param_3[3] + fVar7 * param_4[3];
  return;
}




undefined8 FUN_10059fc5c(long param_1,long param_2,undefined4 *param_3,int param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x198);
  lVar7 = lVar5 + (long)param_4 * 4;
  iVar1 = *(int *)(lVar7 + 0x48b8);
  lVar2 = (long)param_4 * 0x900;
  puVar3 = (undefined4 *)(lVar5 + 0x2448 + (long)iVar1 * 0x1200 + lVar2);
  iVar6 = 1 - iVar1;
  puVar4 = (undefined4 *)(lVar5 + 0x2448 + (long)iVar6 * 0x1200 + lVar2);
  *(int *)(lVar7 + 0x48b8) = iVar6;
  if (*(int *)(param_5 + 0x14) == 0) {
    lVar7 = 0;
  }
  else {
    FUN_10059f274(param_2,puVar3,puVar4,&DAT_101d9cddc,param_3);
    lVar2 = (long)param_4 * 0x900;
    lVar7 = lVar5 + 0x2448 + (long)iVar1 * 0x1200 + lVar2;
    lVar2 = lVar5 + 0x2448 + (long)iVar6 * 0x1200 + lVar2;
    FUN_10059f274(param_2 + 0x48,lVar7 + 0x48,lVar2 + 0x48,&DAT_101d9d01c,param_3 + 1);
    puVar3 = (undefined4 *)(lVar7 + 0x90);
    puVar4 = (undefined4 *)(lVar2 + 0x90);
    param_3 = param_3 + 2;
    lVar7 = 2;
  }
  iVar1 = *(int *)(param_5 + 0x10);
  iVar6 = (int)lVar7;
  if (iVar1 == 2) {
    if (*(int *)(param_5 + 0x40) <= iVar6) goto LAB_10059fe7c;
    lVar2 = param_2 + lVar7 * 0x48;
    param_2 = param_2 + (long)(iVar6 + 1) * 0x48;
    do {
      FUN_10059f7cc(lVar2,puVar3,puVar4,&DAT_101d9cefc,param_3);
      FUN_10059f7cc(param_2,puVar3 + 0x12,puVar4 + 0x12,&DAT_101d9d13c,param_3 + 1);
      lVar7 = lVar7 + 2;
      param_3 = param_3 + 2;
      puVar3 = puVar3 + 0x24;
      puVar4 = puVar4 + 0x24;
      lVar2 = lVar2 + 0x90;
      param_2 = param_2 + 0x90;
    } while (lVar7 < *(int *)(param_5 + 0x40));
  }
  else {
    if (*(int *)(param_5 + 0x40) <= iVar6) goto LAB_10059fe7c;
    lVar2 = param_2 + lVar7 * 0x48;
    param_2 = param_2 + (long)(iVar6 + 1) * 0x48;
    do {
      FUN_10059f274(lVar2,puVar3,puVar4,&DAT_101d9cddc + (long)iVar1 * 0x24,param_3);
      FUN_10059f274(param_2,puVar3 + 0x12,puVar4 + 0x12,&DAT_101d9d01c + (long)iVar1 * 0x24,
                    param_3 + 1);
      lVar7 = lVar7 + 2;
      param_3 = param_3 + 2;
      puVar3 = puVar3 + 0x24;
      puVar4 = puVar4 + 0x24;
      lVar2 = lVar2 + 0x90;
      param_2 = param_2 + 0x90;
    } while (lVar7 < *(int *)(param_5 + 0x40));
  }
  if (0x1f < (int)lVar7) {
    return 0;
  }
LAB_10059fe7c:
  iVar1 = 0x20 - (int)lVar7;
  do {
    *param_3 = *puVar3;
    *puVar4 = 0;
    param_3[0x20] = puVar3[1];
    puVar4[1] = 0;
    param_3[0x40] = puVar3[2];
    puVar4[2] = 0;
    param_3[0x60] = puVar3[3];
    puVar4[3] = 0;
    param_3[0x80] = puVar3[4];
    puVar4[4] = 0;
    param_3[0xa0] = puVar3[5];
    puVar4[5] = 0;
    param_3[0xc0] = puVar3[6];
    puVar4[6] = 0;
    param_3[0xe0] = puVar3[7];
    puVar4[7] = 0;
    param_3[0x100] = puVar3[8];
    puVar4[8] = 0;
    param_3[0x120] = puVar3[9];
    puVar4[9] = 0;
    param_3[0x140] = puVar3[10];
    puVar4[10] = 0;
    param_3[0x160] = puVar3[0xb];
    puVar4[0xb] = 0;
    param_3[0x180] = puVar3[0xc];
    puVar4[0xc] = 0;
    param_3[0x1a0] = puVar3[0xd];
    puVar4[0xd] = 0;
    param_3[0x1c0] = puVar3[0xe];
    puVar4[0xe] = 0;
    param_3[0x1e0] = puVar3[0xf];
    puVar4[0xf] = 0;
    param_3[0x200] = puVar3[0x10];
    puVar4[0x10] = 0;
    param_3[0x220] = puVar3[0x11];
    puVar4[0x11] = 0;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 0x12;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 0x12;
  } while (iVar1 != 0);
  return 0;
}




void FUN_10059ff90(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint local_279c;
  undefined1 *local_2798;
  undefined4 local_2790;
  undefined4 local_278c;
  uint local_2788 [2];
  undefined1 auStack_2780 [64];
  uint local_2740 [44];
  undefined1 auStack_2690 [64];
  uint local_2650 [44];
  undefined1 auStack_25a0 [2304];
  undefined1 auStack_1ca0 [2304];
  undefined1 auStack_13a0 [4608];
  undefined1 auStack_1a0 [156];
  undefined1 auStack_104 [156];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar8 = *(long *)(param_1 + 0x198);
  iVar2 = *(int *)(lVar8 + 0x4850);
  uVar3 = *(undefined4 *)(lVar8 + 0x4874);
  _bzero(auStack_13a0,0x1200);
  _bzero(auStack_25a0,0x1200);
  *param_3 = 0;
  _bzero(local_2788,0x1e8);
  uVar12 = 0;
  local_279c = 0;
  if (*(int *)(lVar8 + 0x4880) == 1) {
    uVar12 = *(uint *)(lVar8 + 0x4884) & 2;
    local_279c = *(uint *)(lVar8 + 0x4884) & 1;
  }
  if (*(int *)(lVar8 + 0x485c) == 0) {
    uVar4 = FUN_10059c098(param_1,local_2788,iVar2,uVar12,uVar3);
    if ((int)uVar4 != 0) goto LAB_1005a039c;
    lVar8 = 2;
  }
  else {
    uVar4 = FUN_10059c48c(param_1,local_2788,iVar2,uVar12,uVar3);
    if ((int)uVar4 != 0) goto LAB_1005a039c;
    lVar8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x198);
  sVar7 = (size_t)local_2788[0];
  if (*(int *)(lVar6 + 0x48c8) < 0) {
    if (local_2788[0] == 0) {
      sVar7 = 0;
      goto LAB_1005a00b8;
    }
  }
  else {
LAB_1005a00b8:
    pvVar5 = (void *)(*(long *)(lVar6 + 0x48b0) - sVar7);
    *(void **)(lVar6 + 0x48b0) = pvVar5;
    if ((int)sVar7 != 0) {
      _memcpy(pvVar5,(void *)(lVar6 + (long)*(int *)(lVar6 + 0x48a0) * 0x900 +
                              (long)(*(int *)(lVar6 + 0x48c8) - (int)sVar7) + 0x200),sVar7);
      lVar6 = *(long *)(param_1 + 0x198);
    }
    *(undefined4 *)(lVar6 + 0x48a8) = 0;
  }
  lVar10 = 0;
  local_2798 = auStack_2780;
  while( true ) {
    puVar9 = auStack_2780 + lVar10 * 0x78;
    if (*(int *)(lVar6 + 0x485c) == 0) {
      FUN_10059c810(param_1,auStack_1a0,puVar9,&local_278c);
    }
    else {
      FUN_10059cd84(param_1,auStack_1a0,puVar9,0,&local_278c);
    }
    uVar4 = FUN_10059cf04(param_1,auStack_25a0,auStack_1a0,puVar9,uVar3,local_278c);
    if ((int)uVar4 != 0) goto LAB_1005a039c;
    if (iVar2 == 2) {
      puVar9 = auStack_2690 + lVar10 * 0x78;
      if (*(int *)(*(long *)(param_1 + 0x198) + 0x485c) == 0) {
        FUN_10059c810(param_1,auStack_104,puVar9,&local_2790);
      }
      else {
        FUN_10059cd84(param_1,auStack_104,puVar9,local_279c,&local_2790);
      }
      if (uVar12 == 0) {
        uVar4 = FUN_10059cf04(param_1,auStack_1ca0,auStack_104,puVar9,uVar3,local_2790);
      }
      else {
        uVar4 = FUN_10059dc5c(param_1,auStack_25a0,auStack_104,puVar9,uVar3);
      }
      if (local_279c != 0) {
        uVar4 = FUN_10059eb20(uVar4,auStack_25a0,auStack_104,puVar9,uVar3,uVar12,
                              *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x485c));
      }
      if (local_279c != 0 || uVar12 != 0) {
        uVar1 = local_2740[lVar10 * 0x1e];
        if (uVar1 < local_2650[lVar10 * 0x1e]) {
          local_2740[lVar10 * 0x1e] = local_2650[lVar10 * 0x1e];
        }
        else {
          local_2650[lVar10 * 0x1e] = uVar1;
        }
      }
    }
    if (iVar2 < 1) {
      lVar6 = 0;
    }
    else {
      iVar14 = 0;
      puVar9 = auStack_13a0;
      puVar13 = auStack_25a0;
      puVar11 = local_2798;
      do {
        FUN_10059f058(uVar4,puVar13,puVar11);
        uVar4 = FUN_10059fc5c(param_1,puVar13,puVar9,iVar14,puVar11);
        iVar14 = iVar14 + 1;
        puVar9 = puVar9 + 0x900;
        puVar13 = puVar13 + 0x900;
        puVar11 = puVar11 + 0xf0;
      } while (iVar2 != iVar14);
      lVar6 = 0;
    }
    do {
      iVar14 = *(int *)(*(long *)(param_1 + 8) + 0x104);
      if (iVar14 < 3) {
        iVar14 = iVar2;
      }
      FUN_100599528(param_1,param_2,auStack_13a0 + lVar6,iVar2,iVar14);
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        param_2 = param_2 + (long)*(int *)(*(long *)(param_1 + 8) + 0x104) * 0x40;
      }
      lVar6 = lVar6 + 0x80;
    } while (lVar6 != 0x900);
    lVar10 = lVar10 + 1;
    if (lVar8 <= lVar10) break;
    lVar6 = *(long *)(param_1 + 0x198);
    local_2798 = local_2798 + 0x78;
  }
  uVar4 = 0;
  *param_3 = (int)lVar8 * 0x240;
LAB_1005a039c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}

