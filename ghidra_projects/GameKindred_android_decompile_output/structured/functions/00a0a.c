// functions/00a0a — 23 functions
#include "libGameKindred.h"




void FUN_00a0a064(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x78;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x30);
      do {
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if ((pbVar2[-0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x20));
        }
        lVar1 = lVar1 + -0x78;
        pbVar2 = pbVar2 + 0x78;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void * FUN_00a0a110(uint *param_1,void *param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  if (param_3 != param_4) {
    pvVar9 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    uVar6 = param_1[1];
    uVar13 = (param_4 - param_3 >> 3) * -0x1111111111111111;
    uVar12 = (uint)uVar13;
    uVar16 = ((long)param_2 - (long)pvVar9 >> 3) * -0x1111111111111111;
    if (uVar6 - uVar3 < uVar12) {
      uVar3 = uVar3 + uVar12;
      if (uVar6 < 0x20) {
        uVar6 = uVar6 << 1;
      }
      else if (uVar6 == 0xffffffff) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uVar6 + 0x10) - (uVar6 & 0xf);
      }
      uVar12 = uVar3;
      if (uVar3 <= uVar6) {
        uVar12 = uVar6;
      }
      pvVar5 = operator_new__((ulong)uVar12 * 0x78);
      pvVar10 = pvVar5;
      for (; pvVar9 != param_2; pvVar9 = (void *)((long)pvVar9 + 0x78)) {
        FUN_008fcdb8(pvVar10,pvVar9);
        FUN_008fcdb8((long)pvVar10 + 0x18,(long)pvVar9 + 0x18);
        FUN_008fcdb8((long)pvVar10 + 0x30,(long)pvVar9 + 0x30);
        FUN_008fcdb8((long)pvVar10 + 0x48,(long)pvVar9 + 0x48);
        *(undefined4 *)((long)pvVar10 + 0x70) = *(undefined4 *)((long)pvVar9 + 0x70);
        uVar17 = *(undefined8 *)((long)pvVar9 + 0x60);
        *(undefined8 *)((long)pvVar10 + 0x68) = *(undefined8 *)((long)pvVar9 + 0x68);
        *(undefined8 *)((long)pvVar10 + 0x60) = uVar17;
        pvVar10 = (void *)((long)pvVar10 + 0x78);
      }
      pvVar10 = (void *)((long)pvVar5 + (uVar16 & 0xffffffff) * 0x78);
      pvVar9 = pvVar10;
      do {
        FUN_008fcdb8(pvVar9,param_3);
        FUN_008fcdb8((long)pvVar9 + 0x18,param_3 + 0x18);
        FUN_008fcdb8((long)pvVar9 + 0x30,param_3 + 0x30);
        FUN_008fcdb8((long)pvVar9 + 0x48,param_3 + 0x48);
        *(undefined4 *)((long)pvVar9 + 0x70) = *(undefined4 *)(param_3 + 0x70);
        puVar4 = (undefined8 *)(param_3 + 0x68);
        uVar17 = *(undefined8 *)(param_3 + 0x60);
        param_3 = param_3 + 0x78;
        *(undefined8 *)((long)pvVar9 + 0x68) = *puVar4;
        *(undefined8 *)((long)pvVar9 + 0x60) = uVar17;
        pvVar9 = (void *)((long)pvVar9 + 0x78);
      } while (param_3 != param_4);
      pvVar9 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x78);
      if (pvVar9 != param_2) {
        pvVar7 = (void *)((long)pvVar10 + (uVar13 & 0xffffffff) * 0x78);
        do {
          FUN_008fcdb8(pvVar7,param_2);
          FUN_008fcdb8((long)pvVar7 + 0x18,(long)param_2 + 0x18);
          FUN_008fcdb8((long)pvVar7 + 0x30,(long)param_2 + 0x30);
          FUN_008fcdb8((long)pvVar7 + 0x48,(long)param_2 + 0x48);
          *(undefined4 *)((long)pvVar7 + 0x70) = *(undefined4 *)((long)param_2 + 0x70);
          puVar4 = (undefined8 *)((long)param_2 + 0x68);
          uVar17 = *(undefined8 *)((long)param_2 + 0x60);
          param_2 = (void *)((long)param_2 + 0x78);
          *(undefined8 *)((long)pvVar7 + 0x68) = *puVar4;
          *(undefined8 *)((long)pvVar7 + 0x60) = uVar17;
          pvVar7 = (void *)((long)pvVar7 + 0x78);
        } while (param_2 != pvVar9);
      }
      FUN_00a0a064(param_1,1);
      *(void **)(param_1 + 2) = pvVar5;
      *param_1 = uVar3;
      param_1[1] = uVar12;
      param_2 = pvVar10;
    }
    else {
      pvVar9 = (void *)((long)pvVar9 + (ulong)uVar3 * 0x78);
      uVar15 = ((long)pvVar9 - (long)param_2 >> 3) * -0x1111111111111111;
      uVar13 = uVar13 & 0xffffffff;
      if (uVar12 < (uint)uVar15) {
        pvVar10 = (void *)((long)pvVar9 + uVar13 * -0x78);
        if (uVar13 != 0) {
          lVar14 = 0;
          do {
            lVar11 = (long)pvVar9 + lVar14;
            lVar2 = (long)pvVar10 + lVar14;
            FUN_008fcdb8(lVar11,lVar2);
            FUN_008fcdb8(lVar11 + 0x18,lVar2 + 0x18);
            FUN_008fcdb8(lVar11 + 0x30,lVar2 + 0x30);
            FUN_008fcdb8(lVar11 + 0x48,lVar2 + 0x48);
            lVar14 = lVar14 + 0x78;
            *(undefined4 *)(lVar11 + 0x70) = *(undefined4 *)(lVar2 + 0x70);
            uVar17 = *(undefined8 *)(lVar2 + 0x60);
            *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)(lVar2 + 0x68);
            *(undefined8 *)(lVar11 + 0x60) = uVar17;
          } while (uVar13 * 0x78 - lVar14 != 0);
          pvVar10 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x78 + uVar13 * -0x78);
        }
        lVar14 = (long)pvVar10 - (long)param_2;
        if (lVar14 != 0) {
          lVar11 = 0;
          do {
            lVar2 = lVar11 + lVar14 + uVar13 * 0x78;
            FUN_008fce60((long)param_2 + lVar2 + -0x78,(long)pvVar10 + lVar11 + -0x78);
            FUN_008fce60((long)param_2 + lVar2 + -0x60,(long)pvVar10 + lVar11 + -0x60);
            FUN_008fce60((long)param_2 + lVar2 + -0x48,(long)pvVar10 + lVar11 + -0x48);
            FUN_008fce60((long)param_2 + lVar2 + -0x30,(long)pvVar10 + lVar11 + -0x30);
            uVar17 = *(undefined8 *)((long)pvVar10 + lVar11 + -0x18);
            lVar8 = lVar11 + -0x78;
            *(undefined8 *)((long)param_2 + lVar2 + -0x10) =
                 *(undefined8 *)((long)pvVar10 + lVar11 + -0x10);
            *(undefined8 *)((long)param_2 + lVar2 + -0x18) = uVar17;
            *(undefined4 *)((long)param_2 + lVar2 + -8) =
                 *(undefined4 *)((long)pvVar10 + lVar11 + -8);
            lVar11 = lVar8;
          } while (-lVar8 != lVar14);
        }
        do {
          FUN_008fce60(param_2,param_3);
          FUN_008fce60((long)param_2 + 0x18,param_3 + 0x18);
          FUN_008fce60((long)param_2 + 0x30,param_3 + 0x30);
          FUN_008fce60((long)param_2 + 0x48,param_3 + 0x48);
          uVar17 = *(undefined8 *)(param_3 + 0x60);
          *(undefined8 *)((long)param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68);
          *(undefined8 *)((long)param_2 + 0x60) = uVar17;
          puVar1 = (undefined4 *)(param_3 + 0x70);
          param_3 = param_3 + 0x78;
          *(undefined4 *)((long)param_2 + 0x70) = *puVar1;
          param_2 = (void *)((long)param_2 + 0x78);
        } while (param_3 != param_4);
      }
      else {
        if (pvVar9 != param_2) {
          pvVar10 = param_2;
          do {
            pvVar5 = (void *)((long)pvVar10 + uVar13 * 0x78);
            FUN_008fcdb8(pvVar5,pvVar10);
            FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar10 + 0x18);
            FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar10 + 0x30);
            FUN_008fcdb8((long)pvVar5 + 0x48,(long)pvVar10 + 0x48);
            *(undefined4 *)((long)pvVar5 + 0x70) = *(undefined4 *)((long)pvVar10 + 0x70);
            puVar4 = (undefined8 *)((long)pvVar10 + 0x68);
            uVar17 = *(undefined8 *)((long)pvVar10 + 0x60);
            pvVar10 = (void *)((long)pvVar10 + 0x78);
            *(undefined8 *)((long)pvVar5 + 0x68) = *puVar4;
            *(undefined8 *)((long)pvVar5 + 0x60) = uVar17;
          } while (pvVar9 != pvVar10);
          pvVar9 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x78);
        }
        uVar15 = uVar15 & 0xffffffff;
        lVar11 = param_3 + uVar15 * 0x78;
        for (lVar14 = lVar11; lVar14 != param_4; lVar14 = lVar14 + 0x78) {
          FUN_008fcdb8(pvVar9,lVar14);
          FUN_008fcdb8((long)pvVar9 + 0x18,lVar14 + 0x18);
          FUN_008fcdb8((long)pvVar9 + 0x30,lVar14 + 0x30);
          FUN_008fcdb8((long)pvVar9 + 0x48,lVar14 + 0x48);
          *(undefined4 *)((long)pvVar9 + 0x70) = *(undefined4 *)(lVar14 + 0x70);
          uVar17 = *(undefined8 *)(lVar14 + 0x60);
          *(undefined8 *)((long)pvVar9 + 0x68) = *(undefined8 *)(lVar14 + 0x68);
          *(undefined8 *)((long)pvVar9 + 0x60) = uVar17;
          pvVar9 = (void *)((long)pvVar9 + 0x78);
        }
        if (uVar15 != 0) {
          do {
            FUN_008fce60(param_2,param_3);
            FUN_008fce60((long)param_2 + 0x18,param_3 + 0x18);
            FUN_008fce60((long)param_2 + 0x30,param_3 + 0x30);
            FUN_008fce60((long)param_2 + 0x48,param_3 + 0x48);
            uVar17 = *(undefined8 *)(param_3 + 0x60);
            *(undefined8 *)((long)param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68);
            *(undefined8 *)((long)param_2 + 0x60) = uVar17;
            puVar1 = (undefined4 *)(param_3 + 0x70);
            param_3 = param_3 + 0x78;
            *(undefined4 *)((long)param_2 + 0x70) = *puVar1;
            param_2 = (void *)((long)param_2 + 0x78);
          } while (param_3 != lVar11);
        }
      }
      param_2 = (void *)(*(long *)(param_1 + 2) + (uVar16 & 0xffffffff) * 0x78);
      *param_1 = *param_1 + uVar12;
    }
  }
  return param_2;
}




