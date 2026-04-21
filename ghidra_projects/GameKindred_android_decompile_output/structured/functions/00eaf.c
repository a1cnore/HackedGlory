// functions/00eaf — 6 functions
#include "libGameKindred.h"




void FUN_00eaf1b4(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00952398(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_00952474(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x80 + -0x80,param_2);
  return;
}




void FUN_00eaf23c(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = "code";
  local_60 = 0x100005;
  local_68 = 4;
  puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_70);
  pbVar8 = (byte *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x28) = *puVar3;
  if ((*pbVar8 & 1) == 0) {
    pbVar8[0] = 0;
    pbVar8[1] = 0;
  }
  else {
    **(undefined1 **)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00eaf540;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00eaf540;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar5 = (long *)FUN_008feca4(param_1,&local_70);
  lVar4 = FUN_008fd190(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    bVar2 = false;
  }
  else {
    local_70 = "success";
    local_60 = 0x100005;
    local_68 = 7;
    lVar4 = FUN_008feca4(plVar5,&local_70);
    bVar2 = false;
    if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
      local_70 = "success";
      local_60 = 0x100005;
      local_68 = 7;
      lVar4 = FUN_008feca4(plVar5,&local_70);
      bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x2c) = bVar2;
  lVar4 = FUN_008fd190(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_00eaf3fc:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar4 = FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00eaf3fc;
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x30,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar4 = FUN_008fd190(plVar5,&DAT_01bc5849);
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_70 = "sku";
    local_60 = 0x100005;
    local_68 = 3;
    lVar4 = FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_70 = "sku";
      local_60 = 0x100005;
      local_68 = 3;
      plVar6 = (long *)FUN_008feca4(plVar5,&local_70);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(&local_70,plVar6);
      FUN_008fce60(pbVar8,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_5c,local_60));
      }
    }
  }
  lVar4 = FUN_008fd190(plVar5,"chestContentsString");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_00eaf514:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "chestContentsString";
    local_60 = 0x100005;
    local_68 = 0x13;
    lVar4 = FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00eaf514;
    local_70 = "chestContentsString";
    local_60 = 0x100005;
    local_68 = 0x13;
    puVar7 = (undefined8 *)FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x60,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00eaf540:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eaf5c8(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = "code";
  local_50 = 0x100005;
  local_58 = 4;
  piVar4 = (int *)FUN_008feca4(param_1,&local_60);
  iVar1 = *piVar4;
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(param_2 + 0x50) = 1;
    *(undefined8 *)(param_2 + 0x2c) = 0xffffffff00000001;
    goto LAB_00eaf824;
  }
  local_50 = 0x100005;
  local_60 = "returnValue";
  local_58 = 0xb;
  plVar5 = (long *)FUN_008feca4(param_1,&local_60);
  local_50 = 0x100005;
  local_60 = "status";
  local_58 = 6;
  puVar6 = (undefined4 *)FUN_008feca4(plVar5,&local_60);
  *(undefined4 *)(param_2 + 0x2c) = *puVar6;
  lVar7 = FUN_008fd190(plVar5,"errorCode");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar7) {
    if (*(int *)(param_2 + 0x2c) != 0) {
      uVar10 = 0xffffffff;
      goto LAB_00eaf6ec;
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  else {
    local_60 = "errorCode";
    local_50 = 0x100005;
    local_58 = 9;
    puVar6 = (undefined4 *)FUN_008feca4(plVar5,&local_60);
    uVar10 = *puVar6;
LAB_00eaf6ec:
    *(undefined4 *)(param_2 + 0x30) = uVar10;
  }
  lVar7 = FUN_008fd190(plVar5,"chestsAwarded");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar7) {
LAB_00eaf740:
    puVar9 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "chestsAwarded";
    local_50 = 0x100005;
    local_58 = 0xd;
    lVar7 = FUN_008feca4(plVar5,&local_60);
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_00eaf740;
    local_60 = "chestsAwarded";
    local_50 = 0x100005;
    local_58 = 0xd;
    puVar9 = (undefined8 *)FUN_008feca4(plVar5,&local_60);
    if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
      puVar9 = (undefined8 *)*puVar9;
    }
  }
  FUN_008fa54c(&local_60,puVar9);
  FUN_008fce60(param_2 + 0x38,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar7 = FUN_008fd190(plVar5,"retry");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar7) {
    bVar3 = true;
    if (*(int *)(param_2 + 0x2c) == 1) goto LAB_00eaf7d0;
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  else {
    local_60 = "retry";
    local_50 = 0x100005;
    local_58 = 5;
    lVar7 = FUN_008feca4(plVar5,&local_60);
    bVar3 = *(int *)(lVar7 + 0x10) == 0x102;
LAB_00eaf7d0:
    *(bool *)(param_2 + 0x50) = bVar3;
  }
  lVar7 = FUN_008fd190(plVar5,"receiptData");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar7) {
    local_60 = "receiptData";
    local_50 = 0x100005;
    local_58 = 0xb;
    uVar8 = FUN_008feca4(plVar5,&local_60);
    FUN_00e84028(uVar8,param_2 + 0x58);
  }
