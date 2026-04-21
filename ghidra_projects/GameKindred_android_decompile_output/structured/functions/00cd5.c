// functions/00cd5 — 16 functions
#include "libGameKindred.h"




undefined8 * FUN_00cd511c(void)

{
  void *pvVar1;
  
  if (DAT_0313de10 == (undefined8 *)0x0) {
    DAT_0313de10 = operator_new(0x18);
    *(undefined4 *)(DAT_0313de10 + 2) = 0;
    *DAT_0313de10 = 0;
    DAT_0313de10[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_0313de18 = pvVar1;
  }
  return DAT_0313de10;
}




void FUN_00cd5174(long param_1)

{
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}




int FUN_00cd51a4(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_0280db20;
  plVar3 = (long *)FUN_00cd511c();
  __mutex = DAT_0313de18;
  pthread_mutex_lock(DAT_0313de18);
  param_1[2] = 0;
  lVar4 = plVar3[1];
  param_1[1] = lVar4;
  plVar1 = plVar3;
  if (*plVar3 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar3[1] = (long)param_1;
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




int FUN_00cd5224(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_0280db20;
  uVar2 = FUN_00cd511c();
  __mutex = DAT_0313de18;
  pthread_mutex_lock(DAT_0313de18);
  FUN_00cd5280(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00cd5280(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00cd52e0(void *param_1)

{
  FUN_00cd5224();
  operator_delete(param_1);
  return;
}




void FUN_00cd5304(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00cd511c();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_00cd5340(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00cd511c();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  }
  return;
}




void FUN_00cd5384(void)

{
  return;
}




void FUN_00cd5388(void)

{
  return;
}




void FUN_00cd538c(undefined8 *param_1)

{
  long lVar1;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  FUN_0092157c(param_1 + 6);
  *param_1 = &PTR_FUN_0280db50;
  param_1[3] = &PTR_FUN_0280df00;
  param_1[6] = &PTR_FUN_0280df30;
  FUN_00cd2eb8(param_1 + 7);
  FUN_00cd2eb8(param_1 + 0x2b);
  FUN_00cd2eb8(param_1 + 0x4f);
  FUN_008fa54c(local_50,"REWARDS.RECURRING");
  FUN_00cd7138(param_1 + 7,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_68,"REWARDS.BASIC_MYSTERY");
  FUN_00cd7138(param_1 + 0x2b,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_008fa54c(local_80,"REWARDS.EPIC_MYSTERY");
  FUN_00cd7138(param_1 + 0x4f,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd54b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long local_d8;
  ulong local_d0;
  int local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  char *local_70;
  char *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cd6d6c(param_1 + 0x38);
  FUN_00cd6d6c(param_1 + 0x158);
  FUN_00cd6d6c(param_1 + 0x278);
  if (*(char *)(param_2 + 0x25) == '\0') {
    FUN_00cd5304();
  }
  else {
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (void *)0x0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
    local_88 = 0x400;
    local_80 = 0;
    local_78 = 0;
    local_c0 = operator_new(0x28);
    local_c0[3] = 0;
    local_c0[4] = 0;
    local_c0[1] = 0x10000;
    local_c0[2] = 0;
    *local_c0 = 0;
    local_70 = (char *)(param_2 + 0x29);
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      local_70 = *(char **)(param_2 + 0x38);
    }
    local_b8 = local_c0;
    local_68 = local_70;
    FUN_008fd344(&local_d8,&local_70);
    if ((local_80 == 0) && (local_c8 == 3)) {
      lVar2 = FUN_008fd190(&local_d8,"chestData");
      if (local_d8 + (local_d0 & 0xffffffff) * 0x30 != lVar2) {
        local_70 = "chestData";
        local_60 = 0x100005;
        local_68 = (char *)0x9;
        lVar2 = FUN_008feca4(&local_d8,&local_70);
        if (*(int *)(lVar2 + 0x10) == 4) {
          local_70 = "chestData";
          local_60 = 0x100005;
          local_68 = (char *)0x9;
          lVar2 = FUN_008feca4(&local_d8,&local_70);
          if (*(int *)(lVar2 + 8) == 3) {
            local_70 = "chestData";
            local_60 = 0x100005;
            local_68 = (char *)0x9;
            puVar3 = (undefined8 *)FUN_008feca4(&local_d8,&local_70);
            FUN_00cd56e8(puVar3,param_1 + 0x38,*puVar3);
            local_70 = "chestData";
            local_60 = 0x100005;
            local_68 = (char *)0x9;
            plVar4 = (long *)FUN_008feca4(&local_d8,&local_70);
            FUN_00cd56e8(plVar4,param_1 + 0x158,*plVar4 + 0x18);
            local_70 = "chestData";
            local_60 = 0x100005;
            local_68 = (char *)0x9;
            plVar4 = (long *)FUN_008feca4(&local_d8,&local_70);
            FUN_00cd56e8(plVar4,param_1 + 0x278,*plVar4 + 0x30);
          }
        }
      }
    }
    FUN_00cd5304();
    puVar3 = local_b8;
    if (local_b8 != (undefined8 *)0x0) {
      FUN_008fd2c4(local_b8);
      operator_delete(puVar3);
    }
    free(local_a0);
    if (local_a8 != (void *)0x0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd56e8(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  byte local_170 [16];
  void *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  byte local_128 [16];
  void *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte local_e0 [16];
  void *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  FUN_00cd6d6c(param_2);
  lVar3 = FUN_008fd190(param_3,"isTimeGated");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_c8 = "isTimeGated";
    local_b8 = 0x100005;
    local_c0 = 0xb;
    lVar3 = FUN_008feca4(param_3,&local_c8);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_c8 = "isTimeGated";
      local_b8 = 0x100005;
      local_c0 = 0xb;
      lVar3 = FUN_008feca4(param_3,&local_c8);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  *(bool *)param_2 = bVar2;
  lVar3 = FUN_008fd190(param_3,"collectInterval");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
    uVar8 = 0;
  }
  else {
    local_c8 = "collectInterval";
    local_b8 = 0x100005;
    local_c0 = 0xf;
    lVar3 = FUN_008feca4(param_3,&local_c8);
    uVar8 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_c8 = "collectInterval";
      local_b8 = 0x100005;
      local_c0 = 0xf;
      puVar4 = (undefined4 *)FUN_008feca4(param_3,&local_c8);
      uVar8 = *puVar4;
    }
  }
  *(undefined4 *)(param_2 + 4) = uVar8;
  lVar3 = FUN_008fd190(param_3,"collectStackSize");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
    uVar8 = 0;
  }
  else {
    local_c8 = "collectStackSize";
    local_b8 = 0x100005;
    local_c0 = 0x10;
    lVar3 = FUN_008feca4(param_3,&local_c8);
    uVar8 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_c8 = "collectStackSize";
      local_b8 = 0x100005;
      local_c0 = 0x10;
      puVar4 = (undefined4 *)FUN_008feca4(param_3,&local_c8);
      uVar8 = *puVar4;
    }
  }
  *(undefined4 *)(param_2 + 8) = uVar8;
  lVar3 = FUN_008fd190(param_3,"chestHashedSku");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_c8 = "chestHashedSku";
    local_b8 = 0x100005;
    local_c0 = 0xe;
    lVar3 = FUN_008feca4(param_3,&local_c8);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_c8 = "chestHashedSku";
      local_b8 = 0x100005;
      local_c0 = 0xe;
      puVar7 = (undefined8 *)FUN_008feca4(param_3,&local_c8);
      if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
        puVar7 = (undefined8 *)*puVar7;
      }
      goto LAB_00cd5900;
    }
  }
  puVar7 = (undefined8 *)&DAT_01e277f2;
LAB_00cd5900:
  FUN_008fa54c(local_e0,puVar7);
  FUN_008fce60(param_2 + 0x10,local_e0);
  if ((local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  lVar3 = FUN_008fd190(param_3,"lastCollectTimes");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_c8 = "lastCollectTimes";
    local_b8 = 0x100005;
    local_c0 = 0x10;
    lVar3 = FUN_008feca4(param_3,&local_c8);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_c8 = "lastCollectTimes";
      local_b8 = 0x100005;
      local_c0 = 0x10;
      plVar5 = (long *)FUN_008feca4(param_3,&local_c8);
      if ((int)plVar5[1] != 0) {
        lVar3 = 0;
        uVar10 = 0;
        do {
          local_c8 = *(char **)(*plVar5 + lVar3);
          FUN_00cd6ce4(param_2 + 0x40,&local_c8);
          uVar10 = uVar10 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar10 < *(uint *)(plVar5 + 1));
      }
    }
  }
  lVar3 = FUN_008fd190(param_3,"currencyExchange");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_c8 = "currencyExchange";
    local_b8 = 0x100005;
    local_c0 = 0x10;
    lVar3 = FUN_008feca4(param_3,&local_c8);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_008fa718(&local_c8);
      local_80 = "currencyExchange";
      local_70 = 0x100005;
      local_78 = 0x10;
      uVar6 = FUN_008feca4(param_3,&local_80);
      FUN_00cac27c(uVar6,&local_c8);
      FUN_008fcdb8(local_128,&local_c8);
      uStack_e8 = uStack_88;
      local_f0 = local_90;
      uStack_108 = uStack_a8;
      local_110 = local_b0;
      uStack_f8 = uStack_98;
      local_100 = local_a0;
      FUN_008fce60(param_2 + 0x50,local_128);
      *(undefined8 *)(param_2 + 0x90) = uStack_e8;
      *(undefined8 *)(param_2 + 0x88) = local_f0;
      *(undefined8 *)(param_2 + 0x80) = uStack_f8;
      *(undefined8 *)(param_2 + 0x78) = local_100;
      *(undefined8 *)(param_2 + 0x70) = uStack_108;
      *(undefined8 *)(param_2 + 0x68) = local_110;
      if ((local_128[0] & 1) != 0) {
        operator_delete(local_118);
      }
      if (((ulong)local_c8 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
    }
  }
  lVar3 = FUN_008fd190(param_3,"alternateCurrencyExchange");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_c8 = "alternateCurrencyExchange";
    local_b8 = 0x100005;
    local_c0 = 0x19;
    lVar3 = FUN_008feca4(param_3,&local_c8);
    if (*(int *)(lVar3 + 0x10) == 3) {
      FUN_008fa718(&local_c8);
      local_80 = "alternateCurrencyExchange";
      local_70 = 0x100005;
      local_78 = 0x19;
      uVar6 = FUN_008feca4(param_3,&local_80);
      FUN_00cac27c(uVar6,&local_c8);
      FUN_008fcdb8(local_170,&local_c8);
      uStack_130 = uStack_88;
      local_138 = local_90;
      uStack_140 = uStack_98;
      local_148 = local_a0;
      uStack_150 = uStack_a8;
      local_158 = local_b0;
      FUN_008fce60(param_2 + 0x98,local_170);
      *(undefined8 *)(param_2 + 0xd8) = uStack_130;
      *(undefined8 *)(param_2 + 0xd0) = local_138;
      *(undefined8 *)(param_2 + 200) = uStack_140;
      *(undefined8 *)(param_2 + 0xc0) = local_148;
      *(undefined8 *)(param_2 + 0xb8) = uStack_150;
      *(undefined8 *)(param_2 + 0xb0) = local_158;
      if ((local_170[0] & 1) != 0) {
        operator_delete(local_160);
      }
      if (((ulong)local_c8 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
    }
  }
  FUN_00cd6dc4(param_2);
  if (*(long *)(lVar1 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd5c04(undefined8 param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong local_240 [2];
  void *local_230;
  long local_228;
  ulong local_220;
  int local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  void *local_1f8;
  void *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  char *local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_170 [72];
  undefined1 auStack_128 [136];
  byte local_a0 [16];
  void *local_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = (void *)0x0;
  local_200 = 0;
  local_1d8 = 0x400;
  local_1d0 = 0;
  local_1c8 = 0;
  local_210 = operator_new(0x28);
  local_210[3] = 0;
  local_210[4] = 0;
  local_210[1] = 0x10000;
  local_210[2] = 0;
  *local_210 = 0;
  local_1c0 = (char *)(param_2 + 0x29);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_1c0 = *(char **)(param_2 + 0x38);
  }
  local_208 = local_210;
  local_1b8 = local_1c0;
  FUN_008fd344(&local_228,&local_1c0);
  FUN_00cd5174(local_a0);
  if (((*(char *)(param_2 + 0x25) != '\0') && (local_1d0 == 0)) && (local_218 == 3)) {
    lVar3 = FUN_008fd190(&local_228,"chestAwards");
    if (local_228 + (local_220 & 0xffffffff) * 0x30 != lVar3) {
      local_1c0 = "chestAwards";
      local_1b0 = 0x100005;
      local_1b8 = (char *)0xb;
      lVar3 = FUN_008feca4(&local_228,&local_1c0);
      if (*(int *)(lVar3 + 0x10) == 4) {
        lVar3 = FUN_008fd190(&local_228,"chestName");
        if (local_228 + (local_220 & 0xffffffff) * 0x30 == lVar3) {
LAB_00cd5d68:
          puVar6 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_1c0 = "chestName";
          local_1b0 = 0x100005;
          local_1b8 = (char *)0x9;
          lVar3 = FUN_008feca4(&local_228,&local_1c0);
          if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00cd5d68;
          local_1c0 = "chestName";
          local_1b0 = 0x100005;
          local_1b8 = (char *)0x9;
          puVar6 = (undefined8 *)FUN_008feca4(&local_228,&local_1c0);
          if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
            puVar6 = (undefined8 *)*puVar6;
          }
        }
        FUN_008fa54c(&local_1c0,puVar6);
        FUN_008fce60(local_a0,&local_1c0);
        if (((ulong)local_1c0 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_1ac,local_1b0));
        }
        local_1c0 = "chestAwards";
        local_1b0 = 0x100005;
        local_78 = 1;
        local_1b8 = (char *)0xb;
        uVar4 = FUN_008feca4(&local_228,&local_1c0);
        FUN_00cafac0(uVar4,auStack_88);
        FUN_00cd5340(local_a0);
        lVar3 = FUN_009580b8();
        FUN_009658c8(lVar3 + 0x18);
        FUN_009580b8();
        FUN_00961ee4();
        pvVar1 = (void *)((ulong)local_a0 | 1);
        if ((local_a0[0] & 1) != 0) {
          pvVar1 = local_90;
        }
        FUN_0090b71c(pvVar1,auStack_88,&DAT_01e277f2,0);
        FUN_00cd2eb8(&local_1c0);
        local_240[0] = 0;
        local_240[1] = 0;
        local_230 = (void *)0x0;
        uVar5 = FUN_00cd5fe4(local_a0,&local_1c0);
        if (((uVar5 & 1) != 0) && (uVar5 = FUN_00cd63e0(local_a0,local_240), (uVar5 & 1) != 0)) {
          lVar3 = FUN_008fd190(&local_228,"useAlternatePrice");
          if (local_228 + (local_220 & 0xffffffff) * 0x30 == lVar3) {
LAB_00cd5f6c:
            puVar7 = auStack_170;
          }
          else {
            local_70 = "useAlternatePrice";
            local_60 = 0x100005;
            local_68 = 0x11;
            lVar3 = FUN_008feca4(&local_228,&local_70);
            if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_00cd5f6c;
            local_70 = "useAlternatePrice";
            local_60 = 0x100005;
            local_68 = 0x11;
            lVar3 = FUN_008feca4(&local_228,&local_70);
            if (*(int *)(lVar3 + 0x10) != 0x102) goto LAB_00cd5f6c;
            puVar7 = auStack_128;
          }
          pvVar1 = (void *)((ulong)local_240 | 1);
          if ((local_240[0] & 1) != 0) {
            pvVar1 = local_230;
          }
          FUN_0090be50(pvVar1,puVar7);
          pvVar1 = (void *)((ulong)local_a0 | 1);
          if ((local_a0[0] & 1) != 0) {
            pvVar1 = local_90;
          }
          FUN_0090b854(pvVar1,auStack_88,puVar7);
        }
        if ((local_240[0] & 1) != 0) {
          operator_delete(local_230);
        }
        FUN_00cd2f04(&local_1c0);
        goto LAB_00cd5ecc;
      }
    }
  }
  local_78 = 0;
  FUN_00cd5340(local_a0);
LAB_00cd5ecc:
  FUN_008fefd4(auStack_88,1);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  puVar6 = local_208;
  if (local_208 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_208);
    operator_delete(puVar6);
  }
  free(local_1f0);
  if (local_1f8 != (void *)0x0) {
    operator_delete(local_1f8);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd5fd0(void)

{
  FUN_009580b8();
  FUN_00961ee4();
  return;
}




undefined8 FUN_00cd5fe4(byte *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  
  bVar2 = *param_1;
  uVar3 = (ulong)(bVar2 >> 1);
  __n = uVar3;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(DAT_0313dfb0 >> 1);
  if ((DAT_0313dfb0 & 1) != 0) {
    sVar1 = DAT_0313dfb8;
  }
  if (__n == sVar1) {
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    pbVar6 = DAT_0313dfc0;
    if ((DAT_0313dfb0 & 1) == 0) {
      pbVar6 = &DAT_0313dfb1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        pbVar9 = param_1;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar6) goto LAB_00cd6094;
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pbVar9,pbVar6,__n), iVar5 != 0)) goto LAB_00cd6094;
    lVar4 = DAT_0313dfe0;
    lVar8 = DAT_0313dfe0 + 0x168;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(DAT_0313dfe0 + 0x160);
    *param_2 = *(undefined8 *)(lVar4 + 0x158);
    FUN_008fce60(param_2 + 2,lVar8);
    FUN_008fce60(param_2 + 5,lVar4 + 0x180);
    FUN_00cd2f88(param_2 + 8,lVar4 + 0x198);
    FUN_008fce60(param_2 + 10,lVar4 + 0x1a8);
    uVar7 = *(undefined8 *)(lVar4 + 0x1c0);
    param_2[0xe] = *(undefined8 *)(lVar4 + 0x1c8);
    param_2[0xd] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x1d0);
    param_2[0x10] = *(undefined8 *)(lVar4 + 0x1d8);
    param_2[0xf] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x1e0);
    param_2[0x12] = *(undefined8 *)(lVar4 + 0x1e8);
    param_2[0x11] = uVar7;
    FUN_008fce60(param_2 + 0x13,lVar4 + 0x1f0);
    uVar7 = *(undefined8 *)(lVar4 + 0x208);
    param_2[0x17] = *(undefined8 *)(lVar4 + 0x210);
    param_2[0x16] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x218);
    param_2[0x19] = *(undefined8 *)(lVar4 + 0x220);
    param_2[0x18] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x228);
    param_2[0x1b] = *(undefined8 *)(lVar4 + 0x230);
    param_2[0x1a] = uVar7;
    FUN_008fce60(param_2 + 0x1c,lVar4 + 0x238);
    param_2[0x1f] = *(undefined8 *)(lVar4 + 0x250);
    FUN_008fce60(param_2 + 0x20,lVar4 + 600);
    uVar7 = *(undefined8 *)(lVar4 + 0x270);
    goto LAB_00cd63bc;
  }
