// functions/019bb — 15 functions
#include "libGameKindred.h"




uint FUN_019bb0f4(undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  float local_68;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_019bade4();
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    local_70 = CONCAT44(-(float)((ulong)*param_5 >> 0x20),-(float)*param_5);
    local_68 = -*(float *)(param_5 + 1);
    FUN_019bbd68(auStack_60,&local_70,param_4);
    local_80 = CONCAT44(param_2 + (float)((ulong)*param_4 >> 0x20),(float)*param_4 + 0.0);
    local_78 = *(float *)(param_4 + 1) + 0.0;
    FUN_019bbd68(&local_70,param_5,&local_80);
    uVar2 = FUN_019bb210(param_3,auStack_60,&local_70,&local_4c,&local_50,&local_80,&local_80);
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = local_4c;
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = local_50;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_019bb210(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined4 *param_6,undefined4 *param_7)

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
  
  *param_6 = 0;
  *param_7 = 0;
  fVar3 = param_1[2];
  fVar8 = param_1[3];
  fVar5 = param_1[4];
  fVar4 = param_1[5];
  fVar7 = *param_1;
  fVar6 = param_1[1];
  fVar1 = *param_4;
  fVar10 = *param_2 * fVar8 + param_2[1] * fVar5 + param_2[2] * fVar4;
  fVar2 = *param_5;
  fVar9 = param_2[3] + *param_2 * fVar7 + param_2[1] * fVar6 + param_2[2] * fVar3;
  if (fVar10 == 0.0) {
    if (0.0 <= fVar9) {
      return false;
    }
  }
  else {
    fVar9 = -fVar9 / fVar10;
    if (0.0 <= fVar10) {
      if (fVar1 < fVar9 && fVar9 < fVar2) {
        *param_7 = 1;
        fVar2 = fVar9;
      }
      if (fVar9 < fVar1) {
        return false;
      }
    }
    else {
      if (fVar1 < fVar9 && fVar9 < fVar2) {
        *param_6 = 1;
        fVar1 = fVar9;
      }
      if (fVar2 < fVar9) {
        return false;
      }
    }
  }
  fVar4 = fVar8 * *param_3 + fVar5 * param_3[1] + fVar4 * param_3[2];
  fVar3 = param_3[3] + fVar7 * *param_3 + fVar6 * param_3[1] + fVar3 * param_3[2];
  if (fVar4 == 0.0) {
    if (0.0 <= fVar3) {
      return false;
    }
  }
  else {
    fVar3 = -fVar3 / fVar4;
    if (0.0 <= fVar4) {
      if (fVar1 < fVar3 && fVar3 < fVar2) {
        *param_7 = 2;
        fVar2 = fVar3;
      }
      if (fVar3 < fVar1) {
        return false;
      }
    }
    else {
      if (fVar1 < fVar3 && fVar3 < fVar2) {
        *param_6 = 2;
        fVar1 = fVar3;
      }
      if (fVar2 < fVar3) {
        return false;
      }
    }
  }
  *param_4 = fVar1;
  *param_5 = fVar2;
  return fVar1 < fVar2;
}




