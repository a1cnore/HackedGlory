// functions/00a19 — 61 functions
#include "libGameKindred.h"




void FUN_00a19008(long param_1,byte param_2,undefined4 param_3)

{
  *(byte *)(param_1 + 0xec) = param_2 & 1;
  *(undefined4 *)(param_1 + 0xe8) = param_3;
  FUN_00a182f8(param_1 + 0x28,1,0,0);
  return;
}




void FUN_00a1902c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float __x;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  undefined1 local_90 [8];
  float local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float fStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0xe4) = 0;
  if (*(char *)(param_1 + 200) == '\0') {
    *(undefined1 *)(param_1 + 200) = 1;
    FUN_00a18dc8(param_1,param_2,param_1 + 0xb0,1);
  }
  else {
    FUN_00a18dc8(param_1,param_2,&local_68,1);
    if (*(char *)(param_1 + 0xe5) != '\0') {
      fVar3 = local_68 - *(float *)(param_1 + 0xb0);
      local_64 = local_64 - (float)*(undefined8 *)(param_1 + 0xb4);
      fVar5 = fStack_60 - (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
      fVar5 = fVar3 * fVar3 + local_64 * local_64 + fVar5 * fVar5;
      fVar3 = SQRT(fVar5);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(fVar5);
      }
      if (fVar3 <= 0.65) goto LAB_00a192a8;
    }
    *(undefined1 *)(param_1 + 0xc9) = 1;
    FUN_009bbfb0();
    FUN_009bd5c8();
    lVar2 = FUN_009b806c();
    fVar4 = *(float *)(lVar2 + 0xc);
    uVar8 = *(undefined8 *)(lVar2 + 4);
    fVar6 = *(float *)(param_1 + 0xb0);
    fVar5 = *(float *)((ulong)&local_68 | 4);
    fVar9 = *(float *)(param_1 + 0xb8);
    fVar7 = *(float *)(param_1 + 0xb4);
    local_70 = -1.0;
    fStack_6c = -1.0;
    FUN_00f00298(&fStack_6c,&local_70);
    local_a8 = CONCAT44(local_70 * 0.5,fStack_6c * 0.5);
    local_a0 = 0.0;
    FUN_0091ef04(&local_80,&local_a8,0);
    local_a8 = CONCAT44(local_70 * 0.5,fStack_6c * 0.5);
    local_a0 = 1.0;
    FUN_0091ef04(local_90,&local_a8,0);
    fVar10 = local_90._0_4_ - (float)local_80;
    fVar11 = local_90._4_4_ - (float)((ulong)local_80 >> 0x20);
    local_88 = local_88 - local_78;
    local_a8 = local_80;
    __x = fVar10 * fVar10 + fVar11 * fVar11 + local_88 * local_88;
    fVar3 = SQRT(__x);
    local_a0 = local_78;
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    local_94 = local_88 / fVar3;
    local_9c = CONCAT44(fVar11 / fVar3,fVar10 / fVar3);
    FUN_00a18dc8();
    FUN_009bbfb0();
    FUN_009bd5c8();
    lVar2 = FUN_009b806c();
    local_c8 = CONCAT44(((float)((ulong)uVar8 >> 0x20) - fVar5) + fVar7 +
                        ((float)((ulong)local_b8 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar2 + 4) >> 0x20)),
                        ((float)uVar8 - local_68) + fVar6 +
                        ((float)local_b8 - (float)*(undefined8 *)(lVar2 + 4)));
    local_c0 = (fVar4 - fStack_60) + fVar9 + (local_b0 - *(float *)(lVar2 + 0xc));
    FUN_00cac9c4(&local_c8);
    FUN_009bbfb0();
    lVar2 = FUN_009bd5c8();
    fVar5 = (float)local_c8 - *(float *)(lVar2 + 0x414);
    fVar4 = local_c0 - *(float *)(lVar2 + 0x41c);
    fVar3 = (float)FUN_01988c84();
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (fVar3 <= 0.016666668) {
      fVar3 = 0.016666668;
    }
    *(float *)(param_1 + 0xd8) = fVar5 / fVar3;
    *(float *)(param_1 + 0xe0) = fVar4 / fVar3;
    FUN_009bbfb0();
    uVar8 = FUN_009bd5c8();
    FUN_009b81fc(uVar8,&local_c8,0);
  }
