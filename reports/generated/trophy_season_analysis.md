# Trophy Section & Season Rank Analysis

## 1. Trophy UI & Data Strings

### `MENU_TROPHY_SKILL_TIER_SUBTITLE`

**Addresses:** `0x1013e95d5`

#### `FUN_100265bd4` @ `0x100265bd4`

```c

void FUN_100265bd4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  
  if (*(char *)(param_1 + 0x18f21) != '\0') {
    lVar1 = param_1 + 0x17678;
    FUN_1002603e8(lVar1);
    if (*(uint *)(param_1 + 0x18ef8) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x18f00);
        uVar3 = FUN_1004e0150("MENU_TROPHY_SKILL_TIER_SUBTITLE",0);
        thunk_FUN_1004e439c(auStack_80,uVar3);
        FUN_1004e3120(auStack_90,"[SEASON_NAME]");
        lVar2 = lVar6 + lVar4;
        FUN_1000f0ec8(auStack_a0,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        FUN_1004e3bc4(auStack_80,0,auStack_90,auStack_a0);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        FUN_1000f0ec8(auStack_90,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        lVar6 = lVar6 + lVar4;
        FUN_1004e3170(auStack_a0,lVar6 + 0x18);
        FUN_100260d6c(lVar1,auStack_90,auStack_80,auStack_a0,*(undefined4 *)(lVar6 + 0x4c));
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x50;
      } while (uVar5 < *(uint *)(param_1 + 0x18ef8));
    }
    FUN_100260dd0(lVar1,1);
    fVar7 = 0.0;
    if (*(char *)(param_1 + 0x18f22) == '\0') {
      lVar4 = FUN_10003d5bc(0,param_1);
      fVar7 = *(float *)(lVar4 + 0xc);
      lVar4 = FUN_10003d5bc(param_1);
      fVar7 = fVar7 / *(float *)(lVar4 + 0x14) + 40.0;
    }
    FUN_100260e50(fVar7,lVar1);
  }
  return;
}


```

##### Caller: `FUN_10026609c` @ `0x10026609c`

```c

void FUN_10026609c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = FUN_1001c94f4(param_1 + 0x3340);
  uVar2 = FUN_100644b2c(param_2);
  if ((uVar1 < 2 && uVar1 != uVar2) && uVar2 < 2) {
    plVar3 = *(long **)(param_1 + 0x3328 + (ulong)uVar1 * 8);
    plVar4 = *(long **)(param_1 + 0x3328 + (ulong)uVar2 * 8);
    *(long **)(param_1 + 0x3338) = plVar4;
    if (plVar4 != (long *)0x0 && plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x138))(0x3e4ccccd,plVar3,0,4,1);
      (**(code **)(*plVar4 + 0x138))(0x3e4ccccd,plVar4,1,4,1);
    }
    if (plVar4 != (long *)0x0) {
      if (plVar4 == (long *)(param_1 + 0x17678)) {
        FUN_100265bd4(param_1);
      }
      FUN_100265438(param_1);
      return;
    }
  }
  return;
}


```

### `MENU_TROPHY_GUILD_SUBTITLE`

**Addresses:** `0x1013e76ba`

#### `FUN_10023cb3c` @ `0x10023cb3c`

```c

void FUN_10023cb3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  if (*(char *)(param_1 + 0x64639) != '\0') {
    lVar1 = param_1 + 0x5b118;
    FUN_1002603e8(lVar1);
    if (*(uint *)(param_1 + 0x645d0) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x645d8);
        uVar3 = FUN_1004e0150("MENU_TROPHY_GUILD_SUBTITLE",0);
        thunk_FUN_1004e439c(auStack_60,uVar3);
        FUN_1004e3120(auStack_70,"[SEASON_NAME]");
        lVar2 = lVar6 + lVar4;
        FUN_1000f0ec8(auStack_80,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        FUN_1004e3bc4(auStack_60,0,auStack_70,auStack_80);
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        if (local_68 != (void *)0x0) {
          operator_delete__(local_68);
        }
        FUN_1000f0ec8(auStack_70,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        lVar6 = lVar6 + lVar4;
        FUN_1004e3170(auStack_80,lVar6 + 0x18);
        FUN_100260d08(lVar1,auStack_70,auStack_60,auStack_80,*(undefined4 *)(lVar6 + 0x4c));
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        if (local_68 != (void *)0x0) {
          operator_delete__(local_68);
        }
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x50;
      } while (uVar5 < *(uint *)(param_1 + 0x645d0));
    }
    FUN_100260dd0(lVar1,1);
    uVar7 = DAT_101854a80;
    if (*(char *)(param_1 + 0x6463a) != '\0') {
      uVar7 = 0;
    }
    FUN_100260e50(uVar7,lVar1);
  }
  return;
}


```

##### Caller: `FUN_10023df70` @ `0x10023df70`

```c

void FUN_10023df70(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = FUN_1001c94f4(param_1 + 0x33c8);
  if ((uVar1 < 3 && param_2 < 3) && uVar1 != param_2) {
    plVar2 = *(long **)(param_1 + 0x33b0 + (ulong)uVar1 * 8);
    plVar3 = *(long **)(param_1 + 0x33b0 + (ulong)param_2 * 8);
    *(long **)(param_1 + 0x645e0) = plVar3;
    if (plVar3 != (long *)0x0 && plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x138))(0x3dcccccd,plVar2,0,4,1);
      if (plVar3 == (long *)(param_1 + 0x3e98)) {
        FUN_100237f94((long *)(param_1 + 0x3e98),*(undefined1 *)(param_1 + 0x64638));
      }
      (**(code **)(*plVar3 + 0x138))(0x3dcccccd,plVar3,1,4,1);
    }
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_1 + 0x5b118)) {
        FUN_10023cb3c(param_1);
      }
      FUN_10023c368(param_1);
      return;
    }
  }
  return;
}


```

### `MENU_TROPHY_DATA_ERROR`

**Addresses:** `0x1013e9319`

#### `FUN_10025fd1c` @ `0x10025fd1c`

```c

long * FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_100260220;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&local_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  local_78 = uVar8;
  local_a0 = FUN_100260228;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&local_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  local_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  local_a0 = FUN_100260230;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  local_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  local_a0 = FUN_100260238;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return param_1;
}


```

##### Caller: `thunk_FUN_10025fd1c` @ `0x100260240`

```c

long * thunk_FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_100260220;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&pcStack_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  uStack_78 = uVar8;
  pcStack_a0 = FUN_100260228;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&pcStack_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  pcStack_a0 = FUN_100260230;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  pcStack_a0 = FUN_100260238;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  return param_1;
}


```

### `MENU_TROPHY_PAGE_DOWN_ARROW_LABEL`

**Addresses:** `0x1013e9330`

#### `FUN_10025fd1c` @ `0x10025fd1c`

```c

long * FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_100260220;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&local_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  local_78 = uVar8;
  local_a0 = FUN_100260228;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&local_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  local_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  local_a0 = FUN_100260230;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  local_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  local_a0 = FUN_100260238;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return param_1;
}


```

##### Caller: `thunk_FUN_10025fd1c` @ `0x100260240`

```c

long * thunk_FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_100260220;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&pcStack_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  uStack_78 = uVar8;
  pcStack_a0 = FUN_100260228;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&pcStack_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  pcStack_a0 = FUN_100260230;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  pcStack_a0 = FUN_100260238;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  return param_1;
}


```

### `PLAYER_PROFILE_TROPHY_EXPLANATION`

**Addresses:** `0x1013e8ef8`

#### `FUN_10025a800` @ `0x10025a800`

```c

code * FUN_10025a800(code *param_1,code param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined4 uVar24;
  code *pcVar25;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar20 = (undefined8 *)FUN_100269da8();
  *puVar20 = &PTR_thunk_FUN_10025b12c_10147ac80;
  *(undefined4 *)((long)puVar20 + 0xc4) = 0;
  puVar20 = puVar20 + 0x19;
  thunk_FUN_100652c08();
  thunk_FUN_1001c73d0();
  pcVar1 = param_1 + 0xd28;
  FUN_10064e264();
  thunk_FUN_1001c6070();
  pcVar2 = param_1 + 0x2d60;
  thunk_FUN_1006543ec(pcVar2);
  pcVar3 = param_1 + 0x2f00;
  FUN_10053077c(pcVar3,0);
  pcVar25 = param_1 + 0x3438;
  FUN_1006421a8(pcVar25);
  *(undefined ***)(param_1 + 0x3438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x34c0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar4 = param_1 + 0x3548;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x3548) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar5 = param_1 + 0x35d0;
  thunk_FUN_100183990(pcVar5,0);
  pcVar6 = param_1 + 0x3bc0;
  thunk_FUN_100650e64();
  pcVar7 = param_1 + 0x3cf0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_1 + 0x3e20,0);
  pcVar8 = param_1 + 0x3f08;
  FUN_1006421a8(pcVar8);
  *(undefined ***)(param_1 + 0x3f08) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar9 = param_1 + 0x3f90;
  thunk_FUN_100652c08();
  pcVar10 = param_1 + 0x4080;
  FUN_10064fd54(pcVar10,0);
  *(undefined ***)(param_1 + 0x4080) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar11 = param_1 + 0x4148;
  thunk_FUN_100183990(pcVar11,0);
  pcVar12 = param_1 + 0x4738;
  FUN_10064fd54(pcVar12,1);
  *(undefined ***)(param_1 + 0x4738) = &PTR_thunk_FUN_10064e2bc_101451a40;
  pcVar13 = param_1 + 0x4800;
  thunk_FUN_100650e64();
  pcVar14 = param_1 + 0x4930;
  FUN_10064fd54(pcVar14,0);
  *(undefined ***)(param_1 + 0x4930) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar15 = param_1 + 0x49f8;
  thunk_FUN_100652c08();
  pcVar16 = param_1 + 0x4ae8;
  thunk_FUN_1001cd1dc(pcVar16);
  *(undefined4 *)(param_1 + 0x4c48) = 0;
  *(long *)(param_1 + 0x4c40) = 0;
  param_1[0x4c4c] = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar20,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  FUN_100642bd8(pcVar2,pcVar3,1);
  FUN_1005308f8(pcVar3,pcVar25,1);
  FUN_100642bd8(pcVar25,param_1 + 0x34c0,1);
  FUN_100642bd8(param_1 + 0x34c0,param_1 + 0x1b8,1);
  FUN_100642bd8(param_1 + 0x1b8,pcVar1,1);
  pcVar23 = pcVar7;
  if (((byte)param_2 & 1) == 0) {
    FUN_100642bd8(pcVar25,pcVar4,1);
    FUN_100642bd8(pcVar4,param_1 + 0xde0,1);
    FUN_100642bd8(pcVar4,pcVar5,1);
    pcVar23 = pcVar6;
    pcVar25 = pcVar4;
  }
  FUN_100642bd8(pcVar25,pcVar23,1);
  FUN_1005308f8(pcVar3,pcVar8,1);
  FUN_100642bd8(pcVar8,pcVar9,1);
  FUN_100642bd8(pcVar8,pcVar10,1);
  FUN_100642bd8(pcVar10,pcVar11,1);
  FUN_100642bd8(pcVar10,pcVar12,1);
  FUN_100642bd8(pcVar12,pcVar13,1);
  FUN_100642bd8(pcVar12,pcVar14,1);
  FUN_100642bd8(pcVar14,pcVar15,1);
  FUN_100642bd8(pcVar14,pcVar16,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x3e20,1);
  iVar19 = FUN_100126c88();
  FUN_100652cac(puVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(puVar20,&DAT_10115a164,2);
  uVar18 = *(uint *)(param_1 + 0x14c);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x14c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar20);
  }
  param_1[0x1a0] = (code)((byte)param_1[0x1a0] | 2);
  FUN_100654488(pcVar2,1);
  FUN_100530adc(pcVar3,0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    *(uint *)(param_1 + 0xdac) = *(uint *)(param_1 + 0xdac) | 0x10;
    if ((*(float *)(param_1 + 0xd78) != 0.5) || (*(float *)(param_1 + 0xd7c) != 0.6)) {
      *(long *)(param_1 + 0xd78) = 0x3f19999a3f000000;
      FUN_1000200a0(pcVar1);
    }
    FUN_10064e47c(0x447a0000,0x44480000,pcVar1);
    local_80 = DAT_101dbd460;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&local_a8);
    local_80 = DAT_101dbd48c;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&local_a8);
  }
  FUN_1001c6454(param_1 + 0xde0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    FUN_100652cdc(param_1 + 0x3aa0,"circle_button_question");
    uVar18 = *(uint *)(param_1 + 0x3654);
    if ((uVar18 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x3654) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
      FUN_1000200a0(pcVar5);
    }
    FUN_1001b495c(0xbf800000,pcVar5);
    local_80 = DAT_101d91884;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0x35d8,&local_a8);
    FUN_1001b4964(pcVar5,1);
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
    }
    local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffa0a0a0);
    FUN_100651594(pcVar6,*ppuVar17,&local_a8);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
    thunk_FUN_1004e439c(&local_a8,uVar21);
    FUN_1006513c0(pcVar6,&local_a8);
    if (local_a0 != (code *)0x0) {
      operator_delete__(local_a0);
    }
  }
  else {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(pcVar7,*ppuVar17,&DAT_10115a168);
    uVar18 = *(uint *)(param_1 + 0x3d74);
    if ((uVar18 & 0x7f80) != 0x3300) {
      *(uint *)(param_1 + 0x3d74) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
      FUN_1000200a0(pcVar7);
    }
    FUN_100651700(pcVar7,3);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_TROPHY_EXPLANATION",0);
    FUN_1006513c0(pcVar7,uVar21);
  }
  FUN_100652cac(pcVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar18 = *(uint *)(param_1 + 0x4014);
  if ((uVar18 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x4014) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
    FUN_1000200a0(pcVar9);
  }
  FUN_100652cdc(param_1 + 0x4618,"circle_button_question");
  uVar18 = *(uint *)(param_1 + 0x41cc);
  if ((uVar18 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x41cc) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
    FUN_1000200a0(pcVar11);
  }
  FUN_1001b495c(0xbf800000,pcVar11);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_10025bee4;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (code *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x4150,&local_a8);
  FUN_1001b4964(pcVar11,1);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 == 0) {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  uVar24 = 0x44160000;
  if (iVar19 == 0) {
    uVar24 = 0x43e10000;
  }
  FUN_100651038(pcVar13,*ppuVar17);
  FUN_100651708(uVar24,pcVar13,1);
  uVar18 = *(uint *)(param_1 + 0x4884);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4884) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar13);
  }
  FUN_100652cac(pcVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_clock");
  uVar18 = *(uint *)(param_1 + 0x4a7c);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4a7c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar15);
  }
  if ((*(float *)(param_1 + 0x4a48) != 0.5) || (*(float *)(param_1 + 0x4a4c) != 0.5)) {
    *(undefine
// ...truncated...
```

##### Caller: `thunk_FUN_10025a800` @ `0x10025b128`

```c

code * thunk_FUN_10025a800(code *param_1,code param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined4 uVar24;
  code *pcVar25;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar20 = (undefined8 *)FUN_100269da8();
  *puVar20 = &PTR_thunk_FUN_10025b12c_10147ac80;
  *(undefined4 *)((long)puVar20 + 0xc4) = 0;
  puVar20 = puVar20 + 0x19;
  thunk_FUN_100652c08();
  thunk_FUN_1001c73d0();
  pcVar1 = param_1 + 0xd28;
  FUN_10064e264();
  thunk_FUN_1001c6070();
  pcVar2 = param_1 + 0x2d60;
  thunk_FUN_1006543ec(pcVar2);
  pcVar3 = param_1 + 0x2f00;
  FUN_10053077c(pcVar3,0);
  pcVar25 = param_1 + 0x3438;
  FUN_1006421a8(pcVar25);
  *(undefined ***)(param_1 + 0x3438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x34c0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar4 = param_1 + 0x3548;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x3548) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar5 = param_1 + 0x35d0;
  thunk_FUN_100183990(pcVar5,0);
  pcVar6 = param_1 + 0x3bc0;
  thunk_FUN_100650e64();
  pcVar7 = param_1 + 0x3cf0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_1 + 0x3e20,0);
  pcVar8 = param_1 + 0x3f08;
  FUN_1006421a8(pcVar8);
  *(undefined ***)(param_1 + 0x3f08) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar9 = param_1 + 0x3f90;
  thunk_FUN_100652c08();
  pcVar10 = param_1 + 0x4080;
  FUN_10064fd54(pcVar10,0);
  *(undefined ***)(param_1 + 0x4080) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar11 = param_1 + 0x4148;
  thunk_FUN_100183990(pcVar11,0);
  pcVar12 = param_1 + 0x4738;
  FUN_10064fd54(pcVar12,1);
  *(undefined ***)(param_1 + 0x4738) = &PTR_thunk_FUN_10064e2bc_101451a40;
  pcVar13 = param_1 + 0x4800;
  thunk_FUN_100650e64();
  pcVar14 = param_1 + 0x4930;
  FUN_10064fd54(pcVar14,0);
  *(undefined ***)(param_1 + 0x4930) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar15 = param_1 + 0x49f8;
  thunk_FUN_100652c08();
  pcVar16 = param_1 + 0x4ae8;
  thunk_FUN_1001cd1dc(pcVar16);
  *(undefined4 *)(param_1 + 0x4c48) = 0;
  *(long *)(param_1 + 0x4c40) = 0;
  param_1[0x4c4c] = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar20,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  FUN_100642bd8(pcVar2,pcVar3,1);
  FUN_1005308f8(pcVar3,pcVar25,1);
  FUN_100642bd8(pcVar25,param_1 + 0x34c0,1);
  FUN_100642bd8(param_1 + 0x34c0,param_1 + 0x1b8,1);
  FUN_100642bd8(param_1 + 0x1b8,pcVar1,1);
  pcVar23 = pcVar7;
  if (((byte)param_2 & 1) == 0) {
    FUN_100642bd8(pcVar25,pcVar4,1);
    FUN_100642bd8(pcVar4,param_1 + 0xde0,1);
    FUN_100642bd8(pcVar4,pcVar5,1);
    pcVar23 = pcVar6;
    pcVar25 = pcVar4;
  }
  FUN_100642bd8(pcVar25,pcVar23,1);
  FUN_1005308f8(pcVar3,pcVar8,1);
  FUN_100642bd8(pcVar8,pcVar9,1);
  FUN_100642bd8(pcVar8,pcVar10,1);
  FUN_100642bd8(pcVar10,pcVar11,1);
  FUN_100642bd8(pcVar10,pcVar12,1);
  FUN_100642bd8(pcVar12,pcVar13,1);
  FUN_100642bd8(pcVar12,pcVar14,1);
  FUN_100642bd8(pcVar14,pcVar15,1);
  FUN_100642bd8(pcVar14,pcVar16,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x3e20,1);
  iVar19 = FUN_100126c88();
  FUN_100652cac(puVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(puVar20,&DAT_10115a164,2);
  uVar18 = *(uint *)(param_1 + 0x14c);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x14c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar20);
  }
  param_1[0x1a0] = (code)((byte)param_1[0x1a0] | 2);
  FUN_100654488(pcVar2,1);
  FUN_100530adc(pcVar3,0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    *(uint *)(param_1 + 0xdac) = *(uint *)(param_1 + 0xdac) | 0x10;
    if ((*(float *)(param_1 + 0xd78) != 0.5) || (*(float *)(param_1 + 0xd7c) != 0.6)) {
      *(long *)(param_1 + 0xd78) = 0x3f19999a3f000000;
      FUN_1000200a0(pcVar1);
    }
    FUN_10064e47c(0x447a0000,0x44480000,pcVar1);
    uStack_80 = DAT_101dbd460;
    pcStack_a8 = FUN_10025b11c;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    pcStack_98 = (code *)0x0;
    pcStack_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&pcStack_a8);
    uStack_80 = DAT_101dbd48c;
    pcStack_a8 = FUN_10025b11c;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    pcStack_98 = (code *)0x0;
    pcStack_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&pcStack_a8);
  }
  FUN_1001c6454(param_1 + 0xde0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    FUN_100652cdc(param_1 + 0x3aa0,"circle_button_question");
    uVar18 = *(uint *)(param_1 + 0x3654);
    if ((uVar18 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x3654) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 
// ...truncated...
```

### `TROPHY_PAGINATION_INTRODUCTION_TOOLTIP`

**Addresses:** `0x1013e9362`

#### `FUN_1002604c4` @ `0x1002604c4`

