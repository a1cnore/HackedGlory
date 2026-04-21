// functions/00f2d — 30 functions
#include "libGameKindred.h"




void FUN_00f2d050(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}




void FUN_00f2d05c(long param_1)

{
  FUN_00f2e03c();
  FUN_00f2e03c(param_1 + 0x18);
  FUN_00f2e028(param_1 + 0x18);
  FUN_00f2e028(param_1);
  return;
}




void FUN_00f2d094(long param_1)

{
  FUN_00f2e03c();
  FUN_00f2e03c(param_1 + 0x18);
  return;
}




void FUN_00f2d0b8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 8) & 0x3fff;
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
      uVar3 = uVar4 & 0x3fff;
      uVar4 = uVar4 >> 0xe & 0x3fff;
    }
    uVar2 = *(uint *)(param_2 + 8) >> 0xe & 0x3fff;
    if ((uVar3 != uVar1) || (uVar4 != uVar2)) {
      FUN_00f2e03c(param_1);
      FUN_00f2e03c(param_1 + 0x18);
      FUN_00f2e0dc(param_1,uVar1,uVar2,1);
      FUN_00f2e0dc(param_1 + 0x18,uVar1,uVar2,1);
      return;
    }
  }
  return;
}




void FUN_00f2d168(undefined8 param_1,long param_2,int *param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 auStack_250 [168];
  undefined1 auStack_1a8 [168];
  undefined1 auStack_100 [168];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*param_3 == 0) {
    if (((*(long *)(param_5 + 8) == param_4) || (*(long *)(param_5 + 0x10) == param_4)) ||
       (*(long *)(param_5 + 0x18) == param_4)) goto LAB_00f2d31c;
    FUN_00f2dc90(auStack_100,param_5);
    FUN_00f2dd2c(auStack_100,0,param_4);
    FUN_00f2dd58(auStack_100,0x7010103bc);
    FUN_00f2dd38(auStack_100,1);
    FUN_0199c960(param_1,auStack_100,0);
  }
  else {
    FUN_00f2dc90(auStack_100,*(undefined8 *)(param_2 + 8));
    uVar5 = NEON_fmov(0x3f800000,4);
    uVar1 = *(uint *)(*(long *)(param_2 + 0x10) + 8);
    uVar4 = NEON_ucvtf(CONCAT44(uVar1 >> 0xe,uVar1) & 0x3fff00003fff,4);
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    local_258 = CONCAT44(fVar6 / (float)((ulong)uVar4 >> 0x20),(float)uVar5 / (float)uVar4);
    FUN_00f2dd2c(auStack_100,0,param_4);
    FUN_00f2dd58(auStack_100,0x7010103bc);
    FUN_00f2dd38(auStack_100,0xe);
    FUN_00f2dd40(auStack_100,&local_258,2);
    FUN_00f2dc90(auStack_1a8,*(undefined8 *)(param_2 + 0x20));
    uVar1 = *(uint *)(*(long *)(param_2 + 0x28) + 8);
    uVar4 = NEON_ucvtf(CONCAT44(uVar1 >> 0xe,uVar1) & 0x3fff00003fff,4);
    local_260 = CONCAT44(fVar6 / (float)((ulong)uVar4 >> 0x20),(float)uVar5 / (float)uVar4);
    FUN_00f2dd2c(auStack_1a8,0,*(undefined8 *)(param_2 + 0x10));
    FUN_00f2dd58(auStack_1a8,0x7010103bc);
    FUN_00f2dd38(auStack_1a8,0xf);
    FUN_00f2dd40(auStack_1a8,&local_260,2);
    FUN_00f2dc90(auStack_250,param_5);
    FUN_00f2dd2c(auStack_250,0,*(undefined8 *)(param_2 + 0x28));
    FUN_00f2dd58(auStack_250,0x7010103bc);
    FUN_00f2dd38(auStack_250,1);
    iVar3 = FUN_0199cf54();
    if (iVar3 == 1) {
      FUN_00f2dd4c(auStack_250,1);
    }
    FUN_0199c960(param_1,auStack_100,0);
    FUN_0199c960(param_1,auStack_1a8,0);
    FUN_0199c960(param_1,auStack_250,0);
    FUN_00f2dd24(auStack_250);
    FUN_00f2dd24(auStack_1a8);
  }
  FUN_00f2dd24(auStack_100);
