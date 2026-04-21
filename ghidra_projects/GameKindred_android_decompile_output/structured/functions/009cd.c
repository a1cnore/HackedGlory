// functions/009cd — 15 functions
#include "libGameKindred.h"




void FUN_009cd010(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  undefined4 uVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float fStack_12c;
  undefined8 auStack_128 [2];
  undefined4 auStack_118 [2];
  undefined8 uStack_110;
  undefined8 auStack_108 [11];
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_00920a64();
  local_134 = CONCAT13((char)(int)(*(float *)(param_2 + 0x18) * 255.0),0xffffff);
  fVar21 = (float)FUN_01988c78();
  uVar2 = local_134;
  lVar11 = 0;
  uVar22 = 0xffffffff;
  DAT_0312f350 = DAT_0312f350 + fVar21 * 6.2831855;
  if (6.2831855 <= DAT_0312f350) {
    DAT_0312f350 = DAT_0312f350 - 6.2831855;
  }
  do {
    lVar8 = lVar11 + 0x30;
    *(undefined8 *)((long)auStack_118 + lVar11) = 0xffffffff00000000;
    *(undefined8 *)((long)auStack_128 + lVar11 + 8) = 0xffffffff;
    *(undefined8 *)((long)auStack_108 + lVar11) = 0xffffffff;
    *(undefined8 *)((long)&uStack_110 + lVar11) = 0;
    *(undefined8 *)((long)auStack_128 + lVar11) = 0;
    *(undefined8 *)((long)&local_130 + lVar11) = 0xffffffff00000000;
    lVar11 = lVar8;
  } while (lVar8 != 0x30);
  uVar19 = 0x8000000080009;
  auStack_128[0] = 0x8000000080009;
  auStack_118[0] = 1;
  uStack_110._4_4_ = 8;
  FUN_009d0298(param_1,param_2,param_3,param_5,local_134,uVar6,&local_130);
  lVar11 = 0xc;
  do {
    FUN_009d0298(SUB42(DAT_0312f350,0),param_1,param_2,param_3,param_5,uVar2,uVar6,
                 (long)&local_130 + lVar11);
    lVar11 = lVar11 + 0xc;
  } while (lVar11 != 0x30);
  lVar11 = 0;
  do {
    fVar21 = (float)uVar19;
    lVar8 = param_5 + lVar11;
    if (*(char *)(lVar8 + 0x160) != '\0') {
      plVar7 = *(long **)(lVar8 + 0x128);
      if (plVar7 == (long *)0x0) {
LAB_009cd214:
        local_138 = *(undefined4 *)(param_5 + lVar11 + 0x150);
        local_140 = *(undefined8 *)(param_5 + lVar11 + 0x148);
      }
      else {
        if (*(int *)(param_5 + lVar11 + 0x130) != (int)plVar7[1]) {
          *(undefined8 *)(lVar8 + 0x128) = 0;
          *(undefined4 *)(param_5 + lVar11 + 0x130) = DAT_03214ce8;
          goto LAB_009cd214;
        }
        lVar8 = (**(code **)(*plVar7 + 0x10))();
        if (lVar8 == 0) goto LAB_009cd214;
        FUN_00d55794(lVar8,&local_140,0);
        uVar6 = FUN_00d5bc38(lVar8);
        FUN_00e6a93c(&local_130,0x80,"icon_hero_%s",uVar6);
      }
      fVar16 = (float)FUN_009cdd60(param_5,&local_140);
      iVar1 = *(int *)(param_5 + lVar11 + 0x164);
      fVar18 = DAT_03218f00._4_4_;
      fVar17 = (float)DAT_03218f00;
      if (iVar1 - 2U < 3) {
        bVar5 = false;
LAB_009cd28c:
        lVar8 = FUN_00920bec(iVar1,0);
        bVar10 = lVar8 == 0;
        if (bVar10) {
          fVar25 = *(float *)(param_5 + lVar11 + 0x15c);
          lVar8 = 0;
          fVar25 = fVar25 - (float)(int)fVar25;
        }
        else {
          fVar28 = (float)(int)fVar16;
          fVar24 = (float)(int)fVar21;
          fVar26 = fVar17 * *(float *)(param_2 + 0x10);
          fVar27 = fVar18 * *(float *)(param_2 + 0x14);
          lVar9 = FUN_00f0a7e0(param_3,lVar8);
          fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
          fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
          uVar2 = *(uint *)(*(long *)(*param_3 + 8) + 0x3c);
          fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
          fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
          fVar15 = fVar28 - fVar26 * fVar25 * 0.5;
          fVar13 = fVar24 - fVar27 * fVar12 * 0.5;
          fVar29 = 1.0 / (float)(uVar2 & 0x3fff);
          FUN_00965b68(SUB42(fVar15,0),fVar13,fVar26 * fVar25 + fVar15,fVar27 * fVar12 + fVar13,0,
                       fVar29 * fVar14,1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar23,
                       (fVar14 + fVar25) * fVar29,param_1,&local_134,0);
          fVar13 = fVar17 * *(float *)(param_2 + 0x10);
          fVar23 = fVar18 * *(float *)(param_2 + 0x14);
          lVar9 = FUN_00f0a7e0(param_3,lVar8);
          fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
          fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
          uVar2 = *(uint *)(*(long *)(*param_3 + 8) + 0x3c);
          fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
          fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
          fVar28 = fVar28 - fVar13 * fVar25 * 0.5;
          fVar24 = fVar24 - fVar23 * fVar14 * 0.5;
          fVar26 = 1.0 / (float)(uVar2 & 0x3fff);
          FUN_00965b68(SUB42(fVar28,0),fVar24,fVar13 * fVar25 + fVar28,fVar23 * fVar14 + fVar24,0,
                       fVar26 * fVar15,1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar12,
                       (fVar15 + fVar25) * fVar26,param_1,&local_134,0);
          fVar25 = *(float *)(param_5 + lVar11 + 0x15c);
          fVar25 = fVar25 - (float)(int)fVar25;
        }
        bVar10 = !bVar10;
        if (!bVar5) goto LAB_009cd480;
      }
      else {
        if (iVar1 == 5) {
          bVar5 = true;
          fVar17 = 1.0;
          fVar18 = 1.0;
          goto LAB_009cd28c;
        }
        if (iVar1 == 6) {
          fVar18 = 0.85;
          bVar5 = false;
          fVar17 = fVar18;
          goto LAB_009cd28c;
        }
        fVar25 = *(float *)(param_5 + lVar11 + 0x15c);
        lVar8 = 0;
        bVar10 = false;
        fVar25 = fVar25 - (float)(int)fVar25;
LAB_009cd480:
        fVar25 = 1.0 - fVar25;
      }
      fVar15 = (float)NEON_ucvtf(local_134 >> 0x18);
      fVar28 = fVar25 * fVar15 * 0.7;
      uVar22 = (ulong)(uint)fVar28;
      fVar28 = fVar15 * 0.7 - fVar28;
      uVar19 = (ulong)(uint)fVar28;
      local_148 = (undefined2)local_134;
      local_146 = local_134._2_1_;
      uVar3 = (undefined1)(int)fVar28;
      local_145 = uVar3;
      if (bVar10) {
        fVar15 = (float)(int)fVar21;
        fVar12 = fVar25 * 1.5 + 0.0;
        fVar24 = fVar25 * 1.5 + 0.5;
        fVar26 = (float)(int)fVar16;
        fVar23 = fVar12 + fVar17 * fVar17 * *(float *)(param_2 + 0x10);
        fVar12 = fVar12 + fVar18 * fVar18 * *(float *)(param_2 + 0x14);
        lVar9 = FUN_00f0a7e0(param_3,lVar8);
        fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
        fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
        uVar2 = *(uint *)(*(long *)(*param_3 + 8) + 0x3c);
        fVar28 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
        fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
        fVar16 = fVar26 - fVar23 * fVar21 * 0.5;
        fVar14 = fVar15 - fVar12 * fVar28 * 0.5;
        fVar27 = 1.0 / (float)(uVar2 & 0x3fff);
        FUN_00965b68(SUB42(fVar16,0),fVar14,fVar23 * fVar21 + fVar16,fVar12 * fVar28 + fVar14,0,
                     fVar27 * fVar25,1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar13,
                     (fVar25 + fVar21) * fVar27,param_1,&local_148,0);
        fVar16 = *(float *)(param_2 + 0x14);
        fVar25 = fVar24 + fVar17 * fVar17 * *(float *)(param_2 + 0x10);
        local_145 = uVar3;
        lVar8 = FUN_00f0a7e0(param_3,lVar8);
        fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 8));
        fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 10));
        NEON_ucvtf((uint)*(ushort *)(lVar8 + 4));
        NEON_ucvtf((uint)*(ushort *)(lVar8 + 6));
        uVar19 = (ulong)(uint)(fVar15 - (fVar24 + fVar18 * fVar18 * fVar16) * fVar17 * 0.5);
        uVar22 = (ulong)(uint)(fVar25 * fVar21 + (fVar26 - fVar25 * fVar21 * 0.5));
        FUN_00965b68(param_1,&local_148,0);
      }
    }
    fVar21 = (float)uVar19;
    uVar20 = (undefined4)uVar22;
    lVar11 = lVar11 + 0x40;
    if (lVar11 == 0x500) {
      FUN_009bbfb0();
      FUN_009bd5c8();
      local_130 = (float)FUN_009b8144();
      auStack_128[0] = CONCAT44(auStack_128[0]._4_4_,uVar20);
      fStack_12c = fVar21;
      fVar28 = (float)FUN_009cdd60(param_5,&local_130);
      FUN_00f0025c(&local_130,&local_140);
      fVar23 = *(float *)(param_2 + 0x14) * 48.0;
      local_146 = 0xff;
      fVar29 = (float)(int)(*(float *)(param_2 + 0x10) * 4.0);
      fVar12 = (fVar21 + -3.0) - fVar23 * 0.5;
      local_148 = 0xffff;
      local_145 = (undefined1)(int)(*(float *)(param_2 + 0x18) * 0.3 * 255.0);
      fVar27 = (float)(int)(*(float *)(param_2 + 0x14) * 4.0);
      lVar11 = *(long *)(param_5 + 0x628);
      fVar16 = *(float *)(param_2 + 0x10) * ((local_130 * 48.0) / (float)local_140) * 0.85;
      fVar13 = fVar16 * 0.5;
      fVar16 = fVar16 + fVar29 + fVar29;
      uVar2 = *(uint *)(*(long *)(*param_3 + 8) + 0x3c);
      fVar25 = (fVar28 - fVar13) - fVar29;
      fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      fVar14 = (fVar12 - fVar27) - fVar17 * 0.0;
      fVar17 = fVar25 - fVar18 * 0.0;
      fVar26 = 1.0 / (float)(uVar2 & 0x3fff);
      FUN_00965b68(SUB42(fVar17,0),fVar14,fVar16 + fVar17,fVar14 + fVar27,0,fVar26 * fVar24,
                   1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar15,(fVar24 + fVar18) * fVar26,
                   param_1,&local_148,0);
      lVar11 = *(long *)(param_5 + 0x628);
      uVar2 = *(uint *)(*(long *)(*param_3 + 8) + 0x3c);
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      fVar15 = (fVar21 + -3.0 + fVar23 * 0.5) - fVar15 * 0.0;
      fVar21 = fVar25 - fVar18 * 0.0;
      fVar24 = 1.0 / (float)(uVar2 & 0x3fff);
      FUN_00965b68(SUB42(fVar21,0),fVar15,fVar16 + fVar21,fVar15 + fVar27,0,fVar24 * fVar14,
                   1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar17,(fVar14 + fVar18) * fVar24,
                   param_1,&local_148,0);
      lVar11 = *(long *)(param_5 + 0x628);
      uVar2 = *(uint *)(*(long *)(*param_3 + 8) + 0x3c);
      fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      fVar25 = fVar25 - fVar21 * 0.0;
      fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      fVar15 = 1.0 / (float)(uVar2 & 0x3fff);
      fVar18 = fVar12 - fVar18 * 0.0;
      FUN_00965b68(SUB42(fVar25,0),fVar18,fVar25 + fVar29,fVar23 + fVar18,0,fVar15 * fVar16,
                   1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar17,(fVar16 + fVar21) * fVar15,
                   param_1,&local_148,0);
      lVar11 = *(long *)(param_5 + 0x628);
      uVar2 = *(uint *)(*(long *)(*param_3 + 8) + 0x3c);
      fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
      fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
      fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
      fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
      fVar12 = fVar12 - fVar21 * 0.0;
      fVar21 = (fVar28 + fVar13) - fVar18 * 0.0;
      fVar25 = 1.0 / (float)(uVar2 & 0x3fff);
      FUN_00965b68(SUB42(fVar21,0),fVar12,fVar21 + fVar29,fVar23 + fVar12,0,fVar25 * fVar17,
                   1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar16,(fVar17 + fVar18) * fVar25,
                   param_1,&local_148,0);
      if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_009cda3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009cf880(param_1,param_4);
  return;
}




