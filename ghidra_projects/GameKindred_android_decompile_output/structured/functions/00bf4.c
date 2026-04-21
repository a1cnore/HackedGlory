// functions/00bf4 — 33 functions
#include "libGameKindred.h"




void FUN_00bf4004(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027f16a8;
  pvVar1 = operator_new(3000);
  FUN_00c6b4b0();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027f12a0;
  param_1[2] = &PTR_FUN_027f12d8;
  param_1[5] = &PTR_FUN_027f1670;
  return;
}




void FUN_00bf4078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f12a0;
  param_1[2] = &PTR_FUN_027f12d8;
  param_1[5] = &PTR_FUN_027f1670;
  FUN_00951478(param_1 + 8,1);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f16a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf4104(long param_1)

{
  FUN_00bf4078(param_1 + -0x10);
  return;
}




void FUN_00bf410c(long param_1)

{
  FUN_00bf4078(param_1 + -0x28);
  return;
}




void FUN_00bf4114(void *param_1)

{
  FUN_00bf4078();
  operator_delete(param_1);
  return;
}




void FUN_00bf4138(long param_1)

{
  FUN_00bf4078((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf4160(long param_1)

{
  FUN_00bf4078((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




undefined8 FUN_00bf4188(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  return *(undefined8 *)(param_1 + 8);
}




void FUN_00bf41b4(void)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  return;
}




undefined8 FUN_00bf41cc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf41f8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_00951478(param_1 + 0x40,0);
  local_3c = 0;
  piVar3 = (int *)(param_2 + 0x48);
  if (0 < *piVar3) {
    do {
      uVar2 = FUN_00bf4acc(piVar3,&local_3c);
      FUN_00bf42b0((undefined4 *)(param_1 + 0x30),&local_3c,uVar2);
      local_3c = local_3c + 1;
    } while (local_3c < *piVar3);
  }
  FUN_00bf43a0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf42b0(uint *param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c = FUN_0091ed5c(0,0,*param_2);
  uVar1 = *param_1;
  lVar4 = *(long *)(param_1 + 2);
  if (uVar1 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar1 * (ulong)local_3c >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)local_3c >> 0x20)) {
      do {
        if (*(uint *)(lVar4 + uVar6 * 4) <= local_3c) break;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
    }
    while ((iVar5 = (int)uVar6, iVar5 < (int)uVar1 && (*(uint *)(lVar4 + uVar6 * 4) < local_3c))) {
      uVar6 = (ulong)(iVar5 + 1);
    }
  }
  FUN_0091f770(param_1,lVar4 + (long)iVar5 * 4,&local_3c,&local_38);
  FUN_00bf4544(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar5 * 0x90,param_3,param_3 + 0x90);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf43a0(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00c6b778(*(undefined8 *)(param_1 + 8));
  local_4c = *(int *)(param_1 + 0x30);
  while (bVar2 = 0 < local_4c, local_4c = local_4c + -1, bVar2) {
    lVar3 = FUN_00bf4acc((int *)(param_1 + 0x30),&local_4c);
    uVar4 = *(undefined8 *)(param_1 + 8);
    FUN_00cb47e8(&local_60,*(undefined4 *)(lVar3 + 0x78),0,1,0);
    FUN_00e70570(&local_70,lVar3 + 0x18);
    FUN_00c6b828(uVar4,&local_60,&local_70,*(undefined4 *)(lVar3 + 0x80),
                 *(undefined4 *)(lVar3 + 0x7c),*(undefined4 *)(lVar3 + 0x88),
                 *(undefined4 *)(lVar3 + 0x84));
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf4494(long param_1)

{
  FUN_00bf41f8(param_1 + -0x10);
  return;
}




void FUN_00bf449c(void)

{
  FUN_00e6ce7c("INVENTORY_TROPHIES_KEY_TAB_TITLE",0);
  return;
}




void FUN_00bf44ac(void)

{
  FUN_00e6ce7c("INVENTORY_TROPHIES_KEY_TAB_TITLE",0);
  return;
}




void FUN_00bf44bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f16a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf4500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f16a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void * FUN_00bf4544(uint *param_1,void *param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  if (param_3 != param_4) {
    pvVar9 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    uVar6 = param_1[1];
    uVar13 = (param_4 - param_3 >> 4) * -0x71c71c71c71c71c7;
    uVar12 = (uint)uVar13;
    uVar16 = ((long)param_2 - (long)pvVar9 >> 4) * -0x71c71c71c71c71c7;
    if (uVar6 - uVar3 < uVar12) {
      uVar3 = uVar3 + uVar12;
      if (uVar6 < 0x20) {
        uVar6 = uVar6 << 1;
      }
      else if (uVar6 == 0xffffffff) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uVar6 + 0x10) - (uVar6 & 0xf);
      }
      uVar12 = uVar3;
      if (uVar3 <= uVar6) {
        uVar12 = uVar6;
      }
      pvVar5 = operator_new__((ulong)uVar12 * 0x90);
      pvVar10 = pvVar5;
      for (; pvVar9 != param_2; pvVar9 = (void *)((long)pvVar9 + 0x90)) {
        FUN_008fcdb8(pvVar10,pvVar9);
        FUN_008fcdb8((long)pvVar10 + 0x18,(long)pvVar9 + 0x18);
        FUN_008fcdb8((long)pvVar10 + 0x30,(long)pvVar9 + 0x30);
        FUN_008fcdb8((long)pvVar10 + 0x48,(long)pvVar9 + 0x48);
        FUN_008fcdb8((long)pvVar10 + 0x60,(long)pvVar9 + 0x60);
        *(undefined4 *)((long)pvVar10 + 0x88) = *(undefined4 *)((long)pvVar9 + 0x88);
        uVar17 = *(undefined8 *)((long)pvVar9 + 0x78);
        *(undefined8 *)((long)pvVar10 + 0x80) = *(undefined8 *)((long)pvVar9 + 0x80);
        *(undefined8 *)((long)pvVar10 + 0x78) = uVar17;
        pvVar10 = (void *)((long)pvVar10 + 0x90);
      }
      pvVar10 = (void *)((long)pvVar5 + (uVar16 & 0xffffffff) * 0x90);
      pvVar9 = pvVar10;
      do {
        FUN_008fcdb8(pvVar9,param_3);
        FUN_008fcdb8((long)pvVar9 + 0x18,param_3 + 0x18);
        FUN_008fcdb8((long)pvVar9 + 0x30,param_3 + 0x30);
        FUN_008fcdb8((long)pvVar9 + 0x48,param_3 + 0x48);
        FUN_008fcdb8((long)pvVar9 + 0x60,param_3 + 0x60);
        *(undefined4 *)((long)pvVar9 + 0x88) = *(undefined4 *)(param_3 + 0x88);
        puVar4 = (undefined8 *)(param_3 + 0x80);
        uVar17 = *(undefined8 *)(param_3 + 0x78);
        param_3 = param_3 + 0x90;
        *(undefined8 *)((long)pvVar9 + 0x80) = *puVar4;
        *(undefined8 *)((long)pvVar9 + 0x78) = uVar17;
        pvVar9 = (void *)((long)pvVar9 + 0x90);
      } while (param_3 != param_4);
      pvVar9 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x90);
      if (pvVar9 != param_2) {
        pvVar7 = (void *)((long)pvVar10 + (uVar13 & 0xffffffff) * 0x90);
        do {
          FUN_008fcdb8(pvVar7,param_2);
          FUN_008fcdb8((long)pvVar7 + 0x18,(long)param_2 + 0x18);
          FUN_008fcdb8((long)pvVar7 + 0x30,(long)param_2 + 0x30);
          FUN_008fcdb8((long)pvVar7 + 0x48,(long)param_2 + 0x48);
          FUN_008fcdb8((long)pvVar7 + 0x60,(long)param_2 + 0x60);
          *(undefined4 *)((long)pvVar7 + 0x88) = *(undefined4 *)((long)param_2 + 0x88);
          puVar4 = (undefined8 *)((long)param_2 + 0x80);
          uVar17 = *(undefined8 *)((long)param_2 + 0x78);
          param_2 = (void *)((long)param_2 + 0x90);
          *(undefined8 *)((long)pvVar7 + 0x80) = *puVar4;
          *(undefined8 *)((long)pvVar7 + 0x78) = uVar17;
          pvVar7 = (void *)((long)pvVar7 + 0x90);
        } while (param_2 != pvVar9);
      }
      FUN_00951478(param_1,1);
      *(void **)(param_1 + 2) = pvVar5;
      *param_1 = uVar3;
      param_1[1] = uVar12;
      param_2 = pvVar10;
    }
    else {
      pvVar9 = (void *)((long)pvVar9 + (ulong)uVar3 * 0x90);
      uVar15 = ((long)pvVar9 - (long)param_2 >> 4) * -0x71c71c71c71c71c7;
      uVar13 = uVar13 & 0xffffffff;
      if (uVar12 < (uint)uVar15) {
        pvVar10 = (void *)((long)pvVar9 + uVar13 * -0x90);
        if (uVar13 != 0) {
          lVar14 = 0;
          do {
            lVar11 = (long)pvVar9 + lVar14;
            lVar2 = (long)pvVar10 + lVar14;
            FUN_008fcdb8(lVar11,lVar2);
            FUN_008fcdb8(lVar11 + 0x18,lVar2 + 0x18);
            FUN_008fcdb8(lVar11 + 0x30,lVar2 + 0x30);
            FUN_008fcdb8(lVar11 + 0x48,lVar2 + 0x48);
            FUN_008fcdb8(lVar11 + 0x60,lVar2 + 0x60);
            lVar14 = lVar14 + 0x90;
            *(undefined4 *)(lVar11 + 0x88) = *(undefined4 *)(lVar2 + 0x88);
            uVar17 = *(undefined8 *)(lVar2 + 0x78);
            *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
            *(undefined8 *)(lVar11 + 0x78) = uVar17;
          } while (uVar13 * 0x90 - lVar14 != 0);
          pvVar10 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x90 + uVar13 * -0x90);
        }
        lVar14 = (long)pvVar10 - (long)param_2;
        if (lVar14 != 0) {
          lVar11 = 0;
          do {
            lVar2 = lVar11 + lVar14 + uVar13 * 0x90;
            FUN_008fce60((long)param_2 + lVar2 + -0x90,(long)pvVar10 + lVar11 + -0x90);
            FUN_008fce60((long)param_2 + lVar2 + -0x78,(long)pvVar10 + lVar11 + -0x78);
            FUN_008fce60((long)param_2 + lVar2 + -0x60,(long)pvVar10 + lVar11 + -0x60);
            FUN_008fce60((long)param_2 + lVar2 + -0x48,(long)pvVar10 + lVar11 + -0x48);
            FUN_008fce60((long)param_2 + lVar2 + -0x30,(long)pvVar10 + lVar11 + -0x30);
            uVar17 = *(undefined8 *)((long)pvVar10 + lVar11 + -0x18);
            lVar8 = lVar11 + -0x90;
            *(undefined8 *)((long)param_2 + lVar2 + -0x10) =
                 *(undefined8 *)((long)pvVar10 + lVar11 + -0x10);
            *(undefined8 *)((long)param_2 + lVar2 + -0x18) = uVar17;
            *(undefined4 *)((long)param_2 + lVar2 + -8) =
                 *(undefined4 *)((long)pvVar10 + lVar11 + -8);
            lVar11 = lVar8;
          } while (-lVar8 != lVar14);
        }
        do {
          FUN_008fce60(param_2,param_3);
          FUN_008fce60((long)param_2 + 0x18,param_3 + 0x18);
          FUN_008fce60((long)param_2 + 0x30,param_3 + 0x30);
          FUN_008fce60((long)param_2 + 0x48,param_3 + 0x48);
          FUN_008fce60((long)param_2 + 0x60,param_3 + 0x60);
          uVar17 = *(undefined8 *)(param_3 + 0x78);
          *(undefined8 *)((long)param_2 + 0x80) = *(undefined8 *)(param_3 + 0x80);
          *(undefined8 *)((long)param_2 + 0x78) = uVar17;
          puVar1 = (undefined4 *)(param_3 + 0x88);
          param_3 = param_3 + 0x90;
          *(undefined4 *)((long)param_2 + 0x88) = *puVar1;
          param_2 = (void *)((long)param_2 + 0x90);
        } while (param_3 != param_4);
      }
      else {
        if (pvVar9 != param_2) {
          pvVar10 = param_2;
          do {
            pvVar5 = (void *)((long)pvVar10 + uVar13 * 0x90);
            FUN_008fcdb8(pvVar5,pvVar10);
            FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar10 + 0x18);
            FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar10 + 0x30);
            FUN_008fcdb8((long)pvVar5 + 0x48,(long)pvVar10 + 0x48);
            FUN_008fcdb8((long)pvVar5 + 0x60,(long)pvVar10 + 0x60);
            *(undefined4 *)((long)pvVar5 + 0x88) = *(undefined4 *)((long)pvVar10 + 0x88);
            puVar4 = (undefined8 *)((long)pvVar10 + 0x80);
            uVar17 = *(undefined8 *)((long)pvVar10 + 0x78);
            pvVar10 = (void *)((long)pvVar10 + 0x90);
            *(undefined8 *)((long)pvVar5 + 0x80) = *puVar4;
            *(undefined8 *)((long)pvVar5 + 0x78) = uVar17;
          } while (pvVar9 != pvVar10);
          pvVar9 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x90);
        }
        uVar15 = uVar15 & 0xffffffff;
        lVar11 = param_3 + uVar15 * 0x90;
        for (lVar14 = lVar11; lVar14 != param_4; lVar14 = lVar14 + 0x90) {
          FUN_008fcdb8(pvVar9,lVar14);
          FUN_008fcdb8((long)pvVar9 + 0x18,lVar14 + 0x18);
          FUN_008fcdb8((long)pvVar9 + 0x30,lVar14 + 0x30);
          FUN_008fcdb8((long)pvVar9 + 0x48,lVar14 + 0x48);
          FUN_008fcdb8((long)pvVar9 + 0x60,lVar14 + 0x60);
          *(undefined4 *)((long)pvVar9 + 0x88) = *(undefined4 *)(lVar14 + 0x88);
          uVar17 = *(undefined8 *)(lVar14 + 0x78);
          *(undefined8 *)((long)pvVar9 + 0x80) = *(undefined8 *)(lVar14 + 0x80);
          *(undefined8 *)((long)pvVar9 + 0x78) = uVar17;
          pvVar9 = (void *)((long)pvVar9 + 0x90);
        }
        if (uVar15 != 0) {
          do {
            FUN_008fce60(param_2,param_3);
            FUN_008fce60((long)param_2 + 0x18,param_3 + 0x18);
            FUN_008fce60((long)param_2 + 0x30,param_3 + 0x30);
            FUN_008fce60((long)param_2 + 0x48,param_3 + 0x48);
            FUN_008fce60((long)param_2 + 0x60,param_3 + 0x60);
            uVar17 = *(undefined8 *)(param_3 + 0x78);
            *(undefined8 *)((long)param_2 + 0x80) = *(undefined8 *)(param_3 + 0x80);
            *(undefined8 *)((long)param_2 + 0x78) = uVar17;
            puVar1 = (undefined4 *)(param_3 + 0x88);
            param_3 = param_3 + 0x90;
            *(undefined4 *)((long)param_2 + 0x88) = *puVar1;
            param_2 = (void *)((long)param_2 + 0x90);
          } while (param_3 != lVar11);
        }
      }
      param_2 = (void *)(*(long *)(param_1 + 2) + (uVar16 & 0xffffffff) * 0x90);
      *param_1 = *param_1 + uVar12;
    }
  }
  return param_2;
}




