// functions/10051 — 108 functions
#include "GameKindred.h"




void FUN_10051022c(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  void *local_90 [2];
  char local_79;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  local_68 = 0x100005;
  local_78 = "code";
  uStack_70 = 4;
  puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_78);
  *(undefined4 *)(param_2 + 0x40) = *puVar3;
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_68 = 0x100005;
    local_78 = "returnValue";
    uStack_70 = 0xb;
    lVar4 = FUN_1000e87dc(param_1,&local_78);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_68 = 0x100005;
      local_78 = "returnValue";
      uStack_70 = 0xb;
      plVar5 = (long *)FUN_1000e87dc(param_1,&local_78);
      lVar4 = FUN_1000e86c0(plVar5,"ownedCards");
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
        *(undefined4 *)(param_2 + 0x40) = 0xfffffffa;
        DAT_1018675c8 = 0xfffffffa;
      }
      else {
        FUN_10014ebf8(param_2 + 0x28,*(undefined8 *)(param_2 + 0x30));
        *(undefined8 **)(param_2 + 0x28) = (undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        local_68 = 0x100005;
        local_78 = "ownedCards";
        uStack_70 = 10;
        plVar5 = (long *)FUN_1000e87dc(plVar5,&local_78);
        if ((int)plVar5[1] != 0) {
          lVar4 = 0;
          uVar8 = 0;
          do {
            lVar7 = *plVar5;
            local_68 = 0x100005;
            local_78 = "cardID";
            uStack_70 = 6;
            plVar6 = (long *)FUN_1000e87dc(lVar7 + lVar4,&local_78);
            plVar1 = (long *)*plVar6;
            if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
              plVar1 = plVar6;
            }
            FUN_1000ee4ec(local_90,plVar1);
            local_68 = 0x100005;
            local_78 = "amount";
            uStack_70 = 6;
            puVar3 = (undefined4 *)FUN_1000e87dc(lVar7 + lVar4,&local_78);
            uVar2 = *puVar3;
            puVar3 = (undefined4 *)FUN_1002115d0(param_2 + 0x28,local_90);
            *puVar3 = uVar2;
            if (local_79 < '\0') {
              operator_delete(local_90[0]);
            }
            uVar8 = uVar8 + 1;
            lVar4 = lVar4 + 0x18;
          } while (uVar8 < *(uint *)(plVar5 + 1));
        }
      }
    }
  }
  return;
}




void FUN_100510420(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "returnValue";
      uStack_40 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar4;
      if ((*(uint *)(plVar4 + 2) & 0x400000) != 0) {
        plVar1 = plVar4;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_100510514(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "returnValue";
      uStack_40 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar4;
      if ((*(uint *)(plVar4 + 2) & 0x400000) != 0) {
        plVar1 = plVar4;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_100510608(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "returnValue";
      uStack_40 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar4;
      if ((*(uint *)(plVar4 + 2) & 0x400000) != 0) {
        plVar1 = plVar4;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_1005106fc(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x28) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_48);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_38 = 0x100005;
      local_48 = "returnValue";
      uStack_40 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
      lVar3 = FUN_1000e86c0(plVar4,"cardBoxSku");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_38 = 0x100005;
        local_48 = "cardBoxSku";
        uStack_40 = 10;
        lVar3 = FUN_1000e87dc(plVar4,&local_48);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_38 = 0x100005;
          local_48 = "cardBoxSku";
          uStack_40 = 10;
          plVar5 = (long *)FUN_1000e87dc(plVar4,&local_48);
          plVar1 = (long *)*plVar5;
          if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
            plVar1 = plVar5;
          }
          FUN_1000ee4ec(&local_48,plVar1);
          std::string::operator=((string *)(param_2 + 0x30),(string *)&local_48);
          if (local_31 < '\0') {
            operator_delete(local_48);
          }
        }
      }
      lVar3 = FUN_1000e86c0(plVar4,"cardPack");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_38 = 0x100005;
        local_48 = "cardPack";
        uStack_40 = 8;
        lVar3 = FUN_1000e87dc(plVar4,&local_48);
        if (*(int *)(lVar3 + 0x10) == 4) {
          local_38 = 0x100005;
          local_48 = "cardPack";
          uStack_40 = 8;
          plVar4 = (long *)FUN_1000e87dc(plVar4,&local_48);
          if ((int)plVar4[1] != 0) {
            lVar3 = 0;
            uVar7 = 0;
            do {
              lVar6 = *plVar4 + lVar3;
              if ((*(byte *)(lVar6 + 0x12) >> 6 & 1) == 0) {
                lVar6 = *(long *)(*plVar4 + lVar3);
              }
              FUN_1000ee4ec(&local_48,lVar6);
              FUN_10001617c(param_2 + 0x48,&local_48);
              if (local_31 < '\0') {
                operator_delete(local_48);
              }
              uVar7 = uVar7 + 1;
              lVar3 = lVar3 + 0x18;
            } while (uVar7 < *(uint *)(plVar4 + 1));
          }
        }
      }
    }
  }
  return;
}




void FUN_100510c38(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  local_48 = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
  *(undefined4 *)(param_2 + 0x28) = *puVar3;
  if (*(char *)(param_2 + 0x5f) < '\0') {
    **(undefined1 **)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  else {
    *(string *)(param_2 + 0x48) = (string)0x0;
    *(undefined1 *)(param_2 + 0x5f) = 0;
  }
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_58);
  lVar4 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100510d5c:
    bVar2 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_58);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100510d5c;
    local_48 = 0x100005;
    local_58 = "success";
    uStack_50 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_58);
    bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x2c) = bVar2;
  lVar4 = FUN_1000e86c0(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100510dd8:
    pcVar7 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    lVar4 = FUN_1000e87dc(plVar5,&local_58);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100510dd8;
    local_48 = 0x100005;
    local_58 = "reason";
    uStack_50 = 6;
    pcVar7 = (char *)FUN_1000e87dc(plVar5,&local_58);
    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
      pcVar7 = *(char **)pcVar7;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar7);
  std::string::operator=((string *)(param_2 + 0x30),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar4 = FUN_1000e86c0(plVar5,"sku");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_48 = 0x100005;
    local_58 = "sku";
    uStack_50 = 3;
    lVar4 = FUN_1000e87dc(plVar5,&local_58);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "sku";
      uStack_50 = 3;
      plVar6 = (long *)FUN_1000e87dc(plVar5,&local_58);
      plVar1 = (long *)*plVar6;
      if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
        plVar1 = plVar6;
      }
      FUN_1000ee4ec(&local_58,plVar1);
      std::string::operator=((string *)(param_2 + 0x48),(string *)&local_58);
      if (local_41 < '\0') {
        operator_delete(local_58);
      }
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"chestContentsString");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_48 = 0x100005;
    local_58 = "chestContentsString";
    uStack_50 = 0x13;
    lVar4 = FUN_1000e87dc(plVar5,&local_58);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "chestContentsString";
      uStack_50 = 0x13;
      pcVar7 = (char *)FUN_1000e87dc(plVar5,&local_58);
      if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
        pcVar7 = *(char **)pcVar7;
      }
      goto LAB_100510ef0;
    }
  }
  pcVar7 = "";
LAB_100510ef0:
  FUN_1000ee4ec(&local_58,pcVar7);
  std::string::operator=((string *)(param_2 + 0x60),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_100510f84(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  piVar3 = (int *)FUN_1000e87dc(param_1,&local_48);
  iVar1 = *piVar3;
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 != 0) {
    *(undefined8 *)(param_2 + 0x2c) = 0xffffffff00000001;
    bVar2 = true;
    goto LAB_100511160;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
  local_38 = 0x100005;
  local_48 = "status";
  uStack_40 = 6;
  puVar5 = (undefined4 *)FUN_1000e87dc(plVar4,&local_48);
  *(undefined4 *)(param_2 + 0x2c) = *puVar5;
  lVar6 = FUN_1000e86c0(plVar4,"errorCode");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar6) {
    if (*(int *)(param_2 + 0x2c) != 0) {
      uVar8 = 0xffffffff;
      goto LAB_100511084;
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "errorCode";
    uStack_40 = 9;
    puVar5 = (undefined4 *)FUN_1000e87dc(plVar4,&local_48);
    uVar8 = *puVar5;
LAB_100511084:
    *(undefined4 *)(param_2 + 0x30) = uVar8;
  }
  lVar6 = FUN_1000e86c0(plVar4,"chestsAwarded");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar6) {
LAB_1005110d4:
    pcVar7 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "chestsAwarded";
    uStack_40 = 0xd;
    lVar6 = FUN_1000e87dc(plVar4,&local_48);
    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_1005110d4;
    local_38 = 0x100005;
    local_48 = "chestsAwarded";
    uStack_40 = 0xd;
    pcVar7 = (char *)FUN_1000e87dc(plVar4,&local_48);
    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
      pcVar7 = *(char **)pcVar7;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar7);
  std::string::operator=((string *)(param_2 + 0x38),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar6 = FUN_1000e86c0(plVar4,"retry");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar6) {
    bVar2 = true;
    if (*(int *)(param_2 + 0x2c) != 1) {
      *(undefined1 *)(param_2 + 0x50) = 0;
      return;
    }
  }
  else {
    local_38 = 0x100005;
    local_48 = "retry";
    uStack_40 = 5;
    lVar6 = FUN_1000e87dc(plVar4,&local_48);
    bVar2 = *(int *)(lVar6 + 0x10) == 0x102;
  }
LAB_100511160:
  *(bool *)(param_2 + 0x50) = bVar2;
  return;
}




void FUN_10051151c(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x28) = *puVar3;
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar4 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100511618:
    bVar2 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_48);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100511618;
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_48);
    bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x2c) = bVar2;
  lVar4 = FUN_1000e86c0(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100511694:
    pcVar7 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "reason";
    uStack_40 = 6;
    lVar4 = FUN_1000e87dc(plVar5,&local_48);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100511694;
    local_38 = 0x100005;
    local_48 = "reason";
    uStack_40 = 6;
    pcVar7 = (char *)FUN_1000e87dc(plVar5,&local_48);
    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
      pcVar7 = *(char **)pcVar7;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar7);
  std::string::operator=((string *)(param_2 + 0x30),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar4 = FUN_1000e86c0(plVar5,"sku");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_38 = 0x100005;
    local_48 = "sku";
    uStack_40 = 3;
    lVar4 = FUN_1000e87dc(plVar5,&local_48);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "sku";
      uStack_40 = 3;
      plVar6 = (long *)FUN_1000e87dc(plVar5,&local_48);
      plVar1 = (long *)*plVar6;
      if ((*(uint *)(plVar6 + 2) & 0x400000) != 0) {
        plVar1 = plVar6;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=((string *)(param_2 + 0x48),(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"chestContentsString");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_38 = 0x100005;
    local_48 = "chestContentsString";
    uStack_40 = 0x13;
    lVar4 = FUN_1000e87dc(plVar5,&local_48);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "chestContentsString";
      uStack_40 = 0x13;
      pcVar7 = (char *)FUN_1000e87dc(plVar5,&local_48);
      if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
        pcVar7 = *(char **)pcVar7;
      }
      goto LAB_1005117ac;
    }
  }
  pcVar7 = "";
LAB_1005117ac:
  FUN_1000ee4ec(&local_48,pcVar7);
  std::string::operator=((string *)(param_2 + 0x78),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_10051183c(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  char *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  local_98._0_4_ = 0x100005;
  local_a8 = "code";
  local_a0 = 4;
  puVar3 = (undefined4 *)FUN_1000e87dc(param_1,&local_a8);
  *(undefined4 *)(param_2 + 0x28) = *puVar3;
  FUN_100157d54(param_2 + 0x48,0);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    return;
  }
  local_98._0_4_ = 0x100005;
  local_a8 = "returnValue";
  local_a0 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_a8);
  if (*(int *)(lVar4 + 0x10) != 3) {
    return;
  }
  local_98 = CONCAT44(local_98._4_4_,0x100005);
  local_a8 = "returnValue";
  local_a0 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_a8);
  lVar4 = FUN_1000e86c0(plVar5,"success");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100511954:
    bVar2 = false;
  }
  else {
    local_98 = CONCAT44(local_98._4_4_,0x100005);
    local_a8 = "success";
    local_a0 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_a8);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100511954;
    local_98 = CONCAT44(local_98._4_4_,0x100005);
    local_a8 = "success";
    local_a0 = 7;
    lVar4 = FUN_1000e87dc(plVar5,&local_a8);
    bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x2c) = bVar2;
  lVar4 = FUN_1000e86c0(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_98 = CONCAT44(local_98._4_4_,0x100005);
    local_a8 = "reason";
    local_a0 = 6;
    lVar4 = FUN_1000e87dc(plVar5,&local_a8);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_98 = CONCAT44(local_98._4_4_,0x100005);
      local_a8 = "reason";
      local_a0 = 6;
      pcVar8 = (char *)FUN_1000e87dc(plVar5,&local_a8);
      if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
        pcVar8 = *(char **)pcVar8;
      }
      goto LAB_1005119d8;
    }
  }
  pcVar8 = "";
LAB_1005119d8:
  FUN_1000ee4ec(&local_a8,pcVar8);
  std::string::operator=((string *)(param_2 + 0x30),(string *)&local_a8);
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  lVar4 = FUN_1000e86c0(plVar5,"activeCampaigns");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_98 = CONCAT44(local_98._4_4_,0x100005);
    local_a8 = "activeCampaigns";
    local_a0 = 0xf;
    lVar4 = FUN_1000e87dc(plVar5,&local_a8);
    if (*(int *)(lVar4 + 0x10) == 4) {
      local_98 = CONCAT44(local_98._4_4_,0x100005);
      local_a8 = "activeCampaigns";
      local_a0 = 0xf;
      plVar6 = (long *)FUN_1000e87dc(plVar5,&local_a8);
      uVar12 = (ulong)*(uint *)(plVar6 + 1);
      if (*(uint *)(plVar6 + 1) != 0) {
        lVar4 = 0;
        uVar13 = 0;
        do {
          plVar1 = (long *)(*plVar6 + lVar4);
          if ((int)plVar1[2] == 3) {
            local_a8 = (char *)0x0;
            local_a0 = 0;
            local_98 = 0;
            lVar7 = FUN_1000e86c0(plVar1,"campaignId");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
              pcVar8 = "";
            }
            else {
              local_68 = 0x100005;
              local_78 = "campaignId";
              uStack_70 = 10;
              lVar7 = FUN_1000e87dc(plVar1,&local_78);
              pcVar8 = "";
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = "campaignId";
                uStack_70 = 10;
                pcVar8 = (char *)FUN_1000e87dc(plVar1,&local_78);
                if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                  pcVar8 = *(char **)pcVar8;
                }
              }
            }
            FUN_1000ee4ec(&local_78,pcVar8);
            std::string::operator=((string *)&local_a8,(string *)&local_78);
            if (local_61 < '\0') {
              operator_delete(local_78);
            }
            uVar10 = (uint)(char)local_98._7_1_;
            uVar12 = local_a0;
            if (-1 < (int)uVar10) {
              uVar12 = (ulong)local_98._7_1_;
            }
            if (uVar12 != 0) {
              lVar7 = FUN_1000e86c0(plVar1,"nextAvailability");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_100511bc0:
                local_80 = 0;
              }
              else {
                local_68 = 0x100005;
                local_78 = "nextAvailability";
                uStack_70 = 0x10;
                lVar7 = FUN_1000e87dc(plVar1,&local_78);
                if ((*(byte *)(lVar7 + 0x11) >> 4 & 1) == 0) goto LAB_100511bc0;
                lVar7 = FUN_1000e86c0(plVar1,"nextAvailability");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_100511c30:
                  local_90 = 0;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "nextAvailability";
                  uStack_70 = 0x10;
                  lVar7 = FUN_1000e87dc(plVar1,&local_78);
                  if ((*(byte *)(lVar7 + 0x11) >> 4 & 1) == 0) goto LAB_100511c30;
                  local_68 = 0x100005;
                  local_78 = "nextAvailability";
                  uStack_70 = 0x10;
                  puVar9 = (undefined8 *)FUN_1000e87dc(plVar1,&local_78);
                  local_90 = *puVar9;
                }
                local_80 = 1;
              }
              lVar7 = FUN_1000e86c0(plVar1);
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_100511cb8:
                local_7f = 0;
              }
              else {
                local_68 = 0x100005;
                local_78 = "offerExpiry";
                uStack_70 = 0xb;
                lVar7 = FUN_1000e87dc(plVar1,&local_78);
                if ((*(byte *)(lVar7 + 0x11) >> 4 & 1) == 0) goto LAB_100511cb8;
                lVar7 = FUN_1000e86c0(plVar1,"offerExpiry");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_100511d08:
                  local_88 = 0;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "offerExpiry";
                  uStack_70 = 0xb;
                  lVar7 = FUN_1000e87dc(plVar1,&local_78);
                  if ((*(byte *)(lVar7 + 0x11) >> 4 & 1) == 0) goto LAB_100511d08;
                  local_68 = 0x100005;
                  local_78 = "offerExpiry";
                  uStack_70 = 0xb;
                  puVar9 = (undefined8 *)FUN_1000e87dc(plVar1,&local_78);
                  local_88 = *puVar9;
                }
                local_7f = 1;
              }
              FUN_10051dbb8(param_2 + 0x48,&local_a8);
              uVar10 = (uint)local_98._7_1_;
            }
            if ((uVar10 >> 7 & 1) != 0) {
              operator_delete(local_a8);
            }
            uVar12 = (ulong)*(uint *)(plVar6 + 1);
          }
          uVar13 = uVar13 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar13 < uVar12);
      }
    }
  }
  lVar4 = FUN_1000e86c0(plVar5,"ttl");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    uVar11 = 0xffffffff;
  }
  else {
    local_98._0_4_ = 0x100005;
    local_a8 = "ttl";
    local_a0 = 3;
    lVar4 = FUN_1000e87dc(plVar5,&local_a8);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      local_98 = CONCAT44(local_98._4_4_,0x100005);
      local_a8 = "ttl";
      local_a0 = 3;
      puVar3 = (undefined4 *)FUN_1000e87dc(plVar5,&local_a8);
      uVar11 = *puVar3;
    }
  }
  *(undefined4 *)(param_2 + 0x58) = uVar11;
  return;
}




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




