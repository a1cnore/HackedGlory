// functions/00c2a — 34 functions
#include "libGameKindred.h"




void thunk_FUN_00c2a04c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  byte abStack_a8 [16];
  void *pvStack_98;
  byte abStack_90 [16];
  void *pvStack_80;
  byte abStack_78 [16];
  void *pvStack_68;
  byte abStack_60 [16];
  void *pvStack_50;
  int iStack_48;
  int iStack_44;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  memset(abStack_a8,0,0x60);
  FUN_00bd0c98(abStack_a8);
  uVar2 = FUN_00abce6c(param_1 + 0x218);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00f08be8(param_1 + 0x218 + ((ulong)*(byte *)(param_1 + 0x588) & 1) * 0x130 + 0x1e0);
    FUN_00e70a24(uVar3,abStack_a8);
  }
  uVar2 = FUN_00abce6c(param_1 + 0x1f10);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00f08be8(param_1 + 0x1f10 + ((ulong)*(byte *)(param_1 + 0x2280) & 1) * 0x130 + 0x1e0
                        );
    FUN_00e70a24(uVar3,abStack_90);
  }
  uVar3 = FUN_00b0423c(param_1 + 0x6540);
  FUN_008fce60(abStack_78,uVar3);
  uVar3 = FUN_00ac9cd0(param_1 + 0x3c08);
  FUN_008fce60(abStack_60,uVar3);
  iStack_48 = *(int *)(param_1 + 0x10210) + -1;
  iStack_44 = *(int *)(param_1 + 0xcdc8) + -2;
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))(*(long **)(param_1 + 0xb8),abStack_a8);
  FUN_00f048e0(auStack_c8,DAT_0313b2b4,0);
  FUN_00f04760(param_1,auStack_c8,1);
  if ((abStack_60[0] & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if ((abStack_78[0] & 1) != 0) {
    operator_delete(pvStack_68);
  }
  if ((abStack_90[0] & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if ((abStack_a8[0] & 1) != 0) {
    operator_delete(pvStack_98);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2a04c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  int local_48;
  int local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memset(local_a8,0,0x60);
  FUN_00bd0c98(local_a8);
  uVar2 = FUN_00abce6c(param_1 + 0x218);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00f08be8(param_1 + 0x218 + ((ulong)*(byte *)(param_1 + 0x588) & 1) * 0x130 + 0x1e0);
    FUN_00e70a24(uVar3,local_a8);
  }
  uVar2 = FUN_00abce6c(param_1 + 0x1f10);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00f08be8(param_1 + 0x1f10 + ((ulong)*(byte *)(param_1 + 0x2280) & 1) * 0x130 + 0x1e0
                        );
    FUN_00e70a24(uVar3,local_90);
  }
  uVar3 = FUN_00b0423c(param_1 + 0x6540);
  FUN_008fce60(local_78,uVar3);
  uVar3 = FUN_00ac9cd0(param_1 + 0x3c08);
  FUN_008fce60(local_60,uVar3);
  local_48 = *(int *)(param_1 + 0x10210) + -1;
  local_44 = *(int *)(param_1 + 0xcdc8) + -2;
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))(*(long **)(param_1 + 0xb8),local_a8);
  FUN_00f048e0(auStack_c8,DAT_0313b2b4,0);
  FUN_00f04760(param_1,auStack_c8,1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2a1ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f9390;
  param_1[0x2127] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x2248);
  FUN_00c925cc(param_1 + 0x2127);
  FUN_00f0d3a4(param_1 + 0x2101);
  FUN_00f0d3a4(param_1 + 0x20db);
  FUN_00f0d3a4(param_1 + 0x20b5);
  FUN_00f0d3a4(param_1 + 0x208f);
  FUN_00f0d3a4(param_1 + 0x2069);
  FUN_00f0d3a4(param_1 + 0x2043);
  FUN_00b03c00(param_1 + 0x19ba);
  FUN_00b03c00(param_1 + 0x1331);
  FUN_00b03c00(param_1 + 0xca8);
  FUN_00ac848c(param_1 + 0x781);
  param_1[0x3e2] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x77b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x77b]);
    param_1[0x77b] = 0;
    param_1[0x77a] = 0;
  }
  if ((void *)param_1[0x779] != (void *)0x0) {
    operator_delete__((void *)param_1[0x779]);
    param_1[0x779] = 0;
    param_1[0x778] = 0;
  }
  if ((void *)param_1[0x777] != (void *)0x0) {
    operator_delete__((void *)param_1[0x777]);
    param_1[0x777] = 0;
    param_1[0x776] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x750);
  FUN_00f13d08(param_1 + 0x735);
  FUN_00f13d08(param_1 + 0x71a);
  FUN_009c7fa8(param_1 + 0x462);
  FUN_00abd150(param_1 + 0x3e2);
  param_1[0x43] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x3dc] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3dc]);
    param_1[0x3dc] = 0;
    param_1[0x3db] = 0;
  }
  if ((void *)param_1[0x3da] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3da]);
    param_1[0x3da] = 0;
    param_1[0x3d9] = 0;
  }
  if ((void *)param_1[0x3d8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3d8]);
    param_1[0x3d8] = 0;
    param_1[0x3d7] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x3b1);
  FUN_00f13d08(param_1 + 0x396);
  FUN_00f13d08(param_1 + 0x37b);
  FUN_009c7fa8(param_1 + 0xc3);
  FUN_00abd150(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c2a420(void *param_1)

{
  FUN_00c2a1ec();
  operator_delete(param_1);
  return;
}




void FUN_00c2a444(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f94d8;
  FUN_00ab1658(param_1 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x18,1);
  uVar3 = FUN_00e6ce7c("MENU_GUILD_INVITES_NO_INVITES",0);
  FUN_00f0d75c(param_1 + 0x223,uVar3);
  plVar1 = param_1 + 1;
  local_40 = DAT_03133e64;
  local_68 = FUN_00c2a584;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_03133e60;
  local_68 = FUN_00c2a58c;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_03133e5c;
  local_68 = FUN_00c2a5d0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2a584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c2a660(param_1,param_4);
  return;
}




void FUN_00c2a58c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00f04924(param_4);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c2a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))(*(long **)(param_1 + 0xb8),lVar1);
    return;
  }
  return;
}




