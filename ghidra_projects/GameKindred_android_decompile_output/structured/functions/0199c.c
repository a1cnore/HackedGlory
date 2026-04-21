// functions/0199c — 51 functions
#include "libGameKindred.h"




void thunk_FUN_0199ce58(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  lVar1 = 0;
  if ((uVar2 & 0x20000000) != 0) {
    lVar1 = param_1 + 0x30;
  }
  if ((uVar2 >> 0x1e & 1) == 0) {
    uVar4 = 0xbf800000;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x40);
  }
  iVar3 = (int)(uVar2 << 3) >> 3;
  if (-1 < (int)uVar2) {
    iVar3 = -1;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 8))(uVar4,*(long **)(param_1 + 0x18),lVar1,iVar3);
  (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0199cec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1);
    return;
  }
  return;
}




void FUN_0199c008(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e788d4(&DAT_03214ff8);
  if ((uVar1 & 1) != 0) {
    FUN_00e788e4(&DAT_03214ff8);
    return;
  }
  return;
}




void FUN_0199c038(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78a6c(&DAT_03214ff8);
  if ((uVar1 & 1) != 0) {
    FUN_0199bfc8();
    FUN_00e78ecc(&DAT_03214ff8,thunk_FUN_0199c63c,param_1);
    return;
  }
  FUN_0199c63c(param_1);
  return;
}




