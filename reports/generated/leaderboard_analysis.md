# Leaderboard Data Path Analysis

Complete data path for leaderboards: RPC, model, UI, navigation.

---

### `getLeaderboardData`

**String addresses:** `0x10141bdd1`

#### `FUN_100502c60` @ `0x100502c60`

Referenced from: `0x100502cb8`

**Calls:** `FUN_1004f1744`, `operator.delete`, `FUN_1004f22f0`, `FUN_1004f4e58`, `FUN_1000ee4ec`

```c

undefined8 FUN_100502c60(long param_1)

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
  FUN_1000ee4ec(local_50,"getLeaderboardData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0xb4,0);
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

**Caller functions:**


---

### `leaderboardPanel`

**String addresses:** `0x10141c768`

#### `FUN_100516908` @ `0x100516908`

Referenced from: `0x100516f20`

**Calls:** `FUN_10051f618`, `FUN_10051f6a8`, `FUN_10001629c`, `FUN_10051f738`, `compare`, `FUN_10015baec`, `FUN_10015bcf8`, `FUN_1000ee4ec`, `FUN_1000fceec`, `FUN_10031e0bc`, `FUN_10015bc54`, `_strcmp`, `FUN_1000e86c0`, `operator=`, `FUN_10001617c`, ...

```c

/* WARNING: Removing unreachable block (ram,0x000100517944) */
/* WARNING: Removing unreachable block (ram,0x000100517eec) */

