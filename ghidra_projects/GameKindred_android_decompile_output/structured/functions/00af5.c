// functions/00af5 — 23 functions
#include "libGameKindred.h"




void FUN_00af501c(long param_1,byte param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  lVar2 = DAT_03210d00;
  if ((param_2 & 1) == 0) {
    FUN_00f01980(param_1 + 0x388);
    if ((*(uint *)(param_1 + 0x40c) & 0x7f80) == 0) goto LAB_00af52a8;
    uVar1 = *(uint *)(param_1 + 0x40c) & 0xffff807f;
  }
  else {
    if (*(char *)(param_1 + 0x972) != '\0') goto LAB_00af52a8;
    if ((param_3 & 1) != 0) {
      uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar3 == 0xffff) {
        puVar4 = (ushort *)0x0;
      }
      else {
        puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
        if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = *puVar4;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar4);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0x3f800000,puVar4);
      FUN_00efcac4(0x3e19999a,puVar4);
      lVar2 = DAT_03210d00;
      uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar3 == 0xffff) {
        puVar5 = (ushort *)0x0;
      }
      else {
        puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
        if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = *puVar5;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar5);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0x3e99999a,puVar5);
      FUN_00efcac4(0x3e19999a,puVar5);
      lVar2 = DAT_03210d00;
      uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar3 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
        if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar6);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0x3f800000,puVar6);
      FUN_00efcac4(0x3e19999a,puVar6);
      FUN_00f01980(param_1 + 0x388);
      FUN_00f02308(param_1 + 0x388,puVar4,puVar5,puVar6,0);
      goto LAB_00af52a8;
    }
    FUN_00f01980(param_1 + 0x388);
    if ((~*(uint *)(param_1 + 0x40c) & 0x7f80) == 0) goto LAB_00af52a8;
    uVar1 = *(uint *)(param_1 + 0x40c) | 0x7f80;
  }
  *(uint *)(param_1 + 0x40c) = uVar1;
  FUN_0091ada4(param_1 + 0x388);
LAB_00af52a8:
  *(byte *)(param_1 + 0x972) = param_2 & 1;
  return;
}




void FUN_00af52c4(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x972) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x973) = *param_2;
  return;
}




void FUN_00af52e0(long param_1)

{
  FUN_00f0e700(param_1 + 0xb8);
  return;
}




void FUN_00af52e8(long param_1)

{
  FUN_00f02010(param_1 + 0xb8);
  return;
}




undefined8 FUN_00af52f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x968);
}




void FUN_00af52f8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  long local_48;
  
  puVar2 = (undefined4 *)&local_50;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_3 + 0x970) == '\0') {
    fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_3 + 0x973));
    param_2 = (float)NEON_ucvtf((uint)*(byte *)(param_3 + 0x974));
    fVar4 = (float)NEON_ucvtf((uint)*(byte *)(param_3 + 0x975));
    param_2 = param_2 * 0.8;
    local_50 = (undefined1)(int)(fVar3 * 0.8);
    local_4f = (undefined1)(int)param_2;
    local_4e = (undefined1)(int)(fVar4 * 0.8);
    local_4d = 0xff;
  }
  else {
    puVar2 = &DAT_01bee7fa;
  }
  FUN_00f0e670(param_3 + 0xb8,puVar2,2);
  fVar3 = (float)FUN_00f0e700(param_3 + 0xb8);
  fVar3 = fVar3 * 0.5;
  if ((*(float *)(param_3 + 0x2d8) != fVar3) || (*(float *)(param_3 + 0x2dc) != param_2)) {
    *(float *)(param_3 + 0x2d8) = fVar3;
    *(float *)(param_3 + 0x2dc) = param_2;
    FUN_0091ada4(param_3 + 0x298);
  }
  if ((*(float *)(param_3 + 0x878) != fVar3) || (*(float *)(param_3 + 0x87c) != param_2 + -24.0)) {
    *(float *)(param_3 + 0x878) = fVar3;
    *(float *)(param_3 + 0x87c) = param_2 + -24.0;
    FUN_0091ada4(param_3 + 0x838);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af542c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9f38;
  FUN_00f0d3a4(param_1 + 0x107);
  param_1[0x71] = &PTR_FUN_027dc928;
  param_1[0xdc] = &PTR_FUN_02826f38;
  param_1[0xf3] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xf6);
  FUN_00f13d08(param_1 + 0xdc);
  param_1[0xb2] = &PTR_FUN_02826f38;
  param_1[0xc9] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xcc);
  FUN_00f13d08(param_1 + 0xb2);
  param_1[0x88] = &PTR_FUN_02826f38;
  param_1[0x9f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x88);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00af5558(void *param_1)

