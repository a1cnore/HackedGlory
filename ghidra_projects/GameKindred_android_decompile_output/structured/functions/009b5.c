// functions/009b5 — 42 functions
#include "libGameKindred.h"




long FUN_009b50a8(long param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)**(long **)(param_1 + 0x28);
  plVar1 = (long *)**(long **)(param_1 + 0x28);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar2 = strcmp((char *)*puVar3,param_2);
    if (iVar2 == 0) break;
    puVar3 = (undefined8 *)plVar1[1];
    plVar1 = plVar1 + 1;
  }
  return *plVar1;
}




undefined8 FUN_009b50fc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x300);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)*puVar2,PTR_s_HeroKilled_02be3280);
    if ((((iVar1 == 0) || (iVar1 = strcmp((char *)*puVar2,PTR_s_YourKill_02be3278), iVar1 == 0)) ||
        (iVar1 = strcmp((char *)*puVar2,PTR_s_HeroKills_Double_Kill_02be3288), iVar1 == 0)) ||
       (((iVar1 = strcmp((char *)*puVar2,PTR_s_HeroKills_Triple_Kill_02be3290), iVar1 == 0 ||
         (iVar1 = strcmp((char *)*puVar2,PTR_s_HeroKills_Quadra_Kill_02be3298), iVar1 == 0)) ||
        (iVar1 = strcmp((char *)*puVar2,PTR_s_HeroKills_Penta_Kill_02be32a0), iVar1 == 0)))) break;
    puVar2 = (undefined8 *)puVar2[7];
  }
  return 1;
}




void FUN_009b51c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x310) = 1;
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ebb0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_01985ca8();
  return;
}




void FUN_009b51fc(long param_1)

{
  *(undefined1 *)(param_1 + 0x310) = 0;
  return;
}




void FUN_009b5204(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((*(char *)(param_2 + 0x310) == '\0') &&
     (lVar1 = FUN_01985d44(param_2,DAT_0312ebb0), lVar1 != 0)) {
    FUN_009dbd5c(param_1,lVar1,param_3,0,1,0);
    FUN_009dbea4(lVar1);
    return;
  }
  return;
}




void FUN_009b5278(undefined8 param_1)

{
  DAT_0312ed98 = FUN_01988738(DAT_0312eda0,0);
  FUN_009b3db0(DAT_0312ed98,param_1);
  return;
}




void FUN_009b52b4(void)

{
  if (DAT_0312ed98 != 0) {
    FUN_019888f4();
    DAT_0312ed98 = 0;
  }
  return;
}




undefined8 FUN_009b52e0(void)

{
  return DAT_0312ed98;
}




void FUN_009b52ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  if (DAT_0312ed98 != 0) {
    FUN_009b4620(DAT_0312ed98,param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}




void FUN_009b531c(undefined8 param_1,undefined4 param_2)

{
  if (DAT_0312ed98 != 0) {
    FUN_009b4c0c(DAT_0312ed98,param_1,param_2);
    return;
  }
  return;
}




void FUN_009b533c(void)

{
  if (DAT_0312ed98 != 0) {
    FUN_009b51c0();
    return;
  }
  return;
}




void FUN_009b5350(void)

{
  if (DAT_0312ed98 != 0) {
    *(undefined1 *)(DAT_0312ed98 + 0x310) = 0;
  }
  return;
}




undefined8 FUN_009b5364(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)param_1[1];
    param_1 = param_1 + 1;
  }
  return *(undefined8 *)(*param_1 + 8);
}




void FUN_009b53b4(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027c1f50;
  FUN_00f0d3a4(param_1 + 0x9b);
  FUN_00f0d3a4(param_1 + 0x75);
  FUN_00f01868(param_1 + 100);
  lVar2 = 0;
  do {
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2d8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d0) = 0;
    }
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2c8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c0) = 0;
    }
    lVar2 = lVar2 + -0x48;
  } while (lVar2 != -0x2d0);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009b5444(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027c1f50;
  FUN_00f0d3a4(param_1 + 0x9b);
  FUN_00f0d3a4(param_1 + 0x75);
  FUN_00f01868(param_1 + 100);
  lVar2 = 0;
  do {
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2d8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d0) = 0;
    }
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2c8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c0) = 0;
    }
    lVar2 = lVar2 + -0x48;
  } while (lVar2 != -0x2d0);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009b54dc(void *param_1)