void FUN_100516908(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  void *local_1a0;
  ulong local_198;
  byte local_189;
  char *local_188;
  undefined1 *local_180;
  long lStack_178;
  float local_170;
  float fStack_16c;
  float fStack_168;
  byte bStack_164;
  byte bStack_163;
  undefined2 uStack_162;
  undefined8 uStack_160;
  char local_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *local_130;
  undefined8 uStack_128;
  long local_120;
  void *local_118;
  undefined8 local_110;
  long lStack_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  FUN_10015bcf8(param_2 + 0x28,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_130);
  if (*(int *)(lVar4 + 0x10) != 3) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_130);
  lVar4 = FUN_1000e86c0(plVar5,"events");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "events";
  uStack_128 = 6;
  lVar4 = FUN_1000e87dc(plVar5,&local_130);
  if (*(int *)(lVar4 + 0x10) != 4) {
    return;
  }
  local_120 = CONCAT44(local_120._4_4_,0x100005);
  local_130 = "events";
  uStack_128 = 6;
  plVar6 = (long *)FUN_1000e87dc(plVar5,&local_130);
  if ((int)plVar6[1] != 0) {
    uVar17 = 0;
    do {
      local_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = (void *)0x0;
      uStack_128 = 0;
      local_130 = (char *)0x0;
      local_118 = (void *)0x0;
      local_120 = 0;
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"id");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "id";
        local_180 = (undefined1 *)0x2;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "id";
          local_180 = (undefined1 *)0x2;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_130,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"type");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "type";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "type";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_118,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"name");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "name";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "name";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_100,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"startDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d08:
        local_a8 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d08;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a8 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"endDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d88:
        local_a0 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d88;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a0 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"clientRepresentation");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 != lVar4) {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "clientRepresentation";
        local_180 = (undefined1 *)0x14;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if (*(int *)(lVar4 + 0x10) == 4) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "clientRepresentation";
          local_180 = (undefined1 *)0x14;
          plVar19 = (long *)FUN_1000e87dc(*plVar6 + uVar17 * 0x18,&local_188);
          if ((int)plVar19[1] != 0) {
            uVar21 = 0;
            do {
              uStack_148 = 0;
              local_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              plVar20 = (long *)(*plVar19 + uVar21 * 0x18);
              uStack_162 = 0;
              bStack_163 = 0;
              bStack_164 = 0;
              fStack_168 = 0.0;
              fStack_16c = 0.0;
              local_170 = 0.0;
              local_151 = '\0';
              uStack_160 = 0;
              lStack_178 = 0;
              local_180 = (undefined1 *)0x0;
              lVar4 = FUN_1000e86c0(plVar20,"type");
              puVar18 = (uint *)(plVar20 + 1);
              if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                pcVar7 = "";
              }
              else {
                local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                local_1c0 = "type";
                uStack_1b8 = 4;
                lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                pcVar7 = "";
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "type";
                  uStack_1b8 = 4;
                  pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                  if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                    pcVar7 = *(char **)pcVar7;
                  }
                }
              }
              FUN_1000ee4ec(&local_1a0,pcVar7);
              uVar15 = (ulong)local_189;
              uVar16 = local_198;
              if (-1 < (char)local_189) {
                uVar16 = uVar15;
              }
              if (uVar16 == 0x10) {
                iVar3 = std::string::compare
                                  ((ulong)&local_1a0,0,(char *)0xffffffffffffffff,0x10141c768);
                if (iVar3 != 0) {
                  uVar15 = (ulong)local_189;
                  goto LAB_100516f3c;
                }
                local_188 = (char *)CONCAT44(local_188._4_4_,1);
                lVar4 = FUN_1000e86c0(plVar20,"target"
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100503314` @ `0x100503314`

Calls: `FUN_100516908`

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

### `leaderboardsPopup`

**String addresses:** `0x10141c78c`

#### `FUN_100516908` @ `0x100516908`

Referenced from: `0x1005172f4`

**Calls:** `FUN_10051f618`, `FUN_10051f6a8`, `FUN_10001629c`, `FUN_10051f738`, `compare`, `FUN_10015baec`, `FUN_10015bcf8`, `FUN_1000ee4ec`, `FUN_1000fceec`, `FUN_10031e0bc`, `FUN_10015bc54`, `_strcmp`, `FUN_1000e86c0`, `operator=`, `FUN_10001617c`, ...

```c

/* WARNING: Removing unreachable block (ram,0x000100517944) */
/* WARNING: Removing unreachable block (ram,0x000100517eec) */

void FUN_100516908(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;isGovernmentIdVerified
  long *plVar9;
  long lVar10;
  char *pcVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  void *local_1a0;
  ulong local_198;
  byte local_189;
  char *local_188;
  undefined1 *local_180;
  long lStack_178;
  float local_170;
  float fStack_16c;
  float fStack_168;
  byte bStack_164;
  byte bStack_163;
  undefined2 uStack_162;
  undefined8 uStack_160;
  char local_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *local_130;
  undefined8 uStack_128;
  long local_120;
  void *local_118;
  undefined8 local_110;
  long lStack_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  FUN_10015bcf8(param_2 + 0x28,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_130);
  if (*(int *)(lVar4 + 0x10) != 3) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_130);
  lVar4 = FUN_1000e86c0(plVar5,"events");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "events";
  uStack_128 = 6;
  lVar4 = FUN_1000e87dc(plVar5,&local_130);
  if (*(int *)(lVar4 + 0x10) != 4) {
    return;
  }
  local_120 = CONCAT44(local_120._4_4_,0x100005);
  local_130 = "events";
  uStack_128 = 6;
  plVar6 = (long *)FUN_1000e87dc(plVar5,&local_130);
  if ((int)plVar6[1] != 0) {
    uVar17 = 0;
    do {
      local_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = (void *)0x0;
      uStack_128 = 0;
      local_130 = (char *)0x0;
      local_118 = (void *)0x0;
      local_120 = 0;
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"id");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "id";
        local_180 = (undefined1 *)0x2;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "id";
          local_180 = (undefined1 *)0x2;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_130,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"type");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "type";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "type";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_118,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"name");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "name";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "name";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_100,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"startDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d08:
        local_a8 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d08;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a8 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"endDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d88:
        local_a0 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d88;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a0 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"clientRepresentation");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 != lVar4) {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "clientRepresentation";
        local_180 = (undefined1 *)0x14;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if (*(int *)(lVar4 + 0x10) == 4) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "clientRepresentation";
          local_180 = (undefined1 *)0x14;
          plVar19 = (long *)FUN_1000e87dc(*plVar6 + uVar17 * 0x18,&local_188);
          if ((int)plVar19[1] != 0) {
            uVar21 = 0;
            do {
              uStack_148 = 0;
              local_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              plVar20 = (long *)(*plVar19 + uVar21 * 0x18);
              uStack_162 = 0;
              bStack_163 = 0;
              bStack_164 = 0;
              fStack_168 = 0.0;
              fStack_16c = 0.0;
              local_170 = 0.0;
              local_151 = '\0';
              uStack_160 = 0;
              lStack_178 = 0;
              local_180 = (undefined1 *)0x0;
              lVar4 = FUN_1000e86c0(plVar20,"type");
              puVar18 = (uint *)(plVar20 + 1);
              if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                pcVar7 = "";
              }
              else {
                local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                local_1c0 = "type";
                uStack_1b8 = 4;
                lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                pcVar7 = "";
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "type";
                  uStack_1b8 = 4;
                  pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                  if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                    pcVar7 = *(char **)pcVar7;
                  }
                }
              }
              FUN_1000ee4ec(&local_1a0,pcVar7);
              uVar15 = (ulong)local_189;
              uVar16 = local_198;
              if (-1 < (char)local_189) {
                uVar16 = uVar15;
              }
              if (uVar16 == 0x10) {
                iVar3 = std::string::compare
                                  ((ulong)&local_1a0,0,(char *)0xffffffffffffffff,0x10141c768);
                if (iVar3 != 0) {
                  uVar15 = (ulong)local_189;
                  goto LAB_100516f3c;
                }
                local_188 = (char *)CONCAT44(local_188._4_4_,1);
                lVar4 = FUN_1000e86c0(plVar20,"target"
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100503314` @ `0x100503314`

Calls: `FUN_100516908`

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

### `leaderboardId`

**String addresses:** `0x10141c7a9`

#### `FUN_100516908` @ `0x100516908`

Referenced from: `0x1005173bc`

**Calls:** `FUN_10051f618`, `FUN_10051f6a8`, `FUN_10001629c`, `FUN_10051f738`, `compare`, `FUN_10015baec`, `FUN_10015bcf8`, `FUN_1000ee4ec`, `FUN_1000fceec`, `FUN_10031e0bc`, `FUN_10015bc54`, `_strcmp`, `FUN_1000e86c0`, `operator=`, `FUN_10001617c`, ...

```c

/* WARNING: Removing unreachable block (ram,0x000100517944) */
/* WARNING: Removing unreachable block (ram,0x000100517eec) */

void FUN_100516908(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  void *local_1a0;
  ulong local_198;
  byte local_189;
  char *local_188;
  undefined1 *local_180;
  long lStack_178;
  float local_170;
  float fStack_16c;
  float fStack_168;
  byte bStack_164;
  byte bStack_163;
  undefined2 uStack_162;
  undefined8 uStack_160;
  char local_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *local_130;
  undefined8 uStack_128;
  long local_120;
  void *local_118;
  undefined8 local_110;
  long lStack_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  FUN_10015bcf8(param_2 + 0x28,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_130);
  if (*(int *)(lVar4 + 0x10) != 3) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_130);
  lVar4 = FUN_1000e86c0(plVar5,"events");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "events";
  uStack_128 = 6;
  lVar4 = FUN_1000e87dc(plVar5,&local_130);
  if (*(int *)(lVar4 + 0x10) != 4) {
    return;
  }
  local_120 = CONCAT44(local_120._4_4_,0x100005);
  local_130 = "events";
  uStack_128 = 6;
  plVar6 = (long *)FUN_1000e87dc(plVar5,&local_130);
  if ((int)plVar6[1] != 0) {
    uVar17 = 0;
    do {
      local_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = (void *)0x0;
      uStack_128 = 0;
      local_130 = (char *)0x0;
      local_118 = (void *)0x0;
      local_120 = 0;
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"id");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "id";
        local_180 = (undefined1 *)0x2;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "id";
          local_180 = (undefined1 *)0x2;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_130,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"type");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "type";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "type";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_118,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"name");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "name";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "name";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_100,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"startDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d08:
        local_a8 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d08;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a8 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"endDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d88:
        local_a0 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d88;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a0 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"clientRepresentation");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 != lVar4) {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "clientRepresentation";
        local_180 = (undefined1 *)0x14;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if (*(int *)(lVar4 + 0x10) == 4) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "clientRepresentation";
          local_180 = (undefined1 *)0x14;
          plVar19 = (long *)FUN_1000e87dc(*plVar6 + uVar17 * 0x18,&local_188);
          if ((int)plVar19[1] != 0) {
            uVar21 = 0;
            do {
              uStack_148 = 0;
              local_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              plVar20 = (long *)(*plVar19 + uVar21 * 0x18);
              uStack_162 = 0;
              bStack_163 = 0;
              bStack_164 = 0;
              fStack_168 = 0.0;
              fStack_16c = 0.0;
              local_170 = 0.0;
              local_151 = '\0';
              uStack_160 = 0;
              lStack_178 = 0;
              local_180 = (undefined1 *)0x0;
              lVar4 = FUN_1000e86c0(plVar20,"type");
              puVar18 = (uint *)(plVar20 + 1);
              if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                pcVar7 = "";
              }
              else {
                local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                local_1c0 = "type";
                uStack_1b8 = 4;
                lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                pcVar7 = "";
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "type";
                  uStack_1b8 = 4;
                  pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                  if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                    pcVar7 = *(char **)pcVar7;
                  }
                }
              }
              FUN_1000ee4ec(&local_1a0,pcVar7);
              uVar15 = (ulong)local_189;
              uVar16 = local_198;
              if (-1 < (char)local_189) {
                uVar16 = uVar15;
              }
              if (uVar16 == 0x10) {
                iVar3 = std::string::compare
                                  ((ulong)&local_1a0,0,(char *)0xffffffffffffffff,0x10141c768);
                if (iVar3 != 0) {
                  uVar15 = (ulong)local_189;
                  goto LAB_100516f3c;
                }
                local_188 = (char *)CONCAT44(local_188._4_4_,1);
                lVar4 = FUN_1000e86c0(plVar20,"target"
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100503314` @ `0x100503314`

Calls: `FUN_100516908`

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

### `leaderboardTitle`

**String addresses:** `0x10141c7b7`

#### `FUN_100516908` @ `0x100516908`

Referenced from: `0x100517464`

**Calls:** `FUN_10051f618`, `FUN_10051f6a8`, `FUN_10001629c`, `FUN_10051f738`, `compare`, `FUN_10015baec`, `FUN_10015bcf8`, `FUN_1000ee4ec`, `FUN_1000fceec`, `FUN_10031e0bc`, `FUN_10015bc54`, `_strcmp`, `FUN_1000e86c0`, `operator=`, `FUN_10001617c`, ...

```c

/* WARNING: Removing unreachable block (ram,0x000100517944) */
/* WARNING: Removing unreachable block (ram,0x000100517eec) */

void FUN_100516908(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  void *local_1a0;
  ulong local_198;
  byte local_189;
  char *local_188;
  undefined1 *local_180;
  long lStack_178;
  float local_170;
  float fStack_16c;
  float fStack_168;
  byte bStack_164;
  byte bStack_163;
  undefined2 uStack_162;
  undefined8 uStack_160;
  char local_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *local_130;
  undefined8 uStack_128;
  long local_120;
  void *local_118;
  undefined8 local_110;
  long lStack_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  FUN_10015bcf8(param_2 + 0x28,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_130);
  if (*(int *)(lVar4 + 0x10) != 3) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_130);
  lVar4 = FUN_1000e86c0(plVar5,"events");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "events";
  uStack_128 = 6;
  lVar4 = FUN_1000e87dc(plVar5,&local_130);
  if (*(int *)(lVar4 + 0x10) != 4) {
    return;
  }
  local_120 = CONCAT44(local_120._4_4_,0x100005);
  local_130 = "events";
  uStack_128 = 6;
  plVar6 = (long *)FUN_1000e87dc(plVar5,&local_130);
  if ((int)plVar6[1] != 0) {
    uVar17 = 0;
    do {
      local_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = (void *)0x0;
      uStack_128 = 0;
      local_130 = (char *)0x0;
      local_118 = (void *)0x0;
      local_120 = 0;
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"id");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "id";
        local_180 = (undefined1 *)0x2;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "id";
          local_180 = (undefined1 *)0x2;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_130,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"type");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "type";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "type";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_118,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"name");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "name";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "name";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_100,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"startDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d08:
        local_a8 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d08;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a8 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"endDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d88:
        local_a0 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d88;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a0 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"clientRepresentation");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 != lVar4) {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "clientRepresentation";
        local_180 = (undefined1 *)0x14;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if (*(int *)(lVar4 + 0x10) == 4) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "clientRepresentation";
          local_180 = (undefined1 *)0x14;
          plVar19 = (long *)FUN_1000e87dc(*plVar6 + uVar17 * 0x18,&local_188);
          if ((int)plVar19[1] != 0) {
            uVar21 = 0;
            do {
              uStack_148 = 0;
              local_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              plVar20 = (long *)(*plVar19 + uVar21 * 0x18);
              uStack_162 = 0;
              bStack_163 = 0;
              bStack_164 = 0;
              fStack_168 = 0.0;
              fStack_16c = 0.0;
              local_170 = 0.0;
              local_151 = '\0';
              uStack_160 = 0;
              lStack_178 = 0;
              local_180 = (undefined1 *)0x0;
              lVar4 = FUN_1000e86c0(plVar20,"type");
              puVar18 = (uint *)(plVar20 + 1);
              if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                pcVar7 = "";
              }
              else {
                local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                local_1c0 = "type";
                uStack_1b8 = 4;
                lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                pcVar7 = "";
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "type";
                  uStack_1b8 = 4;
                  pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                  if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                    pcVar7 = *(char **)pcVar7;
                  }
                }
              }
              FUN_1000ee4ec(&local_1a0,pcVar7);
              uVar15 = (ulong)local_189;
              uVar16 = local_198;
              if (-1 < (char)local_189) {
                uVar16 = uVar15;
              }
              if (uVar16 == 0x10) {
                iVar3 = std::string::compare
                                  ((ulong)&local_1a0,0,(char *)0xffffffffffffffff,0x10141c768);
                if (iVar3 != 0) {
                  uVar15 = (ulong)local_189;
                  goto LAB_100516f3c;
                }
                local_188 = (char *)CONCAT44(local_188._4_4_,1);
                lVar4 = FUN_1000e86c0(plVar20,"target"
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100503314` @ `0x100503314`

Calls: `FUN_100516908`

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

### `MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS`

**String addresses:** `0x1013e46bf`

#### `FUN_1001f6fec` @ `0x1001f6fec`

Referenced from: `0x1001f7054`

**Calls:** `FUN_10016aa7c`, `thunk_FUN_1004e439c`, `FUN_1001f6e5c`, `FUN_1004e3bc4`, `_memcpy`, `FUN_10031af0c`, `FUN_10031a90c`, `FUN_10031aea8`, `FUN_1001f767c`, `FUN_10031e024`, `FUN_10031aef0`, `FUN_10001549c`, `operator.new`, `FUN_1002b4da8`, `FUN_1002b4dfc`, ...

```c

/* WARNING: Removing unreachable block (ram,0x0001001f7484) */
/* WARNING: Removing unreachable block (ram,0x0001001f753c) */
/* WARNING: Removing unreachable block (ram,0x0001001f756c) */
/* WARNING: Removing unreachable block (ram,0x0001001f75d4) */

void FUN_1001f6fec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint local_b8;
  undefined4 uStack_b4;
  long local_b0;
  char local_a1;
  long local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 **local_78;
  void *local_70;
  undefined8 uStack_68;
  
  lVar1 = FUN_10031a90c();
  if (lVar1 != 0) {
    FUN_10001549c(&local_78,"reserved_friends");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_friends");
      FUN_10001549c(&local_b8,"reserved_friends");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_friends");
      FUN_10031aea8(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_guild");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_guild");
      FUN_10001549c(&local_b8,"reserved_guild");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_guild");
      FUN_10031aef0(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_vainglorious100");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      FUN_1004e3120(&local_78,"[REGION_NAME]");
      uVar3 = FUN_10016aa7c();
      FUN_1004e3bc4(auStack_98,0,&local_78,uVar3);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_vainglorious100");
      FUN_10001549c(&local_b8,"reserved_vainglorious100");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),
                    "reserved_vainglorious100");
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    lVar2 = FUN_10031d43c();
    if (lVar2 != 0) {
      uVar3 = FUN_10031d43c();
      FUN_10031e024(&local_b8,uVar3,1);
      if (local_b8 != 0) {
        uVar11 = 0;
        lVar2 = local_b0;
        uVar6 = local_b8;
        do {
          if (*(int *)(lVar2 + uVar11 * 0x98 + 0x48) != 0) {
            uVar12 = 0;
            lVar7 = 0x40;
            do {
              lVar8 = *(long *)(lVar2 + uVar11 * 0x98 + 0x50);
              if ((((*(int *)(lVar8 + lVar7 + -0x40) == 1) && (*(int *)(lVar8 + lVar7 + -0x3c) == 1)
                   ) && (*(char *)(lVar8 + lVar7 + -0x21) != '\0')) &&
                 (*(int *)(lVar8 + lVar7 + -8) != 0)) {
                puVar9 = *(undefined8 **)(lVar8 + lVar7);
                if ((char)*(byte *)((long)puVar9 + 0x17) < '\0') {
                  pvVar4 = (void *)puVar9[1];
                  if ((void *)0xffffffffffffffef < pvVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_1001f76fc();
                  }
                  puVar9 = (undefined8 *)*puVar9;
                }
                else {
                  pvVar4 = (void *)(ulong)*(byte *)((long)puVar9 + 0x17);
                }
                if (pvVar4 < (void *)0x17) {
                  pppuVar5 = &local_78;
                  uStack_68 = CONCAT17((char)pvVar4,(undefined7)uStack_68);
                  if (pvVar4 != (void *)0x0) goto LAB_1001f7500;
                }
                else {
                  uVar10 = (long)pvVar4 + 0x10U & 0xfffffffffffffff0;
                  pppuVar5 = operator_new(uVar10);
                  uStack_68 = uVar10 | 0x8000000000000000;
                  local_78 = pppuVar5;
                  local_70 = pvVar4;
LAB_1001f7500:
                  _memcpy(pppuVar5,puVar9,(size_t)pvVar4);
                }
                *(undefined1 *)((long)pppuVar5 + (long)pvVar4) = 0;
                lVar2 = FUN_10031af0c(lVar1,&local_78);
                if (lVar2 != 0) {
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x38,0);
                  thunk_FUN_1004e439c(auStack_88,uVar3);
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x20,0);
                  thunk_FUN_1004e439c(auStack_98,uVar3);
                  operator_new(0x40);
                  local_a0 = FUN_1001f6ce4();
                  FUN_1001f6e5c(local_a0,*(undefined8 *)(lVar8 + lVar7),auStack_98,lVar2);
                  FUN_1001f767c(param_1 + 0x10,&local_a0);
                  FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                                *(undefined8 *)(local_a0 + 8),lVar8 + lVar7 + -0x38);
                  if (local_90 != (void *)0x0) {
                    operator_delete__(local_90);
                  }
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                }
                lVar2 = local_b0;
                if ((long)uStack_68 < 0) {
                  operator_delete(local_78);
                  lVar2 = local_b0;
                }
              }
              uVar12 = uVar12 + 1;
              lVar7 = lVar7 + 0x58;
              uVar6 = local_b8;
            } while (uVar12 < *(uint *)(lVar2 + uVar11 * 0x98 + 0x48));
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
      FUN_10015bcf8(&local_b8,1);
    }
    FUN_1002b4dfc(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}


```

**Caller functions:**

#### Caller: `FUN_1002205b4` @ `0x1002205b4`

Calls: `FUN_1001f6fec`

```c

long FUN_1002205b4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_90;
  void *local_88;
  char local_79;
  void *local_78;
  void *local_70;
  char local_61;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474990;
  puVar1[0x39e] = &PTR_FUN_10146e588;
  pvVar2 = operator_new(0xf48);
  lVar3 = thunk_FUN_1002b4d0c();
  *(long *)(param_1 + 0x1cf8) = lVar3;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1 + 0x39e;
  *(undefined ***)(param_1 + 0x1cf0) = &PTR_thunk_FUN_1001f6f30_10146e548;
  *(undefined8 *)(param_1 + 0x1d08) = 0;
  *(undefined8 *)(param_1 + 0x1d00) = 0;
  FUN_1001b339c(param_1,pvVar2);
  uVar4 = FUN_1004e0150("MENU_LEADERBOARDS_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_50,uVar4);
  FUN_1004e3120(&local_78,"[SEASON_NAME]");
  FUN_1000f0f78(&local_90,0,0,0);
  FUN_1004e3bc4(auStack_50,0,&local_78,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1001b3418(param_1,auStack_50);
  FUN_1001b316c(param_1,1);
  FUN_1001f6fec(puVar1 + 0x39e);
  FUN_100641464(&local_54,&local_58);
  local_78 = (void *)0x0;
  FUN_1001b4034(param_1,&local_78);
  fStack_5c = local_58 + -100.0;
  local_60 = FUN_1001b36cc(local_54 + -200.0,param_1);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_60);
  FUN_10031a918();
  uVar4 = FUN_10015d3ec();
  FUN_10001549c(&local_78,"view_leaderboard");
  FUN_10001549c(&local_90,"True");
  FUN_100166f70(uVar4,&local_78,&local_90);
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return param_1;
}


```


---

### `MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD`

**String addresses:** `0x1013e4732`

#### `FUN_1001f6fec` @ `0x1001f6fec`

Referenced from: `0x1001f7190`

**Calls:** `FUN_10016aa7c`, `thunk_FUN_1004e439c`, `FUN_1001f6e5c`, `FUN_1004e3bc4`, `_memcpy`, `FUN_10031af0c`, `FUN_10031a90c`, `FUN_10031aea8`, `FUN_1001f767c`, `FUN_10031e024`, `FUN_10031aef0`, `FUN_10001549c`, `operator.new`, `FUN_1002b4da8`, `FUN_1002b4dfc`, ...

```c

/* WARNING: Removing unreachable block (ram,0x0001001f7484) */
/* WARNING: Removing unreachable block (ram,0x0001001f753c) */
/* WARNING: Removing unreachable block (ram,0x0001001f756c) */
/* WARNING: Removing unreachable block (ram,0x0001001f75d4) */

void FUN_1001f6fec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint local_b8;
  undefined4 uStack_b4;
  long local_b0;
  char local_a1;
  long local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 **local_78;
  void *local_70;
  undefined8 uStack_68;
  
  lVar1 = FUN_10031a90c();
  if (lVar1 != 0) {
    FUN_10001549c(&local_78,"reserved_friends");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_friends");
      FUN_10001549c(&local_b8,"reserved_friends");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_friends");
      FUN_10031aea8(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_guild");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_guild");
      FUN_10001549c(&local_b8,"reserved_guild");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_guild");
      FUN_10031aef0(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_vainglorious100");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      FUN_1004e3120(&local_78,"[REGION_NAME]");
      uVar3 = FUN_10016aa7c();
      FUN_1004e3bc4(auStack_98,0,&local_78,uVar3);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_vainglorious100");
      FUN_10001549c(&local_b8,"reserved_vainglorious100");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),
                    "reserved_vainglorious100");
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    lVar2 = FUN_10031d43c();
    if (lVar2 != 0) {
      uVar3 = FUN_10031d43c();
      FUN_10031e024(&local_b8,uVar3,1);
      if (local_b8 != 0) {
        uVar11 = 0;
        lVar2 = local_b0;
        uVar6 = local_b8;
        do {
          if (*(int *)(lVar2 + uVar11 * 0x98 + 0x48) != 0) {
            uVar12 = 0;
            lVar7 = 0x40;
            do {
              lVar8 = *(long *)(lVar2 + uVar11 * 0x98 + 0x50);
              if ((((*(int *)(lVar8 + lVar7 + -0x40) == 1) && (*(int *)(lVar8 + lVar7 + -0x3c) == 1)
                   ) && (*(char *)(lVar8 + lVar7 + -0x21) != '\0')) &&
                 (*(int *)(lVar8 + lVar7 + -8) != 0)) {
                puVar9 = *(undefined8 **)(lVar8 + lVar7);
                if ((char)*(byte *)((long)puVar9 + 0x17) < '\0') {
                  pvVar4 = (void *)puVar9[1];
                  if ((void *)0xffffffffffffffef < pvVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_1001f76fc();
                  }
                  puVar9 = (undefined8 *)*puVar9;
                }
                else {
                  pvVar4 = (void *)(ulong)*(byte *)((long)puVar9 + 0x17);
                }
                if (pvVar4 < (void *)0x17) {
                  pppuVar5 = &local_78;
                  uStack_68 = CONCAT17((char)pvVar4,(undefined7)uStack_68);
                  if (pvVar4 != (void *)0x0) goto LAB_1001f7500;
                }
                else {
                  uVar10 = (long)pvVar4 + 0x10U & 0xfffffffffffffff0;
                  pppuVar5 = operator_new(uVar10);
                  uStack_68 = uVar10 | 0x8000000000000000;
                  local_78 = pppuVar5;
                  local_70 = pvVar4;
LAB_1001f7500:
                  _memcpy(pppuVar5,puVar9,(size_t)pvVar4);
                }
                *(undefined1 *)((long)pppuVar5 + (long)pvVar4) = 0;
                lVar2 = FUN_10031af0c(lVar1,&local_78);
                if (lVar2 != 0) {
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x38,0);
                  thunk_FUN_1004e439c(auStack_88,uVar3);
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x20,0);
                  thunk_FUN_1004e439c(auStack_98,uVar3);
                  operator_new(0x40);
                  local_a0 = FUN_1001f6ce4();
                  FUN_1001f6e5c(local_a0,*(undefined8 *)(lVar8 + lVar7),auStack_98,lVar2);
                  FUN_1001f767c(param_1 + 0x10,&local_a0);
                  FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                                *(undefined8 *)(local_a0 + 8),lVar8 + lVar7 + -0x38);
                  if (local_90 != (void *)0x0) {
                    operator_delete__(local_90);
                  }
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                }
                lVar2 = local_b0;
                if ((long)uStack_68 < 0) {
                  operator_delete(local_78);
                  lVar2 = local_b0;
                }
              }
              uVar12 = uVar12 + 1;
              lVar7 = lVar7 + 0x58;
              uVar6 = local_b8;
            } while (uVar12 < *(uint *)(lVar2 + uVar11 * 0x98 + 0x48));
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
      FUN_10015bcf8(&local_b8,1);
    }
    FUN_1002b4dfc(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}


```

**Caller functions:**

#### Caller: `FUN_1002205b4` @ `0x1002205b4`

Calls: `FUN_1001f6fec`

```c

long FUN_1002205b4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_90;
  void *local_88;
  char local_79;
  void *local_78;
  void *local_70;
  char local_61;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474990;
  puVar1[0x39e] = &PTR_FUN_10146e588;
  pvVar2 = operator_new(0xf48);
  lVar3 = thunk_FUN_1002b4d0c();
  *(long *)(param_1 + 0x1cf8) = lVar3;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1 + 0x39e;
  *(undefined ***)(param_1 + 0x1cf0) = &PTR_thunk_FUN_1001f6f30_10146e548;
  *(undefined8 *)(param_1 + 0x1d08) = 0;
  *(undefined8 *)(param_1 + 0x1d00) = 0;
  FUN_1001b339c(param_1,pvVar2);
  uVar4 = FUN_1004e0150("MENU_LEADERBOARDS_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_50,uVar4);
  FUN_1004e3120(&local_78,"[SEASON_NAME]");
  FUN_1000f0f78(&local_90,0,0,0);
  FUN_1004e3bc4(auStack_50,0,&local_78,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1001b3418(param_1,auStack_50);
  FUN_1001b316c(param_1,1);
  FUN_1001f6fec(puVar1 + 0x39e);
  FUN_100641464(&local_54,&local_58);
  local_78 = (void *)0x0;
  FUN_1001b4034(param_1,&local_78);
  fStack_5c = local_58 + -100.0;
  local_60 = FUN_1001b36cc(local_54 + -200.0,param_1);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_60);
  FUN_10031a918();
  uVar4 = FUN_10015d3ec();
  FUN_10001549c(&local_78,"view_leaderboard");
  FUN_10001549c(&local_90,"True");
  FUN_100166f70(uVar4,&local_78,&local_90);
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return param_1;
}


```


---

### `MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100`

**String addresses:** `0x1013e47ab`

#### `FUN_1001f6fec` @ `0x1001f6fec`

Referenced from: `0x1001f72cc`

**Calls:** `FUN_10016aa7c`, `thunk_FUN_1004e439c`, `FUN_1001f6e5c`, `FUN_1004e3bc4`, `_memcpy`, `FUN_10031af0c`, `FUN_10031a90c`, `FUN_10031aea8`, `FUN_1001f767c`, `FUN_10031e024`, `FUN_10031aef0`, `FUN_10001549c`, `operator.new`, `FUN_1002b4da8`, `FUN_1002b4dfc`, ...

```c

/* WARNING: Removing unreachable block (ram,0x0001001f7484) */
/* WARNING: Removing unreachable block (ram,0x0001001f753c) */
/* WARNING: Removing unreachable block (ram,0x0001001f756c) */
/* WARNING: Removing unreachable block (ram,0x0001001f75d4) */

void FUN_1001f6fec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint local_b8;
  undefined4 uStack_b4;
  long local_b0;
  char local_a1;
  long local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 **local_78;
  void *local_70;
  undefined8 uStack_68;
  
  lVar1 = FUN_10031a90c();
  if (lVar1 != 0) {
    FUN_10001549c(&local_78,"reserved_friends");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_friends");
      FUN_10001549c(&local_b8,"reserved_friends");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_friends");
      FUN_10031aea8(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_guild");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_guild");
      FUN_10001549c(&local_b8,"reserved_guild");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_guild");
      FUN_10031aef0(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_vainglorious100");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      FUN_1004e3120(&local_78,"[REGION_NAME]");
      uVar3 = FUN_10016aa7c();
      FUN_1004e3bc4(auStack_98,0,&local_78,uVar3);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_vainglorious100");
      FUN_10001549c(&local_b8,"reserved_vainglorious100");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),
                    "reserved_vainglorious100");
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    lVar2 = FUN_10031d43c();
    if (lVar2 != 0) {
      uVar3 = FUN_10031d43c();
      FUN_10031e024(&local_b8,uVar3,1);
      if (local_b8 != 0) {
        uVar11 = 0;
        lVar2 = local_b0;
        uVar6 = local_b8;
        do {
          if (*(int *)(lVar2 + uVar11 * 0x98 + 0x48) != 0) {
            uVar12 = 0;
            lVar7 = 0x40;
            do {
              lVar8 = *(long *)(lVar2 + uVar11 * 0x98 + 0x50);
              if ((((*(int *)(lVar8 + lVar7 + -0x40) == 1) && (*(int *)(lVar8 + lVar7 + -0x3c) == 1)
                   ) && (*(char *)(lVar8 + lVar7 + -0x21) != '\0')) &&
                 (*(int *)(lVar8 + lVar7 + -8) != 0)) {
                puVar9 = *(undefined8 **)(lVar8 + lVar7);
                if ((char)*(byte *)((long)puVar9 + 0x17) < '\0') {
                  pvVar4 = (void *)puVar9[1];
                  if ((void *)0xffffffffffffffef < pvVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_1001f76fc();
                  }
                  puVar9 = (undefined8 *)*puVar9;
                }
                else {
                  pvVar4 = (void *)(ulong)*(byte *)((long)puVar9 + 0x17);
                }
                if (pvVar4 < (void *)0x17) {
                  pppuVar5 = &local_78;
                  uStack_68 = CONCAT17((char)pvVar4,(undefined7)uStack_68);
                  if (pvVar4 != (void *)0x0) goto LAB_1001f7500;
                }
                else {
                  uVar10 = (long)pvVar4 + 0x10U & 0xfffffffffffffff0;
                  pppuVar5 = operator_new(uVar10);
                  uStack_68 = uVar10 | 0x8000000000000000;
                  local_78 = pppuVar5;
                  local_70 = pvVar4;
LAB_1001f7500:
                  _memcpy(pppuVar5,puVar9,(size_t)pvVar4);
                }
                *(undefined1 *)((long)pppuVar5 + (long)pvVar4) = 0;
                lVar2 = FUN_10031af0c(lVar1,&local_78);
                if (lVar2 != 0) {
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x38,0);
                  thunk_FUN_1004e439c(auStack_88,uVar3);
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x20,0);
                  thunk_FUN_1004e439c(auStack_98,uVar3);
                  operator_new(0x40);
                  local_a0 = FUN_1001f6ce4();
                  FUN_1001f6e5c(local_a0,*(undefined8 *)(lVar8 + lVar7),auStack_98,lVar2);
                  FUN_1001f767c(param_1 + 0x10,&local_a0);
                  FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                                *(undefined8 *)(local_a0 + 8),lVar8 + lVar7 + -0x38);
                  if (local_90 != (void *)0x0) {
                    operator_delete__(local_90);
                  }
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                }
                lVar2 = local_b0;
                if ((long)uStack_68 < 0) {
                  operator_delete(local_78);
                  lVar2 = local_b0;
                }
              }
              uVar12 = uVar12 + 1;
              lVar7 = lVar7 + 0x58;
              uVar6 = local_b8;
            } while (uVar12 < *(uint *)(lVar2 + uVar11 * 0x98 + 0x48));
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
      FUN_10015bcf8(&local_b8,1);
    }
    FUN_1002b4dfc(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}


```

**Caller functions:**

#### Caller: `FUN_1002205b4` @ `0x1002205b4`

Calls: `FUN_1001f6fec`

```c

long FUN_1002205b4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_90;
  void *local_88;
  char local_79;
  void *local_78;
  void *local_70;
  char local_61;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474990;
  puVar1[0x39e] = &PTR_FUN_10146e588;
  pvVar2 = operator_new(0xf48);
  lVar3 = thunk_FUN_1002b4d0c();
  *(long *)(param_1 + 0x1cf8) = lVar3;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1 + 0x39e;
  *(undefined ***)(param_1 + 0x1cf0) = &PTR_thunk_FUN_1001f6f30_10146e548;
  *(undefined8 *)(param_1 + 0x1d08) = 0;
  *(undefined8 *)(param_1 + 0x1d00) = 0;
  FUN_1001b339c(param_1,pvVar2);
  uVar4 = FUN_1004e0150("MENU_LEADERBOARDS_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_50,uVar4);
  FUN_1004e3120(&local_78,"[SEASON_NAME]");
  FUN_1000f0f78(&local_90,0,0,0);
  FUN_1004e3bc4(auStack_50,0,&local_78,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1001b3418(param_1,auStack_50);
  FUN_1001b316c(param_1,1);
  FUN_1001f6fec(puVar1 + 0x39e);
  FUN_100641464(&local_54,&local_58);
  local_78 = (void *)0x0;
  FUN_1001b4034(param_1,&local_78);
  fStack_5c = local_58 + -100.0;
  local_60 = FUN_1001b36cc(local_54 + -200.0,param_1);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_60);
  FUN_10031a918();
  uVar4 = FUN_10015d3ec();
  FUN_10001549c(&local_78,"view_leaderboard");
  FUN_10001549c(&local_90,"True");
  FUN_100166f70(uVar4,&local_78,&local_90);
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return param_1;
}


```


---

### `MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3`

**String addresses:** `0x1013ecb89`

#### `FUN_10031bb04` @ `0x10031bb04`

Referenced from: `0x10031bb4c`

**Calls:** `operator.delete`, `FUN_10001617c`, `FUN_10001549c`

```c

void FUN_10031bb04(undefined8 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}


```

#### `FUN_10031a97c` @ `0x10031a97c`

Referenced from: `0x10031ab70`

**Calls:** `FUN_10014f4a0`, `FUN_10031abf0`, `FUN_10001629c`, `FUN_1004f0a20`, `FUN_10031ac68`, `FUN_1004f1580`, `FUN_100643618`, `FUN_1001116f8`

```c

undefined8 * FUN_10031a97c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  param_1[7] = 0;
  *param_1 = &PTR_thunk_FUN_10031acac_101490f50;
  param_1[3] = &PTR_FUN_1014912f8;
  param_1[6] = &PTR_FUN_101491328;
  FUN_1004f1580(param_1 + 8);
  param_1[8] = &PTR_FUN_10145bf80;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = param_1 + 0x10;
  puVar2 = param_1 + 0x12;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  puVar2 = param_1 + 0x1e;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2a] = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = param_1 + 0x2a;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  param_1[0x2a] = &PTR_FUN_1014913c0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((long)param_1 + 0x1ca) = 0;
  FUN_1001116f8(param_1 + 6);
  pcStack_68 = thunk_FUN_10031b2a4;
  local_70 = param_1;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  pcStack_68 = (code *)0x0;
  local_70 = (undefined8 *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_10031abf0(&local_70,"5v5_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10031abf0(&local_70,"3v3_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10031abf0(&local_70,"blitz_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ")
  ;
  FUN_10031abf0(&local_70,"wins_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10031ac68(param_1 + 0x2a,&local_70);
  FUN_10001629c(&uStack_60,1);
  FUN_10001629c(&local_70,1);
  return param_1;
}


```

#### `FUN_1002b3df8` @ `0x1002b3df8`

Referenced from: `0x1002b3ee8`

**Calls:** `___stack_chk_fail`, `FUN_100651708`, `compare`, `FUN_10064e5b8`, `FUN_10064e5a0`, `FUN_100204258`, `FUN_1004d2698`, `FUN_1001c6fd8`, `FUN_100651700`, `operator.delete[]`, `FUN_100651594`, `FUN_1002b42c0`, `FUN_1004e3120`

```c

void FUN_1002b3df8(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  float fVar10;
  undefined1 auStack_60 [8];
  void *local_58;
  char acStack_50 [8];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_1002b42c0(param_1,1);
  FUN_10064e5b8(lVar3,&DAT_101dbd510);
  plVar4 = (long *)FUN_100204258(param_1,1);
  FUN_100651594(plVar4,DAT_101e44c50,&DAT_10115a168);
  FUN_100651700(plVar4,3);
  FUN_100651708(0x43160000,plVar4,1);
  bVar9 = *(byte *)(param_3 + 0x17);
  uVar7 = (ulong)bVar9;
  uVar8 = *(ulong *)(param_3 + 8);
  uVar1 = uVar8;
  if (-1 < (char)bVar9) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecb5c);
    if (iVar2 != 0) {
      bVar9 = *(byte *)(param_3 + 0x17);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_3 + 8);
      goto LAB_1002b3ed0;
    }
    FUN_1004d2698(acStack_50,"%d");
    FUN_1004e3120(auStack_60,acStack_50);
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (0 < *(int *)(param_2 + 0x24)) {
      fVar10 = *(float *)(param_2 + 0x20);
LAB_1002b40dc:
      if (0 < (int)fVar10) {
        FUN_1001c6fd8(lVar3);
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x78))(plVar5,0,1);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x68))(plVar5,lVar3,0,0x12);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x70))(plVar5,5);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x68))(plVar5,plVar4,0,10);
        plVar4 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar4 + 0x78))(plVar4,0,1);
        goto LAB_1002b3ff8;
      }
    }