long FUN_00bf4acc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = FUN_0091ed5c(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)uVar1 * (ulong)uVar3 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar3) break;
        iVar4 = (int)uVar5;
        uVar2 = iVar4 - 1;
        uVar5 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
    }
    for (; ((int)uVar5 < (int)uVar1 && (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) < uVar3));
        uVar5 = (ulong)((int)uVar5 + 1)) {
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 0x90;
}




void FUN_00bf4b5c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027f1ad8;
  pvVar1 = operator_new(0xb88);
  FUN_00c6c6b0();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027f16c8;
  param_1[2] = &PTR_FUN_027f1708;
  param_1[5] = &PTR_FUN_027f1aa0;
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00bf4bf4,0);
  FUN_00bf4c20(param_1);
  return;
}




void FUN_00bf4bf4(void)

{
  FUN_00bf4c20();
  return;
}




void FUN_00bf4c20(long param_1)

{
  void *pvVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  byte local_90 [16];
  void *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00c6ca54(*(undefined8 *)(param_1 + 8));
  local_78 = 0;
  local_70 = 0;
  FUN_0096be78(&local_78);
  if ((int)local_78 != 0) {
    uVar11 = 0;
    do {
      lVar9 = local_70;
      FUN_008fa54c(local_90,"card_image_");
      lVar8 = lVar9 + uVar11 * 0xe8;
      bVar2 = *(byte *)(lVar8 + 0x90);
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 != 0) {
LAB_00bf4cb0:
          if ((bVar2 & 1) == 0) {
            uVar4 = (uint)(bVar2 >> 1);
          }
          else {
            uVar4 = (uint)*(undefined8 *)(lVar9 + uVar11 * 0xe8 + 0x98);
          }
          if (0x12 < uVar4) {
            if ((bVar2 & 1) == 0) {
              lVar8 = lVar8 + 0x91;
            }
            else {
              lVar8 = *(long *)(lVar9 + uVar11 * 0xe8 + 0xa0);
            }
            switch(*(undefined1 *)(lVar8 + 0x12)) {
            case 0x30:
              uVar6 = 0x30;
              break;
            case 0x31:
              uVar6 = 0x31;
              break;
            case 0x32:
              uVar6 = 0x32;
              break;
            case 0x33:
              uVar6 = 0x33;
              break;
            case 0x34:
            case 0x35:
              uVar6 = 0x34;
              break;
            case 0x36:
              uVar6 = 0x35;
              break;
            case 0x37:
              uVar6 = 0x36;
              break;
            default:
              uVar6 = 0x37;
            }
            FUN_0093de70(local_90,uVar6);
            lVar8 = lVar9 + uVar11 * 0xe8;
            puVar10 = (uint *)(lVar8 + 8);
            plVar14 = (long *)(lVar8 + 0x10);
            lVar8 = *plVar14;
            if (*puVar10 != 0) {
              lVar13 = 0;
              uVar12 = 1;
              lVar7 = lVar8;
              while( true ) {
                uVar4 = FUN_00cab944(lVar7 + lVar13 + 0x30);
                uVar5 = FUN_00cab944(lVar8 + 0x30);
                if (uVar5 < uVar4) {
                  lVar8 = *plVar14 + lVar13;
                }
                if (*puVar10 <= uVar12) break;
                lVar7 = *plVar14;
                lVar13 = lVar13 + 0xa0;
                uVar12 = uVar12 + 1;
              }
            }
            lVar9 = lVar9 + uVar11 * 0xe8;
            pvVar1 = (void *)((ulong)local_90 | 1);
            if ((local_90[0] & 1) != 0) {
              pvVar1 = local_80;
            }
            FUN_00c6cb64(*(undefined8 *)(param_1 + 8),lVar9 + 0xa8,lVar9 + 0x18,pvVar1,0,0,0,lVar8);
          }
        }
      }
      else if (*(long *)(lVar9 + uVar11 * 0xe8 + 0x98) != 0) goto LAB_00bf4cb0;
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (local_78 & 0xffffffff));
  }
  FUN_00bf4fe4(param_1,param_1 + 0x30);
  FUN_0097905c(&local_78,1);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf4e88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f16c8;
  param_1[2] = &PTR_FUN_027f1708;
  param_1[5] = &PTR_FUN_027f1aa0;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  FUN_009512b0(param_1 + 6,1);
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f1ad8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf4f1c(long param_1)