LAB_00a192a8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00a192d8(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  pbVar2 = (byte *)(param_1 + 0xf8);
  do {
    if ((*pbVar2 >> 2 & 1) == 0) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    pbVar2 = pbVar2 + 0xc;
  } while (uVar1 < 2);
  return 1;
}




void FUN_00a1930c(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00a19330(undefined8 param_1)

{
  FUN_00a18100();
  return param_1;
}




void FUN_00a19354(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a1935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00a19360(long param_1)

{
  long lVar1;
  
  DAT_03130ab8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03130ab8 + 1;
  lVar1 = param_1 + (ulong)DAT_03130ab8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a193c0;
  *(code **)(lVar1 + 0xb8) = FUN_00a1941c;
  *(uint *)(lVar1 + 0xa4) = DAT_03130ab8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x820;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




undefined8 * FUN_00a193c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_027c8358;
  param_1[5] = &PTR_FUN_027c8388;
  FUN_00d7ea98(param_1 + 7);
  *(undefined4 *)(param_1 + 0x103) = 0xbf800000;
  return param_1;
}




void FUN_00a1941c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a19424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00a19428(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c8358;
  param_1[5] = &PTR_FUN_027c8388;
  if ((undefined8 *)param_1[0xfe] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfe])();
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a19480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c8358;
  param_1[5] = &PTR_FUN_027c8388;
  if ((undefined8 *)param_1[0xfe] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xfe])();
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a194e0(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_027c8358;
  *param_1 = &PTR_FUN_027c8388;
  if ((undefined8 *)param_1[0xf9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xf9])();
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_00a19538(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_027c8358;
  *param_1 = &PTR_FUN_027c8388;
  if ((undefined8 *)param_1[0xf9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xf9])();
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




long FUN_00a19598(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00a195a0(long param_1)

{
  return param_1 + -0x28;
}




void FUN_00a195a8(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c83b8;
  param_1[5] = 0;
  return;
}




void FUN_00a195c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar1 = FUN_01985d44(param_1,DAT_0312f178);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  FUN_009c8918(uVar1,0,0);
  return;
}




void FUN_00a195fc(long param_1)

{
  long lVar1;
  
  DAT_03130df0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03130df0 + 1;
  lVar1 = param_1 + (ulong)DAT_03130df0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a19b14;
  *(code **)(lVar1 + 0xb8) = FUN_00a19b30;
  *(uint *)(lVar1 + 0xa4) = DAT_03130df0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x8b950a0d,FUN_00a196a4,0);
  FUN_019867cc(param_1,0x80a40995,FUN_00a197ac,0);
  return;
}




void FUN_00a198dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = FUN_00a1bd34();
  iVar2 = FUN_009f1f94(3);
  iVar3 = 1;
  if (iVar2 != 0) {
    iVar3 = 2;
  }
  if (((param_4 == 0 & (bVar1 ^ 1)) == 0) && (iVar3 != param_4)) {
    return;
  }
  FUN_00a19958(param_1,param_2);
  return;
}




void FUN_00a19958(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  for (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18); lVar4 != 0;
      lVar4 = *(long *)(lVar4 + 0x20)) {
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02e8b430) goto LAB_00a199fc;
  }
  if (((*(ushort *)(*(long *)(param_1 + 0x30) + 0x2f8) & 0x2004) == 0) &&
     (lVar4 = FUN_00cac6e4(param_2), lVar4 != 0)) {
    if ((*(byte *)(lVar4 + 0x2f7) >> 3 & 1) == 0) {
      FUN_00a153f0(*(undefined8 *)(param_1 + 0x28),lVar4,1,0);
      goto LAB_00a19a5c;
    }
    uVar3 = FUN_0092e6f4();
    if ((uVar3 & 1) == 0) {
      FUN_00a15150(*(undefined8 *)(param_1 + 0x28),lVar4);
      goto LAB_00a19a5c;
    }
  }