LAB_1002b4190:
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
    FUN_1004e3120(auStack_60,"-");
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  else {
LAB_1002b3ed0:
    uVar1 = uVar8;
    if (-1 < (char)bVar9) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x2c) {
      iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecb89);
      if (iVar2 == 0) {
        FUN_1004d2698(acStack_50,"%d");
        FUN_1004e3120(auStack_60,acStack_50);
        (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
        }
        if (0 < *(int *)(param_2 + 0x2c)) {
          fVar10 = *(float *)(param_2 + 0x28);
          goto LAB_1002b40dc;
        }
        goto LAB_1002b4190;
      }
      bVar9 = *(byte *)(param_3 + 0x17);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_3 + 8);
    }
    uVar1 = uVar8;
    if (-1 < (char)bVar9) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x2e) {
      iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecbb6);
      if (iVar2 != 0) {
        bVar9 = *(byte *)(param_3 + 0x17);
        uVar7 = (ulong)bVar9;
        uVar8 = *(ulong *)(param_3 + 8);
        goto LAB_1002b3f50;
      }
      if (*(float *)(param_2 + 0x30) <= 0.0) goto LAB_1002b41ec;
LAB_1002b3f8c:
      FUN_1004d2698(acStack_50,"%d");
      pcVar6 = acStack_50;
    }
    else {
LAB_1002b3f50:
      if (-1 < (char)bVar9) {
        uVar8 = uVar7;
      }
      if (((uVar8 != 0x2d) ||
          (iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecbe5),
          iVar2 != 0)) || (0 < *(int *)(param_2 + 0x38))) goto LAB_1002b3f8c;
