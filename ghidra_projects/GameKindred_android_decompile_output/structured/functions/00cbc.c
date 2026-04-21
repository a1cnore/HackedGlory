// functions/00cbc — 10 functions
#include "libGameKindred.h"




void FUN_00cbc03c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  fVar3 = local_40 + -100.0;
  uVar2 = FUN_00b07b80(fStack_3c + -200.0,param_1);
  local_48 = CONCAT44(fVar3,uVar2);
  FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf8),&local_48);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbc100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280ad00;
  FUN_00948d58(param_1 + 0x3a0);
  param_1[0x39e] = &PTR___cxa_pure_virtual_027ecb50;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbc164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280ad00;
  FUN_00948d58(param_1 + 0x3a0);
  param_1[0x39e] = &PTR___cxa_pure_virtual_027ecb50;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbc1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3108);
  FUN_00cbc244(pvVar1,param_1);
  FUN_00b07a80(*param_4,param_4[1],pvVar1);
  FUN_00aa18e0(pvVar1,"HERO_VIEWER",1,0,1);
  return;
}




void FUN_00cbc238(void)

{
  FUN_00aa1954("HERO_VIEWER");
  return;
}




void FUN_00cbc244(long *param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong *puVar16;
  byte *pbVar17;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  code *local_a0;
  long *plStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar13 = tpidr_el0;
  local_70 = *(long *)(lVar13 + 0x28);
  FUN_00b06f74();
  param_1[0x39f] = 0;
  param_1[0x39e] = 0;
  *param_1 = (long)&PTR_FUN_0280ae30;
  FUN_00befa80(param_1 + 0x3a0);
  plVar2 = param_1 + 0x3a3;
  FUN_00f017e8();
  plVar3 = param_1 + 0x3b4;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x3da;
  FUN_00f0d160(plVar4);
  plVar1 = param_1 + 0x400;
  FUN_00f0d160(plVar1);
  plVar5 = param_1 + 0x426;
  FUN_00f13ca4(plVar5);
  FUN_00f1306c();
  FUN_00f0d160();
  FUN_00abaee8(param_1 + 0x48e,0);
  plVar6 = param_1 + 0x54d;
  FUN_00b1a1c4(plVar6);
  FUN_00befb90(param_1 + 0x3a0,param_2);
  FUN_00c6156c(param_1[0x3a1],param_4 & 1);
  FUN_00b0780c(param_1,param_1[0x3a1]);
  FUN_00b075b8(param_1,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  pbVar17 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar17 = param_2 + 1;
  }
  lVar14 = FUN_00ce9cb8(pbVar17);
  uVar15 = FUN_00e6ce7c(*(undefined8 *)(lVar14 + 0x28),0);
  FUN_00f0d75c(plVar3,uVar15);
  uVar15 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_SKINS",0);
  FUN_00f0d75c(plVar4,uVar15);
  uVar15 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
  FUN_00f0d75c(plVar1,uVar15);
  FUN_0090dab8(local_d0,"TALENTS.UPGRADE.",param_2);
  puVar16 = (ulong *)FUN_0090de84(local_d0,&DAT_01bb05c9,2);
  local_90 = (void *)puVar16[2];
  plStack_98 = (long *)puVar16[1];
  local_a0 = (code *)*puVar16;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  FUN_008fcdb8(local_b8,&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  FUN_0090dab8(local_e8,"TALENTS.NEWTALENT.",param_2);
  puVar16 = (ulong *)FUN_0090de84(local_e8,&DAT_01bb05c9,2);
  local_90 = (void *)puVar16[2];
  plStack_98 = (long *)puVar16[1];
  local_a0 = (code *)*puVar16;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = 0;
  FUN_008fcdb8(local_d0,&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  pvVar8 = (void *)((ulong)local_b8 | 1);
  if ((local_b8[0] & 1) != 0) {
    pvVar8 = local_a8;
  }
  FUN_00b1a8e8(plVar6,pvVar8);
  pvVar8 = (void *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    pvVar8 = local_c0;
  }
  FUN_00b1a8e8(plVar6,pvVar8);
  uVar9 = DAT_03210f60;
  local_a0 = thunk_FUN_00cbd080;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x3b5,&local_a0);
  local_a0 = thunk_FUN_00cbd080;
  uVar10 = DAT_03210f8c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1 + 0x3b5,&local_a0);
  local_a0 = thunk_FUN_00cbd0d8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x3db,&local_a0);
  local_a0 = thunk_FUN_00cbd0d8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1 + 0x3db,&local_a0);
  local_a0 = thunk_FUN_00cbd130;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x401,&local_a0);
  local_a0 = thunk_FUN_00cbd130;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1 + 0x401,&local_a0);
  uVar11 = *(uint *)((long)param_1 + 0x1f54);
  uVar12 = *(uint *)((long)param_1 + 0x2084);
  *(uint *)((long)param_1 + 0x1e24) = *(uint *)((long)param_1 + 0x1e24) | 0x10;
  uVar7 = ~param_4 & 1;
  *(uint *)((long)param_1 + 0x1f54) =
       uVar11 & 0xffffffe0 | uVar11 & 8 | uVar7 << 4 | uVar11 & 3 | uVar7 << 2;
  *(uint *)((long)param_1 + 0x2084) =
       uVar12 & 0xffffffe0 | uVar12 & 8 | uVar7 << 4 | uVar12 & 3 | uVar7 << 2;
  FUN_00f0d7fc(plVar3,&DAT_01bee7fa);
  FUN_00f0d7fc(plVar4,&DAT_01bee7fe);
  FUN_00f0d7fc(plVar1,&DAT_01bee7fe);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00b07828(param_1,plVar2);
  FUN_00f023ec(plVar5,param_1 + 0x43d,1);
  FUN_00f023ec(plVar5,param_1 + 0x468,1);
  FUN_00f023ec(plVar5,param_1 + 0x48e,1);
  FUN_00b07888(param_1,plVar5);
  FUN_00cbc794(param_1,param_2);
  (**(code **)(*param_1 + 0x118))(param_1);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar13 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbc794(void *param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  byte local_130 [16];
  void *local_120;
  byte local_118 [16];
  void *local_108;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  code *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00e80f58();
  if ((uVar8 & 1) == 0) {
    *(uint *)((long)param_1 + 0x21b4) = *(uint *)((long)param_1 + 0x21b4) & 0xfffffffb;
  }
  else {
    FUN_008fcdb8(local_b8,&DAT_0320ffa8);
    FUN_00e81200(local_b8);
    uVar9 = FUN_009e7240();
    FUN_008fcdb8(local_d0,local_b8);
    pbVar12 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar12 = param_2 + 1;
    }
    iVar4 = FUN_009e6cac(uVar9,local_d0,pbVar12);
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    pbVar12 = param_2 + 1;
    iVar5 = 0;
    pcVar13 = (code *)0x0;
    do {
      pcVar10 = (code *)FUN_00a4c67c((long)param_1 + 0x21e8,1);
      pcVar11 = "64x64_hero_mastery_star_outline";
      if (iVar5 < iVar4) {
        pcVar11 = "64x64_hero_mastery_star";
      }
      FUN_00f0e548(pcVar10,PTR_s_build___InventoryCommon_atlas_02be34e0,pcVar11);
      local_a0 = pcVar10;
      FUN_009d6990((long)param_1 + 0x1cf0,&local_a0);
      if (iVar5 != 0) {
        FUN_00f07b18(0,pcVar10,3,pcVar13,1);
        FUN_00f07b18(0,pcVar10,0,pcVar13,0);
      }
      iVar5 = iVar5 + 1;
      pcVar13 = pcVar10;
    } while (iVar5 != 5);
    FUN_00f13238((long)param_1 + 0x21e8);
    if (iVar4 < 5) {
      uVar9 = FUN_009e7240();
      FUN_008fcdb8(local_e8,local_b8);
      pbVar2 = pbVar12;
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      iVar4 = FUN_009e6f30(uVar9,local_e8,pbVar2);
      uVar9 = FUN_009e7240();
      FUN_008fcdb8(local_100,local_b8);
      pbVar2 = pbVar12;
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      iVar5 = FUN_009e7070(uVar9,local_100,pbVar2);
      if ((local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
      uVar9 = FUN_009e7240();
      FUN_008fcdb8(local_118,local_b8);
      pbVar2 = pbVar12;
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      iVar6 = FUN_009e6df0(uVar9,local_118,pbVar2);
      uVar9 = FUN_009e7240();
      FUN_008fcdb8(local_130,local_b8);
      if ((*param_2 & 1) != 0) {
        pbVar12 = *(byte **)(param_2 + 0x10);
      }
      iVar7 = FUN_009e7070(uVar9,local_130,pbVar12);
      if ((local_130[0] & 1) != 0) {
        operator_delete(local_120);
      }
      if ((local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
      FUN_00e70510(&local_a0);
      FUN_00e70e18(&local_a0,&DAT_01bb6d43,iVar4 - iVar5);
      FUN_00e70510(&local_140);
      FUN_00e70e18(&local_140,&DAT_01bb6d43,iVar6 - iVar7);
      thunk_FUN_00e7051c(&local_150,&local_140);
      FUN_00e705c8(&local_160,"/");
      FUN_00e70c34(&local_150,&local_160);
      if (local_158 != (void *)0x0) {
        operator_delete__(local_158);
        local_160 = 0;
        local_158 = (void *)0x0;
      }
      FUN_00e70c34(&local_150,&local_a0);
      lVar1 = (long)param_1 + 0x2340;
      FUN_00f0d75c(lVar1,&local_150);
      FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
      FUN_00f0d7fc(lVar1,&DAT_01bee7fa);
      if (local_148 != (void *)0x0) {
        operator_delete__(local_148);
        local_150 = 0;
        local_148 = (void *)0x0;
      }
      if (local_138 != (void *)0x0) {
        operator_delete__(local_138);
        local_140 = 0;
        local_138 = (void *)0x0;
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = (code *)0x0;
        local_98 = (void *)0x0;
      }
    }
    lVar1 = (long)param_1 + 0x2470;
    FUN_00f0e578((long)param_1 + 0x2948,"circle_button_question");
    if ((~*(uint *)((long)param_1 + 0x24f4) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x24f4) = *(uint *)((long)param_1 + 0x24f4) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    FUN_00b09144(0xbf800000,lVar1);
    local_78 = DAT_03210c64;
    local_a0 = thunk_FUN_00cbd188;
    local_88 = 0;
    uStack_80 = 0;
    local_90 = 0;
    local_98 = param_1;
    FUN_009693a0((long)param_1 + 0x2478,&local_a0);
    if ((*(float *)((long)param_1 + 0x24b8) != 0.7) || (*(float *)((long)param_1 + 0x24bc) != 0.7))
    {
      *(undefined8 *)((long)param_1 + 0x24b8) = 0x3f3333333f333333;
      FUN_0091ada4(lVar1);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbcc0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280ae30;
  if (param_1[0x39f] != 0) {
    *(undefined4 *)(param_1 + 0x39e) = 0;
  }
  param_1[0x54d] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x619);
  FUN_00f0d3a4(param_1 + 0x5f2);
  FUN_00f0d3a4(param_1 + 0x5cc);
  FUN_00f0d3a4(param_1 + 0x5a6);
  param_1[0x588] = &PTR_FUN_028266f0;
  param_1[0x59f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5a2);
  FUN_00f13d08(param_1 + 0x588);
  param_1[0x55e] = &PTR_FUN_02826f38;
  param_1[0x575] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x578);
  FUN_00f13d08(param_1 + 0x55e);
  FUN_00f01868(param_1 + 0x54d);
  param_1[0x529] = &PTR_FUN_028266f0;
  param_1[0x540] = &PTR_FUN_02826850;
  param_1[0x48e] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x543);
  FUN_00f13d08(param_1 + 0x529);
  param_1[0x50b] = &PTR_FUN_028266f0;
  param_1[0x522] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x525);
  FUN_00f13d08(param_1 + 0x50b);
  param_1[0x4ed] = &PTR_FUN_028266f0;
  param_1[0x504] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x507);
  FUN_00f13d08(param_1 + 0x4ed);
  FUN_00f01868(param_1 + 0x4dc);
  FUN_009c825c(param_1 + 0x48e);
  FUN_00f0d3a4(param_1 + 0x468);
  param_1[0x43d] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x454);
  FUN_00f13d08(param_1 + 0x43d);
  FUN_00f13d08(param_1 + 0x426);
  FUN_00f0d3a4(param_1 + 0x400);
  FUN_00f0d3a4(param_1 + 0x3da);
  FUN_00f0d3a4(param_1 + 0x3b4);
  FUN_00f01868(param_1 + 0x3a3);
  FUN_00befad8(param_1 + 0x3a0);
  if ((void *)param_1[0x39f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x39f]);
    param_1[0x39e] = 0;
    param_1[0x39f] = 0;
  }
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbce3c(void *param_1)