LAB_00eaf824:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eaf88c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = "code";
  local_50 = 0x100005;
  local_58 = 4;
  piVar4 = (int *)FUN_008feca4(param_1,&local_60);
  iVar1 = *piVar4;
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    local_50 = 0x100005;
    local_60 = "returnValue";
    local_58 = 0xb;
    plVar5 = (long *)FUN_008feca4(param_1,&local_60);
    local_50 = 0x100005;
    local_60 = "status";
    local_58 = 6;
    puVar6 = (undefined4 *)FUN_008feca4(plVar5,&local_60);
    *(undefined4 *)(param_2 + 0x2c) = *puVar6;
    lVar7 = FUN_008fd190(plVar5,"errorCode");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar7) {
      if (*(int *)(param_2 + 0x2c) != 0) {
        uVar9 = 0xffffffff;
        goto LAB_00eaf9ac;
      }
      *(undefined4 *)(param_2 + 0x30) = 0;
    }
    else {
      local_60 = "errorCode";
      local_50 = 0x100005;
      local_58 = 9;
      puVar6 = (undefined4 *)FUN_008feca4(plVar5,&local_60);
      uVar9 = *puVar6;
LAB_00eaf9ac:
      *(undefined4 *)(param_2 + 0x30) = uVar9;
    }
    lVar7 = FUN_008fd190(plVar5,"chestsAwarded");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar7) {
LAB_00eafa00:
      puVar8 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_60 = "chestsAwarded";
      local_50 = 0x100005;
      local_58 = 0xd;
      lVar7 = FUN_008feca4(plVar5,&local_60);
      if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_00eafa00;
      local_60 = "chestsAwarded";
      local_50 = 0x100005;
      local_58 = 0xd;
      puVar8 = (undefined8 *)FUN_008feca4(plVar5,&local_60);
      if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
        puVar8 = (undefined8 *)*puVar8;
      }
    }
    FUN_008fa54c(&local_60,puVar8);
    FUN_008fce60(param_2 + 0x38,&local_60);
    if (((ulong)local_60 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_4c,local_50));
    }
    lVar7 = FUN_008fd190(plVar5,"retry");
    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar7) {
      bVar3 = true;
      if (*(int *)(param_2 + 0x2c) != 1) {
        *(undefined1 *)(param_2 + 0x50) = 0;
        goto LAB_00eafa94;
      }
    }
    else {
      local_60 = "retry";
      local_50 = 0x100005;
      local_58 = 5;
      lVar7 = FUN_008feca4(plVar5,&local_60);
      bVar3 = *(int *)(lVar7 + 0x10) == 0x102;
    }
  }
  else {
    bVar3 = true;
    *(undefined8 *)(param_2 + 0x2c) = 0xffffffff00000001;
  }
  *(bool *)(param_2 + 0x50) = bVar3;
