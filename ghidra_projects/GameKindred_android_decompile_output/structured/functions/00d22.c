// functions/00d22 — 53 functions
#include "libGameKindred.h"




bool FUN_00d2201c(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x38);
  if ((plVar7 != (long *)0x0) && (plVar4 = (long *)*plVar7, plVar4 != (long *)0x0)) {
    if ((int)plVar7[1] == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) && (*(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
        return false;
      }
      cVar2 = FUN_00d55870(lVar5);
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        uVar6 = 0;
      }
      else if ((int)param_2[1] == (int)plVar7[1]) {
        uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else {
        *param_2 = 0;
        uVar6 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
      }
      cVar3 = FUN_00d55870(uVar6);
      if (cVar2 == cVar3) {
        return false;
      }
    }
    else {
      *plVar7 = 0;
      *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
    }
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if ((plVar7 != (long *)0x0) && (plVar4 = (long *)*plVar7, plVar4 != (long *)0x0)) {
    if ((int)plVar7[1] == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) && (*(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
        return false;
      }
      cVar2 = FUN_00d55870(lVar5);
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        uVar6 = 0;
      }
      else if ((int)param_2[1] == (int)plVar7[1]) {
        uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else {
        *param_2 = 0;
        uVar6 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
      }
      cVar3 = FUN_00d55870(uVar6);
      return cVar2 == cVar3;
    }
    *plVar7 = 0;
    *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
  }
  return true;
}




void FUN_00d2220c(undefined4 param_1,undefined4 param_2,long param_3,byte param_4)

{
  *(undefined4 *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x28) = param_2;
  *(byte *)(param_3 + 0x34) = param_4 & 1;
  return;
}




void FUN_00d2221c(long param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 1;
  return;
}




