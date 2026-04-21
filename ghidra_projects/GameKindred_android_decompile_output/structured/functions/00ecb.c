// functions/00ecb — 81 functions
#include "libGameKindred.h"




void Java_com_superevilmegacorp_nuogameentry_NuoApplicationJNI_muteAudio
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  FUN_00ecb138(param_3 != '\0');
  return;
}




void thunk_FUN_00ecb43c(undefined8 param_1)

{
  DAT_03210b90 = param_1;
  return;
}




void thunk_FUN_00ecb448(void)

{
  DAT_03210b90 = 0;
  return;
}




void thunk_FUN_00ecb454(void)

{
  return;
}




void thunk_FUN_00ecb458(void)

{
  return;
}




void thunk_FUN_00ecb45c(void)

{
  return;
}




int thunk_FUN_00ecb460(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210bb0), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210b98,"NuoSound","getCurrentInput",&DAT_01bef1c0);
    DAT_03210b98 = &PTR_FUN_028223a0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210b98,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210bb0);
  }
  uVar2 = FUN_00e7368c(&DAT_03210b98);
  iVar1 = FUN_00e73b34(&DAT_03210b98,uVar2);
  if (3 < iVar1 - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}




int thunk_FUN_00ecb520(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210bd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210bd0), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210bb8,"NuoSound","getCurrentOutput",&DAT_01bef1c0);
    DAT_03210bb8 = &PTR_FUN_028223c0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210bb8,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210bd0);
  }
  uVar2 = FUN_00e7368c(&DAT_03210bb8);
  iVar1 = FUN_00e73b34(&DAT_03210bb8,uVar2);
  if (4 < iVar1 - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}




void thunk_FUN_00ecb5e0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210bf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210bf0), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210bd8,"NuoSound","isHighLatency",&DAT_01bef1a3);
    DAT_03210bd8 = &PTR_FUN_028223e0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210bd8,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210bf0);
  }
  uVar2 = FUN_00e7368c(&DAT_03210bd8);
  FUN_00e739d8(&DAT_03210bd8,uVar2);
  return;
}




void FUN_00ecb030(void)

{
  FUN_00ecd6dc(DAT_03210b78);
  return;
}




void FUN_00ecb03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00ecd83c(DAT_03210b78,param_1,param_2,param_3);
  return;
}




void FUN_00ecb058(undefined8 param_1,undefined4 param_2,uint param_3)

{
  FUN_00ecd85c(DAT_03210b78,param_1,param_2,param_3 & 1);
  return;
}




void FUN_00ecb078(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  
  uVar1 = FUN_00ecd82c(DAT_03210b78);
  if ((uVar1 & 1) != 0) {
    FUN_00ece8c4(param_1,param_2,DAT_03210b78,param_3,param_4,param_5);
    return;
  }
  return;
}




void FUN_00ecb0f4(undefined4 param_1)

{
  FUN_00ecebd4(DAT_03210b78,param_1);
  return;
}




void FUN_00ecb108(undefined4 param_1)

{
  FUN_00ece378(DAT_03210b78,param_1);
  return;
}




void FUN_00ecb11c(undefined4 param_1)

{
  if (DAT_03210b78 != 0) {
    FUN_00ecea58(DAT_03210b78,param_1);
    return;
  }
  return;
}




void FUN_00ecb138(uint param_1)

{
  FUN_00ece2ac(DAT_03210b78,param_1 & 1);
  FUN_00ecc1b4(DAT_03210b80,param_1 & 1);
  return;
}




void FUN_00ecb174(uint param_1)

{
  FUN_00ece2ac(DAT_03210b78,param_1 & 1);
  return;
}




void FUN_00ecb188(uint param_1)

{
  FUN_00ecc1b4(DAT_03210b80,param_1 & 1);
  return;
}




void FUN_00ecb19c(void)

{
  FUN_00ece968(DAT_03210b78);
  return;
}




void FUN_00ecb1a8(void)

{
  FUN_00ece9c8(DAT_03210b78);
  return;
}




void FUN_00ecb1b4(void)

{
  FUN_00ecea00(DAT_03210b78);
  return;
}




float FUN_00ecb1c0(float param_1)

