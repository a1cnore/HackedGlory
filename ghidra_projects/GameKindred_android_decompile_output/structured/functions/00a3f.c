// functions/00a3f — 51 functions
#include "libGameKindred.h"




void thunk_FUN_00a3f7bc(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_ZOOM_TOGGLE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a3fbb0(long param_1)

{
  long lVar1;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(abStack_40,"hudAbilityTooltip");
  FUN_00b27f98(param_1 + 0x1fab0,abStack_40);
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3f000(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00c869cc(param_1 + 0x228e0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00a459f4(param_1 + 0x19a68,param_2);
  return;
}




void FUN_00a3f050(long param_1)

{
  FUN_00c06644(*(undefined8 *)(param_1 + 0x21b58));
  return;
}




void FUN_00a3f060(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x22a68) = *(byte *)(param_1 + 0x22a68) & 0xdf | (param_2 & 1) << 5;
  FUN_00a3ee28();
  return;
}




void FUN_00a3f080(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x22a68) = *(byte *)(param_1 + 0x22a68) & 0xbf | (param_2 & 1) << 6;
  FUN_00a3ee28();
  return;
}




void FUN_00a3f0a0(long param_1,uint param_2)

{
  FUN_00a6ff00(param_1 + 0x8878,param_2 & 1);
  return;
}




void FUN_00a3f0b0(long param_1,uint param_2)

{
  FUN_00a6fb1c(param_1 + 0x8878,param_2 & 1);
  return;
}




void FUN_00a3f0c0(long param_1)

{
  FUN_00a529c4(param_1 + 0x8fc0);
  return;
}




void FUN_00a3f0cc(long param_1)

{
  FUN_00c0032c(*(undefined8 *)(param_1 + 0x15618));
  return;
}




void FUN_00a3f0dc(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00a49fc8(param_1 + 0xf430,param_3,param_4,param_5);
  FUN_00a319e4(param_1 + 0x15640,param_2,param_3,param_5,param_6);
  return;
}




void FUN_00a3f14c(long param_1)

{
  FUN_00a49fd0(param_1 + 0xf430);
  *(byte *)(param_1 + 0x22a68) = *(byte *)(param_1 + 0x22a68) | 0x40;
  FUN_00a3ee28(param_1);
  return;
}




void FUN_00a3f18c(long param_1)

{
  FUN_00a4c33c(param_1 + 0x10a48);
  return;
}




void FUN_00a3f19c(long param_1)

{
  FUN_00a4c420(param_1 + 0x10a48);
  return;
}




void FUN_00a3f1ac(long param_1)

{
  FUN_00a49fd8(param_1 + 0xf430);
  *(byte *)(param_1 + 0x22a68) = *(byte *)(param_1 + 0x22a68) & 0xbf;
  FUN_00a3ee28(param_1);
  return;
}




void FUN_00a3f1ec(long param_1,uint param_2)

{
  FUN_00a72870(param_1 + 0xf778,param_2 & 1);
  return;
}




void FUN_00a3f1fc(long param_1)

{
  FUN_00f02540(param_1 + 0xf778);
  return;
}




void FUN_00a3f208(long param_1)

{
  FUN_00a2e7a4(param_1 + 0x2c8);
  FUN_00a38d78(param_1 + 0xc460);
  FUN_00b27e8c(param_1 + 0x1fab0);
  return;
}




void FUN_00a3f244(long param_1)

{
  FUN_00a49acc(param_1 + 0x13e00,1);
  return;
}




void FUN_00a3f258(long param_1)

{
  FUN_00a49acc(param_1 + 0x13e00,0);
  return;
}




void FUN_00a3f26c(long param_1)

{
  FUN_00bbf580(param_1 + 0x1faa0);
  return;
}




void FUN_00a3f27c(long param_1)

{
  FUN_00bbf588(param_1 + 0x1faa0);
  return;
}




byte FUN_00a3f28c(long param_1)

{
  return *(byte *)(param_1 + 0x15e58) & 1;
}




void FUN_00a3f2a0(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x22a68);
  if ((bVar1 >> 1 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x22a68) = bVar1 & 0xfd;
  FUN_00a681e4(0x3f000000,param_1 + 0x15c40,0,4,1);
  FUN_00a6ff00(param_1 + 0x8878,1);
  return;
}




void FUN_00a3f314(undefined8 param_1)

{
  FUN_00a3b4f8();
  FUN_00a3bbf0(param_1);
  return;
}




void thunk_FUN_00a3f33c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  
  puVar1 = (uint *)(param_1 + 0xfbfc);
  uVar2 = *puVar1;
  param_1 = param_1 + 0xfb78;
  *puVar1 = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *puVar1 = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(param_1);
  }
  uVar4 = FUN_00efed6c(0x3ea3d70a);
  uVar5 = FUN_00efee28(0x3f800000,0x3da3d70a,FUN_009a7624);
  uVar6 = FUN_00efee28(0,0x3e051eb8,FUN_009a7608);
  uVar7 = FUN_00efee28(0x3f800000,0x3da3d70a,FUN_009a7624);
  uVar8 = FUN_00efee28(0,0x3ee66666,FUN_009a7608);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,uVar4,uVar5,uVar6,uVar7,uVar8,puVar10,0);
  return;
}




