// functions/00cb7 — 13 functions
#include "libGameKindred.h"




void FUN_00cb7058(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef58))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  FUN_00a10c84(auStack_60);
  FUN_00a10b2c(auStack_60);
  uVar5 = 0xffff0000;
  lVar3 = param_1;
LAB_00cb7104:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x444d06f4), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00cb7104;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_00cb715c;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_00cb715c:
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00cb715c;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00cb715c;
    }
  } while( true );
}




undefined8 * FUN_00cb7188(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return &DAT_03218f30;
  }
  do {
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) {
      puVar1 = (undefined8 *)FUN_00a11178(lVar2);
      return puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while (lVar2 != 0);
  return &DAT_03218f30;
}




undefined8 * FUN_00cb71e0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return &DAT_03218f30;
  }
  do {
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) {
      puVar1 = (undefined8 *)FUN_00a11180(lVar2);
      return puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while (lVar2 != 0);
  return &DAT_03218f30;
}




void FUN_00cb7238(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      FUN_00a11178(0);
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00a11188();
  return;
}




void FUN_00cb7280(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      *(undefined4 *)(param_2 + 1) = DAT_03218f38;
      *param_2 = DAT_03218f30;
      *(undefined4 *)(param_3 + 1) = DAT_03218f70;
      *param_3 = DAT_03218f68;
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  puVar1 = (undefined8 *)FUN_00a11178(lVar2);
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)FUN_00a11180(lVar2);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}




undefined8 FUN_00cb7334(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00a11244();
  return uVar2;
}




undefined8 FUN_00cb7368(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00a11258();
  return uVar2;
}




undefined8 FUN_00cb739c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00a1126c();
  return uVar2;
}




undefined1  [16] FUN_00cb73d0(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return ZEXT816(0);
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00a11280();
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}




undefined8 FUN_00cb7404(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00a11170();
  return uVar2;
}




undefined4 FUN_00cb7438(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      uVar1 = 0;
      uVar3 = 0;
LAB_00cb7480:
      *param_2 = uVar1;
      return uVar3;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef58) {
      uVar1 = FUN_00a11170();
      uVar3 = 1;
      goto LAB_00cb7480;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_00cb7494(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e3ef58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00a11168();
  return;
}




void FUN_00cb74c4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 long *param_6,long param_7,long param_8,long *param_9,undefined1 *param_10)

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
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  float in_w12;
  float in_w13;
  float *pfVar15;
  long lVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_s14;
  float fVar26;
  float fVar27;
  
  lVar3 = tpidr_el0;
  lVar11 = *(long *)(lVar3 + 0x28);
  fVar23 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  fVar24 = (float)(int)(*(float *)(param_7 + 0x10) * fVar7);
  fVar9 = (float)(int)(*(float *)(param_7 + 0x14) * fVar9);
  fVar27 = (float)(int)(fVar24 * 0.5);
  fVar26 = (float)(int)(fVar9 * 0.5);
  param_1 = param_1 - (float)(int)(fVar24 * param_4);
  param_2 = param_2 - (float)(int)(fVar9 * param_5);
  fVar25 = (float)(int)(fVar27 + param_1);
  fVar7 = (float)(int)(fVar26 + param_2);
  if ((fVar23 < 0.0) || (45.0 <= fVar23)) {
    if ((fVar23 < 45.0) || (90.0 <= fVar23)) {
      if ((fVar23 < 90.0) || (135.0 <= fVar23)) {
        if ((fVar23 < 135.0) || (180.0 <= fVar23)) {
          if ((fVar23 < 180.0) || (225.0 <= fVar23)) {
            if ((fVar23 < 225.0) || (270.0 <= fVar23)) {
              if ((fVar23 < 270.0) || (315.0 <= fVar23)) {
                fVar4 = 45.0;
                if (315.0 <= fVar23) {
                  fVar4 = tanf((45.0 - (fVar23 + -315.0)) * 0.017453292);
                  in_w13 = fVar25 - fVar26 * fVar4;
                  goto LAB_00cb75d0;
                }
                goto LAB_00cb77a8;
              }
              in_w13 = fVar25 - fVar27;
              fVar4 = tanf((fVar23 + -270.0) * 0.017453292);
              uVar17 = SUB42(fVar4,0);
              uVar18 = (undefined2)((uint)fVar4 >> 0x10);
              goto LAB_00cb7648;
            }
            in_w13 = fVar25 - fVar27;
            fVar4 = tanf((45.0 - (fVar23 + -225.0)) * 0.017453292);
            uVar17 = SUB42(fVar4,0);
            uVar18 = (undefined2)((uint)fVar4 >> 0x10);
            goto LAB_00cb76c0;
          }
          fVar4 = tanf((fVar23 + -180.0) * 0.017453292);
          in_w13 = fVar25 - fVar26 * fVar4;
        }
        else {
          fVar4 = tanf((45.0 - (fVar23 + -135.0)) * 0.017453292);
          in_w13 = fVar25 + fVar26 * fVar4;
        }
        in_w12 = fVar26 + fVar7;
        fVar4 = in_w12;
        unaff_s14 = in_w13;
      }
      else {
        in_w13 = fVar27 + fVar25;
        fVar4 = tanf((fVar23 + -90.0) * 0.017453292);
        uVar17 = SUB42(fVar4,0);
        uVar18 = (undefined2)((uint)fVar4 >> 0x10);
LAB_00cb76c0:
        in_w12 = fVar7 + fVar27 * (float)CONCAT22(uVar18,uVar17);
        fVar4 = in_w12;
        unaff_s14 = in_w13;
      }
    }
    else {
      in_w13 = fVar27 + fVar25;
      fVar4 = tanf((45.0 - (fVar23 + -45.0)) * 0.017453292);
      uVar17 = SUB42(fVar4,0);
      uVar18 = (undefined2)((uint)fVar4 >> 0x10);
LAB_00cb7648:
      in_w12 = fVar7 - fVar27 * (float)CONCAT22(uVar18,uVar17);
      fVar4 = in_w12;
      unaff_s14 = in_w13;
    }
  }
  else {
    fVar4 = tanf(fVar23 * 0.017453292);
    in_w13 = fVar25 + fVar26 * fVar4;
LAB_00cb75d0:
    in_w12 = fVar7 - fVar26;
    fVar4 = in_w12;
    unaff_s14 = in_w13;
  }