{
  FUN_00cbcc0c();
  operator_delete(param_1);
  return;
}




void FUN_00cbce60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&fStack_6c,&local_70);
  local_78 = 0;
  uVar7 = (ulong)(uint)(local_70 + -100.0);
  FUN_00b0877c(param_1,&local_78);
  uVar6 = uVar7;
  uVar5 = FUN_00b07b80(fStack_6c + -200.0,uVar7,param_1);
  FUN_00b07d08(fStack_6c + -200.0,uVar7,param_1,0);
  FUN_00b0828c(param_1);
  FUN_00c61560(*(undefined8 *)(param_1 + 0x1d08),0);
  FUN_00c5fe6c(uVar5,uVar6,*(undefined8 *)(param_1 + 0x1d08));
  lVar2 = param_1 + 0x1ed0;
  lVar3 = param_1 + 0x1da0;
  FUN_00f07b18(0x42900000,lVar2,3,lVar3,1);
  lVar1 = param_1 + 0x2000;
  FUN_00f07b18(0x42400000,lVar1,3,lVar2,1);
  FUN_00f0a674(0,lVar2,lVar3);
  FUN_00f0a674(0,lVar1,lVar3);
  FUN_00f07940(0x40800000,0x40800000,param_1 + 0x2a68,8,lVar1,1);
  lVar1 = param_1 + 0x2340;
  FUN_00f07b18(0xc1200000,lVar1,1,param_1 + 0x2470,3);
  FUN_00f07b18(0,lVar1,5,param_1 + 0x2470,5);
  FUN_00f07b18(0xc1200000,param_1 + 0x21e8,1,lVar1,3);
  FUN_00f07b18(0,param_1 + 0x21e8,5,lVar1,5);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

