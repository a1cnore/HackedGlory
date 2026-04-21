// functions/01988 — 54 functions
#include "libGameKindred.h"




void thunk_FUN_0198869c(void)

{
  DAT_032149b8 = *DAT_03214960;
  return;
}




void thunk_FUN_019886b4(void)

{
  FUN_01986948(DAT_03214978);
  *DAT_03214960 = DAT_032149b8;
  return;
}




void FUN_019880b8(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70314();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[5] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00e70314(param_1);
  iVar2 = clock_gettime(1,&local_48);
  lVar4 = local_48.tv_nsec - param_1[1];
  lVar3 = local_48.tv_sec - *param_1;
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_48.tv_nsec + 1000000000) - param_1[1];
  }
  param_1[2] = (long)((double)(lVar4 + lVar3 * 1000000000) * 1e-09);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_01988178(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  FUN_00e70314();
  iVar2 = clock_gettime(1,&local_48);
  lVar4 = local_48.tv_nsec - param_1[1];
  lVar3 = local_48.tv_sec - *param_1;
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_48.tv_nsec + 1000000000) - param_1[1];
  }
  param_1[2] = (long)((double)(lVar4 + lVar3 * 1000000000) * 1e-09);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_019882e4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = param_2 & 1;
  return;
}




undefined1 FUN_019882f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}




undefined1  [16] FUN_019882f8(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x18);
  auVar1._8_8_ = 0;
  return auVar1;
}




undefined1  [16] FUN_01988300(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x20);
  auVar1._8_8_ = 0;
  return auVar1;
}




undefined1  [16] FUN_01988308(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x10);
  auVar1._8_8_ = 0;
  return auVar1;
}




undefined1  [16] FUN_01988310(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = clock_gettime(1,&local_48);
  lVar4 = local_48.tv_nsec - param_1[1];
  lVar3 = local_48.tv_sec - *param_1;
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_48.tv_nsec + 1000000000) - param_1[1];
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar5._0_8_ = (double)(lVar4 + lVar3 * 1000000000) * 1e-09;
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_019883a8(double param_1,long param_2)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(double *)(param_2 + 0x28) = param_1;
  return;
}




void FUN_019883b8(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  return;
}




void FUN_019883c4(uint param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = operator_new__((ulong)param_1);
  DAT_03214958 = pvVar1;
  puVar2 = operator_new(0x18);
  *puVar2 = 0;
  *(void **)(puVar2 + 2) = pvVar1;
  puVar2[4] = param_1 & 0x7fffffff;
  DAT_03214960 = puVar2;
  pvVar1 = operator_new(0x20);
  FUN_01986b6c(pvVar1,puVar2);
  DAT_03214968 = pvVar1;
  DAT_03214950 = FUN_01986c10(pvVar1,param_4);
  pvVar1 = operator_new(0x18040);
  FUN_019b9a18();
  DAT_03214970 = pvVar1;
  pvVar1 = operator_new(0x10);
  FUN_01986900();
  DAT_03214978 = pvVar1;
  pvVar1 = operator_new(0x8020);
  FUN_01989340(pvVar1,DAT_03214970);
  DAT_03214980 = pvVar1;
  pvVar1 = operator_new(0x18);
  FUN_01989014();
  DAT_032149a8 = 0;
  DAT_032149b0 = 0;
  DAT_03214998 = 0;
  DAT_032149a0 = 0;
  DAT_03214990 = 0;
  DAT_03214988 = pvVar1;
  FUN_01988504(param_2);
  FUN_01988c90(param_3 & 1);
  DAT_03214954 = 0;
  FUN_01987194(DAT_03214968);
  FUN_019871f4(DAT_03214968);
  return;
}




