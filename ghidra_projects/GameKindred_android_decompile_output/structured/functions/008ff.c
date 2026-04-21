// functions/008ff — 64 functions
#include "libGameKindred.h"




void FUN_008ff080(undefined4 *param_1)

{
  param_1[2] = 3;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}




void FUN_008ff0a0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}




void FUN_008ff0b8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}




void FUN_008ff0c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = param_2;
  return;
}




void FUN_008ff0cc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_008ff0d4(undefined4 *param_1)

{
  return *param_1;
}




undefined4 FUN_008ff0dc(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined4 FUN_008ff0e4(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined4 FUN_008ff0ec(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




bool FUN_008ff0f4(int *param_1)

{
  return *param_1 == 0;
}




bool FUN_008ff104(int *param_1)

{
  return *param_1 == 1;
}




bool FUN_008ff114(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *param_1;
  bVar2 = false;
  if (iVar1 == *param_2) {
    if (iVar1 == 1) {
      bVar2 = param_1[1] == param_2[1];
    }
    else {
      bVar2 = false;
      if (iVar1 == 0) {
        return param_1[1] == param_2[1];
      }
    }
  }
  return bVar2;
}




void FUN_008ff164(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"com.superevilmegacorp.vg.achievement.tutorialcompleted",1);
    return;
  }
  return;
}




void FUN_008ff194(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQBA",1);
    return;
  }
  return;
}




void FUN_008ff1c4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQBQ",1);
    return;
  }
  return;
}




void FUN_008ff1f4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQAQ",1);
    return;
  }
  return;
}




void FUN_008ff224(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQAg",1);
    return;
  }
  return;
}




void FUN_008ff254(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,&DAT_01b9184b,1);
    return;
  }
  return;
}




void FUN_008ff284(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQDA",1);
    return;
  }
  return;
}




void FUN_008ff2b4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQBg",1);
    return;
  }
  return;
}




void FUN_008ff2e4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQCg",1);
    return;
  }
  return;
}




void FUN_008ff314(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQCQ",1);
    return;
  }
  return;
}




void FUN_008ff344(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec522c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec525c(0x3f800000,"CgkIxZX4rtYLEAIQDQ",1);
    return;
  }
  return;
}




void FUN_008ff374(void)

{
  return;
}




void FUN_008ff378(void)

{
  return;
}




void FUN_008ff37c(void)

{
  return;
}




void FUN_008ff380(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00ced270(*(undefined4 *)(param_1 + 0x260));
  if ((uVar2 & 1) != 0) {
    FUN_00ceace8();
    uVar2 = FUN_00ceae88();
    if (((((uVar2 & 1) != 0) && (iVar1 = FUN_00ceacf4(), iVar1 != 3)) &&
        (iVar1 = FUN_00ceacf4(), iVar1 != 0x34)) &&
       ((iVar1 = FUN_00ceacf4(), iVar1 != 4 && (iVar1 = FUN_00ceacf4(), iVar1 != 0x35)))) {
      uVar3 = FUN_01985d44(param_1,DAT_02c091a0);
      iVar1 = FUN_00ceacf4();
      if (iVar1 == 0x2d) {
        FUN_00a0a7cc(uVar3,param_1,"Tutorial05_5v5_Client",0);
        return;
      }
    }
  }
  return;
}




