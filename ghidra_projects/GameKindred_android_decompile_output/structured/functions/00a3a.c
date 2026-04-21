// functions/00a3a — 7 functions
#include "libGameKindred.h"




void FUN_00a3a624(void)

{
  FUN_00a3f2a0();
  return;
}




void FUN_00a3a650(void)

{
  FUN_00a3bbf0();
  return;
}




void FUN_00a3a67c(undefined8 param_1)

{
  FUN_00a3b4f8();
  FUN_00a3bbf0(param_1);
  return;
}




void FUN_00a3a6c8(void)

{
  FUN_00a3bbac();
  return;
}




void FUN_00a3a6f4(void)

{
  FUN_00a3f33c();
  return;
}




void FUN_00a3a720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_027c99c0;
  uVar2 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar2,param_1);
  uVar3 = FUN_009f1f50();
  if ((uVar3 & 1) != 0) {
    puVar4 = (uint *)FUN_009f1f64();
    lVar6 = (ulong)*puVar4 << 5;
    lVar7 = *(long *)(puVar4 + 2);
    do {
      lVar5 = lVar7;
      if (lVar6 == 0) goto LAB_00a3a798;
      lVar6 = lVar6 + -0x20;
      lVar7 = lVar5 + 0x20;
    } while (*(undefined8 **)(lVar5 + 8) != param_1);
    FUN_0091064c(puVar4,lVar5);
  }