void FUN_100511ec4(long *param_1,long param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  local_48 = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
  *(undefined4 *)(param_2 + 0x5c) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_100512034:
    *(undefined4 *)(param_2 + 0x5c) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  lVar3 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_100512034;
  local_48 = 0x100005;
  local_58 = "returnValue";
  uStack_50 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_58);
  lVar3 = FUN_1000e86c0(plVar4,"newSkin");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) goto LAB_100512178;
  local_48 = 0x100005;
  local_58 = "newSkin";
  uStack_50 = 7;
  lVar3 = FUN_1000e87dc(plVar4,&local_58);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_100512178;
  local_48 = 0x100005;
  local_58 = "newSkin";
  uStack_50 = 7;
  plVar5 = (long *)FUN_1000e87dc(plVar4,&local_58);
  lVar3 = FUN_1000e86c0(plVar5,"blueprintsOwned");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_10051202c:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "blueprintsOwned";
    uStack_50 = 0xf;
    lVar3 = FUN_1000e87dc(plVar5,&local_58);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_10051202c;
    local_48 = 0x100005;
    local_58 = "blueprintsOwned";
    uStack_50 = 0xf;
    lVar3 = FUN_1000e87dc(plVar5,&local_58);
    bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x59) = bVar1;
  lVar3 = FUN_1000e86c0(plVar5,"owned");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_1005120d0:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = "owned";
    uStack_50 = 5;
    lVar3 = FUN_1000e87dc(plVar5,&local_58);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_1005120d0;
    local_48 = 0x100005;
    local_58 = "owned";
    uStack_50 = 5;
    lVar3 = FUN_1000e87dc(plVar5,&local_58);
    bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x58) = bVar1;
  lVar3 = FUN_1000e86c0(plVar5,"id");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_10051214c:
    pcVar7 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "id";
    uStack_50 = 2;
    lVar3 = FUN_1000e87dc(plVar5,&local_58);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10051214c;
    local_48 = 0x100005;
    local_58 = "id";
    uStack_50 = 2;
    pcVar7 = (char *)FUN_1000e87dc(plVar5,&local_58);
    if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
      pcVar7 = *(char **)pcVar7;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar7);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
LAB_100512178:
  lVar3 = FUN_1000e86c0(plVar4,"currencies");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "currencies";
  uStack_50 = 10;
  lVar3 = FUN_1000e87dc(plVar4,&local_58);
  if (*(int *)(lVar3 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "currencies";
  uStack_50 = 10;
  uVar6 = FUN_1000e87dc(plVar4,&local_58);
  FUN_10051ba10(uVar6,param_2 + 0x28);
  return;
}




void FUN_100512218(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar1 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x30) = *puVar1;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051231c:
    *(undefined4 *)(param_2 + 0x30) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) goto LAB_10051231c;
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"state");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_100512314:
    uVar4 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "state";
    uStack_40 = 5;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100512314;
    local_38 = 0x100005;
    local_48 = "state";
    uStack_40 = 5;
    puVar1 = (undefined4 *)FUN_1000e87dc(plVar3,&local_48);
    uVar4 = *puVar1;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  lVar2 = FUN_1000e86c0(plVar3,"clientMode");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "clientMode";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "clientMode";
      uStack_40 = 10;
      puVar1 = (undefined4 *)FUN_1000e87dc(plVar3,&local_48);
      uVar4 = *puVar1;
      goto LAB_1005123c0;
    }
  }
  uVar4 = 0;
LAB_1005123c0:
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  return;
}




void FUN_1005123d8(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar1 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar1;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"cardSku");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_1005124d4:
    pcVar4 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "cardSku";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_1005124d4;
    local_38 = 0x100005;
    local_48 = "cardSku";
    uStack_40 = 7;
    pcVar4 = (char *)FUN_1000e87dc(plVar3,&local_48);
    if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
      pcVar4 = *(char **)pcVar4;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar4);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e86c0(plVar3,"playerEssence");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051254c:
    uVar6 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "playerEssence";
    uStack_40 = 0xd;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051254c;
    local_38 = 0x100005;
    local_48 = "playerEssence";
    uStack_40 = 0xd;
    puVar1 = (undefined4 *)FUN_1000e87dc(plVar3,&local_48);
    uVar6 = *puVar1;
  }
  *(undefined4 *)(param_2 + 0x60) = uVar6;
  lVar2 = FUN_1000e86c0(plVar3,"cardCount");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "cardCount";
    uStack_40 = 9;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "cardCount";
      uStack_40 = 9;
      puVar1 = (undefined4 *)FUN_1000e87dc(plVar3,&local_48);
      uVar6 = *puVar1;
      goto LAB_100512610;
    }
  }
  uVar6 = 0;
LAB_100512610:
  *(undefined4 *)(param_2 + 100) = uVar6;
  lVar2 = FUN_1000e86c0(plVar3,"currency");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "currency";
    uStack_40 = 8;
    uVar5 = FUN_1000e87dc(plVar3,&local_48);
    FUN_10051ba10(uVar5,param_2 + 0x28);
  }
  return;
}




void FUN_100512674(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar1 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar1;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"cardSku");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_100512770:
    pcVar4 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "cardSku";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_100512770;
    local_38 = 0x100005;
    local_48 = "cardSku";
    uStack_40 = 7;
    pcVar4 = (char *)FUN_1000e87dc(plVar3,&local_48);
    if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
      pcVar4 = *(char **)pcVar4;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar4);
  std::string::operator=((string *)(param_2 + 0x48),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e86c0(plVar3,"playerEssence");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_1005127e8:
    uVar6 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "playerEssence";
    uStack_40 = 0xd;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_1005127e8;
    local_38 = 0x100005;
    local_48 = "playerEssence";
    uStack_40 = 0xd;
    puVar1 = (undefined4 *)FUN_1000e87dc(plVar3,&local_48);
    uVar6 = *puVar1;
  }
  *(undefined4 *)(param_2 + 0x60) = uVar6;
  lVar2 = FUN_1000e86c0(plVar3,"cardCount");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "cardCount";
    uStack_40 = 9;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "cardCount";
      uStack_40 = 9;
      puVar1 = (undefined4 *)FUN_1000e87dc(plVar3,&local_48);
      uVar6 = *puVar1;
      goto LAB_1005128ac;
    }
  }
  uVar6 = 0;
LAB_1005128ac:
  *(undefined4 *)(param_2 + 100) = uVar6;
  lVar2 = FUN_1000e86c0(plVar3,"currency");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "currency";
    uStack_40 = 8;
    uVar5 = FUN_1000e87dc(plVar3,&local_48);
    FUN_10051ba10(uVar5,param_2 + 0x28);
  }
  return;
}




void FUN_100512910(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  char *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  char local_99;
  void *local_98 [2];
  char local_81;
  undefined4 local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  local_a0 = 0x100005;
  local_b0 = "code";
  uStack_a8 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_b0);
  *(undefined4 *)(param_2 + 0x50) = *puVar2;
  FUN_1001591f8(param_2 + 0x28,0);
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_100512d58:
    *(undefined4 *)(param_2 + 0x50) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_a0 = 0x100005;
  local_b0 = "returnValue";
  uStack_a8 = 0xb;
  lVar3 = FUN_1000e87dc(param_1,&local_b0);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_100512d58;
  local_a0 = 0x100005;
  local_b0 = "returnValue";
  uStack_a8 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_b0);
  lVar3 = FUN_1000e86c0(plVar4,"chestUUID");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_a0 = 0x100005;
    local_b0 = "chestUUID";
    uStack_a8 = 9;
    lVar3 = FUN_1000e87dc(plVar4,&local_b0);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_a0 = 0x100005;
      local_b0 = "chestUUID";
      uStack_a8 = 9;
      pcVar6 = (char *)FUN_1000e87dc(plVar4,&local_b0);
      if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
        pcVar6 = *(char **)pcVar6;
      }
      goto LAB_100512a30;
    }
  }
  pcVar6 = "";
LAB_100512a30:
  FUN_1000ee4ec(&local_b0,pcVar6);
  std::string::operator=((string *)(param_2 + 0x38),(string *)&local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  lVar3 = FUN_1000e86c0(plVar4,"chestAwards");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    return;
  }
  local_a0 = 0x100005;
  local_b0 = "chestAwards";
  uStack_a8 = 0xb;
  lVar3 = FUN_1000e87dc(plVar4,&local_b0);
  if (*(int *)(lVar3 + 0x10) != 4) {
    return;
  }
  local_a0 = 0x100005;
  local_b0 = "chestAwards";
  uStack_a8 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(plVar4,&local_b0);
  if ((int)plVar4[1] == 0) {
    return;
  }
  lVar3 = 0;
  uVar7 = 0;
  do {
    plVar1 = (long *)(*plVar4 + lVar3);
    FUN_1000ee4ec(&local_b0,"");
    FUN_1000ee4ec((string *)local_98,"");
    local_80 = 0xffffffff;
    lVar5 = FUN_1000e86c0(plVar1,"type");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar5) {
      pcVar6 = "";
    }
    else {
      local_68 = 0x100005;
      local_78 = "type";
      uStack_70 = 4;
      lVar5 = FUN_1000e87dc(plVar1,&local_78);
      pcVar6 = "";
      if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
        local_68 = 0x100005;
        local_78 = "type";
        uStack_70 = 4;
        pcVar6 = (char *)FUN_1000e87dc(plVar1,&local_78);
        if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
          pcVar6 = *(char **)pcVar6;
        }
      }
    }
    FUN_1000ee4ec(&local_78,pcVar6);
    std::string::operator=((string *)&local_b0,(string *)&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
    lVar5 = FUN_1000e86c0(plVar1,"id");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar5) {
      pcVar6 = "";
    }
    else {
      local_68 = 0x100005;
      local_78 = "id";
      uStack_70 = 2;
      lVar5 = FUN_1000e87dc(plVar1,&local_78);
      pcVar6 = "";
      if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
        local_68 = 0x100005;
        local_78 = "id";
        uStack_70 = 2;
        pcVar6 = (char *)FUN_1000e87dc(plVar1,&local_78);
        if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
          pcVar6 = *(char **)pcVar6;
        }
      }
    }
    FUN_1000ee4ec(&local_78,pcVar6);
    std::string::operator=((string *)local_98,(string *)&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
    lVar5 = FUN_1000e86c0(plVar1,"amount");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar5) {
      local_80 = 0;
    }
    else {
      local_68 = 0x100005;
      local_78 = "amount";
      uStack_70 = 6;
      lVar5 = FUN_1000e87dc(plVar1,&local_78);
      if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) {
        local_80 = 0;
      }
      else {
        local_68 = 0x100005;
        local_78 = "amount";
        uStack_70 = 6;
        puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_78);
        local_80 = *puVar2;
      }
    }
    FUN_10051c5e8(param_2 + 0x28,&local_b0);
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0);
    }
    uVar7 = uVar7 + 1;
    lVar3 = lVar3 + 0x18;
  } while (uVar7 < *(uint *)(plVar4 + 1));
  return;
}




void FUN_100513564(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  local_78 = 0x100005;
  local_88 = "code";
  uStack_80 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_88);
  *(undefined4 *)(param_2 + 0x38) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_78 = 0x100005;
    local_88 = "returnValue";
    uStack_80 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_88);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_78 = 0x100005;
      local_88 = "returnValue";
      uStack_80 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_88);
      if ((int)plVar4[1] == 0) {
        return;
      }
      lVar3 = 0;
      uVar7 = 0;
      do {
        plVar1 = (long *)(*plVar4 + lVar3);
        local_98 = 0xffffffff00000000;
        uVar6 = 0xffffffff;
        local_90 = 0xffffffff;
        lVar5 = FUN_1000e86c0(plVar1,"rarity");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar5) {
          local_78 = 0x100005;
          local_88 = "rarity";
          uStack_80 = 6;
          lVar5 = FUN_1000e87dc(plVar1,&local_88);
          if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            local_78 = 0x100005;
            local_88 = "rarity";
            uStack_80 = 6;
            puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_88);
            uVar6 = *puVar2;
          }
        }
        local_98 = CONCAT44(local_98._4_4_,uVar6);
        lVar5 = FUN_1000e86c0(plVar1,"essenceCost");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar5) {
LAB_100513720:
          uVar6 = 0xffffffff;
        }
        else {
          local_78 = 0x100005;
          local_88 = "essenceCost";
          uStack_80 = 0xb;
          lVar5 = FUN_1000e87dc(plVar1,&local_88);
          if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_100513720;
          local_78 = 0x100005;
          local_88 = "essenceCost";
          uStack_80 = 0xb;
          puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_88);
          uVar6 = *puVar2;
        }
        local_98 = CONCAT44(uVar6,(undefined4)local_98);
        lVar5 = FUN_1000e86c0(plVar1,"essenceGain");
        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar5) {
LAB_100513780:
          local_90 = 0xffffffff;
        }
        else {
          local_78 = 0x100005;
          local_88 = "essenceGain";
          uStack_80 = 0xb;
          lVar5 = FUN_1000e87dc(plVar1,&local_88);
          if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_100513780;
          local_78 = 0x100005;
          local_88 = "essenceGain";
          uStack_80 = 0xb;
          puVar2 = (undefined4 *)FUN_1000e87dc(plVar1,&local_88);
          local_90 = *puVar2;
        }
        FUN_10051c758(param_2 + 0x28,&local_98);
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 0x18;
        if (*(uint *)(plVar4 + 1) <= uVar7) {
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_1005137fc(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "returnValue";
      uStack_40 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar4;
      if ((*(uint *)(plVar4 + 2) & 0x400000) != 0) {
        plVar1 = plVar4;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_1005138f0(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar3) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar3 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "returnValue";
      uStack_40 = 0xb;
      plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar4;
      if ((*(uint *)(plVar4 + 2) & 0x400000) != 0) {
        plVar1 = plVar4;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_1005139e4(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  puVar1 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
  *(undefined4 *)(param_2 + 0x40) = *puVar1;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if (*(int *)(lVar2 + 0x10) == 3) {
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x40) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_100513aa0(long *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar1 = FUN_1000e87dc(param_1,&local_48);
  if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x25) = 1;
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "returnValue";
    uStack_40 = 0xb;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "returnValue";
      uStack_40 = 0xb;
      pcVar2 = (char *)FUN_1000e87dc(param_1,&local_48);
      if (((byte)pcVar2[0x12] >> 6 & 1) == 0) {
        pcVar2 = *(char **)pcVar2;
      }
      goto LAB_100513b6c;
    }
  }
  pcVar2 = "";
LAB_100513b6c:
  FUN_1000ee4ec(&local_48,pcVar2);
  std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_100513bd0(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"success");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_100513ca8:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100513ca8;
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar3,"chestAwards");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "chestAwards";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "chestAwards";
      uStack_40 = 0xb;
      pcVar4 = (char *)FUN_1000e87dc(plVar3,&local_48);
      if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
        pcVar4 = *(char **)pcVar4;
      }
      goto LAB_100513d2c;
    }
  }
  pcVar4 = "";
LAB_100513d2c:
  FUN_1000ee4ec(&local_48,pcVar4);
  std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_100513d90(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"success");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_100513e68:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100513e68;
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar3,"chestAwards");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "chestAwards";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "chestAwards";
      uStack_40 = 0xb;
      pcVar4 = (char *)FUN_1000e87dc(plVar3,&local_48);
      if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
        pcVar4 = *(char **)pcVar4;
      }
      goto LAB_100513eec;
    }
  }
  pcVar4 = "";
LAB_100513eec:
  FUN_1000ee4ec(&local_48,pcVar4);
  std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_100513f50(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"success");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_100514028:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100514028;
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar3,"chestAwards");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "chestAwards";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "chestAwards";
      uStack_40 = 0xb;
      pcVar4 = (char *)FUN_1000e87dc(plVar3,&local_48);
      if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
        pcVar4 = *(char **)pcVar4;
      }
      goto LAB_1005140ac;
    }
  }
  pcVar4 = "";
LAB_1005140ac:
  FUN_1000ee4ec(&local_48,pcVar4);
  std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_100514110(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"success");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_1005141e8:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1005141e8;
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x25) = bVar1;
  lVar2 = FUN_1000e86c0(plVar3,"chestAwards");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "chestAwards";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "chestAwards";
      uStack_40 = 0xb;
      pcVar4 = (char *)FUN_1000e87dc(plVar3,&local_48);
      if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
        pcVar4 = *(char **)pcVar4;
      }
      goto LAB_10051426c;
    }
  }
  pcVar4 = "";
LAB_10051426c:
  FUN_1000ee4ec(&local_48,pcVar4);
  std::string::operator=((string *)(param_2 + 0x28),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_1005142d0(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined1 *)(param_2 + 0x25) = 0;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"success");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "success";
      uStack_40 = 7;
      lVar2 = FUN_1000e87dc(plVar3,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_1005143d4;
    }
  }
  bVar1 = false;
LAB_1005143d4:
  *(bool *)(param_2 + 0x25) = bVar1;
  return;
}




