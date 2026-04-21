// functions/00efa — 20 functions
#include "libGameKindred.h"




void FUN_00efa054(undefined8 *param_1)

{
  FUN_00ef1268(*param_1);
  FUN_00ef1268(param_1[2]);
  FUN_00ef1268(param_1[1]);
  return;
}




void FUN_00efa084(long param_1)

{
  memset(*(void **)(param_1 + 8),0xff,(long)*(int *)(param_1 + 0x1c) << 1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}




long FUN_00efa0b8(long *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  
  uVar1 = (param_2 << 0xf ^ 0xffffffffU) + param_2;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar2 = *(ushort *)
           (param_1[1] + (ulong)(*(int *)((long)param_1 + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10)) * 2)
  ;
  if (uVar2 != 0xffff) {
    do {
      uVar3 = (ulong)uVar2;
      if (*(int *)(*param_1 + uVar3 * 0x1c + 0x18) == param_2) {
        return *param_1 + uVar3 * 0x1c;
      }
      uVar2 = *(ushort *)(param_1[2] + uVar3 * 2);
    } while (uVar2 != 0xffff);
  }
  return 0;
}




long FUN_00efa13c(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = (param_2 << 0xf ^ 0xffffffffU) + param_2;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar5 = (ulong)(*(int *)((long)param_1 + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10));
  uVar3 = *(ushort *)(param_1[1] + uVar5 * 2);
  if (uVar3 != 0xffff) {
    do {
      uVar6 = (ulong)uVar3;
      if (*(int *)(*param_1 + uVar6 * 0x1c + 0x18) == param_2) {
        return *param_1 + uVar6 * 0x1c;
      }
      uVar3 = *(ushort *)(param_1[2] + uVar6 * 2);
    } while (uVar3 != 0xffff);
  }
  uVar1 = *(uint *)(param_1 + 4);
  lVar4 = 0;
  if ((int)uVar1 < (int)param_1[3]) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
    lVar4 = *param_1 + (ulong)(uVar1 & 0xffff) * 0x1c;
    *(undefined4 *)(lVar4 + 0xc) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(int *)(lVar4 + 0x18) = param_2;
    lVar2 = param_1[1];
    *(undefined2 *)(param_1[2] + (ulong)(uVar1 & 0xffff) * 2) = *(undefined2 *)(lVar2 + uVar5 * 2);
    *(short *)(lVar2 + uVar5 * 2) = (short)uVar1;
  }
  return lVar4;
}




void FUN_00efa20c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(int *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar1 = thunk_FUN_00ef1250(param_2 * 8 + 8,0);
  *param_1 = uVar1;
  return;
}




void FUN_00efa244(undefined8 *param_1)

{
  FUN_00ef1268(*param_1);
  return;
}




void FUN_00efa24c(long *param_1,int param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  if (0 < param_2) {
    fVar4 = *(float *)(param_3 + 0x10);
    do {
      iVar2 = param_2;
      if (-1 < param_2 + -1) {
        iVar2 = param_2 + -1;
      }
      iVar2 = iVar2 >> 1;
      lVar3 = *(long *)(*param_1 + (long)iVar2 * 8);
    } while ((fVar4 < *(float *)(lVar3 + 0x10)) &&
            (*(long *)(*param_1 + (long)param_2 * 8) = lVar3, bVar1 = 2 < param_2, param_2 = iVar2,
            bVar1));
  }
  *(long *)(*param_1 + (long)param_2 * 8) = param_3;
  return;
}




void FUN_00efa2a0(long *param_1,uint param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  while (uVar4 = param_2 << 1 | 1, (int)uVar4 < iVar3) {
    lVar6 = *param_1;
    uVar5 = (uint)((long)(int)uVar4 + 1);
    plVar7 = (long *)(lVar6 + (long)(int)uVar4 * 8);
    if (((int)uVar5 < iVar3) &&
       (plVar2 = (long *)(lVar6 + ((long)(int)uVar4 + 1) * 8),
       *(float *)(*plVar2 + 0x10) < *(float *)(*plVar7 + 0x10))) {
      plVar7 = plVar2;
      uVar4 = uVar5;
    }
    *(long *)(lVar6 + (long)(int)param_2 * 8) = *plVar7;
    param_2 = uVar4;
  }
  if (0 < (int)param_2) {
    fVar8 = *(float *)(param_3 + 0x10);
    do {
      uVar4 = param_2;
      if (-1 < (int)(param_2 - 1)) {
        uVar4 = param_2 - 1;
      }
      uVar4 = (int)uVar4 >> 1;
      lVar6 = *(long *)(*param_1 + (long)(int)uVar4 * 8);
    } while ((fVar8 < *(float *)(lVar6 + 0x10)) &&
            (*(long *)(*param_1 + (long)(int)param_2 * 8) = lVar6, bVar1 = 2 < (int)param_2,
            param_2 = uVar4, bVar1));
  }
  *(long *)(*param_1 + (long)(int)param_2 * 8) = param_3;
  return;
}




