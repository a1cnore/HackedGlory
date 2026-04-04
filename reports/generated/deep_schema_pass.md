# Deep Schema Pass — Priority Payload Schemas

Decompiled response parsers and sender functions for:
friends, parties, match/trophy, and WebSocket/push handlers.

## 1. Response Parser Decompilations

These are the 8 response handler functions that parse JSON-RPC responses.
Field names appear as string arguments to FUN_1000e86c0 (key lookup).

### Parser: stateUpdateCallback @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0e2),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004ee8d8:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004ee8d8;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 1;
      }
    }
    else {
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
          if (((uVar16 == 9) &&
              (iVar3 = std::string::compare
                                 ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
              iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
            puVar13 = puVar10;
            if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
              puVar13 = (undefined8 *)*puVar10;
            }
            FUN_1000ee4ec(&local_a0,puVar13);
            psVar18 = param_1 + 0xa0;
LAB_1004ee724:
            std::string::operator=(psVar18,(str
// ...truncated...
```

---

### Parser: playerInfoUpdate @ `0x100507640`

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
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507a94;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_blitz";
    uStack_248 = 10;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 300) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_casual");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507b08:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_casual";
    uStack_248 = 0xb;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507b08;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_casual";
    uStack_248 = 0xb;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x130) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_ranked");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507b7c:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_ranked";
    uStack_248 = 0xb;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507b7c;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_ranked";
    uStack_248 = 0xb;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x134) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"winStreak");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507bf0:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winStreak";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507bf0;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winStreak";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x13c) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"winsToday");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507c64:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winsToday";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507c64;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winsToday";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x138) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_season");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507cd8:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_season";
    uStack_248 = 0xb;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507cd8;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_season";
    uStack_248 = 0xb;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x140) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"sinisterSevenProgress");
  dVar26 = 0.0;
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar10) {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "sinisterSevenProgress";
    uStack_248 = 0x15;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "sinisterSevenProgress";
      uStack_248 = 0x15;
      FUN_1000e87dc(plVar11,&local_250);
      dVar26 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_2 + 0x144) = (float)dVar26;
  lVar10 = FUN_1000e86c0(plVar11,"xp");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507dc4:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "xp";
    uStack_248 = 2;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507dc4;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "xp";
    uStack_248 = 2;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x154) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"levelMinXP");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507e38:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "levelMinXP";
    uStack_248 = 10;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507e38;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "levelMinXP";
    uStack_248 = 10;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x14c) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"levelMaxXP");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507eac:
    uVar23 = 1;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "levelMaxXP";
    uStack_248 = 10;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507eac;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "levelMaxXP";
    uStack_248 = 10;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x150) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"currency");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar10) {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "currency";
    uStack_248 = 8;
    uVar12 = FUN_1000e87dc(plVar11,&local_250);
    FUN_10051ba10(uVar12,param_2 + 0x68);
  }
  lVar10 = FUN_1000e86c0(plVar11,"entitlement_coopbots");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507f6c:
    bVar7 = false;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "entitlement_coopbots";
    uStack_248 = 0x14;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) & 1) == 0) goto LAB_100507f6c;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "entitlement_coopbots";
    uStack_248 = 0x14;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    bVar7 = *(int *)(lVar10 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x17c) = bVar7;
  lVar10 = FUN_1000e86c0(plVar11,"entitlement_practice");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507fe8:
    bVar7 = false;
  }

// ...truncated...
```

#### Sub-parser: `FUN_10051bcfc` @ `0x10051bcfc`

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

#### Sub-parser: `FUN_10051ba10` @ `0x10051ba10`

```c

void FUN_10051ba10(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_1,"gold");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051ba7c:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "gold";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051ba7c;
    local_38 = 0x100005;
    local_48 = "gold";
    uStack_40 = 4;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  *param_2 = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"silver");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051baf0:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "silver";
    uStack_40 = 6;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051baf0;
    local_38 = 0x100005;
    local_48 = "silver";
    uStack_40 = 6;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[1] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"essence");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051bb64:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "essence";
    uStack_40 = 7;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051bb64;
    local_38 = 0x100005;
    local_48 = "essence";
    uStack_40 = 7;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[2] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"opal");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051bbd8:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "opal";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051bbd8;
    local_38 = 0x100005;
    local_48 = "opal";
    uStack_40 = 4;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[3] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"seasonal_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051bc4c:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "seasonal_key";
    uStack_40 = 0xc;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051bc4c;
    local_38 = 0x100005;
    local_48 = "seasonal_key";
    uStack_40 = 0xc;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar3 = *puVar2;
  }
  param_2[4] = uVar3;
  lVar1 = FUN_1000e86c0(param_1,"epic_key");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "epic_key";
    uStack_40 = 8;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "epic_key";
      uStack_40 = 8;
      puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
      uVar3 = *puVar2;
      goto LAB_10051bce4;
    }
  }
  uVar3 = 0;
LAB_10051bce4:
  param_2[5] = uVar3;
  return;
}


```

---

### Parser: sessionBootstrap @ `0x100505520`

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
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xe0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"enableStateUpdates");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505da8:
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "enableStateUpdates";
    local_a8 = 0x12;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100505da8;
    lVar4 = FUN_1000e86c0(plVar5,"enableStateUpdates");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505e80:
      bVar2 = false;
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "enableStateUpdates";
      local_a8 = 0x12;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100505e80;
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "enableStateUpdates";
      local_a8 = 0x12;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
    }
    *(bool *)(param_2 + 0x178) = bVar2;
  }
  lVar4 = FUN_1000e86c0(plVar5,"missedStateUpdateMessagesThreshold");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100505fb0:
    uVar12 = 0xffffffff;
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "missedStateUpdateMessagesThreshold";
    local_a8 = 0x22;
    lVar4 = FUN_1000e87dc(plVar5,&local_b0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_100505fb0;
    lVar4 = FUN_1000e86c0(plVar5,"missedStateUpdateMessagesThreshold");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100506004:
      uVar12 = 0;
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "missedStateUpdateMessagesThreshold";
      local_a8 = 0x22;
      lVar4 = FUN_1000e87dc(plVar5,&local_b0);
      if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_100506004;
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "missedStateUpdateMessagesThreshold";
      local_a8 = 0x22;
      puVar9 = (undefined4 *)FUN_1000e87dc(plVar5,&local_b0);
      uVar12 = *puVar9;
    }
  }
  *(undefined4 *)(param_2 + 0x17c) = uVar12;
  lVar4 = FUN_1000e86c0(plVar5,"pingHostPortInfo");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    FUN_10014e9b0(param_2 + 0x180,0);
    local_a0 = CONCAT44(local_a0._4_4_,0x100005);
    local_b0 = "pingHostPortInfo";
    local_a8 = 0x10;
    plVar6 = (long *)FUN_1000e87dc(plVar5,&local_b0);
    if ((int)plVar6[1] != 0) {
      lVar4 = 0;
      uVar14 = 0;
      do {
        plVar1 = (long *)(*plVar6 + lVar4);
        local_90 = (void *)0x0;
        uStack_88 = 0;
        local_80 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_b0 = (char *)0x0;
        local_98 = 0;
   
// ...truncated...
```

---

### Parser: basicResult @ `0x1005039ac`

```c

void FUN_1005039ac(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_100503a1c:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100503a1c;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x40) = uVar6;
  *(undefined1 *)(param_2 + 0x44) = 0;
  std::string::operator=((string *)(param_2 + 0x48),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x40) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "success";
  uStack_50 = 7;
  lVar2 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if (*(int *)(lVar2 + 0x10) != 3) {
      return;
    }
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    plVar4 = (long *)FUN_1000e87dc(plVar4,&local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_100503bc0:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100503bc0;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x44) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reason";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_100503c44;
    }
  }
  pcVar5 = "";
LAB_100503c44:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


```

---

### Parser: simpleCallback @ `0x1004f11bc`

```c

void FUN_1004f11bc(long *param_1,string *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  lVar2 = FUN_1000e86c0(param_1,"orderid");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "orderid";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "orderid";
      uStack_40 = 7;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"steamid");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "steamid";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "steamid";
      uStack_40 = 7;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x18,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"language");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "language";
    uStack_40 = 8;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "language";
      uStack_40 = 8;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x30,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"currency");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "currency";
    uStack_40 = 8;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "currency";
      uStack_40 = 8;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x48,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"amount");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "amount";
    uStack_40 = 6;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "amount";
      uStack_40 = 6;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x60,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"product_id");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "product_id";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "product_id";
      uStack_40 = 10;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x78,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  return;
}


```

---

### Parser: eventsData @ `0x100516908`

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
                lVar4 = FUN_1000e86c0(plVar20,"target");
                if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                  pcVar7 = "eventsPopup";
                }
                else {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "target";
                  uStack_1b8 = 6;
                  lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                  pcVar7 = "eventsPopup";
                  if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                    local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                    local_1c0 = "target";
                    uStack_1b8 = 6;
                    pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                      pcVar7 = *(char **)pcVar7;
                    }
                  }
                }
                iVar3 = _strcmp(pcVar7,"leaderboardsPopup");
                local_188 = (char *)(ulong)CONCAT14(iVar3 == 0,local_188._0_4_);
                lVar4 = FUN_1000e86c0(plVar20,"panelTitle");
                if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                  pcVar7 = "";
                }
                else {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "panelTitle";
                  uStack_1b8 = 10;
                  lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                  pcVar7 = "";
                  if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                    local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                    local_1c0 = "panelTitle";
                    uStack_1b8 = 10;
                    pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                      pcVar7 = *(char **)pcVar7;
                    }
                  }
                }
                FUN_1000ee4ec(&local_1c0,pcVar7);
                std::string::operator=((string *)&local_180,(string *)&local_1c0);
                if (local_1b0 < 0) {
                  operator_delete(local_1c0);
                }
                lVar4 = FUN_1000e86c0(plVar20,"leaderboardId");
                if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
                  pcVar7 = "";
                }
                else {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "leaderboardId";
                  uStack_1b8 = 0xd;
                  lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                  pcVar7 = "";
                  if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                    local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                    local_1c0 = "leaderboardId";
                    uStack_1b8 = 0xd;
                    pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                      pcVar7 = *(char **)pcVar7;
                    }
                  }
                }
                FUN_1000ee4ec(&local_1c0,pcVar7);
                FUN_10001617c(&local_150,&local_1c0);
                if (local_1b0 < 0) {
                  operator_delete(local_1c0);
                }
                lVar4 = FUN_1000e86c0(plVar20,"leaderboardTitle");
                if (*plVar20 + (ulong)*puVar18 * 0x30 == lVar4) {
LAB_100517a54:
                  pcVar7 = "";
                }
                else {
                  local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                  local_1c0 = "leaderboardTitle";
                  uStack_1b8 = 0x10;
                  lVar4 = FUN_1000e87dc(plVar20,&local_1c0);
                  pcVar7 = "";
                  if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
                    local_1c0 = "leaderboardTitle";
                    uStack_1b8 = 0x10;
LAB_100517a34:
                    local_1b0 = CONCAT44(local_1b0._4_4_,0x100005);
                    pcVar7 = (char *)FUN_1000e87dc(plVar20,&local_1c0);
                    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
                      pcVar7 = *(char **)pcVar7;
                    }
                  }
                }
LAB_100517a5c:
                FUN_1000ee4ec(&local_1c0,pcVar7);
                std::string::operator=((string *)&fStack_168,(string *)&local_1c0);
                if (local_1b0 < 0) {
                  operator_delete(local_1c0);
                }
              }
              else {
LAB_100516f3c:
                uVar16 = local_198;
                if (-1 < (char)local_189) {
                  uVar16 = uVar15;
                }
                if (uVar16 == 10) {
                  iVar3 = std::string::compare
                                    ((ulong)&local_1a0,0,(char *)0xffffffffffffffff,0x10141c7c8);
                  if (iVar3 != 0) {
                    uVar15 = (ulong)local_189;
                    goto LAB_100516f80;
                  }
                  local_188 = (char *)CONCAT44(local_188._4_4_,
// ...truncated...
```

---

### Parser: guildData @ `0x10050c2bc`

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
          uStack_238 = 8;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c8e8;
          local_230 = 0x100005;
          local_240 = "avgKarma";
          uStack_238 = 8;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1c0) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"recentlyActive");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c95c:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "recentlyActive";
          uStack_238 = 0xe;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c95c;
          local_230 = 0x100005;
          local_240 = "recentlyActive";
          uStack_238 = 0xe;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1c4) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"memberType");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050c9d0:
          uVar12 = 0;
        }
        else {
          local_230 = 0x100005;
          local_240 = "memberType";
          uStack_238 = 10;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10050c9d0;
          local_230 = 0x100005;
          local_240 = "memberType";
          uStack_238 = 10;
          puVar11 = (undefined4 *)FUN_1000e87dc(plVar5,&local_240);
          uVar12 = *puVar11;
        }
        *(undefined4 *)(param_2 + 0x1d4) = uVar12;
        lVar4 = FUN_1000e86c0(plVar5,"bForDisplay");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050ca44:
          bVar3 = false;
        }
        else {
          local_230 = 0x100005;
          local_240 = "bForDisplay";
          uStack_238 = 0xb;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_10050ca44;
          local_230 = 0x100005;
          local_240 = "bForDisplay";
          uStack_238 = 0xb;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          bVar3 = *(int *)(lVar4 + 0x10) == 0x102;
        }
        *(bool *)(param_2 + 0x1d0) = bVar3;
        lVar4 = FUN_1000e86c0(plVar5,"createdTime");
        uVar15 = 0;
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
          local_230 = 0x100005;
          local_240 = "createdTime";
          uStack_238 = 0xb;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x11) >> 1 & 1) != 0) {
            local_230 = 0x100005;
            local_240 = "createdTime";
            uStack_238 = 0xb;
            FUN_1000e87dc(plVar5,&local_240);
            FUN_1000fceec();
            uVar15 = CONCAT17(extraout_var_05,
                              CONCAT16(extraout_var_04,
                                       CONCAT15(extraout_var_03,
                                                CONCAT14(extraout_var_02,
                                                         CONCAT13(extraout_var_01,
                                                                  CONCAT12(extraout_var_00,
                                                                           CONCAT11(extraout_var,
                                                                                    extraout_b0)))))
                                      ));
          }
        }
        *(undefined8 *)(param_2 + 0x1c8) = uVar15;
        FUN_10051c93c(plVar5,param_2 + 0x28);
        lVar4 = FUN_1000e86c0(plVar5,"nextRewardChestHashedSku");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
          local_230 = 0x100005;
          local_240 = "nextRewardChestHashedSku";
          uStack_238 = 0x18;
          lVar4 = FUN_1000e87dc(plVar5,&local_240);
          if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
            lVar4 = FUN_1000e86c0(plVar5,"nextRewardChestHashedSku");
            if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_10050cb8c:
              pcVar6 = "";
            }
            else {
              local_230 = 0x100005;
              local_240 = "nextRewardChestHashedSku";
              uStack_238 = 0x18;
              lVar4 = FUN_1000e87dc(plVar5,&local_240);
              if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10050cb8c;
              local_230 = 0x100005;
              local_240 = "nextRewardChestHashedSku";
              uStack_238 = 0x18;
              pcVar6 = (char *)FUN_1000e87dc(plVar5,&local_240);
              if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
                pcVar6 = *(char **)pcVar6;
              }
            }
            FUN_1000ee4ec(&local_240,pcVar6);
            std::string::operator=((string *)(param_2 + 0x198),(string *)&local_240);
            if (local_229 < '\0') {
              operator_delete(local_240);
            }
          }
        }
        local_230 = 0x100005;
        local_240 = "members";
        uStack_238 = 7;
        plVar7 = (long *)FUN_1000e87dc(plVar5,&local_240);
        uVar2 = *(uint *)(plVar7 + 1);
        if (0 < (int)uVar2) {
          lVar4 = 0;
          do {
            plVar1 = (long *)(*plVar7 + lVar4);
            lVar8 = FUN_1000e86c0(plVar1,"uuid");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
              pcVar6 = "";
            }
            else {
              local_230 = 0x100005;
              local_240 = "uuid";
              uStack_238 = 4;
              lVar8 = FUN_1000e87dc(plVar1,&local_240);
              pcVar6 = "";
              if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                local_230 = 0x100005;
                local_240 = "uuid";
                uStack_238 = 4;
                pcVar6 = (char *)FUN_1000e87dc(plVar1,&local_240);
                if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
                  pcVar6 = *(char **)pcVar6;
                }
              }
            }
            FUN_1000ee4ec(&local_240,pcVar6);
            std::string::operator=((string *)&local_198,(string *)&local_240);
            if (local_229 < '\0') {
              operator_delete(local_240);
            }
            lVar8 = FUN_1000e86c0(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
              pcVar6 = "";
            }
            else {
              local_230 = 0x100005;
              local_240 = "handle";
              uStack_238 = 6;
              lVar8 = FUN_1000e87dc(plVar1,&local_240);
              pcVar6 = "";
              if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                local_230 = 0x100005;
                local_240 = "handle";
                uStack_238 = 6;
                pcVar6 = (char *)FUN_1000e87dc(plVar1,&local_240);
                if (((byte)pcVar6[0x12] >> 6 & 1) 
// ...truncated...
```

#### Sub-parser: `FUN_10051c93c` @ `0x10051c93c`

```c

void FUN_10051c93c(long *param_1,string *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  FUN_100159fc8(param_2);
  FUN_10051d170(param_1,param_2 + 0x70);
  lVar1 = FUN_1000e86c0(param_1,"guildUUID");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051c9c0:
    pcVar2 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "guildUUID";
    uStack_40 = 9;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) == 0) goto LAB_10051c9c0;
    local_38 = 0x100005;
    local_48 = "guildUUID";
    uStack_40 = 9;
    pcVar2 = (char *)FUN_1000e87dc(param_1,&local_48);
    if (((byte)pcVar2[0x12] >> 6 & 1) == 0) {
      pcVar2 = *(char **)pcVar2;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar2);
  std::string::operator=(param_2,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar1 = FUN_1000e86c0(param_1,"guildName");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051ca38:
    pcVar2 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "guildName";
    uStack_40 = 9;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) == 0) goto LAB_10051ca38;
    local_38 = 0x100005;
    local_48 = "guildName";
    uStack_40 = 9;
    pcVar2 = (char *)FUN_1000e87dc(param_1,&local_48);
    if (((byte)pcVar2[0x12] >> 6 & 1) == 0) {
      pcVar2 = *(char **)pcVar2;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar2);
  std::string::operator=(param_2 + 0x18,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar1 = FUN_1000e86c0(param_1,"guildTag");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051cab0:
    pcVar2 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "guildTag";
    uStack_40 = 8;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) == 0) goto LAB_10051cab0;
    local_38 = 0x100005;
    local_48 = "guildTag";
    uStack_40 = 8;
    pcVar2 = (char *)FUN_1000e87dc(param_1,&local_48);
    if (((byte)pcVar2[0x12] >> 6 & 1) == 0) {
      pcVar2 = *(char **)pcVar2;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar2);
  std::string::operator=(param_2 + 0x30,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar1 = FUN_1000e86c0(param_1,"motto");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051cb28:
    pcVar2 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "motto";
    uStack_40 = 5;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) == 0) goto LAB_10051cb28;
    local_38 = 0x100005;
    local_48 = "motto";
    uStack_40 = 5;
    pcVar2 = (char *)FUN_1000e87dc(param_1,&local_48);
    if (((byte)pcVar2[0x12] >> 6 & 1) == 0) {
      pcVar2 = *(char **)pcVar2;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar2);
  std::string::operator=(param_2 + 0x48,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar1 = FUN_1000e86c0(param_1,"numMembers");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051cba0:
    uVar4 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "numMembers";
    uStack_40 = 10;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051cba0;
    local_38 = 0x100005;
    local_48 = "numMembers";
    uStack_40 = 10;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar4 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x60) = uVar4;
  lVar1 = FUN_1000e86c0(param_1,"maxNumMembers");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051ccc4:
    uVar4 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "maxNumMembers";
    uStack_40 = 0xd;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051ccc4;
    local_38 = 0x100005;
    local_48 = "maxNumMembers";
    uStack_40 = 0xd;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar4 = *puVar3;
  }
  *(undefined4 *)(param_2 + 100) = uVar4;
  lVar1 = FUN_1000e86c0(param_1,"guildLevel");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
LAB_10051cd38:
    uVar4 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "guildLevel";
    uStack_40 = 10;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051cd38;
    local_38 = 0x100005;
    local_48 = "guildLevel";
    uStack_40 = 10;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar4 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x68) = uVar4;
  lVar1 = FUN_1000e86c0(param_1,"guildTier");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "guildTier";
    uStack_40 = 9;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "guildTier";
      uStack_40 = 9;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
      uVar4 = *puVar3;
      goto LAB_10051cdd0;
    }
  }
  uVar4 = 0;
LAB_10051cdd0:
  *(undefined4 *)(param_2 + 0x6c) = uVar4;
  return;
}


```

#### Sub-parser: `FUN_10051cde8` @ `0x10051cde8`

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

---

### Parser: equipmentData @ `0x100519118`

```c