```c

void FUN_1002604c4(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  void *local_158;
  void *local_150;
  undefined7 local_148;
  char cStack_141;
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined1 auStack_120 [8];
  void *local_118;
  undefined8 local_110;
  undefined1 auStack_108 [40];
  long *local_e0;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0 [2];
  char local_99;
  undefined8 local_80;
  undefined4 local_68;
  
  uVar12 = (**(code **)(*param_3 + 0x48))();
  iVar5 = FUN_100126c88();
  plVar7 = param_3 + 0x2e7;
  fVar15 = (float)uVar12;
  fVar11 = (float)param_2;
  fVar13 = fVar11 * 0.5;
  bVar4 = false;
  if ((*(float *)(param_3 + 0x2ef) == fVar15 * 0.5) &&
     (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x177c)) && !NAN(fVar13))) {
    bVar4 = *(float *)((long)param_3 + 0x177c) == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x2ef) = fVar15 * 0.5;
    *(float *)((long)param_3 + 0x177c) = fVar13;
    FUN_1000200a0(plVar7);
  }
  local_110 = (undefined **)&DAT_3f0000003f000000;
  (**(code **)(param_3[0x2e7] + 0x28))(plVar7,&local_110);
  FUN_100651708(fVar15 + -20.0,plVar7,1);
  FUN_10064e47c(uVar12,param_2,param_3 + 0x242);
  *(float *)((long)param_3 + 0x5fc) = fVar15;
  *(float *)(param_3 + 0xc0) = fVar11;
  if ((int)param_3[0x240] == 0) {
    fVar13 = 0.0;
  }
  else {
    uVar9 = 0;
    do {
      if (*(long *)(param_3[0x241] + uVar9 * 8) != 0) {
        FUN_10064e47c((fVar11 + -35.0) * 1.15,fVar11 + -35.0);
        (**(code **)(**(long **)(param_3[0x241] + uVar9 * 8) + 0x138))();
        if (uVar9 == 0) {
          uVar6 = *(undefined8 *)param_3[0x241];
          uVar10 = 0;
          uVar8 = 4;
          plVar7 = param_3 + 0x19;
        }
        else {
          uVar6 = *(undefined8 *)(param_3[0x241] + uVar9 * 8);
          uVar10 = 0x420c0000;
          uVar8 = 6;
          plVar7 = *(long **)(param_3[0x241] + (ulong)((int)uVar9 - 1) * 8);
        }
        FUN_10064e5ec(0,uVar10,uVar6,4,plVar7,uVar8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_3 + 0x240));
    fVar13 = (float)*(uint *)(param_3 + 0x240);
  }
  FUN_10053093c(uVar12,fVar11 * fVar13,param_3 + 0x19);
  if ((int)param_3[0x240] == 0) {
    return;
  }
  fVar13 = (float)FUN_10065317c(*(long *)param_3[0x241] + 0x1d0);
  fVar14 = 0.25;
  fVar15 = fVar15 + (fVar13 - fVar15) * 0.25;
  plVar7 = param_3 + 0xc4;
  fVar16 = fVar15 + *(float *)(param_3 + 0x30d);
  FUN_10064259c(plVar7);
  fVar13 = *(float *)((long)param_3 + 0x186c) + 10.0 + fVar14 * 0.5;
  fVar14 = *(float *)(param_3 + 0xcc);
  bVar4 = false;
  if ((fVar14 == fVar16) && (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x664)) && !NAN(fVar13))
     ) {
    bVar4 = *(float *)((long)param_3 + 0x664) == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0xcc) = fVar16;
    *(float *)((long)param_3 + 0x664) = fVar13;
    FUN_1000200a0(plVar7);
  }
  local_110 = (undefined **)&DAT_3f0000003f000000;
  (**(code **)(param_3[0xc4] + 0x28))(plVar7,&local_110);
  plVar1 = param_3 + 0x182;
  FUN_10064259c(plVar1);
  fVar11 = fVar11 + -10.0 + *(float *)((long)param_3 + 0x1874) + fVar14 * -0.5;
  fVar13 = fVar11 - *(float *)(param_3 + 0x30f);
  if (*(float *)(param_3 + 0x30f) <= 0.0) {
    fVar13 = fVar11;
  }
  fVar15 = *(float *)(param_3 + 0x30e) + fVar15;
  bVar4 = false;
  if ((*(float *)(param_3 + 0x18a) == fVar15) &&
     (bVar4 = false, !NAN(*(float *)((long)param_3 + 0xc54)) && !NAN(fVar13))) {
    bVar4 = *(float *)((long)param_3 + 0xc54) == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x18a) = fVar15;
    *(float *)((long)param_3 + 0xc54) = fVar13;
    FUN_1000200a0(plVar1);
  }
  local_110 = (undefined **)&DAT_3f0000003f000000;
  (**(code **)(param_3[0x182] + 0x28))(plVar1,&local_110);
  plVar2 = param_3 + 0x2a4;
  fVar13 = 1.0;
  if (iVar5 == 0) {
    fVar13 = 0.75;
  }
  fVar15 = *(float *)(param_3 + 0x2ad);
  if ((fVar15 != fVar13) || (fVar15 = *(float *)((long)param_3 + 0x156c), fVar15 != fVar13)) {
    *(float *)(param_3 + 0x2ad) = fVar13;
    *(float *)((long)param_3 + 0x156c) = fVar13;
    FUN_1000200a0(plVar2);
  }
  if (*(float *)(param_3 + 0x2ac) == 0.0) {
    fVar13 = -28.0;
    fVar15 = -28.0;
    if (*(float *)((long)param_3 + 0x1564) == -28.0) goto LAB_1002607c8;
  }
  fVar13 = fVar15;
  param_3[0x2ac] = -0x3e20000000000000;
  FUN_1000200a0(plVar2);
LAB_1002607c8:
  local_110 = (undefined **)0x3f8000003f000000;
  (**(code **)(param_3[0x2a4] + 0x28))(plVar2,&local_110);
  plVar3 = param_3 + 0x276;
  fVar15 = (float)FUN_10064259c(plVar7);
  local_110 = (undefined **)CONCAT44(fVar13 + 10.0,fVar15 + 10.0);
  FUN_10064e48c(plVar3,&local_110);
  fVar13 = *(float *)((long)param_3 + 0x664);
  local_110 = (undefined **)&DAT_3f0000003f000000;
  if ((*(float *)(param_3 + 0x27e) != *(float *)(param_3 + 0xcc)) ||
     (*(float *)((long)param_3 + 0x13f4) != fVar13)) {
    *(float *)(param_3 + 0x27e) = *(float *)(param_3 + 0xcc);
    *(float *)((long)param_3 + 0x13f4) = fVar13;
    FUN_1000200a0(plVar3);
  }
  (**(code **)(param_3[0x276] + 0x28))(plVar3,&local_110);
  plVar7 = param_3 + 0x28d;
  fVar15 = (float)FUN_10064259c(plVar1);
  local_110 = (undefined **)CONCAT44(fVar13 + 10.0,fVar15 + 10.0);
  FUN_10064e48c(plVar7,&local_110);
  local_110 = (undefined **)&DAT_3f0000003f000000;
  if ((*(float *)(param_3 + 0x295) != *(float *)(param_3 + 0x18a)) ||
     (*(float *)((long)param_3 + 0x14ac) != *(float *)((long)param_3 + 0xc54))) {
    *(float *)(param_3 + 0x295) = *(float *)(param_3 + 0x18a);
    *(float *)((long)param_3 + 0x14ac) = *(float *)((long)param_3 + 0xc54);
    FUN_1000200a0(plVar7);
  }
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_110);
  uVar9 = FUN_10013033c("paginationIntro");
  if ((uVar9 & 1) == 0) {
    thunk_FUN_1001cd434(&local_110);
    uVar12 = FUN_1004e0150("TROPHY_PAGINATION_INTRODUCTION_TOOLTIP",0);
    thunk_FUN_1004e439c(auStack_120,uVar12);
    thunk_FUN_1004e439c(&local_158,auStack_120);
    FUN_10003330c(&local_148,&DAT_101d91198);
    local_130 = 1;
    local_12c = 0x41a00000;
    FUN_10003c048(auStack_108,&local_158);
    if (local_131 < '\0') {
      operator_delete((void *)CONCAT17(cStack_141,local_148));
    }
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
    local_68 = 0;
    local_80 = 0x43fa00003f666666;
    local_e0 = plVar2;
    FUN_10001549c(&local_158,"paginationIntro");
    std::string::operator=((string *)local_b0,(string *)&local_158);
    if (cStack_141 < '\0') {
      operator_delete(local_158);
    }
    FUN_10001549c(&local_158,"paginationIntro");
    FUN_1001cefb8(param_3 + 0x2ca,&local_158,&local_110);
    if (cStack_141 < '\0') {
      operator_delete(local_158);
    }
    if (local_118 != (void *)0x0) {
      operator_delete__(local_118);
    }
    local_110 = &PTR_FUN_1014666e0;
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_108,1);
  }
  return;
}


```

##### Caller: `FUN_10023c464` @ `0x10023c464`

```c

void FUN_10023c464(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  
  FUN_1001e6c94();
  uVar5 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar5,&local_5c,&local_60,&local_64);
  fVar10 = local_5c - local_64;
  FUN_10064e47c(fVar10,fVar10 * 0.75,param_1 + 0x2cd0);
  if ((*(float *)(param_1 + 0x2d18) != 1.3) || (*(float *)(param_1 + 0x2d1c) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2d18) = 0x3fa666663fa66666;
    FUN_1000200a0(param_1 + 0x2cd0);
  }
  lVar1 = param_1 + 0x33c8;
  fVar6 = (float)FUN_100642888(lVar1,0,0,1,1);
  fVar7 = fVar10 * 0.5 - fVar6 * 0.5;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x3408) == fVar7) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x340c)))
     ) {
    bVar4 = *(float *)(param_1 + 0x340c) == 30.0;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x3408) = fVar7;
    *(undefined4 *)(param_1 + 0x340c) = 0x41f00000;
    FUN_1000200a0(lVar1);
  }
  local_58 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x33c8) + 0x28))(lVar1,&local_58);
  FUN_10064e47c(fVar10,local_60,param_1 + 0x3e98);
  FUN_100235438(param_1 + 0x3e98);
  FUN_10064e47c(fVar10,local_60,param_1 + 0x391d8);
  FUN_10022e748(param_1 + 0x391d8);
  fVar9 = local_60;
  FUN_10064e47c(fVar10,local_60,param_1 + 0x497a8);
  FUN_100239a40(param_1 + 0x497a8);
  fVar7 = local_60;
  cVar3 = *(char *)(param_1 + 0x6463a);
  lVar2 = param_1 + 0x5b118;
  fVar11 = *(float *)(param_1 + 0x340c);
  FUN_1001c9614(lVar1);
  fVar8 = fVar7 + -160.0;
  if (cVar3 != '\0') {
    fVar8 = fVar7;
  }
  FUN_10064e47c(fVar10,fVar8 - (fVar11 + fVar9),lVar2);
  FUN_1002604c4(lVar2);
  FUN_10064e5ec(fVar6 * 0.5,0,lVar2,4,lVar1,6);
  FUN_100227610(param_1 + 0x5c998);
  FUN_10064e47c(fVar10,local_60,param_1 + 0x2dc0);
  return;
}


```

##### Caller: `FUN_1002654ec` @ `0x1002654ec`

```c

void FUN_1002654ec(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_74;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  
  FUN_1001e6c94();
  uVar4 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar4,&fStack_6c,&local_70,&local_74);
  fVar8 = local_70;
  fVar5 = DAT_101854a80;
  fVar7 = fStack_6c - local_74;
  FUN_10064e47c(fVar7,fVar7 * 0.75,param_1 + 0x2c48);
  if ((*(float *)(param_1 + 0x2c90) != 1.3) || (*(float *)(param_1 + 0x2c94) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2c90) = 0x3fa666663fa66666;
    FUN_1000200a0(param_1 + 0x2c48);
  }
  fVar8 = fVar8 - fVar5;
  lVar1 = param_1 + 0x3340;
  fVar5 = (float)FUN_100642888(lVar1,0,0,1,1);
  fVar6 = fVar7 * 0.5 - fVar5 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x3380) == fVar6) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x3384)))
     ) {
    bVar3 = *(float *)(param_1 + 0x3384) == 30.0;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x3380) = fVar6;
    *(undefined4 *)(param_1 + 0x3384) = 0x41f00000;
    FUN_1000200a0(lVar1);
  }
  local_68 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x3340) + 0x28))(lVar1,&local_68);
  fVar6 = fVar8;
  FUN_10064e47c(fVar7,fVar8,param_1 + 0x3e10);
  FUN_10026350c(param_1 + 0x3e10);
  lVar2 = param_1 + 0x17678;
  fVar9 = *(float *)(param_1 + 0x3384);
  FUN_1001c9614(lVar1);
  FUN_10064e47c(fVar7,(local_70 + -160.0) - (fVar9 + fVar6),lVar2);
  FUN_1002604c4(lVar2);
  FUN_10064e5ec(fVar5 * 0.5,0,lVar2,4,lVar1,6);
  FUN_10064e47c(fVar7,fVar8,param_1 + 0x2d38);
  return;
}


```

### `trophyCase`

**Addresses:** `0x10141c1c0`

#### `FUN_10050e80c` @ `0x10050e80c`

```c

/* WARNING: Removing unreachable block (ram,0x00010050f720) */
/* WARNING: Removing unreachable block (ram,0x00010050f688) */
/* WARNING: Removing unreachable block (ram,0x00010050f7c0) */

void FUN_10050e80c(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  char *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  char local_111;
  void *local_110 [2];
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  undefined4 local_e0;
  undefined4 local_dc;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  code *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
LAB_10050e88c:
    uVar13 = 0;
  }
  else {
    local_118 = 0x100005;
    local_128 = "code";
    uStack_120 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_128);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050e88c;
    local_118 = 0x100005;
    local_128 = "code";
    uStack_120 = 4;
    puVar12 = (undefined4 *)FUN_1000e87dc(param_1,&local_128);
    uVar13 = *puVar12;
  }
  *(undefined4 *)(param_2 + 0xd8) = uVar13;
  lVar4 = param_2 + 0x98;
  FUN_10015aacc(lVar4,0);
  FUN_10015ab5c(param_2 + 0xa8,0);
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    return;
  }
  local_118 = 0x100005;
  local_128 = "returnValue";
  uStack_120 = 0xb;
  lVar5 = FUN_1000e87dc(param_1,&local_128);
  if (*(int *)(lVar5 + 0x10) != 3) {
    return;
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_1004e313c();
  local_118 = 0x100005;
  local_128 = "returnValue";
  uStack_120 = 0xb;
  plVar6 = (long *)FUN_1000e87dc(param_1,&local_128);
  lVar5 = FUN_1000e86c0(plVar6,"success");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050e9a0:
    bVar3 = false;
  }
  else {
    local_118 = 0x100005;
    local_128 = "success";
    uStack_120 = 7;
    lVar5 = FUN_1000e87dc(plVar6,&local_128);
    if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_10050e9a0;
    local_118 = 0x100005;
    local_128 = "success";
    uStack_120 = 7;
    lVar5 = FUN_1000e87dc(plVar6,&local_128);
    bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0xb8) = bVar3;
  std::string::operator=((string *)(param_2 + 0xc0),(string *)&DAT_101d91198);
  if (*(char *)(param_2 + 0xb8) != '\0') {
    lVar5 = FUN_1000e86c0(plVar6,"members");
    if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) ||
       (lVar5 = FUN_1000e86c0(plVar6,"teamUUID"),
       *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5)) {
      *(undefined4 *)(param_2 + 0xd8) = 0xfffffffa;
      DAT_1018675c8 = 0xfffffffa;
    }
    else {
      lVar5 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ea94:
        pcVar9 = "";
      }
      else {
        local_118 = 0x100005;
        local_128 = "teamUUID";
        uStack_120 = 8;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050ea94;
        local_118 = 0x100005;
        local_128 = "teamUUID";
        uStack_120 = 8;
        pcVar9 = (char *)FUN_1000e87dc(plVar6,&local_128);
        if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
          pcVar9 = *(char **)pcVar9;
        }
      }
      FUN_1000ee4ec(&local_128,pcVar9);
      std::string::operator=((string *)(param_2 + 0x28),(string *)&local_128);
      if (local_111 < '\0') {
        operator_delete(local_128);
      }
      lVar5 = FUN_1000e86c0(plVar6,"name");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050eb0c:
        pcVar9 = "";
      }
      else {
        local_118 = 0x100005;
        local_128 = "name";
        uStack_120 = 4;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050eb0c;
        local_118 = 0x100005;
        local_128 = "name";
        uStack_120 = 4;
        pcVar9 = (char *)FUN_1000e87dc(plVar6,&local_128);
        if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
          pcVar9 = *(char **)pcVar9;
        }
      }
      FUN_1000ee4ec(&local_128,pcVar9);
      std::string::operator=((string *)(param_2 + 0x40),(string *)&local_128);
      if (local_111 < '\0') {
        operator_delete(local_128);
      }
      lVar5 = FUN_1000e86c0(plVar6,"tag");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050eb84:
        pcVar9 = "";
      }
      else {
        local_118 = 0x100005;
        local_128 = "tag";
        uStack_120 = 3;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050eb84;
        local_118 = 0x100005;
        local_128 = "tag";
        uStack_120 = 3;
        pcVar9 = (char *)FUN_1000e87dc(plVar6,&local_128);
        if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
          pcVar9 = *(char **)pcVar9;
        }
      }
      FUN_1000ee4ec(&local_128,pcVar9);
      std::string::operator=((string *)(param_2 + 0x58),(string *)&local_128);
      if (local_111 < '\0') {
        operator_delete(local_128);
      }
      lVar5 = FUN_1000e86c0(plVar6,"numMembers");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ebfc:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "numMembers";
        uStack_120 = 10;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050ebfc;
        local_118 = 0x100005;
        local_128 = "numMembers";
        uStack_120 = 10;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x70) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"maxMembers");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ed08:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "maxMembers";
        uStack_120 = 10;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050ed08;
        local_118 = 0x100005;
        local_128 = "maxMembers";
        uStack_120 = 10;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x74) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"wins");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ed7c:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "wins";
        uStack_120 = 4;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050ed7c;
        local_118 = 0x100005;
        local_128 = "wins";
        uStack_120 = 4;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x78) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"skillTier");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050edf0:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "skillTier";
        uStack_120 = 9;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050edf0;
        local_118 = 0x100005;
        local_128 = "skillTier";
        uStack_120 = 9;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar
// ...truncated...
```

##### Caller: `FUN_100503314` @ `0x100503314`

```c

void FUN_100503314(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  char *local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  
  DAT_1018675c8 = 1;
  if ((int)param_2[2] == 0) {
    DAT_1018675c8 = 0xffffffff;
    return;
  }
  if ((*(char *)(param_1 + 0x2c18) != '\0') &&
     (lVar4 = FUN_1000e86c0(param_2,"sessionToken"),
     *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4)) {
    local_48 = 0x100005;
    local_58 = "sessionToken";
    local_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(param_2,&local_58);
    plVar6 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar6 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar6);
    uVar1 = local_50;
    if (-1 < (char)local_41) {
      uVar1 = (ulong)local_41;
    }
    if ((uVar1 != 0) ||
       (iVar2 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1013cda1a),
       iVar2 != 0)) {
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c58));
      *(undefined1 *)(param_1 + 0x2c50) = 1;
      std::string::operator=((string *)(param_1 + 0x2c38),(string *)&local_58);
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c58));
    }
    if ((char)local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  if (DAT_1018675cc == (int)param_3) {
LAB_100503448:
    FUN_100506f44(param_1,param_2);
  }
  else {
    plVar6 = (long *)FUN_1004f1830(param_1 + 0x2c98,param_3);
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*plVar6 + 0x10))();
    switch(uVar3) {
    case 1:
      FUN_1005039ac(param_2,plVar6);
      break;
    case 2:
      FUN_100505210(param_2,plVar6);
      break;
    case 3:
      FUN_1005050c0(param_2,plVar6);
      break;
    case 4:
      FUN_10050539c(param_2,plVar6);
      break;
    case 5:
      FUN_100505520(param_2,plVar6,*(undefined1 *)(param_1 + 0x2a64));
      goto LAB_100503448;
    case 7:
      FUN_100507590(param_2,plVar6);
      break;
    case 8:
      FUN_100507640(param_2,plVar6);
      FUN_1000153b4(param_1 + 0x2b40,plVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)((long)plVar6 + 0x124);
      *(undefined8 *)(param_1 + 0x2b50) = *(undefined8 *)((long)plVar6 + 0x11c);
      break;
    case 9:
      FUN_10050a250(param_2,plVar6);
      break;
    case 10:
      FUN_10050b0dc(param_2,plVar6);
      break;
    case 0xb:
      FUN_10050b408(param_2,plVar6);
      break;
    case 0xc:
      local_48 = 0x100005;
      local_58 = "code";
      local_50 = 4;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_58);
      *(undefined4 *)(plVar6 + 5) = *puVar7;
      break;
    case 0xd:
      FUN_10050b6a8(param_2,plVar6);
      break;
    case 0xe:
      FUN_10050bc4c(param_2,plVar6);
      break;
    case 0xf:
      FUN_10050bfac(param_2,plVar6);
      break;
    case 0x10:
      FUN_10050c2bc(param_2,plVar6);
      break;
    case 0x11:
      FUN_10050de50(param_2,plVar6);
      break;
    case 0x12:
      FUN_10050e4fc(param_2,plVar6);
      break;
    case 0x13:
      FUN_10050e80c(param_2,plVar6);
      break;
    case 0x14:
      FUN_10050fa10(param_2,plVar6);
      break;
    case 0x15:
      FUN_100510924(param_2,plVar6);
      break;
    case 0x16:
      FUN_100510c38(param_2,plVar6);
      break;
    case 0x17:
      FUN_10051a89c(param_2,plVar6);
      break;
    case 0x18:
      FUN_100510f84(param_2,plVar6);
      break;
    case 0x19:
      FUN_1005111b4(param_2,plVar6);
      break;
    case 0x1a:
      FUN_10051151c(param_2,plVar6);
      break;
    case 0x1b:
      FUN_10051183c(param_2,plVar6);
      break;
    case 0x1c:
      FUN_100511e3c(param_2,plVar6,param_1 + 0x2ad8,param_1 + 0x2af0);
      break;
    case 0x1d:
      FUN_10051022c(param_2,plVar6);
      break;
    case 0x1e:
      FUN_100510420(param_2,plVar6);
      break;
    case 0x1f:
      FUN_100510514(param_2,plVar6);
      break;
    case 0x20:
      FUN_100510608(param_2,plVar6);
      break;
    case 0x21:
      FUN_1005106fc(param_2,plVar6);
      break;
    case 0x22:
      FUN_100511ec4(param_2,plVar6);
      break;
    case 0x23:
      FUN_100512218(param_2,plVar6);
      break;
    case 0x24:
      FUN_1005123d8(param_2,plVar6);
      break;
    case 0x25:
      FUN_100512674(param_2,plVar6);
      break;
    case 0x26:
      FUN_100512910(param_2,plVar6);
      break;
    case 0x27:
      FUN_100512db4(param_2,plVar6);
      break;
    case 0x28:
      FUN_100513564(param_2,plVar6);
      break;
    case 0x29:
      FUN_1005137fc(param_2,plVar6);
      break;
    case 0x2a:
      FUN_1005138f0(param_2,plVar6);
      break;
    case 0x2b:
      FUN_1005139e4(param_2,plVar6);
      break;
    case 0x2c:
      FUN_100513aa0(param_2,plVar6);
      break;
    case 0x2d:
      FUN_100513bd0(param_2,plVar6);
      break;
    case 0x2e:
      FUN_100513d90(param_2,plVar6);
      break;
  
// ...truncated...
```

#### `FUN_10050c2bc` @ `0x10050c2bc`

```c

/* WARNING: Removing unreachable block (ram,0x00010050dbc4) */
/* WARNING: Removing unreachable block (ram,0x00010050db2c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc64) */

void FUN_10050c2bc(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined8 uVar15;
  char *local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  char local_229;
  void *local_228 [2];
  char local_211;
  void *local_210 [2];
  char local_1f9;
  undefined4 local_1f8;
  undefined4 local_1f4;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  void *pvStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  char *local_198;
  undefined8 uStack_190;
  long local_188;
  undefined8 local_180;
  void *local_178;
  void *local_170;
  undefined8 uStack_168;
  long local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
LAB_10050c338:
    uVar12 = 0;
  }
  else {
    local_188 = CONCAT44(local_188._4_4_,0x100005);
    local_198 = "code";
    uStack_190 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_198);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c338;
    local_188 = CONCAT44(local_188._4_4_,0x100005);
    local_198 = "code";
    uStack_190 = 4;
    puVar11 = (undefined4 *)FUN_1000e87dc(param_1,&local_198);
    uVar12 = *puVar11;
  }
  *(undefined4 *)(param_2 + 0x238) = uVar12;
  std::string::operator=((string *)(param_2 + 0x220),(string *)&DAT_101d91198);
  FUN_10015a0b0(param_2 + 0x1d8,0);
  FUN_10015a500(param_2 + 0x1e8,0);
  FUN_10015a474(param_2 + 0x1f8,0);
  FUN_10015a3d8(param_2 + 0x208,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_188 = CONCAT44(local_188._4_4_,0x100005);
  local_198 = "returnValue";
  uStack_190 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_198);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_198 = (char *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  FUN_1004e313c(&local_180);
  local_170 = (void *)0x0;
  uStack_168 = 0;
  local_160 = 0;
  local_230 = 0x100005;
  local_240 = "returnValue";
  uStack_238 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_240);
  lVar4 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c48c:
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  else {
    local_230 = 0x100005;
    local_240 = "success";
    uStack_238 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_240);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_10050c48c;
    local_230 = 0x100005;
    local_240 = "success";
    uStack_238 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_240);
    bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    *(bool *)(param_2 + 0x218) = bVar3;
    if (bVar3) {
      lVar4 = FUN_1000e86c0(plVar5,"members");
      if ((*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) ||
         (lVar4 = FUN_1000e86c0(plVar5,"guildUUID"),
         *plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4)) {
        *(undefined4 *)(param_2 + 0x238) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        lVar4 = FUN_1000e86c0(plVar5,"guildUUID");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c634:
          pcVar6 = "";
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildUUID";
          uStack_238 = 9;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050c634;
          local_230 = 0x100005;
          local_240 = "guildUUID";
          uStack_238 = 9;
          pcVar6 = (char *)FUN_1000e87dc(plVar5,&local_240);
          if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
            pcVar6 = *(char **)pcVar6;
          }
        }
        FUN_1000ee4ec(&local_240,pcVar6);
        std::string::operator=((string *)(param_2 + 0x180),(string *)&local_240);
        if (local_229 < '\0') {
          operator_delete(local_240);
        }
        lVar4 = FUN_1000e86c0(plVar5,"guildXp");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c6ac:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildXp";
          uStack_238 = 7;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c6ac;
          local_230 = 0x100005;
          local_240 = "guildXp";
          uStack_238 = 7;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1b4) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"guildXpRequired");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c78c:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildXpRequired";
          uStack_238 = 0xf;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c78c;
          local_230 = 0x100005;
          local_240 = "guildXpRequired";
          uStack_238 = 0xf;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1b8) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"guildXpMin");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c800:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildXpMin";
          uStack_238 = 10;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c800;
          local_230 = 0x100005;
          local_240 = "guildXpMin";
          uStack_238 = 10;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1b0) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"avgSkillTier");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c874:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "avgSkillTier";
          uStack_238 = 0xc;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c874;
          local_230 = 0x100005;
          local_240 = "avgSkillTier";
          uStack_238 = 0xc;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1bc) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"avgKarma");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c8e8:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "avgKarma";
          uStack_23
// ...truncated...
```

