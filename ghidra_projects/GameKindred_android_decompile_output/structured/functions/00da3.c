// functions/00da3 — 9 functions
#include "libGameKindred.h"




void FUN_00da32b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_4;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = uVar1;
  return;
}




void FUN_00da32dc(float *param_1,undefined8 *param_2,byte *param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_88 = 0x412000003e800000;
  local_80 = 0x3e800000;
  pfVar8 = param_1 + 3;
  fVar15 = (float)*(undefined8 *)pfVar8 - (float)*(undefined8 *)param_1;
  fVar16 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20) -
           (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar14 = param_1[5] - param_1[2];
  fVar13 = fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14;
  if (fVar13 < 0.1) {
    *(float *)(param_2 + 1) = param_1[5];
    *param_2 = *(undefined8 *)pfVar8;
    goto LAB_00da3718;
  }
  local_90 = param_1[5];
  local_98 = *(undefined8 *)pfVar8;
  fVar17 = param_1[6];
  fVar18 = ABS(fVar17);
  if (1.1920929e-07 <= fVar18) {
    fVar12 = SQRT(fVar13);
    fVar10 = fVar12;
    if (NAN(fVar12)) {
      fVar10 = sqrtf(fVar13);
    }
    bVar2 = false;
    if ((*(char *)((long)param_1 + 0x21) == '\0') && (bVar2 = false, !NAN(fVar17))) {
      bVar2 = fVar17 < 0.0;
    }
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (bVar2) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar18) && !NAN(fVar10)) {
        bVar3 = fVar18 < fVar10;
        bVar4 = fVar18 == fVar10;
        bVar5 = false;
      }
    }
    fVar18 = -fVar10;
    if (bVar4 || bVar3 != bVar5) {
      fVar18 = fVar17;
    }
    if (NAN(fVar12)) {
      fVar12 = sqrtf(fVar13);
    }
    fVar15 = (float)local_98 + (fVar15 / fVar12) * fVar18;
    fVar16 = (float)((ulong)local_98 >> 0x20) + (fVar16 / fVar12) * fVar18;
    local_98 = CONCAT44(fVar16,fVar15);
    local_90 = (fVar14 / fVar12) * fVar18 + local_90;
    fVar15 = fVar15 - (float)*(undefined8 *)param_1;
    fVar16 = fVar16 - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar14 = local_90 - param_1[2];
  }
  local_a0 = local_90;
  local_a8 = local_98;
  if (*(char *)(param_1 + 8) == '\0') {
    local_b8 = local_b8 & 0xffffffff00000000;
    bVar6 = FUN_00ef01b8(param_1[7],param_1,&local_98,&local_b8,0,&local_88);
    if (param_3 != (byte *)0x0) {
      *param_3 = ~bVar6 & 1;
    }
    if ((bVar6 & 1) == 0) {
      local_a8 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar16 * (float)local_b8,
                          (float)*(undefined8 *)param_1 + fVar15 * (float)local_b8);
      local_a0 = fVar14 * (float)local_b8 + param_1[2];
    }
    else {
      local_a8 = local_98;
      local_a0 = local_90;
    }
