# Post-Match State Handler Trace

Goal: Find where the spoils screen is skipped in CE mode.

## 1. State Machine Handler — FUN_10051abec

This function processes all state transitions (menus, playing, post_match, etc.).
String refs: post_match at 0x10051b910, playing at 0x10051b668.

```c

undefined8 FUN_10051abec(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  char *local_68;
  void *local_60;
  undefined4 local_58;
  char local_51;
  
  lVar4 = FUN_1000e86c0(param_2,"playerInfo");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) {
    local_58 = 0x100005;
    local_68 = "playerInfo";
    local_60 = (void *)0xa;
    plVar5 = (long *)FUN_1000e87dc(param_2,&local_68);
    local_58 = 0x100005;
    local_68 = "handle";
    local_60 = (void *)0x6;
    plVar6 = (long *)FUN_1000e87dc(plVar5,&local_68);
    plVar1 = (long *)*plVar6;
    if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
      plVar1 = plVar6;
    }
    FUN_1004e3148(param_1 + 0xd8,plVar1);
    lVar4 = FUN_1000e86c0(plVar5,"completed");
    dVar16 = 0.0;
    dVar15 = 0.0;
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
      local_58 = 0x100005;
      local_68 = "completed";
      local_60 = (void *)0x9;
      FUN_1000e87dc(plVar5,&local_68);
      dVar15 = (double)FUN_1000fceec();
    }
    *(int *)(param_1 + 0xec) = (int)dVar15;
    lVar4 = FUN_1000e86c0(plVar5,"wins");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
      local_58 = 0x100005;
      local_68 = "wins";
      local_60 = (void *)0x4;
      FUN_1000e87dc(plVar5,&local_68);
      dVar16 = (double)FUN_1000fceec();
    }
    *(int *)(param_1 + 0xf0) = (int)dVar16;
    lVar4 = FUN_1000e86c0(plVar5,"completed_non_tutorial");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
      uVar13 = 0;
    }
    else {
      local_58 = 0x100005;
      local_68 = "completed_non_tutorial";
      local_60 = (void *)0x16;
      puVar7 = (undefined4 *)FUN_1000e87dc(plVar5,&local_68);
      uVar13 = *puVar7;
    }
    *(undefined4 *)(param_1 + 0xe8) = uVar13;
  }
  lVar4 = FUN_1000e86c0(param_2,"state");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) goto LAB_10051b950;
  FUN_1004e313c(auStack_78);
  local_58 = 0x100005;
  local_68 = "state";
  local_60 = (void *)0x5;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_68);
  plVar1 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar1 = plVar5;
  }
  FUN_1004e3148(auStack_78,plVar1);
  lVar4 = FUN_1000e86c0(param_2,"pendingPartyInvites");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    bVar2 = false;
  }
  else {
    local_58 = 0x100005;
    local_68 = "pendingPartyInvites";
    local_60 = (void *)0x13;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_68);
    bVar2 = *piVar8 != 0;
  }
  *(bool *)(param_1 + 0xf4) = bVar2;
  lVar4 = FUN_1000e86c0(param_2,"pendingMessages");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    bVar2 = false;
  }
  else {
    local_58 = 0x100005;
    local_68 = "pendingMessages";
    local_60 = (void *)0xf;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_68);
    bVar2 = *piVar8 != 0;
  }
  *(bool *)(param_1 + 0xf5) = bVar2;
  lVar4 = FUN_1000e86c0(param_2,"pendingGuildInvites");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    bVar2 = false;
  }
  else {
    local_58 = 0x100005;
    local_68 = "pendingGuildInvites";
    local_60 = (void *)0x13;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_68);
    bVar2 = *piVar8 != 0;
  }
  *(bool *)(param_1 + 0xf6) = bVar2;
  lVar4 = FUN_1000e86c0(param_2,"pendingTeamInvites");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    bVar2 = false;
  }
  else {
    local_58 = 0x100005;
    local_68 = "pendingTeamInvites";
    local_60 = (void *)0x12;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_68);
    bVar2 = *piVar8 != 0;
  }
  *(bool *)(param_1 + 0xf7) = bVar2;
  local_58 = 0x100005;
  local_68 = "ttl";
  local_60 = (void *)0x3;
  FUN_1000e87dc(param_2,&local_68);
  dVar15 = (double)FUN_1000fceec();
  *(float *)(param_1 + 8) = (float)dVar15;
  FUN_1004e3004(param_1 + 0x10);
  lVar4 = FUN_1000e86c0(param_2,"matchId");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    pcVar10 = "";
  }
  else {
    local_58 = 0x100005;
    local_68 = "matchId";
    local_60 = (void *)0x7;
    pcVar9 = (char *)FUN_1000e87dc(param_2,&local_68);
    pcVar10 = *(char **)pcVar9;
    if ((*(uint *)(pcVar9 + 0x10) & 0x400000) != 0) {
      pcVar10 = pcVar9;
    }
  }
  FUN_1000ee4ec(&local_68,pcVar10);
  std::string::operator=((string *)(param_1 + 0xa8),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  lVar4 = FUN_1000e86c0(param_2,"spectatorId");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    pcVar10 = "";
  }
  else {
    local_58 = 0x100005;
    local_68 = "spectatorId";
    local_60 = (void *)0xb;
    pcVar9 = (char *)FUN_1000e87dc(param_2,&local_68);
    pcVar10 = *(char **)pcVar9;
    if ((*(uint *)(pcVar9 + 0x10) & 0x400000) != 0) {
      pcVar10 = pcVar9;
    }
  }
  FUN_1000ee4ec(&local_68,pcVar10);
  std::string::operator=((string *)(param_1 + 0xc0),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  lVar4 = FUN_1000e86c0(param_2,"estimatedWait");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    uVar13 = 0xffffffff;
  }
  else {
    local_58 = 0x100005;
    local_68 = "estimatedWait";
    local_60 = (void *)0xd;
    puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
    uVar13 = *puVar7;
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar13;
  lVar4 = FUN_1000e86c0(param_2,"qbanLevel");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    std::string::operator=((string *)(param_1 + 0x108),(string *)&DAT_101d91198);
    std::string::operator=((string *)(param_1 + 0x120),(string *)&DAT_101d91198);
    *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  else {
    lVar4 = FUN_1000e86c0(param_2,"qbanPlayer");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_10051b170:
      pcVar10 = "";
    }
    else {
      local_58 = 0x100005;
      local_68 = "qbanPlayer";
      local_60 = (void *)0xa;
      lVar4 = FUN_1000e87dc(param_2,&local_68);
      if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10051b170;
      local_58 = 0x100005;
      local_68 = "qbanPlayer";
      local_60 = (void *)0xa;
      pcVar10 = (char *)FUN_1000e87dc(param_2,&local_68);
      if (((byte)pcVar10[0x12] >> 6 & 1) == 0) {
        pcVar10 = *(char **)pcVar10;
      }
    }
    FUN_1000ee4ec(&local_68,pcVar10);
    std::string::operator=((string *)(param_1 + 0x108),(string *)&local_68);
    if (local_51 < '\0') {
      operator_delete(local_68);
    }
    lVar4 = FUN_1000e86c0(param_2,"qbanPlayerHandle");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_10051b1e8:
      pcVar10 = "";
    }
    else {
      local_58 = 0x100005;
      local_68 = "qbanPlayerHandle";
      local_60 = (void *)0x10;
      lVar4 = FUN_1000e87dc(param_2,&local_68);
      if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_10051b1e8;
      local_58 = 0x100005;
      local_68 = "qbanPlayerHandle";
      local_60 = (void *)0x10;
      pcVar10 = (char *)FUN_1000e87dc(param_2,&local_68);
      if (((byte)pcVar10[0x12] >> 6 & 1) == 0) {
        pcVar10 = *(char **)pcVar10;
      }
    }
    FUN_1000ee4ec(&local_68,pcVar10);
    std::string::operator=((string *)(param_1 + 0x120),(string *)&local_68);
    if (local_51 < '\0') {
      operator_delete(local_68);
    }
    lVar4 = FUN_1000e86c0(param_2,"qbanLevel");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_10051b260:
      uVar13 = 0xffffffff;
    }
    else {
      local_58 = 0x100005;
      local_68 = "qbanLevel";
      local_60 = (void *)0x9;
      lVar4 = FUN_1000e87dc(param_2,&local_68);
      if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10051b260;
      local_58 = 0x100005;
      local_68 = "qbanLevel";
      local_60 = (void *)0x9;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
      uVar13 = *puVar7;
    }
    *(undefined4 *)(param_1 + 0x138) = uVar13;
    lVar4 = FUN_1000e86c0(param_2,"qbanTime");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_10051b36c:
      uVar13 = 0;
    }
    else {
      local_58 = 0x100005;
      local_68 = "qbanTime";
      local_60 = (void *)0x8;
      lVar4 = FUN_1000e87dc(param_2,&local_68);
      if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10051b36c;
      local_58 = 0x100005;
      local_68 = "qbanTime";
      local_60 = (void *)0x8;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
      uVar13 = *puVar7;
    }
    *(undefined4 *)(param_1 + 0x13c) = uVar13;
    lVar4 = FUN_1000e86c0(param_2,"qbanEndTime");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_10051b3e0:
      uVar14 = 0;
    }
    else {
      local_58 = 0x100005;
      local_68 = "qbanEndTime";
      local_60 = (void *)0xb;
      lVar4 = FUN_1000e87dc(param_2,&local_68);
      if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) == 0) goto LAB_10051b3e0;
      local_58 = 0x100005;
      local_68 = "qbanEndTime";
      local_60 = (void *)0xb;
      puVar11 = (undefined8 *)FUN_1000e87dc(param_2,&local_68);
      uVar14 = *puVar11;
    }
    *(undefined8 *)(param_1 + 0x140) = uVar14;
    lVar4 = FUN_1000e86c0(param_2,"qbanPoints");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_10051b454:
      uVar13 = 0;
    }
    else {
      local_58 = 0x100005;
      local_68 = "qbanPoints";
      local_60 = (void *)0xa;
      lVar4 = FUN_1000e87dc(param_2,&local_68);
      if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10051b454;
      local_58 = 0x100005;
      local_68 = "qbanPoints";
      local_60 = (void *)0xa;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
      uVar13 = *puVar7;
    }
    *(undefined4 *)(param_1 + 0x148) = uVar13;
    lVar4 = FUN_1000e86c0(param_2,"qbanMaxPoints");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_10051b4c8:
      uVar13 = 0;
    }
    else {
      local_58 = 0x100005;
      local_68 = "qbanMaxPoints";
      local_60 = (void *)0xd;
      lVar4 = FUN_1000e87dc(param_2,&local_68);
      if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10051b4c8;
      local_58 = 0x100005;
      local_68 = "qbanMaxPoints";
      local_60 = (void *)0xd;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
      uVar13 = *puVar7;
    }
    *(undefined4 *)(param_1 + 0x14c) = uVar13;
  }
  FUN_1004e3120(&local_68,"None");
  uVar12 = FUN_1004e3654(auStack_78,&local_68);
  if ((uVar12 & 1) == 0) {
    FUN_1004e3120(auStack_88,"menus");
    uVar12 = FUN_1004e3654(auStack_78,auStack_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
  }
  else {
    uVar12 = 1;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  if ((uVar12 & 1) == 0) {
    FUN_1004e3120(&local_68,"pending_auto");
    uVar12 = FUN_1004e3654(auStack_78,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    if ((uVar12 & 1) != 0) {
      uVar13 = 2;
      goto LAB_10051b940;
    }
    FUN_1004e3120(&local_68,"pending_custom");
    uVar12 = FUN_1004e3654(auStack_78,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    if ((uVar12 & 1) != 0) {
      uVar13 = 3;
      goto LAB_10051b940;
    }
    FUN_1004e3120(&local_68,"matched_partners");
    iVar3 = FUN_1004e3654(auStack_78,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    if (iVar3 != 0) {
      local_58 = 0x100005;
      local_68 = "numQueuedEntries";
      local_60 = (void *)0x10;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
      *(undefined4 *)(param_1 + 0x100) = *puVar7;
      uVar13 = 4;
      goto LAB_10051b940;
    }
    FUN_1004e3120(&local_68,"match_pending");
    uVar12 = FUN_1004e3654(auStack_78,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    if ((uVar12 & 1) != 0) {
      uVar13 = 5;
      goto LAB_10051b940;
    }
    FUN_1004e3120(&local_68,"playing");
    iVar3 = FUN_1004e3654(auStack_78,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    if (iVar3 != 0) {
      local_58 = 0x100005;
      local_68 = "host";
      local_60 = (void *)0x4;
      plVar5 = (long *)FUN_1000e87dc(param_2,&local_68);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_68,plVar1);
      std::string::operator=((string *)(param_1 + 0x18),(string *)&local_68);
      if (local_51 < '\0') {
        operator_delete(local_68);
      }
      local_58 = 0x100005;
      local_68 = "port";
      local_60 = (void *)0x4;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
      *(undefined4 *)(param_1 + 0x30) = *puVar7;
      lVar4 = FUN_1000e86c0(param_2,"proxy_host");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) {
        local_58 = 0x100005;
        local_68 = "proxy_host";
        local_60 = (void *)0xa;
        plVar5 = (long *)FUN_1000e87dc(param_2,&local_68);
        plVar1 = (long *)*plVar5;
        if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
          plVar1 = plVar5;
        }
        FUN_1000ee4ec(&local_68,plVar1);
        std::string::operator=((string *)(param_1 + 0x38),(string *)&local_68);
        if (local_51 < '\0') {
          operator_delete(local_68);
        }
        local_58 = 0x100005;
        local_68 = "proxy_port";
        local_60 = (void *)0xa;
        puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
        *(undefined4 *)(param_1 + 0x50) = *puVar7;
      }
      uVar13 = 6;
      goto LAB_10051b940;
    }
    FUN_1004e3120(&local_68,"spectating");
    iVar3 = FUN_1004e3654(auStack_78,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    if (iVar3 != 0) {
      local_58 = 0x100005;
      local_68 = "host";
      local_60 = (void *)0x4;
      plVar5 = (long *)FUN_1000e87dc(param_2,&local_68);
      plVar1 = (long *)*plVar5;
      if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
        plVar1 = plVar5;
      }
      FUN_1000ee4ec(&local_68,plVar1);
      std::string::operator=((string *)(param_1 + 0x18),(string *)&local_68);
      if (local_51 < '\0') {
        operator_delete(local_68);
      }
      local_58 = 0x100005;
      local_68 = "port";
      local_60 = (void *)0x4;
      puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
      *(undefined4 *)(param_1 + 0x30) = *puVar7;
      lVar4 = FUN_1000e86c0(param_2,"proxy_host");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) {
        local_58 = 0x100005;
        local_68 = "proxy_host";
        local_60 = (void *)0xa;
        plVar5 = (long *)FUN_1000e87dc(param_2,&local_68);
        plVar1 = (long *)*plVar5;
        if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
          plVar1 = plVar5;
        }
        FUN_1000ee4ec(&local_68,plVar1);
        std::string::operator=((string *)(param_1 + 0x38),(string *)&local_68);
        if (local_51 < '\0') {
          operator_delete(local_68);
        }
        local_58 = 0x100005;
        local_68 = "proxy_port";
        local_60 = (void *)0xa;
        puVar7 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
        *(undefined4 *)(param_1 + 0x50) = *puVar7;
      }
      uVar13 = 7;
      goto LAB_10051b940;
    }
    FUN_1004e3120(&local_68,"post_match");
    iVar3 = FUN_1004e3654(auStack_78,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    if (iVar3 != 0) {
      uVar13 = 8;
      goto LAB_10051b940;
    }
  }
  else {
    uVar13 = 1;
LAB_10051b940:
    *(undefined4 *)(param_1 + 0xa0) = uVar13;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
LAB_10051b950:
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return 1;
}


```

