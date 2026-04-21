// functions/00bdb — 23 functions
#include "libGameKindred.h"




void FUN_00bdb02c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee210;
  FUN_00bda27c(param_1 + 0x1b);
  thunk_FUN_00f13d08(param_1);
  return;
}




void FUN_00bdb060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee210;
  FUN_00bda27c(param_1 + 0x1b);
  thunk_FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00bdb09c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ee358;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdb0e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbdb0e4);
  (*pcVar1)();
}




void FUN_00bdb0f0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00bdb170(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ee418;
  pvVar2 = operator_new(0x38a8);
  FUN_00c42c74();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x630) = param_1;
  FUN_00bcf3c8(param_1 + 2);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_027ee388;
  param_1[2] = &PTR_FUN_027ee3d8;
  FUN_00e70510(param_1 + 0x16);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00e70510(param_1 + 0x1b);
  FUN_00e70510(param_1 + 0x1d);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_00e70510(param_1 + 0x22);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_00e70510(param_1 + 0x27);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)((long)param_1 + 0x162) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2b] = 0;
  lVar3 = FUN_009fded0();
  if (lVar3 != 0) {
    FUN_009fded0();
    lVar3 = FUN_009fded0();
    uStack_50 = 0;
    pcStack_40 = thunk_FUN_00bdbaa4;
    local_58 = param_1;
    local_48 = param_1;
    FUN_009e4694(lVar3 + 0x178,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdb288(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027ee388;
  param_1[2] = &PTR_FUN_027ee3d8;
  lVar2 = FUN_009fded0();
  if (lVar2 != 0) {
    FUN_009fded0();
    lVar2 = FUN_009fded0();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x178) << 5;
    puVar1 = *(undefined8 **)(lVar2 + 0x180);
    do {
      puVar3 = puVar1;
      if (lVar4 == 0) goto LAB_00bdb2f0;
      lVar4 = lVar4 + -0x20;
      puVar1 = puVar3 + 4;
    } while ((undefined8 *)*puVar3 != param_1);
    FUN_00910480(lVar2 + 0x178,puVar3);
  }
LAB_00bdb2f0:
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    operator_delete((void *)param_1[0x2b]);
  }
  if ((void *)param_1[0x28] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28]);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
  }
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    operator_delete((void *)param_1[0x26]);
  }
  if ((void *)param_1[0x23] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23]);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1c]);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    operator_delete((void *)param_1[0x1a]);
  }
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete__((void *)param_1[0x17]);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    operator_delete((void *)param_1[0x15]);
  }
  FUN_00bca0cc(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ee418;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdb3cc(long param_1)

{
  FUN_00bdb288(param_1 + -0x10);
  return;
}




void FUN_00bdb3d4(void *param_1)

{
  FUN_00bdb288();
  operator_delete(param_1);
  return;
}




void FUN_00bdb3f8(long param_1)

{
  FUN_00bdb288((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bdb420(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 uVar5;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar6;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  ulong local_108;
  void *local_100;
  void *local_f8;
  undefined **local_f0;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 local_6e [6];
  undefined2 uStack_68;
  undefined8 uStack_66;
  
  uVar5 = (undefined4)((ulong)in_stack_fffffffffffffea0 >> 0x20);
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_00bcf3f4(param_1 + 0x10);
  uVar2 = FUN_00bdb78c(param_3 + 0x28);
  if ((uVar2 & 1) != 0) {
    FUN_008fcdb8(&local_f0,param_3 + 0x30);
    FUN_008fcdb8(&local_108,param_3 + 0x78);
    uVar3 = FUN_009580b8();
    FUN_00963abc(uVar3,&local_f0);
    uVar3 = FUN_009580b8();
    FUN_00963abc(uVar3,&local_108);
    FUN_009fa7c8(param_3 + 0x4b0,param_3 + 0x330,&local_f0);
    FUN_009fa7c8(param_3 + 0x4b0,param_3 + 0x330,&local_108);
    FUN_00c433f4(*(undefined4 *)(param_3 + 0x9c),*(undefined4 *)(param_3 + 0xa0),
                 *(undefined4 *)(param_3 + 0xa4),*(undefined4 *)(param_3 + 0xa8),
                 *(undefined8 *)(param_1 + 8),param_3 + 0x60,param_3 + 0x94,&local_f0,param_3 + 0x90
                 ,&local_108,param_3 + 0x98,*(undefined4 *)(param_3 + 0xac),
                 CONCAT44(uVar5,*(undefined4 *)(param_3 + 0xb0)),
                 CONCAT44(uVar6,*(undefined4 *)(param_3 + 0xb4)),*(undefined4 *)(param_3 + 0xb8));
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if (((ulong)local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
  }
  uVar2 = FUN_00b377e8(param_3 + 0x290);
  if ((uVar2 & 1) != 0) {
    local_f0 = &PTR_FUN_027bc9a0;
    FUN_008fcdb8(&local_e8,param_3 + 0x298);
    FUN_008fcdb8(local_d0,param_3 + 0x2b0);
    FUN_008fcdb8(local_b8,param_3 + 0x2c8);
    FUN_008fcdb8(local_a0,param_3 + 0x2e0);
    uStack_66 = *(undefined8 *)(param_3 + 0x31a);
    uStack_68 = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x312) >> 0x30);
    uStack_78 = *(undefined8 *)(param_3 + 0x308);
    uStack_70 = (undefined2)*(undefined8 *)(param_3 + 0x310);
    local_6e = SUB86((ulong)*(undefined8 *)(param_3 + 0x310) >> 0x10,0);
    uStack_80 = *(undefined8 *)(param_3 + 0x300);
    local_88 = *(undefined8 *)(param_3 + 0x2f8);
    uVar2 = FUN_009fadc0(param_3 + 0x298,&uStack_70,local_6e + 2,&uStack_68);
    if (((uVar2 & 1) != 0) || (*(char *)(param_3 + 0x321) == '\0')) {
      FUN_00c456bc(*(undefined8 *)(param_1 + 8),&local_f0);
    }
    local_f0 = &PTR_FUN_027bc9a0;
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    if (((ulong)local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
  }
  uVar2 = FUN_00bdb954(param_3 + 0xc0);
  if ((uVar2 & 1) != 0) {
    FUN_00c46a74(*(undefined8 *)(param_1 + 8),param_3 + 0xc0);
  }
  uVar2 = FUN_00bdb954(param_3 + 0x138);
  if ((uVar2 & 1) != 0) {
    FUN_00c46b1c(*(undefined8 *)(param_1 + 8),param_3 + 0x138);
  }
  if (*(int *)(param_3 + 8) != 0) {
    FUN_00c4548c(*(undefined8 *)(param_1 + 8));
    FUN_00bdbaa4(param_1);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    FUN_00c46720(*(undefined8 *)(param_1 + 8));
  }
  FUN_00bdbb6c(param_1,param_3 + 0x3d8,*(undefined1 *)(param_3 + 0x595));
  uVar2 = FUN_00bdbbb8(param_3 + 0x1b0);
  if ((uVar2 & 1) != 0) {
    FUN_00e70570(&local_f0,param_3 + 0x1b8);
    FUN_00e70570(&local_108,param_3 + 0x1e8);
    FUN_00e70570(&local_118,param_3 + 0x200);
    FUN_00e70570(&local_128,param_3 + 0x230);
    FUN_00e70570(&local_138,param_3 + 0x260);
    FUN_00bdbd08(param_1,&local_f0,param_3 + 0x1d0,&local_108,&local_118,param_3 + 0x218,&local_128,
                 param_3 + 0x248,&local_138,param_3 + 0x278);
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
      local_138 = 0;
      local_130 = (void *)0x0;
    }
    if (local_120 != (void *)0x0) {
      operator_delete__(local_120);
      local_128 = 0;
      local_120 = (void *)0x0;
    }
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = 0;
      local_110 = (void *)0x0;
    }
    if (local_100 != (void *)0x0) {
      operator_delete__(local_100);
      local_108 = 0;
      local_100 = (void *)0x0;
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = (undefined **)0x0;
      local_e8 = (void *)0x0;
    }
  }
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_3 + 0x58f);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00bdb78c(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  void *pvVar7;
  char *__s2;
  
  bVar2 = *(byte *)(param_1 + 8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(param_1 + 0x18);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 9);
        lVar5 = -(ulong)(bVar2 >> 1);
        pcVar6 = __s2;
        do {
          if (*pcVar4 != *pcVar6) {
            return true;
          }
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(pvVar7,__s2,__n), iVar3 != 0)) {
      return true;
    }
    bVar2 = *(byte *)(param_1 + 0x20);
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x28);
    }
    if (sVar1 == __n) {
      pvVar7 = *(void **)(param_1 + 0x30);
      if ((bVar2 & 1) == 0) {
        pvVar7 = (void *)(param_1 + 0x21);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar4 = (char *)(param_1 + 0x21);
          lVar5 = -(ulong)(bVar2 >> 1);
          pcVar6 = __s2;
          do {
            if (*pcVar4 != *pcVar6) {
              return true;
            }
            pcVar4 = pcVar4 + 1;
            lVar5 = lVar5 + 1;
            pcVar6 = pcVar6 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(pvVar7,__s2,__n), iVar3 != 0)) {
        return true;
      }
      bVar2 = *(byte *)(param_1 + 0x50);
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x58);
      }
      if (sVar1 == __n) {
        pvVar7 = *(void **)(param_1 + 0x60);
        if ((bVar2 & 1) == 0) {
          pvVar7 = (void *)(param_1 + 0x51);
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            pcVar4 = (char *)(param_1 + 0x51);
            lVar5 = -(ulong)(bVar2 >> 1);
            do {
              if (*pcVar4 != *__s2) {
                return true;
              }
              pcVar4 = pcVar4 + 1;
              lVar5 = lVar5 + 1;
              __s2 = __s2 + 1;
            } while (lVar5 != 0);
            return false;
          }
        }
        else if (__n != 0) {
          iVar3 = memcmp(pvVar7,__s2,__n);
          return iVar3 != 0;
        }
        return false;
      }
    }
  }
  return true;
}




