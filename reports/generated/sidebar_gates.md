# Sidebar Gating Functions

### sidebar_register_panel: `FUN_1001fc9c4` @ `0x1001fc9c4`

```c

undefined8
FUN_1001fc9c4(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar1 = FUN_1002c352c(*(undefined8 *)(param_3 + 8));
  uStack_34 = (undefined4)uVar1;
  local_40 = param_4;
  local_38 = param_5;
  uVar2 = (**(code **)*param_4)(param_4);
  local_48 = (**(code **)(**(long **)(*(long *)(param_3 + 0x10) + 8) + 0x48))();
  uStack_44 = param_2;
  FUN_10064e48c(uVar2,&local_48);
  FUN_1001fca60(param_3 + 0x18,&local_40);
  FUN_1002c3b48(*(undefined8 *)(param_3 + 8),*(undefined1 *)(param_3 + 0x2c));
  return uVar1;
}


```

---

### sidebar_controller_init: `FUN_1001fc960` @ `0x1001fc960`

```c

undefined8 * FUN_1001fc960(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146eab0;
  operator_new(0x298);
  lVar1 = thunk_FUN_1002c3284();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_10146ea88;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  return param_1;
}


```

---

### gate_social: `FUN_100126b6c` @ `0x100126b6c`

```c

void FUN_100126b6c(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  FUN_100130f38();
  return;
}


```

Callers (5): FUN_1001ff01c @ 0x1001ff01c, FUN_1001fd570 @ 0x1001fd570, FUN_1001fe744 @ 0x1001fe744, FUN_1001ff088 @ 0x1001ff088, FUN_1002c522c @ 0x1002c522c, 

---

### gate_academy: `FUN_100131560` @ `0x100131560`

```c

undefined8 FUN_100131560(void)

{
  return 1;
}


```

