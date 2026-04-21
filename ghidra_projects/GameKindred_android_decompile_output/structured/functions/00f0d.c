// functions/00f0d — 53 functions
#include "libGameKindred.h"




undefined8 FUN_00f0d040(long *param_1)

{
  (**(code **)(*param_1 + 0x150))();
  return 0;
}




void FUN_00f0d060(long param_1,int param_2)

{
  *(int *)(param_1 + 0x230) = param_2;
  if (param_2 == 2) {
    FUN_00f112f0(param_1,1);
    return;
  }
  FUN_00f112f0(param_1,0);
  return;
}




void FUN_00f0d07c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x234) = param_2;
  return;
}




void FUN_00f0d084(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x228) = param_1;
  *(undefined4 *)(param_3 + 0x22c) = param_2;
  return;
}




void FUN_00f0d090(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0x1a0,param_2,param_3 & 1);
  return;
}




void FUN_00f0d09c(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0x1a0,param_2,param_3 & 1);
  return;
}




void FUN_00f0d0a8(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0x47) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00f0d0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




long FUN_00f0d0bc(long param_1)

{
  return param_1 + 0x1a0;
}




undefined4 FUN_00f0d0c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1e8);
}




void FUN_00f0d0d0(long param_1)

{
  FUN_00f01fcc(param_1 + 0x1a0,0,0,0,*(undefined1 *)(param_1 + 0x238));
  return;
}




void FUN_00f0d0e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028263c0;
  FUN_00f01868(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f0d120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028263c0;
  FUN_00f01868(param_1 + 0x34);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0d160(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  lVar3 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = (long)&PTR_FUN_02826530;
  param_1[0x17] = (long)&PTR_FUN_028266a8;
  param_1[0x19] = lVar3;
  FUN_00f08acc(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x124) = 0xff000000;
  uVar2 = DAT_02bf2590;
  *(byte *)((long)param_1 + 299) = *(byte *)((long)param_1 + 299) & 0xe0 | 0x10;
  *(undefined1 *)(param_1 + 0x25) = uVar2;
  *(undefined2 *)((long)param_1 + 0x129) = 0x101;
  FUN_00f14070(param_1,&DAT_03211038);
  local_30 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0d25c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  lVar2 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = (long)&PTR_FUN_02826530;
  param_1[0x17] = (long)&PTR_FUN_028266a8;
  param_1[0x19] = lVar2;
  FUN_00f08acc(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x124) = 0xff000000;
  uVar3 = DAT_02bf2590;
  *(byte *)((long)param_1 + 299) = *(byte *)((long)param_1 + 299) & 0xe0 | 0x10;
  *(undefined1 *)(param_1 + 0x25) = uVar3;
  *(undefined2 *)((long)param_1 + 0x129) = 0x101;
  FUN_00f14070(param_1,&DAT_03211038);
  local_40 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&local_40);
  uVar3 = FUN_00f005a8(param_2);
  FUN_00f0d824(param_1,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0d378(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00f005a8(param_2);
  FUN_00f0d824(param_1,uVar1);
  return;
}




void FUN_00f0d3a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02826530;
  param_1[0x17] = &PTR_FUN_028266a8;
  if (*(char *)(param_1 + 0x25) != DAT_02bf2590) {
    FUN_00f005e4();
  }
  FUN_00f08b48(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f0d400(long param_1)

{
  FUN_00f0d3a4(param_1 + -0xb8);
  return;
}




void FUN_00f0d408(void *param_1)

{
  FUN_00f0d3a4();
  operator_delete(param_1);
  return;
}




void FUN_00f0d42c(long param_1)

{
  FUN_00f0d3a4((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00f0d454(long param_1)

{
  if (*(char *)(param_1 + 0x128) != DAT_02bf2590) {
    FUN_00f005e4();
    *(char *)(param_1 + 0x128) = DAT_02bf2590;
    FUN_00f09c44(param_1 + 0xd0);
  }
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0xff000000;
  *(undefined2 *)(param_1 + 0x129) = 0x101;
  *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) & 0xe0 | 0x10;
  return;
}




void FUN_00f0d4e0(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f09b18(param_1 + 0xd0,&fStack_2c,&local_30);
  fVar2 = (float)FUN_00f08d20(param_1 + 0xd0);
  if (fVar2 <= 0.0) {
    fVar2 = fStack_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2,local_30);
}




void FUN_00f0d548(long param_1)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f09b18(param_1 + 0xd0,&uStack_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_2c,local_30);
}




void FUN_00f0d59c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  float fVar2;
  
  param_2 = param_2 + 0xd0;
  uVar1 = FUN_00f08ccc(param_2);
  if (((uVar1 & 1) != 0) && (fVar2 = (float)FUN_00f08d20(param_2), fVar2 != (float)param_1)) {
    FUN_00f08cf8(param_1,param_2);
    return;
  }
  return;
}




int FUN_00f0d5f8(undefined1 param_1 [16],float param_2,long *param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  
  uVar2 = FUN_00f08ccc(param_3 + 0x1a);
  if ((uVar2 & 1) == 0) {
    iVar1 = -1;
  }
  else {
    FUN_00f08cf8((float)param_4,param_3 + 0x1a);
    fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f13fc4(param_3,CONCAT44((int)param_2,(int)fVar3));
    iVar1 = (int)param_2;
  }
  return iVar1;
}




int FUN_00f0d678(undefined1 param_1 [16],float param_2,long *param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = param_3 + 0x1a;
  uVar2 = FUN_00f08ccc(plVar1);
  if ((uVar2 & 1) == 0) {
    iVar3 = -1;
  }
  else {
    uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f08cf8((float)param_4,plVar1);
    (**(code **)(*param_3 + 0x48))(param_3);
    iVar3 = (int)param_2;
    FUN_00f08cf8(uVar4,plVar1);
  }
  return iVar3;
}




ulong FUN_00f0d704(undefined1 param_1 [16],float param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  uVar1 = FUN_00f08ccc(param_3 + 0x1a);
  if ((uVar1 & 1) == 0) {
    fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    uVar1 = (ulong)(uint)(int)fVar3;
    uVar2 = (ulong)(uint)(int)param_2;
  }
  else {
    uVar1 = FUN_00f13f70(param_3);
    uVar2 = uVar1 >> 0x20;
  }
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}




void FUN_00f0d75c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  
  plVar1 = param_3 + 0x1a;
  uVar3 = FUN_00f08b84(plVar1);
  if ((uVar3 & 1) != 0) {
    FUN_0091ada4(param_3);
    (**(code **)(*param_3 + 0xe8))(param_3);
    uVar2 = FUN_00f08ccc(plVar1);
    FUN_00f08ca8(plVar1,0);
    fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f13f68(param_3,CONCAT44((int)param_2,(int)fVar4));
    FUN_00f08ca8(plVar1,uVar2 & 1);
    return;
  }
  return;
}




void FUN_00f0d7fc(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x120) = *param_2;
  return;
}




void FUN_00f0d808(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f0d818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,&DAT_03210450);
  return;
}




