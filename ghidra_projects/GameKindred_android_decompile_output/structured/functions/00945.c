// functions/00945 — 24 functions
#include "libGameKindred.h"




undefined8 * FUN_00945020(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_027baec0;
      *puVar2 = 0;
      puVar2[2] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 FUN_00945090(long param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    uVar3 = FUN_00d9ed38(lVar1,*(undefined4 *)(param_1 + 0x1c));
    if (*(char *)(param_1 + 0x20) != '\0') {
      fVar2 = (float)FUN_00d9ed48(lVar1,*(undefined4 *)(param_1 + 0x1c));
      fVar5 = (float)uVar3;
      uVar3 = 0;
      if (1.1920929e-07 <= ABS(fVar2)) {
        uVar3 = (ulong)(uint)(fVar5 / fVar2);
      }
    }
    uVar4 = FUN_00944f88(param_1 + 8,param_2,0);
    uVar4 = FUN_00d99988(uVar3,uVar4,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return uVar4;
  }
  return 0;
}




undefined8 * FUN_00945148(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)((long)puVar1 + 0xc) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027baee8;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_009451a8(long param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  
  if (*param_2 == 0) {
    bVar1 = false;
  }
  else {
    bVar2 = FUN_00d99d68(*param_2,param_1 + 8,*(undefined1 *)(param_1 + 0xc));
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0xd);
  }
  return bVar1;
}




undefined8 * FUN_009451f4(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = &PTR_FUN_027baf10;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00945254(long param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  
  if (*param_2 == 0) {
    bVar1 = false;
  }
  else {
    bVar2 = FUN_00d99e94(*param_2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0x14);
  }
  return bVar1;
}




undefined8 * FUN_009452a0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027baf38;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_009452f4(void)

{
  return;
}




void FUN_009452fc(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    FUN_00d99fe0();
    return;
  }
  return;
}




