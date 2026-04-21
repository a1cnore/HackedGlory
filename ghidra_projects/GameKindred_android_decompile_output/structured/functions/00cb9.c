// functions/00cb9 — 34 functions
#include "libGameKindred.h"




void FUN_00cb9364(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




undefined * FUN_00cb9378(void)

{
  return &DAT_0313d968;
}




void FUN_00cb9384(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008fa54c(local_40,PTR_s_all_02be9d20);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb93fc(undefined8 param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 ***__dest;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  void *pvStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  char local_b0 [8];
  void *pvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  local_110 = 0;
  uStack_108 = 0x400;
  pvStack_128 = (void *)0x0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_100 = 0;
  local_f8 = 0;
  puVar3 = operator_new(0x28);
  puVar3[1] = 0x10000;
  puVar3[2] = 0;
  local_148 = 3;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_158 = 0;
  uStack_150 = 0;
  *puVar3 = 0;
  local_80 = (undefined8 ***)0x0;
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  pbVar6 = param_2 + -1;
  do {
    pbVar6 = pbVar6 + 1;
  } while (*pbVar6 != 0);
  uVar7 = (long)pbVar6 - (long)param_2;
  uVar2 = (uint)uVar7;
  local_140 = puVar3;
  local_138 = puVar3;
  if (uVar2 < 0x10) {
    __dest = &local_80;
    local_70 = 0x700005;
    local_78 = (ulong)(byte)(0xf - (char)uVar7) << 0x38;
  }
  else {
    local_70 = 0x300005;
    local_78 = CONCAT44(0xf000000,uVar2);
    __dest = (undefined8 ***)FUN_008fe8b8(puVar3,uVar2 + 1);
    local_80 = __dest;
  }
  memcpy(__dest,param_2,uVar7 & 0xffffffff);
  *(undefined1 *)((long)__dest + (uVar7 & 0xffffffff)) = 0;
  local_e0._0_4_ = 0x100005;
  local_f0 = "GuildPushCooldown";
  local_e8 = 0x11;
  FUN_00cb9d40(&local_158,&local_f0,&local_80,puVar3);
  if (DAT_0313d980 == '\x01') {
    local_b0[0] = '\0';
    local_b0[1] = '\0';
    local_b0[2] = '\0';
    local_b0[3] = '\0';
    local_b0[4] = '\0';
    local_b0[5] = '\0';
    local_b0[6] = '\0';
    local_b0[7] = '\0';
    pvStack_a8 = (void *)0x0;
    uVar4 = FUN_009f1f64();
    uVar2 = FUN_009f1f88(uVar4,0x19);
    local_b0[0] = '\0';
    local_b0[1] = '\0';
    local_b0[2] = '\0';
    local_b0[3] = '\0';
    local_b0[4] = '\0';
    local_b0[5] = '\0';
    local_b0[6] = '\0';
    local_b0[7] = '\0';
    pvStack_a8 = (void *)0x0;
    local_e0 = (void *)CONCAT44(local_e0._4_4_,0x100005);
    local_f0 = "onboardingAssistantPreference";
    local_a0 = (void *)CONCAT44(local_a0._4_4_,(uVar2 & 1) + 0x101);
    local_e8 = 0x1d;
    FUN_00cb9d40(&local_158,&local_f0,local_b0,puVar3);
  }
  pvStack_a8 = (void *)0x0;
  local_b0[0] = '\0';
  local_b0[1] = '\0';
  local_b0[2] = '\0';
  local_b0[3] = '\0';
  local_b0[4] = '\0';
  local_b0[5] = '\0';
  local_b0[6] = '\0';
  local_b0[7] = '\0';
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_90 = 0;
  uStack_88 = 0x100;
  local_f0 = local_b0;
  local_e8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = (void *)0x0;
  local_d8 = (void *)0x0;
  local_c0 = 0x200;
  local_b8 = 0;
  FUN_00914ff4(&local_158,&local_f0);
  uVar4 = FUN_009155f8(local_b0);
  FUN_008fa54c(param_1,uVar4);
  free(local_d8);
  if (local_e0 != (void *)0x0) {
    operator_delete(local_e0);
  }
  free(local_a0);
  if (pvStack_a8 != (void *)0x0) {
    operator_delete(pvStack_a8);
  }
  puVar3 = local_138;
  if (local_138 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_138);
    operator_delete(puVar3);
  }
  free(local_120);
  if (pvStack_128 != (void *)0x0) {
    operator_delete(pvStack_128);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb9670(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x28) == 0) {
    lVar5 = param_2 + 0x30;
    lVar3 = FUN_008fd190(lVar5,"playerConfig");
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar3) {
      local_70 = "playerConfig";
      local_60 = 0x100005;
      local_68 = 0xc;
      lVar3 = FUN_008feca4(lVar5,&local_70);
      if (*(int *)(lVar3 + 0x10) == 3) {
        local_70 = "playerConfig";
        local_60 = 0x100005;
        local_68 = 0xc;
        plVar4 = (long *)FUN_008feca4(lVar5,&local_70);
        puVar6 = (undefined8 *)PTR_s_all_02be9d20;
        lVar5 = FUN_008fd190(plVar4,"GuildPushCooldown");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar5) {
          local_70 = "GuildPushCooldown";
          local_60 = 0x100005;
          local_68 = 0x11;
          lVar5 = FUN_008feca4(plVar4,&local_70);
          if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
            local_70 = "GuildPushCooldown";
            local_60 = 0x100005;
            local_68 = 0x11;
            puVar6 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
            if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
              puVar6 = (undefined8 *)*puVar6;
            }
          }
        }
        FUN_008fa54c(&local_70,puVar6);
        FUN_008fce60(&DAT_0313d968,&local_70);
        if (((ulong)local_70 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_5c,local_60));
        }
        lVar5 = FUN_008fd190(plVar4,"onboardingAssistantPreference");
        if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar5) {
          uVar7 = FUN_009f1f64();
          lVar5 = FUN_008fd190(plVar4,"onboardingAssistantPreference");
          if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar5) {
            bVar2 = false;
          }
          else {
            local_70 = "onboardingAssistantPreference";
            local_60 = 0x100005;
            local_68 = 0x1d;
            lVar5 = FUN_008feca4(plVar4,&local_70);
            bVar2 = false;
            if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
              local_70 = "onboardingAssistantPreference";
              local_60 = 0x100005;
              local_68 = 0x1d;
              lVar5 = FUN_008feca4(plVar4,&local_70,0);
              bVar2 = *(int *)(lVar5 + 0x10) == 0x102;
            }
          }
          FUN_009f2198(uVar7,0x19,bVar2);
          DAT_0313d980 = 1;
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
    }
    FUN_00cb98d0();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb98d0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00cb9adc();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_0313d968);
  }
  return;
}




