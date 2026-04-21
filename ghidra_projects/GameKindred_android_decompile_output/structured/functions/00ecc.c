// functions/00ecc — 33 functions
#include "libGameKindred.h"




void FUN_00ecc0ac(undefined8 *param_1)

{
  FMOD::ChannelControl::setMute(SUB81(*param_1,0));
  return;
}




void FUN_00ecc0b8(undefined8 *param_1)

{
  FMOD::ChannelControl::setMute(SUB81(*param_1,0));
  return;
}




void FUN_00ecc0c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((float *)*param_1 != (float *)0x0) {
    FMOD::ChannelControl::getVolume((float *)*param_1);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}




void FUN_00ecc124(float param_1,long param_2)

{
  FMOD::ChannelControl::setVolume(param_1);
  *(undefined4 *)(param_2 + 8) = 0;
  *(float *)(param_2 + 0xc) = param_1;
  return;
}




void FUN_00ecc15c(float param_1,float param_2,long param_3)

{
  if (param_2 <= 0.016666668) {
    FMOD::ChannelControl::setVolume(param_1);
    param_2 = 0.0;
  }
  else {
    param_2 = 1.0 / param_2;
  }
  *(float *)(param_3 + 8) = param_2;
  *(float *)(param_3 + 0xc) = param_1;
  return;
}




void FUN_00ecc1b4(undefined8 *param_1)

{
  FMOD::ChannelControl::setMute(SUB81(*param_1,0));
  return;
}




void FUN_00ecc1c0(undefined8 *param_1,short param_2)

{
  long lVar1;
  char *pcVar2;
  short *psVar3;
  short *psVar4;
  ulonglong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  psVar3 = (short *)param_1[3];
  do {
    if (psVar3 == (short *)0x0) {
LAB_00ecc2b4:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*psVar3 == param_2) {
      FUN_00ecbc70(param_1);
      psVar3[0x18] = 0;
      psVar3[0x19] = 0;
      psVar3[0x1a] = 0;
      psVar3[0x1b] = 0x3f80;
      psVar4 = psVar3 + 4;
      psVar4[0] = 0;
      psVar4[1] = 0;
      psVar4[2] = 0;
      psVar4[3] = 0;
      psVar3[8] = 0;
      psVar3[9] = 0;
      psVar3[10] = 0;
      psVar3[0xb] = 0;
      psVar3[0xc] = 0;
      psVar3[0xd] = 0;
      psVar3[0xe] = 0;
      psVar3[0xf] = 0;
      psVar3[0x20] = 0;
      psVar3[0x21] = 0;
      psVar3[0x22] = 0;
      psVar3[0x23] = 0;
      *(byte *)(psVar3 + 0x1c) = *(byte *)(psVar3 + 0x1c) & 0xfe;
      *(undefined8 *)(psVar3 + 0x10) = *(undefined8 *)(psVar3 + 0x24);
      pcVar2 = (char *)FUN_00ecd800(param_1[2]);
      FMOD::System::createChannelGroup(pcVar2,(ChannelGroup **)0x0);
      FMOD::ChannelGroup::addGroup
                ((ChannelGroup *)*param_1,SUB81(*(undefined8 *)psVar4,0),(DSPConnection **)0x1);
      FMOD::ChannelControl::setVolume(*(float *)(psVar3 + 0x1a));
      FMOD::ChannelControl::getDSPClock((ulonglong *)*param_1,&local_40);
      local_40 = local_40 + 0x800;
      *(ulonglong *)(psVar3 + 0x20) = local_40;
      FUN_00ecc2fc(param_1,psVar3);
      if (1 < *(int *)(*(long *)(psVar3 + 0x10) + 0x20)) {
        FUN_00ecc2fc(param_1,psVar3);
      }
      goto LAB_00ecc2b4;
    }
    psVar3 = *(short **)(psVar3 + 0x30);
  } while( true );
}




void FUN_00ecc2dc(long param_1,short param_2)

{
  short *psVar1;
  
  for (psVar1 = *(short **)(param_1 + 0x18); (psVar1 != (short *)0x0 && (*psVar1 != param_2));
      psVar1 = *(short **)(psVar1 + 0x30)) {
  }
  return;
}




