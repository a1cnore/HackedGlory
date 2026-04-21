// functions/00bc7 — 38 functions
#include "libGameKindred.h"




void FUN_00bc7114(long param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  if ((*param_3 == 1) && (uVar3 = 0, param_3[1] == 0)) {
    uVar1 = (ulong)(*(byte *)(param_3 + 2) >> 1);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 4);
    }
    if ((uVar1 == 0) || (param_3[0xe] == 0)) {
      uVar3 = 0;
    }
    else {
      lVar4 = FUN_009f739c(0);
      uVar3 = 0;
      if (lVar4 != 0) {
        uVar3 = FUN_009f739c();
        lVar4 = FUN_009f7adc(uVar3,*(undefined8 *)(param_3 + 0x10));
        uVar3 = 0;
        if (lVar4 != 0) {
          lVar6 = *(long *)(param_3 + 6);
          if ((*(byte *)(param_3 + 2) & 1) == 0) {
            lVar6 = (long)param_3 + 9;
          }
          uVar3 = FUN_00e6ce7c(lVar6,0);
          thunk_FUN_00e7051c(&local_58,uVar3);
          lVar6 = (long)param_3 + 0x21;
          if ((*(byte *)(param_3 + 8) & 1) != 0) {
            lVar6 = *(long *)(param_3 + 0xc);
          }
          uVar3 = FUN_00e6ce7c(lVar6,0);
          thunk_FUN_00e7051c(&local_68,uVar3);
          pvVar5 = operator_new(0x40);
          FUN_00bc5928();
          local_70 = pvVar5;
          FUN_00bc5aa8(pvVar5,*(undefined8 *)(param_3 + 0x10),&local_68,lVar4);
          FUN_00bc62c4(param_1 + 0x10,&local_70);
          lVar4 = *(long *)(param_3 + 6);
          if ((*(byte *)(param_3 + 2) & 1) == 0) {
            lVar4 = (long)param_3 + 9;
          }
          FUN_00c1d0e8(*(undefined8 *)(param_1 + 8),&local_58,0,*(undefined8 *)((long)local_70 + 8),
                       lVar4);
          if (local_60 != (void *)0x0) {
            operator_delete__(local_60);
            local_68 = 0;
            local_60 = (void *)0x0;
          }
          if (local_50 != (void *)0x0) {
            operator_delete__(local_50);
            local_58 = 0;
            local_50 = (void *)0x0;
          }
          uVar3 = 1;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00bc729c(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *__s;
  long *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  if (*param_3 == 2) {
    if (param_3[0xe] == 0) {
      uVar3 = 0;
    }
    else {
      lVar1 = (long)param_3 + 9;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        lVar1 = *(long *)(param_3 + 6);
      }
      uVar3 = FUN_00e6ce7c(lVar1,0);
      thunk_FUN_00e7051c(&local_58,uVar3);
      lVar1 = (long)param_3 + 0x21;
      if ((*(byte *)(param_3 + 8) & 1) != 0) {
        lVar1 = *(long *)(param_3 + 0xc);
      }
      uVar3 = FUN_00e6ce7c(lVar1,0);
      thunk_FUN_00e7051c(&local_68,uVar3);
      __s = operator_new(0x98);
      memset(__s,0,0x98);
      FUN_00bc7f64(__s);
      FUN_00bc64e0(__s + 0xc);
      *__s = (long)&PTR_FUN_027eb8e8;
      __s[0xc] = (long)&PTR_FUN_027eb918;
      __s[0x11] = 0;
      __s[0x12] = 0;
      local_70 = __s;
      FUN_00965324(__s + 0x11,param_3 + 0xe);
      (**(code **)(*__s + 0x18))(__s);
      FUN_00bc7424(param_1 + 0x20,&local_70);
      lVar1 = (long)param_3 + 9;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        lVar1 = *(long *)(param_3 + 6);
      }
      FUN_00c1d0e8(*(undefined8 *)(param_1 + 8),&local_58,0,local_70[1],lVar1);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00bc7424(uint *param_1,undefined8 *param_2)

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
    FUN_00bc7954(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bc74ac(long param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_60;
  void *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  if (*param_3 == 3) {
    if (param_3[0xe] != 0) {
      uVar1 = (ulong)(*(byte *)(param_3 + 8) >> 1);
      if ((*(byte *)(param_3 + 8) & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 10);
      }
      if (uVar1 != 0) {
        plVar4 = operator_new(0x58);
        FUN_00bc68dc();
        local_50 = plVar4;
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2,param_3);
        FUN_00bc75d0(param_1 + 0x30,&local_50);
        uVar3 = *(undefined8 *)(param_1 + 8);
        FUN_00e70570(&local_60,local_50 + 8);
        if ((*(byte *)(local_50 + 8) & 1) == 0) {
          lVar5 = (long)local_50 + 0x41;
        }
        else {
          lVar5 = local_50[10];
        }
        FUN_00c1d0e8(uVar3,&local_60,0,local_50[1],lVar5);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
          local_60 = 0;
          local_58 = (void *)0x0;
        }
        uVar3 = 1;
        goto LAB_00bc75a4;
      }
    }
    uVar3 = 0;
  }
LAB_00bc75a4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00bc75d0(uint *param_1,undefined8 *param_2)

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
    FUN_00bc79d4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00bc7658(void)

{
  return 0;
}




void FUN_00bc7660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb8e8;
  param_1[0xc] = &PTR_FUN_027eb918;
  FUN_00951534(param_1 + 0x11,1);
  FUN_00bc6560(param_1 + 0xc);
  FUN_00bc8028(param_1);
  return;
}




void FUN_00bc76ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb8e8;
  param_1[0xc] = &PTR_FUN_027eb918;
  FUN_00951534(param_1 + 0x11,1);
  FUN_00bc6560(param_1 + 0xc);
  FUN_00bc8028(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00bc7700(undefined8 *param_1)

{
  param_1[-0xc] = &PTR_FUN_027eb8e8;
  *param_1 = &PTR_FUN_027eb918;
  FUN_00951534(param_1 + 5,1);
  FUN_00bc6560(param_1);
  FUN_00bc8028(param_1 + -0xc);
  return;
}




void FUN_00bc774c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0xc;
  *puVar1 = &PTR_FUN_027eb8e8;
  *param_1 = &PTR_FUN_027eb918;
  FUN_00951534(param_1 + 5,1);
  FUN_00bc6560(param_1);
  FUN_00bc8028(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00bc77a0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bc77a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




void FUN_00bc77ac(uint *param_1,uint param_2)

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




void FUN_00bc782c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb948;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc7870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb948;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc78b4(long param_1)

{
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bc78c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x170))();
    return;
  }
  return;
}




void FUN_00bc78cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc7910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc7954(uint *param_1,uint param_2)

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




void FUN_00bc79d4(uint *param_1,uint param_2)

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




void FUN_00bc7a54(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb9b8;
  pvVar1 = operator_new(0x2cd0);
  FUN_00c1df00();
  *(undefined8 **)((long)pvVar1 + 0x9b8) = param_1;
  *param_1 = &PTR_FUN_027eb988;
  param_1[1] = pvVar1;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}




void FUN_00bc7aa8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb9b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc7aec(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb9b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc7b30(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    FUN_00bc7b68(param_1);
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}




undefined8 FUN_00bc7b68(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = FUN_009580c4();
  if (iVar3 == 7) {
    iVar3 = 0;
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_009580b8(uVar1,0);
      iVar3 = (int)(*(float *)(lVar2 + 0x5678) * 7.0);
    }
  }
  else {
    iVar3 = 0;
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_009580b8(uVar1,0);
      iVar3 = *(int *)(lVar2 + 0x560c);
    }
  }
  FUN_00c1e944(*(undefined8 *)(param_1 + 8),iVar3,*(undefined4 *)(param_1 + 0x10));
  return 1;
}




void FUN_00bc7bdc(void)

{
  return;
}




void FUN_00bc7be0(void)

{
  return;
}




void FUN_00bc7be4(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb9b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc7c28(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbc7c2c);
  (*pcVar1)();
}




void FUN_00bc7c2c(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027ebda8;
  pvVar2 = operator_new(0x1348);
  FUN_00c1d194();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027eb9e8;
  param_1[2] = &PTR_FUN_027eba10;
  *(undefined4 *)(param_1 + 5) = param_2;
  uVar3 = FUN_009580b8();
  uVar4 = FUN_00a01f30(param_2);
  FUN_008fa54c(local_50,uVar4);
  FUN_00962a6c(uVar3,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc7d00(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027ebda8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc7d4c(long param_1)

{
  FUN_00948d58();
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_027ebda8;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00bc7d94(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027ebda8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc7de0(long param_1)

{
  FUN_00bc7d94(param_1 + -0x10);
  return;
}




void FUN_00bc7de8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  char *__s;
  size_t sVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar3 = *(uint *)(param_2 + 0x28);
  if (uVar3 == 0) {
    iVar7 = 0;
  }
  else {
    uVar9 = 0;
    iVar7 = 0;
    lVar10 = 0x10c;
    do {
      lVar11 = *(long *)(param_2 + 0x30);
      lVar1 = lVar11 + lVar10;
      __s = (char *)FUN_00a01f30(*(undefined4 *)(param_1 + 0x28));
      sVar6 = strlen(__s);
      pbVar8 = (byte *)(lVar1 + -0xf4);
      bVar4 = *pbVar8;
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *(ulong *)(lVar1 + -0xec);
      }
      if ((sVar6 != uVar2) ||
         (iVar5 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,__s,sVar6), iVar5 != 0)) {
        return;
      }
      pbVar8 = (byte *)(lVar11 + lVar10);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x110;
      iVar7 = iVar7 + (uint)*pbVar8;
    } while (uVar9 < uVar3);
  }
  FUN_00c1d558(*(undefined8 *)(param_1 + 8),iVar7,uVar3);
  return;
}




void FUN_00bc7ed4(long param_1)

{
  FUN_00bc7de8(param_1 + -0x10);
  return;
}




void FUN_00bc7edc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ebda8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc7f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ebda8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc7f64(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027ebde8;
  pvVar2 = operator_new(0xdd8);
  FUN_00c1d758();
  *(undefined8 **)((long)pvVar2 + 0x1a0) = param_1;
  *param_1 = &PTR_FUN_027ebdc8;
  param_1[1] = pvVar2;
  memset(param_1 + 2,0,0x50);
  uVar3 = FUN_00a012b4();
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bc8320;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(uVar3,&local_58);
  lVar4 = FUN_00a022d4();
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bc8320;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar4 + 0x20,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