{
  FUN_00af542c();
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af557c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00af6b6c();
  plVar1 = param_1 + 0x1d;
  *param_1 = (long)&PTR_FUN_027da080;
  param_1[0x11] = (long)&PTR_FUN_027da198;
  FUN_00b25254(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_00f0e4a8(plVar2);
  lVar6 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x33c) = _DAT_03218ef8;
  param_1[0x69] = -1;
  param_1[0x6a] = lVar6;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  uVar5 = FUN_0092ea9c();
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_timer");
  if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.5)) {
    param_1[0x53] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar5 & 1) == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(plVar1,*ppuVar3);
  if ((*(float *)(param_1 + 0x27) != 0.0) || (*(float *)((long)param_1 + 0x13c) != 0.0)) {
    param_1[0x27] = 0;
    FUN_0091ada4(plVar1);
  }
  local_50 = FUN_00f048a4("UI::EVENT_FEED_IMAGE_LOADED");
  local_78 = thunk_FUN_00af5830;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00af5830(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_00af5778();
  lVar1 = param_1 + 0x248;
  lVar2 = param_1 + 0xe8;
  *(uint *)(param_1 + 0x2cc) =
       *(uint *)(param_1 + 0x2cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2cc) & 3 | (uint)(0 < *(long *)(param_1 + 0x348)) << 2;
  if (*(long *)(param_1 + 0x348) < 1) {
    if ((*(float *)(param_1 + 0x128) == *(float *)(param_1 + 0x33c)) &&
       (*(float *)(param_1 + 300) == *(float *)(param_1 + 0x340))) goto LAB_00af58f4;
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x33c);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x33c);
    fVar3 = (float)FUN_00f0e700(lVar1);
    fVar3 = fVar5 + fVar3 * 0.5 + 5.0;
    if ((*(float *)(param_1 + 0x128) == fVar3) &&
       (*(float *)(param_1 + 300) == *(float *)(param_1 + 0x340))) goto LAB_00af58f4;
    *(float *)(param_1 + 0x128) = fVar3;
    *(float *)(param_1 + 300) = *(float *)(param_1 + 0x340);
  }
  FUN_0091ada4(lVar2);
LAB_00af58f4:
  fVar6 = *(float *)(param_1 + 0x128);
  fVar3 = (float)FUN_00f0d4e0(lVar2);
  fVar5 = (float)FUN_00f0e700(lVar1);
  fVar7 = *(float *)(param_1 + 300);
  fVar4 = -10.0;
  fVar3 = ((fVar6 - fVar3 * 0.5) - fVar5 * 0.5) + -10.0;
  FUN_00f0d4e0(lVar2);
  fVar7 = fVar7 + fVar4 * 0.5;
  if ((*(float *)(param_1 + 0x288) == fVar3) && (*(float *)(param_1 + 0x28c) == fVar7)) {
    return;
  }
  *(float *)(param_1 + 0x288) = fVar3;
  *(float *)(param_1 + 0x28c) = fVar7;
  FUN_0091ada4(lVar1);
  return;
}




void FUN_00af5738(long param_1)

{
  if (0 < *(long *)(param_1 + 0x348)) {
    FUN_00b252ec(param_1 + 0xe8);
    FUN_00af5778(param_1);
    return;
  }
  return;
}




void FUN_00af5778(long param_1)

{
  FUN_00f0db64(*(undefined4 *)(param_1 + 0x350),0,0x3f800000,param_1 + 0xe8);
  FUN_00f0dad0(*(float *)(param_1 + 0x350) / *(float *)(param_1 + 0x130),param_1 + 0xe8,1);
  return;
}




