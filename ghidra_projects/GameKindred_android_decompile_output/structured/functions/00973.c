// functions/00973 — 9 functions
#include "libGameKindred.h"




void FUN_0097374c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_027bca18;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_00970848(param_1 + 5);
  FUN_0096f970(param_1 + 0x18);
  FUN_0096f970(param_1 + 0x27);
  FUN_0096e130(param_1 + 0x36);
  FUN_0096ec2c(param_1 + 0x52);
  param_1[0x65] = &PTR_FUN_027bc9c8;
  FUN_008fcdb8(param_1 + 0x66,&DAT_0320ffa8);
  param_1[0x6a] = 0xffffffffffffffff;
  param_1[0x69] = 0xffffffffffffffff;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 1;
  param_1[0x6c] = &PTR_FUN_027bc9f0;
  param_1[0x6d] = 0;
  FUN_008fcdb8(param_1 + 0x72,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x75,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x78,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x7b,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x7e,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x81,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x84,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x87,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x8a,&DAT_0320ffa8);
  FUN_008fa54c(param_1 + 0x8d,"one_by_one");
  FUN_008fa54c(param_1 + 0x90,"marketFeedTestGroup");
  FUN_008fcdb8(param_1 + 0x93,&DAT_0320ffa8);
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  thunk_FUN_00e7051c(param_1 + 0x99,&DAT_03210450);
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  memset((void *)((long)param_1 + 0x514),0xff,0x70);
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)((long)param_1 + 0x584) = uVar1;
  *(undefined8 *)((long)param_1 + 0x58c) = 0x1000000;
  *(undefined2 *)((long)param_1 + 0x594) = 1;
  return;
}




void FUN_0097390c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_d0;
  byte local_c8;
  void *local_b8;
  byte local_b0;
  void *local_a0;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00970848(&local_d0);
  FUN_0096ff0c(param_1,&local_d0,param_2);
  local_d0 = &PTR_FUN_027bc950;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009739c4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_0096ae14(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x90;
  *(undefined ***)(lVar4 + -0x88) = &PTR_FUN_027bc900;
  *(undefined ***)(lVar4 + -0x90) = &PTR_FUN_027bc928;
  FUN_008fcdb8(lVar4 + -0x80,param_2 + 0x10);
  FUN_008fcdb8(lVar4 + -0x68,param_2 + 0x28);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x40);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_00973aac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_d0;
  undefined **ppuStack_c8;
  byte local_c0;
  void *local_b0;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  byte local_78;
  void *local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_d0 = &PTR_FUN_027bc928;
  FUN_0096f970((ulong)&local_d0 | 8);
  local_50 = 0;
  uStack_48 = 0;
  FUN_0096fa58(param_1,&local_d0,param_2);
  ppuStack_c8 = &PTR_FUN_027bc900;
  local_d0 = &PTR_FUN_027bc928;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00973b84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_118 [224];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0096e130(auStack_118);
  FUN_0096da44(param_1,auStack_118,param_2);
  FUN_0096e1d8(auStack_118);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00973bf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_d0;
  byte local_c8;
  void *local_b8;
  byte local_b0;
  void *local_a0;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0096ec2c(&local_d0);
  FUN_0096e29c(param_1,&local_d0,param_2);
  local_d0 = &PTR_FUN_027bc9a0;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00973cac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_70;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_027bc9c8;
  FUN_008fcdb8(local_68,&DAT_0320ffa8);
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0xffffffffffffffff;
  local_40 = 1;
  FUN_0096ed34(param_1,&local_70,param_2);
  local_70 = &PTR_FUN_027bc9c8;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00973d54(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_0096aab0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  *(undefined ***)(lVar4 + -0x30) = &PTR_FUN_027bc8d8;
  FUN_0096abb0(lVar4 + -0x28,param_2 + 8);
  *(undefined8 *)(lVar4 + -0xb) = *(undefined8 *)(param_2 + 0x25);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_00973e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bca18;
  FUN_00977c44(param_1 + 0x9d,1);
  FUN_00951534(param_1 + 0x9b,1);
  if ((void *)param_1[0x9a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9a]);
    param_1[0x9a] = 0;
    param_1[0x99] = 0;
  }
  if ((*(byte *)(param_1 + 0x96) & 1) != 0) {
    operator_delete((void *)param_1[0x98]);
  }
  if ((*(byte *)(param_1 + 0x93) & 1) != 0) {
    operator_delete((void *)param_1[0x95]);
  }
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    operator_delete((void *)param_1[0x92]);
  }
  if ((*(byte *)(param_1 + 0x8d) & 1) != 0) {
    operator_delete((void *)param_1[0x8f]);
  }
  if ((*(byte *)(param_1 + 0x8a) & 1) != 0) {
    operator_delete((void *)param_1[0x8c]);
  }
  if ((*(byte *)(param_1 + 0x87) & 1) != 0) {
    operator_delete((void *)param_1[0x89]);
  }
  if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
    operator_delete((void *)param_1[0x86]);
  }
  if ((*(byte *)(param_1 + 0x81) & 1) != 0) {
    operator_delete((void *)param_1[0x83]);
  }
  if ((*(byte *)(param_1 + 0x7e) & 1) != 0) {
    operator_delete((void *)param_1[0x80]);
  }
  if ((*(byte *)(param_1 + 0x7b) & 1) != 0) {
    operator_delete((void *)param_1[0x7d]);
  }
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    operator_delete((void *)param_1[0x7a]);
  }
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    operator_delete((void *)param_1[0x77]);
  }
  if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
    operator_delete((void *)param_1[0x74]);
  }
  if ((*(byte *)(param_1 + 0x6f) & 1) != 0) {
    operator_delete((void *)param_1[0x71]);
  }
  param_1[0x65] = &PTR_FUN_027bc9c8;
  if ((*(byte *)(param_1 + 0x66) & 1) != 0) {
    operator_delete((void *)param_1[0x68]);
  }
  param_1[0x52] = &PTR_FUN_027bc9a0;
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    operator_delete((void *)param_1[0x5e]);
  }
  if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
    operator_delete((void *)param_1[0x5b]);
  }
  if ((*(byte *)(param_1 + 0x56) & 1) != 0) {
    operator_delete((void *)param_1[0x58]);
  }
  if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
    operator_delete((void *)param_1[0x55]);
  }
  FUN_0096e1d8(param_1 + 0x36);
  param_1[0x27] = &PTR_FUN_027bc900;
  if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
    operator_delete((void *)param_1[0x33]);
  }
  if ((*(byte *)(param_1 + 0x2e) & 1) != 0) {
    operator_delete((void *)param_1[0x30]);
  }
  if ((*(byte *)(param_1 + 0x2b) & 1) != 0) {
    operator_delete((void *)param_1[0x2d]);
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete((void *)param_1[0x2a]);
  }
  param_1[0x18] = &PTR_FUN_027bc900;
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    operator_delete((void *)param_1[0x24]);
  }
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    operator_delete((void *)param_1[0x1b]);
  }
  param_1[5] = &PTR_FUN_027bc950;
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00977d38(param_1 + 3,1);
  FUN_00977db0(param_1 + 1,1);
  return;
}

