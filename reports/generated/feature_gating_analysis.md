# Feature Flag Gating System

Deep analysis of feature flag gating in the E.V.I.L. engine.

---

### `featuresEnabled`

**String addresses:** `0x1013dcc43`

#### `FUN_1001346e4` @ `0x1001346e4`

Referenced from: `0x1001346ec`

**Calls:** `FUN_10001549c`

```c

void FUN_1001346e4(undefined8 param_1)

{
  FUN_10001549c(param_1,"featuresEnabled");
  return;
}


```

**Caller functions:**


---

### `visibilityFlags`

**String addresses:** `0x1013dd478`

#### `FUN_10013edfc` @ `0x10013edfc`

Referenced from: `0x10013f43c`

**Calls:** `FUN_10001549c`, `compare`, `FUN_1000e87dc`, `operator.delete[]`, `FUN_10013f698`, `FUN_1000e86c0`, `FUN_1000e8538`, `FUN_1004e3120`, `operator=`, `FUN_1001376a0`, `operator.delete`, `FUN_1004e3bc4`, `FUN_10014237c`

```c

void FUN_10013edfc(long param_1,long param_2,long *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  char *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  byte local_61;
  undefined4 local_60;
  char *local_58;
  void *local_50;
  undefined4 local_48;
  char local_41;
  
  FUN_10014237c(param_1);
  plVar8 = (long *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x77) < '\0') {
    plVar8 = (long *)*plVar8;
  }
  lVar3 = FUN_1000e86c0(param_3,"id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_68 = 0x100005;
    local_78 = "id";
    local_70 = (undefined1 *)0x2;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_68 = 0x100005;
      local_78 = "id";
      local_70 = (undefined1 *)0x2;
      plVar8 = (long *)FUN_1000e87dc(param_3,&local_78);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_10001549c(&local_78,plVar8);
  std::string::operator=((string *)(param_1 + 0x60),(string *)&local_78);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  lVar3 = FUN_1000e86c0(param_3,"discount_label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_68 = 0x100005;
    local_78 = "discount_label";
    local_70 = (undefined1 *)0xe;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      lVar3 = FUN_1000e86c0(param_3,"discount_label");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013ef74:
        pcVar5 = "";
      }
      else {
        local_68 = 0x100005;
        local_78 = "discount_label";
        local_70 = (undefined1 *)0xe;
        lVar3 = FUN_1000e87dc(param_3,&local_78);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013ef74;
        local_68 = 0x100005;
        local_78 = "discount_label";
        local_70 = (undefined1 *)0xe;
        pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
        if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
          pcVar5 = *(char **)pcVar5;
        }
      }
      FUN_10001549c(&local_78,pcVar5);
      FUN_1001376a0(&local_78,param_1 + 0x78);
      if ((char)local_61 < '\0') {
        operator_delete(local_78);
      }
      lVar3 = FUN_1000e86c0(param_3,"discount_label_interpolator");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
        local_68 = 0x100005;
        local_78 = "discount_label_interpolator";
        local_70 = &DAT_0000001b;
        lVar3 = FUN_1000e87dc(param_3,&local_78);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          FUN_1004e3120(&local_58,"[DISCOUNT]");
          lVar3 = FUN_1000e86c0(param_3,"discount_label_interpolator");
          if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f04c:
            pcVar5 = "";
          }
          else {
            local_68 = 0x100005;
            local_78 = "discount_label_interpolator";
            local_70 = &DAT_0000001b;
            lVar3 = FUN_1000e87dc(param_3,&local_78);
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f04c;
            local_68 = 0x100005;
            local_78 = "discount_label_interpolator";
            local_70 = &DAT_0000001b;
            pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
            if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
              pcVar5 = *(char **)pcVar5;
            }
          }
          FUN_1004e3120(&local_78,pcVar5);
          FUN_1004e3bc4(param_1 + 0x78,0,&local_58,&local_78);
          if (local_70 != (undefined1 *)0x0) {
            operator_delete__(local_70);
          }
          if (local_50 != (void *)0x0) {
            operator_delete__(local_50);
          }
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(param_3,"label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f0d4:
    pcVar5 = "";
  }
  else {
    local_68 = 0x100005;
    local_78 = "label";
    local_70 = (undefined1 *)0x5;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f0d4;
    local_68 = 0x100005;
    local_78 = "label";
    local_70 = (undefined1 *)0x5;
    pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_10001549c(&local_78,pcVar5);
  FUN_1001376a0(&local_78,param_1 + 0x88);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  lVar3 = FUN_1000e86c0(param_3,"label_interpolator");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_68 = 0x100005;
    local_78 = "label_interpolator";
    local_70 = (undefined1 *)0x12;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      FUN_1004e3120(&local_58,"[DURATION]");
      lVar3 = FUN_1000e86c0(param_3,"label_interpolator");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f1ac:
        pcVar5 = "";
      }
      else {
        local_68 = 0x100005;
        local_78 = "label_interpolator";
        local_70 = (undefined1 *)0x12;
        lVar3 = FUN_1000e87dc(param_3,&local_78);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f1ac;
        local_68 = 0x100005;
        local_78 = "label_interpolator";
        local_70 = (undefined1 *)0x12;
        pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
        if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
          pcVar5 = *(char **)pcVar5;
        }
      }
      FUN_1004e3120(&local_78,pcVar5);
      FUN_1004e3bc4(param_1 + 0x88,0,&local_58,&local_78);
      if (local_70 != (undefined1 *)0x0) {
        operator_delete__(local_70);
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
      }
    }
  }
  FUN_1000e8538(param_3,param_1 + 0x18);
  local_68 = 0x100005;
  local_78 = "price";
  local_70 = (undefined1 *)0x5;
  plVar8 = (long *)FUN_1000e87dc(param_3,&local_78);
  lVar3 = FUN_1000e86c0(plVar8,"silver");
  if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar3) {
    FUN_10001549c(&local_78,"");
    local_60 = 0;
    FUN_10001549c(&local_58,"silver");
    std::string::operator=((string *)&local_78,(string *)&local_58);
    if (local_41 < '\0') {
      operator_delete(local_58);
    }
    lVar3 = FUN_1000e86c0(plVar8,"silver");
    if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar3) {
LAB_10013f2c8:
      local_60 = 0;
    }
    else {
      local_48 = 0x100005;
      local_58 = "silver";
      local_50 = (void *)0x6;
      lVar3 = FUN_1000e87dc(plVar8,&local_58);
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10013f2c8;
      local_48 = 0x100005;
      local_58 = "silver";
      local_50 = (void *)0x6;
      puVar4 = (undefined4 *)FUN_1000e87dc(plVar8,&local_58);
      local_60 = *puVar4;
    }
    FUN_10013f698(param_1 + 8,&local_78);
    if ((char)local_61 < '\0') {
      operator_delete(local_78);
    }
  }
  lVar3 = FUN_1000e86c0(plVar8,"gold");
  if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar3) {
    FUN_10001549c(&local_78,"");
    local_60 = 0;
    FUN_10001549c(&local_58,"gold");
    std::string::operator=((string *)&local_78,(string *)&local_58);
    if (local_41 < '\0') {
      operator_delete(local_58);
    }
    lVar3 = FUN_1000e86c0(plVar8,"gold");
    if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar3) {
LAB_10013f3ec:
      local_60 = 0;
    }
    else {
      local_48 = 0x100005;
      local_58 = "gold";
      local_50 = (void *)0x4;
      lVar3 = FUN_1000e87dc(plVar8,&local_58);
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10013f3ec;
      local_48 = 0x100005;
      local_58 = "gold";
      local_50 = (void *)0x4;
      puVar4 = (undefined4 *)FUN_1000e87dc(plVar8,&local_58);
      local_60 = *puVar4;
    }
    FUN_10013f698(param_1 + 8,&local_78);
    if ((char)local_61 < '\0') {
      operator_delete(local_78);
    }
  }
  lVar3 = FUN_1000e86c0(param_3,"visibilityFlags");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f47c:
    *(undefined4 *)(param_1 + 0x98) = 3;
    return;
  }
  local_68 = 0x100005;
  local_78 = "visibilityFlags";
  local_70 = (undefined1 *)0xf;
  lVar3 = FUN_1000e87dc(param_3,&local_78);
  if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f47c;
  lVar3 = FUN_1000e86c0(param_3,"visibilityFlags");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f4d4:
    pcVar5 = "";
  }
  else {
    local_68 = 0x100005;
    local_78 = "visibilityFlags";
    local_70 = (undefined1 *)0xf;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f4d4;
    local_68 = 0x100005;
    local_78 = "visibilityFlags";
    local_70 = (undefined1 *)0xf;
    pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_10001549c(&local_78,pcVar5);
  uVar7 = (ulong)local_61;
  puVar1 = local_70;
  if (-1 < (char)local_61) {
    puVar1 = (undefined1 *)uVar7;
  }
  if (puVar1 == (undefined1 *)0x6) {
    iVar2 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013dd488);
    if (iVar2 == 0) {
      uVar6 = 1;
      goto LAB_10013f640;
    }
    uVar7 = (ulong)local_61;
  }
  puVar1 = local_70;
  if (-1 < (char)local_61) {
    puVar1 = (undefined1 *)uVar7;
  }
  if (puVar1 == (undefined1 *)0x8) {
    iVar2 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013dd48f);
    if (iVar2 == 0) {
      uVar6 = 0;
      goto LAB_10013f640;
    }
    uVar7 = (ulong)local_61;
  }
  puVar1 = local_70;
  if (-1 < (char)local_61) {
    puVar1 = (undefined1 *)uVar7;
  }
  if ((puVar1 == (undefined1 *)0x6) &&
     (iVar2 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100140640` @ `0x100140640`

