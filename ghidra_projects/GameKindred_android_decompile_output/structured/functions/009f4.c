// functions/009f4 — 52 functions
#include "libGameKindred.h"




void FUN_009f401c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f3fbc(param_2,param_3);
  return;
}




void FUN_009f4028(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19ee4(auStack_38,1);
  FUN_00a1a334(uVar2,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f4028(param_2,param_3);
  return;
}




void FUN_009f4094(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19ee4(auStack_38,2);
  FUN_00a1a334(uVar2,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f40f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f4094(param_2,param_3);
  return;
}




void FUN_009f4100(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d20(local_40,0);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f4100(param_2,param_3);
  return;
}




void FUN_009f4184(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d20(local_40,0);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f41f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f4184(param_2,param_3);
  return;
}




void FUN_009f4200(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_50 [2];
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d20(local_50,1);
  local_3c = 1;
  local_50[0] = &PTR_FUN_027c84b8;
  FUN_00a1a334(uVar2,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f4200(param_2,param_3);
  return;
}




void FUN_009f428c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d20(local_40,1);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f42fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f428c(param_2,param_3);
  return;
}




void FUN_009f4308(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 2;
  local_38 = &PTR_FUN_027c8470;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f436c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 3;
  local_38 = &PTR_FUN_027c8488;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f43d0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 1;
  local_38 = &PTR_FUN_027c84a0;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4434(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,0);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f44ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f4434(param_2,param_3);
  return;
}




void FUN_009f44b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,0);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f44b8(param_2,param_3);
  return;
}




void FUN_009f4534(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_50 [2];
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_50,1);
  local_3c = 1;
  local_50[0] = &PTR_FUN_027c84b8;
  FUN_00a1a334(uVar2,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f45b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f4534(param_2,param_3);
  return;
}




void FUN_009f45c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,1);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f45c0(param_2,param_3);
  return;
}




void FUN_009f463c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,2);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f46b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f463c(param_2,param_3);
  return;
}




void FUN_009f46c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,2);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f46c0(param_2,param_3);
  return;
}




void FUN_009f473c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,3);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f47b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f473c(param_2,param_3);
  return;
}




void FUN_009f47c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,3);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f47c0(param_2,param_3);
  return;
}




void FUN_009f483c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,4);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f48b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f483c(param_2,param_3);
  return;
}




void FUN_009f48c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,4);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f48c0(param_2,param_3);
  return;
}




void FUN_009f493c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [2];
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,5);
  local_40[0] = &PTR_FUN_027c84b8;
  local_2c = 1;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f49b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f493c(param_2,param_3);
  return;
}




void FUN_009f49c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  FUN_00a19d7c(local_40,5);
  local_40[0] = &PTR_FUN_027c84d0;
  FUN_00a1a334(uVar2,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009f49c0(param_2,param_3);
  return;
}




