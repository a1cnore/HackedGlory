// functions/00d9b — 80 functions
#include "libGameKindred.h"




void FUN_00d9b024(long param_1,undefined8 param_2)

{
  FUN_00cf2ba4(param_1 + 0x10);
  FUN_00cf2ba4(param_1 + 0x28,param_2);
  return;
}




undefined8 FUN_00d9b054(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00d9ae70();
  if ((uVar1 & 1) != 0) {
    if ((*(ushort *)(param_1 + 0x58) >> 0xc & 1) != 0) {
      if ((*(ushort *)(param_1 + 0x58) >> 0xd & 1) == 0) {
        param_1 = param_1 + 0x28;
      }
      else {
        param_1 = param_1 + 0x10;
      }
      uVar2 = FUN_00cf2c08(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}




void FUN_00d9b0a8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00d9ae70();
  if ((uVar1 & 1) != 0) {
    if ((*(ushort *)(param_1 + 0x58) >> 0xc & 1) != 0) {
      if ((*(ushort *)(param_1 + 0x58) >> 0xd & 1) == 0) {
        param_1 = param_1 + 0x28;
      }
      else {
        param_1 = param_1 + 0x10;
      }
      FUN_00cf2c6c(param_1,param_2);
      return;
    }
  }
  return;
}




long FUN_00d9b0f8(long param_1)

{
  return param_1 + 0x18;
}




long FUN_00d9b100(long param_1)

{
  return param_1 + 0x30;
}




void FUN_00d9b108(long param_1)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff0;
  return;
}




void FUN_00d9b118(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff0 | param_2 & 0xf;
  return;
}




void FUN_00d9b128(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xf00f | 0x20;
  *(undefined1 *)(param_1 + 0x50) = 2;
  return;
}




void FUN_00d9b14c(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}




void FUN_00d9b158(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 3;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xf03f | 0x30;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  return;
}




void FUN_00d9b188(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x50) = 7;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xf01f | 0x50;
  *(undefined8 *)(param_1 + 0x48) = 4;
  return;
}




void FUN_00d9b1c4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xf01f | 0x10;
  return;
}




void FUN_00d9b1dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f420;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) & 0xf800 | 0x10;
  param_1[8] = 0;
  return;
}




void FUN_00d9b218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f420;
  FUN_00e4613c(param_1 + 2);
  FUN_00e4613c(param_1 + 5);
  return;
}




void FUN_00d9b250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f420;
  FUN_00e4613c(param_1 + 2);
  FUN_00e4613c(param_1 + 5);
  operator_delete(param_1);
  return;
}




void FUN_00d9b294(void)

{
  return;
}




void FUN_00d9b298(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x58);
  bVar1 = *(byte *)(param_2 + 0x58);
  *(ushort *)(param_1 + 0x58) = uVar2 & 0xff00 | (ushort)bVar1;
  *(ushort *)(param_1 + 0x58) = uVar2 & 0xfb00 | (ushort)bVar1 | *(ushort *)(param_2 + 0x58) & 0x400
  ;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return;
}




void FUN_00d9b2d4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 0x59) >> 2 & 1) == 0)) {
    return;
  }
  uVar1 = FUN_00d9b330(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 + 0x28;
  }
  else {
    param_1 = param_1 + 0x10;
  }
  FUN_00e45fec(param_1,param_2);
  return;
}




ulong FUN_00d9b330(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  switch(*(undefined1 *)(param_1 + 0x58)) {
  case 0:
    uVar3 = 0;
    if (*(char *)(param_1 + 0x50) == '\x01') {
      uVar3 = FUN_00da0288(*(undefined4 *)(param_1 + 0x40),0);
      return uVar3;
    }
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00d9b3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1 + 0x40))(param_2);
    return uVar3;
  case 2:
  case 3:
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xc:
    lVar2 = FUN_00d66d28(*param_2);
    goto LAB_00d9b388;
  case 4:
  case 0xb:
    FUN_00d67b84(*param_2);
    lVar2 = FUN_00d9e390();
LAB_00d9b388:
    uVar3 = FUN_00d9a75c(param_1 + 0x40,lVar2);
    return uVar3;
  case 6:
    iVar1 = FUN_00d9d984(param_2 + 1);
    uVar3 = (ulong)(iVar1 != 0);
    break;
  case 8:
    FUN_00d67b84(*param_2);
    lVar2 = FUN_00d9e390();
    uVar3 = 0;
    if (lVar2 != 0) goto LAB_00d9b388;
    break;
  case 0xd:
    uVar5 = param_2[0x85];
    uVar4 = FUN_00d66d28(*param_2);
    uVar3 = FUN_00daa58c(uVar5,uVar4);
    return uVar3;
  case 0xe:
    uVar3 = 0;
    if (*(long *)(param_2[0x85] + 0x20) != 0) {
      uVar3 = FUN_00d44be0(*(long *)(param_2[0x85] + 0x20),*(undefined8 *)(param_1 + 0x40));
      return uVar3;
    }
    break;
  case 0xf:
    if (*(long *)(param_2[0x85] + 0x20) != 0) {
      return (ulong)(*(byte *)(*(long *)(param_2[0x85] + 0x20) + 0x2f4) & 1);
    }
  default:
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_00d9b45c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 0x59) >> 2 & 1) == 0)) {
    return;
  }
  uVar1 = FUN_00d9b330(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 + 0x28;
  }
  else {
    param_1 = param_1 + 0x10;
  }
  FUN_00e460e8(param_1,param_2);
  return;
}