#### `FUN_100507640` @ `0x100507640`

```c

/* WARNING: Removing unreachable block (ram,0x000100509be4) */
/* WARNING: Removing unreachable block (ram,0x000100509614) */
/* WARNING: Removing unreachable block (ram,0x0001005090d4) */
/* WARNING: Removing unreachable block (ram,0x00010050954c) */
/* WARNING: Removing unreachable block (ram,0x000100509b4c) */
/* WARNING: Removing unreachable block (ram,0x000100509e58) */
/* WARNING: Removing unreachable block (ram,0x0001005096c0) */

void FUN_100507640(long *param_1,long param_2)

{
  ulong uVar1;
  string *psVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  string *psVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  string *psVar16;
  char *pcVar17;
  undefined4 *puVar18;
  string *psVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  void *local_268;
  ulong local_260;
  byte local_251;
  char *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  void *pvStack_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  long lStack_210;
  void *local_208;
  undefined8 local_200;
  long lStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int local_1bc;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  local_1a8 = 0x100005;
  local_1b8 = "code";
  uStack_1b0 = 4;
  puVar9 = (undefined4 *)FUN_1000e87dc(param_1,&local_1b8);
  *(undefined4 *)(param_2 + 0x240) = *puVar9;
  puVar9 = (undefined4 *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != 0) {
    *puVar9 = 0;
  }
  FUN_100156080(param_2 + 0x58,0);
  FUN_100155f24(param_2 + 0x38,0);
  FUN_100155eac(param_2 + 0x28,0);
  lVar10 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar10) {
LAB_1005078c4:
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  lVar10 = FUN_1000e87dc(param_1,&local_1b8);
  if (*(int *)(lVar10 + 0x10) != 3) goto LAB_1005078c4;
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  plVar11 = (long *)FUN_1000e87dc(param_1,&local_1b8);
  FUN_100168aa8(&local_1b8);
  lVar10 = FUN_1000e86c0(plVar11,"handle");
  if ((((*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) ||
       (lVar10 = FUN_1000e86c0(plVar11,"skillTier"),
       *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
      (lVar10 = FUN_1000e86c0(plVar11,"completed"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
     ((lVar10 = FUN_1000e86c0(plVar11,"wins"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10 ||
      (lVar10 = FUN_1000e86c0(plVar11,"level"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)))) {
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    lVar10 = FUN_1000e86c0(plVar11,"handle");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507860:
      pcVar17 = "";
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_100507860;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      pcVar17 = (char *)FUN_1000e87dc(plVar11,&local_250);
      if (((byte)pcVar17[0x12] >> 6 & 1) == 0) {
        pcVar17 = *(char **)pcVar17;
      }
    }
    FUN_1004e3148(param_2 + 0x80,pcVar17);
    lVar10 = FUN_1000e86c0(plVar11,"completed");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_1005078bc:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_1005078bc;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x120) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"wins");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a1b0:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a1b0;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x124) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"level");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a224:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a224;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x148) = uVar23;
  }
  lVar10 = FUN_1000e86c0(plVar11,"completed_non_tutorial");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507934:
    uVar23 = 1;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507934;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x11c) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"last_login");
  dVar26 = -1.0;
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar10) {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "last_login";
    uStack_248 = 10;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "last_login";
      uStack_248 = 10;
      FUN_1000e87dc(plVar11,&local_250);
      dVar26 = (double)FUN_1000fceec();
    }
  }
  *(long *)(param_2 + 0x100) = (long)dVar26;
  lVar10 = FUN_1000e86c0(plVar11,"wins_aral");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a20:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507a20;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x128) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_blitz");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a94:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_blitz";
    uStack_248 = 10;
    lVar10 = FUN
// ...truncated...
```

### `getTrophyCase`

**Addresses:** `0x10141bbad`

#### `FUN_100500b0c` @ `0x100500b0c`

```c

undefined8 FUN_100500b0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getTrophyCase");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}


```

### `trophy_name`

**Addresses:** `0x10141c1f1`

#### `FUN_100507640` @ `0x100507640`

```c

/* WARNING: Removing unreachable block (ram,0x000100509be4) */
/* WARNING: Removing unreachable block (ram,0x000100509614) */
/* WARNING: Removing unreachable block (ram,0x0001005090d4) */
/* WARNING: Removing unreachable block (ram,0x00010050954c) */
/* WARNING: Removing unreachable block (ram,0x000100509b4c) */
/* WARNING: Removing unreachable block (ram,0x000100509e58) */
/* WARNING: Removing unreachable block (ram,0x0001005096c0) */

void FUN_100507640(long *param_1,long param_2)

{
  ulong uVar1;
  string *psVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  string *psVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  string *psVar16;
  char *pcVar17;
  undefined4 *puVar18;
  string *psVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  void *local_268;
  ulong local_260;
  byte local_251;
  char *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  void *pvStack_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  long lStack_210;
  void *local_208;
  undefined8 local_200;
  long lStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int local_1bc;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  local_1a8 = 0x100005;
  local_1b8 = "code";
  uStack_1b0 = 4;
  puVar9 = (undefined4 *)FUN_1000e87dc(param_1,&local_1b8);
  *(undefined4 *)(param_2 + 0x240) = *puVar9;
  puVar9 = (undefined4 *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != 0) {
    *puVar9 = 0;
  }
  FUN_100156080(param_2 + 0x58,0);
  FUN_100155f24(param_2 + 0x38,0);
  FUN_100155eac(param_2 + 0x28,0);
  lVar10 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar10) {
LAB_1005078c4:
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  lVar10 = FUN_1000e87dc(param_1,&local_1b8);
  if (*(int *)(lVar10 + 0x10) != 3) goto LAB_1005078c4;
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  plVar11 = (long *)FUN_1000e87dc(param_1,&local_1b8);
  FUN_100168aa8(&local_1b8);
  lVar10 = FUN_1000e86c0(plVar11,"handle");
  if ((((*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) ||
       (lVar10 = FUN_1000e86c0(plVar11,"skillTier"),
       *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
      (lVar10 = FUN_1000e86c0(plVar11,"completed"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
     ((lVar10 = FUN_1000e86c0(plVar11,"wins"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10 ||
      (lVar10 = FUN_1000e86c0(plVar11,"level"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)))) {
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    lVar10 = FUN_1000e86c0(plVar11,"handle");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507860:
      pcVar17 = "";
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_100507860;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      pcVar17 = (char *)FUN_1000e87dc(plVar11,&local_250);
      if (((byte)pcVar17[0x12] >> 6 & 1) == 0) {
        pcVar17 = *(char **)pcVar17;
      }
    }
    FUN_1004e3148(param_2 + 0x80,pcVar17);
    lVar10 = FUN_1000e86c0(plVar11,"completed");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_1005078bc:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_1005078bc;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x120) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"wins");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a1b0:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a1b0;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x124) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"level");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a224:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a224;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x148) = uVar23;
  }
  lVar10 = FUN_1000e86c0(plVar11,"completed_non_tutorial");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507934:
    uVar23 = 1;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507934;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x11c) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"last_login");
  dVar26 = -1.0;
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar10) {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "last_login";
    uStack_248 = 10;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "last_login";
      uStack_248 = 10;
      FUN_1000e87dc(plVar11,&local_250);
      dVar26 = (double)FUN_1000fceec();
    }
  }
  *(long *)(param_2 + 0x100) = (long)dVar26;
  lVar10 = FUN_1000e86c0(plVar11,"wins_aral");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a20:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507a20;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x128) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_blitz");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a94:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_blitz";
    uStack_248 = 10;
    lVar10 = FUN
// ...truncated...
```

##### Caller: `FUN_100503314` @ `0x100503314`

```c

void FUN_100503314(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  char *local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  
  DAT_1018675c8 = 1;
  if ((int)param_2[2] == 0) {
    DAT_1018675c8 = 0xffffffff;
    return;
  }
  if ((*(char *)(param_1 + 0x2c18) != '\0') &&
     (lVar4 = FUN_1000e86c0(param_2,"sessionToken"),
     *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4)) {
    local_48 = 0x100005;
    local_58 = "sessionToken";
    local_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(param_2,&local_58);
    plVar6 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar6 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar6);
    uVar1 = local_50;
    if (-1 < (char)local_41) {
      uVar1 = (ulong)local_41;
    }
    if ((uVar1 != 0) ||
       (iVar2 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1013cda1a),
       iVar2 != 0)) {
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c58));
      *(undefined1 *)(param_1 + 0x2c50) = 1;
      std::string::operator=((string *)(param_1 + 0x2c38),(string *)&local_58);
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c58));
    }
    if ((char)local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  if (DAT_1018675cc == (int)param_3) {
LAB_100503448:
    FUN_100506f44(param_1,param_2);
  }
  else {
    plVar6 = (long *)FUN_1004f1830(param_1 + 0x2c98,param_3);
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*plVar6 + 0x10))();
    switch(uVar3) {
    case 1:
      FUN_1005039ac(param_2,plVar6);
      break;
    case 2:
      FUN_100505210(param_2,plVar6);
      break;
    case 3:
      FUN_1005050c0(param_2,plVar6);
      break;
    case 4:
      FUN_10050539c(param_2,plVar6);
      break;
    case 5:
      FUN_100505520(param_2,plVar6,*(undefined1 *)(param_1 + 0x2a64));
      goto LAB_100503448;
    case 7:
      FUN_100507590(param_2,plVar6);
      break;
    case 8:
      FUN_100507640(param_2,plVar6);
      FUN_1000153b4(param_1 + 0x2b40,plVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)((long)plVar6 + 0x124);
      *(undefined8 *)(param_1 + 0x2b50) = *(undefined8 *)((long)plVar6 + 0x11c);
      break;
    case 9:
      FUN_10050a250(param_2,plVar6);
      break;
    case 10:
      FUN_10050b0dc(param_2,plVar6);
      break;
    case 0xb:
      FUN_10050b408(param_2,plVar6);
      break;
    case 0xc:
      local_48 = 0x100005;
      local_58 = "code";
      local_50 = 4;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_58);
      *(undefined4 *)(plVar6 + 5) = *puVar7;
      break;
    case 0xd:
      FUN_10050b6a8(param_2,plVar6);
      break;
    case 0xe:
      FUN_10050bc4c(param_2,plVar6);
      break;
    case 0xf:
      FUN_10050bfac(param_2,plVar6);
      break;
    case 0x10:
      FUN_10050c2bc(param_2,plVar6);
      break;
    case 0x11:
      FUN_10050de50(param_2,plVar6);
      break;
    case 0x12:
      FUN_10050e4fc(param_2,plVar6);
      break;
    case 0x13:
      FUN_10050e80c(param_2,plVar6);
      break;
    case 0x14:
      FUN_10050fa10(param_2,plVar6);
      break;
    case 0x15:
      FUN_100510924(param_2,plVar6);
      break;
    case 0x16:
      FUN_100510c38(param_2,plVar6);
      break;
    case 0x17:
      FUN_10051a89c(param_2,plVar6);
      break;
    case 0x18:
      FUN_100510f84(param_2,plVar6);
      break;
    case 0x19:
      FUN_1005111b4(param_2,plVar6);
      break;
    case 0x1a:
      FUN_10051151c(param_2,plVar6);
      break;
    case 0x1b:
      FUN_10051183c(param_2,plVar6);
      break;
    case 0x1c:
      FUN_100511e3c(param_2,plVar6,param_1 + 0x2ad8,param_1 + 0x2af0);
      break;
    case 0x1d:
      FUN_10051022c(param_2,plVar6);
      break;
    case 0x1e:
      FUN_100510420(param_2,plVar6);
      break;
    case 0x1f:
      FUN_100510514(param_2,plVar6);
      break;
    case 0x20:
      FUN_100510608(param_2,plVar6);
      break;
    case 0x21:
      FUN_1005106fc(param_2,plVar6);
      break;
    case 0x22:
      FUN_100511ec4(param_2,plVar6);
      break;
    case 0x23:
      FUN_100512218(param_2,plVar6);
      break;
    case 0x24:
      FUN_1005123d8(param_2,plVar6);
      break;
    case 0x25:
      FUN_100512674(param_2,plVar6);
      break;
    case 0x26:
      FUN_100512910(param_2,plVar6);
      break;
    case 0x27:
      FUN_100512db4(param_2,plVar6);
      break;
    case 0x28:
      FUN_100513564(param_2,plVar6);
      break;
    case 0x29:
      FUN_1005137fc(param_2,plVar6);
      break;
    case 0x2a:
      FUN_1005138f0(param_2,plVar6);
      break;
    case 0x2b:
      FUN_1005139e4(param_2,plVar6);
      break;
    case 0x2c:
      FUN_100513aa0(param_2,plVar6);
      break;
    case 0x2d:
      FUN_100513bd0(param_2,plVar6);
      break;
    case 0x2e:
      FUN_100513d90(param_2,plVar6);
      break;
  
// ...truncated...
```

### `trophy_type`

**Addresses:** `0x10141c1da`

#### `FUN_10050e80c` @ `0x10050e80c`

```c

/* WARNING: Removing unreachable block (ram,0x00010050f720) */
/* WARNING: Removing unreachable block (ram,0x00010050f688) */
/* WARNING: Removing unreachable block (ram,0x00010050f7c0) */

void FUN_10050e80c(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  char *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  char local_111;
  void *local_110 [2];
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  undefined4 local_e0;
  undefined4 local_dc;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  code *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
LAB_10050e88c:
    uVar13 = 0;
  }
  else {
    local_118 = 0x100005;
    local_128 = "code";
    uStack_120 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_128);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050e88c;
    local_118 = 0x100005;
    local_128 = "code";
    uStack_120 = 4;
    puVar12 = (undefined4 *)FUN_1000e87dc(param_1,&local_128);
    uVar13 = *puVar12;
  }
  *(undefined4 *)(param_2 + 0xd8) = uVar13;
  lVar4 = param_2 + 0x98;
  FUN_10015aacc(lVar4,0);
  FUN_10015ab5c(param_2 + 0xa8,0);
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    return;
  }
  local_118 = 0x100005;
  local_128 = "returnValue";
  uStack_120 = 0xb;
  lVar5 = FUN_1000e87dc(param_1,&local_128);
  if (*(int *)(lVar5 + 0x10) != 3) {
    return;
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_1004e313c();
  local_118 = 0x100005;
  local_128 = "returnValue";
  uStack_120 = 0xb;
  plVar6 = (long *)FUN_1000e87dc(param_1,&local_128);
  lVar5 = FUN_1000e86c0(plVar6,"success");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050e9a0:
    bVar3 = false;
  }
  else {
    local_118 = 0x100005;
    local_128 = "success";
    uStack_120 = 7;
    lVar5 = FUN_1000e87dc(plVar6,&local_128);
    if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_10050e9a0;
    local_118 = 0x100005;
    local_128 = "success";
    uStack_120 = 7;
    lVar5 = FUN_1000e87dc(plVar6,&local_128);
    bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0xb8) = bVar3;
  std::string::operator=((string *)(param_2 + 0xc0),(string *)&DAT_101d91198);
  if (*(char *)(param_2 + 0xb8) != '\0') {
    lVar5 = FUN_1000e86c0(plVar6,"members");
    if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) ||
       (lVar5 = FUN_1000e86c0(plVar6,"teamUUID"),
       *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5)) {
      *(undefined4 *)(param_2 + 0xd8) = 0xfffffffa;
      DAT_1018675c8 = 0xfffffffa;
    }
    else {
      lVar5 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ea94:
        pcVar9 = "";
      }
      else {
        local_118 = 0x100005;
        local_128 = "teamUUID";
        uStack_120 = 8;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050ea94;
        local_118 = 0x100005;
        local_128 = "teamUUID";
        uStack_120 = 8;
        pcVar9 = (char *)FUN_1000e87dc(plVar6,&local_128);
        if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
          pcVar9 = *(char **)pcVar9;
        }
      }
      FUN_1000ee4ec(&local_128,pcVar9);
      std::string::operator=((string *)(param_2 + 0x28),(string *)&local_128);
      if (local_111 < '\0') {
        operator_delete(local_128);
      }
      lVar5 = FUN_1000e86c0(plVar6,"name");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050eb0c:
        pcVar9 = "";
      }
      else {
        local_118 = 0x100005;
        local_128 = "name";
        uStack_120 = 4;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050eb0c;
        local_118 = 0x100005;
        local_128 = "name";
        uStack_120 = 4;
        pcVar9 = (char *)FUN_1000e87dc(plVar6,&local_128);
        if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
          pcVar9 = *(char **)pcVar9;
        }
      }
      FUN_1000ee4ec(&local_128,pcVar9);
      std::string::operator=((string *)(param_2 + 0x40),(string *)&local_128);
      if (local_111 < '\0') {
        operator_delete(local_128);
      }
      lVar5 = FUN_1000e86c0(plVar6,"tag");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050eb84:
        pcVar9 = "";
      }
      else {
        local_118 = 0x100005;
        local_128 = "tag";
        uStack_120 = 3;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050eb84;
        local_118 = 0x100005;
        local_128 = "tag";
        uStack_120 = 3;
        pcVar9 = (char *)FUN_1000e87dc(plVar6,&local_128);
        if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
          pcVar9 = *(char **)pcVar9;
        }
      }
      FUN_1000ee4ec(&local_128,pcVar9);
      std::string::operator=((string *)(param_2 + 0x58),(string *)&local_128);
      if (local_111 < '\0') {
        operator_delete(local_128);
      }
      lVar5 = FUN_1000e86c0(plVar6,"numMembers");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ebfc:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "numMembers";
        uStack_120 = 10;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050ebfc;
        local_118 = 0x100005;
        local_128 = "numMembers";
        uStack_120 = 10;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x70) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"maxMembers");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ed08:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "maxMembers";
        uStack_120 = 10;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050ed08;
        local_118 = 0x100005;
        local_128 = "maxMembers";
        uStack_120 = 10;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x74) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"wins");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050ed7c:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "wins";
        uStack_120 = 4;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050ed7c;
        local_118 = 0x100005;
        local_128 = "wins";
        uStack_120 = 4;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x78) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"skillTier");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050edf0:
        uVar13 = 0;
      }
      else {
        local_118 = 0x100005;
        local_128 = "skillTier";
        uStack_120 = 9;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_10050edf0;
        local_118 = 0x100005;
        local_128 = "skillTier";
        uStack_120 = 9;
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar
// ...truncated...
```

##### Caller: `FUN_100503314` @ `0x100503314`

```c

void FUN_100503314(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  char *local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  
  DAT_1018675c8 = 1;
  if ((int)param_2[2] == 0) {
    DAT_1018675c8 = 0xffffffff;
    return;
  }
  if ((*(char *)(param_1 + 0x2c18) != '\0') &&
     (lVar4 = FUN_1000e86c0(param_2,"sessionToken"),
     *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4)) {
    local_48 = 0x100005;
    local_58 = "sessionToken";
    local_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(param_2,&local_58);
    plVar6 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar6 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar6);
    uVar1 = local_50;
    if (-1 < (char)local_41) {
      uVar1 = (ulong)local_41;
    }
    if ((uVar1 != 0) ||
       (iVar2 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1013cda1a),
       iVar2 != 0)) {
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c58));
      *(undefined1 *)(param_1 + 0x2c50) = 1;
      std::string::operator=((string *)(param_1 + 0x2c38),(string *)&local_58);
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c58));
    }
    if ((char)local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  if (DAT_1018675cc == (int)param_3) {
LAB_100503448:
    FUN_100506f44(param_1,param_2);
  }
  else {
    plVar6 = (long *)FUN_1004f1830(param_1 + 0x2c98,param_3);
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*plVar6 + 0x10))();
    switch(uVar3) {
    case 1:
      FUN_1005039ac(param_2,plVar6);
      break;
    case 2:
      FUN_100505210(param_2,plVar6);
      break;
    case 3:
      FUN_1005050c0(param_2,plVar6);
      break;
    case 4:
      FUN_10050539c(param_2,plVar6);
      break;
    case 5:
      FUN_100505520(param_2,plVar6,*(undefined1 *)(param_1 + 0x2a64));
      goto LAB_100503448;
    case 7:
      FUN_100507590(param_2,plVar6);
      break;
    case 8:
      FUN_100507640(param_2,plVar6);
      FUN_1000153b4(param_1 + 0x2b40,plVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)((long)plVar6 + 0x124);
      *(undefined8 *)(param_1 + 0x2b50) = *(undefined8 *)((long)plVar6 + 0x11c);
      break;
    case 9:
      FUN_10050a250(param_2,plVar6);
      break;
    case 10:
      FUN_10050b0dc(param_2,plVar6);
      break;
    case 0xb:
      FUN_10050b408(param_2,plVar6);
      break;
    case 0xc:
      local_48 = 0x100005;
      local_58 = "code";
      local_50 = 4;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_58);
      *(undefined4 *)(plVar6 + 5) = *puVar7;
      break;
    case 0xd:
      FUN_10050b6a8(param_2,plVar6);
      break;
    case 0xe:
      FUN_10050bc4c(param_2,plVar6);
      break;
    case 0xf:
      FUN_10050bfac(param_2,plVar6);
      break;
    case 0x10:
      FUN_10050c2bc(param_2,plVar6);
      break;
    case 0x11:
      FUN_10050de50(param_2,plVar6);
      break;
    case 0x12:
      FUN_10050e4fc(param_2,plVar6);
      break;
    case 0x13:
      FUN_10050e80c(param_2,plVar6);
      break;
    case 0x14:
      FUN_10050fa10(param_2,plVar6);
      break;
    case 0x15:
      FUN_100510924(param_2,plVar6);
      break;
    case 0x16:
      FUN_100510c38(param_2,plVar6);
      break;
    case 0x17:
      FUN_10051a89c(param_2,plVar6);
      break;
    case 0x18:
      FUN_100510f84(param_2,plVar6);
      break;
    case 0x19:
      FUN_1005111b4(param_2,plVar6);
      break;
    case 0x1a:
      FUN_10051151c(param_2,plVar6);
      break;
    case 0x1b:
      FUN_10051183c(param_2,plVar6);
      break;
    case 0x1c:
      FUN_100511e3c(param_2,plVar6,param_1 + 0x2ad8,param_1 + 0x2af0);
      break;
    case 0x1d:
      FUN_10051022c(param_2,plVar6);
      break;
    case 0x1e:
      FUN_100510420(param_2,plVar6);
      break;
    case 0x1f:
      FUN_100510514(param_2,plVar6);
      break;
    case 0x20:
      FUN_100510608(param_2,plVar6);
      break;
    case 0x21:
      FUN_1005106fc(param_2,plVar6);
      break;
    case 0x22:
      FUN_100511ec4(param_2,plVar6);
      break;
    case 0x23:
      FUN_100512218(param_2,plVar6);
      break;
    case 0x24:
      FUN_1005123d8(param_2,plVar6);
      break;
    case 0x25:
      FUN_100512674(param_2,plVar6);
      break;
    case 0x26:
      FUN_100512910(param_2,plVar6);
      break;
    case 0x27:
      FUN_100512db4(param_2,plVar6);
      break;
    case 0x28:
      FUN_100513564(param_2,plVar6);
      break;
    case 0x29:
      FUN_1005137fc(param_2,plVar6);
      break;
    case 0x2a:
      FUN_1005138f0(param_2,plVar6);
      break;
    case 0x2b:
      FUN_1005139e4(param_2,plVar6);
      break;
    case 0x2c:
      FUN_100513aa0(param_2,plVar6);
      break;
    case 0x2d:
      FUN_100513bd0(param_2,plVar6);
      break;
    case 0x2e:
      FUN_100513d90(param_2,plVar6);
      break;
  
// ...truncated...
```