void FUN_00ecc2fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00eccaa4(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18));
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  FUN_00eccc98(param_1,lVar1);
  lVar2 = param_1 + (long)*(int *)(param_1 + 0x14f10) * 0x10;
  *(long *)(lVar2 + 0x14e90) = lVar1;
  *(undefined8 *)(lVar2 + 0x14e98) = uVar3;
  *(int *)(param_1 + 0x14f10) = *(int *)(param_1 + 0x14f10) + 1;
  lVar2 = *(long *)(lVar1 + 0x230);
  *(long *)(param_2 + 0x18) = lVar1;
  *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + lVar2;
  return;
}




void FUN_00ecc388(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  piVar1 = (int *)(param_1 + 0x14f10);
  iVar3 = *piVar1;
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      plVar2 = (long *)(param_1 + (long)iVar6 * 0x10 + 0x14e90);
      if (*plVar2 == param_2) {
        memmove(plVar2,(void *)(param_1 + ((long)iVar6 + 1) * 0x10 + 0x14e90),
                (ulong)(uint)((iVar3 - (int)((long)iVar6 + 1)) * 0x10));
        iVar6 = iVar6 + -1;
        iVar3 = *piVar1 + -1;
        *piVar1 = iVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  lVar4 = *(long *)(param_2 + 0x208);
  if (lVar4 != 0) {
    if (*(_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
          **)(lVar4 + 8) !=
        (_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
         *)0x0) {
      FMOD::ChannelControl::setCallback
                (*(_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
                   **)(lVar4 + 8));
      FMOD::ChannelControl::stop();
      lVar4 = *(long *)(param_2 + 0x208);
      *(undefined8 *)(lVar4 + 8) = 0;
    }
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 0x38);
    *(long *)(lVar4 + 0x18) = lVar5;
    plVar2 = (long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x30) != 0) {
      plVar2 = (long *)(lVar5 + 0x10);
    }
    *plVar2 = lVar4;
    *(long *)(param_1 + 0x38) = lVar4;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    *(undefined8 *)(param_2 + 0x208) = 0;
  }
  lVar4 = *(long *)(param_2 + 0x210);
  if (lVar4 != 0) {
    if (*(_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
          **)(lVar4 + 8) !=
        (_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
         *)0x0) {
      FMOD::ChannelControl::setCallback
                (*(_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
                   **)(lVar4 + 8));
      FMOD::ChannelControl::stop();
      lVar4 = *(long *)(param_2 + 0x210);
      *(undefined8 *)(lVar4 + 8) = 0;
    }
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 0x38);
    *(long *)(lVar4 + 0x18) = lVar5;
    plVar2 = (long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x30) != 0) {
      plVar2 = (long *)(lVar5 + 0x10);
    }
    *plVar2 = lVar4;
    *(long *)(param_1 + 0x38) = lVar4;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    *(undefined8 *)(param_2 + 0x210) = 0;
  }
  return;
}




void FUN_00ecc4f0(undefined8 param_1,long param_2,short param_3)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_2 + 0x18);
  while( true ) {
    if (psVar1 == (short *)0x0) {
      return;
    }
    if (*psVar1 == param_3) break;
    psVar1 = *(short **)(psVar1 + 0x30);
  }
  if (*(long *)(psVar1 + 4) == 0) {
    return;
  }
  *(byte *)(psVar1 + 0x1c) = *(byte *)(psVar1 + 0x1c) | 1;
  FUN_00ecc534(0,param_1);
  return;
}




void FUN_00ecc534(float param_1,float param_2,long param_3,short param_4)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_3 + 0x18);
  while( true ) {
    if (psVar1 == (short *)0x0) {
      return;
    }
    if (*psVar1 == param_4) break;
    psVar1 = *(short **)(psVar1 + 0x30);
  }
  if (*(long *)(psVar1 + 4) == 0) {
    return;
  }
  if (0.016666668 < param_2) {
    *(float *)(psVar1 + 0x18) = 1.0 / param_2;
    *(float *)(psVar1 + 0x1a) = param_1;
    return;
  }
  FMOD::ChannelControl::setVolume(param_1);
  return;
}




void FUN_00ecc580(long param_1,short param_2)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_1 + 0x18);
  while( true ) {
    if (psVar1 == (short *)0x0) {
      return;
    }
    if (*psVar1 == param_2) break;
    psVar1 = *(short **)(psVar1 + 0x30);
  }
  FUN_00ecbff4(param_1,psVar1);
  return;
}




