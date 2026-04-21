// functions/01999 — 34 functions
#include "libGameKindred.h"




undefined1 FUN_01999090(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = 1;
  switch(param_1) {
  case 0x11:
    iVar2 = FUN_0199cf54(1);
    return iVar2 == 1;
  case 0x13:
    return 0xf;
  case 0x14:
    uVar1 = 0x10;
  }
  return uVar1;
}




void * FUN_019990e0(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  long *local_148;
  undefined8 local_140;
  undefined8 local_138;
  int aiStack_130 [16];
  long alStack_f0 [16];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar17 = *(uint *)(param_1 + 0x184);
  uVar18 = *(uint *)(param_1 + 0x180);
  if (uVar17 < uVar18) {
    uVar16 = 0;
    puVar19 = (undefined4 *)(param_1 + (long)(int)uVar17 * 0x18 + 0x14);
    piVar11 = aiStack_130 + (int)uVar17;
    do {
      iVar4 = FUN_019a09bc(param_2,puVar19[-1],*puVar19);
      *piVar11 = iVar4;
      uVar18 = *(uint *)(param_1 + 0x180);
      uVar17 = uVar17 + 1;
      uVar16 = iVar4 + uVar16;
      puVar19 = puVar19 + 6;
      piVar11 = piVar11 + 1;
    } while (uVar17 < uVar18);
    uVar17 = *(uint *)(param_1 + 0x184);
    uVar5 = (ulong)uVar16;
  }
  else {
    uVar5 = 0;
  }
  pvVar6 = operator_new__(uVar5);
  if (uVar17 < uVar18) {
    uVar16 = 0;
    plVar10 = alStack_f0 + (int)uVar17;
    piVar11 = aiStack_130 + (int)uVar17;
    do {
      *plVar10 = (long)pvVar6 + (ulong)uVar16;
      uVar17 = uVar17 + 1;
      uVar16 = *piVar11 + uVar16;
      plVar10 = plVar10 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar17 < uVar18);
  }
  puVar7 = (undefined8 *)FUN_00e7a7e4(0x218);
  FUN_00e7a3c0();
  *puVar7 = &PTR_FUN_02baf3f8;
  uVar2 = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)((long)puVar7 + 0x214) = param_2;
  *(undefined4 *)(puVar7 + 0x42) = uVar2;
  uVar17 = *(uint *)(param_1 + 0x184);
  uVar18 = *(uint *)(param_1 + 0x180);
  if (uVar17 < uVar18) {
    lVar13 = (long)(int)uVar17;
    puVar12 = (undefined8 *)(param_1 + lVar13 * 0x18);
    puVar14 = puVar7 + lVar13 * 4 + 3;
    plVar10 = alStack_f0 + lVar13;
    uVar16 = uVar17;
    do {
      uVar16 = uVar16 + 1;
      puVar14[-1] = *plVar10;
      *puVar14 = *puVar12;
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar12 + 1);
      puVar1 = puVar12 + 2;
      puVar12 = puVar12 + 3;
      *(undefined8 *)((long)puVar14 + 0xc) = *puVar1;
      puVar14 = puVar14 + 4;
      plVar10 = plVar10 + 1;
    } while (uVar16 < uVar18);
  }
  local_138 = 0;
  local_148 = (long *)FUN_00e7a148();
  *local_148 = (long)(puVar7 + 2);
  local_148[1] = (long)thunk_FUN_01999794;
  uVar8 = FUN_00e7a108();
  uVar8 = FUN_00e7b728(&local_148,uVar8);
  uVar8 = FUN_00e7b7f0(uVar8,puVar7);
  FUN_00e7b7e4(uVar8,uVar17 * 0x100 + 0x100 & 0xff00 | uVar17 & 0xff);
  local_140 = FUN_00e7b844();
  uVar17 = *(uint *)(param_1 + 0x180);
  iVar4 = *(int *)(param_1 + 0x184);
  if ((int)(uVar17 - iVar4) < 2) {
    uVar8 = 1;
  }
  else {
    local_148 = (long *)FUN_00e7a148();
    *local_148 = (long)(puVar7 + 2);
    local_148[1] = (long)thunk_FUN_01999794;
    uVar8 = FUN_00e7a108();
    uVar8 = FUN_00e7b728(&local_148,uVar8);
    uVar8 = FUN_00e7b7f0(uVar8,puVar7);
    FUN_00e7b7e4(uVar8,iVar4 + 1U & 0xff | (uVar17 & 0xff) << 8);
    local_138 = FUN_00e7b844();
    uVar8 = 2;
  }
  uVar9 = FUN_00e7a224();
  FUN_00e7a308(uVar9,&local_140,uVar8,&local_140,uVar8,0);
  uVar17 = *(uint *)(param_1 + 0x184);
  uVar18 = *(uint *)(param_1 + 0x180);
  if (uVar17 < uVar18) {
    lVar13 = (long)(int)uVar17;
    plVar10 = alStack_f0 + lVar13;
    piVar11 = aiStack_130 + lVar13;
    piVar15 = (int *)(param_1 + lVar13 * 0x18 + 8);
    do {
      uVar17 = uVar17 + 1;
      *(long *)(piVar15 + -2) = *plVar10;
      *piVar15 = *piVar11;
      plVar10 = plVar10 + 1;
      piVar11 = piVar11 + 1;
      piVar15 = piVar15 + 6;
    } while (uVar17 < uVar18);
  }
  *(undefined4 *)(param_1 + 0x194) = param_2;
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01999398(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar7 = FUN_00e7a224();
  lVar8 = FUN_00e7a25c(uVar7,0x815f1c7b);
  plVar1 = (long *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    FUN_00e6a2fc("Inconsistency");
    plVar1 = (long *)0x0;
  }
  if (*plVar1 == 0) {
    FUN_00e6a2fc("Inconsistency");
  }
  puVar9 = (undefined8 *)FUN_00e7a7e4(0x1a8);
  FUN_00e7a3c0();
  *puVar9 = &PTR_FUN_02baf418;
  if (puVar9 == (undefined8 *)0x0) {
    FUN_00e6a2fc("Inconsistency");
  }
  uVar7 = FUN_00e7a224();
  FUN_00e7a2d0(uVar7,puVar9,0x9ee95407);
  FUN_019a1834(*plVar1,auStack_5c,puVar9 + 0x32,0,(uint *)((long)puVar9 + 0x1a4),puVar9 + 0x33,
               (long)puVar9 + 0x19c,puVar9 + 0x34);
  uVar7 = FUN_019a0c28(*plVar1,puVar9 + 2);
  bVar3 = *(byte *)(*(long *)(param_1 + 8) + 0x4a);
  uVar2 = (uint)bVar3;
  if (*(int *)(puVar9 + 0x32) - 1U <= (uint)bVar3) {
    uVar2 = *(int *)(puVar9 + 0x32) - 1U;
  }
  *(uint *)((long)puVar9 + 0x194) = uVar2;
  uVar5 = 1;
  switch(*(undefined4 *)((long)puVar9 + 0x1a4)) {
  case 0x11:
    iVar6 = FUN_0199cf54(uVar7,1);
    uVar5 = iVar6 == 1;
    if (*(uint *)((long)puVar9 + 0x1a4) == (uint)(byte)uVar5) goto switchD_019994c4_default;
    break;
  case 0x12:
    break;
  case 0x13:
    uVar5 = 0xf;
    break;
  case 0x14:
    uVar5 = 0x10;
    break;
  default:
    goto switchD_019994c4_default;
  }
  uVar7 = FUN_019990e0(puVar9 + 2,uVar5);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
switchD_019994c4_default:
  uVar2 = *(uint *)(puVar9 + 0x34);
  uVar10 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar8 = *plVar1 + 0x1c;
    do {
      FUN_01999558(*(undefined8 *)(param_1 + 8),lVar8,lVar8);
      uVar10 = uVar10 - 1;
      lVar8 = lVar8 + 0xc;
    } while (uVar10 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01999558(uint *param_1,uint *param_2,long param_3)

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
  local_3c = *param_2;
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
  FUN_01999894(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar5 * 0xc,param_3,param_3 + 0xc);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_01999638(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00e7a224();
  lVar3 = FUN_00e7a25c(uVar2,0x9ee95407);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_0199fc70(*(long *)(param_1 + 8) + 0x30,0);
  FUN_0199fd94(*(long *)(param_1 + 8) + 0x30,lVar1 + (ulong)*(uint *)(lVar1 + 0x184) * 0x18,
               *(int *)(lVar1 + 0x180) - *(uint *)(lVar1 + 0x184),*(undefined4 *)(lVar1 + 0x194),
               *(undefined4 *)(lVar1 + 0x188),*(undefined4 *)(lVar1 + 0x18c));
  FUN_019a032c(0,0x447a0000,*(long *)(param_1 + 8) + 0x30);
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x44) = 0;
  return;
}




void FUN_019996cc(long param_1)

{
  FUN_019989ec(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
  }
  *(int *)(*(long *)(param_1 + 8) + 0x4c) = *(int *)(*(long *)(param_1 + 8) + 0x4c) + -1;
  return;
}




void FUN_01999710(void *param_1)

{
  FUN_00e7a3d4();
  operator_delete(param_1);
  return;
}




void FUN_01999734(long param_1)

{
  FUN_00e7a3d4(param_1 + -0x10);
  return;
}




void FUN_0199973c(long param_1)

{
  FUN_00e7a3d4((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void thunk_FUN_01999398(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 auStack_5c [4];
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  uVar7 = FUN_00e7a224();
  lVar8 = FUN_00e7a25c(uVar7,0x815f1c7b);
  plVar1 = (long *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    FUN_00e6a2fc("Inconsistency");
    plVar1 = (long *)0x0;
  }
  if (*plVar1 == 0) {
    FUN_00e6a2fc("Inconsistency");
  }
  puVar9 = (undefined8 *)FUN_00e7a7e4(0x1a8);
  FUN_00e7a3c0();
  *puVar9 = &PTR_FUN_02baf418;
  if (puVar9 == (undefined8 *)0x0) {
    FUN_00e6a2fc("Inconsistency");
  }
  uVar7 = FUN_00e7a224();
  FUN_00e7a2d0(uVar7,puVar9,0x9ee95407);
  FUN_019a1834(*plVar1,auStack_5c,puVar9 + 0x32,0,(uint *)((long)puVar9 + 0x1a4),puVar9 + 0x33,
               (long)puVar9 + 0x19c,puVar9 + 0x34);
  uVar7 = FUN_019a0c28(*plVar1,puVar9 + 2);
  bVar3 = *(byte *)(*(long *)(param_1 + 8) + 0x4a);
  uVar2 = (uint)bVar3;
  if (*(int *)(puVar9 + 0x32) - 1U <= (uint)bVar3) {
    uVar2 = *(int *)(puVar9 + 0x32) - 1U;
  }
  *(uint *)((long)puVar9 + 0x194) = uVar2;
  uVar5 = 1;
  switch(*(undefined4 *)((long)puVar9 + 0x1a4)) {
  case 0x11:
    iVar6 = FUN_0199cf54(uVar7,1);
    uVar5 = iVar6 == 1;
    if (*(uint *)((long)puVar9 + 0x1a4) == (uint)(byte)uVar5) goto switchD_019994c4_default;
    break;
  case 0x12:
    break;
  case 0x13:
    uVar5 = 0xf;
    break;
  case 0x14:
    uVar5 = 0x10;
    break;
  default:
    goto switchD_019994c4_default;
  }
  uVar7 = FUN_019990e0(puVar9 + 2,uVar5);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
switchD_019994c4_default:
  uVar2 = *(uint *)(puVar9 + 0x34);
  uVar10 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar8 = *plVar1 + 0x1c;
    do {
      FUN_01999558(*(undefined8 *)(param_1 + 8),lVar8,lVar8);
      uVar10 = uVar10 - 1;
      lVar8 = lVar8 + 0xc;
    } while (uVar10 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_01999638(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00e7a224();
  lVar3 = FUN_00e7a25c(uVar2,0x9ee95407);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
  FUN_0199fc70(*(long *)(param_1 + 8) + 0x30,0);
  FUN_0199fd94(*(long *)(param_1 + 8) + 0x30,lVar1 + (ulong)*(uint *)(lVar1 + 0x184) * 0x18,
               *(int *)(lVar1 + 0x180) - *(uint *)(lVar1 + 0x184),*(undefined4 *)(lVar1 + 0x194),
               *(undefined4 *)(lVar1 + 0x188),*(undefined4 *)(lVar1 + 0x18c));
  FUN_019a032c(0,0x447a0000,*(long *)(param_1 + 8) + 0x30);
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x44) = 0;
  return;
}




void thunk_FUN_019996cc(long param_1)

{
  FUN_019989ec(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
  }
  *(int *)(*(long *)(param_1 + 8) + 0x4c) = *(int *)(*(long *)(param_1 + 8) + 0x4c) + -1;
  return;
}




void FUN_01999770(void *param_1)

{
  FUN_00e7a3d4();
  operator_delete(param_1);
  return;
}




void FUN_01999794(undefined8 param_1)

{
  uint uVar1;
  
  FUN_00e7a224();
  uVar1 = FUN_00e7a2e8();
  FUN_019997c4(param_1,uVar1 & 0xff,uVar1 >> 8 & 0xff);
  return;
}




void FUN_019997c4(long param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x200) - 0x11U < 4) {
    if (param_2 < param_3) {
      lVar2 = param_1 + (long)param_2 * 0x20;
      param_3 = param_3 - param_2;
      do {
        FUN_019a0a5c(*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10),
                     *(undefined4 *)(param_1 + 0x204),lVar2,0,0);
        param_3 = param_3 + -1;
        lVar2 = lVar2 + 0x20;
      } while (param_3 != 0);
    }
  }
  else if ((*(int *)(param_1 + 0x200) == 0) && (param_2 < param_3)) {
    puVar1 = (undefined4 *)(param_1 + (long)param_2 * 0x20 + 0x18);
    param_3 = param_3 - param_2;
    do {
      FUN_019a0a00(*(undefined8 *)(puVar1 + -4),puVar1[-1],*puVar1,*(undefined8 *)(puVar1 + -6));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 8;
    } while (param_3 != 0);
  }
  return;
}




void thunk_FUN_01999794(undefined8 param_1)

{
  uint uVar1;
  
  FUN_00e7a224();
  uVar1 = FUN_00e7a2e8();
  FUN_019997c4(param_1,uVar1 & 0xff,uVar1 >> 8 & 0xff);
  return;
}




void FUN_01999870(void *param_1)

{
  FUN_00e7a3d4();
  operator_delete(param_1);
  return;
}




undefined8 * FUN_01999894(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  if (param_3 != param_4) {
    puVar14 = *(undefined8 **)(param_1 + 2);
    uVar1 = *param_1;
    uVar5 = param_1[1];
    uVar13 = ((long)param_4 - (long)param_3 >> 2) * -0x5555555555555555;
    uVar12 = (uint)uVar13;
    uVar10 = ((long)param_2 - (long)puVar14 >> 2) * -0x5555555555555555;
    if (uVar5 - uVar1 < uVar12) {
      uVar1 = uVar1 + uVar12;
      if (uVar5 < 0x20) {
        uVar5 = uVar5 << 1;
      }
      else if (uVar5 == 0xffffffff) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uVar5 + 0x10) - (uVar5 & 0xf);
      }
      uVar12 = uVar1;
      if (uVar1 <= uVar5) {
        uVar12 = uVar5;
      }
      puVar3 = operator_new__((ulong)uVar12 * 0xc);
      puVar11 = puVar3;
      for (; puVar14 != param_2; puVar14 = (undefined8 *)((long)puVar14 + 0xc)) {
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar14 + 1);
        *puVar11 = *puVar14;
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
      }
      puVar11 = (undefined8 *)((long)puVar3 + (uVar10 & 0xffffffff) * 0xc);
      puVar14 = puVar11;
      do {
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(param_3 + 1);
        puVar9 = (undefined8 *)((long)param_3 + 0xc);
        *puVar14 = *param_3;
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
        param_3 = puVar9;
      } while (param_4 != puVar9);
      pvVar4 = *(void **)(param_1 + 2);
      puVar14 = (undefined8 *)((long)pvVar4 + (ulong)*param_1 * 0xc);
      if (puVar14 != param_2) {
        puVar9 = (undefined8 *)((long)puVar11 + (uVar13 & 0xffffffff) * 0xc);
        do {
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_2 + 1);
          puVar8 = (undefined8 *)((long)param_2 + 0xc);
          *puVar9 = *param_2;
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
          param_2 = puVar8;
        } while (puVar14 != puVar8);
        pvVar4 = *(void **)(param_1 + 2);
      }
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined8 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar12;
      param_2 = puVar11;
    }
    else {
      puVar14 = (undefined8 *)((long)puVar14 + (ulong)uVar1 * 0xc);
      uVar6 = ((long)puVar14 - (long)param_2 >> 2) * -0x5555555555555555;
      uVar13 = uVar13 & 0xffffffff;
      if (uVar12 < (uint)uVar6) {
        if (uVar13 != 0) {
          lVar7 = 0;
          do {
            puVar11 = (undefined8 *)((long)puVar14 + lVar7 + uVar13 * -0xc);
            puVar3 = (undefined8 *)((long)puVar14 + lVar7);
            lVar7 = lVar7 + 0xc;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar11 + 1);
            *puVar3 = *puVar11;
          } while (uVar13 * -0xc + lVar7 != 0);
          puVar14 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0xc + uVar13 * -0xc);
        }
        lVar7 = (long)puVar14 - (long)param_2;
        if (lVar7 != 0) {
          do {
            lVar2 = lVar7 + uVar13 * 0xc;
            lVar7 = lVar7 + -0xc;
            *(undefined4 *)((long)param_2 + lVar2 + -4) = *(undefined4 *)((long)puVar14 + -4);
            *(undefined8 *)((long)param_2 + lVar2 + -0xc) = *(undefined8 *)((long)puVar14 + -0xc);
            puVar14 = (undefined8 *)((long)puVar14 + -0xc);
          } while (lVar7 != 0);
        }
        do {
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
          puVar14 = (undefined8 *)((long)param_3 + 0xc);
          *param_2 = *param_3;
          param_2 = (undefined8 *)((long)param_2 + 0xc);
          param_3 = puVar14;
        } while (param_4 != puVar14);
      }
      else {
        if (puVar14 != param_2) {
          puVar11 = param_2;
          do {
            puVar3 = (undefined8 *)((long)puVar11 + uVar13 * 0xc);
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar11 + 1);
            puVar9 = (undefined8 *)((long)puVar11 + 0xc);
            *puVar3 = *puVar11;
            puVar11 = puVar9;
          } while (puVar14 != puVar9);
          puVar14 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0xc);
        }
        uVar6 = uVar6 & 0xffffffff;
        for (puVar11 = (undefined8 *)((long)param_3 + uVar6 * 0xc); puVar11 != param_4;
            puVar11 = (undefined8 *)((long)puVar11 + 0xc)) {
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar11 + 1);
          *puVar14 = *puVar11;
          puVar14 = (undefined8 *)((long)puVar14 + 0xc);
        }
        if (uVar6 != 0) {
          lVar7 = uVar6 * 0xc;
          do {
            lVar7 = lVar7 + -0xc;
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
            *param_2 = *param_3;
            param_2 = (undefined8 *)((long)param_2 + 0xc);
            param_3 = (undefined8 *)((long)param_3 + 0xc);
          } while (lVar7 != 0);
        }
      }
      param_2 = (undefined8 *)(*(long *)(param_1 + 2) + (uVar10 & 0xffffffff) * 0xc);
      *param_1 = *param_1 + uVar12;
    }
  }
  return param_2;
}




