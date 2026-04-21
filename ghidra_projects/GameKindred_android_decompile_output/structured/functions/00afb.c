// functions/00afb — 42 functions
#include "libGameKindred.h"




long FUN_00afb064(long param_1)

{
  return param_1 + 0x30;
}




long FUN_00afb06c(long param_1)

{
  return param_1 + 0x48;
}




long FUN_00afb074(long param_1)

{
  return param_1 + 0x30;
}




undefined8 FUN_00afb07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}




void FUN_00afb084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dabf8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}




undefined8 FUN_00afb0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




long FUN_00afb0dc(long param_1)

{
  return param_1 + 0x50;
}




long FUN_00afb0e4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 8;
    }
  }
  return 0;
}




void FUN_00afb18c(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar8 = param_1[4];
  uVar7 = *param_1;
  param_1[4] = uVar8 + 1;
  if (uVar7 >> 1 < uVar8 + 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    FUN_009348c8(&local_48,(uVar7 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar8 = *param_1;
    uVar9 = uVar8 - 1;
    uVar7 = (uint)local_48;
    if ((int)uVar9 < 0) {
      pvVar5 = *(void **)(param_1 + 2);
    }
    else {
      pvVar5 = *(void **)(param_1 + 2);
      do {
        iVar1 = *(int *)((long)pvVar5 + (ulong)uVar9 * 8 + 4);
        if (iVar1 != -1) {
          uVar8 = *(uint *)((long)pvVar5 + (ulong)uVar9 * 8);
          uVar3 = 0;
          if ((uint)local_48 != 0) {
            uVar3 = uVar8 / (uint)local_48;
          }
          uVar10 = (ulong)(uVar8 - uVar3 * (uint)local_48);
          piVar11 = (int *)((long)local_40 + uVar10 * 8 + 4);
          iVar2 = *piVar11;
          while (iVar2 != -1) {
            uVar3 = (uint)local_48;
            if (0 < (int)(uint)uVar10) {
              uVar3 = (uint)uVar10;
            }
            uVar10 = (ulong)(uVar3 - 1);
            piVar11 = (int *)((long)local_40 + uVar10 * 8 + 4);
            iVar2 = *piVar11;
          }
          *(uint *)((long)local_40 + uVar10 * 8) = uVar8;
          *piVar11 = iVar1;
        }
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
      uVar8 = *param_1;
    }
    uVar9 = param_1[1];
    *param_1 = (uint)local_48;
    param_1[1] = local_48._4_4_;
    local_48 = CONCAT44(uVar9,uVar8);
    *(void **)(param_1 + 2) = local_40;
    local_40 = pvVar5;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      local_48 = 0;
      local_40 = (void *)0x0;
      uVar7 = *param_1;
    }
  }
  lVar6 = *(long *)(param_1 + 2);
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = param_2 / uVar7;
  }
  uVar10 = (ulong)(param_2 - uVar8 * uVar7);
  iVar1 = *(int *)(lVar6 + uVar10 * 8 + 4);
  while (iVar1 != -1) {
    uVar8 = uVar7;
    if (0 < (int)(uint)uVar10) {
      uVar8 = (uint)uVar10;
    }
    uVar10 = (ulong)(uVar8 - 1);
    iVar1 = *(int *)(lVar6 + uVar10 * 8 + 4);
  }
  *(uint *)(lVar6 + uVar10 * 8) = param_2;
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afb328(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00afb3b8(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afb3b8(uint *param_1,undefined8 *param_2)

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
    FUN_00afb440(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00afb440(uint *param_1,uint param_2)

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




void FUN_00afb4c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00afb550(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afb550(uint *param_1,undefined8 *param_2)

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
    FUN_00afb5d8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00afb5d8(uint *param_1,uint param_2)

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




ulong FUN_00afb658(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [168];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00afb730(param_1 + 0x18,auStack_e0);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0xa8);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  puVar4 = (undefined8 *)(lVar2 + uVar3 * 0xa8);
  *puVar4 = &PTR_FUN_027dabf8;
  puVar4[2] = uVar6;
  puVar4[1] = uVar5;
  FUN_008fcdb8(puVar4 + 3,param_2 + 0x18);
  FUN_008fcdb8(puVar4 + 6,param_2 + 0x30);
  memcpy(puVar4 + 9,(void *)(param_2 + 0x48),0x5c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00afb730(uint *param_1,void *param_2)

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
    FUN_00afb7c0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  memcpy((void *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa8 + -0xa8),param_2,0xa8);
  return;
}




void FUN_00afb7c0(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  void *__dest;
  long lVar2;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0xa8);
    __src = *(void **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xa8;
      __dest = pvVar1;
      do {
        memcpy(__dest,__src,0xa8);
        __src = (void *)((long)__src + 0xa8);
        lVar2 = lVar2 + -0xa8;
        __dest = (void *)((long)__dest + 0xa8);
      } while (lVar2 != 0);
      __src = *(void **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




long FUN_00afb85c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 8;
    }
  }
  return 0;
}




void FUN_00afb904(long *param_1)

{
  FUN_00f11234();
  *param_1 = (long)&PTR_FUN_027dac28;
  FUN_00f017e8(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x34] = (long)&PTR_FUN_027c1f80;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(byte *)((long)param_1 + 0x254) = *(byte *)((long)param_1 + 0x254) | 1;
                    /* WARNING: Could not recover jumptable at 0x00afb988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  return;
}




void FUN_00afb98c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dac28;
  FUN_00afb9e0();
  if ((void *)param_1[0x46] != (void *)0x0) {
    operator_delete__((void *)param_1[0x46]);
    param_1[0x46] = 0;
    param_1[0x45] = 0;
  }
  FUN_00f01868(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00afb9e0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x228) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x230) + uVar3 * 8) != 0) {
        uVar1 = FUN_00f02540();
        if ((uVar1 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x230) + uVar3 * 8),1);
        }
        plVar2 = *(long **)(*(long *)(param_1 + 0x230) + uVar3 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x228));
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
  return;
}




void FUN_00afba6c(void *param_1)

{
  FUN_00afb98c();
  operator_delete(param_1);
  return;
}




void FUN_00afba90(long param_1,float *param_2)

{
  if ((*(float *)(param_1 + 0x1e0) == *param_2) && (*(float *)(param_1 + 0x1e4) == param_2[1])) {
    return;
  }
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)param_2;
  FUN_0091ada4(param_1 + 0x1a0);
  return;
}




void FUN_00afbac8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x248) = param_1;
  return;
}




void FUN_00afbad0(float param_1,float param_2,long param_3)

{
  *(float *)(param_3 + 0x238) = param_1 * 0.5;
  *(float *)(param_3 + 0x23c) = param_2 * 0.5;
  return;
}




void FUN_00afbae8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x240) = param_1;
  *(undefined4 *)(param_3 + 0x244) = param_2;
  *(byte *)(param_3 + 0x254) = *(byte *)(param_3 + 0x254) | 1;
  return;
}




void FUN_00afbb00(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x24c) != param_2) {
    *(int *)(param_1 + 0x24c) = param_2;
    *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
  }
  return;
}




void FUN_00afbb20(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  if (param_2 != 0) {
    FUN_00f023ec(param_1 + 0x1a0,param_2,1);
    FUN_00adcf84(param_1 + 0x228,&local_30);
    uVar3 = (ulong)*(uint *)(param_1 + 0x228);
    if (*(uint *)(param_1 + 0x228) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      plVar4 = *(long **)(param_1 + 0x230);
      do {
        uVar3 = uVar3 - 1;
        iVar2 = (*(uint *)(*plVar4 + 0x84) >> 2 & 1) + iVar2;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
    }
    if (*(int *)(param_1 + 0x24c) != iVar2) {
      *(int *)(param_1 + 0x24c) = iVar2;
      *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
    }
    *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00afbbe8(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x228) != 0) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      iVar2 = (*(uint *)(*(long *)(*(long *)(param_1 + 0x230) + lVar1) + 0x84) >> 2 & 1) + iVar2;
    } while (uVar3 < *(uint *)(param_1 + 0x228));
    return iVar2;
  }
  return 0;
}




void FUN_00afbc24(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(uint *)(param_1 + 0x228) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x230) + uVar3 * 8) == param_2) {
        uVar1 = *(uint *)(param_2 + 0x84);
        if (((param_3 ^ uVar1 >> 2) & 1) == 0) {
          return;
        }
        *(uint *)(param_2 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_3 & 1) << 2;
        uVar3 = (ulong)*(uint *)(param_1 + 0x228);
        if (*(uint *)(param_1 + 0x228) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          plVar4 = *(long **)(param_1 + 0x230);
          do {
            uVar3 = uVar3 - 1;
            iVar2 = (*(uint *)(*plVar4 + 0x84) >> 2 & 1) + iVar2;
            plVar4 = plVar4 + 1;
          } while (uVar3 != 0);
        }
        if (*(int *)(param_1 + 0x24c) == iVar2) {
          return;
        }
        *(int *)(param_1 + 0x24c) = iVar2;
        *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x228));
  }
  return;
}




void FUN_00afbcb8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x250) = param_2;
  return;
}




void FUN_00afbcc0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = *(uint *)(param_1 + 0x228);
  if (uVar5 == 0) {
LAB_00afbd88:
    iVar3 = 0;
  }
  else {
    lVar6 = 0;
    uVar4 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x230) + uVar4 * 8) == param_2) {
        uVar4 = FUN_00f02540(param_2);
        if ((uVar4 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x230) + lVar6),1);
        }
        plVar2 = (long *)(*(long *)(param_1 + 0x230) + lVar6);
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
          plVar2 = (long *)(*(long *)(param_1 + 0x230) + lVar6);
        }
        FUN_00afbf44(param_1 + 0x228,plVar2,plVar2 + 1);
        uVar5 = *(uint *)(param_1 + 0x228);
        if (uVar5 == 0) goto LAB_00afbd88;
        break;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      lVar6 = lVar6 + 8;
    } while (uVar1 < uVar5);
    iVar3 = 0;
    uVar4 = (ulong)uVar5;
    plVar2 = *(long **)(param_1 + 0x230);
    do {
      uVar4 = uVar4 - 1;
      iVar3 = (*(uint *)(*plVar2 + 0x84) >> 2 & 1) + iVar3;
      plVar2 = plVar2 + 1;
    } while (uVar4 != 0);
  }
  if (*(int *)(param_1 + 0x24c) != iVar3) {
    *(int *)(param_1 + 0x24c) = iVar3;
    *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
  }
  *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) | 1;
  return;
}




undefined8 FUN_00afbdd0(long param_1)

{
  if (*(int *)(param_1 + 0x228) != 0) {
    return **(undefined8 **)(param_1 + 0x230);
  }
  return 0;
}




undefined8 FUN_00afbdec(long param_1)

{
  if (*(int *)(param_1 + 0x228) != 0) {
    return **(undefined8 **)(param_1 + 0x230);
  }
  return 0;
}




undefined4 FUN_00afbe08(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1e0);
}




void FUN_00afbe14(long *param_1)

{
  ulong uVar1;
  
  if ((*(byte *)((long)param_1 + 0x254) & 1) != 0) {
    FUN_00afbe78(param_1,0);
  }
  if ((int)param_1[0x45] != 0) {
    uVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(param_1[0x46] + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x45));
  }
  return;
}




void FUN_00afbe78(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (((param_2 & 1) != 0) || ((*(byte *)(param_1 + 0x254) & 1) != 0)) {
    if (*(int *)(param_1 + 0x228) != 0) {
      uVar2 = 0;
      do {
        lVar1 = *(long *)(*(long *)(param_1 + 0x230) + uVar2 * 8);
        fVar3 = *(float *)(param_1 + 0x23c);
        fVar4 = *(float *)(param_1 + 0x238) + *(float *)(param_1 + 0x240) * 0.0 +
                *(float *)(param_1 + 0x248) * 0.0;
        if ((*(float *)(lVar1 + 0x40) != fVar4) || (*(float *)(lVar1 + 0x44) != fVar3)) {
          *(float *)(lVar1 + 0x40) = fVar4;
          *(float *)(lVar1 + 0x44) = fVar3;
          FUN_0091ada4();
          lVar1 = *(long *)(*(long *)(param_1 + 0x230) + uVar2 * 8);
        }
        *(uint *)(lVar1 + 0x84) =
             *(uint *)(lVar1 + 0x84) & 0xfffffff8 |
             *(uint *)(lVar1 + 0x84) & 3 | (uint)(uVar2 == *(uint *)(param_1 + 0x250)) << 2;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x228));
    }
    *(byte *)(param_1 + 0x254) = *(byte *)(param_1 + 0x254) & 0xfe;
  }
  return;
}




void FUN_00afbf3c(void)

{
  return;
}




void FUN_00afbf40(void)

{
  return;
}




void FUN_00afbf44(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00afbfb0(undefined8 *param_1)

{
  FUN_00f11234();
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *param_1 = &PTR_FUN_027dad98;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  FUN_00afc010(param_1 + 0x34,0x10);
  param_1[0x31] = FUN_00afc090;
  param_1[0x32] = param_1;
  return;
}

