// functions/00a70 — 17 functions
#include "libGameKindred.h"




void FUN_00a70074(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    if (*(char *)(param_1 + 0x3b08) != '\0') {
      *(char *)(param_1 + 0x3b08) = '\0';
      FUN_00a6ed38(param_1,param_1 + 0x3860,0);
      return;
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0x35a8) != '\0') {
      *(char *)(param_1 + 0x35a8) = '\0';
      FUN_00a6ed38(param_1,param_1 + 0x3300,*(byte *)(param_1 + 0x3b2a) >> 2 & 1);
      return;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x3858) != '\0') {
      *(char *)(param_1 + 0x3858) = '\0';
      FUN_00a6ed38(param_1,param_1 + 0x35b0,(*(byte *)(param_1 + 0x3b2a) & 6) != 0);
      return;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x32f8) != '\0') {
      *(char *)(param_1 + 0x32f8) = '\0';
      FUN_00a6ed38(param_1,param_1 + 0x3050,*(byte *)(param_1 + 0x3b2a) >> 3 & 1);
      return;
    }
  }
  return;
}




void FUN_00a70150(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    uVar3 = FUN_00a1f33c();
    local_50 = 0x1a;
    local_58 = &PTR_FUN_027c85a8;
    FUN_00a1a334(uVar3,&local_58);
    if (((param_3 & 1) != 0) && (uVar2 = FUN_009f1f70(0x12), (uVar2 & 1) != 0)) {
      FUN_00f0044c(param_2[4],param_1 + 0x348);
      FUN_00f02010(param_1 + 0x348,param_1 + 0x3b18,param_1 + 0x3b20);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a70240(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_3 & 1) != 0) && (uVar2 = FUN_009f1f70(0x12), (uVar2 & 1) != 0)) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if (((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
      uVar2 = FUN_00f004ac(param_1 + 0x348);
      if (((((uVar2 & 1) != 0) && (lVar3 = FUN_00f00498(param_1 + 0x348), lVar3 == param_2[4])) &&
          (*(float *)(param_1 + 0x3b18) <= (float)(int)*(float *)(param_2 + 5))) &&
         ((((float)(int)*(float *)(param_2 + 5) <= *(float *)(param_1 + 0x3b20) &&
           (*(float *)(param_1 + 0x3b1c) <= (float)(int)*(float *)((long)param_2 + 0x2c))) &&
          ((float)(int)*(float *)((long)param_2 + 0x2c) <= *(float *)(param_1 + 0x3b24))))) {
        uVar4 = FUN_00a1f33c();
        local_40 = 0x1a;
        local_48 = &PTR_FUN_027c85d8;
        FUN_00a1a334(uVar4,&local_48);
      }
    }
    FUN_00f00478(param_1 + 0x348);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a70378(void *param_1)

{
  FUN_00a3b130();
  operator_delete(param_1);
  return;
}




void FUN_00a7039c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_00f017e8();
  uVar2 = DAT_03210cf8;
  puVar1 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x12) = 0x7000000;
  *param_1 = &PTR_FUN_027ccf98;
  param_1[0x11] = &PTR_FUN_027cd0a8;
  param_1[0x13] = uVar2;
  FUN_00f0a784(puVar1);
  param_1[0x16] = 0;
  param_1[0x1a] = 0x3f0000003f800000;
  FUN_00f0a814(puVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  uVar2 = FUN_00f0a7e0(puVar1,"hud_vignette");
  param_1[0x16] = uVar2;
  uVar2 = FUN_00f0a7e0(puVar1,"vignette_fog_top");
  param_1[0x17] = uVar2;
  uVar2 = FUN_00f0a7e0(puVar1,"vignette_fog_left");
  param_1[0x18] = uVar2;
  uVar2 = FUN_00f0a7e0(puVar1,"vignette_fog_right");
  param_1[0x19] = uVar2;
  if ((~*(uint *)((long)param_1 + 0x84) & 0x7f80) == 0) {
    return;
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x7f80;
  FUN_0091ada4(param_1);
  return;
}




void FUN_00a70494(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  ushort uVar15;
  ushort uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((0.0 < *(float *)(param_1 + 0xd0)) && (0.0 < *(float *)(param_1 + 0xd4))) {
    FUN_00f0025c(&local_7c,&local_80);
    lVar10 = FUN_00965ecc(param_1);
    fVar19 = *(float *)(lVar10 + 0x10) * local_7c;
    fVar17 = *(float *)(lVar10 + 0x14) * local_80;
    fVar6 = (float)NEON_fminnm((int)(*(float *)(lVar10 + 0x18) * 204.0),0x437f0000);
    uVar13 = SUB42(fVar6,0);
    uVar14 = (short)((uint)fVar6 >> 0x10);
    if (fVar6 <= 0.0) {
      uVar13 = 0;
      uVar14 = 0;
    }
    fVar20 = *(float *)(param_1 + 0xd0);
    fVar8 = *(float *)(param_1 + 0xd4);
    local_88 = 0xdcc8;
    local_86 = 0xff;
    local_85 = (undefined1)(int)(float)CONCAT22(uVar14,uVar13);
    lVar11 = *(long *)(param_1 + 0xb8);
    fVar21 = *(float *)(lVar10 + 0x10) * 600.0;
    fVar18 = *(float *)(lVar10 + 0x14) * 409.6;
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
    fVar22 = 1.0 / (float)(uVar1 & 0x3fff);
    fVar4 = 0.0 - fVar6 * 0.0;
    fVar5 = 0.0 - fVar5 * 0.0;
    local_80 = fVar17;
    local_7c = fVar19;
    FUN_00965b68(SUB42(fVar4,0),SUB42(fVar5,0),SUB42(fVar19 + fVar4,0),SUB42(fVar21 + fVar5,0),0,
                 SUB42(fVar22 * fVar7,0),
                 SUB42(1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar9,0),
                 (fVar7 + fVar6) * fVar22,param_2,&local_88,0);
    lVar11 = *(long *)(param_1 + 0xc0);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
    fVar5 = fVar21 - fVar4 * 0.0;
    fVar4 = 0.0 - fVar6 * 0.0;
    fVar22 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(SUB42(fVar4,0),SUB42(fVar5,0),SUB42(fVar18 + fVar4,0),
                 SUB42((local_80 - fVar21) + fVar5,0),0,SUB42(fVar22 * fVar9,0),
                 SUB42(1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar7,0),
                 (fVar9 + fVar6) * fVar22,param_2,&local_88,0);
    lVar11 = *(long *)(param_1 + 200);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
    fVar6 = (local_7c - fVar18) - fVar4 * 0.0;
    fVar5 = fVar21 - fVar5 * 0.0;
    fVar22 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(SUB42(fVar6,0),SUB42(fVar5,0),SUB42(fVar18 + fVar6,0),
                 SUB42((local_80 - fVar21) + fVar5,0),0,SUB42(fVar22 * fVar7,0),
                 SUB42(1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar9,0),
                 (fVar7 + fVar4) * fVar22,param_2,&local_88,0);
    if (6 < *(int *)((long)param_2 + 0xc) - (int)param_2[1]) {
      lVar11 = *(long *)(param_1 + 0xb0);
      puVar12 = (undefined4 *)*param_2;
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      fVar6 = (float)NEON_fminnm((int)(*(float *)(lVar10 + 0x18) * 255.0),0x437f0000);
      uVar13 = SUB42(fVar6,0);
      uVar14 = (short)((uint)fVar6 >> 0x10);
      if (fVar6 <= 0.0) {
        uVar13 = 0;
        uVar14 = 0;
      }
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      *puVar12 = 0;
      puVar12[1] = local_80;
      puVar12[2] = 0;
      *(undefined2 *)(puVar12 + 3) = 0;
      *(undefined1 *)((long)puVar12 + 0xe) = 10;
      uVar2 = (undefined1)(int)(float)CONCAT22(uVar14,uVar13);
      *(undefined1 *)((long)puVar12 + 0xf) = uVar2;
      puVar12[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 * 0.0 + fVar6);
      puVar12[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar7 * 0.0 + fVar4);
      lVar10 = *param_2;
      *param_2 = lVar10 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar11 = *(long *)(param_1 + 0xb0);
      fVar19 = fVar19 * fVar20 * 0.5;
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      *(float *)(lVar10 + 0x18) = fVar19;
      *(float *)(lVar10 + 0x1c) = local_80;
      *(undefined4 *)(lVar10 + 0x20) = 0;
      *(undefined2 *)(lVar10 + 0x24) = 0;
      *(undefined1 *)(lVar10 + 0x26) = 10;
      *(undefined1 *)(lVar10 + 0x27) = uVar2;
      *(float *)(lVar10 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 * 0.0 + fVar6);
      *(float *)(lVar10 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar4 + fVar7);
      lVar10 = *param_2;
      *param_2 = lVar10 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar11 = *(long *)(param_1 + 0xb0);
      fVar17 = fVar17 * fVar8 * 0.5;
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      *(float *)(lVar10 + 0x1c) = local_80 - fVar17;
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(undefined4 *)(lVar10 + 0x20) = 0;
      *(undefined2 *)(lVar10 + 0x24) = 0;
      *(undefined1 *)(lVar10 + 0x26) = 10;
      *(undefined1 *)(lVar10 + 0x27) = uVar2;
      *(float *)(lVar10 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 + fVar5);
      *(float *)(lVar10 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar7 * 0.0 + fVar4);
      lVar10 = *param_2;
      *param_2 = lVar10 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar11 = *(long *)(param_1 + 0xb0);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      *(float *)(lVar10 + 0x18) = local_7c;
      *(float *)(lVar10 + 0x1c) = local_80;
      *(undefined4 *)(lVar10 + 0x20) = 0;
      *(undefined2 *)(lVar10 + 0x24) = 0;
      *(undefined1 *)(lVar10 + 0x26) = 10;
      *(undefined1 *)(lVar10 + 0x27) = uVar2;
      *(float *)(lVar10 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 * 0.0 + fVar6);
      *(float *)(lVar10 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar7 * 0.0 + fVar4);
      lVar10 = *param_2;
      *param_2 = lVar10 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar11 = *(long *)(param_1 + 0xb0);
      uVar15 = *(ushort *)(lVar11 + 6);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      uVar16 = *(ushort *)(lVar11 + 10);
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      *(float *)(lVar10 + 0x18) = local_7c;
      *(float *)(lVar10 + 0x1c) = local_80 - fVar17;
      fVar17 = (float)NEON_ucvtf((uint)uVar15);
      fVar5 = (float)NEON_ucvtf((uint)uVar16);
      *(undefined4 *)(lVar10 + 0x20) = 0;
      *(undefined2 *)(lVar10 + 0x24) = 0;
      *(undefined1 *)(lVar10 + 0x26) = 10;
      *(undefined1 *)(lVar10 + 0x27) = uVar2;
      *(float *)(lVar10 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar4 * 0.0 + fVar6);
      *(float *)(lVar10 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar17 + fVar5);
      lVar10 = *param_2;
      *param_2 = lVar10 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar11 = *(long *)(param_1 + 0xb0);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      uVar15 = *(ushort *)(lVar11 + 6);
      fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      *(undefined1 *)(lVar10 + 0x27) = uVar2;
      fVar6 = (float)NEON_ucvtf((uint)uVar15);
      *(float *)(lVar10 + 0x18) = local_7c - fVar19;
      *(undefined1 *)(lVar10 + 0x26) = 10;
      *(float *)(lVar10 + 0x1c) = local_80;
      *(undefined4 *)(lVar10 + 0x20) = 0;
      *(undefined2 *)(lVar10 + 0x24) = 0;
      *(float *)(lVar10 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar17 + fVar4);
      *(float *)(lVar10 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar5 * 0.0 + fVar6);
      *param_2 = *param_2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a70b6c(long param_1)

{
  FUN_00a70494(param_1 + -0x88);
  return;
}




undefined8 FUN_00a70b74(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00a70b8c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_00a70ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ccf98;
  param_1[0x11] = &PTR_FUN_027cd0a8;
  FUN_00f0a79c(param_1 + 0x14);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a70be4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ccf98;
  param_1[0x11] = &PTR_FUN_027cd0a8;
  FUN_00f0a79c(param_1 + 0x14);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a70c2c(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_027ccf98;
  *param_1 = &PTR_FUN_027cd0a8;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f01868(param_1 + -0x11);
  return;
}




void FUN_00a70c68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x11;
  *puVar1 = &PTR_FUN_027ccf98;
  *param_1 = &PTR_FUN_027cd0a8;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f01868(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00a70cac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_00f017e8();
  uVar2 = DAT_03210cf8;
  puVar1 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x12) = 0x7000000;
  *param_1 = &PTR_FUN_027cd0f0;
  param_1[0x11] = &PTR_FUN_027cd200;
  param_1[0x13] = uVar2;
  FUN_00f0a784(puVar1);
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0xc4) = 0xff000000ff000000;
  FUN_00f0a814(puVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  uVar2 = FUN_00f0a7e0(puVar1,"generic_gradient_vertical");
  param_1[0x16] = uVar2;
  uVar2 = FUN_00f0a7e0(puVar1,"hud_vignette");
  param_1[0x17] = uVar2;
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
    return;
  }
  return;
}




void FUN_00a70d80(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],long param_4,
                 undefined4 param_5,int param_6)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  float fVar5;
  
  fVar5 = (float)(*(uint *)(param_4 + 0x84) >> 7 & 0xff) / 255.0;
  if (fVar5 <= param_3._0_4_) {
    *(undefined4 *)(param_4 + 200) = param_5;
    if (0.05 <= fVar5) {
      *(undefined4 *)(param_4 + 0xcc) = 0x3e4ccccd;
    }
    else {
      *(undefined4 *)(param_4 + 0xc4) = param_5;
    }
    FUN_00f01980(param_4);
    lVar1 = DAT_03210d00;
    if (param_6 == 0) {
      uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar2 == 0xffff) {
        puVar3 = (ushort *)0x0;
      }
      else {
        puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
        if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar2 = 0xffff;
        }
        else {
          uVar2 = *puVar3;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efdd74(puVar3);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00efddc4(param_3._0_8_,puVar3);
      FUN_00efcac4(param_1,puVar3);
      lVar1 = DAT_03210d00;
      uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar2 == 0xffff) {
        puVar4 = (ushort *)0x0;
      }
      else {
        puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
        if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar2 = 0xffff;
        }
        else {
          uVar2 = *puVar4;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efdd74(puVar4);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00efddc4(0,puVar4);
      FUN_00efcac4(param_2,puVar4);
      FUN_00f02308(param_4,puVar3,puVar4,0);
      return;
    }
  }
  return;
}




float FUN_00a70f80(long param_1)

{
  return (float)(*(uint *)(param_1 + 0x84) >> 7 & 0xff) / 255.0;
}




void FUN_00a70f9c(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ushort uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  float fVar16;
  float fVar17;
  undefined1 local_54 [2];
  undefined1 uStack_52;
  undefined1 uStack_51;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (0.0 < *(float *)(param_1 + 0xc0)) {
    FUN_00f0025c(&local_4c,&local_50);
    lVar6 = FUN_00965ecc(param_1);
    local_4c = *(float *)(lVar6 + 0x10) * local_4c;
    local_50 = *(float *)(lVar6 + 0x14) * local_50;
    _local_54 = CONCAT13((char)(int)(*(float *)(lVar6 + 0x18) * 255.0),
                         (int3)*(undefined4 *)(param_1 + 0xc4));
    lVar7 = *(long *)(param_1 + 0xb0);
    fVar16 = *(float *)(lVar6 + 0x14) * 200.0;
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
    fVar5 = 0.0 - fVar4 * 0.0;
    fVar4 = 0.0 - fVar3 * 0.0;
    fVar12 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(SUB42(fVar4,0),SUB42(fVar5,0),local_4c + fVar4,SUB42(fVar16 + fVar5,0),0,
                 SUB42(fVar12 * fVar11,0),
                 SUB42(1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar10,0),
                 (fVar11 + fVar3) * fVar12,param_2,local_54,0);
    lVar6 = *(long *)(param_1 + 0xb0);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
    fVar4 = 0.0 - fVar3 * 0.0;
    fVar5 = (local_50 - fVar16) - fVar10 * 0.0;
    fVar17 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(SUB42(fVar4,0),SUB42(fVar5,0),local_4c + fVar4,SUB42(fVar16 + fVar5,0),0,
                 SUB42(fVar17 * fVar11,0),
                 SUB42(1.0 - (fVar12 + fVar10) * (1.0 / (float)(uVar1 >> 0xe & 0x3fff)),0),
                 (fVar11 + fVar3) * fVar17,param_2,local_54,0);
    if (6 < *(int *)((long)param_2 + 0xc) - (int)param_2[1]) {
      lVar6 = *(long *)(param_1 + 0xb8);
      puVar8 = (undefined4 *)*param_2;
      uVar9 = *(ushort *)(lVar6 + 4);
      uVar13 = *(ushort *)(lVar6 + 6);
      uVar14 = *(ushort *)(lVar6 + 8);
      uVar15 = *(ushort *)(lVar6 + 10);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      *puVar8 = 0;
      puVar8[1] = local_50;
      puVar8[2] = 0;
      fVar5 = (float)NEON_ucvtf((uint)uVar15);
      fVar3 = (float)NEON_ucvtf((uint)uVar13);
      *(undefined1 *)(puVar8 + 3) = local_54[0];
      *(undefined1 *)((long)puVar8 + 0xd) = local_54[1];
      fVar4 = (float)NEON_ucvtf((uint)uVar14);
      fVar10 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)((long)puVar8 + 0xe) = uStack_52;
      puVar8[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar4 * 0.0 + fVar10);
      puVar8[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar5 * 0.0 + fVar3);
      *(undefined1 *)((long)puVar8 + 0xf) = uStack_51;
      lVar6 = *param_2;
      fVar3 = local_4c * 0.25;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      uVar9 = *(ushort *)(lVar7 + 4);
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      fVar11 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x18) = fVar3;
      *(float *)(lVar6 + 0x1c) = local_50;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 * 0.0 + fVar11);
      *(float *)(lVar6 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar4 + fVar10);
      lVar6 = *param_2;
      fVar4 = (local_50 + local_50) / 3.0;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar9 = *(ushort *)(lVar7 + 4);
      uVar13 = *(ushort *)(lVar7 + 6);
      uVar14 = *(ushort *)(lVar7 + 8);
      uVar15 = *(ushort *)(lVar7 + 10);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(float *)(lVar6 + 0x1c) = local_50 - fVar4;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      fVar5 = (float)NEON_ucvtf((uint)uVar9);
      fVar11 = (float)NEON_ucvtf((uint)uVar14);
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      fVar12 = (float)NEON_ucvtf((uint)uVar15);
      fVar10 = (float)NEON_ucvtf((uint)uVar13);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 + fVar11);
      *(float *)(lVar6 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar12 * 0.0 + fVar10);
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      uVar9 = *(ushort *)(lVar7 + 4);
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      fVar12 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x18) = local_4c;
      *(float *)(lVar6 + 0x1c) = local_50;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar10 * 0.0 + fVar12);
      *(float *)(lVar6 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar11 * 0.0 + fVar5);
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar9 = *(ushort *)(lVar7 + 4);
      uVar13 = *(ushort *)(lVar7 + 6);
      uVar14 = *(ushort *)(lVar7 + 8);
      uVar15 = *(ushort *)(lVar7 + 10);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      *(float *)(lVar6 + 0x18) = local_4c;
      *(float *)(lVar6 + 0x1c) = local_50 - fVar4;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      fVar11 = (float)NEON_ucvtf((uint)uVar14);
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      fVar5 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      fVar10 = (float)NEON_ucvtf((uint)uVar13);
      fVar12 = (float)NEON_ucvtf((uint)uVar15);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar11 * 0.0 + fVar5);
      *(float *)(lVar6 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar10 + fVar12);
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      uVar9 = *(ushort *)(lVar7 + 6);
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
      fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      fVar10 = (float)NEON_ucvtf((uint)uVar9);
      *(float *)(lVar6 + 0x18) = local_4c - fVar3;
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x1c) = local_50;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 + fVar11);
      *(float *)(lVar6 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar12 * 0.0 + fVar10);
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar9 = *(ushort *)(lVar7 + 4);
      uVar13 = *(ushort *)(lVar7 + 6);
      uVar14 = *(ushort *)(lVar7 + 8);
      uVar15 = *(ushort *)(lVar7 + 10);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      fVar12 = (float)NEON_ucvtf((uint)uVar15);
      fVar10 = (float)NEON_ucvtf((uint)uVar13);
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      fVar11 = (float)NEON_ucvtf((uint)uVar14);
      fVar5 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar11 * 0.0 + fVar5);
      *(float *)(lVar6 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar12 * 0.0 + fVar10);
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      uVar9 = *(ushort *)(lVar7 + 4);
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
      fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      fVar5 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x18) = fVar3;
      *(undefined8 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar11 * 0.0 + fVar5);
      *(float *)(lVar6 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar10 + fVar12);
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar9 = *(ushort *)(lVar7 + 4);
      uVar13 = *(ushort *)(lVar7 + 6);
      uVar14 = *(ushort *)(lVar7 + 8);
      uVar15 = *(ushort *)(lVar7 + 10);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(float *)(lVar6 + 0x1c) = fVar4;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      fVar5 = (float)NEON_ucvtf((uint)uVar9);
      fVar11 = (float)NEON_ucvtf((uint)uVar14);
      fVar12 = (float)NEON_ucvtf((uint)uVar15);
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      fVar10 = (float)NEON_ucvtf((uint)uVar13);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 + fVar11);
      *(float *)(lVar6 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar12 * 0.0 + fVar10);
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      uVar9 = *(ushort *)(lVar7 + 4);
      fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      fVar5 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x18) = local_4c;
      *(undefined8 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar11 * 0.0 + fVar5);
      *(float *)(lVar6 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar12 * 0.0 + fVar10);
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar9 = *(ushort *)(lVar7 + 4);
      uVar13 = *(ushort *)(lVar7 + 6);
      uVar14 = *(ushort *)(lVar7 + 8);
      uVar15 = *(ushort *)(lVar7 + 10);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      *(float *)(lVar6 + 0x18) = local_4c;
      *(float *)(lVar6 + 0x1c) = fVar4;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      fVar10 = (float)NEON_ucvtf((uint)uVar14);
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      fVar4 = (float)NEON_ucvtf((uint)uVar9);
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      fVar5 = (float)NEON_ucvtf((uint)uVar13);
      fVar11 = (float)NEON_ucvtf((uint)uVar15);
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar10 * 0.0 + fVar4);
      *(float *)(lVar6 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar5 + fVar11);
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      lVar6 = *param_2;
      *param_2 = lVar6 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x3c);
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 8));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 10));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar7 + 6));
      *(float *)(lVar6 + 0x18) = local_4c - fVar3;
      *(undefined1 *)(lVar6 + 0x24) = local_54[0];
      *(undefined1 *)(lVar6 + 0x26) = uStack_52;
      *(undefined8 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 0x25) = local_54[1];
      *(undefined1 *)(lVar6 + 0x27) = uStack_51;
      *(float *)(lVar6 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar4 + fVar10);
      *(float *)(lVar6 + 0x2c) =
           1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar11 * 0.0 + fVar5);
      *param_2 = *param_2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

