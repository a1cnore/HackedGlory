// functions/009d2 — 9 functions
#include "libGameKindred.h"




void FUN_009d200c(long param_1)

{
  FUN_009d288c(param_1,&DAT_03218f30,*(undefined4 *)(param_1 + 0xac));
  return;
}




void FUN_009d201c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01988c6c();
  FUN_01989414(uVar1,*(undefined2 *)(param_1 + 0xb0));
  return;
}




void FUN_009d2040(long param_1)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if ((*(ushort *)(*(long *)(param_1 + 0x50) + 100) & 0x38) == 0x28) {
    FUN_01985ca8(param_1);
    return;
  }
  FUN_009d2980(param_1);
  FUN_009d2b24(param_1);
  return;
}




void FUN_009d209c(void)

{
  undefined *puVar1;
  
  FUN_01988c78();
  puVar1 = (undefined *)0x0;
  if (DAT_0312f4c4 != '\0') {
    puVar1 = &DAT_0312f3c0;
  }
  FUN_00f34248(&DAT_0312f380,puVar1);
  return;
}




void FUN_009d20d0(void)

{
  FUN_009d414c();
  return;
}




void FUN_009d288c(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = CONCAT44(-(float)((ulong)DAT_03218f40 >> 0x20),-(float)DAT_03218f40);
  local_3c = DAT_03218f48;
  local_44 = DAT_03218f40;
  local_48 = -DAT_03218f48;
  uVar4 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  uVar3 = FUN_01988c6c();
  uVar2 = FUN_0198936c(uVar3,&local_50,param_3,param_1 + 0x30);
  *(undefined2 *)(param_1 + 0xb0) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d295c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01988c6c();
  FUN_01989414(uVar1,*(undefined2 *)(param_1 + 0xb0));
  return;
}




void FUN_009d2980(long param_1)

