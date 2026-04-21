// functions/00c33 — 22 functions
#include "libGameKindred.h"




long * FUN_00c3301c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_00c330b0(long *param_1)

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
  long lVar11;
  undefined8 local_80;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x49;
  param_1[0x48] = 0;
  *param_1 = (long)&PTR_FUN_027fa2d0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x67;
  FUN_00f0c714(plVar2);
  plVar3 = param_1 + 0x82;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0xa0;
  FUN_00f0e4a8(plVar4);
  FUN_00f0e4a8();
  FUN_00f0e4a8(param_1 + 0xdc);
  plVar5 = param_1 + 0xfa;
  FUN_00f0c714(plVar5);
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x133;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0d160();
  plVar7 = param_1 + 0x1b3;
  FUN_00f0d160();
  FUN_00f0e4a8();
  plVar8 = param_1 + 0x1f7;
  FUN_00f0e4a8(plVar8);
  FUN_00f0e4a8();
  plVar9 = param_1 + 0x233;
  FUN_00f13ca4(plVar9);
  plVar10 = param_1 + 0x24a;
  FUN_00f0ae34(plVar10);
  FUN_00c95f30();
  param_1[0x97a] = 0;
  param_1[0x979] = 0xff000000ff;
  *(undefined4 *)(param_1 + 0x97b) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0xbe,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,param_1 + 0xdc,1);
  FUN_00f023ec(plVar1,param_1 + 0x115,1);
  FUN_00f023ec(plVar1,plVar9,1);
  FUN_00f023ec(plVar9,plVar10,1);
  FUN_00f023ec(plVar1,param_1 + 0x1d9,1);
  FUN_00f023ec(plVar1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x151,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x18d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x215,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x16f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x26f,1);
  FUN_00f0d378(param_1 + 0x18d,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_person_counter");
  *(uint *)((long)param_1 + 0x103c) = *(uint *)((long)param_1 + 0x103c) & 0xfffffffb;
  FUN_00f0e548(param_1 + 0x215,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_chat_mute");
  *(uint *)((long)param_1 + 0x112c) = *(uint *)((long)param_1 + 0x112c) & 0xfffffffb;
  FUN_00f0e548(param_1 + 0x1d9,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_fill");
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) & 0xfffffffb;
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0x1b3] + 0x28))(plVar7,&local_80);
  *(uint *)((long)param_1 + 0xe1c) = *(uint *)((long)param_1 + 0xe1c) & 0xfffffffb;
  FUN_00f0c774(plVar5,&DAT_01bee7f6);
  FUN_00f0e540(param_1 + 0x115,PTR_s_build___MenuDraftPartsCommon_tga_02be3618);
  FUN_00f0e548(plVar6,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,"draft_positions_btn_press");
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0x133] + 0x28))(plVar6,&local_80);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e540(param_1 + 0x151,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e540(param_1 + 0x16f,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e548(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_warning");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_00f0e548(plVar3,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"local_player_bg");
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_player_turn_bg");
  if ((*(uint *)((long)param_1 + 0x584) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xffff807f;
    FUN_0091ada4(plVar4);
  }
  if ((*(uint *)((long)param_1 + 0x3bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3bc) = *(uint *)((long)param_1 + 0x3bc) & 0xffff807f;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0c774(plVar2,&DAT_01bee7f6);
  *(uint *)((long)param_1 + 0x13fc) = *(uint *)((long)param_1 + 0x13fc) & 0xffffffbb;
  FUN_00f0af50(plVar10,PTR_DAT_02be3510);
  FUN_00f0b2f0(0x3d072b02,plVar10);
  FUN_00f0b334(plVar10,1);
  FUN_00f0b300(plVar10,1);
  FUN_00f0b2cc(plVar10);
  FUN_00f019d4(param_1 + 0x133,1);
  FUN_00c349f0(0x3e4ccccd,param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_00f14070(param_1,&DAT_02bf25a8);
  if (*(long *)(lVar11 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c33660(long param_1)

{
  FUN_00f019d4(param_1 + 0x998,1);
  FUN_00c349f0(0x3e4ccccd,param_1);
  return;
}




void FUN_00c33694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fa2d0;
  FUN_00c9660c(param_1 + 0x26f);
  FUN_00f0ae84(param_1 + 0x24a);
  FUN_00f13d08(param_1 + 0x233);
  param_1[0x215] = &PTR_FUN_028266f0;
  param_1[0x22c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x22f);
  FUN_00f13d08(param_1 + 0x215);
  param_1[0x1f7] = &PTR_FUN_028266f0;
  param_1[0x20e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x211);
  FUN_00f13d08(param_1 + 0x1f7);
  param_1[0x1d9] = &PTR_FUN_028266f0;
  param_1[0x1f0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 499);
  FUN_00f13d08(param_1 + 0x1d9);
  FUN_00f0d3a4(param_1 + 0x1b3);
  FUN_00f0d3a4(param_1 + 0x18d);
  param_1[0x16f] = &PTR_FUN_028266f0;
  param_1[0x186] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x189);
  FUN_00f13d08(param_1 + 0x16f);
  param_1[0x151] = &PTR_FUN_028266f0;
  param_1[0x168] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16b);
  FUN_00f13d08(param_1 + 0x151);
  param_1[0x133] = &PTR_FUN_028266f0;
  param_1[0x14a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14d);
  FUN_00f13d08(param_1 + 0x133);
  param_1[0x115] = &PTR_FUN_028266f0;
  param_1[300] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x12f);
  FUN_00f13d08(param_1 + 0x115);
  FUN_00f13d08(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_028266f0;
  param_1[0xf3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf6);
  FUN_00f13d08(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c3387c(void *param_1)

{
  FUN_00c33694();
  operator_delete(param_1);
  return;
}




void FUN_00c338a0(long param_1)

{
  long lVar1;
  long lVar2;
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = DAT_0313c6f0;
  uStack_60 = *(undefined8 *)(param_1 + 0x240);
  local_50 = 0;
  uStack_48 = 0;
  local_68 = FUN_00c339f8;
  lVar1 = param_1 + 0x1380;
  local_58 = 0;
  FUN_009693a0(lVar1,&local_68);
  uStack_60 = *(undefined8 *)(param_1 + 0x240);
  local_40 = DAT_0313c6f4;
  local_68 = FUN_00c33a0c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_009693a0(lVar1,&local_68);
  uStack_60 = *(undefined8 *)(param_1 + 0x240);
  local_40 = DAT_0313c6f8;
  local_68 = FUN_00c33a20;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_009693a0(lVar1,&local_68);
  uStack_60 = *(undefined8 *)(param_1 + 0x240);
  local_40 = DAT_0313c6fc;
  local_68 = FUN_00c33a34;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_009693a0(lVar1,&local_68);
  uStack_60 = *(undefined8 *)(param_1 + 0x240);
  local_40 = DAT_0313c6ec;
  local_68 = FUN_00c33a48;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_009693a0(lVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c339f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c33a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_4,param_5);
  return;
}




void FUN_00c33a0c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c33a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_4,param_5);
  return;
}




void FUN_00c33a20(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c33a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5);
  return;
}




void FUN_00c33a34(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c33a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5);
  return;
}




void FUN_00c33a48(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c33a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_4,param_5);
  return;
}




void FUN_00c33a5c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x674) =
       *(uint *)(param_1 + 0x674) & 0xfffffff8 | *(uint *)(param_1 + 0x674) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c33a70(long param_1,byte param_2)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(byte *)(param_1 + 0x4bd9) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x4bd9) = param_2 & 1;
    FUN_00c33b8c(param_1);
  }
  bVar4 = (param_2 & 1) == 0;
  pcVar1 = "draft_ally_hero_box";
  if (bVar4) {
    pcVar1 = "draft_enemy_hero_box";
  }
  puVar2 = &UNK_01bbcb04;
  if (bVar4) {
    puVar2 = &DAT_01bbcb08;
  }
  FUN_00f0e578(param_1 + 0x8a8,pcVar1);
  FUN_00f0d7fc(param_1 + 0xd98,puVar2);
  if ((param_2 & 1) == 0) {
    local_50 = 0xff0000dc;
  }
  else {
    local_50 = 0xffffae00;
  }
  FUN_00f0e670(param_1 + 0x500,&local_50,2);
  local_4c = 0;
  local_50 = 0x3dcccccd;
  if ((param_2 & 1) == 0) {
    local_50 = 0xbdcccccd;
  }
  (**(code **)(*(long *)(param_1 + 0x248) + 0x28))(param_1 + 0x248,&local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c33b8c(long param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pbVar2 = (byte *)(param_1 + 0x4bd9);
  if (*pbVar2 == 0) {
    FUN_00c34f04(param_1);
  }
  else {
    FUN_00c34d48(param_1);
  }
  FUN_00f07b18(0,param_1 + 0x248,5,param_1,5);
  FUN_00f07a18(0,0,param_1 + 0x500,8);
  FUN_00f07a18(0,0,param_1 + 0x338,8);
  FUN_00f07a18(0,0,param_1 + 0x410,8);
  FUN_00c34c8c(param_1);
  puVar3 = &DAT_01bbcb10;
  if (*pbVar2 != 0) {
    puVar3 = &DAT_01bbcb0c;
  }
  FUN_00f0e670(param_1 + 0xec8,puVar3,2);
  lVar1 = param_1 + 2000;
  puVar3 = &DAT_01bbcb10;
  if (*pbVar2 != 0) {
    puVar3 = &DAT_01bbcb0c;
  }
  FUN_00f0c774(lVar1,puVar3);
  puVar3 = &DAT_01bbcb00;
  if (*pbVar2 != 0) {
    puVar3 = &DAT_01bbcafc;
  }
  FUN_00f0e670(param_1 + 0x248,puVar3,2);
  *(byte *)(param_1 + 800) = *(byte *)(param_1 + 800) & 0xfe | *pbVar2 ^ 1;
  *(byte *)(param_1 + 0x5d8) = *(byte *)(param_1 + 0x5d8) & 0xfe | *pbVar2 ^ 1;
  FUN_00f07940(0,0,param_1 + 0x6e0,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0x8a8,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0xd98,8,param_1 + 0xec8,8);
  FUN_00f07940(0,0,param_1 + 0x1198,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0x1250,8,param_1 + 0x1198,8);
  fVar6 = 0.0;
  FUN_00f07940(0,param_1 + 0x1378,7,param_1,5);
  lVar5 = *(long *)(param_1 + 0x4bd0);
  if (lVar5 != 0) {
    local_60 = (float)FUN_00f01c20(lVar1);
    local_60 = local_60 * 0.7;
    fStack_5c = fVar6 * 0.7;
    FUN_00f13f18(lVar5,&local_60);
    FUN_00f07940(0xc2400000,0,*(undefined8 *)(param_1 + 0x4bd0),5,param_1 + 0xd98,7);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c33e0c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x4bd8) = param_2 & 1;
  FUN_00f0e578(param_1 + 0x998,"draft_positions_btn_press");
  FUN_00f019d4(param_1 + 0x998,1);
  FUN_00c349f0(0x3e4ccccd,param_1);
  return;
}




void FUN_00c33e60(long param_1)

{
  *(uint *)(param_1 + 0xe1c) = *(uint *)(param_1 + 0xe1c) | 4;
  *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) | 4;
  return;
}




