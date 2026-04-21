// functions/0097b — 18 functions
#include "libGameKindred.h"




void FUN_0097b188(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_120 [232];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00976588(auStack_120);
  FUN_009756e8(param_1,auStack_120,param_2);
  FUN_009767f4(auStack_120);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0097b1f8(uint *param_1,long param_2)

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
    FUN_0097b844(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x70;
  *(undefined ***)(lVar4 + -0x70) = &PTR_FUN_027bca68;
  FUN_008fcdb8(lVar4 + -0x68,param_2 + 8);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x20);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x38);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x50);
  *(undefined2 *)(lVar4 + -4) = *(undefined2 *)(param_2 + 0x6c);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x68);
  return;
}




void FUN_0097b2d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00974b70(&local_a8);
  FUN_009746a0(param_1,&local_a8,param_2);
  local_a8 = &PTR_FUN_027bca68;
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0097b388(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00e70510(param_1 + 3);
  FUN_00e70510(param_1 + 5);
  FUN_00e70510(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  return;
}




void FUN_0097b3d0(uint *param_1,long param_2)

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
    FUN_00930e3c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  FUN_008fcdb8(lVar4 + -0x58,param_2);
  thunk_FUN_00e7051c(lVar4 + -0x40,param_2 + 0x18);
  thunk_FUN_00e7051c(lVar4 + -0x30,param_2 + 0x28);
  thunk_FUN_00e7051c(lVar4 + -0x20,param_2 + 0x38);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x48);
  return;
}




void FUN_0097b498(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_0097ba70(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x80;
  *(undefined ***)(lVar1 + -0x80) = &PTR_FUN_027bcae0;
  thunk_FUN_00e7051c(lVar1 + -0x78,param_2 + 8);
  thunk_FUN_00e7051c(lVar1 + -0x68,param_2 + 0x18);
  thunk_FUN_00e7051c(lVar1 + -0x58,param_2 + 0x28);
  FUN_008fcdb8(lVar1 + -0x48,param_2 + 0x38);
  FUN_008fcdb8(lVar1 + -0x30,param_2 + 0x50);
  FUN_0097bbb0(lVar1 + -0x18,param_2 + 0x68);
  *(undefined1 *)(lVar1 + -4) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x78);
  return;
}




void FUN_0097b580(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  byte local_80;
  void *local_70;
  byte local_68;
  void *local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009772cc(&local_b8);
  FUN_009768b8(param_1,&local_b8,param_2);
  local_b8 = &PTR_FUN_027bcae0;
  FUN_00977f18(auStack_50,1);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0097b658(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_00977ea0(param_1,1);
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
  }
  return;
}




