# Sidebar Builder Analysis

## Phase 1: Vtable Slot Identification

### HOME vtable at 0x10146c858

  slot[4] (offset 0x20): icon1 = 0x1001f3b80
  slot[5] (offset 0x28): label1 = 0x1001f38b0
  slot[18] (offset 0x90): icon2 = 0x1001f3bb4
  slot[19] (offset 0x98): label2 = 0x1001f38c0

### HEROES_BAG vtable at 0x10146dbe0

  slot[8] (offset 0x40): icon1 = 0x1001f61e8
  slot[9] (offset 0x48): label1 = 0x1001f5f1c

Icon slot 1: 8 (offset 0x40)
Icon slot 2: 18 (offset 0x90)
Label slot 1: 9 (offset 0x48)
Label slot 2: 19 (offset 0x98)

## Phase 2: Callers of Icon/Label Getters

## Phase 3: Panel Vtable Dumps

### HOME (0x10146c858)

  [0] 0x1001f3778 FUN_1001f3778
  [1] 0x1001f37e4 FUN_1001f37e4
  [2] 0x1001f3704 thunk_FUN_1001f3570
  [3] 0x1001f3708 FUN_1001f3708
  [4] 0x1001f3b80 FUN_1001f3b80
  [5] 0x1001f38b0 FUN_1001f38b0
  [6] 0x1001f38d0 FUN_1001f38d0
  [7] 0x1001f3b8c FUN_1001f3b8c
  [8] 0x1001f3b9c FUN_1001f3b9c
  [9] 0x1001f3810 FUN_1001f3810
  [10] 0x1001f3888 FUN_1001f3888
  [13] 0x1001f3ba4 FUN_1001f3ba4
  [14] 0x1001f3880 FUN_1001f3880
  [15] 0x1001f3bac FUN_1001f3bac
  [16] 0x1001f389c FUN_1001f389c
  [17] 0x1001f3bb0 FUN_1001f3bb0
  [18] 0x1001f3bb4 FUN_1001f3bb4
  [19] 0x1001f38c0 FUN_1001f38c0
  [20] 0x1001f3928 thunk_FUN_1001f38d0
  [21] 0x1001f3bc0 FUN_1001f3bc0
  [24] 0x1001f3bd0 FUN_1001f3bd0
  [27] 0x1001f3bd0 FUN_1001f3bd0
  [36] 0x1001f40cc FUN_1001f40cc
  [37] 0x1001f4094 thunk_FUN_1001f3fd8
  [38] 0x1001f40a0 FUN_1001f40a0
  [39] 0x1001f40d0 FUN_1001f40d0
  [42] 0x1001f4098 FUN_1001f4098
  [43] 0x1001f40b4 FUN_1001f40b4
  [44] 0x1001f4100 FUN_1001f4100
  [45] 0x10016b94c FUN_10016b94c

### HEROES_BAG (0x10146dbe0)

  [0] 0x1001f58f4 FUN_1001f58f4
  [1] 0x1001f5938 FUN_1001f5938
  [4] 0x1001f5ebc thunk_FUN_1001f5dd4
  [5] 0x1001f5ec8 FUN_1001f5ec8
  [6] 0x1001f5ef4 FUN_1001f5ef4
  [7] 0x1001f61e0 FUN_1001f61e0
  [8] 0x1001f61e8 FUN_1001f61e8
  [9] 0x1001f5f1c FUN_1001f5f1c
  [10] 0x1001f5f3c FUN_1001f5f3c
  [11] 0x1001f61f4 FUN_1001f61f4
  [12] 0x1001f6208 FUN_1001f6208
  [13] 0x1001f621c FUN_1001f621c
  [14] 0x1001f6230 FUN_1001f6230
  [17] 0x1001f5ec0 FUN_1001f5ec0
  [18] 0x1001f5edc FUN_1001f5edc
  [19] 0x100031a90 FUN_100031a90
  [20] 0x1001f5f08 FUN_1001f5f08
  [21] 0x100031a94 FUN_100031a94
  [22] 0x100031a98 FUN_100031a98
  [23] 0x100031a9c FUN_100031a9c
  [24] 0x100031aa0 FUN_100031aa0
  [25] 0x100031aa4 FUN_100031aa4
  [26] 0x100031aa8 FUN_100031aa8
  [27] 0x100031aac FUN_100031aac
  [28] 0x100031ab0 FUN_100031ab0
  [29] 0x100031ab4 FUN_100031ab4
  [30] 0x100031ab8 FUN_100031ab8
  [31] 0x100031abc FUN_100031abc
  [32] 0x100031ac0 FUN_100031ac0
  [33] 0x100031ac4 FUN_100031ac4
  [34] 0x100031ac8 FUN_100031ac8
  [35] 0x100031acc FUN_100031acc
  [36] 0x100031ad0 FUN_100031ad0
  [37] 0x100031ad4 FUN_100031ad4
  [38] 0x100031ad8 FUN_100031ad8
  [39] 0x100031adc FUN_100031adc
  [40] 0x100031ae0 FUN_100031ae0
  [41] 0x100031ae4 FUN_100031ae4
  [42] 0x100031ae8 FUN_100031ae8
  [43] 0x100031aec FUN_100031aec
  [44] 0x100031af0 FUN_100031af0
  [45] 0x100031af4 FUN_100031af4
  [46] 0x100031af8 FUN_100031af8
  [47] 0x100031afc FUN_100031afc
  [48] 0x100031b00 FUN_100031b00
  [49] 0x100031b04 FUN_100031b04

