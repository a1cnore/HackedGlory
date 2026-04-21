// functions/00c22 — 18 functions
#include "libGameKindred.h"




void FUN_00c22278(void *param_1)

{
  FUN_00c21d08();
  operator_delete(param_1);
  return;
}




void FUN_00c2229c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  FUN_00c260b4();
  plVar1 = param_1 + 199;
  param_1[0xc6] = 0;
  *param_1 = (long)&PTR_FUN_027f8668;
  FUN_00f0d160(plVar1);
  FUN_00f13ca4(param_1 + 0xed);
  param_1[0xed] = (long)&PTR_FUN_02825e18;
  FUN_00f0bcb4(param_1 + 0x104);
  plVar2 = param_1 + 0x108;
  FUN_00b15e58(plVar2,0);
  plVar3 = param_1 + 0x1b7;
  FUN_00f0bd88(plVar3);
  plVar4 = param_1 + 0x1d0;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x1f6;
  FUN_00b25254(plVar5);
  FUN_00f0bcb4(param_1 + 0x222);
  param_1[0x22a] = 0;
  param_1[0x229] = 0;
  param_1[0x228] = 0;
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  FUN_00e70314(param_1 + 0x22b);
  param_1[0x22d] = 0;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xed,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  *(undefined4 *)(param_1 + 0x225) = 1;
  param_1[0x223] = 0x41200000;
  if ((*(float *)(param_1 + 0x111) != 3.0) || (*(float *)((long)param_1 + 0x88c) != 3.0)) {
    lVar10 = NEON_fmov(0x40400000,4);
    param_1[0x111] = lVar10;
    FUN_0091ada4(plVar2);
  }
  *(uint *)((long)param_1 + 0x8c4) = *(uint *)((long)param_1 + 0x8c4) & 0xfffffffb;
  uVar8 = FUN_0092ea9c();
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0da30(plVar1,1);
  uVar9 = FUN_00e6ce7c("MENU_MARKET_DAILY_PICK_TITLE",0);
  FUN_00f0d75c(plVar1,uVar9);
  FUN_00f0dac8(plVar1,3);
  uVar7 = *(uint *)((long)param_1 + 0x6bc);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x6bc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar8 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar4,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0xf04);
  if ((uVar7 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xf04) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar4);
  }
  uVar9 = FUN_00e6ce7c("MENU_MARKET_DAILY_PICK_TIMER_LABEL",0);
  FUN_00f0d75c(plVar4,uVar9);
  FUN_00f0dac8(plVar4,3);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar8 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar5,*ppuVar6);
  uVar9 = FUN_00e6ce7c("MENU_MARKET_DAILY_PICK_TIMER",0);
  FUN_00b252ac(plVar5,uVar9,1,1);
  FUN_00f0d998(plVar5,1);
  FUN_00f0dac8(plVar5,3);
  FUN_00f0c244(plVar3,1);
  return;
}




void FUN_00c225a0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027f8668;
  FUN_00c226c0();
  if ((void *)param_1[0x229] != (void *)0x0) {
    operator_delete__((void *)param_1[0x229]);
    param_1[0x229] = 0;
    param_1[0x228] = 0;
  }
  if ((void *)param_1[0x227] != (void *)0x0) {
    operator_delete__((void *)param_1[0x227]);
    param_1[0x227] = 0;
    param_1[0x226] = 0;
  }
  param_1[0x1f6] = &PTR_FUN_027d3cc8;
  param_1[0x20d] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x21f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x21f]);
    param_1[0x21f] = 0;
    param_1[0x21e] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1f6);
  FUN_00f0d3a4(param_1 + 0x1d0);
  FUN_00f13d08(param_1 + 0x1b7);
  param_1[0x108] = &PTR_FUN_027d47d0;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xcb8) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xd70) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xd88);
    FUN_00f13d08((long)param_1 + lVar1 + 0xcb8);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_00f13d08(param_1 + 0x108);
  FUN_00f13d08(param_1 + 0xed);
  FUN_00f0d3a4(param_1 + 199);
  FUN_00c22f2c(param_1);
  return;
}




void FUN_00c226c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1140);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1148) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1148) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x1140);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1148) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x1148) != 0) {
    *(undefined4 *)(param_1 + 0x1140) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x1130);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1138) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1138) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x1130);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1138) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x1138) != 0) {
    *(undefined4 *)(param_1 + 0x1130) = 0;
  }
  return;
}




void FUN_00c2279c(void *param_1)

{
  FUN_00c225a0();
  operator_delete(param_1);
  return;
}




