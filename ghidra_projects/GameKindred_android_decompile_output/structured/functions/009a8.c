// functions/009a8 — 31 functions
#include "libGameKindred.h"




float FUN_009a816c(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / param_4;
  return param_1 * param_1 * param_1 * param_1 * param_3 + param_2;
}




void FUN_009a8188(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  lVar1 = param_2 + 0x1e0;
  FUN_00f018bc(lVar1,1);
  FUN_00f0d75c(lVar1,param_5);
  FUN_00f0d7fc(lVar1,param_4);
  if ((*(float *)(param_2 + 0x230) != 0.5) || (*(float *)(param_2 + 0x234) != 0.5)) {
    *(undefined8 *)(param_2 + 0x230) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02408(lVar1,param_2 + 0x28,0);
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
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar5);
  FUN_00f022a0(lVar1,puVar5);
  uVar3 = FUN_00f00438("ingame-actor-effects");
  FUN_00f02408(param_2 + 0x28,uVar3,0);
  *(undefined4 *)(param_2 + 0x45c) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_2 + 0x454) = *param_3;
  return;
}




void FUN_009a8318(long param_1,byte *param_2)

{
  *(uint *)(param_1 + 0xac) =
       *(uint *)(param_1 + 0xac) & 0xfffffff8 |
       *(uint *)(param_1 + 0xac) & 3 | (uint)((*param_2 & 0x1f) != 0) << 2;
  return;
}




void FUN_009a8334(void)

