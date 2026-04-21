// functions/0093d — 45 functions
#include "libGameKindred.h"




undefined8 FUN_0093d104(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180;
  undefined7 uStack_17f;
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_198);
  pvVar1 = (void *)((ulong)local_198 | 1);
  if ((local_198[0] & 1) != 0) {
    pvVar1 = local_188;
  }
  FUN_008fa54c(&local_180,pvVar1);
  FUN_008fa54c(local_1b0,"earlyOfferLastShownTime");
  FUN_008fa54c(local_1c8,"0");
  FUN_00e6bac8(local_168,acStack_138,&local_180,local_1b0,local_1c8);
  if ((local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_180 & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6acac(pvVar1,&DAT_01b95673,&local_180);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return CONCAT71(uStack_17f,local_180);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093d264(byte param_1)

{
  char *__src;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = param_1 & 1;
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_008fa54c(local_178,"tapAndHoldScoreboard");
  FUN_00937044(local_190);
  pvVar1 = (void *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    pvVar1 = local_180;
  }
  pvVar2 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar2 = local_168;
  }
  FUN_00e6b8f8(acStack_148,pvVar1,pvVar2,param_1);
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  DAT_02c7c054 = param_1;
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093d36c(uint param_1)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  byte local_2a8 [16];
  void *local_298;
  byte local_290 [16];
  void *local_280;
  byte local_278 [16];
  char *local_268;
  byte local_260 [16];
  char *local_250;
  char acStack_248 [256];
  char acStack_148 [256];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((DAT_02c7c055 & 1) == 0) {
    FUN_00936f18(local_260);
    pcVar1 = (char *)((ulong)local_260 | 1);
    if ((local_260[0] & 1) != 0) {
      pcVar1 = local_250;
    }
    strcpy(acStack_148,pcVar1);
    FUN_00937800(local_278);
    pcVar1 = (char *)((ulong)local_278 | 1);
    if ((local_278[0] & 1) != 0) {
      pcVar1 = local_268;
    }
    strcpy(acStack_248,pcVar1);
    FUN_008fa54c(local_290,"tapAndHoldScoreboard");
    FUN_00937044(local_2a8);
    pvVar3 = (void *)((ulong)local_2a8 | 1);
    if ((local_2a8[0] & 1) != 0) {
      pvVar3 = local_298;
    }
    pvVar2 = (void *)((ulong)local_290 | 1);
    if ((local_290[0] & 1) != 0) {
      pvVar2 = local_280;
    }
    uVar6 = FUN_00e6b838(acStack_148,pvVar3,pvVar2,param_1 & 1);
    if ((local_2a8[0] & 1) != 0) {
      operator_delete(local_298);
    }
    pvVar3 = (void *)((ulong)local_290 | 1);
    if ((local_290[0] & 1) != 0) {
      pvVar3 = local_280;
    }
    bVar5 = FUN_00e6b838(acStack_248,"Settings",pvVar3,uVar6 & 1);
    DAT_02c7c054 = bVar5 & 1;
    DAT_02c7c055 = 1;
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    if ((local_260[0] & 1) != 0) {
      operator_delete(local_250);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(DAT_02c7c054 != 0);
}




undefined8 FUN_0093d4fc(void)

{
  return 1;
}




undefined8 FUN_0093d504(void)

{
  return 1;
}




undefined8 FUN_0093d50c(void)

{
  return 1;
}




void FUN_0093d514(char *param_1,undefined4 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  byte local_1a0 [16];
  void *local_190;
  byte local_188 [16];
  void *local_178;
  byte local_170 [16];
  char *local_160;
  char acStack_158 [256];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00936f18(local_170);
  pcVar4 = (char *)((ulong)local_170 | 1);
  if ((local_170[0] & 1) != 0) {
    pcVar4 = local_160;
  }
  strcpy(acStack_158,pcVar4);
  FUN_008fa54c(local_188,"preferredBuildPath");
  FUN_0090de84(local_188,&DAT_01bb5073,1);
  FUN_00ceace8();
  pcVar4 = (char *)FUN_00ceadd8();
  sVar5 = strlen(pcVar4);
  FUN_0090de84(local_188,pcVar4,sVar5);
  FUN_0090de84(local_188,&DAT_01bb5073,1);
  sVar5 = strlen(param_1);
  FUN_0090de84(local_188,param_1,sVar5);
  FUN_00937044(local_1a0);
  pvVar1 = (void *)((ulong)local_1a0 | 1);
  if ((local_1a0[0] & 1) != 0) {
    pvVar1 = local_190;
  }
  pvVar2 = (void *)((ulong)local_188 | 1);
  if ((local_188[0] & 1) != 0) {
    pvVar2 = local_178;
  }
  FUN_00e6b92c(acStack_158,pvVar1,pvVar2,param_2);
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if ((local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_0093d680(char *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00936f18(local_160);
  pcVar5 = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    pcVar5 = local_150;
  }
  strcpy(acStack_148,pcVar5);
  FUN_008fa54c(local_178,"preferredBuildPath");
  FUN_0090de84(local_178,&DAT_01bb5073,1);
  FUN_00ceace8();
  pcVar5 = (char *)FUN_00ceadd8();
  sVar6 = strlen(pcVar5);
  FUN_0090de84(local_178,pcVar5,sVar6);
  FUN_0090de84(local_178,&DAT_01bb5073,1);
  sVar6 = strlen(param_1);
  FUN_0090de84(local_178,param_1,sVar6);
  FUN_00937044(local_190);
  pvVar1 = (void *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    pvVar1 = local_180;
  }
  pvVar2 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar2 = local_168;
  }
  uVar4 = FUN_00e6b86c(acStack_148,pvVar1,pvVar2,0);
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0093d7e8(void)

{
  return 0;
}




undefined8 FUN_0093d7f0(void)

{
  return 0;
}




undefined8 FUN_0093d7f8(void)

{
  return 1;
}




undefined8 FUN_0093d800(void)

{
  return 0;
}




undefined8 FUN_0093d808(void)

{
  return 0;
}




undefined8 FUN_0093d810(void)

{
  return 0;
}




undefined8 FUN_0093d818(void)

{
  return 1;
}




undefined8 FUN_0093d820(void)

{
  return 1;
}




undefined8 FUN_0093d828(void)

{
  return 1;
}




undefined8 FUN_0093d830(void)

{
  return 0;
}




undefined8 FUN_0093d83c(void)

{
  return 0;
}




undefined8 FUN_0093d844(void)

{
  return 1;
}




undefined8 FUN_0093d84c(void)

{
  return 0;
}




undefined8 FUN_0093d854(void)

{
  return 1;
}




undefined8 FUN_0093d860(void)

{
  return 0;
}




undefined8 FUN_0093d868(void)

{
  return 0;
}




undefined8 FUN_0093d870(void)

{
  return 1;
}




undefined8 FUN_0093d878(void)

{
  return 1;
}




undefined8 FUN_0093d880(void)

{
  return 1;
}




undefined8 FUN_0093d888(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ec56b8(0x2000);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_00ec5e50(), (uVar1 & 1) == 0)) {
    uVar1 = FUN_00ec56b8(0x2000);
    uVar2 = 0;
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_00ec5e6c(0);
      return uVar2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_0093d8d0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ec56b8(0x2000);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00ec5e50();
    return uVar2;
  }
  return 0;
}




undefined8 FUN_0093d8f8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ec56b8(0x2000);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00ec5e6c();
    return uVar2;
  }
  return 0;
}




undefined8 FUN_0093d920(void)

{
  return 1;
}




undefined8 FUN_0093d928(void)

{
  return 1;
}




undefined8 FUN_0093d930(void)

{
  return 0;
}




bool FUN_0093d938(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00940c04();
  uVar1 = *(uint *)(lVar2 + 8);
  lVar2 = FUN_009580b8();
  return uVar1 <= *(uint *)(lVar2 + 0x55e0);
}




undefined8 FUN_0093d96c(void)

{
  return 1;
}




void FUN_0093d974(undefined8 param_1,undefined8 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1b8 [16];
  void *local_1a8;
  byte local_1a0 [16];
  char *local_190;
  undefined1 auStack_188 [64];
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_1a0);
  __src = (char *)((ulong)local_1a0 | 1);
  if ((local_1a0[0] & 1) != 0) {
    __src = local_190;
  }
  strcpy(acStack_148,__src);
  FUN_008fff20(auStack_188,"skin_preference_%s",param_1);
  FUN_00937044(local_1b8);
  pvVar1 = (void *)((ulong)local_1b8 | 1);
  if ((local_1b8[0] & 1) != 0) {
    pvVar1 = local_1a8;
  }
  FUN_00e6b98c(acStack_148,pvVar1,auStack_188,param_2);
  if ((local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093da58(undefined8 param_1,undefined8 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1e8 [16];
  void *local_1d8;
  byte local_1d0 [16];
  void *local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  byte local_1a0 [16];
  char *local_190;
  undefined1 auStack_188 [64];
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_1a0);
  __src = (char *)((ulong)local_1a0 | 1);
  if ((local_1a0[0] & 1) != 0) {
    __src = local_190;
  }
  strcpy(acStack_148,__src);
  FUN_008fff20(auStack_188,"skin_preference_%s",param_2);
  FUN_00937044(local_1d0);
  pvVar1 = (void *)((ulong)local_1d0 | 1);
  if ((local_1d0[0] & 1) != 0) {
    pvVar1 = local_1c0;
  }
  FUN_008fa54c(local_1b8,pvVar1);
  FUN_008fa54c(local_1e8,auStack_188);
  FUN_00e6bac8(param_1,acStack_148,local_1b8,local_1e8,&DAT_0320ffa8);
  if ((local_1e8[0] & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_1d0[0] & 1) != 0) {
    operator_delete(local_1c0);
  }
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0093db7c(byte *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)(*param_1 >> 1);
  }
  if (uVar1 == 0) {
    return false;
  }
  uVar4 = 0;
  do {
    if (pbVar2[uVar4] == 0x5b) {
      pbVar3 = pbVar2 + uVar4;
      break;
    }
    uVar4 = uVar4 + 1;
    pbVar3 = pbVar2 + uVar1;
  } while (uVar1 != uVar4);
  return pbVar3 != pbVar2 + uVar1 && (long)pbVar3 - (long)pbVar2 != -1;
}




undefined8 FUN_0093dbe8(void)

{
  return 1;
}




ulong * FUN_0093dbf0(ulong *param_1,ulong param_2,ulong param_3,byte *param_4,size_t param_5)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *__dest;
  long lVar4;
  size_t __n;
  ulong uVar5;
  ulong __n_00;
  byte *__dest_00;
  byte *pbVar6;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = param_1[1];
  }
  uVar2 = uVar5 - param_2;
  if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __n_00 = uVar2;
  if (param_3 <= uVar2) {
    __n_00 = param_3;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = 0x16;
  }
  else {
    lVar4 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if ((__n_00 - uVar5) + lVar4 < param_5) {
    FUN_008fcf6c(param_1,lVar4,((uVar5 + param_5) - __n_00) - lVar4,uVar5,param_2,__n_00,param_5,
                 param_4);
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    pbVar6 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar6 = (byte *)param_1[2];
  }
  uVar3 = param_5;
  if ((__n_00 == param_5) || (__n = uVar2 - __n_00, uVar3 = __n_00, __n == 0)) {
joined_r0x0093dd54:
    __n_00 = uVar3;
    __n = param_5;
    if (__n == 0) goto LAB_0093dd68;
    __dest = pbVar6 + param_2;
    param_5 = __n;
  }
  else {
    __dest_00 = pbVar6 + param_2;
    if (__n_00 <= param_5) {
      if ((__dest_00 < param_4) && (param_4 < pbVar6 + uVar5)) {
        if (param_4 < __dest_00 + __n_00) {
          if (__n_00 != 0) {
            memmove(__dest_00,param_4,__n_00);
          }
          param_2 = __n_00 + param_2;
          param_4 = param_4 + param_5;
          param_5 = param_5 - __n_00;
          __dest_00 = pbVar6 + param_2;
          __n_00 = 0;
        }
        else {
          param_4 = param_4 + (param_5 - __n_00);
        }
      }
      memmove(__dest_00 + param_5,__dest_00 + __n_00,__n);
      uVar3 = __n_00;
      goto joined_r0x0093dd54;
    }
    if (param_5 != 0) {
      memmove(__dest_00,param_4,param_5);
    }
    __dest = __dest_00 + param_5;
    param_4 = __dest_00 + __n_00;
  }
  memmove(__dest,param_4,__n);
  __n = param_5;
LAB_0093dd68:
  uVar5 = (__n - __n_00) + uVar5;
  if ((*param_1 & 1) == 0) {
    *(byte *)param_1 = (byte)((int)uVar5 << 1);
  }
  else {
    param_1[1] = uVar5;
  }
  pbVar6[uVar5] = 0;
  return param_1;
}




