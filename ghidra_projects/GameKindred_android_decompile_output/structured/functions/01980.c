// functions/01980 — 106 functions
#include "libGameKindred.h"




bool thunk_FUN_019806a4(void)

{
  return DAT_032143d0 != 0;
}




void thunk_FUN_019809d8(undefined8 param_1)

{
  if (DAT_032143e8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019809f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e8 + 0x50))(DAT_032143e8,param_1);
    return;
  }
  return;
}




void thunk_FUN_019800bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void thunk_FUN_019800bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_01980080(long param_1)

{
  FUN_0199ccac(param_1 + 8);
  return;
}




undefined2 FUN_01980088(long param_1)

{
  return *(undefined2 *)(param_1 + 0x24);
}




undefined2 FUN_01980090(long param_1)

{
  return *(undefined2 *)(param_1 + 0x26);
}




long FUN_01980098(long param_1)

{
  return param_1 + 8;
}




long FUN_019800a0(long param_1)

{
  return param_1 + 0x30;
}




void FUN_019800a8(long param_1,undefined4 param_2)

{
  FUN_00f01264(param_2,*(undefined8 *)(param_1 + 0xe0));
  return;
}




void FUN_019800bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_019800c4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_019800cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  FUN_00e7bdec(puVar1,5);
  *puVar1 = &PTR_FUN_02bae6d0;
  FUN_00e7bd4c(puVar1);
  FUN_00e7be08(puVar1);
  return;
}




void FUN_01980114(undefined8 *param_1)

{
  FUN_00e7bdec();
  *param_1 = &PTR_FUN_02bae6d0;
  return;
}




void FUN_01980144(void)

{
  return;
}




void FUN_0198014c(void)

{
  FUN_0198016c(0xbf);
  return;
}




void thunk_FUN_01980300(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_032143f8;
  if (DAT_032143f8 != (void *)0x0) {
    FUN_01982648(DAT_032143f8);
    operator_delete(pvVar1);
  }
  DAT_032143f8 = (void *)0x0;
  if (DAT_032143b8 != (long *)0x0) {
    (**(code **)(*DAT_032143b8 + 8))();
  }
  DAT_032143b8 = (long *)0x0;
  if (DAT_032143e8 != (long *)0x0) {
    (**(code **)(*DAT_032143e8 + 8))();
  }
  DAT_032143e8 = (long *)0x0;
  if (DAT_032143d8 != (long *)0x0) {
    FUN_0198150c();
    if (DAT_032143d8 != (long *)0x0) {
      (**(code **)(*DAT_032143d8 + 8))();
    }
  }
  DAT_032143d8 = (long *)0x0;
  if (DAT_032143d0 != (long *)0x0) {
    (**(code **)(*DAT_032143d0 + 8))();
  }
  DAT_032143d0 = (long *)0x0;
  if (DAT_032143c8 != (long *)0x0) {
    (**(code **)(*DAT_032143c8 + 8))();
  }
  DAT_032143c8 = (long *)0x0;
  if (DAT_032143c0 != (long *)0x0) {
    (**(code **)(*DAT_032143c0 + 8))();
  }
  DAT_032143c0 = (long *)0x0;
  if (DAT_032143f0 != (long *)0x0) {
    (**(code **)(*DAT_032143f0 + 8))();
  }
  DAT_032143f0 = (long *)0x0;
  return;
}




void FUN_01980158(void)

{
  return;
}




void FUN_0198015c(void)

{
  return;
}




undefined8 FUN_01980160(void)

{
  return 1;
}




