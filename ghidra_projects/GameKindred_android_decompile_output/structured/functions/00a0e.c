// functions/00a0e — 13 functions
#include "libGameKindred.h"




void FUN_00a0e4a0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 0x78);
  if (*(char *)(lVar4 + 0x1d) == '\0') {
    if ((*(char *)(*(long *)(param_1 + 0x80) + 0x99) != '\0') &&
       (FUN_00a0ce78(param_1), *(char *)(param_1 + 0x11b) != '\0')) {
      lVar4 = *(long *)(param_1 + 0x80);
      fVar13 = *(float *)(lVar4 + 0x94);
      fVar8 = *(float *)(lVar4 + 0x90);
      fVar11 = fVar13;
      FUN_00a0e988(*(undefined4 *)(lVar4 + 0x8c),fVar8,fVar13,param_1,1);
      if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) != '\0') {
        iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x48);
        if (iVar1 == 2) {
          if (fVar13 < 0.5) goto LAB_00a0e57c;
        }
        else if ((fVar13 < 0.5) || (iVar1 != 3)) goto LAB_00a0e57c;
        local_50 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x8c);
        fVar6 = (float)FUN_00cac608(&local_50);
        fVar13 = fVar8;
        fVar12 = fVar11;
        fVar7 = (float)FUN_00a0bf68(param_1);
        FUN_00a0d4b0(fVar6 + fVar7,fVar8 + fVar13,fVar11 + fVar12,param_1);
      }
      goto LAB_00a0e57c;
    }
    uVar10 = 0;
    uVar3 = 0;
    uVar5 = (undefined4)DAT_03218f20;
    uVar9 = DAT_03218f20._4_4_;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\0') {
      FUN_00a0ce78(param_1);
      lVar4 = *(long *)(param_1 + 0x78);
    }
    uVar10 = *(undefined4 *)(lVar4 + 0x18);
    uVar3 = 1;
    uVar5 = *(undefined4 *)(lVar4 + 0x10);
    uVar9 = *(undefined4 *)(lVar4 + 0x14);
  }
  FUN_00a0e988(uVar5,uVar9,uVar10,param_1,uVar3);
LAB_00a0e57c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0e5fc(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (*(char *)(param_4 + 0x11b) != '\0') {
    return;
  }
  uVar1 = FUN_00a0dc18(param_4);
  if ((uVar1 & 1) != 0) {
    if (*(char *)(*(long *)(param_4 + 0x28) + 0x18) == '\0') {
      plVar2 = *(long **)(param_4 + 0x108);
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_4 + 0x110) == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
          if (lVar3 != 0) {
            plVar2 = *(long **)(param_4 + 0x108);
            if (plVar2 == (long *)0x0) {
              uVar4 = 0;
            }
            else if (*(int *)(param_4 + 0x110) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              *(undefined8 *)(param_4 + 0x108) = 0;
              uVar4 = 0;
              *(undefined4 *)(param_4 + 0x110) = DAT_03214ce8;
            }
            FUN_00a0d64c(param_4,uVar4);
          }
        }
        else {
          *(undefined8 *)(param_4 + 0x108) = 0;
          *(undefined4 *)(param_4 + 0x110) = DAT_03214ce8;
        }
      }
    }
    else {
      fVar5 = (float)FUN_00a0bf68(param_4);
      FUN_00a0d4b0(fVar5 + *(float *)(param_4 + 0xc4),param_2 + *(float *)(param_4 + 200),
                   param_3 + *(float *)(param_4 + 0xcc),param_4);
    }
  }
  FUN_00a0c778(param_4);
  return;
}




