// functions/1005e — 349 functions
#include "GameKindred.h"




void thunk_FUN_1005edafc(void)

{
  thunk_FUN_1005edafc();
  return;
}




void thunk_FUN_1005edafc(void)

{
  FUN_1005edafc();
  return;
}




undefined8 FUN_1005e0254(long param_1)

{
  int iVar1;
  int in_w4;
  long in_x5;
  
  iVar1 = FUN_1005de238(param_1 + 0x338,*(undefined8 *)(in_x5 + 0x10),
                        *(int *)(param_1 + 0x350) * in_w4);
  if (iVar1 == 0) {
    FUN_1005fba94(param_1 + 0x368,0);
  }
  return 0;
}




undefined8 FUN_1005e0298(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x330) != 0) {
    iVar1 = _AudioUnitUninitialize();
    if (iVar1 != 0) {
      return 0x31;
    }
    iVar1 = _AudioComponentInstanceDispose(*(undefined8 *)(param_1 + 0x330));
    if (iVar1 != 0) {
      return 0x31;
    }
    *(undefined8 *)(param_1 + 0x330) = 0;
  }
  FUN_1005de1ec(param_1 + 0x338);
  return 0;
}




ulong FUN_1005e02f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = FUN_1005fb770(param_1 + 0x368,"FMOD mixer thread",FUN_1005e0378,param_1,1,1,0,
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x15c88),1,
                        *(long *)(param_1 + 0x40),1);
  if ((int)uVar2 == 0) {
    iVar1 = _AudioOutputUnitStart(*(undefined8 *)(param_1 + 0x330));
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = 0x33;
    }
    uVar2 = (ulong)uVar3;
  }
  return uVar2;
}




void FUN_1005e0378(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  do {
    if (*(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x344) <
        *(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) {
      return;
    }
    pcVar3 = *(code **)(param_1 + 0x10);
    uVar2 = FUN_1005de344(param_1 + 0x338);
    iVar1 = (*pcVar3)(param_1 + 8,uVar2,*(undefined4 *)(param_1 + 0x340));
  } while (iVar1 == 0);
  return;
}




undefined8 FUN_1005e03e4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _AudioOutputUnitStop(*(undefined8 *)(param_1 + 0x330));
  if (iVar1 != 0) {
    return 0x31;
  }
  uVar2 = FUN_1005fb958(param_1 + 0x368);
  return uVar2;
}




undefined8 FUN_1005e0420(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x330);
  return 0;
}




undefined8 FUN_1005e0430(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  do {
    if (*(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x344) <
        *(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) {
      return 0;
    }
    pcVar2 = *(code **)(param_1 + 0x10);
    uVar1 = FUN_1005de344(param_1 + 0x338);
    uVar1 = (*pcVar2)(param_1 + 8,uVar1,*(undefined4 *)(param_1 + 0x340));
  } while ((int)uVar1 == 0);
  return uVar1;
}




undefined8 FUN_1005e04a4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1005de238(param_1 + 0x338,param_2,*(int *)(param_1 + 0x350) * param_3);
  if ((int)uVar1 == 0) {
    FUN_1005fba94(param_1 + 0x368,0);
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1005e04e4(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 0;
  return 0;
}




undefined8
FUN_1005e04f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_1005ecc98(param_3,"Core Audio input",param_4);
  *param_5 = 0xffffffffffffffff;
  param_5[1] = 0xffffffffffffffff;
  return 0;
}




undefined4 FUN_1005e0534(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_8c;
  code *local_88;
  long lStack_80;
  double local_78 [2];
  int local_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar3 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  lVar4 = _objc_msgSend(uVar3,"category");
  if (lVar4 == *(long *)PTR__AVAudioSessionCategoryPlayAndRecord_101444008) {
    uVar3 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
    iVar2 = _objc_msgSend(uVar3,"isInputAvailable");
    if (iVar2 == 0) {
      uVar5 = 0x29;
    }
    else {
      local_38 = 0;
      local_48 = 0x72696f6361756f75;
      local_40 = 0x6170706c;
      lVar4 = _AudioComponentFindNext(0,&local_48);
      if (lVar4 == 0) {
        uVar5 = 0x39;
      }
      else {
        puVar1 = (undefined8 *)(param_1 + 0x4c8);
        iVar2 = _AudioComponentInstanceNew(lVar4,puVar1);
        if (iVar2 == 0) {
          local_4c = 1;
          iVar2 = _AudioUnitSetProperty(*puVar1,0x7d3,1,1,&local_4c,4);
          if (iVar2 == 0) {
            local_4c = 0;
            iVar2 = _AudioUnitSetProperty(*puVar1,0x7d3,2,0,&local_4c,4);
            if (iVar2 == 0) {
              local_78[0] = (double)(long)*(int *)(param_2 + 0x1c);
              local_78[1] = 2.63628054990002e-313;
              iStack_5c = *(int *)(param_2 + 0x20);
              uStack_58 = 0x10;
              local_60 = iStack_5c << 1;
              _local_68 = CONCAT44(1,local_60);
              iVar2 = _AudioUnitSetProperty(*puVar1,8,2,1,local_78,0x28);
              if (iVar2 == 0) {
                local_88 = FUN_1005e0868;
                lStack_80 = param_1;
                iVar2 = _AudioUnitSetProperty
                                  (*(undefined8 *)(param_1 + 0x4c8),0x7d5,0,0,&local_88,0x10);
                if (iVar2 == 0) {
                  local_4c = 0;
                  iVar2 = _AudioUnitSetProperty(*puVar1,0x33,2,1,&local_4c,4);
                  if (iVar2 == 0) {
                    local_8c = 4;
                    iVar2 = _AudioUnitGetProperty
                                      (*(undefined8 *)(param_1 + 0x4c8),0xe,0,0,param_1 + 0x4e4,
                                       &local_8c);
                    if (iVar2 == 0) {
                      *(int *)(param_1 + 0x4f0) = iStack_5c;
                      *(int *)(param_1 + 0x4e0) = local_60;
                      iVar2 = *(int *)(param_1 + 0x4e4) * 4;
                      *(int *)(param_1 + 0x4ec) = iVar2;
                      *(undefined4 *)(param_1 + 0x4e8) = 0;
                      *(undefined4 *)(param_2 + 0x18) = 2;
                      *(int *)(param_2 + 0x24) = iVar2;
                      lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                            local_60 * iVar2,
                                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_output_coreaudio.mm"
                                            ,0x1dc,0);
                      *(long *)(param_1 + 0x4d0) = lVar4;
                      if (lVar4 == 0) {
                        uVar5 = 0x26;
                      }
                      else {
                        uVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                              *(int *)(param_1 + 0x4e0) * *(int *)(param_1 + 0x4e4),
                                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_output_coreaudio.mm"
                                              ,0x1df,0);
                        *(undefined8 *)(param_1 + 0x4d8) = uVar3;
                        if (*(long *)(param_1 + 0x4d0) == 0) {
                          uVar5 = 0x26;
                        }
                        else {
                          iVar2 = _AudioUnitInitialize(*puVar1);
                          if (iVar2 == -0x2a74) {
                            uVar5 = 0x13;
                          }
                          else if (iVar2 == 0) {
                            iVar2 = _AudioOutputUnitStart(*puVar1);
                            uVar5 = 0;
                            if (iVar2 != 0) {
                              uVar5 = 0x39;
                            }
                          }
                          else {
                            uVar5 = 0x39;
                          }
                        }
                      }
                    }
                    else {
                      uVar5 = 0x39;
                    }
                  }
                  else {
                    uVar5 = 0x39;
                  }
                }
                else {
                  uVar5 = 0x39;
                }
              }
              else {
                uVar5 = 0x39;
              }
            }
            else {
              uVar5 = 0x39;
            }
          }
          else {
            uVar5 = 0x39;
          }
        }
        else {
          uVar5 = 0x39;
        }
      }
    }
  }
  else {
    uVar5 = 0x39;
  }
  return uVar5;
}




int FUN_1005e0868(void)

{
  int iVar1;
  
  iVar1 = FUN_1005e09d0();
  return -(uint)(iVar1 != 0);
}




undefined8 FUN_1005e0884(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x4c8) != 0) {
    iVar1 = _AudioOutputUnitStop();
    if (iVar1 != 0) {
      return 0x31;
    }
    iVar1 = _AudioUnitUninitialize(*(undefined8 *)(param_1 + 0x4c8));
    if (iVar1 != 0) {
      return 0x31;
    }
    iVar1 = _AudioComponentInstanceDispose(*(undefined8 *)(param_1 + 0x4c8));
    if (iVar1 != 0) {
      return 0x31;
    }
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  if (*(long *)(param_1 + 0x4d0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x4d0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_output_coreaudio.mm"
                  ,0x207);
    *(undefined8 *)(param_1 + 0x4d0) = 0;
  }
  if (*(long *)(param_1 + 0x4d8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x4d8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_output_coreaudio.mm"
                  ,0x20d);
    *(undefined8 *)(param_1 + 0x4d8) = 0;
  }
  return 0;
}




undefined8 FUN_1005e0948(long param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 + 0x4e8);
  return 0;
}




undefined8
FUN_1005e0958(long param_1,undefined8 param_2,uint param_3,uint param_4,long *param_5,
             undefined8 *param_6,uint *param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(int *)(param_1 + 0x4e0) * *(int *)(param_1 + 0x4ec);
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  uVar3 = uVar2 - param_3;
  if (param_3 <= uVar2 && uVar3 != 0) {
    *param_5 = *(long *)(param_1 + 0x4d0) + (ulong)param_3;
    if (uVar2 < uVar1 + param_3) {
      *param_7 = uVar3;
      *param_6 = *(undefined8 *)(param_1 + 0x4d0);
      iVar4 = uVar1 - uVar3;
    }
    else {
      iVar4 = 0;
      *param_7 = uVar1;
      *param_6 = 0;
    }
    *param_8 = iVar4;
    return 0;
  }
  *param_6 = 0;
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  return 0x1f;
}




undefined8 FUN_1005e09d0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  size_t sVar5;
  int in_w4;
  void *pvVar6;
  
  iVar2 = _AudioUnitRender(*(undefined8 *)(param_1 + 0x4c8));
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x4e8);
    iVar1 = *(int *)(param_1 + 0x4e0);
    pvVar4 = (void *)(*(long *)(param_1 + 0x4d0) + (long)(iVar1 * iVar2));
    pvVar6 = *(void **)(param_1 + 0x4d8);
    if (*(uint *)(param_1 + 0x4ec) < (uint)(iVar2 + in_w4)) {
      iVar2 = *(uint *)(param_1 + 0x4ec) - iVar2;
      _memcpy(pvVar4,pvVar6,(long)(iVar2 * iVar1));
      pvVar4 = *(void **)(param_1 + 0x4d0);
      pvVar6 = (void *)((long)pvVar6 + (long)(*(int *)(param_1 + 0x4e0) * iVar2));
      sVar5 = (size_t)(*(int *)(param_1 + 0x4e0) * (in_w4 - iVar2));
    }
    else {
      sVar5 = (size_t)(uint)(iVar1 * in_w4);
    }
    _memcpy(pvVar4,pvVar6,sVar5);
    uVar3 = 0;
    in_w4 = *(int *)(param_1 + 0x4e8) + in_w4;
    iVar2 = *(int *)(param_1 + 0x4ec);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = in_w4 / iVar2;
    }
    *(int *)(param_1 + 0x4e8) = in_w4 - iVar1 * iVar2;
  }
  else {
    uVar3 = 0x31;
  }
  return uVar3;
}




undefined4 * FUN_1005e0ad0(void)

{
  _memset(&DAT_101dbd188,0,0xa8);
  DAT_101dbd19c = 0;
  DAT_101dbd188 = 2;
  DAT_101dbd198 = 0x10100;
  DAT_101dbd190 = "FMOD WavWriter Output - Non real-time";
  DAT_101dbd1a0 = FUN_1005e0b98;
  DAT_101dbd1a8 = FUN_1005e0ba8;
  DAT_101dbd1b0 = FUN_1005e0bc0;
  DAT_101dbd1c8 = FUN_1005e0bdc;
  DAT_101dbd1b8 = FUN_1005e0c34;
  DAT_101dbd1c0 = FUN_1005e0c98;
  DAT_101dbd1d0 = FUN_1005e0ce4;
  DAT_101dbd1d8 = FUN_1005e0cf8;
  DAT_101dbd230 = 5;
  DAT_101dbd234 = 0x450;
  return &DAT_101dbd188;
}




undefined8 FUN_1005e0b98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 5;
  return 0;
}




undefined8 FUN_1005e0ba8(void)

{
  FUN_1005e0d18();
  return 0;
}




void FUN_1005e0bc0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005e0da8(lVar1);
  return;
}




undefined8 FUN_1005e0bdc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  if (*(long *)(lVar1 + 0x430) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x430),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_wavwriter_nrt.cpp"
                  ,0xb2);
    *(undefined8 *)(lVar1 + 0x430) = 0;
  }
  return 0;
}




undefined8 FUN_1005e0c34(long param_1)

{
  long lVar1;
  FILE *pFVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  pFVar2 = _fopen((char *)(lVar1 + 0x330),"wb");
  *(FILE **)(lVar1 + 0x448) = pFVar2;
  if (pFVar2 != (FILE *)0x0) {
    uVar3 = FUN_1005a8080(pFVar2,*(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x50),
                          *(undefined4 *)(*(long *)(lVar1 + 0x40) + 0x708),
                          *(undefined4 *)(lVar1 + 0x440));
    return uVar3;
  }
  return 0x12;
}




undefined8 FUN_1005e0c98(long param_1)

{
  FUN_1005a8080(*(undefined8 *)(param_1 + 0x440),*(undefined4 *)(param_1 + 0x40),
                *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x708),
                *(undefined4 *)(param_1 + 0x438));
  if (*(FILE **)(param_1 + 0x440) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 0x440));
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  return 0;
}




void FUN_1005e0ce4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005e0f84(lVar1);
  return;
}




undefined8 FUN_1005e0cf8(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x440);
  return 0;
}




undefined8 FUN_1005e0d08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 5;
  return 0;
}




undefined8 FUN_1005e0d18(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  
  if (param_3 != 0) {
    switch(param_2) {
    case 0:
      pcVar1 = "16 bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 1:
      pcVar1 = "8  bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 2:
      pcVar1 = "24 bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 3:
      pcVar1 = "32 bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 4:
      pcVar1 = "32 bit float   PCM wave writer (default filename = fmodoutput.wav)";
      break;
    default:
      goto switchD_1005e0d40_default;
    }
    FUN_1005ecc98(param_3,pcVar1,param_4);
  }
switchD_1005e0d40_default:
  return 0;
}




undefined8
FUN_1005e0da8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,int *param_5,
             int *param_6,int *param_7,uint param_8,undefined8 param_9,char *param_10)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x54) = 1;
  switch(param_2) {
  case 0:
    iVar4 = 2;
    break;
  case 1:
    iVar4 = 1;
    break;
  case 2:
    iVar4 = 3;
    break;
  case 3:
    iVar4 = 4;
    break;
  case 4:
    iVar4 = 5;
    break;
  default:
    goto switchD_1005e0ddc_default;
  }
  *param_7 = iVar4;
switchD_1005e0ddc_default:
  if (*param_5 == 0) {
    *param_5 = 3;
    *param_6 = 2;
  }
  iVar4 = *param_7;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  uVar1 = iVar4 - 1;
  switch(uVar1) {
  case 0:
    uVar5 = 8;
    break;
  case 1:
    uVar5 = 0x10;
    break;
  case 2:
    uVar5 = 0x18;
    break;
  case 3:
  case 4:
    uVar5 = 0x20;
    break;
  default:
    iVar4 = *param_6;
    if (4 < uVar1) goto LAB_1005e0e98;
    goto LAB_1005e0e84;
  }
  *(undefined4 *)(param_1 + 0x43c) = uVar5;
  iVar4 = *param_6;
LAB_1005e0e84:
  param_8 = *(int *)(&UNK_10115f8e0 + (long)(int)uVar1 * 4) * param_8 >> 3;
LAB_1005e0e98:
  *(uint *)(param_1 + 0x438) = param_8 * iVar4;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_8 * iVar4,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_wavwriter_nrt.cpp"
                        ,0x90,0);
  *(long *)(param_1 + 0x430) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  else {
    if (param_10 == (char *)0x0) {
      param_10 = "fmodoutput.wav";
    }
    FUN_1005ecc98(param_1 + 0x330,param_10,0x100);
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005e0f28(long param_1)

{
  if (*(long *)(param_1 + 0x430) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x430),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_wavwriter_nrt.cpp"
                  ,0xb2);
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  return 0;
}




undefined8 FUN_1005e0f74(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x448);
  return 0;
}




undefined8 FUN_1005e0f84(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x43c) != 0) {
    uVar1 = (uint)(*(int *)(param_1 + 0x438) << 3) / *(uint *)(param_1 + 0x43c);
  }
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x50) != 0) {
    uVar2 = uVar1 / *(uint *)(param_1 + 0x50);
  }
  uVar3 = (**(code **)(param_1 + 0x10))(param_1 + 8,*(undefined8 *)(param_1 + 0x430),uVar2);
  if ((int)uVar3 == 0) {
    if (*(int *)(param_1 + 0x48) == 1) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x438);
      if (0 < (int)*(uint *)(param_1 + 0x438)) {
        lVar6 = 0;
        lVar7 = *(long *)(param_1 + 0x430);
        do {
          *(byte *)(lVar7 + lVar6) = *(byte *)(lVar7 + lVar6) ^ 0x80;
          lVar6 = lVar6 + 1;
          uVar5 = (ulong)*(int *)(param_1 + 0x438);
        } while (lVar6 < (long)uVar5);
      }
    }
    else {
      uVar5 = (ulong)*(uint *)(param_1 + 0x438);
    }
    sVar4 = _fwrite(*(void **)(param_1 + 0x430),1,uVar5 & 0xffffffff,*(FILE **)(param_1 + 0x448));
    uVar3 = 0;
    *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + (int)sVar4;
  }
  return uVar3;
}




void FUN_1005e1038(long param_1)

{
  FUN_1005a8080(*(undefined8 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x48),
                *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x708),
                *(undefined4 *)(param_1 + 0x440));
  return;
}




undefined8 FUN_1005e1058(long param_1)

{
  FILE *pFVar1;
  undefined8 uVar2;
  
  pFVar1 = _fopen((char *)(param_1 + 0x330),"wb");
  *(FILE **)(param_1 + 0x448) = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    uVar2 = FUN_1005a8080(pFVar1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                          *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x708),
                          *(undefined4 *)(param_1 + 0x440));
    return uVar2;
  }
  return 0x12;
}




undefined8 FUN_1005e10b0(long param_1)

{
  FUN_1005a8080(*(undefined8 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x48),
                *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x708),
                *(undefined4 *)(param_1 + 0x440));
  if (*(FILE **)(param_1 + 0x448) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 0x448));
    *(undefined8 *)(param_1 + 0x448) = 0;
  }
  return 0;
}




undefined8 FUN_1005e10fc(undefined8 param_1)

{
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_plugin.cpp"
                ,0x19);
  return 0;
}




void * FUN_1005e1138(void *param_1)

{
  *(undefined8 *)((long)param_1 + 0x3a0) = 0;
  *(undefined4 *)((long)param_1 + 0x3a8) = 1;
  _memset(param_1,0,0x100);
  _bzero((void *)((long)param_1 + 0x3b0),0x120);
  *(long *)((long)param_1 + 0x148) = (long)param_1 + 0x148;
  *(long *)((long)param_1 + 0x150) = (long)param_1 + 0x148;
  *(undefined8 *)((long)param_1 + 0x158) = 0;
  *(long *)((long)param_1 + 0x160) = (long)param_1 + 0x160;
  *(long *)((long)param_1 + 0x168) = (long)param_1 + 0x160;
  *(undefined8 *)((long)param_1 + 0x170) = 0;
  *(undefined4 *)((long)param_1 + 400) = 0xffffffff;
  *(long *)((long)param_1 + 0x178) = (long)param_1 + 0x178;
  *(long *)((long)param_1 + 0x180) = (long)param_1 + 0x178;
  *(undefined8 *)((long)param_1 + 0x188) = 0;
  *(long *)((long)param_1 + 0x280) = (long)param_1 + 0x278;
  *(long *)((long)param_1 + 0x278) = (long)param_1 + 0x278;
  *(undefined8 *)((long)param_1 + 0x288) = 0;
  return param_1;
}




void * FUN_1005e11c8(void *param_1)

{
  *(undefined8 *)((long)param_1 + 0x3a0) = 0;
  *(undefined4 *)((long)param_1 + 0x3a8) = 1;
  _memset(param_1,0,0x100);
  _bzero((void *)((long)param_1 + 0x3b0),0x120);
  *(long *)((long)param_1 + 0x148) = (long)param_1 + 0x148;
  *(long *)((long)param_1 + 0x150) = (long)param_1 + 0x148;
  *(undefined8 *)((long)param_1 + 0x158) = 0;
  *(long *)((long)param_1 + 0x160) = (long)param_1 + 0x160;
  *(long *)((long)param_1 + 0x168) = (long)param_1 + 0x160;
  *(undefined8 *)((long)param_1 + 0x170) = 0;
  *(undefined4 *)((long)param_1 + 400) = 0xffffffff;
  *(long *)((long)param_1 + 0x178) = (long)param_1 + 0x178;
  *(long *)((long)param_1 + 0x180) = (long)param_1 + 0x178;
  *(undefined8 *)((long)param_1 + 0x188) = 0;
  *(long *)((long)param_1 + 0x280) = (long)param_1 + 0x278;
  *(long *)((long)param_1 + 0x278) = (long)param_1 + 0x278;
  *(undefined8 *)((long)param_1 + 0x288) = 0;
  return param_1;
}




undefined8 FUN_1005e1258(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x178);
  do {
    plVar3 = (long *)*plVar1;
    if ((plVar3 == plVar1) && (*(long **)(param_1 + 0x180) == plVar1)) {
      plVar1 = (long *)(param_1 + 0x148);
      do {
        if (((long *)*plVar1 == plVar1) && (*(long **)(param_1 + 0x150) == plVar1)) {
          plVar1 = (long *)(param_1 + 0x278);
          do {
            plVar3 = (long *)*plVar1;
            if ((plVar3 == plVar1) && (*(long **)(param_1 + 0x280) == plVar1)) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                            ,0x68);
              return 0;
            }
            if (plVar3 == (long *)0x0) {
              return 0x1c;
            }
            uVar2 = FUN_1005e136c(param_1,*(undefined4 *)(plVar3 + 0x1a),param_2);
          } while ((int)uVar2 == 0);
          return uVar2;
        }
        lVar4 = ((long *)*plVar1)[2];
        if (lVar4 == 0) {
          return 0x1c;
        }
        uVar2 = FUN_1005e136c(param_1,*(undefined4 *)(lVar4 + 0x14),param_2);
      } while ((int)uVar2 == 0);
      return uVar2;
    }
    if (plVar3 == (long *)0x0) {
      return 0x1c;
    }
    uVar2 = FUN_1005e136c(param_1,*(undefined4 *)(plVar3 + 0x11),param_2);
  } while ((int)uVar2 == 0);
  return uVar2;
}




int FUN_1005e136c(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  ulong local_68;
  
  plVar1 = (long *)(param_1 + 0x178);
  plVar2 = (long *)(param_1 + 0x148);
  while( true ) {
    for (plVar6 = *(long **)(param_1 + 0x278); plVar6 != (long *)(param_1 + 0x278);
        plVar6 = (long *)*plVar6) {
      if ((int)plVar6[0x1a] == param_2) {
        param_2 = (int)plVar6[0x24];
        plVar8 = (long *)plVar6[1];
        *plVar8 = *plVar6;
        *(long **)(*plVar6 + 8) = plVar8;
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        uVar5 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
        uVar7 = 0x264;
        goto LAB_1005e14fc;
      }
    }
    plVar6 = (long *)*plVar1;
    plVar8 = plVar2;
    if (plVar6 != plVar1) break;
LAB_1005e142c:
    do {
      plVar8 = (long *)*plVar8;
      if (plVar8 == plVar2) {
        return 0x36;
      }
      plVar6 = (long *)plVar8[2];
    } while (*(int *)((long)plVar6 + 0x14) != param_2);
    if (*(int *)((long)plVar6 + 0x3c) != 0 && param_3 == 0) {
      return 8;
    }
    param_2 = (int)plVar6[8];
    lVar9 = *plVar6;
    if (*(long *)(lVar9 + 200) != 0) {
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_98 = 0;
      local_70 = *(long *)(param_1 + 0x3a0) + 0x15e68;
      local_68 = (ulong)*(uint *)(*(long *)(param_1 + 0x3a0) + 0x15ce0);
      iVar4 = (**(code **)(*plVar6 + 200))(&local_98);
      if (iVar4 != 0) {
        return iVar4;
      }
      lVar9 = *plVar6;
    }
    if (*(long *)(lVar9 + 0xd0) != 0) {
      lVar9 = *(long *)(param_1 + 0x3a0);
      if (lVar9 != 0) {
        FUN_10057097c(lVar9,3);
      }
      plVar6[0xe] = 0;
      plVar8 = plVar6 + 0xc;
      plVar10 = (long *)plVar6[0xd];
      *plVar10 = *plVar8;
      *(long **)(*plVar8 + 8) = plVar10;
      *plVar8 = (long)plVar8;
      plVar6[0xd] = (long)plVar8;
      if ((lVar9 != 0) && (lVar9 != 0)) {
        FUN_100570990(lVar9,3);
      }
    }
    uVar3 = *(uint *)(plVar6 + 3);
    if ((uVar3 != 0) && ((int)uVar3 < 0x24)) {
      *(undefined8 *)(param_1 + (ulong)uVar3 * 8 + 0x3b0) = 0;
    }
    plVar8 = plVar6 + 9;
    plVar10 = (long *)plVar6[10];
    *plVar10 = *plVar8;
    *(long **)(*plVar8 + 8) = plVar10;
    *plVar8 = (long)plVar8;
    plVar6[10] = (long)plVar8;
    if ((char)plVar6[7] != '\0') {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*plVar6,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                    ,0x2ad);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar6,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                  ,0x2b0);
LAB_1005e15ec:
    if (param_2 == 0) {
      return 0;
    }
  }
LAB_1005e1410:
  if ((int)plVar6[0x11] != param_2) goto code_r0x0001005e141c;
  param_2 = (int)plVar6[0x1f];
  plVar8 = (long *)plVar6[1];
  *plVar8 = *plVar6;
  *(long **)(*plVar6 + 8) = plVar8;
  *plVar6 = (long)plVar6;
  plVar6[1] = (long)plVar6;
  *(undefined4 *)(plVar6 + 3) = 0xffffffff;
  plVar6[2] = 0;
  uVar5 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
  uVar7 = 0x276;
LAB_1005e14fc:
  FUN_1005d7f1c(uVar5,plVar6,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                ,uVar7);
  goto LAB_1005e15ec;
code_r0x0001005e141c:
  plVar6 = (long *)*plVar6;
  if (plVar6 == plVar1) goto LAB_1005e142c;
  goto LAB_1005e1410;
}




undefined8 FUN_1005e1628(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x3a0) = param_2;
  return 0;
}




undefined8 FUN_1005e1634(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x3a0);
  return 0;
}




