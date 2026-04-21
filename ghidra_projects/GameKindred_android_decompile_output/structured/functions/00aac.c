// functions/00aac — 22 functions
#include "libGameKindred.h"




void FUN_00aac01c(long *param_1,uint param_2,ulong param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00f0e628(param_1 + 0x149);
  FUN_00f0e548(param_1 + 0x149,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_ban_symbol");
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) | 4;
  if ((param_3 & 1) == 0) {
    pcVar1 = "MENU_DRAFT_BUTTON_SUGGEST_BAN";
  }
  else {
    pcVar1 = "MENU_DRAFT_BUTTON_BAN";
  }
  uVar2 = FUN_00e6ce7c(pcVar1,0);
  FUN_00c938d4(param_1,uVar2);
  FUN_00c9228c(param_1,5);
  FUN_00f0e670(param_1 + 0xc6,&DAT_01bee802,2);
  FUN_00ecf888(param_1,param_2 & 1);
  if ((param_2 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x158);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x150);
  }
                    /* WARNING: Could not recover jumptable at 0x00aac0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}




void FUN_00aac0ec(long *param_1,uint param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00f0e628(param_1 + 0x149);
  FUN_00f0e548(param_1 + 0x149,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"white_checkmark");
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) | 4;
  uVar1 = FUN_00e6ce7c("MAIN_CHARSELECT_LABEL_LOCKIN",0);
  FUN_00c938d4(param_1,uVar1);
  FUN_00c9228c(param_1,5);
  FUN_00f0e670(param_1 + 0xc6,&DAT_01bee806,2);
  FUN_00ecf888(param_1,param_2 & 1);
  if ((param_2 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x158);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x150);
  }
                    /* WARNING: Could not recover jumptable at 0x00aac1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}




void FUN_00aac1a8(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,"%u",param_3);
  FUN_00f0d75c(param_1 + 0xce0,&local_48);
  FUN_00aac240(param_1,param_2 & 1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aac240(long *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c("MAIN_CHARSELECT_LABEL_REROLL",0);
  FUN_00c938d4(param_1,uVar1);
  FUN_00c9228c(param_1,3);
  FUN_00c938a4(param_1,&DAT_01bee7fa);
  *(uint *)((long)param_1 + 0x564) = *(uint *)((long)param_1 + 0x564) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xbbc) = *(uint *)((long)param_1 + 0xbbc) | 4;
  FUN_00c928d4(param_1);
  FUN_00ecf888(param_1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00aac2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_00aac2dc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x414);
  uVar2 = 0x33;
  if ((param_2 & 1) == 0) {
    uVar2 = 0xff;
  }
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x414) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x390);
  }
  uVar1 = *(uint *)(param_1 + 0x564);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x564) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x4e0);
  }
  uVar1 = *(uint *)(param_1 + 0x6b4);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x6b4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x630);
  }
  uVar1 = *(uint *)(param_1 + 0x98c);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x98c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x908);
  }
  uVar1 = *(uint *)(param_1 + 0xacc);
  uVar2 = 0x33;
  if ((param_2 & 1) == 0) {
    uVar2 = 0xcc;
  }
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0xacc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_0091ada4(param_1 + 0xa48);
  return;
}




void FUN_00aac3d0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  
  FUN_00c936b4();
  if ((*(byte *)((long)param_3 + 0xacc) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_3 + 0xbbc) >> 2 & 1) == 0) {
      return;
    }
    plVar3 = param_3 + 0x121;
    plVar1 = param_3 + 0x167;
    FUN_00f07940(0,0,plVar3,6,param_3,8);
    FUN_00f07b18(0,plVar1,0,plVar3,2);
    uVar2 = 4;
    uVar4 = 4;
  }
  else {
    plVar3 = param_3 + 0x149;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar5 = param_2 / 2.2;
    (**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f13f2c(plVar3,CONCAT44((int)(param_2 / 2.2),(int)fVar5));
    plVar1 = param_3 + 0x121;
    FUN_00f0d4e0(plVar1);
    FUN_00f07940(0,param_2 * -0.5,plVar3,8,param_3,8);
    uVar4 = 2;
    uVar2 = 0;
  }
  FUN_00f07b18(0,plVar1,uVar2,plVar3,uVar4);
  return;
}




void FUN_00aac504(long *param_1)

{
  long *plVar1;
  
  FUN_00f1306c();
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = (long)&PTR_FUN_027d3a30;
  FUN_00f1306c(param_1 + 0x2d);
  plVar1 = param_1 + 0x58;
  FUN_00f0d160(plVar1);
  *(undefined4 *)(param_1 + 0x7e) = 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2d,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  return;
}




void FUN_00aac5a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00aac604(param_1 + 0x158,&local_30);
  FUN_00f133a4(param_1 + 0x168,local_30,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aac604(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00ab1000(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00aac68c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(uint *)(param_1 + 0x158) != 0) {
    plVar3 = *(long **)(param_1 + 0x160);
    lVar2 = (ulong)*(uint *)(param_1 + 0x158) << 3;
    do {
      if (*plVar3 == param_2) {
        uVar1 = FUN_00f02540(param_2);
        if ((uVar1 & 1) != 0) {
          FUN_00f01a4c(*plVar3,1);
        }
        FUN_00ab1080(param_1 + 0x158,plVar3,plVar3 + 1);
        return 1;
      }
      lVar2 = lVar2 + -8;
      plVar3 = plVar3 + 1;
    } while (lVar2 != 0);
  }
  return 0;
}




void FUN_00aac704(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f00238(&fStack_4c,&local_50);
  iVar4 = FUN_0092f28c();
  if (iVar4 == 1) {
    *(undefined4 *)(param_2 + 0x3f0) = 8;
    fVar12 = 8.0;
  }
  else if (fStack_4c / local_50 <= 1.8333334) {
    fVar12 = 4.0;
    *(undefined4 *)(param_2 + 0x3f0) = 4;
  }
  else {
    *(undefined4 *)(param_2 + 0x3f0) = 5;
    fVar12 = 5.0;
  }
  if (*(int *)(param_2 + 0x158) != 0) {
    uVar11 = 0;
    do {
      FUN_00f13f08(param_1 / fVar12,param_1 / fVar12,
                   *(undefined8 *)(*(long *)(param_2 + 0x160) + uVar11 * 8));
      uVar9 = *(uint *)(param_2 + 0x158);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
    if (uVar9 != 0) {
      lVar5 = **(long **)(param_2 + 0x160);
      if ((*(float *)(lVar5 + 0x40) != 0.0) || (*(float *)(lVar5 + 0x44) != 0.0)) {
        *(undefined8 *)(lVar5 + 0x40) = 0;
        FUN_0091ada4();
        uVar9 = *(uint *)(param_2 + 0x158);
      }
      if (1 < uVar9) {
        lVar5 = 0;
        do {
          lVar10 = *(long *)(param_2 + 0x160);
          iVar1 = *(int *)(param_2 + 0x3f0);
          iVar4 = (int)lVar5 + 1;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          if (iVar4 == iVar2 * iVar1) {
            uVar7 = *(undefined8 *)(lVar10 + (ulong)(((int)lVar5 - iVar1) + 1) * 8);
            uVar6 = 4;
            uVar8 = 6;
          }
          else {
            uVar7 = *(undefined8 *)(lVar10 + lVar5 * 8);
            uVar6 = 7;
            uVar8 = 5;
          }
          FUN_00f07940(0,0,*(undefined8 *)(lVar10 + lVar5 * 8 + 8),uVar6,uVar7,uVar8);
          uVar11 = lVar5 + 2;
          lVar5 = lVar5 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x158));
      }
    }
  }
  FUN_00f13238(param_2 + 0x168);
  FUN_00f07940(0,0,param_2 + 0x2c0,6,param_2 + 0x168,4);
  FUN_00f13238(param_2);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00aac8c4(undefined1 param_1 [16],long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  if (*(int *)(param_2 + 0x158) != 0) {
    uVar4 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0x3f0);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (int)uVar4 / iVar1;
      }
      fVar3 = (float)uVar6 + 0.09;
      if ((int)uVar4 != iVar2 * iVar1) {
        fVar3 = (float)uVar6;
      }
      uVar7 = 0;
      uVar6 = (ulong)(uint)fVar3;
      FUN_00aa9e44(uVar6,*(undefined8 *)(*(long *)(param_2 + 0x160) + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x158));
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_00aac93c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00ed66ec();
  *param_1 = (long)&PTR_FUN_027d3358;
  FUN_00aac504(param_1 + 0x145);
  FUN_00aac504(param_1 + 0x1c4);
  FUN_00aac504(param_1 + 0x243);
  plVar1 = param_1 + 0x2c2;
  FUN_00f0c714(plVar1);
  plVar2 = param_1 + 0x2dd;
  FUN_00f0e4a8(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar4 = (long *)FUN_00ed5aa8(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1 + 0x145,1);
  plVar4 = (long *)FUN_00ed5aa8(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1 + 0x1c4,1);
  plVar4 = (long *)FUN_00ed5aa8(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1 + 0x243,1);
  uVar5 = FUN_00e6ce7c("MAIN_CHARSELECT_POSITION_CAPTAIN_PLURAL",0);
  FUN_00f0d75c(param_1 + 0x19d,uVar5);
  uVar5 = FUN_00e6ce7c("MAIN_CHARSELECT_POSITION_JUNGLER_PLURAL",0);
  FUN_00f0d75c(param_1 + 0x21c,uVar5);
  uVar5 = FUN_00e6ce7c("MAIN_CHARSELECT_POSITION_LANER_PLURAL",0);
  FUN_00f0d75c(param_1 + 0x29b,uVar5);
  FUN_00f0c774(plVar1,&DAT_01ba3e58);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) | 2;
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar6 = *(uint *)((long)param_1 + 0x176c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x176c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_0091ada4(plVar2);
    uVar6 = *(uint *)((long)param_1 + 0x176c);
  }
  local_60 = DAT_03210c50;
  *(uint *)((long)param_1 + 0x176c) = uVar6 & 0xffffffbf;
  local_88 = FUN_00aacb88;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aacb88(void)

{
  return;
}




void FUN_00aacb8c(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  plVar1 = param_3 + 0x145;
  FUN_00aac704(uVar3,plVar1);
  plVar2 = param_3 + 0x1c4;
  FUN_00aac704(uVar3,plVar2);
  FUN_00aac704(uVar3,param_3 + 0x243);
  FUN_00f13f08(uVar3,param_2,param_3 + 0x2c2);
  FUN_00f13f08(uVar3,0x432f0000,param_3 + 0x2dd);
  uVar3 = FUN_00ed5aa8(param_3);
  FUN_00f07940(0,0x41c80000,plVar1,4,uVar3,4);
  FUN_00f07940(0,0,plVar2,4,plVar1,6);
  FUN_00f07940(0,0,param_3 + 0x243,4,plVar2,6);
  FUN_00f07940(0,0,param_3 + 0x2dd,6,param_3,6);
  return;
}




void FUN_00aaccbc(long param_1)

{
  FUN_00aac8c4(0x3e800000,param_1 + 0xa28);
  FUN_00aac8c4(param_1 + 0xe20);
  FUN_00aac8c4(param_1 + 0x1218);
  return;
}




void * FUN_00aaccf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   int param_5,uint param_6,uint param_7)

{
  long lVar1;
  void *pvVar2;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x13c0);
  FUN_00aa8f80();
  *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
  FUN_00aa9930(pvVar2,param_3,param_4,param_7 & 1);
  if ((param_6 & 1) != 0) {
    FUN_00aa9da4(pvVar2,param_2);
  }
  if (param_5 == 5) {
    local_70 = pvVar2;
    FUN_00aac604(param_1 + 0x1370,&local_70);
    param_1 = param_1 + 0x1380;
  }
  else if (param_5 == 1) {
    local_70 = pvVar2;
    FUN_00aac604(param_1 + 0xf78,&local_70);
    param_1 = param_1 + 0xf88;
  }
  else {
    if (param_5 != 0) goto LAB_00aacdf0;
    local_70 = pvVar2;
    FUN_00aac604(param_1 + 0xb80,&local_70);
    param_1 = param_1 + 0xb90;
  }
  FUN_00f133a4(param_1,local_70,1);
LAB_00aacdf0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aace28(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00aac68c(param_1 + 0xa28);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00aac68c(param_1 + 0xe20,param_2), (uVar1 & 1) == 0)) {
    FUN_00aac68c(param_1 + 0x1218,param_2);
    return;
  }
  return;
}




void FUN_00aace7c(undefined8 param_1)

{
  FUN_00ed5634();
  FUN_00aacb8c(param_1);
  FUN_00ed5688(param_1);
  return;
}




void FUN_00aacea8(void)

{
  return;
}




void FUN_00aaceac(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = param_3 + 0xb8;
  fVar2 = (float)FUN_00f0eaf4(lVar1);
  FUN_00f13f08(fVar2 * 0.66,param_2 * 1.2,lVar1);
  FUN_00f13f08(fVar2 * 0.66,param_2 * 1.2,param_3 + 0x1a8);
  FUN_00f07940(0x3fc00000,0x42c80000,lVar1,5,param_3,7);
  FUN_00f07940(0xbfc00000,0x42c80000,param_3 + 0x1a8,7,param_3,5);
  return;
}




void FUN_00aacf60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d34f0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"generic_edge_glow");
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 1;
  FUN_00f0e548(plVar2,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"generic_edge_glow");
  return;
}

