// functions/00978 — 22 functions
#include "libGameKindred.h"




void FUN_0097801c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_009780f4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0xa0);
    uVar2 = *param_1;
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar1 = &PTR_FUN_027bca90;
        FUN_00978240(puVar1 + 1,(long)puVar5 + lVar6 + 8);
        FUN_008fcdb8(puVar1 + 3,(long)puVar5 + lVar6 + 0x18);
        uVar7 = *(undefined8 *)((long)puVar5 + lVar6 + 0x50);
        puVar1[0xb] = *(undefined8 *)((long)puVar5 + lVar6 + 0x58);
        puVar1[10] = uVar7;
        uVar7 = *(undefined8 *)((long)puVar5 + lVar6 + 0x40);
        puVar1[9] = *(undefined8 *)((long)puVar5 + lVar6 + 0x48);
        puVar1[8] = uVar7;
        uVar7 = *(undefined8 *)((long)puVar5 + lVar6 + 0x30);
        puVar1[7] = *(undefined8 *)((long)puVar5 + lVar6 + 0x38);
        puVar1[6] = uVar7;
        FUN_008fcdb8(puVar1 + 0xc,(long)puVar5 + lVar6 + 0x60);
        thunk_FUN_00e7051c(puVar1 + 0xf,(long)puVar5 + lVar6 + 0x78);
        thunk_FUN_00e7051c(puVar1 + 0x11,(long)puVar5 + lVar6 + 0x88);
        lVar3 = lVar6 + 0x98;
        lVar6 = lVar6 + 0xa0;
        *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)((long)puVar5 + lVar3);
      } while ((ulong)uVar2 * 0xa0 - lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0xa0;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0xa0;
          puVar5 = puVar5 + 0x14;
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




void FUN_00978240(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0097801c(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    lVar2 = lVar4 + (ulong)*param_2 * 0x20;
    do {
      FUN_008fcdb8(lVar5,lVar4);
      puVar1 = (undefined4 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
      *(undefined4 *)(lVar5 + 0x18) = *puVar1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 != lVar2);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return;
}




void FUN_009782bc(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    FUN_00977fa4(param_1,1);
    FUN_009780f4(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        lVar2 = lVar6 + lVar5;
        *puVar1 = &PTR_FUN_027bca90;
        FUN_00978240(puVar1 + 1,lVar2 + 8);
        FUN_008fcdb8(puVar1 + 3,lVar2 + 0x18);
        uVar8 = *(undefined8 *)(lVar2 + 0x50);
        puVar1[0xb] = *(undefined8 *)(lVar2 + 0x58);
        puVar1[10] = uVar8;
        uVar8 = *(undefined8 *)(lVar2 + 0x40);
        puVar1[9] = *(undefined8 *)(lVar2 + 0x48);
        puVar1[8] = uVar8;
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
        puVar1[7] = *(undefined8 *)(lVar2 + 0x38);
        puVar1[6] = uVar8;
        FUN_008fcdb8(puVar1 + 0xc,lVar2 + 0x60);
        thunk_FUN_00e7051c(puVar1 + 0xf,lVar2 + 0x78);
        thunk_FUN_00e7051c(puVar1 + 0x11,lVar2 + 0x88);
        lVar5 = lVar5 + 0xa0;
        *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)(lVar2 + 0x98);
      } while ((ulong)uVar3 * 0xa0 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_009783c0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x38);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x38);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        *(undefined4 *)((long)pvVar6 + 0x30) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x38);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        pbVar4 = (byte *)((long)pvVar3 + 0x18);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          lVar5 = lVar5 + -0x38;
          pbVar4 = pbVar4 + 0x38;
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




void FUN_009784b8(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009694d4();
  *param_1 = &PTR_FUN_027bcb30;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_008fa54c(local_40,"ACADEMY");
  FUN_008fce60(param_1 + 6,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00978540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bcb30;
  FUN_0096c22c(param_1 + 9,1);
  FUN_00969500(param_1);
  return;
}




void FUN_00978578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bcb30;
  FUN_0096c22c(param_1 + 9,1);
  FUN_00969500(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009785b8(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined **local_e0;
  ulong local_d8;
  undefined4 local_d0;
  byte local_c8;
  undefined7 uStack_c7;
  byte local_c0;
  void *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  void *local_a0;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if ((int)param_2[0xb] == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    lVar3 = FUN_008fd190(param_2,"gamefeed");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
      local_e0 = (undefined **)0x1b9732e;
      local_d0 = 0x100005;
      local_d8 = 8;
      plVar4 = (long *)FUN_008feca4(param_2,&local_e0);
      lVar3 = FUN_008fd190(plVar4,"sections");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_e0 = (undefined **)0x1b97337;
        local_d0 = 0x100005;
        local_d8 = 8;
        plVar5 = (long *)FUN_008feca4(plVar4,&local_e0);
        if (((int)plVar5[2] == 4) && ((int)plVar5[1] != 0)) {
          lVar3 = 0;
          uVar6 = 0;
          do {
            FUN_00978928(&local_e0,*plVar5 + lVar3);
            FUN_00978858(param_1 + 1,&local_e0);
            local_e0 = &PTR_FUN_027bca40;
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            if ((local_c8 & 1) != 0) {
              operator_delete(local_b8);
            }
            FUN_00977e28(&local_d8,1);
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar6 < *(uint *)(plVar5 + 1));
        }
      }
      lVar3 = FUN_008fd190(plVar4,"playmenu");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_e0 = (undefined **)0x1b97340;
        local_d0 = 0x100005;
        local_d8 = 8;
        plVar4 = (long *)FUN_008feca4(plVar4,&local_e0);
        if (((int)plVar4[2] == 4) && ((int)plVar4[1] != 0)) {
          lVar3 = 0;
          uVar6 = 0;
          do {
            FUN_00978a9c(&local_e0,*plVar4 + lVar3);
            FUN_009789f0(param_1 + 9,&local_e0);
            local_e0 = &PTR_FUN_027bcb08;
            if ((local_c0 & 1) != 0) {
              operator_delete((void *)CONCAT71(uStack_af,local_b0));
            }
            if ((local_d8 & 1) != 0) {
              operator_delete((void *)CONCAT71(uStack_c7,local_c8));
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar6 < *(uint *)(plVar4 + 1));
        }
      }
    }
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00978858(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_0096a2bc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x78;
  *(undefined ***)(lVar4 + -0x78) = &PTR_FUN_027bca40;
  FUN_0096a3ec(lVar4 + -0x70,param_2 + 8);
  FUN_008fcdb8(lVar4 + -0x60,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x48,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x48);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x60);
  return;
}




void FUN_00978928(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_b0;
  undefined1 auStack_a8 [16];
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009744d0(&local_b0);
  FUN_009740b8(param_1,&local_b0,param_2);
  local_b0 = &PTR_FUN_027bca40;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  FUN_00977e28(auStack_a8,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009789f0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00978bf0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  *(undefined ***)(lVar4 + -0x38) = &PTR_FUN_027bcb08;
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 8);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x20);
  return;
}




void FUN_00978a9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = &PTR_FUN_027bcb08;
  FUN_008fcdb8(local_78,&DAT_0320ffa8);
  FUN_008fcdb8(local_60,&DAT_0320ffa8);
  FUN_0097746c(param_1,&local_80,param_2);
  local_80 = &PTR_FUN_027bcb08;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00978b5c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_00969c14();
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x48) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0x48) * 0x38;
      puVar2 = *(undefined8 **)(param_1 + 0x50);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}




