// functions/00bf3 — 54 functions
#include "libGameKindred.h"




void FUN_00bf3084(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_00cdbb18();
  uVar1 = FUN_00cdc8b0();
  FUN_00cdbb18();
  uVar2 = FUN_00cdc96c();
  FUN_00c68db8(uVar3,uVar1,uVar2);
  return;
}




void FUN_00bf30c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f09b8;
  param_1[2] = &PTR_FUN_027f0a00;
  param_1[5] = &PTR_FUN_027f0d98;
  FUN_00bf0c74(param_1[6]);
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
    param_1[6] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f0dd0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf3150(long param_1)

{
  FUN_00bf30c0(param_1 + -0x10);
  return;
}




void FUN_00bf3158(long param_1)

{
  FUN_00bf30c0(param_1 + -0x28);
  return;
}




void FUN_00bf3160(void *param_1)

{
  FUN_00bf30c0();
  operator_delete(param_1);
  return;
}




void FUN_00bf3184(long param_1)

{
  FUN_00bf30c0((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf31ac(long param_1)

{
  FUN_00bf30c0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void thunk_FUN_00bf3084(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_00cdbb18();
  uVar1 = FUN_00cdc8b0();
  FUN_00cdbb18();
  uVar2 = FUN_00cdc96c();
  FUN_00c68db8(uVar3,uVar1,uVar2);
  return;
}




void FUN_00bf31d8(long param_1)

{
  FUN_00bf3084(param_1 + -0x10);
  return;
}




undefined8 FUN_00bf31e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf31e8(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




undefined8 FUN_00bf31f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




char * FUN_00bf31f8(void)

{
  return "TALENTS.*";
}




void FUN_00bf3204(void)

{
  FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
  return;
}




char * FUN_00bf3214(void)

{
  return "TALENTS.*";
}




void FUN_00bf3220(void)

{
  FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
  return;
}




void FUN_00bf3230(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f0dd0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf3274(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf3278);
  (*pcVar1)();
}




void FUN_00bf3278(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027f0e18;
  pvVar1 = operator_new(0x598);
  FUN_00c69d0c();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027f0df8;
  param_1[1] = pvVar1;
  param_1[2] = 0;
  FUN_00bf32dc(param_1);
  return;
}




void FUN_00bf32dc(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte local_88 [8];
  ulong local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_00a87e60();
  FUN_0099cf94(lVar4 + 0x48,0);
  lVar4 = FUN_00a87e60();
  FUN_00bf38b8((uint *)(param_1 + 0x10),lVar4 + 0x28);
  lVar4 = FUN_00a87e60();
  FUN_00bf3924(param_1 + 0x20,lVar4 + 0x38);
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = 0;
    do {
      if (0 < *(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar5 * 8) + 0xb0)) {
        FUN_00bf34f8(param_1);
      }
      FUN_008fa54c(local_70,"Inventory_Chest_");
      FUN_008fcdb8(local_88,*(long *)(*(long *)(param_1 + 0x18) + uVar5 * 8) + 0x20);
      uVar1 = (ulong)(local_88[0] >> 1);
      pvVar2 = (void *)((ulong)local_88 | 1);
      if ((local_88[0] & 1) != 0) {
        uVar1 = local_80;
        pvVar2 = local_78;
      }
      FUN_0090de84(local_70,pvVar2,uVar1);
      pvVar2 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar2 = local_60;
      }
      FUN_008ffcf8(pvVar2,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x18) + uVar5 * 8) + 0xb0),1
                  );
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf3440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0df8;
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_027f0e18;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf34d4(void *param_1)

{
  FUN_00bf3440();
  operator_delete(param_1);
  return;
}




void FUN_00bf34f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint local_58 [2];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00a86fa0(local_58);
  if (local_58[0] == 0) {
LAB_00bf356c:
    uVar3 = 1;
  }
  else {
    uVar4 = 0;
    lVar5 = 0x18;
    do {
      uVar2 = FUN_00bf35b8(param_1,local_50 + lVar5);
      if ((uVar2 & 1) != 0) goto LAB_00bf356c;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while (uVar4 < local_58[0]);
    uVar3 = 0;
  }
  FUN_00c6a2cc(*(undefined8 *)(param_1 + 8),param_2,uVar3,param_1 + 0x30);
  FUN_00a87e6c(local_58,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf35b8(long param_1,uint *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  size_t sVar12;
  size_t sVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  size_t sVar19;
  byte *pbVar20;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*param_2 == 0) {
    uVar7 = 1;
LAB_00bf37d4:
    if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar7);
    }
    return;
  }
  uVar15 = 0;
LAB_00bf3600:
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar18 = *(long *)(param_1 + 0x28);
    uVar16 = 0;
    lVar17 = *(long *)(param_2 + 2);
    sVar19 = *(size_t *)(lVar17 + uVar15 * 0x20 + 8);
    do {
      pbVar20 = *(byte **)(lVar18 + uVar16 * 8);
      pbVar8 = (byte *)(lVar17 + uVar15 * 0x20);
      bVar3 = *pbVar8;
      bVar4 = *pbVar20;
      sVar13 = *(size_t *)(pbVar20 + 8);
      sVar2 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar2 = sVar19;
      }
      sVar12 = (size_t)(bVar4 >> 1);
      sVar1 = sVar12;
      if ((bVar4 & 1) != 0) {
        sVar1 = sVar13;
      }
      bVar14 = bVar4 & 1;
      if (sVar2 == sVar1) {
        pbVar10 = *(byte **)(pbVar8 + 0x10);
        pbVar11 = *(byte **)(pbVar20 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar10 = pbVar8 + 1;
        }
        if ((bVar4 & 1) == 0) {
          pbVar11 = pbVar20 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (sVar2 != 0) {
            lVar9 = -(ulong)(bVar3 >> 1);
            do {
              pbVar8 = pbVar8 + 1;
              if (*pbVar8 != *pbVar11) goto LAB_00bf3700;
              lVar9 = lVar9 + 1;
              pbVar11 = pbVar11 + 1;
            } while (lVar9 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar6 = memcmp(pbVar10,pbVar11,sVar2), iVar6 != 0))
        goto LAB_00bf3700;
        FUN_008fcdb8(local_80,pbVar20 + 0x30);
        FUN_008fce60(param_1 + 0x30,local_80);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        lVar18 = *(long *)(param_1 + 0x28);
        pbVar20 = *(byte **)(lVar18 + uVar16 * 8);
        lVar17 = *(long *)(param_2 + 2);
        sVar19 = *(size_t *)(lVar17 + uVar15 * 0x20 + 8);
        sVar13 = *(size_t *)(pbVar20 + 8);
        bVar14 = *pbVar20 & 1;
        sVar12 = (size_t)(*pbVar20 >> 1);
      }
LAB_00bf3700:
      pbVar8 = (byte *)(lVar17 + uVar15 * 0x20);
      bVar3 = *pbVar8;
      sVar2 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar2 = sVar19;
      }
      if (bVar14 != 0) {
        sVar12 = sVar13;
      }
      if (sVar2 == sVar12) {
        pbVar10 = *(byte **)(pbVar8 + 0x10);
        pbVar11 = *(byte **)(pbVar20 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar10 = pbVar8 + 1;
        }
        if (bVar14 == 0) {
          pbVar11 = pbVar20 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (sVar2 != 0) {
            lVar9 = -(ulong)(bVar3 >> 1);
            do {
              pbVar8 = pbVar8 + 1;
              if (*pbVar8 != *pbVar11) goto LAB_00bf3790;
              lVar9 = lVar9 + 1;
              pbVar11 = pbVar11 + 1;
            } while (lVar9 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar6 = memcmp(pbVar10,pbVar11,sVar2), iVar6 != 0))
        goto LAB_00bf3790;
        if (*(int *)(lVar17 + uVar15 * 0x20 + 0x18) <= *(int *)(pbVar20 + 0x48)) goto LAB_00bf37a4;
      }
LAB_00bf3790:
      uVar16 = uVar16 + 1;
      if (*(uint *)(param_1 + 0x20) <= uVar16) break;
    } while( true );
  }
  uVar7 = 0;
  goto LAB_00bf37d4;
LAB_00bf37a4:
  uVar15 = uVar15 + 1;
  uVar7 = 1;
  if (*param_2 <= uVar15) goto LAB_00bf37d4;
  goto LAB_00bf3600;
}