void FUN_00ecc5a8(float param_1,long param_2,short param_3)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_2 + 0x18);
  while( true ) {
    if (psVar1 == (short *)0x0) {
      return;
    }
    if (*psVar1 == param_3) break;
    psVar1 = *(short **)(psVar1 + 0x30);
  }
  if (*(long *)(psVar1 + 4) == 0) {
    return;
  }
  FMOD::ChannelControl::setVolume(param_1);
  psVar1[0x18] = 0;
  psVar1[0x19] = 0;
  *(float *)(psVar1 + 0x1a) = param_1;
  return;
}




void FUN_00ecc604(undefined8 *param_1,short param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  short *psVar4;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 0) && (uVar2 = FUN_00e6a474(param_3), (int)uVar2 != 0)) {
    for (psVar4 = (short *)param_1[3]; psVar4 != (short *)0x0; psVar4 = *(short **)(psVar4 + 0x30))
    {
      if (*psVar4 == param_2) {
        if ((((*(long *)(psVar4 + 4) != 0) &&
             (lVar3 = FUN_00ecc714(uVar2,psVar4,param_3), lVar3 != 0)) &&
            (*(long *)(psVar4 + 0x10) != lVar3)) &&
           (*(long *)(psVar4 + 0x10) = lVar3, *(long *)(psVar4 + 0xc) != 0)) {
          FMOD::ChannelControl::getDSPClock((ulonglong *)*param_1,&local_50);
          lVar3 = *(long *)(*(long *)(psVar4 + 0xc) + 0x230);
          if (local_50 < (ulong)((-24000 - lVar3) + *(long *)(psVar4 + 0x20))) {
            FUN_00ecc388(param_1);
            *(long *)(psVar4 + 0x20) = *(long *)(psVar4 + 0x20) - lVar3;
            FUN_00ecc2fc(param_1,psVar4);
          }
        }
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int * FUN_00ecc714(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_00e6a474(param_3);
  iVar2 = FUN_0091ed5c(param_3,uVar1,0x12345678);
  for (piVar3 = *(int **)(param_2 + 0x48); (piVar3 != (int *)0x0 && (*piVar3 != iVar2));
      piVar3 = *(int **)(piVar3 + 10)) {
  }
  return piVar3;
}




undefined4 FUN_00ecc770(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x14e88) = 0;
  *(undefined8 *)(param_1 + 0x14e80) = 0;
  uVar1 = FUN_00ecb408(param_2);
  uVar2 = FUN_00ecc7c4(param_1,uVar1);
  *(undefined8 *)(param_1 + 0x14e80) = uVar2;
  return uVar1;
}




void FUN_00ecc7c4(long param_1,undefined2 param_2)

{
  long *plVar1;
  undefined2 *puVar2;
  long lVar3;
  
  puVar2 = (undefined2 *)FUN_00ecce98(param_1 + 0x50);
  if (puVar2 != (undefined2 *)0x0) {
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0x3f80000000000000;
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(byte *)(puVar2 + 0x1c) = *(byte *)(puVar2 + 0x1c) & 0xfe;
    lVar3 = *(long *)(param_1 + 0x20);
    *(long *)(puVar2 + 0x34) = lVar3;
    plVar1 = (long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar1 = (long *)(lVar3 + 0x60);
    }
    *plVar1 = (long)puVar2;
    *(undefined2 **)(param_1 + 0x20) = puVar2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}




void FUN_00ecc848(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00ecc888(param_1,*(undefined8 *)(param_1 + 0x14e80),param_2);
  *(undefined8 *)(param_1 + 0x14e88) = uVar1;
  return;
}




undefined4 * FUN_00ecc888(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = (undefined4 *)FUN_00ecd03c(param_1 + 0x450);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(param_3);
    uVar2 = FUN_0091ed5c(param_3,uVar2,0x12345678);
    *puVar3 = uVar2;
    *(long *)(puVar3 + 2) = param_2;
    *(undefined8 *)(puVar3 + 10) = 0;
    lVar4 = *(long *)(param_2 + 0x50);
    *(long *)(puVar3 + 0xc) = lVar4;
    plVar1 = (long *)(param_2 + 0x48);
    if (*(long *)(param_2 + 0x48) != 0) {
      plVar1 = (long *)(lVar4 + 0x28);
    }
    *plVar1 = (long)puVar3;
    *(undefined4 **)(param_2 + 0x50) = puVar3;
    *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  }
  return puVar3;
}




void FUN_00ecc91c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ecc93c(param_1,*(undefined8 *)(param_1 + 0x14e88),param_2,param_3,param_4);
  return;
}




undefined4 *
FUN_00ecc93c(undefined4 param_1,long param_2,long param_3,char *param_4,char *param_5,long param_6)

{
  char *__dest;
  long *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = (undefined4 *)FUN_00ecd1cc(param_2 + 0x1260);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
    if (param_6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00e6a474(param_6);
      uVar2 = FUN_0091ed5c(param_6,uVar2,0x12345678);
    }
    __dest = (char *)(puVar3 + 2);
    puVar3[1] = uVar2;
    *(undefined8 *)(puVar3 + 0x84) = 0;
    *(undefined8 *)(puVar3 + 0x82) = 0;
    *(long *)(puVar3 + 0x86) = param_3;
    if (param_4 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      strcpy(__dest,param_4);
      puVar4 = (undefined8 *)FUN_00eccd64(param_2,__dest,1);
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined8 *)(puVar3 + 0x8c) = 0;
      }
      else {
        uVar5 = FUN_00ecd270(param_2,*puVar4);
        *(undefined8 *)(puVar3 + 0x8c) = uVar5;
        FUN_00ecbd00(param_2,puVar4);
      }
    }
    if (param_5 == (char *)0x0) {
      *(char *)(puVar3 + 0x42) = '\0';
    }
    else {
      strcpy((char *)(puVar3 + 0x42),param_5);
    }
    *(undefined8 *)(puVar3 + 0x88) = 0;
    lVar6 = *(long *)(param_3 + 0x18);
    *(long *)(puVar3 + 0x8a) = lVar6;
    plVar1 = (long *)(param_3 + 0x10);
    if (*(long *)(param_3 + 0x10) != 0) {
      plVar1 = (long *)(lVar6 + 0x220);
    }
    *plVar1 = (long)puVar3;
    *(undefined4 **)(param_3 + 0x18) = puVar3;
    *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
  }
  return puVar3;
}