LAB_1002b41ec:
      pcVar6 = "-";
    }
    FUN_1004e3120(auStack_60,pcVar6);
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
  }
  plVar5 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar4,0,2);
LAB_1002b3ff8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

#### `FUN_10031bbdc` @ `0x10031bbdc`

Referenced from: `0x10031bc50`

**Calls:** `compare`, `operator=`

```c

undefined8 FUN_10031bbdc(long param_1,string *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  string sVar6;
  
  sVar6 = param_2[0x17];
  uVar4 = (ulong)(byte)sVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecb5c);
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecb89);
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2e) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecbb6);
    if (iVar2 == 0) {
      uVar3 = 2;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)sVar6) {
    uVar5 = uVar4;
  }
  if ((uVar5 != 0x2d) ||
     (iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecbe5),
     iVar2 != 0)) {
    return 0;
  }
  uVar3 = 3;
LAB_10031bd10:
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  std::string::operator=((string *)(param_1 + 0x38),param_2);
  return 1;
}


```

**Caller functions:**

#### Caller: `FUN_10031a8a4` @ `0x10031a8a4`

Calls: `FUN_10031a97c`

```c

void FUN_10031a8a4(void)

{
  if (DAT_101e468f0 == 0) {
    operator_new(0x1d0);
    DAT_101e468f0 = FUN_10031a97c();
  }
  return;
}


```

