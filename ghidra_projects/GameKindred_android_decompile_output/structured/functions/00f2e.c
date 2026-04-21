// functions/00f2e — 58 functions
#include "libGameKindred.h"




void thunk_FUN_00f2e03c(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0199d2b8();
    pvVar1 = *(void **)(param_1 + 8);
    if (pvVar1 != (void *)0x0) {
      FUN_0199d254(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0199fc04();
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      FUN_0199fb94(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void thunk_FUN_00f2e03c(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0199d2b8();
    pvVar1 = *(void **)(param_1 + 8);
    if (pvVar1 != (void *)0x0) {
      FUN_0199d254(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0199fc04();
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      FUN_0199fb94(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_00f2e010(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02829058;
  return;
}




void FUN_00f2e028(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02829058;
  FUN_00f2e03c();
  return;
}




void FUN_00f2e03c(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0199d2b8();
    pvVar1 = *(void **)(param_1 + 8);
    if (pvVar1 != (void *)0x0) {
      FUN_0199d254(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0199fc04();
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      FUN_0199fb94(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_00f2e0a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02829058;
  FUN_00f2e03c();
  operator_delete(param_1);
  return;
}




void FUN_00f2e0dc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  FUN_0199fb64();
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_0199fc70(pvVar1,4);
  FUN_0199fccc(*(undefined8 *)(param_1 + 0x10),0,param_2,param_3,1,param_4,0);
  FUN_019a02fc(*(undefined8 *)(param_1 + 0x10),1,1,0);
  FUN_019a02cc(*(undefined8 *)(param_1 + 0x10),0,0,0);
  pvVar1 = operator_new(0x20);
  FUN_0199d248();
  *(void **)(param_1 + 8) = pvVar1;
  FUN_0199d318(pvVar1,param_2,param_3);
  FUN_0199d4b4(*(undefined8 *)(param_1 + 8),0,*(undefined8 *)(param_1 + 0x10),0,0);
  return;
}




void FUN_00f2e1b0(void)

{
  return;
}




void FUN_00f2e1b4(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = operator_new(0x68);
  FUN_00f2fcac();
  pvVar2 = operator_new(0x10);
  FUN_00f2e5c8(pvVar2,pvVar1);
  pvVar3 = operator_new(0x160);
  FUN_00f2e3e4(pvVar3,pvVar1,pvVar2);
  DAT_03212088 = pvVar3;
  return;
}




void FUN_00f2e218(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03212088;
  if (DAT_03212088 != (void *)0x0) {
    FUN_00f2e420(DAT_03212088);
    operator_delete(pvVar1);
  }
  DAT_03212088 = (void *)0x0;
  return;
}




void FUN_00f2e250(void)

{
  FUN_00f2e540(DAT_03212088);
  return;
}




void FUN_00f2e25c(undefined4 param_1)

{
  FUN_00f2e488(DAT_03212088,param_1);
  return;
}




void FUN_00f2e270(undefined8 param_1)

{
  FUN_00f2e490(DAT_03212088,param_1);
  return;
}




void FUN_00f2e284(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f2e504(DAT_03212088,param_1,param_2,param_3);
  return;
}




void FUN_00f2e2a0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f2e4f4(DAT_03212088,param_1,param_2,param_3);
  return;
}




void FUN_00f2e2bc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_00f2e514(DAT_03212088,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}




void FUN_00f2e2e8(undefined8 param_1)

{
  FUN_00f2e4e4(DAT_03212088,param_1);
  return;
}




undefined8 FUN_00f2e2fc(void)

{
  return 1;
}




void FUN_00f2e304(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f2e588(DAT_03212088,param_1,param_2,param_3);
  return;
}




void FUN_00f2e320(undefined8 param_1)

{
  FUN_00f2e528(DAT_03212088,param_1);
  return;
}




void FUN_00f2e334(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f2e530(DAT_03212088,param_1);
  FUN_00f2e538(DAT_03212088,uVar1);
  return;
}




void FUN_00f2e36c(undefined4 param_1)

{
  FUN_00f2e538(DAT_03212088,param_1);
  return;
}




void FUN_00f2e380(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_03212088;
  if (param_2 == 0) {
    param_2 = FUN_01997b28(param_1,0,0);
  }
  FUN_00f2e598(uVar1,param_1,param_2);
  return;
}




void FUN_00f2e3bc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00f2e5a8(DAT_03212088,param_1,param_2,param_3);
  return;
}




void FUN_00f2e3d8(void)

{
  FUN_00f2e5b8(DAT_03212088);
  return;
}




void FUN_00f2e3e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  FUN_00f3079c(param_1 + 3);
  pvVar1 = operator_new(0x78);
  FUN_00f2e9ec();
  *param_1 = pvVar1;
  return;
}




void FUN_00f2e420(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_00f2ea50(pvVar1);
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  param_1[2] = 0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00f2e488(undefined8 *param_1)

{
  FUN_00f2eb4c(*param_1);
  return;
}




void FUN_00f2e490(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1[1] + 0x30))();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],param_2,0xffff);
  }
  FUN_00f2ee28(*param_1,param_2);
  return;
}




void FUN_00f2e4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f2e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}




void FUN_00f2e4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f2e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}




void FUN_00f2e504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f2e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}




