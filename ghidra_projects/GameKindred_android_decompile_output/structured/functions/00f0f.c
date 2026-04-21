// functions/00f0f — 27 functions
#include "libGameKindred.h"




void FUN_00f0f2bc(long param_1)

{
  FUN_00f0ef78(param_1 + -0xb8);
  return;
}




undefined1  [16] FUN_00f0f2c4(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  FUN_00f0e700();
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}




void FUN_00f0f2e4(long param_1,long *param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined4 uVar9;
  bool bVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  float fVar23;
  
  lVar8 = tpidr_el0;
  lVar12 = *(long *)(lVar8 + 0x28);
  if (*(long *)(param_1 + 0xe0) != 0) {
    pfVar11 = (float *)FUN_00965ecc(param_1);
    fVar16 = *(float *)(param_1 + 0x90);
    fVar14 = *(float *)(param_1 + 0x94);
    if ((fVar14 < 0.0) || (fVar16 < 0.0)) {
      lVar13 = *(long *)(param_1 + 0xe0);
      if (lVar13 == 0) {
        uVar21 = 0;
        uVar22 = 0;
        fVar19 = 0.0;
      }
      else {
        fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar13 + 10));
        uVar9 = NEON_ucvtf((uint)*(ushort *)(lVar13 + 8));
        uVar21 = (undefined2)uVar9;
        uVar22 = (undefined2)((uint)uVar9 >> 0x10);
      }
      if (0.0 <= fVar14) {
        fVar19 = fVar14;
      }
      fVar14 = (float)CONCAT22(uVar22,uVar21);
      if (0.0 <= fVar16) {
        fVar14 = fVar16;
      }
    }
    else {
      lVar13 = *(long *)(param_1 + 0xe0);
      fVar19 = fVar14;
      fVar14 = fVar16;
    }
    fVar16 = (float)NEON_fminnm((int)(pfVar11[6] * 255.0),0x437f0000);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar1 = *pfVar11;
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x3c);
    fVar3 = pfVar11[1];
    fVar15 = fVar19 * pfVar11[4] + fVar1;
    fVar17 = fVar14 * pfVar11[5] + fVar3;
    fVar23 = (float)(uVar2 & 0x3fff);
    uVar4 = *(undefined1 *)(param_1 + 0xe8);
    uVar5 = *(undefined1 *)(param_1 + 0xe9);
    uVar6 = *(undefined1 *)(param_1 + 0xea);
    fVar18 = (float)*(ushort *)(lVar13 + 4) / fVar23;
    fVar23 = (float)((uint)*(ushort *)(lVar13 + 8) + (uint)*(ushort *)(lVar13 + 4)) / fVar23;
    fVar14 = (float)(uVar2 >> 0xe & 0x3fff);
    pfVar11 = (float *)*param_2;
    fVar19 = 1.0 - (float)*(ushort *)(lVar13 + 6) / fVar14;
    fVar20 = 1.0 - (float)((uint)*(ushort *)(lVar13 + 10) + (uint)*(ushort *)(lVar13 + 6)) / fVar14;
    fVar14 = fVar23;
    if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
      fVar14 = fVar18;
      fVar18 = fVar23;
    }
    bVar10 = (*(byte *)(param_1 + 0xd8) & 2) == 0;
    fVar23 = fVar20;
    if (bVar10) {
      fVar23 = fVar19;
    }
    *pfVar11 = fVar1;
    pfVar11[1] = fVar3;
    pfVar11[2] = 0.0;
    *(undefined1 *)(pfVar11 + 3) = uVar4;
    *(undefined1 *)((long)pfVar11 + 0xd) = uVar5;
    *(undefined1 *)((long)pfVar11 + 0xe) = uVar6;
    uVar7 = (undefined1)(int)fVar16;
    *(undefined1 *)((long)pfVar11 + 0xf) = uVar7;
    pfVar11[4] = fVar14;
    pfVar11[5] = fVar23;
    lVar13 = *param_2;
    if (bVar10) {
      fVar19 = fVar20;
    }
    *param_2 = lVar13 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar13 + 0x18) = fVar1;
    *(float *)(lVar13 + 0x1c) = fVar17;
    *(undefined4 *)(lVar13 + 0x20) = 0;
    *(undefined1 *)(lVar13 + 0x24) = uVar4;
    *(undefined1 *)(lVar13 + 0x25) = uVar5;
    *(undefined1 *)(lVar13 + 0x26) = uVar6;
    *(undefined1 *)(lVar13 + 0x27) = uVar7;
    *(float *)(lVar13 + 0x28) = fVar18;
    *(float *)(lVar13 + 0x2c) = fVar23;
    lVar13 = *param_2;
    *param_2 = lVar13 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(float *)(lVar13 + 0x18) = fVar15;
    *(float *)(lVar13 + 0x1c) = fVar3;
    *(undefined4 *)(lVar13 + 0x20) = 0;
    *(undefined1 *)(lVar13 + 0x24) = uVar4;
    *(undefined1 *)(lVar13 + 0x25) = uVar5;
    *(undefined1 *)(lVar13 + 0x26) = uVar6;
    *(undefined1 *)(lVar13 + 0x27) = uVar7;
    *(float *)(lVar13 + 0x28) = fVar14;
    *(float *)(lVar13 + 0x2c) = fVar19;
    lVar13 = *param_2;
    *param_2 = lVar13 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar13 + 0x20) = 0;
    *(undefined1 *)(lVar13 + 0x24) = uVar4;
    *(undefined1 *)(lVar13 + 0x25) = uVar5;
    *(undefined1 *)(lVar13 + 0x26) = uVar6;
    *(undefined1 *)(lVar13 + 0x27) = uVar7;
    *(float *)(lVar13 + 0x28) = fVar18;
    *(float *)(lVar13 + 0x2c) = fVar23;
    *(ulong *)(lVar13 + 0x18) = CONCAT44(fVar17,fVar1);
    lVar13 = *param_2;
    *param_2 = lVar13 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar13 + 0x20) = 0;
    *(undefined1 *)(lVar13 + 0x24) = uVar4;
    *(undefined1 *)(lVar13 + 0x25) = uVar5;
    *(undefined1 *)(lVar13 + 0x26) = uVar6;
    *(undefined1 *)(lVar13 + 0x27) = uVar7;
    *(float *)(lVar13 + 0x28) = fVar18;
    *(float *)(lVar13 + 0x2c) = fVar19;
    *(ulong *)(lVar13 + 0x18) = CONCAT44(fVar17,fVar15);
    lVar13 = *param_2;
    *param_2 = lVar13 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *(undefined4 *)(lVar13 + 0x20) = 0;
    *(undefined1 *)(lVar13 + 0x24) = uVar4;
    *(undefined1 *)(lVar13 + 0x25) = uVar5;
    *(undefined1 *)(lVar13 + 0x26) = uVar6;
    *(undefined1 *)(lVar13 + 0x27) = uVar7;
    *(float *)(lVar13 + 0x28) = fVar14;
    *(float *)(lVar13 + 0x2c) = fVar19;
    *(ulong *)(lVar13 + 0x18) = CONCAT44(fVar3,fVar15);
    *param_2 = *param_2 + 0x18;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  if (*(long *)(lVar8 + 0x28) != lVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f0f5d4(long param_1)

{
  FUN_00f0f2e4(param_1 + -0xb8);
  return;
}




void FUN_00f0f5dc(undefined8 *param_1)

{
  FUN_00f0e4a8();
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_FUN_02826be8;
  param_1[0x17] = &PTR_FUN_02826d48;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00f0f61c(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 in_x7;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined2 local_40;
  char local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0xe0) != 0) {
    puVar4 = (undefined4 *)FUN_00965ecc(param_1);
    local_40 = *(undefined2 *)(param_1 + 0xe8);
    local_3d = (undefined1)(int)((float)puVar4[6] * 255.0);
    cVar1 = *(char *)(param_1 + 0xec);
    local_3e = *(char *)(param_1 + 0xea);
    if (cVar1 != -1) {
      local_40 = CONCAT11(cVar1,cVar1);
      local_3e = cVar1;
    }
    fVar10 = *(float *)(param_1 + 0x90);
    fVar12 = *(float *)(param_1 + 0x94);
    lVar5 = *(long *)(param_1 + 0xe0);
    if ((fVar10 < 0.0) || (fVar11 = fVar10, fVar13 = fVar12, fVar12 < 0.0)) {
      if (lVar5 == 0) {
        uVar6 = 0;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
      }
      else {
        uVar3 = NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
        uVar6 = (undefined2)uVar3;
        uVar7 = (undefined2)((uint)uVar3 >> 0x10);
        uVar3 = NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
        uVar8 = (undefined2)uVar3;
        uVar9 = (undefined2)((uint)uVar3 >> 0x10);
      }
      fVar11 = (float)CONCAT22(uVar7,uVar6);
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar13 = (float)CONCAT22(uVar9,uVar8);
      if (0.0 <= fVar12) {
        fVar13 = fVar12;
      }
    }
    fVar12 = 1.0 - *(float *)(param_1 + 0xf0);
    fVar10 = *(float *)(param_1 + 0xf4);
    if (fVar12 <= *(float *)(param_1 + 0xf4)) {
      fVar10 = fVar12;
    }
    fVar14 = 1.0 - *(float *)(param_1 + 0xf8);
    fVar12 = *(float *)(param_1 + 0xfc);
    if (fVar14 <= *(float *)(param_1 + 0xfc)) {
      fVar12 = fVar14;
    }
    FUN_00f0f76c((short)*puVar4,(short)puVar4[1],fVar11,fVar13,0,puVar4[4],puVar4[5],0,param_2,
                 &local_40,lVar5,param_1 + 0xd0,*(byte *)(param_1 + 0xd8) & 1,
                 *(byte *)(param_1 + 0xd8) >> 1 & 1,*(undefined1 *)(param_1 + 0x100),in_x7,0,
                 *(float *)(param_1 + 0xf0),fVar10,*(float *)(param_1 + 0xf8),fVar12);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0f76c(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long *param_9,undefined1 *param_10,
                 long param_11,long *param_12,uint param_13,uint param_14,uint param_15,
                 undefined8 param_16,float param_17,float param_18,float param_19,float param_20,
                 float param_21)

{
  uint uVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  long lVar6;
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
  
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  fVar8 = fVar11;
  fVar15 = fVar11 + fVar12;
  if ((param_13 & 1) == 0) {
    fVar8 = fVar11 + fVar12;
    fVar15 = fVar11;
  }
  fVar11 = fVar7;
  fVar3 = fVar7 + fVar9;
  if ((param_14 & 1) == 0) {
    fVar11 = fVar7 + fVar9;
    fVar3 = fVar7;
  }
  if (5 < *(int *)((long)param_9 + 0xc) - (int)param_9[1]) {
    fVar10 = param_3 * param_6 + param_1;
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    param_1 = param_1 - fVar12 * param_8 * param_6;
    fVar12 = param_4 * param_7 + param_2;
    param_2 = param_2 - fVar9 * param_17 * param_7;
    fVar7 = 1.0 / (float)(uVar1 & 0x3fff);
    fVar15 = fVar7 * fVar15;
    fVar7 = fVar7 * fVar8;
    fVar8 = 1.0 / (float)(uVar1 >> 0xe & 0x3fff);
    fVar16 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar9 = 1.0 - fVar8 * fVar3;
    fVar8 = 1.0 - fVar8 * fVar11;
    fVar11 = 0.0;
    if ((param_15 & 1) == 0) {
      fVar11 = fVar7 - fVar15;
      fVar16 = fVar11 * param_18;
      fVar13 = fVar11 * param_19;
      fVar14 = fVar11 * param_20;
      fVar11 = fVar11 * param_21;
    }
    pfVar5 = (float *)*param_9;
    fVar4 = fVar10 - param_1;
    *pfVar5 = param_1 + fVar4 * param_18;
    pfVar5[1] = param_2;
    pfVar5[2] = param_5;
    param_1 = param_1 + fVar4 * param_20;
    *(undefined1 *)(pfVar5 + 3) = *param_10;
    fVar3 = fVar10 - fVar4 * param_19;
    *(undefined1 *)((long)pfVar5 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar5 + 0xe) = param_10[2];
    uVar2 = param_10[3];
    pfVar5[4] = fVar15 + fVar16;
    pfVar5[5] = fVar9;
    *(undefined1 *)((long)pfVar5 + 0xf) = uVar2;
    lVar6 = *param_9;
    *param_9 = lVar6 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar6 + 0x18) = param_1;
    *(float *)(lVar6 + 0x1c) = fVar12;
    *(float *)(lVar6 + 0x20) = param_5;
    *(undefined1 *)(lVar6 + 0x24) = *param_10;
    *(undefined1 *)(lVar6 + 0x25) = param_10[1];
    *(undefined1 *)(lVar6 + 0x26) = param_10[2];
    uVar2 = param_10[3];
    *(float *)(lVar6 + 0x28) = fVar15 + fVar14;
    *(float *)(lVar6 + 0x2c) = fVar8;
    *(undefined1 *)(lVar6 + 0x27) = uVar2;
    lVar6 = *param_9;
    *param_9 = lVar6 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar6 + 0x18) = fVar3;
    *(float *)(lVar6 + 0x1c) = param_2;
    *(float *)(lVar6 + 0x20) = param_5;
    *(undefined1 *)(lVar6 + 0x24) = *param_10;
    *(undefined1 *)(lVar6 + 0x25) = param_10[1];
    *(undefined1 *)(lVar6 + 0x26) = param_10[2];
    uVar2 = param_10[3];
    *(float *)(lVar6 + 0x28) = fVar7 - fVar13;
    *(float *)(lVar6 + 0x2c) = fVar9;
    *(undefined1 *)(lVar6 + 0x27) = uVar2;
    lVar6 = *param_9;
    *param_9 = lVar6 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar6 + 0x18) = param_1;
    *(float *)(lVar6 + 0x1c) = fVar12;
    *(float *)(lVar6 + 0x20) = param_5;
    *(undefined1 *)(lVar6 + 0x24) = *param_10;
    *(undefined1 *)(lVar6 + 0x25) = param_10[1];
    *(undefined1 *)(lVar6 + 0x26) = param_10[2];
    uVar2 = param_10[3];
    *(float *)(lVar6 + 0x28) = fVar15 + fVar14;
    *(float *)(lVar6 + 0x2c) = fVar8;
    *(undefined1 *)(lVar6 + 0x27) = uVar2;
    lVar6 = *param_9;
    *param_9 = lVar6 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar6 + 0x18) = fVar10 - fVar4 * param_21;
    *(float *)(lVar6 + 0x1c) = fVar12;
    *(float *)(lVar6 + 0x20) = param_5;
    *(undefined1 *)(lVar6 + 0x24) = *param_10;
    *(undefined1 *)(lVar6 + 0x25) = param_10[1];
    *(undefined1 *)(lVar6 + 0x26) = param_10[2];
    uVar2 = param_10[3];
    *(float *)(lVar6 + 0x28) = fVar7 - fVar11;
    *(float *)(lVar6 + 0x2c) = fVar8;
    *(undefined1 *)(lVar6 + 0x27) = uVar2;
    lVar6 = *param_9;
    *param_9 = lVar6 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar6 + 0x18) = fVar3;
    *(float *)(lVar6 + 0x1c) = param_2;
    *(float *)(lVar6 + 0x20) = param_5;
    *(undefined1 *)(lVar6 + 0x24) = *param_10;
    *(undefined1 *)(lVar6 + 0x25) = param_10[1];
    *(undefined1 *)(lVar6 + 0x26) = param_10[2];
    uVar2 = param_10[3];
    *(float *)(lVar6 + 0x28) = fVar7 - fVar13;
    *(float *)(lVar6 + 0x2c) = fVar9;
    *(undefined1 *)(lVar6 + 0x27) = uVar2;
    *param_9 = *param_9 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  }
  return;
}