LAB_00f2d31c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2d3c0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  *param_1 = 0;
  param_1[1] = 0x3f80000000000008;
  pvVar2 = operator_new__(0x600);
  FUN_00e6c8bc(pvVar2,8,3);
  pvVar3 = operator_new(0x18);
  FUN_0199fb64();
  *param_1 = pvVar3;
  FUN_0199fc70(pvVar3,0);
  iVar1 = *(int *)(param_1 + 1);
  FUN_0199fccc(*param_1,pvVar2,iVar1 * iVar1,iVar1,1,0,0);
  FUN_019a02fc(*param_1,1,1,0);
  FUN_019a02cc(*param_1,0,0,0);
  return;
}




void * FUN_00f2d46c(void *param_1,int param_2,int param_3)

{
  if (param_1 == (void *)0x0) {
    param_1 = operator_new__((ulong)(uint)(param_2 * param_2 * param_2 * param_3));
  }
  FUN_00e6c8bc(param_1,param_2,param_3);
  return param_1;
}




void FUN_00f2d4c4(undefined8 param_1)

{
  FUN_00f2e03c();
  FUN_00f2e028(param_1);
  return;
}




void FUN_00f2d4ec(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 8) & 0x3fff;
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
      uVar3 = uVar4 & 0x3fff;
      uVar4 = uVar4 >> 0xe & 0x3fff;
    }
    uVar2 = *(uint *)(param_2 + 8) >> 0xe & 0x3fff;
    if ((uVar3 != uVar1) || (uVar4 != uVar2)) {
      FUN_00f2e03c(param_1);
      FUN_00f2e0dc(param_1,uVar1,uVar2,1);
      return;
    }
  }
  return;
}




void FUN_00f2d57c(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float local_114;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  undefined1 auStack_100 [176];
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (((*(long *)(param_5 + 8) == param_4) || (*(long *)(param_5 + 0x10) == param_4)) ||
     (*(long *)(param_5 + 0x18) == param_4)) {
    FUN_00f2dc90(auStack_100,*(undefined8 *)(param_2 + 8));
    FUN_00f2dd2c(auStack_100,0,param_4);
    FUN_00f2dd58(auStack_100,0x7010103bc);
    FUN_00f2dd38(auStack_100,1);
    FUN_0199c960(param_1,auStack_100,0);
    param_4 = *(long *)(param_2 + 0x10);
    FUN_00f2dd24(auStack_100);
  }
  FUN_00f2dc90(auStack_100,param_5);
  uVar1 = *(uint *)(param_3 + 1);
  local_108 = (float)uVar1;
  local_114 = 0.5 / (local_108 * local_108);
  uVar5 = NEON_ucvtf(CONCAT44(uVar1,uVar1),4);
  local_110 = CONCAT44(1.0 / (float)((ulong)uVar5 >> 0x20),0.5 / (float)uVar5);
  fStack_104 = local_108 + -1.0;
  local_108 = fStack_104 / local_108;
  FUN_00f2dd2c(auStack_100,0,param_4);
  FUN_00f2dd2c(auStack_100,1,*param_3);
  FUN_00f2dd58(auStack_100,0x7010103bc);
  FUN_00f2dd38(auStack_100,0x13);
  FUN_00f2dd40(auStack_100,&local_114,5);
  iVar3 = FUN_0199cf54();
  if (iVar3 == 1) {
    FUN_00f2dd4c(auStack_100,1);
  }
  FUN_0199c960(param_1,auStack_100,0);
  FUN_00f2dd24(auStack_100);
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2d734(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  return;
}




void FUN_00f2d740(undefined8 param_1)

{
  FUN_00f2e03c();
  FUN_00f2e028(param_1);
  return;
}




void FUN_00f2d768(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 8) & 0x3fff;
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
      uVar3 = uVar4 & 0x3fff;
      uVar4 = uVar4 >> 0xe & 0x3fff;
    }
    uVar2 = *(uint *)(param_2 + 8) >> 0xe & 0x3fff;
    if ((uVar3 != uVar1) || (uVar4 != uVar2)) {
      FUN_00f2e03c(param_1);
      FUN_00f2e0dc(param_1,uVar1,uVar2,1);
      return;
    }
  }
  return;
}