LAB_00da36e0:
    *(float *)(param_2 + 1) = local_a0;
    uVar11 = local_a8;
  }
  else {
    pfVar9 = param_1 + 7;
    uVar7 = FUN_00ef00a0(*pfVar9,&local_98,&local_a8,&local_88);
    if ((uVar7 & 1) != 0) goto LAB_00da36e0;
    if ((((1.1920929e-07 <= ABS((float)local_a8 - *pfVar8)) ||
         (1.1920929e-07 <= ABS(local_a8._4_4_ - param_1[4]))) ||
        (1.1920929e-07 <= ABS(local_a0 - param_1[5]))) &&
       (uVar7 = FUN_00ef00a0(*pfVar9,pfVar8,&local_b8,&local_88), (uVar7 & 1) != 0)) {
      FUN_00ef01b8(*pfVar9,&local_b8,&local_98,&local_bc,0,&local_88);
      fVar15 = (float)(local_b8 >> 0x20);
      local_a8 = CONCAT44(fVar15 + ((float)((ulong)local_98 >> 0x20) - fVar15) * local_bc,
                          (float)local_b8 + ((float)local_98 - (float)local_b8) * local_bc);
      local_a0 = local_b0 + (local_90 - local_b0) * local_bc;
      uVar7 = FUN_00ef00a0(*pfVar9,&local_a8,&local_a8,&local_88);
      if ((uVar7 & 1) != 0) goto LAB_00da36e0;
    }
    fVar16 = ((float)local_a8 - *param_1) * ((float)local_a8 - *param_1) +
             (local_a8._4_4_ - param_1[1]) * (local_a8._4_4_ - param_1[1]) +
             (local_a0 - param_1[2]) * (local_a0 - param_1[2]);
    fVar15 = SQRT(fVar16);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar16);
    }
    if (3.0 < fVar15) {
      uVar11 = *(undefined8 *)param_1;
      local_b0 = param_1[2];
      fVar16 = (local_a0 - local_b0) / fVar15;
      fVar13 = ((float)local_a8 - (float)uVar11) / fVar15;
      fVar14 = (*(float *)((ulong)&local_a8 | 4) - (float)((ulong)uVar11 >> 0x20)) / fVar15;
      while( true ) {
        fVar15 = fVar15 + -3.0;
        local_b8 = CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar14 * fVar15,
                            (float)uVar11 + fVar13 * fVar15);
        local_b0 = fVar16 * fVar15 + local_b0;
        uVar7 = FUN_00ef00a0(*pfVar9,&local_b8,0,&local_88);
        if ((uVar7 & 1) != 0) break;
        if (fVar15 <= 3.0) goto LAB_00da374c;
        uVar11 = *(undefined8 *)param_1;
        local_b0 = param_1[2];
      }
      local_bc = 0.0;
      FUN_00ef01b8(*pfVar9,&local_b8,&local_a8,&local_bc,0,&local_88);
      local_a0 = local_b0 + (local_a0 - local_b0) * local_bc;
      local_a8 = CONCAT44(local_b8._4_4_ + (local_a8._4_4_ - local_b8._4_4_) * local_bc,
                          (float)local_b8 + ((float)local_a8 - (float)local_b8) * local_bc);
      goto LAB_00da36e0;
    }
LAB_00da374c:
    *(float *)(param_2 + 1) = param_1[2];
    uVar11 = *(undefined8 *)param_1;
  }
  *param_2 = uVar11;
  local_b8 = (ulong)(uint)local_b8._4_4_ << 0x20;
  uVar7 = FUN_00ef0108(param_1[7],param_2,&local_b8,0,&local_88);
  if ((uVar7 & 1) != 0) {
    *(float *)((long)param_2 + 4) = (float)local_b8;
  }
LAB_00da3718:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00da3760(undefined4 param_1)

{
  DAT_031abef8 = param_1;
  return;
}




undefined4 FUN_00da376c(void)

{
  return DAT_031abef8;
}