Calls: `FUN_10013edfc`

```c

void FUN_100140640(undefined8 param_1,undefined8 param_2)

{
  undefined **local_c0;
  undefined1 auStack_b8 [16];
  void *local_a8;
  char local_91;
  void *local_60;
  char local_49;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  
  FUN_10014237c(&local_c0);
  FUN_10013edfc(param_1,&local_c0,param_2);
  local_c0 = &PTR_FUN_10145ac30;
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8);
  }
  FUN_1001423e4(auStack_b8,1);
  return;
}


```


---

### `entitlementFilterMode`

**String addresses:** `0x1013dd3a4`

#### `FUN_10013b414` @ `0x10013b414`

Referenced from: `0x10013dd58`

**Calls:** `FUN_10013e374`, `FUN_1000e87dc`, `FUN_1000153b4`, `FUN_10013e16c`, `compare`, `FUN_10013852c`, `FUN_10013a9fc`, `FUN_10013e264`, `FUN_10013e2f0`, `FUN_100141a54`, `FUN_10001549c`, `FUN_100138490`, `FUN_100139f6c`, `operator=`, `operator.delete`, ...

```c

void FUN_10013b414(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined **ppuVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  undefined **local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined **local_158;
  undefined **local_150;
  undefined8 uStack_148;
  long lStack_140;
  void *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  char local_121;
  undefined7 local_120;
  char cStack_119;
  void *local_118;
  char local_109;
  undefined7 local_108;
  char cStack_101;
  void *local_100;
  char local_f1;
  undefined7 local_f0;
  char cStack_e9;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined6 uStack_cc;
  undefined2 uStack_c6;
  string asStack_c0 [24];
  string asStack_a8 [24];
  string asStack_90 [32];
  
  FUN_100141dbc(param_1);
  uVar14 = *(undefined4 *)(param_2 + 0x4fc);
  lVar5 = FUN_1000e86c0(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdcd;
    local_150 = (undefined **)0x1;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdcd;
      local_150 = (undefined **)0x1;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x4fc) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x500);
  lVar5 = FUN_1000e86c0(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdcf;
    local_150 = (undefined **)0x1;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdcf;
      local_150 = (undefined **)0x1;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x500) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x504);
  lVar5 = FUN_1000e86c0(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdd1;
    local_150 = (undefined **)0x5;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdd1;
      local_150 = (undefined **)0x5;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x504) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x508);
  lVar5 = FUN_1000e86c0(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdd7;
    local_150 = (undefined **)0x6;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdd7;
      local_150 = (undefined **)0x6;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x508) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x50c);
  lVar5 = FUN_1000e86c0(param_3,"minPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcf98;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcf98;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x50c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x510);
  lVar5 = FUN_1000e86c0(param_3,"maxPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfa7;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfa7;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x510) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x514);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeSpendUSDMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfb6;
    local_150 = (undefined **)0x13;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfb6;
      local_150 = (undefined **)0x13;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x514) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x518);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeSpendUSDMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfca;
    local_150 = (undefined **)0x13;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfca;
      local_150 = (undefined **)0x13;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x518) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x51c);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeVIPPointsMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfde;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfde;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x51c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x520);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeVIPPointsMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcff3;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcff3;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x520) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x524);
  lVar5 = FUN_1000e86c0(param_3,"cohortMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd008;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd008;
      local_150 = (undefined **)0x9;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x524) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x528);
  lVar5 = FUN_1000e86c0(param_3,"cohortMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd012;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd012;
      local_150 = (undefined **)0x9;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x528) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x52c);
  lVar5 = FUN_1000e86c0(param_3,"lastLoginTimeMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd01c;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd01c;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87d
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_10013e85c` @ `0x10013e85c`