LAB_00cd6094:
  sVar1 = (ulong)(DAT_0313dfc8 >> 1);
  if ((DAT_0313dfc8 & 1) != 0) {
    sVar1 = DAT_0313dfd0;
  }
  if (__n == sVar1) {
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    pbVar6 = DAT_0313dfd8;
    if ((DAT_0313dfc8 & 1) == 0) {
      pbVar6 = &DAT_0313dfc9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        pbVar9 = param_1;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar6) goto LAB_00cd61cc;
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pbVar9,pbVar6,__n), iVar5 != 0)) goto LAB_00cd61cc;
    lVar4 = DAT_0313dfe0;
    lVar8 = DAT_0313dfe0 + 0x288;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(DAT_0313dfe0 + 0x280);
    *param_2 = *(undefined8 *)(lVar4 + 0x278);
    FUN_008fce60(param_2 + 2,lVar8);
    FUN_008fce60(param_2 + 5,lVar4 + 0x2a0);
    FUN_00cd2f88(param_2 + 8,lVar4 + 0x2b8);
    FUN_008fce60(param_2 + 10,lVar4 + 0x2c8);
    uVar7 = *(undefined8 *)(lVar4 + 0x2e0);
    param_2[0xe] = *(undefined8 *)(lVar4 + 0x2e8);
    param_2[0xd] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x2f0);
    param_2[0x10] = *(undefined8 *)(lVar4 + 0x2f8);
    param_2[0xf] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x300);
    param_2[0x12] = *(undefined8 *)(lVar4 + 0x308);
    param_2[0x11] = uVar7;
    FUN_008fce60(param_2 + 0x13,lVar4 + 0x310);
    uVar7 = *(undefined8 *)(lVar4 + 0x328);
    param_2[0x17] = *(undefined8 *)(lVar4 + 0x330);
    param_2[0x16] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x338);
    param_2[0x19] = *(undefined8 *)(lVar4 + 0x340);
    param_2[0x18] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x348);
    param_2[0x1b] = *(undefined8 *)(lVar4 + 0x350);
    param_2[0x1a] = uVar7;
    FUN_008fce60(param_2 + 0x1c,lVar4 + 0x358);
    param_2[0x1f] = *(undefined8 *)(lVar4 + 0x370);
    FUN_008fce60(param_2 + 0x20,lVar4 + 0x378);
    uVar7 = *(undefined8 *)(lVar4 + 0x390);
  }
  else {
LAB_00cd61cc:
    sVar1 = (ulong)(DAT_0313df98 >> 1);
    if ((DAT_0313df98 & 1) != 0) {
      sVar1 = DAT_0313dfa0;
    }
    if (__n != sVar1) {
      return 0;
    }
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    pbVar6 = DAT_0313dfa8;
    if ((DAT_0313df98 & 1) == 0) {
      pbVar6 = &DAT_0313df99;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        do {
          param_1 = param_1 + 1;
          if (*param_1 != *pbVar6) {
            return 0;
          }
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pbVar9,pbVar6,__n), iVar5 != 0)) {
      return 0;
    }
    lVar4 = DAT_0313dfe0;
    lVar8 = DAT_0313dfe0 + 0x48;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(DAT_0313dfe0 + 0x40);
    *param_2 = *(undefined8 *)(lVar4 + 0x38);
    FUN_008fce60(param_2 + 2,lVar8);
    FUN_008fce60(param_2 + 5,lVar4 + 0x60);
    FUN_00cd2f88(param_2 + 8,lVar4 + 0x78);
    FUN_008fce60(param_2 + 10,lVar4 + 0x88);
    uVar7 = *(undefined8 *)(lVar4 + 0xa0);
    param_2[0xe] = *(undefined8 *)(lVar4 + 0xa8);
    param_2[0xd] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0xb0);
    param_2[0x10] = *(undefined8 *)(lVar4 + 0xb8);
    param_2[0xf] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0xc0);
    param_2[0x12] = *(undefined8 *)(lVar4 + 200);
    param_2[0x11] = uVar7;
    FUN_008fce60(param_2 + 0x13,lVar4 + 0xd0);
    uVar7 = *(undefined8 *)(lVar4 + 0xe8);
    param_2[0x17] = *(undefined8 *)(lVar4 + 0xf0);
    param_2[0x16] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0xf8);
    param_2[0x19] = *(undefined8 *)(lVar4 + 0x100);
    param_2[0x18] = uVar7;
    uVar7 = *(undefined8 *)(lVar4 + 0x108);
    param_2[0x1b] = *(undefined8 *)(lVar4 + 0x110);
    param_2[0x1a] = uVar7;
    FUN_008fce60(param_2 + 0x1c,lVar4 + 0x118);
    param_2[0x1f] = *(undefined8 *)(lVar4 + 0x130);
    FUN_008fce60(param_2 + 0x20,lVar4 + 0x138);
    uVar7 = *(undefined8 *)(lVar4 + 0x150);
  }
LAB_00cd63bc:
  param_2[0x23] = uVar7;
  return 1;
}

