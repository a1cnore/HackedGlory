// functions/00962 — 44 functions
#include "libGameKindred.h"




void FUN_00962000(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x438);
    if ((uVar1 & 1) == 0) {
      FUN_00e81354(param_2,param_1 + 0x438);
      return;
    }
  }
  return;
}




void FUN_0096204c(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_009511d8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_008fcdb8(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x18 + -0x18,param_2);
  return;
}




void FUN_009620d8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00e80f6c(), (uVar1 & 1) != 0)) {
    uVar1 = FUN_00e84e4c(param_1 + 0x3cb8);
    if ((uVar1 & 1) == 0) {
      FUN_00e833c0(param_1 + 0x3cb8);
      return;
    }
  }
  return;
}




void FUN_00962128(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00e80f6c(), (uVar1 & 1) != 0)) {
    uVar1 = FUN_00e84e4c(param_1 + 0x3da8);
    if ((uVar1 & 1) == 0) {
      FUN_00e8342c(param_1 + 0x3da8);
      return;
    }
  }
  return;
}




void FUN_00962178(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined **local_70 [5];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00e80f6c();
    if ((uVar2 & 1) == 0) {
      FUN_00e84dac(local_70);
      local_70[0] = &PTR_FUN_027bbd18;
      local_48 = 0;
      uStack_40 = 0;
      FUN_00950984(local_70);
      local_70[0] = &PTR_FUN_027bbd18;
      FUN_00958034(&local_48,1);
      FUN_00e84dd8(local_70);
    }
    else {
      uVar2 = FUN_00e84e4c(param_1 + 0x3e70);
      if ((uVar2 & 1) == 0) {
        FUN_00e834d0(param_1 + 0x3e70,param_2);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00962240(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x5260);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_1 + 0x5268);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = (byte *)(lVar8 + uVar9 * 0x108);
      bVar3 = *pbVar5;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(lVar8 + uVar9 * 0x108 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar5 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_00962314:
            return *(undefined4 *)(lVar8 + (uVar9 & 0xffffffff) * 0x108 + 0x40);
          }
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar7) {
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) goto LAB_00962314;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 == 0)) goto LAB_00962314;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return 0xffffffff;
}




undefined4 FUN_00962338(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x5360);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_1 + 0x5368);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = (byte *)(lVar8 + uVar9 * 0x38);
      bVar3 = *pbVar5;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(lVar8 + uVar9 * 0x38 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar5 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_0096240c:
            return *(undefined4 *)(lVar8 + (uVar9 & 0xffffffff) * 0x38 + 0x30);
          }
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar7) {
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) goto LAB_0096240c;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 == 0)) goto LAB_0096240c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return 0xffffffff;
}




void FUN_00962430(long param_1,undefined8 param_2)

{
  FUN_00e82f64(param_2,param_1 + 0x3890);
  return;
}




void FUN_00962444(long param_1,undefined4 param_2)

{
  FUN_00e82f9c(param_2,param_1 + 0x38f0);
  return;
}




void FUN_00962458(long param_1,undefined8 param_2)

{
  FUN_00e8300c(param_2,param_1 + 0x3980);
  return;
}




void FUN_0096246c(long param_1,undefined8 param_2)

{
  FUN_00e82fd4(param_2,param_1 + 0x3928);
  return;
}




void FUN_00962480(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x39c0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82ec0(param_1 + 0x39c0);
  return;
}




void FUN_009624bc(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3a08);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82ef4(param_2,param_1 + 0x3a08);
  return;
}




void FUN_00962500(long param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  
  lVar1 = param_1 + 0x3a50;
  uVar7 = FUN_00e84e4c(lVar1);
  if ((uVar7 & 1) != 0) {
    return;
  }
  FUN_00e84dec(lVar1);
  FUN_00951534(param_1 + 15000,0);
  lVar8 = FUN_00cc7c60(param_2);
  if ((lVar8 != 0) && (iVar4 = FUN_00ccbcfc(lVar8), iVar4 != 0)) {
    iVar4 = FUN_00ccbd38(lVar8);
    iVar5 = FUN_00ccbcfc(lVar8);
    bVar2 = *(byte *)(lVar8 + 0x60);
    bVar3 = false;
    uVar7 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar7 = *(ulong *)(lVar8 + 0x68);
    }
    if (uVar7 == 4) {
      iVar6 = FUN_0090d610((byte *)(lVar8 + 0x60),0,0xffffffffffffffff,"gold",4);
      bVar3 = iVar6 == 0;
    }
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    if (bVar3) {
      FUN_0090436c();
    }
    else {
      FUN_00904384(1.0 - (float)iVar4 / (float)iVar5,pbVar9);
    }
  }
  FUN_00e82f2c(param_2,lVar1);
  return;
}




void FUN_0096261c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3aa8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e83044(param_2,param_1 + 0x3aa8);
  return;
}




void FUN_00962660(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3b10);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e8307c(param_2,param_1 + 0x3b10);
  return;
}




void FUN_009626a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00e83384(param_2,param_3,param_1 + 0x3c38);
  return;
}




void FUN_009626bc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e833f4(param_2,param_1 + 0x3d60);
  return;
}




void FUN_009626fc(long param_1,undefined8 param_2)

{
  FUN_00e83460(param_2,param_1 + 0x3de0);
  return;
}




void FUN_00962710(long param_1,undefined8 param_2)

{
  FUN_00e83498(param_2,param_1 + 0x3e28);
  return;
}




undefined8 FUN_00962724(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3ea8);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82c24(param_1 + 0x3ea8);
  return uVar2;
}