Calls: `FUN_10013b414`

```c

void FUN_10013e85c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_5c8 [1432];
  
  FUN_100141dbc(auStack_5c8);
  FUN_10013b414(param_1,auStack_5c8,param_2);
  FUN_100141f74(auStack_5c8);
  return;
}


```


---

### `entitlementFilterProducts`

**String addresses:** `0x1013dd37a`

#### `FUN_10013b414` @ `0x10013b414`

Referenced from: `0x10013db9c`

**Calls:** `FUN_10013e374`, `FUN_1000e87dc`, `FUN_1000153b4`, `FUN_10013e16c`, `compare`, `FUN_10013852c`, `FUN_10013a9fc`, `FUN_10013e264`, `FUN_10013e2f0`, `FUN_100141a54`, `FUN_10001549c`, `FUN_100138490`, `FUN_100139f6c`, `operator=`, `operator.delete`, ...

```c

void FUN_10013b414(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined **ppuVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  undefined **local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined **local_158;
  undefined **local_150;
  undefined8 uStack_148;
  long lStack_140;
  void *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  char local_121;
  undefined7 local_120;
  char cStack_119;
  void *local_118;
  char local_109;
  undefined7 local_108;
  char cStack_101;
  void *local_100;
  char local_f1;
  undefined7 local_f0;
  char cStack_e9;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined6 uStack_cc;
  undefined2 uStack_c6;
  string asStack_c0 [24];
  string asStack_a8 [24];
  string asStack_90 [32];
  
  FUN_100141dbc(param_1);
  uVar14 = *(undefined4 *)(param_2 + 0x4fc);
  lVar5 = FUN_1000e86c0(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdcd;
    local_150 = (undefined **)0x1;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdcd;
      local_150 = (undefined **)0x1;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x4fc) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x500);
  lVar5 = FUN_1000e86c0(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdcf;
    local_150 = (undefined **)0x1;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdcf;
      local_150 = (undefined **)0x1;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x500) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x504);
  lVar5 = FUN_1000e86c0(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdd1;
    local_150 = (undefined **)0x5;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdd1;
      local_150 = (undefined **)0x5;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x504) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x508);
  lVar5 = FUN_1000e86c0(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdd7;
    local_150 = (undefined **)0x6;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdd7;
      local_150 = (undefined **)0x6;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x508) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x50c);
  lVar5 = FUN_1000e86c0(param_3,"minPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcf98;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcf98;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x50c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x510);
  lVar5 = FUN_1000e86c0(param_3,"maxPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfa7;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfa7;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x510) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x514);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeSpendUSDMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfb6;
    local_150 = (undefined **)0x13;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfb6;
      local_150 = (undefined **)0x13;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x514) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x518);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeSpendUSDMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfca;
    local_150 = (undefined **)0x13;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfca;
      local_150 = (undefined **)0x13;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x518) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x51c);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeVIPPointsMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfde;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfde;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x51c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x520);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeVIPPointsMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcff3;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcff3;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x520) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x524);
  lVar5 = FUN_1000e86c0(param_3,"cohortMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd008;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd008;
      local_150 = (undefined **)0x9;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x524) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x528);
  lVar5 = FUN_1000e86c0(param_3,"cohortMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd012;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd012;
      local_150 = (undefined **)0x9;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x528) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x52c);
  lVar5 = FUN_1000e86c0(param_3,"lastLoginTimeMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd01c;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd01c;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87d
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_10013e85c` @ `0x10013e85c`