void FUN_0097b6e8(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 7;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x80;
        puVar2 = puVar2 + 0x10;
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




void FUN_0097b75c(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_00978fe4(param_1,1);
    FUN_0097b844(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        lVar2 = lVar6 + lVar5;
        *puVar1 = &PTR_FUN_027bca68;
        FUN_008fcdb8(puVar1 + 1,lVar2 + 8);
        FUN_008fcdb8(puVar1 + 4,lVar2 + 0x20);
        FUN_008fcdb8(puVar1 + 7,lVar2 + 0x38);
        FUN_008fcdb8(puVar1 + 10,lVar2 + 0x50);
        lVar5 = lVar5 + 0x70;
        *(undefined2 *)((long)puVar1 + 0x6c) = *(undefined2 *)(lVar2 + 0x6c);
        *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(lVar2 + 0x68);
      } while ((ulong)uVar3 * 0x70 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_0097b844(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x70);
    uVar3 = *param_1;
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar2 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar2 = &PTR_FUN_027bca68;
        FUN_008fcdb8(puVar2 + 1,(long)puVar5 + lVar6 + 8);
        FUN_008fcdb8(puVar2 + 4,(long)puVar5 + lVar6 + 0x20);
        FUN_008fcdb8(puVar2 + 7,(long)puVar5 + lVar6 + 0x38);
        FUN_008fcdb8(puVar2 + 10,(long)puVar5 + lVar6 + 0x50);
        lVar1 = lVar6 + 0x70;
        *(undefined2 *)((long)puVar2 + 0x6c) = *(undefined2 *)((long)puVar5 + lVar6 + 0x6c);
        *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)((long)puVar5 + lVar6 + 0x68);
        lVar6 = lVar1;
      } while ((ulong)uVar3 * 0x70 - lVar1 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x70;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0x70;
          puVar5 = puVar5 + 0xe;
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




void FUN_0097b974(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_0097b6e8(param_1,1);
    FUN_0097ba70(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        lVar2 = lVar6 + lVar5;
        *puVar1 = &PTR_FUN_027bcae0;
        thunk_FUN_00e7051c(puVar1 + 1,lVar2 + 8);
        thunk_FUN_00e7051c(puVar1 + 3,lVar2 + 0x18);
        thunk_FUN_00e7051c(puVar1 + 5,lVar2 + 0x28);
        FUN_008fcdb8(puVar1 + 7,lVar2 + 0x38);
        FUN_008fcdb8(puVar1 + 10,lVar2 + 0x50);
        FUN_0097bbb0(puVar1 + 0xd,lVar2 + 0x68);
        lVar5 = lVar5 + 0x80;
        *(undefined1 *)((long)puVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
        *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(lVar2 + 0x78);
      } while ((ulong)uVar3 * 0x80 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_0097ba70(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 << 7);
    uVar3 = *param_1;
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar2 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar2 = &PTR_FUN_027bcae0;
        thunk_FUN_00e7051c(puVar2 + 1,(long)puVar5 + lVar6 + 8);
        thunk_FUN_00e7051c(puVar2 + 3,(long)puVar5 + lVar6 + 0x18);
        thunk_FUN_00e7051c(puVar2 + 5,(long)puVar5 + lVar6 + 0x28);
        FUN_008fcdb8(puVar2 + 7,(long)puVar5 + lVar6 + 0x38);
        FUN_008fcdb8(puVar2 + 10,(long)puVar5 + lVar6 + 0x50);
        FUN_0097bbb0(puVar2 + 0xd,(long)puVar5 + lVar6 + 0x68);
        lVar1 = lVar6 + 0x80;
        *(undefined1 *)((long)puVar2 + 0x7c) = *(undefined1 *)((long)puVar5 + lVar6 + 0x7c);
        *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)((long)puVar5 + lVar6 + 0x78);
        lVar6 = lVar1;
      } while ((ulong)uVar3 * 0x80 - lVar1 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 7;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0x80;
          puVar5 = puVar5 + 0x10;
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




void FUN_0097bbb0(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009783c0(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x38;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      puVar1 = (undefined4 *)(lVar3 + 0x30);
      lVar3 = lVar3 + 0x38;
      *(undefined4 *)(lVar4 + 0x30) = *puVar1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_0097bc3c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0xe8);
    uVar3 = *param_1;
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar2 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar2 = &PTR_FUN_027bcab8;
        FUN_0097bdb4(puVar2 + 1,(long)puVar5 + lVar6 + 8);
        thunk_FUN_00e7051c(puVar2 + 3,(long)puVar5 + lVar6 + 0x18);
        thunk_FUN_00e7051c(puVar2 + 5,(long)puVar5 + lVar6 + 0x28);
        thunk_FUN_00e7051c(puVar2 + 7,(long)puVar5 + lVar6 + 0x38);
        FUN_008fcdb8(puVar2 + 9,(long)puVar5 + lVar6 + 0x48);
        FUN_008fcdb8(puVar2 + 0xc,(long)puVar5 + lVar6 + 0x60);
        FUN_008fcdb8(puVar2 + 0xf,(long)puVar5 + lVar6 + 0x78);
        FUN_008fcdb8(puVar2 + 0x12,(long)puVar5 + lVar6 + 0x90);
        FUN_008fcdb8(puVar2 + 0x15,(long)puVar5 + lVar6 + 0xa8);
        FUN_008fcdb8(puVar2 + 0x18,(long)puVar5 + lVar6 + 0xc0);
        lVar1 = lVar6 + 0xe8;
        *(undefined8 *)((long)puVar2 + 0xde) = *(undefined8 *)((long)puVar5 + lVar6 + 0xde);
        puVar2[0x1b] = *(undefined8 *)((long)puVar5 + lVar6 + 0xd8);
        lVar6 = lVar1;
      } while ((ulong)uVar3 * 0xe8 - lVar1 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0xe8;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0xe8;
          puVar5 = puVar5 + 0x1d;
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




void FUN_0097bdb4(uint *param_1,uint *param_2)

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
  return;
}




void FUN_0097bea4(undefined8 *param_1)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009694d4();
  *param_1 = &PTR_FUN_027bcb90;
  memset(param_1 + 9,0,0x48);
  FUN_009744d0(param_1 + 0x12);
  FUN_008fa54c(local_50,"NEWS");
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




void FUN_0097bf50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bcb90;
  param_1[0x12] = &PTR_FUN_027bca40;
  if ((*(byte *)(param_1 + 0x1e) & 1) != 0) {
    operator_delete((void *)param_1[0x20]);
  }
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    operator_delete((void *)param_1[0x1d]);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    operator_delete((void *)param_1[0x1a]);
  }
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    operator_delete((void *)param_1[0x17]);
  }
  FUN_00977e28(param_1 + 0x13,1);
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_00969500(param_1);
  return;
}

