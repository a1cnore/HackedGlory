# UI Event Dispatch System

Analysis of the E.V.I.L. engine's UI event dispatch mechanism.

---

### `UI::EVENT_MENU_PANEL_CHANGE`

**String addresses:** `0x1013e315a`

#### `FUN_1001e338c` @ `0x1001e338c`

Referenced from: `0x1001e3414`

**Calls:** `FUN_100644a94`

```c

void FUN_1001e338c(void)

{
  DAT_101d23650 = FUN_100644a94("UI::EVENT_MENU_ENTER_LOBBY");
  DAT_101d23654 = FUN_100644a94("UI::EVENT_MENU_LOBBY_FINISHED");
  DAT_101d23658 = FUN_100644a94("UI::EVENT_MENU_REQUEST_ENTER_PROFILE");
  DAT_101d2365c = FUN_100644a94("UI::EVENT_MENU_REQUEST_PLATFORM_NOTIFICATION");
  DAT_101d23660 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CLOSE_PLATFORM_NOTIFICATION");
  DAT_101d23664 = FUN_100644a94("UI::EVENT_MENU_OPEN_URL");
  DAT_101d23668 = FUN_100644a94("UI::EVENT_MENU_PANEL_CHANGE");
  DAT_101d2366c = FUN_100644a94("UI::EVENT_MENU_YOU_ARE_READY");
  DAT_101d23670 = FUN_100644a94("UI::EVENT_MENU_PLAYER_NAME_UPDATED");
  DAT_101d23674 = FUN_100644a94("UI::EVENT_MENU_SEASON_REWARD_NOTIFICATION");
  DAT_101d23678 = FUN_100644a94("UI::EVENT_MENU_SHOW_ROOT");
  DAT_101d2367c = FUN_100644a94("UI::EVENT_MENU_LOG_OUT");
  DAT_101d23680 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CACHE_URL_IMAGE");
  DAT_101d23684 = FUN_100644a94("UI::EVENT_MENU_CHECK_TODAY_IN_VAINGLORY");
  DAT_101d23688 = FUN_100644a94("UI::EVENT_USER_INTENT_PLAY_NOPLAT");
  DAT_101d2368c = DAT_101d23650;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_SCREEN_SHOW`

**String addresses:** `0x10141d07a`

#### `FUN_100538e54` @ `0x100538e54`

Referenced from: `0x100539054`

**Calls:** `FUN_100644a94`

```c

void FUN_100538e54(void)

{
  DAT_101e947b8 = 0xff;
  DAT_101e947ba = 0xffff;
  DAT_101e947bc = 0xffff;
  DAT_101d91888 = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_HORIZONTAL_MOVE");
  DAT_101d9188c = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_VERTICAL_MOVE");
  DAT_101d91890 = FUN_100644a94("UI::EVENT_POPUP_OPEN");
  DAT_101d91894 = FUN_100644a94("UI::EVENT_POPUP_CLOSE");
  DAT_101d91898 = FUN_100644a94("UI::EVENT_POPUP_FOREGROUND");
  DAT_101d9189c = FUN_100644a94("UI::EVENT_POPUP_BACKGROUND");
  DAT_101d918a0 = FUN_100644a94("UI::EVENT_POPUP_STACK_EMPTY");
  DAT_101d918a4 = FUN_100644a94("UI::EVENT_POPUP_STACK_ACTIVE");
  DAT_101e947c0 = 0x4326000041900000;
  DAT_101e947c8 = 0x4326000041c00000;
  DAT_101e947d0 = 0x3f8000003ecccccd;
  DAT_101e947d8 = 0x3ecccccd3f800000;
  DAT_101d918b4 = FUN_100644a94("UI::EVENT_SCROLLVIEW_HORIZONTAL_MOVE");
  DAT_101d918b8 = FUN_100644a94("UI::EVENT_SCROLLVIEW_VERTICAL_MOVE");
  DAT_101d918c0 = FUN_100644a94("UI::EVENT_DIALOG");
  DAT_101d918c4 = FUN_100644a94("UI::EVENT_DIALOG_ACCEPT");
  DAT_101d918c8 = FUN_100644a94("UI::EVENT_DIALOG_REJECT");
  DAT_101d918cc = FUN_100644a94("UI::EVENT_SELECT");
  DAT_101d91884 = FUN_100644a94("UI::EVENT_SELECT_ITEM");
  DAT_101d918bc = FUN_100644a94("UI::EVENT_DESELECT_ITEM");
  DAT_101d918d0 = FUN_100644a94("UI::EVENT_DOUBLE_CLICK");
  DAT_101d918d4 = FUN_100644a94("UI::EVENT_FOREGROUND");
  DAT_101d918d8 = FUN_100644a94("UI::EVENT_BACKGROUND");
  DAT_101d918dc = FUN_100644a94("UI::EVENT_SCREEN");
  DAT_101d918ac = FUN_100644a94("UI::EVENT_SCREEN_SHOW");
  DAT_101d918a8 = FUN_100644a94("UI::EVENT_SCREEN_HIDE");
  DAT_101d918b0 = FUN_100644a94("UI::EVENT_SCREEN_HIDDEN");
  DAT_101d918e0 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_STARTED");
  DAT_101d918e4 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_CANCELED");
  DAT_101d918e8 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_COMPLETED");
  DAT_101d918ec = DAT_101d918cc;
  DAT_101d918f0 = DAT_101d918dc;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_MENU_SHOW_ROOT`

**String addresses:** `0x1013e31e0`

#### `FUN_1001e338c` @ `0x1001e338c`

Referenced from: `0x1001e3464`

**Calls:** `FUN_100644a94`

```c

void FUN_1001e338c(void)

{
  DAT_101d23650 = FUN_100644a94("UI::EVENT_MENU_ENTER_LOBBY");
  DAT_101d23654 = FUN_100644a94("UI::EVENT_MENU_LOBBY_FINISHED");
  DAT_101d23658 = FUN_100644a94("UI::EVENT_MENU_REQUEST_ENTER_PROFILE");
  DAT_101d2365c = FUN_100644a94("UI::EVENT_MENU_REQUEST_PLATFORM_NOTIFICATION");
  DAT_101d23660 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CLOSE_PLATFORM_NOTIFICATION");
  DAT_101d23664 = FUN_100644a94("UI::EVENT_MENU_OPEN_URL");
  DAT_101d23668 = FUN_100644a94("UI::EVENT_MENU_PANEL_CHANGE");
  DAT_101d2366c = FUN_100644a94("UI::EVENT_MENU_YOU_ARE_READY");
  DAT_101d23670 = FUN_100644a94("UI::EVENT_MENU_PLAYER_NAME_UPDATED");
  DAT_101d23674 = FUN_100644a94("UI::EVENT_MENU_SEASON_REWARD_NOTIFICATION");
  DAT_101d23678 = FUN_100644a94("UI::EVENT_MENU_SHOW_ROOT");
  DAT_101d2367c = FUN_100644a94("UI::EVENT_MENU_LOG_OUT");
  DAT_101d23680 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CACHE_URL_IMAGE");
  DAT_101d23684 = FUN_100644a94("UI::EVENT_MENU_CHECK_TODAY_IN_VAINGLORY");
  DAT_101d23688 = FUN_100644a94("UI::EVENT_USER_INTENT_PLAY_NOPLAT");
  DAT_101d2368c = DAT_101d23650;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_SWITCH_TO_TAB`

**String addresses:** `0x1013e5ccd`

#### `FUN_10025dacc` @ `0x10025dacc`

Referenced from: `0x10025dae8`

**Calls:** `FUN_100644a94`, `FUN_100644aec`, `FUN_100644c34`

```c

void FUN_10025dacc(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_SWITCH_TO_TAB");
  FUN_100644aec(auStack_40,uVar1,param_2);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}


```

#### `FUN_100221ff0` @ `0x100221ff0`

Referenced from: `0x1002224e0`

**Calls:** `FUN_1006513c0`, `FUN_1001b339c`, `FUN_1001b316c`, `thunk_FUN_10025c044`, `FUN_100642bd8`, `FUN_1000200a0`, `FUN_1001c3fc8`, `FUN_10001554c`, `FUN_100651038`, `FUN_10015d3ec`, `thunk_FUN_1006421a8`, `FUN_100651460`, `FUN_1001b33b8`, `FUN_10014f4a0`, `FUN_100644a94`, ...

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

**Caller functions:**

#### Caller: `FUN_10025cd70` @ `0x10025cd70`

Calls: `FUN_10025dacc`