Calls: `FUN_10013b414`

```c

void FUN_10013e85c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_5c8 [1432];
  
  FUN_100141dbc(auStack_5c8);
  FUN_10013b414(param_1,auStack_5c8,param_2);
  FUN_100141f74(auStack_5c8);
  return;
}


```


---

### `leaderboards`

**String addresses:** `0x1013dc950`

#### `FUN_1001329b0` @ `0x1001329b0`

Referenced from: `0x1001329e0`

**Calls:** `FUN_1000e86c0`, `FUN_1000e87dc`

```c

void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}


```

**Caller functions:**


---

### `inGameChat`

**String addresses:** `0x1013dc9a4`

#### `FUN_1001329b0` @ `0x1001329b0`

Referenced from: `0x100132bd0`

**Calls:** `FUN_1000e87dc`, `FUN_1000e86c0`

```c

void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}


```

**Caller functions:**


---

### `liveEvents`

**String addresses:** `0x1013dc983`

#### `FUN_1001329b0` @ `0x1001329b0`

Referenced from: `0x100132ad8`

**Calls:** `FUN_1000e87dc`, `FUN_1000e86c0`

```c

void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}


```

**Caller functions:**


---

### `leaderboardsAlwaysQueryOfflineFriends`

**String addresses:** `0x1013dc95d`