void FUN_00a3f33c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  
  puVar1 = (uint *)(param_1 + 0xfbfc);
  uVar2 = *puVar1;
  param_1 = param_1 + 0xfb78;
  *puVar1 = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *puVar1 = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(param_1);
  }
  uVar4 = FUN_00efed6c(0x3ea3d70a);
  uVar5 = FUN_00efee28(0x3f800000,0x3da3d70a,FUN_009a7624);
  uVar6 = FUN_00efee28(0,0x3e051eb8,FUN_009a7608);
  uVar7 = FUN_00efee28(0x3f800000,0x3da3d70a,FUN_009a7624);
  uVar8 = FUN_00efee28(0,0x3ee66666,FUN_009a7608);
  lVar3 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,uVar4,uVar5,uVar6,uVar7,uVar8,puVar10,0);
  return;
}




void FUN_00a3f4f0(void)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&local_30,(ulong)&local_30 | 4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30,uStack_2c);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a3f544(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pfVar1 = (float *)(param_1 + 0x1f6b0);
  fVar6 = *pfVar1;
  pfVar2 = (float *)(param_1 + 0x1f6b4);
  fVar7 = *pfVar2;
  lVar3 = param_1 + 0x1f670;
  if ((fVar6 != DAT_03218ef8) || (fVar7 != _DAT_03218efc)) {
    *(ulong *)pfVar1 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar3);
  }
  uVar5 = DAT_03218f08._4_4_;
  local_60 = FUN_00f08758((undefined4)DAT_03218f08,param_1 + 0xfa78);
  uStack_5c = uVar5;
  local_60 = FUN_00f0862c(&local_60,lVar3);
  uStack_5c = uVar5;
  if ((*pfVar1 != fVar6) || (*pfVar2 != fVar7)) {
    *pfVar1 = fVar6;
    *pfVar2 = fVar7;
    FUN_0091ada4(lVar3);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}




