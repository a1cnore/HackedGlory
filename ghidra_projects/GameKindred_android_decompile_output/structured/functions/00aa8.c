// functions/00aa8 — 23 functions
#include "libGameKindred.h"




void FUN_00aa807c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009580b8();
  FUN_009620d8();
  return;
}




void FUN_00aa80a0(uint *param_1,undefined8 *param_2)

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
    FUN_00aa86a4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa8128(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00aa6250(param_2);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009580b8();
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_00961494(uVar3,param_2 + 0x80,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa81bc(void)

{
  return;
}




void FUN_00aa81c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x478);
  FUN_00aa636c();
  DAT_03133cd0 = pvVar1;
  return;
}




void FUN_00aa81f0(void)

{
  if (DAT_03133cd0 != (long *)0x0) {
    (**(code **)(*DAT_03133cd0 + 8))();
  }
  DAT_03133cd0 = (long *)0x0;
  return;
}




undefined8 FUN_00aa8224(void)

{
  return DAT_03133cd0;
}




void FUN_00aa8230(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00aa8230(param_1,*param_2);
    FUN_00aa8230(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00aa828c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void * FUN_00aa830c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00aa83bc(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_00aa84e8(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00aa83bc(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_00aa8420:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00aa843c;
          if (iVar4 < 0) goto LAB_00aa8444;
          goto LAB_00aa84bc;
        }
LAB_00aa84a8:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00aa84a8;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00aa8420;
      }
LAB_00aa843c:
      if (uVar2 <= uVar1) break;
LAB_00aa8444:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00aa84bc:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00aa84e8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




undefined8 * FUN_00aa853c(long param_1,byte *param_2)

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
  puVar6 = (undefined8 *)FUN_00aa85f4(param_1,param_2,*puVar7,puVar7);
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




long FUN_00aa85f4(undefined8 param_1,byte *param_2,long param_3,long param_4)

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
LAB_00aa8668:
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
        if (uVar4 == 0) goto LAB_00aa8668;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void FUN_00aa86a4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00aa8724(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_00f13ca4();
  puVar1 = param_1 + 0x17;
  *param_1 = &PTR_FUN_027d27e0;
  FUN_00f0e4a8(puVar1);
  puVar2 = param_1 + 0x35;
  FUN_00f0e4a8(puVar2);
  FUN_00f13ca4(param_1 + 0x53);
  *(undefined1 *)(param_1 + 0x6a) = 0;
  FUN_00f023ec(param_1,puVar2,1);
  FUN_00f023ec(param_1,param_1 + 0x53,1);
  FUN_00f023ec(param_1,puVar1,1);
  FUN_00f0e548(puVar2,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_team_turn_bg");
  FUN_00f0e548(puVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  return;
}




void FUN_00aa87f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_00f01980(param_1 + 0x1a8);
  FUN_00f01980(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 0x22c) >> 2 & 1) != 0) {
    uVar2 = FUN_00efee28(0,0x3e4ccccd,FUN_00aa89f4);
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f02308(param_1 + 0x1a8,uVar2,puVar4,0);
  }
  if ((*(byte *)(param_1 + 0x13c) >> 2 & 1) == 0) {
    return;
  }
  uVar2 = FUN_00efee28(0,0x3dcccccd,FUN_00aa89f4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0xb8,uVar2,puVar4,0);
  return;
}




float FUN_00aa89f4(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / (param_4 * 0.5);
  if (1.0 <= param_1) {
    param_1 = param_3 * -0.5 * ((param_1 + -1.0) * (param_1 + -1.0 + -2.0) + -1.0);
  }
  else {
    param_1 = param_1 * param_3 * 0.5 * param_1;
  }
  return param_1 + param_2;
}




void FUN_00aa8a48(long param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = &DAT_01ba3e54;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_01ba3e50;
  }
  *(byte *)(param_1 + 0x350) = param_2 & 1;
  *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) & 0xfe | param_2 & 1;
  FUN_00f0e670(param_1 + 0x1a8,puVar1,2);
  *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) & 0xfe | *(byte *)(param_1 + 0x350);
  FUN_00f0e670(param_1 + 0xb8,&DAT_01bee7f6,2);
  uVar2 = *(uint *)(param_1 + 0x13c);
  uVar3 = 0x33;
  if (*(char *)(param_1 + 0x350) != '\0') {
    uVar3 = 0xbf;
  }
  if ((uVar2 >> 7 & 0xff) == uVar3) {
    return;
  }
  *(uint *)(param_1 + 0x13c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
  FUN_0091ada4(param_1 + 0xb8);
  return;
}