void FUN_01988504(code *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_13ffc;
  undefined1 auStack_13ff8 [81864];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  FUN_01986724(auStack_13ff8);
  FUN_019896a4(auStack_13ff8);
  if (param_1 != (code *)0x0) {
    (*param_1)(auStack_13ff8);
  }
  uStack_13ffc = 0;
  uVar2 = FUN_019867f4(auStack_13ff8,DAT_03214960,&uStack_13ffc);
  FUN_01986910(DAT_03214978,uVar2,uStack_13ffc);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019885a8(void)

{
  void *pvVar1;
  
  FUN_01988d70();
  pvVar1 = DAT_03214988;
  if (DAT_03214988 != (void *)0x0) {
    FUN_01989028(DAT_03214988);
    operator_delete(pvVar1);
  }
  DAT_03214988 = (void *)0x0;
  if (DAT_03214980 != (void *)0x0) {
    operator_delete(DAT_03214980);
  }
  pvVar1 = DAT_03214978;
  DAT_03214980 = (void *)0x0;
  if (DAT_03214978 != (void *)0x0) {
    FUN_0198690c(DAT_03214978);
    operator_delete(pvVar1);
  }
  DAT_03214978 = (void *)0x0;
  if (DAT_03214970 != (long *)0x0) {
    (**(code **)(*DAT_03214970 + 8))();
  }
  pvVar1 = DAT_03214968;
  DAT_03214970 = (long *)0x0;
  if (DAT_03214968 != (void *)0x0) {
    FUN_01986b78(DAT_03214968);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_03214960;
  DAT_03214968 = (void *)0x0;
  if (DAT_03214960 != (void *)0x0) {
    if ((*(int *)((long)DAT_03214960 + 0x10) < 0) &&
       (*(void **)((long)DAT_03214960 + 8) != (void *)0x0)) {
      operator_delete__(*(void **)((long)DAT_03214960 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_03214960 = (void *)0x0;
  if (DAT_03214958 != (void *)0x0) {
    operator_delete__(DAT_03214958);
  }
  DAT_03214958 = (void *)0x0;
  return;
}




void FUN_0198869c(void)

{
  DAT_032149b8 = *DAT_03214960;
  return;
}




void FUN_019886b4(void)

{
  FUN_01986948(DAT_03214978);
  *DAT_03214960 = DAT_032149b8;
  return;
}




void FUN_019886e4(byte param_1)

{
  DAT_03214954 = param_1 & 1;
  return;
}




undefined1 FUN_019886f4(void)

{
  return DAT_03214954;
}




void FUN_01988700(undefined4 param_1,undefined8 param_2)

{
  FUN_01986d6c(DAT_03214968,param_1,param_2);
  return;
}




undefined8 FUN_01988718(void)

{
  return DAT_03214968;
}




void FUN_01988724(undefined4 param_1)

{
  FUN_01986d54(DAT_03214968,param_1);
  return;
}




long FUN_01988738(undefined4 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0198691c(DAT_03214978,param_1);
  if (lVar1 != 0) {
    if ((param_2 != 0) || (param_2 = DAT_032149c0, DAT_032149c0 != 0)) {
      FUN_01985d88(param_2,lVar1);
    }
    if ((DAT_032149c8 != 0) && (DAT_02bf2784 < DAT_02bf2788)) {
      *(long *)(DAT_032149c8 + (long)DAT_02bf2784 * 8) = lVar1;
      DAT_02bf2784 = DAT_02bf2784 + 1;
    }
  }
  return lVar1;
}




void FUN_019887c4(undefined8 param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 local_70;
  long local_68;
  
  lVar5 = DAT_032149c8;
  lVar4 = DAT_032149c0;
  iVar3 = DAT_02bf2788;
  uVar2 = DAT_02bf2784;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_4 != 0) {
    DAT_032149c0 = param_4;
  }
  if (param_2 != 0 && 0 < param_3) {
    DAT_02bf2784 = 0;
    DAT_02bf2788 = param_3;
    DAT_032149c8 = param_2;
  }
  local_70 = 0;
  lVar8 = FUN_01987114(DAT_03214968,DAT_03214950,param_1,&local_70);
  if (lVar8 != 0) {
    FUN_01989030(DAT_03214988,local_70,lVar8);
  }
  if (param_4 != 0) {
    DAT_032149c0 = lVar4;
  }
  uVar6 = DAT_02bf2784;
  uVar7 = 0;
  if (param_2 != 0 && 0 < param_3) {
    uVar6 = uVar2;
    DAT_02bf2788 = iVar3;
    DAT_032149c8 = lVar5;
    uVar7 = DAT_02bf2784;
  }
  DAT_02bf2784 = uVar6;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}




undefined8 FUN_019888d4(void)

{
  return DAT_03214988;
}




void FUN_019888e0(undefined8 param_1)

{
  FUN_019869c8(DAT_03214978,param_1);
  return;
}




void FUN_019888f4(undefined8 param_1)

{
  FUN_0198692c(DAT_03214978,param_1);
  return;
}




void FUN_01988908(undefined4 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long alStack_40 [2];
  
  lVar1 = tpidr_el0;
  alStack_40[1] = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01986a94(DAT_03214978,param_1);
  puVar3 = (undefined8 *)((long)alStack_40 - ((ulong)uVar2 * 8 + 0xf & 0xffffffff0));
  uVar2 = FUN_01986a38(DAT_03214978,puVar3,uVar2,param_1,1);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    do {
      FUN_019869c8(DAT_03214978,*puVar3);
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == alStack_40[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019889b8(undefined4 param_1)

{
  FUN_01986a94(DAT_03214978,param_1);
  return;
}




void FUN_019889cc(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  FUN_01986a38(DAT_03214978,param_1,param_2,param_3,param_4 & 1);
  return;
}




void FUN_019889f0(undefined4 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long alStack_40 [2];
  
  lVar1 = tpidr_el0;
  alStack_40[1] = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01986a94(DAT_03214978,param_1);
  puVar3 = (undefined8 *)((long)alStack_40 - ((ulong)uVar2 * 8 + 0xf & 0xffffffff0));
  uVar2 = FUN_01986a38(DAT_03214978,puVar3,uVar2,param_1,1);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    do {
      FUN_0198692c(DAT_03214978,*puVar3);
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == alStack_40[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01988aa0(undefined4 param_1,undefined8 param_2)

{
  FUN_01986ac0(DAT_03214978);
  FUN_01986ac4(DAT_03214978,2);
  if (DAT_03214954 == '\0') {
    DAT_03214948 = (undefined4)param_2;
    DAT_0321494c = param_1;
    if (DAT_03214990 != (code *)0x0) {
      (*DAT_03214990)(param_2,0);
    }
    FUN_01986ac4(DAT_03214978,3);
    if (DAT_03214998 != (code *)0x0) {
      (*DAT_03214998)(param_2,1);
    }
    FUN_01986ac4(DAT_03214978,4);
    if (DAT_032149a0 != (code *)0x0) {
      (*DAT_032149a0)(param_2,2);
    }
    FUN_01988f48();
    FUN_01986ac4(DAT_03214978,5);
    if (DAT_032149a8 != (code *)0x0) {
      (*DAT_032149a8)(param_2,3);
    }
    if (DAT_032149b0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01988b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_032149b0)(param_2,4);
      return;
    }
  }
  return;
}




void FUN_01988ba0(void)

{
  FUN_01986ac4(DAT_03214978,6);
  return;
}




void thunk_FUN_01988f80(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032149d8);
  if ((uVar1 & 1) != 0) {
    FUN_00e7893c(&DAT_032149d8);
    return;
  }
  return;
}




void FUN_01988bb4(uint param_1,undefined8 param_2)

{
  (&DAT_03214990)[param_1] = param_2;
  return;
}




void FUN_01988bc4(undefined4 param_1,undefined4 param_2)

{
  FUN_01986a4c(DAT_03214978,param_1,param_2);
  return;
}




void FUN_01988bec(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  FUN_01986a38(DAT_03214978,param_1,param_2,param_3,param_4 & 1);
  return;
}




void FUN_01988c10(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_019894c8(DAT_03214980,param_1,param_2,param_3,param_4);
  return;
}




void FUN_01988c30(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_019895d0(DAT_03214980,param_1,param_2,param_3);
  return;
}




void FUN_01988c4c(undefined4 param_1)

{
  FUN_01986aac(DAT_03214978,param_1);
  return;
}




undefined8 FUN_01988c60(void)

{
  return DAT_03214978;
}




undefined8 FUN_01988c6c(void)

{
  return DAT_03214980;
}




undefined4 FUN_01988c78(void)

{
  return DAT_03214948;
}




undefined4 FUN_01988c84(void)

{
  return DAT_0321494c;
}




void FUN_01988c90(ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00e78248();
  if ((uVar1 & 1) != 0) {
    pvVar2 = operator_new(0xa8);
    FUN_00e7996c(pvVar2,1,FUN_01988d6c,"LongRunning",1);
    DAT_032149d0 = pvVar2;
    thunk_FUN_00e78804(&DAT_03214ad0,0,pvVar2,PTR_s___LongRunning_Concurrent_Queue_02bf2508);
    FUN_00e78b80(&DAT_03214ad0);
    if ((param_1 & 1) != 0) {
      FUN_00e78608(&DAT_032149d8,1,PTR_s___Default_Concurrent_Queue_02bf2500);
      FUN_00e78b80(&DAT_032149d8);
    }
    FUN_00e78608(&DAT_03214bc8,2,PTR_s___Update_Serial_Queue_02bf24f8);
    return;
  }
  return;
}




void FUN_01988d6c(void)

{
  return;
}




void FUN_01988d70(void)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e78714(&DAT_03214bc8);
  if ((uVar2 & 1) != 0) {
    FUN_00e7bae8(&DAT_03214bc8,1);
    FUN_00e78724(&DAT_03214bc8);
  }
  uVar2 = FUN_00e78714(&DAT_032149d8);
  if ((uVar2 & 1) != 0) {
    FUN_00e78724(&DAT_032149d8);
  }
  uVar2 = FUN_00e78714(&DAT_03214ad0);
  if ((uVar2 & 1) != 0) {
    FUN_00e78724(&DAT_03214ad0);
  }
  pvVar1 = DAT_032149d0;
  if (DAT_032149d0 != (void *)0x0) {
    FUN_00e79b10(DAT_032149d0);
    operator_delete(pvVar1);
  }
  DAT_032149d0 = (void *)0x0;
  return;
}




void FUN_01988e0c(void)

{
  FUN_00e78714(&DAT_032149d8);
  return;
}




void FUN_01988e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  int iVar1;
  
  if (param_5 == param_6) {
    return;
  }
  iVar1 = FUN_00e7825c();
  DAT_03214cd8 = param_6;
  DAT_03214cdc = param_5;
  DAT_03214ce0 = param_4;
  DAT_03214cd0 = param_3;
  DAT_03214cc8 = param_2;
  DAT_03214cc0 = param_1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_00e78ecc(&DAT_032149d8,FUN_01988edc,&DAT_03214cc0);
  }
  FUN_00e7893c(&DAT_032149d8);
  return;
}




void FUN_01988edc(undefined8 *param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  
  puVar1 = (uint *)((long)param_1 + 0x1c);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while (uVar4 < *(uint *)(param_1 + 3)) {
    (*(code *)*param_1)(param_1[1] +
                        (ulong)(*(int *)(param_1 + 4) *
                               (uint)*(ushort *)(param_1[2] + (ulong)uVar4 * 2)));
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}




void FUN_01988f48(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032149d8);
  if ((uVar1 & 1) != 0) {
    FUN_00e78f64(&DAT_032149d8,0,0);
    return;
  }
  return;
}




void FUN_01988f80(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032149d8);
  if ((uVar1 & 1) != 0) {
    FUN_00e7893c(&DAT_032149d8);
    return;
  }
  return;
}




void FUN_01988fb0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03214bc8);
  if ((uVar1 & 1) != 0) {
    FUN_00e7bae8(&DAT_03214bc8,0);
    return;
  }
  return;
}




void FUN_01988fe4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03214bc8);
  if ((uVar1 & 1) != 0) {
    FUN_00e788e4(&DAT_03214bc8);
    return;
  }
  return;
}