LAB_00a199fc:
  if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0) {
    uVar2 = FUN_00da2eb4();
    uVar3 = FUN_00cac868(param_2,uVar2,auStack_78);
    if ((uVar3 & 1) != 0) {
      FUN_009c8a5c(*(undefined8 *)(param_1 + 0x38),auStack_78);
      FUN_009c8af0(*(undefined8 *)(param_1 + 0x38));
      lVar4 = *(long *)(param_1 + 0x28);
      FUN_00a19bec(0x3f800000,auStack_68,auStack_78,0);
      FUN_00a1a334(lVar4 + 0x260,auStack_68);
    }
  }
LAB_00a19a5c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a19aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00a1bd34();
  if ((param_4 == 0) && ((uVar1 & 1) != 0)) {
    FUN_00a19958(param_1,param_2);
    return;
  }
  return;
}




void FUN_00a19af0(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00a19b14(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c83b8;
  param_1[5] = 0;
  return;
}




void FUN_00a19b30(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a19b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00a19b3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c83e8;
  param_1[1] = 0;
  return;
}




void FUN_00a19b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c83e8;
  if (param_1[1] != 0) {
    FUN_00bbf458();
    return;
  }
  return;
}




void FUN_00a19b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c83e8;
  if (param_1[1] != 0) {
    FUN_00bbf458();
  }
  operator_delete(param_1);
  return;
}




void FUN_00a19bb0(long param_1,long param_2)

{
  if (*(long *)(param_1 + 8) != param_2) {
    *(long *)(param_1 + 8) = param_2;
    FUN_00bbf434(param_2,param_1);
    return;
  }
  return;
}




void FUN_00a19bd4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_00a19bdc(void)

{
  return;
}




void FUN_00a19be0(void)

{
  return;
}




void FUN_00a19be4(void)

{
  return;
}




void FUN_00a19be8(void)

{
  return;
}




void FUN_00a19bec(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = &PTR_FUN_027c8428;
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 3) = param_1;
  *(byte *)((long)param_2 + 0x1c) = param_4 & 1;
  *(undefined8 *)((long)param_2 + 0xc) = uVar1;
  return;
}




void FUN_00a19c20(long param_1)

{
  long lVar1;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef68) {
        FUN_00a14d80(*(undefined4 *)(param_1 + 0x18),lVar1,param_1 + 0xc,
                     *(undefined1 *)(param_1 + 0x1c),0);
        return;
      }
    }
  }
  return;
}




void FUN_00a19c8c(void)

{
  FUN_00a114dc();
  thunk_FUN_00a150e4();
  return;
}




void FUN_00a19ca0(void)

{
  FUN_00a114dc();
  FUN_00a16c44();
  return;
}




void FUN_00a19cb4(void)

{
  FUN_00a114dc();
  FUN_00a16ed4();
  return;
}




void FUN_00a19cc8(void)

{
  FUN_00a114dc();
  FUN_00a16c9c();
  return;
}




void FUN_00a19cdc(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 4;
  if (2 < param_2) {
    iVar1 = 0x1e;
  }
  *param_1 = &PTR___cxa_pure_virtual_027c8680;
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(uint *)(param_1 + 2) = param_2;
  return;
}




int FUN_00a19d08(undefined8 param_1,uint param_2)

{
  if (param_2 < 3) {
    return param_2 + 4;
  }
  return 0x1e;
}




