// functions/00a89 — 52 functions
#include "libGameKindred.h"




void FUN_00a8903c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0x811c9dc5;
  pbVar1 = (byte *)FUN_00d5bc2c(param_3);
  uVar2 = 0x811c9dc5;
  if (*pbVar1 != 0) {
    uVar2 = 0x811c9dc5;
    uVar3 = (uint)*pbVar1;
    do {
      pbVar1 = pbVar1 + 1;
      uVar2 = (uVar2 ^ uVar3) * 0x1000193;
      uVar3 = (uint)*pbVar1;
    } while (*pbVar1 != 0);
  }
  pbVar1 = *(byte **)(param_1 + 0x60);
  uVar3 = (uint)*pbVar1;
  if (*pbVar1 != 0) {
    do {
      pbVar1 = pbVar1 + 1;
      uVar4 = (uVar4 ^ uVar3) * 0x1000193;
      uVar3 = (uint)*pbVar1;
    } while (*pbVar1 != 0);
  }
  if (uVar2 != uVar4) {
    return;
  }
  FUN_00a890f0(param_1,param_2);
  return;
}




void FUN_00a890f0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_448 = 0;
  local_450 = param_2;
  FUN_00d9d958(auStack_440);
  if ((*(char *)(param_1 + 0x68) == '\0') || (uVar2 = FUN_00a88e08(param_1), (uVar2 & 1) != 0)) {
    FUN_00a898d0(param_1 + 0x28,&local_450);
  }
  else {
    FUN_00a88bb4(param_1,&local_450);
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a89184(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(ushort *)(param_3 + 0x88) & 0x1f;
  if ((uVar4 == 0x1f) || (1 < *(ushort *)(param_3 + (ulong)uVar4 * 0x38 + 0x90) - 3)) {
    uVar4 = 0x811c9dc5;
    pbVar1 = (byte *)FUN_00d5bc2c(param_3);
    uVar2 = 0x811c9dc5;
    if (*pbVar1 != 0) {
      uVar2 = 0x811c9dc5;
      uVar3 = (uint)*pbVar1;
      do {
        pbVar1 = pbVar1 + 1;
        uVar2 = (uVar2 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar1;
      } while (*pbVar1 != 0);
    }
    pbVar1 = *(byte **)(param_1 + 0x60);
    uVar3 = (uint)*pbVar1;
    if (*pbVar1 != 0) {
      do {
        pbVar1 = pbVar1 + 1;
        uVar4 = (uVar4 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar1;
      } while (*pbVar1 != 0);
    }
    if (uVar2 == uVar4) {
      FUN_00a890f0(param_1,param_2);
      return;
    }
  }
  return;
}




void FUN_00a89264(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (0 < param_3) {
    FUN_00a89274();
    return;
  }
  return;
}




void FUN_00a89274(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_448 = 0;
  local_450 = param_2;
  FUN_00d9d958(auStack_440);
  (**(code **)(*param_1 + 0x50))(param_1,&local_450);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00a89eec();
    FUN_00a89928(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_009cc440(lVar3,&local_450);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_009cc364(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a8937c(void)

{
  return;
}




void FUN_00a89380(void)

{
  return;
}




void FUN_00a89384(void)

{
  return;
}




void FUN_00a89388(void)

{
  return;
}




void FUN_00a8938c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_00a893d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_00a89414(void)

{
  return;
}




void FUN_00a89418(void)

{
  return;
}




void FUN_00a8941c(void)

{
  return;
}




void FUN_00a89420(void)

{
  return;
}




void FUN_00a89424(void *param_1)

{
  FUN_00a89680();
  operator_delete(param_1);
  return;
}




void FUN_00a89448(void)

{
  return;
}




void FUN_00a8944c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_00a895e0(param_1,lVar1 + -8);
    FUN_00a8a350(lVar1 + -8);
    lVar1 = *param_1;
  }
  return;
}




void FUN_00a89490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  return;
}




void FUN_00a894c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfb50;
  FUN_00a8950c(param_1 + 5);
  FUN_00a8944c(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_00a8950c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_027cfbb0;
  plVar2 = param_1 + 1;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_00a89584(plVar2,lVar1 + -8);
    FUN_00a8a41c(lVar1 + -8);
    lVar1 = *plVar2;
  }
  return;
}




void FUN_00a89560(void *param_1)

{
  FUN_00a8950c();
  operator_delete(param_1);
  return;
}




void FUN_00a89584(long *param_1,long param_2)

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




void FUN_00a895e0(long *param_1,long param_2)

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




void FUN_00a8963c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_00a89708(param_1,lVar1 + -8);
    FUN_00a89c78(lVar1 + -8);
    lVar1 = *param_1;
  }
  return;
}