#### `FUN_10050c2bc` @ `0x10050c2bc`

```c

/* WARNING: Removing unreachable block (ram,0x00010050dbc4) */
/* WARNING: Removing unreachable block (ram,0x00010050db2c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc64) */

void FUN_10050c2bc(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined8 uVar15;
  char *local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  char local_229;
  void *local_228 [2];
  char local_211;
  void *local_210 [2];
  char local_1f9;
  undefined4 local_1f8;
  undefined4 local_1f4;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  void *pvStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  char *local_198;
  undefined8 uStack_190;
  long local_188;
  undefined8 local_180;
  void *local_178;
  void *local_170;
  undefined8 uStack_168;
  long local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
LAB_10050c338:
    uVar12 = 0;
  }
  else {
    local_188 = CONCAT44(local_188._4_4_,0x100005);
    local_198 = "code";
    uStack_190 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_198);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c338;
    local_188 = CONCAT44(local_188._4_4_,0x100005);
    local_198 = "code";
    uStack_190 = 4;
    puVar11 = (undefined4 *)FUN_1000e87dc(param_1,&local_198);
    uVar12 = *puVar11;
  }
  *(undefined4 *)(param_2 + 0x238) = uVar12;
  std::string::operator=((string *)(param_2 + 0x220),(string *)&DAT_101d91198);
  FUN_10015a0b0(param_2 + 0x1d8,0);
  FUN_10015a500(param_2 + 0x1e8,0);
  FUN_10015a474(param_2 + 0x1f8,0);
  FUN_10015a3d8(param_2 + 0x208,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_188 = CONCAT44(local_188._4_4_,0x100005);
  local_198 = "returnValue";
  uStack_190 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_198);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_198 = (char *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  FUN_1004e313c(&local_180);
  local_170 = (void *)0x0;
  uStack_168 = 0;
  local_160 = 0;
  local_230 = 0x100005;
  local_240 = "returnValue";
  uStack_238 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_240);
  lVar4 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c48c:
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  else {
    local_230 = 0x100005;
    local_240 = "success";
    uStack_238 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_240);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_10050c48c;
    local_230 = 0x100005;
    local_240 = "success";
    uStack_238 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_240);
    bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    *(bool *)(param_2 + 0x218) = bVar3;
    if (bVar3) {
      lVar4 = FUN_1000e86c0(plVar5,"members");
      if ((*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) ||
         (lVar4 = FUN_1000e86c0(plVar5,"guildUUID"),
         *plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4)) {
        *(undefined4 *)(param_2 + 0x238) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        lVar4 = FUN_1000e86c0(plVar5,"guildUUID");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c634:
          pcVar6 = "";
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildUUID";
          uStack_238 = 9;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050c634;
          local_230 = 0x100005;
          local_240 = "guildUUID";
          uStack_238 = 9;
          pcVar6 = (char *)FUN_1000e87dc(plVar5,&local_240);
          if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
            pcVar6 = *(char **)pcVar6;
          }
        }
        FUN_1000ee4ec(&local_240,pcVar6);
        std::string::operator=((string *)(param_2 + 0x180),(string *)&local_240);
        if (local_229 < '\0') {
          operator_delete(local_240);
        }
        lVar4 = FUN_1000e86c0(plVar5,"guildXp");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c6ac:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildXp";
          uStack_238 = 7;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c6ac;
          local_230 = 0x100005;
          local_240 = "guildXp";
          uStack_238 = 7;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1b4) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"guildXpRequired");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c78c:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildXpRequired";
          uStack_238 = 0xf;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c78c;
          local_230 = 0x100005;
          local_240 = "guildXpRequired";
          uStack_238 = 0xf;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1b8) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"guildXpMin");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c800:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildXpMin";
          uStack_238 = 10;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c800;
          local_230 = 0x100005;
          local_240 = "guildXpMin";
          uStack_238 = 10;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1b0) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"avgSkillTier");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c874:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "avgSkillTier";
          uStack_238 = 0xc;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c874;
          local_230 = 0x100005;
          local_240 = "avgSkillTier";
          uStack_238 = 0xc;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1bc) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"avgKarma");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c8e8:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "avgKarma";
          uStack_23
// ...truncated...
```

#### `FUN_100507640` @ `0x100507640`

```c

/* WARNING: Removing unreachable block (ram,0x000100509be4) */
/* WARNING: Removing unreachable block (ram,0x000100509614) */
/* WARNING: Removing unreachable block (ram,0x0001005090d4) */
/* WARNING: Removing unreachable block (ram,0x00010050954c) */
/* WARNING: Removing unreachable block (ram,0x000100509b4c) */
/* WARNING: Removing unreachable block (ram,0x000100509e58) */
/* WARNING: Removing unreachable block (ram,0x0001005096c0) */

void FUN_100507640(long *param_1,long param_2)

{
  ulong uVar1;
  string *psVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  string *psVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  string *psVar16;
  char *pcVar17;
  undefined4 *puVar18;
  string *psVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  void *local_268;
  ulong local_260;
  byte local_251;
  char *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  void *pvStack_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  long lStack_210;
  void *local_208;
  undefined8 local_200;
  long lStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int local_1bc;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  local_1a8 = 0x100005;
  local_1b8 = "code";
  uStack_1b0 = 4;
  puVar9 = (undefined4 *)FUN_1000e87dc(param_1,&local_1b8);
  *(undefined4 *)(param_2 + 0x240) = *puVar9;
  puVar9 = (undefined4 *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != 0) {
    *puVar9 = 0;
  }
  FUN_100156080(param_2 + 0x58,0);
  FUN_100155f24(param_2 + 0x38,0);
  FUN_100155eac(param_2 + 0x28,0);
  lVar10 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar10) {
LAB_1005078c4:
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  lVar10 = FUN_1000e87dc(param_1,&local_1b8);
  if (*(int *)(lVar10 + 0x10) != 3) goto LAB_1005078c4;
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  plVar11 = (long *)FUN_1000e87dc(param_1,&local_1b8);
  FUN_100168aa8(&local_1b8);
  lVar10 = FUN_1000e86c0(plVar11,"handle");
  if ((((*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) ||
       (lVar10 = FUN_1000e86c0(plVar11,"skillTier"),
       *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
      (lVar10 = FUN_1000e86c0(plVar11,"completed"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
     ((lVar10 = FUN_1000e86c0(plVar11,"wins"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10 ||
      (lVar10 = FUN_1000e86c0(plVar11,"level"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)))) {
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    lVar10 = FUN_1000e86c0(plVar11,"handle");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507860:
      pcVar17 = "";
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_100507860;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      pcVar17 = (char *)FUN_1000e87dc(plVar11,&local_250);
      if (((byte)pcVar17[0x12] >> 6 & 1) == 0) {
        pcVar17 = *(char **)pcVar17;
      }
    }
    FUN_1004e3148(param_2 + 0x80,pcVar17);
    lVar10 = FUN_1000e86c0(plVar11,"completed");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_1005078bc:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_1005078bc;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x120) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"wins");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a1b0:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a1b0;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x124) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"level");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a224:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a224;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x148) = uVar23;
  }
  lVar10 = FUN_1000e86c0(plVar11,"completed_non_tutorial");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507934:
    uVar23 = 1;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507934;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x11c) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"last_login");
  dVar26 = -1.0;
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar10) {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "last_login";
    uStack_248 = 10;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "last_login";
      uStack_248 = 10;
      FUN_1000e87dc(plVar11,&local_250);
      dVar26 = (double)FUN_1000fceec();
    }
  }
  *(long *)(param_2 + 0x100) = (long)dVar26;
  lVar10 = FUN_1000e86c0(plVar11,"wins_aral");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a20:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507a20;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x128) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_blitz");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a94:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_blitz";
    uStack_248 = 10;
    lVar10 = FUN
// ...truncated...
```

## 2. Profile Ranked Tabs & Skill Tier Display

### `MENU_PROFILE_TAB_RANKED_5V5`

**Addresses:** `0x1013e5c87`

#### `FUN_10025c044` @ `0x10025c044`

```c

long * FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_2f0;
  long *plStack_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  void *pvStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 auStack_270 [296];
  undefined8 local_148;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  local_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&local_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  local_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  local_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8._0_4_ = DAT_101dbd458;
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101dbd484);
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x21804) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21804) = *(uint *)((long)param_3 + 0x21804) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_3 + 0x42f9) != 0.8) || (*(float *)((long)param_3 + 0x217cc) != 0.8)) {
    param_3[0x42f9] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar10);
  }
  uVar21 = FUN_10016aa7c();
  FUN_1006513c0(plVar10,uVar21);
  FUN_1002eb970(plVar8,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_exit_app");
  FUN_1002ece5c(plVar8,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  uVar22 = *(uint *)((long)param_3 + 0x20b04);
  if ((uVar22 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20b04) = uVar22 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  FUN_1005300a8(0,plVar8);
  uVar23 = FUN_100652e60(param_3 + 0x4288);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar23);
  FUN_10064e48c(plVar8,&local_2f0);
  uVar23 = DAT_101d91884;
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101d91884);
  local_2f0 = (undefined **)thunk_FUN_10025e0c4;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x4151,&local_2f0);
  iVar19 = FUN_100131228();
  uVar22 = 4;
  if (iVar19 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_3 + 0x21a1c) = *(uint *)((long)param_3 + 0x21a1c) & 0xfffffffb | uVar22;
  FUN_1002eb970(plVar12,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_video_capture");
  FUN_1002ece5c(plVar12,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  if ((*(uint *)((long)param_3 + 0x21b74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21b74) = *(uint *)((long)param_3 + 0x21b74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar12);
  }
  FUN_1005300a8(0,plVar12);
  uVar24 = FUN_100652e60(param_3 + 0x4496);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_10064e48c(plVar12,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar23);
  local_2f0 = (undefined **)thunk_FUN_10025e16c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x435f,&local_2f0);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x22744) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x22744) = *(uint *)((long)param_3 + 0x22744) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar13);
  }
  iVar19 = FUN_10013128c();
  pcVar17 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if (iVar19 == 0) {
    pcVar17 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar21 = FUN_1004e0150(pcVar17,0);
  FUN_1006513c0(plVar13,uVar21);
  if ((*(float *)(param_3 + 0x44e1) != 0.8) || (*(float *)((long)param_3 + 0x2270c) != 0.8)) {
    param_3[0x4
// ...truncated...
```

##### Caller: `thunk_FUN_10025c044` @ `0x10025cfb4`

```c

long * thunk_FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  void *pvStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [296];
  undefined8 uStack_148;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&uStack_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  uStack_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  uStack_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8._0_4_ = DAT_101dbd458;
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,DAT_101dbd484);
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4cc
// ...truncated...
```

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

##### Caller: `FUN_100221f98` @ `0x100221f98`

```c

void FUN_100221f98(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x28848);
  uVar2 = FUN_100221ff0();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}


```

### `MENU_PROFILE_TAB_RANKED_3V3`

**Addresses:** `0x1013e5ca3`

#### `FUN_10025c044` @ `0x10025c044`

```c

long * FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_2f0;
  long *plStack_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  void *pvStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 auStack_270 [296];
  undefined8 local_148;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  local_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&local_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  local_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  local_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8._0_4_ = DAT_101dbd458;
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101dbd484);
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x21804) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21804) = *(uint *)((long)param_3 + 0x21804) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_3 + 0x42f9) != 0.8) || (*(float *)((long)param_3 + 0x217cc) != 0.8)) {
    param_3[0x42f9] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar10);
  }
  uVar21 = FUN_10016aa7c();
  FUN_1006513c0(plVar10,uVar21);
  FUN_1002eb970(plVar8,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_exit_app");
  FUN_1002ece5c(plVar8,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  uVar22 = *(uint *)((long)param_3 + 0x20b04);
  if ((uVar22 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20b04) = uVar22 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  FUN_1005300a8(0,plVar8);
  uVar23 = FUN_100652e60(param_3 + 0x4288);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar23);
  FUN_10064e48c(plVar8,&local_2f0);
  uVar23 = DAT_101d91884;
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101d91884);
  local_2f0 = (undefined **)thunk_FUN_10025e0c4;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x4151,&local_2f0);
  iVar19 = FUN_100131228();
  uVar22 = 4;
  if (iVar19 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_3 + 0x21a1c) = *(uint *)((long)param_3 + 0x21a1c) & 0xfffffffb | uVar22;
  FUN_1002eb970(plVar12,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_video_capture");
  FUN_1002ece5c(plVar12,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  if ((*(uint *)((long)param_3 + 0x21b74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21b74) = *(uint *)((long)param_3 + 0x21b74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar12);
  }
  FUN_1005300a8(0,plVar12);
  uVar24 = FUN_100652e60(param_3 + 0x4496);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_10064e48c(plVar12,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar23);
  local_2f0 = (undefined **)thunk_FUN_10025e16c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x435f,&local_2f0);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x22744) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x22744) = *(uint *)((long)param_3 + 0x22744) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar13);
  }
  iVar19 = FUN_10013128c();
  pcVar17 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if (iVar19 == 0) {
    pcVar17 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar21 = FUN_1004e0150(pcVar17,0);
  FUN_1006513c0(plVar13,uVar21);
  if ((*(float *)(param_3 + 0x44e1) != 0.8) || (*(float *)((long)param_3 + 0x2270c) != 0.8)) {
    param_3[0x4
// ...truncated...
```

##### Caller: `thunk_FUN_10025c044` @ `0x10025cfb4`

```c

long * thunk_FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  void *pvStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [296];
  undefined8 uStack_148;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&uStack_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  uStack_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  uStack_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8._0_4_ = DAT_101dbd458;
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,DAT_101dbd484);
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4cc
// ...truncated...
```

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

##### Caller: `FUN_100221f98` @ `0x100221f98`

```c

void FUN_100221f98(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x28848);
  uVar2 = FUN_100221ff0();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}


```

### `MENU_PROFILE_TAB_OVERVIEW`

**Addresses:** `0x1013e7634`

#### `FUN_10023b4b8` @ `0x10023b4b8`

```c

long * FUN_10023b4b8(long *param_1)

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
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar12 = FUN_1001e6910();
  FUN_10014f4a0(lVar12 + 0x2c30);
  *param_1 = (long)&PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = (long)&PTR_FUN_101477e00;
  plVar2 = param_1 + 0x589;
  FUN_1006421a8();
  param_1[0x589] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x59a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b8;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_10053077c(plVar5,0);
  plVar6 = param_1 + 0x679;
  thunk_FUN_1001c81d8();
  plVar7 = param_1 + 0x7d3;
  thunk_FUN_100232f00(plVar7);
  plVar8 = param_1 + 0x723b;
  thunk_FUN_10022d51c(plVar8);
  thunk_FUN_100238378(param_1 + 0x92f5);
  plVar9 = param_1 + 0xb623;
  thunk_FUN_10025fd1c(plVar9);
  plVar10 = param_1 + 0xb933;
  thunk_FUN_1002268e4(plVar10);
  param_1[0xc8c6] = 0;
  param_1[0xc8c3] = 0;
  param_1[0xc8c2] = 0;
  param_1[0xc8c5] = 0;
  param_1[0xc8c4] = 0;
  param_1[0xc8bf] = 0;
  param_1[0xc8be] = 0;
  param_1[0xc8c1] = 0;
  param_1[0xc8c0] = 0;
  param_1[0xc8bb] = 0;
  param_1[0xc8ba] = 0;
  param_1[0xc8bd] = 0;
  param_1[0xc8bc] = 0;
  *(undefined2 *)(param_1 + 0xc8c7) = 1;
  plVar1 = param_1 + 0x2e;
  *(undefined1 *)((long)param_1 + 0x6463a) = 1;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar2,param_1 + 0x92f5,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x2d54);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2d54) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100530adc(plVar5,0,1);
  param_1[0x676] = (long)plVar7;
  param_1[0x677] = (long)plVar8;
  param_1[0x678] = (long)plVar9;
  local_a0 = 0;
  uStack_98 = 0;
  uVar13 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
  FUN_10010b098(&local_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
  FUN_10010b098(&local_a0,uVar13);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar6,&local_a0);
  FUN_1001c9460(0xcd,plVar6);
  local_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_90 = FUN_10023bac0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x67a,&local_90);
  FUN_1001c9508(plVar6,0,"GUILD.CHESTS.*");
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,plVar7,1,4,0);
  (**(code **)(*param_1 + 0x188))(param_1,plVar10,plVar2,0,1);
  local_68 = DAT_101d91884;
  local_90 = FUN_10023baec;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb94b,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  local_90 = FUN_10023bb14;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb934,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  local_90 = thunk_FUN_10023ccdc;
  plVar1 = param_1 + 0x7d4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  local_90 = thunk_FUN_10023cd58;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  local_90 = thunk_FUN_10023cdd4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  local_90 = thunk_FUN_10023ce64;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  local_90 = FUN_10023bb80;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  local_90 = thunk_FUN_10023cef4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  local_90 = thunk_FUN_10023cdd4;
  plVar1 = param_1 + 0x723c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  local_90 = thunk_FUN_10023ce64;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TYPE");
  local_90 = FUN_10023bb88;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_10023c094,0);
  FUN_10010b1a8(&local_a0,1);
  return param_1;
}


```

##### Caller: `thunk_FUN_10023b4b8` @ `0x10023bbe0`

```c

long * thunk_FUN_10023b4b8(long *param_1)

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
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar12 = FUN_1001e6910();
  FUN_10014f4a0(lVar12 + 0x2c30);
  *param_1 = (long)&PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = (long)&PTR_FUN_101477e00;
  plVar2 = param_1 + 0x589;
  FUN_1006421a8();
  param_1[0x589] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x59a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b8;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_10053077c(plVar5,0);
  plVar6 = param_1 + 0x679;
  thunk_FUN_1001c81d8();
  plVar7 = param_1 + 0x7d3;
  thunk_FUN_100232f00(plVar7);
  plVar8 = param_1 + 0x723b;
  thunk_FUN_10022d51c(plVar8);
  thunk_FUN_100238378(param_1 + 0x92f5);
  plVar9 = param_1 + 0xb623;
  thunk_FUN_10025fd1c(plVar9);
  plVar10 = param_1 + 0xb933;
  thunk_FUN_1002268e4(plVar10);
  param_1[0xc8c6] = 0;
  param_1[0xc8c3] = 0;
  param_1[0xc8c2] = 0;
  param_1[0xc8c5] = 0;
  param_1[0xc8c4] = 0;
  param_1[0xc8bf] = 0;
  param_1[0xc8be] = 0;
  param_1[0xc8c1] = 0;
  param_1[0xc8c0] = 0;
  param_1[0xc8bb] = 0;
  param_1[0xc8ba] = 0;
  param_1[0xc8bd] = 0;
  param_1[0xc8bc] = 0;
  *(undefined2 *)(param_1 + 0xc8c7) = 1;
  plVar1 = param_1 + 0x2e;
  *(undefined1 *)((long)param_1 + 0x6463a) = 1;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar2,param_1 + 0x92f5,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x2d54);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2d54) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100530adc(plVar5,0,1);
  param_1[0x676] = (long)plVar7;
  param_1[0x677] = (long)plVar8;
  param_1[0x678] = (long)plVar9;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar13 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
  FUN_10010b098(&uStack_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
  FUN_10010b098(&uStack_a0,uVar13);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar6,&uStack_a0);
  FUN_1001c9460(0xcd,plVar6);
  uStack_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_90 = FUN_10023bac0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x67a,&pcStack_90);
  FUN_1001c9508(plVar6,0,"GUILD.CHESTS.*");
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,plVar7,1,4,0);
  (**(code **)(*param_1 + 0x188))(param_1,plVar10,plVar2,0,1);
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_10023baec;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb94b,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  pcStack_90 = FUN_10023bb14;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb934,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  pcStack_90 = thunk_FUN_10023ccdc;
  plVar1 = param_1 + 0x7d4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  pcStack_90 = thunk_FUN_10023cd58;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  pcStack_90 = thunk_FUN_10023cdd4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  pcStack_90 = thunk_FUN_10023ce64;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  pcStack_90 = FUN_10023bb80;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  pcStack_90 = thunk_FUN_10023cef4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_E
// ...truncated...
```

#### `FUN_10025c044` @ `0x10025c044`

```c

long * FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_2f0;
  long *plStack_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  void *pvStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 auStack_270 [296];
  undefined8 local_148;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  local_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&local_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  local_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  local_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8._0_4_ = DAT_101dbd458;
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101dbd484);
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x21804) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21804) = *(uint *)((long)param_3 + 0x21804) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_3 + 0x42f9) != 0.8) || (*(float *)((long)param_3 + 0x217cc) != 0.8)) {
    param_3[0x42f9] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar10);
  }
  uVar21 = FUN_10016aa7c();
  FUN_1006513c0(plVar10,uVar21);
  FUN_1002eb970(plVar8,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_exit_app");
  FUN_1002ece5c(plVar8,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  uVar22 = *(uint *)((long)param_3 + 0x20b04);
  if ((uVar22 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20b04) = uVar22 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  FUN_1005300a8(0,plVar8);
  uVar23 = FUN_100652e60(param_3 + 0x4288);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar23);
  FUN_10064e48c(plVar8,&local_2f0);
  uVar23 = DAT_101d91884;
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101d91884);
  local_2f0 = (undefined **)thunk_FUN_10025e0c4;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x4151,&local_2f0);
  iVar19 = FUN_100131228();
  uVar22 = 4;
  if (iVar19 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_3 + 0x21a1c) = *(uint *)((long)param_3 + 0x21a1c) & 0xfffffffb | uVar22;
  FUN_1002eb970(plVar12,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_video_capture");
  FUN_1002ece5c(plVar12,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  if ((*(uint *)((long)param_3 + 0x21b74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21b74) = *(uint *)((long)param_3 + 0x21b74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar12);
  }
  FUN_1005300a8(0,plVar12);
  uVar24 = FUN_100652e60(param_3 + 0x4496);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_10064e48c(plVar12,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar23);
  local_2f0 = (undefined **)thunk_FUN_10025e16c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x435f,&local_2f0);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x22744) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x22744) = *(uint *)((long)param_3 + 0x22744) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar13);
  }
  iVar19 = FUN_10013128c();
  pcVar17 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if (iVar19 == 0) {
    pcVar17 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar21 = FUN_1004e0150(pcVar17,0);
  FUN_1006513c0(plVar13,uVar21);
  if ((*(float *)(param_3 + 0x44e1) != 0.8) || (*(float *)((long)param_3 + 0x2270c) != 0.8)) {
    param_3[0x4
// ...truncated...
```

