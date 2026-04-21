// functions/00f21 — 51 functions
#include "libGameKindred.h"




void FUN_00f21040(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x5c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}




void FUN_00f21058(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x5c);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    FUN_00f218d4(*(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}




void FUN_00f21080(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = (undefined8 *)FUN_00e7a7e4(0x30);
  FUN_00e7a3c0();
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar6 = puVar2 + 2;
  *puVar6 = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = &PTR_FUN_02828e00;
  FUN_008fce60(puVar6,param_2);
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar6;
  local_60[1] = thunk_FUN_00f212d4;
  uVar3 = FUN_00e7b734(&local_60,0x1e3e5dd1);
  uVar4 = 0;
  if (param_3 != 1) {
    uVar4 = FUN_00e7a124(uVar3,0);
  }
  uVar3 = FUN_00e7b728(uVar3,uVar4);
  FUN_00e7b7f0(uVar3,puVar2);
  uVar3 = FUN_00e7b844();
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar6;
  local_60[1] = thunk_FUN_00f213d0;
  uVar4 = FUN_00e7b734(&local_60,0x9fe3f120);
  uVar5 = 0;
  if (param_3 != 1) {
    uVar5 = FUN_00e7a108(uVar4,0);
  }
  uVar4 = FUN_00e7b728(uVar4,uVar5);
  uVar4 = FUN_00e7b740(uVar4,uVar3);
  FUN_00e7b7f0(uVar4,puVar2);
  uVar4 = FUN_00e7b844();
  if (param_4 == 1) {
    local_60 = (undefined8 *)FUN_00e7a148();
    *local_60 = puVar6;
    local_60[1] = FUN_00f214fc;
    uVar5 = FUN_00e7b734(&local_60,0x804b9f1a);
    uVar5 = FUN_00e7b7f0(uVar5,puVar2);
    FUN_00e7b740(uVar5,uVar4);
    uVar5 = FUN_00e7b844();
  }
  else {
    uVar5 = 0;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f21234(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00f1c7b0(param_2,1);
  if (iVar2 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_40 = 0;
    uVar3 = FUN_00f1c844(iVar2,&local_40);
    FUN_00f1c7c8(iVar2);
    *param_1 = local_40;
    param_1[1] = uVar3 & 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f212c4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00f1c874();
    return;
  }
  return;
}




void FUN_00f212d4(byte *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_70;
  long local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60[1] = 0;
  local_50 = (void *)0x0;
  local_60[0] = 0;
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  FUN_00f1c904(param_1,local_60);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_00f21234(&local_70,pvVar1);
  uVar3 = FUN_00e7a224();
  if (local_68 == 0) {
    FUN_00e7a2f0(uVar3);
  }
  else {
    puVar4 = (undefined8 *)FUN_00e7a7e4(0x20);
    FUN_00e7a3c0();
    puVar4[2] = local_70;
    puVar4[3] = local_68;
    *puVar4 = &PTR_FUN_02824840;
    FUN_00e7a2d0(uVar3,puVar4,0x9423106f);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f213d0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e7a224();
  lVar4 = FUN_00e7a25c(uVar3,0x9423106f);
  uStack_48 = *(undefined8 *)(lVar4 + 0x18);
  local_50 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = FUN_00f21fd8(&local_50,3);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  FUN_00f2221c(uVar2);
  puVar5 = (undefined8 *)FUN_00e7a7e4(0x20);
  FUN_00e7a3c0();
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_FUN_02824840;
  FUN_00f222bc(&local_60,*(undefined4 *)(param_1 + 0x18));
  puVar5[3] = uStack_58;
  puVar5[2] = local_60;
  uVar3 = FUN_00e7a224();
  FUN_00e7a2d0(uVar3,puVar5,0x815f1c7b);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f21498(long param_1)

{
  FUN_00f222dc(*(undefined4 *)(param_1 + 0x18));
  return;
}




void FUN_00f214a0(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  FUN_00e7a3d4(param_1);
  return;
}




void FUN_00f214d0(void *param_1)

{
  FUN_00f214a0();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00f212d4(byte *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  long lStack_68;
  ulong auStack_60 [2];
  void *pvStack_50;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  auStack_60[1] = 0;
  pvStack_50 = (void *)0x0;
  auStack_60[0] = 0;
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  FUN_00f1c904(param_1,auStack_60);
  pvVar1 = (void *)((ulong)auStack_60 | 1);
  if ((auStack_60[0] & 1) != 0) {
    pvVar1 = pvStack_50;
  }
  FUN_00f21234(&uStack_70,pvVar1);
  uVar3 = FUN_00e7a224();
  if (lStack_68 == 0) {
    FUN_00e7a2f0(uVar3);
  }
  else {
    puVar4 = (undefined8 *)FUN_00e7a7e4(0x20);
    FUN_00e7a3c0();
    puVar4[2] = uStack_70;
    puVar4[3] = lStack_68;
    *puVar4 = &PTR_FUN_02824840;
    FUN_00e7a2d0(uVar3,puVar4,0x9423106f);
  }
  if ((auStack_60[0] & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00f213d0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e7a224();
  lVar4 = FUN_00e7a25c(uVar3,0x9423106f);
  uStack_48 = *(undefined8 *)(lVar4 + 0x18);
  uStack_50 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = FUN_00f21fd8(&uStack_50,3);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  FUN_00f2221c(uVar2);
  puVar5 = (undefined8 *)FUN_00e7a7e4(0x20);
  FUN_00e7a3c0();
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_FUN_02824840;
  FUN_00f222bc(&uStack_60,*(undefined4 *)(param_1 + 0x18));
  puVar5[3] = uStack_58;
  puVar5[2] = uStack_60;
  uVar3 = FUN_00e7a224();
  FUN_00e7a2d0(uVar3,puVar5,0x815f1c7b);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f214fc(long param_1)

{
  FUN_00f222dc(*(undefined4 *)(param_1 + 0x18));
  return;
}




void FUN_00f21504(long param_1)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  FUN_00e784ec();
  lVar4 = -0x3ff;
  piVar2 = (int *)(param_1 + 0x100);
  do {
    iVar3 = (int)lVar4;
    lVar4 = lVar4 + 1;
    *piVar2 = iVar3 + 0x400;
    piVar2 = piVar2 + 0x1a;
  } while (lVar4 != 0);
  *(undefined8 *)(param_1 + 0x1a100) = 0x3ff00000000;
  *(undefined4 *)(param_1 + 0x1a108) = 0;
  FUN_00e77acc(param_1 + 0x1a110,0);
  *(undefined1 *)(param_1 + 0x1a144) = 0;
  FUN_00e77d14(param_1 + 0xf8);
  FUN_00f21bf0();
  uVar1 = FUN_00e78248();
  if ((uVar1 & 1) != 0) {
    FUN_00e78608(param_1,0,"Nuo::DataMgr::Scheduler::JobQueue");
    return;
  }
  return;
}




void FUN_00f215ac(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x1a140);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00f21814(param_1);
  FUN_00f21c18();
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x1a110));
  FUN_00e786d4(param_1);
  return;
}




void FUN_00f21604(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x1a140);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00f21814();
  return;
}




long FUN_00f21624(long param_1)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1a110));
  lVar1 = FUN_00f21a1c(param_1 + 0x100);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1a110));
  *(long *)(lVar1 + 0x50) = param_1;
  *(char *)(lVar1 + 0x60) = (char)*(undefined4 *)(param_1 + 0x1a140);
  return lVar1;
}




