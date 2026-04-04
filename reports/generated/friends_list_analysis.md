# Friends List Data Path Analysis

Complete data path for friends list: RPC, model, UI, presence.

---

### `friendListAll`

**String addresses:** `0x10141b358`

#### `FUN_1004f58d8` @ `0x1004f58d8`

Referenced from: `0x1004f5920`

**Calls:** `FUN_1004f59d0`, `FUN_1004f22f0`, `FUN_1000ee4ec`, `operator.delete`, `FUN_1004f1744`

```c

undefined8 FUN_1004f58d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
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
  local_31 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"friendListAll");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f59d0(local_68,lVar1,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```

**Caller functions:**


---

### `friendRequestIssueByHandle`

**String addresses:** `0x10141b366`

#### `FUN_1004f5b0c` @ `0x1004f5b0c`

Referenced from: `0x1004f5b70`

**Calls:** `FUN_1004e357c`, `FUN_1004f22f0`, `FUN_1004f4c20`, `FUN_1000ee4ec`, `operator.delete`, `FUN_1004f1744`

```c

undefined8 FUN_1004f5b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  undefined4 local_4c;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
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
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1004e357c(param_2,&local_48);
  local_4c = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_68,"friendRequestIssueByHandle");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_80,lVar1,&local_48);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_68,local_80,0,&local_4c,0x5a,0);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return uVar2;
}


```

**Caller functions:**


---

### `friendRequestConfirm`

**String addresses:** `0x10141b381`

#### `FUN_1004f5c30` @ `0x1004f5c30`

Referenced from: `0x1004f5c7c`

**Calls:** `FUN_1000ee4ec`, `FUN_1004f1744`, `operator.delete`, `FUN_1004f4c20`, `FUN_1004f22f0`

```c

undefined8 FUN_1004f5c30(long param_1,undefined8 param_2,undefined8 param_3)

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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendRequestConfirm");
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
  }
  return uVar2;
}


```

**Caller functions:**


---

### `friendRequestReject`

**String addresses:** `0x10141b396`

#### `FUN_1004f5d2c` @ `0x1004f5d2c`

Referenced from: `0x1004f5d78`

**Calls:** `FUN_1000ee4ec`, `FUN_1004f1744`, `operator.delete`, `FUN_1004f4c20`, `FUN_1004f22f0`

```c

undefined8 FUN_1004f5d2c(long param_1,undefined8 param_2,undefined8 param_3)

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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendRequestReject");
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
  }
  return uVar2;
}


```

**Caller functions:**


---

### `friendDelete`

**String addresses:** `0x10141b3b7`

#### `FUN_1004f5f24` @ `0x1004f5f24`

Referenced from: `0x1004f5f70`

**Calls:** `FUN_1000ee4ec`, `FUN_1004f1744`, `operator.delete`, `FUN_1004f4c20`, `FUN_1004f22f0`

```c

undefined8 FUN_1004f5f24(long param_1,undefined8 param_2,undefined8 param_3)

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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendDelete");
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
  }
  return uVar2;
}


```

**Caller functions:**


---

### `friendsListUpdate`

**String addresses:** `0x10141b126`

#### `FUN_1004edef0` @ `0x1004edef0`

Referenced from: `0x1004eea9c`

**Calls:** `FUN_10014eb80`, `operator.delete`, `FUN_1002115d0`, `FUN_1004eed9c`, `FUN_1005220b4`, `FUN_1000e86c0`, `compare`, `operator=`, `FUN_1000ee4ec`, `FUN_1000e87dc`, `FUN_1001339ec`

```c

string * FUN_1004edef0(string *param_1,long *param_2)

{
  string *psVar1;
  string sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ushort *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  string *psVar18;
  void *local_b8 [2];
  char local_a1;
  void *local_a0;
  ulong local_98;
  byte local_89;
  char *local_88;
  ulong local_80;
  ulong local_78;
  undefined1 local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(string **)(param_1 + 0x30) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(string **)(param_1 + 0x48) = param_1 + 0x50;
  psVar18 = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)psVar18 = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  psVar1 = param_1 + 0x140;
  sVar2 = param_1[0x142];
  *(undefined2 *)(param_1 + 0x140) = 0xffff;
  param_1[0x142] = SUB41((byte)sVar2 & 0xfff0,0);
  if ((int)param_2[0xb] != 0) {
    uVar15 = ((byte)sVar2 & 0xfff0) << 0x10 | 0xfffa;
    goto LAB_1004eead8;
  }
  lVar4 = FUN_1000e86c0(param_2,"httpStatus");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_1004ee004:
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe);
  }
  else {
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    lVar4 = FUN_1000e87dc(param_2,&local_88);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_1004ee004;
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_88);
    iVar3 = *piVar8;
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe | iVar3 == 0x130);
    if (iVar3 == 0x130) {
      return param_1;
    }
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "tag";
  local_80 = 3;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1 + 0x18,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "time";
  local_80 = 4;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78._0_4_ = 0x100005;
  local_88 = "text";
  local_80 = 4;
  plVar6 = (long *)FUN_1000e87dc(param_2,&local_88);
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "code";
  local_80 = 4;
  puVar7 = (ushort *)FUN_1000e87dc(plVar6,&local_88);
  *(ushort *)psVar1 = *puVar7;
  *(undefined4 *)(param_1 + 0x138) = 4;
  FUN_10014eb80(psVar18,0);
  lVar4 = FUN_1000e86c0(plVar6,"quintPartyStateUpdate");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
    lVar4 = FUN_1000e86c0(plVar6,"quintPartyJoinRequest");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
      lVar4 = FUN_1000e86c0(plVar6,"quintPartyPlayerLeft");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
        lVar4 = FUN_1000e86c0(plVar6,"quintPartyMemberKick");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          lVar4 = FUN_1000e86c0(plVar6,"type");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
            local_78._0_4_ = 0x100005;
            local_88 = "type";
            local_80 = 4;
            uVar9 = FUN_1000e87dc(plVar6,&local_88);
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"states"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "states";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "states";
                local_80 = 6;
                plVar5 = (long *)FUN_1000e87dc(plVar6,&local_88);
                uVar16 = (ulong)*(uint *)(plVar5 + 1);
                if (*(uint *)(plVar5 + 1) != 0) {
                  lVar4 = *plVar5;
                  puVar10 = (undefined8 *)(lVar4 + 0x18);
                  do {
                    if ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0) {
                      puVar13 = puVar10;
                      if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                        puVar13 = (undefined8 *)*puVar10;
                      }
                      FUN_1000ee4ec(&local_88,puVar13);
                      if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
                        puVar13 = (undefined8 *)puVar10[-3];
                      }
                      else {
                        puVar13 = puVar10 + -3;
                      }
                      FUN_1000ee4ec(&local_a0,puVar13);
                      psVar18 = (string *)FUN_1001339ec(param_1 + 0x30,&local_a0);
                      std::string::operator=(psVar18,(string *)&local_88);
                      if ((char)local_89 < '\0') {
                        operator_delete(local_a0);
                      }
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      lVar4 = *plVar5;
                      uVar16 = (ulong)*(uint *)(plVar5 + 1);
                    }
                    puVar13 = puVar10 + 3;
                    puVar10 = puVar10 + 6;
                  } while (puVar13 != (undefined8 *)(lVar4 + uVar16 * 0x30));
                }
                if (*(int *)(param_1 + 0x40) != 0) {
                  param_1[0x142] = (string)((byte)param_1[0x142] | 8);
                }
              }
            }
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"counts"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "counts";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "counts";
                local_80 = 6;
                puVar10 = (undefined8 *)FUN_1000e87dc(plVar6,&local_88);
                uVar15 = *(uint *)(puVar10 + 1);
                if (uVar15 != 0) {
                  puVar17 = (undefined8 *)*puVar10;
                  puVar13 = puVar17;
                  do {
                    if ((*(byte *)((long)puVar13 + 0x29) >> 2 & 1) != 0) {
                      puVar17 = puVar13;
                      if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                        puVar17 = (undefined8 *)*puVar13;
                      }
                      uVar14 = *(undefined4 *)(puVar13 + 3);
                      FUN_1000ee4ec(&local_88,puVar17);
                      puVar11 = (undefined4 *)FUN_1002115d0(param_1 + 0x48,&local_88);
                      *puVar11 = uVar14;
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      puVar17 = (undefined8 *)*puVar10;
                      uVar15 = *(uint *)(puVar10 + 1);
                    }
                    puVar13 = puVar13 + 6;
                  } while (puVar13 != puVar17 + (ulong)uVar15 * 6);
                }
              }
            }
          }
          goto LAB_1004eea98;
        }
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
            else {
              puVar13 = puVar10 + -3;
            }
            FUN_1000ee4ec(&local_88,puVar13);
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
   
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100511e3c` @ `0x100511e3c`

Calls: `FUN_1004edef0`

```c

void FUN_100511e3c(undefined8 param_1,long param_2,string *param_3,string *param_4)

{
  string asStack_188 [24];
  string asStack_170 [298];
  byte local_46;
  
  FUN_1004edef0(asStack_188,param_1);
  if ((local_46 & 1) == 0) {
    std::string::operator=(param_4,asStack_170);
    std::string::operator=(param_3,asStack_188);
  }
  FUN_100502f48(param_2 + 0x28,asStack_188);
  FUN_10014ea98(asStack_188);
  return;
}


```

#### Caller: `FUN_100502e58` @ `0x100502e58`

Calls: `FUN_1004edef0`

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


---

### `friendslist_status_circle`

**String addresses:** `0x1013e0ed4`

#### `FUN_1002df328` @ `0x1002df328`

Referenced from: `0x1002df694`

**Calls:** `FUN_100642bd8`, `FUN_10019495c`, `FUN_1006531b0`, `FUN_10003330c`, `FUN_10064e48c`, `FUN_1000200a0`, `FUN_100652cac`, `thunk_FUN_1001c7e54`, `FUN_1001d89e0`, `FUN_100651594`, `thunk_FUN_1001d0644`, `FUN_1001d0b88`, `FUN_10064e264`, `thunk_FUN_100650e64`, `FUN_100194ba4`, ...

```c

long * FUN_1002df328(long *param_1)

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
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar12 = (undefined8 *)FUN_1001d89e0();
  *puVar12 = &PTR_thunk_FUN_1002e2d24_101489a08;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x54;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x6b;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xa7;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0xbe;
  FUN_10064e264(plVar5);
  plVar6 = param_1 + 0xd5;
  thunk_FUN_100652c08();
  thunk_FUN_1001c7e54();
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x175;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x18c;
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0x1aa;
  thunk_FUN_10019468c(plVar9,0);
  plVar10 = param_1 + 0x32b;
  thunk_FUN_100652c08(plVar10);
  plVar11 = param_1 + 0x349;
  thunk_FUN_1001d0644(plVar11,0);
  FUN_10064e264();
  FUN_10003330c(param_1 + 0x4e0,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x4e3,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x4e6,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x4e9,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x4ed) = 0;
  param_1[0x4ec] = 0;
  *(undefined4 *)((long)param_1 + 0x276c) = 0x41;
  param_1[0x4ef] = 0;
  param_1[0x4ee] = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  FUN_10003330c(param_1 + 0x4f1,&DAT_101d91198);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,param_1 + 0x89,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,param_1 + 0xf3,1);
  FUN_100642bd8(plVar5,param_1 + 0x14f,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar7,plVar10,1);
  FUN_100642bd8(plVar7,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c9,1);
  uVar13 = 0x432a0000;
  FUN_10064e47c(0,param_1);
  FUN_100652cac(puVar12 + 0x18,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar12 + 0x18,&DAT_10115a160,2);
  FUN_100652cac(plVar1,DAT_101854a08,"popup_tab_active");
  *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_101158af5,2);
  FUN_100652cac(param_1 + 0x89,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_chat_bubble");
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"friendslist_status_circle");
  local_68 = FUN_1006531b0(plVar6);
  uStack_64 = uVar13;
  FUN_10064e48c(plVar6,&local_68);
  FUN_100651594(param_1 + 0x14f,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild");
  if ((*(float *)(param_1 + 0x195) != 0.5) || (*(float *)((long)param_1 + 0xcac) != 0.5)) {
    param_1[0x195] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  FUN_100194ba4(0x40e00000,0x40800000,plVar9);
  FUN_10019495c(plVar9,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team");
  if ((*(float *)(param_1 + 0x334) != 0.5) || (*(float *)((long)param_1 + 0x19a4) != 0.5)) {
    param_1[0x334] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar10);
  }
  FUN_1001d0b88(0x40000000,plVar11);
  FUN_1001d08f8(plVar11,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  return param_1;
}


```

#### `FUN_10019de60` @ `0x10019de60`

Referenced from: `0x10019e460`

**Calls:** `FUN_10019e818`, `FUN_10019e90c`, `FUN_100651460`, `FUN_1000200a0`, `FUN_100652cdc`, `FUN_10015d3ec`, `FUN_100194b7c`, `FUN_1001c6fd8`, `operator.delete[]`, `FUN_1006513c0`, `FUN_10019e6d0`, `FUN_1004e0150`, `FUN_1001d0b14`, `_memcmp`, `FUN_1000153b4`, ...