##### Caller: `thunk_FUN_10025c044` @ `0x10025cfb4`

```c

long * thunk_FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

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
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  void *pvStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [296];
  undefined8 uStack_148;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&uStack_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  uStack_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  uStack_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8._0_4_ = DAT_101dbd458;
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,DAT_101dbd484);
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4cc
// ...truncated...
```

#### `FUN_10023c69c` @ `0x10023c69c`

```c

void FUN_10023c69c(long param_1,long param_2)

{
  string *psVar1;
  string *psVar2;
  size_t sVar3;
  size_t sVar4;
  string sVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  byte *pbVar13;
  byte *pbVar14;
  string *psVar15;
  long lVar16;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  psVar1 = (string *)(param_2 + 0x180);
  bVar6 = *(byte *)(param_2 + 0x197);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    psVar2 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar2 = psVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar9 = _memcmp(psVar2,pbVar14,sVar3), iVar9 != 0)) goto LAB_10023c75c;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar14 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar13 = (byte *)(param_2 + 0x181);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_10023c7a4;
          bVar6 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar6 == *pbVar14);
      }
      goto LAB_10023c75c;
    }
  }
  else {
LAB_10023c75c:
    FUN_1002372c8(param_1 + 0x3e98,param_2,*(byte *)(param_1 + 0x2c2c) >> 1 & 1);
    FUN_10022f998(param_1 + 0x391d8,param_2);
    FUN_100238d00(param_1 + 0x497a8,param_2);
  }
LAB_10023c7a4:
  if (*(char *)(param_2 + 0x1d0) == '\0') {
    return;
  }
  psVar2 = (string *)(param_1 + 0x645e8);
  bVar6 = *(byte *)(param_1 + 0x645ff);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0x645f0);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  bVar7 = *(byte *)(param_2 + 0x197);
  sVar4 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar3 == sVar4) {
    psVar12 = *(string **)psVar2;
    if (-1 < (char)bVar6) {
      psVar12 = psVar2;
    }
    psVar15 = *(string **)psVar1;
    if (-1 < (char)bVar7) {
      psVar15 = psVar1;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar9 = _memcmp(psVar12,psVar15,sVar3), iVar9 != 0)) goto LAB_10023c854;
    }
    else if (sVar3 != 0) {
      if ((uint)(byte)*psVar15 == ((uint)*(string **)psVar2 & 0xff)) {
        psVar12 = (string *)(param_1 + 0x645e9);
        do {
          uVar11 = uVar11 - 1;
          psVar15 = psVar15 + 1;
          if (uVar11 == 0) goto LAB_10023c874;
          sVar5 = *psVar12;
          psVar12 = psVar12 + 1;
        } while (sVar5 == *psVar15);
      }
      goto LAB_10023c854;
    }
  }
  else {
LAB_10023c854:
    std::string::operator=(psVar2,psVar1);
    FUN_1001c9348(param_1 + 0x33c8,0,1);
  }
LAB_10023c874:
  FUN_10015a3d8(param_1 + 0x645d0,0);
  if (*(int *)(param_2 + 0x208) != 0) {
    lVar16 = 0;
    uVar11 = 0;
    do {
      FUN_10023ca94(param_1 + 0x645d0,*(long *)(param_2 + 0x210) + lVar16);
      uVar11 = uVar11 + 1;
      lVar16 = lVar16 + 0x50;
    } while (uVar11 < *(uint *)(param_2 + 0x208));
  }
  *(undefined1 *)(param_1 + 0x64639) = 1;
  uVar11 = FUN_10015d3f8();
  if ((uVar11 & 1) != 0) {
    lVar16 = FUN_10015d3ec();
    bVar6 = *(byte *)(param_1 + 0x645ff);
    uVar11 = (ulong)bVar6;
    bVar7 = *(byte *)(lVar16 + 0x548f);
    sVar3 = *(size_t *)(param_1 + 0x645f0);
    if (-1 < (char)bVar6) {
      sVar3 = uVar11;
    }
    sVar4 = *(size_t *)(lVar16 + 0x5480);
    if (-1 < (char)bVar7) {
      sVar4 = (ulong)bVar7;
    }
    if (sVar3 == sVar4) {
      psVar1 = *(string **)psVar2;
      if (-1 < (char)bVar6) {
        psVar1 = psVar2;
      }
      pbVar14 = *(byte **)(lVar16 + 0x5478);
      if (-1 < (char)bVar7) {
        pbVar14 = (byte *)(lVar16 + 0x5478);
      }
      if ((char)bVar6 < '\0') {
        if (sVar3 != 0) {
          iVar9 = _memcmp(psVar1,pbVar14,sVar3);
          bVar8 = iVar9 == 0;
          goto LAB_10023c97c;
        }
      }
      else if (sVar3 != 0) {
        if ((uint)*pbVar14 == ((uint)*(string **)psVar2 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x645e9);
          do {
            uVar11 = uVar11 - 1;
            pbVar14 = pbVar14 + 1;
            bVar8 = uVar11 == 0;
            if (uVar11 == 0) break;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 == *pbVar14);
          goto LAB_10023c97c;
        }
        goto LAB_10023c978;
      }
      bVar8 = true;
      goto LAB_10023c97c;
    }
  }
LAB_10023c978:
  bVar8 = false;
LAB_10023c97c:
  if ((bool)*(char *)(param_1 + 0x64638) != bVar8) {
    *(bool *)(param_1 + 0x64638) = bVar8;
    FUN_100237f94(param_1 + 0x3e98);
    local_50 = 0;
    uStack_48 = 0;
    uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
    FUN_10010b098(&local_50,uVar10);
    uVar10 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
    FUN_10010b098(&local_50,uVar10);
    uVar10 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
    FUN_10010b098(&local_50,uVar10);
    FUN_1001c88a4(0x42800000,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,param_1 + 0x33c8,&local_50)
    ;
    if (*(char *)(param_1 + 0x64638) == '\0') {
      local_54 = 0xff5262cc;
    }
    else {
      local_54 = 0xffffba8c;
    }
    FUN_100652dd4(param_1 + 0x2cd0,&local_54,2);
    FUN_10023c464(param_1);
    FUN_10010b1a8(&local_50,1);
  }
  return;
}


```

##### Caller: `FUN_10021ab74` @ `0x10021ab74`

```c

void FUN_10021ab74(long param_1)

{
  *(uint *)(param_1 + 0x1d8c) = *(uint *)(param_1 + 0x1d8c) | 4;
  FUN_10023c69c(param_1 + 0x1d08);
  *(uint *)(param_1 + 0x663cc) = *(uint *)(param_1 + 0x663cc) & 0xfffffffb;
  return;
}


```

##### Caller: `FUN_10021abbc` @ `0x10021abbc`

```c

void FUN_10021abbc(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 4;
  FUN_10023c69c(param_1 + 0x18);
  *(uint *)(param_1 + 0x646dc) = *(uint *)(param_1 + 0x646dc) & 0xfffffffb;
  return;
}


```

#### `FUN_100264e14` @ `0x100264e14`

```c

undefined8 * FUN_100264e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar8 = FUN_1001e6910();
  FUN_10014f4a0(lVar8 + 0x2c30);
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  puVar1 = param_1 + 0x589;
  thunk_FUN_100652c08(puVar1);
  puVar2 = param_1 + 0x5a7;
  FUN_10064e264(puVar2);
  puVar3 = param_1 + 0x5be;
  FUN_10053077c(puVar3,0);
  param_1[0x667] = 0;
  puVar4 = param_1 + 0x668;
  thunk_FUN_1001c81d8(puVar4);
  puVar5 = param_1 + 0x7c2;
  thunk_FUN_100260edc(puVar5);
  puVar6 = param_1 + 0x2ecf;
  thunk_FUN_10025fd1c(puVar6);
  param_1[0x31e3] = 0;
  param_1[0x31e0] = 0;
  param_1[0x31df] = 0;
  param_1[0x31e2] = 0;
  param_1[0x31e1] = 0;
  *(undefined2 *)(param_1 + 0x31e4) = 1;
  *(undefined1 *)((long)param_1 + 0x18f22) = 1;
  FUN_100642bd8(param_1 + 0x2e,puVar1,1);
  FUN_100642bd8(param_1 + 0x2e,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_1005308f8(puVar3,puVar5,1);
  FUN_1005308f8(puVar3,puVar6,1);
  FUN_1005308f8(puVar3,puVar4,1);
  FUN_100652cac(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x2ccc);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ccc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100530adc(puVar3,0,1);
  param_1[0x665] = puVar5;
  param_1[0x666] = puVar6;
  local_90 = 0;
  uStack_88 = 0;
  uVar9 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_90,uVar9);
  uVar9 = FUN_1004e0150("MENU_TEAM_TAB_TROPHIES",0);
  FUN_10010b098(&local_90,uVar9);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,puVar4,&local_90);
  FUN_1001c9460(0xcd,puVar4);
  local_58 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_80 = FUN_1002650d0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  puStack_78 = param_1;
  FUN_10001554c(param_1 + 0x669,&local_80);
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,puVar5,1,4,0);
  FUN_10010b1a8(&local_90,1);
  return param_1;
}


```

##### Caller: `thunk_FUN_100264e14` @ `0x1002650d8`

```c

undefined8 * thunk_FUN_100264e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar8 = FUN_1001e6910();
  FUN_10014f4a0(lVar8 + 0x2c30);
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  puVar1 = param_1 + 0x589;
  thunk_FUN_100652c08(puVar1);
  puVar2 = param_1 + 0x5a7;
  FUN_10064e264(puVar2);
  puVar3 = param_1 + 0x5be;
  FUN_10053077c(puVar3,0);
  param_1[0x667] = 0;
  puVar4 = param_1 + 0x668;
  thunk_FUN_1001c81d8(puVar4);
  puVar5 = param_1 + 0x7c2;
  thunk_FUN_100260edc(puVar5);
  puVar6 = param_1 + 0x2ecf;
  thunk_FUN_10025fd1c(puVar6);
  param_1[0x31e3] = 0;
  param_1[0x31e0] = 0;
  param_1[0x31df] = 0;
  param_1[0x31e2] = 0;
  param_1[0x31e1] = 0;
  *(undefined2 *)(param_1 + 0x31e4) = 1;
  *(undefined1 *)((long)param_1 + 0x18f22) = 1;
  FUN_100642bd8(param_1 + 0x2e,puVar1,1);
  FUN_100642bd8(param_1 + 0x2e,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_1005308f8(puVar3,puVar5,1);
  FUN_1005308f8(puVar3,puVar6,1);
  FUN_1005308f8(puVar3,puVar4,1);
  FUN_100652cac(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x2ccc);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ccc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100530adc(puVar3,0,1);
  param_1[0x665] = puVar5;
  param_1[0x666] = puVar6;
  uStack_90 = 0;
  uStack_88 = 0;
  uVar9 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_90,uVar9);
  uVar9 = FUN_1004e0150("MENU_TEAM_TAB_TROPHIES",0);
  FUN_10010b098(&uStack_90,uVar9);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,puVar4,&uStack_90);
  FUN_1001c9460(0xcd,puVar4);
  uStack_58 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_80 = FUN_1002650d0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  puStack_78 = param_1;
  FUN_10001554c(param_1 + 0x669,&pcStack_80);
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,puVar5,1,4,0);
  FUN_10010b1a8(&uStack_90,1);
  return param_1;
}


```

### `PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_ACTIVE`

**Addresses:** `0x1013e8fba`

#### `FUN_10025b5d0` @ `0x10025b5d0`

```c

void FUN_10025b5d0(long param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_38;
  
  lVar4 = *(long *)(param_1 + 0x4c40);
  if (lVar4 < 1) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x49b4);
  lVar2 = FUN_1004f1a74(0);
  uVar5 = lVar4 - lVar2;
  local_38 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  FUN_1001cd374(param_1 + 0x4ae8,&local_38);
  if ((*(long *)(param_1 + 0x4c40) < 1) || (0 < (long)uVar5)) {
    if (0x545ff < (long)uVar5) {
      FUN_1001c6dc8(param_1 + 0xde0,0);
      *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) & 0xfffffffb;
      return;
    }
    *puVar1 = *puVar1 | 4;
    *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) | 4;
    uVar3 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_WARNING",0);
    FUN_1006513c0(param_1 + 0x4800,uVar3);
    uVar3 = 0;
  }
  else {
    *puVar1 = *puVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x3f8c) = *(uint *)(param_1 + 0x3f8c) | 4;
    uVar3 = FUN_1004e0150("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_ACTIVE",0);
    FUN_1006513c0(param_1 + 0x4800,uVar3);
    if (*(char *)(param_1 + 0x2d5d) != '\0') goto LAB_10025b6f4;
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    uVar3 = 1;
  }
  FUN_1001c6dc8(param_1 + 0xde0,uVar3);
LAB_10025b6f4:
  FUN_10025baf0(param_1);
  return;
}


```

##### Caller: `FUN_10025b58c` @ `0x10025b58c`

```c

void FUN_10025b58c(long param_1)

{
  if (0 < *(long *)(param_1 + 0x4c40)) {
    FUN_1001cd27c(param_1 + 0x4ae8);
    FUN_10025b5d0(param_1);
    return;
  }
  return;
}


```

### `PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION`

**Addresses:** `0x1013e8f1a`

#### `FUN_10025a800` @ `0x10025a800`

```c

code * FUN_10025a800(code *param_1,code param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined4 uVar24;
  code *pcVar25;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar20 = (undefined8 *)FUN_100269da8();
  *puVar20 = &PTR_thunk_FUN_10025b12c_10147ac80;
  *(undefined4 *)((long)puVar20 + 0xc4) = 0;
  puVar20 = puVar20 + 0x19;
  thunk_FUN_100652c08();
  thunk_FUN_1001c73d0();
  pcVar1 = param_1 + 0xd28;
  FUN_10064e264();
  thunk_FUN_1001c6070();
  pcVar2 = param_1 + 0x2d60;
  thunk_FUN_1006543ec(pcVar2);
  pcVar3 = param_1 + 0x2f00;
  FUN_10053077c(pcVar3,0);
  pcVar25 = param_1 + 0x3438;
  FUN_1006421a8(pcVar25);
  *(undefined ***)(param_1 + 0x3438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x34c0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar4 = param_1 + 0x3548;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x3548) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar5 = param_1 + 0x35d0;
  thunk_FUN_100183990(pcVar5,0);
  pcVar6 = param_1 + 0x3bc0;
  thunk_FUN_100650e64();
  pcVar7 = param_1 + 0x3cf0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_1 + 0x3e20,0);
  pcVar8 = param_1 + 0x3f08;
  FUN_1006421a8(pcVar8);
  *(undefined ***)(param_1 + 0x3f08) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar9 = param_1 + 0x3f90;
  thunk_FUN_100652c08();
  pcVar10 = param_1 + 0x4080;
  FUN_10064fd54(pcVar10,0);
  *(undefined ***)(param_1 + 0x4080) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar11 = param_1 + 0x4148;
  thunk_FUN_100183990(pcVar11,0);
  pcVar12 = param_1 + 0x4738;
  FUN_10064fd54(pcVar12,1);
  *(undefined ***)(param_1 + 0x4738) = &PTR_thunk_FUN_10064e2bc_101451a40;
  pcVar13 = param_1 + 0x4800;
  thunk_FUN_100650e64();
  pcVar14 = param_1 + 0x4930;
  FUN_10064fd54(pcVar14,0);
  *(undefined ***)(param_1 + 0x4930) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar15 = param_1 + 0x49f8;
  thunk_FUN_100652c08();
  pcVar16 = param_1 + 0x4ae8;
  thunk_FUN_1001cd1dc(pcVar16);
  *(undefined4 *)(param_1 + 0x4c48) = 0;
  *(long *)(param_1 + 0x4c40) = 0;
  param_1[0x4c4c] = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar20,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  FUN_100642bd8(pcVar2,pcVar3,1);
  FUN_1005308f8(pcVar3,pcVar25,1);
  FUN_100642bd8(pcVar25,param_1 + 0x34c0,1);
  FUN_100642bd8(param_1 + 0x34c0,param_1 + 0x1b8,1);
  FUN_100642bd8(param_1 + 0x1b8,pcVar1,1);
  pcVar23 = pcVar7;
  if (((byte)param_2 & 1) == 0) {
    FUN_100642bd8(pcVar25,pcVar4,1);
    FUN_100642bd8(pcVar4,param_1 + 0xde0,1);
    FUN_100642bd8(pcVar4,pcVar5,1);
    pcVar23 = pcVar6;
    pcVar25 = pcVar4;
  }
  FUN_100642bd8(pcVar25,pcVar23,1);
  FUN_1005308f8(pcVar3,pcVar8,1);
  FUN_100642bd8(pcVar8,pcVar9,1);
  FUN_100642bd8(pcVar8,pcVar10,1);
  FUN_100642bd8(pcVar10,pcVar11,1);
  FUN_100642bd8(pcVar10,pcVar12,1);
  FUN_100642bd8(pcVar12,pcVar13,1);
  FUN_100642bd8(pcVar12,pcVar14,1);
  FUN_100642bd8(pcVar14,pcVar15,1);
  FUN_100642bd8(pcVar14,pcVar16,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x3e20,1);
  iVar19 = FUN_100126c88();
  FUN_100652cac(puVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(puVar20,&DAT_10115a164,2);
  uVar18 = *(uint *)(param_1 + 0x14c);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x14c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar20);
  }
  param_1[0x1a0] = (code)((byte)param_1[0x1a0] | 2);
  FUN_100654488(pcVar2,1);
  FUN_100530adc(pcVar3,0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    *(uint *)(param_1 + 0xdac) = *(uint *)(param_1 + 0xdac) | 0x10;
    if ((*(float *)(param_1 + 0xd78) != 0.5) || (*(float *)(param_1 + 0xd7c) != 0.6)) {
      *(long *)(param_1 + 0xd78) = 0x3f19999a3f000000;
      FUN_1000200a0(pcVar1);
    }
    FUN_10064e47c(0x447a0000,0x44480000,pcVar1);
    local_80 = DAT_101dbd460;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&local_a8);
    local_80 = DAT_101dbd48c;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&local_a8);
  }
  FUN_1001c6454(param_1 + 0xde0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    FUN_100652cdc(param_1 + 0x3aa0,"circle_button_question");
    uVar18 = *(uint *)(param_1 + 0x3654);
    if ((uVar18 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x3654) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
      FUN_1000200a0(pcVar5);
    }
    FUN_1001b495c(0xbf800000,pcVar5);
    local_80 = DAT_101d91884;
    local_a8 = FUN_10025b11c;
    local_90 = (code *)0x0;
    uStack_88 = 0;
    local_98 = (code *)0x0;
    local_a0 = param_1;
    FUN_10001554c(param_1 + 0x35d8,&local_a8);
    FUN_1001b4964(pcVar5,1);
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
    }
    local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffa0a0a0);
    FUN_100651594(pcVar6,*ppuVar17,&local_a8);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
    thunk_FUN_1004e439c(&local_a8,uVar21);
    FUN_1006513c0(pcVar6,&local_a8);
    if (local_a0 != (code *)0x0) {
      operator_delete__(local_a0);
    }
  }
  else {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar19 == 0) {
      ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(pcVar7,*ppuVar17,&DAT_10115a168);
    uVar18 = *(uint *)(param_1 + 0x3d74);
    if ((uVar18 & 0x7f80) != 0x3300) {
      *(uint *)(param_1 + 0x3d74) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
      FUN_1000200a0(pcVar7);
    }
    FUN_100651700(pcVar7,3);
    uVar21 = FUN_1004e0150("PLAYER_PROFILE_TROPHY_EXPLANATION",0);
    FUN_1006513c0(pcVar7,uVar21);
  }
  FUN_100652cac(pcVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar18 = *(uint *)(param_1 + 0x4014);
  if ((uVar18 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x4014) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
    FUN_1000200a0(pcVar9);
  }
  FUN_100652cdc(param_1 + 0x4618,"circle_button_question");
  uVar18 = *(uint *)(param_1 + 0x41cc);
  if ((uVar18 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x41cc) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5f80;
    FUN_1000200a0(pcVar11);
  }
  FUN_1001b495c(0xbf800000,pcVar11);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_10025bee4;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (code *)0x0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x4150,&local_a8);
  FUN_1001b4964(pcVar11,1);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar19 == 0) {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  uVar24 = 0x44160000;
  if (iVar19 == 0) {
    uVar24 = 0x43e10000;
  }
  FUN_100651038(pcVar13,*ppuVar17);
  FUN_100651708(uVar24,pcVar13,1);
  uVar18 = *(uint *)(param_1 + 0x4884);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4884) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar13);
  }
  FUN_100652cac(pcVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_clock");
  uVar18 = *(uint *)(param_1 + 0x4a7c);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4a7c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(pcVar15);
  }
  if ((*(float *)(param_1 + 0x4a48) != 0.5) || (*(float *)(param_1 + 0x4a4c) != 0.5)) {
    *(undefine
// ...truncated...
```

##### Caller: `thunk_FUN_10025a800` @ `0x10025b128`