undefined1  [16] FUN_00efa36c(float param_1)

{
  undefined1 auVar1 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  if (NAN(SQRT(param_1))) {
    auVar1._0_4_ = sqrtf(param_1);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)SQRT(param_1));
}




void FUN_00efa384(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar4 = *param_4;
  fVar1 = *param_3;
  fVar10 = param_3[1];
  fVar7 = *param_5;
  fVar16 = *param_2;
  fVar17 = param_2[1];
  fVar11 = param_3[2];
  fVar18 = param_2[2];
  fVar9 = fVar4 - fVar1;
  fVar6 = param_4[1] - fVar10;
  fVar5 = param_5[1] - fVar10;
  fVar3 = param_4[2] - fVar11;
  fVar8 = fVar7 - fVar1;
  fVar2 = param_5[2] - fVar11;
  fVar12 = fVar9 * (fVar16 - fVar1) + fVar6 * (fVar17 - fVar10) + fVar3 * (fVar18 - fVar11);
  fVar10 = fVar8 * (fVar16 - fVar1) + fVar5 * (fVar17 - fVar10) + fVar2 * (fVar18 - fVar11);
  if ((fVar12 <= 0.0) && (fVar10 <= 0.0)) {
    *param_1 = fVar1;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return;
  }
  fVar11 = fVar17 - param_4[1];
  fVar14 = fVar18 - param_4[2];
  fVar13 = fVar9 * (fVar16 - fVar4) + fVar6 * fVar11 + fVar3 * fVar14;
  fVar11 = fVar8 * (fVar16 - fVar4) + fVar5 * fVar11 + fVar2 * fVar14;
  if ((0.0 <= fVar13) && (fVar11 <= fVar13)) {
    *param_1 = fVar4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    return;
  }
  fVar14 = fVar12 * fVar11 - fVar13 * fVar10;
  if (((0.0 < fVar13) || (fVar12 < 0.0)) || (0.0 < fVar14)) {
    fVar17 = fVar17 - param_5[1];
    fVar18 = fVar18 - param_5[2];
    fVar15 = fVar8 * (fVar16 - fVar7) + fVar5 * fVar17 + fVar2 * fVar18;
    fVar17 = fVar9 * (fVar16 - fVar7) + fVar6 * fVar17 + fVar3 * fVar18;
    if ((0.0 <= fVar15) && (fVar17 <= fVar15)) {
      *param_1 = fVar7;
      param_1[1] = param_5[1];
      param_1[2] = param_5[2];
      return;
    }
    fVar18 = fVar17 * fVar10 - fVar12 * fVar15;
    if (((0.0 < fVar15) || (fVar10 < 0.0)) || (0.0 < fVar18)) {
      fVar12 = fVar13 * fVar15 - fVar17 * fVar11;
      if (((0.0 < fVar12) || (fVar11 = fVar11 - fVar13, fVar11 < 0.0)) || (fVar17 - fVar15 < 0.0)) {
        fVar12 = 1.0 / (fVar14 + fVar12 + fVar18);
        fVar18 = fVar18 * fVar12;
        fVar14 = fVar14 * fVar12;
        *param_1 = fVar8 * fVar14 + fVar1 + fVar9 * fVar18;
        param_1[1] = fVar5 * fVar14 + fVar6 * fVar18 + param_3[1];
        fVar12 = fVar2 * fVar14;
        fVar11 = fVar3 * fVar18 + param_3[2];
      }
      else {
        fVar11 = fVar11 / (fVar11 + (fVar17 - fVar15));
        *param_1 = fVar4 + (fVar7 - fVar4) * fVar11;
        param_1[1] = param_4[1] + fVar11 * (param_5[1] - param_4[1]);
        fVar12 = param_4[2];
        fVar11 = fVar11 * (param_5[2] - fVar12);
      }
      goto LAB_00efa568;
    }
    fVar10 = fVar10 / (fVar10 - fVar15);
    *param_1 = fVar1 + fVar8 * fVar10;
    fVar1 = param_3[1];
    fVar6 = fVar5 * fVar10;
    fVar12 = fVar2 * fVar10;
  }
  else {
    fVar12 = fVar12 / (fVar12 - fVar13);
    *param_1 = fVar1 + fVar9 * fVar12;
    fVar1 = param_3[1];
    fVar6 = fVar6 * fVar12;
    fVar12 = fVar3 * fVar12;
  }
  param_1[1] = fVar6 + fVar1;
  fVar11 = param_3[2];
LAB_00efa568:
  param_1[2] = fVar12 + fVar11;
  return;
}




