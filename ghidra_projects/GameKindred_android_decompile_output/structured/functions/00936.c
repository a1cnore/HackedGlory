// functions/00936 — 30 functions
#include "libGameKindred.h"




void FUN_00936018(void)

{
  return;
}




void FUN_0093601c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    (**(code **)(param_1 + 0x50))(0);
  }
  else {
    uVar1 = FUN_009580b8();
    lVar2 = FUN_009580b8();
    FUN_0095e21c(uVar1,lVar2 + 0x5478,1);
    (**(code **)(param_1 + 0x48))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}




void FUN_00936080(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    (**(code **)(param_1 + 0x68))(0);
  }
  else {
    uVar1 = FUN_009580b8();
    lVar2 = FUN_009580b8();
    FUN_0095e21c(uVar1,lVar2 + 0x5478,1);
    (**(code **)(param_1 + 0x60))();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}




void FUN_009360e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x138);
  FUN_00948cd8();
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *puVar1 = &PTR_FUN_027ba598;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  memset(puVar1 + 3,0,0xb8);
  FUN_00936d90(puVar1 + 0x1a);
  *(undefined4 *)(puVar1 + 0x26) = 1;
  DAT_02c7c030 = puVar1;
  return;
}




void FUN_00936158(void)

{
  if (DAT_02c7c030 != (long *)0x0) {
    (**(code **)(*DAT_02c7c030 + 8))();
  }
  DAT_02c7c030 = (long *)0x0;
  return;
}




long FUN_0093618c(void)

{
  return DAT_02c7c030 + 0xd0;
}




undefined4 FUN_0093619c(void)

{
  return *(undefined4 *)(DAT_02c7c030 + 0x130);
}




void FUN_009361ac(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_158;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 local_78;
  long local_70;
  
  lVar2 = DAT_02c7c030;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(int *)(DAT_02c7c030 + 0xc0) == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    lVar6 = 0xa8;
    do {
      local_158 = *param_1;
      FUN_008fcdb8(auStack_150,param_1 + 1);
      FUN_008fcdb8(auStack_138,param_1 + 4);
      FUN_008fcdb8(auStack_120,param_1 + 7);
      FUN_008fcdb8(auStack_108,param_1 + 10);
      FUN_008fcdb8(auStack_f0,param_1 + 0xd);
      FUN_008fcdb8(auStack_d8,param_1 + 0x10);
      FUN_008fcdb8(auStack_c0,param_1 + 0x13);
      FUN_008fcdb8(auStack_a8,param_1 + 0x16);
      FUN_008fcdb8(auStack_90,param_1 + 0x19);
      local_78 = *(undefined1 *)(param_1 + 0x1c);
      uVar3 = FUN_00936440(&local_158,*(long *)(lVar2 + 200) + lVar6 + -0xa8);
      FUN_00936630(&local_158);
      if ((uVar3 & 1) != 0) {
        lVar6 = *(long *)(lVar2 + 200) + lVar6;
        FUN_008fce60(param_2,lVar6 + -0xa8);
        FUN_008fce60(param_2 + 0x18,lVar6 + -0x90);
        FUN_008fce60(param_2 + 0x30,lVar6 + -0x78);
        FUN_008fce60(param_2 + 0x48,lVar6 + -0x60);
        uVar4 = *(undefined8 *)(lVar6 + -0x48);
        *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar6 + -0x40);
        *(undefined8 *)(param_2 + 0x60) = uVar4;
        *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar6 + -0x38);
        FUN_008fce60(param_2 + 0x78,lVar6 + -0x30);
        FUN_008fce60(param_2 + 0x90,lVar6 + -0x18);
        FUN_008fce60(param_2 + 0xa8,lVar6);
        FUN_008fce60(param_2 + 0xc0,lVar6 + 0x18);
        FUN_008fce60(param_2 + 0xd8,lVar6 + 0x30);
        FUN_008fce60(param_2 + 0xf0,lVar6 + 0x48);
        FUN_008fce60(param_2 + 0x108,lVar6 + 0x60);
        FUN_008fce60(param_2 + 0x120,lVar6 + 0x78);
        FUN_008fce60(param_2 + 0x138,lVar6 + 0x90);
        *(undefined1 *)(param_2 + 0x150) = *(undefined1 *)(lVar6 + 0xa8);
        FUN_009366e4(uVar5 & 0xffffffff);
        uVar4 = 1;
        goto LAB_0093640c;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x160;
    } while (uVar5 < *(uint *)(lVar2 + 0xc0));
    uVar4 = 0;
  }