{
  DAT_0312e880 = FUN_00f005a8(PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
  if (DAT_02bf2590 != DAT_0312e880) {
    FUN_00f005d0(DAT_0312e880);
  }
  DAT_0312e884 = FUN_00f005a8(PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10);
  if (DAT_02bf2590 != DAT_0312e884) {
    FUN_00f005d0(DAT_0312e884);
  }
  DAT_0312e888 = FUN_00f005a8(PTR_s_build___Fonts_Futura_Medium_64_S_02be9d18);
  if (DAT_02bf2590 == DAT_0312e888) {
    return;
  }
  FUN_00f005d0(DAT_0312e888);
  return;
}




void FUN_009a83e0(void)

{
  char cVar1;
  
  if (DAT_0312e880 != DAT_02bf2590) {
    FUN_00f005e4();
    DAT_0312e880 = DAT_02bf2590;
  }
  cVar1 = DAT_0312e880;
  if (DAT_0312e884 != DAT_0312e880) {
    FUN_00f005e4(DAT_0312e884);
    DAT_0312e884 = DAT_02bf2590;
    cVar1 = DAT_02bf2590;
  }
  if (DAT_0312e888 != cVar1) {
    FUN_00f005e4(DAT_0312e888);
    DAT_0312e888 = DAT_02bf2590;
  }
  return;
}




void FUN_009a8460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c1930;
  param_1[5] = &PTR_FUN_027c1960;
  FUN_00f0d3a4(param_1 + 0x62);
  FUN_00f0d3a4(param_1 + 0x3c);
  FUN_00f0d3a4(param_1 + 0x16);
  FUN_00f01868(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009a84c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c1930;
  param_1[5] = &PTR_FUN_027c1960;
  FUN_00f0d3a4(param_1 + 0x62);
  FUN_00f0d3a4(param_1 + 0x3c);
  FUN_00f0d3a4(param_1 + 0x16);
  FUN_00f01868(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009a8538(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_027c1930;
  *param_1 = &PTR_FUN_027c1960;
  FUN_00f0d3a4(param_1 + 0x5d);
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_009a85a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_027c1930;
  *param_1 = &PTR_FUN_027c1960;
  FUN_00f0d3a4(param_1 + 0x5d);
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_009a8610(void)

{
  return;
}




void FUN_009a8614(void)

{
  return;
}




undefined8 FUN_009a8618(undefined8 param_1)

{
  FUN_009a6260();
  return param_1;
}




void FUN_009a863c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009a8644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009a8648(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




undefined1 * FUN_009a866c(void)

{
  return &DAT_01e277f2;
}




void FUN_009a8678(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_68 [52];
  undefined4 local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((DAT_0312e928 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0312e928);
    if (iVar2 != 0) {
      DAT_0312e924 = 0x3e3270a0;
      __cxa_guard_release(&DAT_0312e928);
    }
  }
  FUN_00d58298(param_1,&DAT_0312e924,auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_34);
}




long * FUN_009a8720(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_01985d44(param_1,DAT_0312e4a8);
  uVar3 = FUN_00d5cdac(param_1);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2,uVar3);
  plVar1 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 5;
  }
  return plVar1;
}




void FUN_009a8784(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_FUN_027c1ab0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[6] = &PTR_FUN_027c1e20;
  param_1[5] = &PTR_FUN_027c1c80;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  uVar1 = (ulong)*(uint6 *)((long)param_1 + 0x9c) & 0xfffffe0000000007;
  *(int *)((long)param_1 + 0x9c) = (int)uVar1;
  *(short *)(param_1 + 0x14) = (short)(uVar1 >> 0x20);
  return;
}




void FUN_009a87f0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[10];
  *param_1 = &PTR_FUN_027c1ab0;
  param_1[6] = &PTR_FUN_027c1e20;
  param_1[5] = &PTR_FUN_027c1c80;
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
    param_1[10] = 0;
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_009a8850(long param_1)

{
  FUN_009a87f0(param_1 + -0x28);
  return;
}




void FUN_009a8858(long param_1)

{
  FUN_009a87f0(param_1 + -0x30);
  return;
}




void FUN_009a8860(void *param_1)

{
  FUN_009a87f0();
  operator_delete(param_1);
  return;
}




void FUN_009a8884(long param_1)

{
  FUN_009a87f0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009a88ac(long param_1)

{
  FUN_009a87f0((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




void FUN_009a88d4(long param_1)

{
  long lVar1;
  
  DAT_0312e4a8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312e4a8 + 1;
  lVar1 = param_1 + (ulong)DAT_0312e4a8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009af1d8;
  *(code **)(lVar1 + 0xb8) = FUN_009af248;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_0312e4a8;
  *(undefined4 *)(lVar1 + 0xa8) = 0xa8;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009a8ae4,0);
  FUN_019867cc(param_1,0x11a60336,FUN_009a8bb0,0);
  FUN_019867cc(param_1,0x243804e0,FUN_009a8c6c,0);
  FUN_019867cc(param_1,0x1f1b047c,FUN_009a8c98,0);
  FUN_019867cc(param_1,0xb0d0275,FUN_009a8cc4,0);
  FUN_019867cc(param_1,0xdc302c4,FUN_009a8d88,0);
  FUN_019867cc(param_1,0x163803be,FUN_009a8db4,0);
  FUN_019867cc(param_1,0x22ef04a2,FUN_009a8de0,0);
  FUN_019867cc(param_1,0x22450493,FUN_009a8edc,0);
  FUN_019867cc(param_1,0x828f09a8,FUN_009a8fd0,0);
  FUN_019867cc(param_1,0x3be20659,FUN_009a8ffc,0);
  FUN_019867cc(param_1,0x36de0632,FUN_009a9160,0);
  FUN_019867cc(param_1,0x3b27063d,FUN_009a921c,0);
  FUN_019867cc(param_1,0x29740532,FUN_009a9350,0);
  FUN_019867cc(param_1,0x28d80521,FUN_009a937c,0);
  return;
}




void FUN_009a8ae4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (((*(long *)(param_1 + 0x40) != 0) && ((*(uint *)(param_1 + 0x9c) >> 0x1a & 1) == 0)) &&
     (uVar2 = FUN_00ced200(*(undefined4 *)(lVar3 + 0x260)), (uVar2 & 1) != 0)) {
    FUN_009a93a8(param_1);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
    if ((uVar1 != 0x1f) && (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 2)) {
      FUN_009a94f4(param_1);
      if ((*(uint *)(param_1 + 0x9c) & 7) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        FUN_009a9784(param_1);
        FUN_009b2e20(uVar4);
        FUN_009a97d8(param_1);
      }
      FUN_009a99c8(param_1);
    }
    uVar2 = FUN_009a9b60(param_1);
    if ((uVar2 & 1) != 0) {
      FUN_009a9b98(param_1);
    }
  }
  FUN_009a9cfc(param_1);
  return;
}




void FUN_009a8c6c(void)

{
  FUN_009ae210();
  return;
}




void FUN_009a8c98(void)

{
  FUN_009ae3fc();
  return;
}




void FUN_009a8d88(void)

{
  FUN_009ae580();
  return;
}




void FUN_009a8db4(void)

{
  FUN_009ae658();
  return;
}




void FUN_009a8fd0(void)

{
  FUN_009aea10();
  return;
}