```c

void FUN_10019de60(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  int param_9,string *param_10,undefined8 param_11,undefined8 param_12,
                  string *param_13,undefined8 param_14,undefined8 param_15,string *param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  string *this;
  long lVar2;
  long lVar3;
  string *psVar4;
  undefined4 *puVar5;
  string *psVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_88;
  void *local_80;
  char local_71;
  
  FUN_1000153b4(param_3 + 0x3cd0);
  FUN_1000153b4(param_3 + 0x3cf8,param_11);
  lVar16 = param_3 + 0x3d08;
  FUN_1000153b4(lVar16,param_12);
  this = (string *)(param_3 + 0x3d18);
  std::string::operator=(this,param_13);
  lVar2 = param_3 + 0x3d30;
  FUN_1000153b4(lVar2,param_14);
  lVar3 = param_3 + 0x3d40;
  FUN_1000153b4(lVar3,param_15);
  psVar4 = (string *)(param_3 + 0x3d50);
  std::string::operator=(psVar4,param_16);
  *(undefined1 *)(param_3 + 0x3db2) = (undefined1)param_18;
  *(undefined4 *)(param_3 + 0x3d94) = param_18._4_4_;
  uVar21 = NEON_ucvtf((undefined4)param_19);
  fVar22 = (float)NEON_fminnm(uVar21,0x45e10000);
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  *(int *)(param_3 + 0x3d9c) = (int)fVar22;
  *(undefined4 *)(param_3 + 0x3d68) = param_19._4_4_;
  lVar1 = param_3 + 0x260;
  FUN_1006513c0(lVar1,param_4);
  uVar10 = *(uint *)(param_3 + 0x2e4);
  if ((uVar10 & 0x7f80) != 0x5900) {
    *(uint *)(param_3 + 0x2e4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x5900;
    FUN_1000200a0(lVar1);
  }
  puVar5 = &DAT_101d236b8;
  if (param_17._1_1_ == '\0') {
    puVar5 = &DAT_10115a168;
  }
  uVar15 = FUN_100651460(lVar1,puVar5);
  FUN_10019e5f4(&local_88,uVar15,param_3 + 0x3cd0);
  std::string::operator=((string *)(param_3 + 0x3ce0),(string *)&local_88);
  if (local_71 < '\0') {
    operator_delete(local_88);
  }
  FUN_10019e6d0(param_3,param_5);
  *(undefined4 *)(param_3 + 0x3d90) = param_2;
  FUN_1004e0150("MENU_GENERIC_LABEL_SKILL_TIER",0);
  FUN_1004e0150("PROFILE_SKILL_LABEL_UNRANKED",0);
  FUN_1001c6fd8(param_3 + 0x31a8,param_7);
  FUN_1001c6fd8(param_3 + 0x36a8,param_8);
  FUN_100194b7c(param_3 + 0x1460,lVar16);
  iVar14 = FUN_1004e36c0(lVar16,&DAT_101d91650);
  uVar20 = 4;
  uVar10 = uVar20;
  if (iVar14 == 0) {
    uVar10 = 0;
  }
  *(uint *)(param_3 + 0x14e4) = *(uint *)(param_3 + 0x14e4) & 0xfffffffb | uVar10;
  FUN_1001d0b14(param_3 + 0x2068,lVar3);
  iVar14 = FUN_1004e36c0(lVar3,&DAT_101d91650);
  if (iVar14 == 0) {
    uVar20 = 0;
  }
  *(uint *)(param_3 + 0x20ec) = *(uint *)(param_3 + 0x20ec) & 0xfffffffb | uVar20;
  iVar14 = FUN_1004e3624(lVar2);
  lVar16 = param_3 + 0x3cf8;
  if (iVar14 == 0) {
    lVar16 = lVar2;
  }
  FUN_1006513c0(param_3 + 0x3a78,lVar16);
  *(uint *)(param_3 + 0x3afc) =
       *(uint *)(param_3 + 0x3afc) & 0xfffffffb | (uint)*(byte *)(param_3 + 0x3db2) << 2;
  *(undefined4 *)(param_3 + 0x3da4) = param_7;
  *(undefined4 *)(param_3 + 0x3da8) = param_8;
  *(undefined4 *)(param_3 + 0x3da0) = param_6;
  *(undefined8 *)(param_3 + 0x3d88) = param_1;
  FUN_10019e818(param_3,(undefined1)param_17);
  std::string::operator=((string *)(param_3 + 0x3d70),param_10);
  *(char *)(param_3 + 0x3dac) = (char)param_9;
  bVar11 = *(byte *)(param_3 + 0x3d67);
  uVar17 = (ulong)bVar11;
  sVar7 = *(size_t *)(param_3 + 0x3d58);
  if (-1 < (char)bVar11) {
    sVar7 = uVar17;
  }
  sVar8 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar8 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar7 == sVar8) {
    psVar6 = *(string **)psVar4;
    if (-1 < (char)bVar11) {
      psVar6 = psVar4;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar11 < '\0') {
      if ((sVar7 != 0) && (iVar14 = _memcmp(psVar6,pbVar19,sVar7), iVar14 != 0)) goto LAB_10019e224;
    }
    else if (sVar7 != 0) {
      if ((uint)*pbVar19 == ((uint)*(string **)psVar4 & 0xff)) {
        pbVar18 = (byte *)(param_3 + 0x3d51);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_10019e2cc;
          bVar11 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar11 == *pbVar19);
      }
      goto LAB_10019e224;
    }
LAB_10019e2cc:
    bVar11 = *(byte *)(param_3 + 0x3d2f);
    uVar17 = (ulong)bVar11;
    sVar7 = *(size_t *)(param_3 + 0x3d20);
    if (-1 < (char)bVar11) {
      sVar7 = uVar17;
    }
    sVar8 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar8 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar7 == sVar8) {
      psVar4 = *(string **)this;
      if (-1 < (char)bVar11) {
        psVar4 = this;
      }
      pbVar19 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar19 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar11 < '\0') {
        if ((sVar7 != 0) && (iVar14 = _memcmp(psVar4,pbVar19,sVar7), iVar14 != 0))
        goto LAB_10019e3a0;
      }
      else if (sVar7 != 0) {
        if ((uint)*pbVar19 == ((uint)*(string **)this & 0xff)) {
          pbVar18 = (byte *)(param_3 + 0x3d19);
          do {
            uVar17 = uVar17 - 1;
            pbVar19 = pbVar19 + 1;
            if (uVar17 == 0) goto LAB_10019e448;
            bVar11 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar11 == *pbVar19);
        }
        goto LAB_10019e3a0;
      }
    }
    else {
LAB_10019e3a0:
      lVar16 = FUN_10015d3ec();
      bVar11 = *(byte *)(param_3 + 0x3d2f);
      uVar17 = (ulong)bVar11;
      bVar12 = *(byte *)(lVar16 + 0x548f);
      sVar7 = *(size_t *)(param_3 + 0x3d20);
      if (-1 < (char)bVar11) {
        sVar7 = uVar17;
      }
      sVar8 = *(size_t *)(lVar16 + 0x5480);
      if (-1 < (char)bVar12) {
        sVar8 = (ulong)bVar12;
      }
      if (sVar7 == sVar8) {
        psVar4 = *(string **)this;
        if (-1 < (char)bVar11) {
          psVar4 = this;
        }
        pbVar19 = *(byte **)(lVar16 + 0x5478);
        if (-1 < (char)bVar12) {
          pbVar19 = (byte *)(lVar16 + 0x5478);
        }
        if ((char)bVar11 < '\0') {
          if ((sVar7 == 0) || (iVar14 = _memcmp(psVar4,pbVar19,sVar7), iVar14 == 0))
          goto LAB_10019e470;
        }
        else {
          if (sVar7 == 0) {
LAB_10019e470:
            FUN_100652cdc(param_3 + 0x170,"generic_guild");
            bVar13 = false;
            if ((*(float *)(param_3 + 0x1b8) == 0.5) &&
               (bVar13 = false, !NAN(*(float *)(param_3 + 0x1bc)))) {
              bVar13 = *(float *)(param_3 + 0x1bc) == 0.5;
            }
            if (bVar13) goto LAB_10019e4b0;
            goto LAB_10019e4a0;
          }
          if ((uint)*pbVar19 == ((uint)*(string **)this & 0xff)) {
            pbVar18 = (byte *)(param_3 + 0x3d19);
            do {
              uVar17 = uVar17 - 1;
              pbVar19 = pbVar19 + 1;
              if (uVar17 == 0) goto LAB_10019e470;
              bVar11 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar11 == *pbVar19);
          }
        }
      }
    }
LAB_10019e448:
    pcVar9 = "capsule_button_star";
    if (param_9 == 0) {
      pcVar9 = "friendslist_status_circle";
    }
    FUN_100652cdc(param_3 + 0x170,pcVar9);
  }
  else {
LAB_10019e224:
    lVar16 = FUN_10015d3ec();
    bVar11 = *(byte *)(param_3 + 0x3d67);
    uVar17 = (ulong)bVar11;
    bVar12 = *(byte *)(lVar16 + 0x54a7);
    sVar7 = *(size_t *)(param_3 + 0x3d58);
    if (-1 < (char)bVar11) {
      sVar7 = uVar17;
    }
    sVar8 = *(size_t *)(lVar16 + 0x5498);
    if (-1 < (char)bVar12) {
      sVar8 = (ulong)bVar12;
    }
    if (sVar7 != sVar8) goto LAB_10019e2cc;
    psVar6 = *(string **)psVar4;
    if (-1 < (char)bVar11) {
      psVar6 = psVar4;
    }
    pbVar19 = *(byte **)(lVar16 + 0x5490);
    if (-1 < (char)bVar12) {
      pbVar19 = (byte *)(lVar16 + 0x5490);
    }
    if ((char)bVar11 < '\0') {
      if ((sVar7 == 0) || (iVar14 = _memcmp(psVar6,pbVar19,sVar7), iVar14 == 0)) goto LAB_10019e360;
      goto LAB_10019e2cc;
    }
    if (sVar7 != 0) {
      if ((uint)*pbVar19 == ((uint)*(string **)psVar4 & 0xff)) {
        pbVar18 = (byte *)(param_3 + 0x3d51);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_10019e360;
          bVar11 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar11 == *pbVar19);
      }
      goto LAB_10019e2cc;
    }
LAB_10019e360:
    FUN_100652cdc(param_3 + 0x170,"generic_team");
    bVar13 = false;
    if ((*(float *)(param_3 + 0x1b8) == 0.5) && (bVar13 = false, !NAN(*(float *)(param_3 + 0x1bc))))
    {
      bVar13 = *(float *)(param_3 + 0x1bc) == 0.5;
    }
    if (bVar13) goto LAB_10019e4b0;
LAB_10019e4a0:
    *(undefined1 **)(param_3 + 0x1b8) = &DAT_3f0000003f000000;
    FUN_1000200a0(param_3 + 0x170);
  }
LAB_10019e4b0:
  *(uint *)(param_3 + 0x634) = *(uint *)(param_3 + 0x634) & 0xfffffffb;
  *(uint *)(param_3 + 0xc24) = *(uint *)(param_3 + 0xc24) & 0xfffffffb;
  *(uint *)(param_3 + 0x322c) = *(uint *)(param_3 + 0x322c) | 4;
  *(uint *)(param_3 + 0x372c) = *(uint *)(param_3 + 0x372c) | 4;
  *(uint *)(param_3 + 0x30fc) = *(uint *)(param_3 + 0x30fc) | 4;
  *(uint *)(param_3 + 0x35fc) = *(uint *)(param_3 + 0x35fc) | 4;
  *(uint *)(param_3 + 0x2e1c) = *(uint *)(param_3 + 0x2e1c) | 4;
  if ((*(int *)(param_3 + 0x3d98) == 2) && (*(int *)(param_3 + 0x3d9c) != 0)) {
    *(uint *)(param_3 + 0x2cec) = *(uint *)(param_3 + 0x2cec) | 4;
    *(uint *)(param_3 + 0x414) = *(uint *)(param_3 + 0x414) & 0xfffffffb;
    *(uint *)(param_3 + 0x504) = *(uint *)(param_3 + 0x504) & 0xfffffffb;
  
// ... truncated ...
```

#### `FUN_10019cfbc` @ `0x10019cfbc`

Referenced from: `0x10019d408`

**Calls:** `FUN_1000200a0`, `FUN_100652cdc`, `FUN_100652cac`, `thunk_FUN_1001c7e54`, `FUN_10001554c`, `FUN_100651594`, `FUN_10064e20c`, `FUN_1001b495c`, `FUN_1004e313c`, `thunk_FUN_1001d0644`, `FUN_1001b4964`, `FUN_1001d0b88`, `FUN_10064e264`, `thunk_FUN_100650e64`, `FUN_100194ba4`, ...