{
  FUN_00f01868();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009b5500(undefined8 param_1)

{
  FUN_009b3b88();
  return param_1;
}




void FUN_009b5524(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b5530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *param_1 = &PTR_FUN_027c2080;
  param_1[5] = &PTR_FUN_027c20b8;
  *(undefined8 *)((long)param_1 + 100) = 0;
  return;
}




void FUN_009b5588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2080;
  param_1[5] = &PTR_FUN_027c20b8;
  FUN_0198931c();
  FUN_01985bd0(param_1);
  return;
}




void FUN_009b55c4(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_027c2080;
  *param_1 = &PTR_FUN_027c20b8;
  FUN_0198931c();
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_009b5600(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2080;
  param_1[5] = &PTR_FUN_027c20b8;
  FUN_0198931c();
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009b5644(long param_1)

{
  FUN_009b5600(param_1 + -0x28);
  return;
}




void FUN_009b564c(long param_1)

{
  long lVar1;
  
  DAT_0312ebe0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ebe0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ebe0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b5f94;
  *(code **)(lVar1 + 0xb8) = FUN_009b5ff0;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ebe0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x70;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,0,FUN_009b5704,0);
  FUN_01986780(param_1,1,FUN_009b5708,0);
  FUN_01986780(param_1,5,thunk_FUN_009b5710,0);
  return;
}




void FUN_009b5704(void)

{
  return;
}




void FUN_009b5708(void)

{
  return;
}




void thunk_FUN_009b5710(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [64];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  long lStack_78;
  
  lVar3 = tpidr_el0;
  lStack_78 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (plVar4 = *(long **)(param_1 + 0x40), plVar4 == (long *)0x0)) goto LAB_009b5b28;
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 == 3) {
    (**(code **)(*plVar4 + 0x20))(plVar4,&fStack_b8,*(undefined4 *)(param_1 + 0x60),1);
LAB_009b57b4:
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(*(long **)(param_1 + 0x38),&fStack_b8);
  }
  else {
    if (iVar2 == 2) {
      (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined4 *)(param_1 + 0x60),&fStack_b8);
      goto LAB_009b57b4;
    }
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 0x18))(plVar4,&fStack_b8);
      goto LAB_009b57b4;
    }
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_009b5be0(*(undefined4 *)(param_1 + 100),param_1);
  }
  if ((*(float *)(param_1 + 0x58) != 0.0) || (*(float *)(param_1 + 0x54) != 0.0)) {
    fVar6 = (float)FUN_01988c78();
    fVar6 = *(float *)(param_1 + 0x5c) + fVar6 * *(float *)(param_1 + 0x58);
    fVar11 = fVar6 * 0.5;
    *(float *)(param_1 + 0x5c) = fVar6;
    fVar6 = sinf(fVar11);
    fVar11 = cosf(fVar11);
    fVar8 = *(float *)(param_1 + 0x48);
    fVar9 = *(float *)(param_1 + 0x4c);
    fVar10 = *(float *)(param_1 + 0x50);
    fVar17 = DAT_03218f78 * fVar8 + DAT_03218f7c * fVar9 + DAT_03218f80 * fVar10;
    fVar16 = fVar6 * DAT_03218f78;
    fVar15 = fVar6 * DAT_03218f7c;
    fVar6 = fVar6 * DAT_03218f80;
    if (1.0 <= fVar17) {
      fVar10 = 0.0;
      fVar17 = 0.0;
      fVar8 = 0.0;
      fVar9 = 1.0;
    }
    else if (fVar17 <= -1.0) {
      puVar1 = (undefined8 *)&DAT_03218f78;
      if (ABS(DAT_03218f78) <= ABS(DAT_03218f7c)) {
        puVar1 = &DAT_03218f68;
      }
      fVar10 = DAT_03218f80 * *(float *)((long)puVar1 + 4) - DAT_03218f7c * *(float *)(puVar1 + 1);
      fVar17 = DAT_03218f78 * *(float *)(puVar1 + 1) - DAT_03218f80 * fVar10;
      fVar12 = DAT_03218f7c * fVar10;
      fVar7 = DAT_03218f78 * fVar17;
      fVar8 = sinf(1.5707964);
      fVar9 = cosf(1.5707964);
      fVar10 = fVar8 * fVar10;
      fVar17 = fVar8 * fVar17;
      fVar8 = fVar8 * (fVar12 - fVar7);
    }
    else {
      fVar14 = DAT_03218f7c * fVar10 - DAT_03218f80 * fVar9;
      fVar13 = DAT_03218f80 * fVar8 - DAT_03218f78 * fVar10;
      fVar12 = DAT_03218f78 * fVar9 - DAT_03218f7c * fVar8;
      fVar8 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
      fVar7 = SQRT(fVar8);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar8);
      }
      fVar9 = fVar17 + 1.0 + fVar17 + 1.0;
      fVar8 = SQRT(fVar9);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar9);
      }
      fVar9 = fVar8 * 0.5;
      fVar8 = 1.0 / fVar8;
      fVar10 = (fVar14 / fVar7) * fVar8;
      fVar17 = (fVar13 / fVar7) * fVar8;
      fVar8 = (fVar12 / fVar7) * fVar8;
    }
    fVar7 = (fVar6 * fVar17 + fVar11 * fVar10 + fVar16 * fVar9) - fVar15 * fVar8;
    fVar12 = fVar16 * fVar8 + fVar11 * fVar17 + (fVar15 * fVar9 - fVar6 * fVar10);
    fVar13 = fVar11 * fVar8 + ((fVar15 * fVar10 + fVar6 * fVar9) - fVar16 * fVar17);
    fVar6 = ((fVar11 * fVar9 - fVar16 * fVar10) - fVar15 * fVar17) - fVar6 * fVar8;
    fVar11 = fVar12 + fVar12;
    fVar8 = fVar13 + fVar13;
    fStack_a0 = fVar6 * (fVar7 + fVar7);
    fStack_90 = 1.0 - fVar7 * (fVar7 + fVar7);
    fStack_94 = fVar12 * fVar8 - fStack_a0;
    fStack_a0 = fVar12 * fVar8 + fStack_a0;
    fStack_a8 = fVar7 * fVar11 - fVar6 * fVar8;
    fStack_b4 = fVar7 * fVar11 + fVar6 * fVar8;
    fStack_b0 = fVar7 * fVar8 - fVar6 * fVar11;
    fStack_98 = fVar7 * fVar8 + fVar6 * fVar11;
    fStack_b8 = (1.0 - fVar12 * fVar11) - fVar13 * fVar8;
    fStack_a4 = fStack_90 - fVar13 * fVar8;
    fStack_90 = fStack_90 - fVar12 * fVar11;
    uStack_ac = 0;
    uStack_9c = 0;
    uStack_8c = 0;
    uStack_84 = 0;
    uStack_7c = 0x3f800000;
    uStack_d0 = *(undefined4 *)(param_1 + 0x54);
    uStack_c8 = 0;
    uStack_c4 = 0x3f800000;
    uStack_f8 = 0;
    uStack_100 = 0x3f800000;
    uStack_e8 = 0;
    uStack_f0 = 0x3f80000000000000;
    uStack_cc = 0;
    uStack_d8 = 0x3f800000;
    uStack_e0 = 0;
    plVar4 = *(long **)(param_1 + 0x38);
    FUN_009b3960(auStack_180,&uStack_100,&fStack_b8);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    FUN_009b3960(auStack_140,auStack_180,uVar5);
    (**(code **)(*plVar4 + 0x20))(plVar4,auStack_140);
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x30))();
LAB_009b5b28:
  if (*(long *)(lVar3 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009b5710(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [64];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float fStack_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (plVar4 = *(long **)(param_1 + 0x40), plVar4 == (long *)0x0)) goto LAB_009b5b28;
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 == 3) {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_b8,*(undefined4 *)(param_1 + 0x60),1);
LAB_009b57b4:
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(*(long **)(param_1 + 0x38),&local_b8);
  }
  else {
    if (iVar2 == 2) {
      (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined4 *)(param_1 + 0x60),&local_b8);
      goto LAB_009b57b4;
    }
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_b8);
      goto LAB_009b57b4;
    }
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_009b5be0(*(undefined4 *)(param_1 + 100),param_1);
  }
  if ((*(float *)(param_1 + 0x58) != 0.0) || (*(float *)(param_1 + 0x54) != 0.0)) {
    fVar6 = (float)FUN_01988c78();
    fVar6 = *(float *)(param_1 + 0x5c) + fVar6 * *(float *)(param_1 + 0x58);
    fVar11 = fVar6 * 0.5;
    *(float *)(param_1 + 0x5c) = fVar6;
    fVar6 = sinf(fVar11);
    fVar11 = cosf(fVar11);
    fVar8 = *(float *)(param_1 + 0x48);
    fVar9 = *(float *)(param_1 + 0x4c);
    fVar10 = *(float *)(param_1 + 0x50);
    fVar17 = DAT_03218f78 * fVar8 + DAT_03218f7c * fVar9 + DAT_03218f80 * fVar10;
    fVar16 = fVar6 * DAT_03218f78;
    fVar15 = fVar6 * DAT_03218f7c;
    fVar6 = fVar6 * DAT_03218f80;
    if (1.0 <= fVar17) {
      fVar10 = 0.0;
      fVar17 = 0.0;
      fVar8 = 0.0;
      fVar9 = 1.0;
    }
    else if (fVar17 <= -1.0) {
      puVar1 = (undefined8 *)&DAT_03218f78;
      if (ABS(DAT_03218f78) <= ABS(DAT_03218f7c)) {
        puVar1 = &DAT_03218f68;
      }
      fVar10 = DAT_03218f80 * *(float *)((long)puVar1 + 4) - DAT_03218f7c * *(float *)(puVar1 + 1);
      fVar17 = DAT_03218f78 * *(float *)(puVar1 + 1) - DAT_03218f80 * fVar10;
      fVar12 = DAT_03218f7c * fVar10;
      fVar7 = DAT_03218f78 * fVar17;
      fVar8 = sinf(1.5707964);
      fVar9 = cosf(1.5707964);
      fVar10 = fVar8 * fVar10;
      fVar17 = fVar8 * fVar17;
      fVar8 = fVar8 * (fVar12 - fVar7);
    }
    else {
      fVar14 = DAT_03218f7c * fVar10 - DAT_03218f80 * fVar9;
      fVar13 = DAT_03218f80 * fVar8 - DAT_03218f78 * fVar10;
      fVar12 = DAT_03218f78 * fVar9 - DAT_03218f7c * fVar8;
      fVar8 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
      fVar7 = SQRT(fVar8);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar8);
      }
      fVar9 = fVar17 + 1.0 + fVar17 + 1.0;
      fVar8 = SQRT(fVar9);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar9);
      }
      fVar9 = fVar8 * 0.5;
      fVar8 = 1.0 / fVar8;
      fVar10 = (fVar14 / fVar7) * fVar8;
      fVar17 = (fVar13 / fVar7) * fVar8;
      fVar8 = (fVar12 / fVar7) * fVar8;
    }
    fVar7 = (fVar6 * fVar17 + fVar11 * fVar10 + fVar16 * fVar9) - fVar15 * fVar8;
    fVar12 = fVar16 * fVar8 + fVar11 * fVar17 + (fVar15 * fVar9 - fVar6 * fVar10);
    fVar13 = fVar11 * fVar8 + ((fVar15 * fVar10 + fVar6 * fVar9) - fVar16 * fVar17);
    fVar6 = ((fVar11 * fVar9 - fVar16 * fVar10) - fVar15 * fVar17) - fVar6 * fVar8;
    fVar11 = fVar12 + fVar12;
    fVar8 = fVar13 + fVar13;
    fStack_a0 = fVar6 * (fVar7 + fVar7);
    fStack_90 = 1.0 - fVar7 * (fVar7 + fVar7);
    local_94 = fVar12 * fVar8 - fStack_a0;
    fStack_a0 = fVar12 * fVar8 + fStack_a0;
    local_a8 = fVar7 * fVar11 - fVar6 * fVar8;
    fStack_b4 = fVar7 * fVar11 + fVar6 * fVar8;
    local_b0 = fVar7 * fVar8 - fVar6 * fVar11;
    local_98 = fVar7 * fVar8 + fVar6 * fVar11;
    local_b8 = (1.0 - fVar12 * fVar11) - fVar13 * fVar8;
    local_a4 = fStack_90 - fVar13 * fVar8;
    fStack_90 = fStack_90 - fVar12 * fVar11;
    local_ac = 0;
    local_9c = 0;
    local_8c = 0;
    local_84 = 0;
    local_7c = 0x3f800000;
    local_d0 = *(undefined4 *)(param_1 + 0x54);
    local_c8 = 0;
    uStack_c4 = 0x3f800000;
    uStack_f8 = 0;
    local_100 = 0x3f800000;
    uStack_e8 = 0;
    uStack_f0 = 0x3f80000000000000;
    uStack_cc = 0;
    uStack_d8 = 0x3f800000;
    local_e0 = 0;
    plVar4 = *(long **)(param_1 + 0x38);
    FUN_009b3960(auStack_180,&local_100,&local_b8);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    FUN_009b3960(auStack_140,auStack_180,uVar5);
    (**(code **)(*plVar4 + 0x20))(plVar4,auStack_140);
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x30))();
LAB_009b5b28:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009b5b60(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 param_5
                 )

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(uint *)(param_1 + 0x68) = param_4;
  if ((param_4 & 0xfffffffe) == 2) {
    *(undefined4 *)(param_1 + 0x60) = param_5;
  }
  return;
}