LAB_00cb77a8:
  if (fVar23 <= 315.0) {
    if (225.0 < fVar23) {
      pfVar15 = (float *)*param_6;
      goto LAB_00cb7a04;
    }
    if (135.0 < fVar23) {
      pfVar15 = (float *)*param_6;
      goto LAB_00cb7c24;
    }
    pfVar15 = (float *)*param_6;
    if (fVar23 <= 45.0) goto LAB_00cb8040;
  }
  else {
    in_w13 = fVar25 - fVar27;
    fVar4 = fVar7 - fVar26;
    pfVar15 = (float *)*param_6;
    uVar19 = *(ushort *)(param_8 + 4);
    uVar20 = *(ushort *)(param_8 + 8);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *pfVar15 = fVar25;
    pfVar15[1] = fVar7;
    pfVar15[2] = 0.0;
    fVar8 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(pfVar15 + 3) = *param_10;
    puVar10 = param_10 + 1;
    *(undefined1 *)((long)pfVar15 + 0xd) = *puVar10;
    puVar12 = param_10 + 2;
    fVar6 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)((long)pfVar15 + 0xe) = *puVar12;
    fVar23 = (float)NEON_ucvtf((uint)uVar19);
    puVar13 = param_10 + 3;
    uVar2 = *puVar13;
    pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.5 + fVar23);
    pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * 0.5 + fVar5);
    *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
    lVar16 = *param_6;
    plVar14 = param_6 + 1;
    *param_6 = lVar16 + 0x18;
    *(int *)plVar14 = (int)*plVar14 + 1;
    uVar19 = *(ushort *)(param_8 + 6);
    uVar20 = *(ushort *)(param_8 + 10);
    fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = unaff_s14;
    *(float *)(lVar16 + 0x1c) = in_w12;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    *(undefined1 *)(lVar16 + 0x24) = *param_10;
    fVar5 = (float)NEON_ucvtf((uint)uVar19);
    fVar8 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar16 + 0x25) = *puVar10;
    *(undefined1 *)(lVar16 + 0x26) = *puVar12;
    uVar2 = *puVar13;
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * (((unaff_s14 - param_1) / fVar24) * fVar6 + fVar23);
    *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar5 + fVar8);
    *(undefined1 *)(lVar16 + 0x27) = uVar2;
    lVar16 = *param_6;
    *param_6 = lVar16 + 0x18;
    *(int *)plVar14 = (int)*plVar14 + 1;
    uVar19 = *(ushort *)(param_8 + 6);
    uVar20 = *(ushort *)(param_8 + 8);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = in_w13;
    *(float *)(lVar16 + 0x1c) = fVar4;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar6 = (float)NEON_ucvtf((uint)uVar20);
    fVar5 = (float)NEON_ucvtf((uint)uVar19);
    *(undefined1 *)(lVar16 + 0x24) = *param_10;
    fVar8 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar16 + 0x25) = *puVar10;
    *(undefined1 *)(lVar16 + 0x26) = *puVar12;
    *(undefined1 *)(lVar16 + 0x27) = *puVar13;
    *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.0 + fVar23);
    *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar5 + fVar8);
    pfVar15 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar15;
    *(int *)plVar14 = (int)*plVar14 + 1;
