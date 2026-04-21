// functions/00b06 — 33 functions
#include "libGameKindred.h"




void FUN_00b0608c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_027db8d8;
  param_1[0x2b] = &PTR_FUN_027dba40;
  uVar2 = FUN_009e5a3c();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009e5a50();
    lVar5 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
    lVar1 = *(long *)(lVar3 + 0x38);
    do {
      lVar4 = lVar1;
      if (lVar5 == 0) goto LAB_00b060f8;
      lVar5 = lVar5 + -0x20;
      lVar1 = lVar4 + 0x20;
    } while (*(undefined8 **)(lVar4 + 8) != param_1);
    FUN_00b06ddc((uint *)(lVar3 + 0x30),lVar4);
  }
LAB_00b060f8:
  if (*(char *)((long)param_1 + 0x3a81) != '\0') {
    FUN_00a9bb74();
    *(char *)((long)param_1 + 0x3a81) = '\0';
  }
  if ((void *)param_1[0x74f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x74f]);
    param_1[0x74f] = 0;
    param_1[0x74e] = 0;
  }
  if ((void *)param_1[0x74d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x74d]);
    param_1[0x74d] = 0;
    param_1[0x74c] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x726);
  param_1[0x708] = &PTR_FUN_028266f0;
  param_1[0x71f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x722);
  FUN_00f13d08(param_1 + 0x708);
  param_1[0x6dd] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x6f4);
  FUN_00f13d08(param_1 + 0x6dd);
  param_1[0x6b9] = &PTR_FUN_028266f0;
  param_1[0x6d0] = &PTR_FUN_02826850;
  param_1[0x61e] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x6d3);
  FUN_00f13d08(param_1 + 0x6b9);
  param_1[0x69b] = &PTR_FUN_028266f0;
  param_1[0x6b2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6b5);
  FUN_00f13d08(param_1 + 0x69b);
  param_1[0x67d] = &PTR_FUN_028266f0;
  param_1[0x694] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x697);
  FUN_00f13d08(param_1 + 0x67d);
  FUN_00f01868(param_1 + 0x66c);
  FUN_009c825c(param_1 + 0x61e);
  FUN_00abd150(param_1 + 0x59e);
  FUN_009c7fa8(param_1 + 0x2e6);
  FUN_009c7fa8(param_1 + 0x2e);
  FUN_00948d58(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b06290(long param_1)

{
  FUN_00b0608c(param_1 + -0x158);
  return;
}




void FUN_00b06298(void *param_1)

{
  FUN_00b0608c();
  operator_delete(param_1);
  return;
}




void FUN_00b062bc(long param_1)

{
  FUN_00b0608c((void *)(param_1 + -0x158));
  operator_delete((void *)(param_1 + -0x158));
  return;
}




void FUN_00b062e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0x74c;
  FUN_009580b8();
  uVar5 = FUN_0095fdf0();
  uVar6 = FUN_00e70b88(plVar1,uVar5);
  if ((uVar6 & 1) != 0) {
    FUN_009580b8();
    uVar5 = FUN_0095fdf0();
    FUN_00910394(plVar1,uVar5);
    plVar2 = param_1 + 0x59e;
    FUN_00b02c3c(plVar2,plVar1,0);
    FUN_00f048e0(auStack_58,DAT_03133770,plVar1);
    FUN_00f04760(param_1,auStack_58,1);
    uVar3 = *(uint *)((long)param_1 + 0x2d74);
    if ((uVar3 >> 2 & 1) == 0) {
      *(uint *)((long)param_1 + 0x2d74) = uVar3 | 4;
      if ((uVar3 & 0x7f80) != 0) {
        *(uint *)((long)param_1 + 0x2d74) = uVar3 & 0xffff807f | 4;
        FUN_0091ada4(plVar2);
      }
      uVar5 = FUN_00efee28(0x3f800000,0x3eb33333,FUN_0091aa80);
      FUN_00f01980(plVar2);
      FUN_00f022a0(plVar2,uVar5);
    }
    FUN_00b035dc(plVar2,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8);
    fVar7 = (float)FUN_00b02bd4(plVar2);
    fVar7 = 1100.0 / fVar7;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    if ((*(float *)(param_1 + 0x5a7) != fVar7) || (*(float *)((long)param_1 + 0x2d3c) != fVar7)) {
      *(float *)(param_1 + 0x5a7) = fVar7;
      *(float *)((long)param_1 + 0x2d3c) = fVar7;
      FUN_0091ada4(plVar2);
    }
    (**(code **)(*param_1 + 0x138))(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b06464(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  uVar2 = FUN_0092ea9c();
  lVar3 = param_1 + 0x1730;
  fVar4 = DAT_02be3668;
  if ((uVar2 & 1) == 0) {
    fVar4 = 1.0;
  }
  if ((*(float *)(param_1 + 0x1778) != fVar4) || (*(float *)(param_1 + 0x177c) != fVar4)) {
    *(float *)(param_1 + 0x1778) = fVar4;
    *(float *)(param_1 + 0x177c) = fVar4;
    FUN_0091ada4(lVar3);
  }
  fVar4 = 0.75;
  if ((uVar2 & 1) == 0) {
    fVar4 = 0.5;
  }
  if ((*(float *)(param_1 + 0x3138) != fVar4) || (*(float *)(param_1 + 0x313c) != fVar4)) {
    *(float *)(param_1 + 0x3138) = fVar4;
    *(float *)(param_1 + 0x313c) = fVar4;
    FUN_0091ada4(param_1 + 0x30f0);
  }
  FUN_00f13238(param_1 + 0x36e8);
  lVar1 = param_1 + 0x2cf0;
  FUN_00f07940(0,0,param_1 + 0x36e8,5,lVar1,7);
  FUN_00f07940(0,0,lVar3,4,lVar1,6);
  FUN_00f07940(0x41f00000,0,param_1 + 0x30f0,7,lVar1,5);
  if ((*(byte *)(param_1 + 0x17b4) >> 2 & 1) == 0) {
    lVar3 = lVar1;
  }
  FUN_00f07940(0x41f00000,0,param_1 + 0x170,4,lVar3,6);
  FUN_00f13238(param_1);
  return;
}




void thunk_FUN_00b065c4(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = FUN_009e5a3c();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009e5a5c(), (uVar2 & 1) != 0)) {
    FUN_009e5a50();
    uVar2 = FUN_009e63ac();
    if (((uVar2 & 1) == 0) && (lVar1 = FUN_009580b8(), *(char *)(lVar1 + 0x568c) == '\0')) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
      return;
    }
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffb;
  FUN_00cbade8();
  return;
}




void FUN_00b065c4(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = FUN_009e5a3c();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009e5a5c(), (uVar2 & 1) != 0)) {
    FUN_009e5a50();
    uVar2 = FUN_009e63ac();
    if (((uVar2 & 1) == 0) && (lVar1 = FUN_009580b8(), *(char *)(lVar1 + 0x568c) == '\0')) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
      return;
    }
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffb;
  FUN_00cbade8();
  return;
}




