// functions/1000c — 436 functions
#include "GameKindred.h"




void FUN_1000c0118(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar1 = FUN_1000c617c();
  uVar3 = 0;
  switch(iVar1) {
  case 0:
    uVar3 = 2;
  default:
    goto switchD_1000c0160_caseD_1;
  case 3:
    break;
  case 4:
    FUN_1004e3004(param_1 + 0x10);
    break;
  case 5:
    iVar2 = FUN_1000c69bc(*(undefined8 *)(param_1 + 0x18));
    if (iVar2 == 0) {
      iVar2 = FUN_1000c69dc(*(undefined8 *)(param_1 + 0x18));
      if (iVar2 != 0) {
        uVar3 = 1;
        (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),1);
        goto switchD_1000c0160_caseD_1;
      }
      iVar2 = FUN_1000c69f4(*(undefined8 *)(param_1 + 0x18));
      if (iVar2 == 0) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),uVar3);
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),0);
    }
  }
  uVar3 = 1;
switchD_1000c0160_caseD_1:
  (**(code **)(**(long **)(param_1 + 8) + 0x160))(*(long **)(param_1 + 8),uVar3);
  if (iVar1 != 5) {
    (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000c0254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x178))(*(long **)(param_1 + 8),iVar1 == 4);
  return;
}




void FUN_1000c0258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *local_40;
  int local_38;
  
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_1000c6148(*(undefined8 *)(param_1 + 0x18));
  FUN_1000c60dc(&local_40,*(undefined8 *)(param_1 + 0x18));
  uVar2 = 0;
  if (local_40 != (long *)0x0) {
    if (local_38 == (int)local_40[1]) {
      uVar2 = (**(code **)(*local_40 + 0x10))();
    }
    else {
      uVar2 = 0;
      local_40 = (long *)0x0;
      local_38 = DAT_101dc0b88;
    }
  }
  uVar2 = FUN_1004654a0(uVar2);
  (**(code **)(*plVar3 + 0x138))(plVar3,uVar1,uVar2);
  return;
}




void FUN_1000c02fc(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_1000c60d4();
    if (iVar1 == 0) {
      iVar1 = FUN_1000c60f0(*(undefined8 *)(param_1 + 0x18));
      iVar2 = FUN_1001018d8(param_2);
      if (iVar1 == iVar2) goto LAB_1000c036c;
    }
    iVar1 = FUN_1000c60d4(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 1) {
      iVar1 = FUN_1000c6100(*(undefined8 *)(param_1 + 0x18));
      iVar2 = FUN_1001018e0(param_2);
      if (iVar1 == iVar2) {
LAB_1000c036c:
        FUN_1000d08b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
        return;
      }
    }
  }
  return;
}




void FUN_1000c0394(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x18) != 0 && param_2 != 0) {
    iVar1 = FUN_1000c60d4();
    iVar2 = FUN_1001018d0(param_2);
    if (iVar1 != iVar2) {
      return;
    }
    iVar1 = FUN_1000c60d4(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      iVar1 = FUN_1000c60f0(*(undefined8 *)(param_1 + 0x18));
      iVar2 = FUN_1001018d8(param_2);
      if (iVar1 == iVar2) goto LAB_1000c0428;
    }
    iVar1 = FUN_1000c60d4(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 1) {
      iVar1 = FUN_1000c6100(*(undefined8 *)(param_1 + 0x18));
      iVar2 = FUN_1001018e0(param_2);
      if (iVar1 == iVar2) {
LAB_1000c0428:
        FUN_1000bf9ac(param_1);
        return;
      }
    }
  }
  return;
}




void FUN_1000c044c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void thunk_FUN_1000c0118(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar1 = FUN_1000c617c();
  uVar3 = 0;
  switch(iVar1) {
  case 0:
    uVar3 = 2;
  default:
    goto switchD_1000c0160_caseD_1;
  case 3:
    break;
  case 4:
    FUN_1004e3004(param_1 + 0x10);
    break;
  case 5:
    iVar2 = FUN_1000c69bc(*(undefined8 *)(param_1 + 0x18));
    if (iVar2 == 0) {
      iVar2 = FUN_1000c69dc(*(undefined8 *)(param_1 + 0x18));
      if (iVar2 != 0) {
        uVar3 = 1;
        (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),1);
        goto switchD_1000c0160_caseD_1;
      }
      iVar2 = FUN_1000c69f4(*(undefined8 *)(param_1 + 0x18));
      if (iVar2 == 0) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),uVar3);
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),0);
    }
  }
  uVar3 = 1;
switchD_1000c0160_caseD_1:
  (**(code **)(**(long **)(param_1 + 8) + 0x160))(*(long **)(param_1 + 8),uVar3);
  if (iVar1 != 5) {
    (**(code **)(**(long **)(param_1 + 8) + 0x1a8))(*(long **)(param_1 + 8),3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000c0254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x178))(*(long **)(param_1 + 8),iVar1 == 4);
  return;
}




void thunk_FUN_1000c0258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plStack_40;
  int iStack_38;
  
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_1000c6148(*(undefined8 *)(param_1 + 0x18));
  FUN_1000c60dc(&plStack_40,*(undefined8 *)(param_1 + 0x18));
  uVar2 = 0;
  if (plStack_40 != (long *)0x0) {
    if (iStack_38 == (int)plStack_40[1]) {
      uVar2 = (**(code **)(*plStack_40 + 0x10))();
    }
    else {
      uVar2 = 0;
      plStack_40 = (long *)0x0;
      iStack_38 = DAT_101dc0b88;
    }
  }
  uVar2 = FUN_1004654a0(uVar2);
  (**(code **)(*plVar3 + 0x138))(plVar3,uVar1,uVar2);
  return;
}




void FUN_1000c04c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000c04d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x1d8))();
  return;
}




undefined8 * FUN_1000c04d8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101454560;
  operator_new(0x5f8);
  lVar1 = thunk_FUN_1000cf5b0();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1000c0548_101454540;
  param_1[1] = lVar1;
  thunk_FUN_1000be114(param_1 + 2);
  *(uint *)(param_1[1] + 0x84) = *(uint *)(param_1[1] + 0x84) & 0xfffffff7;
  FUN_1000cf82c(param_1[1],param_1[3]);
  return param_1;
}




undefined8 * thunk_FUN_1000c04d8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101454560;
  operator_new(0x5f8);
  lVar1 = thunk_FUN_1000cf5b0();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1000c0548_101454540;
  param_1[1] = lVar1;
  thunk_FUN_1000be114(param_1 + 2);
  *(uint *)(param_1[1] + 0x84) = *(uint *)(param_1[1] + 0x84) & 0xfffffff7;
  FUN_1000cf82c(param_1[1],param_1[3]);
  return param_1;
}




undefined8 * FUN_1000c0548(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000c0548_101454540;
  thunk_FUN_1000be20c(param_1 + 2);
  *param_1 = &PTR_FUN_101454560;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1000c0548(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000c0548_101454540;
  thunk_FUN_1000be20c(param_1 + 2);
  *param_1 = &PTR_FUN_101454560;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c05a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c0548();
  operator_delete(pvVar1);
  return;
}




void FUN_1000c05b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000be178(param_1 + 0x10);
  FUN_1000c995c(*(undefined8 *)(param_1 + 0x18),1);
  FUN_1000cf9c8(*(undefined8 *)(param_1 + 8),param_3);
  return;
}




void FUN_1000c05f0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(*(long *)(param_1 + 8) + 0x84) =
       *(uint *)(*(long *)(param_1 + 8) + 0x84) & 0xfffffff7 | uVar1;
  if (param_2 != 0) {
    FUN_1000c96c4();
    return;
  }
  FUN_1000c97fc(*(undefined8 *)(param_1 + 0x18),1);
  return;
}




undefined8 * FUN_1000c0624(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454560;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c0668(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454560;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1000c06a8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_1014545c0;
  operator_new(0x518);
  lVar1 = thunk_FUN_1000cff50();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454580;
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  return param_1;
}




undefined8 * FUN_1000c06f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454580;
  if (param_1[3] != 0) {
    FUN_10005ecd8();
  }
  *param_1 = &PTR____cxa_pure_virtual_1014545c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1000c06f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454580;
  if (param_1[3] != 0) {
    FUN_10005ecd8();
  }
  *param_1 = &PTR____cxa_pure_virtual_1014545c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c0758(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c06f8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000c076c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000c077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}




void FUN_1000c0784(float param_1,long param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  
  fVar3 = (float)*param_5 - (float)*param_4;
  fVar4 = (float)((ulong)*param_5 >> 0x20) - (float)((ulong)*param_4 >> 0x20);
  local_18 = CONCAT44(fVar4,fVar3);
  fVar2 = 0.0;
  if ((param_3 != 0) && (fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4), 1.0 < fVar5)) {
    local_18 = CONCAT44(fVar4 / fVar5,fVar3 / fVar5);
    fVar2 = fVar5 / param_1;
  }
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(fVar2,plVar1,param_3,&local_18);
  }
  return;
}




void FUN_1000c07f8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000c0808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    return;
  }
  return;
}




void FUN_1000c0810(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000c0820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    return;
  }
  return;
}




void FUN_1000c0828(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  FUN_1000d081c(*(undefined8 *)(param_1 + 8));
  return;
}




undefined1 FUN_1000c0834(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}




void FUN_1000c083c(long param_1)

{
  FUN_1000d0360(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c0844(long param_1)

{
  FUN_1000d0368(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c084c(long param_1)

{
  FUN_1000d0874(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c0854(long param_1)

{
  FUN_1000d087c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c085c(long param_1)

{
  FUN_1000d0884(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c0864(long param_1)

{
  FUN_1000d088c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c086c(long param_1)

{
  FUN_1000d0894(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c0874(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(long *)(param_1 + 0x18) = param_2;
    FUN_10005ecb4(param_2,param_1);
    return;
  }
  return;
}




void FUN_1000c0898(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




undefined8 * FUN_1000c08a0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101454628;
  operator_new(0x668);
  lVar1 = thunk_FUN_1000d10a0();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454600;
  param_1[1] = lVar1;
  return param_1;
}




undefined8 * FUN_1000c08e8(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454628;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c092c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454628;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000c096c(long param_1)

{
  FUN_1000d13ac(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c0974(long param_1)

{
  FUN_1000d145c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c097c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xf0abc88a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xf0abc88a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xf0abc88b)) && ((int)plVar4[5] != 0)) {
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




undefined8 * FUN_1000c0a40(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  
  *param_1 = &PTR____cxa_pure_virtual_101454770;
  operator_new(0x18b98);
  lVar3 = thunk_FUN_1000d7688();
  lVar6 = 0;
  *(undefined8 **)(lVar3 + 200) = param_1;
  param_1[3] = &PTR_FUN_101454700;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_101454650;
  param_1[1] = lVar3;
  param_1[2] = &PTR_FUN_1014546e0;
  do {
    thunk_FUN_1000c34a4((long)param_1 + lVar6 + 0xa8);
    lVar6 = lVar6 + 0x158;
  } while (lVar6 != 0x1580);
  *(undefined2 *)(param_1 + 0x2c5) = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c6] = 0;
  FUN_1004f1580(param_1 + 0x2c8);
  param_1[0x2c8] = &PTR_FUN_101454740;
  param_1[0x2cd] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d8] = 0xffffffffffffffff;
  param_1[0x2d7] = 0xffffffffffffffff;
  param_1[0x2da] = 0xffffffffffffffff;
  param_1[0x2d9] = 0xffffffffffffffff;
  param_1[0x2db] = 0xffffffff;
  param_1[0x2dc] = 0;
  *(byte *)(param_1 + 0x2dd) = *(byte *)(param_1 + 0x2dd) & 0xe0 | 0x10;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  iVar2 = FUN_1004eef10();
  if (iVar2 != 0) {
    lVar6 = FUN_1004f0338();
    std::string::operator=((string *)(param_1 + 0x2d4),(string *)(lVar6 + 0xa0));
  }
  lVar6 = FUN_1003467f8();
  if (*(char *)(lVar6 + 0x80) == '\0') {
    FUN_1003467f8();
    iVar2 = FUN_10034ce78();
    bVar1 = *(byte *)(param_1 + 0x2dd);
    if (iVar2 == 0) {
      uVar4 = 0;
      bVar5 = 0;
      goto LAB_1000c0bc0;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x2dd);
  }
  bVar5 = 0x10;
  uVar4 = 1;
LAB_1000c0bc0:
  *(byte *)(param_1 + 0x2dd) = bVar5 | bVar1 & 0xef;
  FUN_1000daa6c(param_1[1],uVar4);
  lVar6 = FUN_1003467f8();
  *(float *)(param_1 + 0x2dc) = (float)*(int *)(lVar6 + 0x84);
  FUN_1001116f8(param_1 + 3);
  return param_1;
}




undefined8 * thunk_FUN_1000c0a40(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  
  *param_1 = &PTR____cxa_pure_virtual_101454770;
  operator_new(0x18b98);
  lVar3 = thunk_FUN_1000d7688();
  lVar6 = 0;
  *(undefined8 **)(lVar3 + 200) = param_1;
  param_1[3] = &PTR_FUN_101454700;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_101454650;
  param_1[1] = lVar3;
  param_1[2] = &PTR_FUN_1014546e0;
  do {
    thunk_FUN_1000c34a4((long)param_1 + lVar6 + 0xa8);
    lVar6 = lVar6 + 0x158;
  } while (lVar6 != 0x1580);
  *(undefined2 *)(param_1 + 0x2c5) = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c6] = 0;
  FUN_1004f1580(param_1 + 0x2c8);
  param_1[0x2c8] = &PTR_FUN_101454740;
  param_1[0x2cd] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d8] = 0xffffffffffffffff;
  param_1[0x2d7] = 0xffffffffffffffff;
  param_1[0x2da] = 0xffffffffffffffff;
  param_1[0x2d9] = 0xffffffffffffffff;
  param_1[0x2db] = 0xffffffff;
  param_1[0x2dc] = 0;
  *(byte *)(param_1 + 0x2dd) = *(byte *)(param_1 + 0x2dd) & 0xe0 | 0x10;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  iVar2 = FUN_1004eef10();
  if (iVar2 != 0) {
    lVar6 = FUN_1004f0338();
    std::string::operator=((string *)(param_1 + 0x2d4),(string *)(lVar6 + 0xa0));
  }
  lVar6 = FUN_1003467f8();
  if (*(char *)(lVar6 + 0x80) == '\0') {
    FUN_1003467f8();
    iVar2 = FUN_10034ce78();
    bVar1 = *(byte *)(param_1 + 0x2dd);
    if (iVar2 == 0) {
      uVar4 = 0;
      bVar5 = 0;
      goto LAB_1000c0bc0;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x2dd);
  }
  bVar5 = 0x10;
  uVar4 = 1;
LAB_1000c0bc0:
  *(byte *)(param_1 + 0x2dd) = bVar5 | bVar1 & 0xef;
  FUN_1000daa6c(param_1[1],uVar4);
  lVar6 = FUN_1003467f8();
  *(float *)(param_1 + 0x2dc) = (float)*(int *)(lVar6 + 0x84);
  FUN_1001116f8(param_1 + 3);
  return param_1;
}




undefined8 * FUN_1000c0c08(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_FUN_101454650;
  param_1[2] = &PTR_FUN_1014546e0;
  param_1[3] = &PTR_FUN_101454700;
  pcStack_38 = thunk_FUN_1000c0f40;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  FUN_100111728(param_1 + 3);
  if (*(char *)((long)param_1 + 0x16b7) < '\0') {
    operator_delete((void *)param_1[0x2d4]);
  }
  param_1[0x2c8] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x169f) < '\0') {
    operator_delete((void *)param_1[0x2d1]);
  }
  if (*(char *)((long)param_1 + 0x167f) < '\0') {
    operator_delete((void *)param_1[0x2cd]);
  }
  FUN_1004f15a8(param_1 + 0x2c8);
  FUN_1000c2a7c(param_1 + 0x2c6,1);
  lVar1 = 0;
  do {
    thunk_FUN_1000c364c((long)param_1 + lVar1 + 0x14d0);
    lVar1 = lVar1 + -0x158;
  } while (lVar1 != -0x1580);
  *param_1 = &PTR____cxa_pure_virtual_101454770;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c0d38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




undefined8 * thunk_FUN_1000c0c08(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR_FUN_101454650;
  param_1[2] = &PTR_FUN_1014546e0;
  param_1[3] = &PTR_FUN_101454700;
  pcStack_38 = thunk_FUN_1000c0f40;
  puStack_40 = param_1;
  FUN_100643a8c(&puStack_40);
  FUN_100111728(param_1 + 3);
  if (*(char *)((long)param_1 + 0x16b7) < '\0') {
    operator_delete((void *)param_1[0x2d4]);
  }
  param_1[0x2c8] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x169f) < '\0') {
    operator_delete((void *)param_1[0x2d1]);
  }
  if (*(char *)((long)param_1 + 0x167f) < '\0') {
    operator_delete((void *)param_1[0x2cd]);
  }
  FUN_1004f15a8(param_1 + 0x2c8);
  FUN_1000c2a7c(param_1 + 0x2c6,1);
  lVar1 = 0;
  do {
    thunk_FUN_1000c364c((long)param_1 + lVar1 + 0x14d0);
    lVar1 = lVar1 + -0x158;
  } while (lVar1 != -0x1580);
  *param_1 = &PTR____cxa_pure_virtual_101454770;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c0d88(long param_1)

{
  FUN_1000c0c08(param_1 + -0x18);
  return;
}




void FUN_1000c0d90(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c0c08();
  operator_delete(pvVar1);
  return;
}




void FUN_1000c0da4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c0c08(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_1000c0dbc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_10052b638();
  FUN_1000dadcc(uVar4,uVar2);
  FUN_1000d7f6c(*(undefined8 *)(param_1 + 8));
  FUN_1003467f8();
  iVar1 = FUN_10034cf58();
  if (iVar1 == 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cec0();
    if (iVar1 == 0) {
      FUN_1003467f8();
      iVar1 = FUN_10034cde8();
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 8);
        pcVar3 = "HUD_EXIT_PRACTICE_MODE";
LAB_1000c0e48:
        uVar4 = FUN_1004e0150(pcVar3,0);
        FUN_1000dac54(uVar2,uVar4);
        return;
      }
      FUN_1003467f8();
      iVar1 = FUN_10034cde0();
      uVar2 = *(undefined8 *)(param_1 + 8);
      if (iVar1 != 0) {
        pcVar3 = "HUD_EXIT_TUTORIAL_MODE";
        goto LAB_1000c0e48;
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar4 = 1;
  }
  FUN_1000dab94(uVar2,uVar4);
  return;
}




void FUN_1000c0e78(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long local_40;
  code *pcStack_38;
  
  local_40 = param_2;
  if ((int)param_3 == 0) {
    pcStack_38 = thunk_FUN_1000c0f40;
    FUN_100643a8c(&local_40);
  }
  else {
    if (param_4 == 0) {
      FUN_1000dad50(*(undefined8 *)(param_2 + 8));
    }
    else {
      FUN_1000dad38();
    }
    pcStack_38 = thunk_FUN_1000c0f40;
    FUN_100643618(0xbf800000,&local_40,0,1);
    FUN_1000c0f40(0,param_2);
  }
  uVar1 = FUN_1003166d0();
  FUN_100316fb4(uVar1,0xd0ab9e9c,param_3);
  (**(code **)(**(long **)(param_2 + 8) + 0x138))(param_1,*(long **)(param_2 + 8),param_3,4,1);
  return;
}




void FUN_1000c0f40(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  FUN_1000c144c();
  if (*(byte *)(param_2 + 0x1628) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0xa8;
    do {
      FUN_1000c42dc(param_1,lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x158;
    } while (uVar2 < *(byte *)(param_2 + 0x1628));
  }
  fVar3 = *(float *)(param_2 + 0x16e4);
  if (0.0 < fVar3) {
    fVar3 = fVar3 - (float)param_1;
    *(float *)(param_2 + 0x16e4) = fVar3;
  }
  if (((*(byte *)(param_2 + 0x16e8) >> 3 & 1) != 0) && (fVar3 <= 0.0)) {
    FUN_1000320fc();
    FUN_100033548();
    return;
  }
  return;
}




void FUN_1000c0fe8(long param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  
  bVar2 = 6;
  if (param_2 == 0) {
    bVar2 = 2;
  }
  *(byte *)(param_1 + 0x16e8) = bVar2 | param_3 & 1 | *(byte *)(param_1 + 0x16e8) & 0xf8;
  FUN_1000da1d4(*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_1003467f8();
  uVar1 = FUN_10034cde0();
  FUN_1000dafd0(uVar3,uVar1 ^ 1);
  param_1 = param_1 + 0xa8;
  lVar4 = 0x10;
  do {
    FUN_1000c4d2c(param_1,1);
    FUN_1000c4300(param_1);
    FUN_1000c42dc(0,param_1);
    param_1 = param_1 + 0x158;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}




void FUN_1000c1080(long param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  uint auStack_b0 [4];
  byte *local_a0;
  uint local_94;
  ulong local_90;
  long local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003a8de8(auStack_80);
  FUN_1003c3608(auStack_80,1);
  FUN_1003467f8();
  bVar4 = FUN_10034cfec();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  pbVar1 = (byte *)(param_1 + 0x1628);
  *pbVar1 = bVar4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_88 = param_1;
  uVar6 = FUN_1003a6ce4(auStack_80,(undefined8 *)(param_1 + 0x28),0x10,0);
  if (uVar6 != *(uint *)(param_1 + 0x16dc)) {
    if (uVar6 != 0) {
      uVar11 = (ulong)uVar6;
      plVar18 = (long *)(local_88 + 0x28);
      do {
        iVar7 = FUN_10034ea2c(*(undefined4 *)(*plVar18 + 0x260));
        if (iVar7 != 0) {
          uVar5 = FUN_100345bbc(*plVar18);
          *(undefined1 *)(param_1 + 0x1629) = uVar5;
          break;
        }
        plVar18 = plVar18 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    FUN_1003467f8();
    local_94 = FUN_10034cfa0();
    uVar14 = *(undefined8 *)(local_88 + 8);
    if ((local_94 & 1) == 0) {
      cVar2 = *(char *)(param_1 + 0x1629);
      uVar8 = FUN_10034cb58();
      uVar8 = uVar8 | cVar2 == '\x01';
    }
    else {
      uVar8 = 1;
    }
    FUN_1000da4e4(uVar14,uVar8);
    bVar4 = *pbVar1;
    lVar13 = -((ulong)((uint)bVar4 * 4 + 0xf) & 0x7f0);
    puVar15 = (uint *)((long)auStack_b0 + lVar13);
    local_a0 = pbVar1;
    if (bVar4 != 0) {
      _bzero(puVar15,(ulong)bVar4 << 2);
    }
    lVar16 = local_88;
    local_90 = (ulong)(bVar4 >> 1);
    auStack_b0[3] = uVar6;
    if (uVar6 != 0) {
      uVar11 = (ulong)uVar6;
      puVar12 = (undefined8 *)(local_88 + 0x28);
      do {
        uVar9 = FUN_100345bbc(*puVar12);
        uVar14 = FUN_1000bdae4();
        lVar17 = (uVar9 & 0xffffffff) - 1;
        iVar7 = 0;
        if ((uint)uVar9 != 1) {
          iVar7 = (int)local_90;
        }
        if (local_94 == 0) {
          bVar3 = (uint)local_a0[1] != (uint)uVar9;
        }
        else {
          bVar3 = (int)uVar14 == 1;
        }
        uVar6 = puVar15[lVar17];
        FUN_1000c36cc(lVar16 + (ulong)(uVar6 + iVar7) * 0x158 + 0xa8,*puVar12,uVar14,uVar9,bVar3);
        plVar18 = (long *)(lVar16 + (ulong)(uVar6 + iVar7) * 0x158 + 0xb0);
        if ((int)uVar14 == 0) {
          FUN_1000d93f4(*(undefined8 *)(lVar16 + 8),*plVar18,uVar6);
        }
        else {
          FUN_1000d965c();
        }
        lVar10 = *plVar18;
        *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) | 4;
        puVar15[lVar17] = uVar6 + 1;
        puVar12 = puVar12 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar14 = FUN_1000bdae4(1);
    pbVar1 = local_a0;
    uVar6 = *puVar15;
    if (uVar6 < (uint)local_90) {
      lVar16 = local_88 + (ulong)uVar6 * 0x158 + 0xa8;
      iVar7 = (uint)local_90 - uVar6;
      do {
        FUN_1000c36cc(lVar16,0,uVar14,1,pbVar1[1] != 1);
        *(uint *)(*(long *)(lVar16 + 8) + 0x84) =
             *(uint *)(*(long *)(lVar16 + 8) + 0x84) & 0xfffffffb;
        lVar16 = lVar16 + 0x158;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uVar14 = FUN_1000bdae4(2);
    uVar6 = *(int *)((long)auStack_b0 + lVar13 + 4) + (int)local_90;
    if (uVar6 < *pbVar1) {
      uVar11 = (ulong)uVar6;
      lVar13 = local_88 + (ulong)uVar6 * 0x158 + 0xa8;
      do {
        FUN_1000c36cc(lVar13,0,uVar14,2,pbVar1[1] != 2);
        *(uint *)(*(long *)(lVar13 + 8) + 0x84) =
             *(uint *)(*(long *)(lVar13 + 8) + 0x84) & 0xfffffffb;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0x158;
      } while (uVar11 < *pbVar1);
    }
    FUN_1001117cc(0);
    *(uint *)(local_88 + 0x16dc) = auStack_b0[3];
    lVar13 = local_88 + 0xa8;
    lVar16 = 0x10;
    do {
      FUN_1000c3bf4(lVar13);
      iVar7 = FUN_10034ea2c();
      if ((iVar7 != 0) && (iVar7 = FUN_100642d08(*(undefined8 *)(lVar13 + 8)), iVar7 != 0)) {
        plVar18 = *(long **)(*(long *)(lVar13 + 8) + 0x20);
        FUN_1006423ec(*(long *)(lVar13 + 8),0);
        (**(code **)(*plVar18 + 0x78))(plVar18,*(undefined8 *)(lVar13 + 8),1);
        break;
      }
      lVar13 = lVar13 + 0x158;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    (**(code **)(**(long **)(local_88 + 8) + 0x150))();
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000c144c(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined ***pppuVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_d18 [24];
  undefined **local_d00 [200];
  long local_6c0 [200];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003467f8();
  uVar4 = FUN_10034cfc0();
  local_6c0[0] = 0;
  FUN_1010a1958(local_6c0,1,DAT_10184de50,0);
  pbVar2 = (byte *)(param_1 + 0x1628);
  if (uVar4 != 0) {
    plVar15 = (long *)(local_6c0[0] + 0x28);
    uVar19 = 0;
    do {
      uVar1 = uVar19 + 1;
      iVar5 = FUN_1000bdae4(uVar1 & 0xff);
      FUN_1003467f8();
      uVar8 = FUN_10034cf58();
      if ((uVar8 & 1) == 0) {
        if (*pbVar2 == 0) {
          uVar18 = 0;
        }
        else {
          uVar8 = 0;
          uVar18 = 0;
          do {
            if ((*(long *)(param_1 + 0x28 + uVar8 * 8) != 0) &&
               (iVar6 = FUN_100345bbc(), iVar6 - 1U == uVar19)) {
              lVar13 = *(long *)(*(long *)(param_1 + 0x28 + uVar8 * 8) + 0x40);
              fVar20 = *(float *)(lVar13 + 0xdc) +
                       *(float *)(lVar13 + 400) * (*(float *)(lVar13 + 0x2f8) + 1.0);
              NEON_fminnm(fVar20 + fVar20 * *(float *)(lVar13 + 0x244),DAT_101dc60d4);
              uVar18 = (uint)(DAT_101dc6014 + (float)uVar18);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *pbVar2);
        }
        if (iVar5 != 0) {
          if (iVar5 != 1) goto LAB_1000c1600;
          goto LAB_1000c15b8;
        }
LAB_1000c15e4:
        if (*(uint *)(param_1 + 0x16c0) != uVar18) {
          FUN_1000da67c(*(undefined8 *)(param_1 + 8),uVar18);
          *(uint *)(param_1 + 0x16c0) = uVar18;
        }
      }
      else {
        uVar12 = 1;
        if (uVar19 != 0) {
          uVar12 = 2;
        }
        uVar9 = FUN_10046ccac(uVar12);
        puVar10 = (uint *)(**(code **)(*plVar15 + 0x18))(plVar15,uVar9);
        uVar18 = *puVar10;
        if (iVar5 == 1) {
LAB_1000c15b8:
          if (*(uint *)(param_1 + 0x16c4) != uVar18) {
            FUN_1000da6c8(*(undefined8 *)(param_1 + 8),uVar18);
            *(uint *)(param_1 + 0x16c4) = uVar18;
          }
        }
        else if (iVar5 == 0) goto LAB_1000c15e4;
      }
LAB_1000c1600:
      uVar19 = uVar1;
    } while (uVar1 != uVar4);
  }
  local_d00[0] = (undefined **)0x0;
  local_d00[1] = (undefined **)0x0;
  local_d00[2] = (undefined **)0x0;
  FUN_10045c684(local_d00);
  local_d00[0] = &PTR_FUN_10149d248;
  uVar4 = FUN_1003a6ce4(local_d00,local_6c0,200,0);
  if (uVar4 == 0) {
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    plVar15 = local_6c0;
    uVar8 = (ulong)uVar4;
    do {
      uVar14 = (ulong)*(ushort *)(*plVar15 + 0x88) & 0x1f;
      if (((int)uVar14 != 0x1f) && (*(ushort *)(*plVar15 + uVar14 * 0x38 + 0x90) - 3 < 2)) {
        FUN_100345bbc();
        iVar7 = FUN_1000bdae4();
        if (iVar7 == 0) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
      plVar15 = plVar15 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (*(int *)(param_1 + 0x16cc) != iVar5) {
    FUN_1000da960(*(undefined8 *)(param_1 + 8),iVar5);
    *(int *)(param_1 + 0x16cc) = iVar5;
  }
  if (*(int *)(param_1 + 0x16d0) != iVar6) {
    FUN_1000da9b0(*(undefined8 *)(param_1 + 8),iVar6);
    *(int *)(param_1 + 0x16d0) = iVar6;
  }
  FUN_1003a8de8(auStack_d18);
  uVar4 = FUN_1003a6ce4(auStack_d18,local_d00,200,0);
  if (uVar4 == 0) {
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  else {
    uVar8 = (ulong)uVar4;
    fVar21 = 0.0;
    fVar20 = 0.0;
    pppuVar16 = local_d00;
    do {
      FUN_100345bbc(*pppuVar16);
      iVar5 = FUN_1000bdae4();
      fVar3 = *(float *)((*pppuVar16)[8] + 0x324) + fVar21;
      if (iVar5 != 0) {
        fVar3 = fVar21;
        fVar20 = *(float *)((*pppuVar16)[8] + 0x324) + fVar20;
      }
      fVar21 = fVar3;
      uVar8 = uVar8 - 1;
      pppuVar16 = pppuVar16 + 1;
    } while (uVar8 != 0);
  }
  if (fVar21 != (float)*(int *)(param_1 + 0x16d4)) {
    FUN_1000da718(fVar21,*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x16d4) = (int)fVar21;
  }
  if (fVar20 != (float)*(int *)(param_1 + 0x16d8)) {
    FUN_1000da83c(fVar20,*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x16d8) = (int)fVar20;
  }
  FUN_1000320fc();
  uVar9 = FUN_100032244();
  iVar5 = (int)(float)uVar9 % 0x3c;
  if (*(int *)(param_1 + 0x16c8) != iVar5) {
    FUN_1000daa00(uVar9,*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x16c8) = iVar5;
  }
  FUN_1003467f8();
  uVar8 = FUN_10034ce78();
  if ((uVar8 & 1) == 0) {
    fVar20 = *(float *)(param_1 + 0x16e0);
  }
  else {
    *(undefined4 *)(param_1 + 0x16e0) = 0;
    fVar20 = 0.0;
  }
  iVar5 = (int)(fVar20 - (float)uVar9);
  if (*(int *)(param_1 + 0x16bc) != iVar5) {
    *(int *)(param_1 + 0x16bc) = iVar5;
    FUN_1000daa90(*(undefined8 *)(param_1 + 8));
  }
  if (*pbVar2 != 0) {
    uVar8 = 0;
    param_1 = param_1 + 0xa8;
    do {
      uVar9 = FUN_1000c3bf4(param_1);
      iVar5 = FUN_1003458ec();
      uVar17 = 0;
      uVar11 = 0;
      if ((iVar5 != 0) && ((int)uVar9 != -1)) {
        uVar17 = FUN_10034e19c(uVar9,extraout_x1,0);
        uVar11 = FUN_10034e3d8(uVar9);
      }
      FUN_1000c4e6c(param_1,uVar17,uVar11);
      uVar8 = uVar8 + 1;
      param_1 = param_1 + 0x158;
    } while (uVar8 < *pbVar2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined1 FUN_1000c18f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1628);
}




void FUN_1000c18fc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(byte *)(param_1 + 0x1628) != 0) {
    uVar2 = 0;
    lVar1 = param_1 + 0xa8;
    do {
      if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) != 0) {
        return;
      }
      FUN_1000c4300(lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x158;
    } while (uVar2 < *(byte *)(param_1 + 0x1628));
  }
  return;
}




byte FUN_1000c1958(long param_1)

{
  return *(byte *)(param_1 + 0x16e8) >> 1 & 1;
}




void FUN_1000c1968(float param_1,long param_2)

{
  if ((param_1 <= *(float *)(param_2 + 0x16e0)) && (param_1 != 0.0)) {
    return;
  }
  *(float *)(param_2 + 0x16e0) = param_1;
  return;
}




void FUN_1000c1988(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (param_2 != 0) {
    FUN_1004e313c(auStack_30);
    FUN_1004e38ac(auStack_30,"%d ");
    uVar1 = FUN_1004e0150("HUD_SCOREBOARD_ALLIES_AFK_EXPLAIN",0);
    FUN_1004e372c(auStack_30,uVar1);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_1000c19f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = FUN_10034ed9c();
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_10034ee54(uVar5);
      uVar4 = FUN_10034e42c();
      iVar1 = FUN_1004e3654(uVar4,param_2);
      if (iVar1 != 0) {
        FUN_10034e374(uVar3,param_3 - 1U < 5);
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_10034ed9c();
    } while (uVar5 < uVar2);
  }
  return;
}




void FUN_1000c1a68(long param_1)

{
  if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) == 0) {
    FUN_1000c1ab0();
    return;
  }
  FUN_1000c1a7c();
  return;
}




void FUN_1000c1a7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1003467f8();
  FUN_1001099d8();
  FUN_1000c2064(param_1);
  uVar1 = FUN_1001148bc();
  FUN_100115ecc(uVar1,1);
  return;
}




void FUN_1000c1ab0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [32];
  
  iVar1 = FUN_100147980();
  if (iVar1 != 0) {
    uVar2 = FUN_1001148bc();
    FUN_100115ecc(uVar2,0);
    FUN_1000320fc();
    FUN_100033548();
    return;
  }
  FUN_1003467f8();
  uVar3 = FUN_10034cde8();
  if ((uVar3 & 1) == 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cde0();
    if (iVar1 == 0) {
      iVar1 = FUN_10034cb58();
      if (iVar1 == 0) {
        fVar5 = *(float *)(param_1 + 0x16e0);
        FUN_1000320fc();
        fVar4 = (float)FUN_100032244();
        if (0.0 < fVar5 - (float)(int)fVar4) {
          return;
        }
        uVar2 = FUN_100644a94("EVENT_SELECT_SURRENDER");
        FUN_100644aec(auStack_50,uVar2,0);
        FUN_100644b24(auStack_50,1);
        FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_50,1);
        FUN_100530200(auStack_80,DAT_101d91884,0,0);
        FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_80,1);
        return;
      }
      FUN_100011cc4(auStack_80);
      goto LAB_1000c1b28;
    }
  }
  FUN_1003467f8();
  iVar1 = FUN_10034cde0();
  if (iVar1 != 0) {
    FUN_10010682c();
  }
  FUN_100011c2c(auStack_80,1);
LAB_1000c1b28:
  FUN_100345498(auStack_80);
  return;
}




void FUN_1000c1bdc(long param_1)

{
  if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) == 0) {
    FUN_1000c1c3c();
    return;
  }
  FUN_1000c1bf0();
  return;
}




void FUN_1000c1bf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1001148bc();
  FUN_100115ecc(uVar1,0);
  if (*(int *)(param_1 + 0x16b8) - 1U < 2) {
    FUN_1000daec0(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_1000c2064(param_1);
  return;
}




void FUN_1000c1c3c(long param_1)

{
  undefined1 auStack_50 [48];
  
  FUN_100530200(auStack_50,DAT_101d91884,0,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_50,1);
  return;
}




void FUN_1000c1c8c(long param_1)

{
  if ((*(byte *)(param_1 + 0x16e8) >> 1 & 1) == 0) {
    FUN_1000c1c3c();
    return;
  }
  return;
}




void FUN_1000c1ca0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = 0x28;
  while ((*(long *)(param_1 + lVar5) == 0 ||
         (*(int *)(*(long *)(param_1 + lVar5) + 0x260) != (int)param_2))) {
    lVar5 = lVar5 + 8;
    if (lVar5 == 0xa8) {
      return;
    }
  }
  FUN_10034ee90();
  uVar3 = FUN_100345d90();
  uVar4 = FUN_10034e42c(param_2);
  iVar1 = FUN_100345bbc(*(undefined8 *)(param_1 + lVar5));
  iVar2 = FUN_100345bbc(uVar3);
  FUN_1000c1d3c(param_1,uVar4,0,iVar1 == iVar2);
  return;
}




void FUN_1000c1d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 extraout_x0;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  if (*(int *)(param_1 + 0x1630) != 0) {
    uVar2 = 0;
    lVar3 = 0x10;
    do {
      uVar1 = FUN_1004e3654(*(long *)(param_1 + 0x1638) + lVar3 + -0x10,param_2);
      if ((int)uVar1 != 0) {
        *(int *)(*(long *)(param_1 + 0x1638) + lVar3) = (int)param_3;
        FUN_1000c19f4(uVar1,param_2,param_3);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x1630));
  }
  thunk_FUN_1004e439c(auStack_68,param_2);
  local_58 = (int)param_3;
  local_54 = param_4;
  FUN_1000c2390((uint *)(param_1 + 0x1630),auStack_68);
  uVar1 = 0;
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    uVar1 = extraout_x0;
  }
  FUN_1000c19f4(uVar1,param_2,param_3);
  return;
}




void thunk_FUN_1000c1e30(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x1630) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = FUN_1004e3654(*(long *)(param_1 + 0x1638) + lVar3,param_2);
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x1638) + lVar3;
        uVar2 = FUN_1000c2be0((uint *)(param_1 + 0x1630),lVar3,lVar3 + 0x18);
        FUN_1000c19f4(uVar2,param_2,6);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x1630));
  }
  return;
}




void FUN_1000c1e30(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x1630) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = FUN_1004e3654(*(long *)(param_1 + 0x1638) + lVar3,param_2);
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x1638) + lVar3;
        uVar2 = FUN_1000c2be0((uint *)(param_1 + 0x1630),lVar3,lVar3 + 0x18);
        FUN_1000c19f4(uVar2,param_2,6);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x1630));
  }
  return;
}




void thunk_FUN_1000c1d3c(void)

{
  FUN_1000c1d3c();
  return;
}




void FUN_1000c1ed4(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x16b8) = (int)param_2;
  FUN_100118da4(param_2);
  return;
}