void FUN_00bf3808(long param_1)

{
  FUN_00c6a248(*(undefined8 *)(param_1 + 8));
  FUN_00bf32dc(param_1);
  return;
}




void FUN_00bf3830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0e18;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf3874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0e18;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf38b8(uint *param_1,uint *param_2)

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
    FUN_00a8868c(param_1,*param_2);
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




void FUN_00bf3924(uint *param_1,uint *param_2)

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
    FUN_00a8870c(param_1,*param_2);
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




void FUN_00bf3990(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027f0e58;
  pvVar1 = operator_new(0x598);
  FUN_00c6aa1c();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027f0e38;
  param_1[1] = pvVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00bf39e8(param_1);
  return;
}




void FUN_00bf39e8(long param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte local_88 [8];
  ulong local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00a87e60();
  FUN_00bf3924((uint *)(param_1 + 0x10),lVar3 + 0x38);
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar5 * 8) + 0x48) != 0) {
        FUN_00c6af9c(*(undefined8 *)(param_1 + 8));
        FUN_008fa54c(local_70,"Inventory_Key_");
        FUN_008fcdb8(local_88,*(undefined8 *)(*(long *)(param_1 + 0x18) + uVar5 * 8));
        uVar4 = (ulong)(local_88[0] >> 1);
        pvVar1 = (void *)((ulong)local_88 | 1);
        if ((local_88[0] & 1) != 0) {
          uVar4 = local_80;
          pvVar1 = local_78;
        }
        FUN_0090de84(local_70,pvVar1,uVar4);
        pvVar1 = (void *)((ulong)local_70 | 1);
        if ((local_70[0] & 1) != 0) {
          pvVar1 = local_60;
        }
        FUN_008ffcf8(pvVar1,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x18) + uVar5 * 8) + 0x48)
                     ,1);
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        uVar4 = (ulong)*(uint *)(param_1 + 0x10);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf3b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0e38;
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_027f0e58;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf3b90(void *param_1)