LAB_0093640c:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




bool FUN_00936440(long param_1,long param_2)

{
  size_t __n;
  size_t __n_00;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  
  bVar5 = DAT_03210778;
  bVar2 = *(byte *)(param_1 + 8);
  uVar4 = (ulong)(bVar2 >> 1);
  __n = uVar4;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  __n_00 = (ulong)(DAT_03210778 >> 1);
  if ((DAT_03210778 & 1) != 0) {
    __n_00 = DAT_03210780;
  }
  if (__n == __n_00) {
    pvVar7 = *(void **)(param_1 + 0x18);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 9);
    }
    pcVar10 = DAT_03210788;
    if ((DAT_03210778 & 1) == 0) {
      pcVar10 = &DAT_03210779;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return true;
      }
      pcVar8 = (char *)(param_1 + 9);
      lVar9 = -uVar4;
      while (*pcVar8 == *pcVar10) {
        pcVar8 = pcVar8 + 1;
        lVar9 = lVar9 + 1;
        pcVar10 = pcVar10 + 1;
        if (lVar9 == 0) {
          return true;
        }
      }
    }
    else {
      if (__n == 0) {
        return true;
      }
      iVar6 = memcmp(pvVar7,pcVar10,__n);
      if (iVar6 == 0) {
        return true;
      }
    }
  }
  bVar3 = *(byte *)(param_2 + 0x78);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 0x80);
  }
  if (sVar1 == __n_00) {
    pvVar7 = *(void **)(param_2 + 0x88);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)(param_2 + 0x79);
    }
    pcVar10 = DAT_03210788;
    if ((bVar5 & 1) == 0) {
      pcVar10 = &DAT_03210779;
    }
    if ((bVar3 & 1) == 0) {
      if (__n_00 == 0) {
        return true;
      }
      pcVar8 = (char *)(param_2 + 0x79);
      lVar9 = -(ulong)(bVar3 >> 1);
      while (*pcVar8 == *pcVar10) {
        pcVar8 = pcVar8 + 1;
        lVar9 = lVar9 + 1;
        pcVar10 = pcVar10 + 1;
        if (lVar9 == 0) {
          return true;
        }
      }
    }
    else {
      if (__n_00 == 0) {
        return true;
      }
      iVar6 = memcmp(pvVar7,pcVar10,__n_00);
      if (iVar6 == 0) {
        return true;
      }
    }
  }
  if (__n != sVar1) {
    return false;
  }
  pvVar7 = *(void **)(param_1 + 0x18);
  pcVar10 = *(char **)(param_2 + 0x88);
  if ((bVar2 & 1) == 0) {
    pvVar7 = (void *)(param_1 + 9);
  }
  if ((bVar3 & 1) == 0) {
    pcVar10 = (char *)(param_2 + 0x79);
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      pcVar8 = (char *)(param_1 + 9);
      lVar9 = -uVar4;
      do {
        if (*pcVar8 != *pcVar10) {
          return false;
        }
        pcVar8 = pcVar8 + 1;
        lVar9 = lVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  else if (__n != 0) {
    iVar6 = memcmp(pvVar7,pcVar10,__n);
    return iVar6 == 0;
  }
  return true;
}




void FUN_00936630(long param_1)

{
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xd8));
  }
  if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xc0));
  }
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x78));
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}




void FUN_009366e4(uint param_1)

