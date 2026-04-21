// functions/00931 — 45 functions
#include "libGameKindred.h"




long FUN_0093102c(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_009310a0:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_009310a0;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void FUN_009310dc(undefined8 param_1,undefined8 param_2)

{
  FUN_009310e8(param_1,param_1,param_2);
  return;
}




void FUN_009310e8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [72];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_3 + 0x138))(param_3);
  uVar3 = (**(code **)(*param_3 + 0x140))(param_3);
  FUN_0199cd4c(auStack_90,uVar2,uVar3);
  FUN_0199cee8(0,0,0,0x3f800000,auStack_90);
  FUN_0199cf00(0x3f800000,auStack_90);
  FUN_0199c960(param_2,auStack_90,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009311ac(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027b99e0;
  FUN_00f0e4a8(param_1 + 0x17);
  FUN_00f0e4a8(param_1 + 0x35);
  *(undefined1 *)(param_1 + 0x53) = 0;
  return;
}




void FUN_009311f0(float param_1,long *param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 local_70 [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar1 = param_2 + 0x17;
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  plVar2 = param_2 + 0x35;
  (**(code **)(*param_2 + 0x78))(param_2,plVar2,1);
  uVar6 = FUN_00f00274();
  uVar7 = FUN_00f00280();
  FUN_00f13f08(uVar6,uVar7,param_2);
  plVar5 = (long *)FUN_00f13624();
  FUN_00f13fd8(param_2,plVar5);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_horizontal");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_2 + 0x13c);
  if ((uVar3 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_2 + 0x13c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_2 + 0x20) != param_1) || (*(float *)((long)param_2 + 0x104) != param_1)) {
    *(float *)(param_2 + 0x20) = param_1;
    *(float *)((long)param_2 + 0x104) = param_1;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_horizontal");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_2 + 0x22c);
  *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) | 1;
  if ((uVar3 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_2 + 0x22c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_2 + 0x3e) != param_1) || (*(float *)((long)param_2 + 500) != param_1)) {
    *(float *)(param_2 + 0x3e) = param_1;
    *(float *)((long)param_2 + 500) = param_1;
    FUN_0091ada4(plVar2);
  }
  local_70[0] = 0xd0;
  FUN_00f14070(plVar1,local_70);
  FUN_00f14070(plVar2,local_70);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,0,10);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar2,0,0x12);
  *(byte *)(param_2 + 0x53) = param_3 & 1;
  *(uint *)((long)param_2 + 0x84) = *(uint *)((long)param_2 + 0x84) & 0xfffffff7;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00931430(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x298) = param_2 & 1;
  return;
}




void FUN_0093143c(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x298) != '\0') {
    *(uint *)(param_1 + 0x84) =
         *(uint *)(param_1 + 0x84) & 0xfffffff0 | *(uint *)(param_1 + 0x84) & 7 | (param_2 & 1) << 3
    ;
  }
  return;
}




void FUN_00931458(undefined8 *param_1)

{
  FUN_00f11234();
  *param_1 = &PTR_FUN_027ba008;
  FUN_0091e630(param_1 + 0x34);
  FUN_00f13ca4(param_1 + 0x11d);
  FUN_00f11234(param_1 + 0x134);
  FUN_009311ac(param_1 + 0x168);
  FUN_00ed47b4(param_1 + 0x1bc);
  FUN_00b8aa28(param_1 + 0x20b);
  param_1[0x31] = FUN_009310dc;
  param_1[0x32] = param_1;
  FUN_00f112f0(param_1,1);
  return;
}