undefined8 FUN_1005e1644(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1005ecb6c(param_2);
  if (iVar1 < 0x100) {
    FUN_1005ecc98(param_1,param_2,0x100);
    uVar2 = 0;
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}




undefined8 FUN_1005e1690(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x278);
  while( true ) {
    if (puVar1 == (undefined8 *)(param_1 + 0x278)) {
      return 0x36;
    }
    if (*(int *)(puVar1 + 0x1a) == param_2) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  *param_3 = puVar1;
  return 0;
}




undefined8 FUN_1005e16d8(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  while( true ) {
    if (puVar1 == (undefined8 *)(param_1 + 0x178)) {
      return 0x36;
    }
    if (*(int *)(puVar1 + 0x11) == param_2) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  *param_3 = puVar1;
  return 0;
}




undefined8 FUN_1005e1720(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  
  if (param_3 == (long *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  plVar1 = (long *)(param_1 + 0x148);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)(param_1 + 0x148)) {
      return 0x36;
    }
  } while (*(int *)(plVar1[2] + 0x14) != param_2);
  *param_3 = plVar1[2];
  return 0;
}




undefined8
FUN_1005e1768(long param_1,long *param_2,undefined4 *param_3,uint param_4,undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == (long *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    plVar2 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                                   ,0x2d1,0);
    *(undefined4 *)(plVar2 + 3) = 0xffffffff;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[2] = 0;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0x26;
    }
    else {
      *(undefined4 *)(plVar2 + 0x1f) = 0;
      plVar2[4] = *param_2;
      *(int *)(plVar2 + 5) = (int)param_2[1];
      *(int *)(plVar2 + 6) = (int)param_2[2];
      *(undefined4 *)((long)plVar2 + 0x2c) = *(undefined4 *)((long)param_2 + 0xc);
      plVar2[7] = param_2[3];
      plVar2[8] = param_2[4];
      plVar2[9] = param_2[5];
      plVar2[10] = param_2[6];
      plVar2[0xb] = param_2[7];
      plVar2[0xc] = param_2[8];
      plVar2[0xd] = param_2[9];
      plVar2[0xe] = param_2[10];
      *(int *)(plVar2 + 0xf) = (int)param_2[0xb];
      *(undefined4 *)((long)plVar2 + 0x7c) = *(undefined4 *)((long)param_2 + 0x5c);
      plVar2[0x10] = param_2[0xc];
      *(undefined4 *)((long)plVar2 + 0x8c) = *(undefined4 *)((long)param_2 + 0x6c);
      plVar2[0x13] = param_2[0xf];
      plVar2[0x14] = param_2[0x10];
      plVar2[0x15] = param_2[0x11];
      plVar2[0x16] = param_2[0x12];
      plVar2[0x17] = param_2[0x13];
      plVar2[0x18] = param_2[0x14];
      plVar2[0x19] = param_2[0x15];
      plVar2[0x1a] = param_2[0x16];
      plVar2[0x1b] = param_2[0x17];
      plVar2[0x1c] = param_2[0x18];
      plVar2[0x1d] = param_2[0x19];
      plVar2[0x1e] = param_2[0x1a];
      iVar1 = *(int *)(param_1 + 0x3a8);
      *(int *)(param_1 + 0x3a8) = iVar1 + 1;
      *(int *)(plVar2 + 0x11) = iVar1;
      plVar2[0x12] = param_2[0xe];
      plVar4 = *(long **)(param_1 + 0x178);
      do {
        if (param_4 < *(uint *)(plVar4 + 3)) {
          *(uint *)(plVar2 + 3) = param_4;
          lVar5 = plVar4[1];
          *plVar2 = (long)plVar4;
          plVar2[1] = lVar5;
          plVar4[1] = (long)plVar2;
          goto LAB_1005e1928;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4[1] != param_1 + 0x178);
      *(uint *)(plVar2 + 3) = param_4;
      lVar5 = *(long *)(param_1 + 0x180);
      *plVar2 = param_1 + 0x178;
      plVar2[1] = lVar5;
      *(long **)(param_1 + 0x180) = plVar2;
LAB_1005e1928:
      *(long **)plVar2[1] = plVar2;
      if (param_5 != (undefined8 *)0x0) {
        if ((int *)*param_5 != (int *)0x0) {
          *(int *)*param_5 = iVar1;
        }
        *param_5 = plVar2 + 0x1f;
      }
      if (param_3 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        *param_3 = (int)plVar2[0x11];
      }
    }
  }
  return uVar3;
}




undefined8
FUN_1005e1974(long param_1,long *param_2,undefined4 *param_3,uint param_4,undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == (long *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    plVar2 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                                   ,0x31e,0);
    *(undefined4 *)(plVar2 + 3) = 0xffffffff;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[2] = 0;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0x26;
    }
    else {
      *(undefined4 *)(plVar2 + 0x1f) = 0;
      plVar2[4] = *param_2;
      *(int *)(plVar2 + 5) = (int)param_2[1];
      *(int *)(plVar2 + 6) = (int)param_2[2];
      *(undefined4 *)((long)plVar2 + 0x2c) = *(undefined4 *)((long)param_2 + 0xc);
      plVar2[7] = param_2[3];
      plVar2[8] = param_2[4];
      plVar2[9] = param_2[5];
      plVar2[10] = param_2[6];
      plVar2[0xb] = param_2[7];
      plVar2[0xc] = param_2[8];
      plVar2[0xd] = param_2[9];
      plVar2[0xe] = param_2[10];
      plVar2[0xf] = 0x19800000000;
      iVar1 = *(int *)(param_1 + 0x3a8);
      *(int *)(param_1 + 0x3a8) = iVar1 + 1;
      *(int *)(plVar2 + 0x11) = iVar1;
      plVar4 = *(long **)(param_1 + 0x178);
      do {
        if (param_4 < *(uint *)(plVar4 + 3)) {
          *(uint *)(plVar2 + 3) = param_4;
          lVar5 = plVar4[1];
          *plVar2 = (long)plVar4;
          plVar2[1] = lVar5;
          plVar4[1] = (long)plVar2;
          goto LAB_1005e1ab4;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4[1] != param_1 + 0x178);
      *(uint *)(plVar2 + 3) = param_4;
      lVar5 = *(long *)(param_1 + 0x180);
      *plVar2 = param_1 + 0x178;
      plVar2[1] = lVar5;
      *(long **)(param_1 + 0x180) = plVar2;
LAB_1005e1ab4:
      *(long **)plVar2[1] = plVar2;
      if (param_5 != (undefined8 *)0x0) {
        if ((int *)*param_5 != (int *)0x0) {
          *(int *)*param_5 = iVar1;
        }
        *param_5 = plVar2 + 0x1f;
      }
      if (param_3 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        *param_3 = (int)plVar2[0x11];
      }
    }
  }
  return uVar3;
}




undefined8
FUN_1005e1b00(long param_1,long *param_2,uint *param_3,undefined4 *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  void *pvVar8;
  size_t sVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  ulong local_68;
  
  if (param_2 == (long *)0x0) {
    uVar6 = 0x1f;
  }
  else if (((uint *)*param_2 == (uint *)0x0) || (*(uint *)*param_2 < 0x6d)) {
    if ((param_3 == (uint *)0x0) || (*param_3 < 0x6d)) {
      plVar7 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x78,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                                     ,0x365,0);
      plVar1 = plVar7 + 9;
      plVar7[9] = (long)plVar1;
      plVar7[10] = (long)plVar1;
      plVar7[0xb] = 0;
      plVar2 = plVar7 + 0xc;
      plVar7[0xc] = (long)plVar2;
      plVar7[0xd] = (long)plVar2;
      plVar7[0xe] = 0;
      if (plVar7 == (long *)0x0) {
        uVar6 = 0x26;
      }
      else {
        plVar7[6] = param_2[6];
        lVar13 = param_2[4];
        plVar7[5] = param_2[5];
        plVar7[4] = lVar13;
        lVar13 = param_2[2];
        plVar7[3] = param_2[3];
        plVar7[2] = lVar13;
        lVar13 = *param_2;
        plVar7[1] = param_2[1];
        *plVar7 = lVar13;
        if (param_3 == (uint *)0x0) {
          pvVar8 = (void *)*plVar7;
        }
        else {
          pvVar8 = (void *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                         param_3[0x18] * 0x68 + 0xd8,
                                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                                         ,0x374,0);
          if (pvVar8 == (void *)0x0) {
            return 0x26;
          }
          if (*param_3 < 0x6a) {
            sVar9 = 0xc0;
          }
          else {
            sVar9 = 0xd8;
          }
          _memcpy(pvVar8,param_3,sVar9);
          lVar13 = (long)pvVar8 + 0xd8;
          *(long *)((long)pvVar8 + 0x68) = lVar13;
          uVar11 = (ulong)param_3[0x18];
          if (0 < (int)param_3[0x18]) {
            lVar14 = 0;
            lVar15 = 0;
            while( true ) {
              lVar12 = lVar15 * 8;
              *(long *)(lVar13 + lVar12) = lVar13 + lVar14 + (long)(int)uVar11 * 8;
              _memcpy(*(void **)(*(long *)((long)pvVar8 + 0x68) + lVar12),
                      *(void **)(*(long *)(param_3 + 0x1a) + lVar12),0x60);
              lVar15 = lVar15 + 1;
              uVar11 = (ulong)(int)param_3[0x18];
              if ((long)uVar11 <= lVar15) break;
              lVar13 = *(long *)((long)pvVar8 + 0x68);
              lVar14 = lVar14 + 0x60;
            }
          }
          *plVar7 = (long)pvVar8;
          *(undefined1 *)(plVar7 + 7) = 1;
        }
        if (*(long *)((long)pvVar8 + 0xc0) != 0) {
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_98 = 0;
          local_68 = (ulong)*(uint *)(*(long *)(param_1 + 0x3a0) + 0x15ce0);
          local_70 = *(long *)(param_1 + 0x3a0) + 0x15e68;
          uVar6 = (**(code **)(*plVar7 + 0xc0))(&local_98);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          pvVar8 = (void *)*plVar7;
        }
        if (*(long *)((long)pvVar8 + 0xd0) != 0) {
          lVar13 = *(long *)(param_1 + 0x3a0);
          bVar10 = true;
          if ((lVar13 != 0) && (*(char *)(lVar13 + 8) != '\0')) {
            FUN_10057097c(lVar13,3);
            bVar10 = false;
          }
          plVar3 = (long *)plVar7[0xd];
          *plVar3 = plVar7[0xc];
          *(long **)(plVar7[0xc] + 8) = plVar3;
          plVar7[0xd] = (long)plVar2;
          lVar14 = *(long *)(param_1 + 0x168);
          plVar7[0xc] = param_1 + 0x160;
          plVar7[0xd] = lVar14;
          *(long **)(param_1 + 0x168) = plVar2;
          *(long **)plVar7[0xd] = plVar2;
          plVar7[0xe] = (long)plVar7;
          if ((lVar13 != 0) && (!bVar10)) {
            FUN_100570990(lVar13,3);
          }
        }
        *(undefined4 *)(plVar7 + 8) = 0;
        iVar4 = *(int *)(param_1 + 0x3a8);
        *(int *)(param_1 + 0x3a8) = iVar4 + 1;
        *(int *)((long)plVar7 + 0x14) = iVar4;
        lVar13 = *(long *)(param_1 + 0x150);
        plVar7[9] = param_1 + 0x148;
        plVar7[10] = lVar13;
        *(long **)(param_1 + 0x150) = plVar1;
        *(long **)plVar7[10] = plVar1;
        plVar7[0xb] = (long)plVar7;
        uVar5 = *(uint *)(plVar7 + 3);
        if ((uVar5 != 0) && ((int)uVar5 < 0x24)) {
          *(long **)(param_1 + (ulong)uVar5 * 8 + 0x3b0) = plVar7;
        }
        if (param_5 != (undefined8 *)0x0) {
          if ((int *)*param_5 != (int *)0x0) {
            *(int *)*param_5 = iVar4;
          }
          *param_5 = plVar7 + 8;
        }
        if (param_4 == (undefined4 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          *param_4 = *(undefined4 *)((long)plVar7 + 0x14);
        }
      }
    }
    else {
      uVar6 = 0x38;
    }
  }
  else {
    uVar6 = 0x38;
  }
  return uVar6;
}




void FUN_1005e1e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0x1c8;
  FUN_1005e1b00(param_1,&local_48,param_2,param_3,param_4);
  return;
}




undefined8 FUN_1005e1e68(long param_1,int *param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0x1f;
  }
  else if (*param_2 == 2) {
    plVar2 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x128,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                                   ,0x3ee,0);
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[2] = 0;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0x26;
    }
    else {
      _memcpy(plVar2 + 3,param_2,0x108);
      *(undefined4 *)(plVar2 + 0x24) = 0;
      iVar1 = *(int *)(param_1 + 0x3a8);
      *(int *)(param_1 + 0x3a8) = iVar1 + 1;
      *(int *)(plVar2 + 0x1a) = iVar1;
      lVar4 = *(long *)(param_1 + 0x280);
      *plVar2 = param_1 + 0x278;
      plVar2[1] = lVar4;
      *(long **)(param_1 + 0x280) = plVar2;
      *(long **)plVar2[1] = plVar2;
      if (param_4 != (undefined8 *)0x0) {
        if ((int *)*param_4 != (int *)0x0) {
          *(int *)*param_4 = iVar1;
        }
        *param_4 = plVar2 + 0x24;
      }
      if (param_3 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        *param_3 = (int)plVar2[0x1a];
      }
    }
  }
  else {
    uVar3 = 0x38;
  }
  return uVar3;
}




undefined8
FUN_1005e1f6c(long param_1,int *param_2,undefined4 *param_3,undefined8 *param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x1f;
  }
  else if (*param_2 - 1U < 2) {
    plVar3 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x128,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                                   ,0x41f,0);
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    plVar3[2] = 0;
    if (plVar3 == (long *)0x0) {
      uVar2 = 0x26;
    }
    else {
      if (*param_2 == 1) {
        _memcpy(plVar3 + 3,param_2,0x98);
        plVar3[0x16] = 0;
        plVar3[0x17] = 0;
      }
      else {
        _memcpy(plVar3 + 3,param_2,0xa8);
      }
      *(undefined4 *)(plVar3 + 0x24) = 0;
      *(undefined4 *)(plVar3 + 0x18) = param_5;
      *(undefined4 *)((long)plVar3 + 0xc4) = 0x330;
      iVar1 = *(int *)(param_1 + 0x3a8);
      *(int *)(param_1 + 0x3a8) = iVar1 + 1;
      *(int *)(plVar3 + 0x1a) = iVar1;
      lVar4 = *(long *)(param_1 + 0x280);
      *plVar3 = param_1 + 0x278;
      plVar3[1] = lVar4;
      *(long **)(param_1 + 0x280) = plVar3;
      *(long **)plVar3[1] = plVar3;
      if (param_4 != (undefined8 *)0x0) {
        if ((int *)*param_4 != (int *)0x0) {
          *(int *)*param_4 = iVar1;
        }
        *param_4 = plVar3 + 0x24;
      }
      if (param_3 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        *param_3 = (int)plVar3[0x1a];
      }
    }
  }
  else {
    uVar2 = 0x38;
  }
  return uVar2;
}




undefined8 FUN_1005e20a0(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = -1;
    plVar2 = (long *)(param_1 + 0x178);
    do {
      plVar2 = (long *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (long *)(param_1 + 0x178));
    *param_2 = iVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e20d4(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = -1;
    plVar2 = (long *)(param_1 + 0x148);
    do {
      plVar2 = (long *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (long *)(param_1 + 0x148));
    *param_2 = iVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e2108(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = -1;
    plVar2 = (long *)(param_1 + 0x278);
    do {
      plVar2 = (long *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (long *)(param_1 + 0x278));
    *param_2 = iVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e213c(long param_1,int param_2,int *param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (param_3 == (int *)0x0) {
    return 0x1f;
  }
  plVar1 = (long *)(param_1 + 0x178);
  iVar2 = 1;
LAB_1005e2150:
  *param_3 = iVar2;
  plVar3 = (long *)(param_1 + 0x148);
  do {
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)(param_1 + 0x148)) {
      puVar4 = *(undefined8 **)(param_1 + 0x278);
      goto LAB_1005e2188;
    }
  } while (*(int *)(plVar3[2] + 0x14) != param_2);
  plVar3 = (long *)(plVar3[2] + 0x40);
  goto LAB_1005e21d0;
LAB_1005e2188:
  if (puVar4 == (undefined8 *)(param_1 + 0x278)) goto LAB_1005e21a4;
  if (*(int *)(puVar4 + 0x1a) == param_2) {
    plVar3 = puVar4 + 0x24;
    goto LAB_1005e21d0;
  }
  puVar4 = (undefined8 *)*puVar4;
  goto LAB_1005e2188;
LAB_1005e21a4:
  plVar3 = (long *)*plVar1;
  if (plVar3 == plVar1) {
    return 0x36;
  }
  while ((int)plVar3[0x11] != param_2) {
    plVar3 = (long *)*plVar3;
    if (plVar3 == plVar1) {
      return 0x36;
    }
  }
  plVar3 = plVar3 + 0x1f;
LAB_1005e21d0:
  param_2 = (int)*plVar3;
  iVar2 = iVar2 + 1;
  if (param_2 == 0) {
    return 0;
  }
  goto LAB_1005e2150;
}




undefined8 FUN_1005e21fc(long param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  plVar2 = (long *)(param_1 + 0x148);
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)(param_1 + 0x148)) {
      puVar1 = *(undefined8 **)(param_1 + 0x278);
      while( true ) {
        if (puVar1 == (undefined8 *)(param_1 + 0x278)) {
          plVar2 = *(long **)(param_1 + 0x178);
          if (plVar2 == (long *)(param_1 + 0x178)) {
            return 0x36;
          }
          do {
            if ((int)plVar2[0x11] == param_2) {
              *param_3 = (int)plVar2[0x1f];
              return 0;
            }
            plVar2 = (long *)*plVar2;
          } while (plVar2 != (long *)(param_1 + 0x178));
          return 0x36;
        }
        if (*(int *)(puVar1 + 0x1a) == param_2) break;
        puVar1 = (undefined8 *)*puVar1;
      }
      *param_3 = *(undefined4 *)(puVar1 + 0x24);
      return 0;
    }
  } while (*(int *)(plVar2[2] + 0x14) != param_2);
  *param_3 = *(undefined4 *)(plVar2[2] + 0x40);
  return 0;
}




undefined8 FUN_1005e22bc(long param_1,int param_2,int param_3,int *param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if (param_4 == (int *)0x0) {
    return 0x1f;
  }
  *param_4 = 0;
  if (param_3 != 0) {
    iVar3 = 0;
    plVar1 = (long *)(param_1 + 0x148);
    plVar2 = (long *)(param_1 + 0x178);
    plVar4 = plVar1;
LAB_1005e22dc:
    do {
      plVar4 = (long *)*plVar4;
      if (plVar4 == plVar1) {
        for (puVar5 = *(undefined8 **)(param_1 + 0x278); puVar5 != (undefined8 *)(param_1 + 0x278);
            puVar5 = (undefined8 *)*puVar5) {
          if (*(int *)(puVar5 + 0x1a) == param_2) {
            plVar4 = puVar5 + 0x24;
            goto LAB_1005e2354;
          }
        }
        plVar4 = (long *)*plVar2;
        if (plVar4 == plVar2) {
          return 0x36;
        }
        while ((int)plVar4[0x11] != param_2) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == plVar2) {
            return 0x36;
          }
        }
        plVar4 = plVar4 + 0x1f;
      }
      else {
        if (*(int *)(plVar4[2] + 0x14) != param_2) goto LAB_1005e22dc;
        plVar4 = (long *)(plVar4[2] + 0x40);
      }
LAB_1005e2354:
      param_2 = (int)*plVar4;
      if (param_2 == 0) {
        return 0x1f;
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar1;
    } while (iVar3 != param_3);
  }
  *param_4 = param_2;
  return 0;
}