void FUN_1005143ec(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  local_48 = 0x100005;
  local_58 = "code";
  uStack_50 = 4;
  puVar1 = (undefined4 *)FUN_1000e87dc(param_1,&local_58);
  *(undefined4 *)(param_2 + 0x58) = *puVar1;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "returnValue";
    uStack_50 = 0xb;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if (*(int *)(lVar2 + 0x10) == 3) {
      local_48 = 0x100005;
      local_58 = "returnValue";
      uStack_50 = 0xb;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_58);
      lVar2 = FUN_1000e86c0(plVar3,"rewardChests");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
        local_48 = 0x100005;
        local_58 = "returnValue";
        uStack_50 = 0xb;
        uVar4 = FUN_1000e87dc(param_1,&local_58);
        local_48 = 0x100005;
        local_58 = "rewardChests";
        uStack_50 = 0xc;
        lVar2 = FUN_1000e87dc(uVar4,&local_58);
        if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
          local_48 = 0x100005;
          local_58 = "returnValue";
          uStack_50 = 0xb;
          uVar4 = FUN_1000e87dc(param_1,&local_58);
          local_48 = 0x100005;
          local_58 = "rewardChests";
          uStack_50 = 0xc;
          plVar5 = (long *)FUN_1000e87dc(uVar4,&local_58);
          plVar3 = (long *)*plVar5;
          if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
            plVar3 = plVar5;
          }
          FUN_1000ee4ec(&local_58,plVar3);
          std::string::operator=((string *)(param_2 + 0x28),(string *)&local_58);
          if (local_41 < '\0') {
            operator_delete(local_58);
          }
        }
      }
      local_48 = 0x100005;
      local_58 = "returnValue";
      uStack_50 = 0xb;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_58);
      lVar2 = FUN_1000e86c0(plVar3,"rewardChestAssetTypes");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
        local_48 = 0x100005;
        local_58 = "returnValue";
        uStack_50 = 0xb;
        uVar4 = FUN_1000e87dc(param_1,&local_58);
        local_48 = 0x100005;
        local_58 = "rewardChestAssetTypes";
        uStack_50 = 0x15;
        lVar2 = FUN_1000e87dc(uVar4,&local_58);
        if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
          local_48 = 0x100005;
          local_58 = "returnValue";
          uStack_50 = 0xb;
          uVar4 = FUN_1000e87dc(param_1,&local_58);
          local_48 = 0x100005;
          local_58 = "rewardChestAssetTypes";
          uStack_50 = 0x15;
          plVar5 = (long *)FUN_1000e87dc(uVar4,&local_58);
          plVar3 = (long *)*plVar5;
          if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
            plVar3 = plVar5;
          }
          FUN_1000ee4ec(&local_58,plVar3);
          std::string::operator=((string *)(param_2 + 0x40),(string *)&local_58);
          if (local_41 < '\0') {
            operator_delete(local_58);
          }
        }
      }
    }
  }
  return;
}




void FUN_100514650(long *param_1,long param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  char *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4) {
    local_58._0_4_ = 0x100005;
    local_68 = "code";
    uStack_60 = 4;
    lVar4 = FUN_1000e87dc(param_1,&local_68);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_58 = CONCAT44(local_58._4_4_,0x100005);
      local_68 = "code";
      uStack_60 = 4;
      piVar5 = (int *)FUN_1000e87dc(param_1,&local_68);
      iVar3 = *piVar5;
      *(int *)(param_2 + 0x38) = iVar3;
      if (((iVar3 == 0) &&
          (lVar4 = FUN_1000e86c0(param_1,"returnValue"),
          *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar4)) &&
         (*(int *)(lVar4 + 0x28) == 3)) {
        local_68 = (char *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        if (*(int *)(lVar4 + 0x20) == 0) {
          *(undefined1 *)(param_2 + 0x3c) = 1;
          return;
        }
        lVar6 = *(long *)(lVar4 + 0x18);
        do {
          std::string::assign((char *)&local_68);
          iVar3 = std::string::compare((char *)&local_68);
          pcVar1 = FUN_10051e9c8;
          if (iVar3 != 0) {
            pcVar1 = FUN_10051e9c0;
          }
          bVar2 = (*pcVar1)(&local_68,lVar6 + 0x18,param_2 + 0x28,param_2);
          lVar6 = lVar6 + 0x30;
        } while ((lVar6 != *(long *)(lVar4 + 0x18) + (ulong)*(uint *)(lVar4 + 0x20) * 0x30) &&
                ((bVar2 & 1) != 0));
        *(byte *)(param_2 + 0x3c) = bVar2;
        if (-1 < local_58) {
          return;
        }
        operator_delete(local_68);
        return;
      }
      goto LAB_1005146f4;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
LAB_1005146f4:
  *(undefined1 *)(param_2 + 0x3c) = 0;
  return;
}




void FUN_10051505c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined1 uVar5;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "code";
    uStack_40 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "code";
      uStack_40 = 4;
      piVar3 = (int *)FUN_1000e87dc(param_1,&local_48);
      iVar1 = *piVar3;
      *(int *)(param_2 + 0x28) = iVar1;
      if ((((iVar1 == 0) &&
           (lVar2 = FUN_1000e86c0(param_1,"returnValue"),
           *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2)) &&
          (*(int *)(lVar2 + 0x28) == 3)) &&
         ((lVar4 = FUN_1000e86c0(lVar2 + 0x18,"questSyncNeeded"),
          *(long *)(lVar2 + 0x18) + (ulong)*(uint *)(lVar2 + 0x20) * 0x30 != lVar4 &&
          ((*(uint *)(lVar4 + 0x28) >> 8 & 1) != 0)))) {
        *(bool *)(param_2 + 0x2d) = *(uint *)(lVar4 + 0x28) == 0x102;
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      goto LAB_100515108;
    }
  }
  uVar5 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
LAB_100515108:
  *(undefined1 *)(param_2 + 0x2c) = uVar5;
  return;
}




void FUN_100515198(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  char *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  void *pvStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  local_a0._0_4_ = 0x100005;
  local_b0 = "code";
  uStack_a8 = 4;
  puVar1 = (undefined4 *)FUN_1000e87dc(param_1,&local_b0);
  *(undefined4 *)(param_2 + 0x38) = *puVar1;
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_a0._0_4_ = 0x100005;
    local_b0 = "returnValue";
    uStack_a8 = 0xb;
    lVar2 = FUN_1000e87dc(param_1,&local_b0);
    if (*(int *)(lVar2 + 0x10) == 3) {
      local_a0 = CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "returnValue";
      uStack_a8 = 0xb;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_b0);
      FUN_10015690c(param_2 + 0x28,0);
      if ((int)plVar3[1] == 0) {
        return;
      }
      lVar2 = *plVar3;
      do {
        pvStack_68 = (void *)0x0;
        local_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
        lStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        local_80 = (void *)0x0;
        uStack_a8 = 0;
        local_b0 = (char *)0x0;
        local_98 = (void *)0x0;
        local_a0 = 0;
        FUN_10051ee14(lVar2 + 0x18,&local_b0);
        FUN_10051f2b8(param_2 + 0x28,&local_b0);
        if (lStack_58 < 0) {
          operator_delete(pvStack_68);
        }
        if (local_70 < 0) {
          operator_delete(local_80);
        }
        if (lStack_88 < 0) {
          operator_delete(local_98);
        }
        if (local_a0 < 0) {
          operator_delete(local_b0);
        }
        lVar2 = lVar2 + 0x30;
      } while (lVar2 != *plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_100515314(long *param_1,long param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined4 local_80;
  undefined1 local_7c;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  local_88._0_4_ = 0x100005;
  local_98 = "code";
  uStack_90 = 4;
  puVar2 = (undefined4 *)FUN_1000e87dc(param_1,&local_98);
  *(undefined4 *)(param_2 + 0x54) = *puVar2;
  lVar3 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
LAB_10051549c:
    *(undefined4 *)(param_2 + 0x54) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_88._0_4_ = 0x100005;
  local_98 = "returnValue";
  uStack_90 = 0xb;
  lVar3 = FUN_1000e87dc(param_1,&local_98);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_10051549c;
  local_88 = CONCAT44(local_88._4_4_,0x100005);
  local_98 = "returnValue";
  uStack_90 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_98);
  lVar3 = FUN_1000e86c0(plVar4,"selected");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_10051541c:
    pcVar5 = "";
  }
  else {
    local_88 = CONCAT44(local_88._4_4_,0x100005);
    local_98 = "selected";
    uStack_90 = 8;
    lVar3 = FUN_1000e87dc(plVar4,&local_98);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10051541c;
    local_88 = CONCAT44(local_88._4_4_,0x100005);
    local_98 = "selected";
    uStack_90 = 8;
    pcVar5 = (char *)FUN_1000e87dc(plVar4,&local_98);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_98,pcVar5);
  std::string::operator=((string *)(param_2 + 0x38),(string *)&local_98);
  if (local_88 < 0) {
    operator_delete(local_98);
  }
  lVar3 = FUN_1000e86c0(plVar4,"ownsAny");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_100515494:
    bVar1 = false;
  }
  else {
    local_88 = CONCAT44(local_88._4_4_,0x100005);
    local_98 = "ownsAny";
    uStack_90 = 7;
    lVar3 = FUN_1000e87dc(plVar4,&local_98);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_100515494;
    local_88 = CONCAT44(local_88._4_4_,0x100005);
    local_98 = "ownsAny";
    uStack_90 = 7;
    lVar3 = FUN_1000e87dc(plVar4,&local_98);
    bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x50) = bVar1;
  lVar3 = FUN_1000e86c0(plVar4,"enabled");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
    local_88 = CONCAT44(local_88._4_4_,0x100005);
    local_98 = "enabled";
    uStack_90 = 7;
    lVar3 = FUN_1000e87dc(plVar4,&local_98);
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_88 = CONCAT44(local_88._4_4_,0x100005);
      local_98 = "enabled";
      uStack_90 = 7;
      lVar3 = FUN_1000e87dc(plVar4,&local_98);
      bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
      goto LAB_100515598;
    }
  }
  bVar1 = false;
LAB_100515598:
  *(bool *)(param_2 + 0x51) = bVar1;
  lVar3 = FUN_1000e86c0(plVar4,"owned");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    return;
  }
  local_88 = CONCAT44(local_88._4_4_,0x100005);
  local_98 = "owned";
  uStack_90 = 5;
  plVar4 = (long *)FUN_1000e87dc(plVar4,&local_98);
  FUN_10030be70(param_2 + 0x28,0);
  if ((int)plVar4[1] == 0) {
    return;
  }
  puVar7 = (undefined8 *)*plVar4;
  do {
    local_98 = (char *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    puVar6 = puVar7;
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar7;
    }
    FUN_1000ee4ec(&local_78,puVar6);
    std::string::operator=((string *)&local_98,(string *)&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
    puVar6 = puVar7 + 3;
    lVar3 = FUN_1000e86c0(puVar6,"selected");
    if (puVar7[3] + (ulong)*(uint *)(puVar7 + 4) * 0x30 == lVar3) {
LAB_100515690:
      local_7c = false;
    }
    else {
      local_68 = 0x100005;
      local_78 = "selected";
      uStack_70 = 8;
      lVar3 = FUN_1000e87dc(puVar6,&local_78);
      if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_100515690;
      local_68 = 0x100005;
      local_78 = "selected";
      uStack_70 = 8;
      lVar3 = FUN_1000e87dc(puVar6,&local_78);
      local_7c = *(int *)(lVar3 + 0x10) == 0x102;
    }
    lVar3 = FUN_1000e86c0(puVar6,"balance");
    if (puVar7[3] + (ulong)*(uint *)(puVar7 + 4) * 0x30 == lVar3) {
LAB_1005156f8:
      local_80 = 0;
    }
    else {
      local_68 = 0x100005;
      local_78 = "balance";
      uStack_70 = 7;
      lVar3 = FUN_1000e87dc(puVar6,&local_78);
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1005156f8;
      local_68 = 0x100005;
      local_78 = "balance";
      uStack_70 = 7;
      puVar2 = (undefined4 *)FUN_1000e87dc(puVar6,&local_78);
      local_80 = *puVar2;
    }
    FUN_10051f374(param_2 + 0x28,&local_98);
    if (local_88 < 0) {
      operator_delete(local_98);
    }
    puVar7 = puVar7 + 6;
    if (puVar7 == (undefined8 *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30)) {
      return;
    }
  } while( true );
}




void FUN_100515754(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined4 local_90;
  undefined4 uStack_8c;
  char local_79;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  local_68 = 0x100005;
  local_78 = "code";
  uStack_70 = 4;
  puVar4 = (undefined4 *)FUN_1000e87dc(param_1,&local_78);
  *(undefined4 *)(param_2 + 0xa0) = *puVar4;
  puVar13 = (undefined8 *)(param_2 + 0x78);
  FUN_10032906c(param_2 + 0x70,*puVar13);
  *(undefined8 **)(param_2 + 0x70) = puVar13;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)(param_2 + 0x90);
  FUN_10032906c(param_2 + 0x88,*puVar13);
  *(undefined8 **)(param_2 + 0x88) = puVar13;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *puVar13 = 0;
  puVar13 = (undefined8 *)(param_2 + 0x60);
  FUN_10032902c(param_2 + 0x58,*puVar13);
  *(undefined8 **)(param_2 + 0x58) = puVar13;
  *puVar13 = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  FUN_10032902c(param_2 + 0x40,*(undefined8 *)(param_2 + 0x48));
  *(undefined8 **)(param_2 + 0x40) = (undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  lVar5 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar5) {
    local_68 = 0x100005;
    local_78 = "returnValue";
    uStack_70 = 0xb;
    lVar5 = FUN_1000e87dc(param_1,&local_78);
    if (*(int *)(lVar5 + 0x10) == 3) {
      local_68 = 0x100005;
      local_78 = "returnValue";
      uStack_70 = 0xb;
      plVar6 = (long *)FUN_1000e87dc(param_1,&local_78);
      lVar5 = FUN_1000e86c0(plVar6,"skins");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_68 = 0x100005;
        local_78 = "skins";
        uStack_70 = 5;
        lVar5 = FUN_1000e87dc(plVar6,&local_78);
        if (*(int *)(lVar5 + 0x10) == 3) {
          local_68 = 0x100005;
          local_78 = "skins";
          uStack_70 = 5;
          plVar7 = (long *)FUN_1000e87dc(plVar6,&local_78);
          if ((int)plVar7[1] != 0) {
            puVar13 = (undefined8 *)*plVar7;
            do {
              puVar10 = puVar13;
              if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar13;
              }
              FUN_1000ee4ec(&local_90,puVar10);
              puVar10 = puVar13 + 3;
              lVar5 = FUN_1000e86c0(puVar10,"blueprintsOwned");
              if (puVar13[3] + (ulong)*(uint *)(puVar13 + 4) * 0x30 == lVar5) {
LAB_100515978:
                bVar2 = false;
              }
              else {
                local_68 = 0x100005;
                local_78 = "blueprintsOwned";
                uStack_70 = 0xf;
                lVar5 = FUN_1000e87dc(puVar10,&local_78);
                if ((*(byte *)(lVar5 + 0x11) & 1) == 0) goto LAB_100515978;
                local_68 = 0x100005;
                local_78 = "blueprintsOwned";
                uStack_70 = 0xf;
                lVar5 = FUN_1000e87dc(puVar10,&local_78);
                bVar2 = *(int *)(lVar5 + 0x10) == 0x102;
              }
              lVar5 = FUN_1000e86c0(puVar10,"owned");
              if (puVar13[3] + (ulong)*(uint *)(puVar13 + 4) * 0x30 == lVar5) {
                bVar3 = false;
              }
              else {
                local_68 = 0x100005;
                local_78 = "owned";
                uStack_70 = 5;
                lVar5 = FUN_1000e87dc(puVar10,&local_78);
                if ((*(byte *)(lVar5 + 0x11) & 1) == 0) {
                  bVar3 = false;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "owned";
                  uStack_70 = 5;
                  lVar5 = FUN_1000e87dc(puVar10,&local_78);
                  bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
                }
              }
              if (bVar2) {
                FUN_100329a40(param_2 + 0x70,&local_90,&local_90);
              }
              if (bVar3) {
                FUN_100329a40(param_2 + 0x88,&local_90,&local_90);
              }
              if (local_79 < '\0') {
                operator_delete((void *)CONCAT44(uStack_8c,local_90));
              }
              puVar13 = puVar13 + 6;
            } while (puVar13 != (undefined8 *)(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30));
          }
        }
      }
      lVar5 = FUN_1000e86c0(plVar6,"skinTierValues");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar5) {
        local_68 = 0x100005;
        local_78 = "skinTierValues";
        uStack_70 = 0xe;
        lVar5 = FUN_1000e87dc(plVar6,&local_78);
        if (*(int *)(lVar5 + 0x10) == 4) {
          local_68 = 0x100005;
          local_78 = "skinTierValues";
          uStack_70 = 0xe;
          plVar7 = (long *)FUN_1000e87dc(plVar6,&local_78);
          uVar11 = (ulong)*(uint *)(plVar7 + 1);
          if (*(uint *)(plVar7 + 1) != 0) {
            lVar5 = 0;
            uVar15 = 0;
            do {
              plVar1 = (long *)(*plVar7 + lVar5);
              if ((int)plVar1[2] == 3) {
                lVar8 = FUN_1000e86c0(plVar1,"rarity");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
LAB_100515b58:
                  local_90 = 0;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "rarity";
                  uStack_70 = 6;
                  lVar8 = FUN_1000e87dc(plVar1,&local_78);
                  if ((*(byte *)(lVar8 + 0x11) >> 2 & 1) == 0) goto LAB_100515b58;
                  local_68 = 0x100005;
                  local_78 = "rarity";
                  uStack_70 = 6;
                  puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_78);
                  local_90 = *puVar4;
                }
                lVar8 = FUN_1000e86c0(plVar1,"essenceGain");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                  uVar12 = 0;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "essenceGain";
                  uStack_70 = 0xb;
                  lVar8 = FUN_1000e87dc(plVar1,&local_78);
                  if ((*(byte *)(lVar8 + 0x11) >> 2 & 1) == 0) {
                    uVar12 = 0;
                  }
                  else {
                    local_68 = 0x100005;
                    local_78 = "essenceGain";
                    uStack_70 = 0xb;
                    puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_78);
                    uVar12 = *puVar4;
                  }
                }
                lVar8 = FUN_1000e86c0(plVar1);
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
                  uVar14 = 0;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "essenceCost";
                  uStack_70 = 0xb;
                  lVar8 = FUN_1000e87dc(plVar1,&local_78);
                  if ((*(byte *)(lVar8 + 0x11) >> 2 & 1) == 0) {
                    uVar14 = 0;
                  }
                  else {
                    local_68 = 0x100005;
                    local_78 = "essenceCost";
                    uStack_70 = 0xb;
                    puVar4 = (undefined4 *)FUN_1000e87dc(plVar1,&local_78);
                    uVar14 = *puVar4;
                  }
                }
                puVar4 = (undefined4 *)FUN_10051f408(param_2 + 0x58,&local_90);
                *puVar4 = uVar12;
                puVar4 = (undefined4 *)FUN_10051f408(param_2 + 0x40,&local_90);
                *puVar4 = uVar14;
                uVar11 = (ulong)*(uint *)(plVar7 + 1);
              }
              uVar15 = uVar15 + 1;
              lVar5 = lVar5 + 0x18;
            } while (uVar15 < uVar11);
          }
        }
      }
      lVar5 = FUN_1000e86c0(plVar6,"currencies");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar5) {
        return;
      }
      local_68 = 0x100005;
      local_78 = "currencies";
      uStack_70 = 10;
      lVar5 = FUN_1000e87dc(plVar6,&local_78);
      if (*(int *)(lVar5 + 0x10) != 3) {
        return;
      }
      local_68 = 0x100005;
      local_78 = "currencies";
      uStack_70 = 10;
      uVar9 = FUN_1000e87dc(plVar6,&local_78);
      FUN_10051ba10(uVar9,param_2 + 0x28);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0xa0) = 0xfffffffa;
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_100515d50(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_100515e2c:
    *(undefined4 *)(param_2 + 0x5c) = 0xfffffffa;
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  lVar2 = FUN_1000e87dc(param_1,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) goto LAB_100515e2c;
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
  lVar2 = FUN_1000e86c0(plVar3,"success");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_100515e24:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100515e24;
    local_38 = 0x100005;
    local_48 = "success";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x58) = bVar1;
  lVar2 = FUN_1000e86c0(plVar3,"skinId");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "skinId";
    uStack_40 = 6;
    lVar2 = FUN_1000e87dc(plVar3,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "skinId";
      uStack_40 = 6;
      pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_48);
      if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
        pcVar5 = *(char **)pcVar5;
      }
      goto LAB_100515ecc;
    }
  }
  pcVar5 = "";