void FUN_00a3f654(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *param_2;
  if ((iVar2 == 0x22) || (iVar2 == 0xc)) {
    iVar2 = FUN_009f1f94(0xc);
    FUN_00bbf404(param_1 + 0x21b50,iVar2 == 1);
    iVar2 = FUN_009f1f94(0xc);
    FUN_00bbf410(param_1 + 0x21b50,iVar2 != 2);
    FUN_00a3bbf0(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 5) {
    uVar3 = FUN_00f048a4("EVENT_SELECT_IN_GAME_SETTING_ZOOM_TOGGLE");
    FUN_00f048e0(auStack_58,uVar3,0);
    FUN_00f04760(param_1,auStack_58,1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x16) {
    FUN_00a3bbf0(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x21) {
    FUN_00a3bbf0(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0xf) {
    uVar4 = FUN_00a3b488();
    *(uint *)(param_1 + 0xfcec) =
         *(uint *)(param_1 + 0xfcec) & 0xfffffff8 |
         *(uint *)(param_1 + 0xfcec) & 3 | (uVar4 & 1) << 2;
    FUN_00a3bbf0(param_1);
    lVar7 = *(long *)(param_1 + 0x8848);
    uVar5 = FUN_00a3bb40();
    uVar4 = *(uint *)(lVar7 + 0x84);
    *(uint *)(lVar7 + 0x84) = uVar4 & 0xfffffff8 | uVar4 & 3 | (uVar5 & 1) << 2;
    uVar6 = FUN_00a3bb40();
    if ((uVar6 & 1) == 0) {
      FUN_00bbcde4(param_1 + 0x8840,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3f7bc(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_ZOOM_TOGGLE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3f82c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x16;
  local_38 = &PTR_FUN_027c8548;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3f890(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03132398,0);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3f8f8(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313239c,0);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3f960(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  uVar2 = FUN_00a114dc();
  FUN_00a157a8((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
               uVar2,param_2[4]);
  return;
}




void FUN_00a3f9dc(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  uVar2 = FUN_00a114dc();
  FUN_00a15974((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
               uVar2,param_2[4]);
  return;
}




void FUN_00a3fa58(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  uVar2 = FUN_00a114dc();
  FUN_00a15b38((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
               uVar2,param_2[4]);
  return;
}




void FUN_00a3fad4(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00f04924(param_4);
  if (lVar2 != 0) {
    FUN_00b27e8c(param_3 + 0x3f56);
    fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    *(long **)(lVar2 + 0x30) = param_3;
    *(undefined1 *)(lVar2 + 0xaf) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0x3f8000003f000000;
    *(float *)(lVar2 + 0x80) = fVar3 * 0.5;
    *(float *)(lVar2 + 0x84) = param_2 + -80.0;
    FUN_008fa54c(local_50,"hudAbilityTooltip");
    FUN_00b28094(param_3 + 0x3f56,local_50,lVar2);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3fbb0(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"hudAbilityTooltip");
  FUN_00b27f98(param_1 + 0x1fab0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3fc28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = FUN_00f04924(param_2);
  lVar1 = param_1 + 0x1d1c8;
  FUN_00a485f0(lVar1,uVar2,0);
  FUN_00b89d24(0x3e800000,lVar1,1,4,1);
  fVar3 = (float)FUN_00f13e54(lVar1);
  fVar4 = 10.0;
  FUN_00f13e54(lVar1);
  FUN_00f07b18(fVar3 * 0.5 + 10.0,lVar1,3,param_1 + 0xc460,1);
  FUN_00f07b18(fVar4 * 0.5 + -10.0,lVar1,2,param_1 + 0xc460,2);
  return;
}




void FUN_00a3fce8(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x1d1c8,0,4,1);
  return;
}




void FUN_00a3fd08(void)

{
  FUN_0091ab88(1,0);
  FUN_009bbfb0();
  FUN_009bd6fc();
  return;
}




void FUN_00a3fd28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9b08;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a3fd8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9b08;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void thunk_FUN_00a3f654(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *param_2;
  if ((iVar2 == 0x22) || (iVar2 == 0xc)) {
    iVar2 = FUN_009f1f94(0xc);
    FUN_00bbf404(param_1 + 0x21b50,iVar2 == 1);
    iVar2 = FUN_009f1f94(0xc);
    FUN_00bbf410(param_1 + 0x21b50,iVar2 != 2);
    FUN_00a3bbf0(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 5) {
    uVar3 = FUN_00f048a4("EVENT_SELECT_IN_GAME_SETTING_ZOOM_TOGGLE");
    FUN_00f048e0(auStack_58,uVar3,0);
    FUN_00f04760(param_1,auStack_58,1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x16) {
    FUN_00a3bbf0(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x21) {
    FUN_00a3bbf0(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0xf) {
    uVar4 = FUN_00a3b488();
    *(uint *)(param_1 + 0xfcec) =
         *(uint *)(param_1 + 0xfcec) & 0xfffffff8 |
         *(uint *)(param_1 + 0xfcec) & 3 | (uVar4 & 1) << 2;
    FUN_00a3bbf0(param_1);
    lVar7 = *(long *)(param_1 + 0x8848);
    uVar5 = FUN_00a3bb40();
    uVar4 = *(uint *)(lVar7 + 0x84);
    *(uint *)(lVar7 + 0x84) = uVar4 & 0xfffffff8 | uVar4 & 3 | (uVar5 & 1) << 2;
    uVar6 = FUN_00a3bb40();
    if ((uVar6 & 1) == 0) {
      FUN_00bbcde4(param_1 + 0x8840,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a3fdfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00f017e8();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x12) = 0x7000000;
  *param_1 = &PTR_FUN_027c9c08;
  param_1[0x11] = &PTR_FUN_027c9d18;
  param_1[0x13] = uVar1;
  FUN_00f0a784(param_1 + 0x14);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x16) = 7;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar2;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3eb3333300000000;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf0;
  FUN_00f0a814(param_1 + 0x14,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  return;
}




void FUN_00a3fed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9c08;
  param_1[0x11] = &PTR_FUN_027c9d18;
  FUN_00f0a79c(param_1 + 0x14);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a3ff10(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_027c9c08;
  *param_1 = &PTR_FUN_027c9d18;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f01868(param_1 + -0x11);
  return;
}




void FUN_00a3ff4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9c08;
  param_1[0x11] = &PTR_FUN_027c9d18;
  FUN_00f0a79c(param_1 + 0x14);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a3ff94(long param_1)

{
  FUN_00a3ff4c(param_1 + -0x88);
  return;
}




void FUN_00a3ff9c(undefined4 param_1,long param_2,long param_3,undefined4 param_4,byte param_5,
                 byte param_6)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_e0 [24];
  long local_c8 [16];
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  *(undefined4 *)(param_2 + 0xb0) = param_4;
  uVar6 = DAT_03214ce8;
  iVar5 = *(int *)(param_3 + 0x30);
  *(long **)(param_2 + 200) = (long *)(param_3 + 0x28);
  *(undefined8 *)(param_2 + 0xe4) = 0x3f99999a3eb33333;
  *(undefined4 *)(param_2 + 0xec) = param_1;
  *(int *)(param_2 + 0xd0) = iVar5;
  *(byte *)(param_2 + 0x140) =
       param_5 & 1 | (param_5 & param_6 & 1) << 1 | *(byte *)(param_2 + 0x140) & 0xfc;
  if (iVar5 == *(int *)(param_3 + 0x30)) {
    uVar10 = (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
  }
  else {
    uVar10 = 0;
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined4 *)(param_2 + 0xd0) = uVar6;
  }
  uVar11 = FUN_00d9e99c(uVar10);
  if (*(int *)(param_2 + 0xb0) == 0) {
    if ((*(byte *)(param_2 + 0x140) & 1) == 0) {
      plVar12 = *(long **)(param_2 + 200);
      uVar10 = 0;
      if (plVar12 != (long *)0x0) {
        if (*(int *)(param_2 + 0xd0) == (int)plVar12[1]) {
          uVar10 = (**(code **)(*plVar12 + 0x10))();
        }
        else {
          *(undefined8 *)(param_2 + 200) = 0;
          uVar10 = 0;
          *(undefined4 *)(param_2 + 0xd0) = DAT_03214ce8;
        }
      }
      uVar13 = FUN_00d9e9d0(uVar10);
      thunk_FUN_00d9ff34(local_c8,"plaque_frame");
      pcVar1 = "hud_plaque_hero_forthp_ally";
      pcVar14 = "plaque_ally_fill";
      if ((uVar11 & 1) == 0) {
        pcVar1 = "hud_plaque_hero_forthp_enemy";
        pcVar14 = "plaque_enemy_fill";
      }
      pcVar2 = "plaque_hero_fill";
      if ((uVar13 & 1) == 0) {
        pcVar2 = pcVar14;
      }
      *(undefined4 *)(param_2 + 0x114) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,pcVar2);
      *(undefined4 *)(param_2 + 0x124) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_hero_hp_damage");
      *(undefined4 *)(param_2 + 0x128) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,pcVar1);
      *(undefined4 *)(param_2 + 300) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_hero_barrier");
      *(undefined4 *)(param_2 + 0x130) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"plaque_energy_tint_fill");
      *(undefined4 *)(param_2 + 0x134) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_energy_lost");
      *(undefined4 *)(param_2 + 0x138) = (undefined4)local_c8[0];
      pcVar14 = "plaque_tertiary_tint_fill";
    }
    else {
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_hero_bg_left");
      *(undefined4 *)(param_2 + 0x118) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_hero_bg_center");
      *(undefined4 *)(param_2 + 0x11c) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_hero_bg_right");
      bVar8 = (uVar11 & 1) == 0;
      *(undefined4 *)(param_2 + 0x120) = (undefined4)local_c8[0];
      pcVar1 = "hud_plaque_hero_hp_ally";
      if (bVar8) {
        pcVar1 = "hud_plaque_hero_hp_enemy";
      }
      pcVar14 = "hud_plaque_hero_forthp_ally";
      if (bVar8) {
        pcVar14 = "hud_plaque_hero_forthp_enemy";
      }
      thunk_FUN_00d9ff34(local_c8,pcVar1);
      *(undefined4 *)(param_2 + 0x124) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_hero_hp_damage");
      *(undefined4 *)(param_2 + 0x128) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,pcVar14);
      pcVar1 = "hud_plaque_hero_barrier";
      *(undefined4 *)(param_2 + 300) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,"hud_plaque_hero_barrier");
      pcVar14 = "hud_plaque_energy_fill";
      if ((*(byte *)(param_2 + 0x140) & 2) != 0) {
        pcVar14 = pcVar1;
      }
      *(undefined4 *)(param_2 + 0x130) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,pcVar14);
      pcVar14 = "hud_plaque_energy_lost";
      if ((*(byte *)(param_2 + 0x140) & 2) != 0) {
        pcVar14 = pcVar1;
      }
      *(undefined4 *)(param_2 + 0x134) = (undefined4)local_c8[0];
      thunk_FUN_00d9ff34(local_c8,pcVar14);
      *(undefined4 *)(param_2 + 0x138) = (undefined4)local_c8[0];
      pcVar14 = "hud_plaque_energy_fill";
      if ((*(byte *)(param_2 + 0x140) & 2) != 0) {
        pcVar14 = pcVar1;
      }
    }
    thunk_FUN_00d9ff34(local_c8,pcVar14);
    *(undefined4 *)(param_2 + 0x13c) = (undefined4)local_c8[0];
  }
  else {
    thunk_FUN_00d9ff34(local_c8,"hud_plaque_minion_bg_left");
    *(undefined4 *)(param_2 + 0x118) = (undefined4)local_c8[0];
    thunk_FUN_00d9ff34(local_c8,"hud_plaque_minion_bg_center");
    *(undefined4 *)(param_2 + 0x11c) = (undefined4)local_c8[0];
    thunk_FUN_00d9ff34(local_c8,"hud_plaque_minion_bg_right");
    bVar8 = (uVar11 & 1) == 0;
    *(undefined4 *)(param_2 + 0x120) = (undefined4)local_c8[0];
    pcVar1 = "hud_plaque_minion_hp_ally";
    if (bVar8) {
      pcVar1 = "hud_plaque_minion_hp_enemy";
    }
    pcVar14 = "hud_plaque_minion_forthp_ally";
    if (bVar8) {
      pcVar14 = "hud_plaque_minion_forthp_enemy";
    }
    thunk_FUN_00d9ff34(local_c8,pcVar1);
    *(undefined4 *)(param_2 + 0x124) = (undefined4)local_c8[0];
    thunk_FUN_00d9ff34(local_c8,"hud_plaque_minion_hp_damage");
    *(undefined4 *)(param_2 + 0x128) = (undefined4)local_c8[0];
    thunk_FUN_00d9ff34(local_c8,pcVar14);
    *(undefined4 *)(param_2 + 300) = (undefined4)local_c8[0];
    thunk_FUN_00d9ff34(local_c8,"hud_plaque_minion_barrier");
    *(undefined4 *)(param_2 + 0x130) = (undefined4)local_c8[0];
  }
  FUN_00d4d54c(auStack_e0);
  uVar9 = FUN_00d9e840(auStack_e0,local_c8,0x10,0);
  if (uVar9 != 0) {
    lVar16 = 0;
    do {
      if (local_c8[lVar16] == 0) break;
      uVar11 = FUN_00d9e9d0();
      if ((uVar11 & 1) != 0) {
        lVar15 = local_c8[lVar16];
        lVar3 = 0;
        if (lVar15 != 0) {
          lVar3 = lVar15 + 0x28;
        }
        puVar4 = &DAT_03214ce8;
        if (lVar15 != 0) {
          puVar4 = (undefined4 *)(lVar3 + 8);
        }
        uVar6 = *puVar4;
        *(long *)(param_2 + 0xb8) = lVar3;
        *(undefined4 *)(param_2 + 0xc0) = uVar6;
      }
      lVar16 = lVar16 + 1;
    } while ((uint)lVar16 < uVar9);
  }
  FUN_00a40414(param_2);
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