void thunk_FUN_0199c63c(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0x18);
  for (plVar8 = (long *)*plVar9; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  for (plVar8 = (long *)FUN_0199b6ac(); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  for (plVar8 = (long *)*plVar9; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
    (**(code **)(*plVar8 + 0x38))(plVar8);
    (**(code **)(*plVar8 + 0x30))(plVar8);
  }
  *plVar9 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  for (plVar8 = (long *)FUN_0199b6ac(); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x30))(plVar8);
  }
  uVar5 = FUN_0199bf34();
  piVar6 = *(int **)(param_1 + 0x30);
  if ((uVar5 & 1) == 0) {
    do {
      while (*piVar6 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = piVar6[10];
    plVar8 = (long *)(piVar6 + (ulong)uVar2 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
    uVar1 = ~uVar2 & 1;
    *plVar8 = *(long *)(piVar6 + (ulong)uVar2 * 4 + 2);
    *(long *)(piVar6 + (ulong)uVar2 * 4 + 2) = 0;
    plVar8 = (long *)(piVar6 + (ulong)uVar1 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
  }
  else {
    do {
      while (*piVar6 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar1 = ~piVar6[10] & 1;
    plVar8 = (long *)(piVar6 + (ulong)uVar1 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
  }
  *plVar8 = *(long *)(piVar6 + (ulong)uVar1 * 4 + 2);
  *(long *)(piVar6 + (ulong)uVar1 * 4 + 2) = 0;
  *piVar6 = 0;
  return;
}




void FUN_0199c090(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78248();
  if ((uVar1 & 1) != 0) {
    FUN_00e78608(&DAT_03215100,1,"DispatchQueue_RenderEval");
    FUN_00e78b80(&DAT_03215100);
    return;
  }
  return;
}




void FUN_0199c0dc(void)

{
  ulong uVar1;
  
  FUN_00e7901c(&DAT_03215100,0,0);
  uVar1 = FUN_00e78714(&DAT_03215100);
  if ((uVar1 & 1) != 0) {
    FUN_00e78724(&DAT_03215100);
    return;
  }
  return;
}




void FUN_0199c12c(void)

{
  FUN_00e7901c(&DAT_03215100,0,0);
  return;
}




void FUN_0199c140(void)

{
  FUN_00e78714(&DAT_03215100);
  return;
}




void FUN_0199c14c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if ((param_2 != 0) && (uVar1 = FUN_00e78714(&DAT_03215100), (uVar1 & 1) != 0)) {
    memset(&DAT_032151f8,0,0x180);
    lVar2 = FUN_0199b6ac();
    if (lVar2 != 0) {
      uVar3 = 0;
      do {
        lVar4 = *(long *)(lVar2 + 8);
        uVar1 = (ulong)uVar3;
        (&DAT_032151f8)[uVar1 * 3] = param_1;
        (&DAT_03215200)[uVar1 * 3] = lVar2;
        (&DAT_03215208)[uVar1 * 3] = param_2;
        FUN_00e78ecc(&DAT_03215100,FUN_0199c1fc);
        uVar3 = uVar3 + 1;
        lVar2 = lVar4;
      } while (lVar4 != 0);
    }
  }
  return;
}




void FUN_0199c1fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar1,uVar2);
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
  }
  return;
}




void FUN_0199c248(void)

{
  return;
}




void FUN_0199c24c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = param_2;
  return;
}




void FUN_0199c264(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  
  FUN_0199bfc8();
  piVar4 = DAT_03214fe0;
  do {
    while (*piVar4 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar4[0x1002] = 0;
  *piVar4 = 0;
  piVar4 = (int *)param_1[6];
  do {
    while (*piVar4 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = piVar4[10];
  plVar5 = (long *)(piVar4 + (ulong)uVar1 * 4 + 4);
  lVar6 = *plVar5;
  while (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x20008);
    lVar6 = *plVar5;
  }
  *plVar5 = *(long *)(piVar4 + (ulong)uVar1 * 4 + 2);
  *(long *)(piVar4 + (ulong)uVar1 * 4 + 2) = 0;
  plVar5 = (long *)(piVar4 + (ulong)(~uVar1 & 1) * 4 + 4);
  lVar6 = *plVar5;
  while (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x20008);
    lVar6 = *plVar5;
  }
  *plVar5 = *(long *)(piVar4 + (ulong)(~uVar1 & 1) * 4 + 2);
  *(long *)(piVar4 + (ulong)(~uVar1 & 1) * 4 + 2) = 0;
  *piVar4 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_0199c358(long *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = (**(code **)*param_2)(param_2,param_1[6]);
  if ((param_3 & 1) == 0) {
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar4 = param_1 + 1;
    lVar3 = *plVar4;
    *(long *)(lVar2 + 0x10) = lVar3;
    plVar1 = param_1;
    if (*param_1 != 0) {
      plVar1 = (long *)(lVar3 + 8);
    }
    *plVar1 = lVar2;
  }
  else {
    lVar3 = *param_1;
    *(long *)(lVar2 + 8) = lVar3;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (lVar3 == 0) {
      plVar4 = param_1 + 1;
      *param_1 = lVar2;
    }
    else {
      *(long *)(lVar3 + 0x10) = lVar2;
      plVar4 = param_1;
    }
  }
  *plVar4 = lVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_0199c3ec(long param_1,uint param_2)

{
  long lVar1;
  undefined **local_60 [3];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *(undefined8 *)(param_1 + 0x30);
  local_60[0] = &PTR_FUN_02baf650;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_0199c358(param_1,local_60,param_2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199c458(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_02baf650;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




void FUN_0199c474(undefined8 param_1)

{
  ulong uVar1;
  
  FUN_0199c4ac();
  uVar1 = FUN_0199bf34();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_0199c63c(param_1);
  return;
}




void FUN_0199c4ac(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  FUN_0199bfc8();
  for (plVar3 = (long *)FUN_0199b6ac(); piVar6 = DAT_03214fe0, plVar3 != (long *)0x0;
      plVar3 = (long *)plVar3[1]) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  do {
    while (*piVar6 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar2) {
      *piVar6 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  piVar6[0x1002] = 0;
  *piVar6 = 0;
  FUN_0199c7f8(param_1);
  uVar4 = FUN_0199c140();
  plVar3 = (long *)*param_1;
  if ((uVar4 & 1) == 0) {
    for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1,0);
    }
  }
  else {
    FUN_0199c14c(param_1,plVar3);
    FUN_0199c12c();
  }
  for (plVar3 = (long *)FUN_0199b6ac(); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  lVar7 = *param_1;
  if (lVar7 != 0) {
    do {
      FUN_0199c864(param_1,lVar7);
      *(undefined8 *)(lVar7 + 8) = 0;
      lVar5 = param_1[4];
      *(long *)(lVar7 + 0x10) = lVar5;
      plVar3 = param_1 + 3;
      if (param_1[3] != 0) {
        plVar3 = (long *)(lVar5 + 8);
      }
      *plVar3 = lVar7;
      param_1[4] = lVar7;
      lVar7 = *param_1;
      *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    } while (lVar7 != 0);
  }
  FUN_0199bf40();
  uVar4 = FUN_0199bf34();
  if ((uVar4 & 1) != 0) {
    piVar6 = (int *)param_1[6];
    do {
      while (*piVar6 != 0) {
        ClearExclusiveLocal();
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = 100;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    piVar6[10] = ~piVar6[10] & 1;
    *piVar6 = 0;
    FUN_0199c038(param_1);
    return;
  }
  return;
}




void FUN_0199c63c(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0x18);
  for (plVar8 = (long *)*plVar9; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  for (plVar8 = (long *)FUN_0199b6ac(); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  for (plVar8 = (long *)*plVar9; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
    (**(code **)(*plVar8 + 0x38))(plVar8);
    (**(code **)(*plVar8 + 0x30))(plVar8);
  }
  *plVar9 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  for (plVar8 = (long *)FUN_0199b6ac(); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x30))(plVar8);
  }
  uVar5 = FUN_0199bf34();
  piVar6 = *(int **)(param_1 + 0x30);
  if ((uVar5 & 1) == 0) {
    do {
      while (*piVar6 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = piVar6[10];
    plVar8 = (long *)(piVar6 + (ulong)uVar2 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
    uVar1 = ~uVar2 & 1;
    *plVar8 = *(long *)(piVar6 + (ulong)uVar2 * 4 + 2);
    *(long *)(piVar6 + (ulong)uVar2 * 4 + 2) = 0;
    plVar8 = (long *)(piVar6 + (ulong)uVar1 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
  }
  else {
    do {
      while (*piVar6 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar1 = ~piVar6[10] & 1;
    plVar8 = (long *)(piVar6 + (ulong)uVar1 * 4 + 4);
    lVar7 = *plVar8;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x20008);
      lVar7 = *plVar8;
    }
  }
  *plVar8 = *(long *)(piVar6 + (ulong)uVar1 * 4 + 2);
  *(long *)(piVar6 + (ulong)uVar1 * 4 + 2) = 0;
  *piVar6 = 0;
  return;
}




void FUN_0199c7f8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  while (plVar2 != (long *)0x0) {
    plVar1 = (long *)plVar2[1];
    plVar3 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
    plVar2 = plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,param_1,plVar3);
      FUN_0199c864(param_1,plVar3);
    }
  }
  return;
}




void FUN_0199c864(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 8);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x10);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 8);
    *(long *)(*(long *)(param_2 + 8) + 0x10) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_0199c8c4(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x3f);
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR___cxa_pure_virtual_028256c8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  *puVar4 = &PTR_FUN_02baf650;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar4[6] = *(undefined8 *)(param_1 + 0x30);
  puVar4[5] = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar5;
  return;
}




void FUN_0199c95c(void)

{
  return;
}




void FUN_0199c960(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30));
  plVar1 = (long *)(param_1 + 0x18);
  if ((param_3 & 1) == 0) {
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar4 = (long *)(param_1 + 0x20);
    lVar3 = *plVar4;
    *(long *)(lVar2 + 0x10) = lVar3;
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar1 = (long *)(lVar3 + 8);
    }
    *plVar1 = lVar2;
  }
  else {
    lVar3 = *plVar1;
    *(long *)(lVar2 + 8) = lVar3;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (lVar3 == 0) {
      *(long *)(param_1 + 0x18) = lVar2;
      plVar4 = (long *)(param_1 + 0x20);
    }
    else {
      *(long *)(lVar3 + 0x10) = lVar2;
      plVar4 = plVar1;
    }
  }
  *plVar4 = lVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}




void FUN_0199c9f8(long param_1,uint param_2)

{
  long lVar1;
  undefined **local_60 [3];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *(undefined8 *)(param_1 + 0x30);
  local_60[0] = &PTR_FUN_02baf650;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_0199c960(param_1,local_60,param_2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_0199ca64(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0x18);
  plVar3 = (long *)*plVar4;
  if (plVar3 != (long *)0x0) {
    do {
      if (plVar3 == *(long **)(param_1 + 0x20)) {
        *plVar4 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        *plVar4 = plVar3[1];
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      plVar2 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3);
      if (plVar2 == (long *)0x0) {
        plVar3[1] = param_3[1];
        plVar3[2] = (long)param_3;
        puVar1 = (undefined8 *)(param_2 + 8);
        if (param_3[1] != 0) {
          puVar1 = (undefined8 *)(param_3[1] + 0x10);
        }
        *puVar1 = plVar3;
        param_3[1] = (long)plVar3;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        param_3 = plVar3;
      }
      else {
        param_3 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,param_2,param_3);
      }
      plVar3 = (long *)*plVar4;
    } while (plVar3 != (long *)0x0);
  }
  return param_3;
}




void FUN_0199cb3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf6b8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0x7010100ff;
  return;
}




void FUN_0199cb64(undefined8 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = &PTR_FUN_02baf6b8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = param_2;
  *(undefined2 *)((long)param_1 + 0x1c) = param_2;
  *(undefined2 *)((long)param_1 + 0x26) = param_3;
  param_1[2] = 0x7010100ff;
  *(undefined2 *)((long)param_1 + 0x1e) = param_3;
  return;
}




void FUN_0199cba0(long param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x24) = param_2;
  *(undefined2 *)(param_1 + 0x1c) = param_2;
  *(undefined2 *)(param_1 + 0x26) = param_3;
  *(undefined2 *)(param_1 + 0x1e) = param_3;
  return;
}




void FUN_0199cbbc(long param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_0199d384(*(undefined8 *)(param_1 + 8));
  glViewport(*(undefined2 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x1a),
             *(undefined2 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x1e));
  uVar1 = *(undefined2 *)(param_1 + 0x20);
  uVar2 = *(undefined2 *)(param_1 + 0x22);
  uVar3 = *(undefined2 *)(param_1 + 0x24);
  uVar4 = *(undefined2 *)(param_1 + 0x26);
  glEnable(0xc11);
  glScissor(uVar1,uVar2,uVar3,uVar4);
  FUN_00f01040(*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_0199cc34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0199d4b0();
  }
  FUN_0199d384(0xbf800000,0,0,0xffffffff);
  return;
}




void FUN_0199cc60(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_0199cc68(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  return;
}




void FUN_0199cc74(long param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  *(undefined2 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x18) = param_2;
  *(undefined2 *)(param_1 + 0x22) = param_3;
  *(undefined2 *)(param_1 + 0x1a) = param_3;
  *(undefined2 *)(param_1 + 0x24) = param_4;
  *(undefined2 *)(param_1 + 0x1c) = param_4;
  *(undefined2 *)(param_1 + 0x26) = param_5;
  *(undefined2 *)(param_1 + 0x1e) = param_5;
  return;
}




void FUN_0199cc98(long param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  *(undefined2 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x22) = param_3;
  *(undefined2 *)(param_1 + 0x24) = param_4;
  *(undefined2 *)(param_1 + 0x26) = param_5;
  return;
}




float FUN_0199ccac(long param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if ((*(ushort *)(param_1 + 0x1c) != 0) && (*(ushort *)(param_1 + 0x1e) != 0)) {
    fVar1 = (float)*(ushort *)(param_1 + 0x1c) / (float)*(ushort *)(param_1 + 0x1e);
  }
  return fVar1;
}




void FUN_0199ccd0(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x2f);
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR_FUN_02baf6b8;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar5;
  return;
}




void FUN_0199cd4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_02baf6e0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = 0;
  *(uint *)((long)param_1 + 0x44) = *(uint *)((long)param_1 + 0x44) & 0x1fffffff;
  return;
}




undefined8 * FUN_0199cd74(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x4f);
  puVar6 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar6 = &PTR___cxa_pure_virtual_028256c8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar6[2] = *(undefined8 *)(param_1 + 0x10);
  puVar6[1] = uVar5;
  *puVar6 = &PTR_FUN_02baf6e0;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar6[8] = *(undefined8 *)(param_1 + 0x40);
  puVar6[7] = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar6[4] = *(undefined8 *)(param_1 + 0x20);
  puVar6[3] = uVar5;
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = (**(code **)*puVar4)(puVar4,param_2);
    puVar6[3] = uVar5;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = (**(code **)*puVar4)(puVar4,param_2);
    puVar6[4] = uVar5;
  }
  return puVar6;
}




