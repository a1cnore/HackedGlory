# Match Protocol Analysis — Ghidra Extract

Binary: GameKindred (Vainglory 4.13.4, arm64)

## Phase 1: Game Server Connection Code

### String: `gameHost` (1 refs)

- `FUN_10010522c` @ `0x10010522c` (ref from `0x100105310`)

### String: `proxyHost` (1 refs)

- `FUN_10010522c` @ `0x10010522c` (ref from `0x100105338`)

### String: `Game_Match_Start` (1 refs)

- `FUN_100102ec8` @ `0x100102ec8` (ref from `0x100102f58`)

### String: `Game_Match_Reconnect` (1 refs)

- `FUN_100103048` @ `0x100103048` (ref from `0x1001030c8`)

### String: `Game_Match_Finish` (1 refs)

- `FUN_1001030fc` @ `0x1001030fc` (ref from `0x1001031a4`)

### String: `Game_Match_Declined` (1 refs)

- `FUN_100102480` @ `0x100102480` (ref from `0x1001024d8`)

### String: `MENU_CONNECTING_TO_GAME` (1 refs)

- `FUN_100268944` @ `0x100268944` (ref from `0x100268a40`)

### String: `Quality_MatchEnd_Ping_Report` (1 refs)

- `FUN_10010522c` @ `0x10010522c` (ref from `0x10010535c`)

### Decompiled Connection Functions

#### `FUN_10010522c` @ `0x10010522c`

Indicators: 

<details><summary>Decompiled code (1391 chars)</summary>

```c

void FUN_10010522c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,char *param_6)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_68 = &local_60;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = "maxPing";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(param_1);
    local_70 = "numPingSpikes";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,param_4);
    local_70 = "avgPing";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(param_2);
    local_70 = "stdDev";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(param_3);
    pcVar1 = "";
    if (param_5 != (char *)0x0) {
      pcVar1 = param_5;
    }
    local_70 = "gameHost";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,pcVar1);
    pcVar1 = "";
    if (param_6 != (char *)0x0) {
      pcVar1 = param_6;
    }
    local_70 = "proxyHost";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,pcVar1);
    FUN_10052b20c("Quality_MatchEnd_Ping_Report",&puStack_68);
    FUN_10052b1e0("Quality_MatchEnd_Ping_Report",&puStack_68);
    FUN_10010a220(&puStack_68,local_60);
  }
  return;
}


```

</details>

Called by: `FUN_10003263c` 

#### `FUN_100102ec8` @ `0x100102ec8`

Indicators: 

<details><summary>Decompiled code (1752 chars)</summary>

```c

void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

Called by: `FUN_100033210` 

#### `FUN_100103048` @ `0x100103048`

Indicators: 

<details><summary>Decompiled code (613 chars)</summary>

```c

void FUN_100103048(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar1 = FUN_10034cd20();
  local_50 = "mode";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar2,uVar1);
  uVar1 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar1);
  FUN_10052b20c("Game_Match_Reconnect",&local_48);
  FUN_10052b1e0("Game_Match_Reconnect",&local_48);
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

Called by: `FUN_100033210` 

#### `FUN_1001030fc` @ `0x1001030fc`

Indicators: 

<details><summary>Decompiled code (767 chars)</summary>

```c

void FUN_1001030fc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  char *local_38;
  
  uVar2 = FUN_100327e00();
  puVar3 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar3;
  local_38 = "eloTier5v5";
  uVar2 = FUN_100101fac(param_1,&local_38);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar3 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar3;
  local_38 = "eloTier3v3";
  uVar2 = FUN_100101fac(param_1,&local_38);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_10034cd14();
  local_38 = "botDifficulty";
  FUN_100101fac(param_1,&local_38);
  FUN_10052b18c(uVar2);
  FUN_10052b20c("Game_Match_Finish",param_1);
  FUN_10052b1e0("Game_Match_Finish",param_1);
  FUN_10052b230("evuukx");
  return;
}


```

</details>

Called by: `FUN_100116f88` 

#### `FUN_100102480` @ `0x100102480`

Indicators: 

<details><summary>Decompiled code (586 chars)</summary>

```c

void FUN_100102480(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  local_40 = "reason";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,plVar1);
  FUN_10052b20c("Game_Match_Declined",&puStack_38);
  FUN_10052b1e0("Game_Match_Declined",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}


```

</details>

Called by: `FUN_1001fff28` `FUN_1002005d8` 

#### `FUN_100268944` @ `0x100268944`

Indicators: 

<details><summary>Decompiled code (996 chars)</summary>

```c

long * FUN_100268944(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_100268a70_10147ce20;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  thunk_FUN_1001c0c34(param_1 + 0x5b,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b,1);
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar2,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar3 = FUN_1004e0150("MENU_CONNECTING_TO_GAME",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}


```

</details>

Called by: `thunk_FUN_100268944` 

## Phase 2: XOR / Encryption Analysis

### send()/recv() Import Analysis

**`_send`** @ `0x101149950` — 9 callers
  - `FUN_100617d0c` @ `0x100617d0c`
  - `FUN_1004f2c38` @ `0x1004f2c38`
  - `FUN_10052019c` @ `0x10052019c`
  - `FUN_101100a08` @ `0x101100a08`
  - `FUN_1010d94a0` @ `0x1010d94a0`
  - `FUN_1010e881c` @ `0x1010e881c`
  - `FUN_1010e8538` @ `0x1010e8538`
  - `FUN_1010e88b0` @ `0x1010e88b0`
  - `_send` @ `0x101149950`

**`_send`** @ `0x194` — 0 callers

**`_recv`** @ `0x101149884` — 7 callers
  - `FUN_100617d9c` @ `0x100617d9c`
  - `FUN_10052019c` @ `0x10052019c`
  - `FUN_101100a08` @ `0x101100a08`
  - `FUN_1010d959c` @ `0x1010d959c`
  - `FUN_1010d9a7c` @ `0x1010d9a7c`
  - `FUN_1010eecec` @ `0x1010eecec`
  - `_recv` @ `0x101149884`

**`_recv`** @ `0x183` — 0 callers

**`_connect`** @ `0x101148fcc` — 5 callers
  - `FUN_1004e264c` @ `0x1004e264c`
  - `FUN_1004f2c38` @ `0x1004f2c38`
  - `FUN_100617810` @ `0x100617810`
  - `FUN_1010ee560` @ `0x1010ee560`
  - `_connect` @ `0x101148fcc`

**`_connect`** @ `0xc9` — 0 callers

**`_socket`** @ `0x1011499ec` — 7 callers
  - `FUN_100617aa4` @ `0x100617aa4`
  - `FUN_1004e264c` @ `0x1004e264c`
  - `FUN_1004f2c38` @ `0x1004f2c38`
  - `FUN_100617810` @ `0x100617810`
  - `FUN_1010f2db4` @ `0x1010f2db4`
  - `FUN_1010eedbc` @ `0x1010eedbc`
  - `_socket` @ `0x1011499ec`

**`_socket`** @ `0x1a1` — 0 callers

**`_write`** @ `0x101149db8` — 5 callers
  - `FUN_1004e2594` @ `0x1004e2594`
  - `FUN_1010d062c` @ `0x1010d062c`
  - `FUN_101109384` @ `0x101109384`
  - `_write` @ `0x101149db8`
  - `FUN_100658e04` @ `0x100658e04`

**`_write`** @ `0x1f2` — 0 callers

**`_read`** @ `0x101149860` — 7 callers
  - `FUN_1004e2550` @ `0x1004e2550`
  - `FUN_1010d062c` @ `0x1010d062c`
  - `FUN_10110672c` @ `0x10110672c`
  - `FUN_1010e7540` @ `0x1010e7540`
  - `FUN_1011092bc` @ `0x1011092bc`
  - `_read` @ `0x101149860`
  - `FUN_100658dfc` @ `0x100658dfc`

**`_read`** @ `0x180` — 0 callers

### Functions with XOR patterns near connection code

#### `FUN_1000fe308` @ `0x1000fe308`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_1000fe308(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23088 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23088)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23088)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23088)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23088 != '\0')) {
    auVar4 = FUN_1000fe37c();
    FUN_10052c39c(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_100101450` @ `0x100101450`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_100101450(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23089 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23089)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23089)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23089)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23089 != '\0')) {
    auVar4 = FUN_1000fe474();
    FUN_10052c418(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_10010a9ac` @ `0x10010a9ac`

XOR + LOOP 

<details><summary>Decompiled</summary>

```c

undefined8 * FUN_10010a9ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 **local_68 [2];
  char local_51;
  
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  FUN_100529300(param_1[0x19],param_1 + 10);
  puVar8 = (uint *)(param_1 + 7);
  if (*puVar8 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1[8] + uVar9 * 8);
      FUN_10003330c(local_68,lVar7 + 0x40);
      pppuVar2 = (undefined8 ***)local_68[0];
      if (-1 < local_51) {
        pppuVar2 = local_68;
      }
      FUN_1005290ac(param_1[0x19],lVar7,pppuVar2);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      plVar4 = *(long **)(param_1[8] + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar8);
  }
  if (param_1[8] != 0) {
    *puVar8 = 0;
  }
  FUN_100528c18(param_1[0x19],param_1);
  *(undefined1 *)((long)param_1 + 0x17d) = 0;
  bVar3 = FUN_100126968();
  *(byte *)((long)param_1 + 0x17e) = bVar3 ^ 1;
  (**(code **)(*(long *)param_1[0x19] + 0x58))();
  FUN_10052b268(param_1[0x19]);
  puVar5 = (uint *)FUN_100316150();
  if (*puVar5 != 0) {
    lVar7 = *(long *)(puVar5 + 2);
    lVar6 = (ulong)*puVar5 << 5;
    do {
      puVar1 = (undefined8 *)(lVar7 + 8);
      lVar7 = lVar7 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_10010b1a8(param_1 + 0x17,1);
  thunk_FUN_10030918c(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    puVar8[0] = 0;
    puVar8[1] = 0;
    param_1[8] = 0;
  }
  FUN_10014f51c(param_1 + 4);
  FUN_1004f0a9c(param_1 + 1);
  return param_1;
}


```

</details>

#### `FUN_10010bdf4` @ `0x10010bdf4`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10010bdf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar4 = FUN_1004f1680(param_2);
  if ((iVar4 != 0) && (*(int *)(param_2 + 0x240) == 0)) {
    param_2 = param_2 + 0x80;
    lVar1 = param_1 + 0xe8;
    uVar5 = FUN_1004e3634(lVar1);
    uVar6 = FUN_1004e3790(param_2,lVar1,uVar5);
    if ((uVar6 & 1) == 0) {
      iVar4 = FUN_1004e3624(param_2);
      if (iVar4 != 0) {
        FUN_1004e34c8(lVar1);
        if (*(char *)(param_1 + 0x127) < '\0') {
          **(undefined1 **)(param_1 + 0x110) = 0;
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x110) = 0;
          *(undefined1 *)(param_1 + 0x127) = 0;
        }
        if (*(char *)(param_1 + 0x157) < '\0') {
          **(undefined1 **)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
        if (*(char *)(param_1 + 0x16f) < '\0') {
          **(undefined1 **)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x158) = 0;
          *(undefined1 *)(param_1 + 0x16f) = 0;
        }
        *(undefined1 *)(param_1 + 0x17d) = 0;
        bVar3 = FUN_100126968();
        *(byte *)(param_1 + 0x17e) = bVar3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 200) + 0x58))();
        return;
      }
      FUN_1000153b4(lVar1,param_2);
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(lVar1,&local_48);
      pppuVar2 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar2 = &local_48;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0xa0))(*(long **)(param_1 + 200),pppuVar2);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
  }
  return;
}


```

</details>

#### `FUN_10010fdf0` @ `0x10010fdf0`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

undefined8 FUN_10010fdf0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (((*param_3 ^ *param_2) & 0x1ffffffff) == 0) {
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    uVar10 = (ulong)bVar5;
    sVar1 = param_2[2];
    if (-1 < (char)bVar5) {
      sVar1 = uVar10;
    }
    bVar6 = *(byte *)((long)param_3 + 0x1f);
    sVar2 = param_3[2];
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar1 == sVar2) {
      puVar12 = (ulong *)param_2[1];
      puVar3 = puVar12;
      if (-1 < (char)bVar5) {
        puVar3 = param_2 + 1;
      }
      puVar13 = (ulong *)param_3[1];
      if (-1 < (char)bVar6) {
        puVar13 = param_3 + 1;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
          return 0;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
          return 0;
        }
        pcVar11 = (char *)((long)param_2 + 9);
        while( true ) {
          uVar10 = uVar10 - 1;
          puVar13 = (ulong *)((long)puVar13 + 1);
          if (uVar10 == 0) break;
          cVar4 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          if (cVar4 != *(char *)puVar13) {
            return 0;
          }
        }
      }
      uVar8 = FUN_1004e3634(param_3 + 4);
      uVar8 = FUN_1004e3790(param_2 + 4,param_3 + 4,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 6);
      uVar8 = FUN_1004e3790(param_2 + 6,param_3 + 6,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 8);
      uVar8 = FUN_1004e3790(param_2 + 8,param_3 + 8,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      bVar5 = *(byte *)((long)param_2 + 0x67);
      uVar10 = (ulong)bVar5;
      sVar1 = param_2[0xb];
      if (-1 < (char)bVar5) {
        sVar1 = uVar10;
      }
      bVar6 = *(byte *)((long)param_3 + 0x67);
      sVar2 = param_3[0xb];
      if (-1 < (char)bVar6) {
        sVar2 = (ulong)bVar6;
      }
      if (sVar1 == sVar2) {
        puVar12 = (ulong *)param_2[10];
        puVar3 = puVar12;
        if (-1 < (char)bVar5) {
          puVar3 = param_2 + 10;
        }
        puVar13 = (ulong *)param_3[10];
        if (-1 < (char)bVar6) {
          puVar13 = param_3 + 10;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
            return 0;
          }
        }
        else if (sVar1 != 0) {
          if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
            return 0;
          }
          pcVar11 = (char *)((long)param_2 + 0x51);
          while( true ) {
            uVar10 = uVar10 - 1;
            puVar13 = (ulong *)((long)puVar13 + 1);
            if (uVar10 == 0) break;
            cVar4 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            if (cVar4 != *(char *)puVar13) {
              return 0;
            }
          }
        }
        uVar8 = FUN_1004e3634(param_3 + 0xd);
        uVar8 = FUN_1004e3790(param_2 + 0xd,param_3 + 0xd,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar8 = FUN_1004e3634(param_3 + 0xf);
        uVar8 = FUN_1004e3790(param_2 + 0xf,param_3 + 0xf,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        bVar5 = *(byte *)((long)param_2 + 0x9f);
        uVar10 = (ulong)bVar5;
        sVar1 = param_2[0x12];
        if (-1 < (char)bVar5) {
          sVar1 = uVar10;
        }
        bVar6 = *(byte *)((long)param_3 + 0x9f);
        sVar2 = param_3[0x12];
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          puVar12 = (ulong *)param_2[0x11];
          puVar3 = puVar12;
          if (-1 < (char)bVar5) {
            puVar3 = param_2 + 0x11;
          }
          puVar13 = (ulong *)param_3[0x11];
          if (-1 < (char)bVar6) {
            puVar13 = param_3 + 0x11;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
              return 0;
            }
          }
          else if (sVar1 != 0) {
            if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
              return 0;
            }
            pcVar11 = (char *)((long)param_2 + 0x89);
            while( true ) {
              uVar10 = uVar10 - 1;
              puVar13 = (ulong *)((long)puVar13 + 1);
              if (uVar10 == 0) break;
              cVar4 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              if (cVar4 != *(char *)puVar13) {
                return 0;
              }
            }
          }
          if ((((((double)param_2[0x14] == (double)param_3[0x14]) &&
                ((((*param_2 & 0xffff) != 2 && ((short)*param_3 != 2)) ||
                 ((uint)param_2[0x15] == (uint)param_3[0x15])))) &&
               ((((*(uint *)((long)param_2 + 0xac) == *(uint *)((long)param_3 + 0xac) &&
                  ((uint)param_2[0x16] == (uint)param_3[0x16])) &&
                 ((((uint)*param_3 ^ (uint)*param_2) & 0xff0000) == 0)) &&
                (((uint)param_2[0x1d] == (uint)param_3[0x1d] &&
                 (*(uint *)((long)param_2 + 0xec) == *(uint *)((long)param_3 + 0xec))))))) &&
              (((((uint)param_2[0x1e] == (uint)param_3[0x1e] &&
                 ((((*(float *)((long)param_2 + 0xf4) == *(float *)((long)param_3 + 0xf4) &&
                    (*(float *)(param_2 + 0x1f) == *(float *)(param_3 + 0x1f))) &&
                   (*(float *)((long)param_2 + 0xfc) == *(float *)((long)param_3 + 0xfc))) &&
              
// ...truncated...
```

</details>

#### `FUN_1000e50cc` @ `0x1000e50cc`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

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


