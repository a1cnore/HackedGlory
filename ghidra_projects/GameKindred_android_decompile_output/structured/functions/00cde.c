// functions/00cde — 22 functions
#include "libGameKindred.h"




void FUN_00cde080(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00cde10c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




long FUN_00cde184(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 8;
    }
  }
  return 0;
}




void FUN_00cde22c(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00cde2bc(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cde2bc(uint *param_1,undefined8 *param_2)

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
    FUN_00cde344(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00cde344(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




ulong FUN_00cde3c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00cde45c(param_1 + 0x18,auStack_48);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0x10);
  }
  FUN_00951160(lVar2 + uVar3 * 0x10,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cde45c(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00cde4e4(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00cde4e4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00cde568(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_008fa718(param_1 + 6);
  FUN_008fa718(param_1 + 0xf);
  FUN_00cde5a4(param_1);
  return;
}




void FUN_00cde5a4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte local_198 [16];
  void *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte local_150 [16];
  void *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  byte local_108 [16];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_008fa718(local_90);
  FUN_008fa718(local_d8);
  FUN_008fcdb8(local_f0,&DAT_0320ffa8);
  FUN_008fcdb8(local_108,&DAT_0320ffa8);
  FUN_008fcdb8(local_150,local_90);
  uStack_110 = uStack_50;
  local_118 = local_58;
  uStack_120 = uStack_60;
  local_128 = local_68;
  uStack_130 = uStack_70;
  local_138 = local_78;
  FUN_008fcdb8(local_198,local_d8);
  uStack_168 = uStack_a8;
  local_170 = local_b0;
  uStack_158 = uStack_98;
  uStack_160 = uStack_a0;
  uStack_178 = uStack_b8;
  local_180 = local_c0;
  FUN_00cde6f0(param_1,local_f0,local_108,local_150,local_198,0,0,0);
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cde6f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 byte param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_008fce60();
  FUN_008fce60(param_1 + 0x18,param_3);
  FUN_008fce60(param_1 + 0x30,param_4);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_4 + 0x40);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  FUN_008fce60(param_1 + 0x78,param_5);
  uVar1 = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_5 + 0x40);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  *(byte *)(param_1 + 0xc0) = param_6 & 1;
  *(undefined4 *)(param_1 + 0xc4) = param_7;
  *(undefined4 *)(param_1 + 200) = param_8;
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}




undefined8 * FUN_00cde79c(void)

{
  void *pvVar1;
  
  if (DAT_0313e398 == (undefined8 *)0x0) {
    DAT_0313e398 = operator_new(0x18);
    *(undefined4 *)(DAT_0313e398 + 2) = 0;
    *DAT_0313e398 = 0;
    DAT_0313e398[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_0313e3a0 = pvVar1;
  }
  return DAT_0313e398;
}




int FUN_00cde7f4(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_0280ea98;
  plVar3 = (long *)FUN_00cde79c();
  __mutex = DAT_0313e3a0;
  pthread_mutex_lock(DAT_0313e3a0);
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




int FUN_00cde874(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_0280ea98;
  uVar2 = FUN_00cde79c();
  __mutex = DAT_0313e3a0;
  pthread_mutex_lock(DAT_0313e3a0);
  FUN_00cde8d0(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00cde8d0(long *param_1,long param_2)

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




void FUN_00cde930(void *param_1)

{
  FUN_00cde874();
  operator_delete(param_1);
  return;
}




void FUN_00cde954(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00cde79c();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_00cde990(uint param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_00cde79c();
  plVar2 = (long *)*puVar1;
  if (plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1 & 1,param_2,param_3);
      plVar2 = (long *)plVar2[2];
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_00cde9f0(void)

{
  return;
}




void FUN_00cde9f4(void)

{
  return;
}




void FUN_00cde9f8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  double dVar14;
  byte local_258 [16];
  void *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  byte local_210 [16];
  void *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [8];
  long local_190;
  void *pvStack_188;
  byte local_180 [16];
  void *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long local_138;
  ulong local_130;
  int local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  void *local_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  char *local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  param_1 = param_1 + 0x30;
  FUN_00cdfa64(param_1);
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (void *)0x0;
  local_100 = (void *)0x0;
  local_110 = 0;
  local_e8 = 0x400;
  local_e0 = 0;
  local_d8 = 0;
  local_120 = operator_new(0x28);
  local_120[3] = 0;
  local_120[4] = 0;
  local_120[1] = 0x10000;
  local_120[2] = 0;
  *local_120 = 0;
  local_d0 = (char *)(param_2 + 0x29);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_d0 = *(char **)(param_2 + 0x38);
  }
  local_118 = local_120;
  local_c8 = local_d0;
  FUN_008fd344(&local_138,&local_d0);
  if ((local_e0 == 0) && (local_128 == 3)) {
    lVar4 = FUN_008fd190(&local_138,"dailyPicker");
    if (local_138 + (local_130 & 0xffffffff) * 0x30 != lVar4) {
      local_d0 = "dailyPicker";
      local_c0 = 0x100005;
      local_c8 = (char *)0xb;
      lVar4 = FUN_008feca4(&local_138,&local_d0);
      if (*(int *)(lVar4 + 0x10) == 3) {
        local_d0 = "dailyPicker";
        local_c0 = 0x100005;
        local_c8 = (char *)0xb;
        plVar5 = (long *)FUN_008feca4(&local_138,&local_d0);
        lVar4 = FUN_008fd190(&local_138,"refreshInterval");
        if (local_138 + (local_130 & 0xffffffff) * 0x30 == lVar4) {
          uVar12 = 0;
        }
        else {
          local_d0 = "refreshInterval";
          local_c0 = 0x100005;
          local_c8 = (char *)0xf;
          lVar4 = FUN_008feca4(&local_138,&local_d0);
          uVar12 = 0;
          if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
            local_d0 = "refreshInterval";
            local_c0 = 0x100005;
            local_c8 = (char *)0xf;
            puVar6 = (undefined4 *)FUN_008feca4(&local_138,&local_d0);
            uVar12 = *puVar6;
          }
        }
        lVar4 = FUN_008fd190(plVar5,"lastRefreshTime");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
          lVar4 = 0;
        }
        else {
          local_d0 = "lastRefreshTime";
          local_c0 = 0x100005;
          local_c8 = (char *)0xf;
          lVar7 = FUN_008feca4(plVar5,&local_d0);
          lVar4 = 0;
          if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
            local_d0 = "lastRefreshTime";
            local_c0 = 0x100005;
            local_c8 = (char *)0xf;
            FUN_008feca4(plVar5,&local_d0);
            dVar14 = (double)FUN_008fc0f0();
            lVar4 = (long)dVar14;
          }
        }
        FUN_00cdfaa0(param_1,lVar4,uVar12);
        lVar4 = FUN_008fd190(plVar5,"dailyPicks");
        if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar4) {
          local_d0 = "dailyPicks";
          local_c0 = 0x100005;
          local_c8 = (char *)0xa;
          lVar4 = FUN_008feca4(plVar5,&local_d0);
          if (*(int *)(lVar4 + 0x10) == 4) {
            local_d0 = "dailyPicks";
            local_c0 = 0x100005;
            local_c8 = (char *)0xa;
            plVar5 = (long *)FUN_008feca4(plVar5,&local_d0);
            if ((int)plVar5[1] != 0) {
              lVar4 = 0;
              uVar13 = 0;
              do {
                plVar1 = (long *)(*plVar5 + lVar4);
                uVar8 = FUN_00cdfb9c(param_1,uVar13 & 0xffffffff);
                FUN_008fa718(&local_d0);
                FUN_008fa718(local_180);
                lVar7 = FUN_008fd190(plVar1,"singlePurchaseCost");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar7) {
                  local_88 = "singlePurchaseCost";
                  local_78 = 0x100005;
                  local_80 = 0x12;
                  uVar9 = FUN_008feca4(plVar1,&local_88);
                  FUN_00cac27c(uVar9,&local_d0);
                }
                lVar7 = FUN_008fd190(plVar1,"allPurchaseCost");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar7) {
                  local_88 = "allPurchaseCost";
                  local_78 = 0x100005;
                  local_80 = 0xf;
                  uVar9 = FUN_008feca4(plVar1,&local_88);
                  FUN_00cac27c(uVar9,local_180);
                }
                lVar7 = FUN_008fd190(plVar1,"talentId");
                if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                  puVar10 = (undefined8 *)&DAT_01e277f2;
                }
                else {
                  local_88 = "talentId";
                  local_78 = 0x100005;
                  local_80 = 8;
                  lVar7 = FUN_008feca4(plVar1,&local_88);
                  puVar10 = (undefined8 *)&DAT_01e277f2;
                  if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                    local_88 = "talentId";
                    local_78 = 0x100005;
                    local_80 = 8;
                    puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                    if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                      puVar10 = (undefined8 *)*puVar10;
                    }
                  }
                }
                FUN_008fa54c(local_198,puVar10);
                lVar7 = local_190;
                if ((local_198[0] & 1) == 0) {
                  if (1 < local_198[0]) {
LAB_00cdee58:
                    lVar7 = FUN_008fd190(plVar1,"talentId");
                    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                      puVar10 = (undefined8 *)&DAT_01e277f2;
                    }
                    else {
                      local_78 = 0x100005;
                      local_88 = "talentId";
                      local_80 = 8;
                      lVar7 = FUN_008feca4(plVar1,&local_88);
                      puVar10 = (undefined8 *)&DAT_01e277f2;
                      if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                        local_78 = 0x100005;
                        local_88 = "talentId";
                        local_80 = 8;
                        puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                          puVar10 = (undefined8 *)*puVar10;
                        }
                      }
                    }
                    FUN_008fa54c(local_1b0,puVar10);
                    lVar7 = FUN_008fd190(plVar1,"talentDef");
                    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                      puVar10 = (undefined8 *)&DAT_01e277f2;
                    }
                    else {
                      local_78 = 0x100005;
                      local_88 = "talentDef";
                      local_80 = 9;
                      lVar7 = FUN_008feca4(plVar1,&local_88);
                      puVar10 = (undefined8 *)&DAT_01e277f2;
                      if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                        local_78 = 0x100005;
                        local_88 = "talentDef";
                        local_80 = 9;
                        puVar10 = (undefined8 *)FUN_008feca4(plVar1,&local_88);
                        if ((*(byte *)((long)puVar10 + 0x12) >> 6 & 1) == 0) {
                          puVar10 = (undefined8 *)*puVar10;
                        }
                      }
                    }
                    FUN_008fa54c(local_1c8,puVar10);
                    FUN_008fcdb8(local_210,&local_d0);
                    uStack_1e0 = uStack_a0;
                    local_1e8 = local_a8;
                    uStack_1d0 = uStack_90;
                    uStack_1d8 = uStack_98;
                    uStack_1f0 = uStack_b0;
                    local_1f8 = local_b8;
                    FUN_008fcdb8(local_258,local_180);
                    uStack_228 = uStack_150;
                    local_230 = local_158;
                    uStack_218 = uStack_140;
                    uStack_220 = uStack_148;
                    uStack_238 = uStack_160;
                    local_240 = local_168;
                    lVar7 = FUN_008fd190(plVar1,"allowPurchase");
                    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                      bVar3 = false;
                    }
                    else {
                      local_78 = 0x100005;
                      local_88 = "allowPurchase";
                      local_80 = 0xd;
                      lVar7 = FUN_008feca4(plVar1,&local_88);
                      bVar3 = false;
                      if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
                        local_78 = 0x100005;
                        local_88 = "allowPurchase";
                        local_80 = 0xd;
                        lVar7 = FUN_008feca4(plVar1,&local_88);
                        bVar3 = *(int *)(lVar7 + 0x10) == 0x102;
                      }
                    }
                    lVar7 = FUN_008fd190(plVar1,"purchaseCount");
                    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                      uVar12 = 0;
                    }
                    else {
                      local_78 = 0x100005;
                      local_88 = "purchaseCount";
                      local_80 = 0xd;
                      lVar7 = FUN_008feca4(plVar1,&local_88);
                      uVar12 = 0;
                      if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                        local_78 = 0x100005;
                        local_88 = "purchaseCount";
                        local_80 = 0xd;
                        puVar6 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                        uVar12 = *puVar6;
                      }
                    }
                    lVar7 = FUN_008fd190(plVar1,"purchaseCountMax");
                    if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                      uVar11 = 0;
                    }
                    else {
                      local_78 = 0x100005;
                      local_88 = "purchaseCountMax";
                      local_80 = 0x10;
                      lVar7 = FUN_008feca4(plVar1,&local_88);
                      uVar11 = 0;
                      if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                        local_78 = 0x100005;
                        local_88 = "purchaseCountMax";
                        local_80 = 0x10;
                        puVar6 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                        uVar11 = *puVar6;
                      }
                    }
                    FUN_00cde6f0(uVar8,local_1b0,local_1c8,local_210,local_258,bVar3,uVar12,uVar11);
                    if ((local_258[0] & 1) != 0) {
                      operator_delete(local_248);
                    }
                    if ((local_210[0] & 1) != 0) {
                      operator_delete(local_200);
                    }
                    if ((local_1c8[0] & 1) != 0) {
                      operator_delete(local_1b8);
                    }
                    if ((local_1b0[0] & 1) != 0) {
                      operator_delete(local_1a0);
                    }
                  }
                }
                else {
                  operator_delete(pvStack_188);
                  if (lVar7 != 0) goto LAB_00cdee58;
                }
                if ((local_180[0] & 1) != 0) {
                  operator_delete(local_170);
                }
                if (((ulong)local_d0 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_bc,local_c0));
                }
                uVar13 = uVar13 + 1;
                lVar4 = lVar4 + 0x18;
              } while (uVar13 < *(uint *)(plVar5 + 1));
            }
          }
        }
      }
    }
    FUN_00cde954();
  }
  puVar10 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_118);
    operator_delete(puVar10);
  }
  free(local_100);
  if (local_108 != (void *)0x0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

