// functions/0198b — 38 functions
#include "libGameKindred.h"




void FUN_0198b008(long param_1,undefined8 param_2)

{
  FUN_0198b734();
  FUN_0198e668(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}




void FUN_0198b034(long param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}




void FUN_0198b044(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_58 [2];
  long local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    local_48 = 0;
    local_40 = (void *)0x0;
    plVar7 = (long *)*param_1;
    if ((long *)*param_1 != param_1 + 1) {
      do {
        if (*(int *)(plVar7[5] + 4) < 1) {
          local_58[0] = (undefined4)plVar7[4];
          local_50 = plVar7[5];
          FUN_0198b188(&local_48,local_58);
        }
        plVar3 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar3 = plVar7 + 2;
          plVar4 = (long *)*plVar3;
          if ((long *)*plVar4 != plVar7) {
            do {
              lVar5 = *plVar3;
              plVar3 = (long *)(lVar5 + 0x10);
              plVar4 = (long *)*plVar3;
            } while (*plVar4 != lVar5);
          }
        }
        else {
          do {
            plVar4 = plVar3;
            plVar3 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        plVar7 = plVar4;
      } while (plVar4 != param_1 + 1);
      pvVar8 = local_40;
      if ((int)local_48 != 0) {
        do {
          uVar6 = *(undefined8 *)((long)pvVar8 + 8);
          FUN_0198b734(param_1,uVar6);
          FUN_0198e668(param_1[3],uVar6);
          pvVar8 = (void *)((long)pvVar8 + 0x10);
        } while (pvVar8 != (void *)((long)local_40 + (local_48 & 0xffffffff) * 0x10));
      }
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0198b188(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_0198b6b0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




long FUN_0198b210(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x28);
  if (*(int *)(*param_2 + 8) != 1 || lVar1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}




void FUN_0198b22c(void)

{
  return;
}




void FUN_0198b230(void)

{
  return;
}




void FUN_0198b234(long param_1)

{
  FUN_0198e668(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_0198b23c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_3a8 [59];
  undefined1 auStack_1d0 [392];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  memset(auStack_1d0,0,0x188);
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 0x18;
    *(undefined8 *)((long)local_3a8 + lVar3) = 0;
    *(undefined8 *)((long)local_3a8 + lVar3 + 8) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0xc0);
  memset(local_3a8,0,0x1d8);
  FUN_0198e784(*(undefined8 *)(param_1 + 0x18),param_2,auStack_1d0,local_3a8,param_3);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),param_2,auStack_1d0,*(undefined8 *)(param_1 + 0x28));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),param_2,local_3a8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198b31c(long param_1)

{
  FUN_0198e784(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_0198b324(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0198b334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_0198b338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0198b344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  return;
}




void FUN_0198b348(undefined8 *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (int)param_1[2];
  }
  if (param_3 != (int *)0x0 || param_4 != (int *)0x0) {
    local_60 = 0;
    if (param_1 + 1 == (long *)*param_1) {
      iVar4 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      iVar4 = 0;
      plVar6 = (long *)*param_1;
      do {
        if (*(int *)(plVar6[5] + 8) == 1) {
          lVar7 = *(long *)(plVar6[5] + 0x28);
          FUN_0199d230(lVar7 + 8,(long)&local_60 + 4);
          FUN_019a0934(lVar7 + 0x10,&local_60);
          iVar5 = local_60._4_4_ + iVar5;
          iVar4 = (int)local_60 + iVar4;
        }
        plVar2 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar2 = plVar6 + 2;
          plVar3 = (long *)*plVar2;
          if ((long *)*plVar3 != plVar6) {
            do {
              lVar7 = *plVar2;
              plVar2 = (long *)(lVar7 + 0x10);
              plVar3 = (long *)*plVar2;
            } while (*plVar3 != lVar7);
          }
        }
        else {
          do {
            plVar3 = plVar2;
            plVar2 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        plVar6 = plVar3;
      } while (param_1 + 1 != plVar3);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar5;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_0198b484(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = FUN_0198efa8(param_2);
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar4;
  plVar2 = plVar4;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= uVar1) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < uVar1];
    } while (plVar3 != (long *)0x0);
    if (plVar2 != plVar4) {
      if (uVar1 < *(uint *)(plVar2 + 4)) {
        return false;
      }
      return plVar2[5] != 0;
    }
  }
  return false;
}




long FUN_0198b4f8(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= param_2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < param_2];
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar1) {
      lVar2 = 0;
      if (*(uint *)(plVar3 + 4) <= param_2) {
        lVar2 = plVar3[5];
      }
      return lVar2;
    }
  }
  return 0;
}




void FUN_0198b544(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0198b544(param_1,*param_2);
    FUN_0198b544(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_0198b590(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_0198b608;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_0198b608:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_0198b65c(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_0198b65c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_0198b6b0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




undefined8 FUN_0198b734(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (plVar2 != plVar3) {
      if (uVar1 < *(uint *)(plVar2 + 4)) {
        return 0;
      }
      FUN_0198b79c();
      return 1;
    }
  }
  return 0;
}




long * FUN_0198b79c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_0198b830(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_2 + 0x28);
  if (*(int *)(param_3 + 0x100) != 0) {
    uVar6 = 0;
    do {
      FUN_00e6faf4(auStack_158,"build:/%s",*(undefined8 *)(param_3 + uVar6 * 8));
      FUN_01996490(param_4,auStack_158);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_3 + 0x100));
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    uVar5 = 0;
    do {
      FUN_00e6faf4(auStack_158,"build:/%s",
                   *(undefined8 *)(param_3 + (long)*(int *)(param_3 + (ulong)uVar5 * 4 + 0x104) * 8)
                  );
      uVar2 = FUN_019965fc(param_4,auStack_158);
      *(undefined8 *)(lVar4 + 8) = uVar2;
      lVar4 = *(long *)(lVar4 + 0x58);
      uVar5 = uVar5 + 1;
    } while (lVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198b91c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(long *)(param_2 + 0x28);
  lVar1 = lVar2 + 0x10;
  FUN_019a0440(lVar1,*(undefined4 *)(param_3 + 0x1c0));
  if (*(int *)(param_3 + 0x1c8) != 0) {
    uVar3 = 0;
    puVar4 = (undefined4 *)(param_3 + 0x14);
    do {
      FUN_019a044c(lVar1,0,puVar4[-3],*puVar4,puVar4[-1]);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
    } while (uVar3 < *(uint *)(param_3 + 0x1c8));
  }
  if (*(int *)(param_3 + 0x1c4) != 0) {
    uVar3 = 0;
    puVar4 = (undefined4 *)(param_3 + 0xd0);
    do {
      FUN_019a06a4(lVar1,puVar4[-4],puVar4[-3],puVar4[-2],puVar4[-1],*puVar4,0);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 5;
    } while (uVar3 < *(uint *)(param_3 + 0x1c4));
  }
  FUN_019a0748(lVar1,0xffff,6);
  if (*(int *)(param_3 + 0x1c8) != 0) {
    uVar3 = 0;
    puVar5 = (uint *)(param_3 + 8);
    puVar6 = (undefined8 *)(lVar2 + 0x28);
    do {
      memmove((void *)*puVar6,*(void **)(puVar5 + -2),(ulong)*puVar5);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 3;
    } while (uVar3 < *(uint *)(param_3 + 0x1c8));
  }
  FUN_019a0844(lVar1,0xffff,0xffffffff);
  FUN_0199d14c(lVar2 + 8);
  FUN_0199d1ac(lVar2 + 8,*(undefined8 *)(param_3 + 0x1b0),*(undefined4 *)(param_3 + 0x1cc),
               *(undefined4 *)(param_3 + 0x1d0));
  return;
}




void FUN_0198ba3c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x198ba40);
  (*pcVar1)();
}




void FUN_0198ba40(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0198ba4c();
  return;
}




void FUN_0198ba4c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_0198bb54();
  for (lVar1 = *(long *)(param_2 + 0x30); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
    FUN_0198bb54(param_1,lVar1,param_3);
  }
  while (param_2 = *(long *)(param_2 + 0x38), param_2 != 0) {
    FUN_0198bb54(param_1,param_2,param_3);
  }
  return;
}




void FUN_0198bab8(uint *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 2);
      *(undefined8 *)(*(long *)(lVar2 + uVar4 * 8) + 8) = 0;
      pvVar3 = *(void **)(lVar2 + uVar4 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_019963b0(pvVar3);
        operator_delete(pvVar3);
        uVar1 = (ulong)*param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  pvVar3 = *(void **)(param_1 + 2);
  if (pvVar3 != (void *)0x0) {
    *param_1 = 0;
  }
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    param_1[4] = 0;
    operator_delete__(*(void **)(param_1 + 6));
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    pvVar3 = *(void **)(param_1 + 2);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_0198bb54(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(param_2 + 0x28) != (long *)0x0) &&
     (local_50 = **(long **)(param_2 + 0x28), local_50 != 0)) {
    do {
      pvVar2 = operator_new(0x10);
      FUN_019963a8();
      local_58 = pvVar2;
      FUN_019963ec(pvVar2,**(undefined8 **)(local_50 + 8));
      *(undefined8 *)((long)local_58 + 8) = param_3;
      FUN_00f339b0(param_1,&local_58);
      FUN_0198bc1c(param_1 + 0x10,&local_50);
      local_50 = *(long *)(local_50 + 0x58);
    } while (local_50 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198bc1c(uint *param_1,undefined8 *param_2)

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
    FUN_0198bce0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_0198bca4(long param_1,long param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x18) + (uVar1 & 0xffffffff) * 8) == param_2) {
        return *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 * 8);
      }
      uVar1 = uVar1 + 1;
    } while ((uint)uVar1 < *(uint *)(param_1 + 0x10));
  }
  return 0;
}




