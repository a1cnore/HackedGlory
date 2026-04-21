// functions/00b73 — 2 functions
#include "libGameKindred.h"




void FUN_00b734d4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00b73554(long *param_1)

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
  long *plVar19;
  long *plVar20;
  long *plVar21;
  float *pfVar22;
  uint *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  long lVar27;
  undefined8 uVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  code *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar27 = tpidr_el0;
  local_90 = *(long *)(lVar27 + 0x28);
  FUN_00b89cd8();
  plVar30 = param_1 + 0x19;
  *param_1 = (long)&PTR_FUN_027e5ea0;
  FUN_00f017e8(plVar30);
  plVar1 = param_1 + 0x2a;
  *plVar30 = (long)&PTR_FUN_027c1f80;
  FUN_00f11234();
  plVar2 = param_1 + 0x5e;
  FUN_00ecfd6c(plVar2,0);
  FUN_00b2a3e4(param_1 + 0x105,0);
  plVar3 = param_1 + 0x285;
  FUN_00f0d160();
  plVar4 = param_1 + 0x2ab;
  FUN_00abaee8(plVar4,0);
  FUN_00b1dc5c();
  FUN_00b1c70c(param_1 + 0x4d8);
  plVar5 = param_1 + 0x8c8;
  FUN_00f017e8(plVar5);
  param_1[0x8c8] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  FUN_00f11234();
  FUN_00ecfd6c(param_1 + 0x92b,0);
  plVar6 = param_1 + 0x9d2;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0x9f0;
  FUN_00f017e8(plVar7);
  plVar8 = param_1 + 0xa01;
  param_1[0x9f0] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar9 = param_1 + 0xa1f;
  FUN_00f0d160();
  plVar10 = param_1 + 0xa47;
  param_1[0xa46] = 0;
  param_1[0xa45] = 0;
  FUN_00f0d160();
  plVar11 = param_1 + 0xa6d;
  FUN_00f0e4a8();
  plVar12 = param_1 + 0xa8b;
  FUN_00ab6c24(plVar12,0);
  plVar13 = param_1 + 0xd43;
  FUN_00ab6c24(plVar13,0);
  plVar14 = param_1 + 0xffb;
  FUN_00ab6c24(plVar14,0);
  plVar15 = param_1 + 0x12b3;
  FUN_00f0d160();
  plVar16 = param_1 + 0x12d9;
  FUN_00f0e4a8();
  plVar17 = param_1 + 0x12f7;
  FUN_00f017e8(plVar17);
  lVar31 = 0;
  *plVar17 = (long)&PTR_FUN_027c1f80;
  do {
    FUN_00b77240((long)param_1 + lVar31 + 0x9840);
    lVar31 = lVar31 + 0x2f0;
  } while (lVar31 != 0x5e0);
  plVar18 = param_1 + 0x13c4;
  FUN_00f0e4a8();
  plVar19 = param_1 + 0x13e2;
  FUN_00f11234();
  plVar20 = param_1 + 0x1416;
  FUN_00f017e8(plVar20);
  plVar21 = param_1 + 0x1427;
  *plVar20 = (long)&PTR_FUN_027c1f80;
  FUN_00ab6c24(plVar21,0);
  FUN_00b30820();
  FUN_00b1ec58(param_1 + 0x266b,0);
  FUN_00b27c04(param_1 + 0x26f7,0);
  param_1[0x2716] = 0;
  param_1[0x2715] = 0;
  param_1[0x2714] = 0;
  *(undefined4 *)(param_1 + 0x2717) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x138bc) = 0;
  *(undefined1 *)((long)param_1 + 0x138be) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar30,1);
  FUN_00f023ec(plVar30,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00ed026c(plVar2,param_1 + 0x36a,1);
  FUN_00ed026c(plVar2,param_1 + 0x4d8,1);
  FUN_00ed026c(plVar2,param_1 + 0x105,1);
  FUN_00ed026c(plVar2,plVar3,1);
  FUN_00ed026c(plVar2,plVar12,1);
  FUN_00ed026c(plVar2,plVar13,1);
  FUN_00ed026c(plVar2,plVar5,1);
  FUN_00f023ec(plVar5,param_1 + 0x8f7,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar5,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar5,plVar10,1);
  FUN_00f023ec(plVar5,plVar11,1);
  FUN_00f023ec(plVar5,plVar17,1);
  lVar31 = 0;
  do {
    FUN_00f023ec(plVar17,(long)param_1 + lVar31 + 0x9840,1);
    lVar31 = lVar31 + 0x2f0;
  } while (lVar31 != 0x5e0);
  FUN_00ed026c(plVar2,plVar15,1);
  FUN_00ed026c(plVar2,plVar16,1);
  FUN_00ed026c(plVar2,plVar14,1);
  FUN_00ed026c(plVar2,param_1 + 0x266b,1);
  FUN_00ed026c(plVar2,param_1 + 0x26f7,1);
  FUN_00f023ec(plVar30,plVar18,1);
  FUN_00f023ec(plVar30,plVar19,1);
  FUN_00f023ec(plVar19,plVar20,1);
  FUN_00f023ec(plVar20,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x16df,1);
  FUN_00f112f0(plVar1,1);
  FUN_00ed04d8(plVar2,0,1);
  FUN_00f0d9a4(plVar3,0);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bee7fa);
  FUN_00f0e578(param_1 + 0x346,"edit_handle");
  *(uint *)((long)param_1 + 0x19c4) = *(uint *)((long)param_1 + 0x19c4) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar4);
  uVar29 = *(uint *)((long)param_1 + 0x15dc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x15dc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar4);
  }
  uVar24 = DAT_03210c64;
  local_c0 = FUN_00b74244;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0x2ac,&local_c0);
  uVar28 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_OVERVIEW_ACCEPT",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar12,0,uVar28,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_c0 = FUN_00b74288;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0xa8c,&local_c0);
  FUN_00b0914c(plVar12,1);
  uVar28 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_OVERVIEW_DECLINE",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar13,0,uVar28,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_c0 = thunk_FUN_00b751f0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0xd44,&local_c0);
  FUN_00b0914c(plVar13,1);
  FUN_00f0e548(param_1 + 0x8d9,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x474c);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x474c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_0091ada4(param_1 + 0x8d9);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar29 = *(uint *)((long)param_1 + 0x4f14);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4f14) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x508c);
  if ((uVar29 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x508c) = uVar29 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0d378(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  uVar29 = *(uint *)((long)param_1 + 0x517c);
  if ((uVar29 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x517c) = uVar29 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar9);
  }
  uVar28 = FUN_00e6ce7c("MENU_USERTEAM_HEADER_STATUS",0);
  FUN_00f0d75c(plVar9,uVar28);
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar28 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_HOW_TO_ADD",0);
  FUN_00f0d75c(plVar10,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x52bc);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x52bc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_team_outline");
  uVar29 = *(uint *)((long)param_1 + 0x53ec);
  if ((uVar29 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x53ec) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x3300;
    FUN_0091ada4(plVar11);
  }
  pfVar22 = (float *)(param_1 + 0xa76);
  if ((*pfVar22 != 0.9) || (*(float *)((long)param_1 + 0x53b4) != 0.9)) {
    pfVar22[0] = 0.9;
    pfVar22[1] = 0.9;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0d92c(plVar15,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar28 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_MORE_OPTIONS",0);
  FUN_00f0d75c(plVar15,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x961c);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x961c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_0091ada4(plVar15);
  }
  FUN_00f0e548(plVar16,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
  uVar29 = *(uint *)((long)param_1 + 0x974c);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x974c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_0091ada4(plVar16);
  }
  uVar28 = FUN_00e6ce7c("MENU_PROFILE_USERTEAM_OVERVIEW_LEAVE",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar14,0,uVar28,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_c0 = thunk_FUN_00b752e0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0xffc,&local_c0);
  FUN_00b0914c(plVar14,1);
  uVar28 = FUN_00e6ce7c("USERTEAM_OVERVIEW_LABEL_MEMBER_COUNT",0);
  FUN_00f0d75c(param_1 + 0x1319,uVar28);
  uVar28 = FUN_00e6ce7c("USERTEAM_OVERVIEW_LABEL_WINS",0);
  FUN_00f0d75c(param_1 + 0x1377,uVar28);
  FUN_00f0e548(plVar18,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  puVar23 = (uint *)((long)param_1 + 0x9ea4);
  uVar29 = *puVar23;
  if ((uVar29 & 0x7f80) != 0x6600) {
    *puVar23 = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_0091ada4(plVar18);
    uVar29 = *puVar23;
  }
  uVar25 = DAT_03210f60;
  *puVar23 = uVar29 & 0xfffffffb | 0x10;
  local_c0 = FUN_00b742bc;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar25;
  FUN_009693a0(param_1 + 0x13c5,&local_c0);
  local_c0 = FUN_00b742bc;
  uVar26 = DAT_03210f8c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 0x13c5,&local_c0);
  *(uint *)((long)param_1 + 0x9f94) = *(uint *)((long)param_1 + 0x9f94) & 0xfffffffb;
  FUN_00f112f0(plVar19,1);
  uVar28 = FUN_00e6ce7c("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42800000,0,0x447a0000,plVar21,0,uVar28,&local_c0,&DAT_03218ef8,0);
  FUN_00b09454(plVar21,1);
  FUN_00b09144(0x3e4ccccd,plVar21);
  if ((*(float *)(param_1 + 0x1431) != 0.5) || (*(float *)((long)param_1 + 0xa18c) != 0.5)) {
    param_1[0x1431] = 0x3f0000003f000000;
    FUN_0091ada4(plVar21);
  }
  local_c0 = thunk_FUN_00b76e38;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0x1428,&local_c0);
  FUN_00b742d4(param_1,param_1 + 0x16df,plVar30,0,1);
  local_c0 = FUN_00b7451c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar24;
  FUN_009693a0(param_1 + 0x16f7,&local_c0);
  local_c0 = thunk_FUN_00b76fa8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar25;
  FUN_009693a0(param_1 + 0x267d,&local_c0);
  local_c0 = thunk_FUN_00b76fa8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  plStack_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 0x267d,&local_c0);
  if (*(long *)(lVar27 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