void FUN_00f2d7f8(undefined8 param_1,long param_2,undefined4 *param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_104;
  undefined1 auStack_100 [176];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(param_5 + 8) == param_4) || (*(long *)(param_5 + 0x10) == param_4)) ||
     (*(long *)(param_5 + 0x18) == param_4)) {
    FUN_00f2dc90(auStack_100,*(undefined8 *)(param_2 + 8));
    FUN_00f2dd2c(auStack_100,0,param_4);
    FUN_00f2dd58(auStack_100,0x7010103bc);
    FUN_00f2dd38(auStack_100,1);
    FUN_0199c960(param_1,auStack_100,0);
    param_4 = *(long *)(param_2 + 0x10);
    FUN_00f2dd24(auStack_100);
  }
  FUN_00f2dc90(auStack_100,param_5);
  local_104 = *param_3;
  FUN_00f2dd2c(auStack_100,0,param_4);
  FUN_00f2dd58(auStack_100,0x7010103bc);
  FUN_00f2dd38(auStack_100,0x12);
  FUN_00f2dd40(auStack_100,&local_104,1);
  iVar2 = FUN_0199cf54();
  if (iVar2 == 1) {
    FUN_00f2dd4c(auStack_100,1);
  }
  FUN_0199c960(param_1,auStack_100,0);
  FUN_00f2dd24(auStack_100);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2d968(undefined4 *param_1)

{
  *param_1 = 3;
  return;
}




void FUN_00f2d974(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_00f2e010(param_1 + lVar1);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}




void FUN_00f2d9bc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_00f2e03c(param_1 + lVar1);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x60);
  lVar1 = 0x48;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  do {
    FUN_00f2e028(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return;
}




void FUN_00f2da1c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_00f2e03c(param_1 + lVar1);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}




void FUN_00f2da64(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + 8) & 0x3fff;
    if (3 < param_3) {
      param_3 = 4;
    }
    uVar4 = *(uint *)(param_2 + 8) >> 0xe & 0x3fff;
    if (((*(uint *)(param_1 + 100) != uVar3) || (*(uint *)(param_1 + 0x68) != uVar4)) ||
       (*(uint *)(param_1 + 0x60) != param_3)) {
      lVar5 = 0;
      do {
        FUN_00f2e03c(param_1 + lVar5);
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != 0x60);
      *(uint *)(param_1 + 0x60) = param_3;
      *(uint *)(param_1 + 100) = uVar3;
      *(uint *)(param_1 + 0x68) = uVar4;
      *(long *)(param_1 + 0x70) = param_2;
      if (param_3 != 0) {
        uVar6 = 0;
        lVar5 = param_1;
        do {
          uVar3 = uVar3 + 3 >> 2;
          if (uVar3 == 0) {
            return;
          }
          uVar4 = uVar4 + 3 >> 2;
          if (uVar4 == 0) {
            return;
          }
          uVar1 = uVar3;
          if (uVar3 < 2) {
            uVar1 = 1;
          }
          uVar2 = uVar4;
          if (uVar4 < 2) {
            uVar2 = 1;
          }
          FUN_00f2e0dc(lVar5,uVar1,uVar2,1);
          uVar6 = uVar6 + 1;
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar5 + 0x10);
          lVar5 = lVar5 + 0x18;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        } while (uVar6 < param_3);
      }
    }
  }
  return;
}




void FUN_00f2db60(undefined8 param_1,long param_2,uint *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_118;
  undefined1 auStack_110 [168];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x60);
  if (*param_3 <= *(uint *)(param_2 + 0x60)) {
    uVar1 = *param_3;
  }
  if (uVar1 != 0) {
    uVar3 = 0;
    uVar6 = NEON_fmov(0x3f800000,4);
    plVar4 = (long *)(param_2 + 0x10);
    do {
      if ((plVar4[-1] == 0) || (*plVar4 == 0)) break;
      FUN_00f2dc90(auStack_110);
      uVar5 = NEON_ucvtf(CONCAT44(*(uint *)(param_4 + 8) >> 0xe,*(uint *)(param_4 + 8)) &
                         0x3fff00003fff,4);
      local_118 = CONCAT44((float)((ulong)uVar6 >> 0x20) / (float)((ulong)uVar5 >> 0x20),
                           (float)uVar6 / (float)uVar5);
      FUN_00f2dd2c(auStack_110,0,param_4);
      FUN_00f2dd58(auStack_110,0x7010103bc);
      FUN_00f2dd38(auStack_110,0x11);
      FUN_00f2dd40(auStack_110,&local_118,2);
      FUN_0199c960(param_1,auStack_110,0);
      param_4 = *plVar4;
      FUN_00f2dd24(auStack_110);
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar3 < uVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2dc90(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_02828ff8;
  *(uint *)(param_1 + 5) = (uint)*(ushort *)(param_2 + 4);
  uVar1 = *(ushort *)(param_2 + 6);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)((long)param_1 + 0x2c) = (uint)uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}




void FUN_00f2dce0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 1;
  *param_1 = &PTR_FUN_02828ff8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}