```c

long * FUN_10019cfbc(long *param_1)

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
  undefined4 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar14 = (undefined8 *)FUN_10064e20c();
  *puVar14 = &PTR_thunk_FUN_10019d7f0_101462120;
  FUN_10064e264(puVar14 + 0x17);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0xb6;
  thunk_FUN_100183990(plVar2,0);
  plVar3 = param_1 + 0x174;
  thunk_FUN_100183990(plVar3,0);
  plVar4 = param_1 + 0x232;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x250;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x26e;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x28c;
  thunk_FUN_10019468c(plVar7,0);
  plVar8 = param_1 + 0x40d;
  thunk_FUN_1001d0644(plVar8,0);
  plVar9 = param_1 + 0x58d;
  thunk_FUN_100650e64(plVar9);
  thunk_FUN_1001c7e54();
  plVar10 = param_1 + 0x60f;
  thunk_FUN_100650e64(plVar10);
  thunk_FUN_1001c6e5c();
  plVar11 = param_1 + 0x6af;
  thunk_FUN_100650e64(plVar11);
  thunk_FUN_1001c6e5c();
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x775;
  thunk_FUN_100652c08();
  *(undefined4 *)(param_1 + 0x793) = 0x41;
  param_1[0x795] = 0;
  param_1[0x794] = 0;
  param_1[0x797] = 0;
  param_1[0x799] = 0;
  param_1[0x798] = 0;
  FUN_1004e313c(param_1 + 0x79a);
  param_1[0x79e] = 0;
  param_1[0x79d] = 0;
  param_1[0x79c] = 0;
  FUN_1004e313c(param_1 + 0x79f);
  FUN_1004e313c(param_1 + 0x7a1);
  param_1[0x7a5] = 0;
  param_1[0x7a4] = 0;
  param_1[0x7a3] = 0;
  FUN_1004e313c(param_1 + 0x7a6);
  FUN_1004e313c(param_1 + 0x7a8);
  param_1[0x7ac] = 0;
  param_1[0x7ab] = 0;
  param_1[0x7aa] = 0;
  param_1[0x7af] = 0;
  param_1[0x7ae] = 0;
  param_1[0x7b1] = 0;
  param_1[0x7b0] = 0;
  param_1[0x7b3] = 0;
  param_1[0x7b2] = 0;
  param_1[0x7b5] = 0;
  param_1[0x7b4] = 0;
  *(undefined4 *)((long)param_1 + 0x3daf) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x635,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6d5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x74f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  local_a8 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a8);
  FUN_100652cac(param_1 + 0x2e,PTR_s_build___MenuPartsCommon_tga_101854970,
                "friendslist_status_circle");
  if ((*(float *)(param_1 + 0x56) != 0.0) || (*(float *)((long)param_1 + 0x2b4) != 0.5)) {
    param_1[0x56] = 0x3f00000000000000;
    FUN_1000200a0(param_1 + 0x4c);
  }
  FUN_100652cac(param_1 + 0x72,PTR_s_build___MenuPartsCommon_tga_101854970,
                "generic_chat_bubble_outline");
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffffb;
  FUN_100652cdc(param_1 + 0x150,"generic_check");
  *(uint *)((long)param_1 + 0x924) = *(uint *)((long)param_1 + 0x924) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa14) = *(uint *)((long)param_1 + 0xa14) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar2);
  FUN_1001b4964(plVar2,1);
  lVar16 = NEON_fmov(0xc1200000,4);
  param_1[0xc1] = lVar16;
  uVar13 = DAT_101d91884;
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_10019fdb0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xb7,&local_a8);
  FUN_100652cdc(param_1 + 0x20e,"generic_x");
  *(uint *)((long)param_1 + 0xf14) = *(uint *)((long)param_1 + 0xf14) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1004) = *(uint *)((long)param_1 + 0x1004) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar3);
  FUN_1001b4964(plVar3,1);
  param_1[0x17f] = lVar16;
  local_80 = uVar13;
  local_a8 = thunk_FUN_10019fdfc;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x175,&local_a8);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar15 = *(uint *)((long)param_1 + 0x1214);
  if ((uVar15 & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x1214) = uVar15 & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar4);
    uVar15 = *(uint *)((long)param_1 + 0x1214);
  }
  *(uint *)((long)param_1 + 0x1214) = uVar15 & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x26b) = *(byte *)(param_1 + 0x26b) | 1;
  uVar15 = *(uint *)((long)param_1 + 0x1304);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x1304) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x13f4);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x13f4) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_1000200a0(plVar6);
  }
  FUN_100194ba4(0x40e00000,0x40800000,plVar7);
  FUN_1001d0b88(0x40800000,plVar8);
  uVar15 = *(uint *)((long)param_1 + 0x2cec);
  if ((uVar15 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2cec) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar9);
  }
  uVar15 = *(uint *)((long)param_1 + 0x30fc);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x30fc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_1000200a0(plVar10);
  }
  uVar15 = *(uint *)((long)param_1 + 0x35fc);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x35fc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_1000200a0(plVar11);
  }
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar12,&local_a8,2);
  uVar15 = *(uint *)((long)param_1 + 0x3c2c);
  if ((uVar15 & 0x7f80) != 0xa00) {
    *(uint *)((long)param_1 + 0x3c2c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0xa00;
    FUN_1000200a0(plVar12);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  local_80 = DAT_101dbd460;
  local_a8 = FUN_10019d7e4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_a8);
  local_80 = DAT_101dbd48c;
  local_a8 = FUN_10019d7e4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_a8);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a164);
  return param_1;
}


```

**Caller functions:**

#### Caller: `FUN_1002e2640` @ `0x1002e2640`

Calls: `FUN_1002df328`

```c

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


```

#### Caller: `FUN_1002e258c` @ `0x1002e258c`

Calls: `FUN_1002df328`

```c

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


```

#### Caller: `FUN_1002e26d8` @ `0x1002e26d8`

Calls: `FUN_1002df328`

```c

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


```

#### Caller: `FUN_1002e24f8` @ `0x1002e24f8`

Calls: `FUN_1002df328`

```c

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


```

#### Caller: `FUN_1002e2464` @ `0x1002e2464`

Calls: `FUN_1002df328`

```c

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


```


---

### `EVENT_FRIENDS_LIST_QUERYING_GUILD`

**String addresses:** `0x1013e9652`

#### `FUN_100266a50` @ `0x100266a50`

Referenced from: `0x100266bd4`

**Calls:** `thunk_FUN_1002850d0`, `FUN_1001dac1c`, `FUN_1006423ec`, `FUN_100270a84`, `thunk_FUN_10026d50c`, `FUN_1004f0a20`, `thunk_FUN_10027e884`, `FUN_100016064`, `FUN_10001554c`, `FUN_1001e68a4`, `thunk_FUN_10023b4b8`, `FUN_10014f4a0`, `thunk_FUN_100264e14`, `FUN_1004e0150`, `FUN_1001e6e9c`, ...

```c

undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_100266a50` @ `0x100266d00`

Calls: `FUN_100266a50`

```c

undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```


---

### `EVENT_FRIENDS_LIST_QUERYING_USERTEAM`

**String addresses:** `0x1013e9674`

#### `FUN_100266a50` @ `0x100266a50`

Referenced from: `0x100266c0c`

**Calls:** `thunk_FUN_1002850d0`, `FUN_1001dac1c`, `FUN_1006423ec`, `FUN_100270a84`, `thunk_FUN_10026d50c`, `FUN_1004f0a20`, `thunk_FUN_10027e884`, `FUN_100016064`, `FUN_10001554c`, `FUN_1001e68a4`, `thunk_FUN_10023b4b8`, `FUN_10014f4a0`, `thunk_FUN_100264e14`, `FUN_1004e0150`, `FUN_1001e6e9c`, ...

```c

undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

#### `FUN_10027d0ac` @ `0x10027d0ac`

Referenced from: `0x10027d240`

**Calls:** `FUN_100655b6c`, `FUN_100126c88`, `FUN_10003c1ec`, `FUN_10003330c`, `FUN_100644aec`, `FUN_100644c34`, `_memcmp`, `FUN_1004e3120`, `operator.delete`, `FUN_1004e3bc4`, `FUN_10015d3ec`, `FUN_10003c048`, `thunk_FUN_1001cd434`, `operator.delete[]`, `thunk_FUN_1004e439c`, ...

```c

void FUN_10027d0ac(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *local_168;
  void *local_160;
  void *local_158;
  undefined7 local_150;
  char cStack_149;
  char local_139;
  undefined4 local_138;
  undefined8 local_134;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *pcStack_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d50);
  bVar9 = *(byte *)(lVar15 + 0x3d67);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b1) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027d278;
      }
      else {
        if (sVar3 == 0) {
LAB_10027d278:
          thunk_FUN_1001cd434(&local_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_160,uVar11);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 0;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&local_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&local_160,uVar11);
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          thunk_FUN_1004e439c(&local_160,auStack_170);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 1;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          pcStack_108 = thunk_FUN_10027d4ac;
          local_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d8,uVar11);
          local_f8 = param_1 + 0xae48;
          local_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          local_94 = 0x44160000;
          if (iVar10 == 0) {
            local_94 = 0x43e10000;
          }
          FUN_10001549c(&local_160,"userTeamInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&local_160,&local_128);
          if (cStack_149 < '\0') {
            operator_delete(local_160);
          }
          if (local_168 != (void *)0x0) {
            operator_delete__(local_168);
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
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d51);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027d278;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d51);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001635bc(uVar11,*plVar1 + 0x3d50,1);
  uVar11 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_100644aec(&local_128,uVar11,0);
  FUN_100644c34(param_1,&local_128,1);
  return;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_100266a50` @ `0x100266d00`

Calls: `FUN_100266a50`

```c

undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

#### Caller: `thunk_FUN_10027d0ac` @ `0x10027755c`

Calls: `FUN_10027d0ac`

```c

void thunk_FUN_10027d0ac(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *pvStack_168;
  void *pvStack_160;
  void *pvStack_158;
  undefined7 uStack_150;
  char cStack_149;
  char cStack_139;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined **ppuStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_d8;
  void *pvStack_d0;
  void *pvStack_c8;
  char cStack_b1;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d50);
  bVar9 = *(byte *)(lVar15 + 0x3d67);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b1) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027d278;
      }
      else {
        if (sVar3 == 0) {
LAB_10027d278:
          thunk_FUN_1001cd434(&ppuStack_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&pvStack_160,uVar11);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 0;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&pvStack_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&pvStack_160,uVar11);
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          thunk_FUN_1004e439c(&pvStack_160,auStack_170);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 1;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          pcStack_108 = thunk_FUN_10027d4ac;
          lStack_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&uStack_d8,uVar11);
          lStack_f8 = param_1 + 0xae48;
          uStack_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          uStack_94 = 0x44160000;
          if (iVar10 == 0) {
            uStack_94 = 0x43e10000;
          }
          FUN_10001549c(&pvStack_160,"userTeamInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&pvStack_160,&ppuStack_128);
          if (cStack_149 < '\0') {
            operator_delete(pvStack_160);
          }
          if (pvStack_168 != (void *)0x0) {
            operator_delete__(pvStack_168);
          }
          ppuStack_128 = &PTR_FUN_1014666e0;
          if (cStack_b1 < '\0') {
            operator_delete(pvStack_c8);
          }
          if (pvStack_d0 != (void *)0x0) {
            operator_delete__(pvStack_d0);
            uStack_d8 = 0;
            pvStack_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d51);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027d278;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d51);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001635bc(uVar11,*plVar1 + 0x3d50,1);
  uVar11 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_100644aec(&ppuStack_128,uVar11,0);
  FUN_100644c34(param_1,&ppuStack_128,1);
  return;
}


```


---

### `MENU_FRIENDS_ONLINE_TITLE`

**String addresses:** `0x1013e50f7`

#### `FUN_100248d18` @ `0x100248d18`

Referenced from: `0x10024ac44`

