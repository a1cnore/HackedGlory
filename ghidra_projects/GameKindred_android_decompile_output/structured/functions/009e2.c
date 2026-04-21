// functions/009e2 — 15 functions
#include "libGameKindred.h"




void FUN_009e20c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,long param_8)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  byte local_108 [16];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulong local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  byte local_88 [8];
  uint local_80;
  void *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_88,param_5);
  uVar4 = FUN_0090de00();
  uVar1 = (uint)(local_88[0] >> 1);
  if ((local_88[0] & 1) != 0) {
    uVar1 = local_80;
  }
  if (uVar4 < uVar1) {
    FUN_00924fa8(local_88,uVar4,uVar1 - uVar4);
  }
  FUN_00e70510(&local_98);
  uVar5 = thunk_FUN_00ec6548();
  FUN_008fa54c(&local_b0,uVar5);
  lVar6 = FUN_009e2b04(param_8,&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (param_8 + 8 != lVar6) {
    uVar5 = FUN_00ec3f08(lVar6 + 0x38);
    FUN_00e705c8(&local_b0,uVar5);
    FUN_00910394(&local_98,&local_b0);
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
  }
  FUN_009580b8();
  uVar5 = FUN_0095fdf0();
  bVar3 = FUN_00e70b34(&local_98,uVar5);
  FUN_00e705c8(&local_c0,param_5);
  FUN_008fa54c(&local_b0,param_3);
  FUN_008fa54c(local_d8,param_4);
  FUN_008fa54c(local_f0,param_4);
  FUN_008fa54c(local_108,param_6);
  FUN_009e184c(param_1,&local_c0,&local_b0,local_d8,local_f0,local_108,param_7 & 1,0,bVar3 & 1,
               param_8);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e22e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,long param_8)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  byte local_108 [16];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulong local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  byte local_88 [8];
  uint local_80;
  void *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_88,param_5);
  uVar4 = FUN_0090de00();
  uVar1 = (uint)(local_88[0] >> 1);
  if ((local_88[0] & 1) != 0) {
    uVar1 = local_80;
  }
  if (uVar4 < uVar1) {
    FUN_00924fa8(local_88,uVar4,uVar1 - uVar4);
  }
  FUN_00e70510(&local_98);
  uVar5 = thunk_FUN_00ec6548();
  FUN_008fa54c(&local_b0,uVar5);
  lVar6 = FUN_009e2b04(param_8,&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (param_8 + 8 != lVar6) {
    uVar5 = FUN_00ec3f08(lVar6 + 0x38);
    FUN_00e705c8(&local_b0,uVar5);
    FUN_00910394(&local_98,&local_b0);
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
  }
  FUN_009580b8();
  uVar5 = FUN_0095fdf0();
  bVar3 = FUN_00e70b34(&local_98,uVar5);
  FUN_00e705c8(&local_c0,param_5);
  FUN_008fa54c(&local_b0,param_3);
  FUN_008fa54c(local_d8,param_4);
  FUN_008fa54c(local_f0,param_4);
  FUN_008fa54c(local_108,param_6);
  FUN_009e184c(param_1,&local_c0,&local_b0,local_d8,local_f0,local_108,param_7 & 1,1,bVar3 & 1,
               param_8);
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e2500(long param_1)

{
  FUN_009e22e0(param_1 + -8);
  return;
}




void FUN_009e250c(uint *param_1,undefined8 param_2)

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
    FUN_009e2c6c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_009e2da4(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x88 + -0x88,param_2);
  return;
}




