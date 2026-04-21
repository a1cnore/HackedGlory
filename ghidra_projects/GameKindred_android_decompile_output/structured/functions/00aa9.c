// functions/00aa9 — 14 functions
#include "libGameKindred.h"




void FUN_00aa95ec(float param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = CONCAT44((int)(param_1 + -10.0),(int)(param_1 + -10.0));
  uVar2 = (uint)(param_1 + -18.0);
  FUN_00f13f2c(param_2 + 0x2f8,uVar1);
  FUN_00f13f2c(param_2 + 0x3b0,uVar1);
  uVar1 = CONCAT44(uVar2,uVar2);
  FUN_00f13f2c(param_2 + 0x488,uVar1);
  FUN_00f13f2c(param_2 + 0xd20,CONCAT44((int)((float)uVar2 * 0.4),uVar2));
  if ((*(float *)(param_2 + 0x5c0) != 1.27) || (*(float *)(param_2 + 0x5c4) != 1.27)) {
    *(undefined8 *)(param_2 + 0x5c0) = 0x3fa28f5c3fa28f5c;
    FUN_0091ada4(param_2 + 0x578);
  }
  FUN_00f13f2c(param_2 + 0x578,uVar1);
  FUN_00f13f2c(param_2 + 0x668,uVar1);
  FUN_00f13f2c(param_2 + 0x758,uVar1);
  FUN_00f13f2c(param_2 + 0x848,uVar1);
  FUN_00f13f2c(param_2 + 0x938,uVar1);
  FUN_00aa96f8(param_2);
  return;
}




void FUN_00aa96f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  FUN_00f07a18(0,0,param_1 + 0x2f8,8);
  FUN_00f07a18(0,0,param_1 + 0x3b0,8);
  lVar1 = param_1 + 0x488;
  FUN_00f07a18(0,0,lVar1,8);
  FUN_00f07a18(0,0,param_1 + 0x578,8);
  FUN_00f07a18(0,0,param_1 + 0x668,8);
  FUN_00f07a18(0,0,param_1 + 0x758,8);
  FUN_00f07a18(0,0,param_1 + 0x848,8);
  lVar3 = param_1 + 0xa10;
  FUN_00f07940(0x40a00000,0x40a00000,lVar3,0,lVar1,0);
  FUN_00f07a18(0,0,param_1 + 0xb00,8);
  FUN_00f07b18(0x40a00000,param_1 + 0xbf0,3,lVar3,1);
  FUN_00f07b18(0,param_1 + 0xbf0,5,lVar3,5);
  FUN_00f07940(0,0,param_1 + 0xd20,6,lVar1,6);
  lVar3 = param_1 + 0xe10;
  fVar4 = (float)FUN_00f0e700(lVar1);
  FUN_00f0db64(fVar4 * 0.95,0,0x3f800000,lVar3);
  FUN_00f0a6f4(0,0xc1a00000,lVar3,6,lVar1,6);
  fVar4 = (float)FUN_00f0e700(lVar1);
  FUN_00f0db64(fVar4 * 0.8,0,0x3f800000,param_1 + 0x1098);
  lVar2 = param_1 + 0xf40;
  FUN_00f13238(lVar2);
  FUN_00f13db4(lVar2);
  FUN_00f07b18(0xc1200000,*(undefined8 *)(param_1 + 0x13b0),2,lVar1,2);
  FUN_00f07b18(0,*(undefined8 *)(param_1 + 0x13b0),4,lVar1,4);
  if ((*(byte *)(param_1 + 0xe94) >> 2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x13b0);
  }
  FUN_00f07940(0,0,lVar2,6,lVar3,4);
  return;
}




void FUN_00aa9930(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_00a9bbc4(param_1 + 0x488);
  FUN_00f0d75c(param_1 + 0xe10,param_3);
  *(uint *)(param_1 + 0xfc4) =
       *(uint *)(param_1 + 0xfc4) & 0xfffffff8 | *(uint *)(param_1 + 0xfc4) & 3 | (param_4 & 1) << 2
  ;
  FUN_00aa96f8(param_1);
  return;
}




void FUN_00aa9984(long param_1)

{
  *(uint *)(param_1 + 0x5fc) = *(uint *)(param_1 + 0x5fc) & 0xfffffffb;
  *(uint *)(param_1 + 0x6ec) = *(uint *)(param_1 + 0x6ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x8cc) = *(uint *)(param_1 + 0x8cc) & 0xfffffffb;
  *(uint *)(param_1 + 0xc74) = *(uint *)(param_1 + 0xc74) & 0xfffffffb;
  *(uint *)(param_1 + 0xa94) = *(uint *)(param_1 + 0xa94) & 0xfffffffb;
  *(uint *)(param_1 + 0x7dc) =
       *(uint *)(param_1 + 0x7dc) & 0xfffffffb | ((uint)*(byte *)(param_1 + 0x13bc) << 2 ^ 4) & 0xfc
  ;
  return;
}




