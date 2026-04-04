# UI Visibility Gating — Deep Trace

## 1. Navigation Button Callbacks

#### `FUN_1002a8eb0` @ `0x1002a8eb0`

```c

void FUN_1002a8eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}


```

#### `FUN_1002a8e90` @ `0x1002a8e90`

```c

void FUN_1002a8e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}


```

#### `FUN_1002a8ea0` @ `0x1002a8ea0`

```c

void FUN_1002a8ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}


```

#### `FUN_1002a8ec0` @ `0x1002a8ec0`

```c

void FUN_1002a8ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  return;
}


```

#### `FUN_1002a8e70` @ `0x1002a8e70`

```c

void FUN_1002a8e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}


```

#### `FUN_1002a8e80` @ `0x1002a8e80`

```c

void FUN_1002a8e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}


```

## 2. Suspected Visibility Setter (FUN_1002eb970)

#### `FUN_1002eb970` @ `0x1002eb970`

```c

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


```

### Callers:

#### `FUN_1001ab780` @ `0x1001ab780`

```c

long * FUN_1001ab780(long *param_1)

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
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  void *local_a8 [2];
  char local_91;
  code *local_90;
  long *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_1001abf40_1014635a8;
  puVar11 = puVar11 + 0x17;
  thunk_FUN_100652c08(puVar11);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_1001bef10(plVar2,0);
  plVar3 = param_1 + 0x13d;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x163;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x181;
  thunk_FUN_1002ecd94(plVar5,0);
  plVar7 = param_1 + 0x2fb;
  FUN_1006421a8(plVar7);
  param_1[0x2fb] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x30c;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x32a;
  thunk_FUN_1001bd4e0(plVar9,0);
  FUN_1006421a8();
  param_1[0x3c0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x3d1] = 0;
  param_1[0x3d2] = DAT_101dc1cb8;
  *(undefined2 *)(param_1 + 0x3d3) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar7,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3c0,1);
  FUN_100652cac(puVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar11);
  }
  FUN_100652dd4(puVar11,&DAT_10115a164,2);
  uVar12 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar12 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x13c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x5f80;
    FUN_1000200a0(puVar11);
    uVar12 = *(uint *)((long)param_1 + 0x13c);
  }
  *(uint *)((long)param_1 + 0x13c) = uVar12 | 0x10;
  local_68 = DAT_101dbd458;
  local_90 = thunk_FUN_1001acbb8;
  plVar6 = param_1 + 0x18;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = thunk_FUN_1001acbb8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd454;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd460;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd45c;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd464;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd468;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd46c;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd470;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd474;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd478;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd480;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  local_68 = DAT_101dbd488;
  local_90 = FUN_1001abf38;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar6,&local_90);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 0.5)) {
    param_1[0x3f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a16c,2);
  local_90 = (code *)&DAT_3f0000003f000000;
  FUN_1001bd8b4(plVar2,&local_90);
  *(uint *)((long)param_1 + 0x3d4) = *(uint *)((long)param_1 + 0x3d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) | 0x10;
  FUN_1001bd778(plVar2,1);
  FUN_1001bdbec(plVar2,&DAT_10115a164);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0);
  uVar12 = *(uint *)((long)param_1 + 0xa6c);
  if ((uVar12 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xa6c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x6600;
    FUN_1000200a0(plVar3);
  }
  FUN_1004e3120(&local_90,"******* SET THIS TITLE *******");
  FUN_1006513c0(plVar3,&local_90);
  if (local_88 != (long *)0x0) {
    operator_delete__(local_88);
  }
  puVar10 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_90,"button_lively_close");
  FUN_10001549c(local_a8,"button_lively_close_hit");
  FUN_1002ece5c(plVar5,puVar10,&local_90,local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  FUN_1002eb970(plVar5,0);
  local_90 = (code *)0x42c8000042c80000;
  FUN_10064e48c(plVar5,&local_90);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1001acbb8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x182,&local_90);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(uint *)((long)param_1 + 0xb9c) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0xb9c) = *(uint *)((long)param_1 + 0xb9c) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 0x305) != 0.5) || (*(float *)((long)param_1 + 0x182c) != 0.5)) {
    param_1[0x305] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar7);
  }
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x316) != 0.5) || (*(float *)((long)param_1 + 0x18b4) != 0.5)) {
    param_1[0x316] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  FUN_100652dd4(plVar8,&DAT_10115a16c,2);
  thunk_FUN_1001bd798(plVar9,1);
  *(uint *)((long)param_1 + 0x1a8c) = *(uint *)((long)param_1 + 0x1a8c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x19d4) = *(uint *)((long)param_1 + 0x19d4) & 0xffffffef;
  FUN_1001bd778(plVar9,0);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0xfffffffb | (uint)*(byte *)((long)param_1 + 0x1e99) << 2;
  FUN_10064e47c(0x44480000,0x44960000,param_1);
  return param_1;
}


```