long FUN_00f0d81c(long param_1)

{
  return param_1 + 0x120;
}




void FUN_00f0d824(long param_1,char param_2)

{
  uint3 *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  
  cVar2 = *(char *)(param_1 + 0x128);
  if (cVar2 != param_2) {
    if (cVar2 != DAT_02bf2590) {
      FUN_00f005e4();
      *(char *)(param_1 + 0x128) = DAT_02bf2590;
      FUN_00f09c44(param_1 + 0xd0);
      cVar2 = DAT_02bf2590;
    }
    if (cVar2 != param_2) {
      *(char *)(param_1 + 0x128) = param_2;
      FUN_00f005d0(param_2);
      lVar4 = FUN_00f05848(DAT_03210cf0,*(undefined1 *)(param_1 + 0x128));
      FUN_00f08bf0(param_1 + 0xd0,lVar4);
      puVar1 = (uint3 *)(param_1 + 0x129);
      uVar3 = *puVar1 & 0xfffc0000 |
              (uint)*(ushort *)puVar1 | (*(uint *)(lVar4 + 0x930) & 3) << 0x10;
      *(char *)(param_1 + 299) = (char)(uVar3 >> 0x10);
      bVar5 = 0;
      if ((*(int *)(lVar4 + 0x10) != 0) && (bVar5 = 0, *(long **)(lVar4 + 0xa0) != (long *)0x0)) {
        if (**(long **)(lVar4 + 0xa0) == 0) {
          bVar5 = 0;
        }
        else {
          uVar3 = FUN_00f19084();
          bVar5 = (byte)(((uVar3 & 1) << 0x14) >> 0x10);
          uVar3 = (uint)*puVar1;
        }
      }
      *(ushort *)puVar1 = (ushort)(uVar3 & 0xefffff);
      *(byte *)(param_1 + 299) = (byte)((uVar3 & 0xefffff) >> 0x10) | bVar5;
    }
  }
  return;
}




void FUN_00f0d92c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00f005a8(param_2);
  FUN_00f0d824(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x120) = *param_3;
  return;
}




void FUN_00f0d968(long param_1,undefined1 param_2,undefined4 *param_3)