undefined8 * FUN_0094530c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar2[-1] == 0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_027baf60;
      FUN_00d9a250();
      puVar2[-1] = puVar2;
      return puVar2;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 7;
  } while (uVar1 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00945380(long param_1)

{
  FUN_00d9a258(param_1 + 8);
  return;
}




undefined8 * FUN_00945388(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027baf88;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_009453e4(long param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  
  if (*param_2 == 0) {
    bVar1 = false;
  }
  else {
    bVar2 = FUN_00d99f5c(*param_2);
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 8);
  }
  return bVar1;
}




byte * FUN_00945428(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = 0;
  pbVar2 = (byte *)(param_1 + 0x3c);
  do {
    if (*(long *)(pbVar2 + -0x34) == 0) {
      pbVar1 = pbVar2 + -0x2c;
      *(undefined ***)pbVar1 = &PTR_FUN_027bafb0;
      pbVar2[-0x1c] = 1;
      pbVar2[-0x1b] = 0;
      pbVar2[-0x1a] = 0;
      pbVar2[-0x19] = 0;
      pbVar2[-0x14] = 0;
      pbVar2[-0x13] = 0;
      pbVar2[-0x12] = 0x80;
      pbVar2[-0x11] = 0xbf;
      pbVar2[-0xc] = 1;
      pbVar2[-0xb] = 0;
      pbVar2[-10] = 0;
      pbVar2[-9] = 0;
      pbVar2[-4] = 0;
      pbVar2[-3] = 0;
      pbVar2[-2] = 0;
      pbVar2[-1] = 0;
      *pbVar2 = *pbVar2 | 7;
      *(byte **)(pbVar2 + -0x34) = pbVar1;
      return pbVar1;
    }
    uVar3 = uVar3 + 1;
    pbVar2 = pbVar2 + 0x38;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (byte *)0xbadbad11;
}




uint FUN_009454ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = 0;
  if (((*(byte *)(param_1 + 0x2c) ^ 0xff) & 7) != 0) {
    uVar1 = *param_2;
  }
  FUN_00945554(param_1 + 8,param_2,uVar1,auStack_40);
  FUN_00944f88(param_1 + 0x18,param_2,0);
  bVar2 = *(byte *)(param_1 + 0x2c);
  uVar4 = FUN_00d999f8(auStack_40,*(undefined4 *)(param_1 + 0x28),uVar1,bVar2 & 1,bVar2 >> 1 & 1,
                       bVar2 >> 2 & 1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00945554(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 1) == 4) {
    *param_4 = 0;
    (*(code *)*param_1)(param_2,param_4);
  }
  else if (*(int *)(param_1 + 1) == 3) {
    local_30[0] = *(undefined4 *)param_1;
    FUN_00da2924(local_30,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_009455d4(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027bafd8;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_0094562c(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    FUN_00d99f68();
    return;
  }
  return;
}




undefined8 * FUN_0094563c(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027bb000;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 FUN_00945698(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 != 0) {
    uVar1 = FUN_00d99ae4(*param_2,*(undefined4 *)(param_1 + 8));
    return uVar1;
  }
  return 0;
}




void FUN_009456b4(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  
  *(ushort **)(param_1 + 200) = param_1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  *param_1 = *param_1 & 0x8000 | 0x3ff;
  puVar15 = param_1 + 4;
  puVar15[0] = 0;
  puVar15[1] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  memset(param_1 + 0xdc,0,0x60);
  FUN_008fa54c(param_1 + 0x10c,&DAT_01b95f90);
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  FUN_00e70314(param_1 + 0x134);
  FUN_00e7f9b8(param_1 + 0x148);
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  FUN_00e84dac(param_1 + 0x17c);
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  *(undefined ***)(param_1 + 0x17c) = &PTR_FUN_027bb028;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1bc] = 0x400;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  puVar8 = operator_new(0x28);
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[1] = 0x10000;
  puVar8[2] = 0;
  *puVar8 = 0;
  *(undefined8 **)(param_1 + 0x1a0) = puVar8;
  *(undefined8 **)(param_1 + 0x1a4) = puVar8;
  param_1[0x240] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  memset(param_1 + 0x1c8,0,0x90);
  memset(param_1 + 0x214,0,0x48);
  *(ushort **)(param_1 + 0x244) = param_1 + 0x248;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  memset(param_1 + 0x274,0,0x48);
  memset(param_1 + 0x29c,0,0x60);
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  param_1[0x2db] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  memset(param_1 + 0x2ec,0,0x48);
  FUN_00e84dac(param_1 + 0x314);
  uVar7 = *param_1;
  uVar6 = uVar7 & 0xffff83ff;
  uVar1 = (uVar7 + 0x400 & 0x7c00 | uVar6) + 0x400;
  uVar2 = (uVar1 & 0x7c00 | uVar6) + 0x400;
  uVar3 = (uVar2 & 0x7c00 | uVar6) + 0x400;
  uVar4 = (uVar3 & 0x7c00 | uVar6) + 0x400;
  uVar5 = (uVar4 & 0x7c00 | uVar6) + 0x400;
  puVar9 = puVar15 + (ulong)(uVar7 >> 10 & 0x1f) * 0x1c;
  puVar10 = puVar15 + (ulong)(uVar7 + 0x400 >> 10 & 0x1f) * 0x1c;
  puVar11 = puVar15 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  puVar12 = puVar15 + (ulong)(uVar2 >> 10 & 0x1f) * 0x1c;
  puVar13 = puVar15 + (ulong)(uVar3 >> 10 & 0x1f) * 0x1c;
  puVar14 = puVar15 + (ulong)(uVar4 >> 10 & 0x1f) * 0x1c;
  puVar15 = puVar15 + (ulong)(uVar5 >> 10 & 0x1f) * 0x1c;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  *(undefined ***)(param_1 + 0x314) = &PTR_FUN_027bb058;
  puVar9[0] = 0;
  puVar9[1] = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x1b] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar10[0] = 1;
  puVar10[1] = 0;
  *(code **)(puVar10 + 4) = FUN_00945b04;
  *(code **)(puVar10 + 0xc) = thunk_FUN_00e83724;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar11[0] = 4;
  puVar11[1] = 0;
  *(code **)(puVar11 + 4) = FUN_00945c04;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0x14] = 0;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[0x17] = 0;
  puVar11[0x18] = 0;
  puVar11[0x19] = 0;
  puVar11[0x1a] = 0;
  puVar11[0x1b] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar12[0] = 2;
  puVar12[1] = 0;
  puVar12[0x14] = 0;
  puVar12[0x15] = 0;
  puVar12[0x16] = 0;
  puVar12[0x17] = 0;
  puVar12[0x18] = 0;
  puVar12[0x19] = 0;
  puVar12[0x1a] = 0;
  puVar12[0x1b] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0x13] = 0;
  *(code **)(puVar12 + 4) = FUN_00945d60;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar13[0] = 5;
  puVar13[1] = 0;
  puVar13[0x14] = 0;
  puVar13[0x15] = 0;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0;
  puVar13[0x18] = 0;
  puVar13[0x19] = 0;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0;
  puVar13[0x11] = 0;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  *(code **)(puVar13 + 4) = FUN_00946090;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  *(code **)(puVar14 + 0xc) = FUN_00946214;
  puVar14[0x10] = 0;
  puVar14[0x11] = 0;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0;
  puVar14[0] = 6;
  puVar14[1] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  *(code **)(puVar14 + 4) = FUN_00946140;
  puVar14[0x14] = 0;
  puVar14[0x15] = 0;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0;
  puVar14[0x18] = 0;
  puVar14[0x19] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x1b] = 0;
  puVar15[0] = 3;
  puVar15[1] = 0;
  puVar15[0x14] = 0;
  puVar15[0x15] = 0;
  puVar15[0x16] = 0;
  puVar15[0x17] = 0;
  puVar15[0x18] = 0;
  puVar15[0x19] = 0;
  puVar15[0x1a] = 0;
  puVar15[0x1b] = 0;
  puVar15[0xc] = 0;
  puVar15[0xd] = 0;
  puVar15[0xe] = 0;
  puVar15[0xf] = 0;
  puVar15[0x10] = 0;
  puVar15[0x11] = 0;
  puVar15[0x12] = 0;
  puVar15[0x13] = 0;
  *(code **)(puVar15 + 4) = FUN_00946288;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  *param_1 = ((ushort)uVar5 & 0x7c00 | (ushort)uVar6) + 0x400 & 0x7c00 | (ushort)uVar6;
  FUN_00946434(param_1,0,1);
  FUN_00946434(param_1,1,2);
  FUN_00946434(param_1,2,4);
  FUN_00946434(param_1,2,1);
  FUN_00946434(param_1,1,5);
  FUN_00946434(param_1,4,1);
  FUN_00946434(param_1,4,5);
  FUN_00946434(param_1,5,1);
  FUN_00946434(param_1,5,6);
  FUN_00946434(param_1,6,1);
  FUN_00946434(param_1,2,3);
  FUN_00946434(param_1,3,4);
  FUN_00946434(param_1,3,1);
  FUN_009464bc(param_1);
  puVar8 = operator_new(0x10);
  *puVar8 = &PTR_FUN_027bb088;
  puVar8[1] = param_1;
  *(undefined8 **)(param_1 + 0x330) = puVar8;
  thunk_FUN_00ec92f4();
  return;
}




