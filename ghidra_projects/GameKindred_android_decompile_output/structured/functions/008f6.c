// functions/008f6 — 28 functions
#include "libGameKindred.h"




void FUN_008f6008(undefined8 *param_1)

{
  FUN_00e7d2e0();
  *param_1 = &PTR_FUN_027b8b30;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00e6a31c();
  return;
}




void FUN_008f603c(void)

{
  return;
}




void FUN_008f6040(void)

{
  return;
}




void FUN_008f604c(undefined4 param_1)

{
  DAT_02be3008 = param_1;
  return;
}




void FUN_008f6058(void)

{
  return;
}




void FUN_008f605c(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}




void FUN_008f6068(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = DAT_02c08f90;
  *param_3 = DAT_02c08f94;
  return;
}




void FUN_008f6084(void)

{
  return;
}




void FUN_008f6088(void)

{
  return;
}




void FUN_008f608c(void)

{
  return;
}




void FUN_008f6658(void *param_1)

{
  FUN_00e7d2fc();
  operator_delete(param_1);
  return;
}




void FUN_008f667c(void)

{
  return;
}




void FUN_008f6680(void)

{
  return;
}




void FUN_008f6684(void)

{
  return;
}




void FUN_008f6688(void)

{
  return;
}




undefined1  [16] FUN_008f668c(void)

{
  return ZEXT816(0x3f800000);
}




void FUN_008f6694(void)

{
  return;
}




void FUN_008f68f8(byte *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (uVar2 < param_2) {
    FUN_008f6954(param_1,param_2 - uVar2);
    return;
  }
  if ((bVar1 & 1) == 0) {
    param_1[param_2 + 1] = 0;
    *param_1 = (byte)((int)param_2 << 1);
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + param_2) = 0;
  *(ulong *)(param_1 + 8) = param_2;
  return;
}




ulong * FUN_008f6954(ulong *param_1,ulong param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    bVar1 = (byte)*param_1;
    uVar3 = (ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
      lVar2 = 0x16;
    }
    else {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      lVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
    }
    if (lVar2 - uVar4 < param_2) {
      FUN_008f6a20(param_1,lVar2,(uVar4 + param_2) - lVar2,uVar4,uVar4,0,0);
      uVar3 = (ulong)(byte)*param_1;
    }
    if ((uVar3 & 1) == 0) {
      uVar3 = (long)param_1 + 1;
    }
    else {
      uVar3 = param_1[2];
    }
    memset((void *)(uVar3 + uVar4),param_3,param_2);
    uVar4 = uVar4 + param_2;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar4 << 1);
    }
    else {
      param_1[1] = uVar4;
    }
    *(undefined1 *)(uVar3 + uVar4) = 0;
  }
  return param_1;
}




void FUN_008f6a20(ulong *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,long param_7)

{
  size_t __n;
  void *__dest;
  byte *__src;
  ulong uVar1;
  
  if (param_3 <= -param_2 - 0x11) {
    if ((*param_1 & 1) == 0) {
      __src = (byte *)((long)param_1 + 1);
    }
    else {
      __src = (byte *)param_1[2];
    }
    if (param_2 < 0x7fffffffffffffe7) {
      uVar1 = param_2 << 1;
      if (param_2 << 1 <= param_3 + param_2) {
        uVar1 = param_3 + param_2;
      }
      if (uVar1 < 0x17) {
        uVar1 = 0x17;
      }
      else {
        uVar1 = uVar1 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar1 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar1);
    if (param_5 != 0) {
      memcpy(__dest,__src,param_5);
    }
    __n = (param_4 - param_6) - param_5;
    if (__n != 0) {
      memcpy((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
    }
    if (param_2 != 0x16) {
      operator_delete(__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_008f6b34(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_02c08fa4 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_02c08fa4)[param_2 >> 3] | bVar2;
  if ((param_1 & 1) == 0) {
    bVar1 = (&DAT_02c08fa4)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_02c08fa4)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_02c08fa4 != '\0')) {
    auVar4 = FUN_008f6bb4();
    FUN_00ecb1b4(auVar4,0x40400000);
    return;
  }
  return;
}




bool FUN_008f6ba0(void)

{
  return DAT_02c08fa4 != '\0';
}




void FUN_008f6bb4(void)

{
  long lVar1;
  float fVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = -1.0;
  FUN_00938d48(&local_2c,0,0);
  fVar2 = local_2c;
  if (ABS(local_2c + 1.0) < 1.1920929e-07) {
    fVar2 = (float)FUN_009f1fa8(0x17);
  }
  if (DAT_02c08fa4 != '\0') {
    fVar2 = fVar2 * 0.25;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}




void FUN_008f6c50(uint param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_008f6bb4();
  fVar2 = 0.0;
  if ((param_1 & 1) == 0) {
    fVar2 = 1.0;
  }
  FUN_00ecb1b4(fVar2 * fVar1);
  return;
}




void FUN_008f6c84(void)

{
  FUN_008f6d08();
  FUN_00ecb2b4();
  DAT_02c08fac = FUN_008f6da8();
  DAT_02c08fb0 = FUN_008f6ee8();
  DAT_02c08fb4 = FUN_008f7028();
  DAT_02c08fb8 = FUN_008f70e0();
  DAT_02c08fbc = FUN_008f8584();
  DAT_02c08fc0 = FUN_008f8774();
  DAT_02c08fc4 = FUN_008f8964();
  DAT_02c08fc8 = FUN_008f9c94();
  DAT_02c08fcc = FUN_008f9e84();
  return;
}




void FUN_008f6d08(void)

{
  long lVar1;
  float fVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = -1.0;
  FUN_00938d48(0,&local_2c,0);
  fVar2 = local_2c;
  if (ABS(local_2c + 1.0) < 1.1920929e-07) {
    fVar2 = (float)FUN_009f1fa8(0x18);
  }
  if (DAT_02c08fa8 != '\0') {
    fVar2 = fVar2 * 0.05;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}




undefined4 FUN_008f6da8(void)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ecb2e4("mainmenu");
  FUN_00ecb2f8("default");
  FUN_008fa488(local_50,"build://Music/MainMenu/Parts/01_mainmenu_intro.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,0,"intro");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/MainMenu/Parts/02_mainmenu_looping.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/MainMenu/Parts/02_mainmenu_looping.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb328();
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_008f6ee8(void)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ecb2e4("heroselect");
  FUN_00ecb2f8("default");
  FUN_008fa488(local_50,"build://Music/HeroSelect/Parts/01_heroselect_intro.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,0,"intro");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/HeroSelect/Parts/02_heroselect_looping.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa488(local_50,"build://Music/HeroSelect/Parts/02_heroselect_looping.ogg");
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00ecb30c(0x3f800000,pvVar1,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00ecb328();
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

