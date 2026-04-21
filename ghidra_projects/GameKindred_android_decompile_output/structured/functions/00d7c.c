// functions/00d7c — 38 functions
#include "libGameKindred.h"




void FUN_00d7c044(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d7c06c(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d7c09c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d7c0c0(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d7c0ec(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d7c0f4(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d7c0fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_0281e640;
  param_1[5] = &PTR_FUN_0281e670;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}




void FUN_00d7c150(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7c158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7c15c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e6a0;
  FUN_00d7fb5c(param_1 + 5);
  return;
}




void FUN_00d7c170(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  DAT_031a9b44 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9b44 + 1;
  lVar2 = param_1 + (ulong)DAT_031a9b44 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d7c408;
  *(code **)(lVar2 + 0xb8) = FUN_00d7c43c;
  *(uint *)(lVar2 + 0xa4) = DAT_031a9b44;
  *(undefined4 *)(lVar2 + 0xa8) = 0x208;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_019867b4(param_1,5,FUN_00d7c20c);
    return;
  }
  return;
}




void FUN_00d7c20c(long param_1,ushort *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  float fVar12;
  undefined4 auStack_1a430 [64];
  undefined1 auStack_1a330 [102400];
  undefined1 auStack_1330 [12];
  float local_1324 [797];
  long local_6b0 [202];
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    uVar2 = FUN_019889cc(local_6b0,200,DAT_02c09220,0);
    if (uVar2 != 0) {
      puVar7 = auStack_1330;
      uVar10 = (ulong)uVar2;
      plVar11 = local_6b0;
      do {
        FUN_00d55794(*plVar11,puVar7,0);
        uVar10 = uVar10 - 1;
        lVar5 = *(long *)(*plVar11 + 0x38);
        fVar12 = *(float *)(lVar5 + 100);
        *(float *)(puVar7 + 0xc) =
             (*(float *)(lVar5 + 0x68) * (fVar12 + *(float *)(*plVar11 + 0x2e8))) / fVar12;
        puVar7 = puVar7 + 0x10;
        plVar11 = plVar11 + 1;
      } while (uVar10 != 0);
    }
    uVar9 = (ulong)param_3;
    puVar7 = auStack_1a330;
    puVar6 = param_2;
    puVar8 = auStack_1a430;
    uVar10 = uVar9;
    do {
      uVar3 = FUN_00d7fda8(param_1 + (ulong)*puVar6 * 0x208 + 0x28,puVar7,auStack_1330,local_6b0,
                           (ulong)uVar2);
      *puVar8 = uVar3;
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 0x640;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar10 != 0);
    puVar7 = auStack_1a330;
    puVar8 = auStack_1a430;
    do {
      FUN_00d80024(param_1 + (ulong)*param_2 * 0x208 + 0x28,puVar7,*puVar8);
      uVar9 = uVar9 - 1;
      puVar7 = puVar7 + 0x640;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    } while (uVar9 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d7c380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e6a0;
  if ((void *)param_1[0x40] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40]);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d7c3c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e6a0;
  if ((void *)param_1[0x40] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40]);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
  }
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




undefined8 * FUN_00d7c408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e6a0;
  FUN_00d7fb5c(param_1 + 5);
  return param_1;
}




void FUN_00d7c43c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7c448(long param_1)

{
  long lVar1;
  
  DAT_03133730 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03133730 + 1;
  lVar1 = param_1 + (ulong)DAT_03133730 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d7c5f4;
  *(code **)(lVar1 + 0xb8) = FUN_00d7c644;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(uint *)(lVar1 + 0xa4) = DAT_03133730;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00d7c4b8,0);
  return;
}