void FUN_00ecca80(long param_1)

{
  *(undefined8 *)(param_1 + 0x14e88) = 0;
  *(undefined8 *)(param_1 + 0x14e80) = 0;
  return;
}




void FUN_00ecca94(undefined8 param_1,long param_2)

{
  *(long *)(*(long *)(*(long *)(param_2 + 0x218) + 8) + 0x28) = param_2;
  return;
}




float * FUN_00eccaa4(undefined8 param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  pfVar4 = *(float **)(param_2 + 4);
  if (pfVar4 == (float *)0x0) {
    return (float *)0x0;
  }
  if (param_2[8] == 1.4013e-45) {
    return pfVar4;
  }
  pfVar2 = pfVar4;
  if (param_3 == (float *)0x0) {
    do {
      if (pfVar2[1] == DAT_03210bf8) {
        return pfVar2;
      }
      pfVar3 = pfVar2 + 0x88;
      pfVar2 = *(float **)pfVar3;
    } while (*(float **)pfVar3 != (float *)0x0);
LAB_00eccb28:
    if (param_3 == (float *)0x0) goto LAB_00eccb44;
  }
  else if (*(float **)(param_3 + 0x86) != param_2) {
    do {
      if (pfVar2[1] == **(float **)(param_3 + 0x86)) {
        return pfVar2;
      }
      pfVar2 = *(float **)(pfVar2 + 0x88);
    } while (pfVar2 != (float *)0x0);
    goto LAB_00eccb28;
  }
  if (param_3[1] == DAT_03210bfc) {
    return (float *)0x0;
  }
LAB_00eccb44:
  fVar7 = 0.0;
  do {
    if (((pfVar4 != param_3) &&
        (pfVar4 != *(float **)(*(long *)(*(long *)(pfVar4 + 0x86) + 8) + 0x10))) &&
       (pfVar4[1] == 0.0)) {
      fVar7 = fVar7 + *pfVar4;
    }
    pfVar4 = *(float **)(pfVar4 + 0x88);
  } while (pfVar4 != (float *)0x0);
  iVar1 = rand();
  pfVar4 = *(float **)(param_2 + 4);
  if (pfVar4 != (float *)0x0) {
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    uVar5 = 0;
    pfVar2 = pfVar4;
    do {
      pfVar3 = pfVar2 + 1;
      pfVar2 = *(float **)(pfVar2 + 0x88);
      if (*pfVar3 == 0.0) {
        uVar5 = uVar5 + 1;
      }
    } while (pfVar2 != (float *)0x0);
    pfVar2 = (float *)0x0;
    if (1 < uVar5) {
      pfVar2 = param_3;
    }
    if (pfVar4 != (float *)0x0) {
      fVar6 = 0.0;
      pfVar3 = pfVar4;
      while (((pfVar3 == pfVar2 ||
              (pfVar3 == *(float **)(*(long *)(*(long *)(pfVar3 + 0x86) + 8) + 0x10))) ||
             ((pfVar3[1] != 0.0 ||
              (fVar6 = fVar6 + *pfVar3, fVar6 < fVar7 * (float)iVar1 * 4.656613e-10 + 0.0))))) {
        pfVar3 = *(float **)(pfVar3 + 0x88);
        if (pfVar3 == (float *)0x0) {
          return pfVar4;
        }
      }
      return pfVar3;
    }
  }
  return (float *)0x0;
}