void FUN_100519118(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 local_98;
  long local_90;
  undefined1 local_88;
  undefined1 local_87;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  FUN_10051f96c(param_2);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_a0._0_4_ = 0x100005;
    local_b0 = "returnValue";
    uStack_a8 = 0xb;
    lVar2 = FUN_1000e87dc(param_1,&local_b0);
    if (*(int *)(lVar2 + 0x10) == 3) {
      local_a0._0_4_ = 0x100005;
      local_b0 = "returnValue";
      uStack_a8 = 0xb;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_b0);
      lVar2 = FUN_1000e86c0(plVar3,"player_global_loadout");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
        return;
      }
      local_a0._0_4_ = 0x100005;
      local_b0 = "player_global_loadout";
      uStack_a8 = 0x15;
      lVar2 = FUN_1000e87dc(plVar3,&local_b0);
      if (*(int *)(lVar2 + 0x10) != 3) {
        return;
      }
      local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "player_global_loadout";
      uStack_a8 = 0x15;
      plVar3 = (long *)FUN_1000e87dc(plVar3,&local_b0);
      lVar2 = FUN_1000e86c0(plVar3,"social_ping_pack");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
        local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "social_ping_pack";
        uStack_a8 = 0x10;
        lVar2 = FUN_1000e87dc(plVar3,&local_b0);
        if (*(int *)(lVar2 + 0x10) == 3) {
          local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
          local_b0 = "social_ping_pack";
          uStack_a8 = 0x10;
          plVar4 = (long *)FUN_1000e87dc(plVar3,&local_b0);
          if ((int)plVar4[1] != 0) {
            puVar7 = (undefined8 *)*plVar4;
            do {
              local_b0 = (char *)0x0;
              uStack_a8 = 0;
              local_a0 = (void *)0x0;
              if ((*(uint *)(puVar7 + 2) >> 0x14 & 1) != 0) {
                puVar6 = puVar7;
                if ((*(uint *)(puVar7 + 2) >> 0x16 & 1) == 0) {
                  puVar6 = (undefined8 *)*puVar7;
                }
                FUN_1000ee4ec(&local_78,puVar6);
                std::string::operator=((string *)&local_b0,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                puVar6 = puVar7 + 3;
                lVar2 = FUN_1000e86c0(puVar6,"equipped");
                if (puVar7[3] + (ulong)*(uint *)(puVar7 + 4) * 0x30 == lVar2) {
                  bVar1 = false;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "equipped";
                  uStack_70 = 8;
                  lVar2 = FUN_1000e87dc(puVar6,&local_78);
                  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                    bVar1 = false;
                  }
                  else {
                    local_68 = 0x100005;
                    local_78 = "equipped";
                    uStack_70 = 8;
                    lVar2 = FUN_1000e87dc(puVar6,&local_78);
                    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                  }
                }
                local_98 = CONCAT71(local_98._1_7_,bVar1);
                lVar2 = FUN_1000e86c0(puVar6,"metadata");
                if (puVar7[3] + (ulong)*(uint *)(puVar7 + 4) * 0x30 != lVar2) {
                  local_68 = 0x100005;
                  local_78 = "metadata";
                  uStack_70 = 8;
                  lVar2 = FUN_1000e87dc(puVar6,&local_78);
                  if (*(int *)(lVar2 + 0x10) == 3) {
                    local_68 = 0x100005;
                    local_78 = "metadata";
                    uStack_70 = 8;
                    plVar5 = (long *)FUN_1000e87dc(puVar6,&local_78);
                    lVar2 = FUN_1000e86c0(plVar5,"thumbsUp");
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
LAB_100519458:
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "thumbsUp";
                      uStack_70 = 8;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100519458;
                      local_68 = 0x100005;
                      local_78 = "thumbsUp";
                      uStack_70 = 8;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                    }
                    local_98._0_2_ = CONCAT11(bVar1,(undefined1)local_98);
                    lVar2 = FUN_1000e86c0(plVar5,"smile");
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
LAB_1005194c4:
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "smile";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1005194c4;
                      local_68 = 0x100005;
                      local_78 = "smile";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                    }
                    local_98._0_3_ = CONCAT12(bVar1,(undefined2)local_98);
                    lVar2 = FUN_1000e86c0(plVar5);
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "frown";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                        bVar1 = false;
                      }
                      else {
                        local_68 = 0x100005;
                        local_78 = "frown";
                        uStack_70 = 5;
                        lVar2 = FUN_1000e87dc(plVar5,&local_78);
                        bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                      }
                    }
                    local_98._0_4_ = CONCAT13(bVar1,(undefined3)local_98);
                    lVar2 = FUN_1000e86c0(plVar5);
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "toast";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                        bVar1 = false;
                      }
                      else {
                        local_68 = 0x100005;
                        local_78 = "toast";
                        uStack_70 = 5;
                        lVar2 = FUN_1000e87dc(plVar5,&local_78);
                        bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                      }
                    }
                    local_98._0_5_ = CONCAT14(bVar1,(undefined4)local_98);
                    lVar2 = FUN_1000e86c0(plVar5);
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
LAB_10051964c:
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "ok";
                      uStack_70 = 2;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10051964c;
                      local_68 = 0x100005;
                      local_78 = "ok";
                      uStack_70 = 2;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                    }
                    local_98._0_6_ = CONCAT15(bVar1,(undefined5)local_98);
                  }
                }
                FUN_10028cee0(param_2 + 0x28,&local_b0);
                if ((long)local_a0 < 0) {
                  operator_delete(local_b0);
                }
              }
              puVar7 = puVar7 + 6;
            } while (puVar7 != (undefined8 *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30));
          }
        }
      }
      lVar2 = FUN_1000e86c0(plVar3,"social_ping_pack");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
        local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "social_ping_pack";
        uStack_a8 = 0x10;
        lVar2 = FUN_1000e87dc(plVar3,&local_b0);
        if (*(int *)(lVar2 + 0x10) == 3) {
          local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
          local_b0 = "social_ping_pack";
          uStack_a8 = 0x10;
          plVar4 = (long *)FUN_1000e87dc(plVar3,&local_b0);
          if ((int)plVar4[1] != 0) {
            puVar7 = (undefined8 *)*plVar4;
            do {
              local_b0 = (char *)0x0;
              uStack_a8 = 0;
              local_a0 = (void *)0x0;
              if ((*(uint *)(puVar7 + 2) >> 0x14 & 1) != 0) {
                puVar6 = puVar7;
                if ((*(uint *)(puVar7 + 2) >> 0x16 & 1) == 0) {
                  puVar6 = (undefined8 *)*puVar7;
                }
                FUN_1000ee4ec(&local_78,puVar6);
                std::string::operator=((string *)&local_b0,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                puVar6 = puVar7 + 3;
                lVar2 = FUN_1000e86c0(puVar6,"equipped");
                if (puVar7[3] + (ulong)*(uint *)(puVar7 + 4) * 0x30 == lVar2) {
                  bVar1 = false;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "equipped";
                  uStack_70 = 8;
                  lVar2 = FUN_1000e87dc(puVar6,&local_78);
                  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                    bVar1 = false;
                  }
                  else {
                    local_68 = 0x100005;
                    local_78 = "equipped";
                    uStack_70 = 8;
                    lVar2 = FUN_1000e87dc(puVar6,&local_78);
                    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                  }
                }
                local_98 = CONCAT71(local_98._1_7_,bVar1);
                lVar2 = FUN_1000e86c0(puVar6,"metadata");
                if (puVar7[3] + (ulong)*(uint *)(puVar7 + 4) * 0x30 != lVar2) {
                  local_68 = 0x100005;
                  local_78 = "metadata";
                  uStack_70 = 8;
                  lVar2 = FUN_1000e87dc(puVar6,&local_78);
                  if (*(int *)(lVar2 + 0x10) == 3) {
                    local_68 = 0x100005;
                    local_78 = "metadata";
                    uStack_70 = 8;
                    plVar5 = (long *)FUN_1000e87dc(puVar6,&local_78);
                    lVar2 = FUN_1000e86c0(plVar5,"thumbsUp");
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
LAB_1005198cc:
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "thumbsUp";
                      uStack_70 = 8;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1005198cc;
                      local_68 = 0x100005;
                      local_78 = "thumbsUp";
                      uStack_70 = 8;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                    }
                    local_98._0_2_ = CONCAT11(bVar1,(undefined1)local_98);
                    lVar2 = FUN_1000e86c0(plVar5);
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "smile";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                        bVar1 = false;
                      }
                      else {
                        local_68 = 0x100005;
                        local_78 = "smile";
                        uStack_70 = 5;
                        lVar2 = FUN_1000e87dc(plVar5,&local_78);
                        bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                      }
                    }
                    local_98._0_3_ = CONCAT12(bVar1,(undefined2)local_98);
                    lVar2 = FUN_1000e86c0(plVar5);
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "frown";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                        bVar1 = false;
                      }
                      else {
                        local_68 = 0x100005;
                        local_78 = "frown";
                        uStack_70 = 5;
                        lVar2 = FUN_1000e87dc(plVar5,&local_78);
                        bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                      }
                    }
                    local_98._0_4_ = CONCAT13(bVar1,(undefined3)local_98);
                    lVar2 = FUN_1000e86c0(plVar5);
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "toast";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                        bVar1 = false;
                      }
                      else {
                        local_68 = 0x100005;
                        local_78 = "toast";
                        uStack_70 = 5;
                        lVar2 = FUN_1000e87dc(plVar5,&local_78
// ...truncated...
```

---

## 2. Priority Sender Functions

### Sender: `friendListAll` @ `0x1004f58d8`

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

---

### Sender: `friendRequestIssueByHandle` @ `0x1004f5b0c`

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

---

### Sender: `friendRequestConfirm` @ `0x1004f5c30`

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

---

### Sender: `friendDelete` @ `0x1004f5f24`

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

---

### Sender: `friendAddFavorite` @ `0x1004f6020`

```c

undefined8 FUN_1004f6020(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1000ee4ec(local_50,"friendAddFavorite");
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

---

### Sender: `friendsListUpdate` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0e2),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004ee8d8:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004ee8d8;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 1;
      }
    }
    else {
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
          if (((uVar16 == 9) &&
              (iVar3 = std::string::compare
                                 ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
              iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
            puVar13 = puVar10;
            if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
              puVar13 = (undefined8 *)*puVar10;
            }
            FUN_1000ee4ec(&local_a0,puVar13);
            psVar18 = param_1 + 0xa0;
LAB_1004ee724:
            std::string::operator=(psVar18,(str
// ...truncated...
```

---

### Sender: `createParty` @ `0x1004f6f4c`

```c

undefined8 FUN_1004f6f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"createParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7068(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```

---

### Sender: `partyInviteSend` @ `0x1004f7878`

```c

void FUN_1004f77f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  undefined8 *local_110;
  undefined8 local_108;
  void *pvStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
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
  
  uStack_58 = 0;
  local_60 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
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
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 3;
  bVar4 = *(byte *)(param_3 + 0x5f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_3 + 0x50);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  local_78 = local_80;
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_3 + 0x48);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_3 + 0x48);
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar9,sVar1), iVar5 == 0)) goto LAB_1004f790c;
    }
    else {
      if (sVar1 == 0) goto LAB_1004f790c;
      if ((uint)*pbVar9 == ((uint)pvVar10 & 0xff)) {
        pbVar8 = (byte *)(param_3 + 0x49);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_1004f790c;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar9);
      }
    }
  }
  FUN_1004f84b4(&local_98,param_3 + 0x30,0x10);
LAB_1004f790c:
  pvStack_c8 = (void *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  local_b0 = 0;
  uStack_a8 = 0x100;
  local_110 = &local_d0;
  pvStack_100 = (void *)0x0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  local_e8 = 0;
  uStack_e0 = 0x200;
  local_d8 = 0;
  FUN_100110914(&local_98,&local_110);
  uVar6 = FUN_100110e38(&local_d0);
  FUN_1000ee4ec(param_1,uVar6);
  _free(local_f8);
  if (pvStack_100 != (void *)0x0) {
    operator_delete(pvStack_100);
  }
  _free(local_c0);
  if (pvStack_c8 != (void *)0x0) {
    operator_delete(pvStack_c8);
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar10 = (void *)FUN_1000f7b54();
    operator_delete(pvVar10);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}


```

---

### Sender: `partyInviteConfirm` @ `0x1004f7488`

```c

void FUN_1004f7444(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
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
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_58 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_4 + 0x17);
  local_58 = (undefined8 *)*param_4;
  if (-1 < (char)bVar2) {
    local_58 = param_4;
  }
  uVar1 = (uint)param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}


```

---

### Sender: `partyMemberKick` @ `0x1004f7b7c`

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

---

### Sender: `partyMembers` @ `0x1004f7d70`

```c

undefined8
FUN_1004f7cbc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
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
  local_40 = param_5;
  uStack_3c = param_4;
  local_38 = param_3;
  uStack_34 = param_2;
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_6);
  FUN_1000ee4ec(local_60,"partyMemberMove");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7dc8(local_78,lVar1,&uStack_34,&local_38,&uStack_3c,&local_40);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}


```

---

### Sender: `partyChangeQueueMode` @ `0x1004f8014`

```c

undefined8
FUN_1004f7f0c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_48;
  undefined4 local_44;
  
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
  local_44 = param_2;
  local_48 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"partyChangeQueueMode");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f8020(local_78,lVar1,&local_44,param_5,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_48,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}


```

---

### Sender: `createQuintParty` @ `0x1004f6478`

```c

undefined8 FUN_1004f6478(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"createQuintParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f6594(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```

---

### Sender: `joinQuintParty` @ `0x1004f6574`

```c

undefined8 FUN_1004f6478(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"createQuintParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f6594(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```

---

### Sender: `updateQuintPartyState` @ `0x1004f6880`

```c

undefined8 FUN_1004f67bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
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
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"joinQuintParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f68d8(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```

---

### Sender: `queryPendingMatch` @ `0x1004fd4b4`

```c

undefined8 FUN_1004fd37c(long param_1)

{
  string *psVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (*(long **)(param_1 + 0x2a48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2a48) + 0x38))();
    *(undefined1 *)(param_1 + 0x2a62) = 0;
    *(undefined4 *)(param_1 + 0x2a54) = 0;
    if (*(long **)(param_1 + 0x2a48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2a48) + 8))();
    }
    *(undefined8 *)(param_1 + 0x2a48) = 0;
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_1004fd3e0;
  }
  else if (*(char *)(param_1 + 0x7f) != '\0') {
LAB_1004fd3e0:
    if (*(int *)(param_1 + 0x2b08) != 0) {
      FUN_1004f1904(param_1 + 0x2a70);
      FUN_1000ee4ec(local_48,"endSession");
      psVar1 = (string *)(param_1 + 0x2bb8);
      if (*(char *)(param_1 + 0x2c18) != '\0') {
        psVar1 = (string *)(param_1 + 0x2c20);
      }
      FUN_1004f4e58(local_60,psVar1);
      uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,1,0,2,0);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      FUN_1004f1dac(param_1 + 0x10);
      FUN_1000ee4ec(local_48,"");
      std::string::operator=((string *)(param_1 + 0x2c20),(string *)local_48);
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      *(undefined4 *)(param_1 + 0x2b08) = 0;
      return uVar2;
    }
    uVar2 = 1;
    goto LAB_1004fd4d0;
  }
  uVar2 = 0xfffffff9;
LAB_1004fd4d0:
  DAT_1018675c8 = (int)uVar2;
  return uVar2;
}


```

---

### Sender: `acceptMatch` @ `0x1004fd8e0`

```c

undefined8 FUN_1004fd8e0(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1000ee4ec(local_50,"acceptMatch");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,2,0);
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

---

### Sender: `getTrophyCase` @ `0x100501448`

```c

void FUN_1005013a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
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
  local_78 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_3);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_3;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_4);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_4;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar1 = *(byte *)((long)param_5 + 0x17);
  local_58 = (undefined8 *)*param_5;
  if (-1 < (char)bVar1) {
    local_58 = param_5;
  }
  uVar2 = (uint)param_5[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}


```

---

### Sender: `getAscensionDisplayData` @ `0x100501548`

```c

undefined8 FUN_100501548(long param_1)

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
  FUN_1000ee4ec(local_50,"getAscensionDisplayData");
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

---

### Sender: `getHeroMastery` @ `0x1004fef50`

```c

undefined8 FUN_1004fef50(long param_1,undefined8 param_2,undefined8 param_3)

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
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getHeroMastery");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fe98c(local_68,lVar1,param_3);
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

---

### Sender: `processMessage` @ `0x1004fde88`

```c

undefined8 FUN_1004fde88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
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
  FUN_1000ee4ec(local_48,"dismissReliableMessage");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_60,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x5a,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return uVar2;
}


```

---

### Sender: `dismissReliableMessage` @ `0x1004fde88`

```c

undefined8 FUN_1004fde88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
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
  FUN_1000ee4ec(local_48,"dismissReliableMessage");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_60,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x5a,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return uVar2;
}


```

---

### Sender: `notifyGameResults` @ `0x100503314`

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
      FUN_100518760(param_2,plVar6);
      break;
    case 0x3f:
      FUN_100518970(param_2,plVar6);
      break;
    case 0x40:
      FUN_100519118(param_2,plVar6);
      break;
    case 0x41:
      FUN_10051a044(param_2,plVar6);
      break;
    case 0x42:
      FUN_10051a108(param_2,plVar6);
      break;
    case 0x43:
      FUN_10051a488(param_2,plVar6);
      break;
    case 0x44:
      FUN_10051a54c(param_2,plVar6);
      break;
    case 0x45:
      FUN_10051a610(param_2,plVar6);
      break;
    case 0x46:
      FUN_100503c98(param_2,plVar6);
      break;
    case 0x47:
      FUN_100503f84(param_2,plVar6);
      break;
    case 0x48:
      FUN_100504270(param_2,plVar6);
      break;
    case 0x49:
      FUN_10050455c(param_2,plVar6);
      break;
    case 0x4a:
      FUN_100504848(param_2,plVar6);
    }
  }
  return;
}


```

---

### Sender: `recordMatchExperienceMetrics` @ `0x100503748`

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
      FUN_100518760(param_2,plVar6);
      break;
    case 0x3f:
      FUN_100518970(param_2,plVar6);
      break;
    case 0x40:
      FUN_100519118(param_2,plVar6);
      break;
    case 0x41:
      FUN_10051a044(param_2,plVar6);
      break;
    case 0x42:
      FUN_10051a108(param_2,plVar6);
      break;
    case 0x43:
      FUN_10051a488(param_2,plVar6);
      break;
    case 0x44:
      FUN_10051a54c(param_2,plVar6);
      break;
    case 0x45:
      FUN_10051a610(param_2,plVar6);
      break;
    case 0x46:
      FUN_100503c98(param_2,plVar6);
      break;
    case 0x47:
      FUN_100503f84(param_2,plVar6);
      break;
    case 0x48:
      FUN_100504270(param_2,plVar6);
      break;
    case 0x49:
      FUN_10050455c(param_2,plVar6);
      break;
    case 0x4a:
      FUN_100504848(param_2,plVar6);
    }
  }
  return;
}


```

---

### Sender: `presenceBroadcast` @ `0x1004f8ce0`

```c

/* WARNING: Removing unreachable block (ram,0x0001004f8adc) */
/* WARNING: Removing unreachable block (ram,0x0001004f8b3c) */

void FUN_1004f8a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  char *local_1b0;
  undefined8 local_1a8;
  void *pvStack_1a0;
  void *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  char local_170 [8];
  void *pvStack_168;
  void *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  void *local_138 [2];
  char local_121;
  void *local_120 [2];
  char local_109;
  void *local_108 [2];
  char local_f1;
  void *local_f0 [2];
  char local_d9;
  string local_d8 [24];
  string local_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  local_60 = 0;
  uStack_58 = 0x400;
  local_50 = 0;
  local_48 = 0;
  puVar5 = operator_new(0x28);
  *puVar5 = 0;
  puVar5[1] = 0x10000;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[2] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 3;
  uVar7 = *(ulong *)(param_3 + 0x38);
  if (-1 < (char)*(byte *)(param_3 + 0x47)) {
    uVar7 = (ulong)*(byte *)(param_3 + 0x47);
  }
  local_90 = puVar5;
  local_88 = puVar5;
  if (uVar7 != 0) {
    std::string::string(local_c0,(string *)(param_3 + 0x30));
    pvStack_1a0._0_4_ = 0x100005;
    local_1b0 = "lobby";
    local_1a8 = 5;
    FUN_10049aa58(&local_a8,&local_1b0,local_c0,puVar5);
    FUN_1004f2a80(&local_a8,"elo",3,*(undefined4 *)(param_3 + 0x498),puVar5);
    std::string::string(local_d8,(string *)(param_3 + 0x4a0));
    pvStack_1a0._0_4_ = 0x100005;
    local_1b0 = "playerHandle";
    local_1a8 = 0xc;
    FUN_10049aa58(&local_a8,&local_1b0,local_d8,puVar5);
    std::string::string((string *)local_f0,(string *)(param_3 + 0x4b8));
    pvStack_1a0 = (void *)CONCAT44(pvStack_1a0._4_4_,0x100005);
    local_1b0 = "equippedHat";
    local_1a8 = 0xb;
    FUN_10049aa58(&local_a8,&local_1b0,local_f0,puVar5);
    if (local_d9 < '\0') {
      operator_delete(local_f0[0]);
    }
    std::string::string((string *)local_108,(string *)(param_3 + 0x4d0));
    pvStack_1a0 = (void *)CONCAT44(pvStack_1a0._4_4_,0x100005);
    local_1b0 = "equippedEmoji";
    local_1a8 = 0xd;
    FUN_10049aa58(&local_a8,&local_1b0,local_108,puVar5);
    if (local_f1 < '\0') {
      operator_delete(local_108[0]);
    }
    std::string::string((string *)local_120,(string *)(param_3 + 0x4e8));
    pvStack_1a0 = (void *)CONCAT44(pvStack_1a0._4_4_,0x100005);
    local_1b0 = "equippedPingPack";
    local_1a8 = 0x10;
    FUN_10049aa58(&local_a8,&local_1b0,local_120,puVar5);
    if (local_109 < '\0') {
      operator_delete(local_120[0]);
    }
  }
  uVar7 = *(ulong *)(param_3 + 0x50);
  if (-1 < (char)*(byte *)(param_3 + 0x5f)) {
    uVar7 = (ulong)*(byte *)(param_3 + 0x5f);
  }
  if (uVar7 != 0) {
    std::string::string((string *)local_138,(string *)(param_3 + 0x48));
    pvStack_1a0 = (void *)CONCAT44(pvStack_1a0._4_4_,0x100005);
    local_1b0 = "difficulty";
    local_1a8 = 10;
    FUN_10049aa58(&local_a8,&local_1b0,local_138,puVar5);
    if (local_121 < '\0') {
      operator_delete(local_138[0]);
    }
  }
  bVar3 = *(byte *)(param_3 + 0x8f);
  uVar7 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_3 + 0x80);
  if (-1 < (char)bVar3) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_3 + 0x78);
    puVar5 = pvVar10;
    if (-1 < (char)bVar3) {
      puVar5 = (undefined8 *)(param_3 + 0x78);
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar4 = _memcmp(puVar5,pbVar9,sVar1), iVar4 == 0)) goto LAB_1004f8d1c;
    }
    else {
      if (sVar1 == 0) goto LAB_1004f8d1c;
      if ((uint)*pbVar9 == ((uint)pvVar10 & 0xff)) {
        pbVar8 = (byte *)(param_3 + 0x79);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_1004f8d1c;
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 == *pbVar9);
      }
    }
  }
  FUN_1004f84b4(&local_a8,param_3 + 0x60,0x10);
