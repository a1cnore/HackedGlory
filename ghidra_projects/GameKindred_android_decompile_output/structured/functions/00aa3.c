// functions/00aa3 — 30 functions
#include "libGameKindred.h"




void FUN_00aa313c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00aa3144();
  return;
}




void FUN_00aa3144(uint *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00aa31d0();
  if (((uVar1 & 1) != 0) && (*param_1 != 0)) {
    lVar2 = *(long *)(param_1 + 2);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
  }
  return;
}




void FUN_00aa31a4(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




byte FUN_00aa31d0(void)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = (uint *)FUN_00aa34fc();
  if (*puVar1 == 0) {
LAB_00aa3218:
    bVar2 = 0;
  }
  else {
    plVar3 = *(long **)(puVar1 + 2);
    bVar2 = 0;
    lVar4 = (ulong)*puVar1 << 3;
    do {
      if (*(int *)(*plVar3 + 8) == 0) goto LAB_00aa3218;
      lVar4 = lVar4 + -8;
      bVar2 = bVar2 | *(int *)(*plVar3 + 8) == 2;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
  }
  return bVar2;
}




void FUN_00aa3228(void)

{
  FUN_00aa34fc();
  return;
}




undefined8 FUN_00aa323c(void)

{
  return DAT_03133c98;
}




void FUN_00aa3248(void)

{
  undefined8 *puVar1;
  
  FUN_00aa331c();
  puVar1 = operator_new(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_00aa3144();
  DAT_03133c98 = puVar1;
  return;
}




void FUN_00aa3280(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03133c98;
  if (DAT_03133c98 != (void *)0x0) {
    if (*(void **)((long)DAT_03133c98 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_03133c98 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_03133c98 = (void *)0x0;
  FUN_00aa3488();
  return;
}




void FUN_00aa32bc(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00aa32e8(void)

{
  return;
}




void FUN_00aa32ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xaa32f0);
  (*pcVar1)();
}




void FUN_00aa32f0(long param_1,int param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 8) = param_2;
  if ((param_2 != 0) && (lVar1 = FUN_00aa323c(), lVar1 != 0)) {
    FUN_00aa323c();
    FUN_00aa3144();
    return;
  }
  return;
}




void FUN_00aa331c(void)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((uint)DAT_03133cb0 != 0) {
    uVar5 = 0;
    uVar4 = (uint)DAT_03133cb0;
    do {
      plVar2 = *(long **)(DAT_03133cb8 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = (uint)DAT_03133cb0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (DAT_03133cb8 != 0) {
    DAT_03133cb0._0_4_ = 0;
  }
  pvVar3 = operator_new(0x48);
  FUN_00b2c950();
  local_40 = pvVar3;
  FUN_00aa3400(&DAT_03133cb0,&local_40);
  pvVar3 = operator_new(0x48);
  FUN_00ab10ec();
  local_40 = pvVar3;
  FUN_00aa3400(&DAT_03133cb0,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa3400(uint *param_1,undefined8 *param_2)

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
    FUN_00aa3514(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa3488(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((uint)DAT_03133cb0 != 0) {
    uVar3 = 0;
    uVar2 = (uint)DAT_03133cb0;
    do {
      plVar1 = *(long **)(DAT_03133cb8 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = (uint)DAT_03133cb0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (DAT_03133cb8 != 0) {
    DAT_03133cb0._0_4_ = 0;
  }
  return;
}




undefined8 * FUN_00aa34fc(void)

{
  return &DAT_03133cb0;
}




undefined1 * FUN_00aa3508(void)

{
  return &DAT_01e277f2;
}




void FUN_00aa3514(uint *param_1,uint param_2)

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




void FUN_00aa3594(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  return;
}




void FUN_00aa35b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 ,byte param_6)

{
  FUN_008fce60(param_1 + 0x10);
  FUN_008fce60(param_1 + 0x28,param_3);
  FUN_00aa3614(param_1,param_4);
  *(byte *)(param_1 + 0x44) = param_5 & 1;
  *(byte *)(param_1 + 0x45) = param_6 & 1;
  return;
}




void FUN_00aa3614(uint *param_1,uint *param_2)

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
    FUN_00aa3680(param_1,*param_2);
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




void FUN_00aa3680(uint *param_1,uint param_2)

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




void FUN_00aa3700(undefined8 *param_1)

{
  FUN_00948cd8();
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027d1d18;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_008fa54c(param_1 + 7,"SocialPingEquipedPack");
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  FUN_00aa375c(param_1);
  return;
}




void FUN_00aa375c(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  void *__s;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  byte local_f0 [16];
  void *local_e0;
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  uint *local_90;
  byte local_88 [8];
  ulong local_80;
  void *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar7 = (undefined8 *)FUN_00cce724();
  plVar12 = (long *)*puVar7;
  if (*plVar12 != 0) {
    do {
      FUN_00ec52d8(local_88);
      iVar6 = strcmp(*(char **)*plVar12,"SOCIAL_PINGS_HUAWEI_PACK");
      if (iVar6 == 0) {
        uVar11 = (ulong)(local_88[0] >> 1);
        if ((local_88[0] & 1) != 0) {
          uVar11 = local_80;
        }
        if ((uVar11 == 7) &&
           (iVar6 = FUN_0090d610(local_88,0,0xffffffffffffffff,"neunion",7), iVar6 == 0))
        goto LAB_00aa37f8;
      }
      else {
LAB_00aa37f8:
        puVar8 = operator_new(0x48);
        FUN_00aa3594();
        local_98 = (void *)0x0;
        local_a0 = 0;
        local_90 = puVar8;
        FUN_008fa54c(local_b8,*(undefined8 *)*plVar12);
        FUN_008fa54c(local_d0,*(undefined8 *)(*plVar12 + 8));
        cVar3 = *(char *)((undefined8 *)*plVar12 + 2);
        iVar6 = strcmp(*(char **)*plVar12,"SOCIAL_PINGS_SPRING19_PACK");
        if (iVar6 == 0) {
          uVar11 = (ulong)(local_88[0] >> 1);
          if ((local_88[0] & 1) != 0) {
            uVar11 = local_80;
          }
          if ((uVar11 != 7) ||
             (iVar6 = FUN_0090d610(local_88,0,0xffffffffffffffff,"neunion",7), iVar6 != 0))
          goto LAB_00aa3888;
          bVar5 = false;
        }
        else {
LAB_00aa3888:
          bVar5 = *(char *)(*plVar12 + 0x11) != '\0';
        }
        lVar9 = FUN_00cce78c(local_b8);
        plVar13 = *(long **)(lVar9 + 0x18);
        lVar9 = *plVar13;
        while (lVar9 != 0) {
          __s = operator_new(0x50);
          memset(__s,0,0x48);
          local_d8 = __s;
          FUN_008fa54c(local_f0,*(undefined8 *)(*plVar13 + 8));
          FUN_008fce60(local_d8,local_f0);
          if ((local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
          FUN_008fa54c(local_f0,*(undefined8 *)(*plVar13 + 0x10));
          FUN_008fce60((long)local_d8 + 0x18,local_f0);
          if ((local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
          FUN_008fa54c(local_f0,*(undefined8 *)(*plVar13 + 0x18));
          FUN_008fce60((long)local_d8 + 0x30,local_f0);
          if ((local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
          iVar6 = *(int *)*plVar13;
          if (iVar6 < 0x5505928f) {
            if (iVar6 == -0x12975a65) {
              uVar10 = 9;
              goto LAB_00aa39e4;
            }
            if (iVar6 == 0x3f869f9d) {
              *(undefined4 *)((long)local_d8 + 0x48) = 7;
            }
          }
          else {
            if (iVar6 == 0x5505928f) {
              uVar10 = 8;
            }
            else if (iVar6 == 0x5a91e6d0) {
              uVar10 = 10;
            }
            else {
              if (iVar6 != 0x663437af) goto LAB_00aa39e8;
              uVar10 = 0xb;
            }
LAB_00aa39e4:
            *(undefined4 *)((long)local_d8 + 0x48) = uVar10;
          }
LAB_00aa39e8:
          *(undefined1 *)((long)local_d8 + 0x4c) = 0;
          FUN_00aa491c(&local_a0,&local_d8);
          plVar13 = plVar13 + 1;
          lVar9 = *plVar13;
        }
        FUN_00aa35b0(local_90,local_b8,local_d0,&local_a0,cVar3 != '\0',bVar5);
        FUN_00aa49a4(param_1 + 0x450,&local_90);
        if (cVar3 != '\0') {
          *(uint **)(param_1 + 0x468) = local_90;
          uVar2 = *local_90;
          if (uVar2 != 0) {
            lVar9 = *(long *)(local_90 + 2);
            uVar11 = 0;
            do {
              lVar1 = uVar11 * 8;
              uVar11 = uVar11 + 1;
              *(undefined1 *)(*(long *)(lVar9 + lVar1) + 0x4c) = 1;
            } while (uVar11 < uVar2);
          }
        }
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
          local_a0 = 0;
          local_98 = (void *)0x0;
        }
      }
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      plVar12 = plVar12 + 1;
    } while (*plVar12 != 0);
  }
  uVar11 = FUN_0093dbe8();
  if ((uVar11 & 1) != 0) {
    FUN_00aa4a2c(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa3b30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d1d18;
  FUN_00aa3ba8();
  if ((void *)param_1[0x8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b]);
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
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
  FUN_00948d58(param_1);
  return;
}




void FUN_00aa3ba8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x450);
  if (uVar1 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x458) + lVar3);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x458) + uVar4 * 8);
      }
      else {
        if ((*(byte *)(puVar2 + 5) & 1) != 0) {
          operator_delete((void *)puVar2[7]);
        }
        if ((*(byte *)(puVar2 + 2) & 1) != 0) {
          operator_delete((void *)puVar2[4]);
        }
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        operator_delete(puVar2);
        uVar1 = *(uint *)(param_1 + 0x450);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x458) + lVar3);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 8;
      *puVar2 = 0;
    } while (uVar4 < uVar1);
  }
  if (*(long *)(param_1 + 0x458) != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}




void FUN_00aa3c54(void *param_1)

{
  FUN_00aa3b30();
  operator_delete(param_1);
  return;
}




long FUN_00aa3c78(long param_1)

{
  if (*(long *)(param_1 + 0x460) != 0) {
    return *(long *)(param_1 + 0x460);
  }
  return *(long *)(param_1 + 0x468);
}




long FUN_00aa3c90(long param_1,byte *param_2)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  void *__s1;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x450);
  if (uVar1 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x458);
    uVar6 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = *(long *)(lVar7 + uVar6 * 8);
      bVar2 = *(byte *)(lVar5 + 0x10);
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(lVar5 + 0x18);
      }
      if (uVar4 == __n) {
        __s1 = *(void **)(lVar5 + 0x20);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x11);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return lVar5;
          }
          uVar4 = 0;
          while (*(byte *)(lVar5 + uVar4 + 0x11) == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return lVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return lVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return lVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0;
}




void FUN_00aa3d68(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  size_t sVar14;
  byte bVar15;
  ulong uVar16;
  size_t sVar17;
  size_t sVar18;
  size_t sVar19;
  long lVar20;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x450);
  if (uVar3 != 0) {
    uVar16 = 0;
    lVar13 = *(long *)(param_1 + 0x458);
    do {
      lVar20 = *(long *)(lVar13 + uVar16 * 8);
      if (lVar20 != 0) {
        bVar4 = *(byte *)(lVar20 + 0x10);
        if (*(uint *)(lVar20 + 0x40) < 2) {
          sVar18 = *(size_t *)(lVar20 + 0x18);
          bVar5 = *param_2;
          sVar14 = *(size_t *)(param_2 + 8);
          sVar19 = (size_t)(bVar4 >> 1);
          sVar2 = sVar19;
          if ((bVar4 & 1) != 0) {
            sVar2 = sVar18;
          }
          sVar17 = (size_t)(bVar5 >> 1);
          sVar1 = sVar17;
          if ((bVar5 & 1) != 0) {
            sVar1 = sVar14;
          }
          if (sVar2 != sVar1) {
LAB_00aa3f10:
            *(undefined4 *)(lVar20 + 0x40) = 2;
            goto LAB_00aa3f14;
          }
          pvVar11 = *(void **)(lVar20 + 0x20);
          bVar15 = bVar5 & 1;
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar20 + 0x11);
          }
          pbVar9 = param_2 + 1;
          if ((bVar5 & 1) != 0) {
            pbVar9 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pbVar10 = (byte *)(lVar20 + 0x11);
              lVar12 = -sVar19;
              do {
                if (*pbVar10 != *pbVar9) goto LAB_00aa3f10;
                pbVar10 = pbVar10 + 1;
                lVar12 = lVar12 + 1;
                pbVar9 = pbVar9 + 1;
              } while (lVar12 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar7 = memcmp(pvVar11,pbVar9,sVar2), iVar7 != 0))
          goto LAB_00aa3f10;
        }
        else {
          sVar18 = *(size_t *)(lVar20 + 0x18);
          sVar14 = *(size_t *)(param_2 + 8);
          sVar19 = (size_t)(bVar4 >> 1);
          bVar15 = *param_2 & 1;
          sVar17 = (size_t)(*param_2 >> 1);
        }
        sVar2 = sVar19;
        if ((bVar4 & 1) != 0) {
          sVar2 = sVar18;
        }
        if (bVar15 != 0) {
          sVar17 = sVar14;
        }
        if (sVar2 == sVar17) {
          pvVar11 = *(void **)(lVar20 + 0x20);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar20 + 0x11);
          }
          pbVar9 = param_2 + 1;
          if (bVar15 != 0) {
            pbVar9 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pbVar10 = (byte *)(lVar20 + 0x11);
              do {
                if (*pbVar10 != *pbVar9) goto LAB_00aa3f14;
                sVar19 = sVar19 - 1;
                pbVar10 = pbVar10 + 1;
                pbVar9 = pbVar9 + 1;
              } while (sVar19 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar7 = memcmp(pvVar11,pbVar9,sVar2), iVar7 != 0))
          goto LAB_00aa3f14;
          *(undefined4 *)(lVar20 + 0x40) = 1;
        }
      }
LAB_00aa3f14:
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar3);
  }
  uVar16 = FUN_0093dbe8();
  if ((uVar16 & 1) == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      lVar13 = *(long *)(param_1 + 0x20);
      do {
        if (*(code **)(lVar13 + 8) == (code *)0x0) {
          (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x10));
        }
        else {
          (**(code **)(lVar13 + 8))();
        }
        lVar13 = lVar13 + 0x20;
      } while (lVar13 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
    }
    uVar16 = (ulong)(*param_2 >> 1);
    if ((*param_2 & 1) != 0) {
      uVar16 = *(ulong *)(param_2 + 8);
    }
    if (uVar16 == 0x19) {
      iVar7 = FUN_0090d610(param_2,0,0xffffffffffffffff,"SOCIAL_PINGS_DEFAULT_PACK",0x19);
      uVar8 = FUN_009580b8();
      if (iVar7 == 0) {
        FUN_008fa54c(local_80,&DAT_01e277f2);
        FUN_009626bc(uVar8,local_80);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        goto LAB_00aa4014;
      }
    }
    else {
      uVar8 = FUN_009580b8();
    }
    FUN_009626bc(uVar8,param_2);
  }
  else {
    FUN_00aa404c(param_1,param_2);
    FUN_00aa4294(param_1,param_2);
  }
LAB_00aa4014:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