undefined8 FUN_00eccc2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  FUN_00eccc98(param_1,param_3);
  lVar1 = param_1 + (long)*(int *)(param_1 + 0x14f10) * 0x10;
  *(long *)(lVar1 + 0x14e90) = param_3;
  *(undefined8 *)(lVar1 + 0x14e98) = param_2;
  *(int *)(param_1 + 0x14f10) = *(int *)(param_1 + 0x14f10) + 1;
  return *(undefined8 *)(param_3 + 0x230);
}




void FUN_00eccc98(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00ecc388();
  if (*(char *)(param_2 + 8) != '\0') {
    uVar1 = FUN_00eccd64(param_1,(char *)(param_2 + 8),0);
    *(undefined8 *)(param_2 + 0x208) = uVar1;
  }
  if (*(char *)(param_2 + 0x108) != '\0') {
    uVar1 = FUN_00eccd64(param_1,param_2 + 0x108,0);
    *(undefined8 *)(param_2 + 0x210) = uVar1;
  }
  return;
}




undefined8 FUN_00ecccf4(void **param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((param_3 == 0) && (DAT_03210c00 != 0)) {
    FMOD::ChannelControl::getUserData(param_1);
    *(undefined8 *)(*(long *)(lRam0000000000000218 + 8) + 0x28) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ushort * FUN_00eccd64(long param_1,uint param_2,ulong param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  char *pcVar8;
  ushort uVar9;
  ushort *puVar10;
  
  puVar1 = (ushort *)(param_1 + 0x14e70);
  uVar9 = *puVar1;
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + 0x14e72);
    lVar3 = param_1 + 0x12e70;
    puVar10 = (ushort *)(lVar3 + (ulong)uVar9 * 0x20);
    if (uVar9 == *puVar2) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *puVar1 = uVar9;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    piVar4 = (int *)(param_1 + 0x14e74);
    *piVar4 = *piVar4 + 1;
    if (puVar10 != (ushort *)0x0) {
      uVar5 = 0x8000289;
      if ((param_3 & 1) == 0) {
        uVar5 = 0x8010289;
      }
      pcVar8 = (char *)FUN_00ecd800(*(undefined8 *)(param_1 + 0x10));
      iVar7 = FMOD::System::createSound
                        (pcVar8,param_2,(FMOD_CREATESOUNDEXINFO *)(ulong)uVar5,(Sound **)0x0);
      if (iVar7 != 0) {
        if (*puVar1 == 0xffff) {
          uVar9 = (ushort)((uint)((int)puVar10 - (int)lVar3) >> 5);
          *puVar2 = uVar9;
          *puVar1 = uVar9;
        }
        else {
          uVar9 = *puVar2;
          uVar6 = (ushort)((uint)((int)puVar10 - (int)lVar3) >> 5);
          *puVar2 = uVar6;
          *(ushort *)(lVar3 + (ulong)uVar9 * 0x20) = uVar6;
        }
        puVar10 = (ushort *)0x0;
        *piVar4 = *piVar4 + -1;
      }
    }
  }
  return puVar10;
}