void FUN_00945b04(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  timespec local_50;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x279) != '\0') {
    clock_gettime(1,&local_50);
    lVar4 = local_50.tv_nsec - *(long *)(param_1 + 0x270);
    lVar3 = local_50.tv_sec - *(long *)(param_1 + 0x268);
    if (lVar4 < 0) {
      lVar3 = lVar3 + -1;
      lVar4 = (local_50.tv_nsec + 1000000000) - *(long *)(param_1 + 0x270);
    }
    if (5.0 < (double)(lVar4 + lVar3 * 1000000000) * 1e-09) {
      local_50.tv_sec = 0;
      local_50.tv_nsec = 0;
      local_40 = (void *)0x0;
      uVar2 = FUN_00e81200(&local_50);
      if ((uVar2 & 1) != 0) {
        FUN_0094783c(param_1);
        FUN_00946864(param_1,5,0,0);
      }
      FUN_00e70314(param_1 + 0x268);
      if ((local_50.tv_sec & 1U) != 0) {
        operator_delete(local_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00945c04(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00e829e0();
  uVar2 = FUN_00e83340();
  if ((uVar2 < 2) || (*(int *)(lVar3 + 0xa0) != 0)) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    uVar4 = FUN_00e81200(local_50);
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x278) == '\0')) {
      local_68[0] = 0;
      local_68[1] = 0;
      local_58 = (void *)0x0;
      FUN_00e81238(local_68);
      FUN_00938788(local_68,param_1 + 0x1d0,local_50,0);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      *(undefined1 *)(param_1 + 0x278) = 1;
      FUN_0094783c(param_1);
      FUN_00946864(param_1,5,0,0);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    goto LAB_00945d38;
  }
  if (uVar2 == 0xfffffff2) {
    uVar5 = 3;
LAB_00945d14:
    uVar6 = 1;
  }
  else {
    if (uVar2 == 0xfffffff3) {
      FUN_00e84dec(param_1 + 0x2f8);
      FUN_00e84e8c(param_1 + 0x2f8);
      *(undefined4 *)(param_1 + 800) = 0xfffffff3;
      uVar5 = 6;
      goto LAB_00945d14;
    }
    if (uVar2 == 0xfffffffd) {
      uVar5 = 4;
      goto LAB_00945d14;
    }
    uVar5 = 1;
    uVar6 = 0;
  }
  FUN_009478b4(param_1,uVar5,1,uVar6);
LAB_00945d38:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00945d60(long param_1)

{
  void *pvVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  byte local_c8 [16];
  void *local_b8;
  undefined4 local_ac;
  ulong local_a8 [2];
  void *local_98;
  ulong local_90 [2];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(char *)(param_1 + 0x2e4) == '\0') goto LAB_00946064;
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = (void *)0x0;
  FUN_00938640(local_60,&local_ac,local_78,local_90,local_a8);
  bVar4 = *(byte *)(param_1 + 0x2c8);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x2d0);
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    pvVar11 = *(void **)(param_1 + 0x2d8);
    if ((bVar4 & 1) == 0) {
      pvVar11 = (void *)(param_1 + 0x2c9);
    }
    pcVar8 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar9 = (char *)(param_1 + 0x2c9);
        lVar10 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00945e5c;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar11,pcVar8,sVar2), iVar6 != 0)) goto LAB_00945e5c;