```c

code * thunk_FUN_10025a800(code *param_1,code param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  undefined4 uVar24;
  code *pcVar25;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar20 = (undefined8 *)FUN_100269da8();
  *puVar20 = &PTR_thunk_FUN_10025b12c_10147ac80;
  *(undefined4 *)((long)puVar20 + 0xc4) = 0;
  puVar20 = puVar20 + 0x19;
  thunk_FUN_100652c08();
  thunk_FUN_1001c73d0();
  pcVar1 = param_1 + 0xd28;
  FUN_10064e264();
  thunk_FUN_1001c6070();
  pcVar2 = param_1 + 0x2d60;
  thunk_FUN_1006543ec(pcVar2);
  pcVar3 = param_1 + 0x2f00;
  FUN_10053077c(pcVar3,0);
  pcVar25 = param_1 + 0x3438;
  FUN_1006421a8(pcVar25);
  *(undefined ***)(param_1 + 0x3438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x34c0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar4 = param_1 + 0x3548;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0x3548) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar5 = param_1 + 0x35d0;
  thunk_FUN_100183990(pcVar5,0);
  pcVar6 = param_1 + 0x3bc0;
  thunk_FUN_100650e64();
  pcVar7 = param_1 + 0x3cf0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_1 + 0x3e20,0);
  pcVar8 = param_1 + 0x3f08;
  FUN_1006421a8(pcVar8);
  *(undefined ***)(param_1 + 0x3f08) = &PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar9 = param_1 + 0x3f90;
  thunk_FUN_100652c08();
  pcVar10 = param_1 + 0x4080;
  FUN_10064fd54(pcVar10,0);
  *(undefined ***)(param_1 + 0x4080) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar11 = param_1 + 0x4148;
  thunk_FUN_100183990(pcVar11,0);
  pcVar12 = param_1 + 0x4738;
  FUN_10064fd54(pcVar12,1);
  *(undefined ***)(param_1 + 0x4738) = &PTR_thunk_FUN_10064e2bc_101451a40;
  pcVar13 = param_1 + 0x4800;
  thunk_FUN_100650e64();
  pcVar14 = param_1 + 0x4930;
  FUN_10064fd54(pcVar14,0);
  *(undefined ***)(param_1 + 0x4930) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  pcVar15 = param_1 + 0x49f8;
  thunk_FUN_100652c08();
  pcVar16 = param_1 + 0x4ae8;
  thunk_FUN_1001cd1dc(pcVar16);
  *(undefined4 *)(param_1 + 0x4c48) = 0;
  *(long *)(param_1 + 0x4c40) = 0;
  param_1[0x4c4c] = param_2;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,puVar20,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  FUN_100642bd8(pcVar2,pcVar3,1);
  FUN_1005308f8(pcVar3,pcVar25,1);
  FUN_100642bd8(pcVar25,param_1 + 0x34c0,1);
  FUN_100642bd8(param_1 + 0x34c0,param_1 + 0x1b8,1);
  FUN_100642bd8(param_1 + 0x1b8,pcVar1,1);
  pcVar23 = pcVar7;
  if (((byte)param_2 & 1) == 0) {
    FUN_100642bd8(pcVar25,pcVar4,1);
    FUN_100642bd8(pcVar4,param_1 + 0xde0,1);
    FUN_100642bd8(pcVar4,pcVar5,1);
    pcVar23 = pcVar6;
    pcVar25 = pcVar4;
  }
  FUN_100642bd8(pcVar25,pcVar23,1);
  FUN_1005308f8(pcVar3,pcVar8,1);
  FUN_100642bd8(pcVar8,pcVar9,1);
  FUN_100642bd8(pcVar8,pcVar10,1);
  FUN_100642bd8(pcVar10,pcVar11,1);
  FUN_100642bd8(pcVar10,pcVar12,1);
  FUN_100642bd8(pcVar12,pcVar13,1);
  FUN_100642bd8(pcVar12,pcVar14,1);
  FUN_100642bd8(pcVar14,pcVar15,1);
  FUN_100642bd8(pcVar14,pcVar16,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x3e20,1);
  iVar19 = FUN_100126c88();
  FUN_100652cac(puVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(puVar20,&DAT_10115a164,2);
  uVar18 = *(uint *)(param_1 + 0x14c);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x14c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar20);
  }
  param_1[0x1a0] = (code)((byte)param_1[0x1a0] | 2);
  FUN_100654488(pcVar2,1);
  FUN_100530adc(pcVar3,0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    *(uint *)(param_1 + 0xdac) = *(uint *)(param_1 + 0xdac) | 0x10;
    if ((*(float *)(param_1 + 0xd78) != 0.5) || (*(float *)(param_1 + 0xd7c) != 0.6)) {
      *(long *)(param_1 + 0xd78) = 0x3f19999a3f000000;
      FUN_1000200a0(pcVar1);
    }
    FUN_10064e47c(0x447a0000,0x44480000,pcVar1);
    uStack_80 = DAT_101dbd460;
    pcStack_a8 = FUN_10025b11c;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    pcStack_98 = (code *)0x0;
    pcStack_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&pcStack_a8);
    uStack_80 = DAT_101dbd48c;
    pcStack_a8 = FUN_10025b11c;
    pcStack_90 = (code *)0x0;
    uStack_88 = 0;
    pcStack_98 = (code *)0x0;
    pcStack_a0 = param_1;
    FUN_10001554c(param_1 + 0xd30,&pcStack_a8);
  }
  FUN_1001c6454(param_1 + 0xde0,1);
  if (param_1[0x4c4c] == (code)0x0) {
    FUN_100652cdc(param_1 + 0x3aa0,"circle_button_question");
    uVar18 = *(uint *)(param_1 + 0x3654);
    if ((uVar18 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x3654) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 
// ...truncated...
```

#### `FUN_10025be2c` @ `0x10025be2c`

```c

void FUN_10025be2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_50,0,0,0);
  FUN_1004e3bc4(auStack_30,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_10025bda0(param_1,auStack_30,0);
  FUN_100644b14(param_2);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}


```

##### Caller: `FUN_10025b11c` @ `0x10025b11c`

```c

void FUN_10025b11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10025be2c(param_1,param_4);
  return;
}


```

### `ranked_3v3`

**Addresses:** `0x1013e53db`

#### `FUN_100212ff8` @ `0x100212ff8`

```c

/* WARNING: Removing unreachable block (ram,0x00010021328c) */
/* WARNING: Removing unreachable block (ram,0x000100213514) */

void FUN_100212ff8(long param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void **ppvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  string *psVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  string *psVar16;
  ulong uVar17;
  void *pvVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  void *pvVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  void *local_1a0 [2];
  char local_189;
  undefined1 auStack_188 [16];
  void *local_178;
  undefined8 uStack_170;
  long local_168;
  void **local_160;
  void *local_158;
  long lStack_150;
  long local_148;
  void *local_140 [2];
  char local_129;
  void *local_128 [2];
  char local_111;
  void *local_110;
  char local_f9;
  int local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined4 local_e0;
  void *local_d8;
  char local_c1;
  long local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  string local_b0 [64];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10021478c();
  lVar8 = param_1 + 0x20;
  FUN_100214908(lVar8,param_2 + 0x10);
  FUN_100214f3c(param_1 + 0x30,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar20 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar20;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar21 = *(undefined8 *)(param_2 + 0x68);
  uVar20 = *(undefined8 *)(param_2 + 0x60);
  uVar24 = *(undefined8 *)(param_2 + 0x78);
  uVar23 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar21;
  *(undefined8 *)(param_1 + 0x70) = uVar20;
  *(undefined8 *)(param_1 + 0x88) = uVar24;
  *(undefined8 *)(param_1 + 0x80) = uVar23;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  psVar16 = (string *)(param_1 + 0x98);
  std::string::operator=(psVar16,(string *)(param_2 + 0x88));
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  uVar20 = *(undefined8 *)(param_2 + 0xe8);
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  uVar25 = *(undefined8 *)(param_2 + 0xb8);
  uVar24 = *(undefined8 *)(param_2 + 0xb0);
  uVar23 = *(undefined8 *)(param_2 + 200);
  uVar21 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar20;
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  *(undefined8 *)(param_1 + 200) = uVar25;
  *(undefined8 *)(param_1 + 0xc0) = uVar24;
  *(undefined8 *)(param_1 + 0xd8) = uVar23;
  *(undefined8 *)(param_1 + 0xd0) = uVar21;
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar20 = *(undefined8 *)(param_2 + 0x128);
  uVar7 = *(undefined8 *)(param_2 + 0x120);
  uVar25 = *(undefined8 *)(param_2 + 0xf8);
  uVar24 = *(undefined8 *)(param_2 + 0xf0);
  uVar23 = *(undefined8 *)(param_2 + 0x108);
  uVar21 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar20;
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  *(undefined8 *)(param_1 + 0x108) = uVar25;
  *(undefined8 *)(param_1 + 0x100) = uVar24;
  *(undefined8 *)(param_1 + 0x118) = uVar23;
  *(undefined8 *)(param_1 + 0x110) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x148);
  uVar20 = *(undefined8 *)(param_2 + 0x140);
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  uVar24 = *(undefined8 *)(param_2 + 0x138);
  uVar23 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar21;
  *(undefined8 *)(param_1 + 0x150) = uVar20;
  *(undefined8 *)(param_1 + 0x168) = uVar7;
  *(undefined8 *)(param_1 + 0x160) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar24;
  *(undefined8 *)(param_1 + 0x140) = uVar23;
  uVar3 = FUN_100345b94();
  uVar3 = FUN_10034c450(uVar3,"*SpoilsOfWarRewardConfig*");
  if ((*(float *)(param_1 + 0x134) != *(float *)(param_1 + 0x164)) &&
     (lVar4 = FUN_100212fa8(uVar3,"ranked_3v3"), lVar4 != 0)) {
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      FUN_10012c5b0("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x11c));
      FUN_10012c5b0("new3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x14c));
      FUN_10012c5b0("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x118));
      FUN_10012c5b0("new3v3RankedDatamEloBucket",*(undefined4 *)(param_1 + 0x148));
      FUN_10012c5b0("prev3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x134));
      FUN_10012c5b0("new3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x164));
    }
    ppvVar5 = operator_new(0x138);
    ppvVar5[2] = (void *)0x0;
    ppvVar5[3] = (void *)0x0;
    *(undefined8 *)(ppvVar5 + 1) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x54) = 0x3f80000000000000;
    ppvVar5[0xd] = (void *)0x0;
    ppvVar5[0xc] = (void *)0x0;
    ppvVar5[0xf] = (void *)0x0;
    ppvVar5[0xe] = (void *)0x0;
    ppvVar5[0x11] = (void *)0x0;
    ppvVar5[0x10] = (void *)0x0;
    ppvVar5[0x13] = (void *)0x0;
    ppvVar5[0x12] = (void *)0x0;
    ppvVar5[0x15] = (void *)0x0;
    ppvVar5[0x14] = (void *)0x0;
    ppvVar5[0x17] = (void *)0x0;
    ppvVar5[0x16] = (void *)0x0;
    ppvVar5[0x19] = (void *)0x0;
    ppvVar5[0x18] = (void *)0x0;
    *ppvVar5 = &PTR_thunk_FUN_100214410_1014720e0;
    ppvVar5[0x1a] = (void *)0x0;
    FUN_100327e78(ppvVar5 + 0x1b);
    puVar6 = (undefined8 *)FUN_100327e78(ppvVar5 + 0x21);
    *(undefined4 *)(ppvVar5 + 4) = 2;
    pvVar18 = *(void **)(param_1 + 0x118);
    pvVar22 = *(void **)(param_1 + 0x130);
    pvVar19 = *(void **)(param_1 + 0x128);
    ppvVar5[0x1c] = *(void **)(param_1 + 0x120);
    ppvVar5[0x1b] = pvVar18;
    ppvVar5[0x1e] = pvVar22;
    ppvVar5[0x1d] = pvVar19;
    pvVar18 = *(void **)(param_1 + 0x138);
    ppvVar5[0x20] = *(void **)(param_1 + 0x140);
    ppvVar5[0x1f] = pvVar18;
    uVar7 = *(undefined8 *)(param_1 + 0x148);
    uVar21 = *(undefined8 *)(param_1 + 0x160);
    uVar20 = *(undefined8 *)(param_1 + 0x158);
    puVar6[1] = *(undefined8 *)(param_1 + 0x150);
    *puVar6 = uVar7;
    puVar6[3] = uVar21;
    puVar6[2] = uVar20;
    uVar7 = *(undefined8 *)(param_1 + 0x168);
    puVar6[5] = *(undefined8 *)(param_1 + 0x170);
    puVar6[4] = uVar7;
    FUN_10001549c(&local_160,"ranked_3v3");
    std::string::operator=((string *)(ppvVar5 + 1),(string *)&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar4);
    local_160 = ppvVar5;
    FUN_1002141a0(param_1 + 0x6d0,&local_160);
    FUN_1002151a8(&local_160);
    FUN_10001549c(local_b0,"ranked_3v3");
    std::string::operator=((string *)&local_158,local_b0);
    local_f8 = (int)(*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x134));
    plVar13 = (long *)(param_3 + 8);
    plVar15 = (long *)*plVar13;
    if (plVar15 != (long *)0x0) {
      iVar2 = *(int *)(lVar4 + 0x58);
      plVar14 = plVar13;
      do {
        if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {

// ...truncated...
```

##### Caller: `FUN_100223e98` @ `0x100223e98`

```c

long * FUN_100223e98(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_1001906ac();
  *puVar1 = &PTR_thunk_FUN_100223f58_101475b78;
  thunk_FUN_100211864(puVar1 + 0x4f);
  (**(code **)(*param_1 + 0x110))(param_1);
  FUN_100190928(param_1,param_1[0x50]);
  FUN_100212ff8(puVar1 + 0x4f,param_2,param_3);
  local_38 = FUN_100644a94("UI::HIDE_SILK_SCREEN");
  local_60 = FUN_100223f48;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  return param_1;
}


```

### `ranked_5v5`

**Addresses:** `0x1013e546d`

#### `FUN_100212ff8` @ `0x100212ff8`

```c

/* WARNING: Removing unreachable block (ram,0x00010021328c) */
/* WARNING: Removing unreachable block (ram,0x000100213514) */

void FUN_100212ff8(long param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void **ppvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  string *psVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  string *psVar16;
  ulong uVar17;
  void *pvVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  void *pvVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  void *local_1a0 [2];
  char local_189;
  undefined1 auStack_188 [16];
  void *local_178;
  undefined8 uStack_170;
  long local_168;
  void **local_160;
  void *local_158;
  long lStack_150;
  long local_148;
  void *local_140 [2];
  char local_129;
  void *local_128 [2];
  char local_111;
  void *local_110;
  char local_f9;
  int local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined4 local_e0;
  void *local_d8;
  char local_c1;
  long local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  string local_b0 [64];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10021478c();
  lVar8 = param_1 + 0x20;
  FUN_100214908(lVar8,param_2 + 0x10);
  FUN_100214f3c(param_1 + 0x30,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar20 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar20;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar21 = *(undefined8 *)(param_2 + 0x68);
  uVar20 = *(undefined8 *)(param_2 + 0x60);
  uVar24 = *(undefined8 *)(param_2 + 0x78);
  uVar23 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar21;
  *(undefined8 *)(param_1 + 0x70) = uVar20;
  *(undefined8 *)(param_1 + 0x88) = uVar24;
  *(undefined8 *)(param_1 + 0x80) = uVar23;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  psVar16 = (string *)(param_1 + 0x98);
  std::string::operator=(psVar16,(string *)(param_2 + 0x88));
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  uVar20 = *(undefined8 *)(param_2 + 0xe8);
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  uVar25 = *(undefined8 *)(param_2 + 0xb8);
  uVar24 = *(undefined8 *)(param_2 + 0xb0);
  uVar23 = *(undefined8 *)(param_2 + 200);
  uVar21 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar20;
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  *(undefined8 *)(param_1 + 200) = uVar25;
  *(undefined8 *)(param_1 + 0xc0) = uVar24;
  *(undefined8 *)(param_1 + 0xd8) = uVar23;
  *(undefined8 *)(param_1 + 0xd0) = uVar21;
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar20 = *(undefined8 *)(param_2 + 0x128);
  uVar7 = *(undefined8 *)(param_2 + 0x120);
  uVar25 = *(undefined8 *)(param_2 + 0xf8);
  uVar24 = *(undefined8 *)(param_2 + 0xf0);
  uVar23 = *(undefined8 *)(param_2 + 0x108);
  uVar21 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar20;
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  *(undefined8 *)(param_1 + 0x108) = uVar25;
  *(undefined8 *)(param_1 + 0x100) = uVar24;
  *(undefined8 *)(param_1 + 0x118) = uVar23;
  *(undefined8 *)(param_1 + 0x110) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x148);
  uVar20 = *(undefined8 *)(param_2 + 0x140);
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  uVar24 = *(undefined8 *)(param_2 + 0x138);
  uVar23 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar21;
  *(undefined8 *)(param_1 + 0x150) = uVar20;
  *(undefined8 *)(param_1 + 0x168) = uVar7;
  *(undefined8 *)(param_1 + 0x160) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar24;
  *(undefined8 *)(param_1 + 0x140) = uVar23;
  uVar3 = FUN_100345b94();
  uVar3 = FUN_10034c450(uVar3,"*SpoilsOfWarRewardConfig*");
  if ((*(float *)(param_1 + 0x134) != *(float *)(param_1 + 0x164)) &&
     (lVar4 = FUN_100212fa8(uVar3,"ranked_3v3"), lVar4 != 0)) {
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      FUN_10012c5b0("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x11c));
      FUN_10012c5b0("new3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x14c));
      FUN_10012c5b0("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x118));
      FUN_10012c5b0("new3v3RankedDatamEloBucket",*(undefined4 *)(param_1 + 0x148));
      FUN_10012c5b0("prev3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x134));
      FUN_10012c5b0("new3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x164));
    }
    ppvVar5 = operator_new(0x138);
    ppvVar5[2] = (void *)0x0;
    ppvVar5[3] = (void *)0x0;
    *(undefined8 *)(ppvVar5 + 1) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x54) = 0x3f80000000000000;
    ppvVar5[0xd] = (void *)0x0;
    ppvVar5[0xc] = (void *)0x0;
    ppvVar5[0xf] = (void *)0x0;
    ppvVar5[0xe] = (void *)0x0;
    ppvVar5[0x11] = (void *)0x0;
    ppvVar5[0x10] = (void *)0x0;
    ppvVar5[0x13] = (void *)0x0;
    ppvVar5[0x12] = (void *)0x0;
    ppvVar5[0x15] = (void *)0x0;
    ppvVar5[0x14] = (void *)0x0;
    ppvVar5[0x17] = (void *)0x0;
    ppvVar5[0x16] = (void *)0x0;
    ppvVar5[0x19] = (void *)0x0;
    ppvVar5[0x18] = (void *)0x0;
    *ppvVar5 = &PTR_thunk_FUN_100214410_1014720e0;
    ppvVar5[0x1a] = (void *)0x0;
    FUN_100327e78(ppvVar5 + 0x1b);
    puVar6 = (undefined8 *)FUN_100327e78(ppvVar5 + 0x21);
    *(undefined4 *)(ppvVar5 + 4) = 2;
    pvVar18 = *(void **)(param_1 + 0x118);
    pvVar22 = *(void **)(param_1 + 0x130);
    pvVar19 = *(void **)(param_1 + 0x128);
    ppvVar5[0x1c] = *(void **)(param_1 + 0x120);
    ppvVar5[0x1b] = pvVar18;
    ppvVar5[0x1e] = pvVar22;
    ppvVar5[0x1d] = pvVar19;
    pvVar18 = *(void **)(param_1 + 0x138);
    ppvVar5[0x20] = *(void **)(param_1 + 0x140);
    ppvVar5[0x1f] = pvVar18;
    uVar7 = *(undefined8 *)(param_1 + 0x148);
    uVar21 = *(undefined8 *)(param_1 + 0x160);
    uVar20 = *(undefined8 *)(param_1 + 0x158);
    puVar6[1] = *(undefined8 *)(param_1 + 0x150);
    *puVar6 = uVar7;
    puVar6[3] = uVar21;
    puVar6[2] = uVar20;
    uVar7 = *(undefined8 *)(param_1 + 0x168);
    puVar6[5] = *(undefined8 *)(param_1 + 0x170);
    puVar6[4] = uVar7;
    FUN_10001549c(&local_160,"ranked_3v3");
    std::string::operator=((string *)(ppvVar5 + 1),(string *)&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar4);
    local_160 = ppvVar5;
    FUN_1002141a0(param_1 + 0x6d0,&local_160);
    FUN_1002151a8(&local_160);
    FUN_10001549c(local_b0,"ranked_3v3");
    std::string::operator=((string *)&local_158,local_b0);
    local_f8 = (int)(*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x134));
    plVar13 = (long *)(param_3 + 8);
    plVar15 = (long *)*plVar13;
    if (plVar15 != (long *)0x0) {
      iVar2 = *(int *)(lVar4 + 0x58);
      plVar14 = plVar13;
      do {
        if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {

// ...truncated...
```

##### Caller: `FUN_100223e98` @ `0x100223e98`

```c

long * FUN_100223e98(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_1001906ac();
  *puVar1 = &PTR_thunk_FUN_100223f58_101475b78;
  thunk_FUN_100211864(puVar1 + 0x4f);
  (**(code **)(*param_1 + 0x110))(param_1);
  FUN_100190928(param_1,param_1[0x50]);
  FUN_100212ff8(puVar1 + 0x4f,param_2,param_3);
  local_38 = FUN_100644a94("UI::HIDE_SILK_SCREEN");
  local_60 = FUN_100223f48;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  return param_1;
}


```

### `skillProgressionInfo`

**Addresses:** `0x10141c13c`

#### `FUN_10050a250` @ `0x10050a250`

```c

/* WARNING: Removing unreachable block (ram,0x00010050aabc) */
/* WARNING: Removing unreachable block (ram,0x00010050a400) */
/* WARNING: Removing unreachable block (ram,0x00010050a53c) */
/* WARNING: Removing unreachable block (ram,0x00010050a648) */
/* WARNING: Removing unreachable block (ram,0x00010050ac30) */

void FUN_10050a250(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  double dVar14;
  char *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  undefined1 local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  char local_1b9;
  undefined4 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  char local_199;
  undefined4 local_198;
  undefined4 local_194;
  long local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 auStack_178 [48];
  undefined1 auStack_148 [48];
  undefined1 auStack_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  char *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  local_1e0._0_4_ = 0x100005;
  local_1f0 = "code";
  uStack_1e8 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_1f0);
  *(undefined4 *)(param_2 + 0x28) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_1e0._0_4_ = 0x100005;
    local_1f0 = "returnValue";
    uStack_1e8 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_1f0);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_1e0 = CONCAT44(local_1e0._4_4_,0x100005);
      local_1f0 = "returnValue";
      uStack_1e8 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_1f0);
      if ((int)plVar4[1] == 0) {
        return;
      }
      puVar13 = (undefined8 *)*plVar4;
      do {
        _printf("Player UUID: %s");
        local_1f0 = (char *)0x0;
        uStack_1e8 = 0;
        local_1e0 = 0;
        local_1c8 = 0;
        local_1b9 = '\0';
        local_1d0 = (void *)0x0;
        local_1a8 = 0;
        local_199 = '\0';
        local_1b0 = (void *)0x0;
        local_e8 = 0;
        uStack_e0 = 0;
        FUN_1004e313c(&local_d8);
        local_c0 = 0;
        uStack_b8 = 0;
        puVar9 = puVar13;
        if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
          puVar9 = (undefined8 *)*puVar13;
        }
        FUN_1000ee4ec(&local_90,puVar9);
        std::string::operator=((string *)&local_1f0,(string *)&local_90);
        plVar1 = puVar13 + 3;
        lVar3 = FUN_1000e86c0(plVar1,"isOrganizer");
        puVar12 = (uint *)(puVar13 + 4);
        if (puVar13[3] + (ulong)*puVar12 * 0x30 == lVar3) {
          local_1d8 = false;
        }
        else {
          local_80 = 0x100005;
          local_90 = "isOrganizer";
          uStack_88 = 0xb;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) & 1) == 0) {
            local_1d8 = false;
          }
          else {
            local_80 = 0x100005;
            local_90 = "isOrganizer";
            uStack_88 = 0xb;
            lVar3 = FUN_1000e87dc(plVar1,&local_90);
            local_1d8 = *(int *)(lVar3 + 0x10) == 0x102;
          }
        }
        lVar3 = FUN_1000e86c0(plVar1,"teamUUID");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
          pcVar5 = "";
        }
        else {
          local_80 = 0x100005;
          local_90 = "teamUUID";
          uStack_88 = 8;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          pcVar5 = "";
          if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
            local_80 = 0x100005;
            local_90 = "teamUUID";
            uStack_88 = 8;
            pcVar5 = (char *)FUN_1000e87dc(plVar1,&local_90);
            if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
              pcVar5 = *(char **)pcVar5;
            }
          }
        }
        FUN_1000ee4ec(&local_90,pcVar5);
        std::string::operator=((string *)&local_1d0,(string *)&local_90);
        lVar3 = FUN_1000e86c0(plVar1,"lifetimePoints");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
LAB_10050a58c:
          local_1b8 = 0;
        }
        else {
          local_80 = 0x100005;
          local_90 = "lifetimePoints";
          uStack_88 = 0xe;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10050a58c;
          local_80 = 0x100005;
          local_90 = "lifetimePoints";
          uStack_88 = 0xe;
          puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
          local_1b8 = *puVar2;
        }
        lVar3 = FUN_1000e86c0(plVar1,"guildUUID");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
          pcVar5 = "";
        }
        else {
          local_80 = 0x100005;
          local_90 = "guildUUID";
          uStack_88 = 9;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          pcVar5 = "";
          if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
            local_80 = 0x100005;
            local_90 = "guildUUID";
            uStack_88 = 9;
            pcVar5 = (char *)FUN_1000e87dc(plVar1,&local_90);
            if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
              pcVar5 = *(char **)pcVar5;
            }
          }
        }
        FUN_1000ee4ec(&local_90,pcVar5);
        std::string::operator=((string *)&local_1b0,(string *)&local_90);
        lVar3 = FUN_1000e86c0(plVar1,"lifetimeSpendCount");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
          local_198 = 0;
        }
        else {
          local_80 = 0x100005;
          local_90 = "lifetimeSpendCount";
          uStack_88 = 0x12;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) {
            local_198 = 0;
          }
          else {
            local_80 = 0x100005;
            local_90 = "lifetimeSpendCount";
            uStack_88 = 0x12;
            puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
            local_198 = *puVar2;
          }
        }
        lVar3 = FUN_1000e86c0(plVar1,"winStreak");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
LAB_10050a720:
          local_194 = 0;
        }
        else {
          local_80 = 0x100005;
          local_90 = "winStreak";
          uStack_88 = 9;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10050a720;
          local_80 = 0x100005;
          local_90 = "winStreak";
          uStack_88 = 9;
          puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
          local_194 = *puVar2;
        }
        lVar3 = FUN_1000e86c0(plVar1,"last_login");
        dVar14 = -1.0;
        if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar3) {
          local_80 = 0x100005;
          local_90 = "last_login";
          uStack_88 = 10;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) != 0) {
            local_80 = 0x100005;
            local_90 = "last_login";
            uStack_88 = 10;
            FUN_1000e87dc(plVar1,&local_90);
            dVar14 = (double)FUN_1000fceec();
          }
        }
        local_190 = (long)dVar14;
        lVar3 = FUN_1000e86c0(plVar1,"completed_non_tutorial");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
LAB_10050a7f4:
          local_188 = 0;
        }
        else {
          local_80 = 0x100005;
          local_90 = "completed_non_tutorial";
          uStack_88 = 0x16;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LA
// ...truncated...
```

