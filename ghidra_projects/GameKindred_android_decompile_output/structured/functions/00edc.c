// functions/00edc — 5 functions
#include "libGameKindred.h"




undefined8 FUN_00edc9fc(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)((long)param_1 + 0x23c);
  if (iVar3 == 0) {
    uVar2 = FUN_00edb46c(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar3 = *(int *)((long)param_1 + 0x23c);
  }
  iVar1 = *(int *)(param_1[0x4d] + 0x20);
  if (iVar3 == iVar1 + 0xd0) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 100;
    *(int *)(lVar4 + 0x2c) = iVar1;
    (**(code **)(*param_1 + 8))(param_1,3);
    *(undefined4 *)((long)param_1 + 0x23c) = 0;
  }
  else {
    uVar2 = (**(code **)(param_1[5] + 0x28))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(uint *)(param_1[0x4d] + 0x20) = *(int *)(param_1[0x4d] + 0x20) + 1U & 7;
  return 1;
}




undefined4 FUN_00edca98(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  puVar7 = (undefined8 *)param_1[5];
  lVar4 = puVar7[1];
  if (lVar4 == 0) {
    iVar3 = (*(code *)puVar7[3])(param_1);
    if (iVar3 != 0) {
      lVar4 = puVar7[1];
      goto LAB_00edcad4;
    }
LAB_00edcb68:
    uVar6 = 0;
  }
  else {
LAB_00edcad4:
    lVar4 = lVar4 + -1;
    puVar8 = (undefined1 *)*puVar7 + 1;
    uVar1 = *(undefined1 *)*puVar7;
    if (lVar4 == 0) {
      iVar3 = (*(code *)puVar7[3])(param_1);
      if (iVar3 == 0) goto LAB_00edcb68;
      puVar8 = (undefined1 *)*puVar7;
      lVar4 = puVar7[1];
    }
    uVar2 = *puVar8;
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x5d;
    uVar6 = 1;
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
    uVar9 = (ulong)CONCAT11(uVar1,uVar2);
    lVar5 = uVar9 - 2;
    *(int *)(*param_1 + 0x30) = (int)lVar5;
    (**(code **)(*param_1 + 8))(param_1,1);
    *puVar7 = puVar8 + 1;
    puVar7[1] = lVar4 + -1;
    if (2 < uVar9) {
      (**(code **)(param_1[5] + 0x20))(param_1,lVar5);
      uVar6 = 1;
    }
  }
  return uVar6;
}




