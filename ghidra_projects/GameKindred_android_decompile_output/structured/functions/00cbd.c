// functions/00cbd — 36 functions
#include "libGameKindred.h"




void thunk_FUN_00cbd080(long param_1)

{
  FUN_00c6126c(*(undefined8 *)(param_1 + 0x1d08));
  FUN_00f0d7fc(param_1 + 0x1da0,&DAT_01bee7fa);
  FUN_00f0d7fc(param_1 + 0x1ed0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x2000,&DAT_01bee7fe);
  return;
}




void thunk_FUN_00cbd0d8(long param_1)

{
  FUN_00c612ac(*(undefined8 *)(param_1 + 0x1d08));
  FUN_00f0d7fc(param_1 + 0x1da0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x1ed0,&DAT_01bee7fa);
  FUN_00f0d7fc(param_1 + 0x2000,&DAT_01bee7fe);
  return;
}




void thunk_FUN_00cbd130(long param_1)

{
  FUN_00c612ec(*(undefined8 *)(param_1 + 0x1d08));
  FUN_00f0d7fc(param_1 + 0x1da0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x1ed0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x2000,&DAT_01bee7fa);
  return;
}




void FUN_00cbd054(long *param_1)

{
  thunk_FUN_00b07e7c();
                    /* WARNING: Could not recover jumptable at 0x00cbd07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cbd080(long param_1)

{
  FUN_00c6126c(*(undefined8 *)(param_1 + 0x1d08));
  FUN_00f0d7fc(param_1 + 0x1da0,&DAT_01bee7fa);
  FUN_00f0d7fc(param_1 + 0x1ed0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x2000,&DAT_01bee7fe);
  return;
}




void FUN_00cbd0d8(long param_1)

{
  FUN_00c612ac(*(undefined8 *)(param_1 + 0x1d08));
  FUN_00f0d7fc(param_1 + 0x1da0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x1ed0,&DAT_01bee7fa);
  FUN_00f0d7fc(param_1 + 0x2000,&DAT_01bee7fe);
  return;
}




void FUN_00cbd130(long param_1)

{
  FUN_00c612ec(*(undefined8 *)(param_1 + 0x1d08));
  FUN_00f0d7fc(param_1 + 0x1da0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x1ed0,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x2000,&DAT_01bee7fa);
  return;
}




void FUN_00cbd188(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_3 = param_3 + 0x2470;
  puVar2 = (undefined8 *)FUN_00965ecc(param_3);
  uVar4 = *puVar2;
  fVar5 = (float)FUN_00f13e54(param_3);
  lVar3 = FUN_00965ecc(param_3);
  local_40 = CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * 0.5 +
                      (float)((ulong)uVar4 >> 0x20),
                      fVar5 * (float)*(undefined8 *)(lVar3 + 0x10) * 0.5 + (float)uVar4);
  FUN_00cc6230(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cbd188(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  param_3 = param_3 + 0x2470;
  puVar2 = (undefined8 *)FUN_00965ecc(param_3);
  uVar4 = *puVar2;
  fVar5 = (float)FUN_00f13e54(param_3);
  lVar3 = FUN_00965ecc(param_3);
  uStack_40 = CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * 0.5 +
                       (float)((ulong)uVar4 >> 0x20),
                       fVar5 * (float)*(undefined8 *)(lVar3 + 0x10) * 0.5 + (float)uVar4);
  FUN_00cc6230(&uStack_40);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbd238(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d00);
  FUN_00cbd288();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,"POPUP_KEY_IN_GAME_SETTINGS",1,0,1);
  return;
}




void FUN_00cbd288(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00b06f74();
  *param_1 = &PTR_FUN_0280af60;
  FUN_00bbdc04(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1[0x39f]);
  FUN_00b075b8(param_1,1);
  uVar2 = FUN_00e6ce7c("HUD_SETTINGS_TITLE",0);
  FUN_00b078b8(param_1,uVar2);
  iVar1 = FUN_0092f28c();
  if (iVar1 == 1) {
    FUN_00c02524(param_1[0x39f]);
    return;
  }
  return;
}




void FUN_00cbd314(long param_1)

{
  thunk_FUN_00b07e7c();
  FUN_00bbdcdc(param_1 + 0x1cf0,1);
  return;
}




void FUN_00cbd340(long param_1)

{
  thunk_FUN_00b07fec();
  FUN_00bbdcdc(param_1 + 0x1cf0,0);
  return;
}




void FUN_00cbd36c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  uVar4 = (ulong)(uint)(local_40 + -100.0);
  uVar5 = NEON_fminnm(fStack_3c + -200.0,0x453b8000);
  local_48 = 0x41200000;
  FUN_00b0877c(param_1,&local_48);
  fVar3 = (float)FUN_00b07b80(uVar5,uVar4,param_1);
  FUN_00b07b44(param_1);
  FUN_00b07d08(param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f13f08(fVar3 + -80.0,uVar4,*(undefined8 *)(param_1 + 0x1cf8));
  (**(code **)(**(long **)(param_1 + 0x1cf8) + 0x90))();
  lVar2 = *(long *)(param_1 + 0x1cf8);
  if ((*(float *)(lVar2 + 0x40) != 40.0) || (*(float *)(lVar2 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar2 + 0x40) = 0x42200000;
    FUN_0091ada4();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbd494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280af60;
  FUN_00bbdc54(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbd4d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280af60;
  FUN_00bbdc54(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbd514(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_0313d9b0 != (void *)0x0) && (uVar1 = FUN_00aa1934(DAT_0313d9b0), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x1cf8);
  FUN_00cbd5a0(pvVar2,param_1);
  DAT_0313d9b0 = pvVar2;
  FUN_00aa18e0(pvVar2,0,1,0,1);
  return;
}




void FUN_00cbd58c(void)

{
  if (DAT_0313d9b0 != 0) {
    FUN_00aa1934();
    return;
  }
  return;
}




void FUN_00cbd5a0(long *param_1,long param_2)

{
  ulong uVar1;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280b090;
  param_1[0x39e] = param_2;
  uVar1 = FUN_00f02540(param_2);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1[0x39e],1);
  }
  FUN_00b0780c(param_1,param_1[0x39e]);
                    /* WARNING: Could not recover jumptable at 0x00cbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cbd608(long param_1)

{
  long lVar1;
  undefined4 local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  fStack_44 = local_40 + -100.0;
  local_48 = FUN_00b07b80(fStack_3c + -200.0,param_1);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf0),&local_48);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x148))(*(long **)(param_1 + 0x1cf0),1);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x158))(*(long **)(param_1 + 0x1cf0),1);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x150))(*(long **)(param_1 + 0x1cf0),1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbd6f4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x1cf0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x148))(plVar1,0);
    (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x158))(*(long **)(param_1 + 0x1cf0),0);
    (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x150))(*(long **)(param_1 + 0x1cf0),0);
    uVar2 = FUN_00f02540(*(undefined8 *)(param_1 + 0x1cf0));
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_1 + 0x1cf0),1);
    }
  }
  thunk_FUN_00b07fec(param_1);
  DAT_0313d9b0 = 0;
  return;
}




void FUN_00cbd778(void *param_1)

{
  FUN_00b08b68();
  operator_delete(param_1);
  return;
}




void FUN_00cbd79c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  code *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  FUN_00aff644();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_0280b1c0;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x3d;
  FUN_00f0bdbc(plVar2,1);
  plVar3 = param_1 + 0x56;
  param_1[0x3d] = (long)&PTR_FUN_027ccd08;
  FUN_00ab6c24(plVar3,0);
  *(undefined1 *)((long)param_1 + 0x1874) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,plVar3,1);
  uVar7 = FUN_0092ea9c();
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar7 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar1,*ppuVar4);
  uVar5 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x13c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  FUN_00e705c8(&local_78,&DAT_01e277f2);
  FUN_00ab703c(0x41c00000,0x43fa0000,0x43fa0000,plVar3,0,&local_78,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = (code *)0x0;
    local_70 = (void *)0x0;
  }
  FUN_00ab7628(0x43480000,plVar3);
  FUN_00b09144(0,plVar3);
  local_50 = DAT_03210c64;
  local_78 = thunk_FUN_00cbdb90;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  local_70 = param_1;
  FUN_009693a0(param_1 + 0x57,&local_78);
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cbdb90(long param_1)

{
  long lVar1;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(abStack_40,PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38);
  FUN_00affa44(abStack_40);
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(char *)(param_1 + 0x1874) != '\0') {
    if (*(int *)(param_1 + 0x1870) == 1) {
      FUN_00a9bda0();
    }
    else if (*(int *)(param_1 + 0x1870) == 0) {
      FUN_009b8d90();
      FUN_009bb9fc();
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbd980(long param_1,int param_2)

{
  *(int *)(param_1 + 0x1870) = param_2;
  if (param_2 == 1) {
    FUN_00cbda0c();
    return;
  }
  if (param_2 == 0) {
    FUN_00cbd99c();
    return;
  }
  return;
}




void FUN_00cbd99c(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_MARKET_GLORY_PURCHASE_POPUP_DESC",0);
  FUN_00f0d75c(param_1 + 0xb8,uVar1);
  if (*(char *)(param_1 + 0x1874) == '\0') {
    pcVar2 = "GENERIC_DIALOG_OKAY";
  }
  else {
    pcVar2 = "MENU_MARKET_GET_GLORY";
  }
  uVar1 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x2b0,uVar1);
  return;
}




void FUN_00cbda0c(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_DESC",0);
  FUN_00f0d75c(param_1 + 0xb8,uVar1);
  if (*(char *)(param_1 + 0x1874) == '\0') {
    pcVar2 = "GENERIC_DIALOG_OKAY";
  }
  else {
    pcVar2 = "MENU_MARKET_GET_ICE";
  }
  uVar1 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x2b0,uVar1);
  return;
}




void FUN_00cbda7c(long *param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00aff690();
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0dad0(fVar3 + -200.0,param_1 + 0x17,1);
  plVar1 = param_1 + 0x3d;
  FUN_00f0bc10(0,0,0x42c80000,auStack_58);
  FUN_00f0c168(plVar1,auStack_58);
  (**(code **)(param_1[0x3d] + 0x90))(plVar1);
  FUN_00f0c030(0x3f000000,plVar1,0);
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x45) != fVar3 * 0.5) || (*(float *)((long)param_1 + 0x22c) != 100.0)) {
    *(float *)(param_1 + 0x45) = fVar3 * 0.5;
    *(undefined4 *)((long)param_1 + 0x22c) = 0x42c80000;
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbdb90(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38);
  FUN_00affa44(local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(char *)(param_1 + 0x1874) != '\0') {
    if (*(int *)(param_1 + 0x1870) == 1) {
      FUN_00a9bda0();
    }
    else if (*(int *)(param_1 + 0x1870) == 0) {
      FUN_009b8d90();
      FUN_009bb9fc();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbdc28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b1c0;
  FUN_009c7fa8(param_1 + 0x56);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00cbdc74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b1c0;
  FUN_009c7fa8(param_1 + 0x56);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbdcc8(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong local_98;
  void *local_90;
  void *local_88;
  ulong local_80;
  void *local_78;
  void *local_70;
  undefined4 local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b06f74();
  *param_1 = &PTR_FUN_0280b318;
  param_1[0x39e] = &PTR_FUN_027eb820;
  pvVar2 = operator_new(0xf48);
  FUN_00c1c8b4();
  param_1[0x39f] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1 + 0x39e;
  param_1[0x3a1] = 0;
  param_1[0x39e] = &PTR_FUN_027eb7e0;
  param_1[0x3a0] = 0;
  FUN_00b0780c(param_1,pvVar2);
  uVar3 = FUN_00e6ce7c("MENU_LEADERBOARDS_POPUP_TITLE",0);
  thunk_FUN_00e7051c(&local_58,uVar3);
  FUN_00e705c8(&local_80,"[SEASON_NAME]");
  FUN_00cb488c(&local_98,0,0,0);
  FUN_00e71248(&local_58,0,&local_80,&local_98);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  FUN_00b078b8(param_1,&local_58);
  FUN_00b075b8(param_1,1);
  FUN_00bc5c58(param_1 + 0x39e);
  FUN_00f00298(&fStack_5c,&local_60);
  local_80 = 0;
  FUN_00b0877c(param_1,&local_80);
  fStack_64 = local_60 + -100.0;
  local_68 = FUN_00b07b80(fStack_5c + -200.0,param_1);
  FUN_00b07d08(fStack_5c + -200.0,local_60 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f13f18(param_1[0x39f],&local_68);
  FUN_009f73a8();
  uVar3 = FUN_009580b8();
  FUN_008fa54c(&local_80,"view_leaderboard");
  FUN_008fa54c(&local_98,"True");
  FUN_00962bd8(uVar3,&local_80,&local_98);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
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




void FUN_00cbdef8(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d10);
  FUN_00cbdcc8();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cbdf44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b318;
  FUN_00bc5b8c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbdf80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b318;
  FUN_00bc5b8c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbdfc4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b06f74();
  *param_1 = &PTR_FUN_0280b448;
  FUN_00bc6d00(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1[0x39f]);
  uVar2 = FUN_00e6ce7c("MENU_EVENTS_POPUP_TITLE",0);
  FUN_00b078b8(param_1,uVar2);
  FUN_00b075b8(param_1,1);
  FUN_00bc6fbc(param_1 + 0x39e);
  FUN_00f00298(&fStack_4c,&local_50);
  FUN_00b07d08(fStack_4c + -140.0,local_50 + -140.0,param_1,0);
  local_58 = NEON_fmov(0x40a00000,4);
  FUN_00b0877c(param_1,&local_58);
  FUN_00b07b80(fStack_4c + -140.0,local_50 + -140.0,param_1);
  FUN_00f13f08(param_1[0x39f]);
  FUN_00b0828c(param_1);
  FUN_009fa738();
  FUN_00e85318(0);
  FUN_00939d80();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

