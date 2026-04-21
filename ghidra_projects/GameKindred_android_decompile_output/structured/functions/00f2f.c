// functions/00f2f — 44 functions
#include "libGameKindred.h"




void FUN_00f2f0c4(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (undefined8 *)0x0;
  (**(code **)*param_2)(param_2);
  local_40 = *(undefined8 **)(param_1 + 0x20);
  if (((local_40 == (undefined8 *)0x0) || (param_2 < local_40)) || (local_40 + 0x180 < param_2)) {
    uVar2 = 0;
    do {
      do {
        local_40 = *(undefined8 **)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8);
        uVar2 = uVar2 + 1;
      } while (param_2 < local_40);
    } while (local_40 + 0x180 < param_2);
  }
  if (*(int *)((long)local_40 + 0xc04) == 0x40) {
    FUN_00f2f6d8(param_1 + 0x10,&local_40);
  }
  *(undefined8 **)(param_1 + 0x20) = local_40;
  *(undefined4 *)(local_40 + ((ulong)((long)param_2 - (long)local_40) / 0x30 & 0xffffffff) * 6) =
       *(undefined4 *)(local_40 + 0x180);
  *(int *)(local_40 + 0x180) = (int)((ulong)((long)param_2 - (long)local_40) / 0x30);
  *(int *)((long)local_40 + 0xc04) = *(int *)((long)local_40 + 0xc04) + -1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2f1c4(int *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  piVar4 = param_1 + 4;
  FUN_00f2f29c(piVar4,*piVar4 + param_2);
  FUN_00f2f29c(param_1,*param_1 + param_2);
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      local_50 = operator_new(0xe08);
      lVar2 = 0;
      iVar3 = 1;
      *(undefined4 *)((long)local_50 + 0xe04) = 0;
      do {
        *(int *)((long)local_50 + lVar2) = iVar3;
        lVar2 = lVar2 + 0x38;
        iVar3 = iVar3 + 1;
      } while (lVar2 != 0xdc8);
      *(undefined4 *)((long)local_50 + 0xe00) = 0;
      FUN_00f2f31c(piVar4,&local_50);
      FUN_00f2f31c(param_1,&local_50);
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2f29c(uint *param_1,uint param_2)

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




void FUN_00f2f31c(uint *param_1,undefined8 *param_2)

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
    FUN_00f2f29c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f2f3a4(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  piVar5 = param_1 + 4;
  FUN_00f2f478(piVar5,*piVar5 + param_2);
  FUN_00f2f478(param_1,*param_1 + param_2);
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      local_50 = operator_new(0x1208);
      lVar3 = -0x3f;
      local_50[0x481] = 0;
      piVar4 = local_50;
      do {
        iVar2 = (int)lVar3;
        lVar3 = lVar3 + 1;
        *piVar4 = iVar2 + 0x40;
        piVar4 = piVar4 + 0x12;
      } while (lVar3 != 0);
      local_50[0x480] = 0;
      FUN_00f2f4f8(piVar5,&local_50);
      FUN_00f2f4f8(param_1,&local_50);
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2f478(uint *param_1,uint param_2)

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




void FUN_00f2f4f8(uint *param_1,undefined8 *param_2)

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
    FUN_00f2f478(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f2f580(int *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  piVar4 = param_1 + 4;
  FUN_00f2f658(piVar4,*piVar4 + param_2);
  FUN_00f2f658(param_1,*param_1 + param_2);
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      local_50 = operator_new(0xc08);
      lVar2 = 0;
      iVar3 = 1;
      *(undefined4 *)((long)local_50 + 0xc04) = 0;
      do {
        *(int *)((long)local_50 + lVar2) = iVar3;
        lVar2 = lVar2 + 0x30;
        iVar3 = iVar3 + 1;
      } while (lVar2 != 0xbd0);
      *(undefined4 *)((long)local_50 + 0xc00) = 0;
      FUN_00f2f6d8(piVar4,&local_50);
      FUN_00f2f6d8(param_1,&local_50);
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f2f658(uint *param_1,uint param_2)

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




void FUN_00f2f6d8(uint *param_1,undefined8 *param_2)

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
    FUN_00f2f658(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f2f760(uint *param_1,ulong param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_2 & 1) != 0) {
    if (uVar1 != 0) {
      lVar4 = *(long *)(param_1 + 2);
      uVar3 = 0;
      do {
        piVar5 = *(int **)(lVar4 + uVar3 * 8);
        lVar7 = -0x3f;
        piVar5[0x381] = 0;
        piVar8 = piVar5;
        do {
          iVar6 = (int)lVar7;
          lVar7 = lVar7 + 1;
          *piVar8 = iVar6 + 0x40;
          piVar8 = piVar8 + 0xe;
        } while (lVar7 != 0);
        piVar5[0x380] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    FUN_00f2f81c(param_1 + 4,param_1);
    return;
  }
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar9 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        uVar3 = (ulong)*param_1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  if (*(long *)(param_1 + 6) != 0) {
    param_1[4] = 0;
  }
  return;
}




void FUN_00f2f81c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00f2f29c(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00f2f888(uint *param_1,ulong param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_2 & 1) != 0) {
    if (uVar1 != 0) {
      lVar4 = *(long *)(param_1 + 2);
      uVar3 = 0;
      do {
        piVar5 = *(int **)(lVar4 + uVar3 * 8);
        lVar7 = -0x3f;
        piVar5[0x481] = 0;
        piVar8 = piVar5;
        do {
          iVar6 = (int)lVar7;
          lVar7 = lVar7 + 1;
          *piVar8 = iVar6 + 0x40;
          piVar8 = piVar8 + 0x12;
        } while (lVar7 != 0);
        piVar5[0x480] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    FUN_00f2f944(param_1 + 4,param_1);
    return;
  }
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar9 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        uVar3 = (ulong)*param_1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  if (*(long *)(param_1 + 6) != 0) {
    param_1[4] = 0;
  }
  return;
}




void FUN_00f2f944(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00f2f478(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00f2f9b0(uint *param_1,ulong param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_2 & 1) != 0) {
    if (uVar1 != 0) {
      lVar4 = *(long *)(param_1 + 2);
      uVar3 = 0;
      do {
        piVar5 = *(int **)(lVar4 + uVar3 * 8);
        lVar7 = -0x3f;
        piVar5[0x301] = 0;
        piVar8 = piVar5;
        do {
          iVar6 = (int)lVar7;
          lVar7 = lVar7 + 1;
          *piVar8 = iVar6 + 0x40;
          piVar8 = piVar8 + 0xc;
        } while (lVar7 != 0);
        piVar5[0x300] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    FUN_00f2fa6c(param_1 + 4,param_1);
    return;
  }
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar9 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        uVar3 = (ulong)*param_1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  if (*(long *)(param_1 + 6) != 0) {
    param_1[4] = 0;
  }
  return;
}




void FUN_00f2fa6c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00f2f658(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00f2fadc(long param_1,code *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*param_2)(0x38);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_028290f8;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *puVar2 = &PTR_FUN_028290b0;
  *(undefined4 *)((long)puVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar2 + 0x24) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x14) = uVar3;
  return;
}




uint FUN_00f2fb48(undefined8 param_1,uint param_2)

{
  return param_2 >> 1 & 1;
}




undefined8 FUN_00f2fb50(void)

{
  return 2;
}




void FUN_00f2fb58(void)

{
  return;
}




void FUN_00f2fb5c(void)

{
  return;
}




void FUN_00f2fb60(void)

{
  return;
}




void FUN_00f2fb64(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf2fb68);
  (*pcVar1)();
}




void FUN_00f2fb6c(long param_1,code *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*param_2)(0x48);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_028290f8;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *puVar2 = &PTR_FUN_02829140;
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((long)puVar2 + 0x34) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar2 + 0x24) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x14) = uVar3;
  return;
}




uint FUN_00f2fbd8(undefined8 param_1,uint param_2)

{
  return param_2 >> 2 & 1;
}




undefined8 FUN_00f2fbe0(void)

{
  return 4;
}




void FUN_00f2fbe8(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x14) = *param_2;
  return;
}




void FUN_00f2fbfc(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  return;
}




void FUN_00f2fc10(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




void FUN_00f2fc18(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}




void FUN_00f2fc20(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  return;
}




void FUN_00f2fc2c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}




void FUN_00f2fc38(long param_1,code *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*param_2)(0x30);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_028290f8;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *puVar2 = &PTR_FUN_028291b8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x14) = uVar3;
  return;
}




