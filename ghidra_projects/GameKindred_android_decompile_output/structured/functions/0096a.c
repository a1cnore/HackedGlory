// functions/0096a — 16 functions
#include "libGameKindred.h"




void FUN_0096a018(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 * FUN_0096a06c(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_0096a124(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_0096a124(undefined8 param_1,byte *param_2,long param_3,long param_4)

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
LAB_0096a198:
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
        if (uVar4 == 0) goto LAB_0096a198;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void FUN_0096a1d4(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_00969c70(param_1,1);
    FUN_0096a2bc(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        lVar2 = lVar6 + lVar5;
        *puVar1 = &PTR_FUN_027bca40;
        FUN_0096a3ec(puVar1 + 1,lVar2 + 8);
        FUN_008fcdb8(puVar1 + 3,lVar2 + 0x18);
        FUN_008fcdb8(puVar1 + 6,lVar2 + 0x30);
        FUN_008fcdb8(puVar1 + 9,lVar2 + 0x48);
        FUN_008fcdb8(puVar1 + 0xc,lVar2 + 0x60);
        lVar5 = lVar5 + 0x78;
      } while ((ulong)uVar3 * 0x78 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_0096a2bc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x78);
    uVar2 = *param_1;
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar5);
        *puVar1 = &PTR_FUN_027bca40;
        FUN_0096a3ec(puVar1 + 1,(long)puVar4 + lVar5 + 8);
        FUN_008fcdb8(puVar1 + 3,(long)puVar4 + lVar5 + 0x18);
        FUN_008fcdb8(puVar1 + 6,(long)puVar4 + lVar5 + 0x30);
        FUN_008fcdb8(puVar1 + 9,(long)puVar4 + lVar5 + 0x48);
        FUN_008fcdb8(puVar1 + 0xc,(long)puVar4 + lVar5 + 0x60);
        lVar5 = lVar5 + 0x78;
      } while ((ulong)uVar2 * 0x78 - lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x78;
        do {
          (**(code **)*puVar4)(puVar4);
          lVar5 = lVar5 + -0x78;
          puVar4 = puVar4 + 0xf;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_0096a3ec(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0096a464(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x598;
    do {
      FUN_0096a538(lVar3,lVar2);
      lVar2 = lVar2 + 0x598;
      lVar4 = lVar4 + -0x598;
      lVar3 = lVar3 + 0x598;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_0096a464(uint *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x598);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (ulong)*param_1 * 0x598;
      pvVar3 = pvVar1;
      do {
        FUN_0096a538(pvVar3,puVar2);
        puVar2 = puVar2 + 0xb3;
        lVar4 = lVar4 + -0x598;
        pvVar3 = (void *)((long)pvVar3 + 0x598);
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x598;
        do {
          (**(code **)*puVar2)(puVar2);
          lVar4 = lVar4 + -0x598;
          puVar2 = puVar2 + 0xb3;
        } while (lVar4 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_0096a538(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_027bca18;
  FUN_0096a884(param_1 + 1,param_2 + 8);
  FUN_0096a91c(param_1 + 3,param_2 + 0x18);
  param_1[5] = &PTR_FUN_027bc950;
  FUN_008fcdb8(param_1 + 6,param_2 + 0x30);
  FUN_008fcdb8(param_1 + 9,param_2 + 0x48);
  FUN_008fcdb8(param_1 + 0xc,param_2 + 0x60);
  FUN_008fcdb8(param_1 + 0xf,param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)((long)param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)((long)param_1 + 0xac) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x18] = &PTR_FUN_027bc900;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  FUN_008fcdb8(param_1 + 0x19,param_2 + 200);
  FUN_008fcdb8(param_1 + 0x1c,param_2 + 0xe0);
  FUN_008fcdb8(param_1 + 0x1f,param_2 + 0xf8);
  FUN_008fcdb8(param_1 + 0x22,param_2 + 0x110);
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x25] = uVar1;
  param_1[0x27] = &PTR_FUN_027bc900;
  FUN_008fcdb8(param_1 + 0x28,param_2 + 0x140);
  FUN_008fcdb8(param_1 + 0x2b,param_2 + 0x158);
  FUN_008fcdb8(param_1 + 0x2e,param_2 + 0x170);
  FUN_008fcdb8(param_1 + 0x31,param_2 + 0x188);
  uVar1 = *(undefined8 *)(param_2 + 0x1a0);
  param_1[0x35] = *(undefined8 *)(param_2 + 0x1a8);
  param_1[0x34] = uVar1;
  param_1[0x36] = &PTR_FUN_027bc978;
  FUN_008fcdb8(param_1 + 0x37,param_2 + 0x1b8);
  FUN_008fcdb8(param_1 + 0x3a,param_2 + 0x1d0);
  FUN_008fcdb8(param_1 + 0x3d,param_2 + 0x1e8);
  FUN_008fcdb8(param_1 + 0x40,param_2 + 0x200);
  FUN_008fcdb8(param_1 + 0x43,param_2 + 0x218);
  FUN_008fcdb8(param_1 + 0x46,param_2 + 0x230);
  FUN_008fcdb8(param_1 + 0x49,param_2 + 0x248);
  FUN_008fcdb8(param_1 + 0x4c,param_2 + 0x260);
  FUN_008fcdb8(param_1 + 0x4f,param_2 + 0x278);
  param_1[0x52] = &PTR_FUN_027bc9a0;
  FUN_008fcdb8(param_1 + 0x53,param_2 + 0x298);
  FUN_008fcdb8(param_1 + 0x56,param_2 + 0x2b0);
  FUN_008fcdb8(param_1 + 0x59,param_2 + 0x2c8);
  FUN_008fcdb8(param_1 + 0x5c,param_2 + 0x2e0);
  uVar1 = *(undefined8 *)(param_2 + 0x312);
  *(undefined8 *)((long)param_1 + 0x31a) = *(undefined8 *)(param_2 + 0x31a);
  *(undefined8 *)((long)param_1 + 0x312) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x308);
  param_1[0x62] = *(undefined8 *)(param_2 + 0x310);
  param_1[0x61] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2f8);
  param_1[0x60] = *(undefined8 *)(param_2 + 0x300);
  param_1[0x5f] = uVar1;
  param_1[0x65] = &PTR_FUN_027bc9c8;
  FUN_008fcdb8(param_1 + 0x66,param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x358);
  uVar1 = *(undefined8 *)(param_2 + 0x348);
  param_1[0x6a] = *(undefined8 *)(param_2 + 0x350);
  param_1[0x69] = uVar1;
  param_1[0x6c] = &PTR_FUN_027bc9f0;
  uVar1 = *(undefined8 *)(param_2 + 0x368);
  param_1[0x6e] = *(undefined8 *)(param_2 + 0x370);
  param_1[0x6d] = uVar1;
  FUN_008fcdb8(param_1 + 0x6f,param_2 + 0x378);
  FUN_008fcdb8(param_1 + 0x72,param_2 + 0x390);
  FUN_008fcdb8(param_1 + 0x75,param_2 + 0x3a8);
  FUN_008fcdb8(param_1 + 0x78,param_2 + 0x3c0);
  FUN_008fcdb8(param_1 + 0x7b,param_2 + 0x3d8);
  FUN_008fcdb8(param_1 + 0x7e,param_2 + 0x3f0);
  FUN_008fcdb8(param_1 + 0x81,param_2 + 0x408);
  FUN_008fcdb8(param_1 + 0x84,param_2 + 0x420);
  FUN_008fcdb8(param_1 + 0x87,param_2 + 0x438);
  FUN_008fcdb8(param_1 + 0x8a,param_2 + 0x450);
  FUN_008fcdb8(param_1 + 0x8d,param_2 + 0x468);
  FUN_008fcdb8(param_1 + 0x90,param_2 + 0x480);
  FUN_008fcdb8(param_1 + 0x93,param_2 + 0x498);
  FUN_008fcdb8(param_1 + 0x96,param_2 + 0x4b0);
  thunk_FUN_00e7051c(param_1 + 0x99,param_2 + 0x4c8);
  FUN_00951160(param_1 + 0x9b,param_2 + 0x4d8);
  FUN_0096aa0c(param_1 + 0x9d,param_2 + 0x4e8);
  memcpy(param_1 + 0x9f,(void *)(param_2 + 0x4f8),0x9e);
  return;
}




void FUN_0096a884(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0096aab0(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 2);
    lVar3 = (ulong)*param_2 * 0x30;
    puVar4 = (undefined8 *)(*(long *)(param_2 + 2) + 0x18);
    do {
      *puVar2 = &PTR_FUN_027bc8d8;
      FUN_0096abb0(puVar2 + 1,puVar4 + -2);
      lVar3 = lVar3 + -0x30;
      *(undefined8 *)((long)puVar2 + 0x25) = *(undefined8 *)((long)puVar4 + 0xd);
      uVar5 = *puVar4;
      puVar2[4] = puVar4[1];
      puVar2[3] = uVar5;
      puVar2 = puVar2 + 6;
      puVar4 = puVar4 + 6;
    } while (lVar3 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_0096a91c(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0096ae14(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      lVar2 = lVar6 + lVar5;
      puVar1[1] = &PTR_FUN_027bc900;
      *puVar1 = &PTR_FUN_027bc928;
      FUN_008fcdb8(puVar1 + 2,lVar2 + 0x10);
      FUN_008fcdb8(puVar1 + 5,lVar2 + 0x28);
      FUN_008fcdb8(puVar1 + 8,lVar2 + 0x40);
      FUN_008fcdb8(puVar1 + 0xb,lVar2 + 0x58);
      uVar8 = *(undefined8 *)(lVar2 + 0x70);
      lVar5 = lVar5 + 0x90;
      puVar1[0xf] = *(undefined8 *)(lVar2 + 0x78);
      puVar1[0xe] = uVar8;
      uVar8 = *(undefined8 *)(lVar2 + 0x80);
      puVar1[0x11] = *(undefined8 *)(lVar2 + 0x88);
      puVar1[0x10] = uVar8;
    } while ((ulong)uVar3 * 0x90 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return;
}




void FUN_0096aa0c(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0096af60(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x38;
    lVar2 = *(long *)(param_2 + 2) + 0x20;
    do {
      *puVar3 = &PTR_FUN_027bc888;
      FUN_008fcdb8(puVar3 + 1,lVar2 + -0x18);
      FUN_008fcdb8(puVar3 + 4,lVar2);
      lVar4 = lVar4 + -0x38;
      lVar2 = lVar2 + 0x38;
      puVar3 = puVar3 + 7;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_0096aab0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x30);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (ulong)*param_1 * 0x30;
      puVar3 = puVar2 + 3;
      puVar2 = puVar1;
      do {
        *puVar2 = &PTR_FUN_027bc8d8;
        FUN_0096abb0(puVar2 + 1,puVar3 + -2);
        lVar4 = lVar4 + -0x30;
        *(undefined8 *)((long)puVar2 + 0x25) = *(undefined8 *)((long)puVar3 + 0xd);
        uVar5 = *puVar3;
        puVar2[4] = puVar3[1];
        puVar2[3] = uVar5;
        puVar2 = puVar2 + 6;
        puVar3 = puVar3 + 6;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        do {
          (**(code **)*puVar2)(puVar2);
          lVar4 = lVar4 + -0x30;
          puVar2 = puVar2 + 6;
        } while (lVar4 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_0096abb0(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0096acb4(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      lVar2 = lVar6 + lVar5;
      *puVar1 = &PTR_FUN_027bc8b0;
      FUN_0096aa0c(puVar1 + 1,lVar2 + 8);
      FUN_008fcdb8(puVar1 + 3,lVar2 + 0x18);
      FUN_008fcdb8(puVar1 + 6,lVar2 + 0x30);
      FUN_008fcdb8(puVar1 + 9,lVar2 + 0x48);
      FUN_008fcdb8(puVar1 + 0xc,lVar2 + 0x60);
      FUN_008fcdb8(puVar1 + 0xf,lVar2 + 0x78);
      FUN_008fcdb8(puVar1 + 0x12,lVar2 + 0x90);
      FUN_008fcdb8(puVar1 + 0x15,lVar2 + 0xa8);
      lVar5 = lVar5 + 0xd0;
      *(undefined8 *)((long)puVar1 + 199) = *(undefined8 *)(lVar2 + 199);
      puVar1[0x18] = *(undefined8 *)(lVar2 + 0xc0);
    } while ((ulong)uVar3 * 0xd0 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return;
}




void FUN_0096acb4(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0xd0);
    uVar3 = *param_1;
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar2 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar2 = &PTR_FUN_027bc8b0;
        FUN_0096aa0c(puVar2 + 1,(long)puVar5 + lVar6 + 8);
        FUN_008fcdb8(puVar2 + 3,(long)puVar5 + lVar6 + 0x18);
        FUN_008fcdb8(puVar2 + 6,(long)puVar5 + lVar6 + 0x30);
        FUN_008fcdb8(puVar2 + 9,(long)puVar5 + lVar6 + 0x48);
        FUN_008fcdb8(puVar2 + 0xc,(long)puVar5 + lVar6 + 0x60);
        FUN_008fcdb8(puVar2 + 0xf,(long)puVar5 + lVar6 + 0x78);
        FUN_008fcdb8(puVar2 + 0x12,(long)puVar5 + lVar6 + 0x90);
        FUN_008fcdb8(puVar2 + 0x15,(long)puVar5 + lVar6 + 0xa8);
        lVar1 = lVar6 + 0xd0;
        *(undefined8 *)((long)puVar2 + 199) = *(undefined8 *)((long)puVar5 + lVar6 + 199);
        puVar2[0x18] = *(undefined8 *)((long)puVar5 + lVar6 + 0xc0);
        lVar6 = lVar1;
      } while ((ulong)uVar3 * 0xd0 - lVar1 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0xd0;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0xd0;
          puVar5 = puVar5 + 0x1a;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_0096ae14(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x90);
    uVar3 = *param_1;
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar2 = (undefined8 *)((long)pvVar4 + lVar6);
        puVar2[1] = &PTR_FUN_027bc900;
        *puVar2 = &PTR_FUN_027bc928;
        FUN_008fcdb8(puVar2 + 2,(long)puVar5 + lVar6 + 0x10);
        FUN_008fcdb8(puVar2 + 5,(long)puVar5 + lVar6 + 0x28);
        FUN_008fcdb8(puVar2 + 8,(long)puVar5 + lVar6 + 0x40);
        FUN_008fcdb8(puVar2 + 0xb,(long)puVar5 + lVar6 + 0x58);
        uVar7 = *(undefined8 *)((long)puVar5 + lVar6 + 0x70);
        lVar1 = lVar6 + 0x90;
        puVar2[0xf] = *(undefined8 *)((long)puVar5 + lVar6 + 0x78);
        puVar2[0xe] = uVar7;
        uVar7 = *(undefined8 *)((long)puVar5 + lVar6 + 0x80);
        puVar2[0x11] = *(undefined8 *)((long)puVar5 + lVar6 + 0x88);
        puVar2[0x10] = uVar7;
        lVar6 = lVar1;
      } while ((ulong)uVar3 * 0x90 - lVar1 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x90;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0x90;
          puVar5 = puVar5 + 0x12;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_0096af60(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar2 = puVar2 + 4;
      lVar3 = (ulong)*param_1 * 0x38;
      puVar4 = puVar1;
      do {
        *puVar4 = &PTR_FUN_027bc888;
        FUN_008fcdb8(puVar4 + 1,puVar2 + -3);
        FUN_008fcdb8(puVar4 + 4,puVar2);
        lVar3 = lVar3 + -0x38;
        puVar2 = puVar2 + 7;
        puVar4 = puVar4 + 7;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x38;
        do {
          (**(code **)*puVar2)(puVar2);
          lVar3 = lVar3 + -0x38;
          puVar2 = puVar2 + 7;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}

