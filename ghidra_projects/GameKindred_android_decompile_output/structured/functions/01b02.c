// functions/01b02 — 1 functions
#include "libGameKindred.h"




void FUN_01b02f80(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  DES_cblock *key;
  DES_cblock *key_00;
  ulong uVar3;
  DES_key_schedule DStack_e0;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  
  if (param_3 != 0) {
    key = (DES_cblock *)(param_1 + 0xc);
    local_58 = (uint)(*key)[0];
    key_00 = (DES_cblock *)(param_1 + 0x14);
    local_60 = (uint)(*key_00)[0];
    uVar3 = 0;
    do {
      uVar1 = *(uint *)(param_2 + uVar3);
      uVar2 = ((uint *)(param_2 + uVar3))[1];
      *(byte *)(param_1 + 0xc) = (byte)local_58 & 0x9f | 0x40;
      *(byte *)(param_1 + 0x14) = (byte)local_60 & 0xbf | 0x20;
      local_60 = uVar1;
      uStack_5c = uVar2;
      local_58 = uVar1;
      uStack_54 = uVar2;
      DES_set_odd_parity(key);
      DES_set_key_unchecked(key,&DStack_e0);
      DES_encrypt1(&local_58,&DStack_e0,1);
      DES_set_odd_parity(key_00);
      DES_set_key_unchecked(key_00,&DStack_e0);
      DES_encrypt1(&local_60,&DStack_e0,1);
      uVar3 = uVar3 + 8;
      local_58 = local_58 ^ uVar1;
      *(char *)(param_1 + 0xd) = (char)(local_58 >> 8);
      uStack_5c = uStack_5c ^ uVar2;
      *(char *)(param_1 + 0xe) = (char)(local_58 >> 0x10);
      *(char *)(param_1 + 0xf) = (char)(local_58 >> 0x18);
      local_60 = local_60 ^ uVar1;
      *(char *)(param_1 + 0x11) = (char)(uStack_5c >> 8);
      *(char *)(param_1 + 0x10) = (char)uStack_5c;
      *(char *)(param_1 + 0x12) = (char)(uStack_5c >> 0x10);
      uStack_54 = uStack_54 ^ uVar2;
      *(char *)(param_1 + 0x13) = (char)(uStack_5c >> 0x18);
      *(char *)(param_1 + 0x15) = (char)(local_60 >> 8);
      *(char *)(param_1 + 0x18) = (char)uStack_54;
      *(char *)(param_1 + 0x16) = (char)(local_60 >> 0x10);
      *(char *)(param_1 + 0x17) = (char)(local_60 >> 0x18);
      *(char *)(param_1 + 0xc) = (char)local_58;
      *(char *)(param_1 + 0x14) = (char)local_60;
      *(char *)(param_1 + 0x19) = (char)(uStack_54 >> 8);
      *(char *)(param_1 + 0x1a) = (char)(uStack_54 >> 0x10);
      *(char *)(param_1 + 0x1b) = (char)(uStack_54 >> 0x18);
    } while (uVar3 < param_3);
  }
  return;
}

