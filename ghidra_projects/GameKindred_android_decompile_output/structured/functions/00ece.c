// functions/00ece — 25 functions
#include "libGameKindred.h"




void FUN_00ece1ec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = FMOD::System::playSound
                    (*(Sound **)(param_1 + 8),(ChannelGroup *)**(undefined8 **)(param_2 + 0x18),
                     false,(Channel **)0x1);
  FUN_00ece7bc(uVar2,param_2);
  FMOD::ChannelControl::setPaused(SUB81(*(undefined8 *)(param_2 + 0x20),0));
  FMOD::ChannelControl::setUserData(*(void **)(param_2 + 0x20));
  FMOD::Channel::getIndex(*(int **)(param_2 + 0x20));
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ece280(undefined8 param_1)

{
  FUN_00ece2ac(param_1,1);
  FMOD::System::mixerSuspend();
  thunk_FUN_00ecb454();
  return;
}




void FUN_00ece310(undefined8 param_1)

{
  thunk_FUN_00ecb458();
  FMOD::System::mixerResume();
  FUN_00ece2ac(param_1,0);
  return;
}




void FUN_00ece340(void)

{
  return;
}




void FUN_00ece344(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FMOD::System::mixerSuspend();
    return;
  }
  FMOD::System::mixerResume();
  return;
}




void FUN_00ece354(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x19080) = param_2 & 1;
  return;
}




undefined1 FUN_00ece368(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19080);
}




void FUN_00ece378(undefined4 param_1,long param_2,ushort param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  FMOD_OPENSTATE *pFVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ushort *puVar16;
  uint uVar17;
  ushort local_70 [2];
  uint local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar3 = DAT_02bf2570;
  if (DAT_02bf2574 == param_3) goto LAB_00ece678;
  lVar9 = param_2 + 0x20;
  uVar15 = (ulong)param_3;
  plVar14 = (long *)(lVar9 + uVar15 * 0x120);
  pFVar7 = (FMOD_OPENSTATE *)*plVar14;
  uVar2 = (uint)param_3;
  if (pFVar7 == (FMOD_OPENSTATE *)0x0) {
    lVar12 = lVar9 + uVar15 * 0x120;
    uVar8 = FUN_00ecdb80(param_2,lVar12 + 0x1c,*(undefined4 *)(lVar12 + 0xc),
                         *(undefined1 *)(lVar12 + 0x10),plVar14);
    if ((uVar8 & 1) != 0) {
      pFVar7 = (FMOD_OPENSTATE *)*plVar14;
      goto LAB_00ece404;
    }
    plVar10 = (long *)(param_2 + 0x12038);
    plVar13 = (long *)*plVar10;
    if (plVar13 != (long *)0x0) {
      do {
        if (*(uint *)(plVar13 + 4) >= uVar2) {
          plVar10 = plVar13;
        }
        plVar13 = (long *)plVar13[*(uint *)(plVar13 + 4) < uVar2];
      } while (plVar13 != (long *)0x0);
LAB_00ece5b0:
      if ((plVar10 != (long *)(param_2 + 0x12038)) && (*(uint *)(plVar10 + 4) <= uVar2)) {
        FUN_00ecf02c(param_2 + 0x12030);
      }
    }
  }
  else {
LAB_00ece404:
    lVar12 = lVar9 + uVar15 * 0x120;
    *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
    *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(param_2 + 0x12048);
    local_6c = 8;
    iVar6 = FMOD::Sound::getOpenState(pFVar7,&local_6c,(bool *)0x0,(bool *)0x0);
    if ((iVar6 == 0) && (local_6c != 2)) {
      local_70[0] = DAT_02bf2570;
      lVar9 = FUN_00ece6ac(param_2 + 0x12050);
      puVar16 = &DAT_02bf2570;
      if (lVar9 != 0) {
        local_70[0] = (short)(lVar9 - (param_2 + 0x12050) >> 3) * 0x6db7;
        *(undefined1 *)(param_2 + (ulong)local_70[0] + 0x19082) = 1;
        *(undefined4 *)(lVar9 + 0x30) = param_1;
        *(undefined2 *)(lVar9 + 0x34) = 1;
        *(long **)(lVar9 + 0x18) = plVar14;
        *(undefined8 *)(lVar9 + 0x20) = 0;
        if (local_6c == 1) {
          FUN_00ece734(param_2 + 0x19070,local_70);
          puVar16 = local_70;
        }
        else {
          FUN_00ece1ec(param_2);
          puVar16 = local_70;
        }
      }
      uVar3 = *puVar16;
      goto LAB_00ece678;
    }
    puVar1 = (uint *)(param_2 + 0x19060);
    uVar11 = *puVar1;
    if (uVar11 != 0) {
      uVar17 = 0;
      do {
        if (*(long *)(*(long *)(param_2 + 0x19068) + (ulong)uVar17 * 8) == *plVar14) {
          lVar12 = *(long *)(param_2 + 0x19068) + (long)(int)uVar17 * 8;
          FUN_00ecefc0(puVar1,lVar12,lVar12 + 8);
          uVar11 = *puVar1;
          uVar17 = uVar17 - 1;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar11);
    }
    FMOD::Sound::release();
    plVar10 = (long *)(param_2 + 0x12038);
    plVar13 = (long *)*plVar10;
    if (plVar13 != (long *)0x0) {
      do {
        if (*(uint *)(plVar13 + 4) >= uVar2) {
          plVar10 = plVar13;
        }
        plVar13 = (long *)plVar13[*(uint *)(plVar13 + 4) < uVar2];
      } while (plVar13 != (long *)0x0);
      goto LAB_00ece5b0;
    }
  }
  if (*(short *)(param_2 + 0x12020) == -1) {
    sVar4 = (short)((uint)((int)plVar14 - (int)lVar9) >> 5) * -0x71c7;
    *(short *)(param_2 + 0x12022) = sVar4;
    *(short *)(param_2 + 0x12020) = sVar4;
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0x12022);
    sVar4 = (short)((uint)((int)plVar14 - (int)lVar9) >> 5) * -0x71c7;
    *(short *)(param_2 + 0x12022) = sVar4;
    *(short *)(lVar9 + (ulong)uVar3 * 0x120) = sVar4;
  }
  *(int *)(param_2 + 0x12024) = *(int *)(param_2 + 0x12024) + -1;
  uVar3 = DAT_02bf2570;
LAB_00ece678:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




ushort * FUN_00ece6ac(long param_1)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x7000);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)(param_1 + uVar2 * 0x38);
    if (uVar4 == *(ushort *)(param_1 + 0x7002)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(param_1 + 0x7000) = uVar4;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    lVar3 = param_1 + uVar2 * 0x38;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined2 *)(lVar3 + 0x34) = 1;
    *(undefined8 *)(lVar3 + 0x2c) = 0x3f80000047c35000;
    *(int *)(param_1 + 0x7004) = *(int *)(param_1 + 0x7004) + 1;
  }
  return puVar1;
}




