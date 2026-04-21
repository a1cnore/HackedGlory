// functions/00ecd — 27 functions
#include "libGameKindred.h"




undefined4 * FUN_00ecd03c(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined2 uVar4;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0xe00);
  if (uVar2 == 0xffff) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + uVar2 * 0x38);
    if (*(ushort *)(param_1 + 0xe00) == *(ushort *)(param_1 + 0xe02)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(undefined2 *)puVar1;
    }
    *(undefined2 *)(param_1 + 0xe00) = uVar4;
    lVar3 = param_1 + uVar2 * 0x38;
    *puVar1 = 0;
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(int *)(param_1 + 0xe04) = *(int *)(param_1 + 0xe04) + 1;
  }
  return puVar1;
}




void FUN_00ecd0a8(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x28);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x30);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(long *)(*(long *)(param_2 + 0x28) + 0x30) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00ecd108(long param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  FUN_00ecd310(param_2 + 0x10,param_3);
  FUN_00ecc388(param_1,param_3);
  iVar3 = (int)(param_1 + 0x1260);
  if (*(short *)(param_1 + 0x12e60) == -1) {
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * -0x5689;
    *(short *)(param_1 + 0x12e62) = sVar2;
    *(short *)(param_1 + 0x12e60) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x12e62);
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * -0x5689;
    *(short *)(param_1 + 0x12e62) = sVar2;
    *(short *)(param_1 + 0x1260 + (ulong)uVar1 * 0x238) = sVar2;
  }
  *(int *)(param_1 + 0x12e64) = *(int *)(param_1 + 0x12e64) + -1;
  return;
}




ushort * FUN_00ecd1cc(long param_1)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x11c00);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)(param_1 + uVar2 * 0x238);
    if (uVar4 == *(ushort *)(param_1 + 0x11c02)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(param_1 + 0x11c00) = uVar4;
    lVar3 = param_1 + uVar2 * 0x238;
    puVar1[0] = 0;
    puVar1[1] = 0x3f80;
    *(undefined4 *)(lVar3 + 4) = 0;
    *(undefined1 *)(lVar3 + 8) = 0;
    *(undefined1 *)(lVar3 + 0x108) = 0;
    *(undefined8 *)(lVar3 + 0x230) = 0;
    *(undefined8 *)(lVar3 + 0x228) = 0;
    *(undefined8 *)(lVar3 + 0x220) = 0;
    *(undefined8 *)(lVar3 + 0x218) = 0;
    *(undefined8 *)(lVar3 + 0x210) = 0;
    *(undefined8 *)(lVar3 + 0x208) = 0;
    *(int *)(param_1 + 0x11c04) = *(int *)(param_1 + 0x11c04) + 1;
  }
  return puVar1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00ecd270(long param_1,float *param_2)

{
  long lVar1;
  int *piVar2;
  float fVar3;
  undefined4 local_34;
  float local_30;
  int iStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  _local_30 = 0;
  local_34 = 0;
  piVar2 = (int *)FUN_00ecd800(*(undefined8 *)(param_1 + 0x10));
  FMOD::System::getSoftwareFormat(piVar2,(FMOD_SPEAKERMODE *)&iStack_2c,(int *)0x0);
  FMOD::Sound::getLength((uint *)param_2,(uint)&local_34);
  FMOD::Sound::getDefaults(param_2,(int *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    fVar3 = (float)NEON_ucvtf(local_34);
    return (long)(((float)iStack_2c / local_30) * fVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ecd310(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x220);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x228);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x220) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x228);
    *(undefined8 *)(lVar1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
    *(long *)(*(long *)(param_2 + 0x220) + 0x228) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00ecd374(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00ecd380(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *param_1 = 0x3f800000;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  return;
}




void FUN_00ecd3b0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return;
}




void FUN_00ecd3c8(undefined2 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  return;
}




void FUN_00ecd400(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0xbf80000000000000;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_00ecd41c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3f80000047c35000;
  *(undefined2 *)((long)param_1 + 0x34) = 1;
  return;
}




void FUN_00ecd444(undefined8 *param_1,long param_2,undefined4 param_3,byte param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_02822400;
  param_1[1] = 0;
  lVar2 = 1;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 0x24;
  } while (lVar2 != 0x100);
  param_1[0x2404] = 0xff0000;
  param_1[0x2409] = 0;
  param_1[0x2408] = 0;
  param_1[0x2407] = 0;
  param_1[0x2406] = param_1 + 0x2407;
  lVar2 = 1;
  puVar1 = param_1 + 0x240a;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (lVar2 != 0x200);
  param_1[0x320a] = 0x1ff0000;
  param_1[0x320f] = 0;
  param_1[0x320e] = 0;
  param_1[0x320d] = 0;
  param_1[0x320c] = 0;
  *(undefined1 *)(param_1 + 0x3210) = 0;
  *(byte *)((long)param_1 + 0x19081) = param_4 & 1;
  FMOD_Debug_Initialize(0,0,0,0);
  if (param_2 != 0) {
    FMOD_Memory_Initialize(param_2,param_3,0,0,0,0xffffffff);
    *(undefined4 *)((long)param_1 + 0x1204c) = param_3;
  }
  memset((void *)((long)param_1 + 0x19082),0,0x200);
  return;
}




void FUN_00ecd5b4(long param_1)

{
  FMOD_System_Create(param_1 + 8);
  FUN_00ecd5dc(param_1);
  return;
}




void FUN_00ecd5dc(long param_1)

{
  FMOD::System::init((int)*(undefined8 *)(param_1 + 8),0x200,
                     (void *)((long)&__DT_SYMTAB[0xe32].st_size + 4));
  FMOD::System::set3DSettings(1.0,1.0,1.0);
  FMOD::System::createSoundGroup(*(char **)(param_1 + 8),(SoundGroup **)0x0);
  return;
}




void FUN_00ecd630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02822400;
  FUN_00ecd6dc();
  FMOD::SoundGroup::release();
  param_1[2] = 0;
  FMOD::System::close();
  FMOD::System::release();
  if ((void *)param_1[0x320f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x320f]);
    param_1[0x320f] = 0;
    param_1[0x320e] = 0;
  }
  if ((void *)param_1[0x320d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x320d]);
    param_1[0x320d] = 0;
    param_1[0x320c] = 0;
  }
  FUN_00ecee54(param_1 + 0x2406,param_1[0x2407]);
  return;
}




