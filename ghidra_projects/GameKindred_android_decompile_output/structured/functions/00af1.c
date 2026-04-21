// functions/00af1 — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00af1fb4(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1aed) = 1;
  if (*(int *)(param_1 + 0x1a28) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1a30) + uVar1 * 8) + 0x20))();
      FUN_00c37e64();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1a28));
  }
  FUN_00f01980(param_1 + 0x88);
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void thunk_FUN_00af1db4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00af1d4c();
  if ((uVar1 & 1) != 0) {
    FUN_00af1e10(param_1);
    return;
  }
  uVar1 = FUN_00969254();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00969248(), 0 < *(int *)(lVar2 + 0x38))) {
    return;
  }
  FUN_00af1ecc(param_1);
  return;
}




void FUN_00af1708(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_5 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*param_5 + 0x20))(param_5);
    uVar4 = FUN_00f02540();
    if ((uVar4 & 1) != 0) {
      FUN_00f01a4c(plVar3,1);
    }
    FUN_00f023ec(param_3 + 0x1960,plVar3,1);
    uVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
    if ((uVar4 & 1) != 0) {
      FUN_00f01980(plVar3);
      lVar2 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdc08(puVar6);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      fVar7 = (float)FUN_00f13e54(param_3 + 0x1960);
      local_50 = CONCAT44(param_2 * (float)((ulong)DAT_03218f08 >> 0x20),fVar7 * (float)DAT_03218f08
                         );
      FUN_00efdc50(puVar6,&local_50);
      FUN_00efcac4(0x3e4ccccd,puVar6);
      FUN_00f022a0(plVar3,puVar6);
    }
    *(uint *)((long)plVar3 + 0x5b4) = *(uint *)((long)plVar3 + 0x5b4) | 4;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af189c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  ushort *puVar5;
  float fVar6;
  float fVar7;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f01980(param_5);
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
    FUN_00efdc08(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  fVar6 = (float)FUN_00f13e54(param_3 + 0x1960);
  fVar7 = param_2 * 0.5;
  local_60 = (float)FUN_00af1a2c(param_3,*(undefined4 *)((long)param_5 + 0x624));
  local_60 = fVar6 * 0.5 + local_60;
  fStack_5c = fVar7 + param_2;
  FUN_00efdc50(puVar5,&local_60);
  FUN_00efcac4(0x3e4ccccd,puVar5);
  FUN_00f022a0(param_5,puVar5);
  (**(code **)(*param_5 + 0x188))(0x3dcccccd,0x3e800000,param_5,1);
  *(uint *)((long)param_5 + 0x5b4) = *(uint *)((long)param_5 + 0x5b4) & 0xfffffffb;
  uVar3 = FUN_00af1d4c(param_3);
  if ((uVar3 & 1) != 0) {
    *(uint *)(param_3 + 0x10c) = *(uint *)(param_3 + 0x10c) & 0xfffffffb;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af1a2c(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x1a28);
  fVar11 = DAT_03218ef8;
  fVar10 = _DAT_03218efc;
  if (uVar1 < 2) goto LAB_00af1d14;
  if (uVar1 < 5) {
    uVar4 = FUN_0092ea9c();
    fVar11 = (6.2831855 / (float)uVar1) * (float)(int)param_2 + -1.5707964;
    fVar7 = cosf(fVar11);
    fVar8 = sinf(fVar11);
    bVar3 = (uVar4 & 1) == 0;
    fVar11 = 600.0;
    if (bVar3) {
      fVar11 = 640.0;
    }
    fVar10 = -50.0;
    fVar9 = 400.0;
    if (bVar3) {
      fVar9 = 500.0;
    }
    fVar9 = fVar9 * fVar8;
    fVar11 = fVar11 * fVar7;
  }
  else {
    if (uVar1 != 5) {
      uVar5 = (uint)((float)uVar1 / 5.0);
      fVar9 = (float)uVar5;
      uVar6 = (uint)((float)uVar1 / fVar9);
      fVar10 = *(float *)(&DAT_01bb0a38 + (ulong)(uVar6 < 5) * 4);
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = param_2 / uVar6;
      }
      uVar4 = FUN_0092ea9c();
      if ((uVar4 & 1) == 0) {
        fVar10 = fVar10 * 1.25;
      }
      fVar8 = fVar10 * 470.0;
      fVar12 = fVar10 * 630.0;
      fVar10 = fVar10 * 90.0;
      FUN_00f00298(auStack_70,(ulong)auStack_70 | 4);
      fVar7 = (float)(uint)(int)((float)(int)param_2 / (float)uVar6);
      fVar11 = (float)(param_2 - uVar1 * uVar6);
      fVar11 = ((fVar8 * fVar11 + fVar10 * fVar11) -
               (fVar8 * (float)uVar6 + fVar10 * (float)(uVar6 - 1)) * 0.5) + fVar8 * 0.5;
      fVar10 = ((fVar12 * fVar7 + fVar10 * fVar7) -
               (fVar12 * fVar9 + fVar10 * (float)(uVar5 - 1)) * 0.5) + fVar12 * 0.5 + -80.0;
      goto LAB_00af1d14;
    }
    uVar4 = FUN_0092ea9c();
    fVar11 = (float)(int)param_2 * 1.2566371 + -4.712389;
    fVar9 = cosf(fVar11);
    fVar7 = sinf(fVar11);
    fVar10 = 490.0;
    fVar11 = 600.0;
    if ((uVar4 & 1) == 0) {
      fVar10 = 650.0;
      fVar11 = 680.0;
    }
    fVar11 = fVar11 * fVar9;
    fVar9 = fVar10 * fVar7 + -50.0;
    if ((param_2 != 4) && (param_2 != 1)) {
      fVar10 = fVar9 + -12.0;
      if ((param_2 | 1) != 3) {
        fVar10 = fVar9;
      }
      goto LAB_00af1d14;
    }
    fVar10 = 24.0;
  }
  fVar10 = fVar9 + fVar10;
LAB_00af1d14:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar11,fVar10);
}