void FUN_0198bce0(uint *param_1,uint param_2)

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




void FUN_0198bd60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_0198bd6c(void)

{
  return;
}




undefined8
FUN_0198bd70(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00e7a7e4(0x28);
  FUN_00e7a3c0();
  *puVar2 = &PTR_thunk_FUN_00e7a3d4_02baf128;
  puVar7 = puVar2 + 2;
  *puVar7 = param_2;
  puVar2[3] = param_3;
  *(undefined4 *)(puVar2 + 4) = param_1;
  FUN_0198f0ac(param_2);
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = thunk_FUN_0198befc;
  uVar3 = FUN_00e7b734(&local_60,0xc26fcbe1);
  uVar3 = FUN_00e7b740(uVar3,param_5);
  FUN_00e7b7f0(uVar3,puVar2);
  uVar3 = FUN_00e7b844();
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = thunk_FUN_0198bfc0;
  uVar4 = FUN_00e7b734(&local_60,0x54da852f);
  uVar5 = FUN_00e7a0d0();
  uVar4 = FUN_00e7b728(uVar4,uVar5);
  uVar4 = FUN_00e7b740(uVar4,uVar3);
  uVar4 = FUN_00e7b784(uVar4,param_6);
  FUN_00e7b7f0(uVar4,puVar2);
  uVar4 = FUN_00e7b844();
  local_60 = (undefined8 *)FUN_00e7a148();
  *local_60 = puVar7;
  local_60[1] = FUN_0198c05c;
  uVar5 = FUN_00e7b734(&local_60,0xb80ca353);
  uVar6 = FUN_00e7a0ec();
  uVar5 = FUN_00e7b728(uVar5,uVar6);
  uVar4 = FUN_00e7b740(uVar5,uVar4);
  FUN_00e7b7f0(uVar4,puVar2);
  uVar4 = FUN_00e7b844();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,uVar4);
}




