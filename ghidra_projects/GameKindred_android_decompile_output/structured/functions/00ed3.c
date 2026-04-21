// functions/00ed3 — 34 functions
#include "libGameKindred.h"




undefined4 FUN_00ed30c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}




void FUN_00ed30cc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00ed2e0c();
  if (lVar1 != 0) {
    FUN_00ed2ed0(param_1,lVar1);
    return;
  }
  return;
}




undefined8 FUN_00ed3104(long param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    return **(undefined8 **)(param_1 + 0xc0);
  }
  return 0;
}




void FUN_00ed3120(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_00f13f08(param_1 + 200);
  uVar1 = (ulong)*(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xc0) + lVar2 + 0xd) != '\0') {
        FUN_00f07a78(0,0,*(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar2),8);
        uVar1 = (ulong)*(uint *)(param_1 + 0xb8);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < uVar1);
  }
  return;
}




void FUN_00ed3194(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




undefined8 * FUN_00ed3218(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar5 = param_1[1];
    puVar15 = *(undefined8 **)(param_1 + 2);
    uVar14 = (ulong)((long)param_4 - (long)param_3) >> 4;
    uVar13 = (uint)uVar14;
    uVar12 = (long)param_2 - (long)puVar15;
    if (uVar5 - uVar1 < uVar13) {
      uVar1 = uVar1 + uVar13;
      if (uVar5 < 0x20) {
        uVar5 = uVar5 << 1;
      }
      else if (uVar5 == 0xffffffff) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uVar5 + 0x10) - (uVar5 & 0xf);
      }
      uVar13 = uVar1;
      if (uVar1 <= uVar5) {
        uVar13 = uVar5;
      }
      puVar3 = operator_new__((ulong)uVar13 << 4);
      puVar6 = puVar3;
      for (; puVar15 != param_2; puVar15 = puVar15 + 2) {
        uVar16 = *puVar15;
        puVar6[1] = puVar15[1];
        *puVar6 = uVar16;
        puVar6 = puVar6 + 2;
      }
      puVar15 = puVar3 + (uVar12 >> 4 & 0xffffffff) * 2;
      puVar6 = puVar15;
      do {
        puVar7 = param_3 + 2;
        uVar16 = *param_3;
        puVar6[1] = param_3[1];
        *puVar6 = uVar16;
        puVar6 = puVar6 + 2;
        param_3 = puVar7;
      } while (param_4 != puVar7);
      pvVar4 = *(void **)(param_1 + 2);
      puVar6 = (undefined8 *)((long)pvVar4 + (ulong)*param_1 * 0x10);
      if (puVar6 != param_2) {
        puVar7 = puVar15 + (uVar14 & 0xffffffff) * 2;
        do {
          puVar11 = param_2 + 2;
          uVar16 = *param_2;
          puVar7[1] = param_2[1];
          *puVar7 = uVar16;
          puVar7 = puVar7 + 2;
          param_2 = puVar11;
        } while (puVar6 != puVar11);
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
      param_1[1] = uVar13;
      param_2 = puVar15;
    }
    else {
      puVar15 = puVar15 + (ulong)uVar1 * 2;
      uVar8 = (long)puVar15 - (long)param_2;
      uVar9 = uVar8 >> 4;
      uVar14 = (ulong)((long)param_4 - (long)param_3) >> 4 & 0xffffffff;
      if (uVar13 < (uint)uVar9) {
        puVar6 = puVar15 + uVar14 * -2;
        if (uVar14 != 0) {
          lVar10 = 0;
          do {
            uVar16 = *(undefined8 *)((long)puVar6 + lVar10);
            ((undefined8 *)((long)puVar15 + lVar10))[1] = ((undefined8 *)((long)puVar6 + lVar10))[1]
            ;
            *(undefined8 *)((long)puVar15 + lVar10) = uVar16;
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != uVar14 * 0x10);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10 + uVar14 * -0x10);
        }
        lVar10 = (long)puVar6 - (long)param_2;
        if (lVar10 != 0) {
          do {
            lVar2 = lVar10 + uVar14 * 0x10;
            lVar10 = lVar10 + -0x10;
            *(undefined8 *)((long)param_2 + lVar2 + -9) = *(undefined8 *)((long)puVar6 + -9);
            *(undefined8 *)((long)param_2 + lVar2 + -0x10) = puVar6[-2];
            puVar6 = puVar6 + -2;
          } while (lVar10 != 0);
        }
        do {
          *(undefined8 *)((long)param_2 + 7) = *(undefined8 *)((long)param_3 + 7);
          puVar15 = param_3 + 2;
          *param_2 = *param_3;
          param_2 = param_2 + 2;
          param_3 = puVar15;
        } while (param_4 != puVar15);
      }
      else {
        puVar6 = param_2;
        if (puVar15 != param_2) {
          do {
            uVar16 = *puVar6;
            (puVar6 + uVar14 * 2)[1] = puVar6[1];
            puVar6[uVar14 * 2] = uVar16;
            puVar6 = puVar6 + 2;
          } while (puVar15 != puVar6);
          puVar15 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x10);
        }
        uVar14 = uVar8 >> 4 & 0xffffffff;
        for (puVar6 = param_3 + (uVar9 & 0xffffffff) * 2; puVar6 != param_4; puVar6 = puVar6 + 2) {
          uVar16 = *puVar6;
          puVar15[1] = puVar6[1];
          *puVar15 = uVar16;
          puVar15 = puVar15 + 2;
        }
        if (uVar14 != 0) {
          lVar10 = uVar14 << 4;
          do {
            lVar10 = lVar10 + -0x10;
            *(undefined8 *)((long)param_2 + 7) = *(undefined8 *)((long)param_3 + 7);
            *param_2 = *param_3;
            param_2 = param_2 + 2;
            param_3 = param_3 + 2;
          } while (lVar10 != 0);
        }
      }
      param_2 = (undefined8 *)(*(long *)(param_1 + 2) + (uVar12 >> 4 & 0xffffffff) * 0x10);
      *param_1 = *param_1 + uVar13;
    }
  }
  return param_2;
}




