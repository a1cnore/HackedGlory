// functions/00b43 — 26 functions
#include "libGameKindred.h"




void FUN_00b432cc(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_00ad3a50(param_1 + 0x9ad0,0,0);
    return;
  }
  FUN_00b42474(param_1);
  return;
}




void FUN_00b43320(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_00ad3a50(param_1 + 0x9ad0,0,0);
    return;
  }
  FUN_00b42474(param_1);
  return;
}




void FUN_00b43374(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 10) {
    iVar2 = FUN_0090d610(param_2,0,0xffffffffffffffff,"guildChest",10);
    if (iVar2 == 0) {
      FUN_00936760(FUN_00b433d4,FUN_00b433d8);
      return;
    }
  }
  return;
}




void FUN_00b433d4(void)

{
  return;
}




void FUN_00b433d8(void)

{
  return;
}




void thunk_FUN_00b43374(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 10) {
    iVar2 = FUN_0090d610(param_2,0,0xffffffffffffffff,"guildChest",10);
    if (iVar2 == 0) {
      FUN_00936760(FUN_00b433d4,FUN_00b433d8);
      return;
    }
  }
  return;
}




uint FUN_00b433e0(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0093618c();
  uVar1 = 0;
  if ((*(int *)(lVar2 + 8) != 0) && (uVar1 = 0, *(uint *)(lVar2 + 0xc) < *(uint *)(lVar2 + 0x10))) {
    uVar1 = FUN_009367d0();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}




void FUN_00b43418(long param_1,byte param_2)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x3543a) = param_2 & 1;
  uVar1 = FUN_0093618c();
  FUN_00b3fcfc(param_1,uVar1);
  return;
}




void FUN_00b43450(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_140 = *(undefined8 *)(param_1 + 0x34e98);
  FUN_008fcdb8(auStack_138,param_1 + 0x34ea0);
  FUN_008fcdb8(auStack_120,param_1 + 0x34eb8);
  FUN_008fcdb8(auStack_108,param_1 + 0x34ed0);
  FUN_008fcdb8(auStack_f0,param_1 + 0x34ee8);
  FUN_008fcdb8(auStack_d8,param_1 + 0x34f00);
  FUN_008fcdb8(auStack_c0,param_1 + 0x34f18);
  FUN_008fcdb8(auStack_a8,param_1 + 0x34f30);
  FUN_008fcdb8(auStack_90,param_1 + 0x34f48);
  FUN_008fcdb8(auStack_78,param_1 + 0x34f60);
  local_60 = *(undefined1 *)(param_1 + 0x34f78);
  FUN_00e70a24(param_2,auStack_108);
  FUN_00bb9ce8(param_1 + 0x17728,&local_140);
  FUN_00cbec10(param_1 + 0x17728);
  FUN_00936744((undefined8 *)(param_1 + 0x34e98),FUN_00b435dc,FUN_00b4361c);
  FUN_00936630(&local_140);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b435dc(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_009580b8();
  lVar2 = FUN_009580b8();
  FUN_0095e21c(uVar1,lVar2 + 0x5478,1);
  return;
}




void FUN_00b43610(long param_1)

{
  if (param_1 != 0) {
    FUN_00b42364();
    return;
  }
  return;
}




void FUN_00b4361c(void)

{
  return;
}




void FUN_00b43620(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_50,"guildChest");
  FUN_009bb7d4(uVar2,local_50,param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00936760(FUN_00b433d4,FUN_00b433d8);
  lVar3 = FUN_009580b8();
  FUN_0090c0a4(*(undefined4 *)(lVar3 + 0x5118),param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b436cc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00936760(FUN_00b433d4,FUN_00b433d8);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_50,"guildChest");
  FUN_009bb89c(uVar2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_00e6ce7c("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b437ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e0ed0;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x5d;
  FUN_00f11234(plVar3);
  *(undefined4 *)(param_1 + 0x91) = 0x41e00000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  uVar7 = FUN_0092ea9c();
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
  if ((uVar7 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar1,*ppuVar4,&DAT_01bee7fa);
  uVar5 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar5 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x10c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x2600;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x19) != -*(float *)(param_1 + 0x91)) ||
     (*(float *)((long)param_1 + 0xcc) != 0.0)) {
    *(float *)(param_1 + 0x19) = -*(float *)(param_1 + 0x91);
    *(undefined4 *)((long)param_1 + 0xcc) = 0;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x11] + 0x28))(plVar1,&local_60);
  if ((*(float *)(param_1 + 0x65) != -*(float *)(param_1 + 0x91)) ||
     (*(float *)((long)param_1 + 0x32c) != 0.0)) {
    *(float *)(param_1 + 0x65) = -*(float *)(param_1 + 0x91);
    *(undefined4 *)((long)param_1 + 0x32c) = 0;
    FUN_0091ada4(plVar3);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x5d] + 0x28))(plVar3,&local_60);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
  if ((uVar7 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d92c(plVar2,*ppuVar4,&DAT_01bee7fa);
  uVar5 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x23c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x3f) != *(float *)(param_1 + 0x91)) ||
     (*(float *)((long)param_1 + 0x1fc) != 0.0)) {
    *(float *)(param_1 + 0x3f) = *(float *)(param_1 + 0x91);
    *(undefined4 *)((long)param_1 + 0x1fc) = 0;
    FUN_0091ada4(plVar2);
  }
  local_60 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b43a24(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027e0fd0;
  FUN_00af8b20(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,"*KindredMenuGuildBuffMesh*");
  FUN_00af9124(plVar1,uVar2);
  return;
}