void FUN_1000c1ee0(long param_1,int param_2)

{
  size_t sVar1;
  byte bVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 ****ppppuVar10;
  void *local_60 [2];
  char local_49;
  undefined8 ***local_48;
  size_t local_40;
  byte local_31;
  
  FUN_10003330c(&local_48,&DAT_101d91198);
  if (param_2 == 2) {
    pcVar6 = "trolling/rude behavior";
  }
  else if (param_2 == 1) {
    pcVar6 = "team frustration";
  }
  else if (param_2 == 0) {
    pcVar6 = "technical issue";
  }
  else {
    pcVar6 = "other";
  }
  FUN_10001549c(local_60,pcVar6);
  std::string::operator=((string *)&local_48,(string *)local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  pppuVar3 = local_48;
  uVar7 = (ulong)local_31;
  if (-1 < (char)local_31) {
    local_40 = uVar7;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_40 == sVar1) {
    ppppuVar10 = (undefined8 ****)local_48;
    if (-1 < (char)local_31) {
      ppppuVar10 = &local_48;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)local_31 < '\0') {
      if ((local_40 == 0) ||
         (iVar4 = _memcmp(ppppuVar10,pbVar9,local_40), ppppuVar10 = (undefined8 ****)pppuVar3,
         iVar4 == 0)) goto LAB_1000c2034;
    }
    else {
      if (local_40 == 0) goto LAB_1000c2034;
      ppppuVar10 = &local_48;
      if ((uint)*pbVar9 == ((uint)local_48 & 0xff)) {
        pbVar8 = (byte *)((ulong)&local_48 | 1);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_1000c2034;
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar2 == *pbVar9);
        goto LAB_1000c2004;
      }
    }
  }
  else {
LAB_1000c2004:
    ppppuVar10 = (undefined8 ****)pppuVar3;
    if (-1 < (char)local_31) {
      ppppuVar10 = &local_48;
    }
  }
  uVar5 = FUN_1003467f8();
  FUN_1001075d0(ppppuVar10,uVar5);
LAB_1000c2034:
  FUN_1000dafc4(*(undefined8 *)(param_1 + 8));
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void thunk_FUN_1000c2064(void)

{
  FUN_1000c2064();
  return;
}




void FUN_1000c2064(long param_1)

{
  ulong uVar1;
  
  FUN_1001148bc();
  uVar1 = FUN_10011630c();
  if ((uVar1 & 1) == 0) {
    FUN_1000c2114(param_1);
    FUN_1000c22d0(param_1);
  }
  *(byte *)(param_1 + 0x16e8) = *(byte *)(param_1 + 0x16e8) | 8;
  *(undefined4 *)(param_1 + 0x16e4) = 0x3ecccccd;
  FUN_1000dad68(0x3ecccccd,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c20c4(void)

{
  return;
}




void FUN_1000c20c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150("HUD_SCOREBOARD_SHARE_SCREENSHOT_OPTIONAL_TEXT",0);
  FUN_1000dadf4(*(undefined8 *)(param_1 + 8));
  FUN_10052b6b8(param_1 + 0x10,uVar1);
  return;
}




void FUN_1000c2114(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  void *local_90 [2];
  char local_79;
  undefined8 **local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (*(int *)(param_1 + 0x1630) != 0) {
    lVar7 = 0;
    uVar8 = 0;
    lVar1 = param_1 + 0x16a0;
    do {
      local_78 = (undefined8 ***)0x0;
      uStack_70 = 0;
      local_68 = 0;
      switch(*(undefined4 *)(*(long *)(param_1 + 0x1638) + lVar7 + 0x10)) {
      case 0:
        pcVar6 = "honor";
        break;
      case 1:
        pcVar6 = "report_afk";
        break;
      case 2:
        pcVar6 = "report_troll_losing";
        break;
      case 3:
        pcVar6 = "report_troll_pings";
        break;
      case 4:
        pcVar6 = "report_lowskill";
        break;
      case 5:
        pcVar6 = "report_offensive_name";
        break;
      default:
        pcVar6 = "report_unknown";
      }
      FUN_10001549c(local_90,pcVar6);
      std::string::operator=((string *)&local_78,(string *)local_90);
      if (local_79 < '\0') {
        operator_delete(local_90[0]);
      }
      uVar5 = FUN_10015d3ec();
      FUN_100166918(uVar5,lVar1,*(long *)(param_1 + 0x1638) + lVar7,&local_78);
      lVar2 = *(long *)(param_1 + 0x1638) + lVar7;
      if (*(int *)(lVar2 + 0x10) == 0) {
        uVar4 = *(undefined1 *)(lVar2 + 0x14);
        uVar5 = FUN_1003467f8();
        FUN_100105bb8(uVar4,uVar5,lVar1);
      }
      else {
        pppuVar3 = (undefined8 ***)local_78;
        if (-1 < local_68) {
          pppuVar3 = &local_78;
        }
        uVar4 = *(undefined1 *)(lVar2 + 0x14);
        uVar5 = FUN_1003467f8();
        FUN_100105cf4(pppuVar3,uVar4,uVar5,lVar1);
      }
      if (local_68 < 0) {
        operator_delete(local_78);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar8 < *(uint *)(param_1 + 0x1630));
  }
  return;
}




void FUN_1000c22d0(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  
  bVar1 = *(byte *)(param_1 + 0x1628);
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    uVar5 = 0;
    lVar6 = param_1 + 0x1f0;
    do {
      if (*(short *)(lVar6 + 8) < 0) {
        FUN_1000c3bf4(lVar6 + -0x148);
        uVar3 = FUN_10034e42c();
        thunk_FUN_1004e439c(auStack_50,uVar3);
        iVar2 = FUN_1004e36c0(auStack_50,&DAT_101d91650);
        if (iVar2 != 0) {
          FUN_1004ef410(auStack_50,param_1 + 0x1640);
          FUN_1001049e0();
        }
        if (local_48 != (void *)0x0) {
          operator_delete__(local_48);
        }
        uVar4 = (ulong)*(byte *)(param_1 + 0x1628);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x158;
    } while (uVar5 < uVar4);
  }
  return;
}




void FUN_1000c2390(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000c2afc(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x18;
  thunk_FUN_1004e439c(lVar5 + -0x18,param_2);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(lVar5 + -4) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_1000c2428(long param_1)

{
  FUN_1000dae38(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c2430(long param_1)

{
  FUN_1000dae38(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_1000c2438(long param_1)

{
  FUN_1000dae7c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c2440(long param_1)

{
  FUN_1000dae7c(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_1000c2448(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  char cVar9;
  uint *puVar10;
  char ****ppppcVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint local_d8 [2];
  void *local_d0;
  undefined1 auStack_c8 [8];
  void *local_c0;
  undefined1 auStack_b8 [8];
  void *local_b0;
  char ***local_a8 [2];
  char local_91;
  undefined8 local_90;
  uint *local_88;
  undefined8 local_80;
  uint *local_78;
  ulong local_70;
  uint *local_68;
  
  uVar5 = FUN_100111828();
  if ((uint)uVar5 != 0) {
    local_70 = 0;
    local_68 = (uint *)0x0;
    local_80 = 0;
    local_78 = (uint *)0x0;
    local_90 = 0;
    local_88 = (uint *)0x0;
    FUN_1000c2910(&local_70,uVar5);
    FUN_1000c2910(&local_80,uVar5);
    FUN_1000c2910(&local_90,uVar5);
    FUN_10003330c(local_a8,&DAT_101d91198);
    thunk_FUN_1004e439c(auStack_b8,&DAT_101d91650);
    thunk_FUN_1004e439c(auStack_c8,&DAT_101d91650);
    if (*(byte *)(param_1 + 0x1628) != 0) {
      uVar14 = 0;
      uVar17 = uVar5;
      do {
        lVar2 = param_1 + uVar14 * 0x158 + 0xa8;
        uVar6 = FUN_1000c3bf4(lVar2);
        if ((int)uVar6 != -1) {
          iVar4 = FUN_10034f380();
          if (((iVar4 == 0) || (uVar7 = FUN_10034ea2c(uVar6), (uVar7 & 1) != 0)) ||
             (uVar7 = FUN_10034ec90(uVar6), (uVar7 & 1) != 0)) {
LAB_1000c2548:
            uVar6 = 1;
          }
          else {
            uVar6 = FUN_10034e42c(uVar6);
            FUN_1004e357c(uVar6,local_a8);
            ppppcVar11 = (char ****)local_a8[0];
            if (-1 < local_91) {
              ppppcVar11 = local_a8;
            }
            if (ppppcVar11 == (char ****)0x0) {
              uVar16 = 0;
            }
            else {
              cVar9 = *(char *)ppppcVar11;
              uVar16 = 0x811c9dc5;
              if (cVar9 != '\0') {
                uVar16 = 0x811c9dc5;
                do {
                  ppppcVar11 = (char ****)((long)ppppcVar11 + 1);
                  uVar16 = (uVar16 ^ (int)cVar9) * 0x1000193;
                  cVar9 = *(char *)ppppcVar11;
                } while (cVar9 != '\0');
              }
            }
            uVar15 = local_70 & 0xffffffff;
            puVar10 = local_68;
            puVar12 = local_78;
            uVar7 = uVar15;
            puVar13 = local_88;
            if ((uint)local_70 != 0) {
              do {
                if (((uVar16 == *puVar10) || (uVar16 == *puVar12)) || (uVar16 == *puVar13))
                goto LAB_1000c2548;
                uVar7 = uVar7 - 1;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar7 != 0);
            }
            uVar6 = extraout_x1;
            if ((uint)local_70 < (uint)uVar17) {
              do {
                lVar8 = FUN_100111838(uVar15,uVar6);
                lVar3 = lVar8 + 0x20;
                FUN_1004e357c(lVar3,local_a8);
                ppppcVar11 = (char ****)local_a8[0];
                if (-1 < local_91) {
                  ppppcVar11 = local_a8;
                }
                if (ppppcVar11 == (char ****)0x0) {
                  local_d8[0] = 0;
                }
                else {
                  cVar9 = *(char *)ppppcVar11;
                  local_d8[0] = 0x811c9dc5;
                  if (cVar9 != '\0') {
                    local_d8[0] = 0x811c9dc5;
                    do {
                      ppppcVar11 = (char ****)((long)ppppcVar11 + 1);
                      local_d8[0] = (local_d8[0] ^ (int)cVar9) * 0x1000193;
                      cVar9 = *(char *)ppppcVar11;
                    } while (cVar9 != '\0');
                  }
                }
                FUN_1000c298c(&local_70,local_d8);
                iVar4 = FUN_1004e36c0(lVar8 + 0x40,&DAT_101d91650);
                if (iVar4 == 0) {
                  FUN_1000c298c(&local_80,&DAT_10115bdb0);
                }
                else {
                  FUN_1000153b4(auStack_b8,lVar8 + 0x40);
                  FUN_1004e3120(local_d8,"_");
                  FUN_1004e372c(auStack_b8,local_d8);
                  if (local_d0 != (void *)0x0) {
                    operator_delete__(local_d0);
                  }
                  FUN_1004e372c(auStack_b8,lVar3);
                  FUN_1004e357c(auStack_b8,local_a8);
                  ppppcVar11 = (char ****)local_a8[0];
                  if (-1 < local_91) {
                    ppppcVar11 = local_a8;
                  }
                  if (ppppcVar11 == (char ****)0x0) {
                    local_d8[0] = 0;
                  }
                  else {
                    cVar9 = *(char *)ppppcVar11;
                    local_d8[0] = 0x811c9dc5;
                    if (cVar9 != '\0') {
                      local_d8[0] = 0x811c9dc5;
                      do {
                        ppppcVar11 = (char ****)((long)ppppcVar11 + 1);
                        local_d8[0] = (local_d8[0] ^ (int)cVar9) * 0x1000193;
                        cVar9 = *(char *)ppppcVar11;
                      } while (cVar9 != '\0');
                    }
                  }
                  FUN_1000c298c(&local_80,local_d8);
                }
                iVar4 = FUN_1004e36c0(lVar8 + 0x78,&DAT_101d91650);
                if (iVar4 == 0) {
                  FUN_1000c298c(&local_90,&DAT_10115bdb0);
                }
                else {
                  FUN_1000153b4(auStack_c8,lVar8 + 0x78);
                  FUN_1004e3120(local_d8,"_");
                  FUN_1004e372c(auStack_c8,local_d8);
                  if (local_d0 != (void *)0x0) {
                    operator_delete__(local_d0);
                  }
                  FUN_1004e372c(auStack_c8,lVar3);
                  FUN_1004e357c(auStack_c8,local_a8);
                  ppppcVar11 = (char ****)local_a8[0];
                  if (-1 < local_91) {
                    ppppcVar11 = local_a8;
                  }
                  if (ppppcVar11 == (char ****)0x0) {
                    local_d8[0] = 0;
                  }
                  else {
                    cVar9 = *(char *)ppppcVar11;
                    local_d8[0] = 0x811c9dc5;
                    if (cVar9 != '\0') {
                      local_d8[0] = 0x811c9dc5;
                      do {
                        ppppcVar11 = (char ****)((long)ppppcVar11 + 1);
                        local_d8[0] = (local_d8[0] ^ (int)cVar9) * 0x1000193;
                        cVar9 = *(char *)ppppcVar11;
                      } while (cVar9 != '\0');
                    }
                  }
                  FUN_1000c298c(&local_90,local_d8);
                }
                uVar17 = uVar5 & 0xffffffff;
                if (((uVar16 == local_68[uVar15]) || (uVar16 == local_78[uVar15])) ||
                   (uVar16 == local_88[uVar15])) goto LAB_1000c2548;
                uVar6 = 0;
                uVar1 = (int)uVar15 + 1;
                uVar15 = (ulong)uVar1;
              } while (uVar1 < (uint)uVar5);
            }
            else {
              uVar6 = 0;
            }
          }
          FUN_1000c4e60(lVar2,uVar6);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(byte *)(param_1 + 0x1628));
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
    }
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
    if (local_88 != (uint *)0x0) {
      operator_delete__(local_88);
    }
    if (local_78 != (uint *)0x0) {
      operator_delete__(local_78);
    }
    if (local_68 != (uint *)0x0) {
      operator_delete__(local_68);
    }
  }
  return;
}




void FUN_1000c2910(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1000c298c(uint *param_1,undefined4 *param_2)

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
    FUN_1000c2910(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_1000c2a0c(long param_1)

{
  FUN_1000c2448(param_1 + -0x18);
  return;
}




void FUN_1000c2a14(void)

{
  return;
}




void FUN_1000c2a18(void)

{
  return;
}




void FUN_1000c2a1c(void)

{
  return;
}




void FUN_1000c2a20(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1000c2a70(void)

{
  return 1;
}




void FUN_1000c2a78(void)

{
  return;
}




void FUN_1000c2a7c(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x18;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        puVar2 = puVar2 + 3;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void thunk_FUN_1000c0f40(void)

{
  FUN_1000c0f40();
  return;
}




void FUN_1000c2afc(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x18);
    pvVar5 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar7 = (ulong)*param_1 * 0x18;
      pvVar3 = pvVar2;
      do {
        lVar4 = thunk_FUN_1004e439c(pvVar3,pvVar5);
        uVar1 = *(undefined4 *)((long)pvVar5 + 0x10);
        *(undefined1 *)(lVar4 + 0x14) = *(undefined1 *)((long)pvVar5 + 0x14);
        *(undefined4 *)(lVar4 + 0x10) = uVar1;
        pvVar5 = (void *)((long)pvVar5 + 0x18);
        pvVar3 = (void *)(lVar4 + 0x18);
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar7 = (ulong)*param_1 * 0x18;
        puVar6 = (undefined8 *)((long)pvVar5 + 8);
        do {
          if ((void *)*puVar6 != (void *)0x0) {
            operator_delete__((void *)*puVar6);
            puVar6[-1] = 0;
            *puVar6 = 0;
          }
          puVar6 = puVar6 + 3;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_1000c2be0(uint *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  iVar3 = (int)((ulong)(param_3 - param_2) >> 3);
  uVar4 = (ulong)*param_1;
  if (*param_1 != iVar3 * -0x55555555) {
    lVar5 = *(long *)(param_1 + 2);
    lVar9 = lVar5 + uVar4 * 0x18;
    lVar2 = lVar9 - param_3;
    lVar8 = param_2;
    if (lVar2 != 0) {
      do {
        FUN_1000153b4(lVar8,param_3);
        uVar1 = *(undefined4 *)(param_3 + 0x10);
        *(undefined1 *)(lVar8 + 0x14) = *(undefined1 *)(param_3 + 0x14);
        *(undefined4 *)(lVar8 + 0x10) = uVar1;
        param_3 = param_3 + 0x18;
        lVar8 = lVar8 + 0x18;
      } while (param_3 != lVar9);
      uVar4 = (ulong)*param_1;
      lVar5 = *(long *)(param_1 + 2);
    }
    puVar6 = (undefined8 *)(param_2 + ((lVar2 >> 3) * -0x5555555555555555 & 0xffffffffU) * 0x18);
    puVar7 = (undefined8 *)(lVar5 + uVar4 * 0x18);
    if (puVar6 != puVar7) {
      do {
        if ((void *)puVar6[1] != (void *)0x0) {
          operator_delete__((void *)puVar6[1]);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        puVar6 = puVar6 + 3;
      } while (puVar6 != puVar7);
      uVar4 = (ulong)*param_1;
    }
    *param_1 = (int)uVar4 + iVar3 * 0x55555555;
    return;
  }
  FUN_1000c2a7c(param_1,1);
  return;
}




void FUN_1000c2cf8(void)

{
  if ((DAT_10184de58 & 1) == 0) {
    DAT_10184de50 = DAT_101872e38;
    DAT_10184de58 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c2d24(void)

{
  DAT_101dc5df0 = 0xff;
  DAT_101dc5df2 = 0xffff;
  DAT_101dc5df4 = 0xffff;
  DAT_101dc5df6 = 0xffbc9c44;
  DAT_101dc5dfa = 0xff1166f2;
  DAT_101dc5dfe = 0xffe0e0e0;
  DAT_101dc5e02 = 0xffa0a0a0;
  DAT_101dc5e06 = 0xff8c8c8c;
  DAT_101dc5e0a = 0xff322213;
  DAT_101dc5e0e = 0xff091911;
  DAT_101dc5e12 = 0xff170c19;
  DAT_101dc5e16 = 0xff241a14;
  DAT_101dc5e1a = 0xff14171c;
  DAT_101dc5e1e = 0xff221911;
  DAT_101dc5e22 = 0xff1a1416;
  DAT_101dc5e26 = 0xff121414;
  DAT_101dc5e2a = 0xff1a1809;
  DAT_101dc5e2e = 0xff141414;
  DAT_101dc5e32 = 0xff141414;
  DAT_101dc5e36 = 0xff2929c0;
  DAT_101dc5e3a = 0xff283082;
  DAT_101dc5e3e = 0xff5262cc;
  DAT_101dc5e42 = 0xff283082;
  DAT_101dc5e46 = 0xff5262cc;
  DAT_101dc5e4a = 0xff745c42;
  DAT_101dc5e4e = 0xff184155;
  DAT_101dc5e52 = 0xff92665e;
  DAT_101dc5e56 = 0xffbc9c44;
  DAT_101dc5e5a = 0xffbbae56;
  DAT_101dc5e5e = 0xff8b7b01;
  DAT_101dc5e62 = 0xff90b3ef;
  DAT_101dc5e66 = 0xff728ebe;
  DAT_101dc5e6a = 0xff19459d;
  DAT_101dc5e6e = 0xff9d877b;
  DAT_101dc5e72 = 0xffcbb1a3;
  DAT_101dc5e76 = 0xff3f6fb5;
  DAT_101dc5e7a = 0xffc5c5c5;
  DAT_101dc5e7e = 0xff4fc1f1;
  DAT_101dc5e82 = 0xff606060;
  DAT_101dc5e86 = 0xffc5ff7b;
  DAT_101dc5e8a = 0xff5271eb;
  DAT_101dc5e8e = 0xfffae076;
  DAT_101dc5e92 = 0xff3ac8f6;
  DAT_101dc5e96 = 0xffaaaaaa;
  DAT_101dc5e9a = 0xffe19400;
  DAT_101dc5e9e = 0xffe19400;
  DAT_101dc5ea2 = 0xffe550b2;
  DAT_101dc5ea6 = 0xfff22ae8;
  DAT_101dc5eaa = 0xff005ae1;
  DAT_101dc5eae = 0xff1addfa;
  DAT_101dc5eb2 = 0xff2424b3;
  DAT_101dc5eb6 = 0xff2424b3;
  DAT_101dc5eba = 0xff646464;
  DAT_101dc5ebe = 0xff92665e;
  DAT_101dc5ec2 = 0xff646037;
  DAT_101dc5ec8 = 0xffffffff;
  DAT_101dc5ecc = 0xff1111a1;
  DAT_101dc5ed0 = 0xff321ee1;
  DAT_101dc5ed4 = 0xffc8c8c8;
  DAT_101dc5ed8 = 0xff321ee1;
  DAT_101dc5edc = 0xff7fe801;
  DAT_101dc5ee0 = 0xffffffff;
  DAT_101dc5ee4 = 0xff6259b3;
  DAT_101dc5ee8 = 0xff506e73;
  DAT_101dc5eec = 0xff9dbf86;
  DAT_101dc5ef0 = 0xffa35244;
  DAT_101dc5ef4 = 0xffca828e;
  DAT_101dc5ef8 = 0xffa6a6a6;
  DAT_101dc5efc = 0xffa6a6a6;
  DAT_101dc5f00 = 0xffffffff;
  DAT_101dc5f04 = 0xff88ea2f;
  DAT_101dc5f08 = 0xff8c8c8c;
  DAT_101dc5f0c = 0xffffb400;
  DAT_101dc5f10 = 0xffff00ff;
  DAT_101dc5f14 = 0xff00aded;
  DAT_101dc5f18 = 0xff33d3ff;
  DAT_101dc5f1c = 0xff7fe801;
  DAT_101dc5f20 = 0xff282828;
  DAT_101dc5f24 = 0xfff0f0f0;
  DAT_101dc5f28 = 0xffa4781e;
  DAT_101dc5f2c = 0xffa6654b;
  DAT_101dc5f30 = 0xff93435b;
  DAT_101dc5f34 = 0xff387f9c;
  DAT_101dc5f38 = 0xffa3781e;
  DAT_101dc5f3c = 0xffffd18a;
  DAT_101dc5f40 = 0xffff61f7;
  DAT_101dc5f44 = 0xff5de1f2;
  DAT_101dc5f48 = 0xff80eaff;
  DAT_101dc5f4c = 0xff32e00e;
  DAT_101dc5f50 = 0xff5a3c10;
  DAT_101dc5f54 = 0xff330b03;
  DAT_101dc5f58 = 0xff33031d;
  DAT_101dc5f5c = 0xff032433;
  DAT_101dc5f60 = 0xff9e8e8d;
  uRam0000000101dc6038 = 0x7f7fffff7f7fffff;
  _DAT_101dc6030 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6048 = 0x7f7fffff7f7fffff;
  _DAT_101dc6040 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6058 = 0x7f7fffff7f7fffff;
  _DAT_101dc6050 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6068 = 0x7f7fffff7f7fffff;
  _DAT_101dc6060 = 0x7f7fffff7f7fffff;
  DAT_101dc6070 = 0x7f7fffff;
  DAT_101dc6074 = 0x7f7fffff;
  DAT_101dc6078 = 0x7f7fffff;
  DAT_101dc607c = 0x3f800000;
  uRam0000000101dc6088 = 0x7f7fffff7f7fffff;
  _DAT_101dc6080 = 0x7f7fffff7f7fffff;
  DAT_101dc6090 = 0x7f7fffff;
  DAT_101dc6094 = 0x3eb33333;
  uRam0000000101dc60a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc6098 = 0x7f7fffff7f7fffff;
  uRam0000000101dc60b0 = 0x7f7fffff7f7fffff;
  _DAT_101dc60a8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc60c0 = 0x7f7fffff7f7fffff;
  _DAT_101dc60b8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc60d0 = 0x7f7fffff7f7fffff;
  _DAT_101dc60c8 = 0x7f7fffff7f7fffff;
  DAT_101dc60d8 = 0x7f7fffff;
  DAT_101dc60dc = 0x7f7fffff;
  DAT_101dc60e0 = 0x7f7fffff;
  uRam0000000101dc5f78 = 0xff7fffffff7fffff;
  _DAT_101dc5f70 = 0xff7fffffff7fffff;
  DAT_101dc5f80 = 0;
  DAT_101dc5f88 = 0;
  uRam0000000101dc5f94 = 0xff7fffffff7fffff;
  _DAT_101dc5f8c = 0xff7fffffff7fffff;
  DAT_101dc5f9c = 0xff7fffff;
  DAT_101dc5fa0 = 0xff7fffff;
  DAT_101dc5fa4 = NEON_fmov(0xbf800000,4);
  DAT_101dc5fac = 0x3f000000;
  DAT_101dc5fb0 = 0;
  DAT_101dc5fb8 = 0;
  uRam0000000101dc5fc8 = 0xff7fffffff7fffff;
  _DAT_101dc5fc0 = 0xff7fffffff7fffff;
  uRam0000000101dc5fd8 = 0xff7fffffff7fffff;
  _DAT_101dc5fd0 = 0xff7fffffff7fffff;
  uRam0000000101dc5fe8 = 0xff7fffffff7fffff;
  _DAT_101dc5fe0 = 0xff7fffffff7fffff;
  uRam0000000101dc5ff8 = 0xbf800000bf800000;
  _DAT_101dc5ff0 = 0xbf80000000000000;
  DAT_101dc6000 = 0xbf800000;
  DAT_101dc6004 = 0xff7fffff;
  DAT_101dc6008 = 0xff7fffff;
  DAT_101dc600c = 0xff7fffff;
  DAT_101dc6010 = 0;
  DAT_101dc6014 = 0xff7fffff;
  DAT_101dc6018 = 0;
  DAT_101dc6020 = 0;
  return;
}




undefined8 * FUN_1000c34a4(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_101454860;
  operator_new(0x9238);
  lVar2 = thunk_FUN_1000d1c68();
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_1014547e8;
  param_1[1] = lVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 4) = DAT_101dc0b88;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0xff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  FUN_10034d83c((long)param_1 + 0x13c);
  *(undefined2 *)(param_1 + 0x2a) = 0xff;
  param_1[0x28] = 0xbf80000000000000;
  param_1[0x29] = 0xffffffff00000000;
  *(byte *)((long)param_1 + 0x152) = *(byte *)((long)param_1 + 0x152) & 0xe0;
  FUN_1000c3554(param_1);
  return param_1;
}




void FUN_1000c3554(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = DAT_101dc0b88;
  lVar4 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0xbf800000;
  uVar2 = *(uint3 *)(param_1 + 0x150) & 0xe09f00;
  *(undefined8 *)(param_1 + 0x148) = 0xffffffff00000000;
  *(ushort *)(param_1 + 0x150) = (ushort)uVar2 | 0xff;
  *(char *)(param_1 + 0x152) = (char)(uVar2 >> 0x10);
  do {
    lVar1 = param_1 + lVar4;
    *(undefined4 *)(lVar1 + 0x40) = 0xffff;
    *(undefined4 *)(lVar1 + 0x44) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x54) = 0xffff;
    *(undefined4 *)(lVar1 + 0x58) = 0xffffffff;
    *(undefined2 *)(lVar1 + 0x50) = 0;
    *(undefined4 *)(lVar1 + 0x5c) = 0;
    *(undefined4 *)(lVar1 + 0x60) = 0;
    lVar4 = lVar4 + 0x28;
    *(undefined8 *)(lVar1 + 0x48) = 0;
  } while (lVar4 != 0xf0);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1000d6960(*(undefined8 *)(param_1 + 8));
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




undefined8 * thunk_FUN_1000c34a4(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_101454860;
  operator_new(0x9238);
  lVar2 = thunk_FUN_1000d1c68();
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_1014547e8;
  param_1[1] = lVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 4) = DAT_101dc0b88;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0xff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  FUN_10034d83c((long)param_1 + 0x13c);
  *(undefined2 *)(param_1 + 0x2a) = 0xff;
  param_1[0x28] = 0xbf80000000000000;
  param_1[0x29] = 0xffffffff00000000;
  *(byte *)((long)param_1 + 0x152) = *(byte *)((long)param_1 + 0x152) & 0xe0;
  FUN_1000c3554(param_1);
  return param_1;
}




undefined8 * FUN_1000c364c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014547e8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x58))();
    param_1[2] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_101454860;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1000c364c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014547e8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x58))();
    param_1[2] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_101454860;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c36b8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c364c();
  operator_delete(pvVar1);
  return;
}




void FUN_1000c36cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ****local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined4 local_68 [2];
  
  FUN_1000c3554();
  lVar14 = 0;
  if (param_2 != 0) {
    lVar14 = param_2 + 0x28;
  }
  puVar1 = &DAT_101dc0b88;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(lVar14 + 8);
  }
  uVar6 = *puVar1;
  *(long *)(param_1 + 0x18) = lVar14;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  iVar4 = FUN_10034cb58();
  uVar13 = param_5;
  if ((iVar4 != 0) && (param_2 != 0)) {
    iVar4 = FUN_100345bbc(param_2);
    uVar13 = (ulong)(iVar4 == 2);
  }
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
  bVar2 = 2;
  if ((int)uVar13 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xfd | bVar2;
  *(int *)(param_1 + 0x38) = (int)param_3;
  *(char *)(param_1 + 0x3c) = (char)param_4;
  FUN_1000d54e0(*(undefined8 *)(param_1 + 8),param_3,param_4,param_5);
  FUN_1000d6718(*(undefined8 *)(param_1 + 8),(uint)param_5 ^ 1,0);
  lVar14 = *(long *)(param_1 + 8);
  FUN_1003467f8();
  uVar3 = FUN_10034cf60();
  *(undefined1 *)(lVar14 + 0x922f) = uVar3;
  uVar15 = *(undefined8 *)(param_1 + 8);
  FUN_1003467f8();
  uVar8 = FUN_10034cf58();
  FUN_1000d5d94(uVar15,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_1003467f8();
  uVar5 = FUN_10034cf68();
  FUN_1000d5db4(uVar8,uVar5 ^ 1);
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_1003467f8();
  uVar5 = FUN_10034cf68();
  FUN_1000d5dd4(uVar8,uVar5 ^ 1);
  FUN_1000d6044(*(undefined8 *)(param_1 + 8),(*(byte *)(param_1 + 0x152) & 2) == 0);
  if (param_2 == 0) goto LAB_1000c3b78;
  lVar9 = FUN_100490234(param_2);
  lVar14 = 0;
  if (lVar9 != 0) {
    lVar14 = lVar9 + 0x28;
  }
  puVar1 = &DAT_101dc0b88;
  if (lVar9 != 0) {
    puVar1 = (undefined4 *)(lVar14 + 8);
  }
  uVar6 = *puVar1;
  *(long *)(param_1 + 0x28) = lVar14;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  FUN_1000d67c0(*(undefined8 *)(param_1 + 8),6);
  lVar9 = 0;
  lVar14 = param_1 + 0x5c;
  do {
    FUN_1000d563c(0x3f800000,*(undefined8 *)(param_1 + 8),lVar9,lVar14);
    FUN_1000c3bac(param_1,lVar9);
    lVar9 = lVar9 + 1;
    lVar14 = lVar14 + 0x28;
  } while (lVar9 != 6);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar8 = FUN_1004654a0(param_2);
  FUN_1000d5df4(uVar15,uVar8);
  local_68[0] = FUN_1003c5e58(param_2);
  lVar14 = FUN_10032bc58(local_68);
  uVar8 = FUN_10030d844();
  puVar10 = (undefined8 *)FUN_100345940(*(undefined4 *)(param_2 + 0x260));
  if ((char)*(byte *)((long)puVar10 + 0x17) < '\0') {
    uVar13 = puVar10[1];
    if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_1000c5a00();
    }
    puVar10 = (undefined8 *)*puVar10;
  }
  else {
    uVar13 = (ulong)*(byte *)((long)puVar10 + 0x17);
  }
  if (uVar13 < 0x17) {
    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
    pppppuVar11 = &local_80;
    if (uVar13 != 0) goto LAB_1000c3960;
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pppppuVar11 = operator_new(uVar12);
    uStack_70 = uVar12 | 0x8000000000000000;
    local_80 = pppppuVar11;
    local_78 = uVar13;
LAB_1000c3960:
    _memcpy(pppppuVar11,puVar10,uVar13);
  }
  *(undefined1 *)((long)pppppuVar11 + uVar13) = 0;
  uVar6 = FUN_10030d540(uVar8,&local_80,*(undefined8 *)(lVar14 + 0x10));
  if ((long)uStack_70 < 0) {
    operator_delete(local_80);
  }
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x921c) = uVar6;
  FUN_1000c3bf4(param_1);
  uVar13 = FUN_10034ea2c();
  uVar12 = FUN_100147980();
  if ((uVar12 & 1) == 0) {
    if ((uVar13 & 1) == 0) goto LAB_1000c39e4;
LAB_1000c39d4:
    uVar8 = 0;
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_10034ee90();
    iVar7 = FUN_1000c3bf4(param_1);
    if (iVar4 == iVar7) goto LAB_1000c39d4;
LAB_1000c39e4:
    FUN_1000c3bf4(param_1);
    iVar4 = FUN_10034ed38();
    if (iVar4 == 0) {
      iVar4 = 0;
      uVar8 = 1;
    }
    else {
      FUN_1003467f8();
      uVar8 = FUN_10034cf50();
      iVar4 = 0;
    }
  }
  FUN_1000d68bc(*(undefined8 *)(param_1 + 8),uVar8);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar8 = FUN_10034ee90();
  uVar5 = 0;
  if (((int)uVar8 != *(int *)(param_2 + 0x260)) && ((param_5 & 1) == 0)) {
    uVar5 = FUN_10034cb58(uVar8,0);
    uVar5 = uVar5 ^ 1;
  }
  FUN_1000d6904(uVar15,uVar5);
  FUN_1000d301c(*(undefined8 *)(param_1 + 8),iVar4);
  if ((((iVar4 != 0) && (iVar4 = FUN_100126b8c(), iVar4 != 0)) &&
      (iVar4 = FUN_100129b4c(), iVar4 != 0)) && (uVar13 = FUN_100147980(), (uVar13 & 1) == 0)) {
    operator_new(0x38);
    uVar8 = thunk_FUN_100218f18();
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    uVar6 = 1;
    if ((int)param_3 != 0) {
      uVar6 = 2;
    }
    FUN_100219060(uVar8,uVar6);
    FUN_1000d6928(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  }
  lVar14 = *(long *)(param_2 + 0x18);
  while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar14 = *(long *)(lVar14 + 0x20);
  }
  uVar8 = FUN_1000c3c70(param_2);
  if (-1 < (int)uVar8) {
    uVar16 = *(undefined8 *)(param_1 + 8);
    uVar15 = FUN_1004654a0(param_2);
    uVar8 = FUN_100461330(lVar14,uVar8);
    FUN_1000d5e78(uVar16,uVar15,uVar8,param_1 + 0x134);
  }
  if ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) == 0) {
    FUN_1003467f8();
    uVar13 = FUN_10034cf60();
    if ((uVar13 & 1) == 0) {
      lVar14 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      uVar6 = *(undefined4 *)(lVar14 + 0x260);
      uVar16 = *(undefined8 *)(param_1 + 8);
      uVar8 = FUN_10034e938(uVar6);
      uVar15 = FUN_10034e988(uVar6);
      FUN_1000d6304(uVar16,uVar8,uVar15);
    }
  }
  uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x84);
  if ((~uVar5 & 0x7f80) != 0) {
    *(uint *)(*(long *)(param_1 + 8) + 0x84) = uVar5 | 0x7f80;
    FUN_1000200a0();
  }
LAB_1000c3b78:
  FUN_1000c3cf0(param_1);
  FUN_1000c3e80(param_1);
  return;
}




void FUN_1000c3bac(long param_1,undefined8 param_2)

{
  FUN_1000d626c(*(undefined8 *)(param_1 + 8),param_2,0);
  FUN_1000d6290(*(undefined8 *)(param_1 + 8),param_2,0);
  FUN_1000d6210(*(undefined8 *)(param_1 + 8),param_2,0);
  return;
}




undefined4 FUN_1000c3bf4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        puVar3 = (undefined4 *)(lVar2 + 0x260);
        goto LAB_1000c3c60;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
    }
  }
  puVar3 = &DAT_101159f80;
LAB_1000c3c60:
  return *puVar3;
}




uint FUN_1000c3c70(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar1 = FUN_100346244(lVar4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar5 = 0;
  do {
    uVar3 = FUN_1003e1178(lVar4,uVar5);
    if ((uVar3 & 1) != 0) {
      return uVar5;
    }
    uVar5 = uVar5 + 1;
    uVar2 = FUN_100346244(lVar4);
  } while (uVar5 < uVar2);
  return 0xffffffff;
}




void FUN_1000c3cf0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  uint3 uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if ((lVar6 != 0) && (plVar5 = *(long **)(param_1 + 0x28), plVar5 != (long *)0x0)) {
        if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
          lVar6 = (**(code **)(*plVar5 + 0x10))();
          if (lVar6 != 0) {
            lVar6 = 0;
            piVar7 = (int *)(param_1 + 0x58);
            do {
              if (*piVar7 == -1) {
                if (piVar7[-5] != -1) {
                  FUN_1000c3bac(param_1,lVar6);
                  piVar7[-5] = *piVar7;
                }
              }
              else {
                FUN_1000c4eb0(param_1,lVar6);
                FUN_1000d6290(*(undefined8 *)(param_1 + 8),lVar6,1);
                FUN_1000c4f14(param_1,lVar6);
              }
              lVar6 = lVar6 + 1;
              piVar7 = piVar7 + 10;
            } while (lVar6 != 6);
            uVar2 = (ulong)*(byte *)(param_1 + 0x152) << 0x10;
            uVar4 = *(uint3 *)(param_1 + 0x150) >> 0x15 & 1;
            if ((uVar2 & 0x400000) != 0) {
              uVar4 = 1;
            }
            if ((*(uint3 *)(param_1 + 0x150) >> 0xd & 1) != uVar4) {
              FUN_1000d614c(*(undefined8 *)(param_1 + 8),(uVar2 & 0x600000) != 0,uVar2 >> 0x15 & 1);
              uVar4 = *(uint3 *)(param_1 + 0x150);
              uVar3 = (ushort)(uVar4 >> 8) & 0x2000;
              uVar1 = uVar4 & 0xffffdfff;
              if ((*(byte *)(param_1 + 0x152) & 0x40) != 0) {
                uVar3 = 0x2000;
              }
              *(ushort *)(param_1 + 0x150) = uVar3 | (ushort)uVar1;
              *(char *)(param_1 + 0x152) = (char)(uVar1 >> 0x10);
            }
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000c3e80(long param_1)

{
  ulong *puVar1;
  undefined3 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  float fVar16;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        lVar5 = *(long *)(lVar5 + 0x40);
        fVar16 = *(float *)(lVar5 + 0xdc) +
                 *(float *)(lVar5 + 400) * (*(float *)(lVar5 + 0x2f8) + 1.0);
        NEON_fminnm(fVar16 + fVar16 * *(float *)(lVar5 + 0x244),DAT_101dc6264);
        uVar11 = (uint)DAT_101dc61a4;
        lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                          (DAT_101dc61a4,DAT_101dc61a4,DAT_101dc6264);
        lVar5 = *(long *)(lVar5 + 0x40);
        fVar16 = *(float *)(lVar5 + 0xe0) +
                 *(float *)(lVar5 + 0x194) * (*(float *)(lVar5 + 0x2fc) + 1.0);
        NEON_fminnm(fVar16 + fVar16 * *(float *)(lVar5 + 0x248),DAT_101dc6268);
        uVar13 = (uint)(float)DAT_101dc61a8;
        lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                          ((float)DAT_101dc61a8,(float)DAT_101dc61a8,DAT_101dc6268);
        uVar14 = (uint)*(float *)(*(long *)(lVar5 + 0x40) + 0x334);
        fVar16 = *(float *)(param_1 + 0x130);
        puVar1 = (ulong *)(param_1 + 0x148);
        if ((uVar11 != ((ushort)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x30) & 0xff) ||
             (byte)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x38) != uVar13) ||
           (uVar14 != (*(ushort *)(param_1 + 0x150) & 0xff))) {
          FUN_1000d66b8(*(undefined8 *)(param_1 + 8),uVar11,(ulong)uVar13,uVar14);
          *puVar1 = *puVar1 & 0xffffffffffff | (ulong)(uVar11 & 0xff) << 0x30 |
                    (ulong)uVar13 << 0x38;
          *(ushort *)(param_1 + 0x150) = (ushort)uVar14 & 0xff | *(short *)(param_1 + 0x151) << 8;
          *(char *)(param_1 + 0x152) = (char)((ushort)*(short *)(param_1 + 0x151) >> 8);
        }
        uVar11 = (uint)fVar16;
        FUN_1003467f8();
        iVar3 = FUN_10034cf58();
        if (iVar3 != 0) {
          lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          lVar5 = *(long *)(lVar5 + 0x40);
          fVar16 = *(float *)(lVar5 + 0xd0) +
                   *(float *)(lVar5 + 0x184) * (*(float *)(lVar5 + 0x2ec) + 1.0);
          NEON_fminnm(fVar16 + fVar16 * *(float *)(lVar5 + 0x238),DAT_101dc6258);
          if ((*(ushort *)(param_1 + 0x150) >> 8 & 0x1f) != (int)DAT_101dc6198) {
            FUN_1000d6718(DAT_101dc6198,DAT_101dc6198,DAT_101dc6258,0x3f800000,
                          *(undefined8 *)(param_1 + 8),(*(byte *)(param_1 + 0x152) & 2) == 0);
          }
        }
        if ((*(uint *)(param_1 + 0x14c) & 0xfff) != uVar11) {
          FUN_1000d670c(*(undefined8 *)(param_1 + 8),uVar11);
          *puVar1 = *puVar1 & 0xfffff00000000000 |
                    *puVar1 & 0xffffffff | (ulong)(uVar11 & 0xfff) << 0x20;
        }
        lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
          if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184e110) {
            if ((*(byte *)(param_1 + 0x152) & 1) == 0) {
              fVar16 = (float)FUN_1003e1f90();
              uVar11 = (uint)(fVar16 + 0.99);
              uVar10 = *puVar1;
              if (uVar11 == ((uint)uVar10 & 0xffff)) {
                uVar9 = (ulong)*(uint3 *)(param_1 + 0x150);
              }
              else {
                FUN_1000d5d04(*(undefined8 *)(param_1 + 8),uVar11);
                uVar9 = (ulong)*(uint3 *)(param_1 + 0x150);
                uVar10 = *puVar1 & 0xffffffffffff0000 | (ulong)(uVar11 & 0xffff);
                *puVar1 = uVar10;
              }
              goto LAB_1000c413c;
            }
            break;
          }
        }
        FUN_1000d5c9c(*(undefined8 *)(param_1 + 8));
        uVar9 = (ulong)*(uint3 *)(param_1 + 0x150);
        uVar10 = *puVar1;
LAB_1000c413c:
        uVar11 = (uint)uVar9;
        uVar13 = (uint)(*(float *)(param_1 + 0x138) + 0.99);
        if (uVar13 != (uint)uVar10 >> 0x10) {
          uVar6 = *(undefined8 *)(param_1 + 8);
          if ((int)uVar13 < 1) {
            uVar9 = uVar9 >> 0x14;
          }
          else {
            FUN_1000d5ff8(uVar6,uVar13);
            uVar6 = *(undefined8 *)(param_1 + 8);
            uVar9 = (ulong)(((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x14);
          }
          FUN_1000d6068(uVar6,(int)uVar13 >= 1,uVar9 & 1);
          uVar11 = (uint)*(ushort *)(param_1 + 0x150);
          *puVar1 = *puVar1 & 0xffffffff0000ffff | (ulong)(uVar13 << 0x10);
        }
        if ((uVar11 >> 0xe & 1) == 0) {
          lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          iVar3 = FUN_1003458ec(*(undefined4 *)(lVar5 + 0x260));
          if (iVar3 != 0) {
            uVar12 = *(undefined8 *)(param_1 + 8);
            lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
            uVar6 = FUN_10034e42c(*(undefined4 *)(lVar5 + 0x260));
            lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
            uVar7 = FUN_10034e580(*(undefined4 *)(lVar5 + 0x260));
            lVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
            uVar8 = FUN_10034e5dc(*(undefined4 *)(lVar5 + 0x260));
            FUN_1000d67cc(uVar12,uVar6,uVar7,uVar8);
            puVar15 = (ushort *)(param_1 + 0x150);
            uVar2 = *(undefined3 *)puVar15;
            *puVar15 = *puVar15 | 0x4000;
            *(char *)(param_1 + 0x152) = (char)((uint3)uVar2 >> 0x10);
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
    }
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (iVar3 = FUN_100126b8c(), iVar3 != 0)) {
    FUN_1002192f4(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}




void FUN_1000c42dc(undefined8 param_1)

{
  FUN_1000c3cf0();
  FUN_1000c3e80(param_1);
  return;
}




void FUN_1000c4300(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  float fVar18;
  float fVar19;
  int local_68 [2];
  
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x20) != (int)plVar5[1]) goto LAB_1000c4b58;
  lVar6 = (**(code **)(*plVar5 + 0x10))();
  if (lVar6 != 0) {
    puVar1 = (ulong *)(param_1 + 0x148);
    if ((((*(byte *)(param_1 + 0x152) & 1) == 0) && (uVar7 = FUN_10034cb58(), (uVar7 & 1) == 0)) &&
       ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) != 0)) {
      lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      if ((*(byte *)(lVar6 + 0x2fc) & 0x1f) != 0) {
        plVar5 = *(long **)(param_1 + 0x18);
        lVar6 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
            lVar6 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            lVar6 = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
          }
        }
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
        if (((int)uVar7 == 0x1f) || (1 < *(ushort *)(lVar6 + uVar7 * 0x38 + 0x90) - 3))
        goto LAB_1000c43fc;
      }
    }
    else {
LAB_1000c43fc:
      lVar6 = 0;
      do {
        *(undefined4 *)(param_1 + lVar6 + 0x54) = 0xffff;
        *(undefined4 *)(param_1 + lVar6 + 0x58) = 0xffffffff;
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != 0xf0);
      lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      iVar13 = (int)(*(float *)(*(long *)(lVar6 + 0x40) + 0x324) * 0.01);
      if (*(int *)(param_1 + 0x140) < iVar13) {
        *(int *)(param_1 + 0x140) = iVar13;
        FUN_1000d6580(*(undefined8 *)(param_1 + 8));
      }
      uVar15 = 0;
      iVar13 = 0;
      while( true ) {
        plVar5 = *(long **)(param_1 + 0x28);
        uVar8 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
            uVar8 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            uVar8 = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
          }
        }
        uVar2 = FUN_1003e1b24(uVar8);
        if (uVar2 <= uVar15) break;
        plVar5 = *(long **)(param_1 + 0x28);
        uVar8 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
            uVar8 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            uVar8 = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
          }
        }
        uVar2 = FUN_100465738(uVar8);
        if ((uVar2 <= uVar15) || (5 < iVar13)) break;
        plVar5 = *(long **)(param_1 + 0x28);
        if (plVar5 == (long *)0x0) {
          uVar9 = 0;
          uVar8 = 0;
        }
        else if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
          uVar9 = (**(code **)(*plVar5 + 0x10))();
          plVar5 = *(long **)(param_1 + 0x28);
          uVar8 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) != (int)plVar5[1]) goto LAB_1000c4570;
            uVar8 = (**(code **)(*plVar5 + 0x10))();
          }
        }
        else {
          uVar9 = 0;
LAB_1000c4570:
          uVar8 = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
        }
        uVar8 = FUN_10044d868(uVar8,uVar15);
        FUN_10044d88c(uVar9,uVar8);
        uVar7 = FUN_1000bda94();
        if ((uVar7 & 1) == 0) {
          plVar5 = *(long **)(param_1 + 0x28);
          uVar8 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
              uVar8 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              uVar8 = 0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
            }
          }
          lVar6 = (long)iVar13;
          uVar3 = FUN_10046e234(uVar8,uVar15);
          *(undefined4 *)(param_1 + lVar6 * 0x28 + 0x54) = uVar3;
          plVar5 = *(long **)(param_1 + 0x28);
          uVar8 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
              uVar8 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              uVar8 = 0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
            }
          }
          uVar3 = FUN_10044d868(uVar8,uVar15);
          puVar17 = (undefined4 *)(param_1 + lVar6 * 0x28 + 0x58);
          *puVar17 = uVar3;
          uVar7 = FUN_10034cb58();
          if (((uVar7 & 1) != 0) || ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) == 0))
          {
            if ((*(byte *)(param_1 + 0x152) & 1) == 0) {
              plVar5 = *(long **)(param_1 + 0x28);
              uVar8 = 0;
              if (plVar5 != (long *)0x0) {
                if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                  uVar8 = (**(code **)(*plVar5 + 0x10))();
                }
                else {
                  uVar8 = 0;
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
                }
              }
              iVar4 = FUN_10046e42c(uVar8,*puVar17);
              if (iVar4 != 0) {
                plVar5 = *(long **)(param_1 + 0x28);
                uVar8 = 0;
                if (plVar5 != (long *)0x0) {
                  if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                    uVar8 = (**(code **)(*plVar5 + 0x10))();
                  }
                  else {
                    uVar8 = 0;
                    *(undefined8 *)(param_1 + 0x28) = 0;
                    *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
                  }
                }
                uVar2 = FUN_10046e740(uVar8,*puVar17);
                if ((uVar2 >> 2 & 1) != 0) {
                  plVar5 = *(long **)(param_1 + 0x28);
                  uVar8 = 0;
                  if (plVar5 != (long *)0x0) {
                    if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                      uVar8 = (**(code **)(*plVar5 + 0x10))();
                    }
                    else {
                      uVar8 = 0;
                      *(undefined8 *)(param_1 + 0x28) = 0;
                      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
                    }
                  }
                  lVar10 = FUN_10044d88c(uVar8,*puVar17);
                  if (*(char *)(lVar10 + 0x34) == '\0') {
                    plVar5 = *(long **)(param_1 + 0x28);
                    uVar8 = 0;
                    if (plVar5 != (long *)0x0) {
                      if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                        uVar8 = (**(code **)(*plVar5 + 0x10))();
                      }
                      else {
                        uVar8 = 0;
                        *(undefined8 *)(param_1 + 0x28) = 0;
                        *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
                      }
                    }
                    fVar18 = (float)FUN_10043da00(uVar8,*puVar17);
                    *(float *)(param_1 + lVar6 * 0x28 + 0x60) = fVar18;
                    plVar5 = *(long **)(param_1 + 0x28);
                    uVar8 = 0;
                    if (plVar5 != (long *)0x0) {
                      if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
                        uVar8 = (**(code **)(*plVar5 + 0x10))();
                      }
                      else {
                        uVar8 = 0;
                        *(undefined8 *)(param_1 + 0x28) = 0;
                        *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
                      }
                    }
                    fVar19 = (float)FUN_10046e5cc(uVar8,*puVar17);
                    *(float *)(param_1 + lVar6 * 0x28 + 0x5c) = 1.0 - fVar18 / fVar19;
                    goto LAB_1000c4724;
                  }
                }
              }
            }
            lVar6 = param_1 + lVar6 * 0x28;
            *(undefined4 *)(lVar6 + 0x5c) = 0;
            *(undefined4 *)(lVar6 + 0x60) = 0;
          }