{
  FUN_00f0d824(param_1,param_2);
  *(undefined4 *)(param_1 + 0x120) = *param_3;
  return;
}




void FUN_00f0d998(long param_1,uint param_2)

{
  FUN_00f08c7c(param_1 + 0xd0,param_2 & 1);
  return;
}




void FUN_00f0d9a4(long param_1,uint param_2)

{
  FUN_00f08c80(param_1 + 0xd0,param_2 & 1);
  return;
}




void FUN_00f0d9b0(undefined1 param_1 [16],float param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  float fVar2;
  
  FUN_00f08ca8(param_3 + 0x1a,param_4 & 1);
  if ((param_4 & 1) == 0) {
    fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f13fa0(param_3,CONCAT44((int)param_2,(int)fVar2));
    puVar1 = &DAT_03211038;
  }
  else {
    FUN_00f13fa0(param_3,0);
    puVar1 = &DAT_02bf25a8;
  }
  FUN_00f14070(param_3,puVar1);
  return;
}




void FUN_00f0da28(long param_1)

{
  FUN_00f08cd8(param_1 + 0xd0);
  return;
}




void FUN_00f0da30(long param_1,uint param_2)

{
  *(byte *)(param_1 + 299) =
       *(byte *)(param_1 + 299) & 0xfb | (byte)(((param_2 & 1) << 0x12) >> 0x10);
  return;
}




void FUN_00f0da58(long param_1,uint param_2)

{
  *(byte *)(param_1 + 299) =
       *(byte *)(param_1 + 299) & 0xf7 | (byte)(((param_2 & 1) << 0x13) >> 0x10);
  return;
}




void FUN_00f0da80(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x124) = *param_2;
  return;
}




void FUN_00f0da8c(long param_1,float *param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  float fVar4;
  
  puVar1 = (ushort *)(param_1 + 0x129);
  fVar4 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 299);
  *(undefined1 *)(param_1 + 299) = uVar2;
  uVar3 = (ushort)(int)fVar4 & 0xff;
  *puVar1 = *puVar1 & 0xff00 | uVar3;
  fVar4 = param_2[1];
  *(undefined1 *)(param_1 + 299) = uVar2;
  *puVar1 = uVar3 | (ushort)((int)fVar4 << 8);
  return;
}




void FUN_00f0dac8(long param_1)

{
  FUN_00f08c18(param_1 + 0xd0);
  return;
}




void FUN_00f0dad0(float param_1,long param_2,ulong param_3)

{
  FUN_00f08cf8(param_2 + 0xd0);
  if ((param_3 & 1) != 0) {
    FUN_00f08ca8(param_2 + 0xd0,0.0 < param_1);
    return;
  }
  return;
}




void FUN_00f0db24(long param_1)

{
  FUN_00f08d28(param_1 + 0xd0);
  return;
}




void FUN_00f0db2c(long param_1)

{
  FUN_00f08d50(param_1 + 0xd0);
  return;
}




void FUN_00f0db34(long *param_1)

