// functions/00ed1 — 23 functions
#include "libGameKindred.h"




void FUN_00ed12d8(undefined1 param_1 [16],float param_2,long *param_3)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(long *)param_3[4] + 0x48))();
    fVar2 = param_2;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar2 = *(float *)((long)param_3 + 0x4f4) +
            (param_2 * (-*(float *)((long)param_3 + 0x44) /
                       (fVar2 * *(float *)((long)param_3 + 0x4c))) -
            *(float *)((long)param_3 + 0x44));
    if (*(float *)((long)param_3 + 0x1b4) != fVar2) {
      *(float *)((long)param_3 + 0x1b4) = fVar2;
      FUN_0091ada4(param_3 + 0x2e);
      return;
    }
  }
  return;
}




void FUN_00ed1370(undefined1 param_1 [16],float param_2,long *param_3,float *param_4)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)(**(code **)(*(long *)param_3[4] + 0x48))();
    fVar4 = param_2;
    fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    if ((*(byte *)(param_3 + 0xa6) >> 4 & 1) != 0) {
      fVar2 = fVar2 - fVar3;
      fVar3 = *param_4;
      if (*param_4 < fVar2) {
        *param_4 = fVar2;
        fVar3 = fVar2;
      }
      if (0.0 < fVar3) {
        *param_4 = 0.0;
      }
    }
    if ((*(byte *)(param_3 + 0xa6) >> 5 & 1) != 0) {
      param_2 = param_2 - fVar4;
      fVar4 = param_4[1];
      if (param_4[1] < param_2) {
        param_4[1] = param_2;
        fVar4 = param_2;
      }
      if (0.0 < fVar4) {
        param_4[1] = 0.0;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed1420(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float __x;
  long lVar4;
  
  FUN_00f0490c(param_2);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    param_1[0xa3] = param_2[4];
    lVar4 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4);
    if ((*(byte *)(param_1 + 0xa6) >> 6 & 1) == 0) {
      __x = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0) +
            *(float *)((long)param_1 + 0x504) * *(float *)((long)param_1 + 0x504);
      fVar3 = SQRT(__x);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(__x);
      }
      if (0.0 < fVar3) {
        (**(code **)(*param_1 + 0x138))(param_1);
        lVar1 = _DAT_03218ef8;
        param_1[0x9c] = lVar4;
        *(ushort *)(param_1 + 0xa6) = *(ushort *)(param_1 + 0xa6) | 0xc0;
        param_1[0x9b] = lVar1;
      }
    }
    param_1[0x9a] = lVar4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed1510(long param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((*(byte *)(param_1 + 0x530) & 0x30) == 0) {
    FUN_00f0490c(param_2);
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  if (param_2[4] != *(long *)(param_1 + 0x518)) {
    return;
  }
  uVar6 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4);
  fVar3 = *(float *)(param_1 + 0x4d0) - (float)uVar6;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar5 = *(float *)(param_1 + 0x4d4) - fVar7;
  if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
    pfVar2 = (float *)&DAT_03218f28;
  }
  else {
    if ((*(ushort *)(param_1 + 0x530) >> 5 & 1) != 0) goto LAB_00ed15f4;
    pfVar2 = (float *)&DAT_03218f20;
  }
  fVar5 = fVar3 * *pfVar2 + fVar5 * pfVar2[1];
  fVar3 = *pfVar2 * fVar5;
  fVar5 = pfVar2[1] * fVar5;
LAB_00ed15f4:
  fVar5 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar3 = SQRT(fVar5);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar5);
  }
  if (fVar3 <= *(float *)(param_1 + 0x510)) {
    FUN_00f0490c(param_2);
  }
  else {
    FUN_00f0044c(param_2[4],param_1);
    uVar4 = _DAT_03218ef8;
    if ((*(ushort *)(param_1 + 0x530) >> 6 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x4e0) = uVar6;
      *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) | 0x40;
      *(undefined8 *)(param_1 + 0x4d8) = uVar4;
      FUN_00f0044c(param_2[4],param_1);
      return;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x4e0) = uVar6;
  *(ulong *)(param_1 + 0x4d8) =
       CONCAT44(fVar7 - (float)((ulong)uVar4 >> 0x20),(float)uVar6 - (float)uVar4);
  return;
}




undefined4 FUN_00ed16a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x510);
}




void FUN_00ed16a8(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x530) & 0x30) != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
       (param_2[4] == *(long *)(param_1 + 0x518))) {
      uVar3 = *(undefined8 *)(param_1 + 0x4e0);
      uVar2 = NEON_scvtf(CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]),4)
      ;
      *(undefined8 *)(param_1 + 0x4e0) = uVar2;
      *(ulong *)(param_1 + 0x4d8) =
           CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                    (float)uVar2 - (float)uVar3);
      *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xff3f;
      FUN_00f00464(param_2[4]);
      *(undefined8 *)(param_1 + 0x518) = 0;
    }
    return;
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00ed176c(long *param_1,long *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
      ((*(byte *)(param_1 + 0xa6) & 0x30) != 0)) &&
     ((0.001 <= ABS(*(float *)(param_2 + 6)) || (0.001 <= ABS(*(float *)((long)param_2 + 0x34))))))
  {
    (**(code **)(*param_1 + 0x138))(param_1);
    fVar2 = 0.0;
    if ((*(ushort *)(param_1 + 0xa6) >> 4 & 1) != 0) {
      fVar2 = *(float *)(param_2 + 6) * *(float *)((long)param_1 + 0x52c);
    }
    fVar4 = *(float *)((long)param_2 + 0x34);
    if ((*(ushort *)(param_1 + 0xa6) >> 5 & 1) == 0) {
      fVar6 = 0.0;
      if (0.001 <= ABS(fVar4)) {
        fVar2 = fVar4 * *(float *)((long)param_1 + 0x52c);
        fVar6 = 0.0;
      }
    }
    else {
      fVar6 = fVar4 * *(float *)((long)param_1 + 0x52c);
    }
    fVar5 = *(float *)(param_1 + 8);
    fVar6 = fVar6 + *(float *)((long)param_1 + 0x44);
    fVar4 = fVar6;
    fVar3 = (float)FUN_00ed0d58(fVar2 + fVar5,fVar6,param_1);
    FUN_00ed0e60((fVar2 + fVar5) - fVar3,fVar6 - fVar4,param_1);
    return;
  }
  return;
}