```c

void FUN_10025cd70(long param_1,long param_2,uint param_3,int param_4)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  ushort uVar7;
  float fVar8;
  float local_68;
  undefined1 auStack_64 [4];
  
  FUN_100641464(auStack_64,&local_68);
  if (param_4 == 0) {
    if (param_3 != (*(uint *)(param_2 + 0x84) & 4) >> 2) {
      lVar3 = param_2;
      if (param_3 == 0) {
        lVar3 = param_1 + 0x7e08;
      }
      uVar6 = FUN_1006408f4(0,0,0x3f4ccccd,FUN_1000917d4);
      FUN_100642324(lVar3);
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
      FUN_100642b14(lVar3,uVar6);
      lVar3 = param_1 + 0x7e08;
      if (param_3 == 0) {
        lVar3 = param_2;
      }
      if (param_3 == 0) {
        local_68 = -local_68;
      }
      uVar6 = FUN_1006408f4(0,local_68,0x3f4ccccd,FUN_1000917d4);
      lVar4 = DAT_101dbd2f8;
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar7 != 0xffff) {
        puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar1;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_10063ee9c(puVar1);
        *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_100642324(lVar3);
      FUN_100642b7c(lVar3,uVar6);
    }
  }
  else {
    bVar5 = param_3 == 0;
    uVar2 = 4;
    if (bVar5) {
      uVar2 = 0;
    }
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb | uVar2;
    uVar2 = 0;
    if (bVar5) {
      uVar2 = 4;
    }
    *(uint *)(param_1 + 0x7e8c) = *(uint *)(param_1 + 0x7e8c) & 0xfffffffb | uVar2;
    fVar8 = 0.0;
    if (bVar5) {
      fVar8 = -local_68;
    }
    if (*(float *)(param_2 + 0x44) != fVar8) {
      *(float *)(param_2 + 0x44) = fVar8;
      FUN_1000200a0(param_2);
    }
    if (param_3 == 0) {
      local_68 = 0.0;
    }
    if (*(float *)(param_1 + 0x7e4c) != local_68) {
      *(float *)(param_1 + 0x7e4c) = local_68;
      FUN_1000200a0(param_1 + 0x7e08);
    }
  }
  if ((param_3 & 1) == 0) {
    FUN_1002583c0(param_1 + 0x8ac0);
    FUN_10025dacc(param_1,0);
  }
  return;
}


```

#### Caller: `FUN_10025da64` @ `0x10025da64`

Calls: `FUN_10025dacc`

```c

void FUN_10025da64(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x254) >> 2 & 1) != 0) {
      FUN_10025cd70(param_1,param_1 + 0x1d0,0,1);
    }
    if (*(int *)(param_1 + 0x25f54) != 0) {
      FUN_10025dacc(param_1,0);
    }
  }
  FUN_1002576c0(param_1 + 0x8ac0,param_2);
  return;
}


```

#### Caller: `FUN_100221f98` @ `0x100221f98`

Calls: `FUN_100221ff0`

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


---

### `UI::EVENT_POPUP_OPEN`

**String addresses:** `0x10141ce59`

#### `FUN_100538e54` @ `0x100538e54`

Referenced from: `0x100538eac`

**Calls:** `FUN_100644a94`

```c

void FUN_100538e54(void)

{
  DAT_101e947b8 = 0xff;
  DAT_101e947ba = 0xffff;
  DAT_101e947bc = 0xffff;
  DAT_101d91888 = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_HORIZONTAL_MOVE");
  DAT_101d9188c = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_VERTICAL_MOVE");
  DAT_101d91890 = FUN_100644a94("UI::EVENT_POPUP_OPEN");
  DAT_101d91894 = FUN_100644a94("UI::EVENT_POPUP_CLOSE");
  DAT_101d91898 = FUN_100644a94("UI::EVENT_POPUP_FOREGROUND");
  DAT_101d9189c = FUN_100644a94("UI::EVENT_POPUP_BACKGROUND");
  DAT_101d918a0 = FUN_100644a94("UI::EVENT_POPUP_STACK_EMPTY");
  DAT_101d918a4 = FUN_100644a94("UI::EVENT_POPUP_STACK_ACTIVE");
  DAT_101e947c0 = 0x4326000041900000;
  DAT_101e947c8 = 0x4326000041c00000;
  DAT_101e947d0 = 0x3f8000003ecccccd;
  DAT_101e947d8 = 0x3ecccccd3f800000;
  DAT_101d918b4 = FUN_100644a94("UI::EVENT_SCROLLVIEW_HORIZONTAL_MOVE");
  DAT_101d918b8 = FUN_100644a94("UI::EVENT_SCROLLVIEW_VERTICAL_MOVE");
  DAT_101d918c0 = FUN_100644a94("UI::EVENT_DIALOG");
  DAT_101d918c4 = FUN_100644a94("UI::EVENT_DIALOG_ACCEPT");
  DAT_101d918c8 = FUN_100644a94("UI::EVENT_DIALOG_REJECT");
  DAT_101d918cc = FUN_100644a94("UI::EVENT_SELECT");
  DAT_101d91884 = FUN_100644a94("UI::EVENT_SELECT_ITEM");
  DAT_101d918bc = FUN_100644a94("UI::EVENT_DESELECT_ITEM");
  DAT_101d918d0 = FUN_100644a94("UI::EVENT_DOUBLE_CLICK");
  DAT_101d918d4 = FUN_100644a94("UI::EVENT_FOREGROUND");
  DAT_101d918d8 = FUN_100644a94("UI::EVENT_BACKGROUND");
  DAT_101d918dc = FUN_100644a94("UI::EVENT_SCREEN");
  DAT_101d918ac = FUN_100644a94("UI::EVENT_SCREEN_SHOW");
  DAT_101d918a8 = FUN_100644a94("UI::EVENT_SCREEN_HIDE");
  DAT_101d918b0 = FUN_100644a94("UI::EVENT_SCREEN_HIDDEN");
  DAT_101d918e0 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_STARTED");
  DAT_101d918e4 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_CANCELED");
  DAT_101d918e8 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_COMPLETED");
  DAT_101d918ec = DAT_101d918cc;
  DAT_101d918f0 = DAT_101d918dc;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_POPUP_CLOSE`

**String addresses:** `0x10141ce6e`

#### `FUN_100538e54` @ `0x100538e54`

Referenced from: `0x100538ec0`

**Calls:** `FUN_100644a94`

```c

void FUN_100538e54(void)

{
  DAT_101e947b8 = 0xff;
  DAT_101e947ba = 0xffff;
  DAT_101e947bc = 0xffff;
  DAT_101d91888 = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_HORIZONTAL_MOVE");
  DAT_101d9188c = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_VERTICAL_MOVE");
  DAT_101d91890 = FUN_100644a94("UI::EVENT_POPUP_OPEN");
  DAT_101d91894 = FUN_100644a94("UI::EVENT_POPUP_CLOSE");
  DAT_101d91898 = FUN_100644a94("UI::EVENT_POPUP_FOREGROUND");
  DAT_101d9189c = FUN_100644a94("UI::EVENT_POPUP_BACKGROUND");
  DAT_101d918a0 = FUN_100644a94("UI::EVENT_POPUP_STACK_EMPTY");
  DAT_101d918a4 = FUN_100644a94("UI::EVENT_POPUP_STACK_ACTIVE");
  DAT_101e947c0 = 0x4326000041900000;
  DAT_101e947c8 = 0x4326000041c00000;
  DAT_101e947d0 = 0x3f8000003ecccccd;
  DAT_101e947d8 = 0x3ecccccd3f800000;
  DAT_101d918b4 = FUN_100644a94("UI::EVENT_SCROLLVIEW_HORIZONTAL_MOVE");
  DAT_101d918b8 = FUN_100644a94("UI::EVENT_SCROLLVIEW_VERTICAL_MOVE");
  DAT_101d918c0 = FUN_100644a94("UI::EVENT_DIALOG");
  DAT_101d918c4 = FUN_100644a94("UI::EVENT_DIALOG_ACCEPT");
  DAT_101d918c8 = FUN_100644a94("UI::EVENT_DIALOG_REJECT");
  DAT_101d918cc = FUN_100644a94("UI::EVENT_SELECT");
  DAT_101d91884 = FUN_100644a94("UI::EVENT_SELECT_ITEM");
  DAT_101d918bc = FUN_100644a94("UI::EVENT_DESELECT_ITEM");
  DAT_101d918d0 = FUN_100644a94("UI::EVENT_DOUBLE_CLICK");
  DAT_101d918d4 = FUN_100644a94("UI::EVENT_FOREGROUND");
  DAT_101d918d8 = FUN_100644a94("UI::EVENT_BACKGROUND");
  DAT_101d918dc = FUN_100644a94("UI::EVENT_SCREEN");
  DAT_101d918ac = FUN_100644a94("UI::EVENT_SCREEN_SHOW");
  DAT_101d918a8 = FUN_100644a94("UI::EVENT_SCREEN_HIDE");
  DAT_101d918b0 = FUN_100644a94("UI::EVENT_SCREEN_HIDDEN");
  DAT_101d918e0 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_STARTED");
  DAT_101d918e4 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_CANCELED");
  DAT_101d918e8 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_COMPLETED");
  DAT_101d918ec = DAT_101d918cc;
  DAT_101d918f0 = DAT_101d918dc;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_SCREEN_HIDE`