bool FUN_00bdb954(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  void *pvVar7;
  char *__s2;
  
  bVar2 = *(byte *)(param_1 + 8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(param_1 + 0x18);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 9);
        lVar5 = -(ulong)(bVar2 >> 1);
        pcVar6 = __s2;
        do {
          if (*pcVar4 != *pcVar6) {
            return true;
          }
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(pvVar7,__s2,__n), iVar3 != 0)) {
      return true;
    }
    bVar2 = *(byte *)(param_1 + 0x38);
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x40);
    }
    if (sVar1 == __n) {
      pvVar7 = *(void **)(param_1 + 0x48);
      if ((bVar2 & 1) == 0) {
        pvVar7 = (void *)(param_1 + 0x39);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar4 = (char *)(param_1 + 0x39);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar4 != *__s2) {
              return true;
            }
            pcVar4 = pcVar4 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
          return false;
        }
      }
      else if (__n != 0) {
        iVar3 = memcmp(pvVar7,__s2,__n);
        return iVar3 != 0;
      }
      return false;
    }
  }
  return true;
}




void FUN_00bdbaa4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_009fded0();
  if (lVar3 != 0) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_00c46568(*(undefined8 *)(param_1 + 8),&local_58);
    if ((int)local_58 != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)((long)local_50 + uVar4 * 8);
        iVar2 = FUN_009fe4d0(lVar3,lVar5 + 0x15c0);
        uVar4 = uVar4 + 1;
        *(uint *)(lVar5 + 0x84) =
             *(uint *)(lVar5 + 0x84) & 0xfffffff0 |
             *(uint *)(lVar5 + 0x84) & 7 | (uint)(iVar2 == 1) << 3;
      } while (uVar4 < (local_58 & 0xffffffff));
    }
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdbb6c(long param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  FUN_008fce60(param_1 + 0x98);
  *(byte *)(param_1 + 0x162) = param_3 & 1;
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    uVar1 = (ulong)(*(byte *)(param_1 + 0x98) >> 1);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  FUN_00c45854(*(undefined8 *)(param_1 + 8),uVar1 != 0);
  return;
}