LAB_1004f8d1c:
  pvStack_168 = (void *)0x0;
  local_170[0] = '\0';
  local_170[1] = '\0';
  local_170[2] = '\0';
  local_170[3] = '\0';
  local_170[4] = '\0';
  local_170[5] = '\0';
  local_170[6] = '\0';
  local_170[7] = '\0';
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_150 = 0;
  uStack_148 = 0x100;
  local_1b0 = local_170;
  pvStack_1a0 = (void *)0x0;
  local_1a8 = 0;
  uStack_190 = 0;
  local_198 = (void *)0x0;
  local_188 = 0;
  uStack_180 = 0x200;
  local_178 = 0;
  FUN_100110914(&local_a8,&local_1b0);
  uVar6 = FUN_100110e38(local_170);
  FUN_1000ee4ec(param_1,uVar6);
  _free(local_198);
  if (pvStack_1a0 != (void *)0x0) {
    operator_delete(pvStack_1a0);
  }
  _free(local_160);
  if (pvStack_168 != (void *)0x0) {
    operator_delete(pvStack_168);
  }
  if (local_88 != (undefined8 *)0x0) {
    pvVar10 = (void *)FUN_1000f7b54();
    operator_delete(pvVar10);
  }
  _free(local_70);
  if (pvStack_78 != (void *)0x0) {
    operator_delete(pvStack_78);
  }
  return;
}


```

---

### Sender: `guildGetData` @ `0x1004fb5ac`

```c

undefined8 FUN_1004fb5ac(long param_1)

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
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"guildGetData");
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
  }
  return uVar2;
}


```

---

## 3. WebSocket / Push Notification System

### `notifyUrl`

**String at:** `0x10141be09`

#### `FUN_100506f44` @ `0x100506f44`

```c

void FUN_100506f44(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48._0_4_ = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  piVar2 = (int *)FUN_1000e87dc(param_2,&local_58);
  if (*piVar2 != 0) {
    DAT_1018675c8 = *piVar2;
    return;
  }
  lVar3 = FUN_1000e86c0(param_2,"returnValue");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    return;
  }
  local_48._0_4_ = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar3 = FUN_1000e87dc(param_2,&local_58);
  if (*(int *)(lVar3 + 0x10) != 3) {
    return;
  }
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_2,&local_58);
  lVar3 = FUN_1000e86c0(plVar4,"notifyUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) goto LAB_100507290;
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "notifyUrl";
  uStack_50 = 9;
  lVar3 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_100507290;
  *(undefined1 *)(param_1 + 0x2a63) = 0;
  lVar3 = FUN_1000e86c0(plVar4,"notifyFallbackUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "notifyFallbackUrl";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2a63) = 1;
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "notifyFallbackUrl";
      uStack_50 = 0x11;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x98),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"bucketIncrementer");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_100507160:
    uVar7 = 3000;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "bucketIncrementer";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_100507160;
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "bucketIncrementer";
    uStack_50 = 0x11;
    puVar6 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
    uVar7 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0x2a58) = uVar7;
  lVar3 = FUN_1000e86c0(plVar4,"failoverThreshold");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_1005071d4:
    uVar7 = 4000;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "failoverThreshold";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1005071d4;
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "failoverThreshold";
    uStack_50 = 0x11;
    puVar6 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
    uVar7 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0x2a5c) = uVar7;
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "notifyUrl";
  uStack_50 = 9;
  plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
  plVar1 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar1 = plVar5;
  }
  FUN_1000ee4ec(&local_58,plVar1);
  std::string::operator=((string *)(param_1 + 0x80),(string *)&local_58);
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  *(undefined1 *)(param_1 + 0x2a62) = 0;
  *(undefined4 *)(param_1 + 0x2a54) = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  lVar3 = FUN_1004f2c38((string *)(param_1 + 0x80),1,&local_58);
  *(long *)(param_1 + 0x2a48) = lVar3;
  if (local_48 < 0) {
    operator_delete(local_58);
    lVar3 = *(long *)(param_1 + 0x2a48);
  }
  if (lVar3 != 0) {
    *(undefined1 *)(param_1 + 0x2a61) = 1;
  }
LAB_100507290:
  lVar3 = FUN_1000e86c0(plVar4,"platformUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "platformUrl";
    uStack_50 = 0xb;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "platformUrl";
      uStack_50 = 0xb;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x68),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"state");
  if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) ||
     (lVar3 = FUN_1000e86c0(plVar4,"playerInfo"),
     *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3)) {
    FUN_10051abec(param_1 + 0x2a68,plVar4);
  }
  lVar3 = FUN_1000e86c0(plVar4,"playerUUID");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "playerUUID";
    uStack_50 = 10;
    plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
    plVar1 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar1 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar1);
    std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&local_58);
    if (local_48 < 0) {
      operator_delete(local_58);
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"sessionToken");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "sessionToken";
    uStack_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
    plVar1 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar1 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar1);
    std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&local_58);
    if (local_48 < 0) {
      operator_delete(local_58);
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"startSessionUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "startSessionUrl";
    uStack_50 = 0xf;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "startSessionUrl";
      uStack_50 = 0xf;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x50),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"linked");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48._0_4_ = 0x100005;
    local_58 = "linked";
    uStack_50 = 6;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "linked";
      uStack_50 = 6;
      lVar3 = FUN_1000e87dc(plVar4,&local_58);
      *(bool *)(param_1 + 0x2a64) = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  return;
}


```

#### `FUN_100505520` @ `0x100505520`

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
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      
// ...truncated...
```

---

### `notifyFallbackUrl`

**String at:** `0x10141be13`

#### `FUN_100506f44` @ `0x100506f44`

```c

void FUN_100506f44(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48._0_4_ = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  piVar2 = (int *)FUN_1000e87dc(param_2,&local_58);
  if (*piVar2 != 0) {
    DAT_1018675c8 = *piVar2;
    return;
  }
  lVar3 = FUN_1000e86c0(param_2,"returnValue");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    return;
  }
  local_48._0_4_ = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar3 = FUN_1000e87dc(param_2,&local_58);
  if (*(int *)(lVar3 + 0x10) != 3) {
    return;
  }
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_2,&local_58);
  lVar3 = FUN_1000e86c0(plVar4,"notifyUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) goto LAB_100507290;
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "notifyUrl";
  uStack_50 = 9;
  lVar3 = FUN_1000e87dc(plVar4,&local_58);
  if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_100507290;
  *(undefined1 *)(param_1 + 0x2a63) = 0;
  lVar3 = FUN_1000e86c0(plVar4,"notifyFallbackUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "notifyFallbackUrl";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2a63) = 1;
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "notifyFallbackUrl";
      uStack_50 = 0x11;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x98),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"bucketIncrementer");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_100507160:
    uVar7 = 3000;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "bucketIncrementer";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_100507160;
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "bucketIncrementer";
    uStack_50 = 0x11;
    puVar6 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
    uVar7 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0x2a58) = uVar7;
  lVar3 = FUN_1000e86c0(plVar4,"failoverThreshold");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_1005071d4:
    uVar7 = 4000;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "failoverThreshold";
    uStack_50 = 0x11;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1005071d4;
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "failoverThreshold";
    uStack_50 = 0x11;
    puVar6 = (undefined4 *)FUN_1000e87dc(plVar4,&local_58);
    uVar7 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0x2a5c) = uVar7;
  local_48 = CONCAT44(local_48._4_4_,0x100005);
  local_58 = "notifyUrl";
  uStack_50 = 9;
  plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
  plVar1 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar1 = plVar5;
  }
  FUN_1000ee4ec(&local_58,plVar1);
  std::string::operator=((string *)(param_1 + 0x80),(string *)&local_58);
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  *(undefined1 *)(param_1 + 0x2a62) = 0;
  *(undefined4 *)(param_1 + 0x2a54) = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  lVar3 = FUN_1004f2c38((string *)(param_1 + 0x80),1,&local_58);
  *(long *)(param_1 + 0x2a48) = lVar3;
  if (local_48 < 0) {
    operator_delete(local_58);
    lVar3 = *(long *)(param_1 + 0x2a48);
  }
  if (lVar3 != 0) {
    *(undefined1 *)(param_1 + 0x2a61) = 1;
  }
LAB_100507290:
  lVar3 = FUN_1000e86c0(plVar4,"platformUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "platformUrl";
    uStack_50 = 0xb;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "platformUrl";
      uStack_50 = 0xb;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x68),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"state");
  if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) ||
     (lVar3 = FUN_1000e86c0(plVar4,"playerInfo"),
     *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3)) {
    FUN_10051abec(param_1 + 0x2a68,plVar4);
  }
  lVar3 = FUN_1000e86c0(plVar4,"playerUUID");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "playerUUID";
    uStack_50 = 10;
    plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
    plVar1 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar1 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar1);
    std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&local_58);
    if (local_48 < 0) {
      operator_delete(local_58);
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"sessionToken");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "sessionToken";
    uStack_50 = 0xc;
    plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
    plVar1 = (long *)*plVar5;
    if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
      plVar1 = plVar5;
    }
    FUN_1000ee4ec(&local_58,plVar1);
    std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&local_58);
    if (local_48 < 0) {
      operator_delete(local_58);
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"startSessionUrl");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48 = CONCAT44(local_48._4_4_,0x100005);
    local_58 = "startSessionUrl";
    uStack_50 = 0xf;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "startSessionUrl";
      uStack_50 = 0xf;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_1 + 0x50),(string *)&local_58);
      if (local_48 < 0) {
        operator_delete(local_58);
      }
    }
  }
  lVar3 = FUN_1000e86c0(plVar4,"linked");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_48._0_4_ = 0x100005;
    local_58 = "linked";
    uStack_50 = 6;
    lVar3 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_48 = CONCAT44(local_48._4_4_,0x100005);
      local_58 = "linked";
      uStack_50 = 6;
      lVar3 = FUN_1000e87dc(plVar4,&local_58);
      *(bool *)(param_1 + 0x2a64) = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  return;
}


```

#### `FUN_100505520` @ `0x100505520`

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
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      
// ...truncated...
```

---

### `enableStateUpdates`

**String at:** `0x10141beb9`

#### `FUN_100505520` @ `0x100505520`

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
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      
// ...truncated...
```

---

### `missedStateUpdateMessagesThreshold`

**String at:** `0x10141becc`

#### `FUN_100505520` @ `0x100505520`

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
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      
// ...truncated...
```

---

### `processMessage`

**String at:** `0x10141ba4f`

#### `FUN_1004ff2bc` @ `0x1004ff2bc`

```c

undefined8 FUN_1004ff2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
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
  FUN_1000ee4ec(local_48,"processMessage");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_60,lVar1,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x5a,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
    return uVar2;
  }
  return uVar2;
}


```

---

### `dismissReliableMessage`

**String at:** `0x10141b97b`

#### `FUN_1004fde88` @ `0x1004fde88`

```c

undefined8 FUN_1004fde88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
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
  FUN_1000ee4ec(local_48,"dismissReliableMessage");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_60,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x5a,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return uVar2;
}


```

---

### `stateUpdate`

**String at:** `0x10141b10c`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `quintPartyStateUpdate`

**String at:** `0x10141b065`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `quintPartyJoinRequest`

**String at:** `0x10141b093`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `quintPartyPlayerLeft`

**String at:** `0x10141b0e2`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `quintPartyMemberKick`

**String at:** `0x10141b0f7`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `friendsListUpdate`

**String at:** `0x10141b126`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `WebSocket`

**Not found in binary**

---

### `Opening WebSocket connection: %s`

**String at:** `0x10141cccf`

#### `FUN_10052019c` @ `0x10052019c`

```c

void FUN_10052019c(long *param_1,uint param_2)

{
  long *plVar1;
  timeval *ptVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ssize_t sVar8;
  long *plVar9;
  size_t sVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  void *pvVar18;
  int iVar19;
  timeval local_200;
  ulong local_1f0 [16];
  timeval local_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long local_70;
  
  puVar4 = PTR____darwin_check_fd_set_overflow_101444200;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(int *)((long)param_1 + 0x54) == 1) {
    plVar9 = param_1;
    if (0 < (int)param_2) {
      local_170.tv_sec = (ulong)param_2 / 1000;
      local_170.tv_usec = (param_2 % 1000) * 1000;
      uVar5 = _select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_170);
      plVar9 = (long *)(ulong)uVar5;
    }
  }
  else {
    if (param_2 != 0) {
      local_200.tv_sec = (__darwin_time_t)((int)param_2 / 1000);
      local_200.tv_usec = ((int)param_2 % 1000) * 1000;
      local_170.tv_usec = 0;
      local_170._12_4_ = 0;
      local_170.tv_sec = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_1f0[1] = 0;
      local_1f0[0] = 0;
      local_1f0[3] = 0;
      local_1f0[2] = 0;
      local_1f0[5] = 0;
      local_1f0[4] = 0;
      local_1f0[7] = 0;
      local_1f0[6] = 0;
      local_1f0[9] = 0;
      local_1f0[8] = 0;
      local_1f0[0xb] = 0;
      local_1f0[10] = 0;
      local_1f0[0xd] = 0;
      local_1f0[0xc] = 0;
      local_1f0[0xf] = 0;
      local_1f0[0xe] = 0;
      uVar5 = *(uint *)(param_1 + 10);
      if ((PTR____darwin_check_fd_set_overflow_101444200 == (undefined *)0x0) ||
         (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,&local_170,0), iVar6 != 0)) {
        uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
        *(uint *)((long)&local_170.tv_sec + uVar13) =
             *(uint *)((long)&local_170.tv_sec + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
      }
      if (param_1[5] != param_1[4]) {
        uVar5 = *(uint *)(param_1 + 10);
        if ((puVar4 == (undefined *)0x0) ||
           (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,local_1f0,0), iVar6 != 0)) {
          uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
          *(uint *)((long)local_1f0 + uVar13) =
               *(uint *)((long)local_1f0 + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
        }
      }
      ptVar2 = &local_200;
      if ((int)param_2 < 1) {
        ptVar2 = (timeval *)0x0;
      }
      _select((int)param_1[10] + 1,(fd_set *)&local_170,(fd_set *)local_1f0,(fd_set *)0x0,ptVar2);
    }
    plVar1 = param_1 + 1;
    while( true ) {
      lVar12 = param_1[1];
      uVar17 = param_1[2] - lVar12;
      uVar13 = (long)((uVar17 << 0x20) + 0x5dc00000000) >> 0x20;
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = lVar12 + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
        lVar12 = *plVar1;
      }
      uVar13 = (ulong)(int)uVar17;
      sVar8 = _recv((int)param_1[10],(void *)(lVar12 + uVar13),0x5dc,0);
      if (sVar8 < 0) {
        plVar9 = (long *)___error();
        if (((int)*plVar9 == 0x23) || (plVar9 = (long *)___error(), (int)*plVar9 == 0x23)) {
          uVar17 = param_1[2] - param_1[1];
          if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
            if (uVar13 < uVar17) {
              param_1[2] = param_1[1] + uVar13;
            }
          }
          else {
            plVar9 = (long *)FUN_100520ec8(plVar1,uVar13 - uVar17);
          }
          goto LAB_100520460;
        }
        break;
      }
      if (sVar8 == 0) break;
      uVar13 = sVar8 + uVar13;
      uVar17 = param_1[2] - param_1[1];
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = param_1[1] + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
      }
    }
    uVar17 = param_1[2] - param_1[1];
    if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
      if (uVar13 < uVar17) {
        param_1[2] = param_1[1] + uVar13;
      }
    }
    else {
      FUN_100520ec8(plVar1,uVar13 - uVar17);
    }
    _close((int)param_1[10]);
    *(int *)((long)param_1 + 0x54) = 1;
    pcVar16 = "Connection error!\n";
    if (-1 < sVar8) {
      pcVar16 = "Connection closed!\n";
    }
    uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
    plVar9 = (long *)(ulong)uVar5;
LAB_100520460:
    pvVar18 = (void *)param_1[4];
    sVar10 = param_1[5] - (long)pvVar18;
    if (sVar10 != 0) {
      pcVar16 = "Connection closed!\n";
      do {
        plVar9 = (long *)_send((int)param_1[10],pvVar18,sVar10,0);
        iVar6 = (int)plVar9;
        if (iVar6 < 0) {
          plVar9 = (long *)___error();
          if (((int)*plVar9 != 0x23) && (plVar9 = (long *)___error(), (int)*plVar9 != 0x23)) {
            pcVar16 = "Connection error!\n";
LAB_100520508:
            _close((int)param_1[10]);
            *(int *)((long)param_1 + 0x54) = 1;
            uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
            plVar9 = (long *)(ulong)uVar5;
          }
          break;
        }
        if (iVar6 == 0) goto LAB_100520508;
        pvVar18 = (void *)param_1[4];
        if (((ulong)plVar9 & 0xffffffff) == 0) {
          lVar12 = param_1[5];
        }
        else {
          sVar10 = param_1[5] - ((long)pvVar18 + (long)iVar6);
          pvVar14 = pvVar18;
          if (sVar10 != 0) {
            plVar9 = _memmove(pvVar18,(void *)((long)pvVar18 + (long)iVar6),sVar10);
            pvVar14 = (void *)param_1[4];
          }
          lVar12 = (long)pvVar18 + sVar10;
          param_1[5] = lVar12;
          pvVar18 = pvVar14;
        }
        sVar10 = lVar12 - (long)pvVar18;
      } while (sVar10 != 0);
    }
    if ((param_1[5] == param_1[4]) && (*(int *)((long)param_1 + 0x54) == 0)) {
      plVar9 = (long *)_close((int)param_1[10]);
      *(int *)((long)param_1 + 0x54) = 1;
    }
    puVar4 = PTR____stderrp_101444220;
    lVar12 = param_1[1];
    if (((1 < (ulong)(param_1[2] - lVar12)) && (*(int *)((long)param_1 + 0x54) == 2)) &&
       (local_1f0[0] = local_1f0[0] & 0xffffffff00000000, param_1[2] != lVar12)) {
      lVar15 = 0;
      iVar19 = 0;
      iVar6 = 0;
      bVar11 = false;
      do {
        uVar13 = (long)iVar6 - (long)iVar19;
        iVar7 = (int)uVar13;
        if (0xff < iVar7) {
          _fwrite("ERROR: Buffer too long",0x16,1,*(FILE **)puVar4);
          plVar9 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
          break;
        }
        cVar3 = *(char *)(lVar12 + lVar15);
        *(char *)((long)&local_170 + uVar13) = cVar3;
        if ((iVar7 < 1) ||
           (*(char *)((long)&local_170.tv_sec + (ulong)(iVar7 - 1)) != '\r' || cVar3 != '\n')) {
          iVar6 = iVar6 + 1;
        }
        else {
          *(undefined1 *)((long)&local_170.tv_sec + (uVar13 & 0xffffffff) + 1) = 0;
          if (bVar11) {
            if (iVar7 == 1) {
              uVar5 = _fprintf(*(FILE **)puVar4,"Opening WebSocket connection: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 3;
              lVar12 = (long)iVar6 + 1;
              if ((int)lVar12 != 0) {
                pvVar14 = (void *)param_1[1];
                pvVar18 = (void *)((long)pvVar14 + lVar12);
                sVar10 = param_1[2] - (long)pvVar18;
                if (sVar10 != 0) {
                  plVar9 = _memmove(pvVar14,pvVar18,sVar10);
                }
                param_1[2] = (long)pvVar14 + sVar10;
              }
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"Read header: %s");
            plVar9 = (long *)(ulong)uVar5;
            iVar6 = iVar6 + 1;
            bVar11 = true;
            iVar19 = iVar6;
          }
          else {
            iVar7 = _sscanf((char *)&local_170,"HTTP/1.1 %d");
            if ((iVar7 != 1) || ((int)local_1f0[0] != 0x65)) {
              uVar5 = _fprintf(*(FILE **)puVar4,"ERROR: Got bad status: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 0;
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"WebSocket successful HTTP status: %s");
            plVar9 = (long *)(ulong)uVar5;
            bVar11 = true;
          }
        }
        lVar15 = (long)iVar6;
      } while ((ulong)(long)iVar6 < (ulong)(param_1[2] - param_1[1]));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar9);
}


```

---

### `WebSocket successful HTTP status: %s`

**String at:** `0x10141cc90`

#### `FUN_10052019c` @ `0x10052019c`

```c

void FUN_10052019c(long *param_1,uint param_2)

{
  long *plVar1;
  timeval *ptVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ssize_t sVar8;
  long *plVar9;
  size_t sVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  void *pvVar18;
  int iVar19;
  timeval local_200;
  ulong local_1f0 [16];
  timeval local_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long local_70;
  
  puVar4 = PTR____darwin_check_fd_set_overflow_101444200;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(int *)((long)param_1 + 0x54) == 1) {
    plVar9 = param_1;
    if (0 < (int)param_2) {
      local_170.tv_sec = (ulong)param_2 / 1000;
      local_170.tv_usec = (param_2 % 1000) * 1000;
      uVar5 = _select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_170);
      plVar9 = (long *)(ulong)uVar5;
    }
  }
  else {
    if (param_2 != 0) {
      local_200.tv_sec = (__darwin_time_t)((int)param_2 / 1000);
      local_200.tv_usec = ((int)param_2 % 1000) * 1000;
      local_170.tv_usec = 0;
      local_170._12_4_ = 0;
      local_170.tv_sec = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_1f0[1] = 0;
      local_1f0[0] = 0;
      local_1f0[3] = 0;
      local_1f0[2] = 0;
      local_1f0[5] = 0;
      local_1f0[4] = 0;
      local_1f0[7] = 0;
      local_1f0[6] = 0;
      local_1f0[9] = 0;
      local_1f0[8] = 0;
      local_1f0[0xb] = 0;
      local_1f0[10] = 0;
      local_1f0[0xd] = 0;
      local_1f0[0xc] = 0;
      local_1f0[0xf] = 0;
      local_1f0[0xe] = 0;
      uVar5 = *(uint *)(param_1 + 10);
      if ((PTR____darwin_check_fd_set_overflow_101444200 == (undefined *)0x0) ||
         (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,&local_170,0), iVar6 != 0)) {
        uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
        *(uint *)((long)&local_170.tv_sec + uVar13) =
             *(uint *)((long)&local_170.tv_sec + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
      }
      if (param_1[5] != param_1[4]) {
        uVar5 = *(uint *)(param_1 + 10);
        if ((puVar4 == (undefined *)0x0) ||
           (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,local_1f0,0), iVar6 != 0)) {
          uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
          *(uint *)((long)local_1f0 + uVar13) =
               *(uint *)((long)local_1f0 + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
        }
      }
      ptVar2 = &local_200;
      if ((int)param_2 < 1) {
        ptVar2 = (timeval *)0x0;
      }
      _select((int)param_1[10] + 1,(fd_set *)&local_170,(fd_set *)local_1f0,(fd_set *)0x0,ptVar2);
    }
    plVar1 = param_1 + 1;
    while( true ) {
      lVar12 = param_1[1];
      uVar17 = param_1[2] - lVar12;
      uVar13 = (long)((uVar17 << 0x20) + 0x5dc00000000) >> 0x20;
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = lVar12 + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
        lVar12 = *plVar1;
      }
      uVar13 = (ulong)(int)uVar17;
      sVar8 = _recv((int)param_1[10],(void *)(lVar12 + uVar13),0x5dc,0);
      if (sVar8 < 0) {
        plVar9 = (long *)___error();
        if (((int)*plVar9 == 0x23) || (plVar9 = (long *)___error(), (int)*plVar9 == 0x23)) {
          uVar17 = param_1[2] - param_1[1];
          if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
            if (uVar13 < uVar17) {
              param_1[2] = param_1[1] + uVar13;
            }
          }
          else {
            plVar9 = (long *)FUN_100520ec8(plVar1,uVar13 - uVar17);
          }
          goto LAB_100520460;
        }
        break;
      }
      if (sVar8 == 0) break;
      uVar13 = sVar8 + uVar13;
      uVar17 = param_1[2] - param_1[1];
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = param_1[1] + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
      }
    }
    uVar17 = param_1[2] - param_1[1];
    if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
      if (uVar13 < uVar17) {
        param_1[2] = param_1[1] + uVar13;
      }
    }
    else {
      FUN_100520ec8(plVar1,uVar13 - uVar17);
    }
    _close((int)param_1[10]);
    *(int *)((long)param_1 + 0x54) = 1;
    pcVar16 = "Connection error!\n";
    if (-1 < sVar8) {
      pcVar16 = "Connection closed!\n";
    }
    uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
    plVar9 = (long *)(ulong)uVar5;