void FUN_00f2e514(long param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f2e524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}




void FUN_00f2e528(long param_1)

{
  FUN_00f307a8(param_1 + 0x18);
  return;
}




void FUN_00f2e530(long param_1)

{
  FUN_00f30860(param_1 + 0x18);
  return;
}




void FUN_00f2e538(long param_1)

{
  FUN_00f307e0(param_1 + 0x18);
  return;
}




void FUN_00f2e540(undefined8 param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00f2e584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(param_1);
  return;
}




void FUN_00f2e588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f2e594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}




void FUN_00f2e598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f2e5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}




void FUN_00f2e5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f2e5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  return;
}




void FUN_00f2e5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f2e5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  return;
}




void FUN_00f2e5c8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_02829078;
  param_1[1] = param_2;
  return;
}




void FUN_00f2e5dc(void)

{
  return;
}




void FUN_00f2e5e0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_298;
  float local_290;
  undefined8 local_288;
  float local_280;
  undefined8 local_278 [64];
  uint local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  ppuVar4 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    ppuVar9 = ppuVar4;
    iVar5 = strcmp("OmniLight.Position",*ppuVar9);
    ppuVar4 = ppuVar9 + 3;
  } while (iVar5 != 0);
  local_78 = 0;
  uVar2 = *(uint *)((long)ppuVar9 + 0xc);
  (**(code **)(**(long **)(param_1 + 8) + 0x28))
            (*(long **)(param_1 + 8),local_278,2,0xffff,param_2,0xffff,0,uVar2);
  if (local_78 == 0) {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    do {
      plVar10 = (long *)local_278[uVar8];
      uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,2);
      if ((plVar10 != (long *)0x0) && ((uVar7 & 1) != 0)) {
        fVar11 = *(float *)((long)plVar10 + 0x14);
        fVar12 = *(float *)(plVar10 + 3);
        fVar13 = *(float *)((long)plVar10 + 0x1c);
        local_280 = *(float *)(param_4 + 7) +
                    fVar11 * *(float *)(param_4 + 1) + fVar12 * *(float *)(param_4 + 3) +
                    fVar13 * *(float *)(param_4 + 5);
        local_288 = CONCAT44((float)((ulong)param_4[6] >> 0x20) +
                             (float)((ulong)*param_4 >> 0x20) * fVar11 +
                             (float)((ulong)param_4[2] >> 0x20) * fVar12 +
                             (float)((ulong)param_4[4] >> 0x20) * fVar13,
                             (float)param_4[6] +
                             (float)*param_4 * fVar11 + (float)param_4[2] * fVar12 +
                             (float)param_4[4] * fVar13);
        local_290 = *(float *)(plVar10 + 6);
        local_298 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar10 + 0x24) >> 0x20) *
                             local_290,(float)*(undefined8 *)((long)plVar10 + 0x24) * local_290);
        local_290 = local_290 * *(float *)((long)plVar10 + 0x2c);
        FUN_0199b18c(param_3,"OmniLight.Position",uVar8 & 0xffffffff,&local_288);
        FUN_0199b18c(param_3,"OmniLight.Color",uVar8 & 0xffffffff,&local_298);
        FUN_0199b18c(param_3,"OmniLight.Attenuation",uVar8 & 0xffffffff,
                     &UNK_01bf8100 + (ulong)*(uint *)((long)plVar10 + 0x34) * 0xc);
      }
      uVar7 = (ulong)local_78;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  if ((uint)uVar7 < uVar2) {
    do {
      FUN_0199b18c(param_3,"OmniLight.Position",uVar7,&DAT_01bf8124);
      FUN_0199b18c(param_3,"OmniLight.Color",uVar7,&DAT_01bf8130);
      FUN_0199b18c(param_3,"OmniLight.Attenuation",uVar7,&DAT_01bf813c);
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
    } while (uVar2 != uVar1);
  }
  uVar6 = FUN_0199ad04(param_3,"Probe.Samples");
  FUN_0199aecc(param_3,uVar6,0,&DAT_01bf8150);
  FUN_0199aecc(param_3,uVar6,1,&DAT_01bf8150);
  FUN_0199aecc(param_3,uVar6,2,&DAT_01bf8150);
  FUN_0199aecc(param_3,uVar6,3,&DAT_01bf8150);
  FUN_0199aecc(param_3,uVar6,4,&DAT_01bf8150);
  FUN_0199aecc(param_3,uVar6,5,&DAT_01bf8150);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f2e8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),param_2,auStack_98);
  uVar2 = FUN_0199ad04(param_3,"Probe.Samples");
  FUN_0199aecc(param_3,uVar2,0,auStack_98);
  FUN_0199aecc(param_3,uVar2,1,auStack_88);
  FUN_0199aecc(param_3,uVar2,2,auStack_78);
  FUN_0199aecc(param_3,uVar2,3,auStack_68);
  FUN_0199aecc(param_3,uVar2,4,auStack_58);
  FUN_0199aecc(param_3,uVar2,5,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2e9e4(void)

{
  return;
}




void FUN_00f2e9ec(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_00f2f1c4(param_1,1);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00f2f3a4(param_1 + 5,1);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_00f2f580(param_1 + 10,1);
  return;
}




void FUN_00f2ea50(long param_1)

{
  FUN_00f2ea80(param_1 + 0x50);
  FUN_00f2eac4(param_1 + 0x28);
  FUN_00f2eb08(param_1);
  return;
}




void FUN_00f2ea80(undefined8 *param_1)

{
  FUN_00f2f9b0(param_1,0);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00f2eac4(undefined8 *param_1)

{
  FUN_00f2f888(param_1,0);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00f2eb08(undefined8 *param_1)

{
  FUN_00f2f760(param_1,0);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




undefined8 FUN_00f2eb4c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 8) {
    uVar1 = FUN_00f2ed5c(param_1 + 0x50);
  }
  else if (param_2 == 4) {
    uVar1 = FUN_00f2ec70(param_1 + 0x28);
  }
  else {
    uVar1 = 0;
    if (param_2 == 2) {
      uVar1 = FUN_00f2eb9c();
    }
  }
  return uVar1;
}




void FUN_00f2eb9c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    FUN_00f2f1c4(param_1,1);
    iVar5 = *(int *)(param_1 + 0x10);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)(iVar5 - 1U) * 8);
  puVar4 = (undefined8 *)(lVar6 + (ulong)*(uint *)(lVar6 + 0xe00) * 0x38);
  uVar2 = *(undefined4 *)puVar4;
  iVar1 = *(int *)(lVar6 + 0xe04) + 1;
  *(int *)(lVar6 + 0xe04) = iVar1;
  *(undefined4 *)(lVar6 + 0xe00) = uVar2;
  if (iVar1 == 0x40) {
    *(uint *)(param_1 + 0x10) = iVar5 - 1U;
  }
  *(undefined1 *)((long)puVar4 + 0xc) = 0;
  *(undefined4 *)((long)puVar4 + 0xe) = 0;
  *(undefined2 *)((long)puVar4 + 0x12) = 0;
  *(undefined4 *)((long)puVar4 + 0x34) = 0;
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *puVar4 = &PTR_FUN_028290b0;
  *(undefined4 *)((long)puVar4 + 0x1c) = DAT_03218f38;
  uVar3 = DAT_03218f30;
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  *(undefined8 *)((long)puVar4 + 0x14) = uVar3;
  *(undefined4 *)((long)puVar4 + 0x2c) = DAT_03218f48;
  uVar3 = DAT_03218f40;
  *(undefined4 *)(puVar4 + 6) = 0x3f800000;
  *(undefined8 *)((long)puVar4 + 0x24) = uVar3;
  return;
}




