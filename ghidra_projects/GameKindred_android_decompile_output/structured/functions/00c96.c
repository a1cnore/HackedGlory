// functions/00c96 — 17 functions
#include "libGameKindred.h"




void FUN_00c963f8(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6f0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96460(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6f4,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c964c8(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6f8,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96530(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6ec,*(byte *)(param_1 + 0x384c) ^ 1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c965a4(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6fc,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c9660c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02806bb8;
  param_1[0x5c0] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x6e1);
  FUN_00c925cc(param_1 + 0x5c0);
  param_1[0x477] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x598);
  FUN_00c925cc(param_1 + 0x477);
  param_1[0x32e] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x44f);
  FUN_00c925cc(param_1 + 0x32e);
  param_1[0x1e5] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x306);
  FUN_00c925cc(param_1 + 0x1e5);
  param_1[0x9c] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x1bd);
  FUN_00c925cc(param_1 + 0x9c);
  FUN_00f0d3a4(param_1 + 0x76);
  FUN_00f13d08(param_1 + 0x5f);
  param_1[0x41] = &PTR_FUN_028266f0;
  param_1[0x58] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5b);
  FUN_00f13d08(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_02826f38;
  param_1[0x2e] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c9674c(void *param_1)

{
  FUN_00c9660c();
  operator_delete(param_1);
  return;
}




void FUN_00c96770(long param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x3848) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x3848) = param_2;
  switch(param_2) {
  case 0:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) & 0xfffffffb;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) | 4;
    *(uint *)(param_1 + 0x2e84) = *(uint *)(param_1 + 0x2e84) & 0xfffffffb;
    break;
  case 1:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) | 4;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) | 4;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) | 4;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) & 0xfffffffb;
    pcVar1 = "MENU_DRAFT_LOBBY_HERO_SWAP_PROMPT";
    *(uint *)(param_1 + 0x2e84) = *(uint *)(param_1 + 0x2e84) & 0xfffffffb;
    goto LAB_00c96950;
  case 2:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) & 0xfffffffb;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) & 0xfffffffb;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) | 4;
    *(uint *)(param_1 + 0x2e84) =
         *(uint *)(param_1 + 0x2e84) & 0xfffffffb |
         ((uint)*(byte *)(param_1 + 0x384c) << 2 ^ 4) & 0xfc;
    uVar2 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_HERO_SWAP_PROMPT",0);
    FUN_00c938d4(param_1 + 0x2e00,uVar2);
    break;
  case 3:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) | 4;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) | 4;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) & 0xfffffffb;
    *(uint *)(param_1 + 0x2e84) = *(uint *)(param_1 + 0x2e84) & 0xfffffffb;
    FUN_00f0d378(param_1 + 0x3b0,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
    pcVar1 = "MENU_DRAFT_LOBBY_SWAP_PENDING";
LAB_00c96950:
    uVar2 = FUN_00e6ce7c(pcVar1,0);
    FUN_00f0d75c(param_1 + 0x3b0,uVar2);
  }
  FUN_00c96974(param_1);
  return;
}