void FUN_00ece734(uint *param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00910400(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined2 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 2 + -2) = *param_2;
  return;
}




void FUN_00ece7bc(undefined8 param_1,FMOD_VECTOR *param_2)

{
  if (param_2[0x35] != (FMOD_VECTOR)0x0) {
    FMOD::ChannelControl::set3DAttributes(*(FMOD_VECTOR **)(param_2 + 0x20),param_2,param_2 + 0xc);
    FMOD::ChannelControl::set3DMinMaxDistance(*(float *)(param_2 + 0x28),*(float *)(param_2 + 0x2c))
    ;
  }
  FMOD::ChannelControl::setVolume(*(float *)(param_2 + 0x30));
  return;
}




void FUN_00ece808(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != 0) {
    FMOD::ChannelControl::stop();
    return;
  }
  return;
}




undefined1 FUN_00ece818(long param_1,ushort param_2)

{
  long lVar1;
  bool *pbVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((DAT_02bf2570 != param_2) &&
     (uVar3 = 0, *(char *)(param_1 + (ulong)param_2 + 0x19082) != '\0')) {
    pbVar2 = *(bool **)(param_1 + (ulong)param_2 * 0x38 + 0x12070);
    if (pbVar2 == (bool *)0x0) {
      uVar3 = 1;
    }
    else {
      FMOD::ChannelControl::isPlaying(pbVar2);
      uVar3 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ece8c4(undefined4 param_1,undefined4 param_2,long param_3,ushort param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  if (DAT_02bf2570 != param_4) {
    param_3 = param_3 + (ulong)param_4 * 0x38;
    *(undefined4 *)(param_3 + 0x12058) = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)(param_3 + 0x12050) = *param_5;
    *(undefined4 *)(param_3 + 0x12064) = *(undefined4 *)(param_6 + 1);
    *(undefined8 *)(param_3 + 0x1205c) = *param_6;
    *(undefined4 *)(param_3 + 0x12078) = param_1;
    *(undefined4 *)(param_3 + 0x1207c) = param_2;
    *(undefined1 *)(param_3 + 0x12085) = 1;
    if (*(long *)(param_3 + 0x12070) != 0) {
      FUN_00ece7bc();
      return;
    }
  }
  return;
}




void FUN_00ece968(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(float **)(param_1 + 0x10) != (float *)0x0) {
    FMOD::SoundGroup::getVolume(*(float **)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}




void FUN_00ece9c8(float param_1,long param_2)

{
  FMOD::SoundGroup::setVolume(param_1);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(float *)(param_2 + 0x1c) = param_1;
  return;
}




void FUN_00ecea00(float param_1,float param_2,long param_3)

{
  if (param_2 <= 0.016666668) {
    FMOD::SoundGroup::setVolume(param_1);
    param_2 = 0.0;
  }
  else {
    param_2 = 1.0 / param_2;
  }
  *(float *)(param_3 + 0x18) = param_2;
  *(float *)(param_3 + 0x1c) = param_1;
  return;
}




void FUN_00ecea58(long param_1,ushort param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  long *plVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if ((DAT_02bf2570 != param_2) &&
     (pcVar1 = (char *)(param_1 + (ulong)param_2 + 0x19082), *pcVar1 != '\0')) {
    lVar2 = param_1 + 0x12050;
    lVar10 = lVar2 + (ulong)param_2 * 0x38;
    *(undefined1 *)(lVar10 + 0x34) = 0;
    if (*(long *)(lVar10 + 0x20) == 0) {
      uVar3 = *(uint *)(param_1 + 0x19070);
      if (uVar3 != 0) {
        puVar7 = *(ushort **)(param_1 + 0x19078);
        uVar9 = 0;
        do {
          if (*puVar7 == param_2) {
            FUN_00e71740((uint *)(param_1 + 0x19070),puVar7,puVar7 + 1);
            break;
          }
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar9 < uVar3);
      }
    }
    else {
      FMOD::ChannelControl::stop();
    }
    plVar6 = (long *)(lVar2 + (ulong)param_2 * 0x38 + 0x18);
    lVar8 = *plVar6;
    if (lVar8 != 0) {
      *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + -1;
      *plVar6 = 0;
    }
    if (*(short *)(param_1 + 0x19050) == -1) {
      sVar5 = (short)((uint)((int)lVar10 - (int)lVar2) >> 3) * 0x6db7;
      *(short *)(param_1 + 0x19052) = sVar5;
      *(short *)(param_1 + 0x19050) = sVar5;
    }
    else {
      uVar4 = *(ushort *)(param_1 + 0x19052);
      sVar5 = (short)((uint)((int)lVar10 - (int)lVar2) >> 3) * 0x6db7;
      *(short *)(param_1 + 0x19052) = sVar5;
      *(short *)(lVar2 + (ulong)uVar4 * 0x38) = sVar5;
    }
    *(int *)(param_1 + 0x19054) = *(int *)(param_1 + 0x19054) + -1;
    *pcVar1 = '\0';
  }
  return;
}




void FUN_00ecebd4(undefined4 param_1,long param_2,ushort param_3)

{
  long lVar1;
  
  if (DAT_02bf2570 != param_3) {
    lVar1 = param_2 + 0x12050 + (ulong)param_3 * 0x38;
    *(undefined4 *)(lVar1 + 0x30) = param_1;
    if (*(long *)(lVar1 + 0x20) != 0) {
      FUN_00ece7bc(param_2,param_2 + 0x12050 + (ulong)param_3 * 0x38);
      return;
    }
  }
  return;
}




void FUN_00ecec1c(long param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,
                 long param_6,float *param_7)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 != (float *)0x0 || param_3 != (undefined4 *)0x0) {
    local_5c = 0.0;
    FMOD::System::getChannelsPlaying(*(int **)(param_1 + 8),(int *)&local_5c);
    FMOD::SoundGroup::getNumSounds(*(int **)(param_1 + 0x10));
    if (param_2 != (float *)0x0) {
      *param_2 = local_5c;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (int)*(undefined8 *)(param_1 + 0x12040);
  }
  if (param_5 != (int *)0x0) {
    if ((long *)(param_1 + 0x12038) == *(long **)(param_1 + 0x12030)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      plVar3 = *(long **)(param_1 + 0x12030);
      do {
        if (*(long *)plVar3[5] != 0) {
          iVar2 = iVar2 + 1;
        }
        plVar4 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 2;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar5 != plVar3) {
            do {
              lVar6 = *plVar4;
              plVar4 = (long *)(lVar6 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (*plVar5 != lVar6);
          }
        }
        else {
          do {
            plVar5 = plVar4;
            plVar4 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar3 = plVar5;
      } while ((long *)(param_1 + 0x12038) != plVar5);
    }
    *param_5 = iVar2;
  }
  if (param_6 != 0) {
    FMOD_Memory_GetStats(param_6,0,1);
  }
  if (param_7 != (float *)0x0) {
    local_5c = 0.0;
    FMOD::System::getCPUUsage
              (*(float **)(param_1 + 8),(float *)0x0,(float *)0x0,(float *)0x0,(float *)0x0);
    *param_7 = local_5c / 100.0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ecedcc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00ecf0c0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ecee54(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00ecee54(param_1,*param_2);
    FUN_00ecee54(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_00eceea0(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_00ecef18;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_00ecef18:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_00ecef6c(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00ecef6c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_00ecefc0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}