**Calls:** `FUN_1000200a0`, `thunk_FUN_100184f78`, `operator=`, `FUN_100345b94`, `FUN_10053077c`, `FUN_10024f9f4`, `FUN_100530adc`, `thunk_FUN_1001862ec`, `thunk_FUN_100652c08`, `_memset_pattern16`, `FUN_100181c68`, `FUN_1001a0edc`, `FUN_1001b05dc`, `FUN_100181be0`, `FUN_100652cac`, ...

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
  plVar38 = param_1 + 0x4fec;
  thunk_FUN_100650e64();
  plVar39 = param_1 + 0x5012;
  thunk_FUN_100650e64();
  plVar40 = param_1 + 0x5038;
  thunk_FUN_100650e64();
  plVar41 = param_1 + 0x505e;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  param_1[0x513d] = 0;
  param_1[0x513c] = 0;
  param_1[0x513f] = 0;
  param_1[0x513e] = 0;
  plVar42 = param_1 + 0x5140;
  param_1[0x513b] = 0;
  param_1[0x513a] = 0;
  thunk_FUN_100650e64();
  plVar43 = param_1 + 0x5166;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar66);
  *plVar66 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar44 = param_1 + 0x519d;
  thunk_FUN_1001862ec(plVar44,param_1 + 0x589);
  param_1[0x59bb] = 0;
  param_1[0x59ba] = 0;
  param_1[0x59bd] = 0;
  param_1[0x59bc] = 0;
  thunk_FUN_100016500(param_1 + 0x59be,"PARTY.PENDING_CHATS",1);
  param_1[0x59cb] = 0;
  param_1[0x59ca] = 0;
  param_1[0x59c9] = 0;
  param_1[0x59d3] = -0x100000000;
  *(undefined4 *)((long)param_1 + 0x2cea4) = 0;
  *(undefined4 *)((long)param_1 + 0x2cea7) = 0;
  *(undefined1 *)((long)param_1 + 0x2ceab) = 1;
  *(undefined4 *)((long)param_1 + 0x2ceac) = 0;
  param_1[0x59d6] = 0x10100010101;
  *(undefined1 *)(param_1 + 22999) = 0;
  FUN_10001549c(param_1 + 23000,"*GameMode_HF_Private*");
  param_1[0x59e5] = 0;
  param_1[0x59e4] = 0;
  param_1[0x59db] = 0;
  param_1[0x59e7] = 0;
  param_1[0x59e6] = 0;
  param_1[0x59e9] = 0;
  param_1[0x59e8] = 0;
  param_1[0x59eb] = 0;
  param_1[0x59ea] = 0;
  param_1[0x59ec] = 0;
  param_1[0x59cd] = -1;
  param_1[0x59cc] = -1;
  param_1[0x59cf] = -1;
  param_1[0x59ce] = -1;
  param_1[0x59d1] = -1;
  param_1[0x59d0] = -1;
  param_1[0x59d2] = -1;
  param_1[0x59dd] = -1;
  param_1[0x59dc] = -1;
  param_1[0x59df] = -1;
  param_1[0x59de] = -1;
  param_1[0x59e1] = -1;
  param_1[0x59e0] = -1;
  param_1[0x59e3] = -1;
  param_1[0x59e2] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_100642bd8(plVar13,param_1 + 0xf91,1);
  FUN_100642bd8(plVar13,plVar60,1);
  FUN_100642bd8(plVar60,local_170,1);
  FUN_100642bd8(plVar60,plVar5,1);
  FUN_100642bd8(plVar5,plVar28,1);
  FUN_100642bd8(plVar28,plVar29,1);
  FUN_1005308f8(plVar29,plVar4,1);
  FUN_1005308f8(plVar29,plVar3,1);
  FUN_1005308f8(plVar29,param_1 + 0x4d1d,1);
  FUN_1005308f8(plVar29,plVar34,1);
  FUN_1005308f8(plVar29,plVar35,1);
  FUN_1005308f8(plVar29,plVar36,1);
  FUN_1005308f8(plVar29,param_1 + 0x4f1d,1);
  FUN_1005308f8(plVar29,plVar37,1);
  FUN_1005308f8(plVar29,plVar38,1);
  FUN_1005308f8(plVar29,plVar39,1);
  FUN_1005308f8(plVar29,plVar40,1);
  FUN_1005308f8(plVar29,param_1 + 0x507c,1);
  FUN_1005308f8(plVar29,plVar41,1);
  FUN_1005308f8(plVar29,plVar30,1);
  FUN_1005308f8(plVar29,plVar31,1);
  FUN_1005308f8(plVar29,plVar32,1);
  FUN_1005308f8(plVar29,param_1 + 0x4dbe,1);
  FUN_1005308f8(plVar29,plVar33,1);
  FUN_100642bd8(plVar28,plVar42,1);
  FUN_100642bd8(plVar28,plVar43,1);
  FUN_100642bd8(plVar60,plVar66,1);
  FUN_100642bd8(plVar66,plVar44,1);
  FUN_100642bd8(plVar60,plVar26,1);
  FUN_100642bd8(plVar60,plVar27,1);
  FUN_100642bd8(plVar60,plVar18,1);
  FUN_100642bd8(plVar13,plVar15,1);
  FUN_100642bd8(plVar15,param_1 + 0x1094,1);
  FUN_100642bd8(plVar15,param_1 + 0x10ba,1);
  FUN_100642bd8(plVar15,plVar17,1);
  FUN_100642bd8(plVar15,plVar21,1);
  FUN_100642bd8(plVar15,plVar22,1);
  FUN_100642bd8(plVar15,local_158,1);
  FUN_100642bd8(local_158,plVar16,1);
  FUN_1005308f8(plVar16,plVar24,1);
  plVar66 = param_1 + 0x13bd;
  lVar56 = 0x10;
  do {
    FUN_100642bd8(plVar24,plVar66,1);
    plVar66 = plVar66 + 0x26;
    lVar56 = lVar56 + -1;
  } while (lVar56 != 0);
  FUN_100642bd8(plVar24,plVar65,1);
  FUN_100642bd8(plVar15,param_1 + 0x2668,1);
  FUN_100642bd8(plVar15,plVar6,1);
  FUN_100642bd8(plVar6,plVar19,1);
  FUN_100642bd8(plVar6,plVar20,1);
  FUN_100642bd8(plVar15,plVar58,1);
  FUN_100642bd8(plVar15,local_160,1);
  FUN_100642bd8(plVar15,local_148,1);
  FUN_100642bd8(plVar15,plVar25,1);
  FUN_100642bd8(plVar15,plVar12,1);
  FUN_100642bd8(plVar15,param_1 + 0xf1e,1);
  FU
// ... truncated ...
```

#### `FUN_10026dad4` @ `0x10026dad4`

Referenced from: `0x10026ed04`

**Calls:** `FUN_1000200a0`, `FUN_10018d7d4`, `FUN_10010b1a8`, `FUN_1001b4964`, `operator=`, `FUN_10064e47c`, `FUN_1006423ec`, `FUN_100530adc`, `FUN_10018f0e0`, `FUN_100187a90`, `FUN_100181c18`, `FUN_10065175c`, `FUN_100651594`, `FUN_1001b495c`, `FUN_100181c68`, ...

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

#### `FUN_10020df80` @ `0x10020df80`

Referenced from: `0x10020eddc`

**Calls:** `FUN_1002e2640`, `FUN_1000153b4`, `FUN_10015d3ec`, `FUN_1004e357c`, `FUN_1002e258c`, `FUN_1002e1454`, `FUN_1004e0150`, `FUN_1002e1420`, `FUN_1002e26d8`, `FUN_1004e3170`, `FUN_1004e313c`, `FUN_1002e142c`, `operator+`, `FUN_1004e3120`, `FUN_10020fbcc`, ...

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
            bVar12 =
// ... truncated ...
```

#### `FUN_10020cfb8` @ `0x10020cfb8`

Referenced from: `0x10020d1f4`

**Calls:** `FUN_1002e1420`, `operator.new`, `FUN_1001d9594`, `FUN_1004e313c`, `FUN_1002e133c`, `FUN_1004e3120`, `thunk_FUN_1002e0920`, `FUN_1004f0a20`, `thunk_FUN_100016500`, `FUN_10014f4a0`, `FUN_1004e0150`, `operator.delete[]`, `FUN_1001116f8`, `FUN_10003330c`, `FUN_1001e7abc`

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

#### `FUN_100273038` @ `0x100273038`

Referenced from: `0x100273318`

**Calls:** `FUN_100110e8c`, `FUN_1000153b4`, `FUN_1004e313c`, `FUN_1004e3120`, `FUN_1004e38ac`, `FUN_1004e3bc4`, `_qsort`, `FUN_10020df00`, `FUN_10027a11c`, `FUN_1001c102c`, `FUN_1004e372c`, `FUN_100111818`, `FUN_100111828`, `FUN_100270dec`, `operator.delete[]`, ...

```c

void FUN_100273038(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  ulong local_50;
  void *local_48;
  
  puVar2 = (uint *)(param_1 + 0x12470);
  lVar7 = *(long *)(param_1 + 0x12478);
  if (lVar7 != 0) {
    if (*puVar2 != 0) {
      lVar11 = (ulong)*puVar2 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar2 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x12480);
  lVar7 = *(long *)(param_1 + 0x12488);
  if (lVar7 != 0) {
    if (*puVar1 != 0) {
      lVar11 = (ulong)*puVar1 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar1 = 0;
  }
  puVar3 = (uint *)(param_1 + 0x9144);
  uVar4 = FUN_100111818();
  *(undefined4 *)(param_1 + 0x125a0) = uVar4;
  iVar5 = FUN_1001118b0();
  if (iVar5 != 0) {
    uVar12 = 0;
    do {
      uVar8 = FUN_1001118c0(uVar12);
      FUN_100110e8c(puVar1,uVar8);
      uVar12 = uVar12 + 1;
      uVar6 = FUN_1001118b0();
    } while (uVar12 < uVar6);
  }
  iVar5 = FUN_100111828();
  if (iVar5 != 0) {
    local_50 = 0;
    local_48 = (void *)0x0;
    uVar8 = FUN_100111828();
    FUN_10020df00(&local_50,uVar8,0);
    iVar5 = FUN_100111828();
    if (iVar5 != 0) {
      uVar13 = 0;
      do {
        uVar8 = FUN_100111838(uVar13);
        *(undefined8 *)((long)local_48 + uVar13 * 8) = uVar8;
        uVar13 = uVar13 + 1;
        uVar9 = FUN_100111828();
      } while (uVar13 < (uVar9 & 0xffffffff));
    }
    _qsort(local_48,local_50 & 0xffffffff,8,(int *)FUN_100111120);
    if ((int)local_50 != 0) {
      uVar13 = 0;
      do {
        FUN_100110e8c(puVar2,*(undefined8 *)((long)local_48 + uVar13 * 8));
        uVar13 = uVar13 + 1;
      } while (uVar13 < (local_50 & 0xffffffff));
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  if ((*(byte *)puVar3 >> 2 & 1) != 0) {
    FUN_1001c102c(param_1 + 0x90c0);
    *puVar3 = *puVar3 & 0xfffffffb;
  }
  FUN_10027a11c(param_1);
  FUN_100270dec(param_1);
  FUN_10027b34c(param_1);
  if (*(int *)(param_1 + 0x124a0) != 0) {
    FUN_100273450(param_1);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_1004e439c(&local_50,uVar8);
  FUN_1004e313c(auStack_60);
  if (*puVar1 != 0) {
    if (*(uint *)(param_1 + 0x1259c) < *puVar1) {
      pcVar10 = " (%d+)";
    }
    else {
      pcVar10 = " (%d)";
    }
    FUN_1004e38ac(auStack_60,pcVar10);
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x51b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fe0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x7db0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fd0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x72b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11f90) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x67b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  uVar12 = *(uint *)(param_1 + 0x125a0);
  if (*(uint *)(param_1 + 0x125a0) <= *(uint *)(param_1 + 0x11fb0)) {
    uVar12 = *(uint *)(param_1 + 0x11fb0);
  }
  if (uVar12 != 0) {
    if (uVar12 < 0x1f5) {
      FUN_1004e38ac(auStack_60,"(%d)");
    }
    else {
      FUN_1004e3120(auStack_70,"(500+)");
      FUN_1000153b4(auStack_60,auStack_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
    FUN_1004e3120(auStack_70,"[NUM_OFFLINE]");
    FUN_1004e3bc4(&local_50,0,auStack_70,auStack_60);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1006513c0(param_1 + 0x88b0,&local_50);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_100248d18` @ `0x10024b448`

Calls: `FUN_100248d18`

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
// ... truncated ...
```

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

#### Caller: `FUN_10020fb04` @ `0x10020fb04`

Calls: `FUN_10020df80`

```c

void FUN_10020fb04(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
    if (lVar2 != 0) {
      uVar3 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
      FUN_1001d9594(uVar3,0);
    }
    FUN_10020f6b4(param_1);
    FUN_10020df80(param_1);
    return;
  }
  return;
}


```

#### Caller: `FUN_10020fa84` @ `0x10020fa84`

Calls: `FUN_10020df80`

```c

void FUN_10020fa84(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_10020f718(param_1);
    lVar2 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
    if (lVar2 != 0) {
      uVar3 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
      FUN_1001d9594(uVar3,0);
    }
    FUN_10020df80(param_1);
    return;
  }
  return;
}


```

#### Caller: `FUN_10020efec` @ `0x10020efec`

Calls: `FUN_10020df80`

```c

void FUN_10020efec(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_1001107e4(param_1 + 0x90,0);
  iVar1 = FUN_100111914();
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = FUN_100111924(uVar4);
      FUN_10020f054(param_1 + 0x90,uVar3);
      uVar4 = uVar4 + 1;
      uVar2 = FUN_100111914();
    } while (uVar4 < uVar2);
  }
  FUN_10020df80(param_1);
  return;
}


