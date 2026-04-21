// functions/00a2f — 25 functions
#include "libGameKindred.h"




void FUN_00a2f0b0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  ulong uVar4;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*param_3 + 0x48))();
  plVar1 = param_3 + 0x4f;
  FUN_00f13f08(plVar1);
  FUN_00f13f08(uVar4,param_2 * 0.92,param_3 + 0x6d);
  param_2 = param_2 * 0.07999998;
  FUN_00f13f08(uVar4,param_3 + 0xfe9);
  FUN_00f13e54(param_3 + 0xfe9);
  if (*(float *)((long)param_3 + 0x3ac) != -param_2) {
    *(float *)((long)param_3 + 0x3ac) = -param_2;
    FUN_0091ada4(param_3 + 0x6d);
  }
  *(uint *)((long)param_3 + 0x8404) = *(uint *)((long)param_3 + 0x8404) & 0xffffffbf;
  *(uint *)((long)param_3 + 0x14c) = *(uint *)((long)param_3 + 0x14c) & 0xffffffbf;
  *(uint *)((long)param_3 + 0x5b8c) = *(uint *)((long)param_3 + 0x5b8c) & 0xffffffbf;
  FUN_00a2f29c(param_3);
  FUN_00a2e5a0(param_3);
  FUN_00a2f4c4(param_3);
  FUN_00a2f578(param_3);
  if ((*(byte *)((long)param_3 + 0x8571) >> 1 & 1) == 0) {
    FUN_00967268(0,0,0,&local_5c);
  }
  else {
    local_5c = 0;
  }
  if ((long *)param_3[0x106e] != (long *)0x0) {
    fVar3 = (float)(**(code **)(*(long *)param_3[0x106e] + 0x48))();
    uVar4 = (ulong)(uint)((float)uVar4 + fVar3 + -2.0);
  }
  if ((long *)param_3[0x106f] != (long *)0x0) {
    fVar3 = (float)(**(code **)(*(long *)param_3[0x106f] + 0x48))();
    uVar4 = (ulong)(uint)((float)uVar4 + fVar3 + -2.0);
  }
  param_3 = param_3 + 0x1053;
  FUN_00f13f08(uVar4,(float)local_5c + 2.0,param_3);
  FUN_00f07b18(0,param_3,0,plVar1,2);
  FUN_00f07b18(0,param_3,4,plVar1,4);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2f29c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_98;
  float fStack_94;
  float local_90 [6];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar3 = param_1 + 0x368;
  fVar5 = (float)FUN_00f13e54(lVar3);
  fVar9 = fVar5 * 0.07 * 0.25;
  fVar5 = (float)FUN_00f13e54(lVar3);
  fVar10 = 3.0;
  fVar5 = (fVar5 + fVar9 * -4.0) / 3.0;
  FUN_00f13e54(lVar3);
  lVar2 = 0;
  fVar10 = fVar10 - (fVar9 + fVar9);
  do {
    *(undefined8 *)((long)local_90 + lVar2) = _DAT_03218ef8;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  local_98 = fVar5;
  fStack_94 = fVar10;
  fVar6 = (float)FUN_00f13e54(lVar3);
  fVar7 = fVar9 + fVar5 * 0.5;
  fVar6 = fVar7 - fVar6 * 0.5;
  FUN_00f13e54(lVar3);
  lVar3 = 0;
  uVar4 = 0xffffffff;
  do {
    if (lVar3 == 0) {
      local_90[1] = (fVar9 + fVar10 * 0.5) - fVar7;
      fVar8 = fVar6;
    }
    else {
      fVar8 = local_90[(uVar4 & 0xffffffff) * 2];
      *(float *)((long)local_90 + lVar3 + 4) = local_90[(uVar4 & 0xffffffff) * 2 + 1];
      fVar8 = fVar9 + fVar8 + fVar5;
    }
    *(float *)((long)local_90 + lVar3) = fVar8;
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 + 1;
  } while (lVar3 != 0x18);
  lVar3 = param_1 + 0x420;
  lVar2 = 3;
  do {
    FUN_00f13f18(lVar3,&local_98);
    FUN_00a24238(lVar3);
    lVar2 = lVar2 + -1;
    lVar3 = lVar3 + 0x1cf8;
  } while (lVar2 != 0);
  lVar3 = param_1 + 0x420;
  param_1 = param_1 + 0x5b90;
  lVar2 = 0;
  do {
    if ((*(float *)(lVar3 + 0x40) != *(float *)((long)local_90 + lVar2)) ||
       (*(float *)(lVar3 + 0x44) != *(float *)((long)local_90 + lVar2 + 4))) {
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)((long)local_90 + lVar2);
      FUN_0091ada4(lVar3);
    }
    FUN_00f13f08(local_98 + 2.0,0x427a0000,param_1);
    FUN_00f07940(0,0xc1100000,param_1,6,lVar3,4);
    lVar2 = lVar2 + 8;
    lVar3 = lVar3 + 0x1cf8;
    param_1 = param_1 + 0xbe8;
  } while (lVar2 != 0x18);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2f4c4(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_3 + 0x48))();
  fVar1 = param_2 * -1.6;
  if ((*(float *)(param_3 + 0x1078) != 0.0) ||
     (param_2 = *(float *)((long)param_3 + 0x83c4), param_2 != fVar1)) {
    *(float *)(param_3 + 0x1078) = 0.0;
    *(float *)((long)param_3 + 0x83c4) = fVar1;
    FUN_0091ada4(param_3 + 0x1070);
  }
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(uVar2,param_2 * 0.4,param_3 + 0x1070);
  return;
}




