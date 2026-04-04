# Sidebar Tab Registration Trace

## Core Tab Registration Functions

### `FUN_1001e5170` @ `0x1001e5170`

```c

void FUN_1001e5170(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  uVar3 = 0;
  plVar4 = param_2 + -800;
  do {
    plVar6 = plVar4 + 0x65f;
    plVar4 = plVar4 + 0x331;
    if (5 < uVar3) break;
    uVar3 = uVar3 + 1;
  } while ((int)*plVar6 != -1);
  if ((int)*plVar6 != -1) {
    plVar4 = param_2 + 0x11;
  }
  bVar2 = false;
  if ((*(float *)(plVar4 + 8) == (float)DAT_101dc1cb8) &&
     (bVar2 = false, !NAN(*(float *)((long)plVar4 + 0x44)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar2 = *(float *)((long)plVar4 + 0x44) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar2) {
    plVar4[8] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar4);
  }
  FUN_1001e46fc(param_1,plVar4,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                (undefined1)param_10);
  FUN_1001e4dd8(plVar4,1,param_10._1_1_);
  FUN_1006423ec(plVar4,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar4,1);
  lVar5 = 0;
  plVar6 = param_2;
  do {
    if ((plVar6 + 0x11 != plVar4) && ((int)plVar6[0x33f] != -1)) {
      FUN_100642324(plVar6 + 0x11);
      iVar1 = (int)plVar6[0x33f] + 1;
      *(int *)(plVar6 + 0x33f) = iVar1;
      if (iVar1 == 6) {
        FUN_1001e4dd8(plVar6 + 0x11,0,1);
        *(undefined4 *)(plVar6 + 0x33f) = 0xffffffff;
        *(uint *)((long)plVar6 + 0x64c) = *(uint *)((long)plVar6 + 0x64c) & 0xffffffef;
        *(uint *)((long)plVar6 + 0x12e4) = *(uint *)((long)plVar6 + 0x12e4) & 0xffffffef;
        *(uint *)((long)plVar6 + 0xcf4) = *(uint *)((long)plVar6 + 0xcf4) & 0xffffffef;
      }
      else {
        FUN_1001e5350(param_2,lVar5);
      }
    }
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 0x331;
  } while (lVar5 != 7);
  return;
}


```


---

### `FUN_1001e55b0` @ `0x1001e55b0`

```c

void FUN_1001e55b0(undefined8 param_1,undefined1 param_2)

{
  if (DAT_101e43908 != 0) {
    FUN_1001e5170(DAT_101e43908,param_1,0,0,0,0,0,0,param_2);
  }
  return;
}


```


---

### `FUN_1001e5600` @ `0x1001e5600`

```c

void FUN_1001e5600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  if (DAT_101e43908 != 0) {
    FUN_1001e5170(DAT_101e43908,param_1,param_2,param_3,0,0,param_4,0,param_5);
  }
  return;
}


```


---

### `FUN_1001e564c` @ `0x1001e564c`

```c

void FUN_1001e564c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  if (DAT_101e43908 != 0) {
    FUN_1001e5170(DAT_101e43908,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}


```


---

### `FUN_1001e46fc` @ `0x1001e46fc`

```c

void FUN_1001e46fc(float param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,int param_9,char param_10)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined4 local_88;
  
  *(undefined4 *)(param_2 + 0x32e) = 0;
  if (param_1 != -1.0) {
    *(float *)(param_2 + 0x32f) = param_1;
  }
  *(bool *)((long)param_2 + 0x197c) = param_1 != -1.0;
  plVar1 = param_2 + 0x82;
  bVar9 = param_9 == 0;
  fVar16 = 550.0;
  uVar7 = 0x44098000;
  if (bVar9) {
    uVar7 = 0x43f28000;
  }
  uVar10 = 0;
  if (bVar9) {
    uVar10 = 0x14;
  }
  uVar11 = 4;
  uVar5 = uVar11;
  if (bVar9) {
    uVar5 = 0;
    uVar11 = 0x10;
  }
  FUN_100651708(uVar7,plVar1,1);
  FUN_1006513c0(plVar1,param_3);
  FUN_1006511d0(plVar1);
  *(uint *)((long)param_2 + 0x5c4) = uVar10 | *(uint *)((long)param_2 + 0x5c4) & 0xffffffeb;
  plVar2 = param_2 + 0x17d;
  *(uint *)((long)param_2 + 0xc6c) = uVar11 | *(uint *)((long)param_2 + 0xc6c) & 0xffffffeb;
  plVar3 = param_2 + 0x23b;
  *(uint *)((long)param_2 + 0x125c) = uVar11 | *(uint *)((long)param_2 + 0x125c) & 0xffffffeb;
  *(uint *)((long)param_2 + 0x184c) = *(uint *)((long)param_2 + 0x184c) & 0xfffffffb | uVar5;
  if (param_9 != 0) {
    fVar16 = fVar16 + 80.0;
    bVar9 = false;
    if ((*(float *)(param_2 + 0x243) == DAT_101d23778 * 0.25) &&
       (bVar9 = false, !NAN(*(float *)((long)param_2 + 0x121c)) && !NAN(fVar16))) {
      bVar9 = *(float *)((long)param_2 + 0x121c) == fVar16;
    }
    if (!bVar9) {
      *(float *)(param_2 + 0x243) = DAT_101d23778 * 0.25;
      *(float *)((long)param_2 + 0x121c) = fVar16;
      FUN_1000200a0(plVar3);
    }
    plVar4 = param_2 + 0x2f9;
    fVar12 = *(float *)(param_2 + 0x185);
    bVar9 = false;
    if ((fVar12 == DAT_101d23778 * 0.75) &&
       (bVar9 = false, !NAN(*(float *)((long)param_2 + 0xc2c)) && !NAN(fVar16))) {
      bVar9 = *(float *)((long)param_2 + 0xc2c) == fVar16;
    }
    if (!bVar9) {
      *(float *)(param_2 + 0x185) = DAT_101d23778 * 0.75;
      *(float *)((long)param_2 + 0xc2c) = fVar16;
      FUN_1000200a0(plVar2);
      fVar12 = *(float *)(param_2 + 0x185);
    }
    fVar15 = *(float *)((long)param_2 + 0x121c);
    fVar12 = (fVar12 + *(float *)(param_2 + 0x243)) * 0.5;
    bVar9 = false;
    if ((*(float *)(param_2 + 0x301) == fVar12) &&
       (bVar9 = false, !NAN(*(float *)((long)param_2 + 0x180c)) && !NAN(fVar15))) {
      bVar9 = *(float *)((long)param_2 + 0x180c) == fVar15;
    }
    if (!bVar9) {
      *(float *)(param_2 + 0x301) = fVar12;
      *(float *)((long)param_2 + 0x180c) = fVar15;
      FUN_1000200a0(plVar4);
    }
    local_b0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_b0);
  }
  puVar6 = &DAT_101d236b0;
  if (param_10 == '\0') {
    puVar6 = &DAT_10115a168;
  }
  FUN_100651460(plVar1,puVar6);
  fVar12 = fVar16;
  FUN_10064e47c(0x44100000,param_2);
  plVar1 = param_2 + 0x28;
  FUN_100652e60(plVar1);
  fVar15 = *(float *)((long)param_2 + 0x18c);
  bVar9 = false;
  if ((*(float *)((long)param_2 + 0x184) == 0.0) &&
     (bVar9 = false, !NAN(*(float *)(param_2 + 0x30)))) {
    bVar9 = *(float *)(param_2 + 0x30) == 0.0;
  }
  if (!bVar9) {
    param_2[0x30] = 0;
    FUN_1000200a0(plVar1);
  }
  plVar4 = param_2 + 0xa8;
  fVar12 = fVar12 * fVar15;
  if ((*(float *)(param_2 + 0x4e) != 0.0) || (*(float *)((long)param_2 + 0x274) != fVar12)) {
    *(undefined4 *)(param_2 + 0x4e) = 0;
    *(float *)((long)param_2 + 0x274) = fVar12;
    FUN_1000200a0(param_2 + 0x46);
  }
  local_b0 = (code *)CONCAT44(fVar16 * 0.5,0xbf800000);
  FUN_10064e48c(param_2 + 0x46,&local_b0);
  if ((*(float *)(param_2 + 0x6c) != 0.0) || (*(float *)((long)param_2 + 0x364) != fVar12 + fVar16))
  {
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(float *)((long)param_2 + 0x364) = fVar12 + fVar16;
    FUN_1000200a0(param_2 + 100);
  }
  *(uint *)((long)param_2 + 0x1c4) = *(uint *)((long)param_2 + 0x1c4) | 0x10;
  *(uint *)((long)param_2 + 0x2b4) = *(uint *)((long)param_2 + 0x2b4) | 0x10;
  *(uint *)((long)param_2 + 0x3a4) = *(uint *)((long)param_2 + 0x3a4) | 0x10;
  fVar15 = DAT_101d23778;
  fVar13 = (float)FUN_10064e3cc(plVar4);
  fVar15 = fVar15 + -10.0 + fVar13 * -0.5;
  fVar12 = fVar12 + fVar16 * 0.5;
  bVar9 = false;
  if ((*(float *)(param_2 + 0xb0) == fVar15) &&
     (bVar9 = false, !NAN(*(float *)((long)param_2 + 0x584)) && !NAN(fVar12))) {
    bVar9 = *(float *)((long)param_2 + 0x584) == fVar12;
  }
  if (!bVar9) {
    *(float *)(param_2 + 0xb0) = fVar15;
    *(float *)((long)param_2 + 0x584) = fVar12;
    FUN_1000200a0(plVar4);
  }
  uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  fVar16 = fVar12;
  FUN_100652e60(plVar1);
  fVar12 = fVar12 + fVar16 * (*(float *)((long)param_2 + 0x18c) + *(float *)((long)param_2 + 0x18c))
  ;
  FUN_10064e47c(uVar14,fVar12,param_2 + 0x166);
  uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  fVar16 = fVar12;
  FUN_100652e60(plVar1);
  FUN_10064e47c(uVar14,fVar12 + fVar16 * (*(float *)((long)param_2 + 0x18c) +
                                         *(float *)((long)param_2 + 0x18c)),param_2 + 0x317);
  *(uint *)((long)param_2 + 0xbb4) = *(uint *)((long)param_2 + 0xbb4) & 0xffffffef;
  FUN_100644c24(param_2 + 0x166);
  FUN_100644c24(plVar4);
  FUN_100644c24(plVar2);
  FUN_100644c24(plVar3);
  uVar7 = DAT_101dbd460;
  local_88 = DAT_101dbd460;
  local_b0 = FUN_1001e46e4;
  lStack_a8 = DAT_101e43908;
  local_a0 = 0;
  uStack_98 = 0;
  plVar1 = param_2 + 0xa9;
  local_90 = param_2;
  FUN_10001554c(plVar1,&local_b0);
  uVar8 = DAT_101dbd48c;
  local_88 = DAT_101dbd48c;
  local_b0 = FUN_1001e46e4;
  lStack_a8 = DAT_101e43908;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = param_2;
  FUN_10001554c(plVar1,&local_b0);
  if (param_8 != 0) {
    lStack_a8 = param_8;
    if (param_4 != 0) {
      local_b0 = (code *)param_4;
      local_90 = (long *)param_5;
      if (param_9 == 0) {
        local_88 = uVar7;
        local_a0 = 0;
        uStack_98 = 0;
        plVar2 = param_2 + 0x167;
        FUN_10001554c(plVar2,&local_b0);
        local_88 = uVar8;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_4;
        lStack_a8 = param_8;
        local_90 = (long *)param_5;
        FUN_10001554c(plVar2,&local_b0);
        local_88 = uVar7;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar2,&local_b0);
        local_88 = uVar8;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar2,&local_b0);
        uVar10 = *(uint *)((long)param_2 + 0xbb4) | 0x10;
      }
      else {
        local_88 = uVar7;
        local_a0 = 0;
        uStack_98 = 0;
        plVar4 = param_2 + 0x17e;
        FUN_10001554c(plVar4,&local_b0);
        local_88 = uVar8;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_4;
        lStack_a8 = param_8;
        local_90 = (long *)param_5;
        FUN_10001554c(plVar4,&local_b0);
        local_88 = uVar7;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar4,&local_b0);
        local_88 = uVar8;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar4,&local_b0);
        FUN_1001b46f0(plVar2);
        *(uint *)((long)param_2 + 0xc6c) = *(uint *)((long)param_2 + 0xc6c) | 0x10;
        uVar10 = *(uint *)((long)param_2 + 0xbb4) & 0xffffffef;
      }
      *(uint *)((long)param_2 + 0xbb4) = uVar10;
    }
    if (param_6 != 0) {
      local_88 = uVar7;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = (code *)param_6;
      lStack_a8 = param_8;
      local_90 = (long *)param_7;
      FUN_10001554c(plVar1,&local_b0);
      local_88 = uVar8;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = (code *)param_6;
      lStack_a8 = param_8;
      local_90 = (long *)param_7;
      FUN_10001554c(plVar1,&local_b0);
      if (param_9 != 0) {
        local_88 = uVar7;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        plVar1 = param_2 + 0x23c;
        local_90 = param_2;
        FUN_10001554c(plVar1,&local_b0);
        local_88 = uVar8;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar1,&local_b0);
        local_88 = uVar7;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_6;
        lStack_a8 = param_8;
        local_90 = (long *)param_7;
        FUN_10001554c(plVar1,&local_b0);
        local_88 = uVar8;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_6;
        lStack_a8 = param_8;
        local_90 = (long *)param_7;
        FUN_10001554c(plVar1,&local_b0);
        FUN_1001b46f0(plVar3);
        *(uint *)((long)param_2 + 0x125c) = *(uint *)((long)param_2 + 0x125c) | 0x10;
      }
    }
  }
  return;
}


```