LAB_00eafa94:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eafafc(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char *local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_00eafb80:
    uVar7 = 0xffffffff;
  }
  else {
    local_d8 = "code";
    local_c8 = (void *)CONCAT44(local_c8._4_4_,0x100005);
    local_d0 = (void *)0x4;
    lVar3 = FUN_008feca4(param_1,&local_d8);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_00eafb80;
    local_d8 = "code";
    local_c8 = (void *)CONCAT44(local_c8._4_4_,0x100005);
    local_d0 = (void *)0x4;
    puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_d8);
    uVar7 = *puVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar7;
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_d8 = "returnValue";
    local_c8 = (void *)CONCAT44(local_c8._4_4_,0x100005);
    local_d0 = (void *)0xb;
    lVar3 = FUN_008feca4(param_1,&local_d8);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_00e70510(&local_d8);
      pvStack_a0 = (void *)0x0;
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = (void *)0x0;
      uStack_c0 = 0;
      local_c8 = (void *)0x0;
      FUN_00e70510(&local_98);
      FUN_00e70510(&local_88);
      local_70 = "returnValue";
      local_60 = 0x100005;
      local_68 = 0xb;
      plVar5 = (long *)FUN_008feca4(param_1,&local_70);
      lVar3 = FUN_008fd190(plVar5,"success");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
        bVar2 = false;
      }
      else {
        local_70 = "success";
        local_60 = 0x100005;
        local_68 = 7;
        lVar3 = FUN_008feca4(plVar5,&local_70);
        bVar2 = false;
        if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
          local_70 = "success";
          local_60 = 0x100005;
          local_68 = 7;
          lVar3 = FUN_008feca4(plVar5,&local_70);
          bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x2c) = bVar2;
      lVar3 = FUN_008fd190(plVar5,"reason");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_00eafd54:
        puVar6 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_70 = "reason";
        local_60 = 0x100005;
        local_68 = 6;
        lVar3 = FUN_008feca4(plVar5,&local_70);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eafd54;
        local_70 = "reason";
        local_60 = 0x100005;
        local_68 = 6;
        puVar6 = (undefined8 *)FUN_008feca4(plVar5,&local_70);
        if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
          puVar6 = (undefined8 *)*puVar6;
        }
      }
      FUN_008fa54c(&local_70,puVar6);
      FUN_008fce60(param_2 + 0x30,&local_70);
      if (((ulong)local_70 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_5c,local_60));
      }
      lVar3 = FUN_008fd190(plVar5,"warnNotFriend");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
        bVar2 = false;
      }
      else {
        local_70 = "warnNotFriend";
        local_60 = 0x100005;
        local_68 = 0xd;
        lVar3 = FUN_008feca4(plVar5,&local_70);
        bVar2 = false;
        if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
          local_70 = "warnNotFriend";
          local_60 = 0x100005;
          local_68 = 0xd;
          lVar3 = FUN_008feca4(plVar5,&local_70);
          bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
        }
      }
      *(bool *)(param_2 + 0x48) = bVar2;
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      if ((uStack_b0 & 1) != 0) {
        operator_delete(pvStack_a0);
      }
      if (((ulong)local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = (char *)0x0;
        local_d0 = (void *)0x0;
      }
      goto LAB_00eafe54;
    }
  }
  *(undefined1 *)(param_2 + 0x2c) = 0;
  FUN_008fa54c(&local_d8,&DAT_01e277f2);
  FUN_008fce60(param_2 + 0x30,&local_d8);
  if (((ulong)local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  *(undefined1 *)(param_2 + 0x48) = 0;
LAB_00eafe54:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eafeb0(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = "code";
  local_50 = 0x100005;
  local_58 = 4;
  puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
  *(undefined4 *)(param_2 + 0x28) = *puVar3;
  lVar4 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) goto LAB_00eb0190;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  lVar4 = FUN_008feca4(param_1,&local_60);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_00eb0190;
  local_60 = "returnValue";
  local_50 = 0x100005;
  local_58 = 0xb;
  plVar5 = (long *)FUN_008feca4(param_1,&local_60);
  lVar4 = FUN_008fd190(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    bVar2 = false;
  }
  else {
    local_60 = "success";
    local_50 = 0x100005;
    local_58 = 7;
    lVar4 = FUN_008feca4(plVar5,&local_60);
    bVar2 = false;
    if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
      local_60 = "success";
      local_50 = 0x100005;
      local_58 = 7;
      lVar4 = FUN_008feca4(plVar5,&local_60);
      bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x2c) = bVar2;
  lVar4 = FUN_008fd190(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_00eb004c:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "reason";
    local_50 = 0x100005;
    local_58 = 6;
    lVar4 = FUN_008feca4(plVar5,&local_60);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00eb004c;
    local_60 = "reason";
    local_50 = 0x100005;
    local_58 = 6;
    puVar7 = (undefined8 *)FUN_008feca4(plVar5,&local_60);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_60,puVar7);
  FUN_008fce60(param_2 + 0x30,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar4 = FUN_008fd190(plVar5,&DAT_01bc5849);
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_60 = "sku";
    local_50 = 0x100005;
    local_58 = 3;
    lVar4 = FUN_008feca4(plVar5,&local_60);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_60 = "sku";
      local_50 = 0x100005;
      local_58 = 3;
      plVar6 = (long *)FUN_008feca4(plVar5,&local_60);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(&local_60,plVar6);
      FUN_008fce60(param_2 + 0x48,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  lVar4 = FUN_008fd190(plVar5,"chestContentsString");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_00eb0164:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "chestContentsString";
    local_50 = 0x100005;
    local_58 = 0x13;
    lVar4 = FUN_008feca4(plVar5,&local_60);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_00eb0164;
    local_60 = "chestContentsString";
    local_50 = 0x100005;
    local_58 = 0x13;
    puVar7 = (undefined8 *)FUN_008feca4(plVar5,&local_60);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_60,puVar7);
  FUN_008fce60(param_2 + 0x78,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
LAB_00eb0190:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