void FUN_00a2f578(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x8370);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x138))();
    lVar2 = *(long *)(param_1 + 0x8370);
    FUN_00f07b18(0x80000000,lVar2,1,param_1 + 0x278,3);
    FUN_00f07b18(0,lVar2,2,param_1 + 0x278,2);
  }
  plVar1 = *(long **)(param_1 + 0x8378);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x138))();
    lVar2 = *(long *)(param_1 + 0x8378);
    FUN_00f07b18(0,lVar2,3,param_1 + 0x278,1);
    FUN_00f07b18(0,lVar2,2,param_1 + 0x278,2);
    return;
  }
  return;
}




void FUN_00a2f654(long param_1,uint param_2)

{
  FUN_00a288a0(param_1 + (ulong)param_2 * 0xbe8 + 0x5b90);
  return;
}




void FUN_00a2f668(long param_1,uint param_2)

{
  FUN_00a288b0(param_1 + (ulong)param_2 * 0xbe8 + 0x5b90);
  return;
}




void FUN_00a2f67c(long param_1,uint param_2)

{
  long lVar1;
  
  *(ushort *)(param_1 + 0x8570) =
       *(ushort *)(param_1 + 0x8570) & 0xefff | (ushort)((param_2 & 1) << 0xc);
  lVar1 = *(long *)(param_1 + 0x8370);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) =
         *(uint *)(lVar1 + 0x84) & 0xfffffff8 | *(uint *)(lVar1 + 0x84) & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00a2f6b0(long param_1,uint param_2)

{
  long lVar1;
  
  *(ushort *)(param_1 + 0x8570) =
       *(ushort *)(param_1 + 0x8570) & 0xdfff | (ushort)((param_2 & 1) << 0xd);
  lVar1 = *(long *)(param_1 + 0x8378);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) =
         *(uint *)(lVar1 + 0x84) & 0xfffffff8 | *(uint *)(lVar1 + 0x84) & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00a2f6e4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  
  plVar1 = (long *)(param_1 + 0x8370);
  if (*plVar1 == 0) {
    pvVar4 = operator_new(0x780);
    FUN_00a300f8(pvVar4,param_2,param_3,0);
    FUN_00a30bfc(pvVar4,4);
    uVar2 = FUN_00e6a474("flask_button");
    uVar3 = FUN_0091ed5c("flask_button",uVar2,0x1234);
    *(uint *)((long)pvVar4 + 0x84) =
         *(uint *)((long)pvVar4 + 0x84) & 0x80000000 |
         *(uint *)((long)pvVar4 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
    *plVar1 = (long)pvVar4;
    FUN_00f023ec(param_1 + 0x1b0,pvVar4,1);
    uVar3 = *(uint *)(*plVar1 + 0x84);
    *(uint *)(*plVar1 + 0x84) =
         uVar3 & 0xfffffff8 | uVar3 & 3 | (*(ushort *)(param_1 + 0x8570) >> 0xc & 1) << 2;
  }
  return;
}