void FUN_009314d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined1 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f0040c(param_1,1);
  uVar4 = FUN_00e6a474("root-layer");
  uVar5 = FUN_0091ed5c("root-layer",uVar4,0x1234);
  plVar7 = param_1 + 0x34;
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  plVar1 = param_1 + 0x11d;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x134;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x1bc,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x168,1);
  *(uint *)((long)param_1 + 0x224) = *(uint *)((long)param_1 + 0x224) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x96c) = *(uint *)((long)param_1 + 0x96c) | 4;
  FUN_0096704c(auStack_88);
  FUN_0091e79c(plVar7,auStack_88);
  plVar6 = (long *)FUN_00f13624();
  (**(code **)(*plVar6 + 0x58))(plVar6,plVar7);
  (**(code **)(*plVar6 + 0x58))(plVar6,plVar1);
  FUN_00f13fd8(param_1,plVar6);
  plVar7 = (long *)FUN_00f13624();
  (**(code **)(*plVar7 + 0x58))(plVar7,plVar2);
  FUN_00f13fd8(plVar1,plVar7);
  FUN_00967174(auStack_88,plVar6);
  FUN_0096720c(auStack_88,plVar7);
  uVar4 = FUN_00e6a474("frontend-ui");
  uVar5 = FUN_0091ed5c("frontend-ui",uVar4,0x1234);
  *(uint *)((long)param_1 + 0xa24) =
       *(uint *)((long)param_1 + 0xa24) & 0x80000000 |
       *(uint *)((long)param_1 + 0xa24) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  FUN_009316e0(param_1);
  FUN_009311f0(local_60,param_1 + 0x168,local_5c);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x20b,1);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009316e0(long *param_1)