void FUN_00a0e704(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,local_48,0);
  fVar2 = (float)FUN_00a0bf68(param_4);
  fVar2 = local_48._0_4_ - fVar2;
  param_2 = local_48._4_4_ - param_2;
  uVar5 = CONCAT44(param_2,fVar2);
  local_40 = local_40 - param_3;
  fVar4 = fVar2 * fVar2 + param_2 * param_2 + local_40 * local_40;
  if (*(float *)(param_4 + 0x88) * *(float *)(param_4 + 0x88) < fVar4) {
    fVar3 = SQRT(fVar4);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar4);
    }
    fVar4 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
    if (fVar4 <= 0.0) {
      fVar4 = *(float *)(param_4 + 0x88);
    }
    uVar5 = CONCAT44((param_2 / fVar3) * fVar4,(fVar2 / fVar3) * fVar4);
    local_40 = (local_40 / fVar3) * fVar4;
  }
  *(undefined8 *)(param_4 + 0xc4) = uVar5;
  *(float *)(param_4 + 0xcc) = local_40;
  FUN_00a10670(param_4);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a0e7ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00da2cf8(param_2);
  local_48 = (float)*puVar2;
  fStack_44 = (float)((ulong)*puVar2 >> 0x20);
  local_40 = *(float *)(puVar2 + 1);
  if (((ABS(local_48) < 1.1920929e-07) && (ABS(fStack_44) < 1.1920929e-07)) &&
     (ABS(local_40) < 1.1920929e-07)) {
    FUN_00d557c4(param_2,&local_48,&DAT_03218f30);
  }
  if (((local_48 != (float)DAT_03218f30) || (fStack_44 != DAT_03218f30._4_4_)) ||
     (local_40 != DAT_03218f38)) {
    fVar4 = *(float *)(*(long *)(param_1 + 0x28) + 0x5c);
    if (fVar4 <= 0.0) {
      fVar4 = *(float *)(param_1 + 0x88);
      fVar3 = local_48 * fVar4 * 0.95;
      fVar5 = fStack_44 * fVar4 * 0.95;
      fVar4 = local_40 * fVar4 * 0.95;
    }
    else {
      fVar3 = local_48 * fVar4;
      fVar5 = fStack_44 * fVar4;
      fVar4 = local_40 * fVar4;
    }
    *(float *)(param_1 + 0xc4) = fVar3;
    *(ulong *)(param_1 + 200) = CONCAT44(fVar4,fVar5);
    FUN_00a10670(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0e938(long param_1)

{
  *(undefined4 *)(param_1 + 0xcc) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0xc4) = DAT_03218f30;
  FUN_00a10670();
  return;
}




void FUN_00a0e954(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x108) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uVar2 = FUN_00a1f2bc();
  FUN_00a1aa40(uVar2,param_2);
  return;
}