bool FUN_00bdbbb8(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  void *pvVar7;
  char *__s2;
  
  bVar2 = *(byte *)(param_1 + 8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(param_1 + 0x18);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 9);
        lVar5 = -(ulong)(bVar2 >> 1);
        pcVar6 = __s2;
        do {
          if (*pcVar4 != *pcVar6) {
            return true;
          }
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(pvVar7,__s2,__n), iVar3 != 0)) {
      return true;
    }
    bVar2 = *(byte *)(param_1 + 0x20);
    sVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x28);
    }
    if (sVar1 == __n) {
      pvVar7 = *(void **)(param_1 + 0x30);
      if ((bVar2 & 1) == 0) {
        pvVar7 = (void *)(param_1 + 0x21);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar4 = (char *)(param_1 + 0x21);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar4 != *__s2) {
              return true;
            }
            pcVar4 = pcVar4 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
          return false;
        }
      }
      else if (__n != 0) {
        iVar3 = memcmp(pvVar7,__s2,__n);
        return iVar3 != 0;
      }
      return false;
    }
  }
  return true;
}




void FUN_00bdbd08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  *(undefined1 *)(param_1 + 0x161) = 1;
  FUN_00910394(param_1 + 0xb0);
  FUN_008fce60(param_1 + 0xc0,param_3);
  FUN_00910394(param_1 + 0xd8,param_4);
  FUN_00910394(param_1 + 0xe8,param_5);
  FUN_008fce60(param_1 + 0xf8,param_6);
  FUN_00910394(param_1 + 0x110,param_7);
  FUN_008fce60(param_1 + 0x120,param_8);
  FUN_00910394(param_1 + 0x138,param_9);
  FUN_008fce60(param_1 + 0x148,param_10);
  return;
}