void FUN_00aa8b04(long param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ushort uVar8;
  ushort *puVar9;
  
  if (((param_2 ^ *(byte *)(param_1 + 0x22c) >> 2) & 1) == 0) {
    return;
  }
  lVar1 = param_1 + 0x1a8;
  fVar4 = 0.2;
  if (*(char *)(param_1 + 0x350) != '\0') {
    fVar4 = 0.75;
  }
  FUN_00f01980(lVar1);
  lVar7 = param_1 + 0xb8;
  FUN_00f01980(lVar7);
  uVar2 = *(uint *)(param_1 + 0x22c);
  uVar3 = uVar2 >> 7 & 0xff;
  if ((param_2 & 1) == 0) {
    if (uVar3 != 0xff) {
      *(uint *)(param_1 + 0x22c) = uVar2 | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    if ((*(uint *)(param_1 + 0x13c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffff807f;
      FUN_0091ada4(lVar7);
    }
    lVar5 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efc8e8(puVar9);
      *(undefined ***)puVar9 = &PTR_FUN_02825100;
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    uVar6 = FUN_00efee28(fVar4,0x3e4ccccd,FUN_00aa89f4);
    FUN_00f02308(lVar7,puVar9,uVar6,0);
    uVar6 = FUN_00efee28(0,0x3dcccccd,FUN_00aa89f4);
    lVar5 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    lVar7 = lVar1;
    if ((ulong)uVar8 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efc8e8(puVar9);
      *(undefined ***)puVar9 = &PTR_FUN_02825148;
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
  }
  else {
    if (uVar3 != 0) {
      *(uint *)(param_1 + 0x22c) = uVar2 & 0xffff807f;
      FUN_0091ada4(lVar1);
    }
    uVar2 = *(uint *)(param_1 + 0x13c);
    if ((uVar2 >> 7 & 0xff) != (int)(fVar4 * 255.0)) {
      *(uint *)(param_1 + 0x13c) =
           uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar4 * 255.0) & 0xffU) << 7;
      FUN_0091ada4(lVar7);
    }
    lVar5 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efc8e8(puVar9);
      *(undefined ***)puVar9 = &PTR_FUN_02825100;
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    uVar6 = FUN_00efee28(0x3f800000,0x3e4ccccd,FUN_00aa89f4);
    FUN_00f02308(lVar1,puVar9,uVar6,0);
    uVar6 = FUN_00efee28(0,0x3dcccccd,FUN_00aa89f4);
    lVar1 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar9);
      *(undefined ***)puVar9 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
  }
  FUN_00f02308(lVar7,uVar6,puVar9,0);
  return;
}




void FUN_00aa8f18(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0x298,param_2,param_3 & 1);
  return;
}




void FUN_00aa8f24(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13db0();
  FUN_00f13f08(param_1,param_2,param_3 + 0x1a8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x298);
  FUN_00f13f08(param_1,param_2,param_3 + 0xb8);
  return;
}




