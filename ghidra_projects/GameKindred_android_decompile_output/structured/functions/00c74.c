// functions/00c74 — 17 functions
#include "libGameKindred.h"




void FUN_00c74038(long param_1,int param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (long)param_2;
  *(uint *)(param_1 + 0x11ac) =
       *(uint *)(param_1 + 0x11ac) & 0xfffffff8 |
       *(uint *)(param_1 + 0x11ac) & 3 | (uint)(param_2 < 1) << 2;
  *(uint *)(param_1 + 0x276c) =
       *(uint *)(param_1 + 0x276c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x276c) & 3 | (uint)(0 < param_2) << 2;
  FUN_00ca49e4(param_1 + 0x26e8,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c740bc(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c740cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c740d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_80 [16];
  void *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = DAT_03218f38;
  local_68 = DAT_03218f30;
  local_50 = param_1 + 0x1128;
  local_5c = _DAT_03218ef8;
  local_30 = 0x3f800000;
  local_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  local_2a = 1;
  local_2c = 0x101;
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_80,"daily_reward_collect");
  FUN_009baa78(uVar2,local_80,&local_68);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  uVar2 = FUN_009b8d90();
  FUN_009ba61c(uVar2,&DAT_0320ffa8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c741ac(long *param_1,undefined4 param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_00f11234();
  plVar1 = param_1 + 0x34;
  *param_1 = (long)&PTR_FUN_02801f88;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x52;
  FUN_00f0fe84(plVar2);
  plVar3 = param_1 + 0x7c;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x9a;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xb8;
  FUN_00f0e4a8(plVar5);
  param_1[0xd6] = param_3;
  param_1[0xd7] = param_4;
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f112f0(param_1,1);
  FUN_00f0e548(plVar1,PTR_s_build___DailyLogin_7Day_tga_02be35d8,param_1[0xd6]);
  if ((*(float *)(param_1 + 0x3e) != 0.5) || (*(float *)((long)param_1 + 500) != 0.5)) {
    param_1[0x3e] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e9c0(plVar1,1);
  FUN_00f0ff6c(plVar2,PTR_s_build___DailyLogin_7Day_tga_02be35d8);
  FUN_00f0ff74(plVar2,"frame_top_left",0,0,0,"frame_top_mid",0,0,0,"frame_top_right",0,0,0,
               "frame_mid_left",0,0,0,0,0,0,0,"frame_mid_right",0,0,0,"frame_bot_left",0,0,0,
               "frame_bot_mid",0,0,0,"frame_bot_right",0,0,0);
  FUN_00f105ec(plVar2,&DAT_01bbe700,2);
  FUN_00f0e540(plVar3,PTR_s_build___DailyLogin_7Day_tga_02be35d8);
  if (((char *)param_1[0xd7] != (char *)0x0) &&
     (iVar6 = strcmp((char *)param_1[0xd7],"daily_login_glory"), iVar6 == 0)) {
    FUN_00f0e578(plVar3,param_1[0xd7]);
  }
  if ((*(float *)(param_1 + 0x86) != 0.5) || (*(float *)((long)param_1 + 0x434) != 0.5)) {
    param_1[0x86] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e9c0(plVar3,1);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar7 = *(uint *)((long)param_1 + 0x554);
  if ((uVar7 & 0x7f80) != 0x5180) {
    *(uint *)((long)param_1 + 0x554) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5180;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_check");
  FUN_00f0e670(plVar5,&DAT_01bbe6fc,2);
  switch((int)param_1[0xd8]) {
  case 0:
    uVar7 = *(uint *)((long)param_1 + 0x644) & 0xfffffffb;
    uVar8 = *(uint *)((long)param_1 + 0x554) & 0xfffffffb;
    break;
  case 1:
    uVar7 = *(uint *)((long)param_1 + 0x644) | 4;
    uVar8 = *(uint *)((long)param_1 + 0x554) | 4;
    break;
  case 2:
    uVar7 = *(uint *)((long)param_1 + 0x644) & 0xfffffffb;
    uVar8 = *(uint *)((long)param_1 + 0x554) & 0xfffffffb;
    goto LAB_00c74564;
  case 3:
    uVar7 = *(uint *)((long)param_1 + 0x644) | 4;
    uVar8 = *(uint *)((long)param_1 + 0x554) | 4;
LAB_00c74564:
    *(uint *)((long)param_1 + 0x644) = uVar7;
    *(uint *)((long)param_1 + 0x554) = uVar8;
    FUN_00f0ff74(plVar2,"frame_highlight_top_left",0,0,0,"frame_highlight_top_mid",0,0,0,
                 "frame_highlight_top_right",0,0,0,"frame_highlight_mid_left",0,0,0,0,0,0,0,
                 "frame_highlight_mid_right",0,0,0,"frame_highlight_bot_left",0,0,0,
                 "frame_highlight_bot_mid",0,0,0,"frame_highlight_bot_right",0,0,0);
    FUN_00f105ec(plVar2,&DAT_01bbe704,2);
    return;
  default:
    goto switchD_00c744ec_default;
  }
  *(uint *)((long)param_1 + 0x644) = uVar7;
  *(uint *)((long)param_1 + 0x554) = uVar8;
switchD_00c744ec_default:
  return;
}




void FUN_00c74670(undefined8 *param_1)

{
  param_1[0xd7] = 0;
  *param_1 = &PTR_FUN_02801f88;
  param_1[0xb8] = &PTR_FUN_028266f0;
  param_1[0xcf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd2);
  FUN_00f13d08(param_1 + 0xb8);
  param_1[0x9a] = &PTR_FUN_028266f0;
  param_1[0xb1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb4);
  FUN_00f13d08(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_028266f0;
  param_1[0x93] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7c);
  param_1[0x52] = &PTR_FUN_02826f38;
  param_1[0x69] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c74758(void *param_1)

{
  FUN_00c74670();
  operator_delete(param_1);
  return;
}




void FUN_00c7477c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 uVar5;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f13f08();
  lVar1 = param_3 + 0x1a0;
  FUN_00f13f08(param_1,param_2,lVar1);
  FUN_00f0826c(param_1,lVar1);
  uVar5 = param_2;
  FUN_00f13f08(param_1,param_3 + 0x290);
  uVar4 = (undefined4)uVar5;
  lVar2 = param_3 + 0x3e0;
  local_60 = FUN_00f0eaf4(lVar2);
  uStack_5c = uVar4;
  FUN_00f13f18(lVar2,&local_60);
  FUN_00f0826c(param_1,lVar2);
  FUN_00f13f08(param_1,param_2,param_3 + 0x4d0);
  FUN_00f07940(0,0,lVar1,8,param_3,8);
  FUN_00f07940(0,0,lVar2,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x4d0,8,param_3,8);
  FUN_00f07b18(0,param_3 + 0x5c0,4,param_3,4);
  FUN_00f07b18(0xc1400000,param_3 + 0x5c0,2,param_3,2);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c748d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_02801cf8;
  param_1[0xa8] = &PTR_FUN_02826f38;
  param_1[0xbf] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xc2);
  FUN_00f13d08(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_028266f0;
  param_1[0xa1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa4);
  FUN_00f13d08(param_1 + 0x8a);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_028266f0;
  param_1[0x4f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x38);
  puVar1 = param_1 + 0x17;
  *puVar1 = &PTR_FUN_02827290;
  param_1[0x2e] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x35);
  *puVar1 = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(puVar1);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c749c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_02801cf8;
  param_1[0xa8] = &PTR_FUN_02826f38;
  param_1[0xbf] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xc2);
  FUN_00f13d08(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_028266f0;
  param_1[0xa1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa4);
  FUN_00f13d08(param_1 + 0x8a);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_028266f0;
  param_1[0x4f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x38);
  puVar1 = param_1 + 0x17;
  *puVar1 = &PTR_FUN_02827290;
  param_1[0x2e] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x35);
  *puVar1 = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(puVar1);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c74ac0(uint *param_1,uint param_2)

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




void FUN_00c74b40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_50 [8];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_028020e8;
  FUN_00f0ac5c(plVar1);
  plVar2 = param_1 + 0x43;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x69;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x8f;
  FUN_00ed66ec(plVar4);
  param_1[0x1d4] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00ed5664(plVar4,plVar1,1);
  FUN_00f0ad88(plVar1,plVar2,1);
  FUN_00f0ad88(plVar1,plVar3,1);
  local_50[0] = 9;
  FUN_00ed5ab0(plVar4,local_50);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("INVENTORY_HAT_TAB_TITLE",0);
  FUN_00f0d75c(plVar2,uVar6);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("INVENTORY_HAT_HEADER_INSTRUCTION",0);
  FUN_00f0d75c(plVar3,uVar6);
  FUN_00c74cbc(param_1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c74cbc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  
  FUN_00f13f18(param_1,param_1 + 0xea0);
  FUN_00f13f18(param_1 + 0x478,param_1 + 0xea0);
  lVar4 = param_1 + 0x218;
  FUN_00f0db64(*(float *)(param_1 + 0xea0) * 0.2,0,0x3f800000,lVar4);
  lVar1 = param_1 + 0x348;
  FUN_00f0dad0(*(float *)(param_1 + 0xea0) * 0.8,lVar1,1);
  lVar2 = param_1 + 0xd0;
  fVar6 = 10.0;
  FUN_00f07940(0x41200000,0x41200000,lVar4,0,lVar2,0);
  FUN_00f07940(0x41a00000,0x41200000,lVar1,0,lVar4,1);
  uVar7 = *(undefined4 *)(param_1 + 0xea0);
  FUN_00f0d548(lVar1);
  FUN_00f13f08(uVar7,fVar6 + 20.0,lVar2);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar5 = 0;
    do {
      FUN_00f13f08(*(undefined4 *)(param_1 + 0xea0),*(float *)(param_1 + 0xea4) * 0.45,
                   *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8));
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
      if (uVar5 == 0) {
        FUN_00f07b18(0,uVar3,0,lVar2,2);
        lVar4 = lVar2;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 200) + (ulong)((int)uVar5 - 1) * 8);
        FUN_00f07b18(0,uVar3,0,lVar4,2);
      }
      FUN_00f07b18(0,uVar3,3,lVar4,3);
      (**(code **)(**(long **)(*(long *)(param_1 + 200) + uVar5 * 8) + 0x90))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x4bc) != 0.0) {
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    FUN_0091ada4(param_1 + 0x478);
    return;
  }
  return;
}




void FUN_00c74ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028020e8;
  FUN_00c74f20();
  thunk_FUN_00ed5534(param_1 + 0x8f);
  FUN_00f0d3a4(param_1 + 0x69);
  FUN_00f0d3a4(param_1 + 0x43);
  param_1[0x1a] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c74f20(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 200) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xc0);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_00ed5670(param_1 + 0x478);
  return;
}




void FUN_00c74fa4(void *param_1)

{
  FUN_00c74ea0();
  operator_delete(param_1);
  return;
}




void FUN_00c74fc8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c74fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_00c74fd4(long param_1,uint *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*param_2 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = operator_new(0x3db0);
      FUN_00c75bdc();
      local_60 = pvVar2;
      FUN_00c750a0(pvVar2,*(undefined8 *)(*(long *)(param_2 + 2) + uVar3 * 8));
      FUN_00c753b4(param_1 + 0xc0,&local_60);
      FUN_00ed5664(param_1 + 0x478,local_60,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_2);
  }
  FUN_00c74cbc(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