undefined8
FUN_00efa63c(float *param_1,float *param_2,long param_3,int param_4,float *param_5,float *param_6,
            int *param_7,int *param_8)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
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
  
  iVar4 = param_4 + -1;
  *param_5 = 0.0;
  *param_6 = 1.0;
  *param_7 = -1;
  *param_8 = -1;
  if (param_4 < 1) {
    return 1;
  }
  fVar9 = *param_1;
  fVar11 = param_1[2];
  uVar3 = 0;
  fVar6 = *param_2 - fVar9;
  fVar7 = param_2[2] - fVar11;
  fVar8 = 1.0;
  lVar5 = 0;
  while( true ) {
    pfVar1 = (float *)(param_3 + (uVar3 & 0xffffffff) * 4);
    pfVar2 = (float *)(param_3 + (long)(iVar4 * 3) * 4);
    fVar14 = *pfVar2;
    fVar15 = pfVar2[2];
    fVar12 = *pfVar1 - fVar14;
    fVar13 = pfVar1[2] - fVar15;
    fVar10 = fVar7 * fVar12 - fVar6 * fVar13;
    fVar9 = fVar13 * (fVar9 - fVar14) - fVar12 * (fVar11 - fVar15);
    if (1e-08 <= ABS(fVar10)) {
      fVar9 = fVar9 / fVar10;
      if (0.0 <= fVar10) {
        if (fVar9 < fVar8) {
          *param_6 = fVar9;
          *param_8 = iVar4;
          fVar8 = fVar9;
          if (fVar9 < *param_5) {
            return 0;
          }
        }
      }
      else if (*param_5 < fVar9) {
        *param_5 = fVar9;
        *param_7 = iVar4;
        fVar8 = *param_6;
        if (*param_6 < fVar9) {
          return 0;
        }
      }
    }
    else if (fVar9 < 0.0) {
      return 0;
    }
    if ((long)param_4 <= lVar5 + 1) break;
    fVar9 = *param_1;
    fVar11 = param_1[2];
    uVar3 = uVar3 + 3;
    iVar4 = (int)lVar5;
    lVar5 = lVar5 + 1;
  }
  return 1;
}




float FUN_00efa76c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_3 - *param_2;
  fVar1 = param_3[2] - param_2[2];
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar4 = fVar3 * (*param_1 - *param_2) + fVar1 * (param_1[2] - param_2[2]);
  fVar2 = fVar4 / fVar5;
  if (fVar5 <= 0.0) {
    fVar2 = fVar4;
  }
  fVar4 = 0.0;
  *param_4 = fVar2;
  if ((fVar2 < 0.0) || (fVar4 = 1.0, 1.0 < fVar2)) {
    *param_4 = fVar4;
    fVar2 = fVar4;
  }
  fVar3 = (*param_2 + fVar3 * fVar2) - *param_1;
  fVar2 = (fVar1 * fVar2 + param_2[2]) - param_1[2];
  return fVar3 * fVar3 + fVar2 * fVar2;
}




void FUN_00efa814(float *param_1,ushort *param_2,uint param_3,long param_4)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if ((int)param_3 < 1) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  else {
    uVar1 = (ulong)param_3;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    do {
      uVar1 = uVar1 - 1;
      pfVar2 = (float *)(param_4 + (ulong)*param_2 * 0xc);
      fVar5 = *pfVar2 + fVar5;
      *param_1 = fVar5;
      fVar4 = pfVar2[1] + fVar4;
      param_1[1] = fVar4;
      fVar3 = pfVar2[2] + fVar3;
      param_1[2] = fVar3;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  fVar6 = 1.0 / (float)(int)param_3;
  *param_1 = fVar6 * fVar5;
  param_1[1] = fVar6 * fVar4;
  param_1[2] = fVar6 * fVar3;
  return;
}




undefined8 FUN_00efa8a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_2;
  fVar5 = param_2[2];
  fVar9 = *param_4 - fVar3;
  fVar4 = param_4[2] - fVar5;
  fVar6 = *param_3 - fVar3;
  fVar8 = param_3[2] - fVar5;
  fVar10 = fVar9 * fVar9 + fVar4 * fVar4;
  fVar2 = fVar9 * fVar6 + fVar4 * fVar8;
  fVar7 = fVar6 * fVar6 + fVar8 * fVar8;
  fVar9 = fVar9 * (*param_1 - fVar3) + fVar4 * (param_1[2] - fVar5);
  fVar5 = fVar6 * (*param_1 - fVar3) + fVar8 * (param_1[2] - fVar5);
  fVar3 = 1.0 / (fVar10 * fVar7 - fVar2 * fVar2);
  fVar4 = fVar3 * (fVar10 * fVar5 - fVar2 * fVar9);
  uVar1 = 0;
  if (((-0.0001 <= fVar4) && (fVar3 = fVar3 * (fVar7 * fVar9 - fVar2 * fVar5), -0.0001 <= fVar3)) &&
     (fVar3 + fVar4 <= 1.0001)) {
    fVar2 = param_2[1];
    uVar1 = 1;
    *param_5 = fVar4 * (param_3[1] - fVar2) + fVar2 + fVar3 * (param_4[1] - fVar2);
  }
  return uVar1;
}




