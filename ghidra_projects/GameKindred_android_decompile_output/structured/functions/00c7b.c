// functions/00c7b — 10 functions
#include "libGameKindred.h"




int FUN_00c7b074(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  
  if ((float)param_2 + -64.0 <= 0.0) {
    iVar1 = 100;
  }
  else {
    uVar2 = FUN_00f0d704(param_1 + 0x338);
    fVar3 = (float)(uVar2 >> 0x20) + 64.0;
    if ((*(byte *)(param_1 + 0x4ec) >> 2 & 1) != 0) {
      iVar1 = FUN_00f0d678(param_1 + 0x468,(int)((float)param_2 + -64.0));
      fVar3 = fVar3 + (float)iVar1 + 4.0;
    }
    iVar1 = (int)fVar3;
  }
  return iVar1;
}




void FUN_00c7b100(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_00f13ca4();
  plVar4 = param_1 + 0x18;
  *param_1 = (long)&PTR_FUN_02802e00;
  FUN_00f0e4a8(plVar4);
  plVar1 = param_1 + 0x36;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x54;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x7a;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bbecec,2);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bbecec,2);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bbece8);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bbece4);
  return;
}




void FUN_00c7b264(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  
  FUN_00f0d548(param_3 + 0x2a0);
  fVar1 = param_2;
  FUN_00f0d548(param_3 + 0x3d0);
  FUN_00f13f08(param_1,param_2 + fVar1,param_3);
  return;
}




void FUN_00c7b2ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  FUN_00f13db4();
  plVar3 = param_1 + 0x18;
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  plVar1 = param_1 + 0x54;
  fVar5 = (float)FUN_00f0d548(plVar1);
  fVar4 = (fVar4 - fVar5) * 0.5 + -12.0;
  FUN_00f13f08(fVar4,0x40c00000,plVar3);
  plVar2 = param_1 + 0x36;
  FUN_00f13f08(fVar4,0x40c00000,plVar2);
  FUN_00f07940(0,0,plVar1,4,param_1,4);
  FUN_00f07940(0,0,plVar3,0,param_1,0);
  FUN_00f07b18(0,plVar3,5,plVar1,5);
  FUN_00f07940(0,0,plVar2,1,param_1,1);
  FUN_00f07b18(0,plVar2,5,plVar1,5);
  FUN_00f07940(0,0,param_1 + 0x7a,4,plVar1,6);
  return;
}




void FUN_00c7b3d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e705c8(&local_48);
  FUN_00f0d75c(param_1 + 0x54,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00e705c8(&local_48,param_3);
  FUN_00f0d75c(param_1 + 0x7a,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7b48c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  *param_1 = (long)&PTR_FUN_02802f48;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x43;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x69;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x8f;
  FUN_00f0d160(plVar4);
  *(undefined1 *)(param_1 + 0xb5) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bbecf0);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bbece4);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bbecf8);
  FUN_00f0d9a4(plVar4,0);
  FUN_00f0d9b0(plVar4,1);
  return;
}




void FUN_00c7b5b0(undefined8 param_1,float param_2,long *param_3)