##### Caller: `FUN_100503314` @ `0x100503314`

```c

void FUN_100503314(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  char *local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  
  DAT_1018675c8 = 1;
  if ((int)param_2[2] == 0) {
    DAT_1018675c8 = 0xffffffff;
    return;
  }
  if ((*(char *)(param_1 + 0x2c18) != '\0') &&
     (lVar4 = FUN_1000e86c0(param_2,"sessionToken"),
     *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4)) {
    local_48 = 0x100005;
    local_58 = "sessionToken";
    local_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(param_2,&local_58);
    plVar6 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar6 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar6);
    uVar1 = local_50;
    if (-1 < (char)local_41) {
      uVar1 = (ulong)local_41;
    }
    if ((uVar1 != 0) ||
       (iVar2 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1013cda1a),
       iVar2 != 0)) {
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c58));
      *(undefined1 *)(param_1 + 0x2c50) = 1;
      std::string::operator=((string *)(param_1 + 0x2c38),(string *)&local_58);
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c58));
    }
    if ((char)local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  if (DAT_1018675cc == (int)param_3) {
LAB_100503448:
    FUN_100506f44(param_1,param_2);
  }
  else {
    plVar6 = (long *)FUN_1004f1830(param_1 + 0x2c98,param_3);
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar3 = (**(code **)(*plVar6 + 0x10))();
    switch(uVar3) {
    case 1:
      FUN_1005039ac(param_2,plVar6);
      break;
    case 2:
      FUN_100505210(param_2,plVar6);
      break;
    case 3:
      FUN_1005050c0(param_2,plVar6);
      break;
    case 4:
      FUN_10050539c(param_2,plVar6);
      break;
    case 5:
      FUN_100505520(param_2,plVar6,*(undefined1 *)(param_1 + 0x2a64));
      goto LAB_100503448;
    case 7:
      FUN_100507590(param_2,plVar6);
      break;
    case 8:
      FUN_100507640(param_2,plVar6);
      FUN_1000153b4(param_1 + 0x2b40,plVar6 + 0x10);
      *(undefined4 *)(param_1 + 0x2b58) = *(undefined4 *)((long)plVar6 + 0x124);
      *(undefined8 *)(param_1 + 0x2b50) = *(undefined8 *)((long)plVar6 + 0x11c);
      break;
    case 9:
      FUN_10050a250(param_2,plVar6);
      break;
    case 10:
      FUN_10050b0dc(param_2,plVar6);
      break;
    case 0xb:
      FUN_10050b408(param_2,plVar6);
      break;
    case 0xc:
      local_48 = 0x100005;
      local_58 = "code";
      local_50 = 4;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_58);
      *(undefined4 *)(plVar6 + 5) = *puVar7;
      break;
    case 0xd:
      FUN_10050b6a8(param_2,plVar6);
      break;
    case 0xe:
      FUN_10050bc4c(param_2,plVar6);
      break;
    case 0xf:
      FUN_10050bfac(param_2,plVar6);
      break;
    case 0x10:
      FUN_10050c2bc(param_2,plVar6);
      break;
    case 0x11:
      FUN_10050de50(param_2,plVar6);
      break;
    case 0x12:
      FUN_10050e4fc(param_2,plVar6);
      break;
    case 0x13:
      FUN_10050e80c(param_2,plVar6);
      break;
    case 0x14:
      FUN_10050fa10(param_2,plVar6);
      break;
    case 0x15:
      FUN_100510924(param_2,plVar6);
      break;
    case 0x16:
      FUN_100510c38(param_2,plVar6);
      break;
    case 0x17:
      FUN_10051a89c(param_2,plVar6);
      break;
    case 0x18:
      FUN_100510f84(param_2,plVar6);
      break;
    case 0x19:
      FUN_1005111b4(param_2,plVar6);
      break;
    case 0x1a:
      FUN_10051151c(param_2,plVar6);
      break;
    case 0x1b:
      FUN_10051183c(param_2,plVar6);
      break;
    case 0x1c:
      FUN_100511e3c(param_2,plVar6,param_1 + 0x2ad8,param_1 + 0x2af0);
      break;
    case 0x1d:
      FUN_10051022c(param_2,plVar6);
      break;
    case 0x1e:
      FUN_100510420(param_2,plVar6);
      break;
    case 0x1f:
      FUN_100510514(param_2,plVar6);
      break;
    case 0x20:
      FUN_100510608(param_2,plVar6);
      break;
    case 0x21:
      FUN_1005106fc(param_2,plVar6);
      break;
    case 0x22:
      FUN_100511ec4(param_2,plVar6);
      break;
    case 0x23:
      FUN_100512218(param_2,plVar6);
      break;
    case 0x24:
      FUN_1005123d8(param_2,plVar6);
      break;
    case 0x25:
      FUN_100512674(param_2,plVar6);
      break;
    case 0x26:
      FUN_100512910(param_2,plVar6);
      break;
    case 0x27:
      FUN_100512db4(param_2,plVar6);
      break;
    case 0x28:
      FUN_100513564(param_2,plVar6);
      break;
    case 0x29:
      FUN_1005137fc(param_2,plVar6);
      break;
    case 0x2a:
      FUN_1005138f0(param_2,plVar6);
      break;
    case 0x2b:
      FUN_1005139e4(param_2,plVar6);
      break;
    case 0x2c:
      FUN_100513aa0(param_2,plVar6);
      break;
    case 0x2d:
      FUN_100513bd0(param_2,plVar6);
      break;
    case 0x2e:
      FUN_100513d90(param_2,plVar6);
      break;
  
// ...truncated...
```

#### `FUN_10051cde8` @ `0x10051cde8`

```c

void FUN_10051cde8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar1 = FUN_1000e86c0(param_1,"skillProgressionInfo");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "skillProgressionInfo";
    uStack_50 = 0x14;
    plVar2 = (long *)FUN_1000e87dc(param_1,&local_58);
    lVar1 = FUN_1000e86c0(plVar2,"5v5_pvp_ranked");
    if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar1) {
      local_48 = 0x100005;
      local_58 = "5v5_pvp_ranked";
      uStack_50 = 0xe;
      uVar3 = FUN_1000e87dc(plVar2,&local_58);
      FUN_10051bcfc(uVar3,param_2);
    }
    lVar1 = FUN_1000e86c0(plVar2,"ranked");
    if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar1) {
      local_48 = 0x100005;
      local_58 = "ranked";
      uStack_50 = 6;
      uVar3 = FUN_1000e87dc(plVar2,&local_58);
      FUN_10051bcfc(uVar3,param_3);
    }
    lVar1 = FUN_1000e86c0(plVar2,"blitz_pvp_ranked");
    if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar1) {
      local_48 = 0x100005;
      local_58 = "blitz_pvp_ranked";
      uStack_50 = 0x10;
      uVar3 = FUN_1000e87dc(plVar2,&local_58);
      FUN_10051bcfc(uVar3,param_4);
    }
  }
  return;
}


```

##### Caller: `FUN_10010da6c` @ `0x10010da6c`

```c

/* WARNING: Removing unreachable block (ram,0x00010010de78) */
/* WARNING: Removing unreachable block (ram,0x00010010dea8) */

void FUN_10010da6c(long param_1,long param_2)

{
  size_t sVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  size_t sVar8;
  void *pvVar9;
  long *plVar10;
  char *pcVar11;
  undefined2 *puVar12;
  long *plVar13;
  int *piVar14;
  uint *puVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  byte bVar21;
  uint *puVar22;
  bool bVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  char *local_438;
  ulong local_430;
  undefined4 local_428;
  byte local_421;
  undefined8 *local_420;
  undefined8 *local_418;
  undefined8 local_410;
  void *pvStack_408;
  void *local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined8 *puStack_3d0;
  undefined8 local_3c8;
  void *pvStack_3c0;
  void *local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398;
  undefined8 local_390;
  void *pvStack_388;
  void *local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  char *local_358;
  void *local_350;
  undefined4 local_348;
  char local_341;
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 local_330;
  void *pvStack_328;
  void *local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 *local_2f0;
  ulong local_2e8;
  undefined8 uStack_2e0;
  void *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  void *pvStack_2a8;
  void *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_278;
  char *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 auStack_1c0 [48];
  undefined1 auStack_190 [48];
  undefined1 auStack_160 [48];
  undefined4 local_130;
  ulong local_128;
  long local_120;
  undefined4 local_118;
  undefined1 *local_110;
  undefined8 local_108;
  ulong local_100;
  undefined1 local_f8;
  long local_f0;
  ulong local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_278 = *(char **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_278 = (char *)(param_2 + 0x28);
  }
  local_270 = local_278;
  local_d0 = local_d8;
  FUN_1000f7bd0(&local_f0,&local_278);
  lVar3 = FUN_1000e86c0(&local_f0,"returnValue");
  if (local_f0 + (local_e8 & 0xffffffff) * 0x30 != lVar3) {
    local_268 = CONCAT44(local_268._4_4_,0x100005);
    local_270 = (char *)0xb;
    local_278 = "returnValue";
    lVar3 = FUN_1000e87dc(&local_f0,&local_278);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_268 = 0;
      local_270 = (char *)0x0;
      local_260 = 0;
      FUN_1004e313c();
      FUN_1004e313c();
      FUN_1004e313c();
      local_220 = 0;
      local_228 = 0;
      local_218 = 0;
      FUN_1004e313c();
      FUN_1004e313c();
      local_1e8 = 0;
      local_1f0 = 0;
      local_1e0 = 0;
      local_128 = 0;
      local_120 = 0;
      local_110 = (undefined1 *)0x0;
      local_100 = 0;
      local_108 = 0;
      local_348 = 0x100005;
      local_358 = "returnValue";
      local_350 = (void *)0xb;
      plVar4 = (long *)FUN_1000e87dc(&local_f0,&local_358);
      lVar3 = FUN_1000e86c0(plVar4,"numOffline");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        uVar18 = 0;
      }
      else {
        local_348 = 0x100005;
        local_358 = "numOffline";
        local_350 = (void *)0xa;
        puVar5 = (undefined4 *)FUN_1000e87dc(plVar4,&local_358);
        uVar18 = *puVar5;
      }
      *(undefined4 *)(param_1 + 0x2f4) = uVar18;
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if ((*plVar4 + (ulong)*(uint *)(plV
// ...truncated...
```

##### Caller: `FUN_10050c2bc` @ `0x10050c2bc`

```c

/* WARNING: Removing unreachable block (ram,0x00010050dbc4) */
/* WARNING: Removing unreachable block (ram,0x00010050db2c) */
/* WARNING: Removing unreachable block (ram,0x00010050dc64) */

void FUN_10050c2bc(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined8 uVar15;
  char *local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  char local_229;
  void *local_228 [2];
  char local_211;
  void *local_210 [2];
  char local_1f9;
  undefined4 local_1f8;
  undefined4 local_1f4;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  void *pvStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  char *local_198;
  undefined8 uStack_190;
  long local_188;
  undefined8 local_180;
  void *local_178;
  void *local_170;
  undefined8 uStack_168;
  long local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [48];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
LAB_10050c338:
    uVar12 = 0;
  }
  else {
    local_188 = CONCAT44(local_188._4_4_,0x100005);
    local_198 = "code";
    uStack_190 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_198);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c338;
    local_188 = CONCAT44(local_188._4_4_,0x100005);
    local_198 = "code";
    uStack_190 = 4;
    puVar11 = (undefined4 *)FUN_1000e87dc(param_1,&local_198);
    uVar12 = *puVar11;
  }
  *(undefined4 *)(param_2 + 0x238) = uVar12;
  std::string::operator=((string *)(param_2 + 0x220),(string *)&DAT_101d91198);
  FUN_10015a0b0(param_2 + 0x1d8,0);
  FUN_10015a500(param_2 + 0x1e8,0);
  FUN_10015a474(param_2 + 0x1f8,0);
  FUN_10015a3d8(param_2 + 0x208,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_188 = CONCAT44(local_188._4_4_,0x100005);
  local_198 = "returnValue";
  uStack_190 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_198);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_198 = (char *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  FUN_1004e313c(&local_180);
  local_170 = (void *)0x0;
  uStack_168 = 0;
  local_160 = 0;
  local_230 = 0x100005;
  local_240 = "returnValue";
  uStack_238 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_240);
  lVar4 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c48c:
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  else {
    local_230 = 0x100005;
    local_240 = "success";
    uStack_238 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_240);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_10050c48c;
    local_230 = 0x100005;
    local_240 = "success";
    uStack_238 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_240);
    bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
    *(bool *)(param_2 + 0x218) = bVar3;
    if (bVar3) {
      lVar4 = FUN_1000e86c0(plVar5,"members");
      if ((*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) ||
         (lVar4 = FUN_1000e86c0(plVar5,"guildUUID"),
         *plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4)) {
        *(undefined4 *)(param_2 + 0x238) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        lVar4 = FUN_1000e86c0(plVar5,"guildUUID");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c634:
          pcVar6 = "";
        }
        else {
          local_230 = 0x100005;
          local_240 = "guildUUID";
          uStack_238 = 9;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050c634;
          local_230 = 0x100005;
          local_240 = "guildUUID";
          uStack_238 = 9;
          pcVar6 = (char *)FUN_1000e87dc(plVar5,&local_240);
          if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
            pcVar6 = *(char **)pcVar6;
          }
        }
        FUN_1000ee4ec(&local_240,pcVar6);
        std::string::operator=((string *)(param_2 + 0x180),(string *)&local_240
// ...truncated...
```

#### `FUN_100507640` @ `0x100507640`

```c

/* WARNING: Removing unreachable block (ram,0x000100509be4) */
/* WARNING: Removing unreachable block (ram,0x000100509614) */
/* WARNING: Removing unreachable block (ram,0x0001005090d4) */
/* WARNING: Removing unreachable block (ram,0x00010050954c) */
/* WARNING: Removing unreachable block (ram,0x000100509b4c) */
/* WARNING: Removing unreachable block (ram,0x000100509e58) */
/* WARNING: Removing unreachable block (ram,0x0001005096c0) */

void FUN_100507640(long *param_1,long param_2)

{
  ulong uVar1;
  string *psVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  string *psVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  string *psVar16;
  char *pcVar17;
  undefined4 *puVar18;
  string *psVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  void *local_268;
  ulong local_260;
  byte local_251;
  char *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  void *pvStack_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  long lStack_210;
  void *local_208;
  undefined8 local_200;
  long lStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int local_1bc;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  local_1a8 = 0x100005;
  local_1b8 = "code";
  uStack_1b0 = 4;
  puVar9 = (undefined4 *)FUN_1000e87dc(param_1,&local_1b8);
  *(undefined4 *)(param_2 + 0x240) = *puVar9;
  puVar9 = (undefined4 *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != 0) {
    *puVar9 = 0;
  }
  FUN_100156080(param_2 + 0x58,0);
  FUN_100155f24(param_2 + 0x38,0);
  FUN_100155eac(param_2 + 0x28,0);
  lVar10 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar10) {
LAB_1005078c4:
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  lVar10 = FUN_1000e87dc(param_1,&local_1b8);
  if (*(int *)(lVar10 + 0x10) != 3) goto LAB_1005078c4;
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  plVar11 = (long *)FUN_1000e87dc(param_1,&local_1b8);
  FUN_100168aa8(&local_1b8);
  lVar10 = FUN_1000e86c0(plVar11,"handle");
  if ((((*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) ||
       (lVar10 = FUN_1000e86c0(plVar11,"skillTier"),
       *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
      (lVar10 = FUN_1000e86c0(plVar11,"completed"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
     ((lVar10 = FUN_1000e86c0(plVar11,"wins"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10 ||
      (lVar10 = FUN_1000e86c0(plVar11,"level"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)))) {
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    lVar10 = FUN_1000e86c0(plVar11,"handle");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507860:
      pcVar17 = "";
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_100507860;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      pcVar17 = (char *)FUN_1000e87dc(plVar11,&local_250);
      if (((byte)pcVar17[0x12] >> 6 & 1) == 0) {
        pcVar17 = *(char **)pcVar17;
      }
    }
    FUN_1004e3148(param_2 + 0x80,pcVar17);
    lVar10 = FUN_1000e86c0(plVar11,"completed");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_1005078bc:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_1005078bc;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x120) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"wins");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a1b0:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a1b0;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x124) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"level");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a224:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a224;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "level";
      uStack_248 = 5;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x148) = uVar23;
  }
  lVar10 = FUN_1000e86c0(plVar11,"completed_non_tutorial");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507934:
    uVar23 = 1;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507934;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "completed_non_tutorial";
    uStack_248 = 0x16;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x11c) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"last_login");
  dVar26 = -1.0;
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar10) {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "last_login";
    uStack_248 = 10;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "last_login";
      uStack_248 = 10;
      FUN_1000e87dc(plVar11,&local_250);
      dVar26 = (double)FUN_1000fceec();
    }
  }
  *(long *)(param_2 + 0x100) = (long)dVar26;
  lVar10 = FUN_1000e86c0(plVar11,"wins_aral");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a20:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507a20;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_aral";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x128) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_blitz");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507a94:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_blitz";
    uStack_248 = 10;
    lVar10 = FUN
// ...truncated...
```

### `seasonMaxSkillTier`

**Addresses:** `0x10141c8ae`

#### `FUN_10051bcfc` @ `0x10051bcfc`

```c

void FUN_10051bcfc(long *param_1,undefined4 *param_2)

{
  double dVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar2 = FUN_1000e86c0(param_1,"skillTier");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051bd70:
    uVar5 = 0xffffffff;
  }
  else {
    local_58 = 0x100005;
    local_68 = "skillTier";
    uStack_60 = 9;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051bd70;
    local_58 = 0x100005;
    local_68 = "skillTier";
    uStack_60 = 9;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_68);
    uVar5 = *puVar3;
  }
  *param_2 = uVar5;
  lVar2 = FUN_1000e86c0(param_1,"eloEarned");
  fVar8 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "eloEarned";
    uStack_60 = 9;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    fVar8 = 0.0;
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "eloEarned";
      uStack_60 = 9;
      FUN_1000e87dc(param_1,&local_68);
      dVar1 = (double)FUN_1000fceec();
      fVar8 = (float)dVar1;
    }
  }
  param_2[7] = fVar8;
  lVar2 = FUN_1000e86c0(param_1,"seasonMaxSkillTier");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051be58:
    uVar5 = 0xffffffff;
  }
  else {
    local_58 = 0x100005;
    local_68 = "seasonMaxSkillTier";
    uStack_60 = 0x12;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051be58;
    local_58 = 0x100005;
    local_68 = "seasonMaxSkillTier";
    uStack_60 = 0x12;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_68);
    uVar5 = *puVar3;
  }
  param_2[1] = uVar5;
  lVar2 = FUN_1000e86c0(param_1,"eloBucket");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051becc:
    iVar6 = 0;
  }
  else {
    local_58 = 0x100005;
    local_68 = "eloBucket";
    uStack_60 = 9;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) == 0) goto LAB_10051becc;
    local_58 = 0x100005;
    local_68 = "eloBucket";
    uStack_60 = 9;
    FUN_1000e87dc(param_1,&local_68);
    dVar1 = (double)FUN_1000fceec();
    iVar6 = (int)dVar1;
  }
  param_2[2] = iVar6;
  lVar2 = FUN_1000e86c0(param_1,"eloEarnedDelta");
  fVar8 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "eloEarnedDelta";
    uStack_60 = 0xe;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    fVar8 = 0.0;
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "eloEarnedDelta";
      uStack_60 = 0xe;
      FUN_1000e87dc(param_1,&local_68);
      dVar1 = (double)FUN_1000fceec();
      fVar8 = (float)dVar1;
    }
  }
  param_2[8] = fVar8;
  lVar2 = FUN_1000e86c0(param_1,"skillTierProgress");
  fVar8 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "skillTierProgress";
    uStack_60 = 0x11;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    fVar8 = 0.0;
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "skillTierProgress";
      uStack_60 = 0x11;
      FUN_1000e87dc(param_1,&local_68);
      dVar1 = (double)FUN_1000fceec();
      fVar8 = (float)dVar1;
    }
  }
  fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_2[3] = fVar8;
  lVar2 = FUN_1000e86c0(param_1,"skillTierBronzeLine");
  fVar8 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "skillTierBronzeLine";
    uStack_60 = 0x13;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    fVar8 = 0.0;
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "skillTierBronzeLine";
      uStack_60 = 0x13;
      FUN_1000e87dc(param_1,&local_68);
      dVar1 = (double)FUN_1000fceec();
      fVar8 = (float)dVar1;
    }
  }
  fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_2[4] = fVar8;
  lVar2 = FUN_1000e86c0(param_1,"skillTierSilverLine");
  fVar8 = 0.25;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "skillTierSilverLine";
    uStack_60 = 0x13;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    fVar8 = 0.25;
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "skillTierSilverLine";
      uStack_60 = 0x13;
      FUN_1000e87dc(param_1,&local_68);
      dVar1 = (double)FUN_1000fceec();
      fVar8 = (float)dVar1;
    }
  }
  fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_2[5] = fVar8;
  lVar2 = FUN_1000e86c0(param_1,"skillTierGoldLine");
  fVar8 = 0.75;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "skillTierGoldLine";
    uStack_60 = 0x11;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    fVar8 = 0.75;
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "skillTierGoldLine";
      uStack_60 = 0x11;
      FUN_1000e87dc(param_1,&local_68);
      dVar1 = (double)FUN_1000fceec();
      fVar8 = (float)dVar1;
    }
  }
  fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_2[6] = fVar8;
  lVar2 = FUN_1000e86c0(param_1,"eloEarnedDecayStart");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "eloEarnedDecayStart";
    uStack_60 = 0x13;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "eloEarnedDecayStart";
      uStack_60 = 0x13;
      puVar4 = (undefined8 *)FUN_1000e87dc(param_1,&local_68);
      uVar7 = *puVar4;
      goto LAB_10051c1e4;
    }
  }
  uVar7 = 0;
LAB_10051c1e4:
  *(undefined8 *)(param_2 + 10) = uVar7;
  lVar2 = FUN_1000e86c0(param_1,"eloEarnedDecay");
  fVar8 = 0.0;
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "eloEarnedDecay";
    uStack_60 = 0xe;
    lVar2 = FUN_1000e87dc(param_1,&local_68);
    fVar8 = 0.0;
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "eloEarnedDecay";
      uStack_60 = 0xe;
      FUN_1000e87dc(param_1,&local_68);
      dVar1 = (double)FUN_1000fceec();
      fVar8 = (float)dVar1;
    }
  }
  param_2[9] = fVar8;
  return;
}


```