void FUN_00ed3484(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 4);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
    if (puVar1 != param_3) {
      do {
        *(undefined8 *)((long)param_2 + 7) = *(undefined8 *)((long)param_3 + 7);
        puVar2 = param_3 + 2;
        *param_2 = *param_3;
        param_2 = param_2 + 2;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00ed34fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f017e8();
  param_1[0x11] = 0;
  local_40 = DAT_03210c28;
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_02822b10;
  local_68 = FUN_00ed3624;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210c2c;
  local_68 = FUN_00ed3658;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210c30;
  local_68 = FUN_00ed3668;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  local_40 = DAT_03210c34;
  local_68 = FUN_00ed3674;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  puStack_60 = param_1;
  FUN_009693a0(puVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed3624(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00f04924(param_4);
  param_1[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00ed3654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1);
  return;
}




void FUN_00ed3658(long *param_1)

{
  param_1[0x11] = 0;
                    /* WARNING: Could not recover jumptable at 0x00ed3664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))();
  return;
}




void FUN_00ed3668(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed3670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))();
  return;
}




void FUN_00ed3674(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed367c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}




void FUN_00ed3680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02822b10;
  if (param_1[0x11] != 0) {
    FUN_00ed2e8c(param_1[0x11],param_1);
  }
  FUN_00f01868(param_1);
  return;
}




void FUN_00ed36c0(void *param_1)

{
  FUN_00ed3680();
  operator_delete(param_1);
  return;
}




void FUN_00ed36e4(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00ed2c1c(*(long *)(param_1 + 0x88),param_1);
    return;
  }
  return;
}




void FUN_00ed36f8(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00ed2ed0(*(long *)(param_1 + 0x88),param_1);
    return;
  }
  return;
}




void FUN_00ed370c(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00ed2d8c(*(long *)(param_1 + 0x88),param_1);
    return;
  }
  return;
}




void FUN_00ed3720(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00ed2b84(*(long *)(param_1 + 0x88),param_1);
    return;
  }
  return;
}




undefined8 FUN_00ed3734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}




undefined8 FUN_00ed373c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}




void FUN_00ed3744(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00f04924(param_2);
  param_1[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00ed3774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1);
  return;
}




void FUN_00ed3778(long *param_1)

{
  param_1[0x11] = 0;
                    /* WARNING: Could not recover jumptable at 0x00ed3784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))();
  return;
}




void FUN_00ed3788(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed3790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))();
  return;
}




void FUN_00ed3794(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed379c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}




void FUN_00ed37a0(void)

{
  return;
}




void FUN_00ed37a4(void)

{
  return;
}




void FUN_00ed37a8(void)

{
  return;
}




void FUN_00ed37ac(void)

{
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed37b0(undefined8 *param_1,uint param_2)

{
  FUN_00ecfd6c(param_1,param_2 & 1);
  *param_1 = &PTR_thunk_FUN_00ed00e0_02822c30;
  *(undefined8 *)((long)param_1 + 0x534) = _DAT_03218ef8;
  *(undefined8 *)((long)param_1 + 0x544) = 0x43fa0000;
  *(undefined8 *)((long)param_1 + 0x54c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x554) = 0;
  return;
}




void FUN_00ed381c(void *param_1)

{
  FUN_00ed00e0();
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed3840(long param_1)

{
  FUN_00ed02ac();
  *(undefined8 *)(param_1 + 0x53c) = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 0x548) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed3878(long *param_1)

{
  (**(code **)(*param_1 + 0x138))();
  FUN_00ed02d8(0,0,param_1);
  *(undefined8 *)((long)param_1 + 0x534) = _DAT_03218ef8;
  if (*(float *)((long)param_1 + 0x44) != 0.0) {
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    FUN_0091ada4(param_1);
  }
  *(undefined8 *)((long)param_1 + 0x54c) = 0xffffffff;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed38e8(float param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88;
  float fStack_84;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_2 + 0xa6) >> 6 & 1) != 0) {
    fVar9 = *(float *)(param_2 + 0x9b);
    lVar4 = FUN_00965ecc(param_2);
    fVar11 = 1.0;
    fVar6 = fVar11;
    if (0.0 < *(float *)(lVar4 + 0x10)) {
      lVar4 = FUN_00965ecc(param_2);
      fVar6 = *(float *)(lVar4 + 0x10);
    }
    fVar12 = *(float *)((long)param_2 + 0x4dc);
    lVar4 = FUN_00965ecc(param_2);
    if (0.0 < *(float *)(lVar4 + 0x14)) {
      lVar4 = FUN_00965ecc(param_2);
      fVar11 = *(float *)(lVar4 + 0x14);
    }
    fVar7 = _DAT_03218efc;
    fVar8 = DAT_03218ef8;
    if (0.0 < param_1) {
      fVar7 = (fVar12 / fVar11) / param_1;
      fVar8 = (fVar9 / fVar6) / param_1;
    }
    bVar2 = false;
    *(float *)(param_2 + 0xa0) = fVar8;
    *(float *)((long)param_2 + 0x504) = fVar7;
    if ((*(byte *)((long)param_2 + 0x531) & 1) != 0) {
      fVar12 = *(float *)((long)param_2 + 0x44);
      fVar9 = (float)FUN_00ed0d58((int)param_2[8],param_2);
      fVar11 = (float)FUN_00ed0e40(param_2);
      fVar7 = 1.0;
      fVar6 = -1.0;
      if (0.0 <= fVar9) {
        fVar6 = fVar7;
      }
      fVar8 = -1.0;
      if (0.0 <= *(float *)(param_2 + 0xa0)) {
        fVar8 = fVar7;
      }
      fVar10 = 0.0;
      if (fVar6 == fVar8) {
        fVar10 = ABS(fVar9) / fVar11;
      }
      fVar6 = -1.0;
      if (0.0 <= fVar12) {
        fVar6 = fVar7;
      }
      fVar9 = -1.0;
      if (0.0 <= *(float *)((long)param_2 + 0x504)) {
        fVar9 = 1.0;
      }
      fVar7 = 0.0;
      if (fVar6 == fVar9) {
        fVar7 = ABS(fVar12) / fVar11;
      }
      fVar6 = (float)DAT_03218f00 - fVar10;
      if ((float)DAT_03218f00 <= (float)DAT_03218f00 - fVar10) {
        fVar6 = (float)DAT_03218f00;
      }
      fVar9 = DAT_03218ef8;
      if (DAT_03218ef8 <= fVar6) {
        fVar9 = fVar6;
      }
      fVar6 = DAT_03218f00._4_4_ - fVar7;
      if (DAT_03218f00._4_4_ <= DAT_03218f00._4_4_ - fVar7) {
        fVar6 = DAT_03218f00._4_4_;
      }
      fVar11 = _DAT_03218efc;
      if (_DAT_03218efc <= fVar6) {
        fVar11 = fVar6;
      }
      bVar2 = false;
      *(float *)(param_2 + 0xa0) = *(float *)(param_2 + 0xa0) * fVar9;
      *(float *)((long)param_2 + 0x504) = *(float *)((long)param_2 + 0x504) * fVar11;
    }
    goto LAB_00ed3e5c;
  }
  fVar6 = powf(*(float *)((long)param_2 + 0x50c),param_1);
  fVar9 = *(float *)((long)param_2 + 0x44);
  param_2[0xa0] =
       CONCAT44((float)((ulong)param_2[0xa0] >> 0x20) * fVar6,(float)param_2[0xa0] * fVar6);
  fVar6 = (float)FUN_00ed0d58((int)param_2[8],param_2);
  bVar2 = false;
  if ((*(byte *)((long)param_2 + 0x531) & 1) != 0) {
    fVar12 = ABS(fVar6);
    fVar11 = ABS(fVar9);
    if ((1.0 <= fVar12) || (bVar2 = false, 1.0 <= fVar11)) {
      fVar7 = (float)FUN_00ed0e48(param_2);
      fVar8 = (float)FUN_00ed0e50(param_2);
      if (fVar6 <= 0.0) {
        bVar2 = false;
        if (fVar6 < 0.0) {
          if (0.0 <= *(float *)(param_2 + 0xa0)) {
            fVar12 = fVar12 * fVar7;
            goto LAB_00ed3b44;
          }
          bVar2 = false;
          fVar12 = fVar12 * fVar8 * param_1 + *(float *)(param_2 + 0xa0);
          goto LAB_00ed3b48;
        }
      }
      else {
        if (*(float *)(param_2 + 0xa0) <= 0.0) {
          fVar12 = -(fVar12 * fVar7);
LAB_00ed3b44:
          bVar2 = true;
        }
        else {
          bVar2 = false;
          fVar12 = *(float *)(param_2 + 0xa0) - fVar12 * fVar8 * param_1;
        }
LAB_00ed3b48:
        *(float *)(param_2 + 0xa0) = fVar12;
      }
      if (fVar9 <= 0.0) {
        if (0.0 <= fVar9) goto LAB_00ed3bac;
        if (0.0 <= *(float *)((long)param_2 + 0x504)) {
          fVar11 = fVar11 * fVar7;
          goto LAB_00ed3b9c;
        }
        fVar11 = fVar11 * fVar8 * param_1 + *(float *)((long)param_2 + 0x504);
      }
      else if (*(float *)((long)param_2 + 0x504) <= 0.0) {
        fVar11 = -(fVar11 * fVar7);
LAB_00ed3b9c:
        bVar2 = true;
      }
      else {
        fVar11 = *(float *)((long)param_2 + 0x504) - fVar11 * fVar8 * param_1;
      }
      *(float *)((long)param_2 + 0x504) = fVar11;
    }
  }
LAB_00ed3bac:
  if (*(float *)((long)param_2 + 0x534) == DAT_03218ef8) {
    if (((ABS(fVar9) < 1.0) && (ABS(fVar6) < 1.0)) &&
       (fVar11 = _DAT_03218efc, *(float *)(param_2 + 0xa7) != _DAT_03218efc)) goto LAB_00ed3c10;
  }
  else if ((ABS(fVar6) < 1.0) && (fVar11 = ABS(fVar9), ABS(fVar9) < 1.0)) {
LAB_00ed3c10:
    fVar12 = (float)FUN_00ed3fec(param_2);
    if ((fVar12 != DAT_03218ef8) || (fVar11 != _DAT_03218efc)) {
      fVar8 = (float)FUN_00ed0e48(param_2);
      fVar7 = (float)FUN_00ed0e50(param_2);
      if (fVar12 <= 0.0) {
        if (fVar12 < 0.0) {
          if (0.0 <= *(float *)(param_2 + 0xa0)) {
            fVar12 = ABS(fVar12) * fVar8;
            goto LAB_00ed3ca4;
          }
          fVar12 = ABS(fVar12) * fVar7 * param_1 + *(float *)(param_2 + 0xa0);
          goto LAB_00ed3ca8;
        }
      }
      else {
        if (*(float *)(param_2 + 0xa0) <= 0.0) {
          fVar12 = -(ABS(fVar12) * fVar8);
LAB_00ed3ca4:
          bVar2 = true;
        }
        else {
          fVar12 = *(float *)(param_2 + 0xa0) - ABS(fVar12) * fVar7 * param_1;
        }
LAB_00ed3ca8:
        *(float *)(param_2 + 0xa0) = fVar12;
      }
      if (fVar11 <= 0.0) {
        if (fVar11 < 0.0) {
          if (0.0 <= *(float *)((long)param_2 + 0x504)) {
            fVar8 = ABS(fVar11) * fVar8;
            goto LAB_00ed3d08;
          }
          fVar11 = ABS(fVar11) * fVar7 * param_1 + *(float *)((long)param_2 + 0x504);
          goto LAB_00ed3cf4;
        }
      }
      else if (*(float *)((long)param_2 + 0x504) <= 0.0) {
        fVar8 = -(ABS(fVar11) * fVar8);
LAB_00ed3d08:
        *(float *)((long)param_2 + 0x504) = fVar8;
        bVar2 = true;
      }
      else {
        fVar11 = *(float *)((long)param_2 + 0x504) - ABS(fVar11) * fVar7 * param_1;
LAB_00ed3cf4:
        *(float *)((long)param_2 + 0x504) = fVar11;
      }
    }
  }
  if (((ABS(fVar6) < 10.0) && ((*(ushort *)(param_2 + 0xa6) >> 4 & 1) != 0)) &&
     (ABS(*(float *)(param_2 + 0xa0)) < 10.0)) {
    iVar5 = *(int *)((long)param_2 + 0x54c);
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)((long)param_2 + 0x53c) = 0;
    if (iVar5 != (int)param_2[0xaa]) {
      uVar3 = FUN_00f048a4("EVENT_SCROLLING_FINISHED");
      FUN_00f048e0(&local_88,uVar3,(int)param_2[0xaa]);
      FUN_00f04760(param_2,&local_88,1);
      iVar5 = (int)param_2[0xaa];
      *(undefined4 *)(param_2 + 0xaa) = 0xffffffff;
      *(int *)((long)param_2 + 0x54c) = iVar5;
    }
    if ((iVar5 != -1) &&
       (fVar6 = -(*(float *)((long)param_2 + 0x534) * (float)iVar5),
       *(float *)(param_2 + 8) != fVar6)) {
      *(float *)(param_2 + 8) = fVar6;
      FUN_0091ada4(param_2);
    }
  }
  if (((ABS(fVar9) < 10.0) && ((*(ushort *)(param_2 + 0xa6) >> 5 & 1) != 0)) &&
     (ABS(*(float *)((long)param_2 + 0x504)) < 10.0)) {
    iVar5 = *(int *)((long)param_2 + 0x54c);
    *(undefined4 *)((long)param_2 + 0x504) = 0;
    *(undefined4 *)(param_2 + 0xa8) = 0;
    if (iVar5 != (int)param_2[0xaa]) {
      uVar3 = FUN_00f048a4("EVENT_SCROLLING_FINISHED");
      FUN_00f048e0(&local_88,uVar3,(int)param_2[0xaa]);
      FUN_00f04760(param_2,&local_88,1);
      iVar5 = (int)param_2[0xaa];
      *(undefined4 *)(param_2 + 0xaa) = 0xffffffff;
      *(int *)((long)param_2 + 0x54c) = iVar5;
    }
    if ((iVar5 != -1) &&
       (*(float *)((long)param_2 + 0x44) != -(*(float *)(param_2 + 0xa7) * (float)iVar5))) {
      *(float *)((long)param_2 + 0x44) = -(*(float *)(param_2 + 0xa7) * (float)iVar5);
      FUN_0091ada4(param_2);
    }
  }
LAB_00ed3e5c:
  if ((*(ushort *)(param_2 + 0xa6) >> 4 & 1) == 0) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  if ((*(ushort *)(param_2 + 0xa6) >> 5 & 1) == 0) {
    *(undefined4 *)((long)param_2 + 0x504) = 0;
  }
  fVar6 = (float)FUN_00ed0e58(param_2);
  fVar6 = -fVar6;
  fVar11 = (float)FUN_00ed0e58(param_2);
  fVar9 = *(float *)(param_2 + 0xa0);
  if (fVar11 <= *(float *)(param_2 + 0xa0)) {
    fVar9 = fVar11;
  }
  fVar7 = (float)NEON_fminnm(param_1,0x3dcccccd);
  fVar12 = fVar6;
  if (fVar6 <= fVar9) {
    fVar12 = fVar9;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar9 = *(float *)((long)param_2 + 0x504);
  if (fVar11 <= *(float *)((long)param_2 + 0x504)) {
    fVar9 = fVar11;
  }
  *(float *)(param_2 + 0xa0) = fVar12;
  local_88 = *(float *)(param_2 + 8) + fVar7 * fVar12;
  if (fVar6 <= fVar9) {
    fVar6 = fVar9;
  }
  fStack_84 = *(float *)((long)param_2 + 0x44) + fVar7 * fVar6;
  *(float *)((long)param_2 + 0x504) = fVar6;
  if ((*(byte *)((long)param_2 + 0x531) & 1) == 0) {
    (**(code **)(*param_2 + 0x148))(param_2,&local_88);
  }
  FUN_00ed0e60(local_88,fStack_84,param_2);
  if (bVar2) {
    fVar6 = fStack_84;
    fVar9 = (float)FUN_00ed0d58(local_88,param_2);
    if (((0.0 < fVar9) && (fVar9 < 1.0)) || ((fVar9 < 0.0 && (-1.0 < fVar9)))) {
      *(undefined4 *)(param_2 + 0xa0) = 0;
    }
    if (((0.0 < fVar6) && (fVar6 < 1.0)) || ((fVar6 < 0.0 && (-1.0 < fVar6)))) {
      *(undefined4 *)((long)param_2 + 0x504) = 0;
    }
  }
  if (((*(byte *)((long)param_2 + 0x531) >> 1 & 1) != 0) &&
     (FUN_00ed0ff4(0x3f000000,param_2 + 0x2e,*(float *)((long)param_2 + 0x504) != 0.0),
     0.0 < (float)(*(uint *)((long)param_2 + 500) >> 7 & 0xff) / 255.0)) {
    FUN_00ed12d8(param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed3fec(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00f02540();
  fVar8 = DAT_03218ef8;
  fVar7 = _DAT_03218efc;
  if ((uVar4 & 1) == 0) goto LAB_00ed4158;
  fVar8 = *(float *)(param_1 + 0x40);
  fVar7 = *(float *)(param_1 + 0x44);
  if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
    fVar9 = 0.0;
    if ((*(ushort *)(param_1 + 0x530) >> 5 & 1) == 0) goto LAB_00ed40dc;
    uVar5 = *(uint *)(param_1 + 0x550);
    if (uVar5 == 0xffffffff) {
      uVar5 = (uint)(-fVar7 / *(float *)(param_1 + 0x538));
      if ((int)*(uint *)(param_1 + 0x554) <= (int)uVar5) {
        uVar5 = *(uint *)(param_1 + 0x554);
      }
      uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      if (uVar5 != *(uint *)(param_1 + 0x54c)) {
        uVar3 = FUN_00f048a4("EVENT_SCROLLING_TO_PAGE");
        FUN_00f048e0(auStack_78,uVar3,uVar5);
        FUN_00f04760(param_1,auStack_78,1);
      }
      *(uint *)(param_1 + 0x550) = uVar5;
    }
    fVar6 = -(*(float *)(param_1 + 0x538) * (float)(int)uVar5);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x550);
    if (uVar5 == 0xffffffff) {
      uVar1 = *(int *)(param_1 + 0x554) - 1;
      uVar5 = (uint)(-fVar8 / *(float *)(param_1 + 0x534));
      if ((int)uVar1 <= (int)uVar5) {
        uVar5 = uVar1;
      }
      uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      if (uVar5 != *(uint *)(param_1 + 0x54c)) {
        uVar3 = FUN_00f048a4("EVENT_SCROLLING_TO_PAGE");
        FUN_00f048e0(auStack_78,uVar3,uVar5);
        FUN_00f04760(param_1,auStack_78,1);
      }
      *(uint *)(param_1 + 0x550) = uVar5;
    }
    fVar9 = -(*(float *)(param_1 + 0x534) * (float)(int)uVar5);
LAB_00ed40dc:
    fVar6 = 0.0;
  }
  fVar8 = fVar8 - fVar9;
  fVar7 = fVar7 - fVar6;
LAB_00ed4158:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar8,fVar7);
  }
  return;
}