void FUN_00ed1898(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
     (param_2[4] == *(long *)(param_1 + 0x518))) {
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xff3f;
  }
  return;
}




void FUN_00ed1918(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 500);
  if ((uVar1 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 500) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
    FUN_0091ada4(param_1 + 0x170);
  }
  FUN_00ed0ff4(0x3f400000,param_1 + 0x170,0);
  return;
}




void FUN_00ed1968(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = param_3 + 0x88;
  FUN_00f0e700(lVar1);
  lVar2 = param_3 + 0x178;
  param_1 = param_1 - (param_2 + param_2);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  FUN_00f0e700(lVar2);
  FUN_00f13f08(lVar2);
  if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
    *(undefined8 *)(param_3 + 200) = 0;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_50);
  FUN_00f0e700(lVar1);
  if ((*(float *)(param_3 + 0x1b8) != 0.0) || (*(float *)(param_3 + 0x1bc) != param_1)) {
    *(undefined4 *)(param_3 + 0x1b8) = 0;
    *(float *)(param_3 + 0x1bc) = param_1;
    FUN_0091ada4(lVar2);
  }
  local_50 = 0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_50);
  fVar5 = *(float *)(param_3 + 0x1bc);
  plVar3 = (long *)(param_3 + 0x268);
  FUN_00f0e700(lVar2);
  fVar5 = fVar5 + param_1;
  if ((*(float *)(param_3 + 0x2a8) != 0.0) || (*(float *)(param_3 + 0x2ac) != fVar5)) {
    *(undefined4 *)(param_3 + 0x2a8) = 0;
    *(float *)(param_3 + 0x2ac) = fVar5;
    FUN_0091ada4(plVar3);
  }
  local_50 = 0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed1ad4(long *param_1)

{
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_02822778;
  FUN_00f0e4a8(param_1 + 0x11);
  FUN_00f0e4a8(param_1 + 0x2f);
  FUN_00f0e4a8(param_1 + 0x4d);
  *(undefined2 *)(param_1 + 0x6b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
                    /* WARNING: Could not recover jumptable at 0x00ed1b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4d,1);
  return;
}




void FUN_00ed1b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02822778;
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ed1c1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f0ac5c();
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  local_40 = DAT_03210f58;
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_02822878;
  local_68 = FUN_00ed1dd8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_68 = FUN_00ed1dd8;
  local_40 = DAT_03210f84;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210f5c;
  local_68 = FUN_00ed1de0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_68 = FUN_00ed1de0;
  local_40 = DAT_03210f88;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210f60;
  local_68 = FUN_00ed1de8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_68 = FUN_00ed1de8;
  local_40 = DAT_03210f8c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210fa4;
  local_68 = FUN_00ed1df0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed1dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ed210c(param_1,param_4);
  return;
}




void FUN_00ed1de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ed2188(param_1,param_4);
  return;
}




void FUN_00ed1de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ed234c(param_1,param_4);
  return;
}




void FUN_00ed1df0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb;
  }
  return;
}




void FUN_00ed1e14(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = *(uint *)(param_1 + 0x29);
  pvVar1 = (void *)param_1[0x2a];
  *param_1 = &PTR_FUN_02822878;
  pvVar4 = pvVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = *(long **)((long)pvVar4 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x29);
        pvVar1 = (void *)param_1[0x2a];
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar4 != (void *)((long)pvVar1 + (ulong)uVar3 * 0x10));
  }
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x29) = 0;
    operator_delete__(pvVar1);
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ed1eb0(void *param_1)

{
  FUN_00ed1e14();
  operator_delete(param_1);
  return;
}




void FUN_00ed1ed4(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_48 [2];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = param_2;
  local_40 = param_3;
  FUN_00ed1f60(param_1 + 0x29,local_48);
  (**(code **)(*param_1 + 0x78))(param_1,param_3,1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed1f60(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00ed23dc(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00ed1fe8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x158) = param_2;
  return;
}




void FUN_00ed1ff0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((int)param_3[0x29] != 0) {
    lVar2 = param_3[0x2a];
    lVar4 = lVar2;
    do {
      plVar3 = *(long **)(lVar4 + 8);
      fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(*param_3 + 0x48))(param_3);
      fVar6 = (float)NEON_ucvtf((int)param_3[0x29]);
      fVar6 = param_2 / fVar6;
      param_2 = fVar6 * (float)((ulong)(lVar4 - lVar2) >> 4 & 0xffffffff);
      fVar6 = param_2 + fVar6 * 0.5;
      if ((*(float *)(plVar3 + 8) != fVar5 * 0.5) ||
         (param_2 = *(float *)((long)plVar3 + 0x44), param_2 != fVar6)) {
        *(float *)(plVar3 + 8) = fVar5 * 0.5;
        *(float *)((long)plVar3 + 0x44) = fVar6;
        FUN_0091ada4(plVar3);
      }
      local_60 = 0x3f0000003f000000;
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
      lVar2 = param_3[0x2a];
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar2 + (ulong)*(uint *)(param_3 + 0x29) * 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