## 2. Callers of FUN_10051abec

- `FUN_100506f44` @ `0x100506f44` (from `0x100507384`)

#### Caller: `FUN_100506f44` @ `0x100506f44`

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

## 3. SpoilsOfWarRewardConfig Processor — FUN_100212ff8

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
          plVar14 = plVar15;
        }
        plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
      } while (plVar15 != (long *)0x0);
      if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
        local_c0 = plVar14[4];
      }
    }
    FUN_1003029d4(&local_160,lVar4);
    FUN_100214220(param_1 + 0x6c0,&local_160);
    if (local_c1 < '\0') {
      operator_delete(local_d8);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    if (local_f9 < '\0') {
      operator_delete(local_110);
    }
    if (local_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if (local_129 < '\0') {
      operator_delete(local_140[0]);
    }
    if (local_148 < 0) {
      operator_delete(local_158);
    }
  }
  if ((*(float *)(param_1 + 0xd4) != *(float *)(param_1 + 0x104)) &&
     (lVar4 = FUN_100212fa8(uVar3,"ranked_5v5"), lVar4 != 0)) {
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      FUN_10012c5b0("prev5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xbc));
      FUN_10012c5b0("new5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xec));
      FUN_10012c5b0("prev5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xb8));
      FUN_10012c5b0("new5v5RankedDatamEloBucket",*(undefined4 *)(param_1 + 0xe8));
      FUN_10012c5b0("prev5v5RankedDatamEloEarned",(int)*(float *)(param_1 + 0xd4));
      FUN_10012c5b0("new5v5RankedDatamEloEarned",(int)*(float *)(param_1 + 0x104));
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
    pvVar18 = *(void **)(param_1 + 0xb8);
    pvVar22 = *(void **)(param_1 + 0xd0);
    pvVar19 = *(void **)(param_1 + 200);
    ppvVar5[0x1c] = *(void **)(param_1 + 0xc0);
    ppvVar5[0x1b] = pvVar18;
    ppvVar5[0x1e] = pvVar22;
    ppvVar5[0x1d] = pvVar19;
    pvVar18 = *(void **)(param_1 + 0xd8);
    ppvVar5[0x20] = *(void **)(param_1 + 0xe0);
    ppvVar5[0x1f] = pvVar18;
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    uVar21 = *(undefined8 *)(param_1 + 0x100);
    uVar20 = *(undefined8 *)(param_1 + 0xf8);
    puVar6[1] = *(undefined8 *)(param_1 + 0xf0);
    *puVar6 = uVar7;
    puVar6[3] = uVar21;
    puVar6[2] = uVar20;
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    puVar6[5] = *(undefined8 *)(param_1 + 0x110);
    puVar6[4] = uVar7;
    FUN_10001549c(&local_160,"ranked_5v5");
    std::string::operator=((string *)(ppvVar5 + 1),(string *)&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar4);
    local_160 = ppvVar5;
    FUN_1002141a0(param_1 + 0x6d0,&local_160);
    FUN_1002151a8(&local_160);
    FUN_10001549c(local_b0,"ranked_5v5");
    std::string::operator=((string *)&local_158,local_b0);
    local_f8 = (int)(*(float *)(param_1 + 0x104) - *(float *)(param_1 + 0xd4));
    plVar13 = (long *)(param_3 + 8);
    plVar15 = (long *)*plVar13;
    if (plVar15 != (long *)0x0) {
      iVar2 = *(int *)(lVar4 + 0x58);
      plVar14 = plVar13;
      do {
        if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {
          plVar14 = plVar15;
        }
        plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
      } while (plVar15 != (long *)0x0);
      if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
        local_c0 = plVar14[4];
      }
    }
    FUN_1003029d4(&local_160,lVar4);
    FUN_100214220(param_1 + 0x6c0,&local_160);
    if (local_c1 < '\0') {
      operator_delete(local_d8);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    if (local_f9 < '\0') {
      operator_delete(local_110);
    }
    if (local_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if (local_129 < '\0') {
      operator_delete(local_140[0]);
    }
    if (local_148 < 0) {
      operator_delete(local_158);
    }
  }
  if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 100)) {
    FUN_10001549c(&local_160,"xp");
    iVar2 = FUN_100211354(lVar8,&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    lVar4 = FUN_100212fa8(uVar3,"xp");
    if (lVar4 != 0) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - iVar2;
      uVar7 = FUN_1004e0150("MENU_SPOILS_TITLE_SPOILS_LEVEL_UP",0);
      local_160 = (void **)FUN_100211218(param_1 + 0x60,lVar4,"xp",uVar7);
      FUN_1002141a0(param_1 + 0x6d0,&local_160);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar2;
      FUN_1002151a8(&local_160);
      FUN_100211158(param_1 + 0x60,&local_160,lVar4,"xp",param_3);
      FUN_100214220(param_1 + 0x6c0,&local_160);
      if (local_c1 < '\0') {
        operator_delete(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if (local_f9 < '\0') {
        operator_delete(local_110);
      }
      if (local_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (local_129 < '\0') {
        operator_delete(local_140[0]);
      }
      if (local_148 < 0) {
        operator_delete(local_158);
      }
    }
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x44)) {
    FUN_10001549c(&local_160,"guild");
    iVar2 = FUN_100211354(lVar8,&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    lVar8 = FUN_100212fa8(uVar3,"guild");
    if (lVar8 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar2;
      uVar7 = FUN_1004e0150("MENU_SPOILS_GUILD_LEVELED_UP",0);
      local_160 = (void **)FUN_100211218(param_1 + 0x40,lVar8,"guild",uVar7);
      FUN_1002141a0(param_1 + 0x6d0,&local_160);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
      FUN_1002151a8(&local_160);
      FUN_100211158(param_1 + 0x40,&local_160,lVar8,"guild",param_3);
      FUN_100214220(param_1 + 0x6c0,&local_160);
      if (local_c1 < '\0') {
        operator_delete(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if (local_f9 < '\0') {
        operator_delete(local_110);
      }
      if (local_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (local_129 < '\0') {
        operator_delete(local_140[0]);
      }
      if (local_148 < 0) {
        operator_delete(local_158);
      }
    }
  }
  if (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88)) {
    lVar8 = FUN_100212fa8(uVar3,"heromastery");
    if (*(char *)(param_1 + 0xaf) < '\0') {
      psVar16 = *(string **)psVar16;
    }
    lVar4 = FUN_10034be08(psVar16);
    if ((lVar8 != 0) && (lVar4 != 0)) {
      FUN_100102450(local_b0,"portrait_%s");
      local_178 = (void *)0x0;
      uStack_170 = 0;
      local_168 = 0;
      FUN_100657568(auStack_188);
      FUN_1006575f4(auStack_188,PTR_s_build___MenuCharPortraitsHD_png_1018549d0);
      lVar9 = FUN_1006575c4(auStack_188,local_b0);
      puVar11 = PTR_s_build___MenuCharPortraitsHD2_atl_1018549d8;
      if (lVar9 != 0) {
        puVar11 = PTR_s_build___MenuCharPortraitsHD_png_1018549d0;
      }
      FUN_10001549c(&local_160,puVar11);
      std::string::operator=((string *)&local_178,(string *)&local_160);
      if (lStack_150 < 0) {
        operator_delete(local_160);
      }
      ppvVar5 = operator_new(0x130);
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
      *ppvVar5 = &PTR_FUN_101472108;
      ppvVar5[0x1a] = (void *)0x0;
      FUN_1004e313c(ppvVar5 + 0x1e);
      ppvVar5[0x23] = (void *)0x0;
      ppvVar5[0x22] = (void *)0x0;
      ppvVar5[0x25] = (void *)0x0;
      ppvVar5[0x24] = (void *)0x0;
      ppvVar5[0x21] = (void *)0x0;
      ppvVar5[0x20] = (void *)0x0;
      *(undefined4 *)(ppvVar5 + 4) = 4;
      FUN_10001549c(&local_160,"heromastery");
      std::string::operator=((string *)(ppvVar5 + 1),(string *)&local_160);
      if (lStack_150 < 0) {
        operator_delete(local_160);
      }
      FUN_10001549c(&local_160,local_b0);
      std::string::operator=((string *)(ppvVar5 + 0x20),(string *)&local_160);
      if (lStack_150 < 0) {
        operator_delete(local_160);
      }
      std::string::operator=((string *)(ppvVar5 + 0x23),(string *)&local_178);
      ppvVar5[0x1d] = *(void **)(param_1 + 0x80);
      pvVar18 = *(void **)(param_1 + 0x88);
      ppvVar5[0x1c] = *(void **)(param_1 + 0x90);
      ppvVar5[0x1b] = pvVar18;
      uVar7 = FUN_1004e0150(*(undefined8 *)(lVar4 + 0x18),0);
      FUN_1000153b4(ppvVar5 + 0x1e,uVar7);
      (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar8);
      local_160 = ppvVar5;
      FUN_1002141a0(param_1 + 0x6d0,&local_160);
      FUN_1002151a8(&local_160);
      FUN_10001549c(local_1a0,"heromastery");
      std::string::operator=((string *)&local_158,(string *)local_1a0);
      if (local_189 < '\0') {
        operator_delete(local_1a0[0]);
      }
      plVar13 = (long *)(param_3 + 8);
      plVar15 = (long *)*plVar13;
      if (plVar15 != (long *)0x0) {
        iVar2 = *(int *)(lVar8 + 0x58);
        plVar14 = plVar13;
        do {
          if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {
            plVar14 = plVar15;
          }
          plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
        } while (plVar15 != (long *)0x0);
        if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
          local_c0 = plVar14[4];
        }
      }
      FUN_1003029d4(&local_160,lVar8);
      local_160 = (void **)CONCAT44(local_160._4_4_,1);
      FUN_10001549c(local_1a0,local_b0);
      std::string::operator=((string *)local_128,(string *)local_1a0);
      if (local_189 < '\0') {
        operator_delete(local_1a0[0]);
      }
      std::string::operator=((string *)local_140,(string *)&local_178);
      local_f8 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88);
      FUN_100214220(param_1 + 0x6c0,&local_160);
      if (local_c1 < '\0') {
        operator_delete(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if (local_f9 < '\0') {
        operator_delete(local_110);
      }
      if (local_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (local_129 < '\0') {
        operator_delete(local_140[0]);
      }
      if (local_148 < 0) {
        operator_delete(local_158);
      }
      thunk_FUN_100657580(auStack_188);
      if (local_168 < 0) {
        operator_delete(local_178);
      }
    }
  }
  plVar13 = (long *)(param_3 + 8);
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar17 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x38);
      lVar8 = lVar4 + uVar17 * 0x80;
      psVar16 = (string *)(lVar8 + 0x50);
      psVar12 = psVar16;
      if (*(char *)(lVar8 + 0x67) < '\0') {
        psVar12 = *(string **)psVar16;
      }
      lVar8 = FUN_100212fa8(uVar3,psVar12);
      if ((lVar8 != 0) && (piVar1 = (int *)(lVar4 + uVar17 * 0x80), *piVar1 != 0)) {
        ppvVar5 = operator_new(0x110);
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x0;
        *(undefined8 *)(ppvVar5 + 1) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
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
        ppvVar5[0x1a] = (void *)0x0;
        *ppvVar5 = &PTR_FUN_101472130;
        ppvVar5[0x1f] = (void *)0x0;
        ppvVar5[0x1e] = (void *)0x0;
        ppvVar5[0x21] = (void *)0x0;
        ppvVar5[0x20] = (void *)0x0;
        ppvVar5[0x1d] = (void *)0x0;
        *(undefined8 *)(ppvVar5 + 0x1c) = 0;
        *(undefined4 *)(ppvVar5 + 4) = 1;
        *(int *)(ppvVar5 + 0x1b) = *piVar1;
        std::string::operator=((string *)(ppvVar5 + 1),psVar16);
        std::string::operator=((string *)(ppvVar5 + 0x1c),(string *)(piVar1 + 2));
        std::string::operator=((string *)(ppvVar5 + 0x1f),(string *)(piVar1 + 8));
        (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar8);
        local_160 = ppvVar5;
        FUN_1002141a0(param_1 + 0x6d0,&local_160);
        FUN_1002151a8(&local_160);
        std::string::operator=((string *)&local_158,psVar16);
        local_f8 = *piVar1;
        plVar14 = (long *)*plVar13;
        plVar15 = plVar13;
        if (plVar14 != (long *)0x0) {
          do {
            if (2 < *(int *)((long)plVar14 + 0x1c)) {
              plVar15 = plVar14;
            }
            plVar14 = (long *)plVar14[*(int *)((long)plVar14 + 0x1c) < 3];
          } while (plVar14 != (long *)0x0);
          if ((plVar15 != plVar13) && (*(int *)((long)plVar15 + 0x1c) < 4)) {
            local_c0 = plVar15[4];
          }
        }
        lVar4 = lVar4 + uVar17 * 0x80;
        plVar15 = (long *)(lVar4 + 0x38);
        if (*(char *)(lVar4 + 0x4f) < '\0') {
          plVar15 = (long *)*plVar15;
        }
        uVar7 = FUN_1004e0150(plVar15,0);
        FUN_1000153b4(&local_f0,uVar7);
        std::string::operator=((string *)local_128,(string *)(piVar1 + 2));
        std::string::operator=((string *)local_140,(string *)(piVar1 + 8));
        local_e0 = *(undefined4 *)(lVar8 + 0x60);
        local_b8 = *(undefined4 *)(lVar8 + 0x5c);
        local_b4 = 1;
        FUN_100214220(param_1 + 0x6c0,&local_160);
        if (local_c1 < '\0') {
          operator_delete(local_d8);
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
          local_f0 = 0;
          local_e8 = (void *)0x0;
        }
        if (local_f9 < '\0') {
          operator_delete(local_110);
        }
        if (local_111 < '\0') {
          operator_delete(local_128[0]);
        }
        if (local_129 < '\0') {
          operator_delete(local_140[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar17 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x18) + uVar17 * 0x28;
      plVar15 = (long *)(lVar8 + 0x10);
      if (*(char *)(lVar8 + 0x27) < '\0') {
        plVar15 = (long *)*plVar15;
      }
      lVar8 = FUN_100212fa8(uVar3,plVar15);
      if ((lVar8 != 0) && (*(int *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28 + 8) != 0)) {
        ppvVar5 = operator_new(0x110);
        *(undefined8 *)(ppvVar5 + 1) = 0;
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x0;
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
        ppvVar5[0x1a] = (void *)0x0;
        ppvVar5[0x1b] = (void *)0x0;
        *ppvVar5 = &PTR_FUN_10148df60;
        FUN_10001549c(ppvVar5 + 0x1c,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50);
        ppvVar5[0x1f] = (void *)0x0;
        ppvVar5[0x20] = (void *)0x0;
        ppvVar5[0x21] = (void *)0x0;
        *(undefined4 *)(ppvVar5 + 4) = 0;
        plVar15 = (long *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28);
        ppvVar5[0x1b] = (void *)*plVar15;
        std::string::operator=((string *)(ppvVar5 + 1),(string *)(plVar15 + 2));
        (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar8);
        local_160 = ppvVar5;
        FUN_1002141a0(param_1 + 0x6d0,&local_160);
        FUN_1002151a8(&local_160);
        std::string::operator=
                  ((string *)&local_158,(string *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28 + 0x10)
                  );
        local_f8 = *(int *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28 + 8);
        plVar15 = (long *)*plVar13;
        if (plVar15 != (long *)0x0) {
          iVar2 = *(int *)(lVar8 + 0x58);
          plVar14 = plVar13;
          do {
            if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {
              plVar14 = plVar15;
            }
            plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
          } while (plVar15 != (long *)0x0);
          if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
            local_c0 = plVar14[4];
          }
        }
        FUN_1003029d4(&local_160,lVar8);
        FUN_100214220(param_1 + 0x6c0,&local_160);
        if (local_c1 < '\0') {
          operator_delete(local_d8);
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
          local_f0 = 0;
          local_e8 = (void *)0x0;
        }
        if (local_f9 < '\0') {
          operator_delete(local_110);
        }
        if (local_111 < '\0') {
          operator_delete(local_128[0]);
        }
        if (local_129 < '\0') {
          operator_delete(local_140[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar17 = 0;
    do {
      local_158 = (void *)0x0;
      lStack_150 = 0;
      local_160 = &local_158;
      FUN_1004e313c(&local_148);
      lVar8 = *(long *)(param_1 + 0x28);
      puVar6 = (undefined8 *)(lVar8 + uVar17 * 0x28);
      plVar13 = (long *)*puVar6;
      while (plVar13 != puVar6 + 1) {
        lVar8 = plVar13[7];
        puVar10 = (undefined4 *)FUN_1002115d0(&local_160,plVar13 + 4);
        *puVar10 = (int)lVar8;
        plVar15 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar15 = plVar13 + 2;
          plVar14 = (long *)*plVar15;
          if ((long *)*plVar14 != plVar13) {
            do {
              lVar8 = *plVar15;
              plVar15 = (long *)(lVar8 + 0x10);
              plVar14 = (long *)*plVar15;
            } while (*plVar14 != lVar8);
          }
        }
        else {
          do {
            plVar14 = plVar15;
            plVar15 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        lVar8 = *(long *)(param_1 + 0x28);
        plVar13 = plVar14;
        puVar6 = (undefined8 *)(lVar8 + uVar17 * 0x28);
      }
      FUN_1000153b4(&local_148,lVar8 + uVar17 * 0x28 + 0x18);
      FUN_100210b7c(param_1 + 0x6a0,&local_160);
      if (local_140[0] != (void *)0x0) {
        operator_delete__(local_140[0]);
        local_148 = 0;
        local_140[0] = (void *)0x0;
      }
      FUN_10014ebf8(&local_160,local_158);
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 0x20));
  }
  local_160 = (void **)FUN_10021183c;
  FUN_10021575c(*(long *)(param_1 + 0x6c8),
                *(long *)(param_1 + 0x6c8) + (ulong)*(uint *)(param_1 + 0x6c0) * 0xb0,&local_160);
  local_160 = (void **)FUN_100211850;
  FUN_10021675c(*(long *)(param_1 + 0x6d8),
                *(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x6d0) * 8,&local_160);
  FUN_100212bb0(param_1 + 0x178,0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


```

## 4. Callers of FUN_100212ff8 (SpoilsOfWarRewardConfig)

- `FUN_100223e98` @ `0x100223e98` (from `0x100223efc`)

#### Caller: `FUN_100223e98` @ `0x100223e98`

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

## 5. notifyGameResults Sender — FUN_1005028f8

```c

undefined8 FUN_1005028f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *local_48 [2];
  char local_31;
  
  if (*(int *)(param_1 + 0x2b08) == 0) {
    uVar1 = 0xfffffff9;
    DAT_1018675c8 = 0xfffffff9;
  }
  else {
    FUN_1000ee4ec(local_48,"notifyGameResults");
    uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,param_3,1,0,0x5a,0);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return uVar1;
}


```

## 6. Callers of FUN_1005028f8 (notifyGameResults)

*No callers found*

## 7. notifyExitPostMatch Sender — FUN_1004fdaf0

```c

undefined8 FUN_1004fdaf0(long param_1)

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
  FUN_1000ee4ec(local_50,"notifyExitPostMatch");
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

## 8. Callers of FUN_1004fdaf0 (notifyExitPostMatch)

*No callers found*

## 9. Reward/Chest Functions (CE-gated)

### FUN_1002d8918

```c

long * FUN_1002d8918(long *param_1)

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
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_1001b4648();
  puVar11[0x4d] = 0;
  *puVar11 = &PTR_thunk_FUN_1002d9368_101488cd0;
  puVar11 = puVar11 + 0x4e;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x79;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0xa2;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_100652c08(param_1 + 0xc0);
  plVar3 = param_1 + 0xde;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xfc;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x11a;
  FUN_1006421a8(plVar5);
  param_1[0x11a] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar6 = param_1 + 299;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x151;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_1 + 0x17c;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x19a;
  thunk_FUN_100650e64(plVar9);
  param_1[0x1c0] = 0;
  *(undefined2 *)(param_1 + 0x1c1) = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0x43b40000;
  *(undefined4 *)((long)param_1 + 0xe1c) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_10064f31c(plVar1,plVar2,1);
  FUN_10064f31c(plVar1,param_1 + 0xc0,1);
  FUN_10064f31c(plVar1,plVar3,1);
  FUN_10064f31c(plVar1,plVar4,1);
  FUN_100655930(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x774);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x774) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar12 = FUN_1004e0150("MENU_MARKET_CTA_OWNED",0);
  FUN_1006513c0(plVar6,uVar12);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar9,&DAT_10115a168);
  FUN_100652ca4(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"crafting_blueprint_corner");
  *(uint *)((long)param_1 + 0x864) = *(uint *)((long)param_1 + 0x864) & 0xfffffffb;
  FUN_10064e47c(0x431e0000,0x42e60000,plVar4);
  local_68 = DAT_101d91884;
  local_90 = FUN_1002d8c24;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  FUN_1001b4964(param_1,1);
  return param_1;
}


```

#### Callers:

- `thunk_FUN_1002d8918` @ `0x1002d8c34` (from `0x1002d8c34`)

#### Caller: `thunk_FUN_1002d8918` @ `0x1002d8c34`

```c

long * thunk_FUN_1002d8918(long *param_1)

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
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_1001b4648();
  puVar11[0x4d] = 0;
  *puVar11 = &PTR_thunk_FUN_1002d9368_101488cd0;
  puVar11 = puVar11 + 0x4e;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x79;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0xa2;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_100652c08(param_1 + 0xc0);
  plVar3 = param_1 + 0xde;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xfc;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x11a;
  FUN_1006421a8(plVar5);
  param_1[0x11a] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar6 = param_1 + 299;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x151;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_1 + 0x17c;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x19a;
  thunk_FUN_100650e64(plVar9);
  param_1[0x1c0] = 0;
  *(undefined2 *)(param_1 + 0x1c1) = 0;
  param_1[0x1c2] = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0x43b40000;
  *(undefined4 *)((long)param_1 + 0xe1c) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_10064f31c(plVar1,plVar2,1);
  FUN_10064f31c(plVar1,param_1 + 0xc0,1);
  FUN_10064f31c(plVar1,plVar3,1);
  FUN_10064f31c(plVar1,plVar4,1);
  FUN_100655930(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x774);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x774) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar12 = FUN_1004e0150("MENU_MARKET_CTA_OWNED",0);
  FUN_1006513c0(plVar6,uVar12);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar9,&DAT_10115a168);
  FUN_100652ca4(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"crafting_blueprint_corner");
  *(uint *)((long)param_1 + 0x864) = *(uint *)((long)param_1 + 0x864) & 0xfffffffb;
  FUN_10064e47c(0x431e0000,0x42e60000,plVar4);
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002d8c24;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  FUN_1001b4964(param_1,1);
  return param_1;
}


```

### FUN_1002d90c8

```c

void FUN_1002d90c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  lVar1 = param_1 + 0x600;
  *(uint *)(param_1 + 0x684) = *(uint *)(param_1 + 0x684) & 0xffffffbf;
  fVar5 = *(float *)(param_1 + 0xe18) / 1.3333;
  FUN_10064e47c(*(float *)(param_1 + 0xe18),fVar5,param_1 + 0x3c8);
  local_58 = *(float *)(param_1 + 0xe18);
  local_60 = local_58 + -6.0;
  fStack_5c = fVar5 + -6.0;
  fStack_54 = fVar5;
  fVar5 = fStack_5c;
  FUN_10064e48c(lVar1,&local_60);
  local_60 = (float)FUN_100652e60(lVar1);
  fStack_5c = fVar5;
  FUN_10064e48c(param_1 + 0x6f0,&local_60);
  lVar2 = param_1 + 0x510;
  FUN_10064e48c(lVar2,&local_58);
  FUN_10064e5ec(0,0,lVar2,8,param_1 + 0x3c8,8);
  FUN_10064e5ec(0,0,lVar1,8,lVar2,8);
  FUN_10064e5ec(0,0,param_1 + 0x6f0,8,lVar1,8);
  uVar4 = 0;
  FUN_10064e5ec(0,param_1 + 0x7e0,3,lVar1,3);
  *(uint *)(param_1 + 0x954) =
       *(uint *)(param_1 + 0x954) & 0xffffffbf | (uint)*(byte *)(param_1 + 0xe08) << 6;
  if (*(byte *)(param_1 + 0xe08) != 0) {
    lVar1 = param_1 + 0x958;
    FUN_10064e72c(0x41400000,lVar1,0,lVar2,2);
    FUN_10064e72c(0,lVar1,4,lVar2,4);
    FUN_10064e72c(0xc0c00000,param_1 + 0xbe0,1,param_1 + 0xcd0,3);
    FUN_10064e72c(0,param_1 + 0xbe0,5,param_1 + 0xcd0,5);
    lVar3 = param_1 + 0xa88;
    FUN_1006557ec(lVar3);
    FUN_10064e72c(0,lVar3,4,lVar2,4);
    FUN_10064e72c(0,lVar3,5,lVar1,5);
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) & 0xffffffbf;
  }
  FUN_1006557ec(param_1 + 0x270);
  local_60 = (float)FUN_10064e3cc(param_1 + 0x270);
  fStack_5c = (float)uVar4;
  FUN_10064e48c(param_1,&local_60);
  return;
}


```

#### Callers:

- `FUN_1002d8cac` @ `0x1002d8cac` (from `0x1002d8e60`)
- `FUN_1002d8308` @ `0x1002d8308` (from `0x1002d8408`)
- `FUN_1002d9084` @ `0x1002d9084` (from `0x1002d90c4`)

#### Caller: `FUN_1002d9084` @ `0x1002d9084`

```c

void FUN_1002d9084(long param_1)

{
  if (*(long *)(param_1 + 0x6d0) == 0) {
    FUN_1001e355c(param_1 + 0x600,*(undefined8 *)(param_1 + 0xe10));
  }
  FUN_100652dd4(param_1 + 0x510,param_1 + 0xe1c,2);
  FUN_1002d90c8(param_1);
  return;
}


```

#### Caller: `FUN_1002d8308` @ `0x1002d8308`

```c

void FUN_1002d8308(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x5e0),0x43fa0000);
  local_8c = 0x439240f0;
  local_90 = 0x43480000;
  fVar11 = 46.253662;
  lVar1 = param_1 + 0x160;
  local_88 = local_8c;
  uStack_84 = local_8c;
  FUN_10064e48c(lVar1,&local_90);
  lVar2 = param_1 + 0x250;
  FUN_10064e48c(lVar2,&local_88);
  *(undefined8 *)(param_1 + 0x348) = 0x3e21ec5d3e21ec5d;
  *(undefined8 *)(param_1 + 0x340) = 0x3e21ec5d3e21ec5d;
  fVar10 = (float)FUN_10064eb7c(lVar1,5,param_1,5);
  if (*(int *)(param_1 + 0x150) != 0) {
    uVar9 = 0;
    uVar5 = 0;
    fVar11 = -0.29268292;
    puVar8 = *(undefined8 **)(param_1 + 0x158);
    do {
      uVar6 = *puVar8;
      FUN_1002d9040(0x43c30000,uVar6);
      FUN_1002d90c8(uVar6);
      if (puVar8 == *(undefined8 **)(param_1 + 0x158)) {
LAB_1002d8490:
        uVar9 = 1;
        uVar5 = uVar6;
      }
      else {
        if ((uint)(int)(fVar10 * 0.0024390244 + -0.29268292) <= uVar9) {
          FUN_10064e72c(0x41a00000,uVar6,0,uVar5,2);
          FUN_10064e72c(0,uVar6,3,uVar5,3);
          goto LAB_1002d8490;
        }
        uVar9 = uVar9 + 1;
        uVar7 = puVar8[-1];
        FUN_10064e72c(0x41a00000,uVar6,3,uVar7,1);
        FUN_10064e72c(0,uVar6,0,uVar7,0);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != (undefined8 *)
                       (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
  }
  lVar3 = param_1 + 0x488;
  FUN_1006557ec(lVar3);
  uVar12 = *(undefined4 *)(param_1 + 0x5e0);
  FUN_10064e3cc(lVar3);
  fVar10 = fVar11;
  FUN_100652e60(lVar2);
  if (fVar11 <= fVar10) {
    fVar11 = fVar10;
  }
  lVar4 = param_1 + 0x358;
  FUN_100651184(lVar4);
  FUN_10064e47c(uVar12,fVar11 + fVar10 + 100.0,param_1);
  FUN_10064e5ec(0x41200000,0x41200000,lVar4,0,param_1,0);
  FUN_10064e5ec(0,0x41a00000,lVar1,0,lVar4,3);
  FUN_10064e5ec(0,0,lVar2,8,lVar1,8);
  FUN_10064e72c(0x42200000,lVar3,3,lVar1,1);
  FUN_10064e72c(0,lVar3,0,lVar1,0);
  return;
}


```

#### Caller: `FUN_1002d8cac` @ `0x1002d8cac`

```c

void FUN_1002d8cac(long param_1)

{
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  char *pcVar15;
  uint local_88;
  undefined4 uStack_84;
  size_t local_80;
  byte local_71;
  int local_70;
  int local_68;
  
  *(uint *)(param_1 + 0x954) =
       *(uint *)(param_1 + 0x954) & 0xfffffffb | (uint)*(byte *)(param_1 + 0xe08) << 2;
  bVar5 = *(char *)(param_1 + 0xe09) == '\0';
  bVar4 = !bVar5;
  if (*(byte *)(param_1 + 0xe08) != 0) {
    bVar4 = bVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x684);
  uVar11 = 0xff;
  uVar14 = uVar11;
  if (!bVar4) {
    uVar14 = 0xb2;
  }
  if (uVar14 != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x684) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar14 << 7;
    FUN_1000200a0(param_1 + 0x600);
  }
  FUN_100652e14(0x3f800000,param_1 + 0x600);
  uVar14 = *(uint *)(param_1 + 0x594);
  if (!bVar4) {
    uVar11 = 0x4c;
  }
  if (uVar11 != (uVar14 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x594) = uVar14 & 0xffff8000 | uVar14 & 0x7f | uVar11 << 7;
    FUN_1000200a0(param_1 + 0x510);
  }
  uVar14 = 0;
  if (!bVar4) {
    uVar14 = 4;
  }
  *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x774) & 0xfffffffb | uVar14;
  if ((*(char *)(param_1 + 0xe08) == '\0') ||
     (*(undefined8 **)(param_1 + 0xe00) == (undefined8 *)0x0)) goto LAB_1002d8e5c;
  FUN_10001549c(&local_88,**(undefined8 **)(param_1 + 0xe00));
  lVar7 = FUN_10032c624(&local_88);
  if ((char)local_71 < '\0') {
    operator_delete((void *)CONCAT44(uStack_84,local_88));
  }
  if (lVar7 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xe09) == '\0') {
    iVar6 = FUN_10032c944(lVar7);
    if (iVar6 == 0) {
      FUN_10032c3d4(&local_88,lVar7);
      uVar10 = (ulong)local_71;
      uVar14 = (uint)(char)local_71;
      if (-1 < (int)uVar14) {
        local_80 = uVar10;
      }
      sVar1 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar1 = (ulong)DAT_101d911a8._7_1_;
      }
      if (local_80 == sVar1) {
        puVar9 = (uint *)CONCAT44(uStack_84,local_88);
        if (-1 < (int)uVar14) {
          puVar9 = &local_88;
        }
        pbVar13 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar13 = (byte *)&DAT_101d91198;
        }
        if ((int)uVar14 < 0) {
          if ((local_80 != 0) && (iVar6 = _memcmp(puVar9,pbVar13,local_80), iVar6 != 0))
          goto LAB_1002d8f28;
        }
        else if (local_80 != 0) {
          if ((uint)*pbVar13 == (local_88 & 0xff)) {
            pbVar12 = (byte *)((ulong)&local_88 | 1);
            do {
              uVar10 = uVar10 - 1;
              pbVar13 = pbVar13 + 1;
              if (uVar10 == 0) goto LAB_1002d8f64;
              bVar3 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar3 == *pbVar13);
          }
          goto LAB_1002d8f28;
        }
LAB_1002d8f64:
        *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) & 0xfffffffb;
        *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) & 0xfffffffb;
        *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) & 0xfffffffb;
      }
      else {
LAB_1002d8f28:
        *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) | 4;
        *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) | 4;
        if (((DAT_101e454c8 & 1) == 0) && (iVar6 = ___cxa_guard_acquire(&DAT_101e454c8), iVar6 != 0)
           ) {
          FUN_1004e313c(&DAT_101e454b8);
          ___cxa_atexit(FUN_100046198,&DAT_101e454b8,0x100000000);
          ___cxa_guard_release(&DAT_101e454c8);
        }
        if (local_70 == 0) {
          if (local_68 != 0) {
            pcVar15 = "opal_icon_small";
            goto LAB_1002d8f9c;
          }
        }
        else {
          pcVar15 = "ice_icon_small";
LAB_1002d8f9c:
          FUN_1004e38ac(&DAT_101e454b8,"%d");
          FUN_1006513c0(param_1 + 0xcd0,&DAT_101e454b8);
          FUN_100652cdc(param_1 + 0xbe0,pcVar15);
        }
        *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) & 0xfffffffb;
        uVar14 = (uint)local_71;
      }
      if ((uVar14 >> 7 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
      goto LAB_1002d8e5c;
    }
    *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) | 4;
    uVar8 = FUN_1004e0150("MENU_SKINS_HUB_COMING_SOON_LABEL",0);
    FUN_1006513c0(param_1 + 0x958,uVar8);
    puVar9 = (uint *)(param_1 + 0xe1c);
  }
  else {
    *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) | 4;
    uVar8 = FUN_1004e0150("MENU_MARKET_CTA_OWNED",0);
    FUN_1006513c0(param_1 + 0x958,uVar8);
    local_88 = 0xffa0a0a0;
    puVar9 = &local_88;
  }
  FUN_100651460(param_1 + 0x958,puVar9);
  *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) & 0xfffffffb;
  *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) & 0xfffffffb;
LAB_1002d8e5c:
  FUN_1002d90c8(param_1);
  return;
}


```

### FUN_1002da05c

```c

void FUN_1002da05c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68;
  float fStack_64;
  
  lVar1 = param_3 + 0x158;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = (float)param_2;
  FUN_10064e48c(param_3 + 0x2f8,&local_68);
  lVar3 = param_3 + 0x16d0;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x1870,&local_68);
  iVar5 = FUN_100131560();
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = 4;
  }
  *(uint *)(param_3 + 0x1754) = *(uint *)(param_3 + 0x1754) & 0xfffffffb | uVar6;
  lVar2 = param_3 + 1000;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar2,&local_68);
  lVar4 = param_3 + 0x1588;
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar4,&local_68);
  local_68 = FUN_10064e3cc(lVar2);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x588,&local_68);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_10064e3cc(lVar1);
  FUN_1002d94f4(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x150))();
  lVar1 = param_3 + 0x1a50;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_10064e5ec(0x41a00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_10064e72c(0,uVar7,0,lVar4,2);
  FUN_10064e72c(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_10064e3cc(lVar2);
  fVar8 = fVar9;
  FUN_10064e3cc(lVar4);
  fVar8 = (fVar9 + -80.0) - fVar8;
  FUN_10064e47c(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_100532138(lVar1);
  FUN_10064e3cc(lVar4);
  FUN_10064e5ec(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_1000200a0(param_3 + 0x588);
  }
  return;
}


```

#### Callers:

*No callers found*

### FUN_1002da328

```c

long * FUN_1002da328(long *param_1)

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
  undefined4 uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar27 = (undefined8 *)FUN_10064f204();
  puVar27[0x29] = 0;
  *puVar27 = &PTR_thunk_FUN_1002dc608_101489108;
  puVar27 = puVar27 + 0x2a;
  thunk_FUN_100651ebc();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0xae;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0xd9;
  FUN_1006421a8();
  param_1[0xd9] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xea;
  thunk_FUN_100183160(plVar4,0);
  plVar6 = param_1 + 0x576;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x5a1;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x60b;
  thunk_FUN_1006543ec(plVar8);
  plVar9 = param_1 + 0x63f;
  FUN_1006421a8(plVar9);
  param_1[0x63f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x650;
  thunk_FUN_100181304(plVar10,0);
  plVar11 = param_1 + 0x907;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x92d;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x94b;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x969;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x98f;
  thunk_FUN_100182684(plVar15,0);
  plVar16 = param_1 + 0xd6b;
  thunk_FUN_100655644(plVar16);
  plVar17 = param_1 + 0xd96;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xdbc;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xdda;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xe00;
  thunk_FUN_100655644();
  plVar20 = param_1 + 0xe2b;
  thunk_FUN_100652c08();
  plVar21 = param_1 + 0xe49;
  thunk_FUN_100655644(plVar21);
  plVar22 = param_1 + 0xe74;
  FUN_1001aa1d4();
  plVar23 = param_1 + 0xeb0;
  thunk_FUN_10064f204(plVar23);
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0xef7;
  thunk_FUN_100650e64();
  FUN_1002bdcb4();
  thunk_FUN_100652c08();
  *(undefined8 *)((long)param_1 + 0x8047) = 0;
  param_1[0x1008] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar10,1);
  FUN_100655930(plVar2,plVar11,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,param_1 + 0x5c7,1);
  FUN_100655930(plVar6,param_1 + 0x5e5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar9,plVar13,1);
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_100642bd8(plVar9,plVar14,1);
  FUN_100642bd8(plVar9,plVar15,1);
  FUN_100642bd8(plVar9,plVar16,1);
  FUN_100655930(plVar16,plVar17,1);
  FUN_100655930(plVar16,plVar18,1);
  FUN_100655930(plVar16,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar20,1);
  FUN_100655930(plVar5,plVar21,1);
  FUN_100655930(plVar21,plVar23,1);
  FUN_10064f31c(plVar23,plVar22,1);
  FUN_100655930(plVar21,plVar24,1);
  FUN_100655930(plVar5,param_1 + 0xfea,1);
  FUN_100642bd8(param_1 + 0xfea,param_1 + 0xf1d,1);
  FUN_100652cac(param_1 + 0x54,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100651f8c(puVar27,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652444(puVar27,"tile_corner_gradient",0,0,0,"tile_edge_gradient_hor",0,0,0,
                "tile_edge_gradient_vert",0,0);
  if ((*(uint *)((long)param_1 + 0x1d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar27);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x504);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x504) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BUTTON",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x447a0000,plVar10,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1002db62c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x651,&local_a8);
  FUN_1001b4c0c(plVar10,1);
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  FUN_1006513c0(plVar11,uVar28);
  *(uint *)((long)param_1 + 0x48bc) = *(uint *)((long)param_1 + 0x48bc) & 0xfffffffb;
  FUN_100181c18(0x42200000,0x42c80000,0x44228000,plVar4);
  uVar25 = DAT_101d918e8;
  local_80 = DAT_101d918e8;
  local_a8 = FUN_1002daee4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0xeb,&local_a8);
  FUN_1001b495c(0xbf800000,plVar4);
  FUN_100183500(plVar4,"ice_icon_small");
  FUN_100651038(param_1 + 0x1cd,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(param_1 + 0x1cd,1);
  FUN_100181c78(0x4019999a,plVar4);
  FUN_10018187c(plVar4,1);
  *(uint *)((long)param_1 + 0x2c34) = *(uint *)((long)param_1 + 0x2c34) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar7,uVar28);
  FUN_100652ca4(param_1 + 0x5c7,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651038(param_1 + 0x5e5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar8,1);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x49ec);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x49ec) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar12);
    uVar29 = *(uint *)((long)param_1 + 0x49ec);
  }
  *(uint *)((long)param_1 + 0x49ec) = uVar29 | 0x10;
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x966) = *(byte *)(param_1 + 0x966) | 2;
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4adc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4adc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651700(plVar14,3);
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_plus");
  FUN_10064e47c(0x42c80000,0x42c80000,plVar20);
  FUN_100652cac(param_1 + 0xed9,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x43480000,0x43480000,param_1 + 0xed9);
  uVar28 = FUN_100345b94();
  uVar28 = FUN_10034c450(uVar28,"*PlayerEssenceEffects*");
  FUN_1001aa350(plVar22,uVar28);
  FUN_10064e47c(0x43480000,0x43480000,plVar22);
  local_a8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe74] + 0x28))(plVar22,&local_a8);
  if ((*(float *)(param_1 + 0xe7d) != 1.5) || (*(float *)((long)param_1 + 0x73ec) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0xe7d] = lVar30;
    FUN_1000200a0(plVar22);
  }
  FUN_1001aaebc(plVar22);
  FUN_1001aae30(plVar22,"ESSENCE_ICON");
  FUN_10064e47c(0x43480000,0x43480000,plVar23);
  FUN_100651594(plVar24,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1004e3120(&local_a8,"1300");
  FUN_1006513c0(plVar24,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  FUN_100655990(plVar5,0);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42c80000,0x42c80000,0x447a0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = uVar25;
  local_a8 = FUN_1002daef4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x990,&local_a8);
  FUN_100651038(param_1 + 0xa72,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100181c68(0x430c0000,plVar15);
  FUN_1001b495c(0xbf800000,plVar15);
  FUN_100651038(plVar17,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar17,uVar28);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x42480000,0x42480000,plVar18);
  FUN_100651038(plVar19,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1004e3120(&local_a8,"0");
  FUN_1006513c0(plVar19,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) | 0x10;
  local_80 = DAT_101dbd48c;
  local_a8 = thunk_FUN_1002db898;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&local_a8);
  local_80 = DAT_101dbd460;
  local_a8 = thunk_FUN_1002db898;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&local_a8);
  *(uint *)((long)param_1 + 0x327c) = *(uint *)((long)param_1 + 0x327c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7084) = *(uint *)((long)param_1 + 0x7084) & 0xfffffffb;
  iVar26 = FUN_100131560();
  if (iVar26 != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb;
  }
  return param_1;
}


```

#### Callers:

- `thunk_FUN_1002da328` @ `0x1002daf34` (from `0x1002daf34`)

#### Caller: `thunk_FUN_1002da328` @ `0x1002daf34`

```c

long * thunk_FUN_1002da328(long *param_1)

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
  undefined4 uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar27 = (undefined8 *)FUN_10064f204();
  puVar27[0x29] = 0;
  *puVar27 = &PTR_thunk_FUN_1002dc608_101489108;
  puVar27 = puVar27 + 0x2a;
  thunk_FUN_100651ebc();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0xae;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0xd9;
  FUN_1006421a8();
  param_1[0xd9] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xea;
  thunk_FUN_100183160(plVar4,0);
  plVar6 = param_1 + 0x576;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x5a1;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x60b;
  thunk_FUN_1006543ec(plVar8);
  plVar9 = param_1 + 0x63f;
  FUN_1006421a8(plVar9);
  param_1[0x63f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x650;
  thunk_FUN_100181304(plVar10,0);
  plVar11 = param_1 + 0x907;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x92d;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x94b;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x969;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x98f;
  thunk_FUN_100182684(plVar15,0);
  plVar16 = param_1 + 0xd6b;
  thunk_FUN_100655644(plVar16);
  plVar17 = param_1 + 0xd96;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xdbc;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xdda;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xe00;
  thunk_FUN_100655644();
  plVar20 = param_1 + 0xe2b;
  thunk_FUN_100652c08();
  plVar21 = param_1 + 0xe49;
  thunk_FUN_100655644(plVar21);
  plVar22 = param_1 + 0xe74;
  FUN_1001aa1d4();
  plVar23 = param_1 + 0xeb0;
  thunk_FUN_10064f204(plVar23);
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0xef7;
  thunk_FUN_100650e64();
  FUN_1002bdcb4();
  thunk_FUN_100652c08();
  *(undefined8 *)((long)param_1 + 0x8047) = 0;
  param_1[0x1008] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar10,1);
  FUN_100655930(plVar2,plVar11,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,param_1 + 0x5c7,1);
  FUN_100655930(plVar6,param_1 + 0x5e5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar9,plVar13,1);
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_100642bd8(plVar9,plVar14,1);
  FUN_100642bd8(plVar9,plVar15,1);
  FUN_100642bd8(plVar9,plVar16,1);
  FUN_100655930(plVar16,plVar17,1);
  FUN_100655930(plVar16,plVar18,1);
  FUN_100655930(plVar16,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar20,1);
  FUN_100655930(plVar5,plVar21,1);
  FUN_100655930(plVar21,plVar23,1);
  FUN_10064f31c(plVar23,plVar22,1);
  FUN_100655930(plVar21,plVar24,1);
  FUN_100655930(plVar5,param_1 + 0xfea,1);
  FUN_100642bd8(param_1 + 0xfea,param_1 + 0xf1d,1);
  FUN_100652cac(param_1 + 0x54,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100651f8c(puVar27,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652444(puVar27,"tile_corner_gradient",0,0,0,"tile_edge_gradient_hor",0,0,0,
                "tile_edge_gradient_vert",0,0);
  if ((*(uint *)((long)param_1 + 0x1d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar27);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x504);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x504) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BUTTON",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x447a0000,plVar10,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1002db62c;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x651,&pcStack_a8);
  FUN_1001b4c0c(plVar10,1);
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  FUN_1006513c0(plVar11,uVar28);
  *(uint *)((long)param_1 + 0x48bc) = *(uint *)((long)param_1 + 0x48bc) & 0xfffffffb;
  FUN_100181c18(0x42200000,0x42c80000,0x44228000,plVar4);
  uVar25 = DAT_101d918e8;
  uStack_80 = DAT_101d918e8;
  pcStack_a8 = FUN_1002daee4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xeb,&pcStack_a8);
  FUN_1001b495c(0xbf800000,plVar4);
  FUN_100183500(plVar4,"ice_icon_small");
  FUN_100651038(param_1 + 0x1cd,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(param_1 + 0x1cd,1);
  FUN_100181c78(0x4019999a,plVar4);
  FUN_10018187c(plVar4,1);
  *(uint *)((long)param_1 + 0x2c34) = *(uint *)((long)param_1 + 0x2c34) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar7,uVar28);
  FUN_100652ca4(param_1 + 0x5c7,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651038(param_1 + 0x5e5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar8,1);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x49ec);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x49ec) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar12);
    uVar29 = *(uint *)((long)param_1 + 0x49ec);
  }
  *(uint *)((long)param_1 + 0x49ec) = uVar29 | 0x10;
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x966) = *(byte *)(param_1 + 0x966) | 2;
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4adc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4adc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651700(plVar14,3);
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_plus");
  FUN_10064e47c(0x42c80000,0x42c80000,plVar20);
  FUN_100652cac(param_1 + 0xed9,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x43480000,0x43480000,param_1 + 0xed9);
  uVar28 = FUN_100345b94();
  uVar28 = FUN_10034c450(uVar28,"*PlayerEssenceEffects*");
  FUN_1001aa350(plVar22,uVar28);
  FUN_10064e47c(0x43480000,0x43480000,plVar22);
  pcStack_a8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe74] + 0x28))(plVar22,&pcStack_a8);
  if ((*(float *)(param_1 + 0xe7d) != 1.5) || (*(float *)((long)param_1 + 0x73ec) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0xe7d] = lVar30;
    FUN_1000200a0(plVar22);
  }
  FUN_1001aaebc(plVar22);
  FUN_1001aae30(plVar22,"ESSENCE_ICON");
  FUN_10064e47c(0x43480000,0x43480000,plVar23);
  FUN_100651594(plVar24,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1004e3120(&pcStack_a8,"1300");
  FUN_1006513c0(plVar24,&pcStack_a8);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  FUN_100655990(plVar5,0);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42c80000,0x42c80000,0x447a0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = uVar25;
  pcStack_a8 = FUN_1002daef4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x990,&pcStack_a8);
  FUN_100651038(param_1 + 0xa72,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100181c68(0x430c0000,plVar15);
  FUN_1001b495c(0xbf800000,plVar15);
  FUN_100651038(plVar17,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar17,uVar28);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x42480000,0x42480000,plVar18);
  FUN_100651038(plVar19,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1004e3120(&pcStack_a8,"0");
  FUN_1006513c0(plVar19,&pcStack_a8);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) | 0x10;
  uStack_80 = DAT_101dbd48c;
  pcStack_a8 = thunk_FUN_1002db898;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&pcStack_a8);
  uStack_80 = DAT_101dbd460;
  pcStack_a8 = thunk_FUN_1002db898;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&pcStack_a8);
  *(uint *)((long)param_1 + 0x327c) = *(uint *)((long)param_1 + 0x327c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7084) = *(uint *)((long)param_1 + 0x7084) & 0xfffffffb;
  iVar26 = FUN_100131560();
  if (iVar26 != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb;
  }
  return param_1;
}


```

### FUN_1002db064

```c

void FUN_1002db064(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar1 = param_3 + 0x390;
    uVar7 = FUN_10065317c(lVar1);
    if (*(byte *)(param_3 + 0x804c) == 0) {
      bVar5 = *(char *)(param_3 + 0x804d) != '\0';
    }
    else {
      bVar5 = false;
    }
    FUN_1001b4c0c(param_3 + 0x3280,bVar5);
    *(uint *)(param_3 + 0x414) =
         *(uint *)(param_3 + 0x414) & 0xffffffef | (uint)*(byte *)(param_3 + 0x804c) << 4;
    if (*(float *)(param_3 + 0x323c) != 0.0) {
      *(undefined4 *)(param_3 + 0x323c) = 0;
      FUN_1000200a0(param_3 + 0x31f8);
    }
    local_58 = FUN_10065317c(lVar1);
    uStack_54 = param_2;
    FUN_10064e48c(param_3 + 0x3058,&local_58);
    fVar8 = 0.0;
    FUN_10064e5ec(0,0,param_3 + 0x3058,6,lVar1,6);
    if (*(char *)(param_3 + 0x804d) != '\0') {
      FUN_10064e72c(0xc1200000,param_3 + 0x77b8,0,param_3 + 0x7580,2);
      FUN_10064e72c(0,param_3 + 0x77b8,4,param_3 + 0x7580,4);
      lVar2 = param_3 + 0x7248;
      FUN_1006557ec(lVar2);
      FUN_10064e68c(0,0,param_3 + 0x73a0,8);
      lVar3 = param_3 + 0x7f50;
      FUN_10064e47c(0x43910000,0x43a00000,lVar3);
      lVar4 = param_3 + 0x7158;
      FUN_10064e72c(0x43250000,lVar4,3,lVar3,1);
      FUN_10064e72c(0xc2200000,lVar4,5,lVar3,5);
      FUN_10064e72c(0x41200000,lVar2,3,lVar4,1);
      FUN_10064e72c(0,lVar2,5,lVar4,5);
      FUN_1006557ec(param_3 + 0x7000);
      fVar8 = 0.0;
      FUN_10064e5ec(0,0,param_3 + 0x78e8,8,lVar3,8);
    }
    FUN_1002db3dc(param_3);
    lVar2 = param_3 + 0x4c78;
    lVar3 = param_3 + 0x6b58;
    FUN_10064e72c(0x80000000,lVar2,2,lVar3,0);
    FUN_10064e72c(0,lVar2,4,lVar3,4);
    FUN_10064e72c(0xc2dc0000,param_3 + 0x7000,2,lVar2,0);
    FUN_10064e72c(0x428c0000,param_3 + 0x7000,4,lVar2,4);
    lVar4 = param_3 + 0x4b48;
    FUN_100651708((float)uVar7 + -60.0,lVar4,1);
    FUN_10064e72c(0xc3d20000,lVar4,2,lVar2,0);
    FUN_10064e72c(0,lVar4,4,lVar2,4);
    FUN_10064eb7c(lVar4,4,lVar3,6);
    lVar2 = param_3 + 0x4968;
    FUN_10064e47c(uVar7,fVar8 + 70.0,lVar2);
    FUN_10064e5ec(0,0,lVar2,6,lVar1,6);
    FUN_10064e47c(uVar7,0x42700000,param_3 + 0x4a58);
    FUN_10064e5ec(0,0,param_3 + 0x4a58,6,lVar2,4);
  }
  return;
}


```

#### Callers:

- `FUN_1002dc200` @ `0x1002dc200` (from `0x1002dc5b0`)

#### Caller: `FUN_1002dc200` @ `0x1002dc200`

```c

void FUN_1002dc200(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  
  local_68 = (float)(**(code **)(*param_3 + 0x48))();
  local_68 = local_68 + -12.0;
  fStack_64 = param_2 + -12.0;
  plVar1 = param_3 + 0x72;
  FUN_10064e48c(plVar1,&local_68);
  plVar2 = param_3 + 0x54;
  fVar10 = fStack_64 + 6.0;
  FUN_10064e47c(local_68 + 6.0,fVar10,plVar2);
  fVar8 = (float)FUN_100652e60(plVar2);
  FUN_100652e60(plVar2);
  FUN_1006525c4(0x41a00000,fVar8 + -4.0,0x41a00000,0x41a00000,fVar10 + -4.0,0x41a00000,
                param_3 + 0x2a);
  FUN_10064e47c(local_68,fStack_64 * 0.5,param_3 + 0x90);
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  FUN_10064e5ec(0,0,plVar2,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x2a,8,param_3,8);
  uVar9 = 0;
  FUN_10064e5ec(0,param_3 + 0x90,3,plVar1,3);
  plVar2 = param_3 + 0x650;
  if (*(char *)(param_3[0x1008] + 0x34) == '\0') {
    uVar7 = (uint)(*(int *)(param_3[0x1008] + 0x20) != 0) << 2;
  }
  else {
    uVar7 = 0;
  }
  *(uint *)((long)param_3 + 0x3304) = *(uint *)((long)param_3 + 0x3304) & 0xfffffffb | uVar7;
  if ((*(float *)(param_3 + 0x659) != 1.3) || (*(float *)((long)param_3 + 0x32cc) != 1.3)) {
    param_3[0x659] = 0x3fa666663fa66666;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_3 + 0xea;
  if ((*(float *)(param_3 + 0xf3) != 1.3) || (*(float *)((long)param_3 + 0x79c) != 1.3)) {
    param_3[0xf3] = 0x3fa666663fa66666;
    FUN_1000200a0(plVar3);
  }
  FUN_10064e72c(0x42700000,plVar3,3,plVar2,1);
  FUN_10064e72c(0,plVar3,5,plVar2,5);
  uVar7 = *(uint *)((long)param_3 + 0x3304);
  *(uint *)((long)param_3 + 0x3304) = uVar7 & 0xffffff80 | uVar7 & 0x3f | (uVar7 >> 2 & 1) << 6;
  plVar4 = param_3 + 0x907;
  local_70 = FUN_1006511d0(plVar4);
  uStack_6c = uVar9;
  FUN_10064e48c(plVar4,&local_70);
  uVar9 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10065179c(uVar9,0,0x3f800000,plVar4);
  FUN_10064e72c(0x41400000,plVar4,0,plVar2,2);
  FUN_10064e72c(0,plVar4,4,plVar2,4);
  uVar7 = *(uint *)((long)param_3 + 0x74c);
  *(uint *)((long)param_3 + 0x74c) = uVar7 & 0xffffff80 | uVar7 & 0x3f | (uVar7 >> 2 & 1) << 6;
  plVar2 = param_3 + 0x576;
  uVar7 = *(byte *)((long)param_3 + 0x9b4) & 0x10;
  *(uint *)((long)param_3 + 0x2c34) =
       *(uint *)((long)param_3 + 0x2c34) & 0xffffff80 |
       *(uint *)((long)param_3 + 0x2c34) & 0x3b | uVar7 >> 2 | (uVar7 >> 4) << 6;
  plVar5 = param_3 + 0x5c7;
  plVar6 = param_3 + 0x5a1;
  FUN_10064e72c(0x41400000,plVar5,3,plVar6,1);
  FUN_10064e72c(0,plVar5,5,plVar6,5);
  FUN_10064e72c(0x40c00000,param_3 + 0x5e5,3,plVar5,1);
  FUN_10064e72c(0,param_3 + 0x5e5,5,plVar5,5);
  FUN_1006557ec(plVar2);
  FUN_10064e72c(0x41400000,plVar2,0,plVar3,2);
  FUN_10064e72c(0,plVar2,4,plVar3,4);
  FUN_1006557ec(param_3 + 0xae);
  if ((*(byte *)((long)param_3 + 0x2c34) >> 2 & 1) != 0) {
    FUN_10064e72c(0,plVar4,5,plVar6,5);
  }
  FUN_1002db064(param_3);
  FUN_10064e5ec(0,0xc1c00000,param_3 + 0xae,6,plVar1,6);
  return;
}


```

### FUN_1002db580

```c

void FUN_1002db580(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    FUN_1000eb30c(param_2,param_1 + 0xea);
    lVar2 = FUN_1000eb494(param_2);
    if (lVar2 != 0) {
      FUN_100652cdc(param_1 + 0x5c7,lVar2);
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    FUN_1006513c0(param_1 + 0x5e5,auStack_40);
    (**(code **)(*param_1 + 0x138))(param_1);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}


```

#### Callers:

- `FUN_10020a080` @ `0x10020a080` (from `0x10020a208`)

#### Caller: `FUN_10020a080` @ `0x10020a080`

```c

void FUN_10020a080(long param_1)

{
  size_t sVar1;
  undefined8 ******ppppppuVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined8 *****local_78;
  size_t local_70;
  byte local_61;
  int local_60;
  int local_5c;
  int local_58;
  
  uVar5 = FUN_100131560();
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar6 = FUN_10032c190();
  if (*(char *)(lVar6 + 0x38) == '\0') {
    return;
  }
  FUN_10001549c(&local_78,**(undefined8 **)(param_1 + 0x48));
  lVar6 = FUN_10032c624(&local_78);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  if (lVar6 == 0) {
    return;
  }
  iVar4 = FUN_10032c944(lVar6);
  if (iVar4 != 0) {
    FUN_1002db524(*(undefined8 *)(param_1 + 8));
    goto LAB_10020a21c;
  }
  FUN_10032c3d4(&local_78,lVar6);
  uVar5 = (ulong)local_61;
  if (-1 < (char)local_61) {
    local_70 = uVar5;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_70 == sVar1) {
    ppppppuVar2 = (undefined8 ******)local_78;
    if (-1 < (char)local_61) {
      ppppppuVar2 = &local_78;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)local_61 < '\0') {
      if ((local_70 != 0) && (iVar4 = _memcmp(ppppppuVar2,pbVar9,local_70), iVar4 != 0))
      goto LAB_10020a1a4;
    }
    else if (local_70 != 0) {
      if ((uint)*pbVar9 == ((uint)local_78 & 0xff)) {
        pbVar8 = (byte *)((ulong)&local_78 | 1);
        do {
          uVar5 = uVar5 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar5 == 0) goto LAB_10020a1b8;
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 == *pbVar9);
      }
      goto LAB_10020a1a4;
    }
LAB_10020a1b8:
    FUN_1002db4bc(*(undefined8 *)(param_1 + 8),0);
  }
  else {
LAB_10020a1a4:
    if (local_60 == 0) {
      if (local_58 != 0) {
        lVar6 = FUN_10015d3ec();
        lVar7 = 0x545c;
        goto LAB_10020a1ec;
      }
      if (local_5c != 0) {
        lVar6 = FUN_10015d3ec();
        lVar7 = 0x5454;
        goto LAB_10020a1ec;
      }
      uVar10 = 0;
    }
    else {
      lVar6 = FUN_10015d3ec();
      lVar7 = 0x5450;
LAB_10020a1ec:
      uVar10 = *(undefined4 *)(lVar6 + lVar7);
    }
    FUN_1002db4bc(*(undefined8 *)(param_1 + 8),1);
    FUN_1002db580(*(undefined8 *)(param_1 + 8),&local_78,uVar10);
  }
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
LAB_10020a21c:
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}


```

### FUN_1002db954

```c

void FUN_1002db954(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  
  FUN_100642324(param_2);
  if ((~*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x7f80;
    FUN_1000200a0(param_2);
  }
  uVar2 = FUN_100640840(0,0x3ecccccd,FUN_10001f4ac);
  FUN_1006409b4(0,0x41a00000,0x3ecccccd,FUN_10001f4ac);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 != 0xffff) {
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar4 = (undefined8 *)FUN_10063ee9c();
    *puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_100642b7c(param_2,uVar3);
  return;
}


```

#### Callers:

- `FUN_1002db898` @ `0x1002db898` (from `0x1002db8c8`)

#### Caller: `FUN_1002db898` @ `0x1002db898`

```c

void FUN_1002db898(long *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x804c) = 0;
  uVar1 = (**(code **)(*param_1 + 0x138))();
  uVar1 = FUN_1002db954(uVar1,param_1 + 0x63f);
  FUN_1002db954(uVar1,param_1 + 0xe00);
  uVar1 = FUN_100640db8(0,0,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xe74,uVar1);
  if ((~*(uint *)((long)param_1 + 0x5f4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) | 0x7f80;
    FUN_1000200a0(param_1 + 0xae);
  }
  uVar1 = FUN_100640840(0x3f800000,0x3ecccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0xae,uVar1);
  return;
}


```

### FUN_1002e76d8

```c

void FUN_1002e76d8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68;
  float fStack_64;
  
  lVar1 = param_3 + 0x158;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = (float)param_2;
  FUN_10064e48c(param_3 + 0x2f8,&local_68);
  lVar3 = param_3 + 0x16d0;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x1870,&local_68);
  iVar5 = FUN_100131560();
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = 4;
  }
  *(uint *)(param_3 + 0x1754) = *(uint *)(param_3 + 0x1754) & 0xfffffffb | uVar6;
  lVar2 = param_3 + 1000;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar2,&local_68);
  local_68 = FUN_10064e3cc(lVar2);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x588,&local_68);
  lVar4 = param_3 + 0x1588;
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar4,&local_68);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_10064e3cc(lVar1);
  FUN_1002e69b4(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x148))();
  lVar1 = param_3 + 0x1a50;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_10064e5ec(0x41f00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_10064e72c(0,uVar7,0,lVar4,2);
  FUN_10064e72c(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_10064e3cc(lVar2);
  fVar8 = fVar9;
  FUN_10064e3cc(lVar4);
  fVar8 = (fVar9 + -80.0) - fVar8;
  FUN_10064e47c(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_100532138(lVar1);
  FUN_10064e3cc(lVar4);
  FUN_10064e5ec(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_1000200a0(param_3 + 0x588);
  }
  return;
}


```

#### Callers:

*No callers found*

## 10. __DATA fptr Search

Looking for function pointers in __DATA.__const for key functions.

- FUN_10051abec: fptr at g_base+0x149e9d8 (10149e9d8)
- FUN_100212ff8: NO __DATA fptr
- FUN_1005028f8: fptr at g_base+0x149e938 (10149e938)
- FUN_1004fdaf0: fptr at g_base+0x149e788 (10149e788)
- FUN_1002d8918: NO __DATA fptr
- FUN_1002d90c8: NO __DATA fptr
- FUN_1002da05c: fptr at g_base+0x14890f0 (1014890f0)
- FUN_1002da328: NO __DATA fptr
- FUN_1002db064: NO __DATA fptr
- FUN_1002db580: NO __DATA fptr
- FUN_1002db954: NO __DATA fptr
- FUN_1002e76d8: fptr at g_base+0x148a780 (10148a780)

## 11. Disassembly around post_match branch (0x10051b910)

```asm
0x10051b900:  str w8,[x19, #0x50]  
0x10051b904:  mov w8,#0x7  
0x10051b908:  b 0x10051b940  
0x10051b90c:  adrp x1,0x10141c000  
0x10051b910:  add x1,x1,#0xa66  
0x10051b914:  add x0,sp,#0x28  
0x10051b918:  bl 0x1004e3120  <-- CALL
0x10051b91c:  add x0,sp,#0x18  
0x10051b920:  add x1,sp,#0x28  
0x10051b924:  bl 0x1004e3654  <-- CALL
0x10051b928:  mov x20,x0  
0x10051b92c:  ldr x0,[sp, #0x30]  
0x10051b930:  cbz x0,0x10051b938  
0x10051b934:  bl 0x101148d68  <-- CALL
0x10051b938:  cbz w20,0x10051b944  
0x10051b93c:  mov w8,#0x8  
0x10051b940:  str w8,[x19, #0xa0]  
0x10051b944:  ldr x0,[sp, #0x20]  
0x10051b948:  cbz x0,0x10051b950  
0x10051b94c:  bl 0x101148d68  <-- CALL
0x10051b950:  mov w8,#0x1  
0x10051b954:  strb w8,[x19, #0xf8]  
0x10051b958:  mov w0,#0x1  
0x10051b95c:  ldp x29,x30,[sp, #0x80]  
0x10051b960:  ldp x20,x19,[sp, #0x70]  
0x10051b964:  ldp x22,x21,[sp, #0x60]  
0x10051b968:  ldp x24,x23,[sp, #0x50]  
0x10051b96c:  ldp d9,d8,[sp, #0x40]  
0x10051b970:  add sp,sp,#0x90  
0x10051b974:  ret  
0x10051b978:  stp x20,x19,[sp, #-0x20]!  
0x10051b97c:  stp x29,x30,[sp, #0x10]  
0x10051b980:  add x29,sp,#0x10  
0x10051b984:  mov x19,x1  
0x10051b988:  mov x20,x0  
0x10051b98c:  ldp w8,w9,[x0]  
0x10051b990:  cmp w8,w9  
0x10051b994:  b.ne 0x10051b9d4  
0x10051b998:  add w9,w8,#0x1  
0x10051b99c:  cmn w8,#0x1  
0x10051b9a0:  mvn w10,w8  
0x10051b9a4:  orr w10,w10,#0xfffffff0  
0x10051b9a8:  add w10,w8,w10  
0x10051b9ac:  add w10,w10,#0x11  
0x10051b9b0:  csel w10,wzr,w10,eq  
0x10051b9b4:  lsl w11,w8,#0x1  
0x10051b9b8:  cmp w8,#0x1f  
0x10051b9bc:  csel w8,w10,w11,hi  
0x10051b9c0:  cmp w8,w9  
0x10051b9c4:  csel w1,w9,w8,cc  
0x10051b9c8:  mov x0,x20  
0x10051b9cc:  bl 0x100524af0  <-- CALL
0x10051b9d0:  ldr w8,[x20]  
0x10051b9d4:  add w8,w8,#0x1  
0x10051b9d8:  str w8,[x20]  
0x10051b9dc:  ldr x9,[x20, #0x8]  
0x10051b9e0:  mov w10,#0x38  
0x10051b9e4:  umaddl x20,w8,w10,x9  
0x10051b9e8:  sub x0,x20,#0x38  
0x10051b9ec:  mov x1,x19  
0x10051b9f0:  bl 0x10003330c  <-- CALL
0x10051b9f4:  ldr w8,[x19, #0x18]  
0x10051b9f8:  stur w8,[x20, #-0x20]  
0x10051b9fc:  sub x0,x20,#0x18  
0x10051ba00:  add x1,x19,#0x20  
0x10051ba04:  ldp x29,x30,[sp, #0x10]  
0x10051ba08:  ldp x20,x19,[sp], #0x20  
0x10051ba0c:  b 0x10003330c  <-- CALL
0x10051ba10:  sub sp,sp,#0x50  
0x10051ba14:  stp x22,x21,[sp, #0x20]  
0x10051ba18:  stp x20,x19,[sp, #0x30]  
0x10051ba1c:  stp x29,x30,[sp, #0x40]  
0x10051ba20:  add x29,sp,#0x40  
0x10051ba24:  mov x19,x1  
0x10051ba28:  mov x20,x0  
0x10051ba2c:  mov w22,#0x5  
0x10051ba30:  movk w22,#0x10, LSL #16  
0x10051ba34:  adrp x21,0x1013d2000  
0x10051ba38:  add x21,x21,#0x4d0  
0x10051ba3c:  mov x1,x21  
0x10051ba40:  bl 0x1000e86c0  <-- CALL
0x10051ba44:  ldr x8,[x20]  
0x10051ba48:  ldr w9,[x20, #0x8]  
0x10051ba4c:  mov w10,#0x30  
0x10051ba50:  madd x8,x9,x10,x8  
0x10051ba54:  cmp x8,x0  
0x10051ba58:  b.eq 0x10051ba7c  
0x10051ba5c:  mov w8,#0x4  
0x10051ba60:  str w22,[sp, #0x18]  
0x10051ba64:  stp x21,x8,[sp, #0x8]  
0x10051ba68:  add x1,sp,#0x8  
0x10051ba6c:  mov x0,x20  
0x10051ba70:  bl 0x1000e87dc  <-- CALL
0x10051ba74:  ldrb w8,[x0, #0x11]  
0x10051ba78:  tbnz w8,#0x2,0x10051ba84  
0x10051ba7c:  mov w8,#0x0  
```


## 12. BL targets from post_match block (0x10051b910–0x10051ba80)

- 0x10051b918 → `FUN_1004e3120` @ `0x1004e3120`
- 0x10051b924 → `FUN_1004e3654` @ `0x1004e3654`
- 0x10051b934 → `operator.delete[]` @ `0x101148d68`
- 0x10051b94c → `operator.delete[]` @ `0x101148d68`
- 0x10051b9cc → `FUN_100524af0` @ `0x100524af0`
- 0x10051b9f0 → `FUN_10003330c` @ `0x10003330c`
- 0x10051ba0c → `FUN_10003330c` @ `0x10003330c`
- 0x10051ba40 → `FUN_1000e86c0` @ `0x1000e86c0`
- 0x10051ba70 → `FUN_1000e87dc` @ `0x1000e87dc`
