// functions/00a40 — 6 functions
#include "libGameKindred.h"




void FUN_00a40414(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar2 = *(byte *)(lVar3 + 0x303);
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  lVar3 = *(long *)(lVar3 + 0x40);
  if ((((uint)bVar2 << 0x10) >> 0x12 & 1) == 0) {
    fVar6 = *(float *)(lVar3 + 0x1a0);
    fVar5 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
    fVar8 = DAT_031324e0;
    fVar7 = DAT_03132420;
  }
  else {
    fVar6 = *(float *)(lVar3 + 0x250);
    fVar5 = *(float *)(lVar3 + 0xe8) + *(float *)(lVar3 + 0x19c) * (*(float *)(lVar3 + 0x304) + 1.0)
    ;
    fVar8 = DAT_03132590;
    fVar7 = DAT_031324d0;
  }
  fVar5 = (fVar6 + 1.0) * fVar5;
  if (fVar8 <= fVar5) {
    fVar5 = fVar8;
  }
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  fVar8 = *(float *)(*(long *)(lVar3 + 0x40) + 0x31c);
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  lVar3 = *(long *)(lVar3 + 0x40);
  fVar5 = (*(float *)(lVar3 + 0x220) + 1.0) *
          (*(float *)(lVar3 + 0xb8) + *(float *)(lVar3 + 0x16c) * (*(float *)(lVar3 + 0x2d4) + 1.0))
  ;
  if (DAT_03132560 <= fVar5) {
    fVar5 = DAT_03132560;
  }
  fVar6 = DAT_031324a0;
  if (DAT_031324a0 <= fVar5) {
    fVar6 = fVar5;
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  fVar9 = *(float *)(*(long *)(lVar3 + 0x40) + 0x318);
  *(float *)(param_1 + 0xf0) = fVar7 + fVar6;
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar2 = *(byte *)(lVar3 + 0x303);
  lVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  fVar5 = *(float *)(param_1 + 0xf0);
  lVar3 = 0x308;
  if ((bVar2 & 4) != 0) {
    lVar3 = 0x30c;
  }
  fVar6 = *(float *)(*(long *)(lVar4 + 0x40) + lVar3);
  *(float *)(param_1 + 0x104) = fVar9 / fVar5;
  *(float *)(param_1 + 0xf4) = fVar6;
  fVar7 = fVar8;
  if (fVar6 <= fVar8) {
    fVar7 = fVar6;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(float *)(param_1 + 0xfc) = (fVar6 - fVar8) / fVar5;
  *(float *)(param_1 + 0x100) = fVar7 / fVar5;
  *(float *)(param_1 + 0x108) = 0.0 / fVar5;
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  uVar1 = *(undefined4 *)(*(long *)(lVar3 + 0x40) + 0x310);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  return;
}




undefined4 FUN_00a4064c(long param_1)

{
  undefined8 *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0xb0)) {
  case 0:
    puVar1 = &DAT_031323b0;
    if ((*(byte *)(param_1 + 0x140) & 1) != 0) {
      puVar1 = &DAT_031323b8;
    }
    break;
  case 1:
    puVar1 = &DAT_031323c0;
    break;
  case 2:
    puVar1 = &DAT_031323c8;
    break;
  case 3:
    puVar1 = &DAT_031323d0;
    break;
  case 4:
    puVar1 = &DAT_031323d8;
    break;
  case 5:
    puVar1 = &DAT_031323e0;
    break;
  default:
    return 0;
  }
  return *(undefined4 *)puVar1;
}




float FUN_00a406e0(long *param_1)

{
  float fVar1;
  
  if ((int)param_1[0x16] != 0) {
    return 1.0;
  }
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return fVar1 / (float)DAT_031323e8;
}




void FUN_00a40724(long param_1,uint param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x84) >> 3 & 1) == 0) {
    fVar1 = (float)FUN_01988c78();
    *(float *)(param_1 + 0x110) = fVar1 + *(float *)(param_1 + 0x110);
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 4;
    return;
  }
  if ((*(byte *)(param_1 + 0x140) >> 2 & 1) == 0) {
    uVar2 = FUN_01988c78();
    *(undefined4 *)(param_1 + 0x110) = uVar2;
  }
  else {
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xfb;
    if (3.0 < *(float *)(param_1 + 0x110)) {
      *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x10c);
      uVar2 = FUN_01988c78();
      *(undefined4 *)(param_1 + 0x110) = uVar2;
      FUN_00a40414(param_1);
      return;
    }
  }
  FUN_00a407cc(param_1,param_2 & 1);
  return;
}