undefined8 FUN_00962764(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3ee8);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82b10(param_1 + 0x3ee8);
  return uVar2;
}




undefined8 FUN_009627a4(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3f28);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82b44(param_2 & 1,param_3,param_1 + 0x3f28);
  return uVar2;
}




undefined8 FUN_00962800(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3f68);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82b80(param_1 + 0x3f68);
  return uVar2;
}




undefined8 FUN_00962840(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3fa8);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82bb4(param_2,param_1 + 0x3fa8);
  return uVar2;
}




undefined8 FUN_00962888(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3fe8);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82bec(param_1 + 0x3fe8,param_2);
  return uVar2;
}




undefined8 FUN_009628d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4f50);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82510(param_2,param_1 + 0x4f50);
  return uVar2;
}




void FUN_00962918(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4f8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81458(param_1 + 0x4f8);
  return;
}




void FUN_00962950(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x578);
    if ((uVar1 & 1) == 0) {
      FUN_00e814d4(param_1 + 0x578);
      return;
    }
  }
  return;
}




void FUN_00962994(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x5b8);
    if ((uVar1 & 1) == 0) {
      FUN_00e81508(param_1 + 0x5b8);
      return;
    }
  }
  return;
}




void FUN_009629d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x538);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81474(param_2,param_1 + 0x538);
  return;
}




undefined8 FUN_00962a18(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0x4070);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00e82c8c(param_2 & 1,param_1 + 0x4070);
      return uVar2;
    }
  }
  return 0;
}




undefined8 FUN_00962a6c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x40b0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82cc4(param_2,param_1 + 0x40b0);
  return uVar2;
}




uint FUN_00962ab4(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e84e4c(param_1 + 0x40f0);
  uVar2 = 0;
  if ((uVar3 & 1) == 0) {
    FUN_008fa54c(local_50,"login_first7");
    uVar2 = FUN_00e82cc4(local_50,param_1 + 0x40f0);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00962b48(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4130);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82cfc(param_2,param_1 + 0x4130);
  return uVar2;
}




undefined8 FUN_00962b90(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x41a0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82d34(param_2,param_1 + 0x41a0);
  return uVar2;
}




undefined8 FUN_00962bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4200);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00e82d6c(param_2,param_3,param_1 + 0x4200);
  return uVar2;
}




void FUN_00962c34(long param_1)

{
  FUN_0096204c(param_1 + 0x53a8);
  return;
}




void FUN_00962c40(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3bb8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82adc(param_1 + 0x3bb8);
  return;
}




void FUN_00962c7c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4470);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81f3c(param_1 + 0x4470);
  return;
}




void FUN_00962cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong local_90 [2];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  FUN_00e70a24(param_3,local_60);
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  FUN_00e70a24(param_4,local_78);
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  FUN_00e70a24(param_5,local_90);
  uVar2 = FUN_00e84e4c(param_1 + 0x44d0);
  if ((uVar2 & 1) == 0) {
    FUN_00e81bbc(param_2,local_60,local_78,local_90,param_6,param_1 + 0x44d0);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00962db8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x4530);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e81ca8(param_2,param_1 + 0x4530);
  return;
}




void FUN_00962dfc(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  
  uVar5 = FUN_00e84e4c(param_1 + 0x4590);
  if ((uVar5 & 1) == 0) {
    FUN_00e81c38(param_2,param_1 + 0x4590);
    if (*(uint *)(param_1 + 0x53d8) != 0) {
      uVar5 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x53e0);
        lVar6 = lVar8 + uVar5 * 0x1a8;
        bVar2 = *(byte *)(lVar6 + 0x28);
        bVar3 = *param_2;
        __n = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar6 + 0x30);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar8 + uVar5 * 0x1a8 + 0x38);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar6 + 0x29);
          }
          __s2 = param_2 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar7 = (byte *)(lVar6 + 0x29);
              lVar6 = -(ulong)(bVar2 >> 1);
              do {
                if (*pbVar7 != *__s2) goto LAB_00962f08;
                pbVar7 = pbVar7 + 1;
                lVar6 = lVar6 + 1;
                __s2 = __s2 + 1;
              } while (lVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00962f08;
          *(undefined1 *)(lVar8 + uVar5 * 0x1a8 + 0x1a0) = 1;
        }
LAB_00962f08:
        FUN_0099cf3c(param_1 + 0x5570,0xffffffff);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x53d8));
    }
  }
  return;
}




void FUN_00962f40(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  
  uVar5 = FUN_00e84e4c(param_1 + 0x45f0);
  if ((uVar5 & 1) == 0) {
    FUN_00e81c70(param_2,param_1 + 0x45f0);
    if (*(uint *)(param_1 + 0x53d8) != 0) {
      uVar5 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x53e0);
        lVar6 = lVar8 + uVar5 * 0x1a8;
        bVar2 = *(byte *)(lVar6 + 0x28);
        bVar3 = *param_2;
        __n = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar6 + 0x30);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar8 + uVar5 * 0x1a8 + 0x38);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar6 + 0x29);
          }
          __s2 = param_2 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar7 = (byte *)(lVar6 + 0x29);
              lVar6 = -(ulong)(bVar2 >> 1);
              do {
                if (*pbVar7 != *__s2) goto LAB_0096304c;
                pbVar7 = pbVar7 + 1;
                lVar6 = lVar6 + 1;
                __s2 = __s2 + 1;
              } while (lVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_0096304c;
          *(undefined1 *)(lVar8 + uVar5 * 0x1a8 + 0x1a0) = 1;
        }
LAB_0096304c:
        FUN_0099cf3c(param_1 + 0x5570,0xffffffff);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x53d8));
    }
  }
  return;
}