{
  FUN_00f08d78(param_1 + 0x1a);
                    /* WARNING: Could not recover jumptable at 0x00f0db60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00f0db64(float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_50 [4];
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f09b18(param_4 + 0xd0,&local_4c,auStack_50);
  if ((param_1 == -1.0) || (local_4c * param_3 <= param_1)) {
    if ((*(float *)(param_4 + 0x48) == param_3) && (*(float *)(param_4 + 0x4c) == param_3))
    goto LAB_00f0dc20;
    *(float *)(param_4 + 0x48) = param_3;
    *(float *)(param_4 + 0x4c) = param_3;
  }
  else {
    fVar2 = (float)NEON_fminnm((param_1 / (local_4c * param_3)) * param_3,0x3f800000);
    if (param_2 <= fVar2) {
      param_2 = fVar2;
    }
    if ((*(float *)(param_4 + 0x48) == param_2) && (*(float *)(param_4 + 0x4c) == param_2))
    goto LAB_00f0dc20;
    *(float *)(param_4 + 0x48) = param_2;
    *(float *)(param_4 + 0x4c) = param_2;
  }
  FUN_0091ada4(param_4);
LAB_00f0dc20:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0dc4c(float param_1,float param_2,float param_3,long *param_4)

{
  float fVar1;
  
  fVar1 = param_2;
  (**(code **)(*param_4 + 0x48))();
  if ((param_1 == -1.0) || (fVar1 * param_3 <= param_1)) {
    if ((*(float *)(param_4 + 9) == param_3) && (*(float *)((long)param_4 + 0x4c) == param_3)) {
      return;
    }
    *(float *)(param_4 + 9) = param_3;
    *(float *)((long)param_4 + 0x4c) = param_3;
  }
  else {
    fVar1 = (float)NEON_fminnm((param_1 / (fVar1 * param_3)) * param_3,0x3f800000);
    if (param_2 <= fVar1) {
      param_2 = fVar1;
    }
    if ((*(float *)(param_4 + 9) == param_2) && (*(float *)((long)param_4 + 0x4c) == param_2)) {
      return;
    }
    *(float *)(param_4 + 9) = param_2;
    *(float *)((long)param_4 + 0x4c) = param_2;
  }
  FUN_0091ada4(param_4);
  return;
}




void FUN_00f0dd14(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float __x;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar1 = param_3 + 0xd0;
  FUN_00f08cf8(0,lVar1);
  FUN_00f08ca8(lVar1,0);
  if ((*(float *)(param_3 + 0x48) != 1.0) || (*(float *)(param_3 + 0x4c) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_3 + 0x48) = uVar4;
    FUN_0091ada4(param_3);
  }
  FUN_00f09b18(lVar1,&local_5c,&local_60);
  FUN_00f09b18(lVar1,&local_5c,&local_60);
  __x = (local_5c * local_60 * param_2) / param_1;
  fVar3 = SQRT(__x);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(__x);
  }
  fVar3 = (float)NEON_fminnm(param_2 / fVar3,0x3f800000);
  FUN_00f08cf8(param_1 / fVar3,lVar1);
  FUN_00f08ca8(lVar1,0.0 < param_1 / fVar3);
  if ((*(float *)(param_3 + 0x48) != fVar3) || (*(float *)(param_3 + 0x4c) != fVar3)) {
    *(float *)(param_3 + 0x48) = fVar3;
    *(float *)(param_3 + 0x4c) = fVar3;
    FUN_0091ada4(param_3);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f0de54(undefined8 param_1,undefined4 *param_2)

{
  FUN_00f0dd14(*param_2,param_2[1]);
  return;
}




void FUN_00f0de5c(long param_1,uint param_2)

{
  FUN_00f08c48(param_1 + 0xd0,param_2 & 1);
  return;
}




void FUN_00f0de68(long param_1)

{
  FUN_00f08c70(param_1 + 0xd0);
  return;
}




void FUN_00f0de70(long param_1,long *param_2)

{
  uint3 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x128) != DAT_02bf2590) {
    pfVar5 = (float *)FUN_00965ecc(param_1);
    puVar1 = (uint3 *)(param_1 + 0x129);
    fVar15 = *pfVar5;
    fVar16 = pfVar5[1];
    fVar18 = pfVar5[4];
    fVar17 = pfVar5[5];
    uVar8 = (uint)*puVar1;
    if ((*(byte *)(param_1 + 299) & 4) != 0) {
      local_7c = *(undefined1 *)(param_1 + 0x124);
      local_7b = *(undefined1 *)(param_1 + 0x125);
      local_7a = *(undefined1 *)(param_1 + 0x126);
      fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x123));
      fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x127));
      fVar13 = (float)NEON_fminnm((int)(pfVar5[6] * fVar13 * 0.003921569 * fVar14),0x437f0000);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      local_79 = (undefined1)(int)fVar13;
      lVar6 = *param_2 + (long)(int)param_2[1] * 0x18;
      uVar2 = *(int *)((long)param_2 + 0xc) - (int)param_2[1];
      iVar4 = FUN_00f09c54(fVar15 + (float)(int)(char)*(undefined2 *)puVar1,
                           fVar16 + (float)((int)(uVar8 << 0x10) >> 0x18),fVar18,fVar17,
                           param_1 + 0xd0,&local_7c,lVar6,lVar6 + 0x10,lVar6 + 0xc,0x18,0,
                           uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),0);
      iVar4 = (int)param_2[1] + iVar4;
      iVar10 = *(int *)((long)param_2 + 0xc);
      if (iVar4 <= *(int *)((long)param_2 + 0xc)) {
        iVar10 = iVar4;
      }
      *(int *)(param_2 + 1) = iVar10;
      uVar8 = (uint)*puVar1;
    }
    if ((uVar8 >> 0x13 & 1) == 0) {
      iVar10 = (int)param_2[1];
      iVar9 = *(int *)((long)param_2 + 0xc);
    }
    else {
      local_7c = *(undefined1 *)(param_1 + 0x124);
      local_7b = *(undefined1 *)(param_1 + 0x125);
      local_7a = *(undefined1 *)(param_1 + 0x126);
      lVar6 = param_1 + 0xd0;
      fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x123));
      fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x127));
      fVar13 = (float)NEON_fminnm((int)(pfVar5[6] * fVar13 * 0.003921569 * fVar14),0x437f0000);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      local_79 = (undefined1)(int)fVar13;
      plVar11 = param_2 + 1;
      piVar12 = (int *)((long)param_2 + 0xc);
      lVar7 = *param_2 + (long)(int)*plVar11 * 0x18;
      uVar2 = *piVar12 - (int)*plVar11;
      iVar4 = FUN_00f09c54(fVar15 + (float)(int)(char)uVar8,
                           fVar16 + (float)((int)(uVar8 << 0x10) >> 0x18),fVar18,fVar17,lVar6,
                           &local_7c,lVar7,lVar7 + 0x10,lVar7 + 0xc,0x18,0,
                           uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),0);
      iVar9 = *piVar12;
      iVar4 = (int)*plVar11 + iVar4;
      iVar10 = iVar9;
      if (iVar4 <= iVar9) {
        iVar10 = iVar4;
      }
      *(int *)plVar11 = iVar10;
      lVar7 = *param_2 + (long)(iVar10 * 0x18);
      iVar4 = FUN_00f09c54(fVar15 + (float)(int)(char)*(undefined2 *)puVar1,
                           fVar16 - (float)((int)((uint)*puVar1 << 0x10) >> 0x18),fVar18,fVar17,
                           lVar6,&local_7c,lVar7,lVar7 + 0x10,lVar7 + 0xc,0x18,0,
                           iVar9 - iVar10 & (iVar9 - iVar10 >> 0x1f ^ 0xffffffffU),0);
      iVar9 = *piVar12;
      iVar4 = (int)*plVar11 + iVar4;
      iVar10 = iVar9;
      if (iVar4 <= iVar9) {
        iVar10 = iVar4;
      }
      *(int *)plVar11 = iVar10;
      lVar7 = *param_2 + (long)(iVar10 * 0x18);
      iVar4 = FUN_00f09c54(fVar15 - (float)(int)(char)*(undefined2 *)puVar1,
                           fVar16 + (float)((int)((uint)*puVar1 << 0x10) >> 0x18),fVar18,fVar17,
                           lVar6,&local_7c,lVar7,lVar7 + 0x10,lVar7 + 0xc,0x18,0,
                           iVar9 - iVar10 & (iVar9 - iVar10 >> 0x1f ^ 0xffffffffU),0);
      iVar9 = *piVar12;
      iVar4 = (int)*plVar11 + iVar4;
      iVar10 = iVar9;
      if (iVar4 <= iVar9) {
        iVar10 = iVar4;
      }
      *(int *)plVar11 = iVar10;
      lVar7 = *param_2 + (long)(iVar10 * 0x18);
      iVar4 = FUN_00f09c54(fVar15 - (float)(int)(char)*(undefined2 *)puVar1,
                           fVar16 - (float)((int)((uint)*puVar1 << 0x10) >> 0x18),fVar18,fVar17,
                           lVar6,&local_7c,lVar7,lVar7 + 0x10,lVar7 + 0xc,0x18,0,
                           iVar9 - iVar10 & (iVar9 - iVar10 >> 0x1f ^ 0xffffffffU),0);
      iVar9 = *piVar12;
      iVar4 = (int)*plVar11 + iVar4;
      iVar10 = iVar9;
      if (iVar4 <= iVar9) {
        iVar10 = iVar4;
      }
      *(int *)plVar11 = iVar10;
    }
    local_7c = *(undefined1 *)(param_1 + 0x120);
    local_7b = *(undefined1 *)(param_1 + 0x121);
    local_7a = *(undefined1 *)(param_1 + 0x122);
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x123));
    fVar13 = (float)NEON_fminnm((int)(pfVar5[6] * fVar13),0x437f0000);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    local_79 = (undefined1)(int)fVar13;
    lVar6 = *param_2 + (long)(iVar10 * 0x18);
    iVar4 = FUN_00f09c54(fVar15,fVar16,fVar18,fVar17,param_1 + 0xd0,&local_7c,lVar6,lVar6 + 0x10,
                         lVar6 + 0xc,0x18,0,iVar9 - iVar10 & (iVar9 - iVar10 >> 0x1f ^ 0xffffffffU),
                         1);
    iVar4 = (int)param_2[1] + iVar4;
    iVar10 = *(int *)((long)param_2 + 0xc);
    if (iVar4 <= *(int *)((long)param_2 + 0xc)) {
      iVar10 = iVar4;
    }
    *(int *)(param_2 + 1) = iVar10;
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