```


---

### `MENU_FRIENDS_OFFLINE_TITLE`

**String addresses:** `0x1013e5120`

#### `FUN_10026dad4` @ `0x10026dad4`

Referenced from: `0x10026ee44`

**Calls:** `FUN_1000200a0`, `FUN_10018d7d4`, `FUN_10010b1a8`, `FUN_1001b4964`, `operator=`, `FUN_10064e47c`, `FUN_1006423ec`, `FUN_100530adc`, `FUN_10018f0e0`, `FUN_100187a90`, `FUN_100181c18`, `FUN_10065175c`, `FUN_100651594`, `FUN_1001b495c`, `FUN_100181c68`, ...

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

#### `FUN_10020df80` @ `0x10020df80`

Referenced from: `0x10020eed0`

**Calls:** `FUN_1002e2640`, `FUN_1000153b4`, `FUN_10015d3ec`, `FUN_1004e357c`, `FUN_1002e258c`, `FUN_1002e1454`, `FUN_1004e0150`, `FUN_1002e1420`, `FUN_1002e26d8`, `FUN_1004e3170`, `FUN_1004e313c`, `FUN_1002e142c`, `operator+`, `FUN_1004e3120`, `FUN_10020fbcc`, ...

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
            bVar12 =
// ... truncated ...
```

#### `FUN_10020cfb8` @ `0x10020cfb8`

Referenced from: `0x10020d238`

**Calls:** `FUN_1002e1420`, `operator.new`, `FUN_1001d9594`, `FUN_1004e313c`, `FUN_1002e133c`, `FUN_1004e3120`, `thunk_FUN_1002e0920`, `FUN_1004f0a20`, `thunk_FUN_100016500`, `FUN_10014f4a0`, `FUN_1004e0150`, `operator.delete[]`, `FUN_1001116f8`, `FUN_10003330c`, `FUN_1001e7abc`

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

#### `FUN_100273038` @ `0x100273038`

Referenced from: `0x10027336c`

**Calls:** `FUN_100110e8c`, `FUN_1000153b4`, `FUN_1004e313c`, `FUN_1004e3120`, `FUN_1004e38ac`, `FUN_1004e3bc4`, `_qsort`, `FUN_10020df00`, `FUN_10027a11c`, `FUN_1001c102c`, `FUN_1004e372c`, `FUN_100111818`, `FUN_100111828`, `FUN_100270dec`, `operator.delete[]`, ...

```c

void FUN_100273038(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  ulong local_50;
  void *local_48;
  
  puVar2 = (uint *)(param_1 + 0x12470);
  lVar7 = *(long *)(param_1 + 0x12478);
  if (lVar7 != 0) {
    if (*puVar2 != 0) {
      lVar11 = (ulong)*puVar2 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar2 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x12480);
  lVar7 = *(long *)(param_1 + 0x12488);
  if (lVar7 != 0) {
    if (*puVar1 != 0) {
      lVar11 = (ulong)*puVar1 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar1 = 0;
  }
  puVar3 = (uint *)(param_1 + 0x9144);
  uVar4 = FUN_100111818();
  *(undefined4 *)(param_1 + 0x125a0) = uVar4;
  iVar5 = FUN_1001118b0();
  if (iVar5 != 0) {
    uVar12 = 0;
    do {
      uVar8 = FUN_1001118c0(uVar12);
      FUN_100110e8c(puVar1,uVar8);
      uVar12 = uVar12 + 1;
      uVar6 = FUN_1001118b0();
    } while (uVar12 < uVar6);
  }
  iVar5 = FUN_100111828();
  if (iVar5 != 0) {
    local_50 = 0;
    local_48 = (void *)0x0;
    uVar8 = FUN_100111828();
    FUN_10020df00(&local_50,uVar8,0);
    iVar5 = FUN_100111828();
    if (iVar5 != 0) {
      uVar13 = 0;
      do {
        uVar8 = FUN_100111838(uVar13);
        *(undefined8 *)((long)local_48 + uVar13 * 8) = uVar8;
        uVar13 = uVar13 + 1;
        uVar9 = FUN_100111828();
      } while (uVar13 < (uVar9 & 0xffffffff));
    }
    _qsort(local_48,local_50 & 0xffffffff,8,(int *)FUN_100111120);
    if ((int)local_50 != 0) {
      uVar13 = 0;
      do {
        FUN_100110e8c(puVar2,*(undefined8 *)((long)local_48 + uVar13 * 8));
        uVar13 = uVar13 + 1;
      } while (uVar13 < (local_50 & 0xffffffff));
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  if ((*(byte *)puVar3 >> 2 & 1) != 0) {
    FUN_1001c102c(param_1 + 0x90c0);
    *puVar3 = *puVar3 & 0xfffffffb;
  }
  FUN_10027a11c(param_1);
  FUN_100270dec(param_1);
  FUN_10027b34c(param_1);
  if (*(int *)(param_1 + 0x124a0) != 0) {
    FUN_100273450(param_1);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_1004e439c(&local_50,uVar8);
  FUN_1004e313c(auStack_60);
  if (*puVar1 != 0) {
    if (*(uint *)(param_1 + 0x1259c) < *puVar1) {
      pcVar10 = " (%d+)";
    }
    else {
      pcVar10 = " (%d)";
    }
    FUN_1004e38ac(auStack_60,pcVar10);
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x51b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fe0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x7db0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fd0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x72b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11f90) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x67b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  uVar12 = *(uint *)(param_1 + 0x125a0);
  if (*(uint *)(param_1 + 0x125a0) <= *(uint *)(param_1 + 0x11fb0)) {
    uVar12 = *(uint *)(param_1 + 0x11fb0);
  }
  if (uVar12 != 0) {
    if (uVar12 < 0x1f5) {
      FUN_1004e38ac(auStack_60,"(%d)");
    }
    else {
      FUN_1004e3120(auStack_70,"(500+)");
      FUN_1000153b4(auStack_60,auStack_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
    FUN_1004e3120(auStack_70,"[NUM_OFFLINE]");
    FUN_1004e3bc4(&local_50,0,auStack_70,auStack_60);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1006513c0(param_1 + 0x88b0,&local_50);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
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

#### Caller: `FUN_10020fb04` @ `0x10020fb04`

Calls: `FUN_10020df80`

```c

void FUN_10020fb04(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
    if (lVar2 != 0) {
      uVar3 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
      FUN_1001d9594(uVar3,0);
    }
    FUN_10020f6b4(param_1);
    FUN_10020df80(param_1);
    return;
  }
  return;
}


```

#### Caller: `FUN_10020fa84` @ `0x10020fa84`

Calls: `FUN_10020df80`

```c

void FUN_10020fa84(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_10020f718(param_1);
    lVar2 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
    if (lVar2 != 0) {
      uVar3 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
      FUN_1001d9594(uVar3,0);
    }
    FUN_10020df80(param_1);
    return;
  }
  return;
}


```

#### Caller: `FUN_10020efec` @ `0x10020efec`

Calls: `FUN_10020df80`

```c

void FUN_10020efec(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_1001107e4(param_1 + 0x90,0);
  iVar1 = FUN_100111914();
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = FUN_100111924(uVar4);
      FUN_10020f054(param_1 + 0x90,uVar3);
      uVar4 = uVar4 + 1;
      uVar2 = FUN_100111914();
    } while (uVar4 < uVar2);
  }
  FUN_10020df80(param_1);
  return;
}


```

#### Caller: `FUN_10020f7ac` @ `0x10020f7ac`

Calls: `FUN_10020df80`

```c

void FUN_10020f7ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  puVar1 = (undefined8 *)(param_1 + 0x128);
  pbVar11 = (byte *)(param_2 + 0x90);
  bVar5 = *(byte *)(param_1 + 0x13f);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x130);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  bVar6 = *(byte *)(param_2 + 0xa7);
  sVar3 = *(size_t *)(param_2 + 0x98);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar10 = *(byte **)pbVar11;
    if (-1 < (char)bVar6) {
      pbVar10 = pbVar11;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(puVar4,pbVar10,sVar2), iVar7 == 0)) goto LAB_10020f914;
    }
    else {
      if (sVar2 == 0) goto LAB_10020f914;
      if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x129);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_10020f914;
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  FUN_10020f440(param_1,pbVar11);
  bVar5 = *(byte *)(param_1 + 0x13f);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x130);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(puVar4,pbVar11,sVar2), iVar7 == 0)) goto LAB_10020f914;
    }
    else {
      if (sVar2 == 0) goto LAB_10020f914;
      if ((uint)*pbVar11 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x129);
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar8 == 0) goto LAB_10020f914;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
    }
  }
  FUN_10020df80(param_1);
LAB_10020f914:
  puVar1 = (undefined8 *)(param_1 + 0x140);
  pbVar11 = (byte *)(param_2 + 200);
  bVar5 = *(byte *)(param_1 + 0x157);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x148);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  bVar6 = *(byte *)(param_2 + 0xdf);
  sVar3 = *(size_t *)(param_2 + 0xd0);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar10 = *(byte **)pbVar11;
    if (-1 < (char)bVar6) {
      pbVar10 = pbVar11;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar10,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x141);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  FUN_10020f560(param_1,pbVar11);
  bVar5 = *(byte *)(param_1 + 0x157);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x148);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar11,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar11 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x141);
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
    }
  }
  FUN_10020df80(param_1);
  return;
}


```


---

### `MENU_FRIENDS_SAD_AND_EMPTY`

**String addresses:** `0x1013e9a44`

#### `FUN_10026dad4` @ `0x10026dad4`

Referenced from: `0x10026e618`

**Calls:** `FUN_1001b4964`, `FUN_100642bd8`, `FUN_10010b1a8`, `FUN_100651460`, `FUN_100181bd0`, `FUN_1006423ec`, `FUN_1001816d4`, `FUN_10018e754`, `FUN_1006513c0`, `FUN_100181ba0`, `FUN_10010b098`, `FUN_10001629c`, `FUN_100651594`, `FUN_100530be0`, `FUN_100530adc`, ...

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


---

### `MENU_PEOPLE_FRIENDS_TAB_HEADER`

**String addresses:** `0x1013e95f5`

#### `FUN_100266a50` @ `0x100266a50`

Referenced from: `0x100266b68`

**Calls:** `thunk_FUN_1002850d0`, `FUN_1001dac1c`, `FUN_1006423ec`, `FUN_100642d08`, `FUN_10001554c`, `FUN_1004eef24`, `FUN_100016064`, `FUN_1001e6e9c`, `FUN_10014f4a0`, `FUN_1004f0a20`, `thunk_FUN_10026d50c`, `thunk_FUN_10023b4b8`, `thunk_FUN_10027e884`, `FUN_1001e68a4`, `FUN_1001e6910`, ...

```c

undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_100266a50` @ `0x100266d00`

Calls: `FUN_100266a50`

```c

undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```


---

### `MENU_PEOPLE_GUILD_TAB_HEADER`

**String addresses:** `0x1013e9614`

#### `FUN_1002e0920` @ `0x1002e0920`

Referenced from: `0x1002e0bfc`

**Calls:** `thunk_FUN_1005357f4`, `FUN_100642bd8`, `FUN_10064e4dc`, `FUN_10064e20c`, `FUN_1001da294`, `thunk_FUN_10020a5c4`, `FUN_10064e4e4`, `thunk_FUN_1002eca3c`, `FUN_10064e524`, `thunk_FUN_1001d9da8`, `thunk_FUN_10064dde8`, `FUN_1002ebef4`, `FUN_1002ecc7c`, `FUN_1002ebea0`, `FUN_1002ebee0`, ...

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

#### `FUN_100266a50` @ `0x100266a50`

Referenced from: `0x100266b8c`

**Calls:** `thunk_FUN_1002850d0`, `FUN_1001dac1c`, `FUN_1006423ec`, `FUN_100642d08`, `FUN_10001554c`, `FUN_1004eef24`, `FUN_100016064`, `FUN_1001e6e9c`, `FUN_10014f4a0`, `FUN_1004f0a20`, `thunk_FUN_10026d50c`, `thunk_FUN_10023b4b8`, `thunk_FUN_10027e884`, `FUN_1001e68a4`, `FUN_1001e6910`, ...

```c

undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_1002e0920` @ `0x1002e1188`

Calls: `FUN_1002e0920`

```c

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
  (**(code **)(*plVar15 + 0x68))
// ... truncated ...
```

#### Caller: `thunk_FUN_100266a50` @ `0x100266d00`

Calls: `FUN_100266a50`

```c

undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```


---

### `MENU_PEOPLE_USER_TEAM_TAB_HEADER`

**String addresses:** `0x1013e9631`

#### `FUN_1002e0920` @ `0x1002e0920`

Referenced from: `0x1002e0ca4`

**Calls:** `thunk_FUN_10020a5c4`, `FUN_1002ebea0`, `thunk_FUN_1005357f4`, `FUN_10064a8b0`, `FUN_1002ebe4c`, `FUN_1002ecce4`, `FUN_1002ebe0c`, `FUN_1002ebee0`, `thunk_FUN_100652c08`, `FUN_1004e0150`, `FUN_1001da2c0`, `FUN_10064e4e4`, `FUN_100642bd8`, `FUN_10064e20c`, `FUN_10064e4dc`, ...

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

#### `FUN_100266a50` @ `0x100266a50`

Referenced from: `0x100266bb0`

**Calls:** `FUN_1001e6e9c`, `FUN_1001e6910`, `FUN_1001dac1c`, `FUN_100270a84`, `thunk_FUN_10023b4b8`, `FUN_10014f4a0`, `FUN_100016064`, `FUN_1004e0150`, `FUN_10001554c`, `FUN_1004f0a20`, `thunk_FUN_1002850d0`, `thunk_FUN_100264e14`, `thunk_FUN_10026d50c`, `FUN_1001e68a4`, `FUN_100642d08`, ...

```c

undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_1002e0920` @ `0x1002e1188`

Calls: `FUN_1002e0920`

```c

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
  (**(code **)(*plVar15 + 0x68))
// ... truncated ...
```

#### Caller: `thunk_FUN_100266a50` @ `0x100266d00`

Calls: `FUN_100266a50`

```c

undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```


---

### `Social_FriendRequest`

**String addresses:** `0x1013da2ed`

#### `FUN_1001049e0` @ `0x1001049e0`

Referenced from: `0x100104a0c`

**Calls:** `FUN_10052b1dc`, `FUN_10052b208`, `FUN_100134110`

```c

void FUN_1001049e0(void)

{
  long lVar1;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_10052b208("Social_FriendRequest");
  FUN_10052b1dc("Social_FriendRequest");
  return;
}


```

**Caller functions:**

#### Caller: `FUN_10010fa2c` @ `0x10010fa2c`

Calls: `FUN_1001049e0`

```c

void FUN_10010fa2c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_10010fa84(param_1,param_2);
    FUN_1004ef410(param_2,param_1 + 0x90);
    FUN_1001049e0();
    FUN_100169cc0(param_1 + 0x30,1);
    return;
  }
  return;
}


```

#### Caller: `FUN_1000c22d0` @ `0x1000c22d0`

Calls: `FUN_1001049e0`

```c

void FUN_1000c22d0(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  
  bVar1 = *(byte *)(param_1 + 0x1628);
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    uVar5 = 0;
    lVar6 = param_1 + 0x1f0;
    do {
      if (*(short *)(lVar6 + 8) < 0) {
        FUN_1000c3bf4(lVar6 + -0x148);
        uVar3 = FUN_10034e42c();
        thunk_FUN_1004e439c(auStack_50,uVar3);
        iVar2 = FUN_1004e36c0(auStack_50,&DAT_101d91650);
        if (iVar2 != 0) {
          FUN_1004ef410(auStack_50,param_1 + 0x1640);
          FUN_1001049e0();
        }
        if (local_48 != (void *)0x0) {
          operator_delete__(local_48);
        }
        uVar4 = (ulong)*(byte *)(param_1 + 0x1628);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x158;
    } while (uVar5 < uVar4);
  }
  return;
}


```


---

### `Social_FriendAccept`

**String addresses:** `0x1013da302`

#### `FUN_100104a24` @ `0x100104a24`

Referenced from: `0x100104a50`

**Calls:** `FUN_10052b1dc`, `FUN_10052b208`, `FUN_100134110`

```c

void FUN_100104a24(void)

{
  long lVar1;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_10052b208("Social_FriendAccept");
  FUN_10052b1dc("Social_FriendAccept");
  return;
}


```

**Caller functions:**

#### Caller: `FUN_10010fd2c` @ `0x10010fd2c`

Calls: `FUN_100104a24`

```c

void FUN_10010fd2c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004ef444(param_2,param_1 + 0x1b0);
    FUN_100104a24();
    FUN_100169cc0(param_1 + 0x30,1);
    if (0 < *(int *)(param_1 + 0x2b8)) {
      FUN_100016598(param_1 + 0x2a0,0xffffffff);
      return;
    }
  }
  return;
}


```


---

### `Social_PresenceBroadcast`

**String addresses:** `0x1013da31b`

#### `FUN_100104a68` @ `0x100104a68`

Referenced from: `0x100104ac0`

**Calls:** `FUN_100101fac`, `FUN_10052b1e0`, `FUN_10010a220`, `FUN_10052b124`, `FUN_10052b20c`

```c

void FUN_100104a68(int param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  pcVar1 = "auto";
  if (param_1 == 0) {
    pcVar1 = "manual";
  }
  local_40 = "auto";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,pcVar1);
  FUN_10052b20c("Social_PresenceBroadcast",&puStack_38);
  FUN_10052b1e0("Social_PresenceBroadcast",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}


```

**Caller functions:**

#### Caller: `FUN_100166750` @ `0x100166750`

Calls: `FUN_100104a68`

```c

void FUN_100166750(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_90 [5];
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_48;
  undefined8 local_40;
  long lStack_38;
  
  iVar2 = FUN_10016680c();
  if (iVar2 != 0) {
    FUN_1004f1580(local_90);
    local_90[0] = &PTR_FUN_101454740;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_40 = 0;
    lStack_38 = 0;
    uVar1 = (uint)param_2 ^ 1;
    local_48 = (void *)0x0;
    FUN_1004effc4(uVar1,local_90);
    uVar3 = FUN_1004d29d0();
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x55a0) = uVar3;
      FUN_10012faa0();
    }
    else {
      *(undefined8 *)(param_1 + 0x55a8) = uVar3;
      FUN_10012ffc0();
    }
    FUN_100104a68(param_2);
    local_90[0] = &PTR_FUN_101454740;
    if (lStack_38 < 0) {
      operator_delete(local_48);
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
    FUN_1004f15a8(local_90);
  }
  return;
}


```


---

### `presenceBroadcast`

**String addresses:** `0x10141b8c7`

#### `FUN_1004fcc80` @ `0x1004fcc80`

Referenced from: `0x1004fcccc`

**Calls:** `FUN_1004f22f0`, `FUN_1004fcd7c`, `operator.delete`, `FUN_1000ee4ec`, `FUN_1004f1744`

```c

undefined8 FUN_1004fcc80(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
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
  local_34 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"presenceBroadcast");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fcd7c(local_68,lVar1,&local_34);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```

**Caller functions:**


---

### `setPresenceInvisibility`

**String addresses:** `0x10141b992`

#### `FUN_1004fdf70` @ `0x1004fdf70`

Referenced from: `0x1004fdfbc`

**Calls:** `FUN_1000ee4ec`, `operator.delete`, `FUN_1004f59d0`, `FUN_1004f22f0`, `FUN_1004f1744`

```c

