// functions/00cae — 12 functions
#include "libGameKindred.h"




void FUN_00cae128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(param_1);
  FUN_00e70510(&local_58);
  FUN_00e70510(&local_68);
  FUN_00e70510(&local_78);
  FUN_00e705a0(&local_58,param_2);
  FUN_00e705a0(&local_68,param_3);
  FUN_00e705a0(&local_78,param_4);
  uVar4 = FUN_00e70b04(&local_68);
  if ((uVar4 & 1) == 0) {
    iVar2 = FUN_00e70b14(&local_68);
    iVar3 = FUN_00e70b14(&local_58);
    thunk_FUN_00910400(param_1,iVar2 + iVar3 + 1);
    FUN_00910394(param_1,&local_68);
    puVar5 = (undefined *)0x1e21c1a;
  }
  else {
    uVar4 = FUN_00e70b04(&local_78);
    if ((uVar4 & 1) != 0) {
      FUN_00910394(param_1,&local_58);
      goto LAB_00cae26c;
    }
    iVar2 = FUN_00e70b14(&local_78);
    iVar3 = FUN_00e70b14(&local_58);
    thunk_FUN_00910400(param_1,iVar2 + iVar3 + 1);
    FUN_00910394(param_1,&local_78);
    puVar5 = &DAT_01bb5073;
  }
  FUN_00e705c8(&local_88,puVar5);
  FUN_00e70c34(param_1,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00e70c34(param_1,&local_58);
LAB_00cae26c:
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
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




void FUN_00cae2c8(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  local_6c = param_2;
  if (param_2 != 0xffff) {
    lVar2 = FUN_00ce9ba0(&local_6c);
    FUN_00e6a8a8(&local_68,"portrait_%s",*(undefined8 *)(lVar2 + 0x10));
  }
  FUN_008fa54c(param_1,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cae360(undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00ce9ba0();
  plVar3 = (long *)FUN_00cc75b0();
  plVar3 = (long *)*plVar3;
  puVar4 = (undefined8 *)*plVar3;
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    plVar3 = plVar3 + 1;
    if ((*(int *)(puVar4 + 4) == 0) &&
       (iVar1 = strcmp((char *)puVar4[2],(char *)*puVar2), iVar1 == 0)) break;
    puVar4 = (undefined8 *)*plVar3;
  }
  FUN_00925af0(*param_1,*puVar4);
  return;
}




void FUN_00cae3d8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_128;
  void *pvStack_120;
  undefined8 local_118;
  void *local_110;
  undefined2 local_108;
  byte local_100 [16];
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  byte local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00cdbb24();
  if ((lVar2 == 0) || ((*(ushort *)(lVar2 + 0xb0) >> 8 & 1) == 0)) {
    FUN_00aff894(param_1);
  }
  else {
    if ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
      lVar3 = lVar2 + 0x79;
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x88);
    }
    lVar3 = FUN_00ce9cb8(lVar3);
    uVar6 = 0xffffffff;
    local_6c = uVar6;
    thunk_FUN_00e7051c(&local_80,&DAT_03210450);
    lVar2 = FUN_00cdda38(lVar2);
    uVar5 = uVar6;
    switch(*(undefined4 *)(lVar2 + 0x18)) {
    case 0:
      local_6c = 0xff5a3c10;
      uVar6 = 0xffa4781e;
      uVar5 = 0xffa3781e;
      break;
    case 1:
      local_6c = 0xff330b03;
      uVar4 = FUN_00e6ce7c("MENU_TALENTS_TALENT_INFO_POPUP_TITLE_TIER_RARE",0);
      FUN_00910394(&local_80,uVar4);
      uVar6 = 0xffa6654b;
      uVar5 = 0xffffd18a;
      break;
    case 2:
      local_6c = 0xff33031d;
      uVar4 = FUN_00e6ce7c("MENU_TALENTS_TALENT_INFO_POPUP_TITLE_TIER_EPIC",0);
      FUN_00910394(&local_80,uVar4);
      uVar6 = 0xff93435b;
      uVar5 = 0xffff61f7;
      break;
    case 3:
      local_6c = 0xff032433;
      uVar4 = FUN_00e6ce7c("MENU_TALENTS_TALENT_INFO_POPUP_TITLE_TIER_LEGENDARY",0);
      FUN_00910394(&local_80,uVar4);
      uVar6 = 0xff387f9c;
      uVar5 = 0xff5de1f2;
    }
    FUN_00e705c8(&local_90,"[HERO_NAME] - [TALENT_TIER]");
    uVar4 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 0x28),0);
    thunk_FUN_00e7051c(&local_a0,uVar4);
    FUN_00e705c8(&local_128,"[HERO_NAME]");
    FUN_00e71248(&local_90,0,&local_128,&local_a0);
    if (pvStack_120 != (void *)0x0) {
      operator_delete__(pvStack_120);
      local_128 = 0;
      pvStack_120 = (void *)0x0;
    }
    FUN_00e705c8(&local_128,"[TALENT_TIER]");
    FUN_00e71248(&local_90,0,&local_128,&local_80);
    if (pvStack_120 != (void *)0x0) {
      operator_delete__(pvStack_120);
      local_128 = 0;
      pvStack_120 = (void *)0x0;
    }
    FUN_00aff894(&local_128);
    FUN_00910394(&local_118,&local_90);
    local_128 = CONCAT44(param_3,param_2);
    local_108 = CONCAT11(local_108._1_1_,1);
    uStack_c4 = param_5;
    FUN_00aff91c(&local_128,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&local_6c);
    param_1[1] = pvStack_120;
    *param_1 = local_128;
    uStack_cc = uVar6;
    uStack_c8 = uVar5;
    thunk_FUN_00e7051c(param_1 + 2,&local_118);
    *(undefined2 *)(param_1 + 4) = local_108;
    FUN_008fcdb8(param_1 + 5,local_100);
    FUN_008fcdb8(param_1 + 8,local_e8);
    param_1[0xc] = CONCAT44(uStack_c4,uStack_c8);
    param_1[0xb] = CONCAT44(uStack_cc,local_d0);
    FUN_008fcdb8(param_1 + 0xd,local_c0);
    param_1[0x10] = local_a8;
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_100[0] & 1) != 0) {
      operator_delete(local_f0);
    }
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = 0;
      local_110 = (void *)0x0;
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cae740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  void *local_c8;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_78;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00cdbb24();
  if (lVar3 != 0) {
    FUN_00cae3d8(auStack_e0,param_1,param_2,param_3,param_4);
    uVar4 = FUN_00cae850("MENU_TALENT_INFO_POPUP",auStack_e0);
    FUN_00b21564(uVar4,param_3);
    FUN_00b215b0(uVar4,~param_5 & 1);
    uVar2 = FUN_00cdccb0(lVar3);
    FUN_00b215bc(uVar4,uVar2 & 1);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
      local_d0 = 0;
      local_c8 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cae850(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  FUN_008fce60(param_2 + 0x68,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pvVar2 = operator_new(0x148);
  FUN_00b21358();
  *(void **)(param_2 + 0x80) = pvVar2;
  FUN_00affc48(DAT_03139948,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_2 + 0x80));
}




char * FUN_00cae8f0(void)

{
  return "MENU_TALENT_INFO_POPUP";
}




void FUN_00cae8fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_80 [16];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00ce9b48(param_2);
  if ((param_2 != 0) && (lVar3 = FUN_00ce9cb8(param_2), lVar3 != 0)) {
    uVar4 = FUN_00e6ce7c("MENU_PLATFORM_NOTIFICATION_HERO_UNLOCKED_TITLE",0);
    thunk_FUN_00e7051c(&local_68,uVar4);
    FUN_00e705c8(&local_58,"[HERO_NAME]");
    uVar4 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 0x28),0);
    FUN_00e71248(&local_68,0,&local_58,uVar4);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    FUN_00910394(param_1,&local_68);
    FUN_00e6a8a8(&local_58,"build://Splash_%s.png",*(undefined8 *)(lVar2 + 0x10));
    FUN_008fa54c(local_80,&local_58);
    FUN_008fce60(param_1 + 0xe0,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    FUN_008fa54c(local_80,"full_splash_1k");
    FUN_008fce60(param_1 + 0xf8,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00910394(param_1 + 0x20,uVar4);
    *(undefined1 *)(param_1 + 0x1b4) = 1;
    FUN_008fa54c(local_80,"*KindredMenuMarketEffects*");
    FUN_008fce60(param_1 + 0x128,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    FUN_008fa54c(local_80,"EFFECT_HERO_UNLOCKED");
    FUN_008fce60(param_1 + 0x140,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    *(undefined4 *)(param_1 + 0x1ac) = 0x4049999a;
    FUN_008fa54c(local_80,"build://Sounds/UI.assetbundle/ui_tutorial_frontend_hero_unlock.mp3");
    FUN_008fce60(param_1 + 0x158,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    *(undefined1 *)(param_1 + 0x1b5) = 0;
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00caeb04(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte local_b0 [16];
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  lVar3 = FUN_00cc7618(pbVar7);
  if (lVar3 == 0) goto LAB_00caed3c;
  FUN_00cc78d0(&local_88,lVar3,1);
  uVar4 = FUN_00e6ce7c("MENU_PLATFORM_NOTIFICATION_SKIN_UNLOCKED_TITLE",0);
  thunk_FUN_00e7051c(&local_98,uVar4);
  FUN_00e705c8(&local_78,"[SKIN_NAME]");
  FUN_00e71248(&local_98,0,&local_78,&local_88);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00910394(param_1,&local_98);
  FUN_00e6a8a8(&local_78,"build://Splash_%s.png",*(undefined8 *)(lVar3 + 0x28));
  FUN_008fa54c(local_b0,&local_78);
  FUN_008fce60(param_1 + 0xe0,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  FUN_008fa54c(local_b0,"full_splash_1k");
  FUN_008fce60(param_1 + 0xf8,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00910394(param_1 + 0x20,uVar4);
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  FUN_008fa54c(local_b0,"*KindredMenuMarketEffects*");
  FUN_008fce60(param_1 + 0x128,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  FUN_008fa54c(local_b0,"EFFECT_SKIN_UNLOCKED");
  FUN_008fce60(param_1 + 0x140,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0x4049999a;
  FUN_008fa54c(local_b0,"build://Sounds/UI.assetbundle/ui_tutorial_frontend_hero_unlock.mp3");
  FUN_008fce60(param_1 + 0x158,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  *(undefined4 *)(param_1 + 400) = 0x3fe66666;
  if (*(char *)(lVar3 + 0x35) == '\0') {
    iVar1 = *(int *)(lVar3 + 0x20);
    if (iVar1 == 3) {
      FUN_008fa54c(local_b0,"Tier_3_Skin_Unlocked");
      FUN_008fce60(param_1 + 0x170,local_b0);
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar6 = 0x40133333;
      goto LAB_00caed14;
    }
    if (iVar1 == 2) {
      pcVar5 = "Tier_2_Skin_Unlocked";
LAB_00caedc8:
      FUN_008fa54c(local_b0,pcVar5);
      FUN_008fce60(param_1 + 0x170,local_b0);
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    else if (iVar1 == 1) {
      pcVar5 = "Tier_1_Skin_Unlocked";
      goto LAB_00caedc8;
    }
  }
  else {
    FUN_008fa54c(local_b0,"Special_Edition_Skin_Purchased");
    FUN_008fce60(param_1 + 0x170,local_b0);
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    uVar6 = 0x40266666;
LAB_00caed14:
    *(undefined4 *)(param_1 + 400) = uVar6;
  }
  *(undefined1 *)(param_1 + 0x1b5) = 0;
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
LAB_00caed3c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00caedf4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_168;
  void *local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [120];
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00976588(auStack_130);
  uVar2 = FUN_0096bf88(param_2,auStack_130);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_00e7051c(&local_140,auStack_118);
    uVar3 = FUN_00e6ce7c("MENU_PLATFORM_NOTIFICATION_BOOST_PURCHASED_TITLE",0);
    thunk_FUN_00e7051c(&local_150,uVar3);
    FUN_00e705c8(&local_168,"[BOOST_NAME]");
    FUN_00e71248(&local_150,0,&local_168,&local_140);
    if (local_160 != (void *)0x0) {
      operator_delete__(local_160);
      local_168 = 0;
      local_160 = (void *)0x0;
    }
    FUN_00910394(param_1,&local_150);
    FUN_008fa54c(&local_168,"build://BoostBadges.png");
    FUN_008fce60(param_1 + 0xe0,&local_168);
    if ((local_168 & 1) != 0) {
      operator_delete(local_158);
    }
    FUN_008fce60(param_1 + 0xf8,auStack_a0);
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00910394(param_1 + 0x20,uVar3);
    *(undefined1 *)(param_1 + 0x1b5) = 0;
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
  }
  FUN_009767f4(auStack_130);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00caef54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c("MENU_PLATFORM_NOTIFICATION_APP_PURCHASE_TITLE",0);
  FUN_00910394(param_1,uVar1);
  uVar1 = FUN_00e6ce7c("MENU_PLATFORM_NOTIFICATION_APP_PURCHASE_DIALOG",0);
  FUN_00910394(param_1 + 0x10,uVar1);
  FUN_008fce60(param_1 + 0x110,param_2);
  uVar1 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00910394(param_1 + 0x20,uVar1);
  return;
}




void FUN_00caefd4(long param_1,uint *param_2,uint param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  
  FUN_008fce60(param_1 + 0x10,param_2 + 4);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x38) = param_2[0xe];
  *(char *)(param_1 + 0x3c) = (char)param_2[0xf];
  if (param_3 < param_4 + param_3) {
    uVar2 = (ulong)param_3;
    lVar1 = (ulong)param_3 * 0x70;
    do {
      if (*param_2 <= uVar2) {
        return;
      }
      FUN_00cab544(param_1,*(long *)(param_2 + 2) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x70;
    } while (uVar2 < param_4 + param_3);
  }
  return;
}

