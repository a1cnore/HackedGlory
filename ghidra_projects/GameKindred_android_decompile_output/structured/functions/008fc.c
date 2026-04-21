// functions/008fc — 142 functions
#include "libGameKindred.h"




void FUN_008fc034(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_008feeb8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x50;
  FUN_008fcdb8(lVar4 + -0x50,param_2);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x30);
  *(undefined1 *)(lVar4 + -4) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x48);
  return;
}




undefined1  [16] FUN_008fc0f0(ulong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 >> 0xe & 1) != 0) {
    auVar3._0_8_ = *param_1;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    auVar4._0_8_ = (double)(int)*param_1;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    auVar5._0_8_ = NEON_ucvtf((ulong)(uint)*param_1);
    auVar5._8_8_ = 0;
    return auVar5;
  }
  if ((uVar1 >> 0xc & 1) == 0) {
    auVar2._0_8_ = (double)*param_1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  auVar6._0_8_ = (double)(long)*param_1;
  auVar6._8_8_ = 0;
  return auVar6;
}




void FUN_008fc138(long param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_50,param_2 + 0x28);
  FUN_008fc1cc(param_1,param_1 + 0x1f8,local_50,*(undefined1 *)(param_2 + 0x25),
               "Progression_Ascension_Daily_Reward_Redeemed","ascension_daily_reward");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fc1cc(long param_1,long param_2,byte *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  byte *local_e8;
  byte *pbStack_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_98 = 0;
  local_70 = 0x400;
  local_68 = 0;
  local_60 = 0;
  local_a8 = operator_new(0x28);
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[1] = 0x10000;
  local_a8[2] = 0;
  *local_a8 = 0;
  if ((*param_3 & 1) == 0) {
    local_e8 = param_3 + 1;
  }
  else {
    local_e8 = *(byte **)(param_3 + 0x10);
  }
  pbStack_e0 = local_e8;
  local_a0 = local_a8;
  FUN_008fd344(&local_c0,&local_e8);
  if (((local_68 != 0) || ((param_4 & 1) == 0)) || (local_b0 != 4)) {
    (**(code **)(param_2 + 0x20))();
    FUN_008fc800(param_2);
    goto LAB_008fc3b8;
  }
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_00cafac0(&local_c0,&local_d0);
  if (*(int *)(param_1 + 0x98) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xa0);
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    lVar6 = 0;
    if (lVar4 == 0) goto LAB_008fc2ec;
LAB_008fc2dc:
    uVar5 = *(undefined4 *)(lVar4 + 0x60);
  }
  else {
    lVar6 = 0;
    if (*(char *)(*(long *)(param_1 + 0xb0) + 0x4c) != '\0') {
      lVar6 = *(long *)(param_1 + 0xb0);
    }
    if (lVar4 != 0) goto LAB_008fc2dc;
LAB_008fc2ec:
    uVar5 = 0;
  }
  FUN_008fa54c(&local_e8,&DAT_01e277f2);
  if (lVar6 != 0) {
    FUN_008fce60(&local_e8,lVar6);
  }
  pvVar1 = (void *)((ulong)&local_e8 | 1);
  if (((ulong)local_e8 & 1) != 0) {
    pvVar1 = local_d8;
  }
  FUN_0090b5ec(param_5,param_6,pvVar1,uVar5,&local_d0);
  (**(code **)(param_2 + 0x18))(&local_d0);
  FUN_008fc800(param_2);
  FUN_008fa604();
  lVar4 = FUN_009580b8();
  FUN_009658c8(lVar4 + 0x18);
  if (*(int *)(param_1 + 0x1d8) != 0) {
    lVar4 = *(long *)(param_1 + 0x1e0);
    do {
      if (*(code **)(lVar4 + 8) == (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x10));
      }
      else {
        (**(code **)(lVar4 + 8))();
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != *(long *)(param_1 + 0x1e0) + (ulong)*(uint *)(param_1 + 0x1d8) * 0x20);
  }
  if (((ulong)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  FUN_008fefd4(&local_d0,1);
LAB_008fc3b8:
  puVar3 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_a0);
    operator_delete(puVar3);
  }
  free(local_88);
  if (local_90 != (void *)0x0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fc414(long param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_50,param_2 + 0x28);
  FUN_008fc1cc(param_1,param_1 + 0x220,local_50,*(undefined1 *)(param_2 + 0x25),
               "Progression_Ascension_RankUp_Reward_Redeemed","ascension_rankup_reward");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fc4a8(long param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_50,param_2 + 0x28);
  FUN_008fc1cc(param_1,param_1 + 0x248,local_50,*(undefined1 *)(param_2 + 0x25),
               "Progression_Ascension_SeasonEnd_Reward_Redeemed","ascension_season_end_reward");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fc53c(long param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_50,param_2 + 0x28);
  FUN_008fc1cc(param_1,param_1 + 0x270,local_50,*(undefined1 *)(param_2 + 0x25),
               "Progression_Ascension_Seasonal_Reward_Redeemed","ascension_seasonal_reward");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fc5d0(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  
  if (*(char *)(param_2 + 0x25) == '\0') {
    (**(code **)(param_1 + 0x2b8))();
    goto LAB_008fc73c;
  }
  (**(code **)(param_1 + 0x2b0))();
  bVar2 = *(byte *)(param_1 + 0x298);
  uVar3 = (ulong)(bVar2 >> 1);
  __n = uVar3;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2a0);
  }
  sVar1 = (ulong)(DAT_02c09148 >> 1);
  if ((DAT_02c09148 & 1) != 0) {
    sVar1 = DAT_02c09150;
  }
  if (__n == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x2a8);
    if ((bVar2 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x299);
    }
    pcVar5 = DAT_02c09158;
    if ((DAT_02c09148 & 1) == 0) {
      pcVar5 = &DAT_02c09149;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x299);
        lVar7 = -uVar3;
        do {
          if (*pcVar6 != *pcVar5) goto LAB_008fc69c;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          pcVar5 = pcVar5 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pvVar8,pcVar5,__n), iVar4 != 0)) goto LAB_008fc69c;
    lVar7 = DAT_02c09178 + 0xb8;
  }
  else {
LAB_008fc69c:
    sVar1 = (ulong)(DAT_02c09160 >> 1);
    if ((DAT_02c09160 & 1) != 0) {
      sVar1 = DAT_02c09168;
    }
    if (__n != sVar1) goto LAB_008fc73c;
    pvVar8 = *(void **)(param_1 + 0x2a8);
    if ((bVar2 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x299);
    }
    pcVar5 = DAT_02c09170;
    if ((DAT_02c09160 & 1) == 0) {
      pcVar5 = &DAT_02c09161;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x299);
        lVar7 = -uVar3;
        do {
          if (*pcVar6 != *pcVar5) goto LAB_008fc73c;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          pcVar5 = pcVar5 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pvVar8,pcVar5,__n), iVar4 != 0)) goto LAB_008fc73c;
    lVar7 = DAT_02c09178 + 0x100;
  }
  FUN_0090bc48(lVar7);