void FUN_00f0fa54(long param_1)

{
  FUN_00f0f61c(param_1 + -0xb8);
  return;
}




void FUN_00f0fa5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0faa4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f0fae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f0fb24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0fb6c(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f0fba8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f0fbec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0fc34(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f0fc70(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f0fcb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f0fcf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0fd3c(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f0fd78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f0fdbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0fe04(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f0fe40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00f0fe84(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_00f13ca4();
  uVar4 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = &PTR_FUN_02826f38;
  param_1[0x17] = &PTR_FUN_02827098;
  param_1[0x19] = uVar4;
  FUN_00f0a784(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  uVar3 = (ulong)*(uint6 *)((long)param_1 + 0x144) & 0xe000f8000000;
  *(int *)((long)param_1 + 0x144) = (int)uVar3;
  *(ushort *)(param_1 + 0x29) = (ushort)(uVar3 >> 0x20) | 0x2ff;
  memset(param_1 + 0x1c,0,0x48);
  lVar5 = 0x138;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar5);
    lVar5 = lVar5 + 8;
    *(undefined8 *)((long)puVar2 + -0xc) = 0x4248000042480000;
    *puVar2 = 0x4248000042480000;
  } while (lVar5 != 0x140);
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 4;
    *(undefined4 *)((long)param_1 + lVar5 + 0x134) = 0x42480000;
    *(undefined4 *)((long)param_1 + lVar5 + 0x140) = 0x42480000;
    lVar5 = lVar1;
  } while (lVar1 != 4);
  return;
}




void FUN_00f0ff6c(long param_1)

{
  FUN_00f0a814(param_1 + 0xd0);
  return;
}




void FUN_00f0ff74(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                 undefined8 param_6,uint param_7,uint param_8,byte param_9,undefined8 param_10,
                 byte param_11,byte param_12,byte param_13,undefined8 param_14,byte param_15,
                 byte param_16,byte param_17,undefined8 param_18,byte param_19,byte param_20,
                 byte param_21,undefined8 param_22,byte param_23,byte param_24,byte param_25,
                 undefined8 param_26,byte param_27,byte param_28,byte param_29,undefined8 param_30,
                 byte param_31,byte param_32,byte param_33,undefined8 param_34,byte param_35,
                 byte param_36,byte param_37)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  
  lVar1 = param_1 + 0xd0;
  uVar11 = FUN_00f0a7e0(lVar1);
  *(undefined8 *)(param_1 + 0xe0) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_6);
  *(undefined8 *)(param_1 + 0xe8) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_10);
  *(undefined8 *)(param_1 + 0xf0) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_14);
  *(undefined8 *)(param_1 + 0xf8) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_18);
  *(undefined8 *)(param_1 + 0x100) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_22);
  *(undefined8 *)(param_1 + 0x108) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_26);
  *(undefined8 *)(param_1 + 0x110) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_30);
  *(undefined8 *)(param_1 + 0x118) = uVar11;
  uVar11 = FUN_00f0a7e0(lVar1,param_34);
  *(undefined8 *)(param_1 + 0x120) = uVar11;
  uVar12 = 2;
  uVar2 = uVar12;
  if ((param_7 & 1) == 0) {
    uVar2 = 0;
  }
  uVar14 = 4;
  uVar3 = uVar14;
  if ((param_11 & 1) == 0) {
    uVar3 = 0;
  }
  uVar21 = 8;
  uVar4 = uVar21;
  if ((param_15 & 1) == 0) {
    uVar4 = 0;
  }
  uVar23 = 0x10;
  uVar5 = uVar23;
  if ((param_19 & 1) == 0) {
    uVar5 = 0;
  }
  uVar24 = 0x20;
  uVar6 = uVar24;
  if ((param_23 & 1) == 0) {
    uVar6 = 0;
  }
  uVar25 = 0x40;
  uVar7 = uVar25;
  if ((param_27 & 1) == 0) {
    uVar7 = 0;
  }
  uVar26 = 0x80;
  uVar8 = uVar26;
  if ((param_31 & 1) == 0) {
    uVar8 = 0;
  }
  uVar27 = 0x100;
  uVar9 = uVar27;
  if ((param_35 & 1) == 0) {
    uVar9 = 0;
  }
  if ((param_8 & 1) == 0) {
    uVar12 = 0;
  }
  uVar28 = 0;
  uVar29 = 0;
  if ((param_12 & 1) == 0) {
    uVar14 = 0;
  }
  uVar30 = 0;
  uVar31 = 0;
  if ((param_16 & 1) == 0) {
    uVar21 = 0;
  }
  if ((param_20 & 1) == 0) {
    uVar23 = 0;
  }
  if ((param_24 & 1) == 0) {
    uVar24 = 0;
  }
  if ((param_28 & 1) == 0) {
    uVar25 = 0;
  }
  if ((param_32 & 1) == 0) {
    uVar26 = 0;
  }
  if ((param_36 & 1) == 0) {
    uVar27 = 0;
  }
  uVar15 = 0x80000;
  if ((param_9 & 1) == 0) {
    uVar15 = 0;
  }
  uVar18 = 0x100000;
  if ((param_13 & 1) == 0) {
    uVar18 = 0;
  }
  uVar22 = 0x200000;
  if ((param_17 & 1) == 0) {
    uVar22 = 0;
  }
  uVar19 = 0x400000;
  if ((param_21 & 1) == 0) {
    uVar19 = 0;
  }
  uVar13 = 0x800000;
  if ((param_25 & 1) == 0) {
    uVar13 = 0;
  }
  uVar20 = 0x1000000;
  if ((param_29 & 1) == 0) {
    uVar20 = 0;
  }
  uVar16 = 0x2000000;
  if ((param_33 & 1) == 0) {
    uVar16 = 0;
  }
  uVar17 = 0x4000000;
  if ((param_37 & 1) == 0) {
    uVar17 = 0;
  }
  *(uint *)(param_1 + 0x144) =
       *(uint *)(param_1 + 0x144) & 0xf8000000 |
       uVar2 | param_3 & 1 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
       (uVar12 | param_4 & 1 | uVar14 | uVar21 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27) << 9 |
       uVar18 | uVar15 | uVar22 | uVar19 | uVar13 | uVar20 | uVar16 | (param_5 & 1) << 0x12 | uVar17
  ;
  if (*(long *)(param_1 + 0xf8) != 0) {
    uVar10 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf8) + 8));
    uVar30 = (undefined2)uVar10;
    uVar31 = (undefined2)((uint)uVar10 >> 0x10);
  }
  *(uint *)(param_1 + 300) = CONCAT22(uVar31,uVar30);
  if (*(long *)(param_1 + 0x108) != 0) {
    uVar10 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0x108) + 8));
    uVar28 = (undefined2)uVar10;
    uVar29 = (undefined2)((uint)uVar10 >> 0x10);
  }
  *(uint *)(param_1 + 0x134) = CONCAT22(uVar29,uVar28);
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar10 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xe0) + 10));
    uVar30 = (undefined2)uVar10;
    uVar31 = (undefined2)((uint)uVar10 >> 0x10);
  }
  *(uint *)(param_1 + 0x138) = CONCAT22(uVar31,uVar30);
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar10 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0x110) + 10));
    uVar28 = (undefined2)uVar10;
    uVar29 = (undefined2)((uint)uVar10 >> 0x10);
  }
  *(uint *)(param_1 + 0x140) = CONCAT22(uVar29,uVar28);
  FUN_00f103a0(param_1);
  return;
}