undefined8 FUN_00978bbc(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00978cf4(param_2,(int *)(param_1 + 0x48));
    return 1;
  }
  return 0;
}




void FUN_00978bf0(uint *param_1,uint param_2)

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
        *puVar4 = &PTR_FUN_027bcb08;
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




void FUN_00978cf4(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_0096c22c(param_1,1);
    FUN_00978bf0(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x38;
      lVar2 = *(long *)(param_2 + 2) + 0x20;
      do {
        *puVar3 = &PTR_FUN_027bcb08;
        FUN_008fcdb8(puVar3 + 1,lVar2 + -0x18);
        FUN_008fcdb8(puVar3 + 4,lVar2);
        lVar4 = lVar4 + -0x38;
        lVar2 = lVar2 + 0x38;
        puVar3 = puVar3 + 7;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00978dac(undefined8 *param_1)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009694d4();
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_027bcb60;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_008fcdb8(param_1 + 0xf,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x12,&DAT_0320ffa8);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_008fa54c(local_50,"MARKET");
  FUN_008fce60(param_1 + 6,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00978e68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bcb60;
  FUN_0092fd98(param_1 + 0x15,1);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  FUN_0097b6e8(param_1 + 0xd,1);
  FUN_00978fe4(param_1 + 0xb,1);
  FUN_0097905c(param_1 + 9,1);
  FUN_00969500(param_1);
  return;
}




void FUN_00978ee4(void *param_1)

{
  FUN_00978e68();
  operator_delete(param_1);
  return;
}




void FUN_00978f08(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_00969c14();
  if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x58) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0x58) * 0x70;
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x70;
        puVar2 = puVar2 + 0xe;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x48) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
      puVar2 = *(undefined8 **)(param_1 + 0x50);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xe8;
        puVar2 = puVar2 + 0x1d;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_0092fd98(param_1 + 0xa8,0);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x78) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x90) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}




void FUN_00978fe4(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x70;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x70;
        puVar2 = puVar2 + 0xe;
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