void FUN_009cda44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009cf7f0(param_1,param_4);
  return;
}




void FUN_009cda4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009cf948(param_1,param_4);
  return;
}




void FUN_009cda54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009cfde4(param_1,param_4);
  return;
}




void FUN_009cda5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009cfa50(param_1,param_4);
  return;
}




void FUN_009cda64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009d01d0(param_1,param_4);
  return;
}




void FUN_009cda6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_009cfec4(param_1,param_4);
  return;
}




void FUN_009cda78(void)

{
  return;
}




void FUN_009cda7c(long param_1)

{
  long lVar1;
  
  DAT_0312f354 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f354 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f354 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d1000;
  *(code **)(lVar1 + 0xb8) = FUN_009d1024;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f354;
  *(undefined4 *)(lVar1 + 0xa8) = 0x8a8;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009cdaec,0);
  return;
}




void FUN_009cdaec(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  
  lVar8 = 0;
  do {
    lVar1 = param_1 + lVar8;
    if (*(char *)(lVar1 + 0x160) != '\0') {
      fVar10 = (float)FUN_01988c78();
      fVar10 = *(float *)(lVar1 + 0x15c) - fVar10;
      *(float *)(lVar1 + 0x15c) = fVar10;
      uVar2 = DAT_03214ce8;
      if (fVar10 <= 0.0) {
        lVar1 = param_1 + lVar8;
        *(undefined8 *)(lVar1 + 0x128) = 0;
        *(undefined8 *)(lVar1 + 0x138) = 0;
        *(undefined4 *)(lVar1 + 0x130) = uVar2;
        *(undefined4 *)(lVar1 + 0x140) = uVar2;
        *(undefined4 *)(lVar1 + 0x150) = DAT_03218f38;
        uVar3 = DAT_03218f30;
        *(undefined4 *)(lVar1 + 0x164) = 0;
        *(undefined8 *)(lVar1 + 0x148) = uVar3;
        *(undefined8 *)(lVar1 + 0x159) = 0;
        *(undefined8 *)(lVar1 + 0x154) = 0;
      }
      else {
        lVar1 = param_1 + lVar8;
        plVar5 = *(long **)(lVar1 + 0x128);
        if (plVar5 != (long *)0x0) {
          if (*(int *)(lVar1 + 0x130) == (int)plVar5[1]) {
            lVar6 = (**(code **)(*plVar5 + 0x10))();
            uVar2 = DAT_03214ce8;
            if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x2fc) & 0x1f) == 0)) {
              *(undefined8 *)(lVar1 + 0x128) = 0;
              *(undefined4 *)(lVar1 + 0x130) = uVar2;
              FUN_00d55794(lVar6,param_1 + lVar8 + 0x148,0);
            }
          }
          else {
            *(undefined8 *)(lVar1 + 0x128) = 0;
            *(undefined4 *)(lVar1 + 0x130) = DAT_03214ce8;
          }
        }
      }
    }
    lVar8 = lVar8 + 0x40;
  } while (lVar8 != 0x500);
  if ((*(byte *)(param_1 + 0x8a0) >> 3 & 1) != 0) {
    fVar10 = (float)FUN_01988c78();
    *(float *)(param_1 + 0x89c) = fVar10 + *(float *)(param_1 + 0x89c);
  }
  lVar8 = FUN_00920a64();
  iVar4 = FUN_00920910();
  if (iVar4 != 0) {
    uVar9 = 0;
    do {
      if ((~*(byte *)(lVar8 + 0x6d) & 3) == 0) {
        FUN_009a53a8(lVar8);
      }
      uVar9 = uVar9 + 1;
      uVar7 = FUN_00920910();
      lVar8 = lVar8 + 0x70;
    } while (uVar9 < (uVar7 & 0xffffffff));
  }
  FUN_009cdc5c(param_1);
  return;
}