void FUN_00c2a5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c2a72c(param_1,param_4);
  return;
}




void FUN_00c2a5d8(long param_1)

{
  param_1 = param_1 + 0xc0;
  FUN_00f13f08(param_1);
  FUN_00ab19fc(param_1);
  FUN_00f07a18(0,0,param_1,8);
  return;
}




void FUN_00c2a614(long param_1)

{
  FUN_00ab19fc(param_1 + 0xc0);
  FUN_00f07a18(0,0,param_1 + 0xc0,8);
  return;
}




void FUN_00c2a648(long param_1)

{
  FUN_00ab1cb0(param_1 + 0xc0);
  return;
}




void FUN_00c2a650(long param_1)

{
  FUN_00ab1c3c(param_1 + 0xc0);
  return;
}




void FUN_00c2a658(long param_1)

{
  FUN_00ab1c60(param_1 + 0xc0);
  return;
}




void FUN_00c2a660(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00f04924(param_2);
  if (lVar2 != 0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),lVar2);
    FUN_00f048e0(auStack_48,DAT_0313b430,0);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2a6e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00f04924(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c2a71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))(*(long **)(param_1 + 0xb8),lVar1);
    return;
  }
  return;
}




void FUN_00c2a72c(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00f04924(param_2);
  if (pbVar1 != (byte *)0x0) {
    FUN_00cbb218(pbVar1,1);
    if ((*pbVar1 & 1) == 0) {
      pbVar1 = pbVar1 + 1;
    }
    else {
      pbVar1 = *(byte **)(pbVar1 + 0x10);
    }
    FUN_00904bbc(pbVar1);
    return;
  }
  return;
}