undefined4 FUN_00d22228(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




void FUN_00d22230(long param_1)

{
  FUN_009bc24c();
                    /* WARNING: Could not recover jumptable at 0x00d22258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d2225c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xbf80000000000000;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02819f50;
  return;
}




void FUN_00d222a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_00d222ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00d222b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_2);
  return;
}




void FUN_00d222b8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819fe0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




undefined8 FUN_00d222ec(long param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x6c);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x28) = fVar2;
  if (fVar2 <= 0.0) {
    uVar1 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
    if ((int)uVar1 == 1) {
      if (*(float *)(param_1 + 0x28) == 0.0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d22358(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d22360(void)

{
  return;
}




void FUN_00d22364(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_0281a068;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




undefined8 FUN_00d22398(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
    if ((int)uVar1 != 2) {
      if (((int)uVar1 == 1) && (*(char *)(param_1 + 0x24) == '\0')) {
        uVar1 = 1;
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d223f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d22400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d22404(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_0281a0f0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




undefined8 FUN_00d22438(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
    if ((int)uVar1 == 1) {
      *(char *)(param_1 + 0x24) = (char)uVar1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d22478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d22484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d22488(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281a178;
  return;
}




void FUN_00d224c0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x28) = param_2;
  return;
}




ulong FUN_00d224c8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0x2c) <= 0.0) {
    uVar2 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
    if ((int)uVar2 == 2) {
      return uVar2;
    }
    if ((int)uVar2 != 1) {
      return 0;
    }
    fVar4 = *(float *)(param_1 + 0x24);
    fVar5 = *(float *)(param_1 + 0x28);
    iVar1 = rand();
    fVar4 = fVar4 + (fVar5 - fVar4) * (float)iVar1 * 4.656613e-10;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x6c);
  }
  *(float *)(param_1 + 0x2c) = fVar4;
  uVar3 = 2;
  if (fVar4 <= 0.0) {
    uVar3 = 1;
  }
  return (ulong)uVar3;
}




void FUN_00d22558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d22564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_00d22568(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_0281a200;
  param_1[5] = 0;
  return;
}




void FUN_00d2259c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d225a4(long param_1)

{
  FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_00d225ac(void)

{
  return;
}




undefined8 FUN_00d225b0(void)

{
  return 1;
}




void FUN_00d225b8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d225dc(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d22600(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d22624(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281a420;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_00d22664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281a420;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d226ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281a4a8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  return;
}




void FUN_00d226ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281a4a8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00d0aae0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d22734(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd22738);
  (*pcVar1)();
}




void FUN_00d22738(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d2275c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d22780(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d227a4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d227c8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d227ec(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d22810(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d22834(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d22858(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d2287c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d228a0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d228c4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d228e8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d2290c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d22930(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x18;
        puVar4[2] = puVar2[2];
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
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




void FUN_00d229c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
LAB_00d22ab0:
  puVar15 = param_2 + -3;
  puVar13 = param_1;
LAB_00d22ad0:
  param_1 = puVar13;
  uVar9 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar9 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00d22d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bca700 + *(int *)(&DAT_01bca700 + ((long)uVar9 >> 3) * -0x5555555555555554)))
              ();
    return;
  }
  if ((long)uVar9 < 0x2e8) {
    FUN_00d232ac(param_1,param_2,param_3);
    goto LAB_00d22dd4;
  }
  puVar13 = param_1 + (uVar9 / 0x30) * 3;
  if ((long)uVar9 < 0x5da9) {
    iVar5 = FUN_00d22e60(param_1,puVar13,puVar15,param_3);
  }
  else {
    lVar1 = (uVar9 / 0x60) * 2 + uVar9 / 0x60;
    iVar5 = FUN_00d23124(param_1,param_1 + lVar1,puVar13,puVar13 + lVar1,puVar15,param_3);
  }
  fVar18 = *(float *)(param_1 + 1);
  puVar10 = puVar15;
  puVar17 = param_2 + -6;
  if (fVar18 <= *(float *)(param_1 + (uVar9 / 0x30) * 3 + 1)) {
    do {
      puVar10 = puVar17;
      if (param_1 == puVar10) {
        puVar13 = param_1 + 3;
        if (*(float *)(param_2 + -2) < fVar18) goto LAB_00d22d60;
        if (puVar13 == puVar15) goto LAB_00d22dd4;
        puVar13 = param_1 + 6;
        goto LAB_00d22d14;
      }
      puVar17 = puVar10 + -3;
    } while (*(float *)(puVar10 + 1) <= *(float *)(param_1 + (uVar9 / 0x30) * 3 + 1));
    uVar12 = param_1[2];
    iVar5 = iVar5 + 1;
    uVar21 = param_1[1];
    uVar19 = *param_1;
    param_1[2] = puVar10[2];
    uVar20 = *puVar10;
    param_1[1] = puVar10[1];
    *param_1 = uVar20;
    puVar10[2] = uVar12;
    puVar10[1] = uVar21;
    *puVar10 = uVar19;
  }
  puVar17 = param_1 + 3;
  puVar16 = puVar17;
  if (puVar17 < puVar10) {
    while( true ) {
      puVar17 = puVar16 + -3;
      do {
        puVar14 = puVar17;
        puVar17 = puVar14 + 3;
      } while (*(float *)(puVar13 + 1) < *(float *)(puVar14 + 4));
      puVar16 = puVar14 + 6;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + -3;
      } while (*(float *)(puVar11 + -2) <= *(float *)(puVar13 + 1));
      if (puVar10 < puVar17) break;
      uVar12 = puVar14[5];
      iVar5 = iVar5 + 1;
      puVar2 = puVar10;
      if (puVar13 != puVar17) {
        puVar2 = puVar13;
      }
      uVar21 = puVar14[4];
      uVar19 = *puVar17;
      puVar14[5] = puVar11[-1];
      uVar20 = *puVar10;
      puVar14[4] = puVar11[-2];
      *puVar17 = uVar20;
      puVar11[-1] = uVar12;
      puVar11[-2] = uVar21;
      *puVar10 = uVar19;
      puVar13 = puVar2;
    }
  }
  if ((puVar17 != puVar13) && (*(float *)(puVar17 + 1) < *(float *)(puVar13 + 1))) {
    uVar12 = puVar17[2];
    iVar5 = iVar5 + 1;
    uVar21 = puVar17[1];
    uVar19 = *puVar17;
    puVar17[2] = puVar13[2];
    uVar20 = *puVar13;
    puVar17[1] = puVar13[1];
    *puVar17 = uVar20;
    puVar13[2] = uVar12;
    puVar13[1] = uVar21;
    *puVar13 = uVar19;
  }
  if (iVar5 != 0) goto LAB_00d22cbc;
  uVar9 = FUN_00d233b0(param_1,puVar17,param_3);
  uVar6 = FUN_00d233b0(puVar17 + 3,param_2,param_3);
  if ((uVar6 & 1) == 0) goto code_r0x00d22cb8;
  bVar4 = (uVar9 & 1) == 0;
  if (bVar4) {
    param_2 = puVar17;
  }
  uVar7 = 1;
  if (bVar4) {
    uVar7 = 2;
  }
  goto LAB_00d22a74;
LAB_00d22d14:
  if (*(float *)(puVar13 + -2) < fVar18) goto LAB_00d22d30;
  puVar13 = puVar13 + 3;
  if (param_2 == puVar13) goto LAB_00d22dd4;
  goto LAB_00d22d14;
LAB_00d22d30:
  uVar12 = puVar13[-1];
  uVar21 = puVar13[-2];
  uVar19 = puVar13[-3];
  puVar13[-1] = param_2[-1];
  uVar20 = *puVar15;
  puVar13[-2] = param_2[-2];
  puVar13[-3] = uVar20;
  param_2[-1] = uVar12;
  param_2[-2] = uVar21;
  *puVar15 = uVar19;
LAB_00d22d60:
  if (puVar13 == puVar15) {
LAB_00d22dd4:
    if (*(long *)(lVar3 + 0x28) == lVar8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  while( true ) {
    puVar10 = puVar13 + -3;
    do {
      puVar17 = puVar10;
      puVar10 = puVar17 + 3;
    } while (*(float *)(param_1 + 1) <= *(float *)(puVar17 + 4));
    puVar13 = puVar17 + 6;
    do {
      puVar16 = puVar15;
      puVar15 = puVar16 + -3;
    } while (*(float *)(puVar16 + -2) < *(float *)(param_1 + 1));
    if (puVar15 <= puVar10) break;
    uVar12 = puVar17[5];
    uVar21 = puVar17[4];
    uVar19 = *puVar10;
    puVar17[5] = puVar16[-1];
    uVar20 = *puVar15;
    puVar17[4] = puVar16[-2];
    *puVar10 = uVar20;
    puVar16[-1] = uVar12;
    puVar16[-2] = uVar21;
    *puVar15 = uVar19;
  }
  uVar7 = 4;
  param_1 = puVar10;
LAB_00d22a74:
  if ((4 < uVar7) || ((1 << (ulong)uVar7 & 0x15U) == 0)) goto LAB_00d22dd4;
  goto LAB_00d22ab0;
code_r0x00d22cb8:
  puVar13 = puVar17 + 3;
  if ((uVar9 & 1) == 0) {
LAB_00d22cbc:
    if (((long)param_2 - (long)puVar17 >> 3) * -0x5555555555555555 <=
        ((long)puVar17 - (long)param_1 >> 3) * -0x5555555555555555) {
      FUN_00d229c0(puVar17 + 3,param_2,param_3);
      param_2 = puVar17;
      goto LAB_00d22ab0;
    }
    FUN_00d229c0(param_1,puVar17,param_3);
    puVar13 = puVar17 + 3;
  }
  goto LAB_00d22ad0;
}




undefined8 FUN_00d22e60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(param_2 + 1);
  if (fVar4 <= *(float *)(param_1 + 1)) {
    uVar3 = 0;
    if (*(float *)(param_3 + 1) <= fVar4) goto LAB_00d22fc4;
    uVar3 = param_2[2];
    uVar7 = param_2[1];
    uVar5 = *param_2;
    param_2[2] = param_3[2];
    uVar6 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar6;
    param_3[2] = uVar3;
    param_3[1] = uVar7;
    *param_3 = uVar5;
    if (*(float *)(param_1 + 1) < *(float *)(param_2 + 1)) {
      uVar3 = param_1[2];
      uVar7 = param_1[1];
      uVar5 = *param_1;
      param_1[2] = param_2[2];
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_2[2] = uVar3;
      param_2[1] = uVar7;
      *param_2 = uVar5;
      goto LAB_00d22fb8;
    }
  }
  else if (*(float *)(param_3 + 1) <= fVar4) {
    uVar3 = param_1[2];
    uVar7 = param_1[1];
    uVar5 = *param_1;
    param_1[2] = param_2[2];
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_2[2] = uVar3;
    param_2[1] = uVar7;
    *param_2 = uVar5;
    if (*(float *)(param_2 + 1) < *(float *)(param_3 + 1)) {
      uVar3 = param_2[2];
      uVar7 = param_2[1];
      uVar5 = *param_2;
      param_2[2] = param_3[2];
      uVar6 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar6;
      param_3[2] = uVar3;
      param_3[1] = uVar7;
      *param_3 = uVar5;
LAB_00d22fb8:
      uVar3 = 2;
      goto LAB_00d22fc4;
    }
  }
  else {
    uVar3 = param_1[2];
    uVar7 = param_1[1];
    uVar5 = *param_1;
    param_1[2] = param_3[2];
    uVar6 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar6;
    param_3[2] = uVar3;
    param_3[1] = uVar7;
    *param_3 = uVar5;
  }
  uVar3 = 1;
LAB_00d22fc4:
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d22fe8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d22e60();
  if (*(float *)(param_3 + 1) < *(float *)(param_4 + 1)) {
    uVar5 = param_3[2];
    uVar8 = param_3[1];
    uVar6 = *param_3;
    param_3[2] = param_4[2];
    uVar7 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    param_4[2] = uVar5;
    param_4[1] = uVar8;
    *param_4 = uVar6;
    iVar2 = (int)uVar3;
    if (*(float *)(param_3 + 1) <= *(float *)(param_2 + 1)) {
      uVar3 = (ulong)(iVar2 + 1);
    }
    else {
      uVar5 = param_2[2];
      uVar8 = param_2[1];
      uVar6 = *param_2;
      param_2[2] = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_3[2] = uVar5;
      param_3[1] = uVar8;
      *param_3 = uVar6;
      if (*(float *)(param_2 + 1) <= *(float *)(param_1 + 1)) {
        uVar3 = (ulong)(iVar2 + 2);
      }
      else {
        uVar5 = param_1[2];
        uVar3 = (ulong)(iVar2 + 3);
        uVar8 = param_1[1];
        uVar6 = *param_1;
        param_1[2] = param_2[2];
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_2[2] = uVar5;
        param_2[1] = uVar8;
        *param_2 = uVar6;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