undefined8 FUN_1005e238c(long param_1,int param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (param_2 < 0) {
    return 0x1f;
  }
  plVar1 = (long *)(param_1 + 0x178);
  plVar2 = (long *)*plVar1;
  if (plVar2 == plVar1) {
    return 0x1f;
  }
  if (0 < param_2) {
    param_2 = param_2 + 1;
    do {
      plVar2 = (long *)*plVar2;
      if (plVar2 == plVar1) {
        return 0x1f;
      }
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  if (plVar2 != (long *)0x0) {
    *param_3 = (int)plVar2[0x11];
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e2404(long param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (0 < param_2) {
    param_2 = param_2 + 1;
    do {
      puVar1 = (undefined8 *)*puVar1;
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  if (puVar1[2] != 0) {
    *param_3 = *(undefined4 *)(puVar1[2] + 0x14);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e2450(long param_1,int param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (param_2 < 0) {
    return 0x1f;
  }
  plVar1 = (long *)(param_1 + 0x278);
  plVar2 = (long *)*plVar1;
  if (plVar2 == plVar1) {
    return 0x1f;
  }
  if (0 < param_2) {
    param_2 = param_2 + 1;
    do {
      plVar2 = (long *)*plVar2;
      if (plVar2 == plVar1) {
        return 0x1f;
      }
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  if (plVar2 != (long *)0x0) {
    *param_3 = (int)plVar2[0x1a];
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e24c8(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x3b0);
  if (lVar1 != 0) {
    *param_3 = lVar1;
    return 0;
  }
  return 0x36;
}




undefined8 FUN_1005e24e8(undefined8 param_1,void *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0x1f;
  if ((param_2 != (void *)0x0) && (param_3 != (long *)0x0)) {
    uVar1 = 0x198;
    if (0x197 < *(uint *)((long)param_2 + 0x5c)) {
      uVar1 = *(uint *)((long)param_2 + 0x5c);
    }
    lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar1,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                          ,0x619,0);
    puVar2 = PTR_defaultFileRead_101444158;
    *(undefined4 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x168) = 0;
    *(undefined8 *)(lVar4 + 0x188) = 0;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    *(undefined8 *)(lVar4 + 0x158) = 0;
    *(undefined8 *)(lVar4 + 0x140) = 0;
    *(undefined8 *)(lVar4 + 0x148) = 0;
    *(undefined **)(lVar4 + 0x28) = puVar2;
    *(undefined **)(lVar4 + 0x30) = PTR_defaultFileSeek_101444160;
    *(undefined **)(lVar4 + 0x38) = PTR_defaultMetaData_101444168;
    if (lVar4 == 0) {
      uVar3 = 0x26;
    }
    else {
      _memcpy((void *)(lVar4 + 0x58),param_2,0xd8);
      *param_3 = lVar4;
      if (*(long *)(lVar4 + 0xa8) == 0) {
        uVar3 = 0;
        *(undefined **)(lVar4 + 0xa8) = PTR_defaultGetWaveFormat_101444170;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005e25cc(long param_1,void **param_2,void *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  void *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_4 == (undefined8 *)0x0) {
    return 0x1f;
  }
  if (param_2 == (void **)0x0) {
    if (param_3 == (void *)0x0) {
      return 0x1f;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    local_68 = 0;
    local_78 = (void *)0x0;
    pvVar5 = (void *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                   *(int *)((long)param_3 + 0x60) * 0x68 + 0xd8,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                                   ,0x655,0);
    if (pvVar5 == (void *)0x0) {
      return 0x26;
    }
    local_68 = CONCAT44(local_68._4_4_,0x1c8);
    local_78 = pvVar5;
    _memcpy(pvVar5,param_3,0xd8);
    lVar11 = (long)pvVar5 + 0xd8;
    *(long *)((long)pvVar5 + 0x68) = lVar11;
    uVar7 = (ulong)*(uint *)((long)param_3 + 0x60);
    pvVar10 = pvVar5;
    if (0 < (int)*(uint *)((long)param_3 + 0x60)) {
      lVar8 = 0;
      lVar13 = 0;
      while( true ) {
        lVar9 = lVar13 * 8;
        *(long *)(lVar11 + lVar9) = lVar11 + lVar8 + (long)(int)uVar7 * 8;
        _memcpy(*(void **)(*(long *)((long)pvVar5 + 0x68) + lVar9),
                *(void **)(*(long *)((long)param_3 + 0x68) + lVar9),0x60);
        lVar13 = lVar13 + 1;
        uVar7 = (ulong)*(int *)((long)param_3 + 0x60);
        pvVar10 = local_78;
        if ((long)uVar7 <= lVar13) break;
        lVar11 = *(long *)((long)pvVar5 + 0x68);
        lVar8 = lVar8 + 0x60;
      }
    }
    local_70 = (long)pvVar10 + 4;
    if (*(long *)((long)pvVar5 + 0x50) == 0) {
      *(undefined8 *)((long)pvVar5 + 0x28) = 0x100000001;
    }
    param_2 = &local_78;
    bVar3 = true;
  }
  else if (param_2[1] == (void *)0x0) {
    if (*param_2 == (void *)0x0) {
      bVar3 = false;
    }
    else {
      bVar3 = false;
      param_2[1] = (void *)((long)*param_2 + 4);
    }
  }
  else {
    bVar3 = false;
  }
  iVar2 = *(int *)(param_2 + 2);
  if (iVar2 < 0) {
    return 0x1c;
  }
  plVar12 = (long *)*param_4;
  if (plVar12 == (long *)0x0) {
    if (*(int *)(param_2 + 3) == 0x3e9) {
      iVar1 = 0x288;
      if (0x287 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(param_2 + 2) = iVar1;
      lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 + 0x10,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                             ,0x6a1,0);
      if (lVar11 == 0) {
        return 0x26;
      }
      plVar12 = (long *)FUN_1005c14ac(lVar11 + 0xfU & 0xfffffffffffffff0);
      puVar4 = PTR_DAT_1014441c0;
      plVar12[0x4a] = (long)(plVar12 + 0x4b);
      *plVar12 = (long)(puVar4 + 0x10);
      plVar12[0x50] = 0;
      plVar12[0x4f] = 0;
      plVar12[0x4e] = 0;
      plVar12[0x4d] = 0;
      plVar12[0x4c] = 0;
      plVar12[0x4b] = 0;
      lVar8 = lVar11;
      if (plVar12 != (long *)0x0) {
        plVar12 = plVar12 + 1;
        goto LAB_1005e28bc;
      }
    }
    else {
      iVar1 = 0x1c8;
      if (0x1c7 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(param_2 + 2) = iVar1;
      lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 + 0x10,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                             ,0x6b8,0);
      if (lVar11 == 0) {
        return 0x26;
      }
      plVar12 = (long *)(lVar11 + 0xfU & 0xfffffffffffffff0);
      FUN_1005cd4b0(plVar12);
LAB_1005e28bc:
      plVar12[0x22] = lVar11;
      lVar8 = _DAT_00000110;
      if (plVar12 != (long *)0x0) goto LAB_1005e274c;
    }
    _DAT_00000110 = lVar8;
    *param_4 = 0;
    uVar6 = 0x26;
  }
  else {
    lVar11 = 0;
LAB_1005e274c:
    lVar8 = *(long *)(param_1 + 0x3a0);
    plVar12[0x12] = lVar8;
    plVar12[0x18] = lVar8 + 0x15e68;
    *(undefined4 *)(plVar12 + 0x19) = *(undefined4 *)(lVar8 + 0x15ce0);
    uVar6 = FUN_1005c934c(plVar12,param_2);
    if ((int)uVar6 == 0) {
      if (bVar3) {
        *(ushort *)((long)plVar12 + 0x3c) = *(ushort *)((long)plVar12 + 0x3c) | 2;
      }
      uVar6 = 0;
      *param_4 = plVar12;
    }
    else if (lVar11 != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar11,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                    ,0x6d8);
    }
  }
  return uVar6;
}




undefined8 FUN_1005e2904(long param_1,void *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = 0x330;
  if (0x32f < *(uint *)((long)param_2 + 0xac)) {
    uVar1 = *(uint *)((long)param_2 + 0xac);
  }
  lVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar1,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_pluginfactory.cpp"
                        ,0x6f6,0);
  FUN_1005dc160();
  if (lVar3 == 0) {
    lVar3 = 0;
    uVar4 = 0x26;
  }
  else {
    _memcpy((void *)(lVar3 + 0x228),param_2,0x108);
    puVar2 = PTR_pluginAlloc_101444180;
    uVar4 = 0;
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_1 + 0x3a0);
    *(code **)(lVar3 + 0x10) = FUN_1005ddd40;
    *(code **)(lVar3 + 0x30) = FUN_1005ddd54;
    *(undefined **)(lVar3 + 0x18) = puVar2;
    *(undefined **)(lVar3 + 0x20) = PTR_pluginFree_101444178;
    *(undefined **)(lVar3 + 0x28) = PTR_pluginLog_101444188;
  }
  *param_3 = lVar3;
  return uVar4;
}




undefined8 FUN_1005e29d8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar2;
  uVar1 = FUN_1005e35ac(param_1,&local_140);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005e3650(local_140,1), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar1,10,param_1,"Reverb3D::release",local_138);
  }
  if (lVar2 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e2a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_160;
  undefined1 local_158 [256];
  long local_58;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar2;
  uVar1 = FUN_1005e35ac(param_3,&local_160);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1005e3970(param_1,param_2,local_160,param_4), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_158[0] = 0;
    FUN_1005acff8(uVar1,10,param_3,"Reverb3D::set3DAttributes",local_158);
  }
  if (lVar2 == local_58) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e2b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005e35ac(param_1,&local_170);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005e39bc(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563284(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,10,param_1,"Reverb3D::get3DAttributes",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e2ca4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e35ac(param_1,&local_150);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005e36bc(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,10,param_1,"Reverb3D::setProperties",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e2d6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e35ac(param_1,&local_150);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005e39f0(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,10,param_1,"Reverb3D::getProperties",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e2e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e35ac(param_1,&local_150);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005e3a24(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,10,param_1,"Reverb3D::setActive",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e2efc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e35ac(param_1,&local_150);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005e3a30(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056322c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,10,param_1,"Reverb3D::getActive",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e2fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e35ac(param_1,&local_150);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005e3a54(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,10,param_1,"Reverb3D::setUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e308c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e35ac(param_1,&local_150);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005e3a60(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,10,param_1,"Reverb3D::getUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e3154(long *param_1,uint param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined4 local_44;
  long local_40;
  int local_34;
  
  if (param_2 < 4) {
    *param_1 = param_3;
    *(uint *)(param_1 + 3) = param_2;
    if (param_1[2] == 0) {
      lVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_3 + 0x1a8) << 4
                            ,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_reverbi.cpp"
                            ,0x2f,0);
      param_1[2] = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
      param_3 = *param_1;
      iVar7 = *(int *)(param_3 + 0x1a8);
      if (0 < iVar7) {
        lVar4 = 0;
        puVar5 = (undefined8 *)(lVar3 + 8);
        do {
          *(undefined4 *)(puVar5 + -1) = 0x3f800000;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + -1) = 0x3f800000;
          *puVar5 = 0;
          lVar4 = lVar4 + 1;
          puVar5 = puVar5 + 2;
        } while (lVar4 < iVar7);
      }
    }
    plVar6 = param_1 + 1;
    if (*plVar6 == 0) {
      uVar2 = FUN_1005e20d4(*(undefined8 *)(param_3 + 0x15a58),&local_34);
      if ((int)uVar2 == 0) {
        if (0 < local_34) {
          iVar7 = 0;
          do {
            local_40 = 0;
            iVar1 = FUN_1005e2404(*(undefined8 *)(*param_1 + 0x15a58),iVar7,&local_44);
            if (((iVar1 == 0) &&
                (iVar1 = FUN_1005e1720(*(undefined8 *)(*param_1 + 0x15a58),local_44,&local_40),
                iVar1 == 0)) && (*(int *)(local_40 + 0x18) == 0x13)) {
              uVar2 = FUN_1005e25cc(*(undefined8 *)(*param_1 + 0x15a58),local_40,0,plVar6);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              iVar7 = *(int *)(*param_1 + 0x160b0);
              if (iVar7 < 1000) {
                iVar1 = 1;
                switch(iVar7) {
                case 2:
                  break;
                case 3:
                  iVar1 = 2;
                  break;
                case 4:
                case 5:
                case 6:
                  iVar1 = iVar7;
                  break;
                case 7:
                  iVar1 = 8;
                  break;
                default:
                  goto switchD_1005e3308_default;
                }
              }
              else {
                if (iVar7 == 1000) {
                  iVar1 = 2;
                  goto switchD_1005e3308_caseD_2;
                }
switchD_1005e3308_default:
                iVar1 = 0;
              }
switchD_1005e3308_caseD_2:
              FUN_1005c9948(param_1[1],0,iVar1);
              uVar2 = FUN_1005cef0c(0xc2a00000,*plVar6,0xc);
              return uVar2;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_34);
        }
        uVar2 = 0x36;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}




undefined8 FUN_1005e3370(long param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    *puVar1 = 0x3f800000;
    *(undefined8 *)(puVar1 + 2) = 0;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e3398(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x10),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_reverbi.cpp"
                  ,0x82);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1005ceac4(*(long *)(param_1 + 8),0,0);
    if (((int)uVar1 == 0) &&
       (uVar1 = FUN_1005cdc44(*(undefined8 *)(param_1 + 8),1,0), (int)uVar1 == 0)) {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_1005e341c(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10 + 8) = 0;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e343c(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1005c986c(*(long *)(param_1 + 8),1,1);
    uVar1 = FUN_1005cef0c(*param_2,*(undefined8 *)(param_1 + 8),0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[1],*(undefined8 *)(param_1 + 8),1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[2],*(undefined8 *)(param_1 + 8),2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[3],*(undefined8 *)(param_1 + 8),3);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[4],*(undefined8 *)(param_1 + 8),4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[5],*(undefined8 *)(param_1 + 8),5);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[6],*(undefined8 *)(param_1 + 8),6);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[7],*(undefined8 *)(param_1 + 8),7);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[8],*(undefined8 *)(param_1 + 8),8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[9],*(undefined8 *)(param_1 + 8),9);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[10],*(undefined8 *)(param_1 + 8),10);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005cef0c(param_2[0xb],*(undefined8 *)(param_1 + 8),0xb);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}




void FUN_1005e3564(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}




void FUN_1005e3588(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}




undefined8 FUN_1005e35ac(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (param_1 != 0) {
    *param_2 = param_1;
    return 0;
  }
  return 0x1e;
}




undefined8 FUN_1005e35d4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xc2a0000042c00000;
  local_30 = 0x41a0000000000000;
  uStack_48 = 0x459c400041300000;
  local_50 = 0x40e00000447a0000;
  uStack_38 = 0x437a000042c80000;
  uStack_40 = 0x42c8000042c80000;
  param_1[10] = param_2;
  plVar1 = (long *)param_1[1];
  *plVar1 = *param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  if (param_2 != 0) {
    FUN_100571024(param_2);
  }
  FUN_1005e36bc(param_1,&local_50);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  return 0;
}




undefined8 FUN_1005e3650(long *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *plVar1 = *param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  if (param_1[10] != 0) {
    FUN_100571024();
  }
  if (param_2 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_reverbi.cpp"
                  ,0x18d);
  }
  return 0;
}




undefined8 FUN_1005e36bc(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  fVar2 = 100.0;
  if ((100.0 <= fVar1) && (fVar2 = 20000.0, fVar1 <= 20000.0)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x18) = fVar2;
  fVar2 = param_2[1];
  if (0.0 <= fVar2) {
    fVar1 = 300.0;
    if (fVar2 <= 300.0) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar2 = param_2[2];
  if (0.0 <= fVar2) {
    fVar1 = 100.0;
    if (fVar2 <= 100.0) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x20) = fVar1;
  fVar1 = param_2[3];
  fVar2 = 20.0;
  if ((20.0 <= fVar1) && (fVar2 = 20000.0, fVar1 <= 20000.0)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x24) = fVar2;
  fVar1 = param_2[4];
  fVar2 = 10.0;
  if ((10.0 <= fVar1) && (fVar2 = 100.0, fVar1 <= 100.0)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x28) = fVar2;
  fVar2 = param_2[5];
  if (0.0 <= fVar2) {
    fVar1 = 100.0;
    if (fVar2 <= 100.0) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x2c) = fVar1;
  fVar2 = param_2[6];
  if (0.0 <= fVar2) {
    fVar1 = 100.0;
    if (fVar2 <= 100.0) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x30) = fVar1;
  fVar1 = param_2[7];
  fVar2 = 20.0;
  if ((20.0 <= fVar1) && (fVar2 = 1000.0, fVar1 <= 1000.0)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x34) = fVar2;
  fVar1 = param_2[8];
  fVar2 = -36.0;
  if ((-36.0 <= fVar1) && (fVar2 = 12.0, fVar1 <= 12.0)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x38) = fVar2;
  fVar1 = param_2[9];
  fVar2 = 20.0;
  if ((20.0 <= fVar1) && (fVar2 = 20000.0, fVar1 <= 20000.0)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x3c) = fVar2;
  fVar2 = param_2[10];
  if (0.0 <= fVar2) {
    fVar1 = 100.0;
    if (fVar2 <= 100.0) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x40) = fVar1;
  fVar1 = param_2[0xb];
  fVar2 = -80.0;
  if ((-80.0 <= fVar1) && (fVar2 = 20.0, fVar1 <= 20.0)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x44) = fVar2;
  return 0;
}




undefined8 FUN_1005e38a8(long *param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
      return 0x3b;
    }
    return 0x3b;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*param_1 + 0x1a8))) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)
                  (lVar1 + (-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4));
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(lVar1 + (long)(int)param_2 * 0x10 + 8);
      return 0;
    }
    return 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e391c(undefined4 param_1,long *param_2,uint param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    return 0x3b;
  }
  if (-1 < (int)param_3) {
    if ((int)param_3 < *(int *)(*param_2 + 0x1a8)) {
      *(undefined4 *)
       (lVar1 + (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4)) = param_1;
      if (param_4 != 0) {
        *(long *)(lVar1 + (long)(int)param_3 * 0x10 + 8) = param_4;
      }
      return 0;
    }
    return 0x1f;
  }
  return 0x1f;
}




undefined8 FUN_1005e3970(float param_1,float param_2,long param_3,undefined8 *param_4)

{
  if (param_4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(param_3 + 0x60) = *param_4;
  }
  *(float *)(param_3 + 0x6c) = param_1;
  if (*(float *)(param_3 + 0x70) < param_1) {
    *(float *)(param_3 + 0x70) = param_1;
  }
  *(float *)(param_3 + 0x70) = param_2;
  if (param_2 < param_1) {
    *(float *)(param_3 + 0x6c) = param_2;
    param_1 = param_2;
  }
  *(float *)(param_3 + 0x74) = param_2 - param_1;
  return 0;
}




undefined8 FUN_1005e39bc(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x68);
    *param_2 = *(undefined8 *)(param_1 + 0x60);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x6c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x70);
  }
  return 0;
}




undefined8 FUN_1005e39f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    param_2[5] = *(undefined8 *)(param_1 + 0x40);
    param_2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    param_2[3] = *(undefined8 *)(param_1 + 0x30);
    param_2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    param_2[1] = *(undefined8 *)(param_1 + 0x20);
    *param_2 = uVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e3a24(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5c) = param_2;
  return 0;
}




undefined8 FUN_1005e3a30(long param_1,undefined1 *param_2)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *(undefined1 *)(param_1 + 0x5c);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e3a54(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 0;
}




undefined8 FUN_1005e3a60(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    return 0;
  }
  return 0x1f;
}




void FUN_1005e3a84(long param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x60);
  fVar2 = param_2[1] - *(float *)(param_1 + 100);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x68);
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar2 = 1.0;
  fVar1 = fVar2;
  if (*(float *)(param_1 + 0x6c) < fVar3) {
    if (*(float *)(param_1 + 0x70) <= fVar3) {
      fVar2 = 0.0;
      fVar1 = 0.0;
    }
    else if (0.0 < *(float *)(param_1 + 0x74)) {
      fVar1 = (fVar3 - *(float *)(param_1 + 0x6c)) / *(float *)(param_1 + 0x74);
      fVar2 = (float)_powf(0x41200000,fVar1 * -3.0);
      fVar1 = 1.0 - fVar1;
    }
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar2;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar1;
  }
  return;
}




void FUN_1005e3b54(float param_1,long param_2,long param_3)

{
  float fVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    fVar1 = (float)_expf(*(float *)(param_3 + 0x2c) * 0.2);
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + fVar1 * param_1;
  }
  return;
}




void FUN_1005e3ba8(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  if ((param_2 != (float *)0x0) && (param_3 != (float *)0x0)) {
    *param_2 = *param_2 + *param_3 * param_1;
    param_2[1] = param_2[1] + param_3[1] * param_1;
    param_2[2] = param_2[2] + param_3[2] * param_1;
    if (param_3[3] <= 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)_logf();
      fVar1 = fVar1 * param_1;
    }
    auVar2._0_8_ = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20) +
                            param_3[4] * param_1,(float)*(undefined8 *)(param_2 + 3) + fVar1);
    auVar2._8_4_ = (float)*(undefined8 *)(param_2 + 5) + param_3[5] * param_1;
    auVar2._12_4_ = (float)((ulong)*(undefined8 *)(param_2 + 5) >> 0x20) + param_3[6] * param_1;
    *(undefined8 *)(param_2 + 3) = auVar2._0_8_;
    auVar2 = NEON_ext(auVar2,auVar2,8,1);
    *(long *)(param_2 + 5) = auVar2._0_8_;
    if (param_3[7] <= 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)_logf();
      fVar1 = fVar1 * param_1;
    }
    param_2[7] = fVar1 + param_2[7];
    fVar1 = (float)_expf();
    param_2[8] = param_2[8] + fVar1 * param_1;
    if (param_3[9] <= 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)_logf();
      fVar1 = fVar1 * param_1;
    }
    param_2[9] = fVar1 + param_2[9];
    param_2[10] = param_2[10] + param_3[5] * param_1;
    fVar1 = (float)_expf();
    param_2[0xb] = param_2[0xb] + fVar1 * param_1;
  }
  return;
}




void FUN_1005e3d08(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  if ((param_2 != (float *)0x0) && (param_3 != (float *)0x0)) {
    *param_2 = *param_3 * param_1;
    param_2[1] = param_3[1] * param_1;
    param_2[2] = param_3[2] * param_1;
    fVar1 = (float)_expf(param_3[3] * param_1);
    param_2[3] = fVar1;
    param_2[4] = param_3[4] * param_1;
    param_2[5] = param_3[5] * param_1;
    param_2[6] = param_3[6] * param_1;
    fVar1 = (float)_expf(param_3[7] * param_1);
    param_2[7] = fVar1;
    fVar2 = -80.0;
    fVar1 = -80.0;
    if (0.0 < param_3[8]) {
      fVar1 = (float)_logf(param_3[8] * param_1);
      fVar1 = fVar1 * 5.0;
    }
    param_2[8] = fVar1;
    fVar1 = (float)_expf(param_3[9] * param_1);
    param_2[9] = fVar1;
    param_2[10] = param_3[10] * param_1;
    if (0.0 < param_3[0xb]) {
      fVar2 = (float)_logf(param_3[0xb] * param_1);
      fVar2 = fVar2 * 5.0;
    }
    param_2[0xb] = fVar2;
  }
  return;
}




void FUN_1005e3e18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005e7bb0();
  *puVar1 = &PTR_FUN_1014a2c90;
  *(undefined4 *)(puVar1 + 0x2f) = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  return;
}




void FUN_1005e3e44(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005e7bb0();
  *puVar1 = &PTR_FUN_1014a2c90;
  *(undefined4 *)(puVar1 + 0x2f) = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  return;
}




void FUN_1005e3e70(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  while (((*(int *)(param_1 + 0x108) != 0 && (*(int *)(param_1 + 0x108) != 2)) ||
         (*(char *)(param_1 + 0x54) != '\0'))) {
    FUN_1005dbaa8(2);
  }
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (iVar1 = FUN_10056f2dc(*(long *)(param_1 + 0xd0),param_1), iVar1 != 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x160),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_sample_software.cpp"
                  ,0x54);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x168);
  if ((lVar2 != 0) && (lVar2 != param_1 + 0x170)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_sample_software.cpp"
                  ,0x5b);
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_1005e7c3c(param_1,param_2);
  return;
}




undefined8 FUN_1005e3f4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_1005ec400();
  if ((int)uVar1 == 0) {
    FUN_1005e3f7c(param_1);
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1005e3f7c(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  
  uVar7 = *(int *)(param_1 + 0x28) - 1;
  if ((uVar7 < 5) && (pvVar9 = *(void **)(param_1 + 0x168), pvVar9 != (void *)0x0)) {
    iVar3 = *(int *)(param_1 + 0x60);
    uVar4 = *(uint *)(&DAT_10115f930 + (long)(int)uVar7 * 4);
    uVar11 = (ulong)((uVar4 & 0x1fffffff) * iVar3);
    iVar8 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x48);
    uVar6 = (uVar4 * (iVar2 + iVar8) >> 3) * iVar3;
    uVar15 = (ulong)uVar6;
    uVar7 = *(uint *)(param_1 + 0x2c);
    if ((uVar7 >> 2 & 1) == 0) {
      if ((uVar7 >> 1 & 1) == 0) {
        if (((uVar7 & 1) != 0) && (*(uint *)(param_1 + 0x178) != 0)) {
          _memcpy((void *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x178)),pvVar9,
                  uVar11);
          *(undefined4 *)(param_1 + 0x178) = 0;
        }
      }
      else {
        if (*(uint *)(param_1 + 0x178) != 0) {
          _memcpy((void *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x178)),pvVar9,
                  uVar11);
          pvVar9 = *(void **)(param_1 + 0x168);
        }
        _memcpy(pvVar9,(void *)(*(long *)(param_1 + 0x158) + uVar15),uVar11);
        *(uint *)(param_1 + 0x178) = uVar6;
        _memcpy((void *)(*(long *)(param_1 + 0x158) + uVar15),
                (void *)(*(long *)(param_1 + 0x158) + (ulong)((uVar4 * iVar8 >> 3) * iVar3)),uVar11)
        ;
      }
    }
    else {
      _memcpy(pvVar9,(void *)(*(long *)(param_1 + 0x158) + uVar15),uVar11);
      *(uint *)(param_1 + 0x178) = uVar6;
      switch(*(undefined4 *)(param_1 + 0x28)) {
      case 1:
        if (0 < *(int *)(param_1 + 0x60)) {
          lVar10 = 0;
          lVar1 = *(long *)(param_1 + 0x158) + (ulong)(iVar3 * (uVar4 * (iVar2 + iVar8) >> 3));
          lVar12 = -(long)*(int *)(param_1 + 0x60);
          do {
            *(undefined1 *)(lVar1 + lVar10) = *(undefined1 *)(lVar1 + lVar12);
            lVar10 = lVar10 + 1;
            lVar12 = lVar12 + -1;
          } while ((int)lVar10 < *(int *)(param_1 + 0x60) * 8);
        }
        break;
      case 2:
        iVar5 = *(int *)(param_1 + 0x60);
        if (0 < iVar5) {
          lVar10 = 0;
          lVar1 = *(long *)(param_1 + 0x158) + (ulong)(iVar3 * (uVar4 * (iVar2 + iVar8) >> 3));
          lVar12 = (long)iVar5 * -2;
          do {
            *(undefined2 *)(lVar1 + lVar10 * 2) = *(undefined2 *)(lVar1 + lVar12);
            lVar10 = lVar10 + 1;
            lVar12 = lVar12 + -2;
          } while ((int)lVar10 < iVar5 * 8);
        }
        break;
      case 3:
        if (0 < *(int *)(param_1 + 0x60)) {
          iVar8 = 0;
          puVar13 = (undefined1 *)
                    (*(long *)(param_1 + 0x158) + uVar15 + (long)*(int *)(param_1 + 0x60) * -3);
          puVar14 = (undefined1 *)(*(long *)(param_1 + 0x158) + uVar15);
          do {
            *puVar14 = *puVar13;
            puVar14[1] = puVar13[1];
            puVar14[2] = puVar13[2];
            iVar8 = iVar8 + 1;
            puVar13 = puVar13 + -3;
            puVar14 = puVar14 + 3;
          } while (iVar8 < *(int *)(param_1 + 0x60) * 8);
        }
        break;
      case 4:
      case 5:
        if (0 < *(int *)(param_1 + 0x60)) {
          lVar10 = 0;
          lVar1 = *(long *)(param_1 + 0x158) + (ulong)(iVar3 * (uVar4 * (iVar2 + iVar8) >> 3));
          lVar12 = (long)*(int *)(param_1 + 0x60) * -4;
          do {
            *(undefined4 *)(lVar1 + lVar10 * 4) = *(undefined4 *)(lVar1 + lVar12);
            lVar10 = lVar10 + 1;
            lVar12 = lVar12 + -4;
          } while ((int)lVar10 < *(int *)(param_1 + 0x60) * 8);
        }
      }
    }
  }
  return 0;
}




undefined8
FUN_1005e4224(long param_1,uint param_2,uint param_3,long *param_4,long *param_5,uint *param_6,
             int *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  uVar3 = *(int *)(param_1 + 0x28) - 1;
  if (uVar3 < 5) {
    uVar7 = *(uint *)(&DAT_10115f930 + (long)(int)uVar3 * 4) & 0x1fffffff;
  }
  else {
    uVar7 = 8;
  }
  uVar2 = *(uint *)(param_1 + 0x178);
  uVar1 = param_3 + param_2;
  uVar7 = uVar2 + uVar7 * *(int *)(param_1 + 0x60);
  bVar4 = uVar2 != 0;
  if (((((bVar4 && uVar2 < uVar1) && param_2 <= uVar7) &&
       ((!bVar4 || uVar1 <= uVar2) || uVar7 != param_2)) && uVar3 < 4 ||
       (((bVar4 && uVar2 < uVar1) && param_2 <= uVar7) &&
       ((!bVar4 || uVar1 <= uVar2) || uVar7 != param_2)) && uVar3 == 4) &&
     (*(void **)(param_1 + 0x168) != (void *)0x0)) {
    _memcpy((void *)(*(long *)(param_1 + 0x158) + (ulong)uVar2),*(void **)(param_1 + 0x168),
            (ulong)((*(uint *)(&DAT_10115f930 + (long)(int)uVar3 * 4) & 0x1fffffff) *
                   *(int *)(param_1 + 0x60)));
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  if ((uVar3 < param_2 || uVar3 - param_2 == 0) || uVar3 < param_3) {
    *param_4 = 0;
    if (param_5 != (long *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = 0;
    }
    if (param_7 == (int *)0x0) {
      uVar5 = 0x1f;
    }
    else {
      *param_7 = 0;
      uVar5 = 0x1f;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x158);
    *param_4 = lVar6 + (ulong)param_2;
    if (uVar3 < uVar1) {
      if (param_6 != (uint *)0x0) {
        *param_6 = uVar3 - param_2;
      }
      if (param_5 != (long *)0x0) {
        *param_5 = lVar6;
      }
      if (param_7 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        *param_7 = uVar1 - *(int *)(param_1 + 0x40);
      }
    }
    else {
      if (param_6 != (uint *)0x0) {
        *param_6 = param_3;
      }
      if (param_5 != (long *)0x0) {
        *param_5 = 0;
      }
      if (param_7 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        *param_7 = 0;
      }
    }
  }
  return uVar5;
}




undefined8 FUN_1005e438c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x28) - 1;
  if (((uVar1 < 5) && (*(void **)(param_1 + 0x168) != (void *)0x0)) &&
     (*(uint *)(param_1 + 0x178) != 0)) {
    _memcpy((void *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x178)),
            *(void **)(param_1 + 0x168),
            (ulong)((*(uint *)(&DAT_10115f930 + (long)(int)uVar1 * 4) & 0x1fffffff) *
                   *(int *)(param_1 + 0x60)));
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  return 0;
}




undefined8 FUN_1005e43f4(void)

{
  FUN_1005e3f7c();
  return 0;
}




undefined8 FUN_1005e440c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x158) = param_2;
  return 0;
}




undefined8 FUN_1005e4418(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 < *(uint *)(param_1 + 0x3c) && param_3 + param_2 <= *(uint *)(param_1 + 0x3c)) {
    uVar1 = *(int *)(param_1 + 0x28) - 1;
    if (((uVar1 < 5) && (*(void **)(param_1 + 0x168) != (void *)0x0)) &&
       (*(uint *)(param_1 + 0x178) != 0)) {
      _memcpy((void *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x178)),
              *(void **)(param_1 + 0x168),
              (ulong)((*(uint *)(&DAT_10115f930 + (long)(int)uVar1 * 4) & 0x1fffffff) *
                     *(int *)(param_1 + 0x60)));
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    *(uint *)(param_1 + 0x44) = param_2;
    *(int *)(param_1 + 0x48) = param_3;
    FUN_1005e3f7c(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}




undefined8 FUN_1005e44b8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *local_150;
  undefined1 local_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar3;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if ((int)uVar1 == 0) {
    lVar2 = local_150[0x1a];
    if (lVar2 == 0) {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = FUN_100570b94(lVar2);
      if ((int)uVar1 == 0) {
        uVar1 = (**(code **)(*local_150 + 0x18))(local_150,1);
        FUN_100570c30(lVar2);
        if ((int)uVar1 == 0) {
          uVar1 = 0;
          goto LAB_1005e4578;
        }
      }
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_148[0] = 0;
    FUN_1005acff8(uVar1,5,param_1,"Sound::release",local_148);
  }
LAB_1005e4578:
  if (lVar3 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e45a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if (((int)uVar1 == 0) &&
     (uVar1 = (**(code **)(*local_150 + 0x20))(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::getSystemObject",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e4678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0x28))
                        (local_170,param_2,param_3,param_4,param_5,param_6,param_7);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e4858;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_6);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    FUN_100563124(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_7);
    FUN_1005acff8(uVar3,5,param_1,"Sound::lock",auStack_168);
  }
LAB_1005e4858:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e48a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0x30))(local_170,param_2,param_3,param_4,param_5);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e4a14;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,5,param_1,"Sound::unlock",auStack_168);
  }
LAB_1005e4a14:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e4a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_2,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0x38))(param_1,local_170,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e4b6c;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100562dfc(param_1,auStack_168,0x100);
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    FUN_1005acff8(uVar3,5,param_2,"Sound::setDefaults",auStack_168);
  }