```

</details>

#### `FUN_1000fe308` @ `0x1000fe308`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_1000fe308(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23088 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23088)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23088)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23088)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23088 != '\0')) {
    auVar4 = FUN_1000fe37c();
    FUN_10052c39c(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_100101450` @ `0x100101450`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_100101450(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23089 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23089)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23089)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23089)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23089 != '\0')) {
    auVar4 = FUN_1000fe474();
    FUN_10052c418(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_10010a9ac` @ `0x10010a9ac`

XOR + LOOP 

<details><summary>Decompiled</summary>

```c

undefined8 * FUN_10010a9ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 **local_68 [2];
  char local_51;
  
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  FUN_100529300(param_1[0x19],param_1 + 10);
  puVar8 = (uint *)(param_1 + 7);
  if (*puVar8 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1[8] + uVar9 * 8);
      FUN_10003330c(local_68,lVar7 + 0x40);
      pppuVar2 = (undefined8 ***)local_68[0];
      if (-1 < local_51) {
        pppuVar2 = local_68;
      }
      FUN_1005290ac(param_1[0x19],lVar7,pppuVar2);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      plVar4 = *(long **)(param_1[8] + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar8);
  }
  if (param_1[8] != 0) {
    *puVar8 = 0;
  }
  FUN_100528c18(param_1[0x19],param_1);
  *(undefined1 *)((long)param_1 + 0x17d) = 0;
  bVar3 = FUN_100126968();
  *(byte *)((long)param_1 + 0x17e) = bVar3 ^ 1;
  (**(code **)(*(long *)param_1[0x19] + 0x58))();
  FUN_10052b268(param_1[0x19]);
  puVar5 = (uint *)FUN_100316150();
  if (*puVar5 != 0) {
    lVar7 = *(long *)(puVar5 + 2);
    lVar6 = (ulong)*puVar5 << 5;
    do {
      puVar1 = (undefined8 *)(lVar7 + 8);
      lVar7 = lVar7 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_10010b1a8(param_1 + 0x17,1);
  thunk_FUN_10030918c(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    puVar8[0] = 0;
    puVar8[1] = 0;
    param_1[8] = 0;
  }
  FUN_10014f51c(param_1 + 4);
  FUN_1004f0a9c(param_1 + 1);
  return param_1;
}


```

</details>

#### `FUN_10010bdf4` @ `0x10010bdf4`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10010bdf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar4 = FUN_1004f1680(param_2);
  if ((iVar4 != 0) && (*(int *)(param_2 + 0x240) == 0)) {
    param_2 = param_2 + 0x80;
    lVar1 = param_1 + 0xe8;
    uVar5 = FUN_1004e3634(lVar1);
    uVar6 = FUN_1004e3790(param_2,lVar1,uVar5);
    if ((uVar6 & 1) == 0) {
      iVar4 = FUN_1004e3624(param_2);
      if (iVar4 != 0) {
        FUN_1004e34c8(lVar1);
        if (*(char *)(param_1 + 0x127) < '\0') {
          **(undefined1 **)(param_1 + 0x110) = 0;
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x110) = 0;
          *(undefined1 *)(param_1 + 0x127) = 0;
        }
        if (*(char *)(param_1 + 0x157) < '\0') {
          **(undefined1 **)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
        if (*(char *)(param_1 + 0x16f) < '\0') {
          **(undefined1 **)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x158) = 0;
          *(undefined1 *)(param_1 + 0x16f) = 0;
        }
        *(undefined1 *)(param_1 + 0x17d) = 0;
        bVar3 = FUN_100126968();
        *(byte *)(param_1 + 0x17e) = bVar3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 200) + 0x58))();
        return;
      }
      FUN_1000153b4(lVar1,param_2);
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(lVar1,&local_48);
      pppuVar2 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar2 = &local_48;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0xa0))(*(long **)(param_1 + 200),pppuVar2);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
  }
  return;
}


```

</details>

#### `FUN_10010fdf0` @ `0x10010fdf0`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

undefined8 FUN_10010fdf0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (((*param_3 ^ *param_2) & 0x1ffffffff) == 0) {
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    uVar10 = (ulong)bVar5;
    sVar1 = param_2[2];
    if (-1 < (char)bVar5) {
      sVar1 = uVar10;
    }
    bVar6 = *(byte *)((long)param_3 + 0x1f);
    sVar2 = param_3[2];
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar1 == sVar2) {
      puVar12 = (ulong *)param_2[1];
      puVar3 = puVar12;
      if (-1 < (char)bVar5) {
        puVar3 = param_2 + 1;
      }
      puVar13 = (ulong *)param_3[1];
      if (-1 < (char)bVar6) {
        puVar13 = param_3 + 1;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
          return 0;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
          return 0;
        }
        pcVar11 = (char *)((long)param_2 + 9);
        while( true ) {
          uVar10 = uVar10 - 1;
          puVar13 = (ulong *)((long)puVar13 + 1);
          if (uVar10 == 0) break;
          cVar4 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          if (cVar4 != *(char *)puVar13) {
            return 0;
          }
        }
      }
      uVar8 = FUN_1004e3634(param_3 + 4);
      uVar8 = FUN_1004e3790(param_2 + 4,param_3 + 4,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 6);
      uVar8 = FUN_1004e3790(param_2 + 6,param_3 + 6,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 8);
      uVar8 = FUN_1004e3790(param_2 + 8,param_3 + 8,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      bVar5 = *(byte *)((long)param_2 + 0x67);
      uVar10 = (ulong)bVar5;
      sVar1 = param_2[0xb];
      if (-1 < (char)bVar5) {
        sVar1 = uVar10;
      }
      bVar6 = *(byte *)((long)param_3 + 0x67);
      sVar2 = param_3[0xb];
      if (-1 < (char)bVar6) {
        sVar2 = (ulong)bVar6;
      }
      if (sVar1 == sVar2) {
        puVar12 = (ulong *)param_2[10];
        puVar3 = puVar12;
        if (-1 < (char)bVar5) {
          puVar3 = param_2 + 10;
        }
        puVar13 = (ulong *)param_3[10];
        if (-1 < (char)bVar6) {
          puVar13 = param_3 + 10;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
            return 0;
          }
        }
        else if (sVar1 != 0) {
          if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
            return 0;
          }
          pcVar11 = (char *)((long)param_2 + 0x51);
          while( true ) {
            uVar10 = uVar10 - 1;
            puVar13 = (ulong *)((long)puVar13 + 1);
            if (uVar10 == 0) break;
            cVar4 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            if (cVar4 != *(char *)puVar13) {
              return 0;
            }
          }
        }
        uVar8 = FUN_1004e3634(param_3 + 0xd);
        uVar8 = FUN_1004e3790(param_2 + 0xd,param_3 + 0xd,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar8 = FUN_1004e3634(param_3 + 0xf);
        uVar8 = FUN_1004e3790(param_2 + 0xf,param_3 + 0xf,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        bVar5 = *(byte *)((long)param_2 + 0x9f);
        uVar10 = (ulong)bVar5;
        sVar1 = param_2[0x12];
        if (-1 < (char)bVar5) {
          sVar1 = uVar10;
        }
        bVar6 = *(byte *)((long)param_3 + 0x9f);
        sVar2 = param_3[0x12];
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          puVar12 = (ulong *)param_2[0x11];
          puVar3 = puVar12;
          if (-1 < (char)bVar5) {
            puVar3 = param_2 + 0x11;
          }
          puVar13 = (ulong *)param_3[0x11];
          if (-1 < (char)bVar6) {
            puVar13 = param_3 + 0x11;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
              return 0;
            }
          }
          else if (sVar1 != 0) {
            if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
              return 0;
            }
            pcVar11 = (char *)((long)param_2 + 0x89);
            while( true ) {
              uVar10 = uVar10 - 1;
              puVar13 = (ulong *)((long)puVar13 + 1);
              if (uVar10 == 0) break;
              cVar4 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              if (cVar4 != *(char *)puVar13) {
                return 0;
              }
            }
          }
          if ((((((double)param_2[0x14] == (double)param_3[0x14]) &&
                ((((*param_2 & 0xffff) != 2 && ((short)*param_3 != 2)) ||
                 ((uint)param_2[0x15] == (uint)param_3[0x15])))) &&
               ((((*(uint *)((long)param_2 + 0xac) == *(uint *)((long)param_3 + 0xac) &&
                  ((uint)param_2[0x16] == (uint)param_3[0x16])) &&
                 ((((uint)*param_3 ^ (uint)*param_2) & 0xff0000) == 0)) &&
                (((uint)param_2[0x1d] == (uint)param_3[0x1d] &&
                 (*(uint *)((long)param_2 + 0xec) == *(uint *)((long)param_3 + 0xec))))))) &&
              (((((uint)param_2[0x1e] == (uint)param_3[0x1e] &&
                 ((((*(float *)((long)param_2 + 0xf4) == *(float *)((long)param_3 + 0xf4) &&
                    (*(float *)(param_2 + 0x1f) == *(float *)(param_3 + 0x1f))) &&
                   (*(float *)((long)param_2 + 0xfc) == *(float *)((long)param_3 + 0xfc))) &&
              
// ...truncated...
```

</details>

#### `FUN_1000e50cc` @ `0x1000e50cc`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

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


```

</details>

#### `FUN_1000fe308` @ `0x1000fe308`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_1000fe308(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23088 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23088)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23088)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23088)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23088 != '\0')) {
    auVar4 = FUN_1000fe37c();
    FUN_10052c39c(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_100101450` @ `0x100101450`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_100101450(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23089 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23089)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23089)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23089)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23089 != '\0')) {
    auVar4 = FUN_1000fe474();
    FUN_10052c418(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_10010a9ac` @ `0x10010a9ac`

XOR + LOOP 

<details><summary>Decompiled</summary>

```c

undefined8 * FUN_10010a9ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 **local_68 [2];
  char local_51;
  
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  FUN_100529300(param_1[0x19],param_1 + 10);
  puVar8 = (uint *)(param_1 + 7);
  if (*puVar8 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1[8] + uVar9 * 8);
      FUN_10003330c(local_68,lVar7 + 0x40);
      pppuVar2 = (undefined8 ***)local_68[0];
      if (-1 < local_51) {
        pppuVar2 = local_68;
      }
      FUN_1005290ac(param_1[0x19],lVar7,pppuVar2);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      plVar4 = *(long **)(param_1[8] + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar8);
  }
  if (param_1[8] != 0) {
    *puVar8 = 0;
  }
  FUN_100528c18(param_1[0x19],param_1);
  *(undefined1 *)((long)param_1 + 0x17d) = 0;
  bVar3 = FUN_100126968();
  *(byte *)((long)param_1 + 0x17e) = bVar3 ^ 1;
  (**(code **)(*(long *)param_1[0x19] + 0x58))();
  FUN_10052b268(param_1[0x19]);
  puVar5 = (uint *)FUN_100316150();
  if (*puVar5 != 0) {
    lVar7 = *(long *)(puVar5 + 2);
    lVar6 = (ulong)*puVar5 << 5;
    do {
      puVar1 = (undefined8 *)(lVar7 + 8);
      lVar7 = lVar7 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_10010b1a8(param_1 + 0x17,1);
  thunk_FUN_10030918c(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    puVar8[0] = 0;
    puVar8[1] = 0;
    param_1[8] = 0;
  }
  FUN_10014f51c(param_1 + 4);
  FUN_1004f0a9c(param_1 + 1);
  return param_1;
}


```

</details>

#### `FUN_10010bdf4` @ `0x10010bdf4`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10010bdf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar4 = FUN_1004f1680(param_2);
  if ((iVar4 != 0) && (*(int *)(param_2 + 0x240) == 0)) {
    param_2 = param_2 + 0x80;
    lVar1 = param_1 + 0xe8;
    uVar5 = FUN_1004e3634(lVar1);
    uVar6 = FUN_1004e3790(param_2,lVar1,uVar5);
    if ((uVar6 & 1) == 0) {
      iVar4 = FUN_1004e3624(param_2);
      if (iVar4 != 0) {
        FUN_1004e34c8(lVar1);
        if (*(char *)(param_1 + 0x127) < '\0') {
          **(undefined1 **)(param_1 + 0x110) = 0;
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x110) = 0;
          *(undefined1 *)(param_1 + 0x127) = 0;
        }
        if (*(char *)(param_1 + 0x157) < '\0') {
          **(undefined1 **)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
        if (*(char *)(param_1 + 0x16f) < '\0') {
          **(undefined1 **)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x158) = 0;
          *(undefined1 *)(param_1 + 0x16f) = 0;
        }
        *(undefined1 *)(param_1 + 0x17d) = 0;
        bVar3 = FUN_100126968();
        *(byte *)(param_1 + 0x17e) = bVar3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 200) + 0x58))();
        return;
      }
      FUN_1000153b4(lVar1,param_2);
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(lVar1,&local_48);
      pppuVar2 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar2 = &local_48;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0xa0))(*(long **)(param_1 + 200),pppuVar2);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
  }
  return;
}


```

</details>

#### `FUN_10010fdf0` @ `0x10010fdf0`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

undefined8 FUN_10010fdf0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (((*param_3 ^ *param_2) & 0x1ffffffff) == 0) {
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    uVar10 = (ulong)bVar5;
    sVar1 = param_2[2];
    if (-1 < (char)bVar5) {
      sVar1 = uVar10;
    }
    bVar6 = *(byte *)((long)param_3 + 0x1f);
    sVar2 = param_3[2];
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar1 == sVar2) {
      puVar12 = (ulong *)param_2[1];
      puVar3 = puVar12;
      if (-1 < (char)bVar5) {
        puVar3 = param_2 + 1;
      }
      puVar13 = (ulong *)param_3[1];
      if (-1 < (char)bVar6) {
        puVar13 = param_3 + 1;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
          return 0;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
          return 0;
        }
        pcVar11 = (char *)((long)param_2 + 9);
        while( true ) {
          uVar10 = uVar10 - 1;
          puVar13 = (ulong *)((long)puVar13 + 1);
          if (uVar10 == 0) break;
          cVar4 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          if (cVar4 != *(char *)puVar13) {
            return 0;
          }
        }
      }
      uVar8 = FUN_1004e3634(param_3 + 4);
      uVar8 = FUN_1004e3790(param_2 + 4,param_3 + 4,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 6);
      uVar8 = FUN_1004e3790(param_2 + 6,param_3 + 6,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 8);
      uVar8 = FUN_1004e3790(param_2 + 8,param_3 + 8,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      bVar5 = *(byte *)((long)param_2 + 0x67);
      uVar10 = (ulong)bVar5;
      sVar1 = param_2[0xb];
      if (-1 < (char)bVar5) {
        sVar1 = uVar10;
      }
      bVar6 = *(byte *)((long)param_3 + 0x67);
      sVar2 = param_3[0xb];
      if (-1 < (char)bVar6) {
        sVar2 = (ulong)bVar6;
      }
      if (sVar1 == sVar2) {
        puVar12 = (ulong *)param_2[10];
        puVar3 = puVar12;
        if (-1 < (char)bVar5) {
          puVar3 = param_2 + 10;
        }
        puVar13 = (ulong *)param_3[10];
        if (-1 < (char)bVar6) {
          puVar13 = param_3 + 10;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
            return 0;
          }
        }
        else if (sVar1 != 0) {
          if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
            return 0;
          }
          pcVar11 = (char *)((long)param_2 + 0x51);
          while( true ) {
            uVar10 = uVar10 - 1;
            puVar13 = (ulong *)((long)puVar13 + 1);
            if (uVar10 == 0) break;
            cVar4 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            if (cVar4 != *(char *)puVar13) {
              return 0;
            }
          }
        }
        uVar8 = FUN_1004e3634(param_3 + 0xd);
        uVar8 = FUN_1004e3790(param_2 + 0xd,param_3 + 0xd,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar8 = FUN_1004e3634(param_3 + 0xf);
        uVar8 = FUN_1004e3790(param_2 + 0xf,param_3 + 0xf,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        bVar5 = *(byte *)((long)param_2 + 0x9f);
        uVar10 = (ulong)bVar5;
        sVar1 = param_2[0x12];
        if (-1 < (char)bVar5) {
          sVar1 = uVar10;
        }
        bVar6 = *(byte *)((long)param_3 + 0x9f);
        sVar2 = param_3[0x12];
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          puVar12 = (ulong *)param_2[0x11];
          puVar3 = puVar12;
          if (-1 < (char)bVar5) {
            puVar3 = param_2 + 0x11;
          }
          puVar13 = (ulong *)param_3[0x11];
          if (-1 < (char)bVar6) {
            puVar13 = param_3 + 0x11;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
              return 0;
            }
          }
          else if (sVar1 != 0) {
            if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
              return 0;
            }
            pcVar11 = (char *)((long)param_2 + 0x89);
            while( true ) {
              uVar10 = uVar10 - 1;
              puVar13 = (ulong *)((long)puVar13 + 1);
              if (uVar10 == 0) break;
              cVar4 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              if (cVar4 != *(char *)puVar13) {
                return 0;
              }
            }
          }
          if ((((((double)param_2[0x14] == (double)param_3[0x14]) &&
                ((((*param_2 & 0xffff) != 2 && ((short)*param_3 != 2)) ||
                 ((uint)param_2[0x15] == (uint)param_3[0x15])))) &&
               ((((*(uint *)((long)param_2 + 0xac) == *(uint *)((long)param_3 + 0xac) &&
                  ((uint)param_2[0x16] == (uint)param_3[0x16])) &&
                 ((((uint)*param_3 ^ (uint)*param_2) & 0xff0000) == 0)) &&
                (((uint)param_2[0x1d] == (uint)param_3[0x1d] &&
                 (*(uint *)((long)param_2 + 0xec) == *(uint *)((long)param_3 + 0xec))))))) &&
              (((((uint)param_2[0x1e] == (uint)param_3[0x1e] &&
                 ((((*(float *)((long)param_2 + 0xf4) == *(float *)((long)param_3 + 0xf4) &&
                    (*(float *)(param_2 + 0x1f) == *(float *)(param_3 + 0x1f))) &&
                   (*(float *)((long)param_2 + 0xfc) == *(float *)((long)param_3 + 0xfc))) &&
              
// ...truncated...
```

</details>

#### `FUN_1000e50cc` @ `0x1000e50cc`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

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


```

</details>

#### `FUN_1000fe308` @ `0x1000fe308`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_1000fe308(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23088 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23088)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23088)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23088)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23088 != '\0')) {
    auVar4 = FUN_1000fe37c();
    FUN_10052c39c(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_100101450` @ `0x100101450`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_100101450(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23089 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23089)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23089)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23089)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23089 != '\0')) {
    auVar4 = FUN_1000fe474();
    FUN_10052c418(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_10010a9ac` @ `0x10010a9ac`

XOR + LOOP 

<details><summary>Decompiled</summary>

```c

undefined8 * FUN_10010a9ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 **local_68 [2];
  char local_51;
  
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  FUN_100529300(param_1[0x19],param_1 + 10);
  puVar8 = (uint *)(param_1 + 7);
  if (*puVar8 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1[8] + uVar9 * 8);
      FUN_10003330c(local_68,lVar7 + 0x40);
      pppuVar2 = (undefined8 ***)local_68[0];
      if (-1 < local_51) {
        pppuVar2 = local_68;
      }
      FUN_1005290ac(param_1[0x19],lVar7,pppuVar2);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      plVar4 = *(long **)(param_1[8] + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar8);
  }
  if (param_1[8] != 0) {
    *puVar8 = 0;
  }
  FUN_100528c18(param_1[0x19],param_1);
  *(undefined1 *)((long)param_1 + 0x17d) = 0;
  bVar3 = FUN_100126968();
  *(byte *)((long)param_1 + 0x17e) = bVar3 ^ 1;
  (**(code **)(*(long *)param_1[0x19] + 0x58))();
  FUN_10052b268(param_1[0x19]);
  puVar5 = (uint *)FUN_100316150();
  if (*puVar5 != 0) {
    lVar7 = *(long *)(puVar5 + 2);
    lVar6 = (ulong)*puVar5 << 5;
    do {
      puVar1 = (undefined8 *)(lVar7 + 8);
      lVar7 = lVar7 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_10010b1a8(param_1 + 0x17,1);
  thunk_FUN_10030918c(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    puVar8[0] = 0;
    puVar8[1] = 0;
    param_1[8] = 0;
  }
  FUN_10014f51c(param_1 + 4);
  FUN_1004f0a9c(param_1 + 1);
  return param_1;
}


```

</details>

#### `FUN_10010bdf4` @ `0x10010bdf4`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10010bdf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar4 = FUN_1004f1680(param_2);
  if ((iVar4 != 0) && (*(int *)(param_2 + 0x240) == 0)) {
    param_2 = param_2 + 0x80;
    lVar1 = param_1 + 0xe8;
    uVar5 = FUN_1004e3634(lVar1);
    uVar6 = FUN_1004e3790(param_2,lVar1,uVar5);
    if ((uVar6 & 1) == 0) {
      iVar4 = FUN_1004e3624(param_2);
      if (iVar4 != 0) {
        FUN_1004e34c8(lVar1);
        if (*(char *)(param_1 + 0x127) < '\0') {
          **(undefined1 **)(param_1 + 0x110) = 0;
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x110) = 0;
          *(undefined1 *)(param_1 + 0x127) = 0;
        }
        if (*(char *)(param_1 + 0x157) < '\0') {
          **(undefined1 **)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
        if (*(char *)(param_1 + 0x16f) < '\0') {
          **(undefined1 **)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x158) = 0;
          *(undefined1 *)(param_1 + 0x16f) = 0;
        }
        *(undefined1 *)(param_1 + 0x17d) = 0;
        bVar3 = FUN_100126968();
        *(byte *)(param_1 + 0x17e) = bVar3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 200) + 0x58))();
        return;
      }
      FUN_1000153b4(lVar1,param_2);
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(lVar1,&local_48);
      pppuVar2 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar2 = &local_48;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0xa0))(*(long **)(param_1 + 200),pppuVar2);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
  }
  return;
}


```

</details>

#### `FUN_10010fdf0` @ `0x10010fdf0`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

undefined8 FUN_10010fdf0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (((*param_3 ^ *param_2) & 0x1ffffffff) == 0) {
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    uVar10 = (ulong)bVar5;
    sVar1 = param_2[2];
    if (-1 < (char)bVar5) {
      sVar1 = uVar10;
    }
    bVar6 = *(byte *)((long)param_3 + 0x1f);
    sVar2 = param_3[2];
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar1 == sVar2) {
      puVar12 = (ulong *)param_2[1];
      puVar3 = puVar12;
      if (-1 < (char)bVar5) {
        puVar3 = param_2 + 1;
      }
      puVar13 = (ulong *)param_3[1];
      if (-1 < (char)bVar6) {
        puVar13 = param_3 + 1;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
          return 0;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
          return 0;
        }
        pcVar11 = (char *)((long)param_2 + 9);
        while( true ) {
          uVar10 = uVar10 - 1;
          puVar13 = (ulong *)((long)puVar13 + 1);
          if (uVar10 == 0) break;
          cVar4 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          if (cVar4 != *(char *)puVar13) {
            return 0;
          }
        }
      }
      uVar8 = FUN_1004e3634(param_3 + 4);
      uVar8 = FUN_1004e3790(param_2 + 4,param_3 + 4,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 6);
      uVar8 = FUN_1004e3790(param_2 + 6,param_3 + 6,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 8);
      uVar8 = FUN_1004e3790(param_2 + 8,param_3 + 8,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      bVar5 = *(byte *)((long)param_2 + 0x67);
      uVar10 = (ulong)bVar5;
      sVar1 = param_2[0xb];
      if (-1 < (char)bVar5) {
        sVar1 = uVar10;
      }
      bVar6 = *(byte *)((long)param_3 + 0x67);
      sVar2 = param_3[0xb];
      if (-1 < (char)bVar6) {
        sVar2 = (ulong)bVar6;
      }
      if (sVar1 == sVar2) {
        puVar12 = (ulong *)param_2[10];
        puVar3 = puVar12;
        if (-1 < (char)bVar5) {
          puVar3 = param_2 + 10;
        }
        puVar13 = (ulong *)param_3[10];
        if (-1 < (char)bVar6) {
          puVar13 = param_3 + 10;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
            return 0;
          }
        }
        else if (sVar1 != 0) {
          if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
            return 0;
          }
          pcVar11 = (char *)((long)param_2 + 0x51);
          while( true ) {
            uVar10 = uVar10 - 1;
            puVar13 = (ulong *)((long)puVar13 + 1);
            if (uVar10 == 0) break;
            cVar4 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            if (cVar4 != *(char *)puVar13) {
              return 0;
            }
          }
        }
        uVar8 = FUN_1004e3634(param_3 + 0xd);
        uVar8 = FUN_1004e3790(param_2 + 0xd,param_3 + 0xd,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar8 = FUN_1004e3634(param_3 + 0xf);
        uVar8 = FUN_1004e3790(param_2 + 0xf,param_3 + 0xf,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        bVar5 = *(byte *)((long)param_2 + 0x9f);
        uVar10 = (ulong)bVar5;
        sVar1 = param_2[0x12];
        if (-1 < (char)bVar5) {
          sVar1 = uVar10;
        }
        bVar6 = *(byte *)((long)param_3 + 0x9f);
        sVar2 = param_3[0x12];
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          puVar12 = (ulong *)param_2[0x11];
          puVar3 = puVar12;
          if (-1 < (char)bVar5) {
            puVar3 = param_2 + 0x11;
          }
          puVar13 = (ulong *)param_3[0x11];
          if (-1 < (char)bVar6) {
            puVar13 = param_3 + 0x11;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
              return 0;
            }
          }
          else if (sVar1 != 0) {
            if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
              return 0;
            }
            pcVar11 = (char *)((long)param_2 + 0x89);
            while( true ) {
              uVar10 = uVar10 - 1;
              puVar13 = (ulong *)((long)puVar13 + 1);
              if (uVar10 == 0) break;
              cVar4 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              if (cVar4 != *(char *)puVar13) {
                return 0;
              }
            }
          }
          if ((((((double)param_2[0x14] == (double)param_3[0x14]) &&
                ((((*param_2 & 0xffff) != 2 && ((short)*param_3 != 2)) ||
                 ((uint)param_2[0x15] == (uint)param_3[0x15])))) &&
               ((((*(uint *)((long)param_2 + 0xac) == *(uint *)((long)param_3 + 0xac) &&
                  ((uint)param_2[0x16] == (uint)param_3[0x16])) &&
                 ((((uint)*param_3 ^ (uint)*param_2) & 0xff0000) == 0)) &&
                (((uint)param_2[0x1d] == (uint)param_3[0x1d] &&
                 (*(uint *)((long)param_2 + 0xec) == *(uint *)((long)param_3 + 0xec))))))) &&
              (((((uint)param_2[0x1e] == (uint)param_3[0x1e] &&
                 ((((*(float *)((long)param_2 + 0xf4) == *(float *)((long)param_3 + 0xf4) &&
                    (*(float *)(param_2 + 0x1f) == *(float *)(param_3 + 0x1f))) &&
                   (*(float *)((long)param_2 + 0xfc) == *(float *)((long)param_3 + 0xfc))) &&
              
// ...truncated...
```

</details>

#### `FUN_1000e50cc` @ `0x1000e50cc`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

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


```

</details>

#### `FUN_1000fe308` @ `0x1000fe308`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_1000fe308(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23088 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23088)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23088)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23088)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23088 != '\0')) {
    auVar4 = FUN_1000fe37c();
    FUN_10052c39c(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_100101450` @ `0x100101450`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_100101450(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23089 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23089)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23089)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23089)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23089 != '\0')) {
    auVar4 = FUN_1000fe474();
    FUN_10052c418(auVar4,0x40400000);
    return;
  }
  return;
}


```

</details>

#### `FUN_10010a9ac` @ `0x10010a9ac`

XOR + LOOP 

<details><summary>Decompiled</summary>

```c

undefined8 * FUN_10010a9ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 **local_68 [2];
  char local_51;
  
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  FUN_100529300(param_1[0x19],param_1 + 10);
  puVar8 = (uint *)(param_1 + 7);
  if (*puVar8 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1[8] + uVar9 * 8);
      FUN_10003330c(local_68,lVar7 + 0x40);
      pppuVar2 = (undefined8 ***)local_68[0];
      if (-1 < local_51) {
        pppuVar2 = local_68;
      }
      FUN_1005290ac(param_1[0x19],lVar7,pppuVar2);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      plVar4 = *(long **)(param_1[8] + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar8);
  }
  if (param_1[8] != 0) {
    *puVar8 = 0;
  }
  FUN_100528c18(param_1[0x19],param_1);
  *(undefined1 *)((long)param_1 + 0x17d) = 0;
  bVar3 = FUN_100126968();
  *(byte *)((long)param_1 + 0x17e) = bVar3 ^ 1;
  (**(code **)(*(long *)param_1[0x19] + 0x58))();
  FUN_10052b268(param_1[0x19]);
  puVar5 = (uint *)FUN_100316150();
  if (*puVar5 != 0) {
    lVar7 = *(long *)(puVar5 + 2);
    lVar6 = (ulong)*puVar5 << 5;
    do {
      puVar1 = (undefined8 *)(lVar7 + 8);
      lVar7 = lVar7 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_10010b1a8(param_1 + 0x17,1);
  thunk_FUN_10030918c(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    puVar8[0] = 0;
    puVar8[1] = 0;
    param_1[8] = 0;
  }
  FUN_10014f51c(param_1 + 4);
  FUN_1004f0a9c(param_1 + 1);
  return param_1;
}


```

</details>

#### `FUN_10010bdf4` @ `0x10010bdf4`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10010bdf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar4 = FUN_1004f1680(param_2);
  if ((iVar4 != 0) && (*(int *)(param_2 + 0x240) == 0)) {
    param_2 = param_2 + 0x80;
    lVar1 = param_1 + 0xe8;
    uVar5 = FUN_1004e3634(lVar1);
    uVar6 = FUN_1004e3790(param_2,lVar1,uVar5);
    if ((uVar6 & 1) == 0) {
      iVar4 = FUN_1004e3624(param_2);
      if (iVar4 != 0) {
        FUN_1004e34c8(lVar1);
        if (*(char *)(param_1 + 0x127) < '\0') {
          **(undefined1 **)(param_1 + 0x110) = 0;
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x110) = 0;
          *(undefined1 *)(param_1 + 0x127) = 0;
        }
        if (*(char *)(param_1 + 0x157) < '\0') {
          **(undefined1 **)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
        if (*(char *)(param_1 + 0x16f) < '\0') {
          **(undefined1 **)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x158) = 0;
          *(undefined1 *)(param_1 + 0x16f) = 0;
        }
        *(undefined1 *)(param_1 + 0x17d) = 0;
        bVar3 = FUN_100126968();
        *(byte *)(param_1 + 0x17e) = bVar3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 200) + 0x58))();
        return;
      }
      FUN_1000153b4(lVar1,param_2);
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(lVar1,&local_48);
      pppuVar2 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar2 = &local_48;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0xa0))(*(long **)(param_1 + 200),pppuVar2);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
  }
  return;
}


```

</details>

#### `FUN_10010fdf0` @ `0x10010fdf0`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

undefined8 FUN_10010fdf0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (((*param_3 ^ *param_2) & 0x1ffffffff) == 0) {
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    uVar10 = (ulong)bVar5;
    sVar1 = param_2[2];
    if (-1 < (char)bVar5) {
      sVar1 = uVar10;
    }
    bVar6 = *(byte *)((long)param_3 + 0x1f);
    sVar2 = param_3[2];
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar1 == sVar2) {
      puVar12 = (ulong *)param_2[1];
      puVar3 = puVar12;
      if (-1 < (char)bVar5) {
        puVar3 = param_2 + 1;
      }
      puVar13 = (ulong *)param_3[1];
      if (-1 < (char)bVar6) {
        puVar13 = param_3 + 1;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
          return 0;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
          return 0;
        }
        pcVar11 = (char *)((long)param_2 + 9);
        while( true ) {
          uVar10 = uVar10 - 1;
          puVar13 = (ulong *)((long)puVar13 + 1);
          if (uVar10 == 0) break;
          cVar4 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          if (cVar4 != *(char *)puVar13) {
            return 0;
          }
        }
      }
      uVar8 = FUN_1004e3634(param_3 + 4);
      uVar8 = FUN_1004e3790(param_2 + 4,param_3 + 4,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 6);
      uVar8 = FUN_1004e3790(param_2 + 6,param_3 + 6,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 8);
      uVar8 = FUN_1004e3790(param_2 + 8,param_3 + 8,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      bVar5 = *(byte *)((long)param_2 + 0x67);
      uVar10 = (ulong)bVar5;
      sVar1 = param_2[0xb];
      if (-1 < (char)bVar5) {
        sVar1 = uVar10;
      }
      bVar6 = *(byte *)((long)param_3 + 0x67);
      sVar2 = param_3[0xb];
      if (-1 < (char)bVar6) {
        sVar2 = (ulong)bVar6;
      }
      if (sVar1 == sVar2) {
        puVar12 = (ulong *)param_2[10];
        puVar3 = puVar12;
        if (-1 < (char)bVar5) {
          puVar3 = param_2 + 10;
        }
        puVar13 = (ulong *)param_3[10];
        if (-1 < (char)bVar6) {
          puVar13 = param_3 + 10;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
            return 0;
          }
        }
        else if (sVar1 != 0) {
          if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
            return 0;
          }
          pcVar11 = (char *)((long)param_2 + 0x51);
          while( true ) {
            uVar10 = uVar10 - 1;
            puVar13 = (ulong *)((long)puVar13 + 1);
            if (uVar10 == 0) break;
            cVar4 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            if (cVar4 != *(char *)puVar13) {
              return 0;
            }
          }
        }
        uVar8 = FUN_1004e3634(param_3 + 0xd);
        uVar8 = FUN_1004e3790(param_2 + 0xd,param_3 + 0xd,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar8 = FUN_1004e3634(param_3 + 0xf);
        uVar8 = FUN_1004e3790(param_2 + 0xf,param_3 + 0xf,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        bVar5 = *(byte *)((long)param_2 + 0x9f);
        uVar10 = (ulong)bVar5;
        sVar1 = param_2[0x12];
        if (-1 < (char)bVar5) {
          sVar1 = uVar10;
        }
        bVar6 = *(byte *)((long)param_3 + 0x9f);
        sVar2 = param_3[0x12];
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          puVar12 = (ulong *)param_2[0x11];
          puVar3 = puVar12;
          if (-1 < (char)bVar5) {
            puVar3 = param_2 + 0x11;
          }
          puVar13 = (ulong *)param_3[0x11];
          if (-1 < (char)bVar6) {
            puVar13 = param_3 + 0x11;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
              return 0;
            }
          }
          else if (sVar1 != 0) {
            if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
              return 0;
            }
            pcVar11 = (char *)((long)param_2 + 0x89);
            while( true ) {
              uVar10 = uVar10 - 1;
              puVar13 = (ulong *)((long)puVar13 + 1);
              if (uVar10 == 0) break;
              cVar4 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              if (cVar4 != *(char *)puVar13) {
                return 0;
              }
            }
          }
          if ((((((double)param_2[0x14] == (double)param_3[0x14]) &&
                ((((*param_2 & 0xffff) != 2 && ((short)*param_3 != 2)) ||
                 ((uint)param_2[0x15] == (uint)param_3[0x15])))) &&
               ((((*(uint *)((long)param_2 + 0xac) == *(uint *)((long)param_3 + 0xac) &&
                  ((uint)param_2[0x16] == (uint)param_3[0x16])) &&
                 ((((uint)*param_3 ^ (uint)*param_2) & 0xff0000) == 0)) &&
                (((uint)param_2[0x1d] == (uint)param_3[0x1d] &&
                 (*(uint *)((long)param_2 + 0xec) == *(uint *)((long)param_3 + 0xec))))))) &&
              (((((uint)param_2[0x1e] == (uint)param_3[0x1e] &&
                 ((((*(float *)((long)param_2 + 0xf4) == *(float *)((long)param_3 + 0xf4) &&
                    (*(float *)(param_2 + 0x1f) == *(float *)(param_3 + 0x1f))) &&
                   (*(float *)((long)param_2 + 0xfc) == *(float *)((long)param_3 + 0xfc))) &&
              
// ...truncated...
```

</details>

#### `FUN_100248d18` @ `0x100248d18`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

/* WARNING: Removing unreachable block (ram,0x000100249f9c) */
/* WARNING: Removing unreachable block (ram,0x000100249f40) */
/* WARNING: Removing unreachable block (ram,0x000100249ee8) */
/* WARNING: Removing unreachable block (ram,0x000100249f14) */
/* WARNING: Removing unreachable block (ram,0x000100249f6c) */
/* WARNING: Removing unreachable block (ram,0x00010024af50) */

long * FUN_100248d18(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
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
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  char *pcVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  bool bVar52;
  undefined1 uVar53;
  int iVar54;
  uint uVar55;
  long lVar56;
  long lVar57;
  undefined8 *puVar59;
  long *plVar60;
  ulong uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined4 uVar64;
  long *plVar65;
  long *plVar66;
  float fVar67;
  float fVar68;
  long *local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [4];
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  code *local_d0;
  long *plStack_c8;
  code *local_c0;
  code *local_b8;
  long *local_b0;
  undefined4 local_a8;
  long local_90;
  long *plVar58;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  plVar66 = param_1 + 0x518c;
  plVar3 = param_1 + 0x4fdb;
  plVar4 = param_1 + 0x4e7c;
  plVar5 = param_1 + 0x4c31;
  plVar6 = param_1 + 0x20a5;
  lVar56 = FUN_1001e6910();
  FUN_10014f4a0(lVar56 + 0x2c30);
  param_1[0x58c] = 0;
  *param_1 = (long)&PTR_thunk_FUN_10024b44c_101479fd8;
  param_1[0x586] = (long)&PTR_FUN_10147a228;
  param_1[0x589] = (long)&PTR_FUN_10147a5c0;
  param_1[0x58a] = (long)&PTR_FUN_10147a620;
  param_1[0x58b] = (long)&PTR_FUN_10147a678;
  pcVar7 = (code *)(param_1 + 0x58d);
  thunk_FUN_100218f18();
  plVar8 = param_1 + 0x594;
  FUN_1006505b8();
  plVar9 = param_1 + 0x5af;
  thunk_FUN_100181304(plVar9,0);
  plVar10 = param_1 + 0x866;
  thunk_FUN_100181304(plVar10,0);
  local_168 = param_1 + 0xb1d;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0xb43;
  thunk_FUN_100184f78();
  FUN_10064e264();
  plVar12 = param_1 + 0xef8;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xf44;
  FUN_1006421a8();
  param_1[0xf44] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xf55;
  thunk_FUN_100652c08();
  local_170 = param_1 + 0xf73;
  thunk_FUN_100652c08();
  FUN_10064e264();
  plVar15 = param_1 + 0xfa8;
  FUN_1006421a8(plVar15);
  param_1[0xfa8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  local_158 = param_1 + 0xfb9;
  thunk_FUN_1006543ec();
  plVar16 = param_1 + 0xfed;
  FUN_10053077c(plVar16,0);
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar17 = param_1 + 0x10e0;
  thunk_FUN_100181304(plVar17,0);
  plVar65 = param_1 + 0x1397;
  thunk_FUN_100650e64(plVar65);
  plVar58 = param_1 + 0x13bd;
  lVar56 = 0x1300;
  do {
    lVar57 = thunk_FUN_100650e64(plVar58);
    plVar58 = (long *)(lVar57 + 0x130);
    lVar56 = lVar56 + -0x130;
  } while (lVar56 != 0);
  local_148 = param_1 + 0x161d;
  thunk_FUN_10018ceb0();
  local_160 = param_1 + 0x1b43;
  thunk_FUN_10018ceb0();
  plVar58 = param_1 + 0x2069;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x2087;
  thunk_FUN_100652c08();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar6);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0x20b6;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x20d4;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x20fa;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x23b1;
  thunk_FUN_100181304(plVar22,0);
  thunk_FUN_100650e64();
  plVar23 = param_1 + 0x268e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x26ac;
  FUN_10064e264();
  plVar60 = param_1 + 0x26c3;
  lVar56 = 0x10bc0;
  do {
    lVar57 = thunk_FUN_10019ff68(plVar60);
    plVar60 = (long *)(lVar57 + 0x1320);
    lVar56 = lVar56 + -0x1320;
  } while (lVar56 != 0);
  plVar25 = param_1 + 0x483b;
  thunk_FUN_10019ff68();
  param_1[0x4a9f] = 0;
  plVar60 = param_1 + 0x4aa0;
  FUN_1006421a8(plVar60);
  param_1[0x4aa0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar26 = param_1 + 0x4ab1;
  thunk_FUN_1001c81d8();
  plVar27 = param_1 + 0x4c0b;
  thunk_FUN_100650e64();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar5);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x4c42;
  thunk_FUN_1006543ec(plVar28);
  plVar29 = param_1 + 0x4c76;
  FUN_10053077c(plVar29,0);
  puVar59 = (undefined8 *)FUN_1006421a8(param_1 + 0x4d1d);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar30 = param_1 + 0x4d2e;
  thunk_FUN_100650e64();
  plVar31 = param_1 + 0x4d54;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0x4d7a;
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4da0;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar34 = param_1 + 0x4e8d;
  thunk_FUN_100650e64();
  plVar35 = param_1 + 0x4eb3;
  thunk_FUN_100650e64();
  plVar36 = param_1 + 0x4ed9;
  thunk_FUN_100650e64();
  plVar37 = param_1 + 0x4eff;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar3);
  *plVar3 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plV
// ...truncated...
```

</details>

#### `thunk_FUN_100248d18` @ `0x10024b448`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

/* WARNING: Removing unreachable block (ram,0x000100249f9c) */
/* WARNING: Removing unreachable block (ram,0x000100249f40) */
/* WARNING: Removing unreachable block (ram,0x000100249ee8) */
/* WARNING: Removing unreachable block (ram,0x000100249f14) */
/* WARNING: Removing unreachable block (ram,0x000100249f6c) */
/* WARNING: Removing unreachable block (ram,0x00010024af50) */

long * thunk_FUN_100248d18(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
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
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  char *pcVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  bool bVar52;
  undefined1 uVar53;
  int iVar54;
  uint uVar55;
  long lVar56;
  long lVar57;
  undefined8 *puVar59;
  long *plVar60;
  ulong uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined4 uVar64;
  long *plVar65;
  long *plVar66;
  float fVar67;
  float fVar68;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [4];
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  undefined4 uStack_a8;
  long lStack_90;
  long *plVar58;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_101444218;
  plVar66 = param_1 + 0x518c;
  plVar3 = param_1 + 0x4fdb;
  plVar4 = param_1 + 0x4e7c;
  plVar5 = param_1 + 0x4c31;
  plVar6 = param_1 + 0x20a5;
  lVar56 = FUN_1001e6910();
  FUN_10014f4a0(lVar56 + 0x2c30);
  param_1[0x58c] = 0;
  *param_1 = (long)&PTR_thunk_FUN_10024b44c_101479fd8;
  param_1[0x586] = (long)&PTR_FUN_10147a228;
  param_1[0x589] = (long)&PTR_FUN_10147a5c0;
  param_1[0x58a] = (long)&PTR_FUN_10147a620;
  param_1[0x58b] = (long)&PTR_FUN_10147a678;
  pcVar7 = (code *)(param_1 + 0x58d);
  thunk_FUN_100218f18();
  plVar8 = param_1 + 0x594;
  FUN_1006505b8();
  plVar9 = param_1 + 0x5af;
  thunk_FUN_100181304(plVar9,0);
  plVar10 = param_1 + 0x866;
  thunk_FUN_100181304(plVar10,0);
  plStack_168 = param_1 + 0xb1d;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0xb43;
  thunk_FUN_100184f78();
  FUN_10064e264();
  plVar12 = param_1 + 0xef8;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xf44;
  FUN_1006421a8();
  param_1[0xf44] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xf55;
  thunk_FUN_100652c08();
  plStack_170 = param_1 + 0xf73;
  thunk_FUN_100652c08();
  FUN_10064e264();
  plVar15 = param_1 + 0xfa8;
  FUN_1006421a8(plVar15);
  param_1[0xfa8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plStack_158 = param_1 + 0xfb9;
  thunk_FUN_1006543ec();
  plVar16 = param_1 + 0xfed;
  FUN_10053077c(plVar16,0);
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar17 = param_1 + 0x10e0;
  thunk_FUN_100181304(plVar17,0);
  plVar65 = param_1 + 0x1397;
  thunk_FUN_100650e64(plVar65);
  plVar58 = param_1 + 0x13bd;
  lVar56 = 0x1300;
  do {
    lVar57 = thunk_FUN_100650e64(plVar58);
    plVar58 = (long *)(lVar57 + 0x130);
    lVar56 = lVar56 + -0x130;
  } while (lVar56 != 0);
  plStack_148 = param_1 + 0x161d;
  thunk_FUN_10018ceb0();
  plStack_160 = param_1 + 0x1b43;
  thunk_FUN_10018ceb0();
  plVar58 = param_1 + 0x2069;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x2087;
  thunk_FUN_100652c08();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar6);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0x20b6;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x20d4;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x20fa;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x23b1;
  thunk_FUN_100181304(plVar22,0);
  thunk_FUN_100650e64();
  plVar23 = param_1 + 0x268e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x26ac;
  FUN_10064e264();
  plVar60 = param_1 + 0x26c3;
  lVar56 = 0x10bc0;
  do {
    lVar57 = thunk_FUN_10019ff68(plVar60);
    plVar60 = (long *)(lVar57 + 0x1320);
    lVar56 = lVar56 + -0x1320;
  } while (lVar56 != 0);
  plVar25 = param_1 + 0x483b;
  thunk_FUN_10019ff68();
  param_1[0x4a9f] = 0;
  plVar60 = param_1 + 0x4aa0;
  FUN_1006421a8(plVar60);
  param_1[0x4aa0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar26 = param_1 + 0x4ab1;
  thunk_FUN_1001c81d8();
  plVar27 = param_1 + 0x4c0b;
  thunk_FUN_100650e64();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar5);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x4c42;
  thunk_FUN_1006543ec(plVar28);
  plVar29 = param_1 + 0x4c76;
  FUN_10053077c(plVar29,0);
  puVar59 = (undefined8 *)FUN_1006421a8(param_1 + 0x4d1d);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar30 = param_1 + 0x4d2e;
  thunk_FUN_100650e64();
  plVar31 = param_1 + 0x4d54;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0x4d7a;
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4da0;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar34 = param_1 + 0x4e8d;
  thunk_FUN_100650e64();
  plVar35 = param_1 + 0x4eb3;
  thunk_FUN_100650e64();
  plVar36 = param_1 + 0x4ed9;
  thunk_FUN_100650e64();
  plVar37 = param_1 + 0x4eff;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar3);
  *plVar3 = (l
// ...truncated...
```

</details>

#### `FUN_10024db00` @ `0x10024db00`

XOR + LOOP 

<details><summary>Decompiled</summary>

```c

void FUN_10024db00(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  void *local_78;
  void *local_70;
  char local_61;
  
  puVar10 = (undefined8 *)*param_2;
  if (puVar10 != (undefined8 *)0x0) {
    lVar9 = 8;
    do {
      uVar8 = *puVar10;
      uVar4 = FUN_100345b94();
      uVar4 = FUN_10034c450(uVar4,uVar8);
      cVar1 = *(char *)(puVar10 + 2);
      lVar5 = FUN_10031d43c();
      if (lVar5 == 0) {
LAB_10024db80:
        bVar2 = cVar1 == '\0';
      }
      else {
        uVar6 = FUN_10031d43c();
        iVar3 = FUN_10031e194(uVar6,puVar10[1]);
        bVar2 = iVar3 == 0;
        if (iVar3 == -1) goto LAB_10024db80;
      }
      if ((!bVar2 & (*(byte *)((long)puVar10 + 0x11) ^ 0xff)) != 0) {
        FUN_10034cd98(&local_78,uVar4);
        FUN_10010b098(param_3,&local_78);
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
        }
        FUN_10001549c(&local_78,uVar8);
        FUN_10001617c(param_4,&local_78);
        if (local_61 < '\0') {
          operator_delete(local_78);
        }
        *(int *)(param_1 + 0x2cf28) = *(int *)(param_1 + 0x2cf28) + 1;
        plVar7 = *(long **)(param_1 + 0x2cf20);
        if ((undefined8 *)plVar7[2] == param_2) {
          *(int *)(param_1 + 0x2cf2c) = *(int *)(param_1 + 0x2cf2c) + 1;
        }
        else if ((undefined8 *)plVar7[1] == param_2) {
          *(int *)(param_1 + 0x2cf30) = *(int *)(param_1 + 0x2cf30) + 1;
        }
        else if ((undefined8 *)*plVar7 == param_2) {
          *(int *)(param_1 + 0x2cf34) = *(int *)(param_1 + 0x2cf34) + 1;
        }
      }
      puVar10 = *(undefined8 **)((long)param_2 + lVar9);
      lVar9 = lVar9 + 8;
    } while (puVar10 != (undefined8 *)0x0);
  }
  return;
}


```

</details>

#### `FUN_10025383c` @ `0x10025383c`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10025383c(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    bVar2 = *(byte *)(param_1 + 0x2ceb0);
    *(byte *)(param_1 + 0x2ceb0) = bVar2 ^ 1;
    uVar3 = 0x7db8;
  }
  else if (param_3 == 1) {
    bVar2 = *(byte *)(param_1 + 0x2ceb1);
    *(byte *)(param_1 + 0x2ceb1) = bVar2 ^ 1;
    uVar3 = 0x88b0;
  }
  else {
    if (param_3 != 2) goto LAB_1002538c8;
    bVar2 = *(byte *)(param_1 + 0x2ceb2);
    *(byte *)(param_1 + 0x2ceb2) = bVar2 ^ 1;
    uVar3 = 0x72c0;
  }
  pcVar1 = "arrow_down";
  if (bVar2 != 0) {
    pcVar1 = "arrow_right";
  }
  FUN_100652cdc(param_1 + (ulong)(uVar3 | 0x20000),pcVar1);
LAB_1002538c8:
  FUN_10025023c(param_1);
  return;
}


```

</details>

#### `FUN_1002579a0` @ `0x1002579a0`

XOR + LOOP 8BYTE 

<details><summary>Decompiled</summary>

```c

/* WARNING: Removing unreachable block (ram,0x000100257c40) */

void FUN_1002579a0(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  void *local_a0 [2];
  char local_89;
  void *local_88;
  undefined4 local_80;
  undefined8 local_7c;
  char local_71;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  string local_48 [24];
  
  lVar4 = FUN_10015d3ec();
  if (*(char *)(lVar4 + 0x567c) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x2a20) == 0) {
    return;
  }
  lVar4 = FUN_10016c2f0();
  if (0 < *(int *)(lVar4 + 0x38)) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0xe5bc);
  *puVar1 = (uint)param_2;
  if (*(int *)(param_1 + 0x2a20) == 0) goto LAB_100257c4c;
  FUN_1002593b4(**(undefined8 **)(param_1 + 0x2a28),(uint)param_2 == 0);
  uVar8 = *(uint *)(param_1 + 0x2a20);
  if (1 < uVar8) {
    uVar10 = 1;
    do {
      FUN_1002593b4(*(undefined8 *)(*(long *)(param_1 + 0x2a28) + uVar10 * 8),uVar10 == *puVar1);
      uVar10 = uVar10 + 1;
      uVar8 = *(uint *)(param_1 + 0x2a20);
    } while (uVar10 < uVar8);
  }
  uVar2 = *puVar1;
  param_2 = (ulong)uVar2;
  if (((int)uVar2 < 0) || (uVar8 <= uVar2)) goto LAB_100257c4c;
  FUN_10001549c(local_48,"IDLE_CLOSED");
  lVar4 = *(long *)(*(long *)(param_1 + 0x2a28) + (ulong)*puVar1 * 8);
  plVar5 = (long *)(lVar4 + 0x5d8);
  if (*(char *)(lVar4 + 0x5ef) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  piVar6 = (int *)FUN_100326d78(plVar5);
  iVar9 = 0;
  if (piVar6 != (int *)0x0) {
    if (*piVar6 != 0) {
      FUN_1001aefd4(param_1 + 0x2c20,*(long *)(piVar6 + 2) + 0x30);
    }
    if ((char)piVar6[0x36] == '\0') {
      if (*(char *)((long)piVar6 + 0xd9) != '\0') goto LAB_100257b04;
    }
    else {
      if (*(char *)((long)piVar6 + 0xd9) == '\0') {
        FUN_10001549c(&local_88,"IDLE_READY");
        std::string::operator=(local_48,(string *)&local_88);
        if (local_71 < '\0') {
          operator_delete(local_88);
        }
        iVar9 = 1;
        goto LAB_100257b34;
      }
LAB_100257b04:
      FUN_10001549c(&local_88,"IDLE_OPEN");
      std::string::operator=(local_48,(string *)&local_88);
      if (local_71 < '\0') {
        operator_delete(local_88);
      }
    }
    iVar9 = 0;
  }
LAB_100257b34:
  FUN_1001aeb7c(0xbf800000,param_1 + 0x2c20,local_48);
  FUN_1001af9fc(param_1 + 0x2c20,iVar9);
  uVar10 = FUN_100126b4c();
  if ((uVar10 & 1) == 0) {
    FUN_1001e7504();
    iVar3 = FUN_1001e7670();
    if (iVar3 == 8) {
      if (iVar9 == 0) {
        uVar7 = FUN_10002f320();
        FUN_10001549c(&local_88,"layer_player_profile_prog");
        FUN_100030cf0(uVar7,&local_88);
        if (local_71 < '\0') {
          operator_delete(local_88);
        }
      }
      else {
        local_88 = (void *)0x0;
        local_80 = 0;
        local_7c = DAT_101dc1cb8;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0x3f800000;
        local_4a = 1;
        local_70 = param_1 + 0x2a40;
        uStack_68 = 0;
        local_4c = 1;
        uVar7 = FUN_10002f320();
        FUN_10001549c(local_a0,"layer_player_profile_prog");
        FUN_100030c8c(uVar7,local_a0,&local_88);
        if (local_89 < '\0') {
          operator_delete(local_a0[0]);
        }
        FUN_1002597b0(param_1);
      }
    }
  }
  param_2 = (ulong)*puVar1;
LAB_100257c4c:
  *(uint *)(param_1 + 0x2ca4) =
       (*(uint *)(param_1 + 0x2ca4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2ca4) & 3 | (int)((param_2 >> 0x1d & 7) >> 2) << 2) ^ 4;
  if ((int)param_2 < 0) {
    uVar7 = FUN_10002f320();
    FUN_10001549c(&local_88,"layer_player_profile_prog");
    FUN_100030cf0(uVar7,&local_88);
    if (local_71 < '\0') {
      operator_delete(local_88);
    }
  }
  FUN_100257ca8(param_1);
  return;
}


```

</details>

#### `FUN_10025d954` @ `0x10025d954`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10025d954(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x8074) = *(uint *)(param_1 + 0x8074) & 0xfffffffb;
  FUN_100256bac(param_1 + 0x8ac0,param_2,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  uVar1 = FUN_10014e20c();
  *(char *)(param_1 + 0x25f50) = (char)uVar1;
  uVar2 = FUN_10052b840();
  uVar2 = uVar2 | uVar1;
  iVar3 = FUN_100131560();
  uVar1 = 0;
  if (iVar3 == 0 && uVar2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x20b04) = *(uint *)(param_1 + 0x20b04) & 0xfffffffb | uVar1;
  uVar1 = FUN_100131560();
  FUN_100530068(param_1 + 0x20a80,(uVar1 | uVar2) ^ 1);
  iVar3 = FUN_100131560();
  uVar1 = 0;
  if (iVar3 == 0 && uVar2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x216d4) = *(uint *)(param_1 + 0x216d4) & 0xfffffffb | uVar1;
  if (*(char *)(param_1 + 0x25f50) != '\0') {
    return;
  }
  FUN_100227fb8(param_1 + 0x1d0,1);
  return;
}


```

</details>

#### `FUN_100269fe0` @ `0x100269fe0`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_100269fe0(undefined8 param_1,long param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  undefined1 auStack_5c [4];
  float local_58;
  float local_54;
  
  if ((((*(byte *)(param_2 + 0xc0) & 1) == 0 ^ param_3) & 1) != 0) {
    return;
  }
  uVar2 = FUN_100126b4c();
  FUN_1001e35ec(param_2,uVar2,&local_54,&local_58,auStack_5c);
  if (param_4 == 2) {
    fVar6 = *(float *)(param_2 + 0xb8);
    fVar7 = -0.35;
LAB_10026a0ac:
    fVar7 = local_58 * fVar7;
  }
  else {
    if (param_4 == 1) {
      fVar6 = 0.35;
    }
    else {
      if (param_4 != 0) {
        fVar6 = *(float *)(param_2 + 0xb8);
        fVar7 = 0.35;
        goto LAB_10026a0ac;
      }
      fVar6 = -0.35;
    }
    fVar6 = local_54 * fVar6;
    fVar7 = *(float *)(param_2 + 0xbc);
  }
  fVar8 = (float)param_1 * 0.5;
  local_68 = fVar6;
  fStack_64 = fVar7;
  FUN_100642324(param_2);
  if (param_3 == 0) {
    uVar2 = FUN_1000b50a8();
    FUN_10063fb90(uVar2,&local_68);
    FUN_10063f0e8(param_1,uVar2);
    FUN_10063f130(uVar2,FUN_10001f218);
    if (param_5 != 0) {
      uVar3 = FUN_100047714();
      FUN_10063fce0(0);
      FUN_10063f0e8(fVar8,uVar3);
      uVar3 = FUN_10001f4d4();
      FUN_10063f2a4(uVar3,uVar2);
      uVar2 = uVar3;
    }
    FUN_100642b14(param_2,uVar2);
    uVar2 = FUN_100047300();
    FUN_100642b14(param_2,uVar2);
    bVar4 = *(byte *)(param_2 + 0xc0) & 0xfe;
  }
  else {
    bVar1 = false;
    if ((*(float *)(param_2 + 0x40) == fVar6) &&
       (bVar1 = false, !NAN(*(float *)(param_2 + 0x44)) && !NAN(fVar7))) {
      bVar1 = *(float *)(param_2 + 0x44) == fVar7;
    }
    if (!bVar1) {
      *(ulong *)(param_2 + 0x40) = CONCAT44(fStack_64,local_68);
      FUN_1000200a0(param_2);
    }
    uVar5 = *(uint *)(param_2 + 0x84);
    if ((uVar5 & 0x7f80) != 0) {
      *(uint *)(param_2 + 0x84) = uVar5 & 0xffff807f;
      FUN_1000200a0(param_2);
      uVar5 = *(uint *)(param_2 + 0x84);
    }
    *(uint *)(param_2 + 0x84) = uVar5 | 0xc;
    uVar2 = FUN_1000b50a8();
    FUN_10063fb90(uVar2,param_2 + 0xb8);
    FUN_10063f0e8(param_1,uVar2);
    FUN_10063f130(uVar2,FUN_10001f160);
    if (param_5 == 0) {
      if ((~*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
        *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x7f80;
        FUN_1000200a0(param_2);
      }
    }
    else {
      uVar3 = FUN_100047714();
      FUN_10063fce0(0x3f800000);
      FUN_10063f0e8(fVar8,uVar3);
      uVar3 = FUN_10001f4d4();
      FUN_10063f2a4(uVar3,uVar2);
      uVar2 = uVar3;
    }
    FUN_100642b14(param_2,uVar2);
    bVar4 = *(byte *)(param_2 + 0xc0) | 1;
  }
  *(byte *)(param_2 + 0xc0) = bVar4;
  return;
}


```

</details>

#### `FUN_10026a264` @ `0x10026a264`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10026a264(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if ((((*(byte *)(param_2 + 0xc0) & 1) == 0 ^ param_3) & 1) != 0) {
    return;
  }
  FUN_100642324();
  lVar2 = DAT_101dbd2f8;
  if (param_3 == 0) {
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
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar5);
      *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a5410;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f0e8(param_1,puVar5);
    FUN_100047300();
    FUN_100047398();
    FUN_100642b7c(param_2,puVar5);
    bVar3 = *(byte *)(param_2 + 0xc0) & 0xfe;
    goto LAB_10026a4a8;
  }
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 8;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f | 8;
    FUN_1000200a0(param_2);
  }
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
LAB_10026a3d4:
    puVar6 = (ushort *)0x0;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 == 0xffff) goto LAB_10026a3d4;
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f0f0(puVar6);
    *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f0e8(param_1,puVar6);
  FUN_100642b7c(param_2,puVar5);
  bVar3 = *(byte *)(param_2 + 0xc0) | 1;
LAB_10026a4a8:
  *(byte *)(param_2 + 0xc0) = bVar3;
  return;
}


```

</details>

#### `FUN_10027d5a8` @ `0x10027d5a8`

XOR + 8BYTE 

<details><summary>Decompiled</summary>

```c

void FUN_10027d5a8(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  
  if (6 < param_3) goto LAB_10027d734;
  switch(param_3) {
  case 0:
    bVar2 = *(byte *)(param_1 + 0x125a8);
    *(byte *)(param_1 + 0x125a8) = bVar2 ^ 1;
    lVar3 = 0x4da0;
    break;
  case 1:
    bVar2 = *(byte *)(param_1 + 0x125a9);
    *(byte *)(param_1 + 0x125a9) = bVar2 ^ 1;
    pcVar1 = "arrow_down";
    if (bVar2 != 0) {
      pcVar1 = "arrow_right";
    }
    FUN_100652cdc(param_1 + 0x58a0,pcVar1);
    *(undefined1 *)(param_1 + 0x125aa) = 1;
    goto LAB_10027d734;
  case 2:
    bVar2 = *(byte *)(param_1 + 0x125ab);
    *(byte *)(param_1 + 0x125ab) = bVar2 ^ 1;
    lVar3 = 0x63a0;
    break;
  case 3:
    bVar2 = *(byte *)(param_1 + 0x125ae);
    *(byte *)(param_1 + 0x125ae) = bVar2 ^ 1;
    lVar3 = 0x6ea0;
    break;
  case 4:
    bVar2 = *(byte *)(param_1 + 0x125af);
    *(byte *)(param_1 + 0x125af) = bVar2 ^ 1;
    pcVar1 = "arrow_down";
    if (bVar2 != 0) {
      pcVar1 = "arrow_right";
    }
    FUN_100652cdc(param_1 + 0x8fa0,pcVar1);
    FUN_100111808(*(char *)(param_1 + 0x125af) == '\0');
    if (*(char *)(param_1 + 0x125af) != '\0') {
      FUN_1001117cc(0);
    }
    lVar3 = FUN_10015d3ec();
    FUN_100169cec(lVar3 + 0x18);
    if ((*(char *)(param_1 + 0x125af) != '\0') && (*(int *)(param_1 + 0x11fb0) == 0)) {
      FUN_1001c0e10(param_1 + 0x90c0);
      *(uint *)(param_1 + 0x9144) = *(uint *)(param_1 + 0x9144) | 4;
    }
    goto LAB_10027d734;
  case 5:
    bVar2 = *(byte *)(param_1 + 0x125ac);
    *(byte *)(param_1 + 0x125ac) = bVar2 ^ 1;
    lVar3 = 0x79a0;
    break;
  case 6:
    bVar2 = *(byte *)(param_1 + 0x125ad);
    *(byte *)(param_1 + 0x125ad) = bVar2 ^ 1;
    lVar3 = 0x84a0;
  }
  pcVar1 = "arrow_down";
  if (bVar2 != 0) {
    pcVar1 = "arrow_right";
  }
  FUN_100652cdc(param_1 + lVar3,pcVar1);
LAB_10027d734:
  FUN_100270dec(param_1);
  return;
}


```

</details>

### Broad XOR + 8-byte key scan

#### `FUN_1000654dc` @ `0x1000654dc` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1000654dc(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined8 local_68;
  
  uVar9 = 0;
  lVar7 = param_1 + 0x1278;
  do {
    FUN_1000672a0((float)(uVar9 & 0xffffffff) * 0.001,lVar7);
    uVar9 = uVar9 + 1;
    lVar7 = lVar7 + 0x3980;
  } while (uVar9 != 3);
  bVar1 = *(byte *)(param_1 + 0x106f0);
  *(byte *)(param_1 + 0x106f0) = bVar1 ^ 1;
  lVar7 = param_1 + 0xbef8;
  lVar2 = param_1 + 0xe3b8;
  if (bVar1 != 0) {
    lVar7 = param_1 + 0xe3b8;
    lVar2 = param_1 + 0xbef8;
  }
  FUN_100642324(lVar7);
  FUN_100642324(lVar2);
  uVar4 = FUN_10001f0d8();
  local_68 = 0x42c80000;
  FUN_10063f984(uVar4,&local_68);
  FUN_10063f0e8(0x3e19999a,uVar4);
  uVar5 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e19999a,uVar5);
  lVar3 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar8);
    *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063eee4(uVar5,puVar8);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b7c(lVar7,uVar5);
  lVar7 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_10063ee9c(puVar8);
    *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  uVar4 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e19999a,uVar4);
  FUN_10063eee4(puVar8,uVar4);
  uVar4 = FUN_10001f0d8();
  local_68 = 0x42c80000;
  FUN_10063f984(uVar4,&local_68);
  FUN_10063f0e8(0x3e19999a,uVar4);
  FUN_10063f130(uVar4,FUN_1000657e0);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,puVar8);
  if ((*(float *)(lVar2 + 0x40) != -100.0) || (*(float *)(lVar2 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar2 + 0x40) = 0xc2c80000;
    FUN_1000200a0(lVar2);
  }
  if ((*(uint *)(lVar2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffff807f;
    FUN_1000200a0(lVar2);
  }
  FUN_100642b7c(lVar2,uVar4);
  return;
}


```

</details>

Called by: `thunk_FUN_1000654dc` @ `0x1000645c0` 

#### `FUN_1000672a0` @ `0x1000672a0` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1000672a0(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined8 local_78;
  
  bVar2 = *(byte *)(param_2 + 0x3978);
  *(byte *)(param_2 + 0x3978) = bVar2 ^ 1;
  *(uint *)(param_2 + 0x554) = *(uint *)(param_2 + 0x554) & 0xffffffef | (uint)bVar2 << 4;
  lVar1 = param_2 + 0xb38;
  lVar3 = param_2 + 0x2a8;
  if (bVar2 == 0) {
    lVar1 = param_2 + 0x2a8;
    lVar3 = param_2 + 0xb38;
  }
  FUN_100642324(lVar1);
  FUN_100642324(lVar3);
  uVar5 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  uVar6 = FUN_10001f0d8();
  local_78 = 0x42c80000;
  FUN_10063f984(uVar6,&local_78);
  FUN_10063f0e8(0x3e19999a,uVar6);
  uVar7 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e19999a,uVar7);
  lVar4 = DAT_101dbd2f8;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_10063ee9c(puVar9);
    *(undefined ***)puVar9 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_10063eee4(uVar7,puVar9);
  uVar7 = FUN_10001f4d4();
  FUN_10063f2a4(uVar7,uVar6);
  FUN_100642b7c(lVar1,uVar5);
  uVar5 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  lVar1 = DAT_101dbd2f8;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar9);
    *(undefined ***)puVar9 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar6 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e19999a,uVar6);
  FUN_10063eee4(puVar9,uVar6);
  uVar6 = FUN_10001f0d8();
  local_78 = 0x42c80000;
  FUN_10063f984(uVar6,&local_78);
  FUN_10063f0e8(0x3e19999a,uVar6);
  FUN_10063f130(uVar6,FUN_1000657e0);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,puVar9);
  if ((*(float *)(lVar3 + 0x40) != -100.0) || (*(float *)(lVar3 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar3 + 0x40) = 0xc2c80000;
    FUN_1000200a0(lVar3);
  }
  if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f;
    FUN_1000200a0(lVar3);
  }
  FUN_100642b7c(lVar3,uVar5);
  return;
}


```

</details>

Called by: `FUN_1000654dc` @ `0x1000654dc` 

#### `FUN_100083968` @ `0x100083968` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_100083968(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  float fVar10;
  undefined8 uVar11;
  uint local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  
  lVar4 = FUN_1004901b4((long *)(param_1 + 0x7c0));
  if (lVar4 == 0) {
    return;
  }
  iVar2 = FUN_1003d77ec(lVar4,*(undefined4 *)(param_1 + 0x7d4));
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_10046e45c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
  if (iVar2 == 0) {
    uVar5 = 0;
LAB_1000839d4:
    iVar2 = FUN_10046e45c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if (iVar2 != 0) goto LAB_1000839e4;
    uVar3 = FUN_10046e2b4(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if (1 < uVar3) {
      *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) | 4;
      uVar5 = FUN_10046e2b4(lVar4,*(undefined4 *)(param_1 + 0x7d4));
      goto LAB_100083a30;
    }
    *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) & 0xfffffffb;
  }
  else {
    uVar5 = FUN_10046e308(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if ((int)uVar5 < 2) goto LAB_1000839d4;
LAB_1000839e4:
    *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) | 4;
LAB_100083a30:
    FUN_100083d20(param_1,uVar5);
  }
  iVar2 = FUN_10046e42c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
  if (iVar2 == 0) {
    lVar6 = FUN_10044d88c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    uVar7 = FUN_1004d2538(*(undefined8 *)(lVar6 + 400));
    if ((uVar7 & 1) != 0) {
      uVar3 = *(uint *)(param_1 + 0x84);
      if ((uVar3 & 0x7f80) != 0x6600) {
        *(uint *)(param_1 + 0x84) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
        FUN_1000200a0(param_1);
      }
      FUN_100652cdc(param_1 + 0x268,"hud_store_inventory_tray");
      *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) | 4;
      *(undefined4 *)(param_1 + 0x7b8) = 0x3f800000;
      FUN_100652e14(0x3f800000,param_1 + 0x178);
      FUN_1006513c0(param_1 + 0x548,&DAT_101d91650);
      *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
      return;
    }
    plVar8 = *(long **)(param_1 + 0x7c0);
    if (plVar8 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_1 + 0x7c8) == (int)plVar8[1]) {
      uVar5 = (**(code **)(*plVar8 + 0x10))();
    }
    else {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x7c0) = 0;
      *(undefined4 *)(param_1 + 0x7c8) = DAT_101dc0b88;
    }
    lVar4 = FUN_10044d88c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    pcVar9 = *(char **)(lVar4 + 400);
    if (pcVar9 == (char *)0x0) {
      local_50[0] = 0;
    }
    else {
      local_50[0] = 0x811c9dc5;
      cVar1 = *pcVar9;
      while (cVar1 != '\0') {
        pcVar9 = pcVar9 + 1;
        local_50[0] = (local_50[0] ^ (int)cVar1) * 0x1000193;
        cVar1 = *pcVar9;
      }
    }
    uVar5 = FUN_1003dc44c(uVar5,local_50);
    fVar10 = (float)FUN_10045f1bc();
    if (0.0 < fVar10) {
      uVar11 = FUN_10043eeb4(uVar5);
      uVar5 = FUN_10045f1bc(uVar5);
LAB_100083cf8:
      FUN_100083d7c(uVar11,uVar5,param_1);
      return;
    }
    *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
    uVar3 = *(uint *)(param_1 + 0x3dc) & 0xfffffffb;
