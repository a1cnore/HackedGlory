// functions/00b30 — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00b3068c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x23c) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x32c) >> 2 & 1) == 0) {
      return;
    }
    lVar1 = param_1 + 0x2a8;
  }
  else {
    lVar1 = param_1 + 0x1b8;
  }
  FUN_00f01980(lVar1);
  FUN_00b30400(param_1,lVar1);
  return;
}




void FUN_00b30154(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b3015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b30160(long *param_1)

{
  long lVar1;
  float local_38;
  float fStack_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_34,&local_38);
  FUN_00f13f08(fStack_34,local_38,param_1 + 0x19);
  if ((*(float *)(param_1 + 8) != fStack_34 * 0.5) ||
     (*(float *)((long)param_1 + 0x44) != local_38 * 0.5)) {
    *(float *)(param_1 + 8) = fStack_34 * 0.5;
    *(float *)((long)param_1 + 0x44) = local_38 * 0.5;
    FUN_0091ada4(param_1);
  }
  local_30 = 0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3020c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00b3021c(param_1,param_1 + 0x1b8);
    return;
  }
  return;
}




void FUN_00b3021c(undefined8 param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 4;
  lVar1 = DAT_03210d00;
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
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x40400000,puVar3);
  FUN_00f022a0(param_2,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c27b8;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar3 + 8) = FUN_00b303c0;
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  FUN_00f022a0(param_2,puVar3);
  return;
}




void FUN_00b303c0(long param_1,undefined8 param_2)

{
  FUN_00f01980(param_2);
  if (param_1 != 0) {
    FUN_00b30400(param_1,param_2);
    return;
  }
  return;
}




void FUN_00b30400(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
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
  FUN_00efddc4(0,puVar3);
  FUN_00efcac4(0x3e4ccccd,puVar3);
  FUN_00f022a0(param_2,puVar3);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_027c27b8;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar3 + 8) = FUN_00b30598;
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  FUN_00f022a0(param_2,puVar3);
  return;
}




void FUN_00b30598(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f01980(param_2);
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x23c) >> 2 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x32c) >> 2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x84) >> 2 & 1) != 0) {
          uVar2 = FUN_00f048a4("UI::EVENT_CLOSED_CHINA_LOADING_SCREEN");
          FUN_00f048e0(auStack_68,uVar2,0);
          FUN_00f04760(param_1,auStack_68,1);
          FUN_00f0e628(param_1 + 200);
          FUN_00f0e628(param_1 + 0x1b8);
          FUN_00f0e628(param_1 + 0x2a8);
        }
      }
      else {
        FUN_00b30400(param_1,param_1);
      }
    }
    else {
      FUN_00b3021c(param_1,param_1 + 0x2a8);
    }
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3068c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x23c) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x32c) >> 2 & 1) == 0) {
      return;
    }
    lVar1 = param_1 + 0x2a8;
  }
  else {
    lVar1 = param_1 + 0x1b8;
  }
  FUN_00f01980(lVar1);
  FUN_00b30400(param_1,lVar1);
  return;
}