void FUN_00c33e7c(long param_1,uint param_2)

{
  FUN_00c96bd0(param_1 + 0x1378,param_2 & 1);
  *(uint *)(param_1 + 0x112c) =
       *(uint *)(param_1 + 0x112c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x112c) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c33eb8(long param_1,byte param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x12d4) | 4;
  if ((param_2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x12d4) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x12d4) = uVar1;
  if (*(byte *)(param_1 + 0x4bda) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x4bda) = param_2 & 1;
  FUN_00c33b8c(param_1);
  uVar3 = 0x3f4ccccd;
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  uVar2 = FUN_00efee28(uVar3,0x3dcccccd,0);
  FUN_00f01980(param_1 + 0x500);
  FUN_00f022a0(param_1 + 0x500,uVar2);
  return;
}




void FUN_00c33f5c(long param_1)

{
  *(uint *)(param_1 + 0x12d4) = *(uint *)(param_1 + 0x12d4) | 4;
  return;
}




void FUN_00c33f6c(long param_1)

{
  *(uint *)(param_1 + 0x12d4) = *(uint *)(param_1 + 0x12d4) & 0xfffffffb;
  return;
}




void FUN_00c33f7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00f08be8(param_1 + 0xd38);
  uVar2 = FUN_00e70b88(param_2,uVar1);
  if ((uVar2 & 1) != 0) {
    FUN_00f0d75c(param_1 + 0xc68,param_2);
    return;
  }
  return;
}