void FUN_00af57c0(long param_1,long param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x348) = param_2;
  local_40 = FUN_00e85318(0);
  local_40 = param_2 - local_40;
  FUN_00b25438(param_1 + 0xe8,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af5830(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_00af5778();
  lVar1 = param_1 + 0x248;
  lVar2 = param_1 + 0xe8;
  *(uint *)(param_1 + 0x2cc) =
       *(uint *)(param_1 + 0x2cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2cc) & 3 | (uint)(0 < *(long *)(param_1 + 0x348)) << 2;
  if (*(long *)(param_1 + 0x348) < 1) {
    if ((*(float *)(param_1 + 0x128) == *(float *)(param_1 + 0x33c)) &&
       (*(float *)(param_1 + 300) == *(float *)(param_1 + 0x340))) goto LAB_00af58f4;
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x33c);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x33c);
    fVar3 = (float)FUN_00f0e700(lVar1);
    fVar3 = fVar5 + fVar3 * 0.5 + 5.0;
    if ((*(float *)(param_1 + 0x128) == fVar3) &&
       (*(float *)(param_1 + 300) == *(float *)(param_1 + 0x340))) goto LAB_00af58f4;
    *(float *)(param_1 + 0x128) = fVar3;
    *(float *)(param_1 + 300) = *(float *)(param_1 + 0x340);
  }
  FUN_0091ada4(lVar2);
LAB_00af58f4:
  fVar6 = *(float *)(param_1 + 0x128);
  fVar3 = (float)FUN_00f0d4e0(lVar2);
  fVar5 = (float)FUN_00f0e700(lVar1);
  fVar7 = *(float *)(param_1 + 300);
  fVar4 = -10.0;
  fVar3 = ((fVar6 - fVar3 * 0.5) - fVar5 * 0.5) + -10.0;
  FUN_00f0d4e0(lVar2);
  fVar7 = fVar7 + fVar4 * 0.5;
  if ((*(float *)(param_1 + 0x288) == fVar3) && (*(float *)(param_1 + 0x28c) == fVar7)) {
    return;
  }
  *(float *)(param_1 + 0x288) = fVar3;
  *(float *)(param_1 + 0x28c) = fVar7;
  FUN_0091ada4(lVar1);
  return;
}




void thunk_FUN_00af5830(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_00af5778();
  lVar1 = param_1 + 0x248;
  lVar2 = param_1 + 0xe8;
  *(uint *)(param_1 + 0x2cc) =
       *(uint *)(param_1 + 0x2cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2cc) & 3 | (uint)(0 < *(long *)(param_1 + 0x348)) << 2;
  if (*(long *)(param_1 + 0x348) < 1) {
    if ((*(float *)(param_1 + 0x128) == *(float *)(param_1 + 0x33c)) &&
       (*(float *)(param_1 + 300) == *(float *)(param_1 + 0x340))) goto LAB_00af58f4;
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x33c);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x33c);
    fVar3 = (float)FUN_00f0e700(lVar1);
    fVar3 = fVar5 + fVar3 * 0.5 + 5.0;
    if ((*(float *)(param_1 + 0x128) == fVar3) &&
       (*(float *)(param_1 + 300) == *(float *)(param_1 + 0x340))) goto LAB_00af58f4;
    *(float *)(param_1 + 0x128) = fVar3;
    *(float *)(param_1 + 300) = *(float *)(param_1 + 0x340);
  }
  FUN_0091ada4(lVar2);
LAB_00af58f4:
  fVar6 = *(float *)(param_1 + 0x128);
  fVar3 = (float)FUN_00f0d4e0(lVar2);
  fVar5 = (float)FUN_00f0e700(lVar1);
  fVar7 = *(float *)(param_1 + 300);
  fVar4 = -10.0;
  fVar3 = ((fVar6 - fVar3 * 0.5) - fVar5 * 0.5) + -10.0;
  FUN_00f0d4e0(lVar2);
  fVar7 = fVar7 + fVar4 * 0.5;
  if ((*(float *)(param_1 + 0x288) == fVar3) && (*(float *)(param_1 + 0x28c) == fVar7)) {
    return;
  }
  *(float *)(param_1 + 0x288) = fVar3;
  *(float *)(param_1 + 0x28c) = fVar7;
  FUN_0091ada4(lVar1);
  return;
}