undefined8 FUN_019bb398(float param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar2 = *param_2;
  fVar10 = param_2[1];
  fVar3 = *param_3;
  fVar7 = param_3[1];
  param_1 = param_1 * param_1;
  fVar9 = fVar2 - fVar3;
  fVar8 = fVar10 - fVar7;
  fVar4 = (fVar9 * fVar9 + fVar8 * fVar8) - param_1;
  if (0.0 < fVar4) {
    fVar11 = *param_4;
    fVar14 = param_4[1];
    fVar6 = fVar2 - fVar11;
    fVar5 = fVar10 - fVar14;
    fVar1 = (fVar6 * fVar6 + fVar5 * fVar5) - param_1;
    if (0.0 < fVar1) {
      fVar16 = *param_5;
      fVar15 = param_5[1];
      fVar2 = fVar2 - fVar16;
      fVar10 = fVar10 - fVar15;
      param_1 = (fVar2 * fVar2 + fVar10 * fVar10) - param_1;
      if (0.0 < param_1) {
        fVar12 = fVar11 - fVar3;
        fVar13 = fVar14 - fVar7;
        fVar11 = fVar16 - fVar11;
        fVar14 = fVar15 - fVar14;
        fVar3 = fVar3 - fVar16;
        fVar7 = fVar7 - fVar15;
        if (((((fVar9 * fVar13 < fVar8 * fVar12) || (fVar6 * fVar14 < fVar5 * fVar11)) ||
             (fVar2 * fVar7 < fVar3 * fVar10)) &&
            ((((fVar8 = fVar9 * fVar12 + fVar8 * fVar13, fVar8 <= 0.0 ||
               (fVar9 = fVar12 * fVar12 + fVar13 * fVar13, fVar9 <= fVar8)) ||
              (fVar8 * fVar8 < fVar4 * fVar9)) &&
             (((fVar4 = fVar6 * fVar11 + fVar5 * fVar14, fVar4 <= 0.0 ||
               (fVar8 = fVar11 * fVar11 + fVar14 * fVar14, fVar8 <= fVar4)) ||
              (fVar4 * fVar4 < fVar1 * fVar8)))))) &&
           (((fVar2 = fVar2 * fVar3 + fVar10 * fVar7, fVar2 <= 0.0 ||
             (fVar10 = fVar3 * fVar3 + fVar7 * fVar7, fVar10 <= fVar2)) ||
            (fVar2 * fVar2 < fVar10 * param_1)))) {
          return 0;
        }
      }
    }
  }
  return 1;
}