void FUN_00a89680(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_027cfbd0;
  plVar2 = param_1 + 5;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_009cc3e4(plVar2,lVar1 + -0x20);
    FUN_00a89fc4(lVar1 + -0x20);
    lVar1 = *plVar2;
  }
  FUN_00a8963c(param_1 + 2);
  return;
}




void FUN_00a896e4(void *param_1)

{
  FUN_00a89680();
  operator_delete(param_1);
  return;
}




void FUN_00a89708(long *param_1,long param_2)

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




void FUN_00a89764(void *param_1)

{
  FUN_00a8950c();
  operator_delete(param_1);
  return;
}




void FUN_00a89788(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((*param_1 != 0) && (plVar5 = (long *)(*param_1 + -8), plVar5 != (long *)0x0)) {
    do {
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = (undefined8 *)(lVar3 + 8);
      *puVar4 = 0;
      puVar2 = (undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 8) != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
      }
      *puVar2 = puVar4;
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      plVar1 = plVar5 + 1;
      plVar5 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar5 = (long *)(*plVar1 + -8);
      }
    } while (plVar5 != (long *)0x0);
  }
  return;
}




void FUN_00a89808(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = *(long *)(param_1 + 8) + -8;
    while (lVar2 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))(*(long **)(lVar2 + 0x10),param_2,lVar2);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    }
  }
  return;
}




void FUN_00a89868(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = *(long *)(param_1 + 8) + -8;
    while (lVar2 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x20))(*(long **)(lVar2 + 0x10),param_2,lVar2);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00a898d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = *(long *)(param_1 + 8) + -8;
    while (lVar2 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x28))(*(long **)(lVar2 + 0x10),param_2,lVar2);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    }
  }
  return;
}




void FUN_00a89928(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((*param_1 != 0) && (plVar5 = (long *)(*param_1 + -8), plVar5 != (long *)0x0)) {
    do {
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = (undefined8 *)(lVar3 + 8);
      *puVar4 = 0;
      puVar2 = (undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 8) != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
      }
      *puVar2 = puVar4;
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      plVar1 = plVar5 + 1;
      plVar5 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar5 = (long *)(*plVar1 + -8);
      }
    } while (plVar5 != (long *)0x0);
  }
  return;
}




void FUN_00a899a8(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x588b0);
  FUN_00a899dc();
  DAT_031336c0 = pvVar1;
  return;
}




void FUN_00a899dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027cfec0;
  lVar2 = 1;
  puVar1 = param_1 + 2;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 0x17;
  } while (lVar2 != 0x140);
  param_1[0x1cc2] = 0x13f0000;
  param_1[0x1cc4] = 0;
  DAT_03133708 = param_1 + 0x1cc6;
  lVar2 = 0;
  DAT_03133710 = param_1;
  *DAT_03133708 = &PTR_FUN_027cfea0;
  puVar1 = param_1 + 0x1cc8;
  do {
    lVar2 = lVar2 + 1;
    *(short *)puVar1 = (short)lVar2;
    puVar1 = puVar1 + 7;
  } while (lVar2 != 0x13ff);
  param_1[0xa8c8] = 0x13ff0000;
  param_1[0xa8ca] = 0;
  lVar2 = 1;
  puVar1 = param_1 + 0xa8cc;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0x100);
  param_1[0xaecc] = 0xff0000;
  DAT_03133700 = param_1 + 0xaece;
  *DAT_03133700 = &PTR_FUN_027cfe80;
  lVar2 = 1;
  puVar1 = param_1 + 0xaed0;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (lVar2 != 0x40);
  param_1[0xb110] = 0x3f0000;
  param_1[0xb112] = 0;
  *(undefined4 *)(param_1 + 0xb114) = 0;
  return;
}




void FUN_00a89b28(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_031336c0;
  if (DAT_031336c0 != (undefined8 *)0x0) {
    DAT_031336c0[0xaece] = &PTR_FUN_027cfe80;
    DAT_03133700 = 0;
    puVar1[0x1cc6] = &PTR_FUN_027cfea0;
    DAT_03133708 = 0;
    *puVar1 = &PTR_FUN_027cfec0;
    DAT_03133710 = 0;
    operator_delete(puVar1);
  }
  DAT_031336c0 = (undefined8 *)0x0;
  return;
}




