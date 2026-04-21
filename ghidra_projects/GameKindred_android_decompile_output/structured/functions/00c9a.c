// functions/00c9a — 1 functions
#include "libGameKindred.h"




void FUN_00c9a0d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  void *pvVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  byte local_108 [8];
  ulong local_100;
  void *local_f8;
  undefined4 local_ec;
  float local_e8;
  undefined4 uStack_e4;
  code *local_e0;
  long *local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar15 = tpidr_el0;
  local_b0 = *(long *)(lVar15 + 0x28);
  FUN_00f00298(&uStack_e4,&local_e8);
  plVar1 = param_1 + 0xcca;
  fVar26 = local_e8 * 0.4835;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x8a5;
  uVar16 = FUN_00f02540(plVar2);
  if ((uVar16 & 1) == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
    FUN_00f023ec(plVar2,param_1 + 0x9e2,1);
    FUN_00f023ec(plVar2,param_1 + 0xa00,1);
    FUN_00f023ec(plVar2,param_1 + 0x8dc,1);
    FUN_00f023ec(plVar2,param_1 + 0x8b6,1);
    FUN_00f023ec(plVar2,param_1 + 0x902,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xad8,1);
  plVar3 = param_1 + 0xa5a;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  if (*(char *)((long)param_1 + 0x6766) != '\0') {
    plVar4 = param_1 + 0x928;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    plVar5 = param_1 + 0x939;
    FUN_00f023ec(plVar4,plVar5,1);
    FUN_00f023ec(plVar5,param_1 + 0x76,1);
    FUN_00f023ec(plVar5,param_1 + 0x970,1);
    FUN_00f023ec(plVar4,param_1 + 0x94a,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xcac,1);
    plVar4 = param_1 + 0xb2;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_00f023ec(plVar4,param_1 + 0xa1e,1);
    FUN_00f023ec(plVar4,param_1 + 0x996,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xa78,1);
    plVar4 = param_1 + 0x86e;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_00f023ec(plVar4,param_1 + 0x87f,1);
    plVar5 = param_1 + 0x490;
    FUN_00f023ec(plVar4,plVar5,1);
    FUN_00f023ec(plVar5,param_1 + 0xa3c,1);
    FUN_00f023ec(plVar5,param_1 + 0x9bc,1);
    FUN_00f023ec(plVar4,param_1 + 0xa96,1);
  }
  fVar21 = 0.5;
  fVar22 = fVar26 * 0.756 * 0.5;
  fVar30 = fVar22 + 274.0;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f13f08(0x44160000,0x442f0000,plVar1);
  if ((*(float *)(param_1 + 0xcd2) != fVar30) ||
     (*(float *)((long)param_1 + 0x6694) != fVar26 * -0.025)) {
    *(float *)(param_1 + 0xcd2) = fVar30;
    *(float *)((long)param_1 + 0x6694) = fVar26 * -0.025;
    FUN_0091ada4(plVar1);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0xcca] + 0x28))(plVar1,&local_e0);
  puVar6 = (uint *)((long)param_1 + 0x4f94);
  *(uint *)((long)param_1 + 0x66d4) = *(uint *)((long)param_1 + 0x66d4) & 0xfffffffb;
  puVar7 = (uint *)((long)param_1 + 0x5084);
  *puVar6 = *puVar6 | 4;
  puVar8 = (uint *)(param_1 + 0xcec);
  *puVar7 = *puVar7 | 4;
  local_ec = 0xffffffff;
  plVar1 = param_1 + 0x9e2;
  fVar24 = 280.0;
  fVar29 = -0.355;
  fVar23 = 0.4375;
  fVar27 = 0.0;
  switch(*puVar8) {
  case 0:
    fVar28 = 0.275;
    break;
  case 1:
    local_ec = DAT_0313c940;
    goto LAB_00c9a598;
  case 2:
    fVar24 = 260.0;
    local_ec = DAT_0313c948;
LAB_00c9a598:
    fVar28 = 0.26;
    fVar23 = 0.385;
    break;
  case 3:
    fVar24 = 255.0;
    fVar23 = 0.385;
    fVar29 = -0.33;
    fVar27 = 0.02;
    fVar28 = 0.26;
    local_ec = DAT_0313c950;
    uVar20 = 0xff;
    goto LAB_00c9a5bc;
  case 4:
    fVar24 = 260.0;
    fVar27 = 0.03;
    fVar28 = 0.275;
    break;
  case 5:
    fVar29 = -0.348;
    fVar28 = 0.275;
    break;
  default:
    fVar28 = 0.35;
    fVar23 = 0.4375;
    fVar27 = 0.0;
  }
  uVar20 = 0xb2;