uint FUN_00efa9a8(float *param_1,long param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = param_3 - 1;
  if ((int)param_3 < 1) {
    uVar3 = 0;
  }
  else {
    fVar7 = param_1[2];
    uVar4 = 0;
    uVar6 = 0;
    uVar3 = 0;
    do {
      pfVar1 = (float *)(param_2 + (uVar4 & 0xffffffff) * 4);
      fVar8 = pfVar1[2];
      pfVar2 = (float *)(param_2 + (long)(iVar5 * 3) * 4);
      fVar9 = pfVar2[2];
      if ((fVar7 < fVar8 != fVar7 < fVar9) &&
         (fVar10 = *pfVar1,
         *param_1 < fVar10 + ((fVar7 - fVar8) * (*pfVar2 - fVar10)) / (fVar9 - fVar8))) {
        uVar3 = uVar3 ^ 1;
      }
      iVar5 = (int)uVar6;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 3;
    } while (param_3 != uVar6);
  }
  return uVar3;
}




uint FUN_00efaa44(float *param_1,long param_2,uint param_3,long param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  iVar5 = param_3 - 1;
  if ((int)param_3 < 1) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    uVar3 = 0;
    do {
      pfVar1 = (float *)(param_2 + (uVar4 & 0xffffffff) * 4);
      fVar10 = param_1[2];
      fVar8 = pfVar1[2];
      pfVar2 = (float *)(param_2 + (long)iVar5 * 0xc);
      lVar7 = (long)iVar5;
      if ((fVar10 < fVar8 != fVar10 < pfVar2[2]) &&
         (*param_1 < *pfVar1 + ((fVar10 - fVar8) * (*pfVar2 - *pfVar1)) / (pfVar2[2] - fVar8))) {
        uVar3 = uVar3 ^ 1;
      }
      uVar9 = FUN_00efa76c(param_1,pfVar2,pfVar1,param_5 + lVar7 * 4);
      iVar5 = (int)uVar6;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 3;
      *(undefined4 *)(param_4 + lVar7 * 4) = uVar9;
    } while (param_3 != uVar6);
  }
  return uVar3;
}




void FUN_00efab3c(long param_1,int param_2,long param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74 [3];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar6 = param_2 + -1;
  if (0 < param_2) {
    uVar5 = 0;
    lVar7 = 0;
    do {
      pfVar1 = (float *)(param_1 + (uVar5 & 0xffffffff) * 4);
      pfVar2 = (float *)(param_1 + (long)(iVar6 * 3) * 4);
      local_74[1] = 0.0;
      local_74[0] = pfVar1[2] - pfVar2[2];
      local_74[2] = -(*pfVar1 - *pfVar2);
      FUN_00efad40(local_74,param_1,param_2,&local_78,&fStack_7c);
      FUN_00efad40(local_74,param_3,param_4,&local_80,&local_84);
      if (fStack_7c + -0.0001 < local_80) goto LAB_00efad08;
      uVar4 = 0;
      if (local_84 < local_78 + 0.0001) goto LAB_00efad0c;
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 1;
      uVar5 = uVar5 + 3;
    } while (lVar7 < param_2);
  }
  iVar6 = param_4 + -1;
  if (0 < param_4) {
    uVar5 = 0;
    lVar7 = 0;
    do {
      pfVar1 = (float *)(param_3 + (uVar5 & 0xffffffff) * 4);
      pfVar2 = (float *)(param_3 + (long)(iVar6 * 3) * 4);
      local_74[1] = 0.0;
      local_74[0] = pfVar1[2] - pfVar2[2];
      local_74[2] = -(*pfVar1 - *pfVar2);
      FUN_00efad40(local_74,param_1,param_2,&local_78,&fStack_7c);
      FUN_00efad40(local_74,param_3,param_4,&local_80,&local_84);
      if (fStack_7c + -0.0001 < local_80) goto LAB_00efad08;
      uVar4 = 0;
      if (local_84 < local_78 + 0.0001) goto LAB_00efad0c;
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 1;
      uVar5 = uVar5 + 3;
    } while (lVar7 < param_4);
  }
  uVar4 = 1;
LAB_00efad0c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
LAB_00efad08:
  uVar4 = 0;
  goto LAB_00efad0c;
}




