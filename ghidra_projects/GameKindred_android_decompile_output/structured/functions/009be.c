// functions/009be — 37 functions
#include "libGameKindred.h"




void FUN_009be1c8(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_009be8c4(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009be3a0(long param_1)

{
  FUN_009bdde8(param_1 + -0x28);
  return;
}




uint FUN_009be3a8(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint local_4;
  
  local_4 = param_2;
  uVar3 = *(uint *)(param_1 + 0x30);
  if (uVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = param_2 / uVar3;
    }
    uVar4 = param_2 - uVar4 * uVar3;
    while ((*(uint *)(lVar5 + (ulong)uVar4 * 8) != param_2 &&
           (*(int *)(lVar5 + (ulong)uVar4 * 8 + 4) != -1))) {
      uVar1 = uVar3;
      if (0 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 - 1;
    }
    if ((uVar4 != 0xffffffff) &&
       (uVar3 = *(uint *)(lVar5 + (ulong)uVar4 * 8 + 4), uVar3 != 0xffffffff)) {
      puVar6 = (uint *)(*(long *)(param_1 + 0x50) + (ulong)uVar3 * 4);
      goto LAB_009be41c;
    }
  }
  puVar6 = (uint *)0x0;
LAB_009be41c:
  puVar2 = &local_4;
  if (puVar6 != (uint *)0x0) {
    puVar2 = puVar6;
  }
  return *puVar2;
}




undefined4 FUN_009be434(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009be3a8(param_1 + -0x28,param_2);
  return uVar1;
}




undefined8 FUN_009be454(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_40 = param_2;
  uVar5 = FUN_00e6a474(param_2);
  uVar6 = FUN_0091ed5c(param_2,uVar5,0x12345678);
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x68);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar6 / uVar2;
    }
    uVar3 = uVar6 - uVar3 * uVar2;
    while ((*(uint *)(lVar8 + (ulong)uVar3 * 8) != uVar6 &&
           (*(int *)(lVar8 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) && (*(int *)(lVar8 + (ulong)uVar3 * 8 + 4) != -1)) {
      puVar7 = (undefined8 *)FUN_009bea5c((uint *)(param_1 + 0x60),&local_40);
      param_2 = *puVar7;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009be538(long param_1)

{
  FUN_009be454(param_1 + -0x28);
  return;
}




void FUN_009be540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2860;
  param_1[5] = &PTR_FUN_027c28a8;
  FUN_009be5d8(param_1 + 0xc);
  FUN_009be65c(param_1 + 6);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009be588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2860;
  param_1[5] = &PTR_FUN_027c28a8;
  FUN_009be5d8(param_1 + 0xc);
  FUN_009be65c(param_1 + 6);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009be5d8(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_009be65c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_009be6dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2860;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[5] = &PTR_FUN_027c28a8;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  return;
}




void FUN_009be71c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009be724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009be728(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_009be7bc(param_1 + 0x18,auStack_40);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 4);
  }
  else {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 4);
    *(undefined4 *)(param_1 + 0x28) = *puVar2;
  }
  *puVar2 = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009be7bc(uint *param_1,undefined4 *param_2)

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
    FUN_009be844(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_009be844(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined4 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_009be8c4(long param_1,undefined8 *param_2)

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
    FUN_009be954(param_1 + 0x18,auStack_40);
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




void FUN_009be954(uint *param_1,undefined8 *param_2)

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
    FUN_009be9dc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_009be9dc(uint *param_1,uint param_2)

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




long FUN_009bea5c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
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
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_009beae8;
    }
  }
  uVar7 = 0xffffffff;
LAB_009beae8:
  return *(long *)(param_1 + 8) + uVar7 * 8;
}




void FUN_009beafc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_027c28d0;
  param_1[5] = &PTR_FUN_027c2900;
  FUN_00e70510(param_1 + 7);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xbf800000;
  return;
}




void FUN_009beb68(long param_1)

{
  long lVar1;
  
  DAT_0312e498 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312e498 + 1;
  lVar1 = param_1 + (ulong)DAT_0312e498 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009bef1c;
  *(code **)(lVar1 + 0xb8) = FUN_009bef40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x24;
  *(uint *)(lVar1 + 0xa4) = DAT_0312e498;
  *(undefined4 *)(lVar1 + 0xa8) = 0x58;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009bebd8,0);
  return;
}