void FUN_01980168(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_0198016c(uint param_1)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  
  if ((param_1 & 1) != 0) {
    pvVar3 = operator_new(0x50);
    FUN_01982c28();
    DAT_032143c0 = pvVar3;
  }
  if ((param_1 >> 1 & 1) != 0) {
    pvVar3 = operator_new(0x78);
    FUN_01983150();
    DAT_032143c8 = pvVar3;
  }
  if ((param_1 >> 2 & 1) != 0) {
    pvVar3 = operator_new(0x70);
    FUN_0198459c();
    DAT_032143d0 = pvVar3;
  }
  if ((param_1 >> 3 & 1) != 0) {
    pvVar3 = operator_new(0x838);
    FUN_0198437c();
    DAT_032143d8 = pvVar3;
    FUN_0198129c();
  }
  if ((param_1 >> 6 & 1) != 0) {
    plVar1 = operator_new(0x60);
    FUN_01982a30();
    DAT_032143f0 = plVar1;
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*DAT_032143f0 + 0x20))();
    }
  }
  if ((param_1 >> 4 & 1) != 0) {
    pvVar3 = operator_new(0x70);
    FUN_01984e50();
    DAT_032143e8 = pvVar3;
  }
  if ((param_1 >> 5 & 1) != 0) {
    pvVar3 = operator_new(0x40);
    FUN_01982f94();
    DAT_032143b8 = pvVar3;
  }
  if ((param_1 >> 7 & 1) != 0) {
    DAT_032143f8 = operator_new(0x10);
    *DAT_032143f8 = 0;
    DAT_032143f8[1] = 0;
  }
  return;
}




void FUN_019802b4(void)

{
  ulong uVar1;
  
  if ((DAT_032143f0 != (long *)0x0) &&
     (uVar1 = (**(code **)(*DAT_032143f0 + 0x30))(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x019802f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143f0 + 0x20))();
    return;
  }
  return;
}




void FUN_01980300(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_032143f8;
  if (DAT_032143f8 != (void *)0x0) {
    FUN_01982648(DAT_032143f8);
    operator_delete(pvVar1);
  }
  DAT_032143f8 = (void *)0x0;
  if (DAT_032143b8 != (long *)0x0) {
    (**(code **)(*DAT_032143b8 + 8))();
  }
  DAT_032143b8 = (long *)0x0;
  if (DAT_032143e8 != (long *)0x0) {
    (**(code **)(*DAT_032143e8 + 8))();
  }
  DAT_032143e8 = (long *)0x0;
  if (DAT_032143d8 != (long *)0x0) {
    FUN_0198150c();
    if (DAT_032143d8 != (long *)0x0) {
      (**(code **)(*DAT_032143d8 + 8))();
    }
  }
  DAT_032143d8 = (long *)0x0;
  if (DAT_032143d0 != (long *)0x0) {
    (**(code **)(*DAT_032143d0 + 8))();
  }
  DAT_032143d0 = (long *)0x0;
  if (DAT_032143c8 != (long *)0x0) {
    (**(code **)(*DAT_032143c8 + 8))();
  }
  DAT_032143c8 = (long *)0x0;
  if (DAT_032143c0 != (long *)0x0) {
    (**(code **)(*DAT_032143c0 + 8))();
  }
  DAT_032143c0 = (long *)0x0;
  if (DAT_032143f0 != (long *)0x0) {
    (**(code **)(*DAT_032143f0 + 8))();
  }
  DAT_032143f0 = (long *)0x0;
  return;
}




void FUN_01980408(void)

{
  return;
}




void FUN_0198040c(void)

{
  if (DAT_032143c0 != 0) {
    FUN_01985518();
  }
  if (DAT_032143b8 != 0) {
    FUN_0198560c();
  }
  if (DAT_032143e8 != (long *)0x0) {
    (**(code **)(*DAT_032143e8 + 0x10))();
  }
  if (DAT_032143e0 != (long *)0x0) {
    (**(code **)(*DAT_032143e0 + 0x10))();
  }
  if (DAT_032143d8 != 0) {
    FUN_01981058();
    FUN_019812cc();
  }
  if (DAT_032143c8 != 0) {
    FUN_01980c3c();
  }
  if (DAT_032143d0 != 0) {
    FUN_01980e5c();
  }
  if (DAT_032143f0 != (long *)0x0) {
    (**(code **)(*DAT_032143f0 + 0x10))();
  }
  if (DAT_032143f8 != 0) {
    FUN_01982778();
    return;
  }
  return;
}




void FUN_019804cc(void)