void FUN_00af5990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da080;
  param_1[0x11] = &PTR_FUN_027da198;
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x1d] = &PTR_FUN_027d3cc8;
  param_1[0x34] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x46] != (void *)0x0) {
    operator_delete__((void *)param_1[0x46]);
    param_1[0x46] = 0;
    param_1[0x45] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1d);
  *param_1 = &PTR_FUN_027da660;
  param_1[0x11] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_0199fb94(param_1 + 0x14);
  FUN_00f01868(param_1);
  return;
}




void FUN_00af5a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da080;
  param_1[0x11] = &PTR_FUN_027da198;
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x1d] = &PTR_FUN_027d3cc8;
  param_1[0x34] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x46] != (void *)0x0) {
    operator_delete__((void *)param_1[0x46]);
    param_1[0x46] = 0;
    param_1[0x45] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1d);
  *param_1 = &PTR_FUN_027da660;
  param_1[0x11] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_0199fb94(param_1 + 0x14);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00af5b30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x11;
  *puVar1 = &PTR_FUN_027da080;
  *param_1 = &PTR_FUN_027da198;
  param_1[0x38] = &PTR_FUN_028266f0;
  param_1[0x4f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x38);
  param_1[0xc] = &PTR_FUN_027d3cc8;
  param_1[0x23] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x35] != (void *)0x0) {
    operator_delete__((void *)param_1[0x35]);
    param_1[0x35] = 0;
    param_1[0x34] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xc);
  *puVar1 = &PTR_FUN_027da660;
  *param_1 = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_0199fb94(param_1 + 3);
  FUN_00f01868(puVar1);
  return;
}




void FUN_00af5c08(long param_1)

{
  FUN_00af5a5c(param_1 + -0x88);
  return;
}




void FUN_00af5c10(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 uint param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  float fVar7;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00af6c14();
  if ((*(uint *)((long)param_3 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_3);
  }
  *(undefined1 *)(param_3 + 0x1c) = 1;
  fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if ((fVar7 == 100.0) && (param_2 == 100.0)) {
    FUN_00af6d64((float)param_5,(float)param_6,param_3);
  }
  FUN_00f01980(param_3);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 != 0xffff) {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar6);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00af5dcc;
    }
  }
  puVar6 = (ushort *)0x0;
LAB_00af5dcc:
  FUN_00efddc4(0x3f800000,puVar6);
  FUN_00efcac4(0x3e800000,puVar6);
  FUN_00f02308(param_3,puVar5,puVar6,0);
  uVar3 = FUN_00f048a4("UI::EVENT_FEED_IMAGE_LOADED");
  FUN_00f048e0(auStack_68,uVar3,0);
  FUN_00f04760(param_3,auStack_68,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af5e50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_00f11234();
  plVar1 = param_1 + 0x34;
  *param_1 = (long)&PTR_FUN_027da1e0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x52;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x69;
  FUN_00ecfd6c(plVar3,0);
  plVar4 = param_1 + 0x110;
  FUN_00f017e8(plVar4);
  param_1[0x110] = (long)&PTR_FUN_027c1f80;
  FUN_00f0bdbc(param_1 + 0x121,1);
  param_1[0x121] = (long)&PTR_FUN_027ccd08;
  param_1[0x13a] = 0x44c0000044cbc000;
  *(undefined1 *)(param_1 + 0x13b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed026c(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,param_1 + 0x121,1);
  FUN_00ed04d8(plVar3,0,0);
  FUN_00f0e548(plVar1,PTR_s_build___MenuBackground_Form_png_02be3588,"menu_form_background");
  FUN_00f13f18(plVar1,param_1 + 0x13a);
  return;
}




void FUN_00af5fa4(long param_1)

{
  FUN_00f13f18(param_1 + 0x1a0,param_1 + 0x9d0);
  FUN_00f13f18(param_1 + 0x290,param_1 + 0x9d0);
  return;
}




void FUN_00af5fd8(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *param_4;
  param_3[0x13a] = lVar1;
  (**(code **)(*param_3 + 0x48))();
  FUN_00ed04d8(param_3 + 0x69,0,param_2 < (float)((ulong)lVar1 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x00af6038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x150))(param_3);
  return;
}