void FUN_00c33fc8(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  bVar3 = (param_2 & 1) == 0;
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if (bVar3) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  uVar5 = 0xff;
  if (bVar3) {
    uVar5 = 0;
  }
  FUN_00f0d378(param_1 + 0xc68,*ppuVar1);
  uVar2 = *(uint *)(param_1 + 0x494);
  if ((uVar2 >> 7 & 0xff) != uVar5) {
    *(uint *)(param_1 + 0x494) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar5 << 7;
    FUN_0091ada4(param_1 + 0x410);
  }
  *(uint *)(param_1 + 0x3bc) =
       *(uint *)(param_1 + 0x3bc) & 0xfffffff8 | *(uint *)(param_1 + 0x3bc) & 3 | (param_3 & 1) << 2
  ;
  if (((*(char *)(param_1 + 0x4bdb) == '\0') && ((param_2 & 1) != 0)) &&
     (*(int *)(param_1 + 0x4bcc) == 0xff)) {
    *(uint *)(param_1 + 0xa1c) = *(uint *)(param_1 + 0xa1c) | 4;
    FUN_00f019d4(param_1 + 0x998,1);
    FUN_00c349f0(0x3e4ccccd,param_1);
  }
  else {
    *(uint *)(param_1 + 0xa1c) = *(uint *)(param_1 + 0xa1c) & 0xfffffffb;
    FUN_00f019d4(param_1 + 0x998,1);
  }
  *(uint *)(param_1 + 0x103c) =
       *(uint *)(param_1 + 0x103c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x103c) & 3 | (param_2 & 1) << 2;
  if ((param_2 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      puVar4 = (undefined4 *)&DAT_01bbcaf8;
    }
    else {
      puVar4 = (undefined4 *)&UNK_01bbcaf4;
      if ((param_4 & 1) == 0) {
        puVar4 = (undefined4 *)&DAT_01bbcaf0;
      }
    }
  }
  else {
    puVar4 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_1 + 0xc68,puVar4);
  return;
}