{
  if (DAT_032143c0 != 0) {
    FUN_019854fc();
  }
  if (DAT_032143b8 != 0) {
    FUN_019855fc();
  }
  if (DAT_032143e8 != (long *)0x0) {
    (**(code **)(*DAT_032143e8 + 0x18))();
  }
  if (DAT_032143e0 != (long *)0x0) {
    (**(code **)(*DAT_032143e0 + 0x18))();
  }
  if (DAT_032143d8 != 0) {
    FUN_01980fb8();
    FUN_019812b4();
  }
  if (DAT_032143c8 != 0) {
    FUN_01980c20();
  }
  if (DAT_032143d0 != 0) {
    FUN_01980e44();
  }
  if (DAT_032143f0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143f0 + 0x18))();
    return;
  }
  return;
}




bool FUN_0198057c(void)

{
  return DAT_032143c0 != 0;
}




bool FUN_01980590(void)

{
  if (DAT_032143c0 != 0) {
    return *(char *)(DAT_032143c0 + 0xc) != '\0';
  }
  return false;
}




undefined8 FUN_019805b4(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143c0 != 0) {
    uVar1 = FUN_01985574(DAT_032143c0,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_019805d4(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143c0 != 0) {
    uVar1 = FUN_0198559c(DAT_032143c0,param_1);
    return uVar1;
  }
  return 0;
}




undefined1  [16] FUN_019805f4(undefined4 param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (DAT_032143c0 != 0) {
    FUN_019855c4(DAT_032143c0,param_1);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




bool FUN_01980614(void)

{
  return DAT_032143c8 != 0;
}




void FUN_01980628(void)

{
  if (DAT_032143c8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0198063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143c8 + 0x10))();
    return;
  }
  return;
}




undefined8 FUN_01980644(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143c8 != 0) {
    uVar1 = FUN_01980cdc(DAT_032143c8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_01980664(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143c8 != 0) {
    uVar1 = FUN_01980ce4(DAT_032143c8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_01980684(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143c8 != 0) {
    uVar1 = FUN_01980cec(DAT_032143c8,param_1);
    return uVar1;
  }
  return 0;
}




bool FUN_019806a4(void)

{
  return DAT_032143d0 != 0;
}




undefined8 FUN_019806b8(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143d0 != 0) {
    uVar1 = FUN_01980ebc(DAT_032143d0,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_019806d8(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143d0 != 0) {
    uVar1 = FUN_01980ec4(DAT_032143d0,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_019806f8(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143d0 != 0) {
    uVar1 = FUN_01980ecc(DAT_032143d0,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_01980718(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143d0 != 0) {
    uVar1 = FUN_01980ed4(DAT_032143d0,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_01980738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_032143d0 != 0) {
    FUN_01980edc(DAT_032143d0,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}




void FUN_01980760(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6)

{
  if (DAT_032143d0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0198079c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143d0 + 0x10))
              (DAT_032143d0,param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1,param_6);
    return;
  }
  return;
}




bool FUN_019807a4(void)

{
  return DAT_032143d8 != 0;
}




void FUN_019807b8(void)

{
  if (DAT_032143d8 != 0) {
    FUN_0198124c();
    return;
  }
  return;
}




void FUN_019807cc(undefined4 param_1)

{
  FUN_01981254(DAT_032143d8,param_1);
  return;
}




void FUN_019807f0(void)

{
  if (DAT_032143f0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143f0 + 0x30))();
    return;
  }
  return;
}




void FUN_0198080c(void)

{
  ulong uVar1;
  
  if ((DAT_032143f0 != (long *)0x0) &&
     (uVar1 = (**(code **)(*DAT_032143f0 + 0x30))(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01980848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143f0 + 0x28))();
    return;
  }
  return;
}




void FUN_01980858(void)

{
  if (DAT_032143f0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0198086c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143f0 + 0x38))();
    return;
  }
  return;
}




void FUN_01980874(void)

{
                    /* WARNING: Could not recover jumptable at 0x01980884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032143f0 + 0x58))();
  return;
}




void FUN_01980888(void)

{
                    /* WARNING: Could not recover jumptable at 0x01980898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032143f0 + 0x50))();
  return;
}




void FUN_0198089c(undefined8 param_1)

{
  if (DAT_032143e8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019808b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e8 + 0x20))(DAT_032143e8,param_1);
    return;
  }
  return;
}




void FUN_019808c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,uint param_6,uint param_7,undefined8 param_8,byte param_9,
                 byte param_10)

{
  if (DAT_032143e8 != (long *)0x0) {
    (**(code **)(*DAT_032143e8 + 0x28))
              (DAT_032143e8,param_1,param_2,param_3,param_4,param_5,param_6 & 1,param_7 & 1,param_8,
               param_9 & 1,param_10 & 1);
  }
  return;
}




void FUN_01980938(undefined8 param_1)

{
  if (DAT_032143e8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e8 + 0x38))(DAT_032143e8,param_1);
    return;
  }
  return;
}




void FUN_0198095c(undefined8 param_1)

{
  if (DAT_032143e8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e8 + 0x40))(DAT_032143e8,param_1);
    return;
  }
  return;
}




void FUN_01980980(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (DAT_032143e8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019809a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e8 + 0x30))(DAT_032143e8,param_1,param_2,param_3 & 1);
    return;
  }
  return;
}




void FUN_019809b0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_032143e8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019809d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e8 + 0x48))(DAT_032143e8,param_1,param_2);
    return;
  }
  return;
}




void FUN_019809d8(undefined8 param_1)

{
  if (DAT_032143e8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019809f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e8 + 0x50))(DAT_032143e8,param_1);
    return;
  }
  return;
}




void FUN_019809fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 )

{
  if (DAT_032143e0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e0 + 0x20))
              (DAT_032143e0,param_1,param_2,param_3,param_4 & 1,param_5 & 1);
    return;
  }
  return;
}




void FUN_01980a38(undefined8 param_1)

{
  if (DAT_032143e0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e0 + 0x28))(DAT_032143e0,param_1);
    return;
  }
  return;
}




void FUN_01980a5c(undefined8 param_1,undefined8 param_2)

{
  if (DAT_032143e0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e0 + 0x30))(DAT_032143e0,param_1,param_2);
    return;
  }
  return;
}




void FUN_01980a84(undefined8 param_1)

{
  if (DAT_032143e0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e0 + 0x38))(DAT_032143e0,param_1);
    return;
  }
  return;
}




void FUN_01980aa8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_032143e0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e0 + 0x48))(DAT_032143e0,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_01980ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (DAT_032143e0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01980b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_032143e0 + 0x40))(DAT_032143e0,param_1,param_2,param_3,param_4 & 1);
    return;
  }
  return;
}




bool FUN_01980b08(void)

{
  return DAT_032143b8 != 0;
}




undefined8 FUN_01980b1c(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143b8 != 0) {
    uVar1 = FUN_01985658(DAT_032143b8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_01980b3c(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_032143b8 != 0) {
    uVar1 = FUN_01985660(DAT_032143b8,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_01980b5c(undefined4 param_1)

{
  FUN_01982870(DAT_032143f8,param_1);
  return;
}




void FUN_01980b80(undefined4 param_1)

{
  FUN_01982978(DAT_032143f8,param_1);
  return;
}




void FUN_01980b94(undefined4 param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = FUN_01982978(DAT_032143f8,param_1);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x38) = param_2 & 1;
  }
  return;
}




void FUN_01980bd0(undefined4 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_01982978(DAT_032143f8,*param_1);
  if (lVar1 != 0) {
    FUN_01981ab8();
    return;
  }
  return;
}




void FUN_01980c00(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02bae720;
  return;
}




void FUN_01980c20(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_01980c34(void)

{
  return;
}




void FUN_01980c38(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1980c3c);
  (*pcVar1)();
}




void FUN_01980c3c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar4;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar20;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined8 uVar28;
  byte bVar35;
  long local_40 [4];
  
  lVar2 = tpidr_el0;
  local_40[3] = *(long *)(lVar2 + 0x28);
  local_40[1] = param_1[2];
  local_40[0] = param_1[1];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_1 + 1);
  lVar3 = 0;
  do {
    uVar12 = *(undefined8 *)((long)local_40 + lVar3 + 8);
    uVar4 = *(undefined8 *)((long)local_40 + lVar3);
    uVar28 = *(undefined8 *)((long)param_1 + lVar3 + 0x10);
    uVar20 = *(undefined8 *)((long)param_1 + lVar3 + 8);
    lVar1 = lVar3 + 0x10;
    bVar5 = (byte)((ulong)uVar4 >> 8);
    bVar6 = (byte)((ulong)uVar4 >> 0x10);
    bVar7 = (byte)((ulong)uVar4 >> 0x18);
    bVar8 = (byte)((ulong)uVar4 >> 0x20);
    bVar9 = (byte)((ulong)uVar4 >> 0x28);
    bVar10 = (byte)((ulong)uVar4 >> 0x30);
    bVar11 = (byte)((ulong)uVar4 >> 0x38);
    bVar13 = (byte)((ulong)uVar12 >> 8);
    bVar14 = (byte)((ulong)uVar12 >> 0x10);
    bVar15 = (byte)((ulong)uVar12 >> 0x18);
    bVar16 = (byte)((ulong)uVar12 >> 0x20);
    bVar17 = (byte)((ulong)uVar12 >> 0x28);
    bVar18 = (byte)((ulong)uVar12 >> 0x30);
    bVar19 = (byte)((ulong)uVar12 >> 0x38);
    bVar21 = (byte)((ulong)uVar20 >> 8);
    bVar22 = (byte)((ulong)uVar20 >> 0x10);
    bVar23 = (byte)((ulong)uVar20 >> 0x18);
    bVar24 = (byte)((ulong)uVar20 >> 0x20);
    bVar25 = (byte)((ulong)uVar20 >> 0x28);
    bVar26 = (byte)((ulong)uVar20 >> 0x30);
    bVar27 = (byte)((ulong)uVar20 >> 0x38);
    bVar29 = (byte)((ulong)uVar28 >> 8);
    bVar30 = (byte)((ulong)uVar28 >> 0x10);
    bVar31 = (byte)((ulong)uVar28 >> 0x18);
    bVar32 = (byte)((ulong)uVar28 >> 0x20);
    bVar33 = (byte)((ulong)uVar28 >> 0x28);
    bVar34 = (byte)((ulong)uVar28 >> 0x30);
    bVar35 = (byte)((ulong)uVar28 >> 0x38);
    *(ulong *)((long)param_1 + lVar3 + 0x20) =
         CONCAT17(bVar35 & ~bVar19,
                  CONCAT16(bVar34 & ~bVar18,
                           CONCAT15(bVar33 & ~bVar17,
                                    CONCAT14(bVar32 & ~bVar16,
                                             CONCAT13(bVar31 & ~bVar15,
                                                      CONCAT12(bVar30 & ~bVar14,
                                                               CONCAT11(bVar29 & ~bVar13,
                                                                        (byte)uVar28 & ~(byte)uVar12
                                                                       )))))));
    *(ulong *)((long)param_1 + lVar3 + 0x18) =
         CONCAT17(bVar27 & ~bVar11,
                  CONCAT16(bVar26 & ~bVar10,
                           CONCAT15(bVar25 & ~bVar9,
                                    CONCAT14(bVar24 & ~bVar8,
                                             CONCAT13(bVar23 & ~bVar7,
                                                      CONCAT12(bVar22 & ~bVar6,
                                                               CONCAT11(bVar21 & ~bVar5,
                                                                        (byte)uVar20 & ~(byte)uVar4)
                                                              ))))));
    *(ulong *)((long)param_1 + lVar3 + 0x30) =
         CONCAT17(bVar19 & ~bVar35,
                  CONCAT16(bVar18 & ~bVar34,
                           CONCAT15(bVar17 & ~bVar33,
                                    CONCAT14(bVar16 & ~bVar32,
                                             CONCAT13(bVar15 & ~bVar31,
                                                      CONCAT12(bVar14 & ~bVar30,
                                                               CONCAT11(bVar13 & ~bVar29,
                                                                        (byte)uVar12 & ~(byte)uVar28
                                                                       )))))));
    *(ulong *)((long)param_1 + lVar3 + 0x28) =
         CONCAT17(bVar11 & ~bVar27,
                  CONCAT16(bVar10 & ~bVar26,
                           CONCAT15(bVar9 & ~bVar25,
                                    CONCAT14(bVar8 & ~bVar24,
                                             CONCAT13(bVar7 & ~bVar23,
                                                      CONCAT12(bVar6 & ~bVar22,
                                                               CONCAT11(bVar5 & ~bVar21,
                                                                        (byte)uVar4 & ~(byte)uVar20)
                                                              ))))));
    lVar3 = lVar1;
  } while (lVar1 != 0x10);
  if (*(long *)(lVar2 + 0x28) == local_40[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_01980cd4(void)

{
  return 0;
}




void FUN_01980cdc(long param_1)

{
  FUN_01980cf4(param_1 + 8);
  return;
}




void FUN_01980ce4(long param_1)

{
  FUN_01980cf4(param_1 + 0x18);
  return;
}




void FUN_01980cec(long param_1)

{
  FUN_01980cf4(param_1 + 0x28);
  return;
}




bool FUN_01980cf4(long param_1,uint param_2)

{
  return (*(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) & 1 << (ulong)(param_2 & 0x1f)) != 0;
}




void FUN_01980d14(long param_1,uint param_2)

{
  *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) =
       *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) | 1 << (ulong)(param_2 & 0x1f);
  return;
}




void FUN_01980d34(long param_1,uint param_2)

{
  *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) =
       *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) &
       (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  return;
}




undefined * FUN_01980d54(ulong param_1)

{
  return (&PTR_DAT_02bae740)[param_1 & 0xffffffff];
}




ulong FUN_01980d64(char *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = strcmp((&PTR_DAT_02bae740)[uVar2],param_1);
    if (iVar1 == 0) goto LAB_01980da4;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x69);
  uVar2 = 0x69;
LAB_01980da4:
  return uVar2 & 0xffffffff;
}




bool FUN_01980db8(long param_1,uint param_2)

{
  return (*(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) & 1 << (ulong)(param_2 & 0x1f)) != 0;
}




void FUN_01980dd8(long param_1,uint param_2)

{
  *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) =
       *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) | 1 << (ulong)(param_2 & 0x1f);
  return;
}




void FUN_01980df8(long param_1,uint param_2)

{
  *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) =
       *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4) &
       (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  return;
}




undefined * FUN_01980e18(ulong param_1)

{
  return (&PTR_s_Left_Mouse_Button_02baea88)[param_1 & 0xffffffff];
}




void FUN_01980e28(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02baeab0;
  return;
}




void FUN_01980e44(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_01980e54(void)

{
  return;
}




void FUN_01980e58(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1980e5c);
  (*pcVar1)();
}




void FUN_01980e5c(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 1);
  uVar1 = *puVar2;
  param_1[2] = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,puVar2);
  *(uint *)((long)param_1 + 0xc) = *puVar2 & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 2) = uVar1 & (*puVar2 ^ 0xffffffff);
  return;
}




undefined8 FUN_01980eb4(void)

{
  return 0;
}




void FUN_01980ebc(long param_1)

{
  FUN_01980db8(param_1 + 8);
  return;
}




void FUN_01980ec4(long param_1)

{
  FUN_01980db8(param_1 + 0xc);
  return;
}




void FUN_01980ecc(long param_1)

{
  FUN_01980db8(param_1 + 0x10);
  return;
}




void FUN_01980ed4(long param_1)

{
  FUN_01980db8(param_1 + 0x14);
  return;
}




void FUN_01980edc(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}




void FUN_01980f10(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01980f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return;
}




void FUN_01980f20(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01980f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,1);
  return;
}




void FUN_01980f30(void)

{
  return;
}




void FUN_01980f34(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x101) = 0;
  *param_1 = &PTR_FUN_02baeae8;
  FUN_00e77acc((long)param_1 + 0x80c,0);
  *(undefined4 *)(param_1 + 0x101) = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x40;
    *(undefined8 *)((long)param_1 + lVar2 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x10) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x18) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x800);
  *(undefined4 *)(param_1 + 0x101) = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x40;
    *(undefined8 *)((long)param_1 + lVar2 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x30) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x38) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x800);
  return;
}




void FUN_01980fb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 0x40;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
  } while (lVar2 != 0x800);
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 0x40;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 0;
  } while (lVar2 != 0x800);
  return;
}