{
  float fVar1;
  
  FUN_00f13238(param_3 + 0x18);
  FUN_00f13e54(param_3 + 0x18);
  fVar1 = param_2 + 24.0;
  FUN_00f0d548(param_3 + 0x8f);
  FUN_00f13f08(param_1,fVar1 + param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00c7b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_00c7b618(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13db4();
  plVar1 = param_3 + 0x18;
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar7,plVar1);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x8f,&local_50);
  FUN_00f07940(0,0,plVar1,4,param_3,4);
  if ((char)param_3[0xb5] == '\0') {
    plVar5 = param_3 + 0x43;
    FUN_00f07940(0,0,plVar5,7,plVar1,7);
    plVar3 = param_3 + 0x69;
    uVar6 = 0x41c00000;
    uVar7 = 7;
    uVar4 = 5;
  }
  else {
    plVar5 = param_3 + 0x69;
    FUN_00f07940(0,0,plVar5,5,plVar1,5);
    plVar3 = param_3 + 0x43;
    uVar6 = 0xc1c00000;
    uVar7 = 5;
    uVar4 = 7;
  }
  FUN_00f07940(uVar6,0,plVar3,uVar7,plVar5,uVar4);
  FUN_00f07d68(param_3 + 0x69,param_3 + 0x43);
  FUN_00f07940(0,0x41c00000,param_3 + 0x8f,0,plVar1,3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7b784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 )

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x5a8) = param_5 & 1;
  if ((param_5 & 1) == 0) {
    FUN_00f0d7fc(param_1 + 0x218,&DAT_01bbecf4);
  }
  FUN_00e705c8(&local_58,param_2);
  FUN_00f0d75c(param_1 + 0x218,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e705c8(&local_58,param_3);
  FUN_00f0d75c(param_1 + 0x348,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(char *)(param_1 + 0x5a8) != '\0') {
    FUN_00f0dac8(param_1 + 0x478,1);
  }
  FUN_00e705c8(&local_58,param_4);
  FUN_00f0d75c(param_1 + 0x478,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7b898(long *param_1)

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
  undefined **ppuVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  undefined *puVar19;
  int iVar20;
  undefined8 uVar21;
  byte local_b8 [16];
  void *local_a8;
  code *local_a0;
  long *plStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar18 = tpidr_el0;
  local_70 = *(long *)(lVar18 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_02803090;
  FUN_00f0e4a8();
  plVar2 = param_1 + 0x36;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6b;
  FUN_00f11234();
  plVar5 = param_1 + 0x9f;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0xbd;
  FUN_00f0e4a8();
  FUN_00f0d160();
  plVar7 = param_1 + 0x101;
  FUN_00c939c4(plVar7,0);
  plVar8 = param_1 + 0x27b;
  FUN_00c939c4(plVar8,0);
  plVar9 = param_1 + 0x3f5;
  FUN_00c939c4(plVar9,0);
  plVar10 = param_1 + 0x56f;
  FUN_00ed66ec(plVar10);
  plVar11 = param_1 + 0x6b4;
  FUN_00f0e4a8(plVar11);
  plVar12 = param_1 + 0x6d2;
  FUN_00f13ca4(plVar12);
  plVar13 = param_1 + 0x6e9;
  FUN_00f0e4a8(plVar13);
  plVar14 = param_1 + 0x707;
  FUN_00f0e4a8(plVar14);
  FUN_00ed78f4();
  FUN_00b27c04(param_1 + 0x7bb,0);
  FUN_00e70510();
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar2,plVar6,1);
  FUN_00f023ec(plVar2,param_1 + 0xdb,1);
  FUN_00f023ec(plVar2,plVar7,1);
  FUN_00f023ec(plVar2,plVar8,1);
  FUN_00f023ec(plVar2,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_00f023ec(plVar12,plVar13,1);
  FUN_00f023ec(plVar12,plVar14,1);
  FUN_00f023ec(plVar12,param_1 + 0x725,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7bb,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bbed08,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bbecfc,2);
  FUN_00f112f0(plVar4,1);
  FUN_00f0e548(plVar5,PTR_s_build___VGX_common_atlas_02be3540,"global_brushstroke_01");
  FUN_00f0e670(plVar5,&DAT_01bbed00,2);
  FUN_00f0e9c0(plVar5,1);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bbed04,2);
  FUN_00f0d92c(param_1 + 0xdb,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  FUN_00c9228c(plVar7,0);
  puVar19 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_a0,"generic_guild_outline");
  FUN_008fa54c(local_b8,"generic_guild_outline");
  FUN_00c93a88(plVar7,puVar19,&local_a0,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  local_88 = 0;
  uStack_80 = 0;
  uVar16 = DAT_03210c64;
  local_a0 = FUN_00c7c030;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar16;
  FUN_009693a0(param_1 + 0x102,&local_a0);
  FUN_00c9228c(plVar8,0);
  puVar19 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_a0,"generic_team_outline");
  FUN_008fa54c(local_b8,"generic_team_outline");
  FUN_00c93a88(plVar8,puVar19,&local_a0,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  local_a0 = FUN_00c7c040;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar16;
  FUN_009693a0(param_1 + 0x27c,&local_a0);
  FUN_00c9228c(plVar9,0);
  puVar19 = PTR_s_build___VGX_common_atlas_02be3540;
  FUN_008fa54c(&local_a0,"global_checkbox_x_normal");
  FUN_008fa54c(local_b8,"global_checkbox_x_press_round");
  FUN_00c93a88(plVar9,puVar19,&local_a0,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  local_a0 = FUN_00c7c050;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar16;
  FUN_009693a0(param_1 + 0x3f6,&local_a0);
  local_a0 = (code *)CONCAT71(local_a0._1_7_,9);
  FUN_00ed5ab0(plVar10,&local_a0);
  FUN_00f0e548(plVar11,PTR_s_build___VGX_common_atlas_02be3540,"global_panel_scroll_fade");
  uVar17 = *(uint *)((long)param_1 + 0x3624);
  if ((uVar17 & 0x7f80) != 0x880) {
    *(uint *)((long)param_1 + 0x3624) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x880;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0e548(plVar13,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar13,&DAT_01bee7f6,2);
  uVar17 = *(uint *)((long)param_1 + 0x37cc);
  if ((uVar17 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x37cc) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x1e80;
    FUN_0091ada4(plVar13);
  }
  FUN_00f0e548(plVar14,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar14,&DAT_01bbed0c,2);
  if ((*(uint *)((long)param_1 + 0x38bc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x38bc) = *(uint *)((long)param_1 + 0x38bc) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar14);
  }
  iVar20 = FUN_0092f28c();
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (iVar20 != 1) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  FUN_00f0d92c(param_1 + 0x75e,*ppuVar15,&DAT_01bee7fa);
  uVar21 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00910394(param_1 + 0x7d8,uVar21);
  FUN_00f0d75c(param_1 + 0x75e,param_1 + 0x7d8);
  FUN_00ed7be4(param_1 + 0x725,1);
  plVar1 = param_1 + 0x726;
  local_78 = DAT_03210fa0;
  local_a0 = thunk_FUN_00c7cd40;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(plVar1,&local_a0);
  local_78 = DAT_03210fbc;
  local_a0 = FUN_00c7c064;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(plVar1,&local_a0);
  local_78 = DAT_03210fb8;
  local_a0 = FUN_00c7c09c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(plVar1,&local_a0);
  if (*(long *)(lVar18 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