void FUN_00b306e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0240;
  param_1[0x55] = &PTR_FUN_028266f0;
  param_1[0x6c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6f);
  FUN_00f13d08(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b3077c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0240;
  param_1[0x55] = &PTR_FUN_028266f0;
  param_1[0x6c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6f);
  FUN_00f13d08(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b30820(long *param_1)

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
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  float *pfVar19;
  undefined **ppuVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  code *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar23 = tpidr_el0;
  local_90 = *(long *)(lVar23 + 0x28);
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_027c1f80;
  FUN_00e83560(param_1 + 0x11);
  FUN_00948cd8(param_1 + 0x14);
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027e03a8;
  param_1[0x11] = (long)&PTR_FUN_027e04a8;
  param_1[0x14] = (long)&PTR_FUN_027e04d8;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x2cf;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x2e0;
  param_1[0x2cf] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x2fe;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x31c;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x33a;
  FUN_00f0d160();
  plVar7 = param_1 + 0x360;
  FUN_00abaee8(plVar7,0);
  plVar8 = param_1 + 0x41f;
  FUN_00f017e8(plVar8);
  plVar9 = param_1 + 0x430;
  param_1[0x41f] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar10 = param_1 + 0x456;
  FUN_00f0d160(plVar10);
  plVar11 = param_1 + 0x47c;
  FUN_00abbf0c(plVar11);
  plVar12 = param_1 + 0x81b;
  FUN_00abbf0c();
  plVar13 = param_1 + 0xbba;
  FUN_00ab6c24(plVar13,0);
  plVar14 = param_1 + 0xe72;
  FUN_00f13ca4(plVar14);
  plVar15 = param_1 + 0xe89;
  FUN_00f0d160();
  plVar16 = param_1 + 0xeaf;
  FUN_00f0e4a8();
  plVar17 = param_1 + 0xecd;
  FUN_00f13ca4(plVar17);
  FUN_00f0e4a8();
  FUN_00f0d160();
  plVar18 = param_1 + 0xf28;
  FUN_00f13ca4(plVar18);
  FUN_00f0e4a8();
  FUN_00f0d160();
  thunk_FUN_00e7051c(param_1 + 0xf83,&DAT_03210450);
  thunk_FUN_00e7051c(param_1 + 0xf85,&DAT_03210450);
  FUN_008fcdb8(param_1 + 0xf87,&DAT_0320ffa8);
  param_1[0xf8a] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar6,1);
  FUN_00f023ec(plVar2,plVar8,1);
  FUN_00f023ec(plVar8,plVar9,1);
  FUN_00f023ec(plVar8,plVar10,1);
  FUN_00f023ec(plVar8,plVar11,1);
  FUN_00f023ec(plVar8,plVar7,1);
  FUN_00f023ec(plVar8,plVar12,1);
  FUN_00f023ec(plVar8,plVar1,1);
  FUN_00f023ec(plVar8,plVar13,1);
  FUN_00f023ec(plVar13,plVar14,1);
  FUN_00f023ec(plVar14,plVar15,1);
  FUN_00f023ec(plVar14,plVar16,1);
  FUN_00f023ec(plVar8,plVar17,1);
  FUN_00f023ec(plVar17,param_1 + 0xee4,1);
  FUN_00f023ec(plVar17,param_1 + 0xf02,1);
  FUN_00f023ec(plVar8,plVar18,1);
  FUN_00f023ec(plVar18,param_1 + 0xf3f,1);
  FUN_00f023ec(plVar18,param_1 + 0xf5d,1);
  uVar24 = FUN_0092ea9c();
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0x1784);
  if ((uVar27 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1784) = uVar27 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
    uVar27 = *(uint *)((long)param_1 + 0x1784);
  }
  *(uint *)((long)param_1 + 0x1784) = uVar27 | 0x10;
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0x1874);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1874) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
    uVar27 = *(uint *)((long)param_1 + 0x1874);
  }
  *(uint *)((long)param_1 + 0x1874) = uVar27 | 0x10;
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar27 = *(uint *)((long)param_1 + 0x1964);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1964) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
    uVar27 = *(uint *)((long)param_1 + 0x1964);
  }
  *(uint *)((long)param_1 + 0x1964) = uVar27 | 0x10;
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar27 = *(uint *)((long)param_1 + 0x1a54);
  if ((uVar27 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a54) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x5900;
    FUN_0091ada4(plVar6);
  }
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar24 & 1) == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar9,*ppuVar20);
  if ((*(uint *)((long)param_1 + 0x2204) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2204) = *(uint *)((long)param_1 + 0x2204) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar9);
  }
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar24 & 1) == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar10,*ppuVar20);
  if ((*(uint *)((long)param_1 + 0x2334) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2334) = *(uint *)((long)param_1 + 0x2334) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0e578(param_1 + 0x3fb,"circle_button_question");
  FUN_00b09144(0xbf800000,plVar7);
  fVar29 = *(float *)(param_1 + 0x369);
  if ((fVar29 != 0.6) || (fVar29 = *(float *)((long)param_1 + 0x1b4c), fVar29 != 0.6)) {
    param_1[0x369] = 0x3f19999a3f19999a;
    FUN_0091ada4(plVar7);
  }
  fVar28 = (float)FUN_00f0eaf4(param_1 + 0x3bf);
  uVar21 = DAT_03210c64;
  param_1[0x36b] =
       CONCAT44(fVar29 * (float)((ulong)param_1[0x369] >> 0x20),fVar28 * (float)param_1[0x369]);
  local_c0 = thunk_FUN_00b34b2c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar21;
  FUN_009693a0(param_1 + 0x361,&local_c0);
  uVar22 = DAT_03210fac;
  local_c0 = thunk_FUN_00b34958;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar22;
  FUN_009693a0(param_1 + 0x47d,&local_c0);
  local_c0 = thunk_FUN_00b34958;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar22;
  FUN_009693a0(param_1 + 0x81c,&local_c0);
  uVar25 = FUN_0093dbe8();
  if ((uVar25 & 1) == 0) {
    uVar26 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
    if ((uVar24 & 1) == 0) {
      ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
    }
    FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar26,&DAT_01bee7fa,&DAT_03218ef8,
                 *ppuVar20);
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    local_c0 = (code *)0x41f0000000000000;
    FUN_00ab703c(0x41a00000,0x43480000,0x449c4000,plVar13,0,uVar26,&DAT_01bee7fa,&local_c0,*ppuVar20
                );
    local_c0 = thunk_FUN_00b3488c;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
    plStack_b8 = param_1;
    local_98 = uVar21;
    FUN_009693a0(param_1 + 0xbbb,&local_c0);
    FUN_00b09144(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc4) != 0.5) || (*(float *)((long)param_1 + 0x5e24) != 0.5)) {
      param_1[0xbc4] = 0x3f0000003f000000;
      FUN_0091ada4(plVar13);
    }
    FUN_00ab7628(0x43133333,plVar13);
    FUN_00b0914c(plVar13,1);
    FUN_00b09454(plVar13,0);
    FUN_00f0e548(plVar16,PTR_s_build___MenuPartsCommon_tga_02be3530,"ice_icon_small");
    pfVar19 = (float *)(param_1 + 0xeb7);
    if ((*pfVar19 != 0.0) || (*(float *)((long)param_1 + 0x75bc) != 3.0)) {
      pfVar19[0] = 0.0;
      pfVar19[1] = 3.0;
      FUN_0091ada4(plVar16);
    }
    local_c0 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xeaf] + 0x28))(plVar16,&local_c0);
    pfVar19 = (float *)(param_1 + 0xeb8);
    if ((*pfVar19 != 0.9) || (*(float *)((long)param_1 + 0x75c4) != 0.9)) {
      pfVar19[0] = 0.9;
      pfVar19[1] = 0.9;
      FUN_0091ada4(plVar16);
    }
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
    if ((uVar24 & 1) == 0) {
      ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
    }
    FUN_00f0d378(plVar15,*ppuVar20);
    fVar29 = (float)FUN_00f0e700(plVar16);
    fVar28 = *(float *)((long)param_1 + 0x75bc) + -3.0;
    if ((*(float *)(param_1 + 0xe91) != fVar29) || (*(float *)((long)param_1 + 0x748c) != fVar28)) {
      *(float *)(param_1 + 0xe91) = fVar29;
      *(float *)((long)param_1 + 0x748c) = fVar28;
      FUN_0091ada4(plVar15);
    }
    local_c0 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xe89] + 0x28))(plVar15,&local_c0);
    fVar29 = (float)FUN_00f01c54(plVar14,0,0,1,1);
    FUN_00f01c54(plVar14,0,0,1,1);
    fVar28 = fVar28 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe7a) != fVar29 * -0.5) ||
       (*(float *)((long)param_1 + 0x73d4) != fVar28)) {
      *(float *)(param_1 + 0xe7a) = fVar29 * -0.5;
      *(float *)((long)param_1 + 0x73d4) = fVar28;
      FUN_0091ada4(plVar14);
    }
    local_c0 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_c0);
    FUN_00f0e548(param_1 + 0xee4,PTR_s_build___MenuPartsCommon_tga_02be3530,"checkbox_filled");
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
    if ((uVar24 & 1) == 0) {
      ppuVar20 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
    }
    FUN_00f0d92c(param_1 + 0xf02,*ppuVar20,&DAT_01bee7fa);
    FUN_00f0e548(param_1 + 0xf3f,PTR_s_build___MenuPartsCommon_tga_02be3530,"checkbox_filled");
    FUN_00f0d92c(param_1 + 0xf5d,*ppuVar20,&DAT_01bee7fa);
  }
  else {
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_HEADER",0);
    FUN_00f0d75c(plVar6,uVar26);
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_DESC",0);
    FUN_00f0d75c(plVar10,uVar26);
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_FIELD",0);
    FUN_00abc73c(plVar11,uVar26);
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_00ce1e34(plVar11,uVar26,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
    FUN_00abcec0(plVar11,1);
    FUN_00abced0(plVar11,1,3);
    FUN_00abcee4(plVar11,1,0x10);
    FUN_00abcf28(plVar11,0);
    *(uint *)((long)param_1 + 0x2464) = *(uint *)((long)param_1 + 0x2464) | 4;
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
    FUN_00abc73c(plVar12,uVar26);
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_00ce1e34(plVar12,uVar26,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
    FUN_00abcec0(plVar12,0);
    FUN_00abced0(plVar12,0,3);
    FUN_00abcee4(plVar12,0,0x10);
    FUN_00abcf28(plVar12,0);
    *(uint *)((long)param_1 + 0x415c) = *(uint *)((long)param_1 + 0x415c) & 0xfffffffb;
    uVar26 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
    if ((uVar24 & 1) == 0) {
      ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
    }
    fVar29 = 100.0;
    FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar26,&DAT_01bee7fa,&DAT_03218ef8,
                 *ppuVar20);
    uVar26 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar13,0,uVar26,&DAT_01bee7fa,&DAT_03218ef8,
                 *ppuVar20);
    local_c0 = thunk_FUN_00b3488c;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
    plStack_b8 = param_1;
    local_98 = uVar21;
    FUN_009693a0(param_1 + 0xbbb,&local_c0);
    FUN_00b09144(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc4) != 0.5) || (*(float *)((long)param_1 + 0x5e24) != 0.5)) {
      param_1[0xbc4] = 0x3f0000003f000000;
      FUN_0091ada4(plVar13);
    }
    FUN_00b0914c(plVar13,1);
    FUN_00b09454(plVar13,0);
    fVar28 = (float)FUN_00f01c54(plVar14,0,0,1,1);
    FUN_00f01c54(plVar14,0,0,1,1);
    fVar29 = fVar29 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe7a) != fVar28 * -0.5) ||
       (*(float *)((long)param_1 + 0x73d4) != fVar29)) {
      *(float *)(param_1 + 0xe7a) = fVar28 * -0.5;
      *(float *)((long)param_1 + 0x73d4) = fVar29;
      FUN_0091ada4(plVar14);
    }
    local_c0 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_c0);
  }
  if (*(long *)(lVar23 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

