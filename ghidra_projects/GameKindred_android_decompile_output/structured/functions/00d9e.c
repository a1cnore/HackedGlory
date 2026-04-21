// functions/00d9e — 35 functions
#include "libGameKindred.h"




float FUN_00d9e0c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_48 [4];
  float local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_1,local_38,0);
  FUN_00d55794(param_2,local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    fVar2 = (float)local_38._4_8_ - (float)local_48._4_8_;
    fVar3 = SUB84(local_38._4_8_,4) - SUB84(local_48._4_8_,4);
    return (local_38[0] - local_48[0]) * (local_38[0] - local_48[0]) + fVar2 * fVar2 + fVar3 * fVar3
    ;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9e150(undefined8 param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_1,local_38,0);
  fVar2 = (float)local_38._4_8_ - (float)*(undefined8 *)(param_2 + 1);
  fVar3 = SUB84(local_38._4_8_,4) - (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar2 = (local_38[0] - *param_2) * (local_38[0] - *param_2) + fVar2 * fVar2 + fVar3 * fVar3;
  if (NAN(SQRT(fVar2))) {
    sqrtf(fVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9e1e0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float __x;
  float fVar2;
  float local_58 [2];
  float local_50;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_1,local_48,0);
  FUN_00d55794(param_2,local_58,0);
  local_58[0] = local_58[0] - local_48[0];
  local_50 = local_50 - local_40;
  __x = local_58[0] * local_58[0] + local_50 * local_50;
  *param_3 = local_58[0];
  param_3[1] = local_50;
  if (1e-08 <= __x) {
    fVar2 = SQRT(__x);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(__x);
    }
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) / fVar2,
                  (float)*(undefined8 *)param_3 / fVar2);
  }
  else {
    *(undefined8 *)param_3 = DAT_03218f20;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d9e2c0(undefined8 param_1,float *param_2,float *param_3)

{
  long lVar1;
  float __x;
  float fVar2;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_1,local_48,0);
  local_48[0] = *param_2 - local_48[0];
  local_40 = param_2[2] - local_40;
  __x = local_48[0] * local_48[0] + local_40 * local_40;
  *param_3 = local_48[0];
  param_3[1] = local_40;
  if (1e-08 <= __x) {
    fVar2 = SQRT(__x);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(__x);
    }
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) / fVar2,
                  (float)*(undefined8 *)param_3 / fVar2);
  }
  else {
    *(undefined8 *)param_3 = DAT_03218f20;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d9e390(int param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long local_678 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  lVar3 = 0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != -1) {
    uVar2 = FUN_019889cc(local_678,200,DAT_02c09220,0);
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar3 = local_678[lVar4];
        if (*(int *)(lVar3 + 0x260) == param_1) goto LAB_00d9e414;
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < uVar2);
    }
    lVar3 = 0;
  }
LAB_00d9e414:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}




bool FUN_00d9e43c(void)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390();
  return lVar1 != 0;
}