LAB_100083cd4:
    *(uint *)(param_1 + 0x3dc) = uVar3;
  }
  else {
    if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
      FUN_1000200a0(param_1);
    }
    iVar2 = FUN_10034cb58();
    pcVar9 = "hud_store_inventory_tray";
    if (iVar2 == 0) {
      pcVar9 = "hud_store_inventory_regular";
    }
    FUN_100652cdc(param_1 + 0x268,pcVar9);
    lVar6 = param_1 + 0x178;
    FUN_100652e14(0x3f800000,lVar6);
    local_44 = 0xffffffff;
    FUN_100652dd4(lVar6,&local_44,2);
    *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
    *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) & 0xfffffffb;
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) & 0xfffffffb;
    uVar3 = FUN_10046e740(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if ((uVar3 >> 7 & 1) == 0) {
      if ((uVar3 >> 8 & 1) == 0) {
        if ((uVar3 >> 2 & 1) != 0) {
          uVar11 = FUN_10043da00(lVar4,*(undefined4 *)(param_1 + 0x7d4));
          uVar5 = FUN_10046e5cc(lVar4,*(undefined4 *)(param_1 + 0x7d4));
          goto LAB_100083cf8;
        }
        if (uVar3 == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x7b8) = 0;
        uVar3 = *(uint *)(param_1 + 0x3dc) | 4;
        goto LAB_100083cd4;
      }
      pcVar9 = "ability_silenced_badge";
    }
    else {
      pcVar9 = "ability_stunned_badge";
    }
    local_48 = 0xff404040;
    FUN_100652dd4(lVar6,&local_48,2);
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
    FUN_100652cdc(param_1 + 0x458,pcVar9);
  }
  return;
}


```

</details>

Called by: `FUN_100082dcc` @ `0x100082dcc` `FUN_1000816a8` @ `0x1000816a8` `FUN_1000b13ec` @ `0x1000b13ec` 

#### `FUN_10008d124` @ `0x10008d124` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_10008d124(long param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  pbVar1 = (byte *)(param_1 + 0x27ed);
  if ((((*pbVar1 & 1) == 0 ^ param_2) & 1) == 0) {
    fVar6 = (float)FUN_100641440();
    fVar7 = (float)FUN_10065317c(param_1 + 0x218);
    fVar9 = fVar7 + fVar6;
    if ((*pbVar1 & 0x20) != 0) {
      fVar9 = -(fVar7 + fVar6);
    }
    if (param_3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x15c);
      uVar5 = 0xff;
      if (param_2 == 0) {
        uVar5 = 0;
      }
      if (uVar5 != (uVar2 >> 7 & 0xff)) {
        *(uint *)(param_1 + 0x15c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar5 << 7;
        FUN_1000200a0(param_1 + 0xd8);
      }
      fVar6 = 0.0;
      if (param_2 == 0) {
        fVar6 = fVar9;
      }
      if ((*(float *)(param_1 + 0x118) != fVar6) || (*(float *)(param_1 + 0x11c) != 0.0)) {
        *(float *)(param_1 + 0x118) = fVar6;
        *(undefined4 *)(param_1 + 0x11c) = 0;
        FUN_1000200a0(param_1 + 0xd8);
      }
    }
    else {
      uVar8 = 0x3f800000;
      if (param_2 == 0) {
        uVar8 = 0;
      }
      fVar6 = 0.0;
      if (param_2 == 0) {
        fVar6 = fVar9;
      }
      uVar3 = FUN_100640840(uVar8,0x3e800000,FUN_10001f160);
      FUN_1006408f4(fVar6,0,0x3e800000,FUN_10001f160);
      uVar4 = FUN_10001f4d4();
      FUN_10063f2a4(uVar4,uVar3);
      FUN_100642324(param_1 + 0xd8);
      FUN_100642b14(param_1 + 0xd8,uVar4);
    }
    *pbVar1 = *pbVar1 & 0xfe | (byte)param_2;
  }
  return;
}


```

</details>

Called by: `FUN_10008cb4c` @ `0x10008cb4c` `FUN_10008d710` @ `0x10008d710` 

#### `FUN_10009448c` @ `0x10009448c` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_10009448c(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  
  fVar6 = *(float *)(&DAT_10114bcd8 + (ulong)((char)param_1[0xee] == '\0') * 4);
  plVar1 = param_1 + 0x49;
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x49] + 0x28))(plVar1,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x87] + 0x28))(param_1 + 0x87,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0xad] + 0x28))(param_1 + 0xad,&local_58);
  uVar3 = 2;
  if ((char)param_1[0xee] != '\0') {
    uVar3 = 3;
  }
  FUN_10064e5ec(0,0,plVar1,uVar3,param_1 + 0x2b,uVar3);
  fVar4 = (float)FUN_100652e60(plVar1);
  fVar5 = -6.0;
  FUN_10064e5ec(fVar4 * fVar6,param_1 + 0xad,6,plVar1,6);
  fVar4 = (float)FUN_100652e60(plVar1);
  FUN_100652e60(plVar1);
  fVar5 = fVar5 * 0.05;
  FUN_10064e5ec(fVar4 * fVar6,param_1 + 0x87,8,plVar1,8);
  if ((*(uint *)((long)param_1 + 0x3bc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3bc) = *(uint *)((long)param_1 + 0x3bc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0x67);
  }
  *(uint *)((long)param_1 + 0x71c) = *(uint *)((long)param_1 + 0x71c) & 0xffffffbf;
  FUN_1006557ec(param_1);
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  local_58 = (undefined1 *)CONCAT44(fVar5 + 6.0,fVar6 + 36.0);
  FUN_10064e48c(param_1 + 0xd3,&local_58);
  uVar3 = 2;
  if ((char)param_1[0xee] != '\0') {
    uVar3 = 3;
  }
  FUN_10064e5ec(0,0,param_1 + 0xd3,uVar3,param_1,uVar3);
  if (param_1[0xea] != 0) {
    bVar2 = *(byte *)(param_1 + 0xee) ^ 1;
    uVar3 = 0xc0c00000;
    if (*(byte *)(param_1 + 0xee) != 0) {
      uVar3 = 0x40c00000;
    }
    FUN_10064e5ec(uVar3,0x42380000,param_1[0xea],bVar2,plVar1,bVar2);
  }
  return;
}


```

</details>

#### `FUN_10009ce4c` @ `0x10009ce4c` (broad scan)

<details><summary>Decompiled</summary>

```c

long * FUN_10009ce4c(long *param_1)

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
  undefined8 *puVar10;
  uint uVar11;
  undefined4 local_68 [2];
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_10009e728_101451108;
  *(undefined4 *)(puVar10 + 0x17) = 0xffff;
  puVar10[0x18] = 0;
  *(undefined4 *)(puVar10 + 0x19) = 0xffff;
  puVar10 = puVar10 + 0x1a;
  FUN_10064e264(puVar10);
  plVar1 = param_1 + 0x31;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4f;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6d;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8b;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xa9;
  thunk_FUN_100655644(plVar5);
  plVar6 = param_1 + 0xd4;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0xfa;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_1 + 0x120);
  FUN_10064e264(param_1 + 0x122);
  plVar8 = param_1 + 0x139;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x157;
  thunk_FUN_100652c08(plVar9);
  param_1[0x175] = 0x43c80000;
  *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) & 0xe0 | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(puVar10,plVar8,1);
  FUN_100642bd8(puVar10,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar6,1);
  FUN_100655930(plVar5,plVar7,1);
  FUN_100652ca4(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar1,"icon_item_empty");
  FUN_100652ca4(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100652cdc(plVar2,"icon_item_empty");
  if ((*(uint *)((long)param_1 + 0x2fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar3,"hud_store_item_node_regular");
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  uVar11 = *(uint *)((long)param_1 + 0xa4c);
  if ((uVar11 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa4c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
    FUN_1000200a0(plVar8);
    uVar11 = *(uint *)((long)param_1 + 0xa4c);
  }
  *(uint *)((long)param_1 + 0xa4c) =
       uVar11 & 0xfffffff8 |
       uVar11 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_slash_line");
  uVar11 = *(uint *)((long)param_1 + 0xb3c);
  if ((uVar11 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xb3c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
    FUN_1000200a0(plVar9);
    uVar11 = *(uint *)((long)param_1 + 0xb3c);
  }
  *(uint *)((long)param_1 + 0xb3c) =
       uVar11 & 0xfffffff8 |
       uVar11 & 3 | ((*(byte *)(param_1 + 0x176) >> 2 ^ 0xffffffff) >> 2 & 1) << 2;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 1;
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar4,"hud_store_item_node_owned");
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  uVar11 = *(uint *)((long)param_1 + 0x724);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x724) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_1000200a0(plVar6);
  }
  local_68[0] = 0xffb0b0b0;
  FUN_100651460(plVar7,local_68);
  uVar11 = *(uint *)((long)param_1 + 0x854);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x854) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_1000200a0(plVar7);
  }
  FUN_10009d210(param_1);
  FUN_10009d64c(param_1);
  return param_1;
}


```

</details>

Called by: `thunk_FUN_10009ce4c` @ `0x10009d904` 

#### `FUN_10009d64c` @ `0x10009d64c` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_10009d64c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  
  puVar4 = local_30;
  local_28[0] = 0xff606060;
  if (*(int *)(param_1 + 0xb8) == 1) {
    puVar4 = &DAT_10115a168;
  }
  else if ((*(byte *)(param_1 + 0xbb0) & 1) == 0) {
    local_30[0] = 0xff505050;
    puVar4 = local_30;
  }
  else {
    local_30[0] = 0xffa0a0a0;
  }
  FUN_100652dd4(param_1 + 0x368,puVar4,2);
  if (((*(byte *)(param_1 + 0xbb0) ^ 0xff) & 0x11) == 0) {
    FUN_100651460(param_1 + 0x6a0,&DAT_10115a168);
    local_30[0] = 0xffb0b0b0;
    FUN_100651460(param_1 + 2000,local_30);
    if ((*(uint *)(param_1 + 0x2fc) & 0x7f80) != 0) {
      uVar1 = *(uint *)(param_1 + 0x2fc) & 0xffff807f;
LAB_10009d734:
      *(uint *)(param_1 + 0x2fc) = uVar1;
      FUN_1000200a0(param_1 + 0x278);
    }
  }
  else {
    FUN_100651460(param_1 + 0x6a0,local_28);
    FUN_100651460(param_1 + 2000,local_28);
    uVar1 = *(uint *)(param_1 + 0x2fc);
    if ((uVar1 & 0x7f80) != 0x6600) {
      uVar1 = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x6600;
      goto LAB_10009d734;
    }
  }
  uVar1 = (*(byte *)(param_1 + 0xbb0) & 0x10) >> 2 ^ 4;
  *(uint *)(param_1 + 0xa4c) = *(uint *)(param_1 + 0xa4c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb3c) & 0xfffffffb | uVar1;
  if ((*(byte *)(param_1 + 0xbb0) >> 4 & 1) == 0) {
    lVar3 = FUN_1004e0150("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  }
  else {
    lVar3 = param_1 + 0x900;
  }
  FUN_1006513c0(param_1 + 2000,lVar3);
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 == 2) {
LAB_10009d7b4:
    FUN_100652cdc(param_1 + 0x368,"hud_store_item_node_regular");
    fVar8 = *(float *)(param_1 + 0x3b0);
    uVar6 = 0x3fea7c30;
    fVar7 = 1.8319149;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) goto LAB_10009d854;
      goto LAB_10009d7b4;
    }
    FUN_100652cdc(param_1 + 0x368,"hud_store_item_node_highlighted");
    fVar8 = *(float *)(param_1 + 0x3b0);
    uVar6 = 0x3fb33333;
    fVar7 = 1.4;
  }
  if ((fVar8 != fVar7) || (*(float *)(param_1 + 0x3b4) != fVar7)) {
    *(ulong *)(param_1 + 0x3b0) = CONCAT44(uVar6,uVar6);
    FUN_1000200a0(param_1 + 0x368);
  }
  FUN_10064e5ec(0,0,param_1 + 0x368,8,param_1 + 0xd0,8);
LAB_10009d854:
  if ((*(byte *)(param_1 + 0xbb0) >> 3 & 1) == 0) {
    if (*(int *)(param_1 + 0xbac) < 1) {
      *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) & 0xfffffffb;
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x4dc);
    *(uint *)(param_1 + 0x4dc) = uVar1 | 4;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4dc) = uVar1 | 0x7f84;
      FUN_1000200a0(param_1 + 0x458);
    }
    pcVar5 = "hud_store_item_node_parent_owned";
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4dc);
    *(uint *)(param_1 + 0x4dc) = uVar1 | 4;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4dc) = uVar1 | 0x7f84;
      FUN_1000200a0(param_1 + 0x458);
    }
    pcVar5 = "hud_store_item_node_owned";
  }
  FUN_100652cdc(param_1 + 0x458,pcVar5);
  return;
}


```

</details>

Called by: `FUN_10009ce4c` @ `0x10009ce4c` `FUN_10009d910` @ `0x10009d910` `FUN_10009dc78` @ `0x10009dc78` `FUN_10009d928` @ `0x10009d928` `FUN_10009da08` @ `0x10009da08` `FUN_10009da34` @ `0x10009da34` `FUN_10009da3c` @ `0x10009da3c` 

#### `FUN_1000ba598` @ `0x1000ba598` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1000ba598(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  char *pcVar10;
  uint local_c0 [2];
  uint local_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_80;
  undefined8 local_7c;
  undefined7 local_74;
  undefined4 uStack_6d;
  undefined1 local_69;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  
  puVar8 = local_c0;
  uVar9 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
  if ((((int)uVar9 != 0x1f) && (*(ushort *)(param_2 + uVar9 * 0x38 + 0x90) - 3 < 2)) &&
     (-1 < *(char *)(param_1 + 0xb0))) {
    return;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_4,param_1 + 0xa8);
  }
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    iVar5 = FUN_1003461dc(param_3);
    if (iVar5 != -1) {
      FUN_1003461dc(param_3);
      lVar6 = FUN_100345d90();
      if (lVar6 != 0) {
        param_3 = lVar6;
      }
    }
    uVar7 = FUN_1003a2d9c(param_3);
  }
  local_80 = FUN_1000ba834(param_1,uVar7,param_4);
  if (local_80 == 0) {
    return;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_7c = 0xffffffff00000000;
  local_74 = 0;
  uStack_6d = 0;
  local_69 = 0xff;
  local_68 = 0;
  local_64 = DAT_101dc1cb8;
  local_5c = 0x3f8000003f800000;
  local_54 = 0x3f800000;
  local_50 = 0;
  local_48 = 0;
  local_44 = 2;
  local_3c = 0x101;
  local_38 = 0;
  iVar5 = FUN_1000ba8f4(param_1,param_4,&local_a0,param_3,param_2,auStack_b0);
  if (iVar5 == 0) {
    return;
  }
  switch(*(ushort *)(param_1 + 0xb0) & 7) {
  case 1:
    lVar6 = FUN_1000e5920(param_2,&local_a0);
    break;
  case 2:
    pcVar10 = *(char **)(param_1 + 0x28);
    if (pcVar10 == (char *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_b8 = (local_b8 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
    puVar8 = &local_b8;
    goto LAB_1000ba7e4;
  case 3:
    (**(code **)(param_1 + 0x28))(param_4,&local_b8);
    pcVar10 = (char *)CONCAT44(uStack_b4,local_b8);
    if (pcVar10 == (char *)0x0) {
      local_c0[0] = 0;
    }
    else {
      local_c0[0] = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (puVar8 = local_c0, cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_c0[0] = (local_c0[0] ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
LAB_1000ba7e4:
    lVar6 = FUN_1000e5bb0(param_2,&local_a0,puVar8);
    break;
  case 4:
    lVar6 = FUN_1000e5bb8(param_2,&local_a0,*(undefined8 *)(param_1 + 0x28));
    break;
  default:
    goto switchD_1000ba710_default;
  }
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x40;
  }
  puVar2 = &DAT_101dc0b88;
  if (lVar6 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 8) = lVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
switchD_1000ba710_default:
  FUN_1000baa54(param_1,param_4);
  return;
}


```

</details>

Called by: `FUN_1000bc0ac` @ `0x1000bc0ac` 

#### `FUN_1000bb21c` @ `0x1000bb21c` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1000bb21c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  char *pcVar10;
  uint local_c0 [2];
  uint local_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_80;
  undefined8 local_7c;
  undefined7 local_74;
  undefined4 uStack_6d;
  undefined1 local_69;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  
  puVar8 = local_c0;
  uVar9 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
  if ((((int)uVar9 != 0x1f) && (*(ushort *)(param_2 + uVar9 * 0x38 + 0x90) - 3 < 2)) &&
     (-1 < *(char *)(param_1 + 0xb0))) {
    return;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_4,param_1 + 0xa8);
  }
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    iVar5 = FUN_1003461dc(param_3);
    if (iVar5 != -1) {
      FUN_1003461dc(param_3);
      lVar6 = FUN_100345d90();
      if (lVar6 != 0) {
        param_3 = lVar6;
      }
    }
    uVar7 = FUN_1003a2d9c(param_3);
  }
  local_80 = FUN_1000bb4b8(param_1,uVar7,param_4);
  if (local_80 == 0) {
    return;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_7c = 0xffffffff00000000;
  local_74 = 0;
  uStack_6d = 0;
  local_69 = 0xff;
  local_68 = 0;
  local_64 = DAT_101dc1cb8;
  local_5c = 0x3f8000003f800000;
  local_54 = 0x3f800000;
  local_50 = 0;
  local_48 = 0;
  local_44 = 2;
  local_3c = 0x101;
  local_38 = 0;
  iVar5 = FUN_1000bb578(param_1,param_4,&local_a0,param_3,param_2,auStack_b0);
  if (iVar5 == 0) {
    return;
  }
  switch(*(ushort *)(param_1 + 0xb0) & 7) {
  case 1:
    lVar6 = FUN_1000e5920(param_2,&local_a0);
    break;
  case 2:
    pcVar10 = *(char **)(param_1 + 0x28);
    if (pcVar10 == (char *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_b8 = (local_b8 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
    puVar8 = &local_b8;
    goto LAB_1000bb468;
  case 3:
    (**(code **)(param_1 + 0x28))(param_4,&local_b8);
    pcVar10 = (char *)CONCAT44(uStack_b4,local_b8);
    if (pcVar10 == (char *)0x0) {
      local_c0[0] = 0;
    }
    else {
      local_c0[0] = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (puVar8 = local_c0, cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_c0[0] = (local_c0[0] ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
LAB_1000bb468:
    lVar6 = FUN_1000e5bb0(param_2,&local_a0,puVar8);
    break;
  case 4:
    lVar6 = FUN_1000e5bb8(param_2,&local_a0,*(undefined8 *)(param_1 + 0x28));
    break;
  default:
    goto switchD_1000bb394_default;
  }
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x40;
  }
  puVar2 = &DAT_101dc0b88;
  if (lVar6 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 8) = lVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
switchD_1000bb394_default:
  FUN_1000bb6d8(param_1,param_4);
  return;
}


```

</details>

Called by: `FUN_1000bc53c` @ `0x1000bc53c` 

#### `FUN_1000c36cc` @ `0x1000c36cc` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1000c36cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 ****local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined4 local_68 [2];
  
  FUN_1000c3554();
  lVar14 = 0;
  if (param_2 != 0) {
    lVar14 = param_2 + 0x28;
  }
  puVar1 = &DAT_101dc0b88;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(lVar14 + 8);
  }
  uVar6 = *puVar1;
  *(long *)(param_1 + 0x18) = lVar14;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  iVar4 = FUN_10034cb58();
  uVar13 = param_5;
  if ((iVar4 != 0) && (param_2 != 0)) {
    iVar4 = FUN_100345bbc(param_2);
    uVar13 = (ulong)(iVar4 == 2);
  }
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
  bVar2 = 2;
  if ((int)uVar13 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xfd | bVar2;
  *(int *)(param_1 + 0x38) = (int)param_3;
  *(char *)(param_1 + 0x3c) = (char)param_4;
  FUN_1000d54e0(*(undefined8 *)(param_1 + 8),param_3,param_4,param_5);
  FUN_1000d6718(*(undefined8 *)(param_1 + 8),(uint)param_5 ^ 1,0);
  lVar14 = *(long *)(param_1 + 8);
  FUN_1003467f8();
  uVar3 = FUN_10034cf60();
  *(undefined1 *)(lVar14 + 0x922f) = uVar3;
  uVar15 = *(undefined8 *)(param_1 + 8);
  FUN_1003467f8();
  uVar8 = FUN_10034cf58();
  FUN_1000d5d94(uVar15,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_1003467f8();
  uVar5 = FUN_10034cf68();
  FUN_1000d5db4(uVar8,uVar5 ^ 1);
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_1003467f8();
  uVar5 = FUN_10034cf68();
  FUN_1000d5dd4(uVar8,uVar5 ^ 1);
  FUN_1000d6044(*(undefined8 *)(param_1 + 8),(*(byte *)(param_1 + 0x152) & 2) == 0);
  if (param_2 == 0) goto LAB_1000c3b78;
  lVar9 = FUN_100490234(param_2);
  lVar14 = 0;
  if (lVar9 != 0) {
    lVar14 = lVar9 + 0x28;
  }
  puVar1 = &DAT_101dc0b88;
  if (lVar9 != 0) {
    puVar1 = (undefined4 *)(lVar14 + 8);
  }
  uVar6 = *puVar1;
  *(long *)(param_1 + 0x28) = lVar14;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  FUN_1000d67c0(*(undefined8 *)(param_1 + 8),6);
  lVar9 = 0;
  lVar14 = param_1 + 0x5c;
  do {
    FUN_1000d563c(0x3f800000,*(undefined8 *)(param_1 + 8),lVar9,lVar14);
    FUN_1000c3bac(param_1,lVar9);
    lVar9 = lVar9 + 1;
    lVar14 = lVar14 + 0x28;
  } while (lVar9 != 6);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar8 = FUN_1004654a0(param_2);
  FUN_1000d5df4(uVar15,uVar8);
  local_68[0] = FUN_1003c5e58(param_2);
  lVar14 = FUN_10032bc58(local_68);
  uVar8 = FUN_10030d844();
  puVar10 = (undefined8 *)FUN_100345940(*(undefined4 *)(param_2 + 0x260));
  if ((char)*(byte *)((long)puVar10 + 0x17) < '\0') {
    uVar13 = puVar10[1];
    if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_1000c5a00();
    }
    puVar10 = (undefined8 *)*puVar10;
  }
  else {
    uVar13 = (ulong)*(byte *)((long)puVar10 + 0x17);
  }
  if (uVar13 < 0x17) {
    uStack_70 = CONCAT17((char)uVar13,(undefined7)uStack_70);
    pppppuVar11 = &local_80;
    if (uVar13 != 0) goto LAB_1000c3960;
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pppppuVar11 = operator_new(uVar12);
    uStack_70 = uVar12 | 0x8000000000000000;
    local_80 = pppppuVar11;
    local_78 = uVar13;
LAB_1000c3960:
    _memcpy(pppppuVar11,puVar10,uVar13);
  }
  *(undefined1 *)((long)pppppuVar11 + uVar13) = 0;
  uVar6 = FUN_10030d540(uVar8,&local_80,*(undefined8 *)(lVar14 + 0x10));
  if ((long)uStack_70 < 0) {
    operator_delete(local_80);
  }
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x921c) = uVar6;
  FUN_1000c3bf4(param_1);
  uVar13 = FUN_10034ea2c();
  uVar12 = FUN_100147980();
  if ((uVar12 & 1) == 0) {
    if ((uVar13 & 1) == 0) goto LAB_1000c39e4;
LAB_1000c39d4:
    uVar8 = 0;
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_10034ee90();
    iVar7 = FUN_1000c3bf4(param_1);
    if (iVar4 == iVar7) goto LAB_1000c39d4;
LAB_1000c39e4:
    FUN_1000c3bf4(param_1);
    iVar4 = FUN_10034ed38();
    if (iVar4 == 0) {
      iVar4 = 0;
      uVar8 = 1;
    }
    else {
      FUN_1003467f8();
      uVar8 = FUN_10034cf50();
      iVar4 = 0;
    }
  }
  FUN_1000d68bc(*(undefined8 *)(param_1 + 8),uVar8);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar8 = FUN_10034ee90();
  uVar5 = 0;
  if (((int)uVar8 != *(int *)(param_2 + 0x260)) && ((param_5 & 1) == 0)) {
    uVar5 = FUN_10034cb58(uVar8,0);
    uVar5 = uVar5 ^ 1;
  }
  FUN_1000d6904(uVar15,uVar5);
  FUN_1000d301c(*(undefined8 *)(param_1 + 8),iVar4);
  if ((((iVar4 != 0) && (iVar4 = FUN_100126b8c(), iVar4 != 0)) &&
      (iVar4 = FUN_100129b4c(), iVar4 != 0)) && (uVar13 = FUN_100147980(), (uVar13 & 1) == 0)) {
    operator_new(0x38);
    uVar8 = thunk_FUN_100218f18();
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    uVar6 = 1;
    if ((int)param_3 != 0) {
      uVar6 = 2;
    }
    FUN_100219060(uVar8,uVar6);
    FUN_1000d6928(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  }
  lVar14 = *(long *)(param_2 + 0x18);
  while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar14 = *(long *)(lVar14 + 0x20);
  }
  uVar8 = FUN_1000c3c70(param_2);
  if (-1 < (int)uVar8) {
    uVar16 = *(undefined8 *)(param_1 + 8);
    uVar15 = FUN_1004654a0(param_2);
    uVar8 = FUN_100461330(lVar14,uVar8);
    FUN_1000d5e78(uVar16,uVar15,uVar8,param_1 + 0x134);
  }
  if ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) == 0) {
    FUN_1003467f8();
    uVar13 = FUN_10034cf60();
    if ((uVar13 & 1) == 0) {
      lVar14 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      uVar6 = *(undefined4 *)(lVar14 + 0x260);
      uVar16 = *(undefined8 *)(param_1 + 8);
      uVar8 = FUN_10034e938(uVar6);
      uVar15 = FUN_10034e988(uVar6);
      FUN_1000d6304(uVar16,uVar8
// ...truncated...
```

</details>

Called by: `FUN_1000c1080` @ `0x1000c1080` 

#### `FUN_1001c6fd8` @ `0x1001c6fd8` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1001c6fd8(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined4 local_44;
  
  fVar5 = (float)NEON_fminnm((float)(int)param_2,0x41e80000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  iVar4 = (int)fVar5;
  FUN_1000f0a34(iVar4);
  iVar3 = FUN_1000f0a5c(iVar4);
  local_44 = 0xff000000;
  thunk_FUN_1004e439c(auStack_58,&DAT_101d91650);
  if (iVar4 < 0) {
    if (iVar4 == -1) {
      local_44 = 0xffffffff;
      uVar2 = *(uint *)(param_1 + 0x84);
      if ((uVar2 & 0x7f80) != 0x2600) {
        *(uint *)(param_1 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
        FUN_1000200a0(param_1);
      }
    }
  }
  else {
    if (iVar3 == 0) {
      local_44 = 0xff3f6fb5;
    }
    else if (iVar3 == 1) {
      local_44 = 0xffc5c5c5;
    }
    else if (iVar3 == 2) {
      local_44 = 0xff4fc1f1;
    }
    if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
      FUN_1000200a0(param_1);
    }
    FUN_1004e38ac(auStack_58,"%d");
  }
  FUN_100652dd4(param_1 + 0xb8,&local_44,2);
  lVar1 = param_1 + 0x298;
  FUN_1006513c0(lVar1,auStack_58);
  FUN_100651460(lVar1,&local_44);
  *(uint *)(param_1 + 0x31c) =
       (*(uint *)(param_1 + 0x31c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x31c) & 3 | (int)((param_2 >> 0x1d & 7) >> 2) << 2) ^ 4;
  FUN_10064e5ec(0,0xc0000000,lVar1,8,param_1 + 0xb8,8);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  return;
}


```

</details>

Called by: `FUN_1002fa5cc` @ `0x1002fa5cc` `FUN_1002b6238` @ `0x1002b6238` `FUN_10017c180` @ `0x10017c180` `FUN_100191cf0` @ `0x100191cf0` `FUN_1001c7990` @ `0x1001c7990` `FUN_1002b3df8` @ `0x1002b3df8` `FUN_1002e062c` @ `0x1002e062c` `FUN_1002e94b0` @ `0x1002e94b0` `FUN_1002e9dec` @ `0x1002e9dec` `FUN_100230134` @ `0x100230134` `FUN_1001a15d8` @ `0x1001a15d8` `FUN_10019de60` @ `0x10019de60` `FUN_1002d54d8` @ `0x1002d54d8` `FUN_1002a9dd8` @ `0x1002a9dd8` 

#### `FUN_1001ca378` @ `0x1001ca378` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1001ca378(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x2440) != '\0') && (*(char *)(param_1 + 0x2441) == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x17e4);
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x17e4) = uVar1 | 0x7f80;
      FUN_1000200a0(param_1 + 0x1760);
      uVar1 = *(uint *)(param_1 + 0x17e4);
    }
    *(uint *)(param_1 + 0x17e4) = uVar1 ^ 4;
  }
  return;
}


```

</details>

Called by: `thunk_FUN_1001ca378` @ `0x1001ca0d0` 

#### `FUN_1002bd728` @ `0x1002bd728` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1002bd728(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x493c) = *(uint *)(param_1 + 0x493c) & 0xfffffffb | uVar3;
  lVar1 = param_1 + 0x3d40;
  FUN_100530068(lVar1,param_2 ^ 1);
  if (((param_2 ^ 1) & 1) == 0) {
    FUN_1001c0e10();
    FUN_1002ecce4(lVar1,&DAT_101d91650);
    uVar3 = *(uint *)(param_1 + 0x3dc4);
    if ((uVar3 & 0x7f80) == 0x6600) {
      return;
    }
    uVar3 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
  }
  else {
    FUN_1001c102c(param_1 + 0x48b8);
    uVar2 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
    FUN_1002ecce4(lVar1,uVar2);
    if ((~*(uint *)(param_1 + 0x3dc4) & 0x7f80) == 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x3dc4) | 0x7f80;
  }
  *(uint *)(param_1 + 0x3dc4) = uVar3;
  FUN_1000200a0(lVar1);
  return;
}


```

</details>

Called by: `FUN_1001fc0e8` @ `0x1001fc0e8` `FUN_1002bd814` @ `0x1002bd814` 

#### `FUN_1002d3494` @ `0x1002d3494` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1002d3494(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 0xc8e4);
  uVar4 = 4;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0xd644) = *(uint *)(param_1 + 0xd644) & 0xfffffffb | uVar4;
  lVar2 = param_1 + 0xc860;
  FUN_100530068(lVar2,param_2 ^ 1);
  if (((param_2 ^ 1) & 1) == 0) {
    FUN_1001c0e10();
    FUN_1002ecce4(lVar2,&DAT_101d91650);
    uVar4 = *puVar1;
    if ((uVar4 & 0x7f80) == 0x6600) {
      return;
    }
    uVar4 = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
  }
  else {
    FUN_1001c102c(param_1 + 0xd5c0);
    uVar3 = FUN_1004e0150("MAIN_PROFILE_REG_SUBMIT",0);
    FUN_1002ecce4(lVar2,uVar3);
    if ((~*puVar1 & 0x7f80) == 0) {
      return;
    }
    uVar4 = *puVar1 | 0x7f80;
  }
  *puVar1 = uVar4;
  FUN_1000200a0(lVar2);
  return;
}