{
  float fVar1;
  
  fVar1 = log10f(param_1);
  return fVar1 * 20.0;
}




void FUN_00ecb1dc(float param_1)

{
  powf(10.0,param_1 * 0.05);
  return;
}




void FUN_00ecb1f0(undefined4 param_1)

{
  FUN_00ece818(DAT_03210b78,param_1);
  return;
}




void FUN_00ecb204(undefined8 param_1)

{
  FUN_00ecf148(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb218(undefined4 param_1)

{
  thunk_FUN_00ecc1c0(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb22c(undefined4 param_1)

{
  FUN_00ecbc70(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb240(undefined4 param_1)

{
  FUN_00ecc4f0(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb254(undefined4 param_1)

{
  FUN_00ecc580(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb268(undefined4 param_1,undefined8 param_2)

{
  FUN_00ecc604(DAT_03210b80,param_1,param_2);
  return;
}




void FUN_00ecb280(undefined4 param_1)

{
  FUN_00ecc5a8(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb294(undefined4 param_1)

{
  FUN_00ecc534(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb2a8(void)

{
  FUN_00ecc0c4(DAT_03210b80);
  return;
}




void FUN_00ecb2b4(void)

{
  FUN_00ecc124(DAT_03210b80);
  return;
}




void FUN_00ecb2c0(void)

{
  FUN_00ecc15c(DAT_03210b80);
  return;
}




void FUN_00ecb2cc(void)

{
  FUN_00ecc0ac(DAT_03210b80);
  return;
}




void FUN_00ecb2d8(void)

{
  FUN_00ecc0b8(DAT_03210b80);
  return;
}




void FUN_00ecb2e4(undefined8 param_1)

{
  FUN_00ecc770(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb2f8(undefined8 param_1)

{
  FUN_00ecc848(DAT_03210b80,param_1);
  return;
}




void FUN_00ecb30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00ecc91c(DAT_03210b80,param_1,param_2,param_3);
  return;
}




void FUN_00ecb328(void)

{
  FUN_00ecca80(DAT_03210b80);
  return;
}




void FUN_00ecb334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00ecec1c(DAT_03210b78,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




undefined1 FUN_00ecb35c(void)

{
  return DAT_03210b88;
}




void FUN_00ecb368(byte param_1)

{
  DAT_03210b88 = param_1 & 1;
  return;
}




void FUN_00ecb378(undefined8 *param_1)

{
  FUN_00ecd444();
  *param_1 = &PTR_FUN_02822360;
  return;
}




void FUN_00ecb3ac(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00ecd85c(param_1,param_2,1,param_3 & 1);
  return;
}




void FUN_00ecb3b8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00ecd85c(param_1,param_2,3,param_3 & 1);
  return;
}




void FUN_00ecb3c4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00ecd85c(param_1,param_2,2,param_3 & 1);
  return;
}




void FUN_00ecb3d0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00ecd85c(param_1,param_2,4,param_3 & 1);
  return;
}




void FUN_00ecb3dc(void)

{
  return;
}




void FUN_00ecb3e0(void)

{
  return;
}




void FUN_00ecb3e4(void *param_1)

{
  FUN_00ecd630();
  operator_delete(param_1);
  return;
}




void FUN_00ecb408(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00ecb43c(undefined8 param_1)

{
  DAT_03210b90 = param_1;
  return;
}




void FUN_00ecb448(void)

{
  DAT_03210b90 = 0;
  return;
}




void FUN_00ecb454(void)

{
  return;
}




void FUN_00ecb458(void)

{
  return;
}




void FUN_00ecb45c(void)

{
  return;
}




int FUN_00ecb460(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210bb0), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210b98,"NuoSound","getCurrentInput",&DAT_01bef1c0);
    DAT_03210b98 = &PTR_FUN_028223a0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210b98,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210bb0);
  }
  uVar2 = FUN_00e7368c(&DAT_03210b98);
  iVar1 = FUN_00e73b34(&DAT_03210b98,uVar2);
  if (3 < iVar1 - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}




int FUN_00ecb520(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210bd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210bd0), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210bb8,"NuoSound","getCurrentOutput",&DAT_01bef1c0);
    DAT_03210bb8 = &PTR_FUN_028223c0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210bb8,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210bd0);
  }
  uVar2 = FUN_00e7368c(&DAT_03210bb8);
  iVar1 = FUN_00e73b34(&DAT_03210bb8,uVar2);
  if (4 < iVar1 - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}




void FUN_00ecb5e0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210bf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210bf0), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210bd8,"NuoSound","isHighLatency",&DAT_01bef1a3);
    DAT_03210bd8 = &PTR_FUN_028223e0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210bd8,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210bf0);
  }
  uVar2 = FUN_00e7368c(&DAT_03210bd8);
  FUN_00e739d8(&DAT_03210bd8,uVar2);
  return;
}




void FUN_00ecb690(int param_1)

{
  if (DAT_03210b90 != (long *)0x0) {
    if (3 < param_1 - 1U) {
      param_1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00ecb6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_03210b90 + 0x10))(DAT_03210b90,param_1);
    return;
  }
  return;
}




void FUN_00ecb6bc(int param_1)

{
  if (DAT_03210b90 != (long *)0x0) {
    if (4 < param_1 - 1U) {
      param_1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00ecb6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_03210b90 + 0x18))(DAT_03210b90,param_1);
    return;
  }
  return;
}




void FUN_00ecb6f0(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ecb714(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ecb738(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ecb75c(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00ecb78c(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0x3f80000000000000;
  puVar2 = param_1 + 10;
  do {
    *(short *)puVar2 = (short)lVar4;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 0xe;
  } while (lVar4 != 9);
  param_1[0x88] = 0x80000;
  lVar4 = 1;
  puVar2 = param_1 + 0x8a;
  do {
    *(short *)puVar2 = (short)lVar4;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 7;
  } while (lVar4 != 0x40);
  lVar3 = 0x1260;
  param_1[0x24a] = 0x3f0000;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x238;
  } while (lVar4 != 0x80);
  lVar3 = 0x12e70;
  param_1[0x25cc] = 0x7f0000;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x20;
  } while (lVar4 != 0x100);
  param_1[0x29ce] = 0xff0000;
  *(undefined4 *)(param_1 + 0x29e2) = 0;
  param_1[0x29d1] = 0;
  param_1[0x29d0] = 0;
  FUN_00e6b798();
  DAT_03210c00 = param_1;
  pcVar1 = (char *)FUN_00ecd800(param_1[2]);
  FMOD::System::createChannelGroup(pcVar1,(ChannelGroup **)0x0);
  FMOD::ChannelControl::setVolume(*(float *)((long)param_1 + 0xc));
  return;
}




void FUN_00ecb8ac(void)

{
  return;
}




void FUN_00ecb8b0(long param_1)

{
  FUN_00ecb8e8();
  DAT_03210c00 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00ecb8e8(undefined8 *param_1)

{
  long lVar1;
  
  FMOD::ChannelGroup::release();
  lVar1 = param_1[4];
  *param_1 = 0;
  while (lVar1 != 0) {
    FUN_00ecbff4(param_1);
    lVar1 = param_1[4];
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    do {
      if (param_1[6] == lVar1) {
        param_1[6] = 0;
        param_1[7] = 0;
      }
      else {
        lVar1 = *(long *)(lVar1 + 0x18);
        param_1[7] = lVar1;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      FUN_00ecbd00(param_1);
      lVar1 = param_1[7];
    } while (lVar1 != 0);
  }
  return;
}




void FUN_00ecb970(undefined4 param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  undefined4 uStack_54;
  float local_4c;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  FUN_00ece368(param_2[2]);
  FMOD::ChannelControl::setPaused(SUB81(*param_2,0));
  fVar10 = (float)NEON_fminnm(param_1,0x3d088889);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (*(float *)(param_2 + 1) != 0.0) {
    FMOD::ChannelControl::getVolume((float *)*param_2);
    fVar12 = *(float *)((long)param_2 + 0xc);
    if (fVar12 <= local_58) {
      if ((fVar12 < local_58) &&
         (fVar11 = local_58 - fVar10 * *(float *)(param_2 + 1), local_58 = fVar12, fVar12 <= fVar11)
         ) {
        local_58 = fVar11;
      }
    }
    else {
      fVar11 = local_58 + fVar10 * *(float *)(param_2 + 1);
      local_58 = fVar12;
      if (fVar11 <= fVar12) {
        local_58 = fVar11;
      }
    }
    FMOD::ChannelControl::setVolume(local_58);
    if (local_58 == *(float *)((long)param_2 + 0xc)) {
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  for (puVar7 = (undefined2 *)param_2[3]; puVar7 != (undefined2 *)0x0;
      puVar7 = *(undefined2 **)(puVar7 + 0x30)) {
    pfVar3 = *(float **)(puVar7 + 4);
    if (pfVar3 != (float *)0x0) {
      if (*(long *)(puVar7 + 0x14) != 0) {
        FUN_00ecc388(param_2);
        FUN_00ecc2fc(param_2,puVar7);
        pfVar3 = *(float **)(puVar7 + 4);
        *(undefined8 *)(puVar7 + 0x14) = 0;
      }
      local_4c = 0.0;
      FMOD::ChannelControl::getVolume(pfVar3);
      fVar12 = *(float *)(puVar7 + 0x1a);
      if (fVar12 <= 0.0) {
        if ((fVar12 < 0.0) &&
           (fVar11 = 0.0 - fVar10 * *(float *)(puVar7 + 0x18), local_4c = fVar12, fVar12 <= fVar11))
        {
          local_4c = fVar11;
        }
      }
      else {
        fVar11 = fVar10 * *(float *)(puVar7 + 0x18) + 0.0;
        local_4c = fVar12;
        if (fVar11 <= fVar12) {
          local_4c = fVar11;
        }
      }
      FMOD::ChannelControl::setVolume(local_4c);
      if (local_4c == *(float *)(puVar7 + 0x1a)) {
        *(undefined4 *)(puVar7 + 0x18) = 0;
      }
      if (((*(byte *)(puVar7 + 0x1c) & 1) != 0) && (*(float *)(puVar7 + 0x18) == 0.0)) {
        FUN_00ecbc70(param_2,*puVar7);
      }
      FMOD::ChannelControl::getDSPClock(*(ulonglong **)(puVar7 + 4),(ulonglong *)0x0);
      if ((ulong)(*(long *)(puVar7 + 0x20) - *(long *)(*(long *)(puVar7 + 0xc) + 0x230)) <=
          CONCAT44(uStack_54,local_58)) {
        *(long *)(puVar7 + 8) = *(long *)(puVar7 + 0xc);
      }
    }
  }
  lVar5 = param_2[7];
  if (lVar5 != 0) {
    do {
      if (param_2[6] == lVar5) {
        param_2[6] = 0;
        param_2[7] = 0;
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x18);
        param_2[7] = lVar5;
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      FUN_00ecbd00(param_2);
      lVar5 = param_2[7];
    } while (lVar5 != 0);
  }
  piVar1 = (int *)(param_2 + 0x29e2);
  if (0 < *piVar1) {
    uVar9 = 0;
    plVar8 = param_2 + 0x29d2;
    do {
      if ((*plVar8 == 0) || (uVar4 = FUN_00ecbdc0(plVar8), (uVar4 & 1) == 0)) {
        if ((int)uVar9 == 0) goto LAB_00ecbc10;
        break;
      }
      FUN_00ecbe80(param_2,plVar8);
      uVar9 = uVar9 + 1;
      plVar8 = plVar8 + 2;
    } while ((long)uVar9 < (long)*piVar1);
    memmove(param_2 + 0x29d2,param_2 + 0x29d2 + (uVar9 & 0xffffffff) * 2,
            (ulong)((int)uVar9 * -0x10 + 0x80));
    *piVar1 = *piVar1 - (int)uVar9;
  }
LAB_00ecbc10:
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ecbc40(undefined8 param_1,long param_2)

{
  FUN_00ecc388(param_1,*(undefined8 *)(param_2 + 0x28));
  FUN_00ecc2fc(param_1,param_2);
  return;
}




void FUN_00ecbc70(long param_1,short param_2)

{
  long lVar1;
  short *psVar2;
  long lVar3;
  
  psVar2 = *(short **)(param_1 + 0x18);
  while( true ) {
    if (psVar2 == (short *)0x0) {
      return;
    }
    if (*psVar2 == param_2) break;
    psVar2 = *(short **)(psVar2 + 0x30);
  }
  if (*(long *)(psVar2 + 4) == 0) {
    return;
  }
  FMOD::ChannelGroup::release();
  lVar3 = *(long *)(psVar2 + 0x24);
  psVar2[4] = 0;
  psVar2[5] = 0;
  psVar2[6] = 0;
  psVar2[7] = 0;
  for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x28)) {
    for (lVar1 = *(long *)(lVar3 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x220)) {
      FUN_00ecc388(param_1,lVar1);
    }
  }
  psVar2[0x14] = 0;
  psVar2[0x15] = 0;
  psVar2[0x16] = 0;
  psVar2[0x17] = 0;
  *(byte *)(psVar2 + 0x1c) = *(byte *)(psVar2 + 0x1c) & 0xfe;
  return;
}




void FUN_00ecbd00(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  
  if ((_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
       *)param_2[1] !=
      (_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
       *)0x0) {
    FMOD::ChannelControl::setCallback
              ((_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
                *)param_2[1]);
    FMOD::ChannelControl::stop();
    param_2[1] = 0;
  }
  FMOD::Sound::release();
  *param_2 = 0;
  iVar4 = (int)(param_1 + 0x12e70);
  if (*(short *)(param_1 + 0x14e70) == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 5);
    *(short *)(param_1 + 0x14e72) = sVar3;
    *(short *)(param_1 + 0x14e70) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x14e72);
    uVar2 = (undefined2)((uint)((int)param_2 - iVar4) >> 5);
    *(undefined2 *)(param_1 + 0x14e72) = uVar2;
    *(undefined2 *)(param_1 + 0x12e70 + (ulong)uVar1 * 0x20) = uVar2;
  }
  *(int *)(param_1 + 0x14e74) = *(int *)(param_1 + 0x14e74) + -1;
  return;
}




void FUN_00ecbdc0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  if (*(undefined8 **)(lVar3 + 0x208) != (undefined8 *)0x0) {
    local_2c = 8;
    uVar2 = FMOD::Sound::getOpenState
                      ((FMOD_OPENSTATE *)**(undefined8 **)(lVar3 + 0x208),&local_2c,(bool *)0x0,
                       (bool *)0x0);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      goto LAB_00ecbe5c;
    }
    if (local_2c != 0) goto LAB_00ecbe5c;
    lVar3 = *param_1;
  }
  if (*(undefined8 **)(lVar3 + 0x210) != (undefined8 *)0x0) {
    local_2c = 8;
    FMOD::Sound::getOpenState
              ((FMOD_OPENSTATE *)**(undefined8 **)(lVar3 + 0x210),&local_2c,(bool *)0x0,(bool *)0x0)
    ;
    uVar2 = 0;
    if (local_2c != 0) goto LAB_00ecbe5c;
  }
  uVar2 = 1;
LAB_00ecbe5c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00ecbe80(long param_1,long *param_2)

{
  long lVar1;
  Sound *pSVar2;
  long lVar3;
  long lVar4;
  _func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
  *p_Var5;
  ChannelGroup *pCVar6;
  long lVar7;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  if (*(undefined8 **)(lVar4 + 0x208) == (undefined8 *)0x0) {
    lVar7 = 0;
  }
  else {
    pCVar6 = (ChannelGroup *)**(undefined8 **)(lVar4 + 0x208);
    pSVar2 = (Sound *)FUN_00ecd800(*(undefined8 *)(param_1 + 0x10));
    FMOD::System::playSound
              (pSVar2,pCVar6,
               SUB81(*(undefined8 *)(*(long *)(*(long *)(*param_2 + 0x218) + 8) + 8),0),
               (Channel **)0x1);
    *(undefined8 *)(*(long *)(*param_2 + 0x208) + 8) = 0;
    FMOD::ChannelControl::setDelay(0,param_2[1],false);
    lVar7 = *(long *)(*param_2 + 0x230);
    FMOD::ChannelControl::setPaused(false);
    lVar4 = *param_2;
  }
  if (*(undefined8 **)(lVar4 + 0x210) == (undefined8 *)0x0) {
LAB_00ecbf9c:
    lVar7 = *(long *)(lVar4 + 0x208);
    if (lVar7 == 0) goto LAB_00ecbfc8;
  }
  else {
    pCVar6 = (ChannelGroup *)**(undefined8 **)(lVar4 + 0x210);
    pSVar2 = (Sound *)FUN_00ecd800(*(undefined8 *)(param_1 + 0x10));
    FMOD::System::playSound
              (pSVar2,pCVar6,
               SUB81(*(undefined8 *)(*(long *)(*(long *)(*param_2 + 0x218) + 8) + 8),0),
               (Channel **)0x1);
    *(undefined8 *)(*(long *)(*param_2 + 0x210) + 8) = 0;
    FMOD::ChannelControl::setDelay(0,param_2[1] + lVar7,false);
    FMOD::ChannelControl::setPaused(false);
    lVar4 = *param_2;
    lVar7 = *(long *)(lVar4 + 0x210);
    if (lVar7 == 0) goto LAB_00ecbf9c;
  }
  p_Var5 = *(_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
             **)(lVar7 + 8);
  if (p_Var5 != (_func_FMOD_RESULT_FMOD_CHANNELCONTROL_ptr_FMOD_CHANNELCONTROL_TYPE_FMOD_CHANNELCONTROL_CALLBACK_TYPE_void_ptr_void_ptr
                 *)0x0) {
    FMOD::ChannelControl::setCallback(p_Var5);
    FMOD::ChannelControl::setUserData(p_Var5);
  }
LAB_00ecbfc8:
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ecbff4(long param_1,undefined2 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  FUN_00ecbc70(param_1,*param_2);
  FUN_00eccf2c(param_1 + 0x18,param_2);
  while (*(long *)(param_2 + 0x28) != 0) {
    FUN_00eccf8c(param_1,param_2);
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  iVar3 = (int)(param_1 + 0x50);
  if (*(short *)(param_1 + 0x440) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x442) = sVar2;
    *(short *)(param_1 + 0x440) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x442);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x442) = sVar2;
    *(short *)(param_1 + 0x50 + (ulong)uVar1 * 0x70) = sVar2;
  }
  *(int *)(param_1 + 0x444) = *(int *)(param_1 + 0x444) + -1;
  return;
}




void thunk_FUN_00ecb78c(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0x3f80000000000000;
  puVar2 = param_1 + 10;
  do {
    *(short *)puVar2 = (short)lVar4;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 0xe;
  } while (lVar4 != 9);
  param_1[0x88] = 0x80000;
  lVar4 = 1;
  puVar2 = param_1 + 0x8a;
  do {
    *(short *)puVar2 = (short)lVar4;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 7;
  } while (lVar4 != 0x40);
  lVar3 = 0x1260;
  param_1[0x24a] = 0x3f0000;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x238;
  } while (lVar4 != 0x80);
  lVar3 = 0x12e70;
  param_1[0x25cc] = 0x7f0000;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x20;
  } while (lVar4 != 0x100);
  param_1[0x29ce] = 0xff0000;
  *(undefined4 *)(param_1 + 0x29e2) = 0;
  param_1[0x29d1] = 0;
  param_1[0x29d0] = 0;
  FUN_00e6b798();
  DAT_03210c00 = param_1;
  pcVar1 = (char *)FUN_00ecd800(param_1[2]);
  FMOD::System::createChannelGroup(pcVar1,(ChannelGroup **)0x0);
  FMOD::ChannelControl::setVolume(*(float *)((long)param_1 + 0xc));
  return;
}