LAB_008fc73c:
  FUN_008fc780(param_1 + 0x298);
  lVar7 = FUN_009580b8();
  FUN_009658c8(lVar7 + 0x18);
  return;
}




long FUN_008fc760(void)

{
  return DAT_02c09178 + 0xb8;
}




long FUN_008fc770(void)

{
  return DAT_02c09178 + 0x100;
}




void FUN_008fc780(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fc7f8(long param_1)

{
  FUN_008faba0(param_1 + -0x18);
  return;
}




void FUN_008fc800(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fc87c(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c8);
  FUN_008fa62c();
  DAT_02c09178 = pvVar1;
  return;
}




void FUN_008fc8ac(void)

{
  if (DAT_02c09178 != (long *)0x0) {
    (**(code **)(*DAT_02c09178 + 8))();
  }
  DAT_02c09178 = (long *)0x0;
  return;
}




undefined1 FUN_008fc8e0(void)

{
  return *(undefined1 *)(DAT_02c09178 + 0x2c0);
}




long FUN_008fc8f0(void)

{
  return DAT_02c09178 + 0x1d8;
}




long FUN_008fc900(void)

{
  return DAT_02c09178 + 0x1e8;
}




long FUN_008fc910(void)

{
  return DAT_02c09178 + 0x30;
}




undefined8 FUN_008fc920(void)

{
  if (*(int *)(DAT_02c09178 + 0x98) != 0) {
    return *(undefined8 *)(DAT_02c09178 + 0xa0);
  }
  return 0;
}




long FUN_008fc940(void)

{
  long lVar1;
  
  if (*(int *)(DAT_02c09178 + 0xa8) != 0) {
    lVar1 = 0;
    if (*(char *)(*(long *)(DAT_02c09178 + 0xb0) + 0x4c) != '\0') {
      lVar1 = *(long *)(DAT_02c09178 + 0xb0);
    }
    return lVar1;
  }
  return 0;
}




long FUN_008fc96c(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (1 < *(uint *)(DAT_02c09178 + 0x98)) {
    lVar1 = *(long *)(DAT_02c09178 + 0xa0) + 0x78;
  }
  return lVar1;
}




long FUN_008fc990(void)

{
  long lVar1;
  
  lVar1 = 0;
  if (1 < *(uint *)(DAT_02c09178 + 0xa8)) {
    lVar1 = 0;
    if (*(char *)(*(long *)(DAT_02c09178 + 0xb0) + 0x4c) != '\0') {
      lVar1 = *(long *)(DAT_02c09178 + 0xb0) + 0x50;
    }
  }
  return lVar1;
}




long FUN_008fc9c0(void)

{
  return DAT_02c09178 + 0x148;
}




long FUN_008fc9d0(void)

{
  return DAT_02c09178 + 400;
}




void FUN_008fc9e4(undefined8 param_1,undefined8 param_2)

{
  FUN_008fa7d8(DAT_02c09178,param_1,param_2);
  return;
}




void FUN_008fc9fc(uint param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_008fa8ac(DAT_02c09178,param_1 & 1,param_2,param_3,param_4);
  return;
}




void FUN_008fca20(undefined8 param_1,undefined8 param_2)

{
  FUN_008fa8f8(DAT_02c09178,param_1,param_2);
  return;
}




void FUN_008fca38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_008fa928(DAT_02c09178,param_1,param_2,param_3);
  return;
}