LAB_100515ecc:
  FUN_1000ee4ec(&local_48,pcVar5);
  std::string::operator=((string *)(param_2 + 0x40),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e86c0(plVar3,"currencies");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "currencies";
  uStack_40 = 10;
  lVar2 = FUN_1000e87dc(plVar3,&local_48);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_38 = 0x100005;
  local_48 = "currencies";
  uStack_40 = 10;
  uVar4 = FUN_1000e87dc(plVar3,&local_48);
  FUN_10051ba10(uVar4,param_2 + 0x28);
  return;
}




void FUN_100515f90(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
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
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  double dVar13;
  char *local_100;
  void *local_f8;
  undefined4 local_f0;
  byte local_ec;
  char local_e9;
  undefined4 local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  void *local_88;
  undefined4 local_80;
  
  FUN_10015aff0(param_2 + 0x28,0);
  lVar2 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_f0 = 0x100005;
    local_100 = "returnValue";
    local_f8 = (void *)0xb;
    lVar2 = FUN_1000e87dc(param_1,&local_100);
    if (*(int *)(lVar2 + 0x10) == 3) {
      local_f0 = 0x100005;
      local_100 = "returnValue";
      local_f8 = (void *)0xb;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_100);
      if ((int)plVar3[1] == 0) {
        return;
      }
      puVar12 = (undefined8 *)*plVar3;
      do {
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = (void *)0x0;
        uStack_a8 = 0;
        lStack_b0 = 0;
        puVar10 = puVar12;
        if ((*(byte *)((long)puVar12 + 0x12) >> 6 & 1) == 0) {
          puVar10 = (undefined8 *)*puVar12;
        }
        FUN_1000ee4ec(&local_100,puVar10);
        std::string::operator=((string *)&local_c0,(string *)&local_100);
        if (local_e9 < '\0') {
          operator_delete(local_100);
        }
        if (*(int *)(puVar12 + 5) == 3) {
          puVar10 = puVar12 + 3;
          lVar2 = FUN_1000e86c0(puVar10,"lastUpdated");
          if (puVar12[3] + (ulong)*(uint *)(puVar12 + 4) * 0x30 == lVar2) {
LAB_10051612c:
            local_98 = 0;
          }
          else {
            local_f0 = 0x100005;
            local_100 = "lastUpdated";
            local_f8 = (void *)0xb;
            lVar2 = FUN_1000e87dc(puVar10,&local_100);
            if ((*(byte *)(lVar2 + 0x11) >> 4 & 1) == 0) goto LAB_10051612c;
            local_f0 = 0x100005;
            local_100 = "lastUpdated";
            local_f8 = (void *)0xb;
            puVar4 = (undefined8 *)FUN_1000e87dc(puVar10,&local_100);
            local_98 = *puVar4;
          }
          lVar2 = FUN_1000e86c0(puVar10,"leaders");
          if (puVar12[3] + (ulong)*(uint *)(puVar12 + 4) * 0x30 != lVar2) {
            local_f0 = 0x100005;
            local_100 = "leaders";
            local_f8 = (void *)0x7;
            lVar2 = FUN_1000e87dc(puVar10,&local_100);
            if (*(int *)(lVar2 + 0x10) == 4) {
              local_f0 = 0x100005;
              local_100 = "leaders";
              local_f8 = (void *)0x7;
              plVar5 = (long *)FUN_1000e87dc(puVar10,&local_100);
              if ((int)plVar5[1] != 0) {
                lVar2 = 0;
                uVar11 = 0;
                do {
                  plVar1 = (long *)(*plVar5 + lVar2);
                  if (((int)plVar1[2] == 3) &&
                     (lVar6 = FUN_1000e86c0(plVar1,"rank"),
                     *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar6)) {
                    local_f0 = 0x100005;
                    local_100 = "rank";
                    local_f8 = (void *)0x4;
                    lVar6 = FUN_1000e87dc(plVar1,&local_100);
                    if (((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) &&
                       (lVar6 = FUN_1000e86c0(plVar1,"name"),
                       *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar6)) {
                      local_f0 = 0x100005;
                      local_100 = "name";
                      local_f8 = (void *)0x4;
                      lVar6 = FUN_1000e87dc(plVar1,&local_100);
                      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                        lVar6 = FUN_1000e86c0(plVar1,"score");
                        if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
LAB_1005162c8:
                          lVar6 = FUN_1000e86c0(plVar1,"earnedElos");
                          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar6) {
                            local_f0 = 0x100005;
                            local_100 = "earnedElos";
                            local_f8 = (void *)0xa;
                            lVar6 = FUN_1000e87dc(plVar1,&local_100);
                            if (*(int *)(lVar6 + 0x10) == 3) goto LAB_100516318;
                          }
                        }
                        else {
                          local_f0 = 0x100005;
                          local_100 = "score";
                          local_f8 = (void *)0x5;
                          lVar6 = FUN_1000e87dc(plVar1,&local_100);
                          if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) == 0) goto LAB_1005162c8;
LAB_100516318:
                          FUN_1004e313c(&local_100);
                          FUN_1004e34c8(&local_100);
                          local_f0 = 0;
                          local_ec = 0;
                          uStack_dc = 0;
                          fStack_e0 = 0.0;
                          fStack_e4 = 0.0;
                          local_e8 = 0;
                          local_d0 = 0.0;
                          local_d4 = 0;
                          local_d8 = 0.0;
                          local_c8 = 0;
                          local_80 = 0x100005;
                          local_90 = "name";
                          local_88 = (void *)0x4;
                          plVar7 = (long *)FUN_1000e87dc(plVar1,&local_90);
                          plVar8 = (long *)*plVar7;
                          if ((*(uint *)(plVar7 + 2) & 0x400000) != 0) {
                            plVar8 = plVar7;
                          }
                          FUN_1004e3120(&local_90,plVar8);
                          FUN_1000153b4(&local_100,&local_90);
                          if (local_88 != (void *)0x0) {
                            operator_delete__(local_88);
                          }
                          fStack_e4 = 0.0;
                          lVar6 = FUN_1000e86c0(plVar1,"earnedElos");
                          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar6) {
                            local_80 = 0x100005;
                            local_90 = "earnedElos";
                            local_88 = (void *)0xa;
                            lVar6 = FUN_1000e87dc(plVar1,&local_90);
                            if (*(int *)(lVar6 + 0x10) == 3) {
                              local_80 = 0x100005;
                              local_90 = "earnedElos";
                              local_88 = (void *)0xa;
                              plVar8 = (long *)FUN_1000e87dc(plVar1,&local_90);
                              lVar6 = FUN_1000e86c0(plVar8,"earnedElo5v5");
                              dVar13 = 0.0;
                              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar6) {
                                local_80 = 0x100005;
                                local_90 = "earnedElo5v5";
                                local_88 = (void *)0xc;
                                lVar6 = FUN_1000e87dc(plVar8,&local_90);
                                if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
                                  local_80 = 0x100005;
                                  local_90 = "earnedElo5v5";
                                  local_88 = (void *)0xc;
                                  FUN_1000e87dc(plVar8,&local_90);
                                  FUN_1000fceec();
                                  dVar13 = (double)CONCAT17(extraout_var_23,
                                                            CONCAT16(extraout_var_19,
                                                                     CONCAT15(extraout_var_15,
                                                                              CONCAT14(
                                                  extraout_var_11,
                                                  CONCAT13(extraout_var_07,
                                                           CONCAT12(extraout_var_03,
                                                                    CONCAT11(extraout_var,
                                                                             extraout_b0)))))));
                                }
                              }
                              fStack_e0 = (float)dVar13;
                              lVar6 = FUN_1000e86c0(plVar8,"skillTier5v5");
                              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar6) {
LAB_1005164e8:
                                uStack_dc = 0;
                              }
                              else {
                                local_80 = 0x100005;
                                local_90 = "skillTier5v5";
                                local_88 = (void *)0xc;
                                lVar6 = FUN_1000e87dc(plVar8,&local_90);
                                if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) goto LAB_1005164e8;
                                local_80 = 0x100005;
                                local_90 = "skillTier5v5";
                                local_88 = (void *)0xc;
                                puVar9 = (undefined4 *)FUN_1000e87dc(plVar8,&local_90);
                                uStack_dc = *puVar9;
                              }
                              lVar6 = FUN_1000e86c0(plVar8,"earnedElo3v3");
                              dVar13 = 0.0;
                              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar6) {
                                local_80 = 0x100005;
                                local_90 = "earnedElo3v3";
                                local_88 = (void *)0xc;
                                lVar6 = FUN_1000e87dc(plVar8,&local_90);
                                if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
                                  local_80 = 0x100005;
                                  local_90 = "earnedElo3v3";
                                  local_88 = (void *)0xc;
                                  FUN_1000e87dc(plVar8,&local_90);
                                  FUN_1000fceec();
                                  dVar13 = (double)CONCAT17(extraout_var_24,
                                                            CONCAT16(extraout_var_20,
                                                                     CONCAT15(extraout_var_16,
                                                                              CONCAT14(
                                                  extraout_var_12,
                                                  CONCAT13(extraout_var_08,
                                                           CONCAT12(extraout_var_04,
                                                                    CONCAT11(extraout_var_00,
                                                                             extraout_b0_00)))))));
                                }
                              }
                              local_d8 = (float)dVar13;
                              lVar6 = FUN_1000e86c0(plVar8,"skillTier3v3");
                              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar6) {
LAB_1005165f4:
                                local_d4 = 0;
                              }
                              else {
                                local_80 = 0x100005;
                                local_90 = "skillTier3v3";
                                local_88 = (void *)0xc;
                                lVar6 = FUN_1000e87dc(plVar8,&local_90);
                                if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) goto LAB_1005165f4;
                                local_80 = 0x100005;
                                local_90 = "skillTier3v3";
                                local_88 = (void *)0xc;
                                puVar9 = (undefined4 *)FUN_1000e87dc(plVar8,&local_90);
                                local_d4 = *puVar9;
                              }
                              lVar6 = FUN_1000e86c0(plVar8,"earnedEloBlitz");
                              dVar13 = 0.0;
                              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar6) {
                                local_80 = 0x100005;
                                local_90 = "earnedEloBlitz";
                                local_88 = (void *)0xe;
                                lVar6 = FUN_1000e87dc(plVar8,&local_90);
                                if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
                                  local_80 = 0x100005;
                                  local_90 = "earnedEloBlitz";
                                  local_88 = (void *)0xe;
                                  FUN_1000e87dc(plVar8,&local_90);
                                  FUN_1000fceec();
                                  dVar13 = (double)CONCAT17(extraout_var_25,
                                                            CONCAT16(extraout_var_21,
                                                                     CONCAT15(extraout_var_17,
                                                                              CONCAT14(
                                                  extraout_var_13,
                                                  CONCAT13(extraout_var_09,
                                                           CONCAT12(extraout_var_05,
                                                                    CONCAT11(extraout_var_01,
                                                                             extraout_b0_01)))))));
                                }
                              }
                              local_d0 = (float)dVar13;
                              lVar6 = FUN_1000e86c0(plVar8,"seasonWins");
                              if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar6) {
                                local_80 = 0x100005;
                                local_90 = "seasonWins";
                                local_88 = (void *)0xa;
                                lVar6 = FUN_1000e87dc(plVar8,&local_90);
                                if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
                                  local_80 = 0x100005;
                                  local_90 = "seasonWins";
                                  local_88 = (void *)0xa;
                                  puVar9 = (undefined4 *)FUN_1000e87dc(plVar8,&local_90);
                                  local_c8 = *puVar9;
                                  goto LAB_100516730;
                                }
                              }
                              local_c8 = 0;
                            }
                          }
LAB_100516730:
                          lVar6 = FUN_1000e86c0(plVar1,"score");
                          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar6) {
                            local_80 = 0x100005;
                            local_90 = "score";
                            local_88 = (void *)0x5;
                            lVar6 = FUN_1000e87dc(plVar1,&local_90);
                            if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
                              local_80 = 0x100005;
                              local_90 = "score";
                              local_88 = (void *)0x5;
                              FUN_1000e87dc(plVar1,&local_90);
                              FUN_1000fceec();
                              fStack_e4 = (float)(double)CONCAT17(extraout_var_26,
                                                                  CONCAT16(extraout_var_22,
                                                                           CONCAT15(extraout_var_18,
                                                                                    CONCAT14(
                                                  extraout_var_14,
                                                  CONCAT13(extraout_var_10,
                                                           CONCAT12(extraout_var_06,
                                                                    CONCAT11(extraout_var_02,
                                                                             extraout_b0_02)))))));
                            }
                          }
                          local_80 = 0x100005;
                          local_90 = "rank";
                          local_88 = (void *)0x4;
                          puVar9 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
                          local_f0 = *puVar9;
                          lVar6 = FUN_1000e86c0(plVar1,"rankDelta");
                          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
                            local_e8 = 0;
                            local_ec = 0;
                          }
                          else {
                            local_80 = 0x100005;
                            local_90 = "rankDelta";
                            local_88 = (void *)0x9;
                            lVar6 = FUN_1000e87dc(plVar1,&local_90);
                            local_ec = (byte)(*(uint *)(lVar6 + 0x10) >> 10) & 1;
                            if ((*(uint *)(lVar6 + 0x10) >> 10 & 1) == 0) {
                              local_e8 = 0;
                            }
                            else {
                              local_80 = 0x100005;
                              local_90 = "rankDelta";
                              local_88 = (void *)0x9;
                              puVar9 = (undefined4 *)FUN_1000e87dc(plVar1,&local_90);
                              local_e8 = *puVar9;
                            }
                          }
                          FUN_10031ba70(&uStack_a8,&local_100);
                          if (local_f8 != (void *)0x0) {
                            operator_delete__(local_f8);
                          }
                        }
                      }
                    }
                  }
                  uVar11 = uVar11 + 1;
                  lVar2 = lVar2 + 0x18;
                } while (uVar11 < *(uint *)(plVar5 + 1));
              }
            }
          }
        }
        FUN_10051f4c0(param_2 + 0x28,&local_c0);
        FUN_10015af78(&uStack_a8,1);
        if (lStack_b0 < 0) {
          operator_delete(local_c0);
        }
        puVar12 = puVar12 + 6;
        if (puVar12 == (undefined8 *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30)) {
          return;
        }
      } while( true );
    }
  }
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_100518760(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *local_128 [2];
  char local_111;
  void *local_110;
  undefined8 uStack_108;
  long local_100;
  void *pvStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  char *local_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  char local_a0 [8];
  void *pvStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    pvStack_d0._0_4_ = 0x100005;
    local_e0 = "returnValue";
    local_d8 = 0xb;
    lVar1 = FUN_1000e87dc(param_1,&local_e0);
    if (*(int *)(lVar1 + 0x10) == 3) {
      pvStack_d0 = (void *)CONCAT44(pvStack_d0._4_4_,0x100005);
      local_e0 = "returnValue";
      local_d8 = 0xb;
      plVar2 = (long *)FUN_1000e87dc(param_1,&local_e0);
      if ((int)plVar2[2] != 3) {
        return;
      }
      if ((int)plVar2[1] == 0) {
        return;
      }
      puVar5 = (undefined8 *)*plVar2;
      do {
        pvStack_98 = (void *)0x0;
        local_a0[0] = '\0';
        local_a0[1] = '\0';
        local_a0[2] = '\0';
        local_a0[3] = '\0';
        local_a0[4] = '\0';
        local_a0[5] = '\0';
        local_a0[6] = '\0';
        local_a0[7] = '\0';
        uStack_88 = 0;
        local_90 = (void *)0x0;
        local_80 = 0;
        uStack_78 = 0x100;
        pvStack_d0 = (void *)0x0;
        local_d8 = 0;
        uStack_c0 = 0;
        local_c8 = (void *)0x0;
        local_b8 = 0;
        local_b0 = 0x200;
        local_a8 = 0;
        local_e0 = local_a0;
        FUN_100110914(puVar5 + 3,&local_e0);
        pvStack_f8 = (void *)0x0;
        local_100 = 0;
        lStack_e8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        local_110 = (void *)0x0;
        puVar4 = puVar5;
        if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
          puVar4 = (undefined8 *)*puVar5;
        }
        FUN_1000ee4ec(local_128,puVar4);
        std::string::operator=((string *)&local_110,(string *)local_128);
        if (local_111 < '\0') {
          operator_delete(local_128[0]);
        }
        uVar3 = FUN_100110e38(local_a0);
        FUN_1000ee4ec(local_128,uVar3);
        std::string::operator=((string *)&pvStack_f8,(string *)local_128);
        if (local_111 < '\0') {
          operator_delete(local_128[0]);
        }
        FUN_10051f7d0(param_2 + 0x28,&local_110);
        if (lStack_e8 < 0) {
          operator_delete(pvStack_f8);
        }
        if (local_100 < 0) {
          operator_delete(local_110);
        }
        _free(local_c8);
        if (pvStack_d0 != (void *)0x0) {
          operator_delete(pvStack_d0);
        }
        _free(local_90);
        if (pvStack_98 != (void *)0x0) {
          operator_delete(pvStack_98);
        }
        puVar5 = puVar5 + 6;
      } while (puVar5 != (undefined8 *)(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30));
      return;
    }
  }
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_100518970(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  char *local_170;
  undefined8 uStack_168;
  long local_160;
  void *local_158;
  undefined8 local_150;
  long lStack_148;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  void *pvStack_128;
  undefined8 uStack_120;
  long lStack_118;
  void *local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined8 local_d0;
  long lStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  FUN_10051f860(param_2);
  lVar4 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar4) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_160._0_4_ = 0x100005;
  local_170 = "returnValue";
  uStack_168 = 0xb;
  lVar4 = FUN_1000e87dc(param_1,&local_170);
  if (*(int *)(lVar4 + 0x10) != 3) {
    DAT_1018675c8 = 0xfffffffa;
    return;
  }
  local_160 = CONCAT44(local_160._4_4_,0x100005);
  local_170 = "returnValue";
  uStack_168 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(param_1,&local_170);
  lVar4 = FUN_1000e86c0(plVar5,"chestSku");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
    local_160 = CONCAT44(local_160._4_4_,0x100005);
    local_170 = "chestSku";
    uStack_168 = 8;
    lVar4 = FUN_1000e87dc(plVar5,&local_170);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "chestSku";
      uStack_168 = 8;
      pcVar10 = (char *)FUN_1000e87dc(plVar5,&local_170);
      if (((byte)pcVar10[0x12] >> 6 & 1) == 0) {
        pcVar10 = *(char **)pcVar10;
      }
      goto LAB_100518a64;
    }
  }
  pcVar10 = "";