{
  long lVar1;
  float fVar2;
  float local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&uStack_2c,&local_30);
  FUN_00f13f08(uStack_2c,local_30,param_1);
  FUN_00f13f08(uStack_2c,local_30,param_1 + 0x168);
  (**(code **)(*param_1 + 0x90))(param_1);
  fVar2 = (float)FUN_00931778(param_1);
  FUN_00f0028c((int)fVar2,(int)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093176c(long param_1)

{
  FUN_00ed4afc(param_1 + 0xde0);
  return;
}




void thunk_FUN_009316e0(long *param_1)

{
  long lVar1;
  float fVar2;
  float fStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&uStack_2c,&fStack_30);
  FUN_00f13f08(uStack_2c,fStack_30,param_1);
  FUN_00f13f08(uStack_2c,fStack_30,param_1 + 0x168);
  (**(code **)(*param_1 + 0x90))(param_1);
  fVar2 = (float)FUN_00931778(param_1);
  FUN_00f0028c((int)fVar2,(int)fStack_30);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00931778(long param_1)

{
  if ((*(byte *)(param_1 + 0x96c) >> 2 & 1) == 0) {
    FUN_0091eaf4(param_1 + 0x1a0);
    return;
  }
  FUN_00f13e54(param_1 + 0x9a0);
  return;
}




void FUN_00931790(long param_1)

{
  FUN_0091ead0(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffb;
  *(uint *)(param_1 + 0x96c) = *(uint *)(param_1 + 0x96c) | 4;
  if (*(char *)(param_1 + 0xdd8) != '\0') {
    *(uint *)(param_1 + 0xbc4) = *(uint *)(param_1 + 0xbc4) & 0xfffffff7;
  }
  FUN_009316e0(param_1);
  return;
}




void FUN_009317e4(long param_1)

{
  FUN_0091ea9c(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 4;
  *(uint *)(param_1 + 0x96c) = *(uint *)(param_1 + 0x96c) & 0xfffffffb;
  if (*(char *)(param_1 + 0xdd8) != '\0') {
    *(uint *)(param_1 + 0xbc4) = *(uint *)(param_1 + 0xbc4) | 8;
  }
  FUN_009316e0(param_1);
  return;
}




void FUN_00931838(long param_1,uint param_2)

{
  FUN_00b8adec(param_1 + 0x1058,param_2 & 1);
  return;
}




long FUN_00931848(long param_1)

{
  return param_1 + 0xde0;
}




byte FUN_00931850(long param_1)

{
  return *(byte *)(param_1 + 0x96c) >> 2 & 1;
}




void FUN_0093185c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ba008;
  FUN_009319e8(param_1 + 0x20b);
  FUN_00ed483c(param_1 + 0x1bc);
  FUN_0091ac9c(param_1 + 0x168);
  FUN_00f13d08(param_1 + 0x134);
  FUN_00f13d08(param_1 + 0x11d);
  FUN_0091e6b0(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_009318c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ba008;
  param_1[0x20b] = &PTR_FUN_027e8060;
  FUN_00f0d3a4(param_1 + 0x276);
  param_1[600] = &PTR_FUN_028266f0;
  param_1[0x26f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x272);
  FUN_00f13d08(param_1 + 600);
  param_1[0x23a] = &PTR_FUN_028266f0;
  param_1[0x251] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x254);
  FUN_00f13d08(param_1 + 0x23a);
  param_1[0x21c] = &PTR_FUN_028266f0;
  param_1[0x233] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x236);
  FUN_00f13d08(param_1 + 0x21c);
  FUN_00f01868(param_1 + 0x20b);
  FUN_00ed483c(param_1 + 0x1bc);
  FUN_0091ac9c(param_1 + 0x168);
  FUN_00f13d08(param_1 + 0x134);
  FUN_00f13d08(param_1 + 0x11d);
  FUN_0091e6b0(param_1 + 0x34);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




long FUN_009319d8(long param_1)

{
  return param_1 + 0xb8;
}




long FUN_009319e0(long param_1)

{
  return param_1 + 0xe0;
}




void FUN_009319e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e8060;
  FUN_00f0d3a4(param_1 + 0x6b);
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
  return;
}




void FUN_00931a8c(void)

{
  return;
}




void FUN_00931a90(void)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  float fVar5;
  float __x;
  undefined1 auStack_40 [4];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019807b8();
  if (uVar2 < 2) {
    DAT_02c7bfe0 = 0;
    DAT_02c7bfe4 = 0.0;
    DAT_02c7bfe8 = 0;
  }
  else {
    puVar3 = (uint *)FUN_019807cc(0);
    puVar4 = (uint *)FUN_019807cc(1);
    __x = ((float)puVar3[1] - (float)puVar4[1]) * ((float)puVar3[1] - (float)puVar4[1]) +
          ((float)puVar3[2] - (float)puVar4[2]) * ((float)puVar3[2] - (float)puVar4[2]);
    fVar5 = SQRT(__x);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(__x);
    }
    if ((((0xf < (int)*puVar3) && ((*puVar3 & 1) != 0)) && (0xf < (int)*puVar4)) &&
       ((*puVar4 & 1) != 0)) {
      DAT_02c7bfe8 = CONCAT44((fVar5 - DAT_02c7bfe4) + DAT_02c7bfe8._4_4_,fVar5 - DAT_02c7bfe4);
    }
    DAT_02c7bfe4 = fVar5;
    if (((0xf < (int)*puVar3) && ((*puVar3 & 1) != 0)) &&
       ((0xf < (int)*puVar4 && ((*puVar4 & 1) != 0)))) {
      FUN_00f00298(&local_3c,auStack_40);
      DAT_02c7bfe0 = local_3c * 0.3 < ABS(DAT_02c7bfe8._4_4_);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00931be0(void)

{
  DAT_02c7bfe0 = 0;
  DAT_02c7bfe4 = 0;
  DAT_02c7bfe8 = 0;
  return;
}




void FUN_00931bf8(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x90);
  FUN_00932440();
  DAT_02c7c010 = pvVar1;
  return;
}




void FUN_00931c28(void)

{
  if (DAT_02c7c010 != 0) {
    FUN_0093276c();
    return;
  }
  return;
}




void FUN_00931c3c(void)

{
  if (DAT_02c7c010 != (long *)0x0) {
    (**(code **)(*DAT_02c7c010 + 8))();
  }
  DAT_02c7c010 = (long *)0x0;
  return;
}




void FUN_00931c78(undefined8 param_1,uint param_2)

{
  if (DAT_02c7c010 != 0) {
    FUN_0093289c(DAT_02c7c010,param_1,param_2 & 1);
    return;
  }
  return;
}




void FUN_00931c9c(void)

{
  if (DAT_02c7c010 != 0) {
    FUN_00932648();
    return;
  }
  return;
}




undefined8 FUN_00931cb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7c010 != 0) {
    uVar1 = FUN_009331f0(DAT_02c7c010,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00931cd0(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7c010 != 0) {
    uVar1 = FUN_0093325c(DAT_02c7c010,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00931cf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7c010 != 0) {
    uVar1 = FUN_009332a8(DAT_02c7c010,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00931d10(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_02c7c010 != 0) {
    uVar1 = FUN_00932b70(DAT_02c7c010,param_1,param_2);
    return uVar1;
  }
  return 0;
}




bool FUN_00931d34(void)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *__s2;
  char *pcVar6;
  void *__s1;
  
  uVar4 = FUN_009580c4();
  if (((uVar4 & 1) != 0) && (lVar5 = FUN_009580b8(0), *(char *)(lVar5 + 0x568a) != '\0')) {
    lVar5 = FUN_009580b8();
    bVar2 = *(byte *)(lVar5 + 0x54c0);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar5 + 0x54c8);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n != sVar1) {
      return true;
    }
    __s1 = *(void **)(lVar5 + 0x54d0);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(lVar5 + 0x54c1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(lVar5 + 0x54c1);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) {
            return true;
          }
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
        return false;
      }
    }
    else if (__n != 0) {
      iVar3 = memcmp(__s1,__s2,__n);
      return iVar3 != 0;
    }
  }
  return false;
}