```

</details>

Called by: `FUN_100206fe4` @ `0x100206fe4` `FUN_100206f70` @ `0x100206f70` `FUN_1002d3930` @ `0x1002d3930` 

#### `FUN_1003c1b74` @ `0x1003c1b74` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1003c1b74(long param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  float fVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  char *pcVar14;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined3 uStack_9c;
  undefined1 local_99;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  uint uStack_74;
  uint local_70;
  byte local_6c;
  byte local_6b;
  undefined1 local_6a;
  ushort local_69;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  switch(*(ushort *)(param_1 + 0x80) >> 6 & 7) {
  case 1:
    FUN_10034ee90();
    lVar9 = FUN_100345d90();
    lVar13 = param_2;
    do {
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (*(int *)(*(long *)(lVar13 + 8) + 0xa4) != DAT_10184dd68);
    if (*(char *)(lVar13 + 0x264) != *(char *)(lVar9 + 0x264)) {
      return;
    }
    break;
  case 2:
    FUN_10034ee90();
    lVar9 = FUN_100345d90();
    lVar13 = param_2;
    do {
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (*(int *)(*(long *)(lVar13 + 8) + 0xa4) != DAT_10184dd68);
    if (*(char *)(lVar13 + 0x264) == *(char *)(lVar9 + 0x264)) {
      return;
    }
    break;
  case 3:
    lVar13 = (**(code **)(**(long **)(param_2 + 0x1c8) + 0x10))();
    uVar8 = FUN_10034ea2c(*(undefined4 *)(lVar13 + 0x260));
    if ((uVar8 & 1) == 0) {
      return;
    }
    break;
  case 4:
    lVar13 = param_2;
    do {
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (*(int *)(*(long *)(lVar13 + 8) + 0xa4) != DAT_10184dd68);
    iVar6 = FUN_10034ea2c(*(undefined4 *)(lVar13 + 0x260));
    if (iVar6 == 0) {
      return;
    }
  }
  lVar13 = *(long *)(param_2 + 0x10);
  while ((lVar13 != 0 && (*(int *)(*(long *)(lVar13 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar13 = *(long *)(lVar13 + 0x10);
  }
  iVar6 = FUN_1003461dc(lVar13);
  lVar9 = lVar13;
  if (iVar6 != -1) {
    FUN_1003461dc(lVar13);
    lVar9 = FUN_100345d90();
  }
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(param_2,lVar13,param_1 + 0x2c);
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (uVar7 = FUN_10034f06c(), uVar7 != *(byte *)(lVar13 + 0x264))) {
    pcVar14 = (char *)0x0;
  }
  else {
    pcVar14 = *(char **)(param_1 + 0x20);
  }
  if (((*(byte *)(param_1 + 0x80) >> 5 & 1) != 0) && (*(code **)(param_1 + 0x30) != (code *)0x0)) {
    (**(code **)(param_1 + 0x30))(0,param_2,param_1 + 0x48);
  }
  local_48 = 0;
  pcVar12 = *(code **)(param_1 + 0x68);
  if (pcVar12 == (code *)0x0) {
    pcVar12 = *(code **)(param_1 + 0x70);
    if (pcVar12 == (code *)0x0) goto LAB_1003c1d84;
    lVar4 = -0x48;
  }
  else {
    lVar4 = -0x38;
  }
  (*pcVar12)(param_2,&stack0xfffffffffffffff0 + lVar4);
LAB_1003c1d84:
  if (pcVar14 == (char *)0x0) {
    local_b0 = *(uint *)(param_1 + 0x10);
  }
  else {
    local_b0 = 0x811c9dc5;
    cVar1 = *pcVar14;
    while (cVar1 != '\0') {
      pcVar14 = pcVar14 + 1;
      local_b0 = (local_b0 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar14;
    }
  }
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = (undefined1 *)0x0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_99 = 0xff;
  local_98 = 0;
  local_94 = DAT_101dc1cb8;
  local_8c = 0x3f8000003f800000;
  local_84 = 0x3f800000;
  local_80 = 0;
  local_69 = 0;
  local_ac = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(ushort *)(param_1 + 0x80);
  local_6c = (byte)uVar2 & 1;
  local_6b = (byte)(uVar2 >> 1) & 1;
  uStack_74 = uVar2 >> 2 & 3;
  local_70 = 0;
  local_78 = 0;
  local_6a = 0;
  uVar7 = FUN_10034f06c();
  local_a8 = *(undefined4 *)(param_1 + 0x3c);
  local_70 = (uint)(uVar7 != *(byte *)(lVar13 + 0x264));
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (*(long **)(lVar9 + 0x50) != (long *)0x0) {
      uVar10 = (**(code **)(**(long **)(lVar9 + 0x50) + 0x178))();
    }
  }
  local_a4 = *(undefined4 *)(param_1 + 0x48);
  local_69 = CONCAT11(*(byte *)(param_1 + 0x80) >> 4,*(byte *)(param_1 + 0x80) >> 5) & 0x101;
  local_c0 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    local_c0 = auStack_58;
  }
  local_d0 = local_48;
  uStack_b8 = uVar10;
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))
              (param_2,param_1 + 0x4c,param_1 + 0x58,param_1 + 0x5c,param_1 + 0x60);
  }
  fVar3 = *(float *)(param_1 + 0x58);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x5c) == 0.0) && (bVar5 = false, !NAN(fVar3))) {
    bVar5 = fVar3 == 0.0;
  }
  if (!bVar5) {
    local_8c = *(undefined8 *)(param_1 + 0x4c);
    local_84 = *(undefined4 *)(param_1 + 0x54);
    local_78 = *(undefined4 *)(param_1 + 0x60);
    local_80 = *(undefined8 *)(param_1 + 0x58);
  }
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 == 3) {
    if (*(long *)(lVar13 + 0x50) == 0) {
      return;
    }
    param_1 = FUN_100448e2c(lVar13,*(undefined8 *)(param_1 + 0x18));
    plVar11 = *(long **)(lVar13 + 0x50);
    pcVar12 = *(code **)(*plVar11 + 0xb0);
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 != 1) {
        return;
      }
      plVar11 = *(long **)(lVar13 + 0x50);
      if (plVar11 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar11 + 0xa0))(plVar11,&local_d0);
      return;
    }
    plVar11 = *(long **)(lVar13 + 0x50);
    if (plVar11 == (long *)0x0) {
      return;
    }
    param_1 = param_1 + 0x38;
    pcVar12 = *(code **)(*plVar11 + 0xa8);
  }
  (*pcVar12)(plVar11,&local_d0,param_1);
  return;
}


```

</details>

#### `FUN_1003c37d0` @ `0x1003c37d0` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_1003c37d0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 unaff_s8;
  float unaff_s9;
  undefined4 unaff_s10;
  undefined **local_740;
  undefined8 uStack_738;
  undefined4 local_730;
  float fStack_72c;
  undefined4 local_728;
  undefined4 local_724;
  undefined1 local_720;
  undefined **local_718;
  long local_710;
  undefined1 local_708;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined8 local_6f4;
  undefined8 uStack_6ec;
  undefined8 local_6e4;
  undefined8 uStack_6dc;
  undefined8 local_6d4;
  undefined7 uStack_6cc;
  undefined1 uStack_6c5;
  undefined4 uStack_6c4;
  ushort uStack_6c0;
  undefined1 uStack_6be;
  float local_6b8 [12];
  undefined4 local_688;
  float fStack_684;
  undefined4 local_680;
  long local_78;
  
  pppuVar6 = &local_740;
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) goto LAB_1003c3b38;
  local_710 = *(undefined8 *)(param_1 + 0x18);
  local_708 = *(undefined1 *)(param_1 + 0x20);
  local_718 = &PTR_FUN_101499960;
  uStack_6ec = *(undefined8 *)(param_1 + 0x3c);
  local_6f4 = *(undefined8 *)(param_1 + 0x34);
  uStack_6dc = *(undefined8 *)(param_1 + 0x4c);
  local_6e4 = *(undefined8 *)(param_1 + 0x44);
  local_6d4 = *(undefined8 *)(param_1 + 0x54);
  uStack_6cc = (undefined7)*(undefined8 *)(param_1 + 0x5c);
  uVar7 = *(undefined8 *)(param_1 + 99);
  uStack_6c5 = (undefined1)uVar7;
  uStack_6c4 = (undefined4)((ulong)uVar7 >> 8);
  uStack_6c0 = (ushort)((ulong)uVar7 >> 0x28);
  uStack_6be = (undefined1)((ulong)uVar7 >> 0x38);
  uStack_6fc = *(undefined8 *)(param_1 + 0x2c);
  local_704 = *(undefined8 *)(param_1 + 0x24);
  lVar9 = *(long *)(param_2 + 0x10);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  pcVar8 = *(char **)(param_1 + 0x98);
  if (pcVar8 != (char *)0x0) {
    uVar3 = 0x811c9dc5;
    cVar2 = *pcVar8;
    while (cVar2 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar8;
    }
    local_740 = (undefined **)CONCAT44(local_740._4_4_,uVar3);
    FUN_1003ab468(lVar9,&local_740,local_6b8);
    unaff_s8 = local_688;
    unaff_s9 = fStack_684;
    unaff_s10 = local_680;
    goto LAB_1003c3914;
  }
  if ((*(byte *)(param_1 + 0xa8) >> 3 & 1) == 0) {
LAB_1003c3900:
    unaff_s8 = *(undefined4 *)(lVar9 + 0x250);
    fVar13 = *(float *)(lVar9 + 0x254);
    unaff_s10 = *(undefined4 *)(lVar9 + 600);
    fVar14 = *(float *)(lVar9 + 0x2ec);
LAB_1003c3910:
    unaff_s9 = fVar14 + fVar13;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x238) >> 3 & 7;
    if (uVar3 == 1) {
      plVar4 = *(long **)(param_2 + 0x1c8);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(param_2 + 0x1d0) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 != 0) {
            unaff_s8 = *(undefined4 *)(lVar5 + 0x250);
            fVar13 = *(float *)(lVar5 + 0x254);
            unaff_s10 = *(undefined4 *)(lVar5 + 600);
            fVar14 = *(float *)(lVar5 + 0x2ec);
            goto LAB_1003c3910;
          }
        }
        else {
          *(undefined8 *)(param_2 + 0x1c8) = 0;
          *(undefined4 *)(param_2 + 0x1d0) = DAT_101dc0b88;
        }
      }
    }
    else {
      if (uVar3 != 2) goto LAB_1003c3900;
      unaff_s8 = *(undefined4 *)(param_2 + 0x1d8);
      unaff_s9 = *(float *)(param_2 + 0x1dc);
      unaff_s10 = *(undefined4 *)(param_2 + 0x1e0);
    }
  }
LAB_1003c3914:
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 == 2) {
    local_6b8[0] = 0.0;
    (**(code **)(param_1 + 0x70))(param_2,local_6b8);
    fVar13 = local_6b8[0];
LAB_1003c395c:
    local_6e4 = CONCAT44(local_6e4._4_4_,fVar13 * fVar13);
  }
  else {
    if (iVar1 == 1) {
      fVar13 = (float)(**(code **)(param_1 + 0x70))(lVar9);
      goto LAB_1003c395c;
    }
    if (iVar1 == 0) {
      fVar13 = *(float *)(param_1 + 0x70);
      goto LAB_1003c395c;
    }
  }
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    uVar12 = (**(code **)(param_1 + 0x78))(lVar9);
    *(undefined4 *)(param_1 + 0xa4) = uVar12;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0xa8);
  local_710 = lVar9;
  if ((*(byte *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    if (*(code **)(param_1 + 0x90) == (code *)0x0) {
      fVar13 = *(float *)(param_1 + 0xa4);
      if (0.0 < *(float *)(param_1 + 0xa4)) goto LAB_1003c3a00;
      if (uStack_6ec._4_4_ < 0.0) goto LAB_1003c3a1c;
      goto LAB_1003c3a10;
    }
    local_6b8[0] = 0.0;
    (**(code **)(param_1 + 0x90))(param_2,local_6b8);
    local_704 = CONCAT44(unaff_s9,unaff_s8);
    uStack_6fc = CONCAT44(uStack_6fc._4_4_,unaff_s10);
    uStack_6ec = CONCAT44(local_6b8[0] * local_6b8[0],(undefined4)uStack_6ec);
    uStack_6c0 = uStack_6c0 | 0x8000;
    uVar3 = (uint)*(byte *)(param_1 + 0xa8);
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x40);
    fVar13 = *(float *)(lVar9 + 0x78) + *(float *)(lVar9 + 300) * (*(float *)(lVar9 + 0x294) + 1.0);
    NEON_fminnm(fVar13 + fVar13 * *(float *)(lVar9 + 0x1e0),DAT_101e94360);
    fVar13 = DAT_101e942a0;
LAB_1003c3a00:
    uStack_6ec = CONCAT44(fVar13 * fVar13,(undefined4)uStack_6ec);
LAB_1003c3a10:
    local_704 = CONCAT44(unaff_s9,unaff_s8);
    uStack_6fc = CONCAT44(uStack_6fc._4_4_,unaff_s10);
    uStack_6c0 = uStack_6c0 | 0x8000;
  }
LAB_1003c3a1c:
  if ((uVar3 >> 4 & 1) == 0) {
    pppuVar6 = (undefined ***)0x0;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x10);
    while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar9 = *(long *)(lVar9 + 0x10);
    }
    local_724 = FUN_1003c3bf0(param_1 + 0x80,param_2);
    local_740 = &PTR_FUN_101499a08;
    uStack_738 = 0;
    local_720 = 0;
    local_730 = unaff_s8;
    fStack_72c = unaff_s9;
    local_728 = unaff_s
// ...truncated...
```

</details>

#### `FUN_10043d798` @ `0x10043d798` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_10043d798(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  uint uStack_50;
  float local_4c;
  undefined1 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  if ((((*(int *)(local_40 + 0x10) == *(int *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260)
        ) && (*(long *)(local_40 + 0x20) != 0)) &&
      (iVar4 = FUN_10043d9a0(), puVar2 = PTR_s__Item_JourneyBoots__10185ab20, iVar4 != 0)) &&
     ((*(byte *)(local_40 + 0xc) >> 4 & 1) == 0)) {
    uVar5 = FUN_1010a1520();
    lVar6 = FUN_1010a0e0c(uVar5,0,puVar2,0);
    fVar14 = 0.0;
    if (**(long **)(lVar6 + 0x1a8) != 0) {
      lVar12 = 8;
      do {
        lVar9 = *(long *)((long)*(long **)(lVar6 + 0x1a8) + lVar12);
        if (lVar9 == 0) break;
        iVar4 = (int)lVar12;
        lVar12 = lVar12 + 8;
      } while (iVar4 != 0x20);
      fVar14 = 0.0;
      if (lVar9 != 0) {
        fVar14 = *(float *)(lVar9 + 8);
      }
    }
    lVar6 = *(long *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184e000))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    iVar4 = FUN_1003b1948(DAT_101d90978,PTR_s__Item_JourneyBoots__10185ab20);
    uVar8 = (ulong)*(byte *)(lVar6 + 0xdd) & 0x7f;
    if ((int)uVar8 != 0) {
      uVar10 = 0;
      bVar3 = true;
      do {
        lVar12 = *(long *)(lVar6 + uVar10 * 8 + 0x38);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x48) == iVar4)) break;
        uVar10 = uVar10 + 1;
        bVar3 = uVar10 < uVar8;
      } while (uVar8 != uVar10);
      if (bVar3) {
        uVar10 = 0;
        do {
          lVar12 = *(long *)(lVar6 + uVar10 * 8 + 0x38);
          if ((lVar12 != 0) && (*(int *)(lVar12 + 0x48) == iVar4)) {
            uVar7 = *(undefined4 *)(lVar12 + 0x4c);
            goto LAB_10043d900;
          }
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
        uVar7 = 0xffffffff;
LAB_10043d900:
        fVar13 = (float)FUN_10043da00(lVar6,uVar7);
        if (fVar14 < fVar13) {
          uStack_50 = 0x811c9dc5;
          local_54 = *(undefined4 *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260);
          cVar1 = *PTR_s_Ability__Item__JourneyBoots_101858e18;
          pcVar11 = PTR_s_Ability__Item__JourneyBoots_101858e18;
          while (cVar1 != '\0') {
            pcVar11 = pcVar11 + 1;
            uStack_50 = (uStack_50 ^ (int)cVar1) * 0x1000193;
            cVar1 = *pcVar11;
          }
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_70 = &PTR_FUN_101497330;
          local_48 = 1;
          local_4c = fVar14;
          FUN_10049650c(&local_70,&DAT_101e47d30);
        }
      }
    }
  }
  return;
}


```

</details>

#### `FUN_100458248` @ `0x100458248` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_100458248(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  char cVar8;
  char *pcVar9;
  uint local_e0 [2];
  char *local_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  uint uStack_a0;
  undefined3 uStack_9c;
  undefined1 local_99;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 local_68;
  int local_60 [2];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  puVar5 = local_e0;
  if (DAT_101d23a38 == '\0') {
    local_48 = 0;
    uVar6 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
    if ((((int)uVar6 == 0x1f) || (1 < *(ushort *)(param_2 + uVar6 * 0x38 + 0x90) - 3)) ||
       (*(char *)(param_1 + 100) < '\0')) {
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_4,param_1 + 0x5c);
      }
      if (param_3 == 0) {
        bVar2 = false;
      }
      else {
        uVar3 = FUN_10034f06c();
        bVar2 = uVar3 == *(byte *)(param_3 + 0x264);
      }
      local_60[0] = 0;
      FUN_100491234(param_1,bVar2,param_4,local_60);
      if (local_60[0] != 0) {
        lStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        local_c0 = (undefined1 *)0x0;
        local_b0 = local_60[0];
        local_ac = 0xffffffff00000000;
        local_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_99 = 0xff;
        local_98 = 0;
        local_94 = DAT_101dc1cb8;
        local_8c = 0x3f8000003f800000;
        local_84 = 0x3f800000;
        local_80 = 0;
        local_78 = 0;
        local_74 = 2;
        local_6c = 0x101;
        local_68 = 0;
        FUN_1004912fc(param_1,&local_d0,param_3,param_2);
        if (*(code **)(param_1 + 0x40) != (code *)0x0) {
          (**(code **)(param_1 + 0x40))(param_4,&local_8c,&local_80,(long)&local_80 + 4,&local_78);
        }
        local_d8 = (char *)0x0;
        if (*(code **)(param_1 + 0x30) == (code *)0x0) {
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_4,auStack_58);
          }
        }
        else {
          (**(code **)(param_1 + 0x30))(param_4,&local_48,&local_d8,(ulong)&local_d0 | 8);
          if (lStack_c8 != 0) {
            lStack_c8 = FUN_100448e2c(param_2);
          }
        }
        local_e0[0] = 0x811c9dc5;
        local_d0 = local_48;
        if (local_d8 == (char *)0x0) {
          uStack_a0 = 0;
        }
        else {
          cVar8 = *local_d8;
          uStack_a0 = 0x811c9dc5;
          if (cVar8 != '\0') {
            uStack_a0 = 0x811c9dc5;
            pcVar9 = local_d8;
            do {
              pcVar9 = pcVar9 + 1;
              uStack_a0 = (uStack_a0 ^ (int)cVar8) * 0x1000193;
              cVar8 = *pcVar9;
            } while (cVar8 != '\0');
          }
        }
        local_c0 = (undefined1 *)0x0;
        if (*(long *)(param_1 + 0x38) != 0) {
          local_c0 = auStack_58;
        }
        pcVar9 = *(char **)(param_1 + 0x10);
        if (pcVar9 == (char *)0x0) {
          local_e0[0] = 0;
        }
        else {
          cVar8 = *pcVar9;
          while (cVar8 != '\0') {
            pcVar9 = pcVar9 + 1;
            local_e0[0] = (local_e0[0] ^ (int)cVar8) * 0x1000193;
            cVar8 = *pcVar9;
          }
        }
        uVar1 = *(ushort *)(param_1 + 100) & 7;
        if (uVar1 == 3) {
          if (*(long *)(param_2 + 0x50) == 0) {
            return;
          }
          puVar5 = (uint *)FUN_100448e2c(param_2,*(undefined8 *)(param_1 + 0x18));
          plVar4 = *(long **)(param_2 + 0x50);
          pcVar7 = *(code **)(*plVar4 + 0xb0);
        }
        else {
          if (uVar1 != 2) {
            if (uVar1 != 1) {
              return;
            }
            plVar4 = *(long **)(param_2 + 0x50);
            if (plVar4 == (long *)0x0) {
              return;
            }
            (**(code **)(*plVar4 + 0xa0))(plVar4,&local_d0);
            return;
          }
          plVar4 = *(long **)(param_2 + 0x50);
          if (plVar4 == (long *)0x0) {
            return;
          }
          pcVar7 = *(code **)(*plVar4 + 0xa8);
        }
        (*pcVar7)(plVar4,&local_d0,puVar5);
      }
    }
  }
  return;
}


```

</details>

Called by: `FUN_100458600` @ `0x100458600` `FUN_1004587e8` @ `0x1004587e8` `FUN_10044f340` @ `0x10044f340` 

#### `FUN_10046d878` @ `0x10046d878` (broad scan)

<details><summary>Decompiled</summary>

```c

void FUN_10046d878(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  int iStack_98;
  undefined4 local_94;
  int local_90 [10];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 == '\0') goto LAB_10046db28;
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar14 = *(long *)(lVar6 + 0x18);
  lVar15 = lVar14;
  if (lVar14 == 0) {
    lVar15 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_10184daa8) break;
      lVar15 = *(long *)(lVar15 + 0x20);
    } while (lVar15 != 0);
    do {
      if (*(int *)(*(long *)(lVar14 + 8) + 0xa4) == DAT_10184e000) break;
      lVar14 = *(long *)(lVar14 + 0x20);
    } while (lVar14 != 0);
  }
  uVar3 = *(ushort *)(lVar14 + 0xdc);
  uVar8 = (uint)uVar3;
  if ((uVar3 & 0x7f00) != 0) {
    uVar11 = 0;
    uVar10 = uVar3 >> 8 & 0x7f;
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar12 = (ulong)uVar10;
    plVar13 = (long *)(lVar14 + 0x38);
    do {
      if (*plVar13 != 0) {
        local_90[uVar11] = *(int *)(*plVar13 + 0x4c);
        uVar11 = (ulong)((int)uVar11 + 1);
      }
      plVar13 = plVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar10 = *(uint *)(param_1 + 0x50);
  if ((uVar10 & 0x7fff0000) != 0) {
    uVar11 = 0;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
LAB_10046d980:
    iVar2 = *(int *)(param_1 + uVar11 * 4 + 0x38);
    if ((uVar8 & 0xff) == 0) {
      bVar4 = false;
    }
    else {
      uVar12 = 0;
      iVar9 = *(int *)(param_1 + 0x4c);
      bVar4 = true;
      do {
        if ((local_90[uVar12] != iVar9) &&
           (uVar5 = FUN_10046e01c(lVar14,local_90[uVar12],iVar2), (uVar5 & 1) != 0)) break;
        uVar12 = uVar12 + 1;
        bVar4 = uVar12 < (uVar8 & 0xff);
      } while ((uVar8 & 0xff) != uVar12);
    }
    lVar7 = *(long *)(lVar15 + 0x28);
    for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
      if (*(int *)(lVar6 + 0x30c) == iVar2) {
        if (*(int *)(lVar6 + 0x310) == 0) {
          iVar9 = *(int *)(lVar7 + 0x30c);
          lVar6 = lVar7;
          if (iVar9 != iVar2) goto LAB_10046da6c;
          if (*(short *)(lVar7 + 0x344) == 1) goto LAB_10046da1c;
          goto LAB_10046da9c;
        }
        break;
      }
    }
    goto LAB_10046dad4;
  }
  goto LAB_10046db20;
LAB_10046da6c:
  do {
    lVar6 = *(long *)(lVar6 + 0x350);
  } while (*(int *)(lVar6 + 0x30c) != iVar2);
  if (*(short *)(lVar6 + 0x344) == 1) {
    while (iVar9 != iVar2) {
      lVar7 = *(long *)(lVar7 + 0x350);
      iVar9 = *(int *)(lVar7 + 0x30c);
    }
LAB_10046da1c:
    if ((*(short *)(lVar7 + 0x346) != 1) || ((bool)(bVar4 ^ 1))) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b8 = &PTR_FUN_101496cd8;
      local_9c = uVar1;
      iStack_98 = iVar2;
      FUN_100496580(&local_b8,&DAT_101e47d30);
    }
  }
  else {
LAB_10046da9c:
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_b8 = &PTR_FUN_101496db8;
    local_94 = 1;
    local_9c = uVar1;
    iStack_98 = iVar2;
    FUN_100496860(&local_b8,&DAT_101e47d30);
  }
LAB_10046dad4:
  uVar11 = uVar11 + 1;
  uVar10 = *(uint *)(param_1 + 0x50);
  if (((ulong)(uVar10 >> 0x10) & 0x7fff) <= uVar11) goto LAB_10046daf0;
  uVar8 = (uint)*(byte *)(lVar14 + 0xdc);
  goto LAB_10046d980;
LAB_10046daf0:
  if ((uVar10 & 0x7fff0000) != 0) {
    uVar11 = 0;
    do {
      *(undefined4 *)(param_1 + 0x38 + uVar11 * 4) = 0xffffffff;
      uVar11 = uVar11 + 1;
      uVar10 = *(uint *)(param_1 + 0x50);
    } while (uVar11 < ((ulong)(uVar10 >> 0x10) & 0x7fff));
  }
LAB_10046db20:
  *(uint *)(param_1 + 0x50) = uVar10 & 0x8000ffff;
LAB_10046db28:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

</details>

Called by: `FUN_10046d75c` @ `0x10046d75c` 

#### `FUN_10049a5c4` @ `0x10049a5c4` (broad scan)

<details><summary>Decompiled</summary>

```c

ulong FUN_10049a5c4(uint6 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = 0x9e3779b97f4a7c13;
  uVar3 = param_2;
  uVar2 = param_3;
  if (((ulong)param_1 & 7) == 0) {
    for (; 0x17 < uVar3; uVar3 = uVar3 - 0x18) {
      uVar4 = *(long *)(param_1 + 2) + uVar4;
      uVar5 = (*(long *)param_1 + param_3) - (*(long *)(param_1 + 1) + uVar2 + uVar4) ^
              uVar4 >> 0x2b;
      uVar6 = (*(long *)(param_1 + 1) + uVar2) - (uVar4 + uVar5) ^ uVar5 << 9;
      uVar2 = uVar4 - (uVar5 + uVar6) ^ uVar6 >> 8;
      uVar4 = uVar5 - (uVar6 + uVar2) ^ uVar2 >> 0x26;
      uVar5 = uVar6 - (uVar2 + uVar4) ^ uVar4 << 0x17;
      uVar2 = uVar2 - (uVar4 + uVar5) ^ uVar5 >> 5;
      uVar4 = uVar4 - (uVar5 + uVar2) ^ uVar2 >> 0x23;
      uVar6 = uVar5 - (uVar2 + uVar4) ^ uVar4 << 0x31;
      uVar5 = uVar2 - (uVar4 + uVar6) ^ uVar6 >> 0xb;
      param_3 = uVar4 - (uVar6 + uVar5) ^ uVar5 >> 0xc;
      uVar2 = uVar6 - (uVar5 + param_3) ^ param_3 << 0x12;
      uVar4 = uVar5 - (param_3 + uVar2) ^ uVar2 >> 0x16;
      param_1 = param_1 + 3;
    }
  }
  else {
    for (; 0x17 < uVar3; uVar3 = uVar3 - 0x18) {
      lVar1 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30) + (ulong)param_1[1] +
              ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
      uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x30) + (ulong)param_1[2] +
              ((ulong)*(byte *)((long)param_1 + 0x17) << 0x38);
      uVar2 = (param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30) + (ulong)*param_1 +
              ((ulong)*(byte *)((long)param_1 + 7) << 0x38)) - (lVar1 + uVar4) ^ uVar4 >> 0x2b;
      uVar6 = lVar1 - (uVar4 + uVar2) ^ uVar2 << 9;
      uVar5 = uVar4 - (uVar2 + uVar6) ^ uVar6 >> 8;
      uVar4 = uVar2 - (uVar6 + uVar5) ^ uVar5 >> 0x26;
      uVar6 = uVar6 - (uVar5 + uVar4) ^ uVar4 << 0x17;
      uVar2 = uVar5 - (uVar4 + uVar6) ^ uVar6 >> 5;
      uVar4 = uVar4 - (uVar6 + uVar2) ^ uVar2 >> 0x23;
      uVar6 = uVar6 - (uVar2 + uVar4) ^ uVar4 << 0x31;
      uVar5 = uVar2 - (uVar4 + uVar6) ^ uVar6 >> 0xb;
      param_3 = uVar4 - (uVar6 + uVar5) ^ uVar5 >> 0xc;
      uVar2 = uVar6 - (uVar5 + param_3) ^ param_3 << 0x12;
      uVar4 = uVar5 - (param_3 + uVar2) ^ uVar2 >> 0x16;
      param_1 = param_1 + 3;
    }
  }
  uVar4 = uVar4 + param_2;
  switch(uVar3) {
  case 0x17:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x38);
  case 0x16:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x15) << 0x30);
  case 0x15:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x14) << 0x28);
  case 0x14:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x13) << 0x20);
  case 0x13:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 0x12) * 0x1000000;
  case 0x12:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 0x11) * 0x10000;
  case 0x11:
    uVar4 = uVar4 + (ulong)(byte)param_1[2] * 0x100;
  case 0x10:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
  case 0xf:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30);
  case 0xe:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xd) << 0x28);
  case 0xd:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xc) << 0x20);
  case 0xc:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 0xb) * 0x1000000;
  case 0xb:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 10) * 0x10000;
  case 10:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 9) * 0x100;
  case 9:
    uVar2 = uVar2 + (byte)param_1[1];
  case 8:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 7) << 0x38);
  case 7:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30);
  case 6:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 5) << 0x28);
  case 5:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 4) << 0x20);
  case 4:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 3) * 0x1000000;
  case 3:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 2) * 0x10000;
  case 2:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 1) * 0x100;
  case 1:
    param_3 = param_3 + (byte)*param_1;
  default:
    uVar3 = param_3 - (uVar2 + uVar4) ^ uVar4 >> 0x2b;
    uVar5 = uVar2 - (uVar4 + uVar3) ^ uVar3 << 9;
    uVar2 = uVar4 - (uVar3 + uVar5) ^ uVar5 >> 8;
    uVar4 = uVar3 - (uVar5 + uVar2) ^ uVar2 >> 0x26;
    uVar3 = uVar5 - (uVar2 + uVar4) ^ uVar4 << 0x17;
    uVar2 = uVar2 - (uVar4 + uVar3) ^ uVar3 >> 5;
    uVar4 = uVar4 - (uVar3 + uVar2) ^ uVar2 >> 0x23;
    uVar3 = uVar3 - (uVar2 + uVar4) ^ uVar4 << 0x31;
    uVar2 = uVar2 - (uVar4 + uVar3) ^ uVar3 >> 0xb;
    uVar4 = uVar4 - (uVar3 + uVar2) ^ uVar2 >> 0xc;
    uVar3 = uVar3 - (uVar2 + uVar4) ^ uVar4 << 0x12;
    return uVar2 - (uVar4 + uVar3) ^ uVar3 >> 0x16;
  }
}


```

</details>

Called by: `FUN_10034c9cc` @ `0x10034c9cc` 

## Phase 3: Handshake Analysis

### Functions calling both connect() and send()

#### `FUN_1004f2c38` @ `0x1004f2c38`

Handshake indicators: MEMSET 

<details><summary>Decompiled</summary>

