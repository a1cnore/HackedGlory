// functions/00a44 — 8 functions
#include "libGameKindred.h"




void FUN_00a44298(long param_1,int param_2)

{
  *(int *)(param_1 + 0x3754) = param_2;
  if (param_2 == 3) {
    *(undefined2 *)(param_1 + 0x3758) = 0x101;
  }
  else if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x3758) = 1;
    return;
  }
  return;
}




void FUN_00a442cc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x375a) = param_2 & 1;
  return;
}




void FUN_00a442dc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x375b) = param_2 & 1;
  return;
}




void FUN_00a442ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x510;
  lVar1 = 6;
  do {
    FUN_00a46814(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x7e8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a44320(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x510;
  lVar1 = 6;
  do {
    FUN_00a46814(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x7e8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a44354(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x3754)) {
  case 0:
    FUN_00a44388();
    return;
  case 1:
    FUN_00a44a00();
    return;
  case 2:
    FUN_00a45204();
    return;
  case 3:
    FUN_00a45508();
    return;
  default:
    return;
  }
}




void FUN_00a44388(long *param_1)

{
  long *plVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c0;
  float fStack_bc;
  ulong local_b8;
  void *local_b0;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  if (param_1[0x29] == 0) goto LAB_00a449c0;
  if ((int)param_1[0x2a] != *(int *)(param_1[0x29] + 8)) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x2a) = DAT_03214ce8;
    goto LAB_00a449c0;
  }
  plVar6 = (long *)param_1[0x2b];
  if (plVar6 == (long *)0x0) goto LAB_00a449c0;
  if ((int)param_1[0x2c] != (int)plVar6[1]) {
    param_1[0x2b] = 0;
    *(undefined4 *)(param_1 + 0x2c) = DAT_03214ce8;
    goto LAB_00a449c0;
  }
  lVar7 = (**(code **)(*plVar6 + 0x10))();
  if (lVar7 == 0) goto LAB_00a449c0;
  plVar6 = param_1 + 0x46;
  if ((*(float *)(param_1 + 0x50) != 0.0) || (*(float *)((long)param_1 + 0x284) != 0.0)) {
    param_1[0x50] = 0;
    FUN_0091ada4(plVar6);
  }
  iVar5 = FUN_00a45a88(param_1);
  iVar5 = iVar5 - *(uint *)(param_1 + 0x6ea);
  fVar16 = (float)(int)((float)iVar5 * 0.5);
  fVar15 = fVar16 * 0.5;
  fVar12 = fVar15 + (float)*(uint *)(param_1 + 0x6ea);
  if (fVar12 <= 1.0) {
    fVar12 = 1.0;
  }
  fVar13 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar14 = (fVar13 * fVar15) / fVar12;
  fVar13 = fVar14;
  if ((0.0 < fVar14) && (fVar13 = SQRT(fVar14), NAN(fVar13))) {
    fVar13 = sqrtf(fVar14);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar14 = fVar15 / fVar12;
  if (fVar13 <= fVar15 / fVar12) {
    fVar14 = fVar13;
  }
  fVar12 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if (fVar14 <= fVar12) {
    fVar12 = fVar14;
  }
  fVar12 = fVar16 * fVar12 * 0.5;
  uVar10 = (ulong)(uint)fVar12;
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar15 = (fVar15 - fVar12) + (float)((int)param_1[0x6ea] + 1) * -16.0;
  fVar13 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar14 = (float)NEON_ucvtf((int)param_1[0x6ea]);
  fVar12 = fVar14;
  if (fVar14 <= 1.0) {
    fVar12 = 1.0;
  }
  fVar12 = (fVar15 * fVar13) / fVar12;
  if (0.0 < fVar12) {
    fVar13 = SQRT(fVar12);
    if (NAN(SQRT(fVar12))) {
      fVar13 = sqrtf(fVar12);
    }
    fVar12 = fVar13;
    fVar14 = (float)NEON_ucvtf((int)param_1[0x6ea]);
  }
  fVar15 = fVar15 / fVar14;
  if (fVar12 <= fVar15) {
    fVar15 = fVar12;
  }
  fVar12 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if (fVar15 <= fVar12) {
    fVar12 = fVar15;
  }
  FUN_00f13f08(fVar12,fVar12 * (float)*(uint *)(param_1 + 0x6ea) +
                      (float)(*(uint *)(param_1 + 0x6ea) + 1) * 16.0,plVar6);
  if ((*(float *)(param_1 + 0x4e) != 0.0) || (*(float *)((long)param_1 + 0x274) != 0.0)) {
    param_1[0x4e] = 0;
    FUN_0091ada4(plVar6);
  }
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0.0;
  local_a8 = fVar12;
  local_a4 = fVar12;
  if ((int)param_1[0x6ea] == 0) {
LAB_00a447b8:
    fVar12 = 8.0;
  }
  else {
    do {
      fVar12 = local_c0;
      plVar1 = param_1 + (ulong)(uint)local_c0 * 0xfd + 0xa2;
      FUN_00f13f18(plVar1,&local_a8);
      uVar8 = FUN_00a47768(plVar1);
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_00f02540(plVar1);
        if ((uVar8 & 1) != 0) {
          FUN_00f01a4c(plVar1,1);
        }
        FUN_00f023ec(plVar6,plVar1,1);
      }
      else {
        FUN_0091f584(&local_b8,&local_c0);
      }
      fVar15 = (float)(**(code **)(*plVar1 + 0x48))(plVar1);
      fVar13 = (float)NEON_ucvtf(local_c0);
      fVar13 = fVar13 * 16.0 + local_a4 * (fVar13 + 0.5);
      uVar8 = (ulong)(uint)fVar13;
      pfVar2 = (float *)((long)param_1 + (ulong)(uint)fVar12 * 0x7e8 + 0x554);
      if ((*(float *)(param_1 + (ulong)(uint)fVar12 * 0xfd + 0xaa) != fVar15 * 0.5) ||
         (*pfVar2 != fVar13)) {
        *(float *)(param_1 + (ulong)(uint)fVar12 * 0xfd + 0xaa) = fVar15 * 0.5;
        *pfVar2 = fVar13;
        FUN_0091ada4(plVar1);
      }
      local_a0 = 0x3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_a0);
      fVar15 = (float)uVar8;
      local_c0 = (float)((int)local_c0 + 1);
      fVar12 = *(float *)(param_1 + 0x6ea);
    } while ((uint)local_c0 < (uint)fVar12);
    if ((int)local_b8 != 0) {
      uVar11 = 0;
      do {
        plVar1 = param_1 + (ulong)*(uint *)((long)local_b0 + uVar11 * 4) * 0xfd + 0xa2;
        uVar9 = FUN_00f02540(plVar1);
        if ((uVar9 & 1) != 0) {
          FUN_00f01a4c(plVar1,1);
        }
        FUN_00f023ec(plVar6,plVar1,1);
        fVar15 = (float)uVar8;
        uVar11 = uVar11 + 1;
      } while (uVar11 < (local_b8 & 0xffffffff));
      fVar12 = *(float *)(param_1 + 0x6ea);
    }
    if (fVar12 == 0.0) goto LAB_00a447b8;
    uVar3 = (int)fVar12 - 1;
    fVar12 = *(float *)((long)param_1 + (ulong)uVar3 * 0x7e8 + 0x554);
    (**(code **)(param_1[(ulong)uVar3 * 0xfd + 0xa2] + 0x48))(param_1 + (ulong)uVar3 * 0xfd + 0xa2);
    fVar12 = ABS(ABS(fVar12) + fVar15 * 0.5) + 8.0;
  }
  if (*(char *)((long)param_1 + 0x375b) == '\0') {
    plVar1 = param_1 + 0x8b;
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
    if ((*(float *)(param_1 + 0x95) != 0.0) || (*(float *)((long)param_1 + 0x4ac) != 0.0)) {
      param_1[0x95] = 0;
      FUN_0091ada4(plVar1);
    }
    FUN_00f13e54(plVar6);
    FUN_00f13f08(plVar1);
    if ((*(float *)(param_1 + 0x93) != 0.0) || (*(float *)((long)param_1 + 0x49c) != fVar12)) {
      *(undefined4 *)(param_1 + 0x93) = 0;
      *(float *)((long)param_1 + 0x49c) = fVar12;
      FUN_0091ada4(plVar1);
    }
    FUN_00f13e54(plVar1);
    fVar16 = (float)uVar10 / fVar16;
    fVar12 = (float)FUN_00f13e54(plVar1);
    local_c0 = fVar16;
    if (fVar12 * 0.5 <= fVar16) {
      local_c0 = fVar12 * 0.5;
    }
    uVar3 = *(uint *)(param_1 + 0x6ea);
    uVar8 = (ulong)uVar3;
    fStack_bc = local_c0;
    if (uVar3 < uVar3 + iVar5) {
      plVar6 = param_1 + uVar8 * 0xfd + 0xa2;
      do {
        fVar12 = (float)uVar10;
        FUN_00f13f18(plVar6,&local_c0);
        uVar10 = FUN_00f02540(plVar6);
        if ((uVar10 & 1) != 0) {
          FUN_00f01a4c(plVar6,1);
        }
        FUN_00f023ec(plVar1,plVar6,1);
        lVar7 = param_1[0x6ea];
        uVar3 = (int)uVar8 - (int)lVar7;
        fVar15 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 1;
        }
        if ((int)lVar7 + (uVar3 & 0xfffffffe) + 1 == (int)uVar8) {
          fVar15 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
          fVar15 = fVar15 * 1.5;
        }
        else {
          fVar15 = fVar15 * 0.5;
        }
        (**(code **)(*plVar6 + 0x48))(plVar6);
        fVar12 = ((float)((int)uVar3 >> 1) + 0.5) * fVar12;
        uVar10 = (ulong)(uint)fVar12;
        fVar12 = (float)((int)uVar3 >> 1) * 3.2 + fVar12;
        if ((*(float *)(plVar6 + 8) != fVar15) ||
           (uVar10 = (ulong)(uint)*(float *)((long)plVar6 + 0x44),
           *(float *)((long)plVar6 + 0x44) != fVar12)) {
          *(float *)(plVar6 + 8) = fVar15;
          *(float *)((long)plVar6 + 0x44) = fVar12;
          FUN_0091ada4(plVar6);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_a0);
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 0xfd;
      } while (uVar8 < (uint)((int)param_1[0x6ea] + iVar5));
    }
  }
  else {
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  }
  param_1 = param_1 + 0xa2;
  lVar7 = 6;
  do {
    FUN_00a46d60(param_1);
    lVar7 = lVar7 + -1;
    param_1 = param_1 + 0xfd;
  } while (lVar7 != 0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
LAB_00a449c0:
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a44a00(long *param_1)

{
  long *plVar1;
  float *pfVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  void *local_b8;
  float local_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  if (param_1[0x29] == 0) goto LAB_00a451c4;
  if ((int)param_1[0x2a] != *(int *)(param_1[0x29] + 8)) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x2a) = DAT_03214ce8;
    goto LAB_00a451c4;
  }
  plVar8 = (long *)param_1[0x2b];
  if (plVar8 == (long *)0x0) goto LAB_00a451c4;
  if ((int)param_1[0x2c] != (int)plVar8[1]) {
    param_1[0x2b] = 0;
    *(undefined4 *)(param_1 + 0x2c) = DAT_03214ce8;
    goto LAB_00a451c4;
  }
  lVar9 = (**(code **)(*plVar8 + 0x10))();
  if (lVar9 == 0) goto LAB_00a451c4;
  FUN_00f00298(&uStack_a4,&local_a8);
  uVar10 = FUN_0092ea9c();
  pcVar3 = (char *)((long)param_1 + 0x375a);
  cVar4 = *pcVar3;
  fVar16 = -1.0;
  if (cVar4 == '\0') {
    fVar16 = 1.0;
  }
  if ((uVar10 & 1) == 0) {
    fVar21 = 12.0;
  }
  else {
    FUN_0092ead0(uStack_a4,local_a8);
    fVar21 = 10.0;
  }
  fVar13 = 1.0;
  uVar17 = 0x3f800000;
  if (cVar4 == '\0') {
    fVar13 = 0.0;
  }
  plVar8 = param_1 + 0x46;
  uVar12 = (**(code **)(*param_1 + 0x48))(param_1);
  local_c0 = CONCAT44(uVar17,uVar12);
  FUN_00f13f18(plVar8,&local_c0);
  if ((*(float *)(param_1 + 0x50) != fVar13) || (*(float *)((long)param_1 + 0x284) != 0.5)) {
    *(float *)(param_1 + 0x50) = fVar13;
    *(undefined4 *)((long)param_1 + 0x284) = 0x3f000000;
    FUN_0091ada4(plVar8);
  }
  iVar7 = FUN_00a45a88(param_1);
  iVar7 = iVar7 - *(uint *)(param_1 + 0x6ea);
  fVar20 = (float)(int)((float)iVar7 * 0.5);
  fVar13 = fVar20 * 0.5 + (float)*(uint *)(param_1 + 0x6ea);
  fVar18 = 1.0;
  if (fVar13 <= 1.0) {
    fVar13 = 1.0;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar19 = fVar18;
  fVar14 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar14 = (fVar18 * fVar14) / fVar13;
  fVar18 = fVar14;
  if ((0.0 < fVar14) && (fVar18 = SQRT(fVar14), NAN(fVar18))) {
    fVar18 = sqrtf(fVar14);
  }
  fVar15 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar14 = fVar15 / fVar13;
  if (fVar18 <= fVar15 / fVar13) {
    fVar14 = fVar18;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if (fVar14 <= fVar19) {
    fVar19 = fVar14;
  }
  fVar15 = fVar20 * fVar19 * 0.5;
  fVar13 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar18 = fVar21 * (float)((int)param_1[0x6ea] + 1);
  fVar19 = (fVar13 - fVar15) - fVar18;
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar14 = (float)NEON_ucvtf((int)param_1[0x6ea]);
  fVar13 = (fVar18 * fVar19) / fVar14;
  if (0.0 < fVar13) {
    fVar18 = SQRT(fVar13);
    if (NAN(SQRT(fVar13))) {
      fVar18 = sqrtf(fVar13);
    }
    fVar13 = fVar18;
    fVar14 = (float)NEON_ucvtf((int)param_1[0x6ea]);
  }
  fVar19 = fVar19 / fVar14;
  fVar18 = fVar19;
  if (fVar13 <= fVar19) {
    fVar18 = fVar13;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  local_b0 = fVar19;
  if (fVar18 <= fVar19) {
    local_b0 = fVar18;
  }
  fStack_ac = local_b0;
  fVar13 = local_b0;
  FUN_00f13f08(local_b0 * (float)*(uint *)(param_1 + 0x6ea) +
               fVar21 * (float)(*(uint *)(param_1 + 0x6ea) + 1),plVar8);
  cVar4 = *pcVar3;
  fVar18 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if (cVar4 == '\0') {
    fVar18 = fVar13;
    FUN_00f13e54(plVar8);
    fVar13 = fVar13 - fVar18;
    if ((*(float *)(param_1 + 0x4e) != 0.0) || (*(float *)((long)param_1 + 0x274) != fVar13)) {
      *(undefined4 *)(param_1 + 0x4e) = 0;
      goto LAB_00a44d58;
    }
  }
  else {
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar19 = fVar13;
    FUN_00f13e54(plVar8);
    fVar13 = fVar13 - fVar19;
    if ((*(float *)(param_1 + 0x4e) != fVar18) || (*(float *)((long)param_1 + 0x274) != fVar13)) {
      *(float *)(param_1 + 0x4e) = fVar18;
LAB_00a44d58:
      *(float *)((long)param_1 + 0x274) = fVar13;
      FUN_0091ada4(plVar8);
    }
  }
  local_c0 = 0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_c0);
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0.0;
  if ((int)param_1[0x6ea] == 0) {
LAB_00a44f1c:
    fVar13 = 0.0;
  }
  else {
    do {
      fVar13 = local_c8;
      plVar1 = param_1 + (ulong)(uint)local_c8 * 0xfd + 0xa2;
      FUN_00f13f18(plVar1,&local_b0);
      uVar10 = FUN_00a47768(plVar1);
      if ((uVar10 & 1) == 0) {
        uVar10 = FUN_00f02540(plVar1);
        if ((uVar10 & 1) != 0) {
          FUN_00f01a4c(plVar1,1);
        }
        FUN_00f023ec(plVar8,plVar1,1);
      }
      else {
        FUN_0091f584(&local_c0,&local_c8);
      }
      fVar18 = (float)NEON_ucvtf(local_c8);
      fVar19 = local_b0 * (fVar18 + 0.5);
      fVar18 = fVar16 * (fVar21 * fVar18 + fVar19);
      FUN_00f13e54(plVar8);
      pfVar2 = (float *)((long)param_1 + (ulong)(uint)fVar13 * 0x7e8 + 0x554);
      if ((*(float *)(param_1 + (ulong)(uint)fVar13 * 0xfd + 0xaa) != fVar18) ||
         (*pfVar2 != fVar19 * 0.5)) {
        *(float *)(param_1 + (ulong)(uint)fVar13 * 0xfd + 0xaa) = fVar18;
        *pfVar2 = fVar19 * 0.5;
        FUN_0091ada4(plVar1);
      }
      local_a0 = 0x3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_a0);
      local_c8 = (float)((int)local_c8 + 1);
      fVar13 = *(float *)(param_1 + 0x6ea);
    } while ((uint)local_c8 < (uint)fVar13);
    if ((int)local_c0 != 0) {
      uVar10 = 0;
      do {
        plVar1 = param_1 + (ulong)*(uint *)((long)local_b8 + uVar10 * 4) * 0xfd + 0xa2;
        uVar11 = FUN_00f02540(plVar1);
        if ((uVar11 & 1) != 0) {
          FUN_00f01a4c(plVar1,1);
        }
        FUN_00f023ec(plVar8,plVar1,1);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (local_c0 & 0xffffffff));
      fVar13 = *(float *)(param_1 + 0x6ea);
    }
    if (fVar13 == 0.0) goto LAB_00a44f1c;
    uVar5 = (int)fVar13 - 1;
    fVar13 = *(float *)(param_1 + (ulong)uVar5 * 0xfd + 0xaa);
    fVar18 = (float)(**(code **)(param_1[(ulong)uVar5 * 0xfd + 0xa2] + 0x48))
                              (param_1 + (ulong)uVar5 * 0xfd + 0xa2);
    fVar13 = ABS(ABS(fVar13) + fVar18 * 0.5);
  }
  if (*(char *)((long)param_1 + 0x375b) == '\0') {
    fVar18 = *(float *)((long)param_1 + 0x284);
    uVar10 = (ulong)(uint)fVar18;
    plVar1 = param_1 + 0x8b;
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
    if ((*(float *)(param_1 + 0x95) != *(float *)(param_1 + 0x50)) ||
       (*(float *)((long)param_1 + 0x4ac) != fVar18)) {
      *(float *)(param_1 + 0x95) = *(float *)(param_1 + 0x50);
      *(float *)((long)param_1 + 0x4ac) = fVar18;
      FUN_0091ada4(plVar1);
    }
    FUN_00f13e54(plVar8);
    FUN_00f13f08(fVar15,plVar1);
    if (*pcVar3 == '\0') {
      fVar18 = 0.0;
    }
    else {
      fVar18 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    }
    fVar18 = fVar16 * (fVar21 * 0.5 + fVar13) + fVar18;
    (**(code **)(*param_1 + 0x48))(param_1);
    uVar11 = uVar10;
    FUN_00f13e54(plVar1);
    fVar13 = (float)uVar10 - (float)uVar11;
    if ((*(float *)(param_1 + 0x93) != fVar18) ||
       (uVar11 = (ulong)(uint)*(float *)((long)param_1 + 0x49c),
       *(float *)((long)param_1 + 0x49c) != fVar13)) {
      *(float *)(param_1 + 0x93) = fVar18;
      *(float *)((long)param_1 + 0x49c) = fVar13;
      FUN_0091ada4(plVar1);
    }
    local_a0 = 0;
    (**(code **)(param_1[0x8b] + 0x28))(plVar1,&local_a0);
    fVar13 = (float)FUN_00f13e54(plVar1);
    FUN_00f13e54(plVar1);
    fVar18 = (float)uVar11 * 0.5;
    local_c8 = fVar13 / fVar20;
    if (fVar18 <= fVar13 / fVar20) {
      local_c8 = fVar18;
    }
    uVar5 = *(uint *)(param_1 + 0x6ea);
    uVar10 = (ulong)uVar5;
    local_c4 = local_c8;
    if (uVar5 < uVar5 + iVar7) {
      plVar8 = param_1 + uVar10 * 0xfd + 0xa2;
      do {
        fVar13 = (float)uVar11;
        FUN_00f13f18(plVar8,&local_c8);
        uVar11 = FUN_00f02540(plVar8);
        if ((uVar11 & 1) != 0) {
          FUN_00f01a4c(plVar8,1);
        }
        FUN_00f023ec(plVar1,plVar8,1);
        lVar9 = param_1[0x6ea];
        uVar5 = (int)uVar10 - (int)lVar9;
        fVar18 = local_c4 + local_c4;
        FUN_00f13e54(plVar1);
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 1;
        }
        fVar18 = fVar18 - fVar13;
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar13 = -1.0;
        if ((int)lVar9 + (uVar5 & 0xfffffffe) + 1 != (int)uVar10) {
          fVar13 = 1.0;
        }
        fVar20 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
        fVar19 = fVar21 * 0.4 * (float)((int)uVar5 >> 1);
        fVar14 = fVar16 * (fVar19 + ((float)((int)uVar5 >> 1) + 0.5) * fVar20);
        (**(code **)(*plVar8 + 0x48))(plVar8);
        fVar18 = fVar18 * 0.5;
        fVar20 = fVar18 + fVar19 * 0.5;
        FUN_00f13e54(plVar1);
        uVar11 = (ulong)(uint)(fVar18 * 0.5);
        fVar13 = fVar18 * 0.5 + fVar13 * fVar20;
        if ((*(float *)(plVar8 + 8) != fVar14) ||
           (uVar11 = (ulong)(uint)*(float *)((long)plVar8 + 0x44),
           *(float *)((long)plVar8 + 0x44) != fVar13)) {
          *(float *)(plVar8 + 8) = fVar14;
          *(float *)((long)plVar8 + 0x44) = fVar13;
          FUN_0091ada4(plVar8);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_a0);
        uVar10 = uVar10 + 1;
        plVar8 = plVar8 + 0xfd;
      } while (uVar10 < (uint)((int)param_1[0x6ea] + iVar7));
    }
  }
  else {
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  }
  param_1 = param_1 + 0xa2;
  lVar9 = 6;
  do {
    FUN_00a46d60(param_1);
    lVar9 = lVar9 + -1;
    param_1 = param_1 + 0xfd;
  } while (lVar9 != 0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
LAB_00a451c4:
  if (*(long *)(lVar6 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

