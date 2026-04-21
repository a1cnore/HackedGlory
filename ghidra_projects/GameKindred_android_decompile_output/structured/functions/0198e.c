// functions/0198e — 31 functions
#include "libGameKindred.h"




void FUN_0198e088(uint *param_1,ulong param_2)

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
        lVar7 = -0xff;
        piVar5[0x2801] = 0;
        piVar8 = piVar5;
        do {
          iVar6 = (int)lVar7;
          lVar7 = lVar7 + 1;
          *piVar8 = iVar6 + 0x100;
          piVar8 = piVar8 + 0x28;
        } while (lVar7 != 0);
        piVar5[0x2800] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    FUN_0198ee80(param_1 + 4,param_1);
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




void FUN_0198e14c(uint *param_1,ulong param_2)

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
        lVar7 = -0x1ff;
        piVar5[0x3001] = 0;
        piVar8 = piVar5;
        do {
          iVar6 = (int)lVar7;
          lVar7 = lVar7 + 1;
          *piVar8 = iVar6 + 0x200;
          piVar8 = piVar8 + 0x18;
        } while (lVar7 != 0);
        piVar5[0x3000] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    FUN_0198eeec(param_1 + 4,param_1);
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




void FUN_0198e210(long param_1)

{
  FUN_0198e228(param_1 + 8);
  return;
}




undefined4 * FUN_0198e228(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    FUN_0198e850(param_1,1);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)(iVar3 - 1U) * 8);
  puVar2 = (undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x4000) * 0x40);
  *(undefined4 *)(lVar4 + 0x4000) = *puVar2;
  iVar1 = *(int *)(lVar4 + 0x4004) + 1;
  *(int *)(lVar4 + 0x4004) = iVar1;
  if (iVar1 == 0x100) {
    *(uint *)(param_1 + 0x10) = iVar3 - 1U;
  }
  FUN_0198efd8(puVar2);
  return puVar2;
}




void FUN_0198e2a4(long param_1)

{
  FUN_0198e2bc(param_1 + 0x30);
  return;
}




undefined4 * FUN_0198e2bc(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    FUN_0198ea3c(param_1,1);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)(iVar2 - 1U) * 8);
  puVar4 = (undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 0xa000) * 0xa0);
  *(undefined4 *)(lVar3 + 0xa000) = *puVar4;
  iVar1 = *(int *)(lVar3 + 0xa004) + 1;
  *(int *)(lVar3 + 0xa004) = iVar1;
  if (iVar1 == 0x100) {
    *(uint *)(param_1 + 0x10) = iVar2 - 1U;
  }
  FUN_0198ef58(puVar4);
  return puVar4;
}




void FUN_0198e340(long param_1)

{
  FUN_0198e358(param_1 + 0x58);
  return;
}




void FUN_0198e358(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    FUN_0198ec28(param_1,1);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)(iVar2 - 1U) * 8);
  *(undefined4 *)(lVar3 + 0xc000) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 0xc000) * 0x60)
  ;
  iVar1 = *(int *)(lVar3 + 0xc004) + 1;
  *(int *)(lVar3 + 0xc004) = iVar1;
  if (iVar1 == 0x200) {
    *(uint *)(param_1 + 0x10) = iVar2 - 1U;
  }
  return;
}




void FUN_0198e3d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    FUN_0198f048(param_2,0);
    if (*plVar1 != 0) {
      lVar2 = *plVar1;
      do {
        lVar3 = *(long *)(lVar2 + 0x58);
        FUN_01996688(*param_1,*(undefined8 *)(lVar2 + 8));
        FUN_0198e460(param_1 + 0xb,lVar2);
        lVar2 = lVar3;
      } while (lVar3 != 0);
    }
    FUN_0198e55c(param_1 + 6,plVar1);
    return;
  }
  return;
}




void FUN_0198e460(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(ulong *)(param_1 + 0x20);
  if (((local_40 == 0) || (param_2 < local_40)) || (local_40 + 0xc000 < param_2)) {
    uVar2 = 0;
    do {
      do {
        local_40 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8);
        uVar2 = uVar2 + 1;
      } while (param_2 < local_40);
    } while (local_40 + 0xc000 < param_2);
  }
  if (*(int *)(local_40 + 0xc004) == 0x200) {
    FUN_0198ed8c(param_1 + 0x10,&local_40);
  }
  *(ulong *)(param_1 + 0x20) = local_40;
  *(undefined4 *)(local_40 + ((param_2 - local_40) / 0x60 & 0xffffffff) * 0x60) =
       *(undefined4 *)(local_40 + 0xc000);
  *(int *)(local_40 + 0xc000) = (int)((param_2 - local_40) / 0x60);
  *(int *)(local_40 + 0xc004) = *(int *)(local_40 + 0xc004) + -1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198e55c(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_019a0368(param_2 + 0x10);
  FUN_0199d0b8(param_2 + 8);
  local_40 = *(ulong *)(param_1 + 0x20);
  if (((local_40 == 0) || (param_2 < local_40)) || (local_40 + 0xa000 < param_2)) {
    uVar2 = 0;
    do {
      do {
        local_40 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8);
        uVar2 = uVar2 + 1;
      } while (param_2 < local_40);
    } while (local_40 + 0xa000 < param_2);
  }
  if (*(int *)(local_40 + 0xa004) == 0x100) {
    FUN_0198eba0(param_1 + 0x10,&local_40);
  }
  *(ulong *)(param_1 + 0x20) = local_40;
  *(undefined4 *)(local_40 + ((param_2 - local_40) / 0xa0 & 0xffffffff) * 0xa0) =
       *(undefined4 *)(local_40 + 0xa000);
  *(int *)(local_40 + 0xa000) = (int)((param_2 - local_40) / 0xa0);
  *(int *)(local_40 + 0xa004) = *(int *)(local_40 + 0xa004) + -1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198e668(long param_1,undefined8 param_2)