#### Caller: `FUN_1002b3ab4` @ `0x1002b3ab4`

Calls: `FUN_1002b3df8`

```c

void FUN_1002b3ab4(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x10) - 1;
  if (uVar1 < 3) {
    puVar5 = (undefined4 *)(&PTR_DAT_101485008)[(int)uVar1];
  }
  else {
    puVar5 = &DAT_101e44c34;
    if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
      puVar5 = &DAT_101e44c30;
    }
  }
  FUN_100652dd4(param_1 + 0xb8,puVar5,2);
  uVar2 = FUN_1002b3c3c(param_1,1);
  FUN_1002b3cb0(uVar2,*(undefined4 *)(param_2 + 0x10));
  plVar3 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
  plVar3 = (long *)FUN_100204258(param_1,1);
  FUN_100651594(plVar3,DAT_101e44c50,&DAT_10115a168);
  (**(code **)(*plVar3 + 0x138))(plVar3,param_2);
  plVar4 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar4 + 0x68))(plVar4,plVar3,0,10);
  plVar3 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar3 + 0x78))(plVar3,0,1);
  if (*param_3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar2 = FUN_1002b3d84(param_1,1);
      FUN_1002b3df8(uVar2,param_2,*(long *)(param_3 + 2) + lVar6);
      plVar3 = (long *)FUN_10064e5a0(param_1);
      (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < *param_3);
  }
  return;
}


```