#### `FUN_1001329b0` @ `0x1001329b0`

Referenced from: `0x100132a5c`

**Calls:** `FUN_1000e87dc`, `FUN_1000e86c0`

```c

void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}


```

**Caller functions:**


---

### `hideBattlepassCallout`

**String addresses:** `0x1013dc98e`

#### `FUN_1001329b0` @ `0x1001329b0`

Referenced from: `0x100132b54`

**Calls:** `FUN_1000e87dc`, `FUN_1000e86c0`

```c

void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}


```

**Caller functions:**


---

### `enableStateUpdates`

**String addresses:** `0x10141beb9`

#### `FUN_100505520` @ `0x100505520`

Referenced from: `0x100505d68`

**Calls:** `FUN_1000e87dc`, `operator.delete`, `FUN_10014e9b0`, `FUN_1000e86c0`, `_atoi`, `operator=`, `FUN_1001339ec`, `FUN_1000ee4ec`, `FUN_10051b978`, `FUN_100111bb4`

```c

void FUN_100505520(long *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  string *this;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
LAB_10050559c:
    uVar12 = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "code";
    local_a8 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050559c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "code";
    local_a8 = 4;
    puVar9 = (undefined4 *)FUN_1000e87dc(param_1,&local_b0);
    uVar12 = *puVar9;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar12;
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_a0._0_4_ = 0x100005;
  local_b0 = "returnValue";
  local_a8 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_b0);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_a0 = CONCAT44(local_a0._4_4_,0x100005);
  local_b0 = "returnValue";
  local_a8 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_b0);
  FUN_100111bb4(param_2 + 0x30,plVar5,*(undefined8 *)(param_2 + 0x48));
  lVar4 = FUN_1000e86c0(plVar5,"supportUrls");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "supportUrls";
    local_a8 = 0xb;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "supportUrls";
      local_a8 = 0xb;
      plVar6 = (long *)FUN_1000e87dc(plVar5,&local_b0);
      if ((int)plVar6[1] != 0) {
        puVar10 = (undefined8 *)(*plVar6 + 0x18);
        do {
          puVar11 = puVar10;
          if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
            puVar11 = (undefined8 *)*puVar10;
          }
          FUN_1000ee4ec(&local_b0,puVar11);
          if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
            puVar11 = (undefined8 *)puVar10[-3];
          }
          else {
            puVar11 = puVar10 + -3;
          }
          FUN_1000ee4ec(&local_78,puVar11);
          this = (string *)FUN_1001339ec(param_2 + 400,&local_78);
          std::string::operator=(this,(string *)&local_b0);
          if (local_61 < '\0') {
            operator_delete(local_78);
          }
          if (local_a0 < 0) {
            operator_delete(local_b0);
          }
          puVar11 = puVar10 + 3;
          puVar10 = puVar10 + 6;
        } while (puVar11 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
      }
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"notifyUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050579c:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyUrl";
    local_a8 = 9;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050579c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyUrl";
    local_a8 = 9;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0xf8),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"notifyFallbackUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505814:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyFallbackUrl";
    local_a8 = 0x11;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505814;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "notifyFallbackUrl";
    local_a8 = 0x11;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x110),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"bucketIncrementer");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050588c:
    uVar12 = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "bucketIncrementer";
    local_a8 = 0x11;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050588c;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "bucketIncrementer";
    local_a8 = 0x11;
    puVar9 = (undefined4 *)FUN_1000e87dc(plVar5,&local_b0);
    uVar12 = *puVar9;
  }
  *(undefined4 *)(param_2 + 0x128) = uVar12;
  lVar4 = FUN_1000e86c0(plVar5,"failoverThreshold");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505958:
    uVar12 = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "failoverThreshold";
    local_a8 = 0x11;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_100505958;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "failoverThreshold";
    local_a8 = 0x11;
    puVar9 = (undefined4 *)FUN_1000e87dc(plVar5,&local_b0);
    uVar12 = *puVar9;
  }
  *(undefined4 *)(param_2 + 300) = uVar12;
  lVar4 = FUN_1000e86c0(plVar5,"platformUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_1005059cc:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "platformUrl";
    local_a8 = 0xb;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_1005059cc;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "platformUrl";
    local_a8 = 0xb;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x130),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"chatUrl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505a44:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatUrl";
    local_a8 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505a44;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatUrl";
    local_a8 = 7;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x148),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"chatPass");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505abc:
    pcVar8 = "";
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatPass";
    local_a8 = 8;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505abc;
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "chatPass";
    local_a8 = 8;
    pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_b0,pcVar8);
  std::string::operator=((string *)(param_2 + 0x160),(string *)&local_b0);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  lVar4 = FUN_1000e86c0(plVar5,"playerUUID");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    lVar4 = FUN_1000e86c0(plVar5,"playerUUID");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505b5c:
      pcVar8 = "";
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "playerUUID";
      local_a8 = 10;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505b5c;
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "playerUUID";
      local_a8 = 10;
      pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_b0);
      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
        pcVar8 = *(char **)pcVar8;
      }
    }
    FUN_1000ee4ec(&local_b0,pcVar8);
    std::string::operator=((string *)(param_2 + 0x98),(string *)&local_b0);
    if (local_a0 < 0) {
      operator_delete(local_b0);
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"playerInfo");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "playerInfo";
    local_a8 = 10;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "playerInfo";
      local_a8 = 10;
      plVar6 = (long *)FUN_1000e87dc(plVar5,&local_b0);
      lVar4 = FUN_1000e86c0(plVar6,"guildUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505c3c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto L
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100503314` @ `0x100503314`