void FUN_00a407cc(long param_1,ulong param_2)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    plVar7 = *(long **)(param_1 + 200);
    uVar8 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_1 + 0xd0) == (int)plVar7[1]) {
        uVar8 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 200) = 0;
        uVar8 = 0;
        *(int *)(param_1 + 0xd0) = DAT_03214ce8;
      }
    }
    uVar9 = FUN_00d9e9d0(uVar8);
    if ((uVar9 & 1) == 0) goto LAB_00a40860;
    bVar3 = (*(byte *)(param_1 + 0x140) & 1) == 0;
    puVar14 = &DAT_03132400;
    puVar15 = &DAT_031323f0;
  }
  else {
LAB_00a40860:
    uVar6 = FUN_00cedce4();
    plVar7 = *(long **)(param_1 + 200);
    if (plVar7 == (long *)0x0) {
      uVar8 = 0;
    }
    else if (*(int *)(param_1 + 0xd0) == (int)plVar7[1]) {
      uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else {
      *(undefined8 *)(param_1 + 200) = 0;
      uVar8 = 0;
      *(int *)(param_1 + 0xd0) = DAT_03214ce8;
    }
    uVar9 = FUN_00ced2e0(uVar6,uVar8);
    bVar3 = *(int *)(param_1 + 0xb0) == 0;
    puVar14 = &DAT_03132408;
    puVar15 = &DAT_031323f8;
    if ((uVar9 & 1) == 0) {
      puVar14 = &DAT_03132404;
      puVar15 = &DAT_031323f4;
    }
  }
  if (!bVar3) {
    puVar14 = puVar15;
  }
  *(undefined4 *)(param_1 + 0x124) = *puVar14;
  lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar2 = *(byte *)(lVar10 + 0x303);
  lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  lVar10 = *(long *)(lVar10 + 0x40);
  if ((((uint)bVar2 << 0x10) >> 0x12 & 1) == 0) {
    fVar18 = *(float *)(lVar10 + 0x1a0);
    fVar16 = *(float *)(lVar10 + 0x38) +
             *(float *)(lVar10 + 0xec) * (*(float *)(lVar10 + 0x254) + 1.0);
    fVar23 = DAT_031324e0;
    fVar17 = DAT_03132420;
  }
  else {
    fVar18 = *(float *)(lVar10 + 0x250);
    fVar16 = *(float *)(lVar10 + 0xe8) +
             *(float *)(lVar10 + 0x19c) * (*(float *)(lVar10 + 0x304) + 1.0);
    fVar23 = DAT_03132590;
    fVar17 = DAT_031324d0;
  }
  fVar16 = (fVar18 + 1.0) * fVar16;
  if (fVar23 <= fVar16) {
    fVar16 = fVar23;
  }
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
  }
  lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar2 = *(byte *)(lVar10 + 0x303);
  lVar11 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  lVar10 = 0x308;
  if ((bVar2 & 4) != 0) {
    lVar10 = 0x30c;
  }
  fVar18 = *(float *)(*(long *)(lVar11 + 0x40) + lVar10);
  lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  fVar23 = *(float *)(*(long *)(lVar10 + 0x40) + 0x31c);
  lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  lVar10 = *(long *)(lVar10 + 0x40);
  fVar16 = (*(float *)(lVar10 + 0x220) + 1.0) *
           (*(float *)(lVar10 + 0xb8) +
           *(float *)(lVar10 + 0x16c) * (*(float *)(lVar10 + 0x2d4) + 1.0));
  if (DAT_03132560 <= fVar16) {
    fVar16 = DAT_03132560;
  }
  fVar19 = DAT_031324a0;
  if (DAT_031324a0 <= fVar16) {
    fVar19 = fVar16;
  }
  lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  fVar21 = *(float *)(param_1 + 0xf4);
  fVar20 = *(float *)(param_1 + 0xf8);
  fVar17 = fVar17 + fVar19;
  fVar19 = *(float *)(*(long *)(lVar10 + 0x40) + 0x318);
  *(float *)(param_1 + 0xf0) = fVar17;
  fVar16 = fVar18;
  if ((fVar21 < fVar18) && (fVar20 <= fVar18)) {
    fVar22 = (float)NEON_fminnm(((fVar18 - fVar21) / fVar17) * 10.0,0x3f800000);
    if (fVar22 <= 0.1) {
      fVar22 = 0.1;
    }
    fVar22 = fVar22 * fVar17 * 0.8 * *(float *)(param_1 + 0x110);
    fVar16 = fVar21 + fVar22;
    if (fVar18 - fVar21 <= fVar22) {
      fVar16 = fVar18;
    }
  }
  fVar18 = fVar17 - (fVar19 + fVar16);
  if (fVar20 <= fVar18) {
    fVar18 = fVar20;
  }
  *(float *)(param_1 + 0xf4) = fVar16;
  *(float *)(param_1 + 0xf8) = fVar18;
  if (fVar18 <= 0.0) {
    *(undefined4 *)(param_1 + 0xe4) = 0x3eb33333;
  }
  else {
    fVar20 = *(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0x110);
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(float *)(param_1 + 0xe4) = fVar20;
    if (fVar20 == 0.0) {
      fVar18 = fVar18 + fVar17 * -0.5 * *(float *)(param_1 + 0x110);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      *(float *)(param_1 + 0xf8) = fVar18;
    }
  }
  fVar20 = 0.0;
  fVar21 = (fVar16 - fVar23) / fVar17;
  if (fVar16 <= fVar23) {
    fVar23 = fVar16;
  }
  *(float *)(param_1 + 0x104) = fVar19 / fVar17;
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  *(float *)(param_1 + 0xfc) = fVar21;
  *(float *)(param_1 + 0x100) = fVar23 / fVar17;
  *(float *)(param_1 + 0x108) = fVar18 / fVar17;
  lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  lVar10 = *(long *)(lVar10 + 0x40);
  fVar16 = (*(float *)(lVar10 + 0x24c) + 1.0) *
           (*(float *)(lVar10 + 0xe4) +
           *(float *)(lVar10 + 0x198) * (*(float *)(lVar10 + 0x300) + 1.0));
  if (DAT_0313258c <= fVar16) {
    fVar16 = DAT_0313258c;
  }
  fVar23 = DAT_031324c8._4_4_;
  if (DAT_031324c8._4_4_ <= fVar16) {
    fVar23 = fVar16;
  }
  if (fVar23 <= 0.0) {
    if ((param_2 & 1) != 0) {
      lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
      fVar20 = *(float *)(*(long *)(lVar10 + 0x40) + 0x310);
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    lVar10 = *(long *)(lVar10 + 0x40);
    fVar16 = (*(float *)(lVar10 + 0x1a8) + 1.0) *
             (*(float *)(lVar10 + 0x40) +
             *(float *)(lVar10 + 0xf4) * (*(float *)(lVar10 + 0x25c) + 1.0));
    if (DAT_031324e8 <= fVar16) {
      fVar16 = DAT_031324e8;
    }
    fVar23 = DAT_03132428;
    if (DAT_03132428 <= fVar16) {
      fVar23 = fVar16;
    }
  }
  else {
    fVar20 = 0.0;
    if ((param_2 & 1) != 0) {
      lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
      fVar20 = *(float *)(*(long *)(lVar10 + 0x40) + 0x314);
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
  }
  fVar16 = *(float *)(param_1 + 0xe0);
  if (fVar23 <= *(float *)(param_1 + 0xe0)) {
    fVar16 = fVar23;
  }
  *(float *)(param_1 + 0xe0) = fVar16;
  if (fVar20 <= fVar16) {
    if (fVar20 < fVar16) {
      if ((param_2 & 1) == 0) {
        fVar17 = *(float *)(param_1 + 0x110);
LAB_00a40cf0:
        *(undefined4 *)(param_1 + 0xe8) = 0;
      }
      else {
        fVar17 = *(float *)(param_1 + 0x110);
        fVar18 = *(float *)(param_1 + 0xe8) - fVar17;
        if (fVar18 < 0.0) goto LAB_00a40cf0;
        *(float *)(param_1 + 0xe8) = fVar18;
        if (fVar18 != 0.0) goto LAB_00a40d10;
      }
      fVar23 = fVar16 + fVar23 * -0.5 * fVar17;
      fVar16 = fVar20;
      if (fVar20 <= fVar23) {
        fVar16 = fVar23;
      }
      *(float *)(param_1 + 0xe0) = fVar16;
    }
  }
  else {
    *(float *)(param_1 + 0xe0) = fVar20;
    fVar16 = fVar20;
  }
LAB_00a40d10:
  if (fVar16 <= fVar20) {
    *(undefined4 *)(param_1 + 0xe8) = 0x3f99999a;
  }
  uVar9 = FUN_00ceab64();
  if (((uVar9 & 1) != 0) ||
     (lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(),
     (*(byte *)(lVar10 + 0x2f4) >> 4 & 1) == 0)) goto LAB_00a40f54;
  cVar4 = FUN_00cedf10();
  plVar7 = *(long **)(param_1 + 200);
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 0xd0) == (int)plVar7[1]) {
    uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  else {
    *(undefined8 *)(param_1 + 200) = 0;
    uVar8 = 0;
    *(int *)(param_1 + 0xd0) = DAT_03214ce8;
  }
  cVar5 = FUN_00d55870(uVar8);
  if (cVar4 == cVar5) goto LAB_00a40f54;
  plVar7 = *(long **)(param_1 + 0xb8);
  if (plVar7 == (long *)0x0) {
LAB_00a40df0:
    FUN_00cedce4();
    lVar10 = FUN_00d9e390();
    plVar7 = (long *)(lVar10 + 0x28);
    plVar1 = (long *)0x0;
    iVar13 = DAT_03214ce8;
    if ((lVar10 == 0) || (iVar13 = *(int *)(lVar10 + 0x30), plVar1 = plVar7, iVar13 == DAT_03214ce8)
       ) {
      *(long **)(param_1 + 0xb8) = plVar1;
      *(int *)(param_1 + 0xc0) = iVar13;
      plVar7 = plVar1;
      goto joined_r0x00a40e48;
    }
    *(long **)(param_1 + 0xb8) = plVar7;
    *(int *)(param_1 + 0xc0) = iVar13;
  }
  else {
    if (*(int *)(param_1 + 0xc0) != (int)plVar7[1]) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(int *)(param_1 + 0xc0) = DAT_03214ce8;
      goto LAB_00a40df0;
    }
    lVar10 = (**(code **)(*plVar7 + 0x10))();
    if (lVar10 == 0) goto LAB_00a40df0;
    plVar7 = *(long **)(param_1 + 0xb8);
joined_r0x00a40e48:
    if (plVar7 == (long *)0x0) goto LAB_00a40f54;
  }
  if (*(int *)(param_1 + 0xc0) == (int)plVar7[1]) {
    lVar10 = (**(code **)(*plVar7 + 0x10))();
    if (lVar10 != 0) {
      plVar7 = *(long **)(param_1 + 0xb8);
      if (plVar7 == (long *)0x0) {
        uVar8 = 0;
      }
      else if (*(int *)(param_1 + 0xc0) == (int)plVar7[1]) {
        uVar8 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        uVar8 = 0;
        *(int *)(param_1 + 0xc0) = DAT_03214ce8;
      }
      plVar7 = *(long **)(param_1 + 200);
      if (plVar7 == (long *)0x0) {
        uVar12 = 0;
      }
      else if (*(int *)(param_1 + 0xd0) == (int)plVar7[1]) {
        uVar12 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 200) = 0;
        uVar12 = 0;
        *(int *)(param_1 + 0xd0) = DAT_03214ce8;
      }
      fVar16 = (float)FUN_00d5ca88(uVar8,uVar12);
      lVar10 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
      if (*(float *)(*(long *)(lVar10 + 0x40) + 0x308) < fVar16) {
        *(undefined4 *)(param_1 + 0x124) = DAT_031323fc;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(int *)(param_1 + 0xc0) = DAT_03214ce8;
  }
LAB_00a40f54:
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x10c);
  return;
}