void FUN_009f4a3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x1a;
  local_38 = &PTR_FUN_027c85a8;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4aa0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0;
  local_38 = &PTR_FUN_027c8458;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4b00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x10;
  local_38 = &PTR_FUN_027c8500;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4b64(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x18;
  local_38 = &PTR_FUN_027c8578;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4bc8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x14;
  local_38 = &PTR_FUN_027c8518;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4c2c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x15;
  local_38 = &PTR_FUN_027c8530;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4c90(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x16;
  local_38 = &PTR_FUN_027c8548;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4cf4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x1c;
  local_38 = &PTR_FUN_027c8608;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4d58(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x20000001d;
  local_38 = &PTR_FUN_027c8620;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4dc0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x1d;
  local_38 = &PTR_FUN_027c8638;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4e24(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1f33c();
  local_30 = 0x40000001d;
  local_38 = &PTR_FUN_027c8620;
  FUN_00a1a334(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f4e8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  do {
    *(undefined4 *)puVar1 = 0x1b;
    puVar1[2] = &DAT_01e277f2;
    puVar1[1] = &DAT_01e277f2;
    puVar1[3] = &DAT_01e277f2;
    puVar1[4] = 0x300000069;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0x300000069;
    *(undefined1 *)((long)puVar1 + 0x34) = 0;
    puVar1 = puVar1 + 7;
  } while (puVar1 != param_1 + 0xb6);
  puVar1 = param_1 + 0xb6;
  do {
    *(undefined4 *)puVar1 = 0x1b;
    puVar1[2] = &DAT_01e277f2;
    puVar1[1] = &DAT_01e277f2;
    puVar1[3] = &DAT_01e277f2;
    puVar1[4] = 0x300000069;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0x300000069;
    *(undefined1 *)((long)puVar1 + 0x34) = 0;
    puVar1 = puVar1 + 7;
  } while (puVar1 != param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb8] = "KEYBIND_ABILITY_A_TITLE";
  param_1[0xb7] = "KEYBIND_Ability_A";
  param_1[0xb9] = &DAT_01e277f2;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xba] = 0x300000010;
  *(undefined8 *)((long)param_1 + 0x5dc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x5e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_1 + 0x5dd);
  param_1[5] = param_1[0xbb];
  param_1[4] = param_1[0xba];
  param_1[3] = param_1[0xb9];
  param_1[2] = param_1[0xb8];
  *(undefined4 *)(param_1 + 0xbd) = 1;
  param_1[0xbf] = "KEYBIND_ABILITY_B_TITLE";
  param_1[0xbe] = "KEYBIND_Ability_B";
  param_1[0xc0] = &DAT_01e277f2;
  param_1[0xc1] = 0x300000016;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  param_1[1] = param_1[0xb7];
  *param_1 = param_1[0xb6];
  *(undefined8 *)((long)param_1 + 0x614) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)((long)param_1 + 0x615);
  param_1[0xc] = param_1[0xc2];
  param_1[0xb] = param_1[0xc1];
  param_1[10] = param_1[0xc0];
  param_1[9] = param_1[0xbf];
  param_1[8] = param_1[0xbe];
  param_1[7] = param_1[0xbd];
  *(undefined4 *)(param_1 + 0xc4) = 2;
  param_1[0xc6] = "KEYBIND_ABILITY_C_TITLE";
  param_1[0xc5] = "KEYBIND_Ability_C";
  param_1[199] = &DAT_01e277f2;
  param_1[200] = 0x300000004;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0x300000011;
  *(undefined1 *)((long)param_1 + 0x654) = 0;
  param_1[0xf] = param_1[0xc5];
  param_1[0xe] = param_1[0xc4];
  param_1[0x11] = param_1[199];
  param_1[0x10] = param_1[0xc6];
  param_1[0x13] = param_1[0xc9];
  param_1[0x12] = param_1[200];
  *(undefined4 *)(param_1 + 0xcb) = 3;
  param_1[0xcc] = "KEYBIND_Upgrade_Ability_Modifier";
  *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_1 + 0x64d);
  param_1[0xce] = "KEYBIND_UPGRADE_ABILITY_MODIFIER_DESC";
  param_1[0xcd] = "KEYBIND_UPGRADE_ABILITY_MODIFIER_TITLE";
  param_1[0xcf] = 0x300000069;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)((long)param_1 + 0x684) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x68c) = 0;
  param_1[0x1a] = param_1[0xd0];
  param_1[0x19] = param_1[0xcf];
  param_1[0x18] = param_1[0xce];
  param_1[0x17] = param_1[0xcd];
  param_1[0x16] = param_1[0xcc];
  param_1[0x15] = param_1[0xcb];
  *(undefined8 *)((long)param_1 + 0xd5) = *(undefined8 *)((long)param_1 + 0x685);
  *(undefined4 *)(param_1 + 0xd2) = 4;
  param_1[0xd4] = "KEYBIND_ABILITY_FLASK_TITLE";
  param_1[0xd3] = "KEYBIND_Ability_Flask";
  param_1[0xd6] = 0x300000003;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined4 *)((long)param_1 + 0x6bc) = 0x69;
  param_1[0xd5] = &DAT_01e277f2;
  param_1[0x21] = param_1[0xd7];
  param_1[0x20] = param_1[0xd6];
  *(undefined4 *)(param_1 + 0xd8) = 3;
  *(undefined1 *)((long)param_1 + 0x6c4) = 0;
  param_1[0x1d] = param_1[0xd3];
  param_1[0x1c] = param_1[0xd2];
  param_1[0x1f] = param_1[0xd5];
  param_1[0x1e] = param_1[0xd4];
  *(undefined8 *)((long)param_1 + 0x10d) = *(undefined8 *)((long)param_1 + 0x6bd);
  *(undefined4 *)(param_1 + 0xd9) = 5;
  param_1[0xdb] = "KEYBIND_ABILITY_CAM_TITLE";
  param_1[0xda] = "KEYBIND_Ability_Cam";
  param_1[0xdc] = &DAT_01e277f2;
  param_1[0xdd] = 0x300000005;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined8 *)((long)param_1 + 0x6f4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x6fc) = 0;
  param_1[0x28] = param_1[0xde];
  param_1[0x27] = param_1[0xdd];
  param_1[0x26] = param_1[0xdc];
  param_1[0x25] = param_1[0xdb];
  param_1[0x24] = param_1[0xda];
  param_1[0x23] = param_1[0xd9];
  *(undefined8 *)((long)param_1 + 0x145) = *(undefined8 *)((long)param_1 + 0x6f5);
  *(undefined4 *)(param_1 + 0xe0) = 6;
  param_1[0xe2] = "KEYBIND_ABILITY_ITEM_1_TITLE";
  param_1[0xe1] = "KEYBIND_Ability_Item_1";
  param_1[0xe3] = &DAT_01e277f2;
  param_1[0xe4] = 0x30000001a;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined8 *)((long)param_1 + 0x72c) = 0x300000069;
  param_1[0x2d] = param_1[0xe3];
  param_1[0x2c] = param_1[0xe2];
  param_1[0x2f] = param_1[0xe5];
  param_1[0x2e] = param_1[0xe4];
  *(undefined1 *)((long)param_1 + 0x734) = 0;
  param_1[0x2b] = param_1[0xe1];
  param_1[0x2a] = param_1[0xe0];
  *(undefined8 *)((long)param_1 + 0x17d) = *(undefined8 *)((long)param_1 + 0x72d);
  *(undefined4 *)(param_1 + 0xe7) = 7;
  param_1[0xe9] = "KEYBIND_ABILITY_ITEM_2_TITLE";
  param_1[0xe8] = "KEYBIND_Ability_Item_2";
  param_1[0xea] = &DAT_01e277f2;
  param_1[0xeb] = 0x30000001b;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x76c) = 0;
  param_1[0x36] = param_1[0xec];
  param_1[0x35] = param_1[0xeb];
  param_1[0x34] = param_1[0xea];
  param_1[0x33] = param_1[0xe9];
  param_1[0x32] = param_1[0xe8];
  param_1[0x31] = param_1[0xe7];
  *(undefined8 *)((long)param_1 + 0x1b5) = *(undefined8 *)((long)param_1 + 0x765);
  *(undefined4 *)(param_1 + 0xee) = 8;
  param_1[0xf0] = "KEYBIND_ABILITY_ITEM_3_TITLE";
  param_1[0xef] = "KEYBIND_Ability_Item_3";
  param_1[0xf1] = &DAT_01e277f2;
  param_1[0xf2] = 0x30000001c;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  *(undefined8 *)((long)param_1 + 0x79c) = 0x300000069;
  param_1[0x3b] = param_1[0xf1];
  param_1[0x3a] = param_1[0xf0];
  param_1[0x3d] = param_1[0xf3];
  param_1[0x3c] = param_1[0xf2];
  *(undefined1 *)((long)param_1 + 0x7a4) = 0;
  param_1[0x39] = param_1[0xef];
  param_1[0x38] = param_1[0xee];
  *(undefined8 *)((long)param_1 + 0x1ed) = *(undefined8 *)((long)param_1 + 0x79d);
  *(undefined4 *)(param_1 + 0xf5) = 9;
  param_1[0xf7] = "KEYBIND_ABILITY_ITEM_4_TITLE";
  param_1[0xf6] = "KEYBIND_Ability_Item_4";
  param_1[0xf8] = &DAT_01e277f2;
  param_1[0xf9] = 0x30000001d;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)((long)param_1 + 0x7d4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x7dc) = 0;
  param_1[0x44] = param_1[0xfa];
  param_1[0x43] = param_1[0xf9];
  param_1[0x42] = param_1[0xf8];
  param_1[0x41] = param_1[0xf7];
  param_1[0x40] = param_1[0xf6];
  param_1[0x3f] = param_1[0xf5];
  *(undefined8 *)((long)param_1 + 0x225) = *(undefined8 *)((long)param_1 + 0x7d5);
  *(undefined4 *)(param_1 + 0xfc) = 10;
  param_1[0xfe] = "KEYBIND_ABILITY_ITEM_5_TITLE";
  param_1[0xfd] = "KEYBIND_Ability_Item_5";
  param_1[0xff] = &DAT_01e277f2;
  param_1[0x100] = 0x30000001e;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined8 *)((long)param_1 + 0x80c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x814) = 0;
  param_1[0x47] = param_1[0xfd];
  param_1[0x46] = param_1[0xfc];
  param_1[0x49] = param_1[0xff];
  param_1[0x48] = param_1[0xfe];
  param_1[0x4b] = param_1[0x101];
  param_1[0x4a] = param_1[0x100];
  *(undefined8 *)((long)param_1 + 0x25d) = *(undefined8 *)((long)param_1 + 0x80d);
  *(undefined4 *)(param_1 + 0x103) = 0xb;
  param_1[0x104] = "KEYBIND_Ability_Item_6";
  param_1[0x106] = &DAT_01e277f2;
  param_1[0x105] = "KEYBIND_ABILITY_ITEM_6_TITLE";
  param_1[0x107] = 0x30000001f;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined8 *)((long)param_1 + 0x844) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x84c) = 0;
  param_1[0x52] = param_1[0x108];
  param_1[0x51] = param_1[0x107];
  param_1[0x50] = param_1[0x106];
  param_1[0x4f] = param_1[0x105];
  param_1[0x4e] = param_1[0x104];
  param_1[0x4d] = param_1[0x103];
  *(undefined8 *)((long)param_1 + 0x295) = *(undefined8 *)((long)param_1 + 0x845);
  *(undefined4 *)(param_1 + 0x10a) = 0xc;
  param_1[0x10c] = "KEYBIND_SCOREBOARD_TITLE";
  param_1[0x10b] = "KEYBIND_Scoreboard";
  param_1[0x10d] = &DAT_01e277f2;
  param_1[0x10e] = 0x30000003f;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(undefined4 *)((long)param_1 + 0x87c) = 0x69;
  *(undefined4 *)(param_1 + 0x110) = 3;
  *(undefined1 *)((long)param_1 + 0x884) = 0;
  param_1[0x57] = param_1[0x10d];
  param_1[0x56] = param_1[0x10c];
  param_1[0x59] = param_1[0x10f];
  param_1[0x58] = param_1[0x10e];
  param_1[0x55] = param_1[0x10b];
  param_1[0x54] = param_1[0x10a];
  *(undefined8 *)((long)param_1 + 0x2cd) = *(undefined8 *)((long)param_1 + 0x87d);
  *(undefined4 *)(param_1 + 0x111) = 0xd;
  param_1[0x113] = "KEYBIND_TELEPORT_HOME_TITLE";
  param_1[0x112] = "KEYBIND_Teleport_Home";
  param_1[0x114] = &DAT_01e277f2;
  param_1[0x115] = 0x300000001;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined8 *)((long)param_1 + 0x8b4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x8bc) = 0;
  param_1[0x60] = param_1[0x116];
  param_1[0x5f] = param_1[0x115];
  param_1[0x5e] = param_1[0x114];
  param_1[0x5d] = param_1[0x113];
  param_1[0x5c] = param_1[0x112];
  param_1[0x5b] = param_1[0x111];
  *(undefined8 *)((long)param_1 + 0x305) = *(undefined8 *)((long)param_1 + 0x8b5);
  *(undefined4 *)(param_1 + 0x118) = 0xe;
  param_1[0x11a] = "KEYBIND_OPEN_SHOP_TITLE";
  param_1[0x119] = "KEYBIND_Open_Shop";
  param_1[0x11b] = &DAT_01e277f2;
  param_1[0x11c] = 0x300000013;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  *(undefined8 *)((long)param_1 + 0x8ec) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x8f4) = 0;
  param_1[0x67] = param_1[0x11d];
  param_1[0x66] = param_1[0x11c];
  param_1[99] = param_1[0x119];
  param_1[0x62] = param_1[0x118];
  param_1[0x65] = param_1[0x11b];
  param_1[100] = param_1[0x11a];
  *(undefined8 *)((long)param_1 + 0x33d) = *(undefined8 *)((long)param_1 + 0x8ed);
  *(undefined4 *)(param_1 + 0x11f) = 0xf;
  param_1[0x121] = "KEYBIND_QUICK_BUY_TITLE";
  param_1[0x120] = "KEYBIND_Quick_Buy";
  param_1[0x122] = "KEYBIND_QUICK_BUY_DESC";
  param_1[0x123] = 0x300000013;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined8 *)((long)param_1 + 0x924) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x92c) = 0;
  param_1[0x6e] = param_1[0x124];
  param_1[0x6d] = param_1[0x123];
  param_1[0x6c] = param_1[0x122];
  param_1[0x6b] = param_1[0x121];
  param_1[0x6a] = param_1[0x120];
  param_1[0x69] = param_1[0x11f];
  *(undefined8 *)((long)param_1 + 0x375) = *(undefined8 *)((long)param_1 + 0x925);
  *(undefined4 *)(param_1 + 0x126) = 0x10;
  param_1[0x128] = "KEYBIND_LAZY_ATTACK_TITLE";
  param_1[0x127] = "KEYBIND_Lazy_Attack";
  param_1[0x129] = "KEYBIND_LAZY_ATTACK_DESC";
  param_1[0x12a] = 0x300000000;
  *(undefined1 *)(param_1 + 299) = 0;
  *(undefined8 *)((long)param_1 + 0x95c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x964) = 0;
  param_1[0x75] = param_1[299];
  param_1[0x74] = param_1[0x12a];
  param_1[0x71] = param_1[0x127];
  param_1[0x70] = param_1[0x126];
  param_1[0x73] = param_1[0x129];
  param_1[0x72] = param_1[0x128];
  *(undefined8 *)((long)param_1 + 0x3ad) = *(undefined8 *)((long)param_1 + 0x95d);
  *(undefined4 *)(param_1 + 0x12d) = 0x11;
  param_1[0x12f] = "KEYBIND_LAZY_ATTACK_INSTANT_TITLE";
  param_1[0x12e] = "KEYBIND_Lazy_Attack_Instant";
  param_1[0x130] = "KEYBIND_LAZY_ATTACK_INSTANT_DESC";
  param_1[0x131] = 0x300000069;
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined8 *)((long)param_1 + 0x994) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x99c) = 0;
  param_1[0x7c] = param_1[0x132];
  param_1[0x7b] = param_1[0x131];
  param_1[0x7a] = param_1[0x130];
  param_1[0x79] = param_1[0x12f];
  param_1[0x78] = param_1[0x12e];
  param_1[0x77] = param_1[0x12d];
  *(undefined8 *)((long)param_1 + 0x3e5) = *(undefined8 *)((long)param_1 + 0x995);
  *(undefined4 *)(param_1 + 0x134) = 0x12;
  param_1[0x136] = "KEYBIND_CENTER_CAMERA_TITLE";
  param_1[0x135] = "KEYBIND_Center_Camera";
  param_1[0x137] = &DAT_01e277f2;
  param_1[0x138] = 0x30000004b;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined8 *)((long)param_1 + 0x9cc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x9d4) = 0;
  param_1[0x83] = param_1[0x139];
  param_1[0x82] = param_1[0x138];
  param_1[0x7f] = param_1[0x135];
  param_1[0x7e] = param_1[0x134];
  param_1[0x81] = param_1[0x137];
  param_1[0x80] = param_1[0x136];
  *(undefined8 *)((long)param_1 + 0x41d) = *(undefined8 *)((long)param_1 + 0x9cd);
  *(undefined4 *)(param_1 + 0x13b) = 0x13;
  param_1[0x13c] = "KEYBIND_Stop_Moving";
  param_1[0x13e] = &DAT_01e277f2;
  param_1[0x13d] = "KEYBIND_LAZY_STOP_TITLE";
  param_1[0x13f] = 0x300000012;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined8 *)((long)param_1 + 0xa04) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xa0c) = 0;
  param_1[0x8a] = param_1[0x140];
  param_1[0x89] = param_1[0x13f];
  param_1[0x88] = param_1[0x13e];
  param_1[0x87] = param_1[0x13d];
  param_1[0x86] = param_1[0x13c];
  param_1[0x85] = param_1[0x13b];
  *(undefined8 *)((long)param_1 + 0x455) = *(undefined8 *)((long)param_1 + 0xa05);
  *(undefined4 *)(param_1 + 0x142) = 0x14;
  param_1[0x144] = "KEYBIND_TOGGLE_LOCKED_CAMERA_TITLE";
  param_1[0x143] = "KEYBIND_Toggle_Locked_Camera";
  param_1[0x146] = 0x300000018;
  *(undefined1 *)(param_1 + 0x147) = 0;
  *(undefined4 *)((long)param_1 + 0xa3c) = 0x69;
  param_1[0x145] = &DAT_01e277f2;
  param_1[0x91] = param_1[0x147];
  param_1[0x90] = param_1[0x146];
  *(undefined4 *)(param_1 + 0x148) = 3;
  *(undefined1 *)((long)param_1 + 0xa44) = 0;
  param_1[0x8f] = param_1[0x145];
  param_1[0x8e] = param_1[0x144];
  param_1[0x8d] = param_1[0x143];
  param_1[0x8c] = param_1[0x142];
  *(undefined8 *)((long)param_1 + 0x48d) = *(undefined8 *)((long)param_1 + 0xa3d);
  param_1[0x14b] = "KEYBIND_OPEN_CHAT_TITLE";
  param_1[0x14a] = "KEYBIND_Open_Chat";
  *(undefined4 *)(param_1 + 0x149) = 0x15;
  param_1[0x14c] = &DAT_01e277f2;
  param_1[0x14d] = 0x30000004a;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  *(undefined8 *)((long)param_1 + 0xa74) = 0x300000063;
  *(undefined1 *)((long)param_1 + 0xa7c) = 0;
  param_1[0x98] = param_1[0x14e];
  param_1[0x97] = param_1[0x14d];
  param_1[0x96] = param_1[0x14c];
  param_1[0x95] = param_1[0x14b];
  param_1[0x94] = param_1[0x14a];
  param_1[0x93] = param_1[0x149];
  *(undefined8 *)((long)param_1 + 0x4c5) = *(undefined8 *)((long)param_1 + 0xa75);
  *(undefined4 *)(param_1 + 0x150) = 0x16;
  param_1[0x152] = "KEYBIND_TARGET_PING_TITLE";
  param_1[0x151] = "KEYBIND_Target_Ping";
  param_1[0x153] = "KEYBIND_TARGET_PING_DESC";
  param_1[0x154] = 0x300000006;
  *(undefined1 *)(param_1 + 0x155) = 0;
  *(undefined8 *)((long)param_1 + 0xaac) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xab4) = 0;
  param_1[0x9f] = param_1[0x155];
  param_1[0x9e] = param_1[0x154];
  param_1[0x9d] = param_1[0x153];
  param_1[0x9c] = param_1[0x152];
  param_1[0x9b] = param_1[0x151];
  param_1[0x9a] = param_1[0x150];
  *(undefined8 *)((long)param_1 + 0x4fd) = *(undefined8 *)((long)param_1 + 0xaad);
  *(undefined4 *)(param_1 + 0x157) = 0x17;
  param_1[0x159] = "KEYBIND_WARNING_PING_TITLE";
  param_1[0x158] = "KEYBIND_Warning_Ping";
  param_1[0x15a] = "KEYBIND_WARNINGPING_DESC";
  param_1[0x15b] = 0x300000015;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0xae4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xaec) = 0;
  param_1[0xa6] = param_1[0x15c];
  param_1[0xa5] = param_1[0x15b];
  param_1[0xa4] = param_1[0x15a];
  param_1[0xa3] = param_1[0x159];
  param_1[0xa2] = param_1[0x158];
  param_1[0xa1] = param_1[0x157];
  *(undefined8 *)((long)param_1 + 0x535) = *(undefined8 *)((long)param_1 + 0xae5);
  *(undefined4 *)(param_1 + 0x15e) = 0x18;
  param_1[0x160] = "KEYBIND_TARGET_PING_MOD_TITLE";
  param_1[0x15f] = "KEYBIND_Target_Ping_Modifier";
  param_1[0x161] = "KEYBIND_TARGET_PING_MOD_DESC";
  param_1[0x162] = 0x300000069;
  *(undefined1 *)(param_1 + 0x163) = 2;
  *(undefined8 *)((long)param_1 + 0xb1c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xb24) = 0;
  param_1[0xad] = param_1[0x163];
  param_1[0xac] = param_1[0x162];
  param_1[0xab] = param_1[0x161];
  param_1[0xaa] = param_1[0x160];
  param_1[0xa9] = param_1[0x15f];
  param_1[0xa8] = param_1[0x15e];
  *(undefined8 *)((long)param_1 + 0x56d) = *(undefined8 *)((long)param_1 + 0xb1d);
  *(undefined4 *)(param_1 + 0x165) = 0x19;
  param_1[0x167] = "KEYBIND_WARNING_PING_MOD_TITLE";
  param_1[0x166] = "KEYBIND_Warning_Ping_Modifier";
  param_1[0x168] = "KEYBIND_WARNING_PING_MOD_DESC";
  param_1[0x169] = 0x300000069;
  *(undefined1 *)(param_1 + 0x16a) = 4;
  *(undefined8 *)((long)param_1 + 0xb54) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xb5c) = 0;
  param_1[0xb4] = param_1[0x16a];
  param_1[0xb3] = param_1[0x169];
  param_1[0xb2] = param_1[0x168];
  param_1[0xb1] = param_1[0x167];
  param_1[0xb0] = param_1[0x166];
  param_1[0xaf] = param_1[0x165];
  *(undefined8 *)((long)param_1 + 0x5a5) = *(undefined8 *)((long)param_1 + 0xb55);
  return;
}

