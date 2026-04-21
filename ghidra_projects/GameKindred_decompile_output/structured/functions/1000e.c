// functions/1000e — 286 functions
#include "GameKindred.h"




long * FUN_1000e0104(long *param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_FUN_1014572f8;
  puVar2 = puVar2 + 0x11;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  param_1[0x55] = DAT_101dc1cb8;
  *(undefined1 *)(param_1 + 0x56) = param_3;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(puVar2,&DAT_10115a168,2);
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f;
    FUN_1000200a0(puVar2);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_1006513c0(plVar1,param_2);
  return param_1;
}




long * thunk_FUN_1000e0104(long *param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_FUN_1014572f8;
  puVar2 = puVar2 + 0x11;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  param_1[0x55] = DAT_101dc1cb8;
  *(undefined1 *)(param_1 + 0x56) = param_3;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(puVar2,&DAT_10115a168,2);
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f;
    FUN_1000200a0(puVar2);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_1006513c0(plVar1,param_2);
  return param_1;
}




void FUN_1000e0218(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x2a8) = param_1;
  *(undefined4 *)(param_3 + 0x2ac) = param_2;
  return;
}




void FUN_1000e0224(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10c);
  uVar2 = 0x33;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0x10c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_1000200a0(param_1 + 0x88);
  return;
}




undefined4 FUN_1000e025c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2a8);
}




void FUN_1000e0268(long param_1)

{
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2ac),param_1 + 0x88);
  FUN_10064e5ec(0x41400000,0,param_1 + 0x178,7,param_1 + 0x88,7);
  return;
}




float FUN_1000e02b0(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_10064259c(param_1 + 0x178);
  return fVar1 + 24.0;
}




void FUN_1000e02d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014572f8;
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000e0334(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014572f8;
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_1000e0398(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1000df1c0();
  *puVar2 = &PTR_FUN_1014573f8;
  FUN_1000bf3c0(puVar2 + 0x1ef);
  uVar3 = FUN_1004e0150("HUD_SETTINGS_TITLE",0);
  FUN_1000df55c(param_1,uVar3);
  FUN_1000df4ac(param_1,*(undefined8 *)(param_1 + 0xf80));
  FUN_1000cd300(*(undefined8 *)(param_1 + 0xf80),1);
  iVar1 = FUN_10012709c();
  if (iVar1 == 1) {
    FUN_1000cd1fc(*(undefined8 *)(param_1 + 0xf80));
  }
  return param_1;
}




long thunk_FUN_1000e0398(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1000df1c0();
  *puVar2 = &PTR_FUN_1014573f8;
  FUN_1000bf3c0(puVar2 + 0x1ef);
  uVar3 = FUN_1004e0150("HUD_SETTINGS_TITLE",0);
  FUN_1000df55c(param_1,uVar3);
  FUN_1000df4ac(param_1,*(undefined8 *)(param_1 + 0xf80));
  FUN_1000cd300(*(undefined8 *)(param_1 + 0xf80),1);
  iVar1 = FUN_10012709c();
  if (iVar1 == 1) {
    FUN_1000cd1fc(*(undefined8 *)(param_1 + 0xf80));
  }
  return param_1;
}




void FUN_1000e041c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014573f8;
  FUN_1000bf408(param_1 + 0x1ef);
  FUN_1000df8c8(param_1);
  return;
}