#### `FUN_1001b2b88` @ `0x1001b2b88`

```c

/* WARNING: Removing unreachable block (ram,0x0001001b2ed0) */
/* WARNING: Removing unreachable block (ram,0x0001001b2ec0) */
/* WARNING: Removing unreachable block (ram,0x0001001b30d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1001b2b88(long *param_1)

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
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 local_b0 [24];
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar11 = (undefined8 *)FUN_100532ff4();
  *puVar11 = &PTR_thunk_FUN_1001b4464_101464300;
  puVar11 = puVar11 + 0x12;
  FUN_1006505b8(puVar11);
  plVar1 = param_1 + 0x2d;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0x56;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x92;
  thunk_FUN_100651ebc();
  thunk_FUN_100651ebc(param_1 + 0xbc);
  plVar4 = param_1 + 0xe6;
  thunk_FUN_100651ebc();
  plVar5 = param_1 + 0x110;
  FUN_10064e264(plVar5);
  thunk_FUN_100652c08(param_1 + 0x127);
  plVar6 = param_1 + 0x145;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x16b;
  thunk_FUN_1002ecd94(plVar7,0);
  plVar8 = param_1 + 0x2e5;
  thunk_FUN_100652c08();
  thunk_FUN_100655644(param_1 + 0x303);
  thunk_FUN_100655644(param_1 + 0x32e);
  thunk_FUN_100655644(param_1 + 0x359);
  FUN_10064e264();
  param_1[0x39b] = 0x4200000042000000;
  param_1[0x39c] = _DAT_101873a48;
  *(undefined4 *)(param_1 + 0x39d) = 0x3f6e147b;
  *(undefined2 *)((long)param_1 + 0x1cec) = 0x100;
  *(undefined1 *)((long)param_1 + 0x1cee) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_10064f31c(plVar1,plVar2,1);
  FUN_10064f31c(plVar1,param_1 + 0x74,1);
  FUN_10064f31c(plVar1,plVar5,1);
  FUN_100642bd8(plVar5,param_1 + 0x127,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,param_1 + 0x303,1);
  FUN_100642bd8(plVar5,param_1 + 0x359,1);
  FUN_100642bd8(plVar5,param_1 + 0x32e,1);
  FUN_100642bd8(plVar5,plVar8,1);
  FUN_10064f31c(plVar1,plVar3,1);
  FUN_10064f31c(plVar1,plVar4,1);
  FUN_10064f31c(plVar1,plVar7,1);
  FUN_10064f31c(plVar1,param_1 + 900,1);
  FUN_100650608(puVar11,&DAT_10115a164);
  FUN_10064f27c(plVar1,&DAT_101873a40);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill");
  FUN_100652cac(param_1 + 0x74,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_corner_burst");
  *(byte *)(param_1 + 0x8f) = *(byte *)(param_1 + 0x8f) | 2;
  FUN_1001b316c(param_1,0);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar9 = *(uint *)((long)param_1 + 0xaac);
  if ((uVar9 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0xaac) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7900;
    FUN_1000200a0(plVar6);
  }
  puVar10 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_98,"button_lively_close");
  FUN_10001549c(local_b0,"button_lively_close_hit");
  FUN_1002ece5c(plVar7,puVar10,&local_98,local_b0);
  FUN_1002eb970(plVar7,0);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  uVar9 = *(uint *)((long)param_1 + 0x17ac);
  if ((uVar9 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x17ac) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2c80;
    FUN_1000200a0(plVar8);
  }
  FUN_100651f8c(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651f94(plVar3,"gradient_rect_top_left",0,0,0,"gradient_rect_top_middle",0,0,0,
                "gradient_rect_top_right",0,"gradient_rect_middle_left",0,0,0,
                "gradient_rect_middle_right",0,"gradient_rect_bottom_left",0,
                "gradient_rect_bottom_middle",0,"gradient_rect_bottom_right",0);
  FUN_100651f8c(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651f94(plVar4,"gradient_glow_big_top_left",0,0,0,"gradient_glow_big_top_middle",0,0,0,
                "gradient_glow_big_top_left",1,"gradient_glow_big_middle_left",0,0,0,
                "gradient_glow_big_middle_left",1,0,0,0,0,0,0);
  local_70 = DAT_101d91884;
  local_98 = thunk_FUN_1001b43ec;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x16c,&local_98);
  FUN_10001549c(&local_98,"build://Sounds/UI.assetbundle/sfx_popup_close.mp3");
  FUN_1002ebf04(plVar7,&local_98);
  *(uint *)((long)param_1 + 0x114) = *(uint *)((long)param_1 + 0x114) | 0x10;
  local_70 = DAT_101dbd460;
  local_98 = thunk_FUN_1001b43ec;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x13,&local_98);
  local_70 = DAT_101dbd48c;
  local_98 = thunk_FUN_1001b43ec;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x13,&local_98);
  *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 0x10;
  return param_1;
}


```

#### `FUN_1002a616c` @ `0x1002a616c`

