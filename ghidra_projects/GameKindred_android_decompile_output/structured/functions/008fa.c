// functions/008fa — 45 functions
#include "libGameKindred.h"




void FUN_008fa074(void)

{
  FUN_00ecb254(DAT_02c08fac);
  FUN_00ecb254(DAT_02c08fb0);
  FUN_00ecb254(DAT_02c08fb4);
  FUN_00ecb254(DAT_02c08fb8);
  FUN_00ecb254(DAT_02c08fbc);
  FUN_00ecb254(DAT_02c08fc0);
  FUN_00ecb254(DAT_02c08fc4);
  FUN_00ecb254(DAT_02c08fc8);
  FUN_00ecb254(DAT_02c08fcc);
  return;
}




void FUN_008fa0ec(void)

{
  return;
}




void FUN_008fa0f0(void)

{
  if (DAT_02c08fa8 != '\0') {
    FUN_008fa130(0,0);
    return;
  }
  FUN_008f6d08();
  FUN_00ecb2b4();
  return;
}




bool FUN_008fa11c(void)

{
  return DAT_02c08fa8 != '\0';
}




void FUN_008fa130(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_02c08fa8 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_02c08fa8)[param_2 >> 3] | bVar2;
  if ((param_1 & 1) == 0) {
    bVar1 = (&DAT_02c08fa8)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_02c08fa8)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_02c08fa8 != '\0')) {
    auVar4 = FUN_008f6d08();
    FUN_00ecb2c0(auVar4,0x40400000);
    return;
  }
  return;
}




void FUN_008fa19c(uint param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_008f6d08();
  fVar2 = 0.0;
  if ((param_1 & 1) == 0) {
    fVar2 = 1.0;
  }
  FUN_00ecb2c0(fVar2 * fVar1);
  return;
}




void FUN_008fa1d0(void)

{
  FUN_00ecb240(0x40000000,DAT_02c08fac);
  FUN_00ecb240(0x40000000,DAT_02c08fb0);
  FUN_00ecb240(0x40000000,DAT_02c08fb4);
  FUN_00ecb240(0x40000000,DAT_02c08fb8);
  FUN_00ecb240(0x40000000,DAT_02c08fbc);
  FUN_00ecb240(0x40000000,DAT_02c08fc0);
  FUN_00ecb240(0x40000000,DAT_02c08fc4);
  FUN_00ecb240(0x40000000,DAT_02c08fc8);
  FUN_00ecb240(0x40000000,DAT_02c08fcc);
  return;
}




void FUN_008fa278(void)

{
  FUN_008fa1d0();
  FUN_00ecb218(DAT_02c08fac);
  FUN_00ecb280(0x3f000000,DAT_02c08fac);
  return;
}




void FUN_008fa2a8(void)

{
  FUN_008fa1d0();
  FUN_00ecb218(DAT_02c08fb0);
  FUN_00ecb280(0x3f000000,DAT_02c08fb0);
  return;
}




void FUN_008fa2d8(void)

{
  FUN_008fa1d0();
  FUN_00ecb218(DAT_02c08fb4);
  FUN_00ecb280(0x3f000000,DAT_02c08fb4);
  return;
}




void FUN_008fa308(void)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_008fa1d0();
  uVar3 = FUN_00da2be8();
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_00da2c48();
    if (iVar2 == 2) {
      FUN_00ecb218(DAT_02c08fc4);
      uVar1 = DAT_02c08fc4;
    }
    else {
      FUN_00ecb218(DAT_02c08fb8);
      uVar1 = DAT_02c08fb8;
    }
    FUN_00ecb280(0x3e800000,uVar1);
    return;
  }
  return;
}




void FUN_008fa36c(void)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_008fa1d0();
  uVar3 = FUN_00da2be8();
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_00da2c48();
    if (iVar2 == 2) {
      FUN_00ecb218(DAT_02c08fc8);
      uVar1 = DAT_02c08fc8;
    }
    else {
      FUN_00ecb218(DAT_02c08fbc);
      uVar1 = DAT_02c08fbc;
    }
    FUN_00ecb280(0x3f000000,uVar1);
    return;
  }
  return;
}