void FUN_1000e0450(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014573f8;
  FUN_1000bf408(param_1 + 0x1ef);
  pvVar1 = (void *)FUN_1000df8c8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e0488(long param_1,undefined8 param_2)

{
  FUN_1000df4bc();
  FUN_1000bf48c(param_1 + 0xf78,param_2);
  return;
}




void FUN_1000e04b4(long param_1)

{
  FUN_1000df564();
                    /* WARNING: Could not recover jumptable at 0x0001000e04dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf80) + 0x90))();
  return;
}




void FUN_1000e04e0(long param_1)

{
  FUN_1000cc828(*(undefined8 *)(param_1 + 0xf80));
  return;
}




undefined8 FUN_1000e04e8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1000df1c0();
  *puVar1 = &PTR_thunk_FUN_1000e0538_101457548;
  thunk_FUN_100305108(puVar1 + 0x1ef,1);
  FUN_1000df4ac(param_1,puVar1 + 0x1ef);
  return param_1;
}




undefined8 thunk_FUN_1000e04e8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1000df1c0();
  *puVar1 = &PTR_thunk_FUN_1000e0538_101457548;
  thunk_FUN_100305108(puVar1 + 0x1ef,1);
  FUN_1000df4ac(param_1,puVar1 + 0x1ef);
  return param_1;
}




void FUN_1000e0538(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000e0538_101457548;
  param_1[0x1ef] = &PTR_FUN_10148e6e8;
  FUN_10003bd40(param_1 + 0x393);
  param_1[0x24a] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x36b);
  FUN_1002ebc50(param_1 + 0x24a);
  thunk_FUN_100651068(param_1 + 0x224);
  param_1[0x206] = &PTR_FUN_1014a7108;
  param_1[0x21d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x220);
  FUN_10064e2bc(param_1 + 0x206);
  FUN_10064e2bc(param_1 + 0x1ef);
  FUN_1000df8c8(param_1);
  return;
}




void thunk_FUN_1000e0538(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000e0538_101457548;
  param_1[0x1ef] = &PTR_FUN_10148e6e8;
  FUN_10003bd40(param_1 + 0x393);
  param_1[0x24a] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x36b);
  FUN_1002ebc50(param_1 + 0x24a);
  thunk_FUN_100651068(param_1 + 0x224);
  param_1[0x206] = &PTR_FUN_1014a7108;
  param_1[0x21d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x220);
  FUN_10064e2bc(param_1 + 0x206);
  FUN_10064e2bc(param_1 + 0x1ef);
  FUN_1000df8c8(param_1);
  return;
}




void FUN_1000e0604(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e0538();
  operator_delete(pvVar1);
  return;
}




void FUN_1000e0618(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2698(auStack_a8,DAT_10184e0e8);
  FUN_1004e3120(auStack_b8,"");
  FUN_1000df55c(param_1,auStack_b8);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  *(uint *)(param_1 + 0x86c) = *(uint *)(param_1 + 0x86c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("TUTORIAL_1_COMPLETE_BODY",0);
  FUN_1003053bc(param_1 + 0xf78,auStack_a8,"Cutscene_Avatar",uVar1);
  *(undefined4 *)(param_1 + 0xf74) = 0x43480000;
  *(undefined4 *)(param_1 + 0xf68) = 0x43160000;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000e0700(long param_1)

{
  FUN_1000df564();
  FUN_10064e32c(param_1 + 0xf78);
  return;
}




long * FUN_1000e0724(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 local_58 [2];
  
  puVar6 = (undefined8 *)FUN_10052fa40();
  *puVar6 = &PTR_FUN_101457698;
  puVar6 = puVar6 + 0x48;
  thunk_FUN_100655644(puVar6);
  plVar1 = param_1 + 0x73;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x91;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xaf;
  thunk_FUN_100655644(plVar3);
  plVar4 = param_1 + 0xda;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x100;
  thunk_FUN_100650e64(plVar5);
  *(undefined4 *)(param_1 + 0x126) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  FUN_100655930(puVar6,plVar1,1);
  FUN_100655930(puVar6,plVar2,1);
  FUN_100655930(puVar6,plVar3,1);
  FUN_100655930(plVar3,plVar4,1);
  FUN_100655930(plVar3,plVar5,1);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_frame");
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  local_58[0] = 0xffc0c0c0;
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,local_58);
  *(uint *)((long)param_1 + 0x50c) = *(uint *)((long)param_1 + 0x50c) & 0xfffffffb;
  FUN_100530048(param_1,1);
  return param_1;
}




void FUN_1000e08b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float local_58;
  float fStack_54;
  
  fVar7 = *(float *)(param_1 + 0x930);
  lVar1 = param_1 + 0x398;
  fVar5 = (float)FUN_10065317c(lVar1);
  fVar5 = (fVar7 - fVar5) + -32.0;
  lVar2 = param_1 + 0x6d0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x718) == 1.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x71c)))) {
    bVar4 = *(float *)(param_1 + 0x71c) == 1.0;
  }
  uVar8 = NEON_fmov(0x3f800000,4);
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x718) = uVar8;
    FUN_1000200a0(lVar2);
  }
  FUN_100651708(fVar5,lVar2,1);
  FUN_10065179c(fVar5,0,0x3f800000,lVar2);
  lVar3 = param_1 + 0x800;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x848) == 1.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x84c)))) {
    bVar4 = *(float *)(param_1 + 0x84c) == 1.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x848) = uVar8;
    FUN_1000200a0(lVar3);
  }
  FUN_100651708(fVar5,lVar3,1);
  fVar7 = 0.0;
  FUN_10065179c(fVar5,0,0x3f800000,lVar3);
  FUN_10064e72c(0x41000000,lVar3,0,lVar2,2);
  FUN_10064e72c(0,lVar3,3,lVar2,3);
  lVar2 = param_1 + 0x578;
  FUN_1006557ec(lVar2);
  FUN_10064e72c(0xc2000000,lVar1,1,lVar2,3);
  FUN_10064e72c(0,lVar1,5,lVar2,5);
  local_58 = (float)FUN_100652e60(lVar1);
  local_58 = local_58 * 0.8;
  fStack_54 = fVar7 * 0.8;
  FUN_10064e48c(param_1 + 0x488,&local_58);
  uVar6 = 0;
  FUN_10064e5ec(0,param_1 + 0x488,8,lVar1,8);
  FUN_1006557ec(param_1 + 0x240);
  local_58 = (float)FUN_10064e3cc(param_1 + 0x240);
  fStack_54 = (float)uVar6;
  FUN_10064e48c(param_1,&local_58);
  return;
}




long * FUN_1000e0a84(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *(undefined4 *)(puVar1 + 0x2c) = param_2;
  *(undefined4 *)((long)puVar1 + 0x164) = 0;
  *puVar1 = &PTR_thunk_FUN_1000e0b24_1014577f0;
  puVar1[0x2b] = &PTR_FUN_101457958;
  puVar1 = puVar1 + 0x2d;
  thunk_FUN_100650e64(puVar1);
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100651594(puVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  return param_1;
}




long * thunk_FUN_1000e0a84(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *(undefined4 *)(puVar1 + 0x2c) = param_2;
  *(undefined4 *)((long)puVar1 + 0x164) = 0;
  *puVar1 = &PTR_thunk_FUN_1000e0b24_1014577f0;
  puVar1[0x2b] = &PTR_FUN_101457958;
  puVar1 = puVar1 + 0x2d;
  thunk_FUN_100650e64(puVar1);
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100651594(puVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  return param_1;
}




void FUN_1000e0b24(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  *param_1 = &PTR_thunk_FUN_1000e0b24_1014577f0;
  param_1[0x2b] = &PTR_FUN_101457958;
  plVar1 = (long *)param_1[0x54];
  uVar3 = *(uint *)(param_1 + 0x53);
  plVar4 = plVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)*plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x53);
        plVar1 = (long *)param_1[0x54];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar3);
  }
  if (plVar1 != (long *)0x0) {
    operator_delete__(plVar1);
    param_1[0x53] = 0;
    param_1[0x54] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x2d);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000e0b24(void)

{
  FUN_1000e0b24();
  return;
}




void FUN_1000e0bcc(long param_1)

{
  FUN_1000e0b24(param_1 + -0x158);
  return;
}




void FUN_1000e0bd4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e0b24();
  operator_delete(pvVar1);
  return;
}




void FUN_1000e0be8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e0b24(param_1 + -0x158);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e0c00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long local_68;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_38;
  
  pvVar1 = operator_new(0x938);
  local_68 = FUN_1000e0724();
  FUN_1006513c0(local_68 + 0x6d0,param_2);
  FUN_1000e08b4(pvVar1);
  FUN_1006513c0((long)pvVar1 + 0x800,param_3);
  FUN_1000e08b4(pvVar1);
  local_40 = (ulong)*(uint *)(param_1 + 0x53);
  local_38 = DAT_101d91884;
  local_60 = FUN_1000e0ce4;
  local_50 = 0;
  uStack_48 = 0;
  plStack_58 = param_1;
  FUN_10001554c((long)pvVar1 + 8,&local_60);
  FUN_1000e0cec(param_1 + 0x53,&local_68);
  (**(code **)(*param_1 + 0x78))(param_1,local_68,1);
  if ((int)param_1[0x53] == 1) {
    FUN_1000e0d6c(param_1,0);
  }
  return;
}




void FUN_1000e0ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000e0eb8(param_1,param_2,param_5);
  return;
}




void FUN_1000e0cec(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000e2658(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000e0d6c(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar5;
  long *plVar4;
  
  *(uint *)(param_1 + 0x164) = param_2;
  if (*(int *)(param_1 + 0x298) != 0) {
    plVar2 = *(long **)(param_1 + 0x2a0);
    plVar3 = plVar2;
    plVar5 = plVar2;
    do {
      plVar4 = plVar3 + 1;
      uVar1 = *(uint *)(*plVar3 + 0x50c);
      *(uint *)(*plVar3 + 0x50c) =
           uVar1 & 0xfffffff8 |
           uVar1 & 3 | (uint)((ulong)param_2 == (long)plVar2 - (long)plVar5 >> 3) << 2;
      plVar5 = *(long **)(param_1 + 0x2a0);
      plVar2 = plVar2 + 1;
      plVar3 = plVar4;
    } while (plVar4 != plVar5 + *(uint *)(param_1 + 0x298));
  }
  return;
}




void FUN_1000e0dc0(long param_1)

{
  FUN_1006513c0(param_1 + 0x168);
  return;
}




void thunk_FUN_1000e0d6c(void)

{
  FUN_1000e0d6c();
  return;
}




void FUN_1000e0dcc(long param_1)

{
  FUN_1000e0d6c(param_1 + -0x158);
  return;
}




void FUN_1000e0dd4(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x55) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001000e0de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))();
  return;
}




void FUN_1000e0de4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x150) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001000e0df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -0x158) + 0x138))((long *)(param_2 + -0x158));
  return;
}




void FUN_1000e0dfc(void)

{
  return;
}




long FUN_1000e0e00(long param_1)

{
  return param_1 + -0x158;
}




void FUN_1000e0e08(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x298) != 0) {
    plVar3 = *(long **)(param_1 + 0x2a0);
    do {
      *(undefined4 *)(*plVar3 + 0x930) = *(undefined4 *)(param_1 + 0x2a8);
      FUN_1000e08b4();
      lVar1 = param_1 + 0x168;
      if (plVar3 != *(long **)(param_1 + 0x2a0)) {
        lVar1 = plVar3[-1];
      }
      plVar4 = plVar3 + 1;
      lVar2 = *plVar3;
      FUN_10064e72c(0x42000000,lVar2,0,lVar1,2);
      FUN_10064e72c(0,lVar2,3,lVar1,3);
      plVar3 = plVar4;
    } while (plVar4 != (long *)(*(long *)(param_1 + 0x2a0) + (ulong)*(uint *)(param_1 + 0x298) * 8))
    ;
  }
  FUN_1006557ec(param_1);
  return;
}




void FUN_1000e0eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  FUN_1000e0d6c(param_1,param_3);
  FUN_100644aec(auStack_40,DAT_101d23038,param_1 + 0x164);
  FUN_100644c34(param_1,auStack_40,0);
  return;
}




long * FUN_1000e0f08(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar7 = (undefined8 *)FUN_10052fa40();
  *(undefined4 *)(puVar7 + 0x49) = param_2;
  *(undefined4 *)((long)puVar7 + 0x24c) = 0;
  *puVar7 = &PTR_FUN_101457990;
  puVar7[0x48] = &PTR_FUN_101457b00;
  puVar1 = puVar7 + 0x4a;
  thunk_FUN_100655644(puVar1);
  plVar2 = param_1 + 0x75;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x93;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xb1;
  thunk_FUN_100655644(plVar4);
  plVar5 = param_1 + 0xdc;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x102;
  thunk_FUN_100650e64(plVar6);
  *(undefined4 *)(param_1 + 0x128) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100655930(puVar1,plVar2,1);
  FUN_100655930(puVar1,plVar3,1);
  FUN_100655930(puVar1,plVar4,1);
  FUN_100655930(plVar4,plVar5,1);
  FUN_100655930(plVar4,plVar6,1);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"checkbox_hud_empty");
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"checkbox_hud_filled");
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  local_80 = (code *)CONCAT44(local_80._4_4_,0xffc0c0c0);
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_80);
  local_58 = DAT_101d91884;
  local_80 = thunk_FUN_1000e13b4;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  *(uint *)((long)param_1 + 0x42c) = *(uint *)((long)param_1 + 0x42c) | 4;
  *(uint *)((long)param_1 + 0x51c) = *(uint *)((long)param_1 + 0x51c) & 0xfffffffb;
  *(undefined1 *)((long)puVar7 + 0x24c) = 0;
  FUN_100530048(param_1,1);
  return param_1;
}




void thunk_FUN_1000e13b4(long param_1)

{
  byte bVar1;
  undefined1 auStack_40 [32];
  
  bVar1 = *(byte *)(param_1 + 0x24c);
  *(uint *)(param_1 + 0x42c) = *(uint *)(param_1 + 0x42c) & 0xfffffffb | (uint)bVar1 << 2;
  *(uint *)(param_1 + 0x51c) =
       *(uint *)(param_1 + 0x51c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x51c) & 3 | (uint)(bVar1 == 0) << 2;
  *(byte *)(param_1 + 0x24c) = bVar1 ^ 1;
  FUN_100644aec(auStack_40,DAT_101d23038,param_1 + 0x24c);
  FUN_100644c34(param_1,auStack_40,0);
  return;
}




long * thunk_FUN_1000e0f08(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar7 = (undefined8 *)FUN_10052fa40();
  *(undefined4 *)(puVar7 + 0x49) = param_2;
  *(undefined4 *)((long)puVar7 + 0x24c) = 0;
  *puVar7 = &PTR_FUN_101457990;
  puVar7[0x48] = &PTR_FUN_101457b00;
  puVar1 = puVar7 + 0x4a;
  thunk_FUN_100655644(puVar1);
  plVar2 = param_1 + 0x75;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x93;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xb1;
  thunk_FUN_100655644(plVar4);
  plVar5 = param_1 + 0xdc;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x102;
  thunk_FUN_100650e64(plVar6);
  *(undefined4 *)(param_1 + 0x128) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100655930(puVar1,plVar2,1);
  FUN_100655930(puVar1,plVar3,1);
  FUN_100655930(puVar1,plVar4,1);
  FUN_100655930(plVar4,plVar5,1);
  FUN_100655930(plVar4,plVar6,1);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"checkbox_hud_empty");
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"checkbox_hud_filled");
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,0xffc0c0c0);
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&pcStack_80);
  uStack_58 = DAT_101d91884;
  pcStack_80 = thunk_FUN_1000e13b4;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_80);
  *(uint *)((long)param_1 + 0x42c) = *(uint *)((long)param_1 + 0x42c) | 4;
  *(uint *)((long)param_1 + 0x51c) = *(uint *)((long)param_1 + 0x51c) & 0xfffffffb;
  *(undefined1 *)((long)puVar7 + 0x24c) = 0;
  FUN_100530048(param_1,1);
  return param_1;
}




void FUN_1000e10f8(long param_1)

{
  FUN_1006513c0(param_1 + 0x6e0);
  FUN_1000e1120(param_1);
  return;
}




void FUN_1000e1120(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  
  lVar1 = param_1 + 0x3a8;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x3f0) == 1.5) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x3f4)))) {
    bVar4 = *(float *)(param_1 + 0x3f4) == 1.5;
  }
  uVar8 = NEON_fmov(0x3fc00000,4);
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x3f0) = uVar8;
    FUN_1000200a0(lVar1);
  }
  bVar4 = false;
  if ((*(float *)(param_1 + 0x4e0) == 1.5) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x4e4)))) {
    bVar4 = *(float *)(param_1 + 0x4e4) == 1.5;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x4e0) = uVar8;
    FUN_1000200a0(param_1 + 0x498);
  }
  fVar7 = *(float *)(param_1 + 0x940);
  fVar5 = (float)FUN_10065317c(lVar1);
  fVar5 = (fVar7 - fVar5) + -32.0;
  lVar2 = param_1 + 0x6e0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x728) == 1.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x72c)))) {
    bVar4 = *(float *)(param_1 + 0x72c) == 1.0;
  }
  uVar8 = NEON_fmov(0x3f800000,4);
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x728) = uVar8;
    FUN_1000200a0(lVar2);
  }
  FUN_100651708(fVar5,lVar2,1);
  FUN_10065179c(fVar5,0,0x3f800000,lVar2);
  lVar3 = param_1 + 0x810;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x858) == 1.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x85c)))) {
    bVar4 = *(float *)(param_1 + 0x85c) == 1.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x858) = uVar8;
    FUN_1000200a0(lVar3);
  }
  FUN_100651708(fVar5,lVar3,1);
  FUN_10065179c(fVar5,0,0x3f800000,lVar3);
  FUN_10064e72c(0x41000000,lVar3,0,lVar2,2);
  FUN_10064e72c(0,lVar3,3,lVar2,3);
  lVar2 = param_1 + 0x588;
  FUN_1006557ec(lVar2);
  FUN_10064e72c(0xc2000000,lVar1,1,lVar2,3);
  FUN_10064e72c(0,lVar1,5,lVar2,5);
  uVar6 = 0;
  FUN_10064e5ec(0,param_1 + 0x498,3,lVar1,3);
  FUN_1006557ec(param_1 + 0x250);
  local_68 = FUN_10064e3cc(param_1 + 0x250);
  uStack_64 = uVar6;
  FUN_10064e48c(param_1,&local_68);
  return;
}




void FUN_1000e1318(long param_1)

{
  FUN_1006513c0(param_1 + 0x810);
  FUN_1000e1120(param_1);
  return;
}




void FUN_1000e1340(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x42c) =
       (*(uint *)(param_1 + 0x42c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x42c) & 3 | (param_2 & 1) << 2) ^ 4;
  *(uint *)(param_1 + 0x51c) =
       *(uint *)(param_1 + 0x51c) & 0xfffffff8 | *(uint *)(param_1 + 0x51c) & 3 | (param_2 & 1) << 2
  ;
  *(byte *)(param_1 + 0x24c) = (byte)param_2 & 1;
  return;
}




void FUN_1000e1368(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1ec) =
       (*(uint *)(param_1 + 0x1ec) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1ec) & 3 | (param_2 & 1) << 2) ^ 4;
  *(uint *)(param_1 + 0x2dc) =
       *(uint *)(param_1 + 0x2dc) & 0xfffffff8 | *(uint *)(param_1 + 0x2dc) & 3 | (param_2 & 1) << 2
  ;
  *(byte *)(param_1 + 0xc) = (byte)param_2 & 1;
  return;
}




void FUN_1000e1390(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x940) = param_1;
  FUN_1000e1120();
  return;
}




void FUN_1000e1398(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x700) = param_1;
  FUN_1000e1120(param_2 + -0x240);
  return;
}




void FUN_1000e13a8(void)

{
  return;
}




long FUN_1000e13ac(long param_1)

{
  return param_1 + -0x240;
}




void FUN_1000e13b4(long param_1)

{
  byte bVar1;
  undefined1 auStack_40 [32];
  
  bVar1 = *(byte *)(param_1 + 0x24c);
  *(uint *)(param_1 + 0x42c) = *(uint *)(param_1 + 0x42c) & 0xfffffffb | (uint)bVar1 << 2;
  *(uint *)(param_1 + 0x51c) =
       *(uint *)(param_1 + 0x51c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x51c) & 3 | (uint)(bVar1 == 0) << 2;
  *(byte *)(param_1 + 0x24c) = bVar1 ^ 1;
  FUN_100644aec(auStack_40,DAT_101d23038,param_1 + 0x24c);
  FUN_100644c34(param_1,auStack_40,0);
  return;
}




long * FUN_1000e142c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10052fa40();
  *puVar1 = &PTR_FUN_101457b38;
  thunk_FUN_100650e64(puVar1 + 0x48);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x48,1);
  return param_1;
}




void thunk_FUN_1000e1484(void)

{
  FUN_1000e1484();
  return;
}




void FUN_1000e1484(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  FUN_10065179c(uVar1,0,0x3f800000,param_1 + 0x48);
  FUN_10064e5ec(0,0,param_1 + 0x48,7,param_1,7);
  return;
}




void FUN_1000e14d8(long param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  undefined4 local_34;
  
  if (param_2 == 0) {
    local_34 = 0xffa0a0a0;
    fVar2 = 1.0;
  }
  else {
    local_34 = DAT_101dc65fc;
    fVar2 = 1.2;
  }
  FUN_100651460(param_1 + 0x240,&local_34);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x288) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x28c)) && !NAN(fVar2))) {
    bVar1 = *(float *)(param_1 + 0x28c) == fVar2;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x288) = fVar2;
    *(float *)(param_1 + 0x28c) = fVar2;
    FUN_1000200a0(param_1 + 0x240);
  }
  FUN_1000e1484(param_1);
  return;
}




long FUN_1000e156c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *(undefined4 *)(puVar2 + 0x18) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc4) = 0;
  *puVar2 = &PTR_thunk_FUN_1000e1718_101457c90;
  puVar2[0x17] = &PTR_FUN_101457df8;
  thunk_FUN_100650e64(puVar2 + 0x19);
  FUN_10064e264(param_1 + 0x1f8);
  FUN_1006505b8(param_1 + 0x2b0);
  thunk_FUN_100652c08(param_1 + 0x388);
  FUN_10064e264(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x538) = 0;
  local_50 = (code *)CONCAT62(local_50._2_6_,5);
  FUN_10064e5b8(param_1,&local_50);
  local_28 = DAT_101dbd458;
  local_50 = FUN_1000e16f0;
  lVar1 = param_1 + 0x480;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&local_50);
  local_28 = DAT_101dbd484;
  local_50 = FUN_1000e16fc;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&local_50);
  local_28 = DAT_101dbd460;
  local_50 = thunk_FUN_1000e1f28;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&local_50);
  local_28 = DAT_101dbd48c;
  local_50 = thunk_FUN_1000e1f28;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&local_50);
  local_28 = DAT_101dbd4a4;
  local_50 = thunk_FUN_1000e1fec;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&local_50);
  return param_1;
}




void FUN_1000e16f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000e1e24(param_1,param_4,0);
  return;
}




void FUN_1000e16fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000e1e24(param_1,param_4,1);
  return;
}




void thunk_FUN_1000e1f28(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_30;
  code *pcStack_28;
  
  iVar2 = FUN_1006415d4(param_1 + 0x3f);
  if (iVar2 == 0) {
    for (plVar5 = (long *)param_1[0x44]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
      uVar4 = FUN_1006415d4(plVar5);
      if ((uVar4 & 1) != 0) goto LAB_1000e1f4c;
    }
  }
  else {
    plVar5 = param_1 + 0x8f;
LAB_1000e1f4c:
    lVar3 = FUN_1006415c4(plVar5);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_28 = thunk_FUN_1000e1cb0;
      plStack_30 = param_1;
      FUN_100643a8c(&plStack_30);
      bVar1 = false;
      if ((*(float *)(param_1 + 0x7a) == 1.0) &&
         (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x3d4)))) {
        bVar1 = *(float *)((long)param_1 + 0x3d4) == 1.0;
      }
      if (!bVar1) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_1000200a0(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_100641598(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  return;
}




void thunk_FUN_1000e1f28(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_30;
  code *pcStack_28;
  
  iVar2 = FUN_1006415d4(param_1 + 0x3f);
  if (iVar2 == 0) {
    for (plVar5 = (long *)param_1[0x44]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
      uVar4 = FUN_1006415d4(plVar5);
      if ((uVar4 & 1) != 0) goto LAB_1000e1f4c;
    }
  }
  else {
    plVar5 = param_1 + 0x8f;
LAB_1000e1f4c:
    lVar3 = FUN_1006415c4(plVar5);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_28 = thunk_FUN_1000e1cb0;
      plStack_30 = param_1;
      FUN_100643a8c(&plStack_30);
      bVar1 = false;
      if ((*(float *)(param_1 + 0x7a) == 1.0) &&
         (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x3d4)))) {
        bVar1 = *(float *)((long)param_1 + 0x3d4) == 1.0;
      }
      if (!bVar1) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_1000200a0(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_100641598(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  return;
}




void thunk_FUN_1000e1fec(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_30;
  code *pcStack_28;
  
  iVar2 = FUN_1006415d4(param_1 + 0x3f);
  if (iVar2 == 0) {
    for (plVar5 = (long *)param_1[0x44]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
      uVar4 = FUN_1006415d4(plVar5);
      if ((uVar4 & 1) != 0) goto LAB_1000e2010;
    }
  }
  else {
    plVar5 = param_1 + 0x8f;
LAB_1000e2010:
    lVar3 = FUN_1006415c4(plVar5);
    if (lVar3 != 0) {
      iVar2 = FUN_1006415d4(param_1);
      if ((iVar2 != 0) && (param_1[0xa7] != 0)) {
        FUN_100641598();
      }
      param_1[0xa7] = lVar3;
      FUN_100641584(lVar3,param_1 + 0x8f);
      return;
    }
  }
  pcStack_28 = thunk_FUN_1000e1cb0;
  plStack_30 = param_1;
  FUN_100643a8c(&plStack_30);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x7a) == 1.0) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x3d4)))) {
    bVar1 = *(float *)((long)param_1 + 0x3d4) == 1.0;
  }
  if (!bVar1) {
    lVar3 = NEON_fmov(0x3f800000,4);
    param_1[0x7a] = lVar3;
    FUN_1000200a0(param_1 + 0x71);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  if (param_1[0xa7] != 0) {
    FUN_100641598();
    param_1[0xa7] = 0;
  }
  return;
}




long thunk_FUN_1000e156c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *(undefined4 *)(puVar2 + 0x18) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc4) = 0;
  *puVar2 = &PTR_thunk_FUN_1000e1718_101457c90;
  puVar2[0x17] = &PTR_FUN_101457df8;
  thunk_FUN_100650e64(puVar2 + 0x19);
  FUN_10064e264(param_1 + 0x1f8);
  FUN_1006505b8(param_1 + 0x2b0);
  thunk_FUN_100652c08(param_1 + 0x388);
  FUN_10064e264(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x538) = 0;
  pcStack_50 = (code *)CONCAT62(pcStack_50._2_6_,5);
  FUN_10064e5b8(param_1,&pcStack_50);
  uStack_28 = DAT_101dbd458;
  pcStack_50 = FUN_1000e16f0;
  lVar1 = param_1 + 0x480;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&pcStack_50);
  uStack_28 = DAT_101dbd484;
  pcStack_50 = FUN_1000e16fc;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&pcStack_50);
  uStack_28 = DAT_101dbd460;
  pcStack_50 = thunk_FUN_1000e1f28;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&pcStack_50);
  uStack_28 = DAT_101dbd48c;
  pcStack_50 = thunk_FUN_1000e1f28;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&pcStack_50);
  uStack_28 = DAT_101dbd4a4;
  pcStack_50 = thunk_FUN_1000e1fec;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar1,&pcStack_50);
  return param_1;
}




void FUN_1000e1718(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1000e1718_101457c90;
  param_1[0x17] = &PTR_FUN_101457df8;
  pcStack_28 = thunk_FUN_1000e1cb0;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  thunk_FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  FUN_10064e2bc(param_1 + 0x56);
  thunk_FUN_10064e2bc(param_1 + 0x3f);
  thunk_FUN_100651068(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000e1718(void)

{
  FUN_1000e1718();
  return;
}




void FUN_1000e17bc(long param_1)

{
  FUN_1000e1718(param_1 + -0xb8);
  return;
}




void FUN_1000e17c4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e1718();
  operator_delete(pvVar1);
  return;
}




void FUN_1000e17d8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e1718(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e17f0(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *local_68;
  
  plVar1 = param_2 + 0x19;
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  plVar2 = param_2 + 0x3f;
  (**(code **)(*param_2 + 0x78))(param_2,plVar2,1);
  FUN_100642bd8(plVar2,param_2 + 0x56,1);
  plVar3 = param_2 + 0x71;
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_2 + 0x8f,1);
  *(undefined4 *)(param_2 + 0xa6) = param_1;
  FUN_1006513c0(plVar1,param_3);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  FUN_100650608(param_2 + 0x56,&DAT_10115a16c);
  FUN_100652cac(plVar3,param_4,param_5);
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_2[0x71] + 0x28))(plVar3,&local_68);
  *(uint *)((long)param_2 + 0x4fc) = *(uint *)((long)param_2 + 0x4fc) | 0x10;
  (**(code **)(*param_2 + 0x90))(param_2);
  return;
}




void FUN_1000e1934(undefined8 param_1,float param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  undefined8 uVar3;
  
  plVar1 = param_3 + 0x71;
  FUN_10065317c(plVar1);
  FUN_10064e47c(param_1,param_3 + 0x3f);
  fVar2 = (float)FUN_10065317c(plVar1);
  FUN_100652e60(plVar1);
  FUN_10064e47c((float)param_1 - fVar2,param_2 * *(float *)(param_3 + 0xa6),param_3 + 0x56);
  uVar3 = FUN_10064e3cc(param_3 + 0x56);
  FUN_10065317c(plVar1);
  FUN_10064e47c(uVar3,param_3 + 0x8f);
                    /* WARNING: Could not recover jumptable at 0x0001000e19d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_1000e19dc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_10064e32c();
  (**(code **)(*param_3 + 0x48))(param_3);
  plVar1 = param_3 + 0x71;
  fVar5 = param_2;
  FUN_100652e60(plVar1);
  param_2 = param_2 - fVar5;
  fVar5 = *(float *)(param_3 + 0x47);
  bVar3 = false;
  if ((fVar5 == 0.0) && (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x23c)) && !NAN(param_2))) {
    bVar3 = *(float *)((long)param_3 + 0x23c) == param_2;
  }
  if (!bVar3) {
    *(undefined4 *)(param_3 + 0x47) = 0;
    *(float *)((long)param_3 + 0x23c) = param_2;
    FUN_1000200a0(param_3 + 0x3f);
  }
  plVar2 = param_3 + 0x56;
  fVar4 = (float)FUN_100652e60(plVar1);
  FUN_10064259c(param_3 + 0x3f);
  fVar6 = fVar5;
  FUN_10064e3cc(plVar2);
  fVar5 = (fVar5 - fVar6) * 0.5;
  fVar6 = *(float *)(param_3 + 0x5e);
  bVar3 = false;
  if ((fVar6 == fVar4 * 0.5) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x2f4)) && !NAN(fVar5))) {
    bVar3 = *(float *)((long)param_3 + 0x2f4) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x5e) = fVar4 * 0.5;
    *(float *)((long)param_3 + 0x2f4) = fVar5;
    FUN_1000200a0(plVar2);
  }
  FUN_1000e1b44(param_3);
  fVar5 = (float)FUN_10064e3cc(plVar2);
  fVar4 = (float)FUN_100652e60(plVar1);
  FUN_10065317c(plVar1);
  FUN_10064e47c(fVar4 + fVar5,param_3 + 0x8f);
  fVar4 = *(float *)(param_3 + 0x5e);
  fVar5 = (float)FUN_100652e60(plVar1);
  fVar4 = fVar4 - fVar5 * 0.5;
  fVar5 = *(float *)((long)param_3 + 0x3cc);
  FUN_10065317c(plVar1);
  fVar5 = fVar5 - fVar6 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x97) == fVar4) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x4bc)) && !NAN(fVar5))) {
    bVar3 = *(float *)((long)param_3 + 0x4bc) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x97) = fVar4;
    *(float *)((long)param_3 + 0x4bc) = fVar5;
    FUN_1000200a0(param_3 + 0x8f);
    return;
  }
  return;
}




void FUN_1000e1b44(long param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_10064259c(param_1 + 0x2b0);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar2 = fVar2 * fVar4;
  fVar3 = (float)FUN_100652e60(param_1 + 0x388);
  fVar2 = fVar2 + fVar3 * 0.5;
  fVar3 = *(float *)(param_1 + 0x2f4);
  FUN_10064e3cc(param_1 + 0x2b0);
  fVar3 = fVar3 + fVar4 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_1 + 0x3c8) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x3cc)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x3cc) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x3c8) = fVar2;
    *(float *)(param_1 + 0x3cc) = fVar3;
    FUN_1000200a0(param_1 + 0x388);
    return;
  }
  return;
}




undefined8 FUN_1000e1be8(void)

{
  return 5;
}




void FUN_1000e1bf0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  FUN_1000e1b44();
  FUN_1001017f0();
  return;
}




void FUN_1000e1c08(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_1000e1b44(param_1 + -0xb8);
  FUN_1001017f0();
  return;
}




void FUN_1000e1c28(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x48))();
  FUN_10064e47c(param_1,param_2);
  return;
}




void FUN_1000e1c64(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_2 + -0xb8);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  FUN_10064e47c(param_1,plVar1);
  return;
}




void FUN_1000e1ca4(void)

{
  return;
}




long FUN_1000e1ca8(long param_1)

{
  return param_1 + -0xb8;
}




void FUN_1000e1cb0(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_70 [8];
  undefined8 local_50;
  float local_48 [2];
  
  if (param_1[0xa7] == 0) {
    return;
  }
  iVar2 = FUN_10109c588();
  if (iVar2 != 0) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = FUN_10109c59c(iVar4);
      if (*(long *)(lVar3 + 0x18) != param_1[0xa7]) {
        lVar3 = lVar5;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar3;
    } while (iVar2 != iVar4);
    if (lVar3 != 0) {
      local_50 = *(undefined8 *)(lVar3 + 4);
      fVar6 = *(float *)(lVar3 + 4);
      fVar7 = *(float *)(lVar3 + 8);
      goto LAB_1000e1d78;
    }
  }
  iVar2 = FUN_10109c4dc();
  if ((iVar2 == 0) || (DAT_101872bb0 != param_1[0xa7])) {
    local_50 = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    fVar6 = (float)DAT_101dc1cb8;
    fVar7 = DAT_101dc1cb8._4_4_;
  }
  else {
    FUN_10109c550(&local_50,(ulong)&local_50 | 4,0,0);
    fVar6 = (float)local_50;
    fVar7 = local_50._4_4_;
  }
LAB_1000e1d78:
  bVar1 = false;
  if ((fVar6 == (float)DAT_101dc1cb8) && (bVar1 = false, !NAN(fVar7) && !NAN(DAT_101dc1cb8._4_4_)))
  {
    bVar1 = fVar7 == DAT_101dc1cb8._4_4_;
  }
  if (!bVar1) {
    FUN_1006428bc(param_1 + 0x56,local_70,local_48);
    if ((float)local_50 <= local_70[0]) {
      fVar6 = 0.0;
    }
    else if (local_48[0] <= (float)local_50) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = (local_70[0] - (float)local_50) / (local_70[0] - local_48[0]);
    }
    (**(code **)(*param_1 + 0x140))(param_1,fVar6);
    FUN_100644aec(local_70,DAT_101d23038,(long)param_1 + 0xc4);
    FUN_100644c34(param_1,local_70,0);
  }
  return;
}




void FUN_1000e1e24(long *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long *local_40;
  code *pcStack_38;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    if ((param_3 != 0) &&
       ((*(float *)(param_1 + 0x7a) != 2.6 || (*(float *)((long)param_1 + 0x3d4) != 2.6)))) {
      param_1[0x7a] = 0x4026666640266666;
      FUN_1000200a0(param_1 + 0x71);
    }
    (**(code **)(*param_1 + 0x90))(param_1);
    pcStack_38 = thunk_FUN_1000e1cb0;
    local_40 = param_1;
    FUN_100643618(0,&local_40,0,1);
    lVar2 = param_2[4];
    if ((lVar2 != 0) && (param_1[0xa7] != lVar2)) {
      if (param_1[0xa7] != 0) {
        FUN_100641598();
      }
      param_1[0xa7] = lVar2;
      FUN_100641584(lVar2,param_1 + 0x8f);
    }
  }
  return;
}




void FUN_1000e1f28(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *local_30;
  code *pcStack_28;
  
  iVar2 = FUN_1006415d4(param_1 + 0x3f);
  if (iVar2 == 0) {
    for (plVar5 = (long *)param_1[0x44]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
      uVar4 = FUN_1006415d4(plVar5);
      if ((uVar4 & 1) != 0) goto LAB_1000e1f4c;
    }
  }
  else {
    plVar5 = param_1 + 0x8f;
LAB_1000e1f4c:
    lVar3 = FUN_1006415c4(plVar5);
    if ((lVar3 != 0) && (lVar3 == param_1[0xa7])) {
      pcStack_28 = thunk_FUN_1000e1cb0;
      local_30 = param_1;
      FUN_100643a8c(&local_30);
      bVar1 = false;
      if ((*(float *)(param_1 + 0x7a) == 1.0) &&
         (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x3d4)))) {
        bVar1 = *(float *)((long)param_1 + 0x3d4) == 1.0;
      }
      if (!bVar1) {
        lVar3 = NEON_fmov(0x3f800000,4);
        param_1[0x7a] = lVar3;
        FUN_1000200a0(param_1 + 0x71);
      }
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_100641598(param_1[0xa7]);
      param_1[0xa7] = 0;
    }
  }
  return;
}




void FUN_1000e1fec(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *local_30;
  code *pcStack_28;
  
  iVar2 = FUN_1006415d4(param_1 + 0x3f);
  if (iVar2 == 0) {
    for (plVar5 = (long *)param_1[0x44]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[6]) {
      uVar4 = FUN_1006415d4(plVar5);
      if ((uVar4 & 1) != 0) goto LAB_1000e2010;
    }
  }
  else {
    plVar5 = param_1 + 0x8f;
LAB_1000e2010:
    lVar3 = FUN_1006415c4(plVar5);
    if (lVar3 != 0) {
      iVar2 = FUN_1006415d4(param_1);
      if ((iVar2 != 0) && (param_1[0xa7] != 0)) {
        FUN_100641598();
      }
      param_1[0xa7] = lVar3;
      FUN_100641584(lVar3,param_1 + 0x8f);
      return;
    }
  }
  pcStack_28 = thunk_FUN_1000e1cb0;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x7a) == 1.0) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x3d4)))) {
    bVar1 = *(float *)((long)param_1 + 0x3d4) == 1.0;
  }
  if (!bVar1) {
    lVar3 = NEON_fmov(0x3f800000,4);
    param_1[0x7a] = lVar3;
    FUN_1000200a0(param_1 + 0x71);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  if (param_1[0xa7] != 0) {
    FUN_100641598();
    param_1[0xa7] = 0;
  }
  return;
}




void FUN_1000e20dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101457990;
  param_1[0x48] = &PTR_FUN_101457b00;
  thunk_FUN_100651068(param_1 + 0x102);
  thunk_FUN_100651068(param_1 + 0xdc);
  param_1[0xb1] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xb1);
  param_1[0x93] = &PTR_FUN_1014a7108;
  param_1[0xaa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xad);
  FUN_10064e2bc(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_1014a7108;
  param_1[0x8c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f);
  FUN_10064e2bc(param_1 + 0x75);
  param_1[0x4a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x4a);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_1000e21b4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101457990;
  param_1[0x48] = &PTR_FUN_101457b00;
  thunk_FUN_100651068(param_1 + 0x102);
  thunk_FUN_100651068(param_1 + 0xdc);
  param_1[0xb1] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xb1);
  param_1[0x93] = &PTR_FUN_1014a7108;
  param_1[0xaa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xad);
  FUN_10064e2bc(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_1014a7108;
  param_1[0x8c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f);
  FUN_10064e2bc(param_1 + 0x75);
  param_1[0x4a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x4a);
  pvVar1 = (void *)FUN_10052ffb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e2290(void)

{
  return;
}




void FUN_1000e2294(undefined8 *param_1)

{
  param_1[-0x48] = &PTR_FUN_101457990;
  *param_1 = &PTR_FUN_101457b00;
  thunk_FUN_100651068(param_1 + 0xba);
  thunk_FUN_100651068(param_1 + 0x94);
  param_1[0x69] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x80);
  FUN_10064e2bc(param_1 + 0x69);
  param_1[0x4b] = &PTR_FUN_1014a7108;
  param_1[0x62] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x65);
  FUN_10064e2bc(param_1 + 0x4b);
  param_1[0x2d] = &PTR_FUN_1014a7108;
  param_1[0x44] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x47);
  FUN_10064e2bc(param_1 + 0x2d);
  param_1[2] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1 + 2);
  FUN_10052ffb4(param_1 + -0x48);
  return;
}




void FUN_1000e236c(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x48] = &PTR_FUN_101457990;
  *param_1 = &PTR_FUN_101457b00;
  thunk_FUN_100651068(param_1 + 0xba);
  thunk_FUN_100651068(param_1 + 0x94);
  param_1[0x69] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x80);
  FUN_10064e2bc(param_1 + 0x69);
  param_1[0x4b] = &PTR_FUN_1014a7108;
  param_1[0x62] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x65);
  FUN_10064e2bc(param_1 + 0x4b);
  param_1[0x2d] = &PTR_FUN_1014a7108;
  param_1[0x44] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x47);
  FUN_10064e2bc(param_1 + 0x2d);
  param_1[2] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1 + 2);
  pvVar1 = (void *)FUN_10052ffb4(param_1 + -0x48);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e2448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101457b38;
  thunk_FUN_100651068(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_1000e247c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101457b38;
  thunk_FUN_100651068(param_1 + 0x48);
  pvVar1 = (void *)FUN_10052ffb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e24b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101457698;
  thunk_FUN_100651068(param_1 + 0x100);
  thunk_FUN_100651068(param_1 + 0xda);
  param_1[0xaf] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xc6);
  FUN_10064e2bc(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_1014a7108;
  param_1[0xa8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xab);
  FUN_10064e2bc(param_1 + 0x91);
  param_1[0x73] = &PTR_FUN_1014a7108;
  param_1[0x8a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8d);
  FUN_10064e2bc(param_1 + 0x73);
  param_1[0x48] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x5f);
  FUN_10064e2bc(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void FUN_1000e2584(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101457698;
  thunk_FUN_100651068(param_1 + 0x100);
  thunk_FUN_100651068(param_1 + 0xda);
  param_1[0xaf] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xc6);
  FUN_10064e2bc(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_1014a7108;
  param_1[0xa8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xab);
  FUN_10064e2bc(param_1 + 0x91);
  param_1[0x73] = &PTR_FUN_1014a7108;
  param_1[0x8a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8d);
  FUN_10064e2bc(param_1 + 0x73);
  param_1[0x48] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x5f);
  FUN_10064e2bc(param_1 + 0x48);
  pvVar1 = (void *)FUN_10052ffb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e2658(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void thunk_FUN_1000e1cb0(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float afStack_70 [8];
  undefined8 uStack_50;
  float afStack_48 [2];
  
  if (param_1[0xa7] == 0) {
    return;
  }
  iVar2 = FUN_10109c588();
  if (iVar2 != 0) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = FUN_10109c59c(iVar4);
      if (*(long *)(lVar3 + 0x18) != param_1[0xa7]) {
        lVar3 = lVar5;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar3;
    } while (iVar2 != iVar4);
    if (lVar3 != 0) {
      uStack_50 = *(undefined8 *)(lVar3 + 4);
      fVar6 = *(float *)(lVar3 + 4);
      fVar7 = *(float *)(lVar3 + 8);
      goto LAB_1000e1d78;
    }
  }
  iVar2 = FUN_10109c4dc();
  if ((iVar2 == 0) || (DAT_101872bb0 != param_1[0xa7])) {
    uStack_50 = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    fVar6 = (float)DAT_101dc1cb8;
    fVar7 = DAT_101dc1cb8._4_4_;
  }
  else {
    FUN_10109c550(&uStack_50,(ulong)&uStack_50 | 4,0,0);
    fVar6 = (float)uStack_50;
    fVar7 = uStack_50._4_4_;
  }
LAB_1000e1d78:
  bVar1 = false;
  if ((fVar6 == (float)DAT_101dc1cb8) && (bVar1 = false, !NAN(fVar7) && !NAN(DAT_101dc1cb8._4_4_)))
  {
    bVar1 = fVar7 == DAT_101dc1cb8._4_4_;
  }
  if (!bVar1) {
    FUN_1006428bc(param_1 + 0x56,afStack_70,afStack_48);
    if ((float)uStack_50 <= afStack_70[0]) {
      fVar6 = 0.0;
    }
    else if (afStack_48[0] <= (float)uStack_50) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = (afStack_70[0] - (float)uStack_50) / (afStack_70[0] - afStack_48[0]);
    }
    (**(code **)(*param_1 + 0x140))(param_1,fVar6);
    FUN_100644aec(afStack_70,DAT_101d23038,(long)param_1 + 0xc4);
    FUN_100644c34(param_1,afStack_70,0);
  }
  return;
}




void FUN_1000e26d8(void)

{
  DAT_101dc65f4 = 0xff;
  DAT_101dc65f6 = 0xffff;
  DAT_101dc65f8 = 0xffff;
  DAT_101dc65fc = 0xffbc9c44;
  DAT_101dc6600 = 0xff1166f2;
  DAT_101dc6604 = 0xffe0e0e0;
  DAT_101dc6608 = 0xffa0a0a0;
  DAT_101dc660c = 0xff8c8c8c;
  DAT_101dc6610 = 0xff322213;
  DAT_101dc6614 = 0xff091911;
  DAT_101dc6618 = 0xff170c19;
  DAT_101dc661c = 0xff241a14;
  DAT_101dc6620 = 0xff14171c;
  DAT_101dc6624 = 0xff221911;
  DAT_101dc6628 = 0xff1a1416;
  DAT_101dc662c = 0xff121414;
  DAT_101dc6630 = 0xff1a1809;
  DAT_101dc6634 = 0xff141414;
  DAT_101dc6638 = 0xff141414;
  DAT_101dc663c = 0xff2929c0;
  DAT_101dc6640 = 0xff283082;
  DAT_101dc6644 = 0xff5262cc;
  DAT_101dc6648 = 0xff283082;
  DAT_101dc664c = 0xff5262cc;
  DAT_101dc6650 = 0xff745c42;
  DAT_101dc6654 = 0xff184155;
  DAT_101dc6658 = 0xff92665e;
  DAT_101dc665c = 0xffbc9c44;
  DAT_101dc6660 = 0xffbbae56;
  DAT_101dc6664 = 0xff8b7b01;
  DAT_101dc6668 = 0xff90b3ef;
  DAT_101dc666c = 0xff728ebe;
  DAT_101dc6670 = 0xff19459d;
  DAT_101dc6674 = 0xff9d877b;
  DAT_101dc6678 = 0xffcbb1a3;
  DAT_101dc667c = 0xff3f6fb5;
  DAT_101dc6680 = 0xffc5c5c5;
  DAT_101dc6684 = 0xff4fc1f1;
  DAT_101dc6688 = 0xff606060;
  DAT_101dc668c = 0xffc5ff7b;
  DAT_101dc6690 = 0xff5271eb;
  DAT_101dc6694 = 0xfffae076;
  DAT_101dc6698 = 0xff3ac8f6;
  DAT_101dc669c = 0xffaaaaaa;
  DAT_101dc66a0 = 0xffe19400;
  DAT_101dc66a4 = 0xffe19400;
  DAT_101dc66a8 = 0xffe550b2;
  DAT_101dc66ac = 0xfff22ae8;
  DAT_101dc66b0 = 0xff005ae1;
  DAT_101dc66b4 = 0xff1addfa;
  DAT_101dc66b8 = 0xff2424b3;
  DAT_101dc66bc = 0xff2424b3;
  DAT_101dc66c0 = 0xff646464;
  DAT_101dc66c4 = 0xff92665e;
  DAT_101dc66c8 = 0xff646037;
  DAT_101dc66d0 = 0xff1111a1;
  DAT_101dc66d4 = 0xff321ee1;
  DAT_101dc66d8 = 0xffc8c8c8;
  DAT_101dc66dc = 0xff321ee1;
  DAT_101dc66e8 = 0xff6259b3;
  DAT_101dc66ec = 0xff506e73;
  DAT_101dc66f0 = 0xff9dbf86;
  DAT_101dc66cc = 0xffffffff;
  DAT_101dc66f4 = 0xffa35244;
  DAT_101dc66e0 = 0xff7fe801;
  DAT_101dc66f8 = 0xffca828e;
  DAT_101dc66e4 = 0xffffffff;
  DAT_101dc66fc = 0xffa6a6a6;
  DAT_101dc6700 = 0xffa6a6a6;
  DAT_101dc6704 = 0xffffffff;
  DAT_101dc6708 = 0xff88ea2f;
  DAT_101dc670c = 0xff8c8c8c;
  DAT_101dc6710 = 0xffffb400;
  DAT_101dc6714 = 0xffff00ff;
  DAT_101dc6718 = 0xff00aded;
  DAT_101dc671c = 0xff33d3ff;
  DAT_101dc6720 = 0xff7fe801;
  DAT_101dc6724 = 0xff282828;
  DAT_101dc6728 = 0xfff0f0f0;
  DAT_101dc672c = 0xffa4781e;
  DAT_101dc6730 = 0xffa6654b;
  DAT_101dc6734 = 0xff93435b;
  DAT_101dc6738 = 0xff387f9c;
  DAT_101dc673c = 0xffa3781e;
  DAT_101dc6740 = 0xffffd18a;
  DAT_101dc6744 = 0xffff61f7;
  DAT_101dc6748 = 0xff5de1f2;
  DAT_101dc674c = 0xff80eaff;
  DAT_101dc6750 = 0xff32e00e;
  DAT_101dc6754 = 0xff5a3c10;
  DAT_101dc6758 = 0xff330b03;
  DAT_101dc675c = 0xff33031d;
  DAT_101dc6760 = 0xff032433;
  DAT_101dc6764 = 0xff9e8e8d;
  DAT_101d23038 = FUN_100644a94("UI::EVENT_SETTINGS_WIDGET_FLIP_SETTINGS");
  return;
}




long * FUN_1000e2dac(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)FUN_100655644();
  lVar5 = 0;
  *puVar1 = &PTR_thunk_FUN_1000e2eec_101457e30;
  puVar1[0x31] = 0;
  *(uint *)((long)puVar1 + 0x84) = *(uint *)((long)puVar1 + 0x84) & 0xfffffff7;
  do {
    operator_new(0x68);
    uVar2 = thunk_FUN_1000c5ee0();
    *(undefined8 *)((long)param_1 + lVar5 + 0x158) = uVar2;
    pvVar3 = operator_new(0x30);
    pvVar4 = operator_new(0x13a8);
    thunk_FUN_1000cdc34();
    thunk_FUN_1000bf560(pvVar3,pvVar4);
    *(void **)((long)param_1 + lVar5 + 0x170) = pvVar3;
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)((long)pvVar3 + 8),1);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x18);
  lVar5 = 0x170;
  do {
    uVar2 = FUN_1000cd87c(*(undefined8 *)(*(long *)((long)param_1 + lVar5) + 8));
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,1);
    FUN_1000cd87c(*(undefined8 *)(*(long *)((long)param_1 + lVar5) + 8));
    uVar2 = FUN_1000d0360();
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,1);
    FUN_1000cd87c(*(undefined8 *)(*(long *)((long)param_1 + lVar5) + 8));
    uVar2 = FUN_1000d0368();
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,1);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x188);
  return param_1;
}




long * thunk_FUN_1000e2dac(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)FUN_100655644();
  lVar5 = 0;
  *puVar1 = &PTR_thunk_FUN_1000e2eec_101457e30;
  puVar1[0x31] = 0;
  *(uint *)((long)puVar1 + 0x84) = *(uint *)((long)puVar1 + 0x84) & 0xfffffff7;
  do {
    operator_new(0x68);
    uVar2 = thunk_FUN_1000c5ee0();
    *(undefined8 *)((long)param_1 + lVar5 + 0x158) = uVar2;
    pvVar3 = operator_new(0x30);
    pvVar4 = operator_new(0x13a8);
    thunk_FUN_1000cdc34();
    thunk_FUN_1000bf560(pvVar3,pvVar4);
    *(void **)((long)param_1 + lVar5 + 0x170) = pvVar3;
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)((long)pvVar3 + 8),1);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x18);
  lVar5 = 0x170;
  do {
    uVar2 = FUN_1000cd87c(*(undefined8 *)(*(long *)((long)param_1 + lVar5) + 8));
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,1);
    FUN_1000cd87c(*(undefined8 *)(*(long *)((long)param_1 + lVar5) + 8));
    uVar2 = FUN_1000d0360();
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,1);
    FUN_1000cd87c(*(undefined8 *)(*(long *)((long)param_1 + lVar5) + 8));
    uVar2 = FUN_1000d0368();
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,1);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x188);
  return param_1;
}




void FUN_1000e2eec(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = 0;
  *param_1 = &PTR_thunk_FUN_1000e2eec_101457e30;
  do {
    plVar1 = *(long **)((long)param_1 + lVar3 + 0x170);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))();
    }
    if (*(long *)((long)param_1 + lVar3 + 0x158) != 0) {
      pvVar2 = (void *)thunk_FUN_1000c5f68();
      operator_delete(pvVar2);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000e2eec(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = 0;
  *param_1 = &PTR_thunk_FUN_1000e2eec_101457e30;
  do {
    plVar1 = *(long **)((long)param_1 + lVar3 + 0x170);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))();
    }
    if (*(long *)((long)param_1 + lVar3 + 0x158) != 0) {
      pvVar2 = (void *)thunk_FUN_1000c5f68();
      operator_delete(pvVar2);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000e2f74(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e2eec();
  operator_delete(pvVar1);
  return;
}




void FUN_1000e2f88(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0x188) = param_2;
  uVar6 = *(undefined8 *)(param_1 + 0x170);
  uVar4 = FUN_100061d78(0);
  FUN_1000bf800(uVar6,uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x178);
  uVar4 = FUN_100061d78(1);
  FUN_1000bf800(uVar6,uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x180);
  uVar4 = FUN_100061d78(2);
  FUN_1000bf800(uVar6,uVar4);
  lVar7 = *(long *)(*(long *)(param_1 + 0x170) + 8);
  uVar2 = FUN_1004d2524("joystick_ability_icon_A");
  uVar3 = FUN_100015208("joystick_ability_icon_A",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(*(long *)(param_1 + 0x178) + 8);
  uVar2 = FUN_1004d2524("joystick_ability_icon_B");
  uVar3 = FUN_100015208("joystick_ability_icon_B",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(*(long *)(param_1 + 0x180) + 8);
  uVar2 = FUN_1004d2524("joystick_ability_icon_C");
  uVar3 = FUN_100015208("joystick_ability_icon_C",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  plVar5 = *(long **)(*(long *)(param_1 + 0x170) + 8);
  (**(code **)(*plVar5 + 0x150))(plVar5,"joystick_ability_upgrade_badge_A");
  plVar5 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  (**(code **)(*plVar5 + 0x150))(plVar5,"joystick_ability_upgrade_badge_B");
  plVar5 = *(long **)(*(long *)(param_1 + 0x180) + 8);
                    /* WARNING: Could not recover jumptable at 0x0001000e30e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x150))(plVar5,"joystick_ability_upgrade_badge_C");
  return;
}




void FUN_1000e30e4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xc;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x84) = uVar1 | *(uint *)(param_1 + 0x84) & 0xfffffff3;
  return;
}




void FUN_1000e3104(long param_1,uint param_2)

{
  if (param_2 < 3) {
    FUN_1000bf92c(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x170));
    return;
  }
  return;
}




void FUN_1000e311c(long param_1,uint param_2)

{
  if (param_2 < 3) {
    FUN_1000cd6cc(*(undefined8 *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x170) + 8));
    return;
  }
  return;
}




void FUN_1000e3138(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_1000bf9f0(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x170),param_3);
  return;
}




void FUN_1000e3148(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  do {
    lVar3 = *(long *)(param_1 + 0x170 + lVar2);
    (**(code **)(**(long **)(lVar3 + 8) + 0x158))(0x43870000,0x43870000);
    FUN_10064e47c(0x43700000,0x43700000,*(undefined8 *)(lVar3 + 8));
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 8);
  bVar1 = false;
  if ((*(float *)(lVar2 + 0x40) == (float)DAT_101dc1cb8) &&
     (bVar1 = false, !NAN(*(float *)(lVar2 + 0x44)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar1 = *(float *)(lVar2 + 0x44) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar1) {
    *(ulong *)(lVar2 + 0x40) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x178) + 8);
  bVar1 = false;
  if ((*(float *)(lVar2 + 0x40) == 200.0) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x44)))) {
    bVar1 = *(float *)(lVar2 + 0x44) == -245.0;
  }
  if (!bVar1) {
    *(undefined8 *)(lVar2 + 0x40) = 0xc375000043480000;
    FUN_1000200a0();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x180) + 8);
  bVar1 = false;
  if ((*(float *)(lVar2 + 0x40) == 476.0) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x44)))) {
    bVar1 = *(float *)(lVar2 + 0x44) == -386.0;
  }
  if (!bVar1) {
    *(undefined8 *)(lVar2 + 0x40) = 0xc3c1000043ee0000;
    FUN_1000200a0();
  }
  lVar2 = 0;
  do {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x170 + lVar2) + 8) + 0x1e0))();
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  FUN_1006557ec(param_1);
  return;
}




undefined8 FUN_1000e3288(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x170) + 8);
}




void FUN_1000e3298(long param_1,uint param_2)

{
  FUN_1000bff14(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x170));
  return;
}




long * FUN_1000e32a4(long *param_1)

{
  undefined8 *puVar1;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1000e3398_101457f80;
  puVar1 = puVar1 + 0x17;
  thunk_FUN_100652c08(puVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_38 = DAT_101dbd484;
  local_60 = FUN_1000e338c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  local_38 = DAT_101dbd458;
  local_60 = FUN_1000e338c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  FUN_100652cac(puVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_add");
  return param_1;
}




void FUN_1000e338c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000e34fc(param_1,param_4);
  return;
}




long * thunk_FUN_1000e32a4(long *param_1)

{
  undefined8 *puVar1;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1000e3398_101457f80;
  puVar1 = puVar1 + 0x17;
  thunk_FUN_100652c08(puVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  uStack_38 = DAT_101dbd484;
  pcStack_60 = FUN_1000e338c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  uStack_38 = DAT_101dbd458;
  pcStack_60 = FUN_1000e338c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  FUN_100652cac(puVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_add");
  return param_1;
}




void FUN_1000e3398(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000e3398_101457f80;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000e3398(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000e3398_101457f80;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000e33f4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e3398();
  operator_delete(pvVar1);
  return;
}




void FUN_1000e3408(long param_1,int param_2)

{
  char *pcVar1;
  undefined4 local_24;
  
  pcVar1 = "joystick_add_hit";
  if (param_2 == 0) {
    pcVar1 = "joystick_add";
  }
  FUN_100652cdc(param_1 + 0xb8,pcVar1);
  if (param_2 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = 0xff40e0ff;
  }
  FUN_100652dd4(param_1 + 0xb8,&local_24,2);
  return;
}




void FUN_1000e3480(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100640db8(0x3fe00000,0x3fe00000,0x3c23d70a,0);
  FUN_100640db8(0x3f800000,0x3f800000,0x3e800000,FUN_10006bf9c);
  FUN_100642324(param_1);
  FUN_100642b7c(param_1,uVar1);
  return;
}




void FUN_1000e34fc(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_50 [32];
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    iVar1 = FUN_1000e35b8((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),param_1
                         );
    if (iVar1 == 0) {
      FUN_100644b14(param_2);
      return;
    }
    FUN_100644aec(auStack_50,DAT_101d2303c,0);
    FUN_100644c34(param_1,auStack_50,1);
  }
  return;
}




bool FUN_1000e35b8(float param_1,float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  
  local_38 = param_1;
  fStack_34 = param_2;
  local_38 = (float)FUN_10064efd0(&local_38,param_3 + 0x17);
  fVar3 = DAT_101873a40._4_4_;
  fStack_34 = param_2;
  fVar1 = (float)FUN_10064f0a0((undefined4)DAT_101873a40,param_3 + 0x17);
  fVar1 = local_38 - fVar1;
  fVar3 = fStack_34 - fVar3;
  fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  return ABS(fVar3) + ABS(fVar1) <= fVar2 * 0.5;
}




void thunk_FUN_1000e3644(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  plVar1 = param_3 + 0x17;
  uStack_38 = (**(code **)(*param_3 + 0x48))();
  uStack_34 = param_2;
  FUN_10064e48c(plVar1,&uStack_38);
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_101873a40);
  bVar2 = false;
  if ((*(float *)(param_3 + 0x21) == (float)DAT_101873a40) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x10c)) && !NAN(DAT_101873a40._4_4_))) {
    bVar2 = *(float *)((long)param_3 + 0x10c) == DAT_101873a40._4_4_;
  }
  if (!bVar2) {
    param_3[0x21] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  return;
}




void FUN_1000e3644(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  
  plVar1 = param_3 + 0x17;
  local_38 = (**(code **)(*param_3 + 0x48))();
  uStack_34 = param_2;
  FUN_10064e48c(plVar1,&local_38);
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_101873a40);
  bVar2 = false;
  if ((*(float *)(param_3 + 0x21) == (float)DAT_101873a40) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x10c)) && !NAN(DAT_101873a40._4_4_))) {
    bVar2 = *(float *)((long)param_3 + 0x10c) == DAT_101873a40._4_4_;
  }
  if (!bVar2) {
    param_3[0x21] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  return;
}




void FUN_1000e36f0(void)

{
  DAT_101dc6768 = 0xff;
  DAT_101dc676a = 0xffff;
  DAT_101dc676c = 0xffff;
  DAT_101d2303c = FUN_100644a94("KINDRED_JOYSTICK_ABILITY_UPGRADE_BUTTON::EVENT_TRIGGERED");
  return;
}




long * FUN_1000e3734(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_1014580c8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652ca4(puVar2,PTR_s_build___HUDPartsJoystick_tga_10184e0c8);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_attack");
  FUN_100652cdc(puVar2,"joystick_large_circle");
  local_38 = DAT_101d23020;
  local_60 = FUN_1000e3880;
  plVar1 = param_1 + 1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101d2302c;
  local_60 = FUN_1000e3890;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101d23030;
  local_60 = FUN_1000e3890;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  return param_1;
}




void FUN_1000e3880(long param_1)

{
  FUN_100652cdc(param_1 + 0xb8,"joystick_large_circle_hit");
  return;
}




void FUN_1000e3890(long param_1)

{
  FUN_100652cdc(param_1 + 0xb8,"joystick_large_circle");
  return;
}




long * thunk_FUN_1000e3734(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_1014580c8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652ca4(puVar2,PTR_s_build___HUDPartsJoystick_tga_10184e0c8);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_attack");
  FUN_100652cdc(puVar2,"joystick_large_circle");
  uStack_38 = DAT_101d23020;
  pcStack_60 = FUN_1000e3880;
  plVar1 = param_1 + 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101d2302c;
  pcStack_60 = FUN_1000e3890;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101d23030;
  pcStack_60 = FUN_1000e3890;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  return param_1;
}




void FUN_1000e38a4(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2;
  FUN_10064e47c(param_3 + 0xb8);
  lVar1 = param_3 + 0x1a8;
  fVar2 = (float)FUN_1006531b0(lVar1);
  FUN_10064e47c((fVar2 * param_2 * 0.8) / fVar3,param_2 * 0.8,lVar1);
  FUN_10064e5ec(0,0,param_3 + 0xb8,8,param_3,8);
  FUN_10064e5ec(0,0,lVar1,8,param_3,8);
  return;
}




long * FUN_1000e3940(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_1000e3b88_101458210;
  *(undefined4 *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = 0;
  puVar2 = puVar2 + 0x19;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_medium_circle");
  FUN_100652ca4(plVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8);
  local_38 = DAT_101dbd458;
  local_60 = FUN_1000e3b40;
  plVar1 = param_1 + 1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd484;
  local_60 = FUN_1000e3b40;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd45c;
  local_60 = FUN_1000e3b48;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd488;
  local_60 = FUN_1000e3b48;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd460;
  local_60 = thunk_FUN_1000e3dd4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = thunk_FUN_1000e3dd4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  local_38 = DAT_101dbd4a4;
  local_60 = FUN_1000e3b68;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&local_60);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1000e3b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000e3d34(param_1,param_4);
  return;
}




void FUN_1000e3b48(long param_1)

{
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xb8) != 1)) {
    return;
  }
  FUN_100052b70(*(undefined8 *)(param_1 + 0xc0));
  return;
}




void thunk_FUN_1000e3dd4(long param_1)

{
  FUN_1006415a8();
  if ((*(int *)(param_1 + 0xb8) == 0) || (*(int *)(param_1 + 0xb8) == 1)) {
    FUN_100052c04(*(undefined8 *)(param_1 + 0xc0));
  }
  FUN_100652cdc(param_1 + 200,"joystick_medium_circle");
  return;
}




void FUN_1000e3b68(long param_1)

{
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xb8) != 1)) {
    return;
  }
  FUN_100052c04(*(undefined8 *)(param_1 + 0xc0));
  return;
}




long * thunk_FUN_1000e3940(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_1000e3b88_101458210;
  *(undefined4 *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = 0;
  puVar2 = puVar2 + 0x19;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsJoystick_tga_10184e0c8,"joystick_medium_circle");
  FUN_100652ca4(plVar1,PTR_s_build___HUDPartsJoystick_tga_10184e0c8);
  uStack_38 = DAT_101dbd458;
  pcStack_60 = FUN_1000e3b40;
  plVar1 = param_1 + 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd484;
  pcStack_60 = FUN_1000e3b40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd45c;
  pcStack_60 = FUN_1000e3b48;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd488;
  pcStack_60 = FUN_1000e3b48;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd460;
  pcStack_60 = thunk_FUN_1000e3dd4;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd48c;
  pcStack_60 = thunk_FUN_1000e3dd4;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  uStack_38 = DAT_101dbd4a4;
  pcStack_60 = FUN_1000e3b68;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar1,&pcStack_60);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1000e3b88(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000e3b88_101458210;
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000e3b88(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000e3b88_101458210;
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000e3c08(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e3b88();
  operator_delete(pvVar1);
  return;
}




void FUN_1000e3c1c(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  *(int *)(param_1 + 0xb8) = param_3;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  pcVar1 = "joystick_minion";
  if (param_3 != 0) {
    pcVar1 = "joystick_turret";
  }
  FUN_100652cdc(param_1 + 0x1b8,pcVar1);
  FUN_1000e3c64(param_1);
  return;
}




void FUN_1000e3c64(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined4 local_48;
  float fStack_44;
  
  local_48 = (**(code **)(*param_3 + 0x48))();
  fStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x19,&local_48);
  plVar1 = param_3 + 0x37;
  fVar2 = (float)FUN_1006531b0(plVar1);
  fVar3 = param_2;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c((fVar3 * 0.8 * fVar2) / param_2,plVar1);
  FUN_10064e5ec(0,0,param_3 + 0x19,8,param_3,8);
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  return;
}




void thunk_FUN_1000e3c64(void)

{
  FUN_1000e3c64();
  return;
}




void FUN_1000e3d34(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  FUN_100641584(param_2[4],param_1);
  if ((*(int *)(param_1 + 0xb8) == 0) || (*(int *)(param_1 + 0xb8) == 1)) {
    FUN_100052aa0(*(undefined8 *)(param_1 + 0xc0));
  }
  FUN_100652cdc(param_1 + 200,"joystick_medium_circle_hit");
  return;
}




void FUN_1000e3dd4(long param_1)

{
  FUN_1006415a8();
  if ((*(int *)(param_1 + 0xb8) == 0) || (*(int *)(param_1 + 0xb8) == 1)) {
    FUN_100052c04(*(undefined8 *)(param_1 + 0xc0));
  }
  FUN_100652cdc(param_1 + 200,"joystick_medium_circle");
  return;
}




void FUN_1000e3e18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014580c8;
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000e3e94(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014580c8;
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1000e3f14(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  *puVar3 = &PTR_FUN_101456770;
  puVar3 = puVar3 + 0x11;
  thunk_FUN_100181304(puVar3,1);
  plVar1 = param_1 + 0x2c8;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x2ee) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100181bf8(0x3e99999a,puVar3,&DAT_10115a168);
  uVar2 = *(uint *)((long)param_1 + 0x16c4);
  if ((uVar2 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x16c4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




long * FUN_1000e3fe4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar16 = puVar9 + 0x17;
  *puVar9 = &PTR_FUN_101456628;
  FUN_10064e264(puVar16);
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100650e64(plVar1);
  lVar13 = 0;
  do {
    FUN_1000e3f14((long)param_1 + lVar13 + 0x2a0);
    lVar13 = lVar13 + 0x1778;
  } while (lVar13 != 0x5de0);
  plVar17 = param_1 + 0xc10;
  FUN_10064e264(plVar17);
  plVar3 = param_1 + 0xc27;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xc4d;
  thunk_FUN_100181304(plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar16,1);
  FUN_100642bd8(puVar16,plVar1,1);
  plVar18 = param_1 + 0x54;
  lVar13 = 4;
  do {
    FUN_100642bd8(puVar16,plVar18,1);
    plVar18 = plVar18 + 0x2ef;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  FUN_100642bd8(plVar17,plVar3,1);
  FUN_100642bd8(plVar17,plVar4,1);
  FUN_100641464(auStack_b4,auStack_b8);
  iVar8 = FUN_100126c88();
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar8 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
  }
  uVar11 = 0x44af0000;
  if (iVar8 == 0) {
    uVar11 = 0x447a0000;
  }
  FUN_100651594(plVar1,*ppuVar5,&DAT_10115a168);
  FUN_100655b9c(param_1 + 0x48,3);
  FUN_100651708(uVar11,plVar1,1);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_EXPLANATION",0);
  FUN_1006513c0(plVar1,uVar10);
  uVar6 = *(uint *)((long)param_1 + 500);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 500) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  uVar11 = DAT_101d91884;
  lVar13 = 0;
  uVar15 = 0;
  fVar19 = 1.3;
  if (iVar8 == 0) {
    fVar19 = 1.0;
  }
  lVar14 = 0x18e0;
  do {
    lVar2 = (long)param_1 + lVar13 + 0x328;
    FUN_1001816d4(0x42200000,0x44480000,0x44480000,lVar2,0,&DAT_101d91650,&DAT_10115a168,
                  &DAT_101dc1cb8,0);
    FUN_100181c68(0x4317cccd,lVar2);
    lVar2 = (long)param_1 + lVar13 + 0xa40;
    FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
    FUN_10065179c(0x44340000,0,0x3f800000,lVar2);
    FUN_100651038((long)param_1 + lVar14,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8);
    FUN_10065179c(0x44340000,0,0x3f800000,(long)param_1 + lVar14);
    local_88 = uVar11;
    plVar17 = (long *)((ulong)plVar17 & 0xffffffff00000000 | uVar15);
    local_b0 = FUN_1000e462c;
    local_a0 = 0;
    local_98 = 0;
    plStack_a8 = param_1;
    local_90 = plVar17;
    FUN_10001554c((long)param_1 + lVar13 + 0x330,&local_b0);
    fVar20 = *(float *)((long)param_1 + lVar13 + 0x2ec);
    bVar7 = false;
    if ((*(float *)((long)param_1 + lVar13 + 0x2e8) == fVar19) &&
       (bVar7 = false, !NAN(fVar20) && !NAN(fVar19))) {
      bVar7 = fVar20 == fVar19;
    }
    if (!bVar7) {
      *(float *)((long)param_1 + lVar13 + 0x2e8) = fVar19;
      *(float *)((long)param_1 + lVar13 + 0x2ec) = fVar19;
      FUN_1000200a0((long)param_1 + lVar13 + 0x2a0);
    }
    uVar15 = uVar15 + 1;
    lVar13 = lVar13 + 0x1778;
    lVar14 = lVar14 + 0x1778;
  } while (uVar15 != 4);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TECH_ISSUE",0);
  FUN_100181af8(param_1 + 0x65,uVar10);
  FUN_100181b5c(0,0xc1700000,param_1 + 0x65);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TECH_ISSUE_SUBTITLE",0);
  FUN_1006513c0(param_1 + 0x31c,uVar10);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TEAM_BALANCE",0);
  FUN_100181af8(param_1 + 0x354,uVar10);
  FUN_100181b5c(0,0xc1700000,param_1 + 0x354);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TEAM_BALANCE_SUBTITLE",0);
  FUN_1006513c0(param_1 + 0x60b,uVar10);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TROLL",0);
  FUN_100181af8(param_1 + 0x643,uVar10);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_OTHER",0);
  FUN_100181af8(param_1 + 0x932,uVar10);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6104) = *(uint *)((long)param_1 + 0x6104) & 0xfffffffb;
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100655b9c(param_1 + 0xc41,3);
  uVar12 = 0x44e10000;
  if (iVar8 == 0) {
    uVar12 = 0x44af0000;
  }
  FUN_100651708(uVar12,plVar3,1);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_THANK_YOU",0);
  FUN_1006513c0(plVar3,uVar10);
  uVar6 = *(uint *)((long)param_1 + 0x61bc);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x61bc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  fVar19 = 1.2;
  if (iVar8 == 0) {
    fVar19 = 1.0;
  }
  if ((*(float *)(param_1 + 0xc56) != fVar19) || (*(float *)((long)param_1 + 0x62b4) != fVar19)) {
    *(float *)(param_1 + 0xc56) = fVar19;
    *(float *)((long)param_1 + 0x62b4) = fVar19;
    FUN_1000200a0(plVar4);
  }
  FUN_100651700(param_1 + 0xd30,0);
  uVar6 = *(uint *)((long)param_1 + 0x62ec);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x62ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar4);
  }
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar4,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_100181af8(plVar4,uVar10);
  local_88 = uVar11;
  local_b0 = thunk_FUN_1000e4a34;
  local_98 = 0;
  local_90 = (long *)0x0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0xc4e,&local_b0);
  *(uint *)((long)param_1 + 0x62ec) = *(uint *)((long)param_1 + 0x62ec) | 4;
  return param_1;
}




void FUN_1000e462c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000e49e0(param_1,param_2,param_5);
  return;
}




void thunk_FUN_1000e4a34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SELECT_THANK_YOU");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * thunk_FUN_1000e3fe4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  code *pcStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined4 uStack_88;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar16 = puVar9 + 0x17;
  *puVar9 = &PTR_FUN_101456628;
  FUN_10064e264(puVar16);
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100650e64(plVar1);
  lVar13 = 0;
  do {
    FUN_1000e3f14((long)param_1 + lVar13 + 0x2a0);
    lVar13 = lVar13 + 0x1778;
  } while (lVar13 != 0x5de0);
  plVar17 = param_1 + 0xc10;
  FUN_10064e264(plVar17);
  plVar3 = param_1 + 0xc27;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xc4d;
  thunk_FUN_100181304(plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar16,1);
  FUN_100642bd8(puVar16,plVar1,1);
  plVar18 = param_1 + 0x54;
  lVar13 = 4;
  do {
    FUN_100642bd8(puVar16,plVar18,1);
    plVar18 = plVar18 + 0x2ef;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  FUN_100642bd8(plVar17,plVar3,1);
  FUN_100642bd8(plVar17,plVar4,1);
  FUN_100641464(auStack_b4,auStack_b8);
  iVar8 = FUN_100126c88();
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar8 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
  }
  uVar11 = 0x44af0000;
  if (iVar8 == 0) {
    uVar11 = 0x447a0000;
  }
  FUN_100651594(plVar1,*ppuVar5,&DAT_10115a168);
  FUN_100655b9c(param_1 + 0x48,3);
  FUN_100651708(uVar11,plVar1,1);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_EXPLANATION",0);
  FUN_1006513c0(plVar1,uVar10);
  uVar6 = *(uint *)((long)param_1 + 500);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 500) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  uVar11 = DAT_101d91884;
  lVar13 = 0;
  uVar15 = 0;
  fVar19 = 1.3;
  if (iVar8 == 0) {
    fVar19 = 1.0;
  }
  lVar14 = 0x18e0;
  do {
    lVar2 = (long)param_1 + lVar13 + 0x328;
    FUN_1001816d4(0x42200000,0x44480000,0x44480000,lVar2,0,&DAT_101d91650,&DAT_10115a168,
                  &DAT_101dc1cb8,0);
    FUN_100181c68(0x4317cccd,lVar2);
    lVar2 = (long)param_1 + lVar13 + 0xa40;
    FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
    FUN_10065179c(0x44340000,0,0x3f800000,lVar2);
    FUN_100651038((long)param_1 + lVar14,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8);
    FUN_10065179c(0x44340000,0,0x3f800000,(long)param_1 + lVar14);
    uStack_88 = uVar11;
    plVar17 = (long *)((ulong)plVar17 & 0xffffffff00000000 | uVar15);
    pcStack_b0 = FUN_1000e462c;
    uStack_a0 = 0;
    uStack_98 = 0;
    plStack_a8 = param_1;
    plStack_90 = plVar17;
    FUN_10001554c((long)param_1 + lVar13 + 0x330,&pcStack_b0);
    fVar20 = *(float *)((long)param_1 + lVar13 + 0x2ec);
    bVar7 = false;
    if ((*(float *)((long)param_1 + lVar13 + 0x2e8) == fVar19) &&
       (bVar7 = false, !NAN(fVar20) && !NAN(fVar19))) {
      bVar7 = fVar20 == fVar19;
    }
    if (!bVar7) {
      *(float *)((long)param_1 + lVar13 + 0x2e8) = fVar19;
      *(float *)((long)param_1 + lVar13 + 0x2ec) = fVar19;
      FUN_1000200a0((long)param_1 + lVar13 + 0x2a0);
    }
    uVar15 = uVar15 + 1;
    lVar13 = lVar13 + 0x1778;
    lVar14 = lVar14 + 0x1778;
  } while (uVar15 != 4);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TECH_ISSUE",0);
  FUN_100181af8(param_1 + 0x65,uVar10);
  FUN_100181b5c(0,0xc1700000,param_1 + 0x65);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TECH_ISSUE_SUBTITLE",0);
  FUN_1006513c0(param_1 + 0x31c,uVar10);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TEAM_BALANCE",0);
  FUN_100181af8(param_1 + 0x354,uVar10);
  FUN_100181b5c(0,0xc1700000,param_1 + 0x354);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TEAM_BALANCE_SUBTITLE",0);
  FUN_1006513c0(param_1 + 0x60b,uVar10);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_TROLL",0);
  FUN_100181af8(param_1 + 0x643,uVar10);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_OTHER",0);
  FUN_100181af8(param_1 + 0x932,uVar10);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6104) = *(uint *)((long)param_1 + 0x6104) & 0xfffffffb;
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100655b9c(param_1 + 0xc41,3);
  uVar12 = 0x44e10000;
  if (iVar8 == 0) {
    uVar12 = 0x44af0000;
  }
  FUN_100651708(uVar12,plVar3,1);
  uVar10 = FUN_1004e0150("HUD_SCOREBOARD_SURVEY_THANK_YOU",0);
  FUN_1006513c0(plVar3,uVar10);
  uVar6 = *(uint *)((long)param_1 + 0x61bc);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x61bc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  fVar19 = 1.2;
  if (iVar8 == 0) {
    fVar19 = 1.0;
  }
  if ((*(float *)(param_1 + 0xc56) != fVar19) || (*(float *)((long)param_1 + 0x62b4) != fVar19)) {
    *(float *)(param_1 + 0xc56) = fVar19;
    *(float *)((long)param_1 + 0x62b4) = fVar19;
    FUN_1000200a0(plVar4);
  }
  FUN_100651700(param_1 + 0xd30,0);
  uVar6 = *(uint *)((long)param_1 + 0x62ec);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x62ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar4);
  }
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar4,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_100181af8(plVar4,uVar10);
  uStack_88 = uVar11;
  pcStack_b0 = thunk_FUN_1000e4a34;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0xc4e,&pcStack_b0);
  *(uint *)((long)param_1 + 0x62ec) = *(uint *)((long)param_1 + 0x62ec) | 4;
  return param_1;
}




void FUN_1000e463c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  
  FUN_100641464(&uStack_74,&local_78);
  FUN_10064e5ec(0,0,param_1 + 0xb8,8,param_1,8);
  lVar1 = param_1 + 0x170;
  fVar4 = -340.0;
  FUN_10064e5ec(0,0xc3aa0000,lVar1,6,param_1 + 0xb8,4);
  uVar2 = 0;
  lVar3 = param_1;
  do {
    (**(code **)(*(long *)(lVar3 + 0x2a0) + 0x60))(lVar3 + 0x2a0,0,0,1,1);
    fVar5 = fVar4 + -10.0;
    FUN_100651184(lVar1);
    FUN_10064e5ec(0,fVar4 + 10.0 + (float)(uVar2 & 0xffffffff) * fVar5,lVar3 + 0x2a0,4,lVar1,6);
    fVar4 = 0.0;
    FUN_10064e5ec(0,lVar3 + 0x18e0,4,lVar3 + 0xa40,6);
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + 0x1778;
  } while (uVar2 != 4);
  lVar1 = param_1 + 0x6080;
  FUN_10064e47c(uStack_74,local_78,lVar1);
  fVar4 = 0.0;
  FUN_10064e5ec(0,0,lVar1,8,param_1,8);
  lVar3 = param_1 + 0x6138;
  FUN_100651184(lVar3);
  FUN_10064e5ec(0,-fVar4,lVar3,8,lVar1,8);
  FUN_10064e5ec(0,0x42480000,param_1 + 0x6268,4,lVar3,6);
  return;
}




void FUN_1000e47f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3ecccccd,uVar2);
  lVar1 = param_1 + 0xb8;
  uVar3 = *(uint *)(param_1 + 0x13c);
  if ((uVar3 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x13c) = uVar3 & 0xffff807f;
    FUN_1000200a0(lVar1);
    uVar3 = *(uint *)(param_1 + 0x13c);
  }
  *(uint *)(param_1 + 0x13c) = uVar3 | 4;
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar2);
  return;
}




void FUN_1000e4870(long param_1)

{
  ushort *puVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar4 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3ecccccd,uVar4);
  FUN_100642b14(param_1 + 0xb8,uVar4);
  lVar2 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
  if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  FUN_100642b14(param_1 + 0xb8,puVar1);
  uVar4 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3ecccccd,uVar4);
  lVar2 = param_1 + 0x6080;
  puVar3 = (uint *)(param_1 + 0x6104);
  uVar6 = *puVar3;
  if ((uVar6 & 0x7f80) != 0) {
    *puVar3 = uVar6 & 0xffff807f;
    FUN_1000200a0(lVar2);
    uVar6 = *puVar3;
  }
  *puVar3 = uVar6 | 4;
  FUN_100642324(lVar2);
  FUN_100642b14(lVar2,uVar4);
  return;
}




undefined1  [16] FUN_1000e49b0(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  FUN_10064eb7c(param_3 + 0x170,4,param_3 + 0x4908,6);
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}




void FUN_1000e49e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SELECT_MATCH_QUALITY");
  FUN_100644aec(auStack_40,uVar1,param_3);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000e4a34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SELECT_THANK_YOU");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * FUN_1000e4a84(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined4 local_78;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar15 = puVar10 + 0x17;
  *puVar10 = &PTR_thunk_FUN_1000e4e18_101458358;
  thunk_FUN_1001bd4e0(puVar15,1);
  plVar1 = param_1 + 0xad;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0xcb;
  thunk_FUN_100650e64(plVar2);
  lVar12 = 0;
  uVar13 = 0;
  do {
    thunk_FUN_1001c36dc((long)param_1 + lVar12 + 0x788);
    lVar12 = lVar12 + 0x388;
  } while (lVar12 != 0x11a8);
  *(undefined4 *)(param_1 + 0x326) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  iVar9 = FUN_100126c88();
  uVar7 = DAT_101dbd484;
  uVar6 = DAT_101dbd458;
  lVar12 = 0;
  uVar16 = 0;
  plVar14 = plVar2;
  fVar18 = 0.55;
  if (iVar9 == 0) {
    fVar18 = 0.4;
  }
  do {
    lVar3 = (long)param_1 + lVar12 + 0x788;
    (**(code **)(*param_1 + 0x78))(param_1,lVar3,1);
    FUN_1001c3900(lVar3,0);
    uVar5 = *(uint *)((long)param_1 + lVar12 + 0x9b4);
    if ((uVar5 & 0x7f80) != 0x5900) {
      *(uint *)((long)param_1 + lVar12 + 0x9b4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5900;
      FUN_1000200a0((long)param_1 + lVar12 + 0x930);
    }
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0x788) + 0x28))(lVar3,&local_a0);
    fVar17 = *(float *)((long)param_1 + lVar12 + 0x7d4);
    bVar8 = false;
    if ((*(float *)((long)param_1 + lVar12 + 2000) == fVar18) &&
       (bVar8 = false, !NAN(fVar17) && !NAN(fVar18))) {
      bVar8 = fVar17 == fVar18;
    }
    if (!bVar8) {
      *(float *)((long)param_1 + lVar12 + 2000) = fVar18;
      *(float *)((long)param_1 + lVar12 + 0x7d4) = fVar18;
      FUN_1000200a0(lVar3);
    }
    *(uint *)((long)param_1 + lVar12 + 0x80c) = *(uint *)((long)param_1 + lVar12 + 0x80c) | 0x10;
    plVar14 = (long *)((ulong)plVar14 & 0xffffffff00000000 | uVar16);
    local_78 = uVar6;
    local_a0 = FUN_1000e4e0c;
    local_90 = 0;
    uStack_88 = 0;
    lVar3 = (long)param_1 + lVar12 + 0x790;
    plStack_98 = param_1;
    local_80 = plVar14;
    FUN_10001554c(lVar3,&local_a0);
    local_78 = uVar7;
    uVar13 = uVar13 & 0xffffffff00000000 | uVar16;
    local_a0 = FUN_1000e4e0c;
    local_90 = 0;
    uStack_88 = 0;
    plStack_98 = param_1;
    local_80 = (long *)uVar13;
    FUN_10001554c(lVar3,&local_a0);
    uVar16 = uVar16 + 1;
    lVar12 = lVar12 + 0x388;
  } while (uVar16 != 5);
  FUN_1001bdb78(0x3f666666,puVar15,&DAT_10115a164);
  FUN_1001bdb04(0x3f800000,puVar15,&DAT_10115a168);
  local_a0 = (code *)0x0;
  FUN_1001bd8b4(puVar15,&local_a0);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_bubble_down_arrow");
  if ((*(float *)(param_1 + 0xb6) != 1.5) || (*(float *)((long)param_1 + 0x5b4) != 1.5)) {
    lVar12 = NEON_fmov(0x3fc00000,4);
    param_1[0xb6] = lVar12;
    FUN_1000200a0(plVar1);
  }
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xffacacac);
  FUN_100652dd4(plVar1,&local_a0,2);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar9 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651594(plVar2,*ppuVar4,&DAT_10115a168);
  uVar11 = FUN_1004e0150("HUD_SCOREBOARD_GAMEOVER_RATING_EXPLANATION",0);
  FUN_1006513c0(plVar2,uVar11);
  FUN_100651700(plVar2,3);
  uVar5 = *(uint *)((long)param_1 + 0x6dc);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x6dc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_1000e4e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000e50e4(param_1,param_2,param_5);
  return;
}




long * thunk_FUN_1000e4a84(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined4 uStack_78;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar15 = puVar10 + 0x17;
  *puVar10 = &PTR_thunk_FUN_1000e4e18_101458358;
  thunk_FUN_1001bd4e0(puVar15,1);
  plVar1 = param_1 + 0xad;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0xcb;
  thunk_FUN_100650e64(plVar2);
  lVar12 = 0;
  uVar13 = 0;
  do {
    thunk_FUN_1001c36dc((long)param_1 + lVar12 + 0x788);
    lVar12 = lVar12 + 0x388;
  } while (lVar12 != 0x11a8);
  *(undefined4 *)(param_1 + 0x326) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  iVar9 = FUN_100126c88();
  uVar7 = DAT_101dbd484;
  uVar6 = DAT_101dbd458;
  lVar12 = 0;
  uVar16 = 0;
  plVar14 = plVar2;
  fVar18 = 0.55;
  if (iVar9 == 0) {
    fVar18 = 0.4;
  }
  do {
    lVar3 = (long)param_1 + lVar12 + 0x788;
    (**(code **)(*param_1 + 0x78))(param_1,lVar3,1);
    FUN_1001c3900(lVar3,0);
    uVar5 = *(uint *)((long)param_1 + lVar12 + 0x9b4);
    if ((uVar5 & 0x7f80) != 0x5900) {
      *(uint *)((long)param_1 + lVar12 + 0x9b4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5900;
      FUN_1000200a0((long)param_1 + lVar12 + 0x930);
    }
    pcStack_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0x788) + 0x28))(lVar3,&pcStack_a0);
    fVar17 = *(float *)((long)param_1 + lVar12 + 0x7d4);
    bVar8 = false;
    if ((*(float *)((long)param_1 + lVar12 + 2000) == fVar18) &&
       (bVar8 = false, !NAN(fVar17) && !NAN(fVar18))) {
      bVar8 = fVar17 == fVar18;
    }
    if (!bVar8) {
      *(float *)((long)param_1 + lVar12 + 2000) = fVar18;
      *(float *)((long)param_1 + lVar12 + 0x7d4) = fVar18;
      FUN_1000200a0(lVar3);
    }
    *(uint *)((long)param_1 + lVar12 + 0x80c) = *(uint *)((long)param_1 + lVar12 + 0x80c) | 0x10;
    plVar14 = (long *)((ulong)plVar14 & 0xffffffff00000000 | uVar16);
    uStack_78 = uVar6;
    pcStack_a0 = FUN_1000e4e0c;
    uStack_90 = 0;
    uStack_88 = 0;
    lVar3 = (long)param_1 + lVar12 + 0x790;
    plStack_98 = param_1;
    plStack_80 = plVar14;
    FUN_10001554c(lVar3,&pcStack_a0);
    uStack_78 = uVar7;
    uVar13 = uVar13 & 0xffffffff00000000 | uVar16;
    pcStack_a0 = FUN_1000e4e0c;
    uStack_90 = 0;
    uStack_88 = 0;
    plStack_98 = param_1;
    plStack_80 = (long *)uVar13;
    FUN_10001554c(lVar3,&pcStack_a0);
    uVar16 = uVar16 + 1;
    lVar12 = lVar12 + 0x388;
  } while (uVar16 != 5);
  FUN_1001bdb78(0x3f666666,puVar15,&DAT_10115a164);
  FUN_1001bdb04(0x3f800000,puVar15,&DAT_10115a168);
  pcStack_a0 = (code *)0x0;
  FUN_1001bd8b4(puVar15,&pcStack_a0);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_bubble_down_arrow");
  if ((*(float *)(param_1 + 0xb6) != 1.5) || (*(float *)((long)param_1 + 0x5b4) != 1.5)) {
    lVar12 = NEON_fmov(0x3fc00000,4);
    param_1[0xb6] = lVar12;
    FUN_1000200a0(plVar1);
  }
  pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,0xffacacac);
  FUN_100652dd4(plVar1,&pcStack_a0,2);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar9 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651594(plVar2,*ppuVar4,&DAT_10115a168);
  uVar11 = FUN_1004e0150("HUD_SCOREBOARD_GAMEOVER_RATING_EXPLANATION",0);
  FUN_1006513c0(plVar2,uVar11);
  FUN_100651700(plVar2,3);
  uVar5 = *(uint *)((long)param_1 + 0x6dc);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x6dc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_1000e4e18(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1000e4e18_101458358;
  lVar1 = 0x11a8;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x400) = &PTR_FUN_10144f938;
    *(undefined ***)((long)param_1 + lVar1 + 0x698) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x750) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x768);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x698);
    *(undefined ***)((long)param_1 + lVar1 + 0x5a8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x660) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x678);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x5a8);
    *(undefined ***)((long)param_1 + lVar1 + 0x4b8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x570) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x588);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x4b8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x400);
    lVar1 = lVar1 + -0x388;
  } while (lVar1 != 0);
  thunk_FUN_100651068(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_1014a7108;
  param_1[0xc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xad);
  param_1[0x17] = &PTR_FUN_101464e50;
  param_1[0x82] = &PTR_FUN_1014a6db0;
  param_1[0x99] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_1014a6db0;
  param_1[0x6f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x58);
  param_1[0x2e] = &PTR_FUN_1014a6db0;
  param_1[0x45] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000e4e18(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1000e4e18_101458358;
  lVar1 = 0x11a8;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x400) = &PTR_FUN_10144f938;
    *(undefined ***)((long)param_1 + lVar1 + 0x698) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x750) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x768);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x698);
    *(undefined ***)((long)param_1 + lVar1 + 0x5a8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x660) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x678);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x5a8);
    *(undefined ***)((long)param_1 + lVar1 + 0x4b8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x570) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x588);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x4b8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x400);
    lVar1 = lVar1 + -0x388;
  } while (lVar1 != 0);
  thunk_FUN_100651068(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_1014a7108;
  param_1[0xc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xad);
  param_1[0x17] = &PTR_FUN_101464e50;
  param_1[0x82] = &PTR_FUN_1014a6db0;
  param_1[0x99] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_1014a6db0;
  param_1[0x6f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x58);
  param_1[0x2e] = &PTR_FUN_1014a6db0;
  param_1[0x45] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000e4f90(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000e4e18();
  operator_delete(pvVar1);
  return;
}




void FUN_1000e4fa4(float param_1,long param_2)

{
  FUN_10064e47c(param_2 + 0xb8);
  FUN_100651708(param_1 + -80.0,param_2 + 0x658,1);
  return;
}




void FUN_1000e4fe8(long param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  iVar2 = FUN_100126c88();
  fVar3 = 124.0;
  if (iVar2 == 0) {
    fVar3 = 90.0;
  }
  lVar1 = param_1 + 0xb8;
  fVar6 = 40.0;
  FUN_10064e5ec(0,0x42200000,param_1 + 0x658,4,lVar1,4);
  uVar5 = 0;
  plVar4 = (long *)(param_1 + 0x788);
  do {
    (**(code **)(*plVar4 + 0x48))(plVar4);
    fVar6 = fVar6 * 0.5;
    FUN_10064e5ec(((float)(uVar5 & 0xffffffff) + -2.0) * fVar3,fVar6,plVar4,8,lVar1,8);
    uVar5 = uVar5 + 1;
    plVar4 = plVar4 + 0x71;
  } while (uVar5 != 5);
  FUN_10064e5ec(0,0xc0d00000,param_1 + 0x568,4,lVar1,6);
  return;
}




void FUN_1000e50cc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 ^ 4;
  if ((uVar1 >> 2 & 1) == 0) {
    FUN_1000e4fe8();
    return;
  }
  return;
}




void FUN_1000e50e4(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_50 [32];
  
  iVar1 = 0;
  if (param_3 + 1 != *(int *)(param_1 + 0x1930)) {
    iVar1 = param_3 + 1;
  }
  *(int *)(param_1 + 0x1930) = iVar1;
  FUN_1001c38b8(param_1 + 0x788,iVar1 != 0);
  lVar3 = param_1 + 0xb10;
  uVar4 = 1;
  do {
    FUN_1001c38b8(lVar3,uVar4 < *(uint *)(param_1 + 0x1930));
    uVar4 = uVar4 + 1;
    lVar3 = lVar3 + 0x388;
  } while (uVar4 != 5);
  uVar2 = FUN_100644a94("EVENT_SELECT_MATCH_RATING");
  FUN_100644aec(auStack_50,uVar2,*(undefined4 *)(param_1 + 0x1930));
  FUN_100644c34(param_1,auStack_50,1);
  return;
}




long * FUN_1000e518c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *local_50;
  void *local_48;
  
  puVar3 = (undefined8 *)FUN_100655644();
  *puVar3 = &PTR_FUN_1014584a0;
  puVar3 = puVar3 + 0x2b;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x6f;
  thunk_FUN_100650e64(plVar2);
  *(undefined4 *)(param_1 + 0x95) = 0;
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652ca4(puVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  local_50 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x49] + 0x28))(plVar1,&local_50);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1004e3120(&local_50,"19");
  FUN_1006513c0(plVar1,&local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  local_50 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x6f] + 0x28))(plVar2,&local_50);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xffffffbb;
  return param_1;
}




long * thunk_FUN_1000e518c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puStack_50;
  void *pvStack_48;
  
  puVar3 = (undefined8 *)FUN_100655644();
  *puVar3 = &PTR_FUN_1014584a0;
  puVar3 = puVar3 + 0x2b;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x6f;
  thunk_FUN_100650e64(plVar2);
  *(undefined4 *)(param_1 + 0x95) = 0;
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652ca4(puVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  puStack_50 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x49] + 0x28))(plVar1,&puStack_50);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1004e3120(&puStack_50,"19");
  FUN_1006513c0(plVar1,&puStack_50);
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  puStack_50 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x6f] + 0x28))(plVar2,&puStack_50);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xffffffbb;
  return param_1;
}




void FUN_1000e52ec(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = -*(float *)(param_1 + 0x4a8);
  uVar1 = 5;
  uVar2 = 7;
  if (*(char *)(param_1 + 0x4ac) != '\0') {
    uVar1 = 7;
    fVar3 = *(float *)(param_1 + 0x4a8);
    uVar2 = 5;
  }
  FUN_10064e5ec(fVar3,0,param_1 + 0x158,uVar1,param_1 + 0x248,uVar2);
  FUN_10064e5ec(0,0,param_1 + 0x378,8,param_1 + 0x248,8);
  FUN_1006557ec(param_1);
  return;
}




void FUN_1000e5360(long param_1)

{
  FUN_1006531b0(param_1 + 0x158);
  return;
}




void FUN_1000e5368(long param_1,undefined8 param_2)

{
  FUN_100651038(param_1 + 0x248);
  FUN_100651038(param_1 + 0x378,param_2);
  return;
}




void FUN_1000e5398(long param_1,undefined8 param_2)

{
  FUN_100652d8c(param_1 + 0x158);
  FUN_100652ca4(param_1 + 0x158,param_2);
  return;
}




void FUN_1000e53c8(long param_1)

{
  FUN_100652cdc(param_1 + 0x158);
  return;
}




void FUN_1000e53d0(float param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_2 + 0x1a0) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x1a4)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0x1a4) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0x1a0) = param_1;
    *(float *)(param_2 + 0x1a4) = param_1;
    FUN_1000200a0(param_2 + 0x158);
    return;
  }
  return;
}




void FUN_1000e53fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100652dd4(param_1 + 0x158,param_2,2);
  FUN_100651460(param_1 + 0x248,param_3);
  FUN_100651460(param_1 + 0x378,param_3);
  return;
}




void FUN_1000e543c(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_100655b6c(param_1 + 99);
  uVar3 = FUN_1004e36c0(param_2,uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_100655b6c(param_1 + 0x89);
    iVar1 = FUN_1004e36c0(param_2,uVar2);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_1006513c0(param_1 + 0x49,param_2);
  FUN_1006513c0(param_1 + 0x6f,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001000e54ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1000e54bc(long param_1,undefined8 param_2)

{
  FUN_1006516bc(param_1 + 0x248);
  FUN_1006516bc(param_1 + 0x378,param_2);
  return;
}




void FUN_1000e54ec(long param_1,undefined8 param_2)

{
  FUN_10065165c(param_1 + 0x248);
  FUN_10065165c(param_1 + 0x378,param_2);
  return;
}




void FUN_1000e551c(long param_1)

{
  long lVar1;
  long lVar2;
  ushort *puVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 0x248;
  uVar7 = FUN_100651480(lVar1);
  lVar2 = param_1 + 0x378;
  uVar4 = *(uint *)(param_1 + 0x3fc);
  *(uint *)(param_1 + 0x3fc) = uVar4 | 4;
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x3fc) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6604;
    FUN_1000200a0(lVar2);
  }
  bVar6 = false;
  if ((*(float *)(param_1 + 0x3c0) == 3.0) && (bVar6 = false, !NAN(*(float *)(param_1 + 0x3c4)))) {
    bVar6 = *(float *)(param_1 + 0x3c4) == 3.0;
  }
  if (!bVar6) {
    uVar10 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 0x3c0) = uVar10;
    FUN_1000200a0(lVar2);
  }
  uVar10 = FUN_100640db8(0x3f800000,0x3f800000,0x3e99999a,FUN_10001f218);
  FUN_100640840(0x3f800000,0x3e99999a,FUN_10001f218);
  lVar5 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_10063f1bc(puVar9);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar9,uVar10);
  FUN_100640b58(0x3dcccccd,lVar2,&DAT_10115a168,0);
  FUN_100640b58(0x3f4ccccd,lVar2,uVar7,FUN_10001f218);
  lVar5 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 != 0xffff) {
    puVar3 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_10063ee9c(puVar3);
    *(undefined ***)puVar3 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_100642324(lVar2);
  FUN_100642b7c(lVar2,puVar9);
  uVar7 = FUN_10064081c(0x3f99999a);
  lVar2 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 != 0xffff) {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar9);
    *(undefined ***)puVar9 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(uint *)(param_1 + 0x2cc) = *(uint *)(param_1 + 0x2cc) & 0xfffffffb;
  FUN_100642324(lVar1);
  FUN_100642b7c(lVar1,uVar7);
  return;
}




void FUN_1000e581c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x6f);
  thunk_FUN_100651068(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_1014a7108;
  param_1[0x42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000e589c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x6f);
  thunk_FUN_100651068(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_1014a7108;
  param_1[0x42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000e5920(undefined8 param_1,undefined8 param_2)

{
  FUN_1000e592c(param_1,param_2,0,0);
  return;
}




long FUN_1000e592c(long param_1,long *param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  if (*(char *)((long)param_2 + 0x65) == '\0') {
    lVar4 = FUN_1010a1540(DAT_10184dad8,0);
LAB_1000e59ac:
    if (lVar4 != 0) {
      local_48[0] = (undefined4)param_2[4];
      if ((long *)param_2[3] != (long *)0x0) {
        local_48[0] = (**(code **)(*(long *)param_2[3] + 8))();
      }
      FUN_100045334(lVar4,local_48);
      FUN_1000453b4(lVar4,(int)param_2[5]);
      FUN_100045400(*(undefined4 *)((long)param_2 + 0x24),lVar4);
      FUN_100045414(lVar4,(char)param_2[0xd]);
      bVar1 = *(byte *)(lVar4 + 0x110);
      bVar2 = (byte)(((ulong)(*(uint *)((long)param_2 + 0x5c) & 3) << 0x23) >> 0x20);
      *(byte *)(lVar4 + 0x110) = bVar1 & 0xe0 | bVar1 & 7 | bVar2;
      *(byte *)(lVar4 + 0x110) = bVar1 & 0xe0 | bVar1 & 6 | bVar2 | *(byte *)((long)param_2 + 0x66);
      FUN_100045b9c(lVar4,(int)param_2[0xc]);
      if (*(char *)((long)param_2 + 0x65) != '\0') {
        FUN_100045c48(lVar4,param_1 + 0x2fc);
      }
      if (param_3 == 0) {
        bVar3 = *(char *)((long)param_2 + 100) != '\0';
        if (param_4 == 0) {
          FUN_1000455a4(lVar4,param_1,bVar3);
        }
        else {
          FUN_100045684(lVar4,param_1,param_4,bVar3);
        }
      }
      else {
        FUN_10004560c(lVar4,param_1,param_3,*(undefined1 *)((long)param_2 + 100));
      }
      if (*(char *)((long)param_2 + 0x67) != '\0') {
        FUN_100045764(*(undefined4 *)((long)param_2 + 0x2c),lVar4);
      }
      lVar6 = *param_2;
      if (lVar6 == 0) {
        if (param_2[2] != 0) {
          FUN_100045ab4(lVar4);
        }
      }
      else if (param_2[1] == 0) {
        if (((int)param_2[6] == -0x7ee3623b) || ((int)param_2[6] == 0)) {
          FUN_1000458d0(lVar4,lVar6);
        }
        else {
          FUN_100045a88(lVar4,lVar6);
        }
      }
      else {
        uVar5 = FUN_1010acd98();
        FUN_100045a68(lVar4,lVar6,uVar5);
      }
      fVar7 = *(float *)(param_2 + 10);
      bVar3 = false;
      if ((*(float *)((long)param_2 + 0x54) == 0.0) && (bVar3 = false, !NAN(fVar7))) {
        bVar3 = fVar7 == 0.0;
      }
      if (!bVar3) {
        FUN_100045b44(fVar7,*(float *)((long)param_2 + 0x54),(int)param_2[0xb],lVar4,
                      (long)param_2 + 0x44);
      }
      FUN_100045bc0(lVar4,(long)param_2 + 0x34);
      FUN_100045bcc((int)param_2[7],lVar4);
      FUN_100045bd4(lVar4,(long)param_2 + 0x3c);
      FUN_1000453bc(lVar4);
    }
  }
  else {
    for (lVar4 = *(long *)(param_1 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184db58) {
        lVar4 = FUN_1010a0298(lVar4,DAT_10184dad8);
        goto LAB_1000e59ac;
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}




void FUN_1000e5bb0(void)

{
  FUN_1000e592c();
  return;
}




undefined8 FUN_1000e5bb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && (lVar1 = FUN_100448e2c(param_1,param_3), lVar1 != 0)) {
    uVar2 = FUN_1000e592c(param_1,param_2,0,lVar1);
    return uVar2;
  }
  return 0;
}




void FUN_1000e5c08(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000e5c34(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_1000e5c60(void)

{
  if ((DAT_10184e178 & 1) == 0) {
    DAT_10184e170 = DAT_101872e38;
    DAT_10184e178 = 1;
  }
  return;
}




void FUN_1000e5c8c(void)

{
  if ((DAT_10184e188 & 1) == 0) {
    DAT_10184e180 = DAT_101872e38;
    DAT_10184e188 = 1;
  }
  return;
}




void FUN_1000e5cb8(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float local_894;
  undefined4 local_890;
  undefined4 local_88c;
  float local_888;
  float local_884;
  float local_880;
  undefined8 local_878 [256];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_10042e2a4(*param_1);
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  iVar1 = FUN_1003a34a4(lVar3,DAT_101d2cc3c);
  fVar7 = (float)_exp2f((float)iVar1 * -0.15200312);
  lVar3 = FUN_10042e2a4(*param_1);
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184db58))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar2 = FUN_1010a0218(lVar3,local_878,0x100,DAT_10184dad8);
  if (uVar2 != 0) {
    fVar7 = fVar7 * -49.999992 + 51.499992;
    uVar5 = (ulong)uVar2;
    puVar6 = local_878;
    do {
      uVar4 = *puVar6;
      FUN_100045b60(uVar4,&local_888,&local_88c,&local_894,&local_890);
      if (((local_888 == 0.0) && (local_884 == 0.0)) && (local_880 == 1.0)) {
        if (fVar7 <= local_894) {
          fVar8 = fVar7 * 0.1 + local_894 * 0.9;
        }
        else {
          fVar8 = fVar7 * 0.3 + local_894 * 0.7;
        }
        FUN_100045b44(local_88c,fVar8,local_890,uVar4,&local_888);
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000e5ea0(void)

{
  if ((DAT_10184dab0 & 1) == 0) {
    DAT_10184daa8 = DAT_101872e38;
    DAT_10184dab0 = 1;
  }
  return;
}




void FUN_1000e5ecc(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000e5ef8(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_1000e5f24(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003467f8();
  iVar2 = FUN_10034cde0();
  if ((iVar2 != 0) && (iVar2 = FUN_1010a1958(&local_60,1,DAT_10184db08,0), iVar2 != 0)) {
    iVar5 = 0;
    do {
      if (local_60 != 0) {
        uVar6 = 0x10000;
        lVar3 = local_60;
LAB_1000e5f90:
        do {
          do {
            lVar4 = lVar3;
            lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x377a062d);
            if (lVar3 != 0) {
              (**(code **)(lVar3 + 8))(lVar4);
            }
            if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0))
            {
              uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
              goto LAB_1000e5f90;
            }
            if ((uVar6 & 0xffff) == 0) goto LAB_1000e6028;
            lVar3 = *(long *)(lVar4 + 0x20);
          } while (*(long *)(lVar4 + 0x20) != 0);
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((lVar4 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) break;
          uVar6 = uVar1 | uVar6 & 0xffff0000;
          while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
            if ((uVar6 - 1 & 0xffff) == 0) goto LAB_1000e6028;
            lVar4 = *(long *)(lVar4 + 0x10);
            uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
            if (lVar4 == 0) goto LAB_1000e6028;
          }
        } while( true );
      }
LAB_1000e6028:
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000e606c(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [96];
  undefined1 auStack_30 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_1003e1a70();
  bVar1 = false;
  if (lVar3 != 0) {
    uVar4 = FUN_100345b94();
    lVar5 = FUN_10034c450(uVar4,"*VisionTotem*");
    thunk_FUN_10045cc04(auStack_90);
    FUN_1003a6cb4(auStack_90,lVar3);
    FUN_1003babdc(auStack_90,PTR_s_VisionTotem_10185bbc0,0);
    FUN_1003a25f4(auStack_90,1,0,0,0);
    FUN_100345b68(lVar3,auStack_a0,0);
    FUN_1003a6cbc(*(float *)(lVar5 + 0x144) + 2.0,auStack_90,auStack_a0);
    iVar2 = FUN_1003a6ce4(auStack_90,auStack_30,1,0);
    bVar1 = iVar2 != 0;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}




ulong FUN_1000e6160(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_24;
  
  lVar2 = FUN_1003e1a70();
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_1003a3644();
    local_24 = 0xffffffff;
    uVar4 = FUN_1003a2f18(uVar3,DAT_101d3ee28,&local_24);
    if ((int)uVar4 != 0) {
      FUN_1003c2eec(uVar3,local_24);
      lVar2 = FUN_100345d90();
      uVar4 = 0;
      if (lVar2 != 0) {
        iVar1 = FUN_100345bbc();
        uVar4 = (ulong)(iVar1 == 0);
      }
    }
  }
  return uVar4;
}




void FUN_1000e61d8(void)

{
  if ((DAT_10184db10 & 1) == 0) {
    DAT_10184db08 = DAT_101872e38;
    DAT_10184db10 = 1;
  }
  return;
}




undefined8 * FUN_1000e6204(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




void FUN_1000e6234(undefined8 param_1,int *param_2)

{
  void **ppvVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  void *local_c8 [2];
  char local_b1;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_80;
  char local_69;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    puVar5 = &DAT_101dc68e8;
  }
  else {
    cVar2 = *(char *)((long)param_2 + 0xd9);
    lVar3 = FUN_100331578();
    if (*(char *)(lVar3 + 0x20) != '\0') {
      uVar4 = FUN_100331578();
      FUN_10033122c(local_c8,uVar4,*(long *)(param_2 + 2) + 0x30);
      ppvVar1 = local_68;
      if (cVar2 != '\0') {
        ppvVar1 = local_50;
      }
      FUN_10003330c(param_1,ppvVar1);
      if (local_39 < '\0') {
        operator_delete(local_50[0]);
      }
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      if (local_69 < '\0') {
        operator_delete(local_80);
      }
      if (local_81 < '\0') {
        operator_delete(local_98);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0);
      }
      if (local_b1 < '\0') {
        operator_delete(local_c8[0]);
      }
      return;
    }
    puVar5 = &DAT_101dc68e8;
    if (cVar2 != '\0') {
      puVar5 = &DAT_101dc6900;
    }
  }
  FUN_10003330c(param_1,puVar5);
  return;
}




bool FUN_1000e634c(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 == 6) {
    iVar3 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d246a);
    bVar2 = iVar3 != 0;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}




void FUN_1000e63a0(ulong param_1,string *param_2,int param_3,string *param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  string sVar8;
  void *local_d0 [2];
  char local_b9;
  void *local_b8 [2];
  char local_a1;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  bVar7 = *(byte *)(param_1 + 0x17);
  uVar5 = (ulong)bVar7;
  uVar6 = *(ulong *)(param_1 + 8);
  uVar1 = uVar6;
  if (-1 < (char)bVar7) {
    uVar1 = uVar5;
  }
  if (uVar1 == 8) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d2471);
    if (iVar2 != 0) {
      bVar7 = *(byte *)(param_1 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_1 + 8);
      goto LAB_1000e641c;
    }
    sVar8 = param_2[0x17];
    uVar5 = (ulong)(byte)sVar8;
    uVar6 = *(ulong *)(param_2 + 8);
    uVar1 = uVar6;
    if (-1 < (char)sVar8) {
      uVar1 = uVar5;
    }
    if (uVar1 == 6) {
      iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d247a);
      if (iVar2 != 0) {
        sVar8 = param_2[0x17];
        uVar5 = (ulong)(byte)sVar8;
        uVar6 = *(ulong *)(param_2 + 8);
        goto LAB_1000e66e4;
      }
      if (param_3 < 500) {
        if (param_3 < 100) {
          pcVar4 = "card_currency_glory_small";
        }
        else {
          pcVar4 = "card_currency_glory_medium";
        }
      }
      else {
        pcVar4 = "card_currency_glory_large";
      }
    }
    else {
LAB_1000e66e4:
      uVar1 = uVar6;
      if (-1 < (char)sVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 4) {
        iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d24d0);
        if (iVar2 == 0) {
          if (param_3 < 500) {
            if (param_3 < 100) {
              pcVar4 = "card_currency_ice_small";
            }
            else {
              pcVar4 = "card_currency_ice_medium";
            }
          }
          else {
            pcVar4 = "card_currency_ice_large";
          }
          goto LAB_1000e6a34;
        }
        sVar8 = param_2[0x17];
        uVar5 = (ulong)(byte)sVar8;
        uVar6 = *(ulong *)(param_2 + 8);
      }
      uVar1 = uVar6;
      if (-1 < (char)sVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 7) {
        iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d251e);
        if (iVar2 == 0) {
          pcVar4 = "card_currency_essence";
          goto LAB_1000e6a34;
        }
        sVar8 = param_2[0x17];
        uVar5 = (ulong)(byte)sVar8;
        uVar6 = *(ulong *)(param_2 + 8);
      }
      uVar1 = uVar6;
      if (-1 < (char)sVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 4) {
        iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d253c);
        if (iVar2 == 0) {
          pcVar4 = "card_currency_opal";
          goto LAB_1000e6a34;
        }
        sVar8 = param_2[0x17];
        uVar5 = (ulong)(byte)sVar8;
        uVar6 = *(ulong *)(param_2 + 8);
      }
      uVar1 = uVar6;
      if (-1 < (char)sVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 0xc) {
        iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d2554);
        if (iVar2 == 0) {
          pcVar4 = "card_currency_seasonal_key";
          goto LAB_1000e6a34;
        }
        sVar8 = param_2[0x17];
        uVar5 = (ulong)(byte)sVar8;
        uVar6 = *(ulong *)(param_2 + 8);
      }
      if (-1 < (char)sVar8) {
        uVar6 = uVar5;
      }
      if ((uVar6 != 8) ||
         (iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d257c),
         iVar2 != 0)) goto LAB_1000e6904;
      pcVar4 = "card_currency_epic_key";
    }
LAB_1000e6a34:
    FUN_10001549c(local_b8,pcVar4);
    std::string::operator=(param_4,(string *)local_b8);
    local_d0[0] = local_b8[0];
    local_b9 = local_a1;
  }
  else {
LAB_1000e641c:
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d259c);
      if (iVar2 != 0) {
        bVar7 = *(byte *)(param_1 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_1 + 8);
        goto LAB_1000e645c;
      }
LAB_1000e68f8:
      std::string::operator=(param_4,param_2);
      goto LAB_1000e6904;
    }
LAB_1000e645c:
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25a1);
      if (iVar2 == 0) goto LAB_1000e68f8;
      bVar7 = *(byte *)(param_1 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0xb) {
      iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25a6);
      if (iVar2 == 0) goto LAB_1000e68f8;
      bVar7 = *(byte *)(param_1 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 != 4) {
LAB_1000e651c:
      uVar1 = uVar6;
      if (-1 < (char)bVar7) {
        uVar1 = uVar5;
      }
      if (uVar1 == 4) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25c4);
        if (iVar2 == 0) {
          pcVar4 = "card_hero_%s";
          goto LAB_1000e6860;
        }
        bVar7 = *(byte *)(param_1 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_1 + 8);
      }
      uVar1 = uVar6;
      if (-1 < (char)bVar7) {
        uVar1 = uVar5;
      }
      if (uVar1 == 6) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d246a);
        if (iVar2 == 0) goto LAB_1000e68f8;
        bVar7 = *(byte *)(param_1 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_1 + 8);
      }
      uVar1 = uVar6;
      if (-1 < (char)bVar7) {
        uVar1 = uVar5;
      }
      if (uVar1 == 9) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25d6);
        if (iVar2 == 0) {
          uVar1 = *(ulong *)(param_2 + 8);
          if (-1 < (char)param_2[0x17]) {
            uVar1 = (ulong)(byte)param_2[0x17];
          }
          if ((uVar1 == 0xf) &&
             (iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d25e0),
             iVar2 == 0)) {
            pcVar4 = "card_currency_golden_ticket";
            goto LAB_1000e6a34;
          }
          goto LAB_1000e68f8;
        }
        bVar7 = *(byte *)(param_1 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_1 + 8);
      }
      uVar1 = uVar6;
      if (-1 < (char)bVar7) {
        uVar1 = uVar5;
      }
      if (uVar1 == 9) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d260c);
        if (iVar2 == 0) goto LAB_1000e68f8;
        bVar7 = *(byte *)(param_1 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_1 + 8);
      }
      uVar1 = uVar6;
      if (-1 < (char)bVar7) {
        uVar1 = uVar5;
      }
      if (uVar1 == 9) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d2616);
        if (iVar2 == 0) {
          uVar1 = *(ulong *)(param_2 + 8);
          if (-1 < (char)param_2[0x17]) {
            uVar1 = (ulong)(byte)param_2[0x17];
          }
          if ((uVar1 == 5) &&
             (iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d2620),
             iVar2 == 0)) {
            pcVar4 = "card_ascension_level";
          }
          else {
            pcVar4 = "card_sunlight";
          }
          goto LAB_1000e6a34;
        }
        bVar7 = *(byte *)(param_1 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_1 + 8);
      }
      if (-1 < (char)bVar7) {
        uVar6 = uVar5;
      }
      if ((uVar6 != 9) ||
         (iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d2649), iVar2 != 0
         )) goto LAB_1000e6904;
      pcVar4 = "card_currency_xp";
      goto LAB_1000e6a34;
    }
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25b2);
    if (iVar2 != 0) {
      bVar7 = *(byte *)(param_1 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_1 + 8);
      goto LAB_1000e651c;
    }
    pcVar4 = "card_skin_%s";
LAB_1000e6860:
    FUN_1004d2698(local_b8,pcVar4);
    FUN_10001549c(local_d0,local_b8);
    lVar3 = FUN_10032c068(local_d0);
    if (local_b9 < '\0') {
      operator_delete(local_d0[0]);
    }
    if (lVar3 == 0) goto LAB_1000e6904;
    FUN_10001549c(local_d0,local_b8);
    std::string::operator=(param_4,(string *)local_d0);
  }
  if (local_b9 < '\0') {
    operator_delete(local_d0[0]);
  }
LAB_1000e6904:
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)param_4[0x17]) {
    uVar1 = (ulong)(byte)param_4[0x17];
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1 != 0);
}




void FUN_1000e6a60(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000e713c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




bool FUN_1000e6ae0(uint *param_1,int *param_2)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  void *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  
  bVar1 = false;
  if (param_1 != (uint *)0x0) {
    if (*param_1 != 0) {
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = lVar3 + (ulong)*param_1 * 0x58;
      do {
        if (*(uint *)(lVar3 + 0x48) != 0) {
          lVar5 = (ulong)*(uint *)(lVar3 + 0x48) * 0x70;
          psVar2 = (string *)(*(long *)(lVar3 + 0x50) + 0x38);
          do {
            pvStack_88 = (void *)0x0;
            local_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
            lStack_a8 = 0;
            local_b0 = 0;
            uStack_98 = 0;
            local_a0 = (void *)0x0;
            uStack_c8 = 0;
            local_d0 = (void *)0x0;
            local_b8 = (void *)0x0;
            lStack_c0 = 0;
            std::string::operator=((string *)&local_d0,psVar2 + -0x20);
            std::string::operator=((string *)&local_b8,psVar2 + -0x38);
            local_70 = *(undefined4 *)(psVar2 + -8);
            std::string::operator=((string *)&local_a0,psVar2 + 0x18);
            std::string::operator=((string *)&pvStack_88,psVar2);
            local_6c = *(undefined4 *)(psVar2 + 0x30);
            FUN_1000e6c24(param_2,&local_d0);
            if (lStack_78 < 0) {
              operator_delete(pvStack_88);
            }
            if (local_90 < 0) {
              operator_delete(local_a0);
            }
            if (lStack_a8 < 0) {
              operator_delete(local_b8);
            }
            if (lStack_c0 < 0) {
              operator_delete(local_d0);
            }
            psVar2 = psVar2 + 0x70;
            lVar5 = lVar5 + -0x70;
          } while (lVar5 != 0);
        }
        lVar3 = lVar3 + 0x58;
      } while (lVar3 != lVar4);
    }
    bVar1 = *param_2 != 0;
  }
  return bVar1;
}




void FUN_1000e6c24(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000e71b8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  FUN_10003330c(lVar4 + -0x68,param_2);
  FUN_10003330c(lVar4 + -0x50,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x48);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x60);
  return;
}




void FUN_1000e6e44(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000e72f8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x70;
  FUN_10003330c(lVar4 + -0x70,param_2);
  FUN_10003330c(lVar4 + -0x58,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -0x40) = *(undefined4 *)(param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x38);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x50);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x68);
  return;
}




undefined8
FUN_1000e6f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80 [2];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  if (*param_4 == 0) {
    uVar1 = 1;
  }
  else {
    local_90 = 0;
    uStack_88 = 0;
    FUN_10003330c(local_80);
    local_60 = DAT_101dc1cb8;
    local_68 = param_1;
    uStack_64 = param_2;
    local_58 = param_3;
    local_54 = param_6;
    uVar1 = FUN_1000e6cd8(param_4,&local_90);
    if ((int)uVar1 != 0) {
      lVar2 = FUN_100641574("main_nav_heroes");
      if (lVar2 != 0) {
        FUN_100641518(local_98,(ulong)local_98 | 4);
        lVar3 = FUN_10002f320();
        lVar2 = FUN_10003d5bc(lVar2);
        *(ulong *)(lVar3 + 0xe190) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) / local_98._4_4_,
                      (float)*(undefined8 *)(lVar2 + 8) / local_98._0_4_);
      }
      local_54 = param_6;
      lVar2 = FUN_10002f320();
      FUN_1001a4010(lVar2 + 0xc6d0,&local_90);
    }
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    FUN_1000e7090(&local_90,1);
  }
  return uVar1;
}




long FUN_1000e701c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  
  lVar1 = FUN_10003330c();
  FUN_10003330c(lVar1 + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x30) = param_4;
  FUN_10003330c(param_1 + 0x38,param_5);
  FUN_10003330c(param_1 + 0x50,param_6);
  *(undefined4 *)(param_1 + 0x68) = param_7;
  return param_1;
}




void FUN_1000e713c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1000e7440(void)

{
  DAT_101dc6770 = 0xff;
  DAT_101dc6772 = 0xffff;
  DAT_101dc6774 = 0xffff;
  DAT_101dc6776 = 0xffbc9c44;
  DAT_101dc677a = 0xff1166f2;
  DAT_101dc677e = 0xffe0e0e0;
  DAT_101dc6782 = 0xffa0a0a0;
  DAT_101dc6786 = 0xff8c8c8c;
  DAT_101dc678a = 0xff322213;
  DAT_101dc678e = 0xff091911;
  DAT_101dc6792 = 0xff170c19;
  DAT_101dc6796 = 0xff241a14;
  DAT_101dc679a = 0xff14171c;
  DAT_101dc679e = 0xff221911;
  DAT_101dc67a2 = 0xff1a1416;
  DAT_101dc67a6 = 0xff121414;
  DAT_101dc67aa = 0xff1a1809;
  DAT_101dc67ae = 0xff141414;
  DAT_101dc67b2 = 0xff141414;
  DAT_101dc67b6 = 0xff2929c0;
  DAT_101dc67ba = 0xff283082;
  DAT_101dc67be = 0xff5262cc;
  DAT_101dc67c2 = 0xff283082;
  DAT_101dc67c6 = 0xff5262cc;
  DAT_101dc67ca = 0xff745c42;
  DAT_101dc67ce = 0xff184155;
  DAT_101dc67d2 = 0xff92665e;
  DAT_101dc67d6 = 0xffbc9c44;
  DAT_101dc67da = 0xffbbae56;
  DAT_101dc67de = 0xff8b7b01;
  DAT_101dc67e2 = 0xff90b3ef;
  DAT_101dc67e6 = 0xff728ebe;
  DAT_101dc67ea = 0xff19459d;
  DAT_101dc67ee = 0xff9d877b;
  DAT_101dc67f2 = 0xffcbb1a3;
  DAT_101dc67f6 = 0xff3f6fb5;
  DAT_101dc67fa = 0xffc5c5c5;
  DAT_101dc67fe = 0xff4fc1f1;
  DAT_101dc6802 = 0xff606060;
  DAT_101dc6806 = 0xffc5ff7b;
  DAT_101dc680a = 0xff5271eb;
  DAT_101dc680e = 0xfffae076;
  DAT_101dc6812 = 0xff3ac8f6;
  DAT_101dc6816 = 0xffaaaaaa;
  DAT_101dc681a = 0xffe19400;
  DAT_101dc681e = 0xffe19400;
  DAT_101dc6822 = 0xffe550b2;
  DAT_101dc6826 = 0xfff22ae8;
  DAT_101dc682a = 0xff005ae1;
  DAT_101dc682e = 0xff1addfa;
  DAT_101dc6832 = 0xff2424b3;
  DAT_101dc6836 = 0xff2424b3;
  DAT_101dc683a = 0xff646464;
  DAT_101dc683e = 0xff92665e;
  DAT_101dc6842 = 0xff646037;
  DAT_101dc684c = 0xff1111a1;
  DAT_101dc6850 = 0xff321ee1;
  DAT_101dc6854 = 0xffc8c8c8;
  DAT_101dc6858 = 0xff321ee1;
  DAT_101dc6864 = 0xff6259b3;
  DAT_101dc6868 = 0xff506e73;
  DAT_101dc686c = 0xff9dbf86;
  DAT_101dc6848 = 0xffffffff;
  DAT_101dc6870 = 0xffa35244;
  DAT_101dc685c = 0xff7fe801;
  DAT_101dc6874 = 0xffca828e;
  DAT_101dc6860 = 0xffffffff;
  DAT_101dc6878 = 0xffa6a6a6;
  DAT_101dc687c = 0xffa6a6a6;
  DAT_101dc6880 = 0xffffffff;
  DAT_101dc6884 = 0xff88ea2f;
  DAT_101dc6888 = 0xff8c8c8c;
  DAT_101dc688c = 0xffffb400;
  DAT_101dc6890 = 0xffff00ff;
  DAT_101dc6894 = 0xff00aded;
  DAT_101dc6898 = 0xff33d3ff;
  DAT_101dc689c = 0xff7fe801;
  DAT_101dc68a0 = 0xff282828;
  DAT_101dc68a4 = 0xfff0f0f0;
  DAT_101dc68a8 = 0xffa4781e;
  DAT_101dc68ac = 0xffa6654b;
  DAT_101dc68b0 = 0xff93435b;
  DAT_101dc68b4 = 0xff387f9c;
  DAT_101dc68b8 = 0xffa3781e;
  DAT_101dc68bc = 0xffffd18a;
  DAT_101dc68c0 = 0xffff61f7;
  DAT_101dc68c4 = 0xff5de1f2;
  DAT_101dc68c8 = 0xff80eaff;
  DAT_101dc68cc = 0xff32e00e;
  DAT_101dc68d0 = 0xff5a3c10;
  DAT_101dc68d4 = 0xff330b03;
  DAT_101dc68d8 = 0xff33031d;
  DAT_101dc68dc = 0xff032433;
  DAT_101dc68e0 = 0xff9e8e8d;
  FUN_10001549c(&DAT_101dc68e8,"chest_battered_closed");
  ___cxa_atexit(FUN_1000e6204,&DAT_101dc68e8,0x100000000);
  FUN_10001549c(&DAT_101dc6900,"chest_battered_opened");
  ___cxa_atexit(FUN_1000e6204,&DAT_101dc6900,0x100000000);
  return;
}




void FUN_1000e7b70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  undefined4 auStack_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  thunk_FUN_1010add94(auStack_50);
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 != (undefined8 *)0x0) {
    iVar8 = 0;
    do {
      plVar6 = (long *)puVar4[1];
      puVar5 = (undefined4 *)*plVar6;
      if (puVar5 != (undefined4 *)0x0) {
        puVar7 = auStack_48;
        uVar1 = 0;
        do {
          uVar3 = uVar1;
          plVar6 = plVar6 + 1;
          *puVar7 = *puVar5;
          puVar5 = (undefined4 *)*plVar6;
          uVar1 = uVar3 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar5 != (undefined4 *)0x0);
        if (uVar3 < 4) {
          FUN_1010ae160(auStack_50,iVar8,auStack_48,uVar1,1,*puVar4);
        }
      }
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 1;
      puVar4 = (undefined8 *)*param_3;
    } while (puVar4 != (undefined8 *)0x0);
    if (iVar8 != 0) {
      uVar2 = FUN_1010ae1d8(auStack_50);
      *param_2 = uVar2;
      FUN_1004e914c(param_1,uVar2);
    }
  }
  thunk_FUN_1010adde4(auStack_50);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000e7c64(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




bool FUN_1000e7c70(int *param_1)

{
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
     ((param_1[3] == 0 && (param_1[4] == 0)))) {
    return param_1[5] != 0;
  }
  return true;
}




int FUN_1000e7cb0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 == 0) && (iVar1 = param_1[1], iVar1 == 0)) && (iVar1 = param_1[2], iVar1 == 0)) &&
     ((iVar1 = param_1[3], iVar1 == 0 && (iVar1 = param_1[4], iVar1 == 0)))) {
    iVar1 = param_1[5];
  }
  return iVar1;
}




char * FUN_1000e7ce4(int *param_1)

{
  char *pcVar1;
  
  if (*param_1 != 0) {
    return "gold";
  }
  if (param_1[1] != 0) {
    return "silver";
  }
  if (param_1[2] != 0) {
    return "opal";
  }
  if (param_1[3] != 0) {
    return "essence";
  }
  if (param_1[4] != 0) {
    return "seasonalKey";
  }
  pcVar1 = "";
  if (param_1[5] != 0) {
    pcVar1 = "epicKey";
  }
  return pcVar1;
}




bool FUN_1000e7d68(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_1000e7ce4();
  pcVar1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar1 = param_2;
  }
  iVar2 = _strcmp(pcVar3,pcVar1);
  return iVar2 == 0;
}




void FUN_1000e7da4(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




ulong FUN_1000e7e04(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_1000e7c70((int *)(param_1 + 0x18));
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar1 = 0;
      goto LAB_1000e7e4c;
    }
    lVar2 = FUN_10015d3ec();
    lVar3 = 0x5454;
  }
  else {
    lVar2 = FUN_10015d3ec();
    lVar3 = 0x5450;
  }
  uVar1 = (ulong)*(uint *)(lVar2 + lVar3);
LAB_1000e7e4c:
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = FUN_10015d3ec(uVar1);
    uVar1 = (ulong)*(uint *)(lVar2 + 0x545c);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar2 = FUN_10015d3ec(uVar1);
    uVar1 = (ulong)*(uint *)(lVar2 + 0x5458);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar2 = FUN_10015d3ec(uVar1);
    uVar1 = (ulong)*(uint *)(lVar2 + 0x5460);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    lVar2 = FUN_10015d3ec(uVar1);
    uVar1 = (ulong)*(uint *)(lVar2 + 0x5464);
  }
  return uVar1;
}




bool FUN_1000e7eb0(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  
  iVar3 = FUN_1000e7c70((uint *)(param_1 + 0x18));
  if (iVar3 == 0) {
    bVar5 = true;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 == 0) {
      bVar5 = true;
    }
    else {
      lVar4 = FUN_10015d3ec();
      bVar5 = uVar1 <= *(uint *)(lVar4 + 0x5450);
    }
    uVar1 = *(uint *)(param_1 + 0x1c);
    bVar2 = bVar5;
    if (uVar1 != 0) {
      lVar4 = FUN_10015d3ec();
      bVar2 = false;
      if (uVar1 <= *(uint *)(lVar4 + 0x5454)) {
        bVar2 = bVar5;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    bVar5 = bVar2;
    if (uVar1 != 0) {
      lVar4 = FUN_10015d3ec();
      bVar5 = false;
      if (uVar1 <= *(uint *)(lVar4 + 0x545c)) {
        bVar5 = bVar2;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    bVar2 = bVar5;
    if (uVar1 != 0) {
      lVar4 = FUN_10015d3ec();
      bVar2 = false;
      if (uVar1 <= *(uint *)(lVar4 + 0x5458)) {
        bVar2 = bVar5;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    bVar5 = bVar2;
    if (uVar1 != 0) {
      lVar4 = FUN_10015d3ec();
      bVar5 = false;
      if (uVar1 <= *(uint *)(lVar4 + 0x5460)) {
        bVar5 = bVar2;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      lVar4 = FUN_10015d3ec();
      bVar5 = uVar1 <= *(uint *)(lVar4 + 0x5464) && bVar5;
    }
  }
  return bVar5;
}




int FUN_1000e7fac(long param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = (uint *)(param_1 + 0x18);
  iVar3 = FUN_1000e7c70(puVar1);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else {
    if (*puVar1 == 0) {
      iVar3 = -1;
    }
    else {
      lVar4 = FUN_10015d3ec();
      uVar2 = 0;
      if (*puVar1 != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5450) / *puVar1;
      }
      iVar3 = (int)(float)(int)uVar2;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      lVar4 = FUN_10015d3ec();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x1c) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5454) / *(uint *)(param_1 + 0x1c);
      }
      fVar6 = (float)NEON_fminnm((float)iVar3,(float)(int)uVar2);
      fVar5 = (float)(int)uVar2;
      if (-1 < iVar3) {
        fVar5 = fVar6;
      }
      iVar3 = (int)fVar5;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar4 = FUN_10015d3ec();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x545c) / *(uint *)(param_1 + 0x20);
      }
      fVar6 = (float)NEON_fminnm((float)iVar3,(float)(int)uVar2);
      fVar5 = (float)(int)uVar2;
      if (-1 < iVar3) {
        fVar5 = fVar6;
      }
      iVar3 = (int)fVar5;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar4 = FUN_10015d3ec();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x24) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5458) / *(uint *)(param_1 + 0x24);
      }
      fVar6 = (float)NEON_fminnm((float)iVar3,(float)(int)uVar2);
      fVar5 = (float)(int)uVar2;
      if (-1 < iVar3) {
        fVar5 = fVar6;
      }
      iVar3 = (int)fVar5;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      lVar4 = FUN_10015d3ec();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x28) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5460) / *(uint *)(param_1 + 0x28);
      }
      fVar6 = (float)NEON_fminnm((float)iVar3,(float)(int)uVar2);
      fVar5 = (float)(int)uVar2;
      if (-1 < iVar3) {
        fVar5 = fVar6;
      }
      iVar3 = (int)fVar5;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      lVar4 = FUN_10015d3ec();
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x2c) != 0) {
        uVar2 = *(uint *)(lVar4 + 0x5464) / *(uint *)(param_1 + 0x2c);
      }
      fVar6 = (float)NEON_fminnm((float)iVar3,(float)(int)uVar2);
      fVar5 = (float)(int)uVar2;
      if (-1 < iVar3) {
        fVar5 = fVar6;
      }
      iVar3 = (int)fVar5;
    }
  }
  fVar5 = (float)iVar3;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return (int)fVar5;
}




bool FUN_1000e8120(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  bVar6 = *(byte *)(param_1 + 0x17);
  uVar4 = (ulong)bVar6;
  uVar5 = *(ulong *)(param_1 + 8);
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 4) {
    iVar3 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d24d0);
    if (iVar3 != 0) {
      bVar6 = *(byte *)(param_1 + 0x17);
      uVar4 = (ulong)bVar6;
      uVar5 = *(ulong *)(param_1 + 8);
      goto LAB_1000e8178;
    }
LAB_1000e8234:
    bVar2 = true;
  }
  else {
LAB_1000e8178:
    uVar1 = uVar5;
    if (-1 < (char)bVar6) {
      uVar1 = uVar4;
    }
    if (uVar1 == 6) {
      iVar3 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d247a);
      if (iVar3 == 0) goto LAB_1000e8234;
      bVar6 = *(byte *)(param_1 + 0x17);
      uVar4 = (ulong)bVar6;
      uVar5 = *(ulong *)(param_1 + 8);
    }
    uVar1 = uVar5;
    if (-1 < (char)bVar6) {
      uVar1 = uVar4;
    }
    if (uVar1 == 4) {
      iVar3 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d253c);
      if (iVar3 == 0) goto LAB_1000e8234;
      bVar6 = *(byte *)(param_1 + 0x17);
      uVar4 = (ulong)bVar6;
      uVar5 = *(ulong *)(param_1 + 8);
    }
    if (-1 < (char)bVar6) {
      uVar5 = uVar4;
    }
    if (uVar5 == 7) {
      iVar3 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d251e);
      bVar2 = iVar3 == 0;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}




void FUN_1000e824c(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_1,"gold");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_1000e82b8:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "gold";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_1000e82b8;
    local_38 = 0x100005;
    local_48 = "gold";
    uStack_40 = 4;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  *param_2 = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"silver");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_1000e832c:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "silver";
    uStack_40 = 6;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_1000e832c;
    local_38 = 0x100005;
    local_48 = "silver";
    uStack_40 = 6;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[1] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"opal");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_1000e83a0:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "opal";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_1000e83a0;
    local_38 = 0x100005;
    local_48 = "opal";
    uStack_40 = 4;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[2] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"essence");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_1000e8414:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "essence";
    uStack_40 = 7;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_1000e8414;
    local_38 = 0x100005;
    local_48 = "essence";
    uStack_40 = 7;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[3] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"seasonal_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_1000e8488:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "seasonal_key";
    uStack_40 = 0xc;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_1000e8488;
    local_38 = 0x100005;
    local_48 = "seasonal_key";
    uStack_40 = 0xc;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[4] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"epic_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "epic_key";
    uStack_40 = 8;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "epic_key";
      uStack_40 = 8;
      puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
      uVar3 = *puVar2;
      goto LAB_1000e8520;
    }
  }
  uVar3 = 0;
LAB_1000e8520:
  param_2[5] = uVar3;
  return;
}




void FUN_1000e8538(long *param_1,string *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  lVar1 = FUN_1000e86c0(param_1,"id");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "id";
    uStack_40 = 2;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "id";
      uStack_40 = 2;
      pcVar3 = (char *)FUN_1000e87dc(param_1,&local_48);
      if (((byte)pcVar3[0x12] >> 6 & 1) == 0) {
        pcVar3 = *(char **)pcVar3;
      }
      goto LAB_1000e85ac;
    }
  }
  pcVar3 = "";
LAB_1000e85ac:
  FUN_10001549c(&local_48,pcVar3);
  std::string::operator=(param_2,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar1 = FUN_1000e86c0(param_1,"price");
  if ((*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) && ((int)param_1[2] == 3)) {
    local_38 = 0x100005;
    local_48 = "price";
    uStack_40 = 5;
    uVar2 = FUN_1000e87dc(param_1,&local_48);
    FUN_1000e824c(uVar2,param_2 + 0x18);
  }
  lVar1 = FUN_1000e86c0(param_1,"awardedCurrencies");
  if ((*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) && ((int)param_1[2] == 3)) {
    local_38 = 0x100005;
    local_48 = "awardedCurrencies";
    uStack_40 = 0x11;
    uVar2 = FUN_1000e87dc(param_1,&local_48);
    FUN_1000e824c(uVar2,param_2 + 0x30);
  }
  return;
}




long FUN_1000e86c0(long *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long local_48;
  ulong local_40;
  undefined4 local_38;
  
  lVar3 = 0;
  do {
    pcVar1 = (char *)(param_2 + lVar3);
    lVar3 = lVar3 + 1;
  } while (*pcVar1 != '\0');
  local_38 = 0x100005;
  local_40 = (ulong)((int)lVar3 - 1);
  lVar3 = *param_1;
  local_48 = param_2;
  if ((int)param_1[1] != 0) {
    do {
      iVar2 = FUN_1000e8750(&local_48,lVar3);
      if (iVar2 != 0) {
        return lVar3;
      }
      lVar3 = lVar3 + 0x30;
    } while (lVar3 != *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30);
  }
  return lVar3;
}




bool FUN_1000e8750(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 2) >> 0x16 & 1) == 0) {
    uVar5 = *(uint *)(param_1 + 1);
  }
  else {
    uVar5 = 0xf - (int)*(char *)((long)param_1 + 0xf);
  }
  uVar1 = *(uint *)(param_2 + 1);
  if ((*(uint *)(param_2 + 2) & 0x400000) != 0) {
    uVar1 = 0xf - (int)*(char *)((long)param_2 + 0xf);
  }
  if (uVar5 == uVar1) {
    if ((*(uint *)(param_1 + 2) >> 0x16 & 1) == 0) {
      param_1 = (undefined8 *)*param_1;
    }
    puVar2 = (void *)*param_2;
    if ((*(uint *)(param_2 + 2) & 0x400000) != 0) {
      puVar2 = param_2;
    }
    if (param_1 == puVar2) {
      bVar3 = true;
    }
    else {
      iVar4 = _memcmp(param_1,puVar2,(ulong)uVar5);
      bVar3 = iVar4 == 0;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}




undefined8 * FUN_1000e87dc(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *param_1;
  if ((int)param_1[1] == 0) {
    uVar2 = 0;
    lVar3 = lVar4;
  }
  else {
    do {
      iVar1 = FUN_1000e8750(param_2,lVar4);
      lVar3 = *param_1;
      uVar2 = (ulong)*(uint *)(param_1 + 1);
      if (iVar1 != 0) break;
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar3 + uVar2 * 0x30);
  }
  if (lVar4 == lVar3 + uVar2 * 0x30) {
    if ((DAT_10184e1b8 & 1) == 0) {
      iVar1 = ___cxa_guard_acquire(&DAT_10184e1b8);
      puVar5 = &DAT_10184e1a0;
      if (iVar1 != 0) {
        DAT_10184e1a0 = 0;
        DAT_10184e1a8 = 0;
        DAT_10184e1b0 = 0;
        ___cxa_guard_release(&DAT_10184e1b8);
        puVar5 = &DAT_10184e1a0;
      }
    }
    else {
      puVar5 = &DAT_10184e1a0;
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + 0x18);
  }
  return puVar5;
}




void FUN_1000e88b4(string *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  undefined1 *local_80;
  size_t local_78;
  byte local_69;
  undefined8 ****local_68;
  size_t local_60;
  undefined8 local_58;
  
  iVar1 = FUN_1004d2638(param_2,"build://",8);
  if (iVar1 == 0) {
    FUN_10001549c(param_1,param_2);
    return;
  }
  FUN_10001549c(&local_80,"build://");
  local_68 = (undefined8 *****)0x0;
  local_60 = 0;
  local_58 = 0;
  if ((char)local_69 < '\0') {
    sVar2 = _strlen(param_2);
    uVar4 = local_78;
    ppuVar5 = (undefined1 **)local_80;
  }
  else {
    uVar4 = (ulong)local_69;
    sVar2 = _strlen(param_2);
    ppuVar5 = &local_80;
  }
  uVar6 = uVar4 + sVar2;
  if (uVar6 < 0xfffffffffffffff0) {
    if (uVar6 < 0x17) {
      pppppuVar3 = &local_68;
      local_58 = CONCAT17((char)uVar4,(undefined7)local_58);
    }
    else {
      uVar6 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pppppuVar3 = operator_new(uVar6);
      local_58 = uVar6 | 0x8000000000000000;
      local_68 = pppppuVar3;
      local_60 = uVar4;
    }
    if (uVar4 != 0) {
      _memcpy(pppppuVar3,ppuVar5,uVar4);
    }
    *(undefined1 *)((long)pppppuVar3 + uVar4) = 0;
    std::string::append((char *)&local_68,(ulong)param_2);
    std::string::string(param_1,(string *)&local_68);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    if ((char)local_69 < '\0') {
      operator_delete(local_80);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000e8bf8();
}




void FUN_1000e8a14(string *param_1,undefined8 *param_2)

{
  int iVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  iVar1 = std::string::compare((ulong)param_2,0,(char *)0x8);
  if (iVar1 != 0) {
    FUN_10001549c(local_60,"build://");
    FUN_1000e8b18(local_48,local_60,param_2);
    std::string::string(param_1,(string *)local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (-1 < local_49) {
      return;
    }
    operator_delete(local_60[0]);
    return;
  }
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar3 = param_2[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1000e8bf8();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar3 < 0x17) {
    param_1[0x17] = SUB81(uVar3,0);
    psVar2 = param_1;
    if (uVar3 == 0) goto LAB_1000e8afc;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    psVar2 = operator_new(uVar4);
    *(ulong *)(param_1 + 8) = uVar3;
    *(ulong *)(param_1 + 0x10) = uVar4 | 0x8000000000000000;
    *(string **)param_1 = psVar2;
  }
  _memcpy(psVar2,param_2,uVar3);
  param_1 = psVar2;
LAB_1000e8afc:
  param_1[uVar3] = (string)0x0;
  return;
}




void FUN_1000e8b18(char *param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  size_t sVar4;
  char *pcVar5;
  ulong uVar6;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  bVar3 = *(byte *)((long)param_3 + 0x17);
  uVar6 = param_3[1];
  if (-1 < (char)bVar3) {
    uVar6 = (ulong)bVar3;
  }
  puVar1 = (void *)*param_2;
  sVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
    sVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar6 = uVar6 + sVar4;
  if (uVar6 < 0xfffffffffffffff0) {
    if (uVar6 < 0x17) {
      param_1[0x17] = (char)sVar4;
      pcVar5 = param_1;
    }
    else {
      uVar6 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pcVar5 = operator_new(uVar6);
      *(size_t *)(param_1 + 8) = sVar4;
      *(ulong *)(param_1 + 0x10) = uVar6 | 0x8000000000000000;
      *(char **)param_1 = pcVar5;
    }
    if (sVar4 != 0) {
      _memcpy(pcVar5,puVar1,sVar4);
    }
    pcVar5[sVar4] = '\0';
    puVar2 = (ulong *)*param_3;
    if (-1 < (char)bVar3) {
      puVar2 = param_3;
    }
    std::string::append(param_1,(ulong)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000e8bf8();
}




void FUN_1000e8bf8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




float FUN_1000e8c04(float *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_1000320fc();
  FUN_100033428();
  lVar1 = FUN_10002e584();
  fVar3 = 0.017453292;
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar2 = (float)___sincosf_stret(*(float *)(lVar1 + 4) * 0.017453292);
  return fVar3 * fVar4 - fVar5 * fVar2;
}




float FUN_1000e8c68(undefined1 param_1 [16],float param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)___sincosf_stret();
  return *param_3 * param_2 - param_3[2] * fVar1;
}




void FUN_1000e8ca8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  FUN_10034ee90();
  uVar1 = FUN_100345d90();
  FUN_10045c734(auStack_48,uVar1);
  lVar2 = FUN_10048fe94(param_1,0x40001,auStack_48);
  if ((lVar2 == 0) && (lVar2 = FUN_10048fe94(param_1,0x40000,auStack_48), lVar2 == 0)) {
    FUN_10048fd44(param_1,0x8000000,0);
  }
  return;
}




bool FUN_1000e8d1c(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  
  FUN_1010d0304(-param_1,&local_30,&DAT_1013cd830);
  fVar1 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = local_30 * param_2[3] + fVar1 * fStack_2c + fVar3 * local_28;
  fVar2 = ABS(fVar4);
  if (1e-06 <= fVar2) {
    fVar6 = param_2[1];
    fVar5 = param_2[2];
    fVar4 = -(*param_2 * local_30 + fStack_2c * fVar6 + local_28 * fVar5 + local_24) / fVar4;
    *param_3 = *param_2 + param_2[3] * fVar4;
    param_3[1] = fVar6 + fVar1 * fVar4;
    param_3[2] = fVar5 + fVar3 * fVar4;
  }
  return 1e-06 <= fVar2;
}




undefined8 FUN_1000e8dc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  float local_38;
  
  iVar1 = FUN_1000e8d1c(0,param_1,&local_40);
  if (iVar1 != 0) {
    local_50 = NEON_fmov(0x40f00000,4);
    local_48 = 0x40f00000;
    local_54 = 0.0;
    iVar1 = FUN_10054e07c(param_2,&local_40,&local_54,0,&local_50);
    if (iVar1 != 0) {
      FUN_1000320fc();
      FUN_100033428();
      puVar2 = (undefined8 *)FUN_10002e5ac();
      fVar3 = (float)*puVar2;
      fVar4 = (float)((ulong)*puVar2 >> 0x20);
      fVar5 = -(*(float *)(puVar2 + 1) * local_54 * 0.0) -
              (local_54 * fVar4 * 1.0 + local_54 * fVar3 * 0.0);
      local_60 = CONCAT44((float)((ulong)local_40 >> 0x20) - fVar4 * fVar5,
                          (float)local_40 - fVar3 * fVar5);
      local_58 = local_38 - *(float *)(puVar2 + 1) * fVar5;
      local_40 = local_60;
      local_38 = local_58;
      iVar1 = FUN_10054e07c(param_2,&local_40,(ulong)&local_40 | 4,&local_60,&local_50);
      if (iVar1 != 0) {
        *param_3 = local_60;
        *(float *)(param_3 + 1) = local_58;
        return 1;
      }
    }
  }
  *(undefined4 *)(param_3 + 1) = 0;
  *param_3 = 0;
  return 0;
}




void FUN_1000e8ef4(undefined8 param_1)

{
  if (DAT_101dc6918 == 0) {
    FUN_1010a1958(&DAT_101dc6918,1,DAT_10184dac8,0);
  }
  FUN_100470134(DAT_101dc6918 + 0x88,param_1);
  return;
}




void FUN_1000e8f48(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  float local_28;
  
  local_40 = *param_2;
  local_38 = 0.0;
  FUN_10011a108(&local_30,&local_40,1);
  local_50 = *param_2;
  local_48 = 0x3f800000;
  FUN_10011a108(&local_40,&local_50,1);
  fVar1 = (float)local_40 - (float)local_30;
  fVar2 = (float)((ulong)local_40 >> 0x20) - (float)((ulong)local_30 >> 0x20);
  local_38 = local_38 - local_28;
  *param_1 = local_30;
  *(float *)(param_1 + 1) = local_28;
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + local_38 * local_38);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar2 / fVar3,fVar1 / fVar3);
  *(float *)((long)param_1 + 0x14) = local_38 / fVar3;
  return;
}




void FUN_1000e8ff8(void)

{
  if ((DAT_10184dad0 & 1) == 0) {
    DAT_10184dac8 = DAT_101872e38;
    DAT_10184dad0 = 1;
  }
  return;
}




void FUN_1000e9024(uint param_1,undefined8 param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_df8;
  ushort local_df0;
  undefined8 local_de8;
  ushort local_de0 [4];
  undefined8 local_dd8;
  undefined2 local_dd0;
  undefined8 local_dc8;
  undefined2 local_dc0;
  undefined8 local_db8;
  undefined2 local_db0;
  undefined8 local_da8;
  undefined2 local_da0;
  undefined8 local_d98;
  undefined2 local_d90;
  undefined8 local_d88;
  undefined2 local_d80;
  undefined8 local_d78;
  undefined2 local_d70;
  undefined8 local_d68;
  undefined2 local_d60;
  undefined8 local_d58;
  undefined2 local_d50;
  undefined8 local_d48;
  undefined2 local_d40;
  undefined8 local_d38;
  undefined2 local_d30;
  undefined8 local_d28;
  undefined2 local_d20;
  undefined8 local_d18;
  undefined2 local_d10;
  undefined8 local_d08;
  undefined2 local_d00;
  undefined8 local_cf8;
  undefined2 local_cf0;
  undefined8 local_ce8;
  undefined2 local_ce0;
  undefined8 local_cd8;
  undefined2 local_cd0;
  undefined8 local_cc8;
  undefined2 local_cc0;
  undefined8 local_cb8;
  undefined2 local_cb0;
  undefined8 local_ca8;
  undefined2 local_ca0;
  undefined8 local_c98;
  undefined2 local_c90;
  undefined8 local_c88;
  undefined2 local_c80;
  undefined8 local_c78;
  undefined2 local_c70;
  undefined8 local_c68;
  undefined2 local_c60;
  undefined8 local_c58;
  undefined2 local_c50;
  undefined8 local_c48;
  undefined2 local_c40;
  undefined8 local_c38;
  undefined2 local_c30;
  undefined8 local_c28;
  undefined2 local_c20;
  undefined8 local_c18;
  undefined2 local_c10;
  undefined8 local_c08;
  undefined2 local_c00;
  undefined8 local_bf8;
  undefined2 local_bf0;
  undefined8 local_be8;
  undefined2 local_be0;
  undefined8 local_bd8;
  undefined2 local_bd0;
  undefined8 local_bc8;
  undefined2 local_bc0;
  undefined8 local_bb8;
  undefined2 local_bb0;
  undefined8 local_ba8;
  undefined2 local_ba0;
  undefined8 local_b98;
  undefined2 local_b90;
  undefined8 local_b88;
  undefined2 local_b80;
  undefined8 local_b78;
  undefined2 local_b70;
  undefined8 local_b68;
  undefined2 local_b60;
  undefined8 local_b58;
  undefined2 local_b50;
  undefined8 local_b48;
  undefined2 local_b40;
  undefined8 local_b38;
  undefined2 local_b30;
  undefined8 local_b28;
  undefined2 local_b20;
  undefined8 local_b18;
  undefined2 local_b10;
  undefined8 local_b08;
  undefined2 local_b00;
  undefined8 local_af8;
  undefined2 local_af0;
  undefined8 local_ae8;
  undefined2 local_ae0;
  undefined8 local_ad8;
  undefined2 local_ad0;
  undefined8 local_ac8;
  undefined2 local_ac0;
  undefined8 local_ab8;
  undefined2 local_ab0;
  undefined8 local_aa8;
  undefined2 local_aa0;
  undefined8 local_a98;
  undefined2 local_a90;
  undefined8 local_a88;
  undefined2 local_a80;
  undefined8 local_a78;
  undefined2 local_a70;
  undefined8 local_a68;
  undefined2 local_a60;
  undefined8 local_a58;
  undefined2 local_a50;
  undefined8 local_a48;
  undefined2 local_a40;
  undefined8 local_a38;
  undefined2 local_a30;
  undefined8 local_a28;
  undefined2 local_a20;
  undefined8 local_a18;
  undefined2 local_a10;
  undefined8 local_a08;
  undefined2 local_a00;
  undefined8 local_9f8;
  undefined2 local_9f0;
  undefined8 local_9e8;
  undefined2 local_9e0;
  undefined8 local_9d8;
  undefined2 local_9d0;
  undefined8 local_9c8;
  undefined2 local_9c0;
  undefined8 local_9b8;
  undefined2 local_9b0;
  undefined8 local_9a8;
  undefined2 local_9a0;
  undefined8 local_998;
  undefined2 local_990;
  undefined8 local_988;
  undefined2 local_980;
  undefined8 local_978;
  undefined2 local_970;
  undefined8 local_968;
  undefined2 local_960;
  undefined8 local_958;
  undefined2 local_950;
  undefined8 local_948;
  undefined2 local_940;
  undefined8 local_938;
  undefined2 local_930;
  undefined8 local_928;
  undefined2 local_920;
  undefined8 local_918;
  undefined2 local_910;
  undefined8 local_908;
  undefined2 local_900;
  undefined8 local_8f8;
  undefined2 local_8f0;
  undefined8 local_8e8;
  undefined2 local_8e0;
  undefined8 local_8d8;
  undefined2 local_8d0;
  undefined8 local_8c8;
  undefined2 local_8c0;
  undefined8 local_8b8;
  undefined2 local_8b0;
  undefined8 local_8a8;
  undefined2 local_8a0;
  undefined8 local_898;
  undefined2 local_890;
  undefined8 local_888;
  undefined2 local_880;
  undefined8 local_878;
  undefined2 local_870;
  undefined8 local_868;
  undefined2 local_860;
  undefined8 local_858;
  undefined2 local_850;
  undefined8 local_848;
  undefined2 local_840;
  undefined8 local_838;
  undefined2 local_830;
  undefined8 local_828;
  undefined2 local_820;
  undefined8 local_818;
  undefined2 local_810;
  undefined8 local_808;
  undefined2 local_800;
  undefined8 local_7f8;
  undefined2 local_7f0;
  undefined8 local_7e8;
  undefined2 local_7e0;
  undefined8 local_7d8;
  undefined2 local_7d0;
  undefined8 local_7c8;
  undefined2 local_7c0;
  undefined8 local_7b8;
  undefined2 local_7b0;
  undefined8 local_7a8;
  undefined2 local_7a0;
  undefined8 local_798;
  undefined2 local_790;
  undefined8 local_788;
  undefined2 local_780;
  undefined8 local_778;
  undefined2 local_770;
  undefined8 local_768;
  undefined2 local_760;
  undefined8 local_758;
  undefined2 local_750;
  undefined8 local_748;
  undefined2 local_740;
  undefined8 local_738;
  undefined2 local_730;
  undefined8 local_728;
  undefined2 local_720;
  undefined8 local_718;
  undefined2 local_710;
  undefined8 local_708;
  undefined2 local_700;
  undefined8 local_6f8;
  undefined2 local_6f0;
  undefined8 local_6e8;
  undefined2 local_6e0;
  undefined8 local_6d8;
  undefined2 local_6d0;
  undefined8 local_6c8;
  undefined2 local_6c0;
  undefined8 local_6b8;
  undefined2 local_6b0;
  undefined8 local_6a8;
  undefined2 local_6a0;
  undefined8 local_698;
  undefined2 local_690;
  undefined8 local_688;
  undefined2 local_680;
  undefined8 local_678;
  undefined2 local_670;
  undefined8 local_668;
  undefined2 local_660;
  undefined8 local_658;
  undefined2 local_650;
  undefined8 local_648;
  undefined2 local_640;
  undefined8 local_638;
  undefined2 local_630;
  undefined8 local_628;
  undefined2 local_620;
  undefined8 local_618;
  undefined2 local_610;
  undefined8 local_608;
  undefined2 local_600;
  undefined8 local_5f8;
  undefined2 local_5f0;
  undefined8 local_5e8;
  undefined2 local_5e0;
  undefined8 local_5d8;
  undefined2 local_5d0;
  undefined8 local_5c8;
  undefined2 local_5c0;
  undefined8 local_5b8;
  undefined2 local_5b0;
  undefined8 local_5a8;
  undefined2 local_5a0;
  undefined8 local_598;
  undefined2 local_590;
  undefined8 local_588;
  undefined2 local_580;
  undefined8 local_578;
  undefined2 local_570;
  undefined8 local_568;
  undefined2 local_560;
  undefined8 local_558;
  undefined2 local_550;
  undefined8 local_548;
  undefined2 local_540;
  undefined8 local_538;
  undefined2 local_530;
  undefined8 local_528;
  undefined2 local_520;
  undefined8 local_518;
  undefined2 local_510;
  undefined8 local_508;
  undefined2 local_500;
  undefined8 local_4f8;
  undefined2 local_4f0;
  undefined8 local_4e8;
  undefined2 local_4e0;
  undefined8 local_4d8;
  undefined2 local_4d0;
  undefined8 local_4c8;
  undefined2 local_4c0;
  undefined8 local_4b8;
  undefined2 local_4b0;
  undefined8 local_4a8;
  undefined2 local_4a0;
  undefined8 local_498;
  undefined2 local_490;
  undefined8 local_488;
  undefined2 local_480;
  undefined8 local_478;
  undefined2 local_470;
  undefined8 local_468;
  undefined2 local_460;
  undefined8 local_458;
  undefined2 local_450;
  undefined8 local_448;
  undefined2 local_440;
  undefined8 local_438;
  undefined2 local_430;
  undefined8 local_428;
  undefined2 local_420;
  undefined8 local_418;
  undefined2 local_410;
  undefined8 local_408;
  undefined2 local_400;
  undefined8 local_3f8;
  undefined2 local_3f0;
  undefined8 local_3e8;
  undefined2 local_3e0;
  undefined8 local_3d8;
  undefined2 local_3d0;
  undefined8 local_3c8;
  undefined2 local_3c0;
  undefined8 local_3b8;
  undefined2 local_3b0;
  undefined8 local_3a8;
  undefined2 local_3a0;
  undefined8 local_398;
  undefined2 local_390;
  undefined8 local_388;
  undefined2 local_380;
  undefined8 local_378;
  undefined2 local_370;
  undefined8 local_368;
  undefined2 local_360;
  undefined8 local_358;
  undefined2 local_350;
  undefined8 local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined2 local_330;
  undefined8 local_328;
  undefined2 local_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined8 local_308;
  undefined2 local_300;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined2 local_2a0;
  undefined8 local_298;
  undefined2 local_290;
  undefined8 local_288;
  undefined2 local_280;
  undefined8 local_278;
  undefined2 local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_248;
  undefined2 local_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined8 local_218;
  undefined2 local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 *local_68;
  undefined2 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_df8 = FUN_1004e0150("LOADING_SCREEN_TIP_00",0);
  local_df0 = 6;
  local_de8 = FUN_1004e0150("LOADING_SCREEN_TIP_01",0);
  local_de0[0] = 6;
  local_dd8 = FUN_1004e0150("LOADING_SCREEN_TIP_02",0);
  local_dd0 = 6;
  local_dc8 = FUN_1004e0150("LOADING_SCREEN_TIP_03",0);
  local_dc0 = 6;
  local_db8 = FUN_1004e0150("LOADING_SCREEN_TIP_04",0);
  local_db0 = 6;
  local_da8 = FUN_1004e0150("LOADING_SCREEN_TIP_05",0);
  local_da0 = 6;
  local_d98 = FUN_1004e0150("LOADING_SCREEN_TIP_06",0);
  local_d90 = 0x44;
  local_d88 = FUN_1004e0150("LOADING_SCREEN_TIP_07",0);
  local_d80 = 0x7f;
  local_d78 = FUN_1004e0150("LOADING_SCREEN_TIP_08",0);
  local_d70 = 4;
  local_d68 = FUN_1004e0150("LOADING_SCREEN_TIP_09",0);
  local_d60 = 4;
  local_d58 = FUN_1004e0150("LOADING_SCREEN_TIP_10",0);
  local_d50 = 6;
  local_d48 = FUN_1004e0150("LOADING_SCREEN_TIP_11",0);
  local_d40 = 6;
  local_d38 = FUN_1004e0150("LOADING_SCREEN_TIP_12",0);
  local_d30 = 6;
  local_d28 = FUN_1004e0150("LOADING_SCREEN_TIP_13",0);
  local_d20 = 6;
  local_d18 = FUN_1004e0150("LOADING_SCREEN_TIP_14",0);
  local_d10 = 6;
  local_d08 = FUN_1004e0150("LOADING_SCREEN_TIP_15",0);
  local_d00 = 6;
  local_cf8 = FUN_1004e0150("LOADING_SCREEN_TIP_16",0);
  local_cf0 = 6;
  local_ce8 = FUN_1004e0150("LOADING_SCREEN_TIP_17",0);
  local_ce0 = 6;
  local_cd8 = FUN_1004e0150("LOADING_SCREEN_TIP_18",0);
  local_cd0 = 6;
  local_cc8 = FUN_1004e0150("LOADING_SCREEN_TIP_19",0);
  local_cc0 = 4;
  local_cb8 = FUN_1004e0150("LOADING_SCREEN_TIP_20",0);
  local_cb0 = 6;
  local_ca8 = FUN_1004e0150("LOADING_SCREEN_TIP_21",0);
  local_ca0 = 4;
  local_c98 = FUN_1004e0150("LOADING_SCREEN_TIP_22",0);
  local_c90 = 6;
  local_c88 = FUN_1004e0150("LOADING_SCREEN_TIP_23",0);
  local_c80 = 6;
  local_c78 = FUN_1004e0150("LOADING_SCREEN_TIP_24",0);
  local_c70 = 6;
  local_c68 = FUN_1004e0150("LOADING_SCREEN_TIP_25",0);
  local_c60 = 4;
  local_c58 = FUN_1004e0150("LOADING_SCREEN_TIP_26",0);
  local_c50 = 6;
  local_c48 = FUN_1004e0150("LOADING_SCREEN_TIP_27",0);
  local_c40 = 6;
  local_c38 = FUN_1004e0150("LOADING_SCREEN_TIP_28",0);
  local_c30 = 6;
  local_c28 = FUN_1004e0150("LOADING_SCREEN_TIP_29",0);
  local_c20 = 6;
  local_c18 = FUN_1004e0150("LOADING_SCREEN_TIP_30",0);
  local_c10 = 6;
  local_c08 = FUN_1004e0150("LOADING_SCREEN_TIP_31",0);
  local_c00 = 6;
  local_bf8 = FUN_1004e0150("LOADING_SCREEN_TIP_32",0);
  local_bf0 = 4;
  local_be8 = FUN_1004e0150("LOADING_SCREEN_TIP_33",0);
  local_be0 = 6;
  local_bd8 = FUN_1004e0150("LOADING_SCREEN_TIP_34",0);
  local_bd0 = 4;
  local_bc8 = FUN_1004e0150("LOADING_SCREEN_TIP_35",0);
  local_bc0 = 4;
  local_bb8 = FUN_1004e0150("LOADING_SCREEN_TIP_36",0);
  local_bb0 = 6;
  local_ba8 = FUN_1004e0150("LOADING_SCREEN_TIP_37",0);
  local_ba0 = 0x44;
  local_b98 = FUN_1004e0150("LOADING_SCREEN_TIP_38",0);
  local_b90 = 6;
  local_b88 = FUN_1004e0150("LOADING_SCREEN_TIP_39",0);
  local_b80 = 6;
  local_b78 = FUN_1004e0150("LOADING_SCREEN_TIP_40",0);
  local_b70 = 6;
  local_b68 = FUN_1004e0150("LOADING_SCREEN_TIP_41",0);
  local_b60 = 4;
  local_b58 = FUN_1004e0150("LOADING_SCREEN_TIP_42",0);
  local_b50 = 6;
  local_b48 = FUN_1004e0150("LOADING_SCREEN_TIP_43",0);
  local_b40 = 6;
  local_b38 = FUN_1004e0150("LOADING_SCREEN_TIP_44",0);
  local_b30 = 4;
  local_b28 = FUN_1004e0150("LOADING_SCREEN_TIP_45",0);
  local_b20 = 6;
  local_b18 = FUN_1004e0150("LOADING_SCREEN_TIP_46",0);
  local_b10 = 6;
  local_b08 = FUN_1004e0150("LOADING_SCREEN_TIP_47",0);
  local_b00 = 6;
  local_af8 = FUN_1004e0150("LOADING_SCREEN_TIP_48",0);
  local_af0 = 4;
  local_ae8 = FUN_1004e0150("LOADING_SCREEN_TIP_49",0);
  local_ae0 = 4;
  local_ad8 = FUN_1004e0150("LOADING_SCREEN_TIP_50",0);
  local_ad0 = 6;
  local_ac8 = FUN_1004e0150("LOADING_SCREEN_TIP_51",0);
  local_ac0 = 4;
  local_ab8 = FUN_1004e0150("LOADING_SCREEN_TIP_52",0);
  local_ab0 = 0x44;
  local_aa8 = FUN_1004e0150("LOADING_SCREEN_TIP_53",0);
  local_aa0 = 6;
  local_a98 = FUN_1004e0150("LOADING_SCREEN_TIP_54",0);
  local_a90 = 6;
  local_a88 = FUN_1004e0150("LOADING_SCREEN_TIP_55",0);
  local_a80 = 0x46;
  local_a78 = FUN_1004e0150("LOADING_SCREEN_TIP_56",0);
  local_a70 = 6;
  local_a68 = FUN_1004e0150("LOADING_SCREEN_TIP_57",0);
  local_a60 = 6;
  local_a58 = FUN_1004e0150("LOADING_SCREEN_TIP_58",0);
  local_a50 = 6;
  local_a48 = FUN_1004e0150("LOADING_SCREEN_TIP_59",0);
  local_a40 = 6;
  local_a38 = FUN_1004e0150("LOADING_SCREEN_TIP_60",0);
  local_a30 = 6;
  local_a28 = FUN_1004e0150("LOADING_SCREEN_TIP_61",0);
  local_a20 = 6;
  local_a18 = FUN_1004e0150("LOADING_SCREEN_TIP_62",0);
  local_a10 = 6;
  local_a08 = FUN_1004e0150("LOADING_SCREEN_TIP_63",0);
  local_a00 = 6;
  local_9f8 = FUN_1004e0150("LOADING_SCREEN_TIP_64",0);
  local_9f0 = 0;
  local_9e8 = FUN_1004e0150("LOADING_SCREEN_TIP_65",0);
  local_9e0 = 0;
  local_9d8 = FUN_1004e0150("LOADING_SCREEN_TIP_66",0);
  local_9d0 = 6;
  local_9c8 = FUN_1004e0150("LOADING_SCREEN_TIP_67",0);
  local_9c0 = 6;
  local_9b8 = FUN_1004e0150("LOADING_SCREEN_TIP_68",0);
  local_9b0 = 6;
  local_9a8 = FUN_1004e0150("LOADING_SCREEN_TIP_69",0);
  local_9a0 = 6;
  local_998 = FUN_1004e0150("LOADING_SCREEN_TIP_70",0);
  local_990 = 6;
  local_988 = FUN_1004e0150("LOADING_SCREEN_TIP_71",0);
  local_980 = 6;
  local_978 = FUN_1004e0150("LOADING_SCREEN_TIP_72",0);
  local_970 = 6;
  local_968 = FUN_1004e0150("LOADING_SCREEN_TIP_74",0);
  local_960 = 6;
  local_958 = FUN_1004e0150("LOADING_SCREEN_TIP_75",0);
  local_950 = 6;
  local_948 = FUN_1004e0150("LOADING_SCREEN_TIP_76",0);
  local_940 = 6;
  local_938 = FUN_1004e0150("LOADING_SCREEN_TIP_77",0);
  local_930 = 6;
  local_928 = FUN_1004e0150("LOADING_SCREEN_TIP_78",0);
  local_920 = 6;
  local_918 = FUN_1004e0150("LOADING_SCREEN_TIP_79",0);
  local_910 = 1;
  local_908 = FUN_1004e0150("LOADING_SCREEN_TIP_80",0);
  local_900 = 1;
  local_8f8 = FUN_1004e0150("LOADING_SCREEN_TIP_81",0);
  local_8f0 = 1;
  local_8e8 = FUN_1004e0150("LOADING_SCREEN_TIP_82",0);
  local_8e0 = 1;
  local_8d8 = FUN_1004e0150("LOADING_SCREEN_TIP_83",0);
  local_8d0 = 1;
  local_8c8 = FUN_1004e0150("LOADING_SCREEN_TIP_84",0);
  local_8c0 = 1;
  local_8b8 = FUN_1004e0150("LOADING_SCREEN_TIP_85",0);
  local_8b0 = 1;
  local_8a8 = FUN_1004e0150("LOADING_SCREEN_TIP_86",0);
  local_8a0 = 1;
  local_898 = FUN_1004e0150("LOADING_SCREEN_TIP_87",0);
  local_890 = 0x16;
  local_888 = FUN_1004e0150("LOADING_SCREEN_TIP_88",0);
  local_880 = 0x7f;
  local_878 = FUN_1004e0150("LOADING_SCREEN_TIP_89",0);
  local_870 = 0x7f;
  local_868 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_90",0);
  local_860 = 0x7f;
  local_858 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_91",0);
  local_850 = 0x7f;
  local_848 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_92",0);
  local_840 = 0x7f;
  local_838 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_93",0);
  local_830 = 0x7f;
  local_828 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_94",0);
  local_820 = 0x7f;
  local_818 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_95",0);
  local_810 = 0x7f;
  local_808 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_96",0);
  local_800 = 0x7f;
  local_7f8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_97",0);
  local_7f0 = 0x7f;
  local_7e8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_98",0);
  local_7e0 = 0x7f;
  local_7d8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_99",0);
  local_7d0 = 0x7f;
  local_7c8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_100",0);
  local_7c0 = 0x7f;
  local_7b8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_101",0);
  local_7b0 = 0x7f;
  local_7a8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_102",0);
  local_7a0 = 0x7f;
  local_798 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_103",0);
  local_790 = 0x7f;
  local_788 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_104",0);
  local_780 = 0x7f;
  local_778 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_105",0);
  local_770 = 0x7f;
  local_768 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_106",0);
  local_760 = 0x7f;
  local_758 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_107",0);
  local_750 = 0x7f;
  local_748 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_108",0);
  local_740 = 0x7f;
  local_738 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_109",0);
  local_730 = 0x7f;
  local_728 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_110",0);
  local_720 = 0x7f;
  local_718 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_111",0);
  local_710 = 0x7f;
  local_708 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_112",0);
  local_700 = 0x7f;
  local_6f8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_113",0);
  local_6f0 = 0x7f;
  local_6e8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_114",0);
  local_6e0 = 0x7f;
  local_6d8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_115",0);
  local_6d0 = 0x7f;
  local_6c8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_116",0);
  local_6c0 = 0x7f;
  local_6b8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_117",0);
  local_6b0 = 0x7f;
  local_6a8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_118",0);
  local_6a0 = 0x7f;
  local_698 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_119",0);
  local_690 = 0x7f;
  local_688 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_120",0);
  local_680 = 0x7f;
  local_678 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_121",0);
  local_670 = 0x7f;
  local_668 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_122",0);
  local_660 = 0x7f;
  local_658 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_123",0);
  local_650 = 0x7f;
  local_648 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_124",0);
  local_640 = 0x7f;
  local_638 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_125",0);
  local_630 = 0x7f;
  local_628 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_126",0);
  local_620 = 0x7f;
  local_618 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_127",0);
  local_610 = 0x7f;
  local_608 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_128",0);
  local_600 = 0x7f;
  local_5f8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_129",0);
  local_5f0 = 0x7f;
  local_5e8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_130",0);
  local_5e0 = 0x7f;
  local_5d8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_131",0);
  local_5d0 = 0x7f;
  local_5c8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_132",0);
  local_5c0 = 0x7f;
  local_5b8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_133",0);
  local_5b0 = 0x7f;
  local_5a8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_134",0);
  local_5a0 = 0x7f;
  local_598 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_135",0);
  local_590 = 0x7f;
  local_588 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_136",0);
  local_580 = 0x7f;
  local_578 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_137",0);
  local_570 = 0x7f;
  local_568 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_138",0);
  local_560 = 0x7f;
  local_558 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_139",0);
  local_550 = 0x7f;
  local_548 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_140",0);
  local_540 = 0x7f;
  local_538 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_141",0);
  local_530 = 0x7f;
  local_528 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_142",0);
  local_520 = 0x7f;
  local_518 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_143",0);
  local_510 = 0x7f;
  local_508 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_144",0);
  local_500 = 0x7f;
  local_4f8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_145",0);
  local_4f0 = 0x7f;
  local_4e8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_146",0);
  local_4e0 = 0x7f;
  local_4d8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_147",0);
  local_4d0 = 0x7f;
  local_4c8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_148",0);
  local_4c0 = 0x7f;
  local_4b8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_149",0);
  local_4b0 = 0x7f;
  local_4a8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_150",0);
  local_4a0 = 0x7f;
  local_498 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_151",0);
  local_490 = 0x7f;
  local_488 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_152",0);
  local_480 = 0x7f;
  local_478 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_153",0);
  local_470 = 0x7f;
  local_468 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_154",0);
  local_460 = 0x7f;
  local_458 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_155",0);
  local_450 = 0x7f;
  local_448 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_156",0);
  local_440 = 0x7f;
  local_438 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_157",0);
  local_430 = 0x7f;
  local_428 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_158",0);
  local_420 = 0x7f;
  local_418 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_159",0);
  local_410 = 0x7f;
  local_408 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_160",0);
  local_400 = 0x7f;
  local_3f8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_161",0);
  local_3f0 = 0x7f;
  local_3e8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_162",0);
  local_3e0 = 0x7f;
  local_3d8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_163",0);
  local_3d0 = 0x7f;
  local_3c8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_164",0);
  local_3c0 = 0x7f;
  local_3b8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_165",0);
  local_3b0 = 0x7f;
  local_3a8 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_166",0);
  local_3a0 = 0x7f;
  local_398 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_167",0);
  local_390 = 0x7f;
  local_388 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_168",0);
  local_380 = 0x7f;
  local_378 = FUN_1004e0150("LORE_LOADING_SCREEN_TIP_169",0);
  local_370 = 0x7f;
  local_368 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_170",0);
  local_360 = 0x7f;
  local_358 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_171",0);
  local_350 = 0x7f;
  local_348 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_172",0);
  local_340 = 0x7f;
  local_338 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_173",0);
  local_330 = 0x7f;
  local_328 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_174",0);
  local_320 = 0x7f;
  local_318 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_175",0);
  local_310 = 0x7f;
  local_308 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_176",0);
  local_300 = 0x7f;
  local_2f8 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_177",0);
  local_2f0 = 0x7f;
  local_2e8 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_178",0);
  local_2e0 = 0x7f;
  local_2d8 = FUN_1004e0150("COMMUNITY_LOADING_SCREEN_TIP_179",0);
  local_2d0 = 0x7f;
  local_2c8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_1",0);
  local_2c0 = 0x40;
  local_2b8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_2",0);
  local_2b0 = 0x40;
  local_2a8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_3",0);
  local_2a0 = 0x40;
  local_298 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_4",0);
  local_290 = 0x40;
  local_288 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_5",0);
  local_280 = 0x40;
  local_278 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_6",0);
  local_270 = 0x40;
  local_268 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_7",0);
  local_260 = 0x40;
  local_258 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_8",0);
  local_250 = 0x40;
  local_248 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_9",0);
  local_240 = 0x40;
  local_238 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_10",0);
  local_230 = 0x40;
  local_228 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_11",0);
  local_220 = 0x40;
  local_218 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_12",0);
  local_210 = 0x40;
  local_208 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_13",0);
  local_200 = 0x40;
  local_1f8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_14",0);
  local_1f0 = 0x40;
  local_1e8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_15",0);
  local_1e0 = 0x40;
  local_1d8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_16",0);
  local_1d0 = 0x40;
  local_1c8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_17",0);
  local_1c0 = 0x40;
  local_1b8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_18",0);
  local_1b0 = 0x40;
  local_1a8 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_19",0);
  local_1a0 = 0x40;
  local_198 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_20",0);
  local_190 = 0x40;
  local_188 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_21",0);
  local_180 = 0x40;
  local_178 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_22",0);
  local_170 = 0x40;
  local_168 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_23",0);
  local_160 = 0x40;
  local_158 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_24",0);
  local_150 = 0x40;
  local_148 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_24",0);
  local_140 = 0x40;
  local_138 = FUN_1004e0150("5V5_LOADING_SCREEN_TIP_25",0);
  local_130 = 0x40;
  local_128 = FUN_1004e0150("LOADING_SCREEN_TIP_88",0);
  local_120 = 0;
  local_118 = FUN_1004e0150("LOADING_SCREEN_TIP_89",0);
  local_110 = 0;
  local_108 = FUN_1004e0150("LOADING_SCREEN_TIP_90",0);
  local_100 = 0;
  local_f8 = FUN_1004e0150("LOADING_SCREEN_TIP_91",0);
  local_f0 = 0;
  local_e8 = FUN_1004e0150("LOADING_SCREEN_TIP_92",0);
  local_e0 = 0;
  local_d8 = FUN_1004e0150("LOADING_SCREEN_TIP_93",0);
  local_d0 = 0;
  local_c8 = FUN_1004e0150("LOADING_SCREEN_TIP_94",0);
  local_c0 = 0;
  local_b8 = FUN_1004e0150("LOADING_SCREEN_TIP_95",0);
  local_b0 = 0;
  local_a8 = FUN_1004e0150("LOADING_SCREEN_TIP_96",0);
  local_a0 = 0;
  local_98 = FUN_1004e0150("LOADING_SCREEN_TIP_97",0);
  local_90 = 0;
  local_88 = FUN_1004e0150("LOADING_SCREEN_TIP_98",0);
  local_80 = 0;
  local_78 = FUN_1004e0150("LOADING_SCREEN_TIP_99",0);
  uVar2 = local_df0;
  uVar10 = 0;
  local_70 = 0;
  local_68 = &DAT_101d91650;
  local_60 = 0;
  if (param_1 < 0x34) {
    uVar10 = *(uint *)(&DAT_10114c040 + (long)(int)param_1 * 4);
  }
  uVar9 = (uint)local_df0;
  if (local_df0 != 0) {
    iVar11 = 0;
    puVar6 = local_de0;
    uVar7 = uVar9;
    do {
      if ((uVar7 & uVar10) != 0) {
        iVar11 = iVar11 + 1;
      }
      uVar7 = (uint)*puVar6;
      puVar6 = puVar6 + 8;
    } while (uVar7 != 0);
    if ((iVar11 != 0) && (iVar3 = _rand(), uVar2 != 0)) {
      iVar5 = 0;
      iVar1 = 0;
      if (iVar11 != 0) {
        iVar1 = iVar3 / iVar11;
      }
      puVar8 = &local_df8;
      do {
        if ((uVar9 & uVar10) != 0) {
          if (iVar5 == iVar3 - iVar1 * iVar11) {
            FUN_1000153b4(param_2,*puVar8);
            uVar4 = 1;
            goto LAB_1000ea568;
          }
          iVar5 = iVar5 + 1;
        }
        uVar9 = (uint)*(ushort *)(puVar8 + 3);
        puVar8 = puVar8 + 2;
      } while (uVar9 != 0);
    }
  }
  uVar4 = 0;
LAB_1000ea568:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_1000ea5b4(undefined8 param_1,int param_2)

{
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_74 = param_2;
  if (param_2 != 0xffff) {
    FUN_10034be60(&local_74);
    FUN_1004d2698(&local_70,"portrait_%s");
  }
  FUN_10001549c(param_1,&local_70);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000ea654(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_120;
  undefined4 uStack_11c;
  void *pvStack_118;
  undefined1 auStack_110 [8];
  void *local_108;
  undefined2 local_100;
  void *local_f8 [2];
  char local_e1;
  void *local_e0 [2];
  char local_c9;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8 [2];
  char local_a1;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined4 local_64;
  
  lVar1 = FUN_100341d58();
  if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0xb0) >> 8 & 1) != 0)) {
    plVar2 = (long *)(lVar1 + 0x78);
    if (*(char *)(lVar1 + 0x8f) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    lVar3 = FUN_10034bf64(plVar2);
    uVar6 = 0xffffffff;
    local_64 = 0xffffffff;
    thunk_FUN_1004e439c(auStack_78,&DAT_101d91650);
    lVar1 = FUN_100343694(lVar1);
    uVar5 = uVar6;
    switch(*(undefined4 *)(lVar1 + 0x18)) {
    case 0:
      local_64 = 0xff5a3c10;
      uVar6 = 0xffa4781e;
      uVar5 = 0xffa3781e;
      break;
    case 1:
      local_64 = 0xff330b03;
      uVar4 = FUN_1004e0150("MENU_TALENTS_TALENT_INFO_POPUP_TITLE_TIER_RARE",0);
      FUN_1000153b4(auStack_78,uVar4);
      uVar6 = 0xffa6654b;
      uVar5 = 0xffffd18a;
      break;
    case 2:
      local_64 = 0xff33031d;
      uVar4 = FUN_1004e0150("MENU_TALENTS_TALENT_INFO_POPUP_TITLE_TIER_EPIC",0);
      FUN_1000153b4(auStack_78,uVar4);
      uVar6 = 0xff93435b;
      uVar5 = 0xffff61f7;
      break;
    case 3:
      local_64 = 0xff032433;
      uVar4 = FUN_1004e0150("MENU_TALENTS_TALENT_INFO_POPUP_TITLE_TIER_LEGENDARY",0);
      FUN_1000153b4(auStack_78,uVar4);
      uVar6 = 0xff387f9c;
      uVar5 = 0xff5de1f2;
    }
    FUN_1004e3120(auStack_88,"[HERO_NAME] - [TALENT_TIER]");
    uVar4 = FUN_1004e0150(*(undefined8 *)(lVar3 + 0x28),0);
    thunk_FUN_1004e439c(auStack_98,uVar4);
    FUN_1004e3120(&local_120,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_88,0,&local_120,auStack_98);
    if (pvStack_118 != (void *)0x0) {
      operator_delete__(pvStack_118);
    }
    FUN_1004e3120(&local_120,"[TALENT_TIER]");
    FUN_1004e3bc4(auStack_88,0,&local_120,auStack_78);
    if (pvStack_118 != (void *)0x0) {
      operator_delete__(pvStack_118);
    }
    thunk_FUN_1001ad400(&local_120);
    FUN_1000153b4(auStack_110,auStack_88);
    local_100 = CONCAT11(local_100._1_1_,1);
    local_120 = param_2;
    uStack_11c = param_3;
    uStack_bc = param_5;
    FUN_1001ad494(&local_120,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&local_64);
    param_1[1] = pvStack_118;
    *param_1 = CONCAT44(uStack_11c,local_120);
    uStack_c4 = uVar6;
    uStack_c0 = uVar5;
    thunk_FUN_1004e439c(param_1 + 2,auStack_110);
    *(undefined2 *)(param_1 + 4) = local_100;
    FUN_10003330c(param_1 + 5,local_f8);
    FUN_10003330c(param_1 + 8,local_e0);
    param_1[0xc] = CONCAT44(uStack_bc,uStack_c0);
    param_1[0xb] = CONCAT44(uStack_c4,local_c8);
    FUN_10003330c(param_1 + 0xd,local_b8);
    param_1[0x10] = local_a0;
    if (local_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
    if (local_c9 < '\0') {
      operator_delete(local_e0[0]);
    }
    if (local_e1 < '\0') {
      operator_delete(local_f8[0]);
    }
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
    }
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
    }
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
    return;
  }
  thunk_FUN_1001ad400(param_1);
  return;
}




void FUN_1000ea998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [24];
  void *local_b0;
  void *local_a0;
  char local_89;
  void *local_88;
  char local_71;
  void *local_60;
  char local_49;
  
  lVar1 = FUN_100341d58();
  if (lVar1 != 0) {
    FUN_1000ea654(auStack_c8,param_1,param_2,param_3,param_4);
    uVar2 = FUN_1000eaa78("MENU_TALENT_INFO_POPUP",auStack_c8);
    FUN_1001ca684(uVar2,param_3);
    FUN_1001ca6d0(uVar2,param_5 ^ 1);
    uVar3 = FUN_100342adc(lVar1);
    FUN_1001ca6d8(uVar2,uVar3);
    if (local_49 < '\0') {
      operator_delete(local_60);
    }
    if (local_71 < '\0') {
      operator_delete(local_88);
    }
    if (local_89 < '\0') {
      operator_delete(local_a0);
    }
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
    }
  }
  return;
}




undefined8 FUN_1000eaa78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_1);
  std::string::operator=((string *)(param_2 + 0x68),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  operator_new(0x148);
  uVar1 = thunk_FUN_1001ca470();
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_1001ad7b8(DAT_101d23560,param_2);
  return *(undefined8 *)(param_2 + 0x80);
}




char * FUN_1000eaaec(void)

{
  return "MENU_TALENT_INFO_POPUP";
}




void FUN_1000eaaf8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [8];
  void *local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10034be08(param_2);
  if ((param_2 != 0) && (lVar1 = FUN_10034bf64(param_2), lVar1 != 0)) {
    uVar2 = FUN_1004e0150("MENU_PLATFORM_NOTIFICATION_HERO_UNLOCKED_TITLE",0);
    thunk_FUN_1004e439c(auStack_68,uVar2);
    FUN_1004e3120(auStack_58,"[HERO_NAME]");
    uVar2 = FUN_1004e0150(*(undefined8 *)(lVar1 + 0x28),0);
    FUN_1004e3bc4(auStack_68,0,auStack_58,uVar2);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
    }
    FUN_1000153b4(param_1,auStack_68);
    FUN_1004d2698(auStack_58,"build://Splash_%s.png");
    FUN_10001549c(local_80,auStack_58);
    std::string::operator=((string *)(param_1 + 0xe0),(string *)local_80);
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    FUN_10001549c(local_80,"full_splash_1k");
    std::string::operator=((string *)(param_1 + 0xf8),(string *)local_80);
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1000153b4(param_1 + 0x20,uVar2);
    *(undefined1 *)(param_1 + 0x1b4) = 1;
    FUN_10001549c(local_80,"*KindredMenuMarketEffects*");
    std::string::operator=((string *)(param_1 + 0x128),(string *)local_80);
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    FUN_10001549c(local_80,"EFFECT_HERO_UNLOCKED");
    std::string::operator=((string *)(param_1 + 0x140),(string *)local_80);
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    *(undefined4 *)(param_1 + 0x1ac) = 0x4049999a;
    FUN_10001549c(local_80,"build://Sounds/UI.assetbundle/ui_tutorial_frontend_hero_unlock.mp3");
    std::string::operator=((string *)(param_1 + 0x158),(string *)local_80);
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    *(undefined1 *)(param_1 + 0x1b5) = 0;
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000ead08(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  void *local_a0 [2];
  char local_89;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  lVar3 = FUN_10032bbf4(plVar1);
  if (lVar3 == 0) goto LAB_1000eaf34;
  FUN_10032be60(auStack_78,lVar3,1);
  uVar4 = FUN_1004e0150("MENU_PLATFORM_NOTIFICATION_SKIN_UNLOCKED_TITLE",0);
  thunk_FUN_1004e439c(auStack_88,uVar4);
  FUN_1004e3120(auStack_68,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_88,0,auStack_68,auStack_78);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_1000153b4(param_1,auStack_88);
  FUN_1004d2698(auStack_68,"build://Splash_%s.png");
  FUN_10001549c(local_a0,auStack_68);
  std::string::operator=((string *)(param_1 + 0xe0),(string *)local_a0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  FUN_10001549c(local_a0,"full_splash_1k");
  std::string::operator=((string *)(param_1 + 0xf8),(string *)local_a0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1000153b4(param_1 + 0x20,uVar4);
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  FUN_10001549c(local_a0,"*KindredMenuMarketEffects*");
  std::string::operator=((string *)(param_1 + 0x128),(string *)local_a0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  FUN_10001549c(local_a0,"EFFECT_SKIN_UNLOCKED");
  std::string::operator=((string *)(param_1 + 0x140),(string *)local_a0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0x4049999a;
  FUN_10001549c(local_a0,"build://Sounds/UI.assetbundle/ui_tutorial_frontend_hero_unlock.mp3");
  std::string::operator=((string *)(param_1 + 0x158),(string *)local_a0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  *(undefined4 *)(param_1 + 400) = 0x3fe66666;
  if (*(char *)(lVar3 + 0x35) == '\0') {
    iVar2 = *(int *)(lVar3 + 0x20);
    if (iVar2 == 3) {
      FUN_10001549c(local_a0,"Tier_3_Skin_Unlocked");
      std::string::operator=((string *)(param_1 + 0x170),(string *)local_a0);
      if (local_89 < '\0') {
        operator_delete(local_a0[0]);
      }
      uVar6 = 0x40133333;
      goto LAB_1000eaf14;
    }
    if (iVar2 == 2) {
      pcVar5 = "Tier_2_Skin_Unlocked";
LAB_1000eafc4:
      FUN_10001549c(local_a0,pcVar5);
      std::string::operator=((string *)(param_1 + 0x170),(string *)local_a0);
      if (local_89 < '\0') {
        operator_delete(local_a0[0]);
      }
    }
    else if (iVar2 == 1) {
      pcVar5 = "Tier_1_Skin_Unlocked";
      goto LAB_1000eafc4;
    }
  }
  else {
    FUN_10001549c(local_a0,"Special_Edition_Skin_Purchased");
    std::string::operator=((string *)(param_1 + 0x170),(string *)local_a0);
    if (local_89 < '\0') {
      operator_delete(local_a0[0]);
    }
    uVar6 = 0x40266666;
LAB_1000eaf14:
    *(undefined4 *)(param_1 + 400) = uVar6;
  }
  *(undefined1 *)(param_1 + 0x1b5) = 0;
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
LAB_1000eaf34:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000eaff0(long param_1,string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150("MENU_PLATFORM_NOTIFICATION_APP_PURCHASE_TITLE",0);
  FUN_1000153b4(param_1,uVar1);
  uVar1 = FUN_1004e0150("MENU_PLATFORM_NOTIFICATION_APP_PURCHASE_DIALOG",0);
  FUN_1000153b4(param_1 + 0x10,uVar1);
  std::string::operator=((string *)(param_1 + 0x110),param_2);
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1000153b4(param_1 + 0x20,uVar1);
  return;
}




undefined8 * FUN_1000eb06c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_thunk_FUN_1000eb120_10145ac58;
  FUN_1004e3170(param_1 + 3,&DAT_101d91198);
  FUN_1004e3170(param_1 + 5,&DAT_101d91198);
  FUN_1004e3170(param_1 + 7,&DAT_101d91198);
  FUN_10003330c(param_1 + 9,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xc,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xf,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x12,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x15,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x18,&DAT_101d91198);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 5;
  *(undefined2 *)((long)param_1 + 0xe4) = 0;
  return param_1;
}




undefined8 * FUN_1000eb120(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000eb120_10145ac58;
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_1000eb1ec(param_1 + 1,1);
  return param_1;
}




void FUN_1000eb1ec(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0xa0;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xa0;
        puVar2 = puVar2 + 0x14;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1000eb264(long param_1,uint *param_2,uint param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  
  std::string::operator=((string *)(param_1 + 0x10),(string *)(param_2 + 4));
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
      FUN_1000e6e44(param_1,*(long *)(param_2 + 2) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}




void FUN_1000eb30c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar1 = FUN_1000eb43c();
  lVar2 = FUN_1000eb494(param_1);
  if ((-1 < iVar1) && (lVar2 != 0)) {
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    FUN_100181af8(param_2,auStack_40);
    FUN_100183500(param_2,lVar2);
    *(uint *)((long)param_2 + 0x1f64) = *(uint *)((long)param_2 + 0x1f64) | 4;
    (**(code **)(*param_2 + 0x180))(param_2);
    FUN_1001b4c0c(param_2,1);
    if ((*(int *)(param_1 + 0x28) != 0) || (*(int *)(param_1 + 0x2c) != 0)) {
      local_48 = 0x42dc000042dc0000;
      FUN_100183548(param_2,&local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    return;
  }
  *(uint *)((long)param_2 + 0x1f64) = *(uint *)((long)param_2 + 0x1f64) & 0xfffffffb;
  (**(code **)(*param_2 + 0x180))(param_2);
  uVar3 = FUN_1004e0150("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  FUN_100181af8(param_2,uVar3);
  FUN_1001b4c0c(param_2,0);
  return;
}




int FUN_1000eb43c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000e7c70((int *)(param_1 + 0x18));
  if ((iVar1 == 0) ||
     ((((iVar1 = *(int *)(param_1 + 0x18), iVar1 == 0 &&
        (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) &&
       (iVar1 = *(int *)(param_1 + 0x20), iVar1 == 0)) &&
      ((iVar1 = *(int *)(param_1 + 0x28), iVar1 == 0 &&
       (iVar1 = *(int *)(param_1 + 0x2c), iVar1 == 0)))))) {
    iVar1 = -1;
  }
  return iVar1;
}




char * FUN_1000eb494(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000e7c70((int *)(param_1 + 0x18));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return "ice_icon_small";
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      return "glory_icon_small";
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      return "opal_icon_small";
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      return "rareKey_icon_small";
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return "epicKey_icon_small";
    }
  }
  return (char *)0x0;
}




void FUN_1000eb528(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  void *local_48 [2];
  char local_31;
  
  iVar1 = FUN_1000e7c70((int *)(param_1 + 0x18));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          if (*(int *)(param_1 + 0x28) == 0) {
            if (*(int *)(param_1 + 0x2c) == 0) {
              return;
            }
            lVar2 = FUN_10015d3ec();
            FUN_1001c4394(param_2,*(undefined4 *)(lVar2 + 0x5464));
            pcVar3 = "epicKey_icon_small";
          }
          else {
            lVar2 = FUN_10015d3ec();
            FUN_1001c4394(param_2,*(undefined4 *)(lVar2 + 0x5460));
            pcVar3 = "rareKey_icon_small";
          }
        }
        else {
          lVar2 = FUN_10015d3ec();
          FUN_1001c4394(param_2,*(undefined4 *)(lVar2 + 0x545c));
          pcVar3 = "opal_icon_small";
        }
      }
      else {
        lVar2 = FUN_10015d3ec();
        FUN_1001c4394(param_2,*(undefined4 *)(lVar2 + 0x5454));
        pcVar3 = "glory_icon_small";
      }
    }
    else {
      lVar2 = FUN_10015d3ec();
      FUN_1001c4394(param_2,*(undefined4 *)(lVar2 + 0x5450));
      pcVar3 = "ice_icon_small";
    }
    FUN_10001549c(local_48,pcVar3);
    FUN_1001c435c(param_2,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




void FUN_1000eb650(void)

{
  FUN_10002f320();
  FUN_10003190c();
  return;
}




void FUN_1000eb664(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 local_a8 [2];
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = 0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101dc6a80);
  local_4c = DAT_101dc6a58;
  uStack_48 = DAT_101dc6a68;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}




undefined8 FUN_1000eb768(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_1);
  std::string::operator=((string *)(param_2 + 0x68),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  operator_new(0x1870);
  uVar1 = thunk_FUN_10021fce0();
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_1001ad7b8(DAT_101d23560,param_2);
  return *(undefined8 *)(param_2 + 0x80);
}




void FUN_1000eb7dc(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 local_a8 [2];
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = 0x447a000044c80000;
  local_44 = 0;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101dc6a80);
  local_4c = DAT_101dc6a58;
  uStack_48 = DAT_101dc6a68;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}




void FUN_1000eb8dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1000eb7dc();
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1000eb664();
    return;
  }
  uVar1 = FUN_1004e0150("MENU_DIALOG_CANT_AFFORD",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  uVar1 = FUN_1004e0150("MENU_DIALOG_CANT_AFFORD_TITLE",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e313c(auStack_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  FUN_1004e313c(auStack_90);
  if (*(int *)(param_1 + 0x20) == 0) {
    pcVar2 = (code *)0x0;
  }
  else {
    FUN_1004e38ac(auStack_60,"%d");
    FUN_10015d3ec();
    FUN_1004e38ac(auStack_70,"%d");
    uVar1 = FUN_1004e0150("MENU_DIALOG_OPALS",0);
    FUN_1000153b4(auStack_90,uVar1);
    uVar1 = FUN_1004e0150("MARKET_DIALOG_GET_OPALS",0);
    FUN_1000153b4(auStack_80,uVar1);
    pcVar2 = FUN_1000eb650;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1004e38ac(auStack_60,"%d");
    FUN_10015d3ec();
    FUN_1004e38ac(auStack_70,"%d");
    uVar1 = FUN_1004e0150("MENU_DIALOG_ESSENCE",0);
    FUN_1000153b4(auStack_90,uVar1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1004e38ac(auStack_60,"%d");
    FUN_10015d3ec();
    FUN_1004e38ac(auStack_70,"%d");
    uVar1 = FUN_1004e0150("MENU_DIALOG_SEASONAL_KEYS",0);
    FUN_1000153b4(auStack_90,uVar1);
    FUN_1004e0150("MARKET_DIALOG_GET_SEASONAL_KEYS",0);
  }
  FUN_1004e3120(auStack_a0,"[CURRENCY_TYPE]");
  FUN_1004e3bc4(auStack_50,0,auStack_a0,auStack_90);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[ITEM_NAME]");
  FUN_1004e3bc4(auStack_40,0,auStack_a0,param_2);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[UNLOCK_AMOUNT]");
  FUN_1004e3bc4(auStack_40,0,auStack_a0,auStack_60);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[BALANCE_AMOUNT]");
  FUN_1004e3bc4(auStack_40,0,auStack_a0,auStack_70);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[CURRENCY_TYPE]");
  FUN_1004e3d50(auStack_40,0,auStack_a0,auStack_90);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e31c8(auStack_50,auStack_40,uVar1,auStack_80,&DAT_101d91650,0,0,pcVar2,0);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1000ebc54(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  char *local_170;
  undefined8 uStack_168;
  long local_160;
  void *local_158;
  undefined8 local_150;
  long lStack_148;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  void *pvStack_128;
  undefined8 uStack_120;
  long lStack_118;
  void *local_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if (((int)param_1[2] == 4) && (FUN_1000e71b8(param_2,(int)param_1[1]), (int)param_1[1] != 0)) {
    lVar12 = 0;
    uVar11 = 0;
    do {
      lVar10 = *param_1;
      pvStack_a8 = (void *)0x0;
      local_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      local_c0 = (void *)0x0;
      uStack_e8 = 0;
      local_f0 = (void *)0x0;
      local_d8 = (void *)0x0;
      lStack_e0 = 0;
      lVar1 = lVar10 + lVar12;
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "id";
      uStack_168 = 2;
      plVar5 = (long *)FUN_1000e87dc(lVar1,&local_170);
      plVar2 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar2 = plVar5;
      }
      FUN_10001549c(&local_170,plVar2);
      std::string::operator=((string *)&local_f0,(string *)&local_170);
      if (local_160 < 0) {
        operator_delete(local_170);
      }
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "type";
      uStack_168 = 4;
      plVar5 = (long *)FUN_1000e87dc(lVar1,&local_170);
      plVar2 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar2 = plVar5;
      }
      FUN_10001549c(&local_170,plVar2);
      std::string::operator=((string *)&local_d8,(string *)&local_170);
      if (local_160 < 0) {
        operator_delete(local_170);
      }
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "amount";
      uStack_168 = 6;
      puVar6 = (undefined4 *)FUN_1000e87dc(lVar1,&local_170);
      local_90 = *puVar6;
      lVar7 = FUN_1000e86c0(lVar1,"originalId");
      plVar2 = (long *)(lVar10 + lVar12);
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar7) {
        pcVar8 = "";
      }
      else {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "originalId";
        uStack_168 = 10;
        lVar10 = FUN_1000e87dc(lVar1,&local_170);
        pcVar8 = "";
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) != 0) {
          local_160 = CONCAT44(local_160._4_4_,0x100005);
          local_170 = "originalId";
          uStack_168 = 10;
          pcVar8 = (char *)FUN_1000e87dc(lVar1,&local_170);
          if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
            pcVar8 = *(char **)pcVar8;
          }
        }
      }
      FUN_10001549c(&local_170,pcVar8);
      std::string::operator=((string *)&local_c0,(string *)&local_170);
      if (local_160 < 0) {
        operator_delete(local_170);
      }
      lVar10 = FUN_1000e86c0(lVar1,"originalType");
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar10) {
        pcVar8 = "";
      }
      else {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "originalType";
        uStack_168 = 0xc;
        lVar10 = FUN_1000e87dc(lVar1,&local_170);
        pcVar8 = "";
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) != 0) {
          local_160 = CONCAT44(local_160._4_4_,0x100005);
          local_170 = "originalType";
          uStack_168 = 0xc;
          pcVar8 = (char *)FUN_1000e87dc(lVar1,&local_170);
          if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
            pcVar8 = *(char **)pcVar8;
          }
        }
      }
      FUN_10001549c(&local_170,pcVar8);
      std::string::operator=((string *)&pvStack_a8,(string *)&local_170);
      if (local_160 < 0) {
        operator_delete(local_170);
      }
      lVar10 = FUN_1000e86c0(lVar1,"originalAmount");
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar10) {
LAB_1000ebf7c:
        local_8c = 0;
      }
      else {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "originalAmount";
        uStack_168 = 0xe;
        lVar10 = FUN_1000e87dc(lVar1,&local_170);
        if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_1000ebf7c;
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "originalAmount";
        uStack_168 = 0xe;
        puVar6 = (undefined4 *)FUN_1000e87dc(lVar1,&local_170);
        local_8c = *puVar6;
      }
      FUN_1000e6c24(param_2,&local_f0);
      uVar3 = local_d0;
      if (-1 < (long)uStack_c8) {
        uVar3 = uStack_c8 >> 0x38;
      }
      if (((uVar3 == 6) &&
          (iVar4 = std::string::compare((ulong)&local_d8,0,(char *)0xffffffffffffffff,0x1013d246a),
          iVar4 == 0)) &&
         (lVar10 = FUN_1000e86c0(lVar1,"talentData"),
         *plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar10)) {
        pvStack_128 = (void *)0x0;
        local_130 = 0;
        lStack_118 = 0;
        uStack_120 = 0;
        lStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        local_140 = (void *)0x0;
        uStack_168 = 0;
        local_170 = (char *)0x0;
        local_158 = (void *)0x0;
        local_160 = 0;
        local_70 = 0x100005;
        local_80 = "talentData";
        uStack_78 = 10;
        uVar9 = FUN_1000e87dc(lVar1,&local_80);
        FUN_10051ee14(uVar9,&local_170);
        uVar9 = FUN_100341d4c();
        FUN_10034313c(uVar9,&local_170);
        if (lStack_118 < 0) {
          operator_delete(pvStack_128);
        }
        if (local_130 < 0) {
          operator_delete(local_140);
        }
        if (lStack_148 < 0) {
          operator_delete(local_158);
        }
        if (local_160 < 0) {
          operator_delete(local_170);
        }
      }
      uVar3 = local_d0;
      if (-1 < (long)uStack_c8) {
        uVar3 = uStack_c8 >> 0x38;
      }
      if ((uVar3 == 4) &&
         (iVar4 = std::string::compare((ulong)&local_d8,0,(char *)0xffffffffffffffff,0x1013d25b2),
         iVar4 == 0)) {
        uVar9 = FUN_10032834c();
        FUN_100328ea8(uVar9,&local_f0);
      }
      uVar3 = local_d0;
      if (-1 < (long)uStack_c8) {
        uVar3 = uStack_c8 >> 0x38;
      }
      if ((uVar3 == 9) &&
         (iVar4 = std::string::compare((ulong)&local_d8,0,(char *)0xffffffffffffffff,0x1013d260c),
         iVar4 == 0)) {
        uVar9 = FUN_10032834c();
        FUN_100328f14(uVar9,&local_f0);
      }
      if (lStack_98 < 0) {
        operator_delete(pvStack_a8);
      }
      if (local_b0 < 0) {
        operator_delete(local_c0);
      }
      if ((long)uStack_c8 < 0) {
        operator_delete(local_d8);
      }
      if (lStack_e0 < 0) {
        operator_delete(local_f0);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
    } while (uVar11 < *(uint *)(param_1 + 1));
  }
  return;
}




undefined8 FUN_1000ec1a4(undefined8 param_1)

{
  FUN_1000ec1cc(param_1,1);
  return param_1;
}




ulong FUN_1000ec278(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_1000fd5f8();
  uVar3 = 0;
  if ((lVar2 != 0) && (uVar3 = FUN_1003126f4(), (int)uVar3 != 0)) {
    uVar1 = FUN_1000fbaa0();
    uVar3 = (ulong)(uVar1 ^ 1);
  }
  return uVar3;
}




void FUN_1000ec2a0(void)

{
  int iVar1;
  
  iVar1 = FUN_1000ec278();
  if (iVar1 != 0) {
    FUN_1000fd6b0(FUN_1000ec2d0,FUN_1000ec308);
    return;
  }
  return;
}




void FUN_1000ec2d0(undefined8 param_1)

{
  FUN_1000ec1cc(&DAT_101d23050,0);
  FUN_1000ec30c(&DAT_101d23050,param_1);
  return;
}




void FUN_1000ec308(void)

{
  return;
}




void FUN_1000ec30c(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_1000ec1cc(param_1,1);
    FUN_1000e71b8(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        lVar1 = lVar7 + lVar5;
        lVar2 = lVar6 + lVar5;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
        *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar2 + 0x60);
        lVar5 = lVar5 + 0x68;
      } while ((ulong)uVar3 * 0x68 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec3d0(void)

{
  DAT_101dc6920 = 0xff;
  DAT_101dc6922 = 0xffff;
  DAT_101dc6924 = 0xffff;
  DAT_101dc6926 = 0xffbc9c44;
  DAT_101dc692a = 0xff1166f2;
  DAT_101dc692e = 0xffe0e0e0;
  DAT_101dc6932 = 0xffa0a0a0;
  DAT_101dc6936 = 0xff8c8c8c;
  DAT_101dc693a = 0xff322213;
  DAT_101dc693e = 0xff091911;
  DAT_101dc6942 = 0xff170c19;
  DAT_101dc6946 = 0xff241a14;
  DAT_101dc694a = 0xff14171c;
  DAT_101dc694e = 0xff221911;
  DAT_101dc6952 = 0xff1a1416;
  DAT_101dc6956 = 0xff121414;
  DAT_101dc695a = 0xff1a1809;
  DAT_101dc695e = 0xff141414;
  DAT_101dc6962 = 0xff141414;
  DAT_101dc6966 = 0xff2929c0;
  DAT_101dc696a = 0xff283082;
  DAT_101dc696e = 0xff5262cc;
  DAT_101dc6972 = 0xff283082;
  DAT_101dc6976 = 0xff5262cc;
  DAT_101dc697a = 0xff745c42;
  DAT_101dc697e = 0xff184155;
  DAT_101dc6982 = 0xff92665e;
  DAT_101dc6986 = 0xffbc9c44;
  DAT_101dc698a = 0xffbbae56;
  DAT_101dc698e = 0xff8b7b01;
  DAT_101dc6992 = 0xff90b3ef;
  DAT_101dc6996 = 0xff728ebe;
  DAT_101dc699a = 0xff19459d;
  DAT_101dc699e = 0xff9d877b;
  DAT_101dc69a2 = 0xffcbb1a3;
  DAT_101dc69a6 = 0xff3f6fb5;
  DAT_101dc69aa = 0xffc5c5c5;
  DAT_101dc69ae = 0xff4fc1f1;
  DAT_101dc69b2 = 0xff606060;
  DAT_101dc69b6 = 0xffc5ff7b;
  DAT_101dc69ba = 0xff5271eb;
  DAT_101dc69be = 0xfffae076;
  DAT_101dc69c2 = 0xff3ac8f6;
  DAT_101dc69c6 = 0xffaaaaaa;
  DAT_101dc69ca = 0xffe19400;
  DAT_101dc69ce = 0xffe19400;
  DAT_101dc69d2 = 0xffe550b2;
  DAT_101dc69d6 = 0xfff22ae8;
  DAT_101dc69da = 0xff005ae1;
  DAT_101dc69de = 0xff1addfa;
  DAT_101dc69e2 = 0xff2424b3;
  DAT_101dc69e6 = 0xff2424b3;
  DAT_101dc69ea = 0xff646464;
  DAT_101dc69ee = 0xff92665e;
  DAT_101dc69f2 = 0xff646037;
  DAT_101dc69fc = 0xff1111a1;
  DAT_101dc6a00 = 0xff321ee1;
  DAT_101dc6a04 = 0xffc8c8c8;
  DAT_101dc6a08 = 0xff321ee1;
  DAT_101dc6a14 = 0xff6259b3;
  DAT_101dc6a18 = 0xff506e73;
  DAT_101dc6a1c = 0xff9dbf86;
  DAT_101dc69f8 = 0xffffffff;
  DAT_101dc6a20 = 0xffa35244;
  DAT_101dc6a0c = 0xff7fe801;
  DAT_101dc6a24 = 0xffca828e;
  DAT_101dc6a10 = 0xffffffff;
  DAT_101dc6a28 = 0xffa6a6a6;
  DAT_101dc6a2c = 0xffa6a6a6;
  DAT_101dc6a30 = 0xffffffff;
  DAT_101dc6a34 = 0xff88ea2f;
  DAT_101dc6a38 = 0xff8c8c8c;
  DAT_101dc6a3c = 0xffffb400;
  DAT_101dc6a40 = 0xffff00ff;
  DAT_101dc6a44 = 0xff00aded;
  DAT_101dc6a48 = 0xff33d3ff;
  DAT_101dc6a4c = 0xff7fe801;
  DAT_101dc6a50 = 0xff282828;
  DAT_101dc6a54 = 0xfff0f0f0;
  DAT_101dc6a58 = 0xffa4781e;
  DAT_101dc6a5c = 0xffa6654b;
  DAT_101dc6a60 = 0xff93435b;
  DAT_101dc6a64 = 0xff387f9c;
  DAT_101dc6a68 = 0xffa3781e;
  DAT_101dc6a6c = 0xffffd18a;
  DAT_101dc6a70 = 0xffff61f7;
  DAT_101dc6a74 = 0xff5de1f2;
  DAT_101dc6a78 = 0xff80eaff;
  DAT_101dc6a7c = 0xff32e00e;
  DAT_101dc6a80 = 0xff5a3c10;
  DAT_101dc6a84 = 0xff330b03;
  DAT_101dc6a88 = 0xff33031d;
  DAT_101dc6a8c = 0xff032433;
  DAT_101dc6a90 = 0xff9e8e8d;
  DAT_101dc6a98 = 0x4326000041900000;
  DAT_101dc6aa0 = 0x4326000041c00000;
  FUN_10001549c(&DAT_101dc6aa8,"OPEN_SEASONAL_CHEST_SKU");
  ___cxa_atexit(FUN_1000e6204,&DAT_101dc6aa8,0x100000000);
  FUN_10001549c(&DAT_101dc6ac0,"OPEN_SEASONAL_CHEST_SKU_ICE");
  ___cxa_atexit(FUN_1000e6204,&DAT_101dc6ac0,0x100000000);
  DAT_101d23040 = 0;
  DAT_101d23048 = 0;
  ___cxa_atexit(FUN_1000ec1a4,&DAT_101d23040,0x100000000);
  _DAT_101d23050 = 0;
  DAT_101d23058 = 0;
  ___cxa_atexit(FUN_1000ec1a4,&DAT_101d23050,0x100000000);
  DAT_101d23060 = 0;
  DAT_101d23068 = 0;
  ___cxa_atexit(FUN_1000ec1a4,&DAT_101d23060,0x100000000);
  return;
}




void FUN_1000ecb68(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    if (*(char *)(param_1 + 0x34) == '\0') {
      puVar1 = &DAT_101dc6b80;
      switch(*(undefined4 *)(param_1 + 0x20)) {
      case 0:
        break;
      case 1:
        puVar1 = &DAT_101dc6b84;
        break;
      case 2:
        puVar1 = &DAT_101dc6b8c;
        break;
      case 3:
        puVar1 = &DAT_101dc6b94;
        break;
      default:
        goto switchD_1000ecbc0_default;
      }
    }
    else {
      puVar1 = &DAT_101dc6ba0;
    }
  }
  else {
    puVar1 = &DAT_101dc6b9c;
  }
  *param_2 = *puVar1;
switchD_1000ecbc0_default:
  return;
}




void FUN_1000ecbe8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined4 uStack_318;
  undefined1 local_314;
  int local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined5 local_2f8;
  undefined3 uStack_2f3;
  undefined5 uStack_2f0;
  undefined4 local_2e8;
  undefined1 auStack_2e0 [8];
  void *local_2d8;
  undefined1 auStack_2d0 [8];
  void *local_2c8;
  undefined1 auStack_2c0 [8];
  void *local_2b8;
  undefined4 local_2ac;
  undefined1 auStack_2a8 [48];
  undefined8 auStack_278 [2];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [496];
  long local_68;
  
  lVar6 = 0;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    FUN_1004e313c(auStack_268 + lVar6);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x200);
  local_2ac = 0;
  iVar2 = FUN_1004e3a6c(param_1,0,0x5b,0x5d,1,auStack_268,0,&local_2ac);
  lVar6 = 0;
  if (iVar2 != 0) {
    lVar6 = 0;
    puVar7 = auStack_258;
    do {
      if (lVar6 == 0x1f) {
        lVar6 = 0x20;
        break;
      }
      uVar4 = FUN_1004e3a6c(param_1,local_2ac,0x5b,0x5d,1,puVar7,0,&local_2ac);
      puVar7 = puVar7 + 0x10;
      lVar6 = lVar6 + 1;
    } while ((uVar4 & 1) != 0);
  }
  FUN_1004e313c(auStack_2c0);
  FUN_1004e313c(auStack_2d0);
  if ((int)lVar6 != 0) {
    uVar1 = (int)lVar6 - 1;
    if (0x1e < uVar1) {
      uVar1 = 0x1f;
    }
    uVar4 = (ulong)(uVar1 + 1);
    puVar7 = auStack_268;
    do {
      FUN_1004e34d8(puVar7,auStack_2a8,0x40);
      lVar6 = FUN_10034c30c(auStack_2a8,param_2,0);
      if (lVar6 == 0) {
        lVar6 = FUN_10034c1d8(auStack_2a8,param_2);
        if (lVar6 != 0) {
          FUN_1004e3120(auStack_2e0,"[");
          FUN_1000153b4(auStack_2c0,auStack_2e0);
          if (local_2d8 != (void *)0x0) {
            operator_delete__(local_2d8);
          }
          FUN_1004e372c(auStack_2c0,puVar7);
          FUN_1004e3120(auStack_2e0,"]");
          FUN_1004e372c(auStack_2c0,auStack_2e0);
          if (local_2d8 != (void *)0x0) {
            operator_delete__(local_2d8);
          }
          local_330 = *(undefined4 *)(lVar6 + 0x10);
          uStack_32c = *(undefined4 *)(lVar6 + 0x18);
          local_328 = *(undefined4 *)(lVar6 + 0x20);
          local_324 = NEON_rev64(*(undefined8 *)(lVar6 + 0x24),4);
          local_31c = *(undefined4 *)(lVar6 + 0x4c);
          uStack_318 = *(undefined4 *)(lVar6 + 0x30);
          local_314 = *(undefined1 *)(lVar6 + 0x34);
          local_310 = (uint)(*(int *)(lVar6 + 0x38) == 0) << 1;
          if (*(int *)(lVar6 + 0x38) == 1) {
            local_310 = 1;
          }
          uVar3 = 1;
          puVar5 = &local_330;
          goto LAB_1000ece6c;
        }
      }
      else {
        FUN_1004e3120(auStack_2e0,"[");
        FUN_1000153b4(auStack_2c0,auStack_2e0);
        if (local_2d8 != (void *)0x0) {
          operator_delete__(local_2d8);
        }
        FUN_1004e372c(auStack_2c0,puVar7);
        FUN_1004e3120(auStack_2e0,"]");
        FUN_1004e372c(auStack_2c0,auStack_2e0);
        if (local_2d8 != (void *)0x0) {
          operator_delete__(local_2d8);
        }
        local_308 = *(undefined4 *)(lVar6 + 8);
        uStack_304 = *(undefined4 *)(lVar6 + 0x20);
        local_300 = *(undefined8 *)(lVar6 + 0x14);
        local_2f8 = 0;
        uStack_2f3 = 0;
        uStack_2f0 = 0;
        uVar3 = *(undefined4 *)(lVar6 + 0x2c);
        local_2e8 = 0;
        puVar5 = &local_308;
LAB_1000ece6c:
        FUN_1000ecf08(uVar3,puVar5,auStack_2d0);
        FUN_1004e3bc4(param_1,0,auStack_2c0,auStack_2d0);
      }
      puVar7 = puVar7 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (local_2c8 != (void *)0x0) {
    operator_delete__(local_2c8);
  }
  if (local_2b8 != (void *)0x0) {
    operator_delete__(local_2b8);
  }
  lVar6 = 0x200;
  do {
    if (*(void **)(auStack_268 + lVar6 + -8) != (void *)0x0) {
      operator_delete__(*(void **)(auStack_268 + lVar6 + -8));
      *(undefined8 *)((long)auStack_278 + lVar6) = 0;
      *(undefined8 *)(auStack_268 + lVar6 + -8) = 0;
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000ecf08(undefined8 param_1,float *param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  FUN_1000153b4(param_3,&DAT_101d91650);
  if (ABS(*param_2) < 1.1920929e-07) {
    *param_2 = 0.0;
  }
  if (((DAT_101dc6c68 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_101dc6c68), iVar3 != 0)) {
    FUN_1004e313c(&DAT_101dc6c58);
    ___cxa_atexit(FUN_100046198,&DAT_101dc6c58,0x100000000);
    ___cxa_guard_release(&DAT_101dc6c68);
  }
  if (param_2[8] == 2.8026e-45) {
    pcVar5 = "[WP]";
LAB_1000ecf98:
    FUN_1004e3120(auStack_60,pcVar5);
    FUN_1004e372c(param_3,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  else if (param_2[8] == 1.4013e-45) {
    pcVar5 = "[CP]";
    goto LAB_1000ecf98;
  }
  if ((*param_2 == 0.0) &&
     ((((fVar8 = param_2[1], fVar8 != 0.0 || (param_2[2] != 0.0)) || (param_2[3] != 0.0)) ||
      (*(char *)(param_2 + 7) != '\0')))) {
    bVar2 = true;
  }
  else {
    FUN_1000efcf0(&DAT_101dc6c58,param_1);
    FUN_1004e372c(param_3,&DAT_101dc6c58);
    bVar2 = false;
    fVar8 = param_2[1];
  }
  uVar6 = (uint)param_1;
  if (fVar8 != 0.0) {
    fVar7 = *param_2 + fVar8 * 11.0;
    fVar8 = fVar7 + -1.0;
    if (uVar6 != 5) {
      fVar8 = fVar7;
    }
    uVar1 = 2;
    if (1 < uVar6 - 5) {
      uVar1 = uVar6;
    }
    FUN_1004e3120(auStack_60,"-");
    FUN_1004e372c(param_3,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1000efcf0(fVar8,&DAT_101dc6c58,uVar1);
    FUN_1004e372c(param_3,&DAT_101dc6c58);
    FUN_1004e3120(auStack_60," ([REPLACE])");
    FUN_1000153b4(&DAT_101dc6c58,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar4 = FUN_1004e0150("MENU_STYLE_HELPER_LEVEL_1_12",0);
    FUN_1004e3120(auStack_60,"[REPLACE]");
    FUN_1004e3bc4(&DAT_101dc6c58,0,auStack_60,uVar4);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e372c(param_3,&DAT_101dc6c58);
  }
  if (param_2[8] == 2.8026e-45) {
    pcVar5 = "[/WP]";
  }
  else {
    if (param_2[8] != 1.4013e-45) goto LAB_1000ed164;
    pcVar5 = "[/CP]";
  }
  FUN_1004e3120(auStack_60,pcVar5);
  FUN_1004e372c(param_3,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
LAB_1000ed164:
  fVar8 = param_2[2];
  if (0.0 < fVar8) {
    fVar7 = fVar8 * 100.0;
    if ((uVar6 < 7) && ((1 << (ulong)(uVar6 & 0x1f) & 100U) != 0)) {
      fVar7 = fVar8 * 10000.0;
    }
    fVar8 = (float)_fmodf(fVar7,0x3f800000);
    if (bVar2) {
      if (0.01 <= ABS(fVar8)) {
        pcVar5 = " [CP]%.3g%% [REPLACE][/CP]";
      }
      else {
        pcVar5 = " [CP]%d%% [REPLACE][/CP]";
      }
    }
    else if (0.01 <= ABS(fVar8)) {
      pcVar5 = " [CP](%+.3g%% [REPLACE])[/CP]";
    }
    else {
      pcVar5 = " [CP](%+d%% [REPLACE])[/CP]";
    }
    FUN_1004e38ac(&DAT_101dc6c58,pcVar5);
    uVar4 = FUN_1004e0150("MENU_STYLE_HELPER_CRYSTAL_POWER_ATTRIBUTE",0);
    FUN_1004e3120(auStack_60,"[REPLACE]");
    FUN_1004e3bc4(&DAT_101dc6c58,0,auStack_60,uVar4);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e372c(param_3,&DAT_101dc6c58);
    bVar2 = false;
  }
  fVar8 = param_2[3];
  if (0.0 < fVar8) {
    fVar7 = fVar8 * 100.0;
    if ((uVar6 < 7) && ((1 << (ulong)(uVar6 & 0x1f) & 100U) != 0)) {
      fVar7 = fVar8 * 10000.0;
    }
    fVar8 = (float)_fmodf(fVar7,0x3f800000);
    if (bVar2) {
      if (0.01 <= ABS(fVar8)) {
        pcVar5 = " [WP]%.3g%% [REPLACE][/WP]";
      }
      else {
        pcVar5 = " [WP]%d%% [REPLACE][/WP]";
      }
    }
    else if (0.01 <= ABS(fVar8)) {
      pcVar5 = " [WP](%+.3g%% [REPLACE])[/WP]";
    }
    else {
      pcVar5 = " [WP](%+d%% [REPLACE])[/WP]";
    }
    FUN_1004e38ac(&DAT_101dc6c58,pcVar5);
    uVar4 = FUN_1004e0150("MENU_STYLE_HELPER_WEAPON_POWER_ATTRIBUTE",0);
    FUN_1004e3120(auStack_60,"[REPLACE]");
    FUN_1004e3bc4(&DAT_101dc6c58,0,auStack_60,uVar4);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e372c(param_3,&DAT_101dc6c58);
  }
  if (*(char *)(param_2 + 7) != '\0') {
    uVar4 = FUN_1004e0150("MENU_STYLE_HELPER_PERCENT_MAX_HEALTH_AS_DAMAGE",0);
    FUN_1004e372c(param_3,uVar4);
    if (0.0 <= param_2[6]) {
      FUN_1004e38ac(&DAT_101dc6c58,"%d");
      uVar4 = FUN_1004e0150("MENU_STYLE_HELPER_PERCENT_HEALTH_CAP",0);
      thunk_FUN_1004e439c(auStack_60,uVar4);
      FUN_1004e3120(auStack_70,"[MAX]");
      FUN_1004e3bc4(auStack_60,0,auStack_70,&DAT_101dc6c58);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
      FUN_1004e372c(param_3,auStack_60);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
    }
  }
  if (0.0 < param_2[5]) {
    FUN_1004e38ac(&DAT_101dc6c58,"%d%%");
    uVar4 = FUN_1004e0150("MENU_STYLE_HELPER_PERCENT_LIFESTEAL",0);
    thunk_FUN_1004e439c(auStack_60,uVar4);
    FUN_1004e3120(auStack_70,"[LIFESTEAL]");
    FUN_1004e3bc4(auStack_60,0,auStack_70,&DAT_101dc6c58);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1004e372c(param_3,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1000ed57c(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  size_t sVar13;
  size_t sVar14;
  undefined8 *******pppppppuVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  undefined1 *puVar20;
  bool bVar21;
  bool bVar22;
  undefined8 *******pppppppuVar23;
  size_t sVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 *******local_3a0;
  size_t local_398;
  byte local_389;
  undefined8 *******local_388;
  size_t local_380;
  undefined8 local_378;
  undefined8 *******local_370;
  size_t local_368;
  undefined8 local_360;
  undefined8 *******local_358;
  void *local_350;
  char local_341;
  void *local_340 [2];
  char local_329;
  void *local_328 [2];
  char local_311;
  void *local_310 [2];
  char local_2f9;
  void *local_2f8 [2];
  char local_2e1;
  undefined8 *******local_2e0;
  size_t local_2d8;
  byte local_2c9;
  undefined8 *******local_2c8;
  size_t local_2c0;
  byte local_2b1;
  undefined1 auStack_2b0 [8];
  void *local_2a8;
  undefined1 auStack_2a0 [8];
  void *local_298;
  undefined1 auStack_290 [8];
  void *local_288;
  void *local_280;
  undefined8 uStack_278;
  long local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 auStack_260 [8];
  void *local_258;
  undefined1 auStack_250 [8];
  void *local_248;
  undefined1 auStack_240 [8];
  void *local_238;
  undefined1 auStack_230 [8];
  void *local_228;
  undefined1 auStack_220 [8];
  void *local_218;
  undefined1 auStack_210 [8];
  void *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  undefined1 auStack_1e8 [8];
  void *local_1e0;
  undefined1 auStack_1d8 [8];
  void *local_1d0;
  undefined1 auStack_1c8 [8];
  void *local_1c0;
  undefined4 local_1b4;
  undefined8 *******local_1b0;
  size_t local_1a8;
  undefined8 local_1a0;
  undefined8 *******local_190;
  void *local_188;
  char local_179;
  char acStack_170 [8];
  void *local_168;
  undefined1 auStack_150 [8];
  void *local_148;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [96];
  long local_a0 [4];
  
  lVar18 = 0;
  local_a0[2] = *(long *)PTR____stack_chk_guard_101444218;
  do {
    FUN_1004e313c(auStack_110 + lVar18);
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x80);
  local_1b4 = 0;
  iVar6 = FUN_1004e3a6c(param_1,0,0x5b,0x5d,1,auStack_110,0,&local_1b4);
  lVar18 = 0;
  if (iVar6 != 0) {
    lVar18 = 0;
    puVar20 = auStack_100;
    do {
      if (lVar18 == 7) {
        lVar18 = 8;
        break;
      }
      uVar9 = FUN_1004e3a6c(param_1,local_1b4,0x5b,0x5d,1,puVar20,0,&local_1b4);
      puVar20 = puVar20 + 0x10;
      lVar18 = lVar18 + 1;
    } while ((uVar9 & 1) != 0);
  }
  FUN_1004e313c(auStack_1c8);
  if ((int)lVar18 != 0) {
    uVar9 = 0;
    uVar2 = (int)lVar18 - 1;
    if (6 < uVar2) {
      uVar2 = 7;
    }
    do {
      thunk_FUN_1004e439c(auStack_1d8,&DAT_101d91650);
      thunk_FUN_1004e439c(auStack_1e8,&DAT_101d91650);
      local_1ec = 0;
      puVar20 = auStack_110 + uVar9 * 0x10;
      iVar6 = FUN_1004e39ec(puVar20,0,0x7c,&local_1ec);
      if (iVar6 == 0) {
        FUN_1000153b4(auStack_1d8,puVar20);
      }
      else {
        FUN_1004e4154(auStack_150,puVar20,0,local_1ec);
        FUN_1000153b4(auStack_1d8,auStack_150);
        if (local_148 != (void *)0x0) {
          operator_delete__(local_148);
        }
        iVar6 = local_1ec + 1;
        iVar7 = FUN_1004e3634(puVar20);
        FUN_1004e4154(auStack_150,puVar20,iVar6,iVar7 - local_1ec);
        FUN_1000153b4(auStack_1e8,auStack_150);
        if (local_148 != (void *)0x0) {
          operator_delete__(local_148);
        }
      }
      FUN_1004e34d8(auStack_1d8,auStack_150,0x40);
      local_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      FUN_1004e3120(acStack_170,"[");
      FUN_1000153b4(auStack_1c8,acStack_170);
      if (local_168 != (void *)0x0) {
        operator_delete__(local_168);
      }
      FUN_1004e372c(auStack_1c8,puVar20);
      FUN_1004e3120(acStack_170,"]");
      FUN_1004e372c(auStack_1c8,acStack_170);
      if (local_168 != (void *)0x0) {
        operator_delete__(local_168);
      }
      uVar10 = FUN_1003e1144(param_3,*(undefined8 *)(param_2 + 8));
      FUN_1004e3120(auStack_210,PTR_s_CR_101854c10);
      FUN_1004e3120(auStack_220,PTR_s_WR_101854c18);
      FUN_1004e3120(auStack_230,PTR_s_HR_101854c28);
      FUN_1004e3120(auStack_240,PTR_s_BWR_101854c20);
      FUN_1004e3120(auStack_250,PTR_s_CBASE_101854c30);
      FUN_1004e3120(auStack_260,PTR_s_WBASE_101854c38);
      bVar21 = false;
      bVar22 = false;
      bVar5 = false;
      uVar19 = 0;
      bVar4 = false;
      bVar3 = false;
      local_264 = 0;
      do {
        iVar6 = FUN_1004e39ec(auStack_1e8,0,0x2c,&local_264);
        FUN_1004e4154(acStack_170,auStack_1e8,0,local_264);
        uVar11 = FUN_1004e3654(acStack_170,auStack_210);
        if ((uVar11 & 1) == 0) {
          uVar11 = FUN_1004e3654(acStack_170,auStack_220);
          if ((uVar11 & 1) == 0) {
            uVar11 = FUN_1004e3654(acStack_170,auStack_230);
            if ((uVar11 & 1) == 0) {
              uVar11 = FUN_1004e3654(acStack_170,auStack_240);
              if ((uVar11 & 1) == 0) {
                uVar11 = FUN_1004e3654(acStack_170,auStack_250);
                if ((uVar11 & 1) == 0) {
                  uVar8 = FUN_1004e3654(acStack_170,auStack_260);
                  uVar19 = uVar8 | uVar19;
                }
                else {
                  bVar5 = true;
                }
              }
              else {
                bVar22 = true;
              }
            }
            else {
              bVar21 = true;
            }
          }
          else {
            bVar4 = true;
          }
        }
        else {
          bVar3 = true;
        }
        iVar7 = FUN_1004e3634(acStack_170);
        uVar8 = FUN_1004e3634(auStack_1e8);
        if (iVar7 + 1U < uVar8) {
          iVar7 = FUN_1004e3634(acStack_170);
          uVar12 = FUN_1004e3634(auStack_1e8);
          FUN_1004e4154(&local_190,auStack_1e8,iVar7 + 1,uVar12);
          FUN_1000153b4(auStack_1e8,&local_190);
          if (local_188 != (void *)0x0) {
            operator_delete__(local_188);
          }
        }
        else {
          FUN_1004e34c8(auStack_1e8);
        }
        if (local_168 != (void *)0x0) {
          operator_delete__(local_168);
        }
        iVar7 = FUN_1004e36c0(auStack_1e8,&DAT_101d91650);
      } while ((iVar7 != 0) &&
              ((iVar6 == 0 ||
               (iVar6 = FUN_1004e39ec(auStack_1e8,local_264,0x2c,&local_264), iVar6 == 0))));
      local_268 = 0xffffffff;
      lVar18 = FUN_10034c30c(auStack_150,param_2,&local_268);
      if (lVar18 == 0) {
        lVar18 = FUN_10034c1d8(auStack_150,param_2);
        if (lVar18 != 0) {
          lVar17 = *(long *)(param_3 + 0x40);
          fVar26 = *(float *)(lVar17 + 0x38) +
                   *(float *)(lVar17 + 0xec) * (*(float *)(lVar17 + 0x254) + 1.0);
          NEON_fminnm(fVar26 + fVar26 * *(float *)(lVar17 + 0x1a0),DAT_101dc7020);
          fVar27 = DAT_101dc6f60 - *(float *)(lVar17 + 0x38);
          uVar10 = FUN_1003b4510(param_3,uVar10);
          lVar17 = *(long *)(param_3 + 0x40);
          fVar26 = *(float *)(lVar17 + 0xd8) +
                   *(float *)(lVar17 + 0x18c) * (*(float *)(lVar17 + 0x2f4) + 1.0);
          NEON_fminnm(fVar26 + fVar26 * *(float *)(lVar17 + 0x240),DAT_101dc70c0);
          uVar25 = FUN_1003df4f8(fVar27,DAT_101dc7000,DAT_101dc70c0,lVar18,uVar10,0,
                                 (int)DAT_101dc7000);
          local_200 = CONCAT44(local_200._4_4_,uVar25);
          if ((*(char *)(lVar18 + 0x34) == '\0') && (*(char *)(lVar18 + 0x35) == '\0')) {
            local_1f0 = 1;
          }
          else {
            local_1f0 = 2;
          }
          if (bVar3) {
            lVar17 = *(long *)(param_3 + 0x40);
            fVar26 = *(float *)(lVar17 + 0x4c) +
                     *(float *)(lVar17 + 0x100) * (*(float *)(lVar17 + 0x268) + 1.0);
            NEON_fminnm(fVar26 + fVar26 * *(float *)(lVar17 + 0x1b4),DAT_101dc7034);
            uVar25 = FUN_1003df560(DAT_101dc6f70._4_4_,DAT_101dc6f70._4_4_,DAT_101dc7034,lVar18);
            local_200 = CONCAT44(uVar25,(undefined4)local_200);
          }
          if (!bVar4 && !bVar22) goto LAB_1000edc18;
          lVar17 = *(long *)(param_3 + 0x40);
          fVar26 = *(float *)(lVar17 + 0x48) +
                   *(float *)(lVar17 + 0xfc) * (*(float *)(lVar17 + 0x264) + 1.0);
          NEON_fminnm(fVar26 + fVar26 * *(float *)(lVar17 + 0x1b0),DAT_101dc7030);
          uVar25 = FUN_1003df538((float)DAT_101dc6f70,
                                 (float)DAT_101dc6f70 - *(float *)(lVar17 + 0x48),0x3f800000,
                                 DAT_101dc7030,lVar18);
          goto LAB_1000edc14;
        }
        if (param_3 != 0) {
          uVar10 = FUN_1003e1144(param_3,*(undefined8 *)(param_2 + 8));
          uVar11 = FUN_100343e8c(param_3,uVar10,auStack_150,&local_200,0xffffffff,0xffffffff);
          if ((uVar11 & 1) != 0) goto LAB_1000edc18;
        }
      }
      else {
        local_1f0 = *(undefined4 *)(lVar18 + 0x2c);
        local_200._0_4_ = *(undefined4 *)(lVar18 + 8);
        uVar25 = thunk_FUN_1003dfe60(param_3,uVar10,local_268,1,1);
        local_200 = CONCAT44(local_200._4_4_,uVar25);
        if (bVar3) {
          uVar25 = thunk_FUN_1003dfe60(param_3,uVar10,local_268,8,1);
          local_200 = CONCAT44(uVar25,(undefined4)local_200);
          if (!bVar4) goto LAB_1000eda2c;
LAB_1000edbdc:
          uVar25 = thunk_FUN_1003dfe60(param_3,uVar10,local_268,2,1);
          local_1f8 = CONCAT44(local_1f8._4_4_,uVar25);
          if (bVar22) goto LAB_1000edbfc;
        }
        else {
          if (bVar4) goto LAB_1000edbdc;
LAB_1000eda2c:
          if (!bVar22) goto LAB_1000edc18;
LAB_1000edbfc:
          uVar25 = thunk_FUN_1003dfe60(param_3,uVar10,local_268,4,1);
LAB_1000edc14:
          local_1f8 = CONCAT44(local_1f8._4_4_,uVar25);
        }
LAB_1000edc18:
        local_280 = (void *)0x0;
        uStack_278 = 0;
        local_270 = 0;
        FUN_1004e313c(auStack_290);
        FUN_1004e313c(auStack_2a0);
        FUN_1004e313c(auStack_2b0);
        FUN_1000ee4ec(&local_2c8,PTR_s__24_144_238_255__101854be0);
        FUN_1000ee4ec(&local_2e0,PTR_s__254_103_96_255__101854be8);
        FUN_1000ee4ec(local_2f8,PTR_s__110_254_106_255__101854bf0);
        FUN_1000ee4ec(local_310,PTR_s_____101854bf8);
        FUN_1000ee4ec(local_328,PTR_s____101854c00);
        FUN_1000ee4ec(local_340,PTR_s___101854c08);
        FUN_1000ee590(local_200 & 0xffffffff,local_1f0,auStack_290,0);
        FUN_1004e34d8(auStack_290,acStack_170,0x20);
        sVar14 = local_2c0;
        sVar24 = local_2d8;
        if (bVar5) {
          local_1a8 = 0;
          local_1b0 = (undefined8 *******)0x0;
          local_1a0 = 0;
          if ((char)local_2b1 < '\0') {
            sVar13 = _strlen(acStack_170);
            pppppppuVar23 = local_2c8;
            sVar24 = sVar14;
          }
          else {
            pppppppuVar23 = &local_2c8;
            bVar1 = local_2b1;
LAB_1000edd24:
            local_1a0 = 0;
            local_1a8 = 0;
            local_1b0 = (undefined8 *******)0x0;
            sVar13 = _strlen(acStack_170);
            sVar24 = (ulong)bVar1;
          }
LAB_1000eddb4:
          uVar11 = sVar24 + sVar13;
          if (0xffffffffffffffef < uVar11) goto LAB_1000ee4e4;
          if (uVar11 < 0x17) {
            pppppppuVar15 = &local_1b0;
            local_1a0 = CONCAT17((char)sVar24,(undefined7)local_1a0);
          }
          else {
            uVar11 = uVar11 + 0x10 & 0xfffffffffffffff0;
            pppppppuVar15 = operator_new(uVar11);
            local_1a0 = uVar11 | 0x8000000000000000;
            local_1b0 = pppppppuVar15;
            local_1a8 = sVar24;
          }
          if (sVar24 != 0) {
            _memcpy(pppppppuVar15,pppppppuVar23,sVar24);
          }
          *(undefined1 *)((long)pppppppuVar15 + sVar24) = 0;
          std::string::append((char *)&local_1b0,(ulong)acStack_170);
          FUN_1000e8b18(&local_190,&local_1b0,local_310);
          pppppppuVar23 = local_190;
          if (-1 < local_179) {
            pppppppuVar23 = &local_190;
          }
          std::string::append((char *)&local_280,(ulong)pppppppuVar23);
          if (local_179 < '\0') {
            operator_delete(local_190);
          }
          if ((long)local_1a0 < 0) {
            operator_delete(local_1b0);
          }
        }
        else {
          if ((uVar19 & 1) != 0) {
            local_1a8 = 0;
            local_1b0 = (undefined8 *******)0x0;
            local_1a0 = 0;
            if (-1 < (char)local_2c9) {
              pppppppuVar23 = &local_2e0;
              bVar1 = local_2c9;
              goto LAB_1000edd24;
            }
            sVar13 = _strlen(acStack_170);
            pppppppuVar23 = local_2e0;
            goto LAB_1000eddb4;
          }
          std::string::append((char *)&local_280);
        }
        if (bVar3) {
          FUN_1004e38ac(auStack_2a0,"%d");
          FUN_1004e34d8(auStack_2a0,&local_190,0x20);
          FUN_1000e8b18(&local_388,&local_2c8,local_328);
          sVar24 = local_380;
          local_370 = (undefined8 *******)0x0;
          local_368 = 0;
          local_360 = 0;
          uVar11 = local_378 >> 0x38;
          if ((long)local_378 < 0) {
            sVar14 = _strlen((char *)&local_190);
            pppppppuVar23 = local_388;
          }
          else {
            sVar14 = _strlen((char *)&local_190);
            pppppppuVar23 = &local_388;
            sVar24 = uVar11;
          }
          uVar11 = sVar24 + sVar14;
          if (0xffffffffffffffef < uVar11) goto LAB_1000ee4e4;
          if (uVar11 < 0x17) {
            pppppppuVar15 = &local_370;
            local_360 = CONCAT17((char)sVar24,(undefined7)local_360);
          }
          else {
            uVar11 = uVar11 + 0x10 & 0xfffffffffffffff0;
            pppppppuVar15 = operator_new(uVar11);
            local_360 = uVar11 | 0x8000000000000000;
            local_370 = pppppppuVar15;
            local_368 = sVar24;
          }
          if (sVar24 != 0) {
            _memcpy(pppppppuVar15,pppppppuVar23,sVar24);
          }
          *(undefined1 *)((long)pppppppuVar15 + sVar24) = 0;
          std::string::append((char *)&local_370,(ulong)&local_190);
          FUN_1000e8b18(&local_358,&local_370,local_340);
          FUN_1000e8b18(&local_1b0,&local_358,local_310);
          pppppppuVar23 = local_1b0;
          if (-1 < (long)local_1a0) {
            pppppppuVar23 = &local_1b0;
          }
          std::string::append((char *)&local_280,(ulong)pppppppuVar23);
          if ((long)local_1a0 < 0) {
            operator_delete(local_1b0);
          }
          if (local_341 < '\0') {
            operator_delete(local_358);
          }
          if ((long)local_360 < 0) {
            operator_delete(local_370);
          }
          if ((long)local_378 < 0) {
            operator_delete(local_388);
          }
        }
        if (bVar4 || bVar22) {
          FUN_1004e38ac(auStack_2b0,"%d");
          FUN_1004e34d8(auStack_2b0,&local_1b0,0x20);
          FUN_1000e8b18(&local_3a0,&local_2e0,local_328);
          sVar24 = local_398;
          local_388 = (undefined8 *******)0x0;
          local_380 = 0;
          local_378 = 0;
          if ((char)local_389 < '\0') {
            sVar14 = _strlen((char *)&local_1b0);
            pppppppuVar23 = local_3a0;
          }
          else {
            sVar24 = (size_t)local_389;
            sVar14 = _strlen((char *)&local_1b0);
            pppppppuVar23 = &local_3a0;
          }
          uVar11 = sVar24 + sVar14;
          if (0xffffffffffffffef < uVar11) goto LAB_1000ee4e4;
          if (uVar11 < 0x17) {
            pppppppuVar15 = &local_388;
            local_378 = CONCAT17((char)sVar24,(undefined7)local_378);
          }
          else {
            uVar11 = uVar11 + 0x10 & 0xfffffffffffffff0;
            pppppppuVar15 = operator_new(uVar11);
            local_378 = uVar11 | 0x8000000000000000;
            local_388 = pppppppuVar15;
            local_380 = sVar24;
          }
          if (sVar24 != 0) {
            _memcpy(pppppppuVar15,pppppppuVar23,sVar24);
          }
          *(undefined1 *)((long)pppppppuVar15 + sVar24) = 0;
          std::string::append((char *)&local_388,(ulong)&local_1b0);
          FUN_1000e8b18(&local_370,&local_388,local_340);
          FUN_1000e8b18(&local_358,&local_370,local_310);
          pppppppuVar23 = local_358;
          if (-1 < local_341) {
            pppppppuVar23 = &local_358;
          }
          std::string::append((char *)&local_280,(ulong)pppppppuVar23);
          if (local_341 < '\0') {
            operator_delete(local_358);
          }
          if ((long)local_360 < 0) {
            operator_delete(local_370);
          }
          if ((long)local_378 < 0) {
            operator_delete(local_388);
          }
          if ((char)local_389 < '\0') {
            operator_delete(local_3a0);
          }
        }
        if (bVar21) {
          FUN_1004e38ac(auStack_2b0,"%d");
          FUN_1004e34d8(auStack_2b0,&local_1b0,0x20);
          FUN_1000e8b18(&local_3a0,local_2f8,local_328);
          sVar24 = local_398;
          local_388 = (undefined8 *******)0x0;
          local_380 = 0;
          local_378 = 0;
          if ((char)local_389 < '\0') {
            sVar14 = _strlen((char *)&local_1b0);
            pppppppuVar23 = local_3a0;
          }
          else {
            sVar24 = (size_t)local_389;
            sVar14 = _strlen((char *)&local_1b0);
            pppppppuVar23 = &local_3a0;
          }
          uVar11 = sVar24 + sVar14;
          if (0xffffffffffffffef < uVar11) {
LAB_1000ee4e4:
                    /* WARNING: Subroutine does not return */
            FUN_1000f303c();
          }
          if (uVar11 < 0x17) {
            pppppppuVar15 = &local_388;
            local_378 = CONCAT17((char)sVar24,(undefined7)local_378);
          }
          else {
            uVar11 = uVar11 + 0x10 & 0xfffffffffffffff0;
            pppppppuVar15 = operator_new(uVar11);
            local_378 = uVar11 | 0x8000000000000000;
            local_388 = pppppppuVar15;
            local_380 = sVar24;
          }
          if (sVar24 != 0) {
            _memcpy(pppppppuVar15,pppppppuVar23,sVar24);
          }
          *(undefined1 *)((long)pppppppuVar15 + sVar24) = 0;
          std::string::append((char *)&local_388,(ulong)&local_1b0);
          FUN_1000e8b18(&local_370,&local_388,local_340);
          FUN_1000e8b18(&local_358,&local_370,local_310);
          pppppppuVar23 = local_358;
          if (-1 < local_341) {
            pppppppuVar23 = &local_358;
          }
          std::string::append((char *)&local_280,(ulong)pppppppuVar23);
          if (local_341 < '\0') {
            operator_delete(local_358);
          }
          if ((long)local_360 < 0) {
            operator_delete(local_370);
          }
          if ((long)local_378 < 0) {
            operator_delete(local_388);
          }
          if ((char)local_389 < '\0') {
            operator_delete(local_3a0);
          }
        }
        FUN_1004e3170(&local_358,&local_280);
        FUN_1004e3bc4(param_1,0,auStack_1c8,&local_358);
        if (local_350 != (void *)0x0) {
          operator_delete__(local_350);
        }
        if (local_329 < '\0') {
          operator_delete(local_340[0]);
        }
        if (local_311 < '\0') {
          operator_delete(local_328[0]);
        }
        if (local_2f9 < '\0') {
          operator_delete(local_310[0]);
        }
        if (local_2e1 < '\0') {
          operator_delete(local_2f8[0]);
        }
        if ((char)local_2c9 < '\0') {
          operator_delete(local_2e0);
        }
        if ((char)local_2b1 < '\0') {
          operator_delete(local_2c8);
        }
        if (local_2a8 != (void *)0x0) {
          operator_delete__(local_2a8);
        }
        if (local_298 != (void *)0x0) {
          operator_delete__(local_298);
        }
        if (local_288 != (void *)0x0) {
          operator_delete__(local_288);
        }
        if (local_270 < 0) {
          operator_delete(local_280);
        }
      }
      if (local_258 != (void *)0x0) {
        operator_delete__(local_258);
      }
      if (local_248 != (void *)0x0) {
        operator_delete__(local_248);
      }
      if (local_238 != (void *)0x0) {
        operator_delete__(local_238);
      }
      if (local_228 != (void *)0x0) {
        operator_delete__(local_228);
      }
      if (local_218 != (void *)0x0) {
        operator_delete__(local_218);
      }
      if (local_208 != (void *)0x0) {
        operator_delete__(local_208);
      }
      if (local_1e0 != (void *)0x0) {
        operator_delete__(local_1e0);
      }
      if (local_1d0 != (void *)0x0) {
        operator_delete__(local_1d0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2 + 1);
  }
  if (local_1c0 != (void *)0x0) {
    operator_delete__(local_1c0);
  }
  lVar18 = 0;
  do {
    pvVar16 = *(void **)((long)local_a0 + lVar18 + 8);
    if (pvVar16 != (void *)0x0) {
      operator_delete__(pvVar16);
      *(undefined8 *)((long)local_a0 + lVar18) = 0;
      *(undefined8 *)((long)local_a0 + lVar18 + 8) = 0;
    }
    lVar18 = lVar18 + -0x10;
  } while (lVar18 != -0x80);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_a0[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined8 * FUN_1000ee4ec(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  pcVar1 = "";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  sVar2 = _strlen(pcVar1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1000f303c();
  }
  if (sVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)sVar2;
    puVar3 = param_1;
    if (sVar2 == 0) goto LAB_1000ee570;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = operator_new(uVar4);
    param_1[1] = sVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar3;
  }
  _memcpy(puVar3,pcVar1,sVar2);
LAB_1000ee570:
  *(undefined1 *)((long)puVar3 + sVar2) = 0;
  return param_1;
}




