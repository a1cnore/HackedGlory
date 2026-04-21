// functions/01b00 — 1 functions
#include "libGameKindred.h"




void FUN_01b00f94(byte *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  *param_1 = (byte)((uint)bVar3 + (uint)bVar4);
  uVar1 = (uint)param_1[1] + ((uint)bVar3 + (uint)bVar4 >> 8) + (uint)param_2[1];
  param_1[1] = (byte)uVar1;
  uVar1 = (uint)param_1[2] + (uVar1 >> 8) + (uint)param_2[2];
  param_1[2] = (byte)uVar1;
  uVar1 = (uint)param_1[3] + (uVar1 >> 8) + (uint)param_2[3];
  param_1[3] = (byte)uVar1;
  uVar1 = (uint)param_1[4] + (uVar1 >> 8) + (uint)param_2[4];
  param_1[4] = (byte)uVar1;
  uVar1 = (uint)param_1[5] + (uVar1 >> 8) + (uint)param_2[5];
  param_1[5] = (byte)uVar1;
  uVar1 = (uint)param_1[6] + (uVar1 >> 8) + (uint)param_2[6];
  param_1[6] = (byte)uVar1;
  uVar1 = (uint)param_1[7] + (uVar1 >> 8) + (uint)param_2[7];
  param_1[7] = (byte)uVar1;
  uVar1 = (uint)param_1[8] + (uVar1 >> 8) + (uint)param_2[8];
  param_1[8] = (byte)uVar1;
  uVar1 = (uint)param_1[9] + (uVar1 >> 8) + (uint)param_2[9];
  param_1[9] = (byte)uVar1;
  uVar1 = (uint)param_1[10] + (uVar1 >> 8) + (uint)param_2[10];
  param_1[10] = (byte)uVar1;
  uVar1 = (uint)param_1[0xb] + (uVar1 >> 8) + (uint)param_2[0xb];
  param_1[0xb] = (byte)uVar1;
  uVar1 = (uint)param_1[0xc] + (uVar1 >> 8) + (uint)param_2[0xc];
  param_1[0xc] = (byte)uVar1;
  uVar1 = (uint)param_1[0xd] + (uVar1 >> 8) + (uint)param_2[0xd];
  param_1[0xd] = (byte)uVar1;
  uVar1 = (uint)param_1[0xe] + (uVar1 >> 8) + (uint)param_2[0xe];
  param_1[0xe] = (byte)uVar1;
  uVar1 = (uint)param_1[0xf] + (uVar1 >> 8) + (uint)param_2[0xf];
  param_1[0xf] = (byte)uVar1;
  uVar1 = (uint)param_1[0x10] + (uVar1 >> 8) + (uint)param_2[0x10];
  param_1[0x10] = (byte)uVar1;
  uVar1 = (uint)param_1[0x11] + (uVar1 >> 8) + (uint)param_2[0x11];
  param_1[0x11] = (byte)uVar1;
  uVar1 = (uint)param_1[0x12] + (uVar1 >> 8) + (uint)param_2[0x12];
  param_1[0x12] = (byte)uVar1;
  uVar1 = (uint)param_1[0x13] + (uVar1 >> 8) + (uint)param_2[0x13];
  param_1[0x13] = (byte)uVar1;
  uVar1 = (uint)param_1[0x14] + (uVar1 >> 8) + (uint)param_2[0x14];
  param_1[0x14] = (byte)uVar1;
  uVar1 = (uint)param_1[0x15] + (uVar1 >> 8) + (uint)param_2[0x15];
  param_1[0x15] = (byte)uVar1;
  uVar1 = (uint)param_1[0x16] + (uVar1 >> 8) + (uint)param_2[0x16];
  param_1[0x16] = (byte)uVar1;
  uVar1 = (uint)param_1[0x17] + (uVar1 >> 8) + (uint)param_2[0x17];
  param_1[0x17] = (byte)uVar1;
  uVar1 = (uint)param_1[0x18] + (uVar1 >> 8) + (uint)param_2[0x18];
  param_1[0x18] = (byte)uVar1;
  uVar1 = (uint)param_1[0x19] + (uVar1 >> 8) + (uint)param_2[0x19];
  param_1[0x19] = (byte)uVar1;
  uVar1 = (uint)param_1[0x1a] + (uVar1 >> 8) + (uint)param_2[0x1a];
  param_1[0x1a] = (byte)uVar1;
  uVar1 = (uint)param_1[0x1b] + (uVar1 >> 8) + (uint)param_2[0x1b];
  param_1[0x1b] = (byte)uVar1;
  uVar1 = (uint)param_1[0x1c] + (uVar1 >> 8) + (uint)param_2[0x1c];
  param_1[0x1c] = (byte)uVar1;
  uVar1 = (uint)param_1[0x1d] + (uVar1 >> 8) + (uint)param_2[0x1d];
  param_1[0x1d] = (byte)uVar1;
  iVar2 = (uint)param_1[0x1e] + (uVar1 >> 8) + (uint)param_2[0x1e];
  param_1[0x1e] = (byte)iVar2;
  param_1[0x1f] = param_2[0x1f] + param_1[0x1f] + (char)((uint)iVar2 >> 8);
  return;
}