bool FUN_019bb50c(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4,
                 undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_q5 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar10 = in_q5._4_4_;
  fVar9 = in_q5._0_4_;
  if (param_4 != 0) {
    bVar3 = false;
    uVar4 = 0;
    fVar11 = 0.0;
    fVar5 = (float)*param_1;
    fVar7 = (float)*param_2 - fVar5;
    fVar6 = (float)((ulong)*param_1 >> 0x20);
    fVar8 = (float)((ulong)*param_2 >> 0x20) - fVar6;
    do {
      pfVar1 = (float *)(param_3 + (ulong)uVar4 * 8);
      pfVar2 = (float *)(param_3 + (ulong)(uVar4 + 1) * 8);
      fVar12 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar16 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar18 = fVar7 * (fVar14 - fVar13) - fVar8 * (fVar16 - fVar12);
      if (fVar18 != 0.0) {
        fVar17 = ((fVar12 - fVar5) * (fVar14 - fVar13) - (fVar16 - fVar12) * (fVar13 - fVar6)) /
                 fVar18;
        if ((((fVar11 < fVar17) &&
             (fVar18 = (fVar8 * (fVar12 - fVar5) - fVar7 * (fVar13 - fVar6)) / fVar18, fVar18 <= 1.0
             )) && (0.0 <= fVar18)) && ((0.0 <= fVar17 && (fVar17 <= 1.0)))) {
          fVar9 = fVar5 + fVar7 * fVar17;
          fVar10 = fVar6 + fVar8 * fVar17;
          bVar3 = true;
          fVar11 = fVar17;
        }
      }
      pfVar1 = (float *)(param_3 + (ulong)(uVar4 + 2) * 8);
      fVar17 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar18 = fVar7 * (fVar19 - fVar14) - fVar8 * (fVar17 - fVar16);
      if (fVar18 != 0.0) {
        fVar15 = ((fVar16 - fVar5) * (fVar19 - fVar14) - (fVar14 - fVar6) * (fVar17 - fVar16)) /
                 fVar18;
        if (((fVar11 < fVar15) &&
            (fVar18 = (fVar8 * (fVar16 - fVar5) - fVar7 * (fVar14 - fVar6)) / fVar18, fVar18 <= 1.0)
            ) && ((0.0 <= fVar18 && ((0.0 <= fVar15 && (fVar15 <= 1.0)))))) {
          fVar9 = fVar5 + fVar7 * fVar15;
          fVar10 = fVar6 + fVar8 * fVar15;
          bVar3 = true;
          fVar11 = fVar15;
        }
      }
      fVar14 = fVar7 * (fVar13 - fVar19) - fVar8 * (fVar12 - fVar17);
      if (fVar14 != 0.0) {
        fVar16 = (fVar8 * (fVar17 - fVar5) - fVar7 * (fVar19 - fVar6)) / fVar14;
        if ((((fVar16 <= 1.0) && (0.0 <= fVar16)) &&
            (fVar14 = ((fVar17 - fVar5) * (fVar13 - fVar19) - (fVar12 - fVar17) * (fVar19 - fVar6))
                      / fVar14, 0.0 <= fVar14)) && ((fVar14 <= 1.0 && (fVar11 < fVar14)))) {
          fVar9 = fVar5 + fVar7 * fVar14;
          fVar10 = fVar6 + fVar8 * fVar14;
          bVar3 = true;
          fVar11 = fVar14;
        }
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 < param_4);
    if (bVar3) {
      *param_5 = CONCAT44(fVar10,fVar9);
    }
    return bVar3;
  }
  return false;
}




undefined1  [16] FUN_019bb6fc(float *param_1,float *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
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
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  fVar9 = param_1[3] - *param_1;
  fVar7 = param_1[4] - param_1[1];
  fVar5 = param_1[5] - param_1[2];
  fVar4 = param_2[3] - *param_2;
  fVar3 = param_2[4] - param_2[1];
  fVar1 = param_2[5] - param_2[2];
  fVar10 = *param_1 - *param_2;
  fVar8 = param_1[1] - param_2[1];
  fVar6 = param_1[2] - param_2[2];
  fVar14 = fVar9 * fVar9 + fVar7 * fVar7 + fVar5 * fVar5;
  fVar17 = fVar9 * fVar4 + fVar7 * fVar3 + fVar5 * fVar1;
  fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
  fVar16 = fVar9 * fVar10 + fVar7 * fVar8 + fVar5 * fVar6;
  fVar13 = fVar4 * fVar10 + fVar3 * fVar8 + fVar1 * fVar6;
  fVar12 = fVar14 * fVar11 - fVar17 * fVar17;
  if (1.1920929e-07 <= fVar12) {
    fVar18 = fVar17 * fVar13 - fVar11 * fVar16;
    fVar15 = 0.0;
    if (0.0 <= fVar18) {
      if (fVar18 <= fVar12) {
        fVar13 = fVar14 * fVar13 - fVar17 * fVar16;
        fVar11 = fVar12;
        fVar15 = fVar18;
      }
      else {
        fVar13 = fVar13 + fVar17;
        fVar15 = fVar12;
      }
    }
  }
  else {
    fVar12 = 1.0;
    fVar15 = 0.0;
  }
  if (0.0 <= fVar13) {
    if (fVar11 < fVar13) {
      fVar17 = fVar17 - fVar16;
      fVar13 = fVar11;
      fVar15 = 0.0;
      if ((0.0 <= fVar17) && (fVar15 = fVar12, fVar17 <= fVar14)) {
        fVar15 = fVar17;
        fVar12 = fVar14;
      }
    }
  }
  else {
    fVar13 = 0.0;
    if (fVar16 <= -0.0) {
      fVar15 = fVar12;
      if (-fVar16 <= fVar14) {
        fVar15 = -fVar16;
        fVar12 = fVar14;
      }
    }
    else {
      fVar13 = 0.0;
      fVar15 = 0.0;
    }
  }
  fVar17 = 0.0;
  if (1.1920929e-07 <= ABS(fVar15)) {
    fVar17 = fVar15 / fVar12;
  }
  fVar12 = 0.0;
  if (1.1920929e-07 <= ABS(fVar13)) {
    fVar12 = fVar13 / fVar11;
  }
  fVar4 = (fVar10 + fVar9 * fVar17) - fVar4 * fVar12;
  fVar13 = (fVar8 + fVar7 * fVar17) - fVar3 * fVar12;
  fVar11 = (fVar6 + fVar5 * fVar17) - fVar1 * fVar12;
  fVar11 = fVar11 * fVar11 + fVar4 * fVar4 + fVar13 * fVar13;
  fVar13 = SQRT(fVar11);
  if (NAN(fVar13)) {
    auVar2._0_4_ = sqrtf(fVar11);
    auVar2._4_4_ = extraout_var;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT416((uint)fVar13);
}




undefined8
FUN_019bb8ec(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,
            undefined8 *param_5)

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
  float fVar11;
  
  uVar1 = 0;
  fVar2 = (float)*param_1;
  fVar4 = (float)*param_2 - fVar2;
  fVar3 = (float)((ulong)*param_1 >> 0x20);
  fVar5 = (float)((ulong)*param_2 >> 0x20) - fVar3;
  fVar6 = *param_4 - *param_3;
  fVar7 = param_4[1] - param_3[1];
  fVar8 = fVar7 * fVar4 - fVar6 * fVar5;
  if (fVar8 != 0.0) {
    fVar10 = *param_3 - fVar2;
    fVar9 = param_3[1] - fVar3;
    fVar11 = (fVar10 * fVar5 - fVar9 * fVar4) / fVar8;
    if (((1.0 < fVar11) || (fVar11 < 0.0)) ||
       (fVar8 = (fVar10 * fVar7 - fVar9 * fVar6) / fVar8, fVar8 < 0.0)) {
      return 0;
    }
    uVar1 = 0;
    if (fVar8 <= 1.0) {
      uVar1 = 1;
      *param_5 = CONCAT44(fVar3 + fVar5 * fVar8,fVar2 + fVar4 * fVar8);
    }
  }
  return uVar1;
}




uint FUN_019bb994(float *param_1,long param_2,long param_3,uint param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d8;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar18 = 3.4028235e+38;
  fVar10 = 3.4028235e+38;
  if (param_4 == 0) {
    uVar6 = 0;
    uVar7 = 1;
  }
  else {
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 1;
    fVar18 = fVar10;
    do {
      uVar14 = *(undefined8 *)(param_2 + uVar8 * 8);
      uVar15 = *(undefined8 *)(param_3 + uVar8 * 8);
      fVar9 = (float)*(undefined8 *)param_1 - (float)uVar14;
      fVar11 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - (float)((ulong)uVar14 >> 0x20);
      fVar16 = fVar9 * (float)uVar15 + fVar11 * (float)((ulong)uVar15 >> 0x20);
      if (0.0 <= fVar16) {
        if (param_5 != (float *)0x0) goto LAB_019bba30;
      }
      else {
        uVar7 = 0;
        if (param_5 == (float *)0x0) {
          return 0;
        }
LAB_019bba30:
        fVar11 = fVar9 * fVar9 + fVar11 * fVar11;
        fVar9 = SQRT(fVar11);
        if (NAN(fVar9)) {
          fVar9 = sqrtf(fVar11);
        }
        uVar4 = (uint)uVar8;
        if (fVar18 <= fVar9) {
          uVar4 = uVar6;
          fVar9 = fVar18;
        }
        uVar6 = uVar4;
        fVar18 = fVar9;
        if (fVar16 < fVar10 && ((uVar7 ^ 0xffffffff) & 1) == 0) {
          uVar14 = *(undefined8 *)(param_3 + uVar8 * 8);
          uVar7 = 1;
          unaff_d8 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) -
                              (float)((ulong)uVar14 >> 0x20) * fVar16,
                              (float)*(undefined8 *)param_1 - (float)uVar14 * fVar16);
          fVar10 = fVar16;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_4);
  }
  if (param_5 != (float *)0x0) {
    if (uVar7 == 0) {
      uVar7 = param_4;
      if (uVar6 != 0) {
        uVar7 = uVar6;
      }
      pfVar1 = (float *)(param_2 + (ulong)uVar6 * 8);
      uVar8 = 0;
      if (uVar6 + 1 != param_4) {
        uVar8 = (ulong)(uVar6 + 1);
      }
      pfVar3 = (float *)(param_2 + uVar8 * 8);
      pfVar2 = (float *)(param_2 + (ulong)(uVar7 - 1) * 8);
      pfVar5 = pfVar1 + 1;
      fVar19 = *pfVar3 - *pfVar1;
      fVar9 = pfVar3[1] - *pfVar5;
      fVar22 = *pfVar1 - *pfVar2;
      fVar11 = fVar19 * fVar19 + fVar9 * fVar9;
      fVar10 = SQRT(fVar11);
      fVar16 = *pfVar5 - pfVar2[1];
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar11);
      }
      fVar17 = fVar22 * fVar22 + fVar16 * fVar16;
      fVar12 = SQRT(fVar17);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar17);
      }
      fVar23 = *param_1;
      fVar20 = param_1[1];
      fVar21 = (-fVar9 / fVar10) * (fVar23 - *pfVar1) + (fVar19 / fVar10) * (fVar20 - *pfVar5);
      fVar13 = SQRT(fVar11);
      fVar24 = (-fVar16 / fVar12) * (fVar23 - *pfVar1) + (fVar22 / fVar12) * (fVar20 - *pfVar5);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(fVar11);
      }
      fVar25 = fVar20 - (fVar19 / fVar10) * fVar21;
      fVar11 = SQRT(fVar17);
      fVar10 = fVar23 - (-fVar9 / fVar10) * fVar21;
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar17);
      }
      fVar20 = fVar20 - (fVar22 / fVar12) * fVar24;
      fVar17 = (fVar19 / fVar13) * (fVar10 - *pfVar1);
      fVar13 = (fVar9 / fVar13) * (fVar25 - *pfVar5);
      fVar23 = fVar23 - (-fVar16 / fVar12) * fVar24;
      fVar19 = (fVar22 / fVar11) * (*pfVar1 - fVar23);
      fVar11 = (fVar16 / fVar11) * (*pfVar5 - fVar20);
      fVar9 = fVar21;
      if (fVar18 <= fVar21 || (fVar17 + fVar13 < 0.0 || -fVar13 - fVar17 == 0.0)) {
        fVar9 = fVar18;
      }
      fVar18 = fVar24;
      if (fVar9 <= fVar24 || (fVar19 + fVar11 < 0.0 || -fVar11 - fVar19 == 0.0)) {
        fVar18 = fVar9;
      }
      uVar7 = 0;
      if (fVar18 == fVar21) {
        *param_5 = fVar10;
        param_5[1] = fVar25;
      }
      else if (fVar18 == fVar24) {
        *param_5 = fVar23;
        param_5[1] = fVar20;
      }
      else {
        *(undefined8 *)param_5 = *(undefined8 *)pfVar1;
      }
    }
    else {
      *(undefined8 *)param_5 = unaff_d8;
      uVar7 = 1;
    }
  }
  return uVar7;
}