```c

void FUN_1004f2c38(char *param_1,undefined1 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  size_t sVar5;
  undefined8 *****pppppuVar6;
  undefined8 *puVar7;
  char *pcVar8;
  addrinfo *paVar9;
  ulong uVar10;
  undefined8 ****local_298;
  size_t local_290;
  undefined8 uStack_288;
  int local_27c;
  addrinfo *local_278;
  undefined8 local_270;
  undefined4 uStack_268;
  undefined1 uStack_264;
  undefined1 uStack_263;
  undefined2 uStack_262;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined1 uStack_25b;
  undefined2 uStack_25a;
  undefined4 uStack_258;
  undefined2 uStack_254;
  undefined2 uStack_252;
  undefined6 local_250;
  undefined2 uStack_24a;
  undefined6 uStack_248;
  undefined2 uStack_242;
  undefined1 local_168;
  char acStack_e8 [128];
  char acStack_68 [16];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_1[0x17] < '\0') && (0x7f < *(ulong *)(param_1 + 8))) {
    pFVar4 = *(FILE **)PTR____stderrp_101444220;
    pcVar8 = "ERROR: url size limit exceeded: %s\n";
  }
  else if ((*(char *)(param_3 + 0x17) < '\0') && (199 < *(ulong *)(param_3 + 8))) {
    pFVar4 = *(FILE **)PTR____stderrp_101444220;
    pcVar8 = "ERROR: origin size limit exceeded: %s\n";
  }
  else {
    pcVar8 = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      pcVar8 = param_1;
    }
    iVar2 = _sscanf(pcVar8,"ws://%[^:/]:%d/%s");
    if (iVar2 != 3) {
      pcVar8 = *(char **)param_1;
      if (-1 < param_1[0x17]) {
        pcVar8 = param_1;
      }
      iVar2 = _sscanf(pcVar8,"ws://%[^:/]/%s");
      if (iVar2 == 2) {
        local_27c = 0x50;
      }
      else {
        pcVar8 = *(char **)param_1;
        if (-1 < param_1[0x17]) {
          pcVar8 = param_1;
        }
        iVar2 = _sscanf(pcVar8,"ws://%[^:/]:%d");
        if (iVar2 != 2) {
          pcVar8 = *(char **)param_1;
          if (-1 < param_1[0x17]) {
            pcVar8 = param_1;
          }
          iVar2 = _sscanf(pcVar8,"ws://%[^:/]");
          if (iVar2 != 1) {
            pFVar4 = *(FILE **)PTR____stderrp_101444220;
            pcVar8 = "ERROR: Could not parse WebSocket url: %s\n";
            goto LAB_1004f2f88;
          }
          local_27c = 0x50;
        }
        local_168 = 0;
      }
    }
    puVar1 = PTR____stderrp_101444220;
    _fprintf(*(FILE **)PTR____stderrp_101444220,
             "easywsclient: connecting: host=%s port=%d path=/%s\n");
    sVar5 = _strlen(acStack_e8);
    if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_10051fb8c();
    }
    if (sVar5 < 0x17) {
      pppppuVar6 = &local_298;
      uStack_288 = CONCAT17((char)sVar5,(undefined7)uStack_288);
      if (sVar5 != 0) goto LAB_1004f2e14;
    }
    else {
      uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
      pppppuVar6 = operator_new(uVar10);
      uStack_288 = uVar10 | 0x8000000000000000;
      local_298 = pppppuVar6;
      local_290 = sVar5;
LAB_1004f2e14:
      _memcpy(pppppuVar6,acStack_e8,sVar5);
    }
    *(undefined1 *)((long)pppppuVar6 + sVar5) = 0;
    uStack_264 = 0;
    uStack_263 = 0;
    uStack_262 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_252 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_25b = 0;
    uStack_25a = 0;
    uStack_248 = 0;
    uStack_242 = 0;
    local_250 = 0;
    uStack_24a = 0;
    uStack_268 = 1;
    _snprintf(acStack_68,0x10,"%d");
    pppppuVar6 = (undefined8 *****)local_298;
    if (-1 < (long)uStack_288) {
      pppppuVar6 = &local_298;
    }
    iVar2 = FUN_1004f2b90(pppppuVar6,acStack_68,&local_270,&local_278);
    if (iVar2 == 0) {
      paVar9 = local_278;
      if (local_278 == (addrinfo *)0x0) {
        local_278 = (addrinfo *)0x0;
        iVar2 = -1;
      }
      else {
        do {
          iVar2 = _socket(paVar9->ai_family,paVar9->ai_socktype,paVar9->ai_protocol);
          if (iVar2 != -1) {
            iVar3 = _connect(iVar2,paVar9->ai_addr,paVar9->ai_addrlen);
            if (iVar3 != -1) goto LAB_1004f2efc;
            _close(iVar2);
          }
          paVar9 = paVar9->ai_next;
        } while (paVar9 != (addrinfo *)0x0);
        iVar2 = -1;
      }
LAB_1004f2efc:
      _freeaddrinfo(local_278);
    }
    else {
      pFVar4 = *(FILE **)puVar1;
      _gai_strerror(iVar2);
      _fprintf(pFVar4,"getaddrinfo: %s\n");
      iVar2 = 1;
    }
    if ((long)uStack_288 < 0) {
      operator_delete(local_298);
    }
    if (iVar2 != -1) {
      _snprintf((char *)&local_270,0x100,"GET /%s HTTP/1.1\r\n");
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      if (local_27c == 0x50) {
        pcVar8 = "Host: %s\r\n";
      }
      else {
        pcVar8 = "Host: %s:%d\r\n";
      }
      _snprintf((char *)&local_270,0x100,pcVar8);
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      uStack_268 = 0x62657720;
      uStack_264 = 0x73;
      local_270._0_1_ = 'U';
      local_270._1_1_ = 'p';
      local_270._2_1_ = 'g';
      local_270._3_1_ = 'r';
      local_270._4_1_ = 'a';
      local_270._5_1_ = 'd';
      local_270._6_1_ = 'e';
      local_270._7_1_ = ':';
      uStack_263 = 0x6f;
      uStack_262 = 0x6b63;
      uStack_260 = 0xa0d7465;
      uStack_25c = 0;
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      uStack_268 = 0x203a6e6f;
      uStack_264 = 0x55;
      uStack_263 = 0x70;
      local_270._0_1_ = 'C';
      local_270._1_1_ = 'o';
      local_270._2_1_ = 'n';
      local_270._3_1_ = 'n';
      local_270._4_1_ = 'e';
      local_270._5_1_ = 'c';
      local_270._6_1_ = 't';
      local_270._7_1_ = 'i';
      uStack_262 = 0x7267;
      uStack_260 = 0xd656461;
      uStack_25c = 10;
      uStack_25b = 0;
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      if (*(char *)(param_3 + 0x17) < '\0') {
        if (*(long *)(param_3 + 8) != 0) goto LAB_1004f3050;
      }
      else
// ...truncated...
```

</details>

## Phase 4: Message Type Dispatch

### Large switch tables near connection code

#### `FUN_100102ec8` @ `0x100102ec8` (15 cases)

Cases: 0x19, 0x1a, 0x1b, 0x20, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27

<details><summary>Decompiled</summary>

```c

void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

#### `FUN_100110914` @ `0x100110914` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100110914(double *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    FUN_100112734(param_2,0);
    uVar4 = FUN_1001127fc(param_2);
    return uVar4;
  case 1:
    FUN_100112734(param_2,1);
    uVar4 = 0;
    break;
  case 2:
    FUN_100112734(param_2,2);
    uVar4 = 1;
    break;
  case 3:
    uVar4 = FUN_100112618(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar14 = (undefined8 *)*param_1;
      do {
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          iVar2 = *(int *)(puVar14 + 1);
          puVar13 = (undefined8 *)*puVar14;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar14 + 0xf);
          puVar13 = puVar14;
        }
        FUN_100112734(param_2,5);
        uVar4 = FUN_100112b14(param_2,puVar13,iVar2);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100110914(puVar14 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar14 = puVar14 + 6;
      } while (puVar14 != (undefined8 *)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x7d;
    goto LAB_100110ba0;
  case 4:
    uVar4 = FUN_1001126a4(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      dVar15 = *param_1;
      do {
        uVar3 = FUN_100110914(dVar15,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        dVar15 = (double)((long)dVar15 + 0x18);
      } while (dVar15 != (double)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x5d;
LAB_100110ba0:
    *puVar6 = uVar10;
    return 1;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 1);
      param_1 = (double *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    FUN_100112734(param_2,5);
    uVar4 = FUN_100112b14(param_2,param_1,iVar2);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          if ((uVar1 >> 0xd & 1) == 0) {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar11 = *param_2;
            puVar12 = *(undefined2 **)(lVar11 + 0x18);
            if (*(undefined1 **)(lVar11 + 0x20) <= (undefined1 *)((long)puVar12 + 0x19)) {
              FUN_1000f9034(lVar11,0x19);
              puVar12 = *(undefined2 **)(lVar11 + 0x18);
            }
            *(undefined1 **)(lVar11 + 0x18) = (undefined1 *)((long)puVar12 + 0x19);
            if (ABS(dVar15) == 0.0) {
              puVar8 = puVar12;
              if ((long)dVar15 < 0) {
                puVar8 = (undefined2 *)((long)puVar12 + 1);
                *(undefined1 *)puVar12 = 0x2d;
              }
              *puVar8 = 0x2e30;
              *(undefined1 *)(puVar8 + 1) = 0x30;
              puVar6 = (undefined1 *)((long)puVar8 + 3);
            }
            else {
              puVar8 = puVar12;
              if (dVar15 < 0.0) {
                *(undefined1 *)puVar12 = 0x2d;
                dVar15 = -dVar15;
                puVar8 = (undefined2 *)((long)puVar12 + 1);
              }
              FUN_100113658(dVar15,puVar8,&uStack_64,&local_68);
              puVar6 = (undefined1 *)FUN_10011381c(puVar8,uStack_64,local_68);
            }
            lVar9 = *param_2;
            puVar6 = puVar6 + (*(long *)(lVar9 + 0x18) - (long)puVar12) + -0x19;
          }
          else {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar9 = *param_2;
            lVar11 = *(long *)(lVar9 + 0x18);
            if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 0x14U) {
              FUN_1000f9034(lVar9,0x14);
              lVar11 = *(long *)(lVar9 + 0x18);
            }
            *(long *)(lVar9 + 0x18) = lVar11 + 0x14;
            lVar5 = FUN_100113028(dVar15,lVar11);
            lVar9 = *param_2;
            puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -0x14);
          }
        }
        else {
          dVar15 = *param_1;
          FUN_100112734(param_2,6);
          lVar11 = *param_2;
          puVar6 = *(undefined1 **)(lVar11 + 0x18);
          if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0x15) {
            FUN_1000f9034(lVar11,0x15);
            puVar6 = *(undefined1 **)(lVar11 + 0x18);
          }
          *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0x15;
          puVar7 = puVar6;
          if ((long)dVar15 < 0) {
            puVar7 = puVar6 + 1;
            *puVar6 = 0x2d;
            dVar15 = (double)-(long)dVar15;
          }
          lVar11 = FUN_100113028(dVar15,puVar7);
          lVar9 = *param_2;
          puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0x15);
        }
      }
      else {
        iVar2 = *(int *)param_1;
        FUN_100112734(param_2,6);
        lVar9 = *param_2;
        lVar11 = *(long *)(lVar9 + 0x18);
        if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 10U) {
          FUN_1000f9034(lVar9,10);
          lVar11 = *(long *)(lVar9 + 0x18);
        }
        *(long *)(lVar9 + 0x18) = lVar11 + 10;
        lVar5 = FUN_100112d5c(iVar2,lVar11);
        lVar9 = *param_2;
        puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -10);
      }
    }
    else {
      iVar2 = *(int *)param_1;
      FUN_100112734(param_2,6);
      lVar11 = *param_2;
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
      if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0xb) {
        FUN_1000f9034(lVar11,0xb);
        puVar6 = *(undefined1 **)(lVar11 + 0x18);
      }
      *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0xb;
      puVar7 = puVar6;
      if (iVar2 < 0) {
        puVar7 = puVar6 + 1;
        *puVar6 = 0x2d;
        iVar2 = -iVar2;
      }
      lVar11 = FUN_100112d5c(iVar2,puVar7);
      lVar9 = *param_2;
      puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0xb);
    }
    *(undefined1 **)(lVar9 + 0x18) = puVar6;
    return 1;
  }
  uVar4 = FUN_1001128e8(param_2,uVar4);
  return uVar4;
}


```

</details>

#### `FUN_100111cd0` @ `0x100111cd0` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100111cd0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    return 1;
  case 1:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x101;
    break;
  case 2:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x102;
    break;
  case 3:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 3;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = (undefined8 *)*param_1;
      do {
        if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
          iVar2 = *(int *)(puVar6 + 1);
          puVar5 = (undefined8 *)*puVar6;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar6 + 0xf);
          puVar5 = puVar6;
        }
        uVar4 = FUN_1000f8dcc(param_2,puVar5,iVar2,*(uint *)(puVar6 + 2) >> 0x15 & 1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100111cd0(puVar6 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar6 = puVar6 + 6;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (puVar6 != (undefined8 *)(*param_1 + uVar3 * 0x30));
    }
    uVar4 = FUN_1000f91e8(param_2,uVar3);
    return uVar4;
  case 4:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 4;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = *param_1;
      do {
        uVar3 = FUN_100111cd0(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar9 = lVar9 + 0x18;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (lVar9 != *param_1 + uVar3 * 0x18);
    }
    uVar4 = FUN_1000f9260(param_2,uVar3);
    return uVar4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = (int)param_1[1];
      param_1 = (long *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    uVar4 = FUN_1000f8dcc(param_2,param_1,iVar2,uVar1 >> 0x15 & 1);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = FUN_1000f93f4(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = FUN_1000f945c(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = FUN_1000f92d8(param_2,*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      lVar9 = *param_1;
      plVar7 = *(long **)(param_2 + 0x40);
      if (*(long **)(param_2 + 0x48) <= plVar7 + 3) {
        FUN_1000f8b34(param_2 + 0x28,1);
        plVar7 = *(long **)(param_2 + 0x40);
      }
      *(long **)(param_2 + 0x40) = plVar7 + 3;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0x4206;
      *plVar7 = lVar9;
      return 1;
    }
    uVar4 = FUN_1000f9370(param_2,*param_1);
    return uVar4;
  }
  *(undefined4 *)(puVar6 + 2) = uVar8;
  return 1;
}


```

</details>

#### `FUN_100113a4c` @ `0x100113a4c` (10 cases)

Cases: 0, 2, 3, 4, 5, 6, 7, 8, 1, 9

<details><summary>Decompiled</summary>

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_100113a4c(long *param_1,ulong *param_2,ulong param_3,long param_4,int *param_5,int *param_6
                  )

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  
  uVar7 = (ulong)(uint)-(int)param_2[1];
  uVar5 = 1L << (uVar7 & 0x3f);
  uVar8 = *param_2;
  lVar3 = *param_1;
  uVar4 = uVar8 - lVar3;
  uVar13 = uVar8 >> (uVar7 & 0x3f);
  uVar6 = uVar5 - 1 & uVar8;
  uVar12 = (uint)uVar13;
  uVar10 = 8;
  if (99999999 < uVar12) {
    uVar10 = 9;
  }
  uVar2 = 7;
  if (9999999 < uVar12) {
    uVar2 = uVar10;
  }
  uVar10 = 6;
  if (999999 < uVar12) {
    uVar10 = uVar2;
  }
  uVar2 = 5;
  if (99999 < uVar12) {
    uVar2 = uVar10;
  }
  uVar10 = 4;
  if (0x270 < ((uint)(uVar13 >> 4) & 0xfffffff)) {
    uVar10 = uVar2;
  }
  uVar2 = 3;
  if (999 < uVar12) {
    uVar2 = uVar10;
  }
  uVar10 = 2;
  if (99 < uVar12) {
    uVar10 = uVar2;
  }
  uVar2 = 1;
  if (9 < uVar12) {
    uVar2 = uVar10;
  }
  *param_5 = 0;
  do {
    uVar12 = (uint)uVar13;
    uVar14 = 0;
    uVar10 = uVar12;
    switch(uVar2) {
    case 0:
      iVar15 = -uVar2;
      do {
        uVar13 = param_3;
        uVar8 = uVar6 * 10 >> (uVar7 & 0x3f);
        iVar1 = *param_5;
        if ((uVar8 & 0xff) != 0 || iVar1 != 0) {
          *param_5 = iVar1 + 1;
          *(char *)(param_4 + iVar1) = (char)uVar8 + '0';
        }
        param_3 = uVar13 * 10;
        uVar6 = uVar6 * 10 & uVar5 - 1;
        iVar15 = iVar15 + 1;
      } while (param_3 < uVar6 || param_3 - uVar6 == 0);
      *param_6 = *param_6 - iVar15;
      uVar10 = *(uint *)(&UNK_10114d388 + (long)iVar15 * 4);
      uVar7 = uVar4 * uVar10;
      if (uVar7 <= uVar6 || param_3 - uVar6 < uVar5) {
        return;
      }
      iVar15 = *param_5;
      lVar3 = -uVar6;
      do {
        uVar6 = uVar5 + uVar6;
        if ((uVar7 <= uVar6) && (uVar7 + lVar3 <= uVar6 - uVar4 * uVar10)) {
          return;
        }
        *(char *)(param_4 + (long)iVar15 + -1) = *(char *)(param_4 + (long)iVar15 + -1) + -1;
        if (uVar7 <= uVar6) {
          return;
        }
        uVar8 = (uVar13 * 10 - uVar5) + lVar3;
        lVar3 = lVar3 - uVar5;
      } while (uVar5 <= uVar8);
      return;
    case 2:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 10);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 10) * -10);
      break;
    case 3:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 100);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 100) * -100);
      break;
    case 4:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 1000);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 1000) * -1000);
      break;
    case 5:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 10000);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 10000) * -10000);
      break;
    case 6:
      uVar10 = uVar12 / 100000;
      uVar13 = (ulong)(uVar12 % 100000);
      break;
    case 7:
      uVar10 = uVar12 / 1000000;
      uVar13 = (ulong)(uVar12 % 1000000);
      break;
    case 8:
      uVar10 = uVar12 / 10000000;
      uVar14 = (ulong)(uVar12 % 10000000);
    case 1:
      uVar13 = uVar14;
      break;
    case 9:
      uVar10 = uVar12 / 100000000;
      uVar13 = (ulong)(uVar12 % 100000000);
      break;
    default:
      goto switchD_100113b6c_default;
    }
    if (uVar10 == 0) {
switchD_100113b6c_default:
      iVar15 = *param_5;
      if (iVar15 != 0) {
        cVar11 = '\0';
        goto LAB_100113bf8;
      }
    }
    else {
      cVar11 = (char)uVar10;
      iVar15 = *param_5;
LAB_100113bf8:
      *param_5 = iVar15 + 1;
      *(char *)(param_4 + iVar15) = cVar11 + '0';
    }
    uVar2 = uVar2 - 1;
    lVar16 = (uVar13 & 0xffffffff) << (uVar7 & 0x3f);
    uVar14 = lVar16 + uVar6;
    if (uVar14 <= param_3) {
      *param_6 = *param_6 + uVar2;
      if ((uVar14 < uVar4) &&
         (uVar13 = (ulong)*(uint *)(&UNK_10114d388 + (ulong)uVar2 * 4) << (uVar7 & 0x3f),
         uVar13 <= param_3 - uVar14)) {
        iVar15 = *param_5;
        lVar9 = -lVar16;
        uVar5 = uVar6 + uVar13 + lVar16;
        do {
          if ((uVar4 <= uVar5) && ((uVar4 - uVar6) + lVar9 <= (lVar3 - uVar8) + uVar5)) {
            return;
          }
          *(char *)(param_4 + (long)iVar15 + -1) = *(char *)(param_4 + (long)iVar15 + -1) + -1;
          if (uVar4 <= uVar5) {
            return;
          }
          uVar7 = ((param_3 - uVar6) - uVar13) + lVar9;
          lVar9 = lVar9 - uVar13;
          uVar5 = uVar5 + uVar13;
        } while (uVar13 <= uVar7);
      }
      return;
    }
  } while( true );
}


```

</details>

#### `FUN_100102ec8` @ `0x100102ec8` (15 cases)

Cases: 0x19, 0x1a, 0x1b, 0x20, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27

<details><summary>Decompiled</summary>

```c

void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

#### `FUN_100110914` @ `0x100110914` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100110914(double *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    FUN_100112734(param_2,0);
    uVar4 = FUN_1001127fc(param_2);
    return uVar4;
  case 1:
    FUN_100112734(param_2,1);
    uVar4 = 0;
    break;
  case 2:
    FUN_100112734(param_2,2);
    uVar4 = 1;
    break;
  case 3:
    uVar4 = FUN_100112618(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar14 = (undefined8 *)*param_1;
      do {
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          iVar2 = *(int *)(puVar14 + 1);
          puVar13 = (undefined8 *)*puVar14;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar14 + 0xf);
          puVar13 = puVar14;
        }
        FUN_100112734(param_2,5);
        uVar4 = FUN_100112b14(param_2,puVar13,iVar2);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100110914(puVar14 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar14 = puVar14 + 6;
      } while (puVar14 != (undefined8 *)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x7d;
    goto LAB_100110ba0;
  case 4:
    uVar4 = FUN_1001126a4(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      dVar15 = *param_1;
      do {
        uVar3 = FUN_100110914(dVar15,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        dVar15 = (double)((long)dVar15 + 0x18);
      } while (dVar15 != (double)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x5d;
LAB_100110ba0:
    *puVar6 = uVar10;
    return 1;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 1);
      param_1 = (double *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    FUN_100112734(param_2,5);
    uVar4 = FUN_100112b14(param_2,param_1,iVar2);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          if ((uVar1 >> 0xd & 1) == 0) {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar11 = *param_2;
            puVar12 = *(undefined2 **)(lVar11 + 0x18);
            if (*(undefined1 **)(lVar11 + 0x20) <= (undefined1 *)((long)puVar12 + 0x19)) {
              FUN_1000f9034(lVar11,0x19);
              puVar12 = *(undefined2 **)(lVar11 + 0x18);
            }
            *(undefined1 **)(lVar11 + 0x18) = (undefined1 *)((long)puVar12 + 0x19);
            if (ABS(dVar15) == 0.0) {
              puVar8 = puVar12;
              if ((long)dVar15 < 0) {
                puVar8 = (undefined2 *)((long)puVar12 + 1);
                *(undefined1 *)puVar12 = 0x2d;
              }
              *puVar8 = 0x2e30;
              *(undefined1 *)(puVar8 + 1) = 0x30;
              puVar6 = (undefined1 *)((long)puVar8 + 3);
            }
            else {
              puVar8 = puVar12;
              if (dVar15 < 0.0) {
                *(undefined1 *)puVar12 = 0x2d;
                dVar15 = -dVar15;
                puVar8 = (undefined2 *)((long)puVar12 + 1);
              }
              FUN_100113658(dVar15,puVar8,&uStack_64,&local_68);
              puVar6 = (undefined1 *)FUN_10011381c(puVar8,uStack_64,local_68);
            }
            lVar9 = *param_2;
            puVar6 = puVar6 + (*(long *)(lVar9 + 0x18) - (long)puVar12) + -0x19;
          }
          else {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar9 = *param_2;
            lVar11 = *(long *)(lVar9 + 0x18);
            if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 0x14U) {
              FUN_1000f9034(lVar9,0x14);
              lVar11 = *(long *)(lVar9 + 0x18);
            }
            *(long *)(lVar9 + 0x18) = lVar11 + 0x14;
            lVar5 = FUN_100113028(dVar15,lVar11);
            lVar9 = *param_2;
            puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -0x14);
          }
        }
        else {
          dVar15 = *param_1;
          FUN_100112734(param_2,6);
          lVar11 = *param_2;
          puVar6 = *(undefined1 **)(lVar11 + 0x18);
          if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0x15) {
            FUN_1000f9034(lVar11,0x15);
            puVar6 = *(undefined1 **)(lVar11 + 0x18);
          }
          *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0x15;
          puVar7 = puVar6;
          if ((long)dVar15 < 0) {
            puVar7 = puVar6 + 1;
            *puVar6 = 0x2d;
            dVar15 = (double)-(long)dVar15;
          }
          lVar11 = FUN_100113028(dVar15,puVar7);
          lVar9 = *param_2;
          puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0x15);
        }
      }
      else {
        iVar2 = *(int *)param_1;
        FUN_100112734(param_2,6);
        lVar9 = *param_2;
        lVar11 = *(long *)(lVar9 + 0x18);
        if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 10U) {
          FUN_1000f9034(lVar9,10);
          lVar11 = *(long *)(lVar9 + 0x18);
        }
        *(long *)(lVar9 + 0x18) = lVar11 + 10;
        lVar5 = FUN_100112d5c(iVar2,lVar11);
        lVar9 = *param_2;
        puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -10);
      }
    }
    else {
      iVar2 = *(int *)param_1;
      FUN_100112734(param_2,6);
      lVar11 = *param_2;
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
      if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0xb) {
        FUN_1000f9034(lVar11,0xb);
        puVar6 = *(undefined1 **)(lVar11 + 0x18);
      }
      *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0xb;
      puVar7 = puVar6;
      if (iVar2 < 0) {
        puVar7 = puVar6 + 1;
        *puVar6 = 0x2d;
        iVar2 = -iVar2;
      }
      lVar11 = FUN_100112d5c(iVar2,puVar7);
      lVar9 = *param_2;
      puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0xb);
    }
    *(undefined1 **)(lVar9 + 0x18) = puVar6;
    return 1;
  }
  uVar4 = FUN_1001128e8(param_2,uVar4);
  return uVar4;
}


```

</details>

#### `FUN_100111cd0` @ `0x100111cd0` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100111cd0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    return 1;
  case 1:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x101;
    break;
  case 2:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x102;
    break;
  case 3:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 3;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = (undefined8 *)*param_1;
      do {
        if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
          iVar2 = *(int *)(puVar6 + 1);
          puVar5 = (undefined8 *)*puVar6;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar6 + 0xf);
          puVar5 = puVar6;
        }
        uVar4 = FUN_1000f8dcc(param_2,puVar5,iVar2,*(uint *)(puVar6 + 2) >> 0x15 & 1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100111cd0(puVar6 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar6 = puVar6 + 6;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (puVar6 != (undefined8 *)(*param_1 + uVar3 * 0x30));
    }
    uVar4 = FUN_1000f91e8(param_2,uVar3);
    return uVar4;
  case 4:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 4;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = *param_1;
      do {
        uVar3 = FUN_100111cd0(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar9 = lVar9 + 0x18;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (lVar9 != *param_1 + uVar3 * 0x18);
    }
    uVar4 = FUN_1000f9260(param_2,uVar3);
    return uVar4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = (int)param_1[1];
      param_1 = (long *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    uVar4 = FUN_1000f8dcc(param_2,param_1,iVar2,uVar1 >> 0x15 & 1);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = FUN_1000f93f4(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = FUN_1000f945c(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = FUN_1000f92d8(param_2,*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      lVar9 = *param_1;
      plVar7 = *(long **)(param_2 + 0x40);
      if (*(long **)(param_2 + 0x48) <= plVar7 + 3) {
        FUN_1000f8b34(param_2 + 0x28,1);
        plVar7 = *(long **)(param_2 + 0x40);
      }
      *(long **)(param_2 + 0x40) = plVar7 + 3;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0x4206;
      *plVar7 = lVar9;
      return 1;
    }
    uVar4 = FUN_1000f9370(param_2,*param_1);
    return uVar4;
  }
  *(undefined4 *)(puVar6 + 2) = uVar8;
  return 1;
}


```

</details>

#### `FUN_100102ec8` @ `0x100102ec8` (15 cases)

Cases: 0x19, 0x1a, 0x1b, 0x20, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27

<details><summary>Decompiled</summary>

```c

void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

#### `FUN_100110914` @ `0x100110914` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100110914(double *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    FUN_100112734(param_2,0);
    uVar4 = FUN_1001127fc(param_2);
    return uVar4;
  case 1:
    FUN_100112734(param_2,1);
    uVar4 = 0;
    break;
  case 2:
    FUN_100112734(param_2,2);
    uVar4 = 1;
    break;
  case 3:
    uVar4 = FUN_100112618(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar14 = (undefined8 *)*param_1;
      do {
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          iVar2 = *(int *)(puVar14 + 1);
          puVar13 = (undefined8 *)*puVar14;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar14 + 0xf);
          puVar13 = puVar14;
        }
        FUN_100112734(param_2,5);
        uVar4 = FUN_100112b14(param_2,puVar13,iVar2);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100110914(puVar14 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar14 = puVar14 + 6;
      } while (puVar14 != (undefined8 *)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x7d;
    goto LAB_100110ba0;
  case 4:
    uVar4 = FUN_1001126a4(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      dVar15 = *param_1;
      do {
        uVar3 = FUN_100110914(dVar15,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        dVar15 = (double)((long)dVar15 + 0x18);
      } while (dVar15 != (double)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x5d;
LAB_100110ba0:
    *puVar6 = uVar10;
    return 1;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 1);
      param_1 = (double *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    FUN_100112734(param_2,5);
    uVar4 = FUN_100112b14(param_2,param_1,iVar2);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          if ((uVar1 >> 0xd & 1) == 0) {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar11 = *param_2;
            puVar12 = *(undefined2 **)(lVar11 + 0x18);
            if (*(undefined1 **)(lVar11 + 0x20) <= (undefined1 *)((long)puVar12 + 0x19)) {
              FUN_1000f9034(lVar11,0x19);
              puVar12 = *(undefined2 **)(lVar11 + 0x18);
            }
            *(undefined1 **)(lVar11 + 0x18) = (undefined1 *)((long)puVar12 + 0x19);
            if (ABS(dVar15) == 0.0) {
              puVar8 = puVar12;
              if ((long)dVar15 < 0) {
                puVar8 = (undefined2 *)((long)puVar12 + 1);
                *(undefined1 *)puVar12 = 0x2d;
              }
              *puVar8 = 0x2e30;
              *(undefined1 *)(puVar8 + 1) = 0x30;
              puVar6 = (undefined1 *)((long)puVar8 + 3);
            }
            else {
              puVar8 = puVar12;
              if (dVar15 < 0.0) {
                *(undefined1 *)puVar12 = 0x2d;
                dVar15 = -dVar15;
                puVar8 = (undefined2 *)((long)puVar12 + 1);
              }
              FUN_100113658(dVar15,puVar8,&uStack_64,&local_68);
              puVar6 = (undefined1 *)FUN_10011381c(puVar8,uStack_64,local_68);
            }
            lVar9 = *param_2;
            puVar6 = puVar6 + (*(long *)(lVar9 + 0x18) - (long)puVar12) + -0x19;
          }
          else {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar9 = *param_2;
            lVar11 = *(long *)(lVar9 + 0x18);
            if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 0x14U) {
              FUN_1000f9034(lVar9,0x14);
              lVar11 = *(long *)(lVar9 + 0x18);
            }
            *(long *)(lVar9 + 0x18) = lVar11 + 0x14;
            lVar5 = FUN_100113028(dVar15,lVar11);
            lVar9 = *param_2;
            puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -0x14);
          }
        }
        else {
          dVar15 = *param_1;
          FUN_100112734(param_2,6);
          lVar11 = *param_2;
          puVar6 = *(undefined1 **)(lVar11 + 0x18);
          if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0x15) {
            FUN_1000f9034(lVar11,0x15);
            puVar6 = *(undefined1 **)(lVar11 + 0x18);
          }
          *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0x15;
          puVar7 = puVar6;
          if ((long)dVar15 < 0) {
            puVar7 = puVar6 + 1;
            *puVar6 = 0x2d;
            dVar15 = (double)-(long)dVar15;
          }
          lVar11 = FUN_100113028(dVar15,puVar7);
          lVar9 = *param_2;
          puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0x15);
        }
      }
      else {
        iVar2 = *(int *)param_1;
        FUN_100112734(param_2,6);
        lVar9 = *param_2;
        lVar11 = *(long *)(lVar9 + 0x18);
        if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 10U) {
          FUN_1000f9034(lVar9,10);
          lVar11 = *(long *)(lVar9 + 0x18);
        }
        *(long *)(lVar9 + 0x18) = lVar11 + 10;
        lVar5 = FUN_100112d5c(iVar2,lVar11);
        lVar9 = *param_2;
        puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -10);
      }
    }
    else {
      iVar2 = *(int *)param_1;
      FUN_100112734(param_2,6);
      lVar11 = *param_2;
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
      if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0xb) {
        FUN_1000f9034(lVar11,0xb);
        puVar6 = *(undefined1 **)(lVar11 + 0x18);
      }
      *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0xb;
      puVar7 = puVar6;
      if (iVar2 < 0) {
        puVar7 = puVar6 + 1;
        *puVar6 = 0x2d;
        iVar2 = -iVar2;
      }
      lVar11 = FUN_100112d5c(iVar2,puVar7);
      lVar9 = *param_2;
      puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0xb);
    }
    *(undefined1 **)(lVar9 + 0x18) = puVar6;
    return 1;
  }
  uVar4 = FUN_1001128e8(param_2,uVar4);
  return uVar4;
}


```

</details>

#### `FUN_100111cd0` @ `0x100111cd0` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100111cd0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    return 1;
  case 1:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x101;
    break;
  case 2:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x102;
    break;
  case 3:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 3;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = (undefined8 *)*param_1;
      do {
        if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
          iVar2 = *(int *)(puVar6 + 1);
          puVar5 = (undefined8 *)*puVar6;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar6 + 0xf);
          puVar5 = puVar6;
        }
        uVar4 = FUN_1000f8dcc(param_2,puVar5,iVar2,*(uint *)(puVar6 + 2) >> 0x15 & 1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100111cd0(puVar6 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar6 = puVar6 + 6;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (puVar6 != (undefined8 *)(*param_1 + uVar3 * 0x30));
    }
    uVar4 = FUN_1000f91e8(param_2,uVar3);
    return uVar4;
  case 4:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 4;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = *param_1;
      do {
        uVar3 = FUN_100111cd0(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar9 = lVar9 + 0x18;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (lVar9 != *param_1 + uVar3 * 0x18);
    }
    uVar4 = FUN_1000f9260(param_2,uVar3);
    return uVar4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = (int)param_1[1];
      param_1 = (long *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    uVar4 = FUN_1000f8dcc(param_2,param_1,iVar2,uVar1 >> 0x15 & 1);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = FUN_1000f93f4(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = FUN_1000f945c(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = FUN_1000f92d8(param_2,*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      lVar9 = *param_1;
      plVar7 = *(long **)(param_2 + 0x40);
      if (*(long **)(param_2 + 0x48) <= plVar7 + 3) {
        FUN_1000f8b34(param_2 + 0x28,1);
        plVar7 = *(long **)(param_2 + 0x40);
      }
      *(long **)(param_2 + 0x40) = plVar7 + 3;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0x4206;
      *plVar7 = lVar9;
      return 1;
    }
    uVar4 = FUN_1000f9370(param_2,*param_1);
    return uVar4;
  }
  *(undefined4 *)(puVar6 + 2) = uVar8;
  return 1;
}


```

</details>

#### `FUN_100102ec8` @ `0x100102ec8` (15 cases)

Cases: 0x19, 0x1a, 0x1b, 0x20, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27

<details><summary>Decompiled</summary>

```c

void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

#### `FUN_100110914` @ `0x100110914` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100110914(double *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    FUN_100112734(param_2,0);
    uVar4 = FUN_1001127fc(param_2);
    return uVar4;
  case 1:
    FUN_100112734(param_2,1);
    uVar4 = 0;
    break;
  case 2:
    FUN_100112734(param_2,2);
    uVar4 = 1;
    break;
  case 3:
    uVar4 = FUN_100112618(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar14 = (undefined8 *)*param_1;
      do {
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          iVar2 = *(int *)(puVar14 + 1);
          puVar13 = (undefined8 *)*puVar14;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar14 + 0xf);
          puVar13 = puVar14;
        }
        FUN_100112734(param_2,5);
        uVar4 = FUN_100112b14(param_2,puVar13,iVar2);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100110914(puVar14 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar14 = puVar14 + 6;
      } while (puVar14 != (undefined8 *)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x7d;
    goto LAB_100110ba0;
  case 4:
    uVar4 = FUN_1001126a4(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      dVar15 = *param_1;
      do {
        uVar3 = FUN_100110914(dVar15,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        dVar15 = (double)((long)dVar15 + 0x18);
      } while (dVar15 != (double)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x5d;
LAB_100110ba0:
    *puVar6 = uVar10;
    return 1;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 1);
      param_1 = (double *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    FUN_100112734(param_2,5);
    uVar4 = FUN_100112b14(param_2,param_1,iVar2);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          if ((uVar1 >> 0xd & 1) == 0) {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar11 = *param_2;
            puVar12 = *(undefined2 **)(lVar11 + 0x18);
            if (*(undefined1 **)(lVar11 + 0x20) <= (undefined1 *)((long)puVar12 + 0x19)) {
              FUN_1000f9034(lVar11,0x19);
              puVar12 = *(undefined2 **)(lVar11 + 0x18);
            }
            *(undefined1 **)(lVar11 + 0x18) = (undefined1 *)((long)puVar12 + 0x19);
            if (ABS(dVar15) == 0.0) {
              puVar8 = puVar12;
              if ((long)dVar15 < 0) {
                puVar8 = (undefined2 *)((long)puVar12 + 1);
                *(undefined1 *)puVar12 = 0x2d;
              }
              *puVar8 = 0x2e30;
              *(undefined1 *)(puVar8 + 1) = 0x30;
              puVar6 = (undefined1 *)((long)puVar8 + 3);
            }
            else {
              puVar8 = puVar12;
              if (dVar15 < 0.0) {
                *(undefined1 *)puVar12 = 0x2d;
                dVar15 = -dVar15;
                puVar8 = (undefined2 *)((long)puVar12 + 1);
              }
              FUN_100113658(dVar15,puVar8,&uStack_64,&local_68);
              puVar6 = (undefined1 *)FUN_10011381c(puVar8,uStack_64,local_68);
            }
            lVar9 = *param_2;
            puVar6 = puVar6 + (*(long *)(lVar9 + 0x18) - (long)puVar12) + -0x19;
          }
          else {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar9 = *param_2;
            lVar11 = *(long *)(lVar9 + 0x18);
            if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 0x14U) {
              FUN_1000f9034(lVar9,0x14);
              lVar11 = *(long *)(lVar9 + 0x18);
            }
            *(long *)(lVar9 + 0x18) = lVar11 + 0x14;
            lVar5 = FUN_100113028(dVar15,lVar11);
            lVar9 = *param_2;
            puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -0x14);
          }
        }
        else {
          dVar15 = *param_1;
          FUN_100112734(param_2,6);
          lVar11 = *param_2;
          puVar6 = *(undefined1 **)(lVar11 + 0x18);
          if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0x15) {
            FUN_1000f9034(lVar11,0x15);
            puVar6 = *(undefined1 **)(lVar11 + 0x18);
          }
          *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0x15;
          puVar7 = puVar6;
          if ((long)dVar15 < 0) {
            puVar7 = puVar6 + 1;
            *puVar6 = 0x2d;
            dVar15 = (double)-(long)dVar15;
          }
          lVar11 = FUN_100113028(dVar15,puVar7);
          lVar9 = *param_2;
          puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0x15);
        }
      }
      else {
        iVar2 = *(int *)param_1;
        FUN_100112734(param_2,6);
        lVar9 = *param_2;
        lVar11 = *(long *)(lVar9 + 0x18);
        if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 10U) {
          FUN_1000f9034(lVar9,10);
          lVar11 = *(long *)(lVar9 + 0x18);
        }
        *(long *)(lVar9 + 0x18) = lVar11 + 10;
        lVar5 = FUN_100112d5c(iVar2,lVar11);
        lVar9 = *param_2;
        puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -10);
      }
    }
    else {
      iVar2 = *(int *)param_1;
      FUN_100112734(param_2,6);
      lVar11 = *param_2;
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
      if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0xb) {
        FUN_1000f9034(lVar11,0xb);
        puVar6 = *(undefined1 **)(lVar11 + 0x18);
      }
      *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0xb;
      puVar7 = puVar6;
      if (iVar2 < 0) {
        puVar7 = puVar6 + 1;
        *puVar6 = 0x2d;
        iVar2 = -iVar2;
      }
      lVar11 = FUN_100112d5c(iVar2,puVar7);
      lVar9 = *param_2;
      puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0xb);
    }
    *(undefined1 **)(lVar9 + 0x18) = puVar6;
    return 1;
  }
  uVar4 = FUN_1001128e8(param_2,uVar4);
  return uVar4;
}


```

</details>