LAB_00cb7a04:
    unaff_s14 = fVar25 - fVar27;
    plVar14 = param_6 + 1;
    in_w12 = fVar26 + fVar7;
    uVar19 = *(ushort *)(param_8 + 4);
    uVar20 = *(ushort *)(param_8 + 10);
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *pfVar15 = fVar25;
    pfVar15[1] = fVar7;
    pfVar15[2] = 0.0;
    fVar8 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(pfVar15 + 3) = *param_10;
    *(undefined1 *)((long)pfVar15 + 0xd) = param_10[1];
    fVar23 = (float)NEON_ucvtf((uint)uVar19);
    *(undefined1 *)((long)pfVar15 + 0xe) = param_10[2];
    uVar2 = param_10[3];
    pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.5 + fVar23);
    pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * 0.5 + fVar5);
    *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
    lVar16 = *param_6;
    *param_6 = lVar16 + 0x18;
    *(int *)plVar14 = (int)*plVar14 + 1;
    uVar19 = *(ushort *)(param_8 + 4);
    uVar20 = *(ushort *)(param_8 + 10);
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = in_w13;
    *(float *)(lVar16 + 0x1c) = fVar4;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar8 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar16 + 0x24) = *param_10;
    *(undefined1 *)(lVar16 + 0x25) = param_10[1];
    fVar23 = (float)NEON_ucvtf((uint)uVar19);
    *(undefined1 *)(lVar16 + 0x26) = param_10[2];
    uVar2 = param_10[3];
    *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.0 + fVar23);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) *
               (((fVar9 - (fVar4 - param_2)) / fVar9) * fVar8 + fVar5);
    *(undefined1 *)(lVar16 + 0x27) = uVar2;
    lVar16 = *param_6;
    *param_6 = lVar16 + 0x18;
    *(int *)plVar14 = (int)*plVar14 + 1;
    uVar19 = *(ushort *)(param_8 + 4);
    uVar20 = *(ushort *)(param_8 + 8);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = unaff_s14;
    *(float *)(lVar16 + 0x1c) = in_w12;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar5 = (float)NEON_ucvtf((uint)uVar20);
    fVar6 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar16 + 0x24) = *param_10;
    *(undefined1 *)(lVar16 + 0x25) = param_10[1];
    fVar23 = (float)NEON_ucvtf((uint)uVar19);
    *(undefined1 *)(lVar16 + 0x26) = param_10[2];
    *(undefined1 *)(lVar16 + 0x27) = param_10[3];
    *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 * 0.0 + fVar23);
    *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar6 * 0.0 + fVar4)
    ;
    pfVar15 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar15;
    *(int *)plVar14 = (int)*plVar14 + 1;