void FUN_0199ce58(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  lVar1 = 0;
  if ((uVar2 & 0x20000000) != 0) {
    lVar1 = param_1 + 0x30;
  }
  if ((uVar2 >> 0x1e & 1) == 0) {
    uVar4 = 0xbf800000;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x40);
  }
  iVar3 = (int)(uVar2 << 3) >> 3;
  if (-1 < (int)uVar2) {
    iVar3 = -1;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 8))(uVar4,*(long **)(param_1 + 0x18),lVar1,iVar3);
  (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0199cec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1);
    return;
  }
  return;
}




void FUN_0199ced8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0199cee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}




void FUN_0199cee8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  *(undefined4 *)(param_5 + 0x30) = param_1;
  *(undefined4 *)(param_5 + 0x34) = param_2;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  *(undefined4 *)(param_5 + 0x3c) = param_4;
  *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) | 0x20000000;
  return;
}




void FUN_0199cf00(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | 0x40000000;
  return;
}




void FUN_0199cf14(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x44) =
       *(uint *)(param_1 + 0x44) & 0x60000000 | param_2 & 0x1fffffff | 0x80000000;
  return;
}




void FUN_0199cf2c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_0199cf34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0199cf3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0199cf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  return;
}




void FUN_0199cf50(void)

{
  return;
}