LAB_00a3a798:
  FUN_00c868d4(param_1 + 0x451c);
  FUN_00c8637c(param_1 + 0x44ea);
  FUN_00f13d08(param_1 + 0x44d1);
  FUN_00f13d08(param_1 + 0x44ba);
  FUN_00f13d08(param_1 + 0x44a3);
  FUN_00f13d08(param_1 + 0x448c);
  FUN_00c81998(param_1 + 0x4437);
  FUN_00c81998(param_1 + 0x43e2);
  param_1[0x438f] = &PTR_FUN_02803ae0;
  param_1[0x43c4] = &PTR_FUN_028266f0;
  param_1[0x43db] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x43de);
  FUN_00f13d08(param_1 + 0x43c4);
  param_1[0x43a6] = &PTR_FUN_028266f0;
  param_1[0x43bd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x43c0);
  FUN_00f13d08(param_1 + 0x43a6);
  FUN_00f13d08(param_1 + 0x438f);
  FUN_00bbf1f4(param_1 + 0x438b);
  FUN_00f13d08(param_1 + 0x4372);
  FUN_00bbf1f4(param_1 + 0x436e);
  FUN_00bbf1f4(param_1 + 0x436a);
  FUN_00f13d08(param_1 + 0x4351);
  param_1[0x3f73] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x431a);
  FUN_00f01868(param_1 + 0x4309);
  FUN_00f13d08(param_1 + 0x42d5);
  FUN_00f01868(param_1 + 0x42c4);
  FUN_00f0d3a4(param_1 + 0x429e);
  FUN_00f0d3a4(param_1 + 0x4278);
  param_1[0x425a] = &PTR_FUN_028266f0;
  param_1[0x4271] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4274);
  FUN_00f13d08(param_1 + 0x425a);
  param_1[0x423c] = &PTR_FUN_028266f0;
  param_1[0x4253] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4256);
  FUN_00f13d08(param_1 + 0x423c);
  FUN_00f01868(param_1 + 0x422b);
  FUN_009c7fa8(param_1 + 0x3f73);
  FUN_00b27cec(param_1 + 0x3f56);
  FUN_00bbf4f8(param_1 + 0x3f54);
  param_1[0x3f2a] = &PTR_FUN_02826f38;
  param_1[0x3f41] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x3f44);
  FUN_00f13d08(param_1 + 0x3f2a);
  param_1[0x3f00] = &PTR_FUN_02826f38;
  param_1[0x3f17] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x3f1a);
  FUN_00f13d08(param_1 + 0x3f00);
  FUN_00f13d08(param_1 + 0x3ee7);
  FUN_00f13d08(param_1 + 0x3ece);
  FUN_00f13d08(param_1 + 0x3eb5);
  param_1[0x3e97] = &PTR_FUN_028266f0;
  param_1[0x3eae] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3eb1);
  FUN_00f13d08(param_1 + 0x3e97);
  param_1[0x3e79] = &PTR_FUN_028266f0;
  param_1[0x3e90] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3e93);
  FUN_00f13d08(param_1 + 0x3e79);
  param_1[0x3e4f] = &PTR_FUN_02826f38;
  param_1[0x3e66] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x3e69);
  FUN_00f13d08(param_1 + 0x3e4f);
  param_1[0x3e25] = &PTR_FUN_02826f38;
  param_1[0x3e3c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x3e3f);
  FUN_00f13d08(param_1 + 0x3e25);
  FUN_00f13d08(param_1 + 0x3e0c);
  FUN_00a3af04(param_1 + 0x3a39);
  FUN_00a43ab8(param_1 + 0x334d);
  FUN_00f13d08(param_1 + 0x3334);
  FUN_009dd410(param_1 + 0x2b88);
  FUN_00a71d0c(param_1 + 0x2afb);
  FUN_00a315bc(param_1 + 0x2ac8);
  FUN_00bbd3d4(param_1 + 0x2ac2);
  FUN_00a36d08(param_1 + 0x27f8);
  param_1[0x27c0] = &PTR_FUN_027ca2d0;
  FUN_00f0d3a4(param_1 + 0x27d1);
  FUN_00f01868(param_1 + 0x27c0);
  FUN_00a58c8c(param_1 + 0x26c5);
  FUN_00a4bbbc(param_1 + 0x2149);
  FUN_00a3b044(param_1 + 0x1fad);
  FUN_00a29250(param_1 + 0x1f8d);
  param_1[0x1f6f] = &PTR_FUN_028266f0;
  param_1[0x1f86] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f89);
  FUN_00f13d08(param_1 + 0x1f6f);
  FUN_00a29250(param_1 + 0x1f4f);
  param_1[0x1f31] = &PTR_FUN_028266f0;
  param_1[0x1f48] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f4b);
  FUN_00f13d08(param_1 + 0x1f31);
  FUN_00a29250(param_1 + 0x1f10);
  FUN_00a29250(param_1 + 0x1eef);
  FUN_00a49d70(param_1 + 0x1e86);
  param_1[0x188c] = &PTR_FUN_027c9878;
  lVar7 = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar7 + 0xeea0);
    *puVar1 = &PTR_FUN_027c9730;
    FUN_00f0d3a4((long)param_1 + lVar7 + 0xf2d8);
    puVar1[0x69] = &PTR_FUN_028266f0;
    puVar1[0x80] = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar7 + 0xf2b8);
    FUN_00f13d08((long)param_1 + lVar7 + 0xf1e8);
    puVar1[0x49] = &PTR_FUN_028266f0;
    puVar1[0x60] = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar7 + 0xf1b8);
    FUN_00f13d08((long)param_1 + lVar7 + 0xf0e8);
    puVar1[0x28] = &PTR_FUN_02827290;
    puVar1[0x3f] = &PTR_FUN_028273f8;
    FUN_00f0a79c((long)param_1 + lVar7 + 0xf0d0);
    puVar1[0x28] = &PTR_FUN_028266f0;
    puVar1[0x3f] = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar7 + 0xf0b0);
    FUN_00f13d08((long)param_1 + lVar7 + 0xefe0);
    FUN_00f01868((long)param_1 + lVar7 + 0xef58);
    FUN_00f13d08(puVar1);
    lVar7 = lVar7 + -0x588;
  } while (lVar7 != -0x2c40);
  FUN_00f13d08(param_1 + 0x18dc);
  FUN_00f13d08(param_1 + 0x18c3);
  FUN_00b27cec(param_1 + 0x18a6);
  FUN_00f13d08(param_1 + 0x188c);
  FUN_00f13d08(param_1 + 0x1875);
  FUN_00a3b130(param_1 + 0x110f);
  FUN_00bbca24(param_1 + 0x1108);
  FUN_00a2dab8(param_1 + 0x59);
  param_1[0x2e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a3af04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 0x3d1;
  lVar2 = -0x50;
  *param_1 = &PTR_FUN_027ca020;
  do {
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete__((void *)*puVar1);
      puVar1[-1] = 0;
      *puVar1 = 0;
    }
    lVar2 = lVar2 + 0x10;
    puVar1 = puVar1 + -2;
  } while (lVar2 != 0);
  lVar2 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar2 + 0x1d10);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  lVar2 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar2 + 0x1720);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  FUN_00f0d3a4(param_1 + 0x226);
  FUN_00f0d3a4(param_1 + 0x200);
  FUN_00f0d3a4(param_1 + 0x1da);
  FUN_00f0d3a4(param_1 + 0x1b4);
  FUN_00f13d08(param_1 + 0x19d);
  FUN_00ed00e0(param_1 + 0xf6);
  FUN_00f13d08(param_1 + 0xc2);
  param_1[0xa4] = &PTR_FUN_028266f0;
  param_1[0xbb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbe);
  FUN_00f13d08(param_1 + 0xa4);
  lVar2 = 0x3c0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x70);
    *puVar1 = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0x128) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x140);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  FUN_00f01868(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  return;
}

