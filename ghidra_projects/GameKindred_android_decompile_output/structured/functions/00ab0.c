// functions/00ab0 — 22 functions
#include "libGameKindred.h"




undefined8 FUN_00ab0090(void)

{
  return 200;
}




void FUN_00ab0098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d31c0;
  FUN_00f0d3a4(param_1 + 0x19c);
  param_1[0x17e] = &PTR_FUN_028266f0;
  param_1[0x195] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x198);
  FUN_00f13d08(param_1 + 0x17e);
  FUN_00f13d08(param_1 + 0x167);
  param_1[0x149] = &PTR_FUN_028266f0;
  param_1[0x160] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x163);
  FUN_00f13d08(param_1 + 0x149);
  *param_1 = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x121);
  FUN_00c925cc(param_1);
  return;
}




void FUN_00ab0140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d31c0;
  FUN_00f0d3a4(param_1 + 0x19c);
  param_1[0x17e] = &PTR_FUN_028266f0;
  param_1[0x195] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x198);
  FUN_00f13d08(param_1 + 0x17e);
  FUN_00f13d08(param_1 + 0x167);
  param_1[0x149] = &PTR_FUN_028266f0;
  param_1[0x160] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x163);
  FUN_00f13d08(param_1 + 0x149);
  *param_1 = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x121);
  FUN_00c925cc(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab01f0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ab01f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}




void FUN_00ab01fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3358;
  param_1[0x2dd] = &PTR_FUN_028266f0;
  param_1[0x2f4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2f7);
  FUN_00f13d08(param_1 + 0x2dd);
  FUN_00f13d08(param_1 + 0x2c2);
  param_1[0x243] = &PTR_FUN_027d3a30;
  FUN_00f0d3a4(param_1 + 0x29b);
  param_1[0x270] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x287);
  FUN_00f13d08(param_1 + 0x270);
  if ((void *)param_1[0x26f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26f]);
    param_1[0x26f] = 0;
    param_1[0x26e] = 0;
  }
  param_1[0x243] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x25a);
  FUN_00f13d08(param_1 + 0x243);
  param_1[0x1c4] = &PTR_FUN_027d3a30;
  FUN_00f0d3a4(param_1 + 0x21c);
  param_1[0x1f1] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x208);
  FUN_00f13d08(param_1 + 0x1f1);
  if ((void *)param_1[0x1f0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f0]);
    param_1[0x1f0] = 0;
    param_1[0x1ef] = 0;
  }
  param_1[0x1c4] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1db);
  FUN_00f13d08(param_1 + 0x1c4);
  param_1[0x145] = &PTR_FUN_027d3a30;
  FUN_00f0d3a4(param_1 + 0x19d);
  param_1[0x172] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x189);
  FUN_00f13d08(param_1 + 0x172);
  if ((void *)param_1[0x171] != (void *)0x0) {
    operator_delete__((void *)param_1[0x171]);
    param_1[0x171] = 0;
    param_1[0x170] = 0;
  }
  param_1[0x145] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x15c);
  FUN_00f13d08(param_1 + 0x145);
  thunk_FUN_00ed5534(param_1);
  return;
}




void FUN_00ab03b0(void *param_1)

{
  FUN_00ab01fc();
  operator_delete(param_1);
  return;
}