#### `FUN_100111cd0` @ `0x100111cd0` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100111cd0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    return 1;
  case 1:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x101;
    break;
  case 2:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x102;
    break;
  case 3:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 3;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = (undefined8 *)*param_1;
      do {
        if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
          iVar2 = *(int *)(puVar6 + 1);
          puVar5 = (undefined8 *)*puVar6;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar6 + 0xf);
          puVar5 = puVar6;
        }
        uVar4 = FUN_1000f8dcc(param_2,puVar5,iVar2,*(uint *)(puVar6 + 2) >> 0x15 & 1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100111cd0(puVar6 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar6 = puVar6 + 6;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (puVar6 != (undefined8 *)(*param_1 + uVar3 * 0x30));
    }
    uVar4 = FUN_1000f91e8(param_2,uVar3);
    return uVar4;
  case 4:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 4;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = *param_1;
      do {
        uVar3 = FUN_100111cd0(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar9 = lVar9 + 0x18;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (lVar9 != *param_1 + uVar3 * 0x18);
    }
    uVar4 = FUN_1000f9260(param_2,uVar3);
    return uVar4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = (int)param_1[1];
      param_1 = (long *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    uVar4 = FUN_1000f8dcc(param_2,param_1,iVar2,uVar1 >> 0x15 & 1);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = FUN_1000f93f4(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = FUN_1000f945c(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = FUN_1000f92d8(param_2,*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      lVar9 = *param_1;
      plVar7 = *(long **)(param_2 + 0x40);
      if (*(long **)(param_2 + 0x48) <= plVar7 + 3) {
        FUN_1000f8b34(param_2 + 0x28,1);
        plVar7 = *(long **)(param_2 + 0x40);
      }
      *(long **)(param_2 + 0x40) = plVar7 + 3;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0x4206;
      *plVar7 = lVar9;
      return 1;
    }
    uVar4 = FUN_1000f9370(param_2,*param_1);
    return uVar4;
  }
  *(undefined4 *)(puVar6 + 2) = uVar8;
  return 1;
}


```

</details>

#### `FUN_100102ec8` @ `0x100102ec8` (15 cases)

Cases: 0x19, 0x1a, 0x1b, 0x20, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27

<details><summary>Decompiled</summary>

```c

void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

#### `FUN_100110914` @ `0x100110914` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100110914(double *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    FUN_100112734(param_2,0);
    uVar4 = FUN_1001127fc(param_2);
    return uVar4;
  case 1:
    FUN_100112734(param_2,1);
    uVar4 = 0;
    break;
  case 2:
    FUN_100112734(param_2,2);
    uVar4 = 1;
    break;
  case 3:
    uVar4 = FUN_100112618(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar14 = (undefined8 *)*param_1;
      do {
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          iVar2 = *(int *)(puVar14 + 1);
          puVar13 = (undefined8 *)*puVar14;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar14 + 0xf);
          puVar13 = puVar14;
        }
        FUN_100112734(param_2,5);
        uVar4 = FUN_100112b14(param_2,puVar13,iVar2);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100110914(puVar14 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar14 = puVar14 + 6;
      } while (puVar14 != (undefined8 *)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x7d;
    goto LAB_100110ba0;
  case 4:
    uVar4 = FUN_1001126a4(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      dVar15 = *param_1;
      do {
        uVar3 = FUN_100110914(dVar15,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        dVar15 = (double)((long)dVar15 + 0x18);
      } while (dVar15 != (double)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x5d;
LAB_100110ba0:
    *puVar6 = uVar10;
    return 1;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 1);
      param_1 = (double *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    FUN_100112734(param_2,5);
    uVar4 = FUN_100112b14(param_2,param_1,iVar2);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          if ((uVar1 >> 0xd & 1) == 0) {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar11 = *param_2;
            puVar12 = *(undefined2 **)(lVar11 + 0x18);
            if (*(undefined1 **)(lVar11 + 0x20) <= (undefined1 *)((long)puVar12 + 0x19)) {
              FUN_1000f9034(lVar11,0x19);
              puVar12 = *(undefined2 **)(lVar11 + 0x18);
            }
            *(undefined1 **)(lVar11 + 0x18) = (undefined1 *)((long)puVar12 + 0x19);
            if (ABS(dVar15) == 0.0) {
              puVar8 = puVar12;
              if ((long)dVar15 < 0) {
                puVar8 = (undefined2 *)((long)puVar12 + 1);
                *(undefined1 *)puVar12 = 0x2d;
              }
              *puVar8 = 0x2e30;
              *(undefined1 *)(puVar8 + 1) = 0x30;
              puVar6 = (undefined1 *)((long)puVar8 + 3);
            }
            else {
              puVar8 = puVar12;
              if (dVar15 < 0.0) {
                *(undefined1 *)puVar12 = 0x2d;
                dVar15 = -dVar15;
                puVar8 = (undefined2 *)((long)puVar12 + 1);
              }
              FUN_100113658(dVar15,puVar8,&uStack_64,&local_68);
              puVar6 = (undefined1 *)FUN_10011381c(puVar8,uStack_64,local_68);
            }
            lVar9 = *param_2;
            puVar6 = puVar6 + (*(long *)(lVar9 + 0x18) - (long)puVar12) + -0x19;
          }
          else {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar9 = *param_2;
            lVar11 = *(long *)(lVar9 + 0x18);
            if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 0x14U) {
              FUN_1000f9034(lVar9,0x14);
              lVar11 = *(long *)(lVar9 + 0x18);
            }
            *(long *)(lVar9 + 0x18) = lVar11 + 0x14;
            lVar5 = FUN_100113028(dVar15,lVar11);
            lVar9 = *param_2;
            puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -0x14);
          }
        }
        else {
          dVar15 = *param_1;
          FUN_100112734(param_2,6);
          lVar11 = *param_2;
          puVar6 = *(undefined1 **)(lVar11 + 0x18);
          if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0x15) {
            FUN_1000f9034(lVar11,0x15);
            puVar6 = *(undefined1 **)(lVar11 + 0x18);
          }
          *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0x15;
          puVar7 = puVar6;
          if ((long)dVar15 < 0) {
            puVar7 = puVar6 + 1;
            *puVar6 = 0x2d;
            dVar15 = (double)-(long)dVar15;
          }
          lVar11 = FUN_100113028(dVar15,puVar7);
          lVar9 = *param_2;
          puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0x15);
        }
      }
      else {
        iVar2 = *(int *)param_1;
        FUN_100112734(param_2,6);
        lVar9 = *param_2;
        lVar11 = *(long *)(lVar9 + 0x18);
        if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 10U) {
          FUN_1000f9034(lVar9,10);
          lVar11 = *(long *)(lVar9 + 0x18);
        }
        *(long *)(lVar9 + 0x18) = lVar11 + 10;
        lVar5 = FUN_100112d5c(iVar2,lVar11);
        lVar9 = *param_2;
        puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -10);
      }
    }
    else {
      iVar2 = *(int *)param_1;
      FUN_100112734(param_2,6);
      lVar11 = *param_2;
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
      if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0xb) {
        FUN_1000f9034(lVar11,0xb);
        puVar6 = *(undefined1 **)(lVar11 + 0x18);
      }
      *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0xb;
      puVar7 = puVar6;
      if (iVar2 < 0) {
        puVar7 = puVar6 + 1;
        *puVar6 = 0x2d;
        iVar2 = -iVar2;
      }
      lVar11 = FUN_100112d5c(iVar2,puVar7);
      lVar9 = *param_2;
      puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0xb);
    }
    *(undefined1 **)(lVar9 + 0x18) = puVar6;
    return 1;
  }
  uVar4 = FUN_1001128e8(param_2,uVar4);
  return uVar4;
}


```

</details>

#### `FUN_100111cd0` @ `0x100111cd0` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

undefined8 FUN_100111cd0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    return 1;
  case 1:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x101;
    break;
  case 2:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x102;
    break;
  case 3:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 3;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = (undefined8 *)*param_1;
      do {
        if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
          iVar2 = *(int *)(puVar6 + 1);
          puVar5 = (undefined8 *)*puVar6;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar6 + 0xf);
          puVar5 = puVar6;
        }
        uVar4 = FUN_1000f8dcc(param_2,puVar5,iVar2,*(uint *)(puVar6 + 2) >> 0x15 & 1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100111cd0(puVar6 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar6 = puVar6 + 6;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (puVar6 != (undefined8 *)(*param_1 + uVar3 * 0x30));
    }
    uVar4 = FUN_1000f91e8(param_2,uVar3);
    return uVar4;
  case 4:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 4;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = *param_1;
      do {
        uVar3 = FUN_100111cd0(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar9 = lVar9 + 0x18;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (lVar9 != *param_1 + uVar3 * 0x18);
    }
    uVar4 = FUN_1000f9260(param_2,uVar3);
    return uVar4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = (int)param_1[1];
      param_1 = (long *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    uVar4 = FUN_1000f8dcc(param_2,param_1,iVar2,uVar1 >> 0x15 & 1);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = FUN_1000f93f4(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = FUN_1000f945c(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = FUN_1000f92d8(param_2,*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      lVar9 = *param_1;
      plVar7 = *(long **)(param_2 + 0x40);
      if (*(long **)(param_2 + 0x48) <= plVar7 + 3) {
        FUN_1000f8b34(param_2 + 0x28,1);
        plVar7 = *(long **)(param_2 + 0x40);
      }
      *(long **)(param_2 + 0x40) = plVar7 + 3;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0x4206;
      *plVar7 = lVar9;
      return 1;
    }
    uVar4 = FUN_1000f9370(param_2,*param_1);
    return uVar4;
  }
  *(undefined4 *)(puVar6 + 2) = uVar8;
  return 1;
}


```

</details>

#### `FUN_100259f00` @ `0x100259f00` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

void FUN_100259f00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
LAB_100259f2c:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_100259f34:
  param_1 = puVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_10025a1d4_caseD_0;
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
    FUN_10025a2d4(param_1,param_1 + 1,puVar8,param_3);
    return;
  case 4:
    FUN_10025a3c0(param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
    return;
  case 5:
    FUN_10025a48c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      FUN_10025a590(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar5;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 + 1;
    }
    puVar9 = (undefined8 *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      iVar3 = FUN_10025a2d4(param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar1 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      lVar7 = (uVar1 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_10025a48c(param_1,(long)param_1 + lVar7,puVar9,(long)puVar9 + lVar7,puVar8,param_3
                           );
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    if ((uVar5 & 1) == 0) break;
    goto LAB_10025a004;
  }
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
    if (iVar4 != 0) goto code_r0x000100259ff0;
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
  goto LAB_100259f34;
code_r0x000100259ff0:
  uVar6 = *param_1;
  *param_1 = *puVar10;
  *puVar10 = uVar6;
  iVar3 = iVar3 + 1;
LAB_10025a004:
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
    uVar5 = FUN_10025a660(param_1,puVar12,param_3);
    iVar3 = FUN_10025a660(puVar12 + 1,param_2,param_3);
    if (iVar3 != 0) goto LAB_10025a1b4;
    puVar9 = puVar12 + 1;
    if ((uVar5 & 1) != 0) goto LAB_100259f34;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_100259f00(puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_100259f2c;
  }
  FUN_100259f00(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_100259f34;
LAB_10025a1b4:
  param_2 = puVar12;
  if ((uVar5 & 1) != 0) {
switchD_10025a1d4_caseD_0:
    return;
  }
  goto LAB_100259f2c;
}


```

</details>

#### `FUN_10025a660` @ `0x10025a660` (6 cases)

Cases: 0, 1, 2, 3, 4, 5

<details><summary>Decompiled</summary>

```c

bool FUN_10025a660(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    FUN_10025a2d4(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_10025a3c0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_10025a48c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_10025a2d4(param_1,param_1 + 1,param_1 + 2,param_3);
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
            if (lVar10 == -0x10) goto LAB_10025a760;
            uVar4 = (*(code *)*param_3)(uVar8,*(undefined8 *)((long)param_1 + lVar10 + 8));
            lVar1 = lVar10 + -8;
          } while ((uVar4 & 1) != 0);
          puVar6 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_10025a760:
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


```

</details>

#### `FUN_100263288` @ `0x100263288` (5 cases)

Cases: 0, 1, 2, 3, 4

<details><summary>Decompiled</summary>

```c

void FUN_100263288(long param_1,string *param_2)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 auStack_88 [8];
  void *local_80;
  long local_78;
  code *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  if (param_2 == (string *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 0x30) != 1) {
    return;
  }
  pvVar3 = operator_new(0xbc8);
  local_78 = FUN_1002647ac();
  std::string::operator=((string *)(local_78 + 0xba8),param_2);
  FUN_1006513c0((long)pvVar3 + 0x178,param_2 + 0x18);
  *(uint *)((long)pvVar3 + 0x10c) =
       *(uint *)((long)pvVar3 + 0x10c) & 0xfffffffb | (uint)(byte)param_2[0x35] << 2;
  uVar4 = FUN_1004e0150("MENU_USERTEAM_VALUE_STATUS",0);
  thunk_FUN_1004e439c(auStack_88,uVar4);
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    if (*(int *)(param_2 + 0x2c) < 1) {
      uVar4 = FUN_1004e0150("MENU_GUILD_STATUS_NEVER_PLAYED",0);
      FUN_1006513c0((long)pvVar3 + 0x2a8,uVar4);
    }
    else {
      FUN_1000f1e20(&local_70,auStack_88,*(int *)(param_2 + 0x2c),1);
      FUN_1006513c0((long)pvVar3 + 0x2a8,&local_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
    goto switchD_10026333c_default;
  case 1:
    pcVar5 = "MENU_GUILD_AVAILABILITY_ONLINE";
    break;
  case 2:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_IN_GAME";
    break;
  case 3:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_IN_PARTY";
    break;
  case 4:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_MATCHING";
    break;
  default:
    goto switchD_10026333c_default;
  }
  uVar4 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0((long)pvVar3 + 0x2a8,uVar4);
  if ((~*(uint *)((long)pvVar3 + 0x32c) & 0x7f80) != 0) {
    *(uint *)((long)pvVar3 + 0x32c) = *(uint *)((long)pvVar3 + 0x32c) | 0x7f80;
    FUN_1000200a0((long)pvVar3 + 0x2a8);
  }
switchD_10026333c_default:
  if (param_2[0x36] == (string)0x0) {
    FUN_10015d3ec();
    uVar4 = FUN_100164f34();
    iVar2 = FUN_1004e36c0(param_2 + 0x18,uVar4);
    uVar6 = 4;
    if (iVar2 == 0) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  *(uint *)((long)pvVar3 + 0x63c) = *(uint *)((long)pvVar3 + 0x63c) & 0xfffffffb | uVar6;
  FUN_100651460((long)pvVar3 + 0x178,&DAT_10115a168);
  puVar1 = (uint *)(param_1 + 0x5220);
  local_50 = (ulong)*puVar1;
  local_48 = DAT_101dbd460;
  local_70 = FUN_100264250;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c((long)pvVar3 + 0x180,&local_70);
  local_50 = (ulong)*puVar1;
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100264250;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c((long)pvVar3 + 0x180,&local_70);
  FUN_100642bd8(param_1 + 0x4638,pvVar3,1);
  FUN_100264270(puVar1,&local_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}


```

</details>

#### `FUN_1002687d0` @ `0x1002687d0` (5 cases)

Cases: 0, 1, 2, 3, 4

<details><summary>Decompiled</summary>

```c

void FUN_1002687d0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_2 + 1);
  FUN_10034cc50(local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_1001148bc();
  FUN_1001162b8();
  uVar2 = *param_2;
  switch(uVar2) {
  case 0:
    break;
  case 1:
    FUN_1003467f8();
    iVar1 = FUN_10034ced0();
    uVar2 = 4;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
  case 4:
    uVar2 = 3;
    break;
  default:
    goto switchD_100268834_default;
  }
  FUN_1002686ec(param_1,uVar2,0);
switchD_100268834_default:
  return;
}


```

</details>

#### `FUN_100269e20` @ `0x100269e20` (7 cases)

Cases: 0, 1, 2, 3, 4, 5, 6

<details><summary>Decompiled</summary>

```c

void FUN_100269e20(long *param_1,ulong param_2,undefined4 param_3,int param_4)

{
  ushort *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  
  if ((((uint)((*(byte *)(param_1 + 0x18) & 1) == 0) ^ (uint)param_2) & 1) != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar4 = 0;
    break;
  case 1:
    uVar4 = 1;
    break;
  case 2:
    uVar4 = 2;
    break;
  case 3:
    uVar4 = 3;
    break;
  case 4:
    FUN_10026a264(param_1,param_2);
    goto switchD_100269e88_default;
  case 5:
    uVar4 = 1;
    goto LAB_100269efc;
  case 6:
    uVar4 = 0;
LAB_100269efc:
    uVar5 = 0;
    goto LAB_100269f00;
  default:
    goto switchD_100269e88_default;
  }
  uVar5 = 1;
LAB_100269f00:
  FUN_100269fe0(param_1,param_2,uVar4,uVar5);
switchD_100269e88_default:
  lVar3 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar6 * 0x40);
  if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
  *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_10144bff8;
  *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  pcVar2 = FUN_10026a4c4;
  if ((uint)param_2 == 0) {
    pcVar2 = FUN_10026a4dc;
  }
  *(code **)(puVar1 + 8) = pcVar2;
  *(long **)(puVar1 + 0x10) = param_1;
  FUN_100642b14(param_1,puVar1);
  if (((param_2 & 1) == 0) && (param_4 != 0)) {
    uVar4 = FUN_100047398();
    FUN_100642b14(param_1,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000100269fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1,param_2);
  return;
}


```

</details>

### Global switch tables with game message semantics

#### `FUN_10003adf0` @ `0x10003adf0` (25 cases)

Cases: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19



<details><summary>Decompiled</summary>

```c

char * FUN_10003adf0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  iVar1 = FUN_100060a70();
  switch(param_2) {
  case 1:
    pcVar2 = "ability_icon_A";
    pcVar3 = "joystick_ability_icon_A";
    goto LAB_10003aecc;
  case 2:
    pcVar2 = "ability_icon_B";
    pcVar3 = "joystick_ability_icon_B";
    goto LAB_10003aecc;
  case 3:
    pcVar2 = "ability_icon_C";
    pcVar3 = "joystick_ability_icon_C";
    goto LAB_10003aecc;
  case 4:
    pcVar2 = "ability_upgrade_badge_A";
    pcVar3 = "joystick_ability_upgrade_badge_A";
    goto LAB_10003aecc;
  case 5:
    pcVar2 = "ability_upgrade_badge_B";
    pcVar3 = "joystick_ability_upgrade_badge_B";
    goto LAB_10003aecc;
  case 6:
    pcVar2 = "ability_upgrade_badge_C";
    pcVar3 = "joystick_ability_upgrade_badge_C";
    goto LAB_10003aecc;
  case 7:
    pcVar2 = "flask_button";
    pcVar3 = "joystick_flask_button";
    goto LAB_10003aecc;
  case 8:
    pcVar2 = "scout_cam_button";
    pcVar3 = "joystick_scout_cam_button";
LAB_10003aecc:
    if (iVar1 == 0) {
      pcVar3 = pcVar2;
    }
    break;
  case 9:
    pcVar3 = "HUD_Utils_Button_Shop";
    break;
  case 10:
    pcVar3 = "HUD_Utils_Button_Withdraw";
    break;
  case 0xb:
    pcVar3 = "HUD_Utils_Button_Scoreboard";
    break;
  case 0xc:
    pcVar3 = "HUD_Utils_Button_Help";
    break;
  case 0xd:
    pcVar3 = "HUD_Quick_Buy";
    break;
  case 0xe:
    pcVar3 = "recommended_path_select";
    break;
  case 0xf:
    pcVar3 = "HUD_movement_joystick";
    break;
  case 0x10:
    pcVar3 = "HUD_attack_joystick";
    break;
  case 0x11:
    pcVar3 = "HUD_attack_structure_joystick";
    break;
  case 0x12:
    pcVar3 = "recommended_path_tile_0";
    break;
  case 0x13:
    pcVar3 = "hud_store_category_0";
    break;
  case 0x14:
    pcVar3 = "hud_store_category_1";
    break;
  case 0x15:
    pcVar3 = "hud_store_category_2";
    break;
  case 0x16:
    pcVar3 = "hud_store_category_3";
    break;
  case 0x17:
    pcVar3 = "hud_store_category_4";
    break;
  case 0x18:
    pcVar3 = "hud_store_category_5";
    break;
  case 0x19:
    pcVar3 = "hud_store_category_6";
    break;
  default:
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


```

</details>

#### `FUN_1000eff84` @ `0x1000eff84` (200 cases)

Cases (first 30): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d...



<details><summary>Decompiled</summary>

```c

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
    pcVar1 = "STAT_LABEL_ADAGIO_B_BURN_BO
// ...truncated...
```

</details>

#### `FUN_100102ec8` @ `0x100102ec8` (15 cases)

Cases: 0x19, 0x1a, 0x1b, 0x20, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27



<details><summary>Decompiled</summary>

```c

void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}


```

</details>

#### `thunk_FUN_100116f88` @ `0x100116f84` (17 cases)

Cases: 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, '\0', '\x01', '\x02', '\x03', '\x04'



<details><summary>Decompiled</summary>

```c

void thunk_FUN_100116f88(void)

{
  char *****pppppcVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  ulong uVar26;
  int *piVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  char *pcStack_228;
  char ****appppcStack_220 [2];
  char cStack_209;
  char ****appppcStack_208 [2];
  char cStack_1f1;
  char ****appppcStack_1f0 [2];
  char cStack_1d9;
  char ****ppppcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long alStack_130 [16];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = FUN_100119128();
  lVar19 = 0;
  do {
    iVar8 = *(int *)((long)&DAT_101dc7734 + lVar19);
    iVar6 = FUN_10034ee90();
    if (iVar8 == iVar6) {
      piVar27 = (int *)((long)&DAT_101dc7734 + lVar19);
      goto LAB_100117004;
    }
    lVar19 = lVar19 + 0x70;
  } while (lVar19 != 0x700);
  piVar27 = (int *)0x0;
LAB_100117004:
  lVar19 = FUN_100119188();
  if (((lVar11 == 0) || (piVar27 == (int *)0x0)) || (lVar19 == 0)) goto LAB_100118d58;
  puStack_148 = &uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_150 = 0;
  puStack_160 = &uStack_158;
  uStack_158 = 0;
  puVar12 = (undefined8 *)FUN_100465e48(lVar11);
  if (puVar12 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_10032bbf4(*puVar12);
  }
  thunk_FUN_10045cc04(auStack_1c0);
  FUN_1003a2644(auStack_1c0,1);
  FUN_1003c3608(auStack_1c0,1);
  FUN_1003bc030(auStack_1c0,0);
  uVar7 = FUN_1003a6ce4(auStack_1c0,alStack_130,0x10,0);
  fVar29 = (float)FUN_100032228();
  fVar29 = fVar29 * 0.016666668;
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  ppppcStack_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar15,uVar14);
  ppppcStack_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  ppppcStack_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  ppppcStack_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  ppppcStack_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  ppppcStack_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  ppppcStack_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  ppppcStack_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  ppppcStack_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "support";
    break;
  case 1:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "top";
    break;
  case 3:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "laner";
    break;
  default:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  ppppcStack_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar15,uVar14);
  ppppcStack_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  ppppcStack_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  ppppcStack_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  ppppcStack_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  ppppcStack_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  ppppcStack_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  ppppcStack_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  ppppcStack_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "support";
    break;
  case 1:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "top";
    break;
  case 3:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "laner";
    break;
  default:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  ppppcStack_1d8 = (char ****)0x0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lVar13 = 0xc;
  do {
    iVar8 = *(int *)((long)piVar27 + lVar13);
    if (iVar8 != 0xffff) {
      uVar14 = FUN_100345b94();
      lVar16 = FUN_10046c858(uVar14,iVar8,PTR_DAT_1018573e8);
      if (lVar16 != 0) {
        uVar24 = (uint)uStack_1d0;
        if (-1 < uStack_1c8) {
          uVar24 = (uint)uStack_1c8._7_1_;
        }
        if (uVar24 != 0) {
          std::string::append((char *)&ppppcStack_1d8);
        }
        std::string::append((char *)&ppppcStack_1d8);
      }
    }
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x34);
  pppppcVar1 = (char *****)ppppcStack_1d8;
  if (-1 < uStack_1c8) {
    pppppcVar1 = &ppppcStack_1d8;
  }
  appppcStack_1f0[0] = (char ****)0x1013db37b;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b124(uVar14,pppppcVar1);
  if ((int)uVar7 < 1) {
    uVar22 = 0;
    uVar24 = 0;
    bVar28 = *(byte *)(piVar27 + 1);
    fVar34 = 0.0;
    fVar36 = 0.0;
    fVar31 = 0.0;
    fVar37 = 0.0;
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    fVar37 = 0.0;
    plVar20 = alStack_130;
    fVar31 = 0.0;
    fVar36 = 0.0;
    uVar26 = (ulong)uVar7;
    fVar34 = 0.0;
    do {
      uVar9 = FUN_100345bbc(*plVar20);
      bVar28 = *(byte *)(piVar27 + 1);
      lVar13 = *(long *)(*plVar20 + 0x40);
      fVar30 = *(float *)(lVar13 + 0xdc) +
               *(float *)(lVar13 + 400) * (*(float *)(lVar13 + 0x2f8) + 1.0);
      if (uVar9 == bVar28) {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar37 = DAT_101dc83c4 + fVar37;
        fVar36 = *(float *)(lVar13 + 0x324) + fVar36;
        uVar24 = uVar24 + 1;
      }
      else {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar31 = DAT_101dc83c4 + fVar31;
        fVar34 = *(float *)(lVar13 + 0x324) + fVar34;
        uVar22 = uVar22 + 1;
      }
      plVar20 = plVar20 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  lVar13 = 0;
 
// ...truncated...
```

</details>

#### `FUN_100116f88` @ `0x100116f88` (17 cases)

Cases: 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, '\0', '\x01', '\x02', '\x03', '\x04'



<details><summary>Decompiled</summary>

```c

void FUN_100116f88(void)

{
  char *****pppppcVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  ulong uVar26;
  int *piVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  char *local_228;
  char ****local_220 [2];
  char local_209;
  char ****local_208 [2];
  char local_1f1;
  char ****local_1f0 [2];
  char local_1d9;
  char ****local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130 [16];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = FUN_100119128();
  lVar19 = 0;
  do {
    iVar8 = *(int *)((long)&DAT_101dc7734 + lVar19);
    iVar6 = FUN_10034ee90();
    if (iVar8 == iVar6) {
      piVar27 = (int *)((long)&DAT_101dc7734 + lVar19);
      goto LAB_100117004;
    }
    lVar19 = lVar19 + 0x70;
  } while (lVar19 != 0x700);
  piVar27 = (int *)0x0;
LAB_100117004:
  lVar19 = FUN_100119188();
  if (((lVar11 == 0) || (piVar27 == (int *)0x0)) || (lVar19 == 0)) goto LAB_100118d58;
  puStack_148 = &local_140;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  local_160 = &local_158;
  local_158 = 0;
  puVar12 = (undefined8 *)FUN_100465e48(lVar11);
  if (puVar12 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_10032bbf4(*puVar12);
  }
  thunk_FUN_10045cc04(auStack_1c0);
  FUN_1003a2644(auStack_1c0,1);
  FUN_1003c3608(auStack_1c0,1);
  FUN_1003bc030(auStack_1c0,0);
  uVar7 = FUN_1003a6ce4(auStack_1c0,local_130,0x10,0);
  fVar29 = (float)FUN_100032228();
  fVar29 = fVar29 * 0.016666668;
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  local_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar15,uVar14);
  local_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  local_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  local_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  local_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  local_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  local_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "support";
    break;
  case 1:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "top";
    break;
  case 3:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "laner";
    break;
  default:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  local_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar15,uVar14);
  local_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  local_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  local_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  local_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  local_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  local_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "support";
    break;
  case 1:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "top";
    break;
  case 3:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "laner";
    break;
  default:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  local_1d8 = (char ****)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  lVar13 = 0xc;
  do {
    iVar8 = *(int *)((long)piVar27 + lVar13);
    if (iVar8 != 0xffff) {
      uVar14 = FUN_100345b94();
      lVar16 = FUN_10046c858(uVar14,iVar8,PTR_DAT_1018573e8);
      if (lVar16 != 0) {
        uVar24 = (uint)local_1d0;
        if (-1 < local_1c8) {
          uVar24 = (uint)local_1c8._7_1_;
        }
        if (uVar24 != 0) {
          std::string::append((char *)&local_1d8);
        }
        std::string::append((char *)&local_1d8);
      }
    }
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x34);
  pppppcVar1 = (char *****)local_1d8;
  if (-1 < local_1c8) {
    pppppcVar1 = &local_1d8;
  }
  local_1f0[0] = (char ****)0x1013db37b;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b124(uVar14,pppppcVar1);
  if ((int)uVar7 < 1) {
    uVar22 = 0;
    uVar24 = 0;
    bVar28 = *(byte *)(piVar27 + 1);
    fVar34 = 0.0;
    fVar36 = 0.0;
    fVar31 = 0.0;
    fVar37 = 0.0;
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    fVar37 = 0.0;
    plVar20 = local_130;
    fVar31 = 0.0;
    fVar36 = 0.0;
    uVar26 = (ulong)uVar7;
    fVar34 = 0.0;
    do {
      uVar9 = FUN_100345bbc(*plVar20);
      bVar28 = *(byte *)(piVar27 + 1);
      lVar13 = *(long *)(*plVar20 + 0x40);
      fVar30 = *(float *)(lVar13 + 0xdc) +
               *(float *)(lVar13 + 400) * (*(float *)(lVar13 + 0x2f8) + 1.0);
      if (uVar9 == bVar28) {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar37 = DAT_101dc83c4 + fVar37;
        fVar36 = *(float *)(lVar13 + 0x324) + fVar36;
        uVar24 = uVar24 + 1;
      }
      else {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar31 = DAT_101dc83c4 + fVar31;
        fVar34 = *(float *)(lVar13 + 0x324) + fVar34;
        uVar22 = uVar22 + 1;
      }
      plVar20 = plVar20 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  lVar13 = 0;
  fVar40 = 0.0;
  fVar35 = 0.0;
  fVar30 = 0.0;
  do {
    if ((&DAT_101dc7738)[lVar13] == bVar28) {
      fVar40 = *(float *)((long)&DAT_101dc777c + lVar13) + fVar40;
      fVar35 = *(float *)((long)&DAT_101dc7768 + lVar13) + fVar35;
      fVar30 = *(float *)((long)&DAT_101dc7778 + lVar13) + fVar30;
    }
    lVar13 = lVar13 + 0x70;
  } while (lVar13 != 0x700);
  fVar38 = fVar37 + fVar31;
  fVar33 = 0.0;
  fVar32 = fVar37 / fVar38;
  if (fVar38 <=
// ...truncated...
```

</details>

#### `FUN_100123fa0` @ `0x100123fa0` (168 cases)

Cases (first 30): 0x3e9, 0x3ea, 0x3eb, 0x3ec, 0x3ed, 0x3ee, 0x3ef, 0x3f0, 0x3f1, 0x3f2, 0x3f3, 0x3f4, 0x3f5, 0x3f6, 0x3f7, 0x40c, 0x411, 0x412, 0x413, 0x414, 0x424, 0x426, 0x42a, 0x42d, 0x436, 0x438, 0x448, 0x449, 0x44a, 0x450...



<details><summary>Decompiled</summary>

```c

void FUN_100123fa0(ushort *param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint3 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint local_a68;
  uint uStack_a64;
  undefined4 local_a60;
  undefined8 uStack_a5c;
  undefined1 uStack_a54;
  undefined1 uStack_a53;
  undefined1 uStack_a52;
  undefined1 uStack_a51;
  undefined1 uStack_a50;
  undefined1 uStack_a4f;
  undefined1 auStack_a4e [2];
  undefined1 uStack_a4c;
  undefined1 uStack_a4b;
  ushort uStack_a4a;
  undefined1 uStack_a48;
  undefined1 uStack_a47;
  ushort uStack_a46;
  undefined1 uStack_a44;
  undefined1 uStack_a43;
  ushort uStack_a42;
  undefined2 uStack_a40;
  undefined2 uStack_a3e;
  undefined2 uStack_a3c;
  undefined2 uStack_a3a;
  ushort uStack_a38;
  undefined2 uStack_a36;
  undefined2 uStack_a34;
  undefined2 uStack_a32;
  undefined2 local_a30;
  undefined2 uStack_a2e;
  undefined2 uStack_a2c;
  undefined2 uStack_a2a;
  undefined2 uStack_a28;
  ushort uStack_a26;
  undefined1 uStack_a24;
  undefined1 uStack_a23;
  ushort uStack_a22;
  ushort uStack_a20;
  ushort uStack_a1e;
  undefined1 uStack_a1c;
  undefined1 uStack_a1b;
  ushort uStack_a1a;
  undefined2 uStack_a18;
  ushort uStack_a16;
  undefined1 uStack_a14;
  undefined1 uStack_a13;
  ushort uStack_a12;
  undefined1 local_a10;
  undefined1 uStack_a0f;
  ushort uStack_a0e;
  undefined1 auStack_a0c [6];
  undefined4 uStack_a06;
  undefined1 uStack_a02;
  undefined1 uStack_a01;
  byte bStack_a00;
  undefined1 uStack_9ff;
  undefined1 uStack_9fe;
  undefined1 uStack_9fd;
  undefined1 uStack_9fc;
  undefined1 uStack_9fb;
  undefined2 uStack_9fa;
  undefined2 uStack_9f8;
  uint uStack_9f6;
  undefined2 uStack_9f2;
  undefined2 uStack_9f0;
  undefined2 local_9ee;
  undefined2 uStack_9ec;
  undefined2 local_9ea;
  undefined2 uStack_9e8;
  uint local_9e6;
  undefined2 local_9e2;
  undefined2 uStack_9e0;
  uint uStack_9de;
  undefined2 uStack_9da;
  undefined2 uStack_9d8;
  uint uStack_9d6;
  undefined1 uStack_9d2;
  undefined1 uStack_9d1;
  ushort uStack_9d0;
  uint uStack_9ce;
  undefined1 uStack_9ca;
  undefined1 uStack_9c9;
  ushort uStack_9c8;
  uint local_9c6;
  undefined2 local_9c2;
  undefined2 uStack_9c0;
  undefined2 uStack_9be;
  undefined2 uStack_9bc;
  undefined2 uStack_9ba;
  uint uStack_9b8;
  uint uStack_9b4;
  undefined2 uStack_9b0;
  undefined2 local_9ae;
  undefined2 uStack_9ac;
  undefined2 local_9aa;
  undefined2 uStack_9a8;
  undefined2 local_9a6;
  undefined2 uStack_9a4;
  undefined2 local_9a2;
  undefined2 uStack_9a0;
  undefined2 uStack_99e;
  undefined2 uStack_99c;
  undefined2 uStack_99a;
  undefined2 uStack_998;
  undefined2 uStack_996;
  undefined2 uStack_994;
  undefined2 uStack_992;
  undefined2 uStack_990;
  uint uStack_98e;
  undefined2 local_98a;
  undefined2 uStack_988;
  uint local_986;
  uint local_982;
  uint local_97e;
  uint local_97a;
  uint local_976;
  uint local_972;
  uint local_96e;
  uint local_96a;
  uint local_966;
  uint local_962;
  uint local_95e;
  uint uStack_95a;
  uint local_956;
  undefined1 auStack_952 [4];
  undefined4 uStack_94e;
  uint uStack_94a;
  uint local_946;
  uint uStack_942;
  uint local_93e;
  uint uStack_93a;
  uint local_936;
  uint uStack_932;
  uint local_92e;
  uint uStack_92a;
  uint local_926;
  uint uStack_922;
  uint local_91e;
  uint uStack_91a;
  uint local_916;
  uint uStack_912;
  uint local_90e;
  uint uStack_90a;
  uint local_906;
  uint uStack_902;
  uint local_8fe [10];
  uint local_8d6 [10];
  uint local_8ae [10];
  uint local_886 [10];
  uint local_85e [10];
  uint local_836 [9];
  uint local_80f;
  uint local_80b;
  uint local_807 [8];
  uint local_7e7 [8];
  uint local_7c7 [8];
  uint local_7a7;
  uint uStack_7a3;
  uint local_79f;
  uint uStack_79b;
  uint local_77f;
  uint uStack_77b;
  uint local_214;
  uint local_210;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  puVar16 = (uint *)(param_1 + 1);
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  iVar8 = FUN_10011f120();
  if (iVar8 != 0) {
    FUN_10011e8f4(param_1,param_2);
  }
  iVar8 = FUN_100346750();
  if (iVar8 != 0) {
    FUN_10014796c();
  }
  switch(uVar3) {
  case 0x3e9:
    uVar12 = *(undefined8 *)(param_1 + 0x25);
    uVar15 = *(undefined8 *)(param_1 + 0x21);
    uVar19 = *(undefined8 *)(param_1 + 0x29);
    uStack_a18 = (undefined2)uVar12;
    uStack_a16 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a14 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a13 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a12 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a20 = (ushort)uVar15;
    uStack_a1e = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a1c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a1b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a1a = (ushort)((ulong)uVar15 >> 0x30);
    auStack_a0c._4_2_ = (undefined2)*(undefined8 *)(param_1 + 0x2d);
    local_a10 = (undefined1)uVar19;
    uStack_a0f = (undefined1)((ulong)uVar19 >> 8);
    uStack_a0e = (ushort)((ulong)uVar19 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)((ulong)uVar19 >> 0x20);
    auStack_a0c._2_2_ = (undefined2)((ulong)uVar19 >> 0x30);
    uVar15 = *(undefined8 *)((long)param_1 + 0x5f);
    uStack_a06._0_3_ = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x2d) >> 0x10);
    uStack_a06._3_1_ = (undefined1)uVar15;
    uStack_a02 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a01 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_9fc = (undefined1)((ulong)uVar15 >> 0x38);
    uVar19 = *(undefined8 *)(param_1 + 0xd);
    uVar12 = *(undefined8 *)(param_1 + 9);
    uStack_a48 = (undefined1)uVar19;
    uStack_a47 = (undefined1)((ulong)uVar19 >> 8);
    uStack_a46 = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar19 >> 0x30);
    uStack_a50 = (undefined1)uVar12;
    uStack_a4f = (undefined1)((ulong)uVar12 >> 8);
    auStack_a4e = SUB82((ulong)uVar12 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar12 >> 0x30);
    uVar21 = *(undefined8 *)(param_1 + 0x15);
    uVar20 = *(undefined8 *)(param_1 + 0x11);
    uVar19 = *(undefined8 *)(param_1 + 0x1d);
    uVar12 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar21;
    uStack_a36 = (undefined2)((ulong)uVar21 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar21 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar21 >> 0x30);
    uStack_a40 = (undefined2)uVar20;
    uStack_a3e = (undefined2)((ulong)uVar20 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar20 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar20 >> 0x30);
    uStack_a28 = (undefined2)uVar19;
    uStack_a26 = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar19 >> 0x30);
    local_a30 = (undefined2)uVar12;
    uStack_a2e = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar12 >> 0x30);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar11 = (uint)((ulong)uVar15 >> 0x18);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    bStack_a00 = (byte)(uVar9 >> 0x18);
    uStack_9ff = (undefined1)(uVar11 >> 0x10);
    uStack_9fe = (undefined1)(uVar9 >> 8);
    uStack_9fd = (undefined1)uVar11;
    iVar8 = FUN_10011f114();
    if (iVar8 != 0) {
      uStack_a5c._0_1_ = 0;
      uStack_a5c._1_1_ = 0;
      uStack_a5c._2_1_ = 0;
      uStack_a5c._3_1_ = 0;
    }
    FUN_100122d58(&local_a60);
    break;
  case 0x3ea:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    iVar8 = FUN_1003458ec(uVar9);
    if (iVar8 != 0) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        FUN_10034e138(uVar9,1);
        return;
      }
      goto LAB_100125e98;
    }
    break;
  case 0x3eb:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    iVar8 = FUN_1003458ec(uVar9);
    if (iVar8 != 0) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        FUN_10034e1f0(uVar9,1);
        return;
      }
      goto LAB_100125e98;
    }
    break;
  case 0x3ec:
    uVar9 = *puVar16 & 0xff00ff00;
    uVar11 = *puVar16 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
 
// ...truncated...
```

</details>

#### `FUN_100317190` @ `0x100317190` (24 cases)

Cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17



<details><summary>Decompiled</summary>

```c

void FUN_100317190(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [24];
  
  lVar1 = FUN_10109c73c(0x5bb9d395);
  if (lVar1 == 0) {
    lVar1 = FUN_10109c728(0x5bb9d395);
  }
  uVar6 = 0;
  puVar7 = (undefined1 *)(param_1 + 0x44);
  do {
    if (0x17 < (uint)uVar6) goto LAB_1003177fc;
    puVar5 = puVar7 + -0x34;
    switch(uVar6 & 0xffffffff) {
    case 0:
      FUN_100316c10(param_1,lVar1,"activate_ability_A",0,puVar5,0,FUN_100317bc8);
      pcVar2 = "release_cast_ability_A";
      uVar3 = 2;
      pcVar4 = FUN_100317c24;
      break;
    case 1:
      FUN_100316c10(param_1,lVar1,"activate_ability_B",0,puVar5,0,FUN_100317c88);
      pcVar2 = "release_cast_ability_B";
      uVar3 = 2;
      pcVar4 = FUN_100317ce4;
      break;
    case 2:
      FUN_100316c10(param_1,lVar1,"activate_ability_C",0,puVar5,0,FUN_100317d48);
      pcVar2 = "release_cast_ability_C";
      uVar3 = 2;
      pcVar4 = FUN_100317da4;
      break;
    case 3:
      if (*(int *)(puVar7 + -0x10) == 3) {
        FUN_10109c8bc(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x30),puVar7[-0xc],0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x34),puVar7[-0xc],0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -4) == 3) {
        FUN_10109c8bc(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x3c),*puVar7,0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x40),*puVar7,0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -0x10) == 3) {
        FUN_10109c8bc(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x68),puVar7[-0xc],0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x6c),puVar7[-0xc],0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -4) == 3) {
        FUN_10109c8bc(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x74),*puVar7,0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x78),*puVar7,0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -0x10) == 3) {
        FUN_10109c8bc(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xa0),puVar7[-0xc],0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xa4),puVar7[-0xc],0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -4) == 3) {
        FUN_10109c8bc(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xac),*puVar7,0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xb0),*puVar7,0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      FUN_10109cbf8(lVar1,0x6ad27ae6,0,FUN_100317df0);
      FUN_10109cbf8(lVar1,0x69d27953,0,FUN_100317e3c);
      FUN_10109cbf8(lVar1,0x68d277c0,0,FUN_100317e88);
      goto LAB_1003177fc;
    case 4:
      FUN_100316c10(param_1,lVar1,"activate_ability_shoulder_A",0,puVar5,0,FUN_100317eec);
      pcVar2 = "release_cast_ability_shoulder_A";
      uVar3 = 2;
      pcVar4 = FUN_100317f48;
      break;
    case 5:
      FUN_100316c10(param_1,lVar1,"activate_ability_shoulder_B",0,puVar5,0,FUN_100317fac);
      pcVar2 = "release_cast_ability_shoulder_B";
      uVar3 = 2;
      pcVar4 = FUN_100318008;
      break;
    case 6:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_1",0,puVar5,0,FUN_100318120);
      pcVar2 = "release_cast_ability_item_1";
      uVar3 = 2;
      pcVar4 = FUN_10031817c;
      break;
    case 7:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_2",0,puVar5,0,FUN_1003181e0);
      pcVar2 = "release_cast_ability_item_2";
      uVar3 = 2;
      pcVar4 = FUN_10031823c;
      break;
    case 8:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_3",0,puVar5,0,FUN_1003182a0);
      pcVar2 = "release_cast_ability_item_3";
      uVar3 = 2;
      pcVar4 = FUN_1003182fc;
      break;
    case 9:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_4",0,puVar5,0,FUN_100318360);
      pcVar2 = "release_cast_ability_item_4";
      uVar3 = 2;
      pcVar4 = FUN_1003183bc;
      break;
    case 10:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_5",0,puVar5,0,FUN_100318420);
      pcVar2 = "release_cast_ability_item_5";
      uVar3 = 2;
      pcVar4 = FUN_10031847c;
      break;
    case 0xb:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_6",0,puVar5,0,FUN_1003184e0);
      pcVar2 = "release_cast_ability_item_6";
      uVar3 = 2;
      pcVar4 = FUN_10031853c;
      break;
    case 0xc:
      pcVar2 = "open_scoreboard";
      uVar3 = 0;
      pcVar4 = FUN_100318548;
      break;
    case 0xd:
      pcVar2 = "teleport_home";
      uVar3 = 0;
      pcVar4 = FUN_1003185bc;
      break;
    case 0xe:
      pcVar2 = "open_shop";
      uVar3 = 0;
      pcVar4 = FUN_1003185f8;
      break;
    case 0xf:
      pcVar2 = "quick_buy";
      uVar3 = 0;
      pcVar4 = FUN_100318634;
      break;
    case 0x10:
      FUN_100316c10(param_1,lVar1,"activate_lazy_attack",0,puVar5,0,FUN_100318014);
      pcVar2 = "release_lazy_attack";
      uVar3 = 2;
      pcVar4 = FUN_100318050;
      break;
    case 0x11:
      pcVar2 = "activate_lazy_attack_instant";
      uVar3 = 0;
      pcVar4 = FUN_10031808c;
      break;
    case 0x12:
      pcVar2 = "recenter_camera";
      uVar3 = 0;
      pcVar4 = FUN_100318670;
      break;
    case 0x13:
      pcVar2 = "stop_move";
      uVar3 = 0;
      pcVar4 = FUN_100318584;
      break;
    case 0x14:
      pcVar2 = "toggle_lock_camera";
      uVar3 = 0;
      pcVar4 = FUN_1003186ac;
      break;
    case 0x15:
      pcVar2 = "show_chat_box";
      uVar3 = 0;
      pcVar4 = FUN_1003186e8;
      break;
    case 0x16:
      FUN_100316c10(param_1,lVar1,"start_target_ping",0,puVar5,0,FUN_100318724);
      pcVar2 = "release_target_ping";
      goto LAB_1003177e8;
    case 0x17:
      FUN_100316c10(param_1,lVar1,"start_attention_ping",0,puVar5,0,FUN_10031879c);
      pcVar2 = "release_attention_ping";
