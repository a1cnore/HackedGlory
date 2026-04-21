// functions/00c3c — 8 functions
#include "libGameKindred.h"




void thunk_FUN_00c3c3c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined1 auStack_98 [32];
  long lStack_78;
  
  lVar3 = tpidr_el0;
  lStack_78 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00f048a4("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar5);
  uVar5 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f048e0(auStack_98,uVar5,0);
  FUN_00f04760(param_1,auStack_98,1);
  lVar1 = param_1 + 0xf50;
  if ((*(float *)(param_1 + 0xf98) != 0.7) || (*(float *)(param_1 + 0xf9c) != 0.7)) {
    *(undefined8 *)(param_1 + 0xf98) = 0x3f3333333f333333;
    FUN_0091ada4(lVar1);
  }
  lVar2 = param_1 + 0x1908;
  if ((*(float *)(param_1 + 0x1950) != 0.7) || (*(float *)(param_1 + 0x1954) != 0.7)) {
    *(undefined8 *)(param_1 + 0x1950) = 0x3f3333333f333333;
    FUN_0091ada4(lVar2);
  }
  FUN_00f01980(lVar1);
  uVar6 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_009a7624);
  uVar7 = FUN_00efee28(0x3f800000,0x3e000000,FUN_009a7624);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcd98(puVar9);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar9,uVar6,uVar7,0);
  FUN_00f022a0(lVar1,puVar9);
  FUN_00f01980(lVar2);
  uVar6 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_009a7624);
  uVar7 = FUN_00efee28(0x3f800000,0x3e000000,FUN_009a7624);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar9,uVar6,uVar7,0);
  FUN_00f022a0(lVar2,puVar9);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar9);
  FUN_00f022a0(lVar2,puVar9);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_027c27b8;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar9 + 8) = FUN_00c3c828;
  *(long *)(puVar9 + 0x10) = param_1;
  FUN_00f022a0(lVar2,puVar9);
  if (*(long *)(lVar3 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3c3b8(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_2 + 0x88) = param_3;
  *(undefined4 *)(param_2 + 0x90) = param_1;
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(undefined4 *)(param_2 + 0x98) = param_4;
  FUN_00c3c9b4();
  return;
}




void FUN_00c3c3c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined1 auStack_98 [32];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00f048a4("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar5);
  uVar5 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_00f048e0(auStack_98,uVar5,0);
  FUN_00f04760(param_1,auStack_98,1);
  lVar1 = param_1 + 0xf50;
  if ((*(float *)(param_1 + 0xf98) != 0.7) || (*(float *)(param_1 + 0xf9c) != 0.7)) {
    *(undefined8 *)(param_1 + 0xf98) = 0x3f3333333f333333;
    FUN_0091ada4(lVar1);
  }
  lVar2 = param_1 + 0x1908;
  if ((*(float *)(param_1 + 0x1950) != 0.7) || (*(float *)(param_1 + 0x1954) != 0.7)) {
    *(undefined8 *)(param_1 + 0x1950) = 0x3f3333333f333333;
    FUN_0091ada4(lVar2);
  }
  FUN_00f01980(lVar1);
  uVar6 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_009a7624);
  uVar7 = FUN_00efee28(0x3f800000,0x3e000000,FUN_009a7624);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcd98(puVar9);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar9,uVar6,uVar7,0);
  FUN_00f022a0(lVar1,puVar9);
  FUN_00f01980(lVar2);
  uVar6 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e000000,FUN_009a7624);
  uVar7 = FUN_00efee28(0x3f800000,0x3e000000,FUN_009a7624);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar9,uVar6,uVar7,0);
  FUN_00f022a0(lVar2,puVar9);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar9);
  FUN_00f022a0(lVar2,puVar9);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_027c27b8;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar9 + 8) = FUN_00c3c828;
  *(long *)(puVar9 + 0x10) = param_1;
  FUN_00f022a0(lVar2,puVar9);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3c828(long param_1)