## Phase 4: Find MARKET Panel Vtable

  main_nav_market getter at __DATA 0x101478b10 → vtable base ≈ 0x101478ad0
  PARTY icon getter at __DATA 0x10147a170 → vtable base ≈ 0x10147a130
  SOCIAL(PEOPLE) icon getter at __DATA 0x1014719f8 → vtable base ≈ 0x1014719b8
  SOCIAL(FRIENDS) icon getter at __DATA 0x10147c7c8 → vtable base ≈ 0x10147c788

## Phase 5: Tab Name Registration (FUN_1001fd688)

```c

code * FUN_1001fd570(code *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146ef88;
  operator_new(0x8c0);
  lVar4 = thunk_FUN_1002c4778();
  *(long *)(param_1 + 8) = lVar4;
  *(code **)(lVar4 + 0xd8) = param_1;
  pcVar8 = param_1 + 0x10;
  *(undefined ***)pcVar8 = &PTR_FUN_10146c930;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10016b764(param_1 + 0x28);
  FUN_10014f4a0(param_1 + 0x40);
  FUN_1004f0a20(param_1 + 0x58);
  *(undefined ***)param_1 = &PTR_FUN_10146eb18;
  *(undefined ***)pcVar8 = &PTR_FUN_10146eb78;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146eb90;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_10146ebc0;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_10146ef58;
  pcVar1 = param_1 + 0x70;
  FUN_1001fc960(pcVar1);
  FUN_1001fd410(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0x130] = (code)0x1;
  *(undefined4 *)(param_1 + 0x131) = 0;
  *(undefined2 *)(param_1 + 0x135) = 0;
  pcStack_58 = thunk_FUN_1001fe0d4;
  local_60 = param_1;
  FUN_100643618(0,&local_60,0,1);
  FUN_1002c5038(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78));
  FUN_1002c5088(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xa8));
  FUN_1001fc9bc(pcVar1,param_1 + 0xa0);
  FUN_1001dac1c(pcVar8,"HOME",param_1,thunk_FUN_1001fedec);
  FUN_1001dac1c(pcVar8,"PARTY",param_1,FUN_1001ff8e4);
  FUN_1001dac1c(pcVar8,"MARKET",param_1,FUN_1001ff8fc);
  FUN_1001dac1c(pcVar8,"HEROES",param_1,thunk_FUN_1001feee8);
  FUN_1001dac1c(pcVar8,"ACADEMY",param_1,thunk_FUN_1001fef3c);
  FUN_1001dac1c(pcVar8,"NEWS",param_1,thunk_FUN_1001fefac);
  FUN_1001dac1c(pcVar8,"FRIENDS",param_1,FUN_1001ff920);
  FUN_1001dac1c(pcVar8,"PEOPLE",param_1,thunk_FUN_1001ff088);
  FUN_1001dac1c(pcVar8,"PRACTICE",param_1,FUN_1001ff93c);
  FUN_1001dac1c(pcVar8,"PURCHASESKU",param_1,FUN_1001ff954);
  FUN_1001dac1c(pcVar8,"PROFILE",param_1,FUN_1001ff96c);
  local_38 = DAT_101d918ac;
  local_60 = thunk_FUN_1001fe4cc;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d918a8;
  local_60 = thunk_FUN_1001fe744;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d23684;
  local_60 = thunk_FUN_1001fe5c8;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff26c;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = FUN_1001ff988;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x40,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff2c4;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x50,&local_60);
  uVar5 = FUN_1000fd5e8();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001febf8;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(uVar5,&local_60);
  lVar4 = FUN_10032a0bc();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001febf8;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&local_60);
  FUN_100326da8();
  FUN_10031a918();
  FUN_10031d448();
  operator_new(0x38);
  uVar5 = thunk_FUN_1001f3424();
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  operator_new(0x2cf68);
  uVar5 = thunk_FUN_100248d18();
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    operator_new(0x9ca0);
    uVar5 = thunk_FUN_100242e6c();
    *(undefined8 *)(param_1 + 0x100) = uVar5;
  }
  operator_new(0x60);
  lVar7 = thunk_FUN_1001f59e8();
  *(long *)(param_1 + 0x108) = lVar7;
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  *(long *)(param_1 + 0xb0) = lVar4;
  *(long *)(param_1 + 0xb8) = lVar7 + 0x28;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    *(long *)(param_1 + 0xc0) = lVar4;
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  FUN_1001fc9c4(pcVar1,lVar4,0);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar4 = *(long *)(param_1 + 0x108) + 0x28;
  }
  FUN_1001fc9c4(pcVar1,lVar4,1);
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    FUN_1001fc9c4(pcVar1,lVar4,2);
  }
  iVar3 = FUN_100126b6c();
  if (iVar3 == 0) {
    operator_new(0x137218);
    lVar4 = thunk_FUN_100266a50();
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = lVar4 + 0x2c48;
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 5;
  }
  else {
    operator_new(0x160);
    uVar5 = thunk_FUN_10020cfb8();
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar6 = FUN_100131560();
    if ((uVar6 & 1) != 0) goto LAB_1001fda40;
    lVar4 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0) + 0x10;
    }
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 4;
  }
  FUN_1001fc9c4(pcVar1,lVar4,uVar5);
LAB_1001fda40:
  uVar2 = DAT_101d2365c;
  local_38 = DAT_101d2365c;
  local_60 = FUN_1001fdb84;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar4 = FUN_10016c2f0();
  FUN_1001fdbb8(param_1,0 < *(int *)(lVar4 + 0x38));
  lVar4 = FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  local_38 = uVar2;
  local_60 = FUN_1001fdb84;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(lVar4 + 8,&local_60);
  lVar4 = FUN_10030df60();
  local_60 = (code *)0x0;
  local_48 = FUN_1001ffa48;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001ff9c8(lVar4 + 0x18,&local_60);
  lVar4 = FUN_10032523c();
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001ff430;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_100031f58(lVar4 + 0x40,&local_60);
  uVar5 = FUN_1000fd5d8();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff5c0;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(uVar5,&local_60);
  local_38 = DAT_101d237a0;
  local_60 = FUN_1001fdc74;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  iVar3 = FUN_1001311d4();
  if (iVar3 != 0) {
    FUN_1001fdcb4(param_1,0);
    FUN_1002a6d84(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8));
  }
  return param_1;
}


```