LAB_1005e4b6c:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e4bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,0);
  if ((int)uVar3 == 0) {
    if (((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) {
      uVar3 = (**(code **)(*local_160 + 0x40))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e4cbc;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getDefaults",auStack_158);
  }
LAB_1005e4cbc:
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e4cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_3,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0x48))(param_1,param_2);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e4df8;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100562dfc(param_1,auStack_168,0x100);
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562dfc(param_2,auStack_168 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
    FUN_1005acff8(uVar3,5,param_3,"Sound::set3DMinMaxDistance",auStack_168);
  }
LAB_1005e4df8:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e4e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,0);
  if ((int)uVar3 == 0) {
    if ((((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) || ((int)local_160[0x21] == 5))
    {
      uVar3 = (**(code **)(*local_160 + 0x50))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e4f58;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005631e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::get3DMinMaxDistance",auStack_158);
  }
LAB_1005e4f58:
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e4f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_188;
  long *local_180;
  undefined1 auStack_178 [256];
  long local_78;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_188 = 0;
  local_78 = lVar4;
  uVar3 = FUN_1005e9b54(param_4,&local_180,&local_188);
  if ((int)uVar3 == 0) {
    if ((((int)local_180[0x21] == 0) || ((int)local_180[0x21] == 7)) || ((int)local_180[0x21] == 5))
    {
      uVar3 = (**(code **)(*local_180 + 0x58))(param_1,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e50dc;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dfc(param_1,auStack_178,0x100);
    iVar2 = FUN_100562eec(auStack_178 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dfc(param_2,auStack_178 + iVar2,0x100 - iVar2);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_178 + iVar2,0x100 - iVar2,", ");
    FUN_100562dfc(param_3,auStack_178 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,5,param_4,"Sound::set3DConeSettings",auStack_178);
  }
LAB_1005e50dc:
  if ((local_188 != 0) && (iVar2 = FUN_100570990(local_188,10), iVar2 == 0)) {
    local_188 = 0;
  }
  if (lVar4 == local_78) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e512c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,0);
  if ((int)uVar3 == 0) {
    if ((((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) || ((int)local_170[0x21] == 5))
    {
      uVar3 = (**(code **)(*local_170 + 0x60))(local_170,param_2,param_3,param_4);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e5278;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,5,param_1,"Sound::get3DConeSettings",auStack_168);
  }
LAB_1005e5278:
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e52ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,&local_168);
  if ((int)uVar3 == 0) {
    if ((((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) || ((int)local_160[0x21] == 5))
    {
      uVar3 = (**(code **)(*local_160 + 0x68))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e53c4;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100563284(auStack_158,0x100,param_2);
    iVar1 = FUN_100562eec(auStack_158 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::set3DCustomRolloff",auStack_158);
  }
LAB_1005e53c4:
  if ((local_168 != 0) && (iVar2 = FUN_100570990(local_168,10), iVar2 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e540c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,0);
  if ((int)uVar3 == 0) {
    if ((((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) || ((int)local_160[0x21] == 5))
    {
      uVar3 = (**(code **)(*local_160 + 0x70))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e5520;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::get3DCustomRolloff",auStack_158);
  }
LAB_1005e5520:
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e5550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar5;
  uVar4 = FUN_1005e9b54(param_1,&local_160,&local_168);
  if ((int)uVar4 == 0) {
    if (local_160[0x20] == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(local_160[0x20] + 300) != 0xf;
    }
    if ((bVar1) && ((int)local_160[0x21] != 0)) {
      uVar4 = 0x2e;
    }
    else {
      uVar4 = (**(code **)(*local_160 + 0x78))(local_160,param_2,param_3);
      if ((int)uVar4 == 0) {
        uVar4 = 0;
        goto LAB_1005e5668;
      }
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar3 = FUN_100562eec(auStack_158 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_158 + (iVar3 + iVar2),0x100 - (iVar3 + iVar2),param_3);
    FUN_1005acff8(uVar4,5,param_1,"Sound::getSubSound",auStack_158);
  }
LAB_1005e5668:
  if ((local_168 != 0) && (iVar2 = FUN_100570990(local_168,10), iVar2 == 0)) {
    local_168 = 0;
  }
  if (lVar5 == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005e56b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *local_28;
  
  iVar1 = FUN_1005e9b54(param_1,&local_28,0);
  if (iVar1 == 0) {
    (**(code **)(*local_28 + 0x80))(local_28,param_2);
  }
  return;
}




undefined8 FUN_1005e5700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,&local_168);
  if ((int)uVar3 == 0) {
    if (((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) {
      uVar3 = (**(code **)(*local_160 + 0x88))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e5808;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100562eec(auStack_158,0x100,param_2);
    iVar1 = FUN_100562eec(auStack_158 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getName",auStack_158);
  }
LAB_1005e5808:
  if ((local_168 != 0) && (iVar2 = FUN_100570990(local_168,10), iVar2 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e5850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,&local_168);
  if ((int)uVar3 == 0) {
    if (((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) {
      uVar3 = (**(code **)(*local_160 + 0x90))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e5958;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100563124(auStack_158,0x100,param_2);
    iVar1 = FUN_100562eec(auStack_158 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getLength",auStack_158);
  }
LAB_1005e5958:
  if ((local_168 != 0) && (iVar2 = FUN_100570990(local_168,10), iVar2 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e59a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,0);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0x98))(local_170,param_2,param_3,param_4,param_5);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e5b0c;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005630e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getFormat",auStack_168);
  }
LAB_1005e5b0c:
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e5b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if ((int)uVar1 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar1 = (**(code **)(*local_150 + 0xa0))(local_150,param_2);
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        goto LAB_1005e5c04;
      }
    }
    else {
      uVar1 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::getNumSubSounds",auStack_148);
  }
LAB_1005e5c04:
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e5c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,&local_168);
  if ((int)uVar3 == 0) {
    if (((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) {
      uVar3 = (**(code **)(*local_160 + 0xa8))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e5d38;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_1005630e4(auStack_158,0x100,param_2);
    iVar1 = FUN_100562eec(auStack_158 + iVar2,0x100 - iVar2,", ");
    FUN_1005630e4(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getNumTags",auStack_158);
  }
LAB_1005e5d38:
  if ((local_168 != 0) && (iVar2 = FUN_100570990(local_168,10), iVar2 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e5d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0xb0))(local_170,param_2,param_3,param_4);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e5ec0;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getTag",auStack_168);
  }
LAB_1005e5ec0:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e5f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*local_170 + 0xb8))(local_170,param_2,param_3,param_4,param_5),
     (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056322c(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056322c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getOpenState",auStack_168);
  }
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e60ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0xc0))(local_170,param_2,param_3,param_4);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e61ec;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563124(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,5,param_1,"Sound::readData",auStack_168);
  }
LAB_1005e61ec:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6238(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar2 = (**(code **)(*local_150 + 200))(local_150,param_2);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e6300;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d60(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,5,param_1,"Sound::seekData",auStack_148);
  }
LAB_1005e6300:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6344(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar3;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if ((int)uVar1 == 0) {
    lVar2 = local_150[0x1a];
    if (lVar2 == 0) {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = FUN_100570b94(lVar2);
      if ((int)uVar1 == 0) {
        if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
          uVar1 = (**(code **)(*local_150 + 0xd0))(local_150,param_2);
          FUN_100570c30(lVar2);
          if ((int)uVar1 == 0) {
            uVar1 = 0;
            goto LAB_1005e642c;
          }
        }
        else {
          FUN_100570c30(lVar2);
          uVar1 = 0x2e;
        }
      }
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::setSoundGroup",auStack_148);
  }
LAB_1005e642c:
  if (lVar3 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6468(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if ((int)uVar1 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar1 = (**(code **)(*local_150 + 0xd8))(local_150,param_2);
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        goto LAB_1005e652c;
      }
    }
    else {
      uVar1 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::getSoundGroup",auStack_148);
  }
LAB_1005e652c:
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6558(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar2 = (**(code **)(*local_150 + 0xe0))(local_150,param_2);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e6620;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,5,param_1,"Sound::getNumSyncPoints",auStack_148);
  }
LAB_1005e6620:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,&local_168);
  if ((int)uVar3 == 0) {
    if (((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) {
      uVar3 = (**(code **)(*local_160 + 0xe8))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e676c;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar1 = FUN_100562eec(auStack_158 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getSyncPoint",auStack_158);
  }
LAB_1005e676c:
  if ((local_168 != 0) && (iVar2 = FUN_100570990(local_168,10), iVar2 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e67b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0xf0))(local_170,param_2,param_3,param_4,param_5,param_6);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e6960;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_6);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getSyncPointInfo",auStack_168);
  }
LAB_1005e6960:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e69ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0xf8))
                        (local_170,param_2,param_3,param_4,param_5,0xffffffff,1);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e6b24;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,5,param_1,"Sound::addSyncPoint",auStack_168);
  }
LAB_1005e6b24:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6b70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar2 = (**(code **)(*local_150 + 0x108))(local_150,param_2);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e6c38;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,5,param_1,"Sound::deleteSyncPoint",auStack_148);
  }
LAB_1005e6c38:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6c7c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar2 = (**(code **)(*local_150 + 0x110))(local_150,param_2);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e6d44;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d60(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,5,param_1,"Sound::setMode",auStack_148);
  }
LAB_1005e6d44:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6d88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if ((int)uVar1 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar1 = (**(code **)(*local_150 + 0x118))(local_150,param_2);
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        goto LAB_1005e6e4c;
      }
    }
    else {
      uVar1 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100563124(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::getMode",auStack_148);
  }
LAB_1005e6e4c:
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6e78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar2 = (**(code **)(*local_150 + 0x120))(local_150,param_2);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e6f40;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,5,param_1,"Sound::setLoopCount",auStack_148);
  }
LAB_1005e6f40:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e6f84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if ((int)uVar1 == 0) {
    if (((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) {
      uVar1 = (**(code **)(*local_150 + 0x128))(local_150,param_2);
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        goto LAB_1005e7048;
      }
    }
    else {
      uVar1 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::getLoopCount",auStack_148);
  }
LAB_1005e7048:
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e7074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0x130))(local_170,param_2,param_3,param_4,param_5);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e71e4;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,5,param_1,"Sound::setLoopPoints",auStack_168);
  }
LAB_1005e71e4:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005e7230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) {
      uVar3 = (**(code **)(*local_170 + 0x138))(local_170,param_2,param_3,param_4,param_5);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e73a0;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563124(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getLoopPoints",auStack_168);
  }
LAB_1005e73a0:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e73ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if ((((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) || ((int)local_150[0x21] == 5))
    {
      uVar2 = (**(code **)(*local_150 + 0x140))(local_150,param_2);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e74c4;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,5,param_1,"Sound::getMusicNumChannels",auStack_148);
  }
LAB_1005e74c4:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e7508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long *local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005e9b54(param_2,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if ((((int)local_170[0x21] == 0) || ((int)local_170[0x21] == 7)) || ((int)local_170[0x21] == 5))
    {
      uVar3 = (**(code **)(*local_170 + 0x148))(param_1,local_170,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e7624;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100562d14(auStack_168,0x100,param_3);
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562dfc(param_1,auStack_168 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
    FUN_1005acff8(uVar3,5,param_2,"Sound::setMusicChannelVolume",auStack_168);
  }
LAB_1005e7624:
  if ((local_178 != 0) && (iVar2 = FUN_100570990(local_178,10), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e7670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005e9b54(param_1,&local_160,&local_168);
  if ((int)uVar3 == 0) {
    if ((((int)local_160[0x21] == 0) || ((int)local_160[0x21] == 7)) || ((int)local_160[0x21] == 5))
    {
      uVar3 = (**(code **)(*local_160 + 0x150))(local_160,param_2,param_3);
      if ((int)uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1005e7788;
      }
    }
    else {
      uVar3 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar2 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar1 = FUN_100562eec(auStack_158 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    FUN_1005acff8(uVar3,5,param_1,"Sound::getMusicChannelVolume",auStack_158);
  }
LAB_1005e7788:
  if ((local_168 != 0) && (iVar2 = FUN_100570990(local_168,10), iVar2 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e77d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_2,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if ((((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) || ((int)local_150[0x21] == 5))
    {
      uVar2 = (**(code **)(*local_150 + 0x158))(param_1);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e78a8;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,5,param_2,"Sound::setMusicSpeed",auStack_148);
  }
LAB_1005e78a8:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e78ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005e9b54(param_1,&local_150,&local_158);
  if ((int)uVar2 == 0) {
    if ((((int)local_150[0x21] == 0) || ((int)local_150[0x21] == 7)) || ((int)local_150[0x21] == 5))
    {
      uVar2 = (**(code **)(*local_150 + 0x160))(local_150,param_2);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        goto LAB_1005e79c4;
      }
    }
    else {
      uVar2 = 0x2e;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,5,param_1,"Sound::getMusicSpeed",auStack_148);
  }
LAB_1005e79c4:
  if ((local_158 != 0) && (iVar1 = FUN_100570990(local_158,10), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e7a08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if (((int)uVar1 == 0) &&
     (uVar1 = (**(code **)(*local_150 + 0x168))(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::setUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005e7adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005e9b54(param_1,&local_150,0);
  if (((int)uVar1 == 0) &&
     (uVar1 = (**(code **)(*local_150 + 0x170))(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,5,param_1,"Sound::getUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005e7bb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005e9c0c();
  *puVar1 = &PTR_FUN_1014a2e30;
  *(undefined1 *)((long)puVar1 + 0xbc) = 1;
  return;
}




void FUN_1005e7bdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005e9c0c();
  *puVar1 = &PTR_FUN_1014a2e30;
  *(undefined1 *)((long)puVar1 + 0xbc) = 1;
  return;
}




undefined8 FUN_1005e7c08(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005e7c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x178))();
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_1005e7c20(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005e7c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x180))();
    return uVar1;
  }
  return 0x1f;
}




void FUN_1005e7c3c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_10056f2dc(*(long *)(param_1 + 0xd0),param_1);
  }
  FUN_1005ea604(param_1,param_2);
  return;
}




undefined8 thunk_FUN_1005eae14(undefined4 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  iVar2 = 0x100;
  if (iVar1 < 0x101) {
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_2 + 100) = param_1;
  *(int *)(param_2 + 0x68) = iVar2;
  return 0;
}




undefined8 thunk_FUN_1005eae58(float param_1,float param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if (((param_1 <= param_2) && (0.0 <= param_1)) && (0.0 <= param_2)) {
    uVar1 = 0;
    *(float *)(param_3 + 0x74) = param_1;
    *(float *)(param_3 + 0x78) = param_2;
  }
  return uVar1;
}




undefined8 thunk_FUN_1005eaea4(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  fVar1 = fVar4;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  fVar3 = fVar4;
  if (0.0 <= param_2) {
    fVar3 = param_2;
  }
  fVar2 = 360.0;
  if (fVar1 <= 360.0) {
    fVar2 = fVar1;
  }
  fVar1 = 360.0;
  if (fVar3 <= 360.0) {
    fVar1 = fVar3;
  }
  if (0.0 <= param_3) {
    fVar4 = param_3;
  }
  fVar3 = 1.0;
  if (fVar4 <= 1.0) {
    fVar3 = fVar4;
  }
  *(float *)(param_4 + 0x7c) = fVar2;
  *(float *)(param_4 + 0x80) = fVar1;
  *(float *)(param_4 + 0x84) = fVar3;
  return 0;
}




undefined8 thunk_FUN_1005ec400(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_2 & 7) != 0) {
    uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfffffff8;
    *(uint *)((long)param_1 + 0x2c) = uVar6;
    if ((param_2 & 1) == 0) {
      if ((param_2 >> 1 & 1) != 0) {
        uVar6 = uVar6 | 2;
        goto LAB_1005ec448;
      }
      if ((param_2 >> 2 & 1) != 0) {
        uVar6 = uVar6 | 4;
        goto LAB_1005ec448;
      }
    }
    else {
      uVar6 = uVar6 | 1;
LAB_1005ec448:
      *(uint *)((long)param_1 + 0x2c) = uVar6;
    }
    iVar5 = (**(code **)*param_1)(param_1);
    if (iVar5 != 0) {
      if (((param_2 & 6) != 0) && (puVar1 = (uint *)(param_1 + 10), (*puVar1 >> 7 & 1) == 0)) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xffffffb7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (param_1[0x16] != 0) {
          puVar1 = (uint *)(param_1[0x16] + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 & 0xffffffb7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      *(uint *)(param_1[0x2e] + 0x58) =
           *(uint *)(param_1[0x2e] + 0x58) & 0xfffffff8 | *(uint *)((long)param_1 + 0x2c) & 7;
    }
  }
  if ((param_2 >> 0x12 & 1) == 0) {
    if ((param_2 >> 0x13 & 1) != 0) {
      uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfff3ffff | 0x80000;
      goto LAB_1005ec4e0;
    }
  }
  else {
    uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfff3ffff | 0x40000;
LAB_1005ec4e0:
    *(uint *)((long)param_1 + 0x2c) = uVar6;
  }
  if ((param_2 >> 0x14 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) == 0) {
      if ((param_2 >> 0x16 & 1) == 0) {
        uVar6 = *(uint *)((long)param_1 + 0x2c);
        if ((param_2 >> 0x1a & 1) == 0) goto LAB_1005ec538;
        uVar6 = uVar6 & 0xfb8fffff | 0x4000000;
      }
      else {
        uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfb8fffff | 0x400000;
      }
    }
    else {
      uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfb8fffff | 0x200000;
    }
  }
  else {
    uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfb8fffff | 0x100000;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar6;
LAB_1005ec538:
  uVar2 = uVar6 & 0xbfffffff;
  if ((param_2 & 0x40000000) != 0) {
    uVar2 = uVar6 | 0x40000000;
  }
  uVar6 = uVar2 | 0x80000000;
  if (-1 < (int)param_2) {
    uVar6 = uVar2 & 0x7fffffff;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar6;
  if ((param_2 >> 3 & 1) == 0) {
    if ((param_2 >> 4 & 1) == 0) {
      return 0;
    }
    uVar6 = uVar6 & 0xffffffe7 | 0x10;
  }
  else {
    uVar6 = uVar6 & 0xffffffe7 | 8;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar6;
  return 0;
}




void thunk_FUN_1005ec5b0(void)

{
  FUN_1005ec5b0();
  return;
}




void thunk_FUN_1005ec5f8(void)

{
  FUN_1005ec5f8();
  return;
}




void FUN_1005e7c8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005e9c0c();
  puVar1[0x2c] = puVar1 + 0x2b;
  puVar1[0x2d] = 0;
  puVar1[0x2b] = puVar1 + 0x2b;
  *(undefined4 *)(puVar1 + 0x30) = 0;
  puVar1[0x13] = 0;
  *puVar1 = &PTR_FUN_1014a2fd0;
  *(undefined4 *)(puVar1 + 0x31) = 0xffffffff;
  *(undefined4 *)((long)puVar1 + 0x184) = 1;
  puVar1[0x2e] = 0;
  *(undefined4 *)((long)puVar1 + 0x18c) = 0;
  return;
}




void FUN_1005e7cdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005e9c0c();
  puVar1[0x2c] = puVar1 + 0x2b;
  puVar1[0x2d] = 0;
  puVar1[0x2b] = puVar1 + 0x2b;
  *(undefined4 *)(puVar1 + 0x30) = 0;
  puVar1[0x13] = 0;
  *puVar1 = &PTR_FUN_1014a2fd0;
  *(undefined4 *)(puVar1 + 0x31) = 0xffffffff;
  *(undefined4 *)((long)puVar1 + 0x184) = 1;
  puVar1[0x2e] = 0;
  *(undefined4 *)((long)puVar1 + 0x18c) = 0;
  return;
}




undefined8 FUN_1005e7d2c(long param_1,ulong param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  uint local_19c;
  undefined1 auStack_198 [272];
  int local_88;
  
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  lVar10 = *(long *)(param_1 + 0x178);
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0xb0) + 0x178);
  }
  puVar1 = (uint *)(param_1 + 0x50);
  if ((*puVar1 >> 3 & 1) == 0) {
    uVar16 = 0;
    uVar17 = 0;
    uVar13 = param_3;
    do {
      while( true ) {
        lVar18 = param_1;
        if ((*(long *)(param_1 + 0x98) != 0) &&
           (lVar18 = *(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xb8) * 8),
           lVar18 == 0)) goto LAB_1005e7fe4;
        if (*(long *)(param_1 + 0xa0) == 0) {
          iVar14 = *(int *)(lVar18 + 0x3c);
        }
        else {
          _bzero(auStack_198,0x130);
          (**(code **)(*(long *)(lVar18 + 0x58) + 0xa8))
                    (*(long *)(lVar18 + 0x58),*(undefined4 *)(param_1 + 0xb8),auStack_198);
          iVar14 = local_88;
        }
        if (((*(byte *)(param_1 + 0x2c) >> 1 & 1) == 0) || (*(int *)(param_1 + 0x188) == 0)) {
          uVar15 = 0xffffffff;
          if ((*(byte *)(*(long *)(lVar10 + 0x58) + 0x54) & 1) != 0) {
            uVar15 = iVar14 - 1;
          }
        }
        else {
          uVar15 = (*(int *)(lVar18 + 0x44) + *(int *)(lVar18 + 0x48)) - 1;
        }
        iVar11 = (int)param_2;
        uVar6 = *(uint *)(lVar10 + 0x3c) - iVar11;
        if (uVar13 + iVar11 <= *(uint *)(lVar10 + 0x3c)) {
          uVar6 = uVar13;
        }
        uVar9 = *(uint *)(lVar18 + 0x38);
        if (uVar15 < uVar9) {
          uVar6 = 0;
        }
        else if (uVar15 < uVar6 + uVar9) {
          uVar6 = (uVar15 + 1) - uVar9;
        }
        uVar3 = *(int *)(param_1 + 0x28) - 1;
        uVar9 = uVar6;
        if (uVar3 < 5) {
          uVar9 = *(int *)(&DAT_10115f950 + (long)(int)uVar3 * 4) * uVar6 >> 3;
        }
        if (uVar9 * *(int *)(param_1 + 0x60) == 0) {
          local_19c = 0;
          uVar16 = 0x10;
        }
        else {
          uVar16 = FUN_1005e9f28(lVar10,param_2,uVar6,&local_19c);
          if ((0x10 < (uint)uVar16) || ((1 << (ulong)((uint)uVar16 & 0x1f) & 0x18001U) == 0))
          goto LAB_1005e8030;
        }
        uVar9 = local_19c;
        if ((uVar6 != 0) && (local_19c == 0 && (int)uVar16 == 0)) goto LAB_1005e7fe4;
        uVar17 = local_19c + uVar17;
        uVar3 = uVar13 - local_19c;
        uVar6 = 0;
        if (local_19c + iVar11 < *(uint *)(lVar10 + 0x3c)) {
          uVar6 = local_19c + iVar11;
        }
        param_2 = (ulong)uVar6;
        *(int *)(lVar18 + 0x180) = *(int *)(lVar18 + 0x38);
        uVar6 = *(int *)(lVar18 + 0x38) + local_19c;
        *(uint *)(lVar18 + 0x38) = uVar6;
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar17;
          uVar6 = *(uint *)(lVar18 + 0x38);
        }
        if (((int)uVar16 == 0x10) || (uVar15 < uVar6)) break;
        if ((uVar13 == local_19c) || (uVar13 = uVar3, local_19c == 0)) goto LAB_1005e7fe4;
      }
      if (((*(byte *)(param_1 + 0x2c) >> 1 & 1) == 0) ||
         (iVar11 = *(int *)(param_1 + 0x188), iVar11 == 0)) {
        if (lVar18 != param_1) {
          if (*(int *)(param_1 + 0x3c) == -1) {
            *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
          }
          else {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x3c);
          }
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar14 == -1) {
          *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)(lVar18 + 0x38);
        }
        else {
          *(int *)(lVar18 + 0x38) = iVar14;
        }
        puVar1 = (uint *)(lVar18 + 0x50);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long *)(lVar18 + 0xb0) != 0) {
          puVar1 = (uint *)(*(long *)(lVar18 + 0xb0) + 0x50);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(lVar18 + 0x38) = uVar5;
      if (*(int *)(param_1 + 0x3c) == -1) goto LAB_1005e7fbc;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 400), lVar8 != 0)) {
        *(uint *)(lVar8 + 0x1a4) = *(uint *)(lVar8 + 0x1a4) | 0x1000;
        uVar5 = *(undefined4 *)(lVar18 + 0x38);
      }
      uVar16 = FUN_1005ea450(lVar10,*(undefined4 *)(param_1 + 0xb8),uVar5);
      if ((int)uVar16 != 0) goto LAB_1005e8030;
      uVar16 = 0;
      *(undefined4 *)(lVar18 + 0x38) = *(undefined4 *)(lVar10 + 0x38);
      iVar11 = *(int *)(param_1 + 0x188);
LAB_1005e7fbc:
      if (0 < iVar11) {
        *(int *)(param_1 + 0x188) = iVar11 + -1;
      }
      bVar4 = uVar13 != uVar9;
      uVar13 = uVar3;
    } while (bVar4);
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
  }
LAB_1005e7fe4:
  if (uVar17 < param_3) {
    iVar14 = param_3 - uVar17;
    uVar17 = *(uint *)(lVar10 + 0x3c);
    do {
      iVar12 = (int)param_2;
      iVar11 = uVar17 - iVar12;
      if ((uint)(iVar14 + iVar12) <= uVar17) {
        iVar11 = iVar14;
      }
      FUN_1005ea4dc(lVar10,param_2,iVar11);
      uVar17 = *(uint *)(lVar10 + 0x3c);
      uVar13 = 0;
      if ((uint)(iVar11 + iVar12) < uVar17) {
        uVar13 = iVar11 + iVar12;
      }
      param_2 = (ulong)uVar13;
      iVar14 = iVar14 - iVar11;
    } while (iVar14 != 0);
  }
LAB_1005e8030:
  if (*(long *)PTR____stack_chk_guard_101444218 != lVar7) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}




undefined8 FUN_1005e80f8(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x178);
  if (lVar8 != 0) {
    if (((*(byte *)(param_1 + 0x2d) >> 2 & 1) != 0) ||
       (uVar2 = *(uint *)(param_1 + 0x3c), *(uint *)(lVar8 + 0x3c) < uVar2)) {
      uVar2 = *(uint *)(lVar8 + 0x3c);
    }
    uVar7 = FUN_1005e7d2c(param_1,0,uVar2,0);
    if (((uint)uVar7 | 0x10) != 0x10) {
      return uVar7;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 0x178) + 0x3c);
    iVar6 = uVar3 - uVar2;
    if (uVar2 <= uVar3 && iVar6 != 0) {
      FUN_1005ea4dc(*(long *)(param_1 + 0x178),uVar2,iVar6);
    }
  }
  puVar1 = (uint *)(param_1 + 0x50);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xffffffef;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return 0;
}




undefined8 FUN_1005e8188(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 400);
  uVar10 = (uint)param_2;
  if (((lVar8 != 0) && (uVar10 != 0)) && ((*(uint *)(lVar8 + 0x1a4) & 0x2000) != 0)) {
    *(uint *)(lVar8 + 0x1a4) = *(uint *)(lVar8 + 0x1a4) | 1;
  }
  uVar11 = (uint)param_3;
  if (uVar11 == 2) {
    if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x3c);
    }
    if (iVar6 - 1U < uVar10) {
      return 0x20;
    }
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 400);
  if (lVar8 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(uint *)(lVar8 + 0x1a4) & 1;
  }
  puVar1 = (uint *)(param_1 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffb7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = (uint *)(*(long *)(param_1 + 0xb0) + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 & 0xffffffb7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar7 == 0) {
    if (*(int *)(param_1 + 0x180) == 0 && uVar10 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xe;
    }
  }
  else {
    if ((uVar11 == 2) && (*(long *)(param_1 + 0x98) != 0)) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xb8) * 8);
      if (lVar8 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1005e8188(lVar8,param_2,2);
      }
    }
    else {
      lVar8 = *(long *)(param_1 + 0x58);
      *(undefined4 *)(lVar8 + 0x178) = 0;
      if (*(void **)(lVar8 + 0x160) != (void *)0x0) {
        _bzero(*(void **)(lVar8 + 0x160),(ulong)*(uint *)(lVar8 + 0x174));
      }
      if (*(code **)(lVar8 + 0xd0) != (code *)0x0) {
        (**(code **)(lVar8 + 0xd0))(lVar8);
      }
      if (((*(long *)(param_1 + 0xb0) == 0) || (*(int *)(*(long *)(param_1 + 0xb0) + 0xa8) == 0)) &&
         (*(int *)(param_1 + 0xa8) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0xb8);
      }
      uVar4 = FUN_100586284(*(undefined8 *)(param_1 + 0x58),uVar5,param_2,param_3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(long *)(param_1 + 0xb0) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
      }
    }
    if ((*(long *)(param_1 + 0x178) != 0) &&
       (pcVar9 = *(code **)(*(long *)(param_1 + 0x178) + 0x148), pcVar9 != (code *)0x0)) {
      (*pcVar9)(param_1,*(undefined4 *)(param_1 + 0xb8),param_2,param_3);
    }
    if ((4 < uVar11) || ((1 << (ulong)(uVar11 & 0x1f) & 0x16U) == 0)) {
      param_2 = 0;
    }
    *(int *)(param_1 + 0x38) = (int)param_2;
    *(int *)(param_1 + 0x180) = (int)param_2;
  }
  return uVar4;
}




undefined8 FUN_1005e838c(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x108) != 0) && (*(int *)(param_1 + 0x108) != 7)) {
    return 0x2e;
  }
  if (param_2 == (int *)0x0) {
    return 0x1f;
  }
  if (param_3 == 1) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x180));
    *param_2 = (int)((fVar4 / 1000.0) * *(float *)(param_1 + 100));
  }
  else if (param_3 == 4) {
    uVar3 = *(uint *)(param_1 + 0x180);
    uVar1 = *(int *)(param_1 + 0x28) - 1;
    if (uVar1 < 5) {
      uVar3 = *(int *)(&DAT_10115f950 + (long)(int)uVar1 * 4) * uVar3 >> 3;
    }
    *param_2 = uVar3 * *(int *)(param_1 + 0x60);
  }
  else if (param_3 == 2) {
    *param_2 = *(int *)(param_1 + 0x180);
  }
  else {
    uVar2 = FUN_1005865e4(*(undefined8 *)(param_1 + 0x58));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}