---

### `FUN_1001e4650` @ `0x1001e4650`

```c

void FUN_1001e4650(long param_1)

{
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_38;
  
  local_38 = DAT_101dbd460;
  local_60 = FUN_1001e46e4;
  uStack_58 = DAT_101e43908;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = param_1;
  FUN_10001554c(param_1 + 0x548,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_1001e46e4;
  uStack_58 = DAT_101e43908;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = param_1;
  FUN_10001554c(param_1 + 0x548,&local_60);
  return;
}


```


---

### `FUN_1001e503c` @ `0x1001e503c`

```c

long * FUN_1001e503c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  lVar2 = 0;
  *puVar1 = &PTR_FUN_101469aa8;
  do {
    FUN_1001e3fe8((long)param_1 + lVar2 + 0x88);
    lVar2 = lVar2 + 0x1988;
  } while (lVar2 != 0xb2b8);
  plVar3 = param_1 + 0x11;
  lVar2 = 7;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
    plVar3 = plVar3 + 0x331;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}


```


---

### `FUN_1001e54f0` @ `0x1001e54f0`

```c

void FUN_1001e54f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  operator_new(0xb340);
  DAT_101e43908 = FUN_1001e503c();
  lVar1 = DAT_101e43908 + 0x88;
  lVar2 = 7;
  do {
    FUN_1001e4650(lVar1);
    lVar1 = lVar1 + 0x1988;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x0001001e5560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,DAT_101e43908,1);
  return;
}


```


---

### `FUN_1001e50c8` @ `0x1001e50c8`

```c

void FUN_1001e50c8(long param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_38 [4];
  float local_34;
  
  FUN_100641464(&local_34,auStack_38);
  iVar2 = FUN_100126c88();
  fVar3 = DAT_101854a78;
  if (iVar2 == 0) {
    fVar3 = 1.0;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x48) == fVar3) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x4c)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x4c) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x48) = fVar3;
    *(float *)(param_1 + 0x4c) = fVar3;
    FUN_1000200a0(param_1);
  }
  local_34 = local_34 + fVar3 * -576.0;
  if ((*(float *)(param_1 + 0x40) != local_34) || (*(float *)(param_1 + 0x44) != 0.0)) {
    *(float *)(param_1 + 0x40) = local_34;
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_1000200a0(param_1);
  }
  return;
}


```


---

## All Callers of Tab Registration Wrappers

### Callers of simple_wrapper_0x1e55b0

Found 16 callers:

### `FUN_100320194` @ `0x100320194`

```c

void FUN_100320194(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    uVar1 = FUN_1004e0150("MENU_PARTY_CANNOT_REJECT",0);
    FUN_1001e55b0(0x40200000,uVar1,1,1);
    return;
  }
  return;
}


```


---

### `FUN_10020f108` @ `0x10020f108`

