// functions/00eac — 3 functions
#include "libGameKindred.h"




void FUN_00eac544(long *param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  char *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined1 auStack_1e0 [112];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [224];
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
    uVar10 = 0;
  }
  else {
    local_228 = "code";
    local_218 = CONCAT44(local_218._4_4_,0x100005);
    local_220 = 4;
    lVar5 = FUN_008feca4(param_1,&local_228);
    uVar10 = 0;
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      local_228 = "code";
      local_218 = CONCAT44(local_218._4_4_,0x100005);
      local_220 = 4;
      puVar6 = (undefined4 *)FUN_008feca4(param_1,&local_228);
      uVar10 = *puVar6;
    }
  }
  lVar5 = *(long *)(param_2 + 0x30);
  puVar1 = (uint *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x58) = uVar10;
  if (lVar5 != 0) {
    if (*puVar1 != 0) {
      lVar11 = (ulong)*puVar1 * 0x1a0;
      do {
        FUN_00964d08(lVar5);
        lVar11 = lVar11 + -0x1a0;
        lVar5 = lVar5 + 0x1a0;
      } while (lVar11 != 0);
    }
    *puVar1 = 0;
  }
  lVar5 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) goto LAB_00eacc4c;
  local_228 = "returnValue";
  local_218 = CONCAT44(local_218._4_4_,0x100005);
  local_220 = 0xb;
  lVar5 = FUN_008feca4(param_1,&local_228);
  if (*(int *)(lVar5 + 0x10) != 3) goto LAB_00eacc4c;
  FUN_00e70510(&local_228);
  memset(auStack_168,0,0xd8);
  memset(auStack_1e0,0,0x60);
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  FUN_00954ec0(auStack_170);
  FUN_00954d1c(auStack_1e0);
  local_88 = "returnValue";
  local_78 = 0x100005;
  local_80 = 0xb;
  plVar7 = (long *)FUN_008feca4(param_1,&local_88);
  lVar5 = FUN_008fd190(plVar7,"success");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
    bVar4 = false;
  }
  else {
    local_88 = "success";
    local_78 = 0x100005;
    local_80 = 7;
    lVar5 = FUN_008feca4(plVar7,&local_88);
    bVar4 = false;
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      local_88 = "success";
      local_78 = 0x100005;
      local_80 = 7;
      lVar5 = FUN_008feca4(plVar7,&local_88);
      bVar4 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_2 + 0x38) = bVar4;
  FUN_008fce60(param_2 + 0x40,&DAT_0320ffa8);
  if (*(char *)(param_2 + 0x38) != '\0') {
    lVar5 = FUN_008fd190(plVar7,"pending");
    if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 != lVar5) {
      local_88 = "pending";
      local_78 = 0x100005;
      local_80 = 7;
      lVar5 = FUN_008feca4(plVar7,&local_88);
      if (*(int *)(lVar5 + 0x10) == 4) {
        local_88 = "pending";
        local_78 = 0x100005;
        local_80 = 7;
        plVar8 = (long *)FUN_008feca4(plVar7,&local_88);
        if ((int)plVar8[1] != 0) {
          lVar5 = 0;
          uVar12 = 0;
          do {
            plVar2 = (long *)(*plVar8 + lVar5);
            lVar11 = FUN_008fd190(plVar2,"handle");
            if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 != lVar11) {
              local_88 = "handle";
              local_78 = 0x100005;
              local_80 = 6;
              lVar11 = FUN_008feca4(plVar2,&local_88);
              if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                local_88 = "handle";
                local_78 = 0x100005;
                local_80 = 6;
                lVar11 = FUN_008feca4(plVar2,&local_88);
                if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                  lVar11 = FUN_008fd190(plVar2,"handle");
                  if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar11) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_88 = "handle";
                    local_78 = 0x100005;
                    local_80 = 6;
                    lVar11 = FUN_008feca4(plVar2,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                      local_88 = "handle";
                      local_78 = 0x100005;
                      local_80 = 6;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar2,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_00e705a0(&local_228,puVar9);
                  lVar11 = FUN_008fd190(plVar2,"uuid");
                  if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar11) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_88 = "uuid";
                    local_78 = 0x100005;
                    local_80 = 4;
                    lVar11 = FUN_008feca4(plVar2,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                      local_88 = "uuid";
                      local_78 = 0x100005;
                      local_80 = 4;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar2,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_008fa54c(&local_88,puVar9);
                  FUN_008fce60(&local_218,&local_88);
                  if (((ulong)local_88 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_74,local_78));
                  }
                  lVar11 = FUN_008fd190(plVar2,"guildUUID");
                  if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar11) {
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                  }
                  else {
                    local_78 = 0x100005;
                    local_88 = "guildUUID";
                    local_80 = 9;
                    lVar11 = FUN_008feca4(plVar2,&local_88);
                    puVar9 = (undefined8 *)&DAT_01e277f2;
                    if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                      local_78 = 0x100005;
                      local_88 = "guildUUID";
                      local_80 = 9;
                      puVar9 = (undefined8 *)FUN_008feca4(plVar2,&local_88);
                      if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
                        puVar9 = (undefined8 *)*puVar9;
                      }
                    }
                  }
                  FUN_008fa54c(&local_88,puVar9);
                  FUN_008fce60(&uStack_200,&local_88);
                  if (((ulong)local_88 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_74,local_78));
                  }
                  lVar11 = FUN_008fd190(plVar2,"unread");
                  if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar11) {
                    bVar4 = false;
                  }
                  else {
                    local_88 = "unread";
                    local_78 = 0x100005;
                    local_80 = 6;
                    lVar11 = FUN_008feca4(plVar2,&local_88);
                    bVar4 = false;
                    if ((*(byte *)(lVar11 + 0x11) & 1) != 0) {
                      local_88 = "unread";
                      local_78 = 0x100005;
                      local_80 = 6;
                      lVar11 = FUN_008feca4(plVar2,&local_88);
                      bVar4 = *(int *)(lVar11 + 0x10) == 0x102;
                    }
                  }
                  local_1e8 = bVar4;
                  FUN_00eab428(plVar2,auStack_1e0);
                  FUN_00eaccac(puVar1,&local_228);
                }
              }
            }
            uVar12 = uVar12 + 1;
            lVar5 = lVar5 + 0x18;
          } while (uVar12 < *(uint *)(plVar8 + 1));
        }
        goto LAB_00eacbc8;
      }
    }
    *(undefined4 *)(param_2 + 0x58) = 0xfffffffa;
    FUN_00e83324(0xfffffffa);
  }
