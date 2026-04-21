// functions/10017 — 396 functions
#include "GameKindred.h"




void FUN_1001706f4(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_40;
  void *local_38;
  
  uVar5 = *param_2;
  uVar9 = param_1[4];
  param_1[4] = uVar9 + 1;
  uVar7 = *param_1;
  if (uVar7 >> 1 < uVar9 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar7 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar7 = (uint)local_40;
    uVar10 = uVar9 - 1;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (uVar9 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar11 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar11) {
              uVar4 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar11 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar9;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      uVar7 = *param_1;
    }
  }
  uVar9 = 0;
  if (uVar7 != 0) {
    uVar9 = uVar5 / uVar7;
  }
  uVar11 = (ulong)(uVar5 - uVar9 * uVar7);
  lVar8 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar8 + uVar11 * 8 + 4);
  while (iVar2 != -1) {
    uVar9 = uVar7;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    iVar2 = *(int *)(lVar8 + uVar11 * 8 + 4);
  }
  puVar1 = (uint *)(lVar8 + uVar11 * 8);
  *puVar1 = uVar5;
  uVar5 = FUN_10004fc70(param_1,param_3);
  puVar1[1] = uVar5;
  return;
}




void FUN_100170868(void)

{
  if (DAT_101e3d0c8 != (void *)0x0) {
    DAT_10184e498 = 0;
    DAT_10184e4a0 = 0;
    DAT_10184e4a8 = 0;
    operator_delete(DAT_101e3d0c8);
  }
  DAT_101e3d0c8 = (void *)0x0;
  if (DAT_101e3d0d0 != (void *)0x0) {
    DAT_10184e4b0 = 0;
    DAT_10184e4b8 = 0;
    DAT_10184e4c0 = 0;
    operator_delete(DAT_101e3d0d0);
  }
  DAT_101e3d0d0 = (void *)0x0;
  FUN_1001708e0(&DAT_101e3d0d8);
  return;
}




void FUN_1001708e0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_10017094c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ce28;
  DAT_10184e498 = 0;
  return;
}




void FUN_100170964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ce48;
  DAT_10184e4a0 = 0;
  return;
}




void FUN_10017097c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ce68;
  DAT_10184e4a8 = 0;
  return;
}




void FUN_100170994(void *param_1)

{
  DAT_10184e498 = 0;
  operator_delete(param_1);
  return;
}




void FUN_1001709a0(void *param_1)

{
  DAT_10184e4a0 = 0;
  operator_delete(param_1);
  return;
}




void FUN_1001709ac(void *param_1)

{
  DAT_10184e4a8 = 0;
  operator_delete(param_1);
  return;
}




void FUN_1001709b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ce88;
  DAT_10184e4b0 = 0;
  return;
}




void FUN_1001709d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145cea8;
  DAT_10184e4b8 = 0;
  return;
}




void FUN_1001709e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145cec8;
  DAT_10184e4c0 = 0;
  return;
}




void FUN_100170a00(void *param_1)

{
  DAT_10184e4b0 = 0;
  operator_delete(param_1);
  return;
}




void FUN_100170a0c(void *param_1)

{
  DAT_10184e4b8 = 0;
  operator_delete(param_1);
  return;
}




void FUN_100170a18(void *param_1)

{
  DAT_10184e4c0 = 0;
  operator_delete(param_1);
  return;
}




void FUN_100170a24(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145ce68;
  lVar1 = 0x10;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0xb8;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x140);
  lVar1 = 0;
  param_1[0x1cc2] = 0x13f0000;
  param_1[0x1cc4] = 0;
  DAT_10184e4a0 = param_1 + 0x1cc6;
  DAT_10184e4a8 = param_1;
  *DAT_10184e4a0 = &PTR_FUN_10145ce48;
  lVar2 = 0xe640;
  do {
    lVar1 = lVar1 + 1;
    *(short *)((long)param_1 + lVar2) = (short)lVar1;
    lVar2 = lVar2 + 0x38;
  } while (lVar1 != 0x13ff);
  param_1[0xa8c8] = 0x13ff0000;
  param_1[0xa8ca] = 0;
  lVar1 = 0x54660;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x30;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  param_1[0xaecc] = 0xff0000;
  DAT_10184e498 = param_1 + 0xaece;
  *DAT_10184e498 = &PTR_FUN_10145ce28;
  lVar1 = 0x57680;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x48;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x40);
  param_1[0xb110] = 0x3f0000;
  param_1[0xb112] = 0;
  *(undefined4 *)(param_1 + 0xb114) = 0;
  return;
}




void FUN_100170b38(void)

{
  return;
}




void thunk_FUN_100170b70(void)

{
  FUN_100170b70();
  return;
}




void FUN_100170b44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100170b70();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_100170b70(void)

{
  FUN_100170b70();
  return;
}




void FUN_100170b5c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100170b70();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_100170b70(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_thunk_FUN_100170b70_10145cf30;
  plVar2 = param_1 + 1;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_100170be8(plVar2,lVar1 + -8);
    FUN_10016d3e8(DAT_101e3d0c8 + 0xe630,lVar1 + -8);
    lVar1 = *plVar2;
  }
  return param_1;
}




void FUN_100170be8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_100170c44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145cec8;
  lVar1 = 0x10;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0xc0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x140);
  lVar1 = 0;
  param_1[0x1e02] = 0x13f0000;
  param_1[0x1e04] = 0;
  DAT_10184e4b8 = param_1 + 0x1e06;
  DAT_10184e4c0 = param_1;
  *DAT_10184e4b8 = &PTR_FUN_10145cea8;
  lVar2 = 0xf040;
  do {
    lVar1 = lVar1 + 1;
    *(short *)((long)param_1 + lVar2) = (short)lVar1;
    lVar2 = lVar2 + 0x28;
  } while (lVar1 != 0x13ff);
  param_1[0x8208] = 0x13ff0000;
  param_1[0x820a] = 0;
  lVar1 = 0x41060;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x30;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  param_1[0x880c] = 0xff0000;
  DAT_10184e4b0 = param_1 + 0x880e;
  *DAT_10184e4b0 = &PTR_FUN_10145ce88;
  lVar1 = 0x44080;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0xf8;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x40);
  param_1[0x8fd0] = 0x3f0000;
  param_1[0x8fd2] = 0;
  *(undefined4 *)(param_1 + 0x8fd4) = 0;
  return;
}




void FUN_100170d5c(void)

{
  return;
}




void FUN_100170d64(void)

{
  return;
}




void FUN_100170d68(void)

{
  return;
}




void FUN_100170d6c(void)

{
  return;
}