void FUN_00a2f7b0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  
  plVar1 = (long *)(param_1 + 0x8378);
  if (*plVar1 == 0) {
    pvVar4 = operator_new(0x780);
    FUN_00a300f8(pvVar4,param_2,param_3,1);
    FUN_00a30bfc(pvVar4,5);
    uVar2 = FUN_00e6a474("scout_cam_button");
    uVar3 = FUN_0091ed5c("scout_cam_button",uVar2,0x1234);
    *(uint *)((long)pvVar4 + 0x84) =
         *(uint *)((long)pvVar4 + 0x84) & 0x80000000 |
         *(uint *)((long)pvVar4 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
    *plVar1 = (long)pvVar4;
    FUN_00f023ec(param_1 + 0x1b0,pvVar4,1);
    uVar3 = *(uint *)(*plVar1 + 0x84);
    *(uint *)(*plVar1 + 0x84) =
         uVar3 & 0xfffffff8 | uVar3 & 3 | (*(ushort *)(param_1 + 0x8570) >> 0xd & 1) << 2;
  }
  return;
}




uint FUN_00a2f87c(long param_1)

{
  long lVar1;
  uint uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"hudAbilityTooltip");
  uVar2 = FUN_00b27edc(param_1 + 200,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2f8f4(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00a2f87c();
  plVar1 = (long *)(param_1 + (ulong)param_2 * 0x1cf8 + 0x420);
  if ((((uVar6 & 1) != 0) &&
      (cVar2 = *(char *)(param_1 + 0x8570), iVar5 = FUN_00a25768(plVar1), cVar2 == iVar5)) ||
     (plVar7 = *(long **)(param_1 + 0xb8), plVar7 == (long *)0x0)) goto LAB_00a2fab4;
  if (*(int *)(param_1 + 0xc0) != (int)plVar7[1]) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    goto LAB_00a2fab4;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))();
  if (lVar8 == 0) goto LAB_00a2fab4;
  FUN_00d59c40();
  uVar4 = FUN_00a25768(plVar1);
  *(undefined1 *)(param_1 + 0x8570) = uVar4;
  if ((uVar6 & 1) != 0) {
    FUN_008fa54c(local_70,"hudAbilityTooltip");
    FUN_00b27f98(param_1 + 200,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  uVar6 = FUN_0092ea9c();
  if (param_2 == 0) {
    if ((uVar6 & 1) != 0) {
      fVar9 = (float)(**(code **)(*plVar1 + 0x48))(plVar1);
      fVar10 = (float)0x3e570a3d;
      goto LAB_00a2fa2c;
    }
LAB_00a2fa38:
    fVar9 = 0.0;
    *(undefined4 *)(param_3 + 0x80) = 0;
  }
  else if (param_2 == 2) {
    if ((uVar6 & 1) == 0) goto LAB_00a2fa38;
    fVar9 = (float)(**(code **)(*plVar1 + 0x48))(plVar1);
    fVar10 = -0.21;
LAB_00a2fa2c:
    fVar9 = fVar9 * fVar10;
    *(float *)(param_3 + 0x80) = fVar9;
  }
  else {
    fVar9 = *(float *)(param_3 + 0x80);
  }
  fVar10 = *(float *)(param_1 + 0x4c);
  *(float *)(param_3 + 0x80) = *(float *)(param_1 + 0x48) * fVar9;
  *(float *)(param_3 + 0x84) = fVar10 * *(float *)(param_3 + 0x84);
  FUN_008fa54c(local_70,"hudAbilityTooltip");
  FUN_00b28094(param_1 + 200,local_70,param_3);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  param_1 = param_1 + 0x420;
  lVar8 = 3;
  do {
    FUN_00a24b9c(param_1,1);
    lVar8 = lVar8 + -1;
    param_1 = param_1 + 0x1cf8;
  } while (lVar8 != 0);
LAB_00a2fab4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a2fae4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00f004ac();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f004ac(param_1 + 0x278), (uVar1 & 1) == 0)) {
    uVar1 = 0;
    param_1 = param_1 + 0x420;
    do {
      uVar2 = FUN_00a24c74(param_1);
      if ((uVar2 & 1) != 0) goto LAB_00a2fb3c;
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x1cf8;
    } while (uVar1 < 3);
    uVar3 = 0;
  }
  else {
LAB_00a2fb3c:
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00a2fb50(void)

{
  return;
}




void FUN_00a2fb54(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19ee4(auStack_48,param_3);
  uVar3 = FUN_00a1a334(uVar2,auStack_48);
  if ((uVar3 & 1) != 0) {
    FUN_00a287e4(param_1 + (ulong)param_3 * 0xbe8 + 0x5b90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2fbe0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_50 [2];
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a25770(param_1 + (ulong)param_3 * 0x1cf8 + 0x420);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00a1f33c();
    FUN_00a19cdc(local_50,param_3);
    local_3c = 0;
    local_50[0] = &PTR_FUN_027c84b8;
    FUN_00a1a334(uVar3,local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2fc78(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_50 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19cdc(local_50,param_3);
  local_50[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2fcf4(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if ((-1 < param_3) && (lVar1 = FUN_00f04924(param_2), lVar1 != 0)) {
    FUN_00a2f8f4(param_1,param_3,lVar1);
    return;
  }
  return;
}




void FUN_00a2fd3c(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = FUN_00a2fae4();
  if ((uVar3 & 1) == 0) {
    FUN_00a2e7a4(param_1);
    return;
  }
  if ((-1 < (int)param_3) &&
     (cVar1 = *(char *)(param_1 + 0x8570),
     iVar2 = FUN_00a25768(param_1 + (long)(int)param_3 * 0x1cf8 + 0x420), cVar1 == iVar2)) {
    uVar3 = 0;
    param_1 = param_1 + 0x420;
    do {
      if ((param_3 != uVar3) && (uVar4 = FUN_00a24c74(param_1), (uVar4 & 1) != 0)) {
        FUN_00a25880(param_1);
        return;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 0x1cf8;
    } while (uVar3 < 3);
  }
  return;
}




void FUN_00a2fdf0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 local_74 [3];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009f1f70(0x1b);
  if (((uVar3 & 1) != 0) && (plVar4 = *(long **)(param_1 + 0xb8), plVar4 != (long *)0x0)) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        lVar6 = FUN_00d9eb64(lVar5);
        lVar5 = FUN_00d9ec14(lVar5);
        if (((lVar6 != 0) && (lVar5 != 0)) && (*(int *)(lVar5 + 0x28) != 0xfe)) {
          lVar7 = FUN_00d532e4(lVar6);
          uVar8 = *(undefined4 *)(lVar7 + 0x48);
          local_74[0] = uVar8;
          lVar7 = FUN_00d532e4(lVar6);
          local_74[1] = *(undefined4 *)(lVar7 + 0x4c);
          lVar6 = FUN_00d532e4(lVar6);
          local_74[2] = *(undefined4 *)(lVar6 + 0x50);
          lVar6 = 0;
          while( true ) {
            iVar2 = FUN_00d78854(lVar5,uVar8);
            if (iVar2 != 0) {
              do {
                FUN_00a287e4(param_1 + lVar6 * 0xbe8 + 0x5b90);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            lVar6 = lVar6 + 1;
            if (lVar6 == 3) break;
            uVar8 = local_74[lVar6];
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a2ff50(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(param_2);
  if ((uVar1 & 1) != 0) {
    FUN_00a2fdf0(param_1);
    return;
  }
  return;
}




void thunk_FUN_00a2fdf0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 auStack_74 [3];
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009f1f70(0x1b);
  if (((uVar3 & 1) != 0) && (plVar4 = *(long **)(param_1 + 0xb8), plVar4 != (long *)0x0)) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        lVar6 = FUN_00d9eb64(lVar5);
        lVar5 = FUN_00d9ec14(lVar5);
        if (((lVar6 != 0) && (lVar5 != 0)) && (*(int *)(lVar5 + 0x28) != 0xfe)) {
          lVar7 = FUN_00d532e4(lVar6);
          uVar8 = *(undefined4 *)(lVar7 + 0x48);
          auStack_74[0] = uVar8;
          lVar7 = FUN_00d532e4(lVar6);
          auStack_74[1] = *(undefined4 *)(lVar7 + 0x4c);
          lVar6 = FUN_00d532e4(lVar6);
          auStack_74[2] = *(undefined4 *)(lVar6 + 0x50);
          lVar6 = 0;
          while( true ) {
            iVar2 = FUN_00d78854(lVar5,uVar8);
            if (iVar2 != 0) {
              do {
                FUN_00a287e4(param_1 + lVar6 * 0xbe8 + 0x5b90);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            lVar6 = lVar6 + 1;
            if (lVar6 == 3) break;
            uVar8 = auStack_74[lVar6];
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a2ff8c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00a2ead8(param_1,0);
    return;
  }
  return;
}




void FUN_00a2ff9c(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0x22) && (*param_2 != 0x1b)) {
    return;
  }
  FUN_00a2fdf0();
  return;
}




void FUN_00a2ffb8(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  if (param_2 == 1) {
    if (*(long *)(param_1 + 0x8378) != 0) {
      return;
    }
    FUN_00a2f7b0(param_1,lVar1,param_3);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x8370) != 0) {
      return;
    }
    FUN_00a2f6e4(param_1,lVar1,param_3);
  }
  FUN_00a2f578(param_1);
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xf1ccade8) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xf1ccade8];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xf1ccade9)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}