Callers (116): FUN_10016641c @ 0x10016641c, FUN_1001f505c @ 0x1001f505c, FUN_1002db4bc @ 0x1002db4bc, FUN_100252e40 @ 0x100252e40, FUN_10028bd98 @ 0x10028bd98, FUN_10024bf9c @ 0x10024bf9c, FUN_100078f00 @ 0x100078f00, FUN_100312f24 @ 0x100312f24, FUN_1000494b4 @ 0x1000494b4, FUN_100208ec8 @ 0x100208ec8, FUN_1001dffe4 @ 0x1001dffe4, FUN_100227610 @ 0x100227610, FUN_10002fea4 @ 0x10002fea4, FUN_100208d44 @ 0x100208d44, FUN_1001f564c @ 0x1001f564c, FUN_100257ca8 @ 0x100257ca8, FUN_100078800 @ 0x100078800, FUN_10016426c @ 0x10016426c, FUN_1001df760 @ 0x1001df760, FUN_1001f4efc @ 0x1001f4efc, FUN_1003219a8 @ 0x1003219a8, FUN_10024b30c @ 0x10024b30c, FUN_1001630a0 @ 0x1001630a0, FUN_100160e54 @ 0x100160e54, FUN_1001f2104 @ 0x1001f2104, FUN_1002d8c38 @ 0x1002d8c38, FUN_100248d18 @ 0x100248d18, FUN_100203bf4 @ 0x100203bf4, FUN_10020a560 @ 0x10020a560, FUN_1001e0550 @ 0x1001e0550, FUN_1002268e4 @ 0x1002268e4, FUN_100247ff4 @ 0x100247ff4, FUN_1002db62c @ 0x1002db62c, FUN_10024e69c @ 0x10024e69c, FUN_1000fb8e0 @ 0x1000fb8e0, FUN_1002e76d8 @ 0x1002e76d8, FUN_100164e14 @ 0x100164e14, FUN_100212ff8 @ 0x100212ff8, FUN_10020a080 @ 0x10020a080, FUN_1002e647c @ 0x1002e647c, FUN_10020a248 @ 0x10020a248, FUN_100168220 @ 0x100168220, FUN_1002da05c @ 0x1002da05c, FUN_1001f9230 @ 0x1001f9230, FUN_100341ca8 @ 0x100341ca8, FUN_100257708 @ 0x100257708, FUN_100165040 @ 0x100165040, FUN_100208cb0 @ 0x100208cb0, FUN_100209f00 @ 0x100209f00, FUN_100164e98 @ 0x100164e98, FUN_10011584c @ 0x10011584c, FUN_100251990 @ 0x100251990, FUN_1002db064 @ 0x1002db064, FUN_1001fd570 @ 0x1001fd570, FUN_10002ff2c @ 0x10002ff2c, FUN_100049514 @ 0x100049514, FUN_10032ba00 @ 0x10032ba00, FUN_1001f59e8 @ 0x1001f59e8, FUN_10025d954 @ 0x10025d954, FUN_100115cf8 @ 0x100115cf8, FUN_10022a47c @ 0x10022a47c, FUN_1001e12c0 @ 0x1001e12c0, FUN_100227d90 @ 0x100227d90, FUN_10002f340 @ 0x10002f340, FUN_100320fc8 @ 0x100320fc8, FUN_1002dba90 @ 0x1002dba90, FUN_10028b7e0 @ 0x10028b7e0, FUN_1001f24fc @ 0x1001f24fc, FUN_10002f5f4 @ 0x10002f5f4, FUN_1002da328 @ 0x1002da328, FUN_1002db3dc @ 0x1002db3dc, FUN_10010f758 @ 0x10010f758, FUN_1002d92e8 @ 0x1002d92e8, FUN_1003427e0 @ 0x1003427e0, FUN_100331584 @ 0x100331584, FUN_10030f984 @ 0x10030f984, FUN_1001f4cf4 @ 0x1001f4cf4, FUN_1002af930 @ 0x1002af930, FUN_100165eb0 @ 0x100165eb0, FUN_100341d0c @ 0x100341d0c, FUN_1001665d4 @ 0x1001665d4, FUN_100222878 @ 0x100222878, FUN_1001fbe40 @ 0x1001fbe40, FUN_100166e1c @ 0x100166e1c, FUN_1002daef4 @ 0x1002daef4, FUN_1001f24c8 @ 0x1001f24c8, FUN_10025c044 @ 0x10025c044, FUN_100252a20 @ 0x100252a20, FUN_1002583c0 @ 0x1002583c0, FUN_10022c538 @ 0x10022c538, FUN_100229634 @ 0x100229634, FUN_1002a1e94 @ 0x1002a1e94, FUN_10022a7e4 @ 0x10022a7e4, FUN_10028caf4 @ 0x10028caf4, FUN_1002db580 @ 0x1002db580, FUN_100209c74 @ 0x100209c74, FUN_100166ab8 @ 0x100166ab8, FUN_10032b9d0 @ 0x10032b9d0, FUN_1001e03b4 @ 0x1001e03b4, FUN_10020a288 @ 0x10020a288, FUN_10024e4a4 @ 0x10024e4a4, FUN_100165860 @ 0x100165860, FUN_1003286cc @ 0x1003286cc, FUN_100166b08 @ 0x100166b08, FUN_10025129c @ 0x10025129c, FUN_1001636b0 @ 0x1001636b0, FUN_1002e64f8 @ 0x1002e64f8, FUN_100203d28 @ 0x100203d28, FUN_10017ab0c @ 0x10017ab0c, FUN_10017a5f4 @ 0x10017a5f4, FUN_1001654bc @ 0x1001654bc, FUN_100320e24 @ 0x100320e24, FUN_100160c50 @ 0x100160c50, FUN_100166bec @ 0x100166bec, FUN_1001e115c @ 0x1001e115c, FUN_100255b9c @ 0x100255b9c, 

---

### set_sidebar_visible: `FUN_1001fdbb8` @ `0x1001fdbb8`

```c

void FUN_1001fdbb8(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = param_2 ^ 1;
  FUN_1001fdcb4(param_1,uVar3);
  FUN_1001f3724(*(undefined8 *)(param_1 + 0xe0),uVar3);
  if ((uVar3 & 1) == 0) {
    FUN_10016c2f0();
    iVar2 = FUN_10016bdbc();
    if ((iVar2 != 0) && (uVar4 = FUN_1001311d4(), (uVar4 & 1) == 0)) {
      FUN_100221a10();
    }
  }
  uVar3 = FUN_10012f844();
  iVar2 = FUN_10015d3f8();
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar5 = FUN_10015d3ec();
    bVar1 = *(char *)(lVar5 + 0x567c) == '\0';
  }
  if ((((param_2 & 1) == 0) && (!bVar1 && (uVar3 & 1) == 0)) && (*(char *)(param_1 + 0x131) != '\0')
     ) {
    FUN_1002249cc(&DAT_101873a48);
    FUN_10012f778(1);
  }
  *(char *)(param_1 + 0x131) = (char)param_2;
  FUN_1001fe670(param_1);
  return;
}


```