LAB_00c9a5bc:
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar11 = *puVar6;
  if ((uVar11 >> 7 & 0xff) != uVar20) {
    *puVar6 = uVar11 & 0xffff8000 | uVar11 & 0x7f | uVar20 << 7;
    FUN_0091ada4(plVar1);
  }
  plVar4 = param_1 + 0xa00;
  FUN_00f13f08(0x4450c000,0x43140000,plVar1);
  fVar27 = fVar26 * 0.756 * fVar27;
  fVar29 = fVar26 * fVar29;
  if ((*(float *)(param_1 + 0x9ea) != fVar27) || (*(float *)((long)param_1 + 0x4f54) != fVar29)) {
    *(float *)(param_1 + 0x9ea) = fVar27;
    *(float *)((long)param_1 + 0x4f54) = fVar29;
    FUN_0091ada4(plVar1);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_e0);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  if ((*puVar7 & 0x7f80) != 0x3f80) {
    *puVar7 = *puVar7 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f13f08(0x44aa0000,0x440c8000,plVar4);
  fVar28 = fVar26 * fVar28;
  if ((*(float *)(param_1 + 0xa08) != 0.0) || (*(float *)((long)param_1 + 0x5044) != fVar28)) {
    *(float *)(param_1 + 0xa08) = 0.0;
    *(float *)((long)param_1 + 0x5044) = fVar28;
    FUN_0091ada4(plVar4);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_e0);
  if (*puVar8 < 4) {
    plVar1 = param_1 + 0x902;
    FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
    if ((*(float *)(param_1 + 0x90b) != 0.5) || (*(float *)((long)param_1 + 0x485c) != 0.5)) {
      param_1[0x90b] = 0x3f0000003f000000;
      FUN_0091ada4(plVar1);
    }
    if (*(char *)((long)param_1 + 0x6766) == '\0') {
      pcVar17 = *(char **)(param_1[0xce8] + 0x30);
    }
    else {
      pcVar17 = "MENU_MARKET_DRAWN_CARD_BLUEPRINT";
    }
    uVar18 = FUN_00e6ce7c(pcVar17,0);
    FUN_00f0d75c(plVar1,uVar18);
    FUN_00f0dac8(plVar1,3);
    if ((*(float *)(param_1 + 0x90a) != 0.0) || (*(float *)((long)param_1 + 0x4854) != fVar28)) {
      *(float *)(param_1 + 0x90a) = 0.0;
      *(float *)((long)param_1 + 0x4854) = fVar28;
      FUN_0091ada4(plVar1);
    }
    if ((*(float *)(param_1 + 0x90c) != 0.5) || (*(float *)((long)param_1 + 0x4864) != 0.5)) {
      param_1[0x90c] = 0x3f0000003f000000;
      FUN_0091ada4(plVar1);
    }
    FUN_00f0dad0((1.0 / *(float *)(param_1 + 0x90b)) * 330.0,plVar1,1);
    FUN_00f0da80(plVar1,&DAT_01bee7f6);
    FUN_00f0da30(plVar1,1);
    puVar6 = (uint *)((long)param_1 + 0x4634);
    if ((int)*puVar8 < 1) {
      *puVar6 = *puVar6 & 0xfffffffb;
    }
    else {
      *puVar6 = *puVar6 | 4;
      plVar1 = param_1 + 0x8b6;
      FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
      if ((*(float *)(param_1 + 0x8bf) != 0.5) || (*(float *)((long)param_1 + 0x45fc) != 0.5)) {
        param_1[0x8bf] = 0x3f0000003f000000;
        FUN_0091ada4(plVar1);
        fVar21 = *(float *)(param_1 + 0x8bf);
      }
      FUN_00f0dad0((1.0 / fVar21) * 330.0,plVar1,1);
      uVar20 = *puVar6;
      if ((uVar20 & 0x7f80) != 0x6600) {
        *puVar6 = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x6600;
        FUN_0091ada4(plVar1);
      }
      FUN_00f0dac8(plVar1,3);
      if ((*(float *)(param_1 + 0x8be) != 0.0) ||
         (*(float *)((long)param_1 + 0x45f4) != fVar26 * fVar23)) {
        *(float *)(param_1 + 0x8be) = 0.0;
        *(float *)((long)param_1 + 0x45f4) = fVar26 * fVar23;
        FUN_0091ada4(plVar1);
      }
      if ((*(float *)(param_1 + 0x8c0) != 0.5) || (*(float *)((long)param_1 + 0x4604) != 1.0)) {
        param_1[0x8c0] = 0x3f8000003f000000;
        FUN_0091ada4(plVar1);
      }
      FUN_00f0da80(plVar1,&DAT_01bee7f6);
      FUN_00f0da30(plVar1,1);
      FUN_00f0d75c(plVar1,&DAT_03210450);
    }
  }
  else if ((*puVar8 & 0xfffffffe) == 4) {
    plVar1 = param_1 + 0xaba;
    *(uint *)((long)param_1 + 0x4634) = *(uint *)((long)param_1 + 0x4634) & 0xfffffffb;
    FUN_00f023ec(plVar2,plVar1,1);
    if (*(long *)(param_1[0xce8] + 0x38) != 0) {
      FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530);
      if ((*(float *)(param_1 + 0xac3) != 0.75) || (*(float *)((long)param_1 + 0x561c) != 0.75)) {
        lVar19 = NEON_fmov(0x3f400000,4);
        param_1[0xac3] = lVar19;
        FUN_0091ada4(plVar1);
      }
      if (*(float *)((long)param_1 + 0x5614) != fVar28 + 6.0) {
        *(float *)((long)param_1 + 0x5614) = fVar28 + 6.0;
        FUN_0091ada4(plVar1);
      }
      if ((*(float *)(param_1 + 0xac4) != 1.0) || (*(float *)((long)param_1 + 0x5624) != 0.5)) {
        param_1[0xac4] = 0x3f0000003f800000;
        FUN_0091ada4(plVar1);
      }
    }
    *(uint *)((long)param_1 + 0x5654) =
         *(uint *)((long)param_1 + 0x5654) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x5654) & 3 | (uint)(*(long *)(param_1[0xce8] + 0x38) != 0) << 2;
    plVar1 = param_1 + 0x902;
    FUN_00f0d92c(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0,&DAT_01bee7fa);
    if ((*(float *)(param_1 + 0x90b) != 0.5) || (*(float *)((long)param_1 + 0x485c) != 0.5)) {
      param_1[0x90b] = 0x3f0000003f000000;
      FUN_0091ada4(plVar1);
    }
    FUN_00f0da80(plVar1,&DAT_01bee7f6);
    FUN_00f0da30(plVar1,1);
    if (*(float *)((long)param_1 + 0x4854) != fVar28) {
      *(float *)((long)param_1 + 0x4854) = fVar28;
      FUN_0091ada4(plVar1);
    }
    if ((*(float *)(param_1 + 0x90c) != 0.0) || (*(float *)((long)param_1 + 0x4864) != 0.5)) {
      param_1[0x90c] = 0x3f00000000000000;
      FUN_0091ada4(plVar1);
    }
  }
  plVar1 = param_1 + 0x8dc;
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&local_ec);
  if ((*(float *)(param_1 + 0x8e5) != 0.5) || (*(float *)((long)param_1 + 0x472c) != 0.5)) {
    param_1[0x8e5] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0dac8(plVar1,3);
  if ((*(float *)(param_1 + 0x8e4) != fVar27) || (*(float *)((long)param_1 + 0x4724) != fVar29)) {
    *(float *)(param_1 + 0x8e4) = fVar27;
    *(float *)((long)param_1 + 0x4724) = fVar29;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x8e6) != 0.5) || (*(float *)((long)param_1 + 0x4734) != 0.5)) {
    param_1[0x8e6] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0dad0(fVar24 * (1.0 / *(float *)(param_1 + 0x8e5)),plVar1,1);
  FUN_00f0da30(plVar1,1);
  FUN_00f0da80(plVar1,&DAT_01bee7f6);
  FUN_00f0da30(plVar1,1);
  FUN_008fa54c(local_108,*(undefined8 *)(param_1[0xce8] + 0x28));
  uVar16 = (ulong)(local_108[0] >> 1);
  if ((local_108[0] & 1) != 0) {
    uVar16 = local_100;
  }
  if (uVar16 == 0) {
    lVar19 = FUN_00cc7618(*(undefined8 *)(param_1[0xce8] + 0x18));
    FUN_008fa54c(&local_e0,*(undefined8 *)(lVar19 + 0x18));
    FUN_008fce60(local_108,&local_e0);
    if (((ulong)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
  }
  pvVar10 = (void *)((ulong)local_108 | 1);
  if ((local_108[0] & 1) != 0) {
    pvVar10 = local_f8;
  }
  uVar18 = FUN_00e6ce7c(pvVar10,0);
  FUN_00f0d75c(plVar1,uVar18);
  *(uint *)((long)param_1 + 0x5744) = *(uint *)((long)param_1 + 0x5744) & 0xfffffffb;
  pfVar9 = (float *)(param_1 + 0xae0);
  if ((*pfVar9 != 0.0) || (*(float *)((long)param_1 + 0x5704) != 0.0)) {
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
    FUN_0091ada4(param_1 + 0xad8);
  }
  FUN_00f0e6e8(plVar3,0);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  puVar6 = (uint *)((long)param_1 + 0x5354);
  if ((*puVar6 & 0x7f80) != 0) {
    *puVar6 = *puVar6 & 0xffff807f;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e670(plVar3,&DAT_01bee802,2);
  *puVar6 = *puVar6 | 0x10;
  FUN_00f13f08(0x43fa0000,0x44200000,plVar3);
  if ((*(float *)(param_1 + 0xa64) != 0.5) || (*(float *)((long)param_1 + 0x5324) != 0.5)) {
    param_1[0xa64] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  plVar1 = param_1 + 0x94a;
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  uVar18 = FUN_00e6ce7c("MENU_3DCARD_PLAYER_ESSENCE_LABEL",0);
  FUN_00f0d75c(plVar1,uVar18);
  if ((*(float *)(param_1 + 0x954) != 0.5) || (*(float *)((long)param_1 + 0x4aa4) != 0.5)) {
    param_1[0x954] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  uVar18 = FUN_00d6eb50();
  uVar18 = FUN_00d6eb5c(uVar18,"*PlayerEssenceEffects*");
  plVar2 = param_1 + 0x76;
  FUN_00afc274(plVar2,uVar18);
  FUN_00f13f08(0x43c80000,0x43c80000,plVar2);
  if ((*(float *)(param_1 + 0x7e) != 0.0) || (*(float *)((long)param_1 + 0x3f4) != 0.0)) {
    param_1[0x7e] = 0;
    FUN_0091ada4(plVar2);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0x76] + 0x28))(plVar2,&local_e0);
  if ((*(float *)(param_1 + 0x7f) != 1.5) || (*(float *)((long)param_1 + 0x3fc) != 1.5)) {
    lVar19 = NEON_fmov(0x3fc00000,4);
    param_1[0x7f] = lVar19;
    FUN_0091ada4(plVar2);
  }
  FUN_00afd0d4(plVar2);
  FUN_00afd018(plVar2,"ESSENCE_ICON");
  plVar2 = param_1 + 0x970;
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  uVar20 = *(uint *)((long)param_1 + 0x4c04);
  if ((uVar20 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x4c04) = uVar20 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00e705c8(&local_e0,"0");
  FUN_00f0d75c(plVar2,&local_e0);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (void *)0x0;
  }
  pfVar9 = (float *)(param_1 + 0x978);
  if ((*pfVar9 != 70.0) || (*(float *)((long)param_1 + 0x4bc4) != 0.0)) {
    pfVar9[0] = 70.0;
    pfVar9[1] = 0.0;
    FUN_0091ada4(plVar2);
  }
  local_e0 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x970] + 0x28))(plVar2,&local_e0);
  fVar21 = (float)FUN_00f0d4e0(plVar1);
  fVar23 = *(float *)((long)param_1 + 0x4a94);
  fVar27 = 30.0 - fVar21 * 0.5;
  fVar21 = fVar23 * 0.5;
  FUN_00f0d4e0(plVar2);
  fVar21 = fVar21 + fVar23 * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x941) != fVar27) || (*(float *)((long)param_1 + 0x4a0c) != fVar21)) {
    *(float *)(param_1 + 0x941) = fVar27;
    *(float *)((long)param_1 + 0x4a0c) = fVar21;
    FUN_0091ada4(param_1 + 0x939);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0x939] + 0x28))(param_1 + 0x939,&local_e0);
  pfVar9 = (float *)(param_1 + 0x931);
  plVar1 = param_1 + 0x928;
  if ((*pfVar9 != 0.5) || (*(float *)((long)param_1 + 0x498c) != 0.5)) {
    pfVar9[0] = 0.5;
    pfVar9[1] = 0.5;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x930) != fVar30) ||
     (*(float *)((long)param_1 + 0x4984) != fVar26 * -0.35)) {
    *(float *)(param_1 + 0x930) = fVar30;
    *(float *)((long)param_1 + 0x4984) = fVar26 * -0.35;
    FUN_0091ada4(plVar1);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_e0);
  uVar25 = 0;
  if (*puVar8 < 4) {
    uVar25 = *(undefined4 *)(&DAT_01bc00ac + (long)(int)*puVar8 * 4);
  }
  plVar1 = param_1 + 0xcac;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f13f08(uStack_e4,local_e8,plVar1);
  if ((*(float *)(param_1 + 0xcb6) != 0.5) || (*(float *)((long)param_1 + 0x65b4) != 0.5)) {
    param_1[0xcb6] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  puVar6 = (uint *)((long)param_1 + 0x65e4);
  uVar20 = *puVar6;
  if ((uVar20 & 0x7f80) != 0) {
    *puVar6 = uVar20 & 0xffff807f;
    FUN_0091ada4(plVar1);
    uVar20 = *puVar6;
  }
  uVar12 = DAT_03210f60;
  *puVar6 = uVar20 | 0x10;
  local_e0 = FUN_00c9bc38;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar12;
  FUN_009693a0(param_1 + 0xcad,&local_e0);
  local_e0 = FUN_00c9bc38;
  uVar13 = DAT_03210f8c;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar13;
  FUN_009693a0(param_1 + 0xcad,&local_e0);
  *puVar6 = *puVar6 & 0xfffffffb;
  plVar1 = param_1 + 0xb2;
  uVar18 = FUN_00e6ce7c("MENU_3DCARD_DESTROY_BUTTON",0);
  FUN_00ab703c(0x42200000,0x43d70000,0x43d70000,plVar1,0,uVar18,&DAT_01bee7fa,&DAT_03218ef8,0);
  plVar2 = param_1 + 0xb3;
  local_b8 = DAT_03210c88;
  local_e0 = thunk_FUN_00c9dcdc;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  FUN_009693a0(plVar2,&local_e0);
  local_b8 = DAT_03210c8c;
  local_e0 = thunk_FUN_00c9e00c;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  FUN_009693a0(plVar2,&local_e0);
  local_c8 = 0;
  uStack_c0 = 0;
  uVar14 = DAT_03210c90;
  local_e0 = thunk_FUN_00c9df30;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar14;
  FUN_009693a0(plVar2,&local_e0);
  FUN_00f0d378(param_1 + 0x196,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00b09144(0,plVar1);
  if ((*(float *)(param_1 + 0xbc) != 0.5) || (*(float *)((long)param_1 + 0x5e4) != 0.5)) {
    param_1[0xbc] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0xbb) != 0.5) || (*(float *)((long)param_1 + 0x5dc) != 0.5)) {
    param_1[0xbb] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00ab7628(0x430a0000,plVar1);
  FUN_00ab74fc(0,0x41f00000,plVar1);
  FUN_00ab7588(0x3f800000,plVar1,&DAT_01bee7f6);
  FUN_00ab95f4(uVar25,plVar1);
  if ((*(float *)(param_1 + 0xba) != fVar30) ||
     (*(float *)((long)param_1 + 0x5d4) != fVar26 * -0.15)) {
    *(float *)(param_1 + 0xba) = fVar30;
    *(float *)((long)param_1 + 0x5d4) = fVar26 * -0.15;
    FUN_0091ada4(plVar1);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0xb2] + 0x28))(plVar1,&local_e0);
  plVar1 = param_1 + 0xa78;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f01c20(param_1 + 0x100);
  FUN_00f13f08(0x43e1bfff,plVar1);
  if ((*(float *)(param_1 + 0xa80) != *(float *)(param_1 + 0xba)) ||
     (*(float *)((long)param_1 + 0x5404) != *(float *)((long)param_1 + 0x5d4))) {
    *(float *)(param_1 + 0xa80) = *(float *)(param_1 + 0xba);
    *(float *)((long)param_1 + 0x5404) = *(float *)((long)param_1 + 0x5d4);
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0xa82) != 0.5) || (*(float *)((long)param_1 + 0x5414) != 0.5)) {
    param_1[0xa82] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  uVar20 = *(uint *)((long)param_1 + 0x5444);
  if ((uVar20 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5444) = uVar20 & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0xa81) != *(float *)(param_1 + 0xbb)) ||
     (*(float *)((long)param_1 + 0x540c) != *(float *)((long)param_1 + 0x5dc))) {
    *(float *)(param_1 + 0xa81) = *(float *)(param_1 + 0xbb);
    *(float *)((long)param_1 + 0x540c) = *(float *)((long)param_1 + 0x5dc);
    FUN_0091ada4(plVar1);
  }
  local_e0 = FUN_00c9bc58;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar12;
  FUN_009693a0(param_1 + 0xa79,&local_e0);
  local_e0 = FUN_00c9bc58;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar13;
  FUN_009693a0(param_1 + 0xa79,&local_e0);
  plVar1 = param_1 + 0xa1e;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"essence_icon_small");
  if ((*(float *)(param_1 + 0xa26) != -6.0) || (*(float *)((long)param_1 + 0x5134) != 10.0)) {
    param_1[0xa26] = 0x41200000c0c00000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0xa28) != 1.0) || (*(float *)((long)param_1 + 0x5144) != 1.0)) {
    lVar19 = NEON_fmov(0x3f800000,4);
    param_1[0xa28] = lVar19;
    FUN_0091ada4(plVar1);
  }
  plVar1 = param_1 + 0x996;
  local_e0 = (code *)CONCAT44(local_e0._4_4_,0xff9bdb2d);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&local_e0);
  FUN_00e705c8(&local_e0,&DAT_01bbfc1d);
  FUN_00f0d75c(plVar1,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  if ((*(float *)(param_1 + 0x99e) != 6.0) || (*(float *)((long)param_1 + 0x4cf4) != 8.0)) {
    param_1[0x99e] = 0x4100000040c00000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x9a0) != 0.0) || (*(float *)((long)param_1 + 0x4d04) != 1.0)) {
    param_1[0x9a0] = 0x3f80000000000000;
    FUN_0091ada4(plVar1);
  }
  *(uint *)((long)param_1 + 0x43f4) = *(uint *)((long)param_1 + 0x43f4) & 0xfffffffb;
  plVar1 = param_1 + 0x87f;
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  FUN_00f0dac8(plVar1,0);
  fVar22 = fVar22 + 137.0;
  if ((*(float *)(param_1 + 0x887) != fVar22) || (*(float *)((long)param_1 + 0x443c) != 0.0)) {
    *(float *)(param_1 + 0x887) = fVar22;
    *(float *)((long)param_1 + 0x443c) = 0.0;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0dad0(0x43d70000,plVar1,1);
  plVar1 = param_1 + 0x490;
  uVar18 = FUN_00e6ce7c("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_00ab703c(0x42200000,0x43d70000,0x43d70000,plVar1,0,uVar18,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_e0 = FUN_00c9bc6c;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar14;
  FUN_009693a0(param_1 + 0x491,&local_e0);
  FUN_00f0d378(param_1 + 0x574,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00b09144(0,plVar1);
  if ((*(float *)(param_1 + 0x49a) != 0.5) || (*(float *)((long)param_1 + 0x24d4) != 0.5)) {
    param_1[0x49a] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x499) != 0.5) || (*(float *)((long)param_1 + 0x24cc) != 0.5)) {
    param_1[0x499] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00ab7628(0x430a0000,plVar1);
  FUN_00ab74fc(0,0x41f00000,plVar1);
  FUN_00ab7588(0x3f800000,plVar1,&DAT_01bee7f6);
  FUN_00ab95f4(uVar25,plVar1);
  FUN_00b09454(plVar1,0);
  if ((*(float *)(param_1 + 0x498) != fVar30) ||
     (*(float *)((long)param_1 + 0x24c4) != fVar26 * 0.35)) {
    *(float *)(param_1 + 0x498) = fVar30;
    *(float *)((long)param_1 + 0x24c4) = fVar26 * 0.35;
    FUN_0091ada4(plVar1);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0x490] + 0x28))(plVar1,&local_e0);
  plVar1 = param_1 + 0xa96;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f01c20(param_1 + 0x100);
  FUN_00f13f08(0x43e1bfff,plVar1);
  if ((*(float *)(param_1 + 0xa9e) != *(float *)(param_1 + 0x498)) ||
     (*(float *)((long)param_1 + 0x54f4) != *(float *)((long)param_1 + 0x24c4))) {
    *(float *)(param_1 + 0xa9e) = *(float *)(param_1 + 0x498);
    *(float *)((long)param_1 + 0x54f4) = *(float *)((long)param_1 + 0x24c4);
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0xaa0) != 0.5) || (*(float *)((long)param_1 + 0x5504) != 0.5)) {
    param_1[0xaa0] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  uVar20 = *(uint *)((long)param_1 + 0x5534);
  if ((uVar20 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5534) = uVar20 & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0xa9f) != *(float *)(param_1 + 0xbb)) ||
     (*(float *)((long)param_1 + 0x54fc) != *(float *)((long)param_1 + 0x5dc))) {
    *(float *)(param_1 + 0xa9f) = *(float *)(param_1 + 0xbb);
    *(float *)((long)param_1 + 0x54fc) = *(float *)((long)param_1 + 0x5dc);
    FUN_0091ada4(plVar1);
  }
  local_e0 = FUN_00c9bc58;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar12;
  FUN_009693a0(param_1 + 0xa97,&local_e0);
  local_e0 = FUN_00c9bc58;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = (void *)0x0;
  local_d8 = param_1;
  local_b8 = uVar13;
  FUN_009693a0(param_1 + 0xa97,&local_e0);
  plVar1 = param_1 + 0xa3c;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"essence_icon_small");
  if ((*(float *)(param_1 + 0xa44) != -6.0) || (*(float *)((long)param_1 + 0x5224) != 10.0)) {
    param_1[0xa44] = 0x41200000c0c00000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0xa46) != 1.0) || (*(float *)((long)param_1 + 0x5234) != 1.0)) {
    lVar19 = NEON_fmov(0x3f800000,4);
    param_1[0xa46] = lVar19;
    FUN_0091ada4(plVar1);
  }
  plVar1 = param_1 + 0x9bc;
  local_e0 = (code *)CONCAT44(local_e0._4_4_,0xff9bdb2d);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&local_e0);
  FUN_00e705c8(&local_e0,&DAT_01bbfc20);
  FUN_00f0d75c(plVar1,&local_e0);
  if (local_d8 != (long *)0x0) {
    operator_delete__(local_d8);
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
  }
  if ((*(float *)(param_1 + 0x9c4) != 6.0) || (*(float *)((long)param_1 + 0x4e24) != 8.0)) {
    param_1[0x9c4] = 0x4100000040c00000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x9c6) != 0.0) || (*(float *)((long)param_1 + 0x4e34) != 1.0)) {
    param_1[0x9c6] = 0x3f80000000000000;
    FUN_0091ada4(plVar1);
  }
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (*(long *)(lVar15 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