undefined8 FUN_0199cf54(void)

{
  return 0;
}




char * FUN_0199cf5c(void)

{
  return "OpenGL";
}




void FUN_0199cf68(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  pvVar1 = operator_new(0x70);
  FUN_019a033c();
  DAT_03215388 = pvVar1;
  FUN_019a0440(pvVar1,6);
  FUN_019a044c(DAT_03215388,0,0x60,4,0);
  FUN_019a06a4(DAT_03215388,0,0,4,2,0,1);
  FUN_019a06a4(DAT_03215388,5,0,4,2,8,1);
  FUN_019a0748(DAT_03215388,0xffff,4);
  puVar2 = *(undefined8 **)((long)DAT_03215388 + 0x18);
  uVar3 = NEON_fmov(0xbf800000,4);
  puVar2[5] = 0x3f800000;
  puVar2[6] = 0xbf8000003f800000;
  auVar4 = NEON_fmov(0x3f800000,4);
  puVar2[7] = 0x3f800000;
  puVar2[8] = uVar3;
  puVar2[1] = 0x3f80000000000000;
  *puVar2 = 0x3f800000bf800000;
  puVar2[3] = auVar4._8_8_;
  puVar2[2] = auVar4._0_8_;
  puVar2[4] = 0xbf8000003f800000;
  puVar2[9] = 0;
  puVar2[10] = 0x3f800000bf800000;
  puVar2[0xb] = 0x3f80000000000000;
  FUN_019a0844(DAT_03215388,0xffff,0xffffffff);
  return;
}