byte FUN_00da3778(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 byte *param_5,byte *param_6)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88 = 0xffffffff;
  local_90 = 0;
  local_4c = 0;
  local_54 = 0;
  uStack_5c = 0;
  local_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  bVar2 = FUN_00d74500(param_3,param_4,param_1,(long)&local_90 + 4,&local_88,&local_90,0);
  bVar3 = FUN_00d72d24(param_2,param_4);
  if (param_5 != (byte *)0x0) {
    *param_5 = bVar2 & 1;
  }
  bVar3 = bVar3 & 1 | (int)local_90 != 0;
  if (param_6 != (byte *)0x0) {
    *param_6 = bVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2 & bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00da3864(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_2c = 0;
  local_34 = 0;
  local_68 = 0xffffffff;
  uStack_3c = 0;
  local_44 = 0;
  uStack_4c = 0;
  local_54 = 0;
  uStack_5c = 0;
  local_64 = 0;
  FUN_00d74500(param_3,param_4,(int)*(float *)(*(long *)(param_1 + 0x40) + 800),(long)&local_70 + 4,
               &local_68,&local_70,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar2 = NEON_ucvtf(local_70._4_4_);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00da3904(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  uint uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  uint local_e0 [2];
  uint local_d8 [20];
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar20 = *(float *)(*(long *)(param_1 + 0x40) + 800);
  uVar9 = FUN_00d9eb0c();
  lVar17 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar17 == 0) goto LAB_00da3cc4;
    if (*(int *)(*(long *)(lVar17 + 8) + 0xa4) == DAT_03133530) break;
    lVar17 = *(long *)(lVar17 + 0x20);
  }
  uVar3 = FUN_00d786f8(lVar17,local_d8,0x14);
  if (uVar3 == 0) goto LAB_00da3cc4;
  if ((param_5 & 1) != 0) {
    iVar4 = FUN_00d72dac(uVar9);
    iVar5 = FUN_00d72940(uVar9);
    if (iVar4 == iVar5) {
      iVar5 = FUN_00d72dac(uVar9);
      iVar4 = 0;
      if (iVar5 != 0) {
        uVar8 = 0;
        do {
          uVar6 = FUN_00d72f0c(uVar9,uVar8);
          uVar7 = FUN_00d75000(param_2,uVar6);
          iVar4 = iVar4 + (uVar7 & 1);
          uVar8 = uVar8 + 1;
          uVar7 = FUN_00d72dac(uVar9);
        } while (uVar8 < uVar7);
      }
      iVar5 = FUN_00d72940(uVar9);
      if (iVar4 == iVar5) {
        FUN_00d9ff2c(local_e0);
        iVar4 = FUN_00d78794(lVar17);
        if (iVar4 == 1) {
          puVar13 = &DAT_0315cc1c;
          ppuVar14 = &PTR_s__Item_WeaponInfusion__02beb180;
        }
        else {
          iVar4 = FUN_00d78794(lVar17);
          if (iVar4 != 2) goto LAB_00da3cc4;
          puVar13 = &DAT_0315cc20;
          ppuVar14 = &PTR_s__Item_CrystalInfusion__02beb068;
        }
        local_e0[0] = *puVar13;
        puVar15 = *ppuVar14;
        uVar9 = FUN_00d9ea34(param_1);
        uVar12 = FUN_00d6bbac(uVar9,local_e0[0],0);
        if ((uVar12 & 1) != 0) {
          uVar6 = FUN_00d6b630(uVar9,local_e0[0],0xffffffff);
          fVar20 = (float)FUN_00d6b9f8(uVar9,uVar6);
          fVar19 = (float)FUN_00d6b9b8(uVar9,uVar6);
          if (0.4 <= fVar20 / fVar19) goto LAB_00da3cc4;
        }
        uVar9 = FUN_00d6eb50();
        uVar8 = FUN_00d6e9d4(uVar9,puVar15);
        uVar7 = local_e0[0];
        goto LAB_00da3cd0;
      }
    }
  }
  lVar17 = FUN_00d74160(param_3);
  uVar1 = DAT_031abef8;
  if (*(char *)(lVar17 + 8) == '\0') {
LAB_00da3cc4:
    uVar7 = local_e0[0];
    uVar8 = 0xffff;
    goto LAB_00da3cd0;
  }
  uVar16 = 0xffff;
  if (DAT_031abef8 != 0xffff) {
    uVar12 = 0;
    do {
      if (local_d8[uVar12] == uVar1) {
        uVar10 = FUN_00da3d28(uVar12 & 0xffffffff,uVar1,local_d8,uVar9,param_2);
        if ((uVar10 & 1) == 0) break;
        local_e0[0] = uVar1;
        if ((param_4 & 1) != 0) {
          FUN_00da3f10(param_1,uVar9,param_2,uVar1,local_e0);
        }
        uVar7 = local_e0[0];
        uVar8 = local_e0[0];
        if (local_e0[0] != 0xffff) goto LAB_00da3cd0;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar3);
  }
  uVar12 = 0;
  do {
    uVar1 = local_d8[uVar12];
    uVar10 = FUN_00da3d28(uVar12 & 0xffffffff,uVar1,local_d8,uVar9,param_2);
    if ((uVar10 & 1) != 0) {
      local_e0[0] = uVar1;
      if (((((param_4 & 1) != 0) &&
           (uVar10 = FUN_00da3f10(param_1,uVar9,param_2,uVar1,local_e0), uVar7 = local_e0[0],
           uVar8 = local_e0[0], (uVar10 & 1) != 0)) ||
          (uVar8 = local_e0[0], uVar10 = FUN_00d75000(param_2,local_e0[0]), uVar7 = local_e0[0],
          uVar3 <= (uint)uVar12)) || ((uVar10 & 1) != 0)) goto LAB_00da3cd0;
      fVar19 = 0.0;
      uVar10 = uVar12;
      do {
        uVar16 = local_d8[uVar10];
        if (uVar16 != local_d8[uVar12]) {
          auVar21 = FUN_00da3d28(uVar10 & 0xffffffff,uVar16,local_d8,uVar9,param_2);
          if ((auVar21._0_8_ & 1) != 0) {
            fVar18 = (float)FUN_00da3864(param_1,auVar21._8_8_,param_2,uVar16);
            fVar19 = fVar19 + fVar18;
            uVar11 = FUN_00d75000(param_2,uVar16);
            uVar7 = uVar8;
            if ((uVar11 & 1) != 0) {
              local_e0[0] = uVar16;
              if (fVar20 < fVar19) break;
              goto LAB_00da3b28;
            }
            iVar4 = FUN_00d74c14(param_2,uVar1,uVar16);
            if (iVar4 < 1) {
              if (fVar20 < fVar19) break;
            }
            else if (fVar18 < fVar20) {
              uVar8 = uVar16;
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar7 = uVar8;
      } while (uVar10 < uVar3);
      goto LAB_00da3cd0;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < uVar3);
LAB_00da3b28:
  uVar7 = local_e0[0];
  uVar8 = uVar16;
LAB_00da3cd0:
  local_e0[0] = uVar7;
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da3d28(uint param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int local_64;
  int local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = param_2;
  if (((DAT_031abf30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031abf30), iVar2 != 0)) {
    DAT_031abf00 = 0;
    DAT_031abf08 = 0;
    DAT_031abf10 = 0;
    DAT_031abf18 = 0;
    DAT_031abf20 = 0;
    DAT_031abf28 = 0xffffffff;
    __cxa_atexit(FUN_00d78e18,&DAT_031abf00,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_031abf30);
  }
  FUN_00da40e0(&DAT_031abf00);
  uVar6 = 0;
  do {
    local_60 = *(int *)(param_3 + (ulong)uVar6 * 4);
    local_64 = 0;
    piVar4 = (int *)FUN_00d7939c(&DAT_031abf00,&local_60);
    piVar5 = &local_64;
    if (piVar4 != (int *)0x0) {
      piVar5 = piVar4;
    }
    local_64 = *piVar5 + 1;
    FUN_00d78be0(&DAT_031abf00,&local_60,&local_64);
    FUN_00d78a4c(&DAT_031abf00,local_60,param_5);
    uVar6 = uVar6 + 1;
  } while (uVar6 <= param_1);
  iVar2 = FUN_00d72dac(param_4);
  if (iVar2 != 0) {
    uVar6 = 0;
    do {
      local_60 = FUN_00d72f0c(param_4,uVar6);
      local_64 = 0;
      piVar4 = (int *)FUN_00d7939c(&DAT_031abf00,&local_60);
      piVar5 = &local_64;
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4;
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        FUN_00d78a4c(&DAT_031abf00,local_60,param_5);
      }
      else {
        piVar5 = (int *)FUN_00d79434(&DAT_031abf00,&local_60);
        *piVar5 = iVar2 + -1;
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_00d72dac(param_4);
    } while (uVar6 < uVar3);
  }
  local_60 = 0;
  piVar4 = (int *)FUN_00d7939c(&DAT_031abf00,&local_5c);
  piVar5 = &local_60;
  if (piVar4 != (int *)0x0) {
    piVar5 = piVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar5 != 0);
}




void FUN_00da3f10(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int *param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_f4;
  int local_f0 [17];
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined4 local_74;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00da3778((int)*(float *)(*(long *)(param_1 + 0x40) + 800));
  uVar4 = 0;
  if ((uVar3 & 1) == 0) {
    local_74 = 0;
    local_7c = 0;
    uVar9 = 0;
    uVar8 = 1;
    iVar6 = 1;
    uStack_84 = 0;
    local_8c = 0;
    uStack_94 = 0;
    local_9c = 0;
    uStack_a4 = 0;
    local_ac = 0;
    local_f0[0x10] = param_4;
    iVar7 = param_4;
    while( true ) {
      uVar3 = FUN_00d73590(param_2,iVar7);
      if ((iVar7 == param_4) || ((uVar3 & 1) == 0)) {
        uVar3 = FUN_00da3778((int)*(float *)(*(long *)(param_1 + 0x40) + 800),param_2,param_3,iVar7,
                             0,0);
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          *param_5 = iVar7;
          goto LAB_00da40ac;
        }
        local_f0[0xf] = 0;
        local_f0[0xd] = 0;
        local_f0[0xe] = 0;
        local_f0[7] = 0;
        local_f0[8] = 0;
        local_f0[5] = 0;
        local_f0[6] = 0;
        local_f0[0xb] = 0;
        local_f0[0xc] = 0;
        local_f0[9] = 0;
        local_f0[10] = 0;
        local_f0[3] = 0;
        local_f0[4] = 0;
        local_f0[1] = 0;
        local_f0[2] = 0;
        local_f4 = 0;
        local_f0[0] = 0xffff;
        FUN_00d74f6c(param_3,iVar7,1,local_f0,&local_f4);
        if (local_f4 != 0) {
          uVar3 = 0;
          do {
            uVar2 = uVar8;
            if (iVar6 < 0x10) {
              iVar6 = iVar6 + 1;
              local_f0[(ulong)uVar8 + 0x10] = local_f0[uVar3];
              uVar2 = 0;
              if (uVar8 + 1 < 0x10) {
                uVar2 = uVar8 + 1;
              }
            }
            uVar8 = uVar2;
            uVar3 = uVar3 + 1;
          } while (uVar3 < local_f4);
        }
      }
      if (iVar6 < 2) break;
      uVar9 = uVar9 + 1 & 0xf;
      iVar7 = local_f0[(ulong)uVar9 + 0x10];
      iVar6 = iVar6 + -1;
    }
    uVar4 = 0;
  }
LAB_00da40ac:
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