void FUN_00c96974(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  lVar3 = param_1 + 0xb8;
  FUN_00f07940(0,0,lVar3,8,param_1,8);
  FUN_00f07940(0xc0800000,0,param_1 + 0x208,7,lVar3,7);
  lVar2 = param_1 + 0x2f8;
  FUN_00f07940(0,0,lVar2,8,lVar3,8);
  lVar3 = lVar2;
  switch(*(undefined4 *)(param_1 + 0x3848)) {
  case 0:
    uVar4 = 5;
    uVar5 = 5;
    lVar2 = param_1 + 0x23b8;
    break;
  case 1:
    lVar3 = param_1 + 0x3b0;
    FUN_00f0dac8(lVar3,3);
    uVar5 = FUN_00f13e54(lVar2);
    FUN_00f0db64(uVar5,0,0x3f800000,lVar3);
    FUN_00f07940(0,0,lVar3,4,lVar2,4);
    FUN_00f07940(0,0,param_1 + 0x4e0,1,lVar3,6);
    uVar5 = 6;
    lVar2 = param_1 + 0x1970;
    uVar7 = 0;
    uVar4 = 0;
    goto LAB_00c96bb4;
  case 2:
    uVar7 = 0;
    bVar1 = *(char *)(param_1 + 0x384c) == '\0';
    if (bVar1) {
      uVar7 = 0x41800000;
      lVar3 = param_1 + 0x2e00;
    }
    uVar5 = 8;
    if (bVar1) {
      uVar5 = 6;
    }
    FUN_00f07940(0,0,param_1 + 0x2e00,4,lVar2,4);
    lVar2 = param_1 + 0x23b8;
    uVar4 = 4;
    if (*(char *)(param_1 + 0x384c) != '\0') {
      uVar4 = 8;
    }
    goto LAB_00c96bb4;
  case 3:
    FUN_00f07940(0,0,param_1 + 0xf28,5,lVar2,5);
    fVar6 = (float)FUN_00f080a0(lVar2,7,param_1 + 0xf28,7);
    lVar2 = param_1 + 0x3b0;
    FUN_00f0db64(fVar6 * 0.9,0,0x3f800000,lVar2);
    FUN_00f0dac8(lVar2,0);
    uVar4 = 7;
    uVar5 = 7;
    break;
  default:
    return;
  }
  uVar7 = 0;
LAB_00c96bb4:
  FUN_00f07940(0,uVar7,lVar2,uVar4,lVar3,uVar5);
  return;
}




void FUN_00c96bd0(long param_1,uint param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x384c) = (byte)param_2 & 1;
  pcVar1 = "MENU_DRAFT_UNMUTE_ALLY_PROMPT";
  if ((param_2 & 1) == 0) {
    pcVar1 = "MENU_DRAFT_MUTE_ALLY_PROMPT";
  }
  uVar2 = FUN_00e6ce7c(pcVar1,0);
  FUN_00c938d4(param_1 + 0x23b8,uVar2);
  *(uint *)(param_1 + 0x2e84) =
       *(uint *)(param_1 + 0x2e84) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2e84) & 3 | (~param_2 & 1) << 2;
  FUN_00c96974(param_1);
  return;
}