void FUN_00ab03d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d34f0;
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab0454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d34f0;
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab04dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3788;
  param_1[0x6c9] = &PTR_FUN_028266f0;
  param_1[0x6e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6e3);
  FUN_00f13d08(param_1 + 0x6c9);
  param_1[0x6ab] = &PTR_FUN_028266f0;
  param_1[0x6c2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6c5);
  FUN_00f13d08(param_1 + 0x6ab);
  FUN_00f13d08(param_1 + 0x694);
  param_1[0x676] = &PTR_FUN_028266f0;
  param_1[0x68d] = &PTR_FUN_02826850;
  param_1[0x5bd] = &PTR_FUN_027d2f18;
  FUN_00f0a79c(param_1 + 0x690);
  FUN_00f13d08(param_1 + 0x676);
  FUN_00f0d3a4(param_1 + 0x650);
  param_1[0x625] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x63c);
  FUN_00f13d08(param_1 + 0x625);
  FUN_00f0d3a4(param_1 + 0x5ff);
  param_1[0x5d4] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x5eb);
  FUN_00f13d08(param_1 + 0x5d4);
  FUN_00f13d08(param_1 + 0x5bd);
  param_1[0x59f] = &PTR_FUN_028266f0;
  param_1[0x5b6] = &PTR_FUN_02826850;
  param_1[0x4d7] = &PTR_FUN_027d3068;
  FUN_00f0a79c(param_1 + 0x5b9);
  FUN_00f13d08(param_1 + 0x59f);
  param_1[0x581] = &PTR_FUN_028266f0;
  param_1[0x598] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x59b);
  FUN_00f13d08(param_1 + 0x581);
  FUN_00f0d3a4(param_1 + 0x55b);
  param_1[0x530] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x547);
  FUN_00f13d08(param_1 + 0x530);
  FUN_00f01868(param_1 + 0x51f);
  FUN_00ecf74c(param_1 + 0x4d7);
  param_1[0x3f1] = &PTR_FUN_027d3068;
  param_1[0x4b9] = &PTR_FUN_028266f0;
  param_1[0x4d0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4d3);
  FUN_00f13d08(param_1 + 0x4b9);
  param_1[0x49b] = &PTR_FUN_028266f0;
  param_1[0x4b2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4b5);
  FUN_00f13d08(param_1 + 0x49b);
  FUN_00f0d3a4(param_1 + 0x475);
  param_1[0x44a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x461);
  FUN_00f13d08(param_1 + 0x44a);
  FUN_00f01868(param_1 + 0x439);
  FUN_00ecf74c(param_1 + 0x3f1);
  param_1[0x30b] = &PTR_FUN_027d3068;
  param_1[0x3d3] = &PTR_FUN_028266f0;
  param_1[0x3ea] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3ed);
  FUN_00f13d08(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_028266f0;
  param_1[0x3cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cf);
  FUN_00f13d08(param_1 + 0x3b5);
  FUN_00f0d3a4(param_1 + 0x38f);
  param_1[0x364] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x37b);
  FUN_00f13d08(param_1 + 0x364);
  FUN_00f01868(param_1 + 0x353);
  FUN_00ecf74c(param_1 + 0x30b);
  param_1[0x225] = &PTR_FUN_027d3068;
  param_1[0x2ed] = &PTR_FUN_028266f0;
  param_1[0x304] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x307);
  FUN_00f13d08(param_1 + 0x2ed);
  param_1[0x2cf] = &PTR_FUN_028266f0;
  param_1[0x2e6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e9);
  FUN_00f13d08(param_1 + 0x2cf);
  FUN_00f0d3a4(param_1 + 0x2a9);
  param_1[0x27e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x295);
  FUN_00f13d08(param_1 + 0x27e);
  FUN_00f01868(param_1 + 0x26d);
  FUN_00ecf74c(param_1 + 0x225);
  FUN_00f13d08(param_1 + 0x20e);
  param_1[0x4c] = &PTR_FUN_027d31c0;
  FUN_00f0d3a4(param_1 + 0x1e8);
  param_1[0x1ca] = &PTR_FUN_028266f0;
  param_1[0x1e1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e4);
  FUN_00f13d08(param_1 + 0x1ca);
  FUN_00f13d08(param_1 + 0x1b3);
  param_1[0x195] = &PTR_FUN_028266f0;
  param_1[0x1ac] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1af);
  FUN_00f13d08(param_1 + 0x195);
  param_1[0x4c] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x16d);
  FUN_00c925cc(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab0938(void *param_1)

{
  FUN_00ab04dc();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00ab095c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_00ab0964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d38d0;
  FUN_00f0d3a4(param_1 + 0xb2f);
  FUN_00f0d3a4(param_1 + 0xb09);
  FUN_00ab0d88(param_1 + 0x8a6);
  param_1[0x888] = &PTR_FUN_028266f0;
  param_1[0x89f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8a2);
  FUN_00f13d08(param_1 + 0x888);
  FUN_00ab0d88(param_1 + 0x625);
  param_1[0x607] = &PTR_FUN_028266f0;
  param_1[0x61e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x621);
  FUN_00f13d08(param_1 + 0x607);
  FUN_00ab0d88(param_1 + 0x3a4);
  param_1[0x386] = &PTR_FUN_028266f0;
  param_1[0x39d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3a0);
  FUN_00f13d08(param_1 + 0x386);
  FUN_00ab0d88(param_1 + 0x123);
  param_1[0x105] = &PTR_FUN_028266f0;
  param_1[0x11c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11f);
  FUN_00f13d08(param_1 + 0x105);
  FUN_00f0d3a4(param_1 + 0xdf);
  FUN_00f0d3a4(param_1 + 0xb9);
  param_1[0x8e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xa5);
  FUN_00f13d08(param_1 + 0x8e);
  param_1[0x70] = &PTR_FUN_028266f0;
  param_1[0x87] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8a);
  FUN_00f13d08(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_028266f0;
  param_1[0x69] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab0b00(void *param_1)

{
  FUN_00ab0964();
  operator_delete(param_1);
  return;
}




void FUN_00ab0b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3a30;
  FUN_00f0d3a4(param_1 + 0x58);
  param_1[0x2d] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2d);
  if ((void *)param_1[0x2c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c]);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab0ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3a30;
  FUN_00f0d3a4(param_1 + 0x58);
  param_1[0x2d] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2d);
  if ((void *)param_1[0x2c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c]);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab0c2c(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00ab0c50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3cc8;
  param_1[0x17] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x29] != (void *)0x0) {
    operator_delete__((void *)param_1[0x29]);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  FUN_00f0d3a4(param_1);
  return;
}




