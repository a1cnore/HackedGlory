// functions/00c0e — 9 functions
#include "libGameKindred.h"




void FUN_00c0ebb8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x154);
  uVar2 = 0x99;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x4c;
  }
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x154) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0xd0);
  }
  uVar1 = *(uint *)(param_1 + 0x244);
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x244) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_0091ada4(param_1 + 0x1c0);
  return;
}




void FUN_00c0ec2c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0ec3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
    return;
  }
  return;
}




void FUN_00c0ec44(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00c0ec5c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0ec6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    return;
  }
  return;
}




void FUN_00c0ec74(long param_1)

{
  *(uint *)(param_1 + 0x8af4) = *(uint *)(param_1 + 0x8af4) & 0xfffffffb;
  *(uint *)(param_1 + 0x8b7c) = *(uint *)(param_1 + 0x8b7c) & 0xfffffffb;
  FUN_00c12b3c(param_1,*(char *)(param_1 + 0x9250) == '\0');
  return;
}




void FUN_00c0ecac(long param_1)

{
  FUN_00c12a04(param_1,*(char *)(param_1 + 0x9252) == '\0');
  return;
}




void FUN_00c0ecc4(undefined8 param_1)

{
  FUN_00c12cb0(param_1,0);
  return;
}




void FUN_00c0eccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c130f0(param_1,param_4);
  return;
}