```c

long * FUN_1002a616c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  code *local_90;
  long *local_88;
  long *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  puVar11[0x17] = 0;
  *puVar11 = &PTR_thunk_FUN_1002a6738_101482408;
  puVar11 = puVar11 + 0x18;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xb5;
  thunk_FUN_100655644(plVar4);
  thunk_FUN_1001c0c34(param_1 + 0xe0,0);
  param_1[399] = 0;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x1ae;
  FUN_1001b11fc(plVar5);
  plVar6 = param_1 + 0x1c8;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x311;
  thunk_FUN_1002eca3c(plVar7,0);
  thunk_FUN_100652c08(param_1 + 0x45a);
  *(undefined4 *)(param_1 + 0x478) = 0;
  lVar12 = FUN_1002a7160(param_1,1);
  param_1[399] = lVar12;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_1001b127c(plVar5,plVar6);
  FUN_1001b127c(plVar5,plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_100655930(puVar11,plVar2,1);
  FUN_100655930(puVar11,plVar3,1);
  FUN_100655930(puVar11,plVar4,1);
  FUN_100655930(plVar4,param_1 + 0xe0,1);
  lVar12 = FUN_10032523c();
  local_90 = (code *)0x0;
  local_78 = thunk_FUN_1002a7060;
  local_88 = param_1;
  local_80 = param_1;
  FUN_1002a71d4(lVar12 + 0x50,&local_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10064e5cc(plVar1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&local_90,"Blitz | Casual | Solo");
  FUN_1006513c0(plVar2,&local_90);
  if (local_88 != (long *)0x0) {
    operator_delete__(local_88);
  }
  FUN_100651460(plVar2,&DAT_101e44726);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar13 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
  FUN_1006513c0(plVar3,uVar13);
  FUN_10064e5cc(plVar3,1);
  FUN_100651460(plVar3,&DAT_101e44726);
  uVar8 = FUN_1004d2524("homepanel_play_button");
  uVar9 = FUN_100015208("homepanel_play_button",uVar8,0x1234);
  *(uint *)((long)param_1 + 0xec4) =
       *(uint *)((long)param_1 + 0xec4) & 0x80000000 |
       *(uint *)((long)param_1 + 0xec4) & 0x7fff | (uVar9 & 0xffff) << 0xf;
  uVar8 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_1002a666c;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x1c9,&local_90);
  FUN_1002ebf04(plVar6,&DAT_101d23748);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1002eccb4(plVar6,&DAT_101e448a8);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff646464);
  FUN_1002ecd8c(plVar6,&local_90);
  FUN_1002ecd84(plVar6,1);
  uVar13 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1002ecce4(plVar6,uVar13);
  FUN_1002ebe0c(plVar6,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebee0(0x42200000,0x42200000,plVar6);
  FUN_100652590(param_1 + 0x23a,&DAT_101e448a8,2);
  local_68 = uVar8;
  local_90 = FUN_1002a6684;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x312,&local_90);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002eccb4(plVar7,&DAT_101e448a8);
  uVar13 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar7,uVar13);
  FUN_1002ebe0c(plVar7,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff606060);
  FUN_1002ebe4c(plVar7,&local_90);
  FUN_1002ebea0(plVar7,1);
  FUN_100652590(param_1 + 899,&DAT_101e448a8,2);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 0x23a);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 899);
  uVar13 = FUN_100345b94();
  FUN_10034c450(uVar13,"*KindredMenuAnimatedSplashMesh*");
  iVar10 = FUN_100126d70();
  if (iVar10 == 0xe) {
    FUN_100652cac(param_1 + 400,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 400,1);
  }
  FUN_1002a669c(param_1);
  return param_1;
}


```

#### `FUN_1002e0920` @ `0x1002e0920`

```c

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


```

#### `FUN_1002dd284` @ `0x1002dd284`