Callers (1):
  thunk_FUN_1001fd570 @ 0x1001fdd24
```c

code * thunk_FUN_1001fd570(code *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146ef88;
  operator_new(0x8c0);
  lVar4 = thunk_FUN_1002c4778();
  *(long *)(param_1 + 8) = lVar4;
  *(code **)(lVar4 + 0xd8) = param_1;
  pcVar8 = param_1 + 0x10;
  *(undefined ***)pcVar8 = &PTR_FUN_10146c930;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10016b764(param_1 + 0x28);
  FUN_10014f4a0(param_1 + 0x40);
  FUN_1004f0a20(param_1 + 0x58);
  *(undefined ***)param_1 = &PTR_FUN_10146eb18;
  *(undefined ***)pcVar8 = &PTR_FUN_10146eb78;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146eb90;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_10146ebc0;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_10146ef58;
  pcVar1 = param_1 + 0x70;
  FUN_1001fc960(pcVar1);
  FUN_1001fd410(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0x130] = (code)0x1;
  *(undefined4 *)(param_1 + 0x131) = 0;
  *(undefined2 *)(param_1 + 0x135) = 0;
  pcStack_58 = thunk_FUN_1001fe0d4;
  pcStack_60 = param_1;
  FUN_100643618(0,&pcStack_60,0,1);
  FUN_1002c5038(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78));
  FUN_1002c5088(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xa8));
  FUN_1001fc9bc(pcVar1,param_1 + 0xa0);
  FUN_1001dac1c(pcVar8,"HOME",param_1,thunk_FUN_1001fedec);
  FUN_1001dac1c(pcVar8,"PARTY",param_1,FUN_1001ff8e4);
  FUN_1001dac1c(pcVar8,"MARKET",param_1,FUN_1001ff8fc);
  FUN_1001dac1c(pcVar8,"HEROES",param_1,thunk_FUN_1001feee8);
  FUN_1001dac1c(pcVar8,"ACADEMY",param_1,thunk_FUN_1001fef3c);
  FUN_1001dac1c(pcVar8,"NEWS",param_1,thunk_FUN_1001fefac);
  FUN_1001dac1c(pcVar8,"FRIENDS",param_1,FUN_1001ff920);
  FUN_1001dac1c(pcVar8,"PEOPLE",param_1,thunk_FUN_1001ff088);
  FUN_1001dac1c(pcVar8,"PRACTICE",param_1,FUN_1001ff93c);
  FUN_1001dac1c(pcVar8,"PURCHASESKU",param_1,FUN_1001ff954);
  FUN_1001dac1c(pcVar8,"PROFILE",param_1,FUN_1001ff96c);
  uStack_38 = DAT_101d918ac;
  pcStack_60 = thunk_FUN_1001fe4cc;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d918a8;
  pcStack_60 = thunk_FUN_1001fe744;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d23684;
  pcStack_60 = thunk_FUN_1001fe5c8;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff26c;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = FUN_1001ff988;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x40,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff2c4;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x50,&pcStack_60);
  uVar5 = FUN_1000fd5e8();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001febf8;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(uVar5,&pcStack_60);
  lVar4 = FUN_10032a0bc();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001febf8;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&pcStack_60);
  FUN_100326da8();
  FUN_10031a918();
  FUN_10031d448();
  operator_new(0x38);
  uVar5 = thunk_FUN_1001f3424();
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  operator_new(0x2cf68);
  uVar5 = thunk_FUN_100248d18();
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    operator_new(0x9ca0);
    uVar5 = thunk_FUN_100242e6c();
    *(undefined8 *)(param_1 + 0x100) = uVar5;
  }
  operator_new(0x60);
  lVar7 = thunk_FUN_1001f59e8();
  *(long *)(param_1 + 0x108) = lVar7;
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  *(long *)(param_1 + 0xb0) = lVar4;
  *(long *)(param_1 + 0xb8) = lVar7 + 0x28;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    *(long *)(param_1 + 0xc0) = lVar4;
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  FUN_1001fc9c4(pcVar1,lVar4,0);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar4 = *(long *)(param_1 + 0x108) + 0x28;
  }
  FUN_1001fc9c4(pcVar1,lVar4,1);
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    FUN_1001fc9c4(pcVar1,lVar4,2);
  }
  iVar3 = FUN_100126b6c();
  if (iVar3 == 0) {
    operator_new(0x137218);
    lVar4 = thunk_FUN_100266a50();
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = lVar4 + 0x2c48;
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 5;
  }
  else {
    operator_new(0x160);
    uVar5 = thunk_FUN_10020cfb8();
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar6 = FUN_100131560();
    if ((uVar6 & 1) != 0) goto LAB_1001fda40;
    lVar4 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0) + 0x10;
    }
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 4;
  }
  FUN_1001fc9c4(pcVar1,lVar4,uVar5);
LAB_1001fda40:
  uVar2 = DAT_101d2365c;
  uStack_38 = DAT_101d2365c;
  pcStack_60 = FUN_1001fdb84;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar4 = FUN_10016c2f0();
  FUN_1001fdbb8(param_1,0 < *(int *)(lVar4 + 0x38));
  lVar4 = FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  uStack_38 = uVar2;
  pcStack_60 = FUN_1001fdb84;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(lVar4 + 8,&pcStack_60);
  lVar4 = FUN_10030df60();
  pcStack_60 = (code *)0x0;
  pcStack_48 = FUN_1001ffa48;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001ff9c8(lVar4 + 0x18,&pcStack_60);
  lVar4 = FUN_10032523c();
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff430;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_100031f58(lVar4 + 0x40,&pcStack_60);
  uVar5 = FUN_1000fd5d8();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff5c0;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(uVar5,&pcStack_60);
  uStack_38 = DAT_101d237a0;
  pcStack_60 = FUN_1001fdc74;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  iVar3 = FUN_1001311d4();
  if (iVar3 != 0) {
    FUN_1001fdcb4(param_1,0);
    FUN_1002a6d84(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8));
  }
  return param_1;
}


```


## Phase 6: FUN_1001dac1c (tab registration)

```c

void FUN_1001dac1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *local_78 [2];
  char local_61;
  void *local_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_48 = 0;
  lStack_50 = 0;
  FUN_10001549c(local_78);
  std::string::operator=((string *)&local_60,(string *)local_78);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  local_48 = param_3;
  local_40 = param_4;
  FUN_1001daca0(param_1 + 8,&local_60);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  return;
}


```


Callers (4):

  FUN_1001fd570 @ 0x1001fd570
  FUN_1001f59e8 @ 0x1001f59e8
  FUN_100266a50 @ 0x100266a50
  FUN_1001f3424 @ 0x1001f3424