**String addresses:** `0x10141d090`

#### `FUN_100538e54` @ `0x100538e54`

Referenced from: `0x100539068`

**Calls:** `FUN_100644a94`

```c

void FUN_100538e54(void)

{
  DAT_101e947b8 = 0xff;
  DAT_101e947ba = 0xffff;
  DAT_101e947bc = 0xffff;
  DAT_101d91888 = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_HORIZONTAL_MOVE");
  DAT_101d9188c = FUN_100644a94("UI::EVENT_FLICKABLE_LAYER_VERTICAL_MOVE");
  DAT_101d91890 = FUN_100644a94("UI::EVENT_POPUP_OPEN");
  DAT_101d91894 = FUN_100644a94("UI::EVENT_POPUP_CLOSE");
  DAT_101d91898 = FUN_100644a94("UI::EVENT_POPUP_FOREGROUND");
  DAT_101d9189c = FUN_100644a94("UI::EVENT_POPUP_BACKGROUND");
  DAT_101d918a0 = FUN_100644a94("UI::EVENT_POPUP_STACK_EMPTY");
  DAT_101d918a4 = FUN_100644a94("UI::EVENT_POPUP_STACK_ACTIVE");
  DAT_101e947c0 = 0x4326000041900000;
  DAT_101e947c8 = 0x4326000041c00000;
  DAT_101e947d0 = 0x3f8000003ecccccd;
  DAT_101e947d8 = 0x3ecccccd3f800000;
  DAT_101d918b4 = FUN_100644a94("UI::EVENT_SCROLLVIEW_HORIZONTAL_MOVE");
  DAT_101d918b8 = FUN_100644a94("UI::EVENT_SCROLLVIEW_VERTICAL_MOVE");
  DAT_101d918c0 = FUN_100644a94("UI::EVENT_DIALOG");
  DAT_101d918c4 = FUN_100644a94("UI::EVENT_DIALOG_ACCEPT");
  DAT_101d918c8 = FUN_100644a94("UI::EVENT_DIALOG_REJECT");
  DAT_101d918cc = FUN_100644a94("UI::EVENT_SELECT");
  DAT_101d91884 = FUN_100644a94("UI::EVENT_SELECT_ITEM");
  DAT_101d918bc = FUN_100644a94("UI::EVENT_DESELECT_ITEM");
  DAT_101d918d0 = FUN_100644a94("UI::EVENT_DOUBLE_CLICK");
  DAT_101d918d4 = FUN_100644a94("UI::EVENT_FOREGROUND");
  DAT_101d918d8 = FUN_100644a94("UI::EVENT_BACKGROUND");
  DAT_101d918dc = FUN_100644a94("UI::EVENT_SCREEN");
  DAT_101d918ac = FUN_100644a94("UI::EVENT_SCREEN_SHOW");
  DAT_101d918a8 = FUN_100644a94("UI::EVENT_SCREEN_HIDE");
  DAT_101d918b0 = FUN_100644a94("UI::EVENT_SCREEN_HIDDEN");
  DAT_101d918e0 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_STARTED");
  DAT_101d918e4 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_CANCELED");
  DAT_101d918e8 = FUN_100644a94("UI::EVENT_TAP_AND_HOLD_COMPLETED");
  DAT_101d918ec = DAT_101d918cc;
  DAT_101d918f0 = DAT_101d918dc;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_MENU_ENTER_LOBBY`

**String addresses:** `0x1013e3084`

#### `FUN_1001e338c` @ `0x1001e338c`

Referenced from: `0x1001e339c`

**Calls:** `FUN_100644a94`

```c

void FUN_1001e338c(void)

{
  DAT_101d23650 = FUN_100644a94("UI::EVENT_MENU_ENTER_LOBBY");
  DAT_101d23654 = FUN_100644a94("UI::EVENT_MENU_LOBBY_FINISHED");
  DAT_101d23658 = FUN_100644a94("UI::EVENT_MENU_REQUEST_ENTER_PROFILE");
  DAT_101d2365c = FUN_100644a94("UI::EVENT_MENU_REQUEST_PLATFORM_NOTIFICATION");
  DAT_101d23660 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CLOSE_PLATFORM_NOTIFICATION");
  DAT_101d23664 = FUN_100644a94("UI::EVENT_MENU_OPEN_URL");
  DAT_101d23668 = FUN_100644a94("UI::EVENT_MENU_PANEL_CHANGE");
  DAT_101d2366c = FUN_100644a94("UI::EVENT_MENU_YOU_ARE_READY");
  DAT_101d23670 = FUN_100644a94("UI::EVENT_MENU_PLAYER_NAME_UPDATED");
  DAT_101d23674 = FUN_100644a94("UI::EVENT_MENU_SEASON_REWARD_NOTIFICATION");
  DAT_101d23678 = FUN_100644a94("UI::EVENT_MENU_SHOW_ROOT");
  DAT_101d2367c = FUN_100644a94("UI::EVENT_MENU_LOG_OUT");
  DAT_101d23680 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CACHE_URL_IMAGE");
  DAT_101d23684 = FUN_100644a94("UI::EVENT_MENU_CHECK_TODAY_IN_VAINGLORY");
  DAT_101d23688 = FUN_100644a94("UI::EVENT_USER_INTENT_PLAY_NOPLAT");
  DAT_101d2368c = DAT_101d23650;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_MENU_LOG_OUT`

**String addresses:** `0x1013e31f9`

#### `FUN_1001e338c` @ `0x1001e338c`

Referenced from: `0x1001e3478`

**Calls:** `FUN_100644a94`

```c

void FUN_1001e338c(void)

{
  DAT_101d23650 = FUN_100644a94("UI::EVENT_MENU_ENTER_LOBBY");
  DAT_101d23654 = FUN_100644a94("UI::EVENT_MENU_LOBBY_FINISHED");
  DAT_101d23658 = FUN_100644a94("UI::EVENT_MENU_REQUEST_ENTER_PROFILE");
  DAT_101d2365c = FUN_100644a94("UI::EVENT_MENU_REQUEST_PLATFORM_NOTIFICATION");
  DAT_101d23660 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CLOSE_PLATFORM_NOTIFICATION");
  DAT_101d23664 = FUN_100644a94("UI::EVENT_MENU_OPEN_URL");
  DAT_101d23668 = FUN_100644a94("UI::EVENT_MENU_PANEL_CHANGE");
  DAT_101d2366c = FUN_100644a94("UI::EVENT_MENU_YOU_ARE_READY");
  DAT_101d23670 = FUN_100644a94("UI::EVENT_MENU_PLAYER_NAME_UPDATED");
  DAT_101d23674 = FUN_100644a94("UI::EVENT_MENU_SEASON_REWARD_NOTIFICATION");
  DAT_101d23678 = FUN_100644a94("UI::EVENT_MENU_SHOW_ROOT");
  DAT_101d2367c = FUN_100644a94("UI::EVENT_MENU_LOG_OUT");
  DAT_101d23680 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CACHE_URL_IMAGE");
  DAT_101d23684 = FUN_100644a94("UI::EVENT_MENU_CHECK_TODAY_IN_VAINGLORY");
  DAT_101d23688 = FUN_100644a94("UI::EVENT_USER_INTENT_PLAY_NOPLAT");
  DAT_101d2368c = DAT_101d23650;
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_MAIN_HUB_NAV_BAR_ON_NAVIGATE`

**String addresses:** `0x1013e4933`

#### `FUN_1001fcd38` @ `0x1001fcd38`

Referenced from: `0x1001fd3f8`

**Calls:** `FUN_100644a94`