void FUN_00a40f80(long *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined8 local_78;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[0x16] == 4) {
    plVar3 = (long *)param_1[0x19];
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if ((int)param_1[0x1a] == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        param_1[0x19] = 0;
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x1a) = DAT_03214ce8;
      }
    }
    cVar2 = FUN_00d55870(uVar4);
    if ((cVar2 == '\0') && (*(float *)((long)param_1 + 0xfc) == 0.0)) goto LAB_00a411a0;
  }
  pfVar5 = (float *)FUN_00965ecc(param_1);
  uVar4 = *(undefined8 *)(pfVar5 + 4);
  local_6c = 0xffff;
  local_6a = 0xff;
  fVar8 = (float)NEON_fminnm((int)(pfVar5[6] * 255.0),0x437f0000);
  fVar9 = 0.0;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  local_69 = (undefined1)(int)fVar8;
  local_78 = uVar4;
  lVar6 = (**(code **)(*(long *)param_1[0x19] + 0x10))();
  lVar6 = *(long *)(lVar6 + 0x38) + 0x1a0;
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar8 = fVar8 * (float)uVar4;
  fVar9 = fVar9 * (float)((ulong)uVar4 >> 0x20);
  iVar11 = (int)(*pfVar5 - fVar8 * 0.5);
  iVar10 = (int)(pfVar5[1] - fVar9 * 0.5);
  if ((int)param_1[0x16] == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)param_1[0x19] + 0x10))();
      FUN_00ced270(*(undefined4 *)(lVar7 + 0x260));
      FUN_00a41328(iVar11,iVar10,fVar8,fVar9,param_1,param_2,&local_78,&local_6c,lVar6,0);
    }
    else if ((*(byte *)(param_1 + 0x28) >> 1 & 1) == 0) {
      FUN_00a41278(iVar11,iVar10,fVar8,fVar9,param_1,param_2,&local_78,&local_6c,lVar6);
    }
    else {
      FUN_00a411d4(iVar11,iVar10,fVar8,fVar9,param_1,param_2,&local_78,&local_6c,lVar6);
    }
  }
  else {
    FUN_00a415d0(iVar11,iVar10,fVar8,fVar9,param_1,param_2,&local_78,&local_6c,lVar6);
  }
LAB_00a411a0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