void FUN_1000ee590(float param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if (1.1920929e-07 <= ABS(param_1)) {
    fVar6 = param_1;
  }
  switch(param_2) {
  case 1:
    pcVar5 = "%d";
    break;
  case 2:
    if (0.1 <= fVar6) {
      if (0.01 <= ABS(fVar6 * 100.0 - (float)(int)(fVar6 * 100.0))) {
        pcVar5 = "%.4g%%";
      }
      else {
        pcVar5 = "%d%%";
      }
    }
    else {
      pcVar5 = "%.2g%%";
    }
    break;
  case 3:
    pcVar5 = "%.3g";
    break;
  case 4:
    FUN_1004e38ac(param_3,"%.3g");
    uVar4 = FUN_1004e0150("LABEL_UNITS_SECONDS_ACRONYM",0);
    FUN_1004e372c(param_3,uVar4);
    return;
  case 5:
    if ((fVar6 + -1.0 < 0.1) && (-0.1 < fVar6 + -1.0)) goto LAB_1000ee7d8;
    fVar6 = fVar6 * 100.0 - (float)(int)(fVar6 * 100.0);
joined_r0x0001000ee728:
    if (0.01 <= ABS(fVar6)) {
      pcVar5 = "%s%.3g%%";
    }
    else {
      pcVar5 = "%s%d%%";
    }
    break;
  case 6:
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar6 < 0.1) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6)) {
        bVar1 = fVar6 < -1.0;
        bVar2 = fVar6 == -1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = fVar6 * 100.0 - (float)(int)(fVar6 * 100.0);
      goto joined_r0x0001000ee728;
    }