LAB_1000c4724:
          iVar13 = iVar13 + 1;
        }
        uVar15 = uVar15 + 1;
      }
      lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      lVar6 = *(long *)(lVar6 + 0x40);
      fVar18 = *(float *)(lVar6 + 0xd8) +
               *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0);
      NEON_fminnm(fVar18 + fVar18 * *(float *)(lVar6 + 0x240),DAT_101dc6260);
      uVar15 = (uint)DAT_101dc61a0;
      if (((uint)(*puVar1 >> 0x2c) & 0xf) != uVar15) {
        FUN_1000d5e24(DAT_101dc61a0,DAT_101dc61a0,DAT_101dc6260,0x3f800000,
                      *(undefined8 *)(param_1 + 8),uVar15);
        *puVar1 = *puVar1 & 0xffff000000000000 |
                  *puVar1 & 0xfffffffffff | (ulong)(uVar15 & 0xf) << 0x2c;
      }
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 == (long *)0x0) {
        uVar8 = 0;
      }
      else if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
        uVar8 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        uVar8 = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
      }
      uVar9 = FUN_1003e10f0();
      uVar8 = FUN_100490590(uVar8,uVar9);
      if ((float)uVar8 != *(float *)(param_1 + 0x144)) {
        FUN_1000d5e6c(uVar8,*(undefined8 *)(param_1 + 8));
        *(float *)(param_1 + 0x144) = (float)uVar8;
      }
      if ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        uVar8 = FUN_1000c3c70();
        (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        iVar13 = FUN_1000c4cc8();
        *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
        bVar14 = 0x10;
        if (iVar13 == 0) {
          bVar14 = 0;
        }
        *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xef | bVar14;
        if (((int)uVar8 < 0) || (iVar13 == 0)) {
          fVar18 = 0.0;
          FUN_1000d60c0(0,*(undefined8 *)(param_1 + 8));
        }
        else {
          lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          lVar6 = *(long *)(lVar6 + 0x18);
          while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dab8))) {
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          FUN_1000d60c0(0x3f800000,*(undefined8 *)(param_1 + 8));
          fVar18 = (float)FUN_1003bf0ac(lVar6,uVar8);
          *(float *)(param_1 + 0x138) = fVar18;
          fVar19 = (float)FUN_1003bf074(lVar6,uVar8);
          fVar18 = 1.0 - fVar18 / fVar19;
        }
        *(float *)(param_1 + 0x134) = fVar18;
      }
      (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      uVar8 = FUN_1003e2814();
      iVar13 = FUN_1003a2f18(uVar8,DAT_101d3ea3c,0);
      puVar16 = (undefined2 *)(param_1 + 0x150);
      *puVar16 = *puVar16;
      bVar14 = 0x20;
      if (iVar13 == 0) {
        bVar14 = 0;
      }
      *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xdf | bVar14;
      iVar13 = FUN_1003a2f18(uVar8,DAT_101d3ea40,0);
      *puVar16 = *puVar16;
      bVar14 = 0x40;
      if (iVar13 == 0) {
        bVar14 = 0;
      }
      *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xbf | bVar14;
      lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(*(long *)(lVar6 + 0x40) + 0x340);
    }
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
    lVar6 = (**(code **)(*plVar5 + 0x10))();
    if (lVar6 == 0) {
      return;
    }
    if ((((*(byte *)(param_1 + 0x152) & 1) == 0) && (uVar7 = FUN_10034cb58(), (uVar7 & 1) == 0)) &&
       ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) != 0)) {
      lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      if ((*(byte *)(lVar6 + 0x2fc) & 0x1f) == 0) {
        return;
      }
      lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
      if (((int)uVar7 != 0x1f) && (*(ushort *)(lVar6 + uVar7 * 0x38 + 0x90) - 3 < 2)) {
        return;
      }
    }
    lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    lVar6 = *(long *)(lVar6 + 0x18);
    while( true ) {
      if (lVar6 == 0) {
        return;
      }
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184dea0) break;
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    lVar6 = FUN_100464be4();
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x40) == *(int *)(param_1 + 0x13c)) {
        return;
      }
      FUN_1000d6464(*(undefined8 *)(param_1 + 8),1);
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(lVar6 + 0x40);
      *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
      *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) | 0x80;
      lVar10 = FUN_1003e000c(lVar6);
      lVar11 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      uVar15 = *(int *)(lVar10 + 0x18) - 1;
      if (uVar15 < 3) {
        pcVar12 = (&PTR_s_rare_1014548c8)[(int)uVar15];
      }
      else {
        pcVar12 = "";
      }
      FUN_1000d63ac(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20),
                    *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x58),*(undefined8 *)(lVar10 + 0x10),
                    pcVar12);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = FUN_1003e0014(lVar6);
      FUN_1000d64c0(uVar9,uVar8);
      FUN_1000d6530(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar10 + 0x18));
      return;
    }
    FUN_10034cb1c(local_68,0);
    if (*(int *)(param_1 + 0x13c) != local_68[0]) {
      return;
    }
    FUN_1000d6464(*(undefined8 *)(param_1 + 8),0);
    *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
    *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0x7f;
    FUN_1003a4e5c(param_1 + 0x13c,0);
    return;
  }
LAB_1000c4b58:
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
  return;
}




bool FUN_1000c4cc8(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  iVar2 = FUN_1000c3c70();
  bVar1 = false;
  if ((lVar3 != 0) && (-1 < iVar2)) {
    iVar2 = FUN_1003a4970(lVar3);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




void FUN_1000c4d2c(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar8 = 0;
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
  *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xfe | param_2 != 0;
  lVar2 = *(long *)(param_1 + 8);
  *(char *)(lVar2 + 0x922d) = (char)param_2;
  do {
    FUN_1000d6210(lVar2,iVar8,0);
    iVar8 = iVar8 + 1;
    lVar2 = *(long *)(param_1 + 8);
  } while (iVar8 != 10);
  FUN_1000d6068(lVar2,0,1);
  if ((param_2 & 1) != 0) {
    FUN_1003467f8();
    uVar3 = FUN_10034cf60();
    if ((((uVar3 & 1) == 0) && ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) != 0)) &&
       (plVar4 = *(long **)(param_1 + 0x18), plVar4 != (long *)0x0)) {
      if (*(int *)(param_1 + 0x20) == (int)plVar4[1]) {
        lVar2 = (**(code **)(*plVar4 + 0x10))();
        if (lVar2 != 0) {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
          uVar1 = *(undefined4 *)(lVar2 + 0x260);
          uVar7 = *(undefined8 *)(param_1 + 8);
          uVar5 = FUN_10034e938(uVar1);
          uVar6 = FUN_10034e988(uVar1);
          FUN_1000d6304(uVar7,uVar5,uVar6);
          return;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
      }
    }
  }
  return;
}




void FUN_1000c4e60(long param_1,uint param_2)

{
  FUN_1000d655c(*(undefined8 *)(param_1 + 8),param_2 ^ 1);
  return;
}




void FUN_1000c4e6c(long param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
  bVar1 = 4;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  bVar2 = 8;
  if (param_3 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x152) = bVar2 | bVar1 | *(byte *)(param_1 + 0x152) & 0xf3;
  FUN_1000d65f8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c4eb0(long param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x28;
  piVar2 = (int *)(lVar1 + 0x58);
  piVar3 = (int *)(lVar1 + 0x44);
  if (*piVar3 != *piVar2) {
    lVar1 = FUN_1000c4f9c();
    FUN_1000d626c(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(lVar1 + 8));
    *piVar3 = *piVar2;
  }
  return;
}




void FUN_1000c4f14(long param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  short *psVar4;
  
  lVar3 = param_1 + (param_2 & 0xffffffff) * 0x28;
  psVar4 = (short *)(lVar3 + 0x50);
  iVar2 = (int)(*(float *)(lVar3 + 0x60) + 0.99);
  if (*psVar4 != iVar2) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (0 < iVar2) {
      FUN_1000d61a8(uVar1,param_2,iVar2);
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    FUN_1000d6210(uVar1,param_2,0 < iVar2);
    *psVar4 = (short)iVar2;
  }
  return;
}




undefined8 FUN_1000c4f9c(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  param_2 = param_2 & 0xffffffff;
  plVar2 = *(long **)(param_1 + 0x28);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  puVar4 = (undefined4 *)(param_1 + param_2 * 0x28 + 0x58);
  iVar1 = FUN_1003d77ec(uVar3,*puVar4);
  if (iVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
      }
    }
    uVar3 = FUN_10044d88c(uVar3,*puVar4);
    return uVar3;
  }
  lVar5 = param_1 + param_2 * 0x28;
  piVar6 = (int *)(lVar5 + 0x40);
  piVar7 = (int *)(lVar5 + 0x54);
  if (*piVar6 == *piVar7) {
    uVar3 = *(undefined8 *)(param_1 + param_2 * 0x28 + 0x48);
  }
  else {
    uVar3 = FUN_100345b94();
    uVar3 = FUN_10034e548(uVar3,*piVar7);
    *(undefined8 *)(param_1 + param_2 * 0x28 + 0x48) = uVar3;
    *piVar6 = *piVar7;
  }
  return uVar3;
}




undefined8 FUN_1000c50b8(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x28);
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) != (int)plVar2[1]) {
LAB_1000c5198:
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
            return 0;
          }
          (**(code **)(*plVar2 + 0x10))();
          plVar2 = *(long **)(param_1 + 0x28);
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) != (int)plVar2[1]) goto LAB_1000c5198;
            lVar3 = (**(code **)(*plVar2 + 0x10))();
            if (lVar3 != 0) {
              plVar2 = *(long **)(param_1 + 0x28);
              uVar4 = 0;
              if (plVar2 != (long *)0x0) {
                if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
                  uVar4 = (**(code **)(*plVar2 + 0x10))();
                }
                else {
                  uVar4 = 0;
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
                }
              }
              uVar1 = FUN_1003e1b24(uVar4);
              if (((uint)param_2 < uVar1) &&
                 (*(int *)(param_1 + (long)(int)(uint)param_2 * 0x28 + 0x58) != -1)) {
                uVar4 = FUN_1000c4f9c(param_1,param_2);
                uVar5 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_TAP");
                FUN_100644aec(auStack_40,uVar5,uVar4);
                FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
                uVar4 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
                FUN_100644aec(auStack_60,uVar4,*(undefined1 *)(param_1 + 0x3c));
                FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_60,1);
                return 1;
              }
            }
          }
        }
        return 0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
    }
  }
  return 1;
}




undefined8 FUN_1000c5274(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x28);
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) != (int)plVar2[1]) {
LAB_1000c5354:
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
            return 0;
          }
          (**(code **)(*plVar2 + 0x10))();
          plVar2 = *(long **)(param_1 + 0x28);
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) != (int)plVar2[1]) goto LAB_1000c5354;
            lVar3 = (**(code **)(*plVar2 + 0x10))();
            if (lVar3 != 0) {
              plVar2 = *(long **)(param_1 + 0x28);
              uVar4 = 0;
              if (plVar2 != (long *)0x0) {
                if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
                  uVar4 = (**(code **)(*plVar2 + 0x10))();
                }
                else {
                  uVar4 = 0;
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
                }
              }
              uVar1 = FUN_1003e1b24(uVar4);
              if (((uint)param_2 < uVar1) &&
                 (*(int *)(param_1 + (long)(int)(uint)param_2 * 0x28 + 0x58) != -1)) {
                uVar4 = FUN_1000c4f9c(param_1,param_2);
                uVar5 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_HOVER");
                FUN_100644aec(auStack_40,uVar5,uVar4);
                FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
                uVar4 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
                FUN_100644aec(auStack_60,uVar4,*(undefined1 *)(param_1 + 0x3c));
                FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_60,1);
                return 1;
              }
            }
          }
        }
        return 0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
    }
  }
  return 1;
}




undefined8 FUN_1000c5430(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x28);
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
            (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
          }
        }
        uVar3 = FUN_100644a94("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
        FUN_100644aec(auStack_40,uVar3,0);
        FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
        uVar3 = FUN_100644a94("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP_SIDE");
        FUN_100644aec(auStack_60,uVar3,*(undefined1 *)(param_1 + 0x3c));
        FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_60,1);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
    }
  }
  return 1;
}




void FUN_1000c552c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  FUN_100490260();
  lVar1 = FUN_100464be4();
  if (lVar1 != 0) {
    uVar2 = FUN_100644a94("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_TAP");
    FUN_100644aec(auStack_40,uVar2,lVar1);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
    uVar2 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
    FUN_100644aec(auStack_60,uVar2,*(undefined1 *)(param_1 + 0x3c));
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_60,1);
  }
  return;
}




void FUN_1000c55c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  FUN_100490260();
  lVar1 = FUN_100464be4();
  if (lVar1 != 0) {
    uVar2 = FUN_100644a94("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_HOVER");
    FUN_100644aec(auStack_40,uVar2,lVar1);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
    uVar2 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
    FUN_100644aec(auStack_60,uVar2,*(undefined1 *)(param_1 + 0x3c));
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_60,1);
  }
  return;
}




void FUN_1000c5664(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_HUD_HIDE_TALENT_TOOLTIP");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  uVar1 = FUN_100644a94("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP_SIDE");
  FUN_100644aec(auStack_60,uVar1,*(undefined1 *)(param_1 + 0x3c));
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_60,1);
  return;
}




void FUN_1000c56e0(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x8000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0x150) = *(ushort *)(param_1 + 0x150) & 0x7fff | uVar1;
  *(undefined1 *)(param_1 + 0x152) = *(undefined1 *)(param_1 + 0x152);
  return;
}