void FUN_00cb9918(void)

{
  DAT_0313d980 = 0;
  return;
}




void FUN_00cb9924(long param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = FUN_009580c4();
  bVar2 = false;
  if ((uVar4 & 1) != 0) {
    lVar1 = FUN_009580b8();
    bVar2 = *(char *)(lVar1 + 0x568c) != '\0';
  }
  if (((*(char *)(param_1 + 0x30) != '\0') && (!bVar2)) && ((DAT_0313d980 & 1) == 0)) {
    lVar1 = FUN_009580b8();
    if (*(uint *)(lVar1 + 0x55e0) < 4) {
      lVar1 = FUN_00940c10();
      bVar2 = *(char *)(lVar1 + 0x39) != '\0';
    }
    else {
      uVar5 = FUN_009f1f64();
      bVar3 = FUN_009f1f88(uVar5,0x19);
      bVar2 = (bool)(bVar3 & 1);
    }
    uVar5 = FUN_009f1f64();
    FUN_009f2198(uVar5,0x19,bVar2);
    DAT_0313d980 = 1;
  }
  return;
}




void FUN_00cb99c8(long param_1)

{
  FUN_00cb9924(param_1 + -0x18);
  return;
}




void FUN_00cb99d0(void)

{
  return;
}




void FUN_00cb99d4(void)

{
  return;
}




void FUN_00cb99d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x38);
  FUN_00e83560();
  FUN_00948cd8(puVar1 + 3);
  *(undefined1 *)(puVar1 + 6) = 0;
  *puVar1 = &PTR_FUN_028096a8;
  puVar1[3] = &PTR_FUN_028096e8;
  DAT_0313d988 = puVar1;
  return;
}




void FUN_00cb9a2c(void)

{
  if (DAT_0313d988 != (long *)0x0) {
    (**(code **)(*DAT_0313d988 + 8))();
  }
  DAT_0313d988 = (long *)0x0;
  return;
}