void FUN_009e2598(uint *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar2 = *param_1;
  iVar3 = (int)((ulong)(param_3 - param_2) >> 3);
  if (uVar2 == iVar3 * -0xf0f0f0f) {
    FUN_009e1744(param_1,1);
    return;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x88);
  lVar1 = (long)puVar7 - param_3;
  if (lVar1 != 0) {
    lVar5 = param_3 + 0x70;
    lVar6 = param_2;
    do {
      FUN_00910394(lVar6,lVar5 + -0x70);
      FUN_00910394(lVar6 + 0x10,lVar5 + -0x60);
      FUN_008fce60(lVar6 + 0x20,lVar5 + -0x50);
      FUN_008fce60(lVar6 + 0x38,lVar5 + -0x38);
      FUN_008fce60(lVar6 + 0x50,lVar5 + -0x20);
      if (lVar6 != lVar5 + -0x70) {
        FUN_009e2750(lVar6 + 0x68,*(undefined8 *)(lVar5 + -8),lVar5);
      }
      puVar4 = (undefined8 *)(lVar5 + 0x18);
      *(undefined1 *)(lVar6 + 0x82) = *(undefined1 *)(lVar5 + 0x12);
      *(undefined2 *)(lVar6 + 0x80) = *(undefined2 *)(lVar5 + 0x10);
      lVar6 = lVar6 + 0x88;
      lVar5 = lVar5 + 0x88;
    } while (puVar4 != puVar7);
    uVar2 = *param_1;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x88);
  }
  puVar4 = (undefined8 *)(param_2 + ((lVar1 >> 3) * -0xf0f0f0f0f0f0f0f & 0xffffffffU) * 0x88);
  if (puVar4 != puVar7) {
    do {
      FUN_00910328(puVar4 + 0xd,puVar4[0xe]);
      if ((*(byte *)(puVar4 + 10) & 1) != 0) {
        operator_delete((void *)puVar4[0xc]);
      }
      if ((*(byte *)(puVar4 + 7) & 1) != 0) {
        operator_delete((void *)puVar4[9]);
      }
      if ((*(byte *)(puVar4 + 4) & 1) != 0) {
        operator_delete((void *)puVar4[6]);
      }
      if ((void *)puVar4[3] != (void *)0x0) {
        operator_delete__((void *)puVar4[3]);
        puVar4[2] = 0;
        puVar4[3] = 0;
      }
      if ((void *)puVar4[1] != (void *)0x0) {
        operator_delete__((void *)puVar4[1]);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 0x11;
    } while (puVar7 != puVar4);
    uVar2 = *param_1;
  }
  *param_1 = uVar2 + iVar3 * 0xf0f0f0f;
  return;
}