void FUN_008fa3d0(void)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_008fa1d0();
  uVar3 = FUN_00da2be8();
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_00da2c48();
    if (iVar2 == 2) {
      FUN_00ecb218(DAT_02c08fcc);
      uVar1 = DAT_02c08fcc;
    }
    else {
      FUN_00ecb218(DAT_02c08fc0);
      uVar1 = DAT_02c08fc0;
    }
    FUN_00ecb280(0x3f000000,uVar1);
    return;
  }
  return;
}




void FUN_008fa434(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_00da2be8();
  if ((uVar3 & 1) == 0) {
    return;
  }
  iVar2 = FUN_00da2c48();
  uVar1 = DAT_02c08fb8;
  if (iVar2 == 2) {
    uVar1 = DAT_02c08fc4;
  }
  FUN_00ecb268(uVar1,param_1);
  return;
}




void FUN_008fa488(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00f1c904(param_2,local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f1c8ec(pvVar1,param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fa51c(void)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_008f6bb4();
  FUN_00ecb1b4(auVar1,0x3f000000);
  auVar1 = FUN_008f6d08();
  FUN_00ecb2c0(auVar1,0x3f000000);
  return;
}




void FUN_008fa54c(ulong *param_1,char *param_2)

{
  char *__s;
  size_t __n;
  void *__dest;
  ulong uVar1;
  
  __s = "";
  if (param_2 != (char *)0x0) {
    __s = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_008fa5d4;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_008fa5d4:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}




void FUN_008fa5ec(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void thunk_FUN_008fa604(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_00962724();
  return;
}




void FUN_008fa604(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_00962724();
  return;
}




void thunk_FUN_008fa604(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_00962724();
  return;
}




void FUN_008fa62c(undefined8 *param_1)

{
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  *param_1 = &PTR_FUN_027b8c10;
  param_1[3] = &PTR_FUN_027b8fb8;
  FUN_009edcc4(param_1 + 6);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_008fa718(param_1 + 0x17);
  FUN_008fa718(param_1 + 0x20);
  FUN_008fa718(param_1 + 0x29);
  FUN_008fa718(param_1 + 0x32);
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  FUN_008fc800();
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  FUN_008fc800(param_1 + 0x44);
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  FUN_008fc800();
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  FUN_008fc800(param_1 + 0x4e);
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  FUN_008fc780();
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}




void FUN_008fa718(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00cab89c(param_1 + 3);
  FUN_00cab89c(param_1 + 6);
  FUN_00caba38(param_1);
  return;
}




undefined8 FUN_008fa750(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 0) {
    return *(undefined8 *)(param_1 + 0xa0);
  }
  return 0;
}




long FUN_008fa768(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    lVar1 = 0;
    if (*(char *)(*(long *)(param_1 + 0xb0) + 0x4c) != '\0') {
      lVar1 = *(long *)(param_1 + 0xb0);
    }
    return lVar1;
  }
  return 0;
}




long FUN_008fa78c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (1 < *(uint *)(param_1 + 0x98)) {
    lVar1 = *(long *)(param_1 + 0xa0) + 0x78;
  }
  return lVar1;
}




long FUN_008fa7ac(long param_1)

{
  long lVar1;
  
  if (1 < *(uint *)(param_1 + 0xa8)) {
    lVar1 = 0;
    if (*(char *)(*(long *)(param_1 + 0xb0) + 0x4c) != '\0') {
      lVar1 = *(long *)(param_1 + 0xb0) + 0x50;
    }
    return lVar1;
  }
  return 0;
}




void FUN_008fa7d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_008fa808((int)param_1,param_1 + 0x1f8,param_2,param_3);
  if ((uVar1 & 1) != 0) {
    FUN_009580b8();
    FUN_00962764();
    return;
  }
  return;
}




void FUN_008fa808(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x2c0) == '\0') || (uVar2 = FUN_008fab30(), (uVar2 & 1) != 0)) {
    (*param_4)();
    uVar3 = 0;
  }
  else {
    FUN_008fa54c(local_50,"redeem");
    FUN_008fce60(param_2,local_50);
    *(undefined8 *)(param_2 + 0x18) = param_3;
    *(code **)(param_2 + 0x20) = param_4;
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_008fa8ac(long param_1,uint param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_008fa808((int)param_1,param_1 + 0x220,param_4,param_5);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009580b8();
    FUN_009627a4(uVar2,param_2 & 1,param_3);
    return;
  }
  return;
}




