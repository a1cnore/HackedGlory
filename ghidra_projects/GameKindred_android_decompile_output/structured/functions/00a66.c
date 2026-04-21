// functions/00a66 — 9 functions
#include "libGameKindred.h"




void FUN_00a66040(long param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = FUN_00ced270(param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(param_1 + 0xd0) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0xd0) + 0x260) == param_2)) {
    FUN_00a62fa0(param_1);
    lVar4 = FUN_00d9ebe8(*(undefined8 *)(param_1 + 0xd0));
    pcVar5 = "HUD_CHOOSE_A_BUILD_BUTTON";
    if (lVar4 == 0) {
      uVar8 = 1;
    }
    else {
      bVar2 = *(int *)(lVar4 + 0x28) == 0xfe;
      uVar8 = (uint)bVar2;
      if (!bVar2) {
        pcVar5 = "HUD_SWITCH_BUILD_BUTTON";
      }
    }
    uVar6 = FUN_00e6ce7c(pcVar5,0);
    FUN_00ab7498(param_1 + 0x24da8,uVar6);
    piVar1 = (int *)(param_1 + 0x298dc);
    iVar7 = *piVar1;
    *(uint *)(param_1 + 0x263ec) =
         *(uint *)(param_1 + 0x263ec) & 0xfffffff8 |
         *(uint *)(param_1 + 0x263ec) & 3 | ((uint)(iVar7 == 0) & (uVar8 ^ 1)) << 2;
    if (lVar4 != 0) {
      if (uVar8 == 0) {
        FUN_00a65b3c(param_1,lVar4);
        iVar7 = *piVar1;
      }
      if (iVar7 == 0) {
        FUN_00a63a44(param_1);
        if ((*(long *)(param_1 + 0x24da0) != 0) && (*piVar1 == 0)) {
          FUN_00a64104(param_1,*(undefined4 *)(*(long *)(param_1 + 0x24da0) + 0x63c));
        }
      }
      FUN_00a6617c(param_1);
      return;
    }
  }
  return;
}