LAB_100520460:
    pvVar18 = (void *)param_1[4];
    sVar10 = param_1[5] - (long)pvVar18;
    if (sVar10 != 0) {
      pcVar16 = "Connection closed!\n";
      do {
        plVar9 = (long *)_send((int)param_1[10],pvVar18,sVar10,0);
        iVar6 = (int)plVar9;
        if (iVar6 < 0) {
          plVar9 = (long *)___error();
          if (((int)*plVar9 != 0x23) && (plVar9 = (long *)___error(), (int)*plVar9 != 0x23)) {
            pcVar16 = "Connection error!\n";
LAB_100520508:
            _close((int)param_1[10]);
            *(int *)((long)param_1 + 0x54) = 1;
            uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
            plVar9 = (long *)(ulong)uVar5;
          }
          break;
        }
        if (iVar6 == 0) goto LAB_100520508;
        pvVar18 = (void *)param_1[4];
        if (((ulong)plVar9 & 0xffffffff) == 0) {
          lVar12 = param_1[5];
        }
        else {
          sVar10 = param_1[5] - ((long)pvVar18 + (long)iVar6);
          pvVar14 = pvVar18;
          if (sVar10 != 0) {
            plVar9 = _memmove(pvVar18,(void *)((long)pvVar18 + (long)iVar6),sVar10);
            pvVar14 = (void *)param_1[4];
          }
          lVar12 = (long)pvVar18 + sVar10;
          param_1[5] = lVar12;
          pvVar18 = pvVar14;
        }
        sVar10 = lVar12 - (long)pvVar18;
      } while (sVar10 != 0);
    }
    if ((param_1[5] == param_1[4]) && (*(int *)((long)param_1 + 0x54) == 0)) {
      plVar9 = (long *)_close((int)param_1[10]);
      *(int *)((long)param_1 + 0x54) = 1;
    }
    puVar4 = PTR____stderrp_101444220;
    lVar12 = param_1[1];
    if (((1 < (ulong)(param_1[2] - lVar12)) && (*(int *)((long)param_1 + 0x54) == 2)) &&
       (local_1f0[0] = local_1f0[0] & 0xffffffff00000000, param_1[2] != lVar12)) {
      lVar15 = 0;
      iVar19 = 0;
      iVar6 = 0;
      bVar11 = false;
      do {
        uVar13 = (long)iVar6 - (long)iVar19;
        iVar7 = (int)uVar13;
        if (0xff < iVar7) {
          _fwrite("ERROR: Buffer too long",0x16,1,*(FILE **)puVar4);
          plVar9 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
          break;
        }
        cVar3 = *(char *)(lVar12 + lVar15);
        *(char *)((long)&local_170 + uVar13) = cVar3;
        if ((iVar7 < 1) ||
           (*(char *)((long)&local_170.tv_sec + (ulong)(iVar7 - 1)) != '\r' || cVar3 != '\n')) {
          iVar6 = iVar6 + 1;
        }
        else {
          *(undefined1 *)((long)&local_170.tv_sec + (uVar13 & 0xffffffff) + 1) = 0;
          if (bVar11) {
            if (iVar7 == 1) {
              uVar5 = _fprintf(*(FILE **)puVar4,"Opening WebSocket connection: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 3;
              lVar12 = (long)iVar6 + 1;
              if ((int)lVar12 != 0) {
                pvVar14 = (void *)param_1[1];
                pvVar18 = (void *)((long)pvVar14 + lVar12);
                sVar10 = param_1[2] - (long)pvVar18;
                if (sVar10 != 0) {
                  plVar9 = _memmove(pvVar14,pvVar18,sVar10);
                }
                param_1[2] = (long)pvVar14 + sVar10;
              }
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"Read header: %s");
            plVar9 = (long *)(ulong)uVar5;
            iVar6 = iVar6 + 1;
            bVar11 = true;
            iVar19 = iVar6;
          }
          else {
            iVar7 = _sscanf((char *)&local_170,"HTTP/1.1 %d");
            if ((iVar7 != 1) || ((int)local_1f0[0] != 0x65)) {
              uVar5 = _fprintf(*(FILE **)puVar4,"ERROR: Got bad status: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 0;
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"WebSocket successful HTTP status: %s");
            plVar9 = (long *)(ulong)uVar5;
            bVar11 = true;
          }
        }
        lVar15 = (long)iVar6;
      } while ((ulong)(long)iVar6 < (ulong)(param_1[2] - param_1[1]));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar9);
}


```

---

### `ERROR: Could not parse WebSocket url: %s`

**Not found in binary**

---

### `ERROR: Got unexpected WebSocket message.`

**Not found in binary**

---

### `Quality_Client_Switched_LongPoll`

**String at:** `0x1013da548`

#### `FUN_100105200` @ `0x100105200`

```c

void FUN_100105200(void)

{
  FUN_10052b208("Quality_Client_Switched_LongPoll");
  FUN_10052b1dc("Quality_Client_Switched_LongPoll");
  return;
}


```

---

### `Sec-WebSocket-Key`

**Not found in binary**

---

### `Upgrade: websocket`

**Not found in binary**

---

### `StateUpdate_Message_Dropped`

**String at:** `0x1013daec8`

#### `FUN_10010990c` @ `0x10010990c`

```c

void FUN_10010990c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "received";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_1);
  local_50 = "sent";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_2);
  local_50 = "missed";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_3);
  FUN_10052b20c("StateUpdate_Message_Dropped",&puStack_48);
  FUN_10052b1e0("StateUpdate_Message_Dropped",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}


```

---

### `ws://%`

**Not found in binary**

---

### `Nuo::Services::ChatClient`

**Not found in binary**

---

### `chatUrl`

**String at:** `0x10141be9f`

#### `FUN_100505520` @ `0x100505520`

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
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      
// ...truncated...
```

---

### `chatUser`

**Not found in binary**

---

### `chatPass`

**String at:** `0x10141bea7`

#### `FUN_100505520` @ `0x100505520`

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
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505c3c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "guildUUID";
        local_a8 = 9;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 0xb0),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"teamUUID");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505cb4:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505cb4;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "teamUUID";
        local_a8 = 8;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      FUN_1000ee4ec(&local_b0,pcVar8);
      std::string::operator=((string *)(param_2 + 200),(string *)&local_b0);
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
      lVar4 = FUN_1000e86c0(plVar6,"handle");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
LAB_100505d2c:
        pcVar8 = "";
      }
      else {
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        lVar4 = FUN_1000e87dc(plVar6,&local_b0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100505d2c;
        local_a0 = CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "handle";
        local_a8 = 6;
        pcVar8 = (char *)FUN_1000e87dc(plVar6,&local_b0);
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          pcVar8 = *(char **)pcVar8;
        }
      }
      
// ...truncated...
```

---

## 4. Friends List Field References

### `confirmed`

**String at:** `0x1013db100`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `pending`

**String at:** `0x1013db0f8`

#### `FUN_10050bc4c` @ `0x10050bc4c`

```c

void FUN_10050bc4c(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  char *local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long lStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68;
  char local_61;
  
  local_c0._0_4_ = 0x100005;
  local_d0 = "code";
  local_c8 = (void *)0x4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_d0);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_c0 = (void *)CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = "returnValue";
    local_c8 = (void *)0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_d0);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_1004e313c(&local_d0);
      local_80 = 0;
      local_78 = "returnValue";
      lStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = (void *)0x0;
      uStack_b8 = 0;
      local_c0 = (void *)0x0;
      local_a8 = (void *)0x0;
      lStack_b0 = 0;
      local_68 = 0x100005;
      local_70 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_78);
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        FUN_100169150(param_2 + 0x28,0);
        local_68 = 0x100005;
        local_78 = "pending";
        local_70 = 7;
        plVar4 = (long *)FUN_1000e87dc(plVar4,&local_78);
        if ((int)plVar4[1] != 0) {
          lVar3 = 0;
          uVar8 = 0;
          do {
            plVar1 = (long *)(*plVar4 + lVar3);
            lVar5 = FUN_1000e86c0(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar5) {
              local_68 = 0x100005;
              local_78 = "handle";
              local_70 = 6;
              lVar5 = FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = "handle";
                local_70 = 6;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1004e3148(&local_d0,plVar7);
                local_68 = 0x100005;
                local_78 = "uuid";
                local_70 = 4;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_c0,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "partyUuid";
                local_70 = 9;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_a8,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "gameMode";
                local_70 = 8;
                plVar7 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar1 = (long *)*plVar7;
                if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
                  plVar1 = plVar7;
                }
                FUN_1000ee4ec(&local_78,plVar1);
                std::string::operator=((string *)&local_90,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                FUN_10051c880(param_2 + 0x28,&local_d0);
              }
            }
            uVar8 = uVar8 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar8 < *(uint *)(plVar4 + 1));
        }
      }
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      if (lStack_98 < 0) {
        operator_delete(local_a8);
      }
      if (lStack_b0 < 0) {
        operator_delete(local_c0);
      }
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
    }
  }
  return;
}


```

---

### `numOffline`

**String at:** `0x1013db0ed`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `numFriends`

**String at:** `0x1013db0d6`

#### `FUN_10010d860` @ `0x10010d860`

```c

void FUN_10010d860(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  iVar2 = FUN_1004f1698(param_1 + 0x48);
  if (((iVar2 != 0) && (FUN_10010da6c(param_1,param_1 + 0x48), *(char *)(param_1 + 0x2f8) == '\0'))
     && (lVar3 = FUN_10015d3ec(), *(int *)(lVar3 + 0x55cc) == 1)) {
    *(undefined1 *)(param_1 + 0x2f8) = 1;
    FUN_100102240("numFriends",*(int *)(param_1 + 0x2f4) + *(int *)(param_1 + 0x270),1);
  }
  iVar2 = FUN_1004f1698(param_1 + 0x90);
  if (iVar2 != 0) {
    plVar5 = (long *)(DAT_101d230b0 + -8);
    if (DAT_101d230b0 != 0 && plVar5 != (long *)0x0) {
      do {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x90);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      } while (plVar5 != (long *)0x0);
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  iVar2 = FUN_1004f1698(param_1 + 0x1b0);
  if (iVar2 != 0) {
    if (DAT_101d230b0 != 0) {
      plVar5 = (long *)(DAT_101d230b0 + -8);
      while (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x1b0);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x2f9) != '\0') {
    if (DAT_101d230b0 != 0) {
      plVar5 = (long *)(DAT_101d230b0 + -8);
      while (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2f9) = 0;
  }
  iVar2 = FUN_1004f1698(param_1 + 0xf0);
  if (iVar2 != 0) {
    iVar2 = FUN_1004f1680(param_1 + 0xf0);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x130) == 0)) {
      FUN_10010f6bc(param_1);
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x2fa) != '\0') {
    if (DAT_101d230b0 != 0) {
      plVar5 = (long *)(DAT_101d230b0 + -8);
      while (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2fa) = 0;
  }
  uVar4 = FUN_1004f1698(param_1 + 0x150);
  if (((uVar4 & 1) != 0) || (iVar2 = FUN_1004f1698(param_1 + 0x210), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  FUN_100169bc4(param_1 + 0x30);
  return;
}


```

---

### `availability`

**String at:** `0x1013db15c`

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
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x7c) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierProgress");
      dVar18 = 0.0;
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierProgress";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        dVar17 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierProgress";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x80) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierBronzeLine");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierBronzeLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierBronzeLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar18 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar18,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x84) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierSilverLine");
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierSilverLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierSilverLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x88) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierGoldLine");
      fVar16 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierGoldLine";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        fVar16 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierGoldLine";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
          fVar16 = (float)dVar17;
        }
      }
      fVar16 = (float)NEON_fminnm(fVar16,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x8c) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"bForDisplay");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050f074:
        bVar3 = false;
      }
      else {
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_10050f074;
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      }
      *(bool *)(param_2 + 0x90) = bVar3;
      FUN_10015aacc(lVar4,0);
      local_118 = 0x100005;
      local_128 = "members";
      uStack_120 = 7;
      plVar7 = (long *)FUN_1000e87dc(plVar6,&local_128);
      uVar2 = *(uint *)(plVar7 + 1);
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          plVar1 = (long *)(*plVar7 + lVar5);
        
// ...truncated...
```

---

### `playerUUID`

**String at:** `0x10141be66`

#### `FUN_10050b0dc` @ `0x10050b0dc`

```c

/* WARNING: Removing unreachable block (ram,0x00010050b32c) */

void FUN_10050b0dc(long *param_1,long param_2)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  char *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  void *local_c0;
  float local_b8;
  undefined4 local_b4;
  char *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  local_a0._0_4_ = 0x100005;
  local_b0 = "code";
  uStack_a8 = 4;
  puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_b0);
  *(undefined4 *)(param_2 + 0x60) = *puVar4;
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar5) {
    local_a0._0_4_ = 0x100005;
    local_b0 = "returnValue";
    uStack_a8 = 0xb;
    lVar5 = FUN_1000e87dc(param_1,&local_b0);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "returnValue";
      uStack_a8 = 0xb;
      uVar6 = FUN_1000e87dc(param_1,&local_b0);
      local_b0 = (char *)0x0;
      uStack_a8 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,0x100005);
      local_e0 = "isValid";
      local_d8 = 7;
      lVar5 = FUN_1000e87dc(uVar6,&local_e0);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      *(bool *)(param_2 + 0x58) = bVar3;
      if (bVar3) {
        local_d0 = CONCAT44(local_d0._4_4_,0x100005);
        local_d8 = 7;
        local_e0 = "matchId";
        plVar7 = (long *)FUN_1000e87dc(uVar6,&local_e0);
        plVar8 = (long *)*plVar7;
        if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
          plVar8 = plVar7;
        }
        FUN_1000ee4ec(&local_e0,plVar8);
        std::string::operator=((string *)(param_2 + 0x28),(string *)&local_e0);
        if (local_d0 < 0) {
          operator_delete(local_e0);
        }
        local_d0 = CONCAT44(local_d0._4_4_,0x100005);
        local_e0 = "ttl";
        local_d8 = 3;
        FUN_1000e87dc(uVar6,&local_e0);
        dVar2 = (double)FUN_1000fceec();
        *(float *)(param_2 + 0x40) = (float)dVar2;
        FUN_100200a2c(param_2 + 0x48,0);
        local_e0 = (char *)0x0;
        local_d8 = 0;
        local_d0 = 0;
        FUN_1004e313c();
        local_68 = 0x100005;
        local_78 = "responses";
        uStack_70 = 9;
        plVar8 = (long *)FUN_1000e87dc(uVar6,&local_78);
        if ((int)plVar8[1] != 0) {
          lVar5 = 0;
          uVar10 = 0;
          do {
            lVar1 = *plVar8 + lVar5;
            local_68 = 0x100005;
            local_78 = "playerUUID";
            uStack_70 = 10;
            plVar9 = (long *)FUN_1000e87dc(lVar1,&local_78);
            plVar7 = (long *)*plVar9;
            if ((*(uint *)(plVar9 + 2) & 0x400000) != 0) {
              plVar7 = plVar9;
            }
            FUN_1000ee4ec(&local_78,plVar7);
            std::string::operator=((string *)&local_e0,(string *)&local_78);
            local_68 = 0x100005;
            local_78 = "response";
            uStack_70 = 8;
            puVar4 = (undefined4 *)FUN_1000e87dc(lVar1,&local_78);
            local_b4 = *puVar4;
            local_68 = 0x100005;
            local_78 = "acceptDelay";
            uStack_70 = 0xb;
            FUN_1000e87dc(lVar1,&local_78);
            dVar2 = (double)FUN_1000fceec();
            local_b8 = (float)dVar2;
            FUN_10051c7e4(param_2 + 0x48,&local_e0);
            uVar10 = uVar10 + 1;
            lVar5 = lVar5 + 0x18;
          } while (uVar10 < *(uint *)(plVar8 + 1));
        }
        if (local_c0 != (void *)0x0) {
          operator_delete__(local_c0);
          local_c8 = 0;
        }
        if (local_d0 < 0) {
          operator_delete(local_e0);
        }
      }
      FUN_100200a2c(&local_90,1);
      if (-1 < local_a0) {
        return;
      }
      operator_delete(local_b0);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x60) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}


```

---

### `handle`

**String at:** `0x1013db10a`

#### `FUN_10050bc4c` @ `0x10050bc4c`

```c

void FUN_10050bc4c(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  char *local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long lStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68;
  char local_61;
  
  local_c0._0_4_ = 0x100005;
  local_d0 = "code";
  local_c8 = (void *)0x4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_d0);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_c0 = (void *)CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = "returnValue";
    local_c8 = (void *)0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_d0);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_1004e313c(&local_d0);
      local_80 = 0;
      local_78 = "returnValue";
      lStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = (void *)0x0;
      uStack_b8 = 0;
      local_c0 = (void *)0x0;
      local_a8 = (void *)0x0;
      lStack_b0 = 0;
      local_68 = 0x100005;
      local_70 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_78);
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        FUN_100169150(param_2 + 0x28,0);
        local_68 = 0x100005;
        local_78 = "pending";
        local_70 = 7;
        plVar4 = (long *)FUN_1000e87dc(plVar4,&local_78);
        if ((int)plVar4[1] != 0) {
          lVar3 = 0;
          uVar8 = 0;
          do {
            plVar1 = (long *)(*plVar4 + lVar3);
            lVar5 = FUN_1000e86c0(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar5) {
              local_68 = 0x100005;
              local_78 = "handle";
              local_70 = 6;
              lVar5 = FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = "handle";
                local_70 = 6;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1004e3148(&local_d0,plVar7);
                local_68 = 0x100005;
                local_78 = "uuid";
                local_70 = 4;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_c0,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "partyUuid";
                local_70 = 9;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_a8,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "gameMode";
                local_70 = 8;
                plVar7 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar1 = (long *)*plVar7;
                if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
                  plVar1 = plVar7;
                }
                FUN_1000ee4ec(&local_78,plVar1);
                std::string::operator=((string *)&local_90,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                FUN_10051c880(param_2 + 0x28,&local_d0);
              }
            }
            uVar8 = uVar8 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar8 < *(uint *)(plVar4 + 1));
        }
      }
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      if (lStack_98 < 0) {
        operator_delete(local_a8);
      }
      if (lStack_b0 < 0) {
        operator_delete(local_c0);
      }
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
    }
  }
  return;
}


```

---

### `isDev`

**String at:** `0x1013db116`

#### `FUN_10050b6a8` @ `0x10050b6a8`

```c

/* WARNING: Removing unreachable block (ram,0x00010050b930) */
/* WARNING: Removing unreachable block (ram,0x00010050b814) */
/* WARNING: Removing unreachable block (ram,0x00010050b88c) */
/* WARNING: Removing unreachable block (ram,0x00010050ba80) */