```c

void FUN_1001fcd38(void)

{
  DAT_101e43ad8 = 0xff;
  DAT_101e43ada = 0xffff;
  DAT_101e43adc = 0xffff;
  DAT_101e43ade = 0xffbc9c44;
  DAT_101e43ae2 = 0xff1166f2;
  DAT_101e43ae6 = 0xffe0e0e0;
  DAT_101e43aea = 0xffa0a0a0;
  DAT_101e43aee = 0xff8c8c8c;
  DAT_101e43af2 = 0xff322213;
  DAT_101e43af6 = 0xff091911;
  DAT_101e43afa = 0xff170c19;
  DAT_101e43afe = 0xff241a14;
  DAT_101e43b02 = 0xff14171c;
  DAT_101e43b06 = 0xff221911;
  DAT_101e43b0a = 0xff1a1416;
  DAT_101e43b0e = 0xff121414;
  DAT_101e43b12 = 0xff1a1809;
  DAT_101e43b16 = 0xff141414;
  DAT_101e43b1a = 0xff141414;
  DAT_101e43b1e = 0xff2929c0;
  DAT_101e43b22 = 0xff283082;
  DAT_101e43b26 = 0xff5262cc;
  DAT_101e43b2a = 0xff283082;
  DAT_101e43b2e = 0xff5262cc;
  DAT_101e43b32 = 0xff745c42;
  DAT_101e43b36 = 0xff184155;
  DAT_101e43b3a = 0xff92665e;
  DAT_101e43b3e = 0xffbc9c44;
  DAT_101e43b42 = 0xffbbae56;
  DAT_101e43b46 = 0xff8b7b01;
  DAT_101e43b4a = 0xff90b3ef;
  DAT_101e43b4e = 0xff728ebe;
  DAT_101e43b52 = 0xff19459d;
  DAT_101e43b56 = 0xff9d877b;
  DAT_101e43b5a = 0xffcbb1a3;
  DAT_101e43b5e = 0xff3f6fb5;
  DAT_101e43b62 = 0xffc5c5c5;
  DAT_101e43b66 = 0xff4fc1f1;
  DAT_101e43b6a = 0xff606060;
  DAT_101e43b6e = 0xffc5ff7b;
  DAT_101e43b72 = 0xff5271eb;
  DAT_101e43b76 = 0xfffae076;
  DAT_101e43b7a = 0xff3ac8f6;
  DAT_101e43b7e = 0xffaaaaaa;
  DAT_101e43b82 = 0xffe19400;
  DAT_101e43b86 = 0xffe19400;
  DAT_101e43b8a = 0xffe550b2;
  DAT_101e43b8e = 0xfff22ae8;
  DAT_101e43b92 = 0xff005ae1;
  DAT_101e43b96 = 0xff1addfa;
  DAT_101e43b9a = 0xff2424b3;
  DAT_101e43b9e = 0xff2424b3;
  DAT_101e43ba2 = 0xff646464;
  DAT_101e43ba6 = 0xff92665e;
  DAT_101e43baa = 0xff646037;
  DAT_101e43bb4 = 0xff1111a1;
  DAT_101e43bb8 = 0xff321ee1;
  DAT_101e43bbc = 0xffc8c8c8;
  DAT_101e43bc0 = 0xff321ee1;
  DAT_101e43bcc = 0xff6259b3;
  DAT_101e43bd0 = 0xff506e73;
  DAT_101e43bd4 = 0xff9dbf86;
  DAT_101e43bb0 = 0xffffffff;
  DAT_101e43bd8 = 0xffa35244;
  DAT_101e43bc4 = 0xff7fe801;
  DAT_101e43bdc = 0xffca828e;
  DAT_101e43bc8 = 0xffffffff;
  DAT_101e43be0 = 0xffa6a6a6;
  DAT_101e43be4 = 0xffa6a6a6;
  DAT_101e43be8 = 0xffffffff;
  DAT_101e43bec = 0xff88ea2f;
  DAT_101e43bf0 = 0xff8c8c8c;
  DAT_101e43bf4 = 0xffffb400;
  DAT_101e43bf8 = 0xffff00ff;
  DAT_101e43bfc = 0xff00aded;
  DAT_101e43c00 = 0xff33d3ff;
  DAT_101e43c04 = 0xff7fe801;
  DAT_101e43c08 = 0xff282828;
  DAT_101e43c0c = 0xfff0f0f0;
  DAT_101e43c10 = 0xffa4781e;
  DAT_101e43c14 = 0xffa6654b;
  DAT_101e43c18 = 0xff93435b;
  DAT_101e43c1c = 0xff387f9c;
  DAT_101e43c20 = 0xffa3781e;
  DAT_101e43c24 = 0xffffd18a;
  DAT_101e43c28 = 0xffff61f7;
  DAT_101e43c2c = 0xff5de1f2;
  DAT_101e43c30 = 0xff80eaff;
  DAT_101e43c34 = 0xff32e00e;
  DAT_101e43c38 = 0xff5a3c10;
  DAT_101e43c3c = 0xff330b03;
  DAT_101e43c40 = 0xff33031d;
  DAT_101e43c44 = 0xff032433;
  DAT_101e43c48 = 0xff9e8e8d;
  DAT_101d237a0 = FUN_100644a94("UI::EVENT_MAIN_HUB_NAV_BAR_ON_NAVIGATE");
  return;
}


```

**Caller functions:**


---

### `UI::EVENT_NAVIGATE_TO_LINK`

**String addresses:** `0x1013e693f`

#### `FUN_10022b24c` @ `0x10022b24c`

Referenced from: `0x10022b2b0`

**Calls:** `FUN_10026d1f4`, `FUN_100644a94`, `FUN_10001554c`, `FUN_10001549c`

```c

long FUN_10022b24c(long param_1)

{
  undefined8 *puVar1;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_10026d1f4();
  *puVar1 = &PTR_thunk_FUN_10022b2fc_101477070;
  puVar1[0x6d] = &PTR_FUN_101477240;
  *(undefined2 *)(puVar1 + 0x6e) = 0;
  puVar1[0x70] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x72] = 0;
  puVar1[0x71] = 0;
  puVar1[0x73] = 0;
  FUN_10001549c(puVar1 + 0x74,"sections");
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  local_28 = FUN_100644a94("UI::EVENT_NAVIGATE_TO_LINK");
  local_50 = FUN_10022b2f0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&local_50);
  return param_1;
}


```

**Caller functions:**

#### Caller: `FUN_100225828` @ `0x100225828`

Calls: `FUN_10022b24c`

```c

long * FUN_100225828(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10022b24c();
  *puVar4 = &PTR_thunk_FUN_100225acc_101476630;
  puVar4[0x6d] = &PTR_FUN_101476810;
  puVar4 = puVar4 + 0x7c;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x9a;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0xb1;
  FUN_10053077c(plVar2,0);
  plVar3 = param_1 + 0x158;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  uVar5 = FUN_1004e0150("MENU_NEWSFEED_PULLTOREFRESH",0);
  FUN_1006513c0(plVar3,uVar5);
  if ((*(uint *)((long)param_1 + 0xb44) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xb44) = *(uint *)((long)param_1 + 0xb44) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x161) != 0.66) || (*(float *)((long)param_1 + 0xb0c) != 0.66)) {
    param_1[0x161] = 0x3f28f5c33f28f5c3;
    FUN_1000200a0(plVar3);
  }
  FUN_100530be0(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar2,0,1);
  local_48 = DAT_101dbd460;
  local_70 = FUN_100225a78;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100225a78;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_70);
  local_48 = FUN_100644a94("UI::EVENT_FEED_SIZE_UPDATE");
  local_70 = FUN_100225a8c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  (**(code **)(*param_1 + 0x150))(param_1);
  return param_1;
}


```

#### Caller: `thunk_FUN_10022b24c` @ `0x10022b2f8`

Calls: `FUN_10022b24c`

```c

long thunk_FUN_10022b24c(long param_1)

{
  undefined8 *puVar1;
  code *pcStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = (undefined8 *)FUN_10026d1f4();
  *puVar1 = &PTR_thunk_FUN_10022b2fc_101477070;
  puVar1[0x6d] = &PTR_FUN_101477240;
  *(undefined2 *)(puVar1 + 0x6e) = 0;
  puVar1[0x70] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x72] = 0;
  puVar1[0x71] = 0;
  puVar1[0x73] = 0;
  FUN_10001549c(puVar1 + 0x74,"sections");
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  uStack_28 = FUN_100644a94("UI::EVENT_NAVIGATE_TO_LINK");
  pcStack_50 = FUN_10022b2f0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&pcStack_50);
  return param_1;
}


```


---

### `UI::EVENT_MENU_FRIENDS_SELECTED`

**String addresses:** `0x1013e0fa4`

#### `FUN_10026dad4` @ `0x10026dad4`

Referenced from: `0x10026f4d4`