void FUN_00b06630(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00b06734();
  FUN_00ce1cbc(param_1 + 0x2cf0,uVar3 & 1);
  uVar3 = FUN_00b06734();
  *(uint *)(param_1 + 0x17b4) =
       *(uint *)(param_1 + 0x17b4) & 0xfffffff8 | *(uint *)(param_1 + 0x17b4) & 3 | (uVar3 & 1) << 2
  ;
  *(uint *)(param_1 + 0x3174) =
       *(uint *)(param_1 + 0x3174) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3174) & 3 | (~uVar3 & 1) << 2;
  lVar4 = FUN_009580b8();
  uVar1 = *(undefined4 *)(lVar4 + 0x55e0);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,uVar1);
  FUN_00f0d75c(param_1 + 0x3930,&local_48);
  lVar4 = FUN_009580b8();
  *(uint *)(param_1 + 0x38c4) =
       *(uint *)(param_1 + 0x38c4) & 0xfffffffb | ((uint)*(byte *)(lVar4 + 0x568c) << 2 ^ 4) & 0xfc;
  FUN_00b065c4(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00b06734(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = FUN_009580b8();
  uVar3 = 0;
  if (*(char *)(lVar2 + 0x568c) == '\0') {
    uVar4 = FUN_00e80f58(0);
    uVar3 = 0;
    if ((uVar4 & 1) != 0) {
      if (((DAT_03139998 & 1) == 0) && (uVar3 = __cxa_guard_acquire(&DAT_03139998), (int)uVar3 != 0)
         ) {
        FUN_00e705c8(&DAT_03139988,"Player_");
        __cxa_atexit(FUN_0090e338,&DAT_03139988,&PTR_LOOP_02be3000);
        uVar3 = __cxa_guard_release(&DAT_03139998);
      }
      if (((DAT_031399b0 & 1) == 0) && (uVar3 = __cxa_guard_acquire(&DAT_031399b0), (int)uVar3 != 0)
         ) {
        FUN_00e705c8(&DAT_031399a0,"Guest_");
        __cxa_atexit(FUN_0090e338,&DAT_031399a0,&PTR_LOOP_02be3000);
        uVar3 = __cxa_guard_release(&DAT_031399b0);
      }
      FUN_009580b8(uVar3);
      uVar3 = FUN_0095fdf0();
      uVar1 = FUN_00e70b14(&DAT_03139988);
      uVar4 = FUN_00e70ca0(uVar3,&DAT_03139988,uVar1);
      if ((uVar4 & 1) == 0) {
        FUN_009580b8();
        uVar3 = FUN_0095fdf0();
        uVar1 = FUN_00e70b14(&DAT_031399a0);
        uVar3 = FUN_00e70ca0(uVar3,&DAT_031399a0,uVar1);
        return uVar3;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}




void FUN_00b06898(long param_1)

{
  FUN_00b06630(param_1 + -0x158);
  return;
}




void FUN_00b068a0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_00ce1cbc(param_1 + 0x2cf0,0);
    *(uint *)(param_1 + 0x17b4) = *(uint *)(param_1 + 0x17b4) & 0xfffffffb;
  }
  else {
    FUN_009580b8();
    uVar1 = FUN_0095fdf0();
    FUN_00b02c3c(param_1 + 0x2cf0,uVar1,0);
    *(uint *)(param_1 + 0x2d74) = *(uint *)(param_1 + 0x2d74) | 4;
  }
  return;
}




void FUN_00b0690c(long param_1)

{
  FUN_00b068a0(param_1 + -0x158);
  return;
}




void FUN_00b06914(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_00ce1cbc(param_1 + 0x2cf0,0);
      *(uint *)(param_1 + 0x17b4) = *(uint *)(param_1 + 0x17b4) & 0xfffffffb;
    }
  }
  else {
    FUN_009580b8();
    uVar1 = FUN_0095fdf0();
    FUN_00b02c3c(param_1 + 0x2cf0,uVar1,0);
    *(uint *)(param_1 + 0x2d74) = *(uint *)(param_1 + 0x2d74) | 4;
  }
  return;
}