LAB_00cb7c24:
    fVar4 = fVar26 + fVar7;
    puVar13 = param_10 + 3;
    puVar12 = param_10 + 2;
    puVar10 = param_10 + 1;
    plVar14 = param_6 + 1;
    in_w13 = fVar27 + fVar25;
    uVar19 = *(ushort *)(param_8 + 6);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    uVar20 = *(ushort *)(param_8 + 10);
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    pfVar15[2] = 0.0;
    *pfVar15 = fVar25;
    pfVar15[1] = fVar7;
    fVar8 = (float)NEON_ucvtf((uint)uVar20);
    fVar5 = (float)NEON_ucvtf((uint)uVar19);
    *(undefined1 *)(pfVar15 + 3) = *param_10;
    *(undefined1 *)((long)pfVar15 + 0xd) = *puVar10;
    *(undefined1 *)((long)pfVar15 + 0xe) = *puVar12;
    uVar2 = *puVar13;
    pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.5 + fVar23);
    pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * 0.5 + fVar5);
    *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
    lVar16 = *param_6;
    *param_6 = lVar16 + 0x18;
    *(int *)plVar14 = (int)*plVar14 + 1;
    uVar19 = *(ushort *)(param_8 + 6);
    uVar20 = *(ushort *)(param_8 + 10);
    fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = unaff_s14;
    *(float *)(lVar16 + 0x1c) = in_w12;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar8 = (float)NEON_ucvtf((uint)uVar20);
    fVar5 = (float)NEON_ucvtf((uint)uVar19);
    *(undefined1 *)(lVar16 + 0x24) = *param_10;
    *(undefined1 *)(lVar16 + 0x25) = *puVar10;
    *(undefined1 *)(lVar16 + 0x26) = *puVar12;
    uVar2 = *puVar13;
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * (((unaff_s14 - param_1) / fVar24) * fVar6 + fVar23);
    *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * 0.0 + fVar5)
    ;
    *(undefined1 *)(lVar16 + 0x27) = uVar2;
    lVar16 = *param_6;
    *param_6 = lVar16 + 0x18;
    *(int *)plVar14 = (int)*plVar14 + 1;
    uVar19 = *(ushort *)(param_8 + 4);
    uVar20 = *(ushort *)(param_8 + 8);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = in_w13;
    *(float *)(lVar16 + 0x1c) = fVar4;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar8 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar16 + 0x24) = *param_10;
    fVar23 = (float)NEON_ucvtf((uint)uVar19);
    fVar6 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar16 + 0x25) = *puVar10;
    *(undefined1 *)(lVar16 + 0x26) = *puVar12;
    *(undefined1 *)(lVar16 + 0x27) = *puVar13;
    *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar23 + fVar6);
    *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * 0.0 + fVar5)
    ;
    pfVar15 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar15;
    *(int *)plVar14 = (int)*plVar14 + 1;
  }
  unaff_s14 = fVar27 + fVar25;
  plVar14 = param_6 + 1;
  puVar13 = param_10 + 3;
  puVar12 = param_10 + 2;
  puVar10 = param_10 + 1;
  in_w12 = fVar7 - fVar26;
  uVar19 = *(ushort *)(param_8 + 4);
  uVar20 = *(ushort *)(param_8 + 10);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *pfVar15 = fVar25;
  pfVar15[1] = fVar7;
  pfVar15[2] = 0.0;
  fVar8 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)(pfVar15 + 3) = *param_10;
  *(undefined1 *)((long)pfVar15 + 0xd) = *puVar10;
  fVar23 = (float)NEON_ucvtf((uint)uVar19);
  *(undefined1 *)((long)pfVar15 + 0xe) = *puVar12;
  uVar2 = *puVar13;
  pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.5 + fVar23);
  pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * 0.5 + fVar5);
  *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
  lVar16 = *param_6;
  *param_6 = lVar16 + 0x18;
  *(int *)plVar14 = (int)*plVar14 + 1;
  uVar19 = *(ushort *)(param_8 + 4);
  uVar20 = *(ushort *)(param_8 + 6);
  uVar21 = *(ushort *)(param_8 + 8);
  uVar22 = *(ushort *)(param_8 + 10);
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar16 + 0x18) = in_w13;
  *(float *)(lVar16 + 0x1c) = fVar4;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  fVar8 = (float)NEON_ucvtf((uint)uVar22);
  fVar5 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)(lVar16 + 0x24) = *param_10;
  *(undefined1 *)(lVar16 + 0x25) = *puVar10;
  fVar23 = (float)NEON_ucvtf((uint)uVar19);
  fVar6 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar16 + 0x26) = *puVar12;
  uVar2 = *puVar13;
  *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar23 + fVar6);
  *(float *)(lVar16 + 0x2c) =
       1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) *
             (((fVar9 - (fVar4 - param_2)) / fVar9) * fVar8 + fVar5);
  *(undefined1 *)(lVar16 + 0x27) = uVar2;
  lVar16 = *param_6;
  *param_6 = lVar16 + 0x18;
  *(int *)plVar14 = (int)*plVar14 + 1;
  uVar19 = *(ushort *)(param_8 + 6);
  uVar20 = *(ushort *)(param_8 + 8);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar16 + 0x18) = unaff_s14;
  *(float *)(lVar16 + 0x1c) = in_w12;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  fVar4 = (float)NEON_ucvtf((uint)uVar20);
  fVar9 = (float)NEON_ucvtf((uint)uVar19);
  fVar5 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar16 + 0x24) = *param_10;
  *(undefined1 *)(lVar16 + 0x25) = *puVar10;
  *(undefined1 *)(lVar16 + 0x26) = *puVar12;
  uVar2 = *puVar13;
  *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar23 + fVar4);
  *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar9 + fVar5);
  *(undefined1 *)(lVar16 + 0x27) = uVar2;
  pfVar15 = (float *)(*param_6 + 0x18);
  *param_6 = (long)pfVar15;
  *(int *)plVar14 = (int)*plVar14 + 1;