**Calls:** `FUN_100181bd0`, `FUN_1006513c0`, `FUN_100530bb4`, `FUN_100187774`, `FUN_10032ae04`, `FUN_100181c68`, `FUN_1006423ec`, `FUN_100644a94`, `operator=`, `FUN_100642bd8`, `FUN_100654488`, `FUN_100530be0`, `FUN_100187a9c`, `FUN_100530b0c`, `FUN_1001816d4`, ...

```c

/* WARNING: Removing unreachable block (ram,0x00010026f348) */
/* WARNING: Removing unreachable block (ram,0x00010026f2e8) */
/* WARNING: Removing unreachable block (ram,0x00010026f318) */
/* WARNING: Removing unreachable block (ram,0x00010026f4c8) */

void FUN_10026dad4(long *param_1)

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
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  char *pcVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  uint uVar41;
  float fVar42;
  undefined4 uVar43;
  long lVar44;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  plVar1 = param_1 + 0x79;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x90;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x130b;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar4 = param_1 + 0x131c;
  FUN_100642bd8(plVar3,plVar4,1);
  plVar5 = param_1 + 0x133a;
  FUN_100642bd8(plVar3,plVar5,1);
  plVar6 = param_1 + 0x1bd3;
  FUN_100642bd8(plVar5,plVar6,1);
  plVar7 = param_1 + 0x134b;
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100642bd8(plVar5,param_1 + 0x1369,1);
  FUN_100642bd8(plVar5,param_1 + 0x138f,1);
  FUN_100642bd8(plVar5,param_1 + 0x144d,1);
  FUN_100642bd8(plVar5,param_1 + 0x150b,1);
  FUN_100642bd8(plVar5,param_1 + 0x15c9,1);
  FUN_100642bd8(plVar5,param_1 + 0x1687,1);
  plVar3 = param_1 + 0x23ff;
  FUN_100642bd8(plVar5,plVar3,1);
  plVar8 = param_1 + 0x2410;
  FUN_100642bd8(plVar3,plVar8,1);
  plVar9 = param_1 + 0x242e;
  FUN_100642bd8(plVar3,plVar9,1);
  plVar10 = param_1 + 0x16ad;
  FUN_100642bd8(plVar5,plVar10,1);
  plVar11 = param_1 + 0x686;
  FUN_100642bd8(plVar1,plVar11,1);
  plVar12 = param_1 + 0x6ba;
  FUN_100642bd8(plVar11,plVar12,1);
  plVar13 = param_1 + 0x6e0;
  FUN_100642bd8(plVar11,plVar13,1);
  plVar14 = param_1 + 0x714;
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_1005308f8(plVar14,param_1 + 0x878,1);
  FUN_1005308f8(plVar14,param_1 + 0x9d8,1);
  FUN_1005308f8(plVar14,param_1 + 0xb38,1);
  FUN_1005308f8(plVar14,param_1 + 0xc98,1);
  FUN_1005308f8(plVar14,param_1 + 0xdf8,1);
  FUN_1005308f8(plVar14,param_1 + 0xf58,1);
  FUN_1005308f8(plVar14,param_1 + 0x10b8,1);
  FUN_1005308f8(plVar14,param_1 + 0x889,1);
  FUN_1005308f8(plVar14,param_1 + 0x9e9,1);
  plVar15 = param_1 + 0xb49;
  FUN_1005308f8(plVar14,plVar15,1);
  plVar16 = param_1 + 0xe09;
  FUN_1005308f8(plVar14,plVar16,1);
  plVar17 = param_1 + 0xf69;
  FUN_1005308f8(plVar14,plVar17,1);
  plVar18 = param_1 + 0xca9;
  FUN_1005308f8(plVar14,plVar18,1);
  plVar19 = param_1 + 0x10c9;
  FUN_1005308f8(plVar14,plVar19,1);
  plVar20 = param_1 + 0x82c;
  FUN_1005308f8(plVar14,plVar20,1);
  plVar21 = param_1 + 0x852;
  FUN_1005308f8(plVar14,plVar21,1);
  plVar22 = param_1 + 0x8d6;
  FUN_1005308f8(plVar14,plVar22,1);
  FUN_1005308f8(plVar14,param_1 + 0x91a,1);
  plVar23 = param_1 + 0xa36;
  FUN_1005308f8(plVar14,plVar23,1);
  FUN_1005308f8(plVar14,param_1 + 0xa7a,1);
  plVar24 = param_1 + 0xa5c;
  FUN_1005308f8(plVar14,plVar24,1);
  plVar25 = param_1 + 0xb96;
  FUN_1005308f8(plVar14,plVar25,1);
  FUN_1005308f8(plVar14,param_1 + 0xbda,1);
  plVar26 = param_1 + 0xbbc;
  FUN_1005308f8(plVar14,plVar26,1);
  plVar27 = param_1 + 0xe56;
  FUN_1005308f8(plVar14,plVar27,1);
  plVar28 = param_1 + 0xe7c;
  FUN_1005308f8(plVar14,plVar28,1);
  FUN_1005308f8(plVar14,param_1 + 0xe9a,1);
  plVar29 = param_1 + 0xfb6;
  FUN_1005308f8(plVar14,plVar29,1);
  plVar30 = param_1 + 0xfdc;
  FUN_1005308f8(plVar14,plVar30,1);
  FUN_1005308f8(plVar14,param_1 + 0xffa,1);
  plVar31 = param_1 + 0xcf6;
  FUN_1005308f8(plVar14,plVar31,1);
  FUN_1005308f8(plVar14,param_1 + 0xd3a,1);
  plVar32 = param_1 + 0xd1c;
  FUN_1005308f8(plVar14,plVar32,1);
  plVar33 = param_1 + 0x1116;
  FUN_1005308f8(plVar14,plVar33,1);
  FUN_1005308f8(plVar14,param_1 + 0x115a,1);
  plVar34 = param_1 + 0x113c;
  FUN_1005308f8(plVar14,plVar34,1);
  FUN_1005308f8(plVar14,param_1 + 0x1218,1);
  FUN_1005308f8(plVar14,param_1 + 0x12c7,1);
  FUN_1005308f8(plVar14,param_1 + 0x12e5,1);
  FUN_1005308f8(plVar14,param_1 + 0x2471,1);
  FUN_100642bd8(plVar1,param_1 + 0x7bb,1);
  plVar3 = param_1 + 0x118;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar35 = param_1 + 0x3cf;
  FUN_100642bd8(plVar1,plVar35,1);
  plVar36 = param_1 + 0x7f0;
  FUN_100642bd8(plVar1,plVar36,1);
  plVar37 = param_1 + 0x80e;
  FUN_100642bd8(plVar1,plVar37,1);
  FUN_100642bd8(plVar1,param_1 + 0x2454,1);
  plVar1 = param_1 + 0xae;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar5 = param_1 + 0xcc;
  FUN_100642bd8(plVar1,plVar5,1);
  *(uint *)((long)param_1 + 0x504) = *(uint *)((long)param_1 + 0x504) | 0x10;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff362626);
  FUN_100652dd4(plVar2,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x504);
  if ((uVar41 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x504) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a168,2);
  uVar41 = *(uint *)((long)param_1 + 0x5f4);
  if ((uVar41 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x5f4) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar1);
  }
  uVar40 = FUN_1004e0150("MENU_FRIENDS_FRIENDS_TITLE",0);
  FUN_1006513c0(param_1 + 0xf2,uVar40);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_PRESENCE",0);
  FUN_1001816d4(0x41a00000,0x43480000,0x43fa0000,plVar3,0,uVar40,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x1fb,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar3,&local_b8);
  FUN_100181ba0(0x3f000000,plVar3,&DAT_10115a168);
  uVar39 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_10027c440;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x119,&local_b8);
  FUN_100181c68(0x42a5999a,plVar3);
  *(uint *)((long)param_1 + 0x944) = *(uint *)((long)param_1 + 0x944) & 0xfffffffb;
  uVar40 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_1001816d4(0x41a00000,0x43480000,0x43fa0000,plVar35,0,uVar40,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x4b2,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar35,&local_b8);
  FUN_100181ba0(0x3f000000,plVar35,&DAT_10115a168);
  local_90 = uVar39;
  local_b8 = thunk_FUN_10027c4dc;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x3d0,&local_b8);
  FUN_100181c68(0x42a5999a,plVar35);
  fVar42 = (float)FUN_10064e3cc(plVar35);
  FUN_10064e3cc(plVar3);
  uVar43 = NEON_fminnm(fVar42 + -20.0,*(float *)(param_1 + 0x24b2) + -150.0);
  FUN_100181c18(0x41a00000,uVar43,uVar43,plVar35);
  FUN_100181c18(0x41a00000,uVar43,uVar43,plVar3);
  FUN_100652cac(plVar36,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x80b) = *(byte *)(param_1 + 0x80b) | 2;
  FUN_100652dd4(plVar36,&DAT_10115a164,2);
  FUN_100652cac(plVar37,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar37,&local_b8,2);
  FUN_100654488(plVar11,0);
  *(uint *)((long)param_1 + 0x3e5c) = *(uint *)((long)param_1 + 0x3e5c) | 0x10;
  FUN_100654488(plVar13,1);
  FUN_100530be0(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar14,0,1);
  FUN_100530b0c(0,0,plVar14);
  FUN_100530bb4(0x3e800000,0x3f800000,plVar14);
  local_90 = DAT_101dbd460;
  local_b8 = thunk_FUN_10027c59c;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x715,&local_b8);
  local_90 = DAT_101dbd48c;
  local_b8 = thunk_FUN_10027c59c;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x715,&local_b8);
  FUN_100651460(plVar12,&DAT_10115a164);
  FUN_10065175c(0x40800000,plVar12);
  uVar40 = FUN_1004e0150("MENU_NEWSFEED_PULLTOREFRESH",0);
  FUN_1006513c0(plVar12,uVar40);
  if ((*(float *)(param_1 + 0x6c3) != 0.66) || (*(float *)((long)param_1 + 0x361c) != 0.66)) {
    param_1[0x6c3] = 0x3f28f5c33f28f5c3;
    FUN_1000200a0(plVar12);
  }
  FUN_100651460(plVar20,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_SAD_AND_EMPTY",0);
  FUN_1006513c0(plVar20,uVar40);
  *(uint *)((long)param_1 + 0x41e4) = *(uint *)((long)param_1 + 0x41e4) & 0xfffffffb;
  FUN_100651700(plVar20,3);
  FUN_100651460(plVar21,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_HOW_TO_ADD",0);
  FUN_1006513c0(plVar21,uVar40);
  *(uint *)((long)param_1 + 0x4314) = *(uint *)((long)param_1 + 0x4314) & 0xfffffffb;
  FUN_100651700(plVar21,3);
  *(uint *)((long)param_1 + 0x44cc) = *(uint *)((long)param_1 + 0x44cc) | 0x10;
  FUN_100651594(plVar22,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1006513c0(plVar22,uVar40);
  plVar1 = param_1 + 0x8
// ... truncated ...
```