void FUN_009e2750(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[2] != 0) {
    lVar5 = *param_1;
    plVar6 = param_1 + 1;
    *param_1 = (long)plVar6;
    *(undefined8 *)(*plVar6 + 0x10) = 0;
    param_1[2] = 0;
    *plVar6 = 0;
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
joined_r0x009e27b4:
    lVar7 = lVar5;
    if (lVar5 != 0) {
      do {
        if (param_2 == param_3) {
          lVar5 = *(long *)(lVar7 + 0x10);
          while (lVar2 = lVar5, lVar2 != 0) {
            lVar7 = lVar2;
            lVar5 = *(long *)(lVar2 + 0x10);
          }
          FUN_00910328(param_1,lVar7);
          goto LAB_009e28d8;
        }
        FUN_008fce60(lVar7 + 0x20,param_2 + 4);
        *(int *)(lVar7 + 0x38) = (int)param_2[7];
        FUN_008fce60(lVar7 + 0x40,param_2 + 8);
        *(int *)(lVar7 + 0x58) = (int)param_2[0xb];
        lVar5 = FUN_009e292c(lVar7);
        uVar4 = FUN_009e2988(param_1,&local_60,lVar7 + 0x20);
        FUN_00910a58(param_1,local_60,uVar4,lVar7);
        plVar6 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) {
          plVar6 = param_2 + 2;
          bVar3 = *(long **)*plVar6 == param_2;
          param_2 = (long *)*plVar6;
          if (bVar3) goto joined_r0x009e27b4;
          do {
            lVar7 = *plVar6;
            plVar6 = (long *)(lVar7 + 0x10);
            param_2 = (long *)*plVar6;
          } while (*param_2 != lVar7);
        }
        else {
          do {
            param_2 = plVar6;
            plVar6 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar7 = lVar5;
        if (lVar5 == 0) break;
      } while( true );
    }
  }
  while (param_2 != param_3) {
    FUN_009e2a5c(param_1,param_2 + 4);
    plVar6 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar6 = param_2 + 2;
      bVar3 = *(long **)*plVar6 != param_2;
      param_2 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          param_2 = (long *)*plVar6;
        } while (*param_2 != lVar5);
      }
    }
    else {
      do {
        param_2 = plVar6;
        plVar6 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
LAB_009e28d8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e292c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      plVar2 = (long *)plVar1[1];
      *plVar1 = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}




long * FUN_009e2988(long param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  long *plVar5;
  void *__s2;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = (long)plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar5 = plVar6;
        bVar3 = *(byte *)(plVar5 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar5[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar5[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar5 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (iVar4 < 0) goto LAB_009e2a1c;
LAB_009e2a08:
        plVar6 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          *param_2 = (long)plVar5;
          return plVar5 + 1;
        }
      }
      if (uVar1 <= uVar2) goto LAB_009e2a08;
LAB_009e2a1c:
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    *param_2 = (long)plVar5;
  }
  return plVar5;
}




void * FUN_009e2a5c(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x60);
  FUN_008fcdb8((long)pvVar2 + 0x20,param_2);
  FUN_00ec3d7c((long)pvVar2 + 0x38,param_2 + 0x18);
  uVar3 = FUN_009e2988(param_1,&local_50,(long)pvVar2 + 0x20);
  FUN_00910a58(param_1,local_50,uVar3,pvVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_009e2b04(long param_1,byte *param_2)

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
  puVar6 = (undefined8 *)FUN_009e2bbc(param_1,param_2,*puVar7,puVar7);
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




long FUN_009e2bbc(undefined8 param_1,byte *param_2,long param_3,long param_4)

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
LAB_009e2c30:
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
        if (uVar4 == 0) goto LAB_009e2c30;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void FUN_009e2c6c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x88);
    pvVar5 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 * 0x88;
      pvVar4 = pvVar3;
      do {
        FUN_009e2da4(pvVar4,pvVar5);
        pvVar5 = (void *)((long)pvVar5 + 0x88);
        lVar6 = lVar6 + -0x88;
        pvVar4 = (void *)((long)pvVar4 + 0x88);
      } while (lVar6 != 0);
      uVar2 = *param_1;
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          FUN_00910328((long)pvVar5 + lVar6 + 0x68,*(undefined8 *)((long)pvVar5 + lVar6 + 0x70));
          if ((*(byte *)((long)pvVar5 + lVar6 + 0x50) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x60));
          }
          if ((*(byte *)((long)pvVar5 + lVar6 + 0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x48));
          }
          if ((*(byte *)((long)pvVar5 + lVar6 + 0x20) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x30));
          }
          pvVar4 = *(void **)((long)pvVar5 + lVar6 + 0x18);
          if (pvVar4 != (void *)0x0) {
            operator_delete__(pvVar4);
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x10) = 0;
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x18) = 0;
          }
          puVar1 = (undefined8 *)((long)pvVar5 + lVar6);
          if ((void *)puVar1[1] != (void *)0x0) {
            operator_delete__((void *)puVar1[1]);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          lVar6 = lVar6 + 0x88;
        } while ((ulong)uVar2 * 0x88 - lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_009e2da4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  thunk_FUN_00e7051c();
  thunk_FUN_00e7051c(param_1 + 0x10,param_2 + 0x10);
  FUN_008fcdb8(param_1 + 0x20,param_2 + 0x20);
  FUN_008fcdb8(param_1 + 0x38,param_2 + 0x38);
  FUN_008fcdb8(param_1 + 0x50,param_2 + 0x50);
  puVar4 = (undefined8 *)(param_1 + 0x70);
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 **)(param_1 + 0x68) = puVar4;
  if (*(long **)(param_2 + 0x68) != (long *)(param_2 + 0x70)) {
    plVar5 = *(long **)(param_2 + 0x68);
    do {
      FUN_009e2ea4(param_1 + 0x68,puVar4,plVar5 + 4,plVar5 + 4);
      plVar1 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar1 = plVar5 + 2;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar2 != plVar5) {
          do {
            lVar3 = *plVar1;
            plVar1 = (long *)(lVar3 + 0x10);
            plVar2 = (long *)*plVar1;
          } while (*plVar2 != lVar3);
        }
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      plVar5 = plVar2;
    } while (plVar2 != (long *)(param_2 + 0x70));
  }
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  return;
}