void FUN_00edcb88(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 local_78 [16];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar11 = (undefined8 *)param_1[5];
  lVar6 = puVar11[1];
  if (lVar6 == 0) {
    uVar5 = (*(code *)puVar11[3])(param_1);
    if ((int)uVar5 == 0) goto LAB_00edccf0;
    lVar6 = puVar11[1];
  }
  lVar6 = lVar6 + -1;
  puVar12 = (undefined1 *)*puVar11 + 1;
  uVar3 = *(undefined1 *)*puVar11;
  if (lVar6 == 0) {
    uVar5 = (*(code *)puVar11[3])(param_1);
    if ((int)uVar5 == 0) goto LAB_00edccf0;
    puVar12 = (undefined1 *)*puVar11;
    lVar6 = puVar11[1];
  }
  puVar13 = puVar12 + 1;
  lVar6 = lVar6 + -1;
  uVar7 = (ulong)CONCAT11(uVar3,*puVar12);
  lVar10 = uVar7 - 2;
  uVar9 = (uint)lVar10;
  if (uVar7 < 2 || lVar10 == 0) {
    uVar9 = 0;
  }
  uVar1 = 0xe;
  if (uVar7 < 0x10) {
    uVar1 = uVar9;
  }
  if (uVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar14 = 0;
    uVar7 = (ulong)uVar1;
    puVar12 = puVar13;
    do {
      if (lVar6 == 0) {
        uVar5 = (*(code *)puVar11[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_00edccf0;
        puVar12 = (undefined1 *)*puVar11;
        lVar6 = puVar11[1];
      }
      puVar13 = puVar12 + 1;
      lVar6 = lVar6 + -1;
      local_78[uVar14] = *puVar12;
      uVar14 = uVar14 + 1;
      puVar12 = puVar13;
    } while (uVar14 < uVar7);
  }
  iVar2 = *(int *)((long)param_1 + 0x23c);
  lVar10 = lVar10 - uVar7;
  if (iVar2 == 0xee) {
    FUN_00edd6dc(param_1,local_78,uVar1,lVar10);
  }
  else if (iVar2 == 0xe0) {
    FUN_00edd484(param_1,local_78,uVar1,lVar10);
  }
  else {
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + 0x28) = 0x46;
    *(int *)(lVar8 + 0x2c) = iVar2;
    (**(code **)*param_1)(param_1);
  }
  *puVar11 = puVar13;
  puVar11[1] = lVar6;
  if (0 < lVar10) {
    (**(code **)(param_1[5] + 0x20))(param_1,lVar10);
  }
  uVar5 = 1;
LAB_00edccf0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00edcd24(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = param_1[0x4d];
  lVar4 = *(long *)(param_1[1] + 0x60) + -0x20;
  uVar3 = (uint)lVar4;
  if ((long)(ulong)param_3 <= lVar4) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    pcVar5 = FUN_00edcb88;
    if (param_2 != 0xee && param_2 != 0xe0) {
      pcVar5 = FUN_00edca98;
    }
  }
  else {
    if ((param_2 == 0xe0) && (uVar3 < 0xe)) {
      pcVar5 = FUN_00edcdf4;
      uVar3 = 0xe;
      goto LAB_00edcdc0;
    }
    uVar1 = 0xc;
    if (0xb < uVar3 || param_2 != 0xee) {
      uVar1 = uVar3;
    }
    pcVar5 = FUN_00edcdf4;
    uVar3 = uVar1;
  }
  if (param_2 == 0xfe) {
    *(code **)(lVar2 + 0x28) = pcVar5;
    *(uint *)(lVar2 + 0xb0) = uVar3;
    return;
  }
  if ((param_2 & 0xfffffff0) != 0xe0) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x46;
    *(uint *)(lVar2 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00edcdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
LAB_00edcdc0:
  *(code **)(lVar2 + ((long)(int)param_2 + -0xe0) * 8 + 0x30) = pcVar5;
  *(uint *)(lVar2 + ((long)(int)param_2 + -0xe0) * 4 + 0xb4) = uVar3;
  return;
}




undefined8 FUN_00edcdf4(long *param_1)

{
  long lVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  long *plVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  
  lVar20 = param_1[0x4d];
  plVar17 = (long *)param_1[5];
  puVar15 = *(undefined8 **)(lVar20 + 0xf8);
  puVar19 = (undefined1 *)*plVar17;
  lVar21 = plVar17[1];
  if (puVar15 == (undefined8 *)0x0) {
    if (lVar21 == 0) {
      uVar8 = (*(code *)plVar17[3])(param_1);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      puVar19 = (undefined1 *)*plVar17;
      lVar21 = plVar17[1];
    }
    puVar18 = puVar19 + 1;
    uVar5 = *puVar19;
    lVar21 = lVar21 + -1;
    if (lVar21 == 0) {
      uVar8 = (*(code *)plVar17[3])(param_1);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      puVar18 = (undefined1 *)*plVar17;
      lVar21 = plVar17[1];
    }
    puVar19 = puVar18 + 1;
    lVar21 = lVar21 + -1;
    uVar12 = (ulong)CONCAT11(uVar5,*puVar18) - 2;
    if ((ulong)CONCAT11(uVar5,*puVar18) < 2) {
      uVar14 = 0;
      puVar16 = (undefined8 *)0x0;
      goto LAB_00edcfb0;
    }
    puVar2 = (uint *)(lVar20 + 0xb0);
    if (*(int *)((long)param_1 + 0x23c) != 0xfe) {
      puVar2 = (uint *)(lVar20 + (long)(*(int *)((long)param_1 + 0x23c) + -0xe0) * 4 + 0xb4);
    }
    uVar11 = (uint)uVar12;
    uVar13 = uVar11;
    if (*puVar2 <= uVar11) {
      uVar13 = *puVar2;
    }
    uVar14 = (ulong)uVar13;
    puVar15 = (undefined8 *)(**(code **)(param_1[1] + 8))(param_1,1,uVar14 + 0x20);
    *puVar15 = 0;
    uVar3 = *(undefined4 *)((long)param_1 + 0x23c);
    puVar16 = puVar15 + 4;
    uVar22 = 0;
    *(uint *)((long)puVar15 + 0xc) = uVar11;
    *(uint *)(puVar15 + 2) = uVar13;
    puVar15[3] = puVar16;
    *(char *)(puVar15 + 1) = (char)uVar3;
    *(undefined8 **)(lVar20 + 0xf8) = puVar15;
    *(undefined4 *)(lVar20 + 0x100) = 0;
  }
  else {
    uVar22 = (ulong)*(uint *)(lVar20 + 0x100);
    uVar14 = (ulong)*(uint *)(puVar15 + 2);
    uVar12 = 0;
    puVar16 = (undefined8 *)(puVar15[3] + uVar22);
  }
  while( true ) {
    uVar13 = (uint)uVar14;
    uVar11 = (uint)uVar22;
    if (uVar13 <= uVar11) break;
    *plVar17 = (long)puVar19;
    plVar17[1] = lVar21;
    *(uint *)(lVar20 + 0x100) = uVar11;
    if (lVar21 == 0) {
      uVar8 = (*(code *)plVar17[3])(param_1);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      puVar19 = (undefined1 *)*plVar17;
      lVar21 = plVar17[1];
    }
    if ((uVar11 < uVar13) && (lVar21 != 0)) {
      lVar10 = 0;
      do {
        *(undefined1 *)((long)puVar16 + lVar10) = puVar19[lVar10];
        lVar1 = lVar10 + 1;
        if (uVar13 <= uVar11 + (int)lVar10 + 1) break;
        bVar7 = lVar21 + -1 != lVar10;
        lVar10 = lVar1;
      } while (bVar7);
      lVar21 = lVar21 - lVar1;
      puVar19 = puVar19 + lVar1;
      puVar16 = (undefined8 *)((long)puVar16 + lVar1);
      uVar22 = (ulong)(uVar11 + (int)lVar1);
    }
  }
  if (puVar15 != (undefined8 *)0x0) {
    plVar6 = (long *)param_1[0x33];
    if ((long *)param_1[0x33] == (long *)0x0) {
      plVar9 = param_1 + 0x33;
    }
    else {
      do {
        plVar9 = plVar6;
        plVar6 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    *plVar9 = (long)puVar15;
    puVar16 = (undefined8 *)puVar15[3];
    uVar12 = (ulong)(*(int *)((long)puVar15 + 0xc) - uVar13);
  }
LAB_00edcfb0:
  *(undefined8 *)(lVar20 + 0xf8) = 0;
  iVar4 = *(int *)((long)param_1 + 0x23c);
  if (iVar4 == 0xee) {
    FUN_00edd6dc(param_1,puVar16,uVar14,uVar12);
  }
  else if (iVar4 == 0xe0) {
    FUN_00edd484(param_1,puVar16,uVar14,uVar12);
  }
  else {
    lVar20 = *param_1;
    *(undefined4 *)(lVar20 + 0x28) = 0x5d;
    *(int *)(lVar20 + 0x2c) = iVar4;
    *(int *)(*param_1 + 0x30) = (int)uVar14 + (int)uVar12;
    (**(code **)(*param_1 + 8))(param_1,1);
  }
  *plVar17 = (long)puVar19;
  plVar17[1] = lVar21;
  if (0 < (long)uVar12) {
    (**(code **)(param_1[5] + 0x20))(param_1,uVar12);
  }
  return 1;
}