long FUN_00d9e458(undefined8 param_1,uint param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x27;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined1 auStack_6d0 [16];
  undefined1 auStack_6c0 [16];
  long local_6b0 [200];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_019889cc(local_6b0,200,DAT_02c09220,0);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      lVar5 = local_6b0[uVar6];
      if ((param_2 & (*(uint *)(lVar5 + 0x2f4) ^ 0xffffffff)) == 0) {
        FUN_00d5b4e0(lVar5,auStack_6c0,auStack_6d0,&uStack_6d4,&local_6d8);
        uVar4 = FUN_019bb0f4(uStack_6d4,local_6d8,param_1,auStack_6c0,auStack_6d0,0,0);
        if ((uVar4 & 1) == 0) {
LAB_00d9e518:
          bVar2 = true;
          lVar5 = unaff_x27;
        }
        else if (param_3 == 0) {
          bVar2 = false;
        }
        else {
          uVar4 = FUN_00d4d280(param_3,lVar5);
          bVar2 = false;
          if ((uVar4 & 1) == 0) goto LAB_00d9e518;
        }
        unaff_x27 = lVar5;
        if (!bVar2) goto LAB_00d9e540;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  lVar5 = 0;
LAB_00d9e540:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00d9e578(undefined8 param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined1 auStack_6c8 [16];
  undefined1 auStack_6b8 [16];
  long local_6a8 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_6a8,200,DAT_02c09220,0);
  lVar4 = 0;
  if (uVar2 != 0) {
    fVar9 = 999999.0;
    uVar6 = (ulong)uVar2;
    plVar7 = local_6a8;
    do {
      lVar5 = *plVar7;
      if (((param_2 & (*(uint *)(lVar5 + 0x2f4) ^ 0xffffffff)) == 0) &&
         ((*(byte *)(lVar5 + 0x2f9) & 1) == 0)) {
        FUN_00d5b4e0(lVar5,auStack_6b8,auStack_6c8,&uStack_6cc,&local_6d0);
        uVar3 = FUN_019bb0f4(uStack_6cc,local_6d0,param_1,auStack_6b8,auStack_6c8,0,0);
        if (((uVar3 & 1) != 0) &&
           (((param_3 == 0 || (uVar3 = FUN_00d4d280(param_3,lVar5), (uVar3 & 1) != 0)) &&
            (fVar8 = *(float *)(*(long *)(lVar5 + 0x40) + 0x308), fVar8 < fVar9)))) {
          lVar4 = lVar5;
          fVar9 = fVar8;
        }
      }
      uVar6 = uVar6 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d9e6a8(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 unaff_x26;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined1 auStack_6c8 [16];
  undefined1 auStack_6b8 [16];
  undefined8 local_6a8 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_019889cc(local_6a8,200,DAT_02c09220,0);
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      uVar5 = local_6a8[uVar6];
      FUN_00d5b4e0(uVar5,auStack_6b8,auStack_6c8,&uStack_6cc,&local_6d0);
      uVar4 = FUN_019bb0f4(uStack_6cc,local_6d0,param_1,auStack_6b8,auStack_6c8,0,0);
      if ((uVar4 & 1) == 0) {
LAB_00d9e758:
        bVar2 = true;
        uVar5 = unaff_x26;
      }
      else {
        if (param_2 == 0) goto LAB_00d9e788;
        uVar4 = FUN_00d4d280(param_2,uVar5);
        bVar2 = false;
        if ((uVar4 & 1) == 0) goto LAB_00d9e758;
      }
      if (!bVar2) goto LAB_00d9e788;
      uVar6 = uVar6 + 1;
      unaff_x26 = uVar5;
    } while (uVar6 < uVar3);
  }
  uVar5 = 0;
LAB_00d9e788:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d9e7c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d5b4e0(param_2,auStack_38,auStack_48,&uStack_4c,&local_50);
  uVar2 = FUN_019bb0f4(uStack_4c,local_50,param_1,auStack_38,auStack_48,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d9e840(undefined8 param_1,undefined8 *param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_6b0 [200];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_6b0,200,DAT_02c09220,0);
  uVar3 = 0;
  if ((uVar2 != 0) && (param_3 != 0)) {
    uVar8 = 0;
    uVar3 = 0;
    puVar5 = param_2;
    do {
      uVar7 = local_6b0[uVar8];
      uVar4 = FUN_00d4d280(param_1,uVar7);
      puVar6 = puVar5;
      if ((uVar4 & 1) != 0) {
        puVar6 = puVar5 + 1;
        *puVar5 = uVar7;
        uVar3 = uVar3 + 1;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 < uVar2) && (puVar5 = puVar6, uVar3 < param_3));
  }
  if (param_4 != 0) {
    uVar3 = FUN_00d4eab4(param_4,param_2,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00d9e934(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_00d55870();
  cVar2 = FUN_00d55870(param_2);
  return cVar1 == cVar2;
}




bool FUN_00d9e968(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_00cedf10();
  cVar2 = FUN_00d55870(param_1);
  return cVar1 != cVar2;
}




bool FUN_00d9e99c(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_00cedf10();
  cVar2 = FUN_00d55870(param_1);
  return cVar1 == cVar2;
}




bool FUN_00d9e9d0(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cedce4();
  return iVar1 == *(int *)(param_1 + 0x260);
}




uint FUN_00d9e9fc(long param_1)

{
  return *(uint *)(param_1 + 0x2f4) & 1;
}




void FUN_00d9ea08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9ea34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




long FUN_00d9ea60(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)*param_1;
  lVar3 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] != (int)plVar1[1]) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      return 0;
    }
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_03130aa8))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
    }
  }
  return lVar3;
}