void FUN_00bdbdcc(long param_1)

{
  FUN_00bdb420(param_1 + -0x10);
  return;
}




void FUN_00bdbdd4(long param_1,uint param_2)

{
  FUN_00c439b8(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bdbde0(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [48];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [96];
  undefined1 auStack_e0 [168];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b63fc0(auStack_1f0);
  uVar3 = FUN_00bdbed0(param_1,auStack_1f0,auStack_e0,auStack_1e0,auStack_1d0,auStack_1c0,
                       auStack_190,auStack_180,auStack_150,auStack_140);
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x98);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) goto LAB_00bdbea0;
    }
    else if (*(long *)(param_1 + 0xa0) == 0) goto LAB_00bdbea0;
    FUN_00bdbfac(param_1,(byte *)(param_1 + 0x98),*(undefined1 *)(param_1 + 0x162),0);
  }
  else {
    FUN_00f048e0(auStack_210,DAT_0313375c,auStack_1f0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_210,1);
  }
LAB_00bdbea0:
  FUN_0096910c(auStack_1f0);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00bdbed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x161) != '\0';
  if (bVar1) {
    FUN_00910394(param_2,param_1 + 0xb0);
    FUN_008fce60(param_3,param_1 + 0xc0);
    FUN_00910394(param_4,param_1 + 0xd8);
    FUN_00910394(param_5,param_1 + 0xe8);
    FUN_008fce60(param_6,param_1 + 0xf8);
    FUN_00910394(param_7,param_1 + 0x110);
    FUN_008fce60(param_8,param_1 + 0x120);
    FUN_00910394(param_9,param_1 + 0x138);
    FUN_008fce60(param_10,param_1 + 0x148);
  }
  return bVar1;
}