void FUN_01999b98(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = &PTR_FUN_02baf438;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = FUN_01997bcc("depth");
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}




void FUN_01999bd8(long param_1,int *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x1f);
  *param_2 = 0;
  puVar5 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar5 = &PTR_FUN_02baf478;
  puVar5[1] = param_3;
  *(undefined1 *)(puVar5 + 2) = uVar1;
  return;
}




void FUN_01999c58(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01999c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_01999c64(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar5 = *(long **)(param_2 + 8);
  puVar6 = *(undefined8 **)(*plVar5 + (ulong)*(byte *)(param_2 + 0x10) * 8 + 8);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_00e6a2fc(0);
  }
  puVar4 = (undefined4 *)*puVar6;
  if (DAT_032157d0 != puVar4) {
    DAT_032157d0 = puVar4;
    glUseProgram(*puVar4);
  }
  lVar2 = plVar5[1];
  lVar1 = puVar6[1];
  lVar3 = lVar2;
  if (puVar6[1] == 0) {
    if (lVar2 == 0) goto LAB_01999cd0;
    lVar3 = 0;
    lVar1 = lVar2;
  }
  FUN_01996f20(lVar1,lVar3);
LAB_01999cd0:
  FUN_00f01040(0x7010100c2);
  return;
}




void FUN_01999ce8(void)