void FUN_00d9b4b8(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) && ((*(ushort *)(param_1 + 0x58) >> 10 & 1) == 0)) {
    *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfdff | 0x100;
    return;
  }
  uVar1 = FUN_00d9b330(param_1,param_2);
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfdff | (uVar1 & 1) << 9 | 0x100;
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 + 0x28;
  }
  else {
    param_1 = param_1 + 0x10;
  }
  FUN_00e46040(param_1,param_2);
  return;
}




void FUN_00d9b538(long param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_00d9b330();
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfdff | (uVar1 & 1) << 9 | 0x100;
  return;
}




void FUN_00d9b570(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x59) >> 1 & 1) == 0) {
    lVar1 = param_1 + 0x28;
  }
  else {
    lVar1 = param_1 + 0x10;
  }
  FUN_00e46094(lVar1);
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfeff;
  return;
}




long FUN_00d9b5b0(long param_1)

{
  return param_1 + 0x10;
}




long FUN_00d9b5b8(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00d9b5c0(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d9b5d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x51) = 0x800000000000000;
  *(undefined1 *)(param_1 + 0x50) = 7;
  return;
}




void FUN_00d9b5e8(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}




void FUN_00d9b5f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x58) = 4;
  *(undefined1 *)(param_1 + 0x50) = 2;
  return;
}




void FUN_00d9b610(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x58) = 2;
  *(undefined1 *)(param_1 + 0x50) = 2;
  return;
}




void FUN_00d9b628(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x51) = 0x300000000000000;
  *(undefined1 *)(param_1 + 0x50) = 3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  return;
}




void FUN_00d9b644(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 6;
  return;
}




void FUN_00d9b650(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x51) = 0x700000000000000;
  *(undefined1 *)(param_1 + 0x50) = 7;
  return;
}




void FUN_00d9b668(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x51) = 0x900000000000000;
  *(undefined1 *)(param_1 + 0x50) = 7;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 4;
  return;
}




void FUN_00d9b68c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x51) = 0xa00000000000000;
  *(undefined1 *)(param_1 + 0x50) = 7;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  return;
}




void FUN_00d9b6a8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x51) = 0xb00000000000000;
  *(undefined1 *)(param_1 + 0x50) = 7;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 4;
  return;
}




void FUN_00d9b6cc(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x40) = param_3;
  *(undefined4 *)(param_2 + 0x48) = param_4;
  *(undefined1 *)(param_2 + 0x58) = 0xc;
  *(undefined1 *)(param_2 + 0x50) = 4;
  *(undefined4 *)(param_2 + 0x44) = param_1;
  return;
}




void FUN_00d9b6f4(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0xd;
  return;
}




void FUN_00d9b700(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x58) = 0xe;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d9b710(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0xf;
  return;
}




void FUN_00d9b71c(undefined4 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined1 *)(param_2 + 0x50) = 1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff00;
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}




void FUN_00d9b744(long param_1)

{
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 0x400;
  return;
}




bool FUN_00d9b754(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031ab9b0 <= fVar3) {
    fVar3 = DAT_031ab9b0;
  }
  fVar2 = DAT_031ab8f0;
  if (DAT_031ab8f0 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2 <= *(float *)(lVar1 + 0x308);
}




