// functions/00c2f — 4 functions
#include "libGameKindred.h"




void FUN_00c2f008(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08();
  FUN_00f13f08(param_1,param_2,param_3 + 0xb8);
  FUN_00f13f08((float)param_1 + -12.0,(float)param_2 + -24.0,param_3 + 0x1a8);
  FUN_00c2ebc8(param_3);
  return;
}




void FUN_00c2f064(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  float *pfVar14;
  uint *puVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  float fVar24;
  float local_84;
  undefined8 local_80;
  long local_78;
  
  lVar17 = tpidr_el0;
  local_78 = *(long *)(lVar17 + 0x28);
  FUN_00ed45a4();
  plVar21 = param_1 + 0x1c;
  lVar23 = 0x1b940;
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_027fa040;
  do {
    FUN_00c2df54(plVar21);
    lVar23 = lVar23 + -0x2c20;
    plVar21 = plVar21 + 0x584;
  } while (lVar23 != 0);
  plVar21 = param_1 + 0x3744;
  FUN_00f0b3a4(plVar21);
  plVar1 = param_1 + 0x375f;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x377d;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x379b;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x37b9;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x37d7;
  FUN_00f0d160();
  plVar6 = param_1 + 0x37fd;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x3823;
  FUN_00f017e8(plVar7);
  plVar8 = param_1 + 0x3834;
  *plVar7 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar9 = param_1 + 0x3852;
  FUN_00afbfb0();
  plVar10 = param_1 + 0x388e;
  FUN_00f13ca4(plVar10);
  plVar11 = param_1 + 0x38a5;
  FUN_00f0e4a8();
  plVar12 = param_1 + 0x38c3;
  FUN_00f0d160(plVar12);
  plVar13 = param_1 + 0x38e9;
  FUN_00f0d160();
  memset(param_1 + 0x390f,0,0x50);
  FUN_00e70510(param_1 + 0x3919);
  pfVar14 = (float *)(param_1 + 0x391b);
  *(undefined4 *)(param_1 + 0x391e) = 0;
  param_1[0x391d] = 0;
  param_1[0x391c] = 0;
  pfVar14[0] = 0.0;
  pfVar14[1] = 0.0;
  plVar22 = param_1 + 0x1c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar21,1);
  FUN_00f023ec(plVar21,plVar1,1);
  FUN_00f023ec(plVar21,plVar2,1);
  FUN_00f023ec(plVar21,plVar3,1);
  FUN_00f023ec(plVar21,plVar4,1);
  lVar23 = 10;
  do {
    FUN_00f023ec(plVar21,plVar22,1);
    lVar23 = lVar23 + -1;
    plVar22 = plVar22 + 0x584;
  } while (lVar23 != 0);
  FUN_00f023ec(plVar21,plVar5,1);
  FUN_00f023ec(plVar21,plVar6,1);
  FUN_00f023ec(plVar21,plVar7,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar21,plVar10,1);
  FUN_00f023ec(plVar10,plVar11,1);
  FUN_00f023ec(plVar10,plVar12,1);
  FUN_00f023ec(plVar10,plVar13,1);
  uVar20 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar20 & 0xfffffffb;
  if ((uVar20 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar20 & 0xffff807b;
    FUN_0091ada4(param_1);
  }
  FUN_00f0b424(plVar21,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00f0e548(plVar2,PTR_s_build___MenuBackground_Loading_p_02be35d0,"loading_background_top");
  FUN_00f0e548(plVar3,PTR_s_build___MenuBackground_Loading_p_02be35d0,"loading_background_bottom");
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x37d4) = *(byte *)(param_1 + 0x37d4) | 2;
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  puVar15 = (uint *)((long)param_1 + 0x1be4c);
  uVar20 = *puVar15;
  if ((uVar20 & 0x7f80) != 0x7280) {
    *puVar15 = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x7280;
    FUN_0091ada4(plVar4);
    uVar20 = *puVar15;
  }
  *puVar15 = uVar20 & 0xfffffffb;
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Light_150__02be9c30,&DAT_01bee7fa);
  uVar18 = FUN_00e6ce7c("LOADING_SCREEN_LOADING",0);
  FUN_00f0d75c(plVar5,uVar18);
  FUN_00f0db24(0x41600000,plVar5);
  uVar18 = FUN_00f136e0();
  FUN_00f13fd8(plVar10,uVar18);
  FUN_00f1515c(uVar18,plVar12,1,6);
  FUN_00f1515c(uVar18,plVar13,1,6);
  FUN_00f13b88(uVar18,0x3c);
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar20 = *(uint *)((long)param_1 + 0x1c5ac);
  if ((uVar20 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1c5ac) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x5900;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0e670(plVar11,&DAT_01bee7f6,2);
  FUN_00f0d92c(plVar12,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0dac8(plVar12,3);
  FUN_00f0d9b0(plVar12,1);
  FUN_00f0d92c(plVar13,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar19 = FUN_0092ea9c();
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
  if ((uVar19 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar6,*ppuVar16,&DAT_01bee7fa);
  FUN_00f0dac8(plVar6,3);
  FUN_00f0da30(plVar6,1);
  FUN_00f0da80(plVar6,&DAT_01bee7f6);
  local_80 = 0x4000000040000000;
  FUN_00f0da8c(plVar6,&local_80);
  uVar20 = *(uint *)((long)param_1 + 0x1c06c);
  if ((uVar20 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c06c) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x6600;
    FUN_0091ada4(plVar6);
  }
  if ((*(float *)(param_1 + 0x382c) != 1.25) || (*(float *)((long)param_1 + 0x1c164) != 1.25)) {
    lVar23 = NEON_fmov(0x3fa00000,4);
    param_1[0x382c] = lVar23;
    FUN_0091ada4(plVar7);
  }
  FUN_00afc2ec(0,0,plVar9,"Effect_LoadingScreen",
               "build://Effects/Menu/LoadingScreen/LoadingScreen/LoadingScreen.pfx",4);
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_80);
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"loading_screen_VS_new");
  if ((*(float *)(param_1 + 0x383e) != 0.5) || (*(float *)((long)param_1 + 0x1c1f4) != 0.5)) {
    param_1[0x383e] = 0x3f0000003f000000;
    FUN_0091ada4(plVar8);
  }
  if ((*(float *)(param_1 + 0x383d) != 1.5) || (*(float *)((long)param_1 + 0x1c1ec) != 1.5)) {
    lVar23 = NEON_fmov(0x3fc00000,4);
    param_1[0x383d] = lVar23;
    FUN_0091ada4(plVar8);
  }
  *(uint *)((long)param_1 + 0x1c4f4) = *(uint *)((long)param_1 + 0x1c4f4) & 0xfffffffb;
  FUN_00f0025c(&local_80,&local_84);
  if ((float)local_80 / local_84 <= 1.7777778) {
    local_84 = (float)local_80 * 9.0 * 0.0625;
    fVar24 = (float)local_80;
  }
  else {
    fVar24 = (local_84 * 16.0) / 9.0;
  }
  *pfVar14 = fVar24;
  *(float *)((long)param_1 + 0x1c8dc) = local_84;
  if (*(long *)(lVar17 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2f838(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  FUN_00f0025c(&local_a4,&local_a8);
  FUN_00f13f08(local_a4,local_a8,param_1 + 0x1ba20);
  plVar1 = (long *)(param_1 + 0x1baf8);
  FUN_00f13f08(local_a4,local_a4 * 0.75,plVar1);
  local_b0[0] = 0;
  local_b0[1] = 0;
  uVar7 = FUN_0094276c();
  if ((uVar7 & 1) != 0) {
    FUN_00f13f18(plVar1,&local_a0);
    if ((*(float *)(param_1 + 0x1bb38) != local_a4 * 0.5) || (*(float *)(param_1 + 0x1bb3c) != 0.0))
    {
      *(float *)(param_1 + 0x1bb38) = local_a4 * 0.5;
      *(float *)(param_1 + 0x1bb3c) = 0.0;
      FUN_0091ada4(plVar1);
    }
    local_a0 = 0x3f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_a0);
  }
  puVar2 = (uint *)(param_1 + 0x1bf3c);
  lVar3 = param_1 + 0x1bfe8;
  FUN_00f0dad0(local_a4 * *(float *)(&DAT_01bbc970 + (ulong)((*puVar2 & 4) == 0) * 4),lVar3,1);
  FUN_00f07a18(0,0xc2480000,lVar3,6);
  FUN_00f07940(0,0,param_1 + 0x1beb8,6,lVar3,4);
  lVar3 = param_1 + 0x1c118;
  FUN_00f07a18(0,0xc2700000,lVar3,8);
  FUN_00f13f08(local_a4,*(undefined4 *)(param_1 + 0x1c15c),param_1 + 0x1bbe8);
  FUN_00f13f08(local_a4,local_a8 - *(float *)(param_1 + 0x1c15c),param_1 + 0x1bcd8);
  FUN_00f07940(0,0,param_1 + 0x1bcd8,0,param_1 + 0x1bbe8,3);
  plVar1 = (long *)(param_1 + 0x1bdc8);
  if ((*(float *)(param_1 + 0x1be08) != 0.0) || (*(float *)(param_1 + 0x1be0c) != local_a8)) {
    *(float *)(param_1 + 0x1be08) = 0.0;
    *(float *)(param_1 + 0x1be0c) = local_a8;
    FUN_0091ada4(plVar1);
  }
  local_a0 = 0x3f80000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_a0);
  FUN_00f13f08(local_a4,0x44160000,plVar1);
  lVar11 = param_1 + 0x1c470;
  fVar15 = local_a8;
  FUN_00f13f08(local_a4 * 0.4,lVar11);
  uVar14 = FUN_00f13e54(lVar11);
  local_a0 = CONCAT44(fVar15,uVar14);
  FUN_00f13f18(param_1 + 0x1c528,&local_a0);
  FUN_00f07940(0,0,param_1 + 0x1c528,8,lVar11,8);
  iVar13 = *(int *)(param_1 + 0x1c8e8);
  if (iVar13 == 0) {
    *puVar2 = *puVar2 | 4;
    *(uint *)(param_1 + 0x1be4c) = *(uint *)(param_1 + 0x1be4c) | 4;
  }
  else {
    fVar16 = -200.0;
    fVar18 = (*(float *)(param_1 + 0x1c8dc) + -200.0) * 0.5;
    fVar15 = (float)FUN_00f0eaf4(param_1 + 0xe0 + (ulong)(iVar13 - 1) * 0x2c20 + 0x1a8);
    FUN_00f0eaf4(param_1 + 0xe0 + (ulong)(*(int *)(param_1 + 0x1c8e8) - 1) * 0x2c20 + 0x1a8);
    *(float *)(param_1 + 0x1c8e0) = fVar18 * (fVar15 / fVar16);
    *(float *)(param_1 + 0x1c8e4) = fVar18;
    if (*(uint *)(param_1 + 0x1c8ec) != 0) {
      local_b4 = -1;
      piVar4 = (int *)(param_1 + 0x1c8f0);
      uVar7 = 0;
      pcVar12 = (char *)(param_1 + 0x2cc0);
      local_b8 = -1;
      lVar11 = param_1;
      do {
        lVar9 = lVar11 + 0xe0;
        FUN_00f13f18(lVar9,(float *)(param_1 + 0x1c8e0));
        piVar5 = local_b0 + 1;
        if (*pcVar12 != '\x01') {
          piVar5 = local_b0;
        }
        if (*piVar5 != *piVar4) {
          iVar13 = (int)uVar7;
          if (*pcVar12 == '\x01') {
            if (local_b4 < 0) {
              fVar15 = (float)(**(code **)(*(long *)(lVar11 + 0xe0) + 0x48))(lVar9);
              uVar8 = 3;
              uVar10 = 8;
              fVar15 = fVar15 * (float)*piVar4 * -0.5 + -500.0;
              lVar9 = lVar3;
              uVar17 = 0xc0a00000;
            }
            else {
              uVar10 = 1;
              fVar15 = 0.0;
              uVar8 = 0;
              lVar9 = param_1 + (long)local_b4 * 0x2c20 + 0xe0;
              uVar17 = 0;
            }
            FUN_00f07940(fVar15,uVar17,lVar11 + 0xe0,uVar8,lVar9,uVar10);
            local_a0 = CONCAT44(local_a0._4_4_,iVar13);
            FUN_00933c34(param_1 + 0x1c8a8,&local_a0);
            local_b4 = iVar13;
          }
          else {
            if (local_b8 < 0) {
              fVar15 = (float)(**(code **)(*(long *)(lVar11 + 0xe0) + 0x48))(lVar9);
              uVar8 = 1;
              uVar10 = 8;
              fVar15 = fVar15 * (float)*piVar4 * 0.5 + 500.0;
              lVar9 = lVar3;
              uVar17 = 0xc0a00000;
            }
            else {
              uVar8 = 2;
              uVar10 = 3;
              fVar15 = 0.0;
              lVar9 = param_1 + (long)local_b8 * 0x2c20 + 0xe0;
              uVar17 = 0;
            }
            FUN_00f07940(fVar15,uVar17,lVar11 + 0xe0,uVar8,lVar9,uVar10);
            local_a0 = CONCAT44(local_a0._4_4_,iVar13);
            FUN_00933c34(param_1 + 0x1c8b8,&local_a0);
            local_b8 = iVar13;
          }
          *piVar5 = *piVar5 + 1;
          if ((*(uint *)(lVar11 + 0x164) & 0x7f80) != 0) {
            *(uint *)(lVar11 + 0x164) = *(uint *)(lVar11 + 0x164) & 0xffff807f;
            FUN_0091ada4(lVar11 + 0xe0);
          }
        }
        uVar7 = uVar7 + 1;
        lVar11 = lVar11 + 0x2c20;
        pcVar12 = pcVar12 + 0x2c20;
      } while (uVar7 < *(uint *)(param_1 + 0x1c8ec));
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2fe34(long param_1)

{
  long *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ushort uVar12;
  uint *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  float fVar16;
  float local_78;
  undefined1 auStack_74 [4];
  uint local_70;
  float local_6c;
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  puVar13 = (uint *)(param_1 + 0x1c8ec);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  bVar5 = *(byte *)(param_1 + 0x1c890);
  fVar16 = (float)NEON_ucvtf(*(uint *)(param_1 + 0x1c8e8));
  if ((float)(int)*puVar13 <= fVar16) {
    fVar16 = (float)(int)*puVar13;
  }
  if ((bVar5 & 1) == 0) {
    if (bVar5 >> 1 == 0) goto LAB_00c2fee4;
LAB_00c2febc:
    if ((*(byte *)(param_1 + 0x1c878) & 1) == 0) {
      uVar11 = (ulong)(*(byte *)(param_1 + 0x1c878) >> 1);
    }
    else {
      uVar11 = *(ulong *)(param_1 + 0x1c880);
    }
    bVar7 = uVar11 != 0;
  }
  else {
    if (*(long *)(param_1 + 0x1c898) != 0) goto LAB_00c2febc;
LAB_00c2fee4:
    bVar7 = false;
  }
  uVar11 = FUN_0094276c();
  if ((uVar11 & 1) == 0) {
    if ((bool)((int)fVar16 != 1 & (bVar7 ^ 1U))) {
      if ((int)fVar16 < 2) {
        FUN_00f0e628(param_1 + 0x1baf8);
        FUN_00f0e548(param_1 + 0x1baf8,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background"
                    );
        uVar10 = *puVar13;
        if (uVar10 != 0) {
          uVar11 = 0;
          puVar13 = (uint *)(param_1 + 0x164);
          do {
            uVar11 = uVar11 + 1;
            *puVar13 = *puVar13 & 0xfffffffb;
            puVar13 = puVar13 + 0xb08;
          } while (uVar11 < uVar10);
        }
        uVar10 = 0xc19c;
        goto LAB_00c2ffa8;
      }
      *(uint *)(param_1 + 0x1bf3c) = *(uint *)(param_1 + 0x1bf3c) & 0xfffffffb;
      *(uint *)(param_1 + 0x1c19c) = *(uint *)(param_1 + 0x1c19c) | 4;
      uVar10 = 0xbb7c;
    }
    else {
      plVar1 = (long *)(param_1 + 0x1baf8);
      FUN_00f0e628(plVar1);
      if (bVar7) {
        if ((*(byte *)(param_1 + 0x1c878) & 1) == 0) {
          lVar8 = param_1 + 0x1c879;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x1c888);
        }
        if ((*(byte *)(param_1 + 0x1c890) & 1) == 0) {
          lVar9 = param_1 + 0x1c891;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x1c8a0);
        }
        FUN_00f0e548(plVar1,lVar8,lVar9);
      }
      else {
        FUN_008fcdb8(&local_70,param_1 + 0x2cc8);
        pvVar3 = (void *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pvVar3 = local_60;
        }
        FUN_00f0e548(plVar1,pvVar3,"full_splash_1k");
        if (((byte)local_70 & 1) != 0) {
          operator_delete(local_60);
        }
      }
      FUN_00f0025c(auStack_74,&local_78);
      local_6c = *(float *)(param_1 + 0x2cf8);
      if ((*(float *)(param_1 + 0x1bb38) != 0.0) ||
         (*(float *)(param_1 + 0x1bb3c) != local_78 * local_6c)) {
        *(float *)(param_1 + 0x1bb38) = 0.0;
        *(float *)(param_1 + 0x1bb3c) = local_78 * local_6c;
        FUN_0091ada4(plVar1);
      }
      local_70 = 0;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
      uVar10 = *puVar13;
      if (uVar10 != 0) {
        uVar11 = 0;
        puVar13 = (uint *)(param_1 + 0x164);
        do {
          uVar11 = uVar11 + 1;
          *puVar13 = *puVar13 & 0xfffffffb;
          puVar13 = puVar13 + 0xb08;
        } while (uVar11 < uVar10);
      }
      *(uint *)(param_1 + 0x1c19c) = *(uint *)(param_1 + 0x1c19c) & 0xfffffffb;
      *(uint *)(param_1 + 0x1bc6c) = *(uint *)(param_1 + 0x1bc6c) & 0xfffffffb;
      *(uint *)(param_1 + 0x1bd5c) = *(uint *)(param_1 + 0x1bd5c) & 0xfffffffb;
      uVar10 = 0xbe4c;
    }
    uVar11 = (ulong)(uVar10 | 0x10000);
    uVar10 = *(uint *)(param_1 + uVar11) | 4;
  }
  else {
    FUN_00f0e628(param_1 + 0x1baf8);
    FUN_00f0e548(param_1 + 0x1baf8,PTR_s_build___ChooseYourHero_png_02be3568,"full_splash_512");
    uVar10 = *puVar13;
    if (uVar10 != 0) {
      uVar11 = 0;
      puVar13 = (uint *)(param_1 + 0x164);
      do {
        uVar11 = uVar11 + 1;
        *puVar13 = *puVar13 & 0xfffffffb;
        puVar13 = puVar13 + 0xb08;
      } while (uVar11 < uVar10);
    }
    *(uint *)(param_1 + 0x1c19c) = *(uint *)(param_1 + 0x1c19c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1c06c) = *(uint *)(param_1 + 0x1c06c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1bc6c) = *(uint *)(param_1 + 0x1bc6c) & 0xfffffffb;
    uVar10 = 0xbd5c;
LAB_00c2ffa8:
    uVar11 = (ulong)(uVar10 | 0x10000);
    uVar10 = *(uint *)(param_1 + uVar11) & 0xfffffffb;
  }
  *(uint *)(param_1 + uVar11) = uVar10;
  lVar8 = DAT_03210d00;
  uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar12 == 0xffff) {
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar14 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
    if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = *puVar14;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efc8e8(puVar14);
    *(undefined ***)puVar14 = &PTR_FUN_02825100;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
    lVar8 = DAT_03210d00;
    uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar12 != 0xffff) {
      puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
      if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar12 = 0xffff;
      }
      else {
        uVar12 = *puVar15;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
      *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
      FUN_00efcad4(puVar15);
      *(undefined ***)puVar15 = &PTR_FUN_02825220;
      *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
      goto LAB_00c30344;
    }
  }
  puVar15 = (ushort *)0x0;
LAB_00c30344:
  FUN_00efcac4(0x3e99999a,puVar15);
  FUN_00f02308(param_1,puVar14,puVar15,0);
  FUN_00f0d75c(param_1 + 0x1bfe8,param_1 + 0x1c8c8);
  FUN_00c2f838(param_1);
  if (1 < *(uint *)(param_1 + 0x1c8e8)) {
    FUN_00c304a4(param_1);
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_loading_screen.mp3",0,0);
    piVar2 = (int *)(param_1 + 0x1c8a8);
    iVar4 = *piVar2;
    uVar10 = iVar4 - 1;
    if (-1 < (int)uVar10) {
      FUN_00c306f0(param_1,(ulong)uVar10,
                   *(undefined4 *)(*(long *)(param_1 + 0x1c8b0) + (ulong)uVar10 * 4),iVar4,0);
      for (uVar10 = iVar4 - 2; -1 < (int)uVar10; uVar10 = uVar10 - 1) {
        FUN_00c306f0(param_1,uVar10,
                     *(undefined4 *)(*(long *)(param_1 + 0x1c8b0) + (ulong)uVar10 * 4),*piVar2,0);
      }
    }
    if (*(uint *)(param_1 + 0x1c8b8) != 0) {
      uVar11 = 0;
      do {
        FUN_00c306f0(param_1,uVar11 & 0xffffffff,
                     *(undefined4 *)(*(long *)(param_1 + 0x1c8c0) + uVar11 * 4),*piVar2,1);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x1c8b8));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