void FUN_100170d74(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_100170d7c(void)

{
  return;
}




void FUN_100170d84(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016dda8();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_100170da8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100170db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_100170db4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100170dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




undefined8 FUN_100170dc0(long param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar3 = fVar1 - *(float *)(param_3 + 0x18);
  fVar2 = *(float *)(param_2 + 8);
  if (fVar2 < fVar3) {
    *(float *)(param_3 + 0x18) = fVar2 + *(float *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 8) = 0;
    return 1;
  }
  *(float *)(param_2 + 8) = fVar2 - fVar3;
  *(float *)(param_3 + 0x18) = fVar1;
  return 0;
}




void FUN_100170e00(void)

{
  return;
}




void FUN_100170e04(void)

{
  return;
}




void FUN_100170e0c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_100170e14(void)

{
  return;
}




undefined8 FUN_100170e1c(void)

{
  return 1;
}




undefined1  [16] FUN_100170e24(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  switch(param_1[2]) {
  case 0:
    break;
  case 1:
    uVar5 = (ulong)*param_1;
    uVar6 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x000100170e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)();
    return auVar4;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_1000f3914(param_2);
                    /* WARNING: Could not recover jumptable at 0x000100170eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*UNRECOVERED_JUMPTABLE)();
    return auVar4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x000100170ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2);
    return auVar4;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x000100170ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2,param_3);
    return auVar4;
  case 6:
    plVar2 = (long *)FUN_1000f3980(param_2);
    if (plVar2 != (long *)0x0) {
      uVar6 = *(undefined8 *)param_1;
      uVar1 = FUN_1004d2524(uVar6);
      uVar6 = FUN_100015208(uVar6,uVar1,0x12345678);
      puVar3 = (uint *)(**(code **)(*plVar2 + 0x18))(plVar2,uVar6);
      uVar5 = (ulong)*puVar3;
      uVar6 = 0;
    }
    break;
  default:
    FUN_1004d22dc(0);
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_100170f54(void)

{
  return;
}




void FUN_100170f5c(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *param_2;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_1004d2524(uVar5);
  uVar5 = FUN_100015208(uVar5,uVar1,0x12345678);
  piVar3 = (int *)(**(code **)(*(long *)(lVar4 + 0x68) + 0x10))((long *)(lVar4 + 0x68),uVar5);
  iVar2 = FUN_100170fe4(param_1 + 0x18,param_2,0);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar2 = *piVar3 + iVar2;
  }
  *piVar3 = iVar2;
  return;
}




ulong FUN_100170fe4(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)param_1[2];
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x000100171044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_1000f3914(param_2);
                    /* WARNING: Could not recover jumptable at 0x000100171068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x000100171080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00010017109c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    plVar3 = (long *)FUN_1000f3980(param_2);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar5 = *(undefined8 *)param_1;
      uVar1 = FUN_1004d2524(uVar5);
      uVar5 = FUN_100015208(uVar5,uVar1,0x12345678);
      puVar4 = (uint *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar5);
      uVar2 = (ulong)*puVar4;
    }
    break;
  default:
    FUN_1004d22dc(0);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 * FUN_1001710f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d088;
  FUN_10016cfa8(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  return param_1;
}




void FUN_100171138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d088;
  FUN_10016cfa8(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_100171178(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016e25c();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_10017119c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001711a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_1001711a8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




undefined8 FUN_1001711b4(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_458;
  undefined4 local_450;
  undefined1 auStack_448 [1032];
  
  if ((char)param_3[5] == '\0') {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar1 = FUN_10016d96c();
      param_3[3] = lVar1;
      local_458 = *param_2;
      local_450 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_448,param_2 + 2);
      FUN_10016d060((long *)(param_1 + 0x10),param_3[3]);
      FUN_10016d0e4(param_3[3],&local_458);
    }
    lVar1 = FUN_10016d548();
    param_3[4] = lVar1;
    local_458 = *param_2;
    local_450 = *(undefined4 *)(param_2 + 1);
    FUN_10048fb78(auStack_448,param_2 + 2);
    FUN_10016d210(param_1 + 0x28,param_3[4]);
    lVar2 = param_3[4];
    lVar1 = 0;
    if (*(long *)(lVar2 + 8) != 0) {
      lVar1 = *(long *)(lVar2 + 8) + -8;
    }
    *(long *)(lVar2 + 0x28) = lVar1;
    FUN_10003fff4(lVar2,&local_458);
    *(undefined1 *)(param_3 + 5) = 1;
  }
  else if (*(long *)(param_3[4] + 0x28) != 0) {
    local_458 = *param_2;
    local_450 = *(undefined4 *)(param_2 + 1);
    FUN_10048fb78(auStack_448,param_2 + 2);
    FUN_10003fff4(param_3[4],&local_458);
  }
  if (*(long *)(param_3[4] + 0x28) == 0) {
    if (param_3[3] != 0) {
      local_458 = *param_2;
      local_450 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_448,param_2 + 2);
      FUN_10016d148(param_3[3],&local_458);
    }
    (**(code **)(*param_3 + 0x10))(param_3);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_100171338(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_448;
  undefined4 local_440;
  undefined1 auStack_438 [1032];
  
  if ((char)param_3[5] != '\0') {
    if (*(long *)(param_3[4] + 0x28) != 0) {
      local_448 = *param_2;
      local_440 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_438,param_2 + 2);
      lVar3 = param_3[4];
      lVar2 = *(long *)(lVar3 + 0x28);
      if (lVar2 != 0) {
        plVar1 = *(long **)(lVar2 + 0x10);
        (**(code **)(*plVar1 + 0x20))(plVar1,&local_448);
        *(undefined8 *)(lVar3 + 0x28) = 0;
      }
    }
    if (param_3[3] != 0) {
      local_448 = *param_2;
      local_440 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_438,param_2 + 2);
      FUN_10016d148(param_3[3],&local_448);
    }
    (**(code **)(*param_3 + 0x10))(param_3);
  }
  return;
}




void thunk_FUN_10017145c(void)

{
  FUN_10017145c();
  return;
}




void FUN_100171408(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017145c();
  operator_delete(pvVar1);
  return;
}




void FUN_10017141c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10016da10();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10016d5e8();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_10017145c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10017145c_10145d0d0;
  if (param_1[3] != 0) {
    FUN_10016da10();
  }
  if (param_1[4] != 0) {
    FUN_10016d5e8();
  }
  return param_1;
}




undefined8 * FUN_1001714a0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10145d0f8;
  lVar1 = 0x40;
  do {
    FUN_10016cfa8((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x10);
  FUN_10016ce84(param_1 + 2);
  return param_1;
}




void FUN_1001714ec(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10145d0f8;
  lVar1 = 0x40;
  do {
    FUN_10016cfa8((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x10);
  FUN_10016ce84(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_100171538(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016e3c8();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_10017155c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100171564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_100171568(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100171570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




undefined8 FUN_100171574(long param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 auStack_468 [1032];
  
  if ((char)param_3[6] == '\0') {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar4 = FUN_10016d96c();
      param_3[3] = lVar4;
      local_478 = *param_2;
      local_470 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_468,param_2 + 2);
      FUN_10016d060((long *)(param_1 + 0x10),param_3[3]);
      FUN_10016d0e4(param_3[3],&local_478);
    }
    lVar4 = 0;
    bVar1 = true;
    do {
      bVar5 = bVar1;
      lVar2 = FUN_10016d548();
      param_3[lVar4 + 4] = lVar2;
      local_478 = *param_2;
      local_470 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_468,param_2 + 2);
      FUN_10016d210(param_1 + lVar4 * 0x18 + 0x28,param_3[lVar4 + 4]);
      lVar2 = param_3[lVar4 + 4];
      lVar4 = 0;
      if (*(long *)(lVar2 + 8) != 0) {
        lVar4 = *(long *)(lVar2 + 8) + -8;
      }
      *(long *)(lVar2 + 0x28) = lVar4;
      FUN_10003fff4(lVar2,&local_478);
      lVar4 = 1;
      bVar1 = false;
    } while (bVar5);
    *(undefined1 *)(param_3 + 6) = 1;
  }
  else {
    lVar4 = 0;
    bVar1 = true;
    do {
      bVar5 = bVar1;
      if (*(long *)(param_3[lVar4 + 4] + 0x28) != 0) {
        local_478 = *param_2;
        local_470 = *(undefined4 *)(param_2 + 1);
        FUN_10048fb78(auStack_468,param_2 + 2);
        FUN_10003fff4(param_3[lVar4 + 4],&local_478);
      }
      lVar4 = 1;
      bVar1 = false;
    } while (bVar5);
  }
  lVar4 = 0;
  bVar1 = true;
  bVar5 = true;
  do {
    bVar6 = bVar5;
    bVar1 = (bool)(*(long *)(param_3[lVar4 + 4] + 0x28) == 0 & bVar1);
    lVar4 = 1;
    bVar5 = false;
  } while (bVar6);
  if (bVar1) {
    if (param_3[3] != 0) {
      local_478 = *param_2;
      local_470 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_468,param_2 + 2);
      FUN_10016d148(param_3[3],&local_478);
    }
    (**(code **)(*param_3 + 0x10))(param_3);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_100171784(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_468;
  undefined4 local_460;
  undefined1 auStack_458 [1032];
  
  if ((char)param_3[6] != '\0') {
    lVar3 = 0;
    bVar1 = true;
    do {
      bVar4 = bVar1;
      if (*(long *)(param_3[lVar3 + 4] + 0x28) != 0) {
        local_468 = *param_2;
        local_460 = *(undefined4 *)(param_2 + 1);
        FUN_10048fb78(auStack_458,param_2 + 2);
        lVar5 = param_3[lVar3 + 4];
        lVar3 = *(long *)(lVar5 + 0x28);
        if (lVar3 != 0) {
          plVar2 = *(long **)(lVar3 + 0x10);
          (**(code **)(*plVar2 + 0x20))(plVar2,&local_468);
          *(undefined8 *)(lVar5 + 0x28) = 0;
        }
      }
      lVar3 = 1;
      bVar1 = false;
    } while (bVar4);
    if (param_3[3] != 0) {
      local_468 = *param_2;
      local_460 = *(undefined4 *)(param_2 + 1);
      FUN_10048fb78(auStack_458,param_2 + 2);
      FUN_10016d148(param_3[3],&local_468);
    }
    (**(code **)(*param_3 + 0x10))(param_3);
  }
  return;
}




void thunk_FUN_100171900(void)

{
  FUN_100171900();
  return;
}




void FUN_100171888(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100171900();
  operator_delete(pvVar1);
  return;
}




void FUN_10017189c(long param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10016da10();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    plVar4 = (long *)(param_1 + lVar2 * 8 + 0x20);
    if (*plVar4 != 0) {
      FUN_10016d5e8();
      *plVar4 = 0;
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar3);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}




undefined8 * FUN_100171900(undefined8 *param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  
  *param_1 = &PTR_thunk_FUN_100171900_10145d140;
  if (param_1[3] != 0) {
    FUN_10016da10();
  }
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    if (param_1[lVar2 + 4] != 0) {
      FUN_10016d5e8();
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar3);
  return param_1;
}




undefined8 * FUN_100171960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d168;
  FUN_10016cfa8(param_1 + 0x14);
  FUN_10016cfa8(param_1 + 0x11);
  return param_1;
}




void FUN_1001719a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d168;
  FUN_10016cfa8(param_1 + 0x14);
  FUN_10016cfa8(param_1 + 0x11);
  operator_delete(param_1);
  return;
}




void FUN_1001719e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016e960();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_100171a04(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100171a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_100171a10(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100171a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




bool FUN_100171a1c(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  if ((char)param_3[4] == '\0') {
    lVar2 = FUN_10016d548();
    lVar5 = 0;
    param_3[3] = lVar2;
    bVar1 = true;
    do {
      bVar6 = bVar1;
      plVar3 = *(long **)(param_1 + lVar5 * 0x38 + 0x18);
      if (plVar3 == (long *)0x0) break;
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      if ((uVar4 & 1) == 0) {
        param_1 = param_1 + 0xa0;
        goto LAB_100171aac;
      }
      lVar5 = 1;
      bVar1 = false;
    } while (bVar6);
    param_1 = param_1 + 0x88;
LAB_100171aac:
    FUN_10016d210(param_1,param_3[3]);
    lVar5 = param_3[3];
    lVar2 = 0;
    if (*(long *)(lVar5 + 8) != 0) {
      lVar2 = *(long *)(lVar5 + 8) + -8;
    }
    *(long *)(lVar5 + 0x28) = lVar2;
    FUN_10003fff4(lVar5,param_2);
    *(undefined1 *)(param_3 + 4) = 1;
  }
  else if (*(long *)(param_3[3] + 0x28) != 0) {
    FUN_10003fff4(param_3[3],param_2);
  }
  bVar1 = *(long *)(param_3[3] + 0x28) == 0;
  if (bVar1) {
    (**(code **)(*param_3 + 0x10))(param_3);
  }
  return !bVar1;
}




void FUN_100171b18(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (((char)param_3[4] != '\0') && (lVar1 = param_3[3], lVar1 != 0)) {
    if (*(long *)(lVar1 + 0x28) != 0) {
      (**(code **)(**(long **)(*(long *)(lVar1 + 0x28) + 0x10) + 0x20))();
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000100171b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  return;
}




void FUN_100171b78(void)

{
  return;
}




undefined8 FUN_100171b80(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  bVar5 = false;
  do {
    plVar2 = *(long **)(param_1 + lVar4 * 0x38 + 8);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    lVar4 = 1;
    bVar1 = !bVar5;
    bVar5 = true;
  } while (bVar1 && (((uint)uVar3 ^ 0xffffffff) & 1) == 0);
  return uVar3;
}




undefined8 * FUN_100171be8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d1d8;
  if (param_1[3] != 0) {
    FUN_10016d5e8();
  }
  return param_1;
}




void FUN_100171c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d1d8;
  if (param_1[3] != 0) {
    FUN_10016d5e8();
  }
  operator_delete(param_1);
  return;
}




void FUN_100171c58(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10016d5e8();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_100171c88(void)

{
  return;
}




void FUN_100171c90(long param_1,undefined8 *param_2)

{
  FUN_10003f810(*param_2,param_1 + 0x10);
  return;
}




void FUN_100171ca0(void)

{
  return;
}




void FUN_100171ca8(long param_1)

{
  FUN_1000b8fa0(*(undefined4 *)(param_1 + 0x10),1);
  return;
}




void FUN_100171cb4(void)

{
  return;
}




void FUN_100171cbc(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  bVar5 = false;
  do {
    plVar3 = *(long **)(param_1 + lVar4 * 0x38 + 0x18);
    if (plVar3 == (long *)0x0) {
      return;
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    lVar4 = 1;
    bVar1 = !bVar5;
    bVar5 = true;
  } while (bVar1 && ((uVar2 ^ 1) & 1) == 0);
  return;
}




undefined8 * FUN_100171d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d2b8;
  FUN_10016ce84(param_1 + 0x14);
  FUN_10016ce84(param_1 + 0x11);
  return param_1;
}




void FUN_100171d60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d2b8;
  FUN_10016ce84(param_1 + 0x14);
  FUN_10016ce84(param_1 + 0x11);
  operator_delete(param_1);
  return;
}




void FUN_100171da0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016ed88();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_100171dc4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100171dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_100171dd0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100171dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_100171ddc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100171de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_100171de8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  uVar2 = FUN_10016d96c();
  lVar5 = 0;
  *(undefined8 *)(param_3 + 0x18) = uVar2;
  bVar1 = true;
  do {
    bVar6 = bVar1;
    plVar3 = *(long **)(param_1 + lVar5 * 0x38 + 0x18);
    if (plVar3 == (long *)0x0) break;
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_3 + 0x20) = 0;
      param_1 = param_1 + 0xa0;
      goto LAB_100171e64;
    }
    lVar5 = 1;
    bVar1 = false;
  } while (bVar6);
  *(undefined1 *)(param_3 + 0x20) = 1;
  param_1 = param_1 + 0x88;
LAB_100171e64:
  FUN_10016d060(param_1,*(undefined8 *)(param_3 + 0x18));
  FUN_10016d0e4(*(undefined8 *)(param_3 + 0x18),param_2);
  return;
}




void FUN_100171e88(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3[3] != 0) {
    FUN_10016d148();
                    /* WARNING: Could not recover jumptable at 0x000100171eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  return;
}




void FUN_100171ec8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  lVar4 = 0;
  bVar5 = false;
  do {
    plVar3 = *(long **)(param_1 + lVar4 * 0x38 + 0x18);
    if (plVar3 == (long *)0x0) {
      uVar2 = 1;
      break;
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    lVar4 = 1;
    bVar1 = !bVar5;
    bVar5 = true;
  } while (bVar1 && ((uVar2 ^ 0xffffffff) & 1) == 0);
  if (*(byte *)(param_3 + 0x20) != uVar2) {
    FUN_10016d148(*(undefined8 *)(param_3 + 0x18),param_2);
    FUN_10016da10(*(undefined8 *)(param_3 + 0x18));
    *(char *)(param_3 + 0x20) = (char)uVar2;
    lVar4 = 0x88;
    if (uVar2 == 0) {
      lVar4 = 0xa0;
    }
    FUN_10016d060(param_1 + lVar4,*(undefined8 *)(param_3 + 0x18));
    FUN_10016d0e4(*(undefined8 *)(param_3 + 0x18),param_2);
    return;
  }
  FUN_10016d1b4(*(undefined8 *)(param_3 + 0x18),param_2);
  return;
}




undefined8 * FUN_100171fbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d310;
  if (param_1[3] != 0) {
    FUN_10016da10();
  }
  return param_1;
}




void FUN_100171ff4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145d310;
  if (param_1[3] != 0) {
    FUN_10016da10();
  }
  operator_delete(param_1);
  return;
}




void FUN_10017202c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10016da10();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_10017205c(void)

{
  return;
}




void FUN_100172064(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016f018();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_100172088(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100172090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_100172094(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010017209c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_1001720a0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001720a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_1001720ac(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004397d8(param_2 + 0x10);
  if (iVar1 == 1) {
    uVar3 = FUN_1004397e0(param_2 + 0x10,0);
    uVar2 = FUN_10048e640();
    *(undefined4 *)(param_3 + 0x18) = uVar2;
    thunk_FUN_100465eb0(uVar3,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}




void FUN_100172118(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1004397d8(param_2 + 0x10);
  if (iVar1 == 1) {
    uVar2 = FUN_1004397e0(param_2 + 0x10,0);
    thunk_FUN_100465eb0(uVar2,*(undefined4 *)(param_3 + 0x18));
    return;
  }
  return;
}




void FUN_100172164(void)

{
  return;
}




void FUN_100172168(void)

{
  return;
}




void FUN_100172170(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_100172178(void)

{
  return;
}




void FUN_100172180(long param_1)

{
  FUN_1000b8fa0(*(undefined4 *)(param_1 + 0x10),0);
  return;
}




void FUN_10017218c(long param_1)

{
  FUN_1000b8fa0(*(undefined4 *)(param_1 + 0x10),1);
  return;
}




void FUN_100172198(void)

{
  return;
}




void FUN_1001721a0(void)

{
  thunk_FUN_100027a90(1);
  return;
}




void FUN_1001721a8(void)

{
  thunk_FUN_100027a90(0);
  return;
}




void FUN_1001721b0(void)

{
  return;
}




void FUN_1001721b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016f27c();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_1001721dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001721e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_1001721e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001721f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_1001721f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001721fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_100172200(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  lVar3 = FUN_1010a1540(DAT_10184dad8,0);
  plVar5 = (long *)0x0;
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x40);
  }
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar3 != 0) {
    plVar1 = plVar5 + 1;
  }
  lVar2 = *plVar1;
  *(long **)(param_3 + 0x18) = plVar5;
  *(int *)(param_3 + 0x20) = (int)lVar2;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else if ((int)lVar2 == (int)plVar5[1]) {
    uVar4 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    uVar4 = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
  }
  FUN_1000451ac(uVar4,param_1[2],1);
  if (*(char *)((long)param_1 + 0x4c) != '\0') {
    plVar5 = *(long **)(param_3 + 0x18);
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      if (*(int *)(param_3 + 0x20) == (int)plVar5[1]) {
        uVar4 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        uVar4 = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
      }
    }
    FUN_100045764(0,uVar4);
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
  plVar5 = *(long **)(param_3 + 0x18);
  uVar4 = 0;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_3 + 0x20) == (int)plVar5[1]) {
      uVar4 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      uVar4 = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
    }
  }
  FUN_1000453bc(uVar4);
  return;
}




void FUN_100172344(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_3 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_3 + 0x20) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_3 + 0x18);
        if (*(char *)(param_1 + 0x4d) != '\0') {
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_3 + 0x20) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_3 + 0x18) = 0;
              *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
            }
          }
          FUN_1000453f0(uVar3);
          return;
        }
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_3 + 0x18) = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
          }
        }
        FUN_1000453cc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10017243c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  uint local_88 [2];
  long local_80;
  char *local_78;
  long local_70;
  undefined4 local_68;
  
  plVar3 = *(long **)(param_3 + 0x18);
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_3 + 0x20) != (int)plVar3[1]) {
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
    return;
  }
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  if (lVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    (**(code **)(param_1 + 0x20))(param_2,*(undefined4 *)(param_1 + 0x40),&local_70);
    plVar3 = *(long **)(param_3 + 0x18);
    uVar5 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
        uVar5 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        uVar5 = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
      }
    }
    FUN_100045474(uVar5,&local_70);
  }
  else {
    lVar4 = (**(code **)(param_1 + 0x18))(param_2);
    if (lVar4 == 0) {
      plVar3 = *(long **)(param_3 + 0x18);
      uVar5 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
          uVar5 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          uVar5 = 0;
          *(undefined8 *)(param_3 + 0x18) = 0;
          *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
        }
      }
      FUN_1010a01dc(uVar5);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 3) {
        plVar3 = *(long **)(param_3 + 0x18);
        uVar5 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
            uVar5 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            uVar5 = 0;
            *(undefined8 *)(param_3 + 0x18) = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
          }
        }
        FUN_100045684(uVar5,lVar4,*(undefined8 *)(param_1 + 0x38),1);
      }
      else if (iVar1 == 2) {
        plVar3 = *(long **)(param_3 + 0x18);
        uVar5 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
            uVar5 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            uVar5 = 0;
            *(undefined8 *)(param_3 + 0x18) = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
          }
        }
        pcVar8 = *(char **)(param_1 + 0x38);
        if (pcVar8 == (char *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0x811c9dc5;
          cVar2 = *pcVar8;
          while (cVar2 != '\0') {
            pcVar8 = pcVar8 + 1;
            uVar7 = (uVar7 ^ (int)cVar2) * 0x1000193;
            cVar2 = *pcVar8;
          }
        }
        local_70 = CONCAT44(local_70._4_4_,uVar7);
        FUN_10004560c(uVar5,lVar4,&local_70,1);
      }
      else if (iVar1 == 1) {
        plVar3 = *(long **)(param_3 + 0x18);
        uVar5 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
            uVar5 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            uVar5 = 0;
            *(undefined8 *)(param_3 + 0x18) = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
          }
        }
        FUN_1000455a4(uVar5,lVar4,1);
      }
    }
  }
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    local_70 = 0;
    local_68 = 0;
    (**(code **)(param_1 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x44),&local_70);
    plVar3 = *(long **)(param_3 + 0x18);
    uVar5 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
        uVar5 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        uVar5 = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
      }
    }
    FUN_100045ab4(uVar5,&local_70);
    return;
  }
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    return;
  }
  local_78 = (char *)0x0;
  local_70 = 0;
  local_80 = 0;
  (**(code **)(param_1 + 0x30))(param_2,&local_70,&local_78,&local_80);
  if (local_70 == 0) {
    return;
  }
  if (local_78 == (char *)0x0) {
    plVar3 = *(long **)(param_3 + 0x18);
    if (local_80 != 0) {
      if (plVar3 == (long *)0x0) {
        uVar5 = 0;
      }
      else if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
        uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      else {
        uVar5 = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
      }
      lVar4 = local_70;
      uVar6 = FUN_1010acd98(local_80);
      FUN_100045a68(uVar5,lVar4,uVar6);
      return;
    }
    if (plVar3 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_3 + 0x20) == (int)plVar3[1]) {
      uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    else {
      uVar5 = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
    }
    FUN_1000458d0(uVar5,local_70);
    return;
  }
  plVar3 = *(long **)(param_3 + 0x18);
  if (plVar3 == (long *)0x0) {
LAB_1001727ec:
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_3 + 0x20) != (int)plVar3[1]) {
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
      goto LAB_1001727ec;
    }
    uVar5 = (**(code **)(*plVar3 + 0x10))();
    if (local_78 == (char *)0x0) {
      local_88[0] = 0;
      goto LAB_100172820;
    }
  }
  local_88[0] = 0x811c9dc5;
  cVar2 = *local_78;
  pcVar8 = local_78;
  while (cVar2 != '\0') {
    pcVar8 = pcVar8 + 1;
    local_88[0] = (local_88[0] ^ (int)cVar2) * 0x1000193;
    cVar2 = *pcVar8;
  }
LAB_100172820:
  FUN_100045a88(uVar5,local_70,local_88);
  return;
}




void FUN_1001728c4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_1001728cc(long param_1)

{
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}




void FUN_1001728d8(long param_1)

{
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}




void FUN_1001728e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}




void FUN_1001728f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return;
}




void FUN_100172908(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 3;
  return;
}




void FUN_10017291c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}




void FUN_10017292c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  return;
}




void FUN_100172938(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_100172940(void)

{
  return;
}




void FUN_100172948(void)

{
  return;
}




void FUN_100172958(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016cf28();
  operator_delete(pvVar1);
  return;
}




void FUN_100172974(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016cf28();
  operator_delete(pvVar1);
  return;
}




void FUN_100172988(long param_1,undefined8 param_2,int *param_3)

{
  if (*(int *)(param_1 + 0x40) == *param_3) {
    FUN_10016cb20();
    return;
  }
  return;
}




void FUN_1001729a4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016cf28();
  operator_delete(pvVar1);
  return;
}




void FUN_1001729b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_438;
  undefined4 local_430;
  undefined1 auStack_428 [1032];
  
  local_430 = 0;
  local_438 = param_2;
  FUN_10048fb50(auStack_428);
  FUN_10016c4ec(param_1,&local_438);
  return;
}




void FUN_1001729fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_438;
  undefined4 local_430;
  undefined1 auStack_428 [1032];
  
  local_430 = 0;
  local_438 = param_2;
  FUN_10048fb50(auStack_428);
  FUN_10016c580(param_1,&local_438);
  return;
}




undefined8 * FUN_100172a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  return param_1;
}




void FUN_100172a80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_100172ac0(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_100172aec(void)

{
  if ((DAT_10184dc40 & 1) == 0) {
    DAT_10184dc38 = DAT_101872e38;
    DAT_10184dc40 = 1;
  }
  return;
}




void FUN_100172b18(void)

{
  if ((DAT_10184df38 & 1) == 0) {
    DAT_10184df30 = DAT_101872e38;
    DAT_10184df38 = 1;
  }
  return;
}




void FUN_100172b44(void)

{
  if ((DAT_10184e4d0 & 1) == 0) {
    DAT_10184e4c8 = DAT_101872e38;
    DAT_10184e4d0 = 1;
  }
  return;
}




void FUN_100172b70(void)

{
  DAT_101e3cf50 = 0xff;
  DAT_101e3cf52 = 0xffff;
  DAT_101e3cf54 = 0xffff;
  DAT_101e3cf56 = 0xffbc9c44;
  DAT_101e3cf5a = 0xff1166f2;
  DAT_101e3cf5e = 0xffe0e0e0;
  DAT_101e3cf62 = 0xffa0a0a0;
  DAT_101e3cf66 = 0xff8c8c8c;
  DAT_101e3cf6a = 0xff322213;
  DAT_101e3cf6e = 0xff091911;
  DAT_101e3cf72 = 0xff170c19;
  DAT_101e3cf76 = 0xff241a14;
  DAT_101e3cf7a = 0xff14171c;
  DAT_101e3cf7e = 0xff221911;
  DAT_101e3cf82 = 0xff1a1416;
  DAT_101e3cf86 = 0xff121414;
  DAT_101e3cf8a = 0xff1a1809;
  DAT_101e3cf8e = 0xff141414;
  DAT_101e3cf92 = 0xff141414;
  DAT_101e3cf96 = 0xff2929c0;
  DAT_101e3cf9a = 0xff283082;
  DAT_101e3cf9e = 0xff5262cc;
  DAT_101e3cfa2 = 0xff283082;
  DAT_101e3cfa6 = 0xff5262cc;
  DAT_101e3cfaa = 0xff745c42;
  DAT_101e3cfae = 0xff184155;
  DAT_101e3cfb2 = 0xff92665e;
  DAT_101e3cfb6 = 0xffbc9c44;
  DAT_101e3cfba = 0xffbbae56;
  DAT_101e3cfbe = 0xff8b7b01;
  DAT_101e3cfc2 = 0xff90b3ef;
  DAT_101e3cfc6 = 0xff728ebe;
  DAT_101e3cfca = 0xff19459d;
  DAT_101e3cfce = 0xff9d877b;
  DAT_101e3cfd2 = 0xffcbb1a3;
  DAT_101e3cfd6 = 0xff3f6fb5;
  DAT_101e3cfda = 0xffc5c5c5;
  DAT_101e3cfde = 0xff4fc1f1;
  DAT_101e3cfe2 = 0xff606060;
  DAT_101e3cfe6 = 0xffc5ff7b;
  DAT_101e3cfea = 0xff5271eb;
  DAT_101e3cfee = 0xfffae076;
  DAT_101e3cff2 = 0xff3ac8f6;
  DAT_101e3cff6 = 0xffaaaaaa;
  DAT_101e3cffa = 0xffe19400;
  DAT_101e3cffe = 0xffe19400;
  DAT_101e3d002 = 0xffe550b2;
  DAT_101e3d006 = 0xfff22ae8;
  DAT_101e3d00a = 0xff005ae1;
  DAT_101e3d00e = 0xff1addfa;
  DAT_101e3d012 = 0xff2424b3;
  DAT_101e3d016 = 0xff2424b3;
  DAT_101e3d01a = 0xff646464;
  DAT_101e3d01e = 0xff92665e;
  DAT_101e3d022 = 0xff646037;
  DAT_101e3d028 = 0xffffffff;
  DAT_101e3d02c = 0xff1111a1;
  DAT_101e3d030 = 0xff321ee1;
  DAT_101e3d034 = 0xffc8c8c8;
  DAT_101e3d038 = 0xff321ee1;
  DAT_101e3d03c = 0xff7fe801;
  DAT_101e3d040 = 0xffffffff;
  DAT_101e3d044 = 0xff6259b3;
  DAT_101e3d048 = 0xff506e73;
  DAT_101e3d04c = 0xff9dbf86;
  DAT_101e3d050 = 0xffa35244;
  DAT_101e3d054 = 0xffca828e;
  DAT_101e3d058 = 0xffa6a6a6;
  DAT_101e3d05c = 0xffa6a6a6;
  DAT_101e3d060 = 0xffffffff;
  DAT_101e3d064 = 0xff88ea2f;
  DAT_101e3d068 = 0xff8c8c8c;
  DAT_101e3d06c = 0xffffb400;
  DAT_101e3d070 = 0xffff00ff;
  DAT_101e3d074 = 0xff00aded;
  DAT_101e3d078 = 0xff33d3ff;
  DAT_101e3d07c = 0xff7fe801;
  DAT_101e3d080 = 0xff282828;
  DAT_101e3d084 = 0xfff0f0f0;
  DAT_101e3d088 = 0xffa4781e;
  DAT_101e3d08c = 0xffa6654b;
  DAT_101e3d090 = 0xff93435b;
  DAT_101e3d094 = 0xff387f9c;
  DAT_101e3d098 = 0xffa3781e;
  DAT_101e3d09c = 0xffffd18a;
  DAT_101e3d0a0 = 0xffff61f7;
  DAT_101e3d0a4 = 0xff5de1f2;
  DAT_101e3d0a8 = 0xff80eaff;
  DAT_101e3d0ac = 0xff32e00e;
  DAT_101e3d0b0 = 0xff5a3c10;
  DAT_101e3d0b4 = 0xff330b03;
  DAT_101e3d0b8 = 0xff33031d;
  DAT_101e3d0bc = 0xff032433;
  DAT_101e3d0c0 = 0xff9e8e8d;
  DAT_101e3d0d8 = 0;
  DAT_101e3d0e0 = 0;
  DAT_101e3d0e8 = 0;
  DAT_101e3d0f0 = 0;
  DAT_101e3d0f8 = 0;
  DAT_101e3d100 = 0xffffffff;
  ___cxa_atexit(thunk_FUN_10004fbec,&DAT_101e3d0d8,0x100000000);
  return;
}




void FUN_100173250(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10017329c(param_2);
  uVar2 = FUN_1001732ec(lVar1 + 0x10);
  uVar2 = FUN_1000bd484(uVar2,"Debug_FinalShotZoomIn");
  uVar2 = FUN_1000bd48c(uVar2,"Debug_FinalShotZoomIn_NotTriggered");
  uVar2 = FUN_1000bd48c(uVar2,"Debug_FinalShotZoomIn_Triggered");
  FUN_1000bd48c(uVar2,"Debug_FinalShotZoomIn_Panning");
  return;
}




void FUN_10017329c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f9c8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001732ec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016eecc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10017333c(void)

{
  return;
}




void FUN_100173340(void)

{
  long lVar1;
  
  lVar1 = FUN_100173358();
  FUN_1001733a8(lVar1 + 0x10);
  return;
}




void FUN_100173358(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f7a4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001733a8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016dab8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001733f8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_10017342c(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x40e00000;
  FUN_10017347c(lVar1 + 0x10);
  return;
}




void FUN_10017342c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016dd14();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10017347c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016db4c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001734cc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x40400000;
  lVar2 = FUN_100173544(lVar1);
  uVar3 = FUN_100173594(lVar2 + 0x10);
  local_30[0] = 0xd;
  local_28 = 1;
  FUN_1000b8d9c(uVar3,local_30);
  do {
    FUN_1001735e4(lVar2 + 0x28);
  } while (lVar2 + 0x28 == lVar1);
  return;
}




void FUN_100173544(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e1b4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173594(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f644();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001735e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016de48();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173634(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *local_60;
  undefined4 local_58;
  
  (**(code **)*param_3)(param_3,"RecommendedAbility");
  uVar1 = FUN_1004d2524("RecommendedAbility");
  uVar2 = FUN_100015208("RecommendedAbility",uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*param_3 + 0x10))(param_3,uVar2);
  *puVar3 = 0;
  lVar4 = FUN_100173358(param_1);
  lVar5 = FUN_10017342c(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 0x10) = 0x40400000;
  lVar4 = FUN_100173794(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x10) = 0x933dc2c5;
  lVar5 = FUN_1001737e4(param_1);
  lVar4 = lVar5 + 0x10;
  *(undefined4 *)(lVar5 + 0x40) = 0x933dc2c5;
  lVar5 = FUN_100173544(lVar4);
  uVar2 = FUN_100173594(lVar5 + 0x10);
  local_60 = FUN_1000f3afc;
  local_58 = 2;
  FUN_1000b8d9c(uVar2,&local_60);
  lVar5 = lVar5 + 0x28;
  do {
    lVar6 = FUN_100173834(lVar5);
    *(char **)(lVar6 + 0x10) = "RecommendedAbility";
    *(code **)(lVar6 + 0x18) = thunk_FUN_1000f3afc;
    *(undefined4 *)(lVar6 + 0x20) = 2;
    *(byte *)(lVar6 + 0x28) = *(byte *)(lVar6 + 0x28) & 0xfe;
    lVar6 = FUN_100173884(lVar5);
    lVar6 = FUN_100173f40(lVar6 + 0x10);
    *(char **)(lVar6 + 0x20) = "RecommendedAbility";
    *(undefined4 *)(lVar6 + 0x18) = 3;
    *(code **)(lVar6 + 8) = thunk_FUN_1000f3afc;
    *(undefined4 *)(lVar6 + 0x10) = 2;
  } while (lVar5 == lVar4);
  lVar4 = FUN_100173794(lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x933dc2c5;
  return;
}




void FUN_100173794(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016ea04();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001737e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f90c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173834(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e104();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173884(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016ebd8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001738d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10017329c(param_2);
  uVar2 = FUN_100173594(lVar1 + 0x10);
  local_20[0] = 7;
  local_18 = 1;
  FUN_1000b8d9c(uVar2,local_20);
  return;
}




void FUN_100173914(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10017329c(param_2);
  FUN_10017398c(lVar1 + 0x10);
  uVar2 = FUN_100173594(lVar1 + 0x10);
  local_30[0] = 7;
  local_28 = 1;
  FUN_1000b8d9c(uVar2,local_30);
  lVar1 = FUN_100173358(param_1);
  lVar1 = FUN_1001739dc(lVar1 + 0x10);
  FUN_1000b86a8(lVar1 + 0x10,"*Sidebar_Ardan_Tutorial1H*");
  return;
}




void FUN_10017398c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f32c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001739dc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e474();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173a2c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_100173544(lVar1 + 0x10);
  uVar3 = FUN_100173594(lVar2 + 0x10);
  local_40[0] = 10;
  local_38 = 1;
  FUN_1000b8d9c(uVar3,local_40);
  uVar3 = FUN_100173ad0(lVar2 + 0x10);
  uVar4 = FUN_1004e0150("HUD_ONBOARDING_ASSISTANT_RECALL",0);
  FUN_1000b8a2c(uVar3,uVar4);
  do {
    lVar5 = FUN_10017342c(lVar2 + 0x28);
    *(undefined4 *)(lVar5 + 0x10) = 0x40c00000;
  } while (lVar2 + 0x28 == lVar1 + 0x10);
  return;
}




void FUN_100173ad0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f6e8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173b20(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x40000000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Dragon*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173b6c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e530();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173bbc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016dc80();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100173c0c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_River*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173c58(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_RiverShop*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173ca4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_RiverShop*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173cf0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Jungle*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173d3c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_100173b6c(lVar1 + 0x10);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Health*");
  FUN_100173bbc(lVar1 + 0x10);
  return;
}




void FUN_100173d78(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Killed*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173dc4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Items*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173e10(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Bush*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173e5c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_VainCrystal*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173ea8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Turret*");
  FUN_100173bbc(lVar1);
  return;
}




void FUN_100173ef4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_ScoutCam*");
  FUN_100173bbc(lVar1);
  return;
}




undefined8 * FUN_100173f40(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d6f0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_100173fb4(void)

{
  return;
}




uint FUN_100173fbc(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_1000b8408(param_2,*(undefined8 *)(param_1 + 0x20));
  iVar2 = FUN_100170fe4(param_1 + 8,param_2,0);
  uVar3 = *(uint *)(param_1 + 0x18);
  switch(uVar3) {
  case 0:
    uVar3 = (uint)(iVar2 < iVar1);
    break;
  case 1:
    uVar3 = (uint)(iVar2 <= iVar1);
    break;
  case 2:
    uVar3 = (uint)(iVar2 == iVar1);
    break;
  case 3:
    uVar3 = (uint)(iVar2 != iVar1);
    break;
  case 4:
    uVar3 = (uint)(iVar1 < iVar2);
    break;
  case 5:
    uVar3 = (uint)(iVar1 <= iVar2);
  }
  return uVar3 & 1;
}




void FUN_100174074(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10017416c(param_2);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_1001741bc(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10017420c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(undefined4 *)(lVar2 + 0x18) = 0xffffffff;
  FUN_10017425c(lVar1);
  lVar1 = FUN_10017329c(param_2);
  uVar3 = FUN_1001732ec(lVar1 + 0x10);
  uVar3 = FUN_1000bd484(uVar3,"Tutorial01");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Loading");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Start");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_MoveToLocation");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_KillTheMinion");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_KillTwoMinions");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_QuickMinion");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_MinionRing");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_FightPhinn");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_GoodJob");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_MoveToLocation");
  FUN_1000bd48c(uVar3,"Tutorial01_Done");
  return;
}




void FUN_10017416c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016fa98();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001741bc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f0b4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10017420c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016ee2c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10017425c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f14c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001742ac(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_10017342c(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_1001742ec(lVar1 + 0x10);
  FUN_1000b85dc(uVar3,"Done_Tutorial01_Loading");
  return;
}




void FUN_1001742ec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e694();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10017433c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar2,"Tutorial1","TapToMove","BeginOpeningCutscene");
  lVar3 = FUN_100174624(lVar1);
  lVar4 = FUN_100175bbc(lVar3 + 0x10);
  *(code **)(lVar4 + 8) = FUN_100174674;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  do {
    lVar4 = FUN_100173b6c(lVar3 + 0x88);
    FUN_1000b869c(lVar4 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial1A_2*");
  } while (lVar3 + 0x88 == lVar1);
  do {
    lVar4 = FUN_100173b6c(lVar3 + 0xa0);
    FUN_1000b869c(lVar4 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial1A*");
  } while (lVar3 + 0xa0 == lVar1);
  lVar4 = FUN_100174624(lVar1);
  lVar3 = FUN_100175c28(lVar4 + 0x10);
  *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 2;
  lVar3 = lVar4 + 0x88;
  do {
    uVar2 = FUN_10017467c(lVar3);
    uVar2 = FUN_1000b890c(uVar2,1);
    uVar5 = FUN_1004e0150("5V5_TUTORIAL_HOW_TO_PLAY_PHONE",0);
    FUN_1000b8914(uVar2,uVar5);
    uVar2 = FUN_1001742ec(lVar3);
    FUN_1000b85dc(uVar2,"JoystickControls");
  } while (lVar3 == lVar1);
  lVar3 = lVar4 + 0xa0;
  do {
    lVar6 = FUN_100174624(lVar3);
    lVar7 = FUN_100175ca0(lVar6 + 0x10);
    *(undefined4 *)(lVar7 + 8) = 1;
    lVar7 = lVar6 + 0x88;
    do {
      uVar2 = FUN_10017467c(lVar7);
      uVar2 = FUN_1000b890c(uVar2,3);
      uVar5 = FUN_1004e0150("5V5_TUTORIAL_HOW_TO_PLAY_TABLET",0);
      FUN_1000b8914(uVar2,uVar5);
      uVar2 = FUN_1001742ec(lVar7);
      FUN_1000b85dc(uVar2,"TapControls");
    } while (lVar7 == lVar3);
    do {
      lVar7 = FUN_100174624(lVar6 + 0xa0);
      lVar8 = FUN_100175ca0(lVar7 + 0x10);
      *(undefined4 *)(lVar8 + 8) = 2;
      do {
        uVar2 = FUN_1001742ec(lVar7 + 0x88);
        FUN_1000b85dc(uVar2,"TapControls");
      } while (lVar7 + 0x88 == lVar6 + 0xa0);
      do {
        uVar2 = FUN_10017467c(lVar7 + 0xa0);
        uVar2 = FUN_1000b890c(uVar2,2);
        uVar5 = FUN_1004e0150("5V5_TUTORIAL_HOW_TO_PLAY_PHONE",0);
        FUN_1000b8914(uVar2,uVar5);
        uVar2 = FUN_1001742ec(lVar7 + 0xa0);
        FUN_1000b85dc(uVar2,"TapControls");
      } while (lVar7 == lVar6);
    } while (lVar6 == lVar4);
  } while (lVar3 == lVar1);
  uVar2 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar2,"Tutorial1","PoofMinions","ControlPopupLaunched");
  return;
}




void FUN_1001745d4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016ea9c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100174624(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e87c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined1 FUN_100174674(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}




void FUN_10017467c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e730();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001746cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_100173594(lVar1);
  local_40[0] = 0xf;
  local_38 = 1;
  FUN_1000b8d9c(uVar2,local_40);
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tutorial_LockOn");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_1000f3a94,0x374e8faa);
  (**(code **)(*plVar3 + 0x58))();
  uVar2 = FUN_100173ad0(lVar1);
  uVar4 = FUN_1004e0150("TUTORIAL1_TOOLTIP_MOVE_KOSHKA",0);
  FUN_1000b8a2c(uVar2,uVar4);
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_GoHere_WBeam");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,FUN_1000f398c);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))(plVar3,FUN_1000f3a3c,0x374e8faa);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x58))();
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar2,"Tutorial1","TapToMove","AfterOpeningCutscene");
  lVar5 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar5 + 0x10) = 0x1c;
  lVar5 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar5 + 0x10) = 0x14;
  lVar1 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xf9935edd;
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 1;
  lVar1 = FUN_100174980(param_1);
  uVar2 = FUN_1001745d4(lVar1 + 0x10);
  FUN_1000bd63c(uVar2,"Tutorial1","TapToMove","TappedToMove");
  return;
}




void FUN_100174890(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f1dc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001748e0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016eb40();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100174930(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e060();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100174980(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f858();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1001749d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_100174b30(lVar1);
  FUN_1000b8b00(uVar2,FUN_1000f3a3c,0x374e8faa);
  uVar2 = FUN_100173ad0(lVar1);
  uVar3 = FUN_1004e0150("TUTORIAL1_TOOLTIP_TAP_TO_MOVE",0);
  FUN_1000b8a2c(uVar2,uVar3);
  plVar4 = (long *)FUN_100174890(lVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_GoHere_WBeam");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,FUN_1000f398c);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,FUN_1000f3a3c,0x374e8faa);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))();
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar2,"Tutorial1","TapToMove","AfterOpeningCutscene");
  lVar5 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar5 + 0x10) = 0x1c;
  lVar1 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xf9935edd;
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 1;
  lVar1 = FUN_100174980(param_1);
  uVar2 = FUN_1001745d4(lVar1 + 0x10);
  FUN_1000bd63c(uVar2,"Tutorial1","TapToMove","TappedToMove");
  return;
}




void FUN_100174b30(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f454();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100174b80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  
  lVar1 = FUN_100174dc4(param_2);
  lVar6 = lVar1 + 0x10;
  FUN_10016c6f8(lVar1,"RangedMinion");
  plVar2 = (long *)FUN_100174890(lVar6);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_GoHere_WBeam");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,FUN_1000f398c);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,FUN_1000f3a34);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = FUN_100174e14(lVar6);
  lVar1 = FUN_100175c28(lVar3 + 0x10);
  *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 2;
  lVar1 = lVar3 + 0x88;
  do {
    uVar4 = FUN_100173594(lVar1);
    local_60[0] = 0x10;
    local_58 = 1;
    FUN_1000b8d9c(uVar4,local_60);
    uVar4 = FUN_100173ad0(lVar1);
    uVar5 = FUN_1004e0150("TUTORIAL1_TOOLTIP_ATTACK_BUTTON",0);
    FUN_1000b8a2c(uVar4,uVar5);
  } while (lVar1 == lVar6);
  lVar3 = lVar3 + 0xa0;
  do {
    uVar4 = FUN_100174e64(lVar3);
    FUN_1000b8c04(uVar4,FUN_1000f39f4,0);
    uVar4 = FUN_100173ad0(lVar3);
    uVar5 = FUN_1004e0150("TUTORIAL1_TOOLTIP_TAP_TO_ATTACK",0);
    FUN_1000b8a2c(uVar4,uVar5);
  } while (lVar3 == lVar6);
  lVar6 = FUN_100173358(param_1);
  lVar6 = lVar6 + 0x10;
  uVar4 = FUN_1001745d4(lVar6);
  FUN_1000bd63c(uVar4,"Tutorial1","1stMinion","1stMinionSpawned");
  lVar1 = FUN_100173884(lVar6);
  lVar1 = FUN_100175d68(lVar1 + 0x10);
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) & 0xfa;
  *(undefined4 *)(lVar1 + 0x18) = 0x41700000;
  *(undefined4 *)(lVar1 + 0x20) = 1;
  lVar1 = FUN_100174624(lVar6);
  lVar3 = FUN_100175c28(lVar1 + 0x10);
  *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 2;
  do {
    lVar3 = FUN_1001748e0(lVar1 + 0x88);
    *(undefined4 *)(lVar3 + 0x10) = 0x15;
  } while (lVar1 + 0x88 == lVar6);
  lVar6 = FUN_100174980(param_1);
  uVar4 = FUN_1001745d4(lVar6 + 0x10);
  FUN_1000bd63c(uVar4,"Tutorial1","1stMinion","1stMinionKilled");
  return;
}




void FUN_100174dc4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016fb4c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100174e14(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016eca4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100174e64(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f4f4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100174eb4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175bbc(lVar2 + 0x10);
  *(code **)(lVar3 + 8) = FUN_100174674;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  do {
    lVar3 = FUN_100173b6c(lVar2 + 0x88);
    FUN_1000b86a8(lVar3 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1A_2*");
  } while (lVar2 + 0x88 == lVar1);
  do {
    lVar3 = FUN_100173b6c(lVar2 + 0xa0);
    FUN_1000b86a8(lVar3 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1A*");
  } while (lVar2 + 0xa0 == lVar1);
  lVar2 = FUN_100173544(lVar1);
  uVar4 = FUN_100173ad0(lVar2 + 0x10);
  uVar5 = FUN_1004e0150("TUTORIAL1_TOOLTIP_KILL_TWO_MINIONS",0);
  FUN_1000b8a2c(uVar4,uVar5);
  lVar2 = lVar2 + 0x28;
  do {
    uVar4 = FUN_1001742ec(lVar2);
    FUN_1000b85dc(uVar4,"SpawnTwoMinions");
    uVar4 = FUN_1001745d4(lVar2);
    FUN_1000bd63c(uVar4,"Tutorial1","PoofMinions","PoofMinionsSpawned");
    FUN_1001735e4(lVar2);
  } while (lVar2 == lVar1);
  lVar1 = FUN_100174980(param_1);
  uVar4 = FUN_1001745d4(lVar1 + 0x10);
  FUN_1000bd63c(uVar4,"Tutorial1","PoofMinions","PoofMinionsDefeated");
  return;
}




void FUN_100175018(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_80 [2];
  undefined4 local_78;
  
  lVar2 = FUN_100173358();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_100174624(lVar2);
  lVar4 = FUN_100175c28(lVar3 + 0x10);
  lVar6 = lVar3 + 0x88;
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
  do {
    uVar5 = FUN_1001745d4(lVar6);
    FUN_1000bd63c(uVar5,"Tutorial1","PoofMinions","PoofMinionsSpawned");
    uVar5 = FUN_1001745d4(lVar6);
    FUN_1000bd63c(uVar5,"Tutorial1","PoofMinions","PoofMinionsDefeated");
  } while (lVar6 == lVar2);
  lVar6 = lVar2;
  do {
    bVar1 = lVar6 == lVar2;
    lVar6 = lVar3 + 0xa0;
  } while (bVar1);
  lVar6 = FUN_100174624(lVar2);
  lVar3 = FUN_100175bbc(lVar6 + 0x10);
  *(code **)(lVar3 + 8) = FUN_100174674;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  do {
    uVar5 = FUN_1001742ec(lVar6 + 0x88);
    FUN_1000b85dc(uVar5,"SpawnQuickMinion");
  } while (lVar6 + 0x88 == lVar2);
  lVar6 = lVar6 + 0xa0;
  do {
    lVar3 = FUN_100175414(lVar6);
    do {
      lVar4 = FUN_100173b6c(lVar3 + 0x28);
      FUN_1000b86a8(lVar4 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1C*");
    } while (lVar3 + 0x28 == lVar6);
    lVar3 = lVar3 + 0x40;
    do {
      lVar4 = FUN_10017342c(lVar3);
      *(undefined4 *)(lVar4 + 0x10) = 0x41266666;
      uVar5 = FUN_1001742ec(lVar3);
      FUN_1000b85dc(uVar5,"SpawnQuickMinion");
    } while (lVar3 == lVar6);
  } while (lVar6 == lVar2);
  uVar5 = FUN_1001745d4(lVar2);
  FUN_1000bd63c(uVar5,"Tutorial1","ChaseMinion","ChaseMinionSpawned");
  lVar3 = FUN_100175414(lVar2);
  lVar6 = lVar3 + 0x28;
  do {
    lVar4 = FUN_10017342c(lVar6);
    *(undefined4 *)(lVar4 + 0x10) = 0x3f800000;
    lVar4 = FUN_100173b6c(lVar6);
    FUN_1000b86a8(lVar4 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1D_2*");
  } while (lVar6 == lVar2);
  lVar3 = lVar3 + 0x40;
  do {
    lVar6 = FUN_100173544(lVar3);
    uVar5 = FUN_100173ad0(lVar6 + 0x10);
    uVar7 = FUN_1004e0150("TUTORIAL1_TOOLTIP_CHASE_THE_MINION",0);
    FUN_1000b8a2c(uVar5,uVar7);
    do {
      lVar4 = FUN_10017342c(lVar6 + 0x28);
      *(undefined4 *)(lVar4 + 0x10) = 0x40f00000;
    } while (lVar6 + 0x28 == lVar3);
    lVar6 = FUN_100173544(lVar3);
    uVar5 = FUN_100173ad0(lVar6 + 0x10);
    uVar7 = FUN_1004e0150("TUTORIAL1_TOOLTIP_TAP_TO_LEARN_POUNCY",0);
    FUN_1000b8a2c(uVar5,uVar7);
    uVar5 = FUN_100173594(lVar6 + 0x10);
    local_80[0] = 4;
    local_78 = 1;
    FUN_1000b8d9c(uVar5,local_80);
    lVar6 = lVar6 + 0x28;
    do {
      lVar4 = FUN_1001748e0(lVar6);
      *(undefined4 *)(lVar4 + 0x10) = 2;
      lVar4 = FUN_1001748e0(lVar6);
      *(undefined4 *)(lVar4 + 0x10) = 0x16;
      lVar4 = FUN_100174930(lVar6);
      *(undefined4 *)(lVar4 + 0x10) = 0xf9935edd;
      *(byte *)(lVar4 + 0x22) = *(byte *)(lVar4 + 0x22) | 2;
      lVar4 = FUN_100173884(lVar6);
      lVar4 = FUN_100175f34(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = 0x1d00000002;
      *(undefined4 *)(lVar4 + 8) = 0x3f800000;
      *(undefined4 *)(lVar4 + 0x10) = 1;
    } while (lVar6 == lVar3);
    lVar6 = FUN_100173544(lVar3);
    uVar5 = FUN_100173594(lVar6 + 0x10);
    local_80[0] = 1;
    local_78 = 1;
    FUN_1000b8d9c(uVar5,local_80);
    uVar5 = FUN_100173ad0(lVar6 + 0x10);
    uVar7 = FUN_1004e0150("TUTORIAL1_TOOLTIP_TAP_TO_USE_POUNCY",0);
    FUN_1000b8a2c(uVar5,uVar7);
    lVar6 = lVar6 + 0x28;
    do {
      uVar5 = FUN_1001745d4(lVar6);
      FUN_1000bd63c(uVar5,"Tutorial1","ChaseMinion","LearnedPounce");
      FUN_1001735e4(lVar6);
    } while (lVar6 == lVar3);
  } while (lVar3 == lVar2);
  lVar2 = FUN_100174980(param_1);
  uVar5 = FUN_1001745d4(lVar2 + 0x10);
  FUN_1000bd63c(uVar5,"Tutorial1","ChaseMinion","ChaseMinionDefeated");
  return;
}




void FUN_100175414(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016e304();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100175464(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_80 [2];
  undefined4 local_78;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624();
  lVar3 = FUN_100175bbc(lVar2 + 0x10);
  lVar7 = lVar2 + 0x88;
  *(code **)(lVar3 + 8) = FUN_100174674;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  do {
    uVar4 = FUN_1001742ec(lVar7);
    FUN_1000b85dc(uVar4,"SpawnMinionRing");
    uVar4 = FUN_1001742ec(lVar7);
    FUN_1000b85dc(uVar4,"LevelTo2");
    lVar5 = FUN_100173544(lVar7);
    lVar3 = lVar5 + 0x10;
    uVar4 = FUN_100173ad0(lVar3);
    uVar6 = FUN_1004e0150("TUTORIAL1_TOOLTIP_TAP_TO_LEARN_TWIRLY",0);
    FUN_1000b8a2c(uVar4,uVar6);
    uVar4 = FUN_100173594(lVar3);
    local_80[0] = 5;
    local_78 = 1;
    FUN_1000b8d9c(uVar4,local_80);
    lVar3 = FUN_1001741bc(lVar3);
    *(undefined4 *)(lVar3 + 0x10) = 0x16;
    lVar5 = lVar5 + 0x28;
    do {
      uVar4 = FUN_1001745d4(lVar5);
      FUN_1000bd63c(uVar4,"Tutorial1","MinionSwarm","MinionSwarmSpawned");
      lVar3 = FUN_1001748e0(lVar5);
      *(undefined4 *)(lVar3 + 0x10) = 2;
      lVar3 = FUN_1001748e0(lVar5);
      *(undefined4 *)(lVar3 + 0x10) = 0x17;
      lVar3 = FUN_100174930(lVar5);
      *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
      *(byte *)(lVar3 + 0x1a) = *(byte *)(lVar3 + 0x1a) | 2;
      *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 4;
      lVar3 = FUN_100173884(lVar5);
      lVar3 = FUN_100175f34(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x18) = 0x2800000000;
      *(undefined4 *)(lVar3 + 8) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x10) = 1;
      lVar3 = FUN_100173884(lVar5);
      lVar3 = FUN_100175f34(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x18) = 0x1d00000002;
      *(undefined4 *)(lVar3 + 8) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x10) = 1;
    } while (lVar5 == lVar7);
  } while (lVar7 == lVar1);
  lVar2 = lVar2 + 0xa0;
  do {
    lVar7 = FUN_100175414(lVar2);
    do {
      lVar3 = FUN_100173b6c(lVar7 + 0x28);
      FUN_1000b86a8(lVar3 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1E*");
    } while (lVar7 + 0x28 == lVar2);
    lVar7 = lVar7 + 0x40;
    do {
      lVar3 = FUN_10017342c(lVar7);
      *(undefined4 *)(lVar3 + 0x10) = 0x40f00000;
      uVar4 = FUN_1001742ec(lVar7);
      FUN_1000b85dc(uVar4,"LevelTo2");
      uVar4 = FUN_1001742ec(lVar7);
      FUN_1000b85dc(uVar4,"SpawnMinionRing");
      lVar5 = FUN_100173544(lVar7);
      lVar3 = lVar5 + 0x10;
      uVar4 = FUN_100173ad0(lVar3);
      uVar6 = FUN_1004e0150("TUTORIAL1_TOOLTIP_TAP_TO_LEARN_TWIRLY",0);
      FUN_1000b8a2c(uVar4,uVar6);
      uVar4 = FUN_100173594(lVar3);
      local_80[0] = 5;
      local_78 = 1;
      FUN_1000b8d9c(uVar4,local_80);
      lVar3 = FUN_1001741bc(lVar3);
      *(undefined4 *)(lVar3 + 0x10) = 0x16;
      lVar5 = lVar5 + 0x28;
      do {
        lVar3 = FUN_1001748e0(lVar5);
        *(undefined4 *)(lVar3 + 0x10) = 2;
        lVar3 = FUN_1001748e0(lVar5);
        *(undefined4 *)(lVar3 + 0x10) = 0x17;
        lVar3 = FUN_100174930(lVar5);
        *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
        *(byte *)(lVar3 + 0x1a) = *(byte *)(lVar3 + 0x1a) | 2;
        *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 4;
        lVar3 = FUN_100173884(lVar5);
        lVar3 = FUN_100175f34(lVar3 + 0x10);
        *(undefined8 *)(lVar3 + 0x18) = 0x2800000000;
        *(undefined4 *)(lVar3 + 8) = 0x3f800000;
        *(undefined4 *)(lVar3 + 0x10) = 1;
        lVar3 = FUN_100173884(lVar5);
        lVar3 = FUN_100175f34(lVar3 + 0x10);
        *(undefined8 *)(lVar3 + 0x18) = 0x1d00000002;
        *(undefined4 *)(lVar3 + 8) = 0x3f800000;
        *(undefined4 *)(lVar3 + 0x10) = 1;
      } while (lVar5 == lVar7);
    } while (lVar7 == lVar2);
  } while (lVar2 == lVar1);
  lVar7 = FUN_100173544(lVar1);
  uVar4 = FUN_100173594(lVar7 + 0x10);
  local_80[0] = 2;
  local_78 = 1;
  FUN_1000b8d9c(uVar4,local_80);
  uVar4 = FUN_100173ad0(lVar7 + 0x10);
  uVar6 = FUN_1004e0150("TUTORIAL1_TOOLTIP_TAP_TO_USE_TWIRLY",0);
  FUN_1000b8a2c(uVar4,uVar6);
  lVar7 = lVar7 + 0x28;
  do {
    uVar4 = FUN_1001745d4(lVar7);
    FUN_1000bd63c(uVar4,"Tutorial1","MinionSwarm","LearnedTwirl");
    FUN_1001735e4(lVar7);
  } while (lVar7 == lVar1);
  lVar1 = FUN_100174980(param_1);
  uVar4 = FUN_1001745d4(lVar1 + 0x10);
  FUN_1000bd63c(uVar4,"Tutorial1","MinionSwarm","MinionSwarmDefeated");
  return;
}




void FUN_1001758a8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar2 = FUN_10017329c(param_2);
  uVar3 = FUN_100173ad0(lVar2 + 0x10);
  uVar4 = FUN_1004e0150("TUTORIAL1_TOOLTIP_DEFEAT_PHINN",0);
  FUN_1000b8a2c(uVar3,uVar4);
  lVar2 = FUN_100173358(param_1);
  lVar2 = lVar2 + 0x10;
  lVar5 = FUN_1001748e0(lVar2);
  *(undefined4 *)(lVar5 + 0x10) = 2;
  uVar3 = FUN_1001745d4(lVar2);
  FUN_1000bd63c(uVar3,"Tutorial1","PhinnFight","CutsceneBegin");
  lVar5 = FUN_100174624(lVar2);
  lVar6 = FUN_100175bbc(lVar5 + 0x10);
  *(code **)(lVar6 + 8) = FUN_100174674;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  lVar6 = lVar2;
  do {
    bVar1 = lVar6 == lVar2;
    lVar6 = lVar5 + 0x88;
  } while (bVar1);
  lVar5 = lVar5 + 0xa0;
  do {
    lVar6 = FUN_10017342c(lVar5);
    *(undefined4 *)(lVar6 + 0x10) = 0x40000000;
    lVar6 = FUN_100173544(lVar5);
    FUN_10017398c(lVar6 + 0x10);
    do {
      lVar7 = FUN_100173b6c(lVar6 + 0x28);
      FUN_1000b869c(lVar7 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial1B*");
    } while (lVar6 + 0x28 == lVar5);
  } while (lVar5 == lVar2);
  lVar5 = FUN_10017342c(lVar2);
  *(undefined4 *)(lVar5 + 0x10) = 0x40a00000;
  lVar5 = FUN_1001748e0(lVar2);
  *(undefined4 *)(lVar5 + 0x10) = 0x1a;
  lVar6 = FUN_100175414(lVar2);
  lVar5 = lVar6 + 0x28;
  do {
    lVar8 = FUN_100173544(lVar5);
    lVar7 = lVar8 + 0x10;
    uVar3 = FUN_100173594(lVar7);
    local_70[0] = 7;
    local_68 = 1;
    FUN_1000b8d9c(uVar3,local_70);
    lVar9 = FUN_10017420c(lVar7);
    *(undefined4 *)(lVar9 + 0x10) = 0x9168cebf;
    *(undefined4 *)(lVar9 + 0x18) = 0xffffff7f;
    FUN_10017398c(lVar7);
    lVar8 = lVar8 + 0x28;
    do {
      lVar7 = FUN_100174930(lVar8);
      *(undefined4 *)(lVar7 + 0x10) = 0xf9935edd;
      *(byte *)(lVar7 + 0x20) = *(byte *)(lVar7 + 0x20) | 0x80;
      lVar7 = FUN_100173884(lVar8);
      lVar7 = FUN_100176040(lVar7 + 0x10);
      *(undefined4 *)(lVar7 + 8) = 0x1b184adf;
    } while (lVar8 == lVar5);
  } while (lVar5 == lVar2);
  lVar6 = lVar6 + 0x40;
  do {
    lVar5 = FUN_100173544(lVar6);
    do {
      lVar7 = FUN_100173b6c(lVar5 + 0x28);
      FUN_1000b86a8(lVar7 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1H*");
    } while (lVar5 + 0x28 == lVar6);
  } while (lVar6 == lVar2);
  uVar3 = FUN_1001745d4(lVar2);
  FUN_1000bd63c(uVar3,"Tutorial1","PhinnFight","CutsceneEnd");
  lVar2 = FUN_100174980(param_1);
  uVar3 = FUN_1001745d4(lVar2 + 0x10);
  FUN_1000bd63c(uVar3,"Tutorial1","PhinnFight","PhinnDefeated");
  return;
}




void FUN_100175b50(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  lVar2 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial1I*");
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  uVar3 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar3,"Done_Tutorial01_GoodJob");
  return;
}




void FUN_100175bb8(void)

{
  return;
}




undefined8 * FUN_100175bbc(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_101453350;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 * FUN_100175c28(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d718;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_100175c90(void)

{
  return;
}




void FUN_100175c98(long param_1)

{
  FUN_100060a44(*(undefined1 *)(param_1 + 8));
  return;
}




undefined8 * FUN_100175ca0(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d740;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_100175d08(void)

{
  return;
}




undefined8 FUN_100175d10(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2) {
    uVar3 = FUN_10012709c();
    if ((int)uVar3 == 1) {
      return uVar3;
    }
  }
  else {
    if (iVar1 == 1) {
      uVar2 = FUN_100126d24();
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      uVar2 = FUN_100126cec();
    }
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}




undefined8 * FUN_100175d68(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    plVar4 = (long *)(param_1 + lVar5 * 0x38 + 8);
    if (*plVar4 == 0) {
      param_1 = param_1 + lVar5 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d768;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 7;
      *plVar4 = (long)puVar2;
      return puVar2;
    }
    lVar5 = 1;
    bVar1 = false;
  } while (bVar3);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_100175df0(void)

{
  return;
}




void FUN_100175df8(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  if ((~*(byte *)(param_1 + 0x2c) & 7) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000f3914(param_2);
  }
  FUN_100175e90(param_1 + 8,param_2,uVar2,auStack_38);
  FUN_100170e24(param_1 + 0x18,param_2,0);
  bVar1 = *(byte *)(param_1 + 0x2c);
  FUN_10048c374(auStack_38,*(undefined4 *)(param_1 + 0x28),uVar2,bVar1 & 1,bVar1 >> 1 & 1,
                bVar1 >> 2 & 1);
  return;
}




void FUN_100175e90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
    FUN_1000f3928(param_2,param_4);
    return;
  case 2:
    local_18[0] = *(undefined4 *)param_1;
    FUN_1000f3950(param_2,local_18,param_4);
    break;
  case 3:
    local_20[0] = *(undefined4 *)param_1;
    FUN_1004914ac(local_20,param_4);
    break;
  case 4:
    *param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x000100175f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_2,param_4);
    return;
  }
  return;
}




undefined8 * FUN_100175f34(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d790;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_100175fa8(void)

{
  return;
}




void FUN_100175fb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1000f398c(param_2);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar2 = FUN_100490394(lVar1,*(undefined4 *)(param_1 + 0x1c));
    }
    else {
      uVar2 = FUN_1003e4a18();
    }
    uVar3 = FUN_100170e24(param_1 + 8,param_2,0);
    FUN_10048c318(uVar2,uVar3,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}




undefined8 * FUN_100176040(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d7b8;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_1001760ac(void)

{
  return;
}




bool FUN_1001760b4(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_1000f398c(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    uVar2 = FUN_10048c74c(lVar3,param_1 + 8);
    bVar1 = *(byte *)(param_1 + 0xc) != uVar2;
  }
  return bVar1;
}




void FUN_1001760f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10017416c(param_2);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_1001741bc(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10017420c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(undefined4 *)(lVar2 + 0x18) = 0xff7fffff;
  FUN_10017425c(lVar1);
  lVar1 = FUN_10017329c(param_2);
  uVar3 = FUN_1001732ec(lVar1 + 0x10);
  uVar3 = FUN_1000bd484(uVar3,"Tutorial01_Joystick_NavMesh");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_NavMesh01");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_NavMesh02");
  FUN_1000bd48c(uVar3,"Tutorial01_Joystick_NavMesh03");
  uVar3 = FUN_1001732ec(lVar1 + 0x10);
  uVar3 = FUN_1000bd484(uVar3,"Tutorial01_Joystick");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_Loading");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_Start");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_KillTheMinions");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_KillThreeMinions");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_KillFiveMinions");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_AbilityDetails");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_LearnB");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_IntroduceCatherine");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_CatherineStunsYou");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_CatherineTurretDivesYou");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_LearnUltimate");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_UseHealingFlask");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_PushWave");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_KillTheTurret");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_RunFromTurret");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_NextWave");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_DestroyTheTurret");
  uVar3 = FUN_1000bd48c(uVar3,"Tutorial01_Joystick_Recall");
  FUN_1000bd48c(uVar3,"Tutorial01_Joystick_Done");
  return;
}




void FUN_100176284(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10017329c(param_2);
  plVar2 = (long *)FUN_100174890(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blocker_14m");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_1000f3a94,0x3fcc65da);
                    /* WARNING: Could not recover jumptable at 0x0001001762d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))();
  return;
}




void FUN_1001762dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = lVar1 + 0x10;
  FUN_1001763e4(lVar1);
  lVar2 = FUN_100176434(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 3;
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_14m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_1000f3a94,0x56c46c38);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_1000f3a94,0x57c46dcb);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_1000f3a94,0x5cc475aa);
                    /* WARNING: Could not recover jumptable at 0x0001001763e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))();
  return;
}




void FUN_1001763e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016f3c0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100176434(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016ef80();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100176484(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = lVar1 + 0x10;
  FUN_1001763e4(lVar1);
  lVar2 = FUN_100176434(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_14m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_1000f3a94,0x56c46c38);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_1000f3a94,0x57c46dcb);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_100174890(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blocker_6m");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,FUN_1000f3a94,0x5cc475aa);
                    /* WARNING: Could not recover jumptable at 0x000100176584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))();
  return;
}




void FUN_100176588(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_10017342c(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_1001742ec(lVar1 + 0x10);
  FUN_1000b85dc(uVar3,"Done_Tutorial01_Joystick_Loading");
  return;
}




void FUN_1001765c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100174890(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ping_Tutorial");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_1000f3a94,0x9f5dcddf);
  (**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)FUN_100174890(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_GoHere_WBeam");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,FUN_1000f398c);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,FUN_1000f3a3c,0x9f5dcddf);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = FUN_100174e14(lVar1);
  lVar4 = FUN_100175c28(lVar3 + 0x10);
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
  do {
    uVar5 = FUN_100173594(lVar3 + 0x88);
    local_70[0] = 0xf;
    local_68 = 1;
    FUN_1000b8d9c(uVar5,local_70);
  } while (lVar3 + 0x88 == lVar1);
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
  *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 2;
  *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 1;
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x1c;
  lVar4 = FUN_100174624(lVar1);
  lVar3 = FUN_100175c28(lVar4 + 0x10);
  *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) | 2;
  lVar3 = lVar4 + 0x88;
  do {
    lVar6 = FUN_1001748e0(lVar3);
    *(undefined4 *)(lVar6 + 0x10) = 0x14;
    lVar6 = FUN_100173b6c(lVar3);
    FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1A*");
  } while (lVar3 == lVar1);
  lVar3 = lVar4 + 0xa0;
  do {
    lVar6 = FUN_100174624(lVar3);
    lVar7 = FUN_100175ca0(lVar6 + 0x10);
    *(undefined4 *)(lVar7 + 8) = 2;
    do {
      lVar7 = FUN_100173b6c(lVar6 + 0x88);
      FUN_1000b869c(lVar7 + 0x10,"*Cutscene_Ardan_PC_Tutorial1A*");
    } while (lVar6 + 0x88 == lVar3);
    do {
      lVar7 = FUN_100173b6c(lVar6 + 0xa0);
      FUN_1000b86a8(lVar7 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1A*");
    } while (lVar6 == lVar4);
  } while (lVar3 == lVar1);
  lVar3 = FUN_100173544(lVar1);
  uVar5 = FUN_100173ad0(lVar3 + 0x10);
  uVar8 = FUN_1004e0150("TUTORIAL1_OSD_JOYSTICK_MOVE",0);
  FUN_1000b8a2c(uVar5,uVar8);
  do {
    FUN_1001735e4(lVar3 + 0x28);
  } while (lVar3 + 0x28 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_100174624(lVar1);
  lVar4 = FUN_100175ca0(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar5 = FUN_1001745d4(lVar3 + 0x88);
    FUN_1000bd63c(uVar5,"Tutorial1","GwenDesktop","FirstMoveComplete");
  } while (lVar3 + 0x88 == lVar1);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar6 = FUN_100174624(lVar4);
    lVar7 = FUN_100175c28(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar5 = FUN_1001745d4(lVar6 + 0x88);
      FUN_1000bd63c(uVar5,"Tutorial1","GwenJoystick","FirstMoveComplete");
    } while (lVar6 + 0x88 == lVar4);
    do {
      uVar5 = FUN_1001745d4(lVar6 + 0xa0);
      FUN_1000bd63c(uVar5,"Tutorial1","GwenTap","FirstMoveComplete");
    } while (lVar6 == lVar3);
  } while (lVar4 == lVar1);
  return;
}




void FUN_100176964(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x40400000;
  lVar2 = FUN_100173544(lVar1);
  lVar3 = FUN_100174e14(lVar2 + 0x10);
  lVar4 = FUN_100175c28(lVar3 + 0x10);
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
  do {
    uVar5 = FUN_100173594(lVar3 + 0x88);
    local_70[0] = 0x10;
    local_68 = 1;
    FUN_1000b8d9c(uVar5,local_70);
  } while (lVar3 + 0x88 == lVar2 + 0x10);
  lVar3 = lVar2 + 0x28;
  do {
    lVar4 = FUN_100174624(lVar3);
    lVar6 = FUN_100175c28(lVar4 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      lVar6 = FUN_1001748e0(lVar4 + 0x88);
      *(undefined4 *)(lVar6 + 0x10) = 0x15;
    } while (lVar4 + 0x88 == lVar3);
    lVar6 = FUN_100173544(lVar3);
    FUN_10017398c(lVar6 + 0x10);
    lVar4 = FUN_10017420c(lVar6 + 0x10);
    *(undefined4 *)(lVar4 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar4 + 0x18) = 0xffffffff;
    lVar4 = lVar6 + 0x28;
    do {
      lVar7 = FUN_100174624(lVar4);
      lVar8 = FUN_100175c28(lVar7 + 0x10);
      *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
      do {
        lVar8 = FUN_100173b6c(lVar7 + 0x88);
        FUN_1000b86a8(lVar8 + 0x10,"*Sidebar_Ardan_Tutorial1B*");
      } while (lVar7 + 0x88 == lVar4);
      lVar8 = lVar7 + 0xa0;
      do {
        lVar9 = FUN_100174624(lVar8);
        lVar10 = FUN_100175ca0(lVar9 + 0x10);
        *(undefined4 *)(lVar10 + 8) = 2;
        do {
          lVar10 = FUN_100173b6c(lVar9 + 0x88);
          FUN_1000b869c(lVar10 + 0x10,"*Cutscene_Ardan_PC_Tutorial1B*");
        } while (lVar9 + 0x88 == lVar8);
        do {
          lVar10 = FUN_100173b6c(lVar9 + 0xa0);
          FUN_1000b86a8(lVar10 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1B*");
        } while (lVar9 == lVar7);
      } while (lVar8 == lVar4);
    } while (lVar6 == lVar2);
    lVar4 = FUN_100173544(lVar3);
    uVar5 = FUN_100173ad0(lVar4 + 0x10);
    uVar11 = FUN_1004e0150("TUTORIAL1_OSD_BASIC_ATTACK",0);
    FUN_1000b8a2c(uVar5,uVar11);
    do {
      FUN_1001735e4(lVar4 + 0x28);
    } while (lVar4 == lVar2);
  } while (lVar3 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    uVar5 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar5,"Tutorial1","GwenDesktop","TwoMinionsKilled");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = lVar2 + 0xa0;
  do {
    lVar4 = FUN_100174624(lVar3);
    lVar6 = FUN_100175c28(lVar4 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar5 = FUN_1001745d4(lVar4 + 0x88);
      FUN_1000bd63c(uVar5,"Tutorial1","GwenJoystick","TwoMinionsKilled");
    } while (lVar4 + 0x88 == lVar3);
    do {
      uVar5 = FUN_1001745d4(lVar4 + 0xa0);
      FUN_1000bd63c(uVar5,"Tutorial1","GwenTap","TwoMinionsKilled");
    } while (lVar4 == lVar2);
  } while (lVar3 == lVar1);
  return;
}




void FUN_100176cc0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar2 = FUN_100173358();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_100174624(lVar2);
  lVar4 = FUN_100175c28(lVar3 + 0x10);
  *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
  lVar3 = lVar3 + 0xa0;
  do {
    lVar4 = FUN_10017342c(lVar3);
    *(undefined4 *)(lVar4 + 0x10) = 0x3f000000;
    uVar5 = FUN_1001742ec(lVar3);
    FUN_1000b85dc(uVar5,"SkipSegment");
    FUN_1001735e4(lVar3);
  } while (lVar3 == lVar2);
  uVar5 = FUN_1001742ec(lVar2);
  FUN_1000b85dc(uVar5,"SpawnThreeMinions");
  lVar3 = FUN_10017342c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f99999a;
  lVar3 = FUN_100174930(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0xf9935edd;
  *(byte *)(lVar3 + 0x22) = *(byte *)(lVar3 + 0x22) | 2;
  lVar3 = FUN_1001748e0(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  lVar3 = FUN_1001748e0(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 0x16;
  lVar3 = FUN_100173884(lVar2);
  lVar3 = FUN_1001798a4(lVar3 + 0x10);
  if (PTR_s_Ability__Gwen__A_101859998 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Gwen__A_101859998;
    pcVar10 = PTR_s_Ability__Gwen__A_101859998;
    while (cVar1 != '\0') {
      pcVar10 = pcVar10 + 1;
      uVar9 = (uVar9 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar10;
    }
  }
  *(uint *)(lVar3 + 8) = uVar9;
  *(undefined4 *)(lVar3 + 0xc) = 1;
  lVar4 = FUN_100173544(lVar2);
  uVar5 = FUN_100173594(lVar4 + 0x10);
  local_70[0] = 1;
  local_68 = 1;
  FUN_1000b8d9c(uVar5,local_70);
  lVar3 = lVar4 + 0x28;
  do {
    lVar6 = FUN_100173544(lVar3);
    FUN_10017398c(lVar6 + 0x10);
    lVar7 = FUN_10017420c(lVar6 + 0x10);
    *(undefined4 *)(lVar7 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
    do {
      lVar7 = FUN_100173b6c(lVar6 + 0x28);
      FUN_1000b86a8(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1_UseA*");
      lVar7 = FUN_100174930(lVar6 + 0x28);
      *(undefined4 *)(lVar7 + 0x10) = 0xf9935edd;
      *(byte *)(lVar7 + 0x20) = *(byte *)(lVar7 + 0x20) | 0x10;
    } while (lVar6 == lVar4);
    lVar6 = FUN_100173544(lVar3);
    uVar5 = FUN_100173ad0(lVar6 + 0x10);
    uVar8 = FUN_1004e0150("TUTORIAL1_OSD_USE_A",0);
    FUN_1000b8a2c(uVar5,uVar8);
    do {
      FUN_1001735e4(lVar6 + 0x28);
    } while (lVar6 == lVar4);
  } while (lVar3 == lVar2);
  lVar2 = FUN_100174980(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_100174624(lVar2);
  lVar4 = FUN_100175ca0(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar5 = FUN_1001745d4(lVar3 + 0x88);
    FUN_1000bd63c(uVar5,"Tutorial1","GwenDesktop","ThreeMinionsKilledWithA");
  } while (lVar3 + 0x88 == lVar2);
  lVar4 = lVar3 + 0xa0;
  do {
    lVar6 = FUN_100174624(lVar4);
    lVar7 = FUN_100175c28(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar5 = FUN_1001745d4(lVar6 + 0x88);
      FUN_1000bd63c(uVar5,"Tutorial1","GwenJoystick","ThreeMinionsKilledWithA");
    } while (lVar6 + 0x88 == lVar4);
    do {
      uVar5 = FUN_1001745d4(lVar6 + 0xa0);
      FUN_1000bd63c(uVar5,"Tutorial1","GwenTap","ThreeMinionsKilledWithA");
    } while (lVar6 == lVar3);
  } while (lVar4 == lVar2);
  return;
}




void FUN_10017701c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_90 [2];
  undefined4 local_88;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(byte *)(lVar2 + 0x22) = *(byte *)(lVar2 + 0x22) | 2;
  *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 0x10;
  lVar2 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  lVar2 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x16;
  uVar3 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar3,"SpawnFiveMinions");
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f99999a;
  lVar4 = FUN_100174624(lVar1);
  lVar2 = FUN_100175c28(lVar4 + 0x10);
  *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 2;
  lVar2 = lVar4 + 0x88;
  do {
    lVar5 = FUN_100175414(lVar2);
    FUN_10017398c(lVar5 + 0x10);
    lVar6 = FUN_10017420c(lVar5 + 0x10);
    *(undefined4 *)(lVar6 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar6 + 0x18) = 0xffffffff;
    do {
      lVar6 = FUN_100173b6c(lVar5 + 0x28);
      FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1_AimA*");
    } while (lVar5 + 0x28 == lVar2);
    do {
      lVar6 = FUN_10017744c(lVar5 + 0x40);
      FUN_1000b9450(lVar6 + 0x30,PTR_s_Ability__Gwen__A_101859998,3,0);
      FUN_1000b9c30(lVar6 + 0x10,0);
      FUN_1000b9c38(0x3f4ccccd,lVar6 + 0x10);
      FUN_1000b9c58(0x41a00000);
      FUN_1000b9c48(0x3e99999a);
      FUN_1000b9c40(0x40a00000);
      FUN_1000b9c6c(0x42b40000);
      FUN_1000b9c50(0x3f99999a);
    } while (lVar5 + 0x40 == lVar2);
  } while (lVar2 == lVar1);
  lVar4 = lVar4 + 0xa0;
  do {
    lVar2 = FUN_100173544(lVar4);
    FUN_10017398c(lVar2 + 0x10);
    lVar5 = FUN_10017420c(lVar2 + 0x10);
    *(undefined4 *)(lVar5 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
    lVar2 = lVar2 + 0x28;
    do {
      lVar5 = FUN_100174624(lVar2);
      lVar6 = FUN_100175ca0(lVar5 + 0x10);
      *(undefined4 *)(lVar6 + 8) = 2;
      do {
        lVar6 = FUN_100173b6c(lVar5 + 0x88);
        FUN_1000b869c(lVar6 + 0x10,"*Cutscene_Ardan_PC_Tutorial1C*");
      } while (lVar5 + 0x88 == lVar2);
      do {
        lVar6 = FUN_100173b6c(lVar5 + 0xa0);
        FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1C*");
      } while (lVar5 + 0xa0 == lVar2);
    } while (lVar2 == lVar4);
  } while (lVar4 == lVar1);
  uVar3 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar3,"UnlockPlayer");
  lVar2 = FUN_100173544(lVar1);
  uVar3 = FUN_100173ad0(lVar2 + 0x10);
  uVar7 = FUN_1004e0150("TUTORIAL1_OSD_AIM_A",0);
  FUN_1000b8a2c(uVar3,uVar7);
  uVar3 = FUN_100173594(lVar2 + 0x10);
  local_90[0] = 1;
  local_88 = 1;
  FUN_1000b8d9c(uVar3,local_90);
  do {
    FUN_1001735e4(lVar2 + 0x28);
  } while (lVar2 + 0x28 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) | 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar4 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar3 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar3,"Tutorial1","GwenDesktop","FiveMinionsKilledWithA");
  } while (lVar2 + 0x88 == lVar1);
  lVar4 = lVar2 + 0xa0;
  do {
    lVar5 = FUN_100174624(lVar4);
    lVar6 = FUN_100175c28(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar3 = FUN_1001745d4(lVar5 + 0x88);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenJoystick","FiveMinionsKilledWithA");
    } while (lVar5 + 0x88 == lVar4);
    do {
      uVar3 = FUN_1001745d4(lVar5 + 0xa0);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenTap","FiveMinionsKilledWithA");
    } while (lVar5 == lVar2);
  } while (lVar4 == lVar1);
  return;
}




void FUN_10017744c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10016ded8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10017749c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3fc00000;
  lVar2 = FUN_100173544(lVar1);
  FUN_10017398c(lVar2 + 0x10);
  lVar3 = FUN_10017420c(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x10) = 0xd1b8360;
  *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
  lVar2 = lVar2 + 0x28;
  do {
    lVar3 = FUN_100174624(lVar2);
    lVar4 = FUN_100175c28(lVar3 + 0x10);
    *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 2;
    do {
      lVar4 = FUN_100173b6c(lVar3 + 0x88);
      FUN_1000b86a8(lVar4 + 0x10,"*Sidebar_Ardan_Tutorial1_CancelAbility*");
    } while (lVar3 + 0x88 == lVar2);
    lVar4 = lVar3 + 0xa0;
    do {
      lVar5 = FUN_100174624(lVar4);
      lVar6 = FUN_100175ca0(lVar5 + 0x10);
      *(undefined4 *)(lVar6 + 8) = 2;
      do {
        lVar6 = FUN_100173b6c(lVar5 + 0x88);
        FUN_1000b869c(lVar6 + 0x10,"*Cutscene_Ardan_PC_Tutorial1D*");
      } while (lVar5 + 0x88 == lVar4);
      do {
        lVar6 = FUN_100173b6c(lVar5 + 0xa0);
        FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1D*");
      } while (lVar5 == lVar3);
    } while (lVar4 == lVar2);
  } while (lVar2 == lVar1);
  uVar7 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar7,"Tutorial_AbilityDetails_Done");
  return;
}




void FUN_1001775fc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f99999a;
  lVar2 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  uVar3 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar3,"IntroduceCatherine");
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar4 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar3 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar3,"Tutorial1","GwenDesktop","LearnedB");
  } while (lVar2 + 0x88 == lVar1);
  lVar4 = lVar2 + 0xa0;
  do {
    lVar5 = FUN_100174624(lVar4);
    lVar6 = FUN_100175c28(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar3 = FUN_1001745d4(lVar5 + 0x88);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenJoystick","LearnedB");
    } while (lVar5 + 0x88 == lVar4);
    do {
      uVar3 = FUN_1001745d4(lVar5 + 0xa0);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenTap","LearnedB");
    } while (lVar5 == lVar2);
  } while (lVar4 == lVar1);
  return;
}




void FUN_10017776c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    lVar3 = FUN_100173b6c(lVar2 + 0x88);
    FUN_1000b869c(lVar3 + 0x10,"*Cutscene_Ardan_PC_Tutorial1E*");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = lVar2 + 0xa0;
  do {
    lVar4 = FUN_100174624(lVar3);
    lVar5 = FUN_100175c28(lVar4 + 0x10);
    *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
    do {
      lVar5 = FUN_100173b6c(lVar4 + 0x88);
      FUN_1000b86a8(lVar5 + 0x10,"*Sidebar_Ardan_Tutorial1D*");
    } while (lVar4 + 0x88 == lVar3);
    do {
      lVar5 = FUN_100173b6c(lVar4 + 0xa0);
      FUN_1000b86a8(lVar5 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1E*");
    } while (lVar4 == lVar2);
  } while (lVar3 == lVar1);
  lVar2 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(byte *)(lVar2 + 0x1a) = *(byte *)(lVar2 + 0x1a) | 2;
  *(byte *)(lVar2 + 0x22) = *(byte *)(lVar2 + 0x22) | 4;
  uVar6 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar6,"Tutorial01_IntroduceCatherine_Done");
  return;
}




void FUN_1001778a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  char *pcVar10;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = FUN_1001741bc(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x10) = 0x16;
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100173884(lVar1);
  lVar2 = FUN_10017994c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Stunned_10185a208;
  lVar2 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x17;
  lVar2 = FUN_100173544(lVar1);
  FUN_10017398c(lVar2 + 0x10);
  do {
    lVar3 = FUN_100173884(lVar2 + 0x28);
    lVar3 = FUN_1001798a4(lVar3 + 0x10);
    if (PTR_s_Ability__Gwen__B_1018599a0 == (undefined *)0x0) {
      uVar8 = 0;
    }
    else {
      cVar9 = *PTR_s_Ability__Gwen__B_1018599a0;
      uVar8 = 0x811c9dc5;
      if (cVar9 != '\0') {
        uVar8 = 0x811c9dc5;
        pcVar10 = PTR_s_Ability__Gwen__B_1018599a0;
        do {
          pcVar10 = pcVar10 + 1;
          uVar8 = (uVar8 ^ (int)cVar9) * 0x1000193;
          cVar9 = *pcVar10;
        } while (cVar9 != '\0');
      }
    }
    *(uint *)(lVar3 + 8) = uVar8;
    *(undefined4 *)(lVar3 + 0xc) = 1;
  } while (lVar2 + 0x28 == lVar1);
  uVar4 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar4,"Tutorial01_RemoveStatueBuff");
  lVar2 = FUN_100173544(lVar1);
  FUN_10017398c(lVar2 + 0x10);
  lVar2 = lVar2 + 0x28;
  do {
    lVar3 = FUN_100174624(lVar2);
    lVar5 = FUN_100175ca0(lVar3 + 0x10);
    *(undefined4 *)(lVar5 + 8) = 2;
    do {
      lVar5 = FUN_100173b6c(lVar3 + 0x88);
      FUN_1000b869c(lVar5 + 0x10,"*Cutscene_Ardan_PC_Tutorial1F*");
    } while (lVar3 + 0x88 == lVar2);
  } while (lVar2 == lVar1);
  lVar3 = FUN_100175414(lVar1);
  lVar2 = lVar3 + 0x10;
  FUN_10017398c(lVar2);
  uVar4 = FUN_100173594(lVar2);
  local_70[0] = 2;
  local_68 = 1;
  FUN_1000b8d9c(uVar4,local_70);
  lVar5 = FUN_100174e14(lVar2);
  lVar6 = FUN_100175c28(lVar5 + 0x10);
  *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
  do {
    uVar4 = FUN_100173ad0(lVar5 + 0x88);
    uVar7 = FUN_1004e0150("TUTORIAL1_OSD_RUN_B",0);
    FUN_1000b8a2c(uVar4,uVar7);
  } while (lVar5 + 0x88 == lVar2);
  do {
    uVar4 = FUN_100173ad0(lVar5 + 0xa0);
    uVar7 = FUN_1004e0150("TUTORIAL1_OSD_USE_B",0);
    FUN_1000b8a2c(uVar4,uVar7);
  } while (lVar5 + 0xa0 == lVar2);
  lVar2 = lVar3 + 0x28;
  do {
    lVar5 = FUN_100174930(lVar2);
    *(undefined4 *)(lVar5 + 0x10) = 0xf9935edd;
    *(byte *)(lVar5 + 0x20) = *(byte *)(lVar5 + 0x20) | 0x20;
    lVar5 = FUN_100173884(lVar2);
    lVar5 = FUN_10017994c(lVar5 + 0x10);
    *(undefined **)(lVar5 + 8) = PTR_s_Buff_Gwen_B_ActiveSpeed_10185a898;
    uVar4 = FUN_1001742ec(lVar2);
    FUN_1000b85dc(uVar4,"Tutorial_AllowMovement");
    uVar4 = FUN_1001742ec(lVar2);
    FUN_1000b85dc(uVar4,"Advance");
  } while (lVar2 == lVar1);
  lVar3 = lVar3 + 0x40;
  do {
    lVar5 = FUN_100174624(lVar3);
    lVar2 = FUN_100175c28(lVar5 + 0x10);
    *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 2;
    lVar2 = lVar5 + 0x88;
    do {
      lVar6 = FUN_100173b6c(lVar2);
      FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1_UseB*");
      FUN_1001735e4(lVar2);
    } while (lVar2 == lVar3);
    do {
      lVar2 = FUN_100174624(lVar5 + 0xa0);
      lVar6 = FUN_100175ca0(lVar2 + 0x10);
      *(undefined4 *)(lVar6 + 8) = 2;
      do {
        lVar6 = FUN_100173b6c(lVar2 + 0xa0);
        FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1F*");
      } while (lVar2 == lVar5);
    } while (lVar5 + 0xa0 == lVar3);
  } while (lVar3 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    uVar4 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar4,"Tutorial1","GwenDesktop","UsedSkedaddle");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = lVar2 + 0xa0;
  do {
    lVar5 = FUN_100174624(lVar3);
    lVar6 = FUN_100175c28(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar4 = FUN_1001745d4(lVar5 + 0x88);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenJoystick","UsedSkedaddle");
    } while (lVar5 + 0x88 == lVar3);
    do {
      uVar4 = FUN_1001745d4(lVar5 + 0xa0);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenTap","UsedSkedaddle");
    } while (lVar5 == lVar2);
  } while (lVar3 == lVar1);
  return;
}




void FUN_100177d20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_100173ad0(lVar1);
  uVar3 = FUN_1004e0150("TUTORIAL1_OSD_JOYSTICK_MOVE",0);
  FUN_1000b8a2c(uVar2,uVar3);
  plVar4 = (long *)FUN_100174890(lVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ping_Tutorial");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,FUN_1000f3a94,0xec9d4bb);
  (**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)FUN_100174890(lVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_GoHere_WBeam");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,FUN_1000f398c);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,FUN_1000f3a3c,0xec9d4bb);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))();
  lVar5 = FUN_100174e14(lVar1);
  lVar6 = FUN_100175c28(lVar5 + 0x10);
  *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
  do {
    uVar2 = FUN_100173594(lVar5 + 0x88);
    local_70[0] = 0xf;
    local_68 = 1;
    FUN_1000b8d9c(uVar2,local_70);
  } while (lVar5 + 0x88 == lVar1);
  lVar1 = FUN_100173358(param_1);
  lVar5 = FUN_100174624(lVar1 + 0x10);
  lVar6 = FUN_100175c28(lVar5 + 0x10);
  *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
  do {
    lVar6 = FUN_100173b6c(lVar5 + 0x88);
    FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1_DescribeB*");
  } while (lVar5 + 0x88 == lVar1 + 0x10);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar5 = FUN_100174624(lVar1);
  lVar6 = FUN_100175ca0(lVar5 + 0x10);
  *(undefined4 *)(lVar6 + 8) = 2;
  do {
    uVar2 = FUN_1001745d4(lVar5 + 0x88);
    FUN_1000bd63c(uVar2,"Tutorial1","GwenDesktop","GwenRetreatToTurret");
  } while (lVar5 + 0x88 == lVar1);
  lVar6 = lVar5 + 0xa0;
  do {
    lVar7 = FUN_100174624(lVar6);
    lVar8 = FUN_100175c28(lVar7 + 0x10);
    *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
    do {
      uVar2 = FUN_1001745d4(lVar7 + 0x88);
      FUN_1000bd63c(uVar2,"Tutorial1","GwenJoystick","GwenRetreatToTurret");
    } while (lVar7 + 0x88 == lVar6);
    do {
      uVar2 = FUN_1001745d4(lVar7 + 0xa0);
      FUN_1000bd63c(uVar2,"Tutorial1","GwenTap","GwenRetreatToTurret");
    } while (lVar7 == lVar5);
  } while (lVar6 == lVar1);
  return;
}




void FUN_100177fd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  char cVar10;
  char *pcVar11;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_10017329c(param_2);
  lVar2 = FUN_1001741bc(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x16;
  lVar1 = FUN_1001741bc(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x10) = 0x17;
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  lVar2 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 0x40;
  *(byte *)(lVar2 + 0x22) = *(byte *)(lVar2 + 0x22) | 0xe;
  uVar3 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar3,"LevelTo6");
  lVar2 = FUN_100173544(lVar1);
  FUN_10017398c(lVar2 + 0x10);
  lVar4 = FUN_10017420c(lVar2 + 0x10);
  *(undefined4 *)(lVar4 + 0x10) = 0xd1b8360;
  *(undefined4 *)(lVar4 + 0x18) = 0xfff1ffff;
  lVar2 = lVar2 + 0x28;
  do {
    lVar4 = FUN_100174624(lVar2);
    lVar5 = FUN_100175c28(lVar4 + 0x10);
    *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
    do {
      lVar5 = FUN_100173b6c(lVar4 + 0x88);
      FUN_1000b86a8(lVar5 + 0x10,"*Sidebar_Ardan_Tutorial1_DescribeC*");
    } while (lVar4 + 0x88 == lVar2);
    lVar5 = lVar4 + 0xa0;
    do {
      lVar6 = FUN_100174624(lVar5);
      lVar7 = FUN_100175ca0(lVar6 + 0x10);
      *(undefined4 *)(lVar7 + 8) = 2;
      do {
        lVar7 = FUN_100173b6c(lVar6 + 0x88);
        FUN_1000b869c(lVar7 + 0x10,"*Cutscene_Ardan_PC_Tutorial1G*");
      } while (lVar6 + 0x88 == lVar5);
      do {
        lVar7 = FUN_100173b6c(lVar6 + 0xa0);
        FUN_1000b86a8(lVar7 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1G*");
      } while (lVar6 == lVar4);
    } while (lVar5 == lVar2);
    lVar4 = FUN_1001748e0(lVar2);
    *(undefined4 *)(lVar4 + 0x10) = 0x18;
    lVar4 = FUN_100173884(lVar2);
    lVar4 = FUN_1001798a4(lVar4 + 0x10);
    if (PTR_s_Ability__Gwen__C_1018599a8 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      cVar10 = *PTR_s_Ability__Gwen__C_1018599a8;
      uVar9 = 0x811c9dc5;
      if (cVar10 != '\0') {
        uVar9 = 0x811c9dc5;
        pcVar11 = PTR_s_Ability__Gwen__C_1018599a8;
        do {
          pcVar11 = pcVar11 + 1;
          uVar9 = (uVar9 ^ (int)cVar10) * 0x1000193;
          cVar10 = *pcVar11;
        } while (cVar10 != '\0');
      }
    }
    *(uint *)(lVar4 + 8) = uVar9;
    *(undefined4 *)(lVar4 + 0xc) = 1;
  } while (lVar2 == lVar1);
  uVar3 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar3,"AllowAttacksAndAbilities");
  lVar4 = FUN_100175414(lVar1);
  lVar2 = lVar4 + 0x28;
  do {
    lVar6 = FUN_100173544(lVar2);
    lVar5 = lVar6 + 0x10;
    FUN_10017398c(lVar5);
    lVar7 = FUN_10017420c(lVar5);
    *(undefined4 *)(lVar7 + 0x10) = 0xca0b2205;
    *(undefined4 *)(lVar7 + 0x18) = 0xffffffbf;
    uVar3 = FUN_100173594(lVar5);
    local_70[0] = 3;
    local_68 = 1;
    FUN_1000b8d9c(uVar3,local_70);
    lVar6 = lVar6 + 0x28;
    do {
      lVar5 = FUN_100174930(lVar6);
      *(undefined4 *)(lVar5 + 0x10) = 0xf9935edd;
      *(byte *)(lVar5 + 0x20) = *(byte *)(lVar5 + 0x20) | 0x40;
      lVar5 = FUN_100173884(lVar6);
      lVar5 = FUN_1001799fc(lVar5 + 0x10);
      if (PTR_s_Ability__Gwen__C_1018599a8 == (undefined *)0x0) {
        uVar9 = 0;
      }
      else {
        cVar10 = *PTR_s_Ability__Gwen__C_1018599a8;
        uVar9 = 0x811c9dc5;
        if (cVar10 != '\0') {
          uVar9 = 0x811c9dc5;
          pcVar11 = PTR_s_Ability__Gwen__C_1018599a8;
          do {
            pcVar11 = pcVar11 + 1;
            uVar9 = (uVar9 ^ (int)cVar10) * 0x1000193;
            cVar10 = *pcVar11;
          } while (cVar10 != '\0');
        }
      }
      *(uint *)(lVar5 + 8) = uVar9;
      *(undefined4 *)(lVar5 + 0xc) = 2;
    } while (lVar6 == lVar2);
  } while (lVar2 == lVar1);
  lVar4 = lVar4 + 0x40;
  do {
    lVar2 = FUN_100174624(lVar4);
    lVar5 = FUN_100175c28(lVar2 + 0x10);
    *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
    do {
      lVar5 = FUN_100173b6c(lVar2 + 0x88);
      FUN_1000b86a8(lVar5 + 0x10,"*Sidebar_Ardan_Tutorial1G*");
    } while (lVar2 + 0x88 == lVar4);
    lVar2 = FUN_100173544(lVar4);
    uVar3 = FUN_100173ad0(lVar2 + 0x10);
    uVar8 = FUN_1004e0150("TUTORIAL1_OSD_DEFEAT_CATHERINE",0);
    FUN_1000b8a2c(uVar3,uVar8);
    do {
      FUN_1001735e4(lVar2 + 0x28);
    } while (lVar2 + 0x28 == lVar4);
  } while (lVar4 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174930(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
  *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar4 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 2;
  do {
    uVar3 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar3,"Tutorial1","GwenDesktop","UsedUltimate");
  } while (lVar2 + 0x88 == lVar1);
  lVar4 = lVar2 + 0xa0;
  do {
    lVar5 = FUN_100174624(lVar4);
    lVar6 = FUN_100175c28(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar3 = FUN_1001745d4(lVar5 + 0x88);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenJoystick","UsedUltimate");
    } while (lVar5 + 0x88 == lVar4);
    do {
      uVar3 = FUN_1001745d4(lVar5 + 0xa0);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenTap","UsedUltimate");
    } while (lVar5 == lVar2);
  } while (lVar4 == lVar1);
  return;
}




void FUN_1001784fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  char *pcVar12;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    uVar4 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar4,"Tutorial1","GwenDesktop","CatherineDied");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = lVar2 + 0xa0;
  do {
    lVar5 = FUN_100174624(lVar3);
    lVar6 = FUN_100175c28(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      uVar4 = FUN_1001745d4(lVar5 + 0x88);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenJoystick","CatherineDied");
    } while (lVar5 + 0x88 == lVar3);
    do {
      uVar4 = FUN_1001745d4(lVar5 + 0xa0);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenTap","CatherineDied");
    } while (lVar5 == lVar2);
  } while (lVar3 == lVar1);
  lVar2 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x1a;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    lVar3 = FUN_100173b6c(lVar2 + 0x88);
    FUN_1000b869c(lVar3 + 0x10,"*Cutscene_Ardan_PC_Tutorial1H*");
  } while (lVar2 + 0x88 == lVar1);
  lVar2 = FUN_100175414(lVar1);
  do {
    lVar3 = FUN_100173544();
    uVar4 = FUN_100173594(lVar3 + 0x10);
    local_70[0] = 7;
    local_68 = 1;
    FUN_1000b8d9c(uVar4,local_70);
    uVar4 = FUN_100173ad0(lVar3 + 0x10);
    uVar7 = FUN_1004e0150("TUTORIAL1_OSD_HEALINGFLASK",0);
    FUN_1000b8a2c(uVar4,uVar7);
    lVar3 = lVar3 + 0x28;
    do {
      lVar5 = FUN_100174930(lVar3);
      *(undefined4 *)(lVar5 + 0x10) = 0xf9935edd;
      *(byte *)(lVar5 + 0x20) = *(byte *)(lVar5 + 0x20) | 0x80;
      lVar5 = FUN_100173884(lVar3);
      lVar5 = FUN_100176040(lVar5 + 0x10);
      if (PTR_s_Ability__Item__HealingFlask_101858e00 == (undefined *)0x0) {
        uVar10 = 0;
      }
      else {
        cVar11 = *PTR_s_Ability__Item__HealingFlask_101858e00;
        uVar10 = 0x811c9dc5;
        if (cVar11 != '\0') {
          uVar10 = 0x811c9dc5;
          pcVar12 = PTR_s_Ability__Item__HealingFlask_101858e00;
          do {
            pcVar12 = pcVar12 + 1;
            uVar10 = (uVar10 ^ (int)cVar11) * 0x1000193;
            cVar11 = *pcVar12;
          } while (cVar11 != '\0');
        }
      }
      *(uint *)(lVar5 + 8) = uVar10;
      lVar5 = FUN_100174624(lVar3);
      lVar6 = FUN_100175ca0(lVar5 + 0x10);
      *(undefined4 *)(lVar6 + 8) = 2;
      do {
        uVar4 = FUN_1001745d4(lVar5 + 0x88);
        FUN_1000bd63c(uVar4,"Tutorial1","GwenDesktop","UsedHealingFlask");
      } while (lVar5 + 0x88 == lVar3);
      lVar6 = lVar5 + 0xa0;
      do {
        lVar8 = FUN_100174624(lVar6);
        lVar9 = FUN_100175c28(lVar8 + 0x10);
        *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) | 2;
        do {
          uVar4 = FUN_1001745d4(lVar8 + 0x88);
          FUN_1000bd63c(uVar4,"Tutorial1","GwenJoystick","UsedHealingFlask");
        } while (lVar8 + 0x88 == lVar6);
        do {
          uVar4 = FUN_1001745d4(lVar8 + 0xa0);
          FUN_1000bd63c(uVar4,"Tutorial1","GwenTap","UsedHealingFlask");
        } while (lVar8 == lVar5);
      } while (lVar6 == lVar3);
      uVar4 = FUN_1001742ec(lVar3);
      FUN_1000b85dc(uVar4,"Tutorial_UseHealingFlask_Done");
    } while (lVar3 == lVar2 + 0x28);
  } while (lVar2 + 0x28 == lVar1);
  lVar2 = lVar2 + 0x40;
  do {
    lVar3 = FUN_100174624(lVar2);
    lVar5 = FUN_100175c28(lVar3 + 0x10);
    *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
    do {
      lVar5 = FUN_100173b6c(lVar3 + 0x88);
      FUN_1000b86a8(lVar5 + 0x10,"*Sidebar_Ardan_Tutorial1H*");
    } while (lVar3 + 0x88 == lVar2);
    do {
      lVar5 = FUN_100174624(lVar3 + 0xa0);
      lVar6 = FUN_100175ca0(lVar5 + 0x10);
      *(undefined4 *)(lVar6 + 8) = 2;
      do {
        lVar6 = FUN_100173b6c(lVar5 + 0xa0);
        FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1H*");
      } while (lVar5 == lVar3);
    } while (lVar3 + 0xa0 == lVar2);
  } while (lVar2 == lVar1);
  return;
}




void FUN_100178930(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_100173544(lVar1 + 0x10);
  uVar3 = FUN_100173ad0(lVar2 + 0x10);
  uVar4 = FUN_1004e0150("TUTORIAL1_OSD_CLEAR_MINIONS",0);
  FUN_1000b8a2c(uVar3,uVar4);
  lVar2 = lVar2 + 0x28;
  do {
    lVar5 = FUN_100174624(lVar2);
    lVar6 = FUN_100175c28(lVar5 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      lVar6 = FUN_100173b6c(lVar5 + 0x88);
      FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1J*");
    } while (lVar5 + 0x88 == lVar2);
    do {
      lVar6 = FUN_100173b6c(lVar5 + 0xa0);
      FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_PC_Tutorial1I*");
    } while (lVar5 + 0xa0 == lVar2);
    FUN_1001735e4(lVar2);
  } while (lVar2 == lVar1 + 0x10);
  lVar2 = FUN_100174980(param_1);
  lVar2 = lVar2 + 0x10;
  lVar1 = FUN_100174624(lVar2);
  lVar5 = FUN_100175ca0(lVar1 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 2;
  do {
    uVar3 = FUN_1001745d4(lVar1 + 0x88);
    FUN_1000bd63c(uVar3,"Tutorial1","GwenDesktop","KilledFirstWave");
  } while (lVar1 + 0x88 == lVar2);
  lVar5 = lVar1 + 0xa0;
  do {
    lVar6 = FUN_100174624(lVar5);
    lVar7 = FUN_100175c28(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar3 = FUN_1001745d4(lVar6 + 0x88);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenJoystick","KilledFirstWave");
    } while (lVar6 + 0x88 == lVar5);
    do {
      uVar3 = FUN_1001745d4(lVar6 + 0xa0);
      FUN_1000bd63c(uVar3,"Tutorial1","GwenTap","KilledFirstWave");
    } while (lVar6 == lVar1);
  } while (lVar5 == lVar2);
  return;
}




void FUN_100178b24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = FUN_10017329c(param_2);
  plVar2 = (long *)FUN_100174890(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_1000f3a94,0x9ed622);
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = FUN_100173358(param_1);
  lVar1 = FUN_100173544(lVar3 + 0x10);
  uVar4 = FUN_100173ad0(lVar1 + 0x10);
  uVar5 = FUN_1004e0150("TUTORIAL1_OSD_DESTROY_TURRET",0);
  FUN_1000b8a2c(uVar4,uVar5);
  lVar1 = lVar1 + 0x28;
  do {
    lVar6 = FUN_100174624(lVar1);
    lVar7 = FUN_100175c28(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      lVar7 = FUN_100173b6c(lVar6 + 0x88);
      FUN_1000b86a8(lVar7 + 0x10,"*Sidebar_Ardan_Tutorial1K*");
    } while (lVar6 + 0x88 == lVar1);
    do {
      lVar7 = FUN_100173b6c(lVar6 + 0xa0);
      FUN_1000b86a8(lVar7 + 0x10,"*Sidebar_Ardan_PC_Tutorial1J*");
    } while (lVar6 + 0xa0 == lVar1);
    FUN_1001735e4(lVar1);
  } while (lVar1 == lVar3 + 0x10);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_100174624(lVar1);
  lVar6 = FUN_100175ca0(lVar3 + 0x10);
  *(undefined4 *)(lVar6 + 8) = 2;
  do {
    uVar4 = FUN_1001745d4(lVar3 + 0x88);
    FUN_1000bd63c(uVar4,"Tutorial1","GwenDesktop","GwenInTurretRange");
  } while (lVar3 + 0x88 == lVar1);
  lVar6 = lVar3 + 0xa0;
  do {
    lVar7 = FUN_100174624(lVar6);
    lVar8 = FUN_100175c28(lVar7 + 0x10);
    *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
    do {
      uVar4 = FUN_1001745d4(lVar7 + 0x88);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenJoystick","GwenInTurretRange");
    } while (lVar7 + 0x88 == lVar6);
    do {
      uVar4 = FUN_1001745d4(lVar7 + 0xa0);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenTap","GwenInTurretRange");
    } while (lVar7 == lVar3);
  } while (lVar6 == lVar1);
  return;
}




void FUN_100178d68(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10017342c(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_100173544(lVar1);
  FUN_10017398c(lVar2 + 0x10);
  lVar3 = FUN_10017420c(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x10) = 0xd1b8360;
  *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
  lVar2 = lVar2 + 0x28;
  do {
    lVar3 = FUN_100174624(lVar2);
    lVar4 = FUN_100175ca0(lVar3 + 0x10);
    *(undefined4 *)(lVar4 + 8) = 2;
    do {
      lVar4 = FUN_100173b6c(lVar3 + 0x88);
      FUN_1000b869c(lVar4 + 0x10,"*Cutscene_Ardan_PC_Tutorial1K*");
    } while (lVar3 + 0x88 == lVar2);
    lVar4 = lVar3 + 0xa0;
    do {
      lVar5 = FUN_100174624(lVar4);
      lVar6 = FUN_100175c28(lVar5 + 0x10);
      *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
      do {
        lVar6 = FUN_100173b6c(lVar5 + 0x88);
        FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1_TurretFirstRule*");
      } while (lVar5 + 0x88 == lVar4);
      do {
        lVar6 = FUN_100173b6c(lVar5 + 0xa0);
        FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1_TurretFirstRule*");
      } while (lVar5 == lVar3);
    } while (lVar4 == lVar2);
  } while (lVar2 == lVar1);
  lVar3 = FUN_100173544(lVar1);
  lVar2 = lVar3 + 0x10;
  plVar7 = (long *)FUN_100174890(lVar2);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Ping_Tutorial");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,FUN_1000f3a94,0x32342ba8);
  (**(code **)(*plVar7 + 0x58))();
  plVar7 = (long *)FUN_100174890(lVar2);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_GoHere_WBeam");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))(plVar7,FUN_1000f398c);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x80))(plVar7,FUN_1000f3a3c,0x32342ba8);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))();
  (**(code **)(*plVar7 + 0x58))();
  lVar4 = FUN_100174e14(lVar2);
  lVar5 = FUN_100175c28(lVar4 + 0x10);
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    uVar8 = FUN_100173594(lVar4 + 0x88);
    local_70[0] = 0xf;
    local_68 = 1;
    FUN_1000b8d9c(uVar8,local_70);
  } while (lVar4 + 0x88 == lVar2);
  do {
    FUN_1001735e4(lVar3 + 0x28);
  } while (lVar3 + 0x28 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    uVar8 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar8,"Tutorial1","GwenDesktop","RunFromTurret");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = lVar2 + 0xa0;
  do {
    lVar4 = FUN_100174624(lVar3);
    lVar5 = FUN_100175c28(lVar4 + 0x10);
    *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
    do {
      uVar8 = FUN_1001745d4(lVar4 + 0x88);
      FUN_1000bd63c(uVar8,"Tutorial1","GwenJoystick","RunFromTurret");
    } while (lVar4 + 0x88 == lVar3);
    do {
      uVar8 = FUN_1001745d4(lVar4 + 0xa0);
      FUN_1000bd63c(uVar8,"Tutorial1","GwenTap","RunFromTurret");
    } while (lVar4 == lVar2);
  } while (lVar3 == lVar1);
  return;
}




void FUN_1001790d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = FUN_10017329c(param_2);
  uVar2 = FUN_100173ad0(lVar1 + 0x10);
  uVar3 = FUN_1004e0150("TUTORIAL1_OSD_DESTROY_TURRET",0);
  FUN_1000b8a2c(uVar2,uVar3);
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  lVar4 = FUN_100174624(lVar1);
  lVar5 = FUN_100175c28(lVar4 + 0x10);
  *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) | 2;
  do {
    lVar5 = FUN_100173b6c(lVar4 + 0x88);
    FUN_1000b86a8(lVar5 + 0x10,"*Sidebar_Ardan_Tutorial1L_2*");
  } while (lVar4 + 0x88 == lVar1);
  do {
    lVar5 = FUN_100173b6c(lVar4 + 0xa0);
    FUN_1000b86a8(lVar5 + 0x10,"*Sidebar_Ardan_PC_Tutorial1L*");
  } while (lVar4 + 0xa0 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar4 = FUN_100174624(lVar1);
  lVar5 = FUN_100175ca0(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 2;
  do {
    uVar2 = FUN_1001745d4(lVar4 + 0x88);
    FUN_1000bd63c(uVar2,"Tutorial1","GwenDesktop","KillLastWave");
  } while (lVar4 + 0x88 == lVar1);
  lVar5 = lVar4 + 0xa0;
  do {
    lVar6 = FUN_100174624(lVar5);
    lVar7 = FUN_100175c28(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar2 = FUN_1001745d4(lVar6 + 0x88);
      FUN_1000bd63c(uVar2,"Tutorial1","GwenJoystick","KillLastWave");
    } while (lVar6 + 0x88 == lVar5);
    do {
      uVar2 = FUN_1001745d4(lVar6 + 0xa0);
      FUN_1000bd63c(uVar2,"Tutorial1","GwenTap","KillLastWave");
    } while (lVar6 == lVar4);
  } while (lVar5 == lVar1);
  return;
}




void FUN_1001792b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_10017329c(param_2);
  plVar2 = (long *)FUN_100174890(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_1000f3a94,0x9ed622);
  (**(code **)(*plVar2 + 0x58))();
  uVar3 = FUN_100173ad0(lVar1 + 0x10);
  uVar4 = FUN_1004e0150("TUTORIAL1_OSD_DESTROY_TURRET",0);
  FUN_1000b8a2c(uVar3,uVar4);
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  lVar5 = FUN_100174624(lVar1);
  lVar6 = FUN_100175c28(lVar5 + 0x10);
  *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
  do {
    lVar6 = FUN_100173b6c(lVar5 + 0x88);
    FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1M*");
  } while (lVar5 + 0x88 == lVar1);
  do {
    lVar6 = FUN_100173b6c(lVar5 + 0xa0);
    FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_PC_Tutorial1M*");
  } while (lVar5 + 0xa0 == lVar1);
  lVar5 = FUN_100173544(lVar1);
  lVar6 = FUN_100174e14(lVar5 + 0x10);
  lVar7 = FUN_100175c28(lVar6 + 0x10);
  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
  do {
    uVar3 = FUN_100173594(lVar6 + 0x88);
    local_70[0] = 0x11;
    local_68 = 1;
    FUN_1000b8d9c(uVar3,local_70);
  } while (lVar6 + 0x88 == lVar5 + 0x10);
  lVar6 = lVar5 + 0x28;
  do {
    lVar7 = FUN_100174624(lVar6);
    lVar8 = FUN_100175c28(lVar7 + 0x10);
    *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) | 2;
    do {
      lVar8 = FUN_1001748e0(lVar7 + 0x88);
      *(undefined4 *)(lVar8 + 0x10) = 0x19;
    } while (lVar7 + 0x88 == lVar6);
    lVar8 = FUN_100173544(lVar6);
    FUN_10017398c(lVar8 + 0x10);
    lVar7 = FUN_10017420c(lVar8 + 0x10);
    *(undefined4 *)(lVar7 + 0x10) = 0xd1b8360;
    *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
    lVar7 = lVar8 + 0x28;
    do {
      lVar9 = FUN_100174624(lVar7);
      lVar10 = FUN_100175c28(lVar9 + 0x10);
      *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 2;
      do {
        lVar10 = FUN_100173b6c(lVar9 + 0x88);
        FUN_1000b86a8(lVar10 + 0x10,"*Sidebar_Ardan_Tutorial1_TurretSecondRule*");
      } while (lVar9 + 0x88 == lVar7);
      lVar10 = lVar9 + 0xa0;
      do {
        lVar11 = FUN_100174624(lVar10);
        lVar12 = FUN_100175ca0(lVar11 + 0x10);
        *(undefined4 *)(lVar12 + 8) = 2;
        do {
          lVar12 = FUN_100173b6c(lVar11 + 0x88);
          FUN_1000b869c(lVar12 + 0x10,"*Cutscene_Ardan_PC_Tutorial1N*");
        } while (lVar11 + 0x88 == lVar10);
        do {
          lVar12 = FUN_100173b6c(lVar11 + 0xa0);
          FUN_1000b86a8(lVar12 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1N*");
        } while (lVar11 == lVar9);
      } while (lVar10 == lVar7);
    } while (lVar8 == lVar5);
    lVar7 = FUN_100173544(lVar6);
    do {
      FUN_1001735e4(lVar7 + 0x28);
    } while (lVar7 == lVar5);
  } while (lVar6 == lVar1);
  return;
}




void FUN_1001795c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    lVar3 = FUN_100173b6c(lVar2 + 0x88);
    FUN_1000b869c(lVar3 + 0x10,"*Cutscene_Ardan_PC_Tutorial1O*");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = FUN_100173544(lVar1);
  lVar2 = lVar3 + 0x10;
  uVar4 = FUN_100173ad0(lVar2);
  uVar5 = FUN_1004e0150("TUTORIAL1_OSD_RECALL",0);
  FUN_1000b8a2c(uVar4,uVar5);
  lVar6 = FUN_10017420c(lVar2);
  *(undefined4 *)(lVar6 + 0x10) = 0x4af62be3;
  *(undefined4 *)(lVar6 + 0x18) = 0xfffeffff;
  uVar4 = FUN_100173594(lVar2);
  local_70[0] = 10;
  local_68 = 1;
  FUN_1000b8d9c(uVar4,local_70);
  lVar3 = lVar3 + 0x28;
  do {
    lVar2 = FUN_1001748e0(lVar3);
    *(undefined4 *)(lVar2 + 0x10) = 0xb;
    lVar2 = FUN_100174930(lVar3);
    *(undefined4 *)(lVar2 + 0x10) = 0xf9935edd;
    *(byte *)(lVar2 + 0x22) = *(byte *)(lVar2 + 0x22) | 1;
    lVar2 = FUN_100174624(lVar3);
    lVar6 = FUN_100175c28(lVar2 + 0x10);
    *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) | 2;
    do {
      lVar6 = FUN_100173b6c(lVar2 + 0x88);
      FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_Ardan_Tutorial1P*");
    } while (lVar2 + 0x88 == lVar3);
    do {
      lVar6 = FUN_100174624(lVar2 + 0xa0);
      lVar7 = FUN_100175ca0(lVar6 + 0x10);
      *(undefined4 *)(lVar7 + 8) = 2;
      do {
        lVar7 = FUN_100173b6c(lVar6 + 0xa0);
        FUN_1000b86a8(lVar7 + 0x10,"*Sidebar_Ardan_Tap_Tutorial1P*");
      } while (lVar6 == lVar2);
    } while (lVar2 + 0xa0 == lVar3);
    FUN_1001735e4(lVar3);
  } while (lVar3 == lVar1);
  lVar1 = FUN_100174980(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100174624(lVar1);
  lVar3 = FUN_100175ca0(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 2;
  do {
    uVar4 = FUN_1001745d4(lVar2 + 0x88);
    FUN_1000bd63c(uVar4,"Tutorial1","GwenDesktop","UsedRecallButton");
  } while (lVar2 + 0x88 == lVar1);
  lVar3 = lVar2 + 0xa0;
  do {
    lVar6 = FUN_100174624(lVar3);
    lVar7 = FUN_100175c28(lVar6 + 0x10);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    do {
      uVar4 = FUN_1001745d4(lVar6 + 0x88);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenJoystick","UsedRecallButton");
    } while (lVar6 + 0x88 == lVar3);
    do {
      uVar4 = FUN_1001745d4(lVar6 + 0xa0);
      FUN_1000bd63c(uVar4,"Tutorial1","GwenTap","UsedRecallButton");
    } while (lVar6 == lVar2);
  } while (lVar3 == lVar1);
  return;
}




void FUN_1001798a0(void)

{
  return;
}




undefined8 * FUN_1001798a4(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d7e0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_100179908(void)

{
  return;
}




void FUN_100179910(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_1000f398c(param_2);
  if (lVar1 != 0) {
    FUN_10048c6cc(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




undefined8 * FUN_10017994c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d808;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_1001799b4(void)

{
  return;
}




bool FUN_1001799bc(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_1000f398c(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    uVar2 = FUN_10048c910(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = *(byte *)(param_1 + 0x14) != uVar2;
  }
  return bVar1;
}




undefined8 * FUN_1001799fc(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d830;
      *(undefined8 *)(param_1 + 0x18) = 0x600000000;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_100179a6c(void)

{
  return;
}




void FUN_100179a74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_1000f398c(param_2);
  if (lVar1 != 0) {
    FUN_10048ca6c(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_100179ab0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10017416c(param_2);
  FUN_10017425c(lVar1 + 0x10);
  lVar1 = FUN_1001741bc(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10017329c(param_2);
  uVar2 = FUN_1001732ec(lVar1 + 0x10);
  uVar2 = FUN_1000bd484(uVar2,"Tutorial02");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_Loading");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_Start");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_KillMinionWave");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_AttackTheTurret");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_RunFromTurret");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_NextMinionWave");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_KillTheTurret");
  FUN_1000bd48c(uVar2,"Tutorial02_EndGame");
  return;
}




void FUN_100179b68(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_10017342c(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_1001742ec(lVar1 + 0x10);
  FUN_1000b85dc(uVar3,"Done_Tutorial02_Loading");
  return;
}




void FUN_100179ba8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar2,"Tutorial2","Opening","CutsceneBegin");
  lVar3 = FUN_100173b6c(lVar1);
  FUN_1000b869c(lVar3 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial2A*");
  lVar3 = FUN_100173b6c(lVar1);
  FUN_1000b869c(lVar3 + 0x10,"*Cutscene_KoshkaCatherine_Tutorial2B*");
  uVar2 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar2,"Tutorial2","Opening","CutsceneEnd");
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 7;
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x1a;
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x14;
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x15;
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x16;
  lVar3 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar3 + 0x10) = 0x17;
  uVar2 = FUN_1001742ec(lVar1);
  FUN_1000b85dc(uVar2,"Done_Tutorial02_Start");
  return;
}




void FUN_100179cc8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_100173544(lVar1);
  uVar3 = FUN_100173ad0(lVar2 + 0x10);
  uVar4 = FUN_1004e0150("TUTORIAL2_TOOLTIP_TAP_TO_LEARN_TWIRLY",0);
  FUN_1000b8a2c(uVar3,uVar4);
  uVar3 = FUN_100173594(lVar2 + 0x10);
  local_70[0] = 5;
  local_68 = 1;
  uVar3 = FUN_1000b8d9c(uVar3,local_70);
  FUN_1000b8db0(uVar3,0);
  lVar2 = lVar2 + 0x28;
  do {
    lVar5 = FUN_100173884(lVar2);
    lVar5 = FUN_100175f34(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x18) = 0x1d00000002;
    *(undefined4 *)(lVar5 + 8) = 0x3f800000;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    uVar3 = FUN_1001745d4(lVar2);
    FUN_1000bd63c(uVar3,"Tutorial2","FirstWave","PlayerGainsControl");
    uVar3 = FUN_1001742ec(lVar2);
    FUN_1000b85dc(uVar3,"Tutorial02_CancelInvincibility");
  } while (lVar2 == lVar1);
  lVar2 = FUN_1001748e0(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0x1c;
  lVar2 = FUN_100173544(lVar1);
  uVar3 = FUN_100173ad0(lVar2 + 0x10);
  uVar4 = FUN_1004e0150("TUTORIAL2_TOOLTIP_DEFEAT_THE_WAVE",0);
  FUN_1000b8a2c(uVar3,uVar4);
  do {
    FUN_1001735e4(lVar2 + 0x28);
  } while (lVar2 + 0x28 == lVar1);
  return;
}




void FUN_100179e44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = FUN_10017329c(param_2);
  plVar2 = (long *)FUN_100174890(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_1000f3a94,0x9ed622);
  (**(code **)(*plVar2 + 0x58))();
  uVar3 = FUN_100173ad0(lVar1 + 0x10);
  uVar4 = FUN_1004e0150("TUTORIAL2_TOOLTIP_ATTACK_THE_TURRET",0);
  FUN_1000b8a2c(uVar3,uVar4);
  lVar1 = FUN_100173358(param_1);
  lVar1 = lVar1 + 0x10;
  uVar3 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar3,"Tutorial2","FirstWave","PlayerApproachesTurret");
  lVar5 = FUN_100174624(lVar1);
  lVar6 = FUN_100175bbc(lVar5 + 0x10);
  *(code **)(lVar6 + 8) = FUN_100174674;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  do {
    lVar6 = FUN_100173b6c(lVar5 + 0x88);
    FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2B_2*");
  } while (lVar5 + 0x88 == lVar1);
  do {
    lVar6 = FUN_100173b6c(lVar5 + 0xa0);
    FUN_1000b86a8(lVar6 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2B*");
  } while (lVar5 + 0xa0 == lVar1);
  lVar1 = FUN_100173b6c(lVar1);
  FUN_1000b86a8(lVar1 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2C*");
  return;
}




void FUN_100179f94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10017329c(param_2);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100174890(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_1000f3a94,0xfed70048);
  (**(code **)(*plVar2 + 0x58))();
  uVar3 = FUN_100174b30(lVar1);
  FUN_1000b8b00(uVar3,FUN_1000f3a3c,0x374e8faa);
  uVar3 = FUN_100173ad0(lVar1);
  uVar4 = FUN_1004e0150("TUTORIAL2_TOOLTIP_RUN_FROM_TURRET",0);
  FUN_1000b8a2c(uVar3,uVar4);
  lVar1 = FUN_100173358(param_1);
  uVar3 = FUN_1001745d4(lVar1 + 0x10);
  FUN_1000bd63c(uVar3,"Tutorial2","FirstWave","FirstWaveDead");
  lVar1 = FUN_100173b6c(lVar1 + 0x10);
  FUN_1000b86a8(lVar1 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2D*");
  return;
}




void FUN_10017a088(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = FUN_100173358();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_1001745d4(lVar1);
  FUN_1000bd63c(uVar2,"Tutorial2","SecondWave","PlayerSecondApproach");
  lVar3 = FUN_100174624(lVar1);
  lVar4 = FUN_100175bbc(lVar3 + 0x10);
  *(code **)(lVar4 + 8) = FUN_100174674;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  do {
    lVar4 = FUN_100173b6c(lVar3 + 0x88);
    FUN_1000b86a8(lVar4 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2E_2*");
  } while (lVar3 + 0x88 == lVar1);
  do {
    lVar4 = FUN_100173b6c(lVar3 + 0xa0);
    FUN_1000b86a8(lVar4 + 0x10,"*Sidebar_KoshkaCatherine_Tutorial2E*");
  } while (lVar3 + 0xa0 == lVar1);
  return;
}




void FUN_10017a144(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10017329c(param_2);
  plVar2 = (long *)FUN_100174890(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tutorial_Chevrons");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,FUN_1000f3a94,0x9ed622);
  (**(code **)(*plVar2 + 0x58))();
  uVar3 = FUN_100173ad0(lVar1 + 0x10);
  uVar4 = FUN_1004e0150("TUTORIAL2_TOOLTIP_DESTROY_THE_TURRET",0);
  FUN_1000b8a2c(uVar3,uVar4);
  return;
}




void FUN_10017a1d0(void)

{
  return;
}




void FUN_10017a1d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10017416c(param_2);
  FUN_10017425c(lVar1 + 0x10);
  lVar1 = FUN_10017329c(param_2);
  uVar2 = FUN_1001732ec(lVar1 + 0x10);
  uVar2 = FUN_1000bd484(uVar2,"Tutorial02_Joystick");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_Joystick_Loading");
  uVar2 = FUN_1000bd48c(uVar2,"Tutorial02_Joystick_Start");
  FUN_1000bd48c(uVar2,"Tutorial02_Joystick_Done");
  return;
}




void FUN_10017a23c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100173358();
  lVar2 = FUN_10017342c(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  uVar3 = FUN_1001742ec(lVar1 + 0x10);
  FUN_1000b85dc(uVar3,"Done_Tutorial02_Joystick_Loading");
  return;
}




void FUN_10017a27c(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  long *plVar11;
  
  lVar2 = FUN_100173358();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_100173544(lVar2);
  FUN_10017398c(lVar3 + 0x10);
  do {
    lVar4 = FUN_100173b6c(lVar3 + 0x28);
    FUN_1000b869c(lVar4 + 0x10,"*Cutscene_Ardan_Tutorial2Ab*");
  } while (lVar3 + 0x28 == lVar2);
  lVar3 = FUN_100173884(lVar2);
  lVar3 = FUN_10017a4d8(lVar3 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 5;
  *(undefined1 *)(lVar3 + 0xc) = 0;
  lVar3 = FUN_100173544(lVar2);
  FUN_10017398c(lVar3 + 0x10);
  lVar3 = lVar3 + 0x28;
  do {
    lVar4 = FUN_100173884(lVar3);
    lVar8 = 0;
    bVar1 = true;
    do {
      bVar10 = bVar1;
      plVar11 = (long *)(lVar4 + lVar8 * 0x38 + 0x18);
      if (*plVar11 == 0) {
        puVar9 = (undefined8 *)(lVar4 + lVar8 * 0x38 + 0x20);
        *puVar9 = &PTR_FUN_10145d880;
        *plVar11 = (long)puVar9;
        goto LAB_10017a390;
      }
      lVar8 = 1;
      bVar1 = false;
    } while (bVar10);
    FUN_1004d22dc(0);
LAB_10017a390:
    lVar4 = FUN_100174624(lVar3);
    lVar8 = FUN_100175ca0(lVar4 + 0x10);
    *(undefined4 *)(lVar8 + 8) = 2;
    do {
      uVar5 = FUN_1001745d4(lVar4 + 0x88);
      FUN_1000bd63c(uVar5,"Tutorial2","GwenDesktop","BuildSelected");
    } while (lVar4 + 0x88 == lVar3);
    lVar8 = lVar4 + 0xa0;
    do {
      lVar6 = FUN_100174624(lVar8);
      lVar7 = FUN_100175c28(lVar6 + 0x10);
      *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
      do {
        uVar5 = FUN_1001745d4(lVar6 + 0x88);
        FUN_1000bd63c(uVar5,"Tutorial2","GwenJoystick","BuildSelected");
      } while (lVar6 + 0x88 == lVar8);
      do {
        uVar5 = FUN_1001745d4(lVar6 + 0xa0);
        FUN_1000bd63c(uVar5,"Tutorial2","GwenTap","BuildSelected");
      } while (lVar6 == lVar4);
    } while (lVar8 == lVar3);
    lVar4 = FUN_100173884(lVar3);
    lVar4 = FUN_10017a4d8(lVar4 + 0x10);
    *(undefined4 *)(lVar4 + 8) = 0;
    *(undefined1 *)(lVar4 + 0xc) = 0;
    if (lVar3 != lVar2) {
      lVar3 = FUN_10017342c(lVar2);
      *(undefined4 *)(lVar3 + 0x10) = 0x40400000;
      lVar2 = FUN_1001739dc(lVar2);
      FUN_1000b86a8(lVar2 + 0x10,"*Sidebar_Ardan_Tutorial2_Path*");
      return;
    }
  } while( true );
}




void FUN_10017a4b0(void)

{
  long lVar1;
  
  lVar1 = FUN_100173358();
  lVar1 = FUN_100173b6c(lVar1 + 0x10);
  FUN_1000b86a8(lVar1 + 0x10,"*Sidebar_Ardan_Tutorial2_EndGame*");
  return;
}




undefined8 * FUN_10017a4d8(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145d858;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined2 *)(param_1 + 0x1c) = 1;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10017a548(void)

{
  return;
}




bool FUN_10017a550(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = FUN_1000b84a4(*(undefined4 *)(param_1 + 8));
  }
  else {
    uVar1 = FUN_1000b845c();
  }
  return *(byte *)(param_1 + 0xd) != uVar1;
}




void FUN_10017a590(void)

{
  return;
}




long FUN_10017a59c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10014f4a0();
  *puVar1 = &PTR_thunk_FUN_10017a7a0_10145d8a8;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_10001549c(puVar1 + 5,"CharmEquipedEmoji");
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  FUN_10017a5f4(param_1);
  return param_1;
}




void FUN_10017a7a0(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_10017a7a0_10145d8a8;
  uVar2 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x89];
      if (*(long *)(lVar3 + uVar4 * 8) != 0) {
        pvVar1 = (void *)thunk_FUN_10017b3a0();
        operator_delete(pvVar1);
        lVar3 = param_1[0x89];
        uVar2 = (ulong)*(uint *)(param_1 + 0x88);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[0x89] == (void *)0x0) {
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    operator_delete__((void *)param_1[0x89]);
    param_1[0x88] = 0;
    param_1[0x89] = 0;
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_10014f51c(param_1);
  return;
}




void thunk_FUN_10017a7a0(void)

{
  FUN_10017a7a0();
  return;
}




void FUN_10017a854(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017a7a0();
  operator_delete(pvVar1);
  return;
}




void FUN_10017a868(long param_1,long param_2)

{
  void **ppvVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  void *local_70 [2];
  char local_59;
  undefined8 **local_58;
  undefined8 uStack_50;
  long local_48;
  
  *(undefined8 *)(param_1 + 0x450) = 0;
  uVar6 = (ulong)*(uint *)(param_2 + 0x68);
  if (*(uint *)(param_2 + 0x68) == 0) {
LAB_10017a8fc:
    lVar5 = *(long *)(param_1 + 0x458);
    *(long *)(param_1 + 0x450) = lVar5;
    if (lVar5 == 0) goto LAB_10017a910;
    uVar4 = 0;
  }
  else {
    lVar8 = 0;
    lVar5 = *(long *)(param_2 + 0x70);
    do {
      lVar2 = FUN_10017aa2c(param_1,lVar5);
      if (lVar2 != 0) {
        if (*(char *)(lVar5 + 0x18) == '\0') {
          if (*(char *)(lVar5 + 0x19) == '\0') {
            *(undefined4 *)(lVar2 + 0x60) = 3;
          }
          else {
            *(undefined4 *)(lVar2 + 0x60) = 2;
          }
        }
        else {
          *(long *)(param_1 + 0x450) = lVar2;
          *(undefined4 *)(lVar2 + 0x60) = 0;
          lVar8 = lVar2;
        }
      }
      lVar5 = lVar5 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (lVar8 == 0) goto LAB_10017a8fc;
    lVar5 = *(long *)(param_1 + 0x458);
    if (lVar5 == 0) goto LAB_10017a910;
    uVar4 = 2;
  }
  *(undefined4 *)(lVar5 + 0x60) = uVar4;
LAB_10017a910:
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar5 + 8) == (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
      }
      else {
        (**(code **)(lVar5 + 8))();
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uVar6 = (ulong)*(uint *)(param_1 + 0x440);
  if (*(uint *)(param_1 + 0x440) == 0) {
    pppuVar3 = &local_58;
  }
  else {
    uVar7 = 0;
    do {
      if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x448) + uVar7 * 8) + 0x60) | 2) == 2) {
        FUN_10003330c(local_70);
        ppvVar1 = local_70[0];
        if (-1 < local_59) {
          ppvVar1 = local_70;
        }
        std::string::append((char *)&local_58,(ulong)ppvVar1);
        std::string::append((char *)&local_58);
        if (local_59 < '\0') {
          operator_delete(local_70[0]);
        }
        uVar6 = (ulong)*(uint *)(param_1 + 0x440);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
    pppuVar3 = (undefined8 ***)local_58;
    if (-1 < local_48) {
      pppuVar3 = &local_58;
    }
  }
  FUN_100102198("CharmsOwned",pppuVar3,1);
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




undefined8 * FUN_10017aa2c(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  uint uVar5;
  byte bVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  uVar5 = *(uint *)(param_1 + 0x440);
  pbVar3 = *(byte **)param_2;
  sVar7 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar3 = param_2;
    sVar7 = (ulong)param_2[0x17];
  }
  if (uVar5 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x448);
    do {
      puVar10 = *(undefined8 **)(lVar12 + uVar11 * 8);
      bVar6 = *(byte *)((long)puVar10 + 0x17);
      sVar4 = puVar10[1];
      if (-1 < (char)bVar6) {
        sVar4 = (ulong)bVar6;
      }
      if (sVar4 == sVar7) {
        if ((char)bVar6 < '\0') {
          if (sVar7 == 0) {
            return puVar10;
          }
          iVar8 = _memcmp((void *)*puVar10,pbVar3,sVar7);
          if (iVar8 == 0) {
            return puVar10;
          }
        }
        else {
          if (sVar7 == 0) {
            return puVar10;
          }
          if ((uint)*pbVar3 == ((uint)(void *)*puVar10 & 0xff)) {
            uVar9 = 1;
            do {
              if (bVar6 == uVar9) {
                return puVar10;
              }
              pbVar1 = (byte *)((long)puVar10 + uVar9);
              pbVar2 = pbVar3 + uVar9;
              uVar9 = uVar9 + 1;
            } while (*pbVar1 == *pbVar2);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar5);
  }
  return (undefined8 *)0x0;
}




void FUN_10017ab0c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_38 [2];
  char local_21;
  
  iVar2 = FUN_100131560();
  if (iVar2 != 0) {
    FUN_10017abe8(param_1,param_2);
    FUN_10017ae10(param_1,param_2);
    return;
  }
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if ((uVar1 == 7) &&
     (iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d7384), iVar2 == 0)) {
    uVar3 = FUN_10015d3ec();
    FUN_10001549c(local_38,"");
    FUN_100166c2c(uVar3,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    return;
  }
  uVar3 = FUN_10015d3ec();
  FUN_100166c2c(uVar3,param_2);
  return;
}




void FUN_10017abe8(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  void **ppvVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  void *local_130;
  size_t local_128;
  ulong local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined **local_110 [5];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_1004f1580(local_110);
  local_110[0] = &PTR_FUN_10145c040;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uVar6 = *(uint *)(param_1 + 0x88);
  if (uVar6 != 0) {
    uVar10 = 0;
    do {
      if (*(long *)(param_1[0x89] + uVar10 * 8) != 0) {
        local_130 = (void *)0x0;
        local_128 = 0;
        local_120 = 0;
        std::string::operator=((string *)&local_130,*(string **)(param_1[0x89] + uVar10 * 8));
        uVar7 = local_120 >> 0x38;
        sVar1 = local_128;
        if (-1 < (long)local_120) {
          sVar1 = uVar7;
        }
        bVar4 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar4) {
          sVar2 = (ulong)bVar4;
        }
        if (sVar1 == sVar2) {
          ppvVar3 = local_130;
          if (-1 < (long)local_120) {
            ppvVar3 = &local_130;
          }
          pbVar8 = *(byte **)param_2;
          if (-1 < (char)bVar4) {
            pbVar8 = param_2;
          }
          if ((long)local_120 < 0) {
            if (sVar1 == 0) goto LAB_10017ad38;
            iVar5 = _memcmp(ppvVar3,pbVar8,sVar1);
            local_118 = iVar5 == 0;
          }
          else if (sVar1 == 0) {
LAB_10017ad38:
            local_118 = true;
          }
          else {
            pbVar9 = (byte *)((ulong)&local_130 | 1);
            if ((uint)*pbVar8 != ((uint)local_130 & 0xff)) goto LAB_10017ad1c;
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              local_118 = uVar7 == 0;
              if (uVar7 == 0) break;
              bVar4 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
        else {
LAB_10017ad1c:
          local_118 = false;
        }
        local_117 = 1;
        FUN_10017b214(&local_a8,&local_130);
        if ((long)local_120 < 0) {
          operator_delete(local_130);
        }
        uVar6 = *(uint *)(param_1 + 0x88);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_110);
  local_110[0] = &PTR_FUN_10145c040;
  FUN_10015cb3c(&local_78,1);
  FUN_10015cbc0(&local_88,1);
  FUN_10015cbc0(&local_98,1);
  FUN_10015cbc0(&local_a8,1);
  FUN_10015cbc0(&local_b8,1);
  FUN_10015cbc0(&local_c8,1);
  FUN_10015cc34(&local_d8,1);
  FUN_10015ccb8(&local_e8,1);
  FUN_1004f15a8(local_110);
  return;
}




void FUN_10017ae10(long param_1,ulong *param_2)

{
  size_t sVar1;
  ulong *puVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long *plVar6;
  
  pcVar4 = (char *)FUN_10017b19c();
  sVar5 = _strlen(pcVar4);
  sVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if ((sVar5 == sVar1) &&
     (iVar3 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,(ulong)pcVar4),
     iVar3 == 0)) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    plVar6 = (long *)*plVar6;
  }
  puVar2 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
  }
  FUN_10012c750(plVar6,puVar2);
  return;
}




void FUN_10017aeac(void)

{
  FUN_10015d3ec();
  FUN_100166ab8();
  return;
}




void FUN_10017aec0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10017b304(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10017af40(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  string sVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  string *psVar9;
  string *psVar10;
  string *psVar11;
  ulong uVar12;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  bool local_128;
  undefined1 local_127;
  string *local_120;
  size_t local_118;
  byte local_109;
  undefined **local_108 [5];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_1004f1580(local_108);
  local_108[0] = &PTR_FUN_10145c040;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uVar5 = FUN_10017b19c(param_1);
  FUN_10001549c(&local_120,uVar5);
  uVar6 = *(uint *)(param_1 + 0x88);
  if (uVar6 != 0) {
    uVar12 = 0;
    do {
      lVar8 = param_1[0x89];
      if (*(long *)(lVar8 + uVar12 * 8) != 0) {
        local_140 = (void *)0x0;
        uStack_138 = 0;
        local_130 = 0;
        sVar1 = local_118;
        if (-1 < (char)local_109) {
          sVar1 = (ulong)local_109;
        }
        if (sVar1 == 0) {
          local_128 = uVar12 == 0;
          psVar11 = *(string **)(lVar8 + uVar12 * 8);
        }
        else {
          psVar11 = *(string **)(lVar8 + uVar12 * 8);
          sVar3 = psVar11[0x17];
          uVar7 = (ulong)(byte)sVar3;
          sVar2 = *(size_t *)(psVar11 + 8);
          if (-1 < (char)sVar3) {
            sVar2 = uVar7;
          }
          if (sVar2 == sVar1) {
            psVar10 = local_120;
            if (-1 < (char)local_109) {
              psVar10 = (string *)&local_120;
            }
            if ((char)sVar3 < '\0') {
              iVar4 = _memcmp(*(void **)psVar11,psVar10,sVar1);
              local_128 = iVar4 == 0;
            }
            else {
              psVar9 = psVar11;
              if ((uint)(byte)*psVar10 != ((uint)*(void **)psVar11 & 0xff)) goto LAB_10017b068;
              do {
                uVar7 = uVar7 - 1;
                psVar10 = psVar10 + 1;
                psVar9 = psVar9 + 1;
                local_128 = uVar7 == 0;
                if (uVar7 == 0) break;
              } while (*psVar9 == *psVar10);
            }
          }
          else {
LAB_10017b068:
            local_128 = false;
          }
        }
        std::string::operator=((string *)&local_140,psVar11);
        local_127 = 1;
        FUN_10017b214(&local_a0,&local_140);
        if (local_128 != false) {
          FUN_10017ae10(param_1,*(undefined8 *)(param_1[0x89] + uVar12 * 8));
        }
        if (local_130 < 0) {
          operator_delete(local_140);
        }
        uVar6 = *(uint *)(param_1 + 0x88);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar6);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_108);
  if ((char)local_109 < '\0') {
    operator_delete(local_120);
  }
  local_108[0] = &PTR_FUN_10145c040;
  FUN_10015cb3c(&local_70,1);
  FUN_10015cbc0(&local_80,1);
  FUN_10015cbc0(&local_90,1);
  FUN_10015cbc0(&local_a0,1);
  FUN_10015cbc0(&local_b0,1);
  FUN_10015cbc0(&local_c0,1);
  FUN_10015cc34(&uStack_d0,1);
  FUN_10015ccb8(&local_e0,1);
  FUN_1004f15a8(local_108);
  return;
}




long FUN_10017b19c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x458);
  plVar1 = (long *)(param_1 + 0x28);
  if (puVar2 == (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    puVar2 = DAT_101d91198;
    if (-1 < DAT_101d911a8._7_1_) {
      puVar2 = &DAT_101d91198;
    }
  }
  else {
    if (*(char *)(param_1 + 0x3f) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*puVar2;
    }
  }
  FUN_10012caa0(plVar1,param_1 + 0x40,0x400,puVar2);
  return param_1 + 0x40;
}




void FUN_10017b214(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10015c8e8(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_2 + 0x18);
  return;
}




void FUN_10017b2a0(void)

{
  operator_new(0x460);
  DAT_101d23538 = FUN_10017a59c();
  return;
}




void FUN_10017b2c4(void)

{
  if (DAT_101d23538 != (long *)0x0) {
    (**(code **)(*DAT_101d23538 + 8))();
  }
  DAT_101d23538 = (long *)0x0;
  return;
}




undefined8 FUN_10017b2f8(void)

{
  return DAT_101d23538;
}




void FUN_10017b304(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10017b380(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined1 *)((long)param_1 + 100) = 0;
  return;
}




undefined8 * FUN_10017b3a0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




undefined8 * thunk_FUN_10017b3a0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




void FUN_10017b404(string *param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                  string param_6)

{
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1 + 0x18,param_3);
  std::string::operator=(param_1 + 0x30,param_4);
  std::string::operator=(param_1 + 0x48,param_5);
  param_1[100] = param_6;
  return;
}




undefined8 * FUN_10017b46c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f1e0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10014f4a0(param_1 + 2);
  FUN_1004f0a20(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10017b4fc_10145dc40;
  param_1[2] = &PTR_FUN_10145dc88;
  param_1[5] = &PTR_FUN_10145e020;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x72bd94bf,thunk_FUN_10017b6fc,0);
  return param_1;
}




void thunk_FUN_10017b6fc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuStack_a8;
  uint auStack_a0 [2];
  long lStack_98;
  void *pvStack_90;
  char cStack_79;
  void *pvStack_78;
  char cStack_61;
  void *pvStack_60;
  char cStack_49;
  void *pvStack_48;
  char cStack_31;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || (uVar2 = FUN_100136af0(), (uVar2 & 1) == 0)) {
    FUN_1003080a4(param_1,0);
    return;
  }
  FUN_1000fb6d0(&ppuStack_a8);
  iVar1 = FUN_100136dcc(&ppuStack_a8);
  if ((iVar1 != 0) && (auStack_a0[0] != 0)) {
    lVar5 = (ulong)auStack_a0[0] * 0x598;
    lVar4 = lStack_98;
    do {
      uVar2 = FUN_10022bae4(lVar4);
      if ((uVar2 & 1) == 0) {
        uVar3 = 2;
        goto LAB_10017b768;
      }
      lVar4 = lVar4 + 0x598;
      lVar5 = lVar5 + -0x598;
    } while (lVar5 != 0);
  }
  uVar3 = 1;
LAB_10017b768:
  FUN_1003080a4(param_1,uVar3);
  ppuStack_a8 = &PTR_FUN_10145abe0;
  if (cStack_31 < '\0') {
    operator_delete(pvStack_48);
  }
  if (cStack_49 < '\0') {
    operator_delete(pvStack_60);
  }
  if (cStack_61 < '\0') {
    operator_delete(pvStack_78);
  }
  if (cStack_79 < '\0') {
    operator_delete(pvStack_90);
  }
  FUN_1000fa8bc(auStack_a0,1);
  return;
}




undefined8 * thunk_FUN_10017b46c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148f1e0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10014f4a0(param_1 + 2);
  FUN_1004f0a20(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10017b4fc_10145dc40;
  param_1[2] = &PTR_FUN_10145dc88;
  param_1[5] = &PTR_FUN_10145e020;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x72bd94bf,thunk_FUN_10017b6fc,0);
  return param_1;
}




void FUN_10017b4fc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10017b4fc_10145dc40;
  param_1[2] = &PTR_FUN_10145dc88;
  param_1[5] = &PTR_FUN_10145e020;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x72bd94bf);
  FUN_1004f0a9c(param_1 + 5);
  FUN_10014f51c(param_1 + 2);
  FUN_100308098(param_1);
  return;
}




void thunk_FUN_10017b4fc(void)

{
  FUN_10017b4fc();
  return;
}




void FUN_10017b574(long param_1)

{
  FUN_10017b4fc(param_1 + -0x10);
  return;
}




void FUN_10017b57c(long param_1)

{
  FUN_10017b4fc(param_1 + -0x28);
  return;
}




void FUN_10017b584(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017b4fc();
  operator_delete(pvVar1);
  return;
}




void FUN_10017b598(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017b4fc(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_10017b5b0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017b4fc(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10017b5c8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined **local_c8;
  uint local_c0 [2];
  long local_b8;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  
  FUN_1000fb6d0(&local_c8);
  iVar1 = FUN_100136dcc(&local_c8);
  if ((iVar1 != 0) && (local_c0[0] != 0)) {
    lVar6 = (ulong)local_c0[0] * 0x598;
    lVar5 = local_b8;
    do {
      uVar2 = FUN_10022bae4(lVar5);
      if ((uVar2 & 1) == 0) {
        pvVar3 = operator_new(0x20);
        thunk_FUN_1001ef8c8(pvVar3,lVar5);
        pvVar4 = operator_new(0xc0);
        FUN_10017b858(pvVar4,pvVar3);
        (*param_3)(param_2,lVar5 + 0x4c8,1,pvVar4,"");
      }
      lVar5 = lVar5 + 0x598;
      lVar6 = lVar6 + -0x598;
    } while (lVar6 != 0);
  }
  local_c8 = &PTR_FUN_10145abe0;
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  FUN_1000fa8bc(local_c0,1);
  return;
}




void FUN_10017b6f0(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_10017b6fc();
  return;
}




void FUN_10017b6fc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **local_a8;
  uint local_a0 [2];
  long local_98;
  void *local_90;
  char local_79;
  void *local_78;
  char local_61;
  void *local_60;
  char local_49;
  void *local_48;
  char local_31;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || (uVar2 = FUN_100136af0(), (uVar2 & 1) == 0)) {
    FUN_1003080a4(param_1,0);
    return;
  }
  FUN_1000fb6d0(&local_a8);
  iVar1 = FUN_100136dcc(&local_a8);
  if ((iVar1 != 0) && (local_a0[0] != 0)) {
    lVar5 = (ulong)local_a0[0] * 0x598;
    lVar4 = local_98;
    do {
      uVar2 = FUN_10022bae4(lVar4);
      if ((uVar2 & 1) == 0) {
        uVar3 = 2;
        goto LAB_10017b768;
      }
      lVar4 = lVar4 + 0x598;
      lVar5 = lVar5 + -0x598;
    } while (lVar5 != 0);
  }
  uVar3 = 1;
LAB_10017b768:
  FUN_1003080a4(param_1,uVar3);
  local_a8 = &PTR_FUN_10145abe0;
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  FUN_1000fa8bc(local_a0,1);
  return;
}




void FUN_10017b808(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_10017b6fc(param_1 + -0x10);
  return;
}




void FUN_10017b81c(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10017b6fc();
  return;
}




void FUN_10017b824(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10017b6fc(param_1 + -0x28);
  return;
}




void FUN_10017b834(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10017b6fc();
  return;
}




void FUN_10017b83c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10017b6fc(param_1 + -0x28);
  return;
}




char * FUN_10017b84c(void)

{
  return "";
}




undefined8 FUN_10017b858(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_10145e050;
  puVar1[0x17] = param_2;
  FUN_100642bd8(puVar1,*(undefined8 *)(param_2 + 8),1);
  plVar2 = (long *)thunk_FUN_10064dd80();
  FUN_10064e524(param_1,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined8 *)(param_2 + 8));
  return param_1;
}




void FUN_10017b8cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145e050;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10017b910(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145e050;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x17] = 0;
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10017b958(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_10017cba8_10145e198;
  thunk_FUN_1001c0c34(puVar4 + 0x17,0);
  plVar1 = param_1 + 0xc6;
  thunk_FUN_1005357f4(plVar1);
  plVar2 = param_1 + 0x20b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x231;
  FUN_1006505b8(plVar3);
  param_1[0x253] = 0;
  param_1[0x252] = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  param_1[0x24d] = 0;
  param_1[0x24c] = 0;
  *(undefined1 *)(param_1 + 0x254) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar5 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar3,0,2);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,1,2);
  FUN_10064e524(param_1,plVar5);
  uVar6 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,uVar6);
  FUN_100650608(plVar3,&DAT_101e3d27c);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NAME",0);
  FUN_10017bc04(param_1,500,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_LEVEL",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NUM_MEMBERS",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_GUILD_TYPE",0);
  FUN_10017bc04(param_1,200,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_MIN_SKILL_TIER",0);
  FUN_10017bc04(param_1,0x32,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_10017bc04(param_1,100,uVar6);
  if ((char)param_1[0x254] != '\0') {
    FUN_10017bc04(param_1,100,&DAT_101d91650);
    FUN_10017bc04(param_1,100,&DAT_101d91650);
  }
  local_58[0] = 9;
  FUN_100534ebc(plVar1,local_58);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  *(uint *)((long)param_1 + 0x10dc) = *(uint *)((long)param_1 + 0x10dc) & 0xfffffffb;
  FUN_10017bcb4(param_1);
  return param_1;
}




void FUN_10017bc04(long param_1,undefined2 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long local_50;
  undefined4 local_48 [2];
  
  lVar1 = FUN_10017c6dc(param_1 + 0x1188,1);
  FUN_1006513c0(lVar1 + 0xb8,param_3);
  *(undefined2 *)(lVar1 + 0x1e8) = param_2;
  local_48[0] = 0xccffffff;
  FUN_100651460(lVar1 + 0xb8,local_48);
  plVar2 = (long *)FUN_10064e5a0(param_1 + 0x1188);
  (**(code **)(*plVar2 + 0x68))(plVar2,lVar1,0,2);
  local_50 = lVar1;
  FUN_10017c750(param_1 + 0x1280,&local_50);
  return;
}




void FUN_10017bcb4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((int)param_1[0x24e] != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1[0x24f] + uVar2 * 8);
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_10064e47c(uVar3,0x42c80000,lVar1 + 0x1938);
      FUN_10017c588(lVar1);
      if (uVar2 == 0) {
        FUN_10064e68c(0,0xc0000000,lVar1,4);
      }
      else {
        FUN_10064e72c(0xbf800000,lVar1,0,
                      *(undefined8 *)(param_1[0x24f] + (ulong)((int)uVar2 - 1) * 8),2);
      }
      fVar4 = (float)(**(code **)(**(long **)param_1[0x251] + 0x48))();
      FUN_10064e47c(fVar4 + -40.0,0x42c80000,lVar1 + 0x398);
      FUN_10064e72c(0x41a00000,lVar1 + 0x398,3,*(undefined8 *)param_1[0x251],3);
      FUN_10064e72c(0,lVar1 + 0x4c8,4,*(undefined8 *)(param_1[0x251] + 8),4);
      FUN_10064e72c(0,lVar1 + 0x5f8,4,*(undefined8 *)(param_1[0x251] + 0x10),4);
      FUN_10064e72c(0,lVar1 + 0x728,4,*(undefined8 *)(param_1[0x251] + 0x18),4);
      FUN_10064e72c(0,lVar1 + 0x858,4,*(undefined8 *)(param_1[0x251] + 0x20),4);
      FUN_10064e72c(0,lVar1 + 0xc28,4,*(undefined8 *)(param_1[0x251] + 0x28),4);
      if ((char)param_1[0x254] != '\0') {
        FUN_10064e72c(0,lVar1 + 0xd58,4,*(undefined8 *)(param_1[0x251] + 0x30),4);
        FUN_10064e72c(0,lVar1 + 0x1348,4,*(undefined8 *)(param_1[0x251] + 0x38),4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x24e));
  }
  FUN_10064e68c(0,0x43160000,param_1 + 0x17,4);
  FUN_10064e68c(0,0x43160000,param_1 + 0x20b,4);
  return;
}




long * thunk_FUN_10017b958(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_10017cba8_10145e198;
  thunk_FUN_1001c0c34(puVar4 + 0x17,0);
  plVar1 = param_1 + 0xc6;
  thunk_FUN_1005357f4(plVar1);
  plVar2 = param_1 + 0x20b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x231;
  FUN_1006505b8(plVar3);
  param_1[0x253] = 0;
  param_1[0x252] = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  param_1[0x24d] = 0;
  param_1[0x24c] = 0;
  *(undefined1 *)(param_1 + 0x254) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar5 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar3,0,2);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,1,2);
  FUN_10064e524(param_1,plVar5);
  uVar6 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,uVar6);
  FUN_100650608(plVar3,&DAT_101e3d27c);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NAME",0);
  FUN_10017bc04(param_1,500,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_LEVEL",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NUM_MEMBERS",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_GUILD_TYPE",0);
  FUN_10017bc04(param_1,200,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_MIN_SKILL_TIER",0);
  FUN_10017bc04(param_1,0x32,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_10017bc04(param_1,100,uVar6);
  if ((char)param_1[0x254] != '\0') {
    FUN_10017bc04(param_1,100,&DAT_101d91650);
    FUN_10017bc04(param_1,100,&DAT_101d91650);
  }
  auStack_58[0] = 9;
  FUN_100534ebc(plVar1,auStack_58);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  *(uint *)((long)param_1 + 0x10dc) = *(uint *)((long)param_1 + 0x10dc) & 0xfffffffb;
  FUN_10017bcb4(param_1);
  return param_1;
}




void FUN_10017bee0(long param_1)

{
  *(uint *)(param_1 + 0x10dc) = *(uint *)(param_1 + 0x10dc) & 0xfffffffb;
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 4;
  FUN_1001c0e10(param_1 + 0xb8);
  return;
}




void FUN_10017bf04(long param_1)

{
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0xb8);
  return;
}




void FUN_10017bf1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100534eb4(param_1 + 0x630);
  FUN_100642378(uVar1,1);
  if (*(long *)(param_1 + 0x1278) != 0) {
    *(undefined4 *)(param_1 + 0x1270) = 0;
  }
  return;
}




void FUN_10017bf54(long param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong unaff_x21;
  ulong unaff_x22;
  long lVar5;
  ulong uVar6;
  ulong unaff_x26;
  code *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68;
  
  FUN_10017bf1c();
  FUN_10017ce40(param_1 + 0x1290,param_2);
  *(uint *)(param_1 + 0x10dc) =
       *(uint *)(param_1 + 0x10dc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x10dc) & 3 | (uint)(*param_2 == 0) << 2;
  uVar2 = DAT_101d91884;
  if (*param_2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar3 = FUN_100534eb4(param_1 + 0x630);
      pcVar4 = (code *)FUN_10017c10c(uVar3,1);
      FUN_10017c180(pcVar4,*(long *)(param_2 + 2) + lVar5,*(undefined1 *)(param_1 + 0x12a0));
      local_68 = uVar2;
      unaff_x22 = unaff_x22 & 0xffffffff00000000 | uVar6;
      local_90 = FUN_10017c3c0;
      local_80 = 0;
      uStack_78 = 0;
      lStack_88 = param_1;
      local_70 = unaff_x22;
      FUN_10001554c(pcVar4 + 8,&local_90);
      local_68 = uVar2;
      unaff_x26 = unaff_x26 & 0xffffffff00000000 | uVar6;
      local_90 = FUN_10017c3c8;
      local_80 = 0;
      uStack_78 = 0;
      lStack_88 = param_1;
      local_70 = unaff_x26;
      FUN_10001554c(pcVar4 + 0xd60,&local_90);
      local_68 = uVar2;
      unaff_x21 = unaff_x21 & 0xffffffff00000000 | uVar6;
      local_90 = FUN_10017c3d0;
      local_80 = 0;
      uStack_78 = 0;
      lStack_88 = param_1;
      local_70 = unaff_x21;
      FUN_10001554c(pcVar4 + 0x1350,&local_90);
      puVar1 = &DAT_101e3d284;
      if ((uVar6 & 1) != 0) {
        puVar1 = &DAT_101e3d280;
      }
      FUN_100650608(pcVar4 + 0x1938,puVar1);
      local_90 = pcVar4;
      FUN_10017c3d8(param_1 + 0x1270,&local_90);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x158;
    } while (uVar6 < *param_2);
  }
  FUN_10017bcb4(param_1);
  return;
}




void * FUN_10017c10c(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1a18);
  lVar2 = FUN_10017c7d0();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_10017c180(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"[%s] %s");
  FUN_1006513c0(param_1 + 0x398,auStack_40);
  FUN_1004e313c(auStack_50);
  FUN_1004e38ac(auStack_50,"%d");
  FUN_1006513c0(param_1 + 0x4c8,auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e38ac(auStack_60,"%d/%d");
  FUN_1006513c0(param_1 + 0x5f8,auStack_60);
  uVar2 = FUN_1000f18d4(param_2 + 0x78,0);
  thunk_FUN_1004e439c(auStack_70,uVar2);
  FUN_1006513c0(param_1 + 0x728,auStack_70);
  iVar1 = *(int *)(param_2 + 0x74);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  FUN_1001c6fd8(param_1 + 0x858,iVar1);
  FUN_1000f28d0(auStack_80,*(undefined4 *)(param_2 + 0x70),0);
  FUN_1000f28d0(auStack_90,*(int *)(param_2 + 0x70) + 1,0);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_VALUE",0);
  thunk_FUN_1004e439c(auStack_a0,uVar2);
  FUN_1004e3120(auStack_b0,"[START_HOUR]");
  FUN_1004e3bc4(auStack_a0,0,auStack_b0,auStack_80);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  FUN_1004e3120(auStack_b0,"[END_HOUR]");
  FUN_1004e3bc4(auStack_a0,0,auStack_b0,auStack_90);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  FUN_1006513c0(param_1 + 0xc28,auStack_a0);
  uVar3 = 0x44;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0xddc) = uVar3 | *(uint *)(param_1 + 0xddc) & 0xffffffbb;
  *(uint *)(param_1 + 0x13cc) = uVar3 | *(uint *)(param_1 + 0x13cc) & 0xffffffbb;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10017c3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10017c458(param_1,param_2,param_5);
  return;
}




void FUN_10017c3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10017c4bc(param_1,param_2,param_5);
  return;
}




void FUN_10017c3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10017c520(param_1,param_2,param_5);
  return;
}




void FUN_10017c3d8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10017d0a4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10017c458(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_40 [32];
  
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x1290))) {
    FUN_100644aec(auStack_40,DAT_101d23540,*(long *)(param_1 + 0x1298) + (ulong)param_3 * 0x158);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_10017c4bc(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_40 [32];
  
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x1290))) {
    FUN_100644aec(auStack_40,DAT_101d23548,*(long *)(param_1 + 0x1298) + (ulong)param_3 * 0x158);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_10017c520(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_40 [32];
  
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x1290))) {
    FUN_100644aec(auStack_40,DAT_101d23544,*(long *)(param_1 + 0x1298) + (ulong)param_3 * 0x158);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void thunk_FUN_10017bcb4(void)

{
  FUN_10017bcb4();
  return;
}




void FUN_10017c588(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  
  FUN_10065179c(0x43fa0000,0,0x3f800000,param_1 + 0x398);
  uVar2 = 0;
  FUN_10065179c(0x43480000,0,0x3f800000,param_1 + 0x728);
  lVar1 = param_1 + 0x1938;
  FUN_10064e72c(0,param_1 + 0x398,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0x4c8,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0x5f8,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0x728,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0x858,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0xc28,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0xd58,5,lVar1,5);
  FUN_10064e72c(0,param_1 + 0x1348,5,lVar1,5);
  FUN_1006557ec(param_1 + 0x240);
  local_38 = FUN_10064e3cc(param_1 + 0x240);
  uStack_34 = uVar2;
  FUN_10064e48c(param_1,&local_38);
  return;
}




void * FUN_10017c6dc(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1f0);
  lVar2 = FUN_10017ca1c();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_10017c750(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10017d120(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




long * FUN_10017c7d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_10052fa40();
  *puVar6 = &PTR_thunk_FUN_10017d19c_10145e2e0;
  puVar6 = puVar6 + 0x48;
  thunk_FUN_100655644(puVar6);
  plVar1 = param_1 + 0x73;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x99;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xbf;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xe5;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001c6e5c(param_1 + 0x10b);
  plVar5 = param_1 + 0x185;
  thunk_FUN_100650e64(plVar5);
  thunk_FUN_100183990(param_1 + 0x1ab,0);
  thunk_FUN_100183990(param_1 + 0x269,0);
  FUN_1006505b8(param_1 + 0x327);
  *(undefined1 *)(param_1 + 0x342) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  FUN_100655930(puVar6,param_1 + 0x327,1);
  FUN_100655930(puVar6,plVar1,1);
  FUN_100655930(puVar6,plVar2,1);
  FUN_100655930(puVar6,plVar3,1);
  FUN_100655930(puVar6,plVar4,1);
  FUN_100655930(puVar6,param_1 + 0x10b,1);
  FUN_100655930(puVar6,plVar5,1);
  FUN_100655930(puVar6,param_1 + 0x1ab,1);
  FUN_100655930(puVar6,param_1 + 0x269,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar1,&DAT_10115a168);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar3,&DAT_10115a168);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar4,&DAT_10115a168);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar5,&DAT_10115a168);
  FUN_100652cdc(param_1 + 0x245,"generic_check");
  FUN_100652cdc(param_1 + 0x303,"generic_x");
  FUN_100530048(param_1,1);
  return param_1;
}




long * FUN_10017ca1c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_10145e438;
  puVar1 = puVar1 + 0x17;
  thunk_FUN_100650e64(puVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100651038(puVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(puVar1,&DAT_10115a168);
  plVar2 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar2 + 0x68))(plVar2,puVar1,0,3);
  FUN_10064e524(param_1,plVar2);
  return param_1;
}




ulong FUN_10017cac8(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x1e8));
  FUN_100651184(param_1 + 0xb8);
  return (ulong)(uint)(int)fVar1 | 0x6400000000;
}




undefined8 FUN_10017cb00(void)

{
  return 0x640000ffff;
}




undefined8 FUN_10017cb0c(void)

{
  return 0x6400000000;
}




void thunk_FUN_10017cba8(void)

{
  FUN_10017cba8();
  return;
}




void FUN_10017cb18(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017cba8();
  operator_delete(pvVar1);
  return;
}




void FUN_10017cb2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145e438;
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10017cb5c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145e438;
  thunk_FUN_100651068(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10017d19c(void)

{
  FUN_10017d19c();
  return;
}




void FUN_10017cb94(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017d19c();
  operator_delete(pvVar1);
  return;
}




void FUN_10017cba8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_10017cba8_10145e198;
  FUN_10017cd14(param_1 + 0x252,1);
  if ((void *)param_1[0x251] != (void *)0x0) {
    operator_delete__((void *)param_1[0x251]);
    param_1[0x251] = 0;
    param_1[0x250] = 0;
  }
  if ((void *)param_1[0x24f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24f]);
    param_1[0x24f] = 0;
    param_1[0x24e] = 0;
  }
  if ((void *)param_1[0x24d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24d]);
    param_1[0x24d] = 0;
    param_1[0x24c] = 0;
  }
  FUN_10064e2bc(param_1 + 0x231);
  thunk_FUN_100651068(param_1 + 0x20b);
  thunk_FUN_100534a3c(param_1 + 0xc6);
  param_1[0x17] = &PTR_FUN_10145e588;
  lVar2 = 0x4b0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x80);
    *puVar1 = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x138) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x150);
    FUN_10064e2bc(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10017cca0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x478) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x530) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x548);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x478);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10017cdc8(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x478) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x530) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x548);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x478);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x4b0);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10017ce40(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_10017cd14(param_1,1);
    FUN_10017cec8(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x158;
      do {
        FUN_10017cfd8(lVar3,lVar2);
        lVar2 = lVar2 + 0x158;
        lVar3 = lVar3 + 0x158;
        lVar4 = lVar4 + -0x158;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_10017cfd8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10003330c();
  FUN_10003330c(lVar1 + 0x18,param_2 + 0x18);
  FUN_10003330c(param_1 + 0x30,param_2 + 0x30);
  FUN_10003330c(param_1 + 0x48,param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_10003330c(param_1 + 0x78,param_2 + 0x78);
  FUN_10003330c(param_1 + 0x90,param_2 + 0x90);
  FUN_10003330c(param_1 + 0xa8,param_2 + 0xa8);
  FUN_10003330c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_10003330c(param_1 + 0xd8,param_2 + 0xd8);
  FUN_10003330c(param_1 + 0xf0,param_2 + 0xf0);
  FUN_10003330c(param_1 + 0x108,param_2 + 0x108);
  FUN_10003330c(param_1 + 0x120,param_2 + 0x120);
  FUN_10003330c(param_1 + 0x138,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  return;
}




void FUN_10017d0a4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10017d120(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10017d19c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10017d19c_10145e2e0;
  FUN_10064e2bc(param_1 + 0x327);
  param_1[0x269] = &PTR_FUN_10145f300;
  param_1[0x303] = &PTR_FUN_1014a7108;
  param_1[0x31a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31d);
  FUN_10064e2bc(param_1 + 0x303);
  param_1[0x2e5] = &PTR_FUN_1014a7108;
  param_1[0x2fc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ff);
  FUN_10064e2bc(param_1 + 0x2e5);
  param_1[0x2c7] = &PTR_FUN_1014a7108;
  param_1[0x2de] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e1);
  FUN_10064e2bc(param_1 + 0x2c7);
  FUN_10064221c(param_1 + 0x2b6);
  FUN_10003bec8(param_1 + 0x269);
  param_1[0x1ab] = &PTR_FUN_10145f300;
  param_1[0x245] = &PTR_FUN_1014a7108;
  param_1[0x25c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x25f);
  FUN_10064e2bc(param_1 + 0x245);
  param_1[0x227] = &PTR_FUN_1014a7108;
  param_1[0x23e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x241);
  FUN_10064e2bc(param_1 + 0x227);
  param_1[0x209] = &PTR_FUN_1014a7108;
  param_1[0x220] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x223);
  FUN_10064e2bc(param_1 + 0x209);
  FUN_10064221c(param_1 + 0x1f8);
  FUN_10003bec8(param_1 + 0x1ab);
  thunk_FUN_100651068(param_1 + 0x185);
  FUN_10017d364(param_1 + 0x10b);
  thunk_FUN_100651068(param_1 + 0xe5);
  thunk_FUN_100651068(param_1 + 0xbf);
  thunk_FUN_100651068(param_1 + 0x99);
  thunk_FUN_100651068(param_1 + 0x73);
  param_1[0x48] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x5f);
  FUN_10064e2bc(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_10017d364(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10017d364_101465a98;
  thunk_FUN_100651068(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10017d3ec(void)

{
  DAT_101e3d108 = 0xff;
  DAT_101e3d10a = 0xffff;
  DAT_101e3d10c = 0xffff;
  DAT_101e3d10e = 0xffbc9c44;
  DAT_101e3d112 = 0xff1166f2;
  DAT_101e3d116 = 0xffe0e0e0;
  DAT_101e3d11a = 0xffa0a0a0;
  DAT_101e3d11e = 0xff8c8c8c;
  DAT_101e3d122 = 0xff322213;
  DAT_101e3d126 = 0xff091911;
  DAT_101e3d12a = 0xff170c19;
  DAT_101e3d12e = 0xff241a14;
  DAT_101e3d132 = 0xff14171c;
  DAT_101e3d136 = 0xff221911;
  DAT_101e3d13a = 0xff1a1416;
  DAT_101e3d13e = 0xff121414;
  DAT_101e3d142 = 0xff1a1809;
  DAT_101e3d146 = 0xff141414;
  DAT_101e3d14a = 0xff141414;
  DAT_101e3d14e = 0xff2929c0;
  DAT_101e3d152 = 0xff283082;
  DAT_101e3d156 = 0xff5262cc;
  DAT_101e3d15a = 0xff283082;
  DAT_101e3d15e = 0xff5262cc;
  DAT_101e3d162 = 0xff745c42;
  DAT_101e3d166 = 0xff184155;
  DAT_101e3d16a = 0xff92665e;
  DAT_101e3d16e = 0xffbc9c44;
  DAT_101e3d172 = 0xffbbae56;
  DAT_101e3d176 = 0xff8b7b01;
  DAT_101e3d17a = 0xff90b3ef;
  DAT_101e3d17e = 0xff728ebe;
  DAT_101e3d182 = 0xff19459d;
  DAT_101e3d186 = 0xff9d877b;
  DAT_101e3d18a = 0xffcbb1a3;
  DAT_101e3d18e = 0xff3f6fb5;
  DAT_101e3d192 = 0xffc5c5c5;
  DAT_101e3d196 = 0xff4fc1f1;
  DAT_101e3d19a = 0xff606060;
  DAT_101e3d19e = 0xffc5ff7b;
  DAT_101e3d1a2 = 0xff5271eb;
  DAT_101e3d1a6 = 0xfffae076;
  DAT_101e3d1aa = 0xff3ac8f6;
  DAT_101e3d1ae = 0xffaaaaaa;
  DAT_101e3d1b2 = 0xffe19400;
  DAT_101e3d1b6 = 0xffe19400;
  DAT_101e3d1ba = 0xffe550b2;
  DAT_101e3d1be = 0xfff22ae8;
  DAT_101e3d1c2 = 0xff005ae1;
  DAT_101e3d1c6 = 0xff1addfa;
  DAT_101e3d1ca = 0xff2424b3;
  DAT_101e3d1ce = 0xff2424b3;
  DAT_101e3d1d2 = 0xff646464;
  DAT_101e3d1d6 = 0xff92665e;
  DAT_101e3d1da = 0xff646037;
  DAT_101e3d1e0 = 0xffffffff;
  DAT_101e3d1e4 = 0xff1111a1;
  DAT_101e3d1e8 = 0xff321ee1;
  DAT_101e3d1ec = 0xffc8c8c8;
  DAT_101e3d1f0 = 0xff321ee1;
  DAT_101e3d1f4 = 0xff7fe801;
  DAT_101e3d1f8 = 0xffffffff;
  DAT_101e3d1fc = 0xff6259b3;
  DAT_101e3d200 = 0xff506e73;
  DAT_101e3d204 = 0xff9dbf86;
  DAT_101e3d208 = 0xffa35244;
  DAT_101e3d20c = 0xffca828e;
  DAT_101e3d210 = 0xffa6a6a6;
  DAT_101e3d214 = 0xffa6a6a6;
  DAT_101e3d218 = 0xffffffff;
  DAT_101e3d21c = 0xff88ea2f;
  DAT_101e3d220 = 0xff8c8c8c;
  DAT_101e3d224 = 0xffffb400;
  DAT_101e3d228 = 0xffff00ff;
  DAT_101e3d22c = 0xff00aded;
  DAT_101e3d230 = 0xff33d3ff;
  DAT_101e3d234 = 0xff7fe801;
  DAT_101e3d238 = 0xff282828;
  DAT_101e3d23c = 0xfff0f0f0;
  DAT_101e3d240 = 0xffa4781e;
  DAT_101e3d244 = 0xffa6654b;
  DAT_101e3d248 = 0xff93435b;
  DAT_101e3d24c = 0xff387f9c;
  DAT_101e3d250 = 0xffa3781e;
  DAT_101e3d254 = 0xffffd18a;
  DAT_101e3d258 = 0xffff61f7;
  DAT_101e3d25c = 0xff5de1f2;
  DAT_101e3d260 = 0xff80eaff;
  DAT_101e3d264 = 0xff32e00e;
  DAT_101e3d268 = 0xff5a3c10;
  DAT_101e3d26c = 0xff330b03;
  DAT_101e3d270 = 0xff33031d;
  DAT_101e3d274 = 0xff032433;
  DAT_101e3d278 = 0xff9e8e8d;
  DAT_101e3d27c = 0xff000000;
  DAT_101e3d280 = 0x14ffffff;
  DAT_101e3d284 = 0;
  DAT_101d23540 = FUN_100644a94("UI::EVENT_SELECTED_GUILD_SEARCH_RESULT");
  DAT_101d23544 = FUN_100644a94("UI::EVENT_REJECTED_GUILD_INVITE");
  DAT_101d23548 = FUN_100644a94("UI::EVENT_ACCEPTED_GUILD_INVITE");
  return;
}




void FUN_10017db14(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined2 local_42;
  
  iVar3 = 0;
  local_42 = 0x41;
  do {
    plVar2 = operator_new(0x130);
    thunk_FUN_100650f44(plVar2,param_2);
    local_42 = CONCAT11(local_42._1_1_,(char)iVar3 + 'A');
    FUN_1004e3120(auStack_58,&local_42);
    (**(code **)(*plVar2 + 0x138))(plVar2,auStack_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
    }
    uVar1 = *(uint *)((long)plVar2 + 0x84);
    if ((uVar1 & 0x7f80) != 0x1980) {
      *(uint *)((long)plVar2 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1980;
      FUN_1000200a0(plVar2);
    }
    FUN_10053204c(param_1,iVar3,plVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x1a);
  return;
}




void FUN_10017dbe4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_10003d5bc();
  fVar2 = *(float *)(lVar1 + 4);
  lVar1 = FUN_10003d5bc(param_3);
  fVar2 = *(float *)((long)param_2 + 0x44) +
          (*(float *)(lVar1 + 0xc) - fVar2) / *(float *)(lVar1 + 0x14);
  (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_3 + 0x48))(param_3);
  if (*(float *)((long)param_2 + 0x44) != fVar2) {
    *(float *)((long)param_2 + 0x44) = fVar2;
    FUN_1000200a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010017dc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2);
  return;
}




void FUN_10017dc84(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_10003d5bc();
  fVar4 = *(float *)(lVar1 + 4);
  lVar1 = FUN_10003d5bc(param_3);
  fVar3 = *(float *)(lVar1 + 0x14);
  fVar5 = (*(float *)(lVar1 + 0xc) - fVar4) / fVar3;
  lVar1 = FUN_100534eb4(param_2);
  fVar5 = *(float *)(lVar1 + 0x44) + fVar5;
  plVar2 = (long *)FUN_100534eb4(param_2);
  (**(code **)(*plVar2 + 0x48))();
  fVar4 = fVar3;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar5 <= fVar4 - fVar3) {
    fVar5 = fVar4 - fVar3;
  }
  lVar1 = FUN_100534eb4(param_2);
  if (*(float *)(lVar1 + 0x44) != fVar5) {
    *(float *)(lVar1 + 0x44) = fVar5;
    FUN_1000200a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010017dd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x140))(param_2);
  return;
}




long * FUN_10017dd34(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_88;
  
  puVar7 = (undefined8 *)FUN_1001b6878();
  *puVar7 = &PTR_FUN_10145e6d0;
  puVar7[0x3dc] = &PTR_FUN_10145e8a8;
  puVar7 = puVar7 + 0x49d;
  FUN_1006421a8(puVar7);
  param_1[0x49d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x4ae;
  FUN_1006421a8(plVar1);
  param_1[0x4ae] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x4bf;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x4dd;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x4fb;
  thunk_FUN_100650e64(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(puVar7,plVar4,1);
  iVar6 = FUN_100126c88();
  *(undefined4 *)(param_1 + 0x521) = *(undefined4 *)(param_2 + 0x98);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  FUN_10064e47c(0x421c0000,0x41a80000,plVar2);
  *(byte *)(param_1 + 0x4da) = *(byte *)(param_1 + 0x4da) | 2;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_10064e47c(0x41500000,0x41e80000,plVar3);
  fVar8 = (float)FUN_100652e60(plVar2);
  fVar10 = 0.5;
  FUN_100652e60(plVar2);
  if ((*(float *)(param_1 + 0x4e5) != fVar8 * 0.5) ||
     (*(float *)((long)param_1 + 0x272c) != fVar10 + -6.0)) {
    *(float *)(param_1 + 0x4e5) = fVar8 * 0.5;
    *(float *)((long)param_1 + 0x272c) = fVar10 + -6.0;
    FUN_1000200a0(plVar3);
  }
  local_88 = 0x3f000000;
  (**(code **)(param_1[0x4dd] + 0x28))(plVar3,&local_88);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar6 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar4,*ppuVar5);
  FUN_1006513c0(plVar4,param_2 + 0x88);
  fVar8 = (float)FUN_100652e60(plVar2);
  fVar10 = *(float *)(param_1 + 0x503);
  if ((fVar10 != fVar8 + 4.0) || (fVar10 = *(float *)((long)param_1 + 0x281c), fVar10 != 0.0)) {
    *(float *)(param_1 + 0x503) = fVar8 + 4.0;
    *(undefined4 *)((long)param_1 + 0x281c) = 0;
    FUN_1000200a0(plVar4);
  }
  local_88 = 0;
  (**(code **)(param_1[0x4fb] + 0x28))(plVar4,&local_88);
  FUN_100651184(plVar4);
  fVar8 = fVar10;
  FUN_1006425d0(plVar1,0,0,1,1);
  fVar8 = (fVar10 - fVar8) * 0.5;
  fVar10 = *(float *)((long)param_1 + 0x25b4);
  if (fVar10 != fVar8) {
    *(float *)((long)param_1 + 0x25b4) = fVar8;
    FUN_1000200a0(plVar1);
  }
  fVar9 = (float)FUN_1006425d0(puVar7,0,0,1,1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar8 = fVar10;
  FUN_100651184(plVar4);
  fVar8 = (fVar10 * -0.5 - fVar8) + -20.0;
  if ((*(float *)(param_1 + 0x4a5) != fVar9 * -0.5) || (*(float *)((long)param_1 + 0x252c) != fVar8)
     ) {
    *(float *)(param_1 + 0x4a5) = fVar9 * -0.5;
    *(float *)((long)param_1 + 0x252c) = fVar8;
    FUN_1000200a0(puVar7);
  }
  local_88 = 0;
  (**(code **)(param_1[0x49d] + 0x28))(puVar7,&local_88);
  return param_1;
}




void FUN_10017e08c(undefined8 param_1)

{
  FUN_10017e094(param_1,0);
  return;
}




void FUN_10017e094(long param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x24e8;
  FUN_100642324(param_1);
  bVar5 = param_2 == 0;
  uVar2 = 0x3f666666;
  if (bVar5) {
    uVar2 = 0;
  }
  uVar3 = 0x3f800000;
  if (bVar5) {
    uVar3 = 0;
  }
  uVar4 = 0x3ecccccd;
  if (bVar5) {
    uVar4 = 0x3dcccccd;
  }
  pcVar1 = FUN_10001fc6c;
  if (bVar5) {
    pcVar1 = FUN_10017e164;
  }
  uVar6 = FUN_10064081c(uVar2);
  FUN_100642b14(param_1,uVar6);
  uVar6 = FUN_100640840(uVar3,uVar4,pcVar1);
  FUN_100642b14(param_1,uVar6);
  return;
}




void FUN_10017e134(undefined8 param_1)

{
  FUN_10017e094(param_1,1);
  return;
}




void FUN_10017e13c(undefined8 param_1)

{
  FUN_1001b88c4();
  FUN_10017e094(param_1,1);
  return;
}




float FUN_10017e164(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  fVar1 = fVar1 * fVar1;
  return param_2 - param_3 * (fVar1 * fVar1 + -1.0);
}




long * FUN_10017e180(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,uint *param_8)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  void *pvVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  undefined4 uVar23;
  code *local_c0;
  long *local_b8;
  void *local_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  
  puVar17 = (undefined8 *)FUN_10018f21c();
  *puVar17 = &PTR_thunk_FUN_10017f260_10145e8f0;
  puVar17 = puVar17 + 0x6d;
  thunk_FUN_100183990(puVar17,0);
  thunk_FUN_1001ceb64(param_3 + 299,0);
  thunk_FUN_1001cd434(param_3 + 0x148);
  plVar1 = param_3 + 0x15e;
  FUN_1006421a8(plVar1);
  param_3[0x15e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_3 + 0x16f;
  thunk_FUN_100650e64();
  plVar3 = param_3 + 0x195;
  thunk_FUN_100650e64();
  FUN_1006421a8();
  param_3[0x1bb] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_3 + 0x1cc;
  FUN_1006421a8(plVar4);
  param_3[0x1cc] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_3 + 0x1dd;
  thunk_FUN_100652c08();
  plVar6 = param_3 + 0x1fb;
  thunk_FUN_1001cd1dc();
  plVar8 = param_3 + 0x226;
  FUN_1006421a8(plVar8);
  param_3[0x226] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64();
  plVar9 = param_3 + 0x25d;
  FUN_1006421a8(plVar9);
  param_3[0x25d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_3 + 0x26e;
  thunk_FUN_100652c08();
  plVar11 = param_3 + 0x28c;
  FUN_1006533a4(plVar11);
  plVar12 = param_3 + 0x2ac;
  FUN_1006421a8(plVar12);
  param_3[0x2ac] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_1001c43fc();
  FUN_10003330c(param_3 + 0x358,param_7);
  plVar7 = param_3 + 0x4d;
  *(undefined1 *)(param_3 + 0x363) = 0;
  param_3[0x360] = 0;
  param_3[0x35f] = 0;
  param_3[0x362] = 0;
  param_3[0x361] = 0;
  param_3[0x35c] = 0;
  param_3[0x35b] = 0;
  param_3[0x35e] = 0;
  param_3[0x35d] = 0;
  iVar15 = FUN_100642d08(plVar7);
  if (iVar15 != 0) {
    FUN_1006423ec(plVar7,1);
  }
  (**(code **)(*param_3 + 0x78))(param_3,plVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_100642bd8(plVar1,puVar17,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x1bb,1);
  FUN_100642bd8(param_3 + 0x1bb,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  FUN_100642bd8(plVar9,plVar11,1);
  FUN_100642bd8(plVar9,plVar10,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar8,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x237,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 299,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar12,1);
  FUN_100642bd8(plVar12,param_3 + 0x2bd,1);
  FUN_100642bd8(plVar12,param_3 + 0x2db,1);
  if (*param_8 != 0) {
    lVar20 = 0;
    uVar21 = 0;
    do {
      pvVar18 = operator_new(0x2910);
      local_c0 = (code *)FUN_10017dd34(pvVar18,*(long *)(param_8 + 2) + lVar20);
      FUN_10017ea48(param_3 + 0x35b,&local_c0);
      FUN_100642bd8(plVar8,local_c0,1);
      FUN_100181c18(0x42480000,0x43700000,0x43700000,local_c0);
      FUN_100181b70(0x447a0000,local_c0);
      FUN_100181c68(0x42f00000,local_c0);
      FUN_100181c78(0x40000000,local_c0);
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0xa0;
    } while (uVar21 < *param_8);
  }
  iVar15 = FUN_100126c88();
  FUN_100652cdc(param_3 + 0x107,"circle_button_question");
  uVar19 = *(uint *)((long)param_3 + 0x3ec);
  if ((uVar19 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_3 + 0x3ec) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5f80;
    FUN_1000200a0(puVar17);
  }
  fVar22 = 1.0;
  if (iVar15 == 0) {
    fVar22 = 0.8;
  }
  if ((*(float *)(param_3 + 0x76) != fVar22) || (*(float *)((long)param_3 + 0x3b4) != fVar22)) {
    *(float *)(param_3 + 0x76) = fVar22;
    *(float *)((long)param_3 + 0x3b4) = fVar22;
    FUN_1000200a0(puVar17);
  }
  FUN_1001b495c(0xbf800000,puVar17);
  iVar16 = FUN_1004e36c0(param_6,&DAT_101d91650);
  uVar19 = 4;
  if (iVar16 == 0) {
    uVar19 = 0;
  }
  *(uint *)((long)param_3 + 0x3ec) = *(uint *)((long)param_3 + 0x3ec) & 0xfffffffb | uVar19;
  local_98 = DAT_101d91884;
  local_c0 = FUN_10017eac8;
  local_a8 = 0;
  lStack_a0 = 0;
  local_b0 = (void *)0x0;
  local_b8 = param_3;
  FUN_10001554c(param_3 + 0x6e,&local_c0);
  FUN_1001b4964(puVar17,1);
  ppuVar14 = &PTR_s_build___Fonts_Brandon_Light_96_f_10184e1d8;
  if (iVar15 == 0) {
    ppuVar14 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar15 == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar2,*ppuVar14);
  FUN_1006513c0(plVar2,param_4);
  *(uint *)((long)param_3 + 0xbfc) = *(uint *)((long)param_3 + 0xbfc) | 0x10;
  FUN_100651594(plVar3,*ppuVar13,&DAT_10115a168);
  FUN_100651700(plVar3,1);
  if ((*(uint *)((long)param_3 + 0xd2c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0xd2c) = *(uint *)((long)param_3 + 0xd2c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_1006513c0(plVar3,param_5);
  *(uint *)((long)param_3 + 0xd2c) = *(uint *)((long)param_3 + 0xd2c) | 0x10;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_clock");
  FUN_10064e47c(0x42180000,0x42180000,plVar5);
  uVar19 = *(uint *)((long)param_3 + 0xf6c);
  if ((uVar19 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0xf6c) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar5);
  }
  fVar22 = (float)FUN_100652e60(plVar5);
  if ((*(float *)(param_3 + 0x1e5) != fVar22 * 0.5) || (*(float *)((long)param_3 + 0xf2c) != 0.0)) {
    *(float *)(param_3 + 0x1e5) = fVar22 * 0.5;
    *(undefined4 *)((long)param_3 + 0xf2c) = 0;
    FUN_1000200a0(plVar5);
  }
  local_c0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_3[0x1dd] + 0x28))(plVar5,&local_c0);
  ppuVar14 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar15 == 0) {
    ppuVar14 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar6,*ppuVar14);
  if ((*(uint *)((long)param_3 + 0x105c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x105c) = *(uint *)((long)param_3 + 0x105c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar6);
  }
  fVar22 = (float)FUN_100652e60(plVar5);
  if ((*(float *)(param_3 + 0x203) != fVar22 + 10.0) || (*(float *)((long)param_3 + 0x101c) != 0.0))
  {
    *(float *)(param_3 + 0x203) = fVar22 + 10.0;
    *(undefined4 *)((long)param_3 + 0x101c) = 0;
    FUN_1000200a0(plVar6);
  }
  local_c0 = (code *)0x3f00000000000000;
  (**(code **)(param_3[0x1fb] + 0x28))(plVar6,&local_c0);
  ppuVar14 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar15 == 0) {
    ppuVar14 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(param_3 + 0x237,*ppuVar14);
  *(uint *)((long)param_3 + 0x123c) = *(uint *)((long)param_3 + 0x123c) & 0xfffffffb;
  FUN_100652cac(plVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_fill");
  FUN_100652dd4(plVar11,&DAT_10115a164,2);
  uVar19 = *(uint *)((long)param_3 + 0x14e4);
  if ((uVar19 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x14e4) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar11);
  }
  FUN_100653464(plVar11,FUN_10017eae0,param_3);
  fVar22 = (float)FUN_100652e60(plVar11);
  fVar22 = 560.0 / fVar22;
  if ((*(float *)(param_3 + 0x295) != fVar22) || (*(float *)((long)param_3 + 0x14ac) != fVar22)) {
    *(float *)(param_3 + 0x295) = fVar22;
    *(float *)((long)param_3 + 0x14ac) = fVar22;
    FUN_1000200a0(plVar11);
  }
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_deserter_icon_backdrop")
  ;
  FUN_10064e47c(0x44098000,0x44098000,plVar10);
  uVar19 = *(uint *)((long)param_3 + 0x13f4);
  if ((uVar19 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0x13f4) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6600;
    FUN_1000200a0(plVar10);
  }
  thunk_FUN_1004e439c(&local_c0,param_6);
  FUN_10003330c(&local_b0,&DAT_101d91198);
  local_98 = 1;
  local_94 = 0x41a00000;
  FUN_10003c048(param_3 + 0x149,&local_c0);
  if (lStack_a0 < 0) {
    operator_delete(local_b0);
  }
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
  }
  param_3[0x14e] = (long)puVar17;
  *(undefined4 *)(param_3 + 0x15d) = 3;
  param_3[0x15a] = 0x447a00003deb851f;
  param_3[0x158] = 0x41a00000;
  *(undefined1 *)((long)param_3 + 0xaec) = 1;
  FUN_100652cac(param_3 + 0x2bd,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_3 + 0x166c) = *(uint *)((long)param_3 + 0x166c) & 0xfffffffb;
  uVar23 = FUN_10065317c(plVar11);
  *(undefined4 *)(param_3 + 0x357) = uVar23;
  FUN_10064e47c(param_1,param_2,param_3);
  FUN_10017eb50(param_3);
  return param_3;
}




void FUN_10017ea48(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100180ae0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10017eac8(long param_1)

{
  FUN_1001cefb8(param_1 + 0x958,param_1 + 0x1ac0,param_1 + 0xa40);
  return;
}




void FUN_10017eae0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1006575c4(param_3,"circle_button_fill");
  FUN_1000f3e38(*param_2,param_2[1],*(undefined4 *)(param_5 + 0x1ae8),0,0,param_1,param_2,uVar1,
                param_3,param_4);
  return;
}




void FUN_10017eb50(long *param_1)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 *local_a0;
  long *local_98;
  float local_90;
  float local_8c;
  undefined1 *local_88;
  
  FUN_100641464(&local_8c,&local_90);
  fVar8 = DAT_101d236ac;
  fVar14 = local_8c - DAT_101d236ac;
  fVar15 = fVar14 * 0.5;
  if ((*(float *)(param_1 + 0x55) != fVar15) || (*(float *)((long)param_1 + 0x2ac) != 0.0)) {
    *(float *)(param_1 + 0x55) = fVar15;
    *(undefined4 *)((long)param_1 + 0x2ac) = 0;
    FUN_1000200a0(param_1 + 0x4d);
  }
  local_a0 = (undefined1 *)0x3f000000;
  (**(code **)(param_1[0x4d] + 0x28))(param_1 + 0x4d,&local_a0);
  fVar11 = fVar15 + -936.0;
  fVar16 = fVar11;
  if (fVar11 <= 0.0) {
    fVar16 = 40.0;
  }
  fVar16 = fVar14 - fVar16;
  plVar4 = param_1 + 0x6d;
  fVar7 = (float)FUN_10064259c(plVar4);
  FUN_10064259c(plVar4);
  *(float *)((long)param_1 + 0xad4) = fVar11 + 1000.0;
  *(float *)(param_1 + 0x15c) = (local_90 + -50.0) - DAT_101854a80;
  plVar1 = param_1 + 0x16f;
  fVar11 = *(float *)(param_1 + 0x178);
  puVar13 = (undefined1 *)NEON_fmov(0x3f800000,4);
  if ((fVar11 != 1.0) || (fVar11 = *(float *)((long)param_1 + 0xbc4), fVar11 != 1.0)) {
    param_1[0x178] = (long)puVar13;
    FUN_1000200a0(plVar1);
  }
  FUN_100651184(plVar1);
  fVar11 = fVar11 + 40.0;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x177) == fVar16) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0xbbc)) && !NAN(fVar11))) {
    bVar2 = *(float *)((long)param_1 + 0xbbc) == fVar11;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x177) = fVar16;
    *(float *)((long)param_1 + 0xbbc) = fVar11;
    FUN_1000200a0(plVar1);
  }
  fVar17 = fVar15 + -305.0 + fVar7 * -0.5;
  fVar7 = fVar8 * 0.5 + 20.0;
  local_a0 = puVar13;
  (**(code **)(param_1[0x16f] + 0x28))(plVar1,&local_a0);
  uVar9 = 0;
  uVar10 = 0;
  FUN_10065179c(0x448fc000,0,0x3f800000,plVar1);
  plVar1 = param_1 + 0x195;
  FUN_100651184(plVar1);
  FUN_10065184c(CONCAT44(uVar10,uVar9),0,0x3f800000,plVar1);
  FUN_100651708(0x448fc000,plVar1,1);
  fVar8 = (float)FUN_10064259c(plVar1);
  fVar11 = *(float *)((long)param_1 + 0xbbc) + 2.0;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x19d) == fVar16 - fVar8) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0xcec)) && !NAN(fVar11))) {
    bVar2 = *(float *)((long)param_1 + 0xcec) == fVar11;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x19d) = fVar16 - fVar8;
    *(float *)((long)param_1 + 0xcec) = fVar11;
    FUN_1000200a0(plVar1);
  }
  local_a0 = (undefined1 *)0x0;
  (**(code **)(param_1[0x195] + 0x28))(plVar1,&local_a0);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x75) == fVar17) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x3ac)) && !NAN(fVar7))) {
    bVar2 = *(float *)((long)param_1 + 0x3ac) == fVar7;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x75) = fVar17;
    *(float *)((long)param_1 + 0x3ac) = fVar7;
    FUN_1000200a0(plVar4);
  }
  local_a0 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x6d] + 0x28))(plVar4,&local_a0);
  fVar8 = *(float *)((long)param_1 + 0x11fc);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x23f) == fVar16) && (bVar2 = false, !NAN(fVar8))) {
    bVar2 = fVar8 == 588.0;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x23f) = fVar16;
    *(undefined4 *)((long)param_1 + 0x11fc) = 0x44130000;
    FUN_1000200a0(param_1 + 0x237);
  }
  local_a0 = (undefined1 *)0x3f0000003f800000;
  (**(code **)(param_1[0x237] + 0x28))(param_1 + 0x237,&local_a0);
  local_a0 = (undefined1 *)0x0;
  local_98 = (long *)0x0;
  FUN_10017f9a4(param_1,&local_a0);
  if ((uint)local_a0 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar8 = (-6.0 - *(float *)((long)param_1 + 0xcec)) + fVar8;
  }
  else {
    fVar12 = *(float *)((long)param_1 + 0xcec);
    FUN_100651184(plVar1);
    fVar7 = fVar8;
    (**(code **)(*(long *)*local_98 + 0x60))((long *)*local_98,1,0,1,1);
    fVar7 = fVar7 * 0.5;
    fVar11 = *(float *)(*local_98 + 0x4c) * fVar7;
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar17 = fVar7;
    (**(code **)(*(long *)*local_98 + 0x50))();
    fVar8 = (float)NEON_fminnm(fVar12 + fVar8 + 50.0 + fVar11,fVar7 + -5.0 + fVar17 * -0.5);
    if ((uint)local_a0 != 0) {
      uVar5 = 0;
      iVar6 = -1;
      uVar3 = (uint)local_a0;
      do {
        plVar4 = (long *)local_98[uVar3 + iVar6];
        if (plVar4 != (long *)0x0) {
          fVar11 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
          uVar3 = iVar6 + (uint)local_a0;
          fVar7 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
          fVar11 = fVar16 + fVar11 * -0.5 + (float)uVar3 * (-14.0 - fVar7);
          plVar4 = (long *)local_98[uVar5];
          fVar17 = *(float *)(plVar4 + 8);
          bVar2 = false;
          if ((fVar17 == fVar11) &&
             (bVar2 = false, !NAN(*(float *)((long)plVar4 + 0x44)) && !NAN(fVar8))) {
            bVar2 = *(float *)((long)plVar4 + 0x44) == fVar8;
          }
          if (!bVar2) {
            *(float *)(plVar4 + 8) = fVar11;
            *(float *)((long)plVar4 + 0x44) = fVar8;
            FUN_1000200a0(plVar4);
          }
          local_88 = &DAT_3f0000003f000000;
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_88);
          uVar3 = (uint)local_a0;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (uVar5 < uVar3);
    }
    (**(code **)(*(long *)*local_98 + 0x60))((long *)*local_98,1,0,1,1);
    fVar8 = ((fVar8 + -50.0) - *(float *)((long)param_1 + 0xcec)) + fVar17 * -0.5;
  }
  fVar15 = fVar15 + -618.0;
  FUN_10065184c(fVar8,0,0x3f800000,plVar1);
  if (*(float *)((long)param_1 + 0xcf4) < 1.0) {
    FUN_100651708(1150.0 / *(float *)(param_1 + 0x19e),plVar1,1);
    fVar8 = (float)FUN_10064259c(plVar1);
    fVar11 = *(float *)((long)param_1 + 0xbbc) + 2.0;
    bVar2 = false;
    if ((*(float *)(param_1 + 0x19d) == fVar16 - fVar8) &&
       (bVar2 = false, !NAN(*(float *)((long)param_1 + 0xcec)) && !NAN(fVar11))) {
      bVar2 = *(float *)((long)param_1 + 0xcec) == fVar11;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x19d) = fVar16 - fVar8;
      *(float *)((long)param_1 + 0xcec) = fVar11;
      FUN_1000200a0(plVar1);
    }
    local_88 = (undefined1 *)0x0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_88);
  }
  plVar4 = param_1 + 0x1cc;
  fVar8 = (float)FUN_1006425d0(plVar4,0,0,1,1);
  fVar8 = fVar15 + fVar8 * -0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1d4) == fVar8) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0xea4)))) {
    bVar2 = *(float *)((long)param_1 + 0xea4) == 588.0;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x1d4) = fVar8;
    *(undefined4 *)((long)param_1 + 0xea4) = 0x44130000;
    FUN_1000200a0(plVar4);
  }
  local_88 = (undefined1 *)0x0;
  (**(code **)(param_1[0x1cc] + 0x28))(plVar4,&local_88);
  if ((*(float *)(param_1 + 0x294) != fVar15) || (*(float *)((long)param_1 + 0x14a4) != 289.0)) {
    *(float *)(param_1 + 0x294) = fVar15;
    *(undefined4 *)((long)param_1 + 0x14a4) = 0x43908000;
    FUN_1000200a0(param_1 + 0x28c);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x28c] + 0x28))(param_1 + 0x28c,&local_88);
  if ((*(float *)(param_1 + 0x276) != fVar15) || (*(float *)((long)param_1 + 0x13b4) != 289.0)) {
    *(float *)(param_1 + 0x276) = fVar15;
    *(undefined4 *)((long)param_1 + 0x13b4) = 0x43908000;
    FUN_1000200a0(param_1 + 0x26e);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x26e] + 0x28))(param_1 + 0x26e,&local_88);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar14,param_1 + 0x2bd);
  if ((*(float *)(param_1 + 0x2e3) != *(float *)(param_1 + 0x294)) ||
     (*(float *)((long)param_1 + 0x171c) != *(float *)((long)param_1 + 0x14a4))) {
    *(float *)(param_1 + 0x2e3) = *(float *)(param_1 + 0x294);
    *(float *)((long)param_1 + 0x171c) = *(float *)((long)param_1 + 0x14a4);
    FUN_1000200a0(param_1 + 0x2db);
  }
  if (local_98 != (long *)0x0) {
    operator_delete__(local_98);
  }
  return;
}




void FUN_10017f258(void)

{
  FUN_10017e180();
  return;
}




void FUN_10017f260(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_10017f260_10145e8f0;
  uVar2 = *(uint *)(param_1 + 0x35b);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x35c];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0x35c];
        uVar2 = *(uint *)(param_1 + 0x35b);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[0x35c] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x35b) = 0;
    operator_delete__((void *)param_1[0x35c]);
    param_1[0x35b] = 0;
    param_1[0x35c] = 0;
  }
  if (*(char *)((long)param_1 + 0x1ad7) < '\0') {
    operator_delete((void *)param_1[0x358]);
  }
  param_1[0x2db] = &PTR_FUN_10145ea78;
  param_1[0x339] = &PTR_FUN_1014a7108;
  param_1[0x350] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x353);
  FUN_10064e2bc(param_1 + 0x339);
  param_1[0x31b] = &PTR_FUN_1014a7108;
  param_1[0x332] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x335);
  FUN_10064e2bc(param_1 + 0x31b);
  FUN_10064221c(param_1 + 0x30a);
  param_1[0x2ec] = &PTR_FUN_1014a7108;
  param_1[0x303] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x306);
  FUN_10064e2bc(param_1 + 0x2ec);
  FUN_10064221c(param_1 + 0x2db);
  param_1[0x2bd] = &PTR_FUN_1014a7108;
  param_1[0x2d4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d7);
  FUN_10064e2bc(param_1 + 0x2bd);
  FUN_10064221c(param_1 + 0x2ac);
  param_1[0x28c] = &PTR_FUN_1014a7108;
  param_1[0x2a3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2a6);
  FUN_10064e2bc(param_1 + 0x28c);
  param_1[0x26e] = &PTR_FUN_1014a7108;
  param_1[0x285] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x288);
  FUN_10064e2bc(param_1 + 0x26e);
  FUN_10064221c(param_1 + 0x25d);
  thunk_FUN_100651068(param_1 + 0x237);
  FUN_10064221c(param_1 + 0x226);
  param_1[0x1fb] = &PTR_FUN_10145eb78;
  param_1[0x212] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x223] != (void *)0x0) {
    operator_delete__((void *)param_1[0x223]);
    param_1[0x223] = 0;
    param_1[0x222] = 0;
  }
  FUN_100651068(param_1 + 0x1fb);
  param_1[0x1dd] = &PTR_FUN_1014a7108;
  param_1[500] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f7);
  FUN_10064e2bc(param_1 + 0x1dd);
  FUN_10064221c(param_1 + 0x1cc);
  FUN_10064221c(param_1 + 0x1bb);
  thunk_FUN_100651068(param_1 + 0x195);
  thunk_FUN_100651068(param_1 + 0x16f);
  FUN_10064221c(param_1 + 0x15e);
  param_1[0x148] = &PTR_FUN_1014666e0;
  if (*(char *)((long)param_1 + 0xab7) < '\0') {
    operator_delete((void *)param_1[0x154]);
  }
  if ((void *)param_1[0x153] != (void *)0x0) {
    operator_delete__((void *)param_1[0x153]);
    param_1[0x153] = 0;
    param_1[0x152] = 0;
  }
  FUN_10003c1ec(param_1 + 0x149,1);
  thunk_FUN_1001cec4c(param_1 + 299);
  param_1[0x6d] = &PTR_FUN_10145f300;
  param_1[0x107] = &PTR_FUN_1014a7108;
  param_1[0x11e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x121);
  FUN_10064e2bc(param_1 + 0x107);
  param_1[0xe9] = &PTR_FUN_1014a7108;
  param_1[0x100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x103);
  FUN_10064e2bc(param_1 + 0xe9);
  param_1[0xcb] = &PTR_FUN_1014a7108;
  param_1[0xe2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe5);
  FUN_10064e2bc(param_1 + 0xcb);
  FUN_10064221c(param_1 + 0xba);
  FUN_10003bec8(param_1 + 0x6d);
  *param_1 = &PTR_FUN_1014605c8;
  param_1[0x4d] = &PTR_FUN_101462f50;
  param_1[0x5e] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0x34f) < '\0') {
    operator_delete((void *)param_1[0x67]);
  }
  FUN_1010b7434(param_1 + 0x61);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void FUN_10017f5e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ea78;
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  param_1[0x40] = &PTR_FUN_1014a7108;
  param_1[0x57] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5a);
  FUN_10064e2bc(param_1 + 0x40);
  FUN_10064221c(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10017f680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145eb78;
  param_1[0x17] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x28] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28]);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
  }
  FUN_100651068(param_1);
  return;
}




void thunk_FUN_10017f260(void)

{
  FUN_10017f260();
  return;
}




void FUN_10017f6c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017f260();
  operator_delete(pvVar1);
  return;
}




void FUN_10017f6dc(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  FUN_10018f27c();
  lVar1 = param_1 + 0x268;
  if ((*(uint *)(param_1 + 0x2ec) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  FUN_1001a6880(0x452f0000,0x441f0000,lVar1);
  lVar2 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_101dbd2f8;
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063fcac(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_10017f824;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_10017f824:
  FUN_10063fce0(0x3f800000,puVar5);
  FUN_10063f0e8(0x3f000000,puVar5);
  FUN_100642b7c(lVar1,puVar4);
  FUN_10017eb50(param_1);
  return;
}




void FUN_10017f868(float param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  long local_28;
  
  if (*(float *)(param_2 + 0x1aec) <= 0.0) {
    if (*(int *)(param_2 + 0x1b00) < 1) {
      *(uint *)(param_2 + 0xe5c) = *(uint *)(param_2 + 0xe5c) & 0xfffffffb;
      *(uint *)(param_2 + 0x14e4) =
           *(uint *)(param_2 + 0x14e4) & 0xfffffff8 |
           *(uint *)(param_2 + 0x14e4) & 3 | (uint)(*(long *)(param_2 + 0x1af0) != -1) << 2;
    }
    else {
      *(uint *)(param_2 + 0xe5c) = *(uint *)(param_2 + 0xe5c) | 4;
    }
  }
  else {
    param_1 = *(float *)(param_2 + 0x1aec) - param_1;
    *(float *)(param_2 + 0x1aec) = param_1;
    fVar3 = param_1 / (float)*(long *)(param_2 + 0x1b10);
    if (*(char *)(param_2 + 0x1b18) == '\0') {
      fVar3 = (float)NEON_fminnm(1.0 - fVar3,0x3f800000);
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      bVar1 = 0.025 < fVar3;
    }
    else {
      fVar3 = (float)NEON_fminnm(fVar3,0x3f800000);
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      bVar1 = fVar3 < 1.0;
    }
    *(float *)(param_2 + 0x1ae8) = fVar3;
    uVar2 = 4;
    if (!bVar1) {
      uVar2 = 0;
    }
    *(uint *)(param_2 + 0x14e4) = *(uint *)(param_2 + 0x14e4) & 0xfffffffb | uVar2;
    if (param_1 <= 0.0) {
      *(uint *)(param_2 + 0xe5c) = *(uint *)(param_2 + 0xe5c) & 0xfffffffb;
    }
    else {
      local_28 = (long)param_1;
      FUN_1001cd374(param_2 + 0xfd8,&local_28);
      *(uint *)(param_2 + 0xe5c) = *(uint *)(param_2 + 0xe5c) | 4;
      param_1 = *(float *)(param_2 + 0x1aec);
    }
    if (param_1 <= 0.0) {
      FUN_10017eb50(param_2);
    }
  }
  return;
}




void FUN_10017f9a4(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long local_48;
  
  if (*(int *)(param_1 + 0x1ad8) != 0) {
    uVar3 = 0;
    do {
      local_48 = *(long *)(*(long *)(param_1 + 0x1ae0) + uVar3 * 8);
      if (local_48 != 0) {
        if (*param_2 < 3) {
          iVar1 = *(int *)(local_48 + 0x2908);
          if (iVar1 != 0) {
            if ((iVar1 == 3) ||
               ((iVar1 == 1 &&
                ((0.01 <= *(float *)(param_1 + 0x1aec) || (0 < *(int *)(param_1 + 0x1b00))))))) {
              uVar2 = *(uint *)(local_48 + 0x84);
LAB_10017fa28:
              *(uint *)(local_48 + 0x84) = uVar2 | 4;
              FUN_10017ea48(param_2,&local_48);
              goto LAB_10017fa6c;
            }
            goto LAB_10017fa60;
          }
          if (0.01 <= *(float *)(param_1 + 0x1aec)) goto LAB_10017fa60;
          uVar2 = *(uint *)(local_48 + 0x84);
          if (*(int *)(param_1 + 0x1b00) < 1) goto LAB_10017fa28;
        }
        else {
LAB_10017fa60:
          uVar2 = *(uint *)(local_48 + 0x84);
        }
        *(uint *)(local_48 + 0x84) = uVar2 & 0xfffffffb;
      }
LAB_10017fa6c:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x1ad8));
  }
  return;
}




undefined8 FUN_10017fa94(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  void *pvVar12;
  long lVar13;
  void *local_68 [2];
  char local_51;
  
  iVar7 = *(int *)(param_1 + 0x1ad8);
  if (0 < iVar7) {
    lVar13 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x1ae0) + lVar13 * 8);
      if (lVar9 != 0) {
        FUN_10003330c(local_68,lVar9 + 0x24a8);
        lVar9 = *(long *)(*(long *)(param_1 + 0x1ae0) + lVar13 * 8);
        bVar5 = *(byte *)(lVar9 + 0x24bf);
        uVar10 = (ulong)bVar5;
        sVar1 = *(size_t *)(lVar9 + 0x24b0);
        if (-1 < (char)bVar5) {
          sVar1 = uVar10;
        }
        bVar4 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar4) {
          sVar2 = (ulong)bVar4;
        }
        if (sVar1 == sVar2) {
          pvVar12 = *(void **)(lVar9 + 0x24a8);
          puVar3 = pvVar12;
          if (-1 < (char)bVar5) {
            puVar3 = (undefined8 *)(lVar9 + 0x24a8);
          }
          pbVar11 = *(byte **)param_2;
          if (-1 < (char)bVar4) {
            pbVar11 = param_2;
          }
          if ((char)bVar5 < '\0') {
            if (sVar1 == 0) goto LAB_10017fba4;
            iVar7 = _memcmp(puVar3,pbVar11,sVar1);
            bVar6 = iVar7 == 0;
          }
          else if (sVar1 == 0) {
LAB_10017fba4:
            bVar6 = true;
          }
          else {
            if ((uint)*pbVar11 != ((uint)pvVar12 & 0xff)) goto LAB_10017fb88;
            pbVar8 = (byte *)(lVar9 + 0x24a9);
            do {
              uVar10 = uVar10 - 1;
              pbVar11 = pbVar11 + 1;
              bVar6 = uVar10 == 0;
              if (uVar10 == 0) break;
              bVar5 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar5 == *pbVar11);
          }
        }
        else {
LAB_10017fb88:
          bVar6 = false;
        }
        if (local_51 < '\0') {
          operator_delete(local_68[0]);
        }
        if (bVar6) {
          return 1;
        }
        iVar7 = *(int *)(param_1 + 0x1ad8);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar7);
  }
  return 0;
}




void FUN_10017fbf4(long param_1,long param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auStack_a8 [8];
  void *local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  long local_78;
  
  uVar10 = *(uint *)(param_2 + 0x28);
  if (0 < (int)uVar10) {
    uVar17 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x1ac0);
    lVar18 = *(long *)(param_2 + 0x30);
    bVar16 = *(byte *)(param_1 + 0x1ad7);
    sVar2 = *(size_t *)(param_1 + 0x1ac8);
    if (-1 < (char)bVar16) {
      sVar2 = (ulong)bVar16;
    }
    do {
      pbVar11 = (byte *)(lVar18 + uVar17 * 0x38);
      bVar5 = pbVar11[0x17];
      sVar3 = *(size_t *)(pbVar11 + 8);
      if (-1 < (char)bVar5) {
        sVar3 = (ulong)bVar5;
      }
      if (sVar2 == sVar3) {
        puVar4 = (void *)*puVar1;
        if (-1 < (char)bVar16) {
          puVar4 = puVar1;
        }
        pbVar12 = *(byte **)pbVar11;
        if (-1 < (char)bVar5) {
          pbVar12 = pbVar11;
        }
        if ((char)bVar16 < '\0') {
          if ((sVar2 == 0) || (iVar7 = _memcmp(puVar4,pbVar12,sVar2), iVar7 == 0))
          goto LAB_10017fd4c;
        }
        else {
          if (sVar2 == 0) {
LAB_10017fd4c:
            lVar18 = lVar18 + (uVar17 & 0xffffffff) * 0x38;
            uVar8 = *(undefined8 *)(lVar18 + 0x20);
            *(undefined8 *)(param_1 + 0x1af8) = *(undefined8 *)(lVar18 + 0x28);
            *(undefined8 *)(param_1 + 0x1af0) = uVar8;
            *(undefined8 *)(param_1 + 0x1b00) = *(undefined8 *)(lVar18 + 0x30);
            *(undefined8 *)(param_1 + 0x1b08) = *(undefined8 *)(lVar18 + 0x18);
            lVar18 = FUN_1004f1a74(0);
            lVar13 = *(long *)(param_1 + 0x1af0);
            *(long *)(param_1 + 0x1b10) = (lVar13 + lVar18) - *(long *)(param_1 + 0x1af8);
            if (*(int *)(param_1 + 0x1b00) < 1) {
              if (lVar13 < 1) {
                if (lVar13 == -1) {
                  *(uint *)(param_1 + 0xe5c) = *(uint *)(param_1 + 0xe5c) & 0xfffffffb;
                  *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) & 0xfffffffb;
                  *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) | 4;
                  uVar8 = FUN_1004e0150("MENU_BOOSTS_MARKET_PERMANENT_BOOST_ACTIVE",0);
                  lVar18 = FUN_1004f1a74(0);
                  FUN_1000f1e20(auStack_88,uVar8,lVar18 - *(long *)(param_1 + 0x1b08),0);
                  FUN_1006513c0(param_1 + 0x11b8,auStack_88);
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                  FUN_1004e0150("MENU_BOOSTS_MARKET_BONUS_EARNED",0);
                }
                goto LAB_1001802d8;
              }
              *(uint *)(param_1 + 0xe5c) = *(uint *)(param_1 + 0xe5c) | 4;
              *(uint *)(param_1 + 0xf6c) = *(uint *)(param_1 + 0xf6c) | 4;
              *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) | 4;
              *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) & 0xfffffffb;
              uVar8 = FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_LEFT",0);
              FUN_1001cd23c(param_1 + 0xfd8,uVar8,0,0);
              lVar13 = *(long *)(param_1 + 0x1af0);
              lVar18 = FUN_1004f1a74(0);
              fVar20 = (float)lVar13 /
                       (float)((*(long *)(param_1 + 0x1af0) + lVar18) - *(long *)(param_1 + 0x1af8))
              ;
            }
            else {
              *(uint *)(param_1 + 0xe5c) = *(uint *)(param_1 + 0xe5c) | 4;
              *(uint *)(param_1 + 0xf6c) = *(uint *)(param_1 + 0xf6c) & 0xfffffffb;
              *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) | 4;
              *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) & 0xfffffffb;
              local_78 = 0;
              uVar8 = FUN_10032f924();
              FUN_1003301bc(uVar8,puVar1,&local_78);
              if (local_78 == 0) {
                if (1 < *(int *)(param_1 + 0x1b00)) {
                  FUN_1004e313c(auStack_88);
                  FUN_1004e38ac(auStack_88,"%d");
                  uVar8 = FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_MATCHES_PLURAL_LEFT",0);
                  thunk_FUN_1004e439c(auStack_98,uVar8);
                  goto LAB_100180200;
                }
LAB_100180108:
                pcVar9 = "MENU_BOOSTS_MARKET_DURATION_MATCHES_SINGLE_LEFT";
LAB_100180114:
                uVar8 = FUN_1004e0150(pcVar9,0);
                FUN_1001cd23c(param_1 + 0xfd8,uVar8,0,0);
              }
              else if (*(int *)(param_1 + 0x1b00) < 2) {
                bVar16 = *(byte *)(local_78 + 0x77);
                uVar14 = (ulong)bVar16;
                uVar15 = *(ulong *)(local_78 + 0x68);
                uVar17 = uVar15;
                if (-1 < (char)bVar16) {
                  uVar17 = uVar14;
                }
                if (uVar17 == 0xe) {
                  iVar7 = std::string::compare
                                    (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013dfc48);
                  if (iVar7 == 0) goto LAB_100180108;
                  bVar16 = *(byte *)(local_78 + 0x77);
                  uVar14 = (ulong)bVar16;
                  uVar15 = *(ulong *)(local_78 + 0x68);
                }
                uVar17 = uVar15;
                if (-1 < (char)bVar16) {
                  uVar17 = uVar14;
                }
                if (uVar17 == 9) {
                  iVar7 = std::string::compare
                                    (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013dfc87);
                  if (iVar7 != 0) {
                    bVar16 = *(byte *)(local_78 + 0x77);
                    uVar14 = (ulong)bVar16;
                    uVar15 = *(ulong *)(local_78 + 0x68);
                    goto LAB_100180090;
                  }
                  pcVar9 = "MENU_BOOSTS_MARKET_DURATION_WINS_SINGLE_LEFT";
                  goto LAB_100180114;
                }
LAB_100180090:
                uVar17 = uVar15;
                if (-1 < (char)bVar16) {
                  uVar17 = uVar14;
                }
                if (uVar17 == 10) {
                  iVar7 = std::string::compare
                                    (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013dfcbe);
                  if (iVar7 == 0) {
                    pcVar9 = "MENU_BOOSTS_MARKET_DURATION_LOSSES_SINGLE_LEFT";
                    goto LAB_100180114;
                  }
                  bVar16 = *(byte *)(local_78 + 0x77);
                  uVar14 = (ulong)bVar16;
                  uVar15 = *(ulong *)(local_78 + 0x68);
                }
                if (-1 < (char)bVar16) {
                  uVar15 = uVar14;
                }
                if ((uVar15 == 4) &&
                   (iVar7 = std::string::compare
                                      (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013db1dd),
                   iVar7 == 0)) goto LAB_100180108;
              }
              else {
                FUN_1004e313c(auStack_88);
                FUN_1004e38ac(auStack_88,"%d");
                FUN_1004e313c(auStack_98);
                bVar16 = *(byte *)(local_78 + 0x77);
                uVar14 = (ulong)bVar16;
                uVar15 = *(ulong *)(local_78 + 0x68);
                uVar17 = uVar15;
                if (-1 < (char)bVar16) {
                  uVar17 = uVar14;
                }
                if (uVar17 == 0xe) {
                  iVar7 = std::string::compare
                                    (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013dfc48);
                  if (iVar7 != 0) {
                    bVar16 = *(byte *)(local_78 + 0x77);
                    uVar14 = (ulong)bVar16;
                    uVar15 = *(ulong *)(local_78 + 0x68);
                    goto LAB_10017fe68;
                  }
LAB_10017ff24:
                  pcVar9 = "MENU_BOOSTS_MARKET_DURATION_MATCHES_PLURAL_LEFT";
                }
                else {
LAB_10017fe68:
                  uVar17 = uVar15;
                  if (-1 < (char)bVar16) {
                    uVar17 = uVar14;
                  }
                  if (uVar17 != 9) {
LAB_10017feac:
                    uVar17 = uVar15;
                    if (-1 < (char)bVar16) {
                      uVar17 = uVar14;
                    }
                    if (uVar17 == 10) {
                      iVar7 = std::string::compare
                                        (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013dfcbe);
                      if (iVar7 == 0) {
                        pcVar9 = "MENU_BOOSTS_MARKET_DURATION_LOSSES_PLURAL_LEFT";
                        goto LAB_1001801ec;
                      }
                      bVar16 = *(byte *)(local_78 + 0x77);
                      uVar14 = (ulong)bVar16;
                      uVar15 = *(ulong *)(local_78 + 0x68);
                    }
                    if (-1 < (char)bVar16) {
                      uVar15 = uVar14;
                    }
                    if ((uVar15 != 4) ||
                       (iVar7 = std::string::compare
                                          (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013db1dd)
                       , iVar7 != 0)) goto LAB_100180200;
                    goto LAB_10017ff24;
                  }
                  iVar7 = std::string::compare
                                    (local_78 + 0x60,0,(char *)0xffffffffffffffff,0x1013dfc87);
                  if (iVar7 != 0) {
                    bVar16 = *(byte *)(local_78 + 0x77);
                    uVar14 = (ulong)bVar16;
                    uVar15 = *(ulong *)(local_78 + 0x68);
                    goto LAB_10017feac;
                  }
                  pcVar9 = "MENU_BOOSTS_MARKET_DURATION_WINS_PLURAL_LEFT";
                }
LAB_1001801ec:
                uVar8 = FUN_1004e0150(pcVar9,0);
                FUN_1000153b4(auStack_98,uVar8);
LAB_100180200:
                FUN_1004e3120(auStack_a8,"[DURATION]");
                FUN_1004e3bc4(auStack_98,0,auStack_a8,auStack_88);
                if (local_a0 != (void *)0x0) {
                  operator_delete__(local_a0);
                }
                FUN_1001cd23c(param_1 + 0xfd8,auStack_98,0,0);
                if (local_90 != (void *)0x0) {
                  operator_delete__(local_90);
                }
                if (local_80 != (void *)0x0) {
                  operator_delete__(local_80);
                }
              }
              iVar7 = 0;
              if (*(int *)(param_1 + 0x1b04) != 0) {
                iVar7 = *(int *)(param_1 + 0x1b00) / *(int *)(param_1 + 0x1b04);
              }
              fVar20 = (float)iVar7;
            }
            if (*(char *)(param_1 + 0x1b18) == '\0') {
              fVar20 = (float)NEON_fminnm(1.0 - fVar20,0x3f800000);
              if (fVar20 <= 0.0) {
                fVar20 = 0.0;
              }
              bVar6 = 0.025 < fVar20;
            }
            else {
              fVar20 = (float)NEON_fminnm(fVar20,0x3f800000);
              if (fVar20 <= 0.0) {
                fVar20 = 0.0;
              }
              bVar6 = fVar20 < 1.0;
            }
            *(float *)(param_1 + 0x1ae8) = fVar20;
            uVar10 = 4;
            if (!bVar6) {
              uVar10 = 0;
            }
            uVar10 = *(uint *)(param_1 + 0x14e4) & 0xfffffffb | uVar10;
            goto LAB_1001802d4;
          }
          pbVar11 = (byte *)(param_1 + 0x1ac1);
          uVar15 = (ulong)bVar16;
          if ((uint)*pbVar12 == ((uint)(void *)*puVar1 & 0xff)) {
            do {
              pbVar12 = pbVar12 + 1;
              if (uVar15 - 1 == 0) goto LAB_10017fd4c;
              bVar5 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              uVar15 = uVar15 - 1;
            } while (bVar5 == *pbVar12);
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar10);
  }
  *(undefined8 *)(param_1 + 0x1b10) = 0;
  *(undefined8 *)(param_1 + 0x1af4) = 0;
  *(undefined8 *)(param_1 + 0x1afc) = 0;
  *(undefined8 *)(param_1 + 0x1aec) = 0;
  *(uint *)(param_1 + 0xe5c) = *(uint *)(param_1 + 0xe5c) & 0xfffffffb;
  *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) | 4;
  *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) & 0xfffffffb;
  uVar19 = 0x3f800000;
  if (*(char *)(param_1 + 0x1b18) != '\0') {
    uVar19 = 0;
  }
  *(undefined4 *)(param_1 + 0x1ae8) = uVar19;
  uVar10 = *(uint *)(param_1 + 0x14e4) | 4;
LAB_1001802d4:
  *(uint *)(param_1 + 0x14e4) = uVar10;
LAB_1001802d8:
  *(float *)(param_1 + 0x1aec) = (float)*(long *)(param_1 + 0x1af0);
  FUN_10017eb50(param_1);
  return;
}




void thunk_FUN_10017d364(void)

{
  FUN_10017d364();
  return;
}