void FUN_00a19d20(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 8;
  if (param_2 != 1) {
    uVar2 = 0x1e;
  }
  uVar1 = 7;
  if (param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = &PTR___cxa_pure_virtual_027c8680;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  *(int *)(param_1 + 2) = param_2;
  return;
}




undefined4 FUN_00a19d5c(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 8;
  if (param_2 != 1) {
    uVar2 = 0x1e;
  }
  uVar1 = 7;
  if (param_2 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}




void FUN_00a19d7c(undefined8 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 9;
  *param_1 = &PTR___cxa_pure_virtual_027c8680;
  if (5 < param_2) {
    iVar1 = 0x1e;
  }
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 2;
  *(byte *)(param_1 + 2) = param_2;
  return;
}




int FUN_00a19db0(undefined8 param_1,byte param_2)

{
  if (param_2 < 6) {
    return param_2 + 9;
  }
  return 0x1e;
}




void FUN_00a19dd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    uVar2 = FUN_00a114dc();
    FUN_00a168d4(uVar2,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      uVar2 = FUN_00a114dc();
      FUN_00a16548(uVar2,*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
      return;
    }
    return;
  }
  uVar2 = FUN_00a114dc();
  FUN_00a16c20(uVar2,*(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x14));
  return;
}




void FUN_00a19e4c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    uVar2 = FUN_00a114dc();
    FUN_00a16ad4(uVar2,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      uVar2 = FUN_00a114dc();
      FUN_00a166a8(uVar2,*(undefined4 *)(param_1 + 0x10));
      return;
    }
    return;
  }
  uVar2 = FUN_00a114dc();
  FUN_00a16c30(uVar2,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_00a19ebc(void)

{
  FUN_00a114dc();
  FUN_00a16c3c();
  return;
}




void FUN_00a19ed0(void)

{
  FUN_00a114dc();
  FUN_00a1704c();
  return;
}




void FUN_00a19ee4(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x11;
  if (param_2 == 1) {
    uVar2 = 0x12;
  }
  uVar1 = 0x13;
  if (param_2 != 2) {
    uVar1 = uVar2;
  }
  *param_1 = &PTR_FUN_027c8440;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(int *)((long)param_1 + 0xc) = param_2;
  return;
}




undefined4 FUN_00a19f14(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x11;
  if (param_1 == 1) {
    uVar2 = 0x12;
  }
  uVar1 = 0x13;
  if (param_1 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}




void FUN_00a19f30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a114dc();
  FUN_00a16760(uVar1,*(undefined4 *)(param_1 + 0xc));
  return;
}




void FUN_00a19f54(void)

{
  FUN_009c1044();
  FUN_009c53c8();
  return;
}




void FUN_00a19f68(void)

{
  FUN_00a114dc();
  FUN_00a1709c();
  return;
}




void FUN_00a19f7c(void)

{
  FUN_00a114dc();
  FUN_00a170cc();
  return;
}




void FUN_00a19f90(void)

{
  FUN_009c1044();
  FUN_009c5060();
  return;
}




void FUN_00a19fa4(void)

{
  FUN_009c1044();
  FUN_009c5278();
  return;
}




void FUN_00a19fb8(void)

{
  FUN_009c1044();
  FUN_009c5318();
  return;
}




void FUN_00a19fcc(void)

{
  uint uVar1;
  
  uVar1 = FUN_009c1050();
  if ((uVar1 & 1) != 0) {
    FUN_009c1044();
    FUN_009c53d0();
    return;
  }
  return;
}




void FUN_00a19ff0(void)

{
  uint uVar1;
  
  uVar1 = FUN_009c1050();
  if ((uVar1 & 1) != 0) {
    FUN_009c1044();
    FUN_009c54b8();
    return;
  }
  return;
}




void thunk_FUN_00a19b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c83e8;
  if (param_1[1] != 0) {
    FUN_00bbf458();
    return;
  }
  return;
}