void FUN_00a0e988(undefined4 param_1,float param_2,undefined1 param_3 [16],long param_4,
                 ulong param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  fVar9 = param_3._0_4_;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_1;
  fStack_4c = param_2;
  if (*(char *)(param_4 + 0x11d) != '\0') {
    FUN_00a0ebf4(param_4);
    uVar3 = FUN_00a1f37c();
    if (((uVar3 & 1) == 0) || (*(char *)(*(long *)(param_4 + 0x28) + 0x59) == '\0')) {
      fVar7 = (float)FUN_00a0bf68(param_4);
      fVar8 = param_2 + (float)((ulong)*(undefined8 *)(param_4 + 0xdc) >> 0x20);
      param_2 = fVar9 + *(float *)(param_4 + 0xe4);
      *(ulong *)(param_4 + 0xd0) = CONCAT44(fVar8,fVar7 + (float)*(undefined8 *)(param_4 + 0xdc));
      *(float *)(param_4 + 0xd8) = param_2;
    }
    else {
      FUN_009bbfb0();
      FUN_009bd5c8();
      puVar4 = (undefined8 *)FUN_009b812c();
      *(undefined8 *)(param_4 + 0xd0) = *puVar4;
      *(undefined4 *)(param_4 + 0xd8) = *(undefined4 *)(puVar4 + 1);
    }
    uVar1 = *(uint *)(*(long *)(param_4 + 0x28) + 0x48);
    if ((uVar1 < 5) && ((1 << (ulong)(uVar1 & 0x1f) & 0x13U) != 0)) {
      if ((param_5 & 1) == 0) {
        if (uVar1 == 1) {
          uVar6 = *(undefined8 *)(param_4 + 0x100);
          fVar7 = (float)FUN_00a0bf68(param_4);
          FUN_009d1988(fVar7 + *(float *)(param_4 + 0xc4),param_2 + *(float *)(param_4 + 200),
                       fVar9 + *(float *)(param_4 + 0xcc),uVar6);
        }
      }
      else {
        FUN_00a0ec90(param_3._0_8_,param_4,&local_50);
      }
    }
    if (*(int *)(*(long *)(param_4 + 0x28) + 0x48) - 2U < 3) {
      if ((param_5 & 1) != 0) {
        FUN_00a0ed78(param_3._0_8_,param_4,&local_50);
      }
      plVar5 = *(long **)(param_4 + 0x58);
      uVar6 = 0;
      if (plVar5 != (long *)0x0) {
        if (*(int *)(param_4 + 0x60) == (int)plVar5[1]) {
          uVar6 = (**(code **)(*plVar5 + 0x10))();
        }
        else {
          *(undefined8 *)(param_4 + 0x58) = 0;
          uVar6 = 0;
          *(undefined4 *)(param_4 + 0x60) = DAT_03214ce8;
        }
      }
      FUN_00d55794(uVar6,&local_60,0);
      FUN_009d1988(local_60,uStack_5c,local_58,*(undefined8 *)(param_4 + 0x100));
    }
    if ((param_5 & 1) == 0) {
      FUN_00a102f4(param_4);
    }
    else {
      FUN_00a0edf0(param_4);
      FUN_00a0cac8(0,0,param_4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00a0eb68(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00a0bf68();
  return fVar1 + *(float *)(param_1 + 0xc4);
}




void FUN_00a0eb9c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x11a) != '\0') {
    FUN_009bbfb0();
    lVar1 = FUN_009bd5c8();
    FUN_009b8248(lVar1,lVar1 + 0x70);
    FUN_009b81dc(lVar1,4);
    FUN_009b81e4(lVar1,2);
    *(undefined1 *)(param_1 + 0x11a) = 1;
  }
  return;
}




void FUN_00a0ebf4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  
  iVar1 = FUN_00a104a8();
  lVar4 = *(long *)(param_1 + 0x100);
  if (iVar1 == 0) {
    if (lVar4 != 0) {
      FUN_009d1b7c(lVar4);
    }
    FUN_009d8ce0(*(undefined8 *)(param_1 + 0x68));
    if (*(long *)(param_1 + 0xf0) != 0) {
      FUN_009d8bc4();
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      FUN_009d8c2c();
    }
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    uVar3 = 1;
  }
  else {
    if (lVar4 != 0) {
      FUN_009d1bbc(lVar4);
    }
    FUN_009d8d1c(*(undefined8 *)(param_1 + 0x68));
    if (*(long *)(param_1 + 0xf0) != 0) {
      FUN_009d8c2c();
    }
    uVar2 = 0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      FUN_009d8bc4();
      uVar2 = *(undefined8 *)(param_1 + 0xf8);
    }
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined1 *)(param_1 + 0x11c) = uVar3;
  return;
}




