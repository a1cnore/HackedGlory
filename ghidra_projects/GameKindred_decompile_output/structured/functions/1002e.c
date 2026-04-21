// functions/1002e — 377 functions
#include "GameKindred.h"




void thunk_FUN_1002e905c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  undefined8 uStack_28;
  
  FUN_100198d1c(param_1 + 0x230,param_4,param_2,param_5,param_3);
  uStack_28 = param_4;
  FUN_1002afbbc(param_1 + 0x150,&uStack_28);
  return;
}




void FUN_1002e0324(long *param_1,string *param_2,undefined8 param_3,string *param_4,int param_5)

{
  uint uVar1;
  undefined1 auStack_50 [8];
  void *local_48;
  
  std::string::operator=((string *)(param_1 + 0x4e0),param_2);
  std::string::operator=((string *)(param_1 + 0x4e3),param_4);
  std::string::operator=((string *)(param_1 + 0x4e9),param_2);
  *(undefined1 *)(param_1 + 0x4ed) = 1;
  uVar1 = 4;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb | uVar1;
  FUN_100652dd4(param_1 + 0xd5,&DAT_101d236c0,2);
  FUN_1004e3170(auStack_50,param_4);
  FUN_1006513c0(param_1 + 0x14f,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_1002dff1c(param_1);
  FUN_1004e3170(auStack_50,param_3);
  FUN_1001d0b14(param_1 + 0x349,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002e0448(long *param_1,undefined8 param_2,string *param_3,int param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  std::string::operator=((string *)(param_1 + 0x4e0),param_3);
  FUN_1004e357c(param_2,param_1 + 0x4e3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  *(uint *)((long)param_1 + 0xc2c) = *(uint *)((long)param_1 + 0xc2c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_1006513c0(param_1 + 0x14f,param_2);
  puVar1 = &DAT_101d236b8;
  if (param_4 == 0) {
    puVar1 = &DAT_10115a168;
  }
  FUN_100651460(param_1 + 0x14f,puVar1);
  lVar2 = FUN_1002e3208(param_1 + 0x4c9,1);
  FUN_1000153b4(lVar2 + 0x1858,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001002e051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002e0520(long *param_1,undefined8 param_2,string *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  
  std::string::operator=((string *)(param_1 + 0x4e0),param_3);
  FUN_1004e357c(param_2,param_1 + 0x4e3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  FUN_1002dff1c(param_1);
  *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_1006513c0(param_1 + 0x14f,param_2);
  puVar1 = &DAT_101d236b8;
  if (param_8 == 0) {
    puVar1 = &DAT_10115a168;
  }
  FUN_100651460(param_1 + 0x14f,puVar1);
  FUN_100194b7c(param_1 + 0x1aa,param_4);
  FUN_1001d0b14(param_1 + 0x349,param_6);
  lVar2 = FUN_1002e327c(param_1 + 0x4c9,1);
  std::string::operator=((string *)(lVar2 + 0x1858),param_3);
                    /* WARNING: Could not recover jumptable at 0x0001002e0628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002e062c(long *param_1,undefined8 param_2,string *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined8 param_13,undefined4 *param_14,string *param_15)

{
  long *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  std::string::operator=((string *)(param_1 + 0x4e0),param_3);
  FUN_1004e357c(param_2,param_1 + 0x4e3);
  FUN_1004e357c(param_5,param_1 + 0x4e6);
  FUN_1004e357c(param_7,param_1 + 0x4e9);
  FUN_1002dff1c(param_1);
  uVar2 = 4;
  if (param_11._4_1_ == '\0') {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb | uVar2;
  switch(param_8) {
  case 0:
    uVar2 = *(uint *)((long)param_1 + 0xafc);
    if ((uVar2 & 0x7f80) == 0x5900) {
      puVar3 = &DAT_101d236bc;
    }
    else {
      *(uint *)((long)param_1 + 0xafc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
      puVar3 = &DAT_101d236bc;
LAB_1002e07e8:
      FUN_1000200a0(param_1 + 0x14f);
    }
    break;
  case 1:
    if ((~*(uint *)((long)param_1 + 0xafc) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xafc) = *(uint *)((long)param_1 + 0xafc) | 0x7f80;
      puVar3 = &DAT_101d236c0;
      goto LAB_1002e07e8;
    }
    puVar3 = &DAT_101d236c0;
    break;
  case 2:
    if ((~*(uint *)((long)param_1 + 0xafc) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xafc) = *(uint *)((long)param_1 + 0xafc) | 0x7f80;
      puVar3 = &DAT_101d236c4;
      goto LAB_1002e07e8;
    }
    puVar3 = &DAT_101d236c4;
    break;
  case 3:
  case 4:
    if ((~*(uint *)((long)param_1 + 0xafc) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xafc) = *(uint *)((long)param_1 + 0xafc) | 0x7f80;
      puVar3 = &DAT_101d236c8;
      goto LAB_1002e07e8;
    }
    puVar3 = &DAT_101d236c8;
    break;
  default:
    goto switchD_1002e0720_default;
  }
  FUN_100652dd4(param_1 + 0xd5,puVar3,2);
switchD_1002e0720_default:
  FUN_1001c8080(param_1 + 0xf3,(undefined4)param_9);
  FUN_1006513c0(param_1 + 0x14f,param_2);
  puVar3 = &DAT_101d236b8;
  if (param_10._4_1_ == '\0') {
    puVar3 = &DAT_10115a168;
  }
  FUN_100651460(param_1 + 0x14f,puVar3);
  FUN_100194b7c(param_1 + 0x1aa,param_4);
  FUN_1001d0b14(param_1 + 0x349,param_6);
  plVar1 = (long *)FUN_1002e32f0(param_1 + 0x4c9,1);
  (**(code **)(*plVar1 + 0x90))();
  *(undefined4 *)(plVar1 + 0x185) = param_9._4_4_;
  FUN_1001c6fd8(plVar1 + 0x54,param_9._4_4_);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  *(undefined4 *)((long)plVar1 + 0xc2c) = (undefined4)param_10;
  FUN_1001c6fd8(plVar1 + 0x10b,(undefined4)param_10);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  *(undefined4 *)(param_1 + 0x4ec) = param_8;
  *(undefined4 *)((long)param_1 + 0x2764) = (undefined4)param_11;
  *(undefined4 *)((long)param_1 + 0x276c) = param_12;
  FUN_100111b3c(param_1 + 0x4ee,param_13);
  *(undefined4 *)(param_1 + 0x4f0) = *param_14;
  std::string::operator=((string *)(param_1 + 0x4f1),param_15);
                    /* WARNING: Could not recover jumptable at 0x0001002e091c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




long * FUN_1002e0920(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  *puVar13 = &PTR_thunk_FUN_1002e30a4_101489b58;
  puVar13[0x18] = &PTR_FUN_101489cb0;
  puVar1 = puVar13 + 0x1a;
  FUN_10064e264(puVar1);
  plVar15 = param_1 + 0x31;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x4f;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x66;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x7d;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x9b;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x1e4;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x32d;
  thunk_FUN_1002eca3c(plVar7,0);
  plVar8 = param_1 + 0x476;
  thunk_FUN_1001d9da8(plVar8);
  thunk_FUN_1005357f4(param_1 + 0x5f3);
  thunk_FUN_10020a5c4(param_1 + 0x738);
  plVar9 = param_1 + 0x74d;
  FUN_10064e264(plVar9);
  plVar10 = param_1 + 0x764;
  thunk_FUN_100652c08();
  thunk_FUN_1001ceb64(param_1 + 0x782,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(puVar1,plVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1[0x739],1);
  FUN_100642bd8(plVar2,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x782,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_101158af1,2);
  uVar11 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002e10fc;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x9c,&local_a0);
  FUN_1002eb970(plVar5,1);
  FUN_1002ecc7c(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar5,1);
  FUN_1002ebe0c(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar5,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1002ecce4(plVar5,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar5);
  FUN_1002ebef4(plVar5,0xffa0837d);
  local_78 = uVar11;
  local_a0 = FUN_1002e1114;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1e5,&local_a0);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebe0c(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar6,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1002ecce4(plVar6,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar6);
  FUN_1002ebef4(plVar6,0xffa0837d);
  local_78 = uVar11;
  local_a0 = FUN_1002e112c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x32e,&local_a0);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar7,1);
  FUN_1002ebe0c(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar7,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_1002ecce4(plVar7,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar7);
  FUN_1002ebef4(plVar7,0xffa0837d);
  FUN_1001da0ec(plVar8,puVar13 + 0x18);
  FUN_1001da294(plVar8,0x56261d1d);
  FUN_1001da2c0(plVar8,0xff261d1d);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar15,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 1;
  uVar12 = *(uint *)((long)param_1 + 0x20c);
  if ((uVar12 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x20c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
    FUN_1000200a0(plVar15);
  }
  local_a0 = (code *)((ulong)local_a0 & 0xffffffffffff0000);
  FUN_10064e5b8(plVar9,&local_a0);
  FUN_10064e4dc(plVar9,0);
  *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffffffef;
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x3ba4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffff807f;
    FUN_1000200a0(plVar10);
  }
  local_78 = DAT_101dbd484;
  local_a0 = thunk_FUN_1002e2948;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x765,&local_a0);
  local_78 = DAT_101dbd4c0;
  local_a0 = FUN_1002e1148;
  plVar15 = param_1 + 1;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&local_a0);
  local_78 = DAT_101dbd4bc;
  local_a0 = thunk_FUN_1002e2948;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&local_a0);
  local_78 = FUN_100644a94("UI::MENU_SOCIAL_CLEAR_TARGET");
  local_a0 = FUN_1002e1154;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&local_a0);
  uVar12 = *(uint *)((long)param_1 + 0x2fc);
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xffff807f;
    FUN_1000200a0(plVar2);
    uVar12 = *(uint *)((long)param_1 + 0x2fc);
  }
  *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xfffffffb;
  plVar15 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar5,0,10);
  (**(code **)(*plVar15 + 0x70))(plVar15,0x14);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar6,0,10);
  (**(code **)(*plVar15 + 0x78))(plVar15,0x14,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar7,0,0x12);
  FUN_10064a8b0(plVar15,0x28,0x14,0x28,0x14);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(puVar1,plVar15);
  uVar12 = FUN_10064e4e4(plVar3);
  FUN_10064e47c((float)uVar12,0,puVar1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar3,0,0x12);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar8,1,2);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(plVar2,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,param_1[0x739],1,2);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar9,0,2);
  return param_1;
}




void FUN_1002e10fc(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e110c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_1002e1114(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e1124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    return;
  }
  return;
}




void FUN_1002e112c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
    return;
  }
  return;
}




void thunk_FUN_1002e2948(void)

{
  FUN_1002e2948();
  return;
}




void FUN_1002e1148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002e29d8(param_1,param_4);
  return;
}




void thunk_FUN_1002e2948(void)

{
  FUN_1002e2948();
  return;
}




void FUN_1002e1154(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  FUN_1002e159c(param_1,0);
  return;
}




long * thunk_FUN_1002e0920(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  *puVar13 = &PTR_thunk_FUN_1002e30a4_101489b58;
  puVar13[0x18] = &PTR_FUN_101489cb0;
  puVar1 = puVar13 + 0x1a;
  FUN_10064e264(puVar1);
  plVar15 = param_1 + 0x31;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x4f;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x66;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x7d;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x9b;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x1e4;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x32d;
  thunk_FUN_1002eca3c(plVar7,0);
  plVar8 = param_1 + 0x476;
  thunk_FUN_1001d9da8(plVar8);
  thunk_FUN_1005357f4(param_1 + 0x5f3);
  thunk_FUN_10020a5c4(param_1 + 0x738);
  plVar9 = param_1 + 0x74d;
  FUN_10064e264(plVar9);
  plVar10 = param_1 + 0x764;
  thunk_FUN_100652c08();
  thunk_FUN_1001ceb64(param_1 + 0x782,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(puVar1,plVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1[0x739],1);
  FUN_100642bd8(plVar2,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x782,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_101158af1,2);
  uVar11 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1002e10fc;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x9c,&pcStack_a0);
  FUN_1002eb970(plVar5,1);
  FUN_1002ecc7c(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar5,1);
  FUN_1002ebe0c(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar5,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1002ecce4(plVar5,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar5);
  FUN_1002ebef4(plVar5,0xffa0837d);
  uStack_78 = uVar11;
  pcStack_a0 = FUN_1002e1114;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1e5,&pcStack_a0);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebe0c(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar6,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1002ecce4(plVar6,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar6);
  FUN_1002ebef4(plVar6,0xffa0837d);
  uStack_78 = uVar11;
  pcStack_a0 = FUN_1002e112c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x32e,&pcStack_a0);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar7,1);
  FUN_1002ebe0c(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar7,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_1002ecce4(plVar7,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar7);
  FUN_1002ebef4(plVar7,0xffa0837d);
  FUN_1001da0ec(plVar8,puVar13 + 0x18);
  FUN_1001da294(plVar8,0x56261d1d);
  FUN_1001da2c0(plVar8,0xff261d1d);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar15,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 1;
  uVar12 = *(uint *)((long)param_1 + 0x20c);
  if ((uVar12 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x20c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
    FUN_1000200a0(plVar15);
  }
  pcStack_a0 = (code *)((ulong)pcStack_a0 & 0xffffffffffff0000);
  FUN_10064e5b8(plVar9,&pcStack_a0);
  FUN_10064e4dc(plVar9,0);
  *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffffffef;
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x3ba4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffff807f;
    FUN_1000200a0(plVar10);
  }
  uStack_78 = DAT_101dbd484;
  pcStack_a0 = thunk_FUN_1002e2948;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x765,&pcStack_a0);
  uStack_78 = DAT_101dbd4c0;
  pcStack_a0 = FUN_1002e1148;
  plVar15 = param_1 + 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&pcStack_a0);
  uStack_78 = DAT_101dbd4bc;
  pcStack_a0 = thunk_FUN_1002e2948;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&pcStack_a0);
  uStack_78 = FUN_100644a94("UI::MENU_SOCIAL_CLEAR_TARGET");
  pcStack_a0 = FUN_1002e1154;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&pcStack_a0);
  uVar12 = *(uint *)((long)param_1 + 0x2fc);
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xffff807f;
    FUN_1000200a0(plVar2);
    uVar12 = *(uint *)((long)param_1 + 0x2fc);
  }
  *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xfffffffb;
  plVar15 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar5,0,10);
  (**(code **)(*plVar15 + 0x70))(plVar15,0x14);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar6,0,10);
  (**(code **)(*plVar15 + 0x78))(plVar15,0x14,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar7,0,0x12);
  FUN_10064a8b0(plVar15,0x28,0x14,0x28,0x14);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(puVar1,plVar15);
  uVar12 = FUN_10064e4e4(plVar3);
  FUN_10064e47c((float)uVar12,0,puVar1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar3,0,0x12);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar8,1,2);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(plVar2,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,param_1[0x739],1,2);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar9,0,2);
  return param_1;
}




void FUN_1002e118c(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  FUN_10064e328();
  plVar1 = param_3 + 0x1a;
  uVar3 = FUN_10064e3cc(plVar1);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(uVar3,param_2,plVar1);
  iVar2 = FUN_10012709c();
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if (iVar2 == 0) {
    fVar5 = (float)FUN_10064e3cc(plVar1);
    fVar4 = fVar4 - fVar5;
  }
  else {
    fVar4 = fVar4 * 0.4;
  }
  FUN_10064e47c(fVar4,param_2,param_3 + 0x4f);
  FUN_10064e47c(0x42700000,param_2,param_3 + 0x31);
  return;
}




void FUN_1002e1254(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  
  FUN_10064e32c();
  plVar1 = param_3 + 0x1a;
  FUN_10064e72c(0,plVar1,3,param_3,3);
  if ((*(byte *)((long)param_3 + 0x2fc) >> 2 & 1) != 0) {
    FUN_10064e72c(0,param_3 + 0x4f,3,plVar1,1);
  }
  local_38 = FUN_10064e3cc(param_3 + 0x66);
  uStack_34 = param_2;
  FUN_10064e48c(param_3 + 0x7d,&local_38);
  uVar2 = 0;
  FUN_10064e5ec(0,param_3 + 0x7d,8,param_3 + 0x66,8);
  FUN_10064e72c(0,param_3 + 0x31,1,plVar1,1);
  local_38 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_34 = uVar2;
  FUN_10064e48c(param_3 + 0x764,&local_38);
  return;
}




void FUN_1002e133c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 ***local_48;
  undefined8 uStack_40;
  long local_38;
  
  pvVar4 = operator_new(0x598);
  lVar5 = thunk_FUN_1001d8c20();
  *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 0x20;
  FUN_1001d95f8(lVar5,param_2);
  FUN_1001d9600(pvVar4,0xffa0837d);
  FUN_1001d9644(pvVar4,0xa33f2b2a);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1004e357c(param_3,&local_48);
  ppppuVar1 = (undefined8 ****)local_48;
  if (-1 < local_38) {
    ppppuVar1 = &local_48;
  }
  uVar2 = FUN_1004d2524(ppppuVar1);
  uVar3 = FUN_100015208(ppppuVar1,uVar2,0x1234);
  *(uint *)((long)pvVar4 + 0x84) =
       *(uint *)((long)pvVar4 + 0x84) & 0x80000000 |
       *(uint *)((long)pvVar4 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  FUN_1001da11c(param_1 + 0x23b0,pvVar4);
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_1002e1420(long param_1)

{
  FUN_1001da20c(param_1 + 0x23b0);
  return;
}




void FUN_1002e142c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1001da20c(param_1 + 0x23b0);
  if (lVar1 != 0) {
    FUN_1001d9578();
    return;
  }
  return;
}




void FUN_1002e1454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_1001da20c(param_1 + 0x23b0);
  if (lVar1 != 0) {
    FUN_1001d95f8(lVar1,param_3);
    return;
  }
  return;
}




void FUN_1002e1490(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1004d2524("OFFLINE_FRIENDS");
  iVar2 = FUN_100015208("OFFLINE_FRIENDS",uVar1,0x1234);
  if ((uint)(*(int *)(param_2 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 == 0) {
    FUN_100111808(*(char *)(param_2 + 0x590) == '\0');
    return;
  }
  return;
}




void thunk_FUN_1002e1490(void)

{
  FUN_1002e1490();
  return;
}




void FUN_1002e14fc(long param_1,long param_2)

{
  int iVar1;
  
  FUN_1002e159c(param_1,1);
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),param_2 + 0x2700,param_2 + 0x2718,param_2 + 0x2730,
             param_2 + 0x2748,*(undefined1 *)(param_2 + 0x2768));
  iVar1 = *(int *)(param_2 + 0x2760);
  if (iVar1 == 2) {
    FUN_1002e17ec(param_1,param_2,0);
    iVar1 = *(int *)(param_2 + 0x2760);
  }
  if (iVar1 == 3) {
    FUN_1002e207c(param_1,param_2,0);
    return;
  }
  return;
}




void FUN_1002e159c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  lVar2 = DAT_101dbd2f8;
  if (((*(byte *)(param_1 + 0x2fc) >> 2 & 1) != 0) && ((int)param_2 != 0)) {
    return;
  }
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f050(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f090(puVar4,param_2);
  uVar1 = 0x3f800000;
  if ((int)param_2 == 0) {
    uVar1 = 0;
  }
  FUN_100640840(uVar1,0x3e4ccccd,0);
  lVar2 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063fb5c(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f130(puVar5,FUN_10001f160);
  FUN_10063f0e8(0x3e4ccccd,puVar5);
  FUN_10063fb9c(0,0,puVar5,param_1 + 0x278,0,param_1 + 0xd0,param_2);
  lVar2 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f1bc(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar5,puVar4);
  FUN_100642b14(param_1 + 0x278,puVar5);
  return;
}




void FUN_1002e17ec(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined1 auStack_1d8 [4];
  float local_1d4;
  undefined1 auStack_1d0 [8];
  void *local_1c8;
  undefined4 local_1c0;
  float local_1bc;
  void *local_1b8;
  undefined1 auStack_1b0 [8];
  void *local_1a8;
  void *local_1a0;
  void *local_198;
  undefined7 local_190;
  char cStack_189;
  char local_179;
  undefined4 local_178;
  undefined8 local_174;
  undefined1 auStack_168 [8];
  void *local_160;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined **local_138;
  undefined1 auStack_130 [16];
  long local_120;
  code *pcStack_118;
  long local_108;
  undefined8 local_e8;
  void *local_e0;
  void *local_d8;
  char local_c1;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  
  if (*(int *)(param_2 + 0x276c) == 0x41) {
    return;
  }
  thunk_FUN_1001cd434(&local_138);
  puVar6 = &DAT_101d91650;
  thunk_FUN_1004e439c(auStack_148,&DAT_101d91650);
  pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_GUILD";
  switch(*(undefined4 *)(param_2 + 0x2780)) {
  case 0:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_SOLO";
    break;
  case 1:
    break;
  case 2:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM";
    break;
  case 3:
    goto switchD_1002e1870_caseD_3;
  default:
    goto switchD_1002e1870_default;
  }
  puVar6 = (undefined8 *)FUN_1004e0150(pcVar5,0);
switchD_1002e1870_caseD_3:
  FUN_1000153b4(auStack_148,puVar6);
switchD_1002e1870_default:
  FUN_1004e313c(auStack_158);
  uVar1 = *(uint *)(param_2 + 0x276c);
  if ((uVar1 < 0x34) && ((0xc6affd9ff9fffU >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    uVar7 = FUN_1004e0150((&PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_101489cd0)[(int)uVar1],0);
    FUN_1000153b4(auStack_158,uVar7);
  }
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TYPE",0);
  thunk_FUN_1004e439c(auStack_168,uVar7);
  FUN_1004e3120(&local_1a0,"[PARTY_TYPE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_148);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e3120(&local_1a0,"[GAME_QUEUE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_158);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  thunk_FUN_1004e439c(&local_1a0,auStack_168);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 0;
  local_174 = 0xc120000041000000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x2764);
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TIME",0);
  FUN_1000f1e20(auStack_1b0,uVar7,uVar2,0);
  thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 1;
  local_174 = 0x41f0000042200000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
    local_1a0 = (void *)0x0;
    local_198 = (void *)0x0;
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 2;
  local_174 = 0x41f00000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e313c(auStack_1b0);
  plVar8 = (long *)(param_2 + 0x2788);
  if (*(char *)(param_2 + 0x279f) < '\0') {
    if (*(int *)(param_2 + 0x2790) == 0) goto LAB_1002e1b04;
    plVar8 = (long *)*plVar8;
  }
  else if (*(char *)(param_2 + 0x279f) == '\0') goto LAB_1002e1b04;
  lVar10 = FUN_10034be08(plVar8);
  uVar7 = FUN_1004e0150(*(undefined8 *)(lVar10 + 0x18),0);
  FUN_1000153b4(auStack_1b0,uVar7);
LAB_1002e1b04:
  iVar4 = FUN_1004e36c0(auStack_1b0,&DAT_101d91650);
  if (iVar4 == 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_HERO_SELECT",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    pvVar3 = local_1b8;
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      pvVar3 = local_1b8;
    }
  }
  else {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PLAYING_TITLE",0);
    thunk_FUN_1004e439c(&local_1a0,uVar7);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    pvVar3 = local_198;
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
      pvVar3 = local_198;
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  if (*(int *)(param_2 + 0x2770) != 0) {
    thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 2;
    local_174 = 0x41f00000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar1 = *(uint *)(param_2 + 0x2770);
    if (uVar1 != 0) {
      lVar10 = 0;
      do {
        thunk_FUN_1004e439c(auStack_1d0,*(long *)(param_2 + 0x2778) + lVar10);
        FUN_1004e3170(&local_1a0,param_2 + 0x2718);
        uVar9 = FUN_1004e3654(auStack_1d0,&local_1a0);
        if (local_198 != (void *)0x0) {
          operator_delete__(local_198);
        }
        if ((uVar9 & 1) == 0) {
          thunk_FUN_1004e439c(&local_1a0,auStack_1d0);
          FUN_10003330c(&local_190,&DAT_101d91198);
          local_178 = 1;
          local_174 = 0x41f0000041000000;
          FUN_10003c048(auStack_130,&local_1a0);
          if (local_179 < '\0') {
            operator_delete((void *)CONCAT17(cStack_189,local_190));
          }
          if (local_198 != (void *)0x0) {
            operator_delete__(local_198);
          }
        }
        if (local_1c8 != (void *)0x0) {
          operator_delete__(local_1c8);
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar10 != 0);
    }
    FUN_1004e3170(auStack_1d0,param_2 + 0x2718);
    thunk_FUN_1004e439c(&local_1a0,auStack_1d0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    if (local_1c8 != (void *)0x0) {
      operator_delete__(local_1c8);
    }
    if (local_1b8 != (void *)0x0) {
      operator_delete__(local_1b8);
    }
  }
  FUN_10001549c(&local_1a0,"friendInMatchInformation");
  std::string::append((char *)&local_1a0);
  local_90 = 3;
  local_108 = param_2;
  iVar4 = FUN_100126c88();
  local_a4 = 0x44160000;
  if (iVar4 == 0) {
    local_a4 = 0x44100000;
  }
  iVar4 = FUN_1001311dc();
  if (iVar4 != 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_SPECTATE",0);
    FUN_1000153b4(&local_e8,uVar7);
    pcStack_118 = FUN_1002e29d4;
    local_120 = param_1;
  }
  uVar7 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar7,auStack_1d0,&local_1d4,auStack_1d8);
  lVar10 = FUN_10003d5bc(param_2);
  fVar11 = *(float *)(lVar10 + 0xc);
  lVar10 = FUN_10003d5bc(param_1);
  fVar11 = (fVar11 / *(float *)(lVar10 + 0x14) - local_1d4) + 358.0;
  if (0.0 < fVar11) {
    uVar7 = FUN_10001f0d8();
    FUN_10063f0e8(0x3dcccccd);
    local_1bc = -fVar11;
    local_1c0 = 0;
    FUN_10063f984(uVar7,&local_1c0);
  }
  local_94 = 0;
  lVar10 = FUN_10003d5bc(param_1);
  local_98 = *(float *)(lVar10 + 0x14) * (local_1d4 + -280.0);
  local_a8 = 0x3e051eb8;
  if (param_3 == 0) {
    FUN_1001cefb8(param_1 + 0x3c10,&local_1a0,&local_138);
  }
  else {
    FUN_1001cf098();
  }
  if (cStack_189 < '\0') {
    operator_delete(local_1a0);
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  local_138 = &PTR_FUN_1014666e0;
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_130,1);
  return;
}




void FUN_1002e207c(long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_18c [4];
  float local_188;
  undefined1 auStack_184 [4];
  undefined4 local_180;
  float local_17c;
  void *local_178;
  void *local_170;
  void *local_168;
  undefined7 local_160;
  char cStack_159;
  char local_149;
  undefined4 local_148;
  undefined8 local_144;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *local_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  
  thunk_FUN_1001cd434(&local_128);
  uVar3 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
  thunk_FUN_1004e439c(auStack_138,uVar3);
  thunk_FUN_1004e439c(&local_170,auStack_138);
  FUN_10003330c(&local_160,&DAT_101d91198);
  local_148 = 0;
  local_144 = 0xc120000041000000;
  FUN_10003c048(auStack_120,&local_170);
  if (local_149 < '\0') {
    operator_delete((void *)CONCAT17(cStack_159,local_160));
  }
  if (local_168 != (void *)0x0) {
    operator_delete__(local_168);
  }
  uVar1 = *(uint *)(param_2 + 0x2770);
  if (uVar1 != 0) {
    lVar5 = 0;
    do {
      thunk_FUN_1004e439c(&local_180,*(long *)(param_2 + 0x2778) + lVar5);
      FUN_1004e3170(&local_170,param_2 + 0x2718);
      uVar4 = FUN_1004e3654(&local_180,&local_170);
      if (local_168 != (void *)0x0) {
        operator_delete__(local_168);
      }
      if ((uVar4 & 1) == 0) {
        thunk_FUN_1004e439c(&local_170,&local_180);
        FUN_10003330c(&local_160,&DAT_101d91198);
        local_148 = 1;
        local_144 = 0x41f0000041000000;
        FUN_10003c048(auStack_120,&local_170);
        if (local_149 < '\0') {
          operator_delete((void *)CONCAT17(cStack_159,local_160));
        }
        if (local_168 != (void *)0x0) {
          operator_delete__(local_168);
        }
      }
      if (local_178 != (void *)0x0) {
        operator_delete__(local_178);
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar5 != 0);
    FUN_1004e3170(&local_180,param_2 + 0x2718);
    thunk_FUN_1004e439c(&local_170,&local_180);
    FUN_10003330c(&local_160,&DAT_101d91198);
    local_148 = 1;
    local_144 = 0x41f0000041000000;
    FUN_10003c048(auStack_120,&local_170);
    if (local_149 < '\0') {
      operator_delete((void *)CONCAT17(cStack_159,local_160));
    }
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    if (local_178 != (void *)0x0) {
      operator_delete__(local_178);
    }
  }
  FUN_10001549c(&local_170,"friendInMatchInformation");
  std::string::append((char *)&local_170);
  local_80 = 3;
  local_f8 = param_2;
  iVar2 = FUN_100126c88();
  local_94 = 0x44160000;
  if (iVar2 == 0) {
    local_94 = 0x44100000;
  }
  iVar2 = FUN_1001311dc();
  if (iVar2 != 0) {
    uVar3 = FUN_1004e0150("MENU_FRIENDS_SPECTATE",0);
    FUN_1000153b4(&local_d8,uVar3);
    local_108 = FUN_1002e29d4;
    local_110 = param_1;
  }
  uVar3 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar3,auStack_184,&local_188,auStack_18c);
  lVar5 = FUN_10003d5bc(param_2);
  fVar6 = *(float *)(lVar5 + 0xc);
  lVar5 = FUN_10003d5bc(param_1);
  fVar6 = (fVar6 / *(float *)(lVar5 + 0x14) - local_188) + 358.0;
  if (0.0 < fVar6) {
    uVar3 = FUN_10001f0d8();
    FUN_10063f0e8(0x3dcccccd);
    local_17c = -fVar6;
    local_180 = 0;
    FUN_10063f984(uVar3,&local_180);
  }
  local_84 = 0;
  lVar5 = FUN_10003d5bc(param_1);
  local_88 = *(float *)(lVar5 + 0x14) * (local_188 + -280.0);
  local_98 = 0x3e051eb8;
  if (param_3 == 0) {
    FUN_1001cefb8(param_1 + 0x3c10,&local_170,&local_128);
  }
  else {
    FUN_1001cf098();
  }
  if (cStack_159 < '\0') {
    operator_delete(local_170);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_128 = &PTR_FUN_1014666e0;
  if (local_b1 < '\0') {
    operator_delete(local_c8);
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_120,1);
  return;
}




void FUN_1002e245c(long param_1)

{
  FUN_1002e14fc(param_1 + -0xc0);
  return;
}




void * FUN_1002e2464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = FUN_1001da20c(param_1 + 0x23b0,"GUILD");
  pvVar2 = (void *)0x0;
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x27a0);
    lVar3 = FUN_1002df328();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x20;
    FUN_1002dfdfc(lVar3,param_2,param_3,param_4,param_5);
    FUN_1001d9424(lVar1,pvVar2);
  }
  return pvVar2;
}




void * FUN_1002e24f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = FUN_1001da20c(param_1 + 0x23b0,"TEAM");
  pvVar2 = (void *)0x0;
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x27a0);
    lVar3 = FUN_1002df328();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x20;
    FUN_1002e0324(lVar3,param_2,param_3,param_4,param_5);
    FUN_1001d9424(lVar1,pvVar2);
  }
  return pvVar2;
}




void FUN_1002e258c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = FUN_1001da20c(param_1 + 0x23b0,"REQUESTS");
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x27a0);
    lVar3 = FUN_1002df328();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x20;
    FUN_1002e0520(lVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_1001d9424(lVar1,pvVar2);
    return;
  }
  return;
}




void FUN_1002e2640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = FUN_1001da20c(param_1 + 0x23b0,"RECENTS");
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x27a0);
    lVar3 = FUN_1002df328();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x20;
    FUN_1002e0448(lVar3,param_2,param_3,param_4);
    FUN_1001d9424(lVar1,pvVar2);
    return;
  }
  return;
}




void * FUN_1002e26d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined4 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  
  param_1 = param_1 + 0x23b0;
  if ((int)param_8 == 0) {
    lVar1 = FUN_1001da20c(param_1,"OFFLINE_FRIENDS");
    if (lVar1 == 0) {
      return (void *)0x0;
    }
    pvVar2 = operator_new(0x27a0);
    lVar3 = FUN_1002df328();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x20;
    param_8 = 0;
  }
  else if (param_10._6_1_ == '\0') {
    if (param_10._5_1_ == '\0') {
      pcVar4 = "ONLINE_FRIENDS";
    }
    else {
      pcVar4 = "GUILD";
    }
    lVar1 = FUN_1001da20c(param_1,pcVar4);
    if (lVar1 == 0) {
      return (void *)0x0;
    }
    pvVar2 = operator_new(0x27a0);
    lVar3 = FUN_1002df328();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x20;
  }
  else {
    lVar1 = FUN_1001da20c(param_1,"TEAM");
    if (lVar1 == 0) {
      return (void *)0x0;
    }
    pvVar2 = operator_new(0x27a0);
    lVar3 = FUN_1002df328();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x20;
  }
  FUN_1002e062c(lVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                (undefined4)param_10,param_11,param_12,param_13,param_14,param_15);
  FUN_1001d9424(lVar1,pvVar2);
  return pvVar2;
}




void FUN_1002e2948(long *param_1)

{
  uint uVar1;
  
  FUN_1002de238(param_1[0x739]);
  FUN_10064e4dc(param_1 + 0x74d,0);
  FUN_10064e47c(0,0,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x3ba4);
  *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffff806f;
    FUN_1000200a0(param_1 + 0x764);
    return;
  }
  return;
}




void FUN_1002e29d4(void)

{
  return;
}




void FUN_1002e29d8(long *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float local_48;
  undefined1 auStack_44 [4];
  
  FUN_100641464(auStack_44,&local_48);
  fVar2 = local_48;
  fVar1 = (float)FUN_100644b2c(param_2);
  FUN_10064e4dc(param_1 + 0x74d,(ulong)(uint)(int)(fVar2 * fVar1) << 0x20);
  fVar2 = (float)FUN_100644b2c(param_2);
  FUN_10064e47c(0,local_48 * fVar2,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar3 = *(uint *)((long)param_1 + 0x3ba4);
  if ((uVar3 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar3 & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0x764);
    uVar3 = *(uint *)((long)param_1 + 0x3ba4);
  }
  *(uint *)((long)param_1 + 0x3ba4) = uVar3 | 0x10;
  return;
}




void FUN_1002e2ab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101489630;
  if ((void *)param_1[0x30c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x30c]);
    param_1[0x30c] = 0;
    param_1[0x30b] = 0;
  }
  FUN_1001acc08(param_1 + 0x191);
  FUN_1001acc08(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e2b04(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101489630;
  if ((void *)param_1[0x30c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x30c]);
    param_1[0x30c] = 0;
    param_1[0x30b] = 0;
  }
  FUN_1001acc08(param_1 + 0x191);
  FUN_1001acc08(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002e2b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101489778;
  if (*(char *)((long)param_1 + 0x186f) < '\0') {
    operator_delete((void *)param_1[0x30b]);
  }
  FUN_1001acc08(param_1 + 0x191);
  FUN_1001acc08(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e2bb4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101489778;
  if (*(char *)((long)param_1 + 0x186f) < '\0') {
    operator_delete((void *)param_1[0x30b]);
  }
  FUN_1001acc08(param_1 + 0x191);
  FUN_1001acc08(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002e2c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014898c0;
  FUN_10017d364(param_1 + 0x10b);
  thunk_FUN_100651068(param_1 + 0xe5);
  thunk_FUN_10064e2bc(param_1 + 0xce);
  FUN_10017d364(param_1 + 0x54);
  thunk_FUN_100651068(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e2c70(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014898c0;
  FUN_10017d364(param_1 + 0x10b);
  thunk_FUN_100651068(param_1 + 0xe5);
  thunk_FUN_10064e2bc(param_1 + 0xce);
  FUN_10017d364(param_1 + 0x54);
  thunk_FUN_100651068(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002e2d24(void)

{
  FUN_1002e2d24();
  return;
}




void FUN_1002e2cd8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e2d24();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002e30a4(void)

{
  FUN_1002e30a4();
  return;
}




void FUN_1002e2cf0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e30a4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e2d04(long param_1)

{
  FUN_1002e30a4(param_1 + -0xc0);
  return;
}




void FUN_1002e2d0c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e30a4(param_1 + -0xc0);
  operator_delete(pvVar1);
  return;
}




void FUN_1002e2d24(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002e2d24_101489a08;
  if (*(char *)((long)param_1 + 0x279f) < '\0') {
    operator_delete((void *)param_1[0x4f1]);
  }
  FUN_10010b1a8(param_1 + 0x4ee,1);
  if (*(char *)((long)param_1 + 0x275f) < '\0') {
    operator_delete((void *)param_1[0x4e9]);
  }
  if (*(char *)((long)param_1 + 0x2747) < '\0') {
    operator_delete((void *)param_1[0x4e6]);
  }
  if (*(char *)((long)param_1 + 0x272f) < '\0') {
    operator_delete((void *)param_1[0x4e3]);
  }
  if (*(char *)((long)param_1 + 0x2717) < '\0') {
    operator_delete((void *)param_1[0x4e0]);
  }
  thunk_FUN_10064e2bc(param_1 + 0x4c9);
  param_1[0x349] = &PTR_FUN_1014623b0;
  param_1[0x4a9] = &PTR_FUN_1014a7108;
  param_1[0x4c0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4c3);
  FUN_10064e2bc(param_1 + 0x4a9);
  param_1[0x48b] = &PTR_FUN_1014a7108;
  param_1[0x4a2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4a5);
  FUN_10064e2bc(param_1 + 0x48b);
  FUN_100191808(param_1 + 0x420);
  FUN_100191808(param_1 + 0x3b5);
  thunk_FUN_100651068(param_1 + 0x38f);
  param_1[0x371] = &PTR_FUN_1014a7108;
  param_1[0x388] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x38b);
  FUN_10064e2bc(param_1 + 0x371);
  FUN_10064221c(param_1 + 0x360);
  FUN_10064e2bc(param_1 + 0x349);
  param_1[0x32b] = &PTR_FUN_1014a7108;
  param_1[0x342] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x345);
  FUN_10064e2bc(param_1 + 0x32b);
  param_1[0x1aa] = &PTR_FUN_101460ab8;
  param_1[0x30a] = &PTR_FUN_1014a7108;
  param_1[0x321] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x324);
  FUN_10064e2bc(param_1 + 0x30a);
  param_1[0x2ec] = &PTR_FUN_1014a7108;
  param_1[0x303] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x306);
  FUN_10064e2bc(param_1 + 0x2ec);
  FUN_100191808(param_1 + 0x281);
  FUN_100191808(param_1 + 0x216);
  thunk_FUN_100651068(param_1 + 0x1f0);
  param_1[0x1d2] = &PTR_FUN_1014a7108;
  param_1[0x1e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ec);
  FUN_10064e2bc(param_1 + 0x1d2);
  FUN_10064221c(param_1 + 0x1c1);
  FUN_10064e2bc(param_1 + 0x1aa);
  param_1[0x18c] = &PTR_FUN_1014a7108;
  param_1[0x1a3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a6);
  FUN_10064e2bc(param_1 + 0x18c);
  thunk_FUN_10064e2bc(param_1 + 0x175);
  thunk_FUN_100651068(param_1 + 0x14f);
  param_1[0xf3] = &PTR_FUN_101462268;
  thunk_FUN_100651068(param_1 + 0x128);
  param_1[0x10a] = &PTR_FUN_1014a7108;
  param_1[0x121] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x124);
  FUN_10064e2bc(param_1 + 0x10a);
  FUN_10064e2bc(param_1 + 0xf3);
  param_1[0xd5] = &PTR_FUN_1014a7108;
  param_1[0xec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xef);
  FUN_10064e2bc(param_1 + 0xd5);
  thunk_FUN_10064e2bc(param_1 + 0xbe);
  thunk_FUN_10064e2bc(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  thunk_FUN_10064e2bc(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_1014a7108;
  param_1[0x4d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_1001d8ab0(param_1);
  return;
}




void FUN_1002e30a4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002e30a4_101489b58;
  param_1[0x18] = &PTR_FUN_101489cb0;
  thunk_FUN_1001cec4c(param_1 + 0x782);
  param_1[0x764] = &PTR_FUN_1014a7108;
  param_1[0x77b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x77e);
  FUN_10064e2bc(param_1 + 0x764);
  thunk_FUN_10064e2bc(param_1 + 0x74d);
  thunk_FUN_10020a6ac(param_1 + 0x738);
  thunk_FUN_100534a3c(param_1 + 0x5f3);
  thunk_FUN_1001d9e70(param_1 + 0x476);
  param_1[0x32d] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x44e);
  FUN_1002ebc50(param_1 + 0x32d);
  param_1[0x1e4] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x305);
  FUN_1002ebc50(param_1 + 0x1e4);
  param_1[0x9b] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x1bc);
  FUN_1002ebc50(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_1014a7108;
  param_1[0x94] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x97);
  FUN_10064e2bc(param_1 + 0x7d);
  thunk_FUN_10064e2bc(param_1 + 0x66);
  thunk_FUN_10064e2bc(param_1 + 0x4f);
  param_1[0x31] = &PTR_FUN_1014a7108;
  param_1[0x48] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x31);
  thunk_FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void * FUN_1002e3208(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1868);
  lVar2 = FUN_1002deaac();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_1002e327c(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1870);
  lVar2 = FUN_1002ded38();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_1002e32f0(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xc30);
  lVar2 = FUN_1002defc4();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




long * FUN_1002e3364(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_thunk_FUN_1002e34d8_101489e80;
  FUN_1001aa1d4(puVar3 + 0x19);
  plVar1 = param_1 + 0x55;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x73;
  thunk_FUN_100650e64(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x19,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_12_10184e210);
  uVar4 = FUN_1004e0150("MENU_SPOILS_END_OF_REWARDS_PROMPT",0);
  FUN_1006513c0(plVar2,uVar4);
  FUN_100652cac(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50,"ringbg");
  if ((*(uint *)((long)param_1 + 0x32c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  local_38 = FUN_100644a94("SPOILSOFWAR::PULSE_RING");
  local_60 = thunk_FUN_1002e3844;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  return param_1;
}




void thunk_FUN_1002e3844(void)

{
  FUN_1002e3844();
  return;
}




long * thunk_FUN_1002e3364(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_thunk_FUN_1002e34d8_101489e80;
  FUN_1001aa1d4(puVar3 + 0x19);
  plVar1 = param_1 + 0x55;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x73;
  thunk_FUN_100650e64(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x19,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_12_10184e210);
  uVar4 = FUN_1004e0150("MENU_SPOILS_END_OF_REWARDS_PROMPT",0);
  FUN_1006513c0(plVar2,uVar4);
  FUN_100652cac(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50,"ringbg");
  if ((*(uint *)((long)param_1 + 0x32c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  uStack_38 = FUN_100644a94("SPOILSOFWAR::PULSE_RING");
  pcStack_60 = thunk_FUN_1002e3844;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  return param_1;
}




void FUN_1002e34d8(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1002e34d8_101489e80;
  if (param_1[0x18] != 0) {
    iVar1 = FUN_100642d08();
    if (iVar1 != 0) {
      FUN_1006423ec(param_1[0x18],1);
    }
    if ((long *)param_1[0x18] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x18] + 8))();
    }
    param_1[0x18] = 0;
  }
  uVar2 = FUN_100644a94("SPOILSOFWAR::PULSE_RING");
  FUN_1002e3598(param_1,uVar2,thunk_FUN_1002e3844,param_1);
  thunk_FUN_100651068(param_1 + 0x73);
  param_1[0x55] = &PTR_FUN_1014a7108;
  param_1[0x6c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6f);
  FUN_10064e2bc(param_1 + 0x55);
  thunk_FUN_1001aa23c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e3598(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




void thunk_FUN_1002e34d8(void)

{
  FUN_1002e34d8();
  return;
}




void FUN_1002e35f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e34d8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e3604(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *local_38;
  
  if (param_1[0x18] == 0) {
    if ((*(uint *)((long)param_1 + 0x14c) >> 2 & 1) == 0) {
      plVar1 = param_1 + 0x19;
      *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 4;
      FUN_1001aa38c(0,0,plVar1,"Effect_Spoils_Ring","build://Effects/Menu/Spoils/Ring/Ring.pfx",4);
      local_38 = &DAT_3f0000003f000000;
      (**(code **)(param_1[0x19] + 0x28))(plVar1,&local_38);
      FUN_10064e47c(0x441b0000,0x441b0000,plVar1);
      if ((*(float *)(param_1 + 0x22) != 1.3) || (*(float *)((long)param_1 + 0x114) != 1.3)) {
        param_1[0x22] = 0x3fa666663fa66666;
        FUN_1000200a0(plVar1);
      }
      FUN_1001aae30(plVar1,"Effect_Spoils_Ring");
      uVar3 = *(uint *)((long)param_1 + 0x32c);
      if ((uVar3 & 0x7f80) != 0) {
        *(uint *)((long)param_1 + 0x32c) = uVar3 & 0xffff807f;
        FUN_1000200a0(param_1 + 0x55);
        uVar3 = *(uint *)((long)param_1 + 0x32c);
      }
      *(uint *)((long)param_1 + 0x32c) = uVar3 | 4;
      uVar2 = FUN_100640840(0x3f800000,0x3f800000,FUN_10001f4c4);
      FUN_100642b14(param_1 + 0x55,uVar2);
    }
  }
  else {
    FUN_1006423ec(param_1[0x18],1);
    if ((long *)param_1[0x18] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x18] + 8))();
    }
  }
  param_1[0x18] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_1002e3788(param_1);
  FUN_1002e3844(param_1);
  return;
}




void FUN_1002e3788(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  
  lVar1 = param_3[0x18];
  if (lVar1 != 0) {
    local_28 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_24 = param_2;
    FUN_10064e48c(lVar1,&local_28);
    FUN_10064e5ec(0,0,param_3[0x18],8,param_3,8);
  }
  FUN_10064e5ec(0,0,param_3 + 0x73,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x55,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x19,8,param_3,8);
  return;
}




void FUN_1002e3844(long param_1)

{
  if ((*(byte *)(param_1 + 0x14c) >> 2 & 1) == 0) {
    return;
  }
  FUN_1001aafc0(param_1 + 200,"Effect_Spoils_Ring");
  FUN_1001aae30(param_1 + 200,"Effect_Spoils_Ring");
  return;
}




void FUN_1002e3890(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e38a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x158))();
    return;
  }
  return;
}




void FUN_1002e38a8(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e38b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x168))();
    return;
  }
  return;
}




void FUN_1002e38c0(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_1002fd1bc();
    return;
  }
  return;
}




void FUN_1002e38d0(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e38e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x170))();
    return;
  }
  return;
}




void FUN_1002e38e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  
  if ((*(byte *)(param_1 + 0x14c) >> 2 & 1) == 0) {
    return;
  }
  lVar1 = param_1 + 200;
  FUN_1001aa720(lVar1);
  FUN_1001aa38c(0,0,lVar1,"Effect_Spoils_Ring_Fade",
                "build://Effects/Menu/Spoils/Ring_Fade/Ring_Fade.pfx",4);
  FUN_1001aae30(lVar1,"Effect_Spoils_Ring_Fade");
  lVar1 = param_1 + 0x398;
  uVar5 = *(uint *)(param_1 + 0x41c);
  if ((uVar5 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x41c) = uVar5 & 0xffff807f;
    FUN_1000200a0(lVar1);
    uVar5 = *(uint *)(param_1 + 0x41c);
  }
  *(uint *)(param_1 + 0x41c) = uVar5 & 0xfffffffb;
  uVar3 = FUN_100640840(0x3f3d70a4,0x3f800000,FUN_10001f4c4);
  FUN_100642b14(lVar1,uVar3);
  uVar3 = FUN_100640840(0x3eae147b,0x3f800000,FUN_10001f4c4);
  FUN_100642b14(param_1 + 0x2a8,uVar3);
  uVar3 = FUN_100640840(0x3f666666,0x3f000000,FUN_1000d05c0);
  FUN_100640840(0x3f0ccccd,0x3f000000,FUN_1000d05c0);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f564(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f614(puVar6,uVar3);
  FUN_10063f664(puVar6);
  FUN_100642b14(lVar1,puVar6);
  return;
}




void thunk_FUN_1002e3788(void)

{
  FUN_1002e3788();
  return;
}




void FUN_1002e3ac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_1002e3ae8_101489fc8;
  puVar1[0x19] = 0;
  return;
}




void FUN_1002e3ae8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  
  *param_1 = &PTR_thunk_FUN_1002e3ae8_101489fc8;
  puVar5 = (uint *)(param_1 + 0x18);
  uVar3 = (ulong)*puVar5;
  if (*puVar5 != 0) {
    uVar6 = 0;
    do {
      if (*(long *)(param_1[0x19] + uVar6 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(param_1[0x19] + uVar6 * 8),1);
        }
        lVar4 = param_1[0x19];
        plVar2 = *(long **)(lVar4 + uVar6 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar4 = param_1[0x19];
        }
        *(undefined8 *)(lVar4 + uVar6 * 8) = 0;
        uVar3 = (ulong)*puVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002e3ae8(void)

{
  FUN_1002e3ae8();
  return;
}




void FUN_1002e3b94(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e3ae8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e3ba8(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  FUN_1002e3ce0();
  uVar1 = *(uint *)(param_1 + 0xc0);
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 200) + uVar6 * 8);
      *(uint *)((long)plVar5 + 0x84) = *(uint *)((long)plVar5 + 0x84) | 4;
      lVar2 = plVar5[8];
      fVar8 = *(float *)((long)plVar5 + 0x44);
      fVar7 = (float)(**(code **)(*plVar5 + 0x48))(plVar5);
      bVar3 = false;
      if ((*(float *)(plVar5 + 8) == -fVar7) &&
         (bVar3 = false, !NAN(*(float *)((long)plVar5 + 0x44)) && !NAN(fVar8))) {
        bVar3 = *(float *)((long)plVar5 + 0x44) == fVar8;
      }
      if (!bVar3) {
        *(float *)(plVar5 + 8) = -fVar7;
        *(float *)((long)plVar5 + 0x44) = fVar8;
        FUN_1000200a0(plVar5);
      }
      fVar7 = (float)(int)uVar6 * 0.12;
      uVar4 = FUN_10064081c(fVar7);
      FUN_100642b14(*(undefined8 *)(*(long *)(param_1 + 200) + uVar6 * 8),uVar4);
      uVar4 = FUN_1006408f4((int)lVar2,fVar8,0x3ecccccd,FUN_1002e3db8);
      FUN_100642b14(*(undefined8 *)(*(long *)(param_1 + 200) + uVar6 * 8),uVar4);
      FUN_100302650(fVar7,0x3e75c290,0x3e23d70b,
                    *(undefined8 *)(*(long *)(param_1 + 200) + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}




void FUN_1002e3ce0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1[0x19] + uVar5 * 8);
      uVar2 = FUN_1002e3e48(uVar3);
      if ((uVar2 & 1) == 0) {
        uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_10064e47c(uVar6,0x43520000,uVar3);
        if (uVar5 == 0) {
          FUN_10064e5ec(0,0,uVar3,6,param_1,6);
        }
        else {
          uVar4 = *(undefined8 *)(param_1[0x19] + (ulong)((int)uVar5 - 1) * 8);
          FUN_10064e72c(0xc1400000,uVar3,2,uVar4,0);
          FUN_10064e72c(0,uVar3,4,uVar4,4);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}




float FUN_1002e3db8(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return param_2 + param_3 * ((fVar1 * 2.20158 + 1.20158) * fVar1 * fVar1 + 1.0);
}




undefined8 FUN_1002e3dec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_1002e3e48(*(undefined8 *)(*(long *)(param_1 + 200) + uVar3 * 8));
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc0));
  }
  uVar2 = FUN_100642bc8(param_1);
  return uVar2;
}




undefined8 FUN_1002e3e48(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100642bc8();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0xb8), (uVar1 & 1) == 0)) {
    uVar2 = FUN_100642bc8(param_1 + 0x2f8);
    return uVar2;
  }
  return 1;
}




void FUN_1002e3e8c(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  long local_38;
  
  local_38 = param_2;
  auVar1 = (**(code **)(*param_1 + 0x48))();
  FUN_10064e47c(auVar1,0x43520000,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_100210bc4(param_1 + 0x18,&local_38);
  *(uint *)(local_38 + 0x84) = *(uint *)(local_38 + 0x84) & 0xfffffffb;
  FUN_1002e3ce0(param_1);
  return;
}




void thunk_FUN_1002e3ce0(void)

{
  FUN_1002e3ce0();
  return;
}




long * FUN_1002e3f20(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_thunk_FUN_1002e3ff4_10148a110;
  *(undefined4 *)(puVar2 + 0x18) = 0x42480000;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  FUN_10064e264(puVar2 + 0x1b);
  plVar1 = param_1 + 0x32;
  thunk_FUN_100652c08(plVar1);
  param_1[0x51] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x1b,1);
  FUN_100652cac(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50,"iconbg");
  if ((~*(uint *)((long)param_1 + 0x214) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x214) = *(uint *)((long)param_1 + 0x214) | 0x7f80;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




long * thunk_FUN_1002e3f20(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_thunk_FUN_1002e3ff4_10148a110;
  *(undefined4 *)(puVar2 + 0x18) = 0x42480000;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  FUN_10064e264(puVar2 + 0x1b);
  plVar1 = param_1 + 0x32;
  thunk_FUN_100652c08(plVar1);
  param_1[0x51] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x1b,1);
  FUN_100652cac(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50,"iconbg");
  if ((~*(uint *)((long)param_1 + 0x214) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x214) = *(uint *)((long)param_1 + 0x214) | 0x7f80;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_1002e3ff4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  
  *param_1 = &PTR_thunk_FUN_1002e3ff4_10148a110;
  puVar5 = (uint *)(param_1 + 0x19);
  if (*puVar5 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x1a];
      if (*(long *)(lVar3 + uVar4 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(param_1[0x1a] + uVar4 * 8),1);
        }
        lVar3 = param_1[0x1a];
        plVar2 = *(long **)(lVar3 + uVar4 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar3 = param_1[0x1a];
        }
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar5);
  }
  param_1[0x32] = &PTR_FUN_1014a7108;
  param_1[0x49] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x32);
  thunk_FUN_10064e2bc(param_1 + 0x1b);
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1a]);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[0x1a] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002e3ff4(void)

{
  FUN_1002e3ff4();
  return;
}




void FUN_1002e40d4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e3ff4();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002e40ec(void)

{
  FUN_1002e40ec();
  return;
}




void FUN_1002e40ec(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_58;
  float fStack_54;
  
  fVar7 = (float)(**(code **)(*param_3 + 0x48))();
  if ((fVar7 != 0.0) && ((**(code **)(*param_3 + 0x48))(param_3), param_2 != 0.0)) {
    local_58 = (**(code **)(*param_3 + 0x48))(param_3);
    fStack_54 = param_2;
    FUN_10064e48c(param_3 + 0x32,&local_58);
    uVar2 = *(uint *)(param_3 + 0x19);
    plVar1 = param_3 + 0x1b;
    fVar7 = (float)(int)param_3[0x51];
    if (fVar7 <= 1.0) {
      fVar7 = 1.0;
    }
    fVar8 = (float)((int)param_3[0x51] + -1);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar3 = *(float *)(param_3 + 0x18) * fVar8;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar8 = fVar8 - *(float *)((long)param_3 + 0x28c);
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    FUN_10064e47c(fVar7 * 300.0 + fVar3,fVar8,plVar1);
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        uVar4 = *(undefined8 *)(param_3[0x1a] + uVar6 * 8);
        if (uVar6 == 0) {
          FUN_10064e5ec(0,*(float *)((long)param_3 + 0x28c) * -0.5,uVar4,7,plVar1,7);
        }
        else {
          uVar5 = *(undefined8 *)(param_3[0x1a] + (ulong)((int)uVar6 - 1) * 8);
          FUN_10064e72c((int)param_3[0x18],uVar4,3,uVar5,1);
          FUN_10064e72c(0,uVar4,5,uVar5,5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  }
  return;
}




void FUN_1002e4278(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x280) = param_1;
  *(undefined4 *)(param_3 + 0x284) = param_2;
  return;
}




void FUN_1002e4284(long param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float local_38;
  float fStack_34;
  
  fVar2 = *(float *)(param_1 + 0xc0) + 300.0;
  fVar1 = (float)param_2 * fVar2;
  FUN_10064e3cc(param_1 + 0xd8);
  fStack_34 = fVar2 * 0.5;
  local_38 = fVar1 + 150.0;
  FUN_10064ef9c(&local_38,param_1 + 0xd8);
  return;
}




void FUN_1002e42f0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *local_38;
  
  local_38 = param_3;
  FUN_100642bd8(param_2 + 0x1b,param_3,1);
  FUN_1002e4384(param_2 + 0x19,&local_38);
  plVar1 = local_38;
  (**(code **)(*param_2 + 0x48))(param_2);
  FUN_10064e47c(0x43960000,plVar1);
  FUN_1002e40ec(param_2);
  (**(code **)(*local_38 + 0x148))
            ((int)param_2[0x50],*(undefined4 *)((long)param_2 + 0x284),param_1);
  return;
}




void FUN_1002e4384(uint *param_1,undefined8 *param_2)

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
    FUN_1002e48a8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_1002e4404(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 200);
  if (*(uint *)(param_1 + 200) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xd0) + uVar3 * 8) != 0) {
        uVar2 = FUN_100642bc8();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (ulong)*(uint *)(param_1 + 200);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = FUN_100642bc8(param_1);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar1 = FUN_100642bc8(param_1 + 0xd8);
  return uVar1;
}




void FUN_1002e4470(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 200);
  if (*(uint *)(param_1 + 200) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xd0) + uVar2 * 8) != 0) {
        FUN_1003035d0();
        uVar1 = (ulong)*(uint *)(param_1 + 200);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_1002e44b8(undefined1 param_1 [16],long param_2)

{
  undefined8 uVar1;
  
  if (0.0 < param_1._0_4_) {
    uVar1 = FUN_100640840(0,param_1._0_8_,FUN_10001f160);
    FUN_100642b14(param_2 + 400,uVar1);
    return;
  }
  *(uint *)(param_2 + 0x214) = *(uint *)(param_2 + 0x214) & 0xfffffffb;
  return;
}




bool FUN_1002e4510(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x168) < *(int *)(param_2 + 0x168);
}




void FUN_1002e4524(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_90 [2];
  void *local_88;
  float local_80;
  float local_7c;
  code *local_78;
  
  FUN_10064142c(&local_7c,&local_80);
  FUN_1002e4924(local_90,param_3 + 200);
  local_78 = FUN_1002e4510;
  FUN_1002e497c(local_88,(void *)((long)local_88 + (ulong)local_90[0] * 8),&local_78);
  fVar1 = local_80;
  fVar5 = (float)FUN_10064efd0(&DAT_101dc1cb8,param_3 + 0xd8);
  if (local_90[0] != 0) {
    uVar4 = 0;
    do {
      fVar8 = 6.2831855;
      plVar3 = *(long **)((long)local_88 + uVar4 * 8);
      fVar6 = (float)___sincosf_stret(((1.0 / (float)local_90[0]) * (float)(int)uVar4 + -0.25) *
                                      6.2831855);
      fVar9 = fVar8;
      fVar7 = (float)(**(code **)(*plVar3 + 0x48))(plVar3);
      uVar2 = FUN_10064081c((float)(int)uVar4 * 0.05);
      FUN_100642b14(plVar3,uVar2);
      uVar2 = FUN_1006408f4(fVar5 + fVar1 * 0.33333334 * fVar8 + (local_7c - fVar7) * 0.5,
                            param_2 + fVar1 * 0.33333334 * fVar6 + (local_80 - fVar9) * 0.5,param_1,
                            FUN_10001f4c4);
      FUN_100642b14(plVar3,uVar2);
      uVar4 = uVar4 + 1;
    } while (local_90[0] != uVar4);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return;
}




void FUN_1002e46cc(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  ushort *puVar4;
  ushort uVar5;
  long *plVar6;
  ushort *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(int *)(param_3 + 200) != 0) {
    uVar8 = 0;
    do {
      fVar11 = (float)param_2;
      plVar6 = *(long **)(*(long *)(param_3 + 0xd0) + uVar8 * 8);
      if (plVar6 != (long *)0x0) {
        fVar9 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
        fVar12 = fVar11;
        fVar10 = (float)FUN_10064efd0(plVar6 + 0x2c,plVar6[4]);
        uVar3 = FUN_10064081c((float)(int)uVar8 * 0.05);
        FUN_100642b14(plVar6,uVar3);
        puVar4 = (ushort *)FUN_100640840(0,param_1,FUN_10001fc6c);
        fVar13 = *(float *)((long)plVar6 + 0x164);
        param_2 = (ulong)(uint)fVar13;
        bVar2 = false;
        if ((*(float *)(plVar6 + 0x2c) == (float)DAT_101dc1cb8) &&
           (bVar2 = false, !NAN(fVar13) && !NAN(DAT_101dc1cb8._4_4_))) {
          bVar2 = fVar13 == DAT_101dc1cb8._4_4_;
        }
        if (!bVar2) {
          param_2 = (ulong)(uint)(fVar12 - fVar11 * 0.5);
          FUN_1006408f4(fVar10 - fVar9 * 0.5,param_2,param_1,FUN_10001f4c4);
          lVar1 = DAT_101dbd2f8;
          uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
          if ((ulong)uVar5 == 0xffff) {
            puVar7 = (ushort *)0x0;
          }
          else {
            puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
            if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
              uVar5 = 0xffff;
            }
            else {
              uVar5 = *puVar7;
            }
            *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
            *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
            FUN_10063f1bc(puVar7);
            *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
          }
          FUN_10063f2a4(puVar7,puVar4);
          puVar4 = puVar7;
        }
        FUN_100642b14(plVar6,puVar4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_3 + 200));
  }
  return;
}




void FUN_1002e48a0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28c) = param_1;
  return;
}




void FUN_1002e48a8(uint *param_1,uint param_2)

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




uint * FUN_1002e4924(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1002e48a8(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -8;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_1002e497c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_1002e49a8:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_1002e49b0:
  param_1 = puVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_1002e4c50_caseD_0;
  case 2:
    iVar3 = (*(code *)*param_3)(*puVar8,*param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = *puVar8;
    *puVar8 = uVar6;
    return;
  case 3:
    FUN_1002e4d50(param_1,param_1 + 1,puVar8,param_3);
    return;
  case 4:
    FUN_1002e4e3c(param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
    return;
  case 5:
    FUN_1002e4f08(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      FUN_1002e500c(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar5;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 + 1;
    }
    puVar9 = (undefined8 *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      iVar3 = FUN_1002e4d50(param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar1 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      lVar7 = (uVar1 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_1002e4f08(param_1,(long)param_1 + lVar7,puVar9,(long)puVar9 + lVar7,puVar8,param_3
                           );
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    if ((uVar5 & 1) == 0) break;
    goto LAB_1002e4a80;
  }
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
    if (iVar4 != 0) goto code_r0x0001002e4a6c;
  }
  puVar10 = param_1 + 1;
  uVar5 = (*(code *)*param_3)(*param_1,*puVar8);
  puVar9 = puVar10;
  if ((uVar5 & 1) == 0) {
    while( true ) {
      if (puVar9 == puVar8) {
        return;
      }
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
      if (iVar3 != 0) break;
      puVar9 = puVar9 + 1;
    }
    uVar6 = *puVar9;
    puVar10 = puVar9 + 1;
    *puVar9 = *puVar8;
    *puVar8 = uVar6;
  }
  puVar12 = puVar8;
  if (puVar10 == puVar8) {
    return;
  }
  while( true ) {
    puVar9 = puVar10 + -1;
    do {
      puVar10 = puVar9;
      puVar9 = puVar10 + 1;
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
    } while (iVar3 == 0);
    puVar10 = puVar10 + 2;
    do {
      puVar12 = puVar12 + -1;
      uVar5 = (*(code *)*param_3)(*param_1,*puVar12);
    } while ((uVar5 & 1) != 0);
    if (puVar12 <= puVar9) break;
    uVar6 = *puVar9;
    *puVar9 = *puVar12;
    *puVar12 = uVar6;
  }
  goto LAB_1002e49b0;
code_r0x0001002e4a6c:
  uVar6 = *param_1;
  *param_1 = *puVar10;
  *puVar10 = uVar6;
  iVar3 = iVar3 + 1;
LAB_1002e4a80:
  puVar12 = param_1 + 1;
  puVar2 = puVar9;
  puVar11 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar9 = puVar2;
      puVar12 = puVar11 + -1;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar5 = (*(code *)*param_3)(*puVar12,*puVar9);
      } while ((uVar5 & 1) != 0);
      puVar11 = puVar11 + 2;
      do {
        puVar10 = puVar10 + -1;
        iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
      } while (iVar4 == 0);
      if (puVar10 < puVar12) break;
      uVar6 = *puVar12;
      *puVar12 = *puVar10;
      *puVar10 = uVar6;
      iVar3 = iVar3 + 1;
      puVar2 = puVar10;
      if (puVar12 != puVar9) {
        puVar2 = puVar9;
      }
    }
  }
  if ((puVar12 != puVar9) && (iVar4 = (*(code *)*param_3)(*puVar9,*puVar12), iVar4 != 0)) {
    uVar6 = *puVar12;
    *puVar12 = *puVar9;
    *puVar9 = uVar6;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_1002e50dc(param_1,puVar12,param_3);
    iVar3 = FUN_1002e50dc(puVar12 + 1,param_2,param_3);
    if (iVar3 != 0) goto LAB_1002e4c30;
    puVar9 = puVar12 + 1;
    if ((uVar5 & 1) != 0) goto LAB_1002e49b0;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_1002e497c(puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_1002e49a8;
  }
  FUN_1002e497c(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_1002e49b0;
LAB_1002e4c30:
  param_2 = puVar12;
  if ((uVar5 & 1) != 0) {
switchD_1002e4c50_caseD_0:
    return;
  }
  goto LAB_1002e49a8;
}




undefined8
FUN_1002e4d50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)*param_4)(*param_2,*param_1);
  uVar3 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    iVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar4 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      iVar1 = (*(code *)*param_4)(*param_3);
      if (iVar1 != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar4;
    }
  }
  return 1;
}




ulong FUN_1002e4e3c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_1002e4d50();
  iVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if (iVar1 != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    iVar1 = (*(code *)*param_5)(*param_3,*param_2);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      iVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
        uVar2 = (ulong)(iVar4 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_1002e4f08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_1002e4e3c();
  iVar1 = (*(code *)*param_6)(*param_5,*param_4);
  if (iVar1 != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar1 = (*(code *)*param_6)(*param_4,*param_3);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      iVar1 = (*(code *)*param_6)(*param_3,*param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        iVar1 = (*(code *)*param_6)(*param_2,*param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar4 + 3);
        }
        else {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
          uVar2 = (ulong)(iVar4 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_1002e500c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  FUN_1002e4d50(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    puVar5 = param_1 + 3;
    puVar6 = param_1 + 2;
    do {
      puVar4 = puVar5;
      iVar2 = (*(code *)*param_3)(*puVar4,*puVar6);
      if (iVar2 != 0) {
        uVar7 = *puVar4;
        lVar1 = lVar8;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_1002e50b0;
          uVar3 = (*(code *)*param_3)(uVar7,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_1002e50b0:
        *puVar5 = uVar7;
      }
      lVar8 = lVar8 + 8;
      puVar5 = puVar4 + 1;
      puVar6 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}




bool FUN_1002e50dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if (iVar2 != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
    }
    break;
  case 3:
    FUN_1002e4d50(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_1002e4e3c(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_1002e4f08(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_1002e4d50(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar2 = 0;
      puVar6 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar5 = puVar6;
        iVar3 = (*(code *)*param_3)(*puVar5,*puVar7);
        if (iVar3 != 0) {
          uVar8 = *puVar5;
          lVar1 = lVar9;
          do {
            lVar10 = lVar1;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            puVar6 = param_1;
            if (lVar10 == -0x10) goto LAB_1002e51dc;
            uVar4 = (*(code *)*param_3)(uVar8,*(undefined8 *)((long)param_1 + lVar10 + 8));
            lVar1 = lVar10 + -8;
          } while ((uVar4 & 1) != 0);
          puVar6 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_1002e51dc:
          *puVar6 = uVar8;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        puVar6 = puVar5 + 1;
        puVar7 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}




long * FUN_1002e527c(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  float fVar12;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  *puVar9 = &PTR_thunk_FUN_1002e55f0_10148a258;
  puVar1 = puVar9 + 0x1b;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  thunk_FUN_1002ed128(puVar1,0);
  plVar2 = param_3 + 0x1ab;
  FUN_10064e264(plVar2);
  plVar3 = param_3 + 0x1c2;
  thunk_FUN_1002eca3c(plVar3,0);
  plVar4 = param_3 + 0x30b;
  thunk_FUN_100652c08(plVar4);
  *(undefined1 *)(param_3 + 0x329) = 1;
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,puVar1,1);
  FUN_100652cac(plVar4,PTR_s_build___SpoilsOfWarBg_png_101854a58,"full_loading_2k");
  uVar11 = *(uint *)((long)param_3 + 0x18dc);
  if ((~uVar11 & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x18dc) = uVar11 | 0x7f80;
    FUN_1000200a0(plVar4);
    uVar11 = *(uint *)((long)param_3 + 0x18dc);
  }
  *(uint *)((long)param_3 + 0x18dc) = uVar11 | 0x10;
  iVar8 = FUN_10012cf04();
  puVar6 = PTR_s_build___VGX_common_atlas_101854980;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar8 != 0) {
    uVar10 = FUN_1004e0150("MENU_SPOILS_WATCH_AD",0);
    FUN_1002ed2b4(puVar1,puVar6,"spoils_watch_ad_icon",puVar5,uVar10);
    FUN_1002ed300(0x43ee0000,puVar1,1);
    FUN_1002ebe0c(puVar1,PTR_s_build___VGX_common_atlas_101854980,"spoils_watch_ad_button");
    FUN_1002ed1bc(puVar1);
    fVar12 = (float)FUN_10064e3cc(puVar1);
    fVar12 = 680.0 - fVar12;
    param_2 = 240.0 - param_2;
    if (fVar12 <= 40.0) {
      fVar12 = 40.0;
    }
    if (param_2 <= 40.0) {
      param_2 = 40.0;
    }
    FUN_1002ebee0(fVar12 * 0.5,param_2 * 0.5,puVar1);
  }
  FUN_1002ebe0c(plVar3,PTR_s_build___VGX_common_atlas_101854980,"spoils_watch_ad_button");
  FUN_10064e48c(plVar3,&DAT_101158b10);
  FUN_1002ebecc(0x42200000,plVar3);
  uVar10 = FUN_1004e0150("MENU_SPOILS_EXIT",0);
  FUN_1002ecce4(plVar3,uVar10);
  FUN_1002ecc7c(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_58 = DAT_101dbd484;
  local_80 = FUN_1002e55a4;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_3;
  FUN_10001554c(param_3 + 1,&local_80);
  local_58 = DAT_101dbd458;
  local_80 = FUN_1002e55a4;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_3;
  FUN_10001554c(param_3 + 1,&local_80);
  iVar8 = FUN_10012cf04();
  uVar7 = DAT_101d91884;
  if (iVar8 != 0) {
    local_58 = DAT_101d91884;
    local_80 = FUN_1002e55bc;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    plStack_78 = param_3;
    FUN_10001554c(param_3 + 0x1c,&local_80);
  }
  local_58 = uVar7;
  local_80 = FUN_1002e55d4;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_3;
  FUN_10001554c(param_3 + 0x1c3,&local_80);
  if ((*(uint *)((long)param_3 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_3);
  }
  return param_3;
}




void FUN_1002e55a4(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e55b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_1002e55bc(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e55cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_1002e55d4(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e55e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




long * thunk_FUN_1002e527c(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  float fVar12;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  *puVar9 = &PTR_thunk_FUN_1002e55f0_10148a258;
  puVar1 = puVar9 + 0x1b;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  thunk_FUN_1002ed128(puVar1,0);
  plVar2 = param_3 + 0x1ab;
  FUN_10064e264(plVar2);
  plVar3 = param_3 + 0x1c2;
  thunk_FUN_1002eca3c(plVar3,0);
  plVar4 = param_3 + 0x30b;
  thunk_FUN_100652c08(plVar4);
  *(undefined1 *)(param_3 + 0x329) = 1;
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,puVar1,1);
  FUN_100652cac(plVar4,PTR_s_build___SpoilsOfWarBg_png_101854a58,"full_loading_2k");
  uVar11 = *(uint *)((long)param_3 + 0x18dc);
  if ((~uVar11 & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x18dc) = uVar11 | 0x7f80;
    FUN_1000200a0(plVar4);
    uVar11 = *(uint *)((long)param_3 + 0x18dc);
  }
  *(uint *)((long)param_3 + 0x18dc) = uVar11 | 0x10;
  iVar8 = FUN_10012cf04();
  puVar6 = PTR_s_build___VGX_common_atlas_101854980;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar8 != 0) {
    uVar10 = FUN_1004e0150("MENU_SPOILS_WATCH_AD",0);
    FUN_1002ed2b4(puVar1,puVar6,"spoils_watch_ad_icon",puVar5,uVar10);
    FUN_1002ed300(0x43ee0000,puVar1,1);
    FUN_1002ebe0c(puVar1,PTR_s_build___VGX_common_atlas_101854980,"spoils_watch_ad_button");
    FUN_1002ed1bc(puVar1);
    fVar12 = (float)FUN_10064e3cc(puVar1);
    fVar12 = 680.0 - fVar12;
    param_2 = 240.0 - param_2;
    if (fVar12 <= 40.0) {
      fVar12 = 40.0;
    }
    if (param_2 <= 40.0) {
      param_2 = 40.0;
    }
    FUN_1002ebee0(fVar12 * 0.5,param_2 * 0.5,puVar1);
  }
  FUN_1002ebe0c(plVar3,PTR_s_build___VGX_common_atlas_101854980,"spoils_watch_ad_button");
  FUN_10064e48c(plVar3,&DAT_101158b10);
  FUN_1002ebecc(0x42200000,plVar3);
  uVar10 = FUN_1004e0150("MENU_SPOILS_EXIT",0);
  FUN_1002ecce4(plVar3,uVar10);
  FUN_1002ecc7c(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uStack_58 = DAT_101dbd484;
  pcStack_80 = FUN_1002e55a4;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_3;
  FUN_10001554c(param_3 + 1,&pcStack_80);
  uStack_58 = DAT_101dbd458;
  pcStack_80 = FUN_1002e55a4;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_3;
  FUN_10001554c(param_3 + 1,&pcStack_80);
  iVar8 = FUN_10012cf04();
  uVar7 = DAT_101d91884;
  if (iVar8 != 0) {
    uStack_58 = DAT_101d91884;
    pcStack_80 = FUN_1002e55bc;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    plStack_78 = param_3;
    FUN_10001554c(param_3 + 0x1c,&pcStack_80);
  }
  uStack_58 = uVar7;
  pcStack_80 = FUN_1002e55d4;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_3;
  FUN_10001554c(param_3 + 0x1c3,&pcStack_80);
  if ((*(uint *)((long)param_3 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_3);
  }
  return param_3;
}




void FUN_1002e55f0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002e55f0_10148a258;
  param_1[0x30b] = &PTR_FUN_1014a7108;
  param_1[0x322] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x325);
  FUN_10064e2bc(param_1 + 0x30b);
  param_1[0x1c2] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x2e3);
  FUN_1002ebc50(param_1 + 0x1c2);
  thunk_FUN_10064e2bc(param_1 + 0x1ab);
  param_1[0x1b] = &PTR_FUN_10148b6d0;
  param_1[0x18d] = &PTR_FUN_1014a7108;
  param_1[0x1a4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a7);
  FUN_10064e2bc(param_1 + 0x18d);
  param_1[0x162] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x179);
  FUN_10064e2bc(param_1 + 0x162);
  thunk_FUN_100651068(param_1 + 0x13c);
  FUN_1002ebc50(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002e55f0(void)

{
  FUN_1002e55f0();
  return;
}




void FUN_1002e56f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e55f0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e570c(long *param_1,long param_2)

{
  param_1[0x19] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_1002e5740(param_1);
  return;
}




void FUN_1002e5740(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_68;
  float fStack_64;
  int local_5c;
  float local_58;
  undefined4 local_54;
  
  FUN_10064142c(&local_54,&local_58);
  FUN_10016aeec(0,0,0,&local_5c);
  FUN_10064e47c(local_54,local_58,param_1 + 0x30b);
  if (((param_1[0x19] != 0) && (param_1[0x18] != 0)) && (param_1[0x1a] != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    fVar4 = local_58;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_1002e48a0((float)local_5c,param_1[0x19]);
    fVar6 = (float)local_5c + 560.0;
    FUN_10064e47c(local_54,param_1[0x19]);
    plVar1 = param_1 + 0x1ab;
    local_68 = (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fStack_64 = fVar6;
    FUN_10064e48c(plVar1,&local_68);
    lVar2 = param_1[0x1a];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fVar6 = (fVar4 + 68.0) - fVar6;
    FUN_10064e47c(0x44160000,fVar6,lVar2);
    lVar2 = param_1[0x18];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    FUN_10064e47c(uVar5,(fVar4 + 68.0) - fVar6,lVar2);
    if ((*(byte *)((long)param_1 + 0x15c) >> 2 & 1) == 0) {
      plVar3 = param_1 + 0x1c2;
      fVar4 = 0.0;
    }
    else {
      plVar3 = param_1 + 0x1b;
      fVar4 = (float)FUN_10064e3cc(param_1 + 0x1c2);
      FUN_10064e5ec(-(fVar4 * 0.5) - 200.0,0,param_1 + 0x1c2,8,plVar1,8);
      fVar4 = (float)FUN_10064e3cc(plVar3);
      fVar4 = fVar4 * 0.5 + 200.0;
    }
    FUN_10064e5ec(fVar4,0,plVar3,8,plVar1,8);
    FUN_10064e6d8(0,0,param_1 + 0x30b,0);
    FUN_10064e6d8(0,0,param_1[0x18],4);
    if ((char)param_1[0x329] != '\0') {
      FUN_10064e3cc(plVar1);
      FUN_10064e6d8(0,plVar1,6);
    }
    FUN_10064e5ec(0,0,param_1[0x19],6,plVar1,4);
    FUN_10064e5ec(0,0,param_1[0x1a],3,param_1[0x19],0);
  }
  return;
}




void FUN_1002e5988(long *param_1,long param_2)

{
  param_1[0x18] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_1002e5740(param_1);
  return;
}




void FUN_1002e59bc(long *param_1,long param_2)

{
  param_1[0x1a] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_1002e5740(param_1);
  return;
}




void thunk_FUN_1002e5740(void)

{
  FUN_1002e5740();
  return;
}




void FUN_1002e59f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100640840(FUN_10001f4ac);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_1002e5a24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100640840(FUN_10001f4ac);
  FUN_100642b14(param_1 + 0x1858,uVar1);
  return;
}




void FUN_1002e5a58(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  FUN_10064e3cc(param_3 + 0xd58);
  uVar2 = FUN_1006409b4(0,-param_2,param_1,0);
  uVar3 = FUN_100640f4c(param_1,thunk_FUN_1002e5740,param_3);
  lVar1 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f1bc(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f298(puVar5,uVar2,uVar3);
  *(undefined1 *)(param_3 + 0x1948) = 0;
  FUN_100642b14(param_3,puVar5);
  return;
}




void thunk_FUN_1002e5740(void)

{
  FUN_1002e5740();
  return;
}




void FUN_1002e5b60(long param_1)

{
  *(uint *)(param_1 + 0xddc) = *(uint *)(param_1 + 0xddc) & 0xfffffffb;
  return;
}




long * FUN_1002e5b70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  code *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar10[0x17] = 0;
  *puVar10 = &PTR_FUN_10148a3a0;
  puVar10 = puVar10 + 0x18;
  thunk_FUN_100652c08(puVar10);
  param_1[0x37] = 0;
  plVar1 = param_1 + 0x38;
  thunk_FUN_1005357f4(plVar1);
  thunk_FUN_100650e64(param_1 + 0x17d);
  param_1[0x1a3] = 0;
  plVar2 = param_1 + 0x1a4;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100650e64(param_1 + 0x1ca);
  plVar3 = param_1 + 0x1f0;
  thunk_FUN_100183160(plVar3,0);
  plVar4 = param_1 + 0x67c;
  thunk_FUN_100181304(plVar4,0);
  *(undefined2 *)(param_1 + 0x933) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100534ef4(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  local_a0 = (code *)CONCAT71(local_a0._1_7_,1);
  FUN_100534ebc(plVar1,&local_a0);
  lVar11 = thunk_FUN_10064de70();
  param_1[0x37] = lVar11;
  FUN_100534e34(plVar1,lVar11);
  FUN_10064a8b0(param_1[0x37],0x2d,0x28,5,0);
  lVar11 = thunk_FUN_10064de70();
  param_1[0x36] = lVar11;
  FUN_10064e524(param_1,lVar11);
  iVar9 = FUN_100126c88();
  FUN_100652cac(puVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar10,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x144);
  if ((uVar7 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x144) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x1980;
    FUN_1000200a0(puVar10);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x17d,*ppuVar5);
  FUN_1006515e0(plVar2,1);
  FUN_100651038(plVar2,*ppuVar5);
  uVar12 = FUN_1004e0150("MENU_TALENTS_TEXT_UNDISCOVERED_DESCRIPTION",0);
  FUN_1006513c0(plVar2,uVar12);
  FUN_100651038(param_1 + 0x1ca,*ppuVar6);
  FUN_1004e3120(&local_a0,"0");
  FUN_1001816d4(0x42a00000,0x42c80000,0x44228000,plVar3,0,&local_a0,&DAT_10115a168,&DAT_101dc1cb8,0)
  ;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  uVar8 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002e5f30;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x1f1,&local_a0);
  fVar13 = 1.5;
  if (iVar9 == 0) {
    fVar13 = 1.0;
  }
  if ((*(float *)(param_1 + 0x1f9) != fVar13) || (*(float *)((long)param_1 + 0xfcc) != fVar13)) {
    *(float *)(param_1 + 0x1f9) = fVar13;
    *(float *)((long)param_1 + 0xfcc) = fVar13;
    FUN_1000200a0(plVar3);
  }
  FUN_100183500(plVar3,"glory_icon_small");
  FUN_1001829b4(0,plVar3);
  FUN_10018187c(plVar3,2);
  uVar12 = FUN_1004e0150("MENU_TALENTS_TEXT_UNDISCOVERED_BUTTON",0);
  FUN_1001816d4(0x41200000,0x42c80000,0x43c80000,plVar4,0,uVar12,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_78 = uVar8;
  local_a0 = FUN_1002e5f48;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x67d,&local_a0);
  if ((*(float *)(param_1 + 0x685) != fVar13) || (*(float *)((long)param_1 + 0x342c) != fVar13)) {
    *(float *)(param_1 + 0x685) = fVar13;
    *(float *)((long)param_1 + 0x342c) = fVar13;
    FUN_1000200a0(plVar4);
  }
  return param_1;
}




void FUN_1002e5f30(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e5f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_1002e5f48(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e5f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




long * thunk_FUN_1002e5b70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar10[0x17] = 0;
  *puVar10 = &PTR_FUN_10148a3a0;
  puVar10 = puVar10 + 0x18;
  thunk_FUN_100652c08(puVar10);
  param_1[0x37] = 0;
  plVar1 = param_1 + 0x38;
  thunk_FUN_1005357f4(plVar1);
  thunk_FUN_100650e64(param_1 + 0x17d);
  param_1[0x1a3] = 0;
  plVar2 = param_1 + 0x1a4;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100650e64(param_1 + 0x1ca);
  plVar3 = param_1 + 0x1f0;
  thunk_FUN_100183160(plVar3,0);
  plVar4 = param_1 + 0x67c;
  thunk_FUN_100181304(plVar4,0);
  *(undefined2 *)(param_1 + 0x933) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100534ef4(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  pcStack_a0 = (code *)CONCAT71(pcStack_a0._1_7_,1);
  FUN_100534ebc(plVar1,&pcStack_a0);
  lVar11 = thunk_FUN_10064de70();
  param_1[0x37] = lVar11;
  FUN_100534e34(plVar1,lVar11);
  FUN_10064a8b0(param_1[0x37],0x2d,0x28,5,0);
  lVar11 = thunk_FUN_10064de70();
  param_1[0x36] = lVar11;
  FUN_10064e524(param_1,lVar11);
  iVar9 = FUN_100126c88();
  FUN_100652cac(puVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar10,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x144);
  if ((uVar7 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x144) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x1980;
    FUN_1000200a0(puVar10);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar9 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x17d,*ppuVar5);
  FUN_1006515e0(plVar2,1);
  FUN_100651038(plVar2,*ppuVar5);
  uVar12 = FUN_1004e0150("MENU_TALENTS_TEXT_UNDISCOVERED_DESCRIPTION",0);
  FUN_1006513c0(plVar2,uVar12);
  FUN_100651038(param_1 + 0x1ca,*ppuVar6);
  FUN_1004e3120(&pcStack_a0,"0");
  FUN_1001816d4(0x42a00000,0x42c80000,0x44228000,plVar3,0,&pcStack_a0,&DAT_10115a168,&DAT_101dc1cb8,
                0);
  if (plStack_98 != (void *)0x0) {
    operator_delete__(plStack_98);
  }
  uVar8 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1002e5f30;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1f1,&pcStack_a0);
  fVar13 = 1.5;
  if (iVar9 == 0) {
    fVar13 = 1.0;
  }
  if ((*(float *)(param_1 + 0x1f9) != fVar13) || (*(float *)((long)param_1 + 0xfcc) != fVar13)) {
    *(float *)(param_1 + 0x1f9) = fVar13;
    *(float *)((long)param_1 + 0xfcc) = fVar13;
    FUN_1000200a0(plVar3);
  }
  FUN_100183500(plVar3,"glory_icon_small");
  FUN_1001829b4(0,plVar3);
  FUN_10018187c(plVar3,2);
  uVar12 = FUN_1004e0150("MENU_TALENTS_TEXT_UNDISCOVERED_BUTTON",0);
  FUN_1001816d4(0x41200000,0x42c80000,0x43c80000,plVar4,0,uVar12,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_78 = uVar8;
  pcStack_a0 = FUN_1002e5f48;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x67d,&pcStack_a0);
  if ((*(float *)(param_1 + 0x685) != fVar13) || (*(float *)((long)param_1 + 0x342c) != fVar13)) {
    *(float *)(param_1 + 0x685) = fVar13;
    *(float *)((long)param_1 + 0x342c) = fVar13;
    FUN_1000200a0(plVar4);
  }
  return param_1;
}




void FUN_1002e5f64(undefined1 param_1 [16],float param_2,long param_3)

{
  FUN_10064e47c(param_1,param_2 + *(float *)(param_3 + 0x44) * -2.0,param_3 + 0xc0);
  return;
}




void FUN_1002e5f7c(long param_1)

{
  *(undefined8 *)(param_1 + 0xd18) = 0;
  FUN_100534ae0(param_1 + 0x1c0);
  return;
}




void FUN_1002e5f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar1 = param_1 + 0xbe8;
  FUN_100534ad8(param_1 + 0x1c0,lVar1,1);
  (**(code **)(**(long **)(param_1 + 0x1b8) + 0x68))(*(long **)(param_1 + 0x1b8),lVar1,0,9);
  (**(code **)(**(long **)(param_1 + 0x1b8) + 0x70))(*(long **)(param_1 + 0x1b8),0x14);
  uVar2 = FUN_1004e0150(param_2,0);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  FUN_1000ef9dc(auStack_40,param_3);
  FUN_1006513c0(lVar1,auStack_40);
  FUN_1006515e0(lVar1,1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1002e6048(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_3 + 0xd18) == 0) {
    lVar1 = thunk_FUN_10064de70();
    *(long *)(param_3 + 0xd18) = lVar1;
    *(ushort *)(lVar1 + 0xc) = *(ushort *)(lVar1 + 0xc) & 0xffe0 | 9;
    *(undefined1 *)(*(long *)(param_3 + 0xd18) + 8) = DAT_101dbd510;
    (**(code **)(**(long **)(param_3 + 0x1b8) + 0x80))
              (*(long **)(param_3 + 0x1b8),*(undefined8 *)(param_3 + 0xd18),0);
  }
  uVar2 = FUN_100534eb4(param_3 + 0x1c0);
  uVar2 = FUN_1002e6124(uVar2,1);
  FUN_100303f38(param_1,param_2,uVar2,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x0001002e6120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 0xd18) + 0x68))(*(long **)(param_3 + 0xd18),uVar2,0,9);
  return;
}




void * FUN_1002e6124(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x538);
  lVar2 = thunk_FUN_100303d74();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1002e6198(long *param_1,int param_2)

{
  (**(code **)(*(long *)param_1[0x36] + 0x68))((long *)param_1[0x36],param_1 + 0x38,1,9);
  (**(code **)(*(long *)param_1[0x36] + 0x70))((long *)param_1[0x36],10);
  if (param_2 < 1) {
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x67c,1);
    (**(code **)(*(long *)param_1[0x36] + 0x68))((long *)param_1[0x36],param_1 + 0x67c,0,6);
    (**(code **)(*(long *)param_1[0x37] + 0x70))((long *)param_1[0x37],0x28);
    FUN_100534ad8(param_1 + 0x38,param_1 + 0x1a4,1);
    (**(code **)(*(long *)param_1[0x37] + 0x68))((long *)param_1[0x37],param_1 + 0x1a4,1,9);
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1ca,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f0,1);
    (**(code **)(*(long *)param_1[0x36] + 0x68))((long *)param_1[0x36],param_1 + 0x1ca,0,6);
    (**(code **)(*(long *)param_1[0x36] + 0x68))((long *)param_1[0x36],param_1 + 0x1f0,0,6);
    (**(code **)(*(long *)param_1[0x37] + 0x78))((long *)param_1[0x37],0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002e6314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x36] + 0x70))((long *)param_1[0x36],0x28);
  return;
}




void FUN_1002e6318(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  
  lVar1 = param_1 + 0xe50;
  if (param_2 < param_3) {
    uVar3 = FUN_1004e0150("MENU_TALENTS_TEXT_UPGRADE",0);
    FUN_1006513c0(lVar1,uVar3);
    if ((~*(uint *)(param_1 + 0xed4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0xed4) = *(uint *)(param_1 + 0xed4) | 0x7f80;
      FUN_1000200a0(lVar1);
    }
    FUN_100651460(lVar1,&DAT_101158b24);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1004e0150("MENU_TALENTS_TEXT_UPGRADE_AVAILABLE",0);
    FUN_1006513c0(lVar1,uVar3);
    uVar2 = *(uint *)(param_1 + 0xed4);
    if ((uVar2 & 0x7f80) != 0x6600) {
      *(uint *)(param_1 + 0xed4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
      FUN_1000200a0(lVar1);
    }
    FUN_100651460(lVar1,&DAT_101158b20);
    uVar3 = 2;
  }
  FUN_10018187c(param_1 + 0xf80,uVar3);
  FUN_1004e313c(auStack_50);
  FUN_1004e38ac(auStack_50,"%d");
  FUN_100181af8(param_1 + 0xf80,auStack_50);
  FUN_1001b4c0c(param_1 + 0xf80,param_3 <= param_2);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1002e6470(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4999) = param_2;
  FUN_1002e647c();
  return;
}




void FUN_1002e647c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100131560();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x4998) != '\0')) {
    uVar1 = (uint)(*(char *)(param_1 + 0x4999) == '\0') << 2;
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xed4) = *(uint *)(param_1 + 0xed4) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x1004) = *(uint *)(param_1 + 0x1004) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x3464) = *(uint *)(param_1 + 0x3464) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002e64f8(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = FUN_100131560();
  *(byte *)(param_1 + 0x4998) = param_2 & (bVar1 ^ 0xff);
  FUN_1002e647c(param_1);
  return;
}




void FUN_1002e652c(long param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101158b18;
  if (param_2 == 0) {
    puVar1 = &DAT_101158b1c;
  }
  FUN_100181bb8(0x3f666666,param_1 + 0xf80,puVar1);
  FUN_100181bd0(0x3f666666,param_1 + 0xf80,puVar1);
  *(char *)(param_1 + 0x2532) = (char)param_2;
  return;
}




void FUN_1002e65a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148a3a0;
  FUN_10003bd40(param_1 + 0x67c);
  FUN_1001843c8(param_1 + 0x1f0);
  thunk_FUN_100651068(param_1 + 0x1ca);
  thunk_FUN_100651068(param_1 + 0x1a4);
  thunk_FUN_100651068(param_1 + 0x17d);
  thunk_FUN_100534a3c(param_1 + 0x38);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e6634(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148a3a0;
  FUN_10003bd40(param_1 + 0x67c);
  param_1[0x1f0] = &PTR_FUN_10145f168;
  param_1[0x65d] = &PTR_FUN_1014a7108;
  param_1[0x674] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x677);
  FUN_10064e2bc(param_1 + 0x65d);
  param_1[0x63f] = &PTR_FUN_1014a7108;
  param_1[0x656] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x659);
  FUN_10064e2bc(param_1 + 0x63f);
  thunk_FUN_100651068(param_1 + 0x619);
  param_1[0x5fb] = &PTR_FUN_1014a7108;
  param_1[0x612] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x615);
  FUN_10064e2bc(param_1 + 0x5fb);
  FUN_10064221c(param_1 + 0x5ea);
  param_1[0x5cc] = &PTR_FUN_1014a7108;
  param_1[0x5e3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e6);
  FUN_10064e2bc(param_1 + 0x5cc);
  param_1[0x1f0] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x596);
  FUN_10064221c(param_1 + 0x585);
  FUN_10064e2bc(param_1 + 0x551);
  FUN_10064221c(param_1 + 0x540);
  thunk_FUN_100651068(param_1 + 0x51a);
  thunk_FUN_100651068(param_1 + 0x4f4);
  param_1[0x4d6] = &PTR_FUN_1014a7108;
  param_1[0x4ed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f0);
  FUN_10064e2bc(param_1 + 0x4d6);
  param_1[0x4b8] = &PTR_FUN_1014a7108;
  param_1[0x4cf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d2);
  FUN_10064e2bc(param_1 + 0x4b8);
  FUN_10064221c(param_1 + 0x4a7);
  FUN_10003bd40(param_1 + 0x1f0);
  thunk_FUN_100651068(param_1 + 0x1ca);
  thunk_FUN_100651068(param_1 + 0x1a4);
  thunk_FUN_100651068(param_1 + 0x17d);
  thunk_FUN_100534a3c(param_1 + 0x38);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002e683c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1002e68f0_10148a4e8;
  puVar2[0x19] = 0;
  puVar2 = puVar2 + 0x1a;
  FUN_1006421a8(puVar2);
  param_1[0x1a] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x2b;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x51) = 0x447a0000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100642bd8(puVar2,plVar1,1);
  uVar3 = FUN_1004e0150("MENU_SKINS_GRID_PAGE_ABOUT_TALENTS",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




long * thunk_FUN_1002e683c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1002e68f0_10148a4e8;
  puVar2[0x19] = 0;
  puVar2 = puVar2 + 0x1a;
  FUN_1006421a8(puVar2);
  param_1[0x1a] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x2b;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x51) = 0x447a0000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100642bd8(puVar2,plVar1,1);
  uVar3 = FUN_1004e0150("MENU_SKINS_GRID_PAGE_ABOUT_TALENTS",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




void FUN_1002e68f0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002e68f0_10148a4e8;
  FUN_1002e6940();
  thunk_FUN_100651068(param_1 + 0x2b);
  FUN_10064221c(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e6940(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 200) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
        uVar2 = *(uint *)(param_1 + 0xc0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}




void thunk_FUN_1002e68f0(void)

{
  FUN_1002e68f0();
  return;
}




void FUN_1002e69a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e68f0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e69b4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x288) = param_1;
  return;
}




void FUN_1002e69bc(long param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 local_38;
  
  pvVar1 = operator_new(0x28);
  local_38 = FUN_100217b60();
  FUN_100217c20(local_38,param_2);
  FUN_100642bd8(param_1 + 0xd0,*(undefined8 *)((long)pvVar1 + 8),1);
  FUN_1002e6a24(param_1 + 0xc0,&local_38);
  return;
}




void FUN_1002e6a24(uint *param_1,undefined8 *param_2)

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
    FUN_1002e6da4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_1002e6aa4(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
LAB_1002e6b54:
    uVar6 = 0;
  }
  else {
    plVar8 = *(long **)(param_1 + 200);
    lVar4 = *plVar8;
    uVar6 = *(undefined8 *)(lVar4 + 8);
    iVar2 = FUN_100217d70(lVar4);
    uVar7 = iVar2 - 0x41;
    if (0x19 < uVar7) {
      uVar7 = 0xffffffff;
    }
    uVar3 = iVar2 - 0x61U;
    if (0x19 < iVar2 - 0x61U) {
      uVar3 = uVar7;
    }
    if (uVar3 < param_2) {
      do {
        uVar7 = uVar3;
        plVar8 = plVar8 + 1;
        if (plVar8 == (long *)(*(long *)(param_1 + 200) + (ulong)*(uint *)(param_1 + 0xc0) * 8))
        goto LAB_1002e6b54;
        lVar5 = *plVar8;
        uVar6 = *(undefined8 *)(lVar4 + 8);
        iVar2 = FUN_100217d70(lVar5);
        uVar1 = iVar2 - 0x41;
        if (0x19 < uVar1) {
          uVar1 = 0xffffffff;
        }
        uVar3 = iVar2 - 0x61U;
        if (0x19 < iVar2 - 0x61U) {
          uVar3 = uVar1;
        }
        lVar4 = lVar5;
      } while (uVar3 < param_2);
    }
    else {
      uVar7 = 0;
      lVar5 = lVar4;
    }
    if (uVar3 - param_2 < param_2 - uVar7) {
      uVar6 = *(undefined8 *)(lVar5 + 8);
    }
  }
  return uVar6;
}




void FUN_1002e6b8c(long param_1)

{
  ulong uVar1;
  
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_100217df0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  return;
}




void FUN_1002e6be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002e6bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_1002e6bf0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar2 = FUN_100126b4c();
  if (iVar2 == 0) {
    FUN_100641464(&local_44,&local_48);
  }
  else {
    local_44 = (**(code **)(*param_3 + 0x48))(param_3);
    (**(code **)(*param_3 + 0x48))(param_3);
    local_48 = param_2;
  }
  FUN_10064e47c((int)param_3[0x51],param_3);
  plVar5 = param_3 + 0x2b;
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar1 = *(uint *)((long)param_3 + 0x1dc);
  if ((uVar1 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_3 + 0x1dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5280;
    FUN_1000200a0(plVar5);
  }
  FUN_100651700(plVar5,3);
  FUN_100651708(*(float *)(param_3 + 0x51) + -200.0,plVar5,1);
  FUN_10064e5ec(0,0x428c0000,plVar5,8,param_3,4);
  if ((int)param_3[0x18] != 0) {
    uVar7 = 0;
    do {
      lVar8 = *(long *)(param_3[0x19] + uVar7 * 8);
      local_50 = (undefined4)param_3[0x51];
      local_4c = 0x442f0000;
      FUN_10064e48c(*(undefined8 *)(lVar8 + 8),&local_50);
      (**(code **)(**(long **)(lVar8 + 8) + 0x138))();
      if (uVar7 == 0) {
        uVar3 = *(undefined8 *)(lVar8 + 8);
        uVar9 = 0x430c0000;
        uVar4 = 0;
        uVar6 = 0;
        plVar5 = param_3 + 0x1a;
      }
      else {
        uVar3 = *(undefined8 *)(lVar8 + 8);
        uVar9 = 0;
        uVar4 = 4;
        uVar6 = 6;
        plVar5 = *(long **)(*(long *)(param_3[0x19] + uVar7 * 8 + -8) + 8);
      }
      FUN_10064e5ec(0,uVar9,uVar3,uVar4,plVar5,uVar6);
      FUN_1002e7f5c(*(undefined8 *)(lVar8 + 8));
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_3 + 0x18));
  }
  return;
}




void FUN_1002e6da4(uint *param_1,uint param_2)

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




long * FUN_1002e6e20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar10 = (undefined8 *)FUN_10064f204();
  puVar10[0x29] = 0;
  puVar10[0x2a] = 0;
  *puVar10 = &PTR_thunk_FUN_1002e7258_10148a648;
  puVar10 = puVar10 + 0x2b;
  thunk_FUN_1006543ec(puVar10);
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x7d;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 0xb1;
  thunk_FUN_1005357f4(plVar2);
  plVar3 = param_1 + 0x1f6;
  thunk_FUN_100531dc0(plVar3);
  plVar4 = param_1 + 0x224;
  thunk_FUN_10019c2fc(plVar4);
  thunk_FUN_10064f204();
  plVar5 = param_1 + 0x2da;
  thunk_FUN_1006543ec(plVar5);
  plVar6 = param_1 + 0x30e;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x32c;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x34a;
  thunk_FUN_1001b4d10(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100534ad8(plVar2,param_1 + 0x2b1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100654488(puVar10,1);
  FUN_100652cac(param_1 + 0x5f,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(param_1 + 0x5f,&DAT_10115a164,2);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x18f4);
  if ((uVar9 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x18f4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar6);
  }
  FUN_1001b66dc(0x3f800000,plVar8,"white_background","white_background");
  FUN_1001b5d78(plVar8,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  *(undefined1 *)((long)param_1 + 0x2d64) = 1;
  FUN_1001b6758(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1001b5e00(0x44960000,0x42700000,plVar8,0,100,0,1);
  FUN_1001b676c(plVar8);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"talent_coinback_glow");
  if ((*(float *)(param_1 + 0x335) != 0.75) || (*(float *)((long)param_1 + 0x19ac) != 0.75)) {
    lVar11 = NEON_fmov(0x3f400000,4);
    param_1[0x335] = lVar11;
    FUN_1000200a0(plVar7);
  }
  FUN_100654488(plVar1,1);
  FUN_1005360e4(plVar2,0);
  local_90 = (code *)CONCAT71(local_90._1_7_,9);
  FUN_100534ebc(plVar2,&local_90);
  local_68 = DAT_101d918b8;
  local_90 = FUN_1002e720c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_90);
  FUN_10017db14(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  local_68 = FUN_100644a94("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  local_90 = FUN_1002e7214;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1f7,&local_90);
  FUN_100532130(plVar3,plVar4);
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  local_68 = DAT_101d918ac;
  local_90 = FUN_1002e7240;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  return param_1;
}




void FUN_1002e720c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002e7940(param_1,param_4);
  return;
}




void FUN_1002e7214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_1002e74bc(param_1,uVar1);
  return;
}




void FUN_1002e7240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002e7250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x150) + 0x138))(*(long **)(param_1 + 0x150),1);
  return;
}




long * thunk_FUN_1002e6e20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar10 = (undefined8 *)FUN_10064f204();
  puVar10[0x29] = 0;
  puVar10[0x2a] = 0;
  *puVar10 = &PTR_thunk_FUN_1002e7258_10148a648;
  puVar10 = puVar10 + 0x2b;
  thunk_FUN_1006543ec(puVar10);
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x7d;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 0xb1;
  thunk_FUN_1005357f4(plVar2);
  plVar3 = param_1 + 0x1f6;
  thunk_FUN_100531dc0(plVar3);
  plVar4 = param_1 + 0x224;
  thunk_FUN_10019c2fc(plVar4);
  thunk_FUN_10064f204();
  plVar5 = param_1 + 0x2da;
  thunk_FUN_1006543ec(plVar5);
  plVar6 = param_1 + 0x30e;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x32c;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x34a;
  thunk_FUN_1001b4d10(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100534ad8(plVar2,param_1 + 0x2b1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100654488(puVar10,1);
  FUN_100652cac(param_1 + 0x5f,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(param_1 + 0x5f,&DAT_10115a164,2);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x18f4);
  if ((uVar9 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x18f4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar6);
  }
  FUN_1001b66dc(0x3f800000,plVar8,"white_background","white_background");
  FUN_1001b5d78(plVar8,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  *(undefined1 *)((long)param_1 + 0x2d64) = 1;
  FUN_1001b6758(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1001b5e00(0x44960000,0x42700000,plVar8,0,100,0,1);
  FUN_1001b676c(plVar8);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"talent_coinback_glow");
  if ((*(float *)(param_1 + 0x335) != 0.75) || (*(float *)((long)param_1 + 0x19ac) != 0.75)) {
    lVar11 = NEON_fmov(0x3f400000,4);
    param_1[0x335] = lVar11;
    FUN_1000200a0(plVar7);
  }
  FUN_100654488(plVar1,1);
  FUN_1005360e4(plVar2,0);
  pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,9);
  FUN_100534ebc(plVar2,&pcStack_90);
  uStack_68 = DAT_101d918b8;
  pcStack_90 = FUN_1002e720c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb2,&pcStack_90);
  FUN_10017db14(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uStack_68 = FUN_100644a94("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  pcStack_90 = FUN_1002e7214;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1f7,&pcStack_90);
  FUN_100532130(plVar3,plVar4);
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  uStack_68 = DAT_101d918ac;
  pcStack_90 = FUN_1002e7240;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  return param_1;
}




void FUN_1002e7258(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002e7258_10148a648;
  param_1[0x2a] = 0;
  FUN_100196fa4(param_1 + 0x34a);
  param_1[0x32c] = &PTR_FUN_1014a7108;
  param_1[0x343] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x346);
  FUN_10064e2bc(param_1 + 0x32c);
  param_1[0x30e] = &PTR_FUN_1014a7108;
  param_1[0x325] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x328);
  FUN_10064e2bc(param_1 + 0x30e);
  FUN_10064e2bc(param_1 + 0x2da);
  param_1[0x2b1] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x2c8);
  FUN_10064e2bc(param_1 + 0x2b1);
  param_1[0x224] = &PTR_FUN_101461ed0;
  thunk_FUN_100651068(param_1 + 0x28b);
  param_1[0x26d] = &PTR_FUN_1014a7108;
  param_1[0x284] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x287);
  FUN_10064e2bc(param_1 + 0x26d);
  param_1[0x24f] = &PTR_FUN_1014a7108;
  param_1[0x266] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x269);
  FUN_10064e2bc(param_1 + 0x24f);
  param_1[0x224] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x23b);
  FUN_10064e2bc(param_1 + 0x224);
  thunk_FUN_100531f9c(param_1 + 0x1f6);
  thunk_FUN_100534a3c(param_1 + 0xb1);
  FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002e7258(void)

{
  FUN_1002e7258();
  return;
}




void FUN_1002e7410(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e7258();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e7424(long *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001b5918(0x3f000000,param_1 + 0x34a,param_2,&DAT_101158b28,&DAT_101158b2c,0,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x0001002e7474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002e7478(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002e7480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_1002e7484(long *param_1,long param_2)

{
  param_1[0x2a] = param_2;
  FUN_100534ad8(param_1 + 0xb1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0001002e74b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002e74bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  void *local_40;
  ushort local_32;
  
  lVar1 = param_1 + 0x588;
  FUN_100536070(lVar1);
  if ((int)param_2 == 0) {
    FUN_1002e75a0(param_1,1);
    lVar3 = FUN_100534eb4(lVar1);
    if (*(float *)(lVar3 + 0x44) != 0.0) {
      *(undefined4 *)(lVar3 + 0x44) = 0;
      FUN_1000200a0();
    }
    FUN_100536070(lVar1);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x148))();
    lVar3 = FUN_1002178e0(uVar2,param_2);
    if (lVar3 != 0) {
      FUN_10017dc84(lVar3,lVar1,param_1 + 1000);
      FUN_1002e75a0(param_1,0);
    }
  }
  local_32 = (ushort)(byte)((char)param_2 + 0x41);
  FUN_1004e3120(auStack_48,&local_32);
  FUN_10019c474(param_1 + 0x1120,auStack_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  return;
}




void FUN_1002e75a0(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 local_58;
  float fStack_54;
  
  lVar1 = param_3 + 0x16d0;
  FUN_100642324(lVar1);
  lVar2 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063fb5c(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar5 = *(undefined4 *)(param_3 + 0x1710);
  fStack_54 = 0.0;
  if ((param_4 & 1) == 0) {
    FUN_10064e3cc(lVar1);
    fStack_54 = -param_2;
  }
  local_58 = uVar5;
  FUN_10063fb90(puVar4,&local_58);
  FUN_10063f0e8(0x3e19999a,puVar4);
  FUN_100642b14(lVar1,puVar4);
  return;
}




void FUN_1002e76a8(long *param_1)

{
  FUN_10064e47c(param_1 + 0x2b);
                    /* WARNING: Could not recover jumptable at 0x0001002e76d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002e76d8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68;
  float fStack_64;
  
  lVar1 = param_3 + 0x158;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = (float)param_2;
  FUN_10064e48c(param_3 + 0x2f8,&local_68);
  lVar3 = param_3 + 0x16d0;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x1870,&local_68);
  iVar5 = FUN_100131560();
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = 4;
  }
  *(uint *)(param_3 + 0x1754) = *(uint *)(param_3 + 0x1754) & 0xfffffffb | uVar6;
  lVar2 = param_3 + 1000;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar2,&local_68);
  local_68 = FUN_10064e3cc(lVar2);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x588,&local_68);
  lVar4 = param_3 + 0x1588;
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar4,&local_68);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_10064e3cc(lVar1);
  FUN_1002e69b4(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x148))();
  lVar1 = param_3 + 0x1a50;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_10064e5ec(0x41f00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_10064e72c(0,uVar7,0,lVar4,2);
  FUN_10064e72c(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_10064e3cc(lVar2);
  fVar8 = fVar9;
  FUN_10064e3cc(lVar4);
  fVar8 = (fVar9 + -80.0) - fVar8;
  FUN_10064e47c(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_100532138(lVar1);
  FUN_10064e3cc(lVar4);
  FUN_10064e5ec(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_1000200a0(param_3 + 0x588);
  }
  return;
}




void FUN_1002e7940(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100644b2c(param_2);
  if ((iVar1 < 1) && (iVar2 = FUN_100644b2c(param_2), -1 < iVar2)) {
    return;
  }
  FUN_1002e75a0(param_1,0 < iVar1);
  return;
}




long FUN_1002e79a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 local_58 [2];
  
  puVar6 = (undefined8 *)FUN_10064f204();
  puVar6[0x29] = 0;
  *puVar6 = &PTR_thunk_FUN_1002e7b38_10148a798;
  thunk_FUN_100652c08(puVar6 + 0x2a);
  lVar1 = param_1 + 0x240;
  FUN_1006505b8(lVar1);
  lVar2 = param_1 + 0x318;
  thunk_FUN_100652c08(lVar2);
  lVar3 = param_1 + 0x408;
  FUN_100653838(lVar3);
  lVar4 = param_1 + 0x510;
  thunk_FUN_100650e64(lVar4);
  thunk_FUN_10064f204(param_1 + 0x640);
  *(undefined4 *)(param_1 + 0x797) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  FUN_10064f324(param_1,lVar3,1);
  FUN_100642bd8(lVar3,lVar2,1);
  FUN_10064f324(param_1,lVar4,1);
  FUN_10064f324(param_1,lVar1,1);
  FUN_10064f324(param_1,puVar6 + 0x2a,1);
  FUN_10064f324(param_1,param_1 + 0x640,1);
  FUN_100650608(lVar1,&DAT_10115a164);
  uVar5 = *(uint *)(param_1 + 0x2c4);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)(param_1 + 0x2c4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(lVar1);
  }
  *(uint *)(param_1 + 0x1d4) = *(uint *)(param_1 + 0x1d4) & 0xfffffffb;
  FUN_100652cac(lVar2,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  local_58[0] = 0xffb6acaa;
  FUN_100651594(lVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,local_58);
  return param_1;
}




long thunk_FUN_1002e79a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 auStack_58 [2];
  
  puVar6 = (undefined8 *)FUN_10064f204();
  puVar6[0x29] = 0;
  *puVar6 = &PTR_thunk_FUN_1002e7b38_10148a798;
  thunk_FUN_100652c08(puVar6 + 0x2a);
  lVar1 = param_1 + 0x240;
  FUN_1006505b8(lVar1);
  lVar2 = param_1 + 0x318;
  thunk_FUN_100652c08(lVar2);
  lVar3 = param_1 + 0x408;
  FUN_100653838(lVar3);
  lVar4 = param_1 + 0x510;
  thunk_FUN_100650e64(lVar4);
  thunk_FUN_10064f204(param_1 + 0x640);
  *(undefined4 *)(param_1 + 0x797) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  FUN_10064f324(param_1,lVar3,1);
  FUN_100642bd8(lVar3,lVar2,1);
  FUN_10064f324(param_1,lVar4,1);
  FUN_10064f324(param_1,lVar1,1);
  FUN_10064f324(param_1,puVar6 + 0x2a,1);
  FUN_10064f324(param_1,param_1 + 0x640,1);
  FUN_100650608(lVar1,&DAT_10115a164);
  uVar5 = *(uint *)(param_1 + 0x2c4);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)(param_1 + 0x2c4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_1000200a0(lVar1);
  }
  *(uint *)(param_1 + 0x1d4) = *(uint *)(param_1 + 0x1d4) & 0xfffffffb;
  FUN_100652cac(lVar2,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  auStack_58[0] = 0xffb6acaa;
  FUN_100651594(lVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,auStack_58);
  return param_1;
}




void FUN_1002e7b38(undefined8 *param_1)

{
  undefined8 uVar1;
  void *local_58 [2];
  char local_41;
  
  *param_1 = &PTR_thunk_FUN_1002e7b38_10148a798;
  FUN_1002e7c68();
  uVar1 = FUN_1000eaaec();
  FUN_10001549c(local_58,uVar1);
  FUN_1001ad598(local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if ((void *)param_1[0xf2] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf2]);
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
  }
  param_1[200] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xdf);
  FUN_10064e2bc(param_1 + 200);
  thunk_FUN_100651068(param_1 + 0xa2);
  param_1[0x81] = &PTR_FUN_1014a7108;
  param_1[0x98] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9b);
  FUN_10064e2bc(param_1 + 0x81);
  param_1[99] = &PTR_FUN_1014a7108;
  param_1[0x7a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7d);
  FUN_10064e2bc(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_1014a7108;
  param_1[0x41] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2a);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e7c68(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x788);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x790) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = *(uint *)(param_1 + 0x788);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x790) != 0) {
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}




void thunk_FUN_1002e7b38(void)

{
  FUN_1002e7b38();
  return;
}




void FUN_1002e7cc8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e7b38();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e7cdc(long param_1)

{
  FUN_1006513c0(param_1 + 0x510);
  return;
}




void FUN_1002e7ce4(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_1001e34dc(param_1 + 0x408,plVar1);
  return;
}




void FUN_1002e7cfc(long *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  ulong unaff_x21;
  long lVar4;
  ulong uVar5;
  ulong unaff_x25;
  long local_a8;
  code *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_78;
  
  uVar2 = DAT_101dbd48c;
  uVar1 = DAT_101dbd460;
  if ((int)param_1[0xf1] == 0) {
    if (*param_2 != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        pvVar3 = operator_new(0x48);
        local_a8 = thunk_FUN_1001fc310(pvVar3,*(long *)(param_2 + 2) + lVar4,1,0);
        FUN_1002e7ec8(param_1 + 0xf1,&local_a8);
        lStack_98 = param_1[0x29];
        unaff_x25 = unaff_x25 & 0xffffffff00000000 | uVar5;
        local_78 = uVar2;
        local_a0 = FUN_1002e7f48;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = unaff_x25;
        FUN_10001554c(*(long *)(local_a8 + 8) + 8,&local_a0);
        lStack_98 = param_1[0x29];
        unaff_x21 = unaff_x21 & 0xffffffff00000000 | uVar5;
        local_78 = uVar1;
        local_a0 = FUN_1002e7f48;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = unaff_x21;
        FUN_10001554c(*(long *)(local_a8 + 8) + 8,&local_a0);
        (**(code **)(**(long **)(local_a8 + 8) + 0x138))();
        local_a0 = (code *)&DAT_3f0000003f000000;
        (**(code **)(**(long **)(local_a8 + 8) + 0x28))(*(long **)(local_a8 + 8),&local_a0);
        *(uint *)(*(long *)(local_a8 + 8) + 0xeb4) =
             *(uint *)(*(long *)(local_a8 + 8) + 0xeb4) & 0xfffffffb;
        FUN_1002c0a20(*(undefined8 *)(local_a8 + 8),1);
        FUN_1002c0a50(*(undefined8 *)(local_a8 + 8),1);
        FUN_10064f31c(param_1 + 200,*(undefined8 *)(local_a8 + 8),1);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar5 < *param_2);
    }
    (**(code **)(*param_1 + 0x138))(param_1);
  }
  return;
}




void FUN_1002e7ec8(uint *param_1,undefined8 *param_2)

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
    FUN_1002e82f8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002e7f48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002e7f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_4,param_5);
  return;
}




void FUN_1002e7f5c(long param_1)

{
  *(undefined1 *)(param_1 + 0x798) = 1;
  return;
}




void FUN_1002e7f68(long *param_1)

{
  if (*(char *)((long)param_1 + 0x79a) != '\0') {
    (**(code **)(*param_1 + 0x140))();
    (**(code **)(*(long *)param_1[0x29] + 0x10))();
    *(undefined1 *)((long)param_1 + 0x79a) = 0;
  }
  return;
}




void FUN_1002e7fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002e7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  return;
}




void FUN_1002e7fbc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float local_58;
  float fStack_54;
  
  plVar1 = param_1 + 0x81;
  FUN_10064e47c(0x43960000,0x43960000,plVar1);
  plVar2 = param_1 + 99;
  FUN_10064e47c(0x43480000,0x43960000,plVar2);
  fVar9 = (float)FUN_100652e60(plVar1);
  fVar10 = (float)FUN_100652e60(plVar1);
  fVar10 = (fVar9 * 0.5 + -100.0) / fVar10;
  param_1[0xa0] = CONCAT44(fVar10,fVar10);
  param_1[0x9f] = CONCAT44(fVar10,fVar10);
  FUN_10064e5ec(0x41200000,0x41200000,param_1 + 0xa2,0,param_1,0);
  FUN_10064e5ec(0,0x41a00000,plVar2,0,param_1 + 0xa2,3);
  fVar12 = 0.0;
  FUN_10064e5ec(0,0,plVar1,8,plVar2,8);
  plVar3 = param_1 + 200;
  fVar9 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = (float)FUN_100652e60(plVar1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar9 - fVar10,fVar12 * 0.75,plVar3);
  fVar9 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = 0.8;
  (**(code **)(*param_1 + 0x48))(param_1);
  fStack_54 = fVar10 * 0.85;
  local_58 = fVar9 * 0.8;
  FUN_10064e48c(param_1 + 0x2a,&local_58);
  plVar1 = param_1 + 0x48;
  FUN_10064e48c(plVar1,&local_58);
  uVar11 = FUN_10064e3cc(plVar3);
  if ((int)param_1[0xf1] != 0) {
    uVar8 = 0;
    fVar9 = (float)NEON_fminnm(uVar11,0x45074000);
    uVar11 = NEON_fminnm(fVar10,0x447a0000);
    do {
      FUN_10064e47c(fVar9 * 0.25 + -15.0,uVar11,
                    *(undefined8 *)(*(long *)(param_1[0xf2] + uVar8 * 8) + 8));
      (**(code **)(**(long **)(*(long *)(param_1[0xf2] + uVar8 * 8) + 8) + 0x90))();
      if (uVar8 == 0) {
        uVar4 = *(undefined8 *)(*(long *)param_1[0xf2] + 8);
        uVar5 = 0;
        uVar7 = 0;
        plVar6 = plVar3;
      }
      else {
        plVar6 = (long *)(param_1[0xf2] + uVar8 * 8);
        uVar4 = *(undefined8 *)(*plVar6 + 8);
        uVar5 = 7;
        uVar7 = 5;
        plVar6 = *(long **)(plVar6[-1] + 8);
      }
      FUN_10064e5ec(0x41a00000,0,uVar4,uVar5,plVar6,uVar7);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0xf1));
  }
  FUN_10064e5ec(0x42200000,0,plVar1,0,plVar2,1);
  FUN_10064e5ec(0,0,param_1 + 0x2a,8,plVar1,8);
  FUN_10064e5ec(0x43480000,0,plVar3,8,plVar1,8);
  return;
}




void FUN_1002e827c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10064ee6c();
  if (*(byte *)(param_1 + 0x799) != uVar1) {
    if (uVar1 == 0) {
      FUN_1002e7c68(param_1);
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x148) + 8))();
    }
    *(char *)(param_1 + 0x799) = (char)uVar1;
  }
  return;
}




void FUN_1002e82d0(long param_1)

{
  FUN_100643064();
  *(undefined1 *)(param_1 + 0x79a) = 1;
  return;
}




void FUN_1002e82f8(uint *param_1,uint param_2)

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




long * FUN_1002e8374(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar3 = (undefined8 *)FUN_100533dfc();
  puVar3[0x1b] = 0;
  *puVar3 = &PTR_FUN_10148a8f0;
  puVar3 = puVar3 + 0x1c;
  thunk_FUN_100652c08(puVar3);
  thunk_FUN_100650e64(param_1 + 0x3a);
  plVar1 = param_1 + 0x60;
  thunk_FUN_100655644(plVar1);
  thunk_FUN_100650e64(param_1 + 0x8b);
  FUN_1002e89f4(param_1 + 0xb1);
  plVar2 = param_1 + 0x187;
  thunk_FUN_100181304(plVar2,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655960(plVar1,param_1 + 0x8b,1);
  FUN_100655960(plVar1,param_1 + 0xb1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar3,PTR_s_build___RewardScreenBackground_p_101854998,"full_splash_1k");
  local_80 = (code *)CONCAT44(local_80._4_4_,0xffffa800);
  FUN_100652dd4(puVar3,&local_80,2);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar2,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_10018187c(plVar2,1);
  FUN_10065165c(param_1 + 0x26a,1);
  local_58 = DAT_101d91884;
  local_80 = FUN_1002e8584;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x188,&local_80);
  local_58 = DAT_101d918ac;
  local_80 = FUN_1002e8594;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  return param_1;
}




void FUN_1002e8584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002e8590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))();
  return;
}




void FUN_1002e8594(long *param_1)

{
  FUN_1001e7eb0(0);
                    /* WARNING: Could not recover jumptable at 0x0001002e85c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




long * thunk_FUN_1002e8374(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar3 = (undefined8 *)FUN_100533dfc();
  puVar3[0x1b] = 0;
  *puVar3 = &PTR_FUN_10148a8f0;
  puVar3 = puVar3 + 0x1c;
  thunk_FUN_100652c08(puVar3);
  thunk_FUN_100650e64(param_1 + 0x3a);
  plVar1 = param_1 + 0x60;
  thunk_FUN_100655644(plVar1);
  thunk_FUN_100650e64(param_1 + 0x8b);
  FUN_1002e89f4(param_1 + 0xb1);
  plVar2 = param_1 + 0x187;
  thunk_FUN_100181304(plVar2,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655960(plVar1,param_1 + 0x8b,1);
  FUN_100655960(plVar1,param_1 + 0xb1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar3,PTR_s_build___RewardScreenBackground_p_101854998,"full_splash_1k");
  pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,0xffffa800);
  FUN_100652dd4(puVar3,&pcStack_80,2);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar2,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_10018187c(plVar2,1);
  FUN_10065165c(param_1 + 0x26a,1);
  uStack_58 = DAT_101d91884;
  pcStack_80 = FUN_1002e8584;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x188,&pcStack_80);
  uStack_58 = DAT_101d918ac;
  pcStack_80 = FUN_1002e8594;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_80);
  return param_1;
}




void FUN_1002e85c8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_100651038(param_1 + 0x3a,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298);
  uVar1 = FUN_1004e0150("TALENT_REFUND_SCREEN_TITLE",0);
  FUN_1006513c0(param_1 + 0x3a,uVar1);
  FUN_100651038(param_1 + 0x8b,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar1 = FUN_1004e0150("TALENT_REFUND_SCREEN_DESCRIPTION",0);
  FUN_1006513c0(param_1 + 0x8b,uVar1);
  FUN_1002e86a4(param_1 + 0xb1,param_2);
  FUN_100181c30(param_1 + 0x187,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar1 = FUN_1004e0150("TALENT_REFUND_SCREEN_CLAIM_REFUND",0);
  FUN_100181af8(param_1 + 0x187,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002e86a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002e86a4(long *param_1)

{
  long *plVar1;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  plVar1 = param_1 + 0xb0;
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_10065175c(0x40000000,plVar1);
  FUN_1006513c0(plVar1,auStack_30);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002e8734(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_48;
  float local_44;
  
  FUN_100641464(&local_44,&local_48);
  FUN_10064e47c(local_44,local_48,param_1 + 0xe0);
  FUN_10064e68c(0,0,param_1 + 0xe0,8);
  lVar1 = param_1 + 0x588;
  FUN_1002e88c4(lVar1);
  fVar3 = (float)FUN_10064e3cc(lVar1);
  lVar2 = param_1 + 0x458;
  FUN_100651708(-(local_44 * -0.55) - fVar3,lVar2,1);
  FUN_10065184c(local_48 * 0.5,0,0x3f800000,lVar2);
  FUN_10064e32c(lVar2);
  FUN_10064e68c(0,0,lVar2,0);
  FUN_10064e5ec(0x42700000,0x41f00000,lVar1,0,lVar2,1);
  lVar1 = param_1 + 0x1d0;
  FUN_10064e32c(lVar1);
  FUN_10064e68c(0,0x42a00000,lVar1,4);
  FUN_1006557ec(param_1 + 0x300);
  fVar3 = 40.0;
  FUN_10064e5ec(0,0x42200000,param_1 + 0x300,4,lVar1,6);
  lVar1 = param_1 + 0xc38;
  FUN_10064e32c(param_1 + 0x1350);
  FUN_100651184(param_1 + 0x1350);
  FUN_100181c68(fVar3 * 1.5,lVar1);
  FUN_10064e32c(lVar1);
  FUN_10064e68c(0,0xc2a00000,lVar1,6);
  return;
}




void FUN_1002e88c4(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  lVar1 = param_3 + 0x158;
  FUN_10064e32c(lVar1);
  lVar2 = param_3 + 0x248;
  fVar4 = (float)FUN_10065317c(lVar1);
  uVar5 = NEON_fmov(0x41200000,4);
  local_48 = CONCAT44((int)(param_2 + (float)((ulong)uVar5 >> 0x20)),(int)(fVar4 + (float)uVar5));
  FUN_10064e48c(lVar2,&local_48);
  uVar3 = *(uint *)(param_3 + 0x2cc);
  if ((uVar3 & 0x7f80) != 0x2c80) {
    *(uint *)(param_3 + 0x2cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x2c80;
    FUN_1000200a0(lVar2);
  }
  FUN_10064e32c(lVar2);
  FUN_10064e32c(param_3 + 0x490);
  FUN_10064e32c(param_3 + 0x580);
  FUN_10064e68c(0,0,lVar2,0);
  FUN_10064e5ec(0,0,lVar1,8,lVar2,8);
  FUN_10064e5ec(0,0,param_3 + 0x580,7,param_3 + 0x490,5);
  FUN_1006557ec(param_3 + 0x338);
  FUN_10064e5ec(0,0x41200000,param_3 + 0x338,4,lVar2,6);
  FUN_1006557ec(param_3);
  return;
}




long FUN_1002e89f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100655644();
  *puVar4 = &PTR_FUN_10148aa38;
  puVar4 = puVar4 + 0x2b;
  thunk_FUN_100652c08(puVar4);
  lVar1 = param_1 + 0x248;
  thunk_FUN_100652c08(lVar1);
  lVar2 = param_1 + 0x338;
  thunk_FUN_100655644(lVar2);
  lVar3 = param_1 + 0x490;
  thunk_FUN_100652c08(lVar3);
  thunk_FUN_100650e64(param_1 + 0x580);
  FUN_100655960(param_1,lVar1,1);
  FUN_100655960(param_1,puVar4,1);
  FUN_100655960(param_1,lVar2,1);
  FUN_100655930(lVar2,lVar3,1);
  FUN_100655930(lVar2,param_1 + 0x580,1);
  FUN_100652cac(lVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(puVar4,"build://Currency.png","card_image_2");
  if ((*(float *)(param_1 + 0x1a0) != 1.4) || (*(float *)(param_1 + 0x1a4) != 1.4)) {
    *(undefined8 *)(param_1 + 0x1a0) = 0x3fb333333fb33333;
    FUN_1000200a0(puVar4);
  }
  FUN_100652cac(lVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x4d8) != 1.6) || (*(float *)(param_1 + 0x4dc) != 1.6)) {
    *(undefined8 *)(param_1 + 0x4d8) = 0x3fcccccd3fcccccd;
    FUN_1000200a0(lVar3);
  }
  return param_1;
}




void FUN_1002e8b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148aa38;
  thunk_FUN_100651068(param_1 + 0xb0);
  param_1[0x92] = &PTR_FUN_1014a7108;
  param_1[0xa9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xac);
  FUN_10064e2bc(param_1 + 0x92);
  param_1[0x67] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_1014a7108;
  param_1[0x42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e8c50(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148aa38;
  thunk_FUN_100651068(param_1 + 0xb0);
  param_1[0x92] = &PTR_FUN_1014a7108;
  param_1[0xa9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xac);
  FUN_10064e2bc(param_1 + 0x92);
  param_1[0x67] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
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




void FUN_1002e8d2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148a8f0;
  FUN_10003bd40(param_1 + 0x187);
  FUN_1002e8b78(param_1 + 0xb1);
  thunk_FUN_100651068(param_1 + 0x8b);
  param_1[0x60] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x60);
  thunk_FUN_100651068(param_1 + 0x3a);
  param_1[0x1c] = &PTR_FUN_1014a7108;
  param_1[0x33] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36);
  FUN_10064e2bc(param_1 + 0x1c);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e8dc8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148a8f0;
  FUN_10003bd40(param_1 + 0x187);
  param_1[0xb1] = &PTR_FUN_10148aa38;
  thunk_FUN_100651068(param_1 + 0x161);
  param_1[0x143] = &PTR_FUN_1014a7108;
  param_1[0x15a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15d);
  FUN_10064e2bc(param_1 + 0x143);
  param_1[0x118] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x12f);
  FUN_10064e2bc(param_1 + 0x118);
  param_1[0xfa] = &PTR_FUN_1014a7108;
  param_1[0x111] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x114);
  FUN_10064e2bc(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_1014a7108;
  param_1[0xf3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf6);
  FUN_10064e2bc(param_1 + 0xdc);
  param_1[0xb1] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xb1);
  thunk_FUN_100651068(param_1 + 0x8b);
  param_1[0x60] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x60);
  thunk_FUN_100651068(param_1 + 0x3a);
  param_1[0x1c] = &PTR_FUN_1014a7108;
  param_1[0x33] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x36);
  FUN_10064e2bc(param_1 + 0x1c);
  pvVar1 = (void *)thunk_FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002e8f08(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064f204();
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *puVar1 = &PTR_thunk_FUN_1002e8f8c_10148ab88;
  puVar1[0x2b] = 0;
  FUN_1001b11fc(puVar1 + 0x2c);
  thunk_FUN_100198904(param_1 + 0x46,puVar1 + 0x2c);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x46,1);
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) | 4;
  return param_1;
}




long * thunk_FUN_1002e8f08(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064f204();
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *puVar1 = &PTR_thunk_FUN_1002e8f8c_10148ab88;
  puVar1[0x2b] = 0;
  FUN_1001b11fc(puVar1 + 0x2c);
  thunk_FUN_100198904(param_1 + 0x46,puVar1 + 0x2c);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x46,1);
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) | 4;
  return param_1;
}




void FUN_1002e8f8c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1002e8f8c_10148ab88;
  uVar2 = *(uint *)(param_1 + 0x2a);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x2b];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0x2b];
        uVar2 = *(uint *)(param_1 + 0x2a);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (param_1[0x2b] != 0) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  thunk_FUN_100198b18(param_1 + 0x46);
  thunk_FUN_1001b1228(param_1 + 0x2c);
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002e8f8c(void)

{
  FUN_1002e8f8c();
  return;
}




void FUN_1002e9040(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e8f8c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e9054(long param_1)

{
  FUN_10064e47c(param_1 + 0x230);
  return;
}




void FUN_1002e905c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_28;
  
  FUN_100198d1c(param_1 + 0x230,param_4,param_2,param_5,param_3);
  local_28 = param_4;
  FUN_1002afbbc(param_1 + 0x150,&local_28);
  return;
}




void FUN_1002e90b0(long param_1,undefined8 param_2)

{
  FUN_1001990b0(param_1 + 0x230,param_2,0);
  return;
}




long * FUN_1002e90bc(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 local_38 [8];
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1002e9314_10148acd8;
  puVar2[0x19] = 0;
  puVar2 = puVar2 + 0x1a;
  FUN_10064e264(puVar2);
  plVar1 = param_1 + 0x31;
  thunk_FUN_1005357f4(plVar1);
  param_1[0x176] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100642bd8(puVar2,plVar1,1);
  local_38[0] = 9;
  FUN_100534ebc(plVar1,local_38);
  FUN_1002e9168(param_1);
  return param_1;
}




void FUN_1002e9168(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar3 = param_1 + 0xbb0;
  FUN_10064e48c(param_1,lVar3);
  FUN_10064e48c(param_1 + 0xd0,lVar3);
  lVar1 = param_1 + 0x188;
  FUN_10064e48c(lVar1,lVar3);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar6 = 0;
    do {
      FUN_10064e47c(*(undefined4 *)(param_1 + 0xbb0),*(float *)(param_1 + 0xbb4) * 0.4,
                    *(undefined8 *)(*(long *)(param_1 + 200) + uVar6 * 8));
      lVar3 = *(long *)(*(long *)(param_1 + 200) + uVar6 * 8) + 0x200;
      if ((uVar6 & 1) == 0) {
        FUN_100650608(lVar3,&DAT_10115a164);
        if (uVar6 != 0) goto LAB_1002e9238;
        lVar3 = **(long **)(param_1 + 200);
        bVar2 = false;
        if ((*(float *)(lVar3 + 0x44) == 0.0) && (bVar2 = false, !NAN(*(float *)(lVar3 + 0x40)))) {
          bVar2 = *(float *)(lVar3 + 0x40) == 0.0;
        }
        if (!bVar2) {
          *(undefined8 *)(lVar3 + 0x40) = 0;
          FUN_1000200a0();
        }
      }
      else {
        FUN_100650608(lVar3,&DAT_10115a168);
LAB_1002e9238:
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 200) + uVar6 * 8);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 200) + (ulong)((int)uVar6 - 1) * 8);
        FUN_10064e72c(0,uVar7,0,uVar5,2);
        FUN_10064e72c(0,uVar7,3,uVar5,3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  uVar7 = FUN_10064e3cc(lVar1);
  plVar4 = (long *)FUN_100534eb4(lVar1);
  (**(code **)(*plVar4 + 0x58))(plVar4,0,0,1,1);
  FUN_100534e6c(uVar7,lVar1);
  if (*(float *)(param_1 + 0x1cc) != 0.0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    FUN_1000200a0(lVar1);
    return;
  }
  return;
}




long * thunk_FUN_1002e90bc(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_thunk_FUN_1002e9314_10148acd8;
  puVar2[0x19] = 0;
  puVar2 = puVar2 + 0x1a;
  FUN_10064e264(puVar2);
  plVar1 = param_1 + 0x31;
  thunk_FUN_1005357f4(plVar1);
  param_1[0x176] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100642bd8(puVar2,plVar1,1);
  auStack_38[0] = 9;
  FUN_100534ebc(plVar1,auStack_38);
  FUN_1002e9168(param_1);
  return param_1;
}




void FUN_1002e9314(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002e9314_10148acd8;
  FUN_1002e9364();
  thunk_FUN_100534a3c(param_1 + 0x31);
  thunk_FUN_10064e2bc(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e9364(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 200);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 200);
        uVar2 = *(uint *)(param_1 + 0xc0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_100534ae0(param_1 + 0x188);
  return;
}




void thunk_FUN_1002e9314(void)

{
  FUN_1002e9314();
  return;
}




void FUN_1002e93d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e9314();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e93e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 local_58;
  
  iVar5 = FUN_1004e3654(param_3,&DAT_101d91650);
  bVar3 = false;
  bVar1 = false;
  if (iVar5 != 0) {
    bVar3 = (int)param_7 < 0;
    bVar1 = (int)param_7 == 0;
  }
  bVar4 = false;
  bVar2 = false;
  if (bVar1 || bVar3) {
    bVar4 = (int)param_4 < 0;
    bVar2 = (int)param_4 == 0;
  }
  bVar3 = false;
  bVar1 = false;
  if (bVar2 || bVar4) {
    bVar3 = (int)param_5 < 0;
    bVar1 = (int)param_5 == 0;
  }
  bVar4 = false;
  bVar2 = false;
  if (bVar1 || bVar3) {
    bVar2 = SBORROW4((int)param_6,1);
    bVar4 = (int)param_6 + -1 < 0;
  }
  if (bVar4 == bVar2) {
    operator_new(0x2068);
    local_58 = FUN_1002e9784();
    FUN_1002e94b0(local_58,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_1002e96f8(param_1 + 0xc0,&local_58);
    FUN_100534ad8(param_1 + 0x188,local_58,1);
    FUN_1002e9168(param_1);
  }
  return;
}




void FUN_1002e94b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  uVar2 = *(uint *)(param_1 + 0x284);
  if ((uVar2 & 0x7f80) != 0xa00) {
    *(uint *)(param_1 + 0x284) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xa00;
    FUN_1000200a0(param_1 + 0x200);
  }
  FUN_1006513c0(param_1 + 0x1cd0,param_2);
  uVar3 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1002e9dec(param_1 + 0x2d8,uVar3,param_4);
  uVar3 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1002e9dec(param_1 + 0x988,uVar3,param_5);
  FUN_1001c6fd8(param_1 + 0x1038,param_6);
  uVar3 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM",0);
  thunk_FUN_1004e439c(auStack_60,uVar3);
  FUN_1004e3120(auStack_70," ");
  FUN_1004e372c(auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  uVar3 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(auStack_60,uVar3);
  FUN_1006513c0(param_1 + 0x1e00,auStack_60);
  iVar4 = (int)param_7;
  if (0 < iVar4) {
    lVar1 = param_1 + 0x1408;
    FUN_100190efc(lVar1);
    FUN_10019141c(lVar1,param_7);
    FUN_100190fb0(lVar1);
    *(uint *)(param_1 + 0x1ae4) = *(uint *)(param_1 + 0x1ae4) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x1c14) = *(uint *)(param_1 + 0x1c14) & 0xfffffffb;
    if (iVar4 < 0x5a) {
      if (iVar4 < 0x3c) {
        if (iVar4 < 0x32) {
          if (iVar4 < 0x1e) {
            fVar5 = *(float *)(&DAT_101157fe8 + (ulong)(0x13 < iVar4) * 4);
          }
          else {
            fVar5 = 0.55;
          }
        }
        else {
          fVar5 = 0.45;
        }
      }
      else {
        fVar5 = 0.35;
      }
    }
    else {
      fVar5 = 0.3;
    }
    if ((*(float *)(param_1 + 0x1450) != fVar5) || (*(float *)(param_1 + 0x1454) != fVar5)) {
      *(float *)(param_1 + 0x1450) = fVar5;
      *(float *)(param_1 + 0x1454) = fVar5;
      FUN_1000200a0(lVar1);
    }
    FUN_1006513c0(param_1 + 0x1f30,param_3);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void FUN_1002e96f8(uint *param_1,undefined8 *param_2)

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
    FUN_1002ea0ac(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002e9778(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xbb0) = param_1;
  *(undefined4 *)(param_3 + 0xbb4) = param_2;
  FUN_1002e9168();
  return;
}




long * FUN_1002e9784(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_10064f204();
  *puVar5 = &PTR_thunk_FUN_1002e9988_10148ae20;
  puVar5 = puVar5 + 0x29;
  FUN_10064e264(puVar5);
  FUN_1006505b8(param_1 + 0x40);
  FUN_1002e9ee4(param_1 + 0x5b);
  FUN_1002e9ee4(param_1 + 0x131);
  thunk_FUN_1001c6e5c(param_1 + 0x207);
  plVar1 = param_1 + 0x281;
  thunk_FUN_100190c14(plVar1,1);
  plVar2 = param_1 + 0x39a;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x3c0;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x3e6;
  thunk_FUN_100650e64(plVar4);
  param_1[0x40c] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,param_1 + 0x40,1);
  FUN_100642bd8(puVar5,param_1 + 0x5b,1);
  FUN_100642bd8(puVar5,param_1 + 0x131,1);
  FUN_100642bd8(puVar5,param_1 + 0x207,1);
  FUN_100642bd8(puVar5,plVar3,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(puVar5,plVar4,1);
  FUN_100642bd8(puVar5,plVar2,1);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x28a) != 0.8) || (*(float *)((long)param_1 + 0x1454) != 0.8)) {
    param_1[0x28a] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar1);
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_1002e9988(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002e9988_10148ae20;
  FUN_100190f50(param_1 + 0x281);
  thunk_FUN_100651068(param_1 + 0x3e6);
  thunk_FUN_100651068(param_1 + 0x3c0);
  thunk_FUN_100651068(param_1 + 0x39a);
  param_1[0x281] = &PTR_FUN_1014609b8;
  thunk_FUN_100651068(param_1 + 0x372);
  thunk_FUN_100651068(param_1 + 0x34c);
  param_1[0x32e] = &PTR_FUN_1014a7108;
  param_1[0x345] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x348);
  FUN_10064e2bc(param_1 + 0x32e);
  thunk_FUN_100651068(param_1 + 0x308);
  thunk_FUN_1001a7dd8(param_1 + 0x292);
  FUN_10064221c(param_1 + 0x281);
  FUN_10017d364(param_1 + 0x207);
  param_1[0x131] = &PTR_FUN_10148af70;
  thunk_FUN_100651068(param_1 + 0x1e0);
  FUN_10017d364(param_1 + 0x166);
  param_1[0x148] = &PTR_FUN_1014a7108;
  param_1[0x15f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x162);
  FUN_10064e2bc(param_1 + 0x148);
  FUN_10064e2bc(param_1 + 0x131);
  param_1[0x5b] = &PTR_FUN_10148af70;
  thunk_FUN_100651068(param_1 + 0x10a);
  FUN_10017d364(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_1014a7108;
  param_1[0x89] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8c);
  FUN_10064e2bc(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x40);
  thunk_FUN_10064e2bc(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002e9b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148af70;
  thunk_FUN_100651068(param_1 + 0xaf);
  FUN_10017d364(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002e9988(void)

{
  FUN_1002e9988();
  return;
}




void FUN_1002e9b90(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002e9988();
  operator_delete(pvVar1);
  return;
}




void FUN_1002e9ba4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined1 *local_68;
  
  lVar2 = param_1 + 0x2060;
  FUN_10064e48c(param_1,lVar2);
  FUN_10064e48c(param_1 + 0x148,lVar2);
  FUN_10064e48c(param_1 + 0x200,lVar2);
  lVar2 = param_1 + 0x2d8;
  FUN_10064e47c(*(float *)(param_1 + 0x2060) * 0.25,*(undefined4 *)(param_1 + 0x2064),lVar2);
  lVar1 = param_1 + 0x988;
  FUN_10064e47c(*(float *)(param_1 + 0x2060) * 0.25,*(undefined4 *)(param_1 + 0x2064),lVar1);
  FUN_10065179c(*(float *)(param_1 + 0x2060) * 0.1,0,0x3f800000,param_1 + 0x1e00);
  FUN_10065179c(*(float *)(param_1 + 0x2060) * 0.2,0,0x3f800000,param_1 + 0x1cd0);
  uVar5 = *(ulong *)(param_1 + 0x2060);
  fVar6 = (float)uVar5 * 0.67;
  fVar7 = (float)(uVar5 >> 0x20) * 0.5;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x1448) == fVar6) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x144c)) && !NAN(fVar7))) {
    bVar4 = *(float *)(param_1 + 0x144c) == fVar7;
  }
  if (!bVar4) {
    *(ulong *)(param_1 + 0x1448) = CONCAT44(fVar7,fVar6);
    FUN_1000200a0(param_1 + 0x1408);
    uVar5 = (ulong)*(uint *)(param_1 + 0x2060);
  }
  lVar3 = param_1 + 0x1f30;
  FUN_10065179c((float)uVar5 * 0.25,0,0x3f800000,lVar3);
  fVar6 = *(float *)(param_1 + 0x2064) + -50.0;
  if ((*(float *)(param_1 + 0x1f70) != *(float *)(param_1 + 0x1448)) ||
     (*(float *)(param_1 + 0x1f74) != fVar6)) {
    *(float *)(param_1 + 0x1f70) = *(float *)(param_1 + 0x1448);
    *(float *)(param_1 + 0x1f74) = fVar6;
    FUN_1000200a0(lVar3);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1f30) + 0x28))(lVar3,&local_68);
  FUN_10064e72c(*(float *)(param_1 + 0x2060) * -0.1,lVar1,3,lVar2,1);
  FUN_10064e72c(0,lVar1,0,lVar2,0);
  FUN_10064e5ec(*(float *)(param_1 + 0x2060) * 0.05,0,param_1 + 0x1038,7,lVar1,5);
  FUN_10064e5ec(0,0,param_1 + 0x1e00,4,param_1 + 0x1038,6);
  FUN_10064e5ec(0xc1a00000,0,param_1 + 0x1cd0,1,param_1 + 0x148,1);
  return;
}




void FUN_1002e9dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 **local_68 [2];
  char local_51;
  
  fVar4 = (float)NEON_fminnm((float)(int)param_3,0x41e80000);
  if (fVar4 <= -1.0) {
    fVar4 = -1.0;
  }
  uVar2 = FUN_1000f0a34((int)fVar4);
  uVar3 = FUN_1000f0a5c((int)fVar4);
  FUN_100652d8c(param_1 + 0xb8);
  FUN_1000f0e54(local_68,uVar2,uVar3);
  pppuVar1 = (undefined8 ***)local_68[0];
  if (-1 < local_51) {
    pppuVar1 = local_68;
  }
  FUN_100652cac(param_1 + 0xb8,pppuVar1,"background");
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_1001c6fd8(param_1 + 0x1a8,param_3);
  FUN_1006513c0(param_1 + 0x578,param_2);
  FUN_1002e9fac(param_1);
  return;
}




void FUN_1002e9ed0(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x40c) = param_1;
  *(undefined4 *)((long)param_3 + 0x2064) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002e9ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




long * FUN_1002e9ee4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148af70;
  thunk_FUN_100652c08(puVar2 + 0x17);
  thunk_FUN_1001c6e5c(param_1 + 0x35);
  plVar1 = param_1 + 0xaf;
  thunk_FUN_100650e64(plVar1);
  param_1[0xd5] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x35,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  return param_1;
}




void FUN_1002e9fac(long param_1)

{
  long lVar1;
  bool bVar2;
  
  FUN_10064e48c(param_1,param_1 + 0x6a8);
  lVar1 = param_1 + 0xb8;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x100) == 0.5) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x104)))) {
    bVar2 = *(float *)(param_1 + 0x104) == 0.5;
  }
  if (!bVar2) {
    *(undefined1 **)(param_1 + 0x100) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e5ec(0,0xc2a00000,param_1 + 0x1a8,6,lVar1,6);
  FUN_10064e5ec(0,0xc1200000,param_1 + 0x578,6,lVar1,6);
  return;
}




void FUN_1002ea034(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x6a8) = param_1;
  *(undefined4 *)(param_3 + 0x6ac) = param_2;
  FUN_1002e9fac();
  return;
}




void FUN_1002ea040(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148af70;
  thunk_FUN_100651068(param_1 + 0xaf);
  FUN_10017d364(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002ea0ac(uint *param_1,uint param_2)

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




long FUN_1002ea128(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  *puVar1 = &PTR_thunk_FUN_1002ea1b4_10148b0b8;
  thunk_FUN_100652c08(puVar1 + 0x18);
  thunk_FUN_100652c08(param_1 + 0x1b0);
  thunk_FUN_100652c08(param_1 + 0x2a0);
  thunk_FUN_100652c08(param_1 + 0x390);
  thunk_FUN_100652c08(param_1 + 0x480);
  thunk_FUN_100306430(param_1 + 0x570);
  thunk_FUN_100306430(param_1 + 0xb08);
  thunk_FUN_100306430(param_1 + 0x10a0);
  *(undefined4 *)(param_1 + 0x1638) = 3;
  *(undefined2 *)(param_1 + 0x163c) = 0;
  *(undefined1 *)(param_1 + 0x163e) = 0;
  return param_1;
}




long thunk_FUN_1002ea128(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  *puVar1 = &PTR_thunk_FUN_1002ea1b4_10148b0b8;
  thunk_FUN_100652c08(puVar1 + 0x18);
  thunk_FUN_100652c08(param_1 + 0x1b0);
  thunk_FUN_100652c08(param_1 + 0x2a0);
  thunk_FUN_100652c08(param_1 + 0x390);
  thunk_FUN_100652c08(param_1 + 0x480);
  thunk_FUN_100306430(param_1 + 0x570);
  thunk_FUN_100306430(param_1 + 0xb08);
  thunk_FUN_100306430(param_1 + 0x10a0);
  *(undefined4 *)(param_1 + 0x1638) = 3;
  *(undefined2 *)(param_1 + 0x163c) = 0;
  *(undefined1 *)(param_1 + 0x163e) = 0;
  return param_1;
}




void FUN_1002ea1b4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002ea1b4_10148b0b8;
  thunk_FUN_1003064f4(param_1 + 0x214);
  thunk_FUN_1003064f4(param_1 + 0x161);
  thunk_FUN_1003064f4(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_1014a7108;
  param_1[0xa7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaa);
  FUN_10064e2bc(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_1014a7108;
  param_1[0x89] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8c);
  FUN_10064e2bc(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_1014a7108;
  param_1[0x6b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6e);
  FUN_10064e2bc(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_1014a7108;
  param_1[0x4d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002ea1b4(void)

{
  FUN_1002ea1b4();
  return;
}




void FUN_1002ea2a4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ea1b4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ea2b8(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  void *local_a8;
  code *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  *(int *)(param_1 + 0x2c7) = param_2;
  plVar10 = param_1 + 0x18;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  plVar11 = param_1 + 0x36;
  FUN_100642bd8(plVar10,plVar11,1);
  plVar1 = param_1 + 0xae;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x161;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x214;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  plVar7 = (long *)thunk_FUN_10064def8();
  (**(code **)(*plVar7 + 0x58))(plVar7,plVar10);
  FUN_10064e524(param_1,plVar7);
  iVar6 = FUN_100036694();
  puVar13 = PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if ((iVar6 == 0) &&
     (iVar6 = FUN_10002f32c(), puVar13 = PTR_s_build___MenuPartsCommon_tga_101854970, iVar6 == 0)) {
    puVar13 = (undefined *)0x0;
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  FUN_100652cac(plVar10,puVar13,"circle_button_fill");
  FUN_10064e5b8(plVar10,&DAT_101872ba8);
  FUN_100652cac(plVar11,puVar13,"voip_phone");
  FUN_100652dd4(plVar11,&DAT_10115a164,2);
  uVar12 = *(uint *)((long)param_1 + 0x234);
  if ((uVar12 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x234) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x5900;
    FUN_1000200a0(plVar11);
  }
  iVar6 = FUN_100036694();
  if (iVar6 == 0) {
    plVar7 = (long *)thunk_FUN_10064def8();
    (**(code **)(*plVar7 + 0x58))(plVar7,plVar11);
    FUN_10064e524(plVar10,plVar7);
  }
  else {
    FUN_100653080(plVar11,1);
    if ((*(float *)(param_1 + 0x3f) != 0.75) || (*(float *)((long)param_1 + 0x1fc) != 0.75)) {
      lVar14 = NEON_fmov(0x3f400000,4);
      param_1[0x3f] = lVar14;
      FUN_1000200a0(plVar11);
    }
  }
  local_78 = DAT_101dbd484;
  local_a0 = FUN_1002eaa6c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_a0);
  local_78 = DAT_101dbd458;
  local_a0 = FUN_1002eaa6c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_a0);
  local_a0 = (code *)0x439f000043fa0000;
  FUN_10064e48c(plVar1,&local_a0);
  uVar8 = FUN_1004e0150("VOIP_JOIN_VOICE_CHAT",0);
  uVar9 = FUN_1004e0150("VOIP_LEAVE_VOICE_CHAT",0);
  lVar14 = FUN_1003068d0(plVar1,0,"voip_phone",uVar8,"voip_leave",uVar9,1);
  FUN_10064e48c(lVar14,&DAT_101158b50);
  FUN_10064e4dc(lVar14,0x64000001f4);
  uVar5 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002eaa7c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(lVar14 + 0x248,&local_a0);
  local_78 = uVar5;
  local_a0 = FUN_1002eaa8c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(lVar14 + 0x818,&local_a0);
  FUN_100306a90(0x43c80000,0x40000000,plVar1,1);
  uVar8 = FUN_1004e0150("VOIP_MUTE_SELF",0);
  uVar9 = FUN_1004e0150("VOIP_UNMUTE_SELF",0);
  lVar14 = FUN_1003068d0(plVar1,1,"voip_mute",uVar8,"voip_unmuted",uVar9,1);
  FUN_10064e48c(lVar14,&DAT_101158b50);
  FUN_10064e4dc(lVar14,0x64000001f4);
  local_78 = uVar5;
  local_a0 = FUN_1002eaa9c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(lVar14 + 0x248,&local_a0);
  local_78 = uVar5;
  local_a0 = FUN_1002eaaac;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(lVar14 + 0x818,&local_a0);
  FUN_100306a90(0x43c80000,0x40000000,plVar1,2);
  uVar8 = FUN_1004e0150("VOIP_MUTE_ALLY",0);
  lVar14 = FUN_100306818(plVar1,2,"speaker_icon",uVar8);
  FUN_10064e48c(lVar14,&DAT_101158b50);
  FUN_10064e4dc(lVar14,0x64000001f4);
  plVar10 = (long *)FUN_10030617c(lVar14);
  plVar11 = (long *)FUN_10064e5a0();
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x78))(plVar10,param_1 + 0x90,1);
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1 + 0x90);
    (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  }
  FUN_100652cac(param_1 + 0x90,puVar13,"arrow_right");
  local_78 = uVar5;
  local_a0 = FUN_1002eaabc;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(lVar14 + 8,&local_a0);
  uVar12 = (uint)*(byte *)((long)param_1 + 0x163c);
  *(uint *)((long)param_1 + 0x5f4) =
       *(uint *)((long)param_1 + 0x5f4) & 0xfffffff0 |
       *(uint *)((long)param_1 + 0x5f4) & 3 | (uint)(uVar12 != 0) << 2 | uVar12 << 3;
  pcVar4 = "arrow_bg_arrow";
  if (param_2 != 0) {
    pcVar4 = "arrow_bg_arrow_right";
  }
  FUN_100652cac(param_1 + 0x54,puVar13,pcVar4);
  if (param_2 == 1) {
    *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) | 1;
  }
  uVar12 = (uint)*(byte *)((long)param_1 + 0x163c);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0xfffffff0 |
       *(uint *)((long)param_1 + 0x324) & 3 | (uint)(uVar12 != 0) << 2 | uVar12 << 3;
  FUN_10064e48c(plVar2,&DAT_101158b50);
  uVar8 = FUN_1004e0150("VOIP_MUTE_ALL",0);
  uVar9 = FUN_1004e0150("VOIP_UNMUTE_ALL",0);
  lVar14 = FUN_1003068d0(plVar2,3,"speaker_icon",uVar8,"speaker_icon_mute",uVar9,1);
  FUN_10064e48c(lVar14,&DAT_101158b50);
  FUN_10064e4dc(lVar14,0x64000001f4);
  local_78 = uVar5;
  local_a0 = FUN_1002eaacc;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(lVar14 + 0x248,&local_a0);
  local_78 = uVar5;
  local_a0 = FUN_1002eaadc;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(lVar14 + 0x818,&local_a0);
  *(uint *)((long)param_1 + 0xb8c) =
       *(uint *)((long)param_1 + 0xb8c) & 0xfffffff0 |
       *(uint *)((long)param_1 + 0xb8c) & 3 | (uint)(*(byte *)((long)param_1 + 0x163d) != 0) << 2 |
       (uint)*(byte *)((long)param_1 + 0x163d) << 3;
  FUN_100652cac(param_1 + 0x72,puVar13,"arrow_bg_arrow_right");
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 1;
  *(uint *)((long)param_1 + 0x414) =
       *(uint *)((long)param_1 + 0x414) & 0xfffffff0 |
       *(uint *)((long)param_1 + 0x414) & 3 | (uint)(*(byte *)((long)param_1 + 0x163d) != 0) << 2 |
       (uint)*(byte *)((long)param_1 + 0x163d) << 3;
  FUN_10064e47c(0x44834000,0x43e10000,plVar3);
  uVar8 = FUN_1004e0150("VOIP_CANNOT_USE_REASON",0);
  thunk_FUN_1004e439c(&local_a0,uVar8);
  FUN_1004e3120(auStack_b0,"\n\n");
  FUN_1004e372c(&local_a0,auStack_b0);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  uVar8 = FUN_1004e0150("VOIP_CANNOT_USE_TIP",0);
  FUN_1004e372c(&local_a0,uVar8);
  FUN_1003069a8(plVar3,0x7b,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_a0);
  *(uint *)((long)param_1 + 0x1124) =
       *(uint *)((long)param_1 + 0x1124) & 0xfffffff0 |
       *(uint *)((long)param_1 + 0x1124) & 3 | (uint)(*(byte *)((long)param_1 + 0x163e) != 0) << 2 |
       (uint)*(byte *)((long)param_1 + 0x163e) << 3;
  if (local_98 != (long *)0x0) {
    operator_delete__(local_98);
  }
  return;
}




void FUN_1002eaa6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_1002eaa7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_1002eaa8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_1002eaa9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_1002eaaac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_1002eaabc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  return;
}




void FUN_1002eaacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  return;
}




void FUN_1002eaadc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002eaae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))();
  return;
}




void FUN_1002eaaec(long *param_1)

{
  *(uint *)((long)param_1 + 0xb8c) = *(uint *)((long)param_1 + 0xb8c) & 0xfffffff3;
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffff3;
  *(undefined1 *)((long)param_1 + 0x163d) = 0;
  (**(code **)(*param_1 + 0x90))();
  FUN_1002eab98(param_1,0);
  *(undefined1 *)((long)param_1 + 0x163e) = 0;
  *(uint *)((long)param_1 + 0x1124) = *(uint *)((long)param_1 + 0x1124) & 0xfffffff3;
  FUN_1002eb1e4(param_1);
  return;
}




void FUN_1002eab58(long *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xc;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0xb8c) = uVar1 | *(uint *)((long)param_1 + 0xb8c) & 0xfffffff3;
  *(uint *)((long)param_1 + 0x414) = uVar1 | *(uint *)((long)param_1 + 0x414) & 0xfffffff3;
  *(char *)((long)param_1 + 0x163d) = (char)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002eab94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_1002eab98(long *param_1,int param_2)

{
  uint uVar1;
  
  *(char *)((long)param_1 + 0x163c) = (char)param_2;
  uVar1 = 0xc;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x5f4) = uVar1 | *(uint *)((long)param_1 + 0x5f4) & 0xfffffff3;
  FUN_1002eb1e4();
  if ((*(char *)((long)param_1 + 0x163d) != '\0') && (*(char *)((long)param_1 + 0x163c) == '\0')) {
    *(uint *)((long)param_1 + 0xb8c) = *(uint *)((long)param_1 + 0xb8c) & 0xfffffff3;
    *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffff3;
    *(undefined1 *)((long)param_1 + 0x163d) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eac14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1002eac18(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(char *)(param_1 + 0x163e) = (char)param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x163c) != '\0') {
      FUN_1002eab98(param_1,0);
    }
    uVar1 = 4;
    uVar2 = 8;
  }
  *(uint *)(param_1 + 0x1124) = uVar1 | uVar2 | *(uint *)(param_1 + 0x1124) & 0xfffffff3;
  FUN_1002eb1e4(param_1);
  return;
}




void FUN_1002eac88(void)

{
  return;
}




void FUN_1002eac8c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  FUN_10064e47c(param_3 + 0x18);
  FUN_10064e47c(param_1,param_2,param_3 + 0x36);
                    /* WARNING: Could not recover jumptable at 0x0001002eacd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_1002eacdc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  FUN_10064e32c();
  plVar1 = param_3 + 0xae;
  FUN_100306784(plVar1);
  plVar2 = param_3 + 0x161;
  FUN_100306784(plVar2);
  iVar4 = (int)param_3[0x2c7];
  if (iVar4 == 2) {
    fVar7 = (float)FUN_10064e3cc(plVar1);
    fVar8 = (float)FUN_1006531b0(param_3 + 0x54);
    FUN_1006531b0(param_3 + 0x54);
    param_2 = -100.0 - param_2;
    fVar10 = *(float *)(param_3 + 0xb6);
    bVar3 = false;
    if ((fVar10 == -(fVar8 + fVar7)) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x5b4)) && !NAN(param_2))) {
      bVar3 = *(float *)((long)param_3 + 0x5b4) == param_2;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0xb6) = -(fVar8 + fVar7);
      *(float *)((long)param_3 + 0x5b4) = param_2;
      FUN_1000200a0(plVar1);
      fVar10 = *(float *)(param_3 + 0xb6);
    }
    fVar7 = (float)FUN_10064e3cc(plVar1);
    fVar8 = -12.0;
    fVar10 = fVar10 + fVar7 + -12.0;
LAB_1002eaeb0:
    FUN_10065317c(param_3 + 0x18);
    fVar7 = fVar8 * 0.5 + -20.0;
LAB_1002eaec4:
    bVar3 = false;
    if ((*(float *)(param_3 + 0x5c) == fVar10) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x2e4)) && !NAN(fVar7))) {
      bVar3 = *(float *)((long)param_3 + 0x2e4) == fVar7;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x5c) = fVar10;
      *(float *)((long)param_3 + 0x2e4) = fVar7;
      FUN_1000200a0(param_3 + 0x54);
    }
  }
  else {
    if (iVar4 == 1) {
      fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      plVar5 = param_3 + 0x54;
      fVar8 = (float)FUN_1006531b0(plVar5);
      FUN_1006531b0(plVar5);
      param_2 = -100.0 - param_2;
      fVar10 = *(float *)(param_3 + 0xb6);
      bVar3 = false;
      if ((fVar10 == fVar8 + fVar7) &&
         (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x5b4)) && !NAN(param_2))) {
        bVar3 = *(float *)((long)param_3 + 0x5b4) == param_2;
      }
      if (!bVar3) {
        *(float *)(param_3 + 0xb6) = fVar8 + fVar7;
        *(float *)((long)param_3 + 0x5b4) = param_2;
        FUN_1000200a0(plVar1);
        fVar10 = *(float *)(param_3 + 0xb6);
      }
      fVar7 = (float)FUN_1006531b0(plVar5);
      fVar8 = 9.0;
      fVar10 = (fVar10 - fVar7) + 9.0;
      goto LAB_1002eaeb0;
    }
    if (iVar4 == 0) {
      fVar7 = (float)FUN_10064259c(plVar1);
      fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar8 = (fVar8 - fVar7) * 0.5;
      FUN_10064259c(plVar1);
      plVar5 = param_3 + 0x54;
      fVar7 = param_2;
      FUN_1006531b0(plVar5);
      fVar7 = -(fVar7 + param_2);
      bVar3 = false;
      if ((*(float *)(param_3 + 0xb6) == fVar8) &&
         (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x5b4)) && !NAN(fVar7))) {
        bVar3 = *(float *)((long)param_3 + 0x5b4) == fVar7;
      }
      if (!bVar3) {
        *(float *)(param_3 + 0xb6) = fVar8;
        *(float *)((long)param_3 + 0x5b4) = fVar7;
        FUN_1000200a0(plVar1);
      }
      fVar8 = (float)FUN_10065317c(plVar5);
      fVar7 = 10.0;
      fVar10 = fVar8 * 0.5 + 10.0;
      FUN_10065317c(plVar5);
      fVar7 = -12.0 - fVar7;
      goto LAB_1002eaec4;
    }
  }
  fVar7 = 9.0;
  if ((int)param_3[0x2c7] != 0) {
    fVar7 = 0.0;
  }
  plVar5 = (long *)FUN_100306b50(plVar1,2);
  fVar11 = *(float *)(plVar5 + 8);
  fVar12 = *(float *)((long)plVar5 + 0x44);
  fVar14 = *(float *)(param_3 + 0xb6);
  fVar13 = *(float *)((long)param_3 + 0x5b4);
  fVar9 = (float)FUN_10064259c(plVar2);
  fVar8 = (float)FUN_10065317c(param_3 + 0x54);
  fVar9 = fVar14 + fVar11 + fVar9;
  fVar15 = fVar9 + fVar8 * 0.6;
  (**(code **)(*plVar5 + 0x50))(plVar5);
  fVar8 = fVar9;
  FUN_10064e3cc(plVar2);
  fVar10 = fVar8;
  FUN_10065317c(param_3 + 0x54);
  fVar8 = ((fVar12 + fVar13 + -16.0 + fVar9) - fVar8) + fVar10 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x169) == fVar15) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0xb4c)) && !NAN(fVar8))) {
    bVar3 = *(float *)((long)param_3 + 0xb4c) == fVar8;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x169) = fVar15;
    *(float *)((long)param_3 + 0xb4c) = fVar8;
    FUN_1000200a0(plVar2);
  }
  fVar10 = (float)(**(code **)(*plVar5 + 0x50))(plVar5);
  fVar7 = fVar14 + fVar11 + fVar7;
  fVar10 = fVar7 + fVar10;
  (**(code **)(*plVar5 + 0x50))(plVar5);
  fVar8 = fVar7;
  FUN_10065317c(param_3 + 0x72);
  fVar7 = fVar13 + fVar12 + (fVar7 - fVar8) * 0.5;
  fVar8 = *(float *)(param_3 + 0x7a);
  bVar3 = false;
  if ((fVar8 == fVar10) && (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x3d4)) && !NAN(fVar7)))
  {
    bVar3 = *(float *)((long)param_3 + 0x3d4) == fVar7;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x7a) = fVar10;
    *(float *)((long)param_3 + 0x3d4) = fVar7;
    FUN_1000200a0(param_3 + 0x72);
  }
  iVar4 = FUN_10064ef04(plVar1);
  fVar7 = fVar8;
  if (iVar4 != 0) {
    FUN_10064edf4(plVar2);
    fVar7 = fVar8;
    lVar6 = FUN_10003d5bc(plVar2);
    fVar10 = *(float *)(lVar6 + 0x14);
    FUN_10064e3cc(plVar2);
    fVar10 = fVar7 * fVar10;
    if (fVar8 < fVar10) {
      lVar6 = FUN_10003d5bc(param_3);
      fVar7 = *(float *)((long)param_3 + 0xb4c) + 15.0;
      fVar8 = (fVar10 - fVar8) / *(float *)(lVar6 + 0x14) + fVar7;
      if (*(float *)((long)param_3 + 0xb4c) != fVar8) {
        *(float *)((long)param_3 + 0xb4c) = fVar8;
        FUN_1000200a0(plVar2);
      }
    }
  }
  plVar2 = param_3 + 0x214;
  fVar11 = *(float *)(param_3 + 0xb6);
  fVar12 = *(float *)((long)param_3 + 0x5b4);
  fVar10 = (float)FUN_10064259c(plVar1);
  fVar8 = fVar7;
  fVar9 = (float)FUN_10064259c(plVar2);
  fVar11 = (fVar10 - fVar9) + fVar11;
  fVar12 = (fVar7 - fVar8) + fVar12;
  if ((*(float *)(param_3 + 0x21c) != fVar11) || (*(float *)((long)param_3 + 0x10e4) != fVar12)) {
    *(float *)(param_3 + 0x21c) = fVar11;
    *(float *)((long)param_3 + 0x10e4) = fVar12;
    FUN_1000200a0(plVar2);
  }
  if ((int)param_3[0x2c7] == 1) {
    fVar12 = *(float *)(param_3 + 0x21c);
    fVar7 = 550.0;
  }
  else {
    if ((int)param_3[0x2c7] != 0) goto LAB_1002eb128;
    fVar12 = *(float *)(param_3 + 0x21c);
    fVar7 = 560.0;
  }
  if (fVar12 != fVar12 + fVar7) {
    *(float *)(param_3 + 0x21c) = fVar12 + fVar7;
    FUN_1000200a0(plVar2);
  }
LAB_1002eb128:
  iVar4 = FUN_100036694();
  if (iVar4 != 0) {
    fVar7 = (float)FUN_10065317c(param_3 + 0x36);
    if ((*(float *)(param_3 + 0x3e) != fVar7 * 0.23) ||
       (*(float *)((long)param_3 + 500) != fVar12 * 0.18)) {
      *(float *)(param_3 + 0x3e) = fVar7 * 0.23;
      *(float *)((long)param_3 + 500) = fVar12 * 0.18;
      FUN_1000200a0(param_3 + 0x36);
      return;
    }
  }
  return;
}




undefined1 FUN_1002eb1c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x163c);
}




undefined1 FUN_1002eb1cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x163d);
}




undefined1 FUN_1002eb1d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x163e);
}




void FUN_1002eb1e4(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x163c) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x163e);
    uVar3 = (uint)bVar1;
    uVar2 = *(uint *)(param_1 + 0x324) & 0xfffffffb | (uint)bVar1 << 2;
    *(uint *)(param_1 + 0x324) = uVar2;
    if (bVar1 == 0) goto LAB_1002eb228;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x324) | 4;
    *(uint *)(param_1 + 0x324) = uVar2;
  }
  uVar3 = 8;
LAB_1002eb228:
  *(uint *)(param_1 + 0x324) = uVar2 & 0xfffffff7 | uVar3;
  return;
}




void FUN_1002eb238(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = param_1 + 0xae;
  lVar2 = FUN_100306b50(plVar4,0);
  if (lVar2 != 0) {
    FUN_1003062cc(lVar2,param_2);
  }
  plVar3 = (long *)FUN_100306b50(plVar4,1);
  plVar4 = (long *)FUN_100306b50(plVar4,2);
  (**(code **)(*plVar3 + 0x148))(plVar3,param_2);
  (**(code **)(*plVar4 + 0x148))(plVar4,param_2);
  uVar1 = *(uint *)((long)plVar3 + 0x84);
  uVar5 = 0xff;
  if ((int)param_2 == 0) {
    uVar5 = 0x66;
  }
  if (uVar5 != (uVar1 >> 7 & 0xff)) {
    *(uint *)((long)plVar3 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar5 << 7;
    FUN_1000200a0(plVar3);
  }
  uVar1 = *(uint *)((long)plVar4 + 0x84);
  if (uVar5 != (uVar1 >> 7 & 0xff)) {
    *(uint *)((long)plVar4 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar5 << 7;
    FUN_1000200a0(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eb31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1002eb320(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100306b50(param_1 + 0xae,1);
  if (lVar1 != 0) {
    FUN_1003062cc(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eb360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1002eb364(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100306b50(param_1 + 0x161,3);
  if (lVar1 != 0) {
    FUN_1003062cc(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eb3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1002eb3a8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_100306b50(param_1 + 0x161);
  if (lVar1 != 0) {
    FUN_1003062cc(lVar1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eb3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1002eb3e8(undefined1 param_1 [16],float param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  lVar1 = param_3 + 0xb08;
  uVar2 = FUN_10064e3cc(lVar1);
  local_70 = (code *)CONCAT44(param_2 + 102.0,uVar2);
  FUN_10064e48c(lVar1,&local_70);
  FUN_100306a90(0x43c80000,0x40000000,lVar1,param_4);
  lVar1 = FUN_1003068d0(lVar1,param_4,"speaker_icon",param_5,"speaker_icon_mute",param_5,param_6);
  uVar2 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002eb50c;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_3;
  local_50 = param_4 & 0xffffffff;
  FUN_10001554c(lVar1 + 0x248,&local_70);
  local_48 = uVar2;
  local_70 = FUN_1002eb520;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_3;
  local_50 = param_4 & 0xffffffff;
  FUN_10001554c(lVar1 + 0x818,&local_70);
  FUN_10064e48c(lVar1,&DAT_101158b50);
  FUN_10064e4dc(lVar1,0x64000001f4);
  return;
}




void FUN_1002eb50c(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001002eb51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))(*(long **)(param_1 + 0xb8),in_x4);
  return;
}




void FUN_1002eb520(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001002eb530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))(*(long **)(param_1 + 0xb8),in_x4);
  return;
}




void FUN_1002eb534(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  undefined4 local_28;
  float fStack_24;
  
  param_3 = param_3 + 0xb08;
  FUN_100306c28(param_3);
  FUN_100306cd8(param_3,param_4);
  local_28 = FUN_10064e3cc(param_3);
  fStack_24 = param_2 + -102.0;
  FUN_10064e48c(param_3,&local_28);
  return;
}




bool FUN_1002eb594(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100306b50(param_1 + 0xb08);
  return lVar1 != 0;
}




void FUN_1002eb5b4(long param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int aiStack_40 [2];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar5 = (long)aiStack_40 - ((ulong)param_3 * 4 + 0xf & 0x7fffffff0);
  uVar2 = FUN_100306b9c(param_1 + 0xb08,lVar5);
  if (uVar2 == 0 || param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      iVar1 = *(int *)(lVar5 + uVar4 * 4);
      if (iVar1 != 3) {
        *(int *)(param_2 + uVar3 * 4) = iVar1;
        uVar3 = (ulong)((int)uVar3 + 1);
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 < uVar2) && (uVar4 < param_3));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




void FUN_1002eb684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_100306b50(param_1 + 0xb08);
  if (lVar1 != 0) {
    FUN_1003062cc(lVar1,param_3);
    return;
  }
  return;
}




long * FUN_1002eb6bc(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  
  puVar7 = (undefined8 *)FUN_10052fa40();
  *puVar7 = &PTR_thunk_FUN_1002ebc50_10148b208;
  puVar7 = puVar7 + 0x48;
  thunk_FUN_100651ebc(puVar7);
  plVar1 = param_1 + 0x72;
  thunk_FUN_100651ebc(plVar1);
  plVar2 = param_1 + 0x9c;
  thunk_FUN_100651ebc(plVar2);
  plVar3 = param_1 + 0xc6;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xe4;
  thunk_FUN_100652c08(plVar4);
  param_1[0x102] = 0;
  plVar5 = param_1 + 0x103;
  thunk_FUN_1006421a8(plVar5);
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = (long)(param_1 + 0x115);
  *(undefined4 *)(param_1 + 0x117) = 0;
  *(undefined4 *)((long)param_1 + 0x8bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x8c4) = 0;
  param_1[0x11a] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  FUN_10003330c(param_1 + 0x11d,&DAT_101d23718);
  *(undefined2 *)(param_1 + 0x120) = 0x100;
  *(char *)((long)param_1 + 0x902) = (char)param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100642bd8(plVar5,plVar2,1);
  FUN_100642bd8(plVar5,plVar3,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  ppuVar6 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar6 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar8 = *ppuVar6;
  FUN_100652ca4(plVar3,puVar8);
  FUN_100652cac(plVar4,puVar8,"white_background");
  *(uint *)((long)param_1 + 0x7a4) = *(uint *)((long)param_1 + 0x7a4) & 0xfffffffb;
  FUN_100651f8c(plVar2,puVar8);
  FUN_100651f94(plVar2,"button_lively_glow_top_left",0,0,0,"button_lively_glow_top_middle",0,0,0,
                "button_lively_glow_top_left",1,"button_lively_glow_middle_left",0,0,0,
                "button_lively_glow_middle_left",1,"button_lively_glow_bottom_left",0,
                "button_lively_glow_bottom_middle",0,"button_lively_glow_bottom_left",1);
  *(uint *)((long)param_1 + 0x564) = *(uint *)((long)param_1 + 0x564) & 0xffffffbf;
  FUN_100651f8c(plVar1,puVar8);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xfffffffb;
  FUN_100651f8c(puVar7,puVar8);
  FUN_1002eb970(param_1,2);
  return param_1;
}




void FUN_1002eb970(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_3 + 0x117) = param_4;
  switch(param_4) {
  case 0:
    *(uint *)((long)param_3 + 0x6b4) = *(uint *)((long)param_3 + 0x6b4) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x7a4) = *(uint *)((long)param_3 + 0x7a4) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x414) = *(uint *)((long)param_3 + 0x414) & 0xfffffffb;
    if ((long *)param_3[0x102] != (long *)0x0) {
      local_28 = (**(code **)(*(long *)param_3[0x102] + 0x48))();
      uStack_24 = param_2;
      FUN_10064e48c(param_3,&local_28);
    }
    goto switchD_1002eb9a8_default;
  case 1:
    FUN_100652444(param_3 + 0x72,"white_background",0,0,0,"white_background",0,0,0,
                  "white_background",0,0);
    FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_3 + 0x72);
    goto LAB_1002ebb08;
  case 2:
    FUN_100651f94(param_3 + 0x72,"button_lively_generic_top_left",0,0,0,
                  "button_lively_generic_top_middle",0,0,0,"button_lively_generic_top_left",1,
                  "button_lively_generic_middle_left",0,0,0,"button_lively_generic_middle_left",1,
                  "button_lively_generic_bottom_left",0,"button_lively_generic_bottom_middle",0,
                  "button_lively_generic_bottom_left",1);
LAB_1002ebb08:
    *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x414) = *(uint *)((long)param_3 + 0x414) | 4;
    goto switchD_1002eb9a8_default;
  case 3:
    pcVar2 = "button_decorative_fill_purchase";
    break;
  case 4:
    pcVar2 = "button_decorative_fill_upgrade";
    break;
  case 5:
    pcVar2 = "button_lively_generic_tint_bg";
    break;
  default:
    goto switchD_1002eb9a8_default;
  }
  FUN_100652cdc(param_3 + 0xc6,pcVar2);
  FUN_100651f94(param_3 + 0x72,"button_lively_top_left",0,0,0,"button_lively_top_middle",0,0,0,
                "button_lively_top_left",1,"button_lively_middle_left",0,0,0,
                "button_lively_middle_left",1,"button_lively_bottom_left",0,
                "button_lively_bottom_middle",0,"button_lively_bottom_left",1);
  *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) | 4;
switchD_1002eb9a8_default:
  uVar1 = FUN_100653144(param_3 + 0xc6);
  FUN_10064e4dc(param_3,uVar1);
  FUN_1006524f8(param_3 + 0x48,param_3 + 0x72);
  (**(code **)(*param_3 + 0x168))(param_3);
  (**(code **)(*param_3 + 0x160))(param_3);
  return;
}




void FUN_1002ebc50(undefined8 *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_1002ebc50_10148b208;
  plVar1 = param_1 + 0x115;
  plVar5 = (long *)param_1[0x114];
  while (plVar5 != plVar1) {
    if ((long *)plVar5[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[7] + 8))();
    }
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar3 = plVar5 + 2;
      bVar2 = *(long **)*plVar3 != plVar5;
      plVar5 = (long *)*plVar3;
      if (bVar2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar3;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_1002ed4e4(param_1 + 0x114,param_1[0x115]);
  param_1[0x114] = plVar1;
  param_1[0x116] = 0;
  *plVar1 = 0;
  if (*(char *)((long)param_1 + 0x8ff) < '\0') {
    operator_delete((void *)param_1[0x11d]);
  }
  if (*(char *)((long)param_1 + 0x8e7) < '\0') {
    operator_delete((void *)param_1[0x11a]);
  }
  FUN_1002ed4e4(param_1 + 0x114,param_1[0x115]);
  FUN_10064230c(param_1 + 0x103);
  param_1[0xe4] = &PTR_FUN_1014a7108;
  param_1[0xfb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfe);
  FUN_10064e2bc(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_1014a7108;
  param_1[0xdd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe0);
  FUN_10064e2bc(param_1 + 0xc6);
  param_1[0x9c] = &PTR_FUN_1014a6db0;
  param_1[0xb3] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xb6);
  FUN_10064e2bc(param_1 + 0x9c);
  param_1[0x72] = &PTR_FUN_1014a6db0;
  param_1[0x89] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x8c);
  FUN_10064e2bc(param_1 + 0x72);
  param_1[0x48] = &PTR_FUN_1014a6db0;
  param_1[0x5f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x62);
  FUN_10064e2bc(param_1 + 0x48);
  FUN_10052ffb4(param_1);
  return;
}




void thunk_FUN_1002ebc50(void)

{
  FUN_1002ebc50();
  return;
}




void FUN_1002ebdf8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ebc50();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ebe0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100652d8c(param_1 + 0x630);
  FUN_100652cac(param_1 + 0x630,param_2,param_3);
  return;
}




void FUN_1002ebe4c(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x8bc) = *param_2;
  FUN_100652dd4(param_1 + 0x630,param_1 + 0x8bc,2);
  return;
}




void FUN_1002ebe68(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x6b4);
  if ((int)(param_1 * 255.0) == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x6b4) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_1000200a0(param_2 + 0x630);
  return;
}




void FUN_1002ebea0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x6b4) = *(uint *)(param_1 + 0x6b4) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xfffffffb;
  return;
}




void FUN_1002ebecc(undefined4 param_1,long *param_2)

{
  *(undefined4 *)((long)param_2 + 0x8c4) = param_1;
  *(undefined4 *)(param_2 + 0x119) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001002ebedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))();
  return;
}




void FUN_1002ebee0(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)((long)param_3 + 0x8c4) = param_1;
  *(undefined4 *)(param_3 + 0x119) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002ebef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x160))();
  return;
}




void FUN_1002ebef4(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x118) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002ebf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))();
  return;
}




void FUN_1002ebf04(long param_1,string *param_2)

{
  std::string::operator=((string *)(param_1 + 0x8e8),param_2);
  return;
}




void FUN_1002ebf0c(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,"tapandhold");
  plVar1 = (long *)FUN_1002ed534(param_1 + 0x114,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  if (param_1 + 0x115 == plVar1) {
    pvVar2 = operator_new(0x8d8);
    thunk_FUN_1002ed72c(pvVar2,param_1);
    (**(code **)(*param_1 + 0x78))(param_1,pvVar2,1);
    FUN_10001549c(local_48,"tapandhold");
    puVar3 = (undefined8 *)FUN_1002ebfd4(param_1 + 0x114,local_48);
    *puVar3 = pvVar2;
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




long FUN_1002ebfd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_1002ed634(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined8 *)((long)pvVar2 + 0x38) = 0;
    FUN_1002ed6d8(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_1002ec050(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_68;
  float fStack_64;
  
  plVar5 = param_3 + 0x72;
  fVar11 = DAT_101dc1cb8._4_4_;
  fVar6 = (float)DAT_101dc1cb8;
  if ((*(byte *)((long)param_3 + 0x414) >> 2 & 1) != 0) {
    fVar6 = (float)FUN_100652390(plVar5,0);
    fVar11 = param_2 * 0.5;
    fVar6 = fVar6 * 0.5;
  }
  plVar3 = param_3 + 0xc6;
  local_68 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_68 = local_68 - fVar6;
  fStack_64 = param_2 - fVar11;
  fVar9 = fStack_64;
  FUN_10064e48c(plVar3,&local_68);
  local_68 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_68 = local_68 - fVar6;
  fStack_64 = fVar9 - fVar11;
  fVar10 = fStack_64;
  FUN_10064e48c(param_3 + 0xe4,&local_68);
  local_68 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_64 = fVar10;
  FUN_10064e48c(plVar5,&local_68);
  plVar1 = param_3 + 0x9c;
  fVar9 = DAT_101dc1cb8._4_4_;
  fVar7 = (float)DAT_101dc1cb8;
  if ((*(byte *)((long)param_3 + 0x564) >> 2 & 1) != 0) {
    fVar7 = (float)FUN_100652390(plVar1,0);
    fVar9 = fVar10 * 3.0;
    fVar7 = fVar7 * 3.0;
  }
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_1006525c4(fVar7,fVar8 - (fVar6 + fVar7 * 0.4),fVar7,fVar9,fVar10 - (fVar11 + fVar9 * 0.5),
                fVar9,plVar1);
  FUN_10064e5ec(0,0,param_3 + 0x103,8,param_3,8);
  FUN_10064e5ec(0,0,plVar3,8,param_3 + 0x103,8);
  FUN_10064e5ec(0,0,param_3 + 0xe4,8,plVar3,8);
  FUN_10064e5ec(0,0,plVar5,8,plVar3,8);
  FUN_10064e5ec(0,0,plVar1,8,plVar3,8);
  plVar5 = (long *)param_3[0x114];
  while (plVar5 != param_3 + 0x115) {
    (**(code **)(*(long *)plVar5[7] + 0x138))();
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar3 = plVar5 + 2;
      bVar2 = *(long **)*plVar3 != plVar5;
      plVar5 = (long *)*plVar3;
      if (bVar2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar3;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}




void FUN_1002ec2b4(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x900) == '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x8c0);
  }
  else {
    fVar1 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x8c0));
    fVar2 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x8c1));
    fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x8c2));
    local_24 = CONCAT13(0xff,CONCAT12((char)(int)(fVar3 * 0.5),
                                      CONCAT11((char)(int)(fVar2 * 0.5),(char)(int)(fVar1 * 0.5))));
  }
  FUN_100652590(param_1 + 0x390,&local_24,2);
  if (*(char *)(param_1 + 0x900) == '\0') {
    local_28 = 0xffffffff;
  }
  else {
    local_28 = 0xff808080;
  }
  FUN_100652590(param_1 + 0x4e0,&local_28,2);
  if (*(char *)(param_1 + 0x900) == '\0') {
    local_2c = *(undefined4 *)(param_1 + 0x8bc);
  }
  else {
    local_2c = 0xff404040;
  }
  FUN_100652dd4(param_1 + 0x630,&local_2c,2);
  return;
}




void FUN_1002ec3a4(long *param_1)

{
  FUN_10064e328();
                    /* WARNING: Could not recover jumptable at 0x0001002ec3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_1002ec3d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100640db8(0x3f800000,0x3f800000,0x3e4ccccd,FUN_10001f160);
  FUN_100642b14(param_1 + 0x818,uVar1);
  return;
}




void FUN_1002ec410(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)((long)param_1 + 0x901) != '\0') &&
     (((**(code **)(*param_1 + 0x148))(param_1), *(float *)(param_1 + 0x10c) != 0.95 ||
      (*(float *)((long)param_1 + 0x864) != 0.95)))) {
    param_1[0x10c] = 0x3f7333333f733333;
    FUN_1000200a0(param_1 + 0x103);
  }
  if (*(char *)((long)param_1 + 0x8e7) < '\0') {
    if (param_1[0x11b] == 0) {
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x8e7) == '\0') {
    return;
  }
  FUN_100642324(param_1);
  uVar1 = FUN_1001a47a4();
  FUN_1001e1e48(uVar1,param_1 + 0x11a,*(undefined1 *)((long)param_1 + 0x902),0);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_1002ec4d8(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  uVar3 = FUN_100530020();
  iVar2 = (int)uVar3;
  if (iVar2 == 3) {
    uVar4 = 1;
  }
  else {
    if (iVar2 == 1) {
      lVar5 = 0x30;
    }
    else {
      if (iVar2 != 0) goto LAB_1002ec540;
      lVar5 = 0x2f;
    }
    (**(code **)(*param_1 + lVar5 * 8))(param_1);
    uVar4 = 0;
  }
  (**(code **)(*param_1 + 0x170))(param_1,uVar4);
LAB_1002ec540:
  plVar7 = (long *)param_1[0x114];
  while (plVar7 != param_1 + 0x115) {
    (**(code **)(*(long *)plVar7[7] + 0x140))((long *)plVar7[7],uVar3);
    plVar6 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      plVar6 = plVar7 + 2;
      bVar1 = *(long **)*plVar6 != plVar7;
      plVar7 = (long *)*plVar6;
      if (bVar1) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          plVar7 = (long *)*plVar6;
        } while (*plVar7 != lVar5);
      }
    }
    else {
      do {
        plVar7 = plVar6;
        plVar6 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  FUN_10064e5ec(0,0,param_1 + 0x103,8,param_1,8);
  return;
}




void FUN_1002ec5dc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x8ff) < '\0') {
    if (*(long *)(param_1 + 0x8f0) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x8ff) == '\0') {
    return;
  }
  FUN_100642324(param_1);
  uVar1 = FUN_1001a47a4();
  FUN_1001e1e48(uVar1,param_1 + 0x8e8,*(undefined1 *)(param_1 + 0x902),0);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_1002ec654(long *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x120) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002ec660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))();
  return;
}




void FUN_1002ec664(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  
  lVar1 = param_3 + 0x240;
  local_48 = FUN_10064e3cc(param_3 + 0x390);
  uStack_44 = param_2;
  FUN_10064e48c(lVar1,&local_48);
  bVar3 = false;
  if ((*(float *)(param_3 + 0x290) == (float)DAT_101873a40) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0x294)) && !NAN(DAT_101873a40._4_4_))) {
    bVar3 = *(float *)(param_3 + 0x294) == DAT_101873a40._4_4_;
  }
  if (!bVar3) {
    *(ulong *)(param_3 + 0x290) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar1);
  }
  FUN_10064e5ec(0,0,lVar1,8,param_3,8);
  FUN_100642324(lVar1);
  uVar6 = *(uint *)(param_3 + 0x2c4) | 4;
  *(uint *)(param_3 + 0x2c4) = uVar6;
  if ((*(float *)(param_3 + 0x288) != 1.2) || (*(float *)(param_3 + 0x28c) != 1.2)) {
    *(undefined8 *)(param_3 + 0x288) = 0x3f99999a3f99999a;
    FUN_1000200a0(lVar1);
    uVar6 = *(uint *)(param_3 + 0x2c4);
  }
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)(param_3 + 0x2c4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(lVar1);
  }
  uVar4 = FUN_100640840(0,0x3f000000,FUN_10001f160);
  FUN_100640db8(0x40000000,0x40000000,0x3f000000,FUN_10001f160);
  lVar2 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f1bc(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar7,uVar4);
  FUN_100642b14(lVar1,puVar7);
  lVar2 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
  if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *puVar7;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_10063ee9c(puVar7);
  *(undefined ***)puVar7 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  FUN_100642b14(lVar1,puVar7);
  return;
}




void FUN_1002ec8ac(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  lVar1 = param_1 + 0x720;
  uVar4 = FUN_100642bc8(lVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x7a4);
  *(uint *)(param_1 + 0x7a4) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x7a4) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  uVar5 = FUN_100640840(0x3f4ccccd,0x3f4ccccd,FUN_10001f218);
  FUN_100640840(0,0x3f4ccccd,FUN_10001f160);
  lVar3 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063f564(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063f614(puVar7,uVar5);
  FUN_10063f664(puVar7);
  FUN_100642b14(lVar1,puVar7);
  return;
}




void FUN_1002eca0c(long param_1)

{
  FUN_100642324(param_1 + 0x720);
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xfffffffb;
  return;
}




long * FUN_1002eca3c(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1002eb6bc();
  *puVar3 = &PTR_FUN_10148b3a0;
  puVar3 = puVar3 + 0x121;
  thunk_FUN_100650e64(puVar3);
  *(undefined4 *)(param_1 + 0x147) = 3;
  *(undefined4 *)((long)param_1 + 0xa3c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x148) = 0;
  iVar2 = FUN_100126c88();
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar2 == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(puVar3,*ppuVar1);
  *(undefined8 *)((long)param_1 + 0x8c4) = 0x41c00000;
  (**(code **)(*param_1 + 0x160))(param_1);
  param_1[0x102] = (long)puVar3;
  FUN_100642bd8(param_1 + 0x103,puVar3,1);
  return param_1;
}




long * thunk_FUN_1002eca3c(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1002eb6bc();
  *puVar3 = &PTR_FUN_10148b3a0;
  puVar3 = puVar3 + 0x121;
  thunk_FUN_100650e64(puVar3);
  *(undefined4 *)(param_1 + 0x147) = 3;
  *(undefined4 *)((long)param_1 + 0xa3c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x148) = 0;
  iVar2 = FUN_100126c88();
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar2 == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(puVar3,*ppuVar1);
  *(undefined8 *)((long)param_1 + 0x8c4) = 0x41c00000;
  (**(code **)(*param_1 + 0x160))(param_1);
  param_1[0x102] = (long)puVar3;
  FUN_100642bd8(param_1 + 0x103,puVar3,1);
  return param_1;
}




void FUN_1002ecaf4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  plVar1 = param_3 + 0x121;
  fVar5 = (float)FUN_1006511d0(plVar1);
  FUN_10064e4dc(param_3,CONCAT44((int)(param_2 + *(float *)(param_3 + 0x119) * 2.0),
                                 (int)(fVar5 + *(float *)((long)param_3 + 0x8c4) * 2.0)));
  FUN_1002ec050(param_3);
  lVar2 = param_3[0x148];
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar6 = *(float *)((long)param_3 + 0x8c4);
  if ((char)lVar2 == '\0') {
    FUN_10065179c(fVar5 + fVar6 * -2.0,0,0x3f800000,plVar1);
  }
  else {
    FUN_100651708(fVar5 - fVar6 * 2.0,plVar1,1);
    (**(code **)(*param_3 + 0x48))(param_3);
    FUN_10065184c(fVar6 - *(float *)(param_3 + 0x119) * 2.0,0,0x3f800000,plVar1);
    FUN_100651700(plVar1,(int)param_3[0x147]);
  }
  if ((int)param_3[0x147] == 1) {
    uVar3 = 5;
    uVar4 = 5;
  }
  else if ((int)param_3[0x147] == 0) {
    uVar3 = 7;
    uVar4 = 7;
  }
  else {
    uVar3 = 8;
    uVar4 = 8;
  }
  FUN_10064e5ec(0,0,plVar1,uVar3,param_3,uVar4);
  return;
}




void FUN_1002ecc20(long *param_1,int param_2)

{
  undefined4 local_24;
  
  *(char *)(param_1 + 0x120) = (char)param_2;
  (**(code **)(*param_1 + 0x168))();
  if (param_2 == 0) {
    local_24 = *(undefined4 *)((long)param_1 + 0xa3c);
  }
  else {
    local_24 = 0xff606060;
  }
  FUN_100651460(param_1 + 0x121,&local_24);
  return;
}




void FUN_1002ecc7c(long *param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_100651038(param_1 + 0x121);
                    /* WARNING: Could not recover jumptable at 0x0001002eccac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x160))(param_1);
    return;
  }
  return;
}




void FUN_1002eccb4(long param_1,undefined4 *param_2)

{
  FUN_100651460(param_1 + 0x908);
  *(undefined4 *)(param_1 + 0xa3c) = *param_2;
  return;
}




void FUN_1002ecce4(long *param_1)

{
  FUN_1006513c0(param_1 + 0x121);
                    /* WARNING: Could not recover jumptable at 0x0001002ecd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_1002ecd14(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x147) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002ecd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}




void FUN_1002ecd24(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  undefined8 local_28;
  
  fVar1 = (float)FUN_1006511d0(param_3 + 0x121);
  local_28 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)((long)param_3 + 0x8c4) >> 0x20) * 2.0
                      ,fVar1 + (float)*(undefined8 *)((long)param_3 + 0x8c4) * 2.0);
  FUN_10064e48c(param_3,&local_28);
  (**(code **)(*param_3 + 0x160))(param_3);
  return;
}




void FUN_1002ecd84(long param_1)

{
  FUN_10065165c(param_1 + 0x908);
  return;
}




void FUN_1002ecd8c(long param_1)

{
  FUN_1006516bc(param_1 + 0x908);
  return;
}




long FUN_1002ecd94(long param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined8 *)FUN_1002eb6bc();
  *puVar3 = &PTR_thunk_FUN_1001acc08_10148b538;
  puVar3 = puVar3 + 0x121;
  FUN_10064e264(puVar3);
  lVar1 = param_1 + 0x9c0;
  thunk_FUN_100652c08(lVar1);
  thunk_FUN_100652c08(param_1 + 0xab0);
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  *(undefined8 *)(param_1 + 0xbc0) = 0;
  *(undefined8 *)(param_1 + 3000) = 0;
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar4 = *ppuVar2;
  FUN_100642bd8(puVar3,lVar1,1);
  FUN_100653080(lVar1,1);
  FUN_100652ca4(lVar1,puVar4);
  *(undefined8 **)(param_1 + 0x810) = puVar3;
  FUN_100642bd8(param_1 + 0x818,puVar3,1);
  return param_1;
}




long thunk_FUN_1002ecd94(long param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined8 *)FUN_1002eb6bc();
  *puVar3 = &PTR_thunk_FUN_1001acc08_10148b538;
  puVar3 = puVar3 + 0x121;
  FUN_10064e264(puVar3);
  lVar1 = param_1 + 0x9c0;
  thunk_FUN_100652c08(lVar1);
  thunk_FUN_100652c08(param_1 + 0xab0);
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  *(undefined8 *)(param_1 + 0xbc0) = 0;
  *(undefined8 *)(param_1 + 3000) = 0;
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar4 = *ppuVar2;
  FUN_100642bd8(puVar3,lVar1,1);
  FUN_100653080(lVar1,1);
  FUN_100652ca4(lVar1,puVar4);
  *(undefined8 **)(param_1 + 0x810) = puVar3;
  FUN_100642bd8(param_1 + 0x818,puVar3,1);
  return param_1;
}




void FUN_1002ece5c(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                  string *param_5,string *param_6)

{
  long lVar1;
  string *psVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  
  std::string::operator=((string *)(param_3 + 0xba0),param_5);
  std::string::operator=((string *)(param_3 + 3000),param_6);
  lVar1 = param_3 + 0x9c0;
  FUN_100652d8c(lVar1);
  psVar2 = *(string **)param_5;
  if (-1 < (char)param_5[0x17]) {
    psVar2 = param_5;
  }
  FUN_100652cac(lVar1,param_4,psVar2);
  if (*(int *)(param_3 + 0x8b8) == 0) {
    local_38 = FUN_100652e60(lVar1);
    uStack_34 = param_2;
    FUN_10064e48c(param_3,&local_38);
  }
  return;
}




void FUN_1002ecef4(long *param_1)

{
  FUN_10064e48c(param_1 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x0001002ecf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002ecf24(long param_1)

{
  FUN_1002ec050();
  FUN_10064e5ec(0,0,param_1 + 0x9c0,8,param_1,8);
  return;
}




void FUN_1002ecf5c(long *param_1,int param_2)

{
  undefined4 local_24;
  
  *(char *)(param_1 + 0x120) = (char)param_2;
  (**(code **)(*param_1 + 0x168))();
  if (param_2 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = 0xff808080;
  }
  FUN_100652dd4(param_1 + 0x138,&local_24,2);
  return;
}




void FUN_1002ecfc4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0xba0);
  if (*(char *)(param_1 + 2999) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_100652cdc(param_1 + 0x9c0,plVar2);
  if (*(int *)(param_1 + 0x8b8) != 0) {
    uVar1 = FUN_100640db8(0x3f800000,0x3f800000,0x3e4ccccd,FUN_10001f160);
    FUN_100642b14(param_1 + 0x818,uVar1);
    return;
  }
  return;
}




void FUN_1002ed030(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  
  plVar11 = (long *)(param_1 + 3000);
  bVar5 = *(byte *)(param_1 + 0xbcf);
  uVar7 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0xbc0);
  if (-1 < (char)bVar5) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar10 = (long *)*plVar11;
    plVar3 = plVar10;
    if (-1 < (char)bVar5) {
      plVar3 = plVar11;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(plVar3,pbVar9,sVar1), plVar11 = plVar10, iVar6 == 0))
      goto LAB_1002ed104;
    }
    else {
      if (sVar1 == 0) goto LAB_1002ed104;
      if ((uint)*pbVar9 == ((uint)plVar10 & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0xbb9);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_1002ed104;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar9);
        goto LAB_1002ed0d0;
      }
    }
  }
  else {
LAB_1002ed0d0:
    if ((char)bVar5 < '\0') {
      plVar11 = (long *)*plVar11;
    }
  }
  FUN_100652cdc(param_1 + 0x9c0,plVar11);
LAB_1002ed104:
  if (*(int *)(param_1 + 0x8b8) == 0) {
    return;
  }
  FUN_1002ec410(param_1);
  return;
}




long FUN_1002ed128(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1002eb6bc();
  *puVar2 = &PTR_FUN_10148b6d0;
  thunk_FUN_100650e64(puVar2 + 0x121);
  lVar1 = param_1 + 0xa38;
  thunk_FUN_100655644(lVar1);
  thunk_FUN_100652c08(param_1 + 0xb90);
  FUN_100655930(lVar1,param_1 + 0xb90,1);
  FUN_100655930(lVar1,puVar2 + 0x121,1);
  *(long *)(param_1 + 0x810) = lVar1;
  FUN_100642bd8(param_1 + 0x818,lVar1,1);
  return param_1;
}




long thunk_FUN_1002ed128(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1002eb6bc();
  *puVar2 = &PTR_FUN_10148b6d0;
  thunk_FUN_100650e64(puVar2 + 0x121);
  lVar1 = param_1 + 0xa38;
  thunk_FUN_100655644(lVar1);
  thunk_FUN_100652c08(param_1 + 0xb90);
  FUN_100655930(lVar1,param_1 + 0xb90,1);
  FUN_100655930(lVar1,puVar2 + 0x121,1);
  *(long *)(param_1 + 0x810) = lVar1;
  FUN_100642bd8(param_1 + 0x818,lVar1,1);
  return param_1;
}




void FUN_1002ed1bc(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float local_44;
  
  fVar2 = (float)FUN_1006511d0(param_3 + 0x908);
  fVar4 = *(float *)(param_3 + 0x8c4);
  fVar5 = param_2 + *(float *)(param_3 + 0x8c8) * 2.0;
  lVar1 = param_3 + 0xb90;
  fVar3 = (float)FUN_100652e60(lVar1);
  fVar3 = fVar2 + fVar4 * 2.0 + fVar3;
  local_48 = fVar3;
  FUN_100652e60(lVar1);
  local_44 = param_2;
  if (param_2 <= fVar5) {
    local_44 = fVar5;
  }
  FUN_10064e4dc(param_3,CONCAT44((int)local_44,(int)fVar3));
  FUN_10064e48c(param_3,&local_48);
  FUN_10064e5ec(*(undefined4 *)(param_3 + 0x8c4),*(undefined4 *)(param_3 + 0x8c8),lVar1,7,
                param_3 + 0x630,7);
  FUN_10064e5ec(0x41200000,0,param_3 + 0x908,7,lVar1,5);
  FUN_1006557ec(param_3 + 0xa38);
  FUN_10064e68c(0,0,param_3 + 0xa38,8);
  FUN_1002ec050(param_3);
  return;
}




void FUN_1002ed2b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100652cac(param_1 + 0xb90);
  FUN_100651038(param_1 + 0x908,param_4);
  FUN_1006513c0(param_1 + 0x908,param_5);
  return;
}




void FUN_1002ed300(undefined8 param_1,long param_2,int param_3)

{
  FUN_1006515e0(param_2 + 0x908);
  if (param_3 != 0) {
    FUN_100651708(param_1,param_2 + 0x908,1);
    return;
  }
  return;
}




void FUN_1002ed354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x121);
  FUN_1002ebc50(param_1);
  return;
}




void FUN_1002ed388(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x121);
  pvVar1 = (void *)FUN_1002ebc50(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002ed3c4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001acc08();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ed3d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148b6d0;
  param_1[0x172] = &PTR_FUN_1014a7108;
  param_1[0x189] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x18c);
  FUN_10064e2bc(param_1 + 0x172);
  param_1[0x147] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x15e);
  FUN_10064e2bc(param_1 + 0x147);
  thunk_FUN_100651068(param_1 + 0x121);
  FUN_1002ebc50(param_1);
  return;
}




void FUN_1002ed45c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148b6d0;
  param_1[0x172] = &PTR_FUN_1014a7108;
  param_1[0x189] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x18c);
  FUN_10064e2bc(param_1 + 0x172);
  param_1[0x147] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x15e);
  FUN_10064e2bc(param_1 + 0x147);
  thunk_FUN_100651068(param_1 + 0x121);
  pvVar1 = (void *)FUN_1002ebc50(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002ed4e4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1002ed4e4(param_1,*param_2);
    FUN_1002ed4e4(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




long * FUN_1002ed534(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_1002ed5b4(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1002ed5b4(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_1002ed5b4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_1002ed624;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_1002ed624:
  return uVar8 >> 0x1f;
}




long * FUN_1002ed634(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_1002ed5b4(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1002ed5b4(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_1002ed6d8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_1002ed72c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *local_70;
  code *pcStack_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_1002ed9a4_10148b868;
  puVar11[0x17] = param_2;
  puVar11 = puVar11 + 0x18;
  FUN_10064e264(puVar11);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x91;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xb7;
  FUN_10064e264(plVar5);
  plVar6 = param_1 + 0xce;
  FUN_10064e264(plVar6);
  plVar7 = param_1 + 0xe5;
  thunk_FUN_1006543ec(plVar7);
  FUN_1004e3004(param_1 + 0x119);
  *(undefined4 *)(param_1 + 0x11a) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x8d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar1,1);
  FUN_100642bd8(plVar5,plVar3,1);
  FUN_100642bd8(puVar11,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar6,plVar2,1);
  FUN_100642bd8(plVar6,plVar4,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffffffbf;
  puVar9 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a16c,2);
  iVar10 = FUN_100126c88();
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar10 == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  puVar13 = *ppuVar8;
  FUN_100651594(plVar3,puVar13,&DAT_10115a168);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar3,uVar12);
  FUN_100652cac(plVar2,puVar9,"white_background");
  FUN_100651594(plVar4,puVar13,&DAT_10115a164);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar4,uVar12);
  FUN_100654488(plVar7,1);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xfffffffb;
  pcStack_68 = thunk_FUN_1002edb88;
  local_70 = param_1;
  FUN_100643618(0xbf800000,&local_70,0,1);
  return param_1;
}




long * thunk_FUN_1002ed72c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plStack_70;
  code *pcStack_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_1002ed9a4_10148b868;
  puVar11[0x17] = param_2;
  puVar11 = puVar11 + 0x18;
  FUN_10064e264(puVar11);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x91;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xb7;
  FUN_10064e264(plVar5);
  plVar6 = param_1 + 0xce;
  FUN_10064e264(plVar6);
  plVar7 = param_1 + 0xe5;
  thunk_FUN_1006543ec(plVar7);
  FUN_1004e3004(param_1 + 0x119);
  *(undefined4 *)(param_1 + 0x11a) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x8d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar1,1);
  FUN_100642bd8(plVar5,plVar3,1);
  FUN_100642bd8(puVar11,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar6,plVar2,1);
  FUN_100642bd8(plVar6,plVar4,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffffffbf;
  puVar9 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a16c,2);
  iVar10 = FUN_100126c88();
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar10 == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  puVar13 = *ppuVar8;
  FUN_100651594(plVar3,puVar13,&DAT_10115a168);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar3,uVar12);
  FUN_100652cac(plVar2,puVar9,"white_background");
  FUN_100651594(plVar4,puVar13,&DAT_10115a164);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar4,uVar12);
  FUN_100654488(plVar7,1);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xfffffffb;
  pcStack_68 = thunk_FUN_1002edb88;
  plStack_70 = param_1;
  FUN_100643618(0xbf800000,&plStack_70,0,1);
  return param_1;
}




void FUN_1002ed9a4(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_1002ed9a4_10148b868;
  pcStack_38 = thunk_FUN_1002edb88;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  FUN_10064e2bc(param_1 + 0xe5);
  thunk_FUN_10064e2bc(param_1 + 0xce);
  thunk_FUN_10064e2bc(param_1 + 0xb7);
  thunk_FUN_100651068(param_1 + 0x91);
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002ed9a4(void)

{
  FUN_1002ed9a4();
  return;
}




void FUN_1002eda74(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ed9a4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002eda88(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))();
  FUN_10064e47c(uVar1,0x42700000,param_1);
  FUN_10064e47c(uVar1,0x42700000,param_1 + 0x178);
  fVar2 = (float)uVar1 + -8.0;
  FUN_10065179c(fVar2,0,0x3f800000,param_1 + 0x358);
  FUN_10064e5ec(0,0,param_1 + 0x358,8,param_1 + 0x178,8);
  FUN_10064e47c(uVar1,0x42700000,param_1 + 0x268);
  FUN_10065179c(fVar2,0,0x3f800000,param_1 + 0x488);
  FUN_10064e5ec(0,0,param_1 + 0x488,8,param_1 + 0x268,8);
  FUN_10064e47c(uVar1,0x42700000,param_1 + 0x728);
  return;
}




void FUN_1002edb88(long param_1)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x8d4) != '\0') {
    iVar1 = FUN_10109c574();
    if (iVar1 == 0) {
      uVar3 = FUN_10109c4f0();
      if ((uVar3 & 1) == 0) goto LAB_1002edc08;
    }
    else {
      iVar1 = FUN_10109c588();
      if (iVar1 != 1) {
LAB_1002edc08:
        FUN_1002edc18(param_1);
        return;
      }
      puVar2 = (uint *)FUN_10109c59c(0);
      if (((int)*puVar2 < 0x10) || ((*puVar2 & 1) == 0)) goto LAB_1002edc08;
    }
    if ((*(float *)(param_1 + 0x768) == 0.0) && (0.0 < *(float *)(param_1 + 0x8d0))) {
      FUN_1002edd94(param_1);
      return;
    }
  }
  return;
}




void FUN_1002edc18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  float local_70 [8];
  
  if (*(char *)(param_1 + 0x8d4) != '\0') {
    *(undefined1 *)(param_1 + 0x8d4) = 0;
    lVar1 = param_1 + 0xc0;
    FUN_100642324(lVar1);
    lVar2 = param_1 + 0x728;
    FUN_100642324(lVar2);
    FUN_100642324(param_1 + 0x670);
    uVar4 = *(uint *)(param_1 + 0x144);
    if ((~uVar4 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x144) = uVar4 | 0x7f80;
      FUN_1000200a0(lVar1);
      uVar4 = *(uint *)(param_1 + 0x144);
    }
    *(uint *)(param_1 + 0x144) = uVar4 | 4;
    uVar3 = FUN_100047714();
    FUN_10063f0e8(0x3fa00000);
    FUN_10063fce0(0,uVar3);
    FUN_100642b14(lVar1,uVar3);
    uVar3 = FUN_100047300();
    FUN_100642b14(lVar1,uVar3);
    uVar3 = FUN_1000b50a8();
    FUN_10063f0e8(0x3e4ccccd);
    local_70[0] = (float)FUN_10064e3cc(lVar2);
    local_70[0] = -local_70[0];
    local_70[1] = 0.0;
    FUN_10063fb90(uVar3,local_70);
    FUN_100642b14(lVar2,uVar3);
    uVar3 = FUN_1000b50a8();
    FUN_10063f0e8(0x3e4ccccd);
    local_70[0] = (float)FUN_10064e3cc(lVar2);
    local_70[0] = local_70[0] + 2.0;
    local_70[1] = 0.0;
    FUN_10063fb90(uVar3,local_70);
    FUN_100642b14(param_1 + 0x670,uVar3);
    FUN_100644aec(local_70,DAT_101d918e4,0);
    FUN_100644c34(param_1,local_70,1);
  }
  return;
}




void FUN_1002edd94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_50 [32];
  
  *(undefined1 *)(param_1 + 0x8d4) = 0;
  if ((*(uint *)(param_1 + 0x63c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x63c) = *(uint *)(param_1 + 0x63c) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x5b8);
  }
  lVar1 = param_1 + 0xc0;
  FUN_100642324(lVar1);
  FUN_100642324(param_1 + 0x728);
  FUN_100642324(param_1 + 0x670);
  uVar3 = *(uint *)(param_1 + 0x144);
  if ((~uVar3 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x144) = uVar3 | 0x7f80;
    FUN_1000200a0(lVar1);
    uVar3 = *(uint *)(param_1 + 0x144);
  }
  *(uint *)(param_1 + 0x144) = uVar3 | 4;
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3fa00000);
  FUN_10063fce0(0,uVar2);
  FUN_100642b14(lVar1,uVar2);
  uVar2 = FUN_100047300();
  FUN_100642b14(lVar1,uVar2);
  FUN_100644aec(auStack_50,DAT_101d918e8,0);
  FUN_100644c34(param_1,auStack_50,1);
  return;
}




void FUN_1002ede88(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_1002ede98();
    return;
  }
  FUN_1002edc18();
  return;
}




void FUN_1002ede98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_70 [4];
  
  if ((*(char *)(param_1 + 0x8d4) == '\0') &&
     (*(undefined1 *)(param_1 + 0x8d4) = 1, 0.0 < *(float *)(param_1 + 0x8d0))) {
    FUN_100642324(param_1 + 0xc0);
    lVar1 = param_1 + 0x728;
    FUN_100642324(lVar1);
    lVar2 = param_1 + 0x670;
    FUN_100642324(lVar2);
    FUN_10064e5ec(0,0,param_1,6,*(undefined8 *)(param_1 + 0xb8),4);
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 4;
    if ((~*(uint *)(param_1 + 0x63c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x63c) = *(uint *)(param_1 + 0x63c) | 0x7f80;
      FUN_1000200a0(param_1 + 0x5b8);
    }
    fVar4 = (float)FUN_10064e3cc(lVar1);
    if (*(float *)(param_1 + 0x768) != -fVar4) {
      *(float *)(param_1 + 0x768) = -fVar4;
      FUN_1000200a0(lVar1);
    }
    *(uint *)(param_1 + 0x7ac) = *(uint *)(param_1 + 0x7ac) | 0x10;
    fVar4 = (float)FUN_10064e3cc(lVar1);
    if (*(float *)(param_1 + 0x6b0) != fVar4 + 2.0) {
      *(float *)(param_1 + 0x6b0) = fVar4 + 2.0;
      FUN_1000200a0(lVar2);
    }
    uVar3 = FUN_100047714();
    FUN_10063f0e8(0x3e19999a);
    FUN_10063fce0(0x3f800000,uVar3);
    FUN_100642b14(param_1 + 0xc0,uVar3);
    uVar3 = FUN_1000b50a8();
    FUN_10063f0e8(*(undefined4 *)(param_1 + 0x8d0));
    local_70[0] = 0;
    FUN_10063fb90(uVar3,local_70);
    FUN_100642b14(lVar1,uVar3);
    uVar3 = FUN_1000b50a8();
    FUN_10063f0e8(*(undefined4 *)(param_1 + 0x8d0));
    local_70[0] = 0;
    FUN_10063fb90(uVar3,local_70);
    FUN_100642b14(lVar2,uVar3);
    FUN_100644aec(local_70,DAT_101d918e0,0);
    FUN_100644c34(param_1,local_70,1);
  }
  return;
}




void thunk_FUN_1002edb88(long param_1)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x8d4) != '\0') {
    iVar1 = FUN_10109c574();
    if (iVar1 == 0) {
      uVar3 = FUN_10109c4f0();
      if ((uVar3 & 1) == 0) goto LAB_1002edc08;
    }
    else {
      iVar1 = FUN_10109c588();
      if (iVar1 != 1) {
LAB_1002edc08:
        FUN_1002edc18(param_1);
        return;
      }
      puVar2 = (uint *)FUN_10109c59c(0);
      if (((int)*puVar2 < 0x10) || ((*puVar2 & 1) == 0)) goto LAB_1002edc08;
    }
    if ((*(float *)(param_1 + 0x768) == 0.0) && (0.0 < *(float *)(param_1 + 0x8d0))) {
      FUN_1002edd94(param_1);
      return;
    }
  }
  return;
}




long * FUN_1002ee068(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 local_50 [2];
  void *local_48;
  
  puVar4 = (undefined8 *)FUN_1001b4648();
  *puVar4 = &PTR_FUN_101483b28;
  puVar4 = puVar4 + 0x4d;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x6b;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x89;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xa7;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100652cac(puVar4,DAT_101854a08,"currency_stretch");
  FUN_100652ca4(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(plVar2,DAT_101854a08,"currency_end_right");
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(local_50,"99999");
  FUN_1006513c0(plVar3,local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  local_50[0] = 0xffdbd4bb;
  FUN_100651460(plVar3,local_50);
  FUN_10065165c(plVar3,1);
  return param_1;
}




long * thunk_FUN_1002ee068(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 auStack_50 [2];
  void *pvStack_48;
  
  puVar4 = (undefined8 *)FUN_1001b4648();
  *puVar4 = &PTR_FUN_101483b28;
  puVar4 = puVar4 + 0x4d;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x6b;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x89;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xa7;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100652cac(puVar4,DAT_101854a08,"currency_stretch");
  FUN_100652ca4(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(plVar2,DAT_101854a08,"currency_end_right");
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(auStack_50,"99999");
  FUN_1006513c0(plVar3,auStack_50);
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  auStack_50[0] = 0xffdbd4bb;
  FUN_100651460(plVar3,auStack_50);
  FUN_10065165c(plVar3,1);
  return param_1;
}




void FUN_1002ee1e8(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x538,auStack_30);
  FUN_1002ee24c(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002ee24c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = param_1 + 0x358;
  FUN_10064e5ec(0,0,lVar1,7,param_1,7);
  FUN_10064e5ec(0x40a00000,0,param_1 + 0x538,7,lVar1,5);
  fVar3 = (float)FUN_10064eb7c(lVar1,7,param_1 + 0x538,5);
  if (fVar3 <= 145.0) {
    fVar3 = 145.0;
  }
  lVar2 = param_1 + 0x268;
  FUN_100652e60(lVar2);
  FUN_10064e47c(fVar3 + -55.0,lVar2);
  FUN_10064e5ec(0,0,lVar2,7,lVar1,7);
  fVar4 = 0.0;
  FUN_10064e5ec(0,0,param_1 + 0x448,7,lVar2,5);
  fVar3 = (float)FUN_10064eb7c(lVar2,0,param_1 + 0x448,2);
  FUN_10064e4a0(param_1,CONCAT44((int)fVar4,(int)fVar3));
  return;
}




void FUN_1002ee358(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_100652cdc(param_1 + 0x358,plVar1);
  FUN_1002ee24c(param_1);
  return;
}




long * FUN_1002ee390(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064f204();
  *puVar2 = &PTR_FUN_10148b9c0;
  puVar2 = puVar2 + 0x29;
  FUN_100653ff8(puVar2);
  plVar1 = param_1 + 0x4a;
  thunk_FUN_100652c08(plVar1);
  *(undefined4 *)(param_1 + 0x68) = 0x432e0000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_10065403c(puVar2,PTR_s_build___Frames_tga_101854a00,"frame_mask");
  FUN_100652dfc(puVar2,0xb);
  FUN_100652cac(plVar1,PTR_s_build___Frames_tga_101854a00,"frame_unowned");
  *(uint *)((long)param_1 + 0x1cc) = *(uint *)((long)param_1 + 0x1cc) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x2d4) = *(uint *)((long)param_1 + 0x2d4) & 0xffffffbf;
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




long * thunk_FUN_1002ee390(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064f204();
  *puVar2 = &PTR_FUN_10148b9c0;
  puVar2 = puVar2 + 0x29;
  FUN_100653ff8(puVar2);
  plVar1 = param_1 + 0x4a;
  thunk_FUN_100652c08(plVar1);
  *(undefined4 *)(param_1 + 0x68) = 0x432e0000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_10065403c(puVar2,PTR_s_build___Frames_tga_101854a00,"frame_mask");
  FUN_100652dfc(puVar2,0xb);
  FUN_100652cac(plVar1,PTR_s_build___Frames_tga_101854a00,"frame_unowned");
  *(uint *)((long)param_1 + 0x1cc) = *(uint *)((long)param_1 + 0x1cc) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x2d4) = *(uint *)((long)param_1 + 0x2d4) & 0xffffffbf;
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_1002ee480(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **local_48 [2];
  char local_31;
  
  lVar2 = FUN_10034be08(param_2);
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_100652d8c(param_1 + 0x148);
  }
  if (lVar2 != 0) {
    FUN_10001549c(local_48,"portrait_");
    std::string::append((char *)local_48);
    pppuVar1 = (undefined8 ***)local_48[0];
    if (-1 < local_31) {
      pppuVar1 = local_48;
    }
    FUN_1001e34dc(param_1 + 0x148,pppuVar1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




void FUN_1002ee518(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001002ee524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))();
  return;
}




void FUN_1002ee528(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float fStack_4c;
  undefined1 *local_48;
  
  fVar5 = *(float *)(param_1 + 0x340) * 0.005263158;
  fVar4 = *(float *)(param_1 + 0x340) * 0.9157895;
  lVar1 = param_1 + 0x148;
  FUN_10064e47c(fVar4,fVar4,lVar1);
  lVar2 = param_1 + 0x250;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x298) == fVar5) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x29c)) && !NAN(fVar5))) {
    bVar3 = *(float *)(param_1 + 0x29c) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x298) = fVar5;
    *(float *)(param_1 + 0x29c) = fVar5;
    FUN_1000200a0(lVar2);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x198) == 0.5) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x19c)))) {
    bVar3 = *(float *)(param_1 + 0x19c) == 0.5;
  }
  if (!bVar3) {
    *(undefined1 **)(param_1 + 0x198) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x2a0) == 0.5) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x2a4)))) {
    bVar3 = *(float *)(param_1 + 0x2a4) == 0.5;
  }
  if (!bVar3) {
    *(undefined1 **)(param_1 + 0x2a0) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar2);
  }
  fStack_4c = *(float *)(param_1 + 0x340);
  local_50 = fStack_4c * 0.8105264;
  FUN_10064e48c(param_1,&local_50);
  fVar4 = fStack_4c * 0.5;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x188) == local_50 * 0.5) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x18c)) && !NAN(fVar4))) {
    bVar3 = *(float *)(param_1 + 0x18c) == fVar4;
  }
  if (!bVar3) {
    *(ulong *)(param_1 + 0x188) = CONCAT44(fVar4,local_50 * 0.5);
    FUN_1000200a0(lVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x148) + 0x28))(lVar1,&local_48);
  if ((*(float *)(param_1 + 0x290) != local_50 * 0.5) ||
     (*(float *)(param_1 + 0x294) != fStack_4c * 0.5)) {
    *(ulong *)(param_1 + 0x290) = CONCAT44(fStack_4c * 0.5,local_50 * 0.5);
    FUN_1000200a0(lVar2);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x250) + 0x28))(lVar2,&local_48);
  FUN_10064e32c(param_1);
  return;
}




void FUN_1002ee6b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148b9c0;
  param_1[0x4a] = &PTR_FUN_1014a7108;
  param_1[0x61] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x4a);
  param_1[0x29] = &PTR_FUN_1014a77a8;
  param_1[0x40] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x47);
  param_1[0x29] = &PTR_FUN_1014a7108;
  param_1[0x40] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43);
  FUN_10064e2bc(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002ee76c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148b9c0;
  param_1[0x4a] = &PTR_FUN_1014a7108;
  param_1[0x61] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x4a);
  param_1[0x29] = &PTR_FUN_1014a77a8;
  param_1[0x40] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x47);
  param_1[0x29] = &PTR_FUN_1014a7108;
  param_1[0x40] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43);
  FUN_10064e2bc(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002ee824(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **local_288 [5];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  void *pvStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 auStack_208 [296];
  undefined8 local_e0;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1002eea14_10148bb10;
  operator_new(0x48);
  lVar2 = thunk_FUN_1001f4a04();
  param_1[0x17] = lVar2;
  operator_new(0x40);
  lVar2 = thunk_FUN_1001f4cf4();
  param_1[0x18] = lVar2;
  operator_new(0x28);
  lVar2 = thunk_FUN_1001f3eb4();
  param_1[0x19] = lVar2;
  operator_new(0x30);
  lVar2 = thunk_FUN_1001f4160();
  param_1[0x1a] = lVar2;
  operator_new(0x28);
  lVar2 = thunk_FUN_1001f482c();
  param_1[0x1b] = lVar2;
  param_1[0x1c] = *(long *)(param_1[0x17] + 8);
  param_1[0x1d] = *(long *)(param_1[0x18] + 8);
  param_1[0x1e] = *(long *)(param_1[0x19] + 8);
  lVar2 = *(long *)(lVar2 + 8);
  param_1[0x1f] = *(long *)(param_1[0x1a] + 8);
  param_1[0x20] = lVar2;
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x17] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x18] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x19] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x1a] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x1b] + 8),1);
  FUN_1004f1580(local_288);
  local_288[0] = &PTR_FUN_10145b860;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  pvStack_238 = (void *)0x0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  local_220 = 0;
  local_210 = 0;
  FUN_100168aa8(auStack_208);
  local_e0 = 0xffffffffffffffff;
  (**(code **)(*(long *)param_1[0x18] + 0x18))((long *)param_1[0x18],local_288);
  local_288[0] = &PTR_FUN_10145b860;
  FUN_10015613c(auStack_208);
  FUN_100156080(&uStack_230,1);
  if (pvStack_238 != (void *)0x0) {
    operator_delete__(pvStack_238);
    local_240 = 0;
    pvStack_238 = (void *)0x0;
  }
  FUN_100155f24(&uStack_250,1);
  FUN_100155eac(&local_260,1);
  FUN_1004f15a8(local_288);
  return param_1;
}




long * thunk_FUN_1002ee824(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **appuStack_288 [5];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  void *pvStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [296];
  undefined8 uStack_e0;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1002eea14_10148bb10;
  operator_new(0x48);
  lVar2 = thunk_FUN_1001f4a04();
  param_1[0x17] = lVar2;
  operator_new(0x40);
  lVar2 = thunk_FUN_1001f4cf4();
  param_1[0x18] = lVar2;
  operator_new(0x28);
  lVar2 = thunk_FUN_1001f3eb4();
  param_1[0x19] = lVar2;
  operator_new(0x30);
  lVar2 = thunk_FUN_1001f4160();
  param_1[0x1a] = lVar2;
  operator_new(0x28);
  lVar2 = thunk_FUN_1001f482c();
  param_1[0x1b] = lVar2;
  param_1[0x1c] = *(long *)(param_1[0x17] + 8);
  param_1[0x1d] = *(long *)(param_1[0x18] + 8);
  param_1[0x1e] = *(long *)(param_1[0x19] + 8);
  lVar2 = *(long *)(lVar2 + 8);
  param_1[0x1f] = *(long *)(param_1[0x1a] + 8);
  param_1[0x20] = lVar2;
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x17] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x18] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x19] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x1a] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x1b] + 8),1);
  FUN_1004f1580(appuStack_288);
  appuStack_288[0] = &PTR_FUN_10145b860;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  pvStack_238 = (void *)0x0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_210 = 0;
  FUN_100168aa8(auStack_208);
  uStack_e0 = 0xffffffffffffffff;
  (**(code **)(*(long *)param_1[0x18] + 0x18))((long *)param_1[0x18],appuStack_288);
  appuStack_288[0] = &PTR_FUN_10145b860;
  FUN_10015613c(auStack_208);
  FUN_100156080(&uStack_230,1);
  if (pvStack_238 != (void *)0x0) {
    operator_delete__(pvStack_238);
    uStack_240 = 0;
    pvStack_238 = (void *)0x0;
  }
  FUN_100155f24(&uStack_250,1);
  FUN_100155eac(&uStack_260,1);
  FUN_1004f15a8(appuStack_288);
  return param_1;
}




void FUN_1002eea14(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002eea14_10148bb10;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x40))();
  }
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x10))();
  }
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 0x10))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x10))();
  }
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 0x10))();
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002eea14(void)

{
  FUN_1002eea14();
  return;
}




void FUN_1002eeaa8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002eea14();
  operator_delete(pvVar1);
  return;
}




void FUN_1002eeabc(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_10064e32c();
  FUN_10064e47c(0x44750000,0x430c0000,*(undefined8 *)(param_1 + 0xe0));
  FUN_10064e47c(0x44750000,0x435c0000,*(undefined8 *)(param_1 + 0xe8));
  plVar2 = *(long **)(param_1 + 0xf0);
  iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
  FUN_10064e47c(0x44750000,(float)iVar1,plVar2);
  plVar2 = *(long **)(param_1 + 0xf8);
  iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
  FUN_10064e47c(0x44750000,(float)iVar1,plVar2);
  plVar2 = *(long **)(param_1 + 0x100);
  iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
  FUN_10064e47c(0x44750000,(float)iVar1,plVar2);
  lVar5 = 0;
  iVar1 = 0;
  *(uint *)(*(long *)(param_1 + 0xf0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xf0) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0xf8) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xf8) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x100) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x100) + 0x84) & 0xfffffffb;
  do {
    lVar3 = ((undefined8 *)(param_1 + 0xe8))[lVar5];
    if ((*(byte *)(lVar3 + 0x84) >> 2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + (long)iVar1 * 8 + 0xe0);
      FUN_10064e72c(0,lVar3,0,uVar4,2);
      FUN_10064e72c(0,lVar3,1,uVar4,1);
      iVar1 = (int)lVar5 + 1;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  return;
}




ulong FUN_1002eec2c(long param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0xf0);
  if ((*(byte *)((long)plVar2 + 0x84) >> 2 & 1) == 0) {
    fVar3 = 360.0;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
    fVar3 = (float)iVar1 + 360.0;
  }
  plVar2 = *(long **)(param_1 + 0xf8);
  fVar4 = 0.0;
  fVar5 = 0.0;
  if ((*(byte *)((long)plVar2 + 0x84) >> 2 & 1) != 0) {
    iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
    fVar5 = (float)iVar1;
  }
  plVar2 = *(long **)(param_1 + 0x100);
  if ((*(byte *)((long)plVar2 + 0x84) >> 2 & 1) != 0) {
    iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
    fVar4 = (float)iVar1;
  }
  return (ulong)(uint)(int)(fVar5 + fVar3 + fVar4) << 0x20 | 0x3d4;
}




long * FUN_1002eecec(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1002ecd94(param_1,0);
  *puVar1 = &PTR_FUN_10148bc58;
  thunk_FUN_1001c397c(puVar1 + 0x17a);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x17a,1);
  return param_1;
}




long * thunk_FUN_1002eecec(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1002ecd94(param_1,0);
  *puVar1 = &PTR_FUN_10148bc58;
  thunk_FUN_1001c397c(puVar1 + 0x17a);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x17a,1);
  return param_1;
}




void FUN_1002eed48(long param_1)

{
  FUN_1002ecf24();
  FUN_10064e5ec(0xc2040000,0x420c0000,param_1 + 0xbd0,8,param_1,1);
  return;
}




void FUN_1002eed88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148bc58;
  param_1[0x17a] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x246);
  thunk_FUN_100651068(param_1 + 0x21f);
  thunk_FUN_100651068(param_1 + 0x1f9);
  thunk_FUN_100651068(param_1 + 0x1d3);
  param_1[0x1b5] = &PTR_FUN_1014a7108;
  param_1[0x1cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1cf);
  FUN_10064e2bc(param_1 + 0x1b5);
  param_1[0x18b] = &PTR_FUN_1014a6db0;
  param_1[0x1a2] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1a5);
  FUN_10064e2bc(param_1 + 0x18b);
  FUN_10064221c(param_1 + 0x17a);
  FUN_1001acc08(param_1);
  return;
}




void FUN_1002eee54(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148bc58;
  param_1[0x17a] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x246);
  thunk_FUN_100651068(param_1 + 0x21f);
  thunk_FUN_100651068(param_1 + 0x1f9);
  thunk_FUN_100651068(param_1 + 0x1d3);
  param_1[0x1b5] = &PTR_FUN_1014a7108;
  param_1[0x1cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1cf);
  FUN_10064e2bc(param_1 + 0x1b5);
  param_1[0x18b] = &PTR_FUN_1014a6db0;
  param_1[0x1a2] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x1a5);
  FUN_10064e2bc(param_1 + 0x18b);
  FUN_10064221c(param_1 + 0x17a);
  pvVar1 = (void *)FUN_1001acc08(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002eef24(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148bdf0;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x5b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x81;
  thunk_FUN_1002eca3c(plVar3,0);
  plVar4 = param_1 + 0x1ca;
  thunk_FUN_1002eca3c(plVar4,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100653080(puVar6,1);
  if ((*(float *)(param_1 + 0x20) != 1.15) || (*(float *)((long)param_1 + 0x104) != 1.15)) {
    param_1[0x20] = 0x3f9333333f933333;
    FUN_1000200a0(puVar6);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651700(plVar1,3);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  local_80 = (code *)CONCAT44(local_80._4_4_,0xffe6d6d6);
  FUN_100651460(plVar2,&local_80);
  FUN_100651700(plVar2,3);
  uVar5 = DAT_101d91884;
  local_58 = DAT_101d91884;
  local_80 = FUN_1002ef168;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x82,&local_80);
  FUN_10064e47c(0x44480000,0x43250000,plVar3);
  FUN_1002ecc7c(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  local_58 = uVar5;
  local_80 = FUN_1002ef1b0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x1cb,&local_80);
  FUN_10064e47c(0x44480000,0x43250000,plVar4);
  FUN_1002ecc7c(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  return param_1;
}




void FUN_1002ef168(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23814,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002ef1b0(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23818,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * thunk_FUN_1002eef24(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148bdf0;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x5b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x81;
  thunk_FUN_1002eca3c(plVar3,0);
  plVar4 = param_1 + 0x1ca;
  thunk_FUN_1002eca3c(plVar4,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100653080(puVar6,1);
  if ((*(float *)(param_1 + 0x20) != 1.15) || (*(float *)((long)param_1 + 0x104) != 1.15)) {
    param_1[0x20] = 0x3f9333333f933333;
    FUN_1000200a0(puVar6);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651700(plVar1,3);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,0xffe6d6d6);
  FUN_100651460(plVar2,&pcStack_80);
  FUN_100651700(plVar2,3);
  uVar5 = DAT_101d91884;
  uStack_58 = DAT_101d91884;
  pcStack_80 = FUN_1002ef168;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x82,&pcStack_80);
  FUN_10064e47c(0x44480000,0x43250000,plVar3);
  FUN_1002ecc7c(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uStack_58 = uVar5;
  pcStack_80 = FUN_1002ef1b0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x1cb,&pcStack_80);
  FUN_10064e47c(0x44480000,0x43250000,plVar4);
  FUN_1002ecc7c(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  return param_1;
}




void FUN_1002ef1fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_100652cac(param_1 + 0xb8);
  FUN_1006513c0(param_1 + 0x1a8,param_4);
  FUN_1006513c0(param_1 + 0x2d8,param_5);
  FUN_1002ecce4(param_1 + 0x408,param_6);
  FUN_1002ecce4(param_1 + 0xe50,param_7);
  return;
}




void FUN_1002ef26c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002ef274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_1002ef278(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  
  plVar1 = param_1 + 0x17;
  FUN_10064e5ec(0,0,plVar1,4,param_1,4);
  plVar2 = param_1 + 0x35;
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_100651708(fVar4 + -240.0,plVar2,1);
  plVar3 = param_1 + 0x5b;
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_100651708(fVar4 + -240.0,plVar3,1);
  FUN_10064e72c(0xc1f00000,plVar2,0,plVar1,2);
  FUN_10064e72c(0,plVar2,4,plVar1,4);
  FUN_10064e72c(0x41a00000,plVar3,0,plVar2,2);
  FUN_10064e72c(0,plVar3,4,plVar2,4);
  fVar4 = (float)FUN_10064e3cc(param_1 + 0x81);
  FUN_10064e5ec(-(fVar4 * 0.5) - 20.0,0xc2a00000,param_1 + 0x81,6,param_1,6);
  fVar4 = (float)FUN_10064e3cc(param_1 + 0x1ca);
  FUN_10064e5ec(fVar4 * 0.5 + 20.0,0xc2a00000,param_1 + 0x1ca,6,param_1,6);
  return;
}




void FUN_1002ef3d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148bdf0;
  param_1[0x1ca] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x2eb);
  FUN_1002ebc50(param_1 + 0x1ca);
  param_1[0x81] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x1a2);
  FUN_1002ebc50(param_1 + 0x81);
  thunk_FUN_100651068(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002ef488(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148bdf0;
  param_1[0x1ca] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x2eb);
  FUN_1002ebc50(param_1 + 0x1ca);
  param_1[0x81] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x1a2);
  FUN_1002ebc50(param_1 + 0x81);
  thunk_FUN_100651068(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002ef53c(void)

{
  DAT_101e454d0 = 0xff;
  DAT_101e454d2 = 0xffff;
  DAT_101e454d4 = 0xffff;
  DAT_101e454d8 = 0x4326000041900000;
  DAT_101e454e0 = 0x4326000041c00000;
  DAT_101e454e8 = 0xffbc9c44;
  DAT_101e454ec = 0xff1166f2;
  DAT_101e454f0 = 0xffe0e0e0;
  DAT_101e454f4 = 0xffa0a0a0;
  DAT_101e454f8 = 0xff8c8c8c;
  DAT_101e454fc = 0xff322213;
  DAT_101e45500 = 0xff091911;
  DAT_101e45504 = 0xff170c19;
  DAT_101e45508 = 0xff241a14;
  DAT_101e4550c = 0xff14171c;
  DAT_101e45510 = 0xff221911;
  DAT_101e45514 = 0xff1a1416;
  DAT_101e45518 = 0xff121414;
  DAT_101e4551c = 0xff1a1809;
  DAT_101e45520 = 0xff141414;
  DAT_101e45524 = 0xff141414;
  DAT_101e45528 = 0xff2929c0;
  DAT_101e4552c = 0xff283082;
  DAT_101e45530 = 0xff5262cc;
  DAT_101e45534 = 0xff283082;
  DAT_101e45538 = 0xff5262cc;
  DAT_101e4553c = 0xff745c42;
  DAT_101e45540 = 0xff184155;
  DAT_101e45544 = 0xff92665e;
  DAT_101e45548 = 0xffbc9c44;
  DAT_101e4554c = 0xffbbae56;
  DAT_101e45550 = 0xff8b7b01;
  DAT_101e45554 = 0xff90b3ef;
  DAT_101e45558 = 0xff728ebe;
  DAT_101e4555c = 0xff19459d;
  DAT_101e45560 = 0xff9d877b;
  DAT_101e45564 = 0xffcbb1a3;
  DAT_101e45568 = 0xff3f6fb5;
  DAT_101e4556c = 0xffc5c5c5;
  DAT_101e45570 = 0xff4fc1f1;
  DAT_101e45574 = 0xff606060;
  DAT_101e45578 = 0xffc5ff7b;
  DAT_101e4557c = 0xff5271eb;
  DAT_101e45580 = 0xfffae076;
  DAT_101e45584 = 0xff3ac8f6;
  DAT_101e45588 = 0xffaaaaaa;
  DAT_101e4558c = 0xffe19400;
  DAT_101e45590 = 0xffe19400;
  DAT_101e45594 = 0xffe550b2;
  DAT_101e45598 = 0xfff22ae8;
  DAT_101e4559c = 0xff005ae1;
  DAT_101e455a0 = 0xff1addfa;
  DAT_101e455a4 = 0xff2424b3;
  DAT_101e455a8 = 0xff2424b3;
  DAT_101e455ac = 0xff646464;
  DAT_101e455b0 = 0xff92665e;
  DAT_101e455b4 = 0xff646037;
  DAT_101e455bc = 0xff1111a1;
  DAT_101e455c0 = 0xff321ee1;
  DAT_101e455c4 = 0xffc8c8c8;
  DAT_101e455c8 = 0xff321ee1;
  DAT_101e455d4 = 0xff6259b3;
  DAT_101e455d8 = 0xff506e73;
  DAT_101e455dc = 0xff9dbf86;
  DAT_101e455b8 = 0xffffffff;
  DAT_101e455e0 = 0xffa35244;
  DAT_101e455cc = 0xff7fe801;
  DAT_101e455e4 = 0xffca828e;
  DAT_101e455d0 = 0xffffffff;
  DAT_101e455e8 = 0xffa6a6a6;
  DAT_101e455ec = 0xffa6a6a6;
  DAT_101e455f0 = 0xffffffff;
  DAT_101e455f4 = 0xff88ea2f;
  DAT_101e455f8 = 0xff8c8c8c;
  DAT_101e455fc = 0xffffb400;
  DAT_101e45600 = 0xffff00ff;
  DAT_101e45604 = 0xff00aded;
  DAT_101e45608 = 0xff33d3ff;
  DAT_101e4560c = 0xff7fe801;
  DAT_101e45610 = 0xff282828;
  DAT_101e45614 = 0xfff0f0f0;
  DAT_101e45618 = 0xffa4781e;
  DAT_101e4561c = 0xffa6654b;
  DAT_101e45620 = 0xff93435b;
  DAT_101e45624 = 0xff387f9c;
  DAT_101e45628 = 0xffa3781e;
  DAT_101e4562c = 0xffffd18a;
  DAT_101e45630 = 0xffff61f7;
  DAT_101e45634 = 0xff5de1f2;
  DAT_101e45638 = 0xff80eaff;
  DAT_101e4563c = 0xff32e00e;
  DAT_101e45640 = 0xff5a3c10;
  DAT_101e45644 = 0xff330b03;
  DAT_101e45648 = 0xff33031d;
  DAT_101e4564c = 0xff032433;
  DAT_101e45650 = 0xff9e8e8d;
  DAT_101d23814 = FUN_100644a94("UI::EVENT_CONFIRM_INGAME_REMINDER_SETTINGS_POPUP");
  DAT_101d23818 = FUN_100644a94("UI::EVENT_DECLINE_INGAME_REMINDER_SETTINGS_POPUP");
  return;
}




long * FUN_1002efc48(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  *puVar9 = &PTR_thunk_FUN_1002f023c_10148bf40;
  puVar9 = puVar9 + 0x17;
  thunk_FUN_100651ebc(puVar9);
  plVar1 = param_1 + 0x41;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x5f;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x76;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x9c;
  thunk_FUN_1002eca3c(plVar4,0);
  plVar5 = param_1 + 0x1e5;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x32e;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x477;
  thunk_FUN_1002eca3c(plVar7,0);
  thunk_FUN_1002eca3c(param_1 + 0x5c0,0);
  *(undefined4 *)(param_1 + 0x709) = 4;
  *(undefined1 *)((long)param_1 + 0x384c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_1 + 0x5c0,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100651f8c(puVar9,PTR_s_build___MenuDraftPartsCommon_tga_101854a38);
  FUN_100651f94(puVar9,"draft_swap_menu_upper_left",0,0,0,"draft_swap_menu_upper_mid",0,0,0,
                "draft_swap_menu_upper_right",0,"draft_swap_menu_center_left",0,
                "draft_swap_menu_center_mid",0,"draft_swap_menu_center_right",0,
                "draft_swap_menu_lower_left",0,"draft_swap_menu_lower_mid",0,
                "draft_swap_menu_lower_right",0);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_100652cac(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_swap_menu_tick");
  *(uint *)((long)param_1 + 0x28c) = *(uint *)((long)param_1 + 0x28c) & 0xffffffbf;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_1004e3120(&local_98,"Swap Heroes?");
  FUN_1006513c0(plVar3,&local_98);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  FUN_1006515e0(plVar3,1);
  *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) & 0xfffffffb;
  uVar10 = FUN_1004e0150("MENU_DRAFT_LOBBY_SWAP_ACCEPT",0);
  FUN_1002ecce4(plVar4,uVar10);
  *(uint *)((long)param_1 + 0x564) = *(uint *)((long)param_1 + 0x564) & 0xfffffffb;
  uVar10 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar5,uVar10);
  FUN_1002ebee0(0x41800000,0,plVar5);
  *(uint *)((long)param_1 + 0xfac) = *(uint *)((long)param_1 + 0xfac) & 0xfffffffb;
  uVar10 = FUN_1004e0150("MENU_DRAFT_LOBBY_SWAP_DECLINE",0);
  FUN_1002ecce4(plVar6,uVar10);
  *(uint *)((long)param_1 + 0x19f4) = *(uint *)((long)param_1 + 0x19f4) & 0xfffffffb;
  uVar10 = FUN_1004e0150("MENU_DRAFT_MUTE_ALLY_PROMPT",0);
  FUN_1002ecce4(plVar7,uVar10);
  *(uint *)((long)param_1 + 0x243c) = *(uint *)((long)param_1 + 0x243c) & 0xfffffffb;
  uVar8 = DAT_101d91884;
  local_70 = DAT_101d91884;
  local_98 = FUN_1002f00c8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x9d,&local_98);
  local_70 = uVar8;
  local_98 = FUN_1002f0110;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x1e6,&local_98);
  local_70 = uVar8;
  local_98 = FUN_1002f0158;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x32f,&local_98);
  local_70 = uVar8;
  local_98 = FUN_1002f01a0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x478,&local_98);
  local_70 = uVar8;
  local_98 = FUN_1002f01f0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x5c1,&local_98);
  FUN_10064e47c(0x442b4000,0x43808000,param_1);
  return param_1;
}




long * thunk_FUN_1002efc48(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  *puVar9 = &PTR_thunk_FUN_1002f023c_10148bf40;
  puVar9 = puVar9 + 0x17;
  thunk_FUN_100651ebc(puVar9);
  plVar1 = param_1 + 0x41;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x5f;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x76;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x9c;
  thunk_FUN_1002eca3c(plVar4,0);
  plVar5 = param_1 + 0x1e5;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x32e;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x477;
  thunk_FUN_1002eca3c(plVar7,0);
  thunk_FUN_1002eca3c(param_1 + 0x5c0,0);
  *(undefined4 *)(param_1 + 0x709) = 4;
  *(undefined1 *)((long)param_1 + 0x384c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_1 + 0x5c0,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100651f8c(puVar9,PTR_s_build___MenuDraftPartsCommon_tga_101854a38);
  FUN_100651f94(puVar9,"draft_swap_menu_upper_left",0,0,0,"draft_swap_menu_upper_mid",0,0,0,
                "draft_swap_menu_upper_right",0,"draft_swap_menu_center_left",0,
                "draft_swap_menu_center_mid",0,"draft_swap_menu_center_right",0,
                "draft_swap_menu_lower_left",0,"draft_swap_menu_lower_mid",0,
                "draft_swap_menu_lower_right",0);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_100652cac(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_swap_menu_tick");
  *(uint *)((long)param_1 + 0x28c) = *(uint *)((long)param_1 + 0x28c) & 0xffffffbf;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_1004e3120(&pcStack_98,"Swap Heroes?");
  FUN_1006513c0(plVar3,&pcStack_98);
  if (plStack_90 != (void *)0x0) {
    operator_delete__(plStack_90);
  }
  FUN_1006515e0(plVar3,1);
  *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) & 0xfffffffb;
  uVar10 = FUN_1004e0150("MENU_DRAFT_LOBBY_SWAP_ACCEPT",0);
  FUN_1002ecce4(plVar4,uVar10);
  *(uint *)((long)param_1 + 0x564) = *(uint *)((long)param_1 + 0x564) & 0xfffffffb;
  uVar10 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar5,uVar10);
  FUN_1002ebee0(0x41800000,0,plVar5);
  *(uint *)((long)param_1 + 0xfac) = *(uint *)((long)param_1 + 0xfac) & 0xfffffffb;
  uVar10 = FUN_1004e0150("MENU_DRAFT_LOBBY_SWAP_DECLINE",0);
  FUN_1002ecce4(plVar6,uVar10);
  *(uint *)((long)param_1 + 0x19f4) = *(uint *)((long)param_1 + 0x19f4) & 0xfffffffb;
  uVar10 = FUN_1004e0150("MENU_DRAFT_MUTE_ALLY_PROMPT",0);
  FUN_1002ecce4(plVar7,uVar10);
  *(uint *)((long)param_1 + 0x243c) = *(uint *)((long)param_1 + 0x243c) & 0xfffffffb;
  uVar8 = DAT_101d91884;
  uStack_70 = DAT_101d91884;
  pcStack_98 = FUN_1002f00c8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x9d,&pcStack_98);
  uStack_70 = uVar8;
  pcStack_98 = FUN_1002f0110;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1e6,&pcStack_98);
  uStack_70 = uVar8;
  pcStack_98 = FUN_1002f0158;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x32f,&pcStack_98);
  uStack_70 = uVar8;
  pcStack_98 = FUN_1002f01a0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x478,&pcStack_98);
  uStack_70 = uVar8;
  pcStack_98 = FUN_1002f01f0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x5c1,&pcStack_98);
  FUN_10064e47c(0x442b4000,0x43808000,param_1);
  return param_1;
}