void FUN_019bbd38(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)((long)param_2 + 0xc) = param_1;
  *param_2 = uVar1;
  return;
}




void FUN_019bbd50(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)((long)param_2 + 0xc) = param_1;
  *param_2 = uVar1;
  return;
}




void FUN_019bbd68(undefined8 *param_1,float *param_2,float *param_3)

{
  *(float *)(param_1 + 1) = param_2[2];
  *param_1 = *(undefined8 *)param_2;
  *(float *)((long)param_1 + 0xc) =
       -(*param_2 * *param_3 + param_2[1] * param_3[1] + param_2[2] * param_3[2]);
  return;
}




void FUN_019bbda8(undefined8 *param_1,float *param_2,float *param_3)

{
  *(float *)(param_1 + 1) = param_2[2];
  *param_1 = *(undefined8 *)param_2;
  *(float *)((long)param_1 + 0xc) =
       -(*param_2 * *param_3 + param_2[1] * param_3[1] + param_2[2] * param_3[2]);
  return;
}




void thunk_FUN_019bbdec(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_3 - *param_2;
  fVar3 = *param_4 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar5 = param_4[1] - param_2[1];
  fVar7 = param_4[2] - param_2[2];
  fVar4 = fVar2 * fVar7 - fVar6 * fVar5;
  fVar6 = fVar6 * fVar3 - fVar1 * fVar7;
  fVar3 = fVar1 * fVar5 - fVar2 * fVar3;
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6;
  fVar1 = SQRT(fVar2);
  *param_1 = fVar4;
  param_1[1] = fVar6;
  param_1[2] = fVar3;
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_1 = fVar2 / fVar1;
  param_1[1] = fVar3 / fVar1;
  param_1[2] = fVar4 / fVar1;
  param_1[3] = -((fVar2 / fVar1) * *param_2 + (fVar3 / fVar1) * param_2[1] +
                (fVar4 / fVar1) * param_2[2]);
  return;
}