undefined8 FUN_1004fdf70(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
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
  local_31 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"setPresenceInvisibility");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f59d0(local_68,lVar1,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```

**Caller functions:**


---

### `Nuo::Services::ChatClient::Username`

**String addresses:** `0x10141cd34`

#### `FUN_100528b58` @ `0x100528b58`

Referenced from: `0x100528b5c`

```c

undefined * FUN_100528b58(void)

{
  return PTR_s_Nuo_Services_ChatClient_Usern_1018675e0;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_100528b58` @ `0x1001862e4`

Calls: `FUN_100528b58`

```c

undefined * thunk_FUN_100528b58(void)

{
  return PTR_s_Nuo_Services_ChatClient_Usern_1018675e0;
}


```


---

### `Nuo::Services::ChatClient::Nickname`

**String addresses:** `0x10141cd58`

#### `FUN_100528b64` @ `0x100528b64`

Referenced from: `0x100528b68`

```c

undefined * FUN_100528b64(void)

{
  return PTR_s_Nuo_Services_ChatClient_Nickn_1018675e8;
}


```

**Caller functions:**

#### Caller: `thunk_FUN_100528b64` @ `0x1001862e8`

Calls: `FUN_100528b64`

```c

undefined * thunk_FUN_100528b64(void)

{
  return PTR_s_Nuo_Services_ChatClient_Nickn_1018675e8;
}


```


---

### `chatUrl`

**String addresses:** `0x10141be9f`

#### `FUN_100505520` @ `0x100505520`

Referenced from: `0x100505a04`

**Calls:** `FUN_10051b978`, `operator=`, `operator.delete`, `FUN_100111bb4`, `FUN_10014e9b0`, `FUN_1000e87dc`, `FUN_1000ee4ec`, `FUN_1001339ec`, `FUN_1000e86c0`, `_atoi`

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

### `chatUser`

**String addresses:** NOT FOUND


---

### `chatPass`

**String addresses:** `0x10141bea7`

#### `FUN_100505520` @ `0x100505520`

Referenced from: `0x100505a7c`

**Calls:** `FUN_1000e87dc`, `operator=`, `_atoi`, `FUN_1001339ec`, `FUN_1000e86c0`, `operator.delete`, `FUN_10051b978`, `FUN_10014e9b0`, `FUN_1000ee4ec`, `FUN_100111bb4`

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

### `MENU_FRIENDS_STATUS_AVAILABLE`

**String addresses:** `0x1013e118d`

#### `FUN_10027c18c` @ `0x10027c18c`

Referenced from: `0x10027c248`

**Calls:** `thunk_FUN_1004e439c`, `FUN_1006513c0`, `FUN_1000153b4`, `FUN_1004e0150`, `FUN_1004e313c`, `FUN_1000f1e20`, `operator.delete[]`

```c

void FUN_10027c18c(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (param_2 == 0) {
    return;
  }
  if (0.0 < *(double *)(param_2 + 0x3d88)) {
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BANNED",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    FUN_1000f1e20(auStack_40,auStack_30,(long)*(double *)(param_2 + 0x3d88),0);
    FUN_1006513c0(param_1 + 0xb438,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto LAB_10027c2e0;
  }
  FUN_1004e313c(auStack_30);
  switch(*(undefined4 *)(param_2 + 0x3d98)) {
  case 0:
    pcVar2 = "MENU_FRIENDS_STATUS_OFFLINE";
    break;
  case 1:
    pcVar2 = "MENU_FRIENDS_STATUS_AVAILABLE";
    break;
  case 2:
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BUSY",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1000f1e20(auStack_50,auStack_40,*(undefined4 *)(param_2 + 0x3d9c),0);
    FUN_1000153b4(auStack_30,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto switchD_10027c234_default;
  case 3:
    pcVar2 = "MENU_FRIENDS_STATUS_IN_PARTY";
    break;
  case 4:
    pcVar2 = "MENU_FRIENDS_STATUS_MATCHING";
    break;
  default:
    goto switchD_10027c234_default;
  }
  uVar1 = FUN_1004e0150(pcVar2,0);
  FUN_1000153b4(auStack_30,uVar1);
switchD_10027c234_default:
  FUN_1006513c0(param_1 + 0xb438,auStack_30);
LAB_10027c2e0:
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}


```

**Caller functions:**

#### Caller: `FUN_10027bd4c` @ `0x10027bd4c`

Calls: `FUN_10027c18c`

```c

void FUN_10027bd4c(long param_1,short *param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  double dVar13;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined8 **local_58;
  size_t local_50;
  ulong local_48;
  
  local_58 = (undefined8 ***)0x0;
  local_50 = 0;
  local_48 = 0;
  lVar1 = param_1 + 0xde98;
  if ((*(long **)(param_1 + 0x11ef8) == (long *)0x0) ||
     (iVar6 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))(), iVar6 != 2)) {
    FUN_100188e18(lVar1,param_2 + 0x10,&local_58);
  }
  else {
    std::string::operator=((string *)&local_58,(string *)(param_2 + 4));
  }
  uVar10 = local_48 >> 0x38;
  sVar2 = local_50;
  if (-1 < (long)local_48) {
    sVar2 = uVar10;
  }
  bVar5 = *(byte *)(param_1 + 0x1251f);
  sVar3 = *(size_t *)(param_1 + 0x12510);
  if (-1 < (char)bVar5) {
    sVar3 = (ulong)bVar5;
  }
  if (sVar2 != sVar3) goto LAB_10027bf54;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    pppuVar4 = &local_58;
  }
  pbVar12 = *(byte **)(param_1 + 0x12508);
  if (-1 < (char)bVar5) {
    pbVar12 = (byte *)(param_1 + 0x12508);
  }
  if ((long)local_48 < 0) {
    if ((sVar2 != 0) && (iVar6 = _memcmp(pppuVar4,pbVar12,sVar2), iVar6 != 0)) goto LAB_10027bf54;
  }
  else if (sVar2 != 0) {
    if ((uint)*pbVar12 == ((uint)local_58 & 0xff)) {
      pbVar11 = (byte *)((ulong)&local_58 | 1);
      do {
        uVar10 = uVar10 - 1;
        pbVar12 = pbVar12 + 1;
        if (uVar10 == 0) goto LAB_10027be68;
        bVar5 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar5 == *pbVar12);
    }
    goto LAB_10027bf54;
  }
LAB_10027be68:
  pbVar12 = (byte *)(param_1 + 0xea10);
  FUN_1001870b0(lVar1,1);
  if (*param_2 == 0) {
    FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
    pcVar9 = "MENU_CHAT_PLAYER_OFFLINE";
LAB_10027bebc:
    uVar7 = FUN_1004e0150(pcVar9,0);
    thunk_FUN_1004e439c(auStack_68,uVar7);
    FUN_1004e3120(auStack_78,"[PLAYER_NAME]");
    FUN_1004e3bc4(auStack_68,0,auStack_78,param_2 + 0x10);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
    uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
    iVar6 = FUN_1004e36c0(uVar7,auStack_68);
    if (iVar6 != 0) {
      FUN_100187120(lVar1,auStack_68,0);
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  else {
    if (0.0 < *(double *)(param_2 + 0x50)) {
      FUN_1001870b0(lVar1,0);
      pcVar9 = "MENU_CHAT_PLAYER_BANNED";
      goto LAB_10027bebc;
    }
    iVar6 = FUN_10015d3f8();
    if (iVar6 == 0) {
LAB_10027bfec:
      switch(*param_2) {
      case 1:
      case 3:
      case 4:
        FUN_1001870b0(lVar1,1);
        uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
        uVar8 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
        iVar6 = FUN_1004e36c0(uVar7,uVar8);
        if (iVar6 != 0) {
          pcVar9 = "MENU_CHAT_ENTER_YOUR_CHAT";
          goto LAB_10027c068;
        }
        break;
      case 2:
        FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
        pcVar9 = "MENU_CHAT_PLAYER_IN_GAME";
        goto LAB_10027bebc;
      }
    }
    else {
      FUN_10015d3ec();
      dVar13 = (double)FUN_1001664b0();
      if (dVar13 <= 0.0) goto LAB_10027bfec;
      FUN_1001870b0(lVar1,0);
      uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
      uVar8 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      iVar6 = FUN_1004e36c0(uVar7,uVar8);
      if (iVar6 != 0) {
        pcVar9 = "MENU_FRIENDS_PLAYER_BANNED";
LAB_10027c068:
        uVar7 = FUN_1004e0150(pcVar9,0);
        FUN_100187120(lVar1,uVar7,0);
      }
    }
  }
  if (*(long *)(param_1 + 0x11ff0) != 0) {
    FUN_10027c18c(param_1);
  }
LAB_10027bf54:
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}


```

#### Caller: `FUN_1002795e8` @ `0x1002795e8`

Calls: `FUN_10027c18c`

```c

void FUN_1002795e8(long *param_1,long param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long *******ppppppplVar7;
  string sVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  long *plVar18;
  string *psVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  string *psVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  void *pvVar27;
  string *psVar28;
  ulong uVar29;
  double dVar30;
  void *local_80;
  void *local_78;
  char local_69;
  long ******local_68;
  void *local_60;
  char local_51;
  
  lVar14 = param_1[0x23fe];
  if (lVar14 == param_2 && param_3 == 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1d42);
  puVar2 = (uint *)((long)param_1 + 0x9a54);
  param_1[0x23fe] = param_2;
  if (lVar14 != 0) {
    FUN_10019e818(lVar14,0);
    param_2 = param_1[0x23fe];
  }
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(param_2 != 0) << 2;
  if (param_2 == 0) {
    std::string::operator=((string *)(param_1 + 0x24af),(string *)&DAT_101d91198);
    std::string::operator=((string *)(param_1 + 0x24a1),(string *)&DAT_101d91198);
    FUN_100187774(param_1 + 0x1bd3,&DAT_101d91198);
    return;
  }
  plVar20 = param_1 + 0x24a1;
  psVar19 = (string *)(param_1 + 0x24af);
  bVar10 = *(byte *)(param_2 + 0x3d87);
  uVar26 = (ulong)bVar10;
  sVar4 = *(size_t *)(param_2 + 0x3d78);
  if (-1 < (char)bVar10) {
    sVar4 = uVar26;
  }
  bVar9 = *(byte *)((long)param_1 + 0x1258f);
  sVar5 = param_1[0x24b0];
  if (-1 < (char)bVar9) {
    sVar5 = (ulong)bVar9;
  }
  if (sVar4 == sVar5) {
    pvVar27 = *(void **)(param_2 + 0x3d70);
    puVar6 = pvVar27;
    if (-1 < (char)bVar10) {
      puVar6 = (undefined8 *)(param_2 + 0x3d70);
    }
    psVar23 = *(string **)psVar19;
    if (-1 < (char)bVar9) {
      psVar23 = psVar19;
    }
    if ((char)bVar10 < '\0') {
      if (sVar4 == 0) goto LAB_100279778;
      iVar13 = _memcmp(puVar6,psVar23,sVar4);
      bVar11 = iVar13 == 0;
    }
    else {
      if (sVar4 != 0) {
        if ((uint)(byte)*psVar23 == ((uint)pvVar27 & 0xff)) {
          psVar28 = (string *)(param_2 + 0x3d71);
          do {
            uVar26 = uVar26 - 1;
            psVar23 = psVar23 + 1;
            if (uVar26 == 0) goto LAB_100279778;
            sVar8 = *psVar28;
            psVar28 = psVar28 + 1;
          } while (sVar8 == *psVar23);
        }
        goto LAB_100279784;
      }
LAB_100279778:
      bVar11 = true;
    }
    if ((bVar11) && (param_3 == 0)) {
      return;
    }
  }
LAB_100279784:
  plVar3 = param_1 + 0x1bd3;
  FUN_100187060(plVar3);
  FUN_10019e818(param_1[0x23fe],1);
  std::string::operator=(psVar19,(string *)(param_1[0x23fe] + 0x3d70));
  FUN_1006513c0(param_1 + 0x1369,param_1[0x23fe] + 0x3cd0);
  pcVar17 = "generic_star_outline";
  if (*(char *)(param_1[0x23fe] + 0x3dac) != '\0') {
    pcVar17 = "generic_star";
  }
  FUN_100652cdc(param_1 + 0x1429,pcVar17);
  *puVar2 = *puVar2 | 4;
  local_68 = (long ******)(param_1[0x23fe] + 0x3d70);
  if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
    local_68 = (long ******)*local_68;
  }
  psVar23 = (string *)FUN_100274c3c(param_1 + 0x2498,&local_68);
  psVar19 = psVar23;
  if (psVar23 == (string *)0x0) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      psVar19 = (string *)(param_1[0x23fe] + 0x3d70);
      goto LAB_100279850;
    }
    FUN_100188e18(plVar3,param_1[0x23fe] + 0x3cd0,param_1 + 0x24a1);
  }
  else {
LAB_100279850:
    std::string::operator=((string *)(param_1 + 0x24a1),psVar19);
  }
  FUN_10027c09c(param_1);
  FUN_100187774(plVar3,plVar20);
  FUN_1001876ec(plVar3);
  uVar12 = FUN_1002725c8(param_1,plVar20);
  if (uVar12 == 0xffffffff) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      if (psVar23 == (string *)0x0) {
        plVar20 = (long *)(param_1[0x23fe] + 0x3d70);
        if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
          plVar20 = (long *)*plVar20;
        }
        FUN_10001549c(&local_68,plVar20);
        plVar20 = (long *)param_1[0x23df];
        if (plVar20 != (long *)0x0) {
          ppppppplVar7 = (long *******)local_68;
          if (-1 < local_51) {
            ppppppplVar7 = &local_68;
          }
          iVar13 = (**(code **)(*plVar20 + 0x78))(plVar20,ppppppplVar7,200);
          if (iVar13 != 0) {
            ppppppplVar7 = (long *******)local_68;
            if (-1 < local_51) {
              ppppppplVar7 = &local_68;
            }
            FUN_10001549c(&local_80,ppppppplVar7);
            FUN_1002742c8(param_1,&local_80);
            if (local_69 < '\0') {
              operator_delete(local_80);
            }
          }
        }
        if (local_51 < '\0') {
          operator_delete(local_68);
        }
      }
      else {
        plVar21 = plVar20;
        if (*(char *)((long)param_1 + 0x1251f) < '\0') {
          plVar21 = (long *)*plVar20;
        }
        plVar18 = (long *)param_1[0x23df];
        if ((plVar18 != (long *)0x0) &&
           (iVar13 = (**(code **)(*plVar18 + 0x80))(plVar18,plVar21,200), iVar13 != 0)) {
          FUN_1002742c8(param_1,plVar20);
        }
      }
    }
  }
  else {
    uVar26 = (ulong)uVar12;
    lVar14 = uVar26 * 4 + (ulong)uVar12;
    *(undefined1 *)(param_1[0x2497] + lVar14 * 0x10 + 0x4c) = 0;
    FUN_10019e90c(param_1[0x23fe],1,0,0);
    lVar24 = param_1[0x2497];
    if (*(int *)(lVar24 + lVar14 * 0x10 + 0x38) != 0) {
      lVar14 = 0;
      uVar29 = 0;
      do {
        lVar25 = *(long *)(lVar24 + uVar26 * 0x50 + 0x40);
        lVar24 = lVar25 + lVar14;
        if (*(char *)(lVar24 + 0xef) < '\0') {
          lVar22 = *(long *)(lVar24 + 0xd8);
        }
        else {
          lVar22 = lVar24 + 0xd8;
        }
        lVar25 = lVar25 + lVar14;
        FUN_10018714
// ... truncated ...
```


---

### `MENU_FRIENDS_STATUS_OFFLINE`

**String addresses:** `0x1013e9c29`

#### `FUN_10027c18c` @ `0x10027c18c`

Referenced from: `0x10027c23c`

**Calls:** `FUN_1000153b4`, `FUN_1000f1e20`, `thunk_FUN_1004e439c`, `operator.delete[]`, `FUN_1004e0150`, `FUN_1006513c0`, `FUN_1004e313c`

```c

void FUN_10027c18c(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (param_2 == 0) {
    return;
  }
  if (0.0 < *(double *)(param_2 + 0x3d88)) {
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BANNED",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    FUN_1000f1e20(auStack_40,auStack_30,(long)*(double *)(param_2 + 0x3d88),0);
    FUN_1006513c0(param_1 + 0xb438,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto LAB_10027c2e0;
  }
  FUN_1004e313c(auStack_30);
  switch(*(undefined4 *)(param_2 + 0x3d98)) {
  case 0:
    pcVar2 = "MENU_FRIENDS_STATUS_OFFLINE";
    break;
  case 1:
    pcVar2 = "MENU_FRIENDS_STATUS_AVAILABLE";
    break;
  case 2:
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BUSY",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1000f1e20(auStack_50,auStack_40,*(undefined4 *)(param_2 + 0x3d9c),0);
    FUN_1000153b4(auStack_30,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto switchD_10027c234_default;
  case 3:
    pcVar2 = "MENU_FRIENDS_STATUS_IN_PARTY";
    break;
  case 4:
    pcVar2 = "MENU_FRIENDS_STATUS_MATCHING";
    break;
  default:
    goto switchD_10027c234_default;
  }
  uVar1 = FUN_1004e0150(pcVar2,0);
  FUN_1000153b4(auStack_30,uVar1);
switchD_10027c234_default:
  FUN_1006513c0(param_1 + 0xb438,auStack_30);
LAB_10027c2e0:
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}


```

**Caller functions:**

#### Caller: `FUN_1002795e8` @ `0x1002795e8`

Calls: `FUN_10027c18c`

```c

void FUN_1002795e8(long *param_1,long param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long *******ppppppplVar7;
  string sVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  long *plVar18;
  string *psVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  string *psVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  void *pvVar27;
  string *psVar28;
  ulong uVar29;
  double dVar30;
  void *local_80;
  void *local_78;
  char local_69;
  long ******local_68;
  void *local_60;
  char local_51;
  
  lVar14 = param_1[0x23fe];
  if (lVar14 == param_2 && param_3 == 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1d42);
  puVar2 = (uint *)((long)param_1 + 0x9a54);
  param_1[0x23fe] = param_2;
  if (lVar14 != 0) {
    FUN_10019e818(lVar14,0);
    param_2 = param_1[0x23fe];
  }
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(param_2 != 0) << 2;
  if (param_2 == 0) {
    std::string::operator=((string *)(param_1 + 0x24af),(string *)&DAT_101d91198);
    std::string::operator=((string *)(param_1 + 0x24a1),(string *)&DAT_101d91198);
    FUN_100187774(param_1 + 0x1bd3,&DAT_101d91198);
    return;
  }
  plVar20 = param_1 + 0x24a1;
  psVar19 = (string *)(param_1 + 0x24af);
  bVar10 = *(byte *)(param_2 + 0x3d87);
  uVar26 = (ulong)bVar10;
  sVar4 = *(size_t *)(param_2 + 0x3d78);
  if (-1 < (char)bVar10) {
    sVar4 = uVar26;
  }
  bVar9 = *(byte *)((long)param_1 + 0x1258f);
  sVar5 = param_1[0x24b0];
  if (-1 < (char)bVar9) {
    sVar5 = (ulong)bVar9;
  }
  if (sVar4 == sVar5) {
    pvVar27 = *(void **)(param_2 + 0x3d70);
    puVar6 = pvVar27;
    if (-1 < (char)bVar10) {
      puVar6 = (undefined8 *)(param_2 + 0x3d70);
    }
    psVar23 = *(string **)psVar19;
    if (-1 < (char)bVar9) {
      psVar23 = psVar19;
    }
    if ((char)bVar10 < '\0') {
      if (sVar4 == 0) goto LAB_100279778;
      iVar13 = _memcmp(puVar6,psVar23,sVar4);
      bVar11 = iVar13 == 0;
    }
    else {
      if (sVar4 != 0) {
        if ((uint)(byte)*psVar23 == ((uint)pvVar27 & 0xff)) {
          psVar28 = (string *)(param_2 + 0x3d71);
          do {
            uVar26 = uVar26 - 1;
            psVar23 = psVar23 + 1;
            if (uVar26 == 0) goto LAB_100279778;
            sVar8 = *psVar28;
            psVar28 = psVar28 + 1;
          } while (sVar8 == *psVar23);
        }
        goto LAB_100279784;
      }
LAB_100279778:
      bVar11 = true;
    }
    if ((bVar11) && (param_3 == 0)) {
      return;
    }
  }
LAB_100279784:
  plVar3 = param_1 + 0x1bd3;
  FUN_100187060(plVar3);
  FUN_10019e818(param_1[0x23fe],1);
  std::string::operator=(psVar19,(string *)(param_1[0x23fe] + 0x3d70));
  FUN_1006513c0(param_1 + 0x1369,param_1[0x23fe] + 0x3cd0);
  pcVar17 = "generic_star_outline";
  if (*(char *)(param_1[0x23fe] + 0x3dac) != '\0') {
    pcVar17 = "generic_star";
  }
  FUN_100652cdc(param_1 + 0x1429,pcVar17);
  *puVar2 = *puVar2 | 4;
  local_68 = (long ******)(param_1[0x23fe] + 0x3d70);
  if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
    local_68 = (long ******)*local_68;
  }
  psVar23 = (string *)FUN_100274c3c(param_1 + 0x2498,&local_68);
  psVar19 = psVar23;
  if (psVar23 == (string *)0x0) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      psVar19 = (string *)(param_1[0x23fe] + 0x3d70);
      goto LAB_100279850;
    }
    FUN_100188e18(plVar3,param_1[0x23fe] + 0x3cd0,param_1 + 0x24a1);
  }
  else {
LAB_100279850:
    std::string::operator=((string *)(param_1 + 0x24a1),psVar19);
  }
  FUN_10027c09c(param_1);
  FUN_100187774(plVar3,plVar20);
  FUN_1001876ec(plVar3);
  uVar12 = FUN_1002725c8(param_1,plVar20);
  if (uVar12 == 0xffffffff) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      if (psVar23 == (string *)0x0) {
        plVar20 = (long *)(param_1[0x23fe] + 0x3d70);
        if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
          plVar20 = (long *)*plVar20;
        }
        FUN_10001549c(&local_68,plVar20);
        plVar20 = (long *)param_1[0x23df];
        if (plVar20 != (long *)0x0) {
          ppppppplVar7 = (long *******)local_68;
          if (-1 < local_51) {
            ppppppplVar7 = &local_68;
          }
          iVar13 = (**(code **)(*plVar20 + 0x78))(plVar20,ppppppplVar7,200);
          if (iVar13 != 0) {
            ppppppplVar7 = (long *******)local_68;
            if (-1 < local_51) {
              ppppppplVar7 = &local_68;
            }
            FUN_10001549c(&local_80,ppppppplVar7);
            FUN_1002742c8(param_1,&local_80);
            if (local_69 < '\0') {
              operator_delete(local_80);
            }
          }
        }
        if (local_51 < '\0') {
          operator_delete(local_68);
        }
      }
      else {
        plVar21 = plVar20;
        if (*(char *)((long)param_1 + 0x1251f) < '\0') {
          plVar21 = (long *)*plVar20;
        }
        plVar18 = (long *)param_1[0x23df];
        if ((plVar18 != (long *)0x0) &&
           (iVar13 = (**(code **)(*plVar18 + 0x80))(plVar18,plVar21,200), iVar13 != 0)) {
          FUN_1002742c8(param_1,plVar20);
        }
      }
    }
  }
  else {
    uVar26 = (ulong)uVar12;
    lVar14 = uVar26 * 4 + (ulong)uVar12;
    *(undefined1 *)(param_1[0x2497] + lVar14 * 0x10 + 0x4c) = 0;
    FUN_10019e90c(param_1[0x23fe],1,0,0);
    lVar24 = param_1[0x2497];
    if (*(int *)(lVar24 + lVar14 * 0x10 + 0x38) != 0) {
      lVar14 = 0;
      uVar29 = 0;
      do {
        lVar25 = *(long *)(lVar24 + uVar26 * 0x50 + 0x40);
        lVar24 = lVar25 + lVar14;
        if (*(char *)(lVar24 + 0xef) < '\0') {
          lVar22 = *(long *)(lVar24 + 0xd8);
        }
        else {
          lVar22 = lVar24 + 0xd8;
        }
        lVar25 = lVar25 + lVar14;
        FUN_10018714
// ... truncated ...
```

#### Caller: `FUN_10027bd4c` @ `0x10027bd4c`

Calls: `FUN_10027c18c`

```c

void FUN_10027bd4c(long param_1,short *param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  double dVar13;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined8 **local_58;
  size_t local_50;
  ulong local_48;
  
  local_58 = (undefined8 ***)0x0;
  local_50 = 0;
  local_48 = 0;
  lVar1 = param_1 + 0xde98;
  if ((*(long **)(param_1 + 0x11ef8) == (long *)0x0) ||
     (iVar6 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))(), iVar6 != 2)) {
    FUN_100188e18(lVar1,param_2 + 0x10,&local_58);
  }
  else {
    std::string::operator=((string *)&local_58,(string *)(param_2 + 4));
  }
  uVar10 = local_48 >> 0x38;
  sVar2 = local_50;
  if (-1 < (long)local_48) {
    sVar2 = uVar10;
  }
  bVar5 = *(byte *)(param_1 + 0x1251f);
  sVar3 = *(size_t *)(param_1 + 0x12510);
  if (-1 < (char)bVar5) {
    sVar3 = (ulong)bVar5;
  }
  if (sVar2 != sVar3) goto LAB_10027bf54;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    pppuVar4 = &local_58;
  }
  pbVar12 = *(byte **)(param_1 + 0x12508);
  if (-1 < (char)bVar5) {
    pbVar12 = (byte *)(param_1 + 0x12508);
  }
  if ((long)local_48 < 0) {
    if ((sVar2 != 0) && (iVar6 = _memcmp(pppuVar4,pbVar12,sVar2), iVar6 != 0)) goto LAB_10027bf54;
  }
  else if (sVar2 != 0) {
    if ((uint)*pbVar12 == ((uint)local_58 & 0xff)) {
      pbVar11 = (byte *)((ulong)&local_58 | 1);
      do {
        uVar10 = uVar10 - 1;
        pbVar12 = pbVar12 + 1;
        if (uVar10 == 0) goto LAB_10027be68;
        bVar5 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar5 == *pbVar12);
    }
    goto LAB_10027bf54;
  }
LAB_10027be68:
  pbVar12 = (byte *)(param_1 + 0xea10);
  FUN_1001870b0(lVar1,1);
  if (*param_2 == 0) {
    FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
    pcVar9 = "MENU_CHAT_PLAYER_OFFLINE";
LAB_10027bebc:
    uVar7 = FUN_1004e0150(pcVar9,0);
    thunk_FUN_1004e439c(auStack_68,uVar7);
    FUN_1004e3120(auStack_78,"[PLAYER_NAME]");
    FUN_1004e3bc4(auStack_68,0,auStack_78,param_2 + 0x10);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
    uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
    iVar6 = FUN_1004e36c0(uVar7,auStack_68);
    if (iVar6 != 0) {
      FUN_100187120(lVar1,auStack_68,0);
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  else {
    if (0.0 < *(double *)(param_2 + 0x50)) {
      FUN_1001870b0(lVar1,0);
      pcVar9 = "MENU_CHAT_PLAYER_BANNED";
      goto LAB_10027bebc;
    }
    iVar6 = FUN_10015d3f8();
    if (iVar6 == 0) {
LAB_10027bfec:
      switch(*param_2) {
      case 1:
      case 3:
      case 4:
        FUN_1001870b0(lVar1,1);
        uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
        uVar8 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
        iVar6 = FUN_1004e36c0(uVar7,uVar8);
        if (iVar6 != 0) {
          pcVar9 = "MENU_CHAT_ENTER_YOUR_CHAT";
          goto LAB_10027c068;
        }
        break;
      case 2:
        FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
        pcVar9 = "MENU_CHAT_PLAYER_IN_GAME";
        goto LAB_10027bebc;
      }
    }
    else {
      FUN_10015d3ec();
      dVar13 = (double)FUN_1001664b0();
      if (dVar13 <= 0.0) goto LAB_10027bfec;
      FUN_1001870b0(lVar1,0);
      uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
      uVar8 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      iVar6 = FUN_1004e36c0(uVar7,uVar8);
      if (iVar6 != 0) {
        pcVar9 = "MENU_FRIENDS_PLAYER_BANNED";
LAB_10027c068:
        uVar7 = FUN_1004e0150(pcVar9,0);
        FUN_100187120(lVar1,uVar7,0);
      }
    }
  }
  if (*(long *)(param_1 + 0x11ff0) != 0) {
    FUN_10027c18c(param_1);
  }
LAB_10027bf54:
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}


```


---

### `addFriend`

**String addresses:** `0x1013e4f7a`

#### `FUN_10020b540` @ `0x10020b540`

Referenced from: `0x10020b88c`

**Calls:** `FUN_1004e3170`, `FUN_100126c88`, `FUN_10001549c`, `FUN_1000153b4`, `FUN_10003c1ec`, `thunk_FUN_1001cd434`, `FUN_1004e0150`, `operator.delete`, `FUN_1001cefb8`, `FUN_100111860`, `FUN_10003330c`, `FUN_1004e3120`, `thunk_FUN_1004e439c`, `operator.delete[]`, `FUN_1004e3bc4`, ...

```c

void FUN_10020b540(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [8];
  void *local_130;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [16];
  long local_d8;
  code *pcStack_d0;
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined4 local_60;
  undefined4 local_5c;
  
  lVar2 = FUN_100111860(param_1 + 0x40);
  if (lVar2 != 0) {
    local_d8 = param_1;
    if (*(int *)(lVar2 + 0xac) == 3) {
      thunk_FUN_1001cd434(&local_f0);
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_TITLE",0);
      thunk_FUN_1004e439c(&local_128,uVar3);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 0;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_DESCRIPTION",0);
      thunk_FUN_1004e439c(auStack_138,uVar3);
      FUN_1004e3120(&local_128,"[PLAYER_NAME]");
      FUN_1004e3170(auStack_148,param_1 + 0x58);
      FUN_1004e3bc4(auStack_138,0,&local_128,auStack_148);
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      thunk_FUN_1004e439c(&local_128,auStack_138);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      pcStack_d0 = FUN_10020b910;
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_CONFIRM",0);
      FUN_1000153b4(&local_a0,uVar3);
      local_c0 = *(long *)(param_1 + 8) + 0x1fa8;
      local_60 = 0x3f400000;
      iVar1 = FUN_100126c88();
      local_5c = 0x44160000;
      if (iVar1 == 0) {
        local_5c = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_10001549c(&local_128,"deleteFriend");
      FUN_1001cefb8(lVar2 + 0x3dd8,&local_128,&local_f0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      if (local_130 != (void *)0x0) {
        operator_delete__(local_130);
      }
    }
    else {
      thunk_FUN_1001cd434(&local_f0);
      uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
      thunk_FUN_1004e439c(&local_128,uVar3);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 0;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      thunk_FUN_1004e439c(&local_128,&DAT_101d91650);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      pcStack_d0 = thunk_FUN_10020c964;
      uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(&local_a0,uVar3);
      local_c0 = *(long *)(param_1 + 8) + 0x1fa8;
      local_60 = 0x3f400000;
      iVar1 = FUN_100126c88();
      local_5c = 0x44160000;
      if (iVar1 == 0) {
        local_5c = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_10001549c(&local_128,"addFriend");
      FUN_1001cefb8(lVar2 + 0x3dd8,&local_128,&local_f0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
    }
    local_f0 = &PTR_FUN_1014666e0;
    if (local_79 < '\0') {
      operator_delete(local_90);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_e8,1);
  }
  return;
}


```

**Caller functions:**


---

### `partyInviteSend`

**String addresses:** `0x10141b495`

#### `FUN_1004f7ab4` @ `0x1004f7ab4`

Referenced from: `0x1004f7b00`

**Calls:** `FUN_1004f1744`, `FUN_1000ee4ec`, `FUN_1004f4c20`, `FUN_1004f22f0`, `operator.delete`

```c

undefined8 FUN_1004f7ab4(long param_1,undefined8 param_2,undefined8 param_3)

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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"partyInviteSend");
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
  }
  return uVar2;
}


```

**Caller functions:**


---

