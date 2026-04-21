// functions/1005a — 178 functions
#include "GameKindred.h"




void thunk_FUN_1005acff0(void)

{
  FUN_1005acff0();
  return;
}




void FUN_1005a03d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                        ,0x15,0,0);
  if ((param_1 != 0) && (lVar1 != 0)) {
    *(int *)(param_1 + 0x604) = *(int *)(param_1 + 0x604) + (int)param_2;
  }
  return;
}




void FUN_1005a0434(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3 * param_2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                        ,0x22,0);
  if ((param_1 != 0) && (lVar1 != 0)) {
    *(int *)(param_1 + 0x604) = *(int *)(param_1 + 0x604) + param_3 * param_2;
  }
  return;
}




void FUN_1005a0490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2,param_3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                        ,0x3c,0);
  if ((param_1 != 0) && (lVar1 != 0)) {
    *(int *)(param_1 + 0x604) = *(int *)(param_1 + 0x604) + (int)param_3;
  }
  return;
}




void FUN_1005a04e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                ,0x52);
  return;
}




ulong FUN_1005a0508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  uint local_14;
  
  uVar1 = FUN_1005d148c(param_4,param_1,param_2,param_3,&local_14);
  if ((uVar1 | 0x10) == 0x10) {
    uVar2 = (ulong)local_14;
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}




undefined8 FUN_1005a055c(long param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x1a4) & 1) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_1005d1d28(param_1,param_2,(int)param_3);
  return uVar1;
}




undefined4 FUN_1005a0574(undefined8 param_1)

{
  undefined4 local_14;
  
  FUN_1005d1ea8(param_1,&local_14);
  return local_14;
}




void FUN_1005a0598(void)

{
  DAT_101e98fd0 = "FMOD Ogg Vorbis Codec";
  DAT_101e98fd8 = 0x10100;
  DAT_101e98fe0 = 2;
  DAT_101e98fe8 = thunk_FUN_1005a068c;
  DAT_101e98ff0 = FUN_1005a0608;
  DAT_101e98ff8 = thunk_FUN_1005a0be8;
  DAT_101e99008 = FUN_1005a062c;
  DAT_101e99028 = 10;
  DAT_101e9902c = 0x608;
  return;
}




void thunk_FUN_1005a068c(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  code *pcStack_500;
  code *pcStack_4f8;
  undefined8 uStack_4f0;
  code *pcStack_4e8;
  undefined1 auStack_4d4 [4];
  undefined1 auStack_4d0 [4];
  undefined4 uStack_4cc;
  int iStack_4c8;
  undefined1 auStack_4c4 [4];
  undefined1 auStack_4c0 [304];
  undefined1 auStack_390 [8];
  undefined1 *puStack_388;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined4 uStack_340;
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_a0;
  long lStack_98;
  short *psStack_50;
  long lStack_48;
  
  puStack_368 = PTR_defaultFileRead_101444158;
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  iStack_4c8 = 0;
  param_1[0x14] = 10;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = puStack_368;
  puStack_360 = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  puStack_358 = PTR_defaultMetaData_101444168;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  param_1[0x4c] = 0;
  uStack_340 = 0;
  uStack_228 = 0;
  uStack_208 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_48 = lVar10;
  _bzero(auStack_4c0,0x130);
  uStack_200 = *(undefined8 *)(param_1 + 100);
  iStack_260 = -1;
  lStack_98 = 0;
  puStack_388 = auStack_4c0;
  uVar6 = FUN_1005d148c(uStack_200,auStack_4d0,1,8,0);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  iVar3 = FUN_1005ed0f8(auStack_4d0,"RIFF",4);
  if (iVar3 == 0) {
    uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4d4,1,4,0);
    if ((int)uVar6 != 0) goto LAB_1005a0ad8;
    iVar3 = FUN_1005ed0f8(auStack_4d4,"WAVE",4);
    if (iVar3 == 0) {
      iVar3 = FUN_1005a8c04(auStack_390,uStack_4cc);
      if (iVar3 == 0) {
        if (psStack_50 != (short *)0x0) {
          if (iStack_260 == -1) {
            if (*psStack_50 != 0x6750) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),psStack_50,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                            ,0x13e);
              psStack_50 = (short *)0x0;
              if (lStack_98 == 0) {
                uVar6 = 0x13;
              }
              else if (*(long *)(param_1 + 0x132) == lStack_98) {
                uVar6 = 0x13;
              }
              else {
                FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lStack_98,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                              ,0x143);
                lStack_98 = 0;
                uVar6 = 0x13;
              }
              goto LAB_1005a0ad8;
            }
            param_1[0x4c] = 0xffffffff;
            iStack_4c8 = *(int *)(puStack_388 + 0x10c);
            param_1[0x4d] = uStack_25c;
            param_1[0x4e] = uStack_258;
            *(long *)(param_1 + 0x132) = lStack_98;
            param_1[0x134] = uStack_a0;
          }
          goto LAB_1005a082c;
        }
      }
      else if (psStack_50 != (short *)0x0) {
LAB_1005a082c:
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),psStack_50,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                      ,0x14c);
        psStack_50 = (short *)0x0;
      }
      if ((lStack_98 != 0) && (*(long *)(param_1 + 0x132) != lStack_98)) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lStack_98,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                      ,0x151);
        lStack_98 = 0;
      }
    }
  }
  FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
  uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4c4,1,4,0);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  iVar3 = FUN_1005ed0f8(auStack_4c4,"OggS",4);
  if (iVar3 != 0) {
    uVar6 = 0x13;
    goto LAB_1005a0ad8;
  }
  if (DAT_101da1ef8 == '\0') {
    FUN_100612168();
    DAT_101da1ef8 = '\x01';
  }
  if (iStack_4c8 == 0) {
    uVar6 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),&iStack_4c8);
    if ((int)uVar6 != 0) goto LAB_1005a0ad8;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar6 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  puVar1 = param_1 + 0x66;
  _bzero(puVar1,0x330);
  pcStack_4f8 = FUN_1005a055c;
  pcStack_500 = FUN_1005a0508;
  pcStack_4e8 = FUN_1005a0574;
  uStack_4f0 = 0;
  iVar3 = FUN_10060df48(param_1,*(undefined8 *)(param_1 + 100),puVar1,0,0,&pcStack_500);
  if (iVar3 < 0) {
    uVar8 = 0x26;
    if (iVar3 != -0x8b) {
      uVar8 = 0x13;
    }
    uVar6 = (ulong)uVar8;
    goto LAB_1005a0ad8;
  }
  lVar7 = FUN_100610250(puVar1,0xffffffff);
  uVar6 = FUN_1005a0b00(param_1);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  *(undefined4 **)(param_1 + 2) = param_1 + 0x135;
  param_1[0x178] = iStack_4c8;
  param_1[0x175] = 2;
  param_1[0x176] = *(undefined4 *)(lVar7 + 4);
  param_1[0x177] = *(undefined4 *)(lVar7 + 8);
  if (!bVar2 && iStack_4c8 != -1) {
    param_1[0x178] = iStack_4c8 - param_1[0x4c];
  }
  if ((*(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 1) == 0) {
    param_1[0x179] = 0x7fffffff;
LAB_1005a0a44:
    if (param_1[0x4c] == 0) {
      uVar5 = FUN_10061010c(puVar1);
      param_1[0x4c] = uVar5;
    }
    uVar6 = 0;
    *param_1 = 0;
  }
  else {
    iVar3 = FUN_10060e5f0(puVar1);
    lVar7 = *(long *)(param_1 + 2);
    *(undefined4 *)(lVar7 + 0x110) = 0;
    if (0 < iVar3) {
      iVar9 = 0;
      do {
        iVar4 = FUN_10060ea30(puVar1,iVar9);
        lVar7 = *(long *)(param_1 + 2);
        iVar4 = *(int *)(lVar7 + 0x110) + iVar4;
        *(int *)(lVar7 + 0x110) = iVar4;
        iVar9 = iVar9 + 1;
      } while (iVar3 != iVar9);
      if (iVar4 != 0) goto LAB_1005a0a44;
    }
    *(undefined4 *)(lVar7 + 0x110) = 0;
    uVar6 = 0x13;
  }
LAB_1005a0ad8:
  if (lVar10 != lStack_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}




undefined8 FUN_1005a0608(long param_1)

{
  *(undefined8 *)(param_1 + 0x198) = 0;
  FUN_10060de10(param_1,param_1 + 0x198);
  return 0;
}




undefined8 thunk_FUN_1005a0be8(long param_1,ulong param_2,uint param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  code *pcVar15;
  
  uVar8 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar8 < 5) {
    param_3 = *(int *)(&DAT_10115ed30 + (long)(int)uVar8 * 4) * param_3 >> 3;
  }
  uVar8 = FUN_1006107a4(param_1,param_1 + 0x198,param_2,
                        param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),0,2,1,0);
  if ((int)uVar8 < 1) {
    if (uVar8 != 0xfffffffd) {
      if (uVar8 == 0xffffff7d) {
        return 0x1f;
      }
      if (uVar8 != 0xffffff75) {
        return 0x10;
      }
      return 0x26;
    }
    uVar8 = 0;
  }
  iVar9 = *(int *)(*(long *)(param_1 + 8) + 0x104);
  if (iVar9 == 8) {
    if (uVar8 != 0) {
      uVar1 = param_2 + uVar8;
      do {
        uVar3 = *(undefined2 *)(param_2 + 2);
        uVar4 = *(undefined2 *)(param_2 + 6);
        uVar5 = *(undefined2 *)(param_2 + 8);
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_2 + 4);
        *(undefined2 *)(param_2 + 4) = uVar3;
        *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_2 + 0xe);
        *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_2 + 10);
        *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_2 + 0xc);
        *(undefined2 *)(param_2 + 0xc) = uVar4;
        *(undefined2 *)(param_2 + 0xe) = uVar5;
        param_2 = param_2 + 0x10;
      } while (param_2 < uVar1);
    }
  }
  else if (iVar9 == 6 && uVar8 != 0) {
    uVar1 = param_2 + uVar8;
    do {
      uVar3 = *(undefined2 *)(param_2 + 2);
      uVar4 = *(undefined2 *)(param_2 + 6);
      uVar5 = *(undefined2 *)(param_2 + 8);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_2 + 4);
      *(undefined2 *)(param_2 + 4) = uVar3;
      *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_2 + 10);
      *(undefined2 *)(param_2 + 8) = uVar4;
      *(undefined2 *)(param_2 + 10) = uVar5;
      param_2 = param_2 + 0xc;
    } while (param_2 < uVar1);
  }
  plVar10 = (long *)FUN_1006102b8(param_1 + 0x198,0xffffffff);
  if ((plVar10 != (long *)0x0) && ((int)plVar10[2] != 0)) {
    if (0 < (int)plVar10[2]) {
      lVar14 = 0;
      do {
        pcVar11 = *(char **)(*plVar10 + lVar14 * 8);
        for (pcVar13 = pcVar11; pcVar12 = "NONAME", *pcVar13 != '\0'; pcVar13 = pcVar13 + 1) {
          if (*pcVar13 == '=') {
            *pcVar13 = '\0';
            pcVar12 = pcVar11;
            pcVar11 = pcVar13 + 1;
            break;
          }
        }
        pcVar15 = *(code **)(param_1 + 0x38);
        iVar9 = FUN_1005ecb6c(pcVar11);
        (*pcVar15)(param_1,3,pcVar12,pcVar11,iVar9 + 1,6,1);
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)plVar10[2]);
    }
    FUN_1005fd754(param_1,plVar10);
  }
  if (param_4 != (uint *)0x0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
    if (uVar2 != 0) {
      uVar6 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
      if (uVar6 < 5) {
        uVar7 = 0;
        if ((long)*(int *)(&DAT_10115ed30 + (long)(int)uVar6 * 4) != 0) {
          uVar7 = (uint)(((ulong)uVar8 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115ed30 + (long)(int)uVar6 * 4));
        }
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar7 / uVar2;
        }
      }
      *param_4 = uVar8;
    }
  }
  return 0;
}




undefined8 FUN_1005a062c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_10060f718(param_1,param_1 + 0x198,param_3);
  if (iVar1 < 0) {
    if (iVar1 == -0x8b) {
      return 0x26;
    }
    if (param_3 != 0) {
      return 0xe;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      return 0xe;
    }
  }
  return 0;
}




void FUN_1005a068c(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  code *local_500;
  code *pcStack_4f8;
  undefined8 uStack_4f0;
  code *pcStack_4e8;
  undefined1 auStack_4d4 [4];
  undefined1 auStack_4d0 [4];
  undefined4 local_4cc;
  int local_4c8;
  undefined1 auStack_4c4 [4];
  undefined1 auStack_4c0 [304];
  undefined1 auStack_390 [8];
  undefined1 *local_388;
  undefined *local_368;
  undefined *puStack_360;
  undefined *local_358;
  undefined4 local_340;
  int local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_a0;
  long local_98;
  short *local_50;
  long local_48;
  
  local_368 = PTR_defaultFileRead_101444158;
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  local_4c8 = 0;
  param_1[0x14] = 10;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = local_368;
  puStack_360 = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  local_358 = PTR_defaultMetaData_101444168;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  param_1[0x4c] = 0;
  local_340 = 0;
  local_228 = 0;
  local_208 = 0;
  local_238 = 0;
  local_240 = 0;
  local_248 = 0;
  local_250 = 0;
  local_48 = lVar10;
  _bzero(auStack_4c0,0x130);
  local_200 = *(undefined8 *)(param_1 + 100);
  local_260 = -1;
  local_98 = 0;
  local_388 = auStack_4c0;
  uVar6 = FUN_1005d148c(local_200,auStack_4d0,1,8,0);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  iVar3 = FUN_1005ed0f8(auStack_4d0,"RIFF",4);
  if (iVar3 == 0) {
    uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4d4,1,4,0);
    if ((int)uVar6 != 0) goto LAB_1005a0ad8;
    iVar3 = FUN_1005ed0f8(auStack_4d4,"WAVE",4);
    if (iVar3 == 0) {
      iVar3 = FUN_1005a8c04(auStack_390,local_4cc);
      if (iVar3 == 0) {
        if (local_50 != (short *)0x0) {
          if (local_260 == -1) {
            if (*local_50 != 0x6750) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_50,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                            ,0x13e);
              local_50 = (short *)0x0;
              if (local_98 == 0) {
                uVar6 = 0x13;
              }
              else if (*(long *)(param_1 + 0x132) == local_98) {
                uVar6 = 0x13;
              }
              else {
                FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_98,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                              ,0x143);
                local_98 = 0;
                uVar6 = 0x13;
              }
              goto LAB_1005a0ad8;
            }
            param_1[0x4c] = 0xffffffff;
            local_4c8 = *(int *)(local_388 + 0x10c);
            param_1[0x4d] = local_25c;
            param_1[0x4e] = local_258;
            *(long *)(param_1 + 0x132) = local_98;
            param_1[0x134] = local_a0;
          }
          goto LAB_1005a082c;
        }
      }
      else if (local_50 != (short *)0x0) {
LAB_1005a082c:
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_50,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                      ,0x14c);
        local_50 = (short *)0x0;
      }
      if ((local_98 != 0) && (*(long *)(param_1 + 0x132) != local_98)) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_98,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_oggvorbis.cpp"
                      ,0x151);
        local_98 = 0;
      }
    }
  }
  FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
  uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_4c4,1,4,0);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  iVar3 = FUN_1005ed0f8(auStack_4c4,"OggS",4);
  if (iVar3 != 0) {
    uVar6 = 0x13;
    goto LAB_1005a0ad8;
  }
  if (DAT_101da1ef8 == '\0') {
    FUN_100612168();
    DAT_101da1ef8 = '\x01';
  }
  if (local_4c8 == 0) {
    uVar6 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),&local_4c8);
    if ((int)uVar6 != 0) goto LAB_1005a0ad8;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar6 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),param_1[0x4c],0);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  puVar1 = param_1 + 0x66;
  _bzero(puVar1,0x330);
  pcStack_4f8 = FUN_1005a055c;
  local_500 = FUN_1005a0508;
  pcStack_4e8 = FUN_1005a0574;
  uStack_4f0 = 0;
  iVar3 = FUN_10060df48(param_1,*(undefined8 *)(param_1 + 100),puVar1,0,0,&local_500);
  if (iVar3 < 0) {
    uVar8 = 0x26;
    if (iVar3 != -0x8b) {
      uVar8 = 0x13;
    }
    uVar6 = (ulong)uVar8;
    goto LAB_1005a0ad8;
  }
  lVar7 = FUN_100610250(puVar1,0xffffffff);
  uVar6 = FUN_1005a0b00(param_1);
  if ((int)uVar6 != 0) goto LAB_1005a0ad8;
  *(undefined4 **)(param_1 + 2) = param_1 + 0x135;
  param_1[0x178] = local_4c8;
  param_1[0x175] = 2;
  param_1[0x176] = *(undefined4 *)(lVar7 + 4);
  param_1[0x177] = *(undefined4 *)(lVar7 + 8);
  if (!bVar2 && local_4c8 != -1) {
    param_1[0x178] = local_4c8 - param_1[0x4c];
  }
  if ((*(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 1) == 0) {
    param_1[0x179] = 0x7fffffff;
LAB_1005a0a44:
    if (param_1[0x4c] == 0) {
      uVar5 = FUN_10061010c(puVar1);
      param_1[0x4c] = uVar5;
    }
    uVar6 = 0;
    *param_1 = 0;
  }
  else {
    iVar3 = FUN_10060e5f0(puVar1);
    lVar7 = *(long *)(param_1 + 2);
    *(undefined4 *)(lVar7 + 0x110) = 0;
    if (0 < iVar3) {
      iVar9 = 0;
      do {
        iVar4 = FUN_10060ea30(puVar1,iVar9);
        lVar7 = *(long *)(param_1 + 2);
        iVar4 = *(int *)(lVar7 + 0x110) + iVar4;
        *(int *)(lVar7 + 0x110) = iVar4;
        iVar9 = iVar9 + 1;
      } while (iVar3 != iVar9);
      if (iVar4 != 0) goto LAB_1005a0a44;
    }
    *(undefined4 *)(lVar7 + 0x110) = 0;
    uVar6 = 0x13;
  }
LAB_1005a0ad8:
  if (lVar10 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}




undefined8 FUN_1005a0b00(long param_1)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_1006102b8(param_1 + 0x198,0xffffffff);
  if ((plVar2 != (long *)0x0) && (iVar1 = (int)plVar2[2], 0 < iVar1)) {
    lVar5 = 0;
    do {
      if (*(int *)(plVar2[1] + lVar5 * 4) != 0) {
        for (pcVar3 = *(char **)(*plVar2 + lVar5 * 8); *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
          if (*pcVar3 == '=') {
            *pcVar3 = '\0';
            uVar4 = *(undefined8 *)(*plVar2 + lVar5 * 8);
            iVar1 = FUN_1005ecb6c(pcVar3 + 1);
            uVar4 = FUN_100586684(param_1,3,uVar4,pcVar3 + 1,iVar1 + 1,6,0);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            iVar1 = (int)plVar2[2];
            break;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return 0;
}




undefined8 FUN_1005a0bc8(long param_1)

{
  *(undefined8 *)(param_1 + 0x198) = 0;
  FUN_10060de10(param_1,param_1 + 0x198);
  return 0;
}




undefined8 FUN_1005a0be8(long param_1,ulong param_2,uint param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  code *pcVar15;
  
  uVar8 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar8 < 5) {
    param_3 = *(int *)(&DAT_10115ed30 + (long)(int)uVar8 * 4) * param_3 >> 3;
  }
  uVar8 = FUN_1006107a4(param_1,param_1 + 0x198,param_2,
                        param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),0,2,1,0);
  if ((int)uVar8 < 1) {
    if (uVar8 != 0xfffffffd) {
      if (uVar8 == 0xffffff7d) {
        return 0x1f;
      }
      if (uVar8 != 0xffffff75) {
        return 0x10;
      }
      return 0x26;
    }
    uVar8 = 0;
  }
  iVar9 = *(int *)(*(long *)(param_1 + 8) + 0x104);
  if (iVar9 == 8) {
    if (uVar8 != 0) {
      uVar1 = param_2 + uVar8;
      do {
        uVar3 = *(undefined2 *)(param_2 + 2);
        uVar4 = *(undefined2 *)(param_2 + 6);
        uVar5 = *(undefined2 *)(param_2 + 8);
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_2 + 4);
        *(undefined2 *)(param_2 + 4) = uVar3;
        *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_2 + 0xe);
        *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_2 + 10);
        *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_2 + 0xc);
        *(undefined2 *)(param_2 + 0xc) = uVar4;
        *(undefined2 *)(param_2 + 0xe) = uVar5;
        param_2 = param_2 + 0x10;
      } while (param_2 < uVar1);
    }
  }
  else if (iVar9 == 6 && uVar8 != 0) {
    uVar1 = param_2 + uVar8;
    do {
      uVar3 = *(undefined2 *)(param_2 + 2);
      uVar4 = *(undefined2 *)(param_2 + 6);
      uVar5 = *(undefined2 *)(param_2 + 8);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_2 + 4);
      *(undefined2 *)(param_2 + 4) = uVar3;
      *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_2 + 10);
      *(undefined2 *)(param_2 + 8) = uVar4;
      *(undefined2 *)(param_2 + 10) = uVar5;
      param_2 = param_2 + 0xc;
    } while (param_2 < uVar1);
  }
  plVar10 = (long *)FUN_1006102b8(param_1 + 0x198,0xffffffff);
  if ((plVar10 != (long *)0x0) && ((int)plVar10[2] != 0)) {
    if (0 < (int)plVar10[2]) {
      lVar14 = 0;
      do {
        pcVar11 = *(char **)(*plVar10 + lVar14 * 8);
        for (pcVar13 = pcVar11; pcVar12 = "NONAME", *pcVar13 != '\0'; pcVar13 = pcVar13 + 1) {
          if (*pcVar13 == '=') {
            *pcVar13 = '\0';
            pcVar12 = pcVar11;
            pcVar11 = pcVar13 + 1;
            break;
          }
        }
        pcVar15 = *(code **)(param_1 + 0x38);
        iVar9 = FUN_1005ecb6c(pcVar11);
        (*pcVar15)(param_1,3,pcVar12,pcVar11,iVar9 + 1,6,1);
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)plVar10[2]);
    }
    FUN_1005fd754(param_1,plVar10);
  }
  if (param_4 != (uint *)0x0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
    if (uVar2 != 0) {
      uVar6 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
      if (uVar6 < 5) {
        uVar7 = 0;
        if ((long)*(int *)(&DAT_10115ed30 + (long)(int)uVar6 * 4) != 0) {
          uVar7 = (uint)(((ulong)uVar8 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115ed30 + (long)(int)uVar6 * 4));
        }
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar7 / uVar2;
        }
      }
      *param_4 = uVar8;
    }
  }
  return 0;
}




undefined8 FUN_1005a0e64(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_10060f718(param_1,param_1 + 0x198,param_3);
  if (iVar1 < 0) {
    if (iVar1 == -0x8b) {
      return 0x26;
    }
    if (param_3 != 0) {
      return 0xe;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      return 0xe;
    }
  }
  return 0;
}




void FUN_1005a0ec4(void)

{
  DAT_101e990a8 = "FMOD Playlist Reader Codec";
  DAT_101e990b0 = 0x10100;
  DAT_101e990b8 = 2;
  DAT_101e990c0 = thunk_FUN_1005a0f4c;
  DAT_101e990c8 = FUN_1005a0f34;
  DAT_101e990d0 = FUN_1005a0f3c;
  DAT_101e990e0 = FUN_1005a0f44;
  DAT_101e99100 = 0xb;
  DAT_101e99104 = 0x2c8;
  return;
}




void thunk_FUN_1005a0f4c(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  param_1[0x14] = 0xb;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  puVar1 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0xc) = puVar1;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  lStack_38 = lVar5;
  uVar3 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_49);
  iVar2 = (int)uVar3;
  do {
    if (iVar2 != 0) {
LAB_1005a11d0:
      if (lVar5 != lStack_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail(uVar3);
      }
      return;
    }
    if (0x20 < (ulong)bStack_49 || (1L << ((ulong)bStack_49 & 0x3f) & 0x100002600U) == 0) {
      uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xffffffff,1);
      if ((int)uVar3 != 0) goto LAB_1005a11d0;
      uStack_48 = 0;
      uStack_40 = 0;
      uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&uStack_48,0xc,1,0);
      if (((uint)uVar3 | 0x10) != 0x10) goto LAB_1005a11d0;
      iVar2 = FUN_1005ed180("#EXTM3U",&uStack_48,7);
      if (iVar2 == 0) {
        uVar3 = FUN_1005a12a4(param_1);
        iVar2 = (int)uVar3;
      }
      else {
        iVar2 = FUN_1005ed180("[PLAYLIST]",&uStack_48,10);
        if (iVar2 == 0) {
          uVar3 = FUN_1005a170c(param_1);
          iVar2 = (int)uVar3;
        }
        else {
          iVar2 = FUN_1005ed180("<ASX VERSION",&uStack_48,0xc);
          if (iVar2 == 0) {
            uVar3 = FUN_1005a1984(param_1);
            iVar2 = (int)uVar3;
          }
          else {
            iVar2 = FUN_1005ed180("<?WPL VERSION",&uStack_48,0xc);
            if (iVar2 == 0) {
              uVar3 = FUN_1005a1c9c(param_1);
              iVar2 = (int)uVar3;
            }
            else {
              iVar2 = FUN_1005ed180("<?XML VERSION",&uStack_48,0xc);
              if (iVar2 == 0) {
                uVar3 = FUN_1005a1ed8(param_1);
                iVar2 = (int)uVar3;
              }
              else {
                uVar3 = FUN_1005d2068(*(undefined8 *)(param_1 + 100),&lStack_58);
                if ((int)uVar3 != 0) goto LAB_1005a11d0;
                iVar2 = FUN_1005ecb6c(lStack_58);
                lVar4 = (long)(iVar2 + -4);
                iVar2 = FUN_1005ed0f8(lStack_58 + lVar4,".pls",4);
                if ((((iVar2 != 0) &&
                     (iVar2 = FUN_1005ed0f8(lStack_58 + lVar4,".m3u",4), iVar2 != 0)) &&
                    (iVar2 = FUN_1005ed0f8(lStack_58 + lVar4,".asx",4), iVar2 != 0)) &&
                   (iVar2 = FUN_1005ed0f8(lStack_58 + lVar4,".wax",4), iVar2 != 0)) {
                  uVar3 = 0x13;
                  goto LAB_1005a11d0;
                }
                uVar3 = FUN_1005a21c4(param_1);
                iVar2 = (int)uVar3;
              }
            }
          }
        }
      }
      if (iVar2 == 0) {
        _bzero(param_1 + 0x66,0x130);
        uVar3 = 0;
        *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
        *param_1 = 0;
      }
      goto LAB_1005a11d0;
    }
    uVar3 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_49);
    iVar2 = (int)uVar3;
  } while( true );
}




undefined8 FUN_1005a0f34(void)

{
  return 0;
}




undefined8 FUN_1005a0f3c(void)

{
  return 0;
}




undefined8 FUN_1005a0f44(void)

{
  return 0;
}




void FUN_1005a0f4c(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  param_1[0x14] = 0xb;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  puVar1 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0xc) = puVar1;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  local_38 = lVar5;
  uVar3 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_49);
  iVar2 = (int)uVar3;
  do {
    if (iVar2 != 0) {
LAB_1005a11d0:
      if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail(uVar3);
      }
      return;
    }
    if (0x20 < (ulong)local_49 || (1L << ((ulong)local_49 & 0x3f) & 0x100002600U) == 0) {
      uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xffffffff,1);
      if ((int)uVar3 != 0) goto LAB_1005a11d0;
      local_48 = 0;
      uStack_40 = 0;
      uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_48,0xc,1,0);
      if (((uint)uVar3 | 0x10) != 0x10) goto LAB_1005a11d0;
      iVar2 = FUN_1005ed180("#EXTM3U",&local_48,7);
      if (iVar2 == 0) {
        uVar3 = FUN_1005a12a4(param_1);
        iVar2 = (int)uVar3;
      }
      else {
        iVar2 = FUN_1005ed180("[PLAYLIST]",&local_48,10);
        if (iVar2 == 0) {
          uVar3 = FUN_1005a170c(param_1);
          iVar2 = (int)uVar3;
        }
        else {
          iVar2 = FUN_1005ed180("<ASX VERSION",&local_48,0xc);
          if (iVar2 == 0) {
            uVar3 = FUN_1005a1984(param_1);
            iVar2 = (int)uVar3;
          }
          else {
            iVar2 = FUN_1005ed180("<?WPL VERSION",&local_48,0xc);
            if (iVar2 == 0) {
              uVar3 = FUN_1005a1c9c(param_1);
              iVar2 = (int)uVar3;
            }
            else {
              iVar2 = FUN_1005ed180("<?XML VERSION",&local_48,0xc);
              if (iVar2 == 0) {
                uVar3 = FUN_1005a1ed8(param_1);
                iVar2 = (int)uVar3;
              }
              else {
                uVar3 = FUN_1005d2068(*(undefined8 *)(param_1 + 100),&local_58);
                if ((int)uVar3 != 0) goto LAB_1005a11d0;
                iVar2 = FUN_1005ecb6c(local_58);
                lVar4 = (long)(iVar2 + -4);
                iVar2 = FUN_1005ed0f8(local_58 + lVar4,".pls",4);
                if ((((iVar2 != 0) && (iVar2 = FUN_1005ed0f8(local_58 + lVar4,".m3u",4), iVar2 != 0)
                     ) && (iVar2 = FUN_1005ed0f8(local_58 + lVar4,".asx",4), iVar2 != 0)) &&
                   (iVar2 = FUN_1005ed0f8(local_58 + lVar4,".wax",4), iVar2 != 0)) {
                  uVar3 = 0x13;
                  goto LAB_1005a11d0;
                }
                uVar3 = FUN_1005a21c4(param_1);
                iVar2 = (int)uVar3;
              }
            }
          }
        }
      }
      if (iVar2 == 0) {
        _bzero(param_1 + 0x66,0x130);
        uVar3 = 0;
        *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
        *param_1 = 0;
      }
      goto LAB_1005a11d0;
    }
    uVar3 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_49);
    iVar2 = (int)uVar3;
  } while( true );
}




undefined8 FUN_1005a11f4(long param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  byte local_41;
  
  uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_41);
  if ((int)uVar1 == 0) {
    iVar2 = 0;
    do {
      if (0x20 < (ulong)local_41 || (1L << ((ulong)local_41 & 0x3f) & 0x100002600U) == 0) {
        uVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = iVar2;
          return 0;
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
      uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_41);
    } while ((int)uVar1 == 0);
  }
  return uVar1;
}




void FUN_1005a12a4(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int local_270;
  byte local_26a;
  byte local_269 [513];
  long local_68;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_270 = 0;
  local_68 = lVar5;
  uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0,0);
  if ((int)uVar3 == 0) {
    iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
    if (iVar1 == 0) {
      lVar4 = 0;
      do {
        local_269[lVar4 + 1] = local_26a;
        if (local_26a == 0xd) {
          FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
          FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
          if (local_269[0] != 10) {
LAB_1005a13a0:
            iVar1 = FUN_1005ed180(local_269 + 1,"#EXTM3U",7);
            if (iVar1 == 0) {
              iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
              goto joined_r0x0001005a13cc;
            }
            uVar3 = 0x13;
            goto LAB_1005a1304;
          }
        }
        else if (local_26a == 10) goto LAB_1005a13a0;
        iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
        uVar3 = 0x13;
        if ((0x1fe < lVar4) || (lVar4 = lVar4 + 1, iVar1 != 0)) goto LAB_1005a1304;
      } while( true );
    }
    uVar3 = 0x13;
  }
LAB_1005a1304:
  if (lVar5 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
joined_r0x0001005a13cc:
  if (iVar1 != 0) goto LAB_1005a16f8;
  if (0x20 < (ulong)local_269[0] || (1L << ((ulong)local_269[0] & 0x3f) & 0x100002600U) == 0) {
    iVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
    if (iVar1 != 0) goto LAB_1005a16f8;
    iVar1 = 0;
    do {
      iVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
      if (iVar2 != 0) break;
      if (iVar1 < 0x200) {
        local_269[(long)iVar1 + 1] = local_26a;
        iVar1 = iVar1 + 1;
      }
    } while (local_26a != 0x3a);
    iVar1 = FUN_1005ed180("#EXTINF",local_269 + 1,7);
    if (iVar1 != 0) {
      uVar3 = 0x13;
      goto LAB_1005a1304;
    }
    do {
      iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
      if (iVar1 != 0) goto LAB_1005a16f8;
    } while ((ulong)local_269[0] < 0x21 && (1L << ((ulong)local_269[0] & 0x3f) & 0x100002600U) != 0)
    ;
    iVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
    if (iVar1 != 0) goto LAB_1005a16f8;
    iVar1 = 0;
    do {
      iVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
      if (iVar2 != 0) break;
      if (iVar1 < 0x1ff) {
        local_269[(long)iVar1 + 1] = local_26a;
        iVar1 = iVar1 + 1;
      }
    } while (local_26a != 0x2c);
    local_269[iVar1] = 0;
    local_270 = _atoi((char *)(local_269 + 1));
    FUN_100586684(param_1,8,"LENGTH",&local_270,4,1,0);
    do {
      iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
      if (iVar1 != 0) goto LAB_1005a16f8;
    } while ((ulong)local_269[0] < 0x21 && (1L << ((ulong)local_269[0] & 0x3f) & 0x100002600U) != 0)
    ;
    iVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
    if (iVar1 != 0) goto LAB_1005a16f8;
    iVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
    iVar1 = 0;
    while (iVar2 == 0) {
      if (((local_26a != 10) && (iVar1 < 0x1ff)) && (local_26a != 0xd)) {
        local_269[(long)iVar1 + 1] = local_26a;
        iVar1 = iVar1 + 1;
      }
      if (local_26a == 0xd) {
        FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
        FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
        if (local_269[0] != 10) break;
      }
      else if (local_26a == 10) break;
      iVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
    }
    local_269[(long)iVar1 + 1] = 0;
    FUN_100586684(param_1,8,"TITLE",local_269 + 1,iVar1 + 1,3,0);
    do {
      iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
      if (iVar1 != 0) goto LAB_1005a16f8;
    } while ((ulong)local_269[0] < 0x21 && (1L << ((ulong)local_269[0] & 0x3f) & 0x100002600U) != 0)
    ;
    iVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
    if (iVar1 != 0) goto LAB_1005a16f8;
    iVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
    iVar1 = 0;
    while (iVar2 == 0) {
      if (((local_26a != 10) && (iVar1 < 0x1ff)) && (local_26a != 0xd)) {
        local_269[(long)iVar1 + 1] = local_26a;
        iVar1 = iVar1 + 1;
      }
      if (local_26a == 0xd) {
        FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
        FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
        if (local_269[0] != 10) break;
      }
      else if (local_26a == 10) break;
      iVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_26a);
    }
    local_269[(long)iVar1 + 1] = 0;
    FUN_100586684(param_1,8,"FILE",local_269 + 1,iVar1,3,0);
  }
  iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),local_269);
  goto joined_r0x0001005a13cc;
LAB_1005a16f8:
  uVar3 = 0;
  goto LAB_1005a1304;
}




void FUN_1005a170c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  int local_270;
  int local_26c;
  int aiStack_268 [128];
  long local_68;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar5;
  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0,0);
  if ((int)uVar2 == 0) {
    iVar1 = FUN_1005a257c(param_1,aiStack_268,0x200,0);
    if (iVar1 == 0) {
      iVar1 = FUN_1005ed180(aiStack_268,"[playlist]",10);
      if (iVar1 == 0) {
        iVar1 = FUN_1005a257c(param_1,aiStack_268,0x200,0);
        if (iVar1 == 0) {
          do {
            iVar1 = FUN_1005ed180("File",aiStack_268,4);
            if (iVar1 == 0) {
              iVar1 = FUN_1005a257c(param_1,aiStack_268,0x200,&local_26c);
              if (iVar1 != 0) goto LAB_1005a1950;
              iVar1 = local_26c + 1;
              piVar4 = aiStack_268;
              uVar2 = 3;
              pcVar3 = "FILE";
LAB_1005a1924:
              FUN_100586684(param_1,8,pcVar3,piVar4,iVar1,uVar2,0);
            }
            else {
              iVar1 = FUN_1005ed180("Title",aiStack_268,5);
              if (iVar1 == 0) {
                iVar1 = FUN_1005a257c(param_1,aiStack_268,0x200,&local_26c);
                if (iVar1 == 0) {
                  iVar1 = local_26c + 1;
                  piVar4 = aiStack_268;
                  uVar2 = 3;
                  pcVar3 = "TITLE";
                  goto LAB_1005a1924;
                }
                goto LAB_1005a1950;
              }
              iVar1 = FUN_1005ed180("Length",aiStack_268,6);
              if (iVar1 == 0) {
                local_270 = 0;
                iVar1 = FUN_1005a257c(param_1,aiStack_268,0x200,&local_26c);
                uVar2 = 0;
                if (iVar1 == 0) {
                  *(undefined1 *)((long)aiStack_268 + (long)local_26c) = 0;
                  local_270 = _atoi((char *)aiStack_268);
                  piVar4 = &local_270;
                  iVar1 = 4;
                  uVar2 = 1;
                  pcVar3 = "LENGTH";
                  goto LAB_1005a1924;
                }
                break;
              }
              iVar1 = FUN_1005ed180("NumberOfEntries",aiStack_268,0xf);
              if (((iVar1 == 0) || (iVar1 = FUN_1005ed180("Version",aiStack_268,7), iVar1 == 0)) &&
                 (iVar1 = FUN_1005a257c(param_1,aiStack_268,0x200,0), iVar1 != 0))
              goto LAB_1005a1950;
            }
            iVar1 = FUN_1005a257c(param_1,aiStack_268,0x200,0);
            uVar2 = 0;
          } while (iVar1 == 0);
        }
        else {
LAB_1005a1950:
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0x13;
      }
    }
    else {
      uVar2 = 0x13;
    }
  }
  if (lVar5 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}




void FUN_1005a1984(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_670;
  int local_66c;
  char local_668 [512];
  char acStack_468 [512];
  char local_268 [512];
  long local_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_670 = 0x200;
  local_66c = 0x200;
  local_68 = lVar8;
  uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005a22a8(param_1,local_268,&local_66c,0,0), (int)uVar3 == 0)) {
    iVar1 = FUN_1005ed180("ASX VERSION",local_268,0xb);
    if (iVar1 == 0) {
      local_670 = 0x200;
      local_66c = 0x200;
      iVar1 = FUN_1005a22a8(param_1,local_268,&local_66c,acStack_468,&local_670);
      if (iVar1 == 0) {
        do {
          local_268[local_66c] = '\0';
          acStack_468[local_670] = '\0';
          iVar1 = FUN_1005ed180("ENTRY",local_268,5);
          if (iVar1 == 0) {
            pcVar5 = (char *)0x0;
            pcVar4 = "ENTRY";
            iVar1 = 0;
LAB_1005a1c60:
            FUN_100586684(param_1,8,pcVar4,pcVar5,iVar1,6,0);
          }
          else {
            if (local_670 != 0) {
              pcVar4 = (char *)FUN_1005ed068(local_268);
              iVar1 = local_670 + 1;
              pcVar5 = acStack_468;
              goto LAB_1005a1c60;
            }
            lVar6 = 0;
            do {
              if (0x1ff < lVar6) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              lVar7 = lVar6 + 1;
              pcVar4 = local_268 + lVar6;
              lVar6 = lVar7;
            } while (*pcVar4 != '\"');
            iVar1 = (int)lVar7;
            lVar6 = 0;
            do {
              lVar7 = lVar6;
              if (local_268[lVar6 + iVar1] == '\"') break;
              lVar7 = lVar6 + 1;
              local_668[lVar6] = local_268[lVar6 + iVar1];
              lVar6 = lVar7;
            } while (iVar1 + (int)lVar7 < 0x1ff);
            iVar1 = (int)lVar7;
            local_668[iVar1] = '\0';
            iVar2 = FUN_1005ed180("REF HREF",local_268,8);
            if (iVar2 == 0) {
              iVar1 = iVar1 + 1;
              pcVar5 = local_668;
              pcVar4 = "FILE";
              goto LAB_1005a1c60;
            }
            iVar2 = FUN_1005ed180("MOREINFO HREF",local_268,0xd);
            if (iVar2 == 0) {
              iVar1 = iVar1 + 1;
              pcVar5 = local_668;
              pcVar4 = "MOREINFO";
              goto LAB_1005a1c60;
            }
            iVar2 = FUN_1005ed180("DURATION VALUE",local_268,0xe);
            if (iVar2 == 0) {
              iVar1 = iVar1 + 1;
              pcVar5 = local_668;
              pcVar4 = "DURATION";
              goto LAB_1005a1c60;
            }
            iVar2 = FUN_1005ed180("LOGO HREF",local_268,9);
            if (iVar2 == 0) {
              iVar1 = iVar1 + 1;
              pcVar5 = local_668;
              pcVar4 = "LOGO";
              goto LAB_1005a1c60;
            }
            iVar2 = FUN_1005ed180("BANNER HREF",local_268,0xb);
            if (iVar2 == 0) {
              iVar1 = iVar1 + 1;
              pcVar5 = local_668;
              pcVar4 = "BANNER";
              goto LAB_1005a1c60;
            }
          }
          local_670 = 0x200;
          local_66c = 0x200;
          iVar1 = FUN_1005a22a8(param_1,local_268,&local_66c,acStack_468,&local_670);
          uVar3 = 0;
        } while (iVar1 == 0);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
  if (lVar8 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




void FUN_1005a1c9c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_670;
  int local_66c;
  char local_668 [512];
  char acStack_468 [512];
  char local_268 [512];
  long local_68;
  
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  local_670 = 0x200;
  local_66c = 0x200;
  local_68 = lVar7;
  uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005a22a8(param_1,local_268,&local_66c,0,0), (int)uVar3 == 0)) {
    iVar1 = FUN_1005ed180("?WPL VERSION",local_268,0xc);
    if (iVar1 == 0) {
      do {
        local_66c = 0x200;
        uVar3 = FUN_1005a22a8(param_1,local_268,&local_66c,0,0);
        if ((int)uVar3 != 0) goto LAB_1005a1d98;
        iVar1 = FUN_1005ed180("seq",local_268,3);
      } while (iVar1 != 0);
      local_670 = 0x200;
      local_66c = 0x200;
      iVar1 = FUN_1005a22a8(param_1,local_268,&local_66c,acStack_468,&local_670);
      if (iVar1 == 0) {
        do {
          local_268[local_66c] = '\0';
          acStack_468[local_670] = '\0';
          if (local_670 == 0) {
            lVar6 = 0;
            do {
              if (0x1ff < lVar6) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              lVar8 = lVar6 + 1;
              pcVar5 = local_268 + lVar6;
              lVar6 = lVar8;
            } while (*pcVar5 != '\"');
            iVar1 = (int)lVar8;
            lVar6 = 0;
            do {
              lVar8 = lVar6;
              if (local_268[lVar6 + iVar1] == '\"') break;
              lVar8 = lVar6 + 1;
              local_668[lVar6] = local_268[lVar6 + iVar1];
              lVar6 = lVar8;
            } while (iVar1 + (int)lVar8 < 0x1ff);
            iVar1 = (int)lVar8;
            local_668[iVar1] = '\0';
            iVar2 = FUN_1005ed180("MEDIA SRC",local_268,8);
            if (iVar2 == 0) {
              pcVar5 = local_668;
              pcVar4 = "FILE";
              goto LAB_1005a1e9c;
            }
          }
          else {
            pcVar4 = (char *)FUN_1005ed068(local_268);
            pcVar5 = acStack_468;
            iVar1 = local_670;
LAB_1005a1e9c:
            FUN_100586684(param_1,8,pcVar4,pcVar5,iVar1 + 1,6,0);
          }
          local_670 = 0x200;
          local_66c = 0x200;
          iVar1 = FUN_1005a22a8(param_1,local_268,&local_66c,acStack_468,&local_670);
          uVar3 = 0;
        } while (iVar1 == 0);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
LAB_1005a1d98:
  if (lVar7 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}




void FUN_1005a1ed8(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_670;
  int local_66c;
  char local_668 [5];
  char acStack_663 [507];
  char acStack_468 [512];
  char local_268 [512];
  long local_68;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  local_670 = 0x200;
  local_66c = 0x200;
  local_68 = lVar9;
  uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005a22a8(param_1,local_268,&local_66c,0,0), (int)uVar3 == 0)) {
    iVar1 = FUN_1005ed180("?XML VERSION",local_268,0xc);
    if (iVar1 == 0) {
      iVar1 = FUN_1005ed180("ENTRY PLAYSTRING=",local_268,0x10);
      uVar6 = 0x200;
      if (iVar1 != 0) {
        do {
          local_670 = 0x200;
          local_66c = 0x200;
          iVar1 = FUN_1005a22a8(param_1,local_268,&local_66c,acStack_468,&local_670);
          if (iVar1 != 0) {
            uVar3 = 0x13;
            goto LAB_1005a1f60;
          }
          local_268[local_66c] = '\0';
          acStack_468[(int)local_670] = '\0';
          iVar1 = FUN_1005ed180("ENTRY PLAYSTRING=",local_268,0x10);
        } while (iVar1 != 0);
        uVar6 = (ulong)local_670;
      }
      do {
        if ((int)uVar6 == 0) {
          lVar7 = 0;
          do {
            if (0x1ff < lVar7) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            lVar8 = lVar7 + 1;
            pcVar4 = local_268 + lVar7;
            lVar7 = lVar8;
          } while (*pcVar4 != '\"');
          iVar1 = (int)lVar8;
          lVar7 = 0;
          do {
            lVar8 = lVar7;
            if (local_268[lVar7 + iVar1] == '\"') break;
            lVar8 = lVar7 + 1;
            local_668[lVar7] = local_268[lVar7 + iVar1];
            lVar7 = lVar8;
          } while (iVar1 + (int)lVar8 < 0x1ff);
          iVar1 = (int)lVar8;
          local_668[iVar1] = '\0';
          iVar2 = FUN_1005ed180("ENTRY PLAYSTRING=",local_268,0x11);
          if (iVar2 == 0) {
            iVar2 = FUN_1005ed180("FILE:",local_668,5);
            iVar1 = iVar1 + 1;
            if (iVar2 == 0) {
              pcVar4 = "FILE";
              pcVar5 = acStack_663;
            }
            else {
              pcVar4 = "FILE";
              pcVar5 = local_668;
            }
            goto LAB_1005a205c;
          }
          iVar2 = FUN_1005ed180("NAME",local_268,0xd);
          if (iVar2 == 0) {
            iVar1 = iVar1 + 1;
            pcVar4 = "NAME";
            pcVar5 = local_668;
            goto LAB_1005a205c;
          }
          iVar2 = FUN_1005ed180("LENGTH",local_268,0xe);
          if (iVar2 == 0) {
            iVar1 = iVar1 + 1;
            pcVar4 = "LENGTH";
            pcVar5 = local_668;
            goto LAB_1005a205c;
          }
        }
        else {
          pcVar4 = (char *)FUN_1005ed068(local_268);
          iVar1 = local_670 + 1;
          pcVar5 = acStack_468;
LAB_1005a205c:
          FUN_100586684(param_1,8,pcVar4,pcVar5,iVar1,3,0);
        }
        local_670 = 0x200;
        local_66c = 0x200;
        iVar1 = FUN_1005a22a8(param_1,local_268,&local_66c,acStack_468,&local_670);
        if (iVar1 != 0) goto LAB_1005a21b8;
        local_268[local_66c] = '\0';
        uVar6 = (ulong)(int)local_670;
        acStack_468[uVar6] = '\0';
      } while( true );
    }
    uVar3 = 0x13;
  }
LAB_1005a1f60:
  if (lVar9 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
LAB_1005a21b8:
  uVar3 = 0;
  goto LAB_1005a1f60;
}




undefined8 FUN_1005a22a8(long param_1,long param_2,int *param_3,long param_4,int *param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  char local_53;
  byte local_52;
  byte local_51;
  
  local_53 = '\0';
  uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_52);
  iVar1 = (int)uVar2;
  while( true ) {
    if (iVar1 != 0) {
      return uVar2;
    }
    if (0x20 < (ulong)local_52 || (1L << ((ulong)local_52 & 0x3f) & 0x100002600U) == 0) break;
    uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_52);
    iVar1 = (int)uVar2;
  }
  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  do {
    uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_53);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  } while (local_53 != '<');
  iVar1 = 0;
  do {
    uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_53);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (iVar1 < *param_3) {
      *(char *)(param_2 + iVar1) = local_53;
      iVar1 = iVar1 + 1;
    }
  } while (local_53 != '>');
  *param_3 = iVar1 + -1;
  uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_51);
  iVar1 = (int)uVar2;
  while( true ) {
    if (iVar1 != 0) {
      return uVar2;
    }
    if (0x20 < (ulong)local_51 || (1L << ((ulong)local_51 & 0x3f) & 0x100002600U) == 0) break;
    uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_51);
    iVar1 = (int)uVar2;
  }
  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (param_5 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_5;
  }
  iVar3 = 0;
  do {
    uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_53);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (iVar3 < iVar1) {
      *(char *)(param_4 + iVar3) = local_53;
      iVar3 = iVar3 + 1;
    }
  } while (local_53 != '<');
  if (param_5 != (int *)0x0) {
    *param_5 = iVar3 + -1;
  }
  uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_53);
  if ((int)uVar2 == 0) {
    if (local_53 == '/') {
      do {
        uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_53);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      } while (local_53 != '>');
    }
    else {
      uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xfffffffe,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1005a24a8(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  do {
    if (0x1ff < lVar4) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    lVar5 = lVar4 + 1;
    pcVar1 = (char *)(param_2 + lVar4);
    lVar4 = lVar5;
  } while (*pcVar1 != '\"');
  iVar3 = (int)lVar5;
  lVar4 = 0;
  do {
    cVar2 = *(char *)(param_2 + iVar3 + lVar4);
    lVar5 = lVar4;
    if (cVar2 == '\"') break;
    lVar5 = lVar4 + 1;
    *(char *)(param_3 + lVar4) = cVar2;
    lVar4 = lVar5;
  } while (iVar3 + (int)lVar5 < 0x1ff);
  *(undefined1 *)(param_3 + (int)lVar5) = 0;
  *param_4 = (int)lVar5;
  return 0;
}




bool FUN_1005a2510(long param_1,int param_2)

{
  bool bVar1;
  char local_21;
  
  if (param_2 == 10) {
    bVar1 = true;
  }
  else if (param_2 == 0xd) {
    FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_21);
    FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
    bVar1 = local_21 != '\n';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




undefined8 FUN_1005a257c(long param_1,long param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  byte local_54;
  byte local_53;
  char local_52;
  char local_51;
  
  uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_53);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar2 = 0;
  while ((ulong)local_53 < 0x21 && (1L << ((ulong)local_53 & 0x3f) & 0x100002600U) != 0) {
    uVar2 = uVar2 + 1;
    uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_53);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_54);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  iVar3 = 0;
  do {
    if (local_54 != 10 && local_54 != 0xd) {
      if (iVar3 < param_3) {
        *(byte *)(param_2 + iVar3) = local_54;
        iVar3 = iVar3 + 1;
      }
      if (local_54 == 0x3d) {
        uVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),~uVar2 - iVar3,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_54);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),iVar3 + uVar2,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (local_54 == 0xd) {
          FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_52);
          FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
          if (local_52 != '\n') {
LAB_1005a2770:
            iVar3 = iVar3 + -1;
            goto LAB_1005a278c;
          }
        }
        else if (local_54 == 10) goto LAB_1005a2770;
      }
      if (local_54 == 0x5d) {
        uVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),-iVar3,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_54);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),iVar3 + -1,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (local_54 == 0x5b) {
          uVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),2,1);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          goto LAB_1005a278c;
        }
      }
    }
    if (local_54 == 0xd) {
      FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_51);
      FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
      if (local_51 != '\n') {
LAB_1005a278c:
        if (param_4 != (int *)0x0) {
          *param_4 = iVar3;
        }
        *(undefined1 *)(param_2 + iVar3) = 0;
        return 0;
      }
    }
    else if (local_54 == 10) goto LAB_1005a278c;
    uVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_54);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  } while( true );
}




void FUN_1005a27b8(long param_1)

{
  int iVar1;
  char local_33;
  byte local_32;
  char local_31;
  
  iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_32);
  do {
    if (iVar1 != 0) {
      return;
    }
    if (0x20 < (ulong)local_32 || (1L << ((ulong)local_32 & 0x3f) & 0x100002600U) == 0) {
      iVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_33);
      if (iVar1 != 0) {
        return;
      }
      if ((local_33 != '#') && (local_33 != '[')) {
        FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
        return;
      }
      do {
        while( true ) {
          iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_33);
          if (iVar1 != 0) {
            return;
          }
          if (local_33 != '\r') break;
          FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_31);
          FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
          if (local_31 != '\n') goto LAB_1005a2894;
        }
      } while (local_33 != '\n');
    }
LAB_1005a2894:
    iVar1 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_32);
  } while( true );
}




undefined8 FUN_1005a28cc(long param_1,long param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char local_43;
  byte local_42;
  char local_41;
  
  uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_42);
  iVar1 = (int)uVar2;
  while( true ) {
    if (iVar1 != 0) {
      return uVar2;
    }
    if (0x20 < (ulong)local_42 || (1L << ((ulong)local_42 & 0x3f) & 0x100002600U) == 0) break;
    uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_42);
    iVar1 = (int)uVar2;
  }
  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_43);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  iVar1 = 0;
  do {
    if ((local_43 != '\n' && local_43 != '\r') && iVar1 < param_3) {
      *(char *)(param_2 + iVar1) = local_43;
      iVar1 = iVar1 + 1;
    }
    if (local_43 == '\r') {
      FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_41);
      FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffffff,1);
      if (local_41 != '\n') {
LAB_1005a29d0:
        if (param_4 != (int *)0x0) {
          *param_4 = iVar1;
        }
        *(undefined1 *)(param_2 + iVar1) = 0;
        return 0;
      }
    }
    else if (local_43 == '\n') goto LAB_1005a29d0;
    uVar2 = FUN_1005d19f8(*(undefined8 *)(param_1 + 400),&local_43);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  } while( true );
}




undefined8 FUN_1005a29f8(void)

{
  return 0;
}




undefined8 FUN_1005a2a00(void)

{
  return 0;
}




void FUN_1005a2a08(void)

{
  DAT_101e99180 = "FMOD Raw Codec";
  DAT_101e99188 = 0x10100;
  DAT_101e99190 = 10;
  DAT_101e99198 = FUN_1005a2a8c;
  DAT_101e991a0 = FUN_1005a2b74;
  DAT_101e991a8 = thunk_FUN_1005a2cec;
  DAT_101e991b8 = FUN_1005a2b80;
  DAT_101e99200 = FUN_1005a2bd8;
  DAT_101e991d8 = 0xc;
  DAT_101e991dc = 0x2c8;
  DAT_101e99240 = FUN_1005a2be0;
  return;
}




undefined8 FUN_1005a2a8c(undefined4 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  param_1[0x14] = 0xc;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
  uVar4 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),param_1 + 0xa9)
  ;
  if ((int)uVar4 == 0) {
    param_1[0x4c] = 0;
    uVar2 = *(int *)(param_3 + 0x14) - 1;
    if (uVar2 < 5) {
      lVar5 = *(long *)(param_1 + 2);
      *(int *)(lVar5 + 0x100) = *(int *)(param_3 + 0x14);
      uVar1 = *(uint *)(param_3 + 0xc);
      *(uint *)(lVar5 + 0x104) = uVar1;
      *(undefined4 *)(lVar5 + 0x108) = *(undefined4 *)(param_3 + 0x10);
      if (uVar1 != 0) {
        uVar3 = 0;
        if ((long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4) != 0) {
          uVar3 = (uint)(((ulong)*(uint *)(lVar5 + 0x10c) << 3) /
                        (ulong)(long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4));
        }
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar3 / uVar1;
        }
        *(uint *)(lVar5 + 0x110) = uVar2;
      }
      uVar4 = 0;
      *param_1 = 0;
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}




undefined8 FUN_1005a2b74(void)

{
  return 0;
}




undefined8 thunk_FUN_1005a2cec(long param_1,byte *param_2,uint param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uStack_38;
  uint uStack_34;
  
  lVar7 = *(long *)(param_1 + 8);
  iVar6 = *(int *)(lVar7 + 0x100);
  uVar5 = iVar6 - 1;
  if (uVar5 < 2) {
    if ((*(byte *)(param_1 + 0x55) & 1) == 0) {
      if (iVar6 == 2) {
        if (*(int *)(param_1 + 0x50) != 0) {
          uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,2,
                                *(int *)(lVar7 + 0x104) * param_3,param_4);
          uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = *param_4 / uVar5;
          }
          *param_4 = uVar2;
          return uVar4;
        }
        return 0;
      }
      if (iVar6 != 1) {
        return 0;
      }
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,
                            (param_3 & 0x1fffffff) * *(int *)(lVar7 + 0x104),&uStack_34);
      if (uStack_34 >> 2 != 0) {
        iVar6 = -(uStack_34 >> 2);
        pbVar9 = param_2;
        do {
          *pbVar9 = *pbVar9 ^ 0x80;
          pbVar9[1] = pbVar9[1] ^ 0x80;
          pbVar9[2] = pbVar9[2] ^ 0x80;
          pbVar9[3] = pbVar9[3] ^ 0x80;
          iVar6 = iVar6 + 1;
          pbVar9 = pbVar9 + 4;
        } while (iVar6 != 0);
        param_2 = param_2 + (ulong)((uStack_34 >> 2) - 1) * 4 + 4;
      }
      uVar5 = uStack_34 & 3;
      if (uVar5 != 0) {
        uVar1 = (ulong)(uVar5 - 1) + 1;
        uVar10 = uVar1 & 0x1fffffffe;
        if (uVar10 == 0) {
          uVar10 = 0;
          pbVar9 = param_2;
        }
        else {
          uVar5 = uVar5 - (int)uVar10;
          pbVar9 = param_2 + uVar10;
          uVar8 = (ulong)((uStack_34 & 3) - 1) + 1 & 0xfffffffffffffffe;
          param_2 = param_2 + 1;
          do {
            param_2[-1] = param_2[-1] ^ 0x80;
            *param_2 = *param_2 ^ 0x80;
            uVar8 = uVar8 - 2;
            param_2 = param_2 + 2;
          } while (uVar8 != 0);
        }
        if (uVar1 != uVar10) {
          do {
            *pbVar9 = *pbVar9 ^ 0x80;
            uVar5 = uVar5 - 1;
            pbVar9 = pbVar9 + 1;
          } while (uVar5 != 0);
        }
      }
      uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
      if (uVar5 == 0) {
        return uVar4;
      }
      uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
      if (uVar2 < 5) {
        uVar3 = 0;
        if ((long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4) != 0) {
          uVar3 = (uint)(((ulong)uStack_34 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4));
        }
        uStack_34 = 0;
        if (uVar5 != 0) {
          uStack_34 = uVar3 / uVar5;
        }
      }
      *param_4 = uStack_34;
      return uVar4;
    }
    iVar6 = *(int *)(lVar7 + 0x104);
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x104);
    if (4 < uVar5) goto LAB_1005a2d94;
  }
  param_3 = *(int *)(&DAT_10115ed50 + (long)(int)uVar5 * 4) * param_3 >> 3;
LAB_1005a2d94:
  uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,param_3 * iVar6,&uStack_38);
  uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
  if (uVar5 != 0) {
    uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
    if (uVar2 < 5) {
      uVar3 = 0;
      if ((long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4) != 0) {
        uVar3 = (uint)(((ulong)uStack_38 << 3) /
                      (ulong)(long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4));
      }
      uStack_38 = 0;
      if (uVar5 != 0) {
        uStack_38 = uVar3 / uVar5;
      }
    }
    *param_4 = uStack_38;
  }
  return uVar4;
}




void FUN_1005a2b80(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if ((param_3 != 0) && (param_4 != 8)) {
    uVar1 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
    if (uVar1 < 5) {
      param_3 = *(int *)(&DAT_10115ed50 + (long)(int)uVar1 * 4) * param_3 >> 3;
    }
    param_3 = param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104);
  }
  FUN_1005d1d28(*(undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x130) + param_3,0);
  return;
}




undefined8 FUN_1005a2bd8(void)

{
  return 0;
}




undefined8
FUN_1005a2be0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x100;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}




undefined8 FUN_1005a2bfc(undefined4 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  param_1[0x14] = 0xc;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
  uVar4 = (**(code **)(**(long **)(param_1 + 100) + 0x18))(*(long **)(param_1 + 100),param_1 + 0xa9)
  ;
  if ((int)uVar4 == 0) {
    param_1[0x4c] = 0;
    uVar2 = *(int *)(param_3 + 0x14) - 1;
    if (uVar2 < 5) {
      lVar5 = *(long *)(param_1 + 2);
      *(int *)(lVar5 + 0x100) = *(int *)(param_3 + 0x14);
      uVar1 = *(uint *)(param_3 + 0xc);
      *(uint *)(lVar5 + 0x104) = uVar1;
      *(undefined4 *)(lVar5 + 0x108) = *(undefined4 *)(param_3 + 0x10);
      if (uVar1 != 0) {
        uVar3 = 0;
        if ((long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4) != 0) {
          uVar3 = (uint)(((ulong)*(uint *)(lVar5 + 0x10c) << 3) /
                        (ulong)(long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4));
        }
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar3 / uVar1;
        }
        *(uint *)(lVar5 + 0x110) = uVar2;
      }
      uVar4 = 0;
      *param_1 = 0;
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}




undefined8 FUN_1005a2ce4(void)

{
  return 0;
}




undefined8 FUN_1005a2cec(long param_1,byte *param_2,uint param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint local_38;
  uint local_34;
  
  lVar7 = *(long *)(param_1 + 8);
  iVar6 = *(int *)(lVar7 + 0x100);
  uVar5 = iVar6 - 1;
  if (uVar5 < 2) {
    if ((*(byte *)(param_1 + 0x55) & 1) == 0) {
      if (iVar6 == 2) {
        if (*(int *)(param_1 + 0x50) != 0) {
          uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,2,
                                *(int *)(lVar7 + 0x104) * param_3,param_4);
          uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = *param_4 / uVar5;
          }
          *param_4 = uVar2;
          return uVar4;
        }
        return 0;
      }
      if (iVar6 != 1) {
        return 0;
      }
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,
                            (param_3 & 0x1fffffff) * *(int *)(lVar7 + 0x104),&local_34);
      if (local_34 >> 2 != 0) {
        iVar6 = -(local_34 >> 2);
        pbVar9 = param_2;
        do {
          *pbVar9 = *pbVar9 ^ 0x80;
          pbVar9[1] = pbVar9[1] ^ 0x80;
          pbVar9[2] = pbVar9[2] ^ 0x80;
          pbVar9[3] = pbVar9[3] ^ 0x80;
          iVar6 = iVar6 + 1;
          pbVar9 = pbVar9 + 4;
        } while (iVar6 != 0);
        param_2 = param_2 + (ulong)((local_34 >> 2) - 1) * 4 + 4;
      }
      uVar5 = local_34 & 3;
      if (uVar5 != 0) {
        uVar1 = (ulong)(uVar5 - 1) + 1;
        uVar10 = uVar1 & 0x1fffffffe;
        if (uVar10 == 0) {
          uVar10 = 0;
          pbVar9 = param_2;
        }
        else {
          uVar5 = uVar5 - (int)uVar10;
          pbVar9 = param_2 + uVar10;
          uVar8 = (ulong)((local_34 & 3) - 1) + 1 & 0xfffffffffffffffe;
          param_2 = param_2 + 1;
          do {
            param_2[-1] = param_2[-1] ^ 0x80;
            *param_2 = *param_2 ^ 0x80;
            uVar8 = uVar8 - 2;
            param_2 = param_2 + 2;
          } while (uVar8 != 0);
        }
        if (uVar1 != uVar10) {
          do {
            *pbVar9 = *pbVar9 ^ 0x80;
            uVar5 = uVar5 - 1;
            pbVar9 = pbVar9 + 1;
          } while (uVar5 != 0);
        }
      }
      uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
      if (uVar5 == 0) {
        return uVar4;
      }
      uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
      if (uVar2 < 5) {
        uVar3 = 0;
        if ((long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4) != 0) {
          uVar3 = (uint)(((ulong)local_34 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4));
        }
        local_34 = 0;
        if (uVar5 != 0) {
          local_34 = uVar3 / uVar5;
        }
      }
      *param_4 = local_34;
      return uVar4;
    }
    iVar6 = *(int *)(lVar7 + 0x104);
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x104);
    if (4 < uVar5) goto LAB_1005a2d94;
  }
  param_3 = *(int *)(&DAT_10115ed50 + (long)(int)uVar5 * 4) * param_3 >> 3;
LAB_1005a2d94:
  uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,param_3 * iVar6,&local_38);
  uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
  if (uVar5 != 0) {
    uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
    if (uVar2 < 5) {
      uVar3 = 0;
      if ((long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4) != 0) {
        uVar3 = (uint)(((ulong)local_38 << 3) /
                      (ulong)(long)*(int *)(&DAT_10115ed50 + (long)(int)uVar2 * 4));
      }
      local_38 = 0;
      if (uVar5 != 0) {
        local_38 = uVar3 / uVar5;
      }
    }
    *param_4 = local_38;
  }
  return uVar4;
}




void FUN_1005a2f64(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if ((param_3 != 0) && (param_4 != 8)) {
    uVar1 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
    if (uVar1 < 5) {
      param_3 = *(int *)(&DAT_10115ed50 + (long)(int)uVar1 * 4) * param_3 >> 3;
    }
    param_3 = param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104);
  }
  FUN_1005d1d28(*(undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x130) + param_3,0);
  return;
}




undefined8 FUN_1005a2fbc(void)

{
  return 0;
}




undefined8
FUN_1005a2fc4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x100;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}




void FUN_1005a2fe0(void)

{
  DAT_101e99258 = "FMOD S3M Codec";
  DAT_101e99260 = 0x10100;
  DAT_101e99268 = 0x702;
  DAT_101e99264 = 1;
  DAT_101e99270 = thunk_FUN_1005a4774;
  DAT_101e99278 = FUN_1005a30a8;
  DAT_101e99280 = thunk_FUN_1005a5b34;
  DAT_101e99288 = FUN_1005d9ba8;
  DAT_101e99290 = thunk_FUN_1005a5e60;
  DAT_101e99298 = FUN_1005d9bf4;
  DAT_101e992e0 = FUN_1005d9c34;
  DAT_101e992e8 = FUN_1005d9c58;
  DAT_101e992f0 = FUN_1005d9c94;
  DAT_101e99300 = FUN_1005d9cd4;
  DAT_101e99308 = FUN_1005d9d30;
  DAT_101e992b0 = 0xd;
  DAT_101e992b4 = 0x22e0;
  return;
}




void thunk_FUN_1005a4774(undefined4 *param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 in_x7;
  char cVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined4 uVar23;
  uint uVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  long lStack_968;
  long lStack_960;
  long lStack_958;
  undefined4 uStack_944;
  undefined4 uStack_940;
  uint uStack_93c;
  undefined8 uStack_938;
  long lStack_930;
  char acStack_928 [5];
  byte bStack_923;
  undefined1 uStack_922;
  byte bStack_921;
  int iStack_920;
  byte bStack_91a;
  byte bStack_919;
  undefined4 uStack_918;
  ushort uStack_914;
  ushort uStack_912;
  ushort uStack_910;
  undefined1 auStack_90e [4];
  char cStack_90a;
  char cStack_909;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 auStack_508 [28];
  uint auStack_4ec [99];
  ushort auStack_35e [355];
  byte abStack_98 [32];
  long lStack_78;
  
  lVar27 = *(long *)PTR____stack_chk_guard_101444218;
  plVar9 = *(long **)(param_1 + 100);
  lStack_78 = lVar27;
  if ((*(uint *)((long)plVar9 + 0x1a4) & 1) == 0) {
    uVar10 = 0x13;
  }
  else {
    param_1[0x14] = 0xd;
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
    uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,&uStack_918);
    if ((((int)uVar10 == 0) &&
        (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x2c,0), (int)uVar10 == 0)) &&
       (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_90e,1,4,0), (int)uVar10 == 0))
    {
      iVar7 = FUN_1005ed0f8(auStack_90e,"SCRM",4);
      if (iVar7 == 0) {
        _bzero(param_1 + 0x13a,0x200);
        *(undefined8 *)(param_1 + 0xa6) = 0;
        param_1[0x33c] = 0x3f4ccccd;
        param_1[0x33b] = 0x3f800000;
        param_1[0x25e] = 6;
        param_1[0x25f] = 0x7d;
        *(undefined1 *)(param_1 + 0x280) = 0x40;
        param_1[0x282] = 0;
        param_1[0x33a] = 0;
        uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
        if ((int)uVar10 == 0) {
          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x1c,0);
          if ((((int)uVar10 == 0) &&
              (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0), (int)uVar10 == 0)) &&
             ((uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x20,0), (int)uVar10 == 0 &&
              (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&uStack_912), (int)uVar10 == 0)
              ))) {
            piVar1 = param_1 + 0x285;
            uVar10 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar1);
            if ((((int)uVar10 == 0) &&
                (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&uStack_914),
                (int)uVar10 == 0)) &&
               (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&uStack_910), (int)uVar10 == 0
               )) {
              *(ushort *)((long)param_1 + 0xcfe) = uStack_910 >> 6 & 1;
              uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&uStack_910);
              if ((int)uVar10 == 0) {
                if ((uStack_910 & 0xfff) == 300) {
                  *(undefined2 *)((long)param_1 + 0xcfe) = 1;
                }
                uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x2c,0);
                if (((int)uVar10 == 0) &&
                   (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_90e,1,4,0),
                   (int)uVar10 == 0)) {
                  iVar7 = FUN_1005ed0f8(auStack_90e,"SCRM",4);
                  if (iVar7 == 0) {
                    uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),param_1 + 0x280);
                    if (((((((int)uVar10 == 0) &&
                           (uVar10 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),param_1 + 0x25e),
                           (int)uVar10 == 0)) &&
                          (uVar10 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),param_1 + 0x25f),
                          (int)uVar10 == 0)) &&
                         ((uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&cStack_90a),
                          (int)uVar10 == 0 &&
                          (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                          (int)uVar10 == 0)))) &&
                        (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&cStack_909),
                        (int)uVar10 == 0)) &&
                       (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x40,0),
                       (int)uVar10 == 0)) {
                      lVar25 = 0;
                      param_1[0x138] = 0;
                      piVar2 = param_1 + 0x138;
                      abStack_98[0x10] = 0xff;
                      abStack_98[0x11] = 0xff;
                      abStack_98[0x12] = 0xff;
                      abStack_98[0x13] = 0xff;
                      abStack_98[0x14] = 0xff;
                      abStack_98[0x15] = 0xff;
                      abStack_98[0x16] = 0xff;
                      abStack_98[0x17] = 0xff;
                      abStack_98[0x18] = 0xff;
                      abStack_98[0x19] = 0xff;
                      abStack_98[0x1a] = 0xff;
                      abStack_98[0x1b] = 0xff;
                      abStack_98[0x1c] = 0xff;
                      abStack_98[0x1d] = 0xff;
                      abStack_98[0x1e] = 0xff;
                      abStack_98[0x1f] = 0xff;
                      abStack_98[0] = 0xff;
                      abStack_98[1] = 0xff;
                      abStack_98[2] = 0xff;
                      abStack_98[3] = 0xff;
                      abStack_98[4] = 0xff;
                      abStack_98[5] = 0xff;
                      abStack_98[6] = 0xff;
                      abStack_98[7] = 0xff;
                      abStack_98[8] = 0xff;
                      abStack_98[9] = 0xff;
                      abStack_98[10] = 0xff;
                      abStack_98[0xb] = 0xff;
                      abStack_98[0xc] = 0xff;
                      abStack_98[0xd] = 0xff;
                      abStack_98[0xe] = 0xff;
                      abStack_98[0xf] = 0xff;
                      do {
                        uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_919);
                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                        if (bStack_919 < 0x10) {
                          iVar7 = param_1[0x138];
                          abStack_98[lVar25] = (byte)iVar7;
                          *(char *)((long)param_1 + (long)iVar7 + 0x980) = -(7 < bStack_919);
                          param_1[0x138] = param_1[0x138] + 1;
                        }
                        lVar25 = lVar25 + 1;
                      } while (lVar25 < 0x20);
                      uVar10 = FUN_100586684(param_1,9,"Number of channels",piVar2,4,1,0);
                      if ((int)uVar10 == 0) {
                        if (0 < *piVar2) {
                          lVar25 = 0;
                          do {
                            puVar11 = (undefined8 *)
                                      FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x398,
                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x68d,0);
                            puVar11[1] = puVar11 + 1;
                            puVar11[2] = puVar11 + 1;
                            puVar11[3] = 0;
                            FUN_100583c48(puVar11 + 5);
                            *(undefined8 **)(param_1 + lVar25 * 2 + 0x13a) = puVar11;
                            if (puVar11 == (undefined8 *)0x0) {
                              uVar10 = 0x26;
                              goto LAB_1005a4c00;
                            }
                            *puVar11 = param_1;
                            lVar25 = lVar25 + 1;
                          } while (lVar25 < (int)param_1[0x138]);
                        }
                        uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x60,0);
                        if (((int)uVar10 == 0) &&
                           (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,1,
                                                   uStack_912,0), (int)uVar10 == 0)) {
                          *(undefined8 *)(param_1 + 0x281) = 0;
                          if ((ulong)uStack_912 == 0) {
                            iVar7 = 0;
                          }
                          else {
                            iVar7 = 0;
                            lVar25 = 0;
                            while( true ) {
                              *(undefined1 *)((long)param_1 + (long)iVar7 + 0x2b0) =
                                   *(undefined1 *)((long)param_1 + lVar25 + 0x2b0);
                              if (*(byte *)((long)param_1 + lVar25 + 0x2b0) < 0xfe) {
                                param_1[0x281] = param_1[0x281] + 1;
                                bVar6 = *(byte *)((long)param_1 + lVar25 + 0x2b0);
                                if ((int)param_1[0x282] < (int)(uint)bVar6) {
                                  param_1[0x282] = (uint)bVar6;
                                }
                              }
                              lVar25 = lVar25 + 1;
                              if ((long)(ulong)uStack_912 <= lVar25) break;
                              iVar7 = param_1[0x281];
                            }
                            iVar7 = param_1[0x282];
                          }
                          param_1[0x282] = iVar7 + 1;
                          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_35e,2,
                                                 (uint)uStack_914 + param_1[0x285],0);
                          if ((int)uVar10 == 0) {
                            if (cStack_909 == -4) {
                              lVar25 = 0;
                              do {
                                uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_91a);
                                if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                if ((bStack_91a >> 4 & 1) != 0) {
                                  *(byte *)((long)param_1 + (ulong)abStack_98[lVar25] + 0x980) =
                                       bStack_91a << 4;
                                }
                                lVar25 = lVar25 + 1;
                              } while (lVar25 < 0x20);
                            }
                            if (-1 < cStack_90a) {
                              *(undefined8 *)(param_1 + 0x266) = 0x8080808080808080;
                              *(undefined8 *)(param_1 + 0x264) = 0x8080808080808080;
                              *(undefined8 *)(param_1 + 0x262) = 0x8080808080808080;
                              *(undefined8 *)(param_1 + 0x260) = 0x8080808080808080;
                            }
                            if (0 < *piVar1) {
                              lStack_960 = 0;
                              puVar11 = (undefined8 *)(param_1 + 0x34e);
                              do {
                                puVar11[5] = 0;
                                puVar11[6] = 0;
                                puVar11[3] = 0;
                                puVar11[4] = 0;
                                puVar11[1] = 0;
                                puVar11[2] = 0;
                                *puVar11 = 0;
                                uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                       (ulong)auStack_35e[lStack_960] << 4,0);
                                if (((((int)uVar10 != 0) ||
                                     (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xd,1),
                                     (int)uVar10 != 0)) ||
                                    (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                            &uStack_922), (int)uVar10 != 0)) ||
                                   (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                           &uStack_910), (int)uVar10 != 0))
                                goto LAB_1005a4c00;
                                auStack_4ec[lStack_960] = (uint)CONCAT12(uStack_922,uStack_910);
                                uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&iStack_920,4,
                                                       1,0);
                                if ((((int)uVar10 != 0) ||
                                    (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                            puVar11 + 2,4,1,0), (int)uVar10 != 0))
                                   || (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              (undefined4 *)((long)puVar11 + 0x14),4
                                                              ,1,0), (int)uVar10 != 0))
                                goto LAB_1005a4c00;
                                *(int *)((long)puVar11 + 0x14) =
                                     *(int *)((long)puVar11 + 0x14) - *(int *)(puVar11 + 2);
                                uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                       (undefined4 *)((long)puVar11 + 0xc));
                                if ((((int)uVar10 != 0) ||
                                    (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),0),
                                    (int)uVar10 != 0)) ||
                                   ((uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                            &bStack_921), (int)uVar10 != 0 ||
                                    (((uVar10 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),
                                                              puVar11 + 1), (int)uVar10 != 0 ||
                                      (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xe,1),
                                      (int)uVar10 != 0)) ||
                                     (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                             auStack_508,0x1c,1,0), (int)uVar10 != 0
                                     )))))) goto LAB_1005a4c00;
                                lVar25 = lStack_960;
                                _sprintf((char *)&uStack_908,"Sample name %d");
                                uVar8 = FUN_100586684(param_1,9,&uStack_908,auStack_508,0x1c,3,0,
                                                      in_x7,lVar25);
                                if (uVar8 != 0) {
                                  uVar10 = (ulong)uVar8;
                                  goto LAB_1005a4c00;
                                }
                                uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),4,1);
                                if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                if (((bStack_921 & 1) == 0) || (*(uint *)((long)puVar11 + 0x14) < 3)
                                   ) {
                                  *(undefined4 *)(puVar11 + 2) = 0;
                                  *(int *)((long)puVar11 + 0x14) = iStack_920;
                                  uVar8 = 9;
                                }
                                else {
                                  uVar8 = 10;
                                }
                                if ((bStack_921 >> 2 & 1) == 0) {
                                  uVar16 = 1;
                                }
                                else {
                                  iStack_920 = iStack_920 << 1;
                                  uVar16 = 2;
                                }
                                if ((bStack_921 >> 1 & 1) == 0) {
                                  uVar23 = 1;
                                }
                                else {
                                  iStack_920 = iStack_920 << 1;
                                  uVar23 = 2;
                                }
                                iVar7 = iStack_920;
                                if (iStack_920 != 0) {
                                  _memset(&uStack_908,0,0xe8);
                                  uStack_908 = CONCAT44(iVar7,0xe8);
                                  uStack_900 = (char *)CONCAT44(uVar23,(undefined4)uStack_900);
                                  uStack_8f8 = CONCAT44(uVar16,*(undefined4 *)(puVar11 + 1));
                                  uVar10 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,
                                                         uVar8 | 0x400,&uStack_908,puVar11);
                                  if (((int)uVar10 != 0) ||
                                     (((uVar8 >> 1 & 1) != 0 &&
                                      (uVar10 = (**(code **)(*(long *)*puVar11 + 0x130))
                                                          ((long *)*puVar11,*(int *)(puVar11 + 2),2,
                                                           *(int *)(puVar11 + 2) +
                                                           *(int *)((long)puVar11 + 0x14) + -1,2),
                                      (int)uVar10 != 0)))) goto LAB_1005a4c00;
                                }
                                lStack_960 = lStack_960 + 1;
                                puVar11 = puVar11 + 7;
                              } while (lStack_960 < *piVar1);
                            }
                            uVar8 = param_1[0x282];
                            if ((int)uVar8 <= (int)(uint)uStack_914) {
                              uVar8 = (uint)uStack_914;
                            }
                            param_1[0x283] = uVar8;
                            lVar25 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   uVar8 << 4,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x75b,0);
                            *(long *)(param_1 + 0xa6) = lVar25;
                            if (lVar25 == 0) {
                              uVar10 = 0x26;
                            }
                            else {
                              uVar10 = (ulong)uStack_914;
                              if (uStack_914 != 0) {
                                lStack_968 = 0;
                                do {
                                  uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         (uint)auStack_35e
                                                               [param_1[0x285] + (int)lStack_968] <<
                                                         4 | 2,0);
                                  if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                  puVar4 = (undefined4 *)
                                           (*(long *)(param_1 + 0xa6) + lStack_968 * 0x10);
                                  plVar9 = (long *)(puVar4 + 2);
                                  *puVar4 = 0x40;
                                  lVar25 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                         param_1[0x138] * 0x140,
                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x77b,0);
                                  *plVar9 = lVar25;
                                  if (lVar25 == 0) {
                                    uVar10 = 0x26;
                                    goto LAB_1005a4c00;
                                  }
                                  iVar7 = 0;
                                  do {
                                    while( true ) {
                                      uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             &bStack_923);
                                      if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                      if ((ulong)bStack_923 == 0) break;
                                      if ((int)(uint)abStack_98[(ulong)bStack_923 & 0x1f] < *piVar2)
                                      {
                                        pcVar26 = (char *)(*plVar9 +
                                                          ((ulong)abStack_98
                                                                  [(ulong)bStack_923 & 0x1f] +
                                                          (long)(*piVar2 * iVar7)) * 5);
                                      }
                                      else {
                                        pcVar26 = acStack_928;
                                      }
                                      if ((bStack_923 >> 5 & 1) != 0) {
                                        uVar10 = FUN_1005d1a3c(*(undefined8 *)(param_1 + 100),
                                                               &uStack_910);
                                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                        if (uStack_910 == 0xfe) {
                                          cVar14 = -1;
LAB_1005a5108:
                                          *pcVar26 = cVar14;
                                        }
                                        else {
                                          if (uStack_910 != 0xff) {
                                            cVar14 = ((byte)uStack_910 & 0xf) +
                                                     (char)(uStack_910 >> 4) * '\f' + '\x01';
                                            goto LAB_1005a5108;
                                          }
                                          *pcVar26 = '\0';
                                        }
                                        uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               pcVar26 + 1);
                                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                      }
                                      if ((bStack_923 >> 6 & 1) != 0) {
                                        pcVar3 = pcVar26 + 2;
                                        uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),pcVar3
                                                              );
                                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                        *pcVar3 = *pcVar3 + '\x01';
                                      }
                                      if (((char)bStack_923 < '\0') &&
                                         ((uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  pcVar26 + 3), (int)uVar10 != 0 ||
                                          (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  pcVar26 + 4), (int)uVar10 != 0))))
                                      goto LAB_1005a4c00;
                                    }
                                    iVar7 = iVar7 + 1;
                                  } while (iVar7 < 0x40);
                                  lStack_968 = lStack_968 + 1;
                                  uVar10 = (ulong)uStack_914;
                                } while (lStack_968 < (long)uVar10);
                              }
                              if ((int)uVar10 < (int)param_1[0x282]) {
                                lVar25 = uVar10 << 4;
                                do {
                                  lVar15 = *(long *)(param_1 + 0xa6);
                                  *(undefined4 *)(lVar15 + lVar25) = 0x40;
                                  lVar12 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                         param_1[0x138] * 0x140,
                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x7e2,0);
                                  *(long *)((undefined4 *)(lVar15 + lVar25) + 2) = lVar12;
                                  if (lVar12 == 0) {
                                    uVar10 = 0x26;
                                    goto LAB_1005a4c00;
                                  }
                                  uVar10 = uVar10 + 1;
                                  lVar25 = lVar25 + 0x10;
                                } while ((long)uVar10 < (long)(int)param_1[0x282]);
                              }
                              if (0 < *piVar1) {
                                lStack_958 = 0;
                                do {
                                  uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         auStack_4ec[lStack_958] << 4,0);
                                  if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                  plVar9 = *(long **)(param_1 + lStack_958 * 0xe + 0x34e);
                                  if (plVar9 != (long *)0x0) {
                                    uVar10 = (**(code **)(*plVar9 + 0x90))(plVar9,&uStack_944,4);
                                    if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                    plVar9 = (long *)(param_1 + lStack_958 * 0xe + 0x34e);
                                    uVar10 = (**(code **)(*(long *)*plVar9 + 0x28))
                                                       ((long *)*plVar9,0,uStack_944,&lStack_930,
                                                        &uStack_938,&uStack_93c,&uStack_940);
                                    if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                    uVar13 = (ulong)uStack_93c;
                                    if ((lStack_930 != 0) && (uStack_93c != 0)) {
                                      iVar7 = *(int *)(*plVar9 + 0x60);
                                      if (*(int *)(*plVar9 + 0x28) == 2) {
                                        if (iVar7 == 1) {
                                          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 lStack_930,2,uStack_93c >> 1,0);
                                        }
                                        else {
                                          iVar7 = 0;
                                          uVar10 = 0;
                                          uVar8 = uStack_93c >> 2;
                                          if (uVar8 != 0) {
                                            do {
                                              uVar24 = 0x200;
                                              if (uVar8 < 0x201) {
                                                uVar24 = uVar8;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &uStack_908,2,uVar24,0);
                                              if (uVar24 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar8) {
                                                  uVar17 = ~uVar8;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1;
                                                puVar11 = &uStack_908;
                                                do {
                                                  *(undefined2 *)(lStack_930 + (ulong)uVar19 * 2) =
                                                       *(undefined2 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 2);
                                                } while (uVar17 != 0);
                                              }
                                              uVar8 = uVar8 - uVar24;
                                              iVar7 = uVar24 + iVar7;
                                            } while (uVar8 != 0);
                                            uVar13 = (ulong)uStack_93c;
                                          }
                                          uVar13 = uVar13 >> 2;
                                          if ((int)uVar13 != 0) {
                                            iVar7 = 0;
                                            do {
                                              uVar24 = (uint)uVar13;
                                              uVar8 = 0x200;
                                              if (uVar24 < 0x201) {
                                                uVar8 = uVar24;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &uStack_908,2,uVar8,0);
                                              if (uVar8 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar24) {
                                                  uVar17 = ~uVar24;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1 | 1;
                                                puVar11 = &uStack_908;
                                                do {
                                                  *(undefined2 *)(lStack_930 + (ulong)uVar19 * 2) =
                                                       *(undefined2 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 2);
                                                } while (uVar17 != 0);
                                              }
                                              uVar13 = (ulong)(uVar24 - uVar8);
                                              iVar7 = uVar8 + iVar7;
                                            } while (uVar24 - uVar8 != 0);
                                          }
                                        }
                                        uVar13 = (ulong)uStack_93c;
                                        if (1 < uStack_93c) {
                                          uVar8 = uStack_93c >> 1;
                                          uVar18 = (ulong)uVar8;
                                          uVar5 = uVar18;
                                          if (uVar8 < 2) {
                                            uVar5 = 1;
                                          }
                                          if (uVar5 == 0) {
                                            uVar20 = 0;
                                          }
                                          else {
                                            uVar20 = uVar5 & 0x7ffffff8;
                                            if (uVar20 == 0) {
                                              uVar20 = 0;
                                            }
                                            else {
                                              uVar21 = uVar18;
                                              if (uVar8 < 2) {
                                                uVar21 = 0;
                                              }
                                              uVar21 = uVar21 & 0x7ffffff8;
                                              puVar22 = (ulong *)(lStack_930 + 8);
                                              do {
                                                puVar22[-1] = puVar22[-1] ^ 0x8000800080008000;
                                                *puVar22 = *puVar22 ^ 0x8000800080008000;
                                                uVar21 = uVar21 - 8;
                                                puVar22 = puVar22 + 2;
                                              } while (uVar21 != 0);
                                            }
                                            if (uVar5 == uVar20) goto LAB_1005a55c4;
                                          }
                                          do {
                                            *(ushort *)(lStack_930 + uVar20 * 2) =
                                                 *(ushort *)(lStack_930 + uVar20 * 2) ^ 0x8000;
                                            uVar20 = uVar20 + 1;
                                          } while (uVar20 < uVar18);
                                        }
                                      }
                                      else {
                                        if (iVar7 == 1) {
                                          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 lStack_930,1,uVar13,0);
                                          if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                          uVar10 = 0;
                                        }
                                        else {
                                          iVar7 = 0;
                                          uVar10 = 0;
                                          uVar8 = uStack_93c >> 2;
                                          if (uVar8 != 0) {
                                            do {
                                              uVar24 = 0x200;
                                              if (uVar8 < 0x201) {
                                                uVar24 = uVar8;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &uStack_908,1,uVar24,0);
                                              if (uVar24 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar8) {
                                                  uVar17 = ~uVar8;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1;
                                                puVar11 = &uStack_908;
                                                do {
                                                  *(undefined1 *)(lStack_930 + (ulong)uVar19) =
                                                       *(undefined1 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                                                } while (uVar17 != 0);
                                              }
                                              uVar8 = uVar8 - uVar24;
                                              iVar7 = uVar24 + iVar7;
                                            } while (uVar8 != 0);
                                            uVar13 = (ulong)uStack_93c;
                                          }
                                          uVar13 = uVar13 >> 2;
                                          if ((int)uVar13 != 0) {
                                            iVar7 = 0;
                                            do {
                                              uVar24 = (uint)uVar13;
                                              uVar8 = 0x200;
                                              if (uVar24 < 0x201) {
                                                uVar8 = uVar24;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &uStack_908,1,uVar8,0);
                                              if (uVar8 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar24) {
                                                  uVar17 = ~uVar24;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1 | 1;
                                                puVar11 = &uStack_908;
                                                do {
                                                  *(undefined1 *)(lStack_930 + (ulong)uVar19) =
                                                       *(undefined1 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                                                } while (uVar17 != 0);
                                              }
                                              uVar13 = (ulong)(uVar24 - uVar8);
                                              iVar7 = uVar8 + iVar7;
                                            } while (uVar24 - uVar8 != 0);
                                          }
                                        }
                                        if (uStack_93c == 0) {
                                          uVar13 = 0;
                                        }
                                        else {
                                          lVar25 = 0;
                                          do {
                                            *(byte *)(lStack_930 + lVar25) =
                                                 *(byte *)(lStack_930 + lVar25) ^ 0x80;
                                            uVar13 = (ulong)uStack_93c;
                                            lVar25 = lVar25 + 1;
                                          } while ((uint)lVar25 < uStack_93c);
                                        }
                                      }
LAB_1005a55c4:
                                      if (((uint)uVar10 | 0x10) != 0x10) goto LAB_1005a4c00;
                                    }
                                    uVar10 = (**(code **)(*(long *)*plVar9 + 0x30))
                                                       ((long *)*plVar9,lStack_930,uStack_938,uVar13
                                                        ,uStack_940);
                                    if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                  }
                                  lStack_958 = lStack_958 + 1;
                                } while (lStack_958 < *piVar1);
                              }
                              puVar4 = param_1 + 0xec;
                              _bzero(puVar4,0x130);
                              *(undefined4 **)(param_1 + 2) = puVar4;
                              param_1[0x12f] = uStack_918;
                              if ((param_3 == 0) || (iVar7 = *(int *)(param_3 + 0x14), iVar7 == 0))
                              {
                                iVar7 = 5;
                              }
                              param_1[300] = iVar7;
                              param_1[0x12d] = 2;
                              FUN_1005ecc98(puVar4,param_1 + 0x66,0x100);
                              lVar25 = *(long *)(param_1 + 0x12);
                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x108) =
                                   *(undefined4 *)(lVar25 + 0x708);
                              param_1[0x4c] = 0;
                              uStack_8e0 = 0;
                              uStack_8d8 = 0;
                              uStack_8f0 = 0;
                              uStack_8e8 = 0;
                              uStack_8f8 = 0;
                              uStack_908 = 0;
                              uStack_900 = "FMOD S3M Target Unit";
                              uVar10 = FUN_10056b4fc(lVar25,&uStack_908,0,param_1 + 0xa8,1);
                              if ((int)uVar10 == 0) {
                                FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
                                FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                                param_1[0x1ba] = param_1[0x138];
                                lVar25 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                       param_1[0x138] * 0x330,
                                                                                                              
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x8c0,0);
                                *(long *)(param_1 + 0x1bc) = lVar25;
                                if (lVar25 == 0) {
                                  uVar10 = 0x26;
                                }
                                else {
                                  iVar7 = param_1[0x1ba];
                                  if (0 < iVar7) {
                                    *(long *)lVar25 = lVar25;
                                    *(long *)(lVar25 + 8) = lVar25;
                                    *(undefined8 *)(lVar25 + 0x10) = 0;
                                    FUN_100583c48(lVar25 + 0x20);
                                    iVar7 = param_1[0x1ba];
                                    lVar25 = 1;
                                    lVar12 = 0x330;
                                    if (1 < iVar7) {
                                      do {
                                        lVar15 = *(long *)(param_1 + 0x1bc) + lVar12;
                                        *(long *)lVar15 = lVar15;
                                        *(long *)(lVar15 + 8) = lVar15;
                                        *(undefined8 *)(lVar15 + 0x10) = 0;
                                        FUN_100583c48(lVar15 + 0x20);
                                        lVar25 = lVar25 + 1;
                                        iVar7 = param_1[0x1ba];
                                        lVar12 = lVar12 + 0x330;
                                      } while (lVar25 < iVar7);
                                    }
                                  }
                                  FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                ,0x8e4,0);
                                  lVar25 = FUN_100585974();
                                  *(long *)(param_1 + 0x1be) = lVar25;
                                  if (lVar25 == 0) {
                                    uVar10 = 0x26;
                                  }
                                  else {
                                    uVar10 = FUN_100585980(lVar25,*(undefined8 *)(param_1 + 0x12),0,
                                                           iVar7 << 1);
                                    if ((int)uVar10 == 0) {
                                      lVar25 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),
                                                             iVar7 * 0x570,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x8ed,0);
                                      *(long *)(param_1 + 0x1c0) = lVar25;
                                      if (lVar25 == 0) {
                                        uVar10 = 0x26;
                                      }
                                      else if (iVar7 < 1) {
LAB_1005a5874:
                                        if ((param_2 & 0x4100) == 0) {
                                          *(undefined8 *)(param_1 + 0xaa) = 0;
                                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) =
                                               0xffffffff;
                                        }
                                        else {
                                          lVar25 = FUN_1005d7a5c(*(undefined8 *)
                                                                  (PTR_DAT_10186d408 + 0xd8),
                                                                 param_1[0x281] << 8,
                                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x8fc,0);
                                          *(long *)(param_1 + 0xaa) = lVar25;
                                          if (lVar25 == 0) {
                                            uVar10 = 0x26;
                                            goto LAB_1005a4c00;
                                          }
                                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
                                          FUN_1005d8fe8(param_1,0);
                                          while (*(char *)((long)param_1 + 0xd01) == '\0') {
                                            FUN_1005a312c(param_1,0);
                                            *(int *)(*(long *)(param_1 + 2) + 0x110) =
                                                 *(int *)(*(long *)(param_1 + 2) + 0x110) +
                                                 param_1[0x25b];
                                          }
                                          FUN_1005d9258(param_1);
                                        }
                                        *param_1 = 0;
                                        FUN_1005d8fe8(param_1,1);
                                        uVar10 = 0;
                                      }
                                      else {
                                        FUN_10057bd44();
                                        uVar10 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,
                                                               *(undefined8 *)(param_1 + 0x1c0));
                                        lVar25 = 1;
                                        lVar12 = 0x2b8;
                                        if ((int)uVar10 == 0) {
                                          do {
                                            if (iVar7 << 1 <= lVar25) goto LAB_1005a5874;
                                            FUN_10057bd44(*(long *)(param_1 + 0x1c0) + lVar12);
                                            uVar10 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),
                                                                   lVar25,*(long *)(param_1 + 0x1c0)
                                                                          + lVar12);
                                            lVar25 = lVar25 + 1;
                                            lVar12 = lVar12 + 0x2b8;
                                          } while ((int)uVar10 == 0);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar10 = 0x13;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar10 = 0x13;
      }
    }
  }
LAB_1005a4c00:
  if (lVar27 == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar10);
}




undefined8 FUN_1005a30a8(void)

{
  FUN_1005a5930();
  return 0;
}




int thunk_FUN_1005a5b34(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iStack_10e4;
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
    iVar8 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar8 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x968);
    iVar8 = 0;
    if (param_3 != 0) {
      uVar12 = 0;
      iStack_10e4 = (int)&uStack_1088;
      lVar13 = param_2;
      iVar8 = 0;
      do {
        if (uVar11 == 0) {
          FUN_1005a312c(param_1,1);
          iVar8 = 0;
          uVar11 = *(uint *)(param_1 + 0x96c);
        }
        uVar10 = param_3 - uVar12;
        if (uVar11 + uVar12 <= param_3) {
          uVar10 = uVar11;
        }
        lVar14 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar14 + 0x710);
        if (uVar10 <= *(uint *)(lVar14 + 0x710)) {
          uVar1 = uVar10;
        }
        if (param_2 != 0) {
          uStack_10ac = 0;
          uStack_1088 = 0;
          uStack_1080 = 0;
          uStack_10b0 = 0x200;
          uStack_10a8 = 0;
          puStack_10a0 = auStack_1078;
          lStack_10b8 = lVar14;
          puStack_1098 = puStack_10a0;
          if (lVar14 == 0) {
            lVar15 = 0;
            bVar6 = false;
            bVar4 = false;
            bVar5 = true;
          }
          else {
            bVar5 = true;
            FUN_10057097c(lVar14,1);
            lVar15 = *(long *)(param_1 + 0x48);
            if (lVar15 == 0) {
              lVar15 = 0;
              bVar4 = false;
              bVar6 = true;
            }
            else {
              FUN_10057097c(lVar15,3);
              bVar5 = false;
              bVar6 = true;
              bVar4 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x2a0) + 0x3f) == '\0') {
LAB_1005a5cc0:
            uStack_10c0 = 0;
            uStack_10d0 = 0;
            uStack_10c8 = 0;
            uStack_10d8 = 0;
            uStack_10bc = 0xffffffff;
            iVar8 = FUN_1005c9be4(&lStack_10b8,uVar1,1000,2,&uStack_10d8);
            if (iVar8 == 0) {
              uVar9 = FUN_1005c8da0(&uStack_10d8);
              bVar3 = true;
              iVar8 = FUN_10063a2fc(0x3f800000,lVar13,uVar9,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar7 = iVar8;
              if (iVar8 == 0) {
                FUN_1005c8d10(&uStack_10d8);
                bVar3 = false;
                iVar8 = 0;
                iVar7 = iStack_10e4;
              }
            }
            else {
              bVar3 = true;
              iVar7 = iVar8;
            }
            iStack_10e4 = iVar7;
            FUN_1005c8e48(&uStack_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar8 = FUN_1005cb3bc(&lStack_10b8,*(long *)(param_1 + 0x2a0),uVar1);
            if (iVar8 == 0) goto LAB_1005a5cc0;
            bVar3 = true;
            iStack_10e4 = iVar8;
          }
          if (!bVar5 && bVar4) {
            FUN_100570990(lVar15,3);
          }
          if ((lVar14 != 0) && (bVar6)) {
            FUN_100570990(lVar14,1);
          }
          if (bVar3) goto LAB_1005a5e1c;
        }
        uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar10 = uVar1;
        if (uVar2 < 5) {
          uVar10 = *(int *)(&DAT_10115ed70 + (long)(int)uVar2 * 4) * uVar1 >> 3;
        }
        uVar12 = uVar1 + uVar12;
        lVar13 = lVar13 + (ulong)(uVar10 * *(int *)(*(long *)(param_1 + 8) + 0x104));
        uVar11 = uVar11 - uVar1;
      } while (uVar12 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar11;
  }
  iStack_10e4 = iVar8;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_1005a5e1c:
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_78) {
    return iStack_10e4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 thunk_FUN_1005a5e60(long param_1,undefined8 param_2,uint param_3,int param_4)

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
        FUN_1005a312c(param_1,1);
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




undefined8 FUN_1005a30c8(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0;
  FUN_1005d8fe8(param_1,0);
  while (*(char *)(param_1 + 0xd01) == '\0') {
    FUN_1005a312c(param_1,0);
    *(int *)(*(long *)(param_1 + 8) + 0x110) =
         *(int *)(*(long *)(param_1 + 8) + 0x110) + *(int *)(param_1 + 0x96c);
  }
  FUN_1005d9258(param_1);
  return 0;
}




undefined8 FUN_1005a312c(long param_1,undefined8 param_2)

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
      FUN_1005a363c(param_1,param_2);
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
    FUN_1005a3f68(param_1);
  }
  iVar1 = *(int *)(param_1 + 0xd04) + 1;
  *(int *)(param_1 + 0xd04) = iVar1;
  if (*(int *)(param_1 + 0xd18) + *(int *)(param_1 + 0xd08) <= iVar1) {
    *(undefined4 *)(param_1 + 0xd18) = 0;
    *(undefined4 *)(param_1 + 0xd04) = 0;
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + *(int *)(param_1 + 0x96c);
  if ((lVar3 != 0) && (bVar2)) {
    FUN_100570990(lVar3,1);
  }
  return 0;
}




undefined8 FUN_1005a3274(long param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  bVar1 = *(byte *)(param_1 + 0x361);
  if ((bVar1 & 0xf) == 0) {
    *(uint *)(lVar2 + 0x2ac) = *(int *)(lVar2 + 0x2ac) + (uint)(bVar1 >> 4);
  }
  iVar3 = *(int *)(lVar2 + 0x2ac);
  if ((bVar1 & 0xf0) == 0) {
    iVar3 = iVar3 - (bVar1 & 0xf);
    *(int *)(lVar2 + 0x2ac) = iVar3;
  }
  if (iVar3 < 0x41) {
    if (iVar3 < 0) {
      *(undefined4 *)(lVar2 + 0x2ac) = 0;
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x2ac) = 0x40;
  }
  *(byte *)(lVar2 + 0x2a4) = *(byte *)(lVar2 + 0x2a4) | 2;
  return 0;
}




undefined8 FUN_1005a32d4(long param_1)

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
    if (iVar1 <= iVar3) goto LAB_1005a3314;
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x36c) * -4;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  *(int *)(lVar2 + 0x2a8) = iVar3;
LAB_1005a3314:
  *(byte *)(lVar2 + 0x2a4) = *(byte *)(lVar2 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_1005a3328(long *param_1)

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




undefined8 FUN_1005a3424(long *param_1)

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
  long lVar10;
  
  lVar8 = param_1[1];
  bVar5 = *(byte *)((long)param_1 + 0x372);
  bVar7 = *(byte *)((long)param_1 + 0x38e) >> 4 & 3;
  if (bVar7 < 4) {
    uVar9 = 0xff;
    switch(bVar7) {
    case 0:
      uVar9 = (uint)(byte)(&DAT_10186d410)[bVar5 & 0x1f];
      break;
    case 1:
      uVar9 = (bVar5 & 0x1f) << 3;
      if ((char)bVar5 < 0) {
        uVar9 = ~uVar9;
      }
      uVar9 = uVar9 & 0xff;
      break;
    case 3:
      lVar10 = *param_1;
      uVar9 = *(uint *)(lVar10 + 0xd28) ^ *(uint *)(lVar10 + 0xd28) << 0xb;
      *(undefined4 *)(lVar10 + 0xd28) = *(undefined4 *)(lVar10 + 0xd2c);
      *(undefined4 *)(lVar10 + 0xd2c) = *(undefined4 *)(lVar10 + 0xd30);
      uVar4 = *(uint *)(lVar10 + 0xd34);
      *(uint *)(lVar10 + 0xd30) = uVar4;
      uVar9 = uVar9 ^ uVar9 >> 8 ^ uVar4 ^ uVar4 >> 0x13;
      *(uint *)(lVar10 + 0xd34) = uVar9;
      uVar9 = uVar9 & 0xff;
    }
  }
  else {
    uVar9 = 0;
  }
  uVar6 = *(byte *)((long)param_1 + 0x374) * uVar9 >> 6;
  uVar4 = *(uint *)(lVar8 + 0x2ac);
  uVar9 = uVar4;
  if ((int)uVar6 <= (int)(short)uVar4) {
    uVar9 = uVar6;
  }
  uVar3 = 0x40 - uVar4;
  if ((int)(uVar6 + uVar4) < 0x41) {
    uVar3 = uVar6;
  }
  if (((int)(char)bVar5 & 0x80000000U) != 0) {
    uVar3 = -uVar9;
  }
  *(uint *)(lVar8 + 0x2b4) = uVar3;
  cVar1 = *(char *)((long)param_1 + 0x372) + *(char *)((long)param_1 + 0x374);
  cVar2 = cVar1 + -0x40;
  if (cVar1 < ' ') {
    cVar2 = cVar1;
  }
  *(char *)((long)param_1 + 0x372) = cVar2;
  *(byte *)(lVar8 + 0x2a4) = *(byte *)(lVar8 + 0x2a4) | 2;
  return 0;
}




undefined8 FUN_1005a3544(long *param_1)

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
  uVar7 = *(byte *)(param_1 + 0x6e) * uVar7 >> 7;
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




undefined8 FUN_1005a363c(long param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  long *local_88;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x298) +
                    (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10 + 8);
  iVar7 = *(int *)(param_1 + 0x4e0);
  iVar6 = iVar7 * *(int *)(param_1 + 0xd10);
  if (lVar8 + (long)iVar6 + (long)iVar6 * 4 != 0) {
    lVar15 = *(long *)(param_1 + 0x2a8);
    if (lVar15 != 0) {
      lVar14 = (long)(*(int *)(param_1 + 0xd10) + *(int *)(param_1 + 0xd14) * 0x100);
      if (*(char *)(lVar15 + lVar14) != '\0') {
        *(undefined1 *)(param_1 + 0xd01) = 1;
        return 0;
      }
      *(undefined1 *)(lVar15 + lVar14) = 1;
    }
    if (0 < iVar7) {
      lVar15 = 0;
      bVar5 = false;
      pbVar16 = (byte *)(lVar8 + (long)iVar6 + (long)iVar6 * 4 + 2);
      do {
        bVar9 = pbVar16[2];
        lVar8 = *(long *)(param_1 + 0x4e8 + lVar15 * 8);
        plVar17 = (long *)(lVar8 + 8);
        local_88 = (long *)*plVar17;
        if ((local_88 == plVar17) && (*(long **)(lVar8 + 0x10) == plVar17)) {
          local_88 = (long *)&DAT_101dbc130;
          DAT_101dbc3c0 = &DAT_101dbc0f0;
        }
        bVar3 = pbVar16[-1];
        if (bVar3 != 0) {
          *(byte *)(lVar8 + 0x338) = bVar3 - 1;
        }
        bVar4 = pbVar16[-2];
        if (1 < (byte)(bVar4 + 1)) {
          *(byte *)(lVar8 + 0x339) = bVar4 - 1;
        }
        puVar1 = &DAT_101dbc0f0;
        if ((int)(uint)*(byte *)(lVar8 + 0x338) < *(int *)(param_1 + 0xa14)) {
          puVar1 = (undefined8 *)(param_1 + (ulong)*(byte *)(lVar8 + 0x338) * 0x38 + 0xd38);
        }
        iVar7 = *(int *)((long)local_88 + 0x2ac);
        lVar14 = local_88[0x55];
        uVar10 = (uint)pbVar16[1];
        if (*(char *)(lVar8 + 0x340) == '\x12') {
          if (pbVar16[1] == 0x12) {
            uVar10 = 0x12;
          }
          else {
            *(int *)((long)local_88 + 0x2ac) = *(int *)((long)local_88 + 0x2b4) + iVar7;
          }
        }
        *(char *)(lVar8 + 0x340) = (char)uVar10;
        *(undefined4 *)((long)local_88 + 0x2b4) = 0;
        *(undefined1 *)((long)local_88 + 0x2a4) = 0;
        if (1 < (byte)(bVar4 + 1)) {
          if ((local_88 == (long *)&DAT_101dbc130) &&
             (iVar6 = FUN_1005d9420(param_1,lVar8,puVar1,&local_88), iVar6 != 0)) {
            local_88 = (long *)&DAT_101dbc130;
            DAT_101dbc3c0 = &DAT_101dbc0f0;
          }
          bVar3 = pbVar16[-2];
          *(byte *)(lVar8 + 0x339) = bVar3 - 1;
          uVar10 = *(uint *)(puVar1 + 1);
          uVar12 = *(uint *)(&DAT_10186d530 + (ulong)(byte)(bVar3 - 1) * 4);
          uVar13 = (ulong)uVar12;
          if (uVar10 != 0) {
            uVar12 = 0;
            if ((ulong)uVar10 != 0) {
              uVar12 = (uint)((uVar13 * 0x20ab) / (ulong)uVar10);
            }
          }
          *(uint *)(lVar8 + 0x33c) = uVar12;
          *(uint *)(local_88 + 0x56) = (uint)*(byte *)(param_1 + 0x4e8 + lVar15 + 0x498);
          uVar10 = (uint)pbVar16[1];
          if ((uVar10 != 7) && (uVar10 != 0xc)) {
            *(uint *)(local_88 + 0x55) = uVar12;
          }
          *(undefined1 *)((long)local_88 + 0x2a4) = 8;
          bVar3 = pbVar16[-1];
        }
        if (bVar3 != 0) {
          *(uint *)((long)local_88 + 0x2ac) = (uint)*(byte *)((long)puVar1 + 0xc);
          *(undefined1 *)(lVar8 + 0x37e) = 0;
          if ((*(byte *)(lVar8 + 0x38e) & 0xc) < 4) {
            *(undefined1 *)(lVar8 + 0x36e) = 0;
          }
          if (*(byte *)(lVar8 + 0x38e) < 0x40) {
            *(undefined1 *)(lVar8 + 0x372) = 0;
          }
        }
        *(undefined4 *)(local_88 + 0x57) = 0;
        *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) | 7;
        if (*pbVar16 != 0) {
          *(uint *)((long)local_88 + 0x2ac) = *pbVar16 - 1;
        }
        if (pbVar16[-2] == 0xff) {
          *(undefined4 *)((long)local_88 + 0x2ac) = 0;
        }
        if (0x17 < uVar10 - 1) goto switchD_1005a39dc_caseD_d;
        bVar4 = bVar9 >> 4;
        uVar12 = (uint)bVar4;
        uVar11 = bVar9 & 0xf;
        bVar3 = (byte)uVar11;
        switch(uVar10) {
        case 1:
          if (pbVar16[2] != 0) {
            *(uint *)(param_1 + 0xd08) = (uint)pbVar16[2];
          }
          break;
        case 2:
          bVar9 = pbVar16[2];
          *(uint *)(param_1 + 0xd24) = (uint)bVar9;
          *(undefined4 *)(param_1 + 0xd20) = 0;
          if (*(int *)(param_1 + 0xa04) <= (int)(uint)bVar9) {
            *(undefined4 *)(param_1 + 0xd24) = 0;
          }
          bVar5 = true;
          break;
        case 3:
          uVar11 = uVar11 + uVar12 * 10;
          uVar10 = 0;
          if (uVar11 < 0x40) {
            uVar10 = uVar11;
          }
          *(uint *)(param_1 + 0xd20) = uVar10;
          if (bVar5) {
            iVar7 = *(int *)(param_1 + 0xd24);
          }
          else {
            iVar7 = *(int *)(param_1 + 0xd14) + 1;
            *(int *)(param_1 + 0xd24) = iVar7;
          }
          if (*(int *)(param_1 + 0xa04) <= iVar7) {
            *(undefined4 *)(param_1 + 0xd24) = 0;
          }
          break;
        case 4:
          bVar9 = pbVar16[2];
          if (bVar9 == 0) {
            bVar9 = *(byte *)(lVar8 + 0x361);
          }
          else {
            *(byte *)(lVar8 + 0x361) = bVar9;
          }
          uVar10 = bVar9 & 0xf;
          uVar12 = (uint)(bVar9 >> 4);
          if (uVar10 == 0xf) {
            iVar7 = *(int *)((long)local_88 + 0x2ac) + uVar12;
LAB_1005a3c6c:
            *(int *)((long)local_88 + 0x2ac) = iVar7;
          }
          else if (uVar12 == 0xf) {
            iVar7 = *(int *)((long)local_88 + 0x2ac) - uVar10;
            goto LAB_1005a3c6c;
          }
          if (*(short *)(param_1 + 0xcfe) == 1) {
            if ((bVar9 & 0xf) == 0) {
              *(uint *)((long)local_88 + 0x2ac) = *(int *)((long)local_88 + 0x2ac) + uVar12;
            }
            if ((bVar9 & 0xf0) == 0) {
              *(uint *)((long)local_88 + 0x2ac) = *(int *)((long)local_88 + 0x2ac) - uVar10;
            }
          }
          if (0x40 < *(int *)((long)local_88 + 0x2ac)) {
            *(undefined4 *)((long)local_88 + 0x2ac) = 0x40;
          }
          if (*(int *)((long)local_88 + 0x2ac) < 0) {
            *(undefined4 *)((long)local_88 + 0x2ac) = 0;
          }
          break;
        case 5:
          bVar9 = pbVar16[2];
          if (bVar9 == 0) {
            bVar9 = *(byte *)(lVar8 + 0x35c);
          }
          else {
            *(byte *)(lVar8 + 0x35c) = bVar9;
          }
          uVar10 = (uint)bVar9;
          if ((uVar10 & 0xf0) == 0xe0) {
            uVar10 = uVar10 & 0xf;
          }
          else {
            if ((uVar10 & 0xf0) != 0xf0) break;
            uVar10 = (uVar10 & 0xf) << 2;
          }
          *(uint *)(local_88 + 0x55) = (int)local_88[0x55] + uVar10;
          break;
        case 6:
          bVar9 = pbVar16[2];
          if (bVar9 == 0) {
            bVar9 = *(byte *)(lVar8 + 0x35c);
          }
          else {
            *(byte *)(lVar8 + 0x35c) = bVar9;
          }
          uVar10 = (uint)bVar9;
          if ((uVar10 & 0xf0) == 0xe0) {
            uVar10 = uVar10 & 0xf;
          }
          else {
            if ((uVar10 & 0xf0) != 0xf0) break;
            uVar10 = (uVar10 & 0xf) << 2;
          }
          *(uint *)(local_88 + 0x55) = (int)local_88[0x55] - uVar10;
          break;
        case 7:
          if (pbVar16[2] != 0) {
            *(byte *)(lVar8 + 0x36c) = pbVar16[2];
          }
          goto LAB_1005a3b04;
        case 8:
          if (uVar12 != 0) {
            *(byte *)(lVar8 + 0x36f) = bVar4;
          }
          if ((bVar9 & 0xf) != 0) {
            *(byte *)(lVar8 + 0x370) = bVar3;
          }
          break;
        case 9:
          if (pbVar16[2] == 0) {
            uVar12 = (uint)*(byte *)(lVar8 + 0x37f);
          }
          else {
            uVar12 = uVar12 + 1;
            *(char *)(lVar8 + 0x37f) = (char)uVar12;
            *(byte *)(lVar8 + 0x380) = bVar3 + 1;
          }
          bVar9 = *(byte *)(lVar8 + 0x37e);
          if (uVar12 <= bVar9) {
            *(int *)((long)local_88 + 0x2b4) = -*(int *)((long)local_88 + 0x2ac);
          }
          uVar10 = bVar9 + 1;
          *(char *)(lVar8 + 0x37e) = (char)uVar10;
          cVar2 = '\0';
          if ((uVar10 & 0xff) < *(byte *)(lVar8 + 0x380) + uVar12) {
            cVar2 = bVar9 + 1;
          }
          *(char *)(lVar8 + 0x37e) = cVar2;
          bVar9 = *(byte *)((long)local_88 + 0x2a4) | 2;
          goto LAB_1005a3d78;
        case 10:
          if (pbVar16[2] != 0) {
            *(byte *)(lVar8 + 0x381) = pbVar16[2];
          }
          break;
        case 0xb:
          if (pbVar16[2] != 0) {
            *(byte *)(lVar8 + 0x361) = pbVar16[2];
          }
          break;
        case 0xc:
          if (pbVar16[2] != 0) {
            *(byte *)(lVar8 + 0x361) = pbVar16[2];
          }
LAB_1005a3b04:
          *(undefined4 *)(lVar8 + 0x368) = *(undefined4 *)(lVar8 + 0x33c);
          bVar9 = *(byte *)((long)local_88 + 0x2a4) & 0xf6;
LAB_1005a3d78:
          *(byte *)((long)local_88 + 0x2a4) = bVar9;
          break;
        case 0xf:
          if ((uint)(*(int *)((long)puVar1 + 0x14) + *(int *)(puVar1 + 2)) <= (uint)pbVar16[2] << 8)
          {
            bVar9 = *(byte *)((long)local_88 + 0x2a4) & 0xd7 | 0x20;
            goto LAB_1005a3d78;
          }
          *(uint *)(local_88 + 0x58) = (uint)pbVar16[2] << 8;
          break;
        case 0x11:
          if (pbVar16[2] != 0) {
            *(byte *)(lVar8 + 0x363) = bVar4;
            *(byte *)(lVar8 + 0x364) = bVar3;
          }
          break;
        case 0x12:
          if (uVar12 != 0) {
            *(byte *)(lVar8 + 0x374) = bVar4;
          }
          if ((bVar9 & 0xf) != 0) {
            *(byte *)(lVar8 + 0x374) = bVar3;
          }
          break;
        case 0x13:
          switch(uVar12) {
          case 2:
            FUN_1005d977c(param_1,uVar11,puVar1 + 1);
            break;
          case 3:
            *(byte *)(lVar8 + 0x38e) = *(byte *)(lVar8 + 0x38e) & 0xf0 | bVar3;
            break;
          case 4:
            *(byte *)(lVar8 + 0x38e) = bVar9 << 4 | *(byte *)(lVar8 + 0x38e) & 0xf;
            break;
          case 8:
            uVar11 = uVar11 << 4;
            goto LAB_1005a3bf8;
          case 10:
            iVar7 = 8;
            if (7 < uVar11) {
              iVar7 = -8;
            }
            uVar11 = (iVar7 + uVar11) * 0x10 & 0xff0;
LAB_1005a3bf8:
            *(uint *)(local_88 + 0x56) = uVar11;
            bVar9 = *(byte *)((long)local_88 + 0x2a4) | 4;
            goto LAB_1005a3d78;
          case 0xb:
            if ((bVar9 & 0xf) == 0) {
              *(undefined4 *)(lVar8 + 900) = *(undefined4 *)(param_1 + 0xd10);
            }
            else {
              if (*(int *)(lVar8 + 0x388) != 0) {
                uVar11 = *(int *)(lVar8 + 0x388) - 1;
              }
              *(uint *)(lVar8 + 0x388) = uVar11;
              if (uVar11 != 0) {
                iVar7 = *(int *)(lVar8 + 900);
                *(int *)(param_1 + 0xd20) = iVar7;
                if ((*(long *)(param_1 + 0x2a8) != 0) && (iVar7 <= *(int *)(param_1 + 0xd10))) {
                  _bzero((void *)(*(long *)(param_1 + 0x2a8) +
                                 (long)iVar7 + (long)(*(int *)(param_1 + 0xd14) << 8)),
                         (ulong)(uint)(*(int *)(param_1 + 0xd10) - iVar7) + 1);
                }
              }
            }
            break;
          case 0xd:
            *(int *)((long)local_88 + 0x2ac) = iVar7;
            *(int *)(local_88 + 0x55) = (int)lVar14;
            bVar9 = *(byte *)((long)local_88 + 0x2a4) & 0xf0;
            goto LAB_1005a3d78;
          case 0xe:
            *(uint *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd08) * uVar11;
          }
          break;
        case 0x14:
          if (0x1f < pbVar16[2]) {
            FUN_1005d93c8(param_1);
          }
          break;
        case 0x15:
          if (uVar12 != 0) {
            *(byte *)(lVar8 + 0x36f) = bVar4;
          }
          if ((bVar9 & 0xf) != 0) {
            *(byte *)(lVar8 + 0x370) = bVar3;
          }
          break;
        case 0x16:
          uVar10 = 0x40;
          if (pbVar16[2] < 0x41) {
            uVar10 = (uint)pbVar16[2];
          }
          *(uint *)(param_1 + 0xcf8) = uVar10;
          break;
        case 0x18:
          uVar11 = (uint)pbVar16[2] << 1;
          goto LAB_1005a3bf8;
        }
switchD_1005a39dc_caseD_d:
        if (param_2 != 0) {
          local_88 = (long *)*plVar17;
          if ((int)local_88[0x55] + (int)local_88[0x57] == 0) {
            *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) & 0xfe;
          }
          bVar9 = *(byte *)((long)local_88 + 0x2a4);
          if ((bVar9 >> 3 & 1) != 0) {
            FUN_1005d95a4(param_1,puVar1,local_88,0,0);
            bVar9 = *(byte *)((long)local_88 + 0x2a4);
          }
          if ((bVar9 >> 1 & 1) != 0) {
            FUN_1005847b8(*(float *)(lVar8 + 0x358) *
                          (float)((*(int *)((long)local_88 + 0x2b4) +
                                  *(int *)((long)local_88 + 0x2ac)) * *(int *)(param_1 + 0xcf8)) *
                          0.00024414062 * 0.5,local_88 + 4,0);
          }
          if ((*(byte *)((long)local_88 + 0x2a4) >> 2 & 1) != 0) {
            (**(code **)(local_88[4] + 0xa8))
                      (*(float *)(param_1 + 0xcf0) * ((float)(int)local_88[0x56] + -128.0) *
                       0.0078125,local_88 + 4);
          }
          if ((*(byte *)((long)local_88 + 0x2a4) & 1) != 0) {
            iVar7 = (int)local_88[0x57] + (int)local_88[0x55];
            iVar6 = 1;
            if (0 < iVar7) {
              iVar6 = iVar7;
            }
            iVar7 = 0;
            if (iVar6 != 0) {
              iVar7 = 0xda7600 / iVar6;
            }
            FUN_100581c98((float)iVar7,local_88 + 4);
          }
          if ((*(byte *)((long)local_88 + 0x2a4) >> 5 & 1) != 0) {
            FUN_100582560(local_88 + 4,0);
            *(undefined4 *)(local_88 + 0x58) = 0;
          }
        }
        lVar15 = lVar15 + 1;
        pbVar16 = pbVar16 + 5;
      } while (lVar15 < *(int *)(param_1 + 0x4e0));
    }
  }
  return 0;
}




undefined8 FUN_1005a3f68(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  long *local_88;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x298) +
                    (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10 + 8);
  iVar5 = *(int *)(param_1 + 0x4e0) * *(int *)(param_1 + 0xd10);
  if (lVar6 + (long)iVar5 + (long)iVar5 * 4 != 0 && 0 < *(int *)(param_1 + 0x4e0)) {
    lVar15 = 0;
    lVar1 = param_1 + 0x4e8;
    pbVar16 = (byte *)(lVar6 + (long)iVar5 + (long)iVar5 * 4 + 4);
    do {
      lVar6 = *(long *)(lVar1 + lVar15 * 8);
      puVar3 = &DAT_101dbc0f0;
      if ((int)(uint)*(byte *)(lVar6 + 0x338) < *(int *)(param_1 + 0xa14)) {
        puVar3 = (undefined8 *)(param_1 + (ulong)*(byte *)(lVar6 + 0x338) * 0x38 + 0xd38);
      }
      plVar14 = (long *)(lVar6 + 8);
      local_88 = (long *)*plVar14;
      if ((local_88 == plVar14) && (*(long **)(lVar6 + 0x10) == plVar14)) {
        local_88 = (long *)&DAT_101dbc130;
      }
      bVar7 = *pbVar16;
      bVar11 = pbVar16[-1];
      *(undefined4 *)((long)local_88 + 0x2b4) = 0;
      *(undefined4 *)(local_88 + 0x57) = 0;
      *(undefined1 *)((long)local_88 + 0x2a4) = 0;
      switch(bVar11) {
      case 4:
        local_88 = *(long **)(lVar6 + 8);
        bVar7 = *(byte *)(lVar6 + 0x361);
        piVar10 = (int *)((long)local_88 + 0x2ac);
        if ((bVar7 & 0xf) == 0) {
          iVar5 = *(int *)((long)local_88 + 0x2ac) + (uint)(bVar7 >> 4);
          *(int *)((long)local_88 + 0x2ac) = iVar5;
        }
        else {
          iVar5 = *(int *)((long)local_88 + 0x2ac);
        }
        if ((bVar7 & 0xf0) == 0) {
          iVar5 = iVar5 - (bVar7 & 0xf);
          *piVar10 = iVar5;
        }
        if (0x40 < iVar5) goto LAB_1005a450c;
        if (-1 < iVar5) goto LAB_1005a4520;
        goto LAB_1005a451c;
      case 5:
        if (*(byte *)(lVar6 + 0x35c) < 0xe0) {
          iVar8 = (int)local_88[0x55] + (uint)*(byte *)(lVar6 + 0x35c) * 4;
          goto LAB_1005a4430;
        }
        goto LAB_1005a4594;
      case 6:
        if (0xdf < *(byte *)(lVar6 + 0x35c)) break;
        iVar5 = (int)local_88[0x55] + (uint)*(byte *)(lVar6 + 0x35c) * -4;
        *(int *)(local_88 + 0x55) = iVar5;
        bVar7 = *(byte *)((long)local_88 + 0x2a4);
        if (iVar5 < 1) {
          *(byte *)((long)local_88 + 0x2a4) = bVar7 | 0x20;
          break;
        }
        goto LAB_1005a4598;
      case 7:
        local_88 = *(long **)(lVar6 + 8);
        iVar5 = (int)local_88[0x55];
        iVar8 = *(int *)(lVar6 + 0x368);
        if (iVar5 < iVar8) {
          iVar5 = iVar5 + (uint)*(byte *)(lVar6 + 0x36c) * 4;
          if (iVar5 <= iVar8) {
            iVar8 = iVar5;
          }
        }
        else {
          if (iVar5 <= iVar8) goto LAB_1005a4594;
          iVar5 = iVar5 + (uint)*(byte *)(lVar6 + 0x36c) * -4;
          if (iVar8 <= iVar5) {
            iVar8 = iVar5;
          }
        }
LAB_1005a4430:
        *(int *)(local_88 + 0x55) = iVar8;
LAB_1005a4594:
        bVar7 = *(byte *)((long)local_88 + 0x2a4);
LAB_1005a4598:
        *(byte *)((long)local_88 + 0x2a4) = bVar7 | 1;
        break;
      case 8:
        FUN_1005a3328(lVar6);
        break;
      case 9:
        bVar7 = *(byte *)(lVar6 + 0x37e);
        bVar11 = *(byte *)(lVar6 + 0x37f);
        if ((uint)bVar11 <= (uint)bVar7) {
          *(int *)((long)local_88 + 0x2b4) = -*(int *)((long)local_88 + 0x2ac);
        }
        uVar2 = bVar7 + 1;
        *(char *)(lVar6 + 0x37e) = (char)uVar2;
        cVar4 = '\0';
        if ((uVar2 & 0xff) < (uint)*(byte *)(lVar6 + 0x380) + (uint)bVar11) {
          cVar4 = bVar7 + 1;
        }
        *(char *)(lVar6 + 0x37e) = cVar4;
        goto LAB_1005a4520;
      case 10:
        bVar7 = *(byte *)(lVar6 + 0x381);
        if ((ulong)bVar7 != 0) {
          iVar5 = *(int *)(param_1 + 0xd04) % 3;
          if (iVar5 == 2) {
            uVar2 = *(uint *)(puVar3 + 1);
            uVar13 = (ulong)*(byte *)(lVar6 + 0x339);
            lVar12 = uVar13 + ((ulong)bVar7 & 0xf);
          }
          else {
            if (iVar5 != 1) goto LAB_1005a4594;
            uVar2 = *(uint *)(puVar3 + 1);
            uVar13 = (ulong)*(byte *)(lVar6 + 0x339);
            lVar12 = uVar13 + (bVar7 >> 4);
          }
          uVar9 = (ulong)uVar2;
          if (uVar2 == 0) {
            *(uint *)(local_88 + 0x57) =
                 *(uint *)(&DAT_10186d530 + lVar12 * 4) - *(uint *)(&DAT_10186d530 + uVar13 * 4);
          }
          else {
            iVar5 = 0;
            if (uVar9 != 0) {
              iVar5 = (int)(((ulong)*(uint *)(&DAT_10186d530 + lVar12 * 4) * 0x20ab) / uVar9);
            }
            iVar8 = 0;
            if (uVar9 != 0) {
              iVar8 = (int)(((ulong)*(uint *)(&DAT_10186d530 + uVar13 * 4) * 0x20ab) / uVar9);
            }
            *(int *)(local_88 + 0x57) = iVar5 - iVar8;
          }
          goto LAB_1005a4594;
        }
        break;
      case 0xb:
        FUN_1005a3328(lVar6);
        local_88 = *(long **)(lVar6 + 8);
        bVar7 = *(byte *)(lVar6 + 0x361);
        piVar10 = (int *)((long)local_88 + 0x2ac);
        if ((bVar7 & 0xf) == 0) {
          iVar5 = *(int *)((long)local_88 + 0x2ac) + (uint)(bVar7 >> 4);
          *(int *)((long)local_88 + 0x2ac) = iVar5;
        }
        else {
          iVar5 = *(int *)((long)local_88 + 0x2ac);
        }
        if ((bVar7 & 0xf0) == 0) {
          iVar5 = iVar5 - (bVar7 & 0xf);
          *piVar10 = iVar5;
        }
        goto joined_r0x0001005a4508;
      case 0xc:
        local_88 = *(long **)(lVar6 + 8);
        iVar5 = (int)local_88[0x55];
        iVar8 = *(int *)(lVar6 + 0x368);
        if (iVar5 < iVar8) {
          iVar5 = iVar5 + (uint)*(byte *)(lVar6 + 0x36c) * 4;
          if (iVar5 <= iVar8) {
            iVar8 = iVar5;
          }
LAB_1005a444c:
          *(int *)(local_88 + 0x55) = iVar8;
        }
        else if (iVar8 < iVar5) {
          iVar5 = iVar5 + (uint)*(byte *)(lVar6 + 0x36c) * -4;
          if (iVar8 <= iVar5) {
            iVar8 = iVar5;
          }
          goto LAB_1005a444c;
        }
        *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) | 1;
        bVar7 = *(byte *)(lVar6 + 0x361);
        piVar10 = (int *)((long)local_88 + 0x2ac);
        if ((bVar7 & 0xf) == 0) {
          iVar5 = *(int *)((long)local_88 + 0x2ac) + (uint)(bVar7 >> 4);
          *(int *)((long)local_88 + 0x2ac) = iVar5;
        }
        else {
          iVar5 = *(int *)((long)local_88 + 0x2ac);
        }
        if ((bVar7 & 0xf0) == 0) {
          iVar5 = iVar5 - (bVar7 & 0xf);
          *piVar10 = iVar5;
        }
joined_r0x0001005a4508:
        if (iVar5 < 0x41) {
          if (iVar5 < 0) {
LAB_1005a451c:
            *piVar10 = 0;
          }
        }
        else {
LAB_1005a450c:
          *piVar10 = 0x40;
        }
LAB_1005a4520:
        *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) | 2;
        break;
      case 0x11:
        bVar7 = *(byte *)(lVar6 + 0x364);
        if (bVar7 == 0) break;
        iVar5 = 0;
        if (bVar7 != 0) {
          iVar5 = *(int *)(param_1 + 0xd04) / (int)(uint)bVar7;
        }
        if (*(int *)(param_1 + 0xd04) != iVar5 * (uint)bVar7) break;
        if (*(char *)(lVar6 + 0x363) == '\0') goto LAB_1005a4114;
        switch(*(char *)(lVar6 + 0x363)) {
        case '\x01':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + -1;
          break;
        case '\x02':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + -2;
          break;
        case '\x03':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + -4;
          break;
        case '\x04':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + -8;
          break;
        case '\x05':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + -0x10;
          break;
        case '\x06':
          *(undefined4 *)((long)local_88 + 0x2ac) = 0;
          goto switchD_1005a4358_caseD_8;
        case '\a':
          iVar5 = *(int *)((long)local_88 + 0x2ac) >> 1;
          break;
        default:
          goto switchD_1005a4358_caseD_8;
        case '\t':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + 1;
          break;
        case '\n':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + 2;
          break;
        case '\v':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + 4;
          break;
        case '\f':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + 8;
          break;
        case '\r':
          iVar5 = *(int *)((long)local_88 + 0x2ac) + 0x10;
          break;
        case '\x0f':
          iVar5 = *(int *)((long)local_88 + 0x2ac) << 1;
        }
        *(int *)((long)local_88 + 0x2ac) = iVar5;
switchD_1005a4358_caseD_8:
        if (0x40 < *(int *)((long)local_88 + 0x2ac)) {
          *(undefined4 *)((long)local_88 + 0x2ac) = 0x40;
        }
        if (*(int *)((long)local_88 + 0x2ac) < 0) {
          *(undefined4 *)((long)local_88 + 0x2ac) = 0;
        }
LAB_1005a4114:
        *(uint *)(local_88 + 0x56) = (uint)*(byte *)(lVar1 + lVar15 + 0x498);
        *(undefined4 *)(local_88 + 0x55) = *(undefined4 *)(lVar6 + 0x33c);
        *(undefined4 *)(local_88 + 0x57) = 0;
        *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) | 0xf;
        break;
      case 0x12:
        FUN_1005a3424(lVar6);
        break;
      case 0x13:
        uVar2 = bVar7 & 0xf;
        bVar7 = bVar7 >> 4;
        if (bVar7 == 0xd) {
          if (*(uint *)(param_1 + 0xd04) == uVar2) {
            if ((local_88 == (long *)&DAT_101dbc130) &&
               (iVar5 = FUN_1005d9420(param_1,lVar6,puVar3,&local_88), iVar5 != 0)) {
              local_88 = (long *)&DAT_101dbc130;
              DAT_101dbc3c0 = &DAT_101dbc0f0;
            }
            if (pbVar16[-3] == 0) {
              bVar7 = *(byte *)((long)local_88 + 0x2a4);
            }
            else {
              *(uint *)((long)local_88 + 0x2ac) = (uint)*(byte *)((long)puVar3 + 0xc);
              if ((*(byte *)(lVar6 + 0x38e) & 0xc) < 4) {
                *(undefined1 *)(lVar6 + 0x36e) = 0;
              }
              if (*(byte *)(lVar6 + 0x38e) < 0x40) {
                *(undefined1 *)(lVar6 + 0x372) = 0;
              }
              *(undefined1 *)(lVar6 + 0x37e) = 0;
              bVar7 = *(byte *)((long)local_88 + 0x2a4) | 2;
              *(byte *)((long)local_88 + 0x2a4) = bVar7;
            }
            *(uint *)(local_88 + 0x56) = (uint)*(byte *)(lVar1 + lVar15 + 0x498);
            *(undefined4 *)(local_88 + 0x55) = *(undefined4 *)(lVar6 + 0x33c);
            *(undefined4 *)(local_88 + 0x57) = 0;
            bVar11 = bVar7 | 5;
            *(byte *)((long)local_88 + 0x2a4) = bVar11;
            if (pbVar16[-2] != 0) {
              *(uint *)((long)local_88 + 0x2ac) = pbVar16[-2] - 1;
              bVar11 = bVar7 | 7;
              *(byte *)((long)local_88 + 0x2a4) = bVar11;
            }
            *(byte *)((long)local_88 + 0x2a4) = bVar11 | 8;
          }
          else {
            *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) & 0xf0;
          }
        }
        else if ((bVar7 == 0xc) && (*(uint *)(param_1 + 0xd04) == uVar2)) {
          *(undefined4 *)((long)local_88 + 0x2ac) = 0;
          goto LAB_1005a4520;
        }
        break;
      case 0x15:
        FUN_1005a3544(lVar6);
      }
      local_88 = (long *)*plVar14;
      if ((int)local_88[0x55] + (int)local_88[0x57] == 0) {
        *(byte *)((long)local_88 + 0x2a4) = *(byte *)((long)local_88 + 0x2a4) & 0xfe;
      }
      bVar7 = *(byte *)((long)local_88 + 0x2a4);
      if ((bVar7 >> 3 & 1) != 0) {
        FUN_1005d95a4(param_1,puVar3,local_88,0,0);
        bVar7 = *(byte *)((long)local_88 + 0x2a4);
      }
      if ((bVar7 >> 1 & 1) != 0) {
        FUN_1005847b8(*(float *)(lVar6 + 0x358) *
                      (float)((*(int *)((long)local_88 + 0x2b4) + *(int *)((long)local_88 + 0x2ac))
                             * *(int *)(param_1 + 0xcf8)) * 0.00024414062 * 0.5,local_88 + 4,0);
      }
      if ((*(byte *)((long)local_88 + 0x2a4) >> 2 & 1) != 0) {
        (**(code **)(local_88[4] + 0xa8))
                  (*(float *)(param_1 + 0xcf0) * ((float)(int)local_88[0x56] + -128.0) * 0.0078125,
                   local_88 + 4);
      }
      if ((*(byte *)((long)local_88 + 0x2a4) & 1) != 0) {
        iVar5 = (int)local_88[0x57] + (int)local_88[0x55];
        iVar8 = 1;
        if (0 < iVar5) {
          iVar8 = iVar5;
        }
        iVar5 = 0;
        if (iVar8 != 0) {
          iVar5 = 0xda7600 / iVar8;
        }
        FUN_100581c98((float)iVar5,local_88 + 4);
      }
      if ((*(byte *)((long)local_88 + 0x2a4) >> 5 & 1) != 0) {
        FUN_100582560(local_88 + 4,0);
        *(undefined4 *)(local_88 + 0x58) = 0;
      }
      lVar15 = lVar15 + 1;
      pbVar16 = pbVar16 + 5;
    } while (lVar15 < *(int *)(param_1 + 0x4e0));
  }
  return 0;
}




void FUN_1005a4774(undefined4 *param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 in_x7;
  char cVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined4 uVar23;
  uint uVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  long local_968;
  long local_960;
  long local_958;
  undefined4 local_944;
  undefined4 local_940;
  uint local_93c;
  undefined8 local_938;
  long local_930;
  char acStack_928 [5];
  byte local_923;
  undefined1 local_922;
  byte local_921;
  int local_920;
  byte local_91a;
  byte local_919;
  undefined4 local_918;
  ushort local_914;
  ushort local_912;
  ushort local_910;
  undefined1 auStack_90e [4];
  char local_90a;
  char local_909;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined1 auStack_508 [28];
  uint auStack_4ec [99];
  ushort auStack_35e [355];
  byte local_98 [32];
  long local_78;
  
  lVar27 = *(long *)PTR____stack_chk_guard_101444218;
  plVar9 = *(long **)(param_1 + 100);
  local_78 = lVar27;
  if ((*(uint *)((long)plVar9 + 0x1a4) & 1) == 0) {
    uVar10 = 0x13;
  }
  else {
    param_1[0x14] = 0xd;
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
    uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,&local_918);
    if ((((int)uVar10 == 0) &&
        (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x2c,0), (int)uVar10 == 0)) &&
       (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_90e,1,4,0), (int)uVar10 == 0))
    {
      iVar7 = FUN_1005ed0f8(auStack_90e,"SCRM",4);
      if (iVar7 == 0) {
        _bzero(param_1 + 0x13a,0x200);
        *(undefined8 *)(param_1 + 0xa6) = 0;
        param_1[0x33c] = 0x3f4ccccd;
        param_1[0x33b] = 0x3f800000;
        param_1[0x25e] = 6;
        param_1[0x25f] = 0x7d;
        *(undefined1 *)(param_1 + 0x280) = 0x40;
        param_1[0x282] = 0;
        param_1[0x33a] = 0;
        uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
        if ((int)uVar10 == 0) {
          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x1c,0);
          if ((((int)uVar10 == 0) &&
              (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0), (int)uVar10 == 0)) &&
             ((uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x20,0), (int)uVar10 == 0 &&
              (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_912), (int)uVar10 == 0))
             )) {
            piVar1 = param_1 + 0x285;
            uVar10 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar1);
            if ((((int)uVar10 == 0) &&
                (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_914), (int)uVar10 == 0
                )) && (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_910),
                      (int)uVar10 == 0)) {
              *(ushort *)((long)param_1 + 0xcfe) = local_910 >> 6 & 1;
              uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_910);
              if ((int)uVar10 == 0) {
                if ((local_910 & 0xfff) == 300) {
                  *(undefined2 *)((long)param_1 + 0xcfe) = 1;
                }
                uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x2c,0);
                if (((int)uVar10 == 0) &&
                   (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_90e,1,4,0),
                   (int)uVar10 == 0)) {
                  iVar7 = FUN_1005ed0f8(auStack_90e,"SCRM",4);
                  if (iVar7 == 0) {
                    uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),param_1 + 0x280);
                    if (((((((int)uVar10 == 0) &&
                           (uVar10 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),param_1 + 0x25e),
                           (int)uVar10 == 0)) &&
                          (uVar10 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),param_1 + 0x25f),
                          (int)uVar10 == 0)) &&
                         ((uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_90a),
                          (int)uVar10 == 0 &&
                          (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                          (int)uVar10 == 0)))) &&
                        (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_909),
                        (int)uVar10 == 0)) &&
                       (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x40,0),
                       (int)uVar10 == 0)) {
                      lVar25 = 0;
                      param_1[0x138] = 0;
                      piVar2 = param_1 + 0x138;
                      local_98[0x10] = 0xff;
                      local_98[0x11] = 0xff;
                      local_98[0x12] = 0xff;
                      local_98[0x13] = 0xff;
                      local_98[0x14] = 0xff;
                      local_98[0x15] = 0xff;
                      local_98[0x16] = 0xff;
                      local_98[0x17] = 0xff;
                      local_98[0x18] = 0xff;
                      local_98[0x19] = 0xff;
                      local_98[0x1a] = 0xff;
                      local_98[0x1b] = 0xff;
                      local_98[0x1c] = 0xff;
                      local_98[0x1d] = 0xff;
                      local_98[0x1e] = 0xff;
                      local_98[0x1f] = 0xff;
                      local_98[0] = 0xff;
                      local_98[1] = 0xff;
                      local_98[2] = 0xff;
                      local_98[3] = 0xff;
                      local_98[4] = 0xff;
                      local_98[5] = 0xff;
                      local_98[6] = 0xff;
                      local_98[7] = 0xff;
                      local_98[8] = 0xff;
                      local_98[9] = 0xff;
                      local_98[10] = 0xff;
                      local_98[0xb] = 0xff;
                      local_98[0xc] = 0xff;
                      local_98[0xd] = 0xff;
                      local_98[0xe] = 0xff;
                      local_98[0xf] = 0xff;
                      do {
                        uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_919);
                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                        if (local_919 < 0x10) {
                          iVar7 = param_1[0x138];
                          local_98[lVar25] = (byte)iVar7;
                          *(char *)((long)param_1 + (long)iVar7 + 0x980) = -(7 < local_919);
                          param_1[0x138] = param_1[0x138] + 1;
                        }
                        lVar25 = lVar25 + 1;
                      } while (lVar25 < 0x20);
                      uVar10 = FUN_100586684(param_1,9,"Number of channels",piVar2,4,1,0);
                      if ((int)uVar10 == 0) {
                        if (0 < *piVar2) {
                          lVar25 = 0;
                          do {
                            puVar11 = (undefined8 *)
                                      FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x398,
                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x68d,0);
                            puVar11[1] = puVar11 + 1;
                            puVar11[2] = puVar11 + 1;
                            puVar11[3] = 0;
                            FUN_100583c48(puVar11 + 5);
                            *(undefined8 **)(param_1 + lVar25 * 2 + 0x13a) = puVar11;
                            if (puVar11 == (undefined8 *)0x0) {
                              uVar10 = 0x26;
                              goto LAB_1005a4c00;
                            }
                            *puVar11 = param_1;
                            lVar25 = lVar25 + 1;
                          } while (lVar25 < (int)param_1[0x138]);
                        }
                        uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x60,0);
                        if (((int)uVar10 == 0) &&
                           (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,1,
                                                   local_912,0), (int)uVar10 == 0)) {
                          *(undefined8 *)(param_1 + 0x281) = 0;
                          if ((ulong)local_912 == 0) {
                            iVar7 = 0;
                          }
                          else {
                            iVar7 = 0;
                            lVar25 = 0;
                            while( true ) {
                              *(undefined1 *)((long)param_1 + (long)iVar7 + 0x2b0) =
                                   *(undefined1 *)((long)param_1 + lVar25 + 0x2b0);
                              if (*(byte *)((long)param_1 + lVar25 + 0x2b0) < 0xfe) {
                                param_1[0x281] = param_1[0x281] + 1;
                                bVar6 = *(byte *)((long)param_1 + lVar25 + 0x2b0);
                                if ((int)param_1[0x282] < (int)(uint)bVar6) {
                                  param_1[0x282] = (uint)bVar6;
                                }
                              }
                              lVar25 = lVar25 + 1;
                              if ((long)(ulong)local_912 <= lVar25) break;
                              iVar7 = param_1[0x281];
                            }
                            iVar7 = param_1[0x282];
                          }
                          param_1[0x282] = iVar7 + 1;
                          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_35e,2,
                                                 (uint)local_914 + param_1[0x285],0);
                          if ((int)uVar10 == 0) {
                            if (local_909 == -4) {
                              lVar25 = 0;
                              do {
                                uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_91a);
                                if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                if ((local_91a >> 4 & 1) != 0) {
                                  *(byte *)((long)param_1 + (ulong)local_98[lVar25] + 0x980) =
                                       local_91a << 4;
                                }
                                lVar25 = lVar25 + 1;
                              } while (lVar25 < 0x20);
                            }
                            if (-1 < local_90a) {
                              *(undefined8 *)(param_1 + 0x266) = 0x8080808080808080;
                              *(undefined8 *)(param_1 + 0x264) = 0x8080808080808080;
                              *(undefined8 *)(param_1 + 0x262) = 0x8080808080808080;
                              *(undefined8 *)(param_1 + 0x260) = 0x8080808080808080;
                            }
                            if (0 < *piVar1) {
                              local_960 = 0;
                              puVar11 = (undefined8 *)(param_1 + 0x34e);
                              do {
                                puVar11[5] = 0;
                                puVar11[6] = 0;
                                puVar11[3] = 0;
                                puVar11[4] = 0;
                                puVar11[1] = 0;
                                puVar11[2] = 0;
                                *puVar11 = 0;
                                uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                       (ulong)auStack_35e[local_960] << 4,0);
                                if (((((int)uVar10 != 0) ||
                                     (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xd,1),
                                     (int)uVar10 != 0)) ||
                                    (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                            &local_922), (int)uVar10 != 0)) ||
                                   (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_910
                                                          ), (int)uVar10 != 0)) goto LAB_1005a4c00;
                                auStack_4ec[local_960] = (uint)CONCAT12(local_922,local_910);
                                uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_920,4,1
                                                       ,0);
                                if ((((int)uVar10 != 0) ||
                                    (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                            puVar11 + 2,4,1,0), (int)uVar10 != 0))
                                   || (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              (undefined4 *)((long)puVar11 + 0x14),4
                                                              ,1,0), (int)uVar10 != 0))
                                goto LAB_1005a4c00;
                                *(int *)((long)puVar11 + 0x14) =
                                     *(int *)((long)puVar11 + 0x14) - *(int *)(puVar11 + 2);
                                uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                       (undefined4 *)((long)puVar11 + 0xc));
                                if ((((int)uVar10 != 0) ||
                                    (uVar10 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),0),
                                    (int)uVar10 != 0)) ||
                                   ((uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                            &local_921), (int)uVar10 != 0 ||
                                    (((uVar10 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),
                                                              puVar11 + 1), (int)uVar10 != 0 ||
                                      (uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xe,1),
                                      (int)uVar10 != 0)) ||
                                     (uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                             auStack_508,0x1c,1,0), (int)uVar10 != 0
                                     )))))) goto LAB_1005a4c00;
                                lVar25 = local_960;
                                _sprintf((char *)&local_908,"Sample name %d");
                                uVar8 = FUN_100586684(param_1,9,&local_908,auStack_508,0x1c,3,0,
                                                      in_x7,lVar25);
                                if (uVar8 != 0) {
                                  uVar10 = (ulong)uVar8;
                                  goto LAB_1005a4c00;
                                }
                                uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),4,1);
                                if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                if (((local_921 & 1) == 0) || (*(uint *)((long)puVar11 + 0x14) < 3))
                                {
                                  *(undefined4 *)(puVar11 + 2) = 0;
                                  *(int *)((long)puVar11 + 0x14) = local_920;
                                  uVar8 = 9;
                                }
                                else {
                                  uVar8 = 10;
                                }
                                if ((local_921 >> 2 & 1) == 0) {
                                  uVar16 = 1;
                                }
                                else {
                                  local_920 = local_920 << 1;
                                  uVar16 = 2;
                                }
                                if ((local_921 >> 1 & 1) == 0) {
                                  uVar23 = 1;
                                }
                                else {
                                  local_920 = local_920 << 1;
                                  uVar23 = 2;
                                }
                                iVar7 = local_920;
                                if (local_920 != 0) {
                                  _memset(&local_908,0,0xe8);
                                  local_908 = CONCAT44(iVar7,0xe8);
                                  local_900 = (char *)CONCAT44(uVar23,(undefined4)local_900);
                                  local_8f8 = CONCAT44(uVar16,*(undefined4 *)(puVar11 + 1));
                                  uVar10 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,
                                                         uVar8 | 0x400,&local_908,puVar11);
                                  if (((int)uVar10 != 0) ||
                                     (((uVar8 >> 1 & 1) != 0 &&
                                      (uVar10 = (**(code **)(*(long *)*puVar11 + 0x130))
                                                          ((long *)*puVar11,*(int *)(puVar11 + 2),2,
                                                           *(int *)(puVar11 + 2) +
                                                           *(int *)((long)puVar11 + 0x14) + -1,2),
                                      (int)uVar10 != 0)))) goto LAB_1005a4c00;
                                }
                                local_960 = local_960 + 1;
                                puVar11 = puVar11 + 7;
                              } while (local_960 < *piVar1);
                            }
                            uVar8 = param_1[0x282];
                            if ((int)uVar8 <= (int)(uint)local_914) {
                              uVar8 = (uint)local_914;
                            }
                            param_1[0x283] = uVar8;
                            lVar25 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   uVar8 << 4,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x75b,0);
                            *(long *)(param_1 + 0xa6) = lVar25;
                            if (lVar25 == 0) {
                              uVar10 = 0x26;
                            }
                            else {
                              uVar10 = (ulong)local_914;
                              if (local_914 != 0) {
                                local_968 = 0;
                                do {
                                  uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         (uint)auStack_35e
                                                               [param_1[0x285] + (int)local_968] <<
                                                         4 | 2,0);
                                  if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                  puVar4 = (undefined4 *)
                                           (*(long *)(param_1 + 0xa6) + local_968 * 0x10);
                                  plVar9 = (long *)(puVar4 + 2);
                                  *puVar4 = 0x40;
                                  lVar25 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                         param_1[0x138] * 0x140,
                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x77b,0);
                                  *plVar9 = lVar25;
                                  if (lVar25 == 0) {
                                    uVar10 = 0x26;
                                    goto LAB_1005a4c00;
                                  }
                                  iVar7 = 0;
                                  do {
                                    while( true ) {
                                      uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             &local_923);
                                      if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                      if ((ulong)local_923 == 0) break;
                                      if ((int)(uint)local_98[(ulong)local_923 & 0x1f] < *piVar2) {
                                        pcVar26 = (char *)(*plVar9 +
                                                          ((ulong)local_98[(ulong)local_923 & 0x1f]
                                                          + (long)(*piVar2 * iVar7)) * 5);
                                      }
                                      else {
                                        pcVar26 = acStack_928;
                                      }
                                      if ((local_923 >> 5 & 1) != 0) {
                                        uVar10 = FUN_1005d1a3c(*(undefined8 *)(param_1 + 100),
                                                               &local_910);
                                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                        if (local_910 == 0xfe) {
                                          cVar14 = -1;
LAB_1005a5108:
                                          *pcVar26 = cVar14;
                                        }
                                        else {
                                          if (local_910 != 0xff) {
                                            cVar14 = ((byte)local_910 & 0xf) +
                                                     (char)(local_910 >> 4) * '\f' + '\x01';
                                            goto LAB_1005a5108;
                                          }
                                          *pcVar26 = '\0';
                                        }
                                        uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               pcVar26 + 1);
                                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                      }
                                      if ((local_923 >> 6 & 1) != 0) {
                                        pcVar3 = pcVar26 + 2;
                                        uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),pcVar3
                                                              );
                                        if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                        *pcVar3 = *pcVar3 + '\x01';
                                      }
                                      if (((char)local_923 < '\0') &&
                                         ((uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  pcVar26 + 3), (int)uVar10 != 0 ||
                                          (uVar10 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  pcVar26 + 4), (int)uVar10 != 0))))
                                      goto LAB_1005a4c00;
                                    }
                                    iVar7 = iVar7 + 1;
                                  } while (iVar7 < 0x40);
                                  local_968 = local_968 + 1;
                                  uVar10 = (ulong)local_914;
                                } while (local_968 < (long)uVar10);
                              }
                              if ((int)uVar10 < (int)param_1[0x282]) {
                                lVar25 = uVar10 << 4;
                                do {
                                  lVar15 = *(long *)(param_1 + 0xa6);
                                  *(undefined4 *)(lVar15 + lVar25) = 0x40;
                                  lVar12 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                         param_1[0x138] * 0x140,
                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x7e2,0);
                                  *(long *)((undefined4 *)(lVar15 + lVar25) + 2) = lVar12;
                                  if (lVar12 == 0) {
                                    uVar10 = 0x26;
                                    goto LAB_1005a4c00;
                                  }
                                  uVar10 = uVar10 + 1;
                                  lVar25 = lVar25 + 0x10;
                                } while ((long)uVar10 < (long)(int)param_1[0x282]);
                              }
                              if (0 < *piVar1) {
                                local_958 = 0;
                                do {
                                  uVar10 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         auStack_4ec[local_958] << 4,0);
                                  if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                  plVar9 = *(long **)(param_1 + local_958 * 0xe + 0x34e);
                                  if (plVar9 != (long *)0x0) {
                                    uVar10 = (**(code **)(*plVar9 + 0x90))(plVar9,&local_944,4);
                                    if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                    plVar9 = (long *)(param_1 + local_958 * 0xe + 0x34e);
                                    uVar10 = (**(code **)(*(long *)*plVar9 + 0x28))
                                                       ((long *)*plVar9,0,local_944,&local_930,
                                                        &local_938,&local_93c,&local_940);
                                    if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                    uVar13 = (ulong)local_93c;
                                    if ((local_930 != 0) && (local_93c != 0)) {
                                      iVar7 = *(int *)(*plVar9 + 0x60);
                                      if (*(int *)(*plVar9 + 0x28) == 2) {
                                        if (iVar7 == 1) {
                                          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 local_930,2,local_93c >> 1,0);
                                        }
                                        else {
                                          iVar7 = 0;
                                          uVar10 = 0;
                                          uVar8 = local_93c >> 2;
                                          if (uVar8 != 0) {
                                            do {
                                              uVar24 = 0x200;
                                              if (uVar8 < 0x201) {
                                                uVar24 = uVar8;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &local_908,2,uVar24,0);
                                              if (uVar24 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar8) {
                                                  uVar17 = ~uVar8;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1;
                                                puVar11 = &local_908;
                                                do {
                                                  *(undefined2 *)(local_930 + (ulong)uVar19 * 2) =
                                                       *(undefined2 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 2);
                                                } while (uVar17 != 0);
                                              }
                                              uVar8 = uVar8 - uVar24;
                                              iVar7 = uVar24 + iVar7;
                                            } while (uVar8 != 0);
                                            uVar13 = (ulong)local_93c;
                                          }
                                          uVar13 = uVar13 >> 2;
                                          if ((int)uVar13 != 0) {
                                            iVar7 = 0;
                                            do {
                                              uVar24 = (uint)uVar13;
                                              uVar8 = 0x200;
                                              if (uVar24 < 0x201) {
                                                uVar8 = uVar24;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &local_908,2,uVar8,0);
                                              if (uVar8 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar24) {
                                                  uVar17 = ~uVar24;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1 | 1;
                                                puVar11 = &local_908;
                                                do {
                                                  *(undefined2 *)(local_930 + (ulong)uVar19 * 2) =
                                                       *(undefined2 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 2);
                                                } while (uVar17 != 0);
                                              }
                                              uVar13 = (ulong)(uVar24 - uVar8);
                                              iVar7 = uVar8 + iVar7;
                                            } while (uVar24 - uVar8 != 0);
                                          }
                                        }
                                        uVar13 = (ulong)local_93c;
                                        if (1 < local_93c) {
                                          uVar8 = local_93c >> 1;
                                          uVar18 = (ulong)uVar8;
                                          uVar5 = uVar18;
                                          if (uVar8 < 2) {
                                            uVar5 = 1;
                                          }
                                          if (uVar5 == 0) {
                                            uVar20 = 0;
                                          }
                                          else {
                                            uVar20 = uVar5 & 0x7ffffff8;
                                            if (uVar20 == 0) {
                                              uVar20 = 0;
                                            }
                                            else {
                                              uVar21 = uVar18;
                                              if (uVar8 < 2) {
                                                uVar21 = 0;
                                              }
                                              uVar21 = uVar21 & 0x7ffffff8;
                                              puVar22 = (ulong *)(local_930 + 8);
                                              do {
                                                puVar22[-1] = puVar22[-1] ^ 0x8000800080008000;
                                                *puVar22 = *puVar22 ^ 0x8000800080008000;
                                                uVar21 = uVar21 - 8;
                                                puVar22 = puVar22 + 2;
                                              } while (uVar21 != 0);
                                            }
                                            if (uVar5 == uVar20) goto LAB_1005a55c4;
                                          }
                                          do {
                                            *(ushort *)(local_930 + uVar20 * 2) =
                                                 *(ushort *)(local_930 + uVar20 * 2) ^ 0x8000;
                                            uVar20 = uVar20 + 1;
                                          } while (uVar20 < uVar18);
                                        }
                                      }
                                      else {
                                        if (iVar7 == 1) {
                                          uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 local_930,1,uVar13,0);
                                          if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                          uVar10 = 0;
                                        }
                                        else {
                                          iVar7 = 0;
                                          uVar10 = 0;
                                          uVar8 = local_93c >> 2;
                                          if (uVar8 != 0) {
                                            do {
                                              uVar24 = 0x200;
                                              if (uVar8 < 0x201) {
                                                uVar24 = uVar8;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &local_908,1,uVar24,0);
                                              if (uVar24 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar8) {
                                                  uVar17 = ~uVar8;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1;
                                                puVar11 = &local_908;
                                                do {
                                                  *(undefined1 *)(local_930 + (ulong)uVar19) =
                                                       *(undefined1 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                                                } while (uVar17 != 0);
                                              }
                                              uVar8 = uVar8 - uVar24;
                                              iVar7 = uVar24 + iVar7;
                                            } while (uVar8 != 0);
                                            uVar13 = (ulong)local_93c;
                                          }
                                          uVar13 = uVar13 >> 2;
                                          if ((int)uVar13 != 0) {
                                            iVar7 = 0;
                                            do {
                                              uVar24 = (uint)uVar13;
                                              uVar8 = 0x200;
                                              if (uVar24 < 0x201) {
                                                uVar8 = uVar24;
                                              }
                                              uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &local_908,1,uVar8,0);
                                              if (uVar8 != 0) {
                                                uVar17 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar24) {
                                                  uVar17 = ~uVar24;
                                                }
                                                uVar17 = ~uVar17;
                                                uVar19 = iVar7 << 1 | 1;
                                                puVar11 = &local_908;
                                                do {
                                                  *(undefined1 *)(local_930 + (ulong)uVar19) =
                                                       *(undefined1 *)puVar11;
                                                  uVar17 = uVar17 - 1;
                                                  uVar19 = uVar19 + 2;
                                                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                                                } while (uVar17 != 0);
                                              }
                                              uVar13 = (ulong)(uVar24 - uVar8);
                                              iVar7 = uVar8 + iVar7;
                                            } while (uVar24 - uVar8 != 0);
                                          }
                                        }
                                        if (local_93c == 0) {
                                          uVar13 = 0;
                                        }
                                        else {
                                          lVar25 = 0;
                                          do {
                                            *(byte *)(local_930 + lVar25) =
                                                 *(byte *)(local_930 + lVar25) ^ 0x80;
                                            uVar13 = (ulong)local_93c;
                                            lVar25 = lVar25 + 1;
                                          } while ((uint)lVar25 < local_93c);
                                        }
                                      }
LAB_1005a55c4:
                                      if (((uint)uVar10 | 0x10) != 0x10) goto LAB_1005a4c00;
                                    }
                                    uVar10 = (**(code **)(*(long *)*plVar9 + 0x30))
                                                       ((long *)*plVar9,local_930,local_938,uVar13,
                                                        local_940);
                                    if ((int)uVar10 != 0) goto LAB_1005a4c00;
                                  }
                                  local_958 = local_958 + 1;
                                } while (local_958 < *piVar1);
                              }
                              puVar4 = param_1 + 0xec;
                              _bzero(puVar4,0x130);
                              *(undefined4 **)(param_1 + 2) = puVar4;
                              param_1[0x12f] = local_918;
                              if ((param_3 == 0) || (iVar7 = *(int *)(param_3 + 0x14), iVar7 == 0))
                              {
                                iVar7 = 5;
                              }
                              param_1[300] = iVar7;
                              param_1[0x12d] = 2;
                              FUN_1005ecc98(puVar4,param_1 + 0x66,0x100);
                              lVar25 = *(long *)(param_1 + 0x12);
                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x108) =
                                   *(undefined4 *)(lVar25 + 0x708);
                              param_1[0x4c] = 0;
                              local_8e0 = 0;
                              uStack_8d8 = 0;
                              local_8f0 = 0;
                              uStack_8e8 = 0;
                              local_8f8 = 0;
                              local_908 = 0;
                              local_900 = "FMOD S3M Target Unit";
                              uVar10 = FUN_10056b4fc(lVar25,&local_908,0,param_1 + 0xa8,1);
                              if ((int)uVar10 == 0) {
                                FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
                                FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                                param_1[0x1ba] = param_1[0x138];
                                lVar25 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                       param_1[0x138] * 0x330,
                                                                                                              
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x8c0,0);
                                *(long *)(param_1 + 0x1bc) = lVar25;
                                if (lVar25 == 0) {
                                  uVar10 = 0x26;
                                }
                                else {
                                  iVar7 = param_1[0x1ba];
                                  if (0 < iVar7) {
                                    *(long *)lVar25 = lVar25;
                                    *(long *)(lVar25 + 8) = lVar25;
                                    *(undefined8 *)(lVar25 + 0x10) = 0;
                                    FUN_100583c48(lVar25 + 0x20);
                                    iVar7 = param_1[0x1ba];
                                    lVar25 = 1;
                                    lVar12 = 0x330;
                                    if (1 < iVar7) {
                                      do {
                                        lVar15 = *(long *)(param_1 + 0x1bc) + lVar12;
                                        *(long *)lVar15 = lVar15;
                                        *(long *)(lVar15 + 8) = lVar15;
                                        *(undefined8 *)(lVar15 + 0x10) = 0;
                                        FUN_100583c48(lVar15 + 0x20);
                                        lVar25 = lVar25 + 1;
                                        iVar7 = param_1[0x1ba];
                                        lVar12 = lVar12 + 0x330;
                                      } while (lVar25 < iVar7);
                                    }
                                  }
                                  FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                ,0x8e4,0);
                                  lVar25 = FUN_100585974();
                                  *(long *)(param_1 + 0x1be) = lVar25;
                                  if (lVar25 == 0) {
                                    uVar10 = 0x26;
                                  }
                                  else {
                                    uVar10 = FUN_100585980(lVar25,*(undefined8 *)(param_1 + 0x12),0,
                                                           iVar7 << 1);
                                    if ((int)uVar10 == 0) {
                                      lVar25 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),
                                                             iVar7 * 0x570,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x8ed,0);
                                      *(long *)(param_1 + 0x1c0) = lVar25;
                                      if (lVar25 == 0) {
                                        uVar10 = 0x26;
                                      }
                                      else if (iVar7 < 1) {
LAB_1005a5874:
                                        if ((param_2 & 0x4100) == 0) {
                                          *(undefined8 *)(param_1 + 0xaa) = 0;
                                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) =
                                               0xffffffff;
                                        }
                                        else {
                                          lVar25 = FUN_1005d7a5c(*(undefined8 *)
                                                                  (PTR_DAT_10186d408 + 0xd8),
                                                                 param_1[0x281] << 8,
                                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                                                  ,0x8fc,0);
                                          *(long *)(param_1 + 0xaa) = lVar25;
                                          if (lVar25 == 0) {
                                            uVar10 = 0x26;
                                            goto LAB_1005a4c00;
                                          }
                                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
                                          FUN_1005d8fe8(param_1,0);
                                          while (*(char *)((long)param_1 + 0xd01) == '\0') {
                                            FUN_1005a312c(param_1,0);
                                            *(int *)(*(long *)(param_1 + 2) + 0x110) =
                                                 *(int *)(*(long *)(param_1 + 2) + 0x110) +
                                                 param_1[0x25b];
                                          }
                                          FUN_1005d9258(param_1);
                                        }
                                        *param_1 = 0;
                                        FUN_1005d8fe8(param_1,1);
                                        uVar10 = 0;
                                      }
                                      else {
                                        FUN_10057bd44();
                                        uVar10 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,
                                                               *(undefined8 *)(param_1 + 0x1c0));
                                        lVar25 = 1;
                                        lVar12 = 0x2b8;
                                        if ((int)uVar10 == 0) {
                                          do {
                                            if (iVar7 << 1 <= lVar25) goto LAB_1005a5874;
                                            FUN_10057bd44(*(long *)(param_1 + 0x1c0) + lVar12);
                                            uVar10 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),
                                                                   lVar25,*(long *)(param_1 + 0x1c0)
                                                                          + lVar12);
                                            lVar25 = lVar25 + 1;
                                            lVar12 = lVar12 + 0x2b8;
                                          } while ((int)uVar10 == 0);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar10 = 0x13;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar10 = 0x13;
      }
    }
  }
LAB_1005a4c00:
  if (lVar27 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar10);
}




undefined8 FUN_1005a5930(long param_1)

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
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                  ,0x948);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  if (*(long *)(param_1 + 0x700) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x700),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                  ,0x94e);
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
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                        ,0x958);
          lVar3 = *(long *)(param_1 + 0x298);
          *(undefined8 *)(lVar3 + lVar5) = 0;
          iVar2 = *(int *)(param_1 + 0xa0c);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < iVar2);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar3,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                  ,0x95d);
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x4e0);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x4e8 + lVar3 * 8);
      if (lVar5 != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar5,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                      ,0x965);
        *(undefined8 *)(param_1 + 0x4e8 + lVar3 * 8) = 0;
        iVar2 = *(int *)(param_1 + 0x4e0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2a8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_s3m.cpp"
                  ,0x96c);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  return 0;
}




int FUN_1005a5b34(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int local_10e4;
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
    iVar8 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar8 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x968);
    iVar8 = 0;
    if (param_3 != 0) {
      uVar12 = 0;
      local_10e4 = (int)&local_1088;
      lVar13 = param_2;
      iVar8 = 0;
      do {
        if (uVar11 == 0) {
          FUN_1005a312c(param_1,1);
          iVar8 = 0;
          uVar11 = *(uint *)(param_1 + 0x96c);
        }
        uVar10 = param_3 - uVar12;
        if (uVar11 + uVar12 <= param_3) {
          uVar10 = uVar11;
        }
        lVar14 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar14 + 0x710);
        if (uVar10 <= *(uint *)(lVar14 + 0x710)) {
          uVar1 = uVar10;
        }
        if (param_2 != 0) {
          local_10ac = 0;
          local_1088 = 0;
          uStack_1080 = 0;
          local_10b0 = 0x200;
          local_10a8 = 0;
          local_10a0 = auStack_1078;
          local_10b8 = lVar14;
          puStack_1098 = local_10a0;
          if (lVar14 == 0) {
            lVar15 = 0;
            bVar6 = false;
            bVar4 = false;
            bVar5 = true;
          }
          else {
            bVar5 = true;
            FUN_10057097c(lVar14,1);
            lVar15 = *(long *)(param_1 + 0x48);
            if (lVar15 == 0) {
              lVar15 = 0;
              bVar4 = false;
              bVar6 = true;
            }
            else {
              FUN_10057097c(lVar15,3);
              bVar5 = false;
              bVar6 = true;
              bVar4 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x2a0) + 0x3f) == '\0') {
LAB_1005a5cc0:
            local_10c0 = 0;
            local_10d0 = 0;
            uStack_10c8 = 0;
            local_10d8 = 0;
            local_10bc = 0xffffffff;
            iVar8 = FUN_1005c9be4(&local_10b8,uVar1,1000,2,&local_10d8);
            if (iVar8 == 0) {
              uVar9 = FUN_1005c8da0(&local_10d8);
              bVar3 = true;
              iVar8 = FUN_10063a2fc(0x3f800000,lVar13,uVar9,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar7 = iVar8;
              if (iVar8 == 0) {
                FUN_1005c8d10(&local_10d8);
                bVar3 = false;
                iVar8 = 0;
                iVar7 = local_10e4;
              }
            }
            else {
              bVar3 = true;
              iVar7 = iVar8;
            }
            local_10e4 = iVar7;
            FUN_1005c8e48(&local_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar8 = FUN_1005cb3bc(&local_10b8,*(long *)(param_1 + 0x2a0),uVar1);
            if (iVar8 == 0) goto LAB_1005a5cc0;
            bVar3 = true;
            local_10e4 = iVar8;
          }
          if (!bVar5 && bVar4) {
            FUN_100570990(lVar15,3);
          }
          if ((lVar14 != 0) && (bVar6)) {
            FUN_100570990(lVar14,1);
          }
          if (bVar3) goto LAB_1005a5e1c;
        }
        uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar10 = uVar1;
        if (uVar2 < 5) {
          uVar10 = *(int *)(&DAT_10115ed70 + (long)(int)uVar2 * 4) * uVar1 >> 3;
        }
        uVar12 = uVar1 + uVar12;
        lVar13 = lVar13 + (ulong)(uVar10 * *(int *)(*(long *)(param_1 + 8) + 0x104));
        uVar11 = uVar11 - uVar1;
      } while (uVar12 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar11;
  }
  local_10e4 = iVar8;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_1005a5e1c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return local_10e4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005a5e60(long param_1,undefined8 param_2,uint param_3,int param_4)

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
        FUN_1005a312c(param_1,1);
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




void FUN_1005a5f2c(void)

{
  DAT_101e99330 = "FMOD Tag Reader Codec";
  DAT_101e99338 = 0x10100;
  DAT_101e99340 = 2;
  DAT_101e99348 = thunk_FUN_1005a5f78;
  DAT_101e99388 = 1000;
  DAT_101e9938c = 0x198;
  return;
}




void thunk_FUN_1005a5f78(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iStack_28;
  int iStack_24;
  
  *(undefined8 *)(param_1 + 0x5a) = 0;
  param_1[0x14] = 1000;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultFileRead_101444158;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 10) = puVar1;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  iVar2 = FUN_1005a6034();
  if ((iVar2 != 0) ||
     (((iVar2 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&iStack_28), iVar2 == 0 &&
       (iVar2 = FUN_1005d1f08(*(undefined8 *)(param_1 + 100),&iStack_24), iVar2 == 0)) &&
      (iVar2 = FUN_1005d1edc(*(undefined8 *)(param_1 + 100),iStack_28 + iStack_24), iVar2 == 0)))) {
    FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
  }
  return;
}




void FUN_1005a5f78(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int local_28;
  int iStack_24;
  
  *(undefined8 *)(param_1 + 0x5a) = 0;
  param_1[0x14] = 1000;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultFileRead_101444158;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 10) = puVar1;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  iVar2 = FUN_1005a6034();
  if ((iVar2 != 0) ||
     (((iVar2 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_28), iVar2 == 0 &&
       (iVar2 = FUN_1005d1f08(*(undefined8 *)(param_1 + 100),&iStack_24), iVar2 == 0)) &&
      (iVar2 = FUN_1005d1edc(*(undefined8 *)(param_1 + 100),local_28 + iStack_24), iVar2 == 0)))) {
    FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
  }
  return;
}




void FUN_1005a6034(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int local_60;
  uint local_5c;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar4;
  iVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xffffff80,2);
  if (iVar1 == 0) {
    uVar5 = 0;
    uVar3 = 0xffffff80;
    do {
      uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_58,1,3,&local_60);
      if ((int)uVar2 != 0) goto LAB_1005a62a0;
      if (local_60 != 3) {
        uVar2 = 0xd;
        goto LAB_1005a62a0;
      }
      iVar1 = FUN_1005ed0f8(auStack_58,"TAG",3);
      if (iVar1 == 0) {
        uVar2 = FUN_1005a62c8(param_1);
        if (((int)uVar2 != 0) ||
           (uVar2 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_5c), (int)uVar2 != 0))
        goto LAB_1005a62a0;
        uVar5 = uVar3;
        if (local_5c < 0x81) break;
      }
      else {
        uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar5 - 10,2);
        if ((int)uVar2 == 0xe) break;
        if (((int)uVar2 != 0) ||
           (uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_58,1,3,&local_60),
           (int)uVar2 != 0)) goto LAB_1005a62a0;
        if (local_60 != 3) {
          uVar2 = 0xd;
          goto LAB_1005a62a0;
        }
        iVar1 = FUN_1005ed0f8(auStack_58,"3DI",3);
        if (iVar1 != 0) break;
        uVar2 = FUN_1005a6624(param_1);
        if (((int)uVar2 != 0) ||
           (uVar2 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_5c), uVar5 = local_5c,
           (int)uVar2 != 0)) goto LAB_1005a62a0;
      }
      uVar3 = uVar5 - 0x80;
      iVar1 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar3,2);
    } while (iVar1 == 0);
  }
  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0,0);
  if (((int)uVar2 == 0) &&
     (uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_58,1,0x10,&local_60),
     (int)uVar2 == 0)) {
    uVar3 = 0;
    do {
      if (local_60 != 0x10) {
        uVar2 = 0xd;
        break;
      }
      iVar1 = FUN_1005ed0f8(auStack_58,"TAG",3);
      if (iVar1 == 0) {
        uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xfffffff3,1);
        if ((int)uVar2 != 0) break;
        uVar2 = FUN_1005a62c8(param_1);
        iVar1 = (int)uVar2;
      }
      else {
        iVar1 = FUN_1005ed0f8(auStack_58,"ID3",3);
        if (iVar1 != 0) {
          uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),uVar3,0);
          break;
        }
        uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),0xfffffff3,1);
        if ((int)uVar2 != 0) break;
        uVar2 = FUN_1005a6750(param_1);
        iVar1 = (int)uVar2;
      }
      if (((iVar1 != 0) ||
          (uVar2 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_5c), uVar3 = local_5c,
          (int)uVar2 != 0)) ||
         (uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_58,1,0x10,&local_60),
         (int)uVar2 != 0)) break;
    } while( true );
  }
LAB_1005a62a0:
  if (lVar4 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




void FUN_1005a62c8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_x7;
  ulong uVar3;
  long lVar4;
  int local_54;
  char acStack_50 [8];
  ulong local_48 [2];
  undefined7 uStack_38;
  undefined1 local_31;
  undefined4 uStack_30;
  char cStack_2c;
  byte bStack_2b;
  undefined1 uStack_2a;
  long local_28;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_30 = 0;
  cStack_2c = '\0';
  bStack_2b = 0;
  uStack_2a = 0;
  local_48[1] = 0;
  uStack_38 = 0;
  local_31 = 0;
  local_48[0] = 0;
  local_28 = lVar4;
  uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_48,1,0x1e,&local_54);
  if ((int)uVar2 == 0) {
    if (local_54 == 0x1e) {
      iVar1 = FUN_1005ecb6c(local_48);
      if (iVar1 != 0) {
        iVar1 = FUN_1005ecb6c(local_48);
        FUN_100586684(param_1,1,"TITLE",local_48,iVar1 + 1,3,0);
      }
      uStack_30 = 0;
      cStack_2c = '\0';
      bStack_2b = 0;
      uStack_2a = 0;
      local_48[1] = 0;
      uStack_38 = 0;
      local_31 = 0;
      local_48[0] = 0;
      uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_48,1,0x1e,&local_54);
      if ((int)uVar2 == 0) {
        if (local_54 == 0x1e) {
          iVar1 = FUN_1005ecb6c(local_48);
          if (iVar1 != 0) {
            iVar1 = FUN_1005ecb6c(local_48);
            FUN_100586684(param_1,1,"ARTIST",local_48,iVar1 + 1,3,0);
          }
          uStack_30 = 0;
          cStack_2c = '\0';
          bStack_2b = 0;
          uStack_2a = 0;
          local_48[1] = 0;
          uStack_38 = 0;
          local_31 = 0;
          local_48[0] = 0;
          uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_48,1,0x1e,&local_54);
          if ((int)uVar2 == 0) {
            if (local_54 == 0x1e) {
              iVar1 = FUN_1005ecb6c(local_48);
              if (iVar1 != 0) {
                iVar1 = FUN_1005ecb6c(local_48);
                FUN_100586684(param_1,1,"ALBUM",local_48,iVar1 + 1,3,0);
              }
              uStack_30 = 0;
              cStack_2c = '\0';
              bStack_2b = 0;
              uStack_2a = 0;
              local_48[1] = 0;
              uStack_38 = 0;
              local_31 = 0;
              local_48[0] = 0;
              uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_48,1,4,&local_54);
              if ((int)uVar2 == 0) {
                if (local_54 == 4) {
                  iVar1 = FUN_1005ecb6c(local_48);
                  if (iVar1 != 0) {
                    iVar1 = FUN_1005ecb6c(local_48);
                    FUN_100586684(param_1,1,"YEAR",local_48,iVar1 + 1,3,0);
                  }
                  uStack_30 = 0;
                  cStack_2c = '\0';
                  bStack_2b = 0;
                  uStack_2a = 0;
                  local_48[1] = 0;
                  uStack_38 = 0;
                  local_31 = 0;
                  local_48[0] = 0;
                  uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_48,1,0x1e,&local_54);
                  if ((int)uVar2 == 0) {
                    if (local_54 == 0x1e) {
                      iVar1 = FUN_1005ecb6c(local_48);
                      if (iVar1 != 0) {
                        iVar1 = FUN_1005ecb6c(local_48);
                        FUN_100586684(param_1,1,"COMMENT",local_48,iVar1 + 1,3,0);
                      }
                      if ((cStack_2c == '\0') && (uVar3 = (ulong)bStack_2b, bStack_2b != 0)) {
                        _sprintf(acStack_50,"%d");
                        iVar1 = FUN_1005ecb6c(acStack_50);
                        FUN_100586684(param_1,1,"TRACK",acStack_50,iVar1 + 1,3,0,in_x7,uVar3);
                      }
                      uStack_30 = 0;
                      cStack_2c = '\0';
                      bStack_2b = 0;
                      uStack_2a = 0;
                      local_48[1] = 0;
                      uStack_38 = 0;
                      local_31 = 0;
                      local_48[0] = 0;
                      uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_48,1,1,&local_54);
                      if ((int)uVar2 == 0) {
                        if (local_54 == 1) {
                          uVar3 = local_48[0] & 0xff;
                          _sprintf(acStack_50,"%d");
                          iVar1 = FUN_1005ecb6c(acStack_50);
                          FUN_100586684(param_1,1,"GENRE",acStack_50,iVar1 + 1,3,0,in_x7,uVar3);
                          uVar2 = 0;
                        }
                        else {
                          uVar2 = 0xd;
                        }
                      }
                    }
                    else {
                      uVar2 = 0xd;
                    }
                  }
                }
                else {
                  uVar2 = 0xd;
                }
              }
            }
            else {
              uVar2 = 0xd;
            }
          }
        }
        else {
          uVar2 = 0xd;
        }
      }
    }
    else {
      uVar2 = 0xd;
    }
  }
  if (lVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




undefined8 FUN_1005a6624(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_30;
  int local_2c;
  byte local_27;
  undefined1 auStack_26 [2];
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  
  uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_26,1,2,&local_2c);
  if ((int)uVar2 == 0) {
    if (local_2c == 2) {
      uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_27,1,1,&local_2c);
      if ((int)uVar2 == 0) {
        if (local_2c == 1) {
          uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_24,1,4,&local_2c);
          if ((int)uVar2 == 0) {
            if (local_2c == 4) {
              iVar1 = local_23 * 0x4000 + local_24 * 0x200000 + local_22 * 0x80 + (int)local_21;
              if ((local_27 & 0x10) != 0) {
                iVar1 = iVar1 + 10;
              }
              uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),3 - iVar1,1);
              if (((int)uVar2 == 0) &&
                 (uVar2 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_30), (int)uVar2 == 0))
              {
                uVar2 = FUN_1005a6750(param_1);
                if ((int)uVar2 == 0) {
                  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_30 + -3,0);
                }
              }
            }
            else {
              uVar2 = 0xd;
            }
          }
        }
        else {
          uVar2 = 0xd;
        }
      }
    }
    else {
      uVar2 = 0xd;
    }
  }
  return uVar2;
}




undefined8 FUN_1005a6750(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_7a [2];
  undefined4 local_78;
  undefined1 local_74;
  uint local_70;
  int local_6c;
  ushort local_68;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  
  uVar4 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_6c);
  if (((int)uVar4 == 0) &&
     (uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_68,1,2,&local_70), (int)uVar4 == 0
     )) {
    if (local_70 == 2) {
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_65,1,1,&local_70);
      if ((int)uVar4 == 0) {
        if (local_70 == 1) {
          uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_64,1,4,&local_70);
          if ((int)uVar4 == 0) {
            if (local_70 == 4) {
              uVar2 = (uint)local_63 * 0x4000 + (uint)local_64 * 0x200000 + (uint)local_62 * 0x80 +
                      (uint)local_61;
              if ((local_65 & 0x10) != 0) {
                uVar2 = uVar2 + 10;
              }
              iVar1 = local_6c + uVar2 + 7;
              uVar10 = 10;
              do {
                local_74 = 0;
                local_78 = 0;
                if (local_68 < 3) {
                  uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_78,3,1,&local_70);
                  if ((int)uVar4 != 0) {
                    return uVar4;
                  }
                  if (local_70 != 1) {
                    return 0xd;
                  }
                  uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_64,3,1,&local_70);
                  if ((int)uVar4 != 0) {
                    return uVar4;
                  }
                  if (local_70 != 1) {
                    return 0xd;
                  }
                  uVar6 = (uint)local_64 << 0x10 | (uint)local_63 << 8;
                  bVar3 = local_62;
                }
                else {
                  uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_78,4,1,&local_70);
                  if ((int)uVar4 != 0) {
                    return uVar4;
                  }
                  if (local_70 != 1) {
                    return 0xd;
                  }
                  uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_64,4,1,&local_70);
                  if ((int)uVar4 != 0) {
                    return uVar4;
                  }
                  if (local_70 != 1) {
                    return 0xd;
                  }
                  uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_7a,2,1,&local_70);
                  if ((int)uVar4 != 0) {
                    return uVar4;
                  }
                  if (local_70 != 1) {
                    return 0xd;
                  }
                  uVar6 = (uint)local_64 << 0x18 | (uint)local_63 << 0x10 | (uint)local_62 << 8;
                  bVar3 = local_61;
                }
                uVar6 = uVar6 | bVar3;
                uVar7 = (ulong)uVar6;
                if (((((char)local_78 == '\0') || ('\x1f' < (char)local_78)) &&
                    ((local_78._1_1_ == '\0' || ('\x1f' < local_78._1_1_)))) &&
                   ((local_78._2_1_ == '\0' || ('\x1f' < local_78._2_1_)))) {
                  uVar8 = (ulong)(uVar6 - 1);
                  if ((uVar6 - 1 < 0xfffff) && (local_78._3_1_ == '\0' || '\x1f' < local_78._3_1_))
                  {
                    pbVar5 = (byte *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar7,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_tag.cpp"
                                                  ,0x276,0,0);
                    if (pbVar5 == (byte *)0x0) {
                      FUN_1005d1d28(*(undefined8 *)(param_1 + 400),iVar1,0);
                      return 0x26;
                    }
                    uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),pbVar5,1,uVar7,&local_70);
                    if ((int)uVar4 != 0) {
                      return uVar4;
                    }
                    if (local_70 != uVar6) {
                      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pbVar5,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_tag.cpp"
                                    ,0x283);
                      return 0;
                    }
                    if ((char)local_78 == 'T') {
                      iVar9 = (char)*pbVar5 + 3;
                      if (3 < *pbVar5) {
                        iVar9 = 0;
                      }
                      _memmove(pbVar5,pbVar5 + 1,uVar8);
                      pbVar5[uVar8] = 0;
                      uVar7 = uVar8;
                    }
                    else {
                      iVar9 = 0;
                    }
                    FUN_100586684(param_1,2,&local_78,pbVar5,uVar7,iVar9,0);
                    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pbVar5,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_tag.cpp"
                                  ,0x2a9);
                  }
                }
                uVar10 = uVar10 + uVar6 + 10;
              } while (uVar10 < uVar2);
              uVar4 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),iVar1,0);
            }
            else {
              uVar4 = 0xd;
            }
          }
        }
        else {
          uVar4 = 0xd;
        }
      }
    }
    else {
      uVar4 = 0xd;
    }
  }
  return uVar4;
}




void FUN_1005a6b98(void)

{
  DAT_101e99408 = "FMOD User Reader Codec";
  DAT_101e99410 = 0x10100;
  DAT_101e99418 = 2;
  DAT_101e99420 = FUN_1005a6c04;
  DAT_101e99428 = FUN_1005a6cfc;
  DAT_101e99430 = FUN_1005a6d04;
  DAT_101e99440 = FUN_1005a6d10;
  DAT_101e99460 = 0xe;
  DAT_101e99464 = 0x2c8;
  return;
}




undefined8 FUN_1005a6c04(undefined4 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  param_1[0x14] = 0xe;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
  if (*(int *)(param_3 + 0x14) - 1U < 5) {
    uVar5 = (**(code **)(**(long **)(param_1 + 100) + 0x18))
                      (*(long **)(param_1 + 100),param_1 + 0xa9);
    if ((int)uVar5 == 0) {
      param_1[0x4c] = 0;
      iVar1 = *(int *)(param_3 + 0x14);
      lVar6 = *(long *)(param_1 + 2);
      *(int *)(lVar6 + 0x100) = iVar1;
      uVar2 = *(uint *)(param_3 + 0xc);
      *(uint *)(lVar6 + 0x104) = uVar2;
      *(undefined4 *)(lVar6 + 0x108) = *(undefined4 *)(param_3 + 0x10);
      uVar7 = *(uint *)(param_3 + 4);
      if (uVar2 != 0) {
        uVar3 = iVar1 - 1;
        if (uVar3 < 5) {
          uVar4 = 0;
          if ((long)*(int *)(&DAT_10115ed90 + (long)(int)uVar3 * 4) != 0) {
            uVar4 = (uint)(((ulong)uVar7 << 3) /
                          (ulong)(long)*(int *)(&DAT_10115ed90 + (long)(int)uVar3 * 4));
          }
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = uVar4 / uVar2;
          }
        }
        *(uint *)(lVar6 + 0x110) = uVar7;
      }
      uVar5 = 0;
      *param_1 = 0;
    }
  }
  else {
    uVar5 = 0x13;
  }
  return uVar5;
}




undefined8 FUN_1005a6cfc(void)

{
  return 0;
}




undefined8
FUN_1005a6d04(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_3;
  return 0;
}




undefined8 FUN_1005a6d10(void)

{
  return 0;
}




undefined8 FUN_1005a6d18(undefined4 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  param_1[0x14] = 0xe;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  *(undefined4 **)(param_1 + 2) = param_1 + 0x66;
  if (*(int *)(param_3 + 0x14) - 1U < 5) {
    uVar5 = (**(code **)(**(long **)(param_1 + 100) + 0x18))
                      (*(long **)(param_1 + 100),param_1 + 0xa9);
    if ((int)uVar5 == 0) {
      param_1[0x4c] = 0;
      iVar1 = *(int *)(param_3 + 0x14);
      lVar6 = *(long *)(param_1 + 2);
      *(int *)(lVar6 + 0x100) = iVar1;
      uVar2 = *(uint *)(param_3 + 0xc);
      *(uint *)(lVar6 + 0x104) = uVar2;
      *(undefined4 *)(lVar6 + 0x108) = *(undefined4 *)(param_3 + 0x10);
      uVar7 = *(uint *)(param_3 + 4);
      if (uVar2 != 0) {
        uVar3 = iVar1 - 1;
        if (uVar3 < 5) {
          uVar4 = 0;
          if ((long)*(int *)(&DAT_10115ed90 + (long)(int)uVar3 * 4) != 0) {
            uVar4 = (uint)(((ulong)uVar7 << 3) /
                          (ulong)(long)*(int *)(&DAT_10115ed90 + (long)(int)uVar3 * 4));
          }
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = uVar4 / uVar2;
          }
        }
        *(uint *)(lVar6 + 0x110) = uVar7;
      }
      uVar5 = 0;
      *param_1 = 0;
    }
  }
  else {
    uVar5 = 0x13;
  }
  return uVar5;
}




undefined8 FUN_1005a6e10(void)

{
  return 0;
}




undefined8
FUN_1005a6e18(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_3;
  return 0;
}




undefined8 FUN_1005a6e24(void)

{
  return 0;
}




void FUN_1005a6e2c(void)

{
  DAT_101e994e0 = "FMOD Wav Codec";
  DAT_101e994e8 = 0x10100;
  DAT_101e994f0 = 10;
  DAT_101e994f8 = thunk_FUN_1005a7184;
  DAT_101e99500 = FUN_1005a6edc;
  DAT_101e99508 = thunk_FUN_1005a771c;
  DAT_101e99518 = thunk_FUN_1005a7bf4;
  DAT_101e99520 = FUN_1005a6efc;
  DAT_101e99528 = FUN_1005a6f0c;
  DAT_101e99560 = FUN_1005a6fc0;
  DAT_101e99538 = 0xf;
  DAT_101e9953c = 0x348;
  DAT_101e995a0 = FUN_1005a705c;
  DAT_101e995a8 = FUN_1005a70d0;
  DAT_101e995b0 = FUN_1005a7178;
  return;
}




undefined8 thunk_FUN_1005a7184(undefined4 *param_1,uint param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_54 [4];
  
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 0xf;
  param_1[0x10] = 2;
  puVar10 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar10;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  uVar12 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_60,1,8,0);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  iVar11 = FUN_1005ed0f8(auStack_60,"RIFF",4);
  if (iVar11 != 0) {
    return 0x13;
  }
  uVar12 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_54,1,4,0);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  iVar11 = FUN_1005ed0f8(auStack_54,"WAVE",4);
  if (iVar11 != 0) {
    return 0x13;
  }
  _bzero(param_1 + 0x70,0x130);
  *(undefined4 **)(param_1 + 2) = param_1 + 0x70;
  param_1[0x4c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  param_1[0xbc] = 0;
  uVar12 = FUN_1005a8c04(param_1,uStack_5c);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  puVar14 = *(ushort **)(param_1 + 0xd0);
  if (puVar14 == (ushort *)0x0) {
    return 0x13;
  }
  if (param_1[0x4c] == -1) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar14,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav.cpp"
                  ,0xa8);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    param_1[0x4c] = 0;
    return 0x13;
  }
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x66) = 1;
  uVar4 = *puVar14;
  if (uVar4 == 0x55) {
    return 0x13;
  }
  if (uVar4 == 0x50) {
    return 0x13;
  }
  puVar1 = (undefined8 *)(param_1 + 0x66);
  if (uVar4 == 0xfffe) {
    puVar2 = puVar14 + 0xc;
    iVar11 = _memcmp(puVar2,&DAT_10115edb0,0x10);
    if ((iVar11 != 0) && (iVar11 = _memcmp(puVar2,&DAT_10115edc0,0x10), iVar11 != 0)) {
      return 0x13;
    }
    *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(puVar14 + 0x10);
    uVar12 = *(undefined8 *)(puVar14 + 8);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(puVar14 + 0xc);
    *(undefined8 *)(param_1 + 0x6a) = uVar12;
    uVar12 = *(undefined8 *)puVar14;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar14 + 4);
    *puVar1 = uVar12;
    lVar15 = *(long *)(param_1 + 2);
    uVar5 = *(ushort *)((long)param_1 + 0x1a6);
    uVar9 = 0;
    if ((ulong)uVar5 != 0) {
      uVar9 = ((ulong)*(uint *)(lVar15 + 0x10c) << 3) / (ulong)uVar5;
    }
    uVar8 = 0;
    if ((ulong)*(ushort *)((long)param_1 + 0x19a) != 0) {
      uVar8 = (undefined4)(uVar9 / *(ushort *)((long)param_1 + 0x19a));
    }
    *(undefined4 *)(lVar15 + 0x110) = uVar8;
    uVar3 = param_1[0x6b];
    uVar7 = uVar3 >> 5;
    *(uint *)(lVar15 + 0x124) =
         uVar7 & 0x10 | uVar3 & 0xf | uVar7 & 0x20 | (uVar3 >> 4 & 1) << 6 | (uVar7 & 1) << 7 |
         uVar7 & 8;
    iVar11 = _memcmp(puVar2,&DAT_10115edc0,0x10);
    if (iVar11 == 0) {
      *(undefined4 *)(lVar15 + 0x100) = 5;
      if (uVar5 != 0x20) {
        return 0x13;
      }
      goto LAB_1005a75a0;
    }
  }
  else {
    if ((uVar4 & 0xfffd) != 1) {
      if ((uVar4 != 0x11) && (uVar4 != 0x69)) {
        return 0x13;
      }
      *(ushort *)(param_1 + 0x6a) = puVar14[8];
      uVar12 = *(undefined8 *)puVar14;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar14 + 4);
      *puVar1 = uVar12;
      lVar15 = *(long *)(param_1 + 2);
      uVar5 = puVar14[6];
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = *(uint *)(lVar15 + 0x10c) / (uint)uVar5;
      }
      uVar6 = puVar14[9];
      uVar3 = uVar6 * uVar3;
      uVar7 = 0;
      uVar13 = (uint)uVar5;
      if (uVar13 != 0) {
        uVar7 = *(uint *)(lVar15 + 0x110) / uVar13;
      }
      if (uVar3 <= *(uint *)(lVar15 + 0x110)) {
        uVar3 = (uVar7 + 1) * uVar13;
      }
      *(uint *)(lVar15 + 0x110) = uVar3;
      *(undefined4 *)(lVar15 + 0x100) = 2;
      *(undefined2 *)(param_1 + 0x66) = 1;
      *(undefined2 *)((long)param_1 + 0x1a6) = 0x10;
      uVar3 = (uint)*(ushort *)((long)param_1 + 0x19a) << 1;
      *(short *)(param_1 + 0x69) = (short)uVar3;
      param_1[0x68] = (uVar3 & 0xfffe) * param_1[0x67];
      param_1[0xc0] = (uint)uVar6;
      if ((param_2 >> 9 & 1) == 0) {
        *(uint *)(lVar15 + 0x114) = (uint)uVar6;
        param_1[0xc4] = (uint)puVar14[6];
      }
      else {
        param_1[0xc4] = 0;
      }
      goto LAB_1005a75a0;
    }
    *(ushort *)(param_1 + 0x6a) = puVar14[8];
    uVar12 = *(undefined8 *)puVar14;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar14 + 4);
    *puVar1 = uVar12;
    lVar15 = *(long *)(param_1 + 2);
    uVar5 = *(ushort *)((long)param_1 + 0x1a6);
    uVar9 = 0;
    if ((ulong)uVar5 != 0) {
      uVar9 = ((ulong)*(uint *)(lVar15 + 0x10c) << 3) / (ulong)uVar5;
    }
    uVar8 = 0;
    if ((ulong)*(ushort *)((long)param_1 + 0x19a) != 0) {
      uVar8 = (undefined4)(uVar9 / *(ushort *)((long)param_1 + 0x19a));
    }
    *(undefined4 *)(lVar15 + 0x110) = uVar8;
    *(undefined4 *)(lVar15 + 0x124) = 0;
    if (uVar4 == 3) {
      *(undefined4 *)(lVar15 + 0x100) = 5;
      if (uVar5 != 0x20) {
        return 0x13;
      }
      goto LAB_1005a75a0;
    }
  }
  if (uVar5 < 0x18) {
    if (uVar5 == 8) {
      *(undefined4 *)(lVar15 + 0x100) = 1;
    }
    else {
      if (uVar5 != 0x10) {
        return 0x13;
      }
      *(undefined4 *)(lVar15 + 0x100) = 2;
    }
  }
  else if (uVar5 == 0x18) {
    *(undefined4 *)(lVar15 + 0x100) = 3;
  }
  else {
    if (uVar5 != 0x20) {
      return 0x13;
    }
    *(undefined4 *)(lVar15 + 0x100) = 4;
  }
LAB_1005a75a0:
  if (param_1[0xc4] != 0) {
    lVar15 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xc4],
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav.cpp"
                           ,0x182,0);
    *(long *)(param_1 + 0xc2) = lVar15;
    if (lVar15 == 0) {
      return 0x26;
    }
    puVar14 = *(ushort **)(param_1 + 0xd0);
    lVar15 = *(long *)(param_1 + 2);
  }
  *(uint *)(lVar15 + 0x104) = (uint)puVar14[1];
  *(undefined4 *)(lVar15 + 0x108) = *(undefined4 *)(puVar14 + 2);
  *(undefined4 *)(lVar15 + 0x118) = param_1[0x4d];
  *(undefined4 *)(lVar15 + 0x11c) = param_1[0x4e];
  if ((uint)param_1[0x4d] < (uint)param_1[0x4e]) {
    *(undefined4 *)(lVar15 + 0x120) = 2;
  }
  if (((uVar4 == 0x11) || (uVar4 == 0x69)) && ((param_2 >> 9 & 1) != 0)) {
    param_1[0x31] = 2;
    param_1[0xc4] = (uint)puVar14[6];
  }
  *param_1 = 0;
  return 0;
}




undefined8 FUN_1005a6edc(void)

{
  FUN_1005a7664();
  return 0;
}




void thunk_FUN_1005a771c(long param_1,byte *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *apuStack_2090 [2];
  long lStack_2080;
  uint uStack_2074;
  uint uStack_2070;
  uint uStack_206c;
  undefined2 auStack_2068 [8];
  undefined8 auStack_2058 [1023];
  
  lVar20 = *(long *)PTR____stack_chk_guard_101444218;
  iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x104);
  uVar11 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar11 < 5) {
    param_3 = *(int *)(&DAT_10115edd0 + (long)(int)uVar11 * 4) * param_3 >> 3;
  }
  sVar3 = **(short **)(param_1 + 0x340);
  uVar7 = 0x36;
  lStack_2080 = lVar20;
  if (sVar3 < 0x69) {
    if (sVar3 < 3) {
      if (sVar3 != -2 && sVar3 != 1) goto LAB_1005a7b0c;
    }
    else if (sVar3 != 3) {
      if (sVar3 != 0x11) goto LAB_1005a7b0c;
      goto LAB_1005a7840;
    }
    FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&uStack_206c);
    uVar11 = *(int *)(*(long *)(param_1 + 8) + 0x10c) + *(int *)(param_1 + 0x130);
    if (uVar11 < uStack_206c || uVar11 - uStack_206c == 0) {
      uVar7 = 0x10;
      goto LAB_1005a7b0c;
    }
    param_3 = param_3 * iVar13;
    uVar1 = uStack_206c + param_3;
    uVar12 = uVar11 - uStack_206c;
    if (uVar1 <= uVar11) {
      uVar12 = param_3;
    }
    iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x100);
    if (iVar13 - 4U < 2) {
      uVar8 = *(undefined8 *)(param_1 + 400);
      uVar12 = uVar12 >> 2;
      uVar9 = 4;
LAB_1005a78c0:
      uVar6 = FUN_1005d148c(uVar8,param_2,uVar9,uVar12,param_4);
      uVar12 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
      uVar4 = 0;
      if (uVar12 != 0) {
        uVar4 = *param_4 / uVar12;
      }
      *param_4 = uVar4;
    }
    else {
      if (iVar13 == 2) {
        uVar8 = *(undefined8 *)(param_1 + 400);
        uVar12 = uVar12 >> 1;
        uVar9 = 2;
        goto LAB_1005a78c0;
      }
      if (iVar13 == 1) {
        uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,uVar12,&uStack_2070);
        if (uStack_2070 >> 2 != 0) {
          iVar13 = -(uStack_2070 >> 2);
          pbVar15 = param_2;
          do {
            *pbVar15 = *pbVar15 ^ 0x80;
            pbVar15[1] = pbVar15[1] ^ 0x80;
            pbVar15[2] = pbVar15[2] ^ 0x80;
            pbVar15[3] = pbVar15[3] ^ 0x80;
            iVar13 = iVar13 + 1;
            pbVar15 = pbVar15 + 4;
          } while (iVar13 != 0);
          param_2 = param_2 + (ulong)((uStack_2070 >> 2) - 1) * 4 + 4;
        }
        uVar12 = uStack_2070 & 3;
        if (uVar12 != 0) {
          uVar7 = (ulong)(uVar12 - 1) + 1;
          uVar16 = uVar7 & 0x1fffffffe;
          if (uVar16 == 0) {
            uVar16 = 0;
            pbVar15 = param_2;
          }
          else {
            pbVar15 = param_2 + uVar16;
            uVar12 = uVar12 - (int)uVar16;
            uVar14 = (ulong)((uStack_2070 & 3) - 1) + 1 & 0xfffffffffffffffe;
            param_2 = param_2 + 1;
            do {
              param_2[-1] = param_2[-1] ^ 0x80;
              *param_2 = *param_2 ^ 0x80;
              uVar14 = uVar14 - 2;
              param_2 = param_2 + 2;
            } while (uVar14 != 0);
          }
          if (uVar7 != uVar16) {
            do {
              *pbVar15 = *pbVar15 ^ 0x80;
              uVar12 = uVar12 - 1;
              pbVar15 = pbVar15 + 1;
            } while (uVar12 != 0);
          }
        }
        uVar12 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
        if (uVar12 != 0) {
          uVar4 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
          if (uVar4 < 5) {
            uVar5 = 0;
            if ((long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4) != 0) {
              uVar5 = (uint)(((ulong)uStack_2070 << 3) /
                            (ulong)(long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4));
            }
            uStack_2070 = 0;
            if (uVar12 != 0) {
              uStack_2070 = uVar5 / uVar12;
            }
          }
          *param_4 = uStack_2070;
        }
      }
      else {
        uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,uVar12,&uStack_2074);
        uVar12 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
        if (uVar12 != 0) {
          uVar4 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
          if (uVar4 < 5) {
            uVar5 = 0;
            if ((long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4) != 0) {
              uVar5 = (uint)(((ulong)uStack_2074 << 3) /
                            (ulong)(long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4));
            }
            uStack_2074 = 0;
            if (uVar12 != 0) {
              uStack_2074 = uVar5 / uVar12;
            }
          }
          *param_4 = uStack_2074;
        }
      }
    }
    uVar12 = 0x10;
    if (uVar1 <= uVar11) {
      uVar12 = uVar6;
    }
    uVar7 = (ulong)uVar12;
    if (uVar12 != 0) goto LAB_1005a7b0c;
    uVar11 = *param_4;
  }
  else {
    if (sVar3 != 0x69) goto LAB_1005a7b0c;
LAB_1005a7840:
    uVar11 = *(uint *)(param_1 + 0x310);
    uVar16 = (ulong)uVar11;
    lVar19 = (long)apuStack_2090 - (uVar16 + 0xf & 0xfffffffffffffff0);
    uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),lVar19,1,uVar16,0);
    if ((int)uVar7 != 0) goto LAB_1005a7b0c;
    uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
    uVar7 = (ulong)uVar1;
    if (uVar1 == 2) {
      FUN_1005a859c(lVar19,param_2,1,uVar16,*(undefined4 *)(param_1 + 0x300));
    }
    else if (uVar1 == 1) {
      FUN_1005a8404(lVar19,param_2,1,uVar16,*(undefined4 *)(param_1 + 0x300),1);
    }
    else {
      if (0 < (int)uVar1) {
        lVar21 = 0;
        lVar20 = 0;
        apuStack_2090[1] = auStack_2058;
        uVar12 = 0;
        if (uVar1 != 0) {
          uVar12 = uVar11 / uVar1;
        }
        do {
          iVar13 = 0;
          iVar10 = (int)uVar7;
          if (iVar10 != 0) {
            iVar13 = *(int *)(param_1 + 0x310) / iVar10;
          }
          if (0 < iVar13) {
            uVar7 = (ulong)iVar13;
            if (iVar13 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar7 & 0xfffffffffffffff0;
              if (uVar16 == 0 || iVar10 != 1) {
                uVar16 = 0;
              }
              else {
                uVar14 = (long)iVar13 & 0xfffffffffffffff0;
                lVar17 = lVar21;
                puVar18 = apuStack_2090[1];
                do {
                  puVar2 = (undefined8 *)(lVar19 + (lVar17 >> 0x20) * 2);
                  uVar8 = *puVar2;
                  uVar22 = puVar2[3];
                  uVar9 = puVar2[2];
                  puVar18[-1] = puVar2[1];
                  puVar18[-2] = uVar8;
                  puVar18[1] = uVar22;
                  *puVar18 = uVar9;
                  uVar14 = uVar14 - 0x10;
                  lVar17 = lVar17 + 0x1000000000;
                  puVar18 = puVar18 + 4;
                } while (uVar14 != 0);
              }
              if (uVar7 == uVar16) goto LAB_1005a7aac;
            }
            iVar13 = (int)lVar20 + iVar10 * (int)uVar16;
            do {
              auStack_2068[uVar16] = *(undefined2 *)(lVar19 + (long)iVar13 * 2);
              uVar16 = uVar16 + 1;
              iVar13 = iVar13 + iVar10;
            } while ((long)uVar16 < (long)uVar7);
          }
LAB_1005a7aac:
          FUN_1005a8404(auStack_2068,param_2 + lVar20 * 2,1,uVar12,*(undefined4 *)(param_1 + 0x300))
          ;
          lVar20 = lVar20 + 1;
          uVar7 = (ulong)*(int *)(*(long *)(param_1 + 8) + 0x104);
          lVar21 = lVar21 + 0x100000000;
        } while (lVar20 < (long)uVar7);
      }
      lVar20 = *(long *)PTR____stack_chk_guard_101444218;
    }
    uVar11 = *(uint *)(param_1 + 0x300);
    *param_4 = uVar11;
  }
  uVar7 = 0;
  *(uint *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + uVar11;
LAB_1005a7b0c:
  if (lVar20 == lStack_2080) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
}




undefined8 FUN_1005a6efc(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x314);
  return 0;
}




undefined8 FUN_1005a6f0c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  if ((*(int *)(param_1 + 0x2f0) != 0) && (lVar1 = *(long *)(param_1 + 0x2f8), lVar1 != 0)) {
    if (0 < *(int *)(param_1 + 0x2f0)) {
      lVar2 = 0;
      lVar3 = 0;
      while( true ) {
        local_38 = lVar1 + lVar2;
        (**(code **)(*param_3 + 0x100))
                  (param_3,*(undefined4 *)(local_38 + 0x2c),2,*(undefined8 *)(local_38 + 0x1c),
                   &local_38,0,0);
        lVar3 = lVar3 + 1;
        if (*(int *)(param_1 + 0x2f0) <= lVar3) break;
        lVar2 = lVar2 + 0x138;
        lVar1 = *(long *)(param_1 + 0x2f8);
      }
    }
    FUN_1005ec374(param_3);
    param_3[0x1f] = *(long *)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  return 0;
}




undefined4 FUN_1005a6fc0(long param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 0x340);
  if (psVar4 == (short *)0x0) {
    return 0x27;
  }
  sVar1 = *psVar4;
  if (sVar1 != 3 && sVar1 != 1) {
    if (sVar1 != -2) {
      return 0x27;
    }
    iVar2 = _memcmp(psVar4 + 0xc,&DAT_10115edb0,0x10);
    if ((iVar2 != 0) && (iVar2 = _memcmp(psVar4 + 0xc,&DAT_10115edc0,0x10), iVar2 != 0)) {
      return 0x27;
    }
  }
  uVar3 = 0x27;
  if (psVar4[7] != 8) {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005a705c(long param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  ushort *puVar2;
  
  if (param_1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 == (uint *)0x0) {
      return 0;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 == (uint *)0x0) {
      return 0;
    }
    *param_4 = 0x40;
    puVar2 = *(ushort **)(param_1 + 0x340);
    if ((puVar2 != (ushort *)0x0) && ((*puVar2 | 2) != 3)) {
      uVar1 = (uint)puVar2[9];
      if (uVar1 == 0) {
        return 0;
      }
      goto LAB_1005a70b8;
    }
    if (*(int *)(param_1 + 0xc4) != 2) {
      *param_4 = 0;
      return 0;
    }
  }
  uVar1 = 0x40;
LAB_1005a70b8:
  *param_4 = uVar1;
  return 0;
}




undefined8 FUN_1005a70d0(long param_1,int param_2)

{
  ushort uVar1;
  long in_x5;
  ushort *puVar2;
  
  if (*(int *)(in_x5 + 0x50) == 0xf) {
    puVar2 = *(ushort **)(in_x5 + 0x340);
    *(ushort **)(param_1 + 0x340) = puVar2;
    uVar1 = *puVar2;
    if ((uVar1 == 0x11) || (uVar1 == 0x69)) {
      *(uint *)(param_1 + 0x310) = (uint)puVar2[6];
      *(uint *)(param_1 + 0x300) = (uint)puVar2[9];
    }
    if (((*(byte *)(param_1 + 0x181) >> 1 & 1) == 0) || ((uVar1 | 2) == 3)) {
      return 0;
    }
  }
  else if (*(int *)(in_x5 + 0x50) == 5) {
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(long *)(param_1 + 0x340) = param_1 + 0x318;
    *(undefined2 *)(param_1 + 0x318) = 1;
    if (*(int *)(*(long *)(in_x5 + 0x198) + 0x2c) != 7) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x318) = 0x11;
    *(int *)(param_1 + 0x310) = param_2 * 0x24;
    *(undefined4 *)(param_1 + 0x300) = 0x40;
    return 0;
  }
  return 0x13;
}




undefined8 FUN_1005a7178(long param_1)

{
  *(undefined8 *)(param_1 + 0x340) = 0;
  return 0;
}




undefined8 FUN_1005a7184(undefined4 *param_1,uint param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined1 auStack_54 [4];
  
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 0xf;
  param_1[0x10] = 2;
  puVar10 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar10;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  uVar12 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_60,1,8,0);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  iVar11 = FUN_1005ed0f8(auStack_60,"RIFF",4);
  if (iVar11 != 0) {
    return 0x13;
  }
  uVar12 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_54,1,4,0);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  iVar11 = FUN_1005ed0f8(auStack_54,"WAVE",4);
  if (iVar11 != 0) {
    return 0x13;
  }
  _bzero(param_1 + 0x70,0x130);
  *(undefined4 **)(param_1 + 2) = param_1 + 0x70;
  param_1[0x4c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  param_1[0xbc] = 0;
  uVar12 = FUN_1005a8c04(param_1,local_5c);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  puVar14 = *(ushort **)(param_1 + 0xd0);
  if (puVar14 == (ushort *)0x0) {
    return 0x13;
  }
  if (param_1[0x4c] == -1) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar14,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav.cpp"
                  ,0xa8);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    param_1[0x4c] = 0;
    return 0x13;
  }
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x66) = 1;
  uVar4 = *puVar14;
  if (uVar4 == 0x55) {
    return 0x13;
  }
  if (uVar4 == 0x50) {
    return 0x13;
  }
  puVar1 = (undefined8 *)(param_1 + 0x66);
  if (uVar4 == 0xfffe) {
    puVar2 = puVar14 + 0xc;
    iVar11 = _memcmp(puVar2,&DAT_10115edb0,0x10);
    if ((iVar11 != 0) && (iVar11 = _memcmp(puVar2,&DAT_10115edc0,0x10), iVar11 != 0)) {
      return 0x13;
    }
    *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(puVar14 + 0x10);
    uVar12 = *(undefined8 *)(puVar14 + 8);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(puVar14 + 0xc);
    *(undefined8 *)(param_1 + 0x6a) = uVar12;
    uVar12 = *(undefined8 *)puVar14;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar14 + 4);
    *puVar1 = uVar12;
    lVar15 = *(long *)(param_1 + 2);
    uVar5 = *(ushort *)((long)param_1 + 0x1a6);
    uVar9 = 0;
    if ((ulong)uVar5 != 0) {
      uVar9 = ((ulong)*(uint *)(lVar15 + 0x10c) << 3) / (ulong)uVar5;
    }
    uVar8 = 0;
    if ((ulong)*(ushort *)((long)param_1 + 0x19a) != 0) {
      uVar8 = (undefined4)(uVar9 / *(ushort *)((long)param_1 + 0x19a));
    }
    *(undefined4 *)(lVar15 + 0x110) = uVar8;
    uVar3 = param_1[0x6b];
    uVar7 = uVar3 >> 5;
    *(uint *)(lVar15 + 0x124) =
         uVar7 & 0x10 | uVar3 & 0xf | uVar7 & 0x20 | (uVar3 >> 4 & 1) << 6 | (uVar7 & 1) << 7 |
         uVar7 & 8;
    iVar11 = _memcmp(puVar2,&DAT_10115edc0,0x10);
    if (iVar11 == 0) {
      *(undefined4 *)(lVar15 + 0x100) = 5;
      if (uVar5 != 0x20) {
        return 0x13;
      }
      goto LAB_1005a75a0;
    }
  }
  else {
    if ((uVar4 & 0xfffd) != 1) {
      if ((uVar4 != 0x11) && (uVar4 != 0x69)) {
        return 0x13;
      }
      *(ushort *)(param_1 + 0x6a) = puVar14[8];
      uVar12 = *(undefined8 *)puVar14;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar14 + 4);
      *puVar1 = uVar12;
      lVar15 = *(long *)(param_1 + 2);
      uVar5 = puVar14[6];
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = *(uint *)(lVar15 + 0x10c) / (uint)uVar5;
      }
      uVar6 = puVar14[9];
      uVar3 = uVar6 * uVar3;
      uVar7 = 0;
      uVar13 = (uint)uVar5;
      if (uVar13 != 0) {
        uVar7 = *(uint *)(lVar15 + 0x110) / uVar13;
      }
      if (uVar3 <= *(uint *)(lVar15 + 0x110)) {
        uVar3 = (uVar7 + 1) * uVar13;
      }
      *(uint *)(lVar15 + 0x110) = uVar3;
      *(undefined4 *)(lVar15 + 0x100) = 2;
      *(undefined2 *)(param_1 + 0x66) = 1;
      *(undefined2 *)((long)param_1 + 0x1a6) = 0x10;
      uVar3 = (uint)*(ushort *)((long)param_1 + 0x19a) << 1;
      *(short *)(param_1 + 0x69) = (short)uVar3;
      param_1[0x68] = (uVar3 & 0xfffe) * param_1[0x67];
      param_1[0xc0] = (uint)uVar6;
      if ((param_2 >> 9 & 1) == 0) {
        *(uint *)(lVar15 + 0x114) = (uint)uVar6;
        param_1[0xc4] = (uint)puVar14[6];
      }
      else {
        param_1[0xc4] = 0;
      }
      goto LAB_1005a75a0;
    }
    *(ushort *)(param_1 + 0x6a) = puVar14[8];
    uVar12 = *(undefined8 *)puVar14;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar14 + 4);
    *puVar1 = uVar12;
    lVar15 = *(long *)(param_1 + 2);
    uVar5 = *(ushort *)((long)param_1 + 0x1a6);
    uVar9 = 0;
    if ((ulong)uVar5 != 0) {
      uVar9 = ((ulong)*(uint *)(lVar15 + 0x10c) << 3) / (ulong)uVar5;
    }
    uVar8 = 0;
    if ((ulong)*(ushort *)((long)param_1 + 0x19a) != 0) {
      uVar8 = (undefined4)(uVar9 / *(ushort *)((long)param_1 + 0x19a));
    }
    *(undefined4 *)(lVar15 + 0x110) = uVar8;
    *(undefined4 *)(lVar15 + 0x124) = 0;
    if (uVar4 == 3) {
      *(undefined4 *)(lVar15 + 0x100) = 5;
      if (uVar5 != 0x20) {
        return 0x13;
      }
      goto LAB_1005a75a0;
    }
  }
  if (uVar5 < 0x18) {
    if (uVar5 == 8) {
      *(undefined4 *)(lVar15 + 0x100) = 1;
    }
    else {
      if (uVar5 != 0x10) {
        return 0x13;
      }
      *(undefined4 *)(lVar15 + 0x100) = 2;
    }
  }
  else if (uVar5 == 0x18) {
    *(undefined4 *)(lVar15 + 0x100) = 3;
  }
  else {
    if (uVar5 != 0x20) {
      return 0x13;
    }
    *(undefined4 *)(lVar15 + 0x100) = 4;
  }
LAB_1005a75a0:
  if (param_1[0xc4] != 0) {
    lVar15 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xc4],
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav.cpp"
                           ,0x182,0);
    *(long *)(param_1 + 0xc2) = lVar15;
    if (lVar15 == 0) {
      return 0x26;
    }
    puVar14 = *(ushort **)(param_1 + 0xd0);
    lVar15 = *(long *)(param_1 + 2);
  }
  *(uint *)(lVar15 + 0x104) = (uint)puVar14[1];
  *(undefined4 *)(lVar15 + 0x108) = *(undefined4 *)(puVar14 + 2);
  *(undefined4 *)(lVar15 + 0x118) = param_1[0x4d];
  *(undefined4 *)(lVar15 + 0x11c) = param_1[0x4e];
  if ((uint)param_1[0x4d] < (uint)param_1[0x4e]) {
    *(undefined4 *)(lVar15 + 0x120) = 2;
  }
  if (((uVar4 == 0x11) || (uVar4 == 0x69)) && ((param_2 >> 9 & 1) != 0)) {
    param_1[0x31] = 2;
    param_1[0xc4] = (uint)puVar14[6];
  }
  *param_1 = 0;
  return 0;
}




undefined8 FUN_1005a7664(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x340);
  if (lVar1 != 0 && lVar1 != param_1 + 0x318) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav.cpp"
                  ,0x1ba);
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  if (*(long *)(param_1 + 0x308) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x308),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav.cpp"
                  ,0x1bf);
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(long *)(param_1 + 0x2f8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2f8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav.cpp"
                  ,0x1c5);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  return 0;
}




void FUN_1005a771c(long param_1,byte *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *apuStack_2090 [2];
  long local_2080;
  uint local_2074;
  uint local_2070;
  uint local_206c;
  undefined2 local_2068 [8];
  undefined8 auStack_2058 [1023];
  
  lVar20 = *(long *)PTR____stack_chk_guard_101444218;
  iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x104);
  uVar11 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar11 < 5) {
    param_3 = *(int *)(&DAT_10115edd0 + (long)(int)uVar11 * 4) * param_3 >> 3;
  }
  sVar3 = **(short **)(param_1 + 0x340);
  uVar7 = 0x36;
  local_2080 = lVar20;
  if (sVar3 < 0x69) {
    if (sVar3 < 3) {
      if (sVar3 != -2 && sVar3 != 1) goto LAB_1005a7b0c;
    }
    else if (sVar3 != 3) {
      if (sVar3 != 0x11) goto LAB_1005a7b0c;
      goto LAB_1005a7840;
    }
    FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_206c);
    uVar11 = *(int *)(*(long *)(param_1 + 8) + 0x10c) + *(int *)(param_1 + 0x130);
    if (uVar11 < local_206c || uVar11 - local_206c == 0) {
      uVar7 = 0x10;
      goto LAB_1005a7b0c;
    }
    param_3 = param_3 * iVar13;
    uVar1 = local_206c + param_3;
    uVar12 = uVar11 - local_206c;
    if (uVar1 <= uVar11) {
      uVar12 = param_3;
    }
    iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x100);
    if (iVar13 - 4U < 2) {
      uVar8 = *(undefined8 *)(param_1 + 400);
      uVar12 = uVar12 >> 2;
      uVar9 = 4;
LAB_1005a78c0:
      uVar6 = FUN_1005d148c(uVar8,param_2,uVar9,uVar12,param_4);
      uVar12 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
      uVar4 = 0;
      if (uVar12 != 0) {
        uVar4 = *param_4 / uVar12;
      }
      *param_4 = uVar4;
    }
    else {
      if (iVar13 == 2) {
        uVar8 = *(undefined8 *)(param_1 + 400);
        uVar12 = uVar12 >> 1;
        uVar9 = 2;
        goto LAB_1005a78c0;
      }
      if (iVar13 == 1) {
        uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,uVar12,&local_2070);
        if (local_2070 >> 2 != 0) {
          iVar13 = -(local_2070 >> 2);
          pbVar15 = param_2;
          do {
            *pbVar15 = *pbVar15 ^ 0x80;
            pbVar15[1] = pbVar15[1] ^ 0x80;
            pbVar15[2] = pbVar15[2] ^ 0x80;
            pbVar15[3] = pbVar15[3] ^ 0x80;
            iVar13 = iVar13 + 1;
            pbVar15 = pbVar15 + 4;
          } while (iVar13 != 0);
          param_2 = param_2 + (ulong)((local_2070 >> 2) - 1) * 4 + 4;
        }
        uVar12 = local_2070 & 3;
        if (uVar12 != 0) {
          uVar7 = (ulong)(uVar12 - 1) + 1;
          uVar16 = uVar7 & 0x1fffffffe;
          if (uVar16 == 0) {
            uVar16 = 0;
            pbVar15 = param_2;
          }
          else {
            pbVar15 = param_2 + uVar16;
            uVar12 = uVar12 - (int)uVar16;
            uVar14 = (ulong)((local_2070 & 3) - 1) + 1 & 0xfffffffffffffffe;
            param_2 = param_2 + 1;
            do {
              param_2[-1] = param_2[-1] ^ 0x80;
              *param_2 = *param_2 ^ 0x80;
              uVar14 = uVar14 - 2;
              param_2 = param_2 + 2;
            } while (uVar14 != 0);
          }
          if (uVar7 != uVar16) {
            do {
              *pbVar15 = *pbVar15 ^ 0x80;
              uVar12 = uVar12 - 1;
              pbVar15 = pbVar15 + 1;
            } while (uVar12 != 0);
          }
        }
        uVar12 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
        if (uVar12 != 0) {
          uVar4 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
          if (uVar4 < 5) {
            uVar5 = 0;
            if ((long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4) != 0) {
              uVar5 = (uint)(((ulong)local_2070 << 3) /
                            (ulong)(long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4));
            }
            local_2070 = 0;
            if (uVar12 != 0) {
              local_2070 = uVar5 / uVar12;
            }
          }
          *param_4 = local_2070;
        }
      }
      else {
        uVar6 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,uVar12,&local_2074);
        uVar12 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
        if (uVar12 != 0) {
          uVar4 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
          if (uVar4 < 5) {
            uVar5 = 0;
            if ((long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4) != 0) {
              uVar5 = (uint)(((ulong)local_2074 << 3) /
                            (ulong)(long)*(int *)(&DAT_10115edd0 + (long)(int)uVar4 * 4));
            }
            local_2074 = 0;
            if (uVar12 != 0) {
              local_2074 = uVar5 / uVar12;
            }
          }
          *param_4 = local_2074;
        }
      }
    }
    uVar12 = 0x10;
    if (uVar1 <= uVar11) {
      uVar12 = uVar6;
    }
    uVar7 = (ulong)uVar12;
    if (uVar12 != 0) goto LAB_1005a7b0c;
    uVar11 = *param_4;
  }
  else {
    if (sVar3 != 0x69) goto LAB_1005a7b0c;
LAB_1005a7840:
    uVar11 = *(uint *)(param_1 + 0x310);
    uVar16 = (ulong)uVar11;
    lVar19 = (long)apuStack_2090 - (uVar16 + 0xf & 0xfffffffffffffff0);
    uVar7 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),lVar19,1,uVar16,0);
    if ((int)uVar7 != 0) goto LAB_1005a7b0c;
    uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
    uVar7 = (ulong)uVar1;
    if (uVar1 == 2) {
      FUN_1005a859c(lVar19,param_2,1,uVar16,*(undefined4 *)(param_1 + 0x300));
    }
    else if (uVar1 == 1) {
      FUN_1005a8404(lVar19,param_2,1,uVar16,*(undefined4 *)(param_1 + 0x300),1);
    }
    else {
      if (0 < (int)uVar1) {
        lVar21 = 0;
        lVar20 = 0;
        apuStack_2090[1] = auStack_2058;
        uVar12 = 0;
        if (uVar1 != 0) {
          uVar12 = uVar11 / uVar1;
        }
        do {
          iVar13 = 0;
          iVar10 = (int)uVar7;
          if (iVar10 != 0) {
            iVar13 = *(int *)(param_1 + 0x310) / iVar10;
          }
          if (0 < iVar13) {
            uVar7 = (ulong)iVar13;
            if (iVar13 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar7 & 0xfffffffffffffff0;
              if (uVar16 == 0 || iVar10 != 1) {
                uVar16 = 0;
              }
              else {
                uVar14 = (long)iVar13 & 0xfffffffffffffff0;
                lVar17 = lVar21;
                puVar18 = apuStack_2090[1];
                do {
                  puVar2 = (undefined8 *)(lVar19 + (lVar17 >> 0x20) * 2);
                  uVar8 = *puVar2;
                  uVar22 = puVar2[3];
                  uVar9 = puVar2[2];
                  puVar18[-1] = puVar2[1];
                  puVar18[-2] = uVar8;
                  puVar18[1] = uVar22;
                  *puVar18 = uVar9;
                  uVar14 = uVar14 - 0x10;
                  lVar17 = lVar17 + 0x1000000000;
                  puVar18 = puVar18 + 4;
                } while (uVar14 != 0);
              }
              if (uVar7 == uVar16) goto LAB_1005a7aac;
            }
            iVar13 = (int)lVar20 + iVar10 * (int)uVar16;
            do {
              local_2068[uVar16] = *(undefined2 *)(lVar19 + (long)iVar13 * 2);
              uVar16 = uVar16 + 1;
              iVar13 = iVar13 + iVar10;
            } while ((long)uVar16 < (long)uVar7);
          }
LAB_1005a7aac:
          FUN_1005a8404(local_2068,param_2 + lVar20 * 2,1,uVar12,*(undefined4 *)(param_1 + 0x300));
          lVar20 = lVar20 + 1;
          uVar7 = (ulong)*(int *)(*(long *)(param_1 + 8) + 0x104);
          lVar21 = lVar21 + 0x100000000;
        } while (lVar20 < (long)uVar7);
      }
      lVar20 = *(long *)PTR____stack_chk_guard_101444218;
    }
    uVar11 = *(uint *)(param_1 + 0x300);
    *param_4 = uVar11;
  }
  uVar7 = 0;
  *(uint *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + uVar11;
LAB_1005a7b0c:
  if (lVar20 == local_2080) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
}




undefined8 FUN_1005a7dfc(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x314);
  return 0;
}




undefined8 FUN_1005a7e0c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  if ((*(int *)(param_1 + 0x2f0) != 0) && (lVar1 = *(long *)(param_1 + 0x2f8), lVar1 != 0)) {
    if (0 < *(int *)(param_1 + 0x2f0)) {
      lVar2 = 0;
      lVar3 = 0;
      while( true ) {
        local_38 = lVar1 + lVar2;
        (**(code **)(*param_3 + 0x100))
                  (param_3,*(undefined4 *)(local_38 + 0x2c),2,*(undefined8 *)(local_38 + 0x1c),
                   &local_38,0,0);
        lVar3 = lVar3 + 1;
        if (*(int *)(param_1 + 0x2f0) <= lVar3) break;
        lVar2 = lVar2 + 0x138;
        lVar1 = *(long *)(param_1 + 0x2f8);
      }
    }
    FUN_1005ec374(param_3);
    param_3[0x1f] = *(long *)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  return 0;
}




undefined4 FUN_1005a7ec0(long param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 0x340);
  if (psVar4 == (short *)0x0) {
    return 0x27;
  }
  sVar1 = *psVar4;
  if (sVar1 != 3 && sVar1 != 1) {
    if (sVar1 != -2) {
      return 0x27;
    }
    iVar2 = _memcmp(psVar4 + 0xc,&DAT_10115edb0,0x10);
    if ((iVar2 != 0) && (iVar2 = _memcmp(psVar4 + 0xc,&DAT_10115edc0,0x10), iVar2 != 0)) {
      return 0x27;
    }
  }
  uVar3 = 0x27;
  if (psVar4[7] != 8) {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005a7f5c(long param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  ushort *puVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0x40;
    puVar1 = *(ushort **)(param_1 + 0x340);
    if ((puVar1 == (ushort *)0x0) || ((*puVar1 | 2) == 3)) {
      if (*(int *)(param_1 + 0xc4) == 2) {
        *param_4 = 0x40;
        return 0;
      }
      *param_4 = 0;
    }
    else if (puVar1[9] != 0) {
      *param_4 = (uint)puVar1[9];
      return 0;
    }
  }
  return 0;
}




undefined8 FUN_1005a7fcc(long param_1,int param_2)

{
  ushort uVar1;
  long in_x5;
  ushort *puVar2;
  
  if (*(int *)(in_x5 + 0x50) == 0xf) {
    puVar2 = *(ushort **)(in_x5 + 0x340);
    *(ushort **)(param_1 + 0x340) = puVar2;
    uVar1 = *puVar2;
    if ((uVar1 == 0x11) || (uVar1 == 0x69)) {
      *(uint *)(param_1 + 0x310) = (uint)puVar2[6];
      *(uint *)(param_1 + 0x300) = (uint)puVar2[9];
    }
    if (((*(byte *)(param_1 + 0x181) >> 1 & 1) == 0) || ((uVar1 | 2) == 3)) {
      return 0;
    }
  }
  else if (*(int *)(in_x5 + 0x50) == 5) {
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(long *)(param_1 + 0x340) = param_1 + 0x318;
    *(undefined2 *)(param_1 + 0x318) = 1;
    if (*(int *)(*(long *)(in_x5 + 0x198) + 0x2c) != 7) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x318) = 0x11;
    *(int *)(param_1 + 0x310) = param_2 * 0x24;
    *(undefined4 *)(param_1 + 0x300) = 0x40;
    return 0;
  }
  return 0x13;
}




undefined8 FUN_1005a8074(long param_1)

{
  *(undefined8 *)(param_1 + 0x340) = 0;
  return 0;
}




void FUN_1005a8080(FILE *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  long lVar8;
  int iVar9;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  int local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  int local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined2 uStack_7e;
  int iStack_7c;
  int local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar8;
  if (param_1 == (FILE *)0x0) {
    uVar6 = 0x1f;
  }
  else {
    if (param_2 - 1U < 5) {
      iVar9 = *(int *)(&DAT_10115edd0 + (long)(int)(param_2 - 1U) * 4);
    }
    else {
      iVar9 = 0;
    }
    _fseek(param_1,0,0);
    local_88 = 0x2820746d66;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    uVar7 = 0xfffe;
    if ((param_2 != 5 && param_3 < 3) && iVar9 < 0x11) {
      uVar7 = 1;
    }
    _local_80 = CONCAT44(param_4,CONCAT22((short)param_3,uVar7));
    iVar4 = param_4 * param_3 * iVar9;
    iVar1 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    uVar5 = iVar9 * param_3;
    uVar2 = uVar5 + 7;
    if (-1 < (int)uVar5) {
      uVar2 = uVar5;
    }
    _local_78 = CONCAT26((short)iVar9,CONCAT24((short)(uVar2 >> 3),iVar1 >> 3));
    if ((param_2 == 5 || 2 < param_3) || 0x10 < iVar9) {
      local_70 = (ulong)CONCAT22((short)iVar9,0x16);
      puVar3 = (undefined8 *)&DAT_10115edc0;
      if (param_2 != 5) {
        puVar3 = (undefined8 *)&DAT_10115edb0;
      }
      uStack_60 = puVar3[1];
      local_68 = *puVar3;
    }
    local_90 = 100;
    local_8f = 0x61;
    local_8e = 0x74;
    local_8d = 0x61;
    local_98 = 0x52;
    local_97 = 0x49;
    local_96 = 0x46;
    local_95 = 0x46;
    local_94 = param_5 + 0x38;
    local_8c = param_5;
    _fwrite(&local_98,8,1,param_1);
    _fwrite("WAVE",4,1,param_1);
    _fwrite(&local_88,8,1,param_1);
    _fwrite(&local_80,0x28,1,param_1);
    _fwrite(&local_90,8,1,param_1);
    uVar6 = 0;
  }
  if (lVar8 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar6);
}




ulong FUN_1005a8294(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                   undefined8 param_6)

{
  uint uVar1;
  FILE *pFVar2;
  size_t sVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = 0x44;
  uVar4 = (uint)param_3;
  if ((uVar4 < 6) && ((1 << (ulong)(uVar4 & 0x1f) & 0x36U) != 0)) {
    pFVar2 = _fopen(param_1,"wb");
    if (pFVar2 == (FILE *)0x0) {
      uVar10 = 0x12;
    }
    else {
      if (uVar4 - 1 < 5) {
        param_5 = *(int *)(&DAT_10115edd0 + (long)(int)(uVar4 - 1) * 4) * param_5 >> 3;
      }
      uVar1 = param_5 * (int)param_4;
      uVar9 = (ulong)uVar1;
      uVar10 = FUN_1005a8080(pFVar2,param_3,param_4,param_6,uVar9);
      if ((int)uVar10 == 0) {
        if ((uVar4 == 1) && (uVar1 != 0)) {
          uVar10 = (ulong)(uVar1 - 1) + 1;
          uVar5 = uVar10 & 0x1fffffffe;
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else {
            uVar8 = (ulong)(uVar1 - 1) + 1 & 0xfffffffffffffffe;
            pbVar6 = (byte *)((long)param_2 + 1);
            do {
              pbVar6[-1] = pbVar6[-1] ^ 0x80;
              *pbVar6 = *pbVar6 ^ 0x80;
              uVar8 = uVar8 - 2;
              pbVar6 = pbVar6 + 2;
            } while (uVar8 != 0);
          }
          if (uVar10 != uVar5) {
            iVar7 = param_5 * (int)param_4 - (int)uVar5;
            pbVar6 = (byte *)((long)param_2 + uVar5);
            do {
              *pbVar6 = *pbVar6 ^ 0x80;
              iVar7 = iVar7 + -1;
              pbVar6 = pbVar6 + 1;
            } while (iVar7 != 0);
          }
        }
        sVar3 = _fwrite(param_2,1,uVar9,pFVar2);
        uVar4 = 0;
        if (sVar3 != uVar9) {
          uVar4 = 0xd;
        }
        uVar10 = (ulong)uVar4;
      }
      _fclose(pFVar2);
    }
  }
  return uVar10;
}




undefined8
FUN_1005a8404(uint *param_1,short *param_2,int param_3,ulong param_4,int param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 != 0) {
    uVar12 = -(param_6 >> 0x1f & 1) & 0xfffffffe00000000 | (param_6 & 0xffffffff) << 1;
    uVar13 = -(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2;
    do {
      uVar9 = *param_1 >> 0x10 & 0xff;
      if (0x58 < uVar9) {
        return 0xd;
      }
      param_3 = param_3 + -1;
      sVar5 = (short)*param_1;
      *param_2 = sVar5;
      if (param_5 == 1) {
        param_2 = param_2 + (int)param_6;
      }
      else {
        iVar11 = (int)sVar5;
        lVar7 = 4;
        iVar8 = 2 - param_5;
        do {
          bVar4 = *(byte *)((long)param_1 + lVar7);
          sVar5 = (&DAT_10115ede4)[(int)uVar9];
          iVar1 = ((int)sVar5 & (int)((uint)bVar4 << 0x1d) >> 0x1f) + ((int)sVar5 >> 3);
          if ((bVar4 & 2) != 0) {
            iVar1 = iVar1 + ((int)sVar5 >> 1);
          }
          if ((bVar4 & 1) != 0) {
            iVar1 = iVar1 + ((int)sVar5 >> 2);
          }
          iVar2 = -iVar1;
          if ((bVar4 & 8) == 0) {
            iVar2 = iVar1;
          }
          iVar2 = iVar2 + iVar11;
          iVar11 = -0x8000;
          if (-0x8001 < iVar2) {
            iVar11 = 0x7fff;
          }
          if ((short)iVar2 != iVar2) {
            iVar2 = iVar11;
          }
          uVar9 = *(int *)(&DAT_10115ee98 + (ulong)(bVar4 & 0xf) * 4) + uVar9;
          if ((int)uVar9 < 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0x58;
            if ((int)uVar9 < 0x59) {
              uVar10 = uVar9;
            }
          }
          *(short *)(uVar12 + (long)param_2) = (short)iVar2;
          if (iVar8 == 0) {
            param_2 = (short *)((long)param_2 + uVar13);
            goto LAB_1005a857c;
          }
          bVar6 = bVar4 >> 4;
          sVar5 = (&DAT_10115ede4)[(int)uVar10];
          iVar1 = ((int)sVar5 & (int)((uint)bVar4 << 0x19) >> 0x1f) + ((int)sVar5 >> 3);
          if ((bVar6 & 2) != 0) {
            iVar1 = iVar1 + ((int)sVar5 >> 1);
          }
          if ((bVar6 & 1) != 0) {
            iVar1 = iVar1 + ((int)sVar5 >> 2);
          }
          iVar11 = -iVar1;
          if ((bVar6 & 8) == 0) {
            iVar11 = iVar1;
          }
          iVar11 = iVar11 + iVar2;
          iVar1 = -0x8000;
          if (-0x8001 < iVar11) {
            iVar1 = 0x7fff;
          }
          if ((short)iVar11 != iVar11) {
            iVar11 = iVar1;
          }
          uVar10 = *(int *)(&DAT_10115ee98 + (ulong)bVar6 * 4) + uVar10;
          uVar3 = 0x58;
          if ((int)uVar10 < 0x59) {
            uVar3 = uVar10;
          }
          uVar9 = 0;
          if ((uVar10 & 0x80000000) == 0) {
            uVar9 = uVar3;
          }
          param_2 = (short *)(uVar13 + (long)param_2);
          *param_2 = (short)iVar11;
          iVar8 = iVar8 + 2;
          lVar7 = lVar7 + 1;
        } while (iVar8 != 1);
        param_2 = (short *)((long)param_2 + uVar12);
      }
LAB_1005a857c:
      param_1 = (uint *)((long)param_1 + (param_4 & 0xffffffff));
    } while (param_3 != 0);
  }
  return 0;
}




undefined8 FUN_1005a859c(uint *param_1,short *param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  short *psVar18;
  
  if (param_3 != 0) {
    do {
      uVar9 = *param_1 >> 0x10 & 0xff;
      if (0x58 < uVar9) {
        return 0xd;
      }
      uVar12 = param_1[1];
      uVar10 = uVar12 >> 0x10 & 0xff;
      if (0x58 < uVar10) {
        return 0xd;
      }
      param_3 = param_3 + -1;
      sVar6 = (short)*param_1;
      *param_2 = sVar6;
      psVar18 = param_2 + 2;
      sVar7 = (short)uVar12;
      param_2[1] = sVar7;
      param_2 = psVar18;
      if (param_5 - 1U != 0) {
        iVar8 = (int)sVar6;
        iVar11 = (int)sVar7;
        puVar16 = param_1;
        uVar12 = param_5 - 1U;
        do {
          uVar13 = uVar12;
          if (7 < uVar12) {
            uVar13 = 8;
          }
          if (uVar13 != 0) {
            uVar14 = puVar16[2];
            uVar15 = puVar16[3];
            uVar5 = 0xfffffff7;
            if (0xfffffff7 < ~uVar12) {
              uVar5 = ~uVar12;
            }
            uVar17 = ~uVar5;
            psVar18 = param_2;
            do {
              sVar6 = (&DAT_10115ede4)[(int)uVar9];
              iVar1 = ((int)sVar6 & (int)(uVar14 << 0x1d) >> 0x1f) + ((int)sVar6 >> 3);
              if ((uVar14 & 2) != 0) {
                iVar1 = iVar1 + ((int)sVar6 >> 1);
              }
              if ((uVar14 & 1) != 0) {
                iVar1 = iVar1 + ((int)sVar6 >> 2);
              }
              iVar3 = -iVar1;
              if ((uVar14 & 8) == 0) {
                iVar3 = iVar1;
              }
              iVar8 = iVar3 + iVar8;
              iVar1 = -0x8000;
              if (-0x8001 < iVar8) {
                iVar1 = 0x7fff;
              }
              if ((short)iVar8 != iVar8) {
                iVar8 = iVar1;
              }
              uVar2 = *(int *)(&DAT_10115ee98 + (ulong)(uVar14 & 0xf) * 4) + uVar9;
              if ((int)uVar2 < 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0x58;
                if ((int)uVar2 < 0x59) {
                  uVar9 = uVar2;
                }
              }
              sVar6 = (&DAT_10115ede4)[(int)uVar10];
              uVar2 = *(int *)(&DAT_10115ee98 + (ulong)(uVar15 & 0xf) * 4) + uVar10;
              iVar1 = ((int)sVar6 & (int)(uVar15 << 0x1d) >> 0x1f) + ((int)sVar6 >> 3);
              if ((uVar15 & 2) != 0) {
                iVar1 = iVar1 + ((int)sVar6 >> 1);
              }
              if ((uVar15 & 1) != 0) {
                iVar1 = iVar1 + ((int)sVar6 >> 2);
              }
              iVar3 = -iVar1;
              if ((uVar15 & 8) == 0) {
                iVar3 = iVar1;
              }
              iVar11 = iVar3 + iVar11;
              iVar1 = -0x8000;
              if (-0x8001 < iVar11) {
                iVar1 = 0x7fff;
              }
              if ((short)iVar11 != iVar11) {
                iVar11 = iVar1;
              }
              uVar4 = 0x58;
              if ((int)uVar2 < 0x59) {
                uVar4 = uVar2;
              }
              uVar10 = 0;
              if ((uVar2 & 0x80000000) == 0) {
                uVar10 = uVar4;
              }
              *psVar18 = (short)iVar8;
              psVar18[1] = (short)iVar11;
              uVar14 = uVar14 >> 4;
              uVar15 = uVar15 >> 4;
              uVar17 = uVar17 - 1;
              psVar18 = psVar18 + 2;
            } while (uVar17 != 0);
            param_2 = param_2 + (ulong)(-uVar5 - 2) * 2 + 2;
          }
          uVar12 = uVar12 - uVar13;
          puVar16 = puVar16 + 2;
        } while (uVar12 != 0);
      }
      param_1 = (uint *)((long)param_1 + (param_4 & 0xffffffff));
    } while (param_3 != 0);
  }
  return 0;
}




undefined8
FUN_1005a879c(uint *param_1,float *param_2,int param_3,ulong param_4,int param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  
  if (param_3 != 0) {
    uVar9 = param_5 - 1;
    iVar12 = (int)param_6;
    uVar8 = param_5 - 3U >> 1;
    uVar7 = iVar12 << 1;
    puVar15 = (uint *)((long)param_1 + (ulong)uVar8 + 5);
    iVar16 = -0x8000;
    do {
      uVar14 = *param_1 >> 0x10 & 0xff;
      if (0x58 < uVar14) {
        return 0xd;
      }
      iVar13 = (int)(short)*param_1;
      *param_2 = (float)iVar13 * 3.0517578e-05;
      pfVar3 = param_2 + iVar12;
      if (uVar9 < 2) {
        pfVar11 = pfVar3;
        puVar18 = param_1 + 1;
        uVar20 = uVar9;
      }
      else {
        lVar17 = 4;
        uVar19 = uVar9;
        do {
          bVar5 = *(byte *)((long)param_1 + lVar17);
          sVar6 = (&DAT_10115ede4)[(int)uVar14];
          iVar1 = ((int)sVar6 & (int)((uint)bVar5 << 0x1d) >> 0x1f) + ((int)sVar6 >> 3);
          if ((bVar5 & 2) != 0) {
            iVar1 = iVar1 + ((int)sVar6 >> 1);
          }
          if ((bVar5 & 1) != 0) {
            iVar1 = iVar1 + ((int)sVar6 >> 2);
          }
          iVar2 = -iVar1;
          if ((bVar5 & 8) == 0) {
            iVar2 = iVar1;
          }
          iVar2 = iVar2 + iVar13;
          iVar13 = iVar16;
          if (-0x8001 < iVar2) {
            iVar13 = 0x7fff;
          }
          if ((short)iVar2 != iVar2) {
            iVar2 = iVar13;
          }
          uVar14 = *(int *)(&DAT_10115ee98 + (ulong)(bVar5 & 0xf) * 4) + uVar14;
          if ((int)uVar14 < 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0x58;
            if ((int)uVar14 < 0x59) {
              uVar20 = uVar14;
            }
          }
          param_2[iVar12] = (float)iVar2 * 3.0517578e-05;
          bVar10 = bVar5 >> 4;
          sVar6 = (&DAT_10115ede4)[(int)uVar20];
          iVar1 = ((int)sVar6 & (int)((uint)bVar5 << 0x19) >> 0x1f) + ((int)sVar6 >> 3);
          if ((bVar10 & 2) != 0) {
            iVar1 = iVar1 + ((int)sVar6 >> 1);
          }
          if ((bVar10 & 1) != 0) {
            iVar1 = iVar1 + ((int)sVar6 >> 2);
          }
          iVar13 = -iVar1;
          if ((bVar10 & 8) == 0) {
            iVar13 = iVar1;
          }
          iVar13 = iVar13 + iVar2;
          iVar1 = iVar16;
          if (-0x8001 < iVar13) {
            iVar1 = 0x7fff;
          }
          if ((short)iVar13 != iVar13) {
            iVar13 = iVar1;
          }
          uVar20 = *(int *)(&DAT_10115ee98 + (ulong)bVar10 * 4) + uVar20;
          uVar4 = 0x58;
          if ((int)uVar20 < 0x59) {
            uVar4 = uVar20;
          }
          uVar14 = 0;
          if ((uVar20 & 0x80000000) == 0) {
            uVar14 = uVar4;
          }
          *(float *)((-(param_6 >> 0x1f & 1) & 0xfffffff800000000 | (param_6 & 0xffffffff) << 3) +
                    (long)param_2) = (float)iVar13 * 3.0517578e-05;
          uVar19 = uVar19 - 2;
          lVar17 = lVar17 + 1;
          param_2 = (float *)((long)param_2 +
                             (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
          pfVar11 = (float *)((long)pfVar3 + ((ulong)uVar8 * 4 + 4) * (long)(int)uVar7);
          puVar18 = puVar15;
          uVar20 = (param_5 - 3U) + uVar8 * -2;
        } while (1 < uVar19);
      }
      param_2 = pfVar11;
      param_3 = param_3 + -1;
      if (uVar20 != 0) {
        bVar5 = (byte)*puVar18;
        sVar6 = (&DAT_10115ede4)[(int)uVar14];
        iVar1 = ((int)sVar6 & (int)((uint)bVar5 << 0x1d) >> 0x1f) + ((int)sVar6 >> 3);
        if ((bVar5 & 2) != 0) {
          iVar1 = iVar1 + ((int)sVar6 >> 1);
        }
        if ((bVar5 & 1) != 0) {
          iVar1 = iVar1 + ((int)sVar6 >> 2);
        }
        iVar2 = -iVar1;
        if ((bVar5 & 8) == 0) {
          iVar2 = iVar1;
        }
        iVar2 = iVar2 + iVar13;
        iVar13 = iVar16;
        if (-0x8001 < iVar2) {
          iVar13 = 0x7fff;
        }
        if ((short)iVar2 != iVar2) {
          iVar2 = iVar13;
        }
        *param_2 = (float)iVar2 * 3.0517578e-05;
        param_2 = param_2 + iVar12;
      }
      param_1 = (uint *)((long)param_1 + (param_4 & 0xffffffff));
      puVar15 = (uint *)((long)puVar15 + (param_4 & 0xffffffff));
    } while (param_3 != 0);
  }
  return 0;
}




undefined8 FUN_1005a89ec(uint *param_1,float *param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  
  if (param_3 != 0) {
    do {
      uVar13 = *param_1 >> 0x10 & 0xff;
      if (0x58 < uVar13) {
        return 0xd;
      }
      uVar9 = param_1[1] >> 0x10 & 0xff;
      if (0x58 < uVar9) {
        return 0xd;
      }
      param_3 = param_3 + -1;
      iVar10 = (int)(short)*param_1;
      iVar11 = (int)(short)param_1[1];
      *param_2 = (float)iVar10 * 3.0517578e-05;
      param_2[1] = (float)iVar11 * 3.0517578e-05;
      param_2 = param_2 + 2;
      puVar8 = param_1;
      for (uVar7 = param_5 - 1; uVar7 != 0; uVar7 = uVar7 - uVar12) {
        uVar12 = uVar7;
        if (7 < uVar7) {
          uVar12 = 8;
        }
        if (uVar12 != 0) {
          uVar14 = puVar8[2];
          uVar15 = puVar8[3];
          uVar5 = 0xfffffff7;
          if (0xfffffff7 < ~uVar7) {
            uVar5 = ~uVar7;
          }
          uVar16 = ~uVar5;
          pfVar17 = param_2;
          do {
            sVar6 = (&DAT_10115ede4)[(int)uVar13];
            iVar1 = ((int)sVar6 & (int)(uVar14 << 0x1d) >> 0x1f) + ((int)sVar6 >> 3);
            if ((uVar14 & 2) != 0) {
              iVar1 = iVar1 + ((int)sVar6 >> 1);
            }
            if ((uVar14 & 1) != 0) {
              iVar1 = iVar1 + ((int)sVar6 >> 2);
            }
            iVar3 = -iVar1;
            if ((uVar14 & 8) == 0) {
              iVar3 = iVar1;
            }
            iVar10 = iVar3 + iVar10;
            iVar1 = -0x8000;
            if (-0x8001 < iVar10) {
              iVar1 = 0x7fff;
            }
            if ((short)iVar10 != iVar10) {
              iVar10 = iVar1;
            }
            uVar2 = *(int *)(&DAT_10115ee98 + (ulong)(uVar14 & 0xf) * 4) + uVar13;
            if ((int)uVar2 < 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0x58;
              if ((int)uVar2 < 0x59) {
                uVar13 = uVar2;
              }
            }
            sVar6 = (&DAT_10115ede4)[(int)uVar9];
            iVar1 = ((int)sVar6 & (int)(uVar15 << 0x1d) >> 0x1f) + ((int)sVar6 >> 3);
            if ((uVar15 & 2) != 0) {
              iVar1 = iVar1 + ((int)sVar6 >> 1);
            }
            if ((uVar15 & 1) != 0) {
              iVar1 = iVar1 + ((int)sVar6 >> 2);
            }
            iVar3 = -iVar1;
            if ((uVar15 & 8) == 0) {
              iVar3 = iVar1;
            }
            iVar11 = iVar3 + iVar11;
            iVar1 = -0x8000;
            if (-0x8001 < iVar11) {
              iVar1 = 0x7fff;
            }
            if ((short)iVar11 != iVar11) {
              iVar11 = iVar1;
            }
            uVar2 = *(int *)(&DAT_10115ee98 + (ulong)(uVar15 & 0xf) * 4) + uVar9;
            uVar4 = 0x58;
            if ((int)uVar2 < 0x59) {
              uVar4 = uVar2;
            }
            uVar9 = 0;
            if ((uVar2 & 0x80000000) == 0) {
              uVar9 = uVar4;
            }
            *pfVar17 = (float)iVar10 * 3.0517578e-05;
            pfVar17[1] = (float)iVar11 * 3.0517578e-05;
            uVar14 = uVar14 >> 4;
            uVar15 = uVar15 >> 4;
            uVar16 = uVar16 - 1;
            pfVar17 = pfVar17 + 2;
          } while (uVar16 != 0);
          param_2 = param_2 + (ulong)(-uVar5 - 2) * 2 + 2;
        }
        puVar8 = puVar8 + 2;
      }
      param_1 = (uint *)((long)param_1 + (param_4 & 0xffffffff));
    } while (param_3 != 0);
  }
  return 0;
}




ulong FUN_1005a8c04(long param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint local_d8;
  int local_d4;
  undefined1 auStack_d0 [28];
  int local_b4;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_94;
  undefined1 auStack_90 [4];
  undefined4 local_8c;
  undefined1 local_88 [20];
  int local_74;
  undefined1 auStack_70 [4];
  uint local_6c;
  int local_64;
  
  uVar5 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_64);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  piVar1 = (int *)(param_1 + 0x2f0);
  uVar10 = 4;
  local_64 = local_64 + -8;
LAB_1005a90d8:
  uVar4 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_64 + 8,0);
  if ((uVar4 != 0) ||
     (uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_70,1,8,0), uVar4 != 0))
  goto LAB_1005a90f0;
  iVar3 = FUN_1005ed0f8(auStack_70,"fmt ",4);
  if (iVar3 == 0) {
    uVar4 = 0x28;
    if (0x27 < local_6c) {
      uVar4 = local_6c;
    }
    lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar4,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav_riff.cpp"
                          ,0x46,0);
    *(long *)(param_1 + 0x340) = lVar6;
    if (lVar6 == 0) {
      return 0x26;
    }
    uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),lVar6,1,local_6c,0);
LAB_1005a8f04:
    if (uVar4 != 0) goto LAB_1005a90f0;
  }
  else {
    iVar3 = FUN_1005ed0f8(auStack_70,"cue ",4);
    if (iVar3 == 0) {
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),piVar1,4,1,0);
      iVar3 = *(int *)(param_1 + 0x2f0);
      if (iVar3 != 0) {
        if (*(long *)(param_1 + 0x2f8) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2f8),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav_riff.cpp"
                        ,0x75);
          iVar3 = *piVar1;
        }
        lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar3 * 0x138,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_wav_riff.cpp"
                              ,0x78,0);
        *(long *)(param_1 + 0x2f8) = lVar6;
        if (lVar6 == 0) {
          return 0x26;
        }
        if ((0 < *piVar1) &&
           (uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_88,1,0x18,0), uVar4 == 0)) {
          lVar9 = 0;
          lVar8 = 0;
          do {
            lVar6 = lVar6 + lVar9;
            *(long *)(lVar6 + 0x1c) = lVar6 + 0x38;
            iVar3 = 0;
            if (-1 < local_74) {
              iVar3 = local_74;
            }
            *(int *)(lVar6 + 0x2c) = iVar3;
            *(short *)(lVar6 + 0x32) = (short)local_88._0_4_;
            lVar8 = lVar8 + 1;
            if (*piVar1 <= lVar8) goto LAB_1005a8f0c;
            lVar9 = lVar9 + 0x138;
            lVar6 = *(long *)(param_1 + 0x2f8);
            uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),local_88,1,0x18,0);
            bVar2 = false;
          } while (uVar4 == 0);
          goto LAB_1005a8f14;
        }
      }
      goto LAB_1005a8f10;
    }
    iVar3 = FUN_1005ed0f8(auStack_70,"fact",4);
    if (iVar3 == 0) {
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_8c,4,1,0);
      if (uVar4 != 0) goto LAB_1005a90f0;
      uVar4 = 0;
      bVar2 = false;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = local_8c;
      goto LAB_1005a8f14;
    }
    iVar3 = FUN_1005ed0f8(auStack_70,"LIST",4);
    if (iVar3 == 0) {
      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_90,1,4,0);
      if (uVar4 == 0) {
        uVar4 = FUN_1005a8c04(param_1,local_6c);
        goto LAB_1005a8f04;
      }
      goto LAB_1005a90f0;
    }
    iVar3 = FUN_1005ed0f8(auStack_70,"labl",4);
    if (iVar3 == 0) {
      if (*(long *)(param_1 + 0x2f8) != 0) {
        uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_94,4,1,0);
        if (uVar4 != 0) goto LAB_1005a90f0;
        if (0 < *piVar1) {
          lVar6 = 0;
          puVar7 = (ushort *)(*(long *)(param_1 + 0x2f8) + 0x32);
          do {
            if (*puVar7 == local_94) {
              uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),
                                    *(undefined8 *)
                                     (*(long *)(param_1 + 0x2f8) + lVar6 * 0x138 + 0x1c),1,
                                    local_6c - 4,0);
              goto LAB_1005a8f10;
            }
            uVar4 = 0;
            bVar2 = false;
            lVar6 = lVar6 + 1;
            puVar7 = puVar7 + 0x9c;
          } while (lVar6 < *piVar1);
          goto LAB_1005a8f14;
        }
      }
    }
    else {
      iVar3 = FUN_1005ed0f8(auStack_70,"smpl",4);
      if (iVar3 == 0) {
        uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_d0,1,0x3c,&local_d4);
        if (uVar4 == 0) {
          if ((local_d4 == 0x3c) && (local_b4 != 0)) {
            *(undefined4 *)(param_1 + 0x134) = local_a4;
            *(undefined4 *)(param_1 + 0x138) = local_a0;
          }
          goto LAB_1005a8f0c;
        }
        goto LAB_1005a90f0;
      }
      iVar3 = FUN_1005ed0f8(auStack_70,"data",4);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x130) == -1) {
          *(uint *)(*(long *)(param_1 + 8) + 0x10c) = local_6c;
          uVar4 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),(int *)(param_1 + 0x130));
          if ((uVar4 != 0) ||
             (uVar4 = (**(code **)(**(long **)(param_1 + 400) + 0x18))
                                (*(long **)(param_1 + 400),&local_d8), uVar4 != 0))
          goto LAB_1005a90f0;
          if (local_d8 != 0xffffffff) {
            if (local_d8 <
                (uint)(*(int *)(*(long *)(param_1 + 8) + 0x10c) + *(int *)(param_1 + 0x130))) {
              *(uint *)(*(long *)(param_1 + 8) + 0x10c) = local_d8 - *(int *)(param_1 + 0x130);
            }
          }
        }
        if ((*(uint *)(*(long *)(param_1 + 400) + 0x1a4) & 1) == 0) {
          uVar4 = 0;
          bVar2 = true;
          goto LAB_1005a8f14;
        }
        uVar4 = FUN_1005d1d28(*(long *)(param_1 + 400),local_6c,1);
        goto LAB_1005a8f04;
      }
      FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_6c,1);
    }
  }
LAB_1005a8f0c:
  uVar4 = 0;
LAB_1005a8f10:
  bVar2 = false;
LAB_1005a8f14:
  uVar10 = local_6c + 8 + uVar10;
  local_64 = local_64 + local_6c + 8;
  if ((local_6c & 1) != 0) {
    local_64 = local_64 + 1;
    uVar10 = uVar10 + 1;
  }
  if (bVar2 || (uVar10 == 0 || param_2 <= uVar10)) {
LAB_1005a90f0:
    uVar10 = 0;
    if (uVar4 != 0x10) {
      uVar10 = uVar4;
    }
    return (ulong)uVar10;
  }
  goto LAB_1005a90d8;
}




void FUN_1005a9128(void)

{
  DAT_101e995b8 = "FMOD XM Codec";
  DAT_101e995c0 = 0x10100;
  DAT_101e995c8 = 0x702;
  DAT_101e995c4 = 1;
  DAT_101e995d0 = thunk_FUN_1005ab49c;
  DAT_101e995d8 = FUN_1005a91fc;
  DAT_101e995e0 = thunk_FUN_1005acbf8;
  DAT_101e995e8 = FUN_1005d9ba8;
  DAT_101e995f0 = thunk_FUN_1005acf24;
  DAT_101e995f8 = FUN_1005d9bf4;
  DAT_101e99640 = FUN_1005d9c34;
  DAT_101e99648 = FUN_1005d9c58;
  DAT_101e99650 = FUN_1005d9c94;
  DAT_101e99660 = FUN_1005d9cd4;
  DAT_101e99668 = FUN_1005d9d30;
  DAT_101e99658 = FUN_1005a921c;
  DAT_101e99610 = 0x10;
  DAT_101e99614 = 0xd48;
  return;
}




void thunk_FUN_1005ab49c(undefined4 *param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  short *psVar5;
  undefined4 *puVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 in_x7;
  char cVar20;
  ushort uVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  char *pcVar25;
  short sVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lStack_2f8;
  char *pcStack_2e8;
  uint uStack_2e0;
  long lStack_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined8 uStack_2c8;
  void *pvStack_2c0;
  undefined1 auStack_2b8 [7];
  byte bStack_2b1;
  uint uStack_2b0;
  undefined1 auStack_2ac [4];
  int iStack_2a8;
  ushort uStack_2a2;
  int iStack_2a0;
  byte bStack_299;
  undefined1 auStack_298 [6];
  ushort uStack_292;
  short sStack_290;
  char cStack_28d;
  undefined4 uStack_28c;
  int iStack_288;
  ushort uStack_282;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_17e [22];
  undefined1 auStack_168 [256];
  long lStack_68;
  
  lVar31 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_282 = 0;
  plVar15 = *(long **)(param_1 + 100);
  lStack_68 = lVar31;
  if ((*(uint *)((long)plVar15 + 0x1a4) & 1) == 0) {
    uVar16 = 0x13;
  }
  else {
    param_1[0x14] = 0x10;
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
    uVar16 = (**(code **)(*plVar15 + 0x18))(plVar15,&uStack_28c);
    if ((((int)uVar16 == 0) &&
        (uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0), (int)uVar16 == 0)) &&
       (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_168,1,0x11,0),
       (int)uVar16 == 0)) {
      iVar13 = FUN_1005ed0f8(auStack_168,"Extended Module: ",0x11);
      if (iVar13 == 0) {
        _bzero(param_1 + 0x13a,0x200);
        *(undefined8 *)(param_1 + 0xa6) = 0;
        param_1[0x33c] = 0x3f800000;
        param_1[0x33b] = 0x3f800000;
        param_1[0x25e] = 6;
        param_1[0x25f] = 0x7d;
        *(undefined1 *)(param_1 + 0x280) = 0x40;
        param_1[0x282] = 0;
        param_1[0x33a] = 0;
        param_1[0x285] = 0;
        uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x14,0);
        if (((int)uVar16 == 0) &&
           (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&cStack_28d), (int)uVar16 == 0)) {
          if (cStack_28d == '\x1a') {
            uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x3c,0);
            if ((((int)uVar16 == 0) &&
                (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&iStack_288,4,1,0),
                (int)uVar16 == 0)) &&
               ((uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x281),
                (int)uVar16 == 0 &&
                (uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x33a),
                (int)uVar16 == 0)))) {
              piVar1 = param_1 + 0x138;
              uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar1);
              if (((int)uVar16 == 0) &&
                 (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&uStack_282),
                 (int)uVar16 == 0)) {
                piVar2 = param_1 + 0x284;
                uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar2);
                if (((int)uVar16 == 0) &&
                   ((((uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),(long)param_1 + 0xcfe),
                      (int)uVar16 == 0 &&
                      (uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x25e),
                      (int)uVar16 == 0)) &&
                     (uVar16 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),param_1 + 0x25f),
                     (int)uVar16 == 0)) &&
                    ((uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,1,0x100,0
                                            ), (int)uVar16 == 0 &&
                     (uVar16 = FUN_100586684(param_1,9,"Number of channels",piVar1,4,1,0),
                     (int)uVar16 == 0)))))) {
                  if (0 < *piVar1) {
                    lVar32 = 0;
                    do {
                      puVar17 = (undefined8 *)
                                FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x398,
                                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                              ,0x90f,0);
                      puVar17[1] = puVar17 + 1;
                      puVar17[2] = puVar17 + 1;
                      puVar17[3] = 0;
                      FUN_100583c48(puVar17 + 5);
                      *(undefined8 **)(param_1 + lVar32 * 2 + 0x13a) = puVar17;
                      if (puVar17 == (undefined8 *)0x0) {
                        uVar16 = 0x26;
                        goto LAB_1005aba38;
                      }
                      *puVar17 = param_1;
                      lVar32 = lVar32 + 1;
                    } while (lVar32 < (int)param_1[0x138]);
                  }
                  uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iStack_288 + 0x3c,0);
                  if ((int)uVar16 == 0) {
                    uVar22 = 0;
                    param_1[0x282] = 0;
                    if (0 < (int)param_1[0x281]) {
                      uVar22 = 0;
                      lVar32 = 0;
                      do {
                        bVar8 = *(byte *)((long)param_1 + lVar32 + 0x2b0);
                        if (bVar8 < 0xfe && uVar22 <= bVar8) {
                          uVar22 = bVar8 + 1;
                          param_1[0x282] = uVar22;
                        }
                        lVar32 = lVar32 + 1;
                      } while (lVar32 < (int)param_1[0x281]);
                    }
                    if (uVar22 <= uStack_282) {
                      uVar22 = (uint)uStack_282;
                    }
                    param_1[0x283] = uVar22;
                    lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar22 << 4,
                                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                           ,0x92f,0);
                    *(long *)(param_1 + 0xa6) = lVar32;
                    if (lVar32 == 0) {
                      uVar16 = 0x26;
                    }
                    else {
                      uVar16 = (ulong)uStack_282;
                      if (uStack_282 == 0) {
LAB_1005aba78:
                        if ((int)uVar16 < (int)param_1[0x282]) {
                          lVar32 = uVar16 << 4;
                          do {
                            lVar23 = *(long *)(param_1 + 0xa6);
                            *(undefined4 *)(lVar23 + lVar32) = 0x40;
                            lVar19 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   param_1[0x138] * 0x140,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0x9dc,0);
                            *(long *)((undefined4 *)(lVar23 + lVar32) + 2) = lVar19;
                            if (lVar19 == 0) {
                              uVar16 = 0x26;
                              goto LAB_1005aba38;
                            }
                            uVar16 = uVar16 + 1;
                            lVar32 = lVar32 + 0x10;
                          } while ((long)uVar16 < (long)(int)param_1[0x282]);
                        }
                        lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                               param_1[0x284] * 0x618,
                                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                               ,0x9e9,0);
                        *(long *)(param_1 + 0x286) = lVar32;
                        if (lVar32 == 0) {
                          uVar16 = 0x26;
                        }
                        else {
                          if (0 < *piVar2) {
                            FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&iStack_2a8);
                            iVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&iStack_2a0,4,1,0)
                            ;
                            if (iVar13 == 0) {
                              lStack_2f8 = 0;
                              lStack_2d8 = 0;
                              do {
                                iStack_2a8 = iStack_2a8 + iStack_2a0;
                                uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                       lVar32 + lStack_2d8 * 0x618,1,0x16,0);
                                if ((((int)uVar16 != 0) ||
                                    (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                    (int)uVar16 != 0)) ||
                                   (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                           &uStack_2a2), (int)uVar16 != 0))
                                goto LAB_1005aba38;
                                *(uint *)(lVar32 + lStack_2d8 * 0x618 + 0x1c) = (uint)uStack_2a2;
                                if (uStack_2a2 == 0) {
                                  lVar32 = lVar32 + lStack_2d8 * 0x618;
                                  *(undefined8 *)(lVar32 + 0x20) = 0;
                                  *(undefined8 *)(lVar32 + 0x58) = 0;
                                  *(undefined8 *)(lVar32 + 0x90) = 0;
                                  *(undefined8 *)(lVar32 + 200) = 0;
                                  *(undefined8 *)(lVar32 + 0x100) = 0;
                                  *(undefined8 *)(lVar32 + 0x138) = 0;
                                  *(undefined8 *)(lVar32 + 0x170) = 0;
                                  *(undefined8 *)(lVar32 + 0x1a8) = 0;
                                  *(undefined8 *)(lVar32 + 0x1e0) = 0;
                                  *(undefined8 *)(lVar32 + 0x218) = 0;
                                  *(undefined8 *)(lVar32 + 0x250) = 0;
                                  *(undefined8 *)(lVar32 + 0x288) = 0;
                                  *(undefined8 *)(lVar32 + 0x2c0) = 0;
                                  *(undefined8 *)(lVar32 + 0x2f8) = 0;
                                  *(undefined8 *)(lVar32 + 0x330) = 0;
                                  *(undefined8 *)(lVar32 + 0x368) = 0;
                                  uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iStack_2a8,0
                                                        );
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                }
                                else {
                                  uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_2ac,
                                                         4,1,0);
                                  if ((((int)uVar16 != 0) ||
                                      (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + lStack_2d8 * 0x618 + 0x3a0,1,
                                                              0x60,0), (int)uVar16 != 0)) ||
                                     ((uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + lStack_2d8 * 0x618 + 0x402,2,
                                                              0x18,0), (int)uVar16 != 0 ||
                                      (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + lStack_2d8 * 0x618 + 0x45a,2,
                                                              0x18,0), (int)uVar16 != 0))))
                                  goto LAB_1005aba38;
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if ((((((int)uVar16 != 0) ||
                                        (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                lVar32 + lStack_2d8 * 0x618 + 0x452)
                                        , (int)uVar16 != 0)) ||
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + lStack_2d8 * 0x618 + 0x453),
                                       (int)uVar16 != 0)) ||
                                      ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + lStack_2d8 * 0x618 + 0x454),
                                       (int)uVar16 != 0 ||
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + lStack_2d8 * 0x618 + 0x4aa),
                                       (int)uVar16 != 0)))) ||
                                     ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + lStack_2d8 * 0x618 + 0x4ab),
                                      (int)uVar16 != 0 ||
                                      (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + lStack_2d8 * 0x618 + 0x4ac),
                                      (int)uVar16 != 0)))) goto LAB_1005aba38;
                                  puVar3 = (undefined1 *)(lVar32 + lStack_2d8 * 0x618 + 0x400);
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),puVar3);
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  puVar4 = (undefined1 *)(lVar32 + lStack_2d8 * 0x618 + 0x457);
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),puVar4);
                                  if ((((int)uVar16 != 0) ||
                                      (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + lStack_2d8 * 0x618 + 0x507),
                                      (int)uVar16 != 0)) ||
                                     ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + lStack_2d8 * 0x618 + 0x508),
                                      (int)uVar16 != 0 ||
                                      ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + lStack_2d8 * 0x618 + 0x509),
                                       (int)uVar16 != 0 ||
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + lStack_2d8 * 0x618 + 0x50a),
                                       (int)uVar16 != 0)))))) goto LAB_1005aba38;
                                  psVar5 = (short *)(lVar32 + lStack_2d8 * 0x618 + 0x50c);
                                  uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),psVar5);
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  *psVar5 = *psVar5 << 1;
                                  if (*(byte *)(lVar32 + lStack_2d8 * 0x618 + 0x401) < 2) {
                                    *puVar3 = 0;
                                  }
                                  if (*(byte *)(lVar32 + lStack_2d8 * 0x618 + 0x458) < 2) {
                                    *puVar4 = 0;
                                  }
                                  uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iStack_2a8,0
                                                        );
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  if (uStack_2a2 == 0) {
                                    uVar30 = 0;
                                    uVar21 = 0;
LAB_1005ac1ac:
                                    uVar16 = (ulong)(0xf - (int)uVar30) + 1;
                                    uVar29 = uVar16 & 0x1fffffffe;
                                    uVar28 = uVar30;
                                    if (uVar29 != 0) {
                                      uVar28 = uVar29 + uVar30;
                                      uVar29 = (ulong)(0xf - (int)uVar30) + 1 & 0xfffffffffffffffe;
                                      lVar19 = lVar32;
                                      do {
                                        lVar23 = lStack_2f8 + uVar30 * 0x38 + lVar19;
                                        *(undefined8 *)(lVar23 + 0x20) = 0;
                                        *(undefined8 *)(lVar23 + 0x58) = 0;
                                        uVar29 = uVar29 - 2;
                                        lVar19 = lVar19 + 0x70;
                                      } while (uVar29 != 0);
                                    }
                                    if (uVar16 + uVar30 != uVar28) {
                                      iVar13 = 0x10 - (int)uVar28;
                                      puVar17 = (undefined8 *)
                                                (lVar32 + lStack_2d8 * 0x618 + uVar28 * 0x38 + 0x20)
                                      ;
                                      do {
                                        *puVar17 = 0;
                                        iVar13 = iVar13 + -1;
                                        puVar17 = puVar17 + 7;
                                      } while (iVar13 != 0);
                                    }
                                  }
                                  else {
                                    uVar30 = 0;
                                    lVar19 = lVar32 + lStack_2d8 * 0x618;
                                    do {
                                      *(undefined8 *)(lVar19 + 0x48) = 0;
                                      *(undefined8 *)(lVar19 + 0x50) = 0;
                                      *(undefined8 *)(lVar19 + 0x38) = 0;
                                      *(undefined8 *)(lVar19 + 0x40) = 0;
                                      *(undefined8 *)(lVar19 + 0x28) = 0;
                                      *(undefined8 *)(lVar19 + 0x30) = 0;
                                      *(undefined8 *)(lVar19 + 0x20) = 0;
                                      param_1[0x285] = param_1[0x285] + 1;
                                      uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                             &uStack_2b0,4,1,0);
                                      if (((((int)uVar16 != 0) ||
                                           (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                   lVar19 + 0x30,4,1,0),
                                           (int)uVar16 != 0)) ||
                                          (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                  lVar19 + 0x34,4,1,0),
                                          (int)uVar16 != 0)) ||
                                         ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  lVar19 + 0x2c), (int)uVar16 != 0
                                          || (uVar16 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),
                                                                     lVar19 + 0x3c),
                                             (int)uVar16 != 0)))) goto LAB_1005aba38;
                                      *(undefined4 *)(lVar19 + 0x54) = 1;
                                      uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             &bStack_2b1);
                                      if ((int)uVar16 != 0) goto LAB_1005aba38;
                                      uStack_2e0 = (bStack_2b1 & 1) << 1 | 8;
                                      if ((bStack_2b1 & 2) != 0) {
                                        uStack_2e0 = 0xc;
                                      }
                                      if ((bStack_2b1 >> 4 & 1) != 0) {
                                        *(undefined4 *)(lVar19 + 0x54) = 2;
                                      }
                                      if ((uStack_2e0 & 6) == 0) {
                                        *(undefined4 *)(lVar19 + 0x30) = 0;
                                        *(uint *)(lVar19 + 0x34) = uStack_2b0;
                                        uVar22 = uStack_2b0;
                                      }
                                      else {
                                        uVar22 = *(uint *)(lVar19 + 0x34);
                                      }
                                      uVar14 = (bStack_2b1 >> 5 & 1) + 1;
                                      if (uVar22 == 0) {
                                        uVar27 = 0;
                                        *(undefined4 *)(lVar19 + 0x30) = 0;
                                        *(uint *)(lVar19 + 0x34) = uStack_2b0;
                                        uStack_2e0 = 9;
                                        uVar22 = uStack_2b0;
                                      }
                                      else {
                                        uVar27 = *(uint *)(lVar19 + 0x30);
                                      }
                                      *(uint *)(lVar19 + 0x40) = uStack_2b0;
                                      bVar12 = *(int *)(lVar19 + 0x54) != 1;
                                      uVar11 = 0;
                                      if (uVar14 != 0) {
                                        uVar11 = (uVar27 >> bVar12) / uVar14;
                                      }
                                      uVar27 = 0;
                                      if (uVar14 != 0) {
                                        uVar27 = (uVar22 >> (ulong)bVar12) / uVar14;
                                      }
                                      *(uint *)(lVar19 + 0x30) = uVar11;
                                      *(uint *)(lVar19 + 0x34) = uVar27;
                                      uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             lVar19 + 0x2d);
                                      if ((((int)uVar16 != 0) ||
                                          (uVar16 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),
                                                                  lVar19 + 0x38), (int)uVar16 != 0))
                                         || ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                     0), (int)uVar16 != 0 ||
                                             (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     auStack_17e,1,0x16,0),
                                             (int)uVar16 != 0)))) goto LAB_1005aba38;
                                      lVar23 = lStack_2d8;
                                      _sprintf((char *)&uStack_280,"Sample name %d");
                                      uVar14 = FUN_100586684(param_1,9,&uStack_280,auStack_17e,0x1c,
                                                             3,0,in_x7,lVar23);
                                      uVar22 = uStack_2b0;
                                      if (uVar14 != 0) {
                                        uVar16 = (ulong)uVar14;
                                        goto LAB_1005aba38;
                                      }
                                      if (uStack_2b0 != 0) {
                                        _memset(&uStack_280,0,0xe8);
                                        uStack_280 = CONCAT44(uVar22,0xe8);
                                        uStack_278 = (char *)CONCAT44(1,(undefined4)uStack_278);
                                        uStack_270 = CONCAT44(*(undefined4 *)(lVar19 + 0x54),0xac44)
                                        ;
                                        uVar16 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,
                                                               uStack_2e0 | 0x2400,&uStack_280,
                                                               lVar19 + 0x20);
                                        if ((int)uVar16 != 0) goto LAB_1005aba38;
                                        if ((uStack_2e0 & 6) != 0) {
                                          (**(code **)(**(long **)(lVar19 + 0x20) + 0x130))
                                                    (*(long **)(lVar19 + 0x20),
                                                     *(int *)(lVar19 + 0x30),2,
                                                     *(int *)(lVar19 + 0x30) +
                                                     *(int *)(lVar19 + 0x34) + -1,2);
                                        }
                                      }
                                      uVar22 = (int)uVar30 + 1;
                                      uVar30 = (ulong)uVar22;
                                      lVar19 = lVar19 + 0x38;
                                    } while (uVar22 < uStack_2a2);
                                    uVar21 = uStack_2a2;
                                    if (uVar22 < 0x10) goto LAB_1005ac1ac;
                                  }
                                  if (uVar21 != 0) {
                                    uVar30 = 0;
                                    pcStack_2e8 = (char *)0x0;
                                    do {
                                      plVar24 = (long *)(lVar32 + lStack_2d8 * 0x618 + uVar30 * 0x38
                                                        + 0x20);
                                      plVar15 = (long *)*plVar24;
                                      if (plVar15 != (long *)0x0) {
                                        uVar22 = *(uint *)(lVar32 + lStack_2d8 * 0x618 +
                                                           uVar30 * 0x38 + 0x40);
                                        (**(code **)(*plVar15 + 0x98))(plVar15,0,0,auStack_2b8,0);
                                        if (uVar22 != 0) {
                                          pcStack_2e8 = (char *)FUN_1005d7a98(*(undefined8 *)
                                                                               (PTR_DAT_10186d408 +
                                                                               0xd8),pcStack_2e8,
                                                                              uVar22 + 0x48,
                                                                                                                                                            
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xb4d,0);
                                          if (pcStack_2e8 == (char *)0x0) {
                                            uVar16 = 0x26;
                                            goto LAB_1005aba38;
                                          }
                                          uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 pcStack_2e8,1,uVar22,0);
                                          if (((uint)uVar16 | 0x10) != 0x10) goto LAB_1005aba38;
                                          iVar13 = FUN_1005ed0f8(pcStack_2e8 + 4,"OggS",4);
                                          if (iVar13 == 0) {
                                            _memset(&uStack_280,0,0xe8);
                                            uStack_280 = CONCAT44(uVar22,0xe8);
                                            plVar15 = (long *)*plVar24;
                                            uStack_278 = (char *)CONCAT44((int)plVar15[0xc],
                                                                          (undefined4)uStack_278);
                                            uStack_270 = CONCAT44((int)plVar15[5],
                                                                  (int)*(float *)((long)plVar15 +
                                                                                 100));
                                            uVar22 = *(uint *)((long)plVar15 + 0x2c);
                                            (**(code **)(*plVar15 + 0x18))(plVar15,1);
                                            *plVar24 = 0;
                                            iVar13 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),
                                                                   pcStack_2e8 + 4,
                                                                   uVar22 & 0xffffd3ff | 0x800,
                                                                   &uStack_280,plVar24);
                                            if ((((uVar22 & 6) != 0) && (iVar13 == 0)) &&
                                               (lVar19 = lVar32 + lStack_2d8 * 0x618 + uVar30 * 0x38
                                               , iVar13 = *(int *)(lVar19 + 0x30),
                                               uVar16 = (**(code **)(*(long *)*plVar24 + 0x130))
                                                                  ((long *)*plVar24,iVar13,2,
                                                                   iVar13 + *(int *)(lVar19 + 0x34)
                                                                   + -1,2), (int)uVar16 != 0))
                                            goto LAB_1005aba38;
                                          }
                                          else {
                                            iVar13 = *(int *)(lVar32 + lStack_2d8 * 0x618 +
                                                              uVar30 * 0x38 + 0x54);
                                            if (iVar13 == 2) {
                                              if (uVar22 >> 1 != 0) {
                                                lVar19 = 0;
                                                sVar26 = 0;
                                                do {
                                                  sVar26 = *(short *)(pcStack_2e8 + lVar19 * 2) +
                                                           sVar26;
                                                  *(short *)(pcStack_2e8 + lVar19 * 2) = sVar26;
                                                  lVar19 = lVar19 + 1;
                                                } while ((uint)lVar19 < uVar22 >> 1);
                                              }
                                            }
                                            else if (iVar13 == 1) {
                                              cVar20 = '\0';
                                              pcVar25 = pcStack_2e8;
                                              do {
                                                cVar20 = *pcVar25 + cVar20;
                                                *pcVar25 = cVar20;
                                                uVar22 = uVar22 - 1;
                                                pcVar25 = pcVar25 + 1;
                                              } while (uVar22 != 0);
                                            }
                                            plVar15 = (long *)*plVar24;
                                            uVar22 = *(uint *)(plVar15 + 8);
                                            uVar16 = (**(code **)(*plVar15 + 0x28))
                                                               (plVar15,0,uVar22,&pvStack_2c0,
                                                                &uStack_2c8,&uStack_2cc,&uStack_2d0)
                                            ;
                                            if ((int)uVar16 != 0) goto LAB_1005aba38;
                                            iVar13 = 0;
                                            pcVar25 = pcStack_2e8;
                                            while( true ) {
                                              _memcpy(pvStack_2c0,pcVar25,(ulong)uStack_2cc);
                                              uVar16 = (**(code **)(*(long *)*plVar24 + 0x30))
                                                                 ((long *)*plVar24,pvStack_2c0,
                                                                  uStack_2c8,uStack_2cc,uStack_2d0);
                                              if ((int)uVar16 != 0) goto LAB_1005aba38;
                                              if (uVar22 == uStack_2cc) break;
                                              pcVar25 = pcVar25 + uStack_2cc;
                                              iVar13 = uStack_2cc + iVar13;
                                              uVar22 = uVar22 - uStack_2cc;
                                              uVar16 = (**(code **)(*(long *)*plVar24 + 0x28))
                                                                 ((long *)*plVar24,iVar13,uVar22,
                                                                  &pvStack_2c0,&uStack_2c8,
                                                                  &uStack_2cc,&uStack_2d0);
                                              if ((int)uVar16 != 0) goto LAB_1005aba38;
                                            }
                                          }
                                        }
                                      }
                                      uVar22 = (int)uVar30 + 1;
                                      uVar30 = (ulong)uVar22;
                                    } while (uVar22 < uStack_2a2);
                                    if (pcStack_2e8 != (char *)0x0) {
                                      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                    pcStack_2e8,
                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xbc7);
                                    }
                                  }
                                }
                                lStack_2d8 = lStack_2d8 + 1;
                                if (*piVar2 <= lStack_2d8) break;
                                lVar32 = *(long *)(param_1 + 0x286);
                                FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&iStack_2a8);
                                iVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&iStack_2a0,4,
                                                       1,0);
                                lStack_2f8 = lStack_2f8 + 0x618;
                              } while (iVar13 == 0);
                            }
                          }
                          *(undefined8 *)(param_1 + 0x34e) = 0;
                          if (param_1[0x285] != 0) {
                            lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   param_1[0x285] << 3,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xbe2,0);
                            *(long *)(param_1 + 0x34e) = lVar32;
                            if (lVar32 == 0) {
                              uVar16 = 0x26;
                              goto LAB_1005aba38;
                            }
                          }
                          iVar13 = *piVar2;
                          if (0 < iVar13) {
                            lVar32 = 0;
                            uVar16 = 0;
                            do {
                              iVar9 = *(int *)(*(long *)(param_1 + 0x286) + lVar32 * 0x618 + 0x1c);
                              if (0 < iVar9) {
                                lVar19 = 0;
                                iVar10 = iVar9 + -1;
                                if (iVar10 == 0 || iVar9 < 1) {
                                  iVar10 = 0;
                                }
                                lVar23 = *(long *)(param_1 + 0x286) + lVar32 * 0x618 + 0x20;
                                do {
                                  *(long *)(*(long *)(param_1 + 0x34e) +
                                            (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) +
                                           lVar19 * 8) = lVar23;
                                  lVar19 = lVar19 + 1;
                                  lVar23 = lVar23 + 0x38;
                                } while (lVar19 < iVar9);
                                uVar16 = (ulong)((int)uVar16 + iVar10 + 1);
                              }
                              lVar32 = lVar32 + 1;
                            } while (lVar32 < iVar13);
                          }
                          puVar6 = param_1 + 0xec;
                          _bzero(puVar6,0x130);
                          *(undefined4 **)(param_1 + 2) = puVar6;
                          param_1[0x12f] = uStack_28c;
                          if ((param_3 == 0) || (iVar13 = *(int *)(param_3 + 0x14), iVar13 == 0)) {
                            iVar13 = 5;
                          }
                          param_1[300] = iVar13;
                          param_1[0x12d] = 2;
                          FUN_1005ecc98(puVar6,param_1 + 0x66,0x100);
                          lVar32 = *(long *)(param_1 + 0x12);
                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x108) =
                               *(undefined4 *)(lVar32 + 0x708);
                          param_1[0x4c] = 0;
                          uStack_258 = 0;
                          uStack_250 = 0;
                          uStack_268 = 0;
                          uStack_260 = 0;
                          uStack_270 = 0;
                          uStack_280 = 0;
                          uStack_278 = "FMOD XM Target Unit";
                          uVar16 = FUN_10056b4fc(lVar32,&uStack_280,0,param_1 + 0xa8,1);
                          if ((int)uVar16 == 0) {
                            FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
                            FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                            param_1[0x1ba] = param_1[0x138];
                            lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   param_1[0x138] * 0x330,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xc2f,0);
                            *(long *)(param_1 + 0x1bc) = lVar32;
                            if (lVar32 == 0) {
                              uVar16 = 0x26;
                            }
                            else {
                              iVar13 = param_1[0x1ba];
                              if (0 < iVar13) {
                                lVar19 = 0;
                                lVar23 = 0;
                                while( true ) {
                                  lVar32 = lVar32 + lVar19;
                                  *(long *)lVar32 = lVar32;
                                  *(long *)(lVar32 + 8) = lVar32;
                                  *(undefined8 *)(lVar32 + 0x10) = 0;
                                  FUN_100583c48(lVar32 + 0x20);
                                  FUN_100583c48(*(long *)(param_1 + 0x1bc) + lVar19 + 0x20);
                                  lVar23 = lVar23 + 1;
                                  iVar13 = param_1[0x1ba];
                                  if (iVar13 <= lVar23) break;
                                  lVar19 = lVar19 + 0x330;
                                  lVar32 = *(long *)(param_1 + 0x1bc);
                                }
                              }
                              FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                            ,0xc57,0);
                              lVar32 = FUN_100585974();
                              *(long *)(param_1 + 0x1be) = lVar32;
                              *(long *)(param_1 + 0x350) = lVar32;
                              if (lVar32 == 0) {
                                uVar16 = 0x26;
                              }
                              else {
                                uVar16 = FUN_100585980(lVar32,*(undefined8 *)(param_1 + 0x12),0,
                                                       iVar13 << 1);
                                if ((int)uVar16 == 0) {
                                  lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                         iVar13 * 0x570,
                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xc63,0);
                                  *(long *)(param_1 + 0x1c0) = lVar32;
                                  if (lVar32 == 0) {
                                    uVar16 = 0x26;
                                  }
                                  else if (iVar13 < 1) {
LAB_1005ac8b0:
                                    if ((param_2 & 0x4100) == 0) {
                                      *(undefined8 *)(param_1 + 0xaa) = 0;
                                      *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0xffffffff;
                                    }
                                    else {
                                      lVar32 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),
                                                             param_1[0x281] << 8,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xc72,0);
                                      *(long *)(param_1 + 0xaa) = lVar32;
                                      if (lVar32 == 0) {
                                        uVar16 = 0x26;
                                        goto LAB_1005aba38;
                                      }
                                      *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
                                      FUN_1005d8fe8(param_1,0);
                                      while (*(char *)((long)param_1 + 0xd01) == '\0') {
                                        FUN_1005a929c(param_1,0);
                                        *(int *)(*(long *)(param_1 + 2) + 0x110) =
                                             *(int *)(*(long *)(param_1 + 2) + 0x110) +
                                             param_1[0x25b];
                                      }
                                      FUN_1005d9258(param_1);
                                    }
                                    *param_1 = 0;
                                    FUN_1005d8fe8(param_1,1);
                                    uVar16 = 0;
                                  }
                                  else {
                                    FUN_10057bd44();
                                    uVar16 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,
                                                           *(undefined8 *)(param_1 + 0x1c0));
                                    lVar32 = 1;
                                    lVar19 = 0x2b8;
                                    if ((int)uVar16 == 0) {
                                      do {
                                        if (iVar13 << 1 <= lVar32) goto LAB_1005ac8b0;
                                        FUN_10057bd44(*(long *)(param_1 + 0x1c0) + lVar19);
                                        uVar16 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),
                                                               lVar32,*(long *)(param_1 + 0x1c0) +
                                                                      lVar19);
                                        lVar32 = lVar32 + 1;
                                        lVar19 = lVar19 + 0x2b8;
                                      } while ((int)uVar16 == 0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_298,4,1,0);
                        if ((int)uVar16 == 0) {
                          lStack_2d8 = 0;
                          do {
                            uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                            if ((((int)uVar16 != 0) ||
                                (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&uStack_292),
                                (int)uVar16 != 0)) ||
                               (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&sStack_290),
                               (int)uVar16 != 0)) break;
                            puVar7 = (uint *)(lVar32 + lStack_2d8 * 0x10);
                            *puVar7 = (uint)uStack_292;
                            pbVar18 = (byte *)FUN_1005d7a5c(*(undefined8 *)
                                                             (PTR_DAT_10186d408 + 0xd8),
                                                            (uint)uStack_292 * *piVar1 * 5,
                                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0x962,0);
                            *(byte **)(puVar7 + 2) = pbVar18;
                            if (pbVar18 == (byte *)0x0) {
                              uVar16 = 0x26;
                              break;
                            }
                            if ((sStack_290 != 0) && (0 < (int)(*piVar1 * *puVar7))) {
                              iVar13 = 0;
                              do {
                                uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_299);
                                if ((int)uVar16 != 0) goto LAB_1005aba38;
                                if ((char)bStack_299 < '\0') {
                                  if (((((bStack_299 & 1) != 0) &&
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               pbVar18), (int)uVar16 != 0)) ||
                                      ((((bStack_299 >> 1 & 1) != 0 &&
                                        (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                pbVar18 + 1), (int)uVar16 != 0)) ||
                                       (((bStack_299 >> 2 & 1) != 0 &&
                                        (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                pbVar18 + 2), (int)uVar16 != 0))))))
                                     || (((bStack_299 >> 3 & 1) != 0 &&
                                         (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 pbVar18 + 3), (int)uVar16 != 0))))
                                  goto LAB_1005aba38;
                                  if ((bStack_299 >> 4 & 1) != 0) goto LAB_1005ab9a8;
                                }
                                else {
                                  if (bStack_299 != 0) {
                                    *pbVar18 = bStack_299;
                                  }
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),pbVar18 + 1)
                                  ;
                                  if ((((int)uVar16 != 0) ||
                                      (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              pbVar18 + 2), (int)uVar16 != 0)) ||
                                     (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             pbVar18 + 3), (int)uVar16 != 0))
                                  goto LAB_1005aba38;
LAB_1005ab9a8:
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),pbVar18 + 4)
                                  ;
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                }
                                if (*pbVar18 == 0x61) {
                                  *pbVar18 = 0xff;
                                }
                                if (0x80 < pbVar18[1]) {
                                  pbVar18[1] = 0;
                                }
                                pbVar18 = pbVar18 + 5;
                                iVar13 = iVar13 + 1;
                              } while (iVar13 < (int)(*piVar1 * *puVar7));
                            }
                            lStack_2d8 = lStack_2d8 + 1;
                            uVar16 = (ulong)uStack_282;
                            if ((long)uVar16 <= lStack_2d8) goto LAB_1005aba78;
                            lVar32 = *(long *)(param_1 + 0xa6);
                            uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_298,4,1,0)
                            ;
                          } while ((int)uVar16 == 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar16 = 0x13;
          }
        }
      }
      else {
        uVar16 = 0x13;
      }
    }
  }
LAB_1005aba38:
  if (lVar31 != lStack_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar16);
  }
  return;
}




undefined8 FUN_1005a91fc(void)

{
  FUN_1005ac97c();
  return 0;
}




int thunk_FUN_1005acbf8(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iStack_10e4;
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
    iVar8 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar8 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x968);
    iVar8 = 0;
    if (param_3 != 0) {
      uVar12 = 0;
      iStack_10e4 = (int)&uStack_1088;
      lVar13 = param_2;
      iVar8 = 0;
      do {
        if (uVar11 == 0) {
          FUN_1005a929c(param_1,1);
          iVar8 = 0;
          uVar11 = *(uint *)(param_1 + 0x96c);
        }
        uVar10 = param_3 - uVar12;
        if (uVar11 + uVar12 <= param_3) {
          uVar10 = uVar11;
        }
        lVar14 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar14 + 0x710);
        if (uVar10 <= *(uint *)(lVar14 + 0x710)) {
          uVar1 = uVar10;
        }
        if (param_2 != 0) {
          uStack_10ac = 0;
          uStack_1088 = 0;
          uStack_1080 = 0;
          uStack_10b0 = 0x200;
          uStack_10a8 = 0;
          puStack_10a0 = auStack_1078;
          lStack_10b8 = lVar14;
          puStack_1098 = puStack_10a0;
          if (lVar14 == 0) {
            lVar15 = 0;
            bVar6 = false;
            bVar4 = false;
            bVar5 = true;
          }
          else {
            bVar5 = true;
            FUN_10057097c(lVar14,1);
            lVar15 = *(long *)(param_1 + 0x48);
            if (lVar15 == 0) {
              lVar15 = 0;
              bVar4 = false;
              bVar6 = true;
            }
            else {
              FUN_10057097c(lVar15,3);
              bVar5 = false;
              bVar6 = true;
              bVar4 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x2a0) + 0x3f) == '\0') {
LAB_1005acd84:
            uStack_10c0 = 0;
            uStack_10d0 = 0;
            uStack_10c8 = 0;
            uStack_10d8 = 0;
            uStack_10bc = 0xffffffff;
            iVar8 = FUN_1005c9be4(&lStack_10b8,uVar1,1000,2,&uStack_10d8);
            if (iVar8 == 0) {
              uVar9 = FUN_1005c8da0(&uStack_10d8);
              bVar3 = true;
              iVar8 = FUN_10063a2fc(0x3f800000,lVar13,uVar9,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar7 = iVar8;
              if (iVar8 == 0) {
                FUN_1005c8d10(&uStack_10d8);
                bVar3 = false;
                iVar8 = 0;
                iVar7 = iStack_10e4;
              }
            }
            else {
              bVar3 = true;
              iVar7 = iVar8;
            }
            iStack_10e4 = iVar7;
            FUN_1005c8e48(&uStack_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar8 = FUN_1005cb3bc(&lStack_10b8,*(long *)(param_1 + 0x2a0),uVar1);
            if (iVar8 == 0) goto LAB_1005acd84;
            bVar3 = true;
            iStack_10e4 = iVar8;
          }
          if (!bVar5 && bVar4) {
            FUN_100570990(lVar15,3);
          }
          if ((lVar14 != 0) && (bVar6)) {
            FUN_100570990(lVar14,1);
          }
          if (bVar3) goto LAB_1005acee0;
        }
        uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar10 = uVar1;
        if (uVar2 < 5) {
          uVar10 = *(int *)(&DAT_10115eee0 + (long)(int)uVar2 * 4) * uVar1 >> 3;
        }
        uVar12 = uVar1 + uVar12;
        lVar13 = lVar13 + (ulong)(uVar10 * *(int *)(*(long *)(param_1 + 8) + 0x104));
        uVar11 = uVar11 - uVar1;
      } while (uVar12 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar11;
  }
  iStack_10e4 = iVar8;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_1005acee0:
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_78) {
    return iStack_10e4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 thunk_FUN_1005acf24(long param_1,undefined8 param_2,uint param_3,int param_4)

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
        FUN_1005a929c(param_1,1);
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




undefined8 FUN_1005a921c(undefined8 param_1)

{
  FUN_1005a929c(param_1,1);
  return 0;
}




undefined8 FUN_1005a9238(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0;
  FUN_1005d8fe8(param_1,0);
  while (*(char *)(param_1 + 0xd01) == '\0') {
    FUN_1005a929c(param_1,0);
    *(int *)(*(long *)(param_1 + 8) + 0x110) =
         *(int *)(*(long *)(param_1 + 8) + 0x110) + *(int *)(param_1 + 0x96c);
  }
  FUN_1005d9258(param_1);
  return 0;
}




undefined8 FUN_1005a929c(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  bVar2 = false;
  lVar4 = *(long *)(param_1 + 0x48);
  if ((lVar4 != 0) && ((((uint)param_2 ^ 1) & 1) == 0)) {
    bVar2 = true;
    FUN_10057097c(lVar4,1);
  }
  if (*(int *)(param_1 + 0xd04) == 0) {
    if ((*(char *)(param_1 + 0xd01) == '\0') || (*(char *)(param_1 + 0xd02) != '\0')) {
      iVar3 = *(int *)(param_1 + 0xd24);
      if (-1 < iVar3) {
        do {
          *(int *)(param_1 + 0xd14) = iVar3;
          do {
            cVar1 = *(char *)(param_1 + iVar3 + 0x2b0);
            if (cVar1 == -1) {
              *(undefined4 *)(param_1 + 0xd14) = *(undefined4 *)(param_1 + 0xce8);
LAB_1005a9368:
              *(undefined4 *)(param_1 + 0xd24) = 0xffffffff;
              goto LAB_1005a9370;
            }
            if (cVar1 != -2) goto LAB_1005a9368;
            iVar3 = iVar3 + 1;
            *(int *)(param_1 + 0xd14) = iVar3;
          } while (iVar3 < *(int *)(param_1 + 0xa04));
          if (*(char *)(param_1 + 0xd02) == '\0') {
            FUN_1005d9258(param_1);
          }
          iVar3 = *(int *)(param_1 + 0xce8);
        } while( true );
      }
LAB_1005a9370:
      if (-1 < *(int *)(param_1 + 0xd20)) {
        *(int *)(param_1 + 0xd10) = *(int *)(param_1 + 0xd20);
        *(undefined4 *)(param_1 + 0xd20) = 0xffffffff;
      }
      FUN_1005a9e14(param_1,param_2);
      if (*(int *)(param_1 + 0xd20) == -1) {
        iVar3 = *(int *)(param_1 + 0xd10) + 1;
        *(int *)(param_1 + 0xd20) = iVar3;
        if (*(int *)(*(long *)(param_1 + 0x298) +
                    (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10) <= iVar3)
        {
          iVar3 = *(int *)(param_1 + 0xd14) + 1;
          *(int *)(param_1 + 0xd24) = iVar3;
          if (*(int *)(param_1 + 0xa04) <= iVar3) {
            *(undefined4 *)(param_1 + 0xd24) = *(undefined4 *)(param_1 + 0xce8);
          }
          *(undefined4 *)(param_1 + 0xd20) = 0;
        }
      }
    }
    else {
      FUN_1005d9258(param_1);
    }
  }
  else if ((uint)param_2 != 0) {
    FUN_1005aa8f0(param_1);
  }
  if (*(int *)(param_1 + 0xd08) == 0) {
    *(undefined1 *)(param_1 + 0xd01) = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xd04) + 1;
    *(int *)(param_1 + 0xd04) = iVar3;
    if (*(int *)(param_1 + 0xd18) + *(int *)(param_1 + 0xd08) <= iVar3) {
      *(undefined4 *)(param_1 + 0xd18) = 0;
      *(undefined4 *)(param_1 + 0xd04) = 0;
    }
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + *(int *)(param_1 + 0x96c);
  if ((lVar4 != 0) && (bVar2)) {
    FUN_100570990(lVar4,1);
  }
  return 0;
}




undefined8
FUN_1005a9458(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  code *pcVar1;
  
  if (param_3 == &DAT_101dbc130) {
    FUN_1005d9420(param_1,param_2,param_4,param_5);
    if (param_5 == (undefined8 *)0x0) goto LAB_1005a94a4;
  }
  else {
    if (param_5 == (undefined8 *)0x0) {
LAB_1005a94a4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005a94a8);
      (*pcVar1)();
    }
    *param_5 = param_3;
  }
  return 0;
}




undefined8 FUN_1005a94a8(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = (uint)*(byte *)(param_3 + 0x2a4);
  if (*(int *)(param_3 + 0x2a8) + *(int *)(param_3 + 0x2b8) == 0) {
    uVar3 = uVar3 & 0xfe;
    *(char *)(param_3 + 0x2a4) = (char)uVar3;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    FUN_1005d95a4(param_1,param_4,param_3,0,0);
    uVar3 = (uint)*(byte *)(param_3 + 0x2a4);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    FUN_1005847b8(*(float *)(param_2 + 0x358) *
                  (float)*(int *)(param_1 + 0xcf8) *
                  (float)*(int *)(param_3 + 0x318) *
                  (float)*(int *)(param_3 + 0x2d8) *
                  (float)(*(int *)(param_3 + 0x2b4) + *(int *)(param_3 + 0x2ac)) * 2.910383e-11,
                  param_3 + 0x20,0);
    uVar3 = (uint)*(byte *)(param_3 + 0x2a4);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    (**(code **)(*(long *)(param_3 + 0x20) + 0xa8))
              ((*(float *)(param_1 + 0xcf0) * ((float)*(int *)(param_3 + 0x2b0) + -128.0)) / 127.0,
               (long *)(param_3 + 0x20));
    uVar3 = (uint)*(byte *)(param_3 + 0x2a4);
  }
  if ((uVar3 & 1) != 0) {
    iVar2 = *(int *)(param_3 + 0x2b8) + *(int *)(param_3 + 0x2a8);
    iVar1 = 1;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    if ((*(byte *)(param_1 + 0xcfe) & 1) == 0) {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = 0xda7600 / iVar1;
      }
    }
    else {
      fVar4 = (float)_exp2f((4608.0 - (float)iVar1) / 768.0);
      iVar2 = (int)(float)(int)(fVar4 * 8363.0 + 0.5);
    }
    FUN_100581c98((float)iVar2,param_3 + 0x20);
    uVar3 = (uint)*(byte *)(param_3 + 0x2a4);
  }
  if ((uVar3 >> 5 & 1) != 0) {
    FUN_100582560(param_3 + 0x20,0);
    *(undefined4 *)(param_3 + 0x2c0) = 0;
  }
  return 0;
}




undefined8 FUN_1005a9650(long param_1)

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
    if (iVar1 <= iVar3) goto LAB_1005a9690;
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x36c) * -4;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  *(int *)(lVar2 + 0x2a8) = iVar3;
LAB_1005a9690:
  *(byte *)(lVar2 + 0x2a4) = *(byte *)(lVar2 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_1005a96a4(long *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar4 = param_1[1];
  bVar3 = *(byte *)((long)param_1 + 0x36e);
  bVar1 = *(byte *)((long)param_1 + 0x38e) & 3;
  if (bVar1 < 4) {
    uVar5 = 0xff;
    switch(bVar1) {
    case 0:
      uVar5 = (uint)(byte)(&DAT_10186d410)[bVar3 & 0x1f];
      break;
    case 1:
      uVar5 = (bVar3 & 0x1f) << 3;
      if ((char)bVar3 < '\0') {
        uVar5 = ~uVar5;
      }
      uVar5 = uVar5 & 0xff;
      break;
    case 3:
      lVar6 = *param_1;
      uVar5 = *(uint *)(lVar6 + 0xd28) ^ *(uint *)(lVar6 + 0xd28) << 0xb;
      *(undefined4 *)(lVar6 + 0xd28) = *(undefined4 *)(lVar6 + 0xd2c);
      *(undefined4 *)(lVar6 + 0xd2c) = *(undefined4 *)(lVar6 + 0xd30);
      uVar2 = *(uint *)(lVar6 + 0xd34);
      *(uint *)(lVar6 + 0xd30) = uVar2;
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      *(uint *)(lVar6 + 0xd34) = uVar5;
      uVar5 = uVar5 & 0xff;
    }
  }
  else {
    uVar5 = 0;
  }
  uVar5 = *(byte *)(param_1 + 0x6e) * uVar5 >> 5 & 0x7fc;
  if ((char)bVar3 < '\0') {
    *(uint *)(lVar4 + 0x2b8) = uVar5;
  }
  else {
    *(uint *)(lVar4 + 0x2b8) = -uVar5;
  }
  *(byte *)(lVar4 + 0x2a4) = *(byte *)(lVar4 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_1005a9788(long param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  lVar6 = *(long *)(param_1 + 8);
  bVar4 = *(byte *)(param_1 + 0x372);
  bVar5 = *(byte *)(param_1 + 0x38e) >> 4 & 3;
  if (bVar5 < 4) {
    switch(bVar5) {
    default:
      uVar7 = (uint)(byte)(&DAT_10186d410)[bVar4 & 0x1f];
      break;
    case 1:
      uVar7 = (bVar4 & 0x1f) << 3;
      if ((char)bVar4 < '\0') {
        uVar7 = ~uVar7;
      }
      uVar7 = uVar7 & 0xff;
      break;
    case 2:
      uVar7 = 0xff;
    }
    *(uint *)(lVar6 + 0x2b4) = uVar7;
  }
  else {
    uVar7 = *(uint *)(lVar6 + 0x2b4);
  }
  iVar9 = (int)(uVar7 * *(byte *)(param_1 + 0x374)) >> 6;
  piVar1 = (int *)(lVar6 + 0x2b4);
  *piVar1 = iVar9;
  iVar8 = *(int *)(lVar6 + 0x2ac);
  if ((char)bVar4 < '\0') {
    if (((uint)(iVar8 - iVar9) >> 0xf & 1) != 0) {
      *piVar1 = iVar8;
      iVar9 = iVar8;
    }
    iVar8 = -iVar9;
  }
  else {
    if (iVar8 + iVar9 < 0x41) goto LAB_1005a9848;
    iVar8 = 0x40 - iVar8;
  }
  *piVar1 = iVar8;
LAB_1005a9848:
  cVar2 = bVar4 + *(char *)(param_1 + 0x373);
  cVar3 = cVar2 + -0x40;
  if (cVar2 < ' ') {
    cVar3 = cVar2;
  }
  *(char *)(param_1 + 0x372) = cVar3;
  *(byte *)(lVar6 + 0x2a4) = *(byte *)(lVar6 + 0x2a4) | 2;
  return 0;
}




undefined8
FUN_1005a9888(undefined8 param_1,uint *param_2,long param_3,int param_4,long param_5,uint param_6,
             uint param_7,uint param_8,undefined8 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_2[1];
  if ((int)uVar5 < param_4) {
    uVar4 = *param_2;
    if ((uVar4 == 0) || (uVar4 == *(ushort *)(param_5 + (long)(int)(uVar5 << 1) * 2))) {
      do {
        if (((param_6 & 4) != 0) && (uVar5 == param_8)) {
          param_2[1] = param_7;
          uVar4 = (uint)*(ushort *)(param_5 + (long)(int)(param_7 << 1) * 2);
          *param_2 = uVar4;
          uVar5 = param_7;
        }
        uVar1 = *(ushort *)(param_5 + (long)(int)(uVar5 << 1 | 1) * 2);
        if (uVar5 == param_4 - 1U) {
          param_2[3] = (uint)uVar1;
          *(undefined1 *)(param_2 + 5) = 1;
          goto LAB_1005a999c;
        }
        iVar2 = uVar5 * 2;
        if ((((param_6 & 2) != 0) && (uVar5 == (byte)param_9)) &&
           (*(char *)(param_3 + 0x324) == '\0')) {
          param_2[3] = (uint)uVar1;
          goto LAB_1005a999c;
        }
        uVar6 = (uint)uVar1 * 0x10000;
        iVar3 = (uint)*(ushort *)(param_5 + (long)(iVar2 + 2) * 2) -
                (uint)*(ushort *)(param_5 + (long)iVar2 * 2);
        if (iVar3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if (iVar3 != 0) {
            uVar7 = (int)((uint)*(ushort *)(param_5 + (long)(iVar2 + 3) * 2) * 0x10000 +
                         (uint)uVar1 * -0x10000) / iVar3;
          }
        }
        param_2[4] = uVar7;
        uVar5 = uVar5 + 1;
        param_2[1] = uVar5;
        param_2[2] = uVar6;
      } while (((int)uVar5 < param_4) &&
              (uVar4 == *(ushort *)(param_5 + (long)(int)(uVar5 * 2) * 2)));
    }
    else {
      uVar6 = param_2[2] + param_2[4];
      param_2[2] = uVar6;
    }
  }
  else {
    uVar6 = param_2[2];
    uVar4 = *param_2;
  }
  param_2[3] = (int)uVar6 >> 0x10;
  *param_2 = uVar4 + 1;
LAB_1005a999c:
  *(byte *)(param_3 + 0x2a4) = *(byte *)(param_3 + 0x2a4) | param_9._1_1_;
  return 0;
}




undefined8 FUN_1005a99cc(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  switch(*(undefined1 *)(param_2 + 0x507)) {
  case 0:
    iVar6 = (int)(char)(&DAT_10186d430)[*(int *)(lVar4 + 0x31c)];
    break;
  case 1:
    iVar6 = -0x40;
    if (*(int *)(lVar4 + 0x31c) < 0x80) {
      iVar6 = 0x40;
    }
    break;
  case 2:
    uVar7 = *(int *)(lVar4 + 0x31c) + 0x80;
    uVar5 = *(int *)(lVar4 + 0x31c) + 0x17f;
    goto LAB_1005a9a44;
  case 3:
    uVar7 = 0x180 - *(int *)(lVar4 + 0x31c);
    uVar5 = 0x27f - *(int *)(lVar4 + 0x31c);
LAB_1005a9a44:
    if (-1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    iVar6 = (int)(0x80 - (uVar7 - (uVar5 & 0xffffff00))) >> 1;
    break;
  default:
    iVar6 = 0;
  }
  iVar6 = (uint)*(byte *)(param_2 + 0x509) * iVar6;
  bVar2 = *(byte *)(param_2 + 0x508);
  uVar7 = (uint)bVar2;
  iVar1 = *(int *)(lVar4 + 800);
  if (bVar2 == 0) {
    uVar7 = 0;
  }
  else {
    iVar3 = iVar1 * iVar6;
    iVar6 = 0;
    if (bVar2 != 0) {
      iVar6 = iVar3 / (int)(uint)bVar2;
    }
  }
  *(int *)(lVar4 + 0x2b8) = *(int *)(lVar4 + 0x2b8) + (iVar6 >> 6);
  if (iVar1 < (int)uVar7) {
    uVar7 = iVar1 + 1;
  }
  *(uint *)(lVar4 + 800) = uVar7;
  iVar6 = *(int *)(lVar4 + 0x31c) + (uint)*(byte *)(param_2 + 0x50a);
  iVar1 = iVar6 + -0x100;
  if (iVar6 < 0x100) {
    iVar1 = iVar6;
  }
  *(int *)(lVar4 + 0x31c) = iVar1;
  *(byte *)(lVar4 + 0x2a4) = *(byte *)(lVar4 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_1005a9adc(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar4 = param_2 - 0x10;
  if (param_2 - 0x10 < 0x41) goto LAB_1005a9b40;
  switch(param_2 >> 4) {
  case 6:
  case 8:
    uVar1 = *(int *)(lVar2 + 0x2ac) - (param_2 & 0xf);
    uVar4 = 0;
    if (-1 < (int)uVar1) {
      uVar4 = uVar1;
    }
    goto LAB_1005a9b40;
  case 7:
  case 9:
    uVar1 = *(int *)(lVar2 + 0x2ac) + (param_2 & 0xf);
    uVar4 = 0x40;
    if ((int)uVar1 < 0x41) {
      uVar4 = uVar1;
    }
LAB_1005a9b40:
    *(uint *)(lVar2 + 0x2ac) = uVar4;
    bVar3 = *(byte *)(lVar2 + 0x2a4) | 2;
    goto LAB_1005a9b4c;
  case 10:
    *(byte *)(param_1 + 0x36f) = (byte)param_2 & 0xf;
    return 0;
  case 0xb:
    *(byte *)(param_1 + 0x370) = (byte)param_2 & 0xf;
    return 0;
  case 0xc:
    iVar5 = (param_2 & 0xf) << 4;
    break;
  case 0xd:
    iVar5 = *(int *)(lVar2 + 0x2b0) - (param_2 & 0xf);
    break;
  case 0xe:
    iVar5 = *(int *)(lVar2 + 0x2b0) + (param_2 & 0xf);
    break;
  case 0xf:
    if ((param_2 & 0xf) != 0) {
      *(char *)(param_1 + 0x36c) = (char)(param_2 << 4);
    }
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x33c);
    bVar3 = *(byte *)(lVar2 + 0x2a4) & 0xf7;
    goto LAB_1005a9b4c;
  default:
    goto switchD_1005a9b0c_default;
  }
  *(int *)(lVar2 + 0x2b0) = iVar5;
  bVar3 = *(byte *)(lVar2 + 0x2a4) | 4;
LAB_1005a9b4c:
  *(byte *)(lVar2 + 0x2a4) = bVar3;
switchD_1005a9b0c_default:
  return 0;
}




undefined8 FUN_1005a9c00(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(&DAT_10186d530 + (long)param_2 * 4);
  *param_4 = iVar2;
  if ((param_2 == 0) || (-1 < param_3)) {
    param_3 = (*(int *)(&DAT_10186d534 + (long)param_2 * 4) - iVar2) * param_3;
    iVar1 = param_3 + 0x7f;
    if (-1 < param_3) {
      iVar1 = param_3;
    }
    iVar1 = iVar1 >> 7;
  }
  else {
    iVar3 = -(param_3 * (iVar2 - *(int *)(&DAT_10186d52c + (long)param_2 * 4)));
    iVar1 = iVar3 + 0x7f;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar1 = -(iVar1 >> 7);
  }
  *param_4 = iVar2 + iVar1;
  return 0;
}




undefined8
FUN_1005a9c6c(undefined8 param_1,char *param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_2[1] != '\0') {
    *(uint *)(param_4 + 0x2ac) = (uint)*(byte *)(param_6 + 0xc);
    *(uint *)(param_4 + 0x2b0) = (uint)*(byte *)(param_6 + 0xd);
    *(undefined4 *)(param_4 + 0x2d8) = 0x40;
    *(undefined4 *)(param_4 + 0x2d0) = 0;
    *(undefined4 *)(param_4 + 0x2cc) = 0;
    *(undefined4 *)(param_4 + 0x2dc) = 0;
    *(undefined4 *)(param_4 + 0x2f0) = 0x20;
    *(undefined4 *)(param_4 + 0x2e8) = 0;
    *(undefined4 *)(param_4 + 0x2e4) = 0;
    *(undefined4 *)(param_4 + 0x2f4) = 0;
    *(undefined4 *)(param_4 + 0x318) = 0x10000;
    *(undefined1 *)(param_4 + 0x2e0) = 0;
    *(undefined1 *)(param_4 + 0x2f8) = 0;
    *(undefined1 *)(param_4 + 0x324) = 0;
    *(undefined8 *)(param_4 + 0x31c) = 0;
    if ((*(byte *)(param_3 + 0x38e) & 0xc) < 4) {
      *(undefined1 *)(param_3 + 0x36e) = 0;
    }
    if (*(byte *)(param_3 + 0x38e) < 0x40) {
      *(undefined1 *)(param_3 + 0x372) = 0;
    }
    *(undefined1 *)(param_3 + 0x37e) = 0;
    *(byte *)(param_4 + 0x2a4) = *(byte *)(param_4 + 0x2a4) | 6;
  }
  if (param_2[2] != '\0') {
    param_1 = FUN_1005a9adc(param_3);
  }
  if ((*param_2 == -1) || (param_2[3] == '\x14')) {
    *(undefined1 *)(param_4 + 0x324) = 1;
  }
  if ((*(byte *)(param_5 + 0x400) & 1) == 0) {
    if (*(char *)(param_4 + 0x324) != '\0') {
      *(undefined4 *)(param_4 + 0x2d8) = 0;
    }
  }
  else if (*(char *)(param_4 + 0x2e0) == '\0') {
    param_1 = FUN_1005a9888(param_1,param_4 + 0x2cc,param_4,*(undefined1 *)(param_5 + 0x401),
                            param_5 + 0x402,*(byte *)(param_5 + 0x400),
                            *(undefined1 *)(param_5 + 0x453),*(undefined1 *)(param_5 + 0x454),
                            *(undefined1 *)(param_5 + 0x452));
  }
  if (((*(byte *)(param_5 + 0x457) & 1) != 0) && (*(char *)(param_4 + 0x2f8) == '\0')) {
    FUN_1005a9888(param_1,param_4 + 0x2e4,param_4,*(undefined1 *)(param_5 + 0x458),param_5 + 0x45a,
                  *(byte *)(param_5 + 0x457),*(undefined1 *)(param_5 + 0x4ab),
                  *(undefined1 *)(param_5 + 0x4ac),*(undefined1 *)(param_5 + 0x4aa));
  }
  if (*(char *)(param_4 + 0x324) != '\0') {
    iVar2 = *(int *)(param_4 + 0x318) - (uint)*(ushort *)(param_5 + 0x50c);
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_4 + 0x318) = iVar1;
    *(byte *)(param_4 + 0x2a4) = *(byte *)(param_4 + 0x2a4) | 2;
  }
  return 0;
}




undefined8 FUN_1005a9e14(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 *local_68;
  
  iVar20 = *(int *)(param_1 + 0x4e0);
  iVar18 = iVar20 * *(int *)(param_1 + 0xd10);
  pbVar25 = (byte *)(*(long *)(*(long *)(param_1 + 0x298) +
                               (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10
                              + 8) + (long)iVar18 + (long)iVar18 * 4);
  if (pbVar25 != (byte *)0x0) {
    lVar24 = *(long *)(param_1 + 0x2a8);
    if (lVar24 != 0) {
      lVar23 = (long)(*(int *)(param_1 + 0xd10) + *(int *)(param_1 + 0xd14) * 0x100);
      if (*(char *)(lVar24 + lVar23) != '\0') {
        *(undefined1 *)(param_1 + 0xd01) = 1;
        return 0;
      }
      *(undefined1 *)(lVar24 + lVar23) = 1;
    }
    if (0 < iVar20) {
      lVar24 = 0;
      bVar14 = false;
      lVar23 = param_1;
      do {
        bVar7 = pbVar25[4];
        lVar26 = *(long *)(param_1 + lVar24 * 8 + 0x4e8);
        puVar21 = (undefined8 *)(lVar26 + 8);
        local_68 = (undefined8 *)*puVar21;
        if ((local_68 == puVar21) && (*(undefined8 **)(lVar26 + 0x10) == puVar21)) {
          local_68 = (undefined8 *)&DAT_101dbc130;
          DAT_101dbc3c0 = &DAT_101dbc0f0;
        }
        bVar8 = pbVar25[3];
        bVar15 = bVar8 != 3;
        bVar16 = bVar8 != 5;
        bVar17 = local_68 != (undefined8 *)&DAT_101dbc130;
        if ((pbVar25[1] != 0) && (!bVar17 || bVar16 && bVar15)) {
          *(byte *)(lVar26 + 0x338) = pbVar25[1] - 1;
        }
        bVar9 = *pbVar25;
        if ((!bVar17 || bVar16 && bVar15) && 1 < (byte)(bVar9 + 1)) {
          *(byte *)(lVar26 + 0x339) = bVar9 - 1;
        }
        bVar10 = *(byte *)(lVar26 + 0x338);
        if ((int)(uint)bVar10 < *(int *)(param_1 + 0xa10)) {
          puVar27 = (undefined *)(*(long *)(param_1 + 0xa18) + (ulong)bVar10 * 0x618);
          puVar21 = &DAT_101dbc0f0;
          if ((ulong)(byte)puVar27[(ulong)*(byte *)(lVar26 + 0x339) + 0x3a0] < 0x10) {
            puVar21 = (undefined8 *)
                      (*(long *)(param_1 + 0xa18) + (ulong)bVar10 * 0x618 +
                       (ulong)(byte)puVar27[(ulong)*(byte *)(lVar26 + 0x339) + 0x3a0] * 0x38 + 0x20)
            ;
          }
          if (!bVar17 || bVar16 && bVar15) {
            local_68[0x52] = puVar21;
          }
        }
        else {
          puVar21 = &DAT_101dbc0f0;
          DAT_101dbc0f0 = 0;
          puVar27 = &DAT_101dbc7f8;
        }
        iVar20 = *(int *)((long)local_68 + 0x2ac);
        uVar4 = *(undefined4 *)(local_68 + 0x55);
        uVar5 = *(undefined4 *)(local_68 + 0x56);
        if (*(char *)(lVar26 + 0x340) == '\a' && bVar8 != 7) {
          *(int *)((long)local_68 + 0x2ac) = *(int *)((long)local_68 + 0x2b4) + iVar20;
        }
        *(byte *)(lVar26 + 0x340) = bVar8;
        *(undefined4 *)((long)local_68 + 0x2b4) = 0;
        *(undefined1 *)((long)local_68 + 0x2a4) = 0;
        if (1 < (byte)(bVar9 + 1)) {
          if (((!bVar17 || bVar16 && bVar15) || local_68 == (undefined8 *)&DAT_101dbc130) &&
             (local_68 == (undefined8 *)&DAT_101dbc130)) {
            lVar23 = FUN_1005d9420(param_1,lVar26,puVar21,&local_68);
          }
          if (local_68 == (undefined8 *)0x0) {
            local_68 = (undefined8 *)&DAT_101dbc130;
            DAT_101dbc3c0 = &DAT_101dbc0f0;
          }
          uVar22 = *(int *)(puVar21 + 3) + (uint)*pbVar25 + 0xff;
          *(char *)(lVar26 + 0x33b) = (char)uVar22;
          uVar22 = uVar22 & 0xff;
          if ((*(byte *)(param_1 + 0xcfe) & 1) == 0) {
            iVar6 = *(int *)((long)puVar21 + 0x1c);
            iVar18 = *(int *)(&DAT_10186d530 + (ulong)uVar22 * 4);
            *(int *)(lVar26 + 0x33c) = iVar18;
            if ((uVar22 == 0) || (-1 < iVar6)) {
              iVar6 = (*(int *)(&DAT_10186d530 + (ulong)(uVar22 + 1) * 4) - iVar18) * iVar6;
              iVar13 = iVar6 + 0x7f;
              if (-1 < iVar6) {
                iVar13 = iVar6;
              }
              iVar13 = iVar13 >> 7;
            }
            else {
              iVar13 = -(iVar6 * (iVar18 - *(int *)(&DAT_10186d52c + (ulong)uVar22 * 4)));
              iVar6 = iVar13 + 0x7f;
              if (-1 < iVar13) {
                iVar6 = iVar13;
              }
              iVar13 = -(iVar6 >> 7);
            }
            iVar18 = iVar18 + iVar13;
            *(int *)(lVar26 + 0x33c) = iVar18;
          }
          else {
            iVar18 = *(int *)((long)puVar21 + 0x1c);
            if (iVar18 < 0) {
              iVar18 = iVar18 + 1;
            }
            iVar18 = (uVar22 * -0x40 + 0x1e00) - (iVar18 >> 1);
            *(int *)(lVar26 + 0x33c) = iVar18;
          }
          if ((pbVar25[3] != 3) && (pbVar25[3] != 5)) {
            *(int *)(local_68 + 0x55) = iVar18;
          }
          *(undefined1 *)((long)local_68 + 0x2a4) = 8;
        }
        *(undefined4 *)(local_68 + 0x57) = 0;
        *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) | 3;
        FUN_1005a9c6c(lVar23,pbVar25,lVar26,local_68,puVar27,puVar21);
        if (0x20 < pbVar25[3] - 1) goto switchD_1005aa360_caseD_12;
        bVar9 = bVar7 >> 4;
        uVar22 = (uint)bVar9;
        uVar19 = bVar7 & 0xf;
        bVar8 = (byte)uVar19;
        switch((uint)pbVar25[3]) {
        case 1:
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x35e) = pbVar25[4];
          }
          break;
        case 2:
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x35d) = pbVar25[4];
          }
          break;
        case 3:
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x36c) = pbVar25[4];
          }
          *(undefined4 *)(lVar26 + 0x368) = *(undefined4 *)(lVar26 + 0x33c);
          bVar15 = !bVar16 || !bVar15;
          goto joined_r0x0001005aa3d0;
        case 4:
          if (uVar22 != 0) {
            *(byte *)(lVar26 + 0x36f) = bVar9;
          }
          if ((bVar7 & 0xf) != 0) {
            *(byte *)(lVar26 + 0x370) = bVar8;
          }
          goto LAB_1005aa408;
        case 5:
          *(undefined4 *)(lVar26 + 0x368) = *(undefined4 *)(lVar26 + 0x33c);
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x361) = pbVar25[4];
          }
          bVar15 = !bVar16 || !bVar15;
joined_r0x0001005aa3d0:
          if (bVar17 && bVar15) {
            *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) & 0xf7;
          }
          *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) & 0xfe;
          break;
        case 6:
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x361) = pbVar25[4];
          }
LAB_1005aa408:
          FUN_1005a96a4(lVar26);
          break;
        case 7:
          if (uVar22 != 0) {
            *(byte *)(lVar26 + 0x373) = bVar9;
          }
          if ((bVar7 & 0xf) != 0) {
            *(byte *)(lVar26 + 0x374) = bVar8;
          }
          break;
        case 8:
          uVar19 = (uint)pbVar25[4];
LAB_1005aa434:
          *(uint *)(local_68 + 0x56) = uVar19;
          *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) | 4;
          break;
        case 9:
          bVar7 = pbVar25[4];
          uVar22 = (uint)bVar7;
          if (bVar7 == 0) {
            uVar22 = *(uint *)(lVar26 + 0x350);
          }
          else {
            *(uint *)(lVar26 + 0x350) = (uint)bVar7;
          }
          if (uVar22 << 8 < (uint)(*(int *)((long)puVar21 + 0x14) + *(int *)(puVar21 + 2))) {
            *(uint *)(local_68 + 0x58) = uVar22 << 8;
          }
          else {
            *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) & 0xd7 | 0x20;
          }
          break;
        case 10:
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x361) = pbVar25[4];
          }
          break;
        case 0xb:
          bVar7 = pbVar25[4];
          *(uint *)(param_1 + 0xd24) = (uint)bVar7;
          *(undefined4 *)(param_1 + 0xd20) = 0;
          bVar14 = true;
          if (*(int *)(param_1 + 0xa04) <= (int)(uint)bVar7) {
            *(undefined4 *)(param_1 + 0xd24) = 0;
            *(undefined1 *)(param_1 + 0xd01) = 1;
          }
          break;
        case 0xc:
          *(uint *)((long)local_68 + 0x2ac) = (uint)pbVar25[4];
          *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) | 2;
          break;
        case 0xd:
          uVar19 = uVar19 + uVar22 * 10;
          uVar22 = 0;
          if (uVar19 < 0x40) {
            uVar22 = uVar19;
          }
          *(uint *)(param_1 + 0xd20) = uVar22;
          if (bVar14) {
            iVar20 = *(int *)(param_1 + 0xd24);
          }
          else {
            iVar20 = *(int *)(param_1 + 0xd14) + 1;
            *(int *)(param_1 + 0xd24) = iVar20;
          }
          if (*(int *)(param_1 + 0xa04) <= iVar20) {
            *(undefined4 *)(param_1 + 0xd24) = 0;
          }
          break;
        case 0xe:
          switch(uVar22) {
          case 1:
            if ((bVar7 & 0xf) == 0) {
              uVar19 = (uint)*(byte *)(lVar26 + 0x394);
            }
            else {
              *(byte *)(lVar26 + 0x394) = bVar8;
            }
            iVar20 = *(int *)(local_68 + 0x55) + uVar19 * -4;
            goto LAB_1005aa7c8;
          case 2:
            if ((bVar7 & 0xf) == 0) {
              uVar19 = (uint)*(byte *)(lVar26 + 0x395);
            }
            else {
              *(byte *)(lVar26 + 0x395) = bVar8;
            }
            iVar20 = *(int *)(local_68 + 0x55) + uVar19 * 4;
LAB_1005aa7c8:
            *(int *)(local_68 + 0x55) = iVar20;
            break;
          case 4:
            *(byte *)(lVar26 + 0x38e) = *(byte *)(lVar26 + 0x38e) & 0xf0 | bVar8;
            break;
          case 5:
            *(uint *)((long)puVar21 + 0x1c) = uVar19;
            break;
          case 6:
            if ((bVar7 & 0xf) == 0) {
              *(undefined4 *)(lVar26 + 900) = *(undefined4 *)(param_1 + 0xd10);
            }
            else {
              if (*(int *)(lVar26 + 0x388) != 0) {
                uVar19 = *(int *)(lVar26 + 0x388) - 1;
              }
              *(uint *)(lVar26 + 0x388) = uVar19;
              if (uVar19 != 0) {
                iVar20 = *(int *)(lVar26 + 900);
                *(int *)(param_1 + 0xd20) = iVar20;
                if ((*(long *)(param_1 + 0x2a8) != 0) && (iVar20 <= *(int *)(param_1 + 0xd10))) {
                  _bzero((void *)(*(long *)(param_1 + 0x2a8) +
                                 (long)iVar20 + (long)(*(int *)(param_1 + 0xd14) << 8)),
                         (ulong)(uint)(*(int *)(param_1 + 0xd10) - iVar20) + 1);
                }
              }
            }
            break;
          case 7:
            *(byte *)(lVar26 + 0x38e) = bVar7 << 4 | *(byte *)(lVar26 + 0x38e) & 0xf;
            break;
          case 8:
            uVar19 = uVar19 << 4;
            goto LAB_1005aa434;
          case 10:
            if ((bVar7 & 0xf) == 0) {
              uVar19 = (uint)*(byte *)(lVar26 + 0x393);
            }
            else {
              *(byte *)(lVar26 + 0x393) = bVar8;
            }
            iVar20 = *(int *)((long)local_68 + 0x2ac) + uVar19;
            iVar18 = 0x40;
            if (iVar20 < 0x41) {
              iVar18 = iVar20;
            }
            goto LAB_1005aa01c;
          case 0xb:
            if ((bVar7 & 0xf) == 0) {
              uVar19 = (uint)*(byte *)(lVar26 + 0x393);
            }
            else {
              *(byte *)(lVar26 + 0x393) = bVar8;
            }
            iVar20 = *(int *)((long)local_68 + 0x2ac) - uVar19;
            iVar18 = 0;
            if (-1 < iVar20) {
              iVar18 = iVar20;
            }
LAB_1005aa01c:
            *(int *)((long)local_68 + 0x2ac) = iVar18;
            goto LAB_1005aa76c;
          case 0xd:
            *(int *)((long)local_68 + 0x2ac) = iVar20;
            *(undefined4 *)(local_68 + 0x55) = uVar4;
            *(undefined4 *)(local_68 + 0x56) = uVar5;
            *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) & 0xf0;
            break;
          case 0xe:
            *(uint *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd08) * uVar19;
          }
          break;
        case 0xf:
          bVar7 = pbVar25[4];
          if (bVar7 < 0x20) {
            if (bVar7 != 0) {
              *(uint *)(param_1 + 0xd08) = (uint)bVar7;
            }
          }
          else {
            FUN_1005d93c8(param_1);
          }
          break;
        case 0x10:
          uVar22 = 0x40;
          if (pbVar25[4] < 0x41) {
            uVar22 = (uint)pbVar25[4];
          }
          *(uint *)(param_1 + 0xcf8) = uVar22;
          goto LAB_1005aa76c;
        case 0x11:
          if (pbVar25[4] != 0) {
            *(byte *)(param_1 + 0xcfc) = pbVar25[4];
          }
          break;
        case 0x15:
          if ((puVar27[0x400] & 1) != 0) {
            bVar7 = pbVar25[4];
            iVar20 = 2;
            lVar23 = 0;
            do {
              lVar2 = lVar23 + 1;
              lVar1 = (long)iVar20;
              bVar8 = puVar27[0x401];
              iVar20 = iVar20 + 2;
              bVar15 = lVar23 < (long)(ulong)bVar8;
              lVar23 = lVar2;
            } while (*(ushort *)(puVar27 + lVar1 * 2 + 0x402) < (ushort)bVar7 && bVar15);
            iVar20 = (int)lVar2 + -1;
            *(int *)(local_68 + 0x5a) = iVar20;
            iVar18 = bVar8 - 1;
            if (iVar20 < iVar18) {
              iVar18 = 0;
              *(undefined1 *)(local_68 + 0x5c) = 0;
              *(uint *)((long)local_68 + 0x2cc) = (uint)bVar7;
              uVar11 = *(ushort *)(puVar27 + (long)(iVar20 * 2) * 2 + 0x402);
              uVar12 = *(ushort *)(puVar27 + (long)(int)(iVar20 * 2 | 1) * 2 + 0x402);
              iVar20 = (uint)*(ushort *)
                              (puVar27 + (long)(*(int *)(local_68 + 0x5a) * 2 + 2) * 2 + 0x402) -
                       (uint)uVar11;
              if (iVar20 != 0) {
                iVar18 = 0;
                if (iVar20 != 0) {
                  iVar18 = (int)((uint)*(ushort *)
                                        (puVar27 +
                                        (long)(*(int *)(local_68 + 0x5a) * 2 + 3) * 2 + 0x402) *
                                 0x10000 + (uint)uVar12 * -0x10000) / iVar20;
                }
              }
              *(int *)((long)local_68 + 0x2dc) = iVar18;
              iVar20 = (uint)uVar12 * 0x10000 +
                       *(int *)((long)local_68 + 0x2dc) *
                       (*(int *)((long)local_68 + 0x2cc) - (uint)uVar11);
              *(int *)((long)local_68 + 0x2d4) = iVar20;
              *(int *)(local_68 + 0x5b) = iVar20 >> 0x10;
              *(int *)(local_68 + 0x5a) = *(int *)(local_68 + 0x5a) + 1;
            }
            else {
              *(uint *)(local_68 + 0x5b) =
                   (uint)*(ushort *)(puVar27 + (long)(int)(iVar18 * 2 | 1) * 2 + 0x402);
              *(undefined1 *)(local_68 + 0x5c) = 1;
            }
          }
          break;
        case 0x19:
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x362) = pbVar25[4];
            *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) | 4;
          }
          break;
        case 0x1b:
          if (pbVar25[4] != 0) {
            *(byte *)(lVar26 + 0x363) = bVar9;
            *(byte *)(lVar26 + 0x364) = bVar8;
          }
          break;
        case 0x1d:
          if (pbVar25[4] == 0) {
            uVar22 = (uint)*(byte *)(lVar26 + 0x37f);
          }
          else {
            uVar22 = uVar22 + 1;
            *(char *)(lVar26 + 0x37f) = (char)uVar22;
            *(byte *)(lVar26 + 0x380) = bVar8 + 1;
          }
          bVar7 = *(byte *)(lVar26 + 0x37e);
          if (uVar22 <= bVar7) {
            *(int *)((long)local_68 + 0x2b4) = -*(int *)((long)local_68 + 0x2ac);
          }
          uVar19 = bVar7 + 1;
          *(char *)(lVar26 + 0x37e) = (char)uVar19;
          cVar3 = '\0';
          if ((uVar19 & 0xff) < *(byte *)(lVar26 + 0x380) + uVar22) {
            cVar3 = bVar7 + 1;
          }
          *(char *)(lVar26 + 0x37e) = cVar3;
LAB_1005aa76c:
          *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) | 2;
          break;
        case 0x21:
          if (uVar22 == 2) {
            if ((bVar7 & 0xf) == 0) {
              uVar19 = (uint)*(byte *)(lVar26 + 0x35f);
            }
            else {
              *(byte *)(lVar26 + 0x35f) = bVar8;
            }
            iVar20 = *(int *)(local_68 + 0x55) + uVar19;
          }
          else {
            if (uVar22 != 1) break;
            if ((bVar7 & 0xf) == 0) {
              uVar19 = (uint)*(byte *)(lVar26 + 0x360);
            }
            else {
              *(byte *)(lVar26 + 0x360) = bVar8;
            }
            iVar20 = *(int *)(local_68 + 0x55) - uVar19;
          }
          goto LAB_1005aa7c8;
        }
switchD_1005aa360_caseD_12:
        lVar23 = FUN_1005a99cc(lVar26,puVar27);
        if (param_2 != 0) {
          lVar23 = FUN_1005a94a8(param_1,lVar26,*(undefined8 *)(lVar26 + 8),puVar21);
        }
        lVar24 = lVar24 + 1;
        pbVar25 = pbVar25 + 5;
      } while (lVar24 < *(int *)(param_1 + 0x4e0));
    }
  }
  return 0;
}




undefined8 FUN_1005aa8f0(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 *local_68;
  
  iVar6 = *(int *)(param_1 + 0x4e0) * *(int *)(param_1 + 0xd10);
  lVar16 = *(long *)(*(long *)(param_1 + 0x298) +
                     (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10 + 8) +
           (long)iVar6 + (long)iVar6 * 4;
  if (lVar16 != 0 && 0 < *(int *)(param_1 + 0x4e0)) {
    lVar19 = 0;
    lVar5 = param_1;
    do {
      lVar17 = *(long *)(param_1 + lVar19 * 8 + 0x4e8);
      puVar7 = (undefined8 *)(lVar17 + 8);
      local_68 = (undefined8 *)*puVar7;
      if ((local_68 == puVar7) && (*(undefined8 **)(lVar17 + 0x10) == puVar7)) {
        local_68 = (undefined8 *)&DAT_101dbc130;
      }
      bVar11 = *(byte *)(lVar17 + 0x338);
      if ((int)(uint)bVar11 < *(int *)(param_1 + 0xa10)) {
        puVar18 = (undefined *)(*(long *)(param_1 + 0xa18) + (ulong)bVar11 * 0x618);
        if ((ulong)(byte)puVar18[(ulong)*(byte *)(lVar17 + 0x339) + 0x3a0] < 0x10) {
          puVar7 = (undefined8 *)
                   (*(long *)(param_1 + 0xa18) + (ulong)bVar11 * 0x618 +
                    (ulong)(byte)puVar18[(ulong)*(byte *)(lVar17 + 0x339) + 0x3a0] * 0x38 + 0x20);
        }
        else {
          puVar7 = &DAT_101dbc0f0;
        }
      }
      else {
        DAT_101dbc0f0 = 0;
        puVar18 = &DAT_101dbc7f8;
        puVar7 = &DAT_101dbc0f0;
      }
      bVar11 = *(byte *)(lVar16 + 3);
      bVar3 = *(byte *)(lVar16 + 4);
      *(undefined4 *)((long)local_68 + 0x2b4) = 0;
      *(undefined4 *)(local_68 + 0x57) = 0;
      *(undefined1 *)((long)local_68 + 0x2a4) = 0;
      if (((puVar18[0x400] & 1) != 0) && (*(char *)(local_68 + 0x5c) == '\0')) {
        lVar5 = FUN_1005a9888(lVar5,(undefined *)((long)local_68 + 0x2cc),local_68,puVar18[0x401],
                              puVar18 + 0x402,puVar18[0x400],puVar18[0x453],puVar18[0x454],
                              puVar18[0x452]);
      }
      if (((puVar18[0x457] & 1) != 0) && (*(char *)(local_68 + 0x5f) == '\0')) {
        lVar5 = FUN_1005a9888(lVar5,(undefined *)((long)local_68 + 0x2e4),local_68,puVar18[0x458],
                              puVar18 + 0x45a,puVar18[0x457],puVar18[0x4ab],puVar18[0x4ac],
                              puVar18[0x4aa]);
      }
      if (*(char *)((long)local_68 + 0x324) != '\0') {
        iVar6 = 0;
        if (-1 < (int)(*(int *)(local_68 + 99) - (uint)*(ushort *)(puVar18 + 0x50c))) {
          iVar6 = *(int *)(local_68 + 99) - (uint)*(ushort *)(puVar18 + 0x50c);
        }
        *(int *)(local_68 + 99) = iVar6;
        *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) | 2;
      }
      bVar10 = *(byte *)(lVar16 + 2);
      if (9 < (bVar10 >> 4) - 6) goto switchD_1005aabf0_caseD_8;
      uVar12 = (uint)bVar10;
      puVar8 = local_68;
      switch((uint)(bVar10 >> 4)) {
      case 6:
        iVar6 = *(int *)((long)local_68 + 0x2ac) - (bVar10 & 0xf);
        iVar13 = 0;
        if (-1 < iVar6) {
          iVar13 = iVar6;
        }
        goto LAB_1005aac38;
      case 7:
        iVar6 = *(int *)((long)local_68 + 0x2ac) + (uVar12 & 0xf);
        iVar13 = 0x40;
        if (iVar6 < 0x41) {
          iVar13 = iVar6;
        }
LAB_1005aac38:
        *(int *)((long)local_68 + 0x2ac) = iVar13;
        bVar10 = *(byte *)((long)local_68 + 0x2a4) | 2;
LAB_1005aacf4:
        *(byte *)((long)puVar8 + 0x2a4) = bVar10;
        break;
      case 0xb:
        *(byte *)(lVar17 + 0x370) = bVar10 & 0xf;
        lVar5 = FUN_1005a96a4(lVar17);
        cVar1 = *(char *)(lVar17 + 0x36e) + *(char *)(lVar17 + 0x36f);
        *(char *)(lVar17 + 0x36e) = cVar1;
        if ('\x1f' < cVar1) {
          *(char *)(lVar17 + 0x36e) = cVar1 + -0x40;
        }
        break;
      case 0xd:
        iVar6 = *(int *)(local_68 + 0x56) - (uVar12 & 0xf);
        goto LAB_1005aac9c;
      case 0xe:
        iVar6 = *(int *)(local_68 + 0x56) + (uVar12 & 0xf);
LAB_1005aac9c:
        *(int *)(local_68 + 0x56) = iVar6;
        bVar10 = *(byte *)((long)local_68 + 0x2a4) | 4;
        goto LAB_1005aacf4;
      case 0xf:
        puVar8 = *(undefined8 **)(lVar17 + 8);
        iVar6 = *(int *)(puVar8 + 0x55);
        iVar13 = *(int *)(lVar17 + 0x368);
        if (iVar6 < iVar13) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar17 + 0x36c) * 4;
          if (iVar6 <= iVar13) {
            iVar13 = iVar6;
          }
LAB_1005aace8:
          *(int *)(puVar8 + 0x55) = iVar13;
        }
        else if (iVar13 < iVar6) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar17 + 0x36c) * -4;
          if (iVar13 <= iVar6) {
            iVar13 = iVar6;
          }
          goto LAB_1005aace8;
        }
        bVar10 = *(byte *)((long)puVar8 + 0x2a4) | 1;
        goto LAB_1005aacf4;
      }
switchD_1005aabf0_caseD_8:
      if (0x1d < bVar11) goto switchD_1005aad10_caseD_8;
      uVar12 = bVar3 & 0xf;
      uVar14 = (uint)(bVar3 >> 4);
      puVar8 = local_68;
      switch(bVar11) {
      case 0:
        if (*(char *)(lVar16 + 4) != '\0') {
          iVar6 = *(int *)(param_1 + 0xd04) % 3;
          if (iVar6 == 1) {
            if ((*(byte *)(param_1 + 0xcfe) & 1) == 0) {
              uVar9 = (ulong)*(byte *)(lVar17 + 0x33b);
              lVar5 = uVar9 + (bVar3 >> 4);
              iVar6 = *(int *)((long)puVar7 + 0x1c);
              iVar13 = *(int *)(&DAT_10186d530 + lVar5 * 4);
              iVar15 = (int)lVar5;
              if ((iVar6 < 0) && (iVar15 != 0)) {
                iVar4 = -(iVar6 * (iVar13 - *(int *)(&DAT_10186d52c + (long)iVar15 * 4)));
                iVar15 = iVar4 + 0x7f;
                if (-1 < iVar4) {
                  iVar15 = iVar4;
                }
                iVar15 = -(iVar15 >> 7);
              }
              else {
                iVar4 = (*(int *)(&DAT_10186d530 + (ulong)(iVar15 + 1) * 4) - iVar13) * iVar6;
                iVar15 = iVar4 + 0x7f;
                if (-1 < iVar4) {
                  iVar15 = iVar4;
                }
                iVar15 = iVar15 >> 7;
              }
              iVar13 = iVar13 + iVar15;
              iVar15 = *(int *)(&DAT_10186d530 + uVar9 * 4);
              if ((*(byte *)(lVar17 + 0x33b) == 0) || (-1 < iVar6)) {
                iVar6 = (*(int *)(&DAT_10186d534 + uVar9 * 4) - iVar15) * iVar6;
LAB_1005ab340:
                iVar4 = iVar6 + 0x7f;
                if (-1 < iVar6) {
                  iVar4 = iVar6;
                }
                iVar15 = iVar15 + (iVar4 >> 7);
              }
              else {
                iVar6 = iVar6 * (iVar15 - *(int *)(&DAT_10186d52c + uVar9 * 4));
LAB_1005ab31c:
                iVar6 = -iVar6;
                iVar4 = iVar6 + 0x7f;
                if (-1 < iVar6) {
                  iVar4 = iVar6;
                }
                iVar15 = iVar15 - (iVar4 >> 7);
              }
              iVar13 = iVar13 - iVar15;
            }
            else {
              iVar13 = uVar14 * -0x40;
            }
          }
          else {
            if (iVar6 != 2) goto LAB_1005ab35c;
            if ((*(byte *)(param_1 + 0xcfe) & 1) == 0) {
              uVar9 = (ulong)*(byte *)(lVar17 + 0x33b);
              iVar6 = *(int *)((long)puVar7 + 0x1c);
              iVar13 = *(int *)(&DAT_10186d530 + (uVar9 + uVar12) * 4);
              iVar15 = (int)(uVar9 + uVar12);
              if ((iVar6 < 0) && (iVar15 != 0)) {
                iVar4 = -(iVar6 * (iVar13 - *(int *)(&DAT_10186d52c + (long)iVar15 * 4)));
                iVar15 = iVar4 + 0x7f;
                if (-1 < iVar4) {
                  iVar15 = iVar4;
                }
                iVar15 = -(iVar15 >> 7);
              }
              else {
                iVar4 = (*(int *)(&DAT_10186d530 + (ulong)(iVar15 + 1) * 4) - iVar13) * iVar6;
                iVar15 = iVar4 + 0x7f;
                if (-1 < iVar4) {
                  iVar15 = iVar4;
                }
                iVar15 = iVar15 >> 7;
              }
              iVar13 = iVar13 + iVar15;
              iVar15 = *(int *)(&DAT_10186d530 + uVar9 * 4);
              if ((*(byte *)(lVar17 + 0x33b) == 0) || (-1 < iVar6)) {
                iVar6 = (*(int *)(&DAT_10186d534 + uVar9 * 4) - iVar15) * iVar6;
                goto LAB_1005ab340;
              }
              iVar6 = iVar6 * (iVar15 - *(int *)(&DAT_10186d52c + uVar9 * 4));
              goto LAB_1005ab31c;
            }
            iVar13 = uVar12 * -0x40;
          }
          *(int *)(local_68 + 0x57) = iVar13;
          goto LAB_1005ab35c;
        }
        break;
      case 1:
        *(undefined4 *)(local_68 + 0x57) = 0;
        iVar13 = *(int *)(local_68 + 0x55) + (uint)*(byte *)(lVar17 + 0x35e) * -4;
        iVar6 = 0x38;
        if (0x37 < iVar13) {
          iVar6 = iVar13;
        }
        *(int *)(local_68 + 0x55) = iVar6;
        goto LAB_1005ab35c;
      case 2:
        *(undefined4 *)(local_68 + 0x57) = 0;
        *(uint *)(local_68 + 0x55) = *(int *)(local_68 + 0x55) + (uint)*(byte *)(lVar17 + 0x35d) * 4
        ;
        goto LAB_1005ab35c;
      case 3:
        *(undefined4 *)(local_68 + 0x57) = 0;
        puVar8 = *(undefined8 **)(lVar17 + 8);
        iVar6 = *(int *)(puVar8 + 0x55);
        iVar13 = *(int *)(lVar17 + 0x368);
        if (iVar6 < iVar13) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar17 + 0x36c) * 4;
          if (iVar6 <= iVar13) {
            iVar13 = iVar6;
          }
          *(int *)(puVar8 + 0x55) = iVar13;
        }
        else if (iVar13 < iVar6) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar17 + 0x36c) * -4;
          if (iVar13 <= iVar6) {
            iVar13 = iVar6;
          }
          *(int *)(puVar8 + 0x55) = iVar13;
        }
LAB_1005ab35c:
        bVar11 = *(byte *)((long)puVar8 + 0x2a4) | 1;
        goto LAB_1005ab364;
      case 4:
        FUN_1005a96a4(lVar17);
        cVar1 = *(char *)(lVar17 + 0x36e) + *(char *)(lVar17 + 0x36f);
        *(char *)(lVar17 + 0x36e) = cVar1;
        if ('\x1f' < cVar1) {
          *(char *)(lVar17 + 0x36e) = cVar1 + -0x40;
        }
        break;
      case 5:
        *(undefined4 *)(local_68 + 0x57) = 0;
        lVar5 = *(long *)(lVar17 + 8);
        iVar6 = *(int *)(lVar5 + 0x2a8);
        iVar13 = *(int *)(lVar17 + 0x368);
        if (iVar6 < iVar13) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar17 + 0x36c) * 4;
          if (iVar6 <= iVar13) {
            iVar13 = iVar6;
          }
LAB_1005ab054:
          *(int *)(lVar5 + 0x2a8) = iVar13;
        }
        else if (iVar13 < iVar6) {
          iVar6 = iVar6 + (uint)*(byte *)(lVar17 + 0x36c) * -4;
          if (iVar13 <= iVar6) {
            iVar13 = iVar6;
          }
          goto LAB_1005ab054;
        }
        *(byte *)(lVar5 + 0x2a4) = *(byte *)(lVar5 + 0x2a4) | 1;
        bVar11 = *(byte *)(lVar17 + 0x361);
        if (bVar11 >> 4 == 0) {
          if ((bVar11 & 0xf) != 0) {
            iVar13 = *(int *)((long)local_68 + 0x2ac) - (bVar11 & 0xf);
            iVar6 = 0;
            if (-1 < iVar13) {
              iVar6 = iVar13;
            }
            *(int *)((long)local_68 + 0x2ac) = iVar6;
          }
        }
        else {
          iVar6 = *(int *)((long)local_68 + 0x2ac) + (uint)(bVar11 >> 4);
          iVar13 = 0x40;
          if (iVar6 < 0x41) {
            iVar13 = iVar6;
          }
          *(int *)((long)local_68 + 0x2ac) = iVar13;
        }
        goto LAB_1005ab184;
      case 6:
        FUN_1005a96a4(lVar17);
        cVar1 = *(char *)(lVar17 + 0x36e) + *(char *)(lVar17 + 0x36f);
        cVar2 = cVar1 + -0x40;
        if (cVar1 < ' ') {
          cVar2 = cVar1;
        }
        *(char *)(lVar17 + 0x36e) = cVar2;
        bVar11 = *(byte *)(lVar17 + 0x361);
        if (bVar11 >> 4 == 0) {
          if ((bVar11 & 0xf) != 0) {
            iVar13 = *(int *)((long)local_68 + 0x2ac) - (bVar11 & 0xf);
            iVar6 = 0;
            if (-1 < iVar13) {
              iVar6 = iVar13;
            }
            *(int *)((long)local_68 + 0x2ac) = iVar6;
          }
        }
        else {
          iVar6 = *(int *)((long)local_68 + 0x2ac) + (uint)(bVar11 >> 4);
          iVar13 = 0x40;
          if (iVar6 < 0x41) {
            iVar13 = iVar6;
          }
          *(int *)((long)local_68 + 0x2ac) = iVar13;
        }
        goto LAB_1005ab184;
      case 7:
        FUN_1005a9788(lVar17);
        break;
      case 10:
        bVar11 = *(byte *)(lVar17 + 0x361);
        if (bVar11 >> 4 == 0) {
          if ((bVar11 & 0xf) != 0) {
            iVar13 = *(int *)((long)local_68 + 0x2ac) - (bVar11 & 0xf);
            iVar6 = 0;
            if (-1 < iVar13) {
              iVar6 = iVar13;
            }
            *(int *)((long)local_68 + 0x2ac) = iVar6;
          }
        }
        else {
          iVar6 = *(int *)((long)local_68 + 0x2ac) + (uint)(bVar11 >> 4);
          iVar13 = 0x40;
          if (iVar6 < 0x41) {
            iVar13 = iVar6;
          }
          *(int *)((long)local_68 + 0x2ac) = iVar13;
        }
        goto LAB_1005ab184;
      case 0xe:
        if (uVar14 == 9) {
          if ((bVar3 & 0xf) != 0) {
            iVar6 = 0;
            if ((bVar3 & 0xf) != 0) {
              iVar6 = *(int *)(param_1 + 0xd04) / (int)uVar12;
            }
            if (*(int *)(param_1 + 0xd04) != iVar6 * uVar12) break;
            bVar11 = *(byte *)((long)local_68 + 0x2a4) | 0xb;
            goto LAB_1005ab364;
          }
        }
        else if (uVar14 == 0xd) {
          if (*(uint *)(param_1 + 0xd04) == uVar12) {
            if (local_68 == (undefined8 *)&DAT_101dbc130) {
              lVar5 = FUN_1005d9420(param_1,lVar17,puVar7,&local_68);
            }
            *(undefined4 *)(local_68 + 0x55) = *(undefined4 *)(lVar17 + 0x33c);
            *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) | 9;
            FUN_1005a9c6c(lVar5,lVar16,lVar17,local_68,puVar18,puVar7);
          }
          else {
            *(byte *)((long)local_68 + 0x2a4) = *(byte *)((long)local_68 + 0x2a4) & 0xf0;
          }
        }
        else if ((uVar14 == 0xc) && (*(uint *)(param_1 + 0xd04) == uVar12)) {
          *(undefined4 *)((long)local_68 + 0x2ac) = 0;
          goto LAB_1005ab184;
        }
        break;
      case 0x11:
        bVar11 = *(byte *)(param_1 + 0xcfc);
        if (bVar11 >> 4 == 0) {
          if ((bVar11 & 0xf) != 0) {
            iVar13 = *(int *)(param_1 + 0xcf8) - (bVar11 & 0xf);
            iVar6 = 0;
            if (-1 < iVar13) {
              iVar6 = iVar13;
            }
            *(int *)(param_1 + 0xcf8) = iVar6;
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0xcf8) + (uint)(bVar11 >> 4);
          iVar13 = 0x40;
          if (iVar6 < 0x41) {
            iVar13 = iVar6;
          }
          *(int *)(param_1 + 0xcf8) = iVar13;
        }
        break;
      case 0x19:
        bVar11 = *(byte *)(lVar17 + 0x362);
        if (bVar11 >> 4 == 0) {
          if ((bVar11 & 0xf) != 0) {
            iVar6 = *(int *)(local_68 + 0x56) - (bVar11 & 0xf);
            iVar13 = 0;
            if (-1 < iVar6) {
              iVar13 = iVar6;
            }
            goto LAB_1005ab110;
          }
        }
        else {
          iVar6 = *(int *)(local_68 + 0x56) + (uint)(bVar11 >> 4);
          iVar13 = 0xff;
          if (iVar6 < 0x100) {
            iVar13 = iVar6;
          }
LAB_1005ab110:
          *(int *)(local_68 + 0x56) = iVar13;
        }
        bVar11 = *(byte *)((long)local_68 + 0x2a4) | 4;
        goto LAB_1005ab364;
      case 0x1b:
        bVar11 = *(byte *)(lVar17 + 0x364);
        if (bVar11 == 0) break;
        iVar6 = 0;
        if (bVar11 != 0) {
          iVar6 = *(int *)(param_1 + 0xd04) / (int)(uint)bVar11;
        }
        if (*(int *)(param_1 + 0xd04) != iVar6 * (uint)bVar11) break;
        if (*(char *)(lVar17 + 0x363) != '\0') {
          switch(*(char *)(lVar17 + 0x363)) {
          case '\x01':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + -1;
            break;
          case '\x02':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + -2;
            break;
          case '\x03':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + -4;
            break;
          case '\x04':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + -8;
            break;
          case '\x05':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + -0x10;
            break;
          case '\x06':
            iVar6 = (*(int *)((long)local_68 + 0x2ac) << 1) / 3;
            break;
          case '\a':
            iVar6 = *(int *)((long)local_68 + 0x2ac) >> 1;
            break;
          default:
            iVar6 = *(int *)((long)local_68 + 0x2ac);
            goto LAB_1005aaa5c;
          case '\t':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + 1;
            break;
          case '\n':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + 2;
            break;
          case '\v':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + 4;
            break;
          case '\f':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + 8;
            break;
          case '\r':
            iVar6 = *(int *)((long)local_68 + 0x2ac) + 0x10;
            break;
          case '\x0e':
            iVar6 = *(int *)((long)local_68 + 0x2ac) * 3;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 1;
            }
            iVar6 = iVar6 >> 1;
            break;
          case '\x0f':
            iVar6 = *(int *)((long)local_68 + 0x2ac) << 1;
          }
          *(int *)((long)local_68 + 0x2ac) = iVar6;
LAB_1005aaa5c:
          if (iVar6 < 0x41) {
            if (iVar6 < 0) {
              *(undefined4 *)((long)local_68 + 0x2ac) = 0;
            }
          }
          else {
            *(undefined4 *)((long)local_68 + 0x2ac) = 0x40;
          }
        }
        bVar11 = *(byte *)((long)local_68 + 0x2a4) | 10;
        goto LAB_1005ab364;
      case 0x1d:
        bVar11 = *(byte *)(lVar17 + 0x37e);
        bVar3 = *(byte *)(lVar17 + 0x37f);
        if ((uint)bVar3 <= (uint)bVar11) {
          *(int *)((long)local_68 + 0x2b4) = -*(int *)((long)local_68 + 0x2ac);
        }
        uVar12 = bVar11 + 1;
        *(char *)(lVar17 + 0x37e) = (char)uVar12;
        cVar1 = '\0';
        if ((uVar12 & 0xff) < (uint)*(byte *)(lVar17 + 0x380) + (uint)bVar3) {
          cVar1 = bVar11 + 1;
        }
        *(char *)(lVar17 + 0x37e) = cVar1;
LAB_1005ab184:
        bVar11 = *(byte *)((long)local_68 + 0x2a4) | 2;
        puVar8 = local_68;
LAB_1005ab364:
        *(byte *)((long)puVar8 + 0x2a4) = bVar11;
      }
switchD_1005aad10_caseD_8:
      FUN_1005a99cc(lVar17,puVar18);
      lVar5 = FUN_1005a94a8(param_1,lVar17,*(undefined8 *)(lVar17 + 8),puVar7);
      lVar19 = lVar19 + 1;
      lVar16 = lVar16 + 5;
    } while (lVar19 < *(int *)(param_1 + 0x4e0));
  }
  return 0;
}




void FUN_1005ab49c(undefined4 *param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  short *psVar5;
  undefined4 *puVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 in_x7;
  char cVar20;
  ushort uVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  char *pcVar25;
  short sVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long local_2f8;
  char *local_2e8;
  uint local_2e0;
  long local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined8 local_2c8;
  void *local_2c0;
  undefined1 auStack_2b8 [7];
  byte local_2b1;
  uint local_2b0;
  undefined1 auStack_2ac [4];
  int local_2a8;
  ushort local_2a2;
  int local_2a0;
  byte local_299;
  undefined1 auStack_298 [6];
  ushort local_292;
  short local_290;
  char local_28d;
  undefined4 local_28c;
  int local_288;
  ushort local_282;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 auStack_17e [22];
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar31 = *(long *)PTR____stack_chk_guard_101444218;
  local_282 = 0;
  plVar15 = *(long **)(param_1 + 100);
  local_68 = lVar31;
  if ((*(uint *)((long)plVar15 + 0x1a4) & 1) == 0) {
    uVar16 = 0x13;
  }
  else {
    param_1[0x14] = 0x10;
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
    uVar16 = (**(code **)(*plVar15 + 0x18))(plVar15,&local_28c);
    if ((((int)uVar16 == 0) &&
        (uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0), (int)uVar16 == 0)) &&
       (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_168,1,0x11,0),
       (int)uVar16 == 0)) {
      iVar13 = FUN_1005ed0f8(auStack_168,"Extended Module: ",0x11);
      if (iVar13 == 0) {
        _bzero(param_1 + 0x13a,0x200);
        *(undefined8 *)(param_1 + 0xa6) = 0;
        param_1[0x33c] = 0x3f800000;
        param_1[0x33b] = 0x3f800000;
        param_1[0x25e] = 6;
        param_1[0x25f] = 0x7d;
        *(undefined1 *)(param_1 + 0x280) = 0x40;
        param_1[0x282] = 0;
        param_1[0x33a] = 0;
        param_1[0x285] = 0;
        uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x14,0);
        if (((int)uVar16 == 0) &&
           (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_28d), (int)uVar16 == 0)) {
          if (local_28d == '\x1a') {
            uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x3c,0);
            if ((((int)uVar16 == 0) &&
                (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_288,4,1,0),
                (int)uVar16 == 0)) &&
               ((uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x281),
                (int)uVar16 == 0 &&
                (uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x33a),
                (int)uVar16 == 0)))) {
              piVar1 = param_1 + 0x138;
              uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar1);
              if (((int)uVar16 == 0) &&
                 (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_282),
                 (int)uVar16 == 0)) {
                piVar2 = param_1 + 0x284;
                uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar2);
                if (((int)uVar16 == 0) &&
                   ((((uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),(long)param_1 + 0xcfe),
                      (int)uVar16 == 0 &&
                      (uVar16 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x25e),
                      (int)uVar16 == 0)) &&
                     (uVar16 = FUN_1005d1bd4(*(undefined8 *)(param_1 + 100),param_1 + 0x25f),
                     (int)uVar16 == 0)) &&
                    ((uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,1,0x100,0
                                            ), (int)uVar16 == 0 &&
                     (uVar16 = FUN_100586684(param_1,9,"Number of channels",piVar1,4,1,0),
                     (int)uVar16 == 0)))))) {
                  if (0 < *piVar1) {
                    lVar32 = 0;
                    do {
                      puVar17 = (undefined8 *)
                                FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x398,
                                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                              ,0x90f,0);
                      puVar17[1] = puVar17 + 1;
                      puVar17[2] = puVar17 + 1;
                      puVar17[3] = 0;
                      FUN_100583c48(puVar17 + 5);
                      *(undefined8 **)(param_1 + lVar32 * 2 + 0x13a) = puVar17;
                      if (puVar17 == (undefined8 *)0x0) {
                        uVar16 = 0x26;
                        goto LAB_1005aba38;
                      }
                      *puVar17 = param_1;
                      lVar32 = lVar32 + 1;
                    } while (lVar32 < (int)param_1[0x138]);
                  }
                  uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_288 + 0x3c,0);
                  if ((int)uVar16 == 0) {
                    uVar22 = 0;
                    param_1[0x282] = 0;
                    if (0 < (int)param_1[0x281]) {
                      uVar22 = 0;
                      lVar32 = 0;
                      do {
                        bVar8 = *(byte *)((long)param_1 + lVar32 + 0x2b0);
                        if (bVar8 < 0xfe && uVar22 <= bVar8) {
                          uVar22 = bVar8 + 1;
                          param_1[0x282] = uVar22;
                        }
                        lVar32 = lVar32 + 1;
                      } while (lVar32 < (int)param_1[0x281]);
                    }
                    if (uVar22 <= local_282) {
                      uVar22 = (uint)local_282;
                    }
                    param_1[0x283] = uVar22;
                    lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar22 << 4,
                                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                           ,0x92f,0);
                    *(long *)(param_1 + 0xa6) = lVar32;
                    if (lVar32 == 0) {
                      uVar16 = 0x26;
                    }
                    else {
                      uVar16 = (ulong)local_282;
                      if (local_282 == 0) {
LAB_1005aba78:
                        if ((int)uVar16 < (int)param_1[0x282]) {
                          lVar32 = uVar16 << 4;
                          do {
                            lVar23 = *(long *)(param_1 + 0xa6);
                            *(undefined4 *)(lVar23 + lVar32) = 0x40;
                            lVar19 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   param_1[0x138] * 0x140,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0x9dc,0);
                            *(long *)((undefined4 *)(lVar23 + lVar32) + 2) = lVar19;
                            if (lVar19 == 0) {
                              uVar16 = 0x26;
                              goto LAB_1005aba38;
                            }
                            uVar16 = uVar16 + 1;
                            lVar32 = lVar32 + 0x10;
                          } while ((long)uVar16 < (long)(int)param_1[0x282]);
                        }
                        lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                               param_1[0x284] * 0x618,
                                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                               ,0x9e9,0);
                        *(long *)(param_1 + 0x286) = lVar32;
                        if (lVar32 == 0) {
                          uVar16 = 0x26;
                        }
                        else {
                          if (0 < *piVar2) {
                            FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_2a8);
                            iVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_2a0,4,1,0);
                            if (iVar13 == 0) {
                              local_2f8 = 0;
                              local_2d8 = 0;
                              do {
                                local_2a8 = local_2a8 + local_2a0;
                                uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                       lVar32 + local_2d8 * 0x618,1,0x16,0);
                                if ((((int)uVar16 != 0) ||
                                    (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                    (int)uVar16 != 0)) ||
                                   (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_2a2
                                                          ), (int)uVar16 != 0)) goto LAB_1005aba38;
                                *(uint *)(lVar32 + local_2d8 * 0x618 + 0x1c) = (uint)local_2a2;
                                if (local_2a2 == 0) {
                                  lVar32 = lVar32 + local_2d8 * 0x618;
                                  *(undefined8 *)(lVar32 + 0x20) = 0;
                                  *(undefined8 *)(lVar32 + 0x58) = 0;
                                  *(undefined8 *)(lVar32 + 0x90) = 0;
                                  *(undefined8 *)(lVar32 + 200) = 0;
                                  *(undefined8 *)(lVar32 + 0x100) = 0;
                                  *(undefined8 *)(lVar32 + 0x138) = 0;
                                  *(undefined8 *)(lVar32 + 0x170) = 0;
                                  *(undefined8 *)(lVar32 + 0x1a8) = 0;
                                  *(undefined8 *)(lVar32 + 0x1e0) = 0;
                                  *(undefined8 *)(lVar32 + 0x218) = 0;
                                  *(undefined8 *)(lVar32 + 0x250) = 0;
                                  *(undefined8 *)(lVar32 + 0x288) = 0;
                                  *(undefined8 *)(lVar32 + 0x2c0) = 0;
                                  *(undefined8 *)(lVar32 + 0x2f8) = 0;
                                  *(undefined8 *)(lVar32 + 0x330) = 0;
                                  *(undefined8 *)(lVar32 + 0x368) = 0;
                                  uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_2a8,0)
                                  ;
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                }
                                else {
                                  uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_2ac,
                                                         4,1,0);
                                  if ((((int)uVar16 != 0) ||
                                      (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + local_2d8 * 0x618 + 0x3a0,1,
                                                              0x60,0), (int)uVar16 != 0)) ||
                                     ((uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + local_2d8 * 0x618 + 0x402,2,
                                                              0x18,0), (int)uVar16 != 0 ||
                                      (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + local_2d8 * 0x618 + 0x45a,2,
                                                              0x18,0), (int)uVar16 != 0))))
                                  goto LAB_1005aba38;
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if ((((((int)uVar16 != 0) ||
                                        (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                lVar32 + local_2d8 * 0x618 + 0x452),
                                        (int)uVar16 != 0)) ||
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + local_2d8 * 0x618 + 0x453),
                                       (int)uVar16 != 0)) ||
                                      ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + local_2d8 * 0x618 + 0x454),
                                       (int)uVar16 != 0 ||
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + local_2d8 * 0x618 + 0x4aa),
                                       (int)uVar16 != 0)))) ||
                                     ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + local_2d8 * 0x618 + 0x4ab),
                                      (int)uVar16 != 0 ||
                                      (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + local_2d8 * 0x618 + 0x4ac),
                                      (int)uVar16 != 0)))) goto LAB_1005aba38;
                                  puVar3 = (undefined1 *)(lVar32 + local_2d8 * 0x618 + 0x400);
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),puVar3);
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  puVar4 = (undefined1 *)(lVar32 + local_2d8 * 0x618 + 0x457);
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),puVar4);
                                  if ((((int)uVar16 != 0) ||
                                      (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + local_2d8 * 0x618 + 0x507),
                                      (int)uVar16 != 0)) ||
                                     ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lVar32 + local_2d8 * 0x618 + 0x508),
                                      (int)uVar16 != 0 ||
                                      ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + local_2d8 * 0x618 + 0x509),
                                       (int)uVar16 != 0 ||
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lVar32 + local_2d8 * 0x618 + 0x50a),
                                       (int)uVar16 != 0)))))) goto LAB_1005aba38;
                                  psVar5 = (short *)(lVar32 + local_2d8 * 0x618 + 0x50c);
                                  uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),psVar5);
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  *psVar5 = *psVar5 << 1;
                                  if (*(byte *)(lVar32 + local_2d8 * 0x618 + 0x401) < 2) {
                                    *puVar3 = 0;
                                  }
                                  if (*(byte *)(lVar32 + local_2d8 * 0x618 + 0x458) < 2) {
                                    *puVar4 = 0;
                                  }
                                  uVar16 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_2a8,0)
                                  ;
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                  if (local_2a2 == 0) {
                                    uVar30 = 0;
                                    uVar21 = 0;
LAB_1005ac1ac:
                                    uVar16 = (ulong)(0xf - (int)uVar30) + 1;
                                    uVar29 = uVar16 & 0x1fffffffe;
                                    uVar28 = uVar30;
                                    if (uVar29 != 0) {
                                      uVar28 = uVar29 + uVar30;
                                      uVar29 = (ulong)(0xf - (int)uVar30) + 1 & 0xfffffffffffffffe;
                                      lVar19 = lVar32;
                                      do {
                                        lVar23 = local_2f8 + uVar30 * 0x38 + lVar19;
                                        *(undefined8 *)(lVar23 + 0x20) = 0;
                                        *(undefined8 *)(lVar23 + 0x58) = 0;
                                        uVar29 = uVar29 - 2;
                                        lVar19 = lVar19 + 0x70;
                                      } while (uVar29 != 0);
                                    }
                                    if (uVar16 + uVar30 != uVar28) {
                                      iVar13 = 0x10 - (int)uVar28;
                                      puVar17 = (undefined8 *)
                                                (lVar32 + local_2d8 * 0x618 + uVar28 * 0x38 + 0x20);
                                      do {
                                        *puVar17 = 0;
                                        iVar13 = iVar13 + -1;
                                        puVar17 = puVar17 + 7;
                                      } while (iVar13 != 0);
                                    }
                                  }
                                  else {
                                    uVar30 = 0;
                                    lVar19 = lVar32 + local_2d8 * 0x618;
                                    do {
                                      *(undefined8 *)(lVar19 + 0x48) = 0;
                                      *(undefined8 *)(lVar19 + 0x50) = 0;
                                      *(undefined8 *)(lVar19 + 0x38) = 0;
                                      *(undefined8 *)(lVar19 + 0x40) = 0;
                                      *(undefined8 *)(lVar19 + 0x28) = 0;
                                      *(undefined8 *)(lVar19 + 0x30) = 0;
                                      *(undefined8 *)(lVar19 + 0x20) = 0;
                                      param_1[0x285] = param_1[0x285] + 1;
                                      uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                             &local_2b0,4,1,0);
                                      if (((((int)uVar16 != 0) ||
                                           (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                   lVar19 + 0x30,4,1,0),
                                           (int)uVar16 != 0)) ||
                                          (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                  lVar19 + 0x34,4,1,0),
                                          (int)uVar16 != 0)) ||
                                         ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  lVar19 + 0x2c), (int)uVar16 != 0
                                          || (uVar16 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),
                                                                     lVar19 + 0x3c),
                                             (int)uVar16 != 0)))) goto LAB_1005aba38;
                                      *(undefined4 *)(lVar19 + 0x54) = 1;
                                      uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             &local_2b1);
                                      if ((int)uVar16 != 0) goto LAB_1005aba38;
                                      local_2e0 = (local_2b1 & 1) << 1 | 8;
                                      if ((local_2b1 & 2) != 0) {
                                        local_2e0 = 0xc;
                                      }
                                      if ((local_2b1 >> 4 & 1) != 0) {
                                        *(undefined4 *)(lVar19 + 0x54) = 2;
                                      }
                                      if ((local_2e0 & 6) == 0) {
                                        *(undefined4 *)(lVar19 + 0x30) = 0;
                                        *(uint *)(lVar19 + 0x34) = local_2b0;
                                        uVar22 = local_2b0;
                                      }
                                      else {
                                        uVar22 = *(uint *)(lVar19 + 0x34);
                                      }
                                      uVar14 = (local_2b1 >> 5 & 1) + 1;
                                      if (uVar22 == 0) {
                                        uVar27 = 0;
                                        *(undefined4 *)(lVar19 + 0x30) = 0;
                                        *(uint *)(lVar19 + 0x34) = local_2b0;
                                        local_2e0 = 9;
                                        uVar22 = local_2b0;
                                      }
                                      else {
                                        uVar27 = *(uint *)(lVar19 + 0x30);
                                      }
                                      *(uint *)(lVar19 + 0x40) = local_2b0;
                                      bVar12 = *(int *)(lVar19 + 0x54) != 1;
                                      uVar11 = 0;
                                      if (uVar14 != 0) {
                                        uVar11 = (uVar27 >> bVar12) / uVar14;
                                      }
                                      uVar27 = 0;
                                      if (uVar14 != 0) {
                                        uVar27 = (uVar22 >> (ulong)bVar12) / uVar14;
                                      }
                                      *(uint *)(lVar19 + 0x30) = uVar11;
                                      *(uint *)(lVar19 + 0x34) = uVar27;
                                      uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             lVar19 + 0x2d);
                                      if ((((int)uVar16 != 0) ||
                                          (uVar16 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),
                                                                  lVar19 + 0x38), (int)uVar16 != 0))
                                         || ((uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                     0), (int)uVar16 != 0 ||
                                             (uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     auStack_17e,1,0x16,0),
                                             (int)uVar16 != 0)))) goto LAB_1005aba38;
                                      lVar23 = local_2d8;
                                      _sprintf((char *)&local_280,"Sample name %d");
                                      uVar14 = FUN_100586684(param_1,9,&local_280,auStack_17e,0x1c,3
                                                             ,0,in_x7,lVar23);
                                      uVar22 = local_2b0;
                                      if (uVar14 != 0) {
                                        uVar16 = (ulong)uVar14;
                                        goto LAB_1005aba38;
                                      }
                                      if (local_2b0 != 0) {
                                        _memset(&local_280,0,0xe8);
                                        local_280 = CONCAT44(uVar22,0xe8);
                                        local_278 = (char *)CONCAT44(1,(undefined4)local_278);
                                        local_270 = CONCAT44(*(undefined4 *)(lVar19 + 0x54),0xac44);
                                        uVar16 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,
                                                               local_2e0 | 0x2400,&local_280,
                                                               lVar19 + 0x20);
                                        if ((int)uVar16 != 0) goto LAB_1005aba38;
                                        if ((local_2e0 & 6) != 0) {
                                          (**(code **)(**(long **)(lVar19 + 0x20) + 0x130))
                                                    (*(long **)(lVar19 + 0x20),
                                                     *(int *)(lVar19 + 0x30),2,
                                                     *(int *)(lVar19 + 0x30) +
                                                     *(int *)(lVar19 + 0x34) + -1,2);
                                        }
                                      }
                                      uVar22 = (int)uVar30 + 1;
                                      uVar30 = (ulong)uVar22;
                                      lVar19 = lVar19 + 0x38;
                                    } while (uVar22 < local_2a2);
                                    uVar21 = local_2a2;
                                    if (uVar22 < 0x10) goto LAB_1005ac1ac;
                                  }
                                  if (uVar21 != 0) {
                                    uVar30 = 0;
                                    local_2e8 = (char *)0x0;
                                    do {
                                      plVar24 = (long *)(lVar32 + local_2d8 * 0x618 + uVar30 * 0x38
                                                        + 0x20);
                                      plVar15 = (long *)*plVar24;
                                      if (plVar15 != (long *)0x0) {
                                        uVar22 = *(uint *)(lVar32 + local_2d8 * 0x618 +
                                                           uVar30 * 0x38 + 0x40);
                                        (**(code **)(*plVar15 + 0x98))(plVar15,0,0,auStack_2b8,0);
                                        if (uVar22 != 0) {
                                          local_2e8 = (char *)FUN_1005d7a98(*(undefined8 *)
                                                                             (PTR_DAT_10186d408 +
                                                                             0xd8),local_2e8,
                                                                            uVar22 + 0x48,
                                                                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xb4d,0);
                                          if (local_2e8 == (char *)0x0) {
                                            uVar16 = 0x26;
                                            goto LAB_1005aba38;
                                          }
                                          uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 local_2e8,1,uVar22,0);
                                          if (((uint)uVar16 | 0x10) != 0x10) goto LAB_1005aba38;
                                          iVar13 = FUN_1005ed0f8(local_2e8 + 4,"OggS",4);
                                          if (iVar13 == 0) {
                                            _memset(&local_280,0,0xe8);
                                            local_280 = CONCAT44(uVar22,0xe8);
                                            plVar15 = (long *)*plVar24;
                                            local_278 = (char *)CONCAT44((int)plVar15[0xc],
                                                                         (undefined4)local_278);
                                            local_270 = CONCAT44((int)plVar15[5],
                                                                 (int)*(float *)((long)plVar15 + 100
                                                                                ));
                                            uVar22 = *(uint *)((long)plVar15 + 0x2c);
                                            (**(code **)(*plVar15 + 0x18))(plVar15,1);
                                            *plVar24 = 0;
                                            iVar13 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),
                                                                   local_2e8 + 4,
                                                                   uVar22 & 0xffffd3ff | 0x800,
                                                                   &local_280,plVar24);
                                            if ((((uVar22 & 6) != 0) && (iVar13 == 0)) &&
                                               (lVar19 = lVar32 + local_2d8 * 0x618 + uVar30 * 0x38,
                                               iVar13 = *(int *)(lVar19 + 0x30),
                                               uVar16 = (**(code **)(*(long *)*plVar24 + 0x130))
                                                                  ((long *)*plVar24,iVar13,2,
                                                                   iVar13 + *(int *)(lVar19 + 0x34)
                                                                   + -1,2), (int)uVar16 != 0))
                                            goto LAB_1005aba38;
                                          }
                                          else {
                                            iVar13 = *(int *)(lVar32 + local_2d8 * 0x618 +
                                                              uVar30 * 0x38 + 0x54);
                                            if (iVar13 == 2) {
                                              if (uVar22 >> 1 != 0) {
                                                lVar19 = 0;
                                                sVar26 = 0;
                                                do {
                                                  sVar26 = *(short *)(local_2e8 + lVar19 * 2) +
                                                           sVar26;
                                                  *(short *)(local_2e8 + lVar19 * 2) = sVar26;
                                                  lVar19 = lVar19 + 1;
                                                } while ((uint)lVar19 < uVar22 >> 1);
                                              }
                                            }
                                            else if (iVar13 == 1) {
                                              cVar20 = '\0';
                                              pcVar25 = local_2e8;
                                              do {
                                                cVar20 = *pcVar25 + cVar20;
                                                *pcVar25 = cVar20;
                                                uVar22 = uVar22 - 1;
                                                pcVar25 = pcVar25 + 1;
                                              } while (uVar22 != 0);
                                            }
                                            plVar15 = (long *)*plVar24;
                                            uVar22 = *(uint *)(plVar15 + 8);
                                            uVar16 = (**(code **)(*plVar15 + 0x28))
                                                               (plVar15,0,uVar22,&local_2c0,
                                                                &local_2c8,&local_2cc,&local_2d0);
                                            if ((int)uVar16 != 0) goto LAB_1005aba38;
                                            iVar13 = 0;
                                            pcVar25 = local_2e8;
                                            while( true ) {
                                              _memcpy(local_2c0,pcVar25,(ulong)local_2cc);
                                              uVar16 = (**(code **)(*(long *)*plVar24 + 0x30))
                                                                 ((long *)*plVar24,local_2c0,
                                                                  local_2c8,local_2cc,local_2d0);
                                              if ((int)uVar16 != 0) goto LAB_1005aba38;
                                              if (uVar22 == local_2cc) break;
                                              pcVar25 = pcVar25 + local_2cc;
                                              iVar13 = local_2cc + iVar13;
                                              uVar22 = uVar22 - local_2cc;
                                              uVar16 = (**(code **)(*(long *)*plVar24 + 0x28))
                                                                 ((long *)*plVar24,iVar13,uVar22,
                                                                  &local_2c0,&local_2c8,&local_2cc,
                                                                  &local_2d0);
                                              if ((int)uVar16 != 0) goto LAB_1005aba38;
                                            }
                                          }
                                        }
                                      }
                                      uVar22 = (int)uVar30 + 1;
                                      uVar30 = (ulong)uVar22;
                                    } while (uVar22 < local_2a2);
                                    if (local_2e8 != (char *)0x0) {
                                      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                    local_2e8,
                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xbc7);
                                    }
                                  }
                                }
                                local_2d8 = local_2d8 + 1;
                                if (*piVar2 <= local_2d8) break;
                                lVar32 = *(long *)(param_1 + 0x286);
                                FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_2a8);
                                iVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_2a0,4,1
                                                       ,0);
                                local_2f8 = local_2f8 + 0x618;
                              } while (iVar13 == 0);
                            }
                          }
                          *(undefined8 *)(param_1 + 0x34e) = 0;
                          if (param_1[0x285] != 0) {
                            lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   param_1[0x285] << 3,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xbe2,0);
                            *(long *)(param_1 + 0x34e) = lVar32;
                            if (lVar32 == 0) {
                              uVar16 = 0x26;
                              goto LAB_1005aba38;
                            }
                          }
                          iVar13 = *piVar2;
                          if (0 < iVar13) {
                            lVar32 = 0;
                            uVar16 = 0;
                            do {
                              iVar9 = *(int *)(*(long *)(param_1 + 0x286) + lVar32 * 0x618 + 0x1c);
                              if (0 < iVar9) {
                                lVar19 = 0;
                                iVar10 = iVar9 + -1;
                                if (iVar10 == 0 || iVar9 < 1) {
                                  iVar10 = 0;
                                }
                                lVar23 = *(long *)(param_1 + 0x286) + lVar32 * 0x618 + 0x20;
                                do {
                                  *(long *)(*(long *)(param_1 + 0x34e) +
                                            (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) +
                                           lVar19 * 8) = lVar23;
                                  lVar19 = lVar19 + 1;
                                  lVar23 = lVar23 + 0x38;
                                } while (lVar19 < iVar9);
                                uVar16 = (ulong)((int)uVar16 + iVar10 + 1);
                              }
                              lVar32 = lVar32 + 1;
                            } while (lVar32 < iVar13);
                          }
                          puVar6 = param_1 + 0xec;
                          _bzero(puVar6,0x130);
                          *(undefined4 **)(param_1 + 2) = puVar6;
                          param_1[0x12f] = local_28c;
                          if ((param_3 == 0) || (iVar13 = *(int *)(param_3 + 0x14), iVar13 == 0)) {
                            iVar13 = 5;
                          }
                          param_1[300] = iVar13;
                          param_1[0x12d] = 2;
                          FUN_1005ecc98(puVar6,param_1 + 0x66,0x100);
                          lVar32 = *(long *)(param_1 + 0x12);
                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x108) =
                               *(undefined4 *)(lVar32 + 0x708);
                          param_1[0x4c] = 0;
                          local_258 = 0;
                          uStack_250 = 0;
                          local_268 = 0;
                          uStack_260 = 0;
                          local_270 = 0;
                          local_280 = 0;
                          local_278 = "FMOD XM Target Unit";
                          uVar16 = FUN_10056b4fc(lVar32,&local_280,0,param_1 + 0xa8,1);
                          if ((int)uVar16 == 0) {
                            FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),0);
                            FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                            param_1[0x1ba] = param_1[0x138];
                            lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   param_1[0x138] * 0x330,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xc2f,0);
                            *(long *)(param_1 + 0x1bc) = lVar32;
                            if (lVar32 == 0) {
                              uVar16 = 0x26;
                            }
                            else {
                              iVar13 = param_1[0x1ba];
                              if (0 < iVar13) {
                                lVar19 = 0;
                                lVar23 = 0;
                                while( true ) {
                                  lVar32 = lVar32 + lVar19;
                                  *(long *)lVar32 = lVar32;
                                  *(long *)(lVar32 + 8) = lVar32;
                                  *(undefined8 *)(lVar32 + 0x10) = 0;
                                  FUN_100583c48(lVar32 + 0x20);
                                  FUN_100583c48(*(long *)(param_1 + 0x1bc) + lVar19 + 0x20);
                                  lVar23 = lVar23 + 1;
                                  iVar13 = param_1[0x1ba];
                                  if (iVar13 <= lVar23) break;
                                  lVar19 = lVar19 + 0x330;
                                  lVar32 = *(long *)(param_1 + 0x1bc);
                                }
                              }
                              FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                            ,0xc57,0);
                              lVar32 = FUN_100585974();
                              *(long *)(param_1 + 0x1be) = lVar32;
                              *(long *)(param_1 + 0x350) = lVar32;
                              if (lVar32 == 0) {
                                uVar16 = 0x26;
                              }
                              else {
                                uVar16 = FUN_100585980(lVar32,*(undefined8 *)(param_1 + 0x12),0,
                                                       iVar13 << 1);
                                if ((int)uVar16 == 0) {
                                  lVar32 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                         iVar13 * 0x570,
                                                                                                                  
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xc63,0);
                                  *(long *)(param_1 + 0x1c0) = lVar32;
                                  if (lVar32 == 0) {
                                    uVar16 = 0x26;
                                  }
                                  else if (iVar13 < 1) {
LAB_1005ac8b0:
                                    if ((param_2 & 0x4100) == 0) {
                                      *(undefined8 *)(param_1 + 0xaa) = 0;
                                      *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0xffffffff;
                                    }
                                    else {
                                      lVar32 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),
                                                             param_1[0x281] << 8,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0xc72,0);
                                      *(long *)(param_1 + 0xaa) = lVar32;
                                      if (lVar32 == 0) {
                                        uVar16 = 0x26;
                                        goto LAB_1005aba38;
                                      }
                                      *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0;
                                      FUN_1005d8fe8(param_1,0);
                                      while (*(char *)((long)param_1 + 0xd01) == '\0') {
                                        FUN_1005a929c(param_1,0);
                                        *(int *)(*(long *)(param_1 + 2) + 0x110) =
                                             *(int *)(*(long *)(param_1 + 2) + 0x110) +
                                             param_1[0x25b];
                                      }
                                      FUN_1005d9258(param_1);
                                    }
                                    *param_1 = 0;
                                    FUN_1005d8fe8(param_1,1);
                                    uVar16 = 0;
                                  }
                                  else {
                                    FUN_10057bd44();
                                    uVar16 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,
                                                           *(undefined8 *)(param_1 + 0x1c0));
                                    lVar32 = 1;
                                    lVar19 = 0x2b8;
                                    if ((int)uVar16 == 0) {
                                      do {
                                        if (iVar13 << 1 <= lVar32) goto LAB_1005ac8b0;
                                        FUN_10057bd44(*(long *)(param_1 + 0x1c0) + lVar19);
                                        uVar16 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),
                                                               lVar32,*(long *)(param_1 + 0x1c0) +
                                                                      lVar19);
                                        lVar32 = lVar32 + 1;
                                        lVar19 = lVar19 + 0x2b8;
                                      } while ((int)uVar16 == 0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_298,4,1,0);
                        if ((int)uVar16 == 0) {
                          local_2d8 = 0;
                          do {
                            uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                            if ((((int)uVar16 != 0) ||
                                (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_292),
                                (int)uVar16 != 0)) ||
                               (uVar16 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_290),
                               (int)uVar16 != 0)) break;
                            puVar7 = (uint *)(lVar32 + local_2d8 * 0x10);
                            *puVar7 = (uint)local_292;
                            pbVar18 = (byte *)FUN_1005d7a5c(*(undefined8 *)
                                                             (PTR_DAT_10186d408 + 0xd8),
                                                            (uint)local_292 * *piVar1 * 5,
                                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                                                  ,0x962,0);
                            *(byte **)(puVar7 + 2) = pbVar18;
                            if (pbVar18 == (byte *)0x0) {
                              uVar16 = 0x26;
                              break;
                            }
                            if ((local_290 != 0) && (0 < (int)(*piVar1 * *puVar7))) {
                              iVar13 = 0;
                              do {
                                uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_299);
                                if ((int)uVar16 != 0) goto LAB_1005aba38;
                                if ((char)local_299 < '\0') {
                                  if (((((local_299 & 1) != 0) &&
                                       (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               pbVar18), (int)uVar16 != 0)) ||
                                      ((((local_299 >> 1 & 1) != 0 &&
                                        (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                pbVar18 + 1), (int)uVar16 != 0)) ||
                                       (((local_299 >> 2 & 1) != 0 &&
                                        (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                pbVar18 + 2), (int)uVar16 != 0))))))
                                     || (((local_299 >> 3 & 1) != 0 &&
                                         (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 pbVar18 + 3), (int)uVar16 != 0))))
                                  goto LAB_1005aba38;
                                  if ((local_299 >> 4 & 1) != 0) goto LAB_1005ab9a8;
                                }
                                else {
                                  if (local_299 != 0) {
                                    *pbVar18 = local_299;
                                  }
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),pbVar18 + 1)
                                  ;
                                  if ((((int)uVar16 != 0) ||
                                      (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              pbVar18 + 2), (int)uVar16 != 0)) ||
                                     (uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             pbVar18 + 3), (int)uVar16 != 0))
                                  goto LAB_1005aba38;
LAB_1005ab9a8:
                                  uVar16 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),pbVar18 + 4)
                                  ;
                                  if ((int)uVar16 != 0) goto LAB_1005aba38;
                                }
                                if (*pbVar18 == 0x61) {
                                  *pbVar18 = 0xff;
                                }
                                if (0x80 < pbVar18[1]) {
                                  pbVar18[1] = 0;
                                }
                                pbVar18 = pbVar18 + 5;
                                iVar13 = iVar13 + 1;
                              } while (iVar13 < (int)(*piVar1 * *puVar7));
                            }
                            local_2d8 = local_2d8 + 1;
                            uVar16 = (ulong)local_282;
                            if ((long)uVar16 <= local_2d8) goto LAB_1005aba78;
                            lVar32 = *(long *)(param_1 + 0xa6);
                            uVar16 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_298,4,1,0)
                            ;
                          } while ((int)uVar16 == 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar16 = 0x13;
          }
        }
      }
      else {
        uVar16 = 0x13;
      }
    }
  }
LAB_1005aba38:
  if (lVar31 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar16);
  }
  return;
}




undefined8 FUN_1005ac97c(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  FUN_1005d9258();
  if (*(long *)(param_1 + 0xd40) != 0) {
    FUN_100585a04();
    *(undefined8 *)(param_1 + 0xd40) = 0;
  }
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  if (*(long *)(param_1 + 0x2a0) != 0) {
    FUN_1005cdc44(*(long *)(param_1 + 0x2a0),1,0);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xd38);
  if (lVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xa14);
    if (0 < iVar2) {
      lVar4 = 0;
      while( true ) {
        plVar3 = *(long **)(lVar1 + lVar4 * 8);
        if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,1);
          lVar1 = *(long *)(param_1 + 0xd38);
          **(undefined8 **)(lVar1 + lVar4 * 8) = 0;
          *(undefined8 *)(lVar1 + lVar4 * 8) = 0;
          iVar2 = *(int *)(param_1 + 0xa14);
        }
        lVar4 = lVar4 + 1;
        if (iVar2 <= lVar4) break;
        lVar1 = *(long *)(param_1 + 0xd38);
      }
      lVar1 = *(long *)(param_1 + 0xd38);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                  ,0xcbd);
    *(undefined8 *)(param_1 + 0xd38) = 0;
  }
  if (*(long *)(param_1 + 0xa18) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xa18),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                  ,0xcc3);
    *(undefined8 *)(param_1 + 0xa18) = 0;
  }
  if (*(long *)(param_1 + 0x6f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x6f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                  ,0xcc9);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  if (*(long *)(param_1 + 0x700) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x700),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                  ,0xccf);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x298);
  if (lVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xa0c);
    lVar4 = 8;
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        if (*(long *)(lVar1 + lVar4) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + lVar4),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                        ,0xcd9);
          lVar1 = *(long *)(param_1 + 0x298);
          *(undefined8 *)(lVar1 + lVar4) = 0;
          iVar2 = *(int *)(param_1 + 0xa0c);
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 < iVar2);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                  ,0xcde);
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x4e0);
  if (0 < iVar2) {
    lVar1 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x4e8 + lVar1 * 8);
      if (lVar4 != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar4,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                      ,0xce6);
        *(undefined8 *)(param_1 + 0x4e8 + lVar1 * 8) = 0;
        iVar2 = *(int *)(param_1 + 0x4e0);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar2);
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2a8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_xm.cpp"
                  ,0xced);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  return 0;
}




int FUN_1005acbf8(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int local_10e4;
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
    iVar8 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar8 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x968);
    iVar8 = 0;
    if (param_3 != 0) {
      uVar12 = 0;
      local_10e4 = (int)&local_1088;
      lVar13 = param_2;
      iVar8 = 0;
      do {
        if (uVar11 == 0) {
          FUN_1005a929c(param_1,1);
          iVar8 = 0;
          uVar11 = *(uint *)(param_1 + 0x96c);
        }
        uVar10 = param_3 - uVar12;
        if (uVar11 + uVar12 <= param_3) {
          uVar10 = uVar11;
        }
        lVar14 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar14 + 0x710);
        if (uVar10 <= *(uint *)(lVar14 + 0x710)) {
          uVar1 = uVar10;
        }
        if (param_2 != 0) {
          local_10ac = 0;
          local_1088 = 0;
          uStack_1080 = 0;
          local_10b0 = 0x200;
          local_10a8 = 0;
          local_10a0 = auStack_1078;
          local_10b8 = lVar14;
          puStack_1098 = local_10a0;
          if (lVar14 == 0) {
            lVar15 = 0;
            bVar6 = false;
            bVar4 = false;
            bVar5 = true;
          }
          else {
            bVar5 = true;
            FUN_10057097c(lVar14,1);
            lVar15 = *(long *)(param_1 + 0x48);
            if (lVar15 == 0) {
              lVar15 = 0;
              bVar4 = false;
              bVar6 = true;
            }
            else {
              FUN_10057097c(lVar15,3);
              bVar5 = false;
              bVar6 = true;
              bVar4 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x2a0) + 0x3f) == '\0') {
LAB_1005acd84:
            local_10c0 = 0;
            local_10d0 = 0;
            uStack_10c8 = 0;
            local_10d8 = 0;
            local_10bc = 0xffffffff;
            iVar8 = FUN_1005c9be4(&local_10b8,uVar1,1000,2,&local_10d8);
            if (iVar8 == 0) {
              uVar9 = FUN_1005c8da0(&local_10d8);
              bVar3 = true;
              iVar8 = FUN_10063a2fc(0x3f800000,lVar13,uVar9,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar7 = iVar8;
              if (iVar8 == 0) {
                FUN_1005c8d10(&local_10d8);
                bVar3 = false;
                iVar8 = 0;
                iVar7 = local_10e4;
              }
            }
            else {
              bVar3 = true;
              iVar7 = iVar8;
            }
            local_10e4 = iVar7;
            FUN_1005c8e48(&local_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar8 = FUN_1005cb3bc(&local_10b8,*(long *)(param_1 + 0x2a0),uVar1);
            if (iVar8 == 0) goto LAB_1005acd84;
            bVar3 = true;
            local_10e4 = iVar8;
          }
          if (!bVar5 && bVar4) {
            FUN_100570990(lVar15,3);
          }
          if ((lVar14 != 0) && (bVar6)) {
            FUN_100570990(lVar14,1);
          }
          if (bVar3) goto LAB_1005acee0;
        }
        uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar10 = uVar1;
        if (uVar2 < 5) {
          uVar10 = *(int *)(&DAT_10115eee0 + (long)(int)uVar2 * 4) * uVar1 >> 3;
        }
        uVar12 = uVar1 + uVar12;
        lVar13 = lVar13 + (ulong)(uVar10 * *(int *)(*(long *)(param_1 + 8) + 0x104));
        uVar11 = uVar11 - uVar1;
      } while (uVar12 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar11;
  }
  local_10e4 = iVar8;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_1005acee0:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return local_10e4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005acf24(long param_1,undefined8 param_2,uint param_3,int param_4)

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
        FUN_1005a929c(param_1,1);
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




undefined8 FUN_1005acff0(void)

{
  return 0x44;
}




void FUN_1005acff8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_10186d408;
  if (((char)PTR_DAT_10186d408[0x10] < '\0') &&
     (puVar1 = (undefined8 *)(PTR_DAT_10186d408 + 8), (code *)*puVar1 != (code *)0x0)) {
    if (*(int *)(PTR_DAT_10186d408 + 0x20) == 0) {
      *(undefined4 *)(PTR_DAT_10186d408 + 0x20) = 1;
      local_40 = param_1;
      local_3c = param_2;
      local_38 = param_3;
      local_30 = param_4;
      uStack_28 = param_5;
      (*(code *)*puVar1)(0,0x80,&local_40,0,*(undefined8 *)(puVar2 + 0x18));
      *(int *)(PTR_DAT_10186d408 + 0x20) = *(int *)(PTR_DAT_10186d408 + 0x20) + -1;
    }
  }
  return;
}




undefined8 FUN_1005ad07c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  long local_48;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar4;
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1005cdc44(local_150,1,0);
    uVar3 = 0;
    if ((int)uVar2 == 0) goto LAB_1005ad114;
  }
  uVar3 = uVar2;
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_148[0] = 0;
    FUN_1005acff8(uVar2,7,param_1,"DSP::release",local_148);
  }
LAB_1005ad114:
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar4 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




undefined8 FUN_1005ad154(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005cc0d4(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005cdcf4(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,7,param_1,"DSP::getSystemObject",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005ad220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005cc0d4(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005ce188(local_170,param_2,param_3,param_4,1,0), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,7,param_1,"DSP::addInput",auStack_168);
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




undefined8 FUN_1005ad38c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005ceac4(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::disconnectFrom",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005ad4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cecf4(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562e5c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562e5c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::disconnectAll",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005ad5dc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar4;
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1005c9158(local_150,param_2,0,1);
    uVar3 = 0;
    if ((int)uVar2 == 0) goto LAB_1005ad688;
  }
  uVar3 = uVar2;
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::getNumInputs",auStack_148);
  }
LAB_1005ad688:
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar4 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




undefined8 FUN_1005ad6c8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar4;
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1005cea38(local_150,param_2,0,1);
    uVar3 = 0;
    if ((int)uVar2 == 0) goto LAB_1005ad774;
  }
  uVar3 = uVar2;
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::getNumOutputs",auStack_148);
  }
LAB_1005ad774:
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar4 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




undefined8
FUN_1005ad7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar5;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1005c91e4(local_170,param_2,param_3,param_4,0,1);
    uVar4 = 0;
    if ((int)uVar3 == 0) goto LAB_1005ad8d8;
  }
  uVar4 = uVar3;
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getInput",auStack_168);
  }
LAB_1005ad8d8:
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar5 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}




undefined8
FUN_1005ad920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar5;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1005c96c0(local_170,param_2,param_3,param_4,0,1);
    uVar4 = 0;
    if ((int)uVar3 == 0) goto LAB_1005ada44;
  }
  uVar4 = uVar3;
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getOutput",auStack_168);
  }
LAB_1005ada44:
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar5 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}




undefined8 FUN_1005ada8c(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005c986c(local_150,param_2,1), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::setActive",auStack_148);
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




undefined8 FUN_1005adb74(undefined8 param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if (param_2 != (byte *)0x0) {
      uVar2 = 0;
      *param_2 = (byte)((ushort)*(undefined2 *)(local_150 + 0x3c) >> 9) & 1;
      goto LAB_1005adc1c;
    }
    uVar2 = 0x1f;
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::getActive",auStack_148);
  }
LAB_1005adc1c:
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005adc5c(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005c9900(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::setBypass",auStack_148);
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




undefined8 FUN_1005add40(undefined8 param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if (param_2 != (byte *)0x0) {
      uVar2 = 0;
      *param_2 = *(byte *)(local_150 + 0x3c) & 1;
      goto LAB_1005adde8;
    }
    uVar2 = 0x1f;
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::getBypass",auStack_148);
  }
LAB_1005adde8:
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
FUN_1005ade28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_188;
  undefined8 local_180;
  undefined1 auStack_178 [256];
  long local_78;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_188 = 0;
  local_78 = lVar4;
  uVar3 = FUN_1005cc0d4(param_4,&local_180,&local_188);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf85c(param_1,param_2,param_3,local_180), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dfc(param_1,auStack_178,0x100);
    iVar2 = FUN_100562eec(auStack_178 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dfc(param_2,auStack_178 + iVar2,0x100 - iVar2);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_178 + iVar2,0x100 - iVar2,", ");
    FUN_100562dfc(param_3,auStack_178 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,7,param_4,"DSP::setWetDryMix",auStack_178);
  }
  if ((local_188 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_188 = 0;
  }
  if (lVar4 == local_78) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005adf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005cc0d4(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf914(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getWetDryMix",auStack_168);
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
FUN_1005ae0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005cc0d4(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005c9948(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,7,param_1,"DSP::setChannelFormat",auStack_168);
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
FUN_1005ae25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005cc0d4(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005c9b00(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563124(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getChannelFormat",auStack_168);
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
FUN_1005ae3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  uVar3 = FUN_1005cc0d4(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf7b4(local_170,param_2,param_3,param_4,param_5,param_6,param_7),
     (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_6);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_7);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getOutputChannelFormat",auStack_168);
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




undefined8 FUN_1005ae5c4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_148 = 0;
  local_38 = lVar3;
  uVar2 = FUN_1005cc0d4(param_1,&local_140,&local_148);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005cede0(local_140), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,7,param_1,"DSP::reset",local_138);
  }
  if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_148 = 0;
  }
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005ae68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005cc0d4(param_2,&local_170,0);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cef0c(param_1,local_170,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_3);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    FUN_100562dfc(param_1,auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,7,param_2,"DSP::setParameterFloat",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005ae7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,0);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cef94(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d14(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::setParameterInt",auStack_158);
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005ae8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,0);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005ceffc(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562e5c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::setParameterBool",auStack_158);
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005ae9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf050(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,7,param_1,"DSP::setParameterData",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005aeb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf150(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getParameterFloat",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005aec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf268(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getParameterInt",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005aee08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf384(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056322c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getParameterBool",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005aef84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf4a8(local_170,param_2,param_3,param_4,param_5,param_6), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_6 & 0xffffffff);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getParameterData",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005af134(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005cc0d4(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005cf5dc(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,7,param_1,"DSP::getNumParameters",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005af200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,0);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cf608(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getParameterInfo",auStack_158);
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005af310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,0);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005c964c(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getDataParameterIndex",auStack_158);
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005af420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cf658(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562e5c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::showConfigDialog",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005af548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005cf68c(local_170,param_2,param_3,param_4,param_5,param_6), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005630e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_6);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getInfo",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005af6f8(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005cf768(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::getType",auStack_148);
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




undefined8 FUN_1005af7dc(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005cc0d4(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005cf78c(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,7,param_1,"DSP::getIdle",auStack_148);
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




undefined8 FUN_1005af8c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005cc0d4(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005cfa38(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,7,param_1,"DSP::setUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005af98c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005cc0d4(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005cfa44(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,7,param_1,"DSP::getUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005afa58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005c9498(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562e5c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562e5c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::setMeteringEnabled",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005afb80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cfb60(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056322c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056322c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getMeteringEnabled",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005afca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005cc0d4(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cfa68(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,7,param_1,"DSP::getMeteringInfo",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005afdd0(void)

{
  _memset(&DAT_101e99690,0,0x60);
  FUN_1005ecc98(&DAT_101e99694,"Mix",0x10);
  FUN_1005ecc98(&DAT_101e996a4,"%",0x10);
  DAT_101e996b8 = "Volume of original signal to pass to output.  0.0 to 100.0. Default = 100.";
  DAT_101e996c0 = 0;
  DAT_101e996c4 = 0x42c80000;
  DAT_101e996c8 = 0x42c80000;
  DAT_101e996d0 = 1;
  _memset(&DAT_101e996f0,0,0x60);
  FUN_1005ecc98(&DAT_101e996f4,"Rate",0x10);
  FUN_1005ecc98(&DAT_101e99704,"Hz",0x10);
  DAT_101e99718 = "Chorus modulation rate in Hz.  0.0 to 20.0.  Default = 0.8 Hz.";
  DAT_101e99720 = 0;
  DAT_101e99724 = 0x41a00000;
  DAT_101e99728 = 0x3f4ccccd;
  DAT_101e99730 = 1;
  _memset(&DAT_101e99750,0,0x60);
  FUN_1005ecc98(&DAT_101e99754,"Depth",0x10);
  FUN_1005ecc98(&DAT_101e99764,"%",0x10);
  DAT_101e99780 = 0;
  DAT_101e99784 = 0x42c80000;
  DAT_101e99790 = 1;
  DAT_101e99788 = 0x40400000;
  DAT_101e99778 = "Chorus modulation depth.  0.0 to 100.0.  Default = 3.0.";
  DAT_101e997b0 = &DAT_10186c1f0;
  DAT_101e997c8 = 0xe;
  DAT_101e997c0 = 0x8238;
  return;
}




undefined8 FUN_1005aff34(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar5 = 0;
  lVar6 = 0x228;
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
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    auVar10._12_4_ = uVar8;
    auVar1._12_4_ = uVar8;
    auVar10 = NEON_ext(auVar10,auVar1,8,1);
    ((undefined8 *)(param_1 + lVar6))[1] = auVar10._0_8_;
    lVar5 = lVar5 + 4;
    lVar6 = lVar6 + 0x10;
  } while (lVar5 != 0x2000);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x708);
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
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
  FUN_1005b0088(param_1);
  return 0;
}