---

### `MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5`

**String addresses:** `0x1013ecb5c`

#### `FUN_10031bb04` @ `0x10031bb04`

Referenced from: `0x10031bb20`

**Calls:** `operator.delete`, `FUN_10001617c`, `FUN_10001549c`

```c

void FUN_10031bb04(undefined8 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}


```

#### `FUN_10031a97c` @ `0x10031a97c`

Referenced from: `0x10031ab58`

**Calls:** `FUN_10014f4a0`, `FUN_10031abf0`, `FUN_10001629c`, `FUN_1004f0a20`, `FUN_10031ac68`, `FUN_1004f1580`, `FUN_100643618`, `FUN_1001116f8`

```c

undefined8 * FUN_10031a97c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  param_1[7] = 0;
  *param_1 = &PTR_thunk_FUN_10031acac_101490f50;
  param_1[3] = &PTR_FUN_1014912f8;
  param_1[6] = &PTR_FUN_101491328;
  FUN_1004f1580(param_1 + 8);
  param_1[8] = &PTR_FUN_10145bf80;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = param_1 + 0x10;
  puVar2 = param_1 + 0x12;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  puVar2 = param_1 + 0x1e;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2a] = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = param_1 + 0x2a;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  param_1[0x2a] = &PTR_FUN_1014913c0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((long)param_1 + 0x1ca) = 0;
  FUN_1001116f8(param_1 + 6);
  pcStack_68 = thunk_FUN_10031b2a4;
  local_70 = param_1;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  pcStack_68 = (code *)0x0;
  local_70 = (undefined8 *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_10031abf0(&local_70,"5v5_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10031abf0(&local_70,"3v3_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10031abf0(&local_70,"blitz_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ")
  ;
  FUN_10031abf0(&local_70,"wins_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10031ac68(param_1 + 0x2a,&local_70);
  FUN_10001629c(&uStack_60,1);
  FUN_10001629c(&local_70,1);
  return param_1;
}


```

#### `FUN_1002b3df8` @ `0x1002b3df8`

Referenced from: `0x1002b3ea8`

**Calls:** `___stack_chk_fail`, `FUN_100651708`, `compare`, `FUN_10064e5b8`, `FUN_10064e5a0`, `FUN_100204258`, `FUN_1004d2698`, `FUN_1001c6fd8`, `FUN_100651700`, `operator.delete[]`, `FUN_100651594`, `FUN_1002b42c0`, `FUN_1004e3120`