#### `FUN_10019fd3c` @ `0x10019fd3c`

Referenced from: `0x10019fd70`

**Calls:** `FUN_100644aec`, `FUN_100644c34`, `FUN_100644a94`, `FUN_100644b14`

```c

void FUN_10019fd3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  if ((*(char *)(param_1 + 0x3dad) == '\0') && (*(char *)(param_1 + 0x3dae) == '\0')) {
    uVar1 = FUN_100644a94("UI::EVENT_MENU_FRIENDS_SELECTED");
    FUN_100644aec(auStack_40,uVar1,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  FUN_100644b14(param_2);
  return;
}


```

**Caller functions:**

#### Caller: `FUN_10026d50c` @ `0x10026d50c`

Calls: `FUN_10026dad4`

```c

undefined8 * FUN_10026d50c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10026d1f4();
  FUN_1004f0a20(lVar1 + 0x368);
  FUN_10014f4a0(param_1 + 0x70);
  param_1[0x73] = &PTR_FUN_10147e208;
  FUN_10032b50c(param_1 + 0x74);
  param_1[0x78] = 0;
  *param_1 = &PTR_thunk_FUN_10026f59c_10147d898;
  param_1[0x6d] = &PTR_FUN_10147dab0;
  param_1[0x70] = &PTR_FUN_10147dae0;
  param_1[0x73] = &PTR_FUN_10147de78;
  param_1[0x74] = &PTR_FUN_10147ded8;
  param_1[0x77] = &PTR_FUN_10147df00;
  FUN_10064e264(param_1 + 0x79);
  thunk_FUN_100652c08(param_1 + 0x90);
  thunk_FUN_100652c08(param_1 + 0xae);
  thunk_FUN_100650e64(param_1 + 0xcc);
  thunk_FUN_100650e64(param_1 + 0xf2);
  thunk_FUN_100181304(param_1 + 0x118,0);
  thunk_FUN_100181304(param_1 + 0x3cf,0);
  thunk_FUN_1006543ec(param_1 + 0x686);
  thunk_FUN_100650e64(param_1 + 0x6ba);
  thunk_FUN_1006543ec(param_1 + 0x6e0);
  FUN_10053077c(param_1 + 0x714,0);
  FUN_10064e264(param_1 + 0x7bb);
  thunk_FUN_100652c08(param_1 + 0x7d2);
  thunk_FUN_100652c08(param_1 + 0x7f0);
  thunk_FUN_100652c08(param_1 + 0x80e);
  thunk_FUN_100650e64(param_1 + 0x82c);
  thunk_FUN_100650e64(param_1 + 0x852);
  FUN_1006421a8(param_1 + 0x878);
  param_1[0x878] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x889);
  thunk_FUN_100650e64(param_1 + 0x8d6);
  thunk_FUN_100652c08(param_1 + 0x8fc);
  FUN_1002774c8(param_1 + 0x91a);
  FUN_1006421a8(param_1 + 0x9d8);
  param_1[0x9d8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x9e9);
  thunk_FUN_100650e64(param_1 + 0xa36);
  thunk_FUN_100652c08(param_1 + 0xa5c);
  FUN_1002774c8(param_1 + 0xa7a);
  FUN_1006421a8(param_1 + 0xb38);
  param_1[0xb38] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xb49);
  thunk_FUN_100650e64(param_1 + 0xb96);
  thunk_FUN_100652c08(param_1 + 0xbbc);
  FUN_1002774c8(param_1 + 0xbda);
  FUN_1006421a8(param_1 + 0xc98);
  param_1[0xc98] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xca9);
  thunk_FUN_100650e64(param_1 + 0xcf6);
  thunk_FUN_100652c08(param_1 + 0xd1c);
  FUN_1002774c8(param_1 + 0xd3a);
  FUN_1006421a8(param_1 + 0xdf8);
  param_1[0xdf8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xe09);
  thunk_FUN_100650e64(param_1 + 0xe56);
  thunk_FUN_100652c08(param_1 + 0xe7c);
  FUN_1002774c8(param_1 + 0xe9a);
  FUN_1006421a8(param_1 + 0xf58);
  param_1[0xf58] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xf69);
  thunk_FUN_100650e64(param_1 + 0xfb6);
  thunk_FUN_100652c08(param_1 + 0xfdc);
  FUN_1002774c8(param_1 + 0xffa);
  FUN_1006421a8(param_1 + 0x10b8);
  param_1[0x10b8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x10c9);
  thunk_FUN_100650e64(param_1 + 0x1116);
  thunk_FUN_100652c08(param_1 + 0x113c);
  FUN_1002774c8(param_1 + 0x115a);
  thunk_FUN_1001c0c34(param_1 + 0x1218,0);
  thunk_FUN_100652c08(param_1 + 0x12c7);
  thunk_FUN_100650e64(param_1 + 0x12e5);
  FUN_1006421a8(param_1 + 0x130b);
  param_1[0x130b] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x131c);
  FUN_1006421a8(param_1 + 0x133a);
  param_1[0x133a] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x134b);
  thunk_FUN_100650e64(param_1 + 0x1369);
  thunk_FUN_100183990(param_1 + 0x138f,0);
  thunk_FUN_100183990(param_1 + 0x144d,0);
  thunk_FUN_100183990(param_1 + 0x150b,0);
  thunk_FUN_100183990(param_1 + 0x15c9,0);
  thunk_FUN_100650e64(param_1 + 0x1687);
  thunk_FUN_10018ceb0(param_1 + 0x16ad);
  thunk_FUN_1001862ec(param_1 + 0x1bd3,param_1 + 0x73);
  param_1[0x23fe] = 0;
  param_1[0x23fb] = 0;
  param_1[0x23fa] = 0;
  param_1[0x23fd] = 0;
  param_1[0x23fc] = 0;
  param_1[0x23f7] = 0;
  param_1[0x23f6] = 0;
  param_1[0x23f9] = 0;
  param_1[0x23f8] = 0;
  param_1[0x23f3] = 0;
  param_1[0x23f2] = 0;
  param_1[0x23f5] = 0;
  param_1[0x23f4] = 0;
  param_1[0x23f1] = 0;
  param_1[0x23f0] = 0;
  FUN_1006421a8(param_1 + 0x23ff);
  param_1[0x23ff] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x2410);
  thunk_FUN_100650e64(param_1 + 0x242e);
  thunk_FUN_1001ceb64(param_1 + 0x2454,0);
  thunk_FUN_1001ceb64(param_1 + 0x2471,0);
  param_1[0x249c] = 0;
  param_1[0x249b] = 0;
  param_1[0x248f] = 0;
  param_1[0x248e] = 0;
  param_1[0x2491] = 0;
  param_1[0x2490] = 0;
  param_1[0x2493] = 0;
  param_1[0x2492] = 0;
  param_1[0x2495] = 0;
  param_1[0x2494] = 0;
  param_1[0x2497] = 0;
  param_1[0x2496] = 0;
  param_1[0x2499] = 0;
  param_1[0x2498] = 0;
  *(undefined4 *)(param_1 + 0x249a) = 0;
  *(undefined4 *)(param_1 + 0x249d) = 0xffffffff;
  FUN_1001e7abc(param_1 + 0x249e);
  FUN_1004e313c(param_1 + 0x249f);
  FUN_10003330c(param_1 + 0x24a1,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a4,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a7,&DAT_101d91198);
  thunk_FUN_1004e439c(param_1 + 0x24aa,&DAT_101d91650);
  FUN_10003330c(param_1 + 0x24ac,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24af,&DAT_101d91198);
  param_1[0x24b2] = 0x43840000443e0000;
  param_1[0x24b4] = 0;
  param_1[0x24b3] = 0xa0000001e;
  *(undefined2 *)((long)param_1 + 0x125a9) = 0;
  *(undefined8 *)((long)param_1 + 0x125ab) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0x125b3) = 1;
  FUN_10026dad4(param_1);
  FUN_1001116f8(param_1 + 0x77);
  return param_1;
}


```