uint FUN_00f2fc9c(undefined8 param_1,uint param_2)

{
  return param_2 >> 3 & 1;
}




undefined8 FUN_00f2fca4(void)

{
  return 8;
}




void FUN_00f2fcac(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02829200;
  param_1[5] = 0;
  param_1[1] = 0;
  FUN_00f30210(param_1 + 7);
  FUN_00f2fd0c(param_1 + 1,0x40);
  FUN_0091f484(param_1 + 5,0x20);
  return;
}




void FUN_00f2fd0c(uint *param_1,uint param_2)

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




void FUN_00f2fd8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02829200;
  FUN_00f30264(param_1 + 7);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_00f2fdec(void *param_1)

{
  FUN_00f2fd8c();
  operator_delete(param_1);
  return;
}




void FUN_00f2fe10(void)

{
  return;
}




void FUN_00f2fe14(long *param_1,long *param_2,ushort param_3,ushort param_4)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00f2fe94(param_1);
    *(uint *)(param_2 + 1) = uVar1;
    *(long **)(param_1[2] + (ulong)uVar1 * 8) = param_2;
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
  }
  *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | param_3;
  *(ushort *)((long)param_2 + 0x12) = *(ushort *)((long)param_2 + 0x12) | param_4;
  return;
}




void FUN_00f2fe94(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x28) == 0) {
    local_30 = 0;
    FUN_00f30184(param_1 + 8,&local_30);
    iVar1 = *(int *)(param_1 + 8) + -1;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x28) - 1;
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + (ulong)uVar2 * 4);
    *(uint *)(param_1 + 0x28) = uVar2;
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}




void FUN_00f2ff0c(long param_1,long *param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_3 == 0xffff) {
    *(undefined2 *)(param_2 + 2) = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 2) & (param_3 ^ 0xffff);
    *(ushort *)(param_2 + 2) = uVar1;
    if (uVar1 != 0) goto LAB_00f2ff9c;
  }
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0xffffffff) {
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    local_3c = uVar2;
    FUN_0091f584(param_1 + 0x28,&local_3c);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar2 * 8) = 0;
    (**(code **)(*param_2 + 0x30))(param_2,param_1);
  }
LAB_00f2ff9c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f2ffc4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_0091f584(param_1 + 0x28,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