void FUN_019bbdec(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_3 - *param_2;
  fVar3 = *param_4 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar5 = param_4[1] - param_2[1];
  fVar7 = param_4[2] - param_2[2];
  fVar4 = fVar2 * fVar7 - fVar6 * fVar5;
  fVar6 = fVar6 * fVar3 - fVar1 * fVar7;
  fVar3 = fVar1 * fVar5 - fVar2 * fVar3;
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6;
  fVar1 = SQRT(fVar2);
  *param_1 = fVar4;
  param_1[1] = fVar6;
  param_1[2] = fVar3;
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_1 = fVar2 / fVar1;
  param_1[1] = fVar3 / fVar1;
  param_1[2] = fVar4 / fVar1;
  param_1[3] = -((fVar2 / fVar1) * *param_2 + (fVar3 / fVar1) * param_2[1] +
                (fVar4 / fVar1) * param_2[2]);
  return;
}




void FUN_019bbed0(long param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = 0;
  do {
    puVar1 = (uint *)(param_1 + lVar5);
    lVar2 = param_1 + 0x400;
    lVar5 = lVar5 + 4;
    uVar3 = *param_2 ^ *puVar1;
    *param_2 = uVar3;
    uVar3 = *param_3 ^
            (*(int *)(lVar2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x400) +
             *(int *)(lVar2 + (ulong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(lVar2 + (ulong)(uVar3 >> 8 & 0xff) * 4 + 0x800)) +
            *(int *)(lVar2 + (ulong)(uVar3 & 0xff) * 4 + 0xc00);
    *param_3 = uVar3;
    uVar4 = *param_2;
    *param_2 = uVar3;
    *param_3 = uVar4;
  } while (lVar5 != 0x40);
  uVar3 = *param_2;
  *param_2 = uVar4;
  *param_3 = uVar3;
  *param_3 = *(uint *)(param_1 + 0x40) ^ uVar3;
  *param_2 = *param_2 ^ *(uint *)(param_1 + 0x44);
  return;
}




void FUN_019bbf70(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0x11;
  do {
    uVar2 = *param_2 ^ param_1[uVar4];
    *param_2 = uVar2;
    uVar2 = *param_3 ^
            (param_1[(ulong)(uVar2 >> 0x10 & 0xff) + 0x200] +
             param_1[(ulong)(uVar2 >> 0x18) + 0x100] ^ param_1[(ulong)(uVar2 >> 8 & 0xff) + 0x300])
            + param_1[(ulong)(uVar2 & 0xff) + 0x400];
    *param_3 = uVar2;
    uVar3 = *param_2;
    *param_2 = uVar2;
    *param_3 = uVar3;
    bVar1 = 2 < uVar4;
    uVar4 = uVar4 - 1;
  } while (bVar1);
  uVar2 = *param_2;
  *param_2 = uVar3;
  *param_3 = uVar2;
  *param_3 = param_1[1] ^ uVar2;
  *param_2 = *param_2 ^ *param_1;
  return;
}