void FUN_008fca54(undefined8 param_1,undefined8 param_2)

{
  FUN_008fa96c(DAT_02c09178,param_1,param_2);
  return;
}




void FUN_008fca6c(undefined8 param_1,undefined8 param_2)

{
  FUN_008faaa8(DAT_02c09178,param_1,param_2);
  return;
}




void FUN_008fca84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b8c10;
  param_1[3] = &PTR_FUN_027b8fb8;
  if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
    operator_delete((void *)param_1[0x55]);
  }
  if ((*(byte *)(param_1 + 0x4e) & 1) != 0) {
    operator_delete((void *)param_1[0x50]);
  }
  if ((*(byte *)(param_1 + 0x49) & 1) != 0) {
    operator_delete((void *)param_1[0x4b]);
  }
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    operator_delete((void *)param_1[0x46]);
  }
  if ((*(byte *)(param_1 + 0x3f) & 1) != 0) {
    operator_delete((void *)param_1[0x41]);
  }
  if ((void *)param_1[0x3e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3e]);
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  if ((void *)param_1[0x3c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c]);
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
  }
  if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
    operator_delete((void *)param_1[0x34]);
  }
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    operator_delete((void *)param_1[0x2b]);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete((void *)param_1[0x22]);
  }
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_008fac94(param_1 + 0x15,1);
  FUN_008fabe8(param_1 + 0x13,1);
  FUN_0099cedc(param_1 + 0xc);
  FUN_008fd0a0(param_1 + 10,1);
  FUN_008fd0a0(param_1 + 8,1);
  FUN_008fd118(param_1 + 6,1);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_008fcbc8(void *param_1)

{
  FUN_008fca84();
  operator_delete(param_1);
  return;
}




void FUN_008fcbec(void)

{
  return;
}




void FUN_008fcbf0(void)

{
  return;
}




void FUN_008fcbf4(void)

{
  return;
}