void FUN_0198befc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_1d0 [392];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e7a224();
  lVar4 = FUN_00e7a25c(uVar3,0x815f1c7b);
  puVar1 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x10);
  }
  lVar4 = FUN_0198c088();
  uVar3 = FUN_00e7a224();
  FUN_00e7a2d0(uVar3,lVar4,0xb875ca64);
  memset(auStack_1d0,0,0x188);
  FUN_0198b31c(param_1[1],*param_1,auStack_1d0,lVar4 + 0x10,*puVar1,&DAT_01e277f2);
  FUN_0198b324(param_1[1],*param_1,auStack_1d0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198bfc0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00e7a224();
  lVar3 = FUN_00e7a25c(uVar2,0xb875ca64);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_0198b338(param_1[1],*param_1,lVar1);
  return;
}




void thunk_FUN_0198befc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_1d0 [392];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e7a224();
  lVar4 = FUN_00e7a25c(uVar3,0x815f1c7b);
  puVar1 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x10);
  }
  lVar4 = FUN_0198c088();
  uVar3 = FUN_00e7a224();
  FUN_00e7a2d0(uVar3,lVar4,0xb875ca64);
  memset(auStack_1d0,0,0x188);
  FUN_0198b31c(param_1[1],*param_1,auStack_1d0,lVar4 + 0x10,*puVar1,&DAT_01e277f2);
  FUN_0198b324(param_1[1],*param_1,auStack_1d0);
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_0198bfc0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00e7a224();
  lVar3 = FUN_00e7a25c(uVar2,0xb875ca64);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_0198b338(param_1[1],*param_1,lVar1);
  return;
}

