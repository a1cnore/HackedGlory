// functions/00bc6 — 28 functions
#include "libGameKindred.h"




void FUN_00bc62c4(uint *param_1,undefined8 *param_2)

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
    FUN_00bc6460(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bc634c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb800;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc6390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb800;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc63d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb820;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc641c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb820;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc6460(uint *param_1,uint param_2)

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




void FUN_00bc64e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027eb840;
  FUN_009fa72c();
  uVar2 = FUN_009fb78c();
  param_1[4] = uVar2;
  uStack_40 = 0;
  pcStack_30 = FUN_00bc77a0;
  local_48 = param_1;
  local_38 = param_1;
  FUN_009e4694(uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc6560(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = (uint *)param_1[4];
  *param_1 = &PTR_FUN_027eb840;
  if (puVar2 != (uint *)0x0) {
    lVar4 = (ulong)*puVar2 << 5;
    puVar1 = *(undefined8 **)(puVar2 + 2);
    do {
      puVar3 = puVar1;
      if (lVar4 == 0) goto LAB_00bc65b0;
      lVar4 = lVar4 + -0x20;
      puVar1 = puVar3 + 4;
    } while ((undefined8 *)*puVar3 != param_1);
    FUN_00910480(puVar2,puVar3);
LAB_00bc65b0:
    param_1[4] = 0;
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_00bc65d8(void *param_1)

{
  FUN_00bc6560();
  operator_delete(param_1);
  return;
}




void FUN_00bc65fc(void)

{
  return;
}




void FUN_00bc6600(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = *(uint **)(param_1 + 0x20);
  if (puVar2 != (uint *)0x0) {
    lVar4 = (ulong)*puVar2 << 5;
    plVar1 = *(long **)(puVar2 + 2);
    do {
      plVar3 = plVar1;
      if (lVar4 == 0) goto LAB_00bc6644;
      lVar4 = lVar4 + -0x20;
      plVar1 = plVar3 + 4;
    } while (*plVar3 != param_1);
    FUN_00910480(puVar2,plVar3);
LAB_00bc6644:
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_008fce60(param_1 + 8,param_2);
  return;
}




void FUN_00bc665c(long *param_1,undefined8 param_2,long param_3)

{
  FUN_00965324(param_1 + 0x11,param_3 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00bc668c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc6690(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *__s2;
  byte *__s1;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  void *local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00a00c14("timed_event");
  FUN_00a01a90(&local_68);
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar11 = 0;
    uVar7 = local_68 & 0xffffffff;
    uVar10 = (uint)local_68;
    do {
      if ((int)uVar7 != 0) {
        uVar12 = 0;
        do {
          lVar9 = *(long *)((long)local_60 + uVar12 * 8);
          pbVar8 = (byte *)(*(long *)(param_1 + 0x90) + uVar11 * 0x18);
          bVar2 = *(byte *)(lVar9 + 0x48);
          bVar3 = *pbVar8;
          __n = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            __n = *(size_t *)(pbVar8 + 8);
          }
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = *(size_t *)(lVar9 + 0x50);
          }
          if (__n == sVar1) {
            __s1 = *(byte **)(*(long *)(param_1 + 0x90) + uVar11 * 0x18 + 0x10);
            __s2 = *(byte **)(lVar9 + 0x58);
            if ((bVar3 & 1) == 0) {
              __s1 = pbVar8 + 1;
            }
            if ((bVar2 & 1) == 0) {
              __s2 = (byte *)(lVar9 + 0x49);
            }
            if ((bVar3 & 1) == 0) {
              if (__n != 0) {
                lVar9 = -(ulong)(bVar3 >> 1);
                do {
                  pbVar8 = pbVar8 + 1;
                  if (*pbVar8 != *__s2) goto LAB_00bc67f4;
                  lVar9 = lVar9 + 1;
                  __s2 = __s2 + 1;
                } while (lVar9 != 0);
              }
            }
            else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00bc67f4;
            pvVar6 = operator_new(0x30);
            FUN_00bc8c7c();
            local_70 = pvVar6;
            FUN_00bc8e24(pvVar6,*(undefined8 *)((long)local_60 + uVar12 * 8));
            FUN_00bc6854(param_1 + 0x20,&local_70);
            FUN_00c1d9d0(DAT_03218ef8,_DAT_03218efc,*(undefined8 *)(param_1 + 8),
                         *(undefined8 *)
                          (*(long *)(*(long *)(param_1 + 0x28) +
                                    (ulong)(*(int *)(param_1 + 0x20) - 1) * 8) + 8));
            uVar10 = (uint)local_68;
          }
LAB_00bc67f4:
          uVar12 = uVar12 + 1;
          uVar7 = (ulong)uVar10;
        } while (uVar12 < uVar10);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x88));
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bc6854(uint *param_1,undefined8 *param_2)

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
    FUN_00bc77ac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bc68dc(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027eb948;
  pvVar2 = operator_new(0x1b0);
  FUN_00c1ce40();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x1a0) = param_1;
  FUN_00bc64e0(param_1 + 2);
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_027eb870;
  param_1[2] = &PTR_FUN_027eb898;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00bc69d0,0);
  lVar3 = FUN_009fa72c();
  if (lVar3 != 0) {
    FUN_009fa72c();
    lVar3 = FUN_009fb78c();
    if (lVar3 != 0) {
      FUN_009fa72c();
      uVar4 = FUN_009fb78c();
      uStack_50 = 0;
      pcStack_40 = FUN_00bc78b4;
      local_58 = param_1;
      local_48 = param_1;
      FUN_009e4694(uVar4,&local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc69d0(long param_1)

{
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bc6a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x170))();
    return;
  }
  return;
}




void FUN_00bc6a14(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_027eb870;
  param_1[2] = &PTR_FUN_027eb898;
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
    param_1[7] = 0;
  }
  FUN_00e6ec98(&DAT_02c7eef8,param_1);
  lVar2 = FUN_009fa72c();
  if (lVar2 != 0) {
    FUN_009fa72c();
    lVar2 = FUN_009fb78c();
    if (lVar2 != 0) {
      FUN_009fa72c();
      puVar3 = (uint *)FUN_009fb78c();
      lVar2 = (ulong)*puVar3 << 5;
      puVar1 = *(undefined8 **)(puVar3 + 2);
      do {
        puVar4 = puVar1;
        if (lVar2 == 0) goto LAB_00bc6aac;
        lVar2 = lVar2 + -0x20;
        puVar1 = puVar4 + 4;
      } while ((undefined8 *)*puVar4 != param_1);
      FUN_00910480(puVar3,puVar4);
    }
  }
LAB_00bc6aac:
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00bc6560(param_1 + 2);
  *param_1 = &PTR_FUN_027eb948;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc6af8(long param_1)

{
  FUN_00bc6a14(param_1 + -0x10);
  return;
}




void FUN_00bc6b00(void *param_1)

{
  FUN_00bc6a14();
  operator_delete(param_1);
  return;
}




void FUN_00bc6b24(long param_1)

{
  FUN_00bc6a14((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bc6b4c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  size_t __n;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  void *__s1;
  long lVar6;
  long lVar7;
  byte local_80 [16];
  void *local_70;
  ulong local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = 0;
  local_60 = 0;
  FUN_0096bfcc(&local_68);
  if ((int)local_68 != 0) {
    pvVar4 = (void *)(param_3 + 0x21);
    __n = (ulong)(*(byte *)(param_3 + 0x20) >> 1);
    if ((*(byte *)(param_3 + 0x20) & 1) != 0) {
      pvVar4 = *(void **)(param_3 + 0x30);
      __n = *(size_t *)(param_3 + 0x28);
    }
    lVar7 = local_60 + (local_68 & 0xffffffff) * 0x78;
    lVar6 = local_60;
    do {
      bVar1 = *(byte *)(lVar6 + 0x18);
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(lVar6 + 0x20);
      }
      if (uVar5 == __n) {
        __s1 = *(void **)(lVar6 + 0x28);
        if ((bVar1 & 1) == 0) {
          __s1 = (void *)(lVar6 + 0x19);
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
LAB_00bc6c38:
            pvVar4 = operator_new(0xc18);
            FUN_009fb794(pvVar4,param_3);
            *(void **)(param_1 + 0x38) = pvVar4;
            FUN_008fa54c(local_80,"LIVE_EVENTS_POPUP");
            FUN_00b359a8(pvVar4,lVar6,(byte *)(lVar6 + 0x18),local_80);
            if ((local_80[0] & 1) != 0) {
              operator_delete(local_70);
            }
            (**(code **)(**(long **)(param_1 + 0x38) + 0x170))();
            FUN_00c1ce7c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x38));
            FUN_008fce60(param_1 + 0x40,lVar6 + 0x48);
            break;
          }
          uVar5 = 0;
          while (*(char *)(lVar6 + uVar5 + 0x19) == *(char *)((long)pvVar4 + uVar5)) {
            uVar5 = uVar5 + 1;
            if (bVar1 >> 1 == uVar5) goto LAB_00bc6c38;
          }
        }
        else if ((__n == 0) || (iVar3 = memcmp(__s1,pvVar4,__n), iVar3 == 0)) goto LAB_00bc6c38;
      }
      lVar6 = lVar6 + 0x78;
    } while (lVar6 != lVar7);
  }
  FUN_00969c70(&local_68,1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc6ce8(long param_1)

{
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bc6cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x170))();
    return;
  }
  return;
}




void FUN_00bc6d00(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027eb968;
  pvVar1 = operator_new(0xf48);
  FUN_00c1cfec();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027eb8c8;
  param_1[1] = pvVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00bc6d5c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  *param_1 = &PTR_FUN_027eb8c8;
  puVar3 = (uint *)(param_1 + 2);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[3] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  puVar5 = (uint *)(param_1 + 4);
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[5] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  puVar6 = (uint *)(param_1 + 6);
  uVar2 = *puVar6;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[7] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    puVar6[0] = 0;
    puVar6[1] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_027eb968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc6e98(void *param_1)

{
  FUN_00bc6d5c();
  operator_delete(param_1);
  return;
}




void FUN_00bc6ebc(undefined8 param_1)

{
  FUN_00bc6ee0();
  FUN_00bc6fbc(param_1);
  return;
}




void FUN_00bc6ee0(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x28) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x10);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x30);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}




