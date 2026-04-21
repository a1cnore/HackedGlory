// functions/00f31 — 15 functions
#include "libGameKindred.h"




void FUN_00f31114(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  float *pfVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 unaff_d8;
  float unaff_s9;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_160;
  float local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  long local_80;
  
  lVar9 = tpidr_el0;
  local_80 = *(long *)(lVar9 + 0x28);
  local_d0 = *param_4;
  local_c8 = *(float *)(param_4 + 1);
  local_e0 = param_4[2];
  local_d8 = *(float *)(param_4 + 3);
  local_f0 = param_4[4];
  local_e8 = *(float *)(param_4 + 5);
  pfVar1 = (float *)(param_4 + 6);
  fVar19 = *pfVar1;
  lVar17 = *(long *)(param_1 + 0x68);
  fVar20 = *(float *)((long)param_4 + 0x34);
  uVar14 = *(undefined8 *)pfVar1;
  uVar13 = *(undefined8 *)pfVar1;
  uVar12 = *(undefined8 *)pfVar1;
  lVar18 = lVar17 + -0x2c0;
  fVar21 = *(float *)(param_4 + 7);
  lVar3 = lVar18;
  if (lVar17 != 0) {
    while (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0x220) & 0xc00) == 0x400) {
        FUN_00967cc0(&local_c0,param_1);
        fVar24 = (float)local_c0;
        fVar25 = (float)((ulong)local_c0 >> 0x20);
        fVar26 = (float)local_b0;
        fVar27 = (float)((ulong)local_b0 >> 0x20);
        fVar32 = (float)local_a0;
        fVar22 = (float)((ulong)local_a0 >> 0x20);
        local_100 = CONCAT44(fVar25 * (float)local_d0 + fVar27 * local_d0._4_4_ + fVar22 * local_c8,
                             fVar24 * (float)local_d0 + fVar26 * local_d0._4_4_ + fVar32 * local_c8)
        ;
        local_f8 = (float)local_d0 * local_b8 + local_d0._4_4_ * local_a8 + local_c8 * local_98;
        local_110 = CONCAT44(fVar25 * (float)local_e0 + fVar27 * local_e0._4_4_ + fVar22 * local_d8,
                             fVar24 * (float)local_e0 + fVar26 * local_e0._4_4_ + fVar32 * local_d8)
        ;
        local_108 = local_b8 * (float)local_e0 + local_a8 * local_e0._4_4_ + local_98 * local_d8;
        local_120 = CONCAT44(fVar25 * (float)local_f0 + fVar27 * local_f0._4_4_ + fVar22 * local_e8,
                             fVar24 * (float)local_f0 + fVar26 * local_f0._4_4_ + fVar32 * local_e8)
        ;
        local_118 = local_b8 * (float)local_f0 + local_a8 * local_f0._4_4_ + local_98 * local_e8;
        lVar17 = *(long *)(param_1 + 0x68);
        unaff_d8 = CONCAT44(fVar25 * fVar19 + fVar27 * fVar20 + fVar22 * fVar21 +
                            (float)((ulong)local_90 >> 0x20),
                            fVar24 * fVar19 + fVar26 * fVar20 + fVar32 * fVar21 + (float)local_90);
        unaff_s9 = fVar19 * local_b8 + fVar20 * local_a8 + fVar21 * local_98 + local_88;
        lVar18 = lVar17 + -0x2c0;
        break;
      }
      plVar2 = (long *)(lVar3 + 0x2c0);
      lVar3 = 0;
      if (*plVar2 != 0) {
        lVar3 = *plVar2 + -0x2c0;
      }
    }
  }
  if ((lVar17 != 0) && (lVar18 != 0)) {
    lVar3 = param_2 + 0x18000;
    lVar17 = param_2 + 0x30000;
    lVar4 = param_2 + 0x40000;
    lVar5 = param_2 + 0x58000;
    do {
      iVar7 = *(int *)(lVar18 + 0x200);
      if (iVar7 == 0) goto switchD_00f31228_caseD_3;
      uVar8 = *(uint *)(lVar18 + 0x220);
      fVar20 = (float)local_c0;
      fVar24 = (float)((ulong)local_c0 >> 0x20);
      fVar25 = (float)local_b0;
      fVar26 = (float)((ulong)local_b0 >> 0x20);
      fVar27 = (float)local_a0;
      fVar32 = (float)((ulong)local_a0 >> 0x20);
      fVar19 = (float)((ulong)local_90 >> 0x20);
      bVar11 = (byte)(uVar8 >> 0x18);
      switch(uVar8 & 0xf) {
      case 0:
      case 1:
        local_130 = *(undefined8 *)(lVar18 + 0x214);
        puVar6 = &local_110;
        puVar10 = &local_100;
        if ((uVar8 & 0xc00) != 0x400) {
          puVar6 = &local_e0;
          puVar10 = &local_d0;
        }
        switch(uVar8 >> 4 & 0xf) {
        case 0:
          param_3 = FUN_00f384c8(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,&local_130,puVar6,
                                 puVar10);
          break;
        case 1:
          param_3 = FUN_00f38814(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,&local_130,puVar6,
                                 puVar10);
          break;
        case 2:
          puVar6 = &local_120;
          if ((uVar8 & 0xc00) != 0x400) {
            puVar6 = &local_f0;
          }
          param_3 = FUN_00f38820(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,&local_130,lVar3,
                                 puVar6);
          break;
        case 3:
          uVar16 = 0;
          goto LAB_00f31688;
        case 4:
          uVar16 = 1;
          goto LAB_00f31688;
        case 5:
          uVar16 = 2;
LAB_00f31688:
          param_3 = FUN_00f383b0(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,&local_130,uVar16);
        }
        break;
      case 2:
        param_3 = FUN_00f36258(param_3,iVar7,lVar18,param_2,lVar5);
        break;
      case 4:
        local_130 = uVar13;
        local_128 = fVar21;
        if ((uVar8 & 0xc00) == 0x400) {
          local_130 = unaff_d8;
          local_128 = unaff_s9;
        }
        param_3 = FUN_00f362ec(param_3,iVar7,lVar18,param_2,lVar17,lVar5,&local_130);
        break;
      case 5:
        local_128 = *(float *)(lVar18 + 0x22c);
        local_130 = *(undefined8 *)(lVar18 + 0x224);
        local_140 = uVar14;
        local_138 = fVar21;
        if ((uVar8 & 0xc00) == 0x400) {
          local_130._4_4_ = (float)((ulong)local_130 >> 0x20);
          fVar22 = (float)local_130 * local_b8;
          fVar23 = local_130._4_4_ * local_a8;
          local_130 = CONCAT44(fVar19 + fVar24 * (float)local_130 + fVar26 * local_130._4_4_ +
                                        fVar32 * local_128,
                               (float)local_90 +
                               fVar20 * (float)local_130 + fVar25 * local_130._4_4_ +
                               fVar27 * local_128);
          local_128 = local_88 + fVar22 + fVar23 + local_128 * local_98;
          local_140 = unaff_d8;
          local_138 = unaff_s9;
        }
        param_3 = FUN_00f36778(param_3,iVar7,lVar18,param_2,lVar17,lVar5,&local_140,
                               uVar8 >> 0xc & 0x7fff,bVar11 >> 3 & 1,&local_130);
        break;
      case 6:
        local_138 = *(float *)(lVar18 + 0x22c);
        local_140 = *(undefined8 *)(lVar18 + 0x224);
        local_148 = *(float *)(lVar18 + 0x238);
        local_150 = *(undefined8 *)(lVar18 + 0x230);
        local_158 = *(float *)(lVar18 + 0x244);
        local_160 = *(undefined8 *)(lVar18 + 0x23c);
        local_130 = uVar12;
        local_128 = fVar21;
        if ((uVar8 & 0xc00) == 0x400) {
          local_140._4_4_ = (float)((ulong)local_140 >> 0x20);
          local_150._4_4_ = (float)((ulong)local_150 >> 0x20);
          local_160._4_4_ = (float)((ulong)local_160 >> 0x20);
          fVar22 = (float)local_140 * local_b8;
          fVar23 = local_140._4_4_ * local_a8;
          fVar30 = local_b8 * (float)local_150;
          fVar28 = local_b8 * (float)local_160;
          fVar31 = local_a8 * local_150._4_4_;
          fVar29 = local_a8 * local_160._4_4_;
          local_150 = CONCAT44(fVar24 * (float)local_150 + fVar26 * local_150._4_4_ +
                               fVar32 * local_148,
                               fVar20 * (float)local_150 + fVar25 * local_150._4_4_ +
                               fVar27 * local_148);
          local_148 = fVar30 + fVar31 + local_98 * local_148;
          local_160 = CONCAT44(fVar24 * (float)local_160 + fVar26 * local_160._4_4_ +
                               fVar32 * local_158,
                               fVar20 * (float)local_160 + fVar25 * local_160._4_4_ +
                               fVar27 * local_158);
          local_158 = fVar28 + fVar29 + local_98 * local_158;
          local_140 = CONCAT44(fVar19 + fVar24 * (float)local_140 + fVar26 * local_140._4_4_ +
                                        fVar32 * local_138,
                               (float)local_90 +
                               fVar20 * (float)local_140 + fVar25 * local_140._4_4_ +
                               fVar27 * local_138);
          local_138 = local_88 + fVar22 + fVar23 + local_138 * local_98;
          local_130 = unaff_d8;
          local_128 = unaff_s9;
        }
        param_3 = FUN_00f36bdc(param_3,iVar7,lVar18,param_2,lVar17,lVar5,&local_130,
                               uVar8 >> 0xc & 0x7fff,bVar11 >> 3 & 1,&local_140,&local_150,
                               &local_160);
        break;
      case 7:
        puVar6 = &local_110;
        puVar10 = &local_100;
        if ((uVar8 & 0xc00) != 0x400) {
          puVar6 = &local_e0;
          puVar10 = &local_d0;
        }
        switch(uVar8 >> 4 & 0xf) {
        case 0:
          param_3 = FUN_00f38ddc(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,puVar6,puVar10);
          break;
        case 1:
          param_3 = FUN_00f38fec(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,puVar6,puVar10);
          break;
        case 2:
          puVar6 = &local_120;
          if ((uVar8 & 0xc00) != 0x400) {
            puVar6 = &local_f0;
          }
          param_3 = FUN_00f38ff8(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,lVar3,puVar6);
          break;
        case 3:
          uVar15 = 0;
          goto LAB_00f317cc;
        case 4:
          uVar15 = 1;
          goto LAB_00f317cc;
        case 5:
          uVar15 = 2;
LAB_00f317cc:
          param_3 = FUN_00f38cc8(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,uVar15);
        }
        break;
      case 8:
        puVar6 = &local_110;
        puVar10 = &local_100;
        if ((uVar8 & 0xc00) != 0x400) {
          puVar6 = &local_e0;
          puVar10 = &local_d0;
        }
        switch(uVar8 >> 4 & 0xf) {
        case 0:
          param_3 = FUN_00f39440(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,puVar6,puVar10);
          break;
        case 1:
          param_3 = FUN_00f39650(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,puVar6,puVar10);
          break;
        case 2:
          puVar6 = &local_120;
          if ((uVar8 & 0xc00) != 0x400) {
            puVar6 = &local_f0;
          }
          param_3 = FUN_00f3965c(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,lVar3,puVar6);
          break;
        case 3:
          uVar15 = 0;
          goto LAB_00f317f0;
        case 4:
          uVar15 = 1;
          goto LAB_00f317f0;
        case 5:
          uVar15 = 2;
LAB_00f317f0:
          param_3 = FUN_00f3932c(param_3,iVar7,lVar18,param_2,lVar17,lVar4,lVar5,uVar15);
        }
      }
switchD_00f31228_caseD_3:
      plVar2 = (long *)(lVar18 + 0x2c0);
      lVar18 = 0;
      if (*plVar2 != 0) {
        lVar18 = *plVar2 + -0x2c0;
      }
    } while (lVar18 != 0);
  }
  if (*(long *)(lVar9 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00f31964(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar1 = *(long *)(param_1 + 0x68) + -0x2c0;
  }
  return lVar1;
}




long FUN_00f31978(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_2 + 0x2c0) != 0) {
    lVar1 = *(long *)(param_2 + 0x2c0) + -0x2c0;
  }
  return lVar1;
}