```c

void FUN_10020f108(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_1004f1680(param_2);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
    thunk_FUN_1004e439c(auStack_40,uVar3);
    FUN_1004e3120(auStack_50,"[NAME]");
    FUN_1004e3bc4(auStack_40,0,auStack_50,param_1 + 0xe0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1001e55b0(0x40200000,auStack_40,0,1);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  if ((*(int *)(param_2 + 0x40) == 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    pcVar4 = "MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO";
  }
  else {
    bVar7 = *(byte *)(param_2 + 0x5f);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar6;
    if (-1 < (char)bVar7) {
      uVar2 = uVar5;
    }
    if (uVar2 == 0x10) {
      iVar1 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e51ed);
      if (iVar1 == 0) {
        pcVar4 = "MENU_FRIENDS_THEIR_LIST_FULL";
        goto LAB_10020f2bc;
      }
      bVar7 = *(byte *)(param_2 + 0x5f);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar7) {
      uVar6 = uVar5;
    }
    if ((uVar6 != 0x13) ||
       (iVar1 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e521b),
       iVar1 != 0)) {
      uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
      thunk_FUN_1004e439c(auStack_40,uVar3);
      FUN_1004e3120(auStack_50,"[NAME]");
      FUN_1004e3bc4(auStack_40,0,auStack_50,param_1 + 0xe0);
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      FUN_1001e55b0(0x40200000,auStack_40,0,1);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      goto LAB_10020f2d4;
    }
    pcVar4 = "MENU_FRIENDS_YOUR_LIST_FULL";
  }
LAB_10020f2bc:
  uVar3 = FUN_1004e0150(pcVar4,0);
  FUN_1001e55b0(0x40200000,uVar3,0,1);
LAB_10020f2d4:
  FUN_1000153b4(param_1 + 0xe0,&DAT_101d91650);
  return;
}


```


---

### `FUN_1001fe194` @ `0x1001fe194`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_1001fe194(long *******param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_88 [2];
  char local_71;
  long *******local_70;
  long *******local_68;
  long *******local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar2 = FUN_1001311d4();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = FUN_10030df60();
  iVar1 = FUN_10030e5d8();
  while( true ) {
    if (iVar1 < 1) {
      return;
    }
    lVar4 = FUN_10030e510(uVar3);
    if (*(int *)(lVar4 + 0x378) != 6) break;
    FUN_1001e55b0(*(undefined4 *)(lVar4 + 0x37c),lVar4 + 0x358,*(undefined1 *)(lVar4 + 0x380),
                  *(undefined1 *)(lVar4 + 0x381));
    FUN_10030e51c(uVar3);
    iVar1 = FUN_10030e5d8(uVar3);
  }
  switch(*(int *)(lVar4 + 0x378)) {
  case 1:
    local_68 = (long *******)0x0;
    local_60 = (long *******)0x0;
    local_70 = (long *******)&local_68;
    lVar4 = FUN_100223e2c(lVar4,&local_70);
    FUN_1001ff89c(&local_70,local_68);
    goto joined_r0x0001001fe290;
  case 2:
    lVar4 = FUN_1001fe990();
joined_r0x0001001fe290:
    if (lVar4 != 0) {
      local_70 = (long *******)FUN_1001fe980;
      local_58 = (code *)0x0;
      uStack_50 = 0;
      local_60 = (long *******)0x0;
      local_68 = param_1;
      local_48 = DAT_101d91894;
      FUN_10001554c(lVar4 + 8,&local_70);
    }
    break;
  case 3:
    uVar7 = FUN_1004e0150("MENU_DIALOG_DODGE_PENALTY_TITLE",0);
    uVar5 = FUN_1004e0150("MENU_DIALOG_DODGE_PENALTY_BODY",0);
    uVar6 = FUN_1004e0150("MENU_DIALOG_DODGE_PENALTY_BUTTON_TITLE",0);
    FUN_1001e3288(uVar7,uVar5,uVar6,8,param_1,thunk_FUN_1001fe7fc);
    break;
  case 4:
    uVar2 = *(ulong *)(lVar4 + 0x338);
    if (-1 < (char)*(byte *)(lVar4 + 0x347)) {
      uVar2 = (ulong)*(byte *)(lVar4 + 0x347);
    }
    if (uVar2 != 0) {
      std::string::operator=((string *)(param_1 + 0x23),(string *)(lVar4 + 0x330));
    }
    FUN_1004e3170(&local_70,&DAT_101d91198);
    FUN_1001e3120(lVar4 + 0x348,lVar4 + 0x358,lVar4 + 0x368,&local_70,param_1,thunk_FUN_1001fe7fc,0)
    ;
    if (local_68 != (long *******)0x0) {
      operator_delete__(local_68);
    }
    if (uVar2 != 0) goto LAB_1001fe4ac;
    break;
  case 5:
    (*(code *)(*param_1)[3])(param_1,lVar4 + 0x178);
    break;
  case 7:
    std::string::operator=((string *)(param_1 + 0x23),(string *)(lVar4 + 0x330));
    lVar4 = FUN_10032a0bc();
    if (*(char *)(lVar4 + 0x60) == '\0') {
      lVar4 = FUN_10032a0bc();
      local_68 = (long *******)0x0;
      local_58 = FUN_1001ffb74;
      local_70 = param_1;
      local_60 = param_1;
      FUN_1000be5e4(lVar4 + 0x30,&local_70);
    }
    else {
      uVar2 = FUN_1001fe900(param_1);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)((long)param_1 + 0x134) = 1;
      }
    }
LAB_1001fe4ac:
    FUN_10030e5d0(uVar3);
    return;
  case 10:
    if (*(int *)(lVar4 + 0x168) != 0) {
      uVar7 = FUN_10002f320();
      FUN_10001549c(&local_70,"inboxMessage");
      FUN_10001549c(local_88,"opulent");
      FUN_1000315c4(uVar7,&local_70,local_88);
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
      if ((long)local_60 < 0) {
        operator_delete(local_70);
      }
      uVar7 = FUN_10002f320();
      FUN_10001549c(&local_70,"inboxMessage");
      FUN_100031670(uVar7,&local_70,lVar4 + 0x168);
      if ((long)local_60 < 0) {
        operator_delete(local_70);
      }
    }
  }
  FUN_10030e51c(uVar3);
  return;
}


```


---

### `FUN_100289d14` @ `0x100289d14`

```c

void FUN_100289d14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (local_28 == (void *)0x0) {
        return;
      }
      operator_delete__(local_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x12) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x14) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb66a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb6e3);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x1c) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb72a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
LAB_100289fc4:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}


```


---

### `FUN_100320dd0` @ `0x100320dd0`

```c

void FUN_100320dd0(undefined8 param_1,long param_2)

{
  undefined1 auStack_20 [8];
  void *local_18;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_1004e3120(auStack_20,"The party member has been removed.");
    FUN_1001e55b0(0x3fc00000,auStack_20,0,1);
    if (local_18 != (void *)0x0) {
      operator_delete__(local_18);
    }
  }
  return;
}


```


---

### `FUN_100320140` @ `0x100320140`

```c

void FUN_100320140(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x28) == -0x12) {
    pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_EXISTS";
  }
  else {
    if (*(int *)(param_2 + 0x28) == 0) {
      return;
    }
    pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_VALID";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1001e55b0(0x40200000,uVar2,1,1);
  return;
}


```


---

### `FUN_10020c964` @ `0x10020c964`

```c

void FUN_10020c964(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  void *local_18;
  
  FUN_1004e3170(auStack_20,param_1 + 0x58);
  FUN_100111870(auStack_20);
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  FUN_1001e55b0(0x40200000,uVar1,0,1);
  return;
}


```


---

### `FUN_10011c0dc` @ `0x10011c0dc`

```c