void FUN_008ff424(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *__s;
  long lVar3;
  
  __s = operator_new(0xc88);
  memset(__s,0,0xc88);
  uVar2 = DAT_03214ce8;
  *__s = &PTR_FUN_027b8fe8;
  lVar3 = 8;
  do {
    puVar1 = (undefined8 *)((long)__s + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != __s + 0x191);
  DAT_02c091b0 = __s;
  return;
}




void FUN_008ff49c(void)

{
  if (DAT_02c091b0 != (long *)0x0) {
    (**(code **)(*DAT_02c091b0 + 8))();
  }
  DAT_02c091b0 = (long *)0x0;
  return;
}




void FUN_008ff4d0(long param_1,undefined4 param_2)

{
  long lVar1;
  long local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1 + 0x28;
  local_30 = *(undefined4 *)(param_1 + 0x30);
  (**(code **)(*DAT_02c091b0 + 0x10))(DAT_02c091b0,&local_38,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008ff53c(undefined4 param_1)

{
  (**(code **)(*DAT_02c091b0 + 0x20))(DAT_02c091b0,param_1);
                    /* WARNING: Could not recover jumptable at 0x008ff580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02c091b0 + 0x18))(DAT_02c091b0,param_1);
  return;
}




undefined8 FUN_008ff584(uint param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = 0;
  if ((param_1 & 0xff) < 200) {
    plVar2 = (long *)(**(code **)(*DAT_02c091b0 + 0x20))(DAT_02c091b0,param_1);
    plVar3 = (long *)*plVar2;
    uVar1 = 0;
    if (plVar3 != (long *)0x0) {
      if ((int)plVar2[1] == (int)plVar3[1]) {
        uVar1 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *plVar2 = 0;
        uVar1 = 0;
        *(undefined4 *)(plVar2 + 1) = DAT_03214ce8;
      }
    }
  }
  return uVar1;
}




void FUN_008ff600(void)

{
  return;
}




void FUN_008ff604(void)

{
  return;
}




void FUN_008ff608(void)

{
  return;
}




void FUN_008ff60c(void)

{
  return;
}




void FUN_008ff614(long param_1,undefined8 *param_2,byte param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1 = param_1 + (ulong)param_3 * 0x10;
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2);
  uVar1 = *(undefined4 *)(lVar2 + 0x30);
  *(long *)(param_1 + 8) = lVar2 + 0x28;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}




void FUN_008ff654(long param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  param_1 = param_1 + (ulong)param_2 * 0x10;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}




long FUN_008ff670(long param_1,byte param_2)

{
  return param_1 + (ulong)param_2 * 0x10 + 8;
}




bool FUN_008ff67c(long param_1,byte param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + (ulong)param_2 * 0x10 + 8);
  plVar2 = (long *)*plVar5;
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    piVar4 = (int *)(param_1 + (ulong)param_2 * 0x10 + 0x10);
    if (*piVar4 != (int)plVar2[1]) {
      *plVar5 = 0;
      *piVar4 = DAT_03214ce8;
      return false;
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}




undefined8 FUN_008ff6e4(void)

{
  return 0;
}




undefined8 FUN_008ff6ec(void)

{
  return 0;
}




undefined8 FUN_008ff6f4(void)

{
  return 0;
}




undefined8 FUN_008ff6fc(void)

{
  return 0;
}




undefined * FUN_008ff704(uint param_1)

{
  if (param_1 < 4) {
    return (&PTR_s_common_027b9020)[(int)param_1];
  }
  return &DAT_01e277f2;
}




undefined4 FUN_008ff728(float param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0.0) {
    return 0;
  }
  if (0.25 < param_1) {
    if (0.5 < param_1) {
      uVar1 = 100;
      if (param_1 <= 0.75) {
        uVar1 = 0x4b;
      }
      return uVar1;
    }
    return 0x32;
  }
  return 0x19;
}




void FUN_008ff778(undefined8 param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (DAT_02c091b8 == (void *)0x0) {
    pvVar1 = operator_new(0x50);
    FUN_008ff894();
    DAT_02c091b8 = pvVar1;
  }
  uVar2 = FUN_00ec4fe4();
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar2 = FUN_00ec5ad4();
  if ((uVar2 & 1) == 0) {
    FUN_00ec4fdc();
    FUN_00ec50b4("455691431470436");
    FUN_00ec50a4("a3up082xm2gw",param_1,1,0);
  }
  else {
    uVar2 = FUN_00ec5adc("enable_analytics_facebook",1);
    uVar3 = FUN_00ec5adc("enable_analytics_adjust",1);
    uVar4 = FUN_00ec5adc("enable_analytics_amplitude",1);
    FUN_00ec4fdc();
    if ((uVar2 & 1) != 0) {
      FUN_00ec50b4("455691431470436");
    }
    if ((uVar3 & 1) == 0) {
      FUN_00ec50a8();
    }
    else {
      FUN_00ec50a4("a3up082xm2gw",param_1,1,0);
    }
    if ((uVar4 & 1) == 0) goto LAB_008ff884;
  }
  FUN_00ec505c("e1374098043487941aa0bbdeb38b1ca4",0);
LAB_008ff884:
  FUN_00ec501c();
  return;
}




void FUN_008ff894(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 1;
  FUN_00e70314(param_1 + 0x10);
  FUN_00e70314(param_1 + 0x20);
  FUN_00e70314(param_1 + 0x30);
  FUN_00e70314(param_1 + 0x40);
  uVar1 = NEON_fmov(0xbf800000,4);
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  return;
}




void FUN_008ff8e8(void)

{
  ulong uVar1;
  
  if (DAT_02c091b8 != (void *)0x0) {
    operator_delete(DAT_02c091b8);
    DAT_02c091b8 = (void *)0x0;
  }
  uVar1 = FUN_00ec4fe4();
  if ((uVar1 & 1) != 0) {
    FUN_00ec4fe0();
    return;
  }
  return;
}




void FUN_008ff928(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00ceace8();
    if ((lVar3 != 0) && (lVar3 = FUN_00940c28(), *(char *)(lVar3 + 8) == '\0')) {
      local_70 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      FUN_00ceace8();
      uVar4 = FUN_00ceadc8();
      local_78 = "mode";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3e60(lVar3 + 0x28,uVar4);
      uVar4 = FUN_00ceadbc();
      local_78 = "botDifficulty";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3ef0(uVar4,lVar3 + 0x28);
      uVar4 = FUN_0091e258();
      local_78 = "myKDpct";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3ef0(uVar4,lVar3 + 0x28);
      uVar4 = FUN_0091e2e8();
      local_78 = "myKills";
      local_50 = &local_78;
      lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
      FUN_00ec3ef0(uVar4,lVar3 + 0x28);
      FUN_00ec506c("App_Suspend_MidGame",&local_70);
      FUN_00ec5024("App_Suspend_MidGame",&local_70);
      FUN_0090d2e0(&local_70,local_68);
    }
    lVar3 = DAT_02c091b8;
    if (DAT_02c091b8 != 0) {
      uVar4 = NEON_fmov(0xbf800000,4);
      *(undefined1 *)(DAT_02c091b8 + 1) = 0;
      *(undefined8 *)(lVar3 + 4) = uVar4;
      *(undefined4 *)(lVar3 + 0xc) = 0xbf800000;
    }
    FUN_00ec4ff0();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008ffaf4(void)

{
  uint uVar1;
  
  uVar1 = FUN_00ec4fe4();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5064();
    return;
  }
  return;
}




void FUN_008ffb14(void)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00ec5bc0(local_50,"hud_layout",&DAT_0320ffa8);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008ffc4c("client_pref_hudLayout",pvVar1,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar3 = FUN_0092e670();
  FUN_00ec5084("client_pref_settings_enabledMovementIndicator",uVar3 & 1);
  FUN_00ec503c("client_pref_settings_enabledMovementIndicator",uVar3 & 1);
  uVar3 = FUN_0092e6c8();
  FUN_00ec5084("client_pref_enableTapAndHoldMovement",uVar3 & 1);
  FUN_00ec503c("client_pref_enableTapAndHoldMovement",uVar3 & 1);
  uVar3 = FUN_0092e830();
  FUN_00ec5084("client_pref_dailyChestNotificationEnabled",uVar3 & 1);
  FUN_00ec503c("client_pref_dailyChestNotificationEnabled",uVar3 & 1);
  uVar3 = FUN_0093c588();
  FUN_00ec5084("client_pref_notificationKindredRequestResponse",uVar3 & 1);
  FUN_00ec503c("client_pref_notificationKindredRequestResponse",uVar3 & 1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008ffc4c(undefined8 param_1,char *param_2)

{
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_00ec5080(param_1,param_2);
    FUN_00ec5038(param_1,param_2);
    return;
  }
  FUN_00ec50a0(param_1);
  FUN_00ec5058(param_1);
  return;
}




void FUN_008ffca4(undefined8 param_1,uint param_2)

{
  FUN_00ec5084(param_1,param_2 & 1);
  FUN_00ec503c(param_1,param_2 & 1);
  return;
}




void FUN_008ffcd4(undefined8 param_1)

{
  FUN_00ec5074();
  FUN_00ec502c(param_1);
  return;
}




void FUN_008ffcf8(undefined8 param_1,undefined4 param_2)

{
  FUN_00ec5084();
  FUN_00ec503c(param_1,param_2);
  return;
}




void FUN_008ffd24(undefined8 param_1,undefined8 param_2)

{
  FUN_00ec5088();
  FUN_00ec5040(param_1,param_2);
  return;
}




void FUN_008ffd58(void)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = FUN_00ec516c();
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_0092ea24();
    if (iVar2 - 1U < 3) {
      pcVar4 = *(char **)(&DAT_027b9040 + (long)(int)(iVar2 - 1U) * 8);
    }
    else {
      pcVar4 = "Unknown";
    }
    iVar2 = FUN_0092ef90();
    pcVar1 = " (AUTO)";
    if (iVar2 != 0) {
      pcVar1 = "";
    }
    FUN_00ec5184("Graphics Quality is %s%s",pcVar4,pcVar1);
    return;
  }
  return;
}




void FUN_008ffdd4(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec516c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5184("Enter lobby (game mode: %d)",*param_1);
    return;
  }
  return;
}




void FUN_008ffe10(undefined4 *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = FUN_00ec516c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5184("Enter game (game mode: %d)",*param_1);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
    }
    FUN_00ec5184("Match ID: %s",pbVar2);
    return;
  }
  return;
}




void FUN_008ffe6c(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec516c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5184("Start Game Session (game mode: %d)",*param_1);
  }
  FUN_00ec4ff0();
  return;
}




void FUN_008ffea0(undefined4 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ec516c();
  if ((uVar2 & 1) != 0) {
    FUN_00ec5184("End Game Session (game mode: %d)",*param_1);
  }
  uVar3 = FUN_00ceadc8(param_1);
  FUN_008fff20(auStack_68,"Match_Complete_%s",uVar3);
  FUN_00ec50bc(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fff20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,0x40,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fffc0(byte *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  char *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  pbVar3 = *(byte **)(param_1 + 0x10);
  local_30 = &local_58;
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  local_58 = "reason";
  lVar2 = FUN_0090d33c(&local_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,pbVar3);
  FUN_00ec506c("Game_Match_Declined",&local_50);
  FUN_00ec5024("Game_Match_Declined",&local_50);
  FUN_0090d2e0(&local_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