void FUN_00b43abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0ed0;
  FUN_00f13d08(param_1 + 0x5d);
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b43b08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0ed0;
  FUN_00f13d08(param_1 + 0x5d);
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b43b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0fd0;
  FUN_00af8c0c(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b43b98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e1118;
  param_1[0x413] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x7ac] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7ac]);
    param_1[0x7ac] = 0;
    param_1[0x7ab] = 0;
  }
  if ((void *)param_1[0x7aa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7aa]);
    param_1[0x7aa] = 0;
    param_1[0x7a9] = 0;
  }
  if ((void *)param_1[0x7a8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a8]);
    param_1[0x7a8] = 0;
    param_1[0x7a7] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x781);
  FUN_00f13d08(param_1 + 0x766);
  FUN_00f13d08(param_1 + 0x74b);
  FUN_009c7fa8(param_1 + 0x493);
  FUN_00abd150(param_1 + 0x413);
  param_1[0x74] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x40d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40d]);
    param_1[0x40d] = 0;
    param_1[0x40c] = 0;
  }
  if ((void *)param_1[0x40b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40b]);
    param_1[0x40b] = 0;
    param_1[0x40a] = 0;
  }
  if ((void *)param_1[0x409] != (void *)0x0) {
    operator_delete__((void *)param_1[0x409]);
    param_1[0x409] = 0;
    param_1[0x408] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x3e2);
  FUN_00f13d08(param_1 + 0x3c7);
  FUN_00f13d08(param_1 + 0x3ac);
  FUN_009c7fa8(param_1 + 0xf4);
  FUN_00abd150(param_1 + 0x74);
  FUN_00f0d3a4(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x35);
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b43d30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e1260;
  FUN_00ac848c(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b43dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e13a8;
  FUN_00b03c00(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b43e28(void *param_1)

{
  FUN_00b43b98();
  operator_delete(param_1);
  return;
}




void FUN_00b43e4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e1260;
  FUN_00ac848c(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b43ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e13a8;
  FUN_00b03c00(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b43f54(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined4 local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  lVar12 = 0x23730;
  FUN_00f13ca4();
  FUN_00948cd8(param_1 + 0x17);
  FUN_00e83560(param_1 + 0x1a);
  plVar10 = param_1 + 0x1d;
  *param_1 = (long)&PTR_FUN_027e14f0;
  param_1[0x17] = (long)&PTR_FUN_027e1650;
  param_1[0x1a] = (long)&PTR_FUN_027e19e8;
  FUN_00b1f530(plVar10);
  FUN_00ab6c24(param_1 + 0x177,0);
  plVar6 = param_1 + 0x42f;
  FUN_00ab6c24(plVar6,0);
  plVar1 = param_1 + 0x6e7;
  FUN_00ab6c24(plVar1,0);
  plVar11 = param_1 + 0x99f;
  FUN_00f0bdbc(plVar11,0);
  plVar7 = param_1 + 0x9b8;
  lVar5 = 0x23730;
  param_1[0x99f] = (long)&PTR_FUN_027c3260;
  do {
    FUN_00ad13c4(plVar7);
    lVar5 = lVar5 + -0xbd10;
    plVar7 = plVar7 + 0x17a2;
  } while (lVar5 != 0);
  plVar7 = param_1 + 0x509e;
  FUN_00f0bdbc(plVar7,0);
  plVar8 = param_1 + 0x50b7;
  *plVar7 = (long)&PTR_FUN_027c3260;
  do {
    FUN_00ad13c4(plVar8);
    lVar12 = lVar12 + -0xbd10;
    plVar8 = plVar8 + 0x17a2;
  } while (lVar12 != 0);
  FUN_00bb751c();
  memset(param_1 + 0xaf2e,0,0xd8);
  FUN_00954ec0(param_1 + 0xaf2d);
  lVar5 = 0;
  do {
    lVar12 = (long)param_1 + lVar5 + 0x57ac0;
    memset((void *)(lVar12 + 8),0,0xd8);
    memset((void *)(lVar12 + -0x70),0,0x60);
    FUN_00954ec0(lVar12);
    FUN_00954d1c((void *)(lVar12 + -0x70));
    lVar5 = lVar5 + 0x158;
  } while (lVar5 != 0x408);
  *(undefined1 *)(param_1 + 0xafcb) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x177,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  lVar5 = 3;
  plVar8 = param_1 + 0x9b8;
  do {
    FUN_00f023ec(plVar11,plVar8,1);
    lVar5 = lVar5 + -1;
    plVar8 = plVar8 + 0x17a2;
  } while (lVar5 != 0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  lVar5 = 3;
  plVar11 = param_1 + 0x50b7;
  do {
    FUN_00f023ec(plVar7,plVar11,1);
    lVar5 = lVar5 + -1;
    plVar11 = plVar11 + 0x17a2;
  } while (lVar5 != 0);
  local_c8 = 0;
  uStack_c0 = 0;
  uVar4 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TAB_OPTION_SUGGESTED",0);
  FUN_0090ea30(&local_c8,uVar4);
  uVar4 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TAB_OPTION_INVITES",0);
  FUN_0090ea30(&local_c8,uVar4);
  FUN_00b1fc3c(0x42800000,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar10,&local_c8);
  FUN_00b208e0(0x3f4ccccd,plVar10);
  local_90 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_b8 = FUN_00b445a8;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_009693a0(param_1 + 0x1e,&local_b8);
  FUN_00b20988(plVar10,1,"GUILD.INVITES");
  FUN_00ab73d8(0x42000000,0x42c80000,0x43960000,plVar6,"generic_refresh",&DAT_01bee7fa);
  uVar9 = DAT_03210c64;
  local_b8 = FUN_00b445b0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  local_90 = uVar9;
  FUN_009693a0(param_1 + 0x430,&local_b8);
  FUN_00ab73d8(0x42000000,0x42c80000,0x43960000,plVar1,"generic_filter",&DAT_01bee7fa);
  local_b8 = FUN_00b445dc;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  local_90 = uVar9;
  FUN_009693a0(param_1 + 0x6e8,&local_b8);
  uVar3 = FUN_0093d928();
  *(uint *)((long)param_1 + 0x37bc) =
       *(uint *)((long)param_1 + 0x37bc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x37bc) & 3 | (uVar3 & 1) << 2;
  lVar5 = 0;
  lVar12 = 0xac84;
  puVar13 = (undefined4 *)((long)param_1 + 0x10ac4);
  *(uint *)((long)param_1 + 0x4d7c) = *(uint *)((long)param_1 + 0x4d7c) & 0xfffffffb;
  plVar6 = param_1;
  do {
    FUN_00ad1564(plVar6 + 0x9b8,1);
    uVar9 = (undefined4)lVar5;
    *puVar13 = uVar9;
    *(undefined4 *)((long)param_1 + lVar12) = uVar9;
    puVar13[-10] = uVar9;
    local_90 = FUN_00f048a4("UI::GUILD_TILE_DECLINED");
    local_b8 = FUN_00b445e4;
    local_a8 = 0;
    local_a0 = 0;
    plStack_b0 = param_1;
    local_98 = lVar5;
    FUN_009693a0(plVar6 + 0x9b9,&local_b8);
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 0x17a2;
    puVar13 = puVar13 + 0x2f44;
    lVar12 = lVar12 + 0xbd10;
  } while (lVar5 != 3);
  lVar5 = 0;
  lVar12 = 0x2e47c;
  plVar6 = param_1 + 0x50b7;
  puVar13 = (undefined4 *)((long)param_1 + 0x342bc);
  *(uint *)((long)param_1 + 0x28574) = *(uint *)((long)param_1 + 0x28574) | 4;
  do {
    FUN_00ad1564(plVar6,0);
    uVar9 = (undefined4)lVar5;
    *puVar13 = uVar9;
    *(undefined4 *)((long)param_1 + lVar12) = uVar9;
    puVar13[-10] = uVar9;
    local_90 = FUN_00f048a4("UI::GUILD_TILE_DECLINED");
    local_b8 = FUN_00b445e4;
    local_a8 = 0;
    local_a0 = 0;
    plStack_b0 = param_1;
    local_98 = lVar5;
    FUN_009693a0(plVar6 + 1,&local_b8);
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 0x17a2;
    puVar13 = puVar13 + 0x2f44;
    lVar12 = lVar12 + 0xbd10;
  } while (lVar5 != 3);
  FUN_00af603c(param_1 + 0x979d,&DAT_01bb3cce);
  local_90 = FUN_00f048a4("UI::GUILD_SEARCH_FILTERS_CHANGED");
  local_b8 = thunk_FUN_00b458c8;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_009693a0(param_1 + 0x979e,&local_b8);
  DAT_0313a0d0 = param_1;
  FUN_0090eb54(&local_c8,1);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