void FUN_10011c0dc(int param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_48;
  void *local_40;
  char local_31;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1001148bc();
  iVar2 = FUN_1001167a4();
  if (iVar2 == 0) {
    return;
  }
  if (param_1 == 1) {
    FUN_10001549c(&local_48,param_2);
    FUN_10014e3a8(&local_48);
    if (local_31 < '\0') {
      operator_delete(local_48);
    }
    iVar2 = thunk_FUN_100529af0();
    if (iVar2 == 0) {
      return;
    }
    thunk_FUN_100529afc(param_2);
    return;
  }
  if (param_1 == 3) {
    FUN_1001db0bc(param_2,0);
    return;
  }
  if (param_1 != 2) {
    return;
  }
  pcVar1 = (char *)(param_2 + 0x100);
  iVar2 = _strcmp(pcVar1,"q");
  if (iVar2 != 0) {
    iVar2 = _strcmp(pcVar1,"a");
    if (iVar2 == 0) {
      FUN_1004e313c(&local_48);
      FUN_1004e3148(&local_48,param_2);
      FUN_1001e55b0(0xbf800000,&local_48,0,1);
    }
    else {
      iVar2 = _strcmp(pcVar1,"f");
      if (iVar2 == 0) {
        FUN_1004e313c(&local_48);
        FUN_1004e3148(&local_48,param_2);
        uVar3 = FUN_10002f320();
        FUN_1001e5600(0xbf800000,&local_48,FUN_10011c2b4,0,uVar3,0,1);
        FUN_1001117cc(0);
      }
      else {
        iVar2 = _strcmp(pcVar1,"p");
        if (iVar2 != 0) goto LAB_10011c298;
        FUN_1004e313c(&local_48);
        FUN_1004e313c(auStack_30);
        FUN_1004e3148(auStack_30,param_2 + 0x200);
        FUN_1004e3148(&local_48,param_2);
        uVar3 = FUN_10002f320();
        FUN_1001e5600(0xbf800000,&local_48,FUN_10011c2c0,0,uVar3,0,1);
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
  }
LAB_10011c298:
  iVar2 = thunk_FUN_100529af0();
  if (iVar2 != 0) {
    thunk_FUN_100529b00();
  }
  return;
}


```


---

### `FUN_10027d778` @ `0x10027d778`

```c

void FUN_10027d778(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10015d3ec();
  iVar1 = FUN_10016680c(uVar2,0);
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    FUN_100166750(uVar2,0);
    uVar2 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_SENT_TOASTIE",0);
    FUN_1001e55b0(0x3fe66666,uVar2,0,0);
    return;
  }
  return;
}


```


---

### `FUN_1001fea18` @ `0x1001fea18`

```c

void FUN_1001fea18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_GUILD_NO_PLAYER",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[GUILD_NAME]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_2);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1001e55b0(0xbf800000,auStack_30,0,1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}


```


---

### `FUN_1002002f8` @ `0x1002002f8`

```c

void FUN_1002002f8(long param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_1001e56a0(param_2 ^ 1);
  if (((param_2 ^ 1) & 1) != 0) {
    FUN_1002c63c0(*(undefined8 *)(param_1 + 8));
    lVar4 = FUN_10015d3ec();
    if (1 < *(int *)(lVar4 + 0x55cc) - 5U) {
      pcVar1 = "MAIN_MATCH_CONFIRM_EXPLAIN_FAILED";
      if (*(int *)(param_1 + 0x78) != 1) {
        pcVar1 = "MAIN_MATCH_CONFIRM_EXPLAIN_FAILED_YOURFAULT";
      }
      uVar3 = FUN_1004e0150(pcVar1,0);
      FUN_1001e55b0(0x41400000,uVar3,0,1);
    }
    FUN_100200414(param_1);
    return;
  }
  FUN_1002c6308();
  FUN_100200414(param_1);
  FUN_10032523c();
  uVar3 = FUN_100325300();
  FUN_10020047c(param_1 + 0x28,uVar3,0);
  FUN_10032523c();
  uVar3 = FUN_100325300();
  FUN_100200500(0,param_1 + 0x38,uVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  FUN_10032523c();
  uVar3 = FUN_100325300();
  FUN_1002c5e9c(uVar5,uVar3);
  lVar4 = FUN_1004f0338();
  if (*(int *)(lVar4 + 0x98) != 0) {
    FUN_1004f0108(param_1 + 0x80);
  }
  FUN_1002c5de4(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_100126a84();
  if (iVar2 != 0) {
    thunk_FUN_10052a3d4();
    return;
  }
  return;
}


```


---

### `FUN_100270d00` @ `0x100270d00`

```c

void FUN_100270d00(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x1c0))();
    FUN_1001117e4(1);
    FUN_100111808(*(char *)((long)param_1 + 0x125af) == '\0');
    iVar1 = FUN_10015d3f8();
    if (iVar1 != 0) {
      lVar2 = FUN_10015d3ec();
      FUN_100169cec(lVar2 + 0x278);
    }
    *(undefined1 *)((long)param_1 + 0x125b4) = 1;
    FUN_100531b88(param_1 + 0x714);
    uVar3 = FUN_10012f6b0();
    if (((uVar3 & 1) == 0) && ((int)param_1[0x248e] != 0)) {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_STAR_FOLLOW_TUTORIAL_TOASTIE",0);
      FUN_1001e55b0(0xbf800000,uVar4,0,1);
      FUN_10012f5f0();
    }
    (**(code **)(*param_1 + 0x150))(param_1);
    FUN_100270dec(param_1);
    return;
  }
  FUN_1001117e4(0);
  FUN_100111808(1);
  *(undefined1 *)((long)param_1 + 0x125b4) = 0;
  return;
}


```


---

### `FUN_100283764` @ `0x100283764`

```c

void FUN_100283764(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (local_28 == (void *)0x0) {
        return;
      }
      operator_delete__(local_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x13) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ea7ed);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_NOT_IN_GUILD";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_IN_GUILD";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaac0);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_PERMISSIONS";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eab04);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77b1);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_GUILD_FULL";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0xe) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77e5), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_MIN_SKILL_TIER";
LAB_100283a74:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}


```


---

### `FUN_100251d0c` @ `0x100251d0c`

```c

void FUN_100251d0c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(int *)(param_2 + 0x40) + 0x11;
  if (uVar1 < 3) {
    uVar2 = FUN_1004e0150((&PTR_s_MENU_PARTY_COULD_NOT_INVITE_NOT__10147a828)[(int)uVar1],0);
    FUN_1001e55b0(0x40200000,uVar2,1,1);
  }
  FUN_100250d0c(param_1,1);
  return;
}


```


---

### `FUN_10020f300` @ `0x10020f300`

```c

void FUN_10020f300(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  
  bVar7 = *(byte *)(param_2 + 0x5f);
  uVar5 = (ulong)bVar7;
  uVar6 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar6;
  if (-1 < (char)bVar7) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0x10) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e51ed);
    if (iVar2 == 0) {
      pcVar3 = "MENU_FRIENDS_THEIR_LIST_FULL";
      goto LAB_10020f3b0;
    }
    bVar7 = *(byte *)(param_2 + 0x5f);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 0x50);
  }
  if (-1 < (char)bVar7) {
    uVar6 = uVar5;
  }
  if ((uVar6 != 0x13) ||
     (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e521b),
     iVar2 != 0)) {
    return;
  }
  pcVar3 = "MENU_FRIENDS_YOUR_LIST_FULL";
LAB_10020f3b0:
  uVar4 = FUN_1004e0150(pcVar3,0);
  FUN_1001e55b0(0x40200000,uVar4,0,1);
  return;
}


```


---

### `FUN_1001feaac` @ `0x1001feaac`

```c

void FUN_1001feaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_USER_TEAM",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[TEAM_NAME]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_2);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,"[PLAYER_HANDLE]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_3);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1001e55b0(0xbf800000,auStack_30,0,1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}


```


---

### Callers of intermediate_0x1e5600

Found 1 callers:

### `FUN_10011c0dc` @ `0x10011c0dc`

```c