undefined2 * FUN_00ecce98(long param_1)

{
  undefined2 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x3f0);
  if (uVar2 == 0xffff) {
    puVar1 = (undefined2 *)0x0;
  }
  else {
    puVar1 = (undefined2 *)(param_1 + uVar2 * 0x70);
    if (*(ushort *)(param_1 + 0x3f0) == *(ushort *)(param_1 + 0x3f2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(undefined2 *)(param_1 + 0x3f0) = uVar4;
    *puVar1 = 0;
    lVar3 = param_1 + uVar2 * 0x70;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x30) = uVar5;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined4 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xfe;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
  }
  return puVar1;
}




void FUN_00eccf2c(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x60);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x68);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x60) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x68);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(long *)(*(long *)(param_2 + 0x60) + 0x68) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00eccf8c(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  FUN_00ecd0a8(param_2 + 0x48,param_3);
  while (*(long *)(param_3 + 0x18) != 0) {
    FUN_00ecd108(param_1,param_3);
  }
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  iVar3 = (int)(param_1 + 0x450);
  if (*(short *)(param_1 + 0x1250) == -1) {
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x1252) = sVar2;
    *(short *)(param_1 + 0x1250) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x1252);
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x1252) = sVar2;
    *(short *)(param_1 + 0x450 + (ulong)uVar1 * 0x38) = sVar2;
  }
  *(int *)(param_1 + 0x1254) = *(int *)(param_1 + 0x1254) + -1;
  return;
}




void thunk_FUN_00ecc1c0(undefined8 *param_1,short param_2)

{
  long lVar1;
  char *pcVar2;
  short *psVar3;
  short *psVar4;
  ulonglong uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  psVar3 = (short *)param_1[3];
  do {
    if (psVar3 == (short *)0x0) {
LAB_00ecc2b4:
      if (*(long *)(lVar1 + 0x28) == lStack_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*psVar3 == param_2) {
      FUN_00ecbc70(param_1);
      psVar3[0x18] = 0;
      psVar3[0x19] = 0;
      psVar3[0x1a] = 0;
      psVar3[0x1b] = 0x3f80;
      psVar4 = psVar3 + 4;
      psVar4[0] = 0;
      psVar4[1] = 0;
      psVar4[2] = 0;
      psVar4[3] = 0;
      psVar3[8] = 0;
      psVar3[9] = 0;
      psVar3[10] = 0;
      psVar3[0xb] = 0;
      psVar3[0xc] = 0;
      psVar3[0xd] = 0;
      psVar3[0xe] = 0;
      psVar3[0xf] = 0;
      psVar3[0x20] = 0;
      psVar3[0x21] = 0;
      psVar3[0x22] = 0;
      psVar3[0x23] = 0;
      *(byte *)(psVar3 + 0x1c) = *(byte *)(psVar3 + 0x1c) & 0xfe;
      *(undefined8 *)(psVar3 + 0x10) = *(undefined8 *)(psVar3 + 0x24);
      pcVar2 = (char *)FUN_00ecd800(param_1[2]);
      FMOD::System::createChannelGroup(pcVar2,(ChannelGroup **)0x0);
      FMOD::ChannelGroup::addGroup
                ((ChannelGroup *)*param_1,SUB81(*(undefined8 *)psVar4,0),(DSPConnection **)0x1);
      FMOD::ChannelControl::setVolume(*(float *)(psVar3 + 0x1a));
      FMOD::ChannelControl::getDSPClock((ulonglong *)*param_1,&uStack_40);
      uStack_40 = uStack_40 + 0x800;
      *(ulonglong *)(psVar3 + 0x20) = uStack_40;
      FUN_00ecc2fc(param_1,psVar3);
      if (1 < *(int *)(*(long *)(psVar3 + 0x10) + 0x20)) {
        FUN_00ecc2fc(param_1,psVar3);
      }
      goto LAB_00ecc2b4;
    }
    psVar3 = *(short **)(psVar3 + 0x30);
  } while( true );
}