#### Caller: `FUN_10019d7e4` @ `0x10019d7e4`

Calls: `FUN_10019fd3c`

```c

void FUN_10019d7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10019fd3c(param_1,param_4);
  return;
}


```


---

### `MAIN_MENU_SOCIAL`

**String addresses:** `0x1013e11dd`

#### `FUN_10020d970` @ `0x10020d970`

Referenced from: `0x10020d974`

**Calls:** `FUN_1004e0150`

```c

void FUN_10020d970(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

#### `FUN_10020d980` @ `0x10020d980`

Referenced from: `0x10020d984`

**Calls:** `FUN_1004e0150`

```c

void FUN_10020d980(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

#### `FUN_100267f98` @ `0x100267f98`

Referenced from: `0x100267f9c`

**Calls:** `FUN_1004e0150`

```c

void FUN_100267f98(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

#### `FUN_100267fa8` @ `0x100267fa8`

Referenced from: `0x100267fac`

**Calls:** `FUN_1004e0150`

```c

void FUN_100267fa8(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

**Caller functions:**


---

### `MAIN_MENU_HOME`

**String addresses:** `0x1013e4377`

#### `FUN_1001f38b0` @ `0x1001f38b0`

Referenced from: `0x1001f38b4`

**Calls:** `FUN_1004e0150`

```c

void FUN_1001f38b0(void)

{
  FUN_1004e0150("MAIN_MENU_HOME",0);
  return;
}


```

#### `FUN_1001f38c0` @ `0x1001f38c0`

Referenced from: `0x1001f38c4`

**Calls:** `FUN_1004e0150`

```c

void FUN_1001f38c0(void)

{
  FUN_1004e0150("MAIN_MENU_HOME",0);
  return;
}


```

**Caller functions:**


---

### `MAIN_MENU_PLAY`

**String addresses:** `0x1013e1171`

#### `FUN_100221a60` @ `0x100221a60`

Referenced from: `0x100221afc`

**Calls:** `thunk_FUN_100307844`, `FUN_10032523c`, `FUN_1004e0150`, `thunk_FUN_100201dc8`, `FUN_1001b33e8`, `FUN_1001b3418`, `FUN_100031f58`, `FUN_1001b2b88`, `FUN_1001b316c`, `FUN_1001b339c`, `FUN_10020200c`, `FUN_10001554c`

```c

long FUN_100221a60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_60;
  long lStack_58;
  long local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_thunk_FUN_100221b6c_1014750b0;
  thunk_FUN_100201dc8(puVar1 + 0x39e);
  thunk_FUN_100307844(param_1 + 0x1da0);
  *(undefined2 *)(param_1 + 0x2450) = 0x100;
  lVar2 = FUN_10032523c();
  local_60 = (code *)0x0;
  local_48 = FUN_100221f88;
  lStack_58 = param_1;
  local_50 = param_1;
  FUN_100031f58(lVar2 + 0x30,&local_60);
  FUN_1001b339c(param_1,*(undefined8 *)(param_1 + 0x1cf8));
  FUN_1001b33e8(param_1,param_1 + 0x1da0);
  FUN_1001b316c(param_1,1);
  uVar3 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1001b3418(param_1,uVar3);
  local_38 = DAT_101d237a4;
  local_60 = FUN_100221b64;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(param_1 + 8,&local_60);
  FUN_10020200c(puVar1 + 0x39e);
  return param_1;
}


```

#### `FUN_1002a616c` @ `0x1002a616c`

Referenced from: `0x1002a6480`

**Calls:** `FUN_1002ebf04`, `thunk_FUN_100650e64`, `FUN_1002ecd8c`, `FUN_1006525c4`, `FUN_1001b11fc`, `FUN_1004e3120`, `FUN_100652cac`, `FUN_100651038`, `FUN_1004d2524`, `FUN_1006513c0`, `FUN_10001554c`, `FUN_1002ecce4`, `FUN_10064e20c`, `FUN_1002ecc7c`, `FUN_1002eccb4`, ...

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

#### `FUN_1002a669c` @ `0x1002a669c`

Referenced from: `0x1002a66e8`

**Calls:** `FUN_1001b1390`, `FUN_1004e0150`, `FUN_1002ecce4`

```c

void FUN_1002a669c(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 0x144) =
       *(uint *)(param_1 + 0x144) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x23c2) << 2;
  pcVar1 = "MAIN_MENU_PLAY";
  if (*(char *)(param_1 + 0x23c3) != '\0') {
    pcVar1 = "MENU_FRIENDS_STATUS_IN_PARTY";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1002ecce4(param_1 + 0xe40,uVar2);
  if ((*(byte *)(param_1 + 0x23c2) == 0) || (*(char *)(param_1 + 0x23c3) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1001b1390(param_1 + 0xd70,uVar2,1);
  return;
}


```

#### `FUN_100221e28` @ `0x100221e28`

Referenced from: `0x100221e70`

**Calls:** `FUN_100644b2c`, `FUN_1001b3624`, `FUN_1004e0150`, `FUN_1000bdb98`, `FUN_1001b3418`, `FUN_100533194`, `FUN_100532c58`, `FUN_1004e36c0`

```c

void FUN_100221e28(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar2 = FUN_100644b2c(param_2);
  lVar4 = lVar2 + 0x20;
  uVar3 = FUN_1004e36c0(lVar4,&DAT_101d91650);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  }
  FUN_1001b3418(param_1,lVar4);
  FUN_1001b3624(param_1,*(undefined1 *)(lVar2 + 0x30));
  *(uint *)((long)param_1 + 0x19f4) =
       *(uint *)((long)param_1 + 0x19f4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x19f4) & 3 | (uint)(*(char *)(lVar2 + 0x32) == '\0') << 2;
  *(undefined1 *)((long)param_1 + 0x2451) = *(undefined1 *)(lVar2 + 0x31);
  (**(code **)(*param_1 + 0x118))(param_1);
  *(undefined1 *)(param_1 + 0x48a) = 1;
  lVar4 = FUN_100533194(param_1);
  if (lVar4 != 0) {
    uVar5 = FUN_100533194(param_1);
    iVar1 = FUN_100532c58(uVar5,param_1);
    if (iVar1 != 0) {
      lVar4 = FUN_1000bdb98();
      plVar6 = (long *)(lVar4 + 0x10);
      plVar7 = (long *)*plVar6;
      plVar8 = plVar6;
      if (plVar7 != (long *)0x0) {
        do {
          if (*(uint *)(plVar7 + 4) >= 0xb3cf6e0d) {
            plVar8 = plVar7;
          }
          plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0xb3cf6e0d];
        } while (plVar7 != (long *)0x0);
        if (((plVar8 != plVar6) && (*(uint *)(plVar8 + 4) < 0xb3cf6e0e)) && ((int)plVar8[5] != 0)) {
          lVar4 = 0;
          uVar3 = 0;
          do {
            (*(code *)((undefined8 *)(plVar8[6] + lVar4))[1])(*(undefined8 *)(plVar8[6] + lVar4));
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 0x10;
          } while (uVar3 < *(uint *)(plVar8 + 5));
        }
      }
    }
  }
  return;
}


```

**Caller functions:**

#### Caller: `FUN_100221a10` @ `0x100221a10`

Calls: `FUN_100221a60`

```c

void FUN_100221a10(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1001e7f1c();
  if ((iVar1 != 0) && (uVar2 = FUN_1001e7fb0("PLAY_MENU"), (uVar2 & 1) == 0)) {
    operator_new(0x2458);
    uVar3 = FUN_100221a60();
    FUN_1001e7f88(uVar3,"PLAY_MENU",1,0,1);
    return;
  }
  return;
}


```

#### Caller: `FUN_1002219a0` @ `0x1002219a0`

Calls: `FUN_100221a60`

```c

void FUN_1002219a0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1001e7f1c();
  if ((iVar1 != 0) && (uVar2 = FUN_1001e7fb0("PLAY_MENU"), (uVar2 & 1) == 0)) {
    pvVar3 = operator_new(0x2458);
    uVar4 = FUN_100221a60();
    FUN_1001b35e0(uVar4,param_1);
    FUN_1001e7f30(pvVar3,"PLAY_MENU",1,0,1);
    return;
  }
  return;
}


```

#### Caller: `thunk_FUN_1002a616c` @ `0x1002a6734`

Calls: `FUN_1002a616c`

```c

long * thunk_FUN_1002a616c(long *param_1)

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
  code *pcStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
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
  pcStack_90 = (code *)0x0;
  pcStack_78 = thunk_FUN_1002a7060;
  plStack_88 = param_1;
  plStack_80 = param_1;
  FUN_1002a71d4(lVar12 + 0x50,&pcStack_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10064e5cc(plVar1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&pcStack_90,"Blitz | Casual | Solo");
  FUN_1006513c0(plVar2,&pcStack_90);
  if (plStack_88 != (long *)0x0) {
    operator_delete__(plStack_88);
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
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002a666c;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1c9,&pcStack_90);
  FUN_1002ebf04(plVar6,&DAT_101d23748);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1002eccb4(plVar6,&DAT_101e448a8);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff646464);
  FUN_1002ecd8c(plVar6,&pcStack_90);
  FUN_1002ecd84(plVar6,1);
  uVar13 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1002ecce4(plVar6,uVar13);
  FUN_1002ebe0c(plVar6,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebee0(0x42200000,0x42200000,plVar6);
  FUN_100652590(param_1 + 0x23a,&DAT_101e448a8,2);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002a6684;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x312,&pcStack_90);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002eccb4(plVar7,&DAT_101e448a8);
  uVar13 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar7,uVar13);
  FUN_1002ebe0c(plVar7,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff606060);
  FUN_1002ebe4c(plVar7,&pcStack_90);
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

#### Caller: `FUN_1002a6a5c` @ `0x1002a6a5c`

Calls: `FUN_1002a669c`

```c

void FUN_1002a6a5c(long param_1,uint param_2)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (*(byte *)(param_1 + 0x23c2) != param_2) {
    *(byte *)(param_1 + 0x23c2) = (byte)param_2;
    FUN_1002a669c();
    if (param_2 != 0) {
      FUN_1001c1090(0x3e19999a,0x3ecccccd,0,0x3f666666,param_1 + 0x700);
      FUN_1001c0e10(param_1 + 0x700);
      FUN_1004e3120(auStack_30,"0:00");
      FUN_1006513c0(param_1 + 0x218,auStack_30);
      if (local_28 != (void *)0x0) {
        operator_delete__(local_28);
      }
    }
  }
  return;
}


```

#### Caller: `FUN_1002a6b00` @ `0x1002a6b00`

Calls: `FUN_1002a669c`

```c

void FUN_1002a6b00(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x23c3) = param_2;
  FUN_1002a669c();
  return;
}