void FUN_10011c0dc(int param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_48;
  void *local_40;
  char local_31;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1001148bc();
  iVar2 = FUN_1001167a4();
  if (iVar2 == 0) {
    return;
  }
  if (param_1 == 1) {
    FUN_10001549c(&local_48,param_2);
    FUN_10014e3a8(&local_48);
    if (local_31 < '\0') {
      operator_delete(local_48);
    }
    iVar2 = thunk_FUN_100529af0();
    if (iVar2 == 0) {
      return;
    }
    thunk_FUN_100529afc(param_2);
    return;
  }
  if (param_1 == 3) {
    FUN_1001db0bc(param_2,0);
    return;
  }
  if (param_1 != 2) {
    return;
  }
  pcVar1 = (char *)(param_2 + 0x100);
  iVar2 = _strcmp(pcVar1,"q");
  if (iVar2 != 0) {
    iVar2 = _strcmp(pcVar1,"a");
    if (iVar2 == 0) {
      FUN_1004e313c(&local_48);
      FUN_1004e3148(&local_48,param_2);
      FUN_1001e55b0(0xbf800000,&local_48,0,1);
    }
    else {
      iVar2 = _strcmp(pcVar1,"f");
      if (iVar2 == 0) {
        FUN_1004e313c(&local_48);
        FUN_1004e3148(&local_48,param_2);
        uVar3 = FUN_10002f320();
        FUN_1001e5600(0xbf800000,&local_48,FUN_10011c2b4,0,uVar3,0,1);
        FUN_1001117cc(0);
      }
      else {
        iVar2 = _strcmp(pcVar1,"p");
        if (iVar2 != 0) goto LAB_10011c298;
        FUN_1004e313c(&local_48);
        FUN_1004e313c(auStack_30);
        FUN_1004e3148(auStack_30,param_2 + 0x200);
        FUN_1004e3148(&local_48,param_2);
        uVar3 = FUN_10002f320();
        FUN_1001e5600(0xbf800000,&local_48,FUN_10011c2c0,0,uVar3,0,1);
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
  }
LAB_10011c298:
  iVar2 = thunk_FUN_100529af0();
  if (iVar2 != 0) {
    thunk_FUN_100529b00();
  }
  return;
}


```


---

### Callers of full_wrapper_0x1e564c

Found 6 callers:

### `FUN_10024f08c` @ `0x10024f08c`

```c

/* WARNING: Removing unreachable block (ram,0x00010024f0fc) */
/* WARNING: Removing unreachable block (ram,0x00010024f34c) */

undefined8
FUN_10024f08c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_c0;
  void *local_b8;
  char local_a9;
  void *local_a8;
  void *local_a0;
  char local_91;
  void *local_90;
  void *local_88;
  long local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  string local_68 [8];
  uint local_60;
  undefined4 uStack_5c;
  byte local_51;
  undefined1 auStack_50 [8];
  void *local_48;
  
  lVar1 = FUN_10015d3ec();
  if (*(char *)(lVar1 + 0x567a) != '\0') {
    FUN_1004e313c(auStack_50);
    FUN_10001549c(local_68,param_2);
    (**(code **)(*param_1 + 0x1c0))(param_1,local_68,auStack_50);
    uVar2 = FUN_1004e3654(auStack_50,&DAT_101d91650);
    if ((uVar2 & 1) == 0) {
      FUN_10015d3ec();
      uVar3 = FUN_100164f34();
      uVar3 = FUN_1004e3654(auStack_50,uVar3);
      FUN_1004e3120(local_68,param_4);
      FUN_100187144(param_1 + 0x519d,auStack_50,local_68,param_5,uVar3,0);
      if ((void *)CONCAT44(uStack_5c,local_60) != (void *)0x0) {
        operator_delete__((void *)CONCAT44(uStack_5c,local_60));
      }
      if ((((param_6 | (uint)uVar3) & 1) == 0) &&
         (((*(byte *)((long)param_1 + 0x2c2c) >> 1 & 1) == 0 ||
          ((((char)param_1[0x59d5] != '\0' && (*(char *)((long)param_1 + 0x2ceaa) == '\0')) ||
           ((*(byte *)((long)param_1 + 0x2c2c) & 1) != 0)))))) {
        FUN_10001549c(local_68,param_4);
        uVar3 = FUN_1004e0150("MENU_PARTY_MESSAGE_NOTIFICATION",0);
        thunk_FUN_1004e439c(auStack_78,uVar3);
        FUN_1004e3120(&local_90,"[PLAYER_NAME]");
        FUN_1004e3bc4(auStack_78,0,&local_90,auStack_50);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        local_90 = (void *)0x0;
        local_88 = (void *)0x0;
        local_80 = 0;
        if (-1 < (char)local_51) {
          local_60 = (uint)local_51;
        }
        if (local_60 < 0x21) {
          std::string::operator=((string *)&local_90,local_68);
        }
        else {
          std::string::string((string *)&local_c0,local_68,0,0x1d,(allocator *)local_68);
          std::string::string((string *)&local_a8,(string *)&local_c0);
          std::string::operator=((string *)&local_90,(string *)&local_a8);
          if (local_91 < '\0') {
            operator_delete(local_a8);
          }
          if (local_a9 < '\0') {
            operator_delete(local_c0);
          }
          std::string::append((char *)&local_90);
        }
        FUN_1004e3120(&local_a8,"[PARTY_MESSAGE_PREVIEW]");
        FUN_1004e3170(&local_c0,&local_90);
        FUN_1004e3bc4(auStack_78,0,&local_a8,&local_c0);
        if (local_b8 != (void *)0x0) {
          operator_delete__(local_b8);
        }
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
        }
        FUN_1001e564c(0x40800000,auStack_78,FUN_10024f37c,0,FUN_10024f384,0,param_1,1,0,1);
        FUN_100016598(param_1 + 0x59be,1);
        if (local_80 < 0) {
          operator_delete(local_90);
        }
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
        }
      }
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  return 1;
}


```


---

### `FUN_100273450` @ `0x100273450`

```c

/* WARNING: Removing unreachable block (ram,0x000100273cac) */

void FUN_100273450(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 ****ppppuVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  char *pcVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  ulong local_130;
  ulong uStack_128;
  void *local_100;
  void *local_f8;
  char local_e9;
  void *local_e8;
  void *local_e0;
  char local_d1;
  void *local_d0;
  void *local_c8;
  long local_c0;
  undefined1 auStack_b8 [8];
  void *local_b0;
  void *local_a8;
  void *local_a0;
  byte local_91;
  undefined8 ***local_90;
  size_t local_88;
  byte local_79;
  undefined1 auStack_78 [8];
  void *local_70;
  
  puVar1 = (uint *)(param_1 + 0x2494);
  pbVar18 = (byte *)(param_1 + 0x24a1);
  if (*puVar1 != 0) {
    uVar22 = 0;
    do {
      lVar24 = param_1[0x2495];
      plVar23 = (long *)(lVar24 + uVar22 * 0x68);
      plVar16 = plVar23;
      if (*(char *)((long)plVar23 + 0x17) < '\0') {
        plVar16 = (long *)*plVar23;
      }
      lVar13 = FUN_10015d3ec();
      pcVar21 = *(char **)(lVar13 + 0x5508);
      if (-1 < *(char *)(lVar13 + 0x551f)) {
        pcVar21 = (char *)(lVar13 + 0x5508);
      }
      iVar10 = _strcasecmp((char *)plVar16,pcVar21);
      FUN_1004e313c(auStack_78);
      plVar16 = plVar23;
      if (*(char *)((long)plVar23 + 0x17) < '\0') {
        plVar16 = (long *)*plVar23;
      }
      FUN_10001549c(&local_90,plVar16);
      (**(code **)(*param_1 + 0x1d8))(param_1,&local_90,auStack_78);
      iVar11 = FUN_1004e3654(auStack_78,&DAT_101d91650);
      if ((iVar11 == 0) || (pcVar21 = (char *)(lVar24 + uVar22 * 0x68 + 0x61), *pcVar21 != '\0')) {
        uVar12 = FUN_1002725c8(param_1,&local_90);
        if ((uVar12 == 0xffffffff) && (iVar10 == 0)) {
          uVar12 = FUN_1002725c8(param_1,lVar24 + uVar22 * 0x68 + 0x18);
        }
        if (uVar12 == 0xffffffff) {
          uVar12 = FUN_1002742c8(param_1,&local_90);
          FUN_100270dec(param_1);
          plVar16 = (long *)param_1[0x23df];
          if ((plVar16 == (long *)0x0) || (iVar11 = (**(code **)(*plVar16 + 0x40))(), iVar11 != 2))
          {
            bVar9 = true;
          }
          else {
            if (iVar10 == 0) {
              lVar13 = lVar24 + uVar22 * 0x68;
              plVar23 = (long *)(lVar13 + 0x18);
              cVar8 = *(char *)(lVar13 + 0x2f);
            }
            else {
              cVar8 = *(char *)((long)plVar23 + 0x17);
            }
            if (cVar8 < '\0') {
              plVar23 = (long *)*plVar23;
            }
            plVar16 = (long *)param_1[0x23df];
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x78))(plVar16,plVar23,200);
            }
            bVar9 = false;
          }
          if (uVar12 != 0xffffffff) {
            if (bVar9) goto LAB_1002735a8;
            bVar9 = false;
            goto LAB_1002735fc;
          }
        }
        else {
LAB_1002735a8:
          lVar13 = lVar24 + uVar22 * 0x68;
          plVar23 = (long *)(lVar13 + 0x30);
          if (*(char *)(lVar13 + 0x47) < '\0') {
            plVar23 = (long *)*plVar23;
          }
          lVar13 = lVar24 + uVar22 * 0x68;
          plVar16 = (long *)(lVar13 + 0x48);
          if (*(char *)(lVar13 + 0x5f) < '\0') {
            plVar16 = (long *)*plVar16;
          }
          FUN_10027462c(param_1[0x2497] + (ulong)uVar12 * 0x50,auStack_78,plVar23,plVar16,
                        iVar10 == 0,0);
          bVar9 = true;
LAB_1002735fc:
          uVar17 = (ulong)local_79;
          sVar3 = local_88;
          if (-1 < (char)local_79) {
            sVar3 = uVar17;
          }
          bVar7 = *(byte *)((long)param_1 + 0x1251f);
          sVar4 = param_1[0x24a2];
          if (-1 < (char)bVar7) {
            sVar4 = (ulong)bVar7;
          }
          if (sVar3 == sVar4) {
            ppppuVar5 = (undefined8 ****)local_90;
            if (-1 < (char)local_79) {
              ppppuVar5 = &local_90;
            }
            pbVar19 = *(byte **)pbVar18;
            if (-1 < (char)bVar7) {
              pbVar19 = pbVar18;
            }
            if ((char)local_79 < '\0') {
              if ((sVar3 != 0) && (iVar11 = _memcmp(ppppuVar5,pbVar19,sVar3), iVar11 != 0))
              goto LAB_10027374c;
            }
            else if (sVar3 != 0) {
              pbVar20 = (byte *)((ulong)&local_90 | 1);
              if ((uint)*pbVar19 == ((uint)local_90 & 0xff)) {
                do {
                  uVar17 = uVar17 - 1;
                  pbVar19 = pbVar19 + 1;
                  if (uVar17 == 0) goto LAB_10027379c;
                  bVar6 = *pbVar20;
                  pbVar20 = pbVar20 + 1;
                } while (bVar6 == *pbVar19);
              }
              goto LAB_10027374c;
            }
LAB_10027379c:
            if ((bVar9) && (*(char *)(lVar24 + uVar22 * 0x68 + 0x60) != '\0' || iVar10 != 0)) {
              lVar13 = lVar24 + uVar22 * 0x68;
              plVar23 = (long *)(lVar13 + 0x30);
              if (*(char *)(lVar13 + 0x47) < '\0') {
                plVar23 = (long *)*plVar23;
              }
              FUN_1004e3120(&local_a8,plVar23);
              lVar13 = lVar24 + uVar22 * 0x68;
              plVar23 = (long *)(lVar13 + 0x48);
              if (*(char *)(lVar13 + 0x5f) < '\0') {
                plVar23 = (long *)*plVar23;
              }
              FUN_100187144(param_1 + 0x1bd3,auStack_78,&local_a8,plVar23,iVar10 == 0,0);
              if (local_a0 != (void *)0x0) {
                operator_delete__(local_a0);
              }
            }
            if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) &&
               (*(char *)(lVar24 + uVar22 * 0x68 + 0x60) == '\0')) {
              FUN_100016598(param_1[0x2497] + (ulong)uVar12 * 0x50,1);
            }
          }
          else {
LAB_10027374c:
            pcVar21 = (char *)(lVar24 + uVar22 * 0x68 + 0x60);
            if (*pcVar21 != '\0') {
              lVar13 = lVar24 + uVar22 * 0x68;
              pcVar14 = (char *)(lVar13 + 0x18);
              if (*(char *)(lVar13 + 0x2f) < '\0') {
                pcVar14 = *(char **)pcVar14;
              }
              pbVar19 = pbVar18;
              if ((char)bVar7 < '\0') {
                pbVar19 = *(byte **)pbVar18;
              }
              iVar11 = _strcasecmp(pcVar14,(char *)pbVar19);
              if (iVar11 == 0) goto LAB_10027379c;
              if (*pcVar21 != '\0') goto LAB_100273900;
            }
            lVar13 = param_1[0x2497] + (ulong)uVar12 * 0x50;
            *(undefined1 *)(lVar13 + 0x4c) = 1;
            FUN_100016598(lVar13,1);
            if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) {
              FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_IM_received.mp3",0,0);
            }
            if ((int)param_1[0x23f8] != 0) {
              uVar17 = 0;
              do {
                iVar10 = FUN_1004e3654(*(long *)(param_1[0x23f9] + uVar17 * 8) + 0x3cd0,auStack_78);
                if (iVar10 != 0) {
                  FUN_10019e90c(*(undefined8 *)(param_1[0x23f9] + uVar17 * 8),1,1,
                                *(undefined4 *)(param_1[0x2497] + (ulong)uVar12 * 0x50 + 0x18));
                  break;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(uint *)(param_1 + 0x23f8));
            }
          }
        }