void FUN_00bc6fbc(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint local_78 [2];
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_009fa72c();
  FUN_009fb34c(local_78,uVar4,0);
  uVar5 = (ulong)local_78[0];
  if (local_78[0] != 0) {
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0;
    do {
      lVar7 = local_70 + uVar10 * 0x98;
      if (*(uint *)(lVar7 + 0x48) != 0) {
        lVar6 = local_70 + uVar10 * 0x98;
        lVar11 = 0;
        uVar5 = 0;
        do {
          iVar1 = *(int *)(*(long *)(lVar6 + 0x50) + lVar11);
          if (iVar1 == 3) {
            uVar3 = FUN_00bc74ac(param_1,lVar7);
LAB_00bc7090:
            uVar8 = uVar8 | uVar3;
          }
          else {
            if (iVar1 == 2) {
              uVar3 = FUN_00bc729c(param_1,lVar7);
              goto LAB_00bc7090;
            }
            if (iVar1 == 1) {
              uVar3 = FUN_00bc7114(param_1);
              uVar9 = uVar9 | uVar3;
              goto LAB_00bc7090;
            }
          }
          uVar5 = uVar5 + 1;
          lVar11 = lVar11 + 0x58;
        } while (uVar5 < *(uint *)(lVar7 + 0x48));
        uVar5 = (ulong)local_78[0];
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
    if ((uVar9 & 1) != 0) {
      FUN_009f73a8();
    }
    if ((uVar8 & 1) != 0) {
      FUN_00c1d164(*(undefined8 *)(param_1 + 8),0);
    }
  }
  FUN_00956964(local_78,1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