void FUN_00bdbfac(long param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  void *__s1;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  char *__s2;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  bool bVar14;
  ulong uVar15;
  
  uVar15 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar15 = (ulong)(*param_2 >> 1);
  }
  pbVar1 = pbVar3 + uVar15;
  uVar10 = uVar15;
  pbVar7 = pbVar3;
  while( true ) {
    uVar5 = uVar15;
    pbVar8 = pbVar3;
    if ((((long)uVar10 < 0xc) || (uVar10 - 0xb == 0)) ||
       (pbVar7 = memchr(pbVar7,0x76,uVar10 - 0xb), pbVar7 == (byte *)0x0)) goto joined_r0x00bdc064;
    iVar6 = memcmp(pbVar7,"vainglory://",0xc);
    if (iVar6 == 0) break;
    pbVar7 = pbVar7 + 1;
    uVar10 = (long)pbVar1 - (long)pbVar7;
  }
  if ((pbVar7 != pbVar1) && (bVar14 = false, pbVar7 == pbVar3)) goto LAB_00bdc0c8;
joined_r0x00bdc064:
  while (((pbVar7 = pbVar1, 7 < (long)uVar5 &&
          ((uVar5 - 7 != 0 && (pbVar8 = memchr(pbVar8,0x76,uVar5 - 7), pbVar8 != (byte *)0x0)))) &&
         (pbVar7 = pbVar8, *(long *)pbVar8 != 0x2f2f3a6f65646976))) {
    uVar5 = (long)pbVar1 - (long)(pbVar8 + 1);
    pbVar8 = pbVar8 + 1;
  }
  bVar14 = pbVar7 != pbVar3 || pbVar7 == pbVar1;
LAB_00bdc0c8:
  pbVar7 = pbVar3;
  if (*(char *)(param_1 + 0x160) != '\0') {
    while( true ) {
      if ((((long)uVar15 < 8) || (uVar15 - 7 == 0)) ||
         (pbVar7 = memchr(pbVar7,0x76,uVar15 - 7), pbVar7 == (byte *)0x0)) goto LAB_00bdc138;
      if (*(long *)pbVar7 == 0x2f2f3a6f65646976) break;
      uVar15 = (long)pbVar1 - (long)(pbVar7 + 1);
      pbVar7 = pbVar7 + 1;
    }
    if ((pbVar7 != pbVar1) && (pbVar7 == pbVar3)) {
      FUN_008fa19c(1);
    }
  }
LAB_00bdc138:
  uVar9 = FUN_009b8d90();
  FUN_009bb46c(uVar9,param_2,&DAT_0320ffa8,param_3 & 1,param_4 & 1);
  bVar4 = *(byte *)(param_1 + 0x30);
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x38);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x40);
    __s1 = pvVar13;
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x31);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        pcVar11 = (char *)(param_1 + 0x31);
        lVar12 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar11 != *__s2) goto LAB_00bdc1d8;
          pcVar11 = pcVar11 + 1;
          lVar12 = lVar12 + 1;
          __s2 = __s2 + 1;
        } while (lVar12 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_00bdc1f8;
    return;
  }
LAB_00bdc1d8:
  if ((bVar4 & 1) == 0) {
    pvVar13 = (void *)(param_1 + 0x31);
  }
  else {
    pvVar13 = *(void **)(param_1 + 0x40);
  }
LAB_00bdc1f8:
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    param_1 = param_1 + 0x49;
  }
  else {
    param_1 = *(long *)(param_1 + 0x58);
  }
  FUN_009092e4(pvVar13,param_1,bVar14,0);
  return;
}




void thunk_FUN_00bdbaa4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uStack_58;
  void *pvStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_009fded0();
  if (lVar3 != 0) {
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
    FUN_00c46568(*(undefined8 *)(param_1 + 8),&uStack_58);
    if ((int)uStack_58 != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)((long)pvStack_50 + uVar4 * 8);
        iVar2 = FUN_009fe4d0(lVar3,lVar5 + 0x15c0);
        uVar4 = uVar4 + 1;
        *(uint *)(lVar5 + 0x84) =
             *(uint *)(lVar5 + 0x84) & 0xfffffff0 |
             *(uint *)(lVar5 + 0x84) & 7 | (uint)(iVar2 == 1) << 3;
      } while (uVar4 < (uStack_58 & 0xffffffff));
    }
    if (pvStack_50 != (void *)0x0) {
      operator_delete__(pvStack_50);
      uStack_58 = 0;
      pvStack_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