void FUN_008fa8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_008fa808((int)param_1,param_1 + 0x248,param_2,param_3);
  if ((uVar1 & 1) != 0) {
    FUN_009580b8();
    FUN_00962800();
    return;
  }
  return;
}




void FUN_008fa928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_008fa808((int)param_1,param_1 + 0x270,param_2,param_3);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009580b8();
    FUN_00962840(uVar2,param_4);
    return;
  }
  return;
}




void FUN_008fa96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_50,&DAT_02c09148);
  FUN_008fa9f4(param_1,param_2,param_3,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fa9f4(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x2c0) == '\0') || (uVar2 = FUN_008fab30(), (uVar2 & 1) != 0)) {
    (*param_3)();
  }
  else {
    FUN_008fcdb8(local_60,param_4);
    FUN_008fce60(param_1 + 0x298,local_60);
    *(undefined8 *)(param_1 + 0x2b0) = param_2;
    *(code **)(param_1 + 0x2b8) = param_3;
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    uVar3 = FUN_009580b8();
    FUN_00962888(uVar3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008faaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_50,&DAT_02c09160);
  FUN_008fa9f4(param_1,param_2,param_3,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_008fab30(void)

{
  if (((((*(long *)(DAT_02c09178 + 0x210) == 0) || (*(long *)(DAT_02c09178 + 0x218) == 0)) &&
       ((*(long *)(DAT_02c09178 + 0x238) == 0 || (*(long *)(DAT_02c09178 + 0x240) == 0)))) &&
      ((*(long *)(DAT_02c09178 + 0x260) == 0 || (*(long *)(DAT_02c09178 + 0x268) == 0)))) &&
     ((*(long *)(DAT_02c09178 + 0x288) == 0 || (*(long *)(DAT_02c09178 + 0x290) == 0)))) {
    if (*(long *)(DAT_02c09178 + 0x2b0) != 0) {
      return *(long *)(DAT_02c09178 + 0x2b8) != 0;
    }
    return false;
  }
  return true;
}




void FUN_008faba0(long param_1)

{
  FUN_008fabe8(param_1 + 0x98,0);
  FUN_008fac94(param_1 + 0xa8,0);
  FUN_009edd24(param_1 + 0x30);
  FUN_00caba38(param_1 + 0xb8);
  FUN_00caba38(param_1 + 0x100);
  return;
}




void FUN_008fabe8(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x78;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x30);
      do {
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if ((pbVar2[-0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x20));
        }
        lVar1 = lVar1 + -0x78;
        pbVar2 = pbVar2 + 0x78;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_008fac94(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x50;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x28);
      do {
        if ((*(byte *)(puVar2 + 1) & 1) != 0) {
          operator_delete((void *)puVar2[3]);
        }
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        if ((*(byte *)(puVar2 + -5) & 1) != 0) {
          operator_delete((void *)puVar2[-3]);
        }
        lVar1 = lVar1 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_008fad30(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  byte local_238 [16];
  void *local_228;
  byte local_220 [16];
  void *local_210;
  byte local_208 [16];
  void *local_1f8;
  byte local_1f0 [16];
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  long local_160;
  ulong local_158;
  int local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  void *local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  int local_108;
  undefined8 local_100;
  char *local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  byte local_e0;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  byte local_b0;
  void *local_a0;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_008faba0();
  if (*(char *)(param_2 + 0x25) != '\0') {
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = (void *)0x0;
    local_128 = (void *)0x0;
    local_138 = 0;
    local_110 = 0x400;
    local_108 = 0;
    local_100 = 0;
    local_148 = operator_new(0x28);
    local_148[3] = 0;
    local_148[4] = 0;
    local_148[1] = 0x10000;
    local_148[2] = 0;
    *local_148 = 0;
    local_f8 = (char *)(param_2 + 0x29);
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      local_f8 = *(char **)(param_2 + 0x38);
    }
    local_140 = local_148;
    local_f0 = local_f8;
    FUN_008fd344(&local_160,&local_f8);
    if ((local_108 == 0) && (local_150 == 3)) {
      lVar4 = FUN_008fd190(&local_160,"systemActive");
      if (local_160 + (local_158 & 0xffffffff) * 0x30 == lVar4) {
        bVar2 = false;
      }
      else {
        local_f8 = "systemActive";
        local_e8 = 0x100005;
        local_f0 = (char *)0xc;
        lVar4 = FUN_008feca4(&local_160,&local_f8);
        bVar2 = false;
        if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
          local_f8 = "systemActive";
          local_e8 = 0x100005;
          local_f0 = (char *)0xc;
          lVar4 = FUN_008feca4(&local_160,&local_f8);
          bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_1 + 0x2c0) = bVar2;
      lVar4 = FUN_008fd190(&local_160,"seasonalBundles");
      if (local_160 + (local_158 & 0xffffffff) * 0x30 != lVar4) {
        local_f8 = "seasonalBundles";
        local_e8 = 0x100005;
        local_f0 = (char *)0xf;
        lVar4 = FUN_008feca4(&local_160,&local_f8);
        if (*(int *)(lVar4 + 0x10) == 4) {
          local_f8 = "seasonalBundles";
          local_e8 = 0x100005;
          local_f0 = (char *)0xf;
          plVar5 = (long *)FUN_008feca4(&local_160,&local_f8);
          uVar3 = *(uint *)(plVar5 + 1);
          if (uVar3 != 0) {
            if (*(int *)(*plVar5 + 0x10) != 0) {
              FUN_00cac27c(*plVar5,param_1 + 0xb8);
              uVar3 = *(uint *)(plVar5 + 1);
            }
            if ((1 < uVar3) && (*(int *)(*plVar5 + 0x28) != 0)) {
              FUN_00cac27c(*plVar5 + 0x18,param_1 + 0x100);
            }
          }
        }
      }
      lVar4 = FUN_008fd190(&local_160,"seasonalChestExchanges");
      if (local_160 + (local_158 & 0xffffffff) * 0x30 != lVar4) {
        local_f8 = "seasonalChestExchanges";
        local_e8 = 0x100005;
        local_f0 = (char *)0x16;
        lVar4 = FUN_008feca4(&local_160,&local_f8);
        if (*(int *)(lVar4 + 0x10) == 4) {
          local_f8 = "seasonalChestExchanges";
          local_e8 = 0x100005;
          local_f0 = (char *)0x16;
          plVar5 = (long *)FUN_008feca4(&local_160,&local_f8);
          uVar3 = *(uint *)(plVar5 + 1);
          if (uVar3 != 0) {
            if (*(int *)(*plVar5 + 0x10) != 0) {
              FUN_00cac27c(*plVar5,param_1 + 0x148);
              uVar3 = *(uint *)(plVar5 + 1);
            }
            if ((1 < uVar3) && (*(int *)(*plVar5 + 0x10) != 0)) {
              FUN_00cac27c(*plVar5 + 0x18,param_1 + 400);
            }
          }
        }
      }
      lVar4 = FUN_008fd190(&local_160,"rankModels");
      if (local_160 + (local_158 & 0xffffffff) * 0x30 != lVar4) {
        local_f8 = "rankModels";
        local_e8 = 0x100005;
        local_f0 = (char *)0xa;
        lVar4 = FUN_008feca4(&local_160,&local_f8);
        if (*(int *)(lVar4 + 0x10) == 4) {
          local_f8 = "rankModels";
          local_e8 = 0x100005;
          local_f0 = (char *)0xa;
          plVar5 = (long *)FUN_008feca4(&local_160,&local_f8);
          if ((int)plVar5[1] != 0) {
            plVar11 = (long *)*plVar5;
            do {
              puVar7 = (undefined8 *)&DAT_01e277f2;
              lVar4 = FUN_008fd190(plVar11,"seasonId");
              puVar6 = puVar7;
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar4) {
                local_f8 = "seasonId";
                local_e8 = 0x100005;
                local_f0 = (char *)0x8;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_f8 = "seasonId";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x8;
                  puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_f8);
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar6 = (undefined8 *)*puVar6;
                  }
                }
              }
              FUN_008fa54c(local_178,puVar6);
              lVar4 = FUN_008fd190(plVar11,"dailyChestHashedSku");
              puVar6 = puVar7;
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar4) {
                local_f8 = "dailyChestHashedSku";
                local_e8 = 0x100005;
                local_f0 = (char *)0x13;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_f8 = "dailyChestHashedSku";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x13;
                  puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_f8);
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar6 = (undefined8 *)*puVar6;
                  }
                }
              }
              FUN_008fa54c(local_190,puVar6);
              lVar4 = FUN_008fd190(plVar11,"rankUpChestHashedSku");
              puVar6 = puVar7;
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar4) {
                local_f8 = "rankUpChestHashedSku";
                local_e8 = 0x100005;
                local_f0 = (char *)0x14;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_f8 = "rankUpChestHashedSku";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x14;
                  puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_f8);
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar6 = (undefined8 *)*puVar6;
                  }
                }
              }
              FUN_008fa54c(local_1a8,puVar6);
              lVar4 = FUN_008fd190(plVar11,"battlePassRankUpChestHashedSku");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar4) {
                local_f8 = "battlePassRankUpChestHashedSku";
                local_e8 = 0x100005;
                local_f0 = (char *)0x1e;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_f8 = "battlePassRankUpChestHashedSku";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x1e;
                  puVar7 = (undefined8 *)FUN_008feca4(plVar11,&local_f8);
                  if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
                    puVar7 = (undefined8 *)*puVar7;
                  }
                }
              }
              FUN_008fa54c(local_1c0,puVar7);
              lVar4 = FUN_008fd190(plVar11,"rank");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                uVar13 = 0;
              }
              else {
                local_f8 = "rank";
                local_e8 = 0x100005;
                local_f0 = (char *)0x4;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                uVar13 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
                  local_f8 = "rank";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x4;
                  puVar8 = (undefined4 *)FUN_008feca4(plVar11,&local_f8);
                  uVar13 = *puVar8;
                }
              }
              lVar4 = FUN_008fd190(plVar11,"previousMaxTokens");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                uVar14 = 0;
              }
              else {
                local_f8 = "previousMaxTokens";
                local_e8 = 0x100005;
                local_f0 = (char *)0x11;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                uVar14 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
                  local_f8 = "previousMaxTokens";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x11;
                  puVar8 = (undefined4 *)FUN_008feca4(plVar11,&local_f8);
                  uVar14 = *puVar8;
                }
              }
              lVar4 = FUN_008fd190(plVar11,"maxTokens");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                uVar15 = 0;
              }
              else {
                local_f8 = "maxTokens";
                local_e8 = 0x100005;
                local_f0 = (char *)0x9;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                uVar15 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
                  local_f8 = "maxTokens";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x9;
                  puVar8 = (undefined4 *)FUN_008feca4(plVar11,&local_f8);
                  uVar15 = *puVar8;
                }
              }
              lVar4 = FUN_008fd190(plVar11,"maxPips");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                uVar12 = 0;
              }
              else {
                local_f8 = "maxPips";
                local_e8 = 0x100005;
                local_f0 = (char *)0x7;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                uVar12 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
                  local_f8 = "maxPips";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x7;
                  puVar8 = (undefined4 *)FUN_008feca4(plVar11,&local_f8);
                  uVar12 = *puVar8;
                }
              }
              lVar4 = FUN_008fd190(plVar11,"numClaimableRankUpChests");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                uVar10 = 0;
              }
              else {
                local_f8 = "numClaimableRankUpChests";
                local_e8 = 0x100005;
                local_f0 = (char *)0x18;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                uVar10 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
                  local_f8 = "numClaimableRankUpChests";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x18;
                  puVar8 = (undefined4 *)FUN_008feca4(plVar11,&local_f8);
                  uVar10 = *puVar8;
                }
              }
              FUN_009edbe4(&local_f8,local_178,local_190,local_1a8,local_1c0,uVar13,uVar14,uVar15,
                           uVar12,uVar10);
              FUN_008fbf6c(param_1 + 0x98,&local_f8);
              if ((local_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
              if ((local_c8 & 1) != 0) {
                operator_delete(local_b8);
              }
              if ((local_e0 & 1) != 0) {
                operator_delete(local_d0);
              }
              if (((ulong)local_f8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_e4,local_e8));
              }
              if ((local_1c0[0] & 1) != 0) {
                operator_delete(local_1b0);
              }
              if ((local_1a8[0] & 1) != 0) {
                operator_delete(local_198);
              }
              if ((local_190[0] & 1) != 0) {
                operator_delete(local_180);
              }
              if ((local_178[0] & 1) != 0) {
                operator_delete(local_168);
              }
              plVar11 = plVar11 + 3;
            } while (plVar11 != (long *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x18));
          }
        }
      }
      lVar4 = FUN_008fd190(&local_160,"seasonModels");
      if (local_160 + (local_158 & 0xffffffff) * 0x30 != lVar4) {
        local_f8 = "seasonModels";
        local_e8 = 0x100005;
        local_f0 = (char *)0xc;
        lVar4 = FUN_008feca4(&local_160,&local_f8);
        if (*(int *)(lVar4 + 0x10) == 4) {
          local_f8 = "seasonModels";
          local_e8 = 0x100005;
          local_f0 = (char *)0xc;
          plVar5 = (long *)FUN_008feca4(&local_160,&local_f8);
          if ((int)plVar5[1] != 0) {
            plVar11 = (long *)*plVar5;
            do {
              lVar4 = FUN_008fd190(plVar11,"id");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                puVar6 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_f8 = "id";
                local_e8 = 0x100005;
                local_f0 = (char *)0x2;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                puVar6 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_f8 = "id";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x2;
                  puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_f8);
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar6 = (undefined8 *)*puVar6;
                  }
                }
              }
              FUN_008fa54c(local_1d8,puVar6);
              lVar4 = FUN_008fd190(plVar11,"tokenId");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                puVar6 = (undefined8 *)&DAT_01e277f2;
              }
              else {
                local_f8 = "tokenId";
                local_e8 = 0x100005;
                local_f0 = (char *)0x7;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                puVar6 = (undefined8 *)&DAT_01e277f2;
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_f8 = "tokenId";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0x7;
                  puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_f8);
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar6 = (undefined8 *)*puVar6;
                  }
                }
              }
              FUN_008fa54c(local_1f0,puVar6);
              lVar4 = FUN_008fd190(plVar11,"tokensPerPip");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                uVar13 = 0;
              }
              else {
                local_f8 = "tokensPerPip";
                local_e8 = 0x100005;
                local_f0 = (char *)0xc;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                uVar13 = 0;
                if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
                  local_f8 = "tokensPerPip";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0xc;
                  puVar8 = (undefined4 *)FUN_008feca4(plVar11,&local_f8);
                  uVar13 = *puVar8;
                }
              }
              lVar4 = FUN_008fd190(plVar11,"currentSeason");
              if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar4) {
                bVar2 = false;
              }
              else {
                local_f8 = "currentSeason";
                local_e8 = 0x100005;
                local_f0 = (char *)0xd;
                lVar4 = FUN_008feca4(plVar11,&local_f8);
                bVar2 = false;
                if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
                  local_f8 = "currentSeason";
                  local_e8 = 0x100005;
                  local_f0 = (char *)0xd;
                  lVar4 = FUN_008feca4(plVar11,&local_f8);
                  bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
                }
              }
              FUN_009edc74(&local_f8,local_1d8,local_1f0,uVar13,bVar2);
              FUN_008fc034(param_1 + 0xa8,&local_f8);
              if ((local_c8 & 1) != 0) {
                operator_delete(local_b8);
              }
              if ((local_e0 & 1) != 0) {
                operator_delete(local_d0);
              }
              if (((ulong)local_f8 & 1) != 0) {
                operator_delete((void *)CONCAT44(uStack_e4,local_e8));
              }
              if ((local_1f0[0] & 1) != 0) {
                operator_delete(local_1e0);
              }
              if ((local_1d8[0] & 1) != 0) {
                operator_delete(local_1c8);
              }
              plVar11 = plVar11 + 3;
            } while (plVar11 != (long *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x18));
          }
        }
      }
      lVar4 = FUN_008fd190(&local_160,"playerAscensionData");
      if (local_160 + (local_158 & 0xffffffff) * 0x30 != lVar4) {
        local_f8 = "playerAscensionData";
        local_e8 = 0x100005;
        local_f0 = (char *)0x13;
        lVar4 = FUN_008feca4(&local_160,&local_f8);
        if (*(int *)(lVar4 + 0x10) == 3) {
          local_f8 = "playerAscensionData";
          local_e8 = 0x100005;
          local_f0 = (char *)0x13;
          plVar5 = (long *)FUN_008feca4(&local_160,&local_f8);
          lVar4 = param_1 + 0x30;
          FUN_009edd24(lVar4);
          lVar9 = FUN_008fd190(plVar5,"rewardCollectInterval");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar9) {
            uVar13 = 0;
          }
          else {
            local_f8 = "rewardCollectInterval";
            local_e8 = 0x100005;
            local_f0 = (char *)0x15;
            lVar9 = FUN_008feca4(plVar5,&local_f8);
            uVar13 = 0;
            if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) != 0) {
              local_f8 = "rewardCollectInterval";
              local_e8 = 0x100005;
              local_f0 = (char *)0x15;
              puVar8 = (undefined4 *)FUN_008feca4(plVar5,&local_f8);
              uVar13 = *puVar8;
            }
          }
          *(undefined4 *)(param_1 + 0x80) = uVar13;
          lVar9 = FUN_008fd190(plVar5,"lastRewardCollectTime");
          dVar17 = 0.0;
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar9) {
            local_f8 = "lastRewardCollectTime";
            local_e8 = 0x100005;
            local_f0 = (char *)0x15;
            lVar9 = FUN_008feca4(plVar5,&local_f8);
            if ((*(byte *)(lVar9 + 0x11) >> 1 & 1) != 0) {
              local_f8 = "lastRewardCollectTime";
              local_e8 = 0x100005;
              local_f0 = (char *)0x15;
              FUN_008feca4(plVar5,&local_f8);
              dVar17 = (double)FUN_008fc0f0();
            }
          }
          *(long *)(param_1 + 0x88) = (long)dVar17;
          lVar9 = FUN_008fd190(plVar5,"canCollectEndSeasonChest");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar9) {
            bVar2 = false;
          }
          else {
            local_f8 = "canCollectEndSeasonChest";
            local_e8 = 0x100005;
            local_f0 = (char *)0x18;
            lVar9 = FUN_008feca4(plVar5,&local_f8);
            bVar2 = false;
            if ((*(byte *)(lVar9 + 0x11) & 1) != 0) {
              local_f8 = "canCollectEndSeasonChest";
              local_e8 = 0x100005;
              local_f0 = (char *)0x18;
              lVar9 = FUN_008feca4(plVar5,&local_f8);
              bVar2 = *(int *)(lVar9 + 0x10) == 0x102;
            }
          }
          *(bool *)(param_1 + 0x90) = bVar2;
          lVar9 = FUN_008fd190(plVar5,"seasonTokenMap");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar9) {
            local_f8 = "seasonTokenMap";
            local_e8 = 0x100005;
            local_f0 = (char *)0xe;
            lVar9 = FUN_008feca4(plVar5,&local_f8);
            if (*(int *)(lVar9 + 0x10) == 3) {
              local_f8 = "seasonTokenMap";
              local_e8 = 0x100005;
              local_f0 = (char *)0xe;
              plVar11 = (long *)FUN_008feca4(plVar5,&local_f8);
              if ((int)plVar11[1] != 0) {
                puVar6 = (undefined8 *)*plVar11;
                do {
                  dVar17 = (double)FUN_008fc0f0(puVar6 + 3);
                  puVar7 = puVar6;
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar7 = (undefined8 *)*puVar6;
                  }
                  FUN_008fa54c(local_208,puVar7);
                  FUN_009edffc(lVar4,local_208,(int)dVar17);
                  if ((local_208[0] & 1) != 0) {
                    operator_delete(local_1f8);
                  }
                  puVar6 = puVar6 + 6;
                } while (puVar6 != (undefined8 *)(*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30));
              }
            }
          }
          lVar9 = FUN_008fd190(plVar5,"seasonRankCollectedMap");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar9) {
            local_f8 = "seasonRankCollectedMap";
            local_e8 = 0x100005;
            local_f0 = (char *)0x16;
            lVar9 = FUN_008feca4(plVar5,&local_f8);
            if (*(int *)(lVar9 + 0x10) == 3) {
              local_f8 = "seasonRankCollectedMap";
              local_e8 = 0x100005;
              local_f0 = (char *)0x16;
              plVar11 = (long *)FUN_008feca4(plVar5,&local_f8);
              if ((int)plVar11[1] != 0) {
                puVar6 = (undefined8 *)*plVar11;
                do {
                  uVar13 = 0;
                  if ((*(byte *)((long)puVar6 + 0x29) >> 2 & 1) != 0) {
                    uVar13 = *(undefined4 *)(puVar6 + 3);
                  }
                  puVar7 = puVar6;
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar7 = (undefined8 *)*puVar6;
                  }
                  FUN_008fa54c(local_220,puVar7);
                  FUN_009ee410(lVar4,local_220,uVar13,1);
                  if ((local_220[0] & 1) != 0) {
                    operator_delete(local_210);
                  }
                  puVar6 = puVar6 + 6;
                } while (puVar6 != (undefined8 *)(*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30));
              }
            }
          }
          lVar9 = FUN_008fd190(plVar5,"seasonBattlePassRankCollectedMap");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar9) {
            local_f8 = "seasonBattlePassRankCollectedMap";
            local_e8 = 0x100005;
            local_f0 = (char *)0x20;
            lVar9 = FUN_008feca4(plVar5,&local_f8);
            if (*(int *)(lVar9 + 0x10) == 3) {
              local_f8 = "seasonBattlePassRankCollectedMap";
              local_e8 = 0x100005;
              local_f0 = (char *)0x20;
              plVar5 = (long *)FUN_008feca4(plVar5,&local_f8);
              if ((int)plVar5[1] != 0) {
                puVar6 = (undefined8 *)*plVar5;
                do {
                  uVar13 = 0;
                  if ((*(byte *)((long)puVar6 + 0x29) >> 2 & 1) != 0) {
                    uVar13 = *(undefined4 *)(puVar6 + 3);
                  }
                  puVar7 = puVar6;
                  if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                    puVar7 = (undefined8 *)*puVar6;
                  }
                  FUN_008fa54c(local_238,puVar7);
                  FUN_009ee410(lVar4,local_238,uVar13,0);
                  if ((local_238[0] & 1) != 0) {
                    operator_delete(local_228);
                  }
                  puVar6 = puVar6 + 6;
                } while (puVar6 != (undefined8 *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30));
              }
            }
          }
          FUN_009ee87c(lVar4);
        }
      }
      if ((*(int *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
        FUN_008ffcf8("ascensionRank",*(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x60),1);
      }
      if ((((*(int *)(param_1 + 0xa8) != 0) &&
           (lVar4 = *(long *)(param_1 + 0xb0), *(char *)(lVar4 + 0x4c) != '\0')) && (lVar4 != 0)) &&
         (*(int *)(lVar4 + 0x48) != 0)) {
        uVar3 = FUN_009ee38c(param_1 + 0x30);
        fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
        FUN_008ffd24((float)uVar3 / fVar16,"ascensionTokens",0);
      }
      if (*(int *)(param_1 + 0x1e8) != 0) {
        lVar4 = *(long *)(param_1 + 0x1f0);
        do {
          if (*(code **)(lVar4 + 8) == (code *)0x0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x10));
          }
          else {
            (**(code **)(lVar4 + 8))();
          }
          lVar4 = lVar4 + 0x20;
        } while (lVar4 != *(long *)(param_1 + 0x1f0) + (ulong)*(uint *)(param_1 + 0x1e8) * 0x20);
      }
    }
    puVar6 = local_140;
    if (local_140 != (undefined8 *)0x0) {
      FUN_008fd2c4(local_140);
      operator_delete(puVar6);
    }
    free(local_128);
    if (local_130 != (void *)0x0) {
      operator_delete(local_130);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_008faba0(long param_1)

{
  FUN_008fabe8(param_1 + 0x98,0);
  FUN_008fac94(param_1 + 0xa8,0);
  FUN_009edd24(param_1 + 0x30);
  FUN_00caba38(param_1 + 0xb8);
  FUN_00caba38(param_1 + 0x100);
  return;
}




void thunk_FUN_008fa604(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_00962724();
  return;
}




void thunk_FUN_008fa604(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_00962724();
  return;
}




void thunk_FUN_008fa604(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_00962724();
  return;
}




void thunk_FUN_008fa36c(void)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_008fa1d0();
  uVar3 = FUN_00da2be8();
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_00da2c48();
    if (iVar2 == 2) {
      FUN_00ecb218(DAT_02c08fc8);
      uVar1 = DAT_02c08fc8;
    }
    else {
      FUN_00ecb218(DAT_02c08fbc);
      uVar1 = DAT_02c08fbc;
    }
    FUN_00ecb280(0x3f000000,uVar1);
    return;
  }
  return;
}