{
  FUN_00bf4e88(param_1 + -0x10);
  return;
}




void FUN_00bf4f24(long param_1)

{
  FUN_00bf4e88(param_1 + -0x28);
  return;
}




void FUN_00bf4f2c(void *param_1)

{
  FUN_00bf4e88();
  operator_delete(param_1);
  return;
}




void FUN_00bf4f50(long param_1)

{
  FUN_00bf4e88((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf4f78(long param_1)

{
  FUN_00bf4e88((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




undefined8 FUN_00bf4fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf4fa8(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf4fb0(long param_1,long param_2)

{
  FUN_00bf5278(param_1 + 0x30,param_2 + 0x28);
  FUN_00bf4fe4(param_1,param_1 + 0x30);
  return;
}




void FUN_00bf4fe4(long param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (0 < *param_2) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar4 = *(long *)(param_2 + 2) + lVar5;
      uVar1 = *(undefined8 *)(lVar4 + 0x18);
      lVar2 = *(long *)(lVar4 + 0x20);
      lVar7 = *(long *)(lVar4 + 0x28);
      uVar3 = *(undefined4 *)(lVar4 + 0x30);
      lVar4 = FUN_00e85318(0);
      FUN_00c6cfa8(*(undefined8 *)(param_1 + 8),*(long *)(param_2 + 2) + lVar5,
                   (lVar2 - lVar7) + lVar4,lVar2,uVar1,uVar3);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while (lVar6 < *param_2);
  }
  return;
}