void FUN_00c227c0(long *param_1)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((undefined8 *)param_1[0x22a] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x22a])(auStack_38);
    FUN_00c2284c(param_1,auStack_38);
    FUN_00c23040(auStack_38,1);
    *(undefined1 *)(param_1 + 0x22e) = 0;
    (**(code **)(*param_1 + 0xe8))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2284c(long *param_1,uint *param_2)

{
  long lVar1;
  
  FUN_00c226c0();
  *(uint *)((long)param_1 + 0x8c4) =
       *(uint *)((long)param_1 + 0x8c4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x8c4) & 3 | (uint)(*param_2 == 0) << 2;
  if (*param_2 == 0) {
    FUN_00b16058(param_1 + 0x108);
  }
  else {
    FUN_00b16600();
  }
  *(uint *)((long)param_1 + 0xe3c) =
       *(uint *)((long)param_1 + 0xe3c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe3c) & 3 | (uint)(*param_2 != 0) << 2;
  if (*param_2 != 0) {
    lVar1 = *(long *)(param_2 + 2);
    do {
      FUN_00c22cd4(param_1,lVar1);
      lVar1 = lVar1 + 0x48;
    } while (lVar1 != *(long *)(param_2 + 2) + (ulong)*param_2 * 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00c228fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c22900(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c22908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c2290c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,&local_48);
  lVar3 = local_48.tv_nsec - *(long *)(param_1 + 0x1160);
  lVar2 = local_48.tv_sec - *(long *)(param_1 + 0x1158);
  if (lVar3 < 0) {
    lVar2 = lVar2 + -1;
    lVar3 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x1160);
  }
  if (((double)(lVar3 + lVar2 * 1000000000) * 1e-09 <= (double)*(long *)(param_1 + 0x1168)) ||
     (*(char *)(param_1 + 0x1170) != '\0')) {
    FUN_00b252ec(param_1 + 0xfb0);
  }
  else {
    if (*(long **)(param_1 + 0x630) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x630) + 8))();
    }
    *(char *)(param_1 + 0x1170) = '\x01';
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c229f0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_7c,auStack_80);
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = fVar4 * 0.5;
  if ((*(float *)(param_3 + 0xcf) != fVar8) ||
     (fVar5 = 25.0, *(float *)((long)param_3 + 0x67c) != 25.0)) {
    *(float *)(param_3 + 0xcf) = fVar8;
    *(undefined4 *)((long)param_3 + 0x67c) = 0x41c80000;
    FUN_0091ada4(param_3 + 199);
    fVar5 = *(float *)((long)param_3 + 0x67c);
  }
  fVar6 = fVar4 * 0.25;
  fVar7 = fVar6 - *(float *)(param_3 + 0x223);
  FUN_00f0d4e0(param_3 + 199);
  fVar5 = ((param_2 - fVar5) - fVar6) + -50.0;
  *(int *)((long)param_3 + 0x112c) = (int)param_3[0x228];
  if ((int)param_3[0x228] != 0) {
    uVar3 = 0;
    do {
      fVar6 = fVar5;
      FUN_00f13f08(fVar7,*(undefined8 *)(param_3[0x229] + uVar3 * 8));
      (**(code **)(**(long **)(param_3[0x229] + uVar3 * 8) + 0x90))();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x228));
  }
  *(float *)(param_3 + 0x222) = fVar7;
  *(float *)((long)param_3 + 0x1114) = fVar5;
  plVar1 = param_3 + 0xed;
  (**(code **)(param_3[0xed] + 0x138))(plVar1,param_3 + 0x222);
  (**(code **)(param_3[0xed] + 0x90))(plVar1);
  fVar5 = (float)FUN_00f13e54(plVar1);
  fVar4 = (fVar4 - fVar5) + -50.0;
  fVar5 = (param_2 - fVar6) + -50.0;
  if ((*(float *)(param_3 + 0xf5) != fVar4) || (*(float *)((long)param_3 + 0x7ac) != fVar5)) {
    *(float *)(param_3 + 0xf5) = fVar4;
    *(float *)((long)param_3 + 0x7ac) = fVar5;
    FUN_0091ada4(plVar1);
  }
  fVar4 = (float)FUN_00f01c20(param_3 + 0x108);
  fVar8 = fVar8 - fVar4 * 0.5;
  fVar4 = param_2 * 0.5 - fVar5 * 0.5;
  if ((*(float *)(param_3 + 0x110) != fVar8) || (*(float *)((long)param_3 + 0x884) != fVar4)) {
    *(float *)(param_3 + 0x110) = fVar8;
    *(float *)((long)param_3 + 0x884) = fVar4;
    FUN_0091ada4(param_3 + 0x108);
  }
  FUN_00f0db64(fVar7,0,0x3f800000,param_3 + 0x1d0);
  FUN_00f0db64(fVar7,0,0x3f800000,param_3 + 0x1f6);
  fVar4 = 0.0;
  plVar1 = param_3 + 0x1b7;
  FUN_00f0bc10(0,0,0,auStack_90);
  FUN_00f0c168(plVar1,auStack_90);
  (**(code **)(param_3[0x1b7] + 0x90))(plVar1);
  FUN_00f13e54(plVar1);
  fVar4 = (param_2 - fVar4) + -50.0;
  if ((*(float *)(param_3 + 0x1bf) != fVar7 * 0.5) || (*(float *)((long)param_3 + 0xdfc) != fVar4))
  {
    *(float *)(param_3 + 0x1bf) = fVar7 * 0.5;
    *(float *)((long)param_3 + 0xdfc) = fVar4;
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c22c90(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1168) = param_2;
  FUN_00b25438(param_1 + 0xfb0,param_1 + 0x1168);
  *(uint *)(param_1 + 0xe3c) = *(uint *)(param_1 + 0xe3c) | 4;
  FUN_00e70314(param_1 + 0x1158);
  return;
}