{
  return;
}




void FUN_01999cf0(void)

{
  return;
}




undefined8 FUN_01999cf8(void)

{
  return 0;
}




void FUN_01999d00(undefined8 *param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_02baf4a0;
  *(undefined2 *)(param_1 + 1) = 0;
  if (param_2 < 3) {
    uVar1 = FUN_01997bcc((&PTR_s_forward_low_02baf4d0)[(int)param_2]);
  }
  *(undefined1 *)((long)param_1 + 10) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}




ulong FUN_01999d64(long param_1,int *param_2,long *param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (ulong)*(byte *)(param_1 + (ulong)*(uint *)(param_1 + 0xc) + 8);
  if (*(long *)(*param_3 + uVar4 * 8 + 8) == 0) {
    uVar4 = (ulong)*(byte *)(param_1 + 9);
  }
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_2 + (ulong)(uint)param_2[10] * 4 + 2,0x27);
  uVar5 = lVar3 + 7U & 0xfffffffffffffff8;
  *param_2 = 0;
  FUN_01999e0c(uVar5,param_3,param_4,uVar4);
  return uVar5;
}




void FUN_01999e0c(undefined8 *param_1,long *param_2,uint param_3,byte param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_02baf4f8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar2 = *(ulong *)(*param_2 + (ulong)param_4 * 8 + 8);
  if (uVar2 == 0) {
    FUN_00e6a2fc(0);
  }
  uVar1 = 0;
  if ((*(ulong *)(uVar2 + 0x10) & 0xf00000) != 0) {
    uVar1 = 0x2000000000;
  }
  param_1[2] = (uVar2 & 0xffffffff | (ulong)(param_3 & 0xf) << 0x20 |
                (*(ulong *)(uVar2 + 0x10) >> 6 & 1) << 0x24 | uVar1) ^ 0x1000000000;
  *(byte *)(param_1 + 3) = param_4;
  return;
}