undefined8 FUN_1005e8464(long param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x108) != 0) && (*(int *)(param_1 + 0x108) != 7)) {
    return 0x2e;
  }
  *(undefined4 *)(param_1 + 0x188) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return 0;
}




undefined8 FUN_1005e849c(undefined8 param_1)

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
  uVar2 = FUN_1005e9410(param_1,&local_140,&local_148);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e94fc(local_140), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::release",local_138);
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




undefined8 FUN_1005e8564(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9734(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getSystemObject",auStack_148);
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




undefined8 FUN_1005e8648(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9758(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::setMaxAudible",auStack_148);
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




undefined8 FUN_1005e872c(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e977c(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getMaxAudible",auStack_148);
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




undefined8 FUN_1005e8810(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e97a0(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::setMaxAudibleBehavior",auStack_148);
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




undefined8 FUN_1005e88f4(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e984c(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getMaxAudibleBehavior",auStack_148);
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




undefined8 FUN_1005e89d8(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9870(param_1,local_150), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,6,param_2,"SoundGroup::setMuteFadeSpeed",auStack_148);
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




undefined8 FUN_1005e8abc(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9894(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getMuteFadeSpeed",auStack_148);
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




undefined8 FUN_1005e8ba0(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e98b8(param_1,local_150), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,6,param_2,"SoundGroup::setVolume",auStack_148);
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




undefined8 FUN_1005e8c84(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9998(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getVolume",auStack_148);
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




undefined8 FUN_1005e8d68(undefined8 param_1)

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
  uVar2 = FUN_1005e9410(param_1,&local_140,&local_148);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e99bc(local_140), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::stop",local_138);
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




undefined8 FUN_1005e8e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005e9410(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005e9a08(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d14(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,6,param_1,"SoundGroup::getName",auStack_158);
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




undefined8 FUN_1005e8f58(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9a54(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getNumSounds",auStack_148);
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




undefined8 FUN_1005e903c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005e9410(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005e9a88(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,6,param_1,"SoundGroup::getSound",auStack_158);
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




undefined8 FUN_1005e9164(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9adc(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getNumPlaying",auStack_148);
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




undefined8 FUN_1005e9248(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9b24(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::setUserData",auStack_148);
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




undefined8 FUN_1005e932c(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005e9410(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005e9b30(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,6,param_1,"SoundGroup::getUserData",auStack_148);
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




undefined8 FUN_1005e9410(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x1e;
  }
  else if (param_2 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        return 0x1c;
      }
      if (*param_3 != 0) {
        return 0x1c;
      }
      uVar1 = FUN_100570b94(lVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *param_3 = lVar2;
    }
    uVar1 = 0;
    *param_2 = param_1;
  }
  return uVar1;
}




void FUN_1005e9484(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x28) = param_1 + 0x28;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(long *)(param_1 + 0x40) = param_1 + 0x40;
  *(long *)(param_1 + 0x48) = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0x3f80000000000000;
  return;
}




void FUN_1005e94c0(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x28) = param_1 + 0x28;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(long *)(param_1 + 0x40) = param_1 + 0x40;
  *(long *)(param_1 + 0x48) = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0x3f80000000000000;
  return;
}




undefined8 FUN_1005e94fc(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar3 = param_1[3];
  if (*(long **)(lVar3 + 0x15d48) == param_1) {
    uVar2 = 0x1e;
  }
  else {
    if (*(long **)(lVar3 + 0x15d48) != (long *)0x0) {
      plVar1 = (long *)param_1[8];
      while (plVar1 != param_1 + 8) {
        plVar5 = (long *)*plVar1;
        lVar6 = plVar1[2];
        puVar7 = *(undefined8 **)(lVar6 + 0x170);
        *puVar7 = *(undefined8 *)(lVar6 + 0x168);
        *(undefined8 **)(*(long *)(lVar6 + 0x168) + 8) = puVar7;
        *(long *)(lVar6 + 0x168) = lVar6 + 0x168;
        *(long *)(lVar6 + 0x170) = lVar6 + 0x168;
        *(undefined4 *)(lVar6 + 0x180) = 0xffffffff;
        *(undefined8 *)(lVar6 + 0x178) = 0;
        *(undefined4 *)(lVar6 + 0x1d0) = 0x3f800000;
        *(undefined4 *)(lVar6 + 0x1d4) = 0x3f800000;
        *(undefined4 *)(lVar6 + 0x1a0) = 0;
        plVar4 = (long *)plVar1[1];
        *plVar4 = *plVar1;
        *(long **)(*plVar1 + 8) = plVar4;
        *plVar1 = (long)plVar1;
        plVar1[1] = (long)plVar1;
        plVar1 = plVar5;
      }
      plVar1 = param_1 + 5;
      if ((long *)*plVar1 != plVar1) {
        (**(code **)(*(long *)((long *)*plVar1)[2] + 0xd0))();
        lVar3 = param_1[3];
        plVar4 = (long *)param_1[5];
        while (plVar4 != plVar1) {
          (**(code **)(*(long *)plVar4[2] + 0xd0))
                    ((long *)plVar4[2],*(undefined8 *)(lVar3 + 0x15d48));
          lVar3 = param_1[3];
          plVar4 = (long *)param_1[5];
        }
      }
      for (puVar7 = *(undefined8 **)(lVar3 + 0x698); puVar7 != (undefined8 *)(lVar3 + 0x698);
          puVar7 = (undefined8 *)*puVar7) {
        plVar1 = (long *)puVar7[2];
        if ((int)plVar1[0x34] == 0) {
          (**(code **)(*plVar1 + 0x20))((int)plVar1[6],plVar1,1);
          lVar3 = param_1[3];
        }
      }
    }
    if (param_1[0xc] != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xc],
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundgroupi.cpp"
                    ,0xb5);
    }
    plVar1 = (long *)param_1[1];
    *plVar1 = *param_1;
    *(long **)(*param_1 + 8) = plVar1;
    *param_1 = (long)param_1;
    param_1[1] = (long)param_1;
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundgroupi.cpp"
                  ,0xba);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1005e96b4(long *param_1)

{
  long *plVar1;
  
  if (param_1[0xc] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0xc],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundgroupi.cpp"
                  ,0xb5);
  }
  plVar1 = (long *)param_1[1];
  *plVar1 = *param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundgroupi.cpp"
                ,0xba);
  return 0;
}




undefined8 FUN_1005e9734(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e9758(long param_1,int param_2)

{
  if (param_2 < -1) {
    return 0x1f;
  }
  *(int *)(param_1 + 0x68) = param_2;
  return 0;
}




undefined8 FUN_1005e977c(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x68);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e97a0(long param_1,uint param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 < 3) {
    if ((param_2 != 1) && (*(int *)(param_1 + 0x6c) == 1)) {
      plVar4 = (long *)(param_1 + 0x40);
      if ((long *)*plVar4 != plVar4) {
        plVar2 = (long *)*plVar4;
        iVar3 = 0;
        do {
          plVar5 = (long *)*plVar2;
          plVar2 = (long *)plVar2[2];
          plVar2[0x3a] = 0x3f8000003f800000;
          if (*(int *)(param_1 + 0x68) <= iVar3) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar2 = plVar5;
          iVar3 = iVar3 + 1;
        } while (plVar5 != plVar4);
      }
    }
    uVar1 = 0;
    *(uint *)(param_1 + 0x6c) = param_2;
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8 FUN_1005e984c(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x6c);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e9870(float param_1,long param_2)

{
  if (param_1 < 0.0) {
    return 0x1f;
  }
  *(float *)(param_2 + 0x74) = param_1;
  return 0;
}




undefined8 FUN_1005e9894(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x74);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e98b8(float param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  long local_48;
  
  fVar6 = 0.0;
  if (0.0 <= param_1) {
    fVar6 = param_1;
  }
  fVar7 = 1.0;
  if (fVar6 <= 1.0) {
    fVar7 = fVar6;
  }
  *(float *)(param_2 + 0x78) = fVar7;
  plVar3 = (long *)(param_2 + 0x28);
  plVar4 = (long *)*plVar3;
  if (plVar4 != plVar3) {
    lVar1 = *(long *)(param_2 + 0x18);
    do {
      plVar2 = (long *)(*(long *)(lVar1 + 0x2e8) + -0x130);
      if (plVar2 != (long *)(lVar1 + 0x1b8)) {
        lVar5 = plVar4[2];
        do {
          if (plVar2[0x32] != 0) {
            local_48 = 0;
            FUN_1005835d0(plVar2,&local_48);
            if (local_48 == lVar5) {
              (**(code **)(*plVar2 + 0x20))((int)plVar2[6],plVar2,0);
            }
          }
          plVar2 = (long *)(plVar2[0x26] + -0x130);
          lVar1 = *(long *)(param_2 + 0x18);
        } while (plVar2 != (long *)(lVar1 + 0x1b8));
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != plVar3);
  }
  return 0;
}




undefined8 FUN_1005e9998(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x78);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e99bc(long param_1)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != (undefined8 *)(param_1 + 0x28);
      puVar1 = (undefined8 *)*puVar1) {
    FUN_10056f2dc(*(undefined8 *)(param_1 + 0x18),puVar1[2]);
  }
  return 0;
}




undefined8 FUN_1005e9a08(long param_1,long param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    iVar1 = 0x100;
    if (param_3 < 0x101) {
      iVar1 = param_3;
    }
    pcVar2 = *(char **)(param_1 + 0x60);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "(null)";
    }
    FUN_1005ecc98(param_2,pcVar2,iVar1);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e9a54(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = -1;
    plVar2 = (long *)(param_1 + 0x28);
    do {
      plVar2 = (long *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (long *)(param_1 + 0x28));
    *param_2 = iVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e9a88(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_3 == (long *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = (long *)*plVar1;
  if (plVar2 != plVar1) {
    param_2 = param_2 + 1;
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        *param_3 = plVar2[2];
        return 0;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar1);
    return 0x1f;
  }
  return 0x1f;
}




undefined8 FUN_1005e9adc(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = 0;
    plVar2 = *(long **)(param_1 + 0x28);
    *param_2 = 0;
    for (; plVar2 != (long *)(param_1 + 0x28); plVar2 = (long *)*plVar2) {
      iVar1 = iVar1 + *(int *)(plVar2[2] + 0x130);
      *param_2 = iVar1;
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e9b24(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 0;
}




undefined8 FUN_1005e9b30(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005e9b54(ulong param_1,ulong *param_2,long *param_3)

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
      if (*(int *)(param_1 + 0x20) == -0x533fe522) {
        if (param_3 == (long *)0x0) {
          uVar1 = 0;
        }
        else {
          lVar2 = *(long *)(param_1 + 0xd0);
          if (lVar2 == 0) {
            uVar1 = 0;
          }
          else if ((*(byte *)(lVar2 + 0x4a) >> 4 & 1) == 0) {
            if (*param_3 == 0) {
              uVar1 = FUN_10057097c(lVar2,10);
              if ((int)uVar1 == 0) {
                uVar1 = 0;
                *param_3 = lVar2;
              }
            }
            else {
              uVar1 = 0x1c;
            }
          }
          else {
            uVar1 = 0;
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




void FUN_1005e9c0c(undefined8 *param_1)

{
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xacc01ade;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1014a3158;
  *(undefined4 *)((long)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x461c4000;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x10) = 0x43b40000;
  *(undefined4 *)((long)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 0x472c4400;
  *(undefined4 *)(param_1 + 0xd) = 0x80;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0x23] = param_1 + 0x23;
  param_1[0x24] = param_1 + 0x23;
  param_1[0x25] = 0;
  return;
}




void FUN_1005e9cd0(undefined8 *param_1)

{
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xacc01ade;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1014a3158;
  *(undefined4 *)((long)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x461c4000;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x10) = 0x43b40000;
  *(undefined4 *)((long)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 0x472c4400;
  *(undefined4 *)(param_1 + 0xd) = 0x80;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0x23] = param_1 + 0x23;
  param_1[0x24] = param_1 + 0x23;
  param_1[0x25] = 0;
  return;
}




void FUN_1005e9d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_180;
  undefined1 auStack_178 [304];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_180 = 0;
  local_48 = lVar3;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 0x1f;
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
      _bzero(auStack_178,0x130);
      uVar1 = (**(code **)(*(long *)(param_1 + 0x58) + 0xa8))
                        (*(long *)(param_1 + 0x58),param_2,auStack_178);
      if (((int)uVar1 == 0) &&
         (uVar1 = FUN_10056f048(*(undefined8 *)(param_1 + 0xd0),param_3,auStack_178,&local_180),
         (int)uVar1 == 0)) {
        *(undefined4 *)(local_180 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        *(undefined8 *)(local_180 + 0x58) = *(undefined8 *)(param_1 + 0x58);
        lVar2 = *(long *)(param_1 + 0x58);
        if (*(code **)(lVar2 + 0xa0) != (code *)0x0) {
          uVar1 = (**(code **)(lVar2 + 0xa0))(lVar2,param_2,local_180);
          if ((int)uVar1 != 0) goto LAB_1005e9f00;
          lVar2 = *(long *)(param_1 + 0x58);
        }
        *(undefined4 *)(lVar2 + 0x178) = 0;
        if (*(void **)(lVar2 + 0x160) != (void *)0x0) {
          _bzero(*(void **)(lVar2 + 0x160),(ulong)*(uint *)(lVar2 + 0x174));
        }
        if (*(code **)(lVar2 + 0xd0) != (code *)0x0) {
          (**(code **)(lVar2 + 0xd0))(lVar2);
        }
        uVar1 = FUN_100586284(*(undefined8 *)(param_1 + 0x58),param_2,0,2);
        if ((int)uVar1 == 0) {
          if (*(code **)(param_1 + 0x148) != (code *)0x0) {
            (**(code **)(param_1 + 0x148))(param_1,param_2,0,2);
          }
          if (((((uint)param_3 >> 0xd & 1) != 0) ||
              (uVar1 = FUN_1005e9f28(local_180,0,*(undefined4 *)(local_180 + 0x3c),0),
              ((uint)uVar1 | 0x10) == 0x10)) &&
             (uVar1 = FUN_1005ea17c(param_1,param_2,local_180,0), (int)uVar1 == 0)) {
            uVar1 = 0;
            *(undefined4 *)(local_180 + 0x38) = 0;
          }
        }
      }
    }
  }
LAB_1005e9f00:
  if (lVar3 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




void FUN_1005e9f28(long *param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_1b8;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  long local_1a8;
  long local_1a0;
  undefined1 auStack_198 [304];
  long local_68;
  
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(byte *)((long)param_1 + 0x2d) >> 1 & 1) == 0) {
    uVar5 = (int)param_1[5] - 1;
    if (uVar5 < 5) {
      uVar5 = *(uint *)(&DAT_10115f970 + (long)(int)uVar5 * 4) >> 3;
    }
    else {
      uVar5 = 1;
    }
    uVar5 = uVar5 * (int)param_1[0xc];
  }
  else {
    uVar5 = 1;
  }
  *(int *)(param_1 + 7) = param_2;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  local_68 = lVar7;
  _bzero(auStack_198,0x130);
  lVar3 = param_1[0xb];
  uVar4 = (**(code **)(lVar3 + 0xa8))(lVar3,*(undefined4 *)(lVar3 + 0x13c),auStack_198);
  if ((int)uVar4 == 0) {
    uVar8 = 0;
    uVar1 = uVar5 * param_3;
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      param_2 = uVar5 * param_2;
      uVar9 = uVar1;
      do {
        uVar10 = uVar1;
        if (uVar9 <= uVar1) {
          uVar10 = uVar9;
        }
        uVar4 = (**(code **)(*param_1 + 0x28))
                          (param_1,param_2,uVar10,&local_1a0,&local_1a8,&local_1ac,&local_1b0);
        if ((int)uVar4 != 0) goto LAB_1005ea14c;
        if (local_1b0 == 0 && local_1ac == 0) {
          (**(code **)(*param_1 + 0x30))(param_1,local_1a0,local_1a8,local_1ac);
          uVar4 = 0xd;
          goto LAB_1005ea14c;
        }
        uVar4 = 0;
        if (local_1ac != 0) {
          uVar10 = 0;
          if (local_1a0 == 0) goto LAB_1005ea074;
          local_1b4 = 0;
          uVar4 = (**(code **)(*param_1 + 0xc0))(param_1,local_1a0,local_1ac,&local_1b4);
          uVar10 = local_1b4;
          if (((uint)uVar4 | 0x10) == 0x10) goto LAB_1005ea074;
LAB_1005ea130:
          (**(code **)(*param_1 + 0x30))(param_1,local_1a0,local_1a8,local_1ac,local_1b0);
          goto LAB_1005ea14c;
        }
        uVar10 = 0;
LAB_1005ea074:
        uVar6 = uVar4;
        if ((local_1a8 != 0) && (local_1b0 != 0)) {
          local_1b8 = 0;
          uVar4 = (**(code **)(*param_1 + 0xc0))(param_1,local_1a8,local_1b0,&local_1b8);
          if (((uint)uVar4 | 0x10) != 0x10) goto LAB_1005ea130;
          uVar10 = local_1b8 + uVar10;
          uVar6 = uVar4;
        }
        uVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_1a0,local_1a8,local_1ac,local_1b0);
        if ((int)uVar4 != 0) goto LAB_1005ea14c;
        uVar8 = uVar10 + uVar8;
        uVar4 = uVar6;
        if ((int)uVar6 == 0x10) break;
        param_2 = uVar10 + param_2;
        bVar2 = uVar9 != uVar10;
        uVar9 = uVar9 - uVar10;
      } while (bVar2);
    }
    if (param_4 != (uint *)0x0) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      *param_4 = uVar1;
    }
  }
LAB_1005ea14c:
  if (lVar7 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
}




void FUN_1005ea17c(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_188 [304];
  long local_58;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  iVar6 = (int)param_2;
  local_58 = lVar9;
  if (iVar6 < 0) {
    uVar7 = 0x1f;
    goto LAB_1005ea418;
  }
  if (*(int *)(param_1 + 0x15) <= iVar6) {
    uVar7 = 0x1f;
    goto LAB_1005ea418;
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0xb0) != 0)) {
    uVar7 = 0x3d;
    goto LAB_1005ea418;
  }
  if (param_1[0x14] != 0) {
    uVar7 = 0x3e;
    goto LAB_1005ea418;
  }
  iVar5 = (**(code **)*param_1)(param_1);
  if (iVar5 == 0) {
    bVar4 = false;
  }
  else {
    puVar8 = (undefined8 *)param_1[0x14];
    if ((((undefined8 *)param_1[0x14] == (undefined8 *)0x0) &&
        (puVar8 = param_1, param_1[0x13] != 0)) &&
       (puVar8 = *(undefined8 **)(param_1[0x13] + (long)*(int *)(param_1 + 0x17) * 8),
       puVar8 == (undefined8 *)0x0)) {
      bVar4 = false;
    }
    else if ((*(uint *)(puVar8 + 10) >> 2 & 1) == 0) {
      bVar4 = false;
    }
    else if ((*(uint *)(puVar8 + 10) >> 3 & 1) == 0) {
      FUN_10057097c(param_1[0x1a],8);
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  if ((param_4 & 1) == 0) {
    if (*(int *)(param_1 + 5) - 1U < 5) {
      FUN_10057097c(param_1[0x1a],3);
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  lVar10 = *(long *)(param_1[0x13] + (long)iVar6 * 8);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0xa0) != 0)) {
    _bzero(auStack_188,0x130);
    (**(code **)(param_1[0xb] + 0xa8))(param_1[0xb],param_2,auStack_188);
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 0xb8) = iVar6;
    *(undefined8 **)(param_3 + 0xb0) = param_1;
    if (*(long *)(param_3 + 0xa0) != 0) {
      _bzero(auStack_188,0x130);
      (**(code **)(*(long *)(param_3 + 0x58) + 0xa8))(param_1[0xb],param_2,auStack_188);
    }
  }
  if (lVar10 == 0) {
    if (param_3 != 0) {
      iVar5 = *(int *)((long)param_1 + 0xac) + 1;
      goto LAB_1005ea380;
    }
  }
  else {
    iVar5 = (**(code **)*param_1)(param_1);
    if (iVar5 == 0) {
      if (*(long *)(*(long *)(lVar10 + 0xb0) + 0x58) == *(long *)(lVar10 + 0x58)) {
        *(undefined8 *)(lVar10 + 0x58) = 0;
      }
    }
    else if (param_1[0x2f] == *(long *)(lVar10 + 0x178)) {
      *(undefined8 *)(param_1[0x2f] + 0xb0) = 0;
    }
    *(undefined8 *)(lVar10 + 0xb0) = 0;
    if (param_3 == 0) {
      iVar5 = *(int *)((long)param_1 + 0xac) + -1;
LAB_1005ea380:
      *(int *)((long)param_1 + 0xac) = iVar5;
    }
  }
  *(long *)(param_1[0x13] + (long)iVar6 * 8) = param_3;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0x3c);
  iVar6 = (**(code **)*param_1)(param_1);
  if (iVar6 != 0) {
    (**(code **)(*(long *)param_1[0x2e] + 0xb0))
              ((long *)param_1[0x2e],0,*(int *)((long)param_1 + 0x3c) + -1);
  }
  if (bVar3) {
    FUN_100570990(param_1[0x1a],3);
  }
  iVar6 = (**(code **)*param_1)(param_1);
  if (iVar6 != 0) {
    if (param_3 != 0) {
      puVar1 = (uint *)(param_1 + 10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 0x10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (bVar4) {
      FUN_100570990(param_1[0x1a],8);
    }
  }
  uVar7 = 0;
LAB_1005ea418:
  if (lVar9 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
}




undefined8 FUN_1005ea444(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return 0;
}




undefined8 FUN_1005ea450(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  if (*(long *)(*(long *)(param_1 + 0x58) + 400) == 0) {
    uVar2 = 0xe;
  }
  else {
    *(int *)(param_1 + 0x38) = (int)param_3;
    uVar2 = FUN_100586284(*(long *)(param_1 + 0x58),param_2,param_3,2);
    if ((int)uVar2 == 0) {
      iVar1 = FUN_1005865e4(*(undefined8 *)(param_1 + 0x58),&local_24,2);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x38) = local_24;
      }
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(param_1,param_2,*(undefined4 *)(param_1 + 0x38),2);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_1005ea4dc(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint local_58;
  uint local_54;
  void *local_50;
  void *local_48;
  
  if ((*(byte *)((long)param_1 + 0x2d) >> 1 & 1) == 0) {
    uVar4 = (int)param_1[5] - 1;
    if (uVar4 < 5) {
      uVar4 = *(uint *)(&DAT_10115f970 + (long)(int)uVar4 * 4) >> 3;
    }
    else {
      uVar4 = 1;
    }
    uVar4 = uVar4 * (int)param_1[0xc];
  }
  else {
    uVar4 = 1;
  }
  *(int *)(param_1 + 7) = param_2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar2 = (**(code **)(*param_1 + 0x28))
                      (param_1,param_2 * uVar4,param_3 * uVar4,&local_48,&local_50,&local_54,
                       &local_58);
    if ((int)uVar2 != 0) break;
    uVar5 = 0;
    uVar3 = (ulong)local_54;
    if ((local_48 != (void *)0x0) && (local_54 != 0)) {
      _bzero(local_48,uVar3);
      uVar3 = (ulong)local_54;
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = local_54 / uVar4;
      }
    }
    if ((local_50 != (void *)0x0) && (local_58 != 0)) {
      _bzero(local_50,(ulong)local_58);
      uVar3 = (ulong)local_54;
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = local_58 / uVar4;
      }
      uVar5 = uVar1 + uVar5;
    }
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_48,local_50,uVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    param_3 = param_3 - uVar5;
    param_2 = uVar5 + param_2;
  }
  return uVar2;
}




undefined8 FUN_1005ea604(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar14 = param_1[0x1a];
  bVar2 = lVar14 != 0;
  if (bVar2) {
    FUN_10057097c(lVar14,9);
  }
  puVar1 = (uint *)(param_1 + 10);
  if ((*puVar1 >> 5 & 1) != 0) {
    uVar15 = 0x1e;
    goto LAB_1005eaca4;
  }
  if ((((undefined8 *)param_1[0x14] != (undefined8 *)0x0 && (undefined8 *)param_1[0x14] == param_1)
      && (param_1[0x16] != 0)) && ((*(uint *)(param_1[0x16] + 0x50) >> 5 & 1) == 0)) {
    uVar15 = 0x3e;
    goto LAB_1005eaca4;
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 0x20;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar14 != 0) {
    if (bVar2) {
      FUN_100570990(lVar14,9);
    }
    bVar2 = false;
  }
  if ((param_1[0xb] != 0) && (*(long *)(param_1[0xb] + 400) != 0)) {
    FUN_1005d10ec();
  }
  while (((*(int *)(param_1 + 0x21) != 0 && (*(int *)(param_1 + 0x21) != 2)) ||
         (*(char *)((long)param_1 + 0x54) != '\0'))) {
    FUN_1005dbaa8(2);
  }
  if ((param_1[0x1a] != 0) && (uVar15 = FUN_10056f2dc(param_1[0x1a],param_1), (int)uVar15 != 0))
  goto LAB_1005eaca4;
  puVar9 = (undefined8 *)param_1[0x1d];
  if (puVar9 != (undefined8 *)0x0) {
    plVar11 = (long *)*puVar9;
    plVar12 = (long *)param_1[0x1e];
    if (plVar11 != plVar12) {
      do {
        if ((plVar11 != (long *)0x0) && (*(undefined8 **)((long)plVar11 + 0x24) == param_1)) {
          plVar3 = (long *)plVar11[1];
          *plVar3 = *plVar11;
          *(long **)(*plVar11 + 8) = plVar3;
          *plVar11 = (long)plVar11;
          plVar11[1] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0xffffffff;
          plVar11[2] = 0;
          if (*(int *)((long)plVar11 + 0x34) == 0) {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar11,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                          ,0x926);
            puVar9 = (undefined8 *)param_1[0x1d];
            plVar12 = (long *)param_1[0x1e];
          }
          *(int *)((long)param_1 + 0xdc) = *(int *)((long)param_1 + 0xdc) + -1;
        }
        plVar11 = (long *)*puVar9;
      } while (plVar11 != plVar12);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar9,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                  ,0x1eb);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (param_1[0x1c] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x1c],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                  ,0x1f2);
    param_1[0x1c] = 0;
  }
  if (param_1[0x1f] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x1f],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                  ,0x1f8);
    param_1[0x1f] = 0;
  }
  lVar16 = param_1[0xb];
  lVar17 = param_1[0x20];
  iVar7 = (**(code **)*param_1)(param_1);
  if (iVar7 == 0) {
    lVar8 = 0;
  }
  else if (param_1[0xb] == 0) {
    lVar8 = 0;
  }
  else {
    puVar9 = (undefined8 *)param_1[0x16];
    if ((puVar9 == param_1) || (puVar9 == (undefined8 *)0x0)) {
LAB_1005ea860:
      if ((param_1[0x2e] != 0) &&
         (*(undefined1 *)(param_1[0x2e] + 0xa0) = 1, (*puVar1 >> 2 & 1) == 0)) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 0x40;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar8 = param_1[0x1a];
      puVar9 = param_1 + 0x2b;
      if (((*(byte *)(lVar8 + 0x48) & 1) == 0) &&
         ((((undefined8 *)*puVar9 != puVar9 || ((undefined8 *)param_1[0x2c] != puVar9)) &&
          ((*puVar1 >> 6 & 1) == 0)))) {
        do {
          FUN_1005dbaa8(2);
        } while ((*puVar1 >> 6 & 1) == 0);
        lVar8 = param_1[0x1a];
      }
      FUN_10057097c(lVar8,9);
      puVar4 = (undefined8 *)param_1[0x2c];
      *puVar4 = param_1[0x2b];
      *(undefined8 **)(param_1[0x2b] + 8) = puVar4;
      param_1[0x2b] = puVar9;
      param_1[0x2c] = puVar9;
      param_1[0x2d] = 0;
      FUN_100570990(param_1[0x1a],9);
      lVar8 = param_1[0x2e];
      plVar12 = (long *)param_1[0x2f];
      if (plVar12 != (long *)0x0) {
        plVar12[0xb] = 0;
        (**(code **)(*plVar12 + 0x18))(plVar12,1);
        param_1[0x2f] = 0;
      }
    }
    else if (puVar9 == (undefined8 *)0x0) {
      lVar8 = 0;
    }
    else {
      if (param_1[0xb] != puVar9[0xb]) goto LAB_1005ea860;
      lVar8 = 0;
    }
  }
  iVar7 = *(int *)(param_1 + 0x15);
  if ((iVar7 != 0) && (lVar10 = param_1[0x13], lVar10 != 0)) {
    lVar18 = 1;
    if ((*(int *)((long)param_1 + 0xac) != 0) && (0 < iVar7)) {
      lVar19 = 0;
      while( true ) {
        puVar9 = *(undefined8 **)(lVar10 + lVar19 * 8);
        if (puVar9 != (undefined8 *)0x0) {
          if (puVar9[0xb] == lVar16) {
            puVar9[0xb] = 0;
            puVar9 = *(undefined8 **)(lVar10 + lVar19 * 8);
          }
          if (puVar9[0x20] == lVar17) {
            puVar9[0x20] = 0;
            puVar9 = *(undefined8 **)(lVar10 + lVar19 * 8);
          }
          iVar7 = (**(code **)*puVar9)();
          lVar10 = param_1[0x13];
          if ((iVar7 != 0) &&
             (lVar13 = *(long *)(lVar10 + lVar19 * 8), *(long *)(lVar13 + 0x170) == lVar8)) {
            *(undefined8 *)(lVar13 + 0x170) = 0;
          }
          plVar12 = *(long **)(lVar10 + lVar19 * 8);
          if ((plVar12[0x14] != 0) &&
             (iVar7 = *(int *)(param_1 + 0x15), lVar13 = lVar18, lVar19 + 1 < (long)iVar7)) {
            while( true ) {
              if (*(long **)(lVar10 + lVar13 * 8) == plVar12) {
                *(undefined8 *)(lVar10 + lVar13 * 8) = 0;
              }
              if (iVar7 <= (int)lVar13 + 1) break;
              lVar10 = param_1[0x13];
              plVar12 = *(long **)(lVar10 + lVar19 * 8);
              lVar13 = lVar13 + 1;
            }
            plVar12 = *(long **)(param_1[0x13] + lVar19 * 8);
          }
          (**(code **)(*plVar12 + 0x18))(plVar12,1);
          *(undefined8 *)(param_1[0x13] + lVar19 * 8) = 0;
          iVar7 = *(int *)(param_1 + 0x15);
        }
        lVar19 = lVar19 + 1;
        if (iVar7 <= lVar19) break;
        lVar18 = lVar18 + 1;
        lVar10 = param_1[0x13];
      }
      lVar10 = param_1[0x13];
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar10,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                  ,0x273);
    param_1[0x13] = 0;
    if (param_1[0x14] != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x14],
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                    ,0x278);
      param_1[0x14] = 0;
    }
  }
  lVar16 = param_1[0xb];
  if (lVar16 != 0) {
    puVar9 = (undefined8 *)param_1[0x16];
    if (((puVar9 == param_1) || (puVar9 == (undefined8 *)0x0)) ||
       ((puVar9 != (undefined8 *)0x0 && (lVar16 != puVar9[0xb])))) {
      FUN_100585d48(lVar16,1);
      param_1[0xb] = 0;
    }
  }
  iVar7 = (**(code **)*param_1)(param_1);
  if (iVar7 != 0) {
    if (param_1[0x16] == 0) {
      lVar16 = param_1[0x2e];
LAB_1005eab0c:
      if (lVar16 == 0) goto LAB_1005eab34;
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar16,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                    ,0x298);
    }
    else {
      lVar16 = param_1[0x2e];
      if (*(long *)(param_1[0x16] + 0x170) != lVar16) goto LAB_1005eab0c;
    }
    param_1[0x2e] = 0;
  }
LAB_1005eab34:
  plVar12 = (long *)param_1[0x20];
  if (plVar12 != (long *)0x0) {
    if ((param_1[0x16] == 0) || (*(long **)(param_1[0x16] + 0x100) != plVar12)) {
      if (*plVar12 != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*plVar12,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                      ,0x2a4);
        plVar12 = (long *)param_1[0x20];
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar12,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                    ,0x2a6);
    }
    param_1[0x20] = 0;
  }
  lVar16 = param_1[0x16];
  if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0xa8))) {
    lVar17 = 0;
    do {
      if ((*(long *)(lVar16 + 0x98) != 0) &&
         (*(undefined8 **)(*(long *)(lVar16 + 0x98) + lVar17 * 8) == param_1)) {
        FUN_1005ea17c(lVar16,lVar17,0,1);
        break;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar16 + 0xa8));
  }
  if (param_1[6] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[6],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                  ,0x2be);
    param_1[6] = 0;
  }
  FUN_1005dbee4(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
  plVar12 = param_1 + 1;
  plVar11 = (long *)param_1[2];
  *plVar11 = *plVar12;
  *(long **)(*plVar12 + 8) = plVar11;
  *plVar12 = (long)plVar12;
  param_1[2] = plVar12;
  puVar9 = (undefined8 *)param_1[0x24];
  *puVar9 = param_1[0x23];
  *(undefined8 **)(param_1[0x23] + 8) = puVar9;
  param_1[0x23] = param_1 + 0x23;
  param_1[0x24] = param_1 + 0x23;
  FUN_1005dbf14(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
  if ((param_2 != 0) && (param_1[0x14] == 0)) {
    *(undefined4 *)(param_1 + 4) = 0xdead5eed;
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                  ,0x2cc);
  }
  uVar15 = 0;
LAB_1005eaca4:
  if (lVar14 != 0 && bVar2) {
    FUN_100570990(lVar14,9);
  }
  return uVar15;
}




undefined8 FUN_1005eacdc(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long local_30;
  int local_24;
  
  if (param_2 == (long *)0x0) {
    uVar4 = 0x1f;
  }
  else if (*(long **)((long)param_2 + 0x24) == param_1) {
    plVar1 = (long *)param_2[1];
    *plVar1 = *param_2;
    *(long **)(*param_2 + 8) = plVar1;
    *param_2 = (long)param_2;
    param_2[1] = (long)param_2;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[2] = 0;
    if (*(int *)((long)param_2 + 0x34) == 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                    ,0x926);
    }
    *(int *)((long)param_1 + 0xdc) = *(int *)((long)param_1 + 0xdc) + -1;
    if ((param_3 & 1) == 0) {
      local_24 = 0;
      iVar2 = (**(code **)(*param_1 + 0xe0))(param_1,&local_24);
      if (iVar2 == 0 && 0 < local_24) {
        iVar2 = 0;
        do {
          iVar3 = (**(code **)(*param_1 + 0xe8))(param_1,iVar2,&local_30);
          if (iVar3 == 0) {
            *(short *)(local_30 + 0x32) = (short)iVar2;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_24);
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0x22;
  }
  return uVar4;
}




undefined8 FUN_1005eade0(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xd0);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005eae04(void)

{
  return 1;
}




undefined8 FUN_1005eae0c(void)

{
  return 1;
}




undefined8 FUN_1005eae14(undefined4 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  iVar2 = 0x100;
  if (iVar1 < 0x101) {
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_2 + 100) = param_1;
  *(int *)(param_2 + 0x68) = iVar2;
  return 0;
}




undefined8 FUN_1005eae38(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 100);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x68);
  }
  return 0;
}




undefined8 FUN_1005eae58(float param_1,float param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if (((param_1 <= param_2) && (0.0 <= param_1)) && (0.0 <= param_2)) {
    uVar1 = 0;
    *(float *)(param_3 + 0x74) = param_1;
    *(float *)(param_3 + 0x78) = param_2;
  }
  return uVar1;
}




undefined8 FUN_1005eae84(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x74);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x78);
  }
  return 0;
}




undefined8 FUN_1005eaea4(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  fVar1 = fVar4;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  fVar3 = fVar4;
  if (0.0 <= param_2) {
    fVar3 = param_2;
  }
  fVar2 = 360.0;
  if (fVar1 <= 360.0) {
    fVar2 = fVar1;
  }
  fVar1 = 360.0;
  if (fVar3 <= 360.0) {
    fVar1 = fVar3;
  }
  if (0.0 <= param_3) {
    fVar4 = param_3;
  }
  fVar3 = 1.0;
  if (fVar4 <= 1.0) {
    fVar3 = fVar4;
  }
  *(float *)(param_4 + 0x7c) = fVar2;
  *(float *)(param_4 + 0x80) = fVar1;
  *(float *)(param_4 + 0x84) = fVar3;
  return 0;
}




undefined8 FUN_1005eaef4(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x80);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x84);
  }
  return 0;
}




undefined8 FUN_1005eaf20(long param_1,float *param_2,int param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  
  if (param_3 < 0) {
    return 0x1f;
  }
  if ((param_2 != (float *)0x0) && (1 < param_3)) {
    pfVar5 = param_2 + 4;
    lVar6 = 1;
    fVar7 = *param_2;
    do {
      pfVar1 = pfVar5 + -1;
      if (*pfVar1 <= fVar7) {
        return 0x1f;
      }
      fVar7 = *pfVar5;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if (0.0 <= fVar7) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar7)) {
          bVar2 = fVar7 < 1.0;
          bVar3 = fVar7 == 1.0;
          bVar4 = false;
        }
      }
      if (!bVar3 && bVar2 == bVar4) {
        return 0x1f;
      }
      lVar6 = lVar6 + 1;
      pfVar5 = pfVar5 + 3;
      fVar7 = *pfVar1;
    } while (lVar6 < param_3);
  }
  *(float **)(param_1 + 0x88) = param_2;
  *(int *)(param_1 + 0x90) = param_3;
  return 0;
}