{
  FUN_00bf3b24();
  operator_delete(param_1);
  return;
}




void FUN_00bf3bb4(long param_1)

{
  FUN_00c6af9c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf3bbc(long param_1)

{
  FUN_00c6b0b8(*(undefined8 *)(param_1 + 8));
  FUN_00bf39e8(param_1);
  return;
}




void FUN_00bf3be4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0e58;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf3c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0e58;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf3c6c(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f1280;
  pvVar2 = operator_new(0xc80);
  FUN_00c6b1c8();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x148) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027f0e78;
  param_1[2] = &PTR_FUN_027f0eb0;
  param_1[5] = &PTR_FUN_027f1248;
  pvVar2 = operator_new(0x48);
  FUN_00bf3278();
  param_1[6] = pvVar2;
  pvVar2 = operator_new(0x20);
  FUN_00bf3990();
  param_1[7] = pvVar2;
  FUN_00c6b378(param_1[1],*(undefined8 *)(param_1[6] + 8));
  FUN_00c6b38c(param_1[1],*(undefined8 *)(param_1[7] + 8));
  lVar3 = FUN_00a87e60();
  uStack_50 = 0;
  pcStack_40 = FUN_00bf3fcc;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar3 + 0x18,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf3d74(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f0e78;
  param_1[2] = &PTR_FUN_027f0eb0;
  param_1[5] = &PTR_FUN_027f1248;
  lVar2 = FUN_00a87e60();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x20);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00bf3dd4;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x18),puVar3);
LAB_00bf3dd4:
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
    param_1[6] = 0;
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
    param_1[7] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f1280;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf3e40(long param_1)

{
  FUN_00bf3d74(param_1 + -0x10);
  return;
}




void FUN_00bf3e48(long param_1)

{
  FUN_00bf3d74(param_1 + -0x28);
  return;
}




void FUN_00bf3e50(void *param_1)

{
  FUN_00bf3d74();
  operator_delete(param_1);
  return;
}




void FUN_00bf3e74(long param_1)

{
  FUN_00bf3d74((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf3e9c(long param_1)

{
  FUN_00bf3d74((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




undefined8 FUN_00bf3ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf3ecc(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf3ed4(long param_1)

{
  FUN_00bf3bbc(*(undefined8 *)(param_1 + 0x38));
  FUN_00bf3808(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00bf3f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}




char * FUN_00bf3f0c(void)

{
  return "INVENTORYCHEST";
}




void FUN_00bf3f18(void)

{
  FUN_00e6ce7c("INVENTORY_CHEST_KEY_TAB_TITLE",0);
  return;
}




char * FUN_00bf3f28(void)

{
  return "INVENTORYCHEST";
}




void FUN_00bf3f34(void)

{
  FUN_00e6ce7c("INVENTORY_CHEST_KEY_TAB_TITLE",0);
  return;
}




void FUN_00bf3f44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f1280;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf3f88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f1280;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf3fcc(long param_1)

{
  FUN_00bf3bbc(*(undefined8 *)(param_1 + 0x38));
  FUN_00bf3808(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00bf4000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}