LAB_100518a64:
  FUN_1000ee4ec(&local_170,pcVar10);
  std::string::operator=((string *)(param_2 + 0x38),(string *)&local_170);
  if (local_160 < 0) {
    operator_delete(local_170);
  }
  FUN_10015c28c(param_2 + 0x28,0);
  lVar4 = FUN_1000e86c0(plVar5,"chestAwards");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
    return;
  }
  local_160._0_4_ = 0x100005;
  local_170 = "chestAwards";
  uStack_168 = 0xb;
  lVar4 = FUN_1000e87dc(plVar5,&local_170);
  if (*(int *)(lVar4 + 0x10) != 4) {
    return;
  }
  local_160 = CONCAT44(local_160._4_4_,0x100005);
  local_170 = "chestAwards";
  uStack_168 = 0xb;
  plVar5 = (long *)FUN_1000e87dc(plVar5,&local_170);
  if ((int)plVar5[1] == 0) {
    return;
  }
  lVar4 = 0;
  uVar11 = 0;
  pcVar10 = "";
  do {
    plVar1 = (long *)(*plVar5 + lVar4);
    pvStack_a8 = (void *)0x0;
    local_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    lStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_c0 = (void *)0x0;
    uStack_e8 = 0;
    local_f0 = (void *)0x0;
    local_d8 = (void *)0x0;
    uStack_e0 = 0;
    lVar6 = FUN_1000e86c0(plVar1,"type");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
      pcVar7 = "";
    }
    else {
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "type";
      uStack_168 = 4;
      lVar6 = FUN_1000e87dc(plVar1,&local_170);
      pcVar7 = pcVar10;
      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "type";
        uStack_168 = 4;
        pcVar7 = (char *)FUN_1000e87dc(plVar1,&local_170);
        if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
          pcVar7 = *(char **)pcVar7;
        }
      }
    }
    FUN_1000ee4ec(&local_170,pcVar7);
    std::string::operator=((string *)&local_f0,(string *)&local_170);
    if (local_160 < 0) {
      operator_delete(local_170);
    }
    lVar6 = FUN_1000e86c0(plVar1,"id");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
      pcVar7 = "";
    }
    else {
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "id";
      uStack_168 = 2;
      lVar6 = FUN_1000e87dc(plVar1,&local_170);
      pcVar7 = pcVar10;
      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "id";
        uStack_168 = 2;
        pcVar7 = (char *)FUN_1000e87dc(plVar1,&local_170);
        if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
          pcVar7 = *(char **)pcVar7;
        }
      }
    }
    FUN_1000ee4ec(&local_170,pcVar7);
    std::string::operator=((string *)&local_d8,(string *)&local_170);
    if (local_160 < 0) {
      operator_delete(local_170);
    }
    lVar6 = FUN_1000e86c0(plVar1,"amount");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
      local_90 = 0;
    }
    else {
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "amount";
      uStack_168 = 6;
      lVar6 = FUN_1000e87dc(plVar1,&local_170);
      if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) {
        local_90 = 0;
      }
      else {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "amount";
        uStack_168 = 6;
        puVar8 = (undefined4 *)FUN_1000e87dc(plVar1,&local_170);
        local_90 = *puVar8;
      }
    }
    lVar6 = FUN_1000e86c0(plVar1,"originalType");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
      pcVar7 = "";
    }
    else {
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "originalType";
      uStack_168 = 0xc;
      lVar6 = FUN_1000e87dc(plVar1,&local_170);
      pcVar7 = pcVar10;
      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "originalType";
        uStack_168 = 0xc;
        pcVar7 = (char *)FUN_1000e87dc(plVar1,&local_170);
        if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
          pcVar7 = *(char **)pcVar7;
        }
      }
    }
    FUN_1000ee4ec(&local_170,pcVar7);
    std::string::operator=((string *)&local_c0,(string *)&local_170);
    if (local_160 < 0) {
      operator_delete(local_170);
    }
    lVar6 = FUN_1000e86c0(plVar1,"originalId");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
      pcVar7 = "";
    }
    else {
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "originalId";
      uStack_168 = 10;
      lVar6 = FUN_1000e87dc(plVar1,&local_170);
      pcVar7 = pcVar10;
      if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
        local_160 = CONCAT44(local_160._4_4_,0x100005);
        local_170 = "originalId";
        uStack_168 = 10;
        pcVar7 = (char *)FUN_1000e87dc(plVar1,&local_170);
        if (((byte)pcVar7[0x12] >> 6 & 1) == 0) {
          pcVar7 = *(char **)pcVar7;
        }
      }
    }
    FUN_1000ee4ec(&local_170,pcVar7);
    std::string::operator=((string *)&pvStack_a8,(string *)&local_170);
    if (local_160 < 0) {
      operator_delete(local_170);
    }
    lVar6 = FUN_1000e86c0(plVar1,"originalAmount");
    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar6) {
LAB_100518eb8:
      local_8c = 0;
    }
    else {
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "originalAmount";
      uStack_168 = 0xe;
      lVar6 = FUN_1000e87dc(plVar1,&local_170);
      if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) goto LAB_100518eb8;
      local_160 = CONCAT44(local_160._4_4_,0x100005);
      local_170 = "originalAmount";
      uStack_168 = 0xe;
      puVar8 = (undefined4 *)FUN_1000e87dc(plVar1,&local_170);
      local_8c = *puVar8;
    }
    FUN_10051f8b8(param_2 + 0x28,&local_f0);
    uVar2 = uStack_e8;
    if (-1 < (long)uStack_e0) {
      uVar2 = uStack_e0 >> 0x38;
    }
    if (((uVar2 == 6) &&
        (iVar3 = std::string::compare((ulong)&local_f0,0,(char *)0xffffffffffffffff,0x1013d246a),
        iVar3 == 0)) &&
       (lVar6 = FUN_1000e86c0(plVar1,"talentData"),
       *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar6)) {
      pvStack_128 = (void *)0x0;
      local_130 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      local_140 = (void *)0x0;
      uStack_168 = 0;
      local_170 = (char *)0x0;
      local_158 = (void *)0x0;
      local_160 = 0;
      local_70 = 0x100005;
      local_80 = "talentData";
      uStack_78 = 10;
      uVar9 = FUN_1000e87dc(plVar1,&local_80);
      FUN_10051ee14(uVar9,&local_170);
      FUN_10051f2b8(param_2 + 0x50,&local_170);
      if (lStack_118 < 0) {
        operator_delete(pvStack_128);
      }
      if (local_130 < 0) {
        operator_delete(local_140);
      }
      if (lStack_148 < 0) {
        operator_delete(local_158);
      }
      if (local_160 < 0) {
        operator_delete(local_170);
      }
    }
    uVar2 = uStack_e8;
    if (-1 < (long)uStack_e0) {
      uVar2 = uStack_e0 >> 0x38;
    }
    if ((uVar2 == 4) &&
       (iVar3 = std::string::compare((ulong)&local_f0,0,(char *)0xffffffffffffffff,0x1013d25b2),
       iVar3 == 0)) {
      FUN_10001617c(param_2 + 0x60,(string *)&local_d8);
    }
    uVar2 = uStack_e8;
    if (-1 < (long)uStack_e0) {
      uVar2 = uStack_e0 >> 0x38;
    }
    if ((uVar2 == 9) &&
       (iVar3 = std::string::compare((ulong)&local_f0,0,(char *)0xffffffffffffffff,0x1013d260c),
       iVar3 == 0)) {
      FUN_10001617c(param_2 + 0x70,(string *)&local_d8);
    }
    if (lStack_98 < 0) {
      operator_delete(pvStack_a8);
    }
    if (local_b0 < 0) {
      operator_delete(local_c0);
    }
    if (lStack_c8 < 0) {
      operator_delete(local_d8);
    }
    if ((long)uStack_e0 < 0) {
      operator_delete(local_f0);
    }
    uVar11 = uVar11 + 1;
    lVar4 = lVar4 + 0x18;
    if (*(uint *)(plVar5 + 1) <= uVar11) {
      return;
    }
  } while( true );
}




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
                        lVar2 = FUN_1000e87dc(plVar5,&local_78);
                        bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                      }
                    }
                    local_98._0_5_ = CONCAT14(bVar1,(undefined4)local_98);
                    lVar2 = FUN_1000e86c0(plVar5);
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
LAB_100519ad4:
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "ok";
                      uStack_70 = 2;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100519ad4;
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
      lVar2 = FUN_1000e86c0(plVar3,"charm");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
        local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = "charm";
        uStack_a8 = 5;
        lVar2 = FUN_1000e87dc(plVar3,&local_b0);
        if (*(int *)(lVar2 + 0x10) == 3) {
          local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
          local_b0 = "charm";
          uStack_a8 = 5;
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
LAB_100519c58:
                  bVar1 = false;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "equipped";
                  uStack_70 = 8;
                  lVar2 = FUN_1000e87dc(puVar6,&local_78);
                  if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100519c58;
                  local_68 = 0x100005;
                  local_78 = "equipped";
                  uStack_70 = 8;
                  lVar2 = FUN_1000e87dc(puVar6,&local_78);
                  bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
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
                    lVar2 = FUN_1000e86c0(plVar5,"owned");
                    if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar2) {
LAB_100519d1c:
                      bVar1 = false;
                    }
                    else {
                      local_68 = 0x100005;
                      local_78 = "owned";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100519d1c;
                      local_68 = 0x100005;
                      local_78 = "owned";
                      uStack_70 = 5;
                      lVar2 = FUN_1000e87dc(plVar5,&local_78);
                      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
                    }
                    local_98._0_2_ = CONCAT11(bVar1,(undefined1)local_98);
                  }
                }
                FUN_10017b214(param_2 + 0x68,&local_b0);
                if ((long)local_a0 < 0) {
                  operator_delete(local_b0);
                }
              }
              puVar7 = puVar7 + 6;
            } while (puVar7 != (undefined8 *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30));
          }
        }
      }
      lVar2 = FUN_1000e86c0(plVar3,"hat");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
        return;
      }
      local_a0._0_4_ = 0x100005;
      local_b0 = "hat";
      uStack_a8 = 3;
      lVar2 = FUN_1000e87dc(plVar3,&local_b0);
      if (*(int *)(lVar2 + 0x10) != 3) {
        return;
      }
      local_a0 = (void *)CONCAT44(local_a0._4_4_,0x100005);
      local_b0 = "hat";
      uStack_a8 = 3;
      plVar3 = (long *)FUN_1000e87dc(plVar3,&local_b0);
      if ((int)plVar3[1] == 0) {
        return;
      }
      puVar7 = (undefined8 *)*plVar3;
      do {
        local_90 = 0;
        uStack_a8 = 0;
        local_b0 = (char *)0x0;
        local_98 = 0;
        local_a0 = (void *)0x0;
        if ((*(uint *)(puVar7 + 2) >> 0x14 & 1) != 0) {
          puVar6 = puVar7;
          if ((*(uint *)(puVar7 + 2) >> 0x16 & 1) == 0) {
            puVar6 = (undefined8 *)*puVar7;
          }
          FUN_1000ee4ec(&local_78,puVar6);
          std::string::operator=((string *)&local_a0,(string *)&local_78);
          if (local_61 < '\0') {
            operator_delete(local_78);
          }
          puVar6 = puVar7 + 3;
          lVar2 = FUN_1000e86c0(puVar6,"equipped");
          if (puVar7[3] + (ulong)*(uint *)(puVar7 + 4) * 0x30 == lVar2) {
LAB_100519eb0:
            local_88 = false;
          }
          else {
            local_68 = 0x100005;
            local_78 = "equipped";
            uStack_70 = 8;
            lVar2 = FUN_1000e87dc(puVar6,&local_78);
            if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100519eb0;
            local_68 = 0x100005;
            local_78 = "equipped";
            uStack_70 = 8;
            lVar2 = FUN_1000e87dc(puVar6,&local_78);
            local_88 = *(int *)(lVar2 + 0x10) == 0x102;
          }
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
              plVar4 = (long *)FUN_1000e87dc(puVar6,&local_78);
              lVar2 = FUN_1000e86c0(plVar4,"owned");
              if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
                local_87 = 0;
              }
              else {
                local_68 = 0x100005;
                local_78 = "owned";
                uStack_70 = 5;
                lVar2 = FUN_1000e87dc(plVar4,&local_78);
                if ((*(byte *)(lVar2 + 0x11) & 1) == 0) {
                  local_87 = 0;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "owned";
                  uStack_70 = 5;
                  lVar2 = FUN_1000e87dc(plVar4,&local_78);
                  local_87 = *(int *)(lVar2 + 0x10) == 0x102;
                }
              }
            }
          }
          FUN_1001e0318(param_2 + 0x38,&local_b0);
          if (local_90 < 0) {
            operator_delete(local_a0);
          }
        }
        FUN_10015c800(&local_b0,1);
        puVar7 = puVar7 + 6;
        if (puVar7 == (undefined8 *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30)) {
          return;
        }
      } while( true );
    }
  }
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_10051a044(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "code";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "code";
      uStack_40 = 4;
      piVar2 = (int *)FUN_1000e87dc(param_1,&local_48);
      iVar3 = *piVar2;
      goto LAB_10051a0d4;
    }
  }
  iVar3 = 0;
LAB_10051a0d4:
  *(int *)(param_2 + 0x28) = iVar3;
  *(bool *)(param_2 + 0x2c) = iVar3 == 0;
  std::string::operator=((string *)(param_2 + 0x30),(string *)&DAT_101d91198);
  return;
}