undefined8 FUN_1005eafac(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x88);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x90);
  }
  return 0;
}




undefined8 FUN_1005eafcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x110);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005eaff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(long *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0xb8),param_2,param_3);
    return uVar1;
  }
  return 0x13;
}




void FUN_1005eaffc(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_168 [260];
  undefined4 local_64;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar2;
  _bzero(auStack_168,0x130);
  uVar1 = (**(code **)(*(long *)(param_1 + 0x58) + 0xa8))
                    (*(long *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0xb8),auStack_168);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *param_2 = local_64;
  }
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




undefined8 FUN_1005eb07c(long param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_3 == (long *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  iVar3 = (int)param_2;
  if (-1 < iVar3) {
    if (*(int *)(param_1 + 0xa8) <= iVar3) {
      return 0x1f;
    }
    uVar6 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
    *param_3 = *(long *)(*(long *)(param_1 + 0x98) + uVar6);
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x98) + uVar6);
    if (puVar4 != (undefined8 *)0x0) {
      if ((*(byte *)(param_1 + 0x2e) & 1) != 0) {
        iVar2 = (**(code **)*puVar4)();
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)iVar3 * 8);
        if ((iVar2 != 0) && (*(int *)(puVar4 + 0x21) == 5)) {
          return 0x2e;
        }
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
      }
      if (puVar4[0x14] != 0) {
        FUN_1005eb278(puVar4,param_2,0);
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)iVar3 * 8);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
      }
      iVar2 = (**(code **)*puVar4)();
      if (iVar2 != 0) {
        lVar9 = *param_3;
        if (lVar9 == 0) {
          return 0x1f;
        }
        if ((*(byte *)(param_1 + 0x2e) & 1) == 0) {
          if (*(int *)(lVar9 + 0xb8) != *(int *)(*(long *)(lVar9 + 0x58) + 0x13c)) {
            iVar3 = FUN_1005e8188(lVar9,0,2);
            if (iVar3 != 0) {
              return 0;
            }
            FUN_1005e80f8(lVar9);
          }
        }
        else {
          if (*(int *)(*(long *)(lVar9 + 0xb0) + 0xb8) == iVar3) {
            iVar3 = *(int *)(*(long *)(lVar9 + 0xb0) + 0x18c);
            uVar1 = *(uint *)(*(long *)(lVar9 + 0x178) + 0x3c);
            if (((*(int *)(lVar9 + 0x38) == uVar1 + iVar3) ||
                ((*(uint *)(lVar9 + 0x3c) < uVar1 &&
                 (*(int *)(lVar9 + 0x38) == *(uint *)(lVar9 + 0x3c) + iVar3)))) &&
               ((*(uint *)(lVar9 + 0x50) >> 4 & 1) == 0)) {
              return 0;
            }
          }
          *(undefined4 *)(lVar9 + 0x108) = 5;
          *(undefined4 *)(param_1 + 0x108) = 5;
          FUN_1005dbee4(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x100) + 0x10) + 0x178));
          lVar5 = *(long *)(lVar9 + 0x100);
          *(long *)(lVar5 + 0x28) = lVar9;
          lVar7 = *(long *)(lVar5 + 0x10);
          uVar8 = *(undefined8 *)(lVar7 + 0x168);
          *(long *)(lVar5 + 0x18) = lVar7 + 0x160;
          *(undefined8 *)(lVar5 + 0x20) = uVar8;
          *(long *)(lVar7 + 0x168) = lVar5 + 0x18;
          **(long **)(lVar5 + 0x20) = lVar5 + 0x18;
          FUN_1005dbf14(*(undefined8 *)(lVar7 + 0x178));
          FUN_1005fba94(*(undefined8 *)(*(long *)(lVar9 + 0x100) + 0x10),0);
        }
      }
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005eb278(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  char local_189;
  undefined1 auStack_188 [256];
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_78;
  int local_70;
  int local_6c;
  undefined4 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar12 = *(long *)PTR____stack_chk_guard_101444218;
  lVar8 = param_1[0x1a];
  local_189 = '\0';
  local_58 = lVar12;
  FUN_1005fbaa8(lVar8 + 0x10,&local_189);
  uVar9 = (undefined4)param_2;
  if ((local_189 == '\0') && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x17) = uVar9;
    FUN_10056f2dc(param_1[0x1a],param_1);
    if (((*(byte *)((long)param_1 + 0x2e) & 1) != 0) &&
       (uVar6 = (**(code **)*param_1)(param_1), (uVar6 & 1) != 0)) {
      uVar10 = 0;
      goto LAB_1005eb4d0;
    }
  }
  puVar11 = (uint *)(param_1 + 10);
  iVar5 = (**(code **)*param_1)(param_1);
  if (iVar5 == 0) {
    bVar4 = false;
  }
  else if ((*puVar11 >> 2 & 1) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if ((lVar8 != 0) && ((*puVar11 & 8) == 0)) {
      FUN_10057097c(lVar8,8);
      bVar4 = true;
    }
    if ((param_1[0xb] != 0) && (lVar7 = *(long *)(param_1[0xb] + 400), lVar7 != 0)) {
      while ((*(uint *)(lVar7 + 0x1a4) >> 4 & 1) != 0) {
        FUN_1005dbaa8(10);
        lVar7 = *(long *)(param_1[0xb] + 400);
      }
    }
    *(undefined1 *)(param_1[0x2e] + 0xa0) = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar11,0x10);
    if (bVar3) {
      *puVar11 = *puVar11 & 0xffffffb3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[0x16] != 0) {
    puVar11 = (uint *)(param_1[0x16] + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar11,0x10);
      if (bVar3) {
        *puVar11 = *puVar11 & 0xffffffb7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar1 = *(uint *)((long)param_1 + 0x2c);
    *(uint *)((long)param_1 + 0x2c) = uVar1 & 0xfffffff8;
    *(uint *)((long)param_1 + 0x2c) = uVar1 & 0xfffffff8 | *(uint *)(param_1[0x16] + 0x2c) & 7;
  }
  *(undefined4 *)(param_1 + 0x17) = uVar9;
  _bzero(auStack_188,0x130);
  uVar10 = (**(code **)(param_1[0xb] + 0xa8))(param_1[0xb],param_2,auStack_188);
  if ((int)uVar10 == 0) {
    if (param_1[6] != 0) {
      FUN_1005ecc98(param_1[6],auStack_188,0x100);
    }
    *(undefined4 *)(param_1 + 5) = local_88;
    *(undefined4 *)(param_1 + 0xc) = local_84;
    *(float *)((long)param_1 + 100) = (float)local_80;
    *(undefined4 *)((long)param_1 + 0x6c) = local_64;
    *(undefined4 *)((long)param_1 + 0x134) = local_5c;
    *(int *)((long)param_1 + 0x44) = local_70;
    *(int *)(param_1 + 9) = (local_6c + 1) - local_70;
    *(undefined4 *)((long)param_1 + 0x3c) = local_78;
    (**(code **)(*param_1 + 0x130))(param_1,local_70,2,local_6c,2);
    iVar5 = (**(code **)*param_1)(param_1);
    uVar10 = 0;
    if (iVar5 != 0) {
      lVar7 = param_1[0x2f];
      *(undefined4 *)(lVar7 + 0x6c) = local_64;
      *(undefined4 *)(lVar7 + 0x134) = local_5c;
      *(int *)(lVar7 + 0x60) = (int)param_1[0xc];
      *(undefined4 *)(lVar7 + 0xb8) = uVar9;
    }
  }
  if ((lVar8 != 0) && (bVar4)) {
    FUN_100570990(lVar8,8);
  }
LAB_1005eb4d0:
  if (lVar12 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}




undefined8 FUN_1005eb500(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xb0);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005eb524(long param_1,long param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    iVar1 = 0x100;
    if (param_3 < 0x101) {
      iVar1 = param_3;
    }
    pcVar2 = *(char **)(param_1 + 0x30);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    FUN_1005ecc98(param_2,pcVar2,iVar1);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005eb570(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == (int *)0x0) {
    return 0x1f;
  }
  if (param_3 == 1) {
    if ((*(float *)(param_1 + 100) != 0.0) && (*(uint *)(param_1 + 0x3c) != 0xffffffff)) {
      uVar5 = (ulong)*(float *)(param_1 + 100);
      iVar2 = 0;
      if (uVar5 != 0) {
        iVar2 = (int)(((ulong)*(uint *)(param_1 + 0x3c) * 1000) / uVar5);
      }
      *param_2 = iVar2;
      return 0;
    }
  }
  else {
    if (param_3 != 4) {
      if (param_3 == 2) {
        *param_2 = *(int *)(param_1 + 0x3c);
        return 0;
      }
      if (*(long *)(param_1 + 0x58) == 0) {
        return 0x1f;
      }
      uVar3 = FUN_1005861c0();
      return uVar3;
    }
    uVar4 = *(uint *)(param_1 + 0x3c);
    if (uVar4 != 0xffffffff) {
      if ((*(byte *)(param_1 + 0x2d) >> 1 & 1) != 0) {
        *param_2 = uVar4 * *(int *)(param_1 + 0x60) * 2;
        return 0;
      }
      uVar1 = *(int *)(param_1 + 0x28) - 1;
      if (uVar1 < 5) {
        uVar4 = *(int *)(&DAT_10115f970 + (long)(int)uVar1 * 4) * uVar4 >> 3;
      }
      *param_2 = uVar4 * *(int *)(param_1 + 0x60);
      return 0;
    }
  }
  *param_2 = -1;
  return 0;
}




undefined8
FUN_1005eb670(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x28);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x60);
  }
  if (param_5 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *param_5 = 0;
    switch(uVar1) {
    case 1:
      uVar1 = 8;
      break;
    case 2:
      uVar1 = 0x10;
      break;
    case 3:
      uVar1 = 0x18;
      break;
    case 4:
    case 5:
      uVar1 = 0x20;
      break;
    default:
      goto switchD_1005eb6bc_default;
    }
    *param_5 = uVar1;
  }
switchD_1005eb6bc_default:
  return 0;
}




undefined8 FUN_1005eb6fc(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005eb720(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined4 *)0x0 && param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(*(long *)(param_1 + 0x58) + 0x188) != 0)) {
    uVar1 = FUN_1005d8b40();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_1005eb75c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return 0x1f;
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(*(long *)(param_1 + 0x58) + 0x188) != 0)) {
    uVar1 = FUN_1005d8b80();
    return uVar1;
  }
  return 0x3f;
}




uint FUN_1005eb784(undefined8 *param_1,int *param_2,undefined4 *param_3,byte *param_4,byte *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((param_2 == (int *)0x0) ||
     (*param_2 = *(int *)(param_1 + 0x21), (*(uint *)(param_1 + 10) >> 2 & 1) == 0)) {
LAB_1005eb844:
    uVar4 = 0;
  }
  else {
    iVar2 = (**(code **)*param_1)(param_1);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x26) == 0) {
        iVar3 = *(int *)(param_1[0x1a] + 0x15d10);
        iVar2 = *(int *)(param_1 + 0x27);
LAB_1005eb838:
        if (1 < iVar3 - iVar2) goto LAB_1005eb844;
      }
    }
    else {
      if (((*param_2 != 0) || (param_1[0xb] == 0)) || ((*(byte *)(param_1[0x1a] + 0x48) & 1) != 0))
      goto LAB_1005eb844;
      lVar5 = *(long *)(param_1[0xb] + 400);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(lVar5 + 0x194);
        if ((uVar4 | 0x10) != 0x10) {
          *param_2 = 2;
          if (param_1[0x20] != 0) {
            *(uint *)(param_1[0x20] + 300) = uVar4;
          }
          goto LAB_1005eb848;
        }
        uVar4 = *(uint *)(lVar5 + 0x1a4) >> 4 & 1;
      }
      if ((uVar4 == 0) && ((*(uint *)(param_1 + 10) & 0x40) != 0)) {
        puVar6 = (undefined8 *)param_1[0x14];
        if ((puVar6 != (undefined8 *)0x0) ||
           ((puVar1 = param_1, param_1[0x13] != 0 &&
            (puVar6 = *(undefined8 **)(param_1[0x13] + (long)*(int *)(param_1 + 0x17) * 8),
            puVar6 != (undefined8 *)0x0)))) {
          puVar1 = puVar6;
        }
        if (*(int *)(puVar1 + 0x26) == 0) {
          iVar3 = *(int *)(param_1[0x1a] + 0x15d10);
          iVar2 = *(int *)(puVar1 + 0x27);
          goto LAB_1005eb838;
        }
      }
    }
    uVar4 = 0;
    *param_2 = 6;
  }
LAB_1005eb848:
  if (param_3 != (undefined4 *)0x0) {
    if (((param_1[0xb] == 0) || (lVar5 = *(long *)(param_1[0xb] + 400), lVar5 == 0)) ||
       ((*(int *)(param_1 + 0x21) != 4 && (*(int *)(param_1 + 0x21) != 0)))) {
      *param_3 = 0;
    }
    else {
      *param_3 = *(undefined4 *)(lVar5 + 400);
    }
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = 0;
    if ((param_1[0xb] != 0) && (lVar5 = *(long *)(param_1[0xb] + 400), lVar5 != 0)) {
      *param_4 = (byte)(*(uint *)(lVar5 + 0x1a4) >> 5) & 1;
    }
  }
  if (((param_5 != (byte *)0x0) && (param_1[0xb] != 0)) &&
     (lVar5 = *(long *)(param_1[0xb] + 400), lVar5 != 0)) {
    *param_5 = (byte)(*(uint *)(lVar5 + 0x1a4) >> 4) & 1;
  }
  if (param_1[0x20] != 0) {
    uVar4 = *(uint *)(param_1[0x20] + 300);
  }
  return uVar4;
}