##### Caller: `FUN_10051cde8` @ `0x10051cde8`

```c

void FUN_10051cde8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar1 = FUN_1000e86c0(param_1,"skillProgressionInfo");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "skillProgressionInfo";
    uStack_50 = 0x14;
    plVar2 = (long *)FUN_1000e87dc(param_1,&local_58);
    lVar1 = FUN_1000e86c0(plVar2,"5v5_pvp_ranked");
    if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar1) {
      local_48 = 0x100005;
      local_58 = "5v5_pvp_ranked";
      uStack_50 = 0xe;
      uVar3 = FUN_1000e87dc(plVar2,&local_58);
      FUN_10051bcfc(uVar3,param_2);
    }
    lVar1 = FUN_1000e86c0(plVar2,"ranked");
    if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar1) {
      local_48 = 0x100005;
      local_58 = "ranked";
      uStack_50 = 6;
      uVar3 = FUN_1000e87dc(plVar2,&local_58);
      FUN_10051bcfc(uVar3,param_3);
    }
    lVar1 = FUN_1000e86c0(plVar2,"blitz_pvp_ranked");
    if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar1) {
      local_48 = 0x100005;
      local_58 = "blitz_pvp_ranked";
      uStack_50 = 0x10;
      uVar3 = FUN_1000e87dc(plVar2,&local_58);
      FUN_10051bcfc(uVar3,param_4);
    }
  }
  return;
}


```

##### Caller: `FUN_100507640` @ `0x100507640`

```c

/* WARNING: Removing unreachable block (ram,0x000100509be4) */
/* WARNING: Removing unreachable block (ram,0x000100509614) */
/* WARNING: Removing unreachable block (ram,0x0001005090d4) */
/* WARNING: Removing unreachable block (ram,0x00010050954c) */
/* WARNING: Removing unreachable block (ram,0x000100509b4c) */
/* WARNING: Removing unreachable block (ram,0x000100509e58) */
/* WARNING: Removing unreachable block (ram,0x0001005096c0) */

void FUN_100507640(long *param_1,long param_2)

{
  ulong uVar1;
  string *psVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  string *psVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  string *psVar16;
  char *pcVar17;
  undefined4 *puVar18;
  string *psVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  void *local_268;
  ulong local_260;
  byte local_251;
  char *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  void *pvStack_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  long lStack_210;
  void *local_208;
  undefined8 local_200;
  long lStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int local_1bc;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  local_1a8 = 0x100005;
  local_1b8 = "code";
  uStack_1b0 = 4;
  puVar9 = (undefined4 *)FUN_1000e87dc(param_1,&local_1b8);
  *(undefined4 *)(param_2 + 0x240) = *puVar9;
  puVar9 = (undefined4 *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != 0) {
    *puVar9 = 0;
  }
  FUN_100156080(param_2 + 0x58,0);
  FUN_100155f24(param_2 + 0x38,0);
  FUN_100155eac(param_2 + 0x28,0);
  lVar10 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar10) {
LAB_1005078c4:
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  lVar10 = FUN_1000e87dc(param_1,&local_1b8);
  if (*(int *)(lVar10 + 0x10) != 3) goto LAB_1005078c4;
  local_1a8 = 0x100005;
  local_1b8 = "returnValue";
  uStack_1b0 = 0xb;
  plVar11 = (long *)FUN_1000e87dc(param_1,&local_1b8);
  FUN_100168aa8(&local_1b8);
  lVar10 = FUN_1000e86c0(plVar11,"handle");
  if ((((*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) ||
       (lVar10 = FUN_1000e86c0(plVar11,"skillTier"),
       *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
      (lVar10 = FUN_1000e86c0(plVar11,"completed"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)) ||
     ((lVar10 = FUN_1000e86c0(plVar11,"wins"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10 ||
      (lVar10 = FUN_1000e86c0(plVar11,"level"),
      *plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10)))) {
    *(undefined4 *)(param_2 + 0x240) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    lVar10 = FUN_1000e86c0(plVar11,"handle");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507860:
      pcVar17 = "";
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_100507860;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "handle";
      uStack_248 = 6;
      pcVar17 = (char *)FUN_1000e87dc(plVar11,&local_250);
      if (((byte)pcVar17[0x12] >> 6 & 1) == 0) {
        pcVar17 = *(char **)pcVar17;
      }
    }
    FUN_1004e3148(param_2 + 0x80,pcVar17);
    lVar10 = FUN_1000e86c0(plVar11,"completed");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_1005078bc:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_1005078bc;
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "completed";
      uStack_248 = 9;
      puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
      uVar23 = *puVar18;
    }
    *(undefined4 *)(param_2 + 0x120) = uVar23;
    lVar10 = FUN_1000e86c0(plVar11,"wins");
    if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_10050a1b0:
      uVar23 = 0;
    }
    else {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "wins";
      uStack_248 = 4;
      lVar10 = FUN_1000e87dc(plVar11,&local_250);
      if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_10050a1b0;
      local_2
// ...truncated...
```

### `endOfSeasonRewards`

**Addresses:** `0x1013e4aba`

#### `FUN_10025f624` @ `0x10025f624`

```c

void FUN_10025f624(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_10002f320();
  uVar1 = *(ulong *)(lVar3 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar3 + 0xe1af)) {
    uVar1 = (ulong)*(byte *)(lVar3 + 0xe1af);
  }
  if (((uVar1 == 0x12) &&
      (iVar2 = std::string::compare(lVar3 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e4aba),
      iVar2 == 0)) && ((*(uint *)(param_1 + 0x2a34) >> 2 & 1) != 0)) {
    *(uint *)(param_1 + 0x2a34) = *(uint *)(param_1 + 0x2a34) & 0xfffffffb;
  }
  return;
}


```

#### `FUN_1001ff5c0` @ `0x1001ff5c0`

```c

void FUN_1001ff5c0(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *local_50 [2];
  char local_39;
  float local_38;
  float local_34;
  
  if (DAT_101d23050 != 0) {
    lVar3 = FUN_10002f320();
    uVar1 = *(ulong *)(lVar3 + 0xe1a0);
    if (-1 < (char)*(byte *)(lVar3 + 0xe1af)) {
      uVar1 = (ulong)*(byte *)(lVar3 + 0xe1af);
    }
    if ((uVar1 != 0x12) ||
       (iVar2 = std::string::compare(lVar3 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e4aba),
       iVar2 != 0)) {
      FUN_100641464(&local_34,&local_38);
      FUN_10001549c(local_50,"endOfSeasonRewards");
      iVar2 = FUN_1000e6f00(local_34 * 0.5,local_38 * 0.5,0x3f99999a,&DAT_101d23050,local_50,1);
      if (local_39 < '\0') {
        operator_delete(local_50[0]);
      }
      if (iVar2 != 0) {
        FUN_1000ec1cc(&DAT_101d23050,0);
      }
    }
  }
  return;
}


```

##### Caller: `thunk_FUN_1001ff5c0` @ `0x1001ffaf8`

```c

void thunk_FUN_1001ff5c0(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *apvStack_50 [2];
  char cStack_39;
  float fStack_38;
  float fStack_34;
  
  if (DAT_101d23050 != 0) {
    lVar3 = FUN_10002f320();
    uVar1 = *(ulong *)(lVar3 + 0xe1a0);
    if (-1 < (char)*(byte *)(lVar3 + 0xe1af)) {
      uVar1 = (ulong)*(byte *)(lVar3 + 0xe1af);
    }
    if ((uVar1 != 0x12) ||
       (iVar2 = std::string::compare(lVar3 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e4aba),
       iVar2 != 0)) {
      FUN_100641464(&fStack_34,&fStack_38);
      FUN_10001549c(apvStack_50,"endOfSeasonRewards");
      iVar2 = FUN_1000e6f00(fStack_34 * 0.5,fStack_38 * 0.5,0x3f99999a,&DAT_101d23050,apvStack_50,1)
      ;
      if (cStack_39 < '\0') {
        operator_delete(apvStack_50[0]);
      }
      if (iVar2 != 0) {
        FUN_1000ec1cc(&DAT_101d23050,0);
      }
    }
  }
  return;
}


```

### `MAIN_SEASON_TROPHY_GUILD_TOOLTIP`

**Addresses:** `0x1013e768c`

#### `FUN_10023bd9c` @ `0x10023bd9c`

```c

void FUN_10023bd9c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80 [2];
  char local_69;
  undefined8 local_50;
  undefined4 local_38;
  
  FUN_1001e6c4c();
  FUN_100143bec(FUN_10023c048,FUN_10023c04c);
  FUN_100237f94(param_1 + 0x7d3,(char)param_1[0xc8c7]);
  plVar1 = param_1 + 0x679;
  uVar3 = FUN_1001c94f4(plVar1);
  (**(code **)(*(long *)param_1[(uVar3 & 0xffffffff) + 0x676] + 0x140))
            ((long *)param_1[(uVar3 & 0xffffffff) + 0x676],param_2);
  if ((int)param_2 == 0) {
    if ((*(byte *)((long)param_1 + 0x5ca1c) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010023c044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,1);
      return;
    }
  }
  else {
    FUN_10023c050();
    FUN_10023c094(param_1);
    if (param_1[0xc8bc] == 0) {
      uVar3 = FUN_1001c94f4(plVar1);
      if (param_1[(uVar3 & 0xffffffff) + 0x676] != 0) {
        uVar3 = FUN_1001c94f4(plVar1);
        param_1[0xc8bc] = param_1[(uVar3 & 0xffffffff) + 0x676];
      }
    }
    FUN_10023c368(param_1);
    if ((((char)param_1[0xc8c7] != '\0') && (iVar2 = FUN_100130330(), iVar2 != 0)) &&
       (uVar3 = FUN_10013033c("seasonGuildTrophy"), (uVar3 & 1) == 0)) {
      thunk_FUN_1001cd434(&local_e0);
      uVar4 = FUN_1004e0150("MAIN_SEASON_TROPHY_GUILD_TOOLTIP",0);
      thunk_FUN_1004e439c(auStack_f0,uVar4);
      thunk_FUN_1004e439c(&local_128,auStack_f0);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_d8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      local_b0 = FUN_1001c94fc(plVar1,2);
      local_38 = 1;
      local_50 = 0x441600003f000000;
      FUN_10001549c(&local_128,"seasonGuildTrophy");
      std::string::operator=((string *)local_80,(string *)&local_128);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      uVar4 = FUN_10002f320();
      FUN_10001549c(&local_128,"seasonTrophy");
      FUN_100030e74(uVar4,&local_128,&local_e0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
      }
      local_e0 = &PTR_FUN_1014666e0;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_10003c1ec(auStack_d8,1);
    }
  }
  return;
}


```

##### Caller: `FUN_10021aa40` @ `0x10021aa40`

```c

void FUN_10021aa40(long param_1)

{
  undefined4 local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  fStack_3c = local_38 + -100.0;
  local_40 = FUN_1001b36cc(local_34 + -200.0,param_1);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e68c(0,0,param_1 + 0x66348,8);
  param_1 = param_1 + 0x1d08;
  FUN_10064e48c(param_1,&local_40);
  FUN_10023bd9c(param_1,1);
  FUN_10023df24(param_1,1);
  FUN_1001e6da4(param_1,1);
  return;
}


```

##### Caller: `FUN_10021ab1c` @ `0x10021ab1c`

```c

void FUN_10021ab1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1d08;
  FUN_10023bd9c(lVar1,0);
  FUN_10023df24(lVar1,0);
  FUN_1001e6da4(lVar1,0);
  thunk_FUN_1001b3a68(param_1);
  DAT_101d237a8 = 0;
  return;
}


```

## 3. Season/Seasonal Data Constants

### `endSeasonEpoch`

**Addresses:** `0x1013dc860`

#### `FUN_1001320a4` @ `0x1001320a4`

```c

void FUN_1001320a4(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_2,"endSeasonEpoch");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar1) {
LAB_100132114:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "endSeasonEpoch";
    uStack_40 = 0xe;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 4 & 1) == 0) goto LAB_100132114;
    local_38 = 0x100005;
    local_48 = "endSeasonEpoch";
    uStack_40 = 0xe;
    puVar2 = (undefined8 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar2;
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  lVar1 = FUN_1000e86c0(param_2,"seasonIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "seasonIndex";
    uStack_40 = 0xb;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "seasonIndex";
      uStack_40 = 0xb;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
      uVar4 = *puVar3;
      goto LAB_1001321ac;
    }
  }
  uVar4 = 0;
LAB_1001321ac:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}


```

### `seasonIndex`

**Addresses:** `0x1013dc5d8`

#### `FUN_1001320a4` @ `0x1001320a4`

```c

void FUN_1001320a4(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_2,"endSeasonEpoch");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar1) {
LAB_100132114:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "endSeasonEpoch";
    uStack_40 = 0xe;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 4 & 1) == 0) goto LAB_100132114;
    local_38 = 0x100005;
    local_48 = "endSeasonEpoch";
    uStack_40 = 0xe;
    puVar2 = (undefined8 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar2;
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  lVar1 = FUN_1000e86c0(param_2,"seasonIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "seasonIndex";
    uStack_40 = 0xb;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "seasonIndex";
      uStack_40 = 0xb;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
      uVar4 = *puVar3;
      goto LAB_1001321ac;
    }
  }
  uVar4 = 0;
LAB_1001321ac:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}


```

### `getSeasonRewardsManifest`

**Addresses:** `0x10141bb84`

#### `FUN_100500914` @ `0x100500914`

```c

undefined8 FUN_100500914(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getSeasonRewardsManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}


```

### `attemptRedeemSeasonalAscensionChest`

**Addresses:** `0x10141bc6c`

#### `FUN_100501a94` @ `0x100501a94`

```c

undefined8 FUN_100501a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"attemptRedeemSeasonalAscensionChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}


```

### `seasonBattlePassRankCollectedMap`

**Addresses:** `0x1013d721f`

#### `FUN_1000fbca0` @ `0x1000fbca0`

```c

void FUN_1000fbca0(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  float fVar17;
  double dVar18;
  void *local_230 [2];
  char local_219;
  void *local_218 [2];
  char local_201;
  void *local_200 [2];
  char local_1e9;
  void *local_1e8 [2];
  char local_1d1;
  void *local_1d0 [2];
  char local_1b9;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  void *local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  char *local_158;
  char *pcStack_150;
  undefined4 local_148;
  char local_141;
  void *local_140;
  char local_129;
  void *local_128;
  char local_111;
  void *local_110;
  char local_f9;
  long local_e0;
  ulong local_d8;
  int local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 local_80;
  
  FUN_1000fbb10();
  if (*(char *)(param_2 + 0x25) == '\0') {
    return;
  }
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_158 = *(char **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_158 = (char *)(param_2 + 0x28);
  }
  pcStack_150 = local_158;
  local_c0 = local_c8;
  FUN_1000f7bd0(&local_e0,&local_158);
  if ((local_88 != 0) || (local_d0 != 3)) goto LAB_1000fcd38;
  lVar3 = FUN_1000e86c0(&local_e0,"systemActive");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 == lVar3) {
LAB_1000fbda4:
    bVar1 = false;
  }
  else {
    local_148 = 0x100005;
    local_158 = "systemActive";
    pcStack_150 = (char *)0xc;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_1000fbda4;
    local_148 = 0x100005;
    local_158 = "systemActive";
    pcStack_150 = (char *)0xc;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2c0) = bVar1;
  lVar3 = FUN_1000e86c0(&local_e0,"seasonalBundles");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "seasonalBundles";
    pcStack_150 = (char *)0xf;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "seasonalBundles";
      pcStack_150 = (char *)0xf;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      uVar2 = *(uint *)(plVar4 + 1);
      if (uVar2 != 0) {
        if (*(int *)(*plVar4 + 0x10) != 0) {
          FUN_1000e8538(*plVar4,param_1 + 0xb8);
          uVar2 = *(uint *)(plVar4 + 1);
        }
        if ((1 < uVar2) && (*(int *)(*plVar4 + 0x28) != 0)) {
          FUN_1000e8538(*plVar4 + 0x18,param_1 + 0x100);
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"seasonalChestExchanges");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "seasonalChestExchanges";
    pcStack_150 = (char *)0x16;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "seasonalChestExchanges";
      pcStack_150 = (char *)0x16;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      uVar2 = *(uint *)(plVar4 + 1);
      if (uVar2 != 0) {
        if (*(int *)(*plVar4 + 0x10) != 0) {
          FUN_1000e8538(*plVar4,param_1 + 0x148);
          uVar2 = *(uint *)(plVar4 + 1);
        }
        if ((1 < uVar2) && (*(int *)(*plVar4 + 0x10) != 0)) {
          FUN_1000e8538(*plVar4 + 0x18,param_1 + 400);
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"rankModels");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "rankModels";
    pcStack_150 = (char *)0xa;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "rankModels";
      pcStack_150 = (char *)0xa;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      if ((int)plVar4[1] != 0) {
        plVar11 = (long *)*plVar4;
        pcVar6 = "";
        do {
          lVar3 = FUN_1000e86c0(plVar11,"seasonId");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "seasonId";
            pcStack_150 = (char *)0x8;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "seasonId";
              pcStack_150 = (char *)0x8;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_170,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"dailyChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "dailyChestHashedSku";
            pcStack_150 = (char *)0x13;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "dailyChestHashedSku";
              pcStack_150 = (char *)0x13;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_188,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"rankUpChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "rankUpChestHashedSku";
            pcStack_150 = (char *)0x14;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "rankUpChestHashedSku";
              pcStack_150 = (char *)0x14;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_1a0,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"battlePassRankUpChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "battlePassRankUpChestHashedSku";
            pcStack_150 = (char *)0x1e;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVa
// ...truncated...
```

### `seasonRankCollectedMap`

**Addresses:** `0x1013d7208`

#### `FUN_1000fbca0` @ `0x1000fbca0`

```c

void FUN_1000fbca0(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  float fVar17;
  double dVar18;
  void *local_230 [2];
  char local_219;
  void *local_218 [2];
  char local_201;
  void *local_200 [2];
  char local_1e9;
  void *local_1e8 [2];
  char local_1d1;
  void *local_1d0 [2];
  char local_1b9;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  void *local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  char *local_158;
  char *pcStack_150;
  undefined4 local_148;
  char local_141;
  void *local_140;
  char local_129;
  void *local_128;
  char local_111;
  void *local_110;
  char local_f9;
  long local_e0;
  ulong local_d8;
  int local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 local_80;
  
  FUN_1000fbb10();
  if (*(char *)(param_2 + 0x25) == '\0') {
    return;
  }
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_158 = *(char **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_158 = (char *)(param_2 + 0x28);
  }
  pcStack_150 = local_158;
  local_c0 = local_c8;
  FUN_1000f7bd0(&local_e0,&local_158);
  if ((local_88 != 0) || (local_d0 != 3)) goto LAB_1000fcd38;
  lVar3 = FUN_1000e86c0(&local_e0,"systemActive");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 == lVar3) {
LAB_1000fbda4:
    bVar1 = false;
  }
  else {
    local_148 = 0x100005;
    local_158 = "systemActive";
    pcStack_150 = (char *)0xc;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_1000fbda4;
    local_148 = 0x100005;
    local_158 = "systemActive";
    pcStack_150 = (char *)0xc;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2c0) = bVar1;
  lVar3 = FUN_1000e86c0(&local_e0,"seasonalBundles");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "seasonalBundles";
    pcStack_150 = (char *)0xf;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "seasonalBundles";
      pcStack_150 = (char *)0xf;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      uVar2 = *(uint *)(plVar4 + 1);
      if (uVar2 != 0) {
        if (*(int *)(*plVar4 + 0x10) != 0) {
          FUN_1000e8538(*plVar4,param_1 + 0xb8);
          uVar2 = *(uint *)(plVar4 + 1);
        }
        if ((1 < uVar2) && (*(int *)(*plVar4 + 0x28) != 0)) {
          FUN_1000e8538(*plVar4 + 0x18,param_1 + 0x100);
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"seasonalChestExchanges");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "seasonalChestExchanges";
    pcStack_150 = (char *)0x16;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "seasonalChestExchanges";
      pcStack_150 = (char *)0x16;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      uVar2 = *(uint *)(plVar4 + 1);
      if (uVar2 != 0) {
        if (*(int *)(*plVar4 + 0x10) != 0) {
          FUN_1000e8538(*plVar4,param_1 + 0x148);
          uVar2 = *(uint *)(plVar4 + 1);
        }
        if ((1 < uVar2) && (*(int *)(*plVar4 + 0x10) != 0)) {
          FUN_1000e8538(*plVar4 + 0x18,param_1 + 400);
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"rankModels");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "rankModels";
    pcStack_150 = (char *)0xa;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "rankModels";
      pcStack_150 = (char *)0xa;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      if ((int)plVar4[1] != 0) {
        plVar11 = (long *)*plVar4;
        pcVar6 = "";
        do {
          lVar3 = FUN_1000e86c0(plVar11,"seasonId");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "seasonId";
            pcStack_150 = (char *)0x8;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "seasonId";
              pcStack_150 = (char *)0x8;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_170,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"dailyChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "dailyChestHashedSku";
            pcStack_150 = (char *)0x13;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "dailyChestHashedSku";
              pcStack_150 = (char *)0x13;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_188,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"rankUpChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "rankUpChestHashedSku";
            pcStack_150 = (char *)0x14;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "rankUpChestHashedSku";
              pcStack_150 = (char *)0x14;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_1a0,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"battlePassRankUpChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "battlePassRankUpChestHashedSku";
            pcStack_150 = (char *)0x1e;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVa
// ...truncated...
```

