// functions/00c59 — 18 functions
#include "libGameKindred.h"




void FUN_00c59498(void *param_1)

{
  FUN_00c58f2c();
  operator_delete(param_1);
  return;
}




void FUN_00c594bc(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  byte local_90 [16];
  void *local_80;
  code *local_78;
  long *plStack_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar5 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fe378;
  FUN_00c939c4(plVar5,0);
  plVar1 = param_1 + 0x191;
  FUN_00c939c4(plVar1,0);
  thunk_FUN_00e7051c(param_1 + 0x30b,&DAT_03210450);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00c9228c(plVar5,0);
  puVar4 = PTR_s_build___VGX_common_atlas_02be3540;
  FUN_008fa54c(&local_78,"global_checkbox_x_normal");
  FUN_008fa54c(local_90,"global_checkbox_x_press_round");
  FUN_00c93a88(plVar5,puVar4,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_60 = 0;
  uStack_58 = 0;
  uVar2 = DAT_03210c64;
  local_78 = FUN_00c596bc;
  local_68 = (void *)0x0;
  plStack_70 = param_1;
  local_50 = uVar2;
  FUN_009693a0(param_1 + 0x18,&local_78);
  FUN_00c9228c(plVar1,0);
  puVar4 = PTR_s_build___VGX_common_atlas_02be3540;
  FUN_008fa54c(&local_78,"global_checkbox_v_normal");
  FUN_008fa54c(local_90,"global_checkbox_v_press_round");
  FUN_00c93a88(plVar1,puVar4,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c596c8;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  plStack_70 = param_1;
  local_50 = uVar2;
  FUN_009693a0(param_1 + 0x192,&local_78);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c596bc(long param_1)

{
  FUN_00916160(param_1 + 0x1858);
  return;
}




void FUN_00c596c8(long param_1)

{
  FUN_00916048(param_1 + 0x1858);
  return;
}




void FUN_00c596d4(long param_1)

{
  FUN_00f13db4();
  FUN_00f07b18(0,param_1 + 0xb8,5,param_1,5);
  FUN_00f07b18(0,param_1 + 0xc88,5,param_1,5);
  FUN_00f07b18(0x42200000,param_1 + 0xb8,3,param_1,3);
  FUN_00f07b18(0xc2200000,param_1 + 0xc88,1,param_1,1);
  return;
}




void FUN_00c59768(long param_1)

{
  FUN_00916048(param_1 + 0x1858);
  return;
}




void FUN_00c59774(long param_1)

{
  FUN_00916160(param_1 + 0x1858);
  return;
}




void FUN_00c59780(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  byte local_90 [16];
  void *local_80;
  code *local_78;
  long *plStack_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar5 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fe4c0;
  FUN_00c939c4(plVar5,0);
  plVar1 = param_1 + 0x191;
  FUN_00c939c4(plVar1,0);
  FUN_008fcdb8(param_1 + 0x30b,&DAT_0320ffa8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00c9228c(plVar5,0);
  puVar4 = PTR_s_build___VGX_common_atlas_02be3540;
  FUN_008fa54c(&local_78,"global_checkbox_x_normal");
  FUN_008fa54c(local_90,"global_checkbox_x_press_round");
  FUN_00c93a88(plVar5,puVar4,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_60 = 0;
  uStack_58 = 0;
  uVar2 = DAT_03210c64;
  local_78 = FUN_00c59980;
  local_68 = (void *)0x0;
  plStack_70 = param_1;
  local_50 = uVar2;
  FUN_009693a0(param_1 + 0x18,&local_78);
  FUN_00c9228c(plVar1,0);
  puVar4 = PTR_s_build___VGX_common_atlas_02be3540;
  FUN_008fa54c(&local_78,"global_checkbox_v_normal");
  FUN_008fa54c(local_90,"global_checkbox_v_press_round");
  FUN_00c93a88(plVar1,puVar4,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c5998c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  plStack_70 = param_1;
  local_50 = uVar2;
  FUN_009693a0(param_1 + 0x192,&local_78);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c59980(long param_1)

{
  FUN_00916100(param_1 + 0x1858);
  return;
}




void FUN_00c5998c(long param_1)

{
  FUN_009160ec(param_1 + 0x1858);
  return;
}




void FUN_00c59998(long param_1)

{
  FUN_00f13db4();
  FUN_00f07b18(0,param_1 + 0xb8,5,param_1,5);
  FUN_00f07b18(0,param_1 + 0xc88,5,param_1,5);
  FUN_00f07b18(0x42200000,param_1 + 0xb8,3,param_1,3);
  FUN_00f07b18(0xc2200000,param_1 + 0xc88,1,param_1,1);
  return;
}




void FUN_00c59a2c(long param_1)

{
  FUN_009160ec(param_1 + 0x1858);
  return;
}




void FUN_00c59a38(long param_1)

{
  FUN_00916100(param_1 + 0x1858);
  return;
}




void FUN_00c59a44(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fe608;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2e;
  FUN_00f0d160(plVar2);
  FUN_00b1d5d8(param_1 + 0x54);
  plVar3 = param_1 + 0xce;
  FUN_00f13ca4(plVar3);
  plVar4 = param_1 + 0xe5;
  FUN_00f0d160(plVar4);
  FUN_00b1d5d8(param_1 + 0x10b);
  param_1[0x185] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,param_1 + 0x10b,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  uVar5 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00f0d75c(plVar2,uVar5);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  uVar5 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00f0d75c(plVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00c59bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c59bb0(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00f13db4();
  lVar1 = param_3 + 0x2a0;
  FUN_00b1db80(lVar1);
  lVar2 = param_3 + 0x858;
  FUN_00b1db80(lVar2);
  lVar3 = param_3 + 0x170;
  fVar8 = (float)FUN_00f0d548(lVar3);
  fVar9 = param_2;
  local_70 = (float)FUN_00f13e54(lVar1);
  lVar4 = param_3 + 0x728;
  local_70 = fVar8 + local_70;
  param_2 = param_2 + fVar9;
  fStack_6c = param_2;
  fVar8 = (float)FUN_00f0d548(lVar4);
  fVar9 = param_2;
  local_78 = (float)FUN_00f13e54(lVar2);
  lVar5 = param_3 + 0xb8;
  local_78 = fVar8 + local_78;
  fStack_74 = param_2 + fVar9;
  FUN_00f13f18(lVar5,&local_70);
  lVar6 = param_3 + 0x670;
  FUN_00f13f18(lVar6,&local_78);
  FUN_00f07b18(0,lVar5,5,param_3,5);
  FUN_00f07b18(0,lVar6,5,param_3,5);
  FUN_00f07b18(0,lVar3,4,lVar5,4);
  FUN_00f07b18(0,lVar1,4,lVar5,4);
  FUN_00f07b18(0,lVar3,0,lVar5,0);
  FUN_00f07b18(0,lVar1,0,lVar3,2);
  FUN_00f07b18(0,lVar4,4,lVar6,4);
  FUN_00f07b18(0,lVar2,4,lVar6,4);
  FUN_00f07b18(0,lVar4,0,lVar6,0);
  FUN_00f07b18(0,lVar2,0,lVar4,2);
  FUN_00f07b18(0,lVar6,1,param_3,1);
  FUN_00f07b18(0x80000000,lVar5,1,lVar6,3);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c59dc4(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x185) = param_2;
  FUN_00b1d77c(param_1 + 0x54);
                    /* WARNING: Could not recover jumptable at 0x00c59df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c59df8(long *param_1,undefined4 param_2)

{
  *(undefined4 *)((long)param_1 + 0xc2c) = param_2;
  FUN_00b1d77c(param_1 + 0x10b);
                    /* WARNING: Could not recover jumptable at 0x00c59e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c59e2c(long *param_1)

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
  long lVar12;
  undefined4 uVar13;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  FUN_00b2cec8();
  *param_1 = (long)&PTR_FUN_027fe750;
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x36;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x54;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x6b;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar4 = param_1 + 0xa7;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0xbe;
  FUN_00f13ca4(plVar5);
  plVar6 = param_1 + 0xd5;
  FUN_00f0e4a8();
  FUN_00b1e884();
  FUN_00f0d160();
  plVar7 = param_1 + 0x175;
  FUN_00f13ca4(plVar7);
  plVar8 = param_1 + 0x18c;
  FUN_00f0e4a8();
  plVar9 = param_1 + 0x1aa;
  FUN_00ac5ab8(plVar9,0);
  plVar10 = param_1 + 0x32b;
  FUN_00f0e4a8(plVar10);
  plVar11 = param_1 + 0x349;
  FUN_00b2a3e4(plVar11,0);
  FUN_00f13ca4();
  FUN_008fcdb8(param_1 + 0x4e0,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x4e3,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x4e6,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x4e9,&DAT_0320ffa8);
  param_1[0x4ec] = 0;
  *(undefined1 *)(param_1 + 0x4ed) = 0;
  *(undefined4 *)((long)param_1 + 0x276c) = 0x41;
  param_1[0x4ef] = 0;
  param_1[0x4ee] = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  FUN_008fcdb8(param_1 + 0x4f1,&DAT_0320ffa8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,param_1 + 0x89,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar5,param_1 + 0xf3,1);
  FUN_00f023ec(plVar5,param_1 + 0x14f,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar10,1);
  FUN_00f023ec(plVar7,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c9,1);
  uVar13 = 0x432a0000;
  FUN_00f13f08(0,param_1);
  FUN_00f0e548(param_1 + 0x18,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(param_1 + 0x18,&DAT_01bee7f2,2);
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_tab_active");
  *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bbe008,2);
  FUN_00f0e548(param_1 + 0x89,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_chat_bubble");
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"friendslist_status_circle");
  local_80 = FUN_00f0eaf4(plVar6);
  uStack_7c = uVar13;
  FUN_00f13f18(plVar6,&local_80);
  FUN_00f0d92c(param_1 + 0x14f,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_guild");
  if ((*(float *)(param_1 + 0x195) != 0.5) || (*(float *)((long)param_1 + 0xcac) != 0.5)) {
    param_1[0x195] = 0x3f0000003f000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00ac6004(0x40e00000,0x40800000,plVar9);
  FUN_00ac5da8(plVar9,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_team");
  if ((*(float *)(param_1 + 0x334) != 0.5) || (*(float *)((long)param_1 + 0x19a4) != 0.5)) {
    param_1[0x334] = 0x3f0000003f000000;
    FUN_0091ada4(plVar10);
  }
  FUN_00b2a974(0x40000000,plVar11);
  FUN_00b2a6b8(plVar11,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  if (*(long *)(lVar12 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