```c

/* WARNING: Removing unreachable block (ram,0x0001002dd718) */
/* WARNING: Removing unreachable block (ram,0x0001002dd67c) */
/* WARNING: Removing unreachable block (ram,0x0001002dd7ac) */

long * FUN_1002dd284(long *param_1)

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
  undefined **ppuVar14;
  uint uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  void *local_b0 [2];
  char local_99;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar19 = (undefined8 *)FUN_10064e20c();
  puVar19[0x17] = 0;
  puVar20 = puVar19 + 0x18;
  *puVar19 = &PTR_thunk_FUN_1002de910_1014894e8;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x36;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_1006543ec();
  plVar4 = param_1 + 0x9f;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xbd;
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x101;
  thunk_FUN_1002ecd94(plVar6,0);
  plVar7 = param_1 + 0x27b;
  thunk_FUN_1002ecd94(plVar7,0);
  plVar8 = param_1 + 0x3f5;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_1 + 0x56f;
  thunk_FUN_1005357f4(plVar9);
  plVar10 = param_1 + 0x6b4;
  thunk_FUN_100652c08(plVar10);
  plVar11 = param_1 + 0x6d2;
  FUN_10064e264(plVar11);
  plVar12 = param_1 + 0x6e9;
  thunk_FUN_100652c08(plVar12);
  plVar13 = param_1 + 0x707;
  thunk_FUN_100652c08(plVar13);
  thunk_FUN_100536c60();
  thunk_FUN_1001ceb64(param_1 + 0x7bb,0);
  FUN_1004e313c();
  (**(code **)(*param_1 + 0x78))(param_1,puVar20,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(plVar1,param_1 + 0xdb,1);
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar1,plVar7,1);
  FUN_100642bd8(plVar1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar11,plVar13,1);
  FUN_100642bd8(plVar11,param_1 + 0x725,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7bb,1);
  FUN_100652cac(puVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar20,&DAT_101158adc,2);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_101158ad0,2);
  FUN_100654488(plVar3,1);
  FUN_100652cac(plVar4,PTR_s_build___VGX_common_atlas_101854980,"global_brushstroke_01");
  FUN_100652dd4(plVar4,&DAT_101158ad4,2);
  FUN_100653080(plVar4,1);
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar5,&DAT_101158ad8,2);
  FUN_100651594(param_1 + 0xdb,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  FUN_1002eb970(plVar6,0);
  puVar16 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_98,"generic_guild_outline");
  FUN_10001549c(local_b0,"generic_guild_outline");
  FUN_1002ece5c(plVar6,puVar16,&local_98,local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  uVar17 = DAT_101d91884;
  local_70 = DAT_101d91884;
  local_98 = FUN_1002dd9f0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x102,&local_98);
  FUN_1002eb970(plVar7,0);
  puVar16 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_98,"generic_team_outline");
  FUN_10001549c(local_b0,"generic_team_outline");
  FUN_1002ece5c(plVar7,puVar16,&local_98,local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  local_70 = uVar17;
  local_98 = FUN_1002dda00;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x27c,&local_98);
  FUN_1002eb970(plVar8,0);
  puVar16 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_98,"global_checkbox_x_normal");
  FUN_10001549c(local_b0,"global_checkbox_x_press_round");
  FUN_1002ece5c(plVar8,puVar16,&local_98,local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  local_70 = uVar17;
  local_98 = FUN_1002dda10;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x3f6,&local_98);
  local_98 = (code *)CONCAT71(local_98._1_7_,9);
  FUN_100534ebc(plVar9,&local_98);
  FUN_100652cac(plVar10,PTR_s_build___VGX_common_atlas_101854980,"global_panel_scroll_fade");
  uVar15 = *(uint *)((long)param_1 + 0x3624);
  if ((uVar15 & 0x7f80) != 0x880) {
    *(uint *)((long)param_1 + 0x3624) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x880;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x37cc);
  if ((uVar15 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x37cc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1e80;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar13,&DAT_101158ae0,2);
  if ((*(uint *)((long)param_1 + 0x38bc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x38bc) = *(uint *)((long)param_1 + 0x38bc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar13);
  }
  iVar18 = FUN_10012709c();
  ppuVar14 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar18 != 1) {
    ppuVar14 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651594(param_1 + 0x75e,*ppuVar14,&DAT_10115a168);
  uVar21 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1000153b4(param_1 + 0x7d8,uVar21);
  FUN_1006513c0(param_1 + 0x75e,param_1 + 0x7d8);
  FUN_100536e94(param_1 + 0x725,1);
  local_70 = DAT_101dbd4a0;
  local_98 = thunk_FUN_1002de66c;
  plVar1 = param_1 + 0x726;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = DAT_101dbd4bc;
  local_98 = FUN_1002dda24;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = DAT_101dbd4b8;
  local_98 = FUN_1002dda5c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  return param_1;
}


```

## 3. FUN_1002207b8 (references leaderboard button)

#### `FUN_1002207b8` @ `0x1002207b8`

```c

void FUN_1002207b8(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1d10);
  uVar2 = FUN_1002205b4();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}


```

### Callers:

#### `FUN_1001f4cb0` @ `0x1001f4cb0`

```c

void FUN_1001f4cb0(void)

{
  FUN_1002207b8("homepanel_overflow_nav_button_leaderboards");
  return;
}


```

## 4. Menu Initialization (FUN_100221ff0 — references SWITCH_TO_TAB)

#### `FUN_100221ff0` @ `0x100221ff0`