ulong FUN_1005eb974(long param_1,long param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int local_1a0;
  uint local_19c;
  undefined1 auStack_198 [304];
  long local_68;
  
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  lVar6 = *(long *)(param_1 + 0x58);
  local_68 = lVar7;
  if (lVar6 == 0) {
    uVar5 = 0x36;
  }
  else {
    uVar4 = 0x1f;
    if (param_2 != 0) {
      uVar4 = 0x44;
    }
    uVar5 = (ulong)uVar4;
    if (param_2 != 0) {
      if (*(long *)(lVar6 + 400) == 0) {
        uVar5 = 0x44;
      }
      else {
        if ((*(byte *)(param_1 + 0x2d) >> 1 & 1) == 0) {
          uVar4 = *(int *)(param_1 + 0x28) - 1;
          if (uVar4 < 5) {
            uVar4 = *(uint *)(&DAT_10115f970 + (long)(int)uVar4 * 4) >> 3;
          }
          else {
            uVar4 = 1;
          }
          uVar4 = uVar4 * *(int *)(param_1 + 0x60);
        }
        else {
          uVar4 = 1;
        }
        _bzero(auStack_198,0x130);
        uVar5 = (**(code **)(lVar6 + 0xa8))(lVar6,*(undefined4 *)(lVar6 + 0x13c),auStack_198);
        if ((int)uVar5 == 0) {
          uVar2 = *(uint *)(param_1 + 0x2c);
          if ((uVar2 >> 9 & 1) == 0) {
            uVar4 = *(int *)(param_1 + 0x28) - 1;
            if (uVar4 < 5) {
              uVar4 = *(uint *)(&DAT_10115f970 + (long)(int)uVar4 * 4) >> 3;
            }
            else {
              uVar4 = 1;
            }
            uVar4 = uVar4 * *(int *)(param_1 + 0x60);
            uVar9 = 0;
            if (uVar4 != 0) {
              uVar9 = (uint)param_3 / uVar4;
            }
            param_3 = (ulong)(uVar9 * uVar4);
          }
          if ((int)param_3 == 0) {
            iVar8 = 0;
            uVar5 = 0;
          }
          else {
            iVar8 = 0;
            uVar9 = 0;
            while( true ) {
              local_19c = 0;
              lVar6 = param_2 + (ulong)uVar9;
              if ((uVar2 >> 9 & 1) == 0) {
                uVar2 = 0;
                if (uVar4 != 0) {
                  uVar2 = (uint)param_3 / uVar4;
                }
                uVar5 = FUN_100585ec4(*(long *)(param_1 + 0x58),lVar6,uVar2,&local_1a0);
                if (((uint)uVar5 | 0x10) != 0x10) goto LAB_1005ebb70;
                local_19c = local_1a0 * uVar4;
              }
              else {
                uVar5 = FUN_1005d148c(*(undefined8 *)(*(long *)(param_1 + 0x58) + 400),lVar6,1,
                                      param_3,&local_19c);
                if (((uint)uVar5 | 0x10) != 0x10) goto LAB_1005ebb70;
              }
              if ((*(code **)(param_1 + 0x140) != (code *)0x0) && (local_19c != 0)) {
                (**(code **)(param_1 + 0x140))(*(undefined8 *)(param_1 + 0x150),lVar6);
              }
              uVar2 = local_19c;
              if ((int)uVar5 != 0x10) {
                uVar2 = (uint)param_3;
              }
              iVar8 = local_19c + iVar8;
              uVar3 = 0;
              if (uVar4 != 0) {
                uVar3 = local_19c / uVar4;
              }
              uVar3 = *(int *)(param_1 + 0x38) + uVar3;
              uVar1 = *(uint *)(param_1 + 0x3c);
              if (uVar3 <= *(uint *)(param_1 + 0x3c)) {
                uVar1 = uVar3;
              }
              *(uint *)(param_1 + 0x38) = uVar1;
              param_3 = (ulong)(uVar2 - local_19c);
              if (uVar2 - local_19c == 0) break;
              uVar9 = local_19c + uVar9;
              uVar2 = *(uint *)(param_1 + 0x2c);
            }
          }
          if (param_4 != (int *)0x0) {
            *param_4 = iVar8;
          }
        }
      }
    }
  }
LAB_1005ebb70:
  if (lVar7 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}




undefined8 FUN_1005ebba4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_34;
  
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar5 + 400);
    if (((lVar4 != 0) && ((int)param_2 != 0)) && ((*(uint *)(lVar4 + 0x1a4) & 0x2000) != 0)) {
      *(uint *)(lVar4 + 0x1a4) = *(uint *)(lVar4 + 0x1a4) | 1;
      lVar5 = *(long *)(param_1 + 0x58);
    }
    *(undefined4 *)(lVar5 + 0x178) = 0;
    if (*(void **)(lVar5 + 0x160) != (void *)0x0) {
      _bzero(*(void **)(lVar5 + 0x160),(ulong)*(uint *)(lVar5 + 0x174));
    }
    if (*(code **)(lVar5 + 0xd0) != (code *)0x0) {
      (**(code **)(lVar5 + 0xd0))(lVar5);
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x58) + 400) == 0) {
    uVar3 = 0xe;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x38) = (int)param_2;
    uVar3 = FUN_100586284(*(long *)(param_1 + 0x58),uVar1,param_2,2);
    if ((int)uVar3 == 0) {
      iVar2 = FUN_1005865e4(*(undefined8 *)(param_1 + 0x58),&local_34,2);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x38) = local_34;
      }
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(param_1,uVar1,*(undefined4 *)(param_1 + 0x38),2);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_1005ebc94(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar5 = (**(code **)*param_1)();
  if ((uVar5 & 1) == 0) {
    bVar4 = false;
    lVar6 = 0;
    param_1[0x22] = param_2;
  }
  else {
    lVar6 = param_1[0x2f];
    param_1[0x22] = param_2;
    if (lVar6 == 0) {
      bVar4 = false;
      lVar6 = 0;
    }
    else {
      *(long *)(lVar6 + 0x110) = param_2;
      param_2 = param_1[0x22];
      bVar4 = true;
    }
  }
  plVar7 = param_1 + 0x22;
  if ((param_2 == 0) && (*plVar7 = *(long *)(param_1[0x1a] + 0x15d48), bVar4)) {
    *(undefined8 *)(lVar6 + 0x110) = *(undefined8 *)(param_1[0x1a] + 0x15d48);
  }
  FUN_1005dbee4(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
  puVar1 = param_1 + 0x23;
  puVar2 = (undefined8 *)param_1[0x24];
  *puVar2 = param_1[0x23];
  *(undefined8 **)(param_1[0x23] + 8) = puVar2;
  param_1[0x23] = puVar1;
  param_1[0x24] = puVar1;
  lVar6 = *plVar7;
  uVar9 = *(undefined8 *)(lVar6 + 0x30);
  param_1[0x23] = lVar6 + 0x28;
  param_1[0x24] = uVar9;
  *(undefined8 **)(lVar6 + 0x30) = puVar1;
  *(undefined8 **)param_1[0x24] = puVar1;
  param_1[0x25] = param_1;
  plVar7 = (long *)*plVar7;
  plVar3 = (long *)plVar7[1];
  *plVar3 = *plVar7;
  *(long **)(*plVar7 + 8) = plVar3;
  *plVar7 = (long)plVar7;
  lVar6 = param_1[0x1a];
  lVar8 = *(long *)(lVar6 + 0x15d50);
  *plVar7 = lVar8;
  plVar7[1] = lVar6 + 0x15d50;
  *(long **)(lVar8 + 8) = plVar7;
  *(long **)plVar7[1] = plVar7;
  FUN_1005dbf14(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
  return 0;
}




undefined8 FUN_1005ebdd0(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x110);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005ebdf4(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  if (param_2 == (int *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    iVar2 = *(int *)(param_1 + 0xdc);
  }
  else {
    if (*(long *)(param_1 + 0xe0) == 0) {
      *param_2 = 0;
      if (*(long **)(param_1 + 0xe8) == (long *)0x0) {
        return 0;
      }
      plVar1 = (long *)**(long **)(param_1 + 0xe8);
      plVar3 = *(long **)(param_1 + 0xf0);
      if (plVar1 == plVar3) {
        return 0;
      }
      iVar2 = 0;
      do {
        if ((uint)*(ushort *)(plVar1 + 6) == *(uint *)(param_1 + 0xb8)) {
          iVar2 = iVar2 + 1;
          *param_2 = iVar2;
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar3);
      return 0;
    }
    iVar2 = *(int *)(*(long *)(param_1 + 0xe0) + (long)*(int *)(param_1 + 0xb8) * 4);
  }
  *param_2 = iVar2;
  return 0;
}




undefined8 FUN_1005ebe98(long *param_1,int param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  int local_34;
  
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,&local_34);
  if ((int)uVar2 == 0) {
    if (param_2 < 0) {
      uVar2 = 0x1f;
    }
    else {
      uVar2 = 0x1f;
      if ((param_3 != (long *)0x0) && (param_2 < local_34)) {
        plVar3 = (long *)param_1[0x1d];
        iVar4 = 0;
        do {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)param_1[0x1e]) {
            return 0;
          }
        } while (((param_1[0x14] != 0) &&
                 ((uint)*(ushort *)(plVar3 + 6) != *(uint *)(param_1 + 0x17))) ||
                (bVar1 = iVar4 < param_2, iVar4 = iVar4 + 1, bVar1));
        uVar2 = 0;
        *param_3 = (long)plVar3;
      }
    }
  }
  return uVar2;
}




undefined8
FUN_1005ebf48(long param_1,long param_2,long param_3,undefined8 param_4,int *param_5,int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  if (param_2 == 0) {
    uVar2 = 0x1f;
  }
  else if ((param_3 == 0) && (param_5 == (int *)0x0)) {
    uVar2 = 0x1f;
  }
  else {
    if (param_3 != 0) {
      pcVar3 = *(char **)(param_2 + 0x1c);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      FUN_1005ecc98(param_3,pcVar3,param_4);
    }
    if (param_5 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      if (param_6 == 1) {
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x2c));
        iVar5 = (int)((fVar6 * 1000.0) / *(float *)(param_1 + 100));
      }
      else if (param_6 == 4) {
        uVar4 = *(uint *)(param_2 + 0x2c);
        uVar1 = *(int *)(param_1 + 0x28) - 1;
        if (uVar1 < 5) {
          uVar4 = *(int *)(&DAT_10115f970 + (long)(int)uVar1 * 4) * uVar4 >> 3;
        }
        iVar5 = uVar4 * *(int *)(param_1 + 0x60);
      }
      else {
        if (param_6 != 2) {
          return 0;
        }
        iVar5 = *(int *)(param_2 + 0x2c);
      }
      uVar2 = 0;
      *param_5 = iVar5;
    }
  }
  return uVar2;
}




void FUN_1005ec04c(long *param_1)

{
  undefined8 *in_x4;
  
  if (in_x4 != (undefined8 *)0x0) {
    *in_x4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ec05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))();
  return;
}




undefined8
FUN_1005ec060(long *param_1,uint param_2,int param_3,long param_4,undefined8 *param_5,int param_6,
             int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_60;
  int local_54;
  
  if (param_1[0x1d] == 0) {
    plVar6 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x70,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                                   ,0x89c,0);
    param_1[0x1d] = (long)plVar6;
    if (plVar6 == (long *)0x0) {
      return 0x26;
    }
    plVar8 = plVar6 + 7;
    param_1[0x1e] = (long)plVar8;
    *(undefined4 *)(plVar6 + 3) = 0xffffffff;
    *plVar6 = (long)plVar6;
    plVar6[1] = (long)plVar6;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 10) = 0xffffffff;
    plVar6[9] = 0;
    *(undefined4 *)((long)plVar6 + 0x2c) = 0;
    *(undefined8 *)((long)plVar6 + 0x1c) = 0;
    *(undefined4 *)((long)plVar6 + 100) = 0xffffffff;
    *(undefined8 *)((long)plVar6 + 0x54) = 0;
    plVar6[7] = *plVar6;
    plVar6[8] = (long)plVar6;
    *(long **)(*plVar6 + 8) = plVar8;
    *(long **)plVar6[8] = plVar8;
  }
  if ((param_5 == (undefined8 *)0x0) || (plVar6 = (long *)*param_5, plVar6 == (long *)0x0)) {
    if (param_4 == 0) {
      plVar6 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x38,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                                     ,0x8ca,0,0);
      *(undefined4 *)(plVar6 + 3) = 0xffffffff;
      *plVar6 = (long)plVar6;
      plVar6[1] = (long)plVar6;
      plVar6[2] = 0;
      if (plVar6 == (long *)0x0) {
        return 0x26;
      }
      *(undefined8 *)((long)plVar6 + 0x1c) = 0;
    }
    else {
      plVar6 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x138,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_soundi.cpp"
                                     ,0x8c1,0,0);
      *(undefined4 *)(plVar6 + 3) = 0xffffffff;
      *plVar6 = (long)plVar6;
      plVar6[1] = (long)plVar6;
      plVar6[2] = 0;
      if (plVar6 == (long *)0x0) {
        return 0x26;
      }
      *(long **)((long)plVar6 + 0x1c) = plVar6 + 7;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = plVar6;
    }
    *(undefined4 *)((long)plVar6 + 0x34) = 0;
  }
  else {
    *(undefined4 *)(plVar6 + 3) = 0xffffffff;
    *plVar6 = (long)plVar6;
    plVar6[1] = (long)plVar6;
    plVar6[2] = 0;
    *(undefined4 *)((long)plVar6 + 0x34) = 1;
  }
  if (param_3 == 1) {
    param_2 = (uint)(((float)param_2 / 1000.0) * *(float *)((long)param_1 + 100));
  }
  else if (param_3 != 2) {
    if (param_3 != 4) {
      return 0x1f;
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 == 0) {
      param_2 = 0;
    }
    else {
      uVar2 = (int)param_1[5] - 1;
      if (uVar2 < 5) {
        uVar3 = 0;
        if ((long)*(int *)(&DAT_10115f970 + (long)(int)uVar2 * 4) != 0) {
          uVar3 = (uint)(((ulong)param_2 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115f970 + (long)(int)uVar2 * 4));
        }
        param_2 = 0;
        if (uVar1 != 0) {
          param_2 = uVar3 / uVar1;
        }
      }
    }
  }
  if ((param_4 != 0) && (*(long *)((long)plVar6 + 0x1c) != 0)) {
    FUN_1005ecc98(*(long *)((long)plVar6 + 0x1c),param_4,0x100);
  }
  *(uint *)((long)plVar6 + 0x2c) = param_2;
  lVar7 = param_1[0x1e];
  plVar8 = *(long **)param_1[0x1d];
  do {
    if (param_2 < *(uint *)(plVar8 + 3)) {
      *(uint *)(plVar6 + 3) = param_2;
      lVar7 = plVar8[1];
      *plVar6 = (long)plVar8;
      plVar6[1] = lVar7;
      plVar8[1] = (long)plVar6;
      goto LAB_1005ec2a0;
    }
    plVar8 = (long *)*plVar8;
  } while (plVar8[1] != lVar7);
  *(uint *)(plVar6 + 3) = param_2;
  lVar9 = *(long *)(lVar7 + 8);
  *plVar6 = lVar7;
  plVar6[1] = lVar9;
  *(long **)(lVar7 + 8) = plVar6;
LAB_1005ec2a0:
  *(long **)plVar6[1] = plVar6;
  if (param_6 == -1) {
    param_6 = (int)param_1[0x17];
  }
  *(short *)(plVar6 + 6) = (short)param_6;
  *(long **)((long)plVar6 + 0x24) = param_1;
  *(int *)((long)param_1 + 0xdc) = *(int *)((long)param_1 + 0xdc) + 1;
  if (param_7 != 0) {
    local_54 = 0;
    iVar4 = (**(code **)(*param_1 + 0xe0))(param_1,&local_54);
    if (iVar4 == 0 && 0 < local_54) {
      iVar4 = 0;
      do {
        iVar5 = (**(code **)(*param_1 + 0xe8))(param_1,iVar4,&local_60);
        if (iVar5 == 0) {
          *(short *)(local_60 + 0x32) = (short)iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_54);
    }
  }
  return 0;
}




undefined8 FUN_1005ec374(long *param_1)

{
  int iVar1;
  int iVar2;
  long local_30;
  int local_24;
  
  local_24 = 0;
  iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,&local_24);
  if (iVar1 == 0 && 0 < local_24) {
    iVar1 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0xe8))(param_1,iVar1,&local_30);
      if (iVar2 == 0) {
        *(short *)(local_30 + 0x32) = (short)iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_24);
  }
  return 0;
}




void FUN_1005ec3f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1005eacdc(param_1,param_2,0);
  return;
}




undefined8 FUN_1005ec400(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_2 & 7) != 0) {
    uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfffffff8;
    *(uint *)((long)param_1 + 0x2c) = uVar6;
    if ((param_2 & 1) == 0) {
      if ((param_2 >> 1 & 1) != 0) {
        uVar6 = uVar6 | 2;
        goto LAB_1005ec448;
      }
      if ((param_2 >> 2 & 1) != 0) {
        uVar6 = uVar6 | 4;
        goto LAB_1005ec448;
      }
    }
    else {
      uVar6 = uVar6 | 1;
LAB_1005ec448:
      *(uint *)((long)param_1 + 0x2c) = uVar6;
    }
    iVar5 = (**(code **)*param_1)(param_1);
    if (iVar5 != 0) {
      if (((param_2 & 6) != 0) && (puVar1 = (uint *)(param_1 + 10), (*puVar1 >> 7 & 1) == 0)) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xffffffb7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (param_1[0x16] != 0) {
          puVar1 = (uint *)(param_1[0x16] + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 & 0xffffffb7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      *(uint *)(param_1[0x2e] + 0x58) =
           *(uint *)(param_1[0x2e] + 0x58) & 0xfffffff8 | *(uint *)((long)param_1 + 0x2c) & 7;
    }
  }
  if ((param_2 >> 0x12 & 1) == 0) {
    if ((param_2 >> 0x13 & 1) != 0) {
      uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfff3ffff | 0x80000;
      goto LAB_1005ec4e0;
    }
  }
  else {
    uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfff3ffff | 0x40000;
LAB_1005ec4e0:
    *(uint *)((long)param_1 + 0x2c) = uVar6;
  }
  if ((param_2 >> 0x14 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) == 0) {
      if ((param_2 >> 0x16 & 1) == 0) {
        uVar6 = *(uint *)((long)param_1 + 0x2c);
        if ((param_2 >> 0x1a & 1) == 0) goto LAB_1005ec538;
        uVar6 = uVar6 & 0xfb8fffff | 0x4000000;
      }
      else {
        uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfb8fffff | 0x400000;
      }
    }
    else {
      uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfb8fffff | 0x200000;
    }
  }
  else {
    uVar6 = *(uint *)((long)param_1 + 0x2c) & 0xfb8fffff | 0x100000;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar6;
LAB_1005ec538:
  uVar2 = uVar6 & 0xbfffffff;
  if ((param_2 & 0x40000000) != 0) {
    uVar2 = uVar6 | 0x40000000;
  }
  uVar6 = uVar2 | 0x80000000;
  if (-1 < (int)param_2) {
    uVar6 = uVar2 & 0x7fffffff;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar6;
  if ((param_2 >> 3 & 1) == 0) {
    if ((param_2 >> 4 & 1) == 0) {
      return 0;
    }
    uVar6 = uVar6 & 0xffffffe7 | 0x10;
  }
  else {
    uVar6 = uVar6 & 0xffffffe7 | 8;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar6;
  return 0;
}




undefined8 FUN_1005ec58c(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005ec5b0(long param_1,int param_2)

{
  if (param_2 < -1) {
    return 0x1f;
  }
  *(int *)(param_1 + 0x4c) = param_2;
  return 0;
}




undefined8 FUN_1005ec5d4(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x4c);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005ec5f8(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar7 = 0x13;
  if ((((param_3 < 5) && ((1 << (ulong)(param_3 & 0x1f) & 0x16U) != 0)) &&
      (uVar7 = 0x13, param_5 < 5)) && ((1 << (ulong)(param_5 & 0x1f) & 0x16U) != 0)) {
    if (param_3 == 1) {
      param_2 = (uint)(((float)param_2 / 1000.0) * *(float *)((long)param_1 + 100));
    }
    else if (param_3 == 4) {
      uVar8 = *(uint *)(param_1 + 0xc);
      if (uVar8 == 0) {
        param_2 = 0;
      }
      else if (*(int *)(param_1 + 5) - 1U < 5) {
        uVar2 = 0;
        if ((long)*(int *)(&DAT_10115f970 + (long)(int)(*(int *)(param_1 + 5) - 1U) * 4) != 0) {
          uVar2 = (uint)(((ulong)param_2 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115f970 +
                                             (long)(int)(*(int *)(param_1 + 5) - 1U) * 4));
        }
        param_2 = 0;
        if (uVar8 != 0) {
          param_2 = uVar2 / uVar8;
        }
      }
    }
    else if (param_3 != 2) {
      param_2 = 0;
    }
    if (param_5 == 1) {
      uVar8 = (int)(((float)param_4 / 1000.0) * *(float *)((long)param_1 + 100));
    }
    else if (param_5 == 4) {
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = param_4;
        if (*(int *)(param_1 + 5) - 1U < 5) {
          uVar5 = 0;
          if ((long)*(int *)(&DAT_10115f970 + (long)(int)(*(int *)(param_1 + 5) - 1U) * 4) != 0) {
            uVar5 = (uint)(((ulong)param_4 << 3) /
                          (ulong)(long)*(int *)(&DAT_10115f970 +
                                               (long)(int)(*(int *)(param_1 + 5) - 1U) * 4));
          }
          uVar8 = 0;
          if (uVar2 != 0) {
            uVar8 = uVar5 / uVar2;
          }
        }
      }
    }
    else {
      uVar8 = 0;
      if (param_5 == 2) {
        uVar8 = param_4;
      }
    }
    uVar2 = *(uint *)((long)param_1 + 0x3c);
    if (uVar2 <= param_2) {
      param_2 = 0;
    }
    if (uVar2 <= uVar8) {
      uVar8 = uVar2 - 1;
    }
    uVar2 = uVar2 - 1;
    if (uVar8 != 0) {
      uVar2 = uVar8;
    }
    if (param_2 < uVar2) {
      *(uint *)((long)param_1 + 0x44) = param_2;
      *(uint *)(param_1 + 9) = (1 - param_2) + uVar2;
      iVar6 = (**(code **)*param_1)(param_1);
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else if ((*(int *)((long)param_1 + 0x44) == 0) &&
              (*(int *)(param_1 + 9) == *(int *)((long)param_1 + 0x3c))) {
        uVar7 = 0;
      }
      else if ((*(byte *)((long)param_1 + 0x2c) & 6) == 0) {
        uVar7 = 0;
      }
      else {
        puVar1 = (uint *)(param_1 + 10);
        uVar7 = 0;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 0x10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      uVar7 = 0x1f;
    }
  }
  return uVar7;
}




undefined8 FUN_1005ec7f4(long param_1,int *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  if (4 < param_3) {
    return 0x13;
  }
  if ((1 << (ulong)(param_3 & 0x1f) & 0x16U) == 0) {
    return 0x13;
  }
  if (4 < param_5) {
    return 0x13;
  }
  if ((1 << (ulong)(param_5 & 0x1f) & 0x16U) == 0) {
    return 0x13;
  }
  if (param_2 != (int *)0x0) {
    if (param_3 == 1) {
      fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
      iVar2 = (int)((fVar4 * 1000.0) / *(float *)(param_1 + 100));
    }
    else if (param_3 == 4) {
      uVar3 = *(uint *)(param_1 + 0x44);
      uVar1 = *(int *)(param_1 + 0x28) - 1;
      if (uVar1 < 5) {
        uVar3 = *(int *)(&DAT_10115f970 + (long)(int)uVar1 * 4) * uVar3 >> 3;
      }
      iVar2 = uVar3 * *(int *)(param_1 + 0x60);
    }
    else {
      if (param_3 != 2) goto LAB_1005ec8b0;
      iVar2 = *(int *)(param_1 + 0x44);
    }
    *param_2 = iVar2;
  }
LAB_1005ec8b0:
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  uVar3 = (*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48)) - 1;
  if (param_5 == 1) {
    uVar3 = (uint)(((float)uVar3 * 1000.0) / *(float *)(param_1 + 100));
  }
  else if (param_5 == 4) {
    uVar1 = *(int *)(param_1 + 0x28) - 1;
    if (uVar1 < 5) {
      uVar3 = *(int *)(&DAT_10115f970 + (long)(int)uVar1 * 4) * uVar3 >> 3;
    }
    uVar3 = uVar3 * *(int *)(param_1 + 0x60);
  }
  else if (param_5 != 2) {
    return 0;
  }
  *param_4 = uVar3;
  return 0;
}




undefined8 FUN_1005ec958(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return 0;
}




undefined8 FUN_1005ec964(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x38);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005ec988(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xe0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005ec998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0x13;
}




undefined8 FUN_1005ec9a4(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xe8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005ec9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0x13;
}




undefined8 FUN_1005ec9c0(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xf0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005ec9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0x13;
}




undefined8 FUN_1005ec9dc(float param_1,long param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.01;
  if (0.01 <= param_1) {
    fVar2 = param_1;
  }
  fVar3 = 100.0;
  if (fVar2 <= 100.0) {
    fVar3 = fVar2;
  }
  if ((*(long *)(param_2 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x58) + 0x100),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005eca0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(fVar3);
    return uVar1;
  }
  return 0x13;
}




undefined8 FUN_1005eca18(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x108),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005eca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  *param_2 = 0;
  return 0x13;
}




undefined8 FUN_1005eca44(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  return 0;
}




undefined8 FUN_1005eca50(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xc0);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005eca74(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 200) = param_2;
  return 0;
}




undefined8 FUN_1005eca80(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 200);
    return 0;
  }
  return 0x1f;
}




void FUN_1005ecaa4(char *param_1)

{
  long lVar1;
  char local_228 [511];
  undefined1 local_29;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_101444218;
  local_228[0] = '\0';
  local_28 = lVar1;
  _vsnprintf(local_228,0x200,param_1,&stack0x00000000);
  local_29 = 0;
  FUN_1005db97c(local_228);
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




uint FUN_1005ecb14(char *param_1,uint param_2,char *param_3,va_list param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_2 < 1) {
    uVar3 = 0;
  }
  else {
    *param_1 = '\0';
    uVar2 = _vsnprintf(param_1,(long)(int)param_2,param_3,param_4);
    uVar1 = uVar2;
    if ((int)param_2 <= (int)uVar2) {
      uVar1 = param_2;
    }
    uVar3 = param_2;
    if ((uVar2 & 0x80000000) == 0) {
      uVar3 = uVar1;
    }
    param_1[(long)(int)param_2 + -1] = '\0';
  }
  return uVar3;
}




int FUN_1005ecb6c(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return (int)pcVar1 - (int)param_1;
}




void FUN_1005ecb80(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + lVar2);
    *(char *)(param_1 + lVar2) = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return;
}




void FUN_1005ecb98(long param_1,long param_2,int param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (param_3 == (int)lVar2) {
      return;
    }
    cVar1 = *(char *)(param_2 + lVar2);
    *(char *)(param_1 + lVar2) = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return;
}




int FUN_1005ecbbc(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)*param_1;
  if (*param_1 == '\0') {
    return -1;
  }
  iVar3 = 0;
  do {
    param_1 = param_1 + 1;
    if (iVar3 == 0) {
      if ((uVar1 >> 7 & 1) == 0) {
        iVar2 = 1;
      }
      else if ((uVar1 & 0xe0) == 0xc0) {
        iVar2 = 2;
      }
      else if ((uVar1 & 0xf0) == 0xe0) {
        iVar2 = 3;
      }
      else {
        if ((uVar1 & 0xf8) != 0xf0) {
          return 0;
        }
        iVar2 = 4;
      }
    }
    else {
      iVar2 = iVar3;
      if ((uVar1 & 0xc0) != 0x80) {
        return 0;
      }
    }
    iVar3 = iVar2 + -1;
    uVar1 = (uint)*param_1;
  } while (uVar1 != 0);
  return iVar2 + -2 >> 0x1f;
}