void FUN_00c96c50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f13db0();
  FUN_00f13f08(param_1,param_2,param_3 + 0xb8);
  fVar3 = (float)param_1 * 0.75;
  fVar2 = (float)param_2 * 0.33;
  FUN_00f13f08(fVar3,(float)param_2 * 0.75,param_3 + 0x2f8);
  local_50 = fVar3;
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x3b0,&local_50);
  local_50 = fVar3;
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x2e00,&local_50);
  local_50 = fVar3;
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x23b8,&local_50);
  local_50 = fVar3 * 0.48;
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x4e0,&local_50);
  local_50 = fVar3 * 0.48;
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x1970,&local_50);
  local_50 = fVar3 * 0.33;
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0xf28,&local_50);
  FUN_00c96974(param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96d68(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6f0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96dd0(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6f4,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96e38(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6f8,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96ea0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6ec,*(byte *)(param_1 + 0x384c) ^ 1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96f14(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c6fc,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c96f7c(undefined1 param_1 [16],float param_2,long *param_3,int param_4,uint param_5,
                 byte param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x19;
  *(undefined4 *)((long)param_3 + 0xbc) = 0xff;
  *(int *)(param_3 + 0x18) = param_4;
  *param_3 = (long)&PTR_FUN_02806d00;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_3 + 0x37;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_3 + 0x58;
  param_3[0x57] = 0;
  param_3[0x56] = 0;
  param_3[0x55] = (long)(param_3 + 0x56);
  FUN_00c939c4(plVar3,0);
  plVar4 = param_3 + 0x1d2;
  FUN_00c939c4(plVar4,0);
  plVar5 = param_3 + 0x34c;
  FUN_00c939c4(plVar5,0);
  plVar6 = param_3 + 0x4c6;
  FUN_00f0d160(plVar6);
  *(undefined1 *)(param_3 + 0x4ec) = 0;
  *(byte *)((long)param_3 + 0x2761) = param_6 & 1;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_bg");
  if (param_4 == 2) {
    *(uint *)((long)param_3 + 0x23c) = *(uint *)((long)param_3 + 0x23c) & 0xfffffffb;
  }
  else {
    if (param_4 == 1) {
      pcVar9 = "draft_minimap3V3";
    }
    else {
      if (param_4 != 0) goto LAB_00c97160;
      pcVar9 = "draft_minimap5V5";
    }
    FUN_00f0e548(plVar2,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,pcVar9);
    FUN_00f0e9c0(plVar2,1);
  }
LAB_00c97160:
  puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_a8,"lobby_build_crystal");
  FUN_00c93a88(plVar3,puVar8,&local_a8,&DAT_0320ffa8);
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00c9279c(plVar3,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_background");
  puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_a8,"lobby_build_utility");
  FUN_00c93a88(plVar4,puVar8,&local_a8,&DAT_0320ffa8);
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00c9279c(plVar4,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_background");
  puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_a8,"lobby_build_weapon");
  FUN_00c93a88(plVar5,puVar8,&local_a8,&DAT_0320ffa8);
  if (((byte)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00c9279c(plVar5,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_background");
  fVar11 = (float)FUN_00f0e700(param_3 + 400);
  param_2 = param_2 * 1.2;
  local_a8 = (code *)CONCAT44(param_2,fVar11 * 1.2);
  FUN_00f13f18(plVar3,&local_a8);
  fVar11 = (float)FUN_00f0e700(param_3 + 0x30a);
  param_2 = param_2 * 1.2;
  local_a8 = (code *)CONCAT44(param_2,fVar11 * 1.2);
  FUN_00f13f18(plVar4,&local_a8);
  fVar11 = (float)FUN_00f0e700(param_3 + 0x484);
  local_a8 = (code *)CONCAT44(param_2 * 1.2,fVar11 * 1.2);
  FUN_00f13f18(plVar5,&local_a8);
  if (param_4 == 1) {
    if ((param_5 & 1) == 0) {
      FUN_00c9757c(0x3f51eb85,0x3ee66666,param_3,6);
      uVar12 = 0x3f000000;
      FUN_00c9757c(0x3f000000,0x3eb33333,param_3,5);
      FUN_00c9757c(0x3f266666,0x3f11eb85,param_3,1);
      uVar13 = 0x3f333333;
    }
    else {
      FUN_00c9757c(0x3e3851ec,0x3ee66666,param_3,6);
      uVar12 = 0x3f000000;
      FUN_00c9757c(0x3f000000,0x3eb33333,param_3,5);
      FUN_00c9757c(0x3eb33333,0x3f11eb85,param_3,1);
      uVar13 = 0x3f333333;
    }
  }
  else {
    if (param_4 != 0) goto LAB_00c9745c;
    FUN_00c9757c(0x3e6147ae,0x3f47ae14,param_3,6);
    FUN_00c9757c(0x3e3851ec,0x3e8f5c29,param_3,2);
    FUN_00c9757c(0x3ef0a3d7,0x3f07ae14,param_3,3);
    FUN_00c9757c(0x3f333333,0x3f4ccccd,param_3,4);
    FUN_00c9757c(0x3eeb851f,0x3f333333,param_3,1);
    uVar12 = 0x3ecccccd;
    uVar13 = 0x3f19999a;
  }
  FUN_00c9757c(uVar12,uVar13,param_3,0);
LAB_00c9745c:
  local_90 = 0;
  uStack_88 = 0;
  uVar12 = DAT_03210c64;
  local_a8 = thunk_FUN_00c98204;
  local_98 = (void *)0x0;
  plStack_a0 = param_3;
  local_80 = uVar12;
  FUN_009693a0(param_3 + 0x59,&local_a8);
  local_a8 = thunk_FUN_00c98280;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  plStack_a0 = param_3;
  local_80 = uVar12;
  FUN_009693a0(param_3 + 0x1d3,&local_a8);
  local_a8 = thunk_FUN_00c98300;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  plStack_a0 = param_3;
  local_80 = uVar12;
  FUN_009693a0(param_3 + 0x34d,&local_a8);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(plVar6,&DAT_0313c718);
  if (param_4 == 2) {
    pcVar9 = "MENU_DRAFT_BUILD_PATH_INSTRUCTION";
  }
  else {
    pcVar9 = "MENU_DRAFT_POSITION_INSTRUCTION";
  }
  uVar10 = FUN_00e6ce7c(pcVar9,0);
  FUN_00f0d75c(plVar6,uVar10);
  FUN_00f0dc4c(0x43200000,0,0x3f800000,plVar6);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