long FUN_00a0a624(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = FUN_0091ed5c(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)uVar1 * (ulong)uVar3 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar3) break;
        iVar4 = (int)uVar5;
        uVar2 = iVar4 - 1;
        uVar5 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
    }
    for (; ((int)uVar5 < (int)uVar1 && (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) < uVar3));
        uVar5 = (ulong)((int)uVar5 + 1)) {
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 0x78;
}




void FUN_00a0a6b4(long param_1)

{
  FUN_00a0a6bc(param_1 + 0x18);
  return;
}




void FUN_00a0a6bc(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




undefined4 FUN_00a0a728(void)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  return *(undefined4 *)(lVar1 + 0x5454);
}




void FUN_00a0a744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7ea0;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_00a0a784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7ea0;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a0a7cc(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_2 + 0x28;
  param_1 = param_1 + 0x28;
  local_40 = *(undefined4 *)(param_2 + 0x30);
  FUN_00d0a798(param_1,&local_48);
  FUN_00d0a95c(param_1,0);
  FUN_00d0a9fc(param_1,param_3,param_4);
  lVar3 = FUN_00d0a9c0(param_1);
  uVar2 = FUN_00e6a474("__PLAYER_LOCK__");
  uVar2 = FUN_0091ed5c("__PLAYER_LOCK__",uVar2,0x12345678);
  (**(code **)(*(long *)(lVar3 + 0x1688) + 8))(lVar3 + 0x1688,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0a8a4(long param_1)

{
  long lVar1;
  
  DAT_02c091a0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c091a0 + 1;
  lVar1 = param_1 + (ulong)DAT_02c091a0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a0ac10;
  *(code **)(lVar1 + 0xb8) = FUN_00a0ac44;
  *(uint *)(lVar1 + 0xa4) = DAT_02c091a0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x1e88;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_00a0a948,0);
  FUN_019867cc(param_1,0x377a062d,FUN_00a0a968,0);
  return;
}




void FUN_00a0a948(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_02c091a0) {
    param_1 = 0;
  }
  FUN_00d0a7f8(param_1 + 0x28);
  return;
}