undefined4 FUN_1005ecc58(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 4;
  if ((param_1 & 0xf8) != 0xf0) {
    uVar1 = 1;
  }
  uVar2 = 3;
  if ((param_1 & 0xf0) != 0xe0) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if ((param_1 & 0xe0) != 0xc0) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if ((param_1 & 0x80) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}




void FUN_1005ecc98(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  if (0 < param_3) {
    cVar5 = *param_2;
    iVar3 = 1;
    if (((uint)(int)cVar5 >> 7 & 1) != 0) {
      iVar3 = 4;
      if (((int)cVar5 & 0xf8U) != 0xf0) {
        iVar3 = 1;
      }
      iVar4 = 3;
      if (((int)cVar5 & 0xf0U) != 0xe0) {
        iVar4 = iVar3;
      }
      iVar3 = 2;
      if (((int)cVar5 & 0xe0U) != 0xc0) {
        iVar3 = iVar4;
      }
    }
    if (((param_3 + -1 != 0) && (iVar3 < param_3)) && (cVar5 != '\0')) {
      iVar4 = param_3 + -1;
      pcVar2 = param_1;
      do {
        param_1 = pcVar2 + 1;
        param_2 = param_2 + 1;
        *pcVar2 = cVar5;
        if (iVar3 < 2) {
          cVar5 = *param_2;
          if (((uint)(int)cVar5 >> 7 & 1) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 4;
            if (((int)cVar5 & 0xf8U) != 0xf0) {
              iVar3 = 1;
            }
            iVar1 = 3;
            if (((int)cVar5 & 0xf0U) != 0xe0) {
              iVar1 = iVar3;
            }
            iVar3 = 2;
            if (((int)cVar5 & 0xe0U) != 0xc0) {
              iVar3 = iVar1;
            }
          }
        }
        else {
          iVar3 = iVar3 + -1;
        }
      } while (((iVar4 + -1 != 0) && (iVar3 < iVar4)) &&
              (cVar5 = *param_2, iVar4 = iVar4 + -1, pcVar2 = param_1, cVar5 != '\0'));
    }
    *param_1 = '\0';
  }
  return;
}




void FUN_1005ecd8c(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  if (param_3 != 0) {
    cVar5 = *param_1;
    do {
      if (cVar5 == '\0') break;
      param_1 = param_1 + 1;
      cVar5 = *param_1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (0 < param_3) {
    cVar5 = *param_2;
    iVar3 = 1;
    if (((uint)(int)cVar5 >> 7 & 1) != 0) {
      iVar3 = 4;
      if (((int)cVar5 & 0xf8U) != 0xf0) {
        iVar3 = 1;
      }
      iVar4 = 3;
      if (((int)cVar5 & 0xf0U) != 0xe0) {
        iVar4 = iVar3;
      }
      iVar3 = 2;
      if (((int)cVar5 & 0xe0U) != 0xc0) {
        iVar3 = iVar4;
      }
    }
    if (((param_3 + -1 != 0) && (iVar3 < param_3)) && (cVar5 != '\0')) {
      iVar4 = param_3 + -1;
      pcVar2 = param_1;
      do {
        param_1 = pcVar2 + 1;
        param_2 = param_2 + 1;
        *pcVar2 = cVar5;
        if (iVar3 < 2) {
          cVar5 = *param_2;
          if (((uint)(int)cVar5 >> 7 & 1) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 4;
            if (((int)cVar5 & 0xf8U) != 0xf0) {
              iVar3 = 1;
            }
            iVar1 = 3;
            if (((int)cVar5 & 0xf0U) != 0xe0) {
              iVar1 = iVar3;
            }
            iVar3 = 2;
            if (((int)cVar5 & 0xe0U) != 0xc0) {
              iVar3 = iVar1;
            }
          }
        }
        else {
          iVar3 = iVar3 + -1;
        }
      } while (((iVar4 + -1 != 0) && (iVar3 < iVar4)) &&
              (cVar5 = *param_2, iVar4 = iVar4 + -1, pcVar2 = param_1, cVar5 != '\0'));
    }
    *param_1 = '\0';
  }
  return;
}




void FUN_1005ecea4(char *param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  
  if (param_2 != 0) {
    cVar6 = *param_1;
    do {
      if (cVar6 == '\0') break;
      param_1 = param_1 + 1;
      cVar6 = *param_1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  uVar2 = param_2;
  if (param_4 + 1 < (int)param_2) {
    uVar2 = param_4 + 1;
  }
  if (0 < (int)uVar2) {
    cVar6 = *param_3;
    iVar4 = 4;
    if (((int)cVar6 & 0xf8U) != 0xf0) {
      iVar4 = 1;
    }
    iVar5 = 3;
    if (((int)cVar6 & 0xf0U) != 0xe0) {
      iVar5 = iVar4;
    }
    iVar4 = 2;
    if (((int)cVar6 & 0xe0U) != 0xc0) {
      iVar4 = iVar5;
    }
    iVar5 = 1;
    if (((int)cVar6 & 0x80U) != 0) {
      iVar5 = iVar4;
    }
    if (((uVar2 != 1) && (iVar5 < (int)uVar2)) && (cVar6 != '\0')) {
      uVar2 = -param_4 - 2;
      if ((int)uVar2 < (int)~param_2) {
        uVar2 = ~param_2;
      }
      iVar4 = -3 - uVar2;
      pcVar3 = param_1;
      do {
        param_1 = pcVar3 + 1;
        param_3 = param_3 + 1;
        *pcVar3 = cVar6;
        if (iVar5 < 2) {
          cVar6 = *param_3;
          if (((uint)(int)cVar6 >> 7 & 1) == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 4;
            if (((int)cVar6 & 0xf8U) != 0xf0) {
              iVar5 = 1;
            }
            iVar1 = 3;
            if (((int)cVar6 & 0xf0U) != 0xe0) {
              iVar1 = iVar5;
            }
            iVar5 = 2;
            if (((int)cVar6 & 0xe0U) != 0xc0) {
              iVar5 = iVar1;
            }
          }
        }
        else {
          iVar5 = iVar5 + -1;
        }
        if ((iVar4 == 0) || (iVar4 + 1 <= iVar5)) break;
        cVar6 = *param_3;
        iVar4 = iVar4 + -1;
        pcVar3 = param_1;
      } while (cVar6 != '\0');
    }
    *param_1 = '\0';
  }
  return;
}




void FUN_1005ecfe8(long param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  lVar3 = 0;
  do {
    cVar1 = *(char *)(param_2 + lVar3);
    pcVar2[lVar3] = cVar1;
    lVar3 = lVar3 + 1;
  } while (cVar1 != '\0');
  return;
}




void FUN_1005ed00c(char *param_1,long param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_3 != 0) {
    do {
      pcVar2 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar2;
    } while (cVar1 != '\0');
    lVar3 = -1;
    do {
      cVar1 = *(char *)(param_2 + lVar3 + 1);
      pcVar2[lVar3] = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 - param_3 != -1);
    pcVar2[lVar3] = '\0';
  }
  return;
}




int FUN_1005ed04c(uint param_1)

{
  if (param_1 - 0x41 < 0x1a) {
    param_1 = (param_1 & 0xff) + 0x20;
  }
  return (int)(char)param_1;
}




void FUN_1005ed068(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *param_1 = cVar1 + -0x20;
    }
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_1005ed098(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      *param_1 = cVar1 + ' ';
    }
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}




int FUN_1005ed0c8(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  do {
    cVar2 = *param_1;
    cVar1 = *param_2;
    if (cVar2 == '\0') {
      cVar2 = '\0';
      break;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar2 == cVar1);
  return (int)cVar2 - (int)cVar1;
}




int FUN_1005ed0f8(long param_1,long param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    cVar2 = *(char *)(param_1 + lVar3);
    pcVar1 = (char *)(param_2 + lVar3);
    if (param_3 <= (int)lVar3 + 1) break;
    lVar3 = lVar3 + 1;
  } while (cVar2 != '\0' && cVar2 == *pcVar1);
  return (int)cVar2 - (int)*pcVar1;
}




int FUN_1005ed12c(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  
  while( true ) {
    bVar3 = *param_1;
    uVar1 = (uint)bVar3;
    if (bVar3 - 0x41 < 0x1a) {
      uVar1 = bVar3 + 0x20;
    }
    cVar4 = (char)uVar1;
    bVar3 = *param_2;
    uVar2 = (uint)bVar3;
    if (bVar3 - 0x41 < 0x1a) {
      uVar2 = bVar3 + 0x20;
    }
    if ((uVar1 & 0xff) == 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if ((uVar1 & 0xff) != (uVar2 & 0xff)) {
LAB_1005ed174:
      return (int)cVar4 - (int)(char)uVar2;
    }
  }
  cVar4 = '\0';
  goto LAB_1005ed174;
}




int FUN_1005ed180(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    bVar3 = *(byte *)(param_1 + lVar4);
    uVar1 = (uint)bVar3;
    if (bVar3 - 0x41 < 0x1a) {
      uVar1 = bVar3 + 0x20;
    }
    bVar3 = *(byte *)(param_2 + lVar4);
    uVar2 = (uint)bVar3;
    if (bVar3 - 0x41 < 0x1a) {
      uVar2 = bVar3 + 0x20;
    }
  } while ((((int)lVar4 + 1 < param_3) && ((uVar1 & 0xff) != 0)) &&
          (lVar4 = lVar4 + 1, (uVar1 & 0xff) == (uVar2 & 0xff)));
  return (int)(char)uVar1 - (int)(char)uVar2;
}




char * FUN_1005ed1d8(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1 + -1;
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if ((int)pcVar2 != (int)param_1) {
    iVar1 = -((int)pcVar2 - (int)param_1);
    do {
      if (*param_1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
  }
  return (char *)0x0;
}




char * FUN_1005ed214(long param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1 + -1);
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  if ((int)((long)pcVar3 - param_1) != 0) {
    pcVar1 = (char *)(param_1 + (((long)pcVar3 - param_1 << 0x20) + -0x100000000 >> 0x20));
    iVar2 = -((int)pcVar3 - (int)param_1);
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
  }
  return (char *)0x0;
}




void * FUN_1005ed260(void *param_1,void *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)((long)param_2 + -1);
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  iVar3 = (int)pcVar2 - (int)param_2;
  if (iVar3 != 0) {
    pcVar2 = (char *)((long)param_1 + -1);
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if (iVar3 <= (int)pcVar2 - (int)param_1) {
      iVar4 = ((int)pcVar2 - (int)param_1) + 1;
      do {
        iVar1 = _memcmp(param_1,param_2,(long)iVar3);
        if (iVar1 == 0) {
          return param_1;
        }
        param_1 = (void *)((long)param_1 + 1);
        iVar4 = iVar4 + -1;
      } while (iVar3 < iVar4);
    }
    param_1 = (void *)0x0;
  }
  return param_1;
}




void FUN_1005ed2f4(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char *pcVar7;
  
  pcVar7 = param_1 + -1;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar5 = (int)pcVar7 - (int)param_1;
  pcVar2 = (char *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar5 + 1,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_string.cpp"
                                 ,0x16a,0,0);
  if ((-1 < iVar5) && (pcVar2 != (char *)0x0)) {
    cVar6 = *param_1;
    iVar4 = 4;
    if (((int)cVar6 & 0xf8U) != 0xf0) {
      iVar4 = 1;
    }
    iVar3 = 3;
    if (((int)cVar6 & 0xf0U) != 0xe0) {
      iVar3 = iVar4;
    }
    iVar4 = 2;
    if (((int)cVar6 & 0xe0U) != 0xc0) {
      iVar4 = iVar3;
    }
    iVar3 = 1;
    if (((int)cVar6 & 0x80U) != 0) {
      iVar3 = iVar4;
    }
    if (((iVar5 != 0) && (iVar3 < iVar5 + 1)) && (cVar6 != '\0')) {
      iVar5 = (int)pcVar7 - (int)param_1;
      pcVar7 = pcVar2;
      do {
        pcVar2 = pcVar7 + 1;
        param_1 = param_1 + 1;
        *pcVar7 = cVar6;
        if (iVar3 < 2) {
          cVar6 = *param_1;
          if (((uint)(int)cVar6 >> 7 & 1) == 0) {
            iVar3 = 1;
          }
          else {
            iVar4 = 4;
            if (((int)cVar6 & 0xf8U) != 0xf0) {
              iVar4 = 1;
            }
            iVar1 = 3;
            if (((int)cVar6 & 0xf0U) != 0xe0) {
              iVar1 = iVar4;
            }
            iVar3 = 2;
            if (((int)cVar6 & 0xe0U) != 0xc0) {
              iVar3 = iVar1;
            }
          }
        }
        else {
          iVar3 = iVar3 + -1;
        }
      } while (((iVar5 + -1 != 0) && (iVar3 < iVar5)) &&
              (cVar6 = *param_1, iVar5 = iVar5 + -1, pcVar7 = pcVar2, cVar6 != '\0'));
    }
    *pcVar2 = '\0';
  }
  return;
}




void FUN_1005ed44c(byte *param_1)

{
  for (; (ulong)*param_1 < 0x21 && (1L << ((ulong)*param_1 & 0x3f) & 0x100000600U) != 0;
      param_1 = param_1 + 1) {
  }
  return;
}




int FUN_1005ed47c(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1 + -1;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar2 != '\0');
    iVar1 = 0;
    if (param_1 <= pcVar3) {
      iVar4 = 1;
      do {
        iVar1 = iVar1 + (*pcVar3 + -0x30) * iVar4;
        iVar4 = iVar4 * 10;
        pcVar5 = pcVar2 + -2;
        pcVar2 = pcVar3;
        pcVar3 = pcVar5;
      } while (param_1 <= pcVar5);
    }
    return iVar1;
  }
  return 0;
}




int FUN_1005ed4dc(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    iVar4 = 0;
    do {
      param_1 = param_1 + 1;
      iVar3 = (int)cVar2;
      iVar1 = iVar4 * 0x10 + iVar3;
      iVar4 = iVar4 * 0x10;
      if (iVar3 - 0x61U < 6) {
        iVar4 = iVar1 + -0x57;
      }
      if (iVar3 - 0x41U < 6) {
        iVar4 = iVar1 + -0x37;
      }
      if ((byte)(cVar2 - 0x30U) < 10) {
        iVar4 = iVar1 + -0x30;
      }
      cVar2 = *param_1;
    } while (cVar2 != '\0');
    return iVar4;
  }
  return 0;
}




uint FUN_1005ed550(char *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_2 < 1) {
    uVar3 = 0;
  }
  else {
    *param_1 = '\0';
    uVar2 = _vsnprintf(param_1,(long)(int)param_2,param_3,&stack0x00000000);
    uVar1 = uVar2;
    if ((int)param_2 <= (int)uVar2) {
      uVar1 = param_2;
    }
    uVar3 = param_2;
    if ((uVar2 & 0x80000000) == 0) {
      uVar3 = uVar1;
    }
    param_1[(long)(int)param_2 + -1] = '\0';
  }
  return uVar3;
}




void FUN_1005ed5bc(long param_1,int param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((2 < param_2) && (uVar4 = (uint)*param_3, *param_3 != 0)) {
    iVar3 = 0;
    do {
      param_3 = param_3 + 1;
      bVar2 = (byte)uVar4;
      if ((char)bVar2 < '\0') {
        lVar1 = (long)iVar3;
        *(byte *)(param_1 + lVar1) = (byte)(uVar4 >> 6) | 0xc0;
        iVar3 = iVar3 + 2;
        ((byte *)(param_1 + lVar1))[1] = bVar2 & 0x3f | 0x80;
      }
      else {
        *(byte *)(param_1 + iVar3) = bVar2;
        iVar3 = iVar3 + 1;
      }
      uVar4 = (uint)*param_3;
    } while ((iVar3 < param_2 + -2) && (uVar4 != 0));
  }
  *(undefined1 *)(param_1 + iVar3) = 0;
  return;
}




ulong FUN_1005ed62c(long param_1)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1 + -2);
  do {
    psVar1 = psVar1 + 1;
  } while (*psVar1 != 0);
  return (ulong)((long)psVar1 - param_1) >> 1;
}




void FUN_1005ed644(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    sVar1 = *(short *)(param_2 + lVar2);
    *(short *)(param_1 + lVar2) = sVar1;
    lVar2 = lVar2 + 2;
  } while (sVar1 != 0);
  return;
}




void FUN_1005ed65c(long param_1,long param_2,int param_3)

{
  short sVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (param_3 == (int)lVar2) {
      return;
    }
    sVar1 = *(short *)(param_2 + lVar2 * 2);
    *(short *)(param_1 + lVar2 * 2) = sVar1;
    lVar2 = lVar2 + 1;
  } while (sVar1 != 0);
  return;
}




void FUN_1005ed684(long param_1,long param_2)

{
  short sVar1;
  short *psVar2;
  long lVar3;
  
  psVar2 = (short *)(param_1 + -2);
  do {
    psVar2 = psVar2 + 1;
  } while (*psVar2 != 0);
  lVar3 = 0;
  do {
    sVar1 = *(short *)(param_2 + lVar3);
    *(short *)((long)psVar2 + lVar3) = sVar1;
    lVar3 = lVar3 + 2;
  } while (sVar1 != 0);
  return;
}




void FUN_1005ed6a8(short *param_1,long param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  long lVar3;
  
  if (param_3 != 0) {
    do {
      psVar2 = param_1 + 1;
      sVar1 = *param_1;
      param_1 = psVar2;
    } while (sVar1 != 0);
    lVar3 = -2;
    do {
      sVar1 = *(short *)(param_2 + lVar3 + 2);
      *(short *)((long)psVar2 + lVar3) = sVar1;
      if (sVar1 == 0) {
        return;
      }
      param_3 = param_3 + -1;
      lVar3 = lVar3 + 2;
    } while (param_3 != 0);
    *(undefined2 *)((long)psVar2 + lVar3) = 0;
  }
  return;
}




int FUN_1005ed6e0(uint param_1)

{
  if (param_1 - 0x41 < 0x1a) {
    param_1 = (param_1 & 0xffff) + 0x20;
  }
  return (int)(short)param_1;
}




void FUN_1005ed6fc(short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  while (sVar1 != 0) {
    if ((ushort)(sVar1 - 0x61U) < 0x1a) {
      *param_1 = sVar1 + -0x20;
    }
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_1005ed730(short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  while (sVar1 != 0) {
    if ((ushort)(sVar1 - 0x41U) < 0x1a) {
      *param_1 = sVar1 + 0x20;
    }
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}




int FUN_1005ed760(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  do {
    sVar2 = *param_1;
    sVar1 = *param_2;
    if (sVar2 == 0) {
      sVar2 = 0;
      break;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (sVar2 == sVar1);
  return (int)sVar2 - (int)sVar1;
}




int FUN_1005ed790(long param_1,long param_2,int param_3)

{
  short sVar1;
  short sVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    sVar1 = *(short *)(param_1 + lVar3 * 2);
    sVar2 = *(short *)(param_2 + lVar3 * 2);
    if (param_3 <= (int)lVar3 + 1) break;
    lVar3 = lVar3 + 1;
  } while (sVar1 != 0 && sVar1 == sVar2);
  return (int)sVar1 - (int)sVar2;
}




int FUN_1005ed7c8(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  
  while( true ) {
    uVar3 = *param_1;
    uVar1 = (uint)uVar3;
    if (uVar3 - 0x41 < 0x1a) {
      uVar1 = uVar3 + 0x20;
    }
    sVar4 = (short)uVar1;
    uVar3 = *param_2;
    uVar2 = (uint)uVar3;
    if (uVar3 - 0x41 < 0x1a) {
      uVar2 = uVar3 + 0x20;
    }
    if ((uVar1 & 0xffff) == 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if ((uVar1 & 0xffff) != (uVar2 & 0xffff)) {
LAB_1005ed810:
      return (int)sVar4 - (int)(short)uVar2;
    }
  }
  sVar4 = 0;
  goto LAB_1005ed810;
}




int FUN_1005ed81c(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar3 = *(ushort *)(param_1 + lVar4 * 2);
    uVar1 = (uint)uVar3;
    if (uVar3 - 0x41 < 0x1a) {
      uVar1 = uVar3 + 0x20;
    }
    uVar3 = *(ushort *)(param_2 + lVar4 * 2);
    uVar2 = (uint)uVar3;
    if (uVar3 - 0x41 < 0x1a) {
      uVar2 = uVar3 + 0x20;
    }
  } while ((((int)lVar4 + 1 < param_3) && ((uVar1 & 0xffff) != 0)) &&
          (lVar4 = lVar4 + 1, (uVar1 & 0xffff) == (uVar2 & 0xffff)));
  return (int)(short)uVar1 - (int)(short)uVar2;
}




short * FUN_1005ed874(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_1 + -1;
  do {
    psVar2 = psVar2 + 1;
  } while (*psVar2 != 0);
  iVar1 = (int)((ulong)((long)psVar2 - (long)param_1) >> 1);
  if (iVar1 != 0) {
    iVar1 = -iVar1;
    do {
      if (*param_1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
  }
  return (short *)0x0;
}




void * FUN_1005ed8b0(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  psVar3 = (short *)((long)param_2 + -2);
  do {
    psVar3 = psVar3 + 1;
  } while (*psVar3 != 0);
  iVar4 = (int)((ulong)((long)psVar3 - (long)param_2) >> 1);
  if (iVar4 != 0) {
    psVar3 = (short *)((long)param_1 + -2);
    do {
      psVar3 = psVar3 + 1;
    } while (*psVar3 != 0);
    iVar2 = (int)((ulong)((long)psVar3 - (long)param_1) >> 1);
    if (iVar4 <= iVar2) {
      iVar2 = iVar2 + 1;
      do {
        iVar1 = _memcmp(param_1,param_2,(long)iVar4);
        if (iVar1 == 0) {
          return param_1;
        }
        param_1 = (void *)((long)param_1 + 2);
        iVar2 = iVar2 + -1;
      } while (iVar4 < iVar2);
    }
    param_1 = (void *)0x0;
  }
  return param_1;
}




void FUN_1005ed948(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1 + -1;
  do {
    psVar2 = psVar2 + 1;
  } while (*psVar2 != 0);
  psVar2 = (short *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                  ((int)psVar2 - (int)param_1) + 2U & 0xfffffffe,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_stringw.cpp"
                                  ,0xca,0,0);
  if (psVar2 != (short *)0x0) {
    do {
      sVar1 = *param_1;
      *psVar2 = sVar1;
      psVar2 = psVar2 + 1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
  }
  return;
}




void FUN_1005ed9b8(ushort *param_1)

{
  for (; (ulong)*param_1 < 0x21 && (1L << ((ulong)*param_1 & 0x3f) & 0x100000600U) != 0;
      param_1 = param_1 + 1) {
  }
  return;
}




int FUN_1005ed9e8(short *param_1)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  
  if (param_1 != (short *)0x0) {
    psVar2 = param_1 + -1;
    do {
      psVar3 = psVar2;
      psVar2 = psVar3 + 1;
    } while (*psVar2 != 0);
    iVar1 = 0;
    if (param_1 <= psVar3) {
      iVar4 = 1;
      do {
        iVar1 = iVar1 + (*psVar3 + -0x30) * iVar4;
        iVar4 = iVar4 * 10;
        psVar5 = psVar2 + -2;
        psVar2 = psVar3;
        psVar3 = psVar5;
      } while (param_1 <= psVar5);
    }
    return iVar1;
  }
  return 0;
}




char * FUN_1005eda48(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar2 = param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 2;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar3;
    }
    *pcVar2 = '\0';
    return param_1;
  }
  return (char *)0x0;
}




long FUN_1005eda7c(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    iVar2 = FUN_1005ecb6c(param_1);
    if (param_2 < iVar2 * 2 + 2) {
      param_1 = 0;
    }
    else if (-1 < iVar2) {
      puVar4 = (undefined1 *)(param_1 + (long)iVar2 * 2 + 1);
      lVar3 = (long)iVar2;
      do {
        puVar4[-1] = *(undefined1 *)(param_1 + lVar3);
        *puVar4 = 0;
        puVar4 = puVar4 + -2;
        bVar1 = 0 < lVar3;
        lVar3 = lVar3 + -1;
      } while (bVar1);
    }
  }
  return param_1;
}




undefined8 FUN_1005edafc(undefined8 param_1)

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
  uVar2 = FUN_1005f45d8(param_1,&local_140,&local_148);
  if ((int)uVar2 == 0) {
    if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
      local_148 = 0;
    }
    uVar2 = FUN_1005f6318(local_140);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_1005edb9c;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,1,param_1,"System::release",local_138);
  }
LAB_1005edb9c:
  if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_148 = 0;
  }
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005edbd8(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f63e4(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setOutput",auStack_148);
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




undefined8 FUN_1005edcbc(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6434(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getOutput",auStack_148);
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




undefined8 FUN_1005edda0(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6588(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getNumDrivers",auStack_148);
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
FUN_1005ede84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f6610(local_170,param_2,param_3,param_4,param_5,param_6,param_7,param_8),
     (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005632dc(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_6);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_7);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    FUN_1005630e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_8);
    FUN_1005acff8(uVar3,1,param_1,"System::getDriverInfo",auStack_168);
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




undefined8 FUN_1005ee0b8(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6850(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setDriver",auStack_148);
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




undefined8 FUN_1005ee19c(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f68a8(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getDriver",auStack_148);
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




undefined8 FUN_1005ee280(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f68cc(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setSoftwareChannels",auStack_148);
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




undefined8 FUN_1005ee364(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6908(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getSoftwareChannels",auStack_148);
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
FUN_1005ee448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f6478(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::setSoftwareFormat",auStack_168);
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
FUN_1005ee5ac(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  long local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if ((int)uVar3 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(local_170 + 0x708);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(local_170 + 0x160b0);
    }
    if (param_4 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      *param_4 = *(undefined4 *)(local_170 + 0x70c);
    }
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005630e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005630e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::getSoftwareFormat",auStack_168);
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




undefined8 FUN_1005ee72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f6934(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d14(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::setDSPBufferSize",auStack_158);
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




undefined8 FUN_1005ee854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f696c(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563124(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getDSPBufferSize",auStack_158);
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
FUN_1005ee97c(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             long param_7,ulong param_8)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f6994(local_170,param_2,param_3,param_4,param_5,param_6,param_7,param_8),
     (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562e5c(auStack_168,0x100,param_2 != 0);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_3 != 0);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_4 != 0);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_5 != 0);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_6 != 0);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_7 != 0);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    FUN_100562d14(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_8 & 0xffffffff);
    FUN_1005acff8(uVar3,1,param_1,"System::setFileSystem",auStack_168);
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




undefined8 FUN_1005eebd0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f6a78(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562e5c(auStack_168,0x100,param_2 != 0);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_3 != 0);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_4 != 0);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562e5c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5 != 0);
    FUN_1005acff8(uVar3,1,param_1,"System::attachFileSystem",auStack_168);
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




undefined8 FUN_1005eed74(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6ab0(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setAdvancedSettings",auStack_148);
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




undefined8 FUN_1005eee58(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6ce4(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getAdvancedSettings",auStack_148);
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




undefined8 FUN_1005eef3c(undefined8 param_1,long param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f6d78(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562e5c(auStack_158,0x100,param_2 != 0);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d60(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::setCallback",auStack_158);
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




undefined8 FUN_1005ef068(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6db0(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562eec(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setPluginPath",auStack_148);
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
FUN_1005ef14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f6e28(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::loadPlugin",auStack_168);
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




undefined8 FUN_1005ef2b0(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f6e30(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d60(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::unloadPlugin",auStack_148);
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




undefined8 FUN_1005ef394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f6f34(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getNumNestedPlugins",auStack_158);
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
FUN_1005ef4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f6f98(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563124(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::getNestedPlugin",auStack_168);
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




undefined8 FUN_1005ef620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f6e84(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getNumPlugins",auStack_158);
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
FUN_1005ef748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f7004(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563124(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::getPluginHandle",auStack_168);
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
FUN_1005ef8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f7068(local_170,param_2,param_3,param_4,param_5,param_6), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563124(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_6);
    FUN_1005acff8(uVar3,1,param_1,"System::getPluginInfo",auStack_168);
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




undefined8 FUN_1005efa7c(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f71e4(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d60(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setOutputByPlugin",auStack_148);
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




undefined8 FUN_1005efb60(undefined8 param_1,undefined8 param_2)

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
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f723c(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100563124(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getOutputByPlugin",auStack_148);
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




undefined8 FUN_1005efc44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f7260(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::createDSPByPlugin",auStack_158);
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




undefined8 FUN_1005efd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f7300(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getDSPInfoByPlugin",auStack_158);
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
FUN_1005efe94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f7358(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563124(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562d60(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::registerCodec",auStack_168);
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




undefined8 FUN_1005efff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f7484(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100563124(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::registerDSP",auStack_158);
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