```c

void FUN_1002b3df8(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  float fVar10;
  undefined1 auStack_60 [8];
  void *local_58;
  char acStack_50 [8];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_1002b42c0(param_1,1);
  FUN_10064e5b8(lVar3,&DAT_101dbd510);
  plVar4 = (long *)FUN_100204258(param_1,1);
  FUN_100651594(plVar4,DAT_101e44c50,&DAT_10115a168);
  FUN_100651700(plVar4,3);
  FUN_100651708(0x43160000,plVar4,1);
  bVar9 = *(byte *)(param_3 + 0x17);
  uVar7 = (ulong)bVar9;
  uVar8 = *(ulong *)(param_3 + 8);
  uVar1 = uVar8;
  if (-1 < (char)bVar9) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecb5c);
    if (iVar2 != 0) {
      bVar9 = *(byte *)(param_3 + 0x17);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_3 + 8);
      goto LAB_1002b3ed0;
    }
    FUN_1004d2698(acStack_50,"%d");
    FUN_1004e3120(auStack_60,acStack_50);
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (0 < *(int *)(param_2 + 0x24)) {
      fVar10 = *(float *)(param_2 + 0x20);
LAB_1002b40dc:
      if (0 < (int)fVar10) {
        FUN_1001c6fd8(lVar3);
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x78))(plVar5,0,1);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x68))(plVar5,lVar3,0,0x12);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x70))(plVar5,5);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x68))(plVar5,plVar4,0,10);
        plVar4 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar4 + 0x78))(plVar4,0,1);
        goto LAB_1002b3ff8;
      }
    }
LAB_1002b4190:
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
    FUN_1004e3120(auStack_60,"-");
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  else {
LAB_1002b3ed0:
    uVar1 = uVar8;
    if (-1 < (char)bVar9) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x2c) {
      iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecb89);
      if (iVar2 == 0) {
        FUN_1004d2698(acStack_50,"%d");
        FUN_1004e3120(auStack_60,acStack_50);
        (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
        }
        if (0 < *(int *)(param_2 + 0x2c)) {
          fVar10 = *(float *)(param_2 + 0x28);
          goto LAB_1002b40dc;
        }
        goto LAB_1002b4190;
      }
      bVar9 = *(byte *)(param_3 + 0x17);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_3 + 8);
    }
    uVar1 = uVar8;
    if (-1 < (char)bVar9) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x2e) {
      iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecbb6);
      if (iVar2 != 0) {
        bVar9 = *(byte *)(param_3 + 0x17);
        uVar7 = (ulong)bVar9;
        uVar8 = *(ulong *)(param_3 + 8);
        goto LAB_1002b3f50;
      }
      if (*(float *)(param_2 + 0x30) <= 0.0) goto LAB_1002b41ec;
LAB_1002b3f8c:
      FUN_1004d2698(acStack_50,"%d");
      pcVar6 = acStack_50;
    }
    else {
LAB_1002b3f50:
      if (-1 < (char)bVar9) {
        uVar8 = uVar7;
      }
      if (((uVar8 != 0x2d) ||
          (iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecbe5),
          iVar2 != 0)) || (0 < *(int *)(param_2 + 0x38))) goto LAB_1002b3f8c;
LAB_1002b41ec:
      pcVar6 = "-";
    }
    FUN_1004e3120(auStack_60,pcVar6);
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
  }
  plVar5 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar4,0,2);
LAB_1002b3ff8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

#### `FUN_10031bbdc` @ `0x10031bbdc`

Referenced from: `0x10031bc10`

**Calls:** `compare`, `operator=`

```c

undefined8 FUN_10031bbdc(long param_1,string *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  string sVar6;
  
  sVar6 = param_2[0x17];
  uVar4 = (ulong)(byte)sVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecb5c);
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecb89);
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2e) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecbb6);
    if (iVar2 == 0) {
      uVar3 = 2;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)sVar6) {
    uVar5 = uVar4;
  }
  if ((uVar5 != 0x2d) ||
     (iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecbe5),
     iVar2 != 0)) {
    return 0;
  }
  uVar3 = 3;
LAB_10031bd10:
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  std::string::operator=((string *)(param_1 + 0x38),param_2);
  return 1;
}


```

**Caller functions:**

#### Caller: `FUN_10031a8a4` @ `0x10031a8a4`

Calls: `FUN_10031a97c`

```c

void FUN_10031a8a4(void)

{
  if (DAT_101e468f0 == 0) {
    operator_new(0x1d0);
    DAT_101e468f0 = FUN_10031a97c();
  }
  return;
}


```

#### Caller: `FUN_1002b3ab4` @ `0x1002b3ab4`

Calls: `FUN_1002b3df8`

```c

void FUN_1002b3ab4(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x10) - 1;
  if (uVar1 < 3) {
    puVar5 = (undefined4 *)(&PTR_DAT_101485008)[(int)uVar1];
  }
  else {
    puVar5 = &DAT_101e44c34;
    if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
      puVar5 = &DAT_101e44c30;
    }
  }
  FUN_100652dd4(param_1 + 0xb8,puVar5,2);
  uVar2 = FUN_1002b3c3c(param_1,1);
  FUN_1002b3cb0(uVar2,*(undefined4 *)(param_2 + 0x10));
  plVar3 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
  plVar3 = (long *)FUN_100204258(param_1,1);
  FUN_100651594(plVar3,DAT_101e44c50,&DAT_10115a168);
  (**(code **)(*plVar3 + 0x138))(plVar3,param_2);
  plVar4 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar4 + 0x68))(plVar4,plVar3,0,10);
  plVar3 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar3 + 0x78))(plVar3,0,1);
  if (*param_3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar2 = FUN_1002b3d84(param_1,1);
      FUN_1002b3df8(uVar2,param_2,*(long *)(param_3 + 2) + lVar6);
      plVar3 = (long *)FUN_10064e5a0(param_1);
      (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < *param_3);
  }
  return;
}


```


---

### `MENU_LEADERBOARDS_POPUP_TITLE`

**String addresses:** `0x1013e5bdd`

#### `FUN_1002205b4` @ `0x1002205b4`

Referenced from: `0x100220634`

**Calls:** `FUN_1001b316c`, `FUN_10064e48c`, `FUN_1004e3bc4`, `FUN_1001b3418`, `FUN_1001b3854`, `operator.new`, `FUN_1001f6fec`, `FUN_100641464`, `FUN_10031a918`, `FUN_10015d3ec`, `thunk_FUN_1004e439c`, `FUN_1001b3b58`, `FUN_1001b2b88`, `FUN_1000f0f78`, `FUN_1001b4034`, ...

```c

long FUN_1002205b4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_90;
  void *local_88;
  char local_79;
  void *local_78;
  void *local_70;
  char local_61;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474990;
  puVar1[0x39e] = &PTR_FUN_10146e588;
  pvVar2 = operator_new(0xf48);
  lVar3 = thunk_FUN_1002b4d0c();
  *(long *)(param_1 + 0x1cf8) = lVar3;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1 + 0x39e;
  *(undefined ***)(param_1 + 0x1cf0) = &PTR_thunk_FUN_1001f6f30_10146e548;
  *(undefined8 *)(param_1 + 0x1d08) = 0;
  *(undefined8 *)(param_1 + 0x1d00) = 0;
  FUN_1001b339c(param_1,pvVar2);
  uVar4 = FUN_1004e0150("MENU_LEADERBOARDS_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_50,uVar4);
  FUN_1004e3120(&local_78,"[SEASON_NAME]");
  FUN_1000f0f78(&local_90,0,0,0);
  FUN_1004e3bc4(auStack_50,0,&local_78,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1001b3418(param_1,auStack_50);
  FUN_1001b316c(param_1,1);
  FUN_1001f6fec(puVar1 + 0x39e);
  FUN_100641464(&local_54,&local_58);
  local_78 = (void *)0x0;
  FUN_1001b4034(param_1,&local_78);
  fStack_5c = local_58 + -100.0;
  local_60 = FUN_1001b36cc(local_54 + -200.0,param_1);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_60);
  FUN_10031a918();
  uVar4 = FUN_10015d3ec();
  FUN_10001549c(&local_78,"view_leaderboard");
  FUN_10001549c(&local_90,"True");
  FUN_100166f70(uVar4,&local_78,&local_90);
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return param_1;
}


```

**Caller functions:**

#### Caller: `FUN_1002207b8` @ `0x1002207b8`

Calls: `FUN_1002205b4`

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


---

### `eventLeaderboardProgress`

**String addresses:** `0x10141c838`

#### `FUN_100516908` @ `0x100516908`

Referenced from: `0x100517b04`

**Calls:** `_strcmp`, `compare`, `FUN_10001629c`, `FUN_10051f618`, `FUN_1000e87dc`, `FUN_10015b678`, `FUN_10015bbdc`, `FUN_1000ee4ec`, `FUN_10015bb64`, `FUN_1000e86c0`, `FUN_10051f738`, `FUN_10031e0bc`, `FUN_10031e228`, `FUN_10015baec`, `FUN_10015bc54`, ...

```c