---

### sidebar_event_handler: `FUN_1001fdb84` @ `0x1001fdb84`

```c

void FUN_1001fdb84(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001001fdbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  return;
}


```

---

### HOME_callback: `FUN_1001fedec` @ `0x1001fedec`

```c

long FUN_1001fedec(long param_1)

{
  long lVar1;
  
  FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  FUN_10053255c();
  FUN_1001fcb14(param_1 + 0x70,0);
  *(undefined1 *)(param_1 + 0x132) = 1;
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}


```

---

### PARTY_callback: `FUN_1001ff8e4` @ `0x1001ff8e4`

```c

undefined8 FUN_1001ff8e4(void)

{
  FUN_1001fee38();
  return 0;
}


```

---

### MARKET_callback: `FUN_1001ff8fc` @ `0x1001ff8fc`

```c

undefined8 FUN_1001ff8fc(void)

{
  FUN_1001fee80();
  return 0;
}


```

---

### HEROES_callback: `FUN_1001feee8` @ `0x1001feee8`

```c

long FUN_1001feee8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,1);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar1 = *(long *)(param_1 + 0x108) + 0x30;
  }
  return lVar1;
}


```

---

### ACADEMY_callback: `FUN_1001fef3c` @ `0x1001fef3c`

```c

long FUN_1001fef3c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    puVar1 = &DAT_101d91198;
    if (*param_2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_1001f3758(*(undefined8 *)(param_1 + 0xe0),puVar1);
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar2 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar2;
}


```

---

### NEWS_callback: `FUN_1001fefac` @ `0x1001fefac`

```c

long FUN_1001fefac(long param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    puVar1 = &DAT_101d91198;
    if (*param_2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_1001f3768(*(undefined8 *)(param_1 + 0xe0),puVar1);
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar2 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar2;
}


```

---

### PEOPLE_callback: `FUN_1001ff088` @ `0x1001ff088`

```c

long FUN_1001ff088(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_100126b6c();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_1002c5224(*(undefined8 *)(param_1 + 8));
      FUN_10053255c();
      FUN_1001fcb14(param_1 + 0x70,5);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    lVar2 = 0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      lVar2 = *(long *)(param_1 + 0xf8) + 0x2c68;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}


```

---

### FRIENDS_callback: `FUN_1001ff920` @ `0x1001ff920`

```c

undefined8 FUN_1001ff920(void)

{
  FUN_1001ff01c();
  return 0;
}


```

---

### sidebar_add: `FUN_1001fc9bc` @ `0x1001fc9bc`

```c

void FUN_1001fc9bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


```

---

### sidebar_nearby: `FUN_1001fc9c4` @ `0x1001fc9c4`

```c

undefined8
FUN_1001fc9c4(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar1 = FUN_1002c352c(*(undefined8 *)(param_3 + 8));
  uStack_34 = (undefined4)uVar1;
  local_40 = param_4;
  local_38 = param_5;
  uVar2 = (**(code **)*param_4)(param_4);
  local_48 = (**(code **)(**(long **)(*(long *)(param_3 + 0x10) + 8) + 0x48))();
  uStack_44 = param_2;
  FUN_10064e48c(uVar2,&local_48);
  FUN_1001fca60(param_3 + 0x18,&local_40);
  FUN_1002c3b48(*(undefined8 *)(param_3 + 8),*(undefined1 *)(param_3 + 0x2c));
  return uVar1;
}


```

---

### small_social_ctor: `FUN_10020cfb8` @ `0x10020cfb8`

```c

undefined8 * FUN_10020cfb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  operator_new(0x3cf8);
  lVar1 = thunk_FUN_1002e0920();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[1] = lVar1;
  param_1[2] = &DAT_101471ee0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_FUN_101471f38;
  param_1[4] = 0;
  FUN_1004f0a20(param_1 + 5);
  FUN_10014f4a0(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  *puVar3 = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  thunk_FUN_100016500(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_1001e7abc(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1c);
  FUN_10003330c(param_1 + 0x1e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x21,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  *(undefined4 *)((long)param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1001116f8(puVar3);
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1004e3120(auStack_40,"REQUESTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1004e3120(auStack_40,"RECENTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1004e3120(auStack_40,"TEAM");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1004e3120(auStack_40,"GUILD");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"ONLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"OFFLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar2 = FUN_1002e1420(param_1[1],"TEAM");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"GUILD");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"ONLINE_FRIENDS");
  FUN_1001d9594(uVar2,1);
  return param_1;
}


```