void FUN_10050b6a8(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  char *local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_f8._0_4_ = 0x100005;
  local_108 = "code";
  uStack_100 = 4;
  puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_108);
  *(undefined4 *)(param_2 + 0x84) = *puVar4;
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    return;
  }
  local_f8 = CONCAT44(local_f8._4_4_,0x100005);
  local_108 = "returnValue";
  uStack_100 = 0xb;
  lVar5 = FUN_1000e87dc(param_1,&local_108);
  if (*(int *)(lVar5 + 0x10) != 3) {
    return;
  }
  local_108 = (char *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  FUN_1004e313c();
  local_88 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  lStack_a0 = 0;
  local_a8 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_70 = 0x100005;
  local_80 = "returnValue";
  uStack_78 = 0xb;
  plVar6 = (long *)FUN_1000e87dc(param_1,&local_80);
  local_70 = 0x100005;
  local_80 = "success";
  uStack_78 = 7;
  lVar5 = FUN_1000e87dc(plVar6,&local_80);
  bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
  *(bool *)(param_2 + 0x80) = bVar3;
  if (!bVar3) goto LAB_10050bbac;
  local_70 = 0x100005;
  local_80 = "partyQueueMode";
  uStack_78 = 0xe;
  plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
  plVar1 = (long *)*plVar7;
  if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
    plVar1 = plVar7;
  }
  FUN_1000ee4ec(&local_80,plVar1);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"partyQueueDifficulty");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050b868:
    pcVar11 = "";
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    lVar5 = FUN_1000e87dc(plVar6,&local_80);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050b868;
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    pcVar11 = (char *)FUN_1000e87dc(plVar6,&local_80);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  FUN_1000ee4ec(&local_80,pcVar11);
  std::string::operator=((string *)(param_2 + 0x58),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"members");
  if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) ||
     (lVar5 = FUN_1000e86c0(plVar6,"partyUUID"),
     *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5)) {
    *(undefined4 *)(param_2 + 0x84) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyUUID";
    uStack_78 = 9;
    plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
    plVar1 = (long *)*plVar7;
    if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
      plVar1 = plVar7;
    }
    FUN_1000ee4ec(&local_80,plVar1);
    std::string::operator=((string *)(param_2 + 0x28),(string *)&local_80);
    FUN_100156c78(param_2 + 0x70,0);
    local_70 = 0x100005;
    local_80 = "members";
    uStack_78 = 7;
    plVar6 = (long *)FUN_1000e87dc(plVar6,&local_80);
    uVar2 = *(uint *)(plVar6 + 1);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      do {
        plVar1 = (long *)(*plVar6 + lVar5);
        local_70 = 0x100005;
        local_80 = "handle";
        uStack_78 = 6;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1004e3148(&local_f0,plVar7);
        lVar9 = FUN_1000e86c0(plVar1,"isDev");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
          bVar3 = false;
        }
        else {
          local_70 = 0x100005;
          local_80 = "isDev";
          uStack_78 = 5;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
        }
        local_e0 = local_e0 & 0xfe | bVar3;
        local_70 = 0x100005;
        local_80 = "uuid";
        uStack_78 = 4;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1000ee4ec(&local_80,plVar7);
        std::string::operator=((string *)&local_108,(string *)&local_80);
        local_70 = 0x100005;
        local_80 = "isCaptain";
        uStack_78 = 9;
        piVar10 = (int *)FUN_1000e87dc(plVar1,&local_80);
        local_df = *piVar10 == 1;
        local_70 = 0x100005;
        local_80 = "status";
        uStack_78 = 6;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_dc = *puVar4;
        local_70 = 0x100005;
        local_80 = "team";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d8 = *puVar4;
        local_70 = 0x100005;
        local_80 = "slot";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d4 = *puVar4;
        lVar9 = FUN_1000e86c0(plVar1,"qbanLevel");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
LAB_10050bb5c:
          local_d0 = 0;
        }
        else {
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_10050bb5c;
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
          local_d0 = *puVar4;
        }
        FUN_1003208d4(param_2 + 0x70,&local_108);
        lVar5 = lVar5 + 0x18;
      } while ((ulong)uVar2 * 0x18 - lVar5 != 0);
    }
  }
LAB_10050bbac:
  if (local_88 < 0) {
    operator_delete(local_98);
  }
  if (lStack_a0 < 0) {
    operator_delete(pvStack_b0);
  }
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  return;
}


```

---

### `skillTier`

**String at:** `0x10141c00b`

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

---

### `level`

**String at:** `0x1013d2620`

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
          if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10050a7f4;
          local_80 = 0x100005;
          local_90 = "completed_non_tutorial";
          uStack_88 = 0x16;
          puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
          local_188 = *puVar2;
        }
        lVar3 = FUN_1000e86c0(plVar1,"spenderLevel");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
LAB_10050a85c:
          local_184 = 0;
        }
        else {
          local_80 = 0x100005;
          local_90 = "spenderLevel";
          uStack_88 = 0xc;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10050a85c;
          local_80 = 0x100005;
          local_90 = "spenderLevel";
          uStack_88 = 0xc;
          puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
          local_184 = *puVar2;
        }
        lVar3 = FUN_1000e86c0(plVar1,"karmaLevel");
        if (*plVar1 + (ulong)*puVar12 * 0x30 == lVar3) {
LAB_10050a8c4:
          local_180 = 0;
        }
        else {
          local_80 = 0x100005;
          local_90 = "karmaLevel";
          uStack_88 = 10;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10050a8c4;
          local_80 = 0x100005;
          local_90 = "karmaLevel";
          uStack_88 = 10;
          puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
          local_180 = *puVar2;
        }
        lVar3 = FUN_1000e86c0(plVar1,"skillProgressionInfo");
        if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar3) {
          local_80 = 0x100005;
          local_90 = "skillProgressionInfo";
          uStack_88 = 0x14;
          plVar6 = (long *)FUN_1000e87dc(plVar1,&local_90);
          lVar3 = FUN_1000e86c0(plVar6,"5v5_pvp_ranked");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar3) {
            local_80 = 0x100005;
            local_90 = "5v5_pvp_ranked";
            uStack_88 = 0xe;
            uVar7 = FUN_1000e87dc(plVar6,&local_90);
            FUN_10051bcfc(uVar7,auStack_178);
          }
          lVar3 = FUN_1000e86c0(plVar6,"ranked");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar3) {
            local_80 = 0x100005;
            local_90 = "ranked";
            uStack_88 = 6;
            uVar7 = FUN_1000e87dc(plVar6,&local_90);
            FUN_10051bcfc(uVar7,auStack_148);
          }
          lVar3 = FUN_1000e86c0(plVar6,"blitz_pvp_ranked");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar3) {
            local_80 = 0x100005;
            local_90 = "blitz_pvp_ranked";
            uStack_88 = 0x10;
            uVar7 = FUN_1000e87dc(plVar6,&local_90);
            FUN_10051bcfc(uVar7,auStack_118);
          }
        }
        lVar3 = FUN_1000e86c0(plVar1,"freeunlocks");
        if (*plVar1 + (ulong)*puVar12 * 0x30 != lVar3) {
          local_80 = 0x100005;
          local_90 = "freeunlocks";
          uStack_88 = 0xb;
          lVar3 = FUN_1000e87dc(plVar1,&local_90);
          if (*(int *)(lVar3 + 0x10) == 4) {
            local_80 = 0x100005;
            local_90 = "freeunlocks";
            uStack_88 = 0xb;
            plVar6 = (long *)FUN_1000e87dc(plVar1,&local_90);
            if ((int)plVar6[1] != 0) {
              lVar3 = 0;
              uVar11 = 0;
              do {
                lVar10 = *plVar6 + lVar3;
                if ((*(byte *)(lVar10 + 0x12) >> 6 & 1) == 0) {
                  lVar10 = *(long *)(*plVar6 + lVar3);
                }
                FUN_1000ee4ec(&local_90,lVar10);
                FUN_10001617c(&local_e8,&local_90);
                uVar11 = uVar11 + 1;
                lVar3 = lVar3 + 0x18;
              } while (uVar11 < *(uint *)(plVar6 + 1));
            }
          }
        }
        local_80 = 0x100005;
        local_90 = "handle";
        uStack_88 = 6;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_90);
        plVar6 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar6 = plVar8;
// ...truncated...
```

---

### `guildName`

**String at:** `0x1013db11c`

#### `FUN_10030e680` @ `0x10030e680`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_10030e680(long param_1,long *param_2)

{
  byte *******pppppppbVar1;
  size_t sVar2;
  size_t sVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 extraout_x0;
  char *pcVar12;
  undefined8 extraout_x0_00;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte bVar18;
  byte *******pppppppbVar19;
  bool bVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 auStack_440 [8];
  void *local_438;
  undefined1 auStack_430 [8];
  void *local_428;
  byte *******local_420;
  size_t local_418;
  byte local_409;
  char *local_408;
  void *local_400;
  int local_3f8;
  char local_3f1;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 local_3e0;
  void *pvStack_3d8;
  void *local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  void *local_80;
  void *local_78;
  
  FUN_10001549c(&local_408,"type");
  plVar7 = (long *)FUN_10022d41c(param_2 + 0xd,&local_408);
  if (local_3f1 < '\0') {
    operator_delete(local_408);
  }
  if (param_2 + 0xe == plVar7) {
    return;
  }
  lVar9 = param_1 + 0x38;
  FUN_100311830(&local_408);
  FUN_10030f810(lVar9,&local_408);
  uVar8 = FUN_100311898(&local_408);
  lVar24 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(lVar24 + 0x388) = 0;
  uVar8 = FUN_10030e1d8(uVar8,param_2,"uuid");
  FUN_10001549c(&local_420,uVar8);
  if (-1 < (char)local_409) {
    local_418 = (ulong)local_409;
  }
  if (local_418 != 0) {
    pppppppbVar1 = local_420;
    if (-1 < (char)local_409) {
      pppppppbVar1 = (byte *******)&local_420;
    }
    for (lVar25 = *(long *)(param_1 + 0x40); lVar25 != lVar9; lVar25 = *(long *)(lVar25 + 8)) {
      bVar18 = *(byte *)(lVar25 + 0x357);
      uVar14 = (ulong)bVar18;
      sVar2 = *(size_t *)(lVar25 + 0x348);
      if (-1 < (char)bVar18) {
        sVar2 = uVar14;
      }
      if (sVar2 == local_418) {
        if ((char)bVar18 < '\0') {
          iVar6 = _memcmp(*(void **)(lVar25 + 0x340),pppppppbVar1,local_418);
          if (iVar6 == 0) {
LAB_10030ee6c:
            FUN_10030f940(lVar9);
            goto LAB_10030f5f0;
          }
        }
        else if ((uint)*(byte *)pppppppbVar1 == ((uint)*(void **)(lVar25 + 0x340) & 0xff)) {
          pbVar22 = (byte *)(lVar25 + 0x341);
          pppppppbVar19 = pppppppbVar1;
          do {
            uVar14 = uVar14 - 1;
            pppppppbVar19 = (byte *******)((long)pppppppbVar19 + 1);
            if (uVar14 == 0) goto LAB_10030ee6c;
            bVar18 = *pbVar22;
            pbVar22 = pbVar22 + 1;
          } while (bVar18 == *(byte *)pppppppbVar19);
        }
      }
    }
  }
  std::string::operator=((string *)(lVar24 + 0x340),(string *)&local_420);
  pbVar22 = (byte *)((long)plVar7 + 0x4f);
  bVar18 = *pbVar22;
  uVar15 = (ulong)bVar18;
  plVar23 = plVar7 + 7;
  puVar26 = (ulong *)(plVar7 + 8);
  uVar17 = *puVar26;
  uVar14 = uVar17;
  if (-1 < (char)bVar18) {
    uVar14 = uVar15;
  }
  if (uVar14 == 6) {
    iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013da0bf);
    if (iVar6 != 0) {
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
      goto LAB_10030e838;
    }
    *(undefined4 *)(lVar24 + 0x388) = 1;
    FUN_10030f984(param_1,param_2,lVar24 + 0x10);
    FUN_100108ae0(lVar24 + 0x10);
    goto LAB_10030f4d8;
  }
LAB_10030e838:
  uVar14 = uVar17;
  if (-1 < (char)bVar18) {
    uVar14 = uVar15;
  }
  if (uVar14 == 8) {
    iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef8bf);
    if (iVar6 != 0) {
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
      goto LAB_10030e878;
    }
    uVar13 = 2;
LAB_10030eeac:
    bVar4 = false;
    bVar20 = false;
    *(undefined4 *)(lVar24 + 0x388) = uVar13;
  }
  else {
LAB_10030e878:
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 5) {
      uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef8c8);
      if ((int)uVar8 == 0) {
        uVar8 = FUN_10030df6c(uVar8,param_2,"didDodge");
        if ((int)uVar8 == 0) {
          *(undefined4 *)(lVar24 + 0x388) = 4;
          uVar8 = FUN_1004e0150("MENU_DIALOG_OTHER_PLAYER_DODGED_TITLE",0);
          FUN_1000153b4(lVar24 + 0x358,uVar8);
          pcVar12 = "MENU_DIALOG_OTHER_PLAYER_DODGED_BODY";
        }
        else {
          uVar14 = FUN_10030df6c(uVar8,param_2,"punished");
          if ((uVar14 & 1) != 0) {
            uVar13 = 3;
            goto LAB_10030eeac;
          }
          *(undefined4 *)(lVar24 + 0x388) = 4;
          uVar8 = FUN_1004e0150("MENU_DIALOG_OTHER_PLAYER_DODGED_TITLE",0);
          FUN_1000153b4(lVar24 + 0x358,uVar8);
          pcVar12 = "MENU_DIALOG_DODGE_PENALTY_UNRANKED_BODY";
        }
        uVar8 = FUN_1004e0150(pcVar12,0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(lVar24 + 0x378,uVar8);
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0xc) {
      uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef953);
      if ((int)uVar8 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 5;
        FUN_100310fd4(uVar8,param_2,lVar24 + 0x188);
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0x11) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef960);
      if (iVar6 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 4;
        uVar8 = FUN_1004e0150("MAIN_KARMA_BAN_WARNING_TITLE",0);
        FUN_1000153b4(lVar24 + 0x358,uVar8);
        uVar8 = FUN_1004e0150("MAIN_KARMA_BAN_WARNING",0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(lVar24 + 0x378,uVar8);
        FUN_100105e80();
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0xe) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef9a6);
      if (iVar6 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 6;
        uVar8 = FUN_1004e0150("MAIN_KARMA_JUSTICE_SERVED",0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        FUN_100106760();
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0xc) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013ef9cf);
      if (iVar6 == 0) {
        *(undefined4 *)(lVar24 + 0x388) = 4;
        uVar8 = FUN_1004e0150("MENU_MAIN_HUB_INBOX_MESSAGE_ELO_FORGIVEN_TITLE",0);
        FUN_1000153b4(lVar24 + 0x358,uVar8);
        uVar8 = FUN_1004e0150("MENU_MAIN_HUB_INBOX_MESSAGE_ELO_FORGIVEN",0);
        FUN_1000153b4(lVar24 + 0x368,uVar8);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(lVar24 + 0x378,uVar8);
        FUN_100105eac();
        goto LAB_10030f4d8;
      }
      bVar18 = *pbVar22;
      uVar15 = (ulong)bVar18;
      uVar17 = *puVar26;
    }
    uVar14 = uVar17;
    if (-1 < (char)bVar18) {
      uVar14 = uVar15;
    }
    if (uVar14 == 9) {
      iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efa34);
      if (iVar6 != 0) {
        bVar18 = *pbVar22;
        uVar15 = (ulong)bVar18;
        uVar17 = *puVar26;
        goto LAB_10030e9f8;
      }
      *(undefined4 *)(lVar24 + 0x388) = 4;
      uVar8 = FUN_1004e0150("MAIN_KARMA_BAN",0);
      uVar8 = thunk_FUN_1004e439c(&local_408,uVar8);
      FUN_10030e118(uVar8,param_2,"ttl");
      uVar8 = FUN_1004e0150("MAIN_KARMA_BAN_TITLE",0);
      FUN_1000153b4(lVar24 + 0x358,uVar8);
      FUN_1000f1e20(&local_80,&local_408,
                    (long)(float)CONCAT13(extraout_var_03,
                                          CONCAT12(extraout_var_01,
                                                   CONCAT11(extraout_var,extraout_b0))),0);
      FUN_1000153b4(lVar24 + 0x368,&local_80);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
      }
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(lVar24 + 0x378,uVar8);
      FUN_100105e54();
      pvVar10 = local_400;
joined_r0x00010030f38c:
      if (pvVar10 != (void *)0x0) {
        operator_delete__(pvVar10);
      }
    }
    else {
LAB_10030e9f8:
      uVar14 = uVar17;
      if (-1 < (char)bVar18) {
        uVar14 = uVar15;
      }
      if (uVar14 != 9) {
LAB_10030ea38:
        uVar14 = uVar17;
        if (-1 < (char)bVar18) {
          uVar14 = uVar15;
        }
        if (uVar14 == 0x11) {
          iVar6 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efa70);
          if (iVar6 != 0) {
            bVar18 = *pbVar22;
            uVar15 = (ulong)bVar18;
            uVar17 = *puVar26;
            goto LAB_10030ea78;
          }
          *(undefined4 *)(lVar24 + 0x388) = 4;
          uVar8 = FUN_1004e0150("MENU_MAIN_HUB_QBAN_ACTION_BODY",0);
          uVar8 = thunk_FUN_1004e439c(&local_80,uVar8);
          uVar8 = FUN_10030e1d8(uVar8,param_2,"reason");
          FUN_1004e3120(&local_408,"[QBAN_REASON]");
          uVar11 = FUN_1004e0150(uVar8,0);
          FUN_1004e3bc4(&local_80,0,&local_408,uVar11);
          if (local_400 != (void *)0x0) {
            operator_delete__(local_400);
          }
          uVar11 = FUN_1004e0150("MENU_MAIN_HUB_QBAN_ACTION_TITLE",0);
          FUN_1000153b4(lVar24 + 0x358,uVar11);
          FUN_1000153b4(lVar24 + 0x368,&local_80);
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(lVar24 + 0x378,uVar11);
          FUN_10001549c(&local_408,uVar8);
          FUN_1001067a4(&local_408);
LAB_10030f21c:
          if (local_3f1 < '\0') {
            operator_delete(local_408);
          }
          pvVar10 = local_78;
          if (local_78 != (void *)0x0) {
LAB_10030f4d4:
            operator_delete__(pvVar10);
          }
        }
        else {
LAB_10030ea78:
          uVar14 = uVar17;
          if (-1 < (char)bVar18) {
            uVar14 = uVar15;
          }
          if (uVar14 == 7) {
            uVar8 = std::string::compare((ulong)plVar23,0,(char *)0xffffffffffffffff,0x1013efacf);
            if ((int)uVar8 != 0) {
              bVar18 = *pbVar22;
              uVar15 = (ulong)bVar18;
              uVar17 = *puVar26;
              goto LAB_10030eab8;
            }
            uVar8 = FUN_10030e1d8(uVar8,param_2,"message");
            FUN_1003115fc(&local_408,uVar8,uVar8);
            FUN_1000153b4(lVar24 + 0x368,&local_408);
            uVar8 = 0;
            if (local_400 != (void *)0x0) {
              operator_delete__(local_400);
              uVar8 = extraout_x0;
            }
            pcVar12 = (char *)FUN_10030e1d8(uVar8,param_2,"displayMode");
            iVar6 = _strcmp(pcVar12,"dialog");
            if (iVar6 != 0) {
              *(undefined4 *)(lVar24 + 0x388) = 6;
              uVar8 = FUN_10030e118(iVar6,param_2,"expires");
              uVar8 =
// ...truncated...
```

---

### `guildTag`

**String at:** `0x1013db126`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `guildId`

**String at:** `0x1013db12f`

#### `FUN_10050bfac` @ `0x10050bfac`

```c

void FUN_10050bfac(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10050c01c:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10050c01c;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x25) = 0;
  std::string::operator=((string *)(param_2 + 0x30),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050c12c:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10050c12c;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050c1a8:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10050c1a8;
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x30),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"guildId");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "guildId";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "guildId";
      uStack_50 = 7;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_10050c228;
    }
  }
  pcVar5 = "";
LAB_10050c228:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


```

---

### `teamName`

**String at:** `0x1013db137`

#### `FUN_10050fa10` @ `0x10050fa10`

```c

/* WARNING: Removing unreachable block (ram,0x00010050fe4c) */
/* WARNING: Removing unreachable block (ram,0x000100510184) */
/* WARNING: Removing unreachable block (ram,0x00010050ff14) */

void FUN_10050fa10(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulong uVar10;
  char *local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined1 local_88;
  char *local_80;
  void *local_78;
  undefined4 local_70;
  
  lVar3 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_10050fa88:
    uVar9 = 0;
  }
  else {
    local_d8 = (void *)CONCAT44(local_d8._4_4_,0x100005);
    local_e8 = "code";
    local_e0 = (void *)0x4;
    lVar3 = FUN_1000e87dc(param_1,&local_e8);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10050fa88;
    local_d8 = (void *)CONCAT44(local_d8._4_4_,0x100005);
    local_e8 = "code";
    local_e0 = (void *)0x4;
    puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_e8);
    uVar9 = *puVar4;
  }
  *(undefined4 *)(param_2 + 0x58) = uVar9;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    return;
  }
  local_d8 = (void *)CONCAT44(local_d8._4_4_,0x100005);
  local_e8 = "returnValue";
  local_e0 = (void *)0xb;
  lVar3 = FUN_1000e87dc(param_1,&local_e8);
  if (*(int *)(lVar3 + 0x10) != 3) {
    return;
  }
  FUN_1004e313c(&local_e8);
  lStack_b0 = 0;
  local_b8 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  FUN_1004e313c();
  FUN_1004e313c();
  local_70 = 0x100005;
  local_80 = "returnValue";
  local_78 = (void *)0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_80);
  lVar3 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_10050fb98:
    bVar2 = false;
  }
  else {
    local_70 = 0x100005;
    local_80 = "success";
    local_78 = (void *)0x7;
    lVar3 = FUN_1000e87dc(plVar5,&local_80);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_10050fb98;
    local_70 = 0x100005;
    local_80 = "success";
    local_78 = (void *)0x7;
    lVar3 = FUN_1000e87dc(plVar5,&local_80);
    bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x38) = bVar2;
  std::string::operator=((string *)(param_2 + 0x40),(string *)&DAT_101d91198);
  if (*(char *)(param_2 + 0x38) != '\0') {
    lVar3 = FUN_1000e86c0(plVar5,"pending");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar3) {
      local_70 = 0x100005;
      local_80 = "pending";
      local_78 = (void *)0x7;
      lVar3 = FUN_1000e87dc(plVar5,&local_80);
      if (*(int *)(lVar3 + 0x10) == 4) {
        FUN_100168f84(param_2 + 0x28,0);
        local_70 = 0x100005;
        local_80 = "pending";
        local_78 = (void *)0x7;
        plVar6 = (long *)FUN_1000e87dc(plVar5,&local_80);
        if ((int)plVar6[1] != 0) {
          lVar3 = 0;
          uVar10 = 0;
          do {
            plVar1 = (long *)(*plVar6 + lVar3);
            lVar7 = FUN_1000e86c0(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar7) {
              local_70 = 0x100005;
              local_80 = "handle";
              local_78 = (void *)0x6;
              lVar7 = FUN_1000e87dc(plVar1,&local_80);
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_70 = 0x100005;
                local_80 = "handle";
                local_78 = (void *)0x6;
                lVar7 = FUN_1000e87dc(plVar1,&local_80);
                if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                  lVar7 = FUN_1000e86c0(plVar1,"handle");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "handle";
                    local_78 = (void *)0x6;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "handle";
                      local_78 = (void *)0x6;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1004e3148(&local_e8,pcVar8);
                  lVar7 = FUN_1000e86c0(plVar1,"uuid");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "uuid";
                    local_78 = (void *)0x4;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "uuid";
                      local_78 = (void *)0x4;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1000ee4ec(&local_80,pcVar8);
                  std::string::operator=((string *)&local_d8,(string *)&local_80);
                  lVar7 = FUN_1000e86c0(plVar1,"teamUUID");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "teamUUID";
                    local_78 = (void *)0x8;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "teamUUID";
                      local_78 = (void *)0x8;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1000ee4ec(&local_80,pcVar8);
                  std::string::operator=((string *)&pvStack_c0,(string *)&local_80);
                  lVar7 = FUN_1000e86c0(plVar1,"teamName");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "teamName";
                    local_78 = (void *)0x8;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "teamName";
                      local_78 = (void *)0x8;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1004e3120(&local_80,pcVar8);
                  FUN_1000153b4(&local_a8,&local_80);
                  if (local_78 != (void *)0x0) {
                    operator_delete__(local_78);
                  }
                  lVar7 = FUN_1000e86c0(plVar1,"teamTag");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "teamTag";
                    local_78 = (void *)0x7;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "teamTag";
                      local_78 = (void *)0x7;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1004e3120(&local_80,pcVar8);
                  FUN_1000153b4(&local_98,&local_80);
                  if (local_78 != (void *)0x0) {
                    operator_delete__(local_78);
                  }
                  lVar7 = FUN_1000e86c0(plVar1,"unread");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_1005100a4:
                    local_88 = false;
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "unread";
                    local_78 = (void *)0x6;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    if ((*(byte *)(lVar7 + 0x11) & 1) == 0) goto LAB_1005100a4;
                    local_70 = 0x100005;
                    local_80 = "unread";
                    local_78 = (void *)0x6;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    local_88 = *(int *)(lVar7 + 0x10) == 0x102;
                  }
                  FUN_10051da78(param_2 + 0x28,&local_e8);
                }
              }
            }
            uVar10 = uVar10 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar10 < *(uint *)(plVar6 + 1));
        }
        goto LAB_100510114;
      }
    }
    *(undefined4 *)(param_2 + 0x58) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