void FUN_00c2a780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f94d8;
  FUN_00ab2938(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c2a7b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f94d8;
  FUN_00ab2938(param_1 + 0x18);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c2a7f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f9620;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x43;
  FUN_00c93da8(plVar2,0);
  plVar3 = param_1 + 0x1d3;
  FUN_00c93da8(plVar3,0);
  plVar4 = param_1 + 0x363;
  FUN_00c93da8(plVar4,0);
  plVar5 = param_1 + 0x4f3;
  FUN_00c93da8(plVar5,0);
  FUN_00ab1658(param_1 + 0x683,0);
  FUN_00b1a1c4(param_1 + 0x8d8);
  FUN_00f0c714(param_1 + 0x9ac);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x683,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f133a4(plVar1,plVar5,1);
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_NO_RESULTS",0);
  FUN_00f0d75c(param_1 + 0x88e,uVar10);
  puVar9 = PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_BUTTON_NAME_SEARCH",0);
  FUN_00c93f58(plVar2,puVar8,"search_small",puVar9,uVar10);
  FUN_00c928a0(0x42480000,0x41a00000,plVar2);
  local_90 = 0;
  uStack_88 = 0;
  uVar6 = DAT_03210c64;
  local_a8 = FUN_00c2aba0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar6;
  FUN_009693a0(param_1 + 0x44,&local_a8);
  puVar9 = PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_BUTTON_NAME_REFRESH",0);
  FUN_00c93f58(plVar3,puVar8,"generic_refresh",puVar9,uVar10);
  FUN_00c928a0(0x42480000,0x41a00000,plVar3);
  local_a8 = FUN_00c2abb0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar6;
  FUN_009693a0(param_1 + 0x1d4,&local_a8);
  puVar9 = PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_BUTTON_NAME_INVITES",0);
  FUN_00c93f58(plVar4,puVar8,"generic_invite_friend",puVar9,uVar10);
  FUN_00c928a0(0x42480000,0x41a00000,plVar4);
  local_a8 = FUN_00c2abc0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar6;
  FUN_009693a0(param_1 + 0x364,&local_a8);
  puVar9 = PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  puVar8 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  uVar10 = FUN_00e6ce7c("MENU_GUILD_SEARCH_BUTTON_NAME_CREATE_NEW",0);
  FUN_00c93f58(plVar5,puVar8,"generic_guild",puVar9,uVar10);
  FUN_00c928a0(0x42480000,0x41a00000,plVar5);
  local_a8 = FUN_00c2abd0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar6;
  FUN_009693a0(param_1 + 0x4f4,&local_a8);
  FUN_00b1a8e8(param_1 + 0x8d8,"GUILD.INVITES");
  local_80 = DAT_03133e5c;
  local_a8 = FUN_00c2abe0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 1,&local_a8);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2aba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2abac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c2abb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2abbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c2abc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2abcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c2abd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2abdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c2abe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c2add4(param_1,param_4);
  return;
}




void FUN_00c2abe8(long param_1)

{
  FUN_00f13f08(param_1 + 0x4d60);
  FUN_00c2ac14(param_1);
  return;
}




void FUN_00c2ac14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 10.0;
  FUN_00f07b18(0x41200000,param_1 + 0x1d3,3,param_1 + 0x43,1);
  plVar2 = param_1 + 0x363;
  FUN_00f07b18(0x41200000,plVar2,3,param_1 + 0x1d3,1);
  FUN_00f07b18(0x41200000,param_1 + 0x4f3,3,plVar2,1);
  plVar1 = param_1 + 0x18;
  FUN_00f13238(plVar1);
  FUN_00f07940(0xc1200000,0,param_1 + 0x8d8,8,plVar2,1);
  FUN_00f07a18(0,0x41200000,plVar1,4);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar5 = fVar4;
  FUN_00f13e54(plVar1);
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar3,(fVar4 - fVar5) + -20.0,param_1 + 0x683);
  FUN_00f07b18(0,param_1 + 0x683,2,param_1,2);
  return;
}