LAB_00cb8040:
  plVar14 = param_6 + 1;
  puVar13 = param_10 + 3;
  puVar12 = param_10 + 2;
  puVar10 = param_10 + 1;
  uVar19 = *(ushort *)(param_8 + 6);
  uVar20 = *(ushort *)(param_8 + 8);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *pfVar15 = fVar25;
  pfVar15[1] = fVar7;
  pfVar15[2] = 0.0;
  fVar4 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)(pfVar15 + 3) = *param_10;
  fVar5 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)((long)pfVar15 + 0xd) = *puVar10;
  fVar9 = (float)NEON_ucvtf((uint)uVar19);
  *(undefined1 *)((long)pfVar15 + 0xe) = *puVar12;
  uVar2 = *puVar13;
  pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar4 * 0.5 + fVar23);
  pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar5 * 0.5 + fVar9);
  *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
  lVar16 = *param_6;
  *param_6 = lVar16 + 0x18;
  *(int *)plVar14 = (int)*plVar14 + 1;
  uVar19 = *(ushort *)(param_8 + 6);
  uVar20 = *(ushort *)(param_8 + 10);
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar16 + 0x18) = unaff_s14;
  *(float *)(lVar16 + 0x1c) = in_w12;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  *(undefined1 *)(lVar16 + 0x24) = *param_10;
  fVar9 = (float)NEON_ucvtf((uint)uVar19);
  fVar5 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)(lVar16 + 0x25) = *puVar10;
  *(undefined1 *)(lVar16 + 0x26) = *puVar12;
  uVar2 = *puVar13;
  *(float *)(lVar16 + 0x28) =
       (1.0 / (float)(uVar1 & 0x3fff)) *
       (((unaff_s14 - (fVar25 - fVar27)) / fVar24) * fVar4 + fVar23);
  *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar9 + fVar5);
  *(undefined1 *)(lVar16 + 0x27) = uVar2;
  lVar16 = *param_6;
  *param_6 = lVar16 + 0x18;
  *(int *)plVar14 = (int)*plVar14 + 1;
  uVar19 = *(ushort *)(param_8 + 4);
  uVar20 = *(ushort *)(param_8 + 8);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar16 + 0x18) = fVar25;
  *(float *)(lVar16 + 0x1c) = fVar7 - fVar26;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  fVar7 = (float)NEON_ucvtf((uint)uVar20);
  fVar24 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar16 + 0x24) = *param_10;
  fVar23 = (float)NEON_ucvtf((uint)uVar19);
  *(undefined1 *)(lVar16 + 0x25) = *puVar10;
  *(undefined1 *)(lVar16 + 0x26) = *puVar12;
  uVar2 = *puVar13;
  *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar7 * 0.5 + fVar23);
  *(float *)(lVar16 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar9 + fVar24);
  *(undefined1 *)(lVar16 + 0x27) = uVar2;
  *param_6 = *param_6 + 0x18;
  *(int *)plVar14 = (int)*plVar14 + 1;
  if (*(long *)(lVar3 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