void FUN_00a0ec90(float param_1,undefined1 param_2 [16],float param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(float *)(*(long *)(param_4 + 0x28) + 0x5c) <= 0.0) {
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_4 + 0x88),0x41800000);
    fVar6 = 6.0;
    if (fVar2 <= 6.0) {
      fVar2 = 6.0;
    }
    fVar3 = (float)FUN_00a1c660(fVar2,param_5);
    fVar2 = fVar6;
    fVar5 = param_1;
    fVar4 = (float)FUN_00a0bf68(param_4);
    local_58 = (*(float *)(param_4 + 0xd0) - fVar4) + fVar3;
    fStack_54 = (*(float *)(param_4 + 0xd4) - fVar5) + param_1;
    local_50 = (*(float *)(param_4 + 0xd8) - fVar2) + fVar6;
  }
  else {
    local_58 = (float)FUN_00cac608();
    local_50 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
    local_58 = local_58 * local_50;
    fStack_54 = param_1 * local_50;
    local_50 = param_3 * local_50;
  }
  FUN_00a105a8(param_4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0ed78(float param_1,undefined1 param_2 [16],float param_3,long param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (float)FUN_00a1c660(0x41800000,param_5);
  fVar4 = *(float *)(param_4 + 0xd0);
  fVar5 = param_1 + *(float *)(param_4 + 0xd4);
  fVar6 = param_3 + *(float *)(param_4 + 0xd8);
  fVar3 = (float)FUN_00a0bf68(param_4);
  uVar1 = *(undefined8 *)(param_4 + 0x100);
  fVar3 = (fVar2 + fVar4) - fVar3;
  fVar6 = fVar6 - param_3;
  *(float *)(param_4 + 0xc4) = fVar3;
  *(float *)(param_4 + 200) = fVar5 - param_1;
  *(float *)(param_4 + 0xcc) = fVar6;
  atan2f(fVar3,fVar6);
  FUN_009d1aa0(uVar1);
  return;
}




void FUN_00a0edf0(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  FUN_009bbfb0();
  lVar2 = FUN_009bd5c8();
  uVar3 = FUN_00a1f37c();
  if ((uVar3 & 1) != 0) goto LAB_00a0f2a0;
  lVar4 = FUN_009b86e8(lVar2);
  if (lVar4 == 0) {
LAB_00a0ef78:
    if (*(float *)(param_4 + 0x88) < 10.0) goto LAB_00a0f2a0;
    fVar10 = 16.0;
    fVar15 = (float)NEON_fminnm(*(float *)(param_4 + 0x88),0x41800000);
    if (fVar15 == 16.0) {
      fVar11 = (float)FUN_00a0bf68(param_4);
      fVar11 = (*(float *)(param_4 + 0xc4) + fVar11) - *(float *)(param_4 + 0xd0);
      fVar17 = (param_3 + *(float *)(param_4 + 0xcc)) - *(float *)(param_4 + 0xd8);
      fVar16 = (fVar10 + *(float *)(param_4 + 200)) - *(float *)(param_4 + 0xd4);
      fVar10 = fVar11 * fVar11 + fVar16 * fVar16 + fVar17 * fVar17;
      if (225.0 < fVar10) {
        fVar13 = (float)DAT_03218f30;
        fVar14 = DAT_03218f30._4_4_;
        fVar12 = DAT_03218f38;
        if (1e-08 <= fVar10) {
          fVar12 = SQRT(fVar10);
          if (NAN(fVar12)) {
            fVar12 = sqrtf(fVar10);
          }
          fVar13 = fVar11 / fVar12;
          fVar14 = fVar16 / fVar12;
          fVar12 = fVar17 / fVar12;
        }
        if (((fVar13 != (float)DAT_03218f30) || (fVar14 != DAT_03218f30._4_4_)) ||
           (fVar12 != DAT_03218f38)) {
          fVar10 = (float)FUN_01988c78();
          fVar11 = *(float *)(param_4 + 0xdc) + fVar13 * 8.0 * fVar10;
          fVar16 = fVar14 * 8.0 * fVar10 + *(float *)(param_4 + 0xe0);
          fVar17 = fVar12 * 8.0 * fVar10 + *(float *)(param_4 + 0xe4);
          fVar10 = *(float *)(param_4 + 0x88) + -16.0;
          *(float *)(param_4 + 0xdc) = fVar11;
          *(float *)(param_4 + 0xe0) = fVar16;
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          *(float *)(param_4 + 0xe4) = fVar17;
          if (fVar10 * fVar10 < fVar11 * fVar11 + fVar16 * fVar16 + fVar17 * fVar17) {
            *(float *)(param_4 + 0xdc) = fVar13 * fVar10;
            *(float *)(param_4 + 0xe0) = fVar14 * fVar10;
            *(float *)(param_4 + 0xe4) = fVar12 * fVar10;
          }
        }
      }
    }
    pfVar9 = (float *)(param_4 + 0xcc);
    fVar10 = *(float *)(param_4 + 0xc4);
    fVar11 = *(float *)(param_4 + 200);
    fVar11 = fVar10 * fVar10 + fVar11 * fVar11 + *pfVar9 * *pfVar9;
    fVar10 = SQRT(fVar11);
    if (NAN(fVar10)) {
      fVar10 = sqrtf(fVar11);
    }
    fVar11 = *(float *)(param_4 + 0xc4);
    fVar16 = *(float *)(param_4 + 200);
    if (((ABS(fVar11) < 0.01) && (ABS(fVar16) < 0.01)) && (ABS(*pfVar9) < 0.01)) goto LAB_00a0f2a0;
    fVar17 = *pfVar9;
    fVar10 = (float)NEON_fminnm(fVar10 / fVar15,0x3f800000);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar14 = fVar11 * fVar11 + fVar16 * fVar16 + fVar17 * fVar17;
    fVar13 = SQRT(fVar14);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(fVar14);
    }
    local_90 = *(float *)(lVar2 + 0x78);
    fVar12 = 0.0;
    local_98 = *(undefined8 *)(lVar2 + 0x70);
    fVar17 = fVar17 / fVar13;
    fVar11 = fVar11 / fVar13;
    fVar16 = fVar16 / fVar13;
    local_a8 = 0x3f80000000000000;
    fVar14 = (float)FUN_00cac608(&local_a8);
    puVar7 = &local_98;
    fVar13 = (float)NEON_fminnm(fVar17 * fVar12 + fVar14 * fVar11 + fVar13 * fVar16,0x3f800000);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar10 = (fVar15 + -10.0) * fVar10 * (fVar13 * 0.75 + 1.0);
    local_98 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xdc) >> 0x20) +
                        (float)((ulong)local_98 >> 0x20) + fVar16 * fVar10,
                        (float)*(undefined8 *)(param_4 + 0xdc) + (float)local_98 + fVar11 * fVar10);
    local_90 = *(float *)(param_4 + 0xe4) + local_90 + fVar17 * fVar10;
  }
  else {
    lVar4 = FUN_009b86e8(lVar2);
    plVar8 = *(long **)(param_4 + 0x58);
    if (plVar8 == (long *)0x0) {
      lVar5 = 0;
    }
    else if (*(int *)(param_4 + 0x60) == (int)plVar8[1]) {
      lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else {
      *(undefined8 *)(param_4 + 0x58) = 0;
      lVar5 = 0;
      *(undefined4 *)(param_4 + 0x60) = DAT_03214ce8;
    }
    if (lVar4 == lVar5) goto LAB_00a0ef78;
    plVar8 = *(long **)(param_4 + 0x58);
    if (plVar8 == (long *)0x0) goto LAB_00a0f2a0;
    if (*(int *)(param_4 + 0x60) != (int)plVar8[1]) {
      *(undefined8 *)(param_4 + 0x58) = 0;
      *(undefined4 *)(param_4 + 0x60) = DAT_03214ce8;
      goto LAB_00a0f2a0;
    }
    lVar4 = (**(code **)(*plVar8 + 0x10))();
    if ((lVar4 == 0) || (plVar8 = *(long **)(param_4 + 0x48), plVar8 == (long *)0x0))
    goto LAB_00a0f2a0;
    if (*(int *)(param_4 + 0x50) != (int)plVar8[1]) {
      *(undefined8 *)(param_4 + 0x48) = 0;
      *(undefined4 *)(param_4 + 0x50) = DAT_03214ce8;
      goto LAB_00a0f2a0;
    }
    lVar4 = (**(code **)(*plVar8 + 0x10))();
    if (lVar4 == 0) goto LAB_00a0f2a0;
    uVar6 = FUN_009b86e8(lVar2);
    FUN_00d55794(uVar6,&local_98,0);
    fVar10 = (float)FUN_00a0bf68(param_4);
    puVar7 = &local_a8;
    fVar15 = (float)((ulong)local_98 >> 0x20);
    local_a8 = CONCAT44(((param_2 * 0.5 + fVar15 * 0.5) - fVar15) +
                        (float)((ulong)*(undefined8 *)(lVar2 + 0x70) >> 0x20),
                        ((fVar10 * 0.5 + (float)local_98 * 0.5) - (float)local_98) +
                        (float)*(undefined8 *)(lVar2 + 0x70));
    local_a0 = ((param_3 * 0.5 + local_90 * 0.5) - local_90) + *(float *)(lVar2 + 0x78);
  }
  FUN_009b8248(lVar2,puVar7);
  FUN_009b81dc(lVar2,4);
  *(undefined1 *)(param_4 + 0x11a) = 1;
LAB_00a0f2a0:
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

