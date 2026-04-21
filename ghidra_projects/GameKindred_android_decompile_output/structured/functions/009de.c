// functions/009de — 37 functions
#include "libGameKindred.h"




void FUN_009de02c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c37f0;
  if ((void *)param_1[0xc6] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc6]);
    param_1[0xc6] = 0;
    param_1[0xc5] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x9f);
  FUN_00f0d3a4(param_1 + 0x79);
  param_1[0x5b] = &PTR_FUN_028266f0;
  param_1[0x72] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x75);
  FUN_00f13d08(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_009de0dc(void *param_1)

{
  FUN_009de02c();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009de100(undefined8 param_1)

{
  FUN_009dc968();
  return param_1;
}




void FUN_009de124(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009de12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009de130(long param_1)

{
  long lVar1;
  
  DAT_02e3efa8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02e3efa8 + 1;
  lVar1 = param_1 + (ulong)DAT_02e3efa8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009de754;
  *(code **)(lVar1 + 0xb8) = FUN_009de794;
  *(uint *)(lVar1 + 0xa4) = DAT_02e3efa8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x70;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_009de190(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027c3938;
  uVar1 = DAT_03214ce8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  return;
}




void FUN_009de1d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3938;
  FUN_009de204(param_1 + 8);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009de204(uint *param_1)

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




void FUN_009de284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3938;
  FUN_009de204(param_1 + 8);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009de2c0(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_009de304(long param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 local_5c;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar14 = (uint *)(param_1 + 0x40);
  uVar9 = *puVar14;
  uVar1 = *param_2;
  uVar10 = *(int *)(param_1 + 0x50) + 1;
  *(uint *)(param_1 + 0x50) = uVar10;
  local_5c = param_3;
  if (uVar9 >> 1 < uVar10) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *(uint *)(param_1 + 0x40);
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 0x48);
    }
    else {
      pvVar7 = *(void **)(param_1 + 0x48);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar4 = 0;
          if ((uint)local_58 != 0) {
            uVar4 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar4 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar3 = *piVar13;
          while (iVar3 != -1) {
            uVar4 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar4 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar4 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar3 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *puVar14;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x40) = (uint)local_58;
    *(undefined4 *)(param_1 + 0x44) = local_58._4_4_;
    local_58 = CONCAT44(uVar2,uVar10);
    *(void **)(param_1 + 0x48) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *puVar14;
    }
  }
  lVar8 = *(long *)(param_1 + 0x48);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar1 / uVar9;
  }
  uVar12 = (ulong)(uVar1 - uVar10 * uVar9);
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
  *(uint *)(lVar8 + uVar12 * 8) = uVar1;
  iVar6 = FUN_009de7a0(puVar14,&local_5c);
  *piVar13 = iVar6;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009de4c0(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else if (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_02c7eb40) {
    lVar10 = 0;
  }
  uVar7 = FUN_009cbc5c(lVar10);
  lVar10 = FUN_01985d44(param_1,DAT_02c7eb40);
  uVar6 = DAT_03214ce8;
  if (lVar10 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_009de5a0:
    *(undefined4 *)(param_1 + 0x38) = uVar6;
    return;
  }
  iVar2 = *(int *)(lVar10 + 0x30);
  *(long **)(param_1 + 0x30) = (long *)(lVar10 + 0x28);
  *(int *)(param_1 + 0x38) = iVar2;
  if (iVar2 != *(int *)(lVar10 + 0x30)) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    goto LAB_009de5a0;
  }
  lVar10 = (**(code **)(*(long *)(lVar10 + 0x28) + 0x10))();
  if (lVar10 == 0) {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x30);
  uVar9 = 0;
  if (plVar8 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar8[1]) {
      uVar9 = (**(code **)(*plVar8 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  if (uVar3 != 0) {
    uVar4 = *param_2;
    lVar10 = *(long *)(param_1 + 0x48);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar4 / uVar3;
    }
    uVar5 = uVar4 - uVar5 * uVar3;
    while ((*(uint *)(lVar10 + (ulong)uVar5 * 8) != uVar4 &&
           (*(int *)(lVar10 + (ulong)uVar5 * 8 + 4) != -1))) {
      uVar1 = uVar3;
      if (0 < (int)uVar5) {
        uVar1 = uVar5;
      }
      uVar5 = uVar1 - 1;
    }
    if (uVar5 != 0xffffffff) {
      uVar11 = (ulong)*(uint *)(lVar10 + (ulong)uVar5 * 8 + 4);
      goto LAB_009de624;
    }
  }
  uVar11 = 0xffffffff;
LAB_009de624:
  FUN_009cba7c(uVar9,uVar7,*(undefined4 *)(*(long *)(param_1 + 0x60) + uVar11 * 4));
  return;
}




void FUN_009de640(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x30);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x30) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
          }
        }
        FUN_009cb90c(uVar3);
        plVar1 = *(long **)(param_1 + 0x30);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x30) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_009de728(undefined8 param_1,undefined8 param_2)