void FUN_10051a108(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined1 local_80;
  undefined1 local_7f;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  FUN_10015cef8(param_2 + 0x28,0);
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_88._0_4_ = 0x100005;
    local_98 = "returnValue";
    uStack_90 = 0xb;
    lVar1 = FUN_1000e87dc(param_1,&local_98);
    if (*(int *)(lVar1 + 0x10) == 3) {
      local_88._0_4_ = 0x100005;
      local_98 = "returnValue";
      uStack_90 = 0xb;
      plVar2 = (long *)FUN_1000e87dc(param_1,&local_98);
      lVar1 = FUN_1000e86c0(plVar2,"player_global_loadout");
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar1) {
        return;
      }
      local_88._0_4_ = 0x100005;
      local_98 = "player_global_loadout";
      uStack_90 = 0x15;
      lVar1 = FUN_1000e87dc(plVar2,&local_98);
      if (*(int *)(lVar1 + 0x10) != 3) {
        return;
      }
      local_88._0_4_ = 0x100005;
      local_98 = "player_global_loadout";
      uStack_90 = 0x15;
      plVar2 = (long *)FUN_1000e87dc(plVar2,&local_98);
      lVar1 = FUN_1000e86c0(plVar2,"charm");
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar1) {
        return;
      }
      local_88._0_4_ = 0x100005;
      local_98 = "charm";
      uStack_90 = 5;
      lVar1 = FUN_1000e87dc(plVar2,&local_98);
      if (*(int *)(lVar1 + 0x10) != 3) {
        return;
      }
      local_88 = CONCAT44(local_88._4_4_,0x100005);
      local_98 = "charm";
      uStack_90 = 5;
      plVar2 = (long *)FUN_1000e87dc(plVar2,&local_98);
      if ((int)plVar2[1] == 0) {
        return;
      }
      puVar5 = (undefined8 *)*plVar2;
      do {
        local_98 = (char *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        if ((*(uint *)(puVar5 + 2) >> 0x14 & 1) != 0) {
          puVar4 = puVar5;
          if ((*(uint *)(puVar5 + 2) >> 0x16 & 1) == 0) {
            puVar4 = (undefined8 *)*puVar5;
          }
          FUN_1000ee4ec(&local_78,puVar4);
          std::string::operator=((string *)&local_98,(string *)&local_78);
          if (local_61 < '\0') {
            operator_delete(local_78);
          }
          puVar4 = puVar5 + 3;
          lVar1 = FUN_1000e86c0(puVar4,"equipped");
          if (puVar5[3] + (ulong)*(uint *)(puVar5 + 4) * 0x30 == lVar1) {
LAB_10051a32c:
            local_80 = false;
          }
          else {
            local_68 = 0x100005;
            local_78 = "equipped";
            uStack_70 = 8;
            lVar1 = FUN_1000e87dc(puVar4,&local_78);
            if ((*(byte *)(lVar1 + 0x11) & 1) == 0) goto LAB_10051a32c;
            local_68 = 0x100005;
            local_78 = "equipped";
            uStack_70 = 8;
            lVar1 = FUN_1000e87dc(puVar4,&local_78);
            local_80 = *(int *)(lVar1 + 0x10) == 0x102;
          }
          lVar1 = FUN_1000e86c0(puVar4,"metadata");
          if (puVar5[3] + (ulong)*(uint *)(puVar5 + 4) * 0x30 != lVar1) {
            local_68 = 0x100005;
            local_78 = "metadata";
            uStack_70 = 8;
            lVar1 = FUN_1000e87dc(puVar4,&local_78);
            if (*(int *)(lVar1 + 0x10) == 3) {
              local_68 = 0x100005;
              local_78 = "metadata";
              uStack_70 = 8;
              plVar3 = (long *)FUN_1000e87dc(puVar4,&local_78);
              lVar1 = FUN_1000e86c0(plVar3,"owned");
              if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar1) {
                local_7f = 0;
              }
              else {
                local_68 = 0x100005;
                local_78 = "owned";
                uStack_70 = 5;
                lVar1 = FUN_1000e87dc(plVar3,&local_78);
                if ((*(byte *)(lVar1 + 0x11) & 1) == 0) {
                  local_7f = 0;
                }
                else {
                  local_68 = 0x100005;
                  local_78 = "owned";
                  uStack_70 = 5;
                  lVar1 = FUN_1000e87dc(plVar3,&local_78);
                  local_7f = *(int *)(lVar1 + 0x10) == 0x102;
                }
              }
            }
          }
          FUN_10051f9e4(param_2 + 0x28,&local_98);
          if (local_88 < 0) {
            operator_delete(local_98);
          }
        }
        puVar5 = puVar5 + 6;
        if (puVar5 == (undefined8 *)(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30)) {
          return;
        }
      } while( true );
    }
  }
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_10051a488(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "code";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "code";
      uStack_40 = 4;
      piVar2 = (int *)FUN_1000e87dc(param_1,&local_48);
      iVar3 = *piVar2;
      goto LAB_10051a518;
    }
  }
  iVar3 = 0;
LAB_10051a518:
  *(int *)(param_2 + 0x28) = iVar3;
  *(bool *)(param_2 + 0x2c) = iVar3 == 0;
  std::string::operator=((string *)(param_2 + 0x30),(string *)&DAT_101d91198);
  return;
}




void FUN_10051a54c(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "code";
    uStack_40 = 4;
    lVar1 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "code";
      uStack_40 = 4;
      piVar2 = (int *)FUN_1000e87dc(param_1,&local_48);
      iVar3 = *piVar2;
      goto LAB_10051a5dc;
    }
  }
  iVar3 = 0;
LAB_10051a5dc:
  *(int *)(param_2 + 0x28) = iVar3;
  *(bool *)(param_2 + 0x2c) = iVar3 == 0;
  std::string::operator=((string *)(param_2 + 0x30),(string *)&DAT_101d91198);
  return;
}




void FUN_10051a610(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined4 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  FUN_10015d368(param_2 + 0x28,0);
  lVar1 = FUN_1000e86c0(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) {
    local_90._0_4_ = 0x100005;
    local_a0 = "returnValue";
    uStack_98 = 0xb;
    lVar1 = FUN_1000e87dc(param_1,&local_a0);
    if (*(int *)(lVar1 + 0x10) == 3) {
      local_90 = (void *)CONCAT44(local_90._4_4_,0x100005);
      local_a0 = "returnValue";
      uStack_98 = 0xb;
      plVar2 = (long *)FUN_1000e87dc(param_1,&local_a0);
      if ((int)plVar2[1] == 0) {
        return;
      }
      puVar7 = (undefined8 *)*plVar2;
      do {
        local_80 = 0;
        uStack_98 = 0;
        local_a0 = (char *)0x0;
        uStack_88 = 0;
        local_90 = (void *)0x0;
        puVar6 = puVar7;
        if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
          puVar6 = (undefined8 *)*puVar7;
        }
        FUN_1000ee4ec(&local_c0,puVar6);
        std::string::operator=((string *)&local_90,(string *)&local_c0);
        if (local_b0 < 0) {
          operator_delete(local_c0);
        }
        local_b0 = CONCAT44(local_b0._4_4_,0x100005);
        local_c0 = "heroes";
        uStack_b8 = 6;
        plVar3 = (long *)FUN_1000e87dc(puVar7 + 3,&local_c0);
        if ((int)plVar3[1] != 0) {
          puVar6 = (undefined8 *)*plVar3;
          do {
            local_c0 = (char *)0x0;
            uStack_b8 = 0;
            local_b0 = 0;
            if ((*(uint *)(puVar6 + 2) >> 0x14 & 1) != 0) {
              puVar5 = puVar6;
              if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
                puVar5 = (undefined8 *)*puVar6;
              }
              FUN_1000ee4ec(&local_78,puVar5);
              std::string::operator=((string *)&local_c0,(string *)&local_78);
              if (local_61 < '\0') {
                operator_delete(local_78);
              }
              puVar5 = puVar6 + 3;
              lVar1 = FUN_1000e86c0(puVar5,"mastery");
              if (puVar6[3] + (ulong)*(uint *)(puVar6 + 4) * 0x30 == lVar1) {
LAB_10051a7d4:
                local_a8 = 0;
              }
              else {
                local_68 = 0x100005;
                local_78 = "mastery";
                uStack_70 = 7;
                lVar1 = FUN_1000e87dc(puVar5,&local_78);
                if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_10051a7d4;
                local_68 = 0x100005;
                local_78 = "mastery";
                uStack_70 = 7;
                puVar4 = (undefined4 *)FUN_1000e87dc(puVar5,&local_78);
                local_a8 = *puVar4;
              }
              FUN_10051fa70(&local_a0,&local_c0);
              if (local_b0 < 0) {
                operator_delete(local_c0);
              }
            }
            puVar6 = puVar6 + 6;
          } while (puVar6 != (undefined8 *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30));
        }
        FUN_10051fafc(param_2 + 0x28,&local_a0);
        if (local_80 < 0) {
          operator_delete(local_90);
        }
        FUN_10015d2f4(&local_a0,1);
        puVar7 = puVar7 + 6;
        if (puVar7 == (undefined8 *)(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30)) {
          return;
        }
      } while( true );
    }
  }
  DAT_1018675c8 = 0xfffffffa;
  return;
}




void FUN_10051a89c(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  local_38 = 0x100005;
  local_48 = "code";
  uStack_40 = 4;
  piVar3 = (int *)FUN_1000e87dc(param_1,&local_48);
  iVar1 = *piVar3;
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 != 0) {
    *(undefined8 *)(param_2 + 0x2c) = 0xffffffff00000001;
    *(undefined1 *)(param_2 + 0x50) = 1;
    return;
  }
  local_38 = 0x100005;
  local_48 = "returnValue";
  uStack_40 = 0xb;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
  local_38 = 0x100005;
  local_48 = "status";
  uStack_40 = 6;
  puVar5 = (undefined4 *)FUN_1000e87dc(plVar4,&local_48);
  *(undefined4 *)(param_2 + 0x2c) = *puVar5;
  lVar6 = FUN_1000e86c0(plVar4,"errorCode");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar6) {
    if (*(int *)(param_2 + 0x2c) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_10051a9a0;
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "errorCode";
    uStack_40 = 9;
    puVar5 = (undefined4 *)FUN_1000e87dc(plVar4,&local_48);
    uVar9 = *puVar5;
LAB_10051a9a0:
    *(undefined4 *)(param_2 + 0x30) = uVar9;
  }
  lVar6 = FUN_1000e86c0(plVar4,"chestsAwarded");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar6) {
LAB_10051a9f0:
    pcVar8 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "chestsAwarded";
    uStack_40 = 0xd;
    lVar6 = FUN_1000e87dc(plVar4,&local_48);
    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) == 0) goto LAB_10051a9f0;
    local_38 = 0x100005;
    local_48 = "chestsAwarded";
    uStack_40 = 0xd;
    pcVar8 = (char *)FUN_1000e87dc(plVar4,&local_48);
    if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
      pcVar8 = *(char **)pcVar8;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar8);
  std::string::operator=((string *)(param_2 + 0x38),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar6 = FUN_1000e86c0(plVar4,"retry");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar6) {
    bVar2 = true;
    if (*(int *)(param_2 + 0x2c) != 1) {
      *(undefined1 *)(param_2 + 0x50) = 0;
      goto LAB_10051aa80;
    }
  }
  else {
    local_38 = 0x100005;
    local_48 = "retry";
    uStack_40 = 5;
    lVar6 = FUN_1000e87dc(plVar4,&local_48);
    bVar2 = *(int *)(lVar6 + 0x10) == 0x102;
  }
  *(bool *)(param_2 + 0x50) = bVar2;
LAB_10051aa80:
  lVar6 = FUN_1000e86c0(plVar4,"receiptData");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar6) {
    local_38 = 0x100005;
    local_48 = "receiptData";
    uStack_40 = 0xb;
    uVar7 = FUN_1000e87dc(plVar4,&local_48);
    FUN_1004f11bc(uVar7,param_2 + 0x58);
  }
  return;
}




void FUN_10051ab1c(long param_1)

{
  FUN_100503314(param_1 + -0x10);
  return;
}




void FUN_10051ab24(long param_1,int param_2)

{
  long lVar1;
  
  if (DAT_1018675cc != param_2) {
    lVar1 = FUN_1004f1830(param_1 + 0x2c98);
    if (lVar1 != 0) {
      FUN_1004f1638(param_1 + 0x2c98,lVar1);
      *(byte *)(lVar1 + 0x24) = *(byte *)(lVar1 + 0x24) | 7;
    }
  }
  return;
}




void FUN_10051ab7c(long param_1)

{
  FUN_10051ab24(param_1 + -0x10);
  return;
}




void FUN_10051ab84(long param_1,int param_2)

{
  long lVar1;
  
  if (DAT_1018675cc != param_2) {
    lVar1 = FUN_1004f1830(param_1 + 0x2c98);
    if (lVar1 != 0) {
      FUN_1004f1638(param_1 + 0x2c98,lVar1);
      *(byte *)(lVar1 + 0x24) = *(byte *)(lVar1 + 0x24) & 0xf8 | 5;
    }
  }
  return;
}




void FUN_10051abe4(long param_1)

{
  FUN_10051ab84(param_1 + -0x10);
  return;
}




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




void FUN_10051b978(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100524af0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_10003330c(lVar4 + -0x38,param_2);
  *(undefined4 *)(lVar4 + -0x20) = *(undefined4 *)(param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x20);
  return;
}




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




long FUN_10051c278(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar5 = (ulong)uVar1 * (ulong)uVar3 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar3) goto LAB_10051c2d0;
        iVar4 = (int)uVar5;
        uVar2 = iVar4 - 1;
        uVar5 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar4);
      uVar5 = 0;
    }
LAB_10051c2d0:
    if ((int)uVar5 < (int)uVar1) {
      do {
        uVar2 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
        if (uVar3 <= uVar2) {
          if (uVar2 != uVar3) {
            return 0;
          }
          return *(long *)(param_1 + 6) + uVar5 * 0x90;
        }
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar2;
      } while (uVar1 != uVar2);
    }
  }
  return 0;
}




void FUN_10051c320(uint *param_1,undefined4 *param_2,string *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  string *this;
  undefined8 uVar8;
  
  uVar4 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)uVar1 * (ulong)uVar4;
    uVar7 = uVar6 >> 0x20;
    if (0 < (int)(uVar6 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar7 * 4) <= uVar4) goto LAB_10051c37c;
        iVar5 = (int)uVar7;
        uVar3 = iVar5 - 1;
        uVar7 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar5);
      uVar7 = 0;
    }
LAB_10051c37c:
    uVar6 = uVar7;
    if ((int)uVar7 < (int)uVar1) {
      do {
        uVar6 = uVar7;
        if (uVar4 <= *(uint *)(*(long *)(param_1 + 2) + uVar7 * 4)) break;
        uVar3 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar3;
        uVar6 = (ulong)uVar1;
      } while (uVar1 != uVar3);
    }
  }
  this = (string *)(*(long *)(param_1 + 6) + uVar6 * 0x90);
  std::string::operator=(this,param_3);
  std::string::operator=(this + 0x18,param_3 + 0x18);
  std::string::operator=(this + 0x30,param_3 + 0x30);
  std::string::operator=(this + 0x48,param_3 + 0x48);
  std::string::operator=(this + 0x60,param_3 + 0x60);
  uVar2 = *(undefined4 *)(param_3 + 0x88);
  uVar8 = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(this + 0x78) = uVar8;
  *(undefined4 *)(this + 0x88) = uVar2;
  return;
}




void FUN_10051c40c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1001559a4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_10003330c(lVar4 + -0x38,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  *(undefined8 *)(lVar4 + -8) = uVar7;
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  return;
}




void FUN_10051c4a0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100156364(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x160;
  FUN_10003330c(lVar4 + -0x160,param_2);
  *(undefined1 *)(lVar4 + -0x148) = *(undefined1 *)(param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x140,param_2 + 0x20);
  *(undefined4 *)(lVar4 + -0x128) = *(undefined4 *)(param_2 + 0x38);
  FUN_10003330c(lVar4 + -0x120,param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar9 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar4 + -0xe0) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar4 + -0xe8) = uVar9;
  *(undefined8 *)(lVar4 + -0xf0) = uVar8;
  *(undefined8 *)(lVar4 + -0xf8) = uVar7;
  *(undefined8 *)(lVar4 + -0x100) = uVar6;
  *(undefined8 *)(lVar4 + -0x108) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  uVar10 = *(undefined8 *)(param_2 + 0xb0);
  uVar9 = *(undefined8 *)(param_2 + 0xa8);
  uVar11 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(lVar4 + -0xa0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar4 + -0xa8) = uVar11;
  *(undefined8 *)(lVar4 + -0xb0) = uVar10;
  *(undefined8 *)(lVar4 + -0xb8) = uVar9;
  *(undefined8 *)(lVar4 + -0xc0) = uVar8;
  *(undefined8 *)(lVar4 + -200) = uVar7;
  *(undefined8 *)(lVar4 + -0xd0) = uVar6;
  *(undefined8 *)(lVar4 + -0xd8) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0xd0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar8 = *(undefined8 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  uVar10 = *(undefined8 *)(param_2 + 0xf0);
  uVar9 = *(undefined8 *)(param_2 + 0xe8);
  uVar11 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(lVar4 + -0x60) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(lVar4 + -0x68) = uVar11;
  *(undefined8 *)(lVar4 + -0x70) = uVar10;
  *(undefined8 *)(lVar4 + -0x78) = uVar9;
  *(undefined8 *)(lVar4 + -0x80) = uVar8;
  *(undefined8 *)(lVar4 + -0x88) = uVar7;
  *(undefined8 *)(lVar4 + -0x90) = uVar6;
  *(undefined8 *)(lVar4 + -0x98) = uVar5;
  FUN_1000a72a4(lVar4 + -0x58,param_2 + 0x108);
  thunk_FUN_1004e439c(lVar4 + -0x48,param_2 + 0x118);
  *(undefined8 *)(lVar4 + -0x38) = *(undefined8 *)(param_2 + 0x128);
  FUN_1000a72a4(lVar4 + -0x30,param_2 + 0x130);
  uVar5 = *(undefined8 *)(param_2 + 0x140);
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  uVar6 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  *(undefined8 *)(lVar4 + -8) = uVar7;
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  return;
}




void FUN_10051c5e8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1001590fc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_10003330c(lVar4 + -0x38,param_2);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_10051c684(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015939c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa0;
  FUN_10003330c(lVar4 + -0xa0,param_2);
  FUN_10003330c(lVar4 + -0x88,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x70,param_2 + 0x30);
  *(undefined4 *)(lVar4 + -0x58) = *(undefined4 *)(param_2 + 0x48);
  FUN_10003330c(lVar4 + -0x50,param_2 + 0x50);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x68);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x80);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x98);
  return;
}




void FUN_10051c758(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100524bec(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xc;
  uVar5 = *param_2;
  *(undefined4 *)(lVar4 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + -0xc) = uVar5;
  return;
}




void FUN_10051c7e4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100524c78(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10003330c(lVar4 + -0x30,param_2);
  thunk_FUN_1004e439c(lVar4 + -0x18,param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_10051c880(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100524d78(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  thunk_FUN_1004e439c(lVar4 + -0x58,param_2);
  FUN_10003330c(lVar4 + -0x48,param_2 + 0x10);
  FUN_10003330c(lVar4 + -0x30,param_2 + 0x28);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x40);
  return;
}




bool FUN_10051c928(long param_1,long param_2)

{
  return *(int *)(param_2 + 0x48) < *(int *)(param_1 + 0x48);
}




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




void FUN_10051cf54(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1001599c4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x108;
  FUN_10003330c(lVar4 + -0x108,param_2);
  thunk_FUN_1004e439c(lVar4 + -0xf0,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0xe0,param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar4 + -0xc0) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar4 + -200) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  uVar11 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar4 + -0x80) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar4 + -0x88) = uVar11;
  *(undefined8 *)(lVar4 + -0x90) = uVar10;
  *(undefined8 *)(lVar4 + -0x98) = uVar9;
  *(undefined8 *)(lVar4 + -0xa0) = uVar8;
  *(undefined8 *)(lVar4 + -0xa8) = uVar7;
  *(undefined8 *)(lVar4 + -0xb0) = uVar6;
  *(undefined8 *)(lVar4 + -0xb8) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  uVar9 = *(undefined8 *)(param_2 + 0xb0);
  uVar11 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar4 + -0x40) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(lVar4 + -0x48) = uVar11;
  *(undefined8 *)(lVar4 + -0x50) = uVar10;
  *(undefined8 *)(lVar4 + -0x58) = uVar9;
  *(undefined8 *)(lVar4 + -0x60) = uVar8;
  *(undefined8 *)(lVar4 + -0x68) = uVar7;
  *(undefined8 *)(lVar4 + -0x70) = uVar6;
  *(undefined8 *)(lVar4 + -0x78) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0xd8);
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  uVar8 = *(undefined8 *)(param_2 + 0xe8);
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  uVar10 = *(undefined8 *)(param_2 + 0xf8);
  uVar9 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(lVar4 + -9) = *(undefined4 *)(param_2 + 0xff);
  *(undefined8 *)(lVar4 + -0x10) = uVar10;
  *(undefined8 *)(lVar4 + -0x18) = uVar9;
  *(undefined8 *)(lVar4 + -0x20) = uVar8;
  *(undefined8 *)(lVar4 + -0x28) = uVar7;
  *(undefined8 *)(lVar4 + -0x30) = uVar6;
  *(undefined8 *)(lVar4 + -0x38) = uVar5;
  return;
}