void FUN_00f21690(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x61) = 0;
  FUN_00f20ee0(param_2);
  FUN_00f21040(param_2);
  FUN_00f20f60(param_2);
  FUN_00f21058(param_2);
  return;
}




void FUN_00f216cc(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x61) = 1;
  FUN_00f20ee0(param_2);
  FUN_00e78ecc(param_1,FUN_00f2170c,param_2);
  return;
}




void FUN_00f2170c(long param_1)

{
  FUN_00f219c4(*(undefined8 *)(param_1 + 0x50),param_1);
  return;
}




void FUN_00f21718(long param_1)

{
  FUN_00e77d14(param_1 + 0xf8);
  return;
}




void FUN_00f21720(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x1a144) == '\x01') {
    *(undefined1 *)(param_2 + 0x61) = 1;
    FUN_00f20ee0(param_2);
    FUN_00e78ecc(param_1,FUN_00f2170c,param_2);
    return;
  }
  if (*(char *)(param_1 + 0x1a144) == '\0') {
    FUN_00f21690(param_1,param_2);
    return;
  }
  return;
}




void FUN_00f21790(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1a144) = 0;
  uVar1 = FUN_00e78a6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e79194(param_1);
    return;
  }
  return;
}




void FUN_00f217d0(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1a144) = 1;
  uVar1 = FUN_00e78a6c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e78b80(param_1);
  return;
}