LAB_100273900:
        if (((*(char *)(lVar24 + uVar22 * 0x68 + 0x60) == '\0') &&
            ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0)) && (iVar10 = FUN_100126918(), iVar10 != 0))
        {
          if ((int)param_1[0x23f2] != 0) {
            uVar17 = 0;
            do {
              lVar13 = *(long *)(param_1[0x23f3] + uVar17 * 8);
              if (lVar13 == 0) break;
              iVar10 = FUN_1004e3654(lVar13 
// ... truncated ...
```


---

### `FUN_10032057c` @ `0x10032057c`

```c

void FUN_10032057c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_110 [8];
  void *local_108;
  undefined1 auStack_100 [8];
  void *local_f8;
  void *local_f0;
  void *local_e8;
  char local_d9;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined1 local_af;
  undefined4 local_ac;
  undefined4 local_9c;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  void *pvStack_80;
  undefined8 local_78;
  long lStack_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    FUN_1004e313c(&local_c0);
    local_58 = 0;
    lStack_70 = 0;
    local_78 = 0;
    uStack_60 = 0;
    local_68 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = (void *)0x0;
    local_af = 0;
    FUN_1004e3170(&local_f0,param_2 + 0x58);
    FUN_1000153b4(&local_c0,&local_f0);
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    std::string::operator=((string *)&local_d8,(string *)(param_2 + 0x40));
    local_9c = *(undefined4 *)(param_2 + 0xd0);
    std::string::operator=((string *)&local_68,(string *)(param_2 + 0xb8));
    std::string::operator=((string *)&pvStack_80,(string *)(param_2 + 0xa0));
    std::string::operator=((string *)&local_98,(string *)(param_2 + 0x88));
    local_ac = 0;
    uVar2 = FUN_10032045c(param_1,&local_d8);
    FUN_10001549c(&local_f0,"*GameMode_Blitz_Private*");
    lVar3 = FUN_10034ccb8(&local_f0);
    uVar4 = FUN_1004e0150(*(undefined8 *)(lVar3 + 0x78),0);
    if (local_d9 < '\0') {
      operator_delete(local_f0);
    }
    uVar5 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_PARTY",0);
    thunk_FUN_1004e439c(&local_f0,uVar5);
    FUN_1004e3120(auStack_100,"[HANDLE]");
    FUN_1004e3170(auStack_110,param_2 + 0x58);
    FUN_1004e3bc4(&local_f0,0,auStack_100,auStack_110);
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
    }
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
    }
    FUN_1004e3120(auStack_100,"[GAME_MODE_NAME]");
    FUN_1004e3bc4(&local_f0,0,auStack_100,uVar4);
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
    }
    FUN_1001e564c(0,&local_f0,FUN_100320128,uVar2,FUN_100320130,uVar2,param_1,1,0,1);
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
    if (lStack_70 < 0) {
      operator_delete(pvStack_80);
    }
    if (local_88 < 0) {
      operator_delete(local_98);
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
    if (local_c8 < 0) {
      operator_delete(local_d8);
    }
  }
  return;
}


```


---

### `FUN_10031ffec` @ `0x10031ffec`

```c

