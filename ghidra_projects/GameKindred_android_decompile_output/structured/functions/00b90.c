// functions/00b90 — 1 functions
#include "libGameKindred.h"




void FUN_00b90b14(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_1[0x6d] = &PTR_FUN_027e88c0;
  *param_1 = &PTR_FUN_027e86a8;
  param_1[0x70] = &PTR_FUN_027e88f0;
  param_1[0x74] = &PTR_FUN_027e8ce8;
  param_1[0x73] = &PTR_FUN_027e8c88;
  param_1[0x77] = &PTR_FUN_027e8d10;
  FUN_00915ef0(param_1 + 0x77);
  FUN_00b91984(param_1);
  FUN_00b91a34(param_1);
  FUN_00b91ae4(param_1);
  *(undefined1 *)((long)param_1 + 0x12674) = 0;
  if ((*(byte *)(param_1 + 0x24c7) & 1) != 0) {
    operator_delete((void *)param_1[0x24c9]);
  }
  if ((*(byte *)(param_1 + 0x24c4) & 1) != 0) {
    operator_delete((void *)param_1[0x24c6]);
  }
  if ((void *)param_1[0x24c3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24c3]);
    param_1[0x24c3] = 0;
    param_1[0x24c2] = 0;
  }
  if ((*(byte *)(param_1 + 0x24bf) & 1) != 0) {
    operator_delete((void *)param_1[0x24c1]);
  }
  if ((*(byte *)(param_1 + 0x24bc) & 1) != 0) {
    operator_delete((void *)param_1[0x24be]);
  }
  if ((*(byte *)(param_1 + 0x24b9) & 1) != 0) {
    operator_delete((void *)param_1[0x24bb]);
  }
  if ((void *)param_1[0x24b8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24b8]);
    param_1[0x24b8] = 0;
    param_1[0x24b7] = 0;
  }
  FUN_00aa1388(param_1 + 0x24b6);
  FUN_00b91de4(param_1 + 0x24b0);
  FUN_00b9fc80(param_1 + 0x24ae,1);
  FUN_00ba1500(param_1 + 0x24ac,1);
  FUN_00914e9c(param_1 + 0x24aa,1);
  FUN_00914e2c(param_1 + 0x24a8,1);
  FUN_00914e2c(param_1 + 0x24a6,1);
  FUN_00b27cec(param_1 + 0x2489);
  FUN_00b27cec(param_1 + 0x246c);
  FUN_00f0d3a4(param_1 + 0x2446);
  param_1[0x2428] = &PTR_FUN_028266f0;
  param_1[0x243f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2442);
  FUN_00f13d08(param_1 + 0x2428);
  FUN_00f01868(param_1 + 0x2417);
  if ((void *)param_1[0x2415] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2415]);
    param_1[0x2415] = 0;
    param_1[0x2414] = 0;
  }
  if ((void *)param_1[0x2413] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2413]);
    param_1[0x2413] = 0;
    param_1[0x2412] = 0;
  }
  if ((void *)param_1[0x2411] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2411]);
    param_1[0x2411] = 0;
    param_1[0x2410] = 0;
  }
  if ((void *)param_1[0x240f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x240f]);
    param_1[0x240f] = 0;
    param_1[0x240e] = 0;
  }
  if ((void *)param_1[0x240d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x240d]);
    param_1[0x240d] = 0;
    param_1[0x240c] = 0;
  }
  if ((void *)param_1[0x240b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x240b]);
    param_1[0x240b] = 0;
    param_1[0x240a] = 0;
  }
  if ((void *)param_1[0x2409] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2409]);
    param_1[0x2409] = 0;
    param_1[0x2408] = 0;
  }
  FUN_00ac078c(param_1 + 0x1be8);
  FUN_00ac848c(param_1 + 0x16c1);
  FUN_00f0d3a4(param_1 + 0x169b);
  param_1[0x15dc] = &PTR_FUN_027d5388;
  param_1[0x1677] = &PTR_FUN_028266f0;
  param_1[0x168e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1691);
  FUN_00f13d08(param_1 + 0x1677);
  param_1[0x1659] = &PTR_FUN_028266f0;
  param_1[0x1670] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1673);
  FUN_00f13d08(param_1 + 0x1659);
  param_1[0x163b] = &PTR_FUN_028266f0;
  param_1[0x1652] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1655);
  FUN_00f13d08(param_1 + 0x163b);
  FUN_00f01868(param_1 + 0x162a);
  FUN_009c825c(param_1 + 0x15dc);
  param_1[0x151d] = &PTR_FUN_027d5388;
  param_1[0x15b8] = &PTR_FUN_028266f0;
  param_1[0x15cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15d2);
  FUN_00f13d08(param_1 + 0x15b8);
  param_1[0x159a] = &PTR_FUN_028266f0;
  param_1[0x15b1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15b4);
  FUN_00f13d08(param_1 + 0x159a);
  param_1[0x157c] = &PTR_FUN_028266f0;
  param_1[0x1593] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1596);
  FUN_00f13d08(param_1 + 0x157c);
  FUN_00f01868(param_1 + 0x156b);
  FUN_009c825c(param_1 + 0x151d);
  param_1[0x145e] = &PTR_FUN_027d5388;
  param_1[0x14f9] = &PTR_FUN_028266f0;
  param_1[0x1510] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1513);
  FUN_00f13d08(param_1 + 0x14f9);
  param_1[0x14db] = &PTR_FUN_028266f0;
  param_1[0x14f2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14f5);
  FUN_00f13d08(param_1 + 0x14db);
  param_1[0x14bd] = &PTR_FUN_028266f0;
  param_1[0x14d4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14d7);
  FUN_00f13d08(param_1 + 0x14bd);
  FUN_00f01868(param_1 + 0x14ac);
  FUN_009c825c(param_1 + 0x145e);
  param_1[0x139f] = &PTR_FUN_027d5388;
  param_1[0x143a] = &PTR_FUN_028266f0;
  param_1[0x1451] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1454);
  FUN_00f13d08(param_1 + 0x143a);
  param_1[0x141c] = &PTR_FUN_028266f0;
  param_1[0x1433] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1436);
  FUN_00f13d08(param_1 + 0x141c);
  param_1[0x13fe] = &PTR_FUN_028266f0;
  param_1[0x1415] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1418);
  FUN_00f13d08(param_1 + 0x13fe);
  FUN_00f01868(param_1 + 0x13ed);
  FUN_009c825c(param_1 + 0x139f);
  FUN_00f0d3a4(param_1 + 0x1379);
  param_1[0x135b] = &PTR_FUN_028266f0;
  param_1[0x1372] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1375);
  FUN_00f13d08(param_1 + 0x135b);
  FUN_00f01868(param_1 + 0x134a);
  param_1[0x132c] = &PTR_FUN_028266f0;
  param_1[0x1343] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1346);
  FUN_00f13d08(param_1 + 0x132c);
  FUN_00f01868(param_1 + 0x131b);
  FUN_00f0d3a4(param_1 + 0x12f5);
  param_1[0x12d7] = &PTR_FUN_028266f0;
  param_1[0x12ee] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x12f1);
  FUN_00f13d08(param_1 + 0x12d7);
  puVar2 = param_1 + 0x12b7;
  lVar1 = -0x4b0;
  param_1[0x1228] = &PTR_FUN_027d47d0;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar1 = lVar1 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar1 != 0);
  FUN_00f13d08(param_1 + 0x1228);
  param_1[0x1169] = &PTR_FUN_027d5388;
  param_1[0x1204] = &PTR_FUN_028266f0;
  param_1[0x121b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x121e);
  FUN_00f13d08(param_1 + 0x1204);
  param_1[0x11e6] = &PTR_FUN_028266f0;
  param_1[0x11fd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1200);
  FUN_00f13d08(param_1 + 0x11e6);
  param_1[0x11c8] = &PTR_FUN_028266f0;
  param_1[0x11df] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11e2);
  FUN_00f13d08(param_1 + 0x11c8);
  FUN_00f01868(param_1 + 0x11b7);
  FUN_009c825c(param_1 + 0x1169);
  param_1[0x114b] = &PTR_FUN_028266f0;
  param_1[0x1162] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1165);
  FUN_00f13d08(param_1 + 0x114b);
  FUN_00f0d3a4(param_1 + 0x1125);
  FUN_009c825c(param_1 + 0x10d7);
  FUN_00f01868(param_1 + 0x10c6);
  param_1[0x1007] = &PTR_FUN_027d5388;
  param_1[0x10a2] = &PTR_FUN_028266f0;
  param_1[0x10b9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10bc);
  FUN_00f13d08(param_1 + 0x10a2);
  param_1[0x1084] = &PTR_FUN_028266f0;
  param_1[0x109b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x109e);
  FUN_00f13d08(param_1 + 0x1084);
  param_1[0x1066] = &PTR_FUN_028266f0;
  param_1[0x107d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1080);
  FUN_00f13d08(param_1 + 0x1066);
  FUN_00f01868(param_1 + 0x1055);
  FUN_009c825c(param_1 + 0x1007);
  param_1[0xfe9] = &PTR_FUN_028266f0;
  param_1[0x1000] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1003);
  FUN_00f13d08(param_1 + 0xfe9);
  FUN_00f0d3a4(param_1 + 0xfc3);
  FUN_009c825c(param_1 + 0xf75);
  FUN_00f01868(param_1 + 0xf64);
  param_1[0xea5] = &PTR_FUN_027d5388;
  param_1[0xf40] = &PTR_FUN_028266f0;
  param_1[0xf57] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf5a);
  FUN_00f13d08(param_1 + 0xf40);
  param_1[0xf22] = &PTR_FUN_028266f0;
  param_1[0xf39] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf3c);
  FUN_00f13d08(param_1 + 0xf22);
  param_1[0xf04] = &PTR_FUN_028266f0;
  param_1[0xf1b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf1e);
  FUN_00f13d08(param_1 + 0xf04);
  FUN_00f01868(param_1 + 0xef3);
  FUN_009c825c(param_1 + 0xea5);
  param_1[0xe87] = &PTR_FUN_028266f0;
  param_1[0xe9e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xea1);
  FUN_00f13d08(param_1 + 0xe87);
  FUN_00f0d3a4(param_1 + 0xe61);
  FUN_009c825c(param_1 + 0xe13);
  FUN_00f01868(param_1 + 0xe02);
  param_1[0xd43] = &PTR_FUN_027d5388;
  param_1[0xdde] = &PTR_FUN_028266f0;
  param_1[0xdf5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdf8);
  FUN_00f13d08(param_1 + 0xdde);
  param_1[0xdc0] = &PTR_FUN_028266f0;
  param_1[0xdd7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdda);
  FUN_00f13d08(param_1 + 0xdc0);
  param_1[0xda2] = &PTR_FUN_028266f0;
  param_1[0xdb9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdbc);
  FUN_00f13d08(param_1 + 0xda2);
  FUN_00f01868(param_1 + 0xd91);
  FUN_009c825c(param_1 + 0xd43);
  param_1[0xd25] = &PTR_FUN_028266f0;
  param_1[0xd3c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd3f);
  FUN_00f13d08(param_1 + 0xd25);
  FUN_00f0d3a4(param_1 + 0xcff);
  FUN_009c825c(param_1 + 0xcb1);
  FUN_00f01868(param_1 + 0xca0);
  param_1[0xbe1] = &PTR_FUN_027d5388;
  param_1[0xc7c] = &PTR_FUN_028266f0;
  param_1[0xc93] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc96);
  FUN_00f13d08(param_1 + 0xc7c);
  param_1[0xc5e] = &PTR_FUN_028266f0;
  param_1[0xc75] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc78);
  FUN_00f13d08(param_1 + 0xc5e);
  param_1[0xc40] = &PTR_FUN_028266f0;
  param_1[0xc57] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc5a);
  FUN_00f13d08(param_1 + 0xc40);
  FUN_00f01868(param_1 + 0xc2f);
  FUN_009c825c(param_1 + 0xbe1);
  param_1[0xbc3] = &PTR_FUN_028266f0;
  param_1[0xbda] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbdd);
  FUN_00f13d08(param_1 + 0xbc3);
  FUN_00f0d3a4(param_1 + 0xb9d);
  FUN_009c825c(param_1 + 0xb4f);
  FUN_00f01868(param_1 + 0xb3e);
  param_1[0xa7f] = &PTR_FUN_027d5388;
  param_1[0xb1a] = &PTR_FUN_028266f0;
  param_1[0xb31] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb34);
  FUN_00f13d08(param_1 + 0xb1a);
  param_1[0xafc] = &PTR_FUN_028266f0;
  param_1[0xb13] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb16);
  FUN_00f13d08(param_1 + 0xafc);
  param_1[0xade] = &PTR_FUN_028266f0;
  param_1[0xaf5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaf8);
  FUN_00f13d08(param_1 + 0xade);
  FUN_00f01868(param_1 + 0xacd);
  FUN_009c825c(param_1 + 0xa7f);
  param_1[0xa61] = &PTR_FUN_028266f0;
  param_1[0xa78] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa7b);
  FUN_00f13d08(param_1 + 0xa61);
  FUN_00f0d3a4(param_1 + 0xa3b);
  FUN_009c825c(param_1 + 0x9ed);
  FUN_00f01868(param_1 + 0x9dc);
  param_1[0x91d] = &PTR_FUN_027d5388;
  param_1[0x9b8] = &PTR_FUN_028266f0;
  param_1[0x9cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9d2);
  FUN_00f13d08(param_1 + 0x9b8);
  param_1[0x99a] = &PTR_FUN_028266f0;
  param_1[0x9b1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9b4);
  FUN_00f13d08(param_1 + 0x99a);
  param_1[0x97c] = &PTR_FUN_028266f0;
  param_1[0x993] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x996);
  FUN_00f13d08(param_1 + 0x97c);
  FUN_00f01868(param_1 + 0x96b);
  FUN_009c825c(param_1 + 0x91d);
  param_1[0x8ff] = &PTR_FUN_028266f0;
  param_1[0x916] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x919);
  FUN_00f13d08(param_1 + 0x8ff);
  FUN_00f0d3a4(param_1 + 0x8d9);
  FUN_009c825c(param_1 + 0x88b);
  FUN_00f01868(param_1 + 0x87a);
  FUN_00f0d3a4(param_1 + 0x854);
  FUN_00f0d3a4(param_1 + 0x82e);
  param_1[0x810] = &PTR_FUN_028266f0;
  param_1[0x827] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x82a);
  FUN_00f13d08(param_1 + 0x810);
  param_1[0x7f2] = &PTR_FUN_028266f0;
  param_1[0x809] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x80c);
  FUN_00f13d08(param_1 + 0x7f2);
  param_1[0x7d4] = &PTR_FUN_028266f0;
  param_1[0x7eb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7ee);
  FUN_00f13d08(param_1 + 0x7d4);
  FUN_00f13d08(param_1 + 0x7bd);
  FUN_00ed00e0(param_1 + 0x716);
  FUN_00f13d08(param_1 + 0x6e2);
  FUN_00f0d3a4(param_1 + 0x6bc);
  FUN_00f13d08(param_1 + 0x688);
  FUN_009c7fa8(param_1 + 0x3d0);
  FUN_009c7fa8(param_1 + 0x118);
  FUN_00f0d3a4(param_1 + 0xf2);
  FUN_00f0d3a4(param_1 + 0xcc);
  param_1[0xae] = &PTR_FUN_028266f0;
  param_1[0xc5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 200);
  FUN_00f13d08(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_028266f0;
  param_1[0xa7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaa);
  FUN_00f13d08(param_1 + 0x90);
  FUN_00f13d08(param_1 + 0x79);
  FUN_00cb9bb4(param_1 + 0x74);
  FUN_00948d58(param_1 + 0x70);
  FUN_00e835e0(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}