LAB_100510114:
  lVar3 = FUN_1000e86c0(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar3) {
    local_70 = 0x100005;
    local_80 = "reason";
    local_78 = (void *)0x6;
    lVar3 = FUN_1000e87dc(plVar5,&local_80);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = 0x100005;
      local_80 = "reason";
      local_78 = (void *)0x6;
      pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_80);
      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
        pcVar8 = *(char **)pcVar8;
      }
      goto LAB_100510168;
    }
  }
  pcVar8 = "";
LAB_100510168:
  FUN_1000ee4ec(&local_80,pcVar8);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_80);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
  }
  if (lStack_b0 < 0) {
    operator_delete(pvStack_c0);
  }
  if (local_c8 < 0) {
    operator_delete(local_d8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
  }
  return;
}


```

---

### `teamTag`

**String at:** `0x1013db140`

#### `FUN_10050fa10` @ `0x10050fa10`

```c

/* WARNING: Removing unreachable block (ram,0x00010050fe4c) */
/* WARNING: Removing unreachable block (ram,0x000100510184) */
/* WARNING: Removing unreachable block (ram,0x00010050ff14) */

void FUN_10050fa10(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulong uVar10;
  char *local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined1 local_88;
  char *local_80;
  void *local_78;
  undefined4 local_70;
  
  lVar3 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_10050fa88:
    uVar9 = 0;
  }
  else {
    local_d8 = (void *)CONCAT44(local_d8._4_4_,0x100005);
    local_e8 = "code";
    local_e0 = (void *)0x4;
    lVar3 = FUN_1000e87dc(param_1,&local_e8);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10050fa88;
    local_d8 = (void *)CONCAT44(local_d8._4_4_,0x100005);
    local_e8 = "code";
    local_e0 = (void *)0x4;
    puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_e8);
    uVar9 = *puVar4;
  }
  *(undefined4 *)(param_2 + 0x58) = uVar9;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    return;
  }
  local_d8 = (void *)CONCAT44(local_d8._4_4_,0x100005);
  local_e8 = "returnValue";
  local_e0 = (void *)0xb;
  lVar3 = FUN_1000e87dc(param_1,&local_e8);
  if (*(int *)(lVar3 + 0x10) != 3) {
    return;
  }
  FUN_1004e313c(&local_e8);
  lStack_b0 = 0;
  local_b8 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  FUN_1004e313c();
  FUN_1004e313c();
  local_70 = 0x100005;
  local_80 = "returnValue";
  local_78 = (void *)0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_80);
  lVar3 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_10050fb98:
    bVar2 = false;
  }
  else {
    local_70 = 0x100005;
    local_80 = "success";
    local_78 = (void *)0x7;
    lVar3 = FUN_1000e87dc(plVar5,&local_80);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_10050fb98;
    local_70 = 0x100005;
    local_80 = "success";
    local_78 = (void *)0x7;
    lVar3 = FUN_1000e87dc(plVar5,&local_80);
    bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x38) = bVar2;
  std::string::operator=((string *)(param_2 + 0x40),(string *)&DAT_101d91198);
  if (*(char *)(param_2 + 0x38) != '\0') {
    lVar3 = FUN_1000e86c0(plVar5,"pending");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar3) {
      local_70 = 0x100005;
      local_80 = "pending";
      local_78 = (void *)0x7;
      lVar3 = FUN_1000e87dc(plVar5,&local_80);
      if (*(int *)(lVar3 + 0x10) == 4) {
        FUN_100168f84(param_2 + 0x28,0);
        local_70 = 0x100005;
        local_80 = "pending";
        local_78 = (void *)0x7;
        plVar6 = (long *)FUN_1000e87dc(plVar5,&local_80);
        if ((int)plVar6[1] != 0) {
          lVar3 = 0;
          uVar10 = 0;
          do {
            plVar1 = (long *)(*plVar6 + lVar3);
            lVar7 = FUN_1000e86c0(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar7) {
              local_70 = 0x100005;
              local_80 = "handle";
              local_78 = (void *)0x6;
              lVar7 = FUN_1000e87dc(plVar1,&local_80);
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_70 = 0x100005;
                local_80 = "handle";
                local_78 = (void *)0x6;
                lVar7 = FUN_1000e87dc(plVar1,&local_80);
                if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                  lVar7 = FUN_1000e86c0(plVar1,"handle");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "handle";
                    local_78 = (void *)0x6;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "handle";
                      local_78 = (void *)0x6;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1004e3148(&local_e8,pcVar8);
                  lVar7 = FUN_1000e86c0(plVar1,"uuid");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "uuid";
                    local_78 = (void *)0x4;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "uuid";
                      local_78 = (void *)0x4;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1000ee4ec(&local_80,pcVar8);
                  std::string::operator=((string *)&local_d8,(string *)&local_80);
                  lVar7 = FUN_1000e86c0(plVar1,"teamUUID");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "teamUUID";
                    local_78 = (void *)0x8;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "teamUUID";
                      local_78 = (void *)0x8;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1000ee4ec(&local_80,pcVar8);
                  std::string::operator=((string *)&pvStack_c0,(string *)&local_80);
                  lVar7 = FUN_1000e86c0(plVar1,"teamName");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "teamName";
                    local_78 = (void *)0x8;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "teamName";
                      local_78 = (void *)0x8;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1004e3120(&local_80,pcVar8);
                  FUN_1000153b4(&local_a8,&local_80);
                  if (local_78 != (void *)0x0) {
                    operator_delete__(local_78);
                  }
                  lVar7 = FUN_1000e86c0(plVar1,"teamTag");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                    pcVar8 = "";
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "teamTag";
                    local_78 = (void *)0x7;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    pcVar8 = "";
                    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                      local_70 = 0x100005;
                      local_80 = "teamTag";
                      local_78 = (void *)0x7;
                      pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_80);
                      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                        pcVar8 = *(char **)pcVar8;
                      }
                    }
                  }
                  FUN_1004e3120(&local_80,pcVar8);
                  FUN_1000153b4(&local_98,&local_80);
                  if (local_78 != (void *)0x0) {
                    operator_delete__(local_78);
                  }
                  lVar7 = FUN_1000e86c0(plVar1,"unread");
                  if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_1005100a4:
                    local_88 = false;
                  }
                  else {
                    local_70 = 0x100005;
                    local_80 = "unread";
                    local_78 = (void *)0x6;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    if ((*(byte *)(lVar7 + 0x11) & 1) == 0) goto LAB_1005100a4;
                    local_70 = 0x100005;
                    local_80 = "unread";
                    local_78 = (void *)0x6;
                    lVar7 = FUN_1000e87dc(plVar1,&local_80);
                    local_88 = *(int *)(lVar7 + 0x10) == 0x102;
                  }
                  FUN_10051da78(param_2 + 0x28,&local_e8);
                }
              }
            }
            uVar10 = uVar10 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar10 < *(uint *)(plVar6 + 1));
        }
        goto LAB_100510114;
      }
    }
    *(undefined4 *)(param_2 + 0x58) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
LAB_100510114:
  lVar3 = FUN_1000e86c0(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar3) {
    local_70 = 0x100005;
    local_80 = "reason";
    local_78 = (void *)0x6;
    lVar3 = FUN_1000e87dc(plVar5,&local_80);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_70 = 0x100005;
      local_80 = "reason";
      local_78 = (void *)0x6;
      pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_80);
      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
        pcVar8 = *(char **)pcVar8;
      }
      goto LAB_100510168;
    }
  }
  pcVar8 = "";
LAB_100510168:
  FUN_1000ee4ec(&local_80,pcVar8);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_80);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
  }
  if (lStack_b0 < 0) {
    operator_delete(pvStack_c0);
  }
  if (local_c8 < 0) {
    operator_delete(local_d8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
  }
  return;
}


```

---

### `teamId`

**String at:** `0x1013db148`

#### `FUN_10050e4fc` @ `0x10050e4fc`

```c

void FUN_10050e4fc(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10050e56c:
    uVar6 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10050e56c;
    local_48 = 0x100005;
    local_58 = "code";
    uStack_50 = 4;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
    uVar6 = *puVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined1 *)(param_2 + 0x25) = 0;
  std::string::operator=((string *)(param_2 + 0x30),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&DAT_101d91198);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  lVar2 = FUN_1000e86c0(plVar4,"success");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050e67c:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10050e67c;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar4,"reason");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10050e6f8:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10050e6f8;
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x30),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar4,"teamId");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "teamId";
    uStack_50 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "teamId";
      uStack_50 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_58);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_10050e778;
    }
  }
  pcVar5 = "";
LAB_10050e778:
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


```

---

### `seasonalWins`

**String at:** `0x1013db14f`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `banTTL`

**String at:** `0x1013db169`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `favorite`

**String at:** `0x1013db170`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `ascensionCombinedRank`

**String at:** `0x1013db179`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `availabilityElapsed`

**String at:** `0x1013db18f`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `friendInMatchInformation`

**String at:** `0x1013e9b90`

#### `FUN_100278bfc` @ `0x100278bfc`

```c

void FUN_100278bfc(long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_18c [4];
  float local_188;
  undefined1 auStack_184 [4];
  undefined4 local_180;
  float local_17c;
  void *local_178;
  void *local_170;
  void *local_168;
  undefined7 local_160;
  char cStack_159;
  char local_149;
  undefined4 local_148;
  undefined8 local_144;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *local_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  
  if (param_2 != 0) {
    thunk_FUN_1001cd434(&local_128);
    uVar3 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_1004e439c(auStack_138,uVar3);
    thunk_FUN_1004e439c(&local_170,auStack_138);
    FUN_10003330c(&local_160,&DAT_101d91198);
    local_148 = 0;
    local_144 = 0xc120000041000000;
    FUN_10003c048(auStack_120,&local_170);
    if (local_149 < '\0') {
      operator_delete((void *)CONCAT17(cStack_159,local_160));
    }
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    uVar1 = *(uint *)(param_2 + 0x3ca0);
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        thunk_FUN_1004e439c(&local_180,*(long *)(param_2 + 0x3ca8) + lVar5);
        uVar4 = FUN_1004e3654(&local_180,param_2 + 0x3cd0);
        if ((uVar4 & 1) == 0) {
          thunk_FUN_1004e439c(&local_170,&local_180);
          FUN_10003330c(&local_160,&DAT_101d91198);
          local_148 = 1;
          local_144 = 0x41f0000041000000;
          FUN_10003c048(auStack_120,&local_170);
          if (local_149 < '\0') {
            operator_delete((void *)CONCAT17(cStack_159,local_160));
          }
          if (local_168 != (void *)0x0) {
            operator_delete__(local_168);
          }
        }
        if (local_178 != (void *)0x0) {
          operator_delete__(local_178);
        }
        lVar5 = lVar5 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar5 != 0);
      thunk_FUN_1004e439c(&local_170,param_2 + 0x3cd0);
      FUN_10003330c(&local_160,&DAT_101d91198);
      local_148 = 1;
      local_144 = 0x41f0000041000000;
      FUN_10003c048(auStack_120,&local_170);
      if (local_149 < '\0') {
        operator_delete((void *)CONCAT17(cStack_159,local_160));
      }
      if (local_168 != (void *)0x0) {
        operator_delete__(local_168);
      }
    }
    FUN_10001549c(&local_170,"friendInMatchInformation");
    std::string::append((char *)&local_170);
    local_f8 = param_2 + 0xb8;
    local_80 = 3;
    iVar2 = FUN_100126c88();
    local_94 = 0x44160000;
    if (iVar2 == 0) {
      local_94 = 0x44100000;
    }
    iVar2 = FUN_1001311dc();
    if (iVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_FRIENDS_SPECTATE",0);
      FUN_1000153b4(&local_d8,uVar3);
      local_108 = FUN_10027c43c;
      local_110 = param_1;
    }
    uVar3 = FUN_100126b4c();
    FUN_1001e35ec(param_1,uVar3,auStack_184,&local_188,auStack_18c);
    lVar5 = FUN_10003d5bc(param_2);
    fVar7 = *(float *)(lVar5 + 0xc);
    lVar5 = FUN_10003d5bc(param_1);
    fVar6 = *(float *)(param_1 + 0x12594);
    fVar7 = fVar7 / *(float *)(lVar5 + 0x14) + DAT_101d237d0 * 0.5 + (fVar6 - local_188);
    if (0.0 < fVar7) {
      uVar3 = FUN_10001f0d8();
      FUN_10063f0e8(0x3dcccccd);
      local_17c = -fVar7;
      local_180 = 0;
      FUN_10063f984(uVar3,&local_180);
      FUN_100642b14(param_1 + 0x38a0,uVar3);
      fVar6 = *(float *)(param_1 + 0x12594);
    }
    local_84 = 0;
    lVar5 = FUN_10003d5bc(param_1);
    local_88 = *(float *)(lVar5 + 0x14) * ((local_188 + -16.0) - fVar6);
    local_98 = 0x3e051eb8;
    if (param_3 == 0) {
      FUN_1001cefb8(param_1 + 0x12388,&local_170,&local_128);
    }
    else {
      FUN_1001cf098();
    }
    if (cStack_159 < '\0') {
      operator_delete(local_170);
    }
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
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
  }
  return;
}


```

---

## 5. Party System Field References

### `partyUUID`

**String at:** `0x10141c374`

#### `FUN_10050b6a8` @ `0x10050b6a8`

```c

/* WARNING: Removing unreachable block (ram,0x00010050b930) */
/* WARNING: Removing unreachable block (ram,0x00010050b814) */
/* WARNING: Removing unreachable block (ram,0x00010050b88c) */
/* WARNING: Removing unreachable block (ram,0x00010050ba80) */

void FUN_10050b6a8(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  char *local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_f8._0_4_ = 0x100005;
  local_108 = "code";
  uStack_100 = 4;
  puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_108);
  *(undefined4 *)(param_2 + 0x84) = *puVar4;
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    return;
  }
  local_f8 = CONCAT44(local_f8._4_4_,0x100005);
  local_108 = "returnValue";
  uStack_100 = 0xb;
  lVar5 = FUN_1000e87dc(param_1,&local_108);
  if (*(int *)(lVar5 + 0x10) != 3) {
    return;
  }
  local_108 = (char *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  FUN_1004e313c();
  local_88 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  lStack_a0 = 0;
  local_a8 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_70 = 0x100005;
  local_80 = "returnValue";
  uStack_78 = 0xb;
  plVar6 = (long *)FUN_1000e87dc(param_1,&local_80);
  local_70 = 0x100005;
  local_80 = "success";
  uStack_78 = 7;
  lVar5 = FUN_1000e87dc(plVar6,&local_80);
  bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
  *(bool *)(param_2 + 0x80) = bVar3;
  if (!bVar3) goto LAB_10050bbac;
  local_70 = 0x100005;
  local_80 = "partyQueueMode";
  uStack_78 = 0xe;
  plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
  plVar1 = (long *)*plVar7;
  if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
    plVar1 = plVar7;
  }
  FUN_1000ee4ec(&local_80,plVar1);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"partyQueueDifficulty");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050b868:
    pcVar11 = "";
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    lVar5 = FUN_1000e87dc(plVar6,&local_80);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050b868;
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    pcVar11 = (char *)FUN_1000e87dc(plVar6,&local_80);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  FUN_1000ee4ec(&local_80,pcVar11);
  std::string::operator=((string *)(param_2 + 0x58),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"members");
  if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) ||
     (lVar5 = FUN_1000e86c0(plVar6,"partyUUID"),
     *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5)) {
    *(undefined4 *)(param_2 + 0x84) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyUUID";
    uStack_78 = 9;
    plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
    plVar1 = (long *)*plVar7;
    if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
      plVar1 = plVar7;
    }
    FUN_1000ee4ec(&local_80,plVar1);
    std::string::operator=((string *)(param_2 + 0x28),(string *)&local_80);
    FUN_100156c78(param_2 + 0x70,0);
    local_70 = 0x100005;
    local_80 = "members";
    uStack_78 = 7;
    plVar6 = (long *)FUN_1000e87dc(plVar6,&local_80);
    uVar2 = *(uint *)(plVar6 + 1);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      do {
        plVar1 = (long *)(*plVar6 + lVar5);
        local_70 = 0x100005;
        local_80 = "handle";
        uStack_78 = 6;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1004e3148(&local_f0,plVar7);
        lVar9 = FUN_1000e86c0(plVar1,"isDev");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
          bVar3 = false;
        }
        else {
          local_70 = 0x100005;
          local_80 = "isDev";
          uStack_78 = 5;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
        }
        local_e0 = local_e0 & 0xfe | bVar3;
        local_70 = 0x100005;
        local_80 = "uuid";
        uStack_78 = 4;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1000ee4ec(&local_80,plVar7);
        std::string::operator=((string *)&local_108,(string *)&local_80);
        local_70 = 0x100005;
        local_80 = "isCaptain";
        uStack_78 = 9;
        piVar10 = (int *)FUN_1000e87dc(plVar1,&local_80);
        local_df = *piVar10 == 1;
        local_70 = 0x100005;
        local_80 = "status";
        uStack_78 = 6;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_dc = *puVar4;
        local_70 = 0x100005;
        local_80 = "team";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d8 = *puVar4;
        local_70 = 0x100005;
        local_80 = "slot";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d4 = *puVar4;
        lVar9 = FUN_1000e86c0(plVar1,"qbanLevel");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
LAB_10050bb5c:
          local_d0 = 0;
        }
        else {
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_10050bb5c;
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
          local_d0 = *puVar4;
        }
        FUN_1003208d4(param_2 + 0x70,&local_108);
        lVar5 = lVar5 + 0x18;
      } while ((ulong)uVar2 * 0x18 - lVar5 != 0);
    }
  }
LAB_10050bbac:
  if (local_88 < 0) {
    operator_delete(local_98);
  }
  if (lStack_a0 < 0) {
    operator_delete(pvStack_b0);
  }
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  return;
}


```

---

### `partyUuid`

**String at:** `0x10141c388`

#### `FUN_10050bc4c` @ `0x10050bc4c`

```c

void FUN_10050bc4c(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  char *local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long lStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68;
  char local_61;
  
  local_c0._0_4_ = 0x100005;
  local_d0 = "code";
  local_c8 = (void *)0x4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_d0);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_c0 = (void *)CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = "returnValue";
    local_c8 = (void *)0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_d0);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_1004e313c(&local_d0);
      local_80 = 0;
      local_78 = "returnValue";
      lStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = (void *)0x0;
      uStack_b8 = 0;
      local_c0 = (void *)0x0;
      local_a8 = (void *)0x0;
      lStack_b0 = 0;
      local_68 = 0x100005;
      local_70 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_78);
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        FUN_100169150(param_2 + 0x28,0);
        local_68 = 0x100005;
        local_78 = "pending";
        local_70 = 7;
        plVar4 = (long *)FUN_1000e87dc(plVar4,&local_78);
        if ((int)plVar4[1] != 0) {
          lVar3 = 0;
          uVar8 = 0;
          do {
            plVar1 = (long *)(*plVar4 + lVar3);
            lVar5 = FUN_1000e86c0(plVar1,"handle");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar5) {
              local_68 = 0x100005;
              local_78 = "handle";
              local_70 = 6;
              lVar5 = FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = "handle";
                local_70 = 6;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1004e3148(&local_d0,plVar7);
                local_68 = 0x100005;
                local_78 = "uuid";
                local_70 = 4;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_c0,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "partyUuid";
                local_70 = 9;
                plVar6 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar7 = (long *)*plVar6;
                if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
                  plVar7 = plVar6;
                }
                FUN_1000ee4ec(&local_78,plVar7);
                std::string::operator=((string *)&local_a8,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                local_68 = 0x100005;
                local_78 = "gameMode";
                local_70 = 8;
                plVar7 = (long *)FUN_1000e87dc(plVar1,&local_78);
                plVar1 = (long *)*plVar7;
                if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
                  plVar1 = plVar7;
                }
                FUN_1000ee4ec(&local_78,plVar1);
                std::string::operator=((string *)&local_90,(string *)&local_78);
                if (local_61 < '\0') {
                  operator_delete(local_78);
                }
                FUN_10051c880(param_2 + 0x28,&local_d0);
              }
            }
            uVar8 = uVar8 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar8 < *(uint *)(plVar4 + 1));
        }
      }
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      if (lStack_98 < 0) {
        operator_delete(local_a8);
      }
      if (lStack_b0 < 0) {
        operator_delete(local_c0);
      }
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
      }
    }
  }
  return;
}