{
  long lVar1;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    FUN_00b22fc8(0x40000000,param_1 + 0x2220,0,*(undefined4 *)(param_1 + 0x4340),
                 *(undefined4 *)(param_1 + 0x4344),1,(int)(float)*(int *)(param_1 + 0x352c));
    FUN_00b23218(param_1 + 0x2220);
    local_40 = FUN_00f048a4("UI::EVENT_PROGRESS_BAR_ANIMATION_FINISHED");
    local_68 = thunk_FUN_00c3c8e8;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(param_1 + 8,&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3c8e8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  uVar2 = FUN_00f048a4("UI::EVENT_PROGRESS_BAR_ANIMATION_FINISHED");
  FUN_00f04694(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c3c8e8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  uVar2 = FUN_00f048a4("UI::EVENT_PROGRESS_BAR_ANIMATION_FINISHED");
  FUN_00f04694(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3c974(undefined8 *param_1)

{
  FUN_00f017e8();
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_027faf00;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c3c9b4(long param_1,undefined8 param_2)

{
  int iVar1;
  ushort *puVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 local_70;
  long local_68;
  
  lVar4 = DAT_03210d00;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
    puVar9 = (ushort *)0x0;
    _DAT_00000010 = FUN_00c3d100;
    _DAT_00000020 = param_1;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    lVar4 = DAT_03210d00;
    puVar8 = (ushort *)(DAT_03210d00 + 0x20010);
    uVar5 = *puVar8;
    *(code **)(puVar6 + 8) = FUN_00c3d100;
    *(long *)(puVar6 + 0x10) = param_1;
    if ((ulong)uVar5 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(lVar4 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(lVar4 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *puVar8 = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
  }
  FUN_00efddc4(0x3f800000,puVar9);
  FUN_00efcac4(*(undefined4 *)(param_1 + 0x90),puVar9);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efe530(puVar8);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  local_70 = NEON_fmov(0x3fe00000,4);
  FUN_00efe58c(puVar8,&local_70);
  FUN_00efcac4(*(undefined4 *)(param_1 + 0x90),puVar8);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efce98(puVar7,puVar9,puVar8);
  iVar1 = *(int *)(param_1 + 0x94) + 1;
  *(int *)(param_1 + 0x94) = iVar1;
  lVar4 = DAT_03210d00;
  puVar9 = (ushort *)(DAT_03210d00 + 0x20010);
  uVar5 = *puVar9;
  if (iVar1 < *(int *)(param_1 + 0x98)) {
    if (uVar5 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar8;
      }
      *puVar9 = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    *(code **)(puVar8 + 8) = FUN_00c3c9b4;
    *(long *)(puVar8 + 0x10) = param_1;
  }
  else {
    if (uVar5 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar8;
      }
      *puVar9 = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar8);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f800000,puVar8);
    FUN_00efcac4(0,puVar8);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efe530(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efe58c(puVar9,&DAT_03218f00);
    FUN_00efcac4(0,puVar9);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar10 = (ushort *)0x0;
      puVar11 = (ushort *)0x0;
      _DAT_00000010 = FUN_00c3d0c0;
      _DAT_00000020 = param_1;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar10);
      *(undefined ***)puVar10 = &PTR_FUN_027c27b8;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      puVar10[0x10] = 0;
      puVar10[0x11] = 0;
      puVar10[0x12] = 0;
      puVar10[0x13] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      lVar4 = DAT_03210d00;
      puVar2 = (ushort *)(DAT_03210d00 + 0x20010);
      uVar5 = *puVar2;
      *(code **)(puVar10 + 8) = FUN_00c3d0c0;
      *(long *)(puVar10 + 0x10) = param_1;
      if ((ulong)uVar5 == 0xffff) {
        puVar11 = (ushort *)0x0;
      }
      else {
        puVar11 = (ushort *)(lVar4 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(lVar4 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar11;
        }
        *puVar2 = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcd98(puVar11);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
    }
    FUN_00efce98(puVar11,puVar8,puVar9);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efd208(puVar8);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar8,puVar11,puVar10,0);
  }
  FUN_00f02308(param_2,puVar6,puVar7,puVar8,0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