void FUN_00c22cd4(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  void *local_78;
  long *local_70;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = operator_new(0x148);
  FUN_00f0ac5c();
  local_70 = plVar2;
  FUN_00c22e28(param_1 + 0x1130,&local_70);
  FUN_00f023ec(param_1 + 0x768,local_70,1);
  pvVar3 = operator_new(0x12b8);
  FUN_00ca509c(pvVar3,param_2 + 0x18);
  local_78 = pvVar3;
  FUN_00ca56a8(pvVar3,param_2,*(undefined4 *)(param_2 + 0x38),param_2 + 0x30);
  FUN_00ca578c(pvVar3,*(char *)(param_2 + 0x40) == '\0');
  FUN_00ca57a4(pvVar3,*(undefined1 *)(param_2 + 0x41));
  *(uint *)(*(long *)((long)pvVar3 + 0xdc8) + 0xec4) =
       *(uint *)(*(long *)((long)pvVar3 + 0xdc8) + 0xec4) | 4;
  FUN_00c3b9e4(*(undefined8 *)((long)pvVar3 + 0xdc8),1);
  FUN_00bd6ee0((long)pvVar3 + 0xdc0,1);
  FUN_00b70ff8(param_1 + 0x1140,&local_78);
  (**(code **)(*local_70 + 0x78))(local_70,local_78,1);
  local_48 = (ulong)*(uint *)(param_1 + 0x1140);
  local_40 = DAT_03210c64;
  local_68 = FUN_00c22eb0;
  local_58 = 0;
  uStack_50 = 0;
  lStack_60 = param_1;
  FUN_009693a0((long)local_78 + 8,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c22e28(uint *param_1,undefined8 *param_2)

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
    FUN_00c230cc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c22eb0(long param_1)

{
  int in_w4;
  undefined8 *puVar1;
  
  if ((in_w4 - 1U < *(uint *)(param_1 + 0x1140)) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x630), puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00c22ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)
              (puVar1,*(long *)(*(long *)(param_1 + 0x1148) + (ulong)(in_w4 - 1U) * 8) + 0xdd8);
    return;
  }
  return;
}




void FUN_00c22ee8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  
  if ((param_3 - 1U < *(uint *)(param_1 + 0x1140)) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x630), puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00c22f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)
              (puVar1,*(long *)(*(long *)(param_1 + 0x1148) + (ulong)(param_3 - 1U) * 8) + 0xdd8);
    return;
  }
  return;
}




undefined8 FUN_00c22f20(void)

{
  return 0;
}




void FUN_00c22f28(void)

{
  return;
}




void FUN_00c22f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f8c88;
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    operator_delete((void *)param_1[0xc2]);
  }
  param_1[0x6a] = &PTR_FUN_027dd518;
  FUN_00f0d3a4(param_1 + 0x99);
  param_1[0x7b] = &PTR_FUN_028266f0;
  param_1[0x92] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x95);
  FUN_00f13d08(param_1 + 0x7b);
  FUN_00f01868(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2f] = &PTR_FUN_027da660;
  param_1[0x40] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x46) & 1) != 0) {
    operator_delete((void *)param_1[0x48]);
  }
  FUN_0199fb94(param_1 + 0x43);
  FUN_00f01868(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}