```c

long * FUN_100221ff0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  code *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar9 = FUN_1001b2b88();
  FUN_10014f4a0(lVar9 + 0x1cf0);
  *param_1 = (long)&PTR_FUN_1014751e0;
  param_1[0x39e] = (long)&PTR_FUN_101475318;
  thunk_FUN_10025c044(param_1 + 0x3a1);
  thunk_FUN_1001c397c();
  plVar1 = param_1 + 0x5060;
  thunk_FUN_1006421a8();
  plVar2 = param_1 + 0x5071;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x5097;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x50bd;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x50e3;
  thunk_FUN_100650e64(plVar5);
  FUN_1001b339c(param_1,param_1 + 0x3a1);
  local_68 = DAT_101d2367c;
  local_90 = thunk_FUN_1001b3648;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  FUN_1001b316c(param_1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10015d3ec();
  uVar10 = FUN_100164f34();
  FUN_1006513c0(plVar2,uVar10);
  uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_1006513c0(plVar3,uVar10);
  uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_1006513c0(plVar4,uVar10);
  uVar10 = FUN_1004e0150("GENERIC_STATS",0);
  FUN_1006513c0(plVar5,uVar10);
  uVar7 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = FUN_100222544;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5072,&local_90);
  uVar8 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = FUN_100222544;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5072,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5098,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5098,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50be,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50be,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 3;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50e4,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 3;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50e4,&local_90);
  *(uint *)((long)param_1 + 0x2840c) = *(uint *)((long)param_1 + 0x2840c) | 0x10;
  *(uint *)((long)param_1 + 0x2853c) = *(uint *)((long)param_1 + 0x2853c) | 0x10;
  *(uint *)((long)param_1 + 0x2866c) = *(uint *)((long)param_1 + 0x2866c) | 0x10;
  *(uint *)((long)param_1 + 0x2879c) = *(uint *)((long)param_1 + 0x2879c) | 0x10;
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651460(plVar3,&DAT_10115a16c);
  FUN_100651460(plVar4,&DAT_10115a16c);
  FUN_100651460(plVar5,&DAT_10115a16c);
  uVar6 = *(uint *)((long)param_1 + 0x2840c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2840c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2853c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2853c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar3);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2866c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2866c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2879c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2879c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_1001c3fc8(param_1 + 0x4f8c,"ACCOUNT.*");
  *(uint *)((long)param_1 + 0x27ce4) = *(uint *)((long)param_1 + 0x27ce4) & 0xffffffbf;
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100136e4c(&local_90);
  plVar2 = local_88;
  if (local_80 < 0) {
    operator_delete(local_90);
    if (plVar2 == (long *)0x0) goto LAB_1002224b0;
  }
  else if (local_80._7_1_ == '\0') goto LAB_1002224b0;
  FUN_100642bd8(plVar1,plVar5,1);
LAB_1002224b0:
  FUN_100642bd8(plVar1,param_1 + 0x4f8c,1);
  FUN_1001b33b8(param_1,plVar1);
  (**(code **)(*param_1 + 0x118))(param_1);
  local_68 = FUN_100644a94("UI::EVENT_SWITCH_TO_TAB");
  local_90 = FUN_10022254c;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  return param_1;
}


```

## 5. Social/Friends Panel Controller

### FUN_100502e58 (Social panel controller)

#### `FUN_100502e58` @ `0x100502e58`

```c

void FUN_100502e58(char *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined1 auStack_1f0 [328];
  char *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  cVar1 = param_1[0x17];
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_a8 = *(char **)param_1;
  if (-1 < cVar1) {
    local_a8 = param_1;
  }
  pcStack_a0 = local_a8;
  local_78 = local_80;
  if (*local_a8 != '\0') {
    do {
      FUN_100522630(&local_98,&local_a8);
      FUN_1004edef0(auStack_1f0,&local_98);
      FUN_100502f48(&DAT_101d91788,auStack_1f0);
      FUN_10014ea98(auStack_1f0);
    } while (*local_a8 != '\0');
    if (local_78 == (undefined8 *)0x0) goto LAB_100502f20;
  }
  pvVar2 = (void *)FUN_1000f7b54();
  operator_delete(pvVar2);
LAB_100502f20:
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}


```

### Callers:

#### `FUN_100502ff8` @ `0x100502ff8`