void FUN_00f2ec70(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    FUN_00f2f3a4(param_1,1);
    iVar5 = *(int *)(param_1 + 0x10);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)(iVar5 - 1U) * 8);
  puVar4 = (undefined8 *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x1200) * 0x48);
  uVar2 = *(undefined4 *)puVar4;
  iVar1 = *(int *)(lVar6 + 0x1204) + 1;
  *(int *)(lVar6 + 0x1204) = iVar1;
  *(undefined4 *)(lVar6 + 0x1200) = uVar2;
  if (iVar1 == 0x40) {
    *(uint *)(param_1 + 0x10) = iVar5 - 1U;
  }
  *(undefined1 *)((long)puVar4 + 0xc) = 0;
  *(undefined4 *)((long)puVar4 + 0xe) = 0;
  *(undefined2 *)((long)puVar4 + 0x12) = 0;
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *puVar4 = &PTR_FUN_02829140;
  *(undefined4 *)((long)puVar4 + 0x1c) = DAT_03218f38;
  *(undefined8 *)((long)puVar4 + 0x14) = DAT_03218f30;
  *(undefined4 *)(puVar4 + 5) = DAT_03218f70;
  uVar3 = DAT_03218f68;
  *(undefined8 *)((long)puVar4 + 0x2c) = 0x417000003f800000;
  puVar4[4] = uVar3;
  *(undefined8 *)((long)puVar4 + 0x34) = DAT_03218f40;
  *(undefined4 *)((long)puVar4 + 0x3c) = DAT_03218f48;
  *(undefined4 *)(puVar4 + 8) = 0x3f800000;
  return;
}