void FUN_10031ffec(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_10015d3ec();
  dVar4 = (double)FUN_1001664b0();
  if (0.0 < dVar4) {
    uVar1 = FUN_10015d3ec();
    FUN_100165c34(uVar1,param_2);
    return;
  }
  lVar2 = FUN_10034ccb8(param_4);
  uVar1 = FUN_1004e0150(*(undefined8 *)(lVar2 + 0x78),0);
  uVar3 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_PARTY",0);
  thunk_FUN_1004e439c(auStack_40,uVar3);
  FUN_1004e3120(auStack_50,"[HANDLE]");
  FUN_1004e3bc4(auStack_40,0,auStack_50,param_3);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e3120(auStack_50,"[GAME_MODE_NAME]");
  FUN_1004e3bc4(auStack_40,0,auStack_50,uVar1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1001e564c(0xbf800000,auStack_40,FUN_100320128,param_2 & 0xffffffff,FUN_100320130,
                param_2 & 0xffffffff,param_1,1,0,1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}


```


---

### `FUN_1002755e8` @ `0x1002755e8`

```c

/* WARNING: Removing unreachable block (ram,0x000100275f54) */

bool FUN_1002755e8(long *param_1,char *param_2,long param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  uint uVar1;
  char *pcVar2;
  size_t sVar3;
  byte *******pppppppbVar4;
  size_t sVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *******pppppppbVar19;
  long lVar20;
  void *local_108;
  void *local_100;
  char local_f1;
  void *local_f0;
  void *local_e8;
  char local_d9;
  void *local_d8;
  void *local_d0;
  long local_c8;
  undefined1 auStack_c0 [8];
  void *local_b8;
  void *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  byte local_99;
  undefined1 auStack_98 [8];
  void *local_90;
  byte ******local_88;
  size_t local_80;
  byte local_71;
  long local_70 [2];
  
  if (param_2 == (char *)0x0) {
    return true;
  }
  if (param_3 == 0) {
    return true;
  }
  if (param_4 == 0) {
    return true;
  }
  local_70[0] = param_3;
  lVar10 = FUN_100274c3c(param_1 + 0x2498,local_70);
  if (lVar10 == 0) goto LAB_100275f5c;
  FUN_10003330c(&local_88,lVar10);
  FUN_1004e313c(auStack_98);
  FUN_10001549c(&local_b0,param_2);
  (**(code **)(*param_1 + 0x1d8))(param_1,&local_b0,auStack_98);
  if ((char)local_99 < '\0') {
    operator_delete(local_b0);
  }
  iVar8 = FUN_1004e3654(auStack_98,&DAT_101d91650);
  if (iVar8 != 0) {
    FUN_1004e3120(&local_b0,"[?]");
    FUN_1000153b4(auStack_98,&local_b0);
    if ((void *)CONCAT44(uStack_a4,local_a8) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_a4,local_a8));
    }
  }
  plVar11 = (long *)param_1[0x23df];
  if ((plVar11 == (long *)0x0) || (iVar8 = (**(code **)(*plVar11 + 0x40))(), iVar8 != 2)) {
    bVar7 = false;
  }
  else {
    lVar12 = FUN_10015d3ec();
    pcVar2 = *(char **)(lVar12 + 0x5508);
    if (-1 < *(char *)(lVar12 + 0x551f)) {
      pcVar2 = (char *)(lVar12 + 0x5508);
    }
    iVar8 = _strcasecmp(param_2,pcVar2);
    bVar7 = iVar8 == 0;
  }
  uVar9 = FUN_1002725c8(param_1,&local_88);
  if (uVar9 == 0xffffffff) {
    plVar11 = (long *)param_1[0x23df];
    if ((plVar11 == (long *)0x0) || (iVar8 = (**(code **)(*plVar11 + 0x40))(), iVar8 != 2)) {
      uVar9 = FUN_1002742c8(param_1,&local_88);
      FUN_100270dec(param_1);
      goto LAB_10027577c;
    }
  }
  else {
LAB_10027577c:
    uVar16 = (ulong)uVar9;
    FUN_10027462c(param_1[0x2497] + (ulong)uVar9 * 0x50,auStack_98,param_4,param_5,bVar7,0);
    uVar14 = (ulong)local_71;
    sVar3 = local_80;
    if (-1 < (char)local_71) {
      sVar3 = uVar14;
    }
    bVar6 = *(byte *)((long)param_1 + 0x1251f);
    sVar5 = param_1[0x24a2];
    if (-1 < (char)bVar6) {
      sVar5 = (ulong)bVar6;
    }
    if (sVar3 == sVar5) {
      pppppppbVar4 = (byte *******)local_88;
      if (-1 < (char)local_71) {
        pppppppbVar4 = &local_88;
      }
      pbVar18 = (byte *)param_1[0x24a1];
      if (-1 < (char)bVar6) {
        pbVar18 = (byte *)(param_1 + 0x24a1);
      }
      if ((char)local_71 < '\0') {
        if ((sVar3 != 0) && (iVar8 = _memcmp(pppppppbVar4,pbVar18,sVar3), iVar8 != 0))
        goto LAB_100275854;
      }
      else if (sVar3 != 0) {
        if ((uint)*pbVar18 == ((uint)local_88 & 0xff)) {
          pbVar17 = (byte *)((ulong)&local_88 | 1);
          do {
            uVar14 = uVar14 - 1;
            pbVar18 = pbVar18 + 1;
            if (uVar14 == 0) goto LAB_100275970;
            bVar6 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar6 == *pbVar18);
        }
        goto LAB_100275854;
      }
LAB_100275970:
      if (((param_6 & 1) != 0) || (bVar7 != true)) {
        FUN_1004e3120(&local_b0,param_4);
        FUN_100187144(param_1 + 0x1bd3,auStack_98,&local_b0,param_5,bVar7,0);
        if ((void *)CONCAT44(uStack_a4,local_a8) != (void *)0x0) {
          operator_delete__((void *)CONCAT44(uStack_a4,local_a8));
        }
      }
      if ((param_6 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
          FUN_100016598(param_1[0x2497] + uVar16 * 0x50,1);
        }
LAB_100275a04:
        if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) && (iVar8 = FUN_100126918(), iVar8 != 0)) {
          uVar9 = *(uint *)(param_1 + 0x23f2);
          pppppppbVar4 = (byte *******)local_88;
          sVar3 = local_80;
          if (-1 < (char)local_71) {
            pppppppbVar4 = &local_88;
            sVar3 = (ulong)local_71;
          }
          if (uVar9 != 0) {
            uVar14 = 0;
            lVar12 = param_1[0x23f3];
            do {
              lVar20 = *(long *)(lVar12 + uVar14 * 8);
              if (lVar20 == 0) break;
              bVar6 = *(byte *)(lVar20 + 0x3d87);
              uVar15 = (ulong)bVar6;
              sVar5 = *(size_t *)(lVar20 + 0x3d78);
              if (-1 < (char)bVar6) {
                sVar5 = uVar15;
              }
              if (sVar5 == sVar3) {
                if ((char)bVar6 < '\0') {
                  if ((sVar3 == 0) ||
                     (iVar8 = _memcmp(*(void **)(lVar20 + 0x3d70),pppppppbVar4,sVar3), iVar8 == 0))
                  {
LAB_100275ae8:
                    if (*(char *)(lVar20 + 0x3dac) != '\0') {
                      bVar7 = true;
                      goto LAB_100275b00;
                    }
                  }
                }
                else {
                  if (sVar3 == 0) goto LAB_100275ae8;
                  if ((uint)*(byte *)pppppppbVar4 == ((uint)*(void **)(lVar20 + 0x3d70) & 0xff)) {
                    pbVar18 = (byte *)(lVar20 + 0x3d71);
                    pppppppbVar19 = pppppppbVar4;
                    do {
                      pppppppbVar19 = (byte *******)((long)pppppppbVar19 + 1);
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_100275ae8;
                      bVar6 = *pbVar18;
                      pbVar18 = pbVar18 + 1;
                    } while (bVar6 == *(byte *)pppppppbVar19);
                  }
                }
              }
              uVar1 = (int)uVar14 + 1;
              uVar14 = (ulong)uVar1;
            } while (uVar1 != uVar9);
          }
          bVar7 = false;
LAB_100275b00:
          uVar9 = *(uint *)(param_1 + 0x23fa);
          if (uVar9 != 0) {
            uVar14 = 0;
            lVar12 = param_1[0x23fb];
            do {
              lVar20 = *(long *)(lVar12 + uVar14 * 8);
              if (lVar20 == 0) break;
              bVar6 = *(byte *)(lVar20 + 0x3d87);
              uVar15 = (ulong)bVar6;
              sVar5 = *(size_t *)(lVar20 + 0x3d78);
              if (-1 < (char)bVar6) {
                sVar5 = uVar15;
              }
              if (sVar5 == sVar3) {
                if ((char)bVar6 < '\0') {
                  if ((sVar3 == 0) ||
                     (iVar8 = _memcmp(*(void **)(lVar20 + 0x3d70),pppppppbVar4,sVar3), iVar8 == 0))
                  {
LAB_100275bb8:
                    if (*(char *)(lVar20 + 0x3dac) != '\0') {
                      bVar7 = true;
                      break;
                    }
                  }
                }
                else {
                  if (sVar3 == 0) goto LAB_100275bb8;
                  if ((uint)*(byte *)pppppppbVar4 == ((uint)*(void **)(lVar20 + 0x3d70) & 0xff)) {
                    pbVar18 = (byte *)(lVar20 + 0x3d71);
                    pppppppbVar19 = pppppppbVar4;
                    do {
                      pppppppbVar19 = (byte *******)((long)pppppppbVar19 + 1);
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_100275bb8;
                      bVar6 = *pbVar18;
                      pbVar18 = pbVar18 + 1;
                    } while (bVar6 == *(byte *)pppppppbVar19);
                  }
                }
              }
              uVar1 = (int)uVar14 + 1;
              uVar14 = (ulong)uVar1;
            } while (uVar1 != uVar9);
          }
   
// ... truncated ...
```


---

### `FUN_10021010c` @ `0x10021010c`

```c

/* WARNING: Removing unreachable block (ram,0x000100210494) */
/* WARNING: Removing unreachable block (ram,0x00010021017c) */
/* WARNING: Removing unreachable block (ram,0x0001002101cc) */
/* WARNING: Removing unreachable block (ram,0x0001002104a4) */

void FUN_10021010c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  string *this;
  void *local_e0;
  void *local_d8;
  char local_c9;
  void *local_c8;
  void *local_c0;
  char local_b1;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_88 [2];
  char local_71;
  string local_70 [8];
  uint local_68;
  byte local_59;
  string local_58 [24];
  
  if ((*(char *)(param_1 + 0x15c) == '\0') && (uVar2 = FUN_100126940(), (uVar2 & 1) == 0)) {
    FUN_10003330c(local_58,&DAT_101d91198);
    lVar1 = param_2 + 0x68;
    uVar3 = thunk_FUN_100528b58();
    FUN_10001549c(local_70,uVar3);
    lVar4 = FUN_1000be6e4(lVar1,local_70);
    if (param_2 + 0x70 != lVar4) {
      uVar3 = thunk_FUN_100528b58();
      FUN_10001549c(local_88,uVar3);
      FUN_1000be514(lVar1,local_88);
      uVar3 = FUN_10052b19c();
      FUN_10001549c(local_70,uVar3);
      std::string::operator=(local_58,local_70);
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
    }
    lVar4 = FUN_100111860(local_58);
    if ((lVar4 != 0) && (*(char *)(param_2 + 0x80) == '\0')) {
      FUN_10003330c(local_70,&DAT_101d91198);
      FUN_1004e357c(param_2 + 0x10,local_70);
      uVar3 = FUN_1004e0150("MENU_FRIENDS_MESSAGE_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      FUN_10003330c(local_88,&DAT_101d91198);
      uVar3 = thunk_FUN_100528b64();
      FUN_10001549c(&local_b0,uVar3);
      lVar4 = FUN_1000be6e4(lVar1,&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      if (param_2 + 0x70 != lVar4) {
        uVar3 = thunk_FUN_100528b64();
        FUN_10001549c(&local_c8,uVar3);
        FUN_1000be514(lVar1,&local_c8);
        uVar3 = FUN_10052b19c();
        FUN_10001549c(&local_b0,uVar3);
        std::string::operator=((string *)local_88,(string *)&local_b0);
        if (local_a0._7_1_ < '\0') {
          operator_delete(local_b0);
        }
        if (local_b1 < '\0') {
          operator_delete(local_c8);
        }
      }
      FUN_1004e3120(&local_b0,"[PLAYER_NAME]");
      FUN_1004e3170(&local_c8,local_88);
      FUN_1004e3bc4(auStack_98,0,&local_b0,&local_c8);
      if (local_c0 != (void *)0x0) {
        operator_delete__(local_c0);
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
      }
      local_b0 = (void *)0x0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      if (-1 < (char)local_59) {
        local_68 = (uint)local_59;
      }
      if (local_68 < 0x21) {
        std::string::operator=((string *)&local_b0,local_70);
      }
      else {
        std::string::string((string *)&local_e0,local_70,0,0x1d,(allocator *)local_70);
        std::string::string((string *)&local_c8,(string *)&local_e0);
        std::string::operator=((string *)&local_b0,(string *)&local_c8);
        if (local_b1 < '\0') {
          operator_delete(local_c8);
        }
        if (local_c9 < '\0') {
          operator_delete(local_e0);
        }
        std::string::append((char *)&local_b0);
      }
      FUN_1004e3120(&local_c8,"[PRIVATE_MESSAGE_PREVIEW]");
      FUN_1004e3170(&local_e0,&local_b0);
      FUN_1004e3bc4(auStack_98,0,&local_c8,&local_e0);
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
      }
      if (local_c0 != (void *)0x0) {
        operator_delete__(local_c0);
      }
      this = operator_new(0x38);
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      std::string::operator=(this,local_58);
      std::string::operator=(this + 0x18,(string *)local_88);
      this[0x30] = (string)0x0;
      FUN_1001e564c(0,auStack_98,FUN_1002104c4,this,FUN_1002104d0,0,param_1,1,0,1);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
    }
  }
  return;
}


```


---

## HEROES_BAG Panel Class

### `FUN_1001f564c` @ `0x1001f564c`

```c

undefined8 * FUN_1001f564c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146dbe0;
  operator_new(0xea8);
  lVar2 = thunk_FUN_1002aaa60();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001f5760_10146d7e0;
  param_1[2] = &PTR_FUN_10146d810;
  param_1[5] = &PTR_FUN_10146dba8;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  lVar2 = FUN_1001e1428();
  FUN_1001f5978(param_1 + 6,lVar2 + 0x450);
  lVar2 = FUN_1001e1428();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f5720;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar2 + 0x18,&local_40);
  lVar2 = FUN_1001e1428();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f5720;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar2 + 0x28,&local_40);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_1001f5720(param_1);
  }
  return param_1;
}