void thunk_FUN_00ecb970(undefined4 param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_4c;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  FUN_00ece368(param_2[2]);
  FMOD::ChannelControl::setPaused(SUB81(*param_2,0));
  fVar10 = (float)NEON_fminnm(param_1,0x3d088889);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (*(float *)(param_2 + 1) != 0.0) {
    FMOD::ChannelControl::getVolume((float *)*param_2);
    fVar12 = *(float *)((long)param_2 + 0xc);
    if (fVar12 <= fStack_58) {
      if ((fVar12 < fStack_58) &&
         (fVar11 = fStack_58 - fVar10 * *(float *)(param_2 + 1), fStack_58 = fVar12,
         fVar12 <= fVar11)) {
        fStack_58 = fVar11;
      }
    }
    else {
      fVar11 = fStack_58 + fVar10 * *(float *)(param_2 + 1);
      fStack_58 = fVar12;
      if (fVar11 <= fVar12) {
        fStack_58 = fVar11;
      }
    }
    FMOD::ChannelControl::setVolume(fStack_58);
    if (fStack_58 == *(float *)((long)param_2 + 0xc)) {
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  for (puVar7 = (undefined2 *)param_2[3]; puVar7 != (undefined2 *)0x0;
      puVar7 = *(undefined2 **)(puVar7 + 0x30)) {
    pfVar3 = *(float **)(puVar7 + 4);
    if (pfVar3 != (float *)0x0) {
      if (*(long *)(puVar7 + 0x14) != 0) {
        FUN_00ecc388(param_2);
        FUN_00ecc2fc(param_2,puVar7);
        pfVar3 = *(float **)(puVar7 + 4);
        *(undefined8 *)(puVar7 + 0x14) = 0;
      }
      fStack_4c = 0.0;
      FMOD::ChannelControl::getVolume(pfVar3);
      fVar12 = *(float *)(puVar7 + 0x1a);
      if (fVar12 <= 0.0) {
        if ((fVar12 < 0.0) &&
           (fVar11 = 0.0 - fVar10 * *(float *)(puVar7 + 0x18), fStack_4c = fVar12, fVar12 <= fVar11)
           ) {
          fStack_4c = fVar11;
        }
      }
      else {
        fVar11 = fVar10 * *(float *)(puVar7 + 0x18) + 0.0;
        fStack_4c = fVar12;
        if (fVar11 <= fVar12) {
          fStack_4c = fVar11;
        }
      }
      FMOD::ChannelControl::setVolume(fStack_4c);
      if (fStack_4c == *(float *)(puVar7 + 0x1a)) {
        *(undefined4 *)(puVar7 + 0x18) = 0;
      }
      if (((*(byte *)(puVar7 + 0x1c) & 1) != 0) && (*(float *)(puVar7 + 0x18) == 0.0)) {
        FUN_00ecbc70(param_2,*puVar7);
      }
      FMOD::ChannelControl::getDSPClock(*(ulonglong **)(puVar7 + 4),(ulonglong *)0x0);
      if ((ulong)(*(long *)(puVar7 + 0x20) - *(long *)(*(long *)(puVar7 + 0xc) + 0x230)) <=
          CONCAT44(uStack_54,fStack_58)) {
        *(long *)(puVar7 + 8) = *(long *)(puVar7 + 0xc);
      }
    }
  }
  lVar5 = param_2[7];
  if (lVar5 != 0) {
    do {
      if (param_2[6] == lVar5) {
        param_2[6] = 0;
        param_2[7] = 0;
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x18);
        param_2[7] = lVar5;
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      FUN_00ecbd00(param_2);
      lVar5 = param_2[7];
    } while (lVar5 != 0);
  }
  piVar1 = (int *)(param_2 + 0x29e2);
  if (0 < *piVar1) {
    uVar9 = 0;
    plVar8 = param_2 + 0x29d2;
    do {
      if ((*plVar8 == 0) || (uVar4 = FUN_00ecbdc0(plVar8), (uVar4 & 1) == 0)) {
        if ((int)uVar9 == 0) goto LAB_00ecbc10;
        break;
      }
      FUN_00ecbe80(param_2,plVar8);
      uVar9 = uVar9 + 1;
      plVar8 = plVar8 + 2;
    } while ((long)uVar9 < (long)*piVar1);
    memmove(param_2 + 0x29d2,param_2 + 0x29d2 + (uVar9 & 0xffffffff) * 2,
            (ulong)((int)uVar9 * -0x10 + 0x80));
    *piVar1 = *piVar1 - (int)uVar9;
  }
LAB_00ecbc10:
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