void FUN_00c0ecd8(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_027f6248;
  FUN_00c0f75c();
  puVar1 = (uint *)FUN_009f1f64();
  lVar3 = (ulong)*puVar1 << 5;
  lVar5 = *(long *)(puVar1 + 2);
  do {
    lVar2 = lVar5;
    if (lVar3 == 0) goto LAB_00c0ed3c;
    lVar3 = lVar3 + -0x20;
    lVar5 = lVar2 + 0x20;
  } while (*(undefined8 **)(lVar2 + 8) != param_1);
  FUN_0091064c(puVar1,lVar2);
LAB_00c0ed3c:
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((void *)param_1[0x1245] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1245]);
    param_1[0x1245] = 0;
    param_1[0x1244] = 0;
  }
  if ((void *)param_1[0x1243] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1243]);
    param_1[0x1243] = 0;
    param_1[0x1242] = 0;
  }
  param_1[0x11ac] = &PTR_FUN_027dc928;
  param_1[0x1217] = &PTR_FUN_02826f38;
  param_1[0x122e] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1231);
  FUN_00f13d08(param_1 + 0x1217);
  param_1[0x11ed] = &PTR_FUN_02826f38;
  param_1[0x1204] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1207);
  FUN_00f13d08(param_1 + 0x11ed);
  param_1[0x11c3] = &PTR_FUN_02826f38;
  param_1[0x11da] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x11dd);
  FUN_00f13d08(param_1 + 0x11c3);
  FUN_00f13d08(param_1 + 0x11ac);
  param_1[0x118e] = &PTR_FUN_028266f0;
  param_1[0x11a5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11a8);
  FUN_00f13d08(param_1 + 0x118e);
  FUN_00f01868(param_1 + 0x117d);
  param_1[0x115f] = &PTR_FUN_028266f0;
  param_1[0x1176] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1179);
  FUN_00f13d08(param_1 + 0x115f);
  FUN_00f01868(param_1 + 0x114e);
  FUN_00f0d3a4(param_1 + 0x1128);
  param_1[0x1109] = &PTR_FUN_028266f0;
  param_1[0x1120] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1123);
  FUN_00f13d08(param_1 + 0x1109);
  param_1[0x104a] = &PTR_FUN_027d5388;
  param_1[0x10e5] = &PTR_FUN_028266f0;
  param_1[0x10fc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10ff);
  FUN_00f13d08(param_1 + 0x10e5);
  param_1[0x10c7] = &PTR_FUN_028266f0;
  param_1[0x10de] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10e1);
  FUN_00f13d08(param_1 + 0x10c7);
  param_1[0x10a9] = &PTR_FUN_028266f0;
  param_1[0x10c0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10c3);
  FUN_00f13d08(param_1 + 0x10a9);
  FUN_00f01868(param_1 + 0x1098);
  FUN_009c825c(param_1 + 0x104a);
  param_1[0xf8b] = &PTR_FUN_027d5388;
  param_1[0x1026] = &PTR_FUN_028266f0;
  param_1[0x103d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1040);
  FUN_00f13d08(param_1 + 0x1026);
  param_1[0x1008] = &PTR_FUN_028266f0;
  param_1[0x101f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1022);
  FUN_00f13d08(param_1 + 0x1008);
  param_1[0xfea] = &PTR_FUN_028266f0;
  param_1[0x1001] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1004);
  FUN_00f13d08(param_1 + 0xfea);
  FUN_00f01868(param_1 + 0xfd9);
  FUN_009c825c(param_1 + 0xf8b);
  param_1[0xecc] = &PTR_FUN_027d5388;
  param_1[0xf67] = &PTR_FUN_028266f0;
  param_1[0xf7e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf81);
  FUN_00f13d08(param_1 + 0xf67);
  param_1[0xf49] = &PTR_FUN_028266f0;
  param_1[0xf60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf63);
  FUN_00f13d08(param_1 + 0xf49);
  param_1[0xf2b] = &PTR_FUN_028266f0;
  param_1[0xf42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf45);
  FUN_00f13d08(param_1 + 0xf2b);
  FUN_00f01868(param_1 + 0xf1a);
  FUN_009c825c(param_1 + 0xecc);
  param_1[0xe0d] = &PTR_FUN_027d5388;
  param_1[0xea8] = &PTR_FUN_028266f0;
  param_1[0xebf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xec2);
  FUN_00f13d08(param_1 + 0xea8);
  param_1[0xe8a] = &PTR_FUN_028266f0;
  param_1[0xea1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xea4);
  FUN_00f13d08(param_1 + 0xe8a);
  param_1[0xe6c] = &PTR_FUN_028266f0;
  param_1[0xe83] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe86);
  FUN_00f13d08(param_1 + 0xe6c);
  FUN_00f01868(param_1 + 0xe5b);
  FUN_009c825c(param_1 + 0xe0d);
  param_1[0xde2] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xdf9);
  FUN_00f13d08(param_1 + 0xde2);
  FUN_00f01868(param_1 + 0xdd1);
  FUN_00f0d3a4(param_1 + 0xdab);
  param_1[0xd8d] = &PTR_FUN_028266f0;
  param_1[0xda4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xda7);
  FUN_00f13d08(param_1 + 0xd8d);
  param_1[0xd6e] = &PTR_FUN_028266f0;
  param_1[0xd85] = &PTR_FUN_02826850;
  param_1[0xccb] = &PTR_FUN_028072a0;
  FUN_00f0a79c(param_1 + 0xd88);
  FUN_00f13d08(param_1 + 0xd6e);
  param_1[0xd50] = &PTR_FUN_028266f0;
  param_1[0xd67] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd6a);
  FUN_00f13d08(param_1 + 0xd50);
  param_1[0xd32] = &PTR_FUN_028266f0;
  param_1[0xd49] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd4c);
  FUN_00f13d08(param_1 + 0xd32);
  param_1[0xd11] = &PTR_FUN_02827290;
  param_1[0xd28] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0xd2f);
  param_1[0xd11] = &PTR_FUN_028266f0;
  param_1[0xd28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd2b);
  FUN_00f13d08(param_1 + 0xd11);
  param_1[0xcf3] = &PTR_FUN_028266f0;
  param_1[0xd0a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd0d);
  FUN_00f13d08(param_1 + 0xcf3);
  FUN_00f01868(param_1 + 0xce2);
  FUN_00f13d08(param_1 + 0xccb);
  param_1[0xca2] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xcb9);
  FUN_00f13d08(param_1 + 0xca2);
  param_1[0xc84] = &PTR_FUN_028266f0;
  param_1[0xc9b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc9e);
  FUN_00f13d08(param_1 + 0xc84);
  FUN_00f0d3a4(param_1 + 0xc5e);
  param_1[0xc3e] = &PTR_FUN_028266f0;
  param_1[0xc55] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc58);
  FUN_00f13d08(param_1 + 0xc3e);
  param_1[0xc20] = &PTR_FUN_028266f0;
  param_1[0xc37] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc3a);
  FUN_00f13d08(param_1 + 0xc20);
  param_1[0xc02] = &PTR_FUN_028266f0;
  param_1[0xc19] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc1c);
  FUN_00f13d08(param_1 + 0xc02);
  param_1[0xbe4] = &PTR_FUN_028266f0;
  param_1[0xbfb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbfe);
  FUN_00f13d08(param_1 + 0xbe4);
  param_1[0xbbb] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xbd2);
  FUN_00f13d08(param_1 + 0xbbb);
  puVar4 = param_1 + 0xb9d;
  lVar5 = -0x960;
  do {
    *puVar4 = &PTR_FUN_028266f0;
    puVar4[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar4 + 0x1a);
    FUN_00f13d08(puVar4);
    lVar5 = lVar5 + 0xf0;
    puVar4 = puVar4 + -0x1e;
  } while (lVar5 != 0);
  lVar5 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar5 + 0x5348);
    lVar5 = lVar5 + -0x130;
  } while (lVar5 != -0xbe0);
  puVar4 = param_1 + 0x8f3;
  lVar5 = -0xa00;
  do {
    *puVar4 = &PTR_FUN_028266f0;
    puVar4[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar4 + 0x1a);
    FUN_00f13d08(puVar4);
    lVar5 = lVar5 + 0x100;
    puVar4 = puVar4 + -0x20;
  } while (lVar5 != 0);
  puVar4 = param_1 + 0x7b5;
  lVar5 = -0x960;
  do {
    *puVar4 = &PTR_FUN_028266f0;
    puVar4[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar4 + 0x1a);
    FUN_00f13d08(puVar4);
    lVar5 = lVar5 + 0xf0;
    puVar4 = puVar4 + -0x1e;
  } while (lVar5 != 0);
  puVar4 = param_1 + 0x689;
  lVar5 = -0x960;
  do {
    *puVar4 = &PTR_FUN_028266f0;
    puVar4[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar4 + 0x1a);
    FUN_00f13d08(puVar4);
    lVar5 = lVar5 + 0xf0;
    puVar4 = puVar4 + -0x1e;
  } while (lVar5 != 0);
  lVar5 = -0xcd0;
  puVar4 = param_1 + 0x552;
  do {
    *puVar4 = &PTR_FUN_02825728;
    FUN_00f01868(puVar4 + 0x17);
    FUN_00f13d08(puVar4);
    lVar5 = lVar5 + 0x148;
    puVar4 = puVar4 + -0x29;
  } while (lVar5 != 0);
  param_1[0x3b6] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x3cd);
  FUN_00f13d08(param_1 + 0x3b6);
  FUN_00f13d08(param_1 + 0x39f);
  param_1[0x309] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x378);
  FUN_00f0d3a4(param_1 + 0x352);
  param_1[0x334] = &PTR_FUN_028266f0;
  param_1[0x34b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x34e);
  FUN_00f13d08(param_1 + 0x334);
  param_1[0x309] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 800);
  FUN_00f13d08(param_1 + 0x309);
  param_1[0x273] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x2e2);
  FUN_00f0d3a4(param_1 + 700);
  param_1[0x29e] = &PTR_FUN_028266f0;
  param_1[0x2b5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b8);
  FUN_00f13d08(param_1 + 0x29e);
  param_1[0x273] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x28a);
  FUN_00f13d08(param_1 + 0x273);
  param_1[0x1dd] = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x24c);
  FUN_00f0d3a4(param_1 + 0x226);
  param_1[0x208] = &PTR_FUN_028266f0;
  param_1[0x21f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x222);
  FUN_00f13d08(param_1 + 0x208);
  param_1[0x1dd] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 500);
  FUN_00f13d08(param_1 + 0x1dd);
  FUN_00f0d3a4(param_1 + 0x1b7);
  FUN_00f0d3a4(param_1 + 0x191);
  FUN_00f0d3a4(param_1 + 0x16b);
  param_1[0x14d] = &PTR_FUN_028266f0;
  param_1[0x164] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x167);
  FUN_00f13d08(param_1 + 0x14d);
  FUN_00f13d08(param_1 + 0x136);
  FUN_00f13d08(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_028266f0;
  param_1[0x118] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11b);
  FUN_00f13d08(param_1 + 0x101);
  FUN_00f0d3a4(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_028266f0;
  param_1[0xd4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd7);
  FUN_00f13d08(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_028266f0;
  param_1[0xb6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb9);
  FUN_00f13d08(param_1 + 0x9f);
  param_1[0x81] = &PTR_FUN_028266f0;
  param_1[0x98] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9b);
  FUN_00f13d08(param_1 + 0x81);
  param_1[0x56] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_028266f0;
  param_1[0x4f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_028266f0;
  param_1[0x31] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x34);
  FUN_00f13d08(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}