void FUN_00a6617c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0xd0) != 0) {
    for (lVar3 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_03130aa8) {
        uVar1 = *(uint *)(param_1 + 0x298e0);
        uVar4 = (ulong)uVar1;
        if (uVar1 != 0) {
          uVar5 = 0;
          do {
            lVar3 = *(long *)(param_1 + 0x265f8 + uVar5 * 8);
            if (lVar3 != 0) {
              local_50 = 0;
              FUN_00d7505c(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(lVar3 + 0x63c),
                           (long)&local_50 + 4,&local_50);
              FUN_00a61728(*(undefined8 *)(param_1 + 0x265f8 + uVar5 * 8),local_50._4_4_,
                           local_50 & 0xffffffff);
              uVar4 = (ulong)*(uint *)(param_1 + 0x298e0);
            }
            uVar5 = uVar5 + 1;
          } while ((uVar5 < 8) && (uVar5 < uVar4));
        }
        break;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a66270(long param_1,undefined4 param_2,int param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced270(param_2);
  if ((uVar1 & 1) != 0) {
    if ((0 < param_4) && (*(int *)(param_1 + 0x298d4) == param_3)) {
      *(undefined1 *)(param_1 + 0x298e4) = 1;
      *(undefined4 *)(param_1 + 0x298d0) = 0x3e99999a;
    }
    FUN_00a6617c(param_1);
    return;
  }
  return;
}




void FUN_00a662fc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = 0;
  local_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  uStack_8c = 0;
  local_94 = 0;
  local_9c = 0;
  local_98 = 0xffffffff;
  local_a4 = 0;
  uStack_ac = 0;
  local_b4 = 0;
  uStack_bc = 0;
  local_c4 = 0;
  uStack_cc = 0;
  local_d4 = 0;
  local_d8 = 0xffffffff;
  local_e0 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  uVar2 = FUN_00a60ab4(param_2);
  FUN_00d74f6c(uVar5,uVar2,0,&local_98,(long)&local_e0 + 4);
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  uVar2 = FUN_00a60ab4(param_2);
  FUN_00d74f6c(uVar5,uVar2,1,&local_d8,&local_e0);
  if ((local_e0._4_4_ != 0) && ((param_3 & 1) != 0)) {
    uVar6 = 0;
    do {
      lVar3 = FUN_00a641a4(param_1,(&local_98)[uVar6]);
      if (lVar3 != 0) {
        lVar4 = FUN_00a60aac(param_2);
        FUN_00a664dc(param_1,*(undefined4 *)(lVar4 + 0x30),param_2,lVar3);
        lVar4 = FUN_00a60aac(lVar3);
        if (*(int *)(lVar4 + 0x30) < 3) {
          FUN_00a662fc(param_1,lVar3,1,0);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_e0 >> 0x20);
  }
  if (((int)local_e0 != 0) && ((param_4 & 1) != 0)) {
    uVar6 = 0;
    do {
      lVar3 = FUN_00a641a4(param_1,(&local_d8)[uVar6]);
      if (lVar3 != 0) {
        lVar4 = FUN_00a60aac(lVar3);
        FUN_00a664dc(param_1,*(undefined4 *)(lVar4 + 0x30),lVar3,param_2);
        lVar4 = FUN_00a60aac(lVar3);
        if (1 < *(int *)(lVar4 + 0x30)) {
          FUN_00a662fc(param_1,lVar3,0,1);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (local_e0 & 0xffffffff));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a664dc(long param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = 0;
  plVar2 = (long *)(param_1 + (ulong)(param_2 - 1) * 0x200 + 0xf8);
  while ((plVar2[-1] != 0 || (*plVar2 != 0))) {
    uVar1 = uVar1 + 1;
    plVar2 = plVar2 + 2;
    if (0x1f < uVar1) {
      return;
    }
  }
  plVar2[-1] = param_3;
  *plVar2 = param_4;
  FUN_00a60a88(param_3,1);
  FUN_00a60a88(param_4,1);
  return;
}




void FUN_00a6654c(long *param_1)

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
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar19 = tpidr_el0;
  local_78 = *(long *)(lVar19 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027cc7e8;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x44;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x55;
  param_1[0x44] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x73;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x91;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0xaf;
  FUN_00f0d160();
  plVar7 = param_1 + 0xd5;
  FUN_00f017e8(plVar7);
  plVar8 = param_1 + 0xe6;
  param_1[0xd5] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x10c;
  FUN_00f0d160();
  plVar10 = param_1 + 0x132;
  FUN_00ab6c24(plVar10,1);
  plVar11 = param_1 + 0x3ea;
  FUN_00ab6c24(plVar11,1);
  plVar12 = param_1 + 0x6a2;
  FUN_00f017e8(plVar12);
  param_1[0x6a2] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  lVar21 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar21 + 0x36c8);
    lVar21 = lVar21 + 0xf0;
  } while (lVar21 != 0x4b0);
  plVar13 = param_1 + 0x76f;
  FUN_00f017e8(plVar13);
  plVar14 = param_1 + 0x780;
  param_1[0x76f] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar14);
  param_1[0x7a6] = 0;
  *(undefined4 *)(param_1 + 0x7a7) = DAT_03214ce8;
  FUN_00e70510(param_1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7aa) = 0;
  *(undefined8 *)((long)param_1 + 0x3d54) = 0;
  *(undefined4 *)((long)param_1 + 0x3d5c) = 5;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar7,1);
  FUN_00f023ec(plVar2,plVar6,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar10,1);
  FUN_00f023ec(plVar7,plVar11,1);
  FUN_00f023ec(plVar2,plVar12,1);
  FUN_00f023ec(plVar12,param_1 + 0x6b3,1);
  FUN_00f023ec(plVar2,plVar13,1);
  FUN_00f023ec(plVar13,plVar14,1);
  lVar21 = 0;
  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x10;
  *(uint *)((long)param_1 + 0x50c) = *(uint *)((long)param_1 + 0x50c) | 0x10;
  do {
    lVar15 = (long)param_1 + lVar21 + 0x36c8;
    FUN_00f023ec(plVar12,lVar15,1);
    FUN_00f0e548(lVar15,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_surrender_pending");
    lVar21 = lVar21 + 0xf0;
  } while (lVar21 != 0x4b0);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"surrender_box_top");
  uVar16 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar16 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x32c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6b00;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar16 = *(uint *)((long)param_1 + 0x41c);
  if ((uVar16 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x41c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6b00;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"surrender_box_top");
  uVar16 = *(uint *)((long)param_1 + 0x50c);
  if ((uVar16 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x50c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6b00;
    FUN_0091ada4(plVar5);
  }
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) | 2;
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  uVar20 = FUN_00e6ce7c("HUD_SURRENDER_VOTE_EXPLAIN",0);
  FUN_00f0d75c(plVar8,uVar20);
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  FUN_00e705c8(&local_a8,"15");
  FUN_00f0d75c(plVar6,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  uVar20 = FUN_00e6ce7c("HUD_SURRENDER_HOLD_TO_CONFIRM",0);
  FUN_00f0d75c(plVar9,uVar20);
  if ((*(uint *)((long)param_1 + 0x8e4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x8e4) = *(uint *)((long)param_1 + 0x8e4) & 0xffff807f;
    FUN_0091ada4(plVar9);
  }
  uVar16 = *(uint *)((long)param_1 + 0x3594);
  *(uint *)((long)param_1 + 0x3594) = uVar16 & 0xfffffffb;
  if ((uVar16 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3594) = uVar16 & 0xffff807b;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0d92c(param_1 + 0x6b3,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  *(uint *)((long)param_1 + 0x3bfc) = *(uint *)((long)param_1 + 0x3bfc) & 0xfffffffb;
  FUN_00f0d92c(plVar14,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  local_a8._0_4_ = 0xffc0c0c0;
  FUN_00ab703c(0,0x42600000,0x42600000,plVar11,2,&DAT_03210450,&local_a8,&DAT_03218ef8,0);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffc0c0c0);
  FUN_00ab703c(0,0x42600000,0x42600000,plVar10,1,&DAT_03210450,&local_a8,&DAT_03218ef8,0);
  if ((*(float *)(param_1 + 0x4fd) != 0.41379312) ||
     (*(float *)((long)param_1 + 0x27ec) != 0.41379312)) {
    param_1[0x4fd] = 0x3ed3dcb13ed3dcb1;
    FUN_0091ada4(param_1 + 0x4f4);
  }
  FUN_00ab7588(0x3f800000,plVar11,&DAT_01bee7f6);
  FUN_00ab7588(0x3f800000,plVar10,&DAT_01bee7f6);
  uVar17 = DAT_03210f60;
  local_a8 = FUN_00a66c88;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar17;
  FUN_009693a0(param_1 + 0x3eb,&local_a8);
  local_a8 = FUN_00a66c88;
  uVar18 = DAT_03210f8c;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar18;
  FUN_009693a0(param_1 + 0x3eb,&local_a8);
  local_a8 = FUN_00a66c88;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  local_a0 = param_1;
  local_80 = uVar17;
  FUN_009693a0(param_1 + 0x133,&local_a8);
  local_a8 = FUN_00a66c88;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  local_a0 = param_1;
  local_80 = uVar18;
  FUN_009693a0(param_1 + 0x133,&local_a8);
  local_a8 = thunk_FUN_00a69688;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar17;
  FUN_009693a0(param_1 + 0x74,&local_a8);
  local_a8 = thunk_FUN_00a69688;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar18;
  FUN_009693a0(param_1 + 0x74,&local_a8);
  local_a8 = thunk_FUN_00a69688;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar17;
  FUN_009693a0(param_1 + 0x92,&local_a8);
  local_a8 = thunk_FUN_00a69688;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar18;
  FUN_009693a0(param_1 + 0x92,&local_a8);
  if (*(long *)(lVar19 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a66c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a6963c(param_1,param_4,param_5);
  return;
}




void FUN_00a66c98(long param_1,long param_2)

{
  *(long *)(param_1 + 0x3d30) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x3d38) = *(undefined4 *)(param_2 + 0x30);
  FUN_00a66cac();
  return;
}




void FUN_00a66cac(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  long lVar8;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((*(float *)(param_1 + 0x34) != 1.5) || (*(float *)((long)param_1 + 0x1a4) != 1.5)) {
    lVar8 = NEON_fmov(0x3fc00000,4);
    param_1[0x34] = lVar8;
    FUN_0091ada4(param_1 + 0x2b);
  }
  if ((*(float *)(param_1 + 0x4c) != -153.0) || (*(float *)((long)param_1 + 0x264) != -280.0)) {
    param_1[0x4c] = -0x3c73ffff3ce70000;
    FUN_0091ada4(param_1 + 0x44);
  }
  if ((*(float *)(param_1 + 0x5d) != 0.0) || (*(float *)((long)param_1 + 0x2ec) != 0.0)) {
    param_1[0x5d] = 0;
    FUN_0091ada4(param_1 + 0x55);
  }
  local_80 = 0x3f80000000000000;
  (**(code **)(param_1[0x55] + 0x28))(param_1 + 0x55,&local_80);
  if ((*(float *)(param_1 + 0x7b) != 2.0) || (*(float *)((long)param_1 + 0x3dc) != 0.0)) {
    param_1[0x7b] = 0x40000000;
    FUN_0091ada4(param_1 + 0x73);
  }
  FUN_00f13f08(0x43970000,0x438c0000,param_1 + 0x73);
  if ((*(float *)(param_1 + 0x99) != 0.0) || (*(float *)((long)param_1 + 0x4cc) != 280.0)) {
    param_1[0x99] = 0x438c000000000000;
    FUN_0091ada4(param_1 + 0x91);
  }
  plVar5 = param_1 + 0xe6;
  if ((*(float *)(param_1 + 0xee) != 153.0) || (*(float *)((long)param_1 + 0x774) != 58.0)) {
    param_1[0xee] = 0x4268000043190000;
    FUN_0091ada4(plVar5);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0xe6] + 0x28))(plVar5,&local_80);
  FUN_00f0dad0(0x43840000,plVar5,1);
  FUN_00f0dac8(plVar5,3);
  plVar5 = param_1 + 0x10c;
  if ((*(float *)(param_1 + 0x114) != 153.0) || (*(float *)((long)param_1 + 0x8a4) != 58.0)) {
    param_1[0x114] = 0x4268000043190000;
    FUN_0091ada4(plVar5);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0x10c] + 0x28))(plVar5,&local_80);
  FUN_00f0dad0(0x43840000,plVar5,1);
  FUN_00f0dac8(plVar5,3);
  plVar5 = param_1 + 0x6b3;
  if ((*(float *)(param_1 + 0x6bb) != 153.0) || (*(float *)((long)param_1 + 0x35dc) != 58.0)) {
    param_1[0x6bb] = 0x4268000043190000;
    FUN_0091ada4(plVar5);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0x6b3] + 0x28))(plVar5,&local_80);
  FUN_00f0dad0(0x43840000,plVar5,1);
  FUN_00f0dac8(plVar5,3);
  plVar5 = param_1 + 0x780;
  if ((*(float *)(param_1 + 0x788) != 153.0) || (*(float *)((long)param_1 + 0x3c44) != 58.0)) {
    param_1[0x788] = 0x4268000043190000;
    FUN_0091ada4(plVar5);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0x780] + 0x28))(plVar5,&local_80);
  FUN_00f0dad0(0x43840000,plVar5,1);
  FUN_00f0dac8(plVar5,3);
  if ((*(float *)(param_1 + 0xb7) != 153.0) || (*(float *)((long)param_1 + 0x5bc) != 140.0)) {
    param_1[0xb7] = 0x430c000043190000;
    FUN_0091ada4(param_1 + 0xaf);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0xaf] + 0x28))(param_1 + 0xaf,&local_80);
  if ((*(float *)(param_1 + 0x3f2) != 84.0) || (*(float *)((long)param_1 + 0x1f94) != 214.0)) {
    param_1[0x3f2] = 0x4356000042a80000;
    FUN_0091ada4(param_1 + 0x3ea);
  }
  if ((*(float *)(param_1 + 0x13a) != 222.0) || (*(float *)((long)param_1 + 0x9d4) != 214.0)) {
    param_1[0x13a] = 0x43560000435e0000;
    FUN_0091ada4(param_1 + 0x132);
  }
  uVar2 = FUN_00ceace8();
  uVar3 = FUN_00ceafec(uVar2,1);
  uVar6 = 0;
  *(int *)((long)param_1 + 0x3d5c) = (int)uVar3;
  if ((int)uVar3 != 0) {
    plVar5 = param_1 + 0x6d9;
    do {
      fVar7 = ((float)(uVar6 & 0xffffffff) * 264.0) / (float)(int)uVar3 +
              132.0 / (float)(int)uVar3 + 21.0;
      if ((*(float *)(plVar5 + 8) != fVar7) || (*(float *)((long)plVar5 + 0x44) != 214.0)) {
        *(float *)(plVar5 + 8) = fVar7;
        *(undefined4 *)((long)plVar5 + 0x44) = 0x43560000;
        FUN_0091ada4(plVar5);
      }
      local_80 = 0x3f0000003f000000;
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_80);
      uVar3 = (ulong)*(uint *)((long)param_1 + 0x3d5c);
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 0x1e;
    } while (uVar6 < uVar3);
    if (4 < (uint)uVar6) goto LAB_00a6719c;
  }
  lVar8 = 5 - uVar6;
  puVar4 = (uint *)((long)param_1 + uVar6 * 0xf0 + 0x374c);
  do {
    lVar8 = lVar8 + -1;
    *puVar4 = *puVar4 & 0xfffffffb;
    puVar4 = puVar4 + 0x3c;
  } while (lVar8 != 0);
LAB_00a6719c:
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