void FUN_01999e98(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01999ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_01999ea4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar5 = *(long **)(param_2 + 8);
  puVar6 = *(undefined8 **)(*plVar5 + (ulong)*(byte *)(param_2 + 0x18) * 8 + 8);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_00e6a2fc(0);
  }
  puVar3 = (undefined4 *)*puVar6;
  if (DAT_032157d0 != puVar3) {
    DAT_032157d0 = puVar3;
    glUseProgram(*puVar3);
  }
  lVar1 = plVar5[1];
  lVar4 = puVar6[1];
  lVar2 = lVar1;
  if (puVar6[1] == 0) {
    if (lVar1 == 0) goto LAB_01999f18;
    lVar2 = 0;
    lVar4 = lVar1;
  }
  FUN_01996f20(lVar4,lVar2);
LAB_01999f18:
  lVar4 = *(long *)(**(long **)(param_2 + 8) + (ulong)*(byte *)(param_2 + 0x18) * 8 + 8);
  if (lVar4 == 0) {
    FUN_00e6a2fc(0);
  }
  FUN_00f01040(*(undefined8 *)(lVar4 + 0x10));
  return;
}




undefined8 FUN_01999f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_01999f5c(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0;
  lVar6 = 0;
  do {
    pvVar4 = *(void **)(param_1 + lVar6 * 8 + 8);
    lVar2 = lVar5;
    pvVar3 = pvVar4;
    if (pvVar4 != (void *)0x0) {
      while( true ) {
        if (pvVar3 == pvVar4) {
          *(undefined8 *)(param_1 + lVar2 + 8) = 0;
        }
        if (lVar2 == 0x78) break;
        lVar1 = param_1 + lVar2;
        lVar2 = lVar2 + 8;
        pvVar3 = *(void **)(lVar1 + 0x10);
      }
      FUN_01997b64(pvVar4);
      operator_delete(pvVar4);
    }
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 8;
  } while (lVar6 != 0x10);
  return;
}




void FUN_01999fe4(long param_1,byte param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 8) = param_3;
  return;
}




void FUN_01999ff0(undefined2 *param_1)

{
  long lVar1;
  undefined2 *puVar2;
  
  lVar1 = 1;
  puVar2 = param_1;
  do {
    *puVar2 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 8;
  } while (lVar1 != 0x1000);
  *(undefined8 *)(param_1 + 0x8000) = 0xfff0000;
  lVar1 = 1;
  puVar2 = param_1 + 0x8008;
  do {
    *puVar2 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 0x44;
  } while (lVar1 != 0xe00);
  *(undefined8 *)(param_1 + 0x43808) = 0xdff0000;
  FUN_00e77acc(param_1 + 0x43810,0);
  *(undefined8 *)(param_1 + 0x43824) = 0;
  return;
}