void FUN_0093ddb0(ulong *param_1,byte *param_2,ulong param_3,ulong param_4)

{
  ulong __n;
  byte bVar1;
  byte *pbVar2;
  void *__dest;
  ulong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar1 = *param_2;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  if (uVar3 < param_3) {
LAB_0093de6c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  __n = uVar3 - param_3;
  if (param_4 <= uVar3 - param_3) {
    __n = param_4;
  }
  if (0xffffffffffffffef < __n) goto LAB_0093de6c;
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0093de54;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,pbVar2 + param_3,__n);
LAB_0093de54:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}




void FUN_0093de70(ulong *param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    uVar2 = 0x16;
  }
  else {
    uVar3 = param_1[1];
    uVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 == uVar2) {
    FUN_008f6a20(param_1,uVar2,1,uVar2,uVar2,0,0);
    bVar1 = (byte)*param_1;
  }
  if ((bVar1 & 1) == 0) {
    uVar2 = (long)param_1 + 1;
    *(char *)param_1 = (char)uVar3 * '\x02' + '\x02';
  }
  else {
    uVar2 = param_1[2];
    param_1[1] = uVar3 + 1;
  }
  *(undefined1 *)(uVar2 + uVar3) = param_2;
  ((undefined1 *)(uVar2 + uVar3))[1] = 0;
  return;
}




void FUN_0093df10(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_0093df3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027ba9e0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0 - 1];
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_0093dff4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR___cxa_pure_virtual_027ba9b0;
  if ((uint)DAT_02c7c1d0 != 0) {
    lVar2 = (ulong)(uint)DAT_02c7c1d0 << 3;
    puVar1 = DAT_02c7c1d8;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_02c7c1d8[(uint)DAT_02c7c1d0 - 1];
        DAT_02c7c1d0._0_4_ = (uint)DAT_02c7c1d0 - 1;
        return;
      }
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}