void FUN_00cb9a60(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009580b8();
    FUN_00cb93fc(local_40,&DAT_0313d968);
    FUN_009628d0(uVar3,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00cb9adc(void)

{
  void *pvVar1;
  
  if (DAT_0313d990 == (undefined8 *)0x0) {
    DAT_0313d990 = operator_new(0x18);
    *(undefined4 *)(DAT_0313d990 + 2) = 0;
    *DAT_0313d990 = 0;
    DAT_0313d990[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_0313d998 = pvVar1;
  }
  return DAT_0313d990;
}




int FUN_00cb9b34(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_02809680;
  plVar3 = (long *)FUN_00cb9adc();
  __mutex = DAT_0313d998;
  pthread_mutex_lock(DAT_0313d998);
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




int FUN_00cb9bb4(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_02809680;
  uVar2 = FUN_00cb9adc();
  __mutex = DAT_0313d998;
  pthread_mutex_lock(DAT_0313d998);
  FUN_00cb9c10(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00cb9c10(long *param_1,long param_2)

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




void FUN_00cb9c70(void *param_1)

{
  FUN_00cb9bb4();
  operator_delete(param_1);
  return;
}




void FUN_00cb9c94(long param_1)

{
  FUN_00948d58(param_1 + 0x18);
  FUN_00e835e0(param_1);
  return;
}




void FUN_00cb9cbc(void *param_1)

{
  FUN_00948d58((long)param_1 + 0x18);
  FUN_00e835e0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cb9cec(long param_1)

{
  FUN_00948d58();
  FUN_00e835e0(param_1 + -0x18);
  return;
}




void FUN_00cb9d10(long param_1)

{
  FUN_00948d58();
  FUN_00e835e0((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00cb9d3c(void)

{
  return;
}




long * FUN_00cb9d40(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) < uVar2) {
    lVar3 = *param_1;
  }
  else {
    if (uVar2 == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x10;
      lVar3 = FUN_008fe8b8(param_4,0x300);
    }
    else {
      uVar1 = uVar2 + (uVar2 + 1 >> 1);
      *(uint *)((long)param_1 + 0xc) = uVar1;
      lVar3 = FUN_00cb9e20(param_4,*param_1,(ulong)uVar2 * 0x30,(ulong)uVar1 * 0x30);
    }
    *param_1 = lVar3;
  }
  uVar5 = *param_2;
  puVar4 = (undefined8 *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x30);
  puVar4[1] = param_2[1];
  *puVar4 = uVar5;
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  uVar5 = *param_3;
  lVar3 = *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30;
  *(undefined8 *)(lVar3 + 0x20) = param_3[1];
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(param_3 + 2) = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return param_1;
}




void * FUN_00cb9e20(long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  void *pvVar2;
  ulong *puVar3;
  
  if (param_2 == (void *)0x0) {
    pvVar2 = (void *)FUN_008fe8b8(param_1,param_4);
    return pvVar2;
  }
  if (param_4 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = param_2;
    if (param_3 < param_4) {
      puVar3 = (ulong *)*param_1;
      if (((void *)((long)puVar3 + (puVar3[1] - param_3) + 0x18) == param_2) &&
         (uVar1 = puVar3[1] + ((7 - param_3) + param_4 & 0xfffffffffffffff8), uVar1 <= *puVar3)) {
        puVar3[1] = uVar1;
      }
      else {
        pvVar2 = (void *)FUN_008fe8b8(param_1,param_4);
        if (param_3 != 0) {
          memcpy(pvVar2,param_2,param_3);
        }
      }
    }
  }
  return pvVar2;
}




void FUN_00cb9ee4(undefined8 *param_1)

{
  FUN_00ec1c04();
  *param_1 = &PTR_FUN_02809a80;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00cb9f18(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_00cb9f20(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = param_2 & 1;
  return;
}




void FUN_00cb9f2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x38);
  FUN_00ec1c04();
  *puVar1 = &PTR_FUN_02809a80;
  *(undefined1 *)(puVar1 + 6) = 0;
  FUN_00ec0464("chinaGovID",puVar1);
  return;
}




void FUN_00cb9f74(void)

{
  return;
}




void FUN_00cb9f78(void)

{
  return;
}




void FUN_00cb9f7c(void *param_1)

{
  FUN_00ec1c20();
  operator_delete(param_1);
  return;
}




void FUN_00cb9fa0(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x4960);
  FUN_00cba020();
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    FUN_00b7919c((long)pvVar2 + 0x1cf0,param_1);
  }
  FUN_00b07a8c(pvVar2,param_2);
  FUN_00aa18e0(pvVar2,0,1,0,1);
  return;
}