void FUN_00c2ad3c(long param_1)

{
  FUN_00ab1cb0(param_1 + 0x3418);
  FUN_00ab1c60(param_1 + 0x3418);
  return;
}




void FUN_00c2ad68(long param_1)

{
  FUN_00ab1c78(param_1 + 0x3418);
  FUN_00ab1c3c(param_1 + 0x3418);
  return;
}




void FUN_00c2ad94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2ada0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c2ada4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c2adb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2adc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c2adc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c2add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c2add4(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00f04924(param_2);
  if (pbVar1 != (byte *)0x0) {
    FUN_00cbb218(pbVar1,1);
    if ((*pbVar1 & 1) == 0) {
      pbVar1 = pbVar1 + 1;
    }
    else {
      pbVar1 = *(byte **)(pbVar1 + 0x10);
    }
    FUN_00904c74(pbVar1);
    return;
  }
  return;
}




void FUN_00c2ae28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f9620;
  FUN_00f13d08(param_1 + 0x9ac);
  param_1[0x8d8] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x9a4);
  FUN_00f0d3a4(param_1 + 0x97d);
  FUN_00f0d3a4(param_1 + 0x957);
  FUN_00f0d3a4(param_1 + 0x931);
  param_1[0x913] = &PTR_FUN_028266f0;
  param_1[0x92a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x92d);
  FUN_00f13d08(param_1 + 0x913);
  param_1[0x8e9] = &PTR_FUN_02826f38;
  param_1[0x900] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x903);
  FUN_00f13d08(param_1 + 0x8e9);
  FUN_00f01868(param_1 + 0x8d8);
  FUN_00ab2938(param_1 + 0x683);
  param_1[0x665] = &PTR_FUN_028266f0;
  param_1[0x67c] = &PTR_FUN_02826850;
  param_1[0x4f3] = &PTR_FUN_028065e0;
  FUN_00f0a79c(param_1 + 0x67f);
  FUN_00f13d08(param_1 + 0x665);
  param_1[0x63a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x651);
  FUN_00f13d08(param_1 + 0x63a);
  FUN_00f0d3a4(param_1 + 0x614);
  FUN_00c925cc(param_1 + 0x4f3);
  param_1[0x363] = &PTR_FUN_028065e0;
  param_1[0x4d5] = &PTR_FUN_028266f0;
  param_1[0x4ec] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4ef);
  FUN_00f13d08(param_1 + 0x4d5);
  param_1[0x4aa] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x4c1);
  FUN_00f13d08(param_1 + 0x4aa);
  FUN_00f0d3a4(param_1 + 0x484);
  FUN_00c925cc(param_1 + 0x363);
  param_1[0x1d3] = &PTR_FUN_028065e0;
  param_1[0x345] = &PTR_FUN_028266f0;
  param_1[0x35c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x35f);
  FUN_00f13d08(param_1 + 0x345);
  param_1[0x31a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x331);
  FUN_00f13d08(param_1 + 0x31a);
  FUN_00f0d3a4(param_1 + 0x2f4);
  FUN_00c925cc(param_1 + 0x1d3);
  param_1[0x43] = &PTR_FUN_028065e0;
  param_1[0x1b5] = &PTR_FUN_028266f0;
  param_1[0x1cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1cf);
  FUN_00f13d08(param_1 + 0x1b5);
  param_1[0x18a] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1a1);
  FUN_00f13d08(param_1 + 0x18a);
  FUN_00f0d3a4(param_1 + 0x164);
  FUN_00c925cc(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}