void FUN_00931e18(void)

{
  if (DAT_02c7c010 != 0) {
    FUN_00932c9c();
    return;
  }
  return;
}




void FUN_00931e2c(undefined8 param_1)

{
  if (DAT_02c7c010 != 0) {
    FUN_00932ca4(DAT_02c7c010,param_1);
    return;
  }
  return;
}




void FUN_00931e48(void)

{
  if (DAT_02c7c010 != 0) {
    FUN_00933134();
    return;
  }
  return;
}




void FUN_00931e5c(undefined8 param_1)

{
  if (DAT_02c7c010 != 0) {
    FUN_00933190(DAT_02c7c010,param_1);
    return;
  }
  return;
}




void FUN_00931e78(undefined1 param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  byte local_50 [16];
  void *local_40;
  undefined1 local_38 [16];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00ec5f5c();
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_00931d34(), (uVar4 & 1) != 0)) {
    lVar5 = FUN_009580b8();
    FUN_008fcdb8(local_50,lVar5 + 0x54c0);
    uVar4 = FUN_00ceab64();
    uVar1 = 0xff;
    if ((uVar4 & 1) == 0) {
      uVar1 = param_1;
    }
    FUN_00e6a8a8(local_38,"_%u",uVar1);
    uStack_56 = 0;
    local_68 = 0x20;
    uStack_5f = (undefined7)local_38._8_8_;
    uStack_58 = SUB81(local_38._8_8_,7);
    uStack_67 = (undefined7)local_38._0_8_;
    uStack_60 = SUB81(local_38._0_8_,7);
    uStack_57 = 0;
    FUN_0090de84(local_50,(ulong)&local_68 | 1,0x10);
    if ((local_68 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58)));
    }
    if (DAT_02c7c010 != 0) {
      pvVar2 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar2 = local_40;
      }
      FUN_00933190(DAT_02c7c010,pvVar2);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00931f88(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  if (DAT_02c7c010 != 0) {
    lVar2 = FUN_009331f0(DAT_02c7c010,param_1);
    bVar1 = false;
    if (lVar2 != 0) {
      bVar1 = *(char *)(lVar2 + 0x21) != '\0';
    }
    return bVar1;
  }
  return false;
}




void FUN_00931fc8(uint param_1)

{
  if (DAT_02c7c010 != 0) {
    FUN_009332d8(DAT_02c7c010,param_1 & 1);
    return;
  }
  return;
}




void FUN_00931fe4(void)

{
  if (DAT_02c7c010 != 0) {
    FUN_00933304();
    return;
  }
  return;
}




void FUN_00931ff8(undefined8 param_1,uint param_2)

{
  if (DAT_02c7c010 != 0) {
    FUN_0093330c(DAT_02c7c010,param_1,param_2 & 1);
    return;
  }
  return;
}