void * FUN_009e2ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_009e2f54(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x60);
    FUN_008fcdb8((long)pvVar3 + 0x20,param_4);
    FUN_00ec3d7c((long)pvVar3 + 0x38,param_4 + 0x18);
    FUN_00910a58(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_009e2f54(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  if (param_1 + 1 == param_2) {
LAB_009e3008:
    plVar14 = (long *)*param_2;
    plVar9 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar6 = plVar14;
      plVar13 = param_2;
      if (plVar14 == (long *)0x0) {
        do {
          plVar9 = (long *)plVar13[2];
          bVar7 = (long *)*plVar9 == plVar13;
          plVar13 = plVar9;
        } while (bVar7);
      }
      else {
        do {
          plVar9 = plVar6;
          plVar6 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      bVar4 = *(byte *)(plVar9 + 4);
      bVar5 = *param_5;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(param_5 + 8);
      }
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = plVar9[5];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 != 0) {
        pvVar11 = (void *)plVar9[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)plVar9 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        iVar8 = memcmp(pvVar11,pbVar10,sVar3);
        if (iVar8 != 0) {
          if (-1 < iVar8) goto LAB_009e30f8;
          goto LAB_009e3128;
        }
      }
      if (uVar2 <= uVar1) goto LAB_009e30f8;
    }
LAB_009e3128:
    param_4 = param_2;
    if (plVar14 != (long *)0x0) {
      *param_3 = (long)plVar9;
      return plVar9 + 1;
    }
LAB_009e3144:
    *param_3 = (long)param_2;
  }
  else {
    bVar4 = *(byte *)(param_2 + 4);
    bVar5 = *param_5;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = param_2[5];
    }
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_009e3000:
      if (uVar1 < uVar2) goto LAB_009e3008;
      if (sVar3 != 0) {
        pvVar11 = (void *)param_2[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)param_2 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        goto LAB_009e3054;
      }
LAB_009e314c:
      if (uVar2 < uVar1) {
LAB_009e3154:
        param_4 = param_2 + 1;
        plVar9 = (long *)*param_4;
        if ((long *)*param_4 == (long *)0x0) {
          plVar9 = param_2 + 2;
          plVar14 = (long *)*plVar9;
          if ((long *)*plVar14 != param_2) {
            do {
              lVar12 = *plVar9;
              plVar9 = (long *)(lVar12 + 0x10);
              plVar14 = (long *)*plVar9;
            } while (*plVar14 != lVar12);
          }
        }
        else {
          do {
            plVar14 = plVar9;
            plVar9 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        if (plVar14 != param_1 + 1) {
          bVar4 = *(byte *)(plVar14 + 4);
          uVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = plVar14[5];
          }
          sVar3 = uVar2;
          if (uVar1 <= uVar2) {
            sVar3 = uVar1;
          }
          if (sVar3 != 0) {
            pbVar10 = *(byte **)(param_5 + 0x10);
            pvVar11 = (void *)plVar14[6];
            if ((bVar5 & 1) == 0) {
              pbVar10 = param_5 + 1;
            }
            if ((bVar4 & 1) == 0) {
              pvVar11 = (void *)((long)plVar14 + 0x21);
            }
            iVar8 = memcmp(pbVar10,pvVar11,sVar3);
            if (iVar8 != 0) {
              if (-1 < iVar8) goto LAB_009e30f8;
              goto LAB_009e3200;
            }
          }
          if (uVar2 <= uVar1) {
LAB_009e30f8:
            plVar9 = (long *)FUN_0091092c(param_1,param_3,param_5);
            return plVar9;
          }
        }
LAB_009e3200:
        if (param_2[1] != 0) {
          *param_3 = (long)plVar14;
          return plVar14;
        }
        goto LAB_009e3144;
      }
    }
    else {
      pbVar10 = *(byte **)(param_5 + 0x10);
      pvVar11 = (void *)param_2[6];
      if ((bVar5 & 1) == 0) {
        pbVar10 = param_5 + 1;
      }
      if ((bVar4 & 1) == 0) {
        pvVar11 = (void *)((long)param_2 + 0x21);
      }
      iVar8 = memcmp(pbVar10,pvVar11,sVar3);
      if (iVar8 == 0) goto LAB_009e3000;
      if (iVar8 < 0) goto LAB_009e3008;
LAB_009e3054:
      iVar8 = memcmp(pvVar11,pbVar10,sVar3);
      if (iVar8 == 0) goto LAB_009e314c;
      if (iVar8 < 0) goto LAB_009e3154;
    }
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
  }
  return param_4;
}

