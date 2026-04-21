// functions/009c5 — 41 functions
#include "libGameKindred.h"




void FUN_009c5060(long param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x7b008) == 0;
  if (bVar1) {
    FUN_009c3d14(param_1,1);
  }
  else {
    FUN_009c50cc(param_1,0,0);
  }
  FUN_009c3560(0x3e4ccccd,param_1,!bVar1);
  return;
}




void FUN_009c50cc(long param_1,int param_2,byte param_3)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x7b008);
  iVar4 = *piVar1;
  if (param_2 == 0) {
    FUN_009c3560(0x3e4ccccd,param_1,1);
    if (iVar4 != *piVar1) goto switchD_009c5158_default;
    param_2 = 0;
    iVar4 = *piVar1;
  }
  else {
    if (((iVar4 == param_2 ^ param_3) & 1) == 0) goto switchD_009c5158_default;
    if ((param_3 & 1) == 0) {
      param_2 = 0;
    }
  }
  *piVar1 = param_2;
  switch(iVar4) {
  case 1:
    FUN_009c3c1c(0x3e4ccccd,param_1,0);
    break;
  case 2:
    FUN_009c543c(param_1,0);
    break;
  case 3:
    FUN_009c60c4(param_1,0);
    break;
  case 4:
    FUN_009c3ca4(0x3e4ccccd,param_1,0);
    break;
  case 5:
    FUN_009c6044(0x3e4ccccd,param_1,0);
    break;
  case 6:
    FUN_009c3d14(param_1,0);
    break;
  case 7:
    FUN_009c3dec(param_1,0);
    break;
  case 8:
    FUN_009c3d80(param_1,0);
  }
switchD_009c5158_default:
  uVar2 = FUN_009f2588();
  FUN_009f2fe4(uVar2,0x5bb9d395,*piVar1 == 0);
  lVar3 = FUN_00a1f328();
  if (lVar3 == 0) {
    return;
  }
  FUN_009c0698(lVar3,*piVar1 == 0);
  return;
}




void FUN_009c5244(undefined8 param_1)

{
  FUN_009c3d14(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c5278(long param_1)

{
  if (*(int *)(param_1 + 0x7b008) == 1) {
    return;
  }
  FUN_009c3c1c(0x3e4ccccd,param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c52e4(undefined8 param_1)

{
  FUN_009c3c1c(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c5318(long param_1)

{
  if (*(int *)(param_1 + 0x7b008) == 1) {
    FUN_009c3c1c(0x3e4ccccd,param_1,0);
    FUN_009c3560(0x3e4ccccd,param_1,1);
    return;
  }
  return;
}




void FUN_009c5384(undefined8 param_1)

{
  FUN_009c3c1c(0x3e4ccccd,param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c53c8(long param_1)

{
  FUN_00a3f0c0(param_1 + 0x268);
  return;
}




void FUN_009c53d0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  FUN_009c543c(param_1,1);
  uVar1 = FUN_009f1f70(0x12);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x3e4ccccd;
  }
  FUN_009c3560(uVar2,param_1,0);
  uVar1 = FUN_009f1f70(0x12);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x7b02a) = *(byte *)(param_1 + 0x7b02a) | 2;
  }
  return;
}




void FUN_009c543c(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  FUN_009c50cc(param_1,2,param_2 & 1);
  if ((param_2 & 1) == 0) {
    FUN_00a57284(param_1 + 0x587e0);
  }
  else {
    FUN_00a57204();
  }
  uVar1 = FUN_009f1f70(0x12);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x3e4ccccd;
  }
  FUN_00bbfaa8(uVar2,param_1 + 0x5e128,param_2 & 1,0);
  return;
}




void FUN_009c54b8(undefined8 param_1)

{
  FUN_009c543c(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c54ec(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (((((uint)*(byte *)(param_1 + 0x7b02a) << 0x10) >> 0x11 & 1) != 0) &&
     (uVar1 = FUN_00bc0604(param_1 + 0x5e128), (uVar1 & 1) == 0)) {
    FUN_009c543c(param_1,0);
    uVar1 = FUN_009f1f70(0x12);
    uVar2 = 0;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0x3e4ccccd;
    }
    FUN_009c3560(uVar2,param_1,1);
    return;
  }
  return;
}




void FUN_009c5578(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x7b02a) << 0x10) >> 0x12 & 1) == 0) {
    FUN_00a3f26c(param_1 + 0x268);
    *(byte *)(param_1 + 0x7b02a) = *(byte *)(param_1 + 0x7b02a) | 4;
  }
  return;
}




void FUN_009c55c8(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x7b02a) << 0x10) >> 0x12 & 1) != 0) {
    FUN_00a3f27c(param_1 + 0x268);
    *(byte *)(param_1 + 0x7b02a) = *(byte *)(param_1 + 0x7b02a) & 0xfb;
  }
  return;
}




void FUN_009c5624(undefined8 param_1)

{
  FUN_009c3ca4(0x3f4ccccd,param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c5660(undefined8 param_1)

{
  FUN_009c3ca4(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c5694(long param_1)

{
  FUN_00a3eeec(param_1 + 0x268);
  return;
}




undefined8 FUN_009c569c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




long FUN_009c56f0(long param_1)

{
  return param_1 + 0x22e38;
}




ushort FUN_009c5700(long param_1)

{
  return *(ushort *)(param_1 + 0x7b028) >> 0xb & 1;
}




ushort FUN_009c5714(long param_1)

{
  return *(ushort *)(param_1 + 0x7b028) >> 0xf;
}




void FUN_009c5728(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f0044c(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a15cfc((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c57c4(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00a15ff8((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                 *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_009c5854(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f00464(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a16054((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c58ec(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f0044c(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a160b0((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c5988(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00a16108((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                 *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_009c5a18(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f00464(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a16164((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c5ab0(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f0044c(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a161c0((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c5b4c(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00a1621c((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                 *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_009c5bdc(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f00464(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a16274((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c5c74(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f0044c(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a162d0((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c5d10(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00a1632c((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                 *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_009c5da0(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    FUN_00f00464(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00a16388((float)(int)*(float *)(param_2 + 5),(float)(int)*(float *)((long)param_2 + 0x2c),
                   *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_009c5e38(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00a16438((int)param_2[6],*(undefined4 *)((long)param_2 + 0x34));
    return;
  }
  return;
}




void FUN_009c5eb4(undefined8 param_1)

{
  FUN_009c3c1c(0x3e4ccccd,param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c5ef8(undefined8 param_1)

{
  FUN_009c3d14(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c5f2c(undefined8 param_1)

{
  FUN_009c3d80(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c5f60(undefined8 param_1)

{
  FUN_009c3d80(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c5f94(undefined8 param_1)

{
  FUN_009c3dec(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c5fc8(undefined8 param_1)

{
  FUN_009c3dec(param_1,0);
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c5ffc(long param_1)

{
  *(byte *)(param_1 + 0x7b02a) = *(byte *)(param_1 + 0x7b02a) | 1;
  FUN_009c6044(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}

