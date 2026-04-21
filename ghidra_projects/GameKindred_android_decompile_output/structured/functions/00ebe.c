// functions/00ebe — 4 functions
#include "libGameKindred.h"




void * FUN_00ebe028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00941528(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x50);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x40) = 0;
    *(undefined8 *)((long)pvVar4 + 0x48) = 0;
    *(undefined8 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_00941654(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




void FUN_00ebe0dc(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        *(undefined1 *)((long)pvVar7 + 0x1c) = *(undefined1 *)((long)pvVar4 + 0x1c);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




undefined1  [16] FUN_00ebe1bc(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(int *)((long)puVar3 + 0x1c)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_00ebe234;
      }
      if (*param_2 <= *(int *)((long)puVar3 + 0x1c)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_00ebe234:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x28);
    *(undefined4 *)((long)pvVar5 + 0x1c) = *(undefined4 *)*param_4;
    *(undefined4 *)((long)pvVar5 + 0x20) = 0;
    FUN_00a08dd8(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




undefined8 FUN_00ebe28c(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  char *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_2,"playerInfo");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_70 = "playerInfo";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0xa;
    plVar4 = (long *)FUN_008feca4(param_2,&local_70);
    local_60 = 0x100005;
    local_70 = "handle";
    local_68 = (undefined1 *)0x6;
    plVar5 = (long *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
      plVar5 = (long *)*plVar5;
    }
    FUN_00e705a0(param_1 + 0xe0,plVar5);
    lVar3 = FUN_008fd190(plVar4,"completed");
    dVar13 = 0.0;
    dVar12 = 0.0;
    if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
      local_70 = "completed";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0x9;
      FUN_008feca4(plVar4,&local_70);
      dVar12 = (double)FUN_008fc0f0();
    }
    *(int *)(param_1 + 0xf4) = (int)dVar12;
    lVar3 = FUN_008fd190(plVar4,&DAT_01b964d3);
    if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
      local_70 = "wins";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0x4;
      FUN_008feca4(plVar4,&local_70);
      dVar13 = (double)FUN_008fc0f0();
    }
    *(int *)(param_1 + 0xf8) = (int)dVar13;
    lVar3 = FUN_008fd190(plVar4,"completed_non_tutorial");
    if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
      uVar10 = 0;
    }
    else {
      local_70 = "completed_non_tutorial";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0x16;
      puVar6 = (undefined4 *)FUN_008feca4(plVar4,&local_70);
      uVar10 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0xf0) = uVar10;
  }
  lVar3 = FUN_008fd190(param_2,"state");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) goto LAB_00ebf0cc;
  FUN_00e70510(&local_80);
  local_70 = "state";
  local_60 = 0x100005;
  local_68 = (undefined1 *)0x5;
  plVar4 = (long *)FUN_008feca4(param_2,&local_70);
  if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
    plVar4 = (long *)*plVar4;
  }
  FUN_00e705a0(&local_80,plVar4);
  lVar3 = FUN_008fd190(param_2,"pendingPartyInvites");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_70 = "pendingPartyInvites";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0x13;
    piVar7 = (int *)FUN_008feca4(param_2,&local_70);
    bVar2 = *piVar7 != 0;
  }
  *(bool *)(param_1 + 0xfc) = bVar2;
  lVar3 = FUN_008fd190(param_2,"pendingMessages");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_70 = "pendingMessages";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0xf;
    piVar7 = (int *)FUN_008feca4(param_2,&local_70);
    bVar2 = *piVar7 != 0;
  }
  *(bool *)(param_1 + 0xfd) = bVar2;
  lVar3 = FUN_008fd190(param_2,"pendingGuildInvites");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_70 = "pendingGuildInvites";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0x13;
    piVar7 = (int *)FUN_008feca4(param_2,&local_70);
    bVar2 = *piVar7 != 0;
  }
  *(bool *)(param_1 + 0xfe) = bVar2;
  lVar3 = FUN_008fd190(param_2,"pendingTeamInvites");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_70 = "pendingTeamInvites";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0x12;
    piVar7 = (int *)FUN_008feca4(param_2,&local_70);
    bVar2 = *piVar7 != 0;
  }
  *(bool *)(param_1 + 0xff) = bVar2;
  local_60 = 0x100005;
  local_70 = "ttl";
  local_68 = (undefined1 *)0x3;
  FUN_008feca4(param_2,&local_70);
  dVar12 = (double)FUN_008fc0f0();
  *(float *)(param_1 + 8) = (float)dVar12;
  FUN_00e70314(param_1 + 0x10);
  lVar3 = FUN_008fd190(param_2,"matchId");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "matchId";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0x7;
    puVar8 = (undefined8 *)FUN_008feca4(param_2,&local_70);
    if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  FUN_008fa54c(&local_70,puVar8);
  FUN_008fce60(param_1 + 0xb0,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(param_2,"spectatorId");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    puVar8 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "spectatorId";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0xb;
    puVar8 = (undefined8 *)FUN_008feca4(param_2,&local_70);
    if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  FUN_008fa54c(&local_70,puVar8);
  FUN_008fce60(param_1 + 200,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(param_2,"estimatedWait");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    uVar10 = 0xffffffff;
  }
  else {
    local_70 = "estimatedWait";
    local_60 = 0x100005;
    local_68 = (undefined1 *)0xd;
    puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
    uVar10 = *puVar6;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar10;
  lVar3 = FUN_008fd190(param_2,"qbanLevel");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
    FUN_008fce60(param_1 + 0x110,&DAT_0320ffa8);
    FUN_008fce60(param_1 + 0x128,&DAT_0320ffa8);
    *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x14c) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  else {
    lVar3 = FUN_008fd190(param_2,"qbanPlayer");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_00ebe858:
      puVar8 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_70 = "qbanPlayer";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0xa;
      lVar3 = FUN_008feca4(param_2,&local_70);
      if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00ebe858;
      local_70 = "qbanPlayer";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0xa;
      puVar8 = (undefined8 *)FUN_008feca4(param_2,&local_70);
      if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
        puVar8 = (undefined8 *)*puVar8;
      }
    }
    FUN_008fa54c(&local_70,puVar8);
    FUN_008fce60(param_1 + 0x110,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    lVar3 = FUN_008fd190(param_2,"qbanPlayerHandle");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_00ebe8d4:
      puVar8 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_70 = "qbanPlayerHandle";
      local_60 = 0x100005;
      local_68 = &DAT_00000010;
      lVar3 = FUN_008feca4(param_2,&local_70);
      if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00ebe8d4;
      local_70 = "qbanPlayerHandle";
      local_60 = 0x100005;
      local_68 = &DAT_00000010;
      puVar8 = (undefined8 *)FUN_008feca4(param_2,&local_70);
      if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
        puVar8 = (undefined8 *)*puVar8;
      }
    }
    FUN_008fa54c(&local_70,puVar8);
    FUN_008fce60(param_1 + 0x128,&local_70);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    lVar3 = FUN_008fd190(param_2,"qbanLevel");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_00ebe950:
      uVar10 = 0xffffffff;
    }
    else {
      local_70 = "qbanLevel";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0x9;
      lVar3 = FUN_008feca4(param_2,&local_70);
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_00ebe950;
      local_70 = "qbanLevel";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0x9;
      puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
      uVar10 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0x140) = uVar10;
    lVar3 = FUN_008fd190(param_2,"qbanTime");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      uVar10 = 0;
    }
    else {
      local_70 = "qbanTime";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0x8;
      lVar3 = FUN_008feca4(param_2,&local_70);
      uVar10 = 0;
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
        local_70 = "qbanTime";
        local_60 = 0x100005;
        local_68 = (undefined1 *)0x8;
        puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
        uVar10 = *puVar6;
      }
    }
    *(undefined4 *)(param_1 + 0x144) = uVar10;
    lVar3 = FUN_008fd190(param_2,"qbanEndTime");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      uVar11 = 0;
    }
    else {
      local_70 = "qbanEndTime";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0xb;
      lVar3 = FUN_008feca4(param_2,&local_70);
      uVar11 = 0;
      if ((*(byte *)(lVar3 + 0x11) >> 4 & 1) != 0) {
        local_70 = "qbanEndTime";
        local_60 = 0x100005;
        local_68 = (undefined1 *)0xb;
        puVar8 = (undefined8 *)FUN_008feca4(param_2,&local_70);
        uVar11 = *puVar8;
      }
    }
    *(undefined8 *)(param_1 + 0x148) = uVar11;
    lVar3 = FUN_008fd190(param_2,"qbanPoints");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      uVar10 = 0;
    }
    else {
      local_70 = "qbanPoints";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0xa;
      lVar3 = FUN_008feca4(param_2,&local_70);
      uVar10 = 0;
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
        local_70 = "qbanPoints";
        local_60 = 0x100005;
        local_68 = (undefined1 *)0xa;
        puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
        uVar10 = *puVar6;
      }
    }
    *(undefined4 *)(param_1 + 0x150) = uVar10;
    lVar3 = FUN_008fd190(param_2,"qbanMaxPoints");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      uVar10 = 0;
    }
    else {
      local_70 = "qbanMaxPoints";
      local_60 = 0x100005;
      local_68 = (undefined1 *)0xd;
      lVar3 = FUN_008feca4(param_2,&local_70);
      uVar10 = 0;
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
        local_70 = "qbanMaxPoints";
        local_60 = 0x100005;
        local_68 = (undefined1 *)0xd;
        puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
        uVar10 = *puVar6;
      }
    }
    *(undefined4 *)(param_1 + 0x154) = uVar10;
  }
  FUN_00e705c8(&local_70,"None");
  uVar9 = FUN_00e70b34(&local_80,&local_70);
  if ((uVar9 & 1) == 0) {
    FUN_00e705c8(&local_90,"menus");
    uVar9 = FUN_00e70b34(&local_80,&local_90);
    uVar9 = uVar9 & 0xffffffff;
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
  }
  else {
    uVar9 = 1;
  }
  if (local_68 != (undefined1 *)0x0) {
    operator_delete__(local_68);
    local_70 = (char *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  if ((uVar9 & 1) == 0) {
    FUN_00e705c8(&local_70,"pending_auto");
    uVar9 = FUN_00e70b34(&local_80,&local_70);
    if (local_68 != (undefined1 *)0x0) {
      operator_delete__(local_68);
      local_70 = (char *)0x0;
      local_68 = (undefined1 *)0x0;
    }
    if ((uVar9 & 1) != 0) {
      uVar10 = 2;
      goto LAB_00ebf0b8;
    }
    FUN_00e705c8(&local_70,"pending_custom");
    uVar9 = FUN_00e70b34(&local_80,&local_70);
    if (local_68 != (undefined1 *)0x0) {
      operator_delete__(local_68);
      local_70 = (char *)0x0;
      local_68 = (undefined1 *)0x0;
    }
    if ((uVar9 & 1) != 0) {
      uVar10 = 3;
      goto LAB_00ebf0b8;
    }
    FUN_00e705c8(&local_70,"matched_partners");
    uVar9 = FUN_00e70b34(&local_80,&local_70);
    if (local_68 != (undefined1 *)0x0) {
      operator_delete__(local_68);
      local_70 = (char *)0x0;
      local_68 = (undefined1 *)0x0;
    }
    if ((uVar9 & 1) != 0) {
      local_60 = 0x100005;
      local_70 = "numQueuedEntries";
      local_68 = &DAT_00000010;
      puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
      *(undefined4 *)(param_1 + 0x108) = *puVar6;
      uVar10 = 4;
      goto LAB_00ebf0b8;
    }
    FUN_00e705c8(&local_70,"match_pending");
    uVar9 = FUN_00e70b34(&local_80,&local_70);
    if (local_68 != (undefined1 *)0x0) {
      operator_delete__(local_68);
      local_70 = (char *)0x0;
      local_68 = (undefined1 *)0x0;
    }
    if ((uVar9 & 1) != 0) {
      uVar10 = 5;
      goto LAB_00ebf0b8;
    }
    FUN_00e705c8(&local_70,"playing");
    uVar9 = FUN_00e70b34(&local_80,&local_70);
    if (local_68 != (undefined1 *)0x0) {
      operator_delete__(local_68);
      local_70 = (char *)0x0;
      local_68 = (undefined1 *)0x0;
    }
    if ((uVar9 & 1) != 0) {
      local_60 = 0x100005;
      local_70 = "host";
      local_68 = (undefined1 *)0x4;
      plVar4 = (long *)FUN_008feca4(param_2,&local_70);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
      FUN_008fa54c(&local_70,plVar4);
      FUN_008fce60(param_1 + 0x20,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_5c,local_60));
      }
      local_60 = 0x100005;
      local_70 = "port";
      local_68 = (undefined1 *)0x4;
      puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
      *(undefined4 *)(param_1 + 0x38) = *puVar6;
      lVar3 = FUN_008fd190(param_2,"proxy_host");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
        local_70 = "proxy_host";
        local_60 = 0x100005;
        local_68 = (undefined1 *)0xa;
        plVar4 = (long *)FUN_008feca4(param_2,&local_70);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_70,plVar4);
        FUN_008fce60(param_1 + 0x40,&local_70);
        if (((ulong)local_70 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_5c,local_60));
        }
        local_60 = 0x100005;
        local_70 = "proxy_port";
        local_68 = (undefined1 *)0xa;
        puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
        *(undefined4 *)(param_1 + 0x58) = *puVar6;
      }
      uVar10 = 6;
      goto LAB_00ebf0b8;
    }
    FUN_00e705c8(&local_70,"spectating");
    uVar9 = FUN_00e70b34(&local_80,&local_70);
    if (local_68 != (undefined1 *)0x0) {
      operator_delete__(local_68);
      local_70 = (char *)0x0;
      local_68 = (undefined1 *)0x0;
    }
    if ((uVar9 & 1) != 0) {
      local_60 = 0x100005;
      local_70 = "host";
      local_68 = (undefined1 *)0x4;
      plVar4 = (long *)FUN_008feca4(param_2,&local_70);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
      FUN_008fa54c(&local_70,plVar4);
      FUN_008fce60(param_1 + 0x20,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_5c,local_60));
      }
      local_60 = 0x100005;
      local_70 = "port";
      local_68 = (undefined1 *)0x4;
      puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
      *(undefined4 *)(param_1 + 0x38) = *puVar6;
      lVar3 = FUN_008fd190(param_2,"proxy_host");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
        local_70 = "proxy_host";
        local_60 = 0x100005;
        local_68 = (undefined1 *)0xa;
        plVar4 = (long *)FUN_008feca4(param_2,&local_70);
        if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
          plVar4 = (long *)*plVar4;
        }
        FUN_008fa54c(&local_70,plVar4);
        FUN_008fce60(param_1 + 0x40,&local_70);
        if (((ulong)local_70 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_5c,local_60));
        }
        local_60 = 0x100005;
        local_70 = "proxy_port";
        local_68 = (undefined1 *)0xa;
        puVar6 = (undefined4 *)FUN_008feca4(param_2,&local_70);
        *(undefined4 *)(param_1 + 0x58) = *puVar6;
      }
      uVar10 = 7;
      goto LAB_00ebf0b8;
    }
    FUN_00e705c8(&local_70,"post_match");
    uVar9 = FUN_00e70b34(&local_80,&local_70);
    if (local_68 != (undefined1 *)0x0) {
      operator_delete__(local_68);
      local_70 = (char *)0x0;
      local_68 = (undefined1 *)0x0;
    }
    if ((uVar9 & 1) != 0) {
      uVar10 = 8;
      goto LAB_00ebf0b8;
    }
  }
  else {
    uVar10 = 1;
LAB_00ebf0b8:
    *(undefined4 *)(param_1 + 0xa8) = uVar10;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
LAB_00ebf0cc:
  *(undefined1 *)(param_1 + 0x100) = 1;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