```

---

### `partyType`

**String at:** `0x1013db1d3`

#### `FUN_10010da6c` @ `0x10010da6c`

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
      if ((*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) ||
         (lVar3 = FUN_1000e86c0(plVar4,"confirmed"),
         *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3)) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        pvStack_2a8 = (void *)0x0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (void *)0x0;
        local_290 = 0;
        local_288 = 0x100;
        local_2f0 = &local_2b0;
        uStack_2e0 = (void *)0x0;
        local_2e8 = 0;
        uStack_2d0 = 0;
        local_2d8 = (void *)0x0;
        local_2f8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0x200;
        local_2b8 = 0;
        local_358 = (char *)0x0;
        local_350 = (void *)0x0;
        local_348 = 0;
        pvStack_328 = (void *)0x0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = (void *)0x0;
        local_310 = 0;
        uStack_308 = 0x400;
        local_300 = 0;
        local_340 = operator_new(0x28);
        *local_340 = 0;
        local_340[1] = 0x10000;
        local_340[3] = 0;
        local_340[4] = 0;
        local_340[2] = 0;
        local_428 = 0x100005;
        local_438 = "pending";
        local_430 = 7;
        local_338 = local_340;
        uVar6 = FUN_1000e87dc(plVar4,&local_438);
        FUN_100111bb4(&local_358,uVar6,local_340);
        FUN_100110914(&local_358,&local_2f0);
        pvStack_388 = (void *)0x0;
        local_390 = 0;
        uStack_378 = 0;
        local_380 = (void *)0x0;
        local_370 = 0;
        uStack_368 = 0x100;
        puStack_3d0 = &local_390;
        local_3d8 = 0;
        pvStack_3c0 = (void *)0x0;
        local_3c8 = 0;
        uStack_3b0 = 0;
        local_3b8 = (void *)0x0;
        local_3a8 = 0;
        uStack_3a0 = 0x200;
        local_398 = 0;
        local_438 = (char *)0x0;
        local_430 = 0;
        local_428 = 0;
        pvStack_408 = (void *)0x0;
        local_410 = 0;
        uStack_3f8 = 0;
        local_400 = (void *)0x0;
        local_3f0 = 0;
        uStack_3e8 = 0x400;
        local_3e0 = 0;
        local_420 = operator_new(0x28);
        *local_420 = 0;
        local_420[1] = 0x10000;
        local_420[3] = 0;
        local_420[4] = 0;
        local_420[2] = 0;
        local_78 = 0x100005;
        local_88 = "confirmed";
        uStack_80 = 9;
        local_418 = local_420;
        uVar6 = FUN_1000e87dc(plVar4,&local_88);
        FUN_100111bb4(&local_438,uVar6,local_420);
        FUN_100110914(&local_438,&puStack_3d0);
        pcVar7 = (char *)FUN_100110e38(&local_2b0);
        sVar8 = _strlen(pcVar7);
        sVar1 = *(size_t *)(param_1 + 0x2c8);
        if (-1 < (char)*(byte *)(param_1 + 0x2d7)) {
          sVar1 = (ulong)*(byte *)(param_1 + 0x2d7);
        }
        if ((sVar8 == sVar1) &&
           (iVar2 = std::string::compare
                              ((ulong)(param_1 + 0x2c0),0,(char *)0xffffffffffffffff,(ulong)pcVar7),
           iVar2 == 0)) {
          pcVar7 = (char *)FUN_100110e38(&local_390);
          sVar8 = _strlen(pcVar7);
          sVar1 = *(size_t *)(param_1 + 0x2e0);
          if (-1 < (char)*(byte *)(param_1 + 0x2ef)) {
            sVar1 = (ulong)*(byte *)(param_1 + 0x2ef);
          }
          if ((sVar8 != sVar1) ||
             (iVar2 = std::string::compare
                                (param_1 + 0x2d8,0,(char *)0xffffffffffffffff,(ulong)pcVar7),
             iVar2 != 0)) goto LAB_10010de50;
          bVar23 = false;
        }
        else {
LAB_10010de50:
          uVar6 = FUN_100110e38(&local_2b0);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2c0),(string *)&local_88);
          uVar6 = FUN_100110e38(&local_390);
          FUN_10001549c(&local_88,uVar6);
          std::string::operator=((string *)(param_1 + 0x2d8),(string *)&local_88);
          bVar23 = true;
        }
        if (local_418 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_400);
        if (pvStack_408 != (void *)0x0) {
          operator_delete(pvStack_408);
        }
        _free(local_3b8);
        if (pvStack_3c0 != (void *)0x0) {
          operator_delete(pvStack_3c0);
        }
        _free(local_380);
        if (pvStack_388 != (void *)0x0) {
          operator_delete(pvStack_388);
        }
        if (local_338 != (undefined8 *)0x0) {
          pvVar9 = (void *)FUN_1000f7b54();
          operator_delete(pvVar9);
        }
        _free(local_320);
        if (pvStack_328 != (void *)0x0) {
          operator_delete(pvStack_328);
        }
        _free(local_2d8);
        if (uStack_2e0 != (void *)0x0) {
          operator_delete(uStack_2e0);
        }
        _free(local_2a0);
        if (pvStack_2a8 != (void *)0x0) {
          operator_delete(pvStack_2a8);
        }
        if (!bVar23) {
          FUN_100111a80(&local_278);
          goto LAB_10010f670;
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"pending");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
        FUN_1004f0834(0xfffffffa);
      }
      else {
        puVar22 = (uint *)(param_1 + 0x280);
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar3 != 0) {
          if (*puVar22 != 0) {
            lVar25 = (ulong)*puVar22 * 0x188;
            do {
              lVar3 = FUN_100111a80(lVar3);
              lVar3 = lVar3 + 0x188;
              lVar25 = lVar25 + -0x188;
            } while (lVar25 != 0);
          }
          *puVar22 = 0;
        }
        local_348 = 0x100005;
        local_358 = "pending";
        local_350 = (void *)0x7;
        plVar10 = (long *)FUN_1000e87dc(plVar4,&local_358);
        if ((int)plVar10[1] != 0) {
          lVar3 = 0;
          uVar26 = 0;
          pcVar7 = "";
          do {
            plVar13 = (long *)(*plVar10 + lVar3);
            lVar25 = FUN_1000e86c0(plVar13,"handle");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "handle";
              local_350 = (void *)0x6;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
              pcVar11 = pcVar7;
              if ((*(byte *)(lVar25 + 0x12) >> 4 & 1) != 0) {
                local_348 = 0x100005;
                local_358 = "handle";
                local_350 = (void *)0x6;
                pcVar11 = (char *)FUN_1000e87dc(plVar13,&local_358);
                if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
                  pcVar11 = *(char **)pcVar11;
                }
              }
            }
            FUN_1004e3148(auStack_258,pcVar11);
            lVar25 = FUN_1000e86c0(plVar13,"uuid");
            if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar25) {
              pcVar11 = "";
            }
            else {
              local_348 = 0x100005;
              local_358 = "uuid";
              local_350 = (void *)0x4;
              lVar25 = FUN_1000e87dc(plVar13,&local_358);
    
// ...truncated...
```

---

### `partySize`

**String at:** `0x1013d9cf8`

#### `FUN_100102bf8` @ `0x100102bf8`

```c

void FUN_100102bf8(int param_1,undefined8 param_2)

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
  pcVar1 = "ranked";
  if (param_1 == 0) {
    pcVar1 = "casual";
  }
  local_40 = "mode";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,pcVar1);
  local_40 = "partySize";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar2,param_2);
  FUN_10052b20c("Game_EnterPublicQueue",&puStack_38);
  FUN_10052b1e0("Game_EnterPublicQueue",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}


```

---

### `partyQueueMode`

**String at:** `0x10141c348`

#### `FUN_10050b6a8` @ `0x10050b6a8`

```c

/* WARNING: Removing unreachable block (ram,0x00010050b930) */
/* WARNING: Removing unreachable block (ram,0x00010050b814) */
/* WARNING: Removing unreachable block (ram,0x00010050b88c) */
/* WARNING: Removing unreachable block (ram,0x00010050ba80) */

void FUN_10050b6a8(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  char *local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_f8._0_4_ = 0x100005;
  local_108 = "code";
  uStack_100 = 4;
  puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_108);
  *(undefined4 *)(param_2 + 0x84) = *puVar4;
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    return;
  }
  local_f8 = CONCAT44(local_f8._4_4_,0x100005);
  local_108 = "returnValue";
  uStack_100 = 0xb;
  lVar5 = FUN_1000e87dc(param_1,&local_108);
  if (*(int *)(lVar5 + 0x10) != 3) {
    return;
  }
  local_108 = (char *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  FUN_1004e313c();
  local_88 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  lStack_a0 = 0;
  local_a8 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_70 = 0x100005;
  local_80 = "returnValue";
  uStack_78 = 0xb;
  plVar6 = (long *)FUN_1000e87dc(param_1,&local_80);
  local_70 = 0x100005;
  local_80 = "success";
  uStack_78 = 7;
  lVar5 = FUN_1000e87dc(plVar6,&local_80);
  bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
  *(bool *)(param_2 + 0x80) = bVar3;
  if (!bVar3) goto LAB_10050bbac;
  local_70 = 0x100005;
  local_80 = "partyQueueMode";
  uStack_78 = 0xe;
  plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
  plVar1 = (long *)*plVar7;
  if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
    plVar1 = plVar7;
  }
  FUN_1000ee4ec(&local_80,plVar1);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"partyQueueDifficulty");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050b868:
    pcVar11 = "";
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    lVar5 = FUN_1000e87dc(plVar6,&local_80);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050b868;
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    pcVar11 = (char *)FUN_1000e87dc(plVar6,&local_80);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  FUN_1000ee4ec(&local_80,pcVar11);
  std::string::operator=((string *)(param_2 + 0x58),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"members");
  if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) ||
     (lVar5 = FUN_1000e86c0(plVar6,"partyUUID"),
     *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5)) {
    *(undefined4 *)(param_2 + 0x84) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyUUID";
    uStack_78 = 9;
    plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
    plVar1 = (long *)*plVar7;
    if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
      plVar1 = plVar7;
    }
    FUN_1000ee4ec(&local_80,plVar1);
    std::string::operator=((string *)(param_2 + 0x28),(string *)&local_80);
    FUN_100156c78(param_2 + 0x70,0);
    local_70 = 0x100005;
    local_80 = "members";
    uStack_78 = 7;
    plVar6 = (long *)FUN_1000e87dc(plVar6,&local_80);
    uVar2 = *(uint *)(plVar6 + 1);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      do {
        plVar1 = (long *)(*plVar6 + lVar5);
        local_70 = 0x100005;
        local_80 = "handle";
        uStack_78 = 6;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1004e3148(&local_f0,plVar7);
        lVar9 = FUN_1000e86c0(plVar1,"isDev");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
          bVar3 = false;
        }
        else {
          local_70 = 0x100005;
          local_80 = "isDev";
          uStack_78 = 5;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
        }
        local_e0 = local_e0 & 0xfe | bVar3;
        local_70 = 0x100005;
        local_80 = "uuid";
        uStack_78 = 4;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1000ee4ec(&local_80,plVar7);
        std::string::operator=((string *)&local_108,(string *)&local_80);
        local_70 = 0x100005;
        local_80 = "isCaptain";
        uStack_78 = 9;
        piVar10 = (int *)FUN_1000e87dc(plVar1,&local_80);
        local_df = *piVar10 == 1;
        local_70 = 0x100005;
        local_80 = "status";
        uStack_78 = 6;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_dc = *puVar4;
        local_70 = 0x100005;
        local_80 = "team";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d8 = *puVar4;
        local_70 = 0x100005;
        local_80 = "slot";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d4 = *puVar4;
        lVar9 = FUN_1000e86c0(plVar1,"qbanLevel");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
LAB_10050bb5c:
          local_d0 = 0;
        }
        else {
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_10050bb5c;
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
          local_d0 = *puVar4;
        }
        FUN_1003208d4(param_2 + 0x70,&local_108);
        lVar5 = lVar5 + 0x18;
      } while ((ulong)uVar2 * 0x18 - lVar5 != 0);
    }
  }
LAB_10050bbac:
  if (local_88 < 0) {
    operator_delete(local_98);
  }
  if (lStack_a0 < 0) {
    operator_delete(pvStack_b0);
  }
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  return;
}


```

---

### `partyQueueDifficulty`

**String at:** `0x10141c357`

#### `FUN_10050b6a8` @ `0x10050b6a8`

```c

/* WARNING: Removing unreachable block (ram,0x00010050b930) */
/* WARNING: Removing unreachable block (ram,0x00010050b814) */
/* WARNING: Removing unreachable block (ram,0x00010050b88c) */
/* WARNING: Removing unreachable block (ram,0x00010050ba80) */

void FUN_10050b6a8(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  char *local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_f8._0_4_ = 0x100005;
  local_108 = "code";
  uStack_100 = 4;
  puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_108);
  *(undefined4 *)(param_2 + 0x84) = *puVar4;
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    return;
  }
  local_f8 = CONCAT44(local_f8._4_4_,0x100005);
  local_108 = "returnValue";
  uStack_100 = 0xb;
  lVar5 = FUN_1000e87dc(param_1,&local_108);
  if (*(int *)(lVar5 + 0x10) != 3) {
    return;
  }
  local_108 = (char *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  FUN_1004e313c();
  local_88 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  lStack_a0 = 0;
  local_a8 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_70 = 0x100005;
  local_80 = "returnValue";
  uStack_78 = 0xb;
  plVar6 = (long *)FUN_1000e87dc(param_1,&local_80);
  local_70 = 0x100005;
  local_80 = "success";
  uStack_78 = 7;
  lVar5 = FUN_1000e87dc(plVar6,&local_80);
  bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
  *(bool *)(param_2 + 0x80) = bVar3;
  if (!bVar3) goto LAB_10050bbac;
  local_70 = 0x100005;
  local_80 = "partyQueueMode";
  uStack_78 = 0xe;
  plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
  plVar1 = (long *)*plVar7;
  if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
    plVar1 = plVar7;
  }
  FUN_1000ee4ec(&local_80,plVar1);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"partyQueueDifficulty");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050b868:
    pcVar11 = "";
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    lVar5 = FUN_1000e87dc(plVar6,&local_80);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10050b868;
    local_70 = 0x100005;
    local_80 = "partyQueueDifficulty";
    uStack_78 = 0x14;
    pcVar11 = (char *)FUN_1000e87dc(plVar6,&local_80);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  FUN_1000ee4ec(&local_80,pcVar11);
  std::string::operator=((string *)(param_2 + 0x58),(string *)&local_80);
  lVar5 = FUN_1000e86c0(plVar6,"members");
  if ((*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) ||
     (lVar5 = FUN_1000e86c0(plVar6,"partyUUID"),
     *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5)) {
    *(undefined4 *)(param_2 + 0x84) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
  }
  else {
    local_70 = 0x100005;
    local_80 = "partyUUID";
    uStack_78 = 9;
    plVar7 = (long *)FUN_1000e87dc(plVar6,&local_80);
    plVar1 = (long *)*plVar7;
    if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
      plVar1 = plVar7;
    }
    FUN_1000ee4ec(&local_80,plVar1);
    std::string::operator=((string *)(param_2 + 0x28),(string *)&local_80);
    FUN_100156c78(param_2 + 0x70,0);
    local_70 = 0x100005;
    local_80 = "members";
    uStack_78 = 7;
    plVar6 = (long *)FUN_1000e87dc(plVar6,&local_80);
    uVar2 = *(uint *)(plVar6 + 1);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      do {
        plVar1 = (long *)(*plVar6 + lVar5);
        local_70 = 0x100005;
        local_80 = "handle";
        uStack_78 = 6;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1004e3148(&local_f0,plVar7);
        lVar9 = FUN_1000e86c0(plVar1,"isDev");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
          bVar3 = false;
        }
        else {
          local_70 = 0x100005;
          local_80 = "isDev";
          uStack_78 = 5;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          bVar3 = *(int *)(lVar9 + 0x10) == 0x102;
        }
        local_e0 = local_e0 & 0xfe | bVar3;
        local_70 = 0x100005;
        local_80 = "uuid";
        uStack_78 = 4;
        plVar8 = (long *)FUN_1000e87dc(plVar1,&local_80);
        plVar7 = (long *)*plVar8;
        if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
          plVar7 = plVar8;
        }
        FUN_1000ee4ec(&local_80,plVar7);
        std::string::operator=((string *)&local_108,(string *)&local_80);
        local_70 = 0x100005;
        local_80 = "isCaptain";
        uStack_78 = 9;
        piVar10 = (int *)FUN_1000e87dc(plVar1,&local_80);
        local_df = *piVar10 == 1;
        local_70 = 0x100005;
        local_80 = "status";
        uStack_78 = 6;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_dc = *puVar4;
        local_70 = 0x100005;
        local_80 = "team";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d8 = *puVar4;
        local_70 = 0x100005;
        local_80 = "slot";
        uStack_78 = 4;
        puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
        local_d4 = *puVar4;
        lVar9 = FUN_1000e86c0(plVar1,"qbanLevel");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar9) {
LAB_10050bb5c:
          local_d0 = 0;
        }
        else {
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          lVar9 = FUN_1000e87dc(plVar1,&local_80);
          if ((*(byte *)(lVar9 + 0x11) >> 2 & 1) == 0) goto LAB_10050bb5c;
          local_70 = 0x100005;
          local_80 = "qbanLevel";
          uStack_78 = 9;
          puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
          local_d0 = *puVar4;
        }
        FUN_1003208d4(param_2 + 0x70,&local_108);
        lVar5 = lVar5 + 0x18;
      } while ((ulong)uVar2 * 0x18 - lVar5 != 0);
    }
  }
LAB_10050bbac:
  if (local_88 < 0) {
    operator_delete(local_98);
  }
  if (lStack_a0 < 0) {
    operator_delete(pvStack_b0);
  }
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  return;
}


```

---

### `partyMembers`

**String at:** `0x10141b531`

#### `FUN_1004f8dcc` @ `0x1004f8dcc`