Calls: `FUN_100505520`

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
    case 0x2f:
      FUN_100513f50(param_2,plVar6);
      break;
    case 0x30:
      FUN_100514110(param_2,plVar6);
      break;
    case 0x31:
      FUN_1005142d0(param_2,plVar6);
      break;
    case 0x32:
      FUN_1005143ec(param_2,plVar6);
      break;
    case 0x33:
      FUN_100514650(param_2,plVar6);
      break;
    case 0x34:
      FUN_100514800(param_2,plVar6);
      break;
    case 0x35:
      FUN_10051505c(param_2,plVar6);
      break;
    case 0x36:
      FUN_100515198(param_2,plVar6);
      break;
    case 0x37:
      FUN_100504dd4(param_2,plVar6);
      break;
    case 0x38:
      FUN_100504ae8(param_2,plVar6);
      break;
    case 0x39:
      FUN_100515314(param_2,plVar6);
      break;
    case 0x3a:
      FUN_100515754(param_2,plVar6);
      break;
    case 0x3b:
      FUN_100515d50(param_2,plVar6);
      break;
    case 0x3c:
      FUN_100515f90(param_2,plVar6);
      break;
    case 0x3d:
      FUN_100516908(param_2,plVar6);
      break;
    case 0x3e:
      FUN_10
// ... truncated ...
```


---

## Feature Parser Function (0x1001329b0)

**Function:** `FUN_1001329b0` @ `0x1001329b0`

```c

void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}