void FUN_00f21814(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1a144) = 0;
  uVar1 = FUN_00e78a6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e79194(param_1);
  }
  uVar1 = FUN_00e78a6c(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00e78948(param_1);
    return;
  }
  return;
}




void FUN_00f21868(long param_1)

{
  ulong uVar1;
  
  FUN_00e78b80();
  *(undefined1 *)(param_1 + 0x1a144) = 1;
  uVar1 = FUN_00e78a6c(param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e78b80(param_1);
  return;
}




bool FUN_00f218b4(long param_1,long param_2)

{
  return (uint)*(byte *)(param_2 + 0x60) != (*(uint *)(param_1 + 0x1a140) & 0xff);
}




void FUN_00f218d4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e77d14(auStack_40);
  uVar2 = FUN_00e77d38(auStack_40,param_1 + 0xf8);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00e7a108();
    FUN_00e78ecc(uVar3,FUN_00f219b8,param_2);
  }
  else {
    FUN_00f21960(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00f21960(long param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00f20fac(param_2);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1a110));
  FUN_00f21a9c(param_1 + 0x100,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1a110));
  return iVar1;
}




void FUN_00f219b8(long param_1)

{
  FUN_00f21960(*(undefined8 *)(param_1 + 0x50),param_1);
  return;
}




void FUN_00f219c4(long param_1,long param_2)

{
  if ((uint)*(byte *)(param_2 + 0x60) == (*(uint *)(param_1 + 0x1a140) & 0xff)) {
    FUN_00f21040(param_2);
    FUN_00f20f60(param_2);
    FUN_00f21058(param_2);
    return;
  }
  return;
}




uint * FUN_00f21a1c(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1a000);
  if (uVar1 == 0xffffffff) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)(param_1 + (ulong)uVar1 * 0x68);
    if (uVar1 == *(uint *)(param_1 + 0x1a004)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(uint *)(param_1 + 0x1a000) = uVar1;
    FUN_00f20d90(puVar2);
    *(int *)(param_1 + 0x1a008) = *(int *)(param_1 + 0x1a008) + 1;
  }
  return puVar2;
}




void FUN_00f21a9c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_00f21b3c();
  if (*(int *)(param_1 + 0x1a000) == -1) {
    iVar2 = (int)((ulong)(param_2 - param_1) >> 3) * -0x3b13b13b;
    *(int *)(param_1 + 0x1a004) = iVar2;
    *(int *)(param_1 + 0x1a000) = iVar2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1a004);
    iVar2 = (int)((ulong)(param_2 - param_1) >> 3) * -0x3b13b13b;
    *(int *)(param_1 + 0x1a004) = iVar2;
    *(int *)(param_1 + (ulong)uVar1 * 0x68) = iVar2;
  }
  *(int *)(param_1 + 0x1a008) = *(int *)(param_1 + 0x1a008) + -1;
  return;
}