void FUN_00d9eae0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9eb0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9eb38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9eb64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9eb90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf38))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9ebbc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf38))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9ebe8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_03133530))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_00d9ec14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_03133530))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




bool FUN_00d9ec40(long param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  *param_3 = 0xffffffff;
  lVar5 = *(long *)(param_1 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar3 = FUN_00d6eb50();
  uVar2 = FUN_00d6e9d4(uVar3,param_2);
  uVar4 = FUN_00d73590(lVar5,uVar2);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    uVar2 = FUN_00d73004(lVar5,uVar2);
    *param_3 = uVar2;
  }
  return bVar1;
}




float FUN_00d9ecdc(long param_1,uint param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40) + (ulong)param_2 * 4;
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if ((float)(&DAT_031abb30)[param_2] <= fVar2) {
    fVar2 = (float)(&DAT_031abb30)[param_2];
  }
  fVar3 = (float)(&DAT_031aba70)[param_2];
  if ((float)(&DAT_031aba70)[param_2] <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3;
}




undefined4 FUN_00d9ed38(long param_1,uint param_2)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 4 + 0x308);
}




float FUN_00d9ed48(long param_1,undefined4 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x1a0) + 1.0;
    fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
    fVar4 = DAT_031aba70;
    fVar6 = DAT_031abb30;
    break;
  case 1:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x250) + 1.0;
    fVar2 = *(float *)(lVar1 + 0xe8) + *(float *)(lVar1 + 0x19c) * (*(float *)(lVar1 + 0x304) + 1.0)
    ;
    fVar4 = DAT_031abb20;
    fVar6 = DAT_031abbe0;
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x1a8) + 1.0;
    fVar2 = *(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0);
    fVar4 = DAT_031aba78;
    fVar6 = DAT_031abb38;
    break;
  case 3:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x24c) + 1.0;
    fVar2 = *(float *)(lVar1 + 0xe4) + *(float *)(lVar1 + 0x198) * (*(float *)(lVar1 + 0x300) + 1.0)
    ;
    fVar4 = DAT_031abb18._4_4_;
    fVar6 = DAT_031abbdc;
    break;
  default:
    return 0.0;
  }
  fVar3 = fVar5 * fVar2;
  if (fVar6 <= fVar5 * fVar2) {
    fVar3 = fVar6;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  return fVar4;
}




float FUN_00d9ee8c(long param_1)

{
  long lVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d772c8(param_1,&local_34,3);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x1e8) + 1.0) *
          (*(float *)(lVar3 + 0x80) + *(float *)(lVar3 + 0x134) * (*(float *)(lVar3 + 0x29c) + 1.0))
  ;
  if (DAT_031abb78 <= fVar4) {
    fVar4 = DAT_031abb78;
  }
  fVar2 = DAT_031abab8;
  if (DAT_031abab8 <= fVar4) {
    fVar2 = fVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    fVar4 = (1.0 - local_2c) * (fStack_30 + local_34 + fVar2);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00d9ef60(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d9ee8c();
  return *(float *)(*(long *)(param_1 + 0x40) + 0x80) + 0.9 <= fVar1;
}




bool FUN_00d9ef9c(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d9ee8c();
  return *(float *)(*(long *)(param_1 + 0x40) + 0x80) + 1.8 <= fVar1;
}




undefined8 FUN_00d9efd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ec00) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d7d300();
  return uVar2;
}