void FUN_00a0aa24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d0a9c0(param_1 + 0x28);
  FUN_00d25620(uVar1,param_2);
  return;
}




void FUN_00a0aa4c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_00d0a9c0(param_1 + 0x28);
  uVar1 = FUN_00e6a474("__HUD__");
  uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
  (**(code **)(*(long *)(lVar2 + 0x1688) + 8))(lVar2 + 0x1688,uVar1);
  lVar2 = FUN_00d0a9c0(param_1 + 0x28);
  uVar1 = FUN_00e6a474("__HUD__");
  uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
  puVar3 = (undefined8 *)(**(code **)(*(long *)(lVar2 + 0x1688) + 0x10))(lVar2 + 0x1688,uVar1);
  *puVar3 = param_2;
  return;
}




void FUN_00a0ab0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d0a9c0(param_1 + 0x28);
  FUN_00d256d0(uVar1,0x3f2);
  return;
}




void FUN_00a0ab28(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d0a9c0(param_1 + 0x28);
  FUN_00d256d0(uVar1,param_2);
  return;
}




void FUN_00a0ab50(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00d5bc54(param_2);
  thunk_FUN_00d9ff34(local_40,"5v5_Blackclaw_Uncaptured");
  if (local_40[0] == iVar2) {
    uVar3 = FUN_00d0a9c0(param_1 + 0x28);
    FUN_00d256d0(uVar3,0x18);
  }
  iVar2 = FUN_00d5bc54(param_2);
  thunk_FUN_00d9ff34(local_40,"5v5_Ghostwing");
  if (local_40[0] == iVar2) {
    uVar3 = FUN_00d0a9c0(param_1 + 0x28);
    FUN_00d256d0(uVar3,0x19);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00a0ac10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c8238;
  FUN_00d0a748(param_1 + 5);
  return param_1;
}




void FUN_00a0ac44(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a0ac4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00a0ac50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c8238;
  FUN_00d0a788(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a0ac84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c8238;
  FUN_00d0a788(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a0acc0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 5;
  *(undefined4 *)(param_1 + 0x10) = 5;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_027c8268;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  return;
}




void FUN_00a0ad04(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar2 = FUN_01985d44(param_1,DAT_0312f178);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  iVar1 = FUN_00e70218(&DAT_0320ffc0);
  if ((iVar1 == 2) || (iVar1 = FUN_00e70218(&DAT_0320ffc0), iVar1 == 3)) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = 2;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = 1;
  }
  FUN_009c8918(uVar2,uVar3,0);
  return;
}




void FUN_00a0ad74(long param_1)

{
  long lVar1;
  
  DAT_03130a98 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03130a98 + 1;
  lVar1 = param_1 + (ulong)DAT_03130a98 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a0b81c;
  *(code **)(lVar1 + 0xb8) = FUN_00a0b860;
  *(uint *)(lVar1 + 0xa4) = DAT_03130a98;
  *(undefined4 *)(lVar1 + 0xa8) = 0x98;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,thunk_FUN_00a0b1ec,0);
  FUN_019867cc(param_1,0x8b950a0d,FUN_00a0ae70,0);
  FUN_019867cc(param_1,0x5ae807ed,FUN_00a0af84,0);
  FUN_019867cc(param_1,0x80a40995,FUN_00a0b098,0);
  FUN_019867cc(param_1,0x76660925,FUN_00a0b1a0,0);
  return;
}

