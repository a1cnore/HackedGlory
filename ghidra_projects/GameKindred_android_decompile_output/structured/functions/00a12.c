// functions/00a12 — 8 functions
#include "libGameKindred.h"




void FUN_00a12050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_027c82f8;
  if (param_1[0x62] != 0) {
    FUN_019888f4();
    param_1[0x62] = 0;
  }
  FUN_00a1ae00();
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar1,param_1);
  FUN_00a1a7f8(param_1 + 0x37);
  FUN_00a1bdc8(param_1 + 0x31);
  thunk_FUN_00a19b50(param_1 + 0x2d);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a120b8(void *param_1)

{
  FUN_00a12050();
  operator_delete(param_1);
  return;
}




void FUN_00a120dc(long param_1)

{
  long lVar1;
  
  DAT_02e3ef68 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02e3ef68 + 1;
  lVar1 = param_1 + (ulong)DAT_02e3ef68 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a180d0;
  *(code **)(lVar1 + 0xb8) = FUN_00a180f4;
  *(uint *)(lVar1 + 0xa4) = DAT_02e3ef68;
  *(undefined4 *)(lVar1 + 0xa8) = 0x388;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0xb0d0275,FUN_00a124e0,0);
  FUN_019867cc(param_1,0xdc302c4,FUN_00a125cc,0);
  FUN_019867cc(param_1,0x163803be,FUN_00a125f8,0);
  FUN_019867cc(param_1,0x11a60336,FUN_00a12624,0);
  FUN_019867cc(param_1,0x295f0542,FUN_00a12710,0);
  FUN_019867cc(param_1,0x1ab4042d,FUN_00a127cc,0);
  FUN_019867cc(param_1,0x284e050e,FUN_00a128b4,0);
  FUN_019867cc(param_1,0xaf0026c,FUN_00a12978,0);
  FUN_019867cc(param_1,0x299d0531,FUN_00a12b14,0);
  FUN_019867cc(param_1,0x4a290718,FUN_00a12be4,0);
  FUN_019867cc(param_1,0x647c0866,FUN_00a12c20,0);
  FUN_019867cc(param_1,0x623d0838,FUN_00a12d08,0);
  FUN_019867cc(param_1,0x59fc07dd,FUN_00a12e10,0);
  FUN_019867cc(param_1,0x9dd50aa9,FUN_00a12f18,0);
  FUN_019867cc(param_1,0x938b0a4e,FUN_00a12f58,0);
  FUN_019867cc(param_1,0x35850600,FUN_00a12f98,0);
  FUN_019867cc(param_1,0x3f020699,FUN_00a13054,0);
  FUN_019867cc(param_1,0x828f09a8,FUN_00a13114,0);
  FUN_019867cc(param_1,0xe3e02dc,FUN_00a13144,0);
  FUN_019867cc(param_1,0x22ef04a2,FUN_00a13224,0);
  FUN_019867cc(param_1,0x1eda0467,FUN_00a13318,0);
  FUN_019867cc(param_1,0xfb380daa,FUN_00a133d4,0);
  FUN_019867cc(param_1,0xd22b0c6a,FUN_00a13404,0);
  FUN_019867cc(param_1,0x5d1d082f,FUN_00a134e4,0);
  FUN_019867cc(param_1,0x6f0608f1,FUN_00a13608,0);
  FUN_019867cc(param_1,0x5d430830,FUN_00a136f0,0);
  FUN_019867cc(param_1,0x6f2e08f2,FUN_00a137bc,0);
  FUN_019867cc(param_1,0x4ad10727,FUN_00a13878,0);
  FUN_019867cc(param_1,0x1b0a0423,FUN_00a138a8,0);
  FUN_019867cc(param_1,0x15ad039b,FUN_00a13990,0);
  FUN_019867cc(param_1,0x3bb20643,FUN_00a13a4c,0);
  FUN_01986780(param_1,2,FUN_00a13b34,0);
  FUN_01986780(param_1,4,FUN_00a13b98,0);
  return;
}




void FUN_00a125cc(void)

{
  FUN_00a17684();
  return;
}




void FUN_00a125f8(void)

{
  FUN_00a17758();
  return;
}




void FUN_00a12be4(long param_1)

{
  *(undefined1 *)(param_1 + 0x36a) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  FUN_009c4ee0(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a12f18(void)

{
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b8540();
  return;
}




void FUN_00a12f58(void)

{
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b8558();
  return;
}