void FUN_008fcbf8(void)

{
  return;
}




void FUN_008fcbfc(void)

{
  return;
}




void FUN_008fcc00(void)

{
  return;
}




void FUN_008fcc04(void)

{
  return;
}




void FUN_008fcc08(void)

{
  return;
}




void FUN_008fcc0c(void)

{
  return;
}




void FUN_008fcc10(void)

{
  return;
}




void FUN_008fcc14(void)

{
  return;
}




void FUN_008fcc18(void)

{
  return;
}




void FUN_008fcc1c(void)

{
  return;
}




void FUN_008fcc20(void)

{
  return;
}




void FUN_008fcc24(void)

{
  return;
}




void FUN_008fcc28(void)

{
  return;
}




void FUN_008fcc2c(void)

{
  return;
}




void FUN_008fcc30(void)

{
  return;
}




void FUN_008fcc34(void)

{
  return;
}




void FUN_008fcc38(void)

{
  return;
}




void FUN_008fcc3c(void)

{
  return;
}




void FUN_008fcc40(void)

{
  return;
}




void FUN_008fcc44(void)

{
  return;
}




void FUN_008fcc48(void)

{
  return;
}




void FUN_008fcc4c(void)

{
  return;
}




void FUN_008fcc50(void)

{
  return;
}




void FUN_008fcc54(void)

{
  return;
}




void FUN_008fcc58(void)

{
  return;
}




void FUN_008fcc5c(void)

{
  return;
}




void FUN_008fcc60(void)

{
  return;
}




void FUN_008fcc64(void)

{
  return;
}




void FUN_008fcc68(void)

{
  return;
}




void FUN_008fcc6c(void)

{
  return;
}




void FUN_008fcc70(void)

{
  return;
}




void FUN_008fcc74(void)

{
  return;
}




void FUN_008fcc78(void)

{
  return;
}




void FUN_008fcc7c(void)

{
  return;
}




void FUN_008fcc80(void)

{
  return;
}




void FUN_008fcc84(void)

{
  return;
}




void FUN_008fcc88(void)

{
  return;
}




void FUN_008fcc8c(void)

{
  return;
}




void FUN_008fcc90(void)

{
  return;
}




void FUN_008fcc94(void)

{
  return;
}




void FUN_008fcc98(void)

{
  return;
}




void FUN_008fcc9c(void)

{
  return;
}




void FUN_008fcca0(void)

{
  return;
}




void FUN_008fcca4(void)

{
  return;
}




void FUN_008fcca8(void)

{
  return;
}




void FUN_008fccac(void)

{
  return;
}




void FUN_008fccb0(void)

{
  return;
}




void FUN_008fccb4(void)

{
  return;
}




void FUN_008fccb8(void)

{
  return;
}




void FUN_008fccbc(void)

{
  return;
}




void FUN_008fccc0(void)

{
  return;
}




void FUN_008fccc4(void)

{
  return;
}




void FUN_008fccc8(void)

{
  return;
}




void FUN_008fcccc(void)

{
  return;
}




void FUN_008fccd0(void)

{
  return;
}




void FUN_008fccd4(void)

{
  return;
}




void FUN_008fccd8(void)

{
  return;
}




void FUN_008fccdc(void)

{
  return;
}




void FUN_008fcce0(void)

{
  return;
}




void FUN_008fcce4(void)

{
  return;
}




void FUN_008fcce8(void)

{
  return;
}




void FUN_008fccec(void)

{
  return;
}




void FUN_008fccf0(void)

{
  return;
}




void FUN_008fccf4(void)

{
  return;
}




void FUN_008fccf8(void)

{
  return;
}




void FUN_008fccfc(void)

{
  return;
}




void FUN_008fcd00(void)

{
  return;
}




void FUN_008fcd04(void)

{
  return;
}




void FUN_008fcd08(void)

{
  return;
}




void FUN_008fcd0c(void)

{
  return;
}




void FUN_008fcd10(void)

{
  return;
}




void FUN_008fcd14(void)

{
  return;
}




void FUN_008fcd18(void)

{
  return;
}




void FUN_008fcd1c(void)

{
  return;
}




void FUN_008fcd20(void)