{
  uint5 *puVar1;
  long lVar2;
  ulong uVar3;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar1 = (uint5 *)(param_1 + 0x10c);
  uVar3 = (ulong)*(uint *)(param_1 + 0x10c);
  if ((int)((long)(uVar3 << 0x3b) >> 0x3b) != -1) {
    local_44 = 0.0;
    if ((*(byte *)(param_1 + 0x110) & 4) != 0) {
      local_44 = 1.0;
    }
    FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),(long)(uVar3 << 0x3b) >> 0x3b,&local_44,1);
    uVar3 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar3 << 0x36) >> 0x3b) != -1) {
    local_44 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf8));
    local_44 = local_44 / 255.0;
    local_40 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf9));
    local_40 = local_40 / 255.0;
    local_3c = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xfa));
    local_3c = local_3c / 255.0;
    FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),(long)(uVar3 << 0x36) >> 0x3b,&local_44,3);
    uVar3 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar3 << 0x31) >> 0x3b) != -1) {
    FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),(long)(uVar3 << 0x31) >> 0x3b,param_1 + 0xfc,1);
    uVar3 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar3 << 0x27) >> 0x3b) != -1) {
    FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),(long)(uVar3 << 0x27) >> 0x3b,param_1 + 0x100,2);
    uVar3 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar3 << 0x2c) >> 0x3b) != -1) {
    local_44 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xfb));
    local_44 = local_44 / 255.0;
    FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),(long)(uVar3 << 0x2c) >> 0x3b,&local_44,1);
    uVar3 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar3 << 0x22) >> 0x3b) != -1) {
    FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),(long)(uVar3 << 0x22) >> 0x3b,param_1 + 0x108,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d2b24(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  float fVar19;
  float fVar20;
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
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((*(int *)(param_1 + 0xb8) != 0) &&
     (plVar5 = *(long **)(param_1 + 0x58), plVar5 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x60) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        iVar2 = *(int *)(param_1 + 0xb8);
        if (iVar2 == 3) {
          plVar5 = *(long **)(param_1 + 0x58);
          if (plVar5 == (long *)0x0) {
            uVar7 = 0;
          }
          else if (*(int *)(param_1 + 0x60) == (int)plVar5[1]) {
            uVar7 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x58) = 0;
            uVar7 = 0;
            *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
          }
          FUN_009d38a8(param_1,uVar7,*(undefined4 *)(param_1 + 0xbc));
        }
        else {
          if (iVar2 == 2) {
            plVar5 = *(long **)(param_1 + 0x58);
            uVar7 = 0;
            if (plVar5 != (long *)0x0) {
              if (*(int *)(param_1 + 0x60) == (int)plVar5[1]) {
                uVar7 = (**(code **)(*plVar5 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x58) = 0;
                uVar7 = 0;
                *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
              }
            }
            FUN_00d58298(uVar7,param_1 + 0xc0,&local_b8);
          }
          else {
            if (iVar2 != 1) goto LAB_009d2cbc;
            plVar5 = *(long **)(param_1 + 0x58);
            uVar7 = 0;
            if (plVar5 != (long *)0x0) {
              if (*(int *)(param_1 + 0x60) == (int)plVar5[1]) {
                uVar7 = (**(code **)(*plVar5 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x58) = 0;
                uVar7 = 0;
                *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
              }
            }
            FUN_00d58198(uVar7,&local_b8);
          }
          FUN_009d34d4(param_1,&local_b8);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
    }
  }
LAB_009d2cbc:
  if ((*(uint *)(param_1 + 0x10c) >> 0x1e & 1) != 0) {
    FUN_009d398c(*(undefined4 *)(param_1 + 0xa8),param_1);
  }
  if ((*(float *)(param_1 + 0xf0) != 0.0) || (*(float *)(param_1 + 0xec) != 0.0)) {
    fVar9 = (float)FUN_01988c78();
    fVar9 = *(float *)(param_1 + 0xf4) + fVar9 * *(float *)(param_1 + 0xf0);
    fVar14 = fVar9 * 0.5;
    *(float *)(param_1 + 0xf4) = fVar9;
    fVar9 = sinf(fVar14);
    fVar14 = cosf(fVar14);
    fVar11 = *(float *)(param_1 + 0xe0);
    fVar12 = *(float *)(param_1 + 0xe4);
    fVar13 = *(float *)(param_1 + 0xe8);
    fVar20 = DAT_03218f78 * fVar11 + DAT_03218f7c * fVar12 + DAT_03218f80 * fVar13;
    fVar19 = fVar9 * DAT_03218f78;
    fVar18 = fVar9 * DAT_03218f7c;
    fVar9 = fVar9 * DAT_03218f80;
    if (1.0 <= fVar20) {
      fVar13 = 0.0;
      fVar20 = 0.0;
      fVar11 = 0.0;
      fVar12 = 1.0;
    }
    else if (fVar20 <= -1.0) {
      puVar1 = (undefined8 *)&DAT_03218f78;
      if (ABS(DAT_03218f78) <= ABS(DAT_03218f7c)) {
        puVar1 = &DAT_03218f68;
      }
      fVar13 = DAT_03218f80 * *(float *)((long)puVar1 + 4) - DAT_03218f7c * *(float *)(puVar1 + 1);
      fVar20 = DAT_03218f78 * *(float *)(puVar1 + 1) - DAT_03218f80 * fVar13;
      fVar15 = DAT_03218f7c * fVar13;
      fVar10 = DAT_03218f78 * fVar20;
      fVar11 = sinf(1.5707964);
      fVar12 = cosf(1.5707964);
      fVar13 = fVar11 * fVar13;
      fVar20 = fVar11 * fVar20;
      fVar11 = fVar11 * (fVar15 - fVar10);
    }
    else {
      fVar17 = DAT_03218f7c * fVar13 - DAT_03218f80 * fVar12;
      fVar16 = DAT_03218f80 * fVar11 - DAT_03218f78 * fVar13;
      fVar15 = DAT_03218f78 * fVar12 - DAT_03218f7c * fVar11;
      fVar11 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
      fVar10 = SQRT(fVar11);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar11);
      }
      fVar12 = fVar20 + 1.0 + fVar20 + 1.0;
      fVar11 = SQRT(fVar12);
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar12);
      }
      fVar12 = fVar11 * 0.5;
      fVar11 = 1.0 / fVar11;
      fVar13 = (fVar17 / fVar10) * fVar11;
      fVar20 = (fVar16 / fVar10) * fVar11;
      fVar11 = (fVar15 / fVar10) * fVar11;
    }
    fVar10 = (fVar9 * fVar20 + fVar14 * fVar13 + fVar19 * fVar12) - fVar18 * fVar11;
    fVar15 = fVar19 * fVar11 + fVar14 * fVar20 + (fVar18 * fVar12 - fVar9 * fVar13);
    fVar16 = fVar14 * fVar11 + ((fVar18 * fVar13 + fVar9 * fVar12) - fVar19 * fVar20);
    fVar9 = ((fVar14 * fVar12 - fVar19 * fVar13) - fVar18 * fVar20) - fVar9 * fVar11;
    fVar14 = fVar15 + fVar15;
    fVar11 = fVar16 + fVar16;
    fStack_a0 = fVar9 * (fVar10 + fVar10);
    fStack_90 = 1.0 - fVar10 * (fVar10 + fVar10);
    local_94 = fVar15 * fVar11 - fStack_a0;
    fStack_a0 = fVar15 * fVar11 + fStack_a0;
    local_a8 = fVar10 * fVar14 - fVar9 * fVar11;
    fStack_b4 = fVar10 * fVar14 + fVar9 * fVar11;
    local_b0 = fVar10 * fVar11 - fVar9 * fVar14;
    local_98 = fVar10 * fVar11 + fVar9 * fVar14;
    local_b8 = (1.0 - fVar15 * fVar14) - fVar16 * fVar11;
    local_a4 = fStack_90 - fVar16 * fVar11;
    fStack_90 = fStack_90 - fVar15 * fVar14;
    local_ac = 0;
    local_9c = 0;
    local_8c = 0;
    local_84 = 0;
    local_7c = 0x3f800000;
    local_d0 = *(undefined4 *)(param_1 + 0xec);
    uStack_cc = 0;
    local_c8 = 0;
    uStack_c4 = 0x3f800000;
    uStack_f8 = 0;
    local_100 = 0x3f800000;
    uStack_e8 = 0;
    uStack_f0 = 0x3f80000000000000;
    uStack_d8 = 0x3f800000;
    local_e0 = 0;
    FUN_009b3960(auStack_180,&local_100,&local_b8);
    FUN_009b3960(auStack_140,auStack_180,param_1 + 0x68);
    FUN_009d34d4(param_1,auStack_140);
  }
  if (*(int *)(param_1 + 0xc4) == 1) {
    FUN_009d3b94(param_1);
  }
  uVar7 = FUN_01988c6c();
  uVar3 = *(undefined2 *)(param_1 + 0xb0);
  uVar8 = FUN_00f31994(*(undefined8 *)(param_1 + 0x50));
  FUN_019894ac(uVar7,uVar3,uVar8,0);
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