void FUN_009cdc5c(undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined4 local_30;
  float fStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_3 + 0x828) != 0) {
    uVar3 = FUN_00da2da8();
    lVar5 = *(long *)(param_3 + 0x828);
    if (((uVar3 & 1) == 0) ||
       (((uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f, uVar1 != 0x1f &&
         (*(short *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) == 4)) ||
        ((*(byte *)(lVar5 + 0x2f8) & 0x83) != 0)))) {
      FUN_00da2da8(lVar5);
      lVar5 = *(long *)(param_3 + 0x828);
      *(uint *)(param_3 + 0x6cc) = *(uint *)(param_3 + 0x6cc) & 0xfffffffb;
    }
    uVar4 = FUN_00da2d50(lVar5);
    local_30 = FUN_009cdd60(param_3,uVar4);
    fStack_2c = param_2;
    fVar6 = (float)FUN_00f08664(&local_30,param_3 + 0x28);
    if ((0.1 <= ABS(*(float *)(param_3 + 0x688) - fVar6)) ||
       (0.1 <= ABS(*(float *)(param_3 + 0x68c) - param_2))) {
      *(uint *)(param_3 + 0x6cc) = *(uint *)(param_3 + 0x6cc) & 0xfffffffb;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009cdd60(long param_1)

{
  FUN_00965ecc(param_1 + 0x28);
  return;
}




void FUN_009cde24(long param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  *(long *)(param_1 + 0x828) = param_2;
  *(undefined8 *)(param_1 + 0x85c) = *param_3;
  lVar5 = FUN_00920a70();
  if (lVar5 == 0) {
    return;
  }
  lVar10 = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x83c) = *(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(param_1 + 0x844) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(lVar5 + 0x20);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(lVar5 + 0x30);
  uVar4 = *(uint *)(param_1 + 0xac);
  uVar7 = (uint)(*(float *)(lVar5 + 8) * 255.0);
  if ((uVar4 >> 7 & 0xff) != uVar7) {
    *(uint *)(param_1 + 0xac) = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar7 & 0xff) << 7;
    FUN_0091ada4(lVar10);
  }
  FUN_00f0e540(lVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(lVar10,"white_background");
  if ((param_2 == 0) || (cVar3 = FUN_00d55870(param_2), cVar3 == '\0')) {
    iVar6 = 0;
  }
  else {
    uVar4 = FUN_00d55870(param_2);
    iVar6 = (uVar4 & 0xff) - 1;
  }
  plVar8 = *(long **)(lVar5 + 0x60);
  if (plVar8 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*plVar8 != 0) {
      lVar10 = 0;
      do {
        lVar2 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (plVar8[lVar2] != 0);
    }
  }
  if (iVar6 < (int)lVar10) {
    pbVar9 = (byte *)plVar8[iVar6];
    fVar11 = *(float *)(pbVar9 + 4) + *(float *)(param_1 + 0x830);
    *(float *)(param_1 + 0x830) = fVar11;
    bVar1 = *(byte *)(param_1 + 0x100) & 0xfe | *pbVar9;
    *(byte *)(param_1 + 0x100) = bVar1;
    *(byte *)(param_1 + 0x100) =
         bVar1 & 0xfd | *(char *)(*(long *)(*(long *)(lVar5 + 0x60) + (long)iVar6 * 8) + 1) << 1;
  }
  else {
    fVar11 = *(float *)(param_1 + 0x830);
  }
  fVar12 = sinf(fVar11 * 0.017453292);
  fVar11 = cosf(fVar11 * 0.017453292);
  *(float *)(param_1 + 0x84c) = fVar11;
  *(float *)(param_1 + 0x850) = fVar12;
  *(float *)(param_1 + 0x854) = -fVar12;
  *(float *)(param_1 + 0x858) = fVar11;
  FUN_009cf04c(param_1);
  return;
}




void FUN_009cdfec(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x830) * 0.017453292;
  fVar1 = sinf(fVar2);
  fVar2 = cosf(fVar2);
  *(float *)(param_1 + 0x84c) = fVar2;
  *(float *)(param_1 + 0x850) = fVar1;
  *(float *)(param_1 + 0x854) = -fVar1;
  *(float *)(param_1 + 0x858) = fVar2;
  return;
}