void FUN_00ecd7d4(long param_1)

{
  FMOD::SoundGroup::release();
  *(undefined8 *)(param_1 + 0x10) = 0;
  FMOD::System::close();
  return;
}




undefined8 FUN_00ecd800(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_00ecd808(void *param_1)

{
  FUN_00ecd630();
  operator_delete(param_1);
  return;
}




bool FUN_00ecd82c(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}




void FUN_00ecd83c(long param_1,FMOD_VECTOR *param_2,FMOD_VECTOR *param_3)

{
  FMOD::System::set3DListenerAttributes
            ((int)*(undefined8 *)(param_1 + 8),(FMOD_VECTOR *)0x0,param_2,
             (FMOD_VECTOR *)&DAT_03218f30,param_3);
  return;
}




uint FUN_00ecd85c(long param_1,char *param_2,undefined4 param_3,byte param_4)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint local_68 [2];
  undefined8 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00e6a474(param_2);
  uVar4 = FUN_0091ed5c(param_2,uVar4,0x12345678);
  if (((param_4 & 1) == 0) && (lVar5 = FUN_00ecda74(param_1,uVar4), lVar5 != 0)) {
    uVar8 = (int)((ulong)(lVar5 - (param_1 + 0x20)) >> 5) * 0x38e38e39;
    goto LAB_00ecda40;
  }
  if (*(int *)(param_1 + 0x1204c) < 1) {
LAB_00ecd924:
    lVar5 = param_1 + 0x20;
    puVar6 = (undefined8 *)FUN_00ecdafc(lVar5);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = uVar4;
      *(undefined4 *)((long)puVar6 + 0xc) = param_3;
      *(undefined4 *)((long)puVar6 + 0x14) = 0;
      *(byte *)(puVar6 + 2) = param_4 & 1;
      strcpy((char *)((long)puVar6 + 0x1c),param_2);
      uVar7 = FUN_00ecdb80(param_1,param_2,param_3,param_4 & 1,puVar6);
      if ((uVar7 & 1) != 0) {
        uVar8 = (int)((ulong)((long)puVar6 - lVar5) >> 5) * 0x38e38e39;
        local_68[0] = uVar8 & 0xffff;
        local_60 = puVar6;
        FUN_00eceea0(param_1 + 0x12030,local_68,local_68);
        goto LAB_00ecda40;
      }
      if (*(short *)(param_1 + 0x12020) == -1) {
        sVar2 = (short)((uint)((int)puVar6 - (int)lVar5) >> 5) * -0x71c7;
        *(short *)(param_1 + 0x12022) = sVar2;
        *(short *)(param_1 + 0x12020) = sVar2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x12022);
        sVar2 = (short)((uint)((int)puVar6 - (int)lVar5) >> 5) * -0x71c7;
        *(short *)(param_1 + 0x12022) = sVar2;
        *(short *)(lVar5 + (ulong)uVar1 * 0x120) = sVar2;
      }
      *(int *)(param_1 + 0x12024) = *(int *)(param_1 + 0x12024) + -1;
    }
  }
  else {
    local_68[0] = 0;
    FMOD_Memory_GetStats(local_68,0,1);
    if (0x17ffff < (int)(*(int *)(param_1 + 0x1204c) - local_68[0])) goto LAB_00ecd924;
  }
  uVar8 = (uint)DAT_02bf2574;