LAB_1003177e8:
      uVar3 = 2;
      pcVar4 = FUN_100318760;
    }
    FUN_100316c10(param_1,lVar1,pcVar2,uVar3,puVar5,0,pcVar4);
LAB_1003177fc:
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 0x38;
    if (uVar6 == 0x1a) {
      return;
    }
  } while( true );
}


```

</details>

#### `FUN_10048d45c` @ `0x10048d45c` (21 cases)

Cases: '\x02', '\x03', 0, 1, 2, 3, 4, '\x04', 0, 1, 2, 3, 4, '\x05', '\x06', '\a', 0, 1, 2, 3, 4



<details><summary>Decompiled</summary>

```c

ulong FUN_10048d45c(uint *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 local_48 [2];
  int local_40 [2];
  undefined4 local_38 [2];
  
  switch((char)param_1[4]) {
  case '\x02':
    uVar8 = *(undefined8 *)param_1;
    lVar9 = FUN_100345d90(*(undefined4 *)(param_2 + 0x260));
    if (lVar9 != 0) {
      uVar6 = FUN_1003a47d0(lVar9,uVar8);
      return uVar6;
    }
    return 0;
  case '\x03':
    lVar9 = *(long *)(param_2 + 0x18);
    while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    FUN_1003a4e5c(local_40,*(undefined8 *)param_1);
    for (lVar7 = *(long *)(lVar9 + 0x28); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
      if ((*(int *)(lVar7 + 0x314) == local_40[0]) && (*(int *)(lVar7 + 0x310) == 0)) {
        FUN_1003a4e5c(local_48,*(undefined8 *)param_1);
        uVar5 = FUN_1003a34a4(lVar9,local_48[0]);
        goto LAB_10048d654;
      }
    }
    uVar5 = 0;
LAB_10048d654:
    if (4 < param_1[3]) {
      return 0;
    }
    uVar1 = param_1[2];
    switch(param_1[3]) {
    case 0:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
      bVar4 = uVar5 == uVar1;
LAB_10048d680:
      return (ulong)(!bVar4 && bVar2 == bVar3);
    case 1:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
LAB_10048d6e4:
      return (ulong)(bVar2 != bVar3);
    case 2:
      bVar3 = uVar5 == uVar1;
      break;
    case 3:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
LAB_10048d6f8:
      return (ulong)(bVar2 == bVar3);
    case 4:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
      bVar4 = uVar5 == uVar1;
LAB_10048d704:
      return (ulong)(bVar4 || bVar2 != bVar3);
    }
    break;
  case '\x04':
    if (4 < param_1[2]) {
      return 0;
    }
    fVar10 = *(float *)(*(long *)(param_2 + 0x40) + (ulong)*param_1 * 4 + 0x308);
    fVar11 = (float)param_1[1];
    switch(param_1[2]) {
    case 0:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar4 = fVar10 == fVar11;
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d680;
    case 1:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d6e4;
    case 2:
      bVar3 = fVar10 == fVar11;
      break;
    case 3:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d6f8;
    case 4:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar4 = fVar10 == fVar11;
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d704;
    }
    break;
  case '\x05':
    uVar6 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
    if ((int)uVar6 != 0x1f) {
      return (ulong)(1 < *(ushort *)(param_2 + uVar6 * 0x38 + 0x90) - 3);
    }
    return 1;
  case '\x06':
    bVar3 = (*(byte *)(param_2 + 0x2f9) & 1) == 0;
    break;
  case '\a':
    for (lVar9 = *(long *)(param_2 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
      if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_10184dab8) {
        FUN_1003a4e5c(local_38,*(undefined8 *)param_1);
        uVar6 = FUN_1003e2b0c(lVar9,local_38[0]);
        lVar9 = *(long *)(*(long *)(param_2 + 0x58) + (uVar6 & 0xffffffff) * 8 + 0x50);
        uVar5 = 0;
        if (lVar9 != 0) {
          uVar5 = *(uint *)(lVar9 + 0x238) >> 10 & 7;
        }
        if (4 < param_1[3]) {
          return 0;
        }
        uVar1 = param_1[2];
        switch(param_1[3]) {
        case 0:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          bVar4 = uVar5 == uVar1;
          goto LAB_10048d680;
        case 1:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          goto LAB_10048d6e4;
        case 2:
          bVar3 = uVar5 == uVar1;
          goto LAB_10048d58c;
        case 3:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          goto LAB_10048d6f8;
        case 4:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          bVar4 = uVar5 == uVar1;
        }
        goto LAB_10048d704;
      }
    }
  default:
    return 0;
  }
LAB_10048d58c:
  return (ulong)bVar3;
}


```

</details>

#### `FUN_10048e1dc` @ `0x10048e1dc` (16 cases)

Cases: 0, 1, 2, 3, 5, 7, 9, 10, 0xc, 4, 0xb, 6, 8, 0xd, 0xe, 0xf



<details><summary>Decompiled</summary>

```c

ulong FUN_10048e1dc(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  switch(*(undefined1 *)(param_1 + 0x58)) {
  case 0:
    if (*(char *)(param_1 + 0x50) == '\x01') {
      fVar4 = *(float *)(param_1 + 0x40);
      iVar1 = _rand();
      return (ulong)((float)iVar1 * 4.656613e-10 <= fVar4);
    }
  default:
switchD_10048e210_default:
    uVar2 = 0;
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00010048e288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x40))(param_2);
    return uVar2;
  case 2:
  case 3:
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xc:
    lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    goto LAB_10048e2b4;
  case 4:
  case 0xb:
    lVar3 = FUN_100345d90(*(undefined4 *)(*param_2 + 0x308));
LAB_10048e2b4:
    uVar2 = FUN_10048d45c(param_1 + 0x40,lVar3);
    return uVar2;
  case 6:
    uVar2 = (ulong)((int)param_2[0x81] != 0);
    break;
  case 8:
    lVar3 = FUN_100345d90(*(undefined4 *)(*param_2 + 0x308));
    uVar2 = 0;
    if (lVar3 != 0) goto LAB_10048e2b4;
    break;
  case 0xd:
    uVar2 = (ulong)(*(int *)(param_2[0x85] + 0x18) ==
                   *(int *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x260));
    break;
  case 0xe:
    uVar2 = 0;
    if (*(long *)(param_2[0x85] + 0x20) != 0) {
      uVar2 = FUN_1003a47d0(*(long *)(param_2[0x85] + 0x20),*(undefined8 *)(param_1 + 0x40));
      return uVar2;
    }
    break;
  case 0xf:
    if (*(long *)(param_2[0x85] + 0x20) != 0) {
      return (ulong)(*(byte *)(*(long *)(param_2[0x85] + 0x20) + 0x2f4) & 1);
    }
    goto switchD_10048e210_default;
  }
  return uVar2;
}


```

</details>

#### `FUN_10049a5c4` @ `0x10049a5c4` (23 cases)

Cases: 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10, 0xf, 0xe, 0xd, 0xc, 0xb, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1



<details><summary>Decompiled</summary>

```c

ulong FUN_10049a5c4(uint6 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = 0x9e3779b97f4a7c13;
  uVar3 = param_2;
  uVar2 = param_3;
  if (((ulong)param_1 & 7) == 0) {
    for (; 0x17 < uVar3; uVar3 = uVar3 - 0x18) {
      uVar4 = *(long *)(param_1 + 2) + uVar4;
      uVar5 = (*(long *)param_1 + param_3) - (*(long *)(param_1 + 1) + uVar2 + uVar4) ^
              uVar4 >> 0x2b;
      uVar6 = (*(long *)(param_1 + 1) + uVar2) - (uVar4 + uVar5) ^ uVar5 << 9;
      uVar2 = uVar4 - (uVar5 + uVar6) ^ uVar6 >> 8;
      uVar4 = uVar5 - (uVar6 + uVar2) ^ uVar2 >> 0x26;
      uVar5 = uVar6 - (uVar2 + uVar4) ^ uVar4 << 0x17;
      uVar2 = uVar2 - (uVar4 + uVar5) ^ uVar5 >> 5;
      uVar4 = uVar4 - (uVar5 + uVar2) ^ uVar2 >> 0x23;
      uVar6 = uVar5 - (uVar2 + uVar4) ^ uVar4 << 0x31;
      uVar5 = uVar2 - (uVar4 + uVar6) ^ uVar6 >> 0xb;
      param_3 = uVar4 - (uVar6 + uVar5) ^ uVar5 >> 0xc;
      uVar2 = uVar6 - (uVar5 + param_3) ^ param_3 << 0x12;
      uVar4 = uVar5 - (param_3 + uVar2) ^ uVar2 >> 0x16;
      param_1 = param_1 + 3;
    }
  }
  else {
    for (; 0x17 < uVar3; uVar3 = uVar3 - 0x18) {
      lVar1 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30) + (ulong)param_1[1] +
              ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
      uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x30) + (ulong)param_1[2] +
              ((ulong)*(byte *)((long)param_1 + 0x17) << 0x38);
      uVar2 = (param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30) + (ulong)*param_1 +
              ((ulong)*(byte *)((long)param_1 + 7) << 0x38)) - (lVar1 + uVar4) ^ uVar4 >> 0x2b;
      uVar6 = lVar1 - (uVar4 + uVar2) ^ uVar2 << 9;
      uVar5 = uVar4 - (uVar2 + uVar6) ^ uVar6 >> 8;
      uVar4 = uVar2 - (uVar6 + uVar5) ^ uVar5 >> 0x26;
      uVar6 = uVar6 - (uVar5 + uVar4) ^ uVar4 << 0x17;
      uVar2 = uVar5 - (uVar4 + uVar6) ^ uVar6 >> 5;
      uVar4 = uVar4 - (uVar6 + uVar2) ^ uVar2 >> 0x23;
      uVar6 = uVar6 - (uVar2 + uVar4) ^ uVar4 << 0x31;
      uVar5 = uVar2 - (uVar4 + uVar6) ^ uVar6 >> 0xb;
      param_3 = uVar4 - (uVar6 + uVar5) ^ uVar5 >> 0xc;
      uVar2 = uVar6 - (uVar5 + param_3) ^ param_3 << 0x12;
      uVar4 = uVar5 - (param_3 + uVar2) ^ uVar2 >> 0x16;
      param_1 = param_1 + 3;
    }
  }
  uVar4 = uVar4 + param_2;
  switch(uVar3) {
  case 0x17:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x38);
  case 0x16:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x15) << 0x30);
  case 0x15:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x14) << 0x28);
  case 0x14:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x13) << 0x20);
  case 0x13:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 0x12) * 0x1000000;
  case 0x12:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 0x11) * 0x10000;
  case 0x11:
    uVar4 = uVar4 + (ulong)(byte)param_1[2] * 0x100;
  case 0x10:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
  case 0xf:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30);
  case 0xe:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xd) << 0x28);
  case 0xd:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xc) << 0x20);
  case 0xc:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 0xb) * 0x1000000;
  case 0xb:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 10) * 0x10000;
  case 10:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 9) * 0x100;
  case 9:
    uVar2 = uVar2 + (byte)param_1[1];
  case 8:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 7) << 0x38);
  case 7:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30);
  case 6:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 5) << 0x28);
  case 5:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 4) << 0x20);
  case 4:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 3) * 0x1000000;
  case 3:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 2) * 0x10000;
  case 2:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 1) * 0x100;
  case 1:
    param_3 = param_3 + (byte)*param_1;
  default:
    uVar3 = param_3 - (uVar2 + uVar4) ^ uVar4 >> 0x2b;
    uVar5 = uVar2 - (uVar4 + uVar3) ^ uVar3 << 9;
    uVar2 = uVar4 - (uVar3 + uVar5) ^ uVar5 >> 8;
    uVar4 = uVar3 - (uVar5 + uVar2) ^ uVar2 >> 0x26;
    uVar3 = uVar5 - (uVar2 + uVar4) ^ uVar4 << 0x17;
    uVar2 = uVar2 - (uVar4 + uVar3) ^ uVar3 >> 5;
    uVar4 = uVar4 - (uVar3 + uVar2) ^ uVar2 >> 0x23;
    uVar3 = uVar3 - (uVar2 + uVar4) ^ uVar4 << 0x31;
    uVar2 = uVar2 - (uVar4 + uVar3) ^ uVar3 >> 0xb;
    uVar4 = uVar4 - (uVar3 + uVar2) ^ uVar2 >> 0xc;
    uVar3 = uVar3 - (uVar2 + uVar4) ^ uVar4 << 0x12;
    return uVar2 - (uVar4 + uVar3) ^ uVar3 >> 0x16;
  }
}


```

</details>

#### `FUN_1004d48e4` @ `0x1004d48e4` (149 cases)

Cases (first 30): 0, 0x77, 0x78, 0x9e, 0x9f, 1, 2, 3, 4, 5, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x76, 0x7c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x96, 0x98, 0x9a, 0x9c, 0x9d, 0xa0, 6...



<details><summary>Decompiled</summary>

```c