{
  long lVar1;
  
  if (-1 < (int)param_1) {
    if (param_1 < *(uint *)(DAT_02c7c030 + 0xc0)) {
      lVar1 = *(long *)(DAT_02c7c030 + 200) + (long)(int)param_1 * 0x160;
      FUN_00936b94((uint *)(DAT_02c7c030 + 0xc0),lVar1,lVar1 + 0x160);
      return;
    }
  }
  return;
}




void FUN_0093671c(undefined8 param_1)

{
  FUN_009350dc(DAT_02c7c030,param_1);
  return;
}




void FUN_00936730(void)

{
  *(undefined4 *)(DAT_02c7c030 + 0x130) = 1;
  return;
}




void FUN_00936744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00935210(DAT_02c7c030,param_1,param_2,param_3);
  return;
}




void FUN_00936760(undefined8 param_1,undefined8 param_2)

{
  FUN_009352a0(DAT_02c7c030,param_1,param_2);
  return;
}




void FUN_00936778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00935314(DAT_02c7c030,param_1,param_2,param_3,param_4);
  return;
}




void FUN_00936798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009353b8(DAT_02c7c030,param_1,param_2,param_3,param_4);
  return;
}




void FUN_009367b8(undefined8 param_1,undefined8 param_2)

{
  FUN_0093545c(DAT_02c7c030,param_1,param_2);
  return;
}




bool FUN_009367d0(void)

{
  if (*(long *)(DAT_02c7c030 + 0x90) != 0) {
    return *(long *)(DAT_02c7c030 + 0x98) != 0;
  }
  return false;
}




void FUN_009367f8(undefined8 param_1,undefined8 param_2)

{
  FUN_009354f0(DAT_02c7c030,param_1,param_2);
  return;
}




void FUN_00936810(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0093556c(DAT_02c7c030,param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_00936834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ba598;
  FUN_008fefd4(param_1 + 0x24,1);
  if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
    operator_delete((void *)param_1[0x23]);
  }
  if ((*(byte *)(param_1 + 0x1e) & 1) != 0) {
    operator_delete((void *)param_1[0x20]);
  }
  FUN_00936ae0(param_1 + 0x18,1);
  FUN_00948d58(param_1);
  return;
}




void FUN_0093689c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ba598;
  FUN_008fefd4(param_1 + 0x24,1);
  if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
    operator_delete((void *)param_1[0x23]);
  }
  if ((*(byte *)(param_1 + 0x1e) & 1) != 0) {
    operator_delete((void *)param_1[0x20]);
  }
  FUN_00936ae0(param_1 + 0x18,1);
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_0093690c(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009369b0(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x68;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
      puVar1 = (undefined8 *)(lVar3 + 0x60);
      lVar3 = lVar3 + 0x68;
      *(undefined8 *)(lVar4 + 0x60) = *puVar1;
      lVar4 = lVar4 + 0x68;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_009369b0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x68);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x68);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x48,(long)pvVar3 + 0x48);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x60);
        pvVar3 = (void *)((long)pvVar3 + 0x68);
        *(undefined8 *)((long)pvVar6 + 0x60) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x68);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x68;
        pbVar4 = (byte *)((long)pvVar3 + 0x30);
        do {
          if ((pbVar4[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x28));
          }
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if ((pbVar4[-0x30] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x20));
          }
          lVar5 = lVar5 + -0x68;
          pbVar4 = pbVar4 + 0x68;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00936ae0(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x160;
      lVar1 = *(long *)(param_1 + 2) + 0x70;
      do {
        FUN_00936630(lVar1);
        if ((*(byte *)(lVar1 + -0x28) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x18));
        }
        if ((*(byte *)(lVar1 + -0x40) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x30));
        }
        if ((*(byte *)(lVar1 + -0x58) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x48));
        }
        if ((*(byte *)(lVar1 + -0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x60));
        }
        lVar2 = lVar2 + -0x160;
        lVar1 = lVar1 + 0x160;
      } while (lVar2 != 0);
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