void FUN_00a89ba8(void)

{
  FUN_00a89bbc(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a89bbc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x46010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x38;
    if (uVar3 == *(ushort *)(param_1 + 0x46012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x46010) = uVar3;
    *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_027cff40;
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a89c78(undefined8 param_1)

{
  FUN_00a89c8c(DAT_031336c0,param_1);
  return;
}




void FUN_00a89c8c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0xe620) = *(int *)(param_1 + 0xe620) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0xe610) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x37a7;
    *(short *)(param_1 + 0xe612) = sVar2;
    *(short *)(param_1 + 0xe610) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xe612);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x37a7;
    *(short *)(param_1 + 0xe612) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0xb8) = sVar2;
  }
  *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + -1;
  return;
}




void FUN_00a89d44(undefined8 param_1)

{
  FUN_00a89d60(DAT_031336c0 + 0xe630,param_1);
  return;
}




void FUN_00a89d60(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x46020) = *(int *)(param_1 + 0x46020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x46010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x46012) = sVar2;
    *(short *)(param_1 + 0x46010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x46012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x46012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x38) = sVar2;
  }
  *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + -1;
  return;
}




void FUN_00a89e2c(undefined8 param_1)

{
  FUN_00a89e4c(DAT_031336c0 + 0x57670,param_1);
  return;
}




void FUN_00a89e4c(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  *(int *)(param_1 + 0x1220) = *(int *)(param_1 + 0x1220) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x1210) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x71c7;
    *(short *)(param_1 + 0x1212) = sVar2;
    *(short *)(param_1 + 0x1210) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x1212);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x71c7;
    *(short *)(param_1 + 0x1212) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x48) = sVar2;
  }
  *(int *)(param_1 + 0x1214) = *(int *)(param_1 + 0x1214) + -1;
  return;
}




void FUN_00a89eec(void)

{
  FUN_00a89f48(DAT_031336c0 + 0x54660);
  if (*(int *)(DAT_031336c0 + 0x588a0) < *(int *)(DAT_031336c0 + 0x57664)) {
    *(int *)(DAT_031336c0 + 0x588a0) = *(int *)(DAT_031336c0 + 0x57664);
  }
  return;
}




ushort * FUN_00a89f48(long param_1)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x3000);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)(param_1 + uVar2 * 0x30);
    if (uVar4 == *(ushort *)(param_1 + 0x3002)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(param_1 + 0x3000) = uVar4;
    lVar3 = param_1 + uVar2 * 0x30;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined ***)puVar1 = &PTR_FUN_027cff68;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(int *)(param_1 + 0x3004) = *(int *)(param_1 + 0x3004) + 1;
  }
  return puVar1;
}




void FUN_00a89fc4(undefined8 param_1)

{
  FUN_00a89fe4(DAT_031336c0 + 0x54660,param_1);
  return;
}




void FUN_00a89fe4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  
  (**(code **)*param_2)(param_2);
  if (*(short *)(param_1 + 0x3000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x5555;
    *(short *)(param_1 + 0x3002) = sVar2;
    *(short *)(param_1 + 0x3000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x3002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x5555;
    *(short *)(param_1 + 0x3002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x30) = sVar2;
  }
  *(int *)(param_1 + 0x3004) = *(int *)(param_1 + 0x3004) + -1;
  return;
}




void thunk_FUN_00a89274(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined1 auStack_440 [1032];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_448 = 0;
  uStack_450 = param_2;
  FUN_00d9d958(auStack_440);
  (**(code **)(*param_1 + 0x50))(param_1,&uStack_450);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00a89eec();
    FUN_00a89928(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_009cc440(lVar3,&uStack_450);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_009cc364(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a89274(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined1 auStack_440 [1032];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_448 = 0;
  uStack_450 = param_2;
  FUN_00d9d958(auStack_440);
  (**(code **)(*param_1 + 0x50))(param_1,&uStack_450);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00a89eec();
    FUN_00a89928(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_009cc440(lVar3,&uStack_450);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_009cc364(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a89274(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined1 auStack_440 [1032];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_448 = 0;
  uStack_450 = param_2;
  FUN_00d9d958(auStack_440);
  (**(code **)(*param_1 + 0x50))(param_1,&uStack_450);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00a89eec();
    FUN_00a89928(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_009cc440(lVar3,&uStack_450);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_009cc364(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