{
  return;
}




void FUN_008fcd24(void)

{
  return;
}




void FUN_008fcd28(void)

{
  return;
}




void FUN_008fcd2c(void)

{
  return;
}




void FUN_008fcd30(void)

{
  return;
}




void FUN_008fcd34(void)

{
  return;
}




void FUN_008fcd38(void)

{
  return;
}




void FUN_008fcd3c(void)

{
  return;
}




void FUN_008fcd40(void)

{
  return;
}




void FUN_008fcd44(void)

{
  return;
}




void FUN_008fcd48(void)

{
  return;
}




void FUN_008fcd4c(void)

{
  return;
}




void FUN_008fcd50(void)

{
  return;
}




void FUN_008fcd54(void)

{
  return;
}




void FUN_008fcd58(void)

{
  return;
}




void FUN_008fcd5c(void)

{
  return;
}




void FUN_008fcd60(void)

{
  return;
}




void FUN_008fcd64(void)

{
  return;
}




void FUN_008fcd68(void)

{
  return;
}




void FUN_008fcd6c(void)

{
  return;
}




void FUN_008fcd70(void)

{
  return;
}




void FUN_008fcd74(void)

{
  return;
}




void FUN_008fcd78(void)

{
  return;
}




void FUN_008fcd7c(void)

{
  return;
}




void FUN_008fcd80(void)

{
  return;
}




void FUN_008fcd84(void)

{
  return;
}




void FUN_008fcd88(long param_1)

{
  FUN_008fca84(param_1 + -0x18);
  return;
}




void FUN_008fcd90(long param_1)

{
  FUN_008fca84((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_008fcdb8(ulong *param_1,ulong *param_2)

{
  void *__dest;
  ulong uVar1;
  void *__src;
  ulong uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*param_2 & 1) == 0) {
    param_1[2] = param_2[2];
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    return;
  }
  uVar1 = param_2[1];
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = (void *)param_2[2];
  if (uVar1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar1 << 1);
    if (uVar1 == 0) goto LAB_008fce48;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,__src,uVar1);
LAB_008fce48:
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return;
}




byte * FUN_008fce60(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    FUN_008fcea8(param_1,pbVar2,uVar1);
  }
  return param_1;
}




ulong * FUN_008fcea8(ulong *param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *__dest;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < param_3) {
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = param_1[1];
    }
    FUN_008fcf6c(param_1,uVar2,param_3 - uVar2,uVar3,0,uVar3,param_3);
  }
  else {
    if ((bVar1 & 1) == 0) {
      __dest = (byte *)((long)param_1 + 1);
    }
    else {
      __dest = (byte *)param_1[2];
    }
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
    __dest[param_3] = 0;
    if ((*param_1 & 1) == 0) {
      *(byte *)param_1 = (byte)((int)param_3 << 1);
    }
    else {
      param_1[1] = param_3;
    }
  }
  return param_1;
}




void FUN_008fcf6c(ulong *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,size_t param_7,void *param_8)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  byte *__src;
  ulong uVar2;
  
  if (param_3 <= -param_2 - 0x12) {
    if ((*param_1 & 1) == 0) {
      __src = (byte *)((long)param_1 + 1);
    }
    else {
      __src = (byte *)param_1[2];
    }
    if (param_2 < 0x7fffffffffffffe7) {
      uVar2 = param_2 << 1;
      if (param_2 << 1 <= param_3 + param_2) {
        uVar2 = param_3 + param_2;
      }
      if (uVar2 < 0x17) {
        uVar2 = 0x17;
      }
      else {
        uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar2 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar2);
    if (param_5 != 0) {
      memcpy(__dest,__src,param_5);
    }
    if (param_7 != 0) {
      memcpy((void *)((long)__dest + param_5),param_8,param_7);
    }
    __n = (param_4 - param_6) - param_5;
    if (__n != 0) {
      memcpy((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
    }
    if (param_2 != 0x16) {
      operator_delete(__src);
    }
    uVar1 = (param_4 - param_6) + param_7;
    *param_1 = uVar2 | 1;
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
    *(undefined1 *)((long)__dest + uVar1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