ulong FUN_1004d48e4(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  long *local_70;
  byte *pbStack_68;
  
  uVar6 = 0;
  pbVar9 = (byte *)(param_1 + 3);
  uVar10 = 0xffffffff;
LAB_1004d4934:
  uVar5 = uVar6;
  bVar2 = *pbVar9;
  uVar6 = (ulong)bVar2;
  iVar11 = (int)uVar5;
  switch(uVar6) {
  case 0:
  case 0x77:
  case 0x78:
  case 0x9e:
  case 0x9f:
    if (((int)uVar10 < 0) || ((int)uVar10 == iVar11)) {
      if (bVar2 != 0x77) {
        return uVar5;
      }
      uVar6 = 0;
      pbVar9 = pbVar9 + 3;
      uVar10 = uVar5;
      goto LAB_1004d4934;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x76:
  case 0x7c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x96:
  case 0x98:
  case 0x9a:
  case 0x9c:
  case 0x9d:
  case 0xa0:
    goto switchD_1004d4954_caseD_1;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    goto switchD_1004d4954_caseD_6;
  case 0xe:
    goto switchD_1004d4954_caseD_e;
  case 0xf:
  case 0x10:
    pbVar9 = pbVar9 + 2;
switchD_1004d4954_caseD_6:
    pbVar9 = pbVar9 + 1;
    uVar6 = (ulong)(iVar11 + 1);
    goto LAB_1004d4934;
  case 0x11:
  case 0x16:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x84:
  case 0x86:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0xa1:
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    pbVar9 = pbVar9 + 2;
    uVar6 = (ulong)(iVar11 + 1);
    goto LAB_1004d4934;
  case 0x29:
  case 0x36:
  case 0x43:
  case 0x50:
    puVar1 = (ushort *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 4;
    uVar6 = (ulong)(((((*puVar1 & 0xff00) << 0x10) >> 8 | (uint)*puVar1 << 0x18) >> 0x10) + iVar11);
    goto LAB_1004d4934;
  case 0x5d:
    puVar1 = (ushort *)(pbVar9 + 1);
    pbVar8 = pbVar9 + 2;
    if (1 < pbVar9[3] - 0xf) {
      pbVar8 = pbVar9;
    }
    pbVar9 = pbVar8 + 4;
    uVar6 = (ulong)(((((*puVar1 & 0xff00) << 0x10) >> 8 | (uint)*puVar1 << 0x18) >> 0x10) + iVar11);
    goto LAB_1004d4934;
  default:
    return 0xfffffffc;
  case 0x6e:
  case 0x6f:
    uVar3 = pbVar9[0x21] - 0x62;
    if (0xb < uVar3) {
      uVar6 = (ulong)(iVar11 + 1);
      pbVar9 = pbVar9 + 0x21;
      goto LAB_1004d4934;
    }
    if (((1 << (ulong)(uVar3 & 0x1f) & 0x8c0U) != 0) &&
       (uVar3 = (((*(ushort *)(pbVar9 + 0x22) & 0xff00) << 0x10) >> 8 |
                (uint)*(ushort *)(pbVar9 + 0x22) << 0x18) >> 0x10,
       uVar3 == (((*(ushort *)(pbVar9 + 0x24) & 0xff00) << 0x10) >> 8 |
                (uint)*(ushort *)(pbVar9 + 0x24) << 0x18) >> 0x10)) {
      uVar6 = (ulong)(uVar3 + iVar11);
      pbVar9 = pbVar9 + 0x26;
      goto LAB_1004d4934;
    }
    break;
  case 0x75:
    if ((int)param_2 == 0) {
      return 0xfffffffd;
    }
    pbStack_68 = (byte *)(*(long *)(param_3 + 0x28) +
                         (((((ulong)*(ushort *)(pbVar9 + 1) & 0xff00) << 0x30) >> 8 |
                          (ulong)*(ushort *)(pbVar9 + 1) << 0x38) >> 0x30));
    pbVar8 = pbStack_68;
    do {
      pbVar8 = pbVar8 + (((((ulong)*(ushort *)(pbVar8 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar8 + 1) << 0x38) >> 0x30);
    } while (*pbVar8 == 0x77);
    plVar4 = param_4;
    if ((pbStack_68 < pbVar9) && (pbVar9 < pbVar8)) {
      return 0xffffffff;
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if ((byte *)plVar4[1] == pbStack_68) {
        return 0xffffffff;
      }
    }
    local_70 = param_4;
    uVar6 = FUN_1004d48e4(pbStack_68 + 2,1,param_3,&local_70);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    goto LAB_1004d49e8;
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
    do {
      pbVar9 = pbVar9 + (((((ulong)*(ushort *)(pbVar9 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar9 + 1) << 0x38) >> 0x30);
      uVar6 = (ulong)*pbVar9;
    } while (uVar6 == 0x77);
switchD_1004d4954_caseD_1:
    uVar7 = (ulong)(byte)(&DAT_10115bc9c)[uVar6];
LAB_1004d495c:
    uVar6 = uVar5;
    pbVar9 = pbVar9 + uVar7;
    goto LAB_1004d4934;
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x85:
  case 0x87:
    uVar6 = FUN_1004d48e4(pbVar9 + (ulong)(bVar2 == 0x85) * 2,param_2,param_3,param_4);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    do {
      pbVar9 = pbVar9 + (((((ulong)*(ushort *)(pbVar9 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar9 + 1) << 0x38) >> 0x30);
    } while (*pbVar9 == 0x77);
LAB_1004d49e8:
    uVar6 = (ulong)(uint)((int)uVar6 + iVar11);
    pbVar9 = pbVar9 + 3;
    goto LAB_1004d4934;
  case 0x95:
  case 0x97:
  case 0x99:
  case 0x9b:
    uVar7 = (ulong)(byte)(&DAT_10115bc9c)[uVar6] + (ulong)pbVar9[1];
    goto LAB_1004d495c;
  }
  return 0xffffffff;
switchD_1004d4954_caseD_e:
  return 0xfffffffe;
}


```

</details>

#### `FUN_1004d50dc` @ `0x1004d50dc` (78 cases)

Cases (first 30): 6, 7, 8, 9, 10, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x1d, 0x1e, 0x1f, 0x20, 0x23, 0x24, 0x29, 0x2b, 0x30, 0x31, 0x36, 0x38, 0x3d...



<details><summary>Decompiled</summary>

```c

undefined8 FUN_1004d50dc(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long *local_70;
  byte *pbStack_68;
  
  pbVar8 = (byte *)FUN_1004da72c(param_1 + (byte)(&DAT_10115bc9c)[*param_1],1);
  while (uVar14 = 1, pbVar8 < param_2) {
    bVar2 = *pbVar8;
    uVar9 = (ulong)bVar2;
    uVar14 = 0;
    pbVar12 = pbVar8;
    switch(bVar2) {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x29:
    case 0x2b:
    case 0x30:
    case 0x31:
    case 0x36:
    case 0x38:
    case 0x3d:
    case 0x3e:
    case 0x43:
    case 0x45:
    case 0x4a:
    case 0x4b:
    case 0x50:
    case 0x52:
    case 0x57:
    case 0x58:
    case 0x5d:
    case 0x5f:
      goto switchD_1004d5164_caseD_6;
    case 0x55:
    case 0x56:
    case 0x59:
    case 0x5a:
    case 0x5e:
    case 0x60:
      bVar2 = pbVar8[1];
      goto LAB_1004d5268;
    case 0x5b:
    case 0x5c:
    case 0x61:
      bVar2 = pbVar8[3];
LAB_1004d5268:
      pbVar12 = pbVar8 + (ulong)(bVar2 - 0xf < 2) * 2;
      break;
    case 0x6e:
    case 0x6f:
      if (0xb < pbVar8[0x21] - 0x62) {
        return 0;
      }
      uVar3 = 1 << (ulong)(pbVar8[0x21] - 0x62 & 0x1f);
      if ((uVar3 & 0x533) == 0) {
        if ((uVar3 & 0x8c0) == 0) {
          return 0;
        }
        if ((*(ushort *)(pbVar8 + 0x22) & 0xff00) != 0 || (*(ushort *)(pbVar8 + 0x22) & 0xff) != 0)
        {
          return 0;
        }
      }
      break;
    case 0x75:
      uVar9 = (ulong)*(ushort *)(pbVar8 + 1);
      puVar10 = *(ushort **)(param_3 + 0x20);
      pbVar13 = (byte *)(*(long *)(param_3 + 0x28) +
                        ((((uVar9 & 0xff00) << 0x30) >> 8 | uVar9 << 0x38) >> 0x30));
      pbVar11 = pbVar13;
      if (puVar10 != (ushort *)0x0) {
        if (puVar10 < *(ushort **)(param_3 + 0x40)) {
          do {
            if ((((*puVar10 & 0xff00) << 0x10) >> 8 | (uint)*puVar10 << 0x18) >> 0x10 ==
                (int)(pbVar8 + 1) - (int)*(long *)(param_3 + 0x28)) {
              return 1;
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 < *(ushort **)(param_3 + 0x40));
        }
        if ((*(ushort *)(pbVar13 + 1) & 0xff00) == 0 && (*(ushort *)(pbVar13 + 1) & 0xff) == 0) {
          return 1;
        }
      }
      do {
        pbVar11 = pbVar11 + (((((ulong)*(ushort *)(pbVar11 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar11 + 1) << 0x38) >> 0x30);
      } while (*pbVar11 == 0x77);
      plVar4 = param_4;
      if ((pbVar8 < pbVar13) || (pbVar11 < pbVar8)) {
        for (; plVar5 = param_4, pbVar8 = pbVar13, plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
        {
          if ((byte *)plVar4[1] == pbVar13) goto LAB_1004d5378;
        }
        while (pbStack_68 = pbVar8, local_70 = plVar5,
              iVar7 = FUN_1004d50dc(pbVar13,param_2,param_3,&local_70), iVar7 == 0) {
          pbVar13 = pbVar13 + (((((ulong)*(ushort *)(pbVar13 + 1) & 0xff00) << 0x30) >> 8 |
                               (ulong)*(ushort *)(pbVar13 + 1) << 0x38) >> 0x30);
          plVar5 = local_70;
          pbVar8 = pbStack_68;
          if (*pbVar13 != 0x77) {
            return 0;
          }
        }
      }
LAB_1004d5378:
      uVar9 = 0x75;
      break;
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
      return 1;
    case 0x7d:
      do {
        pbVar12 = pbVar12 + (((((ulong)*(ushort *)(pbVar12 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar12 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar12;
      } while (*pbVar12 == 0x77);
      break;
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      uVar9 = (((ulong)*(ushort *)(pbVar8 + 1) & 0xff00) << 0x30) >> 8 |
              (ulong)*(ushort *)(pbVar8 + 1) << 0x38;
      if ((short)(uVar9 >> 0x30) == 0) {
        return 1;
      }
      if (bVar2 == 0x87) {
        pbVar12 = pbVar8 + (uVar9 >> 0x30);
        uVar9 = (ulong)*pbVar12;
        if (*pbVar12 != 0x77) break;
      }
      bVar1 = false;
      do {
        if (bVar1) {
          bVar6 = false;
          bVar1 = true;
        }
        else {
          iVar7 = FUN_1004d50dc(pbVar8,param_2,param_3,param_4);
          bVar6 = iVar7 == 0;
          bVar1 = !bVar6;
        }
        pbVar8 = pbVar8 + (((((ulong)*(ushort *)(pbVar8 + 1) & 0xff00) << 0x30) >> 8 |
                           (ulong)*(ushort *)(pbVar8 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar8;
      } while (*pbVar8 == 0x77);
      pbVar12 = pbVar8;
      if (bVar6) {
        return 0;
      }
      break;
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      do {
        pbVar12 = pbVar12 + (((((ulong)*(ushort *)(pbVar12 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar12 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar12;
      } while (*pbVar12 == 0x77);
      break;
    case 0x92:
    case 0x93:
    case 0x94:
    case 0xa1:
      pbVar12 = pbVar8 + (byte)(&DAT_10115bc9c)[uVar9];
      do {
        pbVar12 = pbVar12 + (((((ulong)*(ushort *)(pbVar12 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar12 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar12;
      } while (*pbVar12 == 0x77);
      break;
    case 0x95:
    case 0x97:
    case 0x99:
    case 0x9b:
      pbVar12 = pbVar8 + pbVar8[1];
    }
    pbVar8 = (byte *)FUN_1004da72c(pbVar12 + (byte)(&DAT_10115bc9c)[uVar9],1);
  }
switchD_1004d5164_caseD_6:
  return uVar14;
}


```

</details>

#### `FUN_1004d9134` @ `0x1004d9134` (33 cases)

Cases (first 30): 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5e, 0x5f, 0x60, 0x5b, 0x5c, 0x5d, 0x61, 0x62, 99, 100, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x71, 0x72, 0x73...



<details><summary>Decompiled</summary>

```c

void FUN_1004d9134(byte *param_1,int param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  pbVar5 = param_1;
LAB_1004d9150:
  bVar1 = *pbVar5;
  switch((uint)bVar1) {
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x5f:
  case 0x60:
    bVar2 = pbVar5[1];
    goto LAB_1004d91a0;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x61:
    bVar2 = pbVar5[3];
LAB_1004d91a0:
    pbVar5 = pbVar5 + (ulong)(bVar2 - 0xf < 2) * 2;
    break;
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
    break;
  case 0x70:
    pbVar5 = pbVar5 + (((((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar5 + 1) << 0x38) >> 0x30);
    goto LAB_1004d9150;
  case 0x75:
    goto switchD_1004d916c_caseD_75;
  default:
    uVar4 = bVar1 - 0x95;
    if (uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x55U) != 0) {
      pbVar5 = pbVar5 + pbVar5[1];
    }
    else if (bVar1 == 0) {
      return;
    }
  }
  pbVar5 = pbVar5 + (byte)(&DAT_10115bc9c)[bVar1];
  goto LAB_1004d9150;
switchD_1004d916c_caseD_75:
  puVar6 = (ushort *)(*(long *)(param_3 + 0x20) + param_4);
  puVar7 = *(ushort **)(param_3 + 0x40);
  if (puVar6 < puVar7) {
    do {
      uVar3 = (((ulong)*puVar6 & 0xff00) << 0x30) >> 8 | (ulong)*puVar6 << 0x38;
      if ((byte *)(*(long *)(param_3 + 0x28) + (uVar3 >> 0x30)) == pbVar5 + 1) {
        uVar4 = (uint)(ushort)(uVar3 >> 0x30) + param_2;
        *puVar6 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
        puVar7 = *(ushort **)(param_3 + 0x40);
        break;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar7);
  }
  if ((puVar7 <= puVar6) &&
     (uVar3 = (((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
              (ulong)*(ushort *)(pbVar5 + 1) << 0x38,
     param_1 <= (byte *)(*(long *)(param_3 + 0x28) + (uVar3 >> 0x30)))) {
    uVar4 = (uint)(ushort)(uVar3 >> 0x30) + param_2;
    *(ushort *)(pbVar5 + 1) = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
  }
  pbVar5 = pbVar5 + 3;
  goto LAB_1004d9150;
}


```

</details>

#### `FUN_1004d9e80` @ `0x1004d9e80` (27 cases)

Cases: 6, 7, 8, 9, 10, 0xb, 0xc, 0xd, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0xe, 0xf, 0x10, 0x1b, 0x1c, 0x1d, 0x1f, 0x1e, 0x20



<details><summary>Decompiled</summary>

```c

byte * FUN_1004d9e80(byte *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar3 = *param_1;
  uVar6 = (uint)bVar3;
  *param_3 = (uint)bVar3;
  param_3[1] = 0;
  pbVar4 = param_1 + 1;
  if (bVar3 - 0x21 < 0x41) {
    uVar8 = 0x21;
    if (0x2d < bVar3) {
      uVar8 = 0x2e;
    }
    uVar2 = 0x3b;
    if (bVar3 < 0x3b) {
      uVar2 = uVar8;
    }
    uVar8 = 0x48;
    if (bVar3 < 0x48) {
      uVar8 = uVar2;
    }
    uVar2 = 0x55;
    if (bVar3 < 0x55) {
      uVar2 = uVar8;
    }
    uVar8 = (bVar3 - uVar2) + 0x21;
    uVar1 = uVar8 & 0xff;
    pbVar4 = param_1 + 3;
    if (0x2d < uVar1 || (1L << ((ulong)uVar8 & 0x3f) & 0x238000000000U) == 0) {
      pbVar4 = param_1 + 1;
    }
    uVar7 = 0;
    if (0x29 < uVar1 || (1L << ((ulong)uVar8 & 0x3f) & 0x21800000000U) == 0) {
      uVar7 = (uint)(uVar1 != 0x2b);
    }
    param_3[1] = uVar7;
    if (0x3a < uVar2) {
      if (uVar2 == 0x55) {
        uVar6 = (uint)*pbVar4;
        *param_3 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
      }
      else {
        if (uVar2 == 0x48) {
          uVar8 = 0x1f;
          goto switchD_1004d9f90_caseD_20;
        }
        if (uVar2 == 0x3b) {
          uVar6 = 0x1f;
          goto LAB_1004d9fdc;
        }
      }
      goto LAB_1004d9f6c;
    }
    if (uVar2 == 0x21) {
      uVar6 = 0x1d;
LAB_1004d9fdc:
      *param_3 = uVar6;
      goto switchD_1004d9f90_caseD_1d;
    }
    if (uVar2 != 0x2e) goto LAB_1004d9f6c;
switchD_1004d9f90_caseD_1e:
    uVar8 = 0x1d;
    goto switchD_1004d9f90_caseD_20;
  }
LAB_1004d9f6c:
  uVar8 = 0x1f;
  switch(uVar6) {
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    return pbVar4;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1b:
  case 0x1c:
    return (byte *)0x0;
  case 0x1d:
  case 0x1f:
switchD_1004d9f90_caseD_1d:
    param_3[2] = (uint)*pbVar4;
    param_3[3] = 0xffffffff;
    return pbVar4 + 1;
  case 0x1e:
    goto switchD_1004d9f90_caseD_1e;
  case 0x20:
switchD_1004d9f90_caseD_20:
    *param_3 = uVar8;
    bVar3 = *pbVar4;
    param_3[2] = (uint)bVar3;
    uVar6 = (uint)*(byte *)(param_2 + (ulong)(uint)bVar3);
    param_3[3] = uVar6;
    if (bVar3 == uVar6) {
      param_3[3] = 0xffffffff;
      return pbVar4 + 1;
    }
    param_3[4] = 0xffffffff;
    return pbVar4 + 1;
  default:
    if (1 < uVar6 - 0x6e) {
      return (byte *)0x0;
    }
    pbVar5 = pbVar4 + 0x20;
    if (*pbVar5 - 0x62 < 0xc) {
      uVar6 = 1 << (ulong)(*pbVar5 - 0x62 & 0x1f);
      if ((uVar6 & 0x533) == 0) {
        if ((uVar6 & 0x20c) == 0) {
          param_3[1] = (uint)((*(ushort *)(pbVar4 + 0x21) & 0xff00) == 0 &&
                             (*(ushort *)(pbVar4 + 0x21) & 0xff) == 0);
          pbVar5 = pbVar4 + 0x25;
          goto LAB_1004da064;
        }
      }
      else {
        param_3[1] = 1;
      }
      pbVar5 = pbVar4 + 0x21;
    }
LAB_1004da064:
    param_3[2] = (int)pbVar5 - (int)pbVar4;
    return pbVar5;
  }
}


```

</details>

#### `FUN_1004da074` @ `0x1004da074` (46 cases)

Cases (first 30): 0x78, 0x79, 0x7a, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x84, 0x7b, 0x81, 0x82, 0x83, 0x85, 6, 7, 8, 9, 10, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x16, 0x1a, 0x1b, 0x1c, 0x1e...



<details><summary>Decompiled</summary>

```c

void FUN_1004da074(byte *param_1,undefined8 param_2,long param_3,uint *param_4,byte *param_5,
                  int *param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint local_9c;
  uint local_88;
  int local_84;
  uint local_80 [6];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (*param_6 == 0) {
LAB_1004da6d4:
    uVar4 = 0;
  }
  else {
    *param_6 = *param_6 + -1;
    local_9c = 1;
LAB_1004da0f4:
    do {
      for (; bVar2 = *param_1, bVar2 == 0x76; param_1 = param_1 + *pbVar5) {
        pbVar5 = &DAT_10115bd12;
LAB_1004da1e0:
      }
      while (uVar13 = (uint)bVar2, uVar13 == 0x77) {
        param_1 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
        bVar2 = *param_1;
      }
      if (uVar13 - 0x92 < 2) {
        pbVar5 = param_1 + 1;
        if ((*pbVar5 - 0x81 < 3) || (*pbVar5 == 0x85)) {
          do {
            pbVar5 = pbVar5 + (((((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
                               (ulong)*(ushort *)(pbVar5 + 1) << 0x38) >> 0x30);
          } while (*pbVar5 == 0x77);
          uVar4 = FUN_1004da074(pbVar5 + 3,param_2,param_3,param_4,param_5,param_6);
          if ((int)uVar4 != 0) {
            pbVar5 = &DAT_10115bc9c + uVar13;
            goto LAB_1004da1e0;
          }
          goto switchD_1004da268_caseD_c;
        }
        goto LAB_1004da6d4;
      }
      switch(uVar13) {
      case 0x78:
        if (param_4[1] == 0) goto LAB_1004da6d4;
        if (5 < param_1[-(((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                          (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30)] - 0x7d) {
          pbVar5 = &DAT_10115bd14;
          goto LAB_1004da1e0;
        }
        uVar4 = (ulong)local_9c;
        goto switchD_1004da268_caseD_c;
      case 0x79:
      case 0x7a:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x84:
        goto switchD_1004da150_caseD_79;
      case 0x7b:
switchD_1004da150_caseD_7b:
        uVar4 = (ulong)(param_4[1] != 0);
        goto switchD_1004da268_caseD_c;
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x85:
        local_9c = 0;
        pbVar5 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                            (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
        param_1 = param_1 + (byte)(&DAT_10115bc9c)[uVar13];
        if (*pbVar5 == 0x77) {
          do {
            uVar4 = FUN_1004da074(param_1,param_2,param_3,param_4,param_5,param_6);
            if ((int)uVar4 == 0) goto switchD_1004da268_caseD_c;
            param_1 = pbVar5 + 3;
            pbVar5 = pbVar5 + (((((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
                               (ulong)*(ushort *)(pbVar5 + 1) << 0x38) >> 0x30);
          } while (*pbVar5 == 0x77);
          local_9c = 0;
        }
        goto LAB_1004da0f4;
      }
      if (uVar13 == 0) goto switchD_1004da150_caseD_7b;
switchD_1004da150_caseD_79:
      param_1 = (byte *)FUN_1004d9e80(param_1,*(undefined8 *)(param_3 + 8),&local_88);
      uVar4 = 0;
      if (param_1 == (byte *)0x0) goto switchD_1004da268_caseD_c;
      uVar13 = *param_4;
      if (uVar13 == 0x1d) {
        puVar6 = &local_88;
        puVar8 = param_4 + 2;
        uVar13 = local_88;
LAB_1004da238:
        uVar10 = *puVar8;
        pbVar5 = param_1;
        if (puVar6 != &local_88) {
          pbVar5 = param_5;
        }
        do {
          uVar4 = 0;
          switch(uVar13) {
          case 6:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 2;
              goto joined_r0x0001004da324;
            }
            goto LAB_1004da6d4;
          case 7:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 2;
              goto joined_r0x0001004da414;
            }
            break;
          case 8:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10);
              goto joined_r0x0001004da324;
            }
            goto LAB_1004da6d4;
          case 9:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10);
              goto joined_r0x0001004da414;
            }
            break;
          case 10:
            if (0xff < uVar10) goto LAB_1004da6d4;
            bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 4;
joined_r0x0001004da324:
            if ((bVar2 & 1) == 0) goto LAB_1004da6d4;
            break;
          case 0xb:
            if (uVar10 < 0xff) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 4;
              goto joined_r0x0001004da414;
            }
            break;
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x16:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1e:
            goto switchD_1004da268_caseD_c;
          case 0x11:
          case 0x15:
          case 0x17:
          case 0x19:
            uVar4 = 0;
            if (((uVar10 - 10 < 4) || (uVar10 - 0x2028 < 2)) || (uVar10 == 0x85))
            goto switchD_1004da268_caseD_c;
            break;
          case 0x12:
            uVar4 = 0;
            if ((int)uVar10 < 0x2000) {
              if ((int)uVar10 < 0xa0) {
                if ((uVar10 != 9) && (uVar10 != 0x20)) goto switchD_1004da268_caseD_c;
              }
              else if ((uVar10 != 0xa0) && ((uVar10 != 0x1680 && (uVar10 != 0x180e))))
              goto switchD_1004da268_caseD_c;
            }
            else if ((int)uVar10 < 0x202f) {
              if (10 < uVar10 - 0x2000) goto switchD_1004da268_caseD_c;
            }
            else if (((uVar10 != 0x202f) && (uVar10 != 0x205f)) && (uVar10 != 0x3000))
            goto switchD_1004da268_caseD_c;
            break;
          case 0x13:
            uVar4 = 0;
            if ((int)uVar10 < 0x2000) {
              if ((int)uVar10 < 0xa0) {
                if ((uVar10 == 9) || (uVar10 == 0x20)) goto switchD_1004da268_caseD_c;
              }
              else if ((uVar10 == 0xa0) || ((uVar10 == 0x1680 || (uVar10 == 0x180e))))
              goto switchD_1004da268_caseD_c;
            }
            else if ((int)uVar10 < 0x202f) {
              if (uVar10 - 0x2000 < 0xb) goto switchD_1004da268_caseD_c;
            }
            else if (((uVar10 == 0x202f) || (uVar10 == 0x205f)) || (uVar10 == 0x3000))
            goto switchD_1004da268_caseD_c;
            break;
          case 0x14:
            if (((3 < uVar10 - 10) && (1 < uVar10 - 0x2028)) && (uVar10 != 0x85))
            goto LAB_1004da6d4;
            break;
          case 0x18:
            break;
          case 0x1d:
            uVar12 = puVar6[2];
            puVar11 = puVar6 + 3;
            do {
              if (uVar10 == uVar12) goto LAB_1004da6d4;
              uVar12 = *puVar11;
              puVar11 = puVar11 + 1;
            } while (uVar12 != 0xffffffff);
            break;
          case 0x1f:
            uVar12 = puVar6[2];
            puVar11 = puVar6 + 3;
            while (uVar10 != uVar12) {
              uVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              if (uVar12 == 0xffffffff) goto LAB_1004da6d4;
            }
            if (uVar10 == 0xffffffff) goto LAB_1004da6d4;
            break;
          default:
            if (uVar13 == 0x6e) {
              if (0xff < uVar10) break;
            }
            else {
              if (uVar13 != 0x6f) goto switchD_1004da268_caseD_c;
              if (0xff < uVar10) goto LAB_1004da6d4;
            }
            bVar2 = pbVar5[(ulong)(uVar10 >> 3) - (ulong)puVar6[2]] >> (ulong)(uVar10 & 7);
joined_r0x0001004da414:
            if ((bVar2 & 1) != 0) goto LAB_1004da6d4;
          }
          puVar8 = puVar8 + 1;
          uVar10 = *puVar8;
        } while (uVar10 != 0xffffffff);
      }
      else {
        puVar6 = param_4;
        puVar8 = local_80;
        if (local_88 == 0x1d) goto LAB_1004da238;
        if (((uVar13 != 0x6e) && (local_88 != 0x6e)) &&
           (((int)param_2 != 0 || ((uVar13 != 0x6f && (local_88 != 0x6f)))))) {
          uVar4 = 0;
          if ((uVar13 - 6 < 0x11) && ((5 < local_88 && (local_88 < 0x1b)))) {
            if ((&UNK_10115abe1)[(ulong)(local_88 - 6) + (ulong)(uVar13 - 6) * 0x15] != '\0')
            goto LAB_1004da6c4;
            goto LAB_1004da6d4;
          }
          goto switchD_1004da268_caseD_c;
        }
        if ((uVar13 == 0x6e) || ((pbVar5 = param_1, (int)param_2 == 0 && (uVar13 == 0x6f)))) {
          puVar6 = &local_88;
          puVar8 = param_4 + 2;
          pbVar5 = param_5;
          uVar13 = local_88;
        }
        uVar4 = 0;
        switch(uVar13) {
        case 6:
          uVar4 = 1;
        case 7:
          iVar3 = (int)uVar4;
          lVar7 = *(long *)(param_3 + 0x10) + 0x40;
          break;
        case 8:
          uVar4 = 1;
        case 9:
          iVar3 = (int)uVar4;
          lVar7 = *(long *)(param_3 + 0x10);
          break;
        case 10:
          uVar4 = 1;
        case 0xb:
          iVar3 = (int)uVar4;
          lVar7 = *(long *)(param_3 + 0x10) + 0xa0;
          break;
        default:
          if (uVar13 - 0x6e < 2) {
            pbVar1 = param_1;
            if (puVar6 != &local_88) {
              pbVar1 = param_5;
            }
            lVar7 = (long)pbVar1 - (ulong)puVar6[2];
            goto LAB_1004da6a4;
          }
          goto switchD_1004da268_caseD_c;
        }
        if (iVar3 == 0) {
LAB_1004da6a4:
          lVar9 = 0;
          do {
            if ((*(byte *)(lVar7 + lVa
// ...truncated...
```

</details>

## Phase 5: Game State Serialization

### String: `"Team"`

- `FUN_10034599c` @ `0x10034599c`
- `FUN_100345fa0` @ `0x100345fa0`
- `FUN_100345bc4` @ `0x100345bc4`
- `FUN_100345e3c` @ `0x100345e3c`
- `FUN_100345eec` @ `0x100345eec`
- `FUN_100346130` @ `0x100346130`

### String: `"Actor"`

- `FUN_10034599c` @ `0x10034599c`
- `FUN_100345fa0` @ `0x100345fa0`
- `FUN_100345bc4` @ `0x100345bc4`
- `FUN_100345e3c` @ `0x100345e3c`
- `FUN_100345eec` @ `0x100345eec`
- `FUN_100346130` @ `0x100346130`

### String: `"Ability"`

- `FUN_10034599c` @ `0x10034599c`

<details><summary>Decompiled</summary>

```c

void FUN_10034599c(long param_1,ulong param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(lVar4 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (*(char *)(*(long *)(*plVar5 + 0x38) + 0x8a) != '\0') {
    return;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  fVar8 = *(float *)(param_1 + 600);
  fVar9 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  if (param_3 == 0) {
    pcVar6 = "None";
    fVar11 = fVar7;
    fVar10 = fVar8;
    fVar12 = fVar9;
    if (param_4 == (float *)0x0) goto LAB_100345a8c;
  }
  else {
    pcVar6 = (char *)**(undefined8 **)
                       (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_3 + 0x268) * 8);
    if (param_4 == (float *)0x0) {
      fVar11 = *(float *)(param_3 + 0x250);
      fVar10 = *(float *)(param_3 + 600);
      fVar12 = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
      goto LAB_100345a8c;
    }
  }
  fVar11 = *param_4;
  fVar10 = param_4[2];
  fVar12 = param_4[1];
LAB_100345a8c:
  uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
  pcVar1 = "Left";
  if (1 < *(byte *)(param_1 + 0x264)) {
    pcVar1 = "Right";
  }
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0x76,uVar3,"UseAbility",
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                ,param_7,param_8,pcVar1,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                **(undefined8 **)(*plVar5 + 0x38),(double)fVar7,(double)fVar9,(double)fVar8,pcVar6,
                (double)fVar11,(double)fVar12,(double)fVar10);
  return;
}


```

</details>

- `FUN_100345fa0` @ `0x100345fa0`

<details><summary>Decompiled</summary>

```c

void FUN_100345fa0(long param_1,undefined8 param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
    return;
  }
  fVar6 = *(float *)(param_1 + 0x250);
  fVar7 = *(float *)(param_1 + 600);
  fVar8 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  if (param_3 == 0) {
    pcVar5 = "None";
    fVar10 = fVar6;
    fVar9 = fVar7;
    fVar11 = fVar8;
    if (param_4 == (float *)0x0) goto LAB_100346074;
  }
  else {
    if ((*(uint *)(param_3 + 0x268) < *(uint *)(DAT_101d90978 + 0x38)) &&
       (puVar4 = *(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_3 + 0x268) * 8),
       puVar4 != (undefined8 *)0x0)) {
      pcVar5 = (char *)*puVar4;
    }
    else {
      pcVar5 = "None";
    }
    if (param_4 == (float *)0x0) {
      fVar10 = *(float *)(param_3 + 0x250);
      fVar9 = *(float *)(param_3 + 600);
      fVar11 = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
      goto LAB_100346074;
    }
  }
  fVar10 = *param_4;
  fVar9 = param_4[2];
  fVar11 = param_4[1];
LAB_100346074:
  uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
  pcVar1 = "Left";
  if (1 < *(byte *)(param_1 + 0x264)) {
    pcVar1 = "Right";
  }
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0x163,uVar3,"UseItemAbility",
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                ,param_7,param_8,pcVar1,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                param_2,(double)fVar6,(double)fVar8,(double)fVar7,pcVar5,(double)fVar10,
                (double)fVar11,(double)fVar9);
  return;
}


```

</details>


### String: `"Position"`

- `FUN_10034599c` @ `0x10034599c`

<details><summary>Decompiled</summary>

```c

void FUN_10034599c(long param_1,ulong param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(lVar4 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (*(char *)(*(long *)(*plVar5 + 0x38) + 0x8a) != '\0') {
    return;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  fVar8 = *(float *)(param_1 + 600);
  fVar9 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  if (param_3 == 0) {
    pcVar6 = "None";
    fVar11 = fVar7;
    fVar10 = fVar8;
    fVar12 = fVar9;
    if (param_4 == (float *)0x0) goto LAB_100345a8c;
  }
  else {
    pcVar6 = (char *)**(undefined8 **)
                       (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_3 + 0x268) * 8);
    if (param_4 == (float *)0x0) {
      fVar11 = *(float *)(param_3 + 0x250);
      fVar10 = *(float *)(param_3 + 600);
      fVar12 = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
      goto LAB_100345a8c;
    }
  }
  fVar11 = *param_4;
  fVar10 = param_4[2];
  fVar12 = param_4[1];
LAB_100345a8c:
  uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
  pcVar1 = "Left";
  if (1 < *(byte *)(param_1 + 0x264)) {
    pcVar1 = "Right";
  }
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0x76,uVar3,"UseAbility",
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                ,param_7,param_8,pcVar1,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                **(undefined8 **)(*plVar5 + 0x38),(double)fVar7,(double)fVar9,(double)fVar8,pcVar6,
                (double)fVar11,(double)fVar12,(double)fVar10);
  return;
}


```

</details>

- `FUN_100345fa0` @ `0x100345fa0`

<details><summary>Decompiled</summary>

```c

void FUN_100345fa0(long param_1,undefined8 param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
    return;
  }
  fVar6 = *(float *)(param_1 + 0x250);
  fVar7 = *(float *)(param_1 + 600);
  fVar8 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  if (param_3 == 0) {
    pcVar5 = "None";
    fVar10 = fVar6;
    fVar9 = fVar7;
    fVar11 = fVar8;
    if (param_4 == (float *)0x0) goto LAB_100346074;
  }
  else {
    if ((*(uint *)(param_3 + 0x268) < *(uint *)(DAT_101d90978 + 0x38)) &&
       (puVar4 = *(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_3 + 0x268) * 8),
       puVar4 != (undefined8 *)0x0)) {
      pcVar5 = (char *)*puVar4;
    }
    else {
      pcVar5 = "None";
    }
    if (param_4 == (float *)0x0) {
      fVar10 = *(float *)(param_3 + 0x250);
      fVar9 = *(float *)(param_3 + 600);
      fVar11 = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
      goto LAB_100346074;
    }
  }
  fVar10 = *param_4;
  fVar9 = param_4[2];
  fVar11 = param_4[1];
LAB_100346074:
  uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
  pcVar1 = "Left";
  if (1 < *(byte *)(param_1 + 0x264)) {
    pcVar1 = "Right";
  }
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0x163,uVar3,"UseItemAbility",
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                ,param_7,param_8,pcVar1,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                param_2,(double)fVar6,(double)fVar8,(double)fVar7,pcVar5,(double)fVar10,
                (double)fVar11,(double)fVar9);
  return;
}


```

</details>

- `FUN_100345bc4` @ `0x100345bc4`

<details><summary>Decompiled</summary>

```c

void FUN_100345bc4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
  if (lVar3 == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x2f4) & 0x1005) == 0) && ((*(uint *)(lVar3 + 0x2f4) & 0x20100001) == 0)
     ) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x250);
  fVar11 = *(float *)(param_1 + 0x254);
  fVar10 = *(float *)(param_1 + 600);
  fVar12 = *(float *)(param_1 + 0x2ec);
  if (((*(uint *)(param_1 + 0x2f4) & 1) != 0) &&
     (lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c4)), lVar4 != 0)) {
    lVar3 = lVar4;
  }
  pcVar1 = "Left";
  if (1 < *(byte *)(lVar3 + 0x264)) {
    pcVar1 = "Right";
  }
  if ((ulong)(long)*(char *)(param_1 + 0x264) < 3) {
    pcVar7 = (&PTR_s_Neutral_10149dc48)[*(char *)(param_1 + 0x264)];
  }
  else {
    pcVar7 = "Unknown";
  }
  uVar8 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar3 + 0x268) * 8)
  ;
  if ((*(byte *)(lVar3 + 0x2f4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
      pcVar6 = "NPCkillNPC";
      pcVar5 = "NPC";
      goto LAB_100345cfc;
    }
    pcVar6 = "Executed";
    lVar4 = param_1;
  }
  else {
    pcVar6 = "KillActor";
    lVar4 = lVar3;
  }
  pcVar5 = (char *)FUN_100345824(*(undefined4 *)(lVar4 + 0x260));
LAB_100345cfc:
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0xba,pcVar5,pcVar6,
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Killed\": \"%s\", \"KilledTeam\": \"%s\", \"Gold\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
                ,in_x6,in_x7,pcVar1,uVar8,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),pcVar7
                ,param_2,*(uint *)(lVar3 + 0x2f4) >> 1 & 1,*(uint *)(param_1 + 0x2f4) >> 1 & 1,
                (double)fVar9,(double)(fVar12 + fVar11),(double)fVar10);
  return;
}


```

</details>


### String: `"Killed"`

- `FUN_100345bc4` @ `0x100345bc4`

<details><summary>Decompiled</summary>

```c

void FUN_100345bc4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
  if (lVar3 == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x2f4) & 0x1005) == 0) && ((*(uint *)(lVar3 + 0x2f4) & 0x20100001) == 0)
     ) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x250);
  fVar11 = *(float *)(param_1 + 0x254);
  fVar10 = *(float *)(param_1 + 600);
  fVar12 = *(float *)(param_1 + 0x2ec);
  if (((*(uint *)(param_1 + 0x2f4) & 1) != 0) &&
     (lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c4)), lVar4 != 0)) {
    lVar3 = lVar4;
  }
  pcVar1 = "Left";
  if (1 < *(byte *)(lVar3 + 0x264)) {
    pcVar1 = "Right";
  }
  if ((ulong)(long)*(char *)(param_1 + 0x264) < 3) {
    pcVar7 = (&PTR_s_Neutral_10149dc48)[*(char *)(param_1 + 0x264)];
  }
  else {
    pcVar7 = "Unknown";
  }
  uVar8 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar3 + 0x268) * 8)
  ;
  if ((*(byte *)(lVar3 + 0x2f4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
      pcVar6 = "NPCkillNPC";
      pcVar5 = "NPC";
      goto LAB_100345cfc;
    }
    pcVar6 = "Executed";
    lVar4 = param_1;
  }
  else {
    pcVar6 = "KillActor";
    lVar4 = lVar3;
  }
  pcVar5 = (char *)FUN_100345824(*(undefined4 *)(lVar4 + 0x260));
LAB_100345cfc:
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0xba,pcVar5,pcVar6,
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Killed\": \"%s\", \"KilledTeam\": \"%s\", \"Gold\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
                ,in_x6,in_x7,pcVar1,uVar8,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),pcVar7
                ,param_2,*(uint *)(lVar3 + 0x2f4) >> 1 & 1,*(uint *)(param_1 + 0x2f4) >> 1 & 1,
                (double)fVar9,(double)(fVar12 + fVar11),(double)fVar10);
  return;
}


```

</details>


### String: `"Gold"`

- `FUN_100345bc4` @ `0x100345bc4`

<details><summary>Decompiled</summary>

```c

void FUN_100345bc4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
  if (lVar3 == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x2f4) & 0x1005) == 0) && ((*(uint *)(lVar3 + 0x2f4) & 0x20100001) == 0)
     ) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x250);
  fVar11 = *(float *)(param_1 + 0x254);
  fVar10 = *(float *)(param_1 + 600);
  fVar12 = *(float *)(param_1 + 0x2ec);
  if (((*(uint *)(param_1 + 0x2f4) & 1) != 0) &&
     (lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c4)), lVar4 != 0)) {
    lVar3 = lVar4;
  }
  pcVar1 = "Left";
  if (1 < *(byte *)(lVar3 + 0x264)) {
    pcVar1 = "Right";
  }
  if ((ulong)(long)*(char *)(param_1 + 0x264) < 3) {
    pcVar7 = (&PTR_s_Neutral_10149dc48)[*(char *)(param_1 + 0x264)];
  }
  else {
    pcVar7 = "Unknown";
  }
  uVar8 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar3 + 0x268) * 8)
  ;
  if ((*(byte *)(lVar3 + 0x2f4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
      pcVar6 = "NPCkillNPC";
      pcVar5 = "NPC";
      goto LAB_100345cfc;
    }
    pcVar6 = "Executed";
    lVar4 = param_1;
  }
  else {
    pcVar6 = "KillActor";
    lVar4 = lVar3;
  }
  pcVar5 = (char *)FUN_100345824(*(undefined4 *)(lVar4 + 0x260));
LAB_100345cfc:
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0xba,pcVar5,pcVar6,
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Killed\": \"%s\", \"KilledTeam\": \"%s\", \"Gold\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
                ,in_x6,in_x7,pcVar1,uVar8,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),pcVar7
                ,param_2,*(uint *)(lVar3 + 0x2f4) >> 1 & 1,*(uint *)(param_1 + 0x2f4) >> 1 & 1,
                (double)fVar9,(double)(fVar12 + fVar11),(double)fVar10);
  return;
}


```

</details>


### String: `"IsHero"`

- `FUN_100345bc4` @ `0x100345bc4`

<details><summary>Decompiled</summary>

```c

void FUN_100345bc4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
  if (lVar3 == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x2f4) & 0x1005) == 0) && ((*(uint *)(lVar3 + 0x2f4) & 0x20100001) == 0)
     ) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x250);
  fVar11 = *(float *)(param_1 + 0x254);
  fVar10 = *(float *)(param_1 + 600);
  fVar12 = *(float *)(param_1 + 0x2ec);
  if (((*(uint *)(param_1 + 0x2f4) & 1) != 0) &&
     (lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c4)), lVar4 != 0)) {
    lVar3 = lVar4;
  }
  pcVar1 = "Left";
  if (1 < *(byte *)(lVar3 + 0x264)) {
    pcVar1 = "Right";
  }
  if ((ulong)(long)*(char *)(param_1 + 0x264) < 3) {
    pcVar7 = (&PTR_s_Neutral_10149dc48)[*(char *)(param_1 + 0x264)];
  }
  else {
    pcVar7 = "Unknown";
  }
  uVar8 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar3 + 0x268) * 8)
  ;
  if ((*(byte *)(lVar3 + 0x2f4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
      pcVar6 = "NPCkillNPC";
      pcVar5 = "NPC";
      goto LAB_100345cfc;
    }
    pcVar6 = "Executed";
    lVar4 = param_1;
  }
  else {
    pcVar6 = "KillActor";
    lVar4 = lVar3;
  }
  pcVar5 = (char *)FUN_100345824(*(undefined4 *)(lVar4 + 0x260));
LAB_100345cfc:
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0xba,pcVar5,pcVar6,
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Killed\": \"%s\", \"KilledTeam\": \"%s\", \"Gold\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
                ,in_x6,in_x7,pcVar1,uVar8,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),pcVar7
                ,param_2,*(uint *)(lVar3 + 0x2f4) >> 1 & 1,*(uint *)(param_1 + 0x2f4) >> 1 & 1,
                (double)fVar9,(double)(fVar12 + fVar11),(double)fVar10);
  return;
}


```

</details>


### String: `"Level"`

- `FUN_100345eec` @ `0x100345eec`

<details><summary>Decompiled</summary>

```c

void FUN_100345eec(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0)) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0xe4,uVar3,"LevelUp",
                  "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Level\": %d, \"LifetimeGold\": %d }",
                  in_x6,in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                  param_2,(int)*(float *)(*(long *)(param_1 + 0x40) + 0x324));
  }
  return;
}


```

</details>

- `FUN_100346130` @ `0x100346130`

<details><summary>Decompiled</summary>

```c

void FUN_100346130(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 != 0) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0x172,uVar3,"TalentEquipped",
                  "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Talent\": \"%s\", \"Level\": %d }",in_x6
                  ,in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                  param_2,param_3);
  }
  return;
}


```

</details>


### String: `"LifetimeGold"`

- `FUN_100345eec` @ `0x100345eec`

<details><summary>Decompiled</summary>

```c

void FUN_100345eec(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0)) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0xe4,uVar3,"LevelUp",
                  "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Level\": %d, \"LifetimeGold\": %d }",
                  in_x6,in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                  param_2,(int)*(float *)(*(long *)(param_1 + 0x40) + 0x324));
  }
  return;
}


```

</details>


### String: `"Talent"`

- `FUN_100346130` @ `0x100346130`

<details><summary>Decompiled</summary>

```c

void FUN_100346130(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 != 0) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0x172,uVar3,"TalentEquipped",
                  "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Talent\": \"%s\", \"Level\": %d }",in_x6
                  ,in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                  param_2,param_3);
  }
  return;
}


```

</details>


### String: `getNextSequenceNumber`

- `annotateEvent:` @ `0x101140934`

<details><summary>Decompiled</summary>

```c

/* Function Stack Size: 0x18 bytes */

void Amplitude::annotateEvent_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long_long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *pcStack_80;
  cfstringStruct *local_78;
  cfstringStruct *pcStack_70;
  long local_68;
  
  plVar12 = (long *)PTR____stack_chk_guard_101444218;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"setValue:forKey:",*(undefined8 *)(param_1 + (long)_userId),&cf_user_id);
  _objc_msgSend(uVar1,"setValue:forKey:",*(undefined8 *)(param_1 + (long)_deviceId),&cf_device_id);
  _objc_msgSend(uVar1,"setValue:forKey:",&cf_iOS,&cf_platform);
  lVar11 = (long)_deviceInfo;
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"appVersion");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_version_name);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"osName");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_os_name);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"osVersion");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_os_version);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"model");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_device_model);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"manufacturer");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_device_manufacturer);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"carrier");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_carrier);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"country");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_country);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"language");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_language);
  _objc_release(uVar2);
  local_88 = &cf_name;
  pcStack_80 = &cf_version;
  local_78 = &cf_amplitude_ios;
  pcStack_70 = &cf_3_2_0;
  _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_78,
                &local_88,2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_library);
  _objc_msgSend(&objc::class_t::AMPUtils,"generateUUID");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar3,&cf_uuid);
  _objc_release(uVar3);
  lVar4 = getNextSequenceNumber(param_1,(SEL)"getNextSequenceNumber");
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",lVar4);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar3,&cf_sequence_number);
  _objc_release(uVar3);
  _objc_msgSend(uVar1,"valueForKey:",&cf_api_properties);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"advertiserID");
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    _objc_msgSend(uVar3,"setValue:forKey:",lVar5,&cf_ios_idfa);
  }
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"vendorID");
  lVar11 = _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    _objc_msgSend(uVar3,"setValue:forKey:",lVar11,&cf_ios_idfv);
  }
  lVar13 = (long)_lastKnownLocation;
  if (*(long *)(param_1 + lVar13) != 0) {
    uVar6 = _objc_retain(*(undefined8 *)(param_1 + (long)_locationManager));
    _objc_sync_enter();
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar8 = _NSSelectorFromString(&cf_coordinate);
    _objc_msgSend(*(undefined8 *)(param_1 + lVar13),"methodSignatureForSelector:",uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSInvocation,"invocationWithMethodSignature:",uVar9);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar10,"setTarget:",*(undefined8 *)(param_1 + lVar13));
    _objc_msgSend(uVar10,"setSelector:",uVar8);
    _objc_msgSend(uVar10,"invoke");
    _objc_msgSend(uVar10,"getReturnValue:",&local_98);
    _objc_msgSend(local_98,&_OBJC_CLASS___NSNumber,"numberWithDouble:");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar7,"setValue:forKey:",uVar8,&cf_lat);
    _objc_release(uVar8);
    _objc_msgSend(local_90,&_OBJC_CLASS___NSNumber,"
// ...truncated...
```

</details>


## Phase 6: Network Keywords

### `pingHostPortInfo` (1 refs)

- `FUN_100505520` @ `0x100505520`

### `host` (34 refs)

- `FUN_10001e524` @ `0x10001e524`
- `FUN_100071508` @ `0x100071508`
- `FUN_1000516e8` @ `0x1000516e8`
- `FUN_100462630` @ `0x100462630`
- `FUN_10001e1cc` @ `0x10001e1cc`
- `FUN_10051abec` @ `0x10051abec`
- `FUN_100109c74` @ `0x100109c74`
- `FUN_100109d70` @ `0x100109d70`
- `FUN_1004f84b4` @ `0x1004f84b4`
- `FUN_100505520` @ `0x100505520`
- `FUN_100116f88` @ `0x100116f88`
- `FUN_1002f7054` @ `0x1002f7054`
- `FUN_1004be784` @ `0x1004be784`
- `FUN_100358624` @ `0x100358624`
- `FUN_100358920` @ `0x100358920`
- `FUN_1003a9b94` @ `0x1003a9b94`
- `FUN_1003a9fd4` @ `0x1003a9fd4`
- `FUN_1003588c0` @ `0x1003588c0`
- `FUN_1003588f0` @ `0x1003588f0`
- `FUN_1004a081c` @ `0x1004a081c`
- `FUN_1003ec3e8` @ `0x1003ec3e8`
- `FUN_1003ec0a0` @ `0x1003ec0a0`
- `FUN_1003ec38c` @ `0x1003ec38c`
- `FUN_1003fd388` @ `0x1003fd388`
- `FUN_10048737c` @ `0x10048737c`
- `FUN_1004f2c38` @ `0x1004f2c38`
- `FUN_1010db2f8` @ `0x1010db2f8`
- `FUN_1010e4bb0` @ `0x1010e4bb0`
- `FUN_1010e25cc` @ `0x1010e25cc`
- `FUN_1010ee560` @ `0x1010ee560`
- `FUN_1010f5cc4` @ `0x1010f5cc4`
- `FUN_1010fbec8` @ `0x1010fbec8`
- `FUN_1011014f8` @ `0x1011014f8`
- `FUN_101109560` @ `0x101109560`

### `port` (85 refs)

- `FUN_1000c2114` @ `0x1000c2114`
- `FUN_1001fb8ec` @ `0x1001fb8ec`
- `FUN_1001eba8c` @ `0x1001eba8c`
- `FUN_1000ea5b4` @ `0x1000ea5b4`
- `FUN_1002d8258` @ `0x1002d8258`
- `FUN_1001fc3d8` @ `0x1001fc3d8`
- `FUN_100212ff8` @ `0x100212ff8`
- `FUN_100197858` @ `0x100197858`
- `FUN_100217c20` @ `0x100217c20`
- `FUN_1002d6c0c` @ `0x1002d6c0c`
- `FUN_1001d531c` @ `0x1001d531c`
- `FUN_10051abec` @ `0x10051abec`
- `FUN_100109c74` @ `0x100109c74`
- `FUN_100109d70` @ `0x100109d70`
- `FUN_100505520` @ `0x100505520`
- `FUN_10010522c` @ `0x10010522c`
- `FUN_100105398` @ `0x100105398`
- `FUN_100116f88` @ `0x100116f88`
- `FUN_10012cf28` @ `0x10012cf28`
- `FUN_10014df88` @ `0x10014df88`
- `FUN_1002d8130` @ `0x1002d8130`
- `FUN_100198754` @ `0x100198754`
- `FUN_1002af074` @ `0x1002af074`
- `FUN_1002e79a4` @ `0x1002e79a4`
- `FUN_1002d70b4` @ `0x1002d70b4`
- `FUN_10019719c` @ `0x10019719c`
- `FUN_1002b5b58` @ `0x1002b5b58`
- `FUN_100198700` @ `0x100198700`
- `FUN_10029b664` @ `0x10029b664`
- `FUN_100247c0c` @ `0x100247c0c`
- `FUN_1002ee480` @ `0x1002ee480`
- `FUN_100317190` @ `0x100317190`
- `FUN_1003187d8` @ `0x1003187d8`
- `FUN_1004be784` @ `0x1004be784`
- `FUN_100381be8` @ `0x100381be8`
- `FUN_10035ba2c` @ `0x10035ba2c`
- `FUN_1003f0c58` @ `0x1003f0c58`
- `FUN_10043fbb8` @ `0x10043fbb8`
- `FUN_10043fb7c` @ `0x10043fb7c`
- `FUN_1004a081c` @ `0x1004a081c`
- `FUN_100352e00` @ `0x100352e00`
- `FUN_1004159c0` @ `0x1004159c0`
- `FUN_100443914` @ `0x100443914`
- `FUN_1003f0b28` @ `0x1003f0b28`
- `FUN_1003f0da8` @ `0x1003f0da8`
- `FUN_10040b6c4` @ `0x10040b6c4`
- `FUN_100444164` @ `0x100444164`
- `FUN_100390a30` @ `0x100390a30`
- `FUN_1004220c4` @ `0x1004220c4`
- `FUN_1004d34c0` @ `0x1004d34c0`
- `FUN_1004e14f0` @ `0x1004e14f0`
- `FUN_1004f5058` @ `0x1004f5058`
- `FUN_1004ffa94` @ `0x1004ffa94`
- `FUN_1004f2c38` @ `0x1004f2c38`
- `FUN_1005bdf98` @ `0x1005bdf98`
- `FUN_1010d4d00` @ `0x1010d4d00`
- `FUN_1010d965c` @ `0x1010d965c`
- `FUN_1010db2f8` @ `0x1010db2f8`
- `FUN_1010dcdd8` @ `0x1010dcdd8`
- `FUN_1010dd444` @ `0x1010dd444`
- `FUN_1010ddc80` @ `0x1010ddc80`
- `FUN_1010da460` @ `0x1010da460`
- `FUN_1010deb88` @ `0x1010deb88`
- `FUN_1010e2304` @ `0x1010e2304`
- `FUN_1010e25cc` @ `0x1010e25cc`
- `FUN_1010e557c` @ `0x1010e557c`
- `FUN_1010e8a7c` @ `0x1010e8a7c`
- `FUN_1010e9874` @ `0x1010e9874`
- `FUN_1010e9c00` @ `0x1010e9c00`
- `FUN_1010edf04` @ `0x1010edf04`
- `FUN_1010ee560` @ `0x1010ee560`
- `FUN_1010f3fe4` @ `0x1010f3fe4`
- `FUN_1010f5830` @ `0x1010f5830`
- `FUN_1010fc568` @ `0x1010fc568`
- `FUN_1010f815c` @ `0x1010f815c`
- `FUN_1010fb378` @ `0x1010fb378`
- `FUN_1010f93f8` @ `0x1010f93f8`
- `FUN_1010fd3b0` @ `0x1010fd3b0`
- `FUN_1010fa64c` @ `0x1010fa64c`
- `FUN_1010fe09c` @ `0x1010fe09c`
- `FUN_101105744` @ `0x101105744`
- `FUN_1010b59cc` @ `0x1010b59cc`
- `readObject:objectName:class:` @ `0x10112019c`
- `writeObject:fileName:objectName:` @ `0x101120648`
- `deleteFileWithName:` @ `0x101124a10`

### `getNextSequenceNumber` (1 refs)

- `annotateEvent:` @ `0x101140934`

### `Quality_MatchEnd_Ping_Report` (1 refs)

- `FUN_10010522c` @ `0x10010522c`

### `initializeNetworkInfoAndCarrier` (1 refs)

- `initialize` @ `0x10111f480`