LAB_00945eb4:
    FUN_00937bb4(local_c8);
    pvVar11 = (void *)((ulong)local_c8 | 1);
    if ((local_c8[0] & 1) != 0) {
      pvVar11 = local_b8;
    }
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
    FUN_00901cd4(pvVar11,pvVar1,local_ac,&DAT_01e277f2,0);
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
  }
  else {
LAB_00945e5c:
    if (*(int *)(param_1 + 0x2e0) < 1) goto LAB_00945eb4;
    FUN_00937bb4(local_c8);
    pvVar11 = (void *)((ulong)local_c8 | 1);
    if ((local_c8[0] & 1) != 0) {
      pvVar11 = local_b8;
    }
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
    if ((*(byte *)(param_1 + 0x2c8) & 1) == 0) {
      lVar10 = param_1 + 0x2c9;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x2d8);
    }
    FUN_00901cd4(pvVar11,pvVar1,local_ac,lVar10,*(undefined4 *)(param_1 + 0x2e0));
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    FUN_008fce60(local_60,(byte *)(param_1 + 0x2c8));
    local_ac = *(undefined4 *)(param_1 + 0x2e0);
  }
  uVar7 = thunk_FUN_00ec9300();
  if ((uVar7 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 0x1e8);
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x1f0);
    }
    sVar3 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    if (sVar2 == sVar3) {
      pvVar11 = *(void **)(param_1 + 0x1f8);
      if ((bVar4 & 1) == 0) {
        pvVar11 = (void *)(param_1 + 0x1e9);
      }
      pcVar8 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar8 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar9 = (char *)(param_1 + 0x1e9);
          lVar10 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar9 != *pcVar8) goto LAB_00945ff0;
            pcVar9 = pcVar9 + 1;
            lVar10 = lVar10 + 1;
            pcVar8 = pcVar8 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar11,pcVar8,sVar2), iVar6 != 0))
      goto LAB_00945ff0;
    }
    else {
LAB_00945ff0:
      FUN_008fce60(local_78,param_1 + 0x1e8);
      FUN_008fce60(local_90,param_1 + 0x200);
    }
    FUN_0094723c(param_1,local_78,local_90,local_a8,local_60,local_ac);
  }
  else {
    FUN_00946864(param_1,3,0,0);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00946064:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