```


---

### `FUN_1001f61e8` @ `0x1001f61e8`

```c

char * FUN_1001f61e8(void)

{
  return "main_nav_heroes";
}


```


---

### `FUN_1001f5f1c` @ `0x1001f5f1c`

```c

void FUN_1001f5f1c(void)

{
  FUN_1004e0150("MAIN_MENU_BAG",0);
  return;
}


```


---

### `FUN_1001fea18` @ `0x1001fea18`

```c

void FUN_1001fea18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_GUILD_NO_PLAYER",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[GUILD_NAME]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_2);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1001e55b0(0xbf800000,auStack_30,0,1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}


```


---

### `FUN_1001feaac` @ `0x1001feaac`

```c

void FUN_1001feaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_USER_TEAM",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[TEAM_NAME]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_2);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,"[PLAYER_HANDLE]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_3);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1001e55b0(0xbf800000,auStack_30,0,1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}


```


---

## HOME Panel Class

### `FUN_1001f38b0` @ `0x1001f38b0`

```c

void FUN_1001f38b0(void)

{
  FUN_1004e0150("MAIN_MENU_HOME",0);
  return;
}


```

Callers: 0


---

## String Cross-References

### "main_nav_home"

String at 0x1013e444a
  xref from 0x1001f3b84 in FUN_1001f3b80 @ 0x1001f3b80
  xref from 0x1001f3bb8 in FUN_1001f3bb4 @ 0x1001f3bb4

### "main_nav_heroes"

String at 0x1013d2664
  xref from 0x1000e6f7c in FUN_1000e6f00 @ 0x1000e6f00
  xref from 0x1001f61ec in FUN_1001f61e8 @ 0x1001f61e8
  xref from 0x1001f62a0 in FUN_1001f629c @ 0x1001f629c

### "main_nav_market"

String at 0x1013e825d
  xref from 0x100246af8 in FUN_100246af4 @ 0x100246af4
  xref from 0x100246b90 in FUN_100246b8c @ 0x100246b8c

### "main_nav_party"

String at 0x1013e8c1f
  xref from 0x100253a7c in FUN_100253a78 @ 0x100253a78
  xref from 0x100253b34 in FUN_100253b30 @ 0x100253b30

### "main_nav_social"

String at 0x1013e52ed
  xref from 0x10021059c in FUN_100210598 @ 0x100210598
  xref from 0x1002105b0 in FUN_1002105ac @ 0x1002105ac
  xref from 0x10026835c in FUN_100268358 @ 0x100268358
  xref from 0x1002683f4 in FUN_1002683f0 @ 0x1002683f0

### "MAIN_MENU_BAG"

String at 0x1013e4619
  xref from 0x1001f5f20 in FUN_1001f5f1c @ 0x1001f5f1c
  xref from 0x1001f5f30 in FUN_1001f5f2c @ 0x1001f5f2c

### "MAIN_MENU_HOME"

String at 0x1013e4377
  xref from 0x1001f38b4 in FUN_1001f38b0 @ 0x1001f38b0
  xref from 0x1001f38c4 in FUN_1001f38c0 @ 0x1001f38c0

### "MAIN_MENU_HEROES"

String at 0x1013e11ab
  xref from 0x1001f2894 in FUN_1001f2890 @ 0x1001f2890
  xref from 0x1001f28a4 in FUN_1001f28a0 @ 0x1001f28a0

### "MAIN_MENU_MARKET"

String at 0x1013e11ee
  xref from 0x100245644 in FUN_100245640 @ 0x100245640
  xref from 0x100245654 in FUN_100245650 @ 0x100245650

### "MAIN_MENU_PARTY"

String at 0x1013e1161
  xref from 0x100253a88 in FUN_100253a84 @ 0x100253a84
  xref from 0x100253b40 in FUN_100253b3c @ 0x100253b3c

### "MAIN_MENU_SOCIAL"

String at 0x1013e11dd
  xref from 0x10020d974 in FUN_10020d970 @ 0x10020d970
  xref from 0x10020d984 in FUN_10020d980 @ 0x10020d980
  xref from 0x100267f9c in FUN_100267f98 @ 0x100267f98
  xref from 0x100267fac in FUN_100267fa8 @ 0x100267fa8