void FUN_10051d048(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100159b94(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(param_2 + 0x18);
  return;
}




void FUN_10051d0d4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100159cfc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_10003330c(lVar4 + -0x38,param_2);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_10051d170(long *param_1,undefined4 *param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  lVar2 = FUN_1000e86c0(param_1,"guildSettings");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "guildSettings";
  uStack_50 = 0xd;
  lVar2 = FUN_1000e87dc(param_1,&local_58);
  if (*(int *)(lVar2 + 0x10) != 3) {
    return;
  }
  local_48 = 0x100005;
  local_58 = "guildSettings";
  uStack_50 = 0xd;
  plVar3 = (long *)FUN_1000e87dc(param_1,&local_58);
  lVar2 = FUN_1000e86c0(plVar3,"primeTimeUtcHour");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d248:
    uVar7 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "primeTimeUtcHour";
    uStack_50 = 0x10;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051d248;
    local_48 = 0x100005;
    local_58 = "primeTimeUtcHour";
    uStack_50 = 0x10;
    puVar4 = (undefined4 *)FUN_1000e87dc(plVar3,&local_58);
    uVar7 = *puVar4;
  }
  *param_2 = uVar7;
  lVar2 = FUN_1000e86c0(plVar3,"minimumSkillTier");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d2bc:
    uVar7 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = "minimumSkillTier";
    uStack_50 = 0x10;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051d2bc;
    local_48 = 0x100005;
    local_58 = "minimumSkillTier";
    uStack_50 = 0x10;
    puVar4 = (undefined4 *)FUN_1000e87dc(plVar3,&local_58);
    uVar7 = *puVar4;
  }
  param_2[1] = uVar7;
  lVar2 = FUN_1000e86c0(plVar3,"guildType");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d330:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "guildType";
    uStack_50 = 9;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d330;
    local_48 = 0x100005;
    local_58 = "guildType";
    uStack_50 = 9;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 2),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"guildLanguageCode");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d3a8:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "guildLanguageCode";
    uStack_50 = 0x11;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d3a8;
    local_48 = 0x100005;
    local_58 = "guildLanguageCode";
    uStack_50 = 0x11;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 8),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"guildMessage");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d420:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "guildMessage";
    uStack_50 = 0xc;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d420;
    local_48 = 0x100005;
    local_58 = "guildMessage";
    uStack_50 = 0xc;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0xe),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"resourceLabel1");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d498:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "resourceLabel1";
    uStack_50 = 0xe;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d498;
    local_48 = 0x100005;
    local_58 = "resourceLabel1";
    uStack_50 = 0xe;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x14),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"resourceLabel2");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d510:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "resourceLabel2";
    uStack_50 = 0xe;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d510;
    local_48 = 0x100005;
    local_58 = "resourceLabel2";
    uStack_50 = 0xe;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x1a),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"resourceLabel3");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d588:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "resourceLabel3";
    uStack_50 = 0xe;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d588;
    local_48 = 0x100005;
    local_58 = "resourceLabel3";
    uStack_50 = 0xe;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x20),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"resourceURL1");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d600:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "resourceURL1";
    uStack_50 = 0xc;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d600;
    local_48 = 0x100005;
    local_58 = "resourceURL1";
    uStack_50 = 0xc;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x26),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"resourceURL2");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d678:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "resourceURL2";
    uStack_50 = 0xc;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d678;
    local_48 = 0x100005;
    local_58 = "resourceURL2";
    uStack_50 = 0xc;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x2c),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(plVar3,"resourceURL3");
  if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 == lVar2) {
LAB_10051d6f0:
    pcVar5 = "";
  }
  else {
    local_48 = 0x100005;
    local_58 = "resourceURL3";
    uStack_50 = 0xc;
    lVar2 = FUN_1000e87dc(plVar3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051d6f0;
    local_48 = 0x100005;
    local_58 = "resourceURL3";
    uStack_50 = 0xc;
    pcVar5 = (char *)FUN_1000e87dc(plVar3,&local_58);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_1000ee4ec(&local_58,pcVar5);
  std::string::operator=((string *)(param_2 + 0x32),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  lVar2 = FUN_1000e86c0(param_1,"memberType");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "memberType";
    uStack_50 = 10;
    lVar2 = FUN_1000e87dc(param_1,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "memberType";
      uStack_50 = 10;
      piVar6 = (int *)FUN_1000e87dc(param_1,&local_58);
      bVar1 = *piVar6 != 0;
      goto LAB_10051d920;
    }
  }
  bVar1 = false;
LAB_10051d920:
  *(bool *)(param_2 + 0x38) = bVar1;
  return;
}




void FUN_10051d93c(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100526814(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_1005268e0(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x1a0 + -0x1a0,param_2);
  return;
}




bool FUN_10051d9c0(long param_1,long param_2)

{
  return *(int *)(param_2 + 0x48) < *(int *)(param_1 + 0x48);
}




void FUN_10051d9d4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015a7f4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_10003330c(lVar5 + -0x38,param_2);
  thunk_FUN_1004e439c(lVar5 + -0x20,param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar5 + -9) = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_10051da78(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10052832c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  thunk_FUN_1004e439c(lVar4 + -0x68,param_2);
  FUN_10003330c(lVar4 + -0x58,param_2 + 0x10);
  FUN_10003330c(lVar4 + -0x40,param_2 + 0x28);
  thunk_FUN_1004e439c(lVar4 + -0x28,param_2 + 0x40);
  thunk_FUN_1004e439c(lVar4 + -0x18,param_2 + 0x50);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x60);
  return;
}




void FUN_10051db38(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015758c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_100157664(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x80 + -0x80,param_2);
  return;
}




void FUN_10051dbb8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100157c74(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10003330c(lVar4 + -0x30,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x28);
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




undefined8
FUN_10051dc50(long *param_1,string *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  void *local_48 [2];
  char local_31;
  
  if ((int)param_1[2] == 3) {
    lVar1 = FUN_1000e86c0(param_1,"hashedSku");
    if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar1) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar1 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar2 = (long *)(lVar1 + 0x18);
      if ((*(uint *)(lVar1 + 0x28) >> 0x16 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
      FUN_1000ee4ec(local_48,plVar2);
      std::string::operator=(param_2,(string *)local_48);
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    lVar1 = FUN_1000e86c0(param_1,"assetType");
    if ((*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar1) &&
       ((*(uint *)(lVar1 + 0x28) >> 0x14 & 1) != 0)) {
      plVar2 = (long *)(lVar1 + 0x18);
      if ((*(uint *)(lVar1 + 0x28) >> 0x16 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
      FUN_1000ee4ec(local_48,plVar2);
      std::string::operator=(param_2 + 0x18,(string *)local_48);
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      return 1;
    }
  }
  return 0;
}




ulong FUN_10051dd60(undefined8 param_1,long *param_2,string *param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  void *local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  void *local_78 [2];
  char local_61;
  
  if ((((int)param_2[2] == 3) &&
      (lVar3 = FUN_1000e86c0(param_2,"id"), *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3
      )) && ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) != 0)) {
    plVar5 = (long *)(lVar3 + 0x18);
    if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
      plVar5 = (long *)*plVar5;
    }
    FUN_1000ee4ec(local_78,plVar5);
    std::string::operator=(param_3,(string *)local_78);
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
    lVar3 = FUN_1000e86c0(param_2,"completed");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 8 & 1) == 0) {
        return 0;
      }
      param_3[0x10c] = (string)(*(uint *)(lVar3 + 0x28) == 0x102);
    }
    lVar3 = FUN_1000e86c0(param_2,"redeemed");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 8 & 1) == 0) {
        return 0;
      }
      param_3[0x10d] = (string)(*(uint *)(lVar3 + 0x28) == 0x102);
    }
    lVar3 = FUN_1000e86c0(param_2,"progressState");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(byte *)(lVar3 + 0x29) >> 2 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0x104) = *(undefined4 *)(lVar3 + 0x18);
    }
    lVar3 = FUN_1000e86c0(param_2,"questType");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0x18,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"questSubType");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0x30,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"timeToComplete");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(byte *)(lVar3 + 0x29) >> 2 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0x108) = *(undefined4 *)(lVar3 + 0x18);
    }
    lVar3 = FUN_1000e86c0(param_2,"title");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0x48,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"shortDesc");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0x60,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"longDesc");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0x78,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"progress");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0x90,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"buttonText");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0xa8,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"showAttention");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 8 & 1) == 0) {
        return 0;
      }
      param_3[0x10f] = (string)(*(uint *)(lVar3 + 0x28) == 0x102);
    }
    lVar3 = FUN_1000e86c0(param_2,"rewardXp");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(byte *)(lVar3 + 0x29) >> 2 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0xf8) = *(undefined4 *)(lVar3 + 0x18);
    }
    lVar3 = FUN_1000e86c0(param_2,"skipCost");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(byte *)(lVar3 + 0x29) >> 2 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0xfc) = *(undefined4 *)(lVar3 + 0x18);
    }
    lVar3 = FUN_1000e86c0(param_2,"progressMax");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(byte *)(lVar3 + 0x29) >> 2 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0x100) = *(undefined4 *)(lVar3 + 0x18);
    }
    lVar3 = FUN_1000e86c0(param_2,"resourceId");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      if ((*(uint *)(lVar3 + 0x28) >> 0x14 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)(lVar3 + 0x18);
      if ((*(uint *)(lVar3 + 0x28) >> 0x16 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
      FUN_1000ee4ec(local_78,plVar5);
      std::string::operator=(param_3 + 0xc0,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    lVar3 = FUN_1000e86c0(param_2,"rewardChests");
    if ((*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) && (*(int *)(lVar3 + 0x28) == 4))
    {
      uStack_a8 = 0;
      local_b0 = (void *)0x0;
      local_98 = (void *)0x0;
      lStack_a0 = 0;
      lStack_88 = 0;
      local_90 = 0;
      FUN_10051e51c(param_3 + 0xd8,*(undefined4 *)(lVar3 + 0x24),&local_b0);
      if (lStack_88 < 0) {
        operator_delete(local_98);
      }
      if (lStack_a0 < 0) {
        operator_delete(local_b0);
      }
      if (*(int *)(lVar3 + 0x20) == 0) {
        uVar4 = 1;
      }
      else {
        uVar7 = 0;
        lVar6 = *(long *)(lVar3 + 0x18);
        do {
          uVar4 = FUN_10051dc50(lVar6,*(long *)(param_3 + 0xe0) + uVar7 * 0x30);
          lVar6 = lVar6 + 0x18;
          if (lVar6 == *(long *)(lVar3 + 0x18) + (ulong)*(uint *)(lVar3 + 0x20) * 0x18) break;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while ((uVar4 & 1) != 0);
      }
      lVar3 = FUN_1000e86c0(param_2,"metadata");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
        return uVar4;
      }
      if (*(int *)(lVar3 + 0x28) == 3) {
        uStack_c8 = 0;
        local_d0 = (void *)0x0;
        uStack_b8 = 0;
        lStack_c0 = 0;
        FUN_10051e61c(param_3 + 0xe8,*(undefined4 *)(lVar3 + 0x20),&local_d0);
        if (lStack_c0 < 0) {
          operator_delete(local_d0);
        }
        if (((uint)(*(int *)(lVar3 + 0x20) != 0) & (uint)uVar4) != 1) {
          return uVar4;
        }
        uVar4 = 0;
        lVar6 = *(long *)(lVar3 + 0x18);
        do {
          uVar2 = *(uint *)(lVar6 + 0x28);
          if ((uVar2 >> 10 & 1) == 0) break;
          pcVar1 = (char *)(*(long *)(param_3 + 0xf0) + uVar4 * 0x20);
          std::string::assign(pcVar1);
          *(undefined4 *)(pcVar1 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
          uVar4 = (ulong)((int)uVar4 + 1);
          lVar6 = lVar6 + 0x30;
        } while (lVar6 != *(long *)(lVar3 + 0x18) + (ulong)*(uint *)(lVar3 + 0x20) * 0x30);
        return (ulong)(uVar2 >> 10 & 1);
      }
    }
  }
  return 0;
}




void FUN_10051e51c(uint *param_1,ulong param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = (uint)param_2;
  if (uVar2 != 0) {
    if (param_1[1] < uVar2) {
      FUN_1001585f0(param_1,param_2);
    }
    uVar3 = *param_1;
    if (uVar3 < uVar2) {
      lVar5 = (ulong)uVar3 * 0x30;
      iVar6 = uVar2 - uVar3;
      do {
        lVar1 = FUN_10003330c(*(long *)(param_1 + 2) + lVar5,param_3);
        FUN_10003330c(lVar1 + 0x18,param_3 + 0x18);
        lVar5 = lVar5 + 0x30;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar3 = *param_1;
    }
    if (uVar2 < uVar3) {
      pcVar4 = (char *)(*(long *)(param_1 + 2) + (param_2 & 0xffffffff) * 0x30 + 0x17);
      lVar5 = (ulong)uVar3 * 0x30 + (param_2 & 0xffffffff) * -0x30;
      do {
        if (pcVar4[0x18] < '\0') {
          operator_delete(*(void **)(pcVar4 + 1));
        }
        if (*pcVar4 < '\0') {
          operator_delete(*(void **)(pcVar4 + -0x17));
        }
        pcVar4 = pcVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
    }
    *param_1 = uVar2;
    return;
  }
  FUN_100158964(param_1);
  return;
}




void FUN_10051e61c(uint *param_1,ulong param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = (uint)param_2;
  if (uVar2 != 0) {
    if (param_1[1] < uVar2) {
      FUN_100158758(param_1,param_2);
    }
    uVar3 = *param_1;
    if (uVar3 < uVar2) {
      lVar5 = (ulong)uVar3 << 5;
      iVar6 = uVar2 - uVar3;
      do {
        lVar1 = FUN_10003330c(*(long *)(param_1 + 2) + lVar5,param_3);
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
        lVar5 = lVar5 + 0x20;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar3 = *param_1;
    }
    if (uVar2 < uVar3) {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (param_2 & 0xffffffff) * 0x20);
      lVar5 = (ulong)uVar3 * 0x20 + (param_2 & 0xffffffff) * -0x20;
      do {
        if (*(char *)((long)puVar4 + 0x17) < '\0') {
          operator_delete((void *)*puVar4);
        }
        puVar4 = puVar4 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    *param_1 = uVar2;
    return;
  }
  FUN_1001588f0(param_1);
  return;
}




ulong FUN_10051e700(undefined8 param_1,long *param_2,uint *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((int)param_2[2] == 4) {
    uVar3 = *param_3;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    FUN_10051e7f0(param_3,*(int *)((long)param_2 + 0xc) + uVar3,&local_160);
    uVar1 = FUN_100158828(&local_160);
    if ((int)param_2[1] == 0) {
      uVar1 = 1;
    }
    else {
      lVar2 = *param_2;
      do {
        uVar1 = FUN_10051dd60(uVar1,lVar2,*(long *)(param_3 + 2) + (ulong)uVar3 * 0x110,param_4,
                              param_5);
        lVar2 = lVar2 + 0x18;
        if (lVar2 == *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x18) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar1 & 1) != 0);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_10051e7f0(uint *param_1,ulong param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    lVar1 = *(long *)(param_1 + 2);
    if (lVar1 != 0) {
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x110;
        do {
          lVar1 = FUN_100158828(lVar1);
          lVar1 = lVar1 + 0x110;
          lVar4 = lVar4 + -0x110;
        } while (lVar4 != 0);
      }
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_100158400(param_1,param_2);
    }
    uVar3 = *param_1;
    if (uVar3 < uVar2) {
      lVar1 = (ulong)uVar3 * 0x110 + 0x90;
      iVar5 = uVar2 - uVar3;
      do {
        lVar4 = *(long *)(param_1 + 2) + lVar1;
        FUN_10003330c(lVar4 + -0x90,param_3);
        FUN_10003330c(lVar4 + -0x78,param_3 + 0x18);
        FUN_10003330c(lVar4 + -0x60,param_3 + 0x30);
        FUN_10003330c(lVar4 + -0x48,param_3 + 0x48);
        FUN_10003330c(lVar4 + -0x30,param_3 + 0x60);
        FUN_10003330c(lVar4 + -0x18,param_3 + 0x78);
        FUN_10003330c(lVar4,param_3 + 0x90);
        FUN_10003330c(lVar4 + 0x18,param_3 + 0xa8);
        FUN_10003330c(lVar4 + 0x30,param_3 + 0xc0);
        FUN_100158568(lVar4 + 0x48,param_3 + 0xd8);
        FUN_1001586e4(lVar4 + 0x58,param_3 + 0xe8);
        uVar7 = *(undefined8 *)(param_3 + 0x100);
        uVar6 = *(undefined8 *)(param_3 + 0xf8);
        *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(param_3 + 0x108);
        *(undefined8 *)(lVar4 + 0x70) = uVar7;
        *(undefined8 *)(lVar4 + 0x68) = uVar6;
        lVar1 = lVar1 + 0x110;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar3 = *param_1;
      param_2 = param_2 & 0xffffffff;
    }
    if ((uint)param_2 < uVar3) {
      lVar1 = *(long *)(param_1 + 2) + (param_2 & 0xffffffff) * 0x110;
      lVar4 = (ulong)uVar3 * 0x110 + (param_2 & 0xffffffff) * -0x110;
      do {
        lVar1 = FUN_100158828(lVar1);
        lVar1 = lVar1 + 0x110;
        lVar4 = lVar4 + -0x110;
      } while (lVar4 != 0);
    }
    *param_1 = (uint)param_2;
  }
  return;
}




void FUN_10051e9c0(void)

{
  FUN_10051e700();
  return;
}




ulong FUN_10051e9c8(char *param_1,long *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  uint local_64;
  
  iVar3 = std::string::compare(param_1);
  if ((iVar3 == 0) && ((int)param_2[2] == 3)) {
    if ((int)param_2[1] == 0) {
      uVar5 = 1;
    }
    else {
      uVar1 = *param_3;
      uVar8 = (ulong)uVar1;
      pcVar10 = (char *)*param_2;
      uVar9 = uVar8;
      local_64 = uVar1;
      do {
        pcVar7 = pcVar10;
        if (((byte)pcVar10[0x12] >> 6 & 1) == 0) {
          pcVar7 = *(char **)pcVar10;
        }
        iVar4 = _strcmp(pcVar7,"active");
        iVar3 = 0;
        if ((iVar4 == 0) || (iVar3 = _strcmp(pcVar7,"redeemed"), iVar3 != 0)) {
          uVar5 = FUN_10051e700(iVar3,pcVar10 + 0x18,param_3,param_4,iVar4 != 0);
        }
        else {
          local_64 = *param_3;
          uVar5 = FUN_10051e700(0,pcVar10 + 0x18,param_3,param_4,1);
          uVar9 = (ulong)*param_3;
        }
        pcVar10 = pcVar10 + 0x30;
      } while ((pcVar10 != (char *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30)) &&
              ((uVar5 & 1) != 0));
      uVar2 = *param_3;
      if (uVar1 < uVar2) {
        lVar11 = uVar8 * 0x110 + 0x10d;
        do {
          lVar6 = *(long *)(param_3 + 2);
          if ((local_64 <= uVar8) && (uVar8 < uVar9)) {
            *(undefined2 *)(lVar6 + lVar11 + -1) = 0x101;
          }
          std::string::assign((char *)(lVar6 + lVar11 + -0xf5));
          std::string::assign((char *)(*(long *)(param_3 + 2) + lVar11 + -0xdd));
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 0x110;
        } while (uVar2 != (uint)uVar8);
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}




void FUN_10051ee14(long *param_1,string *param_2)

{
  string sVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  lVar2 = FUN_1000e86c0(param_1,"id");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051ee80:
    pcVar3 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "id";
    uStack_40 = 2;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051ee80;
    local_38 = 0x100005;
    local_48 = "id";
    uStack_40 = 2;
    pcVar3 = (char *)FUN_1000e87dc(param_1,&local_48);
    if (((byte)pcVar3[0x12] >> 6 & 1) == 0) {
      pcVar3 = *(char **)pcVar3;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar3);
  std::string::operator=(param_2,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e86c0(param_1,"def");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051eef8:
    pcVar3 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "def";
    uStack_40 = 3;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051eef8;
    local_38 = 0x100005;
    local_48 = "def";
    uStack_40 = 3;
    pcVar3 = (char *)FUN_1000e87dc(param_1,&local_48);
    if (((byte)pcVar3[0x12] >> 6 & 1) == 0) {
      pcVar3 = *(char **)pcVar3;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar3);
  std::string::operator=(param_2 + 0x18,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e86c0(param_1,"level");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051ef70:
    uVar6 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "level";
    uStack_40 = 5;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051ef70;
    local_38 = 0x100005;
    local_48 = "level";
    uStack_40 = 5;
    puVar5 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar6 = *puVar5;
  }
  *(undefined4 *)(param_2 + 0x60) = uVar6;
  lVar2 = FUN_1000e86c0(param_1,"fragments");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051f03c:
    uVar6 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "fragments";
    uStack_40 = 9;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051f03c;
    local_38 = 0x100005;
    local_48 = "fragments";
    uStack_40 = 9;
    puVar5 = (undefined4 *)FUN_1000e87dc(param_1,&local_48);
    uVar6 = *puVar5;
  }
  *(undefined4 *)(param_2 + 100) = uVar6;
  lVar2 = FUN_1000e86c0(param_1,"hero");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051f0b0:
    pcVar3 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "hero";
    uStack_40 = 4;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10051f0b0;
    local_38 = 0x100005;
    local_48 = "hero";
    uStack_40 = 4;
    pcVar3 = (char *)FUN_1000e87dc(param_1,&local_48);
    if (((byte)pcVar3[0x12] >> 6 & 1) == 0) {
      pcVar3 = *(char **)pcVar3;
    }
  }
  FUN_1000ee4ec(&local_48,pcVar3);
  std::string::operator=(param_2 + 0x48,(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e86c0(param_1,"maxLevel");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_10051f128:
    sVar1 = (string)0x0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "maxLevel";
    uStack_40 = 8;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10051f128;
    local_38 = 0x100005;
    local_48 = "maxLevel";
    uStack_40 = 8;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    sVar1 = (string)(*(int *)(lVar2 + 0x10) == 0x102);
  }
  param_2[0x70] = sVar1;
  local_38 = 0x100005;
  local_48 = "levelRequirements";
  uStack_40 = 0x11;
  plVar4 = (long *)FUN_1000e87dc(param_1,&local_48);
  if ((int)plVar4[2] != 3) {
    uVar6 = 0xffffffff;
    *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
    goto LAB_10051f2a0;
  }
  lVar2 = FUN_1000e86c0(plVar4,"[fragments]");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_10051f1fc:
    uVar6 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "[fragments]";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(plVar4,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10051f1fc;
    local_38 = 0x100005;
    local_48 = "[fragments]";
    uStack_40 = 0xb;
    puVar5 = (undefined4 *)FUN_1000e87dc(plVar4,&local_48);
    uVar6 = *puVar5;
  }
  *(undefined4 *)(param_2 + 0x68) = uVar6;
  lVar2 = FUN_1000e86c0(plVar4,"silver");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "silver";
    uStack_40 = 6;
    lVar2 = FUN_1000e87dc(plVar4,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "silver";
      uStack_40 = 6;
      puVar5 = (undefined4 *)FUN_1000e87dc(plVar4,&local_48);
      uVar6 = *puVar5;
      goto LAB_10051f2a0;
    }
  }
  uVar6 = 0;
LAB_10051f2a0:
  *(undefined4 *)(param_2 + 0x6c) = uVar6;
  return;
}




void FUN_10051f2b8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1001567c4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x78;
  FUN_10003330c(lVar4 + -0x78,param_2);
  FUN_10003330c(lVar4 + -0x60,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x48,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x30,param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x70);
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_10051f374(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  if (uVar5 == param_1[1]) {
    uVar2 = 0;
    if (uVar5 != 0xffffffff) {
      uVar2 = uVar5 + (~uVar5 | 0xfffffff0) + 0x11;
    }
    if (uVar5 < 0x20) {
      uVar2 = uVar5 << 1;
    }
    uVar3 = uVar5 + 1;
    if (uVar5 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100528494(param_1,uVar3);
    uVar5 = *param_1;
  }
  *param_1 = uVar5 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar5 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(lVar1 + -4) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(lVar1 + -8) = uVar4;
  return;
}




undefined8 * FUN_10051f408(long param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_10051f480:
    iVar4 = *param_2;
  }
  else {
    iVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, *(int *)((long)puVar2 + 0x1c) <= iVar4) {
        if (iVar4 <= *(int *)((long)puVar2 + 0x1c)) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_10051f4a8;
          goto LAB_10051f480;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_10051f484;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_10051f484:
  puVar3 = operator_new(0x28);
  *(int *)((long)puVar3 + 0x1c) = iVar4;
  *(undefined4 *)(puVar3 + 4) = 0;
  FUN_100329770(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_10051f4a8:
  return puVar2 + 4;
}




void FUN_10051f4c0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015ad28(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10003330c(lVar4 + -0x30,param_2);
  FUN_10015ae20(lVar4 + -0x18,param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_10051f55c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015b3ec(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  *(undefined8 *)(lVar4 + -0x58) = *param_2;
  FUN_10003330c(lVar4 + -0x50,param_2 + 1);
  FUN_10003330c(lVar4 + -0x38,param_2 + 4);
  FUN_1000a72a4(lVar4 + -0x20,param_2 + 7);
  FUN_10015b534(lVar4 + -0x10,param_2 + 9);
  return;
}




void FUN_10051f618(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015b764(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10003330c(lVar4 + -0x28,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_10051f6a8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015b8b4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10003330c(lVar4 + -0x28,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_10051f738(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015ba0c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10003330c(lVar5 + -0x28,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar5 + -10) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_10051f7d0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015bea0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10003330c(lVar4 + -0x30,param_2);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_10051f860(long param_1)

{
  std::string::operator=((string *)(param_1 + 0x38),(string *)&DAT_101d91198);
  FUN_10015c28c(param_1 + 0x28,0);
  FUN_10015690c(param_1 + 0x50,0);
  FUN_10001629c(param_1 + 0x60,0);
  FUN_10001629c(param_1 + 0x70,0);
  return;
}




void FUN_10051f8b8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015c14c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  FUN_10003330c(lVar4 + -0x68,param_2);
  FUN_10003330c(lVar4 + -0x50,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x48);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x60);
  return;
}




void FUN_10051f96c(long param_1)

{
  FUN_10015ccb8(param_1 + 0x28,0);
  FUN_10015cc34(param_1 + 0x38,0);
  FUN_10015cbc0(param_1 + 0x48,0);
  FUN_10015cbc0(param_1 + 0x58,0);
  FUN_10015cbc0(param_1 + 0x68,0);
  FUN_10015cbc0(param_1 + 0x78,0);
  FUN_10015cbc0(param_1 + 0x88,0);
  FUN_10015cb3c(param_1 + 0x98,0);
  return;
}




void FUN_10051f9e4(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10015ce28(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_2 + 0x18);
  return;
}




void FUN_10051fa70(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10015d224(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_10051fafc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015d0c4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10015d1b0(lVar4 + -0x28,param_2);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x10);
  return;
}




void FUN_10051fb8c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10051fb98(long *param_1)

{
  undefined *puVar1;
  ostream *this;
  undefined *puVar2;
  
  this = (ostream *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_1014441f0 + 0x18;
  *(undefined **)(this + 0x70) = PTR_DAT_1014441f0 + 0x40;
  puVar2 = PTR_DAT_1014441e8;
  *(undefined **)this = puVar1;
  *(undefined **)(this + 8) = puVar2 + 0x10;
  if ((char)this[0x5f] < '\0') {
    operator_delete(*(void **)(this + 0x48));
  }
  std::streambuf::~streambuf((streambuf *)(this + 8));
  std::ostream::~ostream(this);
  std::ios::~ios((ios *)(this + 0x70));
  return;
}




void FUN_10051fc24(ostream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_1014441f0;
  *(undefined **)param_1 = PTR_DAT_1014441f0 + 0x18;
  puVar1 = PTR_DAT_1014441e8;
  *(undefined **)(param_1 + 0x70) = puVar2 + 0x40;
  *(undefined **)(param_1 + 8) = puVar1 + 0x10;
  if ((char)param_1[0x5f] < '\0') {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  std::streambuf::~streambuf((streambuf *)(param_1 + 8));
  std::ostream::~ostream(param_1);
  std::ios::~ios((ios *)(param_1 + 0x70));
  operator_delete(param_1);
  return;
}




void FUN_10051fca4(long *param_1)

{
  undefined *puVar1;
  ostream *this;
  undefined *puVar2;
  
  this = (ostream *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_1014441f0 + 0x18;
  *(undefined **)(this + 0x70) = PTR_DAT_1014441f0 + 0x40;
  puVar2 = PTR_DAT_1014441e8;
  *(undefined **)this = puVar1;
  *(undefined **)(this + 8) = puVar2 + 0x10;
  if ((char)this[0x5f] < '\0') {
    operator_delete(*(void **)(this + 0x48));
  }
  std::streambuf::~streambuf((streambuf *)(this + 8));
  std::ostream::~ostream(this);
  std::ios::~ios((ios *)(this + 0x70));
  operator_delete(this);
  return;
}




void FUN_10051fd38(streambuf *param_1)

{
  *(undefined **)param_1 = PTR_DAT_1014441e8 + 0x10;
  if ((char)param_1[0x57] < '\0') {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  std::streambuf::~streambuf(param_1);
  return;
}




void FUN_10051fd78(streambuf *param_1)

{
  void *pvVar1;
  
  *(undefined **)param_1 = PTR_DAT_1014441e8 + 0x10;
  if ((char)param_1[0x57] < '\0') {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  pvVar1 = (void *)std::streambuf::~streambuf(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10051fdbc(undefined8 *param_1,long param_2,long param_3,int param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x30);
  uVar1 = *(ulong *)(param_2 + 0x58);
  if (*(ulong *)(param_2 + 0x58) < uVar2) {
    *(ulong *)(param_2 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  if (((param_5 & 0x18) != 0) && (((param_5 & 0x18) != 0x18 || (param_4 != 1)))) {
    if (uVar1 == 0) {
      lVar4 = 0;
      if (param_4 != 0) goto LAB_10051fe08;
LAB_10051fe30:
      lVar6 = 0;
    }
    else {
      puVar3 = (undefined8 *)(param_2 + 0x40);
      if (*(char *)(param_2 + 0x57) < '\0') {
        puVar3 = (undefined8 *)*puVar3;
      }
      lVar4 = uVar1 - (long)puVar3;
      if (param_4 == 0) goto LAB_10051fe30;
LAB_10051fe08:
      lVar6 = lVar4;
      if (param_4 != 2) {
        if (param_4 != 1) goto LAB_10051fe74;
        if ((param_5 >> 3 & 1) == 0) {
          lVar6 = uVar2 - *(long *)(param_2 + 0x28);
        }
        else {
          lVar6 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        }
      }
    }
    lVar6 = lVar6 + param_3;
    lVar5 = -1;
    if ((lVar6 < 0) || (lVar4 < lVar6)) goto LAB_10051fe78;
    if ((lVar6 == 0) ||
       ((((param_5 >> 3 & 1) == 0 || (*(long *)(param_2 + 0x18) != 0)) &&
        (((param_5 >> 4 & 1) == 0 || (uVar2 != 0)))))) {
      if ((param_5 >> 3 & 1) != 0) {
        *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x10) + lVar6;
        *(ulong *)(param_2 + 0x20) = uVar1;
      }
      lVar5 = lVar6;
      if ((param_5 >> 4 & 1) != 0) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28) + (long)(int)lVar6;
      }
      goto LAB_10051fe78;
    }
  }
LAB_10051fe74:
  lVar5 = -1;
LAB_10051fe78:
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x10] = lVar5;
  return;
}




void FUN_10051febc(long *param_1,long param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010051fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x80),0,param_3);
  return;
}




ulong FUN_10051fed4(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x30);
  pbVar1 = *(byte **)(param_1 + 0x58);
  if (*(byte **)(param_1 + 0x58) < pbVar2) {
    *(byte **)(param_1 + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if ((*(byte *)(param_1 + 0x60) >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (*(byte **)(param_1 + 0x20) < pbVar1) {
      *(byte **)(param_1 + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(param_1 + 0x18) < pbVar2) {
      return (ulong)**(byte **)(param_1 + 0x18);
    }
  }
  return 0xffffffff;
}




undefined8 FUN_10051ff24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar2) {
    *(ulong *)(param_1 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    if ((uint)param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar2 - 1) == ((uint)param_2 & 0xff))) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      *(char *)(uVar2 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}




ulong FUN_10051ff90(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    puVar8 = (undefined1 *)param_1[6];
    puVar5 = (undefined1 *)param_1[7];
    if (puVar8 == puVar5) {
      if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar9 = param_1[5];
      lVar10 = param_1[0xb];
      plVar7 = param_1 + 8;
      std::string::push_back((char)plVar7);
      if (*(char *)((long)param_1 + 0x57) < '\0') {
        cVar4 = (char)param_1[10] + -1;
      }
      else {
        cVar4 = '\x16';
      }
      std::string::resize((ulong)plVar7,cVar4);
      if ((char)*(byte *)((long)param_1 + 0x57) < '\0') {
        plVar7 = (long *)param_1[8];
        uVar3 = param_1[9];
      }
      else {
        uVar3 = (ulong)*(byte *)((long)param_1 + 0x57);
      }
      puVar5 = (undefined1 *)((long)plVar7 + uVar3);
      puVar8 = (undefined1 *)((long)plVar7 + ((long)puVar8 - lVar9));
      param_1[5] = (long)plVar7;
      param_1[6] = (long)puVar8;
      param_1[7] = (long)puVar5;
      puVar6 = (undefined1 *)((long)plVar7 + (lVar10 - lVar9));
    }
    else {
      puVar6 = (undefined1 *)param_1[0xb];
    }
    if (puVar6 <= puVar8 + 1) {
      puVar6 = puVar8 + 1;
    }
    param_1[0xb] = (long)puVar6;
    if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
      plVar7 = param_1 + 8;
      if (*(char *)((long)param_1 + 0x57) < '\0') {
        plVar7 = (long *)*plVar7;
      }
      param_1[2] = (long)plVar7;
      param_1[3] = (long)plVar7 + (lVar2 - lVar1);
      param_1[4] = (long)puVar6;
    }
    if (puVar8 == puVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001005200e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
      return uVar3;
    }
    param_1[6] = (long)(puVar8 + 1);
    *puVar8 = (char)param_2;
    uVar3 = (ulong)(param_2 & 0xff);
  }
  return uVar3;
}