void FUN_00aa8f80(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  float fVar17;
  undefined8 local_70;
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x48;
  *param_1 = (long)&PTR_FUN_027d2928;
  FUN_00f13ca4(plVar1);
  FUN_00f13ca4();
  plVar2 = param_1 + 0x76;
  FUN_00f0c714(plVar2);
  plVar3 = param_1 + 0x91;
  FUN_00f0e4a8(plVar3);
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x127;
  FUN_00f0c714();
  plVar5 = param_1 + 0x142;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x160;
  FUN_00f0e4a8();
  FUN_00f0d160();
  plVar7 = param_1 + 0x1a4;
  FUN_00f0e4a8();
  plVar8 = param_1 + 0x1c2;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x1e8;
  FUN_00f1306c(plVar9);
  plVar10 = param_1 + 0x213;
  FUN_00f0d160(plVar10);
  plVar11 = param_1 + 0x239;
  FUN_00f0e4a8(plVar11);
  plVar12 = param_1 + 599;
  FUN_00f0e4a8(plVar12);
  FUN_00bd1af4(param_1 + 0x275);
  *(undefined4 *)(param_1 + 0x277) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x13bc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0xaf,1);
  FUN_00f023ec(plVar3,param_1 + 0xcd,1);
  FUN_00f023ec(plVar3,param_1 + 0xeb,1);
  FUN_00f023ec(plVar3,param_1 + 0x109,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar1,param_1 + 0x17e,1);
  FUN_00f023ec(plVar1,plVar9,1);
  FUN_00f133a4(plVar9,plVar10,1);
  FUN_00f133a4(plVar9,plVar11,1);
  FUN_00f133a4(plVar9,plVar12,1);
  FUN_00f023ec(plVar1,plVar7,1);
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f023ec(plVar1,param_1[0x276],1);
  FUN_00f14070(param_1,&DAT_03211038);
  FUN_00f0e548(param_1 + 0xaf,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"lobby_hero_highlight"
              );
  FUN_00f0e548(param_1 + 0xcd,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"lobby_hero_selected")
  ;
  FUN_00f0e548(param_1 + 0xeb,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(param_1 + 0x109,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_ban_symbol");
  FUN_00f0c774(plVar4,&DAT_01bee7fa);
  if ((*(uint *)((long)param_1 + 0x9bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x9bc) = *(uint *)((long)param_1 + 0x9bc) & 0xffff807f;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar16 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar16 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xa94) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6600;
    FUN_0091ada4(plVar5);
    uVar16 = *(uint *)((long)param_1 + 0xa94);
  }
  *(uint *)((long)param_1 + 0xa94) = uVar16 & 0xfffffffb;
  FUN_00f0e548(plVar6,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_ban_symbol");
  FUN_00f0e670(plVar6,&DAT_01bee802,2);
  FUN_00f0d378(param_1 + 0x17e,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01ba3e44);
  FUN_00f0da30(plVar10,1);
  local_70 = CONCAT44(local_70._4_4_,0xbd000000);
  FUN_00f0da80(plVar10,&local_70);
  local_70 = 0x4000000040000000;
  FUN_00f0da8c(plVar10,&local_70);
  uVar14 = FUN_00e6ce7c("GENERIC_HERO_FEATURED_FREE_ROTATION",0);
  FUN_00f0d75c(plVar10,uVar14);
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar11,&DAT_01ba3e44,2);
  *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
  fVar17 = (float)FUN_00f0eaf4(plVar11);
  FUN_00f13f2c(plVar11,(ulong)(uint)(int)fVar17 | 0x300000000);
  local_70._0_2_ = 7;
  FUN_00f14070(plVar11,&local_70);
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar12,&DAT_01ba3e44,2);
  fVar17 = (float)FUN_00f0eaf4(plVar12);
  FUN_00f13f2c(plVar12,(ulong)(uint)(int)fVar17 | 0x300000000);
  local_70 = CONCAT62(local_70._2_6_,7);
  FUN_00f14070(plVar12,&local_70);
  uVar14 = FUN_00f13624();
  FUN_00f15134(uVar14,plVar11);
  FUN_00f15134(uVar14,plVar12);
  uVar15 = FUN_00f136e0();
  FUN_00f13fd8(plVar9,uVar15);
  FUN_00f1515c(uVar15,plVar10,8,2);
  FUN_00f15480(uVar15,uVar14,0);
  *(uint *)((long)param_1 + 0xfc4) = *(uint *)((long)param_1 + 0xfc4) & 0xfffffffb;
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  uVar16 = *(uint *)((long)param_1 + 0xda4);
  *(byte *)(param_1 + 0x1bf) = *(byte *)(param_1 + 0x1bf) | 2;
  if ((uVar16 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xda4) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6600;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00ecf870(param_1,1);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_00f0c774(plVar2,&DAT_01ba3e38);
  *(uint *)(param_1[0x276] + 0x84) = *(uint *)(param_1[0x276] + 0x84) & 0xfffffffb;
  local_70 = 0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

