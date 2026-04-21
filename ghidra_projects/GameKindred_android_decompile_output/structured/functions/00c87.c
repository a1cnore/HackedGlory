// functions/00c87 — 10 functions
#include "libGameKindred.h"




void FUN_00c87014(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  code *local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar10 = tpidr_el0;
  local_b0 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar18 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027f5e68;
  FUN_00f13ca4(plVar18);
  plVar1 = param_1 + 0x2e;
  FUN_00f0d160(plVar1);
  lVar15 = 0;
  do {
    FUN_00c86f18((long)param_1 + lVar15 + 0x2a0);
    lVar15 = lVar15 + 0x1780;
  } while (lVar15 != 0x5e00);
  plVar3 = param_1 + 0xc14;
  FUN_00f13ca4(plVar3);
  plVar4 = param_1 + 0xc2b;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xc51;
  FUN_00ab6c24(plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  FUN_00f023ec(plVar18,plVar1,1);
  plVar19 = param_1 + 0x54;
  lVar15 = 4;
  do {
    FUN_00f023ec(plVar18,plVar19,1);
    lVar15 = lVar15 + -1;
    plVar19 = plVar19 + 0x2f0;
  } while (lVar15 != 0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f00298(auStack_e4,auStack_e8);
  uVar13 = FUN_0092ea9c();
  bVar12 = (uVar13 & 1) == 0;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if (bVar12) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
  }
  uVar9 = 0x44af0000;
  if (bVar12) {
    uVar9 = 0x447a0000;
  }
  FUN_00f0d92c(plVar1,*ppuVar7,&DAT_01bee7fa);
  FUN_00f08c18(param_1 + 0x48,3);
  FUN_00f0dad0(uVar9,plVar1,1);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_EXPLANATION",0);
  FUN_00f0d75c(plVar1,uVar14);
  uVar8 = *(uint *)((long)param_1 + 500);
  if ((uVar8 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 500) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
    FUN_0091ada4(plVar1);
  }
  fVar20 = 1.3;
  uVar9 = DAT_03210c64;
  lVar16 = 0;
  lVar15 = 0;
  lVar17 = 0x18e8;
  if ((uVar13 & 1) == 0) {
    fVar20 = 1.0;
  }
  do {
    lVar2 = (long)param_1 + lVar16 + 0x328;
    FUN_00ab703c(0x42200000,0x44480000,0x44480000,lVar2,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
                 0);
    FUN_00ab7628(0x4317cccd,lVar2);
    lVar2 = (long)param_1 + lVar16 + 0xa48;
    FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
    FUN_00f0db64(0x44340000,0,0x3f800000,lVar2);
    FUN_00f0d378((long)param_1 + lVar17,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38);
    FUN_00f0db64(0x44340000,0,0x3f800000,(long)param_1 + lVar17);
    local_e0 = FUN_00c876a4;
    local_d0 = 0;
    local_c8 = 0;
    plStack_d8 = param_1;
    local_c0 = lVar15;
    local_b8 = uVar9;
    FUN_009693a0((long)param_1 + lVar16 + 0x330,&local_e0);
    if ((*(float *)((long)param_1 + lVar16 + 0x2e8) != fVar20) ||
       (*(float *)((long)param_1 + lVar16 + 0x2ec) != fVar20)) {
      *(float *)((long)param_1 + lVar16 + 0x2e8) = fVar20;
      *(float *)((long)param_1 + lVar16 + 0x2ec) = fVar20;
      FUN_0091ada4((long)param_1 + lVar16 + 0x2a0);
    }
    lVar15 = lVar15 + 1;
    lVar16 = lVar16 + 0x1780;
    lVar17 = lVar17 + 0x1780;
  } while (lVar15 != 4);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_TECH_ISSUE",0);
  FUN_00ab7498(param_1 + 0x65,uVar14);
  FUN_00ab74fc(0,0xc1700000,param_1 + 0x65);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_TECH_ISSUE_SUBTITLE",0);
  FUN_00f0d75c(param_1 + 0x31d,uVar14);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_TEAM_BALANCE",0);
  FUN_00ab7498(param_1 + 0x355,uVar14);
  FUN_00ab74fc(0,0xc1700000,param_1 + 0x355);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_TEAM_BALANCE_SUBTITLE",0);
  FUN_00f0d75c(param_1 + 0x60d,uVar14);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_TROLL",0);
  FUN_00ab7498(param_1 + 0x645,uVar14);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_OTHER",0);
  FUN_00ab7498(param_1 + 0x935,uVar14);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6124) = *(uint *)((long)param_1 + 0x6124) & 0xfffffffb;
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f08c18(param_1 + 0xc45,3);
  uVar11 = 0x44e10000;
  if ((uVar13 & 1) == 0) {
    uVar11 = 0x44af0000;
  }
  FUN_00f0dad0(uVar11,plVar4,1);
  uVar14 = FUN_00e6ce7c("HUD_SCOREBOARD_SURVEY_THANK_YOU",0);
  FUN_00f0d75c(plVar4,uVar14);
  uVar8 = *(uint *)((long)param_1 + 0x61dc);
  if ((uVar8 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x61dc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
    FUN_0091ada4(plVar4);
  }
  fVar20 = 1.2;
  if ((uVar13 & 1) == 0) {
    fVar20 = 1.0;
  }
  if ((*(float *)(param_1 + 0xc5a) != fVar20) || (*(float *)((long)param_1 + 0x62d4) != fVar20)) {
    *(float *)(param_1 + 0xc5a) = fVar20;
    *(float *)((long)param_1 + 0x62d4) = fVar20;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0dac8(param_1 + 0xd35,0);
  puVar6 = (uint *)((long)param_1 + 0x630c);
  uVar8 = *puVar6;
  if ((uVar8 & 0x7f80) != 0x5900) {
    *puVar6 = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x5900;
    FUN_0091ada4(plVar5);
  }
  FUN_00ab703c(0x42700000,0x42c80000,0x43c80000,plVar5,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar14 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00ab7498(plVar5,uVar14);
  local_e0 = thunk_FUN_00c87cb0;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  plStack_d8 = param_1;
  local_b8 = uVar9;
  FUN_009693a0(param_1 + 0xc52,&local_e0);
  *puVar6 = *puVar6 | 4;
  if (*(long *)(lVar10 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c876a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c87c34(param_1,param_2,param_5);
  return;
}




void thunk_FUN_00c87cb0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_THANK_YOU");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c876b0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&uStack_7c,&local_80);
  FUN_00f07940(0,0,param_1 + 0xb8,8,param_1,8);
  fVar5 = -340.0;
  lVar1 = param_1 + 0x170;
  FUN_00f07940(0,0xc3aa0000,lVar1,6,param_1 + 0xb8,4);
  uVar3 = 0;
  lVar4 = param_1;
  do {
    (**(code **)(*(long *)(lVar4 + 0x2a0) + 0x60))(lVar4 + 0x2a0,0,0,1,1);
    fVar6 = (float)(uVar3 & 0xffffffff);
    fVar7 = (fVar5 + -10.0) * fVar6;
    FUN_00f0d4e0(fVar5 + -10.0,fVar6,lVar1);
    FUN_00f07940(0,fVar6 + fVar7 + 10.0,lVar4 + 0x2a0,4,lVar1,6);
    fVar5 = 0.0;
    FUN_00f07940(0,lVar4 + 0x18e8,4,lVar4 + 0xa48,6);
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x1780;
  } while (uVar3 != 4);
  lVar1 = param_1 + 0x60a0;
  FUN_00f13f08(uStack_7c,local_80,lVar1);
  fVar5 = 0.0;
  FUN_00f07940(0,0,lVar1,8,param_1,8);
  lVar4 = param_1 + 0x6158;
  FUN_00f0d4e0(lVar4);
  FUN_00f07940(0,-fVar5,lVar4,8,lVar1,8);
  FUN_00f07940(0,0x42480000,param_1 + 0x6288,4,lVar4,6);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c87888(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  uVar2 = *(uint *)(param_1 + 0x13c);
  lVar1 = param_1 + 0xb8;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x13c) = uVar2 & 0xffff807f;
    FUN_0091ada4(lVar1);
    uVar2 = *(uint *)(param_1 + 0x13c);
  }
  *(uint *)(param_1 + 0x13c) = uVar2 | 4;
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar4);
  return;
}




void FUN_00c87990(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdd74(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar5);
  FUN_00efcac4(0x3ecccccd,puVar5);
  FUN_00f022a0(param_1 + 0xb8,puVar5);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(param_1 + 0xb8,puVar5);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdd74(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3ecccccd,puVar5);
  puVar1 = (uint *)(param_1 + 0x6124);
  uVar3 = *puVar1;
  param_1 = param_1 + 0x60a0;
  if ((uVar3 & 0x7f80) != 0) {
    *puVar1 = uVar3 & 0xffff807f;
    FUN_0091ada4(param_1);
    uVar3 = *puVar1;
  }
  *puVar1 = uVar3 | 4;
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar5);
  return;
}




undefined1  [16] FUN_00c87c04(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  FUN_00f080a0(param_3 + 0x170,4,param_3 + 0x4920,6);
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}




void FUN_00c87c34(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_MATCH_QUALITY");
  FUN_00f048e0(auStack_58,uVar2,param_3);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c87cb0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_THANK_YOU");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c87d20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  plVar12 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02805088;
  FUN_00b12bd8(plVar12,1);
  plVar1 = param_1 + 0xad;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0xcb;
  FUN_00f0d160(plVar2);
  lVar11 = 0;
  do {
    FUN_00b199f0((long)param_1 + lVar11 + 0x788);
    lVar11 = lVar11 + 0x388;
  } while (lVar11 != 0x11a8);
  *(undefined4 *)(param_1 + 0x326) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  uVar9 = FUN_0092ea9c();
  uVar5 = DAT_03210f58;
  uVar6 = DAT_03210f84;
  lVar13 = 0;
  lVar11 = 0;
  fVar14 = 0.55;
  if ((uVar9 & 1) == 0) {
    fVar14 = 0.4;
  }
  do {
    lVar3 = (long)param_1 + lVar13 + 0x788;
    (**(code **)(*param_1 + 0x78))(param_1,lVar3,1);
    FUN_00b19c1c(lVar3,0);
    uVar7 = *(uint *)((long)param_1 + lVar13 + 0x9b4);
    if ((uVar7 & 0x7f80) != 0x5900) {
      *(uint *)((long)param_1 + lVar13 + 0x9b4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5900;
      FUN_0091ada4((long)param_1 + lVar13 + 0x930);
    }
    local_a8 = (code *)0x3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar13 + 0x788) + 0x28))(lVar3,&local_a8);
    if ((*(float *)((long)param_1 + lVar13 + 2000) != fVar14) ||
       (*(float *)((long)param_1 + lVar13 + 0x7d4) != fVar14)) {
      *(float *)((long)param_1 + lVar13 + 2000) = fVar14;
      *(float *)((long)param_1 + lVar13 + 0x7d4) = fVar14;
      FUN_0091ada4(lVar3);
    }
    lVar3 = (long)param_1 + lVar13 + 0x790;
    *(uint *)((long)param_1 + lVar13 + 0x80c) = *(uint *)((long)param_1 + lVar13 + 0x80c) | 0x10;
    local_a8 = FUN_00c880bc;
    local_98 = 0;
    uStack_90 = 0;
    plStack_a0 = param_1;
    local_88 = lVar11;
    local_80 = uVar5;
    FUN_009693a0(lVar3,&local_a8);
    local_a8 = FUN_00c880bc;
    local_98 = 0;
    uStack_90 = 0;
    plStack_a0 = param_1;
    local_88 = lVar11;
    local_80 = uVar6;
    FUN_009693a0(lVar3,&local_a8);
    lVar11 = lVar11 + 1;
    lVar13 = lVar13 + 0x388;
  } while (lVar11 != 5);
  FUN_00b132e8(0x3f666666,plVar12,&DAT_01bee7f6);
  FUN_00b1326c(0x3f800000,plVar12,&DAT_01bee7fa);
  local_a8 = (code *)0x0;
  FUN_00b12ff0(plVar12,&local_a8);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_bubble_down_arrow");
  if ((*(float *)(param_1 + 0xb6) != 1.5) || (*(float *)((long)param_1 + 0x5b4) != 1.5)) {
    lVar11 = NEON_fmov(0x3fc00000,4);
    param_1[0xb6] = lVar11;
    FUN_0091ada4(plVar1);
  }
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffacacac);
  FUN_00f0e670(plVar1,&local_a8,2);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar9 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d92c(plVar2,*ppuVar4,&DAT_01bee7fa);
  uVar10 = FUN_00e6ce7c("HUD_SCOREBOARD_GAMEOVER_RATING_EXPLANATION",0);
  FUN_00f0d75c(plVar2,uVar10);
  FUN_00f0dac8(plVar2,3);
  uVar9 = *(uint *)((long)param_1 + 0x6dc);
  if ((uVar9 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x6dc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