```c

void FUN_100502ff8(long param_1)

{
  char *pcVar1;
  int iVar2;
  uint64_t uVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  undefined **local_50;
  code **ppcStack_48;
  long local_40;
  code *local_38;
  
  pcVar1 = (char *)(param_1 + 0x2a61);
  if (*(char *)(param_1 + 0x2c50) != '\0') {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c58));
    std::string::operator=((string *)(param_1 + 0x2c20),(string *)(param_1 + 0x2c38));
    *(undefined1 *)(param_1 + 0x2c50) = 0;
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c58));
  }
  uVar3 = _mach_absolute_time();
  if ((((double)*(float *)(param_1 + 0x2a70) <
        (double)((uVar3 - *(long *)(param_1 + 0x2a78)) * DAT_101d91638) * 1e-09) ||
      (*(char *)(param_1 + 0x2d00) != '\0')) && (*(int *)(param_1 + 0x2b08) != 0)) {
    *(undefined1 *)(param_1 + 0x2d00) = 0;
    *(undefined4 *)(param_1 + 0x2a70) = 0x41200000;
    FUN_1004e3004(param_1 + 0x2a78);
    FUN_100503228(param_1);
  }
  if ((DAT_1018675c8 == -2) || (DAT_1018675c8 == -0xc9)) {
    std::string::operator=((string *)(param_1 + 0x2c20),(string *)&DAT_101d91198);
    FUN_1004f1904(param_1 + 0x2a70);
  }
  if (*pcVar1 == '\0') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2a54) + -1;
  if (*(int *)(param_1 + 0x2a54) < 1) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x2a54) = iVar2;
  if ((*(long **)(param_1 + 0x2a48) != (long *)0x0) &&
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x2a48) + 0x40))(), iVar2 != 1))
  goto LAB_100503194;
  if (*(char *)(param_1 + 0x2a62) == '\0') {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x2a63) != '\0') {
      iVar2 = *(int *)(param_1 + 0x2a54) + *(int *)(param_1 + 0x2a58);
      *(int *)(param_1 + 0x2a54) = iVar2;
      if (*(int *)(param_1 + 0x2a5c) < iVar2) {
        pcVar1[0] = '\0';
        pcVar1[1] = '\x01';
        goto LAB_10050313c;
      }
      cVar6 = '\0';
    }
  }
  else {
LAB_10050313c:
    cVar6 = '\x01';
  }
  if (*(long **)(param_1 + 0x2a48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2a48) + 8))();
    *(undefined8 *)(param_1 + 0x2a48) = 0;
    cVar6 = *(char *)(param_1 + 0x2a62);
  }
  if ((cVar6 != '\0') && (*(char *)(param_1 + 0x2a63) != '\0')) {
    return;
  }
  local_50 = (undefined **)0x0;
  ppcStack_48 = (code **)0x0;
  local_40 = 0;
  uVar4 = FUN_1004f2c38(param_1 + 0x80,1,&local_50);
  *(undefined8 *)(param_1 + 0x2a48) = uVar4;
  if (local_40 < 0) {
    operator_delete(local_50);
  }
LAB_100503194:
  plVar5 = *(long **)(param_1 + 0x2a48);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,0);
    local_38 = FUN_100502e58;
    ppcStack_48 = &local_38;
    local_50 = &PTR_FUN_10149f0f0;
    (**(code **)(**(long **)(param_1 + 0x2a48) + 0x48))(*(long **)(param_1 + 0x2a48),&local_50);
  }
  return;
}


```

## 6. Friends Status Handler (FUN_10020df80)

#### `FUN_10020df80` @ `0x10020df80`

