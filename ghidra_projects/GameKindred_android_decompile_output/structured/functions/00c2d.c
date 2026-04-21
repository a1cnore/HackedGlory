// functions/00c2d — 24 functions
#include "libGameKindred.h"




void FUN_00c2d1d4(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2d1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c2d1ec(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2d1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c2d204(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 0x144) =
       *(uint *)(param_1 + 0x144) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x23c2) << 2;
  pcVar1 = "MAIN_MENU_PLAY";
  if (*(char *)(param_1 + 0x23c3) != '\0') {
    pcVar1 = "MENU_FRIENDS_STATUS_IN_PARTY";
  }
  uVar2 = FUN_00e6ce7c(pcVar1,0);
  FUN_00c938d4(param_1 + 0xe40,uVar2);
  if ((*(char *)(param_1 + 0x23c2) == '\0') || (*(char *)(param_1 + 0x23c3) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00b045b0(param_1 + 0xd70,uVar2,1);
  return;
}




void FUN_00c2d2a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f9db0;
  if ((*(char *)(param_1 + 0x478) != '\0') || (*(char *)((long)param_1 + 0x23c1) != '\0')) {
    FUN_00c2d480(param_1,0,0);
  }
  lVar1 = FUN_00a06b24();
  lVar3 = (ulong)*(uint *)(lVar1 + 0x50) << 5;
  lVar4 = *(long *)(lVar1 + 0x58);
  do {
    lVar2 = lVar4;
    if (lVar3 == 0) goto LAB_00c2d328;
    lVar3 = lVar3 + -0x20;
    lVar4 = lVar2 + 0x20;
  } while (*(undefined8 **)(lVar2 + 8) != param_1);
  FUN_00bd28cc((uint *)(lVar1 + 0x50),lVar2);
LAB_00c2d328:
  param_1[0x45a] = &PTR_FUN_028266f0;
  param_1[0x471] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x474);
  FUN_00f13d08(param_1 + 0x45a);
  param_1[0x311] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x432);
  FUN_00c925cc(param_1 + 0x311);
  param_1[0x1c8] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x2e9);
  FUN_00c925cc(param_1 + 0x1c8);
  FUN_00b04404(param_1 + 0x1ae);
  param_1[400] = &PTR_FUN_028266f0;
  param_1[0x1a7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1aa);
  FUN_00f13d08(param_1 + 400);
  lVar4 = 0;
  param_1[0xe0] = &PTR_FUN_027d47d0;
  do {
    *(undefined ***)((long)param_1 + lVar4 + 0xb78) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar4 + 0xc30) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar4 + 0xc48);
    FUN_00f13d08((long)param_1 + lVar4 + 0xb78);
    lVar4 = lVar4 + -0xf0;
  } while (lVar4 != -0x4b0);
  FUN_00f13d08(param_1 + 0xe0);
  param_1[0xb5] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xcc);
  FUN_00f13d08(param_1 + 0xb5);
  FUN_00f0d3a4(param_1 + 0x8f);
  FUN_00f0d3a4(param_1 + 0x69);
  FUN_00f0d3a4(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c2d480(long param_1,byte param_2,byte param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(byte *)(param_1 + 0x23c0) != (param_2 & 1)) {
    if ((param_2 & 1) == 0) {
      uVar3 = FUN_009b8d90();
      FUN_009baadc(uVar3,&DAT_0313b5d0);
    }
    else {
      local_80 = DAT_03218f38;
      local_88 = DAT_03218f30;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0x3f800000;
      local_70 = param_1 + 0xe40;
      local_7c = (undefined4)_DAT_03218ef8;
      uStack_78._0_4_ = (undefined4)((ulong)_DAT_03218ef8 >> 0x20);
      local_4a = 1;
      uStack_68 = 0;
      local_4c = 1;
      uVar3 = FUN_009b8d90();
      FUN_009baa78(uVar3,&DAT_0313b5d0,&local_88);
    }
    *(byte *)(param_1 + 0x23c0) = param_2 & 1;
  }
  if (*(byte *)(param_1 + 0x23c1) != (param_3 & 1)) {
    if ((param_3 & 1) == 0) {
      uVar3 = FUN_009b8d90();
      FUN_009ba61c(uVar3,&DAT_0313b5d0);
    }
    else {
      uStack_78 = param_1 + 0xe40;
      local_88 = _DAT_03218ef8;
      local_80 = (undefined4)_DAT_03218ef8;
      local_7c = (undefined4)((ulong)_DAT_03218ef8 >> 0x20);
      uVar2 = (ulong)local_70 >> 0x20;
      local_70 = CONCAT44((uint)uVar2 & 0xffffff00,0x1000101);
      uVar3 = FUN_009b8d90();
      FUN_009ba5e4(uVar3,&DAT_0313b5d0,&local_88);
    }
    *(byte *)(param_1 + 0x23c1) = param_3 & 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2d5e0(void *param_1)

{
  FUN_00c2d2a8();
  operator_delete(param_1);
  return;
}




void FUN_00c2d604(void)

{
  return;
}




void FUN_00c2d608(void)

{
  return;
}




void FUN_00c2d60c(long param_1,byte param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) != *(byte *)(param_1 + 0x23c2)) {
    *(byte *)(param_1 + 0x23c2) = param_2 & 1;
    FUN_00c2d204(param_1);
    if ((param_2 & 1) != 0) {
      FUN_00b16664(0x3e19999a,0x3ecccccd,0,0x3f666666,param_1 + 0x700);
      FUN_00b16058(param_1 + 0x700);
      FUN_00e705c8(&local_48,&DAT_01bb47ff);
      FUN_00f0d75c(param_1 + 0x218,&local_48);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2d6e4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x23c3) = param_2 & 1;
  FUN_00c2d204();
  return;
}




void FUN_00c2d6f4(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x69);
                    /* WARNING: Could not recover jumptable at 0x00c2d720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c2d724(undefined4 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  float fVar5;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar5 = (float)NEON_fminnm(param_1,0x44160000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  if (0.0 <= fVar5) {
    if (60.0 <= fVar5) {
      uVar2 = FUN_00e6ce7c("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
      thunk_FUN_00e7051c(&local_58,uVar2);
      iVar4 = (int)(fVar5 + (float)((int)fVar5 / 0x3c) * -60.0);
      FUN_00e70510(&local_68);
      if (iVar4 < 10) {
        pcVar3 = "%d:0%d";
      }
      else {
        pcVar3 = "%d:%d";
      }
      FUN_00e70e18(&local_68,pcVar3,(int)fVar5 / 0x3c,iVar4);
      FUN_00e705c8(&local_78,"[ESTTIME]");
      FUN_00e71248(&local_58,0,&local_78,&local_68);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      FUN_00f0d75c(param_2 + 0x8f,&local_58);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      goto LAB_00c2d82c;
    }
    uVar2 = FUN_00e6ce7c("MAIN_MENU_MATCHING_BOX_SUBTITLE_SHORTWAIT",0);
    thunk_FUN_00e7051c(&local_58,uVar2);
    FUN_00e705c8(&local_68,"[MIN]");
    pcVar3 = "1";
  }
  else {
    uVar2 = FUN_00e6ce7c("MAIN_MENU_MATCHING_BOX_SUBTITLE_UNKNOWN",0);
    thunk_FUN_00e7051c(&local_58,uVar2);
    FUN_00e705c8(&local_68,"[MIN]");
    pcVar3 = "5";
  }
  FUN_00e705c8(&local_78,pcVar3);
  FUN_00e71248(&local_58,0,&local_68,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0d75c(param_2 + 0x8f,&local_58);
LAB_00c2d82c:
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  (**(code **)(*param_2 + 0xe8))(param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2d954(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_009b8d90();
    FUN_008fa54c(local_40,"quest_focus_indicator");
    FUN_009baadc(uVar2,local_40);
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




void FUN_00c2d9cc(long param_1)

{
  *(uint *)(*(long *)(param_1 + 0xc78) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc78) + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c2d9e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  
  FUN_00f13db4();
  iVar5 = FUN_0092f2b8();
  uVar4 = 0x42700000;
  if (iVar5 < 2) {
    uVar4 = 0;
  }
  iVar5 = FUN_0092f2b8();
  (**(code **)(*(long *)param_1[399] + 0x90))((long *)param_1[399]);
  plVar7 = (long *)param_1[399];
  uVar6 = (**(code **)(*plVar7 + 0x118))(plVar7);
  FUN_00f13f2c(plVar7,uVar6);
  FUN_00f07a18(0,uVar4,param_1[399],1);
  plVar7 = param_1 + 0x1ae;
  FUN_00f13f08(DAT_0313b5c0,DAT_0313b5c4,plVar7);
  FUN_00f07b18(*(undefined4 *)(&DAT_01bbc858 + (ulong)(1 < iVar5) * 4),plVar7,2,param_1,2);
  FUN_00f07b18(0,plVar7,4,param_1[399],4);
  FUN_00f07940(0,0,param_1 + 0x1c8,8,plVar7,8);
  FUN_00f07940(0,0,param_1 + 0x311,8,plVar7,8);
  if ((*(float *)(param_1 + 0xe9) != 1.6) || (*(float *)((long)param_1 + 0x74c) != 1.6)) {
    param_1[0xe9] = 0x3fcccccd3fcccccd;
    FUN_0091ada4(param_1 + 0xe0);
  }
  plVar1 = param_1 + 0xb5;
  FUN_00f13238(plVar1);
  plVar2 = param_1 + 0x69;
  FUN_00f07b18(0,plVar2,0,param_1 + 0x43,2);
  FUN_00f07b18(0,plVar2,1,param_1 + 0x43,1);
  plVar3 = param_1 + 0x8f;
  FUN_00f07b18(0,plVar3,0,plVar2,2);
  FUN_00f07b18(0,plVar3,1,plVar2,1);
  FUN_00f07b18(0x41400000,plVar1,0,plVar3,2);
  FUN_00f07b18(0,plVar1,1,plVar3,1);
  plVar1 = param_1 + 0x18;
  FUN_00f13238(plVar1);
  FUN_00f07b18(0xc2700000,plVar1,1,plVar7,3);
  FUN_00f07b18(0,plVar1,5,plVar7,5);
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0e74c(param_1 + 0x45a,(int)fVar8);
  FUN_00f07b18(0,param_1 + 0x45a,4,param_1,4);
  if (param_1[0x1aa] != 0) {
    FUN_00f07940(0x41700000,0xc1700000,param_1 + 400,3,param_1,3);
    return;
  }
  return;
}




void FUN_00c2dca4(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2dcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c2dcbc(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2dccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c2dcd4(long *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_0313b610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0313b610), iVar1 != 0)) {
    FUN_00e70510(&DAT_0313b600);
    __cxa_atexit(FUN_0090e338,&DAT_0313b600,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313b610);
  }
  if (*param_2 % 0x3c < 10) {
    pcVar2 = "%d:0%d";
  }
  else {
    pcVar2 = "%d:%d";
  }
  FUN_00e70e18(&DAT_0313b600,pcVar2);
  FUN_00f0d75c(param_1 + 0x43,&DAT_0313b600);
                    /* WARNING: Could not recover jumptable at 0x00c2dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c2ddc8(void)

{
  return;
}




void * FUN_00c2ddcc(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x108);
  FUN_00ca9a64();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c2de34(uint *param_1,undefined8 *param_2)

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
    FUN_00c2dec8(param_1,uVar2);
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




void thunk_FUN_00c2dcd4(long *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_0313b610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0313b610), iVar1 != 0)) {
    FUN_00e70510(&DAT_0313b600);
    __cxa_atexit(FUN_0090e338,&DAT_0313b600,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313b610);
  }
  if (*param_2 % 0x3c < 10) {
    pcVar2 = "%d:0%d";
  }
  else {
    pcVar2 = "%d:%d";
  }
  FUN_00e70e18(&DAT_0313b600,pcVar2);
  FUN_00f0d75c(param_1 + 0x43,&DAT_0313b600);
                    /* WARNING: Could not recover jumptable at 0x00c2dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c2dec8(uint *param_1,uint param_2)

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




void FUN_00c2df54(long *param_1)

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
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  undefined8 local_80;
  long local_78;
  
  lVar18 = tpidr_el0;
  local_78 = *(long *)(lVar18 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027f9ef8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x71;
  FUN_00f0d160();
  plVar5 = param_1 + 0x97;
  FUN_00f0bdbc(plVar5,0);
  plVar6 = param_1 + 0xb0;
  param_1[0x97] = (long)&PTR_FUN_027c3260;
  FUN_00ac5ab8(plVar6,0);
  plVar7 = param_1 + 0x231;
  FUN_00b2a3e4(plVar7,0);
  plVar8 = param_1 + 0x3b1;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x3d7;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_1 + 0x3f5;
  FUN_00f0bdbc(plVar10,0);
  plVar11 = param_1 + 0x40e;
  param_1[0x3f5] = (long)&PTR_FUN_027c3260;
  FUN_00f0e4a8();
  plVar12 = param_1 + 0x42c;
  FUN_00f0e4a8();
  plVar13 = param_1 + 0x44a;
  FUN_00b1d5d8();
  plVar14 = param_1 + 0x4c4;
  FUN_00f1306c(plVar14);
  FUN_00f1306c();
  plVar15 = param_1 + 0x51a;
  FUN_00f0e4a8(plVar15);
  plVar16 = param_1 + 0x538;
  FUN_00f0d160(plVar16);
  plVar17 = param_1 + 0x55e;
  FUN_00f0e4a8(plVar17);
  param_1[0x582] = 0;
  param_1[0x581] = 0;
  param_1[0x580] = 0;
  param_1[0x57f] = 0;
  param_1[0x57e] = 0;
  param_1[0x57d] = 0;
  *(undefined4 *)(param_1 + 0x583) = 0x3f000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar9,1);
  FUN_00f023ec(plVar2,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar5,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_00f023ec(plVar10,plVar14,1);
  FUN_00f133a4(plVar14,plVar15,1);
  FUN_00f133a4(plVar14,plVar16,1);
  FUN_00f023ec(plVar10,plVar13,1);
  FUN_00f023ec(plVar10,plVar12,1);
  FUN_00f023ec(plVar10,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4ef,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar19 = *(uint *)((long)param_1 + 0x22c);
  if ((~uVar19 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x22c) = uVar19 | 0x7f80;
    FUN_0091ada4(plVar2);
    uVar19 = *(uint *)((long)param_1 + 0x22c);
  }
  *(uint *)((long)param_1 + 0x22c) = uVar19 & 0xfffffffb;
  FUN_00f0e548(plVar1,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_glow");
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar19 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar19 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x31c) = uVar19 & 0xffff807f;
    FUN_0091ada4(plVar3);
    uVar19 = *(uint *)((long)param_1 + 0x31c);
  }
  *(uint *)((long)param_1 + 0x31c) = uVar19 | 4;
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar9,&DAT_01bee7f6,2);
  uVar19 = *(uint *)((long)param_1 + 0x1f3c);
  if ((uVar19 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1f3c) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5900;
    FUN_0091ada4(plVar9);
  }
  local_80 = 0x3f80000000000000;
  (**(code **)(param_1[0x3d7] + 0x28))(plVar9,&local_80);
  *(byte *)(param_1 + 0x3f2) = *(byte *)(param_1 + 0x3f2) | 2;
  FUN_00f0da30(plVar4,1);
  local_80 = 0x4000000040000000;
  FUN_00f0da8c(plVar4,&local_80);
  FUN_00f0da80(plVar4,&DAT_01bee7f6);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  if ((*(float *)(param_1 + 0xba) != 0.0) || (*(float *)((long)param_1 + 0x5d4) != 0.5)) {
    param_1[0xba] = 0x3f00000000000000;
    FUN_0091ada4(plVar6);
  }
  FUN_00ac5da8(plVar6,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  *(uint *)((long)param_1 + 0x604) = *(uint *)((long)param_1 + 0x604) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x23b) != 0.0) || (*(float *)((long)param_1 + 0x11dc) != 0.5)) {
    param_1[0x23b] = 0x3f00000000000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00b2a6b8(plVar7,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  *(uint *)((long)param_1 + 0x120c) = *(uint *)((long)param_1 + 0x120c) & 0xfffffffb;
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  if ((~*(uint *)((long)param_1 + 0x1e0c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1e0c) = *(uint *)((long)param_1 + 0x1e0c) | 0x7f80;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0da58(plVar8,1);
  FUN_00f0e540(plVar11,PTR_s_build___FranchiseLogos_tga_02be3610);
  FUN_00f13f08(0x42c80000,0x42c80000,plVar11);
  *(uint *)((long)param_1 + 0x20f4) = *(uint *)((long)param_1 + 0x20f4) & 0xfffffffb;
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"loading_screen_avatar_5v5");
  FUN_00f13f08(0x42c80000,0x42c80000,plVar12);
  *(uint *)((long)param_1 + 0x21e4) = *(uint *)((long)param_1 + 0x21e4) & 0xfffffffb;
  FUN_00f0e548(plVar15,PTR_s_build___MenuPartsCommon_tga_02be3530,"brawl_trophy");
  FUN_00f13f08(0x42a00000,0x42a00000,plVar15);
  FUN_00f0d378(plVar16,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  *(uint *)((long)param_1 + 0x26a4) = *(uint *)((long)param_1 + 0x26a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x27fc) = *(uint *)((long)param_1 + 0x27fc) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x453) != 1.2) || (*(float *)((long)param_1 + 0x229c) != 1.2)) {
    param_1[0x453] = 0x3f99999a3f99999a;
    FUN_0091ada4(plVar13);
  }
  FUN_00b1da7c(plVar13,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00b1daac(0x3f4ccccd,plVar13);
  *(uint *)((long)param_1 + 0x22d4) = *(uint *)((long)param_1 + 0x22d4) & 0xfffffffb;
  FUN_00f0e548(plVar17,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar17,&DAT_01bbc98c,2);
  *(uint *)((long)param_1 + 0x2b74) = *(uint *)((long)param_1 + 0x2b74) & 0xfffffffb;
  if (*(long *)(lVar18 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