void FUN_00d7c4b8(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) == DAT_03133730) {
                    /* WARNING: Could not recover jumptable at 0x00d7c4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}




void FUN_00d7c4e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e6d0;
  param_1[5] = &PTR_FUN_0281e700;
  param_1[7] = 0;
  return;
}




void FUN_00d7c534(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00d7c53c(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d7c564(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d7c594(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d7c5b8(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d7c5e4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d7c5ec(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d7c5f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e6d0;
  param_1[5] = &PTR_FUN_0281e700;
  param_1[7] = 0;
  return param_1;
}




void FUN_00d7c644(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7c64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7c650(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_0281e730;
  puVar1 = param_1 + 5;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = (undefined8 *)((long)puVar1 + 0x19);
    *puVar1 = 0x101010101010101;
    puVar1 = puVar2;
  } while (puVar2 != (undefined8 *)((long)param_1 + 0x5a));
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  return;
}




void FUN_00d7c694(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  
  DAT_0312ec00 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ec00 + 1;
  lVar3 = param_1 + (ulong)DAT_0312ec00 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_00d7d6b0;
  *(code **)(lVar3 + 0xb8) = FUN_00d7d6fc;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar3 + 0xa4) = DAT_0312ec00;
  *(undefined4 *)(lVar3 + 0xa8) = 0x90;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) == 0) {
    pcVar2 = FUN_00d7ca30;
  }
  else {
    FUN_01986780(param_1,3,FUN_00d7c764,0);
    FUN_01986780(param_1,4,FUN_00d7c878,0);
    pcVar2 = FUN_00d7c900;
  }
  FUN_01986780(param_1,5,pcVar2,0);
  return;
}




void FUN_00d7c764(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  lVar4 = param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0x101010101010101;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c09220) {
    lVar4 = 0;
  }
  bVar3 = FUN_00d55870(lVar4);
  lVar2 = param_1 + 0x28;
  lVar1 = lVar2 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)bVar3;
  *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 1;
  bVar3 = FUN_00d55870(lVar4);
  lVar1 = lVar2 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)bVar3;
  *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 2;
  bVar3 = FUN_00d55870(lVar4);
  lVar1 = lVar2 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)bVar3;
  *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 4;
  bVar3 = FUN_00d55870(lVar4);
  lVar4 = lVar2 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)bVar3;
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 8;
  return;
}




void FUN_00d7c878(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
    lVar1 = 0;
  }
  if ((*(ushort *)(lVar1 + 0x2f4) & 0x1008) != 0) {
    lVar1 = 0;
    do {
      lVar2 = param_1 + 0x30 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
      *(byte *)(lVar2 + lVar1) = *(byte *)(lVar2 + lVar1) | 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 8);
  }
  FUN_00d7cae0(param_1);
  FUN_00d7cf08(param_1);
  return;
}




void FUN_00d7c900(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar5 = 0;
  lVar7 = param_1 + 0x38 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
  lVar8 = param_1 + 0x38 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19;
  do {
    lVar1 = lVar8 + uVar5;
    cVar2 = *(char *)(lVar7 + uVar5 + -0x10);
    cVar3 = *(char *)(lVar7 + uVar5 + -8);
    if (((cVar2 != *(char *)(lVar1 + -0x10)) || (cVar3 != *(char *)(lVar1 + -8))) ||
       (*(char *)(lVar7 + uVar5) != *(char *)(lVar8 + uVar5))) {
      FUN_00d0542c(auStack_70,*(undefined4 *)(lVar6 + 0x260),uVar5 & 0xffffffff,cVar2,cVar3,
                   *(undefined1 *)(lVar7 + uVar5));
      FUN_00ce20fc(auStack_70);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 8);
  uVar5 = (ulong)*(uint *)(param_1 + 0x5c);
  lVar6 = 0;
  do {
    lVar7 = param_1 + uVar5 * 0x19 + lVar6;
    if ((*(byte *)(lVar7 + 0x28) & ((*(byte *)(lVar7 + 0x38) | *(byte *)(lVar7 + 0x30)) ^ 0xff)) ==
        0) {
      uVar9 = FUN_009bc24c();
      *(undefined4 *)(param_1 + lVar6 * 4 + 0x6c) = uVar9;
      uVar5 = (ulong)*(uint *)(param_1 + 0x5c);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(uint *)(param_1 + 0x5c) = ~(uint)uVar5 & 1;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7ca30(long param_1)

{
  FUN_00d7d0cc();
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}




long FUN_00d7ca54(long param_1)

{
  return param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + 0x28;
}




void FUN_00d7ca70(long param_1,byte param_2,byte param_3,uint param_4)

{
  long lVar1;
  byte *pbVar2;
  
  lVar1 = param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)param_2;
  pbVar2 = (byte *)(lVar1 + 0x38);
  if ((param_4 & 1) == 0) {
    pbVar2 = (byte *)(lVar1 + 0x30);
  }
  *pbVar2 = *pbVar2 | param_3;
  return;
}




void FUN_00d7caa8(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  do {
    lVar2 = param_1 + 0x30 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
    *(byte *)(lVar2 + lVar1) = *(byte *)(lVar2 + lVar1) | param_2;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  return;
}




void FUN_00d7cae0(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  long lVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float local_718 [4];
  float local_708 [4];
  undefined1 auStack_6f8 [56];
  long local_6c0 [200];
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else if (*(int *)(*(long *)(lVar12 + 8) + 0xa4) != DAT_02c09220) {
    lVar12 = 0;
  }
  lVar13 = *(long *)(lVar12 + 0x40);
  fVar15 = (*(float *)(lVar13 + 0x1e4) + 1.0) *
           (*(float *)(lVar13 + 0x7c) +
           *(float *)(lVar13 + 0x130) * (*(float *)(lVar13 + 0x298) + 1.0));
  if (DAT_031aa1c4 <= fVar15) {
    fVar15 = DAT_031aa1c4;
  }
  uVar9 = *(ushort *)(lVar12 + 0x88) & 0x1f;
  fVar5 = DAT_031aa100._4_4_;
  if (DAT_031aa100._4_4_ <= fVar15) {
    fVar5 = fVar15;
  }
  if (uVar9 == 0x1f) {
    if (ABS(fVar5) < 0.1) goto LAB_00d7ced0;
  }
  else if ((ABS(fVar5) < 0.1) ||
          ((ushort)(*(short *)(lVar12 + (ulong)uVar9 * 0x38 + 0x90) - 3U) < 2)) goto LAB_00d7ced0;
  uVar10 = FUN_00d55870(lVar12);
  FUN_00d55794(lVar12,local_708,0);
  lVar12 = *(long *)(lVar12 + 0x38);
  cVar3 = *(char *)(lVar12 + 0x148);
  if (*(char *)(lVar12 + 0x149) == '\0') {
    bVar6 = *(char *)(param_1 + 0x68) != '\0';
  }
  else {
    bVar6 = true;
  }
  if (*(char *)(lVar12 + 0x14a) == '\0') {
    bVar7 = *(char *)(param_1 + 0x69) != '\0';
  }
  else {
    bVar7 = true;
  }
  FUN_00d4d728(fVar5,auStack_6f8,uVar10 & 0xffffffff,local_708);
  FUN_00d4d778(auStack_6f8,bVar7 ^ 1);
  FUN_00d4d770(auStack_6f8,param_1);
  uVar9 = FUN_00d9e840(auStack_6f8,local_6c0,200,0);
  if (uVar9 != 0) {
    uVar14 = 0;
    uVar10 = uVar10 & 0xff;
    do {
      for (lVar12 = *(long *)(local_6c0[uVar14] + 0x18); lVar12 != 0;
          lVar12 = *(long *)(lVar12 + 0x20)) {
        if (*(int *)(*(long *)(lVar12 + 8) + 0xa4) == DAT_0312ec00) {
          lVar13 = lVar12 + (ulong)(~*(uint *)(lVar12 + 0x5c) & 1) * 0x19 + uVar10;
          pbVar2 = (byte *)(lVar13 + 0x38);
          if (cVar3 == '\0') {
            pbVar2 = (byte *)(lVar13 + 0x30);
          }
          *pbVar2 = *pbVar2 | 1;
          if (bVar6) {
            lVar13 = lVar12 + (ulong)(~*(uint *)(lVar12 + 0x5c) & 1) * 0x19 + uVar10;
            *(byte *)(lVar13 + 0x30) = *(byte *)(lVar13 + 0x30) | 4;
          }
          if (bVar7 != false) {
            lVar12 = lVar12 + (ulong)(~*(uint *)(lVar12 + 0x5c) & 1) * 0x19 + uVar10;
            if (cVar3 == '\0') {
              *(byte *)(lVar12 + 0x30) = *(byte *)(lVar12 + 0x30) | 2;
            }
            else {
              *(byte *)(lVar12 + 0x38) = *(byte *)(lVar12 + 0x38) | 2;
            }
          }
          break;
        }
      }
      FUN_00d55794(local_6c0[uVar14],local_718,0);
      lVar12 = local_6c0[uVar14];
      lVar13 = *(long *)(lVar12 + 0x40);
      fVar15 = (*(float *)(lVar13 + 0x1e4) + 1.0) *
               (*(float *)(lVar13 + 0x7c) +
               *(float *)(lVar13 + 0x130) * (*(float *)(lVar13 + 0x298) + 1.0));
      if (DAT_031aa1c4 <= fVar15) {
        fVar15 = DAT_031aa1c4;
      }
      uVar1 = *(ushort *)(lVar12 + 0x88) & 0x1f;
      fVar5 = DAT_031aa100._4_4_;
      if (DAT_031aa100._4_4_ <= fVar15) {
        fVar5 = fVar15;
      }
      if (uVar1 == 0x1f) {
        if (0.1 <= ABS(fVar5)) {
LAB_00d7ce0c:
          fVar15 = (float)local_708._4_8_ - (float)local_718._4_8_;
          fVar16 = SUB84(local_708._4_8_,4) - SUB84(local_718._4_8_,4);
          if (bVar7 == false &&
              (local_708[0] - local_718[0]) * (local_708[0] - local_718[0]) + fVar15 * fVar15 +
              fVar16 * fVar16 <= fVar5 * fVar5) {
            bVar8 = FUN_00d55870();
            lVar13 = local_6c0[uVar14];
            lVar12 = param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)bVar8;
            pbVar2 = (byte *)(lVar12 + 0x30);
            if (*(char *)(*(long *)(lVar13 + 0x38) + 0x148) != '\0') {
              pbVar2 = (byte *)(lVar12 + 0x38);
            }
            *pbVar2 = *pbVar2 | 1;
            if (*(char *)(*(long *)(lVar13 + 0x38) + 0x149) != '\0') {
              uVar11 = FUN_00d55870();
              lVar12 = param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (uVar11 & 0xff);
              *(byte *)(lVar12 + 0x30) = *(byte *)(lVar12 + 0x30) | 4;
            }
          }
        }
      }
      else if ((0.1 <= ABS(fVar5)) &&
              (1 < (ushort)(*(short *)(lVar12 + (ulong)uVar1 * 0x38 + 0x90) - 3U)))
      goto LAB_00d7ce0c;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar9);
  }
LAB_00d7ced0:
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7cf08(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_1970 [800];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220) {
    lVar6 = 0;
  }
  uVar4 = FUN_01985cbc(lVar6,local_1970,800,DAT_031aa234);
  if (uVar4 != 0) {
    uVar9 = 0;
    do {
      uVar7 = local_1970[uVar9];
      uVar8 = 0;
      do {
        uVar5 = FUN_00d7d7e0(uVar7,uVar8 & 0xffffffff);
        if ((uVar5 & 1) != 0) {
          bVar3 = FUN_00d7d80c(uVar7);
          uVar5 = FUN_00d7d814(uVar7);
          lVar6 = 0x38;
          if ((uVar5 & 1) == 0) {
            lVar6 = 0x30;
          }
          lVar1 = param_1 + uVar8 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
          *(byte *)(lVar1 + lVar6) = *(byte *)(lVar1 + lVar6) | bVar3;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 8);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