undefined4 FUN_00f3198c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}




long FUN_00f31994(long param_1)

{
  return param_1 + 0x40;
}




void FUN_00f3199c(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfbff | (param_2 & 1) << 10;
  return;
}




byte FUN_00f319b4(long param_1)

{
  return *(byte *)(param_1 + 0x65) >> 2 & 1;
}




undefined4 FUN_00f319c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




void FUN_00f319c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00f319d4(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_00f31a10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = 0;
    do {
      FUN_01996688(param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_00f31a70(undefined4 *param_1,undefined8 param_2,byte param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  FUN_00f36214(param_1 + 0x1e);
  lVar3 = 1;
  puVar2 = param_1 + 0x21020;
  do {
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
    puVar2 = puVar2 + 0x2a;
  } while (lVar3 != 0x400);
  *(undefined8 *)(param_1 + 0x2b820) = 0x3ff0000;
  puVar2 = param_1 + 0x2b824;
  lVar3 = 1;
  do {
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
    puVar2 = puVar2 + 0xb2;
  } while (lVar3 != 0x400);
  *(undefined8 *)(param_1 + 0x58024) = 0x3ff0000;
  lVar3 = 1;
  puVar2 = param_1 + 0x58028;
  do {
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
    puVar2 = puVar2 + 0x32;
  } while (lVar3 != 0x800);
  *(undefined8 *)(param_1 + 0x71028) = 0x7ff0000;
  lVar3 = 1;
  puVar2 = param_1 + 0x7102c;
  do {
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
    puVar2 = puVar2 + 8;
  } while (lVar3 != 0x100);
  *(undefined8 *)(param_1 + 0x7182c) = 0xff0000;
  *(undefined8 *)(param_1 + 0x71830) = param_2;
  *(undefined1 *)(param_1 + 0x71832) = 0;
  *(undefined8 *)(param_1 + 0x71838) = 0;
  *(undefined8 *)(param_1 + 0x71836) = 0;
  *(undefined4 **)(param_1 + 0x71834) = param_1 + 0x71836;
  *(byte *)(param_1 + 0x7183a) = param_3 & 1;
  *(undefined1 *)((long)param_1 + 0x1c60e9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0x3f80000000000000;
  uVar1 = FUN_01997bcc("forward");
  *(undefined1 *)((long)param_1 + 0x1c60e9) = uVar1;
  return;
}




void FUN_00f31c0c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  
  FUN_00f33e1c();
  puVar8 = (undefined8 *)(param_1 + 8);
  plVar1 = (long *)(param_1 + 0x20);
  if ((undefined8 *)*puVar8 != (undefined8 *)0x0) {
    iVar7 = *(int *)(param_1 + 0x18);
    puVar5 = (undefined8 *)*puVar8;
    do {
      iVar7 = iVar7 + -1;
      if (puVar5 == *(undefined8 **)(param_1 + 0x10)) {
        puVar6 = (undefined8 *)0x0;
        *puVar8 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        puVar6 = (undefined8 *)*puVar5;
        *puVar8 = puVar6;
      }
      if (puVar5 == (undefined8 *)0x0 || puVar5 == (undefined8 *)0x98) break;
      *puVar5 = 0;
      plVar4 = *(long **)(param_1 + 0x28);
      puVar5[1] = plVar4;
      plVar2 = plVar1;
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar2 = plVar4;
      }
      *plVar2 = (long)puVar5;
      *(undefined8 **)(param_1 + 0x28) = puVar5;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
    *(int *)(param_1 + 0x18) = iVar7;
  }
  if (*plVar1 != 0) {
    lVar3 = *plVar1 + -0x98;
    while (lVar3 != 0) {
      lVar9 = *(long *)(lVar3 + 0x98);
      FUN_00f31d34(param_1);
      lVar3 = 0;
      if (lVar9 != 0) {
        lVar3 = lVar9 + -0x98;
      }
    }
  }
  FUN_00f31f0c(param_1);
  FUN_00f33a38(param_1 + 0x1c60d0,*(undefined8 *)((long)&__DT_RELA[0x4156].r_info + param_1));
  *(undefined4 *)(param_1 + 0x30) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *puVar8 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_00f31d34(int *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  long lVar10;
  undefined2 *puVar11;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = 100;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00f32120(param_1 + 8,param_2);
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar11 = (undefined2 *)(*(long *)(param_2 + 0x68) + -0x2c0), puVar11 != (undefined2 *)0x0)) {
    piVar1 = param_1 + 0x2101f;
    do {
      if (*(long *)(puVar11 + 0x144) != 0) {
        lVar10 = *(long *)(puVar11 + 0x144) + -0xc0;
        while (lVar10 != 0) {
          lVar9 = *(long *)(lVar10 + 0xc0);
          FUN_00f32184(param_1 + 0x58028);
          lVar10 = 0;
          if (lVar9 != 0) {
            lVar10 = lVar9 + -0xc0;
          }
        }
      }
      if (*(long *)(puVar11 + 0x104) != 0) {
        FUN_01996688(*(undefined8 *)(param_1 + 0x71830));
      }
      iVar2 = *(int *)(puVar11 + 0x100);
      do {
        while (*piVar1 != 0) {
          ClearExclusiveLocal();
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 100;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      iVar3 = param_1[0x2101e];
      if (iVar2 != 0) {
        puVar7 = (undefined2 *)((long)param_1 + (long)iVar3 * 2 + 0x80078);
        puVar8 = puVar11;
        iVar6 = iVar2;
        do {
          iVar6 = iVar6 + -1;
          *puVar7 = *puVar8;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 != 0);
      }
      param_1[0x2101e] = iVar3 + iVar2;
      *piVar1 = 0;
      lVar10 = *(long *)(puVar11 + 0x160);
      *(undefined4 *)(puVar11 + 0x100) = 0;
      *(undefined1 *)(puVar11 + 0x124) = 1;
      FUN_00f32228(param_1 + 0x2b824,puVar11);
      puVar11 = (undefined2 *)0x0;
      if (lVar10 != 0) {
        puVar11 = (undefined2 *)(lVar10 + -0x2c0);
      }
    } while (puVar11 != (undefined2 *)0x0);
  }
  if ((*(long *)(param_2 + 0x80) != 0) && (lVar10 = *(long *)(param_2 + 0x80) + -0x18, lVar10 != 0))
  {
    do {
      lVar9 = *(long *)(lVar10 + 0x18);
      FUN_00f322cc(param_1 + 0x7102c);
      lVar10 = 0;
      if (lVar9 != 0) {
        lVar10 = lVar9 + -0x18;
      }
    } while (lVar10 != 0);
  }
  FUN_00f32344(param_1 + 0x21020,param_2);
  *param_1 = 0;
  return;
}




void FUN_00f31f0c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  
  puVar1 = (undefined8 *)((long)&__DT_RELA[0x4156].r_offset + param_1);
  plVar2 = (long *)((long)&__DT_RELA[0x4156].r_info + param_1);
  if ((long *)*puVar1 != plVar2) {
    plVar7 = (long *)*puVar1;
    do {
      pvVar6 = (void *)plVar7[5];
      FUN_00f31a10(pvVar6,*(undefined8 *)((long)&__DT_RELA[0x4155].r_info + param_1));
      if (pvVar6 != (void *)0x0) {
        FUN_00f319d4(pvVar6);
        operator_delete(pvVar6);
      }
      plVar3 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar3 = plVar7 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != plVar7) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      plVar7 = plVar4;
    } while (plVar4 != plVar2);
  }
  FUN_00f33a38(puVar1,*plVar2);
  *(undefined8 *)((long)&__DT_RELA[0x4156].r_addend + param_1) = 0;
  *puVar1 = plVar2;
  *plVar2 = 0;
  return;
}