{
  FUN_009de640();
  FUN_009de4c0(param_1,param_2);
  return;
}




void FUN_009de754(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027c3938;
  uVar1 = DAT_03214ce8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  return;
}




void FUN_009de794(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009de79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009de7a0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_009de834(param_1 + 0x18,auStack_40);
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




void FUN_009de834(uint *param_1,undefined4 *param_2)

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
    FUN_009de8bc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_009de8bc(uint *param_1,uint param_2)

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




void FUN_009de93c(long param_1)

{
  long lVar1;
  
  DAT_0312e4c8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312e4c8 + 1;
  lVar1 = param_1 + (ulong)DAT_0312e4c8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009defc8;
  *(code **)(lVar1 + 0xb8) = FUN_009df034;
  *(uint *)(lVar1 + 0xa4) = DAT_0312e4c8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x60;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x14;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_009de99c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_d8;
  long alStack_d0 [19];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01985d00(param_1,&local_d8,0x14,DAT_0312e4c8);
  if (uVar2 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 1;
  }
  else {
    if (uVar2 != 1) {
      lVar5 = (ulong)uVar2 - 1;
      lVar3 = local_d8;
      plVar4 = alStack_d0;
      do {
        local_d8 = *plVar4;
        if (*(int *)(*plVar4 + 0x58) <= *(int *)(lVar3 + 0x58)) {
          local_d8 = lVar3;
        }
        lVar5 = lVar5 + -1;
        lVar3 = local_d8;
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
    }
    FUN_009dea68(local_d8,param_2,param_3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009dea68(long param_1,float *param_2,float *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    break;
  case 2:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) break;
    if (*(int *)(param_1 + 0x50) != (int)plVar4[1]) {
LAB_009dec28:
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      break;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) break;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    uVar1 = FUN_00d66cf4(uVar3);
    *param_2 = (float)uVar1;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    uVar1 = FUN_00d66cfc(uVar3);
    *param_3 = (float)uVar1;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    iVar2 = FUN_00d66cfc(uVar3);
    goto LAB_009dec64;
  case 3:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) break;
    if (*(int *)(param_1 + 0x50) != (int)plVar4[1]) goto LAB_009dec28;
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) break;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    fVar6 = (float)FUN_00d67b34(uVar3);
LAB_009ded9c:
    *param_2 = fVar6;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    fVar6 = (float)FUN_00d67b3c(uVar3);
    *param_3 = fVar6;
    goto LAB_009dec60;
  case 4:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) != (int)plVar4[1]) goto LAB_009dec28;
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_1 + 0x48);
        uVar3 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
            uVar3 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x48) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
          }
        }
        fVar6 = (float)FUN_00d67b3c(uVar3);
        plVar4 = *(long **)(param_1 + 0x48);
        uVar3 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
            uVar3 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x48) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
          }
        }
        fVar7 = (float)FUN_00d67b34(uVar3);
        fVar6 = fVar6 - fVar7;
        goto LAB_009ded9c;
      }
    }
    break;
  case 5:
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar4[1]) {
        lVar5 = (**(code **)(*plVar4 + 0x10))();
        if (lVar5 != 0) {
          lVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
          fVar6 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x6a));
          *param_2 = fVar6;
          lVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
          *param_3 = (float)((int)*(char *)(lVar5 + 0x69) + (uint)*(byte *)(lVar5 + 0x68));
          lVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
          iVar2 = (int)*(char *)(lVar5 + 0x69) + (uint)*(byte *)(lVar5 + 0x68);
          goto LAB_009dec64;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
      }
    }
    break;
  default:
    goto switchD_009deaac_default;
  }
  *param_2 = 0.0;
  *param_3 = 1.0;
LAB_009dec60:
  iVar2 = 1;
LAB_009dec64:
  *param_4 = iVar2;
switchD_009deaac_default:
  return;
}




void FUN_009dee0c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c3968;
  param_1[5] = &PTR_FUN_027c3998;
  uVar1 = DAT_03214ce8;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar1;
  return;
}




void FUN_009dee74(long param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return;
}




void FUN_009dee80(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 2;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x48) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}




void FUN_009dee9c(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 3;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x48) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}




void FUN_009deeb8(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 4;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x48) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}




void FUN_009deed4(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 5;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x38) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}




void FUN_009deef0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_009deef8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_2 = 0x3f800000;
  *param_3 = 1;
  return;
}




void FUN_009def10(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009def38(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009def68(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_009def8c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_009defb8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009defc0(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_009defc8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c3968;
  param_1[5] = &PTR_FUN_027c3998;
  uVar1 = DAT_03214ce8;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar1;
  return param_1;
}