/* WARNING: Removing unreachable block (ram,0x000100517944) */
/* WARNING: Removing unreachable block (ram,0x000100517eec) */

void FUN_100516908(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  void *local_1a0;
  ulong local_198;
  byte local_189;
  char *local_188;
  undefined1 *local_180;
  long lStack_178;
  float local_170;
  float fStack_16c;
  float fStack_168;
  byte bStack_164;
  byte bStack_163;
  undefined2 uStack_162;
  undefined8 uStack_160;
  char local_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char *local_130;
  undefined8 uStack_128;
  long local_120;
  void *local_118;
  undefined8 local_110;
  long lStack_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_90;
  ulong local_88;
  undefined4 local_80;
  byte local_79;
  
  FUN_10015bcf8(param_2 + 0x28,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_130);
  if (*(int *)(lVar4 + 0x10) != 3) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "returnValue";
  uStack_128 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_130);
  lVar4 = FUN_1000e86c0(plVar5,"events");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    return;
  }
  local_120._0_4_ = 0x100005;
  local_130 = "events";
  uStack_128 = 6;
  lVar4 = FUN_1000e87dc(plVar5,&local_130);
  if (*(int *)(lVar4 + 0x10) != 4) {
    return;
  }
  local_120 = CONCAT44(local_120._4_4_,0x100005);
  local_130 = "events";
  uStack_128 = 6;
  plVar6 = (long *)FUN_1000e87dc(plVar5,&local_130);
  if ((int)plVar6[1] != 0) {
    uVar17 = 0;
    do {
      local_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      local_100 = (void *)0x0;
      uStack_128 = 0;
      local_130 = (char *)0x0;
      local_118 = (void *)0x0;
      local_120 = 0;
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"id");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "id";
        local_180 = (undefined1 *)0x2;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "id";
          local_180 = (undefined1 *)0x2;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_130,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"type");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "type";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "type";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_118,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"name");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
        pcVar7 = "";
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "name";
        local_180 = (undefined1 *)0x4;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        pcVar7 = "";
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "name";
          local_180 = (undefined1 *)0x4;
          pcVar7 = (char *)FUN_1000e87dc(plVar19,&local_188);
          if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
            pcVar7 = *(char **)pcVar7;
          }
        }
      }
      FUN_1000ee4ec(&local_188,pcVar7);
      std::string::operator=((string *)&local_100,(string *)&local_188);
      if (lStack_178 < 0) {
        operator_delete(local_188);
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"startDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d08:
        local_a8 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d08;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "startDate";
        local_180 = (undefined1 *)0x9;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a8 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"endDate");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 == lVar4) {
LAB_100516d88:
        local_a0 = 0;
      }
      else {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_100516d88;
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "endDate";
        local_180 = (undefined1 *)0x7;
        puVar8 = (undefined8 *)FUN_1000e87dc(plVar19,&local_188);
        local_a0 = *puVar8;
      }
      plVar19 = (long *)(*plVar6 + uVar17 * 0x18);
      lVar4 = FUN_1000e86c0(plVar19,"clientRepresentation");
      if (*plVar19 + (ulong)*(uint *)(plVar19 + 1) * 0x30 != lVar4) {
        lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
        local_188 = "clientRepresentation";
        local_180 = (undefined1 *)0x14;
        lVar4 = FUN_1000e87dc(plVar19,&local_188);
        if (*(int *)(lVar4 + 0x10) == 4) {
          lStack_178 = CONCAT44(lStack_178._4_4_,0x100005);
          local_188 = "clientRepresentation";
          local_180 = (undefined1 *)0x14;
          plVar19 = (long *)FUN_1000e87dc(*plVar6 + uVar17 * 0x18,&local_188);
          if ((int)plVar19[1] != 0) {
            uVar21 = 0;
            do {
              uStack_148 = 0;
              local_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              plVar20 = (long *)(*plVar19 + uVar21 * 0x18);
              uStack_162 = 0;
              bStack_163 = 0;
              bStack_164 = 0;
              fStack_168 = 0.0;
              fStack_16c = 0.0;
              local_170 = 0.0;
              local_151 = '\0';
              uStack_160 = 0;
              lStack_178 = 0;
              local_180 = (undefined1 *)0x0;
              lVar4 = FUN_1000e86c0(plVar20,"type");
              puVar18 = (uint *)(plVar20 + 1);
              if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                pcVar7 = "";
              }
              else {
                local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                local_1c0 = "type";
                uStack_1b8 = 4;
                lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                pcVar7 = "";
                if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "type";
                  uStack_1b8 = 4;
                  pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                  if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                    pcVar7 = *(char **)pcVar7;
                  }
                }
              }
              FUN_1000ee4ec(&local_1a0,pcVar7);
              uVar15 = (ulong)local_189;
              uVar16 = local_198;
              if (-1 < (char)local_189) {
                uVar16 = uVar15;
              }
              if (uVar16 == 0x10) {
                iVar3 = std::string::compare
                                  ((ulong)&local_1a0,0,(char *)0xffffffffffffffff,0x10141c768);
                if (iVar3 != 0) {
                  uVar15 = (ulong)local_189;
                  goto LAB_100516f3c;
                }
                local_188 = (char *)CONCAT44(local_188._4_4_,1);
                lVar4 = FUN_1000e86c0(plVar20,"target"
// ... truncated ...
```

**Caller functions:**

#### Caller: `FUN_100503314` @ `0x100503314`

Calls: `FUN_100516908`

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

### `view_leaderboard`

**String addresses:** `0x1013e5c09`

#### `FUN_1002205b4` @ `0x1002205b4`

Referenced from: `0x100220744`

**Calls:** `FUN_1001b36cc`, `FUN_10001549c`, `FUN_1001b3418`, `FUN_1001f6fec`, `FUN_100641464`, `FUN_10015d3ec`, `operator.delete[]`, `FUN_10064e48c`, `operator.new`, `FUN_1004e3bc4`, `FUN_1004e0150`, `FUN_1001b3b58`, `FUN_1001b4034`, `FUN_1004e3120`, `thunk_FUN_1004e439c`, ...

```c

long FUN_1002205b4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_90;
  void *local_88;
  char local_79;
  void *local_78;
  void *local_70;
  char local_61;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474990;
  puVar1[0x39e] = &PTR_FUN_10146e588;
  pvVar2 = operator_new(0xf48);
  lVar3 = thunk_FUN_1002b4d0c();
  *(long *)(param_1 + 0x1cf8) = lVar3;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1 + 0x39e;
  *(undefined ***)(param_1 + 0x1cf0) = &PTR_thunk_FUN_1001f6f30_10146e548;
  *(undefined8 *)(param_1 + 0x1d08) = 0;
  *(undefined8 *)(param_1 + 0x1d00) = 0;
  FUN_1001b339c(param_1,pvVar2);
  uVar4 = FUN_1004e0150("MENU_LEADERBOARDS_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_50,uVar4);
  FUN_1004e3120(&local_78,"[SEASON_NAME]");
  FUN_1000f0f78(&local_90,0,0,0);
  FUN_1004e3bc4(auStack_50,0,&local_78,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1001b3418(param_1,auStack_50);
  FUN_1001b316c(param_1,1);
  FUN_1001f6fec(puVar1 + 0x39e);
  FUN_100641464(&local_54,&local_58);
  local_78 = (void *)0x0;
  FUN_1001b4034(param_1,&local_78);
  fStack_5c = local_58 + -100.0;
  local_60 = FUN_1001b36cc(local_54 + -200.0,param_1);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_60);
  FUN_10031a918();
  uVar4 = FUN_10015d3ec();
  FUN_10001549c(&local_78,"view_leaderboard");
  FUN_10001549c(&local_90,"True");
  FUN_100166f70(uVar4,&local_78,&local_90);
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return param_1;
}


```

**Caller functions:**

#### Caller: `FUN_1002207b8` @ `0x1002207b8`

Calls: `FUN_1002205b4`

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


---

### `filter_leaderboard_id`

**String addresses:** `0x1013dd215`

#### `FUN_10013b414` @ `0x10013b414`

Referenced from: `0x10013cefc`

**Calls:** `FUN_10013e2f0`, `FUN_1000153b4`, `FUN_10013e214`, `FUN_10001549c`, `compare`, `FUN_10013e374`, `FUN_1001385cc`, `FUN_10013e09c`, `FUN_10013e264`, `FUN_1004e3120`, `FUN_100141b78`, `FUN_10001617c`, `FUN_100141dbc`, `FUN_100138490`, `FUN_1000e87dc`, ...

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