void FUN_1000c5710(long param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_40 [32];
  
  if (param_2 == 0) {
    uVar1 = FUN_100644a94("EVENT_CLEAR_REPORT");
    FUN_1000c3bf4(param_1);
    uVar2 = FUN_10034e42c();
  }
  else {
    uVar1 = FUN_100644a94("EVENT_SELECT_THUMBS_UP");
    uVar2 = FUN_1000c3bf4(param_1);
    uVar2 = uVar2 & 0xffffffff;
  }
  FUN_100644aec(auStack_40,uVar1,uVar2);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_1000c5794(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_40 [32];
  
  if (param_2 == 0) {
    uVar1 = FUN_100644a94("EVENT_CLEAR_REPORT");
    FUN_1000c3bf4(param_1);
    uVar3 = FUN_10034e42c();
  }
  else {
    uVar1 = FUN_100644a94("EVENT_SELECT_THUMBS_DOWN");
    lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar3 = (ulong)*(uint *)(lVar2 + 0x260);
  }
  FUN_100644aec(auStack_40,uVar1,uVar3);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_1000c5820(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 **local_68;
  void *local_60;
  char local_51;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar1 = FUN_10005fe04();
  if (lVar1 != 0) {
    uVar2 = FUN_10005fe04();
    uVar3 = FUN_1000c3bf4(param_1);
    FUN_1000603d4(uVar2,uVar3,param_2);
  }
  lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar2 = FUN_10034e42c(*(undefined4 *)(lVar1 + 0x260));
  thunk_FUN_1004e439c(auStack_40,uVar2);
  FUN_1004e313c(auStack_50);
  if ((int)param_2 == 0) {
    FUN_10010a678(auStack_40);
    pcVar4 = "MENU_CHAT_PLAYER_UNMUTED";
  }
  else {
    FUN_10010a660();
    pcVar4 = "MENU_CHAT_PLAYER_MUTED";
  }
  uVar2 = FUN_1004e0150(pcVar4,0);
  FUN_1000153b4(auStack_50,uVar2);
  FUN_1004e3120(&local_68,"[PLAYER_NAME]");
  FUN_1004e3bc4(auStack_50,0,&local_68,auStack_40);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_10034ee90();
  FUN_100345d90();
  FUN_100345bbc();
  FUN_10010a578(&local_68);
  if (local_51 < '\0') {
    pppuVar5 = (undefined8 ***)local_68;
    if (local_60 != (void *)0x0) goto LAB_1000c592c;
  }
  else {
    if (local_51 == '\0') goto LAB_1000c5944;
    pppuVar5 = &local_68;
LAB_1000c592c:
    FUN_10010a794(pppuVar5,auStack_50);
    if (-1 < local_51) goto LAB_1000c5944;
  }
  operator_delete(local_68);
LAB_1000c5944:
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1000c5970(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [8];
  void *local_40;
  undefined4 local_38;
  byte local_34;
  
  FUN_1000c3bf4();
  uVar2 = FUN_10034e42c();
  bVar1 = *(byte *)(param_1 + 0x152);
  thunk_FUN_1004e439c(auStack_48,uVar2);
  local_38 = param_2;
  local_34 = (bVar1 >> 1 ^ 0xff) & 1;
  uVar2 = FUN_100644a94("EVENT_SELECT_NEGATIVE_REPORT");
  FUN_100644aec(auStack_68,uVar2,auStack_48);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_68,1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  return;
}




void FUN_1000c5a00(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1000c5a0c(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_1000c5a38(void)

{
  if ((DAT_10184dea8 & 1) == 0) {
    DAT_10184dea0 = DAT_101872e38;
    DAT_10184dea8 = 1;
  }
  return;
}




void FUN_1000c5a64(void)

{
  if ((DAT_10184e118 & 1) == 0) {
    DAT_10184e110 = DAT_101872e38;
    DAT_10184e118 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c5a90(void)

{
  DAT_101dc60f0 = 0xff;
  DAT_101dc60f2 = 0xffff;
  DAT_101dc60f4 = 0xffff;
  uRam0000000101dc61c8 = 0x7f7fffff7f7fffff;
  _DAT_101dc61c0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc61d8 = 0x7f7fffff7f7fffff;
  _DAT_101dc61d0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc61e8 = 0x7f7fffff7f7fffff;
  _DAT_101dc61e0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc61f8 = 0x7f7fffff7f7fffff;
  _DAT_101dc61f0 = 0x7f7fffff7f7fffff;
  DAT_101dc6200 = 0x7f7fffff;
  DAT_101dc6204 = 0x7f7fffff;
  DAT_101dc6208 = 0x7f7fffff;
  DAT_101dc620c = 0x3f800000;
  uRam0000000101dc6218 = 0x7f7fffff7f7fffff;
  _DAT_101dc6210 = 0x7f7fffff7f7fffff;
  DAT_101dc6220 = 0x7f7fffff;
  DAT_101dc6224 = 0x3eb33333;
  uRam0000000101dc6230 = 0x7f7fffff7f7fffff;
  _DAT_101dc6228 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6240 = 0x7f7fffff7f7fffff;
  _DAT_101dc6238 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6250 = 0x7f7fffff7f7fffff;
  _DAT_101dc6248 = 0x7f7fffff7f7fffff;
  _DAT_101dc6260 = 0x7f7fffff7f7fffff;
  _DAT_101dc6258 = 0x7f7fffff7f7fffff;
  DAT_101dc6268 = 0x7f7fffff;
  DAT_101dc626c = 0x7f7fffff;
  DAT_101dc6270 = 0x7f7fffff;
  uRam0000000101dc6108 = 0xff7fffffff7fffff;
  _DAT_101dc6100 = 0xff7fffffff7fffff;
  DAT_101dc6110 = 0;
  DAT_101dc6118 = 0;
  uRam0000000101dc6124 = 0xff7fffffff7fffff;
  _DAT_101dc611c = 0xff7fffffff7fffff;
  DAT_101dc612c = 0xff7fffff;
  DAT_101dc6130 = 0xff7fffff;
  DAT_101dc6134 = NEON_fmov(0xbf800000,4);
  DAT_101dc613c = 0x3f000000;
  DAT_101dc6140 = 0;
  DAT_101dc6148 = 0;
  uRam0000000101dc6158 = 0xff7fffffff7fffff;
  _DAT_101dc6150 = 0xff7fffffff7fffff;
  uRam0000000101dc6168 = 0xff7fffffff7fffff;
  _DAT_101dc6160 = 0xff7fffffff7fffff;
  uRam0000000101dc6178 = 0xff7fffffff7fffff;
  _DAT_101dc6170 = 0xff7fffffff7fffff;
  uRam0000000101dc6188 = 0xbf800000bf800000;
  _DAT_101dc6180 = 0xbf80000000000000;
  DAT_101dc6190 = 0xbf800000;
  DAT_101dc6194 = 0xff7fffff;
  DAT_101dc6198 = 0xff7fffff;
  DAT_101dc619c = 0xff7fffff;
  DAT_101dc61a0 = 0;
  DAT_101dc61a4 = 0xff7fffff;
  DAT_101dc61a8 = 0;
  DAT_101dc61b0 = 0;
  return;
}




undefined8 * FUN_1000c5b8c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101454918;
  operator_new(0x11a0);
  lVar1 = thunk_FUN_1000dc498();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_1014548f0;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_1000c5bdc(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454918;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c5c20(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454918;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000c5c60(long param_1)

{
  FUN_1000dc79c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c5c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,param_2);
  FUN_1000dc974(*(undefined8 *)(param_1 + 8),uVar1);
  FUN_100094bd4(0,1);
  FUN_100027a90(1);
  return;
}




void FUN_1000c5cb8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1000dcab0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000c5cc4(long param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_100094bd4(0,0);
  FUN_100027a90(0);
  return;
}




undefined8 FUN_1000c5d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined8 * FUN_1000c5d10(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_101454960;
  operator_new(0x530);
  plVar1 = (long *)thunk_FUN_1000dd488();
  plVar1[0x19] = (long)param_1;
  *param_1 = &PTR_FUN_101454940;
  param_1[1] = plVar1;
  (**(code **)(*plVar1 + 0x138))(0,plVar1,0,4,1);
  return param_1;
}




undefined8 * thunk_FUN_1000c5d10(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_101454960;
  operator_new(0x530);
  plVar1 = (long *)thunk_FUN_1000dd488();
  plVar1[0x19] = (long)param_1;
  *param_1 = &PTR_FUN_101454940;
  param_1[1] = plVar1;
  (**(code **)(*plVar1 + 0x138))(0,plVar1,0,4,1);
  return param_1;
}




undefined8 * FUN_1000c5d78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454960;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c5dbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454960;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000c5dfc(long param_1)

{
  FUN_1000dd964(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001000c5e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0,*(long **)(param_1 + 8),1,4,1);
  return;
}




void FUN_1000c5e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000c5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0,*(long **)(param_1 + 8),0,4,1);
  return;
}




undefined8 * FUN_1000c5e5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454960;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000c5ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454960;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1000c5ee0(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 6) = 6;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = DAT_101dc0b88;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  pcStack_28 = thunk_FUN_1000c6d08;
  local_30 = param_1;
  FUN_100643618(0,&local_30,0,1);
  return param_1;
}




undefined8 * thunk_FUN_1000c5ee0(undefined8 *param_1)

{
  undefined8 *puStack_30;
  code *pcStack_28;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 6) = 6;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = DAT_101dc0b88;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  pcStack_28 = thunk_FUN_1000c6d08;
  puStack_30 = param_1;
  FUN_100643618(0,&puStack_30,0,1);
  return param_1;
}




undefined8 * FUN_1000c5f68(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  pcStack_28 = thunk_FUN_1000c6d08;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
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
  return param_1;
}




undefined8 * thunk_FUN_1000c5f68(undefined8 *param_1)

{
  undefined8 *puStack_30;
  code *pcStack_28;
  
  pcStack_28 = thunk_FUN_1000c6d08;
  puStack_30 = param_1;
  FUN_100643a8c(&puStack_30);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
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
  return param_1;
}




void FUN_1000c5fd8(long param_1,int param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(long *)(param_1 + 0x40) = param_3 + 0x28;
  FUN_1003a7540(param_3);
  if (param_2 == 0) {
    lVar1 = FUN_100460e78();
    uVar2 = *(undefined4 *)(lVar1 + 0x48);
  }
  else if (param_2 == 1) {
    lVar1 = FUN_100460e78();
    uVar2 = *(undefined4 *)(lVar1 + 0x4c);
  }
  else {
    if (param_2 != 2) {
      uVar2 = *(undefined4 *)(param_1 + 0x5c);
      goto LAB_1000c6048;
    }
    lVar1 = FUN_100460e78();
    uVar2 = *(undefined4 *)(lVar1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
LAB_1000c6048:
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}




void FUN_1000c6058(long param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 100) = param_3;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = param_5;
  *(long *)(param_1 + 0x40) = param_4 + 0x28;
  return;
}




void FUN_1000c6078(long param_1,undefined4 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20);
  }
  return;
}




undefined4 FUN_1000c60d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




void FUN_1000c60dc(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x48);
  return;
}




undefined4 FUN_1000c60f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




undefined4 FUN_1000c60f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




undefined4 FUN_1000c6100(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}




void FUN_1000c6108(long param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
  uVar1 = FUN_100490234();
  FUN_10046e258(uVar1,*(undefined4 *)(param_1 + 100));
  return;
}




char * FUN_1000c613c(void)

{
  return "icon_item_empty";
}




void FUN_1000c6148(long param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
  uVar1 = FUN_1003a7540();
  FUN_100461330(uVar1,*(undefined4 *)(param_1 + 0x5c));
  return;
}




undefined4 FUN_1000c617c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined8 FUN_1000c6184(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
        uVar3 = FUN_1003a7540();
        uVar3 = FUN_1003a4970(uVar3,*(undefined4 *)(param_1 + 0x58));
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return 0;
}




undefined1  [16] FUN_1000c620c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_100490234();
          FUN_10043da00(uVar3,*(undefined4 *)(param_1 + 100));
          auVar5._4_4_ = extraout_var_00;
          auVar5._0_4_ = extraout_s0_00;
          auVar5._8_8_ = extraout_var_02;
          return auVar5;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_1003a7540();
          FUN_1003bf0ac(uVar3,*(undefined4 *)(param_1 + 0x5c));
          auVar4._4_4_ = extraout_var;
          auVar4._0_4_ = extraout_s0;
          auVar4._8_8_ = extraout_var_01;
          return auVar4;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_1000c62c0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_100490234();
          FUN_10046e344(uVar3,*(undefined4 *)(param_1 + 100));
          auVar5._4_4_ = extraout_var_00;
          auVar5._0_4_ = extraout_s0_00;
          auVar5._8_8_ = extraout_var_02;
          return auVar5;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_1003a7540();
          FUN_1004613c0(uVar3,*(undefined4 *)(param_1 + 0x5c));
          auVar4._4_4_ = extraout_var;
          auVar4._0_4_ = extraout_s0;
          auVar4._8_8_ = extraout_var_01;
          return auVar4;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_1000c6374(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_100490234();
          FUN_10046e5cc(uVar3,*(undefined4 *)(param_1 + 100));
          auVar5._4_4_ = extraout_var_00;
          auVar5._0_4_ = extraout_s0_00;
          auVar5._8_8_ = extraout_var_02;
          return auVar5;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_1003a7540();
          FUN_100461390(uVar3,*(undefined4 *)(param_1 + 0x5c));
          auVar4._4_4_ = extraout_var;
          auVar4._0_4_ = extraout_s0;
          auVar4._8_8_ = extraout_var_01;
          return auVar4;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return ZEXT816(0);
}




undefined8 FUN_1000c6428(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar4 = FUN_100490234();
          iVar1 = FUN_10046e45c(uVar4,*(undefined4 *)(param_1 + 100));
          if (iVar1 != 0) {
            uVar4 = FUN_10046e308(uVar4);
            return uVar4;
          }
          uVar4 = FUN_10046e2b4(uVar4,*(undefined4 *)(param_1 + 100));
          return uVar4;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar4 = FUN_1003a7540();
          uVar4 = FUN_1003b2a7c(uVar4,*(undefined4 *)(param_1 + 0x5c));
          return uVar4;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return 0;
}




ulong FUN_1000c6500(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  plVar2 = *(long **)(param_1 + 0x40);
  uVar5 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      uVar5 = 0;
      if (lVar3 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar4 = FUN_100490234();
          uVar5 = FUN_10046e45c(uVar4,*(undefined4 *)(param_1 + 100));
          return uVar5;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar4 = FUN_1003a7540();
          uVar1 = FUN_1003b2aa0(uVar4,*(undefined4 *)(param_1 + 0x5c));
          uVar5 = (ulong)(1 < uVar1);
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return uVar5;
}




undefined8 FUN_1000c65c0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_100490234();
          uVar3 = FUN_10046e694(uVar3,*(undefined4 *)(param_1 + 100));
          return uVar3;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_1003a7540();
          uVar3 = FUN_100461470(uVar3,*(undefined4 *)(param_1 + 0x5c));
          return uVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return 4;
}




ulong FUN_1000c6674(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
        uVar4 = FUN_1003a7540();
        uVar5 = FUN_1003e11f8(uVar4,*(undefined4 *)(param_1 + 0x58));
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        lVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
        lVar3 = *(long *)(lVar3 + 0x40);
        fVar6 = *(float *)(lVar3 + 0xac) +
                *(float *)(lVar3 + 0x160) * (*(float *)(lVar3 + 0x2c8) + 1.0);
        NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x214),DAT_101dc63b4);
        if (1.0 <= DAT_101dc62f4) {
          lVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                            (DAT_101dc62f4,DAT_101dc62f4,DAT_101dc63b4);
          lVar3 = *(long *)(lVar3 + 0x40);
          fVar6 = *(float *)(lVar3 + 0xd8) +
                  *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0);
          fVar7 = (float)NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x240),DAT_101dc63e0);
          fVar6 = DAT_101dc6320;
          if (DAT_101dc6320 <= fVar7) {
            fVar6 = fVar7;
          }
          uVar1 = FUN_1003d9e44(uVar4,*(undefined4 *)(param_1 + 0x58));
          return (ulong)((float)uVar1 <= fVar6);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return 0;
}




bool FUN_1000c67c4(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x40);
  bVar1 = false;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      bVar1 = false;
      if (lVar4 != 0) {
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          FUN_1003de46c();
          iVar2 = FUN_1004708c8();
          bVar1 = iVar2 == *(int *)(param_1 + 0x58);
        }
        else {
          bVar1 = false;
        }
      }
    }
    else {
      bVar1 = false;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return bVar1;
}




bool FUN_1000c6858(void)

{
  int iVar1;
  
  iVar1 = FUN_1000c6874();
  return iVar1 == 0;
}




undefined8 FUN_1000c6874(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_100490234();
          uVar3 = FUN_10046e740(uVar3,*(undefined4 *)(param_1 + 100));
          return uVar3;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar3 = FUN_1003a7540();
          uVar3 = FUN_100461350(uVar3,*(undefined4 *)(param_1 + 0x5c));
          return uVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return 0x400;
}




bool FUN_1000c6928(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  uVar2 = FUN_1000c6874();
  if (uVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar3 = FUN_1000c65c0(param_1);
    iVar4 = FUN_100060a70();
    bVar1 = false;
    if ((((iVar4 != 0) && (iVar3 - 1U < 3)) && (bVar1 = false, (uVar2 & 0x444) != 0)) &&
       ((uVar2 & 0xfffffbbb) == 0)) {
      fVar5 = (float)FUN_1000c620c(param_1);
      bVar1 = fVar5 <= 99999.0;
    }
  }
  return bVar1;
}




bool FUN_1000c69bc(void)

{
  uint uVar1;
  
  uVar1 = FUN_1000c6874();
  return (uVar1 & 0x280) != 0;
}




uint FUN_1000c69dc(void)

{
  uint uVar1;
  
  uVar1 = FUN_1000c6874();
  return uVar1 >> 8 & 1;
}




uint FUN_1000c69f4(void)

{
  uint uVar1;
  
  uVar1 = FUN_1000c6874();
  return uVar1 >> 3 & 1;
}




undefined1  [16] FUN_1000c6a0c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
        uVar3 = FUN_1003a7540();
        FUN_1003e118c(uVar3,*(undefined4 *)(param_1 + 0x5c));
        auVar4._4_4_ = extraout_var;
        auVar4._0_4_ = extraout_s0;
        auVar4._8_8_ = extraout_var_00;
        return auVar4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_1000c6a94(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
        uVar3 = FUN_1003a7540();
        FUN_1003e11c0(uVar3,*(undefined4 *)(param_1 + 0x5c));
        auVar4._4_4_ = extraout_var;
        auVar4._0_4_ = extraout_s0;
        auVar4._8_8_ = extraout_var_00;
        return auVar4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return ZEXT816(0);
}




float FUN_1000c6b1c(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = *(long **)(param_1 + 0x40);
  fVar3 = 0.0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        fVar3 = (float)FUN_1000c6a0c(param_1);
        fVar4 = (float)FUN_1000c6a94(param_1);
        if (fVar3 <= 0.0) {
          fVar3 = 1.0;
          if (0.0 < fVar4) {
            lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
            fVar3 = *(float *)(*(long *)(lVar2 + 0x40) + 0x314) / fVar4;
          }
        }
        else {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          fVar3 = *(float *)(*(long *)(lVar2 + 0x40) + 0x310) / fVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return fVar3;
}




void FUN_1000c6bf0(long param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
  uVar1 = FUN_1003a7540();
  FUN_1003c1b18(uVar1,*(undefined4 *)(param_1 + 0x58));
  return;
}




undefined8 FUN_1000c6c24(long param_1)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_1000c6928();
  if ((int)uVar1 != 0) {
    if (*(int *)(param_1 + 0x50) == 1) {
      uVar1 = FUN_100061db0();
      FUN_10005edfc(local_38,*(undefined4 *)(param_1 + 0x60));
    }
    else {
      if (*(int *)(param_1 + 0x50) != 0) {
        return 0;
      }
      uVar1 = FUN_100061db0();
      FUN_10005edd4(local_38,*(undefined4 *)(param_1 + 0x54));
    }
    local_38[0] = &PTR_FUN_10144d690;
    local_24 = 0;
    uVar1 = FUN_10005f394(uVar1,local_38);
  }
  return uVar1;
}




undefined8 FUN_1000c6cb4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_100061db0();
    FUN_10005ef64(auStack_30,*(undefined4 *)(param_1 + 0x54));
    uVar1 = FUN_10005f394(uVar1,auStack_30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1000c6d08(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    if (param_1[0x12] == *(uint *)(plVar4 + 1)) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        uVar2 = FUN_1000c6874(param_1);
        if (param_1[0x14] == 0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
          uVar6 = FUN_1003a7540();
          iVar3 = FUN_1003a4970(uVar6,param_1[0x17]);
          if (iVar3 == 0) {
            if (param_1[0xc] == 0) {
              return;
            }
            param_1[0xc] = 0;
            if (*param_1 == 0) {
              return;
            }
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            return;
          }
        }
        if ((uVar2 & 0x388) == 0) {
          if ((uVar2 >> 2 & 1) == 0) {
            if ((uVar2 & 0x460) == 0) {
              uVar1 = param_1[0xc];
              if ((uVar2 >> 1 & 1) == 0) {
                if (1 < uVar1 - 1) {
                  if ((uVar1 == 4) && (param_1[4] != 0)) {
                    lVar5 = *(long *)(param_1 + 6);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 6) + (ulong)param_1[4] * 0x20);
                  }
                  param_1[0xc] = 1;
                  if (*param_1 != 0) {
                    lVar5 = *(long *)(param_1 + 2);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
                  }
                }
              }
              else if ((uVar1 != 3) && (param_1[0xc] = 3, *param_1 != 0)) {
                lVar5 = *(long *)(param_1 + 2);
                do {
                  if (*(code **)(lVar5 + 8) == (code *)0x0) {
                    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                  }
                  else {
                    (**(code **)(lVar5 + 8))();
                  }
                  lVar5 = lVar5 + 0x20;
                } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
              }
            }
            else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
              lVar5 = *(long *)(param_1 + 2);
              do {
                if (*(code **)(lVar5 + 8) == (code *)0x0) {
                  (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                }
                else {
                  (**(code **)(lVar5 + 8))();
                }
                lVar5 = lVar5 + 0x20;
              } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            }
          }
          else if ((param_1[0xc] != 4) && (param_1[0xc] = 4, *param_1 != 0)) {
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
          }
        }
        else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
          lVar5 = *(long *)(param_1 + 2);
          do {
            if (*(code **)(lVar5 + 8) == (code *)0x0) {
              (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
            }
            else {
              (**(code **)(lVar5 + 8))();
            }
            lVar5 = lVar5 + 0x20;
          } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
        }
      }
    }
    else {
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = DAT_101dc0b88;
    }
  }
  return;
}




void thunk_FUN_1000c6d08(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    if (param_1[0x12] == *(uint *)(plVar4 + 1)) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        uVar2 = FUN_1000c6874(param_1);
        if (param_1[0x14] == 0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
          uVar6 = FUN_1003a7540();
          iVar3 = FUN_1003a4970(uVar6,param_1[0x17]);
          if (iVar3 == 0) {
            if (param_1[0xc] == 0) {
              return;
            }
            param_1[0xc] = 0;
            if (*param_1 == 0) {
              return;
            }
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            return;
          }
        }
        if ((uVar2 & 0x388) == 0) {
          if ((uVar2 >> 2 & 1) == 0) {
            if ((uVar2 & 0x460) == 0) {
              uVar1 = param_1[0xc];
              if ((uVar2 >> 1 & 1) == 0) {
                if (1 < uVar1 - 1) {
                  if ((uVar1 == 4) && (param_1[4] != 0)) {
                    lVar5 = *(long *)(param_1 + 6);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 6) + (ulong)param_1[4] * 0x20);
                  }
                  param_1[0xc] = 1;
                  if (*param_1 != 0) {
                    lVar5 = *(long *)(param_1 + 2);
                    do {
                      if (*(code **)(lVar5 + 8) == (code *)0x0) {
                        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                      }
                      else {
                        (**(code **)(lVar5 + 8))();
                      }
                      lVar5 = lVar5 + 0x20;
                    } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
                  }
                }
              }
              else if ((uVar1 != 3) && (param_1[0xc] = 3, *param_1 != 0)) {
                lVar5 = *(long *)(param_1 + 2);
                do {
                  if (*(code **)(lVar5 + 8) == (code *)0x0) {
                    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                  }
                  else {
                    (**(code **)(lVar5 + 8))();
                  }
                  lVar5 = lVar5 + 0x20;
                } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
              }
            }
            else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
              lVar5 = *(long *)(param_1 + 2);
              do {
                if (*(code **)(lVar5 + 8) == (code *)0x0) {
                  (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
                }
                else {
                  (**(code **)(lVar5 + 8))();
                }
                lVar5 = lVar5 + 0x20;
              } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
            }
          }
          else if ((param_1[0xc] != 4) && (param_1[0xc] = 4, *param_1 != 0)) {
            lVar5 = *(long *)(param_1 + 2);
            do {
              if (*(code **)(lVar5 + 8) == (code *)0x0) {
                (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
              }
              else {
                (**(code **)(lVar5 + 8))();
              }
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
          }
        }
        else if ((param_1[0xc] != 5) && (param_1[0xc] = 5, *param_1 != 0)) {
          lVar5 = *(long *)(param_1 + 2);
          do {
            if (*(code **)(lVar5 + 8) == (code *)0x0) {
              (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
            }
            else {
              (**(code **)(lVar5 + 8))();
            }
            lVar5 = lVar5 + 0x20;
          } while (lVar5 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
        }
      }
    }
    else {
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = DAT_101dc0b88;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c6fec(void)

{
  uRam0000000101dc6348 = 0x7f7fffff7f7fffff;
  _DAT_101dc6340 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6358 = 0x7f7fffff7f7fffff;
  _DAT_101dc6350 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6368 = 0x7f7fffff7f7fffff;
  _DAT_101dc6360 = 0x7f7fffff7f7fffff;
  uRam0000000101dc6378 = 0x7f7fffff7f7fffff;
  _DAT_101dc6370 = 0x7f7fffff7f7fffff;
  DAT_101dc6380 = 0x7f7fffff;
  DAT_101dc6384 = 0x7f7fffff;
  DAT_101dc6388 = 0x7f7fffff;
  DAT_101dc638c = 0x3f800000;
  uRam0000000101dc6398 = 0x7f7fffff7f7fffff;
  _DAT_101dc6390 = 0x7f7fffff7f7fffff;
  DAT_101dc63a0 = 0x7f7fffff;
  DAT_101dc63a4 = 0x3eb33333;
  uRam0000000101dc63b0 = 0x7f7fffff7f7fffff;
  _DAT_101dc63a8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc63c0 = 0x7f7fffff7f7fffff;
  _DAT_101dc63b8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc63d0 = 0x7f7fffff7f7fffff;
  _DAT_101dc63c8 = 0x7f7fffff7f7fffff;
  _DAT_101dc63e0 = 0x7f7fffff7f7fffff;
  _DAT_101dc63d8 = 0x7f7fffff7f7fffff;
  DAT_101dc63e8 = 0x7f7fffff;
  DAT_101dc63ec = 0x7f7fffff;
  DAT_101dc63f0 = 0x7f7fffff;
  uRam0000000101dc6288 = 0xff7fffffff7fffff;
  _DAT_101dc6280 = 0xff7fffffff7fffff;
  DAT_101dc6290 = 0;
  DAT_101dc6298 = 0;
  uRam0000000101dc62a4 = 0xff7fffffff7fffff;
  _DAT_101dc629c = 0xff7fffffff7fffff;
  DAT_101dc62ac = 0xff7fffff;
  DAT_101dc62b0 = 0xff7fffff;
  DAT_101dc62b4 = NEON_fmov(0xbf800000,4);
  DAT_101dc62bc = 0x3f000000;
  DAT_101dc62c0 = 0;
  DAT_101dc62c8 = 0;
  uRam0000000101dc62d8 = 0xff7fffffff7fffff;
  _DAT_101dc62d0 = 0xff7fffffff7fffff;
  uRam0000000101dc62e8 = 0xff7fffffff7fffff;
  _DAT_101dc62e0 = 0xff7fffffff7fffff;
  uRam0000000101dc62f8 = 0xff7fffffff7fffff;
  _DAT_101dc62f0 = 0xff7fffffff7fffff;
  uRam0000000101dc6308 = 0xbf800000bf800000;
  _DAT_101dc6300 = 0xbf80000000000000;
  DAT_101dc6310 = 0xbf800000;
  DAT_101dc6314 = 0xff7fffff;
  DAT_101dc6318 = 0xff7fffff;
  DAT_101dc631c = 0xff7fffff;
  DAT_101dc6320 = 0;
  DAT_101dc6324 = 0xff7fffff;
  DAT_101dc6328 = 0;
  DAT_101dc6330 = 0;
  return;
}




long * FUN_1000c70b8(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  *puVar9 = &PTR_thunk_FUN_1000c81c8_101454980;
  puVar1 = puVar9 + 0x1a;
  puVar9[0x19] = 0;
  FUN_100269de4(puVar1);
  plVar2 = param_1 + 0x33;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x51;
  FUN_100269de4(plVar3);
  plVar4 = param_1 + 0x6a;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x88;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xa6;
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0xc4;
  thunk_FUN_100652c08();
  FUN_10064e264(param_1 + 0xe2);
  FUN_100269de4(param_1 + 0xf9);
  lVar10 = 0x890;
  do {
    FUN_1000c8170((long)param_1 + lVar10);
    lVar10 = lVar10 + 0x378;
  } while (lVar10 != 0xf80);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)((long)param_1 + 0xf84) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(plVar3,param_1 + 0x112,1);
  FUN_100642bd8(plVar3,param_1 + 0x181,1);
  FUN_100642bd8(plVar3,param_1 + 0x130,1);
  FUN_100642bd8(plVar3,param_1 + 0x19f,1);
  FUN_100642bd8(plVar3,param_1 + 0x156,1);
  FUN_100642bd8(plVar3,param_1 + 0x1c5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xf9,1);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_bkgmiddle");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x21c);
  if ((uVar8 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x21c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"dialog_bg_large");
  if ((~*(uint *)((long)param_1 + 0x3d4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3d4) = *(uint *)((long)param_1 + 0x3d4) | 0x7f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_top");
  if ((*(float *)(param_1 + 0x91) != 2.0) || (*(float *)((long)param_1 + 0x48c) != 2.0)) {
    param_1[0x91] = 0x4000000040000000;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_mid");
  if ((*(float *)(param_1 + 0xaf) != 2.0) || (*(float *)((long)param_1 + 0x57c) != 2.0)) {
    param_1[0xaf] = 0x4000000040000000;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_bot");
  if ((*(float *)(param_1 + 0xcd) != 2.0) || (*(float *)((long)param_1 + 0x66c) != 2.0)) {
    param_1[0xcd] = 0x4000000040000000;
    FUN_1000200a0(plVar7);
  }
  local_68 = DAT_101dbd460;
  local_90 = FUN_1000c7534;
  plVar2 = param_1 + 0xe3;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  local_68 = DAT_101dbd478;
  local_90 = FUN_1000c7534;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1000c7534;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  FUN_100651038(param_1 + 0x130,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100651460(param_1 + 0x130,&DAT_10114bf04);
  FUN_100651038(param_1 + 0x156,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(param_1 + 0x156,&DAT_10114bf00);
  FUN_1000c7548(param_1 + 0x112);
  FUN_100651038(param_1 + 0x19f,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100651460(param_1 + 0x19f,&DAT_10114bf04);
  FUN_100651038(param_1 + 0x1c5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(param_1 + 0x1c5,&DAT_10114bf00);
  FUN_1000c7548(param_1 + 0x181);
  return param_1;
}




void FUN_1000c7534(long param_1)

{
  if (*(char *)(param_1 + 0xf84) != '\0') {
    FUN_1000c7d58(param_1,0);
    return;
  }
  return;
}




void FUN_1000c7548(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) & 0xfffffffb;
  *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x2a4) & 0xfffffffb;
  plVar1 = *(long **)(param_1 + 0x368);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x370) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x368);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x370) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x368) = 0;
            *(undefined4 *)(param_1 + 0x370) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0,uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x368) = 0;
      *(undefined4 *)(param_1 + 0x370) = DAT_101dc0b88;
    }
  }
  return;
}




long * thunk_FUN_1000c70b8(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  *puVar9 = &PTR_thunk_FUN_1000c81c8_101454980;
  puVar1 = puVar9 + 0x1a;
  puVar9[0x19] = 0;
  FUN_100269de4(puVar1);
  plVar2 = param_1 + 0x33;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x51;
  FUN_100269de4(plVar3);
  plVar4 = param_1 + 0x6a;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x88;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xa6;
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0xc4;
  thunk_FUN_100652c08();
  FUN_10064e264(param_1 + 0xe2);
  FUN_100269de4(param_1 + 0xf9);
  lVar10 = 0x890;
  do {
    FUN_1000c8170((long)param_1 + lVar10);
    lVar10 = lVar10 + 0x378;
  } while (lVar10 != 0xf80);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)((long)param_1 + 0xf84) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(plVar3,param_1 + 0x112,1);
  FUN_100642bd8(plVar3,param_1 + 0x181,1);
  FUN_100642bd8(plVar3,param_1 + 0x130,1);
  FUN_100642bd8(plVar3,param_1 + 0x19f,1);
  FUN_100642bd8(plVar3,param_1 + 0x156,1);
  FUN_100642bd8(plVar3,param_1 + 0x1c5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xf9,1);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_bkgmiddle");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x21c);
  if ((uVar8 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x21c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"dialog_bg_large");
  if ((~*(uint *)((long)param_1 + 0x3d4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3d4) = *(uint *)((long)param_1 + 0x3d4) | 0x7f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_top");
  if ((*(float *)(param_1 + 0x91) != 2.0) || (*(float *)((long)param_1 + 0x48c) != 2.0)) {
    param_1[0x91] = 0x4000000040000000;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_mid");
  if ((*(float *)(param_1 + 0xaf) != 2.0) || (*(float *)((long)param_1 + 0x57c) != 2.0)) {
    param_1[0xaf] = 0x4000000040000000;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"speech_bubble_bot");
  if ((*(float *)(param_1 + 0xcd) != 2.0) || (*(float *)((long)param_1 + 0x66c) != 2.0)) {
    param_1[0xcd] = 0x4000000040000000;
    FUN_1000200a0(plVar7);
  }
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_1000c7534;
  plVar2 = param_1 + 0xe3;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uStack_68 = DAT_101dbd478;
  pcStack_90 = FUN_1000c7534;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_1000c7534;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  FUN_100651038(param_1 + 0x130,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100651460(param_1 + 0x130,&DAT_10114bf04);
  FUN_100651038(param_1 + 0x156,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(param_1 + 0x156,&DAT_10114bf00);
  FUN_1000c7548(param_1 + 0x112);
  FUN_100651038(param_1 + 0x19f,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100651460(param_1 + 0x19f,&DAT_10114bf04);
  FUN_100651038(param_1 + 0x1c5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(param_1 + 0x1c5,&DAT_10114bf00);
  FUN_1000c7548(param_1 + 0x181);
  return param_1;
}




void FUN_1000c7618(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  float local_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  int local_a8;
  int local_a4;
  
  uVar7 = FUN_100641574("root-layer");
  FUN_10016ae00(&local_a4,&local_a8,auStack_ac,auStack_b0);
  FUN_10064142c(&local_b4,&local_b8);
  FUN_100641464(&uStack_bc,&local_c0);
  FUN_10064e47c(uStack_bc,local_c0,param_1);
  FUN_10064e47c(local_b4,local_b8);
  lVar8 = param_1 + 0x198;
  FUN_10064e47c(local_b4,local_b8,lVar8);
  lVar1 = param_1 + 0x288;
  FUN_10064e47c(local_b4,local_b8,lVar1);
  FUN_10064e47c(local_b4,local_b8);
  lVar2 = param_1 + 0x7c8;
  FUN_10064e47c(uStack_bc,local_c0,lVar2);
  lVar3 = param_1 + 0x350;
  FUN_10064e47c(local_b4 + 8.0,0x44400000,lVar3);
  lVar4 = param_1 + 0x530;
  fVar18 = *(float *)(param_1 + 0x578) * 40.0;
  fVar9 = (float)FUN_10065317c(lVar4);
  fVar11 = -80.0 - fVar18;
  lVar5 = param_1 + 0x890;
  FUN_100651708(fVar11 + fVar9,lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x220,1);
  FUN_100651708(0x43960000,lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xf0,1);
  uVar10 = FUN_100652e60(lVar4);
  FUN_1006511d0(lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x220);
  fVar9 = fVar11;
  FUN_1006511d0(lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xf0);
  lVar5 = param_1 + 0x440;
  fVar14 = fVar9;
  FUN_10065317c(lVar5);
  lVar6 = param_1 + 0x620;
  fVar15 = fVar14;
  FUN_10065317c(lVar6);
  FUN_10064e47c(uVar10,((fVar11 + 140.0 + fVar9) - (fVar14 + fVar15)) / *(float *)(param_1 + 0x57c),
                lVar4);
  fVar16 = *(float *)(param_1 + 0x110);
  fVar17 = *(float *)(param_1 + 0x114);
  fVar15 = *(float *)(param_1 + 0x2c8);
  fVar11 = *(float *)(param_1 + 0x2cc);
  fVar9 = *(float *)(param_1 + 0x808);
  fVar14 = *(float *)(param_1 + 0x80c);
  if ((fVar16 != (float)DAT_101dc1cb8) ||
     (fVar12 = fVar11, fVar13 = fVar15, fVar17 != DAT_101dc1cb8._4_4_)) {
    *(ulong *)(param_1 + 0x110) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0xd0);
    fVar13 = *(float *)(param_1 + 0x2c8);
    fVar12 = *(float *)(param_1 + 0x2cc);
  }
  if ((fVar13 != (float)DAT_101dc1cb8) || (fVar12 != DAT_101dc1cb8._4_4_)) {
    *(ulong *)(param_1 + 0x2c8) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0x808) != (float)DAT_101dc1cb8) ||
     (*(float *)(param_1 + 0x80c) != DAT_101dc1cb8._4_4_)) {
    *(ulong *)(param_1 + 0x808) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(lVar2);
  }
  FUN_10064e5ec((float)local_a4,(float)local_a8,param_1,0,uVar7,0);
  if (*(int *)(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xbe4) == 0) {
    *(byte *)(param_1 + 0x518) = *(byte *)(param_1 + 0x518) & 0xfe;
    *(byte *)(param_1 + 0x608) = *(byte *)(param_1 + 0x608) & 0xfe;
    *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) & 0xfe;
    *(byte *)(param_1 + 0x428) = *(byte *)(param_1 + 0x428) & 0xfe;
    FUN_10064e5ec((float)-local_a4,0,lVar8,0,param_1,0);
    FUN_10064e5ec(0,0,lVar1,0,lVar8,0);
    FUN_10064e5ec(0,0,lVar2,0,lVar8,0);
    lVar8 = param_1 + 0x890;
    FUN_10064e68c(0,0,lVar8 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,3);
    FUN_10064e68c((float)-local_a4,0,lVar3,3);
    FUN_10064e5ec(0xc2a00000,0xc41d0000,lVar5,0,lVar8 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,2)
    ;
    FUN_10064e5ec(0,0,lVar4,0,lVar5,3);
    FUN_10064e5ec(0,0,lVar6,0,lVar4,3);
    FUN_10064e68c((float)-local_a4,0,param_1 + 0x710,3);
    lVar8 = lVar8 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
    fVar18 = fVar18 + 40.0;
  }
  else {
    *(byte *)(param_1 + 0x518) = *(byte *)(param_1 + 0x518) | 1;
    *(byte *)(param_1 + 0x608) = *(byte *)(param_1 + 0x608) | 1;
    *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
    *(byte *)(param_1 + 0x428) = *(byte *)(param_1 + 0x428) | 1;
    FUN_10064e5ec((float)-local_a4,0,lVar8,0,param_1,0);
    FUN_10064e5ec(0,0,lVar1,0,lVar8,0);
    FUN_10064e5ec(0,0,lVar2,0,lVar8,0);
    lVar8 = param_1 + 0x890;
    FUN_10064e68c(0,0,lVar8 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,2);
    FUN_10064e68c((float)-local_a4,0,lVar3,3);
    FUN_10064e5ec(0x42a00000,0xc41d0000,lVar5,1,lVar8 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,3)
    ;
    FUN_10064e5ec(0,0,lVar4,0,lVar5,3);
    FUN_10064e5ec(0,0,lVar6,0,lVar4,3);
    FUN_10064e68c((float)-local_a4,0,param_1 + 0x710,3);
    lVar8 = lVar8 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
    fVar18 = 40.0;
  }
  FUN_10064e5ec(fVar18,0x428c0000,lVar8 + 0xf0,0,lVar5,0);
  lVar8 = param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
  FUN_10064e5ec(0,0,lVar8 + 0xab0,0,lVar8 + 0x980,3);
  if ((*(float *)(param_1 + 0x110) != fVar16) || (*(float *)(param_1 + 0x114) != fVar17)) {
    *(float *)(param_1 + 0x110) = fVar16;
    *(float *)(param_1 + 0x114) = fVar17;
    FUN_1000200a0(param_1 + 0xd0);
  }
  if ((*(float *)(param_1 + 0x2c8) != fVar15) || (*(float *)(param_1 + 0x2cc) != fVar11)) {
    *(float *)(param_1 + 0x2c8) = fVar15;
    *(float *)(param_1 + 0x2cc) = fVar11;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0x808) != fVar9) || (*(float *)(param_1 + 0x80c) != fVar14)) {
    *(float *)(param_1 + 0x808) = fVar9;
    *(float *)(param_1 + 0x80c) = fVar14;
    FUN_1000200a0(lVar2);
  }
  return;
}




void thunk_FUN_1000c7618(void)

{
  FUN_1000c7618();
  return;
}




void FUN_1000c7c60(long param_1,long param_2)

{
  long local_40;
  code *pcStack_38;
  
  *(undefined1 *)(param_1 + 0xf84) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xbe0) = 0;
  *(undefined4 *)(param_1 + 0xbe4) = 0;
  FUN_100652d8c(param_1 + 0x890);
  *(undefined1 *)(param_1 + 0xf58) = 0;
  *(undefined4 *)(param_1 + 0xf5c) = 0;
  FUN_100652d8c(param_1 + 0xc08);
  *(long *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 8);
  FUN_1000c7d58(param_1,1);
  FUN_1000c7618(param_1);
  pcStack_38 = FUN_1000c8308;
  local_40 = param_1;
  FUN_100643618(0x3f99999a,&local_40,0,0);
  FUN_100269e20(0x3f000000,param_1 + 0xd0,1,4,1);
  FUN_100269e20(0x3e99999a,param_1 + 0x7c8,1,1,1);
  FUN_100269e20(0x3e99999a,param_1 + 0x288,1,3,1);
  *(uint *)(param_1 + 0x794) = *(uint *)(param_1 + 0x794) | 0x10;
  return;
}




void FUN_1000c7d58(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xf80);
  if (param_2 == 0) {
    if (*(char *)(param_1 + (ulong)(~uVar1 & 1) * 0x378 + 0xbe0) == '\0') {
      FUN_1000c7548(param_1 + 0x890 + (ulong)uVar1 * 0x378);
      uVar3 = (ulong)~*(uint *)(param_1 + 0xf80) & 1;
      *(int *)(param_1 + 0xf80) = (int)uVar3;
      FUN_1000c8048(param_1 + 0x890 + uVar3 * 0x378);
      FUN_1000c80c0(param_1);
      lVar2 = param_1 + ((ulong)~*(uint *)(param_1 + 0xf80) & 1) * 0x378;
      if (**(long **)(param_1 + 200) == 0) {
        *(undefined1 *)(lVar2 + 0xbe0) = 1;
      }
      else {
        FUN_1000c7f58(lVar2 + 0x890);
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 8;
      }
    }
    else {
      FUN_1000c7ea4(param_1);
    }
  }
  else {
    FUN_1000c7f58(param_1 + (ulong)uVar1 * 0x378 + 0x890,**(undefined8 **)(param_1 + 200));
    lVar2 = *(long *)(param_1 + 200);
    *(long *)(param_1 + 200) = lVar2 + 8;
    uVar1 = *(uint *)(param_1 + 0xf80);
    if (*(long *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + ((ulong)~uVar1 & 1) * 0x378 + 0xbe0) = 1;
    }
    else {
      FUN_1000c7f58(param_1 + ((ulong)~uVar1 & 1) * 0x378 + 0x890);
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 8;
      uVar1 = *(uint *)(param_1 + 0xf80);
    }
    FUN_1000c8048(param_1 + (ulong)uVar1 * 0x378 + 0x890);
    FUN_1000c80c0(param_1);
  }
  FUN_1000c7618(param_1);
  return;
}