{
  FUN_0198e3d0();
  FUN_0198e694(param_1 + 8,param_2);
  return;
}




void FUN_0198e694(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_0198eff4(param_2);
  local_40 = *(ulong *)(param_1 + 0x20);
  if (((local_40 == 0) || (param_2 < local_40)) || (local_40 + 0x4000 < param_2)) {
    uVar2 = 0;
    do {
      do {
        local_40 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8);
        uVar2 = uVar2 + 1;
      } while (param_2 < local_40);
    } while (local_40 + 0x4000 < param_2);
  }
  if (*(int *)(local_40 + 0x4004) == 0x100) {
    FUN_0198e9b4(param_1 + 0x10,&local_40);
  }
  *(ulong *)(param_1 + 0x20) = local_40;
  *(undefined4 *)(local_40 + (param_2 - local_40 & 0x3fffffffc0)) =
       *(undefined4 *)(local_40 + 0x4000);
  *(int *)(local_40 + 0x4000) = (int)(param_2 - local_40 >> 6);
  *(int *)(local_40 + 0x4004) = *(int *)(local_40 + 0x4004) + -1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198e784(long param_1,long param_2,void *param_3,void *param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 auStack_3e8 [912];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0198e2bc(param_1 + 0x30);
  FUN_0198f0cc(auStack_3e8,uVar2,param_1);
  FUN_019a1280(param_5,auStack_3e8);
  pvVar3 = (void *)FUN_0198f4bc(auStack_3e8);
  memcpy(param_3,pvVar3,0x184);
  pvVar3 = (void *)FUN_0198f4b4(auStack_3e8);
  memcpy(param_4,pvVar3,0x1d4);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198e84c(void)

{
  return;
}




void FUN_0198e850(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  piVar5 = param_1 + 4;
  FUN_0198e934(piVar5,*piVar5 + param_2);
  FUN_0198e934(param_1,*param_1 + param_2);
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      local_60 = operator_new(0x4008);
      lVar3 = -0xff;
      local_60[0x1001] = 0;
      piVar4 = local_60;
      do {
        iVar2 = (int)lVar3;
        lVar3 = lVar3 + 1;
        *piVar4 = iVar2 + 0x100;
        piVar4 = piVar4 + 0x10;
      } while (lVar3 != 0);
      local_60[0x1000] = 0;
      FUN_0198e9b4(piVar5,&local_60);
      FUN_0198e9b4(param_1,&local_60);
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198e934(uint *param_1,uint param_2)

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




void FUN_0198e9b4(uint *param_1,undefined8 *param_2)

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
    FUN_0198e934(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_0198ea3c(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  piVar5 = param_1 + 4;
  FUN_0198eb20(piVar5,*piVar5 + param_2);
  FUN_0198eb20(param_1,*param_1 + param_2);
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      local_60 = operator_new(0xa008);
      lVar3 = -0xff;
      local_60[0x2801] = 0;
      piVar4 = local_60;
      do {
        iVar2 = (int)lVar3;
        lVar3 = lVar3 + 1;
        *piVar4 = iVar2 + 0x100;
        piVar4 = piVar4 + 0x28;
      } while (lVar3 != 0);
      local_60[0x2800] = 0;
      FUN_0198eba0(piVar5,&local_60);
      FUN_0198eba0(param_1,&local_60);
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198eb20(uint *param_1,uint param_2)

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




void FUN_0198eba0(uint *param_1,undefined8 *param_2)

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
    FUN_0198eb20(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_0198ec28(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  piVar5 = param_1 + 4;
  FUN_0198ed0c(piVar5,*piVar5 + param_2);
  FUN_0198ed0c(param_1,*param_1 + param_2);
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      local_60 = operator_new(0xc008);
      lVar3 = -0x1ff;
      local_60[0x3001] = 0;
      piVar4 = local_60;
      do {
        iVar2 = (int)lVar3;
        lVar3 = lVar3 + 1;
        *piVar4 = iVar2 + 0x200;
        piVar4 = piVar4 + 0x18;
      } while (lVar3 != 0);
      local_60[0x3000] = 0;
      FUN_0198ed8c(piVar5,&local_60);
      FUN_0198ed8c(param_1,&local_60);
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198ed0c(uint *param_1,uint param_2)

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




void FUN_0198ed8c(uint *param_1,undefined8 *param_2)

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
    FUN_0198ed0c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_0198ee14(uint *param_1,uint *param_2)

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
    FUN_0198e934(param_1,*param_2);
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




void FUN_0198ee80(uint *param_1,uint *param_2)

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
    FUN_0198eb20(param_1,*param_2);
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




void FUN_0198eeec(uint *param_1,uint *param_2)

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
    FUN_0198ed0c(param_1,*param_2);
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




void FUN_0198ef58(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_0199d0a8(param_1 + 1);
  FUN_019a033c(param_1 + 2);
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x84) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x12) = 0xff7fffff;
  *(undefined4 *)((long)param_1 + 0x94) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x11) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x8c) = 0xff7fffff;
  return;
}




void FUN_0198efa8(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_0198efd8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  return;
}




void FUN_0198eff4(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