void FUN_00936b94(uint *param_1,long param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar2 = *param_1;
  iVar3 = (int)((ulong)((long)param_3 - param_2) >> 5);
  if (uVar2 != iVar3 * -0x45d1745d) {
    pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x160);
    lVar1 = (long)pbVar6 - (long)param_3;
    lVar5 = param_2;
    if (lVar1 != 0) {
      do {
        FUN_008fce60(lVar5,param_3);
        FUN_008fce60(lVar5 + 0x18,param_3 + 0x18);
        FUN_008fce60(lVar5 + 0x30,param_3 + 0x30);
        FUN_008fce60(lVar5 + 0x48,param_3 + 0x48);
        uVar7 = *(undefined8 *)(param_3 + 0x60);
        *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(param_3 + 0x68);
        *(undefined8 *)(lVar5 + 0x60) = uVar7;
        *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(param_3 + 0x70);
        FUN_008fce60(lVar5 + 0x78,param_3 + 0x78);
        FUN_008fce60(lVar5 + 0x90,param_3 + 0x90);
        FUN_008fce60(lVar5 + 0xa8,param_3 + 0xa8);
        FUN_008fce60(lVar5 + 0xc0,param_3 + 0xc0);
        FUN_008fce60(lVar5 + 0xd8,param_3 + 0xd8);
        FUN_008fce60(lVar5 + 0xf0,param_3 + 0xf0);
        FUN_008fce60(lVar5 + 0x108,param_3 + 0x108);
        FUN_008fce60(lVar5 + 0x120,param_3 + 0x120);
        FUN_008fce60(lVar5 + 0x138,param_3 + 0x138);
        *(byte *)(lVar5 + 0x150) = param_3[0x150];
        pbVar4 = param_3 + 0x158;
        param_3 = param_3 + 0x160;
        *(undefined2 *)(lVar5 + 0x158) = *(undefined2 *)pbVar4;
        lVar5 = lVar5 + 0x160;
      } while (param_3 != pbVar6);
      uVar2 = *param_1;
      pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x160);
    }
    pbVar4 = (byte *)(param_2 + ((lVar1 >> 5) * 0xba2e8ba3 & 0xffffffffU) * 0x160);
    if (pbVar4 != pbVar6) {
      do {
        FUN_00936630(pbVar4 + 0x70);
        if ((pbVar4[0x48] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x58));
        }
        if ((pbVar4[0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x40));
        }
        if ((pbVar4[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x28));
        }
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x10));
        }
        pbVar4 = pbVar4 + 0x160;
      } while (pbVar6 != pbVar4);
      uVar2 = *param_1;
    }
    *param_1 = uVar2 + iVar3 * 0x45d1745d;
    return;
  }
  FUN_00936ae0(param_1,1);
  return;
}




void FUN_00936d90(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 4,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 7,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fefd4(param_1 + 10,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00936e48(undefined8 param_1,uint param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_00937044(local_178);
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
  FUN_00e6b8f8(acStack_148,pvVar1,param_1,param_2 & 1);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00936f18(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = FUN_00e70198(&DAT_0320ffc0,"--userdata");
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00e70138(&DAT_0320ffc0,"--userdata");
    uVar3 = FUN_00e6af2c();
    if ((uVar3 & 1) != 0) {
      FUN_008fa54c(local_50,uVar4);
      FUN_008fce60(param_1,local_50);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      goto LAB_0093701c;
    }
  }
  uVar4 = FUN_00e7012c(&DAT_0320ffc0,0);
  FUN_008fa54c(local_50,uVar4);
  FUN_008fce60(param_1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_0090de84(param_1,&DAT_01b955b6,4);
  uVar3 = DAT_02c7c040;
  puVar2 = DAT_02c7c048;
  if ((DAT_02c7c038 & 1) == 0) {
    uVar3 = (ulong)(DAT_02c7c038 >> 1);
    puVar2 = &DAT_02c7c039;
  }
  FUN_0090de84(param_1,puVar2,uVar3);
LAB_0093701c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