LAB_00ecda40:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00ecda74(long param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x12030);
  while( true ) {
    if ((long *)(param_1 + 0x12038) == plVar2) {
      return 0;
    }
    if (*(int *)(plVar2[5] + 8) == param_2) break;
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  return plVar2[5];
}




ushort * FUN_00ecdafc(long param_1)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x12000);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)(param_1 + uVar2 * 0x120);
    if (uVar4 == *(ushort *)(param_1 + 0x12002)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(param_1 + 0x12000) = uVar4;
    lVar3 = param_1 + uVar2 * 0x120;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(lVar3 + 0xc) = 0;
    *(undefined1 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0xbf80000000000000;
    *(undefined1 *)(lVar3 + 0x1c) = 0;
    *(int *)(param_1 + 0x12004) = *(int *)(param_1 + 0x12004) + 1;
  }
  return puVar1;
}




void FUN_00ecdb80(long param_1,uint param_2,int param_3,ulong param_4,undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_148 [28];
  undefined4 local_d8;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = 0;
  memset(local_148,0,0xe8);
  local_148[0] = 0xe8;
  local_d8 = 9;
  if (param_3 - 1U < 4) {
    uVar1 = 0x8010080;
    if ((param_4 & 1) == 0) {
      uVar1 = 0x8010200;
    }
    iVar3 = FMOD::System::createSound
                      (*(char **)(param_1 + 8),param_2,
                       (FMOD_CREATESOUNDEXINFO *)
                       (ulong)(uVar1 | *(uint *)(&DAT_01bf1860 + (long)(int)(param_3 - 1U) * 4)),
                       (Sound **)local_148);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00ecdc48;
  }
  FUN_00ecedcc(param_1 + 0x19060,&local_60);
  uVar4 = 1;
LAB_00ecdc48:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = local_60;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00ecdc84(float param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(float *)(param_2 + 0x18) != 0.0) {
    fVar7 = (float)NEON_fminnm(param_1,0x3d088889);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    FMOD::SoundGroup::getVolume(*(float **)(param_2 + 0x10));
    fVar8 = *(float *)(param_2 + 0x1c);
    if (fVar8 <= local_7c) {
      if ((fVar8 < local_7c) &&
         (fVar7 = local_7c - fVar7 * *(float *)(param_2 + 0x18), local_7c = fVar8, fVar8 <= fVar7))
      {
        local_7c = fVar7;
      }
    }
    else {
      fVar7 = local_7c + fVar7 * *(float *)(param_2 + 0x18);
      local_7c = fVar8;
      if (fVar7 <= fVar8) {
        local_7c = fVar7;
      }
    }
    FMOD::SoundGroup::setVolume(local_7c);
    if (local_7c == *(float *)(param_2 + 0x1c)) {
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
  }
  *(float *)(param_2 + 0x12048) = *(float *)(param_2 + 0x12048) + param_1;
  FUN_00ecdf2c(param_2);
  FMOD::System::update();
  puVar1 = (uint *)(param_2 + 0x19060);
  if (*puVar1 != 0) {
    uVar4 = 0;
    plVar5 = (long *)(param_2 + 0x19068);
    do {
      local_7c = 1.12104e-44;
      FMOD::Sound::getOpenState
                (*(FMOD_OPENSTATE **)(*plVar5 + (ulong)uVar4 * 8),(uint *)&local_7c,(bool *)0x0,
                 (bool *)0x0);
      if ((local_7c == 8.40779e-45) || (local_7c == 2.8026e-45)) {
LAB_00ecdde4:
        lVar6 = *plVar5 + (ulong)uVar4 * 8;
        FUN_00ecefc0(puVar1,lVar6,lVar6 + 8);
        uVar4 = uVar4 - 1;
      }
      else if (local_7c == 0.0) {
        FMOD::Sound::setSoundGroup(*(SoundGroup **)(*plVar5 + (ulong)uVar4 * 8));
        goto LAB_00ecdde4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  puVar1 = (uint *)(param_2 + 0x19070);
  if (*puVar1 != 0) {
    uVar4 = 0;
    do {
      local_7c = 1.12104e-44;
      lVar6 = param_2 + 0x12050 +
              (ulong)*(ushort *)(*(long *)(param_2 + 0x19078) + (ulong)uVar4 * 2) * 0x38;
      plVar5 = (long *)(lVar6 + 0x18);
      iVar3 = FMOD::Sound::getOpenState
                        (*(FMOD_OPENSTATE **)*plVar5,(uint *)&local_7c,(bool *)0x0,(bool *)0x0);
      if ((iVar3 == 0) && (local_7c != 2.8026e-45)) {
        if (local_7c == 8.40779e-45) goto LAB_00ecdec8;
        if (local_7c == 0.0) {
          FMOD::Sound::setSoundGroup(*(SoundGroup **)*plVar5);
          FUN_00ece1ec(param_2,lVar6);
          goto LAB_00ecdec8;
        }
      }
      else {
        *(int *)(*plVar5 + 0x14) = *(int *)(*plVar5 + 0x14) + -1;
        *plVar5 = 0;
LAB_00ecdec8:
        lVar6 = *(long *)(param_2 + 0x19078) + (ulong)uVar4 * 2;
        FUN_00e71740(puVar1,lVar6,lVar6 + 2);
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ecdf2c(long param_1)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  
  plVar13 = *(long **)(param_1 + 0x12030);
  if ((long *)(param_1 + 0x12038) != plVar13) {
    puVar1 = (uint *)(param_1 + 0x19060);
    puVar2 = (ushort *)(param_1 + 0x12022);
    do {
      plVar10 = (long *)plVar13[5];
      lVar5 = *plVar10;
      if (lVar5 == 0) {
LAB_00ece0d0:
        plVar10 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar10 = plVar13 + 2;
          plVar12 = (long *)*plVar10;
          if ((long *)*plVar12 != plVar13) {
            do {
              lVar5 = *plVar10;
              plVar10 = (long *)(lVar5 + 0x10);
              plVar12 = (long *)*plVar10;
            } while (*plVar12 != lVar5);
          }
        }
        else {
          do {
            plVar12 = plVar10;
            plVar10 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
      }
      else {
        if (0 < *(int *)((long)plVar10 + 0x14)) {
          *(float *)(plVar10 + 3) = *(float *)(param_1 + 0x12048);
          goto LAB_00ece0d0;
        }
        if ((*(float *)(plVar10 + 3) <= 0.0) ||
           ((*(float *)(param_1 + 0x12048) - *(float *)(plVar10 + 3) <= 4.0 &&
            ((char)plVar10[2] == '\0')))) goto LAB_00ece0d0;
        uVar7 = *puVar1;
        if (uVar7 != 0) {
          uVar11 = 0;
          while( true ) {
            if (*(long *)(*(long *)(param_1 + 0x19068) + (ulong)uVar11 * 8) == lVar5) {
              lVar5 = *(long *)(param_1 + 0x19068) + (long)(int)uVar11 * 8;
              FUN_00ecefc0(puVar1,lVar5,lVar5 + 8);
              uVar7 = *puVar1;
              uVar11 = uVar11 - 1;
            }
            uVar11 = uVar11 + 1;
            if (uVar7 <= uVar11) break;
            lVar5 = *plVar10;
          }
        }
        lVar5 = 0;
        puVar8 = (undefined8 *)(param_1 + 0x12068);
        do {
          if ((*(char *)(param_1 + 0x19082 + lVar5) != '\0') && ((long *)*puVar8 == plVar10)) {
            *puVar8 = 0;
          }
          lVar5 = lVar5 + 1;
          puVar8 = puVar8 + 7;
        } while (lVar5 != 0x200);
        FMOD::Sound::release();
        *plVar10 = 0;
        plVar6 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar6 = plVar13 + 2;
          plVar12 = (long *)*plVar6;
          if ((long *)*plVar12 != plVar13) {
            do {
              lVar5 = *plVar6;
              plVar6 = (long *)(lVar5 + 0x10);
              plVar12 = (long *)*plVar6;
            } while (*plVar12 != lVar5);
          }
        }
        else {
          do {
            plVar12 = plVar6;
            plVar6 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
        FUN_00ecf02c((undefined8 *)(param_1 + 0x12030),plVar13);
        iVar9 = (int)(param_1 + 0x20);
        if (*(ushort *)(param_1 + 0x12020) == 0xffff) {
          uVar3 = (short)((uint)((int)plVar10 - iVar9) >> 5) * -0x71c7;
          *puVar2 = uVar3;
          *(ushort *)(param_1 + 0x12020) = uVar3;
        }
        else {
          uVar3 = *puVar2;
          uVar4 = (short)((uint)((int)plVar10 - iVar9) >> 5) * -0x71c7;
          *puVar2 = uVar4;
          *(ushort *)(param_1 + 0x20 + (ulong)uVar3 * 0x120) = uVar4;
        }
        *(int *)(param_1 + 0x12024) = *(int *)(param_1 + 0x12024) + -1;
      }
      plVar13 = plVar12;
    } while ((long *)(param_1 + 0x12038) != plVar12);
  }
  return;
}