void FUN_00efad40(float *param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1 * *param_2 + param_1[2] * param_2[2];
  *param_5 = fVar3;
  *param_4 = fVar3;
  if (1 < (int)param_3) {
    lVar1 = (ulong)param_3 - 2;
    uVar2 = 3;
    while( true ) {
      fVar4 = *param_1 * param_2[uVar2] + param_1[2] * (param_2 + uVar2)[2];
      if (fVar4 <= fVar3) {
        fVar3 = fVar4;
      }
      *param_4 = fVar3;
      fVar3 = *param_5;
      if (*param_5 <= fVar4) {
        fVar3 = fVar4;
      }
      *param_5 = fVar3;
      if (lVar1 == 0) break;
      fVar3 = *param_4;
      uVar2 = uVar2 + 3;
      lVar1 = lVar1 + -1;
    }
  }
  return;
}




void FUN_00efadcc(float param_1,float param_2,float *param_3,uint param_4,long param_5,
                 float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (2 < (int)param_4) {
    lVar3 = (ulong)param_4 - 2;
    fVar6 = 0.0;
    uVar4 = 6;
    pfVar2 = (float *)(param_5 + 8);
    do {
      fVar8 = ((param_3 + (int)(uVar4 - 3))[2] - param_3[2]) * (param_3[uVar4] - *param_3) -
              (param_3[(int)(uVar4 - 3)] - *param_3) * ((param_3 + uVar4)[2] - param_3[2]);
      *pfVar2 = fVar8;
      if (fVar8 <= 0.001) {
        fVar8 = 0.001;
      }
      lVar3 = lVar3 + -1;
      fVar6 = fVar6 + fVar8;
      uVar4 = uVar4 + 3;
      pfVar2 = pfVar2 + 1;
    } while (lVar3 != 0);
    if (2 < (int)param_4) {
      fVar6 = fVar6 * param_1;
      iVar5 = 6;
      lVar3 = 2;
      fVar8 = 0.0;
      do {
        fVar9 = *(float *)(param_5 + lVar3 * 4);
        fVar7 = fVar8 + fVar9;
        if ((fVar8 <= fVar6) && (fVar6 < fVar7)) {
          fVar9 = (fVar6 - fVar8) / fVar9;
          goto LAB_00efaeb4;
        }
        lVar3 = lVar3 + 1;
        iVar5 = iVar5 + 3;
        fVar8 = fVar7;
      } while (lVar3 < (int)param_4);
    }
  }
  iVar5 = 0;
  fVar9 = 0.0;
LAB_00efaeb4:
  fVar6 = SQRT(param_2);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(param_2);
  }
  pfVar2 = param_3 + iVar5;
  pfVar1 = param_3 + (iVar5 + -3);
  fVar7 = 1.0 - fVar6;
  fVar8 = fVar9 * fVar6;
  fVar6 = (1.0 - fVar9) * fVar6;
  *param_6 = fVar7 * *param_3 + fVar6 * *pfVar1 + fVar8 * *pfVar2;
  param_6[1] = fVar7 * param_3[1] + fVar6 * pfVar1[1] + fVar8 * pfVar2[1];
  param_6[2] = fVar7 * param_3[2] + fVar6 * pfVar1[2] + fVar8 * pfVar2[2];
  return;
}




bool FUN_00efaf74(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = *param_2 - *param_1;
  fVar3 = param_2[2] - param_1[2];
  fVar7 = *param_4 - *param_3;
  fVar6 = param_4[2] - param_3[2];
  fVar4 = fVar5 * fVar6 - fVar3 * fVar7;
  if (1e-06 <= ABS(fVar4)) {
    fVar1 = *param_1 - *param_3;
    fVar2 = param_1[2] - param_3[2];
    *param_5 = (fVar7 * fVar2 - fVar1 * fVar6) / fVar4;
    *param_6 = (fVar5 * fVar2 - fVar3 * fVar1) / fVar4;
  }
  return 1e-06 <= ABS(fVar4);
}