ulong FUN_00d9b7d8(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)param_1[2];
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00d9b834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00d42698(param_2);
                    /* WARNING: Could not recover jumptable at 0x00d9b858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00d9b870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00d9b88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    plVar3 = (long *)FUN_00d427bc(param_2);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar5 = *(undefined8 *)param_1;
      uVar1 = FUN_00e6a474(uVar5);
      uVar1 = FUN_0091ed5c(uVar5,uVar1,0x12345678);
      puVar4 = (uint *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
      uVar2 = (ulong)*puVar4;
    }
    break;
  default:
    FUN_00e6a2fc(0);
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00d9b8e8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02c7bf48) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  FUN_00d5bc2c();
  iVar1 = FUN_00d6ad98(lVar4);
  if (iVar1 == 0) {
    return;
  }
  uVar5 = 0;
  do {
    FUN_00d6b898(lVar4,uVar5);
    uVar2 = FUN_00d6b5f0(lVar4,uVar5);
    FUN_00d6b9f8(lVar4,uVar2);
    uVar5 = uVar5 + 1;
    uVar3 = FUN_00d6ad98(lVar4);
  } while (uVar5 < uVar3);
  return;
}




void FUN_00d9b97c(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281f500;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_00d9b9b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9b9bc(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00d9b9c8(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




void FUN_00d9b9d4(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00d5048c(param_2);
    FUN_00d9b8e8();
    return;
  }
  return;
}




void FUN_00d9b9f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281f560;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_00d9ba14(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9ba1c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00d9ba28(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




void FUN_00d9ba34(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00d66d28(*param_2);
    FUN_00d9b8e8();
    return;
  }
  return;
}




void FUN_00d9ba58(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00d66d28(*param_2);
    FUN_00d9b8e8();
    return;
  }
  return;
}




void FUN_00d9ba7c(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00d66d28(*param_2);
    FUN_00d9b8e8();
    return;
  }
  return;
}




void FUN_00d9baa0(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00d66d28(*param_2);
    FUN_00d9b8e8();
    return;
  }
  return;
}




void FUN_00d9bac4(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00d9baf4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}




void FUN_00d9bb04(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00d9bb0c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00d9bb14(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9bb1c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_734 [4];
  undefined8 local_730;
  undefined4 local_728;
  undefined1 auStack_720 [40];
  undefined1 auStack_6f8 [96];
  undefined8 local_698 [201];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6f8);
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(param_2,auStack_6f8);
  }
  if ((code *)param_1[1] == (code *)0x0) {
    uVar2 = FUN_00d9e840(auStack_6f8,local_698,200,0);
  }
  else {
    local_728 = DAT_03218f38;
    local_730 = DAT_03218f30;
    local_734[0] = 0;
    (*(code *)param_1[1])(param_2,&local_730,local_734);
    FUN_00d4eb08(auStack_720,&local_730,*(undefined4 *)(param_1 + 2),local_734[0]);
    uVar2 = FUN_00d9e840(auStack_6f8,local_698,200,auStack_720);
  }
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(uint *)(param_1 + 2) <= uVar4) break;
      FUN_00d518f4(param_2,local_698[uVar4]);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9bc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d518f4(param_2,param_3);
  return;
}




void FUN_00d9bc58(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}




void FUN_00d9bc68(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00d9bc70(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00d9bc78(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9bc80(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_734 [4];
  undefined8 local_730;
  undefined4 local_728;
  undefined1 auStack_720 [40];
  undefined1 auStack_6f8 [96];
  undefined8 local_698 [201];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6f8);
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(param_2,auStack_6f8);
  }
  if ((code *)param_1[1] == (code *)0x0) {
    uVar2 = FUN_00d9e840(auStack_6f8,local_698,200,0);
  }
  else {
    local_728 = DAT_03218f38;
    local_730 = DAT_03218f30;
    local_734[0] = 0;
    (*(code *)param_1[1])(param_2,&local_730,local_734);
    FUN_00d4eb08(auStack_720,&local_730,*(undefined4 *)(param_1 + 2),local_734[0]);
    uVar2 = FUN_00d9e840(auStack_6f8,local_698,200,auStack_720);
  }
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(uint *)(param_1 + 2) <= uVar4) break;
      FUN_00d9d98c(param_2 + 8,local_698[uVar4]);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9bdb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_00d9d98c(param_2 + 8,param_3);
  return;
}




void FUN_00d9bdc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_00d9bdc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}




void FUN_00d9bdd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d9ea34(param_3);
  local_4c = 0xffffffff;
  thunk_FUN_00d9ff34(&local_50,*param_1);
  uVar5 = FUN_00d6bbac(uVar4,local_50,&local_4c);
  uVar2 = local_4c;
  if ((uVar5 & 1) != 0) {
    uVar8 = param_1[1];
    uVar3 = FUN_00e6a474(uVar8);
    uVar3 = FUN_0091ed5c(uVar8,uVar3,0x12345678);
    lVar6 = FUN_00d6b5b0(uVar4,uVar2);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x168) + 0x18))(lVar6 + 0x168,uVar3);
    lVar6 = FUN_00d9e390(*puVar7);
    if (lVar6 != 0) {
      FUN_00d518f4(param_2,lVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9bec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d518f4(param_2,param_3);
  return;
}




void FUN_00d9bed0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_00d9bed8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}




void FUN_00d9bee0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d9ea34(param_3);
  local_4c = 0xffffffff;
  thunk_FUN_00d9ff34(&local_50,*param_1);
  uVar5 = FUN_00d6bbac(uVar4,local_50,&local_4c);
  uVar2 = local_4c;
  if ((uVar5 & 1) != 0) {
    uVar8 = param_1[1];
    uVar3 = FUN_00e6a474(uVar8);
    uVar3 = FUN_0091ed5c(uVar8,uVar3,0x12345678);
    lVar6 = FUN_00d6b5b0(uVar4,uVar2);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x168) + 0x18))(lVar6 + 0x168,uVar3);
    lVar6 = FUN_00d9e390(*puVar7);
    if (lVar6 != 0) {
      FUN_00d9d98c(param_2 + 8,lVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9bfd4(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_00d9d98c(param_2 + 8,param_3);
  return;
}




void FUN_00d9bfe0(long param_1)

{
  FUN_00d9ff2c();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xf8;
  return;
}