```


---

### `MAIN_MENU_HEROES`

**String addresses:** `0x1013e11ab`

#### `FUN_1001f2890` @ `0x1001f2890`

Referenced from: `0x1001f2894`

**Calls:** `FUN_1004e0150`

```c

void FUN_1001f2890(void)

{
  FUN_1004e0150("MAIN_MENU_HEROES",0);
  return;
}


```

#### `FUN_1001f28a0` @ `0x1001f28a0`

Referenced from: `0x1001f28a4`

**Calls:** `FUN_1004e0150`

```c

void FUN_1001f28a0(void)

{
  FUN_1004e0150("MAIN_MENU_HEROES",0);
  return;
}


```

**Caller functions:**


---

### `MAIN_MENU_MARKET`

**String addresses:** `0x1013e11ee`

#### `FUN_100245640` @ `0x100245640`

Referenced from: `0x100245644`

**Calls:** `FUN_1004e0150`

```c

void FUN_100245640(void)

{
  FUN_1004e0150("MAIN_MENU_MARKET",0);
  return;
}


```

#### `FUN_100245650` @ `0x100245650`

Referenced from: `0x100245654`

**Calls:** `FUN_1004e0150`

```c

void FUN_100245650(void)

{
  FUN_1004e0150("MAIN_MENU_MARKET",0);
  return;
}


```

**Caller functions:**


---

### `homepanel_overflow_nav_button_leaderboards`

**String addresses:** `0x1013e4539`

#### `FUN_1002a88f0` @ `0x1002a88f0`

Referenced from: `0x1002a8a2c`

**Calls:** `FUN_1002a916c`, `FUN_1002eb970`, `FUN_1002ece5c`, `FUN_10064e20c`, `FUN_1002a90f8`, `FUN_1002a91e0`, `FUN_1004d2524`, `operator.delete`, `FUN_10001554c`, `FUN_10001549c`, `FUN_1002ee358`, `FUN_1001b16e8`, `FUN_100015208`

```c

long FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
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
  FUN_10001549c(&local_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar2 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a8e70;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&local_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&local_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e80;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&local_70,"secondary_nav_news");
  FUN_10001549c(local_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e90;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&local_70,"secondary_nav_settings");
  FUN_10001549c(local_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ea0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&local_70,"secondary_nav_leaderboards");
  FUN_10001549c(local_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8eb0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&local_70,"secondary_nav_academy");
  FUN_10001549c(local_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ec0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x100) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xe8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  FUN_10001549c(&local_70,"secondary_nav_today");
  FUN_10001549c(local_88,"secondary_nav_today_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ed0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xe8) + 8,&local_70);
  *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) = *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) | 4;
  return param_1;
}


```

#### `FUN_1001f4cb0` @ `0x1001f4cb0`

Referenced from: `0x1001f4cb4`

**Calls:** `FUN_1002207b8`

```c

void FUN_1001f4cb0(void)

{
  FUN_1002207b8("homepanel_overflow_nav_button_leaderboards");
  return;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_1002a88f0` @ `0x1002a8f04`

Calls: `FUN_1002a88f0`

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
    operator_delete(p
// ... truncated ...
```


---

### `secondary_nav_leaderboards`

**String addresses:** `0x1013ec6c5`

#### `FUN_1002a88f0` @ `0x1002a88f0`

Referenced from: `0x1002a8cac`

**Calls:** `FUN_1002a916c`, `FUN_1002eb970`, `FUN_1002ece5c`, `FUN_10064e20c`, `FUN_1002a90f8`, `FUN_1002a91e0`, `FUN_1004d2524`, `operator.delete`, `FUN_10001554c`, `FUN_10001549c`, `FUN_1002ee358`, `FUN_1001b16e8`, `FUN_100015208`

```c

long FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
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
  FUN_10001549c(&local_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar2 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a8e70;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&local_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&local_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e80;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&local_70,"secondary_nav_news");
  FUN_10001549c(local_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e90;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&local_70,"secondary_nav_settings");
  FUN_10001549c(local_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ea0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&local_70,"secondary_nav_leaderboards");
  FUN_10001549c(local_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8eb0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&local_70,"secondary_nav_academy");
  FUN_10001549c(local_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ec0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x100) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xe8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  FUN_10001549c(&local_70,"secondary_nav_today");
  FUN_10001549c(local_88,"secondary_nav_today_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ed0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xe8) + 8,&local_70);
  *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) = *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) | 4;
  return param_1;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_1002a88f0` @ `0x1002a8f04`

Calls: `FUN_1002a88f0`

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
    operator_delete(p
// ... truncated ...
```


---