void FUN_009bebd8(long param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0xbf800000;
  return;
}




long FUN_009bebe4(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  long local_178 [36];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01985cbc(param_1,local_178,0x24,DAT_0312e498);
  lVar3 = 0;
  if (uVar2 != 0) {
    uVar6 = (ulong)uVar2;
    plVar7 = local_178;
    lVar4 = lVar3;
    do {
      lVar5 = *plVar7;
      lVar3 = lVar5;
      if (((lVar4 != 0) && (*(uint *)(lVar4 + 0x34) <= *(uint *)(lVar5 + 0x34))) &&
         (lVar3 = lVar4, *(uint *)(lVar5 + 0x34) == *(uint *)(lVar4 + 0x34))) {
        fVar8 = (float)FUN_009becb4(lVar5);
        fVar9 = (float)FUN_009becb4(lVar4);
        lVar3 = lVar5;
        if (fVar8 <= fVar9) {
          lVar3 = lVar4;
        }
      }
      uVar6 = uVar6 - 1;
      plVar7 = plVar7 + 1;
      lVar4 = lVar3;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_009becb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x4c);
  if (fVar6 < 0.0) {
    fVar6 = 1.0;
    lVar3 = param_1;
    if (*(char *)(param_1 + 0x50) == '\0') {
      do {
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) {
          lVar1 = 0;
          break;
        }
        lVar1 = lVar3;
        if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
          lVar1 = 0;
        }
      } while (lVar1 == 0);
      uVar2 = FUN_00d9ea34(lVar1);
      fVar4 = (float)FUN_00d6b9b8(uVar2,*(undefined4 *)(param_1 + 0x48));
      fVar5 = (float)FUN_00d6b9f8(uVar2,*(undefined4 *)(param_1 + 0x48));
      if ((0.0 < fVar4) && (fVar6 = (float)NEON_fminnm(fVar5 / fVar4,0x3f800000), fVar6 <= 0.0)) {
        fVar6 = 0.0;
      }
    }
    *(float *)(param_1 + 0x4c) = fVar6;
  }
  return fVar6;
}




void FUN_009bed64(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  FUN_00910394(param_1 + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}




long FUN_009bed98(long param_1)

{
  return param_1 + 0x38;
}




void FUN_009beda0(long param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}




void FUN_009bedac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c28d0;
  param_1[5] = &PTR_FUN_027c2900;
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009bee00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c28d0;
  param_1[5] = &PTR_FUN_027c2900;
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009bee5c(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_027c28d0;
  *param_1 = &PTR_FUN_027c2900;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_009beeb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_027c28d0;
  *param_1 = &PTR_FUN_027c2900;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  FUN_0198931c(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




long FUN_009bef0c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009bef14(long param_1)

{
  return param_1 + -0x28;
}




undefined8 FUN_009bef1c(undefined8 param_1)

{
  FUN_009beafc();
  return param_1;
}




void FUN_009bef40(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bef48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009bef4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2930;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  *(byte *)((long)param_1 + 0x34) = *(byte *)((long)param_1 + 0x34) & 0xfc;
  return;
}




void FUN_009bef74(long param_1)

{
  long lVar1;
  
  DAT_02c091e8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c091e8 + 1;
  lVar1 = param_1 + (ulong)DAT_02c091e8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009bf740;
  *(code **)(lVar1 + 0xb8) = FUN_009bf768;
  *(uint *)(lVar1 + 0xa4) = DAT_02c091e8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009bf088,0);
  FUN_019867cc(param_1,0x22ef04a2,FUN_009bf0a0,0);
  FUN_019867cc(param_1,0x22450493,FUN_009bf194,0);
  FUN_019867cc(param_1,0xdc302c4,FUN_009bf2b4,0);
  FUN_019867cc(param_1,0x163803be,FUN_009bf31c,0);
  FUN_019867cc(param_1,0x4ccb075d,FUN_009bf384,0);
  return;
}