LAB_00eacbc8:
  lVar5 = FUN_008fd190(plVar7,"reason");
  if (*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x30 == lVar5) {
LAB_00eacc18:
    puVar9 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_88 = "reason";
    local_78 = 0x100005;
    local_80 = 6;
    lVar5 = FUN_008feca4(plVar7,&local_88);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_00eacc18;
    local_88 = "reason";
    local_78 = 0x100005;
    local_80 = 6;
    puVar9 = (undefined8 *)FUN_008feca4(plVar7,&local_88);
    if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
      puVar9 = (undefined8 *)*puVar9;
    }
  }
  FUN_008fa54c(&local_88,puVar9);
  FUN_008fce60(param_2 + 0x40,&local_88);
  if (((ulong)local_88 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_74,local_78));
  }
  FUN_00964d08(&local_228);
LAB_00eacc4c:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00eaccac(uint *param_1,undefined8 param_2)

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
    FUN_00ebc290(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_00ebc35c(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x1a0 + -0x1a0,param_2);
  return;
}




void FUN_00eacd38(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    uVar7 = 0;
  }
  else {
    local_70 = "code";
    local_60 = 0x100005;
    local_68 = 4;
    lVar3 = FUN_008feca4(param_1,&local_70);
    uVar7 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_70 = "code";
      local_60 = 0x100005;
      local_68 = 4;
      puVar4 = (undefined4 *)FUN_008feca4(param_1,&local_70);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = uVar7;
  *(undefined1 *)(param_2 + 0x25) = 0;
  FUN_008fce60(param_2 + 0x30,&DAT_0320ffa8);
  FUN_008fce60(param_2 + 0x48,&DAT_0320ffa8);
  lVar3 = FUN_008fd190(param_1,"returnValue");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00ead008;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  lVar3 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00ead008;
  local_70 = "returnValue";
  local_60 = 0x100005;
  local_68 = 0xb;
  plVar5 = (long *)FUN_008feca4(param_1,&local_70);
  if (*(int *)(param_2 + 0x28) != 0) goto LAB_00ead008;
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
  *(bool *)(param_2 + 0x25) = bVar2;
  lVar3 = FUN_008fd190(plVar5,"reason");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_00eacf60:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "reason";
    local_60 = 0x100005;
    local_68 = 6;
    lVar3 = FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eacf60;
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
  lVar3 = FUN_008fd190(plVar5,"teamId");
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar3) {
LAB_00eacfdc:
    puVar6 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "teamId";
    local_60 = 0x100005;
    local_68 = 6;
    lVar3 = FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eacfdc;
    local_70 = "teamId";
    local_60 = 0x100005;
    local_68 = 6;
    puVar6 = (undefined8 *)FUN_008feca4(plVar5,&local_70);
    if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_008fa54c(&local_70,puVar6);
  FUN_008fce60(param_2 + 0x48,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
LAB_00ead008:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