void FUN_00aa99e8(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(uint *)(param_3 + 0xc74) =
       *(uint *)(param_3 + 0xc74) & 0xfffffff8 |
       *(uint *)(param_3 + 0xc74) & 3 | (uint)(param_4 != 0) << 2;
  *(uint *)(param_3 + 0xa94) =
       *(uint *)(param_3 + 0xa94) & 0xfffffff8 |
       *(uint *)(param_3 + 0xa94) & 3 | (uint)(param_4 != 0) << 2;
  if (param_4 != 0) {
    lVar1 = param_3 + 0xbf0;
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,&DAT_01b95634,param_4);
    FUN_00f0d75c(lVar1,&local_68);
    FUN_00f0d4e0(lVar1);
    fVar3 = param_2 + -10.0;
    FUN_00f0d4e0(lVar1);
    FUN_00f13f2c(param_3 + 0xb00,CONCAT44((int)(param_2 + -10.0),(int)fVar3));
    local_70 = (float)FUN_00f0e700(param_3 + 0xb00);
    local_70 = local_70 * 1.1;
    fStack_6c = param_2 * 1.1;
    FUN_00f13f18(param_3 + 0xa10,&local_70);
    FUN_00aa96f8(param_3);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa9b14(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x5fc) = *(uint *)(param_1 + 0x5fc) & 0xfffffffb;
  FUN_00f01980(param_1 + 0x240);
  uVar1 = FUN_00eff63c(*(undefined4 *)(param_1 + 0x13b8),*(undefined4 *)(param_1 + 0x13b8),
                       0x3dcccccd,0);
  FUN_00efcb24(uVar1,FUN_00aa89f4);
  FUN_00f022a0(param_1 + 0x240,uVar1);
  return;
}




void FUN_00aa9b78(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  *(uint *)(param_1 + 0x5fc) = *(uint *)(param_1 + 0x5fc) | 4;
  FUN_00f01980(param_1 + 0x240);
  fVar2 = *(float *)(param_1 + 0x13b8) * 1.1;
  uVar1 = FUN_00eff63c(fVar2,fVar2,0x3dcccccd,0);
  FUN_00efcb24(uVar1,FUN_00aa89f4);
  FUN_00f022a0(param_1 + 0x240,uVar1);
  return;
}




void FUN_00aa9be8(long param_1)

{
  *(uint *)(param_1 + 0x6ec) = *(uint *)(param_1 + 0x6ec) | 4;
  return;
}




void FUN_00aa9bf8(long param_1,ulong param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_01ba3e3c;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_01ba3e40;
  }
  FUN_00f0e670(param_1 + 0x758,puVar1,2);
  uVar2 = *(uint *)(param_1 + 0x7dc);
  if ((uVar2 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x7dc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
    FUN_0091ada4(param_1 + 0x758);
    uVar2 = *(uint *)(param_1 + 0x7dc);
  }
  *(uint *)(param_1 + 0x7dc) = uVar2 | 4;
  return;
}




void FUN_00aa9c70(long param_1,uint param_2)

{
  uint uVar1;
  
  FUN_00aa9bf8(param_1,param_2 & 1);
  uVar1 = *(uint *)(param_1 + 0x8cc);
  *(uint *)(param_1 + 0x8cc) = uVar1 | 4;
  if ((uVar1 & 0x7f80) == 0x1300) {
    return;
  }
  *(uint *)(param_1 + 0x8cc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1304;
  FUN_0091ada4(param_1 + 0x848);
  return;
}




void FUN_00aa9ccc(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar3 = 0x3dcccccd;
  }
  *(byte *)(param_1 + 0x13bc) = (byte)param_2 & 1;
  FUN_00f0e6bc(uVar3,param_1 + 0x488);
  *(uint *)(param_1 + 0x7dc) =
       *(uint *)(param_1 + 0x7dc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7dc) & 3 | (~param_2 & 1) << 2;
  if ((param_2 & 1) == 0) {
    local_40[0] = 0xff0a0a0a;
    FUN_00f0e670(param_1 + 0x758,local_40,2);
    uVar1 = *(uint *)(param_1 + 0x7dc);
    if ((uVar1 & 0x7f80) != 0x3300) {
      *(uint *)(param_1 + 0x7dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
      FUN_0091ada4(param_1 + 0x758);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa9da4(long param_1)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_00bd1bcc(param_1 + 0x13a8,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(uint *)(param_1 + 0xda4) = *(uint *)(param_1 + 0xda4) & 0xfffffffb;
  *(uint *)(param_1 + 0xe94) = *(uint *)(param_1 + 0xe94) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x13b0) + 0x84) = *(uint *)(*(long *)(param_1 + 0x13b0) + 0x84) | 4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa9e44(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00efed6c();
  uVar2 = FUN_00eff63c(0x3f866666,0x3f866666,0x3e4ccccd,0);
  FUN_00efcb24(uVar2,FUN_00aa89f4);
  uVar3 = FUN_00eff63c(*(undefined4 *)(param_2 + 0x13b8),*(undefined4 *)(param_2 + 0x13b8),
                       0x3e99999a,0);
  FUN_00efcb24(uVar3,FUN_00aa89f4);
  FUN_00f01980(param_2 + 0x240);
  FUN_00f02308(param_2 + 0x240,uVar1,uVar2,uVar3,0);
  uVar1 = FUN_00efed6c(param_1);
  uVar2 = FUN_00efee28(0x3f000000,0x3e4ccccd,0);
  FUN_00efcb24(uVar2,FUN_00aa89f4);
  uVar3 = FUN_00efee28(0,0x3e99999a,0);
  FUN_00efcb24(uVar3,FUN_009a7608);
  FUN_00f01980(param_2 + 0x938);
  FUN_00f02308(param_2 + 0x938,uVar1,uVar2,uVar3,0);
  return;
}




void FUN_00aa9f74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00eff63c(0x3fb33333,0x3fb33333,0x3ecccccd,0);
  FUN_00efcb24(uVar1,FUN_00aa89f4);
  uVar2 = FUN_00efed6c(0x3dcccccd);
  uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,0x3d8f5c29,0);
  FUN_00efcb24(uVar3,FUN_00a52db8);
  FUN_00f02308(param_1 + 0x240,uVar1,uVar2,uVar3,0);
  return;
}