```

## __DATA Function Pointer Region

Memory dump around the feature parser function pointer at `__DATA+0x0145a8e8`:

| Offset | VA | Value | Code Ptr? | Target Function |
|--------|-----|-------|-----------|------------------|
| 0x145a7e8 | 0x10145a7e8 | 0x0 | no | - |
| 0x145a7f0 | 0x10145a7f0 | 0x100134504 | YES | FUN_100134504 |
| 0x145a7f8 | 0x10145a7f8 | 0x100132444 | YES | FUN_100132444 |
| 0x145a800 | 0x10145a800 | 0x1001318e8 | YES | FUN_1001318e8 |
| 0x145a808 | 0x10145a808 | 0x100134514 | YES | FUN_100134514 |
| 0x145a810 | 0x10145a810 | 0x0 | no | - |
| 0x145a818 | 0x10145a818 | 0x0 | no | - |
| 0x145a820 | 0x10145a820 | 0x100134564 | YES | FUN_100134564 |
| 0x145a828 | 0x10145a828 | 0x1001326e8 | YES | FUN_1001326e8 |
| 0x145a830 | 0x10145a830 | 0x100131944 | YES | FUN_100131944 |
| 0x145a838 | 0x10145a838 | 0x100134574 | YES | FUN_100134574 |
| 0x145a840 | 0x10145a840 | 0x0 | no | - |
| 0x145a848 | 0x10145a848 | 0x0 | no | - |
| 0x145a850 | 0x10145a850 | 0x1001345c4 | YES | FUN_1001345c4 |
| 0x145a858 | 0x10145a858 | 0x10013279c | YES | FUN_10013279c |
| 0x145a860 | 0x10145a860 | 0x1001319a0 | YES | FUN_1001319a0 |
| 0x145a868 | 0x10145a868 | 0x1001345d4 | YES | FUN_1001345d4 |
| 0x145a870 | 0x10145a870 | 0x0 | no | - |
| 0x145a878 | 0x10145a878 | 0x0 | no | - |
| 0x145a880 | 0x10145a880 | 0x100134624 | YES | FUN_100134624 |
| 0x145a888 | 0x10145a888 | 0x100132850 | YES | FUN_100132850 |
| 0x145a890 | 0x10145a890 | 0x1001319fc | YES | FUN_1001319fc |
| 0x145a898 | 0x10145a898 | 0x100134634 | YES | FUN_100134634 |
| 0x145a8a0 | 0x10145a8a0 | 0x0 | no | - |
| 0x145a8a8 | 0x10145a8a8 | 0x0 | no | - |
| 0x145a8b0 | 0x10145a8b0 | 0x100134684 | YES | FUN_100134684 |
| 0x145a8b8 | 0x10145a8b8 | 0x1001328fc | YES | FUN_1001328fc |
| 0x145a8c0 | 0x10145a8c0 | 0x100131b48 | YES | FUN_100131b48 |
| 0x145a8c8 | 0x10145a8c8 | 0x100134694 | YES | FUN_100134694 |
| 0x145a8d0 | 0x10145a8d0 | 0x0 | no | - |
| 0x145a8d8 | 0x10145a8d8 | 0x0 | no | - |
| 0x145a8e0 | 0x10145a8e0 | 0x1001346e4 | YES | FUN_1001346e4 |
| 0x145a8e8 | 0x10145a8e8 | 0x1001329b0 | YES | FUN_1001329b0 |
| 0x145a8f0 | 0x10145a8f0 | 0x100131aec | YES | FUN_100131aec |
| 0x145a8f8 | 0x10145a8f8 | 0x1001346f4 | YES | FUN_1001346f4 |
| 0x145a900 | 0x10145a900 | 0x0 | no | - |
| 0x145a908 | 0x10145a908 | 0x0 | no | - |
| 0x145a910 | 0x10145a910 | 0x100134744 | YES | FUN_100134744 |
| 0x145a918 | 0x10145a918 | 0x100132c54 | YES | FUN_100132c54 |
| 0x145a920 | 0x10145a920 | 0x100131a58 | YES | FUN_100131a58 |
| 0x145a928 | 0x10145a928 | 0x100134754 | YES | FUN_100134754 |
| 0x145a930 | 0x10145a930 | 0x0 | no | - |
| 0x145a938 | 0x10145a938 | 0x0 | no | - |
| 0x145a940 | 0x10145a940 | 0x1001347dc | YES | thunk_FUN_1004f0a9c |
| 0x145a948 | 0x10145a948 | 0x1001347e0 | YES | FUN_1001347e0 |
| 0x145a950 | 0x10145a950 | 0x100133a60 | YES | FUN_100133a60 |
| 0x145a958 | 0x10145a958 | 0x100031c48 | YES | FUN_100031c48 |
| 0x145a960 | 0x10145a960 | 0x0 | no | - |
| 0x145a968 | 0x10145a968 | 0x0 | no | - |
| 0x145a970 | 0x10145a970 | 0x1001356fc | YES | FUN_1001356fc |
| 0x145a978 | 0x10145a978 | 0x100135700 | YES | FUN_100135700 |
| 0x145a980 | 0x10145a980 | 0x100135c08 | YES | FUN_100135c08 |
| 0x145a988 | 0x10145a988 | 0x101f25428 | no | - |
| 0x145a990 | 0x10145a990 | 0x0 | no | - |
| 0x145a998 | 0x10145a998 | 0x0 | no | - |
| 0x145a9a0 | 0x10145a9a0 | 0x1001362a4 | YES | thunk_FUN_1001361ec |
| 0x145a9a8 | 0x10145a9a8 | 0x1001362a8 | YES | FUN_1001362a8 |
| 0x145a9b0 | 0x10145a9b0 | 0x1001369a8 | YES | FUN_1001369a8 |
| 0x145a9b8 | 0x10145a9b8 | 0x100031c48 | YES | FUN_100031c48 |
| 0x145a9c0 | 0x10145a9c0 | 0x0 | no | - |
| 0x145a9c8 | 0x10145a9c8 | 0x0 | no | - |
| 0x145a9d0 | 0x10145a9d0 | 0x100136f98 | YES | thunk_FUN_1001e2180 |
| 0x145a9d8 | 0x10145a9d8 | 0x100136f9c | YES | FUN_100136f9c |
| 0x145a9e0 | 0x10145a9e0 | 0x1001e22c4 | YES | FUN_1001e22c4 |
| 0x145a9e8 | 0x10145a9e8 | 0x1001e249c | YES | FUN_1001e249c |

### Nearby Function Pointer Targets (decompiled)

#### `FUN_100134684` @ `0x100134684` (ptr at offset 0x145a8b0)

```c