LAB_1000ee7d8:
    pcVar5 = "%s%.2g%%";
    break;
  default:
    goto switchD_1000ee5ec_default;
  }
  FUN_1004e38ac(param_3,pcVar5);
switchD_1000ee5ec_default:
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1000ee838(undefined8 param_1,ulong param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  size_t sVar13;
  size_t sVar14;
  undefined8 *******pppppppuVar15;
  void *pvVar16;
  long lVar17;
  undefined1 *puVar18;
  uint uVar19;
  bool bVar20;
  undefined8 *******pppppppuVar21;
  size_t sVar22;
  ulong uVar23;
  undefined8 *******local_348;
  size_t local_340;
  byte local_331;
  undefined8 *******local_330;
  size_t local_328;
  undefined8 local_320;
  undefined8 *******local_318;
  size_t local_310;
  undefined8 local_308;
  undefined8 *******local_300;
  void *local_2f8;
  char local_2e9;
  void *local_2e8 [2];
  char local_2d1;
  void *local_2d0 [2];
  char local_2b9;
  void *local_2b8 [2];
  char local_2a1;
  undefined8 *******local_2a0;
  size_t local_298;
  byte local_289;
  undefined8 *******local_288;
  size_t local_280;
  byte local_271;
  undefined1 auStack_270 [8];
  void *local_268;
  undefined1 auStack_260 [8];
  void *local_258;
  undefined1 auStack_250 [8];
  void *local_248;
  void *local_240;
  undefined8 uStack_238;
  long local_230;
  undefined4 local_224;
  undefined1 auStack_220 [8];
  void *local_218;
  undefined1 auStack_210 [8];
  void *local_208;
  undefined1 auStack_200 [8];
  void *local_1f8;
  undefined1 auStack_1f0 [8];
  void *local_1e8;
  undefined1 auStack_1e0 [8];
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  int local_1bc;
  undefined1 auStack_1b8 [8];
  void *local_1b0;
  undefined1 auStack_1a8 [8];
  void *local_1a0;
  undefined1 auStack_198 [8];
  void *local_190;
  undefined4 local_184;
  undefined8 *******local_180;
  size_t local_178;
  undefined8 local_170;
  undefined8 *******local_160;
  void *local_158;
  char local_149;
  char acStack_140 [8];
  void *local_138;
  undefined1 auStack_120 [8];
  void *local_118;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [96];
  long local_90 [4];
  
  local_90[2] = *(long *)PTR____stack_chk_guard_101444218;
  lVar9 = FUN_1003a3644(param_3);
  if ((lVar9 != 0) && (iVar6 = FUN_10034624c(lVar9,param_2), iVar6 != 0)) {
    lVar17 = 0;
    do {
      FUN_1004e313c(auStack_100 + lVar17);
      lVar17 = lVar17 + 0x10;
    } while (lVar17 != 0x80);
    local_184 = 0;
    iVar6 = FUN_1004e3a6c(param_1,0,0x5b,0x5d,1,auStack_100,0,&local_184);
    lVar17 = 0;
    if (iVar6 != 0) {
      lVar17 = 0;
      puVar18 = auStack_f0;
      do {
        if (lVar17 == 7) {
          lVar17 = 8;
          break;
        }
        uVar10 = FUN_1004e3a6c(param_1,local_184,0x5b,0x5d,1,puVar18,0,&local_184);
        puVar18 = puVar18 + 0x10;
        lVar17 = lVar17 + 1;
      } while ((uVar10 & 1) != 0);
    }
    FUN_1004e313c(auStack_198);
    if ((int)lVar17 != 0) {
      uVar10 = 0;
      uVar2 = (int)lVar17 - 1;
      if (6 < uVar2) {
        uVar2 = 7;
      }
      uVar23 = param_2;
      do {
        thunk_FUN_1004e439c(auStack_1a8,&DAT_101d91650);
        thunk_FUN_1004e439c(auStack_1b8,&DAT_101d91650);
        local_1bc = 0;
        puVar18 = auStack_100 + uVar10 * 0x10;
        iVar6 = FUN_1004e39ec(puVar18,0,0x7c,&local_1bc);
        if (iVar6 == 0) {
          FUN_1000153b4(auStack_1a8,puVar18);
        }
        else {
          FUN_1004e4154(auStack_120,puVar18,0,local_1bc);
          FUN_1000153b4(auStack_1a8,auStack_120);
          if (local_118 != (void *)0x0) {
            operator_delete__(local_118);
          }
          iVar6 = local_1bc + 1;
          iVar7 = FUN_1004e3634(puVar18);
          FUN_1004e4154(auStack_120,puVar18,iVar6,iVar7 - local_1bc);
          FUN_1000153b4(auStack_1b8,auStack_120);
          if (local_118 != (void *)0x0) {
            operator_delete__(local_118);
          }
        }
        FUN_1004e34d8(auStack_1a8,auStack_120,0x20);
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        FUN_1004e3120(acStack_140,"[");
        FUN_1000153b4(auStack_198,acStack_140);
        if (local_138 != (void *)0x0) {
          operator_delete__(local_138);
        }
        FUN_1004e372c(auStack_198,puVar18);
        FUN_1004e3120(acStack_140,"]");
        FUN_1004e372c(auStack_198,acStack_140);
        if (local_138 != (void *)0x0) {
          operator_delete__(local_138);
        }
        FUN_1004e3120(auStack_1e0,PTR_s_CR_101854c10);
        FUN_1004e3120(auStack_1f0,PTR_s_WR_101854c18);
        FUN_1004e3120(auStack_200,PTR_s_BWR_101854c20);
        FUN_1004e3120(auStack_210,PTR_s_CBASE_101854c30);
        FUN_1004e3120(auStack_220,PTR_s_WBASE_101854c38);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        bVar20 = false;
        uVar19 = 0;
        local_224 = 0;
        do {
          FUN_1004e39ec(auStack_1b8,0,0x2c,&local_224);
          FUN_1004e4154(acStack_140,auStack_1b8,0,local_224);
          uVar11 = FUN_1004e3654(acStack_140,auStack_1e0);
          if ((uVar11 & 1) == 0) {
            uVar11 = FUN_1004e3654(acStack_140,auStack_1f0);
            if ((uVar11 & 1) == 0) {
              uVar11 = FUN_1004e3654(acStack_140,auStack_200);
              if ((uVar11 & 1) == 0) {
                uVar11 = FUN_1004e3654(acStack_140,auStack_210);
                if ((uVar11 & 1) == 0) {
                  uVar8 = FUN_1004e3654(acStack_140,auStack_220);
                  uVar19 = uVar8 | uVar19;
                }
                else {
                  bVar20 = true;
                }
              }
              else {
                bVar5 = true;
              }
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar3 = true;
          }
          iVar6 = FUN_1004e3634(acStack_140);
          uVar12 = FUN_1004e3634(auStack_1b8);
          FUN_1004e4154(&local_160,auStack_1b8,iVar6 + 1,uVar12);
          FUN_1000153b4(auStack_1b8,&local_160);
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          if (local_138 != (void *)0x0) {
            operator_delete__(local_138);
          }
          iVar6 = FUN_1004e36c0(auStack_1b8,&DAT_101d91650);
        } while ((iVar6 != 0) &&
                (iVar6 = FUN_1004e39ec(auStack_1b8,local_224,0x2c,&local_224), iVar6 == 0));
        uVar12 = FUN_1003c2eec(lVar9,uVar23);
        iVar6 = FUN_100343e8c(param_3,0xffffffff,auStack_120,&local_1d0,uVar12,
                              *(undefined4 *)(param_3 + 0x260));
        if (iVar6 != 0) {
          local_240 = (void *)0x0;
          uStack_238 = 0;
          local_230 = 0;
          FUN_1004e313c(auStack_250);
          FUN_1004e313c(auStack_260);
          FUN_1004e313c(auStack_270);
          FUN_1000ee4ec(&local_288,PTR_s__24_144_238_255__101854be0);
          FUN_1000ee4ec(&local_2a0,PTR_s__254_103_96_255__101854be8);
          FUN_1000ee4ec(local_2b8,PTR_s_____101854bf8);
          FUN_1000ee4ec(local_2d0,PTR_s____101854c00);
          FUN_1000ee4ec(local_2e8,PTR_s___101854c08);
          FUN_1000ee590((undefined4)local_1d0,local_1c0,auStack_250,0);
          FUN_1004e34d8(auStack_250,acStack_140,0x20);
          sVar14 = local_280;
          sVar22 = local_298;
          if (bVar20) {
            local_178 = 0;
            local_180 = (undefined8 *******)0x0;
            local_170 = 0;
            if ((char)local_271 < '\0') {
              sVar13 = _strlen(acStack_140);
              pppppppuVar21 = local_288;
              sVar22 = sVar14;
            }
            else {
              pppppppuVar21 = &local_288;
              bVar1 = local_271;
LAB_1000eed44:
              local_170 = 0;
              local_178 = 0;
              local_180 = (undefined8 *******)0x0;
              sVar13 = _strlen(acStack_140);
              sVar22 = (ulong)bVar1;
            }
LAB_1000eed94:
            uVar23 = sVar22 + sVar13;
            if (0xffffffffffffffef < uVar23) goto LAB_1000ef2ec;
            if (uVar23 < 0x17) {
              pppppppuVar15 = &local_180;
              local_170 = CONCAT17((char)sVar22,(undefined7)local_170);
            }
            else {
              uVar23 = uVar23 + 0x10 & 0xfffffffffffffff0;
              pppppppuVar15 = operator_new(uVar23);
              local_170 = uVar23 | 0x8000000000000000;
              local_180 = pppppppuVar15;
              local_178 = sVar22;
            }
            if (sVar22 != 0) {
              _memcpy(pppppppuVar15,pppppppuVar21,sVar22);
            }
            *(undefined1 *)((long)pppppppuVar15 + sVar22) = 0;
            std::string::append((char *)&local_180,(ulong)acStack_140);
            FUN_1000e8b18(&local_160,&local_180,local_2b8);
            pppppppuVar21 = local_160;
            if (-1 < local_149) {
              pppppppuVar21 = &local_160;
            }
            std::string::append((char *)&local_240,(ulong)pppppppuVar21);
            if (local_149 < '\0') {
              operator_delete(local_160);
            }
            uVar23 = param_2 & 0xffffffff;
            if ((long)local_170 < 0) {
              operator_delete(local_180);
            }
          }
          else {
            if ((uVar19 & 1) != 0) {
              local_178 = 0;
              local_180 = (undefined8 *******)0x0;
              local_170 = 0;
              if (-1 < (char)local_289) {
                pppppppuVar21 = &local_2a0;
                bVar1 = local_289;
                goto LAB_1000eed44;
              }
              sVar13 = _strlen(acStack_140);
              pppppppuVar21 = local_2a0;
              goto LAB_1000eed94;
            }
            std::string::append((char *)&local_240);
          }
          if (bVar3) {
            FUN_1004e38ac(auStack_260,"%d");
            FUN_1004e34d8(auStack_260,&local_160,0x20);
            FUN_1000e8b18(&local_330,&local_288,local_2d0);
            sVar22 = local_328;
            local_318 = (undefined8 *******)0x0;
            local_310 = 0;
            local_308 = 0;
            uVar23 = local_320 >> 0x38;
            if ((long)local_320 < 0) {
              sVar14 = _strlen((char *)&local_160);
              pppppppuVar21 = local_330;
            }
            else {
              sVar14 = _strlen((char *)&local_160);
              pppppppuVar21 = &local_330;
              sVar22 = uVar23;
            }
            uVar23 = sVar22 + sVar14;
            if (0xffffffffffffffef < uVar23) goto LAB_1000ef2ec;
            if (uVar23 < 0x17) {
              pppppppuVar15 = &local_318;
              local_308 = CONCAT17((char)sVar22,(undefined7)local_308);
            }
            else {
              uVar23 = uVar23 + 0x10 & 0xfffffffffffffff0;
              pppppppuVar15 = operator_new(uVar23);
              local_308 = uVar23 | 0x8000000000000000;
              local_318 = pppppppuVar15;
              local_310 = sVar22;
            }
            if (sVar22 != 0) {
              _memcpy(pppppppuVar15,pppppppuVar21,sVar22);
            }
            *(undefined1 *)((long)pppppppuVar15 + sVar22) = 0;
            std::string::append((char *)&local_318,(ulong)&local_160);
            FUN_1000e8b18(&local_300,&local_318,local_2e8);
            FUN_1000e8b18(&local_180,&local_300,local_2b8);
            pppppppuVar21 = local_180;
            if (-1 < (long)local_170) {
              pppppppuVar21 = &local_180;
            }
            std::string::append((char *)&local_240,(ulong)pppppppuVar21);
            if ((long)local_170 < 0) {
              operator_delete(local_180);
            }
            uVar23 = param_2 & 0xffffffff;
            if (local_2e9 < '\0') {
              operator_delete(local_300);
            }
            if ((long)local_308 < 0) {
              operator_delete(local_318);
            }
            if ((long)local_320 < 0) {
              operator_delete(local_330);
            }
          }
          if (bVar4 || bVar5) {
            FUN_1004e38ac(auStack_270,"%d");
            FUN_1004e34d8(auStack_270,&local_180,0x20);
            FUN_1000e8b18(&local_348,&local_2a0,local_2d0);
            sVar22 = local_340;
            local_330 = (undefined8 *******)0x0;
            local_328 = 0;
            local_320 = 0;
            if ((char)local_331 < '\0') {
              sVar14 = _strlen((char *)&local_180);
              pppppppuVar21 = local_348;
            }
            else {
              sVar22 = (size_t)local_331;
              sVar14 = _strlen((char *)&local_180);
              pppppppuVar21 = &local_348;
            }
            uVar23 = sVar22 + sVar14;
            if (0xffffffffffffffef < uVar23) {
LAB_1000ef2ec:
                    /* WARNING: Subroutine does not return */
              FUN_1000f303c();
            }
            if (uVar23 < 0x17) {
              pppppppuVar15 = &local_330;
              local_320 = CONCAT17((char)sVar22,(undefined7)local_320);
            }
            else {
              uVar23 = uVar23 + 0x10 & 0xfffffffffffffff0;
              pppppppuVar15 = operator_new(uVar23);
              local_320 = uVar23 | 0x8000000000000000;
              local_330 = pppppppuVar15;
              local_328 = sVar22;
            }
            if (sVar22 != 0) {
              _memcpy(pppppppuVar15,pppppppuVar21,sVar22);
            }
            *(undefined1 *)((long)pppppppuVar15 + sVar22) = 0;
            std::string::append((char *)&local_330,(ulong)&local_180);
            FUN_1000e8b18(&local_318,&local_330,local_2e8);
            FUN_1000e8b18(&local_300,&local_318,local_2b8);
            pppppppuVar21 = local_300;
            if (-1 < local_2e9) {
              pppppppuVar21 = &local_300;
            }
            std::string::append((char *)&local_240,(ulong)pppppppuVar21);
            if (local_2e9 < '\0') {
              operator_delete(local_300);
            }
            uVar23 = param_2 & 0xffffffff;
            if ((long)local_308 < 0) {
              operator_delete(local_318);
            }
            if ((long)local_320 < 0) {
              operator_delete(local_330);
            }
            if ((char)local_331 < '\0') {
              operator_delete(local_348);
            }
          }
          FUN_1004e3170(&local_300,&local_240);
          FUN_1004e3bc4(param_1,0,auStack_198,&local_300);
          if (local_2f8 != (void *)0x0) {
            operator_delete__(local_2f8);
          }
          if (local_2d1 < '\0') {
            operator_delete(local_2e8[0]);
          }
          if (local_2b9 < '\0') {
            operator_delete(local_2d0[0]);
          }
          if (local_2a1 < '\0') {
            operator_delete(local_2b8[0]);
          }
          if ((char)local_289 < '\0') {
            operator_delete(local_2a0);
          }
          if ((char)local_271 < '\0') {
            operator_delete(local_288);
          }
          if (local_268 != (void *)0x0) {
            operator_delete__(local_268);
          }
          if (local_258 != (void *)0x0) {
            operator_delete__(local_258);
          }
          if (local_248 != (void *)0x0) {
            operator_delete__(local_248);
          }
          if (local_230 < 0) {
            operator_delete(local_240);
          }
        }
        if (local_218 != (void *)0x0) {
          operator_delete__(local_218);
        }
        if (local_208 != (void *)0x0) {
          operator_delete__(local_208);
        }
        if (local_1f8 != (void *)0x0) {
          operator_delete__(local_1f8);
        }
        if (local_1e8 != (void *)0x0) {
          operator_delete__(local_1e8);
        }
        if (local_1d8 != (void *)0x0) {
          operator_delete__(local_1d8);
        }
        if (local_1b0 != (void *)0x0) {
          operator_delete__(local_1b0);
        }
        if (local_1a0 != (void *)0x0) {
          operator_delete__(local_1a0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar2 + 1);
    }
    if (local_190 != (void *)0x0) {
      operator_delete__(local_190);
    }
    lVar9 = 0;
    do {
      pvVar16 = *(void **)((long)local_90 + lVar9 + 8);
      if (pvVar16 != (void *)0x0) {
        operator_delete__(pvVar16);
        *(undefined8 *)((long)local_90 + lVar9) = 0;
        *(undefined8 *)((long)local_90 + lVar9 + 8) = 0;
      }
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != -0x80);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000ef2f4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined1 local_25c;
  int local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined5 local_240;
  undefined3 uStack_23b;
  undefined5 uStack_238;
  undefined4 local_230;
  undefined1 auStack_220 [8];
  void *local_218;
  undefined1 auStack_210 [8];
  void *local_208;
  undefined1 auStack_200 [8];
  void *local_1f8;
  undefined4 local_1ec;
  undefined1 auStack_1e8 [128];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [224];
  long local_78 [3];
  
  lVar7 = 0;
  local_78[2] = *(long *)PTR____stack_chk_guard_101444218;
  do {
    FUN_1004e313c(auStack_168 + lVar7);
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x100);
  local_1ec = 0;
  iVar2 = FUN_1004e3a6c(param_1,0,0x5b,0x5d,1,auStack_168,0,&local_1ec);
  lVar7 = 0;
  if (iVar2 != 0) {
    lVar7 = 0;
    puVar8 = auStack_158;
    do {
      if (lVar7 == 0xf) {
        lVar7 = 0x10;
        break;
      }
      uVar4 = FUN_1004e3a6c(param_1,local_1ec,0x5b,0x5d,1,puVar8,0,&local_1ec);
      puVar8 = puVar8 + 0x10;
      lVar7 = lVar7 + 1;
    } while ((uVar4 & 1) != 0);
  }
  FUN_1004e313c(auStack_200);
  FUN_1004e313c(auStack_210);
  if ((int)lVar7 != 0) {
    uVar1 = (int)lVar7 - 1;
    if (0xe < uVar1) {
      uVar1 = 0xf;
    }
    uVar4 = (ulong)(uVar1 + 1);
    puVar8 = auStack_168;
    do {
      FUN_1004e34d8(puVar8,auStack_1e8,0x80);
      lVar7 = FUN_10034c31c(auStack_1e8,param_2,0);
      if (lVar7 == 0) {
        lVar7 = FUN_10034c160(auStack_1e8,param_2);
        if (lVar7 != 0) {
          FUN_1004e3120(auStack_220,"[");
          FUN_1000153b4(auStack_200,auStack_220);
          if (local_218 != (void *)0x0) {
            operator_delete__(local_218);
          }
          FUN_1004e372c(auStack_200,puVar8);
          FUN_1004e3120(auStack_220,"]");
          FUN_1004e372c(auStack_200,auStack_220);
          if (local_218 != (void *)0x0) {
            operator_delete__(local_218);
          }
          local_278 = *(undefined4 *)(lVar7 + 0x10);
          uStack_274 = *(undefined4 *)(lVar7 + 0x18);
          local_270 = *(undefined4 *)(lVar7 + 0x20);
          local_26c = NEON_rev64(*(undefined8 *)(lVar7 + 0x24),4);
          local_264 = *(undefined4 *)(lVar7 + 0x4c);
          uStack_260 = *(undefined4 *)(lVar7 + 0x30);
          local_25c = *(undefined1 *)(lVar7 + 0x34);
          local_258 = (uint)(*(int *)(lVar7 + 0x38) == 0) << 1;
          if (*(int *)(lVar7 + 0x38) == 1) {
            local_258 = 1;
          }
          puVar6 = (undefined8 *)&local_278;
          uVar3 = 1;
          goto LAB_1000ef56c;
        }
      }
      else {
        FUN_1004e3120(auStack_220,"[");
        FUN_1000153b4(auStack_200,auStack_220);
        if (local_218 != (void *)0x0) {
          operator_delete__(local_218);
        }
        FUN_1004e372c(auStack_200,puVar8);
        FUN_1004e3120(auStack_220,"]");
        FUN_1004e372c(auStack_200,auStack_220);
        if (local_218 != (void *)0x0) {
          operator_delete__(local_218);
        }
        uStack_248 = *(undefined8 *)(lVar7 + 0x10);
        local_250 = *(undefined8 *)(lVar7 + 8);
        local_240 = 0;
        uStack_23b = 0;
        uStack_238 = 0;
        uVar3 = *(undefined4 *)(lVar7 + 0x20);
        local_230 = 0;
        puVar6 = &local_250;
LAB_1000ef56c:
        FUN_1000ecf08(uVar3,puVar6,auStack_210);
        FUN_1004e3bc4(param_1,0,auStack_200,auStack_210);
      }
      puVar8 = puVar8 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (local_208 != (void *)0x0) {
    operator_delete__(local_208);
  }
  if (local_1f8 != (void *)0x0) {
    operator_delete__(local_1f8);
  }
  lVar7 = 0;
  do {
    pvVar5 = *(void **)((long)local_78 + lVar7 + 8);
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      *(undefined8 *)((long)local_78 + lVar7) = 0;
      *(undefined8 *)((long)local_78 + lVar7 + 8) = 0;
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x100);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000ef60c(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined5 local_450;
  undefined3 uStack_44b;
  undefined5 uStack_448;
  undefined4 local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined8 local_42c;
  undefined4 local_424;
  undefined4 uStack_420;
  char local_41c;
  int local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined5 local_400;
  undefined3 uStack_3fb;
  undefined5 uStack_3f8;
  undefined4 local_3f0;
  undefined1 auStack_3e8 [8];
  void *local_3e0;
  undefined1 auStack_3d8 [8];
  void *local_3d0;
  undefined1 auStack_3c8 [8];
  void *local_3c0;
  undefined4 local_3b4;
  undefined1 auStack_3b0 [16];
  undefined8 auStack_3a0 [2];
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [784];
  long local_70;
  
  lVar7 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    FUN_1004e313c(auStack_390 + lVar7);
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 800);
  local_3b4 = 0;
  iVar2 = FUN_1004e3a6c(param_1,0,0x5b,0x5d,1,auStack_390,0,&local_3b4);
  lVar7 = 0;
  if (iVar2 != 0) {
    lVar7 = 0;
    puVar8 = auStack_380;
    do {
      if (lVar7 == 0x31) {
        lVar7 = 0x32;
        break;
      }
      uVar3 = FUN_1004e3a6c(param_1,local_3b4,0x5b,0x5d,1,puVar8,0,&local_3b4);
      puVar8 = puVar8 + 0x10;
      lVar7 = lVar7 + 1;
    } while ((uVar3 & 1) != 0);
  }
  FUN_1004e313c(auStack_3c8);
  FUN_1004e313c(auStack_3d8);
  uVar4 = FUN_10034c3f4(param_2);
  if ((int)lVar7 != 0) {
    uVar1 = (int)lVar7 - 1;
    if (0x30 < uVar1) {
      uVar1 = 0x31;
    }
    uVar3 = (ulong)(uVar1 + 1);
    puVar8 = auStack_390;
    do {
      FUN_1004e34d8(puVar8,auStack_3b0,0x20);
      lVar7 = FUN_10034c388(auStack_3b0,param_2,0);
      if (lVar7 == 0) {
        lVar7 = FUN_10034c23c(auStack_3b0,param_2);
        if (lVar7 != 0) {
          FUN_1004e3120(auStack_3e8,"[");
          FUN_1000153b4(auStack_3c8,auStack_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
          }
          FUN_1004e372c(auStack_3c8,puVar8);
          FUN_1004e3120(auStack_3e8,"]");
          FUN_1004e372c(auStack_3c8,auStack_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
          }
          local_438 = *(undefined4 *)(lVar7 + 0x10);
          uStack_434 = *(undefined4 *)(lVar7 + 0x18);
          local_430 = *(undefined4 *)(lVar7 + 0x20);
          local_42c = NEON_rev64(*(undefined8 *)(lVar7 + 0x24),4);
          local_424 = *(undefined4 *)(lVar7 + 0x4c);
          uStack_420 = *(undefined4 *)(lVar7 + 0x30);
          local_41c = *(char *)(lVar7 + 0x34);
          local_418 = (uint)(*(int *)(lVar7 + 0x38) == 0) << 1;
          if (*(int *)(lVar7 + 0x38) == 1) {
            local_418 = 1;
          }
          uVar6 = 1;
          if (local_41c != '\0') {
            uVar6 = 2;
          }
          puVar5 = (undefined8 *)&local_438;
          goto LAB_1000ef898;
        }
        if ((*(char *)(param_2 + 0x60) != '\0') &&
           (lVar7 = FUN_10034c30c(auStack_3b0,uVar4,0), lVar7 != 0)) {
          FUN_1004e3120(auStack_3e8,"[");
          FUN_1000153b4(auStack_3c8,auStack_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
          }
          FUN_1004e372c(auStack_3c8,puVar8);
          FUN_1004e3120(auStack_3e8,"]");
          FUN_1004e372c(auStack_3c8,auStack_3e8);
          if (local_3e0 != (void *)0x0) {
            operator_delete__(local_3e0);
          }
          local_460 = *(undefined4 *)(lVar7 + 8);
          uStack_45c = *(undefined4 *)(lVar7 + 0x20);
          local_458 = *(undefined8 *)(lVar7 + 0x14);
          local_450 = 0;
          uStack_44b = 0;
          uStack_448 = 0;
          uVar6 = *(undefined4 *)(lVar7 + 0x2c);
          local_440 = 0;
          puVar5 = (undefined8 *)&local_460;
          goto LAB_1000ef898;
        }
      }
      else {
        FUN_1004e3120(auStack_3e8,"[");
        FUN_1000153b4(auStack_3c8,auStack_3e8);
        if (local_3e0 != (void *)0x0) {
          operator_delete__(local_3e0);
        }
        FUN_1004e372c(auStack_3c8,puVar8);
        FUN_1004e3120(auStack_3e8,"]");
        FUN_1004e372c(auStack_3c8,auStack_3e8);
        if (local_3e0 != (void *)0x0) {
          operator_delete__(local_3e0);
        }
        uStack_408 = *(undefined8 *)(lVar7 + 0x10);
        local_410 = *(undefined8 *)(lVar7 + 8);
        local_400 = 0;
        uStack_3fb = 0;
        uStack_3f8 = 0;
        uVar6 = *(undefined4 *)(lVar7 + 0x20);
        local_3f0 = 0;
        puVar5 = &local_410;
LAB_1000ef898:
        FUN_1000ecf08(uVar6,puVar5,auStack_3d8);
        FUN_1004e3bc4(param_1,0,auStack_3c8,auStack_3d8);
      }
      puVar8 = puVar8 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (local_3d0 != (void *)0x0) {
    operator_delete__(local_3d0);
  }
  if (local_3c0 != (void *)0x0) {
    operator_delete__(local_3c0);
  }
  lVar7 = 800;
  do {
    if (*(void **)(auStack_390 + lVar7 + -8) != (void *)0x0) {
      operator_delete__(*(void **)(auStack_390 + lVar7 + -8));
      *(undefined8 *)((long)auStack_3a0 + lVar7) = 0;
      *(undefined8 *)(auStack_390 + lVar7 + -8) = 0;
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != 0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000ef9dc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined8 local_400;
  undefined5 local_3f8;
  undefined3 uStack_3f3;
  undefined5 uStack_3f0;
  undefined4 local_3e8;
  undefined1 auStack_3e0 [8];
  void *local_3d8;
  undefined1 auStack_3d0 [8];
  void *local_3c8;
  undefined1 auStack_3c0 [8];
  void *local_3b8;
  undefined4 local_3ac;
  undefined1 auStack_3a8 [16];
  undefined8 auStack_398 [2];
  undefined1 auStack_388 [16];
  undefined1 auStack_378 [784];
  long local_68;
  
  lVar4 = 0;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    FUN_1004e313c(auStack_388 + lVar4);
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 800);
  local_3ac = 0;
  iVar2 = FUN_1004e3a6c(param_1,0,0x5b,0x5d,1,auStack_388,0,&local_3ac);
  lVar4 = 0;
  if (iVar2 != 0) {
    lVar4 = 0;
    puVar5 = auStack_378;
    do {
      if (lVar4 == 0x31) {
        lVar4 = 0x32;
        break;
      }
      uVar3 = FUN_1004e3a6c(param_1,local_3ac,0x5b,0x5d,1,puVar5,0,&local_3ac);
      puVar5 = puVar5 + 0x10;
      lVar4 = lVar4 + 1;
    } while ((uVar3 & 1) != 0);
  }
  FUN_1004e313c(auStack_3c0);
  FUN_1004e313c(auStack_3d0);
  if ((int)lVar4 != 0) {
    uVar1 = (int)lVar4 - 1;
    if (0x30 < uVar1) {
      uVar1 = 0x31;
    }
    uVar3 = (ulong)(uVar1 + 1);
    puVar5 = auStack_388;
    do {
      FUN_1004e34d8(puVar5,auStack_3a8,0x20);
      lVar4 = FUN_10034c314(auStack_3a8,param_2,0);
      if (lVar4 != 0) {
        FUN_1004e3120(auStack_3e0,"[");
        FUN_1000153b4(auStack_3c0,auStack_3e0);
        if (local_3d8 != (void *)0x0) {
          operator_delete__(local_3d8);
        }
        FUN_1004e372c(auStack_3c0,puVar5);
        FUN_1004e3120(auStack_3e0,"]");
        FUN_1004e372c(auStack_3c0,auStack_3e0);
        if (local_3d8 != (void *)0x0) {
          operator_delete__(local_3d8);
        }
        local_408 = *(undefined4 *)(lVar4 + 8);
        uStack_404 = *(undefined4 *)(lVar4 + 0x20);
        local_400 = *(undefined8 *)(lVar4 + 0x14);
        local_3f8 = 0;
        uStack_3f3 = 0;
        uStack_3f0 = 0;
        local_3e8 = 0;
        FUN_1000ecf08(*(undefined4 *)(lVar4 + 0x2c),&local_408,auStack_3d0);
        FUN_1004e3bc4(param_1,0,auStack_3c0,auStack_3d0);
      }
      puVar5 = puVar5 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (local_3c8 != (void *)0x0) {
    operator_delete__(local_3c8);
  }
  if (local_3b8 != (void *)0x0) {
    operator_delete__(local_3b8);
  }
  lVar4 = 800;
  do {
    if (*(void **)(auStack_388 + lVar4 + -8) != (void *)0x0) {
      operator_delete__(*(void **)(auStack_388 + lVar4 + -8));
      *(undefined8 *)((long)auStack_398 + lVar4) = 0;
      *(undefined8 *)(auStack_388 + lVar4 + -8) = 0;
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000efc34(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (param_4 == 1) {
    FUN_1004e3470(param_1,param_3);
    return;
  }
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  FUN_1004e3470(param_1,param_2);
  FUN_1004e3120(auStack_50,"[AMOUNT]");
  FUN_1004e3bc4(param_1,0,auStack_50,auStack_40);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1000efcf0(float param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  switch(param_3) {
  case 1:
    pcVar5 = "%d";
    break;
  case 2:
    if (param_1 < 0.1) {
LAB_1000efe98:
      pcVar5 = "%.2g%%";
    }
    else {
      if (0.01 <= ABS(param_1 * 100.0 - (float)(int)(param_1 * 100.0))) goto LAB_1000eff00;
      pcVar5 = "%d%%";
    }
    break;
  case 3:
    pcVar5 = "%.3g";
    break;
  case 4:
    FUN_1004e38ac(param_2,"%.3g");
    uVar4 = FUN_1004e0150("LABEL_UNITS_SECONDS_ACRONYM",0);
    FUN_1004e372c(param_2,uVar4);
    return;
  case 5:
    if ((0.1 <= param_1 + -1.0) || (param_1 + -1.0 <= -0.1)) {
      if (0.01 <= ABS(param_1 * 100.0 - (float)(int)(param_1 * 100.0))) {
        pcVar5 = "%s%.3g%%";
      }
      else {
LAB_1000efef0:
        pcVar5 = "%s%d%%";
      }
    }
    else {
      pcVar5 = "%s%.2g%%";
    }
    break;
  case 6:
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (param_1 < 0.1) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < -1.0;
        bVar2 = param_1 == -1.0;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) goto LAB_1000efe98;
    if (ABS(param_1 * 100.0 - (float)(int)(param_1 * 100.0)) < 0.01) goto LAB_1000efef0;
LAB_1000eff00:
    pcVar5 = "%.3g%%";
    break;
  default:
    goto switchD_1000efd24_default;
  }
  FUN_1004e38ac(param_2,pcVar5);
switchD_1000efd24_default:
  return;
}




undefined8 * FUN_1000eff40(uint param_1)

{
  undefined8 *puVar1;
  
  if (param_1 < 0x2d) {
    puVar1 = (undefined8 *)
             FUN_1004e0150((&PTR_s_STORE_ITEM_ATTR_HEALTH_MAX_101458630)[(int)param_1],0);
    return puVar1;
  }
  return &DAT_101d91650;
}




undefined8 * FUN_1000eff68(long param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x28) < 0xc9) {
    puVar1 = (undefined8 *)FUN_1000eff84();
    return puVar1;
  }
  return &DAT_101d91650;
}




undefined8 * FUN_1000eff84(undefined4 param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = "STAT_LABEL_ACTIVE_DAMAGE_REDUCTION";
  switch(param_1) {
  case 0:
    pcVar1 = "STAT_LABEL_ATTACK_SPEED";
    break;
  case 1:
    pcVar1 = "STAT_LABEL_ATTACK_SPEED_PER_STACK";
    break;
  case 2:
    pcVar1 = "STAT_LABEL_BONUS_ATTACK_SPEED";
    break;
  case 3:
    pcVar1 = "STAT_LABEL_BONUS_MOVESPEED_DURATION";
    break;
  case 4:
    pcVar1 = "STAT_LABEL_BONUS_MOVESPEED_STRENGTH";
    break;
  case 5:
    pcVar1 = "STAT_LABEL_BONUS_SPEED_DURATION";
    break;
  case 6:
    pcVar1 = "STAT_LABEL_BONUS_ALT_ENERGY";
    break;
  case 7:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER";
    break;
  case 8:
    pcVar1 = "STAT_LABEL_BONUS_WEAPON_POWER";
    break;
  case 9:
    pcVar1 = "STAT_LABEL_BONUS_WEAPON_STRENGTH";
    break;
  case 10:
    pcVar1 = "STAT_LABEL_CRYSTAL_AMP";
    break;
  case 0xb:
    pcVar1 = "STAT_LABEL_WEAPON_AMP";
    break;
  case 0xc:
    pcVar1 = "STAT_LABEL_SPEED";
    break;
  case 0xd:
    pcVar1 = "STAT_LABEL_SPEED_BOOST_PER_STACK";
    break;
  case 0xe:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER";
    break;
  case 0xf:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER_PER_STACK";
    break;
  case 0x10:
    pcVar1 = "STAT_LABEL_WEAPON_POWER";
    break;
  case 0x11:
    pcVar1 = "STAT_LABEL_WEAPON_POWER_PER_STACK";
    break;
  case 0x12:
    pcVar1 = "STAT_LABEL_CRIT_CHANCE";
    break;
  case 0x13:
    pcVar1 = "STAT_LABEL_LIFESTEAL";
    break;
  case 0x14:
    pcVar1 = "STAT_LABEL_BONUS_LIFESTEAL";
    break;
  case 0x15:
    pcVar1 = "STAT_LABEL_LIFESTEAL_PER_STACK";
    break;
  case 0x16:
    pcVar1 = "STAT_LABEL_ARMOR";
    break;
  case 0x17:
    pcVar1 = "STAT_LABEL_ARMOR_PER_STACK";
    break;
  case 0x18:
    pcVar1 = "STAT_LABEL_SHIELD";
    break;
  case 0x19:
    pcVar1 = "STAT_LABEL_SHIELD_PER_STACK";
    break;
  case 0x1a:
    pcVar1 = "STAT_LABEL_PASSIVE_ARMOR";
    break;
  case 0x1b:
    pcVar1 = "STAT_LABEL_PASSIVE_ATTACK_SPEED";
    break;
  case 0x1c:
    pcVar1 = "STAT_LABEL_PASSIVE_PASSIVE_BONUS_ATTACK_RANGE";
    break;
  case 0x1d:
    pcVar1 = "STAT_LABEL_PASSIVE_COOLDOWN_SPEED";
    break;
  case 0x1e:
    pcVar1 = "STAT_LABEL_PASSIVE_CRITICAL_DAMAGE";
    break;
  case 0x1f:
    pcVar1 = "STAT_LABEL_PASSIVE_CRYSTAL_POWER";
    break;
  case 0x20:
    pcVar1 = "STAT_LABEL_PASSIVE_MOVEMENT_SPEED";
    break;
  case 0x21:
    pcVar1 = "STAT_LABEL_PASSIVE_SHIELD";
    break;
  case 0x22:
    pcVar1 = "STAT_LABEL_PASSIVE_WEAPON_POWER";
    break;
  case 0x23:
    pcVar1 = "STAT_LABEL_PERCENT_MAX_HEALTH_PER_SECOND";
    break;
  case 0x24:
    pcVar1 = "STAT_LABEL_PERCENT_HEALTH_COST";
    break;
  case 0x25:
    pcVar1 = "STAT_LABEL_BONUS_CHARGES";
    break;
  case 0x26:
    pcVar1 = "STAT_LABEL_BONUS_DISTANCE";
    break;
  case 0x27:
    pcVar1 = "STAT_LABEL_BONUS_DURATION";
    break;
  case 0x28:
    pcVar1 = "STAT_LABEL_BONUS_PIERCE";
    break;
  case 0x29:
    pcVar1 = "STAT_LABEL_BONUS_RADIUS";
    break;
  case 0x2a:
    pcVar1 = "STAT_LABEL_BONUS_RANGE";
    break;
  case 0x2b:
    pcVar1 = "STAT_LABEL_BONUS_STACKS";
    break;
  case 0x2c:
    pcVar1 = "STAT_LABEL_COOLDOWN";
    break;
  case 0x2d:
    pcVar1 = "STAT_LABEL_COOLDOWN_MODIFIER";
    break;
  case 0x2e:
    pcVar1 = "STAT_LABEL_COOLDOWN_OVERRIDE";
    break;
  case 0x2f:
    pcVar1 = "STAT_LABEL_COOLDOWN_REDUCTION";
    break;
  case 0x30:
    pcVar1 = "STAT_LABEL_CHARGE_TIME";
    break;
  case 0x31:
    pcVar1 = "STAT_LABEL_CHARGES";
    break;
  case 0x32:
    pcVar1 = "STAT_LABEL_DISTANCE";
    break;
  case 0x33:
    pcVar1 = "STAT_LABEL_DISTANCE_MODIFIER";
    break;
  case 0x34:
    pcVar1 = "STAT_LABEL_DURATION";
    break;
  case 0x35:
    pcVar1 = "STAT_LABEL_DURATION_MODIFIER";
    break;
  case 0x36:
    pcVar1 = "STAT_LABEL_ENERGY_COST";
    break;
  case 0x37:
    pcVar1 = "STAT_LABEL_ENERGY_MODIFIER";
    break;
  case 0x38:
    pcVar1 = "STAT_LABEL_RANGE";
    break;
  case 0x39:
    pcVar1 = "STAT_LABEL_RANGE_MODIFIER";
    break;
  case 0x3a:
    pcVar1 = "STAT_LABEL_ANGLE_MODIFIER";
    break;
  case 0x3b:
    pcVar1 = "STAT_LABEL_RADIUS";
    break;
  case 0x3c:
    pcVar1 = "STAT_LABEL_STACKS";
    break;
  case 0x3d:
    pcVar1 = "STAT_LABEL_STACKS_GRANTED";
    break;
  case 0x3e:
    pcVar1 = "STAT_LABEL_FOCUS_COST";
    break;
  case 0x3f:
    pcVar1 = "STAT_LABEL_STAMINA_COST";
    break;
  case 0x40:
    pcVar1 = "STAT_LABEL_BLOODRAGE_GAIN";
    break;
  case 0x41:
    pcVar1 = "STAT_LABEL_BLOODRAGE_COST_PER_SECOND";
    break;
  case 0x42:
    pcVar1 = "STAT_LABEL_TRAP_DURATION";
    break;
  case 0x43:
    pcVar1 = "STAT_LABEL_TRAP_LIMIT";
    break;
  case 0x44:
    pcVar1 = "STAT_LABEL_DURATION_ALLY";
    break;
  case 0x45:
    pcVar1 = "STAT_LABEL_DURATION_SELF";
    break;
  case 0x46:
    pcVar1 = "STAT_LABEL_MAX_STACKS";
    break;
  case 0x47:
    pcVar1 = "STAT_LABEL_SELF_CAST_BONUS";
    break;
  case 0x48:
    pcVar1 = "STAT_LABEL_REVEAL_DURATION";
    break;
  case 0x49:
    pcVar1 = "STAT_LABEL_STEALTH_DURATION";
    break;
  case 0x4a:
    pcVar1 = "STAT_LABEL_TICKS_PER_SECOND";
    break;
  case 0x4b:
    pcVar1 = "STAT_LABEL_SLOW_DURATION";
    break;
  case 0x4c:
    pcVar1 = "STAT_LABEL_SLOW_STRENGTH";
    break;
  case 0x4d:
    pcVar1 = "STAT_LABEL_STUN_DURATION";
    break;
  case 0x4e:
    pcVar1 = "STAT_LABEL_SILENCE_DURATION";
    break;
  case 0x4f:
    pcVar1 = "STAT_LABEL_ROOT_DURATION";
    break;
  case 0x50:
    pcVar1 = "STAT_LABEL_SLEEP_DURATION";
    break;
  case 0x51:
    pcVar1 = "STAT_LABEL_FEAR_DURATION";
    break;
  case 0x52:
    pcVar1 = "STAT_LABEL_SLOW_CENTER";
    break;
  case 0x53:
    pcVar1 = "STAT_LABEL_SLOW_EDGE";
    break;
  case 0x54:
    pcVar1 = "STAT_LABEL_SLOW_DURATION_CENTER";
    break;
  case 0x55:
    pcVar1 = "STAT_LABEL_SLOW_DURATION_EDGE";
    break;
  case 0x56:
    pcVar1 = "STAT_LABEL_BONUS_STUN_DURATION";
    break;
  case 0x57:
    break;
  case 0x58:
    pcVar1 = "STAT_LABEL_PASSIVE_DAMAGE_REDUCTION";
    break;
  case 0x59:
    pcVar1 = "STAT_LABEL_BARRIER";
    break;
  case 0x5a:
    pcVar1 = "STAT_LABEL_BARRIER_DURATION";
    break;
  case 0x5b:
    pcVar1 = "STAT_LABEL_BARRIER_MODIFIER";
    break;
  case 0x5c:
    pcVar1 = "STAT_LABEL_BARRIER_STRENGTH";
    break;
  case 0x5d:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH";
    break;
  case 0x5e:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_DURATION";
    break;
  case 0x5f:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_MODIFIER";
    break;
  case 0x60:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_PER_SECOND";
    break;
  case 0x61:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_PER_STACK";
    break;
  case 0x62:
    pcVar1 = "STAT_LABEL_HEAL";
    break;
  case 99:
    pcVar1 = "STAT_LABEL_HEAL_DURATION";
    break;
  case 100:
    pcVar1 = "STAT_LABEL_HEAL_MODIFIER";
    break;
  case 0x65:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND";
    break;
  case 0x66:
    pcVar1 = "STAT_LABEL_HEAL_PER_STACK";
    break;
  case 0x67:
    pcVar1 = "STAT_LABEL_HEALING_MODIFIER";
    break;
  case 0x68:
    pcVar1 = "STAT_LABEL_HEALING_STRENGTH";
    break;
  case 0x69:
    pcVar1 = "STAT_LABEL_HEAL_PERCENT_MAX_HEALTH";
    break;
  case 0x6a:
    pcVar1 = "STAT_LABEL_HEALTH_REGEN";
    break;
  case 0x6b:
    pcVar1 = "STAT_LABEL_HEAL_PER_HIT_HERO";
    break;
  case 0x6c:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND_HIT_NONMINION";
    break;
  case 0x6d:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND_HIT_MINION";
    break;
  case 0x6e:
    pcVar1 = "STAT_LABEL_DAMAGE";
    break;
  case 0x6f:
    pcVar1 = "STAT_LABEL_AREA_DAMAGE";
    break;
  case 0x70:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_STACK";
    break;
  case 0x71:
    pcVar1 = "STAT_LABEL_IMPACT_DAMAGE";
    break;
  case 0x72:
    pcVar1 = "STAT_LABEL_FINAL_DAMAGE";
    break;
  case 0x73:
    pcVar1 = "STAT_LABEL_MISSING_HEALTH_PERCENT_DAMAGE";
    break;
  case 0x74:
    pcVar1 = "STAT_LABEL_BURST_DAMAGE";
    break;
  case 0x75:
    pcVar1 = "STAT_LABEL_DAMAGE_CENTER";
    break;
  case 0x76:
    pcVar1 = "STAT_LABEL_DAMAGE_EDGE";
    break;
  case 0x77:
    pcVar1 = "STAT_LABEL_MAX_HEALTH_PERCENT_DAMAGE";
    break;
  case 0x78:
    pcVar1 = "STAT_LABEL_EMPOWERED_DAMAGE";
    break;
  case 0x79:
    pcVar1 = "STAT_LABEL_FIRST_HIT_DAMAGE";
    break;
  case 0x7a:
    pcVar1 = "STAT_LABEL_SECOND_HIT_DAMAGE";
    break;
  case 0x7b:
    pcVar1 = "STAT_LABEL_THIRD_HIT_DAMAGE";
    break;
  case 0x7c:
    pcVar1 = "STAT_LABEL_TOTAL_DAMAGE";
    break;
  case 0x7d:
    pcVar1 = "STAT_LABEL_DAMAGE_DURATION";
    break;
  case 0x7e:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_SECOND";
    break;
  case 0x7f:
    pcVar1 = "STAT_LABEL_CRYSTAL_DAMAGE";
    break;
  case 0x80:
    pcVar1 = "STAT_LABEL_WEAPON_DAMAGE";
    break;
  case 0x81:
    pcVar1 = "STAT_LABEL_BASIC_ATTACK_DAMAGE";
    break;
  default:
    return &DAT_101d91650;
  case 0x83:
    pcVar1 = "STAT_LABEL_CRYSTAL_DAMAGE";
    break;
  case 0x84:
    pcVar1 = "STAT_LABEL_BONUS_DAMAGE";
    break;
  case 0x85:
    pcVar1 = "STAT_LABEL_BONUS_DAMAGE_PER_STACK";
    break;
  case 0x86:
    pcVar1 = "STAT_LABEL_DAMAGE_AMP";
    break;
  case 0x87:
    pcVar1 = "STAT_LABEL_DAMAGE_MODIFIER";
    break;
  case 0x88:
    pcVar1 = "STAT_LABEL_DAMAGE_RADIUS";
    break;
  case 0x89:
    pcVar1 = "STAT_LABEL_DAMAGE_REDUCTION_MODIFIER";
    break;
  case 0x8a:
    pcVar1 = "STAT_LABEL_BONUS_REFLECT_DAMAGE";
    break;
  case 0x8b:
    pcVar1 = "STAT_LABEL_CLEAVE_DAMAGE";
    break;
  case 0x8c:
    pcVar1 = "STAT_LABEL_SHIELD_PIERCING";
    break;
  case 0x8d:
    pcVar1 = "STAT_LABEL_ARMOR_PIERCING";
    break;
  case 0x8e:
    pcVar1 = "STAT_LABEL_CAP_NONHEROES";
    break;
  case 0x8f:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_HIT";
    break;
  case 0x90:
    pcVar1 = "STAT_LABEL_PET_DAMAGE";
    break;
  case 0x91:
    pcVar1 = "STAT_LABEL_PET_HEALTH";
    break;
  case 0x92:
    pcVar1 = "STAT_LABEL_PET_DEFENSE";
    break;
  case 0x93:
    pcVar1 = "STAT_LABEL_ADAGIO_B_BURN_BONUS";
    break;
  case 0x94:
    pcVar1 = "STAT_LABEL_ANKA_A_BLINK_DAMAGE";
    break;
  case 0x95:
    pcVar1 = "STAT_LABEL_ANKA_C_INITIAL_DASH_DAMAGE";
    break;
  case 0x96:
    pcVar1 = "STAT_LABEL_ANKA_C_SECONDARY_DASH_DAMAGE";
    break;
  case 0x97:
    pcVar1 = "STAT_LABEL_CELESTE_A_NOVA_DAMAGE";
    break;
  case 0x98:
    pcVar1 = "STAT_LABEL_CELESTE_C_DAMAGE_LEAD";
    break;
  case 0x99:
    pcVar1 = "STAT_LABEL_CELESTE_C_DAMAGE_TAIL";
    break;
  case 0x9a:
    pcVar1 = "STAT_LABEL_CELESTE_C_TAIL_NUMBER";
    break;
  case 0x9b:
    pcVar1 = "STAT_LABEL_KENSEI_A_KENSHO_SLOW_STRENGTH";
    break;
  case 0x9c:
    pcVar1 = "STAT_LABEL_KENSEI_B_KENSHO_STUN_DURATION";
    break;
  case 0x9d:
    pcVar1 = "STAT_LABEL_MAGNUS_SPLIT_DAMAGE";
    break;
  case 0x9e:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_COOLDOWN";
    break;
  case 0x9f:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_DAMAGE";
    break;
  case 0xa0:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_ENERGY_COST";
    break;
  case 0xa1:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_SLOW_STRENGTH";
    break;
  case 0xa2:
    pcVar1 = "STAT_LABEL_OZO_B_BONUS_DAMAGE_PER_BOUNCE";
    break;
  case 0xa3:
    pcVar1 = "STAT_LABEL_PETAL_A_SEED_HEALTH";
    break;
  case 0xa4:
    pcVar1 = "STAT_LABEL_SILVERNAIL_A_TRIPWIRE_DURATION";
    break;
  case 0xa5:
    pcVar1 = "STAT_LABEL_SILVERNAIL_C_PERK_DAMAGE_BONUS";
    break;
  case 0xa6:
    pcVar1 = "STAT_LABEL_SKAARF_B_BURN_DURATION";
    break;
  case 0xa7:
    pcVar1 = "STAT_LABEL_VARYA_A_CHAIN_LIGHTNING_DAMAGE";
    break;
  case 0xa8:
    pcVar1 = "STAT_LABEL_VARYA_C_LIGHTNING_STRIKE_RADIUS";
    break;
  case 0xa9:
    pcVar1 = "STAT_LABEL_VARYA_C_BONUS_CHAIN_LIGHTNING";
    break;
  case 0xaa:
    pcVar1 = "STAT_LABEL_YLVA_A_FULL_CHARGE_TIME";
    break;
  case 0xab:
    pcVar1 = "STAT_LABEL_CAINE_BULLETS_RELOADED";
    break;
  case 0xac:
    pcVar1 = "STAT_LABEL_CAINE_BULLET_COST";
    break;
  case 0xad:
    pcVar1 = "STAT_LABEL_CAINE_EXPLOSION_DAMAGE";
    break;
  case 0xae:
    pcVar1 = "STAT_LABEL_CAINE_EXECUTE_THRESHOLD";
    break;
  case 0xaf:
    pcVar1 = "STAT_LABEL_MAX_HEALTH_TO_BARRIER";
    break;
  case 0xb0:
    pcVar1 = "STAT_LABEL_TALENT_ADAGIO_BONUS_BURN_DAMAGE";
    break;
  case 0xb1:
    pcVar1 = "STAT_LABEL_TALENT_ADAGIO_HEAL_TO_FORTIFIED_RATIO";
    break;
  case 0xb2:
    pcVar1 = "STAT_LABEL_TALENT_ADAGIO_HEAL_HEALTH_RATIO";
    break;
  case 0xb3:
    pcVar1 = "STAT_LABEL_TALENT_ALPHA_HEALTH_FORT_PER_STACK";
    break;
  case 0xb4:
    pcVar1 = "STAT_LABEL_TALENT_BARON_TRIPLE_SHOT_DAMAGE";
    break;
  case 0xb5:
    pcVar1 = "STAT_LABEL_TALENT_CATHERINE_MERCILESS_PURSUIT_REDUCTION";
    break;
  case 0xb6:
    pcVar1 = "STAT_LABEL_TALENT_CATHERINE_BLAST_TREMOR_REDUCTION";
    break;
  case 0xb7:
    pcVar1 = "STAT_LABEL_TALENT_FLICKER_HEALTH_TO_HEALING_RATIO";
    break;
  case 0xb8:
    pcVar1 = "STAT_LABEL_TALENT_FORTRESS_CRIT_CHANCE_PER_WOLF";
    break;
  case 0xb9:
    pcVar1 = "STAT_LABEL_TALENT_FORTRESS_BLEED_DAMAGE";
    break;
  case 0xba:
    pcVar1 = "STAT_LABEL_TALENT_GRUMPJAW_SWIPE_TO_CHARGE_DAMAGE";
    break;
  case 0xbb:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_ABILITY_DAMAGE_MODIFIER";
    break;
  case 0xbc:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_POUNCY_FUN_REDUCTION";
    break;
  case 0xbd:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_TWIRLY_DEATH_REDUCTION";
    break;
  case 0xbe:
    pcVar1 = "STAT_LABEL_TALENT_KOSHKA_YUMMY_CATNIP_FRENZY_REDUCTION";
    break;
  case 0xbf:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_LONG_ROLL_BASIC_ATTACK_TO_ROLL_DAMAGE";
    break;
  case 0xc0:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_IMPALE_DAMAGE_MODIFIER";
    break;
  case 0xc1:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_IMPALE_REDUCTION";
    break;
  case 0xc2:
    pcVar1 = "STAT_LABEL_TALENT_LANCE_COMBAT_ROLL_REDUCTION";
    break;
  case 0xc3:
    pcVar1 = "STAT_LABEL_TALENT_PHINN_CURRENT_HEALTH_REGEN";
    break;
  case 0xc4:
    pcVar1 = "STAT_LABEL_TALENT_REIM_IMPACT_TO_TRAVEL_DAMAGE";
    break;
  case 0xc5:
    pcVar1 = "STAT_LABEL_TALENT_RINGO_BOUNCE_RANGE";
    break;
  case 0xc6:
    pcVar1 = "STAT_LABEL_TALENT_RONA_INTO_THE_FRAY_REDUCTION";
    break;
  case 199:
    pcVar1 = "STAT_LABEL_TALENT_SKAARF_SPITFIRE_DAMAGE_MODIFIER";
    break;
  case 200:
    pcVar1 = "STAT_LABEL_TALENT_SKAARF_GOOP_DAMAGE_MODIFIER";
  }
  puVar2 = (undefined8 *)FUN_1004e0150(pcVar1,0);
  return puVar2;
}




void thunk_FUN_1000eb120(void)

{
  FUN_1000eb120();
  return;
}