```c

/* WARNING: Removing unreachable block (ram,0x0001004f8e9c) */
/* WARNING: Removing unreachable block (ram,0x0001004f8ee4) */

void FUN_1004f8dcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  char *local_240;
  undefined8 local_238;
  void *pvStack_230;
  void *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  char local_200 [8];
  void *pvStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  void *local_1c8 [2];
  char local_1b1;
  void *local_1b0 [2];
  char local_199;
  void *local_198 [2];
  char local_181;
  void *local_180 [2];
  char local_169;
  void *local_168 [2];
  char local_151;
  void *local_150 [2];
  char local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  void *local_120;
  undefined8 uStack_118;
  long local_110;
  string local_108 [24];
  string local_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_b0 = 0;
  local_90 = 0;
  uStack_88 = 0x400;
  local_80 = 0;
  local_78 = 0;
  puVar6 = operator_new(0x28);
  *puVar6 = 0;
  puVar6[1] = 0x10000;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 3;
  uVar13 = *(ulong *)(param_3 + 0x60);
  if (-1 < (char)*(byte *)(param_3 + 0x6f)) {
    uVar13 = (ulong)*(byte *)(param_3 + 0x6f);
  }
  local_c0 = puVar6;
  local_b8 = puVar6;
  if (uVar13 != 0) {
    std::string::string(local_f0,(string *)(param_3 + 0x58));
    pvStack_230._0_4_ = 0x100005;
    local_240 = "lobby";
    local_238 = 5;
    FUN_10049aa58(&local_d8,&local_240,local_f0,puVar6);
    std::string::string(local_108,(string *)(param_3 + 0x38));
    pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
    local_240 = "quintCode";
    local_238 = 9;
    FUN_10049aa58(&local_d8,&local_240,local_108,puVar6);
    local_200[0] = '\0';
    local_200[1] = '\0';
    local_200[2] = '\0';
    local_200[3] = '\0';
    local_200[4] = '\0';
    local_200[5] = '\0';
    local_200[6] = '\0';
    local_200[7] = '\0';
    pvStack_1f8 = (void *)0x0;
    local_1f0 = (void *)CONCAT44(local_1f0._4_4_,4);
    local_120 = (void *)0x0;
    uStack_118 = 0;
    local_110 = 0;
    uVar8 = *(uint *)(param_3 + 0x28);
    if (uVar8 != 0) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        lVar1 = *(long *)(param_3 + 0x30) + lVar12;
        if (*(int *)(lVar1 + 0x2c) == 1) {
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 3;
          FUN_1004e357c(lVar1 + 0x18,&local_120);
          std::string::string((string *)local_150,(string *)(*(long *)(param_3 + 0x30) + lVar12));
          pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
          local_240 = "playerId";
          local_238 = 8;
          FUN_10049aa58(&local_138,&local_240,local_150,puVar6);
          if (local_139 < '\0') {
            operator_delete(local_150[0]);
          }
          std::string::string((string *)local_168,(string *)&local_120);
          pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
          local_240 = "handle";
          local_238 = 6;
          FUN_10049aa58(&local_138,&local_240,local_168,puVar6);
          if (local_151 < '\0') {
            operator_delete(local_168[0]);
          }
          FUN_1004f2a80(&local_138,"elo",3,
                        *(undefined4 *)(*(long *)(param_3 + 0x30) + lVar12 + 0x3c),puVar6);
          std::string::string((string *)local_180,
                              (string *)(*(long *)(param_3 + 0x30) + lVar12 + 0x70));
          pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
          local_240 = "equippedEmoji";
          local_238 = 0xd;
          FUN_10049aa58(&local_138,&local_240,local_180,puVar6);
          if (local_169 < '\0') {
            operator_delete(local_180[0]);
          }
          std::string::string((string *)local_198,
                              (string *)(*(long *)(param_3 + 0x30) + lVar12 + 0x58));
          pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
          local_240 = "equippedHat";
          local_238 = 0xb;
          FUN_10049aa58(&local_138,&local_240,local_198,puVar6);
          if (local_181 < '\0') {
            operator_delete(local_198[0]);
          }
          std::string::string((string *)local_1b0,
                              (string *)(*(long *)(param_3 + 0x30) + lVar12 + 0x40));
          pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
          local_240 = "equippedPingPack";
          local_238 = 0x10;
          FUN_10049aa58(&local_138,&local_240,local_1b0,puVar6);
          if (local_199 < '\0') {
            operator_delete(local_1b0[0]);
          }
          FUN_10034f3d4(local_200,&local_138,puVar6);
          uVar8 = *(uint *)(param_3 + 0x28);
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x88;
      } while (uVar13 < uVar8);
    }
    pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
    local_240 = "partyMembers";
    local_238 = 0xc;
    FUN_10032b704(&local_d8,&local_240,local_200,puVar6);
    if (local_110 < 0) {
      operator_delete(local_120);
    }
  }
  uVar13 = *(ulong *)(param_3 + 0x78);
  if (-1 < (char)*(byte *)(param_3 + 0x87)) {
    uVar13 = (ulong)*(byte *)(param_3 + 0x87);
  }
  if (uVar13 != 0) {
    std::string::string((string *)local_1c8,(string *)(param_3 + 0x70));
    pvStack_230 = (void *)CONCAT44(pvStack_230._4_4_,0x100005);
    local_240 = "difficulty";
    local_238 = 10;
    FUN_10049aa58(&local_d8,&local_240,local_1c8,puVar6);
    if (local_1b1 < '\0') {
      operator_delete(local_1c8[0]);
    }
  }
  bVar4 = *(byte *)(param_3 + 0xb7);
  uVar13 = (ulong)bVar4;
  sVar2 = *(size_t *)(param_3 + 0xa8);
  if (-1 < (char)bVar4) {
    sVar2 = uVar13;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar11 = *(void **)(param_3 + 0xa0);
    puVar6 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar6 = (undefined8 *)(param_3 + 0xa0);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar2 == 0) || (iVar5 = _memcmp(puVar6,pbVar10,sVar2), iVar5 == 0)) goto LAB_1004f923c;
    }
    else {
      if (sVar2 == 0) goto LAB_1004f923c;
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(param_3 + 0xa1);
        do {
          uVar13 = uVar13 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar13 == 0) goto LAB_1004f923c;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  FUN_1004f84b4(&local_d8,param_3 + 0x88,0x10);
LAB_1004f923c:
  pvStack_1f8 = (void *)0x0;
  local_200[0] = '\0';
  local_200[1] = '\0';
  local_200[2] = '\0';
  local_200[3] = '\0';
  local_200[4] = '\0';
  local_200[5] = '\0';
  local_200[6] = '\0';
  local_200[7] = '\0';
  uStack_1e8 = 0;
  local_1f0 = (void *)0x0;
  local_1e0 = 0;
  uStack_1d8 = 0x100;
  local_240 = local_200;
  pvStack_230 = (void *)0x0;
  local_238 = 0;
  uStack_220 = 0;
  local_228 = (void *)0x0;
  local_218 = 0;
  uStack_210 = 0x200;
  local_208 = 0;
  FUN_100110914(&local_d8,&local_240);
  uVar7 = FUN_100110e38(local_200);
  FUN_1000ee4ec(param_1,uVar7);
  _free(local_228);
  if (pvStack_230 != (void *)0x0) {
    operator_delete(pvStack_230);
  }
  _free(local_1f0);
  if (pvStack_1f8 != (void *)0x0) {
    operator_delete(pvStack_1f8);
  }
  if (local_b8 != (undefined8 *)0x0) {
    pvVar11 = (void *)FUN_1000f7b54();
    operator_delete(pvVar11);
  }
  _free(local_a0);
  if (pvStack_a8 != (void *)0x0) {
    operator_delete(pvStack_a8);
  }
  return;
}


```

---

### `partyInvitation`

**String at:** `0x1013ddd6f`

#### `FUN_100164a48` @ `0x100164a48`

```c

long FUN_100164a48(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  
  bVar5 = *(byte *)(param_2 + 0x17);
  uVar3 = (ulong)bVar5;
  uVar4 = *(ulong *)(param_2 + 8);
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 5) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013db1cd);
    if (iVar2 == 0) {
      return 5;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0xf) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd6f);
    if (iVar2 == 0) {
      return 6;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 7) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd7f);
    if (iVar2 == 0) {
      return 7;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0xd) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd87);
    if (iVar2 == 0) {
      return 8;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)bVar5) {
    uVar4 = uVar3;
  }
  if (uVar4 == 10) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd95);
    lVar6 = (ulong)(iVar2 == 0) << 2;
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}


```

---

### `quintPartyStateUpdate`

**String at:** `0x10141b065`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `quintPartyJoinRequest`

**String at:** `0x10141b093`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `quintPartyPlayerLeft`

**String at:** `0x10141b0e2`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `quintPartyMemberKick`

**String at:** `0x10141b0f7`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `states`

**String at:** `0x10141b118`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `counts`

**String at:** `0x10141b11f`

#### `FUN_1004edef0` @ `0x1004edef0`

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
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

## 6. Trophy & Match Data Field References

### `trophyCase`

**String at:** `0x10141c1c0`

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
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x7c) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierProgress");
      dVar18 = 0.0;
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierProgress";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        dVar17 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierProgress";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x80) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierBronzeLine");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierBronzeLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierBronzeLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar18 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar18,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x84) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierSilverLine");
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierSilverLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierSilverLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x88) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierGoldLine");
      fVar16 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierGoldLine";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        fVar16 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierGoldLine";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
          fVar16 = (float)dVar17;
        }
      }
      fVar16 = (float)NEON_fminnm(fVar16,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x8c) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"bForDisplay");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050f074:
        bVar3 = false;
      }
      else {
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_10050f074;
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      }
      *(bool *)(param_2 + 0x90) = bVar3;
      FUN_10015aacc(lVar4,0);
      local_118 = 0x100005;
      local_128 = "members";
      uStack_120 = 7;
      plVar7 = (long *)FUN_1000e87dc(plVar6,&local_128);
      uVar2 = *(uint *)(plVar7 + 1);
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          plVar1 = (long *)(*plVar7 + lVar5);
        
// ...truncated...
```

---

### `trophy_type`

**String at:** `0x10141c1da`

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
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x7c) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierProgress");
      dVar18 = 0.0;
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierProgress";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        dVar17 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierProgress";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x80) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierBronzeLine");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierBronzeLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierBronzeLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar18 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar18,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x84) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierSilverLine");
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierSilverLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierSilverLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x88) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierGoldLine");
      fVar16 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierGoldLine";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        fVar16 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierGoldLine";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
          fVar16 = (float)dVar17;
        }
      }
      fVar16 = (float)NEON_fminnm(fVar16,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x8c) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"bForDisplay");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050f074:
        bVar3 = false;
      }
      else {
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_10050f074;
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      }
      *(bool *)(param_2 + 0x90) = bVar3;
      FUN_10015aacc(lVar4,0);
      local_118 = 0x100005;
      local_128 = "members";
      uStack_120 = 7;
      plVar7 = (long *)FUN_1000e87dc(plVar6,&local_128);
      uVar2 = *(uint *)(plVar7 + 1);
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          plVar1 = (long *)(*plVar7 + lVar5);
        
// ...truncated...
```

---

### `trophy_name`

**String at:** `0x10141c1f1`

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
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507a94;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_blitz";
    uStack_248 = 10;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 300) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_casual");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507b08:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_casual";
    uStack_248 = 0xb;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507b08;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_casual";
    uStack_248 = 0xb;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x130) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_ranked");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507b7c:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_ranked";
    uStack_248 = 0xb;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507b7c;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_ranked";
    uStack_248 = 0xb;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x134) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"winStreak");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507bf0:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winStreak";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507bf0;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winStreak";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x13c) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"winsToday");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507c64:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winsToday";
    uStack_248 = 9;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507c64;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "winsToday";
    uStack_248 = 9;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x138) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"wins_season");
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar10) {
LAB_100507cd8:
    uVar23 = 0;
  }
  else {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_season";
    uStack_248 = 0xb;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_100507cd8;
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "wins_season";
    uStack_248 = 0xb;
    puVar18 = (undefined4 *)FUN_1000e87dc(plVar11,&local_250);
    uVar23 = *puVar18;
  }
  *(undefined4 *)(param_2 + 0x140) = uVar23;
  lVar10 = FUN_1000e86c0(plVar11,"sinisterSevenProgress");
  dVar26 = 0.0;
  if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar10) {
    local_240 = CONCAT44(local_240._4_4_,0x100005);
    local_250 = "sinisterSevenProgress";
    uStack_248 = 0x15;
    lVar10 = FUN_1000e87dc(plVar11,&local_250);
    if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
      local_240 = CONCAT44(local_240._4_4_,0x100005);
      local_250 = "sinisterSevenProgress";
      uStack_248 = 0x15;
      FUN_1000e87dc(plVar11,&local_250);
      dVar26 = (double)FUN_1000fceec();
    }

// ...truncated...
```

---

### `season`

**String at:** `0x1013f4047`

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
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x7c) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierProgress");
      dVar18 = 0.0;
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierProgress";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        dVar17 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierProgress";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x80) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierBronzeLine");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierBronzeLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierBronzeLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar18 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar18,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x84) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierSilverLine");
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierSilverLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierSilverLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x88) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierGoldLine");
      fVar16 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierGoldLine";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        fVar16 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierGoldLine";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
          fVar16 = (float)dVar17;
        }
      }
      fVar16 = (float)NEON_fminnm(fVar16,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x8c) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"bForDisplay");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050f074:
        bVar3 = false;
      }
      else {
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_10050f074;
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      }
      *(bool *)(param_2 + 0x90) = bVar3;
      FUN_10015aacc(lVar4,0);
      local_118 = 0x100005;
      local_128 = "members";
      uStack_120 = 7;
      plVar7 = (long *)FUN_1000e87dc(plVar6,&local_128);
      uVar2 = *(uint *)(plVar7 + 1);
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          plVar1 = (long *)(*plVar7 + lVar5);
        
// ...truncated...
```

---

### `value`

**String at:** `0x10142f804`

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
        puVar12 = (undefined4 *)FUN_1000e87dc(plVar6,&local_128);
        uVar13 = *puVar12;
      }
      *(undefined4 *)(param_2 + 0x7c) = uVar13;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierProgress");
      dVar18 = 0.0;
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierProgress";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        dVar17 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierProgress";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x80) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierBronzeLine");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierBronzeLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierBronzeLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar18 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar18,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x84) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierSilverLine");
      dVar17 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierSilverLine";
        uStack_120 = 0x13;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierSilverLine";
          uStack_120 = 0x13;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
        }
      }
      fVar16 = (float)NEON_fminnm((float)dVar17,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x88) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"skillTierGoldLine");
      fVar16 = 0.0;
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_118 = 0x100005;
        local_128 = "skillTierGoldLine";
        uStack_120 = 0x11;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        fVar16 = 0.0;
        if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
          local_118 = 0x100005;
          local_128 = "skillTierGoldLine";
          uStack_120 = 0x11;
          FUN_1000e87dc(plVar6,&local_128);
          dVar17 = (double)FUN_1000fceec();
          fVar16 = (float)dVar17;
        }
      }
      fVar16 = (float)NEON_fminnm(fVar16,0x3f800000);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_2 + 0x8c) = fVar16;
      lVar5 = FUN_1000e86c0(plVar6,"bForDisplay");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
LAB_10050f074:
        bVar3 = false;
      }
      else {
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_10050f074;
        local_118 = 0x100005;
        local_128 = "bForDisplay";
        uStack_120 = 0xb;
        lVar5 = FUN_1000e87dc(plVar6,&local_128);
        bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      }
      *(bool *)(param_2 + 0x90) = bVar3;
      FUN_10015aacc(lVar4,0);
      local_118 = 0x100005;
      local_128 = "members";
      uStack_120 = 7;
      plVar7 = (long *)FUN_1000e87dc(plVar6,&local_128);
      uVar2 = *(uint *)(plVar7 + 1);
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          plVar1 = (long *)(*plVar7 + lVar5);
        
// ...truncated...
```

---

### `seasonId`

**String at:** `0x1013d70dd`

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
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "battlePassRankUpChestHashedSku";
              pcStack_150 = (char *)0x1e;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_1b8,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"rank");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc238:
            uVar14 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "rank";
            pcStack_150 = (char *)0x4;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc238;
            local_148 = 0x100005;
            local_158 = "rank";
            pcStack_150 = (char *)0x4;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar14 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"previousMaxTokens");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc2a0:
            uVar15 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "previousMaxTokens";
            pcStack_150 = (char *)0x11;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc2a0;
            local_148 = 0x100005;
            local_158 = "previousMaxTokens";
            pcStack_150 = (char *)0x11;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar15 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"maxTokens");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc304:
            uVar16 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "maxTokens";
            pcStack_150 = (char *)0x9;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc304;
            local_148 = 0x100005;
            local_158 = "maxTokens";
            pcStack_150 = (char *)0x9;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar16 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"maxPips");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc368:
            uVar12 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "maxPips";
            pcStack_150 = (char *)0x7;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc368;
            local_148 = 0x100005;
            local_158 = "maxPips";
            pcStack_150 = (char *)0x7;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar12 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"numClaimableRankUpChests");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar3) {
            local_148 = 0x100005;
            local_158 = "numClaimableRankUpChests";
            pcStack_150 = (char *)0x18;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "numClaimableRankUpChests";
              pcStack_150 = (char *)0x18;
              FUN_1000e87dc(plVar11,&local_158);
            }
          }
          FUN_1003125e0(&local_158,local_170,local_188,local_1a0,local_1b8,uVar14,uVar15,uVar16,
                        uVar12);
          FUN_1000fcd80(param_1 + 0x98,&local_158);
          if (local_f9 < '\0') {
            operator_delete(local_110);
          }
          if (local_111 < '\0') {
    
// ...truncated...
```

---

### `seasonGuildTrophy`

**String at:** `0x1013dc5e4`

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

---

### `seasonTeamTrophy`

**String at:** `0x1013dc5f6`

#### `FUN_100265224` @ `0x100265224`

```c

void FUN_100265224(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
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
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  FUN_100262274(param_1 + 0x3e10);
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x3338) == 0) {
      uVar2 = FUN_1001c94f4(param_1 + 0x3340);
      if (*(long *)(param_1 + (uVar2 & 0xffffffff) * 8 + 0x3328) != 0) {
        uVar2 = FUN_1001c94f4(param_1 + 0x3340);
        *(undefined8 *)(param_1 + 0x3338) =
             *(undefined8 *)(param_1 + (uVar2 & 0xffffffff) * 8 + 0x3328);
      }
    }
    FUN_100265438(param_1);
    iVar1 = FUN_100130330();
    if ((iVar1 != 0) && (uVar2 = FUN_10013033c("seasonTeamTrophy"), (uVar2 & 1) == 0)) {
      thunk_FUN_1001cd434(&local_e0);
      uVar3 = FUN_1004e0150("MAIN_SEASON_TROPHY_USERTEAM_TOOLTIP",0);
      thunk_FUN_1004e439c(auStack_f0,uVar3);
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
      local_b0 = FUN_1001c94fc(param_1 + 0x3340,1);
      local_38 = 1;
      local_50 = 0x3f000000;
      iVar1 = FUN_100126c88();
      local_4c = 0x442f0000;
      if (iVar1 == 0) {
        local_4c = 0x44160000;
      }
      FUN_10001549c(&local_128,"seasonTeamTrophy");
      std::string::operator=((string *)local_80,(string *)&local_128);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      uVar3 = FUN_10002f320();
      FUN_10001549c(&local_128,"seasonTrophy");
      FUN_100030e74(uVar3,&local_128,&local_e0);
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

---

### `seasonTrophy`

**String at:** `0x1013e76ad`

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

---

### `matchId`

**String at:** `0x1013da791`

#### `FUN_10050b0dc` @ `0x10050b0dc`

```c

/* WARNING: Removing unreachable block (ram,0x00010050b32c) */

void FUN_10050b0dc(long *param_1,long param_2)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  char *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  void *local_c0;
  float local_b8;
  undefined4 local_b4;
  char *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  local_a0._0_4_ = 0x100005;
  local_b0 = "code";
  uStack_a8 = 4;
  puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_b0);
  *(undefined4 *)(param_2 + 0x60) = *puVar4;
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar5) {
    local_a0._0_4_ = 0x100005;
    local_b0 = "returnValue";
    uStack_a8 = 0xb;
    lVar5 = FUN_1000e87dc(param_1,&local_b0);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "returnValue";
      uStack_a8 = 0xb;
      uVar6 = FUN_1000e87dc(param_1,&local_b0);
      local_b0 = (char *)0x0;
      uStack_a8 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,0x100005);
      local_e0 = "isValid";
      local_d8 = 7;
      lVar5 = FUN_1000e87dc(uVar6,&local_e0);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
      *(bool *)(param_2 + 0x58) = bVar3;
      if (bVar3) {
        local_d0 = CONCAT44(local_d0._4_4_,0x100005);
        local_d8 = 7;
        local_e0 = "matchId";
        plVar7 = (long *)FUN_1000e87dc(uVar6,&local_e0);
        plVar8 = (long *)*plVar7;
        if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
          plVar8 = plVar7;
        }
        FUN_1000ee4ec(&local_e0,plVar8);
        std::string::operator=((string *)(param_2 + 0x28),(string *)&local_e0);
        if (local_d0 < 0) {
          operator_delete(local_e0);
        }
        local_d0 = CONCAT44(local_d0._4_4_,0x100005);
        local_e0 = "ttl";
        local_d8 = 3;
        FUN_1000e87dc(uVar6,&local_e0);
        dVar2 = (double)FUN_1000fceec();
        *(float *)(param_2 + 0x40) = (float)dVar2;
        FUN_100200a2c(param_2 + 0x48,0);
        local_e0 = (char *)0x0;
        local_d8 = 0;
        local_d0 = 0;
        FUN_1004e313c();
        local_68 = 0x100005;
        local_78 = "responses";
        uStack_70 = 9;
        plVar8 = (long *)FUN_1000e87dc(uVar6,&local_78);
        if ((int)plVar8[1] != 0) {
          lVar5 = 0;
          uVar10 = 0;
          do {
            lVar1 = *plVar8 + lVar5;
            local_68 = 0x100005;
            local_78 = "playerUUID";
            uStack_70 = 10;
            plVar9 = (long *)FUN_1000e87dc(lVar1,&local_78);
            plVar7 = (long *)*plVar9;
            if ((*(uint *)(plVar9 + 2) & 0x400000) != 0) {
              plVar7 = plVar9;
            }
            FUN_1000ee4ec(&local_78,plVar7);
            std::string::operator=((string *)&local_e0,(string *)&local_78);
            local_68 = 0x100005;
            local_78 = "response";
            uStack_70 = 8;
            puVar4 = (undefined4 *)FUN_1000e87dc(lVar1,&local_78);
            local_b4 = *puVar4;
            local_68 = 0x100005;
            local_78 = "acceptDelay";
            uStack_70 = 0xb;
            FUN_1000e87dc(lVar1,&local_78);
            dVar2 = (double)FUN_1000fceec();
            local_b8 = (float)dVar2;
            FUN_10051c7e4(param_2 + 0x48,&local_e0);
            uVar10 = uVar10 + 1;
            lVar5 = lVar5 + 0x18;
          } while (uVar10 < *(uint *)(plVar8 + 1));
        }
        if (local_c0 != (void *)0x0) {
          operator_delete__(local_c0);
          local_c8 = 0;
        }
        if (local_d0 < 0) {
          operator_delete(local_e0);
        }
      }
      FUN_100200a2c(&local_90,1);
      if (-1 < local_a0) {
        return;
      }
      operator_delete(local_b0);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x60) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}


```

---

### `matchResult`

**Not found in binary**

---

### `eloEarned`

**String at:** `0x10141c8a4`

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

---

### `eloEarnedDelta`

**String at:** `0x10141c8cb`

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

---

### `heroId`

**Not found in binary**

---

### `heroName`

**Not found in binary**

---

### `heroSkin`

**Not found in binary**

---

### `kills`

**String at:** `0x1013cff61`

---

### `deaths`

**String at:** `0x1013d0c3c`

---

### `assists`

**String at:** `0x1013d0c4d`

---

### `minionKills`

**Not found in binary**

---

### `goldEarned`

**Not found in binary**

---

## 7. The `update` Response Handler

The update method is polled every ~10-100s and carries state transitions.

### `update`

**String at:** `0x10141bdf5`

#### `FUN_100503228` @ `0x100503228`

```c

undefined8 FUN_100503228(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
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
  FUN_1000ee4ec(local_48,"update");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_60,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x14,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
    return uVar2;
  }
  return uVar2;
}


```

### State value: `menus`

String at: `0x10141c9eb` 

- Referenced by `FUN_10051abec` @ `0x10051abec` from `0x10051b51c`

### State value: `pending_auto`

String at: `0x10141c9f1` 

- Referenced by `FUN_10051abec` @ `0x10051abec` from `0x10051b560`

### State value: `matched_partners`

String at: `0x10141ca0d` 

- Referenced by `FUN_10051abec` @ `0x10051abec` from `0x10051b5d0`

### State value: `match_pending`

String at: `0x10141ca2f` 

- Referenced by `FUN_10051abec` @ `0x10051abec` from `0x10051b630`

### State value: `playing`

String at: `0x10141ca3d` 

- Referenced by `FUN_10051abec` @ `0x10051abec` from `0x10051b668`

### State value: `post_match`

String at: `0x10141ca66` 

- Referenced by `FUN_10051abec` @ `0x10051abec` from `0x10051b910`

### State value: `idle`

String at: `0x1013ce4a1` 

- Referenced by `FUN_1000278b8` @ `0x1000278b8` from `0x1000278e4`
- Referenced by `FUN_100027734` @ `0x100027734` from `0x100027784`