```c

/* WARNING: Removing unreachable block (ram,0x00010020e398) */
/* WARNING: Removing unreachable block (ram,0x00010020e6b8) */

void FUN_10020df80(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *puVar6;
  size_t sVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  void *pvVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  void *pvVar26;
  undefined8 uVar27;
  short *psVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 ******local_a8;
  void *local_a0;
  byte local_91;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  
  if (*(char *)(param_1 + 0x15c) == '\0') {
    return;
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"REQUESTS");
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar29 = 0;
    uVar30 = 0;
    do {
      puVar2 = (ulong *)(*(long *)(param_1 + 0x88) + lVar29);
      uVar27 = *(undefined8 *)(param_1 + 8);
      FUN_1004e3170(&local_90,puVar2 + 10);
      FUN_1004e3170(&local_a8,puVar2 + 0x11);
      FUN_1002e258c(uVar27,puVar2 + 4,puVar2 + 1,puVar2 + 8,&local_90,puVar2 + 0xf,&local_a8,
                    *puVar2 >> 0x20 & 1);
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      uVar30 = uVar30 + 1;
      lVar29 = lVar29 + 0x188;
    } while (uVar30 < *(uint *)(param_1 + 0x80));
  }
  uVar27 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  FUN_1004e313c(&local_a8);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"REQUESTS");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"REQUESTS");
    iVar14 = FUN_1001d94ec(uVar27,0);
    if (iVar14 < 0xb) {
      uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"REQUESTS");
      FUN_1001d94ec(uVar27,0);
      pcVar19 = " (%d)";
    }
    else {
      pcVar19 = " (%d+)";
    }
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"REQUESTS",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"TEAM");
  lVar29 = FUN_10015d3ec();
  bVar12 = *(byte *)(lVar29 + 0x54a7);
  uVar30 = (ulong)bVar12;
  sVar7 = *(size_t *)(lVar29 + 0x5498);
  if (-1 < (char)bVar12) {
    sVar7 = uVar30;
  }
  sVar8 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar8 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar7 == sVar8) {
    pvVar26 = *(void **)(lVar29 + 0x5490);
    puVar6 = pvVar26;
    if (-1 < (char)bVar12) {
      puVar6 = (undefined8 *)(lVar29 + 0x5490);
    }
    pbVar24 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar24 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar12 < '\0') {
      if ((sVar7 != 0) && (iVar14 = _memcmp(puVar6,pbVar24,sVar7), iVar14 != 0)) goto LAB_10020e208;
    }
    else if (sVar7 != 0) {
      if ((uint)*pbVar24 == ((uint)pvVar26 & 0xff)) {
        pbVar23 = (byte *)(lVar29 + 0x5491);
        do {
          uVar30 = uVar30 - 1;
          pbVar24 = pbVar24 + 1;
          if (uVar30 == 0) goto LAB_10020e3a0;
          bVar12 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar12 == *pbVar24);
      }
      goto LAB_10020e208;
    }
  }
  else {
LAB_10020e208:
    local_90 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    uVar27 = FUN_1004e0150("MENU_FRIENDS_TEAM_CONVERSATION",0);
    FUN_1004e357c(uVar27,&local_90);
    FUN_10020fb84(&local_a8,param_1);
    lVar29 = FUN_10021061c(param_1 + 0xc0,&local_a8);
    if ((char)local_91 < '\0') {
      operator_delete(local_a8);
    }
    uVar27 = *(undefined8 *)(param_1 + 8);
    lVar16 = FUN_10015d3ec();
    lVar17 = FUN_10015d3ec();
    plVar18 = (long *)FUN_1002e24f8(uVar27,lVar16 + 0x5490,lVar17 + 0x5308,&local_90,
                                    param_1 + 200 != lVar29);
    if (plVar18 != (long *)0x0) {
      lVar29 = FUN_10015d3ec();
      std::operator+("#",(string *)(lVar29 + 0x5490));
      pvVar20 = (void *)(ulong)local_91;
      pvVar26 = local_a0;
      if (-1 < (char)local_91) {
        pvVar26 = pvVar20;
      }
      bVar12 = *(byte *)(param_1 + 0x107);
      pvVar4 = *(void **)(param_1 + 0xf8);
      if (-1 < (char)bVar12) {
        pvVar4 = (void *)(ulong)bVar12;
      }
      if (pvVar26 == pvVar4) {
        pppppppuVar5 = (undefined8 *******)local_a8;
        if (-1 < (char)local_91) {
          pppppppuVar5 = &local_a8;
        }
        pbVar24 = *(byte **)(param_1 + 0xf0);
        if (-1 < (char)bVar12) {
          pbVar24 = (byte *)(param_1 + 0xf0);
        }
        if ((char)local_91 < '\0') {
          if (pvVar26 != (void *)0x0) {
            iVar14 = _memcmp(pppppppuVar5,pbVar24,(size_t)pvVar26);
            bVar13 = iVar14 == 0;
            goto LAB_10020e370;
          }
          operator_delete(local_a8);
        }
        else if (pvVar26 != (void *)0x0) {
          if ((uint)*pbVar24 != ((uint)local_a8 & 0xff)) goto LAB_10020e350;
          pbVar23 = (byte *)((ulong)&local_a8 | 1);
          do {
            pvVar20 = (void *)((long)pvVar20 - 1);
            pbVar24 = pbVar24 + 1;
            bVar13 = pvVar20 == (void *)0x0;
            if (pvVar20 == (void *)0x0) break;
            bVar12 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar12 == *pbVar24);
          goto LAB_10020e354;
        }
      }
      else {
LAB_10020e350:
        bVar13 = false;
LAB_10020e354:
        if ((char)local_91 < '\0') {
LAB_10020e370:
          operator_delete(local_a8);
        }
        if (!bVar13) goto LAB_10020e3a0;
      }
      (**(code **)(*plVar18 + 0x138))(plVar18,1);
    }
  }
LAB_10020e3a0:
  uVar27 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
    FUN_1001d94ec(uVar27,0);
    pcVar19 = " (%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"TEAM",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"GUILD");
  lVar29 = FUN_10015d3ec();
  bVar12 = *(byte *)(lVar29 + 0x548f);
  uVar30 = (ulong)bVar12;
  sVar7 = *(size_t *)(lVar29 + 0x5480);
  if (-1 < (char)bVar12) {
    sVar7 = uVar30;
  }
  sVar8 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar8 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar7 == sVar8) {
    pvVar26 = *(void **)(lVar29 + 0x5478);
    puVar6 = pvVar26;
    if (-1 < (char)bVar12) {
      puVar6 = (undefined8 *)(lVar29 + 0x5478);
    }
    pbVar24 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar24 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar12 < '\0') {
      if ((sVar7 != 0) && (iVar14 = _memcmp(puVar6,pbVar24,sVar7), iVar14 != 0)) goto LAB_10020e528;
    }
    else if (sVar7 != 0) {
      if ((uint)*pbVar24 == ((uint)pvVar26 & 0xff)) {
        pbVar23 = (byte *)(lVar29 + 0x5479);
        do {
          uVar30 = uVar30 - 1;
          pbVar24 = pbVar24 + 1;
          if (uVar30 == 0) goto LAB_10020e6c0;
          bVar12 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar12 == *pbVar24);
      }
      goto LAB_10020e528;
    }
  }
  else {
LAB_10020e528:
    local_90 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    uVar27 = FUN_1004e0150("MENU_FRIENDS_GUILD_CONVERSATION",0);
    FUN_1004e357c(uVar27,&local_90);
    FUN_10020fbcc(&local_a8,param_1);
    lVar29 = FUN_10021061c(param_1 + 0xc0,&local_a8);
    if ((char)local_91 < '\0') {
      operator_delete(local_a8);
    }
    uVar27 = *(undefined8 *)(param_1 + 8);
    lVar16 = FUN_10015d3ec();
    lVar17 = FUN_10015d3ec();
    plVar18 = (long *)FUN_1002e2464(uVar27,lVar16 + 0x5478,lVar17 + 0x50c8,&local_90,
                                    param_1 + 200 != lVar29);
    if (plVar18 != (long *)0x0) {
      lVar29 = FUN_10015d3ec();
      std::operator+("#",(string *)(lVar29 + 0x5478));
      pvVar20 = (void *)(ulong)local_91;
      pvVar26 = local_a0;
      if (-1 < (char)local_91) {
        pvVar26 = pvVar20;
      }
      bVar12 = *(byte *)(param_1 + 0x107);
      pvVar4 = *(void **)(param_1 + 0xf8);
      if (-1 < (char)bVar12) {
        pvVar4 = (void *)(ulong)bVar12;
      }
      if (pvVar26 == pvVar4) {
        pppppppuVar5 = (undefined8 *******)local_a8;
        if (-1 < (char)local_91) {
          pppppppuVar5 = &local_a8;
        }
        pbVar24 = *(byte **)(param_1 + 0xf0);
        if (-1 < (char)bVar12) {
          pbVar24 = (byte *)(param_1 + 0xf0);
        }
        if ((char)local_91 < '\0') {
          if (pvVar26 != (void *)0x0) {
            iVar14 = _memcmp(pppppppuVar5,pbVar24,(size_t)pvVar26);
            bVar13 = iVar14 == 0;
            goto LAB_10020e690;
          }
          operator_delete(local_a8);
        }
        else if (pvVar26 != (void *)0x0) {
          if ((uint)*pbVar24 != ((uint)local_a8 & 0xff)) goto LAB_10020e670;
          pbVar23 = (byte *)((ulong)&local_a8 | 1);
          do {
            pvVar20 = (void *)((long)pvVar20 - 1);
            pbVar24 = pbVar24 + 1;
            bVar13 = pvVar20 == (void *)0x0;
            if (pvVar20 == (void *)0x0) break;
            bVar12 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar12 == *pbVar24);
          goto LAB_10020e674;
        }
      }
      else {
LAB_10020e670:
        bVar13 = false;
LAB_10020e674:
        if ((char)local_91 < '\0') {
LAB_10020e690:
          operator_delete(local_a8);
        }
        if (!bVar13) goto LAB_10020e6c0;
      }
      (**(code **)(*plVar18 + 0x138))(plVar18,1);
    }
  }
LAB_10020e6c0:
  uVar27 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
    FUN_1001d94ec(uVar27,0);
    pcVar19 = " (%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"GUILD",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"RECENTS");
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar30 = 0;
    lVar29 = 0x35;
    do {
      puVar3 = (undefined1 *)(*(long *)(param_1 + 0x98) + lVar29);
      FUN_1002e2640(*(undefined8 *)(param_1 + 8),puVar3 + -0x15,puVar3 + -0x2d,*puVar3);
      uVar30 = uVar30 + 1;
      lVar29 = lVar29 + 0x38;
    } while (uVar30 < *(uint *)(param_1 + 0x90));
  }
  uVar27 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"RECENTS");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"RECENTS");
    FUN_1001d94ec(uVar27,0);
    pcVar19 = " (%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&l
// ...truncated...
```

## 7. Home Panel Builder Callers

#### `thunk_FUN_1002a88f0` @ `0x1002a8f04`

```c

long thunk_FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *apvStack_88 [2];
  char cStack_71;
  code *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&pcStack_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60._7_1_ < '\0') {
    operator_delete(pcStack_70);
  }
  uVar2 = DAT_101d91884;
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1002a8e70;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&pcStack_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&pcStack_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8e80;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&pcStack_70,"secondary_nav_news");
  FUN_10001549c(apvStack_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8e90;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&pcStack_70,"secondary_nav_settings");
  FUN_10001549c(apvStack_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8ea0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&pcStack_70,"secondary_nav_leaderboards");
  FUN_10001549c(apvStack_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8eb0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&pcStack_70,"secondary_nav_academy");
  FUN_10001549c(apvStack_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8ec0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x100) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xe8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  FUN_10001549c(&pcStack_70,"secondary_nav_today");
  FUN_10001549c(apvStack_88,"secondary_nav_today_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8ed0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xe8) + 8,&pcStack_70);
  *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) = *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) | 4;
  return param_1;
}


```

