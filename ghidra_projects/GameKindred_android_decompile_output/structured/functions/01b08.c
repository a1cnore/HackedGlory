// functions/01b08 — 1 functions
#include "libGameKindred.h"




void FUN_01b08fcc(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_90 [4];
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_90[1] = param_3 & 0x1fffffffffffffff;
  local_90[2] = local_90[1] << 1;
  local_50 = param_3 << 3;
  local_70 = local_90[1] << 2;
  local_90[3] = local_90[2] ^ local_90[1];
  local_90[0] = 0;
  uStack_68 = local_70 ^ local_90[1];
  local_60 = local_90[2] ^ local_70;
  uStack_58 = local_90[3] ^ local_70;
  uStack_48 = local_90[1] ^ local_50;
  local_40 = local_90[2] ^ local_50;
  local_38 = local_90[3] ^ local_50;
  local_30 = local_70 ^ local_50;
  local_28 = local_70 ^ local_90[1] ^ local_50;
  local_20 = local_90[2] ^ local_70 ^ local_50;
  local_18 = local_90[3] ^ local_70 ^ local_50;
  uVar2 = *(ulong *)((long)local_90 + (param_4 >> 0x39 & 0x78));
  uVar1 = local_90[param_4 & 0xf] ^ local_90[param_4 >> 4 & 0xf] << 4 ^
          local_90[param_4 >> 8 & 0xf] << 8 ^ local_90[param_4 >> 0xc & 0xf] << 0xc ^
          local_90[param_4 >> 0x10 & 0xf] << 0x10 ^ local_90[param_4 >> 0x14 & 0xf] << 0x14 ^
          local_90[param_4 >> 0x18 & 0xf] << 0x18 ^ local_90[param_4 >> 0x1c & 0xf] << 0x1c ^
          local_90[param_4 >> 0x20 & 0xf] << 0x20 ^ local_90[param_4 >> 0x24 & 0xf] << 0x24 ^
          local_90[param_4 >> 0x28 & 0xf] << 0x28 ^ local_90[param_4 >> 0x2c & 0xf] << 0x2c ^
          local_90[param_4 >> 0x30 & 0xf] << 0x30 ^ local_90[param_4 >> 0x34 & 0xf] << 0x34 ^
          local_90[param_4 >> 0x38 & 0xf] << 0x38 ^ uVar2 << 0x3c;
  uVar2 = local_90[param_4 >> 8 & 0xf] >> 0x38 ^ local_90[param_4 >> 4 & 0xf] >> 0x3c ^
          local_90[param_4 >> 0xc & 0xf] >> 0x34 ^ local_90[param_4 >> 0x10 & 0xf] >> 0x30 ^
          local_90[param_4 >> 0x14 & 0xf] >> 0x2c ^ local_90[param_4 >> 0x18 & 0xf] >> 0x28 ^
          local_90[param_4 >> 0x1c & 0xf] >> 0x24 ^ local_90[param_4 >> 0x20 & 0xf] >> 0x20 ^
          local_90[param_4 >> 0x24 & 0xf] >> 0x1c ^ local_90[param_4 >> 0x28 & 0xf] >> 0x18 ^
          local_90[param_4 >> 0x2c & 0xf] >> 0x14 ^ local_90[param_4 >> 0x30 & 0xf] >> 0x10 ^
          local_90[param_4 >> 0x34 & 0xf] >> 0xc ^ local_90[param_4 >> 0x38 & 0xf] >> 8 ^ uVar2 >> 4
  ;
  if ((param_3 >> 0x3d & 1) != 0) {
    uVar1 = uVar1 ^ param_4 << 0x3d;
    uVar2 = uVar2 ^ param_4 >> 3;
  }
  if ((param_3 >> 0x3e & 1) != 0) {
    uVar1 = uVar1 ^ param_4 << 0x3e;
    uVar2 = uVar2 ^ param_4 >> 2;
  }
  if ((long)param_3 < 0) {
    uVar1 = uVar1 ^ param_4 << 0x3f;
    uVar2 = uVar2 ^ param_4 >> 1;
  }
  *param_1 = uVar2;
  *param_2 = uVar1;
  return;
}