void FUN_00f21b3c(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    operator_delete(*(void **)(param_2 + 0x20));
  }
  FUN_00f21b6c(param_2);
  return;
}




void FUN_00f21b6c(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_00f21c60();
    FUN_00f21d7c(uVar1,*param_1);
    return;
  }
  return;
}




void FUN_00f21ba4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f21c60();
  uVar1 = FUN_00f21c6c(uVar1,param_1,param_2,param_3,param_4);
  *param_1 = uVar1;
  return;
}




void FUN_00f21bf0(void)

{
  DAT_032112d8 = operator_new(0x18);
  *(undefined4 *)(DAT_032112d8 + 2) = 0;
  *DAT_032112d8 = 0;
  DAT_032112d8[1] = 0;
  return;
}




void FUN_00f21c18(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_032112d8;
  if (DAT_032112d8 != (void *)0x0) {
    if (*(void **)((long)DAT_032112d8 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_032112d8 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_032112d8 = (void *)0x0;
  return;
}




void FUN_00f21c54(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00f21c60(void)

{
  return DAT_032112d8;
}




void FUN_00f21c6c(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 )

{
  int iVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  int *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  *param_2 = iVar1;
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  local_30 = param_5;
  FUN_00f21cec(param_1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_2);
}




int FUN_00f21cd8(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  return iVar1;
}




void FUN_00f21cec(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00f21f10(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00f21d7c(uint *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 2);
  uVar4 = 0;
  puVar2 = puVar3;
  while (*(int *)puVar2[2] != param_2) {
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 4;
    if (uVar1 <= uVar4) {
      return;
    }
  }
  if ((int)uVar4 == -1) {
    return;
  }
  uVar4 = 0;
  piVar5 = (int *)(puVar3 + 3);
  do {
    if (*piVar5 == param_2) {
      if ((int)uVar4 != -1) {
        *piVar5 = *(int *)(puVar2 + 3);
      }
      break;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 8;
  } while (uVar4 < uVar1);
  puVar3 = puVar3 + (ulong)(uVar1 - 1) * 4;
  uVar6 = puVar3[2];
  puVar2[3] = puVar3[3];
  puVar2[2] = uVar6;
  uVar6 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar6;
  *param_1 = *param_1 - 1;
  return;
}




ulong FUN_00f21e1c(uint *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
    do {
      if (*(int *)*puVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar1 < *param_1);
  }
  return 0xffffffff;
}




ulong FUN_00f21e5c(uint *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 2) + 0x18);
    do {
      if (*piVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (uVar1 < *param_1);
  }
  return 0xffffffff;
}




void FUN_00f21e98(uint *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    while (*param_1 != 0) {
      uVar1 = 0;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      while (*(int *)*puVar2 != param_2) {
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 4;
        if (*param_1 <= uVar1) {
          return;
        }
      }
      if ((int)uVar1 == -1) {
        return;
      }
      if ((code *)puVar2[-2] != (code *)0x0) {
        (*(code *)puVar2[-2])(puVar2[-1]);
      }
      param_2 = *(int *)(puVar2 + 1);
      if (param_2 == 0) {
        return;
      }
    }
  }
  return;
}




void FUN_00f21f10(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined * FUN_00f21f9c(ulong param_1)

{
  return &DAT_02bf25c0 + (param_1 & 0xff) * 0x60;
}




uint FUN_00f21fb4(int param_1)

{
  return (param_1 + 0xfd40da40U >> 5) * 0xaaab & 0xff;
}




uint FUN_00f21fd8(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f22070(&DAT_02bf25c0);
  uStack_58 = param_1[1];
  local_60 = *param_1;
  FUN_00f223e0(uVar2,&local_60,param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return ((int)uVar2 + 0xfd40da40U >> 5) * 0xaaab & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