undefined8 FUN_009b5b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}




undefined8 FUN_009b5b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}




void FUN_009b5b8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(param_5 + 1);
  uVar1 = *param_5;
  *(undefined4 *)(param_4 + 0x54) = param_1;
  *(undefined4 *)(param_4 + 0x58) = param_2;
  *(undefined4 *)(param_4 + 0x5c) = param_3;
  *(undefined8 *)(param_4 + 0x48) = uVar1;
  return;
}




void FUN_009b5ba8(undefined4 param_1,long param_2)

{
  FUN_009b5be0();
  *(undefined1 *)(param_2 + 0x6c) = 1;
  *(undefined4 *)(param_2 + 100) = param_1;
  return;
}




void FUN_009b5be0(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar2 = cosf(param_1);
  fVar3 = sinf(param_1);
  fVar5 = fVar2 * fVar2 + 0.0 + fVar3 * fVar3;
  fVar4 = (float)DAT_03218f68;
  fVar6 = DAT_03218f68._4_4_;
  fVar10 = DAT_03218f70;
  if (1e-06 <= fVar5) {
    fVar10 = SQRT(fVar5);
    if (NAN(fVar10)) {
      fVar10 = sqrtf(fVar5);
    }
    fVar4 = fVar2 / fVar10;
    fVar6 = 0.0 / fVar10;
    fVar10 = fVar3 / fVar10;
  }
  fVar5 = DAT_03218f80;
  fVar3 = DAT_03218f7c;
  fVar2 = DAT_03218f78;
  fVar7 = fVar10 * DAT_03218f7c - fVar6 * DAT_03218f80;
  fVar9 = fVar4 * DAT_03218f80 - fVar10 * DAT_03218f78;
  fVar10 = fVar6 * DAT_03218f78 - fVar4 * DAT_03218f7c;
  fVar6 = fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9;
  fVar4 = SQRT(fVar6);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar6);
  }
  fVar7 = fVar7 / fVar4;
  fVar9 = fVar9 / fVar4;
  fVar10 = fVar10 / fVar4;
  fVar11 = fVar5 * fVar9 - fVar3 * fVar10;
  fVar12 = fVar2 * fVar10 - fVar5 * fVar7;
  fVar8 = fVar3 * fVar7 - fVar2 * fVar9;
  fVar6 = fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar4 = SQRT(fVar6);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar6);
  }
  (**(code **)(**(long **)(param_2 + 0x38) + 0x18))(*(long **)(param_2 + 0x38),auStack_e8);
  fVar6 = local_c8 * local_c8 + fStack_c4 * fStack_c4 + local_c0 * local_c0;
  local_80 = SQRT(fVar6);
  local_78 = local_b8;
  local_70 = local_b0;
  uStack_6c = 0x3f800000;
  local_9c = 0;
  local_8c = 0;
  local_7c = 0;
  if (NAN(local_80)) {
    local_80 = sqrtf(fVar6);
  }
  local_a8 = local_80 * fVar7;
  fStack_a4 = local_80 * fVar9;
  local_98 = local_80 * fVar2;
  local_a0 = local_80 * fVar10;
  fStack_94 = local_80 * fVar3;
  local_90 = local_80 * fVar5;
  local_88 = local_80 * (fVar11 / fVar4);
  fStack_84 = local_80 * (fVar12 / fVar4);
  local_80 = local_80 * (fVar8 / fVar4);
  (**(code **)(**(long **)(param_2 + 0x38) + 0x20))(*(long **)(param_2 + 0x38),&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009b5e34(long param_1)

{
  long lVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),auStack_68);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(*(long **)(param_1 + 0x38),auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b5ea0(long param_1)

{
  long lVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x28))
            (*(long **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x60),auStack_68);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(*(long **)(param_1 + 0x38),auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b5f10(long param_1)

{
  long lVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x20))
            (*(long **)(param_1 + 0x40),auStack_68,*(undefined4 *)(param_1 + 0x60),1);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(*(long **)(param_1 + 0x38),auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_009b5f84(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009b5f8c(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_009b5f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *param_1 = &PTR_FUN_027c2080;
  param_1[5] = &PTR_FUN_027c20b8;
  *(undefined8 *)((long)param_1 + 100) = 0;
  return param_1;
}




void FUN_009b5ff0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b5ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b5ffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  param_1[5] = &PTR_FUN_027c21b0;
  FUN_019892f4(param_1 + 6);
  *param_1 = &PTR_FUN_027c20e8;
  param_1[6] = &PTR_FUN_027c2180;
  param_1[5] = &PTR_FUN_027c2138;
  param_1[8] = 0;
  return;
}