void FUN_00ab0c98(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_027d3cc8;
  *param_1 = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_00f0d3a4(param_1 + -0x17);
  return;
}




void FUN_00ab0ce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d3cc8;
  param_1[0x17] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x29] != (void *)0x0) {
    operator_delete__((void *)param_1[0x29]);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  FUN_00f0d3a4(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab0d34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027d3cc8;
  *param_1 = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_00f0d3a4(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00ab0d88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dc088;
  FUN_00f13d08(param_1 + 0x22b);
  FUN_00f0d3a4(param_1 + 0x205);
  param_1[0x158] = &PTR_FUN_027dc7d8;
  param_1[0x1e7] = &PTR_FUN_028266f0;
  param_1[0x1fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x201);
  FUN_00f13d08(param_1 + 0x1e7);
  param_1[0x1c9] = &PTR_FUN_028266f0;
  param_1[0x1e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e3);
  FUN_00f13d08(param_1 + 0x1c9);
  param_1[0x1ab] = &PTR_FUN_028266f0;
  param_1[0x1c2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c5);
  FUN_00f13d08(param_1 + 0x1ab);
  param_1[0x18d] = &PTR_FUN_028266f0;
  param_1[0x1a4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a7);
  FUN_00f13d08(param_1 + 0x18d);
  param_1[0x16f] = &PTR_FUN_028266f0;
  param_1[0x186] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x189);
  FUN_00f13d08(param_1 + 0x16f);
  FUN_00f13d08(param_1 + 0x158);
  FUN_00afc0a4(param_1 + 0x11c);
  param_1[0xfe] = &PTR_FUN_028266f0;
  param_1[0x115] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x118);
  FUN_00f13d08(param_1 + 0xfe);
  param_1[0xe0] = &PTR_FUN_028266f0;
  param_1[0xf7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfa);
  FUN_00f13d08(param_1 + 0xe0);
  param_1[0xc2] = &PTR_FUN_028266f0;
  param_1[0xd9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdc);
  FUN_00f13d08(param_1 + 0xc2);
  FUN_00f01868(param_1 + 0xb1);
  param_1[0x93] = &PTR_FUN_028266f0;
  param_1[0xaa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xad);
  FUN_00f13d08(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_028266f0;
  param_1[0x8c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8f);
  FUN_00f13d08(param_1 + 0x75);
  param_1[0x57] = &PTR_FUN_028266f0;
  param_1[0x6e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x71);
  FUN_00f13d08(param_1 + 0x57);
  param_1[0x39] = &PTR_FUN_028266f0;
  param_1[0x50] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x53);
  FUN_00f13d08(param_1 + 0x39);
  FUN_00f01868(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab0f80(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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