void FUN_00b0698c(long param_1)

{
  FUN_00b06914(param_1 + -0x158);
  return;
}




void FUN_00b06994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b06b38(param_1,param_4);
  return;
}




void FUN_00b0699c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    FUN_00ce1ef0(param_1 + 0x2cf0);
    return;
  }
  return;
}




void thunk_FUN_00b06a14(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_RENAME_PLAYER_HANDLE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b06a84(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  code *pcStack_60;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00cbaca8();
  uVar2 = FUN_00f048a4("UI::EVENT_OPEN_GOVERNMENTID");
  FUN_00f048e0(auStack_58,uVar2,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(char *)(param_1 + 0x3a80) == '\0') {
    lVar3 = FUN_009e5a50();
    uStack_78 = 0;
    pcStack_60 = thunk_FUN_00b065c4;
    lStack_70 = param_1;
    lStack_68 = param_1;
    FUN_00b06e54(lVar3 + 0x30,&uStack_78);
    *(char *)(param_1 + 0x3a80) = '\x01';
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b069dc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    FUN_00ce1ef0(param_1 + 0x2cf0);
    return;
  }
  return;
}




void FUN_00b06a14(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_RENAME_PLAYER_HANDLE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b06a84(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  code *pcStack_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cbaca8();
  uVar2 = FUN_00f048a4("UI::EVENT_OPEN_GOVERNMENTID");
  FUN_00f048e0(auStack_58,uVar2,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(char *)(param_1 + 0x3a80) == '\0') {
    lVar3 = FUN_009e5a50();
    local_78 = 0;
    pcStack_60 = thunk_FUN_00b065c4;
    lStack_70 = param_1;
    local_68 = param_1;
    FUN_00b06e54(lVar3 + 0x30,&local_78);
    *(char *)(param_1 + 0x3a80) = '\x01';
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b06b38(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fe4);
    if ((((uVar2 & 1) != 0) || (DAT_03210fe4 == DAT_03210f50)) && (lVar5 = param_2[4], lVar5 != 0))
    {
      uVar3 = FUN_00f08be8(lVar5 + ((ulong)*(byte *)(lVar5 + 0x370) & 1) * 0x130 + 0x1e0);
      uVar2 = FUN_00e70b88(uVar3,&DAT_03210450);
      if ((uVar2 & 1) != 0) {
        *(uint *)(param_1 + 0x2d74) = *(uint *)(param_1 + 0x2d74) & 0xfffffffb;
        FUN_00910394(param_1 + 0x3a70,uVar3);
        uVar4 = FUN_00e6ce7c("MAIN_PROFILE_CONFIRM_NICKNAME_TITLE",0);
        thunk_FUN_00e7051c(&local_48,uVar4);
        uVar4 = FUN_00e6ce7c("MAIN_PROFILE_CONFIRM_NICKNAME_DESCRIPTION",0);
        thunk_FUN_00e7051c(&local_58,uVar4);
        FUN_00e705c8(&local_68,"[PLAYER_NAME]");
        FUN_00e71248(&local_58,0,&local_68,uVar3);
        if (local_60 != (void *)0x0) {
          operator_delete__(local_60);
          local_68 = 0;
          local_60 = (void *)0x0;
        }
        uVar3 = FUN_00e6ce7c("MAIN_PROFILE_CONFIRM_NICKNAME_CONFIRM",0);
        uVar4 = FUN_00e6ce7c("MAIN_PROFILE_CONFIRM_NICKNAME_CANCEL",0);
        FUN_00a9b9f8(&local_48,&local_58,uVar3,uVar4,&DAT_03210450,param_1,thunk_FUN_00b06d10,
                     thunk_FUN_00b06d74,0);
        *(undefined1 *)(param_1 + 0x3a81) = 1;
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_58 = 0;
          local_50 = (void *)0x0;
        }
        if (local_40 != (void *)0x0) {
          operator_delete__(local_40);
          local_48 = 0;
          local_40 = (void *)0x0;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b06d10(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x3a70;
  uVar2 = FUN_00e70b88(lVar1,&DAT_03210450);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009580b8();
    FUN_0095fd30(uVar3,lVar1);
    FUN_00910394(lVar1,&DAT_03210450);
  }
  FUN_009006f8(0);
  *(undefined1 *)(param_1 + 0x3a81) = 0;
  return;
}




void thunk_FUN_00b06d74(long param_1)

{
  undefined8 uVar1;
  
  FUN_00910394(param_1 + 0x3a70,&DAT_03210450);
  FUN_009580b8();
  uVar1 = FUN_0095fdf0();
  FUN_00b02c3c(param_1 + 0x2cf0,uVar1,0);
  *(uint *)(param_1 + 0x2d74) = *(uint *)(param_1 + 0x2d74) | 4;
  *(undefined1 *)(param_1 + 0x3a81) = 0;
  return;
}




void FUN_00b06d10(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x3a70;
  uVar2 = FUN_00e70b88(lVar1,&DAT_03210450);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009580b8();
    FUN_0095fd30(uVar3,lVar1);
    FUN_00910394(lVar1,&DAT_03210450);
  }
  FUN_009006f8(0);
  *(undefined1 *)(param_1 + 0x3a81) = 0;
  return;
}




void FUN_00b06d74(long param_1)

{
  undefined8 uVar1;
  
  FUN_00910394(param_1 + 0x3a70,&DAT_03210450);
  FUN_009580b8();
  uVar1 = FUN_0095fdf0();
  FUN_00b02c3c(param_1 + 0x2cf0,uVar1,0);
  *(uint *)(param_1 + 0x2d74) = *(uint *)(param_1 + 0x2d74) | 4;
  *(undefined1 *)(param_1 + 0x3a81) = 0;
  return;
}




void thunk_FUN_00b065c4(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = FUN_009e5a3c();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009e5a5c(), (uVar2 & 1) != 0)) {
    FUN_009e5a50();
    uVar2 = FUN_009e63ac();
    if (((uVar2 & 1) == 0) && (lVar1 = FUN_009580b8(), *(char *)(lVar1 + 0x568c) == '\0')) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
      return;
    }
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffb;
  FUN_00cbade8();
  return;
}




void FUN_00b06ddc(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_00b06e54(uint *param_1,undefined8 *param_2)

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
    FUN_00b06ee8(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void thunk_FUN_00b065c4(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = FUN_009e5a3c();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_009e5a5c(), (uVar2 & 1) != 0)) {
    FUN_009e5a50();
    uVar2 = FUN_009e63ac();
    if (((uVar2 & 1) == 0) && (lVar1 = FUN_009580b8(), *(char *)(lVar1 + 0x568c) == '\0')) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
      return;
    }
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffb;
  FUN_00cbade8();
  return;
}




void FUN_00b06ee8(uint *param_1,uint param_2)

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




void FUN_00b06f74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  byte local_b8 [16];
  void *local_a8;
  code *local_a0;
  long *plStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  FUN_00ed34fc();
  plVar1 = param_1 + 0x12;
  *param_1 = (long)&PTR_FUN_027dbdd8;
  FUN_00f0c714(plVar1);
  plVar2 = param_1 + 0x2d;
  FUN_00f0ac5c(plVar2);
  plVar3 = param_1 + 0x56;
  FUN_00f0e4a8(plVar3);
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x92;
  FUN_00f0fe84();
  FUN_00f0fe84(param_1 + 0xbc);
  plVar5 = param_1 + 0xe6;
  FUN_00f0fe84();
  plVar6 = param_1 + 0x110;
  FUN_00f13ca4(plVar6);
  FUN_00f0e4a8(param_1 + 0x127);
  plVar7 = param_1 + 0x145;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x16b;
  FUN_00c939c4(plVar8,0);
  plVar9 = param_1 + 0x2e5;
  FUN_00f0e4a8();
  FUN_00f1306c(param_1 + 0x303);
  FUN_00f1306c(param_1 + 0x32e);
  FUN_00f1306c(param_1 + 0x359);
  FUN_00f13ca4();
  param_1[0x39b] = 0x4200000042000000;
  lVar13 = DAT_03218f18;
  *(undefined4 *)(param_1 + 0x39d) = 0x3f6e147b;
  *(undefined2 *)((long)param_1 + 0x1cec) = 0x100;
  param_1[0x39c] = lVar13;
  *(undefined1 *)((long)param_1 + 0x1cee) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0ad88(plVar2,plVar3,1);
  FUN_00f0ad88(plVar2,param_1 + 0x74,1);
  FUN_00f0ad88(plVar2,plVar6,1);
  FUN_00f023ec(plVar6,param_1 + 0x127,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,param_1 + 0x303,1);
  FUN_00f023ec(plVar6,param_1 + 0x359,1);
  FUN_00f023ec(plVar6,param_1 + 0x32e,1);
  FUN_00f023ec(plVar6,plVar9,1);
  FUN_00f0ad88(plVar2,plVar4,1);
  FUN_00f0ad88(plVar2,plVar5,1);
  FUN_00f0ad88(plVar2,plVar8,1);
  FUN_00f0ad88(plVar2,param_1 + 900,1);
  FUN_00f0c774(plVar1,&DAT_01bee7f6);
  FUN_00f0acd4(plVar2,&DAT_03218f08);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill");
  FUN_00f0e548(param_1 + 0x74,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_corner_burst");
  *(byte *)(param_1 + 0x8f) = *(byte *)(param_1 + 0x8f) | 2;
  FUN_00b075b8(param_1,0);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  uVar10 = *(uint *)((long)param_1 + 0xaac);
  if ((uVar10 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0xaac) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x7900;
    FUN_0091ada4(plVar7);
  }
  puVar12 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_008fa54c(&local_a0,"button_lively_close");
  FUN_008fa54c(local_b8,"button_lively_close_hit");
  FUN_00c93a88(plVar8,puVar12,&local_a0,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  FUN_00c9228c(plVar8,0);
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar10 = *(uint *)((long)param_1 + 0x17ac);
  if ((uVar10 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x17ac) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0ff6c(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0ff74(plVar4,"gradient_rect_top_left",0,0,0,"gradient_rect_top_middle",0,0,0,
               "gradient_rect_top_right",0,0,0,"gradient_rect_middle_left",0,0,0,0,0,0,0,
               "gradient_rect_middle_right",0,0,0,"gradient_rect_bottom_left",0,0,0,
               "gradient_rect_bottom_middle",0,0,0,"gradient_rect_bottom_right",0,0,0);
  FUN_00f0ff6c(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0ff74(plVar5,"gradient_glow_big_top_left",0,0,0,"gradient_glow_big_top_middle",0,0,0,
               "gradient_glow_big_top_left",1,0,0,"gradient_glow_big_middle_left",0,0,0,0,0,0,0,
               "gradient_glow_big_middle_left",1,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_78 = DAT_03210c64;
  local_a0 = thunk_FUN_00b08b18;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x16c,&local_a0);
  FUN_008fa54c(&local_a0,"build://Sounds/UI.assetbundle/sfx_popup_close.mp3");
  FUN_00c928cc(plVar8,&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  local_78 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x114) = *(uint *)((long)param_1 + 0x114) | 0x10;
  local_a0 = thunk_FUN_00b08b18;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x13,&local_a0);
  local_a0 = thunk_FUN_00b08b18;
  local_78 = DAT_03210f8c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x13,&local_a0);
  *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 0x10;
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