void FUN_00f2dd24(void)

{
  return;
}




void FUN_00f2dd2c(long param_1,int param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + (long)param_2 * 8 + 0x30) = param_3;
  return;
}




void FUN_00f2dd38(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x90) = param_2;
  return;
}




void FUN_00f2dd40(long param_1,void *param_2,int param_3)

{
  memmove((void *)(param_1 + 0x50),param_2,(ulong)(uint)(param_3 << 2));
  return;
}




void FUN_00f2dd4c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xa0) = param_2 & 1;
  return;
}




void FUN_00f2dd58(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f2dd60(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  FUN_0199d384(0xbf800000,*(undefined8 *)(param_1 + 0x18),0,0xffffffff);
  uVar6 = 0;
  do {
    if (*(long *)(param_1 + 0x30 + uVar6 * 8) != 0) {
      FUN_00f01264(uVar6 & 0xffffffff);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 4);
  DAT_03215378 = param_1 + 0x50;
  DAT_03215380 = 1;
  glViewport(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  glEnable(0xc11);
  glScissor(uVar8,uVar2,uVar1,uVar3);
  FUN_0199d974(*(undefined4 *)(param_1 + 0x90));
  FUN_00f01040(*(undefined8 *)(param_1 + 0x98));
  uVar8 = 0x80000000;
  uVar7 = 0x3f800000;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar7 = 0xbf800000;
    uVar8 = 0;
  }
  uVar6 = 0;
  do {
    if ((float)(&DAT_03215478)[uVar6] != (float)(&DAT_01e632b0)[uVar6]) {
      DAT_0321561c = DAT_0321561c | 0x38;
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  DAT_0321561c = DAT_0321561c | 0xb8;
  uRam0000000003215480 = 0;
  _DAT_03215478 = 0x3f800000;
  uRam0000000003215490 = 0;
  _DAT_03215488 = 0x3f80000000000000;
  uRam00000000032154c0 = 0;
  _DAT_032154b8 = 0x3f800000;
  uRam00000000032154d0 = 0;
  _DAT_032154c8 = 0x3f80000000000000;
  uRam00000000032154a0 = 0x3f800000;
  _DAT_03215498 = 0;
  uRam00000000032154b0 = 0x3f80000000000000;
  _DAT_032154a8 = 0;
  uRam00000000032154e0 = 0x3f800000;
  _DAT_032154d8 = 0;
  uRam00000000032154f0 = 0x3f80000000000000;
  _DAT_032154e8 = 0;
  _DAT_03215548 = (ulong)uVar7 << 0x20;
  _DAT_03215568 = CONCAT44(uVar8,0x80000000);
  uRam0000000003215540 = 0;
  _DAT_03215538 = 0x3f800000;
  uRam0000000003215550 = 0;
  uRam0000000003215560 = 0xbf800000;
  _DAT_03215558 = 0;
  uRam0000000003215570 = 0x3f80000080000000;
  FUN_00f013dc(DAT_03215388,0xffff,0);
  FUN_00f01570(DAT_032157d0);
  glDrawArrays(4,0,6);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0199d4b0();
    FUN_0199d384(0xbf800000,0,0,0xffffffff);
  }
  if (*(long *)(lVar4 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00f2df78(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0xaf);
  *param_2 = 0;
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *puVar4 = &PTR___cxa_pure_virtual_028256c8;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *puVar4 = &PTR_FUN_02828ff8;
  puVar4[2] = uVar6;
  puVar4[1] = uVar5;
  memcpy(puVar4 + 3,(void *)(param_1 + 0x18),0x89);
  return puVar4;
}