void FUN_00f2ed5c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    FUN_00f2f580(param_1,1);
    iVar5 = *(int *)(param_1 + 0x10);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)(iVar5 - 1U) * 8);
  puVar4 = (undefined8 *)(lVar6 + (ulong)*(uint *)(lVar6 + 0xc00) * 0x30);
  uVar2 = *(undefined4 *)puVar4;
  iVar1 = *(int *)(lVar6 + 0xc04) + 1;
  *(int *)(lVar6 + 0xc04) = iVar1;
  *(undefined4 *)(lVar6 + 0xc00) = uVar2;
  if (iVar1 == 0x40) {
    *(uint *)(param_1 + 0x10) = iVar5 - 1U;
  }
  *(undefined1 *)((long)puVar4 + 0xc) = 0;
  *(undefined4 *)((long)puVar4 + 0xe) = 0;
  *(undefined2 *)((long)puVar4 + 0x12) = 0;
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *puVar4 = &PTR_FUN_028291b8;
  *(undefined4 *)((long)puVar4 + 0x1c) = DAT_03218f70;
  *(undefined8 *)((long)puVar4 + 0x14) = DAT_03218f68;
  *(undefined4 *)(puVar4 + 5) = DAT_03218f48;
  uVar3 = DAT_03218f40;
  *(undefined4 *)((long)puVar4 + 0x2c) = 0x3f800000;
  puVar4[4] = uVar3;
  return;
}




void FUN_00f2ee28(long param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (iVar1 == 8) {
    FUN_00f2f0c4(param_1 + 0x50,param_2);
    return;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      FUN_00f2eeac(param_1,param_2);
      return;
    }
    return;
  }
  FUN_00f2efb4(param_1 + 0x28,param_2);
  return;
}




void FUN_00f2eeac(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = (undefined8 *)0x0;
  (**(code **)*param_2)(param_2);
  local_40 = *(undefined8 **)(param_1 + 0x20);
  if (((local_40 == (undefined8 *)0x0) || (param_2 < local_40)) || (local_40 + 0x1c0 < param_2)) {
    uVar4 = 0;
    do {
      do {
        local_40 = *(undefined8 **)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (param_2 < local_40);
    } while (local_40 + 0x1c0 < param_2);
  }
  if (*(int *)((long)local_40 + 0xe04) == 0x40) {
    FUN_00f2f31c(param_1 + 0x10,&local_40);
  }
  *(undefined8 **)(param_1 + 0x20) = local_40;
  uVar3 = (ulong)((long)param_2 - (long)local_40) >> 3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  *(undefined4 *)(local_40 + (uVar3 / 7 & 0xffffffff) * 7) = *(undefined4 *)(local_40 + 0x1c0);
  *(int *)(local_40 + 0x1c0) = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  *(int *)((long)local_40 + 0xe04) = *(int *)((long)local_40 + 0xe04) + -1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2efb4(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (undefined8 *)0x0;
  (**(code **)*param_2)(param_2);
  local_40 = *(undefined8 **)(param_1 + 0x20);
  if (((local_40 == (undefined8 *)0x0) || (param_2 < local_40)) || (local_40 + 0x240 < param_2)) {
    uVar2 = 0;
    do {
      do {
        local_40 = *(undefined8 **)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8);
        uVar2 = uVar2 + 1;
      } while (param_2 < local_40);
    } while (local_40 + 0x240 < param_2);
  }
  if (*(int *)((long)local_40 + 0x1204) == 0x40) {
    FUN_00f2f4f8(param_1 + 0x10,&local_40);
  }
  *(undefined8 **)(param_1 + 0x20) = local_40;
  *(undefined4 *)(local_40 + ((ulong)((long)param_2 - (long)local_40) / 0x48 & 0xffffffff) * 9) =
       *(undefined4 *)(local_40 + 0x240);
  *(int *)(local_40 + 0x240) = (int)((ulong)((long)param_2 - (long)local_40) / 0x48);
  *(int *)((long)local_40 + 0x1204) = *(int *)((long)local_40 + 0x1204) + -1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

