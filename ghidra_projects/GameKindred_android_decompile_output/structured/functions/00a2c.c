// functions/00a2c — 4 functions
#include "libGameKindred.h"




void FUN_00a2c0a0(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(*(long *)(param_1 + 0x3960) + 0x18);
  while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar8 = *(long *)(lVar8 + 0x20);
  }
  uVar5 = FUN_00d535a4(lVar8,*(undefined4 *)(param_1 + 0x3970));
  uVar5 = uVar5 & 0xffffffff;
  uVar3 = FUN_00d548e8(lVar8,*(undefined4 *)(param_1 + 0x3970));
  lVar8 = *(long *)(*(long *)(param_1 + 0x3960) + 0x40);
  uVar11 = 0;
  fVar13 = (*(float *)(lVar8 + 0x240) + 1.0) *
           (*(float *)(lVar8 + 0xd8) + *(float *)(lVar8 + 0x18c) * (*(float *)(lVar8 + 0x2f4) + 1.0)
           );
  if (DAT_03131be0 <= fVar13) {
    fVar13 = DAT_03131be0;
  }
  lVar8 = param_1 + 0x28c8;
  fVar14 = DAT_03131b20;
  if (DAT_03131b20 <= fVar13) {
    fVar14 = fVar13;
  }
  do {
    if (uVar11 < uVar5) {
      FUN_00f0e578(lVar8,"hud_ability_level_dot_lit");
    }
    uVar11 = uVar11 + 1;
    lVar8 = lVar8 + 0xf0;
  } while (uVar11 != 5);
  uVar6 = FUN_00e6ce7c("STAT_LABEL_TYPE",0);
  FUN_00f0d75c(param_1 + 0xbc0,uVar6);
  uVar6 = FUN_00e6ce7c(*(undefined8 *)(*(long *)(param_1 + 0x3968) + 0x18),0);
  FUN_00f0d75c(param_1 + 0xcf0,uVar6);
  fVar13 = *(float *)(*(long *)(param_1 + 0x3968) + 0x84);
  if (fVar13 <= 0.0) {
    lVar8 = FUN_00ce9fc8("Range",*(long *)(param_1 + 0x3968),0);
    if (lVar8 == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)(lVar8 + 8);
    }
  }
  iVar9 = (int)fVar14;
  FUN_00e70510(&local_98);
  if (fVar13 <= 0.0) {
    FUN_00e705c8(&local_a8,&DAT_01b9f8ad);
    FUN_00910394(&local_98,&local_a8);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
  }
  else {
    FUN_00e70e18((double)fVar13,&local_98,&DAT_01b9f8a8);
  }
  uVar6 = FUN_00e6ce7c("STAT_LABEL_RANGE",0);
  FUN_00f0d75c(param_1 + 0xe20,uVar6);
  FUN_00f0d75c(param_1 + 0xf50,&local_98);
  lVar8 = FUN_00ce9fc8("Energy Cost",*(undefined8 *)(param_1 + 0x3968),0);
  if (lVar8 != 0) {
    uVar6 = FUN_00cb372c(0x36);
    FUN_00a2c508(lVar8,uVar6,1,uVar5,uVar3,iVar9,param_1 + 0x1080);
  }
  lVar8 = FUN_00ce9fc8("Cooldown",*(undefined8 *)(param_1 + 0x3968),0);
  if (lVar8 != 0) {
    uVar6 = FUN_00cb372c(0x2c);
    FUN_00a2c508(lVar8,uVar6,4,uVar5,uVar3,iVar9,param_1 + 0x12e0);
  }
  lVar8 = *(long *)(param_1 + 0x3968);
  plVar7 = *(long **)(lVar8 + 0xa8);
  lVar10 = *plVar7;
  if (lVar10 == 0) {
    uVar11 = 4;
  }
  else {
    uVar11 = 4;
    do {
      plVar7 = plVar7 + 1;
      if (*(char *)(lVar10 + 0x58) == '\0') {
        lVar8 = *(long *)(*(long *)(param_1 + 0x3960) + 0x40);
        fVar14 = *(float *)(lVar8 + 0x38);
        fVar13 = (*(float *)(lVar8 + 0x1a0) + 1.0) *
                 (fVar14 + *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0));
        if (DAT_03131b40 <= fVar13) {
          fVar13 = DAT_03131b40;
        }
        fVar2 = DAT_03131a80;
        if (DAT_03131a80 <= fVar13) {
          fVar2 = fVar13;
        }
        uVar6 = FUN_00cb372c(*(undefined4 *)(lVar10 + 0x54));
        FUN_00a2c6f0(fVar2 - fVar14,lVar10,uVar6,1,uVar5,uVar3,iVar9,
                     param_1 + uVar11 * 0x260 + 0xbc0);
        uVar11 = (ulong)((int)uVar11 + 1);
      }
      lVar10 = *plVar7;
    } while (((uint)uVar11 < 0xc) && (lVar10 != 0));
    lVar8 = *(long *)(param_1 + 0x3968);
  }
  if ((uint)uVar11 < 0xc) {
    plVar7 = *(long **)(lVar8 + 0xb0);
    puVar12 = (undefined8 *)*plVar7;
    do {
      if (puVar12 == (undefined8 *)0x0) break;
      plVar7 = plVar7 + 1;
      iVar4 = strcasecmp("Energy Cost",(char *)*puVar12);
      if ((((iVar4 != 0) && (iVar4 = strcasecmp("Cooldown",(char *)*puVar12), iVar4 != 0)) &&
          (iVar4 = strcasecmp("Range",(char *)*puVar12), iVar4 != 0)) &&
         ((*(int *)((long)puVar12 + 0x2c) != 0 && (*(char *)((long)puVar12 + 0x34) == '\0')))) {
        uVar6 = FUN_00cb3700(puVar12);
        FUN_00a2c508(puVar12,uVar6,*(undefined4 *)((long)puVar12 + 0x2c),uVar5,uVar3,iVar9,
                     param_1 + uVar11 * 0x260 + 0xbc0);
        uVar11 = (ulong)((int)uVar11 + 1);
      }
      puVar12 = (undefined8 *)*plVar7;
    } while ((uint)uVar11 < 0xc);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a2c508(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,uint param_5
                 ,undefined4 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (((DAT_03131a58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03131a58), iVar3 != 0)) {
    FUN_00e70510(&DAT_03131a48);
    __cxa_atexit(FUN_0090e338,&DAT_03131a48,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03131a58);
  }
  uVar4 = FUN_00d08460(param_1,param_4,param_4 == param_5,param_6);
  uVar5 = uVar4;
  if (param_4 != param_5) {
    uVar5 = FUN_00d08460(param_1,param_4 + 1,param_4 + 1 == param_5,param_6);
  }
  FUN_00cb1d0c(uVar4,param_3,&DAT_03131a48,0);
  if (((param_4 < param_5) && (param_4 != 0)) && (fVar6 = (float)uVar5 - (float)uVar4, fVar6 != 0.0)
     ) {
    FUN_00e70510(&local_88);
    FUN_00cb1d0c(fVar6,param_3,&local_88,0);
    puVar1 = &DAT_01b9f8c2;
    if (fVar6 <= 0.0) {
      puVar1 = &DAT_01e277f2;
    }
    FUN_00e705c8(&local_98,puVar1);
    FUN_00e70c34(&DAT_03131a48,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00e70c34(&DAT_03131a48,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  FUN_00f0d75c(param_7,param_2);
  FUN_00f0d75c(param_7 + 0x130,&DAT_03131a48);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2c6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,uint param_6,undefined4 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (((DAT_03131a70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03131a70), iVar3 != 0)) {
    FUN_00e70510(&DAT_03131a60);
    __cxa_atexit(FUN_0090e338,&DAT_03131a60,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03131a70);
  }
  uVar4 = FUN_00d08368(param_1,param_2,param_5,param_5 == param_6,param_7);
  uVar5 = uVar4;
  if (param_5 != param_6) {
    uVar5 = FUN_00d08368(param_1,param_2,param_5 + 1,param_5 + 1 == param_6,param_7);
  }
  FUN_00cb1d0c(uVar4,param_4,&DAT_03131a60,0);
  if (((param_5 < param_6) && (param_5 != 0)) && (fVar6 = (float)uVar5 - (float)uVar4, fVar6 != 0.0)
     ) {
    FUN_00e70510(&local_88);
    FUN_00cb1d0c(fVar6,param_4,&local_88,0);
    puVar1 = &DAT_01b9f8c2;
    if (fVar6 <= 0.0) {
      puVar1 = &DAT_01e277f2;
    }
    FUN_00e705c8(&local_98,puVar1);
    FUN_00e70c34(&DAT_03131a60,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00e70c34(&DAT_03131a60,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  FUN_00f0d75c(param_8,param_3);
  FUN_00f0d75c(param_8 + 0x130,&DAT_03131a60);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2c8ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_2 + 0x3978);
  *(byte *)(param_2 + 0x3978) = bVar3 ^ 1;
  lVar1 = param_2 + 0xb38;
  if (bVar3 == 0) {
    lVar1 = param_2 + 0x2a8;
  }
  *(uint *)(param_2 + 0x554) = *(uint *)(param_2 + 0x554) & 0xffffffef | (uint)bVar3 << 4;
  lVar2 = param_2 + 0x2a8;
  if (bVar3 == 0) {
    lVar2 = param_2 + 0xb38;
  }
  FUN_00f01980(lVar1);
  FUN_00f01980(lVar2);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar7);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efd6a4(puVar8);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  local_80 = 0x42c80000;
  FUN_00efd6ec(puVar8,&local_80);
  FUN_00efcac4(0x3e19999a,puVar8);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efdd74(puVar9);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar9);
  FUN_00efcac4(0x3e19999a,puVar9);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efc930(puVar9,puVar10);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,puVar8,puVar9,0);
  FUN_00f02308(lVar1,puVar7,puVar10,0);
  lVar1 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar7);
  lVar1 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 != 0xffff) {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar9);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00a2ce60;
    }
  }
  puVar9 = (ushort *)0x0;
LAB_00a2ce60:
  FUN_00efddc4(0x3f800000,puVar9);
  FUN_00efcac4(0x3e19999a,puVar9);
  FUN_00efc930(puVar8,puVar9);
  lVar1 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd6a4(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  local_80 = 0x42c80000;
  FUN_00efd6ec(puVar9,&local_80);
  FUN_00efcac4(0x3e19999a,puVar9);
  FUN_00efcb24(puVar9,FUN_00a2b6d4);
  lVar1 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,puVar8,puVar9,0);
  if ((*(float *)(lVar2 + 0x40) != -100.0) || (*(float *)(lVar2 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar2 + 0x40) = 0xc2c80000;
    FUN_0091ada4(lVar2);
  }
  if ((*(uint *)(lVar2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffff807f;
    FUN_0091ada4(lVar2);
  }
  FUN_00f02308(lVar2,puVar7,puVar10,0);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