undefined8 FUN_00af1d4c(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x1a28);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1a30) + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x20))();
        if (*(char *)(lVar2 + 0x629) == '\0') {
          return 0;
        }
        uVar3 = *(uint *)(param_1 + 0x1a28);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 1;
}




void thunk_FUN_00af1db4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00af1d4c();
  if ((uVar1 & 1) != 0) {
    FUN_00af1e10(param_1);
    return;
  }
  uVar1 = FUN_00969254();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00969248(), 0 < *(int *)(lVar2 + 0x38))) {
    return;
  }
  FUN_00af1ecc(param_1);
  return;
}




void FUN_00af1db4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00af1d4c();
  if ((uVar1 & 1) != 0) {
    FUN_00af1e10(param_1);
    return;
  }
  uVar1 = FUN_00969254();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00969248(), 0 < *(int *)(lVar2 + 0x38))) {
    return;
  }
  FUN_00af1ecc(param_1);
  return;
}




void FUN_00af1e10(long param_1)

{
  byte *pbVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00af2f04(param_1,param_1 + 0x1ac8);
  pbVar1 = (byte *)(param_1 + 0x1ad0);
  FUN_008fcdb8(local_50,pbVar1);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x1ae0) = 0;
    *(undefined8 *)(param_1 + 0x1ad8) = 0;
  }
  if ((*(int *)(param_1 + 0x1a18) == 0) ||
     (**(int **)(param_1 + 0x1a20) != *(int *)(param_1 + 0x1ae8))) {
    FUN_00a998c0(local_50);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af1ecc(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  
  FUN_00f01980();
  if (*(int *)(param_3 + 0x1a28) != 0) {
    uVar2 = 0;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_3 + 0x1a30) + uVar2 * 8) + 0x20))();
      FUN_00f01980();
      *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 0x10;
      if ((*(float *)(lVar1 + 0x48) != 1.0) || (*(float *)(lVar1 + 0x4c) != 1.0)) {
        *(undefined8 *)(lVar1 + 0x48) = uVar4;
        FUN_0091ada4(lVar1);
      }
      fVar3 = (float)FUN_00af1a2c(param_3,uVar2 & 0xffffffff);
      fVar3 = *(float *)(param_3 + 0x1ac0) + fVar3;
      param_2 = param_2 + *(float *)(param_3 + 0x1ac4);
      if ((*(float *)(lVar1 + 0x40) != fVar3) || (*(float *)(lVar1 + 0x44) != param_2)) {
        *(float *)(lVar1 + 0x40) = fVar3;
        *(float *)(lVar1 + 0x44) = param_2;
        FUN_0091ada4(lVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_3 + 0x1a28));
  }
  FUN_00af1fb4(param_3);
  return;
}




void thunk_FUN_00af1fb4(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1aed) = 1;
  if (*(int *)(param_1 + 0x1a28) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1a30) + uVar1 * 8) + 0x20))();
      FUN_00c37e64();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1a28));
  }
  FUN_00f01980(param_1 + 0x88);
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_00af1fb4(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1aed) = 1;
  if (*(int *)(param_1 + 0x1a28) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x1a30) + uVar1 * 8) + 0x20))();
      FUN_00c37e64();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1a28));
  }
  FUN_00f01980(param_1 + 0x88);
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}