void FUN_100134684(undefined8 param_1)

{
  FUN_10001549c(param_1,"telemetryThrottle");
  return;
}


```

#### `FUN_1001328fc` @ `0x1001328fc` (ptr at offset 0x145a8b8)

```c

void FUN_1001328fc(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"throttleAmplitude");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "throttleAmplitude";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "throttleAmplitude";
      uStack_40 = 0x11;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132998;
    }
  }
  bVar1 = true;
LAB_100132998:
  *(bool *)(param_1 + 8) = bVar1;
  return;
}


```

#### `FUN_100131b48` @ `0x100131b48` (ptr at offset 0x145a8c0)

```c

void FUN_100131b48(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}


```

#### `FUN_100134694` @ `0x100134694` (ptr at offset 0x145a8c8)

```c

void FUN_100134694(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}


```

#### `FUN_1001346e4` @ `0x1001346e4` (ptr at offset 0x145a8e0)

```c

void FUN_1001346e4(undefined8 param_1)

{
  FUN_10001549c(param_1,"featuresEnabled");
  return;
}


```

#### `FUN_1001329b0` @ `0x1001329b0` (ptr at offset 0x145a8e8)

```c

void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}


```

#### `FUN_100131aec` @ `0x100131aec` (ptr at offset 0x145a8f0)

```c

void FUN_100131aec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}


```

#### `FUN_1001346f4` @ `0x1001346f4` (ptr at offset 0x145a8f8)

```c

void FUN_1001346f4(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}


```

#### `FUN_100134744` @ `0x100134744` (ptr at offset 0x145a910)

```c

void FUN_100134744(undefined8 param_1)

{
  FUN_10001549c(param_1,"tutorialExperiments");
  return;
}


```

#### `FUN_100132c54` @ `0x100132c54` (ptr at offset 0x145a918)

```c

void FUN_100132c54(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  lVar2 = FUN_1000e86c0(param_2,"poofMinions");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132cc4:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "poofMinions";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132cc4;
    local_38 = 0x100005;
    local_48 = "poofMinions";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x28) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"areYouNew2");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132d40:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "areYouNew2";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100132d40;
    local_38 = 0x100005;
    local_48 = "areYouNew2";
    uStack_40 = 10;
    puVar4 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar4;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  lVar2 = FUN_1000e86c0(param_2,"abridgedTutorials");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132db4:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "abridgedTutorials";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132db4;
    local_38 = 0x100005;
    local_48 = "abridgedTutorials";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x29) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tutorial01LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132e30:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tutorial01LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132e30;
    local_38 = 0x100005;
    local_48 = "tutorial01LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2a) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tutorial02LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132eac:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tutorial02LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132eac;
    local_38 = 0x100005;
    local_48 = "tutorial02LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2b) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tutorial05LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132f28:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tutorial05LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132f28;
    local_38 = 0x100005;
    local_48 = "tutorial05LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2c) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"skipTutorialSteps");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132fa4:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "skipTutorialSteps";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100132fa4;
    local_38 = 0x100005;
    local_48 = "skipTutorialSteps";
    uStack_40 = 0x11;
    puVar4 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar4;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  lVar2 = FUN_1000e86c0(param_2,"showTutorialVideo");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100133018:
    pcVar3 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "showTutorialVideo";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_100133018;
    local_38 = 0x100005;
    local_48 = "showTutorialVideo";
    uStack_40 = 0x11;
    pcVar3 = (char *)FUN_1000e87dc(param_2,&local_48);
    if (((byte)pcVar3[0x12] >> 6 & 1) == 0) {
      pcVar3 = *(char **)pcVar3;
    }
  }
  FUN_10001549c(&local_48,pcVar3);
  std::string::operator=((string *)(param_1 + 8),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e8
// ... truncated ...
```

#### `FUN_100131a58` @ `0x100131a58` (ptr at offset 0x145a920)

```c

undefined8 * FUN_100131a58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a910;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}


```

#### `FUN_100134754` @ `0x100134754` (ptr at offset 0x145a928)

```c

void FUN_100134754(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a910;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        break;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}


```