void FUN_1000c7ea4(long param_1)

{
  FUN_1000c7548(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x890);
  FUN_100269e20(0x3f000000,param_1 + 0xd0,0,4,1);
  FUN_100269e20(0x3e99999a,param_1 + 0x7c8,0,1,1);
  FUN_100269e20(0x3e99999a,param_1 + 0x288,0,3,1);
  *(uint *)(param_1 + 0x794) = *(uint *)(param_1 + 0x794) & 0xffffffef;
                    /* WARNING: Could not recover jumptable at 0x0001000c7f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




undefined8 FUN_1000c7f44(long param_1)

{
  return *(undefined8 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xbe8);
}




void FUN_1000c7f58(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2698(auStack_b8,DAT_10184e0e8);
  FUN_100652d8c(param_1);
  FUN_100652ca4(param_1,auStack_b8);
  FUN_100652cdc(param_1,"Cutscene_Avatar");
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x18),0);
  FUN_1006513c0(param_1 + 0xf0,uVar1);
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x10),0);
  FUN_1006513c0(param_1 + 0x220,uVar1);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x358) = param_2;
  uVar1 = 0;
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar1 = FUN_100094c08();
  }
  *(undefined8 *)(param_1 + 0x360) = uVar1;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000c8048(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) | 4;
  *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x2a4) | 4;
  if (*(long *)(param_1 + 0x360) != 0) {
    lVar4 = FUN_100094b5c(0x3f800000);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 0x28;
    }
    puVar2 = &DAT_101dc0b88;
    if (lVar4 != 0) {
      puVar2 = (undefined4 *)(lVar1 + 8);
    }
    uVar3 = *puVar2;
    *(long *)(param_1 + 0x368) = lVar1;
    *(undefined4 *)(param_1 + 0x370) = uVar3;
  }
  return;
}




void FUN_1000c80c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  lVar3 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xbe8);
  if (lVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar3 + 0x34);
  if (iVar1 == 0) {
    uVar4 = 0x3e4ccccd;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar4 = 0;
  }
  uVar2 = FUN_100640840(uVar4,0x3ecccccd,FUN_10001f160);
  FUN_100642324(param_1 + 0x198);
  FUN_100642b14(param_1 + 0x198,uVar2);
  return;
}




void thunk_FUN_1000c81c8(void)

{
  FUN_1000c81c8();
  return;
}




void FUN_1000c815c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c81c8();
  operator_delete(pvVar1);
  return;
}




long FUN_1000c8170(long param_1)

{
  long lVar1;
  
  lVar1 = thunk_FUN_100652c08();
  thunk_FUN_100650e64(lVar1 + 0xf0);
  thunk_FUN_100650e64(param_1 + 0x220);
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = DAT_101dc0b88;
  return param_1;
}




void FUN_1000c81c8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1000c81c8_101454980;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1 + 0xe28);
    thunk_FUN_100651068((long)param_1 + lVar1 + 0xcf8);
    *(undefined ***)((long)param_1 + lVar1 + 0xc08) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xcc0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xcd8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xc08);
    lVar1 = lVar1 + -0x378;
  } while (lVar1 != -0x6f0);
  FUN_10064e2bc(param_1 + 0xf9);
  thunk_FUN_10064e2bc(param_1 + 0xe2);
  param_1[0xc4] = &PTR_FUN_1014a7108;
  param_1[0xdb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xde);
  FUN_10064e2bc(param_1 + 0xc4);
  param_1[0xa6] = &PTR_FUN_1014a7108;
  param_1[0xbd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc0);
  FUN_10064e2bc(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_1014a7108;
  param_1[0x9f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa2);
  FUN_10064e2bc(param_1 + 0x88);
  param_1[0x6a] = &PTR_FUN_1014a7108;
  param_1[0x81] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x84);
  FUN_10064e2bc(param_1 + 0x6a);
  FUN_10064e2bc(param_1 + 0x51);
  param_1[0x33] = &PTR_FUN_1014a7108;
  param_1[0x4a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d);
  FUN_10064e2bc(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000c8308(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  pcStack_28 = FUN_1000c8308;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  *(undefined1 *)(param_1 + 0xf84) = 1;
  return;
}




long * FUN_1000c8348(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)FUN_100269da8();
  puVar4[0x19] = 0;
  *puVar4 = &PTR_thunk_FUN_1000c8558_101454ac8;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x38;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_100652c08(param_1 + 0x56);
  plVar2 = param_1 + 0x74;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x8b;
  thunk_FUN_100650e64(plVar3);
  FUN_10064e264(param_1 + 0xb1);
  *(undefined1 *)(param_1 + 200) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x56,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_1 + 0xb1,1);
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"popup_background");
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651460(plVar3,&DAT_10114bf0c);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x60c) = *(uint *)((long)param_1 + 0x60c) | 0x10;
  local_58 = DAT_101dbd460;
  local_80 = FUN_1000c850c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = FUN_1000c850c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_80);
  return param_1;
}




void FUN_1000c850c(long param_1)

{
  if (*(char *)(param_1 + 0x640) != '\0') {
    FUN_100652d8c(param_1 + 0x2b0);
    *(undefined1 *)(param_1 + 0x640) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000c8544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 200))();
    return;
  }
  return;
}




long * thunk_FUN_1000c8348(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar4 = (undefined8 *)FUN_100269da8();
  puVar4[0x19] = 0;
  *puVar4 = &PTR_thunk_FUN_1000c8558_101454ac8;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x38;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_100652c08(param_1 + 0x56);
  plVar2 = param_1 + 0x74;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x8b;
  thunk_FUN_100650e64(plVar3);
  FUN_10064e264(param_1 + 0xb1);
  *(undefined1 *)(param_1 + 200) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x56,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_1 + 0xb1,1);
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsTutorialDialog_t_10184e0e0,"popup_background");
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651460(plVar3,&DAT_10114bf0c);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x60c) = *(uint *)((long)param_1 + 0x60c) | 0x10;
  uStack_58 = DAT_101dbd460;
  pcStack_80 = FUN_1000c850c;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xb2,&pcStack_80);
  uStack_58 = DAT_101dbd48c;
  pcStack_80 = FUN_1000c850c;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xb2,&pcStack_80);
  return param_1;
}




void FUN_1000c8558(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_1000c8558_101454ac8;
  pcStack_38 = FUN_1000c8900;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  thunk_FUN_10064e2bc(param_1 + 0xb1);
  thunk_FUN_100651068(param_1 + 0x8b);
  thunk_FUN_10064e2bc(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_1014a7108;
  param_1[0x6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_1014a7108;
  param_1[0x4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_1014a7108;
  param_1[0x31] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x34);
  FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000c8558(void)

{
  FUN_1000c8558();
  return;
}




void FUN_1000c862c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c8558();
  operator_delete(pvVar1);
  return;
}




void FUN_1000c8640(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  float local_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  
  uVar3 = FUN_100641574("root-layer");
  FUN_10016ae00(auStack_74,auStack_78,auStack_7c,auStack_80);
  FUN_10064142c(&uStack_84,&local_88);
  FUN_100641464(auStack_8c,auStack_90);
  fVar5 = local_88;
  FUN_10064e47c(uStack_84,local_88,param_1);
  lVar1 = param_1 + 0x2b0;
  uVar4 = FUN_10065317c(lVar1);
  FUN_10065317c(lVar1);
  FUN_10064e47c(uStack_84,local_88,param_1 + 0xd0);
  lVar2 = param_1 + 0x3a0;
  FUN_10064e47c(uVar4,fVar5 + 150.0,lVar2);
  FUN_10064e47c((float)uVar4 + 100.0,fVar5 + 250.0,param_1 + 0x1c0);
  FUN_10064e47c(uStack_84,local_88,param_1 + 0x588);
  FUN_10064e5ec(0,0,param_1,0,uVar3,0);
  FUN_10064e5ec(0,0,param_1 + 0xd0,0,param_1,0);
  FUN_10064e68c(0,0,param_1 + 0x1c0,8);
  FUN_10064e68c(0,0,lVar2,8);
  FUN_10064e5ec(0,0,param_1 + 0x458,0,lVar2,4);
  FUN_10064e5ec(0,0x42dc0000,lVar1,4,lVar2,4);
  FUN_10064e5ec(0,0,param_1 + 0x588,0,lVar2,0);
  return;
}




void FUN_1000c880c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000c8814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1000c8818(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *local_50;
  code *pcStack_48;
  
  plVar1 = param_1 + 0x56;
  FUN_100652d8c(plVar1);
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_100652ca4(plVar1,param_2);
  FUN_100652cdc(plVar1,param_3);
  FUN_10064ed30(0x44848000,plVar1);
  FUN_1006513c0(param_1 + 0x8b,param_4);
  pcStack_48 = FUN_1000c8900;
  local_50 = param_1;
  FUN_100643618(0x3fc00000,&local_50,0,0);
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1000c88cc(long param_1)

{
  FUN_100652d8c(param_1 + 0x2b0);
  *(undefined1 *)(param_1 + 0x640) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000c88fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 200))();
  return;
}




void FUN_1000c8900(long param_1)

{
  *(undefined1 *)(param_1 + 0x640) = 1;
  return;
}




long * FUN_1000c890c(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_64;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_101454c30;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100650e64(puVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_1004e3170(auStack_50,&DAT_101d91198);
  iVar1 = FUN_1004e36c0(param_2,&DAT_101d91650);
  if (iVar1 != 0) {
    FUN_1004e3120(auStack_60,"{68,156,188}");
    FUN_1000153b4(auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e372c(auStack_50,param_2);
    FUN_1004e3120(auStack_60,"{\\\\}");
    FUN_1004e372c(auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  local_64 = 0xff5262cc;
  if (param_4 == 0) {
    local_64 = 0xffffffff;
  }
  iVar1 = FUN_1004e36c0(param_3,&DAT_101d91650);
  if (iVar1 != 0) {
    FUN_1004e3120(auStack_60,"{255,255,255}:  ");
    FUN_1004e372c(auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e372c(auStack_50,param_3);
    FUN_1004e3120(auStack_60,"{\\\\}");
    FUN_1004e372c(auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  FUN_1006515d8(puVar2,1);
  FUN_100651594(puVar2,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_64);
  FUN_1006513c0(puVar2,auStack_50);
  FUN_10065165c(puVar2,1);
  FUN_1006515e0(puVar2,1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return param_1;
}




long * FUN_1000c8ae8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  uint uVar14;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar10[0x17] = 0;
  *puVar10 = &PTR_thunk_FUN_1000c8f90_101454d78;
  puVar10 = puVar10 + 0x18;
  FUN_10064e264(puVar10);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x9f;
  thunk_FUN_1005357f4(plVar4);
  FUN_10064e264();
  plVar5 = param_1 + 0x1fb;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x219;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x237;
  thunk_FUN_100536c60(plVar7);
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)((long)param_1 + 0x1684) = 100;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(plVar3,plVar1,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(puVar10,plVar6,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(puVar10,plVar7,1);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"global_gradient_bot");
  FUN_100652dd4(plVar2,&DAT_10115a168,2);
  uVar14 = *(uint *)((long)param_1 + 0x2ec);
  if ((uVar14 & 0x7f80) != 0x1180) {
    *(uint *)((long)param_1 + 0x2ec) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x1180;
    FUN_1000200a0(plVar2);
    uVar14 = *(uint *)((long)param_1 + 0x2ec);
  }
  *(uint *)((long)param_1 + 0x2ec) = uVar14 & 0xfffffff7;
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x105c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x105c) = *(uint *)((long)param_1 + 0x105c) & 0xffff807f;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a168,2);
  uVar14 = *(uint *)((long)param_1 + 0x114c);
  if ((uVar14 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x114c) = uVar14 & 0xffff807f;
    FUN_1000200a0(plVar6);
    uVar14 = *(uint *)((long)param_1 + 0x114c);
  }
  *(uint *)((long)param_1 + 0x114c) = uVar14 & 0xfffffff7;
  FUN_100654488(plVar3,1);
  local_90 = (code *)CONCAT71(local_90._1_7_,9);
  FUN_100534ebc(plVar4,&local_90);
  FUN_100534ad8(plVar4,param_1 + 0x1e4,1);
  uVar11 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1006513c0(param_1 + 0x270,uVar11);
  local_68 = DAT_101dbd4b4;
  local_90 = FUN_1000c8f4c;
  plVar1 = param_1 + 0x238;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd4bc;
  local_90 = FUN_1000c8f50;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd4b8;
  local_90 = FUN_1000c8f84;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  FUN_100536e94(plVar7,1);
  iVar9 = FUN_10012709c();
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar9 != 1) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651038(param_1 + 0x270,*ppuVar8);
  iVar9 = FUN_10012709c();
  if (iVar9 == 0) {
    FUN_1005371f0(0,plVar7);
  }
  pvVar12 = operator_new(0x1e8);
  lVar13 = FUN_1000c890c(pvVar12,&DAT_101d91650,&DAT_101d91650,0,0,0);
  param_1[0x2cf] = lVar13;
  FUN_100642bd8(plVar3,pvVar12,1);
  (**(code **)(*param_1 + 0x140))(param_1);
  if ((*(uint *)((long)param_1 + 0x144) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffff807f;
    FUN_1000200a0(puVar10);
  }
  *(uint *)((long)param_1 + 0x123c) = *(uint *)((long)param_1 + 0x123c) & 0xffffffef;
  *(uint *)((long)param_1 + 0x57c) = *(uint *)((long)param_1 + 0x57c) & 0xffffffef;
  return param_1;
}




void FUN_1000c8f4c(void)

{
  return;
}




void FUN_1000c8f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x1680) == '\0') {
    FUN_1000c97fc(param_1,1);
  }
  FUN_100644b14(param_4);
  return;
}




void FUN_1000c8f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000c9a60(param_1,param_4);
  return;
}




long * thunk_FUN_1000c8ae8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  uint uVar14;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar10[0x17] = 0;
  *puVar10 = &PTR_thunk_FUN_1000c8f90_101454d78;
  puVar10 = puVar10 + 0x18;
  FUN_10064e264(puVar10);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x9f;
  thunk_FUN_1005357f4(plVar4);
  FUN_10064e264();
  plVar5 = param_1 + 0x1fb;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x219;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x237;
  thunk_FUN_100536c60(plVar7);
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)((long)param_1 + 0x1684) = 100;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(plVar3,plVar1,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(puVar10,plVar6,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(puVar10,plVar7,1);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"global_gradient_bot");
  FUN_100652dd4(plVar2,&DAT_10115a168,2);
  uVar14 = *(uint *)((long)param_1 + 0x2ec);
  if ((uVar14 & 0x7f80) != 0x1180) {
    *(uint *)((long)param_1 + 0x2ec) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x1180;
    FUN_1000200a0(plVar2);
    uVar14 = *(uint *)((long)param_1 + 0x2ec);
  }
  *(uint *)((long)param_1 + 0x2ec) = uVar14 & 0xfffffff7;
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x105c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x105c) = *(uint *)((long)param_1 + 0x105c) & 0xffff807f;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a168,2);
  uVar14 = *(uint *)((long)param_1 + 0x114c);
  if ((uVar14 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x114c) = uVar14 & 0xffff807f;
    FUN_1000200a0(plVar6);
    uVar14 = *(uint *)((long)param_1 + 0x114c);
  }
  *(uint *)((long)param_1 + 0x114c) = uVar14 & 0xfffffff7;
  FUN_100654488(plVar3,1);
  pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,9);
  FUN_100534ebc(plVar4,&pcStack_90);
  FUN_100534ad8(plVar4,param_1 + 0x1e4,1);
  uVar11 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1006513c0(param_1 + 0x270,uVar11);
  uStack_68 = DAT_101dbd4b4;
  pcStack_90 = FUN_1000c8f4c;
  plVar1 = param_1 + 0x238;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd4bc;
  pcStack_90 = FUN_1000c8f50;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd4b8;
  pcStack_90 = FUN_1000c8f84;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  FUN_100536e94(plVar7,1);
  iVar9 = FUN_10012709c();
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar9 != 1) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651038(param_1 + 0x270,*ppuVar8);
  iVar9 = FUN_10012709c();
  if (iVar9 == 0) {
    FUN_1005371f0(0,plVar7);
  }
  pvVar12 = operator_new(0x1e8);
  lVar13 = FUN_1000c890c(pvVar12,&DAT_101d91650,&DAT_101d91650,0,0,0);
  param_1[0x2cf] = lVar13;
  FUN_100642bd8(plVar3,pvVar12,1);
  (**(code **)(*param_1 + 0x140))(param_1);
  if ((*(uint *)((long)param_1 + 0x144) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffff807f;
    FUN_1000200a0(puVar10);
  }
  *(uint *)((long)param_1 + 0x123c) = *(uint *)((long)param_1 + 0x123c) & 0xffffffef;
  *(uint *)((long)param_1 + 0x57c) = *(uint *)((long)param_1 + 0x57c) & 0xffffffef;
  return param_1;
}




void FUN_1000c8f90(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  *param_1 = &PTR_thunk_FUN_1000c8f90_101454d78;
  uVar2 = *(uint *)(param_1 + 0x2cd);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(param_1[0x2ce] + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(param_1[0x2ce] + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x2cd);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if ((void *)param_1[0x2ce] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2cd) = 0;
    operator_delete__((void *)param_1[0x2ce]);
    param_1[0x2cd] = 0;
    param_1[0x2ce] = 0;
  }
  thunk_FUN_100536ddc(param_1 + 0x237);
  param_1[0x219] = &PTR_FUN_1014a7108;
  param_1[0x230] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x233);
  FUN_10064e2bc(param_1 + 0x219);
  param_1[0x1fb] = &PTR_FUN_1014a7108;
  param_1[0x212] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x215);
  FUN_10064e2bc(param_1 + 0x1fb);
  thunk_FUN_10064e2bc(param_1 + 0x1e4);
  thunk_FUN_100534a3c(param_1 + 0x9f);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000c8f90(void)

{
  FUN_1000c8f90();
  return;
}




void FUN_1000c90d8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c8f90();
  operator_delete(pvVar1);
  return;
}




void FUN_1000c90ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000c90f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_1000c90f8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000c9100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_1000c9104(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_60;
  long *local_58;
  
  pvVar4 = operator_new(0x1e8);
  local_58 = (long *)FUN_1000c890c(pvVar4,param_4,param_5,param_6,0,0);
  FUN_1000c92b8(param_3 + 0x1668,&local_58);
  uVar1 = *(uint *)(param_3 + 0x1668) - *(uint *)(param_3 + 0x1684);
  if ((*(uint *)(param_3 + 0x1684) <= *(uint *)(param_3 + 0x1668) && uVar1 != 0) && (0 < (int)uVar1)
     ) {
    lVar7 = 0;
    do {
      lVar6 = *(long *)(param_3 + 0x1670);
      if (*(long **)(lVar6 + lVar7) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + lVar7) + 8))();
        lVar6 = *(long *)(param_3 + 0x1670);
      }
      *(undefined8 *)(lVar6 + lVar7) = 0;
      lVar7 = lVar7 + 8;
    } while ((ulong)uVar1 * 8 - lVar7 != 0);
    FUN_1000c9338(param_3 + 0x1668,*(long *)(param_3 + 0x1670),
                  *(long *)(param_3 + 0x1670) + (ulong)uVar1 * 8);
  }
  iVar3 = FUN_100642d08(*(undefined8 *)(param_3 + 0x1678));
  if (iVar3 != 0) {
    FUN_1006423ec(*(undefined8 *)(param_3 + 0x1678),1);
  }
  fVar8 = (float)FUN_10064e3cc(param_3 + 0x358);
  FUN_100642bd8(param_3 + 0xf20,local_58,1);
  FUN_100651708(fVar8 + -20.0,local_58 + 0x17,1);
  plVar2 = local_58;
  uVar9 = (**(code **)(*local_58 + 0x58))(local_58,0,0,1,1);
  local_60 = CONCAT44(param_2,uVar9);
  FUN_10064e48c(plVar2,&local_60);
  local_60 = 0;
  (**(code **)(*local_58 + 0x28))(local_58,&local_60);
  if (*(float *)(local_58 + 8) != 0.0) {
    *(undefined4 *)(local_58 + 8) = 0;
    FUN_1000200a0();
  }
  FUN_1000c93a4(param_3);
  uVar5 = FUN_1005371e4(param_3 + 0x11b8);
  if ((uVar5 & 1) == 0) {
    FUN_1000c9504(0x41000000,param_3);
  }
  return;
}




void FUN_1000c92b8(uint *param_1,undefined8 *param_2)

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
    FUN_1000c9d5c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000c9338(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_1000c93a4(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  
  if (*(int *)(param_3 + 0x1668) != 0) {
    uVar6 = 0;
    fVar8 = 0.0;
    do {
      (**(code **)(**(long **)(*(long *)(param_3 + 0x1670) + uVar6 * 8) + 0x48))();
      fVar8 = param_2 + fVar8;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_3 + 0x1668));
    lVar2 = param_3 + 0x4f8;
    FUN_10064e3cc(lVar2);
    fVar7 = param_2;
    local_48 = (float)FUN_10064e3cc(lVar2);
    fStack_44 = fVar8;
    if (fVar8 < param_2) {
      fStack_44 = fVar7;
    }
    local_48 = local_48 + -20.0;
    FUN_10064e48c(param_3 + 0xf20,&local_48);
    lVar5 = *(long *)(*(long *)(param_3 + 0x1670) + (ulong)(*(int *)(param_3 + 0x1668) - 1) * 8);
    fVar8 = 0.0;
    FUN_10064e5ec(0,lVar5,3,*(undefined8 *)(lVar5 + 0x20),3);
    uVar4 = *(int *)(param_3 + 0x1668) - 2;
    uVar6 = (ulong)uVar4;
    if (-1 < (int)uVar4) {
      do {
        puVar3 = (undefined8 *)(*(long *)(param_3 + 0x1670) + uVar6 * 8);
        fVar8 = 0.0;
        FUN_10064e5ec(0,*puVar3,3,puVar3[1],0);
        bVar1 = 0 < (long)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
    FUN_100534af8(lVar2);
    FUN_10064e3cc(lVar2);
    fVar7 = fVar8;
    FUN_10064e3cc(param_3 + 0xf20);
    local_4c = NEON_fminnm(fVar8 - fVar7,0);
    local_50 = 0x41a00000;
    FUN_100534e3c(lVar2,&local_50);
  }
  return;
}




void FUN_1000c9504(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  if (*(char *)(param_2 + 0x1680) != '\0') {
    return;
  }
  FUN_100642324(param_2 + 0xc0);
  uVar2 = FUN_100640840(0x3f800000,0x3e19999a,FUN_10001f4ac);
  lVar1 = DAT_101dbd2f8;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(param_1,puVar4);
  FUN_100640840(0,0x3e19999a,FUN_10001f4ac);
  FUN_100642b7c(param_2 + 0xc0,uVar2);
  uVar2 = FUN_100640840(0,0x3e19999a,FUN_10001f4ac);
  FUN_100642b14(param_2 + 0x178,uVar2);
  uVar2 = FUN_100640840(0,0x3e19999a,FUN_10001f4ac);
  FUN_100642b14(param_2 + 0x11b8,uVar2);
  uVar2 = FUN_100640840(0,0x3e19999a,FUN_10001f4ac);
  FUN_100642b14(param_2 + 0xfd8,uVar2);
  uVar2 = FUN_100640840(0,0x3e19999a,FUN_10001f4ac);
  FUN_100642b14(param_2 + 0x10c8,uVar2);
  return;
}




void FUN_1000c96c4(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  void *local_28;
  
  lVar1 = param_1 + 0x11b8;
  uVar3 = FUN_1005371e4(lVar1);
  if ((uVar3 & 1) == 0) {
    FUN_1004e3120(auStack_30,"");
    FUN_1006513c0(param_1 + 0x1380,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
    FUN_100536fe0(lVar1);
    uVar2 = *(uint *)(param_1 + 0x1fc);
    if ((uVar2 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x1fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5f80;
      FUN_1000200a0(param_1 + 0x178);
    }
    uVar2 = *(uint *)(param_1 + 0x105c);
    if ((uVar2 & 0x7f80) != 0x7900) {
      *(uint *)(param_1 + 0x105c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7900;
      FUN_1000200a0(param_1 + 0xfd8);
    }
    if ((*(uint *)(param_1 + 0x114c) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x114c) = *(uint *)(param_1 + 0x114c) & 0xffff807f | 0x3f80;
      FUN_1000200a0(param_1 + 0x10c8);
    }
    if ((~*(uint *)(param_1 + 0x123c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) | 0x7f80;
      FUN_1000200a0(lVar1);
    }
    FUN_100642324(param_1 + 0xc0);
    uVar4 = FUN_100640840(0x3f800000,0x3e19999a,FUN_10001f4ac);
    FUN_100642b14(param_1 + 0xc0,uVar4);
  }
  return;
}




void FUN_1000c97fc(long param_1,int param_2)

{
  undefined8 uVar1;
  
  FUN_1005375d0(param_1 + 0x11b8);
  FUN_100537100(param_1 + 0x11b8);
  if (param_2 != 0) {
    FUN_100642324(param_1 + 0xc0);
    uVar1 = FUN_100640840(0,0x3e19999a,FUN_10001f4ac);
    FUN_100642b14(param_1 + 0xc0,uVar1);
    return;
  }
  FUN_1000c9504(0x41000000,param_1);
  return;
}




void FUN_1000c9884(float param_1,long param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined4 local_44;
  
  lVar1 = param_2 + 0x178;
  local_44 = param_4;
  if (*(long *)(param_2 + 0x248) != 0) {
    FUN_100652d8c(lVar1);
  }
  plVar2 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar2 = param_3;
  }
  FUN_100652cac(lVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,plVar2);
  FUN_100652dd4(lVar1,&local_44,2);
  uVar3 = *(uint *)(param_2 + 0x1fc);
  if ((int)(param_1 * 255.0) != (uVar3 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x1fc) =
         uVar3 & 0xffff8000 | uVar3 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
    FUN_1000200a0(lVar1);
  }
  return;
}




void FUN_1000c993c(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) & 0xfffffff7 | uVar1;
  return;
}




void FUN_1000c995c(long param_1,int param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x1680) = (char)param_2;
  if (param_2 == 0) {
    FUN_1000c9504(0x41000000,param_1);
    return;
  }
  if ((~*(uint *)(param_1 + 0x144) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x7f80;
    FUN_1000200a0(param_1 + 0xc0);
  }
  uVar1 = *(uint *)(param_1 + 0x1fc);
  if ((uVar1 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x1fc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5f80;
    FUN_1000200a0(param_1 + 0x178);
  }
  uVar1 = *(uint *)(param_1 + 0x105c);
  if ((uVar1 & 0x7f80) != 0x7900) {
    *(uint *)(param_1 + 0x105c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x7900;
    FUN_1000200a0(param_1 + 0xfd8);
  }
  if ((*(uint *)(param_1 + 0x114c) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x114c) = *(uint *)(param_1 + 0x114c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0x10c8);
  }
  if ((~*(uint *)(param_1 + 0x123c) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) | 0x7f80;
  FUN_1000200a0(param_1 + 0x11b8);
  return;
}




void FUN_1000c9a60(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_100644b2c(param_2);
  if (lVar2 != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),lVar2);
  }
  cVar1 = *(char *)(param_1 + 0x1680);
  FUN_1005375d0(param_1 + 0x11b8);
  if (cVar1 == '\0') {
    FUN_100537100(param_1 + 0x11b8);
    FUN_1000c9504(0x41000000,param_1);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1000c9adc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  local_68 = (float)(**(code **)(*param_3 + 0x48))();
  plVar1 = param_3 + 0x18;
  fStack_64 = param_2;
  FUN_10064e48c(plVar1,&local_68);
  plVar4 = param_3 + 0x237;
  fVar7 = -20.0;
  FUN_1005371f8(local_68 + -20.0,plVar4);
  fVar5 = local_68;
  plVar2 = param_3 + 0x1fb;
  FUN_10064e3cc(plVar4);
  FUN_10064e47c(fVar5,plVar2);
  local_70 = (float)FUN_100652e60(plVar2);
  local_70 = local_70 + 12.0;
  fStack_6c = fVar7 + 12.0;
  FUN_10064e48c(param_3 + 0x219,&local_70);
  fVar9 = 0.0;
  FUN_10064e5ec(0,0x80000000,plVar4,2,plVar1,2);
  FUN_10064e5ec(0,0,plVar2,6,plVar1,6);
  fVar8 = 0.0;
  FUN_10064e5ec(0,param_3 + 0x219,8,plVar2,8);
  fVar7 = fStack_64;
  fVar5 = local_68;
  plVar2 = param_3 + 0x6b;
  FUN_10064e3cc(plVar4);
  if ((*(uint *)((long)param_3 + 0x114c) & 8) != 0) {
    fVar9 = 24.0;
  }
  fVar7 = fVar7 - (fVar8 + fVar9);
  FUN_10064e47c(fVar5,plVar2);
  plVar4 = param_3 + 0x2f;
  local_70 = (float)FUN_10064e3cc(plVar2);
  fStack_6c = fVar7;
  FUN_10064e48c(plVar4,&local_70);
  plVar3 = param_3 + 0x4d;
  uVar6 = FUN_100652e60(plVar4);
  FUN_100652e60(plVar3);
  FUN_10064e47c(uVar6,plVar3);
  local_70 = (float)FUN_10064e3cc(plVar2);
  fStack_6c = fVar7;
  FUN_10064e48c(param_3 + 0x9f,&local_70);
  FUN_10064e5ec(0,0,plVar4,8,plVar2,8);
  FUN_10064e5ec(0,0,plVar3,6,plVar4,6);
  FUN_10064e5ec(0,0,plVar2,4,plVar1,4);
  FUN_100537780(param_3 + 0x24e);
  FUN_1000c93a4(param_3);
  return;
}




void FUN_1000c9cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101454c30;
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000c9d28(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101454c30;
  thunk_FUN_100651068(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000c9d5c(uint *param_1,uint param_2)

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




long * FUN_1000c9dd8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100655644();
  puVar3[0x2b] = 0;
  *puVar3 = &PTR_thunk_FUN_1000c9eec_101454ed0;
  FUN_1006421a8(puVar3 + 0x2c);
  param_1[0x2c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  plVar1 = param_1 + 0x3f;
  FUN_1006421a8(plVar1);
  param_1[0x3f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x50);
  plVar2 = param_1 + 0x6e;
  thunk_FUN_100650e64(plVar2);
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  FUN_1004e3004(param_1 + 0x96);
  *(undefined2 *)(param_1 + 0x97) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x2c,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x50,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  return param_1;
}




long * thunk_FUN_1000c9dd8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100655644();
  puVar3[0x2b] = 0;
  *puVar3 = &PTR_thunk_FUN_1000c9eec_101454ed0;
  FUN_1006421a8(puVar3 + 0x2c);
  param_1[0x2c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  plVar1 = param_1 + 0x3f;
  FUN_1006421a8(plVar1);
  param_1[0x3f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x50);
  plVar2 = param_1 + 0x6e;
  thunk_FUN_100650e64(plVar2);
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  FUN_1004e3004(param_1 + 0x96);
  *(undefined2 *)(param_1 + 0x97) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x2c,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x50,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  return param_1;
}




void FUN_1000c9eec(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  *param_1 = &PTR_thunk_FUN_1000c9eec_101454ed0;
  plVar1 = (long *)param_1[0x3e];
  uVar2 = *(uint *)(param_1 + 0x3d);
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        uVar2 = *(uint *)(param_1 + 0x3d);
        plVar1 = (long *)param_1[0x3e];
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x3d) = 0;
  }
  thunk_FUN_100651068(param_1 + 0x6e);
  param_1[0x50] = &PTR_FUN_1014a7108;
  param_1[0x67] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6a);
  FUN_10064e2bc(param_1 + 0x50);
  FUN_10064221c(param_1 + 0x3f);
  if ((void *)param_1[0x3e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3e]);
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  FUN_10064221c(param_1 + 0x2c);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000c9eec(void)

{
  FUN_1000c9eec();
  return;
}




void FUN_1000c9fd8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c9eec();
  operator_delete(pvVar1);
  return;
}




void FUN_1000c9fec(long *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_58 [2];
  char local_41;
  
  param_1[0x94] = param_2;
  FUN_1000e88b4(local_58,*(undefined8 *)(param_2 + 8));
  pppuVar1 = (undefined8 ***)local_58[0];
  if (-1 < local_41) {
    pppuVar1 = local_58;
  }
  FUN_100652ca4(param_1 + 0x50,pppuVar1);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  local_58[0] = (undefined8 **)NEON_fmov(0x3f800000,4);
  FUN_1000ca0f8(param_1,7,local_58);
  local_58[0] = (undefined8 **)0x3f99999a3f99999a;
  FUN_1000ca0f8(param_1,8,local_58);
  local_58[0] = (undefined8 **)0x3f99999a3f99999a;
  FUN_1000ca0f8(param_1,9,local_58);
  local_58[0] = (undefined8 **)0x3f99999a3f99999a;
  FUN_1000ca0f8(param_1,10,local_58);
  local_58[0] = (undefined8 **)0x3f99999a3f99999a;
  FUN_1000ca0f8(param_1,0xb,local_58);
  local_58[0] = (undefined8 **)0x3f99999a3f99999a;
  FUN_1000ca0f8(param_1,0xc,local_58);
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1000ca0f8(long param_1,undefined8 param_2,float *param_3)

{
  code ****ppppcVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long local_88;
  code ***local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  
  pvVar4 = operator_new(0x838);
  local_88 = thunk_FUN_1000ac62c(pvVar4,1);
  iVar7 = (int)param_2;
  *(int *)(local_88 + 0x830) = iVar7;
  lVar5 = FUN_10011bc4c(param_2,*(undefined8 *)(param_1 + 0x4a0));
  if (lVar5 != 0) {
    if (iVar7 == 0xc) {
      FUN_100652d20((long)pvVar4 + 0x4d0,PTR_s_build___HUDParts_CandyShop_tga_10184e0d8,lVar5);
    }
    else {
      FUN_1000e88b4(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x4a0) + 8));
      ppppcVar1 = (code ****)local_80;
      if (-1 < local_70) {
        ppppcVar1 = &local_80;
      }
      FUN_100652d20((long)pvVar4 + 0x4d0,ppppcVar1,lVar5);
      if (local_70._7_1_ < '\0') {
        operator_delete(local_80);
      }
    }
    bVar3 = false;
    if ((*(float *)((long)pvVar4 + 0x518) == *param_3) &&
       (bVar3 = false, !NAN(*(float *)((long)pvVar4 + 0x51c)) && !NAN(param_3[1]))) {
      bVar3 = *(float *)((long)pvVar4 + 0x51c) == param_3[1];
    }
    if (!bVar3) {
      *(undefined8 *)((long)pvVar4 + 0x518) = *(undefined8 *)param_3;
      FUN_1000200a0((long)pvVar4 + 0x4d0);
    }
  }
  FUN_100183c50(0,pvVar4,&DAT_10115a164);
  FUN_1001b495c(0,pvVar4);
  FUN_100183ca8(pvVar4,1);
  uVar2 = *(uint *)((long)pvVar4 + 0x84);
  uVar6 = 0xff;
  if (iVar7 != 0xc) {
    uVar6 = 0xbf;
  }
  if (uVar6 != (uVar2 >> 7 & 0xff)) {
    *(uint *)((long)pvVar4 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar6 << 7;
    FUN_1000200a0(pvVar4);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x1e8);
  local_58 = DAT_101dbd45c;
  local_80 = (code ***)FUN_1000ca4e4;
  local_70 = 0;
  uStack_68 = 0;
  lVar5 = (long)pvVar4 + 8;
  lStack_78 = param_1;
  local_60 = uVar8;
  FUN_10001554c(lVar5,&local_80);
  local_58 = DAT_101dbd488;
  local_80 = (code ***)FUN_1000ca4e4;
  local_70 = 0;
  uStack_68 = 0;
  lStack_78 = param_1;
  local_60 = uVar8;
  FUN_10001554c(lVar5,&local_80);
  local_58 = DAT_101dbd460;
  local_80 = (code ***)FUN_1000ca4ec;
  local_70 = 0;
  uStack_68 = 0;
  lStack_78 = param_1;
  local_60 = uVar8;
  FUN_10001554c(lVar5,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = (code ***)FUN_1000ca4ec;
  local_70 = 0;
  uStack_68 = 0;
  lStack_78 = param_1;
  local_60 = uVar8;
  FUN_10001554c(lVar5,&local_80);
  FUN_100642bd8(param_1 + 0x160,pvVar4,1);
  FUN_1000ca4f4(param_1 + 0x1e8,&local_88);
  return;
}




void FUN_1000ca330(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (1 < *(uint *)(param_1 + 0x1e8)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + 8);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      FUN_10064e72c(0x425c0000,uVar2,3,uVar1,1);
      FUN_10064e72c(0,uVar2,5,uVar1,5);
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(long *)(param_1 + 0x1f0) + (ulong)*(uint *)(param_1 + 0x1e8) * 8));
  }
  FUN_1006557ec(param_1);
  return;
}




void FUN_1000ca3c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xffffffbf;
  lVar1 = param_1 + 0x280;
  if (*(char *)(param_1 + 0x4b8) == '\0') {
    uVar4 = 0xc2200000;
    uVar2 = 1;
    uVar3 = 3;
  }
  else {
    uVar4 = 0x42200000;
    uVar2 = 3;
    uVar3 = 1;
  }
  FUN_10064e72c(uVar4,lVar1,uVar2,param_1,uVar3);
  FUN_10064e72c(0,lVar1,5,param_1,5);
  FUN_10064e72c(0x40c00000,param_1 + 0x370,0,lVar1,2);
  FUN_10064e72c(0,param_1 + 0x370,4,lVar1,4);
  return;
}




void FUN_1000ca478(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x1e8);
  if (*(uint *)(param_1 + 0x1e8) != 0) {
    plVar2 = *(long **)(param_1 + 0x1f0);
    plVar3 = plVar2;
    do {
      if (*(int *)(*plVar3 + 0x830) == param_2) {
        FUN_1001b4c0c(*plVar3,param_3);
        uVar1 = (ulong)*(uint *)(param_1 + 0x1e8);
        plVar2 = *(long **)(param_1 + 0x1f0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar1);
  }
  return;
}




void FUN_1000ca4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000ca574(param_1,param_2,param_5);
  return;
}




void FUN_1000ca4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000ca7b4(param_1,param_2,param_5);
  return;
}




void FUN_1000ca4f4(uint *param_1,undefined8 *param_2)

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
    FUN_1000ca900(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000ca574(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x1f0) + (param_3 & 0xffffffff) * 8);
  if (*(int *)(lVar2 + 0x830) != 0) {
    if (*(long *)(param_1 + 0x4a8) == lVar2) {
      FUN_1000ca6a8(param_1);
    }
    else {
      FUN_1000ca5f0();
    }
  }
  uVar1 = FUN_100644a94("UI::HUD::ON_DOWN_EMOTE_PANEL");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000ca5f0(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  
  FUN_1004e3004(param_1 + 0x4b0);
  *(long *)(param_1 + 0x4a8) = param_2;
  *(undefined4 *)(param_2 + 0x834) = 1;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) | 4;
  *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) & 0xfffffffb;
  FUN_1000ca848(param_1,*(undefined4 *)(param_2 + 0x830));
  uVar2 = FUN_10011bc4c(*(undefined4 *)(param_2 + 0x830),*(undefined8 *)(param_1 + 0x4a0));
  FUN_100652cdc(param_1 + 0x280,uVar2);
  fVar3 = 1.25;
  if (*(int *)(param_2 + 0x830) != 7) {
    fVar3 = 1.5;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x2c8) == fVar3) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x2cc)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x2cc) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x2c8) = fVar3;
    *(float *)(param_1 + 0x2cc) = fVar3;
    FUN_1000200a0(param_1 + 0x280);
  }
  FUN_1000ca3c4(param_1);
  return;
}




void FUN_1000ca6a8(long param_1)

{
  undefined4 uVar1;
  uint64_t uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_38 [8];
  void *local_30;
  int local_24;
  
  if (*(int *)(*(long *)(param_1 + 0x4a8) + 0x830) == 0xc) {
    local_24 = 1;
    *(undefined4 *)(*(long *)(param_1 + 0x4a8) + 0x834) = 1;
    uVar1 = 0xc;
  }
  else {
    uVar2 = _mach_absolute_time();
    fVar5 = (float)((double)((uVar2 - *(long *)(param_1 + 0x4b0)) * DAT_101d91638) * 1e-09);
    local_24 = (int)(fVar5 + fVar5);
    lVar4 = *(long *)(param_1 + 0x4a8);
    *(int *)(lVar4 + 0x834) = local_24;
    uVar1 = *(undefined4 *)(lVar4 + 0x830);
  }
  uVar3 = FUN_10011bc70(uVar1,*(undefined8 *)(param_1 + 0x4a0),&local_24);
  FUN_100652cdc(param_1 + 0x280,uVar3);
  if (local_24 < 2) {
    *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) & 0xfffffffb;
  }
  else {
    FUN_1004e313c(auStack_38);
    FUN_1004e38ac(auStack_38,"x%d");
    FUN_1006513c0(param_1 + 0x370,auStack_38);
    *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) | 4;
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
    }
  }
  FUN_1000ca3c4(param_1);
  return;
}




void FUN_1000ca7b4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x1f0) + (param_3 & 0xffffffff) * 8);
  (**(code **)**(undefined8 **)(param_1 + 0x158))
            (*(undefined8 **)(param_1 + 0x158),*(undefined4 *)(lVar2 + 0x830),
             *(undefined4 *)(lVar2 + 0x834));
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xfffffffb;
  uVar1 = FUN_100644a94("UI::HUD::ON_RELEASE_EMOTE_PANEL");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000ca834(long param_1)

{
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xfffffffb;
  return;
}




void FUN_1000ca848(long param_1,int param_2)

{
  undefined8 ***pppuVar1;
  undefined1 uVar2;
  undefined8 **local_48 [2];
  char local_31;
  
  if (param_2 == 0xc) {
    if (*(char *)(param_1 + 0x4b9) != '\0') {
      return;
    }
    FUN_100652d8c(param_1 + 0x280);
    FUN_100652ca4(param_1 + 0x280,PTR_s_build___HUDParts_CandyShop_tga_10184e0d8);
    uVar2 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x4b9) == '\0') {
      return;
    }
    FUN_100652d8c(param_1 + 0x280);
    FUN_1000e88b4(local_48,*(undefined8 *)(*(long *)(param_1 + 0x4a0) + 8));
    pppuVar1 = (undefined8 ***)local_48[0];
    if (-1 < local_31) {
      pppuVar1 = local_48;
    }
    FUN_100652ca4(param_1 + 0x280,pppuVar1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x4b9) = uVar2;
  return;
}




void FUN_1000ca900(uint *param_1,uint param_2)

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




long FUN_1000ca97c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  puVar1[0x11] = 0;
  *puVar1 = &PTR_thunk_FUN_1000caa80_101455020;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  *(undefined2 *)(puVar1 + 0x19) = 0xff;
  *(undefined1 *)((long)puVar1 + 0xca) = 0;
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0x6b7b66e5,FUN_1000ca9fc,0);
  FUN_1000caa0c(param_1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  return param_1;
}




void FUN_1000ca9fc(long param_1)

{
  FUN_1000cb164(param_1,*(char *)(param_1 + 0xc9) == '\0');
  return;
}




void FUN_1000caa0c(long *param_1)

{
  long lVar1;
  
  operator_new(0xba0);
  lVar1 = thunk_FUN_1001c10a4();
  param_1[0x12] = lVar1;
  *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 0x10;
  operator_new(0x168);
  lVar1 = FUN_100650334();
  param_1[0x13] = lVar1;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x12],1);
                    /* WARNING: Could not recover jumptable at 0x0001000caa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x12] + 0x78))((long *)param_1[0x12],param_1[0x13],1);
  return;
}




long thunk_FUN_1000ca97c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  puVar1[0x11] = 0;
  *puVar1 = &PTR_thunk_FUN_1000caa80_101455020;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  *(undefined2 *)(puVar1 + 0x19) = 0xff;
  *(undefined1 *)((long)puVar1 + 0xca) = 0;
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0x6b7b66e5,FUN_1000ca9fc,0);
  FUN_1000caa0c(param_1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  return param_1;
}




void FUN_1000caa80(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_1000caa80_101455020;
  puVar4 = (uint *)(param_1 + 0x14);
  uVar3 = *puVar4;
  plVar2 = (long *)param_1[0x15];
  plVar5 = plVar2;
  if (uVar3 != 0) {
    do {
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
        uVar3 = *(uint *)(param_1 + 0x14);
        plVar2 = (long *)param_1[0x15];
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2 + uVar3);
  }
  if (plVar2 != (long *)0x0) {
    *puVar4 = 0;
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  param_1[0x12] = 0;
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  param_1[0x13] = 0;
  uVar1 = FUN_1000bdb98();
  FUN_1004e1b58(uVar1,param_1);
  pcStack_38 = FUN_1000cb2d4;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete__((void *)param_1[0x17]);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0x15] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_1000caa80(void)

{
  FUN_1000caa80();
  return;
}




void FUN_1000cab7c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000caa80();
  operator_delete(pvVar1);
  return;
}




void FUN_1000cab90(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  ulong uVar2;
  long local_80;
  undefined1 local_71;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  local_71 = (undefined1)param_3;
  uVar2 = (ulong)*(uint *)(param_1 + 0xb0);
  pvVar1 = operator_new(0x2b8);
  local_80 = thunk_FUN_1000e0104(pvVar1,param_2,param_3);
  FUN_1000cacf0(param_1 + 0xa0,&local_80);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),local_80,1);
  FUN_1000cad70((uint *)(param_1 + 0xb0),&local_71);
  local_48 = DAT_101dbd45c;
  local_70 = FUN_1000cadf0;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = uVar2;
  FUN_10001554c(local_80 + 8,&local_70);
  local_48 = DAT_101dbd488;
  local_70 = FUN_1000cadf0;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = uVar2;
  FUN_10001554c(local_80 + 8,&local_70);
  local_48 = DAT_101dbd460;
  local_70 = FUN_1000cae28;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = uVar2;
  FUN_10001554c(local_80 + 8,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_1000cae28;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = uVar2;
  FUN_10001554c(local_80 + 8,&local_70);
  *(uint *)(local_80 + 0x84) = *(uint *)(local_80 + 0x84) | 0x10;
  return;
}




void FUN_1000cacf0(uint *param_1,undefined8 *param_2)

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
    FUN_1000cb2e8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000cad70(uint *param_1,undefined1 *param_2)

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
    FUN_1000cb364(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined1 *)((ulong)(uVar3 + 1) + *(long *)(param_1 + 2) + -1) = *param_2;
  return;
}




void FUN_1000cadf0(long param_1)

{
  undefined8 in_x4;
  
  FUN_1000cb208(param_1,in_x4);
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_1000ca834();
    return;
  }
  return;
}




void FUN_1000cae28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000cb25c(param_1,param_2,param_5);
  return;
}




void FUN_1000cae30(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0xb0) != 0) {
    uVar1 = 0;
    do {
      if (*(byte *)(*(long *)(param_1 + 0xb8) + uVar1) == param_2) goto LAB_1000cae5c;
      uVar1 = uVar1 + 1;
    } while (*(uint *)(param_1 + 0xb0) != uVar1);
  }
  uVar1 = 0;
LAB_1000cae5c:
  lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + uVar1 * 8);
  uVar3 = 4;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xfffffffb | uVar3;
  lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + uVar1 * 8);
  uVar3 = 0x40;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffbf | uVar3;
  FUN_1000caea4();
  return;
}




void FUN_1000caea4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar4;
  float fVar5;
  undefined8 *puVar3;
  
  fVar4 = 0.0;
  if ((*(char *)(param_1 + 0xca) != '\0') && (*(long **)(param_1 + 0xc0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x138))();
    fVar4 = (float)(**(code **)(**(long **)(param_1 + 0xc0) + 0x48))();
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xa8);
    do {
      puVar3 = puVar2 + 1;
      fVar4 = (float)FUN_1000e02b0(*puVar2);
      fVar4 = fVar4 + 100.0;
      puVar1 = *(undefined8 **)(param_1 + 0xa8);
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + *(uint *)(param_1 + 0xa0));
    if (*(uint *)(param_1 + 0xa0) != 0) {
      do {
        FUN_1000e0218(fVar4,0x42e00000,*puVar1);
        puVar2 = puVar1 + 1;
        FUN_1000e0268(*puVar1);
        puVar1 = puVar2;
      } while (puVar2 != (undefined8 *)
                         (*(long *)(param_1 + 0xa8) + (ulong)*(uint *)(param_1 + 0xa0) * 8));
    }
  }
  FUN_100650364(0x41400000,*(undefined8 *)(param_1 + 0x98),1,3);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x138))();
  fVar5 = 12.0;
  FUN_10064e68c(0x41400000,0x41400000,*(undefined8 *)(param_1 + 0x98),0);
  (**(code **)(**(long **)(param_1 + 0x90) + 0x58))(*(long **)(param_1 + 0x90),1,0,0,0);
  FUN_1001c1270(0x3f800000,fVar4 + 24.0,fVar5 + 24.0,*(undefined8 *)(param_1 + 0x90),1,1);
  FUN_1001c34ac(0x41400000,0x41400000,(undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,
                *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
  FUN_1001c35d4(0x3f59999a,0,*(undefined8 *)(param_1 + 0x90),&DAT_10115a164);
  return;
}




void FUN_1000cb020(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  *(undefined1 *)(param_1 + 0xca) = 1;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  if ((*(long *)(param_1 + 0x98) != 0) && (uVar1 = FUN_100642d08(param_2), (uVar1 & 1) == 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),param_2,0);
  }
  local_28 = FUN_100644a94("UI::HUD::ON_DOWN_EMOTE_PANEL");
  local_50 = FUN_1000cb0ec;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&local_50);
  local_28 = FUN_100644a94("UI::HUD::ON_RELEASE_EMOTE_PANEL");
  local_50 = FUN_1000cb12c;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&local_50);
  FUN_1000caea4(param_1);
  return;
}




void FUN_1000cb0ec(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 200) != 0xff) {
    FUN_1000e0224(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)*(byte *)(param_1 + 200) * 8),0
                 );
    *(undefined1 *)(param_1 + 200) = 0xff;
  }
  return;
}




void FUN_1000cb12c(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_1000cb2d4;
  local_20 = param_1;
  FUN_100643618(0xbf800000,&local_20,0,0);
  return;
}




void FUN_1000cb164(long param_1,int param_2)

{
  long local_20;
  code *pcStack_18;
  
  if (param_2 == 0) {
    pcStack_18 = FUN_1000cb2d4;
    local_20 = param_1;
    FUN_100643618(0xbf800000,&local_20,0,0);
  }
  else {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 8;
    *(undefined1 *)(param_1 + 0xc9) = 1;
  }
  return;
}




void FUN_1000cb1b8(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  pcStack_28 = FUN_1000cb2d4;
  local_30 = param_1;
  FUN_100643618(0xbf800000,&local_30,0,0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_1000ca834();
  }
  return;
}




void FUN_1000cb208(long param_1,uint param_2)

{
  if ((uint)*(byte *)(param_1 + 200) < *(uint *)(param_1 + 0xa0)) {
    FUN_1000e0224(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)*(byte *)(param_1 + 200) * 8),0
                 );
  }
  FUN_1000e0224(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)param_2 * 8),1);
  *(char *)(param_1 + 200) = (char)param_2;
  return;
}




void FUN_1000cb25c(long param_1,undefined8 param_2,ulong param_3)

{
  long local_30;
  code *pcStack_28;
  
  (**(code **)**(undefined8 **)(param_1 + 0x88))
            (*(undefined8 **)(param_1 + 0x88),
             *(undefined1 *)(*(long *)(param_1 + 0xb8) + (param_3 & 0xffffffff)));
  FUN_1000e0224(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (param_3 & 0xffffffff) * 8),0);
  *(undefined1 *)(param_1 + 200) = 0xff;
  pcStack_28 = FUN_1000cb2d4;
  local_30 = param_1;
  FUN_100643618(0xbf800000,&local_30,0,0);
  return;
}




void FUN_1000cb2d4(long param_1)

{
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  return;
}




void FUN_1000cb2e8(uint *param_1,uint param_2)

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




void FUN_1000cb364(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2);
    puVar2 = *(undefined1 **)(param_1 + 2);
    uVar3 = (ulong)*param_1;
    puVar4 = puVar1;
    puVar5 = puVar2;
    if (*param_1 != 0) {
      do {
        *puVar4 = *puVar5;
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined1 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined1 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1000cb3d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  puVar3[0x11] = 0;
  *puVar3 = &PTR_thunk_FUN_1000cb4f8_101455120;
  puVar3 = puVar3 + 0x12;
  thunk_FUN_1001c10a4(puVar3);
  plVar1 = param_1 + 0x186;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x1b1;
  thunk_FUN_100650e64(plVar2);
  FUN_100650334(param_1 + 0x1d7);
  param_1[0x207] = 0;
  param_1[0x206] = 0;
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1044) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,param_1 + 0x1d7,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0,&DAT_10115a168);
  uVar4 = FUN_1004e0150("HUD_STORE_RECOMMEND_TO",0);
  FUN_1006513c0(plVar2,uVar4);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffff7;
  return param_1;
}




long * thunk_FUN_1000cb3d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  puVar3[0x11] = 0;
  *puVar3 = &PTR_thunk_FUN_1000cb4f8_101455120;
  puVar3 = puVar3 + 0x12;
  thunk_FUN_1001c10a4(puVar3);
  plVar1 = param_1 + 0x186;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x1b1;
  thunk_FUN_100650e64(plVar2);
  FUN_100650334(param_1 + 0x1d7);
  param_1[0x207] = 0;
  param_1[0x206] = 0;
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1044) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,param_1 + 0x1d7,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0,&DAT_10115a168);
  uVar4 = FUN_1004e0150("HUD_STORE_RECOMMEND_TO",0);
  FUN_1006513c0(plVar2,uVar4);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffff7;
  return param_1;
}




void FUN_1000cb4f8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  *param_1 = &PTR_thunk_FUN_1000cb4f8_101455120;
  plVar1 = (long *)param_1[0x205];
  uVar3 = *(uint *)(param_1 + 0x204);
  plVar4 = plVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)*plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x204);
        plVar1 = (long *)param_1[0x205];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar3);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  if ((void *)param_1[0x207] != (void *)0x0) {
    operator_delete__((void *)param_1[0x207]);
    param_1[0x207] = 0;
    param_1[0x206] = 0;
    plVar1 = (long *)param_1[0x205];
  }
  if (plVar1 != (long *)0x0) {
    operator_delete__(plVar1);
    param_1[0x204] = 0;
    param_1[0x205] = 0;
  }
  param_1[0x1d7] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1ee);
  FUN_10064e2bc(param_1 + 0x1d7);
  thunk_FUN_100651068(param_1 + 0x1b1);
  param_1[0x186] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x19d);
  FUN_10064e2bc(param_1 + 0x186);
  FUN_1000cbf18(param_1 + 0x12);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_1000cbf18(void)

{
  FUN_1000cbf18();
  return;
}




void thunk_FUN_1000cb4f8(void)

{
  FUN_1000cb4f8();
  return;
}




void FUN_1000cb5f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000cb4f8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000cb60c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long local_80;
  undefined4 local_74;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  local_74 = param_2;
  pvVar2 = operator_new(0x490);
  local_80 = FUN_1000cbb28(pvVar2,param_3,param_4);
  uVar3 = (ulong)*(uint *)(param_1 + 0x1020);
  local_48 = DAT_101dbd45c;
  local_70 = FUN_1000cb760;
  local_60 = 0;
  uStack_58 = 0;
  lVar1 = local_80 + 8;
  lStack_68 = param_1;
  local_50 = uVar3;
  FUN_10001554c(lVar1,&local_70);
  local_48 = DAT_101dbd488;
  local_70 = FUN_1000cb760;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = uVar3;
  FUN_10001554c(lVar1,&local_70);
  local_48 = DAT_101dbd460;
  local_70 = FUN_1000cb76c;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = uVar3;
  FUN_10001554c(lVar1,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_1000cb76c;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = uVar3;
  FUN_10001554c(lVar1,&local_70);
  *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x10;
  FUN_100655930(param_1 + 0xeb8,pvVar2,1);
  FUN_1000cb774(param_1 + 0x1020,&local_80);
  FUN_1000228fc(param_1 + 0x1030,&local_74);
  return;
}




void FUN_1000cb760(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_1000cba14(param_1,in_x4,1);
  return;
}




void FUN_1000cb76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000cbad8(param_1,param_2,param_5);
  return;
}




void FUN_1000cb774(uint *param_1,undefined8 *param_2)

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
    FUN_1000cc0ac(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000cb7f4(long param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  cVar1 = *(char *)(param_1 + 0x1044);
  if (cVar1 != '\0') {
LAB_1000cb810:
    FUN_1000cb84c(param_1,cVar1 == '\0');
    return;
  }
  lVar2 = FUN_10005fe04();
  if (lVar2 != 0) {
    FUN_10005fe04();
    fVar3 = (float)FUN_100060518();
    if (fVar3 <= 0.0) goto LAB_1000cb810;
  }
  return;
}




void FUN_1000cb84c(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7 | uVar1;
  *(char *)(param_1 + 0x1044) = (char)param_2;
  uVar1 = *(uint *)(param_1 + 0x1020);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x1028);
    plVar4 = plVar2;
    do {
      lVar3 = *plVar4;
      if ((*(uint *)(lVar3 + 0x10c) & 0x7f80) != 0x600) {
        *(uint *)(lVar3 + 0x10c) = *(uint *)(lVar3 + 0x10c) & 0xffff807f | 0x600;
        FUN_1000200a0(lVar3 + 0x88);
        uVar1 = *(uint *)(param_1 + 0x1020);
        plVar2 = *(long **)(param_1 + 0x1028);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar1);
  }
  *(undefined4 *)(param_1 + 0x1040) = 0xffffffff;
  return;
}




void FUN_1000cb8e4(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)param_2;
  if (*(int *)(param_3 + 0x1020) != 0) {
    plVar2 = *(long **)(param_3 + 0x1028);
    do {
      plVar3 = plVar2 + 1;
      plVar2 = (long *)*plVar2;
      plVar2[0x91] = 0x4300000043e40000;
      (**(code **)(*plVar2 + 0x90))();
      fVar5 = (float)param_2;
      plVar2 = plVar3;
    } while (plVar3 != (long *)(*(long *)(param_3 + 0x1028) + (ulong)*(uint *)(param_3 + 0x1020) * 8
                               ));
  }
  lVar1 = param_3 + 0xeb8;
  FUN_100650364(0x41400000,lVar1,1,3);
  FUN_1006503cc(lVar1);
  FUN_10064e72c(0x41400000,lVar1,0,param_3 + 0xd88,2);
  lVar1 = param_3 + 0xc30;
  FUN_1006557ec(lVar1);
  FUN_10064e72c(0,param_3 + 0xd88,4,lVar1,4);
  fVar4 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  FUN_1001c1270(0x3e4ccccd,fVar4 + 24.0,fVar5 + 24.0,param_3 + 0x90,0,1);
  FUN_1001c34ac(0x41400000,0x41400000,(undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,param_3 + 0x90,
                lVar1);
  *(uint *)(param_3 + 0xcb4) = *(uint *)(param_3 + 0xcb4) | 0x10;
  return;
}




void FUN_1000cba14(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0x1040) != param_2) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x1028) + (ulong)param_2 * 8);
    uVar1 = *(uint *)(lVar2 + 0x10c);
    uVar3 = 0x3f;
    if (param_3 == 0) {
      uVar3 = 0xc;
    }
    if (uVar3 != (uVar1 >> 7 & 0xff)) {
      *(uint *)(lVar2 + 0x10c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar3 << 7;
      FUN_1000200a0(lVar2 + 0x88);
    }
    if (param_3 == 0) {
      param_2 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x1040);
      if ((-1 < (int)uVar3) && (uVar3 < *(uint *)(param_1 + 0x1020))) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x1028) + (ulong)uVar3 * 8);
        if ((*(uint *)(lVar2 + 0x10c) & 0x7f80) != 0x600) {
          *(uint *)(lVar2 + 0x10c) = *(uint *)(lVar2 + 0x10c) & 0xffff807f | 0x600;
          FUN_1000200a0(lVar2 + 0x88);
        }
      }
    }
    *(uint *)(param_1 + 0x1040) = param_2;
  }
  return;
}




void FUN_1000cbad8(long param_1,undefined8 param_2,ulong param_3)

{
  (**(code **)**(undefined8 **)(param_1 + 0x88))
            (*(undefined8 **)(param_1 + 0x88),
             *(undefined4 *)(*(long *)(param_1 + 0x1038) + (param_3 & 0xffffffff) * 4));
  FUN_1000cb84c(param_1,0);
  FUN_1000cba14(param_1,param_3,0);
  return;
}




long * FUN_1000cbb28(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_101455220;
  puVar4 = puVar4 + 0x11;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(puVar4,&DAT_10115a168,2);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar1,&DAT_10114bf18,2);
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100061e08(plVar2,param_2);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10114bf18);
  FUN_1006513c0(plVar3,param_3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f | 0x600;
    FUN_1000200a0(puVar4);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}




void FUN_1000cbce8(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10064e48c(param_1 + 0x88,param_1 + 0x488);
  lVar1 = param_1 + 0x178;
  FUN_10064e47c(0x42c80000,0x42c80000,lVar1);
  FUN_10064e47c(0x42b00000,0x42b00000,param_1 + 0x268);
  FUN_10064e68c(0x41a00000,0,lVar1,7);
  FUN_10064e5ec(0,0,param_1 + 0x268,8,lVar1,8);
  lVar2 = param_1 + 0x358;
  FUN_10064e72c(0x41a00000,lVar2,3,lVar1,1);
  FUN_10064e72c(0,lVar2,5,lVar1,5);
  FUN_10065179c(*(float *)(param_1 + 0x488) + -160.0,0,0x3f800000,lVar2);
  return;
}




undefined4 FUN_1000cbdc8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x488);
}




void FUN_1000cbdd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101455220;
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000cbe74(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101455220;
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000cbf18(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000cbf18_101455320;
  param_1[0x154] = &PTR_FUN_1014a7108;
  param_1[0x16b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x16e);
  FUN_10064e2bc(param_1 + 0x154);
  param_1[0x136] = &PTR_FUN_1014a7108;
  param_1[0x14d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x150);
  FUN_10064e2bc(param_1 + 0x136);
  param_1[0x118] = &PTR_FUN_1014a7108;
  param_1[0x12f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x132);
  FUN_10064e2bc(param_1 + 0x118);
  param_1[0xfa] = &PTR_FUN_1014a7108;
  param_1[0x111] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x114);
  FUN_10064e2bc(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_1014a7108;
  param_1[0xf3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf6);
  FUN_10064e2bc(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000cc098(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000cbf18();
  operator_delete(pvVar1);
  return;
}




void FUN_1000cc0ac(uint *param_1,uint param_2)

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




long * FUN_1000cc128(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint *puVar16;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_78;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  puVar6 = puVar5 + 0x18;
  *puVar5 = &PTR_thunk_FUN_1000cc890_101455468;
  FUN_10064e264();
  lVar11 = 0;
  do {
    FUN_1000e142c((long)param_1 + lVar11 + 0x178);
    lVar11 = lVar11 + 0x370;
  } while (lVar11 != 0x1ef0);
  plVar12 = param_1 + 0x40d;
  lVar11 = 0x5b68;
  do {
    lVar7 = thunk_FUN_1005357f4(plVar12);
    plVar12 = (long *)(lVar7 + 0xa28);
    lVar11 = lVar11 + -0xa28;
  } while (lVar11 != 0);
  plVar12 = param_1 + 0xf7a;
  lVar11 = 0;
  do {
    FUN_10064e264((long)plVar12 + lVar11);
    lVar11 = lVar11 + 0xb8;
  } while (lVar11 != 0x678);
  FUN_1000e142c();
  param_1[0x10c6] = 0;
  param_1[0x10c5] = 0;
  param_1[0x10c8] = 0;
  param_1[0x10c7] = 0;
  param_1[0x10c2] = 0;
  param_1[0x10c1] = 0;
  param_1[0x10c4] = 0;
  param_1[0x10c3] = 0;
  param_1[0x10be] = 0;
  param_1[0x10bd] = 0;
  param_1[0x10c0] = 0;
  param_1[0x10bf] = 0;
  param_1[0x10ba] = 0;
  param_1[0x10b9] = 0;
  param_1[0x10bc] = 0;
  param_1[0x10bb] = 0;
  plVar1 = param_1 + 0x10c9;
  param_1[0x10b8] = 0;
  param_1[0x10b7] = 0;
  FUN_1001b11fc();
  thunk_FUN_1001f67f4(param_1 + 0x10e3);
  plVar14 = param_1 + 0x10e5;
  *plVar14 = (long)&PTR_FUN_101455968;
  operator_new(0x13c0);
  lVar11 = thunk_FUN_100295c20();
  param_1[0x10e6] = lVar11;
  *(long **)(lVar11 + 0xb8) = plVar14;
  FUN_10014f4a0(param_1 + 0x10e7);
  uVar13 = 0;
  *plVar14 = (long)&PTR_FUN_1014555b0;
  param_1[0x10e7] = (long)&PTR_FUN_1014555d0;
  param_1[0x10ea] = 0;
  *(undefined1 *)(param_1 + 0x10eb) = 0;
  uVar3 = DAT_101d91884;
  puVar16 = (uint *)((long)param_1 + 0x1fc);
  plVar14 = param_1 + 0x40d;
  do {
    iVar4 = (int)uVar13;
    if ((iVar4 == 1) || (iVar4 == 2)) {
      iVar4 = FUN_10012709c();
      if (iVar4 != 1) goto LAB_1000cc358;
LAB_1000cc2c4:
      local_78 = uVar3;
      plVar12 = (long *)((ulong)plVar12 & 0xffffffff00000000 | uVar13);
      local_a0 = FUN_1000cc74c;
      local_90 = 0;
      local_88 = 0;
      plStack_98 = param_1;
      local_80 = plVar12;
      FUN_10001554c(puVar16 + -0x1f,&local_a0);
      *puVar16 = *puVar16 | 0x10;
      FUN_100651038(puVar16 + 0x6f,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
      lVar11 = FUN_100315bc8(uVar13);
      FUN_1006513c0(puVar16 + 0x6f,lVar11 + 8);
      FUN_100534ef4(plVar14,PTR_s_build___HUDPartsCommon_atlas_10184e098,1);
      local_a0 = (code *)CONCAT71(local_a0._1_7_,1);
      FUN_100534ebc(plVar14,&local_a0);
    }
    else {
      if ((iVar4 != 8) || (lVar11 = FUN_100134104(), *(char *)(lVar11 + 0xc) != '\0'))
      goto LAB_1000cc2c4;
LAB_1000cc358:
      *puVar16 = *puVar16 & 0xfffffffb;
    }
    uVar13 = uVar13 + 1;
    puVar16 = puVar16 + 0xdc;
    plVar14 = plVar14 + 0x145;
  } while (uVar13 != 9);
  local_78 = uVar3;
  local_a0 = FUN_1000cc754;
  local_88 = 0;
  local_80 = (long *)0x0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x104a,&local_a0);
  *(uint *)((long)param_1 + 0x82cc) = *(uint *)((long)param_1 + 0x82cc) | 0x10;
  FUN_100651038(param_1 + 0x1091,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar8 = FUN_1004e0150("HUD_SETTINGS_TITLE",0);
  FUN_1006513c0(param_1 + 0x1091,uVar8);
  FUN_1000e14d8(param_1 + 0x1049,0);
  iVar4 = 0;
  do {
    puVar9 = (undefined4 *)FUN_100315be0(iVar4);
    iVar2 = puVar9[5];
    if (iVar2 == 3) {
      pvVar10 = operator_new(0x540);
      uVar8 = thunk_FUN_1000e156c(pvVar10,*puVar9);
      FUN_1000e17f0(0x3e4ccccd,uVar8,*(long *)(puVar9 + 0x12) + 8,
                    PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
      FUN_10064e47c(0x442f0000,0x43480000,pvVar10);
      plVar12 = param_1 + (ulong)(uint)puVar9[4] * 2 + 0x10b7;
      local_a0 = (code *)((long)pvVar10 + 0xb8);
LAB_1000cc53c:
      FUN_1000cc758(plVar12,&local_a0);
    }
    else {
      if (iVar2 == 2) {
        pvVar10 = operator_new(0x2b0);
        uVar8 = thunk_FUN_1000e0a84(pvVar10,*puVar9);
        FUN_1000e0dc0(uVar8,puVar9 + 0xc);
        if (puVar9[0x10] != 0) {
          lVar11 = *(long *)(puVar9 + 0x12);
          do {
            FUN_1000e0c00(pvVar10,lVar11 + 8,lVar11 + 0x18);
            lVar11 = lVar11 + 0x28;
          } while (lVar11 != *(long *)(puVar9 + 0x12) + (ulong)(uint)puVar9[0x10] * 0x28);
        }
        plVar12 = param_1 + (ulong)(uint)puVar9[4] * 2 + 0x10b7;
        local_a0 = (code *)((long)pvVar10 + 0x158);
        goto LAB_1000cc53c;
      }
      if (iVar2 == 1) {
        pvVar10 = operator_new(0x948);
        uVar8 = thunk_FUN_1000e0f08(pvVar10,*puVar9);
        FUN_1000e10f8(uVar8,*(long *)(puVar9 + 0x12) + 8);
        FUN_1000e1318(pvVar10,*(long *)(puVar9 + 0x12) + 0x18);
        plVar12 = param_1 + (ulong)(uint)puVar9[4] * 2 + 0x10b7;
        local_a0 = (code *)((long)pvVar10 + 0x240);
        goto LAB_1000cc53c;
      }
    }
    uVar3 = DAT_101d23038;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x22);
  lVar11 = 0;
  do {
    if (*(uint *)(param_1 + lVar11 * 2 + 0x10b7) != 0) {
      puVar5 = (undefined8 *)param_1[lVar11 * 2 + 0x10b8];
      do {
        lVar7 = (**(code **)(*(long *)*puVar5 + 0x20))();
        puVar15 = puVar5 + 1;
        local_80 = (long *)*puVar5;
        local_78 = uVar3;
        local_a0 = FUN_1000cc7d8;
        local_90 = 0;
        local_88 = 0;
        plStack_98 = param_1;
        FUN_10001554c(lVar7 + 8,&local_a0);
        puVar5 = puVar15;
      } while (puVar15 !=
               (undefined8 *)
               (param_1[lVar11 * 2 + 0x10b8] + (ulong)*(uint *)(param_1 + lVar11 * 2 + 0x10b7) * 8))
      ;
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 9);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  lVar11 = 0;
  do {
    FUN_100642bd8(puVar6,param_1 + lVar11 * 0x6e + 0x2f,1);
    if ((int)lVar11 == 7) {
      uVar13 = FUN_10012ced4();
      if ((uVar13 & 1) != 0) goto LAB_1000cc65c;
      lVar7 = param_1[0x10e6];
LAB_1000cc698:
      FUN_1001b127c(plVar1,lVar7);
    }
    else {
      if ((int)lVar11 == 1) {
        lVar7 = param_1[0x10e4];
        goto LAB_1000cc698;
      }
LAB_1000cc65c:
      FUN_1001b127c(plVar1,param_1 + lVar11 * 0x145 + 0x40d);
      FUN_100534ad8(param_1 + lVar11 * 0x145 + 0x40d,param_1 + lVar11 * 0x17 + 0xf7a,1);
    }
    if (*(uint *)(param_1 + lVar11 * 2 + 0x10b7) != 0) {
      puVar5 = (undefined8 *)param_1[lVar11 * 2 + 0x10b8];
      do {
        puVar15 = puVar5 + 1;
        uVar8 = (**(code **)(*(long *)*puVar5 + 0x20))();
        (**(code **)(param_1[lVar11 * 0x17 + 0xf7a] + 0x78))
                  (param_1 + lVar11 * 0x17 + 0xf7a,uVar8,1);
        puVar5 = puVar15;
      } while (puVar15 !=
               (undefined8 *)
               (param_1[lVar11 * 2 + 0x10b8] + (ulong)*(uint *)(param_1 + lVar11 * 2 + 0x10b7) * 8))
      ;
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 9) {
      FUN_100642bd8(puVar6,param_1 + 0x1049,1);
      FUN_1000cc828(param_1,0);
      return param_1;
    }
  } while( true );
}




void FUN_1000cc74c(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_1000cc828(param_1,in_x4);
  return;
}




void FUN_1000cc754(void)

{
  return;
}




void FUN_1000cc758(uint *param_1,undefined8 *param_2)

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
    FUN_1000cd464(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000cc7d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100644b2c(param_4);
  (*(code *)**(undefined8 **)param_1[0x17])
            ((undefined8 *)param_1[0x17],*(undefined4 *)(param_5 + 8),*puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000cc824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1000cc828(long param_1,ulong param_2)

{
  ulong uVar1;
  
  FUN_1001b1390(param_1 + 0x8648,param_2,1);
  uVar1 = 0;
  param_1 = param_1 + 0x178;
  do {
    FUN_1000e14d8(param_1,(param_2 & 0xffffffff) == uVar1);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x370;
  } while (uVar1 != 9);
  return;
}




long * thunk_FUN_1000cc128(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint *puVar16;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined4 uStack_78;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  puVar6 = puVar5 + 0x18;
  *puVar5 = &PTR_thunk_FUN_1000cc890_101455468;
  FUN_10064e264();
  lVar11 = 0;
  do {
    FUN_1000e142c((long)param_1 + lVar11 + 0x178);
    lVar11 = lVar11 + 0x370;
  } while (lVar11 != 0x1ef0);
  plVar12 = param_1 + 0x40d;
  lVar11 = 0x5b68;
  do {
    lVar7 = thunk_FUN_1005357f4(plVar12);
    plVar12 = (long *)(lVar7 + 0xa28);
    lVar11 = lVar11 + -0xa28;
  } while (lVar11 != 0);
  plVar12 = param_1 + 0xf7a;
  lVar11 = 0;
  do {
    FUN_10064e264((long)plVar12 + lVar11);
    lVar11 = lVar11 + 0xb8;
  } while (lVar11 != 0x678);
  FUN_1000e142c();
  param_1[0x10c6] = 0;
  param_1[0x10c5] = 0;
  param_1[0x10c8] = 0;
  param_1[0x10c7] = 0;
  param_1[0x10c2] = 0;
  param_1[0x10c1] = 0;
  param_1[0x10c4] = 0;
  param_1[0x10c3] = 0;
  param_1[0x10be] = 0;
  param_1[0x10bd] = 0;
  param_1[0x10c0] = 0;
  param_1[0x10bf] = 0;
  param_1[0x10ba] = 0;
  param_1[0x10b9] = 0;
  param_1[0x10bc] = 0;
  param_1[0x10bb] = 0;
  plVar1 = param_1 + 0x10c9;
  param_1[0x10b8] = 0;
  param_1[0x10b7] = 0;
  FUN_1001b11fc();
  thunk_FUN_1001f67f4(param_1 + 0x10e3);
  plVar14 = param_1 + 0x10e5;
  *plVar14 = (long)&PTR_FUN_101455968;
  operator_new(0x13c0);
  lVar11 = thunk_FUN_100295c20();
  param_1[0x10e6] = lVar11;
  *(long **)(lVar11 + 0xb8) = plVar14;
  FUN_10014f4a0(param_1 + 0x10e7);
  uVar13 = 0;
  *plVar14 = (long)&PTR_FUN_1014555b0;
  param_1[0x10e7] = (long)&PTR_FUN_1014555d0;
  param_1[0x10ea] = 0;
  *(undefined1 *)(param_1 + 0x10eb) = 0;
  uVar3 = DAT_101d91884;
  puVar16 = (uint *)((long)param_1 + 0x1fc);
  plVar14 = param_1 + 0x40d;
  do {
    iVar4 = (int)uVar13;
    if ((iVar4 == 1) || (iVar4 == 2)) {
      iVar4 = FUN_10012709c();
      if (iVar4 != 1) goto LAB_1000cc358;
LAB_1000cc2c4:
      uStack_78 = uVar3;
      plVar12 = (long *)((ulong)plVar12 & 0xffffffff00000000 | uVar13);
      pcStack_a0 = FUN_1000cc74c;
      uStack_90 = 0;
      uStack_88 = 0;
      plStack_98 = param_1;
      plStack_80 = plVar12;
      FUN_10001554c(puVar16 + -0x1f,&pcStack_a0);
      *puVar16 = *puVar16 | 0x10;
      FUN_100651038(puVar16 + 0x6f,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
      lVar11 = FUN_100315bc8(uVar13);
      FUN_1006513c0(puVar16 + 0x6f,lVar11 + 8);
      FUN_100534ef4(plVar14,PTR_s_build___HUDPartsCommon_atlas_10184e098,1);
      pcStack_a0 = (code *)CONCAT71(pcStack_a0._1_7_,1);
      FUN_100534ebc(plVar14,&pcStack_a0);
    }
    else {
      if ((iVar4 != 8) || (lVar11 = FUN_100134104(), *(char *)(lVar11 + 0xc) != '\0'))
      goto LAB_1000cc2c4;
LAB_1000cc358:
      *puVar16 = *puVar16 & 0xfffffffb;
    }
    uVar13 = uVar13 + 1;
    puVar16 = puVar16 + 0xdc;
    plVar14 = plVar14 + 0x145;
  } while (uVar13 != 9);
  uStack_78 = uVar3;
  pcStack_a0 = FUN_1000cc754;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x104a,&pcStack_a0);
  *(uint *)((long)param_1 + 0x82cc) = *(uint *)((long)param_1 + 0x82cc) | 0x10;
  FUN_100651038(param_1 + 0x1091,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar8 = FUN_1004e0150("HUD_SETTINGS_TITLE",0);
  FUN_1006513c0(param_1 + 0x1091,uVar8);
  FUN_1000e14d8(param_1 + 0x1049,0);
  iVar4 = 0;
  do {
    puVar9 = (undefined4 *)FUN_100315be0(iVar4);
    iVar2 = puVar9[5];
    if (iVar2 == 3) {
      pvVar10 = operator_new(0x540);
      uVar8 = thunk_FUN_1000e156c(pvVar10,*puVar9);
      FUN_1000e17f0(0x3e4ccccd,uVar8,*(long *)(puVar9 + 0x12) + 8,
                    PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
      FUN_10064e47c(0x442f0000,0x43480000,pvVar10);
      plVar12 = param_1 + (ulong)(uint)puVar9[4] * 2 + 0x10b7;
      pcStack_a0 = (code *)((long)pvVar10 + 0xb8);
LAB_1000cc53c:
      FUN_1000cc758(plVar12,&pcStack_a0);
    }
    else {
      if (iVar2 == 2) {
        pvVar10 = operator_new(0x2b0);
        uVar8 = thunk_FUN_1000e0a84(pvVar10,*puVar9);
        FUN_1000e0dc0(uVar8,puVar9 + 0xc);
        if (puVar9[0x10] != 0) {
          lVar11 = *(long *)(puVar9 + 0x12);
          do {
            FUN_1000e0c00(pvVar10,lVar11 + 8,lVar11 + 0x18);
            lVar11 = lVar11 + 0x28;
          } while (lVar11 != *(long *)(puVar9 + 0x12) + (ulong)(uint)puVar9[0x10] * 0x28);
        }
        plVar12 = param_1 + (ulong)(uint)puVar9[4] * 2 + 0x10b7;
        pcStack_a0 = (code *)((long)pvVar10 + 0x158);
        goto LAB_1000cc53c;
      }
      if (iVar2 == 1) {
        pvVar10 = operator_new(0x948);
        uVar8 = thunk_FUN_1000e0f08(pvVar10,*puVar9);
        FUN_1000e10f8(uVar8,*(long *)(puVar9 + 0x12) + 8);
        FUN_1000e1318(pvVar10,*(long *)(puVar9 + 0x12) + 0x18);
        plVar12 = param_1 + (ulong)(uint)puVar9[4] * 2 + 0x10b7;
        pcStack_a0 = (code *)((long)pvVar10 + 0x240);
        goto LAB_1000cc53c;
      }
    }
    uVar3 = DAT_101d23038;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x22);
  lVar11 = 0;
  do {
    if (*(uint *)(param_1 + lVar11 * 2 + 0x10b7) != 0) {
      puVar5 = (undefined8 *)param_1[lVar11 * 2 + 0x10b8];
      do {
        lVar7 = (**(code **)(*(long *)*puVar5 + 0x20))();
        puVar15 = puVar5 + 1;
        plStack_80 = (long *)*puVar5;
        uStack_78 = uVar3;
        pcStack_a0 = FUN_1000cc7d8;
        uStack_90 = 0;
        uStack_88 = 0;
        plStack_98 = param_1;
        FUN_10001554c(lVar7 + 8,&pcStack_a0);
        puVar5 = puVar15;
      } while (puVar15 !=
               (undefined8 *)
               (param_1[lVar11 * 2 + 0x10b8] + (ulong)*(uint *)(param_1 + lVar11 * 2 + 0x10b7) * 8))
      ;
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 9);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  lVar11 = 0;
  do {
    FUN_100642bd8(puVar6,param_1 + lVar11 * 0x6e + 0x2f,1);
    if ((int)lVar11 == 7) {
      uVar13 = FUN_10012ced4();
      if ((uVar13 & 1) != 0) goto LAB_1000cc65c;
      lVar7 = param_1[0x10e6];
LAB_1000cc698:
      FUN_1001b127c(plVar1,lVar7);
    }
    else {
      if ((int)lVar11 == 1) {
        lVar7 = param_1[0x10e4];
        goto LAB_1000cc698;
      }
LAB_1000cc65c:
      FUN_1001b127c(plVar1,param_1 + lVar11 * 0x145 + 0x40d);
      FUN_100534ad8(param_1 + lVar11 * 0x145 + 0x40d,param_1 + lVar11 * 0x17 + 0xf7a,1);
    }
    if (*(uint *)(param_1 + lVar11 * 2 + 0x10b7) != 0) {
      puVar5 = (undefined8 *)param_1[lVar11 * 2 + 0x10b8];
      do {
        puVar15 = puVar5 + 1;
        uVar8 = (**(code **)(*(long *)*puVar5 + 0x20))();
        (**(code **)(param_1[lVar11 * 0x17 + 0xf7a] + 0x78))
                  (param_1 + lVar11 * 0x17 + 0xf7a,uVar8,1);
        puVar5 = puVar15;
      } while (puVar15 !=
               (undefined8 *)
               (param_1[lVar11 * 2 + 0x10b8] + (ulong)*(uint *)(param_1 + lVar11 * 2 + 0x10b7) * 8))
      ;
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 9) {
      FUN_100642bd8(puVar6,param_1 + 0x1049,1);
      FUN_1000cc828(param_1,0);
      return param_1;
    }
  } while( true );
}




void FUN_1000cc890(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0;
  *param_1 = &PTR_thunk_FUN_1000cc890_101455468;
  do {
    uVar3 = *(uint *)(param_1 + lVar5 * 2 + 0x10b7);
    if (uVar3 != 0) {
      plVar4 = (long *)param_1[lVar5 * 2 + 0x10b8];
      plVar6 = plVar4;
      do {
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 8))();
          uVar3 = *(uint *)(param_1 + lVar5 * 2 + 0x10b7);
          plVar4 = (long *)param_1[lVar5 * 2 + 0x10b8];
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar4 + uVar3);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 9);
  if ((long *)param_1[0x10ea] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10ea] + 8))();
  }
  FUN_10014f51c(param_1 + 0x10e7);
  param_1[0x10e5] = &PTR_FUN_101455968;
  if ((long *)param_1[0x10e6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10e6] + 8))();
  }
  param_1[0x10e6] = 0;
  param_1[0x10e3] = &PTR____cxa_pure_virtual_101455988;
  if ((long *)param_1[0x10e4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10e4] + 8))();
  }
  param_1[0x10e4] = 0;
  thunk_FUN_1001b1228(param_1 + 0x10c9);
  puVar2 = param_1 + 0x10c8;
  lVar5 = -0x90;
  do {
    if ((void *)*puVar2 != (void *)0x0) {
      operator_delete__((void *)*puVar2);
      puVar2[-1] = 0;
      *puVar2 = 0;
    }
    puVar2 = puVar2 + -2;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0);
  param_1[0x1049] = &PTR_FUN_101457b38;
  thunk_FUN_100651068(param_1 + 0x1091);
  FUN_10052ffb4(param_1 + 0x1049);
  lVar5 = 0;
  do {
    thunk_FUN_10064e2bc((long)param_1 + lVar5 + 0x8190);
    lVar5 = lVar5 + -0xb8;
  } while (lVar5 != -0x678);
  puVar2 = param_1 + 0xe35;
  lVar5 = -0x5b68;
  do {
    lVar1 = thunk_FUN_100534a3c(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0xa28);
    lVar5 = lVar5 + 0xa28;
  } while (lVar5 != 0);
  puVar2 = param_1 + 0x39f;
  lVar5 = -0x1ef0;
  do {
    *puVar2 = &PTR_FUN_101457b38;
    thunk_FUN_100651068(puVar2 + 0x48);
    FUN_10052ffb4(puVar2);
    puVar2 = puVar2 + -0x6e;
    lVar5 = lVar5 + 0x370;
  } while (lVar5 != 0);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




undefined8 * FUN_1000cca6c(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_101455968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1000cc890(void)

{
  FUN_1000cc890();
  return;
}




void FUN_1000ccabc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000cc890();
  operator_delete(pvVar1);
  return;
}




void FUN_1000ccad0(undefined1 param_1 [16],ulong param_2,long *param_3)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined4 local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  
  iVar4 = 0;
  puVar1 = (uint *)((long)param_3 + 0x82cc);
  do {
    piVar5 = (int *)FUN_100315be0(iVar4);
    if ((piVar5[0xb] != 0) || (piVar5[9] != 0x23)) {
      iVar3 = FUN_1000ccfa4(param_3,piVar5);
      lVar9 = 0;
      do {
        if (*(uint *)(param_3 + lVar9 * 2 + 0x10b7) != 0) {
          lVar10 = (ulong)*(uint *)(param_3 + lVar9 * 2 + 0x10b7) << 3;
          puVar16 = (undefined8 *)param_3[lVar9 * 2 + 0x10b8];
          do {
            plVar12 = (long *)*puVar16;
            if ((int)plVar12[1] == *piVar5) goto LAB_1000ccb88;
            lVar10 = lVar10 + -8;
            puVar16 = puVar16 + 1;
          } while (lVar10 != 0);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 9);
      plVar12 = (long *)0x0;
LAB_1000ccb88:
      lVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
      uVar15 = 4;
      if (iVar3 == 0) {
        uVar15 = 0;
      }
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) & 0xfffffffb | uVar15;
      uVar15 = 0x40;
      if (iVar3 == 0) {
        uVar15 = 0;
      }
      lVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) & 0xffffffbf | uVar15;
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x22) {
      plVar11 = param_3 + 0x18;
      fVar17 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      uStack_74 = (undefined4)param_2;
      local_78 = fVar17;
      FUN_10064e47c(0x44160000,plVar11);
      FUN_10064e5ec(0,0,plVar11,0,param_3,0);
      plVar12 = param_3 + 0x2f;
      lVar9 = 9;
      do {
        FUN_10064e47c(0x44160000,0x42b40000,plVar12);
        plVar12 = plVar12 + 0x6e;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      plVar12 = param_3 + 0x1049;
      FUN_10064e47c(0x44160000,0x42b40000,plVar12);
      uVar8 = 0x42340000;
      if ((char)param_3[0x10eb] != '\0') {
        uVar8 = 0x43480000;
      }
      FUN_10064e5ec(0,uVar8,param_3 + 0x2f,0,plVar11,0);
      iVar4 = 0;
      plVar13 = param_3 + 0x9d;
      lVar9 = -8;
      do {
        if ((*(byte *)((long)plVar13 + 0x84) >> 2 & 1) != 0) {
          FUN_10064e72c(0x42400000,plVar13,0,param_3 + (long)iVar4 * 0x6e + 0x2f,2);
          FUN_10064e72c(0,plVar13,3,param_3 + (long)iVar4 * 0x6e + 0x2f,3);
          iVar4 = (int)lVar9 + 9;
        }
        plVar13 = plVar13 + 0x6e;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar2);
      FUN_10064e72c(0x42400000,plVar12,0,param_3 + (long)iVar4 * 0x6e + 0x2f,2);
      FUN_10064e72c(0,plVar12,3,param_3 + (long)iVar4 * 0x6e + 0x2f,3);
      *puVar1 = *puVar1 & 0xfffffffb;
      FUN_10032523c();
      iVar4 = FUN_1003252f0();
      if (iVar4 == 3) {
        *puVar1 = *puVar1 & 0xfffffffb;
      }
      if (param_3[0x10ea] != 0) {
        FUN_10064e5ec(0,0xc2700000,param_3[0x10ea],3,plVar11,3);
      }
      plVar12 = param_3 + 0x10c9;
      FUN_10064e47c(fVar17 + -600.0,plVar12);
      FUN_10064e72c(0x42400000,plVar12,3,plVar11,1);
      FUN_10064e72c(0,plVar12,0,plVar11,0);
      lVar9 = 0;
      do {
        fVar17 = (float)param_2;
        if (*(uint *)(param_3 + lVar9 * 2 + 0x10b7) != 0) {
          puVar14 = (undefined8 *)0x0;
          puVar16 = (undefined8 *)param_3[lVar9 * 2 + 0x10b8];
          do {
            lVar10 = (**(code **)(*(long *)*puVar16 + 0x20))();
            if ((*(byte *)(lVar10 + 0x84) >> 2 & 1) != 0) {
              (**(code **)(*(long *)*puVar16 + 0x18))(0x44bb8000);
              uVar6 = (**(code **)(*(long *)*puVar16 + 0x20))();
              if (puVar14 == (undefined8 *)0x0) {
                uVar7 = FUN_100534eb4(param_3 + lVar9 * 0x145 + 0x40d);
                param_2 = 0x42480000;
                FUN_10064e5ec(uVar6,0,uVar7,0);
                puVar14 = puVar16;
              }
              else {
                uVar7 = (**(code **)(*(long *)*puVar14 + 0x20))();
                FUN_10064e72c(0x42c80000,uVar6,0,uVar7,2);
                FUN_10064e72c(0,uVar6,3,uVar7,3);
                puVar14 = puVar16;
              }
            }
            fVar17 = (float)param_2;
            puVar16 = puVar16 + 1;
          } while (puVar16 !=
                   (undefined8 *)
                   (param_3[lVar9 * 2 + 0x10b8] + (ulong)*(uint *)(param_3 + lVar9 * 2 + 0x10b7) * 8
                   ));
        }
        local_80 = (**(code **)(param_3[lVar9 * 0x17 + 0xf7a] + 0x58))
                             (param_3 + lVar9 * 0x17 + 0xf7a,0,0,0,1);
        fStack_7c = fVar17 + 100.0;
        param_2 = (ulong)(uint)fStack_7c;
        FUN_10064e48c(param_3 + lVar9 * 0x17 + 0xf7a,&local_80);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 9);
      param_3 = param_3 + 0x40d;
      lVar9 = 9;
      do {
        FUN_10064e48c(param_3,&local_78);
        FUN_100534aec(param_3);
        param_3 = param_3 + 0x145;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      return;
    }
  } while( true );
}




ulong FUN_1000ccfa4(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  switch(*(undefined4 *)(param_2 + 0x2c)) {
  case 1:
    iVar3 = FUN_10012709c();
    bVar2 = iVar3 == 1;
    goto LAB_1000cd004;
  case 2:
    iVar3 = FUN_10012709c();
    bVar2 = iVar3 == 0;
LAB_1000cd004:
    uVar8 = (ulong)bVar2;
    break;
  case 3:
    iVar3 = FUN_1001270c4();
    uVar8 = (ulong)(1 < iVar3);
    break;
  case 4:
    goto switchD_1000ccfe4_caseD_4;
  case 5:
    iVar3 = FUN_10012709c();
    if (iVar3 == 1) {
      lVar5 = 0;
      do {
        lVar1 = param_1 + lVar5 * 0x10;
        uVar4 = *(uint *)(lVar1 + 0x85b8);
        if (uVar4 != 0) {
          lVar7 = (ulong)uVar4 << 3;
          plVar6 = *(long **)(lVar1 + 0x85c0);
          do {
            if (*(int *)(*plVar6 + 8) == 9) {
              uVar8 = (ulong)(*(byte *)(*plVar6 + 0xc) & 1);
              goto LAB_1000cd0f4;
            }
            lVar7 = lVar7 + -8;
            plVar6 = plVar6 + 1;
          } while (lVar7 != 0);
        }
        lVar5 = lVar5 + 1;
      } while( true );
    }
    goto switchD_1000ccfe4_caseD_4;
  case 6:
    iVar3 = FUN_10012709c();
    if (iVar3 == 0) {
      lVar5 = 0;
      do {
        lVar1 = param_1 + lVar5 * 0x10;
        uVar4 = *(uint *)(lVar1 + 0x85b8);
        if (uVar4 != 0) {
          lVar7 = (ulong)uVar4 << 3;
          plVar6 = *(long **)(lVar1 + 0x85c0);
          do {
            if (*(int *)(*plVar6 + 8) == 2) {
              local_38[0] = *(undefined4 *)(*plVar6 + 0xc);
              local_40[0] = 0;
              uVar8 = FUN_100315c8c(local_38,local_40);
              goto LAB_1000cd0f4;
            }
            lVar7 = lVar7 + -8;
            plVar6 = plVar6 + 1;
          } while (lVar7 != 0);
        }
        lVar5 = lVar5 + 1;
      } while( true );
    }
switchD_1000ccfe4_caseD_4:
    uVar8 = 0;
    break;
  case 7:
    lVar5 = FUN_100134104();
    uVar8 = (ulong)(*(char *)(lVar5 + 0xc) != '\0');
    break;
  default:
    uVar8 = 1;
  }
LAB_1000cd0f4:
  if (*(int *)(param_2 + 0x24) == 0x23) {
    return uVar8;
  }
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5 * 0x10;
    uVar4 = *(uint *)(lVar1 + 0x85b8);
    if (uVar4 != 0) {
      lVar7 = (ulong)uVar4 << 3;
      plVar6 = *(long **)(lVar1 + 0x85c0);
      do {
        if (*(int *)(*plVar6 + 8) == *(int *)(param_2 + 0x24)) {
          local_48[0] = *(undefined4 *)(*plVar6 + 0xc);
          uVar4 = FUN_100315c8c(local_48,param_2 + 0x28);
          return (ulong)((uint)uVar8 & uVar4);
        }
        lVar7 = lVar7 + -8;
        plVar6 = plVar6 + 1;
      } while (lVar7 != 0);
    }
    lVar5 = lVar5 + 1;
  } while( true );
}




void FUN_1000cd170(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    lVar1 = param_1 + lVar6 * 0x10;
    uVar2 = *(uint *)(lVar1 + 0x85b8);
    if (uVar2 != 0) {
      lVar5 = (ulong)uVar2 << 3;
      plVar4 = *(long **)(lVar1 + 0x85c0);
      do {
        plVar3 = (long *)*plVar4;
        if ((int)plVar3[1] == param_2) {
          (**(code **)(*plVar3 + 0x10))(plVar3,param_3);
          break;
        }
        lVar5 = lVar5 + -8;
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 9) {
      return;
    }
  } while( true );
}




void FUN_1000cd1fc(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (*(long *)(param_1 + 0x8750) == 0) {
    pvVar1 = operator_new(0xa48);
    thunk_FUN_1002eca3c(pvVar1,0);
    uVar2 = FUN_1004e0150("MENU_EXIT_GAME",0);
    FUN_1002ecce4(pvVar1,uVar2);
    FUN_1002ecc7c(pvVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
    FUN_1002eccb4(pvVar1,&DAT_10115a168);
    FUN_1002ebee0(0x42480000,0x41400000,pvVar1);
    FUN_1002ecd24(pvVar1);
    local_38 = DAT_101d91884;
    local_60 = FUN_1000cd2ec;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c((long)pvVar1 + 8,&local_60);
    FUN_100642bd8(param_1 + 0xc0,pvVar1,1);
    *(long *)(param_1 + 0x8750) = (long)pvVar1;
  }
  return;
}




void FUN_1000cd2ec(void)

{
  FUN_1004e96fc();
  FUN_1004e94d4();
  return;
}




void FUN_1000cd300(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x8758) = param_2;
  return;
}




void FUN_1000cd30c(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_101455968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000cd354(long param_1)

{
  FUN_10014f51c();
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_101455968;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_1000cd398(long param_1)

{
  FUN_10014f51c();
  *(undefined8 *)(param_1 + -0x10) = &PTR_FUN_101455968;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_1000cd3dc(void)

{
  return;
}




undefined8 * FUN_1000cd3e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101455968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000cd424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101455968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000cd464(uint *param_1,uint param_2)

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




long * FUN_1000cd4e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_FUN_1014559c0;
  FUN_10064e264(puVar3 + 0x19);
  lVar2 = DAT_101dc1cb8;
  param_1[0x30] = DAT_101dc1cb8;
  param_1[0x31] = lVar2;
  param_1[0x32] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x19,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  local_38 = DAT_101dbd484;
  local_60 = FUN_1000cd61c;
  plVar1 = param_1 + 0x1a;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd458;
  local_60 = FUN_1000cd61c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_1000cd624;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd460;
  local_60 = FUN_1000cd624;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  return param_1;
}




void FUN_1000cd61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000cd9c0(param_1,param_4);
  return;
}




void FUN_1000cd624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000cdac8(param_1,param_4);
  return;
}




long * thunk_FUN_1000cd4e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_FUN_1014559c0;
  FUN_10064e264(puVar3 + 0x19);
  lVar2 = DAT_101dc1cb8;
  param_1[0x30] = DAT_101dc1cb8;
  param_1[0x31] = lVar2;
  param_1[0x32] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x19,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  uStack_38 = DAT_101dbd484;
  pcStack_60 = FUN_1000cd61c;
  plVar1 = param_1 + 0x1a;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd458;
  pcStack_60 = FUN_1000cd61c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd48c;
  pcStack_60 = FUN_1000cd624;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd460;
  pcStack_60 = FUN_1000cd624;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  return param_1;
}




void FUN_1000cd630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014559c0;
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000cd660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014559c0;
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000cd690(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014559c0;
  thunk_FUN_10064e2bc(param_1 + 0x19);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000cd6c4(long param_1)

{
  FUN_10064e47c(param_1 + 200);
  return;
}




void FUN_1000cd6cc(long param_1)

{
  FUN_1000d0670(*(undefined8 *)(param_1 + 0xc0));
  return;
}




void FUN_1000cd6d4(long *param_1,long param_2)

{
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  param_1[0x18] = param_2;
  local_28 = DAT_101d23028;
  local_50 = FUN_1000cd7a4;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_2 + 8,&local_50);
  local_28 = DAT_101d2302c;
  local_50 = FUN_1000cd7ec;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1[0x18] + 8,&local_50);
  local_28 = DAT_101d23030;
  local_50 = FUN_1000cd848;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1[0x18] + 8,&local_50);
  (**(code **)(*param_1 + 0x1e0))(param_1);
  return;
}




void FUN_1000cd7a4(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  pcStack_28 = FUN_1000cdbec;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))();
  return;
}




void FUN_1000cd7ec(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  pcStack_28 = FUN_1000cdbec;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  *(undefined8 *)(param_1 + 400) = 0;
  return;
}




void FUN_1000cd848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000cd854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_1000cd858(long param_1)

{
  if (*(long *)(param_1 + 400) != 0) {
    FUN_1000d06f0(*(undefined8 *)(param_1 + 0xc0),*(long *)(param_1 + 400),param_1 + 0x188);
    return;
  }
  return;
}




void FUN_1000cd874(long param_1)

{
  FUN_1000d07c4(*(undefined8 *)(param_1 + 0xc0));
  return;
}




undefined8 FUN_1000cd87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}




void FUN_1000cd884(long param_1)

{
  undefined8 uVar1;
  
  FUN_1000d0360(*(undefined8 *)(param_1 + 0xc0));
  FUN_10064e47c(0x43a00000,0x43a00000);
  FUN_10064e5ec(0,0,param_1 + 200,8,param_1,8);
  uVar1 = FUN_1000d0360(*(undefined8 *)(param_1 + 0xc0));
  FUN_10064e5ec(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184),uVar1,8,param_1,8)
  ;
  uVar1 = FUN_1000d0368(*(undefined8 *)(param_1 + 0xc0));
  FUN_10064e5ec(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184),uVar1,8,param_1,8)
  ;
  return;
}




void FUN_1000cd910(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 0x20);
  *(ulong *)(param_1 + 0x188) =
       CONCAT44((int)(float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20),
                (int)(float)*(undefined8 *)(param_2 + 0x28));
  return;
}




undefined8 FUN_1000cd928(void)

{
  return 1;
}




bool FUN_1000cd930(float param_1,float param_2,long param_3)

{
  float fVar1;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  local_28 = param_1;
  fStack_24 = param_2;
  local_28 = (float)FUN_10064efd0(&local_28,param_3);
  fVar1 = DAT_101873a40._4_4_;
  local_30 = (float)FUN_10064f0a0((undefined4)DAT_101873a40,param_3);
  fStack_2c = fVar1;
  local_30 = (float)FUN_10064f008(&local_30,*(undefined8 *)(param_3 + 0x20),param_3);
  fStack_2c = fVar1;
  fVar1 = (float)FUN_10064e3cc(param_3 + 200);
  return (local_28 - local_30) * (local_28 - local_30) +
         (fStack_24 - fStack_2c) * (fStack_24 - fStack_2c) <= fVar1 * 0.5 * fVar1 * 0.5;
}




void FUN_1000cd9c0(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *local_40;
  code *pcStack_38;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    iVar1 = (**(code **)(*param_1 + 0x1e8))
                      ((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),param_1);
    if (iVar1 == 0) {
      FUN_100644b14(param_2);
      return;
    }
    param_1[0x32] = param_2[4];
    param_1[0x31] = CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]);
    iVar1 = FUN_100644ecc(param_2);
    if ((iVar1 == 0) || (uVar2 = (**(code **)(*(long *)param_1[0x17] + 0x28))(), (uVar2 & 1) == 0))
    {
      (*(code *)**(undefined8 **)param_1[0x17])();
      pcStack_38 = FUN_1000cdbec;
      local_40 = param_1;
      FUN_100643618(0x3f19999a,&local_40,0,0);
    }
  }
  return;
}




void FUN_1000cdac8(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *local_40;
  code *pcStack_38;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    iVar1 = (**(code **)(*param_1 + 0x1e8))
                      ((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),param_1);
    if (iVar1 == 0) {
      FUN_100644b14(param_2);
      return;
    }
    (**(code **)(*(long *)param_1[0x17] + 8))();
    pcStack_38 = FUN_1000cdbec;
    local_40 = param_1;
    FUN_100643a8c(&local_40);
    param_1[0x32] = 0;
  }
  return;
}




void FUN_1000cdb90(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000cdb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e0))();
  return;
}




void FUN_1000cdb9c(void)

{
  return;
}




void FUN_1000cdba0(void)

{
  return;
}




void FUN_1000cdba4(void)

{
  return;
}




void FUN_1000cdba8(void)

{
  return;
}




void FUN_1000cdbac(void)

{
  return;
}




void FUN_1000cdbb0(void)

{
  return;
}




void FUN_1000cdbb4(void)

{
  return;
}




void FUN_1000cdbb8(void)

{
  return;
}




void FUN_1000cdbbc(void)

{
  return;
}




void FUN_1000cdbc0(void)

{
  return;
}




void FUN_1000cdbc4(void)

{
  return;
}




void FUN_1000cdbc8(void)

{
  return;
}




void FUN_1000cdbcc(void)

{
  return;
}




void FUN_1000cdbd0(void)

{
  return;
}




void FUN_1000cdbd4(void)

{
  return;
}




void FUN_1000cdbd8(void)

{
  return;
}




void FUN_1000cdbdc(void)

{
  return;
}




void FUN_1000cdbe0(void)

{
  return;
}




void FUN_1000cdbe4(void)

{
  return;
}




void FUN_1000cdbe8(void)

{
  return;
}




void FUN_1000cdbec(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  pcStack_28 = FUN_1000cdbec;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  return;
}




long * FUN_1000cdc34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar9 = (undefined8 *)FUN_1000cd4e0();
  *puVar9 = &PTR_thunk_FUN_1000cf3e4_101455bc0;
  puVar9 = puVar9 + 0x33;
  FUN_1006421a8(puVar9);
  param_1[0x33] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x44;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x62;
  FUN_100653ff8(plVar2);
  plVar3 = param_1 + 0x83;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xa1;
  FUN_1006533a4(plVar4);
  plVar5 = param_1 + 0xc1;
  FUN_1006533a4(plVar5);
  plVar6 = param_1 + 0xe1;
  FUN_1006533a4();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  lVar10 = 0xd38;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar10);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x11e8);
  thunk_FUN_1000e32a4(param_1 + 0x23d);
  param_1[0x272] = 3;
  lVar10 = NEON_fmov(0x3f800000,4);
  param_1[0x273] = lVar10;
  *(undefined4 *)(param_1 + 0x274) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x13a4) = 0x101;
  *(undefined1 *)((long)param_1 + 0x13a6) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(puVar9,plVar3,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(puVar9,plVar5,1);
  FUN_100642bd8(puVar9,plVar6,1);
  FUN_100642bd8(puVar9,param_1 + 0x101,1);
  FUN_100642bd8(puVar9,param_1 + 0x11f,1);
  FUN_100642bd8(puVar9,param_1 + 0x13d,1);
  FUN_100642bd8(puVar9,param_1 + 0x163,1);
  FUN_100642bd8(puVar9,param_1 + 0x181,1);
  lVar10 = 0;
  do {
    FUN_100642bd8(puVar9,(long)param_1 + lVar10 + 0xd38,1);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x4b0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x23d,1);
  local_78 = DAT_101d2303c;
  local_a0 = FUN_1000ce16c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x23e,&local_a0);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_10065403c(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dfc(plVar2,0xb);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  FUN_100653464(plVar4,FUN_1000ce17c,param_1);
  uVar8 = *(uint *)((long)param_1 + 0x58c);
  if ((uVar8 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x58c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x5900;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  FUN_100653464(plVar5,FUN_1000ce214,param_1);
  uVar8 = *(uint *)((long)param_1 + 0x68c);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x68c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff847030);
  FUN_100652dd4(plVar6,&local_a0,2);
  FUN_100653464(plVar6,FUN_1000ce2ac,param_1);
  uVar8 = *(uint *)((long)param_1 + 0x78c);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x78c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(param_1 + 0x101,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  *(uint *)((long)param_1 + 0x88c) = *(uint *)((long)param_1 + 0x88c) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x11f,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_rings");
  *(uint *)((long)param_1 + 0x97c) = *(uint *)((long)param_1 + 0x97c) & 0xfffffffb;
  FUN_100651038(param_1 + 0x13d,PTR_s_build___Fonts_Futura_Medium_64_S_10184e2c8);
  FUN_100652ca4(param_1 + 0x163,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  (**(code **)(*param_1 + 0x1a8))(param_1,3);
  FUN_100651038(param_1 + 0x181,DAT_101d22ff8);
  lVar10 = 0;
  *(uint *)((long)param_1 + 0x126c) = *(uint *)((long)param_1 + 0x126c) & 0xfffffffb;
  do {
    local_a0 = (code *)&DAT_3f0000003f000000;
    lVar7 = (long)param_1 + lVar10 + 0xd38;
    (**(code **)(*(long *)((long)param_1 + lVar10 + 0xd38) + 0x28))(lVar7,&local_a0);
    FUN_100652cac(lVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_level_dot_lit");
    *(uint *)((long)param_1 + lVar10 + 0xdbc) =
         *(uint *)((long)param_1 + lVar10 + 0xdbc) & 0xfffffffb;
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x4b0);
  return param_1;
}




void FUN_1000ce16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ce178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_1000ce17c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x1398);
  uVar1 = FUN_100652dcc(param_5 + 0x508);
  FUN_100063164(*param_2,param_2[1],1.0 - fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2
                ,uVar1,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_1000ce214(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x139c);
  uVar1 = FUN_100652dcc(param_5 + 0x608);
  FUN_100063164(*param_2,param_2[1],1.0 - fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2
                ,uVar1,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_1000ce2ac(undefined1 param_1 [16],float param_2,undefined8 param_3,float *param_4,
                  long *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ushort uVar15;
  float fVar16;
  undefined3 local_84;
  undefined1 uStack_81;
  
  fVar13 = *(float *)(param_7 + 0x13a0);
  lVar8 = param_7 + 0x708;
  fVar9 = (float)(**(code **)(*(long *)(param_7 + 0x708) + 0x48))(lVar8);
  fVar12 = param_4[4];
  fVar14 = param_4[5];
  lVar6 = FUN_100652dcc(lVar8);
  uVar3 = *(ushort *)(lVar6 + 4);
  uVar4 = *(ushort *)(lVar6 + 6);
  uVar5 = *(ushort *)(lVar6 + 8);
  uVar15 = *(ushort *)(lVar6 + 10);
  iVar1 = *(int *)(*(long *)(*param_5 + 8) + 0x48);
  iVar2 = *(int *)(*(long *)(*param_5 + 8) + 0x4c);
  puVar7 = (undefined4 *)FUN_100652df4(lVar8);
  _local_84 = CONCAT13((char)(int)(param_4[6] * 255.0),(int3)*puVar7);
  lVar8 = FUN_100652dcc(lVar8);
  if (lVar8 != 0) {
    fVar11 = fVar14 * param_2 * fVar13;
    fVar10 = (float)NEON_ucvtf((uint)uVar15);
    fVar14 = param_4[1] + (fVar14 * param_2 - fVar11);
    fVar16 = 1.0 / (float)iVar1;
    FUN_100043664(*param_4,fVar14,*param_4 + fVar9 * fVar12,fVar14 + fVar11,0,fVar16 * (float)uVar3,
                  1.0 - (float)(int)((float)uVar4 + fVar10 * (1.0 - fVar13)) * (1.0 / (float)iVar2),
                  fVar16 * ((float)uVar5 + (float)uVar3),param_3,&local_84,0);
  }
  return;
}




long * thunk_FUN_1000cdc34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar9 = (undefined8 *)FUN_1000cd4e0();
  *puVar9 = &PTR_thunk_FUN_1000cf3e4_101455bc0;
  puVar9 = puVar9 + 0x33;
  FUN_1006421a8(puVar9);
  param_1[0x33] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x44;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x62;
  FUN_100653ff8(plVar2);
  plVar3 = param_1 + 0x83;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xa1;
  FUN_1006533a4(plVar4);
  plVar5 = param_1 + 0xc1;
  FUN_1006533a4(plVar5);
  plVar6 = param_1 + 0xe1;
  FUN_1006533a4();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  lVar10 = 0xd38;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar10);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x11e8);
  thunk_FUN_1000e32a4(param_1 + 0x23d);
  param_1[0x272] = 3;
  lVar10 = NEON_fmov(0x3f800000,4);
  param_1[0x273] = lVar10;
  *(undefined4 *)(param_1 + 0x274) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x13a4) = 0x101;
  *(undefined1 *)((long)param_1 + 0x13a6) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(puVar9,plVar3,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(puVar9,plVar5,1);
  FUN_100642bd8(puVar9,plVar6,1);
  FUN_100642bd8(puVar9,param_1 + 0x101,1);
  FUN_100642bd8(puVar9,param_1 + 0x11f,1);
  FUN_100642bd8(puVar9,param_1 + 0x13d,1);
  FUN_100642bd8(puVar9,param_1 + 0x163,1);
  FUN_100642bd8(puVar9,param_1 + 0x181,1);
  lVar10 = 0;
  do {
    FUN_100642bd8(puVar9,(long)param_1 + lVar10 + 0xd38,1);
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x4b0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x23d,1);
  uStack_78 = DAT_101d2303c;
  pcStack_a0 = FUN_1000ce16c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x23e,&pcStack_a0);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_10065403c(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dfc(plVar2,0xb);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  FUN_100653464(plVar4,FUN_1000ce17c,param_1);
  uVar8 = *(uint *)((long)param_1 + 0x58c);
  if ((uVar8 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x58c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x5900;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  FUN_100653464(plVar5,FUN_1000ce214,param_1);
  uVar8 = *(uint *)((long)param_1 + 0x68c);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x68c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,0xff847030);
  FUN_100652dd4(plVar6,&pcStack_a0,2);
  FUN_100653464(plVar6,FUN_1000ce2ac,param_1);
  uVar8 = *(uint *)((long)param_1 + 0x78c);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x78c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(param_1 + 0x101,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  *(uint *)((long)param_1 + 0x88c) = *(uint *)((long)param_1 + 0x88c) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x11f,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_rings");
  *(uint *)((long)param_1 + 0x97c) = *(uint *)((long)param_1 + 0x97c) & 0xfffffffb;
  FUN_100651038(param_1 + 0x13d,PTR_s_build___Fonts_Futura_Medium_64_S_10184e2c8);
  FUN_100652ca4(param_1 + 0x163,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  (**(code **)(*param_1 + 0x1a8))(param_1,3);
  FUN_100651038(param_1 + 0x181,DAT_101d22ff8);
  lVar10 = 0;
  *(uint *)((long)param_1 + 0x126c) = *(uint *)((long)param_1 + 0x126c) & 0xfffffffb;
  do {
    pcStack_a0 = (code *)&DAT_3f0000003f000000;
    lVar7 = (long)param_1 + lVar10 + 0xd38;
    (**(code **)(*(long *)((long)param_1 + lVar10 + 0xd38) + 0x28))(lVar7,&pcStack_a0);
    FUN_100652cac(lVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_level_dot_lit");
    *(uint *)((long)param_1 + lVar10 + 0xdbc) =
         *(uint *)((long)param_1 + lVar10 + 0xdbc) & 0xfffffffb;
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x4b0);
  return param_1;
}




void FUN_1000ce40c(long param_1)

{
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2698(auStack_a8,PTR_s_build___HUDPartsHero__s_png_10184e0b8);
  FUN_1004d2698(auStack_c8,"ability_icon_%d");
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_100652d8c(param_1 + 0x310);
  }
  FUN_100652cac(param_1 + 0x310,auStack_a8,auStack_c8);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000ce4b0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_100652d8c(param_1 + 0x310);
  }
  FUN_100652cac(param_1 + 0x310,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,param_2);
  return;
}




void FUN_1000ce4f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_100652d8c(param_1 + 0x310);
  }
  FUN_100652cac(param_1 + 0x310,param_2,param_3);
  return;
}




void FUN_1000ce53c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x1234);
  *(uint *)(param_1 + 0x126c) =
       *(uint *)(param_1 + 0x126c) & 0x80000000 |
       *(uint *)(param_1 + 0x126c) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  return;
}




void FUN_1000ce580(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x49c);
  uVar1 = uVar2 & 3 | (uint)(param_2 != 0) << 2;
  *(uint *)(param_1 + 0x49c) = uVar2 & 0xfffffff8 | uVar1;
  if (param_2 == 3) {
    uVar3 = 0x6c00;
  }
  else if (param_2 == 2) {
    uVar3 = 0x5f80;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar3 = 0x5280;
  }
  if ((uVar2 & 0x7f80) == uVar3) {
    return;
  }
  *(uint *)(param_1 + 0x49c) = uVar2 & 0xffff8078 | uVar1 | uVar3;
  FUN_1000200a0(param_1 + 0x418);
  return;
}




void FUN_1000ce5f4(long *param_1,int param_2)

{
  if (*(int *)((long)param_1 + 0x1394) != param_2) {
    (**(code **)(*param_1 + 0x1e0))(param_1);
  }
  *(int *)((long)param_1 + 0x1394) = param_2;
  return;
}




void FUN_1000ce634(long param_1)

{
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  FUN_1006513c0(param_1 + 0x9e8,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1000ce6a4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xa6c) = *(uint *)(param_1 + 0xa6c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x58c) = *(uint *)(param_1 + 0x58c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000ce6d4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x68c) = *(uint *)(param_1 + 0x68c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000ce6f4(long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x126c) = *(uint *)(param_1 + 0x126c) & 0xfffffffb | uVar1;
  FUN_1000e3408(param_1 + 0x11e8,param_3);
  return;
}




void FUN_1000ce724(long param_1)

{
  *(undefined1 *)(param_1 + 0x13a6) = 1;
  return;
}




void FUN_1000ce734(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0xc08,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1000ce790(long *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) & 0xfffffffb | uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001000ce7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e0))();
  return;
}




void FUN_1000ce7b8(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  switch(param_4) {
  case 0:
  case 3:
    pcVar2 = "ability_stunned_badge";
    break;
  case 1:
    pcVar2 = "ability_silenced_badge";
    break;
  case 2:
    lVar3 = param_3 + 0xb18;
    FUN_100652cdc(lVar3,"ability_energy_badge");
    local_38[0] = 0xffffa060;
    FUN_100652dd4(lVar3,local_38,2);
    fVar4 = (float)FUN_10064ed84(lVar3,param_3);
    fVar5 = 0.25;
    goto LAB_1000ce884;
  default:
    goto switchD_1000ce7f4_default;
  }
  lVar3 = param_3 + 0xb18;
  FUN_100652cdc(lVar3,pcVar2);
  FUN_100652dd4(lVar3,&DAT_10115a168,2);
  fVar4 = (float)FUN_10064ed84(lVar3,param_3);
  fVar5 = 0.45;
LAB_1000ce884:
  param_2 = param_2 * fVar5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0xb60) == fVar4 * fVar5) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0xb64)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0xb64) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0xb60) = fVar4 * fVar5;
    *(float *)(param_3 + 0xb64) = param_2;
    FUN_1000200a0(param_3 + 0xb18);
  }
switchD_1000ce7f4_default:
  *(int *)(param_3 + 0x1390) = param_4;
  *(uint *)(param_3 + 0xb9c) =
       *(uint *)(param_3 + 0xb9c) & 0xfffffff8 |
       *(uint *)(param_3 + 0xb9c) & 3 | (uint)(param_4 != 3) << 2;
  *(uint *)(param_3 + 0x78c) =
       *(uint *)(param_3 + 0x78c) & 0xfffffff8 |
       *(uint *)(param_3 + 0x78c) & 3 | (uint)(param_4 == 2) << 2;
  return;
}




void FUN_1000ce8f0(undefined4 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x1398) = fVar1;
  return;
}




void FUN_1000ce908(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x139c) = param_1;
  return;
}




void FUN_1000ce910(undefined4 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x13a0) = fVar1;
  return;
}




void FUN_1000ce928(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100640db8(0x3fe00000,0x3fe00000,0x3c23d70a,0);
  FUN_100640db8(0x3f800000,0x3f800000,0x3e800000,FUN_10006bf9c);
  FUN_100642324(param_1 + 0x198);
  FUN_100642b7c(param_1 + 0x198,uVar1);
  return;
}




void FUN_1000ce9a8(long param_1)

{
  FUN_1000e3480(param_1 + 0x11e8);
  return;
}




void FUN_1000ce9b4(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  
  if (*(char *)(param_1 + 0x13a4) != '\0') {
    lVar1 = param_1 + 0x808;
    uVar6 = *(uint *)(param_1 + 0x88c);
    *(uint *)(param_1 + 0x88c) = uVar6 | 4;
    if ((uVar6 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x88c) = uVar6 & 0xffff807f | 4;
      FUN_1000200a0(lVar1);
    }
    uVar4 = FUN_100640840(0x3f800000,0x3d4ccccd,0);
    FUN_100640840(0,0x3ecccccd,FUN_10001f160);
    FUN_100047300();
    FUN_100642324(lVar1);
    FUN_100642b7c(lVar1,uVar4);
    lVar1 = param_1 + 0x8f8;
    FUN_100642324(lVar1);
    bVar3 = false;
    if ((*(float *)(param_1 + 0x940) == 1.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x944))))
    {
      bVar3 = *(float *)(param_1 + 0x944) == 1.0;
    }
    if (!bVar3) {
      uVar4 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x940) = uVar4;
      FUN_1000200a0(lVar1);
    }
    uVar6 = *(uint *)(param_1 + 0x97c);
    if ((~uVar6 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x97c) = uVar6 | 0x7f80;
      FUN_1000200a0(lVar1);
      uVar6 = *(uint *)(param_1 + 0x97c);
    }
    *(uint *)(param_1 + 0x97c) = uVar6 | 4;
    uVar4 = FUN_100640840(0,0x3f99999a,FUN_10001f160);
    FUN_100640db8(0x40400000,0x40400000,0x3f99999a,FUN_10001f4ac);
    lVar2 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f1bc(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_100047300();
    FUN_10063f2a4(puVar7,uVar4);
    FUN_100642324(lVar1);
    FUN_100642b7c(lVar1,puVar7);
  }
  return;
}




void FUN_1000cebbc(undefined1 param_1 [16],float param_2,long *param_3)

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
  long lVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_a8;
  float fStack_a4;
  
  FUN_1000cd884();
  plVar1 = param_3 + 0x44;
  uVar13 = *(uint *)((long)param_3 + 0x2a4);
  if ((uVar13 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x2a4) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  local_a8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_a4 = param_2;
  FUN_10064e48c(plVar1,&local_a8);
  plVar2 = param_3 + 0x62;
  local_a8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_a8 = local_a8 + -20.0;
  param_2 = param_2 + -20.0;
  fStack_a4 = param_2;
  FUN_10064e48c(plVar2,&local_a8);
  plVar3 = param_3 + 0x83;
  local_a8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_a4 = param_2;
  FUN_10064e48c(plVar3,&local_a8);
  plVar4 = param_3 + 0xe1;
  local_a8 = (float)FUN_100652e60(plVar2);
  fStack_a4 = param_2;
  FUN_10064e48c(plVar4,&local_a8);
  local_a8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_a8 = local_a8 * 0.85;
  param_2 = param_2 * 0.85;
  fStack_a4 = param_2;
  FUN_10064e48c(param_3 + 0x23d,&local_a8);
  plVar5 = param_3 + 0x101;
  local_a8 = (float)FUN_100652e60(plVar2);
  fStack_a4 = param_2;
  FUN_10064e48c(plVar5,&local_a8);
  plVar6 = param_3 + 0x11f;
  local_a8 = (float)FUN_100652e60(plVar2);
  fStack_a4 = param_2;
  FUN_10064e48c(plVar6,&local_a8);
  plVar7 = param_3 + 0x13d;
  if ((*(float *)(param_3 + 0x146) != 1.33) || (*(float *)((long)param_3 + 0xa34) != 1.33)) {
    param_3[0x146] = 0x3faa3d713faa3d71;
    FUN_1000200a0(plVar7);
  }
  fVar23 = *(float *)(param_3 + 0x18a);
  if ((fVar23 != 1.8) || (fVar23 = *(float *)((long)param_3 + 0xc54), fVar23 != 1.8)) {
    param_3[0x18a] = 0x3fe666663fe66666;
    FUN_1000200a0(param_3 + 0x181);
  }
  plVar8 = param_3 + 0xa1;
  fVar20 = (float)FUN_100652e60(plVar2);
  fVar22 = fVar23;
  fVar21 = (float)FUN_1006531b0(plVar8);
  fVar23 = fVar23 / fVar22;
  bVar12 = false;
  if ((*(float *)(param_3 + 0xaa) == fVar20 / fVar21) &&
     (bVar12 = false, !NAN(*(float *)((long)param_3 + 0x554)) && !NAN(fVar23))) {
    bVar12 = *(float *)((long)param_3 + 0x554) == fVar23;
  }
  if (!bVar12) {
    *(float *)(param_3 + 0xaa) = fVar20 / fVar21;
    *(float *)((long)param_3 + 0x554) = fVar23;
    FUN_1000200a0(plVar8);
  }
  plVar9 = param_3 + 0xc1;
  fVar20 = (float)FUN_100652e60(plVar2);
  fVar22 = fVar23;
  fVar21 = (float)FUN_1006531b0(plVar9);
  fVar23 = fVar23 / fVar22;
  if ((*(float *)(param_3 + 0xca) != fVar20 / fVar21) ||
     (*(float *)((long)param_3 + 0x654) != fVar23)) {
    *(float *)(param_3 + 0xca) = fVar20 / fVar21;
    *(float *)((long)param_3 + 0x654) = fVar23;
    FUN_1000200a0(plVar9);
  }
  plVar10 = param_3 + 0x163;
  if ((int)param_3[0x272] == 2) {
    local_a8 = -NAN;
    FUN_100652dd4(plVar10,&local_a8,2);
    fVar22 = (float)FUN_10064ed84(plVar10,param_3);
    fVar20 = 0.25;
  }
  else {
    FUN_100652dd4(plVar10,&DAT_10115a168,2);
    fVar22 = (float)FUN_10064ed84(plVar10,param_3);
    fVar20 = 0.45;
  }
  if ((*(float *)(param_3 + 0x16c) != fVar22 * fVar20) ||
     (*(float *)((long)param_3 + 0xb64) != fVar23 * fVar20)) {
    *(float *)(param_3 + 0x16c) = fVar22 * fVar20;
    *(float *)((long)param_3 + 0xb64) = fVar23 * fVar20;
    FUN_1000200a0(plVar10);
  }
  *(uint *)((long)param_3 + 0x126c) = *(uint *)((long)param_3 + 0x126c) & 0xffffffbf;
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_101873a40);
  if ((*(float *)(param_3 + 0x4e) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x274) != DAT_101873a40._4_4_)) {
    param_3[0x4e] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_3 + 0x6c) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x364) != DAT_101873a40._4_4_)) {
    param_3[0x6c] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_3 + 0x8d) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x46c) != DAT_101873a40._4_4_)) {
    param_3[0x8d] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_3 + 0xab) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x55c) != DAT_101873a40._4_4_)) {
    param_3[0xab] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar8);
  }
  if ((*(float *)(param_3 + 0xcb) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x65c) != DAT_101873a40._4_4_)) {
    param_3[0xcb] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_3 + 0xeb) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x75c) != DAT_101873a40._4_4_)) {
    param_3[0xeb] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_3 + 0x10b) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x85c) != DAT_101873a40._4_4_)) {
    param_3[0x10b] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar5);
  }
  if ((*(float *)(param_3 + 0x129) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0x94c) != DAT_101873a40._4_4_)) {
    param_3[0x129] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar6);
  }
  if ((*(float *)(param_3 + 0x147) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0xa3c) != DAT_101873a40._4_4_)) {
    param_3[0x147] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar7);
  }
  if ((*(float *)(param_3 + 0x16d) != (float)DAT_101873a40) ||
     (*(float *)((long)param_3 + 0xb6c) != DAT_101873a40._4_4_)) {
    param_3[0x16d] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(param_3 + 0x163);
  }
  *(uint *)((long)param_3 + 0x97c) = *(uint *)((long)param_3 + 0x97c) & 0xffffffbf;
  FUN_10064e5ec(0,0,param_3 + 0x33,8,param_3,8);
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  FUN_10064e5ec(0,0,plVar2,8,param_3,8);
  FUN_10064e5ec(0,0,plVar3,8,param_3,8);
  FUN_10064e5ec(0,0,plVar8,8,param_3,8);
  FUN_10064e5ec(0,0,plVar9,8,param_3,8);
  FUN_10064e5ec(0,0,plVar4,8,param_3,8);
  FUN_10064e5ec(0,0,plVar5,8,param_3,8);
  FUN_10064e5ec(0,0,plVar6,8,param_3,8);
  FUN_10064e5ec(0,0,plVar7,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x163,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x181,2,plVar1,2);
  uVar16 = (ulong)*(uint *)((long)param_3 + 0x1394);
  if (*(char *)((long)param_3 + 0x13a5) == '\0') {
    lVar18 = 0;
    do {
      if (uVar16 * 0xf0 - lVar18 == 0) break;
      *(uint *)((long)param_3 + lVar18 + 0xdbc) =
           *(uint *)((long)param_3 + lVar18 + 0xdbc) & 0xfffffffb;
      lVar18 = lVar18 + 0xf0;
    } while (lVar18 != 0x4b0);
  }
  else {
    lVar18 = 0;
    uVar19 = 0;
    fVar23 = (float)(*(uint *)((long)param_3 + 0x1394) - 1) * 10.0;
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    do {
      if (uVar16 <= uVar19) break;
      lVar11 = (long)param_3 + lVar18 + 0xd38;
      uVar13 = *(uint *)((long)param_3 + lVar18 + 0xdbc) | 4;
      *(uint *)((long)param_3 + lVar18 + 0xdbc) = uVar13;
      fVar22 = *(float *)((long)param_3 + lVar18 + 0xd84);
      bVar12 = false;
      if ((*(float *)((long)param_3 + lVar18 + 0xd80) == 2.0) && (bVar12 = false, !NAN(fVar22))) {
        bVar12 = fVar22 == 2.0;
      }
      if (!bVar12) {
        *(undefined8 *)((long)param_3 + lVar18 + 0xd80) = 0x4000000040000000;
        FUN_1000200a0(lVar11);
        uVar13 = *(uint *)((long)param_3 + lVar18 + 0xdbc);
      }
      if ((uVar13 & 0x7f80) != 0x6c00) {
        *(uint *)((long)param_3 + lVar18 + 0xdbc) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
        FUN_1000200a0(lVar11);
      }
      fVar20 = (float)FUN_100652e60(plVar1);
      fVar21 = fVar20 * 0.5 + 3.0;
      fVar20 = (float)___sincosf_stret((-((float)(int)uVar19 * -10.0) - fVar23 * 0.5) * 0.017453292)
      ;
      FUN_10064e5ec(fVar20 * fVar21,fVar22 * fVar21,lVar11,8,plVar1,8);
      uVar19 = uVar19 + 1;
      uVar16 = (ulong)*(uint *)((long)param_3 + 0x1394);
      lVar18 = lVar18 + 0xf0;
    } while (lVar18 != 0x4b0);
    iVar14 = (int)uVar16;
    if (iVar14 < 5) {
      iVar15 = iVar14 + -5;
      puVar17 = (uint *)((long)param_3 + (long)iVar14 * 0xf0 + 0xdbc);
      do {
        *puVar17 = *puVar17 & 0xfffffffb;
        bVar12 = iVar15 != -1;
        iVar15 = iVar15 + 1;
        puVar17 = puVar17 + 0x3c;
      } while (bVar12);
    }
  }
  FUN_10064e5ec(0xc1c00000,0xc1c00000,param_3 + 0x23d,8,param_3,0);
  return;
}




void thunk_FUN_1000cd930(void)

{
  FUN_1000cd930();
  return;
}




void thunk_FUN_1000cf3e4(void)

{
  FUN_1000cf3e4();
  return;
}




void FUN_1000cf3d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000cf3e4();
  operator_delete(pvVar1);
  return;
}




void FUN_1000cf3e4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1000cf3e4_101455bc0;
  thunk_FUN_1000e3398(param_1 + 0x23d);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x10f8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x11b0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x11c8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x10f8);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  thunk_FUN_100651068(param_1 + 0x181);
  param_1[0x163] = &PTR_FUN_1014a7108;
  param_1[0x17a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17d);
  FUN_10064e2bc(param_1 + 0x163);
  thunk_FUN_100651068(param_1 + 0x13d);
  param_1[0x11f] = &PTR_FUN_1014a7108;
  param_1[0x136] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x139);
  FUN_10064e2bc(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_1014a7108;
  param_1[0x118] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11b);
  FUN_10064e2bc(param_1 + 0x101);
  param_1[0xe1] = &PTR_FUN_1014a7108;
  param_1[0xf8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfb);
  FUN_10064e2bc(param_1 + 0xe1);
  param_1[0xc1] = &PTR_FUN_1014a7108;
  param_1[0xd8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdb);
  FUN_10064e2bc(param_1 + 0xc1);
  param_1[0xa1] = &PTR_FUN_1014a7108;
  param_1[0xb8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb);
  FUN_10064e2bc(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_1014a7108;
  param_1[0x9a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9d);
  FUN_10064e2bc(param_1 + 0x83);
  param_1[0x62] = &PTR_FUN_1014a77a8;
  param_1[0x79] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x80);
  param_1[0x62] = &PTR_FUN_1014a7108;
  param_1[0x79] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7c);
  FUN_10064e2bc(param_1 + 0x62);
  param_1[0x44] = &PTR_FUN_1014a7108;
  param_1[0x5b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e);
  FUN_10064e2bc(param_1 + 0x44);
  FUN_10064221c(param_1 + 0x33);
  FUN_1000cd630(param_1);
  return;
}




long * FUN_1000cf5b0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *local_60;
  long *plStack_58;
  long *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_thunk_FUN_1000cf758_101455dc0;
  puVar2 = puVar2 + 0x18;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08(plVar1);
  param_1[0x54] = 0;
  thunk_FUN_1000867d4(param_1 + 0x55);
  *(undefined4 *)(param_1 + 0xbe) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"global_closex");
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) | 0x10;
  FUN_10064e47c(0x42c80000,0x42c80000,puVar2);
  local_38 = DAT_101dbd458;
  local_60 = thunk_FUN_1000cfe00;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (long *)0x0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_60);
  local_38 = DAT_101dbd484;
  local_60 = thunk_FUN_1000cfe00;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (long *)0x0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_60);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  uVar3 = FUN_100316150();
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1000cfee0;
  plStack_58 = param_1;
  local_50 = param_1;
  FUN_10003c508(uVar3,&local_60);
  return param_1;
}




void thunk_FUN_1000cfe00(void)

{
  FUN_1000cfe00();
  return;
}




long * thunk_FUN_1000cf5b0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcStack_60;
  long *plStack_58;
  long *plStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_thunk_FUN_1000cf758_101455dc0;
  puVar2 = puVar2 + 0x18;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08(plVar1);
  param_1[0x54] = 0;
  thunk_FUN_1000867d4(param_1 + 0x55);
  *(undefined4 *)(param_1 + 0xbe) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"global_closex");
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) | 0x10;
  FUN_10064e47c(0x42c80000,0x42c80000,puVar2);
  uStack_38 = DAT_101dbd458;
  pcStack_60 = thunk_FUN_1000cfe00;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  plStack_50 = (long *)0x0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x19,&pcStack_60);
  uStack_38 = DAT_101dbd484;
  pcStack_60 = thunk_FUN_1000cfe00;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  plStack_50 = (long *)0x0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x19,&pcStack_60);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  uVar3 = FUN_100316150();
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1000cfee0;
  plStack_58 = param_1;
  plStack_50 = param_1;
  FUN_10003c508(uVar3,&pcStack_60);
  return param_1;
}




void FUN_1000cf758(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_1000cf758_101455dc0;
  puVar2 = (uint *)FUN_100316150();
  if (*puVar2 != 0) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar4 = (ulong)*puVar2 << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  thunk_FUN_1000868c8(param_1 + 0x55);
  param_1[0x36] = &PTR_FUN_1014a7108;
  param_1[0x4d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000cf758(void)

{
  FUN_1000cf758();
  return;
}




void FUN_1000cf818(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000cf758();
  operator_delete(pvVar1);
  return;
}




void FUN_1000cf82c(long *param_1,long param_2)

{
  long lVar1;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if (param_1[0x54] != 0) {
    FUN_1006423ec(param_1[0x54],1);
  }
  param_1[0x54] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_1000c995c(param_1[0x54],1);
  lVar1 = param_1[0x54];
  FUN_10001549c(&local_50,"white_background");
  FUN_1000c9884(0x3f800000,lVar1,&local_50,0xff231919);
  if (local_40._7_1_ < '\0') {
    operator_delete(local_50);
  }
  FUN_1000c993c(param_1[0x54],1);
  *(uint *)(param_1[0x54] + 0x114c) = *(uint *)(param_1[0x54] + 0x114c) | 8;
  local_28 = DAT_101dbd4c0;
  local_50 = FUN_1000cf980;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1[0x54] + 8,&local_50);
  local_28 = DAT_101dbd4bc;
  local_50 = thunk_FUN_1000cfe00;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1[0x54] + 8,&local_50);
  local_28 = DAT_101dbd4b8;
  local_50 = FUN_1000cf98c;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1[0x54] + 8,&local_50);
  return;
}




void FUN_1000cf980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000cfe5c(param_1,param_4);
  return;
}




void thunk_FUN_1000cfe00(void)

{
  FUN_1000cfe00();
  return;
}




void FUN_1000cf98c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100316180(0x20);
  if (iVar1 == 2) {
    FUN_1000cfe00(param_1);
    return;
  }
  return;
}




void FUN_1000cf9c8(long param_1)

{
  FUN_100086940(param_1 + 0x2a8);
  return;
}




void FUN_1000cf9d0(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_98;
  float fStack_94;
  char local_81;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  
  iVar7 = FUN_100316180(0x20);
  uVar8 = FUN_100641574("root-layer");
  FUN_10064142c(&uStack_74,&local_78);
  lVar1 = param_3 + 0x1b0;
  FUN_10064e47c(uStack_74,lVar1);
  lVar2 = param_3 + 0x2a8;
  local_98 = (float)FUN_100086afc(lVar2);
  fStack_94 = local_78;
  FUN_10064e48c(lVar2,&local_98);
  uVar9 = FUN_100126c88();
  fVar15 = local_78;
  fVar10 = (float)FUN_100086b0c(lVar2,uVar9);
  fVar16 = 1.0;
  fVar11 = 1.0;
  fVar14 = fVar15;
  if (0.0 < fVar15) {
    fVar14 = param_2 - *(float *)(param_3 + 0x5f0);
    fVar11 = (float)NEON_fminnm(param_2 * 0.5,fVar14);
    fVar11 = fVar11 / fVar15;
  }
  if (0.0 < fVar10) {
    fVar16 = (param_1 * 0.3) / fVar10;
  }
  local_80 = fVar10;
  fStack_7c = fVar15;
  FUN_100086afc(lVar2);
  if ((0.0 < fVar14) && (fVar12 = (float)FUN_100086afc(lVar2), 0.0 < fVar12)) {
    FUN_100086afc(lVar2);
    fVar12 = (float)FUN_100086afc(lVar2);
    fVar14 = (float)NEON_fminnm(fVar11 / fVar14,fVar16 / fVar12);
    fVar10 = fVar14 * fVar10;
    fVar15 = fVar14 * fVar15;
    local_80 = fVar10;
    fStack_7c = fVar15;
  }
  fVar14 = (float)DAT_101dc1cb8;
  if (iVar7 != 2) {
    fVar14 = fVar10;
  }
  fVar10 = DAT_101dc1cb8._4_4_;
  if (iVar7 != 2) {
    fVar10 = fVar15;
  }
  bVar6 = false;
  if ((*(float *)(param_3 + 0x2f0) == fVar14) &&
     (bVar6 = false, !NAN(*(float *)(param_3 + 0x2f4)) && !NAN(fVar10))) {
    bVar6 = *(float *)(param_3 + 0x2f4) == fVar10;
  }
  if (!bVar6) {
    pfVar4 = (float *)&DAT_101dc1cb8;
    if (iVar7 != 2) {
      pfVar4 = &local_80;
    }
    *(undefined8 *)(param_3 + 0x2f0) = *(undefined8 *)pfVar4;
    FUN_1000200a0(lVar2);
  }
  fVar15 = *(float *)(param_3 + 0x5f0);
  FUN_10064259c(lVar2);
  FUN_10064e5ec(0x41a00000,(param_2 - (fVar15 + fVar14)) * 0.5,lVar2,0,param_3,0);
  lVar3 = param_3 + 0xc0;
  FUN_10064e5ec(0xc1a00000,0x41a00000,lVar3,1,param_3,1);
  if (*(long *)(param_3 + 0x2a0) != 0) {
    fVar15 = (float)FUN_10064eb7c(lVar2,1,lVar3,0);
    fVar15 = fVar15 + -100.0;
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_10064259c(lVar2);
      fVar14 = (float)FUN_100652e60(lVar3);
      fVar15 = (param_1 + -100.0) - (fVar15 + fVar14);
    }
    if (fVar15 <= 1.0) {
      fVar15 = 1.0;
    }
    fStack_94 = (param_2 + -40.0) - *(float *)(param_3 + 0x5f0);
    local_98 = fVar15;
    FUN_10064e48c(*(undefined8 *)(param_3 + 0x2a0),&local_98);
    FUN_10064e5ec(0xc2a00000,0,*(undefined8 *)(param_3 + 0x2a0),1,lVar3,0);
  }
  FUN_10064e5ec(0,0,lVar1,0,uVar8,0);
  FUN_100086a78(lVar2);
  iVar7 = FUN_100316180(0x20);
  if (iVar7 == 1) {
    *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 4;
    *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 4;
    *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
         *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) | 4;
    uVar5 = *(uint *)(param_3 + 0x32c);
    if ((uVar5 & 0x7f80) != 0x4c80) {
      *(uint *)(param_3 + 0x32c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar2);
    }
    uVar5 = *(uint *)(param_3 + 0x234);
    if ((uVar5 & 0x7f80) != 0x4c80) {
      *(uint *)(param_3 + 0x234) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + 0x2a0);
    FUN_10001549c(&local_98,"white_background");
    uVar13 = 0x3e99999a;
  }
  else {
    if (iVar7 == 2) {
      *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) & 0xfffffffb;
      *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) & 0xfffffffb;
      *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
           *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) & 0xfffffffb;
      return;
    }
    *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 4;
    *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 4;
    *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) =
         *(uint *)(*(long *)(param_3 + 0x2a0) + 0x3dc) | 4;
    if ((~*(uint *)(param_3 + 0x32c) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x32c) = *(uint *)(param_3 + 0x32c) | 0x7f80;
      FUN_1000200a0(lVar2);
    }
    if ((~*(uint *)(param_3 + 0x234) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x234) = *(uint *)(param_3 + 0x234) | 0x7f80;
      FUN_1000200a0(lVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + 0x2a0);
    FUN_10001549c(&local_98,"white_background");
    uVar13 = 0x3f800000;
  }
  FUN_1000c9884(uVar13,uVar8,&local_98,0xff231919);
  if (local_81 < '\0') {
    operator_delete((void *)CONCAT44(fStack_94,local_98));
  }
  return;
}




void FUN_1000cfe00(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_1000c97fc(*(undefined8 *)(param_1 + 0x2a0),1);
  uVar1 = FUN_100644a94("UI::EVENT_CLOSE_MOBILECHAT");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000cfe5c(long *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  float local_38;
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,&local_38);
  fVar1 = (float)FUN_100644b2c(param_2);
  *(float *)(param_1 + 0xbe) = local_38 * fVar1;
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_1000cf9d0(uVar2,param_1);
  return;
}




void FUN_1000cfee0(long *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0x20) {
    uVar1 = (**(code **)(*param_1 + 0x48))();
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_1000cf9d0(uVar1,param_1);
    return;
  }
  return;
}




void thunk_FUN_1000cf9d0(void)

{
  FUN_1000cf9d0();
  return;
}




void thunk_FUN_1000cfee0(long *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0x20) {
    uVar1 = (**(code **)(*param_1 + 0x48))();
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_1000cf9d0(uVar1,param_1);
    return;
  }
  return;
}




long * FUN_1000cff50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  *puVar5 = &PTR_thunk_FUN_1000d02a0_101455f08;
  FUN_10064e264(puVar5 + 0x18);
  thunk_FUN_1006421a8(param_1 + 0x2f);
  plVar1 = param_1 + 0x40;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x5e;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x7c;
  thunk_FUN_100652c08(plVar3);
  param_1[0x9a] = 0;
  param_1[0x9f] = 0x4248000043520000;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x68) == (float)DAT_101873a40) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x344)) && !NAN(DAT_101873a40._4_4_))) {
    bVar4 = *(float *)((long)param_1 + 0x344) == DAT_101873a40._4_4_;
  }
  if (!bVar4) {
    param_1[0x68] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar2);
  }
  bVar4 = false;
  if ((*(float *)(param_1 + 0x86) == (float)DAT_101873a40) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x434)) && !NAN(DAT_101873a40._4_4_))) {
    bVar4 = *(float *)((long)param_1 + 0x434) == DAT_101873a40._4_4_;
  }
  if (!bVar4) {
    param_1[0x86] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "hud_store_item_node_highlighted");
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  local_48 = DAT_101dbd458;
  local_70 = FUN_1000d0280;
  plVar2 = param_1 + 0x19;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&local_70);
  local_48 = DAT_101dbd484;
  local_70 = FUN_1000d0280;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&local_70);
  local_48 = DAT_101dbd45c;
  local_70 = FUN_1000d0288;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&local_70);
  local_48 = DAT_101dbd488;
  local_70 = FUN_1000d0288;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&local_70);
  local_48 = DAT_101dbd460;
  local_70 = FUN_1000d0290;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_1000d0290;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&local_70);
  local_48 = DAT_101dbd4a4;
  local_70 = thunk_FUN_1000d0f10;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&local_70);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_cancel");
  FUN_100652dd4(plVar1,&DAT_10115a170,2);
  uVar6 = *(uint *)((long)param_1 + 0x284);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x284) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
    uVar6 = *(uint *)((long)param_1 + 0x284);
  }
  *(uint *)((long)param_1 + 0x284) = uVar6 & 0xfffffffb | 0x10;
  FUN_10064e47c(0x437a0000,0x437a0000,plVar1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffbb;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffffffbf;
  return param_1;
}




long * thunk_FUN_1000cff50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  *puVar5 = &PTR_thunk_FUN_1000d02a0_101455f08;
  FUN_10064e264(puVar5 + 0x18);
  thunk_FUN_1006421a8(param_1 + 0x2f);
  plVar1 = param_1 + 0x40;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x5e;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x7c;
  thunk_FUN_100652c08(plVar3);
  param_1[0x9a] = 0;
  param_1[0x9f] = 0x4248000043520000;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x68) == (float)DAT_101873a40) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x344)) && !NAN(DAT_101873a40._4_4_))) {
    bVar4 = *(float *)((long)param_1 + 0x344) == DAT_101873a40._4_4_;
  }
  if (!bVar4) {
    param_1[0x68] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar2);
  }
  bVar4 = false;
  if ((*(float *)(param_1 + 0x86) == (float)DAT_101873a40) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x434)) && !NAN(DAT_101873a40._4_4_))) {
    bVar4 = *(float *)((long)param_1 + 0x434) == DAT_101873a40._4_4_;
  }
  if (!bVar4) {
    param_1[0x86] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "hud_store_item_node_highlighted");
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  uStack_48 = DAT_101dbd458;
  pcStack_70 = FUN_1000d0280;
  plVar2 = param_1 + 0x19;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&pcStack_70);
  uStack_48 = DAT_101dbd484;
  pcStack_70 = FUN_1000d0280;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&pcStack_70);
  uStack_48 = DAT_101dbd45c;
  pcStack_70 = FUN_1000d0288;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&pcStack_70);
  uStack_48 = DAT_101dbd488;
  pcStack_70 = FUN_1000d0288;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&pcStack_70);
  uStack_48 = DAT_101dbd460;
  pcStack_70 = FUN_1000d0290;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&pcStack_70);
  uStack_48 = DAT_101dbd48c;
  pcStack_70 = FUN_1000d0290;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&pcStack_70);
  uStack_48 = DAT_101dbd4a4;
  pcStack_70 = thunk_FUN_1000d0f10;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar2,&pcStack_70);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_cancel");
  FUN_100652dd4(plVar1,&DAT_10115a170,2);
  uVar6 = *(uint *)((long)param_1 + 0x284);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x284) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
    uVar6 = *(uint *)((long)param_1 + 0x284);
  }
  *(uint *)((long)param_1 + 0x284) = uVar6 & 0xfffffffb | 0x10;
  FUN_10064e47c(0x437a0000,0x437a0000,plVar1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffbb;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffffffbf;
  return param_1;
}