---

### home_panel_ctor: `FUN_1001f3424` @ `0x1001f3424`

```c

undefined8 * FUN_1001f3424(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c948;
  operator_new(0x23c8);
  lVar1 = thunk_FUN_1002a616c();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_10146c858;
  param_1[1] = lVar1;
  param_1[2] = &PTR_FUN_10146c8c0;
  puVar2 = param_1 + 3;
  *puVar2 = &PTR_FUN_10146c918;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  lVar1 = FUN_10032523c();
  local_50 = (undefined8 *)0x0;
  pcStack_38 = thunk_FUN_1001f392c;
  puStack_48 = param_1;
  local_40 = param_1;
  FUN_100031f58(lVar1 + 0x40,&local_50);
  lVar1 = FUN_10031ffe0();
  puStack_48 = (undefined8 *)0x0;
  pcStack_38 = FUN_1001f3c5c;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x30,&local_50);
  lVar1 = FUN_10031ffe0();
  puStack_48 = (undefined8 *)0x0;
  pcStack_38 = FUN_1001f3c5c;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x40,&local_50);
  lVar1 = FUN_10031ffe0();
  local_50 = (undefined8 *)0x0;
  pcStack_38 = thunk_FUN_1001f3a48;
  puStack_48 = param_1;
  local_40 = param_1;
  FUN_1001f3c84(lVar1 + 0x60,&local_50);
  FUN_1001dac1c(puVar2,"play",param_1,FUN_1001f3d84);
  FUN_1001dac1c(puVar2,"events",param_1,FUN_1001f3d9c);
  FUN_1001dac1c(puVar2,"quests",param_1,FUN_1001f3db4);
  return param_1;
}


```

---

### heroes_bag_ctor: `FUN_1001f59e8` @ `0x1001f59e8`

```c

undefined8 * FUN_1001f59e8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 **local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_10146e070;
  operator_new(0x2c88);
  lVar1 = thunk_FUN_1002af074();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  puVar8 = param_1 + 6;
  *puVar8 = &PTR_FUN_10146e058;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_thunk_FUN_1001f5dd4_10146dc00;
  param_1[2] = &PTR_FUN_10146dc68;
  param_1[5] = &PTR_FUN_10146e000;
  puVar6 = param_1 + 9;
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  operator_new(0x38);
  lVar1 = thunk_FUN_1001f25c4();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_1002098e0();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_100217944();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x48);
  lVar1 = thunk_FUN_1001f564c();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f641c();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f52c0();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e99e0();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_100207c5c();
    param_1[0xb] = lVar1;
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e85e4();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_10021844c();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
  }
  if (*(int *)(param_1 + 9) != 0) {
    uVar2 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x10))();
      uVar9 = param_1[1];
      uVar4 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x20))();
      uVar5 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x18))();
      FUN_1002afb68(uVar9,uVar4,0,uVar3,uVar5);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 9));
  }
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) != 0) goto LAB_1001f5ce4;
  puVar6 = (undefined8 *)FUN_1002d6d8c(*(undefined8 *)(param_1[0xb] + 8));
  if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
    uVar2 = puVar6[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001f62bc();
    }
    puVar6 = (undefined8 *)*puVar6;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)puVar6 + 0x17);
  }
  if (uVar2 < 0x17) {
    pppuVar7 = &local_58;
    uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
    if (uVar2 != 0) goto LAB_1001f5c9c;
  }
  else {
    uVar10 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pppuVar7 = operator_new(uVar10);
    uStack_48 = uVar10 | 0x8000000000000000;
    local_58 = pppuVar7;
    local_50 = uVar2;
LAB_1001f5c9c:
    _memcpy(pppuVar7,puVar6,uVar2);
  }
  *(undefined1 *)((long)pppuVar7 + uVar2) = 0;
  pppuVar7 = (undefined8 ***)local_58;
  if (-1 < (long)uStack_48) {
    pppuVar7 = &local_58;
  }
  FUN_100102198("blueprintsOwned",pppuVar7,1);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
LAB_1001f5ce4:
  FUN_1002afc3c(param_1[1],0);
  FUN_10015d3ec();
  FUN_100166ab8();
  FUN_1001dac1c(puVar8,"TALENTS",param_1,FUN_1001f63c8);
  FUN_1001dac1c(puVar8,"HERO",param_1,FUN_1001f6404);
  return param_1;
}


```

---

