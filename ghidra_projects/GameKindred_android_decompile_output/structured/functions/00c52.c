// functions/00c52 — 11 functions
#include "libGameKindred.h"




void thunk_FUN_00c52d90(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong auStack_68 [2];
  void *pvStack_58;
  ulong auStack_50 [2];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00c52e88();
  if ((uVar2 & 1) != 0) {
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    pvStack_40 = (void *)0x0;
    auStack_68[0] = 0;
    auStack_68[1] = 0;
    pvStack_58 = (void *)0x0;
    uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0xf88);
    FUN_00e70a24(uVar3,auStack_50);
    uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x4b08) & 1) * 0x130 + 0x4978);
    FUN_00e70a24(uVar3,auStack_68);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),auStack_50,auStack_68,
               *(undefined1 *)(param_1 + 0xc890));
    FUN_00c5258c(param_1,1);
    if ((auStack_68[0] & 1) != 0) {
      operator_delete(pvStack_58);
    }
    if ((auStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c521e0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  plVar4 = param_3 + 0x1a82;
  FUN_00f13f68(plVar4,0);
  local_90._0_2_ = 0x77;
  FUN_00f14070(plVar4,&local_90);
  FUN_00f13db4(param_3);
  plVar5 = param_3 + 0x1a99;
  fVar7 = (float)FUN_00f13e54(plVar4);
  FUN_00f0dad0(fVar7 * 0.5,plVar5,1);
  FUN_00f0d4e0(plVar5);
  FUN_00f13f68(plVar4,(ulong)(uint)(int)param_2 << 0x20);
  local_90._0_2_ = 0;
  FUN_00f14070(plVar4,&local_90);
  local_98 = 0;
  plVar1 = param_3 + 0x1b5;
  FUN_00f09b18(plVar1 + ((ulong)*(byte *)(param_3 + 0x223) & 1) * 0x26 + 0x3c,(long)&local_98 + 4,
               &local_98);
  plVar2 = param_3 + 0x187;
  FUN_00f13f68(plVar2,(ulong)(uint)(int)((float)local_98 * 1.4) << 0x20);
  local_90._0_2_ = 0x37;
  FUN_00f14070(plVar2,&local_90);
  plVar3 = param_3 + 0x19e;
  FUN_00f13f68(plVar3,(ulong)(uint)(int)((float)local_98 * 1.4) << 0x20);
  local_90 = CONCAT22(local_90._2_2_,0x37);
  FUN_00f14070(plVar3,&local_90);
  FUN_00f13db4(param_3);
  fVar7 = (float)FUN_00f13e54(plVar2);
  fVar10 = 0.48;
  fVar7 = fVar7 * 0.48;
  FUN_00f13e54(plVar2);
  fVar10 = fVar10 * 0.9;
  FUN_00abc380(fVar7,fVar10,plVar1);
  FUN_00abc380(fVar7,fVar10,param_3 + 0x8f3);
  FUN_00abc380(fVar7,fVar10,param_3 + 0x554);
  FUN_00abc380(fVar7,fVar10,param_3 + 0xc92);
  FUN_00f07940(0,0,plVar1,7,plVar2,7);
  FUN_00f07940(0,0,param_3 + 0x8f3,5,plVar2,5);
  FUN_00f07940(0,0,param_3 + 0x554,7,plVar3,7);
  uVar8 = 0;
  FUN_00f07940(0,param_3 + 0xc92,5,plVar3,5);
  plVar1 = param_3 + 0x1c57;
  fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0eaf4(param_3 + 0x1c8c);
  FUN_00f13f08(fVar7 * 0.5,plVar1);
  FUN_00f13db4(plVar1);
  local_90 = FUN_00f13e54(plVar1);
  uStack_8c = uVar8;
  FUN_00f13f18(param_3 + 0x1c6e,&local_90);
  FUN_00f07940(0,0,param_3 + 0x1c6e,8,plVar1,8);
  uVar9 = 0;
  FUN_00f07940(0,0,plVar1,2,param_3,2);
  plVar2 = param_3 + 0x1cf6;
  FUN_00f0dac8(plVar2,3);
  FUN_00f13e54(plVar1);
  FUN_00f0dad0(plVar2,1);
  FUN_00f13e54(plVar1);
  FUN_00f0dc4c(uVar9,0,0x3f800000,plVar2);
  FUN_00f07940(0,0,plVar2,8,plVar1,8);
  FUN_00f07940(0,0,plVar5,3,plVar4,3);
  FUN_00f07940(0,0,param_3 + 0x1abf,8,param_3 + 0x1913,8);
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5258c(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0xc898;
  *(uint *)(param_1 + 0xd67c) =
       *(uint *)(param_1 + 0xd67c) & 0xfffffff8 |
       *(uint *)(param_1 + 0xd67c) & 3 | (param_2 & 1) << 2;
  FUN_00ecf888(lVar1,~param_2 & 1);
  if ((~param_2 & 1) == 0) {
    FUN_00b16058();
    FUN_00c938d4(lVar1,&DAT_03210450);
    uVar3 = *(uint *)(param_1 + 0xc91c);
    if ((uVar3 & 0x7f80) == 0x6600) {
      return;
    }
    uVar3 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
  }
  else {
    FUN_00b16600(param_1 + 0xd5f8);
    uVar2 = FUN_00e6ce7c("MAIN_PROFILE_REG_SUBMIT",0);
    FUN_00c938d4(lVar1,uVar2);
    if ((~*(uint *)(param_1 + 0xc91c) & 0x7f80) == 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0xc91c) | 0x7f80;
  }
  *(uint *)(param_1 + 0xc91c) = uVar3;
  FUN_0091ada4(lVar1);
  return;
}




void FUN_00c5267c(long param_1)

{
  FUN_00f0d75c(param_1 + 0xd2e0);
  return;
}




void FUN_00c52688(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = ~param_2 & 1;
  *(uint *)(param_1 + 0x274) =
       *(uint *)(param_1 + 0x274) & 0xfffffff8 | *(uint *)(param_1 + 0x274) & 3 | uVar2 << 2;
  *(uint *)(param_1 + 0x820c) =
       *(uint *)(param_1 + 0x820c) & 0xfffffff8 | *(uint *)(param_1 + 0x820c) & 3 | uVar2 << 2;
  *(uint *)(param_1 + 0xb16c) =
       *(uint *)(param_1 + 0xb16c) & 0xfffffff8 | *(uint *)(param_1 + 0xb16c) & 3 | uVar2 << 2;
  *(uint *)(param_1 + 0xd494) =
       *(uint *)(param_1 + 0xd494) & 0xfffffff8 | *(uint *)(param_1 + 0xd494) & 3 | uVar2 << 2;
  *(uint *)(param_1 + 0xd54c) =
       *(uint *)(param_1 + 0xd54c) & 0xfffffff8 | *(uint *)(param_1 + 0xd54c) & 3 | uVar2 << 2;
  uVar3 = FUN_0092ea9c();
  if ((uVar3 & 1) == 0) {
    if ((param_2 & 1) == 0) goto LAB_00c52794;
  }
  else {
    if ((param_2 & 1) == 0) {
      *(undefined **)(param_1 + 0xe8e8) = PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
      goto LAB_00c52794;
    }
    *(undefined **)(param_1 + 0xe8e8) = PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  if (*(char *)(param_1 + 0xc890) == '\0') {
    *(char *)(param_1 + 0xc890) = '\x01';
    *(uint *)(param_1 + 0xba74) = *(uint *)(param_1 + 0xba74) | 4;
  }
  if (*(char *)(param_1 + 0x9930) == '\0') {
    *(char *)(param_1 + 0x9930) = '\x01';
    *(uint *)(param_1 + 0x8b14) = *(uint *)(param_1 + 0x8b14) | 4;
  }
LAB_00c52794:
  puVar1 = (undefined8 *)(param_1 + 0xe8e8);
  FUN_00f0d378(param_1 + 0xc0,*puVar1);
  FUN_00b035dc(param_1 + 0xda8,*puVar1);
  FUN_00b035dc(param_1 + 0x2aa0,*puVar1);
  FUN_00b035dc(param_1 + 0x4798,*puVar1);
  FUN_00b035dc(param_1 + 0x6490,*puVar1);
  FUN_00c51a9c(param_1 + 0x8188,*puVar1);
  FUN_00c51a9c(param_1 + 0x9938,*puVar1);
  FUN_00c51a9c(param_1 + 0xb0e8,*puVar1);
  lVar5 = 0;
  lVar4 = param_1 + 0xdcc8;
  do {
    FUN_00f0d378(lVar4,*puVar1);
    if (lVar5 != 0) {
      FUN_00f07b18(0,lVar4,3,lVar4 + -0x130,1);
    }
    lVar5 = lVar5 + -1;
    lVar4 = lVar4 + 0x130;
  } while (lVar5 != -5);
  FUN_00f13238(param_1 + 0xdb70);
  return;
}




undefined1 FUN_00c52868(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17a8);
}




void FUN_00c52874(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x17a8);
  *(byte *)(param_1 + 0x17a8) = bVar1 ^ 1;
  *(uint *)(param_1 + 0x98c) =
       *(uint *)(param_1 + 0x98c) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  return;
}




void FUN_00c528a4(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  plVar1 = param_1 + 0x1cf6;
  FUN_00f0d75c(plVar1);
  uVar2 = *(uint *)((long)param_1 + 0xe834);
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xe834) = uVar2 & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  lVar3 = DAT_03210d00;
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
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar5);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3f000000,puVar5);
  FUN_00efcb24(puVar5,FUN_0091aa80);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x40800000,puVar6);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar7);
  FUN_00efcac4(0x3f000000,puVar7);
  FUN_00efcb24(puVar7,FUN_009a71a4);
  FUN_00f01980(plVar1);
  FUN_00f02308(plVar1,puVar5,puVar6,puVar7,0);
  uVar2 = *(uint *)((long)param_1 + 0xe33c);
  plVar1 = param_1 + 0x1c57;
  if ((~uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xe33c) = uVar2 | 0x7f80;
    FUN_0091ada4(plVar1);
  }
  lVar3 = DAT_03210d00;
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
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar5);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar5);
  FUN_00efcac4(0x3f000000,puVar5);
  FUN_00efcb24(puVar5,FUN_0091aa80);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x40800000,puVar6);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar7);
  FUN_00efcac4(0x3f000000,puVar7);
  FUN_00efcb24(puVar7,FUN_009a71a4);
  FUN_00f01980(plVar1);
  FUN_00f02308(plVar1,puVar5,puVar6,puVar7,0);
                    /* WARNING: Could not recover jumptable at 0x00c52d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c52d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c52d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c52d90(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00c52e88();
  if ((uVar2 & 1) != 0) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_68[0] = 0;
    local_68[1] = 0;
    local_58 = (void *)0x0;
    uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0xf88);
    FUN_00e70a24(uVar3,local_50);
    uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x4b08) & 1) * 0x130 + 0x4978);
    FUN_00e70a24(uVar3,local_68);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))
              (*(undefined8 **)(param_1 + 0xb8),local_50,local_68,*(undefined1 *)(param_1 + 0xc890))
    ;
    FUN_00c5258c(param_1,1);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
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




byte FUN_00c52e88(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  bVar4 = FUN_00c53364();
  if ((bVar4 & 1) == 0) {
    lVar1 = param_1 + 0xda8;
    uVar6 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0x1e0);
    lVar2 = param_1 + 0x2aa0;
    uVar7 = FUN_00f08be8(lVar2 + ((ulong)*(byte *)(param_1 + 0x2e10) & 1) * 0x130 + 0x1e0);
    uVar8 = FUN_00e70b88(uVar6,uVar7);
    if (((uVar8 & 1) != 0) && (uVar8 = FUN_00abc780(lVar2), (uVar8 & 1) == 0)) {
      FUN_00abc610(lVar2,1);
      uVar6 = FUN_00e6ce7c("MAIN_PROFILE_REG_STATUS_FAIL_EMAIL_MISMATCH",0);
      FUN_00abce78(lVar2,uVar6);
    }
    FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0x1e0);
    uVar8 = FUN_00e70b04();
    if ((uVar8 & 1) != 0) {
      FUN_00abc610(lVar1,1);
      uVar6 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_00abce78(lVar1,uVar6);
    }
    FUN_00f08be8(lVar2 + ((ulong)*(byte *)(param_1 + 0x2e10) & 1) * 0x130 + 0x1e0);
    uVar8 = FUN_00e70b04();
    if ((uVar8 & 1) != 0) {
      FUN_00abc610(lVar2,1);
      uVar6 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_00abce78(lVar2,uVar6);
    }
  }
  bVar5 = FUN_00c53408(param_1);
  if ((bVar5 & 1) == 0) {
    uVar6 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x4b08) & 1) * 0x130 + 0x4978);
    lVar1 = param_1 + 0x6490;
    uVar7 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x6800) & 1) * 0x130 + 0x1e0);
    uVar8 = FUN_00e70b88(uVar6,uVar7);
    if (((uVar8 & 1) != 0) && (uVar8 = FUN_00abc780(lVar1), (uVar8 & 1) == 0)) {
      FUN_00abc610(lVar1,1);
      uVar6 = FUN_00e6ce7c("MAIN_PROFILE_REG_STATUS_FAIL_PASSWORD_MISMATCH",0);
      FUN_00abce78(lVar1,uVar6);
    }
    lVar2 = param_1 + 0xda8;
    FUN_00f08be8(lVar2 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0x1e0);
    uVar8 = FUN_00e70b04();
    if ((uVar8 & 1) != 0) {
      FUN_00abc610(lVar2,1);
      uVar6 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_00abce78(lVar2,uVar6);
    }
    FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x6800) & 1) * 0x130 + 0x1e0);
    uVar8 = FUN_00e70b04();
    if ((uVar8 & 1) != 0) {
      FUN_00abc610(lVar1,1);
      uVar6 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_00abce78(lVar1,uVar6);
    }
  }
  bVar3 = false;
  if (*(char *)(param_1 + 0x9930) != '\0') {
    bVar3 = *(char *)(param_1 + 0xb0e0) != '\0';
  }
  bVar4 = bVar4 & bVar5 & bVar3;
  FUN_00ecf888(param_1 + 0xc898,bVar4);
  return bVar4;
}

